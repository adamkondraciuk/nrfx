/*$$$LICENCE_NORDIC_STANDARD<2022>$$$*/
#include <nrfx.h>

#if defined(HALTIUM_XXAA)

#include <soc/interconnect/ipct/nrfx_interconnect_ipct.h>
#include <soc/interconnect/ipct/nrfx_interconnect_ipct_haltium_global.h>
#include <soc/interconnect/apb/nrfx_interconnect_apb.h>

#if defined(NRF_RADIOCORE)
    #include <soc/interconnect/ipct/nrfx_interconnect_ipct_haltium_radiocore.h>
#elif defined(NRF_SECURE)
    #include <soc/interconnect/ipct/nrfx_interconnect_ipct_haltium_secure.h>
#elif defined(NRF_APPLICATION)
    #include <soc/interconnect/ipct/nrfx_interconnect_ipct_haltium_application.h>
#elif defined(NRF_CELLCORE)
    #include <soc/interconnect/ipct/nrfx_interconnect_ipct_haltium_cellcore.h>
#elif defined(NRF_SYSCTRL)
    #include <soc/interconnect/ipct/nrfx_interconnect_ipct_haltium_sysctrl.h>
#elif defined(NRF_PPR)
    #include <soc/interconnect/ipct/nrfx_interconnect_ipct_haltium_ppr.h>
#elif defined(NRF_FLPR)
    #include <soc/interconnect/ipct/nrfx_interconnect_ipct_haltium_flpr.h>
#elif defined(NRF_LMAC)
    #include <soc/interconnect/ipct/nrfx_interconnect_ipct_haltium_lmac.h>
#elif defined(NRF_UMAC)
    #include <soc/interconnect/ipct/nrfx_interconnect_ipct_haltium_umac.h>
#endif

NRFX_INTERCONNECT_IPCT_GLOBAL_DEFINE;
NRFX_INTERCONNECT_IPCT_LOCAL_DEFINE;
static const nrfx_interconnect_ipct_t m_local_ipct_interconnect[] =
                                      NRFX_INTERCONNECT_IPCT_LOCAL_IPCT_PROP;
static const nrfx_interconnect_ipct_t m_global_ipct_interconnect[] =
                                      NRFX_INTERCONNECT_IPCT_GLOBAL_IPCT_PROP;

nrf_domain_t nrfx_interconnect_ipct_domain_get(nrfx_interconnect_ipct_t const * p_ipct_prop)
{
    return (nrf_domain_t)nrf_address_domain_get((uint32_t)p_ipct_prop->p_ipct);
}

nrfx_interconnect_ipct_t const * nrfx_interconnect_ipct_main_get(void)
{
    return &m_global_ipct_interconnect[MAIN_IPCT_INTERCONNECT_IDX];
}

nrfx_interconnect_ipct_t const * nrfx_interconnect_ipct_get(nrfx_interconnect_apb_t const * p_apb_prop)
{
    uint8_t bus = nrf_address_bus_get((uint32_t)p_apb_prop->p_dppi);

    if (nrfx_interconnect_apb_domain_get(p_apb_prop) == NRF_DOMAIN_GLOBAL)
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
        for (uint8_t i = 0; i < nrfx_interconnect_apb_global_num_of_get(); i++)
        {
            // Check whether it is possible to connect via DPPI
            if (nrf_apb_interconnect_by_idx_global_get(i)->p_dppi == p_apb_prop->p_dppi)
            {
                return nrfx_interconnect_ipct_main_get();
            }
        }
    }
    else
    {
        return &m_local_ipct_interconnect[0];
    }
    return NULL;
}

size_t nrfx_interconnect_ipct_global_num_of_get(void)
{
    return NRFX_ARRAY_SIZE(m_global_ipct_interconnect);
}

nrfx_interconnect_ipct_t const * nrfx_interconnect_ipct_global_by_idx_get(uint8_t idx)
{
    return &m_global_ipct_interconnect[idx];
}

#endif // defined(HALTIUM_XXAA)
