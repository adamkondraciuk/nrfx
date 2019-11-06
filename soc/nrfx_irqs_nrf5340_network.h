/*$$$LICENCE_NORDIC_STANDARD<2019>$$$*/

#ifndef NRFX_IRQS_NRF5340_NETWORK_H__
#define NRFX_IRQS_NRF5340_NETWORK_H__

#ifdef __cplusplus
extern "C" {
#endif

// CLOCK_POWER_IRQn
#define nrfx_power_clock_irq_handler    CLOCK_POWER_IRQHandler

// RADIO_IRQn

// RNG_IRQn
#define nrfx_rng_irq_handler        RNG_IRQHandler

// GPIOTE_IRQn
#define nrfx_gpiote_irq_handler     GPIOTE_IRQHandler

// WDT_IRQn
#define nrfx_wdt_0_irq_handler      WDT_IRQHandler

// TIMER0_IRQn
#define nrfx_timer_0_irq_handler    TIMER0_IRQHandler

// ECB_IRQn

// AAR_CCM_IRQn

// TEMP_IRQn
#define nrfx_temp_irq_handler       TEMP_IRQHandler

// RTC0_IRQn
#define nrfx_rtc_0_irq_handler      RTC0_IRQHandler

// IPC_IRQn
#define nrfx_ipc_irq_handler        IPC_IRQHandler

// SPIM0_SPIS0_TWIM0_TWIS0_UARTE0_IRQn
#if NRFX_CHECK(NRFX_PRS_ENABLED) && NRFX_CHECK(NRFX_PRS_BOX_0_ENABLED)
#define nrfx_prs_box_0_irq_handler  SPIM0_SPIS0_TWIM0_TWIS0_UARTE0_IRQHandler
#else
#define nrfx_spim_0_irq_handler     SPIM0_SPIS0_TWIM0_TWIS0_UARTE0_IRQHandler
#define nrfx_spis_0_irq_handler     SPIM0_SPIS0_TWIM0_TWIS0_UARTE0_IRQHandler
#define nrfx_twim_0_irq_handler     SPIM0_SPIS0_TWIM0_TWIS0_UARTE0_IRQHandler
#define nrfx_twis_0_irq_handler     SPIM0_SPIS0_TWIM0_TWIS0_UARTE0_IRQHandler
#define nrfx_uarte_0_irq_handler    SPIM0_SPIS0_TWIM0_TWIS0_UARTE0_IRQHandler
#endif

// EGU0_IRQn
#define nrfx_egu_0_irq_handler      EGU0_IRQHandler

// RTC1_IRQn
#define nrfx_rtc_1_irq_handler      RTC1_IRQHandler

// TIMER1_IRQn
#define nrfx_timer_1_irq_handler    TIMER1_IRQHandler

// TIMER2_IRQn
#define nrfx_timer_2_irq_handler    TIMER2_IRQHandler

// SWI0_IRQn

// SWI1_IRQn

// SWI2_IRQn

// SWI3_IRQn

#ifdef __cplusplus
}
#endif

#endif // NRFX_IRQS_NRF5340_NETWORK_H__
