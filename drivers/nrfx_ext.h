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
    #define NRF_GPIO_PIN_SEL_EXT                                              \
        NRF_GPIO_PIN_SEL_NETWORK  = GPIO_PIN_CNF_CTRLSEL_RadioCore,           \
        NRF_GPIO_PIN_SEL_SECURE   = GPIO_PIN_CNF_CTRLSEL_SecureDomain,        \
        NRF_GPIO_PIN_SEL_GRC      = GPIO_PIN_CNF_CTRLSEL_GRC,                 \
        NRF_GPIO_PIN_SEL_PWM      = GPIO_PIN_CNF_CTRLSEL_PWM,                 \
        NRF_GPIO_PIN_SEL_I3C      = GPIO_PIN_CNF_CTRLSEL_I3C,                 \
        NRF_GPIO_PIN_SEL_SERIAL   = GPIO_PIN_CNF_CTRLSEL_Serial,              \
        NRF_GPIO_PIN_SEL_HS_SPI   = GPIO_PIN_CNF_CTRLSEL_HSSPI,               \
        NRF_GPIO_PIN_SEL_EXMIF    = GPIO_PIN_CNF_CTRLSEL_EXMIF,               \
        NRF_GPIO_PIN_SEL_DTB      = GPIO_PIN_CNF_CTRLSEL_DTB,                 \
        NRFX_COND_CODE_1(NRFX_ARG_HAS_PARENTHESIS(GPIO_PIN_CNF_CTRLSEL_CELL), \
            (NRF_GPIO_PIN_SEL_CELLULAR = GPIO_PIN_CNF_CTRLSEL_CELL), ())
#endif

#if defined(NRF54H20_ENGA_XXAA) || defined(NRF9230_ENGA_XXAA)
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

/*------------------------------------------------------------------------------------------------*/
/* End of GPIO Extended section                                                                   */
/*------------------------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------------------------*/
/* Start of GPIOTE Extended section                                                               */
/*------------------------------------------------------------------------------------------------*/

#if defined(NRF_GPIOTE131)
    #if (defined(__CORTEX_M) && defined(NRF_TRUSTZONE_NONSECURE)) || defined(__VPR_REV)
        #define GPIOTE131_IRQn       GPIOTE131_0_IRQn
        #define GPIOTE131_IRQHandler GPIOTE131_0_IRQHandler
    #else
        #define GPIOTE131_IRQn       GPIOTE131_1_IRQn
        #define GPIOTE131_IRQHandler GPIOTE131_1_IRQHandler
    #endif
#endif

#if defined(NRF_GPIOTE131) && \
    (defined(NRF_CELLCORE) || ((defined(NRF9230_ENGA_XXAA) || defined(NRF9230_ENGB_XXAA)) && \
     defined(NRF_SYSCTRL)))
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

/* TODO: Use `NRFX_FOREACH_ENABLED` macro here as well when it will be possible to
         retrieve `size` parameter by instance number. There is also need to use `p_ppib` field
         only by local domains and SecDom thus we can eventualy move it out from here.
         However we would still need such parameter then. Ticket: NRFX-3226. */
#define NRFX_INTERCONNECT_APB_GLOBAL_BUSES_PROP                                     \
{                                                                                   \
    NRFX_INTERCONNECT_APB_PROP_ENTRY(120, NRF_SYSCTRL_PPIB121, 0x10000) /* APB22 */ \
    NRFX_INTERCONNECT_APB_PROP_ENTRY(130, NULL, 0x20000)                /* APB32 */ \
    NRFX_INTERCONNECT_APB_PROP_ENTRY(131, NRF_SYSCTRL_PPIB132, 0x10000) /* APB38 */ \
    NRFX_INTERCONNECT_APB_PROP_ENTRY(132, NRF_SYSCTRL_PPIB133, 0x10000) /* APB39 */ \
    NRFX_INTERCONNECT_APB_PROP_ENTRY(133, NRF_SYSCTRL_PPIB134, 0x10000) /* APB3A */ \
    NRFX_INTERCONNECT_APB_PROP_ENTRY(134, NRF_SYSCTRL_PPIB135, 0x10000) /* APB3B */ \
    NRFX_INTERCONNECT_APB_PROP_ENTRY(135, NRF_SYSCTRL_PPIB136, 0x10000) /* APB3C */ \
    NRFX_INTERCONNECT_APB_PROP_ENTRY(136, NRF_SYSCTRL_PPIB137, 0x10000) /* APB3D */ \
}

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

#if defined(NRF9230_ENGA_XXAA) || defined(NRF9230_ENGB_XXAA)
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
    #define NRF_GRTC_HAS_RTCOUNTER 0
#endif // defined(LUMOS_XXAA)

/*------------------------------------------------------------------------------------------------*/
/* End of GRTC Extended section                                                                   */
/*------------------------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------------------------*/
/* Start of PRS Extended section                                                                  */
/*------------------------------------------------------------------------------------------------*/

#if defined(NRF7140_XXAA) || defined(NRF9230_ENGA_XXAA) || defined(NRF9230_XXAA)
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

#if defined(NRF7120_XXAA)
    #define NRF_PRS_BOX_EXT
    // SPIM00, UARTE00
    #define NRFX_PRS_BOX_0_ADDR     NRF_UARTE00
    // SPIM01
    #define NRFX_PRS_BOX_1_ADDR     NRF_SPIM01
    // SPIM02
    #define NRFX_PRS_BOX_2_ADDR     NRF_SPIM02
    // SPIM20, SPIS20, TWIM20, TWIS20, UARTE20
    #define NRFX_PRS_BOX_3_ADDR     NRF_UARTE20
    // SPIM21, SPIS21, TWIM21, TWIS21, UARTE21
    #define NRFX_PRS_BOX_4_ADDR     NRF_UARTE21
    // SPIM22, SPIS22, TWIM22, TWIS22, UARTE22
    #define NRFX_PRS_BOX_5_ADDR     NRF_UARTE22
    // SPIM23, SPIS23, TWIM23, TWIS23, UARTE23
    #define NRFX_PRS_BOX_6_ADDR     NRF_UARTE23
    // SPIM24, SPIS24, TWIM24, TWIS24, UARTE24
    #define NRFX_PRS_BOX_7_ADDR     NRF_UARTE24
    // SPIM30, SPIS30, TWIM30, TWIS30, UARTE30
    #define NRFX_PRS_BOX_8_ADDR     NRF_UARTE30
    // COMP, LPCOMP
    #define NRFX_PRS_BOX_9_ADDR     NRF_COMP
#endif

/*------------------------------------------------------------------------------------------------*/
/* End of PRS Extended section                                                                    */
/*------------------------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------------------------*/
/* Start of REGULATORS Extended section                                                           */
/*------------------------------------------------------------------------------------------------*/

#if defined(NRF54L15_ENGA_XXAA)
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
#elif defined(NRF54L05_XXAA) || defined(NRF54L09_ENGA_XXAA) || defined(NRF54L10_XXAA) || \
      defined(NRF54L15_XXAA)
#define NRF_REGULATORS_ELV_MODE_ALL_MASK (REGULATORS_TRIM_ELVPDMAIN_Msk   | \
                                          REGULATORS_TRIM_ELVPDLP_Msk     | \
                                          REGULATORS_TRIM_ELVPDPERIPH_Msk | \
                                          REGULATORS_TRIM_ELVLFRC_Msk     | \
                                          REGULATORS_TRIM_ELVLFXO_Msk     | \
                                          REGULATORS_TRIM_ELVGRTC_Msk     | \
                                          REGULATORS_TRIM_ELVGRTCPWM_Msk  | \
                                          REGULATORS_TRIM_ELVGRTCCLKOUT_Msk)

#define NRF_REGULATORS_ELV_MODE_ALLOW_MASK_EXT                                         \
    NRFX_COND_CODE_1(NRF_REGULATORS_HAS_TRIM,                                          \
        (NRF_REGULATORS_ELV_ELVPDMAIN_MASK      = REGULATORS_TRIM_ELVPDMAIN_Msk,       \
         NRF_REGULATORS_ELV_ELVPDLP_MASK        = REGULATORS_TRIM_ELVPDLP_Msk,         \
         NRF_REGULATORS_ELV_ELVPDPERIPH_MASK    = REGULATORS_TRIM_ELVPDPERIPH_Msk,     \
         NRF_REGULATORS_ELV_ELVLFRC_MASK        = REGULATORS_TRIM_ELVLFRC_Msk,         \
         NRF_REGULATORS_ELV_ELVLFXO_MASK        = REGULATORS_TRIM_ELVLFXO_Msk,         \
         NRF_REGULATORS_ELV_ELVGRTC_MASK        = REGULATORS_TRIM_ELVGRTC_Msk,         \
         NRF_REGULATORS_ELV_ELVGRTCPWM_MASK     = REGULATORS_TRIM_ELVGRTCPWM_Msk,      \
         NRF_REGULATORS_ELV_ELVGRTCCLKOUT_MASK  = REGULATORS_TRIM_ELVGRTCCLKOUT_Msk,), \
   ())
#elif defined(NRF54L20_ENGA_XXAA)
#define NRF_REGULATORS_ELV_MODE_ALL_MASK (REGULATORS_TRIM_ELVPDMAIN_Msk   | \
                                          REGULATORS_TRIM_ELVPDLP_Msk     | \
                                          REGULATORS_TRIM_ELVPDPERIPH_Msk)

#define NRF_REGULATORS_ELV_MODE_ALLOW_MASK_EXT                                    \
    NRFX_COND_CODE_1(NRF_REGULATORS_HAS_TRIM,                                     \
        (NRF_REGULATORS_ELV_ELVPDMAIN_MASK   = REGULATORS_TRIM_ELVPDMAIN_Msk,     \
         NRF_REGULATORS_ELV_ELVPDLP_MASK     = REGULATORS_TRIM_ELVPDLP_Msk,       \
         NRF_REGULATORS_ELV_ELVPDPERIPH_MASK = REGULATORS_TRIM_ELVPDPERIPH_Msk,), \
   ())

#elif defined(NRF7120_XXAA)
//TODO: Verify this is correct mask for 7120 (copied from 54L20 since trim reset was the same in mdk)
#define NRF_REGULATORS_ELV_MODE_ALL_MASK (REGULATORS_TRIM_ELVPDMAIN_Msk   | \
                                          REGULATORS_TRIM_ELVPDLP_Msk     | \
                                          REGULATORS_TRIM_ELVPDPERIPH_Msk | \
                                          REGULATORS_TRIM_ELVLFRC_Msk     | \
                                          REGULATORS_TRIM_ELVLFXO_Msk     | \
                                          REGULATORS_TRIM_ELVGRTC_Msk     | \
                                          REGULATORS_TRIM_ELVGRTCPWM_Msk  | \
                                          REGULATORS_TRIM_ELVGRTCCLKOUT_Msk)

#define NRF_REGULATORS_ELV_MODE_ALLOW_MASK_EXT                                         \
    NRFX_COND_CODE_1(NRF_REGULATORS_HAS_TRIM,                                          \
        (NRF_REGULATORS_ELV_ELVPDMAIN_MASK      = REGULATORS_TRIM_ELVPDMAIN_Msk,       \
         NRF_REGULATORS_ELV_ELVPDLP_MASK        = REGULATORS_TRIM_ELVPDLP_Msk,         \
         NRF_REGULATORS_ELV_ELVPDPERIPH_MASK    = REGULATORS_TRIM_ELVPDPERIPH_Msk,     \
         NRF_REGULATORS_ELV_ELVLFRC_MASK        = REGULATORS_TRIM_ELVLFRC_Msk,         \
         NRF_REGULATORS_ELV_ELVLFXO_MASK        = REGULATORS_TRIM_ELVLFXO_Msk,         \
         NRF_REGULATORS_ELV_ELVGRTC_MASK        = REGULATORS_TRIM_ELVGRTC_Msk,         \
         NRF_REGULATORS_ELV_ELVGRTCPWM_MASK     = REGULATORS_TRIM_ELVGRTCPWM_Msk,      \
         NRF_REGULATORS_ELV_ELVGRTCCLKOUT_MASK  = REGULATORS_TRIM_ELVGRTCCLKOUT_Msk,), \
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
    #elif defined(NRF7140_XXAA) || defined(NRF9230_ENGA_XXAA)
        #define NRFX_DELAY_CPU_FREQ_MHZ (SystemCoreClock / 1000000)
        #define NRFX_DELAY_DWT_PRESENT  0
    #endif
#endif

#if defined(NRF7120_XXAA)
    #define NRFX_DELAY_CPU_FREQ_MHZ (SystemCoreClock / 1000000)
    #define NRFX_DELAY_DWT_PRESENT  1

    #if !defined(NRFX_COREDEP_VPR_LEGACY)
        // Handled by nrfx_coredep.h
    #else
        #if !defined(NRFX_DELAY_RISCV_SLOWDOWN)
                #define NRFX_DELAY_RISCV_SLOWDOWN 15
            #else
                #define NRFX_DELAY_RISCV_SLOWDOWN 50
        #endif

    #endif // !defined(NRFX_CONFIG_COREDEP_VPR_LEGACY)
#endif // defined(NRF7120_XXAA)

#if defined(NRF54L09_ENGA_XXAA) || defined(NRF54L15_ENGA_XXAA) || defined(NRF54L15_XXAA) || \
    defined(NRF54L20_ENGA_XXAA)
    #if defined(BOARD_FPGA)
        #define NRFX_DELAY_RISCV_SLOWDOWN 14
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
