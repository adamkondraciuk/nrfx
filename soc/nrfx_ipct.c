/*$$$LICENCE_NORDIC_STANDARD<2022>$$$*/
#include <nrfx.h>

#if defined(HALTIUM_XXAA)

#include <nrfx_ipct.h>
#include <nrfx_ipct_haltium_global.h>
#include <nrfx_apb.h>

#if defined(NRF_RADIOCORE)
#include <nrfx_ipct_haltium_radiocore.h>
#elif defined(NRF_SECURE)
#include <nrfx_ipct_haltium_secure.h>
#elif defined(NRF_APPLICATION)
#include <nrfx_ipct_haltium_application.h>
#elif defined(NRF_CELLCORE)
#include <nrfx_ipct_haltium_cellcore.h>
#elif defined(NRF_SYSCTRL)
#include <nrfx_ipct_haltium_sysctrl.h>
#elif defined(NRF_PPR)
#include <nrfx_ipct_haltium_ppr.h>
#elif defined(NRF_FLPR)
#include <nrfx_ipct_haltium_flpr.h>
#elif defined(NRF_LMAC)
    #include <nrfx_ipct_haltium_lmac.h>
#elif defined(NRF_UMAC)
    #include <nrfx_ipct_haltium_umac.h>
#endif

NRFX_IPC_GLOBAL_DEFINE;
NRFX_IPC_LOCAL_DEFINE;
static const nrfx_ipct_interconnect_t m_local_ipct_interconnect[] = NRFX_IPC_LOCAL_INTERCONNECT;
static const nrfx_ipct_interconnect_t m_global_ipct_interconnect[] = NRFX_IPC_GLOBAL_INTERCONNECT;

nrf_domain_t nrf_ipct_domain_get(nrfx_ipct_interconnect_t const * p_ipct_interconnect)
{
    return (nrf_domain_t)nrf_address_domain_get((uint32_t)p_ipct_interconnect->p_ipct);
}

nrfx_ipct_interconnect_t const * nrf_ipct_main_interconnect_get(void)
{
    return &m_global_ipct_interconnect[MAIN_IPCT_INTERCONNECT_IDX];
}

nrfx_ipct_interconnect_t const * nrf_ipct_get(nrfx_apb_interconnect_t const * p_apb_interconnect)
{
    uint8_t bus = nrf_address_bus_get((uint32_t)p_apb_interconnect->p_dppi);

    if (nrf_apb_domain_get(p_apb_interconnect) == NRF_DOMAIN_GLOBAL)
    {
        for (uint8_t i = 0; i < NRFX_ARRAY_SIZE(m_global_ipct_interconnect); i++)
        {
            // Check if some IPCT is on the same bus
            if (nrf_address_bus_get((uint32_t)m_global_ipct_interconnect[i].p_ipct) == bus)
            {
                return &m_global_ipct_interconnect[i];
            }
        }
        // The power domain connected to `bus` doesn't contain its own IPCT peripheral
        for (uint8_t i = 0; i < nrf_apb_interconnect_num_of_global_get(); i++)
        {
            // Check whether it is possible to connect via DPPI
            if (nrf_apb_interconnect_by_idx_global_get(i)->p_dppi == p_apb_interconnect->p_dppi)
            {
                return nrf_ipct_main_interconnect_get();
            }
        }
    }
    else
    {
        return &m_local_ipct_interconnect[0];
    }
    return NULL;
}

size_t nrf_ipct_num_of_global_get(void)
{
    return NRFX_ARRAY_SIZE(m_global_ipct_interconnect);
}

nrfx_ipct_interconnect_t const * nrf_ipct_by_idx_global_get(uint8_t idx)
{
    return &m_global_ipct_interconnect[idx];
}

#endif // defined(HALTIUM_XXAA)
