/*$$$LICENCE_NORDIC_STANDARD<2020>$$$*/

#ifndef NRFX_IRQS_HALTIUM_H__
#define NRFX_IRQS_HALTIUM_H__

#ifdef __cplusplus
extern "C" {
#endif

// SPU0_IRQn

// GENERIC1_IRQn

// MPC_IRQn

// GENERIC2_IRQn

// MVDMA_IRQn
#define nrfx_mvdma_irq_handler        MVDMA_IRQHandler

// RAMC_IRQn

// VPR_IRQn
#define nrfx_vevif_0_irq_handler       VPR0_IRQ_0_IRQHandler
#define nrfx_vevif_1_irq_handler       VPR0_IRQ_1_IRQHandler
#define nrfx_vevif_2_irq_handler       VPR0_IRQ_2_IRQHandler
#define nrfx_vevif_3_irq_handler       VPR0_IRQ_3_IRQHandler
#define nrfx_vevif_4_irq_handler       VPR0_IRQ_4_IRQHandler
#define nrfx_vevif_5_irq_handler       VPR0_IRQ_5_IRQHandler
#define nrfx_vevif_6_irq_handler       VPR0_IRQ_6_IRQHandler
#define nrfx_vevif_7_irq_handler       VPR0_IRQ_7_IRQHandler
#define nrfx_vevif_8_irq_handler       VPR0_IRQ_8_IRQHandler
#define nrfx_vevif_9_irq_handler       VPR0_IRQ_9_IRQHandler
#define nrfx_vevif_10_irq_handler      VPR0_IRQ_10_IRQHandler
#define nrfx_vevif_11_irq_handler      VPR0_IRQ_11_IRQHandler
#define nrfx_vevif_12_irq_handler      VPR0_IRQ_12_IRQHandler
#define nrfx_vevif_13_irq_handler      VPR0_IRQ_13_IRQHandler
#define nrfx_vevif_14_irq_handler      VPR0_IRQ_14_IRQHandler
#define nrfx_vevif_15_irq_handler      VPR0_IRQ_15_IRQHandler
#define nrfx_vevif_16_irq_handler      VPR0_IRQ_16_IRQHandler
#define nrfx_vevif_17_irq_handler      VPR0_IRQ_17_IRQHandler
#define nrfx_vevif_18_irq_handler      VPR0_IRQ_18_IRQHandler
#define nrfx_vevif_19_irq_handler      VPR0_IRQ_19_IRQHandler
#define nrfx_vevif_20_irq_handler      VPR0_IRQ_20_IRQHandler
#define nrfx_vevif_21_irq_handler      VPR0_IRQ_21_IRQHandler
#define nrfx_vevif_22_irq_handler      VPR0_IRQ_22_IRQHandler
#define nrfx_vevif_23_irq_handler      VPR0_IRQ_23_IRQHandler
#define nrfx_vevif_24_irq_handler      VPR0_IRQ_24_IRQHandler
#define nrfx_vevif_25_irq_handler      VPR0_IRQ_25_IRQHandler
#define nrfx_vevif_26_irq_handler      VPR0_IRQ_26_IRQHandler
#define nrfx_vevif_27_irq_handler      VPR0_IRQ_27_IRQHandler
#define nrfx_vevif_28_irq_handler      VPR0_IRQ_28_IRQHandler
#define nrfx_vevif_29_irq_handler      VPR0_IRQ_29_IRQHandler
#define nrfx_vevif_30_irq_handler      VPR0_IRQ_30_IRQHandler
#define nrfx_vevif_31_irq_handler      VPR0_IRQ_31_IRQHandler

// SPU1_IRQn

// GENERIC4_IRQn

// MEMCONF_IRQn

// IPCT_IRQn

// WDT0_IRQn
#define nrfx_wdt_0_irq_handler        WDT0_IRQHandler

// WDT1_IRQn
#define nrfx_wdt_1_irq_handler        WDT1_IRQHandler

// BELLBOARD0_IRQn
#if defined(NRF_RADIOCORE) || defined(NRF_APPLICATION)
#define nrfx_bellboard_0_irq_handler  BELLBOARD0_0_IRQHandler
#else
#define nrfx_bellboard_0_irq_handler  BELLBOARD0_IRQHandler
#endif

// BELLBOARD1_IRQn
#if defined(NRF_RADIOCORE) || defined(NRF_APPLICATION)
#define nrfx_bellboard_1_irq_handler  BELLBOARD0_1_IRQHandler
#else
#define nrfx_bellboard_1_irq_handler  BELLBOARD1_IRQHandler
#endif

// BELLBOARD2_IRQn
#if defined(NRF_RADIOCORE) || defined(NRF_APPLICATION)
#define nrfx_bellboard_2_irq_handler  BELLBOARD0_2_IRQHandler
#else
#define nrfx_bellboard_2_irq_handler  BELLBOARD2_IRQHandler
#endif

// BELLBOARD3_IRQn
#if defined(NRF_RADIOCORE) || defined(NRF_APPLICATION)
#define nrfx_bellboard_3_irq_handler  BELLBOARD0_3_IRQHandler
#else
#define nrfx_bellboard_3_irq_handler  BELLBOARD3_IRQHandler
#endif

// SPU2_IRQn

// GENERIC6_IRQn

// GENERIC7_IRQn

// AAR_CCM_IRQn

// ECB_IRQn

// GSPU0_IRQn

// GMPC0_IRQn

// GL2CACHE_IRQn

// RAMC00_IRQn

// RAMC01_IRQn

// GGENERIC1_IRQn

// GGENERIC2_IRQn

// GSPU1_IRQn

// GMPC1_IRQn

// MRAMC0_IRQn

// MRAMC1_IRQn

// EXMEE_IRQn

// GGENERIC4_IRQn

// GMVDMA_IRQn

// GIPCT0_IRQn

// GIPCT1_IRQn

// GIPCT2_IRQn

// GIPCT3_IRQn

// GIPCT4_IRQn

// GIPCT5_IRQn

// GIPCT6_IRQn

// EASYVDMA_IRQn

// GSPU2_IRQn

// GGENERIC6_IRQn

// GMPC2_IRQn

// GGENERIC7_IRQn

// RAMC20_IRQn

// RAMC21_IRQn

// OTPC_IRQn

// GROMC_IRQn

// MEMCONF0_IRQn

// GSPU3_IRQn

// GIPCT7_IRQn

// GGENERIC9_IRQn

// GGENERIC10_IRQn

// GGENERIC11_IRQn

// GGENERIC12_IRQn

// GSPU4_IRQn

// TIMER0_IRQn
#define nrfx_timer_0_irq_handler      TIMER0_IRQHandler

// TIMER1_IRQn
#define nrfx_timer_1_irq_handler      TIMER1_IRQHandler

// PWM0_IRQn
#define nrfx_pwm_0_irq_handler        PWM0_IRQHandler

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

// HSSPIM0_IRQn

// HSSPIM1_IRQn

// GSPU5_IRQn

// GGENERIC15_IRQn

// GMPC3_IRQn

// GGENERIC16_IRQn

// RAMC30_IRQn

// RAMC31_IRQn

// MEMCONF1_IRQn

// GSPU6_IRQn

// GIPCT8_IRQn

// GPIOTE0_IRQn

// GSPU7_IRQn

// GRTC_IRQn
#define nrfx_grtc_irq_handler       GRTC_IRQHandler

// RESETHUB_IRQn

// GGENERIC19_IRQn

// GSPU8_IRQn

// SAADC_IRQn
#define nrfx_saadc_irq_handler       SAADC_IRQHandler

// COMP_LPCOMP_IRQn

// TEMP_IRQn
#define nrfx_temp_irq_handler        TEMP_IRQHandler

// NFCT_IRQn
#define nrfx_nfct_irq_handler        NFCT_IRQHandler

// GSPU9_IRQn

// I2S_IRQn
#define nrfx_i2s_irq_handler         I2S_IRQHandler

// PDM_IRQn
#define nrfx_pdm_irq_handler         PDM_IRQHandler

// QDEC0_IRQn
#define nrfx_qdec_130_irq_handler     QDEC130_IRQHandler

// QDEC1_IRQn
#define nrfx_qdec_131_irq_handler     QDEC131_IRQHandler

// RTC0_IRQn
#define nrfx_rtc_0_irq_handler        RTC0_IRQHandler

// RTC1_IRQn
#define nrfx_rtc_1_irq_handler        RTC1_IRQHandler

// GGENERIC22_IRQn

// GMIPIRFFE_IRQn

// TWIM9_IRQn

// GSPU10_IRQn

// TIMER2_IRQn
#define nrfx_timer_2_irq_handler      TIMER2_IRQHandler

// TIMER3_IRQn
#define nrfx_timer_3_irq_handler      TIMER3_IRQHandler

// PWM1_IRQn
#define nrfx_pwm_1_irq_handler        PWM1_IRQHandler

// SPIM1_SPIS1_TWIM1_TWIS1_UARTE1_IRQn
#if NRFX_CHECK(NRFX_PRS_ENABLED) && NRFX_CHECK(NRFX_PRS_BOX_1_ENABLED)
#define nrfx_prs_box_1_irq_handler  SPIM1_SPIS1_TWIM1_TWIS1_UARTE1_IRQHandler
#else
#define nrfx_spim_1_irq_handler     SPIM1_SPIS1_TWIM1_TWIS1_UARTE1_IRQHandler
#define nrfx_spis_1_irq_handler     SPIM1_SPIS1_TWIM1_TWIS1_UARTE1_IRQHandler
#define nrfx_twim_1_irq_handler     SPIM1_SPIS1_TWIM1_TWIS1_UARTE1_IRQHandler
#define nrfx_twis_1_irq_handler     SPIM1_SPIS1_TWIM1_TWIS1_UARTE1_IRQHandler
#define nrfx_uarte_1_irq_handler    SPIM1_SPIS1_TWIM1_TWIS1_UARTE1_IRQHandler
#endif

// SPIM2_SPIS2_TWIM2_TWIS2_UARTE2_IRQn
#if NRFX_CHECK(NRFX_PRS_ENABLED) && NRFX_CHECK(NRFX_PRS_BOX_2_ENABLED)
#define nrfx_prs_box_2_irq_handler  SPIM2_SPIS2_TWIM2_TWIS2_UARTE2_IRQHandler
#else
#define nrfx_spim_2_irq_handler     SPIM2_SPIS2_TWIM2_TWIS2_UARTE2_IRQHandler
#define nrfx_spis_2_irq_handler     SPIM2_SPIS2_TWIM2_TWIS2_UARTE2_IRQHandler
#define nrfx_twim_2_irq_handler     SPIM2_SPIS2_TWIM2_TWIS2_UARTE2_IRQHandler
#define nrfx_twis_2_irq_handler     SPIM2_SPIS2_TWIM2_TWIS2_UARTE2_IRQHandler
#define nrfx_uarte_2_irq_handler    SPIM2_SPIS2_TWIM2_TWIS2_UARTE2_IRQHandler
#endif

// GSPU11_IRQn

// TIMER4_IRQn
#define nrfx_timer_4_irq_handler      TIMER4_IRQHandler

// TIMER5_IRQn

// PWM2_IRQn
#define nrfx_pwm_2_irq_handler        PWM2_IRQHandler

// SPIM3_SPIS3_TWIM3_TWIS3_UARTE3_IRQn
#if NRFX_CHECK(NRFX_PRS_ENABLED) && NRFX_CHECK(NRFX_PRS_BOX_3_ENABLED)
#define nrfx_prs_box_3_irq_handler  SPIM3_SPIS3_TWIM3_TWIS3_UARTE3_IRQHandler
#else
#define nrfx_spim_3_irq_handler     SPIM3_SPIS3_TWIM3_TWIS3_UARTE3_IRQHandler
#define nrfx_spis_3_irq_handler     SPIM3_SPIS3_TWIM3_TWIS3_UARTE3_IRQHandler
#define nrfx_twim_3_irq_handler     SPIM3_SPIS3_TWIM3_TWIS3_UARTE3_IRQHandler
#define nrfx_twis_3_irq_handler     SPIM3_SPIS3_TWIM3_TWIS3_UARTE3_IRQHandler
#define nrfx_uarte_3_irq_handler    SPIM3_SPIS3_TWIM3_TWIS3_UARTE3_IRQHandler
#endif

// SPIM4_SPIS4_TWIM4_TWIS4_UARTE4_IRQn
#if NRFX_CHECK(NRFX_PRS_ENABLED) && NRFX_CHECK(NRFX_PRS_BOX_4_ENABLED)
#define nrfx_prs_box_4_irq_handler  SPIM4_SPIS4_TWIM4_TWIS4_UARTE4_IRQHandler
#else
#define nrfx_spim_4_irq_handler     SPIM4_SPIS4_TWIM4_TWIS4_UARTE4_IRQHandler
#endif

// GSPU12_IRQn

// TIMER6_IRQn

// TIMER7_IRQn

// PWM3_IRQn
#define nrfx_pwm_3_irq_handler        PWM3_IRQHandler

// SPIM5_SPIS5_TWIM5_TWIS5_UARTE5_IRQn

// SPIM6_SPIS6_TWIM6_TWIS6_UARTE6_IRQn

// GSPU13_IRQn

// TIMER8_IRQn

// TIMER9_IRQn

// PWM4_IRQn

// SPIM7_SPIS7_TWIM7_TWIS7_UARTE7_IRQn

// SPIM8_SPIS8_TWIM8_TWIS8_UARTE8_IRQn

#ifdef __cplusplus
}
#endif

#endif // NRFX_IRQS_HALTIUM_H__
