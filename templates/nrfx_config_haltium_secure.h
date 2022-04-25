/*$$$LICENCE_NORDIC_STANDARD<2021>$$$*/

#ifndef NRFX_CONFIG_HALTIUM_SECURE_H__
#define NRFX_CONFIG_HALTIUM_SECURE_H__

// <h> nRF_Drivers

// <e> NRFX_TBM_ENABLED - nrfx_tbm - TBM (Trace Buffer Monitor) driver
//==========================================================
#ifndef NRFX_TBM_ENABLED
#define NRFX_TBM_ENABLED 1
#endif
//
// <o> NRFX_TBM_DEFAULT_CONFIG_IRQ_PRIORITY  - Interrupt priority.

// <0=> 0 (highest)
// <1=> 1
// <2=> 2
// <3=> 3
// <4=> 4
// <5=> 5
// <6=> 6
// <7=> 7

#ifndef NRFX_TBM_DEFAULT_CONFIG_IRQ_PRIORITY
#define NRFX_TBM_DEFAULT_CONFIG_IRQ_PRIORITY 7
#endif

// </e>

// </h>

#endif // NRFX_CONFIG_HALTIUM_SECURE_H__
