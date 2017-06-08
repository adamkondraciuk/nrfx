/*$$$LICENCE_NORDIC_STANDARD<2016>$$$*/

#ifndef NRF_PERIPHERALS_H__
#define NRF_PERIPHERALS_H__

/*lint ++flb "Enter library region */

#if defined(NRF51422)
    #include "nrf51422_peripherals.h"
#elif defined(NRF51802)
    #include "nrf51802_peripherals.h"
#elif defined(NRF51822)
    #include "nrf51822_peripherals.h"
#elif defined(NRF52810_XXAA)
    #include "nrf52810_peripherals.h"
#elif defined(NRF52832_XXAA) || defined(NRF52832_XXAB)
    #include "nrf52832_peripherals.h"
#elif defined(NRF52840_XXAA)
    #include "nrf52840_peripherals.h"
#endif

/*lint --flb "Leave library region" */

#endif // NRF_PERIPHERALS_H__
