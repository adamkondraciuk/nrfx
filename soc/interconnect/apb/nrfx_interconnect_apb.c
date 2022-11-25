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

NRFX_INTERCONNECT_APB_GLOBAL_DPPI_DEFINE;
NRFX_INTERCONNECT_APB_LOCAL_DPPI_DEFINE;
static const nrfx_interconnect_apb_t m_local_apb_interconnect[] =
                                     NRFX_INTERCONNECT_APB_LOCAL_BUSES_PROP;
static const nrfx_interconnect_apb_t m_global_apb_interconnect[] =
                                     NRFX_INTERCONNECT_APB_GLOBAL_BUSES_PROP;

nrf_domain_t nrfx_interconnect_apb_domain_get(nrfx_interconnect_apb_t const * p_apb_prop)
{
    return (nrf_domain_t)nrf_address_domain_get((uint32_t)p_apb_prop->p_dppi);
}

nrfx_interconnect_apb_t const * nrfx_interconnect_apb_main_get(void)
{
    return &m_global_apb_interconnect[NRFX_INTERCONNECT_APB_MAIN_IDX];
}

nrfx_interconnect_apb_t const * nrfx_interconnect_apb_get(uint32_t addr)
{
    nrf_domain_t domain = (nrf_domain_t)nrf_address_domain_get(addr);
    uint32_t num_of_entries;
    nrfx_interconnect_apb_t const * apb_interconnect;
    if (domain == NRF_DOMAIN_GLOBAL)
    {
        num_of_entries = NRFX_ARRAY_SIZE(m_global_apb_interconnect);
        apb_interconnect = m_global_apb_interconnect;
    }
    else
    {
        num_of_entries = NRFX_ARRAY_SIZE(m_local_apb_interconnect);
        apb_interconnect = m_local_apb_interconnect;
    }

    for (uint8_t i = 0; i < num_of_entries; i++)
    {
        nrfx_interconnect_apb_t const * p_apb = &apb_interconnect[i];
        uint8_t bus_address_area = nrf_address_bus_get(addr, p_apb->size);
        
        if (bus_address_area == nrf_address_bus_get((uint32_t)p_apb->p_dppi, p_apb->size))
        {
            return p_apb;
        }
    }
    return NULL;
}

size_t nrfx_interconnect_apb_global_num_of_get(void)
{
    return NRFX_ARRAY_SIZE(m_global_apb_interconnect);
}

nrfx_interconnect_apb_t const * nrf_apb_interconnect_by_idx_global_get(uint8_t idx)
{
    return &m_global_apb_interconnect[idx];
}

#endif // defined(HALTIUM_XXAA)
