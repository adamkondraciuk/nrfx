/*$$$LICENCE_NORDIC_STANDARD<2022>$$$*/

#include <helpers/nrfx_gppi.h>

#if NRFX_CHECK(NRFX_DPPI_ENABLED) && (!defined(DPPIC_COUNT) || (DPPIC_COUNT == 1))
#include <nrfx_dppi.h>

#if NRFX_API_VER_AT_LEAST(3, 8, 0)
static nrfx_dppi_t dppi = NRFX_DPPI_INSTANCE(0);
#endif
#endif

#if defined(DPPI_PRESENT) && (defined(NRF53_SERIES) || defined(NRF91_SERIES))
bool nrfx_gppi_channel_check(uint8_t channel)
{
    return nrfy_dppi_channel_check(NRF_DPPIC, channel);
}

void nrfx_gppi_channels_disable_all(void)
{
    nrfy_dppi_channels_disable_all(NRF_DPPIC);
}

void nrfx_gppi_channels_enable(uint32_t mask)
{
    nrfy_dppi_channels_enable(NRF_DPPIC, mask);
}

void nrfx_gppi_channels_disable(uint32_t mask)
{
    nrfy_dppi_channels_disable(NRF_DPPIC, mask);
}

void nrfx_gppi_task_trigger(nrfx_gppi_task_t task)
{
    nrfy_dppi_task_trigger(NRF_DPPIC, (nrf_dppi_task_t)task);
}

void nrfx_gppi_event_endpoint_setup(uint8_t channel, uint32_t eep)
{
    NRFX_ASSERT(eep);
    NRF_DPPI_ENDPOINT_SETUP(eep, channel);
}

void nrfx_gppi_task_endpoint_setup(uint8_t channel, uint32_t tep)
{
    NRFX_ASSERT(tep);
    NRF_DPPI_ENDPOINT_SETUP(tep, channel);
}

void nrfx_gppi_channel_endpoints_setup(uint8_t  channel, uint32_t eep, uint32_t tep)
{
    nrfx_gppi_event_endpoint_setup(channel, eep);
    nrfx_gppi_task_endpoint_setup(channel, tep);
}

void nrfx_gppi_channel_endpoints_clear(uint8_t channel, uint32_t eep, uint32_t tep)
{
    nrfx_gppi_event_endpoint_clear(channel, eep);
    nrfx_gppi_task_endpoint_clear(channel, tep);
}

void nrfx_gppi_event_endpoint_clear(uint8_t channel, uint32_t eep)
{
    NRFX_ASSERT(eep);
    (void)channel;
    NRF_DPPI_ENDPOINT_CLEAR(eep);
}

void nrfx_gppi_task_endpoint_clear(uint8_t channel, uint32_t tep)
{
    NRFX_ASSERT(tep);
    (void)channel;
    NRF_DPPI_ENDPOINT_CLEAR(tep);
}

void nrfx_gppi_fork_endpoint_setup(uint8_t channel, uint32_t fork_tep)
{
    nrfx_gppi_task_endpoint_setup(channel, fork_tep);
}

void nrfx_gppi_fork_endpoint_clear(uint8_t channel, uint32_t fork_tep)
{
    nrfx_gppi_task_endpoint_clear(channel, fork_tep);
}

void nrfx_gppi_channels_group_set(uint32_t                  channel_mask,
                                  nrfx_gppi_channel_group_t channel_group)
{
    nrfy_dppi_channels_group_set(NRF_DPPIC,
                                 channel_mask,
                                 (nrf_dppi_channel_group_t)channel_group);
}

void nrfx_gppi_channels_include_in_group(uint32_t                  channel_mask,
                                         nrfx_gppi_channel_group_t channel_group)
{
    nrfy_dppi_channels_include_in_group(NRF_DPPIC,
                                        channel_mask,
                                        (nrf_dppi_channel_group_t)channel_group);
}

void nrfx_gppi_channels_remove_from_group(uint32_t                  channel_mask,
                                          nrfx_gppi_channel_group_t channel_group)
{
    nrfy_dppi_channels_remove_from_group(NRF_DPPIC,
                                         channel_mask,
                                         (nrf_dppi_channel_group_t)channel_group);
}

void nrfx_gppi_group_clear(nrfx_gppi_channel_group_t channel_group)
{
    nrfy_dppi_group_clear(NRF_DPPIC, (nrf_dppi_channel_group_t)channel_group);
}

void nrfx_gppi_group_enable(nrfx_gppi_channel_group_t channel_group)
{
    nrfy_dppi_group_enable(NRF_DPPIC, (nrf_dppi_channel_group_t)channel_group);
}

void nrfx_gppi_group_disable(nrfx_gppi_channel_group_t channel_group)
{
    nrfy_dppi_group_disable(NRF_DPPIC, (nrf_dppi_channel_group_t)channel_group);
}

uint32_t nrfx_gppi_task_address_get(nrfx_gppi_task_t gppi_task)
{
    return nrfy_dppi_task_address_get(NRF_DPPIC, (nrf_dppi_task_t)gppi_task);
}

nrfx_gppi_task_t nrfx_gppi_group_disable_task_get(nrfx_gppi_channel_group_t group)
{
    return (nrfx_gppi_task_t) nrfy_dppi_group_disable_task_get((uint8_t)group);
}

nrfx_gppi_task_t nrfx_gppi_group_enable_task_get(nrfx_gppi_channel_group_t group)
{
    return (nrfx_gppi_task_t) nrfy_dppi_group_enable_task_get((uint8_t)group);
}

nrfx_err_t nrfx_gppi_channel_alloc(uint8_t * p_channel)
{
#if NRFX_CHECK(NRFX_DPPI_ENABLED) && (!defined(DPPIC_COUNT) || (DPPIC_COUNT == 1))
#if NRFX_API_VER_AT_LEAST(3, 8, 0)
    return nrfx_dppi_channel_alloc(&dppi, p_channel);
#else
    return nrfx_dppi_channel_alloc(p_channel);
#endif
#else
    (void)p_channel;
    return NRFX_ERROR_NOT_SUPPORTED;
#endif
}

nrfx_err_t nrfx_gppi_channel_free(uint8_t channel)
{
#if NRFX_CHECK(NRFX_DPPI_ENABLED) && (!defined(DPPIC_COUNT) || (DPPIC_COUNT == 1))
#if NRFX_API_VER_AT_LEAST(3, 8, 0)
    return nrfx_dppi_channel_free(&dppi, channel);
#else
    return nrfx_dppi_channel_free(channel);
#endif
#else
    (void)channel;
    return NRFX_ERROR_NOT_SUPPORTED;
#endif
}

nrfx_err_t nrfx_gppi_group_alloc(nrfx_gppi_channel_group_t * p_group)
{
#if NRFX_CHECK(NRFX_DPPI_ENABLED) && (!defined(DPPIC_COUNT) || (DPPIC_COUNT == 1))
#if NRFX_API_VER_AT_LEAST(3, 8, 0)
    return nrfx_dppi_group_alloc(&dppi, (nrf_dppi_channel_group_t *)p_group);
#else
    return nrfx_dppi_group_alloc((nrf_dppi_channel_group_t *)p_group);
#endif
#else
    (void)p_group;
    return NRFX_ERROR_NOT_SUPPORTED;
#endif
}

nrfx_err_t nrfx_gppi_group_free(nrfx_gppi_channel_group_t group)
{
#if NRFX_CHECK(NRFX_DPPI_ENABLED) && (!defined(DPPIC_COUNT) || (DPPIC_COUNT == 1))
#if NRFX_API_VER_AT_LEAST(3, 8, 0)
    return nrfx_dppi_group_free(&dppi, (nrf_dppi_channel_group_t)group);
#else
    return nrfx_dppi_group_free((nrf_dppi_channel_group_t)group);
#endif
#else
    (void)group;
    return NRFX_ERROR_NOT_SUPPORTED;
#endif
}

nrfx_err_t nrfx_gppi_edge_connection_setup(uint8_t             channel,
                                           nrfx_dppi_t const * p_src_dppi,
                                           uint8_t             src_channel,
                                           nrfx_dppi_t const * p_dst_dppi,
                                           uint8_t             dst_channel)
{
    (void)channel;
    (void)p_src_dppi;
    (void)src_channel;
    (void)p_dst_dppi;
    (void)dst_channel;

    return NRFX_SUCCESS; /* No operation as there is only one DPPIC instance. */
}

#endif // defined(DPPI_PRESENT) && (defined(NRF53_SERIES) || defined(NRF91_SERIES))
