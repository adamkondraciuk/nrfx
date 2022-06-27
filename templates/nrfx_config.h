/*$$$LICENCE_NORDIC_STANDARD<2020>$$$*/

#ifndef NRFX_CONFIG_H__
#define NRFX_CONFIG_H__

#include <nrfx_config_common.h>
#if defined(NRF51)
    #include <nrfx_config_nrf51.h>
#elif defined(NRF52805_XXAA)
    #include <nrfx_config_nrf52805.h>
#elif defined(NRF52810_XXAA)
    #include <nrfx_config_nrf52810.h>
#elif defined(NRF52811_XXAA)
    #include <nrfx_config_nrf52811.h>
#elif defined(NRF52820_XXAA)
    #include <nrfx_config_nrf52820.h>
#elif defined(NRF52832_XXAA) || defined (NRF52832_XXAB)
    #include <nrfx_config_nrf52832.h>
#elif defined(NRF52833_XXAA)
    #include <nrfx_config_nrf52833.h>
#elif defined(NRF52840_XXAA)
    #include <nrfx_config_nrf52840.h>
#elif defined(NRF5340_XXAA_APPLICATION)
    #include <nrfx_config_nrf5340_application.h>
#elif defined(NRF5340_XXAA_NETWORK)
    #include <nrfx_config_nrf5340_network.h>
#elif defined(NRF9120_XXAA) || defined(NRF9160_XXAA)
    #include <nrfx_config_nrf91.h>
#elif defined(LILIUMSOC1_XXAA) || defined(LILIUMFP1_XXAA) || defined(NRF9230_XXAA)
    #if defined(NRF_APPLICATION)
        #include <nrfx_config_haltium_application.h>
    #elif defined(NRF_SYSTEMC_APPLICATION)
        #include <nrfx_config_haltium_systemc_application.h>
    #elif defined(NRF_RADIOCORE)
        #include <nrfx_config_haltium_network.h>
    #elif defined(NRF_CELLCORE)
        #include <nrfx_config_haltium_cellular.h>
    #elif defined(NRF_SECURE)
        #include <nrfx_config_haltium_secure.h>
    #elif defined(NRF_SYSTEMC_SECURE)
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

#if defined(LILIUMSOC1_XXAA) || defined(LILIUMFP1_XXAA)
    #include <nrfx_config_haltium_global.h>
    #include <nrfx_config_nrf5420_global.h>
#endif

#if defined(NRF9230_XXAA)
    #include <nrfx_config_haltium_global.h>
    #include <nrfx_config_nrf9230_global.h>
#endif

#endif // NRFX_CONFIG_H__
