/*$$$LICENCE_NORDIC_STANDARD<2022>$$$*/

#ifndef NRFX_MOONLIGHT_APPLICATION_H__
#define NRFX_MOONLIGHT_APPLICATION_H__

#ifdef __cplusplus
extern "C" {
#endif

// CLOCK_POWER_IRQHandler
#define nrfx_power_clock_irq_handler    CLOCK_POWER_IRQHandler


// SERIAL00_IRQHandler
#if NRFX_CHECK(NRFX_PRS_ENABLED) && NRFX_CHECK(NRFX_PRS_BOX_0_ENABLED)
#define nrfx_prs_box_0_irq_handler      SERIAL00_IRQHandler
#else
#define nrfx_spim_00_irq_handler        SERIAL00_IRQHandler
#define nrfx_spis_00_irq_handler        SERIAL00_IRQHandler
#define nrfx_twim_00_irq_handler        SERIAL00_IRQHandler
#define nrfx_twis_00_irq_handler        SERIAL00_IRQHandler
#define nrfx_spi_00_irq_handler         SERIAL00_IRQHandler
#define nrfx_uarte_00_irq_handler       SERIAL00_IRQHandler
#endif

// SERIAL20_IRQHandler
#if NRFX_CHECK(NRFX_PRS_ENABLED) && NRFX_CHECK(NRFX_PRS_BOX_1_ENABLED)
#define nrfx_prs_box_1_irq_handler      SERIAL20_IRQHandler
#else
#define nrfx_spim_20_irq_handler        SERIAL20_IRQHandler
#define nrfx_spis_20_irq_handler        SERIAL20_IRQHandler
#define nrfx_twim_20_irq_handler        SERIAL20_IRQHandler
#define nrfx_twis_20_irq_handler        SERIAL20_IRQHandler
#define nrfx_spi_20_irq_handler         SERIAL20_IRQHandler
#define nrfx_uarte_20_irq_handler       SERIAL20_IRQHandler
#endif

// SERIAL21_IRQHandler
#if NRFX_CHECK(NRFX_PRS_ENABLED) && NRFX_CHECK(NRFX_PRS_BOX_2_ENABLED)
#define nrfx_prs_box_2_irq_handler      SERIAL21_IRQHandler
#else
#define nrfx_spim_21_irq_handler        SERIAL21_IRQHandler
#define nrfx_spis_21_irq_handler        SERIAL21_IRQHandler
#define nrfx_twim_21_irq_handler        SERIAL21_IRQHandler
#define nrfx_twis_21_irq_handler        SERIAL21_IRQHandler
#define nrfx_spi_21_irq_handler         SERIAL21_IRQHandler
#define nrfx_uarte_21_irq_handler       SERIAL21_IRQHandler
#endif

// SERIAL22_IRQHandler
#if NRFX_CHECK(NRFX_PRS_ENABLED) && NRFX_CHECK(NRFX_PRS_BOX_3_ENABLED)
#define nrfx_prs_box_3_irq_handler      SERIAL22_IRQHandler
#else
#define nrfx_spim_22_irq_handler        SERIAL22_IRQHandler
#define nrfx_spis_22_irq_handler        SERIAL22_IRQHandler
#define nrfx_twim_22_irq_handler        SERIAL22_IRQHandler
#define nrfx_twis_22_irq_handler        SERIAL22_IRQHandler
#define nrfx_spi_22_irq_handler         SERIAL22_IRQHandler
#define nrfx_uarte_22_irq_handler       SERIAL22_IRQHandler
#endif

// SERIAL30_IRQHandler
#if NRFX_CHECK(NRFX_PRS_ENABLED) && NRFX_CHECK(NRFX_PRS_BOX_4_ENABLED)
#define nrfx_prs_box_4_irq_handler      SERIAL30_IRQHandler
#else
#define nrfx_spim_30_irq_handler        SERIAL30_IRQHandler
#define nrfx_spis_30_irq_handler        SERIAL30_IRQHandler
#define nrfx_twim_30_irq_handler        SERIAL30_IRQHandler
#define nrfx_twis_30_irq_handler        SERIAL30_IRQHandler
#define nrfx_spi_30_irq_handler         SERIAL30_IRQHandler
#define nrfx_uarte_30_irq_handler       SERIAL30_IRQHandler
#endif

// GPIOTE20_1_IRQHandler
#define nrfx_gpiote20_irq_handler       GPIOTE20_1_IRQHandler

// GPIOTE30_1_IRQHandler
#define nrfx_gpiote30_irq_handler       GPIOTE30_1_IRQHandler

// SAADC_IRQHandler
#define nrfx_saadc_irq_handler          SAADC_IRQHandler

// TIMER00_IRQHandler
#define nrfx_timer_00_irq_handler       TIMER00_IRQHandler

// TIMER10_IRQHandler
#define nrfx_timer_10_irq_handler       TIMER10_IRQHandler

// TIMER20_IRQHandler
#define nrfx_timer_20_irq_handler       TIMER20_IRQHandler

// TIMER21_IRQHandler
#define nrfx_timer_21_irq_handler       TIMER21_IRQHandler

// TIMER22_IRQHandler
#define nrfx_timer_22_irq_handler       TIMER22_IRQHandler

// TIMER23_IRQHandler
#define nrfx_timer_23_irq_handler       TIMER23_IRQHandler

// TIMER24_IRQHandler
#define nrfx_timer_24_irq_handler       TIMER24_IRQHandler

// RTC10_IRQHandler
#define nrfx_rtc_10_irq_handler         RTC10_IRQHandler

// RTC30_IRQHandler
#define nrfx_rtc_30_irq_handler         RTC30_IRQHandler

// WDT30_IRQHandler
#define nrfx_wdt_30_irq_handler         WDT30_IRQHandler

// WDT31_IRQHandler
#define nrfx_wdt_31_irq_handler         WDT31_IRQHandler

// COMP_LPCOMP_IRQHandler
#if NRFX_CHECK(NRFX_PRS_ENABLED) && NRFX_CHECK(NRFX_PRS_BOX_5_ENABLED)
#define nrfx_prs_box_5_irq_handler      COMP_LPCOMP_IRQHandler
#else
#define nrfx_comp_irq_handler           COMP_LPCOMP_IRQHandler
#define nrfx_lpcomp_irq_handler         COMP_LPCOMP_IRQHandler
#endif

// EGU10_IRQHandler
#define nrfx_egu_10_irq_handler         EGU10_IRQHandler

// EGU20_IRQHandler
#define nrfx_egu_20_irq_handler         EGU20_IRQHandler

// PWM20_IRQHandler
#define nrfx_pwm_20_irq_handler         PWM20_IRQHandler

// PDM20_IRQHandler
#define nrfx_pdm_20_irq_handler         PDM20_IRQHandler

// PDM21_IRQHandler
#define nrfx_pdm_21_irq_handler        PDM21_IRQHandler

// PWM21_IRQHandler
#define nrfx_pwm_21_irq_handler         PWM21_IRQHandler

// PWM22_IRQHandler
#define nrfx_pwm_22_irq_handler         PWM22_IRQHandler

// I2S20_IRQHandler
#define nrfx_i2s_20_irq_handler         I2S20_IRQHandler

// QDEC20_IRQHandler
#define nrfx_qdec_20_irq_handler        QDEC20_IRQHandler

// QDEC21_IRQHandler
#define nrfx_qdec_21_irq_handler        QDEC21_IRQHandler

// NFCT_IRQHandler
#define nrfx_nfct_irq_handler           NFCT_IRQHandler

// TEMP_IRQHandler
#define nrfx_temp_irq_handler           TEMP_IRQHandler

// GRTC_0_IRQHandler
#define nrfx_grtc_0_irq_handler         GRTC_0_IRQHandler

// GRTC_1_IRQHandler
#define nrfx_grtc_1_irq_handler         GRTC_1_IRQHandler

#ifdef __cplusplus
}
#endif

#endif // NRFX_IRQS_NRF5340_APPLICATION_H__
