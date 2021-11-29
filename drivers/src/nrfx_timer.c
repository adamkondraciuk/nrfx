/*$$$LICENCE_NORDIC_STANDARD<2015>$$$*/

#include <nrfx.h>

#if NRFX_CHECK(NRFX_TIMER_ENABLED)

#if !(NRFX_CHECK(NRFX_TIMER0_ENABLED)   || NRFX_CHECK(NRFX_TIMER1_ENABLED)   || \
      NRFX_CHECK(NRFX_TIMER2_ENABLED)   || NRFX_CHECK(NRFX_TIMER3_ENABLED)   || \
      NRFX_CHECK(NRFX_TIMER4_ENABLED)   || NRFX_CHECK(NRFX_TIMER120_ENABLED) || \
      NRFX_CHECK(NRFX_TIMER121_ENABLED) || NRFX_CHECK(NRFX_TIMER130_ENABLED) || \
      NRFX_CHECK(NRFX_TIMER131_ENABLED) || NRFX_CHECK(NRFX_TIMER132_ENABLED) || \
      NRFX_CHECK(NRFX_TIMER133_ENABLED) || NRFX_CHECK(NRFX_TIMER134_ENABLED) || \
      NRFX_CHECK(NRFX_TIMER135_ENABLED) || NRFX_CHECK(NRFX_TIMER136_ENABLED) || \
      NRFX_CHECK(NRFX_TIMER137_ENABLED))
#error "No enabled TIMER instances. Check <nrfx_config.h>."
#endif

#if NRFX_CHECK(NRFX_TIMER0_ENABLED) && ((1 << 0) & NRFX_TIMERS_USED)
    #error "TIMER instance 0 is reserved for use outside of nrfx."
#endif
#if NRFX_CHECK(NRFX_TIMER1_ENABLED) && ((1 << 1) & NRFX_TIMERS_USED)
    #error "TIMER instance 1 is reserved for use outside of nrfx."
#endif
#if NRFX_CHECK(NRFX_TIMER2_ENABLED) && ((1 << 2) & NRFX_TIMERS_USED)
    #error "TIMER instance 2 is reserved for use outside of nrfx."
#endif
#if NRFX_CHECK(NRFX_TIMER3_ENABLED) && ((1 << 3) & NRFX_TIMERS_USED)
    #error "TIMER instance 3 is reserved for use outside of nrfx."
#endif
#if NRFX_CHECK(NRFX_TIMER4_ENABLED) && ((1 << 4) & NRFX_TIMERS_USED)
    #error "TIMER instance 4 is reserved for use outside of nrfx."
#endif
#if NRFX_CHECK(NRFX_TIMER120_ENABLED) && ((1 << 5) & NRFX_TIMERS_USED)
    #error "TIMER instance 120 is reserved for use outside of nrfx."
#endif
#if NRFX_CHECK(NRFX_TIMER121_ENABLED) && ((1 << 6) & NRFX_TIMERS_USED)
    #error "TIMER instance 121 is reserved for use outside of nrfx."
#endif
#if NRFX_CHECK(NRFX_TIMER130_ENABLED) && ((1 << 7) & NRFX_TIMERS_USED)
    #error "TIMER instance 130 is reserved for use outside of nrfx."
#endif
#if NRFX_CHECK(NRFX_TIMER131_ENABLED) && ((1 << 8) & NRFX_TIMERS_USED)
    #error "TIMER instance 131 is reserved for use outside of nrfx."
#endif
#if NRFX_CHECK(NRFX_TIMER132_ENABLED) && ((1 << 9) & NRFX_TIMERS_USED)
    #error "TIMER instance 132 is reserved for use outside of nrfx."
#endif
#if NRFX_CHECK(NRFX_TIMER133_ENABLED) && ((1 << 10) & NRFX_TIMERS_USED)
    #error "TIMER instance 133 is reserved for use outside of nrfx."
#endif
#if NRFX_CHECK(NRFX_TIMER134_ENABLED) && ((1 << 11) & NRFX_TIMERS_USED)
    #error "TIMER instance 134 is reserved for use outside of nrfx."
#endif
#if NRFX_CHECK(NRFX_TIMER135_ENABLED) && ((1 << 12) & NRFX_TIMERS_USED)
    #error "TIMER instance 135 is reserved for use outside of nrfx."
#endif
#if NRFX_CHECK(NRFX_TIMER136_ENABLED) && ((1 << 13) & NRFX_TIMERS_USED)
    #error "TIMER instance 136 is reserved for use outside of nrfx."
#endif
#if NRFX_CHECK(NRFX_TIMER137_ENABLED) && ((1 << 14) & NRFX_TIMERS_USED)
    #error "TIMER instance 137 is reserved for use outside of nrfx."
#endif

#include <nrfx_timer.h>

#define NRFX_LOG_MODULE TIMER
#include <nrfx_log.h>

/** @brief Timer control block. */
typedef struct
{
    nrfx_timer_event_handler_t handler;
    void *                     context;
    nrfx_drv_state_t           state;
} timer_control_block_t;

static timer_control_block_t m_cb[NRFX_TIMER_ENABLED_COUNT];

static void timer_configure(nrfx_timer_t const *        p_instance,
                            nrfx_timer_config_t const * p_config)
{
    nrfy_timer_config_t config =
    {
        .frequency = p_config->frequency,
        .mode      = p_config->mode,
        .bit_width = p_config->bit_width,
    };
    nrfy_timer_periph_configure(p_instance->p_reg, &config);

    nrfy_timer_int_init(p_instance->p_reg,
                        NRF_TIMER_ALL_CHANNELS_INT_MASK,
                        p_config->interrupt_priority,
                        false);
}

nrfx_err_t nrfx_timer_init(nrfx_timer_t const *        p_instance,
                           nrfx_timer_config_t const * p_config,
                           nrfx_timer_event_handler_t  timer_event_handler)
{
    timer_control_block_t * p_cb = &m_cb[p_instance->instance_id];
#ifdef SOFTDEVICE_PRESENT
    NRFX_ASSERT(p_instance->p_reg != NRF_TIMER0);
#endif
    NRFX_ASSERT(p_config);

    nrfx_err_t err_code;

    if (p_cb->state != NRFX_DRV_STATE_UNINITIALIZED)
    {
        err_code = NRFX_ERROR_INVALID_STATE;
        NRFX_LOG_WARNING("Function: %s, error code: %s.",
                         __func__,
                         NRFX_LOG_ERROR_STRING_GET(err_code));
        return err_code;
    }

    p_cb->handler = timer_event_handler;

    if (p_config)
    {
        p_cb->context = p_config->p_context;
        NRFX_ASSERT(NRF_TIMER_IS_BIT_WIDTH_VALID(p_instance->p_reg, p_config->bit_width));
        timer_configure(p_instance, p_config);
    }
    p_cb->state = NRFX_DRV_STATE_INITIALIZED;

    err_code = NRFX_SUCCESS;
    NRFX_LOG_INFO("Function: %s, error code: %s.",
                  __func__,
                  NRFX_LOG_ERROR_STRING_GET(err_code));
    return err_code;
}

nrfx_err_t nrfx_timer_reconfigure(nrfx_timer_t const *        p_instance,
                                  nrfx_timer_config_t const * p_config)
{
    NRFX_ASSERT(p_config);
    timer_control_block_t * p_cb = &m_cb[p_instance->instance_id];

    if (p_cb->state == NRFX_DRV_STATE_UNINITIALIZED)
    {
        return NRFX_ERROR_INVALID_STATE;
    }
    if (p_cb->state == NRFX_DRV_STATE_POWERED_ON)
    {
        return NRFX_ERROR_BUSY;
    }
    p_cb->context = p_config->p_context;
    timer_configure(p_instance, p_config);
    return NRFX_SUCCESS;
}

void nrfx_timer_uninit(nrfx_timer_t const * p_instance)
{
    nrfy_timer_int_uninit(p_instance->p_reg);

    nrfy_timer_shorts_disable(p_instance->p_reg, ~0UL);
    nrfy_timer_int_disable(p_instance->p_reg, ~0UL);

    nrfx_timer_disable(p_instance);

    m_cb[p_instance->instance_id].state = NRFX_DRV_STATE_UNINITIALIZED;
    NRFX_LOG_INFO("Uninitialized instance: %d.", p_instance->instance_id);
}

void nrfx_timer_enable(nrfx_timer_t const * p_instance)
{
    NRFX_ASSERT(m_cb[p_instance->instance_id].state == NRFX_DRV_STATE_INITIALIZED);
    nrfy_timer_task_trigger(p_instance->p_reg, NRF_TIMER_TASK_START);
    m_cb[p_instance->instance_id].state = NRFX_DRV_STATE_POWERED_ON;
    NRFX_LOG_INFO("Enabled instance: %d.", p_instance->instance_id);
}

void nrfx_timer_disable(nrfx_timer_t const * p_instance)
{
    NRFX_ASSERT(m_cb[p_instance->instance_id].state != NRFX_DRV_STATE_UNINITIALIZED);
    nrfy_timer_task_trigger(p_instance->p_reg, NRF_TIMER_TASK_SHUTDOWN);
    m_cb[p_instance->instance_id].state = NRFX_DRV_STATE_INITIALIZED;
    NRFX_LOG_INFO("Disabled instance: %d.", p_instance->instance_id);
}

bool nrfx_timer_is_enabled(nrfx_timer_t const * p_instance)
{
    NRFX_ASSERT(m_cb[p_instance->instance_id].state != NRFX_DRV_STATE_UNINITIALIZED);
    return (m_cb[p_instance->instance_id].state == NRFX_DRV_STATE_POWERED_ON);
}

void nrfx_timer_resume(nrfx_timer_t const * p_instance)
{
    NRFX_ASSERT(m_cb[p_instance->instance_id].state != NRFX_DRV_STATE_UNINITIALIZED);
    nrfy_timer_task_trigger(p_instance->p_reg, NRF_TIMER_TASK_START);
    NRFX_LOG_INFO("Resumed instance: %d.", p_instance->instance_id);
}

void nrfx_timer_pause(nrfx_timer_t const * p_instance)
{
    NRFX_ASSERT(m_cb[p_instance->instance_id].state != NRFX_DRV_STATE_UNINITIALIZED);
    nrfy_timer_task_trigger(p_instance->p_reg, NRF_TIMER_TASK_STOP);
    NRFX_LOG_INFO("Paused instance: %d.", p_instance->instance_id);
}

void nrfx_timer_clear(nrfx_timer_t const * p_instance)
{
    NRFX_ASSERT(m_cb[p_instance->instance_id].state != NRFX_DRV_STATE_UNINITIALIZED);
    nrfy_timer_task_trigger(p_instance->p_reg, NRF_TIMER_TASK_CLEAR);
}

void nrfx_timer_increment(nrfx_timer_t const * p_instance)
{
    NRFX_ASSERT(m_cb[p_instance->instance_id].state != NRFX_DRV_STATE_UNINITIALIZED);
    NRFX_ASSERT(nrfy_timer_mode_get(p_instance->p_reg) != NRF_TIMER_MODE_TIMER);

    nrfy_timer_task_trigger(p_instance->p_reg, NRF_TIMER_TASK_COUNT);
}

uint32_t nrfx_timer_capture(nrfx_timer_t const *   p_instance,
                            nrf_timer_cc_channel_t cc_channel)
{
    NRFX_ASSERT(m_cb[p_instance->instance_id].state != NRFX_DRV_STATE_UNINITIALIZED);
    NRFX_ASSERT(cc_channel < p_instance->cc_channel_count);

    return nrfy_timer_capture_get(p_instance->p_reg, cc_channel);
}

void nrfx_timer_compare(nrfx_timer_t const *   p_instance,
                        nrf_timer_cc_channel_t cc_channel,
                        uint32_t               cc_value,
                        bool                   enable_int)
{
    nrf_timer_int_mask_t timer_int = nrfy_timer_compare_int_get(cc_channel);

    if (enable_int)
    {
        nrfy_timer_event_clear(p_instance->p_reg, nrfy_timer_compare_event_get(cc_channel));
        nrfy_timer_int_enable(p_instance->p_reg, timer_int);
    }
    else
    {
        nrfy_timer_int_disable(p_instance->p_reg, timer_int);
    }

    nrfy_timer_cc_set(p_instance->p_reg, cc_channel, cc_value);
    NRFX_LOG_INFO("Timer id: %d, capture value set: %lu, channel: %d.",
                  p_instance->instance_id,
                  (unsigned long)cc_value,
                  cc_channel);
}

void nrfx_timer_extended_compare(nrfx_timer_t const *   p_instance,
                                 nrf_timer_cc_channel_t cc_channel,
                                 uint32_t               cc_value,
                                 nrf_timer_short_mask_t timer_short_mask,
                                 bool                   enable_int)
{
    nrfy_timer_shorts_disable(p_instance->p_reg,
        (TIMER_SHORTS_COMPARE0_STOP_Msk  << cc_channel) |
        (TIMER_SHORTS_COMPARE0_CLEAR_Msk << cc_channel));

    nrfy_timer_shorts_enable(p_instance->p_reg, timer_short_mask);

    nrfx_timer_compare(p_instance,
                       cc_channel,
                       cc_value,
                       enable_int);
    NRFX_LOG_INFO("Timer id: %d, capture value set: %lu, channel: %d.",
                  p_instance->instance_id,
                  (unsigned long)cc_value,
                  cc_channel);
}

void nrfx_timer_compare_int_enable(nrfx_timer_t const * p_instance,
                                   uint32_t             channel)
{
    NRFX_ASSERT(m_cb[p_instance->instance_id].state != NRFX_DRV_STATE_UNINITIALIZED);
    NRFX_ASSERT(channel < p_instance->cc_channel_count);

    nrfy_timer_event_clear(p_instance->p_reg, nrfy_timer_compare_event_get(channel));
    nrfy_timer_int_enable(p_instance->p_reg, nrfy_timer_compare_int_get(channel));
}

void nrfx_timer_compare_int_disable(nrfx_timer_t const * p_instance,
                                    uint32_t             channel)
{
    NRFX_ASSERT(m_cb[p_instance->instance_id].state != NRFX_DRV_STATE_UNINITIALIZED);
    NRFX_ASSERT(channel < p_instance->cc_channel_count);

    nrfy_timer_int_disable(p_instance->p_reg, nrfy_timer_compare_int_get(channel));
}

static void irq_handler(NRF_TIMER_Type        * p_reg,
                        timer_control_block_t * p_cb,
                        uint8_t                 channel_count)
{
    uint32_t event_mask = nrfy_timer_events_process(p_reg, NRF_TIMER_ALL_CHANNELS_INT_MASK);
    nrf_timer_event_t event;
    uint32_t active_cc_mask = nrfy_timer_int_enable_check(p_reg, NRF_TIMER_ALL_CHANNELS_INT_MASK);

    for (uint8_t i = 0; i < channel_count; ++i)
    {
        event = nrfy_timer_compare_event_get(i);
        if ((active_cc_mask & NRFY_EVENT_TO_INT_BITMASK(event)) &&
            (event_mask & NRFY_EVENT_TO_INT_BITMASK(event)))
        {
            NRFX_LOG_DEBUG("Compare event, channel: %d.", i);
            if (p_cb->handler)
            {
                p_cb->handler(event, p_cb->context);
            }
        }
    }
}

#if NRFX_CHECK(NRFX_TIMER0_ENABLED)
void nrfx_timer_0_irq_handler(void)
{
    irq_handler(NRF_TIMER0, &m_cb[NRFX_TIMER0_INST_IDX],
        NRF_TIMER_CC_CHANNEL_COUNT(0));
}
#endif

#if NRFX_CHECK(NRFX_TIMER1_ENABLED)
void nrfx_timer_1_irq_handler(void)
{
    irq_handler(NRF_TIMER1, &m_cb[NRFX_TIMER1_INST_IDX],
        NRF_TIMER_CC_CHANNEL_COUNT(1));
}
#endif

#if NRFX_CHECK(NRFX_TIMER2_ENABLED)
void nrfx_timer_2_irq_handler(void)
{
    irq_handler(NRF_TIMER2, &m_cb[NRFX_TIMER2_INST_IDX],
        NRF_TIMER_CC_CHANNEL_COUNT(2));
}
#endif

#if NRFX_CHECK(NRFX_TIMER3_ENABLED)
void nrfx_timer_3_irq_handler(void)
{
    irq_handler(NRF_TIMER3, &m_cb[NRFX_TIMER3_INST_IDX],
        NRF_TIMER_CC_CHANNEL_COUNT(3));
}
#endif

#if NRFX_CHECK(NRFX_TIMER4_ENABLED)
void nrfx_timer_4_irq_handler(void)
{
    irq_handler(NRF_TIMER4, &m_cb[NRFX_TIMER4_INST_IDX],
        NRF_TIMER_CC_CHANNEL_COUNT(4));
}
#endif

#if NRFX_CHECK(NRFX_TIMER120_ENABLED)
void nrfx_timer_120_irq_handler(void)
{
    irq_handler(NRF_TIMER120, &m_cb[NRFX_TIMER120_INST_IDX],
        NRF_TIMER_CC_CHANNEL_COUNT(120));
}
#endif

#if NRFX_CHECK(NRFX_TIMER121_ENABLED)
void nrfx_timer_121_irq_handler(void)
{
    irq_handler(NRF_TIMER121, &m_cb[NRFX_TIMER121_INST_IDX],
        NRF_TIMER_CC_CHANNEL_COUNT(121));
}
#endif

#if NRFX_CHECK(NRFX_TIMER130_ENABLED)
void nrfx_timer_130_irq_handler(void)
{
    irq_handler(NRF_TIMER130, &m_cb[NRFX_TIMER130_INST_IDX],
        NRF_TIMER_CC_CHANNEL_COUNT(130));
}
#endif

#if NRFX_CHECK(NRFX_TIMER131_ENABLED)
void nrfx_timer_131_irq_handler(void)
{
    irq_handler(NRF_TIMER131, &m_cb[NRFX_TIMER131_INST_IDX],
        NRF_TIMER_CC_CHANNEL_COUNT(131));
}
#endif

#if NRFX_CHECK(NRFX_TIMER132_ENABLED)
void nrfx_timer_132_irq_handler(void)
{
    irq_handler(NRF_TIMER132, &m_cb[NRFX_TIMER132_INST_IDX],
        NRF_TIMER_CC_CHANNEL_COUNT(132));
}
#endif

#if NRFX_CHECK(NRFX_TIMER133_ENABLED)
void nrfx_timer_133_irq_handler(void)
{
    irq_handler(NRF_TIMER133, &m_cb[NRFX_TIMER133_INST_IDX],
        NRF_TIMER_CC_CHANNEL_COUNT(133));
}
#endif

#if NRFX_CHECK(NRFX_TIMER134_ENABLED)
void nrfx_timer_134_irq_handler(void)
{
    irq_handler(NRF_TIMER134, &m_cb[NRFX_TIMER134_INST_IDX],
        NRF_TIMER_CC_CHANNEL_COUNT(134));
}
#endif

#if NRFX_CHECK(NRFX_TIMER135_ENABLED)
void nrfx_timer_135_irq_handler(void)
{
    irq_handler(NRF_TIMER135, &m_cb[NRFX_TIMER135_INST_IDX],
        NRF_TIMER_CC_CHANNEL_COUNT(135));
}
#endif

#if NRFX_CHECK(NRFX_TIMER136_ENABLED)
void nrfx_timer_136_irq_handler(void)
{
    irq_handler(NRF_TIMER136, &m_cb[NRFX_TIMER136_INST_IDX],
        NRF_TIMER_CC_CHANNEL_COUNT(136));
}
#endif

#if NRFX_CHECK(NRFX_TIMER137_ENABLED)
void nrfx_timer_137_irq_handler(void)
{
    irq_handler(NRF_TIMER137, &m_cb[NRFX_TIMER137_INST_IDX],
        NRF_TIMER_CC_CHANNEL_COUNT(137));
}
#endif

#endif // NRFX_CHECK(NRFX_TIMER_ENABLED)
