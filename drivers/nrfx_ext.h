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

#if defined(HALTIUM_XXAA) || defined(LUMOS_XXAA)
    typedef NRF_OWNERID_Type     nrf_owner_t;
#endif
#if defined(HALTIUM_XXAA)
    typedef NRF_DOMAINID_Type    nrf_domain_t;
    typedef NRF_PROCESSORID_Type nrf_processor_t;

    #define NRF_DMA_ACCESS_EXT                                                \
        if (nrf_address_bus_get((uint32_t)p_reg, 0x10000) == 0x8E)            \
        {                                                                     \
            /* Bitwise operation to unify secure/non-secure memory address */ \
            uint32_t addr = (uint32_t)p_object & 0xEFFFFFFFu;                 \
                                                                              \
            /* When peripheral instance is high-speed check whether */        \
            /* p_object is placed in GRAM2x or GRAM0x */                      \
            bool gram0x = (addr >= 0x2F000000u) && (addr < 0x2F038000);       \
            bool gram2x = (addr >= 0x2F880000u) && (addr < 0x2F886200);       \
            return gram0x || gram2x;                                          \
        }                                                                     \
        else                                                                  \
        {                                                                     \
            /* When peripheral instance is low-speed check whether */         \
            /* p_object is placed in GRAM3x */                                \
            return ((((uint32_t)p_object) & 0xEFFF8000u) == 0x2FC00000u);     \
        }
#endif

#if defined(HALTIUM_XXAA) || defined(LUMOS_XXAA)
    #if !defined(DMA_BUFFER_UNIFIED_BYTE_ACCESS)
        #define DMA_BUFFER_UNIFIED_BYTE_ACCESS 1
    #endif
#endif

#if defined(LUMOS_XXAA)
    #if defined(NRF_SKIP_CLOCK_CONFIGURATION) || (defined(NRF_CONFIG_CPU_FREQ_MHZ) \
        && (NRF_CONFIG_CPU_FREQ_MHZ==64))
        #define NRF_CPU_FREQ_IS_64MHZ 1UL
    #elif !defined(NRF_CONFIG_CPU_FREQ_MHZ) || (defined(NRF_CONFIG_CPU_FREQ_MHZ) \
        && NRF_CONFIG_CPU_FREQ_MHZ==128)
        #define NRF_CPU_FREQ_IS_128MHZ 1UL
    #else
        #error "Invalid MCU frequency"
    #endif
#endif

/*------------------------------------------------------------------------------------------------*/
/* End of Auxiliary Extended section                                                              */
/*------------------------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------------------------*/
/* Start of DPPI Extended section                                                                 */
/*------------------------------------------------------------------------------------------------*/

#if defined(HALTIUM_XXAA) || defined(LUMOS_XXAA)
    #define NRF_DPPI_EXT
#endif

/*------------------------------------------------------------------------------------------------*/
/* End of DPPI Extended section                                                                   */
/*------------------------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------------------------*/
/* Start of GPIO Extended section                                                                 */
/*------------------------------------------------------------------------------------------------*/

#if defined(LUMOS_XXAA)
    #define NRF_GPIO_PIN_SEL_EXT                           \
        NRF_GPIO_PIN_SEL_GPIO = GPIO_PIN_CNF_CTRLSEL_GPIO, \
        NRF_GPIO_PIN_SEL_VPR  = GPIO_PIN_CNF_CTRLSEL_VPR,  \
        NRF_GPIO_PIN_SEL_GRTC = GPIO_PIN_CNF_CTRLSEL_GRTC, \
        NRF_GPIO_PIN_SEL_TND  = GPIO_PIN_CNF_CTRLSEL_TND,
#elif defined(HALTIUM_XXAA)
    #define NRF_GPIO_PIN_SEL_EXT                                       \
        NRF_GPIO_PIN_SEL_NETWORK  = GPIO_PIN_CNF_CTRLSEL_RadioCore,    \
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
        NRF_GPIO_PIN_SEL_DTB      = GPIO_PIN_CNF_CTRLSEL_DTB,
#endif

#if defined(GPIO_RETAIN_PIN0_Msk)
#define NRF_GPIO_RETAIN_EXT                                                    \
    NRFX_COND_CODE_1(NRF_GPIO_HAS_RETENTION,                                   \
        (NRF_GPIO_RETAIN_PIN0_MASK  = GPIO_RETAIN_PIN0_Msk,                    \
         NRF_GPIO_RETAIN_PIN1_MASK  = GPIO_RETAIN_PIN1_Msk,                    \
         NRF_GPIO_RETAIN_PIN2_MASK  = GPIO_RETAIN_PIN2_Msk,                    \
         NRF_GPIO_RETAIN_PIN3_MASK  = GPIO_RETAIN_PIN3_Msk,                    \
         NRF_GPIO_RETAIN_PIN4_MASK  = GPIO_RETAIN_PIN4_Msk,                    \
         NRF_GPIO_RETAIN_PIN5_MASK  = GPIO_RETAIN_PIN5_Msk,                    \
         NRF_GPIO_RETAIN_PIN6_MASK  = GPIO_RETAIN_PIN6_Msk,                    \
         NRF_GPIO_RETAIN_PIN7_MASK  = GPIO_RETAIN_PIN7_Msk,                    \
         NRF_GPIO_RETAIN_PIN8_MASK  = GPIO_RETAIN_PIN8_Msk,                    \
         NRF_GPIO_RETAIN_PIN9_MASK  = GPIO_RETAIN_PIN9_Msk,                    \
         NRF_GPIO_RETAIN_PIN10_MASK = GPIO_RETAIN_PIN10_Msk,                   \
         NRF_GPIO_RETAIN_PIN11_MASK = GPIO_RETAIN_PIN11_Msk,                   \
         NRF_GPIO_RETAIN_PIN12_MASK = GPIO_RETAIN_PIN12_Msk,                   \
         NRF_GPIO_RETAIN_PIN13_MASK = GPIO_RETAIN_PIN13_Msk,                   \
         NRF_GPIO_RETAIN_PIN14_MASK = GPIO_RETAIN_PIN14_Msk,                   \
         NRF_GPIO_RETAIN_PIN15_MASK = GPIO_RETAIN_PIN15_Msk,                   \
         NRF_GPIO_RETAIN_PIN16_MASK = GPIO_RETAIN_PIN16_Msk,                   \
         NRF_GPIO_RETAIN_PIN17_MASK = GPIO_RETAIN_PIN17_Msk,                   \
         NRF_GPIO_RETAIN_PIN18_MASK = GPIO_RETAIN_PIN18_Msk,                   \
         NRF_GPIO_RETAIN_PIN19_MASK = GPIO_RETAIN_PIN19_Msk,                   \
         NRF_GPIO_RETAIN_PIN20_MASK = GPIO_RETAIN_PIN20_Msk,                   \
         NRF_GPIO_RETAIN_PIN21_MASK = GPIO_RETAIN_PIN21_Msk,                   \
         NRF_GPIO_RETAIN_PIN22_MASK = GPIO_RETAIN_PIN22_Msk,                   \
         NRF_GPIO_RETAIN_PIN23_MASK = GPIO_RETAIN_PIN23_Msk,                   \
         NRF_GPIO_RETAIN_PIN24_MASK = GPIO_RETAIN_PIN24_Msk,                   \
         NRF_GPIO_RETAIN_PIN25_MASK = GPIO_RETAIN_PIN25_Msk,                   \
         NRF_GPIO_RETAIN_PIN26_MASK = GPIO_RETAIN_PIN26_Msk,                   \
         NRF_GPIO_RETAIN_PIN27_MASK = GPIO_RETAIN_PIN27_Msk,                   \
         NRF_GPIO_RETAIN_PIN28_MASK = GPIO_RETAIN_PIN28_Msk,                   \
         NRF_GPIO_RETAIN_PIN29_MASK = GPIO_RETAIN_PIN29_Msk,                   \
         NRF_GPIO_RETAIN_PIN30_MASK = GPIO_RETAIN_PIN30_Msk,                   \
         NRF_GPIO_RETAIN_PIN31_MASK = GPIO_RETAIN_PIN31_Msk,),                 \
        ())
#else
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
#endif

#if defined(NRF54H20_ENGA_XXAA)
    #define NRF_UARTE_CLOCKPIN_RTS_NEEDED_EXT
#elif defined(NRF54H20_XXAA) || defined(NRF9230_ENGA_XXAA)
    #define NRF_UARTE_CLOCKPIN_TXD_NEEDED_EXT
    #define NRF_SPIM_CLOCKPIN_MOSI_NEEDED_EXT
    #define NRF_SPIS_CLOCKPIN_MISO_NEEDED_EXT
#endif

#if defined(HALTIUM_XXAA)
    #define NRF_SPIM_CLOCKPIN_SCK_NEEDED_EXT
    #define NRF_SPIS_CLOCKPIN_SCK_NEEDED_EXT
    #define NRF_TWIM_CLOCKPIN_SCL_NEEDED_EXT
    #define NRF_TWIS_CLOCKPIN_SCL_NEEDED_EXT
    #define NRF_I2S_CLOCKPIN_SCK_NEEDED_EXT
    #define NRF_I2S_CLOCKPIN_LRCK_NEEDED_EXT
    #define NRF_I2S_CLOCKPIN_MCK_NEEDED_EXT
#endif

/*------------------------------------------------------------------------------------------------*/
/* End of GPIO Extended section                                                                   */
/*------------------------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------------------------*/
/* Start of GPIOTE Extended section                                                               */
/*------------------------------------------------------------------------------------------------*/

#if defined(NRF_GPIOTE130) || defined(NRF_GPIOTE131)
    #if !defined(NRF_CELLCORE) && !(defined(NRF9230_ENGA_XXAA) && defined(NRF_SYSCTRL))
        #define NRF_GPIOTE_IRQn_EXT NRF_GPIOTE130_IRQn
    #else
        #define NRF_GPIOTE_IRQn_EXT NRF_GPIOTE131_IRQn
    #endif
#endif

#if defined(NRF_GPIOTE130) && !(defined(NRF9230_ENGA_XXAA) && defined(NRF_SYSCTRL))
    #define NRF_GPIOTE_INDEX 130
#elif defined(NRF_GPIOTE131)
    #define NRF_GPIOTE_INDEX 131
#elif defined(NRF_GPIOTE20)
    #define NRF_GPIOTE_INDEX 20
#endif

#if defined(GPIOTE_INTEN0_IN0_Msk)
    #if defined(NRF_SECURE) || defined(LUMOS_XXAA)
        #define NRF_GPIOTE_PORT_ID 0
    #elif defined(NRF_APPLICATION) || defined(NRF_PPR)
        #define NRF_GPIOTE_PORT_ID 1
    #elif defined(NRF_RADIOCORE) || defined(NRF_CELLCORE)
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

#if defined(HALTIUM_XXAA) || defined(LUMOS_XXAA)
    #define NRFX_GPPI_PROG_APP_CHANNELS_NUM  NRFX_BIT_SIZE(sizeof(uint32_t))
    #define NRFX_GPPI_PROG_APP_CHANNELS_MASK NRFX_BIT_MASK(NRFX_GPPI_PROG_APP_CHANNELS_NUM)
#endif

/*------------------------------------------------------------------------------------------------*/
/* End of GPPI Extended section                                                                   */
/*------------------------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------------------------*/
/* Start of PRS Extended section                                                                  */
/*------------------------------------------------------------------------------------------------*/

#if defined(HALTIUM_XXAA)
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
#elif defined(LUMOS_XXAA)
    #define NRF_PRS_BOX_EXT
    #define NRFX_PRS_BOX_0_ADDR NRF_UARTE00
    #define NRFX_PRS_BOX_1_ADDR NRF_UARTE20
    #define NRFX_PRS_BOX_2_ADDR NRF_UARTE21
    #define NRFX_PRS_BOX_3_ADDR NRF_UARTE22
    #define NRFX_PRS_BOX_4_ADDR NRF_UARTE30
    #define NRFX_PRS_BOX_5_ADDR NRF_LPCOMP
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
    #else
        #define NRFX_DELAY_CPU_FREQ_MHZ (SystemCoreClock / 1000000)
        #define NRFX_DELAY_DWT_PRESENT  0
    #endif
#elif defined(LUMOS_XXAA)
    #define NRFX_DELAY_CPU_FREQ_MHZ (SystemCoreClock / 1000000)
    #define NRFX_DELAY_DWT_PRESENT  1
#endif

/*------------------------------------------------------------------------------------------------*/
/* End of Core-dependent Extended section                                                         */
/*------------------------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------------------------*/
/* Start of RAM Control Extended section                                                          */
/*------------------------------------------------------------------------------------------------*/

#if defined(HALTIUM_XXAA)
    #define RAM_SECTION_UNIT_SIZE          (32UL * 1024UL)
    #define RAM_UNIFORM_BLOCKS             1
    #define RAM_UNIFORM_SECTIONS_PER_BLOCK 1
    #define RAM_UNIFORM_SECTIONS_TOTAL     1
#elif defined(LUMOS_XXAA)
    #define RAM_SECTION_UNIT_SIZE (16UL * 1024UL)
    #define RAM_NON_UNIFORM_SECTIONS                                                                               \
        NRFX_LISTIFY(4, RAM_NON_UNIFORM_SECTION_DECLARE, (,), 0, 0), /* Section 0 of block 0 - 4 * 16 kB units. */ \
        NRFX_LISTIFY(4, RAM_NON_UNIFORM_SECTION_DECLARE, (,), 0, 1), /* Section 1 of block 0 - 4 * 16 kB units. */ \
        NRFX_LISTIFY(2, RAM_NON_UNIFORM_SECTION_DECLARE, (,), 1, 0), /* Section 0 of block 1 - 2 * 16 kB units. */ \
        NRFX_LISTIFY(2, RAM_NON_UNIFORM_SECTION_DECLARE, (,), 1, 1), /* Section 1 of block 1 - 2 * 16 kB units. */ \
        NRFX_LISTIFY(1, RAM_NON_UNIFORM_SECTION_DECLARE, (,), 1, 2), /* Section 2 of block 1 - 1 * 16 kB units. */ \
        NRFX_LISTIFY(1, RAM_NON_UNIFORM_SECTION_DECLARE, (,), 1, 3)  /* Section 3 of block 1 - 1 * 16 kB units. */
#endif

/*------------------------------------------------------------------------------------------------*/
/* End of RAM Control Extended section                                                            */
/*------------------------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------------------------*/
/* Start of RESET Extended section                                                                */
/*------------------------------------------------------------------------------------------------*/

#if defined(RESET_RESETREAS_TAMPC_Msk)
#define NRF_RESET_RESETREAS_EXT NRF_RESET_RESETREAS_TAMPC_MASK = RESET_RESETREAS_TAMPC_Msk,
#define NRFX_RESET_REASON_EXT NRFX_RESET_REASON_TAMPC_MASK = RESET_RESETREAS_TAMPC_Msk,
#elif defined(RESET_RESETREAS_SECTAMPER_Msk)
#define NRF_RESET_RESETREAS_EXT NRF_RESET_RESETREAS_SECTAMPER_MASK = RESET_RESETREAS_SECTAMPER_Msk,
#define NRFX_RESET_REASON_EXT NRFX_RESET_REASON_SECTAMPER_MASK = RESET_RESETREAS_SECTAMPER_Msk,
#endif

/*------------------------------------------------------------------------------------------------*/
/* End of RESET Extended section                                                                  */
/*------------------------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------------------------*/
/* Start of SAADC Extended section                                                                 */
/*------------------------------------------------------------------------------------------------*/

#if defined(NRF54H20_ENGA_XXAA) || defined(NRF54L15_ENGA_XXAA)
/** @brief Symbol specifying width of the 8bit sample in bits. */
#define NRF_SAADC_8BIT_SAMPLE_WIDTH 8
#endif

/*------------------------------------------------------------------------------------------------*/
/* End of SAADC Extended section                                                                   */
/*------------------------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------------------------*/
/* Start of SPIM Extended section                                                                 */
/*------------------------------------------------------------------------------------------------*/

#if defined(HALTIUM_XXAA)
    #define NRF_SPIM_IS_320MHZ_SPIM(p_reg) ( \
           (p_reg == NRF_SPIM120)            \
        || (p_reg == NRF_SPIM121))

#elif defined(LUMOS_XXAA)
    #if defined(NRF_CPU_FREQ_IS_128MHZ)
        #define NRF_SPIM_IS_128MHZ_SPIM(p_reg) ( \
                (p_reg == NRF_SPIM00))
    #elif defined(NRF_CPU_FREQ_IS_64MHZ)
        #define NRF_SPIM_IS_64MHZ_SPIM(p_reg)  ( \
                (p_reg == NRF_SPIM00))
    #endif
#endif

/*------------------------------------------------------------------------------------------------*/
/* End of SPIM Extended section                                                                   */
/*------------------------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------------------------*/
/* Start of SPU Extended section                                                                  */
/*------------------------------------------------------------------------------------------------*/

#if defined(SPU_FEATURE_MRAMC_MaxCount)
/** @brief Symbol indicating whether SPU has registers related to MRAMC. */
#define NRF_SPU_HAS_MRAMC
#endif

#if defined(NRF_SPU_HAS_MRAMC)
    /** @brief Number of MRAMCs. */
    #define NRF_SPU_FEATURE_MRAMC_COUNT SPU_FEATURE_MRAMC_MaxCount

    #define NRF_SPU_FEATURE_EXT                                                   \
        NRF_SPU_FEATURE_MRAMC_WAITSTATES,     /**< MRAMC WAITSTATES. */           \
        NRF_SPU_FEATURE_MRAMC_AUTODPOWERDOWN, /**< MRAMC POWER.AUTODPOWERDOWN. */ \
        NRF_SPU_FEATURE_MRAMC_READY           /**< MRAMC READY and READYNEXT. */

    #define NRF_SPU_FEATURE_SECATTR_GET_EXT()                       \
        case NRF_SPU_FEATURE_MRAMC_WAITSTATES:                      \
            NRFX_ASSERT(index < NRF_SPU_FEATURE_MRAMC_COUNT);       \
            return (p_reg->FEATURE.MRAMC[index].WAITSTATES          \
                    & SPU_FEATURE_MRAMC_WAITSTATES_SECATTR_Msk)     \
                   >> SPU_FEATURE_MRAMC_WAITSTATES_SECATTR_Pos;     \
                                                                    \
        case NRF_SPU_FEATURE_MRAMC_AUTODPOWERDOWN:                  \
            NRFX_ASSERT(index < NRF_SPU_FEATURE_MRAMC_COUNT);       \
            return (p_reg->FEATURE.MRAMC[index].AUTODPOWERDOWN      \
                    & SPU_FEATURE_MRAMC_AUTODPOWERDOWN_SECATTR_Msk) \
                   >> SPU_FEATURE_MRAMC_AUTODPOWERDOWN_SECATTR_Pos; \
                                                                    \
        case NRF_SPU_FEATURE_MRAMC_READY:                           \
            NRFX_ASSERT(index < NRF_SPU_FEATURE_MRAMC_COUNT);       \
            return (p_reg->FEATURE.MRAMC[index].READY               \
                    & SPU_FEATURE_MRAMC_READY_SECATTR_Msk)          \
                   >> SPU_FEATURE_MRAMC_READY_SECATTR_Pos

    #define NRF_SPU_FEATURE_LOCK_GET_EXT()                       \
        case NRF_SPU_FEATURE_MRAMC_WAITSTATES:                   \
            NRFX_ASSERT(index < NRF_SPU_FEATURE_MRAMC_COUNT);    \
            return (p_reg->FEATURE.MRAMC[index].WAITSTATES       \
                    & SPU_FEATURE_MRAMC_WAITSTATES_LOCK_Msk)     \
                   >> SPU_FEATURE_MRAMC_WAITSTATES_LOCK_Pos;     \
                                                                 \
        case NRF_SPU_FEATURE_MRAMC_AUTODPOWERDOWN:               \
            NRFX_ASSERT(index < NRF_SPU_FEATURE_MRAMC_COUNT);    \
            return (p_reg->FEATURE.MRAMC[index].AUTODPOWERDOWN   \
                    & SPU_FEATURE_MRAMC_AUTODPOWERDOWN_LOCK_Msk) \
                   >> SPU_FEATURE_MRAMC_AUTODPOWERDOWN_LOCK_Pos; \
                                                                 \
        case NRF_SPU_FEATURE_MRAMC_READY:                        \
            NRFX_ASSERT(index < NRF_SPU_FEATURE_MRAMC_COUNT);    \
            return (p_reg->FEATURE.MRAMC[index].READY            \
                    & SPU_FEATURE_MRAMC_READY_LOCK_Msk)          \
                   >> SPU_FEATURE_MRAMC_READY_LOCK_Pos

    #define NRF_SPU_FEATURE_BLOCK_GET_EXT()                       \
        case NRF_SPU_FEATURE_MRAMC_WAITSTATES:                    \
            NRFX_ASSERT(index < NRF_SPU_FEATURE_MRAMC_COUNT);     \
            return (p_reg->FEATURE.MRAMC[index].WAITSTATES        \
                    & SPU_FEATURE_MRAMC_WAITSTATES_BLOCK_Msk)     \
                   >> SPU_FEATURE_MRAMC_WAITSTATES_BLOCK_Pos;     \
                                                                  \
        case NRF_SPU_FEATURE_MRAMC_AUTODPOWERDOWN:                \
            NRFX_ASSERT(index < NRF_SPU_FEATURE_MRAMC_COUNT);     \
            return (p_reg->FEATURE.MRAMC[index].AUTODPOWERDOWN    \
                    & SPU_FEATURE_MRAMC_AUTODPOWERDOWN_BLOCK_Msk) \
                   >> SPU_FEATURE_MRAMC_AUTODPOWERDOWN_BLOCK_Pos; \
                                                                  \
        case NRF_SPU_FEATURE_MRAMC_READY:                         \
            NRFX_ASSERT(index < NRF_SPU_FEATURE_MRAMC_COUNT);     \
            return (p_reg->FEATURE.MRAMC[index].READY             \
                    & SPU_FEATURE_MRAMC_READY_BLOCK_Msk)          \
                   >> SPU_FEATURE_MRAMC_READY_BLOCK_Pos

    #define NRF_SPU_FEATURE_OWNERID_GET_EXT()                                \
        case NRF_SPU_FEATURE_MRAMC_WAITSTATES:                               \
            NRFX_ASSERT(index < NRF_SPU_FEATURE_MRAMC_COUNT);                \
            return (nrf_owner_t)((p_reg->FEATURE.MRAMC[index].WAITSTATES     \
                    & SPU_FEATURE_MRAMC_WAITSTATES_OWNERID_Msk)              \
                   >> SPU_FEATURE_MRAMC_WAITSTATES_OWNERID_Pos);             \
                                                                             \
        case NRF_SPU_FEATURE_MRAMC_AUTODPOWERDOWN:                           \
            NRFX_ASSERT(index < NRF_SPU_FEATURE_MRAMC_COUNT);                \
            return (nrf_owner_t)((p_reg->FEATURE.MRAMC[index].AUTODPOWERDOWN \
                    & SPU_FEATURE_MRAMC_AUTODPOWERDOWN_OWNERID_Msk)          \
                   >> SPU_FEATURE_MRAMC_AUTODPOWERDOWN_OWNERID_Pos);         \
        case NRF_SPU_FEATURE_MRAMC_READY:                                    \
                                                                             \
            NRFX_ASSERT(index < NRF_SPU_FEATURE_MRAMC_COUNT);                \
            return (nrf_owner_t)((p_reg->FEATURE.MRAMC[index].READY          \
                    & SPU_FEATURE_MRAMC_READY_OWNERID_Msk)                   \
                   >> SPU_FEATURE_MRAMC_READY_OWNERID_Pos)

    #define NRF_SPU_FEATURE_SECATTR_SET_EXT()                          \
        case NRF_SPU_FEATURE_MRAMC_WAITSTATES:                         \
            NRFX_ASSERT(index < NRF_SPU_FEATURE_MRAMC_COUNT);          \
            p_reg->FEATURE.MRAMC[index].WAITSTATES =                   \
                ((p_reg->FEATURE.MRAMC[index].WAITSTATES &             \
                  SPU_FEATURE_MRAMC_WAITSTATES_SECATTR_Msk) |          \
                 ((enable ?                                            \
                   SPU_FEATURE_MRAMC_WAITSTATES_SECATTR_Secure :       \
                   SPU_FEATURE_MRAMC_WAITSTATES_SECATTR_NonSecure)     \
                  << SPU_FEATURE_MRAMC_WAITSTATES_SECATTR_Pos));       \
            break;                                                     \
                                                                       \
        case NRF_SPU_FEATURE_MRAMC_AUTODPOWERDOWN:                     \
            NRFX_ASSERT(index < NRF_SPU_FEATURE_MRAMC_COUNT);          \
            p_reg->FEATURE.MRAMC[index].AUTODPOWERDOWN =               \
                ((p_reg->FEATURE.MRAMC[index].AUTODPOWERDOWN &         \
                  SPU_FEATURE_MRAMC_AUTODPOWERDOWN_SECATTR_Msk) |      \
                 ((enable ?                                            \
                   SPU_FEATURE_MRAMC_AUTODPOWERDOWN_SECATTR_Secure :   \
                   SPU_FEATURE_MRAMC_AUTODPOWERDOWN_SECATTR_NonSecure) \
                  << SPU_FEATURE_MRAMC_AUTODPOWERDOWN_SECATTR_Pos));   \
            break;                                                     \
                                                                       \
        case NRF_SPU_FEATURE_MRAMC_READY:                              \
            NRFX_ASSERT(index < NRF_SPU_FEATURE_MRAMC_COUNT);          \
            p_reg->FEATURE.MRAMC[index].READY =                        \
                ((p_reg->FEATURE.MRAMC[index].READY &                  \
                  SPU_FEATURE_MRAMC_READY_SECATTR_Msk) |               \
                 ((enable ?                                            \
                   SPU_FEATURE_MRAMC_READY_SECATTR_Secure :            \
                   SPU_FEATURE_MRAMC_READY_SECATTR_NonSecure)          \
                  << SPU_FEATURE_MRAMC_READY_SECATTR_Pos));            \
            break

    #define NRF_SPU_FEATURE_LOCK_ENABLE_EXT()                     \
        case NRF_SPU_FEATURE_MRAMC_WAITSTATES:                    \
            NRFX_ASSERT(index < NRF_SPU_FEATURE_MRAMC_COUNT);     \
            p_reg->FEATURE.MRAMC[index].WAITSTATES =              \
                ((p_reg->FEATURE.MRAMC[index].WAITSTATES &        \
                  SPU_FEATURE_MRAMC_WAITSTATES_LOCK_Msk) |        \
                 (SPU_FEATURE_MRAMC_WAITSTATES_LOCK_Locked        \
                  << SPU_FEATURE_MRAMC_WAITSTATES_LOCK_Pos));     \
            break;                                                \
                                                                  \
        case NRF_SPU_FEATURE_MRAMC_AUTODPOWERDOWN:                \
            NRFX_ASSERT(index < NRF_SPU_FEATURE_MRAMC_COUNT);     \
            p_reg->FEATURE.MRAMC[index].AUTODPOWERDOWN =          \
                ((p_reg->FEATURE.MRAMC[index].AUTODPOWERDOWN &    \
                  SPU_FEATURE_MRAMC_AUTODPOWERDOWN_LOCK_Msk) |    \
                 (SPU_FEATURE_MRAMC_AUTODPOWERDOWN_LOCK_Locked    \
                  << SPU_FEATURE_MRAMC_AUTODPOWERDOWN_LOCK_Pos)); \
            break;                                                \
                                                                  \
        case NRF_SPU_FEATURE_MRAMC_READY:                         \
            NRFX_ASSERT(index < NRF_SPU_FEATURE_MRAMC_COUNT);     \
            p_reg->FEATURE.MRAMC[index].READY =                   \
                ((p_reg->FEATURE.MRAMC[index].READY &             \
                  SPU_FEATURE_MRAMC_READY_LOCK_Msk) |             \
                 (SPU_FEATURE_MRAMC_READY_LOCK_Locked             \
                  << SPU_FEATURE_MRAMC_READY_LOCK_Pos));          \
            break

    #define NRF_SPU_FEATURE_BLOCK_ENABLE_EXT()                     \
        case NRF_SPU_FEATURE_MRAMC_WAITSTATES:                     \
            NRFX_ASSERT(index < NRF_SPU_FEATURE_MRAMC_COUNT);      \
            p_reg->FEATURE.MRAMC[index].WAITSTATES =               \
                ((p_reg->FEATURE.MRAMC[index].WAITSTATES &         \
                  SPU_FEATURE_MRAMC_WAITSTATES_BLOCK_Msk) |        \
                 (SPU_FEATURE_MRAMC_WAITSTATES_BLOCK_Blocked       \
                  << SPU_FEATURE_MRAMC_WAITSTATES_BLOCK_Pos));     \
            break;                                                 \
                                                                   \
        case NRF_SPU_FEATURE_MRAMC_AUTODPOWERDOWN:                 \
            NRFX_ASSERT(index < NRF_SPU_FEATURE_MRAMC_COUNT);      \
            p_reg->FEATURE.MRAMC[index].AUTODPOWERDOWN =           \
                ((p_reg->FEATURE.MRAMC[index].AUTODPOWERDOWN &     \
                  SPU_FEATURE_MRAMC_AUTODPOWERDOWN_BLOCK_Msk) |    \
                 (SPU_FEATURE_MRAMC_AUTODPOWERDOWN_BLOCK_Blocked   \
                  << SPU_FEATURE_MRAMC_AUTODPOWERDOWN_BLOCK_Pos)); \
            break;                                                 \
                                                                   \
        case NRF_SPU_FEATURE_MRAMC_READY:                          \
            NRFX_ASSERT(index < NRF_SPU_FEATURE_MRAMC_COUNT);      \
            p_reg->FEATURE.MRAMC[index].READY =                    \
                ((p_reg->FEATURE.MRAMC[index].READY &              \
                  SPU_FEATURE_MRAMC_READY_BLOCK_Msk) |             \
                 (SPU_FEATURE_MRAMC_READY_BLOCK_Blocked            \
                  << SPU_FEATURE_MRAMC_READY_LOCK_Pos));           \
            break

    #define NRF_SPU_FEATURE_OWNERID_SET_EXT()                         \
        case NRF_SPU_FEATURE_MRAMC_WAITSTATES:                        \
            NRFX_ASSERT(index < NRF_SPU_FEATURE_MRAMC_COUNT);         \
            p_reg->FEATURE.MRAMC[index].WAITSTATES =                  \
                ((p_reg->FEATURE.MRAMC[index].WAITSTATES &            \
                  SPU_FEATURE_MRAMC_WAITSTATES_OWNERID_Msk) |         \
                 ((owner_id                                           \
                   << SPU_FEATURE_MRAMC_WAITSTATES_OWNERID_Pos) &     \
                  SPU_FEATURE_MRAMC_WAITSTATES_OWNERID_Msk));         \
            break;                                                    \
                                                                      \
        case NRF_SPU_FEATURE_MRAMC_AUTODPOWERDOWN:                    \
            NRFX_ASSERT(index < NRF_SPU_FEATURE_MRAMC_COUNT);         \
            p_reg->FEATURE.MRAMC[index].AUTODPOWERDOWN =              \
                ((p_reg->FEATURE.MRAMC[index].AUTODPOWERDOWN &        \
                  SPU_FEATURE_MRAMC_AUTODPOWERDOWN_OWNERID_Msk) |     \
                 ((owner_id                                           \
                   << SPU_FEATURE_MRAMC_AUTODPOWERDOWN_OWNERID_Pos) & \
                  SPU_FEATURE_MRAMC_AUTODPOWERDOWN_OWNERID_Msk));     \
            break;                                                    \
                                                                      \
        case NRF_SPU_FEATURE_MRAMC_READY:                             \
            NRFX_ASSERT(index < NRF_SPU_FEATURE_MRAMC_COUNT);         \
            p_reg->FEATURE.MRAMC[index].READY =                       \
                ((p_reg->FEATURE.MRAMC[index].READY &                 \
                  SPU_FEATURE_MRAMC_READY_OWNERID_Msk) |              \
                 ((owner_id                                           \
                   << SPU_FEATURE_MRAMC_READY_OWNERID_Pos) &          \
                  SPU_FEATURE_MRAMC_READY_OWNERID_Msk));              \
            break
#endif

/*------------------------------------------------------------------------------------------------*/
/* End of SPU Extended section                                                                    */
/*------------------------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------------------------*/
/* Start of TIMER Extended section                                                                */
/*------------------------------------------------------------------------------------------------*/

#if defined(HALTIUM_XXAA)
    #define NRF_TIMER_PRESCALER_MAX TIMER_PRESCALER_PRESCALER_Max

    #define NRF_TIMER_IS_320MHZ_TIMER(p_reg) ( \
           (p_reg == NRF_TIMER120)                 \
        || (p_reg == NRF_TIMER121))
    #define NRF_TIMER_IS_16MHZ_TIMER(p_reg) (  \
           (p_reg == NRF_TIMER130)                 \
        || (p_reg == NRF_TIMER131)                 \
        || (p_reg == NRF_TIMER132)                 \
        || (p_reg == NRF_TIMER133)                 \
        || (p_reg == NRF_TIMER134)                 \
        || (p_reg == NRF_TIMER135)                 \
        || (p_reg == NRF_TIMER136)                 \
        || (p_reg == NRF_TIMER137))
    #define NRF_TIMER_IS_32MHZ_TIMER(p_reg) ( \
           (p_reg == NRF_TIMER020)                \
        || (p_reg == NRF_TIMER021)                \
        || (p_reg == NRF_TIMER022))
    #define NRF_TIMER_IS_64MHZ_TIMER(p_reg) false

    #if defined(NRF_RADIOCORE)
        #define NRF_TIMER_BIT_WIDTH_LOCAL(p_reg, bit_width) (                 \
               (p_reg == NRF_TIMER020 && TIMER_BIT_WIDTH_MAX(020, bit_width)) \
            || (p_reg == NRF_TIMER021 && TIMER_BIT_WIDTH_MAX(021, bit_width)) \
            || (p_reg == NRF_TIMER022 && TIMER_BIT_WIDTH_MAX(022, bit_width)))
    #else
        #define NRF_TIMER_BIT_WIDTH_LOCAL(p_reg, bit_width) 0
    #endif

    #define NRF_TIMER_BIT_WIDTH_GLOBAL(p_reg, bit_width) (                \
           (p_reg == NRF_TIMER120 && TIMER_BIT_WIDTH_MAX(120, bit_width)) \
        || (p_reg == NRF_TIMER121 && TIMER_BIT_WIDTH_MAX(121, bit_width)) \
        || (p_reg == NRF_TIMER130 && TIMER_BIT_WIDTH_MAX(130, bit_width)) \
        || (p_reg == NRF_TIMER131 && TIMER_BIT_WIDTH_MAX(131, bit_width)) \
        || (p_reg == NRF_TIMER132 && TIMER_BIT_WIDTH_MAX(132, bit_width)) \
        || (p_reg == NRF_TIMER133 && TIMER_BIT_WIDTH_MAX(133, bit_width)) \
        || (p_reg == NRF_TIMER134 && TIMER_BIT_WIDTH_MAX(134, bit_width)) \
        || (p_reg == NRF_TIMER135 && TIMER_BIT_WIDTH_MAX(135, bit_width)) \
        || (p_reg == NRF_TIMER136 && TIMER_BIT_WIDTH_MAX(136, bit_width)) \
        || (p_reg == NRF_TIMER137 && TIMER_BIT_WIDTH_MAX(137, bit_width)))

    #define NRF_TIMER_IS_BIT_WIDTH_VALID(p_reg, bit_width) \
        (NRF_TIMER_BIT_WIDTH_LOCAL(p_reg, bit_width) ||    \
        NRF_TIMER_BIT_WIDTH_GLOBAL(p_reg, bit_width))
#elif defined(LUMOS_XXAA)
    #define NRF_TIMER_IS_320MHZ_TIMER(p_reg) false
    #define NRF_TIMER_IS_16MHZ_TIMER(p_reg) ( \
           (p_reg == NRF_TIMER20)                 \
        || (p_reg == NRF_TIMER21)                 \
        || (p_reg == NRF_TIMER22)                 \
        || (p_reg == NRF_TIMER23)                 \
        || (p_reg == NRF_TIMER24))
    #define NRF_TIMER_IS_32MHZ_TIMER(p_reg) ( \
           (p_reg == NRF_TIMER10))
    #define NRF_TIMER_IS_64MHZ_TIMER(p_reg) ( \
            (p_reg == NRF_TIMER00))

    #define NRF_TIMER_IS_BIT_WIDTH_VALID(p_reg, bit_width) (              \
           ((p_reg == NRF_TIMER00) && TIMER_BIT_WIDTH_MAX(00, bit_width)) \
        || ((p_reg == NRF_TIMER10) && TIMER_BIT_WIDTH_MAX(10, bit_width)) \
        || ((p_reg == NRF_TIMER20) && TIMER_BIT_WIDTH_MAX(20, bit_width)) \
        || ((p_reg == NRF_TIMER21) && TIMER_BIT_WIDTH_MAX(21, bit_width)) \
        || ((p_reg == NRF_TIMER22) && TIMER_BIT_WIDTH_MAX(22, bit_width)) \
        || ((p_reg == NRF_TIMER23) && TIMER_BIT_WIDTH_MAX(23, bit_width)) \
        || ((p_reg == NRF_TIMER24) && TIMER_BIT_WIDTH_MAX(24, bit_width)))
#endif

/*------------------------------------------------------------------------------------------------*/
/* End of TIMER Extended section                                                                  */
/*------------------------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------------------------*/
/* Start of UARTE Extended section                                                               */
/*------------------------------------------------------------------------------------------------*/

#if defined(LUMOS_XXAA)
    #if defined(NRF_CPU_FREQ_IS_64MHZ)
        #define NRF_UARTE_IS_64MHZ_UARTE(p_reg) (p_reg == NRF_UARTE00)
    #elif defined(NRF_CPU_FREQ_IS_128MHZ)
        #define NRF_UARTE_IS_128MHZ_UARTE(p_reg) (p_reg == NRF_UARTE00)
    #endif
#endif

/*------------------------------------------------------------------------------------------------*/
/* End of UARTE Extended section                                                                  */
/*------------------------------------------------------------------------------------------------*/

#ifdef __cplusplus
}
#endif

#endif // NRFX_EXT_H__
