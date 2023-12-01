/*$$$LICENCE_NORDIC_STANDARD<2022>$$$*/

#ifndef NRFX_EXT_H__
#define NRFX_EXT_H__

#include "mdk_fixups.h"

#ifdef __cplusplus
extern "C" {
#endif

/*------------------------------------------------------------------------------------------------*/
/* Start of Auxiliary Extended section                                                            */
/*------------------------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------------------------*/
/* End of Auxiliary Extended section                                                              */
/*------------------------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------------------------*/
/* Start of DPPI Extended section                                                                 */
/*------------------------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------------------------*/
/* End of DPPI Extended section                                                                   */
/*------------------------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------------------------*/
/* Start of GPIO Extended section                                                                 */
/*------------------------------------------------------------------------------------------------*/

#if defined(HALTIUM_XXAA)
    #define NRF_GPIO_PIN_SEL_EXT                                       \
        NRF_GPIO_PIN_SEL_NETWORK  = GPIO_PIN_CNF_CTRLSEL_RadioCore,    \
        NRF_GPIO_PIN_SEL_SECURE   = GPIO_PIN_CNF_CTRLSEL_SecureDomain, \
        NRF_GPIO_PIN_SEL_CELLULAR = GPIO_PIN_CNF_CTRLSEL_CELL,         \
        NRF_GPIO_PIN_SEL_GRC      = GPIO_PIN_CNF_CTRLSEL_GRC,          \
        NRF_GPIO_PIN_SEL_PWM      = GPIO_PIN_CNF_CTRLSEL_PWM,          \
        NRF_GPIO_PIN_SEL_I3C      = GPIO_PIN_CNF_CTRLSEL_I3C,          \
        NRF_GPIO_PIN_SEL_SERIAL   = GPIO_PIN_CNF_CTRLSEL_Serial,       \
        NRF_GPIO_PIN_SEL_HS_SPI   = GPIO_PIN_CNF_CTRLSEL_HSSPI,        \
        NRF_GPIO_PIN_SEL_EXMIF    = GPIO_PIN_CNF_CTRLSEL_EXMIF,        \
        NRF_GPIO_PIN_SEL_DTB      = GPIO_PIN_CNF_CTRLSEL_DTB,
#endif

#if defined(NRF54H20_XXAA)
    #define NRF_GPIO_RETAIN_EXT                             \
        NRF_GPIO_RETAIN_PIN0_MASK  = GPIO_RETAIN_PIN0_Msk,  \
        NRF_GPIO_RETAIN_PIN1_MASK  = GPIO_RETAIN_PIN1_Msk,  \
        NRF_GPIO_RETAIN_PIN2_MASK  = GPIO_RETAIN_PIN2_Msk,  \
        NRF_GPIO_RETAIN_PIN3_MASK  = GPIO_RETAIN_PIN3_Msk,  \
        NRF_GPIO_RETAIN_PIN4_MASK  = GPIO_RETAIN_PIN4_Msk,  \
        NRF_GPIO_RETAIN_PIN5_MASK  = GPIO_RETAIN_PIN5_Msk,  \
        NRF_GPIO_RETAIN_PIN6_MASK  = GPIO_RETAIN_PIN6_Msk,  \
        NRF_GPIO_RETAIN_PIN7_MASK  = GPIO_RETAIN_PIN7_Msk,  \
        NRF_GPIO_RETAIN_PIN8_MASK  = GPIO_RETAIN_PIN8_Msk,  \
        NRF_GPIO_RETAIN_PIN9_MASK  = GPIO_RETAIN_PIN9_Msk,  \
        NRF_GPIO_RETAIN_PIN10_MASK = GPIO_RETAIN_PIN10_Msk, \
        NRF_GPIO_RETAIN_PIN11_MASK = GPIO_RETAIN_PIN11_Msk, \
        NRF_GPIO_RETAIN_PIN12_MASK = GPIO_RETAIN_PIN12_Msk, \
        NRF_GPIO_RETAIN_PIN13_MASK = GPIO_RETAIN_PIN13_Msk, \
        NRF_GPIO_RETAIN_PIN14_MASK = GPIO_RETAIN_PIN14_Msk, \
        NRF_GPIO_RETAIN_PIN15_MASK = GPIO_RETAIN_PIN15_Msk, \
        NRF_GPIO_RETAIN_PIN16_MASK = GPIO_RETAIN_PIN16_Msk, \
        NRF_GPIO_RETAIN_PIN17_MASK = GPIO_RETAIN_PIN17_Msk, \
        NRF_GPIO_RETAIN_PIN18_MASK = GPIO_RETAIN_PIN18_Msk, \
        NRF_GPIO_RETAIN_PIN19_MASK = GPIO_RETAIN_PIN19_Msk, \
        NRF_GPIO_RETAIN_PIN20_MASK = GPIO_RETAIN_PIN20_Msk, \
        NRF_GPIO_RETAIN_PIN21_MASK = GPIO_RETAIN_PIN21_Msk, \
        NRF_GPIO_RETAIN_PIN22_MASK = GPIO_RETAIN_PIN22_Msk, \
        NRF_GPIO_RETAIN_PIN23_MASK = GPIO_RETAIN_PIN23_Msk, \
        NRF_GPIO_RETAIN_PIN24_MASK = GPIO_RETAIN_PIN24_Msk, \
        NRF_GPIO_RETAIN_PIN25_MASK = GPIO_RETAIN_PIN25_Msk, \
        NRF_GPIO_RETAIN_PIN26_MASK = GPIO_RETAIN_PIN26_Msk, \
        NRF_GPIO_RETAIN_PIN27_MASK = GPIO_RETAIN_PIN27_Msk, \
        NRF_GPIO_RETAIN_PIN28_MASK = GPIO_RETAIN_PIN28_Msk, \
        NRF_GPIO_RETAIN_PIN29_MASK = GPIO_RETAIN_PIN29_Msk, \
        NRF_GPIO_RETAIN_PIN30_MASK = GPIO_RETAIN_PIN30_Msk, \
        NRF_GPIO_RETAIN_PIN31_MASK = GPIO_RETAIN_PIN31_Msk,
#endif

#if defined(NRF54H20_ENGA_XXAA) || defined(NRF7140_XAA) || defined(NRF9230_ENGA_XXAA)
    #define NRF_GPIO_RETAIN_EXT                                               \
        NRF_GPIO_RETAIN_SECURE_MASK          = GPIO_RETAIN_SECURE_Msk,        \
        NRF_GPIO_RETAIN_CELLULAR_MASK        = GPIO_RETAIN_CELLCORE_Msk,      \
        NRF_GPIO_RETAIN_CELL_DSP_MASK        = GPIO_RETAIN_CELLDSP_Msk,       \
        NRF_GPIO_RETAIN_CELL_RF_MASK         = GPIO_RETAIN_CELLRF_Msk,        \
        NRF_GPIO_RETAIN_GLOBAL_SLOW_MASK     = GPIO_RETAIN_GDMAINSLOW_Msk,    \
        NRF_GPIO_RETAIN_GLOBAL_FAST_MASK     = GPIO_RETAIN_GDMAINFAST_Msk,    \
        NRF_GPIO_RETAIN_GLOBAL_ACTIVE_1_MASK = GPIO_RETAIN_GDACTIVECORE1_Msk, \
        NRF_GPIO_RETAIN_GLOBAL_ACTIVE_2_MASK = GPIO_RETAIN_GDACTIVECORE2_Msk, \
        NRF_GPIO_RETAIN_GLOBAL_ACTIVE_3_MASK = GPIO_RETAIN_GDACTIVECORE3_Msk, \
        NRF_GPIO_RETAIN_DISPLAY_MASK         = GPIO_RETAIN_DISPLAYSS_Msk,     \
        NRF_GPIO_RETAIN_DEBUG_MASK           = GPIO_RETAIN_TDD_Msk,
#endif

#if defined(NRF54H20_XXAA) || defined(NRF9230_ENGA_XXAA)
    #define NRF_UARTE_CLOCKPIN_TXD_NEEDED
    #define NRF_SPIM_CLOCKPIN_MOSI_NEEDED
    #define NRF_SPIS_CLOCKPIN_MISO_NEEDED
#endif

/*------------------------------------------------------------------------------------------------*/
/* End of GPIO Extended section                                                                   */
/*------------------------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------------------------*/
/* Start of GPIOTE Extended section                                                               */
/*------------------------------------------------------------------------------------------------*/

#if defined(NRF_GPIOTE131)
    #if (defined(ISA_ARM) && defined(NRF_TRUSTZONE_NONSECURE)) || defined(ISA_RISCV)
        #define GPIOTE131_IRQn       GPIOTE131_0_IRQn
        #define GPIOTE131_IRQHandler GPIOTE131_0_IRQHandler
    #else
        #define GPIOTE131_IRQn       GPIOTE131_1_IRQn
        #define GPIOTE131_IRQHandler GPIOTE131_1_IRQHandler
    #endif
#endif

#if defined(NRF_GPIOTE131) && \
    (defined(NRF_CELLCORE) || (defined(NRF9230_ENGA_XXAA) && defined(NRF_SYSCTRL)))
    #define NRF_GPIOTE_IRQn_EXT GPIOTE131_IRQn
    #define NRF_GPIOTE_INDEX 131
#endif

#if defined(GPIOTE_INTEN0_IN0_Msk)
    #if defined(NRF_SECURE)
        #define NRF_GPIOTE_PORT_ID 0
    #elif defined(NRF_CELLCORE)
        #define NRF_GPIOTE_PORT_ID 2
    #elif defined(NRF_SYSCTRL)
        #define NRF_GPIOTE_PORT_ID 3
    #endif
#endif

/*------------------------------------------------------------------------------------------------*/
/* End of GPIOTE Extended section                                                                 */
/*------------------------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------------------------*/
/* Start of GPPI Extended section                                                                 */
/*------------------------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------------------------*/
/* End of GPPI Extended section                                                                   */
/*------------------------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------------------------*/
/* Start of GRTC Extended section                                                                 */
/*------------------------------------------------------------------------------------------------*/

#if defined(HALTIUM_XXAA)
    #if (defined(NRF_SECURE) && defined(NRF_TRUSTZONE_NONSECURE)) || \
        (defined(NRF_SYSCTRL)) || (defined(NRF_FLPR))
    #define GRTC_IRQn       GRTC_0_IRQn
    #define GRTC_IRQHandler GRTC_0_IRQHandler
    #elif (defined(NRF_SECURE) && !defined(NRF_TRUSTZONE_NONSECURE))
    #define GRTC_IRQn       GRTC_1_IRQn
    #define GRTC_IRQHandler GRTC_1_IRQHandler
    #endif
#endif

/*------------------------------------------------------------------------------------------------*/
/* End of GRTC Extended section                                                                   */
/*------------------------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------------------------*/
/* Start of IDS Extended section                                                                  */
/*------------------------------------------------------------------------------------------------*/

#if defined(NRF9230_ENGA_XXAA)
#define NRFX_IDS_DOMAIN_ENUM_EXT NRFX_IDS_DOMAIN_CELL = NRF_PROCESSOR_CELLCORE,
#define NRFX_IDS_DOMAIN_EXT                  \
        case NRFX_IDS_DOMAIN_CELL:           \
            p_bell = NRF_CELLCORE_BELLBOARD; \
            break;
#endif

#if defined(HALTIUM_XXAA) && !defined(NRF_SECDOMBELLBOARD)
#define NRF_SECDOMBELLBOARD NRF_SECURE_BELLBOARD
#endif

/*------------------------------------------------------------------------------------------------*/
/* End of IDS Extended section                                                                    */
/*------------------------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------------------------*/
/* Start of GRTC Extended section                                                                 */
/*------------------------------------------------------------------------------------------------*/

#if !defined(NRF_GRTC_HAS_EXTENDED)
    #if defined(HALTIUM_XXAA) && defined(NRF_SYSCTRL)
        #define NRF_GRTC_HAS_EXTENDED 1
        #define NRF_GRTC_HAS_RTCOUNTER 1
    #endif
#endif // !defined(NRF_GRTC_HAS_EXTENDED)

#if !defined(NRF_GRTC_HAS_RTCOUNTER)
    #if defined(LUMOS_XXAA)
        #define NRF_GRTC_HAS_RTCOUNTER 1
    #else
        #define NRF_GRTC_HAS_RTCOUNTER 0
    #endif
#endif // defined(LUMOS_XXAA)

/*------------------------------------------------------------------------------------------------*/
/* End of GRTC Extended section                                                                   */
/*------------------------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------------------------*/
/* Start of PRS Extended section                                                                  */
/*------------------------------------------------------------------------------------------------*/

#if defined(NRF54H20_XXAA) || defined(NRF7140_XXAA) || defined(NRF9230_ENGA_XXAA)
    #define NRF_PRS_BOX_EXT
    #define NRFX_PRS_BOX_0_ADDR NRF_UARTE130
    #define NRFX_PRS_BOX_1_ADDR NRF_UARTE131
    #define NRFX_PRS_BOX_2_ADDR NRF_UARTE132
    #define NRFX_PRS_BOX_3_ADDR NRF_UARTE133
    #define NRFX_PRS_BOX_4_ADDR NRF_UARTE134
    #define NRFX_PRS_BOX_5_ADDR NRF_UARTE135
    #define NRFX_PRS_BOX_6_ADDR NRF_UARTE136
    #define NRFX_PRS_BOX_7_ADDR NRF_UARTE137
    #define NRFX_PRS_BOX_8_ADDR NRF_UARTE120
    #define NRFX_PRS_BOX_9_ADDR NRF_LPCOMP
#endif

/*------------------------------------------------------------------------------------------------*/
/* End of PRS Extended section                                                                    */
/*------------------------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------------------------*/
/* Start of REGULATORS Extended section                                                           */
/*------------------------------------------------------------------------------------------------*/

#if defined(REGULATORS_TRIM_ResetValue)
#define NRF_REGULATORS_ELV_MODE_ALL_MASK (REGULATORS_TRIM_ELVPDMAIN_Msk   | \
                                          REGULATORS_TRIM_ELVPDLP_Msk     | \
                                          REGULATORS_TRIM_ELVPDPERIPH_Msk | \
                                          REGULATORS_TRIM_ELVPDMCU_Msk    | \
                                          REGULATORS_TRIM_ELVPDRADIO_Msk  | \
                                          REGULATORS_TRIM_ELVPDCRACEN_Msk | \
                                          REGULATORS_TRIM_ELVLFCLK_Msk    | \
                                          REGULATORS_TRIM_ELVXOSC32K_Msk  | \
                                          REGULATORS_TRIM_ELVTAMPMON_Msk  | \
                                          REGULATORS_TRIM_ELVGRTCLFXO_Msk | \
                                          REGULATORS_TRIM_ELVDEBUGGER_Msk)

#define NRF_REGULATORS_ELV_MODE_ALLOW_MASK_EXT                                    \
    NRFX_COND_CODE_1(NRF_REGULATORS_HAS_TRIM,                                     \
        (NRF_REGULATORS_ELV_ELVPDMAIN_MASK   = REGULATORS_TRIM_ELVPDMAIN_Msk,     \
         NRF_REGULATORS_ELV_ELVPDLP_MASK     = REGULATORS_TRIM_ELVPDLP_Msk,       \
         NRF_REGULATORS_ELV_ELVPDPERIPH_MASK = REGULATORS_TRIM_ELVPDPERIPH_Msk,   \
         NRF_REGULATORS_ELV_ELVPDMCU_MASK    = REGULATORS_TRIM_ELVPDMCU_Msk,      \
         NRF_REGULATORS_ELV_ELVPDRADIO_MASK  = REGULATORS_TRIM_ELVPDRADIO_Msk,    \
         NRF_REGULATORS_ELV_ELVPDCRACEN_MASK = REGULATORS_TRIM_ELVPDCRACEN_Msk,   \
         NRF_REGULATORS_ELV_ELVLFCLK_MASK    = REGULATORS_TRIM_ELVLFCLK_Msk,      \
         NRF_REGULATORS_ELV_ELVXOSC32K_MASK  = REGULATORS_TRIM_ELVXOSC32K_Msk,    \
         NRF_REGULATORS_ELV_ELVTAMPMON_MASK  = REGULATORS_TRIM_ELVTAMPMON_Msk,    \
         NRF_REGULATORS_ELV_ELVGRTCLFXO_MASK = REGULATORS_TRIM_ELVGRTCLFXO_Msk,   \
         NRF_REGULATORS_ELV_ELVDEBUGGER_MASK = REGULATORS_TRIM_ELVDEBUGGER_Msk,), \
   ())
#endif

/*------------------------------------------------------------------------------------------------*/
/* End of REGULATORS Extended section                                                             */
/*------------------------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------------------------*/
/* Start of Core-dependent Extended section                                                       */
/*------------------------------------------------------------------------------------------------*/

#if defined(HALTIUM_XXAA)
/* Development platform (e.g. FPGA) may have actual clock slower than the one
 * declared for the platform. In certain cases it may be convinient to apply
 * this divider to have time accurate delay, otherwise delay is slowed down.
 *
 * Currently FPGA divider is 8.
 */
    #if !defined(CONFIG_NRFX_SYS_CLOCK_DIV)
        #define CONFIG_NRFX_SYS_CLOCK_DIV 1
    #endif
    #if defined(BOARD_PALLADIUM)
        #define NRFX_DELAY_CPU_FREQ_MHZ (SystemCoreClock / 1000000)
        #define NRFX_DELAY_DWT_PRESENT  0
    #elif defined(BOARD_FPGA)
        #define NRFX_DELAY_CPU_FREQ_MHZ ((SystemCoreClock / 1000000) / CONFIG_NRFX_SYS_CLOCK_DIV)
        #define NRFX_DELAY_DWT_PRESENT  1
    #elif defined(NRF54H20_XXAA) || defined(NRF7140_XXAA) || defined(NRF9230_ENGA_XXAA)
        #define NRFX_DELAY_CPU_FREQ_MHZ (SystemCoreClock / 1000000)
        #define NRFX_DELAY_DWT_PRESENT  0
    #endif
#endif

/*------------------------------------------------------------------------------------------------*/
/* End of Core-dependent Extended section                                                         */
/*------------------------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------------------------*/
/* Start of RAM Control Extended section                                                          */
/*------------------------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------------------------*/
/* End of RAM Control Extended section                                                            */
/*------------------------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------------------------*/
/* Start of RESET Extended section                                                                */
/*------------------------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------------------------*/
/* End of RESET Extended section                                                                  */
/*------------------------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------------------------*/
/* Start of SAADC Extended section                                                                 */
/*------------------------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------------------------*/
/* End of SAADC Extended section                                                                   */
/*------------------------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------------------------*/
/* Start of SPIM Extended section                                                                 */
/*------------------------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------------------------*/
/* End of SPIM Extended section                                                                   */
/*------------------------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------------------------*/
/* Start of SPU Extended section                                                                  */
/*------------------------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------------------------*/
/* End of SPU Extended section                                                                    */
/*------------------------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------------------------*/
/* Start of TIMER Extended section                                                                */
/*------------------------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------------------------*/
/* End of TIMER Extended section                                                                  */
/*------------------------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------------------------*/
/* Start of UARTE Extended section                                                               */
/*------------------------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------------------------*/
/* End of UARTE Extended section                                                                  */
/*------------------------------------------------------------------------------------------------*/

#ifdef __cplusplus
}
#endif

#endif // NRFX_EXT_H__
