/*$$$LICENCE_NORDIC_STANDARD<2021>$$$*/

#include <nrfx.h>

#if NRFX_CHECK(NRFX_GRTC_ENABLED)

#include <nrfx_grtc.h>
#include <helpers/nrfx_flag32_allocator.h>

#define NRFX_LOG_MODULE GRTC
#include <nrfx_log.h>

#define GRTC_ACTION_TO_STR(action)                                                     \
    (action == NRFX_GRTC_RTCOUNTER_ACTION_START ? "NRFX_GRTC_RTCOUNTER_ACTION_START" : \
    (action == NRFX_GRTC_RTCOUNTER_ACTION_STOP  ? "NRFX_GRTC_RTCOUNTER_ACTION_STOP"  : \
    (action == NRFX_GRTC_RTCOUNTER_ACTION_CLEAR ? "NRFX_GRTC_RTCOUNTER_ACTION_CLEAR" : \
                                                  "UNKNOWN ACTION")))

#define GRTC_CHANNEL_TO_BITMASK(chan)          NRFX_BIT(chan)
#define GRTC_CHANNEL_MASK_TO_INT_MASK(ch_mask) ((ch_mask) << GRTC_INTEN0_COMPARE0_Pos)

#if !defined(NRFX_GRTC_CONFIG_ALLOWED_CC_CHANNELS_MASK)
#define NRFX_GRTC_CONFIG_ALLOWED_CC_CHANNELS_MASK 0
#endif

#if !defined(NRFX_GRTC_CONFIG_NUM_OF_CC_CHANNELS)
#define NRFX_GRTC_CONFIG_NUM_OF_CC_CHANNELS 0
#endif

#define GRTC_NON_SYSCOMPARE_INT_MASK   (NRF_GRTC_INT_RTCOMPARE_MASK     | \
                                        NRF_GRTC_INT_RTCOMPARESYNC_MASK | \
                                        NRF_GRTC_INT_SYSCOUNTERVALID_MASK)
#define GRTC_ALL_INT_MASK              (NRFX_GRTC_CONFIG_ALLOWED_CC_CHANNELS_MASK | \
                                        GRTC_NON_SYSCOMPARE_INT_MASK)
#define GRTC_RTCOUNTER_CC_HANDLER_IDX  NRFX_GRTC_CONFIG_NUM_OF_CC_CHANNELS
#define GRTC_RTCOUNTER_COMPARE_CHANNEL NRF_GRTC_SYSCOUNTER_CC_COUNT

/* Verify that only System Controller or Secure Domain possesses main capture/compare channel. */
#if NRFY_GRTC_HAS_EXTENDED
NRFX_STATIC_ASSERT(NRFX_GRTC_CONFIG_ALLOWED_CC_CHANNELS_MASK &
                   GRTC_CHANNEL_TO_BITMASK(NRF_GRTC_MAIN_CC_CHANNEL));
#else
NRFX_STATIC_ASSERT(!(NRFX_GRTC_CONFIG_ALLOWED_CC_CHANNELS_MASK &
                     GRTC_CHANNEL_TO_BITMASK(NRF_GRTC_MAIN_CC_CHANNEL)));
#endif

typedef struct
{
    nrfx_drv_state_t                    state;                                                 /**< Driver state. */
    nrfx_atomic_t                       available_channels;                                    /**< Bitmask of available channels. */
    uint32_t                            used_channels;                                         /**< Bitmask of channels used by the driver. */
    nrfx_grtc_channel_t                 channel_data[NRFX_GRTC_CONFIG_NUM_OF_CC_CHANNELS + 1]; /**< Channel specific data. */
    nrfx_grtc_syscountervalid_handler_t syscountervalid_handler;                               /**< User handler corresponding to syscountervalid event. */
    void *                              syscountervalid_context;                               /**< User context for syscountervalid event handler. */
} nrfx_grtc_cb_t;

static nrfx_grtc_cb_t m_cb =
{
    // At the initialization only channels assigned by configuration are available.
    .available_channels = (nrfx_atomic_t)NRFX_GRTC_CONFIG_ALLOWED_CC_CHANNELS_MASK
};

static uint8_t num_of_channels_get(uint32_t mask)
{
    uint8_t ch_count = 0;

    while (mask)
    {
        // Calculating number of channels by counting ones inside given mask.
        ch_count += mask & 0x1;
        mask >>= 1;
    }
    return ch_count;
}

static uint32_t allocated_channels_mask_get(void)
{
    return NRFX_GRTC_CONFIG_ALLOWED_CC_CHANNELS_MASK & ~m_cb.available_channels;
}

static uint32_t used_channels_mask_get(void)
{
    return NRFX_GRTC_CONFIG_ALLOWED_CC_CHANNELS_MASK & m_cb.used_channels;
}

static bool is_syscounter_running(void)
{
    return nrfy_grtc_sys_counter_check(NRF_GRTC);
}

static bool is_channel_used(uint8_t channel)
{
    return (GRTC_CHANNEL_TO_BITMASK(channel) & used_channels_mask_get());
}

static bool is_channel_allocated(uint8_t channel)
{
    return (GRTC_CHANNEL_TO_BITMASK(channel) & allocated_channels_mask_get());
}

static void channel_used_mark(uint8_t channel)
{
    m_cb.used_channels |= GRTC_CHANNEL_TO_BITMASK(channel);
}

static void channel_used_unmark(uint8_t channel)
{
    m_cb.used_channels &= ~GRTC_CHANNEL_TO_BITMASK(channel);
}

static bool is_channel_available(uint8_t channel)
{
    return (GRTC_CHANNEL_TO_BITMASK(channel) & NRFX_GRTC_CONFIG_ALLOWED_CC_CHANNELS_MASK);
}

/* TODO: [NRFX-1250]: Currently we are not sure whether local domains are able to read
 *       corresponding event for SYSCOUNTER on used targets so temporarily this function is called
 *       with @p should_be_active equals false. */
static nrfx_err_t syscounter_check(uint8_t channel, bool should_be_active)
{
    if (should_be_active && !is_syscounter_running())
    {
        return NRFX_ERROR_INTERNAL;
    }
    if (!is_channel_available(channel))
    {
        return NRFX_ERROR_FORBIDDEN;
    }
    if (!is_channel_allocated(channel))
    {
        return NRFX_ERROR_INVALID_PARAM;
    }
    return NRFX_SUCCESS;
}

static uint8_t get_channel_for_ch_data_idx(uint8_t idx)
{
    uint32_t ch_mask = NRFX_GRTC_CONFIG_ALLOWED_CC_CHANNELS_MASK;

    for (uint8_t i = 0; i < idx; i++)
    {
        ch_mask &= ~(1 << NRF_CTZ(ch_mask));
    }
    return NRF_CTZ(ch_mask);
}

static uint8_t get_ch_data_index_for_channel(uint8_t channel)
{
    uint32_t ch_mask = NRFX_GRTC_CONFIG_ALLOWED_CC_CHANNELS_MASK;
    uint8_t  idx;

    for (idx = 0; channel != NRF_CTZ(ch_mask); idx++)
    {
        ch_mask &= ~(1 << NRF_CTZ(ch_mask));
    }
    return idx;
}

static void cc_channel_prepare(nrfx_grtc_channel_t * p_chan_data)
{
    NRFX_ASSERT(p_chan_data);
    uint8_t ch_data_idx = get_ch_data_index_for_channel(p_chan_data->channel);

    nrfy_grtc_sys_counter_compare_event_disable(NRF_GRTC, p_chan_data->channel);

    m_cb.channel_data[ch_data_idx].handler   = p_chan_data->handler;
    m_cb.channel_data[ch_data_idx].p_context = p_chan_data->p_context;
    m_cb.channel_data[ch_data_idx].channel   = p_chan_data->channel;
    channel_used_mark(p_chan_data->channel);
}

void nrfx_grtc_active_request_set(bool active)
{
    NRFX_ASSERT(m_cb.state == NRFX_DRV_STATE_INITIALIZED);

#if NRFY_GRTC_HAS_SYSCOUNTER_ARRAY
    nrfy_grtc_sys_counter_active_set(NRF_GRTC, active);
#else
    nrfy_grtc_sys_counter_active_state_request_set(NRF_GRTC, active);
#endif
}

nrfx_err_t nrfx_grtc_syscounter_get(uint64_t * p_counter)
{
    NRFX_ASSERT(m_cb.state == NRFX_DRV_STATE_INITIALIZED);
    NRFX_ASSERT(p_counter);
    *p_counter = 0;
    nrfx_err_t err_code = NRFX_SUCCESS;
    if (!is_syscounter_running())
    {
        err_code = NRFX_ERROR_INTERNAL;
        NRFX_LOG_WARNING("Function: %s, error code: %s.",
                         __func__,
                         NRFX_LOG_ERROR_STRING_GET(err_code));
        return err_code;
    }

#if NRFY_GRTC_HAS_SYSCOUNTER_ARRAY
    if (nrfy_grtc_sys_counter_active_check(NRF_GRTC))
    {
        while (!nrfy_grtc_sys_conter_ready_check(NRF_GRTC))
        {}
        *p_counter = nrfy_grtc_sys_counter_get(NRF_GRTC);
    }
    else
    {
        nrfy_grtc_sys_counter_active_set(NRF_GRTC, true);
        while (!nrfy_grtc_sys_conter_ready_check(NRF_GRTC))
        {}
        *p_counter = nrfy_grtc_sys_counter_get(NRF_GRTC);
        nrfy_grtc_sys_counter_active_set(NRF_GRTC, false);
    }
#else
    *p_counter = nrfy_grtc_sys_counter_get(NRF_GRTC);
#endif

    return err_code;
}

nrfx_err_t nrfx_grtc_channel_alloc(uint8_t * p_channel)
{
    NRFX_ASSERT(p_channel);
    nrfx_err_t err_code = nrfx_flag32_alloc(&m_cb.available_channels, p_channel);

    if (err_code != NRFX_SUCCESS)
    {
        NRFX_LOG_WARNING("Function: %s, error code: %s.",
                         __func__,
                         NRFX_LOG_ERROR_STRING_GET(err_code));
    }

    NRFX_LOG_INFO("GRTC channel %u allocated.", *p_channel);
    return err_code;
}

nrfx_err_t nrfx_grtc_channel_free(uint8_t channel)
{
    NRFX_ASSERT(channel < NRF_GRTC_SYSCOUNTER_CC_COUNT);
    NRFX_ASSERT(channel != NRF_GRTC_MAIN_CC_CHANNEL);
    nrfx_err_t err_code;

    channel_used_unmark(channel);
    if (!is_channel_available(channel))
    {
        err_code = NRFX_ERROR_FORBIDDEN;
        NRFX_LOG_WARNING("Function: %s, error code: %s.",
                         __func__,
                         NRFX_LOG_ERROR_STRING_GET(err_code));
        return err_code;
    }

    err_code = nrfx_flag32_free(&m_cb.available_channels, channel);
    if (err_code != NRFX_SUCCESS)
    {
        NRFX_LOG_WARNING("Function: %s, error code: %s.",
                         __func__,
                         NRFX_LOG_ERROR_STRING_GET(err_code));
        return err_code;
    }

    NRFX_LOG_INFO("GRTC channel %u freed.", channel);
    return err_code;
}

bool nrfx_grtc_is_channel_used(uint8_t channel)
{
    return is_channel_used(channel);
}

nrfx_err_t nrfx_grtc_init(uint8_t interrupt_priority)
{
    nrfx_err_t err_code = NRFX_SUCCESS;

    if (m_cb.state != NRFX_DRV_STATE_UNINITIALIZED)
    {
        err_code = NRFX_ERROR_INVALID_STATE;
        NRFX_LOG_WARNING("Function: %s, error code: %s.",
                         __func__,
                         NRFX_LOG_ERROR_STRING_GET(err_code));
        return err_code;
    }
    if ((num_of_channels_get(NRFX_GRTC_CONFIG_ALLOWED_CC_CHANNELS_MASK) !=
         NRFX_GRTC_CONFIG_NUM_OF_CC_CHANNELS) || (NRFX_GRTC_CONFIG_NUM_OF_CC_CHANNELS == 0))
    {
        err_code = NRFX_ERROR_INTERNAL;
        NRFX_LOG_WARNING("Function: %s, error code: %s.",
                         __func__,
                         NRFX_LOG_ERROR_STRING_GET(err_code));
        return err_code;
    }

    for (uint8_t i = 0; i < NRFX_GRTC_CONFIG_NUM_OF_CC_CHANNELS; i++)
    {
        m_cb.channel_data[i].channel = get_channel_for_ch_data_idx(i);
    }

    nrfy_grtc_int_init(NRF_GRTC, GRTC_ALL_INT_MASK, interrupt_priority, false);

    m_cb.state = NRFX_DRV_STATE_INITIALIZED;

    NRFX_LOG_INFO("GRTC initialized.");
    return err_code;
}

#if NRFY_GRTC_HAS_EXTENDED
nrfx_err_t nrfx_grtc_rtcounter_start(bool busy_wait)
{
    NRFX_ASSERT(m_cb.state == NRFX_DRV_STATE_INITIALIZED);
    nrfx_err_t err_code = NRFX_SUCCESS;

    if (is_syscounter_running())
    {
        err_code = NRFX_ERROR_INTERNAL;
        NRFX_LOG_WARNING("Function: %s, error code: %s.",
                         __func__,
                         NRFX_LOG_ERROR_STRING_GET(err_code));
        return err_code;
    }
    nrfy_grtc_rt_counter_start(NRF_GRTC, busy_wait);

    NRFX_LOG_INFO("GRTC RTCOUNTER started.");
    return err_code;
}

nrfx_err_t nrfx_grtc_syscounter_start(bool busy_wait, uint8_t * p_main_cc_channel)
{
    NRFX_ASSERT(m_cb.state == NRFX_DRV_STATE_INITIALIZED);
    NRFX_ASSERT(p_main_cc_channel);
    NRFX_ASSERT(m_cb.channel_data[0].channel == NRF_GRTC_MAIN_CC_CHANNEL);
    nrfx_err_t    err_code  = NRFX_SUCCESS;
    nrfx_atomic_t init_mask = GRTC_CHANNEL_TO_BITMASK(NRF_GRTC_MAIN_CC_CHANNEL) &
                              m_cb.available_channels;

    err_code = nrfx_flag32_alloc(&init_mask, &m_cb.channel_data[0].channel);
    if (err_code != NRFX_SUCCESS)
    {
        NRFX_LOG_WARNING("Function: %s, error code: %s.",
                         __func__,
                         NRFX_LOG_ERROR_STRING_GET(err_code));
        return err_code;
    }

    *p_main_cc_channel       = NRF_GRTC_MAIN_CC_CHANNEL;
    m_cb.available_channels &= ~GRTC_CHANNEL_TO_BITMASK(NRF_GRTC_MAIN_CC_CHANNEL);
    channel_used_mark(NRF_GRTC_MAIN_CC_CHANNEL);
    NRFX_LOG_INFO("GRTC channel %u allocated.", m_cb.channel_data[0].channel);

    if (is_syscounter_running())
    {
        err_code = NRFX_ERROR_ALREADY_INITIALIZED;
        NRFX_LOG_WARNING("Function: %s, error code: %s.",
                         __func__,
                         NRFX_LOG_ERROR_STRING_GET(err_code));
        return err_code;
    }
    nrfy_grtc_sys_counter_start(NRF_GRTC, busy_wait);

    NRFX_LOG_INFO("GRTC SYSCOUNTER started.");
    return err_code;
}

nrfx_err_t nrfx_grtc_rtcounter_action_perform(nrfx_grtc_rtcounter_action_t action)
{
    NRFX_ASSERT(m_cb.state == NRFX_DRV_STATE_INITIALIZED);
    nrfx_err_t err_code = NRFX_SUCCESS;

    if (is_syscounter_running())
    {
        err_code = NRFX_ERROR_INTERNAL;
        NRFX_LOG_WARNING("Function: %s, error code: %s.",
                         __func__,
                         NRFX_LOG_ERROR_STRING_GET(err_code));

        return err_code;
    }

    nrf_grtc_task_t task = (nrf_grtc_task_t)action;
    nrfy_grtc_task_trigger(NRF_GRTC, task);

    NRFX_LOG_INFO("GRTC RTCOUNTER %s action.", GRTC_ACTION_TO_STR(action));
    return err_code;
}

nrfx_err_t nrfx_grtc_rtcounter_cc_disable(void)
{
    NRFX_ASSERT(m_cb.state != NRFX_DRV_STATE_UNINITIALIZED);
    nrfx_err_t err_code = NRFX_SUCCESS;
    uint32_t   int_mask = NRF_GRTC_INT_RTCOMPARE_MASK | NRF_GRTC_INT_RTCOMPARESYNC_MASK;

    if (is_syscounter_running())
    {
        err_code = NRFX_ERROR_INTERNAL;
        NRFX_LOG_WARNING("Function: %s, error code: %s.",
                         __func__,
                         NRFX_LOG_ERROR_STRING_GET(err_code));
        return err_code;
    }

    if (nrfy_grtc_int_enable_check(NRF_GRTC, int_mask))
    {
        nrfy_grtc_int_disable(NRF_GRTC, int_mask);
        if (nrfy_grtc_event_check(NRF_GRTC, NRF_GRTC_EVENT_RTCOMPARE) ||
            nrfy_grtc_event_check(NRF_GRTC, NRF_GRTC_EVENT_RTCOMPARESYNC))
        {
            nrfy_grtc_event_clear(NRF_GRTC, NRF_GRTC_EVENT_RTCOMPARE);
            nrfy_grtc_event_clear(NRF_GRTC, NRF_GRTC_EVENT_RTCOMPARESYNC);
            err_code = NRFX_ERROR_TIMEOUT;
            NRFX_LOG_WARNING("Function: %s, error code: %s.",
                             __func__,
                             NRFX_LOG_ERROR_STRING_GET(err_code));
            return err_code;
        }
    }

    NRFX_LOG_INFO("GRTC RTCOUNTER compare disabled.");
    return err_code;
}

nrfx_err_t nrfx_grtc_rtcounter_cc_absolute_set(nrfx_grtc_rtcounter_handler_data_t * p_handler_data,
                                               uint64_t                             val,
                                               bool                                 enable_irq,
                                               bool                                 sync)
{
    NRFX_ASSERT(m_cb.state != NRFX_DRV_STATE_UNINITIALIZED);
    NRFX_ASSERT(p_handler_data);
    nrfx_err_t err_code = NRFX_SUCCESS;

    if (is_syscounter_running())
    {
        err_code = NRFX_ERROR_INTERNAL;
        NRFX_LOG_WARNING("Function: %s, error code: %s.",
                         __func__,
                         NRFX_LOG_ERROR_STRING_GET(err_code));
        return err_code;
    }
    nrfx_grtc_channel_t * p_chan_data = &m_cb.channel_data[GRTC_RTCOUNTER_CC_HANDLER_IDX];

    nrf_grtc_event_t event = sync ? NRF_GRTC_EVENT_RTCOMPARESYNC :
                                    NRF_GRTC_EVENT_RTCOMPARE;

    p_chan_data->handler   = p_handler_data->handler;
    p_chan_data->p_context = p_handler_data->p_context;
    p_chan_data->channel   = GRTC_RTCOUNTER_COMPARE_CHANNEL;

    nrfy_grtc_rt_counter_cc_set(NRF_GRTC, val, sync);

    nrfy_grtc_event_clear(NRF_GRTC, event);
    if (enable_irq)
    {
        nrfy_grtc_int_enable(NRF_GRTC, NRFY_EVENT_TO_INT_BITMASK(event));
    }

    NRFX_LOG_INFO("GRTC RTCOUNTER compare set to %llu.", val);
    return err_code;
}
#endif // NRFY_GRTC_HAS_EXTENDED

void nrfx_grtc_uninit(void)
{
    uint32_t ch_mask = allocated_channels_mask_get();

    NRFX_ASSERT(m_cb.state != NRFX_DRV_STATE_UNINITIALIZED);

    nrfy_grtc_int_disable(NRF_GRTC, GRTC_ALL_INT_MASK);

    for (uint8_t chan = 0; ch_mask; chan++, ch_mask >>= 1)
    {
        if (is_channel_used(chan))
        {
            channel_used_unmark(chan);
            if (is_channel_allocated(chan))
            {
                nrfy_grtc_sys_counter_compare_event_disable(NRF_GRTC, chan);
                if (ch_mask & 0x1)
                {
                    (void)nrfx_flag32_free(&m_cb.available_channels, chan);
                }
            }
        }
    }
    nrfy_grtc_int_uninit(NRF_GRTC);

#if NRFY_GRTC_HAS_EXTENDED
    nrfy_grtc_sys_counter_auto_mode_set(NRF_GRTC, false);
    nrfy_grtc_sys_counter_set(NRF_GRTC, false);
#endif

#if NRFY_GRTC_HAS_SYSCOUNTER_ARRAY
    nrfy_grtc_sys_counter_active_set(NRF_GRTC, false);
#else
    nrfy_grtc_sys_counter_active_state_request_set(NRF_GRTC, false);
#endif

    m_cb.state = NRFX_DRV_STATE_UNINITIALIZED;
    NRFX_LOG_INFO("GRTC uninitialized.");
}

void nrfx_grtc_rtcounter_cc_int_enable(bool sync)
{
    NRFX_ASSERT(m_cb.state != NRFX_DRV_STATE_UNINITIALIZED);
    nrf_grtc_event_t event = sync ? NRF_GRTC_EVENT_RTCOMPARE : NRF_GRTC_EVENT_RTCOMPARESYNC;

    nrfy_grtc_event_clear(NRF_GRTC, event);
    nrfy_grtc_int_enable(NRF_GRTC, NRFY_EVENT_TO_INT_BITMASK(event));
    NRFX_LOG_INFO("GRTC RTCOMPARE%s interrupt enabled.", sync ? "SYNC" : "");
}

void nrfx_grtc_rtcounter_cc_int_disable(void)
{
    NRFX_ASSERT(m_cb.state != NRFX_DRV_STATE_UNINITIALIZED);

    nrfy_grtc_int_disable(NRF_GRTC, NRF_GRTC_INT_RTCOMPARE_MASK | NRF_GRTC_INT_RTCOMPARESYNC_MASK);
    NRFX_LOG_INFO("GRTC RTCOMPARE/RTCOMPARESYNC interrupt disabled.");
}

void nrfx_grtc_syscountervalid_int_enable(nrfx_grtc_syscountervalid_handler_t handler,
                                          void *                              p_context)
{
    NRFX_ASSERT(m_cb.state != NRFX_DRV_STATE_UNINITIALIZED);

    m_cb.syscountervalid_handler = handler;
    m_cb.syscountervalid_context = p_context;
    nrfy_grtc_event_clear(NRF_GRTC, NRF_GRTC_EVENT_SYSCOUNTERVALID);
    nrfy_grtc_int_enable(NRF_GRTC, NRFY_EVENT_TO_INT_BITMASK(NRF_GRTC_EVENT_SYSCOUNTERVALID));
    NRFX_LOG_INFO("GRTC SYSCOUNTERVALID interrupt enabled.");
}

void nrfx_grtc_syscountervalid_int_disable(void)
{
    NRFX_ASSERT(m_cb.state != NRFX_DRV_STATE_UNINITIALIZED);

    nrfy_grtc_int_disable(NRF_GRTC, NRF_GRTC_INT_SYSCOUNTERVALID_MASK);
    NRFX_LOG_INFO("GRTC SYSCOUNTERVALID interrupt disabled.");
}

nrfx_err_t nrfx_grtc_syscounter_cc_disable(uint8_t channel)
{
    NRFX_ASSERT(m_cb.state != NRFX_DRV_STATE_UNINITIALIZED);
    uint32_t   int_mask = NRF_GRTC_CHANNEL_INT_MASK(channel);
    nrfx_err_t err_code = syscounter_check(channel, false);
    if (err_code != NRFX_SUCCESS)
    {
        NRFX_LOG_WARNING("Function: %s, error code: %s.",
                         __func__,
                         NRFX_LOG_ERROR_STRING_GET(err_code));
        return err_code;
    }
    if (!is_channel_used(channel))
    {
        err_code = NRFX_ERROR_INVALID_PARAM;
        NRFX_LOG_WARNING("Function: %s, error code: %s.",
                         __func__,
                         NRFX_LOG_ERROR_STRING_GET(err_code));
        return err_code;
    }
    channel_used_unmark(channel);

    nrfy_grtc_sys_counter_compare_event_disable(NRF_GRTC, channel);

    if (nrfy_grtc_int_enable_check(NRF_GRTC, int_mask))
    {
        nrfy_grtc_int_disable(NRF_GRTC, int_mask);
        if (nrfy_grtc_sys_counter_compare_event_check(NRF_GRTC, channel))
        {
            nrfy_grtc_sys_counter_compare_event_clear(NRF_GRTC, channel);
            err_code = NRFX_ERROR_TIMEOUT;
            NRFX_LOG_WARNING("Function: %s, error code: %s.",
                             __func__,
                             NRFX_LOG_ERROR_STRING_GET(err_code));
            return err_code;
        }
    }
    NRFX_LOG_INFO("GRTC SYSCOUNTER compare for channel %u disabled.", (uint32_t)channel);
    return err_code;
}

nrfx_err_t nrfx_grtc_syscounter_cc_absolute_set(nrfx_grtc_channel_t * p_chan_data,
                                                uint64_t              val,
                                                bool                  enable_irq)
{
    NRFX_ASSERT(m_cb.state != NRFX_DRV_STATE_UNINITIALIZED);
    NRFX_ASSERT(p_chan_data);
    nrfx_err_t err_code = syscounter_check(p_chan_data->channel, false);
    if (err_code != NRFX_SUCCESS)
    {
        NRFX_LOG_WARNING("Function: %s, error code: %s.",
                         __func__,
                         NRFX_LOG_ERROR_STRING_GET(err_code));
        return err_code;
    }

    cc_channel_prepare(p_chan_data);
    nrfy_grtc_sys_counter_cc_set(NRF_GRTC, p_chan_data->channel, val);
    nrfy_grtc_sys_counter_compare_event_int_clear_enable(NRF_GRTC,
                                                         p_chan_data->channel,
                                                         enable_irq);

    NRFX_LOG_INFO("GRTC SYSCOUNTER absolute compare for channel %u set to %u.",
                  (uint32_t)p_chan_data->channel, (uint32_t)val);
    return err_code;
}

nrfx_err_t nrfx_grtc_syscounter_cc_relative_set(nrfx_grtc_channel_t *             p_chan_data,
                                                uint32_t                          val,
                                                bool                              enable_irq,
                                                nrfx_grtc_cc_relative_reference_t reference)
{
    NRFX_ASSERT(m_cb.state != NRFX_DRV_STATE_UNINITIALIZED);
    NRFX_ASSERT(p_chan_data);
    nrfx_err_t err_code = syscounter_check(p_chan_data->channel, false);
    if (err_code != NRFX_SUCCESS)
    {
        NRFX_LOG_WARNING("Function: %s, error code: %s.",
                         __func__,
                         NRFX_LOG_ERROR_STRING_GET(err_code));
        return err_code;
    }

    cc_channel_prepare(p_chan_data);
    nrfy_grtc_sys_counter_cc_add_set(NRF_GRTC, p_chan_data->channel,
                                     val,
                                     (nrf_grtc_cc_add_reference_t)reference);
    nrfy_grtc_sys_counter_compare_event_int_clear_enable(NRF_GRTC,
                                                         p_chan_data->channel,
                                                         enable_irq);

    NRFX_LOG_INFO("GRTC SYSCOUNTER compare for channel %u set to %u.",
                  (uint32_t)p_chan_data->channel,
                  (uint32_t)val);
    return err_code;
}

nrfx_err_t nrfx_grtc_syscounter_cc_int_disable(uint8_t channel)
{
    NRFX_ASSERT(m_cb.state != NRFX_DRV_STATE_UNINITIALIZED);
    nrfx_err_t err_code = syscounter_check(channel, false);
    if (err_code != NRFX_SUCCESS)
    {
        NRFX_LOG_WARNING("Function: %s, error code: %s.",
                         __func__,
                         NRFX_LOG_ERROR_STRING_GET(err_code));
        return err_code;
    }
    if (!is_channel_used(channel))
    {
        err_code = NRFX_ERROR_INVALID_PARAM;
        NRFX_LOG_WARNING("Function: %s, error code: %s.",
                         __func__,
                         NRFX_LOG_ERROR_STRING_GET(err_code));
        return err_code;
    }

    nrfy_grtc_int_disable(NRF_GRTC, NRF_GRTC_CHANNEL_INT_MASK(channel));
    NRFX_LOG_INFO("GRTC SYSCOUNTER compare interrupt for channel %u disabled.", (uint32_t)channel);
    return err_code;
}

nrfx_err_t nrfx_grtc_syscounter_cc_int_enable(uint8_t channel)
{
    NRFX_ASSERT(m_cb.state != NRFX_DRV_STATE_UNINITIALIZED);
    nrfx_err_t err_code = syscounter_check(channel, false);
    if (err_code != NRFX_SUCCESS)
    {
        NRFX_LOG_WARNING("Function: %s, error code: %s.",
                         __func__,
                         NRFX_LOG_ERROR_STRING_GET(err_code));
        return err_code;
    }
    channel_used_mark(channel);
    nrfy_grtc_sys_counter_compare_event_int_clear_enable(NRF_GRTC, channel, true);
    NRFX_LOG_INFO("GRTC SYSCOUNTER compare interrupt for channel %u enabled.", (uint32_t)channel);
    return err_code;
}

nrfx_err_t nrfx_grtc_syscounter_capture(uint8_t channel)
{
    NRFX_ASSERT(m_cb.state != NRFX_DRV_STATE_UNINITIALIZED);
    nrfx_err_t err_code = syscounter_check(channel, false);
    if (err_code != NRFX_SUCCESS)
    {
        NRFX_LOG_WARNING("Function: %s, error code: %s.",
                         __func__,
                         NRFX_LOG_ERROR_STRING_GET(err_code));
        return err_code;
    }
    channel_used_mark(channel);
    nrfy_grtc_task_trigger(NRF_GRTC, nrfy_grtc_capture_task_get(channel));

    NRFX_LOG_INFO("GRTC SYSCOUNTER capture for channel %u triggered.", (uint32_t)channel);
    return err_code;
}

nrfx_err_t nrfx_grtc_syscounter_cc_value_read(uint8_t channel, uint64_t * p_val)
{
    NRFX_ASSERT(m_cb.state != NRFX_DRV_STATE_UNINITIALIZED);
    NRFX_ASSERT(p_val);
    nrfx_err_t err_code = syscounter_check(channel, false);
    if (err_code != NRFX_SUCCESS)
    {
        NRFX_LOG_WARNING("Function: %s, error code: %s.",
                         __func__,
                         NRFX_LOG_ERROR_STRING_GET(err_code));
        return err_code;
    }
    if (!is_channel_used(channel))
    {
        err_code = NRFX_ERROR_INVALID_PARAM;
        NRFX_LOG_WARNING("Function: %s, error code: %s.",
                         __func__,
                         NRFX_LOG_ERROR_STRING_GET(err_code));
        return err_code;
    }

    *p_val = nrfy_grtc_sys_counter_cc_get(NRF_GRTC, channel);

    NRFX_LOG_INFO("GRTC SYSCOUNTER capture for channel %u read: %llu.", (uint32_t)channel, *p_val);
    return err_code;
}

static void grtc_irq_handler(void)
{
    uint32_t evt_to_process = GRTC_CHANNEL_MASK_TO_INT_MASK(allocated_channels_mask_get() &
                                                            used_channels_mask_get()) |
                              (GRTC_NON_SYSCOMPARE_INT_MASK & ~NRF_GRTC_INT_SYSCOUNTERVALID_MASK);
    uint32_t         event_mask      = nrfy_grtc_events_process(NRF_GRTC, evt_to_process);
    uint32_t         active_int_mask = nrfy_grtc_int_enable_check(NRF_GRTC, event_mask);
    nrf_grtc_event_t event;

    for (uint32_t i = 0; i < NRFX_GRTC_CONFIG_NUM_OF_CC_CHANNELS; i++)
    {
        uint8_t channel = m_cb.channel_data[i].channel;

        event = nrfy_grtc_sys_counter_compare_event_get(channel);
        if (active_int_mask & NRFY_EVENT_TO_INT_BITMASK(event))
        {
            //TODO: Remove when HM-15402 is fixed.
            if (channel == NRF_GRTC_MAIN_CC_CHANNEL)
            {
                nrfy_grtc_sys_counter_compare_event_disable(NRF_GRTC, channel);
            }
            NRFX_LOG_INFO("Event: NRF_GRTC_EVENT_COMPARE_%d.", channel);
            if (m_cb.channel_data[i].handler)
            {
                m_cb.channel_data[i].handler((int32_t)channel,
                                             nrfy_grtc_sys_counter_cc_get(NRF_GRTC, channel),
                                             m_cb.channel_data[i].p_context);
            }
        }
    }
#if NRFY_GRTC_HAS_EXTENDED
    if (active_int_mask & (NRF_GRTC_INT_RTCOMPARE_MASK | NRF_GRTC_INT_RTCOMPARESYNC_MASK))
    {
        NRFX_LOG_INFO("Event: NRF_GRTC_EVENT_RTCOMPARE/NRF_GRTC_EVENT_RTCOMPARESYNC.");
        nrfx_grtc_channel_t const * p_channel = &m_cb.channel_data[GRTC_RTCOUNTER_CC_HANDLER_IDX];
        if (p_channel->handler)
        {
            p_channel->handler((int32_t)GRTC_RTCOUNTER_COMPARE_CHANNEL,
                               nrfy_grtc_rt_counter_cc_get(NRF_GRTC),
                               p_channel->p_context);
        }
    }
#endif // NRFY_GRTC_HAS_EXTENDED

    /* The SYSCOUNTERVALID bit is automatically cleared when GRTC goes into sleep state and set
     * when returning from this state. It can't be cleared inside the ISR procedure because we rely
     * on it during SYSCOUNTER value reading procedure. */
    if (nrfy_grtc_event_check(NRF_GRTC, NRF_GRTC_EVENT_SYSCOUNTERVALID) &&
        nrfy_grtc_int_enable_check(NRF_GRTC, NRF_GRTC_INT_SYSCOUNTERVALID_MASK))
    {
        //TODO: Check whether such procedure is valid when HM-15400 is fixed.
        nrfy_grtc_int_disable(NRF_GRTC, NRF_GRTC_INT_SYSCOUNTERVALID_MASK);
        NRFX_LOG_INFO("Event: NRF_GRTC_EVENT_SYSCOUNTERVALID.");
        if (m_cb.syscountervalid_handler)
        {
            m_cb.syscountervalid_handler(m_cb.syscountervalid_context);
        }
    }
}

void nrfx_grtc_irq_handler(void)
{
    grtc_irq_handler();
}

#endif // NRFX_CHECK(NRFX_GRTC_ENABLED)
