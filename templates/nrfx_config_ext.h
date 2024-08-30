/*$$$LICENCE_NORDIC_STANDARD<2023>$$$*/

#ifndef NRFX_CONFIG_EXT_H__
#define NRFX_CONFIG_EXT_H__

#if defined(NRF54H20_ENGA_XXAA)
    #if defined(NRF_SECURE)
        #include <nrfx_config_nrf54h20_enga_secure.h>
    #elif defined(NRF_SYSCTRL)
        #include <nrfx_config_nrf54h20_enga_sysctrl.h>
    #endif
#elif defined(NRF54H20_ENGB_XXAA)
    #elif defined(NRF_SECURE)
        #include <nrfx_config_nrf54h20_engb_secure.h>
    #elif defined(NRF_SYSCTRL)
        #include <nrfx_config_nrf54h20_engb_sysctrl.h>
    #endif
#elif defined(NRF54H20_XXAA)
    #elif defined(NRF_SECURE)
        #include <nrfx_config_nrf54h20_secure.h>
    #elif defined(NRF_SYSCTRL)
        #include <nrfx_config_nrf54h20_sysctrl.h>
    #endif
#elif defined(NRF9230_ENGA_XXAA)
    #if defined(NRF_APPLICATION)
        #include <nrfx_config_nrf9230_enga_application.h>
    #elif defined(NRF_RADIOCORE)
        #include <nrfx_config_nrf9230_enga_radiocore.h>
    #elif defined(NRF_CELLCORE)
        #include <nrfx_config_nrf9230_enga_cellular.h>
    #elif defined(NRF_SECURE)
        #include <nrfx_config_nrf9230_enga_secure.h>
    #elif defined(NRF_FLPR)
        #include <nrfx_config_nrf9230_enga_flpr.h>
    #elif defined(NRF_PPR)
        #include <nrfx_config_nrf9230_enga_ppr.h>
    #elif defined(NRF_SYSCTRL)
        #include <nrfx_config_nrf9230_enga_sysctrl.h>
    #endif
#elif defined(NRF9230_XXAA)
    #if defined(NRF_APPLICATION)
        #include <nrfx_config_nrf9230_application.h>
    #elif defined(NRF_RADIOCORE)
        #include <nrfx_config_nrf9230_radiocore.h>
    #elif defined(NRF_CELLCORE)
        #include <nrfx_config_nrf9230_cellular.h>
    #elif defined(NRF_SECURE)
        #include <nrfx_config_nrf9230_secure.h>
    #elif defined(NRF_FLPR)
        #include <nrfx_config_nrf9230_flpr.h>
    #elif defined(NRF_PPR)
        #include <nrfx_config_nrf9230_ppr.h>
    #elif defined(NRF_SYSCTRL)
        #include <nrfx_config_nrf9230_sysctrl.h>
    #endif
#elif defined(NRF7140_XXAA)
    #if defined(NRF_APPLICATION)
        #include <nrfx_config_nrf7140_application.h>
    #elif defined(NRF_RADIOCORE)
        #include <nrfx_config_nrf7140_radiocore.h>
    #elif defined(NRF_SECURE)
        #include <nrfx_config_nrf7140_secure.h>
    #elif defined(NRF_FLPR)
        #include <nrfx_config_nrf7140_flpr.h>
    #elif defined(NRF_PPR)
        #include <nrfx_config_nrf7140_ppr.h>
    #elif defined(NRF_SYSCTRL)
        #include <nrfx_config_nrf7140_sysctrl.h>
    #elif defined(NRF_LMAC)
        #include <nrfx_config_nrf7140_lmac.h>
    #elif defined(NRF_UMAC)
        #include <nrfx_config_nrf7140_umac.h>
    #endif
#else
    #error "Unknown device."
#endif

#endif // NRFX_CONFIG_EXT_H__
