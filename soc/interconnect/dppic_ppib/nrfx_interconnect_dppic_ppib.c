/*$$$LICENCE_NORDIC_STANDARD<2023>$$$*/

#include <nrfx.h>

#if defined(LUMOS_XXAA)

#include "nrfx_interconnect_dppic_ppib.h"
#include <helpers/nrfx_flag32_allocator.h>
#include <haly/nrfy_dppi.h>

#include <soc/interconnect/dppic_ppib/nrfx_interconnect_dppic_ppib_lumos.h>

nrfx_interconnect_dppic_t interconnect_dppic[] = NRFX_INTERCONNECT_DPPIC_MAP;

/* Each PPIB must be connected with one DPPI. */
NRFX_STATIC_ASSERT(NRFX_INTERCONNECT_DPPIC_COUNT == NRFX_ARRAY_SIZE(interconnect_dppic));

nrfx_interconnect_ppib_t interconnect_ppib[] = NRFX_INTERCONNECT_PPIB_MAP;

/* One PPIB is connected to only one another PPIB directly. */
NRFX_STATIC_ASSERT(NRFX_INTERCONNECT_PPIB_COUNT == NRFX_ARRAY_SIZE(interconnect_ppib));

nrfx_interconnect_dppic_ppib_t interconnect_dppic_ppib[] = NRFX_INTERCONNECT_DPPIC_PPIB_MAP;

/* Each DPPIC needs to have its own properties structure. */
NRFX_STATIC_ASSERT(NRFX_INTERCONNECT_DPPIC_PPIB_COUNT == NRFX_ARRAY_SIZE(interconnect_dppic_ppib));

nrfx_interconnect_dppic_t * nrfx_interconnect_dppic_at_index_get(uint8_t index)
{
    NRFX_ASSERT(index < NRFX_INTERCONNECT_DPPIC_COUNT);

    return &interconnect_dppic[index];
}

nrfx_interconnect_dppic_t * nrfx_interconnect_dppic_get(uint8_t apb_index)
{
    for (uint8_t i = 0; i < NRFX_INTERCONNECT_DPPIC_COUNT; i++)
    {
        if (interconnect_dppic[i].apb_index == apb_index)
        {
            return &interconnect_dppic[i];
        }
    }

    return NULL;
}

nrfx_interconnect_dppic_t * nrfx_interconnect_dppic_main_get()
{
    return nrfx_interconnect_dppic_get(NRF_APB_INDEX_PERI);
}

nrfx_interconnect_ppib_t * nrfx_interconnect_ppib_at_index_get(uint8_t index)
{
    NRFX_ASSERT(index < NRFX_INTERCONNECT_PPIB_COUNT);

    return &interconnect_ppib[index];
}

bool nrfx_interconnect_direct_connection_check(nrfx_interconnect_dppic_to_dppic_path_t * p_path)
{
    NRFX_ASSERT(p_path);
    NRFX_ASSERT(p_path->src_dppic);
    NRFX_ASSERT(p_path->dst_dppic);

    for (uint8_t i = 0; i < NRFX_INTERCONNECT_DPPIC_PPIB_COUNT; i++)
    {
        if (interconnect_dppic_ppib[i].dppic != p_path->src_dppic->dppic)
        {
            continue;
        }

        for (uint8_t j = 0; j < NRFX_INTERCONNECT_PPIB_COUNT; j++)
        {
            NRF_PPIB_Type * p_dst_ppib = NULL;

            if (interconnect_ppib[j].p_ppib1 == interconnect_dppic_ppib[i].ppib)
            {
                p_path->ppib          = &interconnect_ppib[j];
                p_path->ppib_inverted = false;
                p_dst_ppib            = interconnect_ppib[j].p_ppib2;
            }

            if (interconnect_ppib[j].p_ppib2 == interconnect_dppic_ppib[i].ppib)
            {
                p_path->ppib          = &interconnect_ppib[j];
                p_path->ppib_inverted = true;
                p_dst_ppib            = interconnect_ppib[j].p_ppib1;
            }

            if (p_dst_ppib == NULL)
            {
                continue;
            }

            for (uint8_t k = 0; k < NRFX_ARRAY_SIZE(interconnect_dppic_ppib); k++)
            {
                if ((interconnect_dppic_ppib[k].ppib == p_dst_ppib) &&
                    (interconnect_dppic_ppib[k].dppic == p_path->dst_dppic->dppic))
                {
                    return true;
                }
            }
        }
    }

    return false;
}

nrf_apb_index_t nrfx_interconnect_apb_index_get(uint32_t addr)
{
    for (uint8_t i = 0; i < NRFX_INTERCONNECT_DPPIC_COUNT; i++)
    {
        nrfx_interconnect_dppic_t const * p_dppic = &interconnect_dppic[i];
        uint8_t bus_address_area = nrf_address_bus_get(addr, p_dppic->apb_size);

        if (bus_address_area == nrf_address_bus_get((uint32_t)p_dppic->dppic, p_dppic->apb_size))
        {
            return (nrf_apb_index_t)bus_address_area;
        }
    }
    return (nrf_apb_index_t)0;
}

#endif // defined(LUMOS_XXAA)
