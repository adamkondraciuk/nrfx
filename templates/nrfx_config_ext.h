/*$$$LICENCE_NORDIC_STANDARD<2023>$$$*/

#ifndef NRFX_CONFIG_EXT_H__
#define NRFX_CONFIG_EXT_H__

#if defined(NRF54H20_ENGA_XXAA) || defined(LILIUMFP1_XXAA) || defined(NRF9230_XXAA)
    #if defined(NRF_APPLICATION)
        #include <nrfx_config_haltium_application.h>
    #elif defined(NRF_RADIOCORE)
        #include <nrfx_config_haltium_network.h>
    #elif defined(NRF_CELLCORE)
        #include <nrfx_config_haltium_cellular.h>
    #elif defined(NRF_SECURE)
        #include <nrfx_config_haltium_secure.h>
    #elif defined(NRF_FLPR)
        #include <nrfx_config_haltium_flpr.h>
    #elif defined(NRF_PPR)
        #include <nrfx_config_haltium_ppr.h>
    #elif defined(NRF_SYSCTRL)
        #include <nrfx_config_haltium_sysctrl.h>
    #endif
#else
    #error "Unknown device."
#endif

#if defined(NRF54H20_ENGA_XXAA) || defined(LILIUMFP1_XXAA)
    #include <nrfx_config_haltium_global.h>
    #include <nrfx_config_nrf5420_global.h>
#endif

#if defined(NRF9230_XXAA)
    #include <nrfx_config_haltium_global.h>
    #include <nrfx_config_nrf9230_global.h>
#endif

#if defined(NRF7140_XXAA)
    #include <nrfx_config_haltium_global.h>
    #include <nrfx_config_nrf7140_global.h>
#endif

#endif // NRFX_CONFIG_EXT_H__
