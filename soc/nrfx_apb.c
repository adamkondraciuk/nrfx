/*$$$LICENCE_NORDIC_STANDARD<2022>$$$*/
//#if defined(LILIUMFP1_XXAA) || defined(LILIUMSOC1_XXAA) || defined(NRF9230_XXAA)
#if defined(HALTIUM_XXAA)

#include <nrfx_apb.h>
#include <nrfx_apb_haltium_global.h>

#if defined(NRF_RADIOCORE)
#include <nrfx_apb_haltium_radiocore.h>
#elif defined(NRF_SECURE)
#include <nrfx_apb_haltium_secure.h>
#elif defined(NRF_APPLICATION)
#include <nrfx_apb_haltium_application.h>
#elif defined(NRF_CELLCORE)
#include <nrfx_apb_haltium_cellcore.h>
#endif

NRFX_DPPI_GLOBAL_DEFINE;
NRFX_DPPI_LOCAL_DEFINE;
static const nrfx_apb_interconnect_t m_local_apb_interconnect[] = NRFX_APB_LOCAL_INTERCONNECT;
static const nrfx_apb_interconnect_t m_global_apb_interconnect[] = NRFX_APB_GLOBAL_INTERCONNECT;

nrf_domain_t nrf_apb_domain_get(nrfx_apb_interconnect_t const * p_abp_interconnect)
{
    return (nrf_domain_t)nrf_address_domain_get((uint32_t)p_abp_interconnect->p_dppi);
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
#endif // defined(HALTIUM_XXAA)
