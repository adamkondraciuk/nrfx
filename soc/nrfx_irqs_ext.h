/*$$$LICENCE_NORDIC_STANDARD<2023>$$$*/

#ifndef NRFX_IRQS_EXT_H__
#define NRFX_IRQS_EXT_H__

#if defined(HALTIUM_XXAA) && !defined(NRF9230_XXAA)
    #include <soc/nrfx_irqs_haltium.h>
#elif defined(NRF9230_XXAA)
    #include <soc/nrfx_irqs_nrf9230.h>
#elif defined(NRF54L15_ENGA_XXAA)
    #include <soc/nrfx_irqs_nrf54l15_application.h>
#else
    #error "Unknown device."
#endif

#endif // NRFX_IRQS_EXT_H__
