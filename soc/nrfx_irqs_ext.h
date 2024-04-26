/*$$$LICENCE_NORDIC_STANDARD<2023>$$$*/

#ifndef NRFX_IRQS_EXT_H__
#define NRFX_IRQS_EXT_H__

#if defined(NRF54H20_ENGA_XXAA) || defined(NRF54H20_XXAA) || defined(NRF7140_XXAA)
    #include <soc/nrfx_irqs_haltium.h>
#elif defined(NRF9230_ENGA_XXAA) || defined(NRF9230_XXAA)
    #include <soc/nrfx_irqs_nrf9230.h>
#else
    #error "Unknown device."
#endif

#endif // NRFX_IRQS_EXT_H__
