/*$$$LICENCE_NORDIC_STANDARD<2017>$$$*/

#ifndef NRFX_IRQS_H__
#define NRFX_IRQS_H__

#if defined(NRF51)
    #include <soc/nrfx_irqs_nrf51.h>
#elif defined(NRF52805_XXAA)
    #include <soc/nrfx_irqs_nrf52805.h>
#elif defined(NRF52810_XXAA)
    #include <soc/nrfx_irqs_nrf52810.h>
#elif defined(NRF52811_XXAA)
    #include <soc/nrfx_irqs_nrf52811.h>
#elif defined(NRF52820_XXAA)
    #include <soc/nrfx_irqs_nrf52820.h>
#elif defined(NRF52832_XXAA) || defined (NRF52832_XXAB)
    #include <soc/nrfx_irqs_nrf52832.h>
#elif defined(NRF52833_XXAA)
    #include <soc/nrfx_irqs_nrf52833.h>
#elif defined(NRF52840_XXAA)
    #include <soc/nrfx_irqs_nrf52840.h>
#elif defined(NRF5340_XXAA_APPLICATION)
    #include <soc/nrfx_irqs_nrf5340_application.h>
#elif defined(NRF5340_XXAA_NETWORK)
    #include <soc/nrfx_irqs_nrf5340_network.h>
#elif defined(NRF54H20_XXAA) && defined(NRF_APPLICATION)
    #include <soc/nrfx_irqs_nrf54h20_application.h>
#elif defined(NRF54H20_XXAA) && defined(NRF_RADIOCORE)
    #include <soc/nrfx_irqs_nrf54h20_radiocore.h>
#elif defined(NRF54H20_XXAA) && defined(NRF_PPR)
    #include <soc/nrfx_irqs_nrf54h20_ppr.h>
#elif defined(NRF54H20_XXAA) && defined(NRF_FLPR)
    #include <soc/nrfx_irqs_nrf54h20_flpr.h>
#elif defined(NRF54H20_ENGA_XXAA) && defined(NRF_APPLICATION)
    #include <soc/nrfx_irqs_nrf54h20_enga_application.h>
#elif defined(NRF54H20_ENGA_XXAA) && defined(NRF_RADIOCORE)
    #include <soc/nrfx_irqs_nrf54h20_enga_radiocore.h>
#elif defined(NRF54H20_ENGA_XXAA) && defined(NRF_PPR)
    #include <soc/nrfx_irqs_nrf54h20_enga_ppr.h>
#elif defined(NRF54H20_ENGA_XXAA) && defined(NRF_FLPR)
    #include <soc/nrfx_irqs_nrf54h20_enga_flpr.h>
#elif defined(NRF54L15_XXAA) && defined(NRF_APPLICATION)
    #include <soc/nrfx_irqs_nrf54l15_application.h>
#elif defined(NRF54L15_XXAA) && defined(NRF_FLPR)
    #include <soc/nrfx_irqs_nrf54l15_flpr.h>
#elif defined(NRF54L15_ENGA_XXAA) && defined(NRF_APPLICATION)
    #include <soc/nrfx_irqs_nrf54l15_enga_application.h>
#elif defined(NRF54L15_ENGA_XXAA) && defined(NRF_FLPR)
    #include <soc/nrfx_irqs_nrf54l15_enga_flpr.h>
#elif defined(NRF54L20_ENGA_XXAA) && defined(NRF_APPLICATION)
    #include <soc/nrfx_irqs_nrf54l15_enga_application.h>
#elif defined(NRF54L20_ENGA_XXAA) && defined(NRF_FLPR)
    #include <soc/nrfx_irqs_nrf54l15_enga_flpr.h>
#elif defined(NRF91_SERIES)
    #include <soc/nrfx_irqs_nrf91.h>
#elif defined(NRF9230_ENGB_XXAA) && defined(NRF_APPLICATION)
    #include <soc/nrfx_irqs_nrf9230_engb_application.h>
#elif defined(NRF9230_ENGB_XXAA) && defined(NRF_RADIOCORE)
    #include <soc/nrfx_irqs_nrf9230_engb_radiocore.h>
#elif defined(NRF9230_ENGB_XXAA) && defined(NRF_PPR)
    #include <soc/nrfx_irqs_nrf9230_engb_ppr.h>
#elif defined(NRF9230_ENGB_XXAA) && defined(NRF_FLPR)
    #include <soc/nrfx_irqs_nrf9230_engb_flpr.h>
#else
    #include <soc/nrfx_irqs_ext.h>
#endif

#endif // NRFX_IRQS_H__
