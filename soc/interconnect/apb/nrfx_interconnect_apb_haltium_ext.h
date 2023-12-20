/*$$$LICENCE_NORDIC_STANDARD<2023>$$$*/

#ifndef NRFX_INTERCONNECT_APB_HALTIUM_EXT_H__
#define NRFX_INTERCONNECT_APB_HALTIUM_EXT_H__

#if defined(NRF_CELLCORE)
    #include <soc/interconnect/apb/nrfx_interconnect_apb_haltium_cellcore.h>
#elif defined(NRF_SYSCTRL)
    #include <soc/interconnect/apb/nrfx_interconnect_apb_haltium_sysctrl.h>
#elif defined(NRF_SECURE)
    #include <soc/interconnect/apb/nrfx_interconnect_apb_haltium_secure.h>
#elif defined(NRF_LMAC)
    #include <soc/interconnect/apb/nrfx_interconnect_apb_haltium_lmac.h>
#elif defined(NRF_UMAC)
    #include <soc/interconnect/apb/nrfx_interconnect_apb_haltium_umac.h>
#else
    #error "Unknown device."
#endif

#endif // NRFX_INTERCONNECT_APB_HALTIUM_EXT_H__
