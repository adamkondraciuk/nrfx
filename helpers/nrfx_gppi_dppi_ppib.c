/*$$$LICENCE_NORDIC_STANDARD<2022>$$$*/

#include <helpers/nrfx_gppi.h>

#if defined(HALTIUM_XXAA) && defined(NRFX_PPIB_ENABLED)
#include <string.h>
#include <soc/nrfx_apb.h>
#include <hal/nrf_ppib.h>
#include <helpers/nrfx_flag32_allocator.h>

#define CHANNEL_INVALID UINT8_MAX

#define NUMBER_OF_VIRTUAL_CHANNELS 32
#define VIRTUAL_CHANNELS_MASK      NRFX_BIT_MASK(NUMBER_OF_VIRTUAL_CHANNELS)

typedef struct
{
    nrfx_apb_interconnect_t const * p_src_apb;
    nrfx_apb_interconnect_t const * p_dst_apb;
    uint8_t                         dppi_channel;
} nrfx_gppi_channels_path_t;

static nrfx_gppi_channels_path_t channels_path[NUMBER_OF_VIRTUAL_CHANNELS];
static nrfx_atomic_t m_virtual_channels = VIRTUAL_CHANNELS_MASK;

static void path_cleanup(nrfx_gppi_channels_path_t * p_path)
{
    NRFX_ASSERT(p_path);
    memset(p_path, 0, sizeof(nrfx_gppi_channels_path_t));
    p_path->dppi_channel = CHANNEL_INVALID;
}

static nrfx_err_t channel_free(nrfx_atomic_t * p_allocated_channels, uint8_t channel)
{
    NRFX_ASSERT(p_allocated_channels);
    if (channel == CHANNEL_INVALID)
    {
        return NRFX_ERROR_INVALID_PARAM;
    }
    return nrfx_flag32_free(p_allocated_channels, channel);
}

static nrfx_err_t channel_allocate(nrfx_atomic_t * p_channels_available,
                                   uint8_t       * p_channel,
                                   uint32_t        mask)
{
    NRFX_ASSERT(p_channel);
    uint32_t chan_avail;
    uint32_t chan_avail_masked;
    int8_t chan_to_alloc;
    uint32_t prev_mask;

    do {
        chan_avail = *p_channels_available;
        chan_avail_masked = chan_avail & mask;
        if (chan_avail_masked == 0)
        {
            return NRFX_ERROR_NO_MEM;
        }
        chan_to_alloc = 31 - NRF_CLZ(chan_avail_masked);

        prev_mask = nrfx_atomic_u32_fetch_and(p_channels_available, ~NRFX_BIT(chan_to_alloc));
    } while (prev_mask == chan_avail);
    *p_channel = chan_to_alloc;
    return NRFX_SUCCESS;
}

static bool is_main_connection_needed(nrfx_gppi_channels_path_t * p_path)
{
    nrfx_apb_interconnect_t const * p_src_apb = p_path->p_src_apb;
    nrfx_apb_interconnect_t const * p_dst_apb = p_path->p_dst_apb;
    if (nrf_apb_domain_get(p_src_apb) == NRF_DOMAIN_GLOBAL ||
        nrf_apb_domain_get(p_dst_apb) == NRF_DOMAIN_GLOBAL)
    {
        return (p_src_apb != nrf_apb_main_interconnect_get() &&
                p_dst_apb != nrf_apb_main_interconnect_get());
    }
    return false;
}

static void apb_connection_remove(nrfx_apb_interconnect_t const * p_src_apb,
                                  nrfx_apb_interconnect_t const * p_dst_apb,
                                  uint8_t                         dppi_channel)
{
    NRFX_ASSERT(p_src_apb != p_dst_apb);
    NRFX_ASSERT(p_src_apb);
    NRFX_ASSERT(p_dst_apb);
    NRFX_ASSERT(nrf_apb_domain_get(p_src_apb) == nrf_apb_domain_get(p_dst_apb));
    NRFX_ASSERT(nrf_apb_domain_get(p_src_apb) == NRF_DOMAIN);
    // Inside local domain PPIB connection should be cleared here.
    nrf_ppib_subscribe_clear(p_src_apb->p_ppib,
                             nrf_ppib_send_task_get(dppi_channel));
    nrf_ppib_publish_clear(p_dst_apb->p_ppib,
                           nrf_ppib_receive_event_get(dppi_channel));
}

static void apb_connection_create(nrfx_apb_interconnect_t const * p_src_apb,
                                  nrfx_apb_interconnect_t const * p_dst_apb,
                                  uint8_t                         dppi_channel)
{
    NRFX_ASSERT(p_src_apb != p_dst_apb);
    NRFX_ASSERT(p_src_apb);
    NRFX_ASSERT(p_dst_apb);
    NRFX_ASSERT(nrf_apb_domain_get(p_src_apb) == nrf_apb_domain_get(p_dst_apb));
    NRFX_ASSERT(nrf_apb_domain_get(p_src_apb) == NRF_DOMAIN);
    // Inside local domain PPIB connection should be set here.
    nrf_ppib_subscribe_set(p_src_apb->p_ppib,
                           nrf_ppib_send_task_get(dppi_channel),
                           dppi_channel);
    nrf_ppib_publish_set(p_dst_apb->p_ppib,
                         nrf_ppib_receive_event_get(dppi_channel),
                         dppi_channel);
}

static nrfx_err_t local_connection_create(nrfx_apb_interconnect_t const * p_src_apb,
                                          nrfx_apb_interconnect_t const * p_dst_apb,
                                          nrfx_gppi_channels_path_t     * p_path)
{
    nrfx_err_t err_code;
    uint8_t reserved_src_channel = CHANNEL_INVALID;
    uint8_t reserved_dst_channel = CHANNEL_INVALID;
    uint8_t * dppi_channel = &p_path->dppi_channel;
    bool use_main_apb_interconnect = false;
    uint32_t chan_mask;

    NRFX_ASSERT(p_src_apb);
    NRFX_ASSERT(p_dst_apb);
    NRFX_ASSERT(p_path);
    NRFX_ASSERT(nrf_apb_domain_get(p_src_apb) == nrf_apb_domain_get(p_dst_apb));
    p_path->p_src_apb = p_src_apb;
    p_path->p_dst_apb = p_dst_apb;
    if (p_src_apb == p_dst_apb)
    {
        chan_mask = (*p_src_apb->p_dppi_channels &
                    (p_src_apb->dppi_pub_channels_mask | p_dst_apb->dppi_sub_channels_mask));
        /* Both peripherals on the same APB*/
        err_code = channel_allocate(p_src_apb->p_dppi_channels, dppi_channel, chan_mask);
    }
    else
    {
        NRFX_CRITICAL_SECTION_ENTER();
        chan_mask = (*p_src_apb->p_dppi_channels & p_src_apb->dppi_pub_channels_mask) &
                    (*p_dst_apb->p_dppi_channels & p_dst_apb->dppi_sub_channels_mask);
        if (is_main_connection_needed(p_path))
        {
            use_main_apb_interconnect = true;
            chan_mask &= (nrf_apb_main_interconnect_get()->dppi_pub_channels_mask &
                          nrf_apb_main_interconnect_get()->dppi_sub_channels_mask &
                          (uint32_t)(*nrf_apb_main_interconnect_get()->p_dppi_channels));
        }
        err_code = channel_allocate(p_src_apb->p_dppi_channels, dppi_channel, chan_mask);
        if (err_code == NRFX_SUCCESS)
        {
            reserved_src_channel = *dppi_channel;
            err_code = channel_allocate(p_dst_apb->p_dppi_channels, dppi_channel, chan_mask);
            if (err_code == NRFX_SUCCESS)
            {
                reserved_dst_channel = *dppi_channel;
                if (use_main_apb_interconnect)
                {
                    *dppi_channel = CHANNEL_INVALID;
                    err_code = channel_allocate(
                                    nrf_apb_main_interconnect_get()->p_dppi_channels,
                                    dppi_channel,
                                    chan_mask);
                }
            }
        }

        if (err_code != NRFX_SUCCESS)
        {
            (void)channel_free(p_src_apb->p_dppi_channels, reserved_src_channel);
            (void)channel_free(p_dst_apb->p_dppi_channels, reserved_dst_channel);
            (void)channel_free(nrf_apb_main_interconnect_get()->p_dppi_channels, *dppi_channel);
        }
        else if (nrf_apb_domain_get(p_src_apb) == NRF_DOMAIN)
        {
            /* Inside our domain we are allowed to configure APB connection by ourself. */
            apb_connection_create(p_src_apb, p_dst_apb, *dppi_channel);
        }
        NRFX_CRITICAL_SECTION_EXIT();
    }
    if (err_code != NRFX_SUCCESS)
    {
        path_cleanup(p_path);
    }
    return err_code;
}

static nrfx_err_t local_connection_remove(nrfx_gppi_channels_path_t * p_path)
{
    nrfx_err_t err_code;
    uint8_t dppi_channel = p_path->dppi_channel;
    nrfx_apb_interconnect_t const * p_src_apb = p_path->p_src_apb;
    nrfx_apb_interconnect_t const * p_dst_apb = p_path->p_dst_apb;

    NRFX_ASSERT(p_path);
    NRFX_ASSERT(dppi_channel != CHANNEL_INVALID);
    NRFX_ASSERT(p_src_apb);
    NRFX_ASSERT(p_dst_apb);
    NRFX_ASSERT(nrf_apb_domain_get(p_src_apb) == nrf_apb_domain_get(p_dst_apb));
    if (p_src_apb == p_dst_apb)
    {
        err_code = channel_free(p_src_apb->p_dppi_channels, dppi_channel);
        if (err_code != NRFX_SUCCESS)
        {
            return err_code;
        }
    }
    else
    {
        NRFX_CRITICAL_SECTION_ENTER();
        err_code = channel_free(p_src_apb->p_dppi_channels, dppi_channel);
        if (err_code == NRFX_SUCCESS)
        {
            err_code = channel_free(p_dst_apb->p_dppi_channels, dppi_channel);
            if (err_code == NRFX_SUCCESS)
            {
                if (is_main_connection_needed(p_path))
                {
                    err_code = channel_free(nrf_apb_main_interconnect_get()->p_dppi_channels, dppi_channel);
                }
            }
        }
        NRFX_CRITICAL_SECTION_EXIT();
    }

    if (err_code != NRFX_SUCCESS)
    {
        return err_code;
    }
    if (nrf_apb_domain_get(p_src_apb) == NRF_DOMAIN)
    {
        /* Inside our domain we are allowed to configure APB connection by ourself. */
        apb_connection_remove(p_src_apb, p_dst_apb, dppi_channel);
    }
    path_cleanup(p_path);
    return err_code;
}

nrfx_err_t nrfx_gppi_channel_alloc(uint8_t * p_channel)
{
    nrfx_err_t err;
    nrfx_gppi_channels_path_t * chan;

    err = nrfx_flag32_alloc(&m_virtual_channels, p_channel);
    if (err == NRFX_SUCCESS)
    {
        chan = &channels_path[*p_channel];
        path_cleanup(chan);
    }
    return err;
}

void nrfx_gppi_event_endpoint_setup(uint8_t channel, uint32_t eep)
{
    (void)channel;
    (void)eep;
    // `tep` is also needed to decide whether `main_apb` is to be used.
    NRFX_ASSERT(false);
}

void nrfx_gppi_task_endpoint_setup(uint8_t channel, uint32_t tep)
{
    (void)channel;
    (void)tep;
    // `eep` is also needed to decide whether `main_apb` is to be used.
    NRFX_ASSERT(false);
}

void nrfx_gppi_event_endpoint_clear(uint8_t channel, uint32_t eep)
{
    (void)channel;
    (void)eep;
    // `tep` is also needed to decide whether `main_apb` is to be used.
    NRFX_ASSERT(false);
}

void nrfx_gppi_task_endpoint_clear(uint8_t channel, uint32_t tep)
{
    (void)channel;
    (void)tep;
    // `eep` is also needed to decide whether `main_apb` is to be used.
    NRFX_ASSERT(false);
}

void nrfx_gppi_fork_endpoint_setup(uint8_t channel, uint32_t fork_tep)
{
    (void)channel;
    (void)fork_tep;
    // `fork_eep` is also needed to decide whether `main_apb` is to be used.
    NRFX_ASSERT(false);
}

void nrfx_gppi_fork_endpoint_clear(uint8_t channel, uint32_t fork_tep)
{
    (void)channel;
    (void)fork_tep;
    // `fork_eep` is also needed to decide whether `main_apb` is to be used.
    NRFX_ASSERT(false);
}


void nrfx_gppi_channel_endpoints_setup(uint8_t channel, uint32_t eep, uint32_t tep)
{
    NRFX_ASSERT(tep);
    NRFX_ASSERT(eep);

    nrfx_apb_interconnect_t const * p_src_apb = (nrf_apb_interconnect_get(eep));
    nrfx_apb_interconnect_t const * p_dst_apb = (nrf_apb_interconnect_get(tep));
    nrfx_gppi_channels_path_t * p_path = &channels_path[channel];

    NRFX_ASSERT(p_src_apb);
    NRFX_ASSERT(p_dst_apb);

    if (nrf_apb_domain_get(p_src_apb) == nrf_apb_domain_get(p_dst_apb))
    {
        (void)local_connection_create(p_src_apb, p_dst_apb, p_path);
    }
    else
    {
        // Currently not supported
        NRFX_ASSERT(false);
    }

    uint8_t dppi_chan = p_path->dppi_channel;
    NRFX_DPPIC_ENDPOINT_SETUP(eep, dppi_chan);
    NRFX_DPPIC_ENDPOINT_SETUP(tep, dppi_chan);
}

void nrfx_gppi_channel_endpoints_clear(uint8_t channel, uint32_t eep, uint32_t tep)
{
    NRFX_ASSERT(tep);
    NRFX_ASSERT(eep);

    nrfx_apb_interconnect_t const * p_src_apb = (nrf_apb_interconnect_get(eep));
    nrfx_apb_interconnect_t const * p_dst_apb = (nrf_apb_interconnect_get(tep));
    nrfx_gppi_channels_path_t * p_path = &channels_path[channel];

    NRFX_ASSERT(p_src_apb);
    NRFX_ASSERT(p_dst_apb);
    NRFX_ASSERT(p_path->p_src_apb == p_src_apb);
    NRFX_ASSERT(p_path->p_dst_apb == p_dst_apb);

    if (nrf_apb_domain_get(p_src_apb) == nrf_apb_domain_get(p_dst_apb))
    {
        (void)local_connection_remove(p_path);
    }
    else
    {
        // Currently not supported
        NRFX_ASSERT(false);
    }
    NRFX_DPPIC_ENDPOINT_CLEAR(eep);
    NRFX_DPPIC_ENDPOINT_CLEAR(tep);
}

nrfx_err_t nrfx_gppi_channel_free(uint8_t channel)
{
    nrfx_err_t err;
    nrfx_gppi_channels_path_t * p_path;

    err = nrfx_flag32_free(&m_virtual_channels, channel);
    if (err != NRFX_SUCCESS)
    {
        return err;
    }
    p_path = &channels_path[channel];
    path_cleanup(p_path);
    return err;
}

bool nrfx_gppi_channel_check(uint8_t channel)
{
    nrfx_apb_interconnect_t const * p_src_apb = channels_path[channel].p_src_apb;
    nrfx_apb_interconnect_t const * p_dst_apb = channels_path[channel].p_dst_apb;
    uint8_t dppi_channel = channels_path[channel].dppi_channel;

    NRFX_ASSERT(nrfx_flag32_is_allocated(m_virtual_channels, channel));
    if (dppi_channel != CHANNEL_INVALID)
    {
        NRFX_ASSERT(p_src_apb);
        NRFX_ASSERT(p_dst_apb);
        if (!nrf_dppi_channel_check(p_src_apb->p_dppi, dppi_channel) ||
            !nrf_dppi_channel_check(p_dst_apb->p_dppi, dppi_channel))
        {
            return false;
        }
        if (is_main_connection_needed(&channels_path[channel]) &&
            !nrf_dppi_channel_check(nrf_apb_main_interconnect_get()->p_dppi, dppi_channel))
        {
            return false;
        }
        return true;
    }
    return false;
}

void nrfx_gppi_channels_disable_all(void)
{
    uint32_t mask = (uint32_t)m_virtual_channels;
    while (mask)
    {
        uint8_t chan = NRF_CTZ(mask);
        nrfx_apb_interconnect_t const * p_src_apb = channels_path[chan].p_src_apb;
        nrfx_apb_interconnect_t const * p_dst_apb = channels_path[chan].p_dst_apb;
        uint8_t dppi_channel = channels_path[chan].dppi_channel;

        if (dppi_channel != CHANNEL_INVALID)
        {
            NRFX_ASSERT(p_src_apb);
            NRFX_ASSERT(p_dst_apb);
            nrf_dppi_channels_disable(p_src_apb->p_dppi, NRFX_BIT(dppi_channel));
            nrf_dppi_channels_disable(p_dst_apb->p_dppi, NRFX_BIT(dppi_channel));
            if (is_main_connection_needed(&channels_path[chan]))
            {
                nrf_dppi_channels_disable(nrf_apb_main_interconnect_get()->p_dppi,
                                          NRFX_BIT(dppi_channel));
                nrf_dppi_channels_disable(nrf_apb_main_interconnect_get()->p_dppi,
                                          NRFX_BIT(dppi_channel));
            }
        }
        mask &= ~NRFX_BIT(chan);
    }
}

void nrfx_gppi_channels_enable(uint32_t mask)
{
    while (mask)
    {
        uint8_t chan = NRF_CTZ(mask);
        nrfx_apb_interconnect_t const * p_src_apb = channels_path[chan].p_src_apb;
        nrfx_apb_interconnect_t const * p_dst_apb = channels_path[chan].p_dst_apb;
        uint8_t dppi_channel = channels_path[chan].dppi_channel;

        NRFX_ASSERT(nrfx_flag32_is_allocated(m_virtual_channels, chan));
        NRFX_ASSERT(p_src_apb);
        NRFX_ASSERT(p_dst_apb);
        nrf_dppi_channels_enable(p_src_apb->p_dppi, NRFX_BIT(dppi_channel));
        nrf_dppi_channels_enable(p_dst_apb->p_dppi, NRFX_BIT(dppi_channel));
        if (is_main_connection_needed(&channels_path[chan]))
        {
            nrf_dppi_channels_enable(nrf_apb_main_interconnect_get()->p_dppi,
                                     NRFX_BIT(dppi_channel));
            nrf_dppi_channels_enable(nrf_apb_main_interconnect_get()->p_dppi,
                                     NRFX_BIT(dppi_channel));
        }
        mask &= ~NRFX_BIT(chan);
    }
}

void nrfx_gppi_channels_disable(uint32_t mask)
{
    while (mask)
    {
        uint8_t chan = NRF_CTZ(mask);
        nrfx_apb_interconnect_t const * p_src_apb = channels_path[chan].p_src_apb;
        nrfx_apb_interconnect_t const * p_dst_apb = channels_path[chan].p_dst_apb;
        uint8_t dppi_channel = channels_path[chan].dppi_channel;

        NRFX_ASSERT(nrfx_flag32_is_allocated(m_virtual_channels, chan));
        NRFX_ASSERT(p_src_apb);
        NRFX_ASSERT(p_dst_apb);
        nrf_dppi_channels_disable(p_src_apb->p_dppi, NRFX_BIT(dppi_channel));
        nrf_dppi_channels_disable(p_dst_apb->p_dppi, NRFX_BIT(dppi_channel));
        if (is_main_connection_needed(&channels_path[chan]))
        {
            nrf_dppi_channels_disable(nrf_apb_main_interconnect_get()->p_dppi,
                                      NRFX_BIT(dppi_channel));
            nrf_dppi_channels_disable(nrf_apb_main_interconnect_get()->p_dppi,
                                      NRFX_BIT(dppi_channel));
        }
        mask &= ~NRFX_BIT(chan);
    }
}
#endif // defined(HALTIUM_XXAA)
