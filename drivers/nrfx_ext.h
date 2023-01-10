/*$$$LICENCE_NORDIC_STANDARD<2022>$$$*/

#ifndef NRFX_EXT_H__
#define NRFX_EXT_H__

#ifdef __cplusplus
extern "C" {
#endif

/*------------------------------------------------------------------------------------------------*/
/* Start of GPIO Extended section                                                                 */
/*------------------------------------------------------------------------------------------------*/

#define NRF_GPIO_PIN_SEL_EXT                                            \
    NRFX_COND_CODE_1(NRF_GPIO_HAS_MULTIPERIPH_SEL,                      \
        (NRF_GPIO_PIN_SEL_NETWORK  = GPIO_PIN_CNF_CTRLSEL_RadioCore,    \
         NRF_GPIO_PIN_SEL_TND      = GPIO_PIN_CNF_CTRLSEL_TND,          \
         NRF_GPIO_PIN_SEL_VPR      = GPIO_PIN_CNF_CTRLSEL_VPR,          \
         NRF_GPIO_PIN_SEL_SECURE   = GPIO_PIN_CNF_CTRLSEL_SecureDomain, \
         NRF_GPIO_PIN_SEL_CELLULAR = GPIO_PIN_CNF_CTRLSEL_CELL,         \
         NRF_GPIO_PIN_SEL_GPIO     = GPIO_PIN_CNF_CTRLSEL_GPIO,         \
         NRF_GPIO_PIN_SEL_GRC      = GPIO_PIN_CNF_CTRLSEL_GRC,          \
         NRF_GPIO_PIN_SEL_PWM      = GPIO_PIN_CNF_CTRLSEL_PWM,          \
         NRF_GPIO_PIN_SEL_I3C      = GPIO_PIN_CNF_CTRLSEL_I3C,          \
         NRF_GPIO_PIN_SEL_SERIAL   = GPIO_PIN_CNF_CTRLSEL_Serial,       \
         NRF_GPIO_PIN_SEL_HS_SPI   = GPIO_PIN_CNF_CTRLSEL_HSSPI,        \
         NRF_GPIO_PIN_SEL_EXMIF    = GPIO_PIN_CNF_CTRLSEL_EXMIF,        \
         NRF_GPIO_PIN_SEL_DTB      = GPIO_PIN_CNF_CTRLSEL_DTB,),        \
        ())

#define NRF_GPIO_RETAIN_EXT                                                    \
    NRFX_COND_CODE_1(NRF_GPIO_HAS_RETENTION,                                   \
        (NRF_GPIO_RETAIN_APPLICATION_MASK     = GPIO_RETAIN_APPLICAION_Msk,    \
         NRF_GPIO_RETAIN_NETWORK_MASK         = GPIO_RETAIN_RADIOCORE_Msk,     \
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
         NRF_GPIO_RETAIN_DEBUG_MASK           = GPIO_RETAIN_TDD_Msk,),         \
        ())

#if (GPIO_COUNT == 3)
#define NUMBER_OF_PINS (P0_PIN_NUM + P1_PIN_NUM + P2_PIN_NUM)
#define GPIO_REG_LIST  {NRF_P0, NRF_P1, NRF_P2}
#elif (GPIO_COUNT == 10)
#define NUMBER_OF_PINS (P0_PIN_NUM + P1_PIN_NUM + P2_PIN_NUM + P6_PIN_NUM + P8_PIN_NUM + P9_PIN_NUM)
#define GPIO_REG_LIST  {NRF_P0, NRF_P1, NRF_P2, NRF_P6, NRF_P8, NRF_P9}
#elif (GPIO_COUNT == 16)
#define NUMBER_OF_PINS 512
#define GPIO_REG_LIST  {NRF_P0, NRF_P1, NRF_P2, NRF_P3, NRF_P4, NRF_P5, NRF_P6, NRF_P7, \
                        NRF_P8, NRF_P9, NRF_P10, NRF_P11, NRF_P12, NRF_P13, NRF_P14, NRF_P15}
#endif

/*------------------------------------------------------------------------------------------------*/
/* End of GPIO Extended section                                                                   */
/*------------------------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------------------------*/
/* Start of RESET Extended section                                                                */
/*------------------------------------------------------------------------------------------------*/

#define NRF_RESET_RESETREAS_EXT                                           \
    NRFX_COND_CODE_1(NRFX_ARG_HAS_PARENTHESIS(RESET_RESETREAS_TAMPC_Msk), \
        (NRF_RESET_RESETREAS_TAMPC_MASK = RESET_RESETREAS_TAMPC_Msk,),    \
        ())

/*------------------------------------------------------------------------------------------------*/
/* End of RESET Extended section                                                                  */
/*------------------------------------------------------------------------------------------------*/

#ifdef __cplusplus
}
#endif

#endif // NRFX_EXT_H__
