/*$$$LICENCE_NORDIC_STANDARD<2016>$$$*/
#ifndef NRF_PERIPHERALS_H
#define NRF_PERIPHERALS_H

/*lint ++flb "Enter library region */

#ifdef NRF51422
#include "nrf51422_peripherals.h"
#endif

#ifdef NRF51802
#include "nrf51802_peripherals.h"
#endif

#ifdef NRF51822
#include "nrf51822_peripherals.h"
#endif

#ifdef NRF52832_XXAA
#include "nrf52832_peripherals.h"
#endif

#ifdef NRF52840_XXAA
#include "nrf52840_peripherals.h"
#endif

/*lint --flb "Leave library region" */

#endif /* NRF_PERIPHERALS_H */
