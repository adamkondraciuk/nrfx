/*$$$LICENCE_NORDIC_STANDARD<2022>$$$*/
#include <nrfx.h>

#if defined(HALTIUM_XXAA)

#include <soc/interconnect/apb/nrfx_interconnect_apb.h>
#include <soc/interconnect/apb/nrfx_interconnect_apb_haltium_global.h>

#if defined(NRF_RADIOCORE)
    #include <soc/interconnect/apb/nrfx_interconnect_apb_haltium_radiocore.h>
#elif defined(NRF_SECURE)
    #include <soc/interconnect/apb/nrfx_interconnect_apb_haltium_secure.h>
#elif defined(NRF_APPLICATION)
    #include <soc/interconnect/apb/nrfx_interconnect_apb_haltium_application.h>
#elif defined(NRF_CELLCORE)
    #include <soc/interconnect/apb/nrfx_interconnect_apb_haltium_cellcore.h>
#elif defined(NRF_SYSCTRL)
    #include <soc/interconnect/apb/nrfx_interconnect_apb_haltium_sysctrl.h>
#elif defined(NRF_PPR)
    #include <soc/interconnect/apb/nrfx_interconnect_apb_haltium_ppr.h>
#elif defined(NRF_FLPR)
    #include <soc/interconnect/apb/nrfx_interconnect_apb_haltium_flpr.h>
#elif defined(NRF_LMAC)
    #include <soc/interconnect/apb/nrfx_interconnect_apb_haltium_lmac.h>
#elif defined(NRF_UMAC)
    #include <soc/interconnect/apb/nrfx_interconnect_apb_haltium_umac.h>
#endif

NRFX_DPPI_GLOBAL_DEFINE;
NRFX_DPPI_LOCAL_DEFINE;
static const nrfx_apb_interconnect_t m_local_apb_interconnect[] = NRFX_APB_LOCAL_INTERCONNECT;
static const nrfx_apb_interconnect_t m_global_apb_interconnect[] = NRFX_APB_GLOBAL_INTERCONNECT;

nrf_domain_t nrf_apb_domain_get(nrfx_apb_interconnect_t const * p_apb_interconnect)
{
    return (nrf_domain_t)nrf_address_domain_get((uint32_t)p_apb_interconnect->p_dppi);
}

nrfx_apb_interconnect_t const * nrf_apb_main_interconnect_get(void)
{
    return &m_global_apb_interconnect[MAIN_APB_INTERCONNECT_IDX];
}

nrfx_apb_interconnect_t const * nrf_apb_interconnect_get(uint32_t addr)
{
    uint32_t bus_address = nrf_address_bus_get(addr);
    nrf_domain_t domain = (nrf_domain_t)nrf_address_domain_get(addr);
    uint32_t size;
    nrfx_apb_interconnect_t const * apb_interconnect;
    if (domain == NRF_DOMAIN_GLOBAL)
    {
        size = NRFX_ARRAY_SIZE(m_global_apb_interconnect);
        apb_interconnect = m_global_apb_interconnect;
    }
    else
    {
        size = NRFX_ARRAY_SIZE(m_local_apb_interconnect);
        apb_interconnect = m_local_apb_interconnect;
    }

    for (uint8_t i = 0; i < size; i++)
    {
        if (bus_address == nrf_address_bus_get((uint32_t)apb_interconnect[i].p_dppi))
        {
            return &apb_interconnect[i];
        }
    }
    return NULL;
}

size_t nrf_apb_interconnect_num_of_global_get(void)
{
    return NRFX_ARRAY_SIZE(m_global_apb_interconnect);
}

nrfx_apb_interconnect_t const * nrf_apb_interconnect_by_idx_global_get(uint8_t idx)
{
    return &m_global_apb_interconnect[idx];
}

#endif // defined(HALTIUM_XXAA)
