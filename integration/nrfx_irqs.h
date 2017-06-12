/*$$$LICENCE_NORDIC_STANDARD<2017>$$$*/

#ifndef NRFX_IRQS_H__
#define NRFX_IRQS_H__

#if defined(NRF51)
    #include <integration/nrfx_irqs_nrf51.h>
#elif defined(NRF52810_XXAA)
    #include <integration/nrfx_irqs_nrf52810.h>
#elif defined(NRF52832_XXAA) || defined (NRF52832_XXAB)
    #include <integration/nrfx_irqs_nrf52832.h>
#elif defined(NRF52840_XXAA)
    #include <integration/nrfx_irqs_nrf52840.h>
#else
    #error "Unknown device."
#endif

#endif // NRFX_IRQS_H__
