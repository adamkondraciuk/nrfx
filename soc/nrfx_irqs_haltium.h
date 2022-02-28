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

// WDT010_IRQn
#define nrfx_wdt_010_irq_handler        WDT0_IRQHandler

// WDT011_IRQn
#define nrfx_wdt_011_irq_handler        WDT1_IRQHandler

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

// TIMER120_IRQn
#define nrfx_timer_120_irq_handler    TIMER120_IRQHandler

// TIMER121_IRQn
#define nrfx_timer_120_irq_handler    TIMER120_IRQHandler

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

// PWM120_IRQn
#define nrfx_pwm_120_irq_handler      PWM120_IRQHandler

// SPIS120_UARTE120_IRQn
#if NRFX_CHECK(NRFX_PRS_ENABLED) && NRFX_CHECK(NRFX_PRS_BOX_8_ENABLED)
#define nrfx_prs_box_8_irq_handler    SPIS120_UARTE120_IRQHandler
#else
#define nrfx_spis_120_irq_handler     SPIS120_UARTE120_IRQHandler
#define nrfx_uarte_120_irq_handler    SPIS120_UARTE120_IRQHandler
#endif

// SPIM120_IRQn
#define nrfx_spim_120_irq_handler     SPIM120_IRQHandler

// SPIM121_IRQn
#define nrfx_spim_121_irq_handler     SPIM121_IRQHandler

// TWIM120_IRQn
#define nrfx_twim_120_irq_handler     TWIM120_IRQHandler

// RTC130_IRQn
#define nrfx_rtc_130_irq_handler      RTC130_IRQHandler

// RTC131_IRQn
#define nrfx_rtc_131_irq_handler      RTC131_IRQHandler

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

// WDT131_IRQn
#define nrfx_wdt_131_irq_handler      WDT131_IRQHandler

// WDT132_IRQn
#define nrfx_wdt_132_irq_handler      WDT132_IRQHandler

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

// GGENERIC22_IRQn

// GMIPIRFFE_IRQn

// GSPU10_IRQn

// TIMER130_IRQn
#define nrfx_timer_130_irq_handler    TIMER130_IRQHandler

// TIMER131_IRQn
#define nrfx_timer_131_irq_handler    TIMER131_IRQHandler

// PWM130_IRQn
#define nrfx_pwm_130_irq_handler      PWM130_IRQHandler

// SERIAL0_IRQHandler
#if NRFX_CHECK(NRFX_PRS_ENABLED) && NRFX_CHECK(NRFX_PRS_BOX_0_ENABLED)
#define nrfx_prs_box_0_irq_handler    SERIAL0_IRQHandler
#else
#define nrfx_spim_130_irq_handler     SERIAL0_IRQHandler
#define nrfx_spis_130_irq_handler     SERIAL0_IRQHandler
#define nrfx_twim_130_irq_handler     SERIAL0_IRQHandler
#define nrfx_twis_130_irq_handler     SERIAL0_IRQHandler
#define nrfx_uarte_130_irq_handler    SERIAL0_IRQHandler
#endif

// SERIAL1_IRQHandler
#if NRFX_CHECK(NRFX_PRS_ENABLED) && NRFX_CHECK(NRFX_PRS_BOX_1_ENABLED)
#define nrfx_prs_box_1_irq_handler    SERIAL1_IRQHandler
#else
#define nrfx_spim_131_irq_handler     SERIAL1_IRQHandler
#define nrfx_spis_131_irq_handler     SERIAL1_IRQHandler
#define nrfx_twim_131_irq_handler     SERIAL1_IRQHandler
#define nrfx_twis_131_irq_handler     SERIAL1_IRQHandler
#define nrfx_uarte_131_irq_handler    SERIAL1_IRQHandler
#endif

// TIMER132_IRQn
#define nrfx_timer_132_irq_handler    TIMER132_IRQHandler

// TIMER133_IRQn
#define nrfx_timer_133_irq_handler    TIMER133_IRQHandler

// PWM131_IRQn
#define nrfx_pwm_131_irq_handler      PWM131_IRQHandler

// SERIAL2_IRQHandler
#if NRFX_CHECK(NRFX_PRS_ENABLED) && NRFX_CHECK(NRFX_PRS_BOX_2_ENABLED)
#define nrfx_prs_box_2_irq_handler    SERIAL2_IRQHandler
#else
#define nrfx_spim_132_irq_handler     SERIAL2_IRQHandler
#define nrfx_spis_132_irq_handler     SERIAL2_IRQHandler
#define nrfx_twim_132_irq_handler     SERIAL2_IRQHandler
#define nrfx_twis_132_irq_handler     SERIAL2_IRQHandler
#define nrfx_uarte_132_irq_handler    SERIAL2_IRQHandler
#endif

// GSPU11_IRQn

// SERIAL3_IRQHandler
#if NRFX_CHECK(NRFX_PRS_ENABLED) && NRFX_CHECK(NRFX_PRS_BOX_3_ENABLED)
#define nrfx_prs_box_3_irq_handler    SERIAL3_IRQHandler
#else
#define nrfx_spim_133_irq_handler     SERIAL3_IRQHandler
#define nrfx_spis_133_irq_handler     SERIAL3_IRQHandler
#define nrfx_twim_133_irq_handler     SERIAL3_IRQHandler
#define nrfx_twis_133_irq_handler     SERIAL3_IRQHandler
#define nrfx_uarte_133_irq_handler    SERIAL3_IRQHandler
#endif

// TIMER134_IRQn
#define nrfx_timer_134_irq_handler    TIMER134_IRQHandler

// TIMER135_IRQn
#define nrfx_timer_135_irq_handler    TIMER135_IRQHandler

// PWM132_IRQn
#define nrfx_pwm_132_irq_handler      PWM132_IRQHandler

// SERIAL4_IRQHandler
#if NRFX_CHECK(NRFX_PRS_ENABLED) && NRFX_CHECK(NRFX_PRS_BOX_4_ENABLED)
#define nrfx_prs_box_4_irq_handler    SERIAL4_IRQHandler
#else
#define nrfx_spim_134_irq_handler     SERIAL4_IRQHandler
#define nrfx_spis_134_irq_handler     SERIAL4_IRQHandler
#define nrfx_twim_134_irq_handler     SERIAL4_IRQHandler
#define nrfx_twis_134_irq_handler     SERIAL4_IRQHandler
#define nrfx_uarte_134_irq_handler    SERIAL4_IRQHandler
#endif

// GSPU12_IRQn

// SERIAL5_IRQHandler
#if NRFX_CHECK(NRFX_PRS_ENABLED) && NRFX_CHECK(NRFX_PRS_BOX_5_ENABLED)
#define nrfx_prs_box_5_irq_handler    SERIAL5_IRQHandler
#else
#define nrfx_spim_135_irq_handler     SERIAL5_IRQHandler
#define nrfx_spis_135_irq_handler     SERIAL5_IRQHandler
#define nrfx_twim_135_irq_handler     SERIAL5_IRQHandler
#define nrfx_twis_135_irq_handler     SERIAL5_IRQHandler
#define nrfx_uarte_135_irq_handler    SERIAL5_IRQHandler
#endif

// TIMER136_IRQn
#define nrfx_timer_136_irq_handler    TIMER136_IRQHandler

// TIMER137_IRQn
#define nrfx_timer_137_irq_handler    TIMER137_IRQHandler

// PWM133_IRQn
#define nrfx_pwm_133_irq_handler      PWM133_IRQHandler

// SERIAL6_IRQHandler
#if NRFX_CHECK(NRFX_PRS_ENABLED) && NRFX_CHECK(NRFX_PRS_BOX_6_ENABLED)
#define nrfx_prs_box_6_irq_handler    SERIAL6_IRQHandler
#else
#define nrfx_spim_136_irq_handler     SERIAL6_IRQHandler
#define nrfx_spis_136_irq_handler     SERIAL6_IRQHandler
#define nrfx_twim_136_irq_handler     SERIAL6_IRQHandler
#define nrfx_twis_136_irq_handler     SERIAL6_IRQHandler
#define nrfx_uarte_136_irq_handler    SERIAL6_IRQHandler
#endif

// GSPU13_IRQn

// SERIAL7_IRQHandler
#if NRFX_CHECK(NRFX_PRS_ENABLED) && NRFX_CHECK(NRFX_PRS_BOX_7_ENABLED)
#define nrfx_prs_box_7_irq_handler    SERIAL7_IRQHandler
#else
#define nrfx_spim_137_irq_handler     SERIAL7_IRQHandler
#define nrfx_spis_137_irq_handler     SERIAL7_IRQHandler
#define nrfx_twim_137_irq_handler     SERIAL7_IRQHandler
#define nrfx_twis_137_irq_handler     SERIAL7_IRQHandler
#define nrfx_uarte_137_irq_handler    SERIAL7_IRQHandler
#endif

#ifdef __cplusplus
}
#endif

#endif // NRFX_IRQS_HALTIUM_H__
