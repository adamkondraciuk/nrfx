#ifndef MDK_FIXUPS_H__
#define MDK_FIXUPS_H__

/**************************************************************************************************/
/* Start fixups section for HALTIUM_XXAA                                                          */
/**************************************************************************************************/

#if defined(NRF54H20_ENGA_XXAA) || defined(LILIUMFP1_XXAA) || defined(NRF7140_XXAA) \
    || defined(NRF9230_XXAA)
    #define HALTIUM_XXAA 1
#endif

#if defined(HALTIUM_XXAA)

    typedef NRF_DOMAINS_t nrf_domain_t;

    #define NRF_DOMAIN_COUNT NRF_DOMAIN_GLOBAL + 1

    #if !defined(NRF_IPCMAP_CHANNEL_COUNT)
        #if defined(NRF9230_XXAA)
            #define NRF_IPCMAP_CHANNEL_COUNT (31)
        #else
            #define NRF_IPCMAP_CHANNEL_COUNT (16)
        #endif
    #endif

    #define GRTC_INTEN_Msk NRFX_BIT_MASK(GRTC_CC_MaxCount)

    /* TODO: MDK-2070 */
    typedef enum
    {
        NRF_OWNER_NONE        = 0,
        NRF_OWNER_SECURE      = 1,
        NRF_OWNER_APPLICATION = 2,
        NRF_OWNER_RADIOCORE   = 3,
        NRF_OWNER_CELLCORE    = 4,
        NRF_OWNER_ISIMCORE    = 5,
        NRF_OWNER_SYSCTRL     = 8,
    } nrf_owner_t;

    /* TODO: Create ticket for MDK. */
    #if defined(NRF_SECURE)
        #define NRF_DOMAIN NRF_DOMAIN_SECURE
    #elif defined(NRF_APPLICATION)
        #define NRF_DOMAIN NRF_DOMAIN_APPLICATION
    #elif defined(NRF_RADIOCORE)
        #define NRF_DOMAIN NRF_DOMAIN_RADIOCORE
    #elif defined(NRF_CELLCORE)
        #define NRF_DOMAIN NRF_DOMAIN_CELLCORE
    #elif defined(NRF_SYSCTRL)
        #define NRF_DOMAIN NRF_DOMAIN_SYSCTRL
    #elif defined(NRF_PPR)
        #define NRF_DOMAIN NRF_DOMAIN_PPR
    #elif defined(NRF_FLPR)
        #define NRF_DOMAIN NRF_DOMAIN_FLPR
    #elif defined(NRF_LMAC)
        #define NRF_DOMAIN NRF_DOMAIN_LMAC
    #elif defined(NRF_UMAC)
        #define NRF_DOMAIN NRF_DOMAIN_UMAC
    #endif

    /* TODO: NRFX-3171 */
    typedef enum
    {
        NRF_PROCESSOR_ID_SECURE      = 1,
        NRF_PROCESSOR_ID_APPLICATION = 2,
        NRF_PROCESSOR_ID_RADIOCORE   = 3,
        NRF_PROCESSOR_ID_CELLCORE    = 4,
        NRF_PROCESSOR_ID_CELLDSP     = 5,
        NRF_PROCESSOR_ID_CELLRF      = 6,
        NRF_PROCESSOR_ID_ISIMCORE    = 7,
        NRF_PROCESSOR_ID_BBPR        = 11,
        NRF_PROCESSOR_ID_SYSCTRL     = 12,
        NRF_PROCESSOR_ID_PPR         = 13,
        NRF_PROCESSOR_ID_FLPR        = 14,
    } nrf_processor_id_t;

    #define NRF_PROCESSOR_ID_COUNT (NRF_PROCESSOR_ID_FLPR + 1)

    /* TODO: MDK-2059 */
    #define ADDRESS_REGION_Pos        (29UL)
    #define ADDRESS_REGION_Msk        (0x7UL << ADDRESS_REGION_Pos)
    #define ADDRESS_SECURITY_Pos      (28UL)
    #define ADDRESS_SECURITY_Msk      (0x1UL << ADDRESS_SECURITY_Pos)
    #define ADDRESS_DOMAIN_Pos        (24UL)
    #define ADDRESS_DOMAIN_Msk        (0xFUL << ADDRESS_DOMAIN_Pos)
    #define ADDRESS_BUS_Pos           (16UL)
    #define ADDRESS_BUS_Msk           (0xFFUL << ADDRESS_BUS_Pos)
    #define ADDRESS_BRIDGE_GROUP_Pos  (20UL)
    #define ADDRESS_BRIDGE_GROUP_Msk  (0xFUL << ADDRESS_BRIDGE_GROUP_Pos)
    #define ADDRESS_DOMAIN_SPEED_Pos  (20UL)
    #define ADDRESS_DOMAIN_SPEED_Msk  (0x1UL << ADDRESS_DOMAIN_SPEED_Pos)
    #define ADDRESS_DOMAIN_SPEED_Fast (0x0UL)
    #define ADDRESS_DOMAIN_SPEED_Slow (0x1UL)
    #define ADDRESS_SLAVE_Pos         (12UL)
    #define ADDRESS_SLAVE_Msk         (0xFUL << ADDRESS_SLAVE_Pos)
    #define ADDRESS_PERIPHID_Pos      (12UL)
    #define ADDRESS_PERIPHID_Msk      (0x7FFUL << ADDRESS_PERIPHID_Pos)

    /* TODO: MDK-2059 */
    typedef enum
    {
        NRF_REGION_PROGRAM      = 0,
        NRF_REGION_DATA         = 1,
        NRF_REGION_PERIPHERALS  = 2,
        NRF_REGION_EXTMEM       = 3,
        NRF_REGION_EXTMEM_ENC   = 4,
        NRF_REGION_STM          = 5,
        NRF_REGION_CPU_INTERNAL = 7,
    } nrf_region_t;

    /* TODO: Move to nrf_common MDK-2059 */
    typedef enum
    {
        NRF_DOMAIN_SPEED_FAST = ADDRESS_DOMAIN_SPEED_Fast,
        NRF_DOMAIN_SPEED_SLOW = ADDRESS_DOMAIN_SPEED_Slow,
    } nrf_domain_speed_t;

    /* TODO: Create ticket for MDK. */
    #define NRF_SYSCTRL_PPIB130_TO_PPIB132_CHANNELS_OFFSET 0
    #define NRF_SYSCTRL_PPIB130_TO_PPIB133_CHANNELS_OFFSET 8
    #define NRF_SYSCTRL_PPIB130_TO_PPIB134_CHANNELS_OFFSET 16
    #define NRF_SYSCTRL_PPIB130_TO_PPIB135_CHANNELS_OFFSET 24
    #define NRF_SYSCTRL_PPIB131_TO_PPIB136_CHANNELS_OFFSET 0
    #define NRF_SYSCTRL_PPIB131_TO_PPIB137_CHANNELS_OFFSET 8
    #define NRF_SYSCTRL_PPIB131_TO_PPIB121_CHANNELS_OFFSET 16

    #if defined(NRF_TRUSTZONE_NONSECURE)
        #if defined(NRF_SECURE)
            #define NRF_GPIOTE_IRQ_GROUP 0
        #elif defined(NRF_APPLICATION)
            #define NRF_GPIOTE_IRQ_GROUP 2
        #elif defined(NRF_RADIOCORE)
            #define NRF_GPIOTE_IRQ_GROUP 4
        #elif defined(NRF_CELLCORE)
            #define NRF_GPIOTE_IRQ_GROUP 4
        #else
            #error Unknown core.
        #endif
    #elif defined(NRF_SYSCTRL)
        #define NRF_GPIOTE_IRQ_GROUP 6
    #elif defined(NRF_PPR) || defined(NRF_FLPR)
    /* TODO: PPR can use group shared with either APP or NET core. Investigate this further */
        #define NRF_GPIOTE_IRQ_GROUP 2
    #elif defined(NRF_LMAC) || defined(NRF_UMAC)
        #define NRF_GPIOTE_IRQ_GROUP 2
    /* TODO: LMAC and UMAC cores does not have GPIOTE group, temporary leave it in APP group.
            Investigate this further */
    #else
        #if defined(NRF_SECURE)
            #define NRF_GPIOTE_IRQ_GROUP 1
        #elif defined(NRF_APPLICATION)
            #define NRF_GPIOTE_IRQ_GROUP 3
        #elif defined(NRF_RADIOCORE) || defined(NRF_BBPR)
            #define NRF_GPIOTE_IRQ_GROUP 5
        #elif defined(NRF_CELLCORE)
            #define NRF_GPIOTE_IRQ_GROUP 5
        #else
            #error Unknown core.
        #endif
    #endif // defined(NRF_TRUSTZONE_NONSECURE)

    #if defined(NRF_TRUSTZONE_NONSECURE) || defined(NRF_SYSCTRL) || defined(NRF_PPR) || defined(__NRFX_DOXYGEN__)
        #define NRF_GPIOTE130_IRQn      GPIOTE130_0_IRQn
        #define nrfx_gpiote_irq_handler GPIOTE130_0_IRQHandler
    #else
        #define NRF_GPIOTE130_IRQn      GPIOTE130_1_IRQn
        #define nrfx_gpiote_irq_handler GPIOTE130_1_IRQHandler
    #endif // defined(NRF_TRUSTZONE_NONSECURE)

    #define NRF_GPIOTE_INT_COUNT 7

    #define GPIOTE_CH_NUM   GPIOTE_EVENTS_IN_MaxCount
    #define GPIOTE_PORT_NUM GPIOTE_EVENTS_PORT_MaxCount
    #define GPIOTE_FEATURE_SET_PRESENT
    #define GPIOTE_FEATURE_CLR_PRESENT

    /* TODO: Create ticket for MDK. */
    #if defined(NRF_TRUSTZONE_NONSECURE) || defined(__NRFX_DOXYGEN__)
        #if defined(NRF_SECURE) || defined(__NRFX_DOXYGEN__)
            #define NRF_GRTC_IRQ_GROUP 0
        #elif defined(NRF_APPLICATION)
            #define NRF_GRTC_IRQ_GROUP 2
        #elif defined(NRF_RADIOCORE)
            #define NRF_GRTC_IRQ_GROUP 4
        #elif defined(NRF_CELLCORE)
            #define NRF_GRTC_IRQ_GROUP 8
        #else
            #error Unknown core.
        #endif
    #elif defined(NRF_SYSCTRL)
        #define NRF_GRTC_IRQ_GROUP 6
    #elif defined(NRF_PPR) || defined(NRF_FLPR)
        #define NRF_GRTC_IRQ_GROUP 2
    #else
        #if defined(NRF_SECURE)
            #define NRF_GRTC_IRQ_GROUP 1
        #elif defined(NRF_APPLICATION)
            #define NRF_GRTC_IRQ_GROUP 3
        #elif defined(NRF_RADIOCORE) || defined(NRF_BBPR)
            #define NRF_GRTC_IRQ_GROUP 5
        #elif defined(NRF_CELLCORE)
            #define NRF_GRTC_IRQ_GROUP 7
        #elif defined(NRF_LMAC)
            #define NRF_GRTC_IRQ_GROUP 8
        #elif defined(NRF_UMAC)
            #define NRF_GRTC_IRQ_GROUP 9
        #else
            #error Unknown core.
        #endif
    #endif

    #if defined(NRF_TRUSTZONE_NONSECURE) || defined(NRF_SYSCTRL) || defined(NRF_PPR) || defined(NRF_FLPR) || defined(__NRFX_DOXYGEN__)
        #define GRTC_IRQn       GRTC_0_IRQn
        #define GRTC_IRQHandler GRTC_0_IRQHandler
    #else
        #define GRTC_IRQn       GRTC_1_IRQn
        #define GRTC_IRQHandler GRTC_1_IRQHandler
    #endif

    #define NRF_VPR_CLIC_PRIO_COUNT 4
    #define CLIC_CLIC_CLICCFG_NMBITS_ModeMU  1
    #define CLIC_CLIC_CLICCFG_NMBITS_ModeMSU 2

    #define VPR_VEVIF_EVENT_MaxCount 32

    #define CSR_MINTTRESH 0x347

    #if defined(VPRCSR_MINTTRESH)
        #define VPRCSR_MINTTHRESH VPRCSR_MINTTRESH
        #define VPRCSR_MINTTHRESH_ResetValue VPRCSR_MINTTRESH_ResetValue

        #define VPRCSR_MINTTHRESH_TH_Pos VPRCSR_MINTTRESH_TH_Pos
        #define VPRCSR_MINTTHRESH_TH_Msk VPRCSR_MINTTRESH_TH_Msk
        #define VPRCSR_MINTTHRESH_TH_Min VPRCSR_MINTTRESH_TH_Min
        #define VPRCSR_MINTTHRESH_TH_Max VPRCSR_MINTTRESH_TH_Max
        #define VPRCSR_MINTTHRESH_TH_DISABLED VPRCSR_MINTTRESH_TH_DISABLED
        #define VPRCSR_MINTTHRESH_TH_THRESHLEVEL0 VPRCSR_MINTTRESH_TH_THRESHLEVEL0
        #define VPRCSR_MINTTHRESH_TH_THRESHLEVEL1 VPRCSR_MINTTRESH_TH_THRESHLEVEL1
        #define VPRCSR_MINTTHRESH_TH_THRESHLEVEL2 VPRCSR_MINTTRESH_TH_THRESHLEVEL2
        #define VPRCSR_MINTTHRESH_TH_THRESHLEVEL3 VPRCSR_MINTTRESH_TH_THRESHLEVEL3
    #endif

    #ifdef EASYVDMA_TASKS_START_TASKS_START_Pos
        #define EASYVDMA_PRESENT
    #endif

    #define GLOBAL_IRQN_START (96)
    #define GLOBAL_IRQN_MAX   (480)

    #define SPU0_PERIPH_COUNT 14
    #define SPU1_PERIPH_COUNT 10
    #define SPU2_PERIPH_COUNT 6
    #define SPU3_PERIPH_COUNT 8
    #define SPU000_PERIPH_COUNT 16
    #define SPU010_PERIPH_COUNT 16
    #define SPU020_PERIPH_COUNT 16
    #define SPU030_PERIPH_COUNT 16
    #define SPU200_PERIPH_COUNT 10
    #define SPU210_PERIPH_COUNT 6
    #define SPU110_PERIPH_COUNT 9
    #define SPU111_PERIPH_COUNT 12
    #define SPU112_PERIPH_COUNT 12
    #define SPU120_PERIPH_COUNT 16
    #define SPU121_PERIPH_COUNT 16
    #define SPU122_PERIPH_COUNT 16
    #define SPU130_PERIPH_COUNT 16
    #define SPU131_PERIPH_COUNT 32
    #define SPU132_PERIPH_COUNT 16
    #define SPU133_PERIPH_COUNT 16
    #define SPU134_PERIPH_COUNT 16
    #define SPU135_PERIPH_COUNT 16
    #define SPU136_PERIPH_COUNT 16
    #define SPU137_PERIPH_COUNT 16

    #if defined(SPU_FEATURE_GPIO_MaxCount)
        #undef SPU_FEATURE_GPIO_MaxCount
        #define SPU_FEATURE_GPIO_MaxCount 16
    #endif

    /**
     * @brief PROCESSOR [SPU_FEATURE_BELLS_PROCESSOR] (unspecified)
     */
    typedef struct {
        __IOM uint32_t  TASKS[16];                         /*!< (@ 0x00000000) Configuration of features for tasks pair [(o * 2) + 1:o
                                                                                * 2] of Processor ID n*/
        __IOM uint32_t  EVENTS[16];                        /*!< (@ 0x00000040) Configuration of features for events pair [(o * 2) +
                                                                                1:o * 2] of Processor ID n*/
        __IOM uint32_t  INTERRUPT[16];                     /*!< (@ 0x00000080) Configuration of features for interrupt register pair
                                                                                [(o * 2) + 1:o * 2] of Processor ID n*/
    } NRF_SPU_FEATURE_BELLS_PROCESSOR_Type_fixed;              /*!< Size = 192 (0x0C0)                                                   */

    /**
     * @brief BELLS [SPU_FEATURE_BELLS] (unspecified)
     */
    typedef struct {
        __IOM NRF_SPU_FEATURE_BELLS_PROCESSOR_Type_fixed PROCESSOR[8]; /*!< (@ 0x00000000) (unspecified)                                   */
    } NRF_SPU_FEATURE_BELLS_Type_fixed;                        /*!< Size = 1536 (0x600)                                                  */

    typedef union {
    struct {
        __IOM NRF_SPU_FEATURE_IPCT_Type IPCT;
        __IOM NRF_SPU_FEATURE_DPPIC_Type DPPIC;
        __IOM NRF_SPU_FEATURE_GPIOTE_Type GPIOTE[2];
        __IM uint32_t RESERVED[32];
        #if defined(_GNUC_)
            #pragma GCC diagnostic push
            #pragma GCC diagnostic ignored "-Wpedantic"
        #endif
        union {
        __IOM NRF_SPU_FEATURE_GPIO_Type GPIO[16];
        __IOM NRF_SPU_FEATURE_GRTC_Type GRTC;
        };
        #if defined(_GNUC_)
            #pragma GCC diagnostic pop
        #endif
    };
    #if defined(LILIUMFP1_XXAA) || defined(NRF7140_XXAA)
        __IOM NRF_SPU_FEATURE_BELLS_Type_fixed BELLS;
    #else
        __IOM NRF_SPU_FEATURE_BELLS_Type BELLS;
    #endif
    } NRF_SPU_FEATURE_Type_fixed;

    typedef struct {
        __IM  uint32_t  RESERVED[64];
        __IOM uint32_t  EVENTS_PERIPHACCERR;
        __IM  uint32_t  RESERVED1[127];
        __IOM uint32_t  INTEN;
        __IOM uint32_t  INTENSET;
        __IOM uint32_t  INTENCLR;
        __IM  uint32_t  RESERVED2[62];
        __IOM NRF_SPU_PERIPHACCERR_Type PERIPHACCERR;
        __IM  uint32_t  RESERVED3[61];
        __IOM NRF_SPU_PERIPH_Type PERIPH[32];
        __IM  uint32_t  RESERVED4[32];
        __IOM NRF_SPU_FEATURE_Type_fixed FEATURE;
    } NRF_SPU_Type_fixed;

    #if defined(NRF_APPLICATION_SPU000_S)
        #undef NRF_APPLICATION_SPU000_S
        #define NRF_APPLICATION_SPU000_S ((NRF_SPU_Type_fixed*) NRF_APPLICATION_SPU000_S_BASE)
    #endif

    #if defined(NRF_APPLICATION_SPU010_S)
        #undef NRF_APPLICATION_SPU010_S
        #define NRF_APPLICATION_SPU010_S ((NRF_SPU_Type_fixed*) NRF_APPLICATION_SPU010_S_BASE)
    #endif

    #if defined(NRF_CELLCORE_SPU0_S)
        #undef NRF_CELLCORE_SPU0_S
        #define NRF_CELLCORE_SPU0_S ((NRF_SPU_Type_fixed*) NRF_CELLCORE_SPU0_S_BASE)
    #endif

    #if defined(NRF_CELLCORE_SPU1_S)
        #undef NRF_CELLCORE_SPU1_S
        #define NRF_CELLCORE_SPU1_S ((NRF_SPU_Type_fixed*) NRF_CELLCORE_SPU1_S_BASE)
    #endif

    #if defined(NRF_CELLCORE_SPU2_S)
        #undef NRF_CELLCORE_SPU2_S
        #define NRF_CELLCORE_SPU2_S ((NRF_SPU_Type_fixed*) NRF_CELLCORE_SPU2_S_BASE)
    #endif

    #if defined(NRF_CELLCORE_SPU3_S)
        #undef NRF_CELLCORE_SPU3_S
        #define NRF_CELLCORE_SPU3_S ((NRF_SPU_Type_fixed*) NRF_CELLCORE_SPU3_S_BASE)
    #endif

    #if defined(NRF_ISIMCORE_SPU0_S)
        #undef NRF_ISIMCORE_SPU0_S
        #define NRF_ISIMCORE_SPU0_S ((NRF_SPU_Type_fixed*) NRF_ISIMCORE_SPU0_S_BASE)
    #endif

    #if defined(NRF_ISIMCORE_SPU1_S)
        #undef NRF_ISIMCORE_SPU1_S
        #define NRF_ISIMCORE_SPU1_S ((NRF_SPU_Type_fixed*) NRF_ISIMCORE_SPU1_S_BASE)
    #endif

    #if defined(NRF_ISIMCORE_SPU2_S)
        #undef NRF_ISIMCORE_SPU2_S
        #define NRF_ISIMCORE_SPU2_S ((NRF_SPU_Type_fixed*) NRF_ISIMCORE_SPU2_S_BASE)
    #endif

    #if defined(NRF_RADIOCORE_SPU000_S)
        #undef NRF_RADIOCORE_SPU000_S
        #define NRF_RADIOCORE_SPU000_S ((NRF_SPU_Type_fixed*) NRF_RADIOCORE_SPU000_S_BASE)
    #endif

    #if defined(NRF_RADIOCORE_SPU010_S)
        #undef NRF_RADIOCORE_SPU010_S
        #define NRF_RADIOCORE_SPU010_S ((NRF_SPU_Type_fixed*) NRF_RADIOCORE_SPU010_S_BASE)
    #endif

    #if defined(NRF_RADIOCORE_SPU020_S)
        #undef NRF_RADIOCORE_SPU020_S
        #define NRF_RADIOCORE_SPU020_S ((NRF_SPU_Type_fixed*) NRF_RADIOCORE_SPU020_S_BASE)
    #endif

    #if defined(NRF_RADIOCORE_SPU030_S)
        #undef NRF_RADIOCORE_SPU030_S
        #define NRF_RADIOCORE_SPU030_S ((NRF_SPU_Type_fixed*) NRF_RADIOCORE_SPU030_S_BASE)
    #endif

    #if defined(NRF_SECURE_SPU000_S)
        #undef NRF_SECURE_SPU000_S
        #define NRF_SECURE_SPU000_S ((NRF_SPU_Type_fixed*) NRF_SECURE_SPU000_S_BASE)
    #endif

    #if defined(NRF_SECURE_SPU010_S)
        #undef NRF_SECURE_SPU010_S
        #define NRF_SECURE_SPU010_S ((NRF_SPU_Type_fixed*) NRF_SECURE_SPU010_S_BASE)
    #endif

    #if defined(NRF_SECURE_SPU110_S)
        #undef NRF_SECURE_SPU110_S
        #define NRF_SECURE_SPU110_S ((NRF_SPU_Type_fixed*) NRF_SECURE_SPU110_S_BASE)
    #endif

    #if defined(NRF_SECURE_SPU111_S)
        #undef NRF_SECURE_SPU111_S
        #define NRF_SECURE_SPU111_S ((NRF_SPU_Type_fixed*) NRF_SECURE_SPU111_S_BASE)
    #endif

    #if defined(NRF_SECURE_SPU120_S)
        #undef NRF_SECURE_SPU120_S
        #define NRF_SECURE_SPU120_S ((NRF_SPU_Type_fixed*) NRF_SECURE_SPU120_S_BASE)
    #endif

    #if defined(NRF_SECURE_SPU121_S)
        #undef NRF_SECURE_SPU121_S
        #define NRF_SECURE_SPU121_S ((NRF_SPU_Type_fixed*) NRF_SECURE_SPU121_S_BASE)
    #endif

    #if defined(NRF_SECURE_SPU122_S)
        #undef NRF_SECURE_SPU122_S
        #define NRF_SECURE_SPU122_S ((NRF_SPU_Type_fixed*) NRF_SECURE_SPU122_S_BASE)
    #endif

    #if defined(NRF_SECURE_SPU130_S)
        #undef NRF_SECURE_SPU130_S
        #define NRF_SECURE_SPU130_S ((NRF_SPU_Type_fixed*) NRF_SECURE_SPU130_S_BASE)
    #endif

    #if defined(NRF_SECURE_SPU131_S)
        #undef NRF_SECURE_SPU131_S
        #define NRF_SECURE_SPU131_S ((NRF_SPU_Type_fixed*) NRF_SECURE_SPU131_S_BASE)
    #endif

    #if defined(NRF_SECURE_SPU132_S)
        #undef NRF_SECURE_SPU132_S
        #define NRF_SECURE_SPU132_S ((NRF_SPU_Type_fixed*) NRF_SECURE_SPU132_S_BASE)
    #endif

    #if defined(NRF_SECURE_SPU133_S)
        #undef NRF_SECURE_SPU133_S
        #define NRF_SECURE_SPU133_S ((NRF_SPU_Type_fixed*) NRF_SECURE_SPU133_S_BASE)
    #endif

    #if defined(NRF_SECURE_SPU134_S)
        #undef NRF_SECURE_SPU134_S
        #define NRF_SECURE_SPU134_S ((NRF_SPU_Type_fixed*) NRF_SECURE_SPU134_S_BASE)
    #endif

    #if defined(NRF_SECURE_SPU135_S)
        #undef NRF_SECURE_SPU135_S
        #define NRF_SECURE_SPU135_S ((NRF_SPU_Type_fixed*) NRF_SECURE_SPU135_S_BASE)
    #endif

    #if defined(NRF_SECURE_SPU136_S)
        #undef NRF_SECURE_SPU136_S
        #define NRF_SECURE_SPU136_S ((NRF_SPU_Type_fixed*) NRF_SECURE_SPU136_S_BASE)
    #endif

    #if defined(NRF_SECURE_SPU137_S)
        #undef NRF_SECURE_SPU137_S
        #define NRF_SECURE_SPU137_S ((NRF_SPU_Type_fixed*) NRF_SECURE_SPU137_S_BASE)
    #endif

    #define NRF_SPU_Type NRF_SPU_Type_fixed

    /* TODO: HM-19626 */
    #if defined(NRF_RTC) && !defined(NRF_RTC0)
        #define NRF_RTC0              NRF_RTC
        #define RTC0_IRQn             RTC_IRQn
        #define nrfx_rtc0_irq_handler RTC_IRQHandler
        #define RTC0_CC_NUM           8
    #endif

    #if defined(BOARD_FPGA)
    /* TODO: MDK 8.52.0 contains fix for HM-17533 bug, however the currently available FPGA netlist (017)
    * is not yet aligned to that change. Revert it back for now so MINTTHRESH feature remains available. */
        #undef VPRCSR_MINTTHRESH_TH_Pos
        #undef VPRCSR_MINTTHRESH_TH_Msk
        #define VPRCSR_MINTTHRESH_TH_Pos (24UL)
        #define VPRCSR_MINTTHRESH_TH_Msk (0xFFUL << VPRCSR_MINTTHRESH_TH_Pos)
    #endif

    #define SAADC_CH_NUM 8
    /* MDK-2195 MDK removed information about easydma maxcnt from peripherals since if width is 16. */
    #define SAADC_EASYDMA_MAXCNT_SIZE 15

    #define TWIM120_EASYDMA_MAXCNT_SIZE 16
    #define TWIM130_EASYDMA_MAXCNT_SIZE 16
    #define TWIM131_EASYDMA_MAXCNT_SIZE 16
    #define TWIM132_EASYDMA_MAXCNT_SIZE 16
    #define TWIM133_EASYDMA_MAXCNT_SIZE 16
    #define TWIM134_EASYDMA_MAXCNT_SIZE 16
    #define TWIM135_EASYDMA_MAXCNT_SIZE 16
    #define TWIM136_EASYDMA_MAXCNT_SIZE 16
    #define TWIM137_EASYDMA_MAXCNT_SIZE 16

    #define TWIS130_EASYDMA_MAXCNT_SIZE 16
    #define TWIS131_EASYDMA_MAXCNT_SIZE 16
    #define TWIS132_EASYDMA_MAXCNT_SIZE 16
    #define TWIS133_EASYDMA_MAXCNT_SIZE 16
    #define TWIS134_EASYDMA_MAXCNT_SIZE 16
    #define TWIS135_EASYDMA_MAXCNT_SIZE 16
    #define TWIS136_EASYDMA_MAXCNT_SIZE 16
    #define TWIS137_EASYDMA_MAXCNT_SIZE 16

    #define SPIM120_FEATURE_DCX_PRESENT  0
    #define SPIM121_FEATURE_DCX_PRESENT  0
    #define SPIM130_FEATURE_DCX_PRESENT  0
    #define SPIM131_FEATURE_DCX_PRESENT  0
    #define SPIM132_FEATURE_DCX_PRESENT  0
    #define SPIM133_FEATURE_DCX_PRESENT  0
    #define SPIM134_FEATURE_DCX_PRESENT  0
    #define SPIM135_FEATURE_DCX_PRESENT  0
    #define SPIM136_FEATURE_DCX_PRESENT  0
    #define SPIM137_FEATURE_DCX_PRESENT  0

    #define LPCOMP_REFSEL_RESOLUTION 16

    /* TODO: HM-20336 */
    #define SAADC_CH_NUM 8

    #if defined(DPPIC_PRESENT)
        #if !defined(DPPI_PRESENT)
            #define DPPI_PRESENT
        #endif
        #define DPPI_CH_NUM 8
        #define DPPI_GROUP_NUM 2
        #if defined(NRF_RADIOCORE)
            #define DPPI020_CH_NUM 16
            #define DPPI020_GROUP_NUM 0
            #define DPPI030_CH_NUM 9
            #define DPPI030_GROUP_NUM 1
        #endif
    #endif // defined(DPPIC_PRESENT)

    #if defined(IPCT_PRESENT)
        #define GLOBAL_IPCT_CH_NUM 8
        #if defined(NRF_RADIOCORE)
            #define LOCAL_IPCT_NUM 8
        #elif defined(NRF_SECURE)
            #define LOCAL_IPCT_NUM 4
        #elif defined(NRF_APPLICATION)
            #define LOCAL_IPCT_NUM 4
        #elif defined(NRF_CELLCORE)
            #define LOCAL_IPCT_NUM 10
        #endif
    #endif // defined(IPCT_PRESENT)

    #if defined(NRF_SYSCTRL) || defined(NRF_PPR) || defined(NRF_FLPR)
        #define MVDMA_JOBLISTCOUNT 4
    #else
        #define MVDMA_JOBLISTCOUNT 1
    #endif

    #define MVDMA_AXI_BUS_WIDTH 8

    /* TODO: NCSDK-10983 */
    typedef struct {
        __IOM uint32_t  CPWRUPREQ;
        __IM  uint32_t  CPWRUPACK;
        __IM  uint32_t  RESERVED0[958];
        __IOM uint32_t  ITCTRL;
        __IM  uint32_t  RESERVED1[43];
        __IOM uint32_t  LAR;
        __IOM uint32_t  LSR;
        __IOM uint32_t  AUTHSTATUS;
        __IM  uint32_t  RESERVED2[3];
        __IM  uint32_t  DEVID;
        __IM  uint32_t  DEVTYPE;
        __IOM uint32_t  PIDR4;
        __IM  uint32_t  RESERVED3[3];
        __IOM uint32_t  PIDR0;
        __IOM uint32_t  PIDR1;
        __IOM uint32_t  PIDR2;
        __IOM uint32_t  PIDR3;
        __IOM uint32_t  CIDR0;
        __IOM uint32_t  CIDR1;
        __IOM uint32_t  CIDR2;
        __IOM uint32_t  CIDR3;
    } NRF_GPR_Type;

    #define NRF_GPR_NS_BASE 0xBF050000UL
    #define NRF_GPR_NS ((NRF_GPR_Type*) NRF_GPR_NS_BASE)

    typedef struct {
        __IOM uint32_t  STMSTIMR[32];
        __IM  uint32_t  RESERVED0[737];
        __OM  uint32_t  STMDMASTARTR;
        __OM  uint32_t  STMDMASTOPR;
        __IM  uint32_t  STMDMASTATR;
        __IOM uint32_t  STMDMACTLR;
        __IM  uint32_t  RESERVED1[58];
        __IM  uint32_t  STMDMAIDR;
        __IOM uint32_t  STMHEER;
        __IM  uint32_t  RESERVED2[7];
        __IOM uint32_t  STMHETER;
        __IM  uint32_t  RESERVED3[16];
        __IOM uint32_t  STMHEMCR;
        __IM  uint32_t  RESERVED4[35];
        __IM  uint32_t  STMHEMASTR;
        __IM  uint32_t  STMHEFEAT1R;
        __IM  uint32_t  STMHEIDR;
        __IOM uint32_t  STMSPER;
        __IM  uint32_t  RESERVED5[7];
        __IOM uint32_t  STMSPTER;
        __IM  uint32_t  RESERVED6[15];
        __IOM uint32_t  STMSPSCR;
        __IOM uint32_t  STMSPMSCR;
        __IOM uint32_t  STMSPOVERRIDER;
        __IOM uint32_t  STMSPMOVERRIDER;
        __IOM uint32_t  STMSPTRIGCSR;
        __IM  uint32_t  RESERVED7[3];
        __IOM uint32_t  STMTCSR;
        __OM  uint32_t  STMTSSTIMR;
        __IM  uint32_t  RESERVED8;
        __IOM uint32_t  STMTSFREQR;
        __IOM uint32_t  STMSYNCR;
        __IOM uint32_t  STMAUXCR;
        __IM  uint32_t  RESERVED9[2];
        __IOM uint32_t  STMSPFEAT1R;
        __IOM uint32_t  STMSPFEAT2R;
        __IOM uint32_t  STMSPFEAT3R;
        __IM  uint32_t  RESERVED10[15];
        __OM  uint32_t  STMITTRIGGER;
        __OM  uint32_t  STMITATBDATA0;
        __OM  uint32_t  STMITATBCTR2;
        __OM  uint32_t  STMITATBID;
        __OM  uint32_t  STMITATBCTR0;
        __IM  uint32_t  RESERVED11;
        __IOM uint32_t  ITCTRL;
        __IM  uint32_t  RESERVED12[43];
        __IOM uint32_t  LAR;
        __IOM uint32_t  LSR;
        __IOM uint32_t  AUTHSTATUS;
        __IM  uint32_t  RESERVED13[3];
        __IM  uint32_t  DEVID;
        __IM  uint32_t  DEVTYPE;
        __IOM uint32_t  PIDR4;
        __IM  uint32_t  RESERVED14[3];
        __IOM uint32_t  PIDR0;
        __IOM uint32_t  PIDR1;
        __IOM uint32_t  PIDR2;
        __IOM uint32_t  PIDR3;
        __IOM uint32_t  CIDR0;
        __IOM uint32_t  CIDR1;
        __IOM uint32_t  CIDR2;
        __IOM uint32_t  CIDR3;
    } NRF_STM_Type_fixed;

    #if defined(NRF_STM_NS)
        #undef NRF_STM_NS
        #define NRF_STM_NS ((NRF_STM_Type_fixed*) NRF_STM_NS_BASE)
    #endif

    #define NRF_STM_Type NRF_STM_Type_fixed

    typedef struct {
        __IM  uint32_t  RESERVED0[1];
        __IOM uint32_t  RSZ;
        __IM  uint32_t  RESERVED1[1];
        __IM  uint32_t  STS;
        __IM  uint32_t  RRD;
        __IOM uint32_t  RRP;
        __IOM uint32_t  RWP;
        __IOM uint32_t  TRG;
        __IOM uint32_t  CTL;
        __OM  uint32_t  RWD;
        __IOM uint32_t  MODE;
        __IM  uint32_t  LBUFLEVEL;
        __IM  uint32_t  CBUFLEVEL;
        __IOM uint32_t  BUFWM;
        __IOM uint32_t  RRPHI;
        __IOM uint32_t  RWPHI;
        __IM  uint32_t  RESERVED2[52];
        __IOM uint32_t  AXICTL;
        __IM  uint32_t  RESERVED3[1];
        __IOM uint32_t  DBALO;
        __IOM uint32_t  DBAHI;
        __IM  uint32_t  RESERVED4[120];
        __IM  uint32_t  FFSR;
        __IOM uint32_t  FFCR;
        __IOM uint32_t  PSCR;
        __IM  uint32_t  RESERVED5[753];
        __OM  uint32_t  ITATBMDATA0;
        __IM  uint32_t  ITATBMCTR2;
        __OM  uint32_t  ITATBMCTR1;
        __OM  uint32_t  ITATBMCTR0;
        __OM  uint32_t  ITMISCOP0;
        __IM  uint32_t  RESERVED6[1];
        __IM  uint32_t  ITTRFLIN;
        __IM  uint32_t  ITATBDATA0;
        __OM  uint32_t  ITATBCTR2;
        __IM  uint32_t  ITATBCTR1;
        __IM  uint32_t  ITATBCTR0;
        __IM  uint32_t  RESERVED7[1];
        __IOM uint32_t  ITCTRL;
        __IM  uint32_t  RESERVED8[43];
        __IOM uint32_t  LAR;
        __IOM uint32_t  LSR;
        __IOM uint32_t  AUTHSTATUS;
        __IM  uint32_t  RESERVED9[3];
        __IM  uint32_t  DEVID;
        __IM  uint32_t  DEVTYPE;
        __IOM uint32_t  PIDR4;
        __IM  uint32_t  RESERVED10[3];
        __IOM uint32_t  PIDR0;
        __IOM uint32_t  PIDR1;
        __IOM uint32_t  PIDR2;
        __IOM uint32_t  PIDR3;
        __IOM uint32_t  CIDR0;
        __IOM uint32_t  CIDR1;
        __IOM uint32_t  CIDR2;
        __IOM uint32_t  CIDR3;
    } NRF_TMC_Type;

    #if defined(NRF_ETB_NS)
        #undef NRF_ETB_NS
        #define NRF_ETB_NS ((NRF_TMC_Type*) NRF_ETB_NS_BASE)
    #endif

    typedef struct {
        __IOM uint32_t  CNTCR;
        __IM  uint32_t  CNTSR;
        __IOM uint32_t  CNTCVL;
        __IOM uint32_t  CNTCVU;
        __IM  uint32_t  RESERVED0[4];
        __IOM uint32_t  CNTFID0;
        __IM  uint32_t  RESERVED1[1003];
        __IM  uint32_t  PIDR4;
        __IM  uint32_t  PIDR5;
        __IM  uint32_t  PIDR6;
        __IM  uint32_t  PIDR7;
        __IM  uint32_t  PIDR0;
        __IM  uint32_t  PIDR1;
        __IM  uint32_t  PIDR2;
        __IM  uint32_t  PIDR3;
        __IM  uint32_t  CIDR0;
        __IM  uint32_t  CIDR1;
        __IM  uint32_t  CIDR2;
        __IM  uint32_t  CIDR3;
    } NRF_TSGEN_Type;

    #if defined(NRF_TSGEN_NS)
        #undef NRF_TSGEN_NS
        #define NRF_TSGEN_NS ((NRF_TSGEN_Type*) NRF_TSGEN_NS_BASE)
    #endif

    typedef struct {
        __OM  uint32_t G_DMTS[2];
        __OM  uint32_t G_DM[2];
        __OM  uint32_t G_DTS[2];
        __OM  uint32_t G_D[2];
        __IM  uint32_t RESERVED0[16];
        __OM  uint32_t G_FLAGTS[2];
        __OM  uint32_t G_FLAG[2];
        __OM  uint32_t G_TRIGTS[2];
        __OM  uint32_t G_TRIG[2];
        __OM  uint32_t I_DMTS[2];
        __OM  uint32_t I_DM[2];
        __OM  uint32_t I_DTS[2];
        __OM  uint32_t I_D[2];
        __IM  uint32_t RESERVED1[16];
        __OM  uint32_t I_FLAGTS[2];
        __OM  uint32_t I_FLAG[2];
        __OM  uint32_t I_TRIGTS[2];
        __OM  uint32_t I_TRIG[2];
    } NRF_STMESP_Type;

    #define NRF_APPLICATION_STMESP_NS_BASE 0xA2000000UL
    #define NRF_APPLICATION_STMESP_NS      ((NRF_STMESP_Type*) NRF_APPLICATION_STMESP_NS_BASE)
    #define NRF_APPLICATION_STMESP         NRF_APPLICATION_STMESP_NS

    #define NRF_CELLCORE_STMESP_NS_BASE 0xA4000000UL
    #define NRF_CELLCORE_STMESP_NS      ((NRF_STMESP_Type*) NRF_CELLCORE_STMESP_NS_BASE)
    #define NRF_CELLCORE_STMESP         NRF_CELLCORE_STMESP_NS

    #define NRF_CELLDSP_STMESP_NS_BASE 0xA5000000UL
    #define NRF_CELLDSP_STMESP_NS      ((NRF_STMESP_Type*) NRF_CELLDSP_STMESP_NS_BASE)
    #define NRF_CELLDSP_STMESP         NRF_CELLDSP_STMESP_NS

    #define NRF_CELLRF_STMESP_NS_BASE 0xA6000000UL
    #define NRF_CELLRF_STMESP_NS      ((NRF_STMESP_Type*) NRF_CELLRF_STMESP_NS_BASE)
    #define NRF_CELLRF_STMESP         NRF_CELLRF_STMESP_NS

    #define NRF_RADIOCORE_STMESP_NS_BASE 0xA3000000UL
    #define NRF_RADIOCORE_STMESP_NS      ((NRF_STMESP_Type*) NRF_RADIOCORE_STMESP_NS_BASE)
    #define NRF_RADIOCORE_STMESP         NRF_RADIOCORE_STMESP_NS

    #define NRF_SECURE_STMESP_NS_BASE 0xA1000000UL
    #define NRF_SECURE_STMESP_NS      ((NRF_STMESP_Type*) NRF_SECURE_STMESP_NS_BASE)
    #define NRF_SECURE_STMESP         NRF_SECURE_STMESP_NS

    #if defined(NRF_APPLICATION)
        #define NRF_STMESP NRF_APPLICATION_STMESP
    #endif

    #if defined(NRF_CELLCORE)
        #define NRF_STMESP NRF_CELLCORE_STMESP
    #endif

    #if defined(NRF_CELLDSP)
        #define NRF_STMESP NRF_CELLDSP_STMESP
    #endif

    #if defined(NRF_CELLRF)
        #define NRF_STMESP NRF_CELLRF_STMESP
    #endif

    #if defined(NRF_RADIOCORE)
        #define NRF_STMESP NRF_RADIOCORE_STMESP
    #endif

    #if defined(NRF_SECURE)
        #define NRF_STMESP NRF_SECURE_STMESP
    #endif

    typedef struct {
        __IM  uint32_t RESERVED0[1];
        __IOM uint32_t RSZ;
        __IM  uint32_t RESERVED1[1];
        __IOM uint32_t STS;
        __IOM uint32_t RRD; /* RAM read data */
        __IOM uint32_t RRP; /* RAM read pointer */
        __IOM uint32_t RWP; /* RAM write pointer */
        __IOM uint32_t TRG; /* Trigger counter register */
        __IOM uint32_t CTL; /* Control register */
        __IOM uint32_t RWD; /* RAM write data */
        __IOM uint32_t MODE; /* Mode */
        __IOM uint32_t LBUFLEVEL;
        __IOM uint32_t CBUFLEVEL;
        __IOM uint32_t BUFWM;
        __IM  uint32_t RESERVED2[54];
        __IOM uint32_t BUSCTL;
        __IM  uint32_t RESERVED3[1];
        __IOM uint32_t DBA;
        __IM  uint32_t RESERVED4[1];
        __IOM uint32_t RURP;
        __IM  uint32_t RESERVED5[119];
        __IOM uint32_t FFSR;
        __IOM uint32_t FFCR;
        __IOM uint32_t PSCR;
        __IOM uint32_t RESERVED6[733];
        __IOM uint32_t IRQCR0;
        __IOM uint32_t RES6b;
        __IOM uint32_t IRQCR1;
        __IOM uint32_t IRQCR2;
        __IOM uint32_t RESERVED7[28];
        __IOM uint32_t ITCTRL;
        __IM  uint32_t RESERVED8[39];
        __IOM uint32_t CLAIMSET;
        __OM  uint32_t CLAIMCLR;
        __IM  uint64_t RESERVED9[1];
        __IOM uint32_t LAR;
        __IOM uint32_t LSR;
        __IOM uint32_t AUTHSTATUS;
        __IM  uint32_t DEVARCH;
        __IM  uint32_t RESERVED10[1];
        __IM  uint32_t DEVID1;
        __IM  uint32_t DEVID;
        __IM  uint32_t DEVTYPE;
        __IM  uint32_t PIDR4;
        __IM  uint32_t PIDR5;
        __IM  uint32_t PIDR6;
        __IM  uint32_t PIDR7;
        __IM  uint32_t PIDR0;
        __IM  uint32_t PIDR1;
        __IM  uint32_t PIDR2;
        __IM  uint32_t PIDR3;
        __IM  uint32_t CIDR0;
        __IM  uint32_t CIDR1;
        __IM  uint32_t CIDR2;
        __IM  uint32_t CIDR3;
    } NRF_ETR_Type;

    #undef NRF_ETR_NS
    #define NRF_ETR_NS ((NRF_ETR_Type*) NRF_ETR_NS_BASE)

    #define VREG1V0_DFT_DTB0CONFIG_SELMUX_Spare0 3

    #define VREG1V0_DFT_TCFG_VREFTIMERREQ_Enabled (0x1UL)
    #define VREG1V0_DFT_TCFG_RFRENDCRITERIA_Enabled (0x1UL)
    #define VREG1V0_DFT_TCFG_LPCANCELREQ_Enabled (0x1UL)
    #define VREG1V0_DFT_TCFG_MODELPREQ_Enabled (0x1UL)
    #define VREG1V0_DFT_TCFG_MODEULPRREQ_Enabled (0x1UL)
    #define VREG1V0_DFT_TCFG_PWRUPIBPP_Enabled (0x1UL)
    #define VREG1V0_DFT_TCFG_PWRUPLP_Enabled (0x1UL)
    #define VREG1V0_DFT_TCFG_PWRUPHP_Enabled (0x1UL)
    #define VREG1V0_DFT_TCFG_PWRUPIBPSR_Enabled (0x1UL)
    #define VREG1V0_DFT_TCFG_TCFGENABLE_Enabled (0x1UL)
    #define VREG1V0_DFT_TCFG_REFRESHCMPCLK_Enabled (0x1UL)

    #define VREG1V0_DFT_TCFG_VREFTIMERREQ_Disabled (0x0UL)
    #define VREG1V0_DFT_TCFG_RFRENDCRITERIA_Disabled (0x0UL)
    #define VREG1V0_DFT_TCFG_LPCANCELREQ_Disabled (0x0UL)
    #define VREG1V0_DFT_TCFG_MODELPREQ_Disabled (0x0UL)
    #define VREG1V0_DFT_TCFG_MODEULPRREQ_Disabled (0x0UL)
    #define VREG1V0_DFT_TCFG_PWRUPIBPP_Disabled (0x0UL)
    #define VREG1V0_DFT_TCFG_PWRUPLP_Disabled (0x0UL)
    #define VREG1V0_DFT_TCFG_PWRUPHP_Disabled (0x0UL)
    #define VREG1V0_DFT_TCFG_PWRUPIBPSR_Disabled (0x0UL)
    #define VREG1V0_DFT_TCFG_TCFGENABLE_Disabled (0x0UL)
    #define VREG1V0_DFT_TCFG_REFRESHCMPCLK_Disabled (0x0UL)

    #if !defined(NRF_VREGMRAM)
        #define NRF_VREGMRAM NRF_VREGMRAM130
    #endif

    #define VREGVS0V8_DFT_TCFG_VREFTIMERREQ_Enabled (0x1UL)
    #define VREGVS0V8_DFT_TCFG_RFRENDCRITERIA_Enabled (0x1UL)
    #define VREGVS0V8_DFT_TCFG_LPCANCELREQ_Enabled (0x1UL)
    #define VREGVS0V8_DFT_TCFG_MODELPREQ_Enabled (0x1UL)
    #define VREGVS0V8_DFT_TCFG_MODEULPRREQ_Enabled (0x1UL)
    #define VREGVS0V8_DFT_TCFG_PWRUPIBPP_Enabled (0x1UL)
    #define VREGVS0V8_DFT_TCFG_PWRUPLP_Enabled (0x1UL)
    #define VREGVS0V8_DFT_TCFG_PWRUPHP_Enabled (0x1UL)
    #define VREGVS0V8_DFT_TCFG_PWRUPIBPSR_Enabled (0x1UL)

    #define VREGVS0V8_DFT_TCFG_VREFTIMERREQ_Disabled (0x0UL)
    #define VREGVS0V8_DFT_TCFG_RFRENDCRITERIA_Disabled (0x0UL)
    #define VREGVS0V8_DFT_TCFG_LPCANCELREQ_Disabled (0x0UL)
    #define VREGVS0V8_DFT_TCFG_MODELPREQ_Disabled (0x0UL)
    #define VREGVS0V8_DFT_TCFG_MODEULPRREQ_Disabled (0x0UL)
    #define VREGVS0V8_DFT_TCFG_PWRUPIBPP_Disabled (0x0UL)
    #define VREGVS0V8_DFT_TCFG_PWRUPLP_Disabled (0x0UL)
    #define VREGVS0V8_DFT_TCFG_PWRUPHP_Disabled (0x0UL)
    #define VREGVS0V8_DFT_TCFG_PWRUPIBPSR_Disabled (0x0UL)

    #define VDETAO1V8_DFT_ATB0CONFIG_SELMUX_Spare (0x2UL)
    #define VDETAO1V8_DFT_DTB1CONFIG_SELMUX_Spare0 (0x0UL)
    #define VDETAO1V8_DFT_DTB1CONFIG_SELMUX_Spare1 (0x1UL)

    #define VDETAO0V8_DFT_TCFG_PGDCOMPARATOR_Enabled (0x1UL)
    #define VDETAO0V8_DFT_TCFG_BODCOMPARATOR_Enabled (0x1UL)
    #define VDETAO0V8_DFT_TCFG_BODCOMPARATOR1UA_Enabled (0x1UL)
    #define VDETAO0V8_DFT_TCFG_UNLOCKBOD_Enabled (0x1UL)
    #define VDETAO0V8_DFT_TCFG_OVERRIDEN_Enabled (0x1UL)
    #define VDETAO0V8_DFT_TCFG_DISCONNECTSENSE_Enabled (0x1UL)

    #define VDETAO0V8_DFT_TCFG_PGDCOMPARATOR_Disabled (0x0UL)
    #define VDETAO0V8_DFT_TCFG_BODCOMPARATOR_Disabled (0x0UL)
    #define VDETAO0V8_DFT_TCFG_BODCOMPARATOR1UA_Disabled (0x0UL)
    #define VDETAO0V8_DFT_TCFG_UNLOCKBOD_Disabled (0x0UL)
    #define VDETAO0V8_DFT_TCFG_OVERRIDEN_Disabled (0x0UL)
    #define VDETAO0V8_DFT_TCFG_DISCONNECTSENSE_Disabled (0x0UL)

    #define VDETAO0V8_DFT_DTB0CONFIG_SELMUX_Spare0 (0x0UL)
    #define VDETAO0V8_DFT_DTB0CONFIG_SELMUX_Spare1 (0x5UL)
    #define VDETAO0V8_DFT_DTB0CONFIG_SELMUX_Spare2 (0x7UL)

    #define VDETAO0V8_DFT_DTB1CONFIG_SELMUX_Spare0 (0x0UL)

    #define VDETVS0V8_DFT_TCFG_PGDCOMPARATOR_Enabled (0x1UL)
    #define VDETVS0V8_DFT_TCFG_BODCOMPARATOR_Enabled (0x1UL)
    #define VDETVS0V8_DFT_TCFG_BODCOMPARATOR1UA_Enabled (0x1UL)
    #define VDETVS0V8_DFT_TCFG_UNLOCKBOD_Enabled (0x1UL)
    #define VDETVS0V8_DFT_TCFG_OVERRIDEN_Enabled (0x1UL)
    #define VDETVS0V8_DFT_TCFG_DISCONNECTSENSE_Enabled (0x1UL)

    #define VDETVS0V8_DFT_TCFG_PGDCOMPARATOR_Disabled (0x0UL)
    #define VDETVS0V8_DFT_TCFG_BODCOMPARATOR_Disabled (0x0UL)
    #define VDETVS0V8_DFT_TCFG_BODCOMPARATOR1UA_Disabled (0x0UL)
    #define VDETVS0V8_DFT_TCFG_UNLOCKBOD_Disabled (0x0UL)
    #define VDETVS0V8_DFT_TCFG_OVERRIDEN_Disabled (0x0UL)
    #define VDETVS0V8_DFT_TCFG_DISCONNECTSENSE_Disabled (0x0UL)

    #define VDETVS0V8_DFT_DTB0CONFIG_SELMUX_Spare0 (0x0UL)
    #define VDETVS0V8_DFT_DTB0CONFIG_SELMUX_Spare1 (0x5UL)
    #define VDETVS0V8_DFT_DTB0CONFIG_SELMUX_Spare2 (0x7UL)

    #define VDETVS0V8_DFT_DTB1CONFIG_SELMUX_Spare0 (0x0UL)

    #if defined(MRAMC_CONFIGNVR_PAGE_LOCK_Pos)
    /* This symbols mapping will be provided with MDK when LiliumFP1 and Halti targets will
    * be updated to newer MDK. Currently it's more proficient to add this fix in mdk_fixups.h
    */
        #define MRAMC_CONFIGNVR_PAGE_Lock_Pos          MRAMC_CONFIGNVR_PAGE_LOCK_Pos
        #define MRAMC_CONFIGNVR_PAGE_Lock_Msk          MRAMC_CONFIGNVR_PAGE_LOCK_Msk
        #define MRAMC_CONFIGNVR_PAGE_Lock_Min          MRAMC_CONFIGNVR_PAGE_LOCK_Min
        #define MRAMC_CONFIGNVR_PAGE_Lock_Max          MRAMC_CONFIGNVR_PAGE_LOCK_Max
        #define MRAMC_CONFIGNVR_PAGE_Lock_LockDisabled MRAMC_CONFIGNVR_PAGE_LOCK_LockDisabled
        #define MRAMC_CONFIGNVR_PAGE_Lock_LockEnabled  MRAMC_CONFIGNVR_PAGE_LOCK_LockEnabled
    #endif

    // Haltium plaftorms do not have LPCOMP_FEATURE_HYST_PRESENT defined
    #if defined(LPCOMP_HYST_HYST_Msk) && defined(HALTIUM_XXAA)
        #define LPCOMP_FEATURE_HYST_PRESENT
    #endif

    #define MEMCONF_BLOCKTYPE_TRIM_MEMTRIM_Msk (0x0000FFFFUL)
    #define MEMCONF_BLOCKTYPE_TRIM_MEMRETTRIM_Msk (0xFFFF0000UL)
    #define MEMCONF_BLOCKTYPE_TRIM_MEMTRIM_Pos 16

    #define RADIO_TIMING_RU_Default 0
    #define RADIO_TIMING_RU_Fast    1

#endif

/**************************************************************************************************/
/* End fixups section for HALTIUM_XXAA                                                            */
/**************************************************************************************************/

/**************************************************************************************************/
/* Start fixups section for NRF54H20_ENGA                                                         */
/**************************************************************************************************/

#if defined(NRF54H20_ENGA_XXAA)

    typedef struct {                                   /*!< RESETHUB Structure                                                   */
        __OM uint32_t TASKS_RESETDOMAIN[8];              /*!< (@ 0x00000000) Reset the domain [n], where n is domain id.           */
        __IM uint32_t RESERVED[56];
        __IOM uint32_t EVENTS_DOMAINRESET[8];            /*!< (@ 0x00000100) Domain [n] was reset, where n is domain id.           */
        __IM uint32_t RESERVED1[120];
        __IOM uint32_t INTEN;                            /*!< (@ 0x00000300) Enable or disable interrupt                           */
        __IOM uint32_t INTENSET;                         /*!< (@ 0x00000304) Enable interrupt                                      */
        __IOM uint32_t INTENCLR;                         /*!< (@ 0x00000308) Disable interrupt                                     */
        __IM uint32_t INTPEND;                           /*!< (@ 0x0000030C) Pending interrupts                                    */
        __IM uint32_t RESERVED2[60];
        __IOM NRF_RESETHUB_RESETREAS_Type RESETREAS;     /*!< (@ 0x00000400) (unspecified)                                         */
        __IM uint32_t RESERVED3[55];
        __IOM uint32_t RESETMASK;                        /*!< (@ 0x00000500) Mask the reset request for a domain by itself.        */
        __IOM uint32_t CROSSDOMAINRESET;                 /*!< (@ 0x00000504) Enable cross domain resets.                           */
        __IOM uint32_t GPREGRET;                         /*!< (@ 0x00000508) General purpose retention register.                   */
    } NRF_RESETHUB_Type_fixed;                         /*!< Size = 1292 (0x50C)                                                  */

    #if defined(NRF_RESETHUB_S)
        #undef NRF_RESETHUB_S
        #define NRF_RESETHUB_S ((NRF_RESETHUB_Type_fixed*) NRF_RESETHUB_S_BASE)
    #endif
    #if defined(NRF_RESETHUB_NS)
        #undef NRF_RESETHUB_NS
        #define NRF_RESETHUB_NS ((NRF_RESETHUB_Type_fixed*) NRF_RESETHUB_NS_BASE)
    #endif

    #define NRF_RESETHUB_Type NRF_RESETHUB_Type_fixed

    #define SPIM120_FEATURE_HARDWARE_CSN_PRESENT 0
    #define SPIM121_FEATURE_HARDWARE_CSN_PRESENT 0
    #define SPIM130_FEATURE_HARDWARE_CSN_PRESENT 0
    #define SPIM131_FEATURE_HARDWARE_CSN_PRESENT 0
    #define SPIM132_FEATURE_HARDWARE_CSN_PRESENT 0
    #define SPIM133_FEATURE_HARDWARE_CSN_PRESENT 0
    #define SPIM134_FEATURE_HARDWARE_CSN_PRESENT 0
    #define SPIM135_FEATURE_HARDWARE_CSN_PRESENT 0
    #define SPIM136_FEATURE_HARDWARE_CSN_PRESENT 0
    #define SPIM137_FEATURE_HARDWARE_CSN_PRESENT 0

    #define SPIM120_FEATURE_RXDELAY_PRESENT  0
    #define SPIM121_FEATURE_RXDELAY_PRESENT  0
    #define SPIM130_FEATURE_RXDELAY_PRESENT  0
    #define SPIM131_FEATURE_RXDELAY_PRESENT  0
    #define SPIM132_FEATURE_RXDELAY_PRESENT  0
    #define SPIM133_FEATURE_RXDELAY_PRESENT  0
    #define SPIM134_FEATURE_RXDELAY_PRESENT  0
    #define SPIM135_FEATURE_RXDELAY_PRESENT  0
    #define SPIM136_FEATURE_RXDELAY_PRESENT  0
    #define SPIM137_FEATURE_RXDELAY_PRESENT  0

    #define SPIM120_EASYDMA_MAXCNT_SIZE 16
    #define SPIM121_EASYDMA_MAXCNT_SIZE 16
    #define SPIM130_EASYDMA_MAXCNT_SIZE 16
    #define SPIM131_EASYDMA_MAXCNT_SIZE 16
    #define SPIM132_EASYDMA_MAXCNT_SIZE 16
    #define SPIM133_EASYDMA_MAXCNT_SIZE 16
    #define SPIM134_EASYDMA_MAXCNT_SIZE 16
    #define SPIM135_EASYDMA_MAXCNT_SIZE 16
    #define SPIM136_EASYDMA_MAXCNT_SIZE 16
    #define SPIM137_EASYDMA_MAXCNT_SIZE 16

    #define TWIM120_EASYDMA_MAXCNT_SIZE 16
    #define TWIM130_EASYDMA_MAXCNT_SIZE 16
    #define TWIM131_EASYDMA_MAXCNT_SIZE 16
    #define TWIM132_EASYDMA_MAXCNT_SIZE 16
    #define TWIM133_EASYDMA_MAXCNT_SIZE 16
    #define TWIM134_EASYDMA_MAXCNT_SIZE 16
    #define TWIM135_EASYDMA_MAXCNT_SIZE 16
    #define TWIM136_EASYDMA_MAXCNT_SIZE 16
    #define TWIM137_EASYDMA_MAXCNT_SIZE 16

    #define TWIS130_EASYDMA_MAXCNT_SIZE 16
    #define TWIS131_EASYDMA_MAXCNT_SIZE 16
    #define TWIS132_EASYDMA_MAXCNT_SIZE 16
    #define TWIS133_EASYDMA_MAXCNT_SIZE 16
    #define TWIS134_EASYDMA_MAXCNT_SIZE 16
    #define TWIS135_EASYDMA_MAXCNT_SIZE 16
    #define TWIS136_EASYDMA_MAXCNT_SIZE 16
    #define TWIS137_EASYDMA_MAXCNT_SIZE 16

    #define SPIS120_EASYDMA_MAXCNT_SIZE 16
    #define SPIS130_EASYDMA_MAXCNT_SIZE 16
    #define SPIS131_EASYDMA_MAXCNT_SIZE 16
    #define SPIS132_EASYDMA_MAXCNT_SIZE 16
    #define SPIS133_EASYDMA_MAXCNT_SIZE 16
    #define SPIS134_EASYDMA_MAXCNT_SIZE 16
    #define SPIS135_EASYDMA_MAXCNT_SIZE 16
    #define SPIS136_EASYDMA_MAXCNT_SIZE 16
    #define SPIS137_EASYDMA_MAXCNT_SIZE 16

    #define SPIM120_MAX_DATARATE 32
    #define SPIM121_MAX_DATARATE 32
    #define SPIM130_MAX_DATARATE 8
    #define SPIM131_MAX_DATARATE 8
    #define SPIM132_MAX_DATARATE 8
    #define SPIM133_MAX_DATARATE 8
    #define SPIM134_MAX_DATARATE 8
    #define SPIM135_MAX_DATARATE 8
    #define SPIM136_MAX_DATARATE 8
    #define SPIM137_MAX_DATARATE 8

    #define TIMER020_CC_NUM 6
    #define TIMER021_CC_NUM 6
    #define TIMER022_CC_NUM 6
    #define TIMER120_CC_NUM 6
    #define TIMER121_CC_NUM 6
    #define TIMER130_CC_NUM 6
    #define TIMER131_CC_NUM 6
    #define TIMER132_CC_NUM 6
    #define TIMER133_CC_NUM 6
    #define TIMER134_CC_NUM 6
    #define TIMER135_CC_NUM 6
    #define TIMER136_CC_NUM 6
    #define TIMER137_CC_NUM 6

    #define TIMER020_MAX_SIZE 32
    #define TIMER021_MAX_SIZE 32
    #define TIMER022_MAX_SIZE 32
    #define TIMER120_MAX_SIZE 32
    #define TIMER121_MAX_SIZE 32
    #define TIMER130_MAX_SIZE 32
    #define TIMER131_MAX_SIZE 32
    #define TIMER132_MAX_SIZE 32
    #define TIMER133_MAX_SIZE 32
    #define TIMER134_MAX_SIZE 32
    #define TIMER135_MAX_SIZE 32
    #define TIMER136_MAX_SIZE 32
    #define TIMER137_MAX_SIZE 32

    #define RTC130_CC_NUM 4
    #define RTC131_CC_NUM 4

    #define EGU020_CH_NUM 16

    #define P0_PIN_NUM (12)
    #define P1_PIN_NUM (12)
    #define P2_PIN_NUM (12)
    #define P6_PIN_NUM (14)
    #define P7_PIN_NUM (8)
    #define P9_PIN_NUM (6)
    #define P0_PINS_PRESENT 0xFFFUL
    #define P1_PINS_PRESENT 0xFFFUL
    #define P2_PINS_PRESENT 0xFFFUL
    #define P6_PINS_PRESENT 0x3FFFUL
    #define P7_PINS_PRESENT 0xFFUL
    #define P9_PINS_PRESENT 0x3FUL

    #define P0_FEATURE_PINS_PRESENT P0_PINS_PRESENT
    #define P1_FEATURE_PINS_PRESENT P1_PINS_PRESENT
    #define P2_FEATURE_PINS_PRESENT P2_PINS_PRESENT
    #define P6_FEATURE_PINS_PRESENT P6_PINS_PRESENT
    #define P7_FEATURE_PINS_PRESENT P7_PINS_PRESENT
    #define P9_FEATURE_PINS_PRESENT P9_PINS_PRESENT

    #if defined(UARTE120_EASYDMA_MAXCNT_SIZE_MAX) && !defined(UARTE120_EASYDMA_MAXCNT_SIZE)
        #define UARTE120_EASYDMA_MAXCNT_SIZE UARTE120_EASYDMA_MAXCNT_SIZE_MAX
    #endif

    #if defined(UARTE130_EASYDMA_MAXCNT_SIZE_MAX) && !defined(UARTE130_EASYDMA_MAXCNT_SIZE)
        #define UARTE130_EASYDMA_MAXCNT_SIZE UARTE130_EASYDMA_MAXCNT_SIZE_MAX
    #endif

    #if defined(UARTE131_EASYDMA_MAXCNT_SIZE_MAX) && !defined(UARTE131_EASYDMA_MAXCNT_SIZE)
        #define UARTE131_EASYDMA_MAXCNT_SIZE UARTE131_EASYDMA_MAXCNT_SIZE_MAX
    #endif

    #if defined(UARTE132_EASYDMA_MAXCNT_SIZE_MAX) && !defined(UARTE132_EASYDMA_MAXCNT_SIZE)
        #define UARTE132_EASYDMA_MAXCNT_SIZE UARTE132_EASYDMA_MAXCNT_SIZE_MAX
    #endif

    #if defined(UARTE133_EASYDMA_MAXCNT_SIZE_MAX) && !defined(UARTE133_EASYDMA_MAXCNT_SIZE)
        #define UARTE133_EASYDMA_MAXCNT_SIZE UARTE133_EASYDMA_MAXCNT_SIZE_MAX
    #endif

    #if defined(UARTE134_EASYDMA_MAXCNT_SIZE_MAX) && !defined(UARTE134_EASYDMA_MAXCNT_SIZE)
        #define UARTE134_EASYDMA_MAXCNT_SIZE UARTE134_EASYDMA_MAXCNT_SIZE_MAX
    #endif

    #if defined(UARTE135_EASYDMA_MAXCNT_SIZE_MAX) && !defined(UARTE135_EASYDMA_MAXCNT_SIZE)
        #define UARTE135_EASYDMA_MAXCNT_SIZE UARTE135_EASYDMA_MAXCNT_SIZE_MAX
    #endif

    #if defined(UARTE136_EASYDMA_MAXCNT_SIZE_MAX) && !defined(UARTE136_EASYDMA_MAXCNT_SIZE)
        #define UARTE136_EASYDMA_MAXCNT_SIZE UARTE136_EASYDMA_MAXCNT_SIZE_MAX
    #endif

    #if defined(UARTE137_EASYDMA_MAXCNT_SIZE_MAX) && !defined(UARTE137_EASYDMA_MAXCNT_SIZE)
        #define UARTE137_EASYDMA_MAXCNT_SIZE UARTE137_EASYDMA_MAXCNT_SIZE_MAX
    #endif

#endif

/**************************************************************************************************/
/* End fixups section for NRF54H20_ENGA                                                           */
/**************************************************************************************************/

/**************************************************************************************************/
/* Start fixups section for NRF54H20_XXAA (LILIUMFP1)                                             */
/**************************************************************************************************/

#if defined(LILIUMFP1_XXAA)

    #define RTC130_CC_NUM 4
    #define RTC131_CC_NUM 4

    #define TIMER020_CC_NUM 6
    #define TIMER021_CC_NUM 6
    #define TIMER022_CC_NUM 6
    #define TIMER120_CC_NUM 6
    #define TIMER121_CC_NUM 6
    #define TIMER130_CC_NUM 6
    #define TIMER131_CC_NUM 6
    #define TIMER132_CC_NUM 6
    #define TIMER133_CC_NUM 6
    #define TIMER134_CC_NUM 6
    #define TIMER135_CC_NUM 6
    #define TIMER136_CC_NUM 6
    #define TIMER137_CC_NUM 6

    #define TIMER020_MAX_SIZE 32
    #define TIMER021_MAX_SIZE 32
    #define TIMER022_MAX_SIZE 32
    #define TIMER120_MAX_SIZE 32
    #define TIMER121_MAX_SIZE 32
    #define TIMER130_MAX_SIZE 32
    #define TIMER131_MAX_SIZE 32
    #define TIMER132_MAX_SIZE 32
    #define TIMER133_MAX_SIZE 32
    #define TIMER134_MAX_SIZE 32
    #define TIMER135_MAX_SIZE 32
    #define TIMER136_MAX_SIZE 32
    #define TIMER137_MAX_SIZE 32

    /* At some point (ver. 8.52.0 or 8.51.0, depending on flavor) MDK introduced a fix to typo
    * in VPRCSR_MCAUSE_EXECPTIONCODE_* symbols that reworded incorrect _EXECPTIONCODE_
    * to _EXCEPTIONCODE_. This causes a lot of chaos in enums as devices using older MDK
    * need to stick to previous, invalid naming. To avoid this chaos in HALs,
    * fixup these symbols here instead.
    */
    #if defined(VPRCSR_MCAUSE_EXECPTIONCODE_INSTADDRMISALIGN) && \
        !defined(VPRCSR_MCAUSE_EXCEPTIONCODE_INSTADDRMISALIGN)
        #define VPRCSR_MCAUSE_EXCEPTIONCODE_INSTADDRMISALIGN VPRCSR_MCAUSE_EXECPTIONCODE_INSTADDRMISALIGN
    #endif

    #if defined(VPRCSR_MCAUSE_EXECPTIONCODE_INSTACCESSFAULT) && \
        !defined(VPRCSR_MCAUSE_EXCEPTIONCODE_INSTACCESSFAULT)
        #define VPRCSR_MCAUSE_EXCEPTIONCODE_INSTACCESSFAULT VPRCSR_MCAUSE_EXECPTIONCODE_INSTACCESSFAULT
    #endif

    #if defined(VPRCSR_MCAUSE_EXECPTIONCODE_ILLEGALINST) && \
        !defined(VPRCSR_MCAUSE_EXCEPTIONCODE_ILLEGALINST)
        #define VPRCSR_MCAUSE_EXCEPTIONCODE_ILLEGALINST VPRCSR_MCAUSE_EXECPTIONCODE_ILLEGALINST
    #endif

    #if defined(VPRCSR_MCAUSE_EXECPTIONCODE_BKPT) && \
        !defined(VPRCSR_MCAUSE_EXCEPTIONCODE_BKPT)
        #define VPRCSR_MCAUSE_EXCEPTIONCODE_BKPT VPRCSR_MCAUSE_EXECPTIONCODE_BKPT
    #endif

    #if defined(VPRCSR_MCAUSE_EXECPTIONCODE_LOADADDRMISALIGN) && \
        !defined(VPRCSR_MCAUSE_EXCEPTIONCODE_LOADADDRMISALIGN)
        #define VPRCSR_MCAUSE_EXCEPTIONCODE_LOADADDRMISALIGN VPRCSR_MCAUSE_EXECPTIONCODE_LOADADDRMISALIGN
    #endif

    #if defined(VPRCSR_MCAUSE_EXECPTIONCODE_LOADACCESSFAULT) && \
        !defined(VPRCSR_MCAUSE_EXCEPTIONCODE_LOADACCESSFAULT)
        #define VPRCSR_MCAUSE_EXCEPTIONCODE_LOADACCESSFAULT VPRCSR_MCAUSE_EXECPTIONCODE_LOADACCESSFAULT
    #endif

    #if defined(VPRCSR_MCAUSE_EXECPTIONCODE_STOREADDRMISALIGN) && \
        !defined(VPRCSR_MCAUSE_EXCEPTIONCODE_STOREADDRMISALIGN)
        #define VPRCSR_MCAUSE_EXCEPTIONCODE_STOREADDRMISALIGN VPRCSR_MCAUSE_EXECPTIONCODE_STOREADDRMISALIGN
    #endif

    #if defined(VPRCSR_MCAUSE_EXECPTIONCODE_STOREACCESSFAULT) && \
        !defined(VPRCSR_MCAUSE_EXCEPTIONCODE_STOREACCESSFAULT)
        #define VPRCSR_MCAUSE_EXCEPTIONCODE_STOREACCESSFAULT VPRCSR_MCAUSE_EXECPTIONCODE_STOREACCESSFAULT
    #endif

    #if defined(VPRCSR_MCAUSE_EXECPTIONCODE_ECALLUMODE) && \
        !defined(VPRCSR_MCAUSE_EXCEPTIONCODE_ECALLUMODE)
        #define VPRCSR_MCAUSE_EXCEPTIONCODE_ECALLUMODE VPRCSR_MCAUSE_EXECPTIONCODE_ECALLUMODE
    #endif

    #if defined(VPRCSR_MCAUSE_EXECPTIONCODE_ECALLSMODE) && \
        !defined(VPRCSR_MCAUSE_EXCEPTIONCODE_ECALLSMODE)
        #define VPRCSR_MCAUSE_EXCEPTIONCODE_ECALLSMODE VPRCSR_MCAUSE_EXECPTIONCODE_ECALLSMODE
    #endif

    #if defined(VPRCSR_MCAUSE_EXECPTIONCODE_INSTPAGEFAULT) && \
        !defined(VPRCSR_MCAUSE_EXCEPTIONCODE_INSTPAGEFAULT)
        #define VPRCSR_MCAUSE_EXCEPTIONCODE_INSTPAGEFAULT VPRCSR_MCAUSE_EXECPTIONCODE_INSTPAGEFAULT
    #endif

    #if defined(VPRCSR_MCAUSE_EXECPTIONCODE_LOADPAGEFAULT) && \
        !defined(VPRCSR_MCAUSE_EXCEPTIONCODE_LOADPAGEFAULT)
        #define VPRCSR_MCAUSE_EXCEPTIONCODE_LOADPAGEFAULT VPRCSR_MCAUSE_EXECPTIONCODE_LOADPAGEFAULT
    #endif

    #if defined(VPRCSR_MCAUSE_EXECPTIONCODE_STOREPAGEFAULT) && \
        !defined(VPRCSR_MCAUSE_EXCEPTIONCODE_STOREPAGEFAULT)
        #define VPRCSR_MCAUSE_EXCEPTIONCODE_STOREPAGEFAULT VPRCSR_MCAUSE_EXECPTIONCODE_STOREPAGEFAULT
    #endif

    #if defined(VPRCSR_MCAUSE_EXECPTIONCODE_ECALLMMODE) && \
        !defined(VPRCSR_MCAUSE_EXCEPTIONCODE_ECALLMMODE)
        #define VPRCSR_MCAUSE_EXCEPTIONCODE_ECALLMMODE VPRCSR_MCAUSE_EXECPTIONCODE_ECALLMMODE
    #endif

    #if defined(VPRCSR_MCAUSE_EXECPTIONCODE_BUSFAULTSTACKING) && \
        !defined(VPRCSR_MCAUSE_EXCEPTIONCODE_BUSFAULTSTACKING)
        #define VPRCSR_MCAUSE_EXCEPTIONCODE_BUSFAULTSTACKING VPRCSR_MCAUSE_EXECPTIONCODE_BUSFAULTSTACKING
    #endif

    #if defined(VPRCSR_MCAUSE_EXECPTIONCODE_UNALIGNSTACKING) && \
        !defined(VPRCSR_MCAUSE_EXCEPTIONCODE_UNALIGNSTACKING)
        #define VPRCSR_MCAUSE_EXCEPTIONCODE_UNALIGNSTACKING VPRCSR_MCAUSE_EXECPTIONCODE_UNALIGNSTACKING
    #endif

    #if defined(VPRCSR_MCAUSE_EXECPTIONCODE_VECTORFAULT) && \
        !defined(VPRCSR_MCAUSE_EXCEPTIONCODE_VECTORFAULT)
        #define VPRCSR_MCAUSE_EXCEPTIONCODE_VECTORFAULT VPRCSR_MCAUSE_EXECPTIONCODE_VECTORFAULT
    #endif

    #if defined(VPRCSR_MCAUSE_EXECPTIONCODE_UNALIGNSTACKINGEXC) && \
        !defined(VPRCSR_MCAUSE_EXCEPTIONCODE_UNALIGNSTACKINGEXC)
        #define VPRCSR_MCAUSE_EXCEPTIONCODE_UNALIGNSTACKINGEXC VPRCSR_MCAUSE_EXECPTIONCODE_UNALIGNSTACKINGEXC
    #endif

    #if defined(VPRCSR_MCAUSE_EXECPTIONCODE_MISALIGNSTACKING) && \
        !defined(VPRCSR_MCAUSE_EXCEPTIONCODE_MISALIGNSTACKING)
        #define VPRCSR_MCAUSE_EXCEPTIONCODE_MISALIGNSTACKING VPRCSR_MCAUSE_EXECPTIONCODE_MISALIGNSTACKING
    #endif

    #if defined(VPRCSR_MCAUSE_EXECPTIONCODE_INTVECTORFAULT) && \
        !defined(VPRCSR_MCAUSE_EXCEPTIONCODE_INTVECTORFAULT)
        #define VPRCSR_MCAUSE_EXCEPTIONCODE_INTVECTORFAULT VPRCSR_MCAUSE_EXECPTIONCODE_INTVECTORFAULT
    #endif

    #if defined(VPRCSR_MCAUSE_EXECPTIONCODE_STACKINGEXCFAULT) && \
        !defined(VPRCSR_MCAUSE_EXCEPTIONCODE_STACKINGEXCFAULT)
        #define VPRCSR_MCAUSE_EXCEPTIONCODE_STACKINGEXCFAULT VPRCSR_MCAUSE_EXECPTIONCODE_STACKINGEXCFAULT
    #endif

    #if defined(VPRCSR_MCAUSE_EXECPTIONCODE_BUSFAULTUNSTACKING) && \
        !defined(VPRCSR_MCAUSE_EXCEPTIONCODE_BUSFAULTUNSTACKING)
        #define VPRCSR_MCAUSE_EXCEPTIONCODE_BUSFAULTUNSTACKING VPRCSR_MCAUSE_EXECPTIONCODE_BUSFAULTUNSTACKING
    #endif

    #if defined(VPRCSR_MCAUSE_EXECPTIONCODE_STORETIMEOUTFAULT) && \
        !defined(VPRCSR_MCAUSE_EXCEPTIONCODE_STORETIMEOUTFAULT)
        #define VPRCSR_MCAUSE_EXCEPTIONCODE_STORETIMEOUTFAULT VPRCSR_MCAUSE_EXECPTIONCODE_STORETIMEOUTFAULT
    #endif

    #if defined(VPRCSR_MCAUSE_EXECPTIONCODE_LOADTIMEOUTFAULT) && \
        !defined(VPRCSR_MCAUSE_EXCEPTIONCODE_LOADTIMEOUTFAULT)
        #define VPRCSR_MCAUSE_EXCEPTIONCODE_LOADTIMEOUTFAULT VPRCSR_MCAUSE_EXECPTIONCODE_LOADTIMEOUTFAULT
    #endif

    #if defined(VPRCSR_MCAUSE_EXECPTIONCODE_Msk) && !defined(VPRCSR_MCAUSE_EXCEPTIONCODE_Msk)
        #define VPRCSR_MCAUSE_EXCEPTIONCODE_Msk VPRCSR_MCAUSE_EXECPTIONCODE_Msk
    #endif

    #define P0_FEATURE_PINS_PRESENT P0_PINS_PRESENT
    #define P1_FEATURE_PINS_PRESENT P1_PINS_PRESENT
    #define P2_FEATURE_PINS_PRESENT P2_PINS_PRESENT
    #define P6_FEATURE_PINS_PRESENT P6_PINS_PRESENT
    #define P7_FEATURE_PINS_PRESENT P7_PINS_PRESENT
    #define P9_FEATURE_PINS_PRESENT P9_PINS_PRESENT

    /* TODO: MLT-3907 */
    /* ===================================================== Struct AAR_OUT ====================================================== */
    /**
     * @brief OUT [AAR_OUT] OUT EasyDMA channel
     */
    typedef struct {
        __IOM uint32_t  PTR;                               /*!< (@ 0x00000000) Output pointer                                        */
        __IM  uint32_t  AMOUNT;                            /*!< (@ 0x00000004) Number of bytes transferred in the last transaction   */
    } NRF_AAR_OUT_Type;                                  /*!< Size = 8 (0x008)                                                     */

    /* AAR_OUT_PTR: Output pointer */
    #define AAR_OUT_PTR_ResetValue (0x00000000UL)      /*!< Reset value of PTR register.                                         */

    /* PTR @Bits 0..31 : Output pointer */
    #define AAR_OUT_PTR_PTR_Pos (0UL)                  /*!< Position of PTR field.                                               */
    #define AAR_OUT_PTR_PTR_Msk (0xFFFFFFFFUL << AAR_OUT_PTR_PTR_Pos) /*!< Bit mask of PTR field.                                */

    /* AAR_OUT_AMOUNT: Number of bytes transferred in the last transaction */
    #define AAR_OUT_AMOUNT_ResetValue (0x00000000UL)   /*!< Reset value of AMOUNT register.                                      */

    /* AMOUNT @Bits 0..7 : Number of bytes written to memory after triggering the START task. */
    #define AAR_OUT_AMOUNT_AMOUNT_Pos (0UL)            /*!< Position of AMOUNT field.                                            */
    #define AAR_OUT_AMOUNT_AMOUNT_Msk (0xFFUL << AAR_OUT_AMOUNT_AMOUNT_Pos) /*!< Bit mask of AMOUNT field.                       */
    #define AAR_OUT_AMOUNT_AMOUNT_Min (0x1UL)          /*!< Min value of AMOUNT field.                                           */
    #define AAR_OUT_AMOUNT_AMOUNT_Max (0xFFUL)         /*!< Max size of AMOUNT field.                                            */

    /* AAR_MAXRESOLVED: Maximum number of IRKs to resolve */
    #define AAR_MAXRESOLVED_ResetValue (0x00000001UL)  /*!< Reset value of MAXRESOLVED register.                                 */

    /* MAXRESOLVED @Bits 0..11 : The maximum number of IRKs to resolve */
    #define AAR_MAXRESOLVED_MAXRESOLVED_Pos (0UL)      /*!< Position of MAXRESOLVED field.                                       */
    #define AAR_MAXRESOLVED_MAXRESOLVED_Msk (0xFFFUL << AAR_MAXRESOLVED_MAXRESOLVED_Pos) /*!< Bit mask of MAXRESOLVED field.     */

    /* ======================================================= Struct AAR ======================================================== */
    /**
     * @brief Accelerated Address Resolver
     */
    typedef struct {                                   /*!< AAR Structure                                                        */
        __OM uint32_t TASKS_START;                       /*!< (@ 0x00000000) Start resolving addresses based on IRKs specified in
                                                                            the IRK data structure*/
        __OM uint32_t TASKS_STOP;                        /*!< (@ 0x00000004) Stop resolving addresses                              */
        __IM uint32_t RESERVED[30];
        __IOM uint32_t SUBSCRIBE_START;                  /*!< (@ 0x00000080) Subscribe configuration for task START                */
        __IOM uint32_t SUBSCRIBE_STOP;                   /*!< (@ 0x00000084) Subscribe configuration for task STOP                 */
        __IM uint32_t RESERVED1[30];
        __IOM uint32_t EVENTS_END;                       /*!< (@ 0x00000100) Address resolution procedure complete                 */
        __IOM uint32_t EVENTS_RESOLVED;                  /*!< (@ 0x00000104) Address resolved                                      */
        __IOM uint32_t EVENTS_NOTRESOLVED;               /*!< (@ 0x00000108) Address not resolved                                  */
        __IM uint32_t RESERVED2[29];
        __IOM uint32_t PUBLISH_END;                      /*!< (@ 0x00000180) Publish configuration for event END                   */
        __IOM uint32_t PUBLISH_RESOLVED;                 /*!< (@ 0x00000184) Publish configuration for event RESOLVED              */
        __IOM uint32_t PUBLISH_NOTRESOLVED;              /*!< (@ 0x00000188) Publish configuration for event NOTRESOLVED           */
        __IM uint32_t RESERVED3[93];
        __IOM uint32_t INTEN;                            /*!< (@ 0x00000300) Enable or disable interrupt                           */
        __IOM uint32_t INTENSET;                         /*!< (@ 0x00000304) Enable interrupt                                      */
        __IOM uint32_t INTENCLR;                         /*!< (@ 0x00000308) Disable interrupt                                     */
        __IM uint32_t RESERVED4[125];
        __IOM uint32_t ENABLE;                           /*!< (@ 0x00000500) Enable AAR                                            */
        __IM uint32_t RESERVED5;
        __IOM uint32_t MAXRESOLVED;                      /*!< (@ 0x00000508) Maximum number of IRKs to resolve                     */
        __IM uint32_t RESERVED6[9];
        __IOM NRF_AAR_IN_Type IN;                        /*!< (@ 0x00000530) IN EasyDMA channel                                    */
        __IM uint32_t RESERVED7;
        __IOM NRF_AAR_OUT_Type OUT;                      /*!< (@ 0x00000538) OUT EasyDMA channel                                   */
    } NRF_AAR_Type_fixed;                                    /*!< Size = 1344 (0x540)                                                  */

    #if defined(NRF_RADIOCORE_AAR030_NS)
        #undef NRF_RADIOCORE_AAR030_NS
        #define NRF_RADIOCORE_AAR030_NS ((NRF_AAR_Type_fixed*) NRF_RADIOCORE_AAR030_NS_BASE)
    #endif
    #if defined(NRF_RADIOCORE_AAR030_S)
        #undef NRF_RADIOCORE_AAR030_S
        #define NRF_RADIOCORE_AAR030_S ((NRF_AAR_Type_fixed*) NRF_RADIOCORE_AAR030_S_BASE)
    #endif
    #if defined(NRF_RADIOCORE_AAR031_NS)
        #undef NRF_RADIOCORE_AAR031_NS
        #define NRF_RADIOCORE_AAR031_NS ((NRF_AAR_Type_fixed*) NRF_RADIOCORE_AAR031_NS_BASE)
    #endif
    #if defined(NRF_RADIOCORE_AAR031_S)
        #undef NRF_RADIOCORE_AAR031_S
        #define NRF_RADIOCORE_AAR031_S ((NRF_AAR_Type_fixed*) NRF_RADIOCORE_AAR031_S_BASE)
    #endif

    /* SPU_FEATURE_BELLS_PROCESSOR_INTERRUPT: Configuration of features for interrupt register pair [(o * 2) + 1:o * 2] of Processor
                                            ID n */

    #define SPU_FEATURE_BELLS_PROCESSOR_INTERRUPT_MaxCount (16UL) /*!< Max size of INTERRUPT[16] array.                          */
    #define SPU_FEATURE_BELLS_PROCESSOR_INTERRUPT_ResetValue (0x00000000UL) /*!< Reset value of INTERRUPT[16] register.          */

    /* SECATTR @Bit 4 : SECATTR feature */
    #define SPU_FEATURE_BELLS_PROCESSOR_INTERRUPT_SECATTR_Pos (4UL) /*!< Position of SECATTR field.                              */
    #define SPU_FEATURE_BELLS_PROCESSOR_INTERRUPT_SECATTR_Msk (0x1UL << SPU_FEATURE_BELLS_PROCESSOR_INTERRUPT_SECATTR_Pos) /*!<
                                                                            Bit mask of SECATTR field.*/
    #define SPU_FEATURE_BELLS_PROCESSOR_INTERRUPT_SECATTR_Min (0x0UL) /*!< Min enumerator value of SECATTR field.                */
    #define SPU_FEATURE_BELLS_PROCESSOR_INTERRUPT_SECATTR_Max (0x1UL) /*!< Max enumerator value of SECATTR field.                */
    #define SPU_FEATURE_BELLS_PROCESSOR_INTERRUPT_SECATTR_NonSecure (0x0UL) /*!< Feature is available for non-secure usage       */
    #define SPU_FEATURE_BELLS_PROCESSOR_INTERRUPT_SECATTR_Secure (0x1UL) /*!< Feature is reserved for secure usage               */

    /* LOCK @Bit 8 : LOCK feature */
    #define SPU_FEATURE_BELLS_PROCESSOR_INTERRUPT_LOCK_Pos (8UL) /*!< Position of LOCK field.                                    */
    #define SPU_FEATURE_BELLS_PROCESSOR_INTERRUPT_LOCK_Msk (0x1UL << SPU_FEATURE_BELLS_PROCESSOR_INTERRUPT_LOCK_Pos) /*!< Bit mask
                                                                            of LOCK field.*/
    #define SPU_FEATURE_BELLS_PROCESSOR_INTERRUPT_LOCK_Min (0x0UL) /*!< Min enumerator value of LOCK field.                      */
    #define SPU_FEATURE_BELLS_PROCESSOR_INTERRUPT_LOCK_Max (0x1UL) /*!< Max enumerator value of LOCK field.                      */
    #define SPU_FEATURE_BELLS_PROCESSOR_INTERRUPT_LOCK_Unlocked (0x0UL) /*!< Feature permissions can be updated                  */
    #define SPU_FEATURE_BELLS_PROCESSOR_INTERRUPT_LOCK_Locked (0x1UL) /*!< Feature permissions can not be changed until the next
                                                                        reset*/

    /* BLOCK @Bit 12 : BLOCK feature */
    #define SPU_FEATURE_BELLS_PROCESSOR_INTERRUPT_BLOCK_Pos (12UL) /*!< Position of BLOCK field.                                 */
    #define SPU_FEATURE_BELLS_PROCESSOR_INTERRUPT_BLOCK_Msk (0x1UL << SPU_FEATURE_BELLS_PROCESSOR_INTERRUPT_BLOCK_Pos) /*!< Bit
                                                                            mask of BLOCK field.*/
    #define SPU_FEATURE_BELLS_PROCESSOR_INTERRUPT_BLOCK_Min (0x0UL) /*!< Min enumerator value of BLOCK field.                    */
    #define SPU_FEATURE_BELLS_PROCESSOR_INTERRUPT_BLOCK_Max (0x1UL) /*!< Max enumerator value of BLOCK field.                    */
    #define SPU_FEATURE_BELLS_PROCESSOR_INTERRUPT_BLOCK_Available (0x0UL) /*!< Feature is accessible                             */
    #define SPU_FEATURE_BELLS_PROCESSOR_INTERRUPT_BLOCK_Blocked (0x1UL) /*!< Feature cannot be accessed until next reset         */

    /* OWNERID @Bits 16..19 : Feature owner ID */
    #define SPU_FEATURE_BELLS_PROCESSOR_INTERRUPT_OWNERID_Pos (16UL) /*!< Position of OWNERID field.                             */
    #define SPU_FEATURE_BELLS_PROCESSOR_INTERRUPT_OWNERID_Msk (0xFUL << SPU_FEATURE_BELLS_PROCESSOR_INTERRUPT_OWNERID_Pos) /*!<
                                                                            Bit mask of OWNERID field.*/
    #define SPU_FEATURE_BELLS_PROCESSOR_INTERRUPT_OWNERID_Min (0x0UL) /*!< Min value of OWNERID field.                           */
    #define SPU_FEATURE_BELLS_PROCESSOR_INTERRUPT_OWNERID_Max (0xFUL) /*!< Max size of OWNERID field.                            */


    /* Missing HSFLL FREQM.ERROR register bit definitions */
    /* TRIMUNDERFLOW @Bit 1 : Underflow error status. */
    #define HSFLL_FREQM_ERROR_TRIMUNDERFLOW_Pos (1UL)  /*!< Position of TRIMUNDERFLOW field.                                     */
    #define HSFLL_FREQM_ERROR_TRIMUNDERFLOW_Msk (0x1UL << HSFLL_FREQM_ERROR_TRIMUNDERFLOW_Pos) /*!< Bit mask of TRIMUNDERFLOW
                                                                              field.*/
    #define HSFLL_FREQM_ERROR_TRIMUNDERFLOW_Min (0x0UL) /*!< Min enumerator value of TRIMUNDERFLOW field.                        */
    #define HSFLL_FREQM_ERROR_TRIMUNDERFLOW_Max (0x1UL) /*!< Max enumerator value of TRIMUNDERFLOW field.                        */
    #define HSFLL_FREQM_ERROR_TRIMUNDERFLOW_OutsideLimit (0x1UL) /*!< Underflow                                                  */
    #define HSFLL_FREQM_ERROR_TRIMUNDERFLOW_WithinLimit (0x0UL) /*!< No underflow                                                */

    /* TRIMOVERFLOW @Bit 2 : Overflow error status. */
    #define HSFLL_FREQM_ERROR_TRIMOVERFLOW_Pos (2UL)   /*!< Position of TRIMOVERFLOW field.                                      */
    #define HSFLL_FREQM_ERROR_TRIMOVERFLOW_Msk (0x1UL << HSFLL_FREQM_ERROR_TRIMOVERFLOW_Pos) /*!< Bit mask of TRIMOVERFLOW field.*/
    #define HSFLL_FREQM_ERROR_TRIMOVERFLOW_Min (0x0UL) /*!< Min enumerator value of TRIMOVERFLOW field.                          */
    #define HSFLL_FREQM_ERROR_TRIMOVERFLOW_Max (0x1UL) /*!< Max enumerator value of TRIMOVERFLOW field.                          */
    #define HSFLL_FREQM_ERROR_TRIMOVERFLOW_OutsideLimit (0x1UL) /*!< Overflow                                                    */
    #define HSFLL_FREQM_ERROR_TRIMOVERFLOW_WithinLimit (0x0UL) /*!< No overflow                                                  */

#endif

/**************************************************************************************************/
/* End fixups section for NRF54H20_XXAA (LILIUMFP1)                                               */
/**************************************************************************************************/

/**************************************************************************************************/
/* Start fixups section for NRF54L15 (MOONLIGHT)                                                  */
/**************************************************************************************************/

#if defined(MOONLIGHT_XXAA)
    #define LUMOS_XXAA 1

    #define P0_FEATURE_PINS_PRESENT P0_PINS_PRESENT
    #define P1_FEATURE_PINS_PRESENT P1_PINS_PRESENT
    #define P2_FEATURE_PINS_PRESENT P2_PINS_PRESENT

    typedef NRF_DOMAINS_t nrf_domain_t;
    #define ADDRESS_BUS_Pos (18UL)
    #define ADDRESS_BUS_Msk (0x3FUL << ADDRESS_BUS_Pos)

    #define NRF_DOMAIN_COUNT NRF_DOMAIN_GLOBAL + 1

    /* TODO: HM-20336 */
    #define SAADC_CH_NUM 8

    /* PIN @Bits 0..4 : Analog positive input pin select */
    #define SAADC_CH_PSELP_PIN_Pos (0UL)               /*!< Position of PIN field.                                               */
    #define SAADC_CH_PSELP_PIN_Msk (0x1FUL << SAADC_CH_PSELP_PIN_Pos) /*!< Bit mask of PIN field.                                */

    /* PORT @Bits 8..11 : GPIO Port selection */
    #define SAADC_CH_PSELP_PORT_Pos (8UL)              /*!< Position of PORT field.                                              */
    #define SAADC_CH_PSELP_PORT_Msk (0xFUL << SAADC_CH_PSELP_PORT_Pos) /*!< Bit mask of PORT field.                              */

    /* CONNECT @Bits 30..31 : Connection */
    #define SAADC_CH_PSELP_CONNECT_Pos (30UL)          /*!< Position of CONNECT field.                                           */
    #define SAADC_CH_PSELP_CONNECT_Msk (0x3UL << SAADC_CH_PSELP_CONNECT_Pos) /*!< Bit mask of CONNECT field.                     */
    #define SAADC_CH_PSELP_CONNECT_Min (0x0UL)         /*!< Min enumerator value of CONNECT field.                               */
    #define SAADC_CH_PSELP_CONNECT_Max (0x3UL)         /*!< Max enumerator value of CONNECT field.                               */
    #define SAADC_CH_PSELP_CONNECT_NC (0x0UL)          /*!< Not connected                                                        */
    #define SAADC_CH_PSELP_CONNECT_AnalogInput (0x1UL) /*!< Select analog input                                                  */

    /* SAADC_CH_PSELN: Input negative pin selection for CH[n] */
    #define SAADC_CH_PSELN_ResetValue (0x00000000UL)   /*!< Reset value of PSELN register.                                       */

    /* PIN @Bits 0..4 : Analog negative input pin select */
    #define SAADC_CH_PSELN_PIN_Pos (0UL)               /*!< Position of PIN field.                                               */
    #define SAADC_CH_PSELN_PIN_Msk (0x1FUL << SAADC_CH_PSELN_PIN_Pos) /*!< Bit mask of PIN field.                                */

    /* PORT @Bits 8..11 : GPIO Port selection */
    #define SAADC_CH_PSELN_PORT_Pos (8UL)              /*!< Position of PORT field.                                              */
    #define SAADC_CH_PSELN_PORT_Msk (0xFUL << SAADC_CH_PSELN_PORT_Pos) /*!< Bit mask of PORT field.                              */

    /* CONNECT @Bits 30..31 : Connection */
    #define SAADC_CH_PSELN_CONNECT_Pos (30UL)          /*!< Position of CONNECT field.                                           */
    #define SAADC_CH_PSELN_CONNECT_Msk (0x3UL << SAADC_CH_PSELN_CONNECT_Pos) /*!< Bit mask of CONNECT field.                     */
    #define SAADC_CH_PSELN_CONNECT_Min (0x0UL)         /*!< Min enumerator value of CONNECT field.                               */
    #define SAADC_CH_PSELN_CONNECT_Max (0x3UL)         /*!< Max enumerator value of CONNECT field.                               */
    #define SAADC_CH_PSELN_CONNECT_NC (0x0UL)          /*!< Not connected                                                        */
    #define SAADC_CH_PSELN_CONNECT_AnalogInput (0x1UL) /*!< Select analog input                                                  */

    #define GRTC_INTEN_Msk NRFX_BIT_MASK(GRTC_CC_MaxCount)

    #define GPIOTE_CH_NUM   GPIOTE_EVENTS_IN_MaxCount
    #define GPIOTE_PORT_NUM GPIOTE_EVENTS_PORT_MaxCount

    #define PPIB00_CH_NUM 8
    #define PPIB10_CH_NUM 8
    #define PPIB11_CH_NUM 16
    #define PPIB21_CH_NUM 16
    #define PPIB22_CH_NUM 4
    #define PPIB30_CH_NUM 4
    #define PPIB20_CH_NUM 8
    #define PPIB01_CH_NUM 8

    #define NRF_PPIB00_TO_PPIB10_CHANNEL_MASK NRFX_BIT_MASK(NRFX_MIN(PPIB00_CH_NUM, PPIB10_CH_NUM))
    #define NRF_PPIB11_TO_PPIB21_CHANNEL_MASK NRFX_BIT_MASK(NRFX_MIN(PPIB11_CH_NUM, PPIB21_CH_NUM))
    #define NRF_PPIB22_TO_PPIB30_CHANNEL_MASK NRFX_BIT_MASK(NRFX_MIN(PPIB22_CH_NUM, PPIB30_CH_NUM))
    #define NRF_PPIB20_TO_PPIB01_CHANNEL_MASK NRFX_BIT_MASK(NRFX_MIN(PPIB20_CH_NUM, PPIB01_CH_NUM))

    // TODO: remove when MLT-4763 is done
    typedef enum
    {
        NRF_APB_INDEX_MCU   = 1,
        NRF_APB_INDEX_RADIO = 2,
        NRF_APB_INDEX_PERI  = 3,
        NRF_APB_INDEX_LP    = 4
    } nrf_apb_index_t;

    #if defined(NRF_FLPR)
        #define NRF_GRTC_IRQ_GROUP    0 // Not sure, no way to check for now.
        #define GRTC_IRQn             GRTC_0_IRQn
        #define nrfx_grtc_irq_handler GRTC_0_IRQHandler
    #elif defined(NRF_APPLICATION)
        #if defined(NRF_TRUSTZONE_NONSECURE)
            #define NRF_GPIOTE_IRQ_GROUP    0
            #define NRF_GPIOTE20_IRQn       GPIOTE20_0_IRQn
            #define nrfx_gpiote_irq_handler GPIOTE20_0_IRQHandler

            #define NRF_GRTC_IRQ_GROUP      1 // Not sure, no way to check for now.
            #define GRTC_IRQn               GRTC_1_IRQn
            #define nrfx_grtc_irq_handler   GRTC_1_IRQHandler
        #else
            #define NRF_GPIOTE_IRQ_GROUP    1
            #define NRF_GPIOTE20_IRQn       GPIOTE20_1_IRQn
            #define nrfx_gpiote_irq_handler GPIOTE20_1_IRQHandler

            #define NRF_GRTC_IRQ_GROUP    2
            #define GRTC_IRQn             GRTC_2_IRQn
            #define nrfx_grtc_irq_handler GRTC_2_IRQHandler
        #endif // defined(NRF_TRUSTZONE_NONSECURE)
    #else
        #error "Unknown core"
    #endif

    #define DPPI_PRESENT DPPIC_PRESENT
    #define DPPI_GROUP_MAX_COUNT NRFX_MAX(DPPIC00_GROUP_NUM, \
                                 NRFX_MAX(DPPIC10_GROUP_NUM, \
                                 NRFX_MAX(DPPIC20_GROUP_NUM, \
                                 DPPIC30_GROUP_NUM)))
    #define DPPI_GROUP_NUM DPPI_GROUP_MAX_COUNT
    #define DPPI_CHANNEL_MAX_COUNT NRFX_MAX(DPPIC00_CH_NUM, \
                                   NRFX_MAX(DPPIC10_CH_NUM, \
                                   NRFX_MAX(DPPIC20_CH_NUM, \
                                   DPPIC30_CH_NUM)))
    #define DPPI_CH_NUM DPPI_CHANNEL_MAX_COUNT
    #define PPIB_CHANNEL_MAX_COUNT 24UL

    #if defined(CCM_PRESENT)
        #define EASYVDMA_PRESENT
        #define VDMADESCRIPTOR_CONFIG_CNT_Pos (0UL)        /*!< Position of CNT field.                                               */
        #define VDMADESCRIPTOR_CONFIG_CNT_Msk (0xFFFFFFUL << VDMADESCRIPTOR_CONFIG_CNT_Pos) /*!< Bit mask of CNT field.              */
        #define VDMADESCRIPTOR_CONFIG_ATTRIBUTE_Pos (24UL) /*!< Position of ATTRIBUTE field.                                         */
    #endif

    #define SAADC_CH_NUM 8
    /* MDK-2195 MDK removed information about easydma maxcnt from peripherals since if width is 16.*/
    /* TODO: Verify correct value. */
    #define SAADC_EASYDMA_MAXCNT_SIZE 15

    #define TWIM00_EASYDMA_MAXCNT_SIZE 16
    #define TWIM20_EASYDMA_MAXCNT_SIZE 16
    #define TWIM21_EASYDMA_MAXCNT_SIZE 16
    #define TWIM22_EASYDMA_MAXCNT_SIZE 16
    #define TWIM30_EASYDMA_MAXCNT_SIZE 16

    #define TWIS00_EASYDMA_MAXCNT_SIZE 16
    #define TWIS20_EASYDMA_MAXCNT_SIZE 16
    #define TWIS21_EASYDMA_MAXCNT_SIZE 16
    #define TWIS22_EASYDMA_MAXCNT_SIZE 16
    #define TWIS30_EASYDMA_MAXCNT_SIZE 16

    #define GPIOTE_CH_NUM   GPIOTE_EVENTS_IN_MaxCount
    #define GPIOTE_FEATURE_SET_PRESENT
    #define GPIOTE_FEATURE_CLR_PRESENT
    #define GPIOTE_PORT_NUM GPIOTE_EVENTS_PORT_MaxCount

    /* RRAMC_WAITSTATES: Waitstates for RRAM read access */
    #define RRAMC_WAITSTATES_VALUE_MaxCount 3 /*!< Max size of the index array related to the AXI clock frequencies. */

    #define RADIO_TIMING_RU_Default 0
    #define RADIO_TIMING_RU_Fast    1
#endif

/**************************************************************************************************/
/* End fixups section for NRF54L15 (MOONLIGHT)                                                    */
/**************************************************************************************************/

/**************************************************************************************************/
/* Start fixups section for NRF7140_XXAA                                                          */
/**************************************************************************************************/

#if defined(NRF7140_XXAA)

    /* TODO: HM-17600 */
    typedef struct {
        __IM uint32_t RESERVED00[1];
        __OM uint32_t TASKS_STOP;
        __IM uint32_t RESERVED01[1];
        __OM uint32_t TASKS_SUSPEND;
        __OM uint32_t TASKS_RESUME;
        __IM uint32_t RESERVED1[5];
        __OM NRF_TWIM_TASKS_DMA_Type TASKS_DMA;
        __IM uint32_t RESERVED2[13];
        __IOM uint32_t SUBSCRIBE_SUSPEND;
        __IOM uint32_t SUBSCRIBE_RESUME;
        __IM uint32_t RESERVED3[5];
        __IOM NRF_TWIM_SUBSCRIBE_DMA_Type SUBSCRIBE_DMA;
        __IM uint32_t RESERVED4[11];
        __IOM uint32_t EVENTS_STOPPED;
        __IM uint32_t RESERVED5[3];
        __IOM uint32_t EVENTS_ERROR;
        __IM uint32_t RESERVED6[2];
        __IOM uint32_t EVENTS_BB;
        __IM uint32_t RESERVED7;
        __IOM uint32_t EVENTS_SUSPENDED;
        __IM uint32_t RESERVED8[2];
        __IOM uint32_t EVENTS_LASTRX;
        __IOM uint32_t EVENTS_LASTTX;
        __IM uint32_t RESERVED9[4];
        __IOM NRF_TWIM_EVENTS_DMA_Type EVENTS_DMA;
        __IM uint32_t RESERVED10[4];
        __IOM uint32_t PUBLISH_STOPPED;
        __IM uint32_t RESERVED11[3];
        __IOM uint32_t PUBLISH_ERROR;
        __IM uint32_t RESERVED12[2];
        __IOM uint32_t PUBLISH_BB;
        __IM uint32_t RESERVED13;
        __IOM uint32_t PUBLISH_SUSPENDED;
        __IM uint32_t RESERVED14[2];
        __IOM uint32_t PUBLISH_LASTRX;
        __IOM uint32_t PUBLISH_LASTTX;
        __IM uint32_t RESERVED15[4];
        __IOM NRF_TWIM_PUBLISH_DMA_Type PUBLISH_DMA;
        __IM uint32_t RESERVED16[3];
        __IOM uint32_t SHORTS;
        __IM uint32_t RESERVED17[63];
        __IOM uint32_t INTEN;
        __IOM uint32_t INTENSET;
        __IOM uint32_t INTENCLR;
        __IM uint32_t RESERVED18[110];
        __IOM uint32_t ERRORSRC;
        __IM uint32_t RESERVED19[14];
        __IOM uint32_t ENABLE;
        __IOM uint32_t CONFIG;
        __IM uint32_t RESERVED20[6];
        __IOM uint32_t FMPLUS;
        __IOM uint32_t FREQUENCY;
        __IM uint32_t RESERVED21[24];
        __IOM uint32_t ADDRESS;
        __IM uint32_t RESERVED22[29];
        __IOM NRF_TWIM_PSEL_Type PSEL;
        __IM uint32_t RESERVED23[62];
        __IOM NRF_TWIM_DMA_Type DMA;
    } NRF_TWIM_Type_fixed;

    #if defined(NRF_TWIM130_S)
        #undef NRF_TWIM130_S
        #define NRF_TWIM130_S ((NRF_TWIM_Type_fixed*) NRF_TWIM130_S_BASE)
    #endif

    #if defined(NRF_TWIM131_S)
        #undef NRF_TWIM131_S
        #define NRF_TWIM131_S ((NRF_TWIM_Type_fixed*) NRF_TWIM131_S_BASE)
    #endif

    #if defined(NRF_TWIM132_S)
        #undef NRF_TWIM132_S
        #define NRF_TWIM132_S ((NRF_TWIM_Type_fixed*) NRF_TWIM132_S_BASE)
    #endif

    #if defined(NRF_TWIM133_S)
        #undef NRF_TWIM133_S
        #define NRF_TWIM133_S ((NRF_TWIM_Type_fixed*) NRF_TWIM133_S_BASE)
    #endif

    #if defined(NRF_TWIM134_S)
        #undef NRF_TWIM134_S
        #define NRF_TWIM134_S ((NRF_TWIM_Type_fixed*) NRF_TWIM134_S_BASE)
    #endif

    #if defined(NRF_TWIM135_S)
        #undef NRF_TWIM135_S
        #define NRF_TWIM135_S ((NRF_TWIM_Type_fixed*) NRF_TWIM135_S_BASE)
    #endif

    #if defined(NRF_TWIM136_S)
        #undef NRF_TWIM136_S
        #define NRF_TWIM136_S ((NRF_TWIM_Type_fixed*) NRF_TWIM136_S_BASE)
    #endif

    #if defined(NRF_TWIM137_S)
        #undef NRF_TWIM137_S
        #define NRF_TWIM137_S ((NRF_TWIM_Type_fixed*) NRF_TWIM137_S_BASE)
    #endif

    #define NRF_TWIM_Type NRF_TWIM_Type_fixed

    typedef struct {
        __IM  uint32_t  RESERVED;
        __IOM uint32_t  CNT;                               /*!< (@ 0x00000004) Number of values (duty cycles) in this sequence       */
        __IOM uint32_t  REFRESH;                           /*!< (@ 0x00000008) Number of additional PWM periods between samples loaded
                                                                                into compare register*/
        __IOM uint32_t  ENDDELAY;                          /*!< (@ 0x0000000C) Time added after the sequence                         */
        __IM  uint32_t  RESERVED1[4];
    } NRF_PWM_SEQ_Type_fixed;                                  /*!< Size = 32 (0x020)                                                    */

    /* PWM_SEQ_CNT: Number of values (duty cycles) in this sequence */
    #define PWM_SEQ_CNT_ResetValue (0x00000000UL)      /*!< Reset value of CNT register.                                         */

    /* CNT @Bits 0..14 : Number of values (duty cycles) in this sequence */
    #define PWM_SEQ_CNT_CNT_Pos (0UL)                  /*!< Position of CNT field.                                               */
    #define PWM_SEQ_CNT_CNT_Msk (0x7FFFUL << PWM_SEQ_CNT_CNT_Pos) /*!< Bit mask of CNT field.                                    */
    #define PWM_SEQ_CNT_CNT_Min (0x0UL)                /*!< Min enumerator value of CNT field.                                   */
    #define PWM_SEQ_CNT_CNT_Max (0x0UL)                /*!< Max enumerator value of CNT field.                                   */
    #define PWM_SEQ_CNT_CNT_Disabled (0x0000UL)        /*!< Sequence is disabled, and shall not be started as it is empty        */

    typedef struct {                                   /*!< PWM Structure                                                        */
        __OM uint32_t TASKS_START;                       /*!< (@ 0x00000000) Starts PWM pulse generation with the last loaded
                                                                            values*/
        __OM uint32_t TASKS_STOP;                        /*!< (@ 0x00000004) Stops PWM pulse generation on all channels at the end
                                                                            of current PWM period, and stops sequence playback*/
        __OM uint32_t TASKS_NEXTSTEP;                    /*!< (@ 0x00000008) Steps by one value in the current sequence on all
                                                                            enabled channels if DECODER.MODE=NextStep. Does not
                                                                            cause PWM generation to start if not running.*/
        __OM uint32_t TASKS_SEQABORT;                    /*!< (@ 0x0000000C) (Gracefully) aborts the playback of the current
                                                                            sequence or the current end delay*/
        __OM NRF_PWM_TASKS_DMA_Type TASKS_DMA;           /*!< (@ 0x00000010) Peripheral tasks.                                     */
        __IM uint32_t RESERVED[24];
        __IOM uint32_t SUBSCRIBE_START;                  /*!< (@ 0x00000080) Subscribe configuration for task START                */
        __IOM uint32_t SUBSCRIBE_STOP;                   /*!< (@ 0x00000084) Subscribe configuration for task STOP                 */
        __IOM uint32_t SUBSCRIBE_NEXTSTEP;               /*!< (@ 0x00000088) Subscribe configuration for task NEXTSTEP             */
        __IOM uint32_t SUBSCRIBE_SEQABORT;               /*!< (@ 0x0000008C) Subscribe configuration for task SEQABORT             */
        __IOM NRF_PWM_SUBSCRIBE_DMA_Type SUBSCRIBE_DMA;  /*!< (@ 0x00000090) Subscribe configuration for tasks                     */
        __IM uint32_t RESERVED1[24];
        __IOM uint32_t EVENTS_STARTED;                   /*!< (@ 0x00000100) Response to START task, emitted when the PWM pulse
                                                                            generation starts*/
        __IOM uint32_t EVENTS_STOPPED;                   /*!< (@ 0x00000104) Response to STOP task, emitted when PWM pulses are no
                                                                            longer generated*/
        __IOM uint32_t EVENTS_SEQSTARTED[2];             /*!< (@ 0x00000108) First PWM period started on sequence n                */
        __IOM uint32_t EVENTS_SEQEND[2];                 /*!< (@ 0x00000110) Emitted at end of every sequence n, when last value
                                                                            from RAM has been applied to wave counter*/
        __IOM uint32_t EVENTS_PWMPERIODEND;              /*!< (@ 0x00000118) Emitted at the end of each PWM period                 */
        __IOM uint32_t EVENTS_LOOPSDONE;                 /*!< (@ 0x0000011C) Concatenated sequences have been played the amount of
                                                                            times defined in LOOP.CNT*/
        __IOM uint32_t EVENTS_RAMUNDERFLOW;              /*!< (@ 0x00000120) Emitted when retrieving from RAM does not complete in
                                                                            time for the PWM module*/
        __IOM NRF_PWM_EVENTS_DMA_Type EVENTS_DMA;        /*!< (@ 0x00000124) Peripheral events.                                    */
        __IOM uint32_t EVENTS_COMPAREMATCH[4];           /*!< (@ 0x0000013C) This event is generated when the compare matches for
                                                                            the compare channel [n].*/
        __IM uint32_t RESERVED2[13];
        __IOM uint32_t PUBLISH_STARTED;                  /*!< (@ 0x00000180) Publish configuration for event STARTED               */
        __IOM uint32_t PUBLISH_STOPPED;                  /*!< (@ 0x00000184) Publish configuration for event STOPPED               */
        __IOM uint32_t PUBLISH_SEQSTARTED[2];            /*!< (@ 0x00000188) Publish configuration for event SEQSTARTED[n]         */
        __IOM uint32_t PUBLISH_SEQEND[2];                /*!< (@ 0x00000190) Publish configuration for event SEQEND[n]             */
        __IOM uint32_t PUBLISH_PWMPERIODEND;             /*!< (@ 0x00000198) Publish configuration for event PWMPERIODEND          */
        __IOM uint32_t PUBLISH_LOOPSDONE;                /*!< (@ 0x0000019C) Publish configuration for event LOOPSDONE             */
        __IOM uint32_t PUBLISH_RAMUNDERFLOW;             /*!< (@ 0x000001A0) Publish configuration for event RAMUNDERFLOW          */
        __IOM NRF_PWM_PUBLISH_DMA_Type PUBLISH_DMA;      /*!< (@ 0x000001A4) Publish configuration for events                      */
        __IOM uint32_t PUBLISH_COMPAREMATCH[4];          /*!< (@ 0x000001BC) Publish configuration for event COMPAREMATCH[n]       */
        __IM uint32_t RESERVED3[13];
        __IOM uint32_t SHORTS;                           /*!< (@ 0x00000200) Shortcuts between local events and tasks              */
        __IM uint32_t RESERVED4[63];
        __IOM uint32_t INTEN;                            /*!< (@ 0x00000300) Enable or disable interrupt                           */
        __IOM uint32_t INTENSET;                         /*!< (@ 0x00000304) Enable interrupt                                      */
        __IOM uint32_t INTENCLR;                         /*!< (@ 0x00000308) Disable interrupt                                     */
        __IM uint32_t INTPEND;                           /*!< (@ 0x0000030C) Pending interrupts                                    */
        __IM uint32_t RESERVED5[124];
        __IOM uint32_t ENABLE;                           /*!< (@ 0x00000500) PWM module enable register                            */
        __IOM uint32_t MODE;                             /*!< (@ 0x00000504) Selects operating mode of the wave counter            */
        __IOM uint32_t COUNTERTOP;                       /*!< (@ 0x00000508) Value up to which the pulse generator counter counts  */
        __IOM uint32_t PRESCALER;                        /*!< (@ 0x0000050C) Configuration for PWM_CLK                             */
        __IOM uint32_t DECODER;                          /*!< (@ 0x00000510) Configuration of the decoder                          */
        __IOM uint32_t LOOP;                             /*!< (@ 0x00000514) Number of playbacks of a loop                         */
        __IOM uint32_t IDLEOUT;                          /*!< (@ 0x00000518) Configure the output value on the PWM channel during
                                                                            idle*/
        __IM uint32_t RESERVED6;
        __IOM NRF_PWM_SEQ_Type_fixed SEQ[2];                   /*!< (@ 0x00000520) (unspecified)                                         */
        __IOM NRF_PWM_PSEL_Type PSEL;                    /*!< (@ 0x00000560) (unspecified)                                         */
        __IM uint32_t RESERVED7[100];
        __IOM NRF_PWM_DMA_Type DMA;                      /*!< (@ 0x00000700) (unspecified)                                         */
    } NRF_PWM_Type_fixed;                                    /*!< Size = 1864 (0x748)                                                  */

    #if defined(NRF_PWM120_NS)
        #undef NRF_PWM120_NS
        #define NRF_PWM120_NS ((NRF_PWM_Type_fixed*) NRF_PWM120_NS_BASE)
    #endif

    #if defined(NRF_PWM120_S)
        #undef NRF_PWM120_S
        #define NRF_PWM120_S ((NRF_PWM_Type_fixed*) NRF_PWM120_S_BASE)
    #endif

    #if defined(NRF_PWM130_NS)
        #undef NRF_PWM130_NS
        #define NRF_PWM130_NS ((NRF_PWM_Type_fixed*) NRF_PWM130_NS_BASE)
    #endif

    #if defined(NRF_PWM130_S)
        #undef NRF_PWM130_S
        #define NRF_PWM130_S ((NRF_PWM_Type_fixed*) NRF_PWM130_S_BASE)
    #endif

    #if defined(NRF_PWM131_NS)
        #undef NRF_PWM131_NS
        #define NRF_PWM131_NS ((NRF_PWM_Type_fixed*) NRF_PWM131_NS_BASE)
    #endif

    #if defined(NRF_PWM131_S)
        #undef NRF_PWM131_S
        #define NRF_PWM131_S ((NRF_PWM_Type_fixed*) NRF_PWM131_S_BASE)
    #endif

    #if defined(NRF_PWM132_NS)
        #undef NRF_PWM132_NS
        #define NRF_PWM132_NS ((NRF_PWM_Type_fixed*) NRF_PWM132_NS_BASE)
    #endif

    #if defined(NRF_PWM132_S)
        #undef NRF_PWM132_S
        #define NRF_PWM132_S ((NRF_PWM_Type_fixed*) NRF_PWM132_S_BASE)
    #endif

    #if defined(NRF_PWM133_NS)
        #undef NRF_PWM133_NS
        #define NRF_PWM133_NS ((NRF_PWM_Type_fixed*) NRF_PWM133_NS_BASE)
    #endif

    #if defined(NRF_PWM133_S)
        #undef NRF_PWM133_S
        #define NRF_PWM133_S ((NRF_PWM_Type_fixed*) NRF_PWM133_S_BASE)
    #endif

    #define NRF_PWM_Type NRF_PWM_Type_fixed

    /* At some point (ver. 8.52.0 or 8.51.0, depending on flavor) MDK introduced a fix to typo
    * in VPRCSR_MCAUSE_EXECPTIONCODE_* symbols that reworded incorrect _EXECPTIONCODE_
    * to _EXCEPTIONCODE_. This causes a lot of chaos in enums as devices using older MDK
    * need to stick to previous, invalid naming. To avoid this chaos in HALs,
    * fixup these symbols here instead.
    */
    #if defined(VPRCSR_MCAUSE_EXECPTIONCODE_INSTADDRMISALIGN) && \
        !defined(VPRCSR_MCAUSE_EXCEPTIONCODE_INSTADDRMISALIGN)
        #define VPRCSR_MCAUSE_EXCEPTIONCODE_INSTADDRMISALIGN VPRCSR_MCAUSE_EXECPTIONCODE_INSTADDRMISALIGN
    #endif

    #if defined(VPRCSR_MCAUSE_EXECPTIONCODE_INSTACCESSFAULT) && \
        !defined(VPRCSR_MCAUSE_EXCEPTIONCODE_INSTACCESSFAULT)
        #define VPRCSR_MCAUSE_EXCEPTIONCODE_INSTACCESSFAULT VPRCSR_MCAUSE_EXECPTIONCODE_INSTACCESSFAULT
    #endif

    #if defined(VPRCSR_MCAUSE_EXECPTIONCODE_ILLEGALINST) && \
        !defined(VPRCSR_MCAUSE_EXCEPTIONCODE_ILLEGALINST)
        #define VPRCSR_MCAUSE_EXCEPTIONCODE_ILLEGALINST VPRCSR_MCAUSE_EXECPTIONCODE_ILLEGALINST
    #endif

    #if defined(VPRCSR_MCAUSE_EXECPTIONCODE_BKPT) && \
        !defined(VPRCSR_MCAUSE_EXCEPTIONCODE_BKPT)
        #define VPRCSR_MCAUSE_EXCEPTIONCODE_BKPT VPRCSR_MCAUSE_EXECPTIONCODE_BKPT
    #endif

    #if defined(VPRCSR_MCAUSE_EXECPTIONCODE_LOADADDRMISALIGN) && \
        !defined(VPRCSR_MCAUSE_EXCEPTIONCODE_LOADADDRMISALIGN)
        #define VPRCSR_MCAUSE_EXCEPTIONCODE_LOADADDRMISALIGN VPRCSR_MCAUSE_EXECPTIONCODE_LOADADDRMISALIGN
    #endif

    #if defined(VPRCSR_MCAUSE_EXECPTIONCODE_LOADACCESSFAULT) && \
        !defined(VPRCSR_MCAUSE_EXCEPTIONCODE_LOADACCESSFAULT)
        #define VPRCSR_MCAUSE_EXCEPTIONCODE_LOADACCESSFAULT VPRCSR_MCAUSE_EXECPTIONCODE_LOADACCESSFAULT
    #endif

    #if defined(VPRCSR_MCAUSE_EXECPTIONCODE_STOREADDRMISALIGN) && \
        !defined(VPRCSR_MCAUSE_EXCEPTIONCODE_STOREADDRMISALIGN)
        #define VPRCSR_MCAUSE_EXCEPTIONCODE_STOREADDRMISALIGN VPRCSR_MCAUSE_EXECPTIONCODE_STOREADDRMISALIGN
    #endif

    #if defined(VPRCSR_MCAUSE_EXECPTIONCODE_STOREACCESSFAULT) && \
        !defined(VPRCSR_MCAUSE_EXCEPTIONCODE_STOREACCESSFAULT)
        #define VPRCSR_MCAUSE_EXCEPTIONCODE_STOREACCESSFAULT VPRCSR_MCAUSE_EXECPTIONCODE_STOREACCESSFAULT
    #endif

    #if defined(VPRCSR_MCAUSE_EXECPTIONCODE_ECALLUMODE) && \
        !defined(VPRCSR_MCAUSE_EXCEPTIONCODE_ECALLUMODE)
        #define VPRCSR_MCAUSE_EXCEPTIONCODE_ECALLUMODE VPRCSR_MCAUSE_EXECPTIONCODE_ECALLUMODE
    #endif

    #if defined(VPRCSR_MCAUSE_EXECPTIONCODE_ECALLSMODE) && \
        !defined(VPRCSR_MCAUSE_EXCEPTIONCODE_ECALLSMODE)
        #define VPRCSR_MCAUSE_EXCEPTIONCODE_ECALLSMODE VPRCSR_MCAUSE_EXECPTIONCODE_ECALLSMODE
    #endif

    #if defined(VPRCSR_MCAUSE_EXECPTIONCODE_INSTPAGEFAULT) && \
        !defined(VPRCSR_MCAUSE_EXCEPTIONCODE_INSTPAGEFAULT)
        #define VPRCSR_MCAUSE_EXCEPTIONCODE_INSTPAGEFAULT VPRCSR_MCAUSE_EXECPTIONCODE_INSTPAGEFAULT
    #endif

    #if defined(VPRCSR_MCAUSE_EXECPTIONCODE_LOADPAGEFAULT) && \
        !defined(VPRCSR_MCAUSE_EXCEPTIONCODE_LOADPAGEFAULT)
        #define VPRCSR_MCAUSE_EXCEPTIONCODE_LOADPAGEFAULT VPRCSR_MCAUSE_EXECPTIONCODE_LOADPAGEFAULT
    #endif

    #if defined(VPRCSR_MCAUSE_EXECPTIONCODE_STOREPAGEFAULT) && \
        !defined(VPRCSR_MCAUSE_EXCEPTIONCODE_STOREPAGEFAULT)
        #define VPRCSR_MCAUSE_EXCEPTIONCODE_STOREPAGEFAULT VPRCSR_MCAUSE_EXECPTIONCODE_STOREPAGEFAULT
    #endif

    #if defined(VPRCSR_MCAUSE_EXECPTIONCODE_ECALLMMODE) && \
        !defined(VPRCSR_MCAUSE_EXCEPTIONCODE_ECALLMMODE)
        #define VPRCSR_MCAUSE_EXCEPTIONCODE_ECALLMMODE VPRCSR_MCAUSE_EXECPTIONCODE_ECALLMMODE
    #endif

    #if defined(VPRCSR_MCAUSE_EXECPTIONCODE_BUSFAULTSTACKING) && \
        !defined(VPRCSR_MCAUSE_EXCEPTIONCODE_BUSFAULTSTACKING)
        #define VPRCSR_MCAUSE_EXCEPTIONCODE_BUSFAULTSTACKING VPRCSR_MCAUSE_EXECPTIONCODE_BUSFAULTSTACKING
    #endif

    #if defined(VPRCSR_MCAUSE_EXECPTIONCODE_UNALIGNSTACKING) && \
        !defined(VPRCSR_MCAUSE_EXCEPTIONCODE_UNALIGNSTACKING)
        #define VPRCSR_MCAUSE_EXCEPTIONCODE_UNALIGNSTACKING VPRCSR_MCAUSE_EXECPTIONCODE_UNALIGNSTACKING
    #endif

    #if defined(VPRCSR_MCAUSE_EXECPTIONCODE_VECTORFAULT) && \
        !defined(VPRCSR_MCAUSE_EXCEPTIONCODE_VECTORFAULT)
        #define VPRCSR_MCAUSE_EXCEPTIONCODE_VECTORFAULT VPRCSR_MCAUSE_EXECPTIONCODE_VECTORFAULT
    #endif

    #if defined(VPRCSR_MCAUSE_EXECPTIONCODE_UNALIGNSTACKINGEXC) && \
        !defined(VPRCSR_MCAUSE_EXCEPTIONCODE_UNALIGNSTACKINGEXC)
        #define VPRCSR_MCAUSE_EXCEPTIONCODE_UNALIGNSTACKINGEXC VPRCSR_MCAUSE_EXECPTIONCODE_UNALIGNSTACKINGEXC
    #endif

    #if defined(VPRCSR_MCAUSE_EXECPTIONCODE_MISALIGNSTACKING) && \
        !defined(VPRCSR_MCAUSE_EXCEPTIONCODE_MISALIGNSTACKING)
        #define VPRCSR_MCAUSE_EXCEPTIONCODE_MISALIGNSTACKING VPRCSR_MCAUSE_EXECPTIONCODE_MISALIGNSTACKING
    #endif

    #if defined(VPRCSR_MCAUSE_EXECPTIONCODE_INTVECTORFAULT) && \
        !defined(VPRCSR_MCAUSE_EXCEPTIONCODE_INTVECTORFAULT)
        #define VPRCSR_MCAUSE_EXCEPTIONCODE_INTVECTORFAULT VPRCSR_MCAUSE_EXECPTIONCODE_INTVECTORFAULT
    #endif

    #if defined(VPRCSR_MCAUSE_EXECPTIONCODE_STACKINGEXCFAULT) && \
        !defined(VPRCSR_MCAUSE_EXCEPTIONCODE_STACKINGEXCFAULT)
        #define VPRCSR_MCAUSE_EXCEPTIONCODE_STACKINGEXCFAULT VPRCSR_MCAUSE_EXECPTIONCODE_STACKINGEXCFAULT
    #endif

    #if defined(VPRCSR_MCAUSE_EXECPTIONCODE_BUSFAULTUNSTACKING) && \
        !defined(VPRCSR_MCAUSE_EXCEPTIONCODE_BUSFAULTUNSTACKING)
        #define VPRCSR_MCAUSE_EXCEPTIONCODE_BUSFAULTUNSTACKING VPRCSR_MCAUSE_EXECPTIONCODE_BUSFAULTUNSTACKING
    #endif

    #if defined(VPRCSR_MCAUSE_EXECPTIONCODE_STORETIMEOUTFAULT) && \
        !defined(VPRCSR_MCAUSE_EXCEPTIONCODE_STORETIMEOUTFAULT)
        #define VPRCSR_MCAUSE_EXCEPTIONCODE_STORETIMEOUTFAULT VPRCSR_MCAUSE_EXECPTIONCODE_STORETIMEOUTFAULT
    #endif

    #if defined(VPRCSR_MCAUSE_EXECPTIONCODE_LOADTIMEOUTFAULT) && \
        !defined(VPRCSR_MCAUSE_EXCEPTIONCODE_LOADTIMEOUTFAULT)
        #define VPRCSR_MCAUSE_EXCEPTIONCODE_LOADTIMEOUTFAULT VPRCSR_MCAUSE_EXECPTIONCODE_LOADTIMEOUTFAULT
    #endif

    #if defined(VPRCSR_MCAUSE_EXECPTIONCODE_Msk) && !defined(VPRCSR_MCAUSE_EXCEPTIONCODE_Msk)
        #define VPRCSR_MCAUSE_EXCEPTIONCODE_Msk VPRCSR_MCAUSE_EXECPTIONCODE_Msk
    #endif

    #define P0_FEATURE_PINS_PRESENT P0_PINS_PRESENT
    #define P1_FEATURE_PINS_PRESENT P1_PINS_PRESENT
    #define P2_FEATURE_PINS_PRESENT P2_PINS_PRESENT
    #define P6_FEATURE_PINS_PRESENT P6_PINS_PRESENT
    #define P7_FEATURE_PINS_PRESENT P7_PINS_PRESENT
    #define P9_FEATURE_PINS_PRESENT P9_PINS_PRESENT

    #define NRF_PDM   NRF_PDM130

    #if (defined(NRF_LMAC) || defined(NRF_UMAC))
        #undef GPIOTE_PRESENT
    #endif

    #undef QSPI_PRESENT

    /* SPU_FEATURE_BELLS_PROCESSOR_INTERRUPT: Configuration of features for interrupt register pair [(o * 2) + 1:o * 2] of Processor
                                            ID n */

    #define SPU_FEATURE_BELLS_PROCESSOR_INTERRUPT_MaxCount (16UL) /*!< Max size of INTERRUPT[16] array.                          */
    #define SPU_FEATURE_BELLS_PROCESSOR_INTERRUPT_ResetValue (0x00000000UL) /*!< Reset value of INTERRUPT[16] register.          */

    /* SECATTR @Bit 4 : SECATTR feature */
    #define SPU_FEATURE_BELLS_PROCESSOR_INTERRUPT_SECATTR_Pos (4UL) /*!< Position of SECATTR field.                              */
    #define SPU_FEATURE_BELLS_PROCESSOR_INTERRUPT_SECATTR_Msk (0x1UL << SPU_FEATURE_BELLS_PROCESSOR_INTERRUPT_SECATTR_Pos) /*!<
                                                                            Bit mask of SECATTR field.*/
    #define SPU_FEATURE_BELLS_PROCESSOR_INTERRUPT_SECATTR_Min (0x0UL) /*!< Min enumerator value of SECATTR field.                */
    #define SPU_FEATURE_BELLS_PROCESSOR_INTERRUPT_SECATTR_Max (0x1UL) /*!< Max enumerator value of SECATTR field.                */
    #define SPU_FEATURE_BELLS_PROCESSOR_INTERRUPT_SECATTR_NonSecure (0x0UL) /*!< Feature is available for non-secure usage       */
    #define SPU_FEATURE_BELLS_PROCESSOR_INTERRUPT_SECATTR_Secure (0x1UL) /*!< Feature is reserved for secure usage               */

    /* LOCK @Bit 8 : LOCK feature */
    #define SPU_FEATURE_BELLS_PROCESSOR_INTERRUPT_LOCK_Pos (8UL) /*!< Position of LOCK field.                                    */
    #define SPU_FEATURE_BELLS_PROCESSOR_INTERRUPT_LOCK_Msk (0x1UL << SPU_FEATURE_BELLS_PROCESSOR_INTERRUPT_LOCK_Pos) /*!< Bit mask
                                                                            of LOCK field.*/
    #define SPU_FEATURE_BELLS_PROCESSOR_INTERRUPT_LOCK_Min (0x0UL) /*!< Min enumerator value of LOCK field.                      */
    #define SPU_FEATURE_BELLS_PROCESSOR_INTERRUPT_LOCK_Max (0x1UL) /*!< Max enumerator value of LOCK field.                      */
    #define SPU_FEATURE_BELLS_PROCESSOR_INTERRUPT_LOCK_Unlocked (0x0UL) /*!< Feature permissions can be updated                  */
    #define SPU_FEATURE_BELLS_PROCESSOR_INTERRUPT_LOCK_Locked (0x1UL) /*!< Feature permissions can not be changed until the next
                                                                        reset*/

    /* BLOCK @Bit 12 : BLOCK feature */
    #define SPU_FEATURE_BELLS_PROCESSOR_INTERRUPT_BLOCK_Pos (12UL) /*!< Position of BLOCK field.                                 */
    #define SPU_FEATURE_BELLS_PROCESSOR_INTERRUPT_BLOCK_Msk (0x1UL << SPU_FEATURE_BELLS_PROCESSOR_INTERRUPT_BLOCK_Pos) /*!< Bit
                                                                            mask of BLOCK field.*/
    #define SPU_FEATURE_BELLS_PROCESSOR_INTERRUPT_BLOCK_Min (0x0UL) /*!< Min enumerator value of BLOCK field.                    */
    #define SPU_FEATURE_BELLS_PROCESSOR_INTERRUPT_BLOCK_Max (0x1UL) /*!< Max enumerator value of BLOCK field.                    */
    #define SPU_FEATURE_BELLS_PROCESSOR_INTERRUPT_BLOCK_Available (0x0UL) /*!< Feature is accessible                             */
    #define SPU_FEATURE_BELLS_PROCESSOR_INTERRUPT_BLOCK_Blocked (0x1UL) /*!< Feature cannot be accessed until next reset         */

    /* OWNERID @Bits 16..19 : Feature owner ID */
    #define SPU_FEATURE_BELLS_PROCESSOR_INTERRUPT_OWNERID_Pos (16UL) /*!< Position of OWNERID field.                             */
    #define SPU_FEATURE_BELLS_PROCESSOR_INTERRUPT_OWNERID_Msk (0xFUL << SPU_FEATURE_BELLS_PROCESSOR_INTERRUPT_OWNERID_Pos) /*!<
                                                                            Bit mask of OWNERID field.*/
    #define SPU_FEATURE_BELLS_PROCESSOR_INTERRUPT_OWNERID_Min (0x0UL) /*!< Min value of OWNERID field.                           */
    #define SPU_FEATURE_BELLS_PROCESSOR_INTERRUPT_OWNERID_Max (0xFUL) /*!< Max size of OWNERID field.                            */

    #define NRF_GRAPHICS_AUXPLL_NS_BASE       0x4900B000UL
    #define NRF_GRAPHICS_AUXPLL_NS            ((NRF_AUXPLL_Type*) NRF_GRAPHICS_AUXPLL_NS_BASE)
    #define NRF_GRAPHICS_AUXPLL               NRF_GRAPHICS_AUXPLL_NS
    #define NRF_AUXPLL                        NRF_GRAPHICS_AUXPLL

    /*Lack of GPU and DISPC in MDK files*/
    #ifdef NRF_APPLICATION
        #define NRF_GRAPHICS
        #define GPU_PRESENT
        #define DISPC_PRESENT

        /* =========================================================================================================================== */
        /* ================                                            GPU                                            ================ */
        /* =========================================================================================================================== */

        #if !defined(__ASSEMBLER__) && !defined(__ASSEMBLY__) /*!< Ignore C structs for assembly code.                                 */

        /* ================================================== Struct GPU_PCGCSLAVE =================================================== */
        /**
         * @brief PCGCSLAVE [GPU_PCGCSLAVE] (unspecified)
         */
        typedef struct {
            __IOM uint32_t  PENALTY[2];                        /*!< (@ 0x00000000) Penalty level for power/clock pair n                  */
            __IM  uint32_t  RESERVED[30];
            __IOM uint32_t  FORCEOVERRIDE[2];                  /*!< (@ 0x00000080) Force override of power/clock pair n                  */
        } NRF_GPU_PCGCSLAVE_Type;                            /*!< Size = 136 (0x088)                                                   */

        /* GPU_PCGCSLAVE_PENALTY: Penalty level for power/clock pair n */
        #define GPU_PCGCSLAVE_PENALTY_MaxCount (2UL)       /*!< Max size of PENALTY[2] array.                                        */
        #define GPU_PCGCSLAVE_PENALTY_ResetValue (0x00000000UL) /*!< Reset value of PENALTY[2] register.                             */

        /* PENALTY @Bits 0..7 : Penalty level */
        #define GPU_PCGCSLAVE_PENALTY_PENALTY_Pos (0UL)    /*!< Position of PENALTY field.                                           */
        #define GPU_PCGCSLAVE_PENALTY_PENALTY_Msk (0xFFUL << GPU_PCGCSLAVE_PENALTY_PENALTY_Pos) /*!< Bit mask of PENALTY field.      */


        /* GPU_PCGCSLAVE_FORCEOVERRIDE: Force override of power/clock pair n */
        #define GPU_PCGCSLAVE_FORCEOVERRIDE_MaxCount (2UL) /*!< Max size of FORCEOVERRIDE[2] array.                                  */
        #define GPU_PCGCSLAVE_FORCEOVERRIDE_ResetValue (0x00000000UL) /*!< Reset value of FORCEOVERRIDE[2] register.                 */

        /* CLOCKFORCINGPRE @Bits 0..3 : CLOCKFORCINGPRE */
        #define GPU_PCGCSLAVE_FORCEOVERRIDE_CLOCKFORCINGPRE_Pos (0UL) /*!< Position of CLOCKFORCINGPRE field.                        */
        #define GPU_PCGCSLAVE_FORCEOVERRIDE_CLOCKFORCINGPRE_Msk (0xFUL << GPU_PCGCSLAVE_FORCEOVERRIDE_CLOCKFORCINGPRE_Pos) /*!< Bit
                                                                                    mask of CLOCKFORCINGPRE field.*/

        /* DOFORCECLOCKPRE @Bit 7 : DOFORCECLOCKPRE */
        #define GPU_PCGCSLAVE_FORCEOVERRIDE_DOFORCECLOCKPRE_Pos (7UL) /*!< Position of DOFORCECLOCKPRE field.                        */
        #define GPU_PCGCSLAVE_FORCEOVERRIDE_DOFORCECLOCKPRE_Msk (0x1UL << GPU_PCGCSLAVE_FORCEOVERRIDE_DOFORCECLOCKPRE_Pos) /*!< Bit
                                                                                    mask of DOFORCECLOCKPRE field.*/

        /* POWERFORCINGPRE @Bits 8..9 : POWERFORCINGPRE */
        #define GPU_PCGCSLAVE_FORCEOVERRIDE_POWERFORCINGPRE_Pos (8UL) /*!< Position of POWERFORCINGPRE field.                        */
        #define GPU_PCGCSLAVE_FORCEOVERRIDE_POWERFORCINGPRE_Msk (0x3UL << GPU_PCGCSLAVE_FORCEOVERRIDE_POWERFORCINGPRE_Pos) /*!< Bit
                                                                                    mask of POWERFORCINGPRE field.*/

        /* DOFORCEPOWERPRE @Bit 15 : DOFORCEPOWERPRE */
        #define GPU_PCGCSLAVE_FORCEOVERRIDE_DOFORCEPOWERPRE_Pos (15UL) /*!< Position of DOFORCEPOWERPRE field.                       */
        #define GPU_PCGCSLAVE_FORCEOVERRIDE_DOFORCEPOWERPRE_Msk (0x1UL << GPU_PCGCSLAVE_FORCEOVERRIDE_DOFORCEPOWERPRE_Pos) /*!< Bit
                                                                                    mask of DOFORCEPOWERPRE field.*/



        /* ===================================================== Struct GPU_CORE ===================================================== */
        /**
         * @brief CORE [GPU_CORE] (unspecified)
         */
        typedef struct {
            __IOM uint32_t  TEX0BASE;                          /*!< (@ 0x00000000) Base address of drawing surface 0.                    */
            __IOM uint32_t  TEX0FSTRIDE;                       /*!< (@ 0x00000004) Image 0 Mode and Stride                               */
            __IOM uint32_t  TEX0RESXY;                         /*!< (@ 0x00000008) Image 0 Resolution                                    */
            __IM  uint32_t  RESERVED;
            __IOM uint32_t  TEX1BASE;                          /*!< (@ 0x00000010) Base address of drawing surface 1.                    */
            __IOM uint32_t  TEX1FSTRIDE;                       /*!< (@ 0x00000014) Image 1 Mode and Stride                               */
            __IOM uint32_t  TEX1RESXY;                         /*!< (@ 0x00000018) Image 1 Resolution                                    */
            __IOM uint32_t  TEXCOLOR;                          /*!< (@ 0x0000001C) Texture Maps default color (for use with Luminance and
                                                                                    Alpha-only color formats)*/
            __IOM uint32_t  TEX2BASE;                          /*!< (@ 0x00000020) Base address of drawing surface 2.                    */
            __IOM uint32_t  TEX2FSTRIDE;                       /*!< (@ 0x00000024) Image 2 Mode and Stride                               */
            __IOM uint32_t  TEX2RESXY;                         /*!< (@ 0x00000028) Image 2 Resolution                                    */
            __IM  uint32_t  RESERVED1;
            __IOM uint32_t  TEX3BASE;                          /*!< (@ 0x00000030) Base address of drawing surface 3.                    */
            __IOM uint32_t  TEX3FSTRIDE;                       /*!< (@ 0x00000034) Image 3 Mode and Stride                               */
            __IOM uint32_t  TEX3RESXY;                         /*!< (@ 0x00000038) Image 3 Resolution                                    */
            __IM  uint32_t  RESERVED2[17];
            __IOM uint32_t  BREAKPOINT;                        /*!< (@ 0x00000080) (unspecified)                                         */
            __IM  uint32_t  RESERVED3[2];
            __IOM uint32_t  BREAKPOINTMASK;                    /*!< (@ 0x0000008C) (unspecified)                                         */
            __IOM uint32_t  CGCMD;                             /*!< (@ 0x00000090) Enable Clock gating                                   */
            __IOM uint32_t  CGCTRL;                            /*!< (@ 0x00000094) Clock gating controller                               */
            __IOM uint32_t  DIRTYMIN;                          /*!< (@ 0x00000098) Read the Dirty_Min value. Resets dirty region to
                                                                                    resolution size on write function.*/
            __IOM uint32_t  DIRTYMAX;                          /*!< (@ 0x0000009C) Read the Dirty_Max value                              */
            __IOM uint32_t  CONVCOEFRAB;                       /*!< (@ 0x000000A0) Specifies the YUV coefficients for Red color. Part one*/
            __IOM uint32_t  CONVCOEFRCD;                       /*!< (@ 0x000000A4) Specifies the YUV coefficients for Red color. Part two*/
            __IOM uint32_t  CONVCOEFGAB;                       /*!< (@ 0x000000A8) Specifies the YUV coefficients for Green color. Part
                                                                                    one*/
            __IOM uint32_t  CONVCOEFGCD;                       /*!< (@ 0x000000AC) Specifies the YUV coefficients for Gren color. Part
                                                                                    two*/
            __IOM uint32_t  CONVCOEFBAB;                       /*!< (@ 0x000000B0) Specifies the YUV coefficients for Blue color. Part
                                                                                    one*/
            __IOM uint32_t  CONVCOEFBCD;                       /*!< (@ 0x000000B4) Specifies the YUV coefficients for Blue color. Part
                                                                                    two*/
            __IOM uint32_t  CRCM0;                             /*!< (@ 0x000000B8) On read returns the CRC form Write Channel 0          */
            __IOM uint32_t  CRCM1;                             /*!< (@ 0x000000BC) On read returns the CRC form Write Channel 1          */
            __IOM uint32_t  BUSCTRL;                           /*!< (@ 0x000000C0) Indicates the value of the AWCACHE and the ARCACHE
                                                                                    signals of the AXI Bus Interface.*/
            __IOM uint32_t  IMEMADDR;                          /*!< (@ 0x000000C4) Load shader instruction memory address. This register
                                                                                    can be auto incremented. Its contains*/
            __IOM uint32_t  IMEMDATALOW;                       /*!< (@ 0x000000C8) The lower bits (31-0) of the 64-bit load shader
                                                                                    instruction memory data*/
            __IOM uint32_t  IMEMDATAHIGH;                      /*!< (@ 0x000000CC) The higher bits (63-32) of the 64-bit load shader
                                                                                    instruction memory data*/
            __IM  uint32_t  RESERVED4[5];
            __IOM uint32_t  FLUSHCTRL;                         /*!< (@ 0x000000E4) Controls the system flush                             */
            __IOM uint32_t  CMDSTATUS;                         /*!< (@ 0x000000E8) On read, returns internal CL processor status.        */
            __IOM uint32_t  CMDRINGSTOP;                       /*!< (@ 0x000000EC) Ring Buffers pointer.                                 */
            __IOM uint32_t  CMDADDR;                           /*!< (@ 0x000000F0) Command list base address.                            */
            __IOM uint32_t  CMDSIZE;                           /*!< (@ 0x000000F4) Command list length in words(32-bits)                 */
            __IOM uint32_t  INTERRUPT;                         /*!< (@ 0x000000F8) Interrupt control register                            */
            __IOM uint32_t  STATUS;                            /*!< (@ 0x000000FC) On read, returns GPUs status.                         */
            __IOM uint32_t  DRAWCMDNOHOLD;                     /*!< (@ 0x00000100) Rasterizer Command (e.g. draw triangle, rectangle etc)*/
            __IOM uint32_t  DRAWSTARTXY;                       /*!< (@ 0x00000104) Vertex 0 drawing primitive. This register is used only
                                                                                    for integer values. For greater accuracy*/
            __IOM uint32_t  DRAWENDXY;                         /*!< (@ 0x00000108) Vertex 1 drawing primitive. This register is used only
                                                                                    for integer values. For greater accuracy*/
            __IM  uint32_t  RESERVED5;
            __IOM uint32_t  CLIPMIN;                           /*!< (@ 0x00000110) Clipping Rectangle upper left vertex                  */
            __IOM uint32_t  CLIPMAX;                           /*!< (@ 0x00000114) Clipping Rectangle bottom right vertex                */
            __IOM uint32_t  MATMULT;                           /*!< (@ 0x00000118) Rasterizer matrix multiplication control. This register
                                                                                    is partially updated*/
            __IOM uint32_t  CODEPTR;                           /*!< (@ 0x0000011C) Shader code pointer                                   */
            __IOM uint32_t  DRAWPT0X;                          /*!< (@ 0x00000120) X coordinate of vertex 0 drawing primitive. The value
                                                                                    is 16.16 fixed point.*/
            __IOM uint32_t  DRAWPT0Y;                          /*!< (@ 0x00000124) Y coordinate of vertex 0 drawing primitive. The value
                                                                                    is 16.16 fixed point.*/
            __IM  uint32_t  RESERVED6;
            __IOM uint32_t  DRAWCOLOR;                         /*!< (@ 0x0000012C) Rasterizer drawing color for filling primitives       */
            __IOM uint32_t  DRAWPT1X;                          /*!< (@ 0x00000130) X coordinate of vertex 1 drawing primitive. The value
                                                                                    is 16.16 fixed point.*/
            __IOM uint32_t  DRAWPT1Y;                          /*!< (@ 0x00000134) Y coordinate of vertex 1 drawing primitive. The value
                                                                                    is 16.16 fixed point.*/
            __IOM uint32_t  BYPASSADDR;                        /*!< (@ 0x00000138) Address of bypass mode of rasterizer setup access     */
            __IOM uint32_t  BYPASSDATA;                        /*!< (@ 0x0000013C) Data and enable of bypass mode of rasterizer          */
            __IOM uint32_t  DRAWPT2X;                          /*!< (@ 0x00000140) X coordinate of vertex 2 drawing primitive. The value
                                                                                    is 16.16 fixed point*/
            __IOM uint32_t  DRAWPT2Y;                          /*!< (@ 0x00000144) Y coordinate of vertex 2 drawing primitive. The value
                                                                                    is 16.16 fixed point*/
            __IOM uint32_t  CLID;                              /*!< (@ 0x00000148) Command List ID Key                                   */
            __IM  uint32_t  RESERVED7;
            __IOM uint32_t  DRAWPT3X;                          /*!< (@ 0x00000150) X coordinate of vertex 3 drawing primitive. The value
                                                                                    is 16.16 fixed point*/
            __IOM uint32_t  DRAWPT3Y;                          /*!< (@ 0x00000154) Y coordinate of vertex 3 drawing primitive. The value
                                                                                    is 16.16 fixed point*/
            __IM  uint32_t  RESERVED8[2];
            __IOM uint32_t  MM00;                              /*!< (@ 0x00000160) (0,0) matrix floating point element. On read return the
                                                                                    floating point value with the selected characteristics*/
            __IOM uint32_t  MM01;                              /*!< (@ 0x00000164) (0,1) matrix floating point element. On read return the
                                                                                    floating point value with the selected characteristics*/
            __IOM uint32_t  MM02;                              /*!< (@ 0x00000168) (0,2) matrix floating point element. On read return the
                                                                                    floating point value with the selected characteristics*/
            __IOM uint32_t  MM10;                              /*!< (@ 0x0000016C) (1,0) matrix floating point element. On read return the
                                                                                    floating point value with the selected characteristics*/
            __IOM uint32_t  MM11;                              /*!< (@ 0x00000170) (1,1) matrix floating point element. On read return the
                                                                                    floating point value with the selected characteristics*/
            __IOM uint32_t  MM12;                              /*!< (@ 0x00000174) (1,2) matrix floating point element. On read return the
                                                                                    floating point value with the selected characteristics*/
            __IOM uint32_t  MM20;                              /*!< (@ 0x00000178) (2,0) matrix floating point element. On read return the
                                                                                    floating point value with the selected characteristics*/
            __IOM uint32_t  MM21;                              /*!< (@ 0x0000017C) (2,1) matrix floating point element. On read return the
                                                                                    floating point value with the selected characteristics*/
            __IOM uint32_t  MM22;                              /*!< (@ 0x00000180) (2,2) matrix floating point element. On read return the
                                                                                    floating point value with the selected characteristics*/
            __IOM uint32_t  DEPTHSTARTL;                       /*!< (@ 0x00000184) Depth value of the STARTXY pixel. This register defines
                                                                                    the*/
            __IOM uint32_t  DEPTHSTARTH;                       /*!< (@ 0x00000188) Depth value of the STARTXY pixel. This register defines
                                                                                    the*/
            __IOM uint32_t  DEPTHDXL;                          /*!< (@ 0x0000018C) For each step at x-axis, depth value is added.        */
            __IOM uint32_t  DEPTHDXH;                          /*!< (@ 0x00000190) For each step at x-axis, depth value is added.        */
            __IOM uint32_t  DEPTHDYL;                          /*!< (@ 0x00000194) For each step at y-axis, depth value is added.        */
            __IOM uint32_t  DEPTHDYH;                          /*!< (@ 0x00000198) For each step at y-axis, depth value is added.        */
            __IM  uint32_t  RESERVED9;
            __IOM uint32_t  REDDX;                             /*!< (@ 0x000001A0) For each step at x-axis, Red (R) value is added.      */
            __IOM uint32_t  REDDY;                             /*!< (@ 0x000001A4) For each step at y-axis, Red (R) value is added.      */
            __IOM uint32_t  GREDX;                             /*!< (@ 0x000001A8) For each step at x-axis, Green (G) value is added.    */
            __IOM uint32_t  GREDY;                             /*!< (@ 0x000001AC) For each step at y-axis, Green (G) value is added.    */
            __IOM uint32_t  BLUDX;                             /*!< (@ 0x000001B0) For each step at x-axis, Blue (B) value is added.     */
            __IOM uint32_t  BLUDY;                             /*!< (@ 0x000001B4) For each step at y-axis, Blue (B) value is added.     */
            __IOM uint32_t  ALFDX;                             /*!< (@ 0x000001B8) For each step at x-axis, Alpha (A) value is added.    */
            __IOM uint32_t  ALFDY;                             /*!< (@ 0x000001BC) For each step at y-axis, Alpha (A) value is added.    */
            __IOM uint32_t  REDINIT;                           /*!< (@ 0x000001C0) Red (R) value of the STARTXY pixel. The value is 16,16
                                                                                    fixed point*/
            __IOM uint32_t  GREINIT;                           /*!< (@ 0x000001C4) Green (G) value of the STARTXY pixel. The value is
                                                                                    16,16 fixed point*/
            __IOM uint32_t  BLUINIT;                           /*!< (@ 0x000001C8) Blue (B) value of the STARTXY pixel. The value is 16,16
                                                                                    fixed point*/
            __IOM uint32_t  ALFINIT;                           /*!< (@ 0x000001CC) Alpha (A) value of the STARTXY pixel. The value is
                                                                                    16,16 fixed point*/
            __IOM uint32_t  ROPBLENDERBLENDMODE;               /*!< (@ 0x000001D0) Blending Modes for different calculations between the
                                                                                    source*/
            __IOM uint32_t  ROPBLENDERDSTCKEY;                 /*!< (@ 0x000001D4) When Color Keying is enabled. The new pixel is written
                                                                                    in the Frame Buffer,*/
            __IOM uint32_t  ROPBLENDERCONSTCOLOR;              /*!< (@ 0x000001D8) Constant Color value which is used for blending when
                                                                                    the blending modes.*/
            __IOM uint32_t  IPVERSION;                         /*!< (@ 0x000001DC) Returns the configuration status                      */
            __IM  uint32_t  RESERVED10[3];
            __IOM uint32_t  IDREG;                             /*!< (@ 0x000001EC) GPU ID Register (fixed value)                         */
            __IOM uint32_t  CONFIG;                            /*!< (@ 0x000001F0) GPU onfiguration status                               */
            __IOM uint32_t  CONFIGH;                           /*!< (@ 0x000001F4) GPU onfiguration status (high bits)                   */
            __IM  uint32_t  RESERVED11;
            __IOM uint32_t  CORESELECT;                        /*!< (@ 0x000001FC) Select which of the available cores will be active    */
            __IOM uint32_t  C0REG;                             /*!< (@ 0x00000200) A 32-bit integer RGBA value is stored in constant
                                                                                    register 0 for fragment calculations.*/
            __IOM uint32_t  C1REG;                             /*!< (@ 0x00000204) A 32-bit integer RGBA value is stored in constant
                                                                                    register 1 for fragment calculations.*/
            __IOM uint32_t  C2REG;                             /*!< (@ 0x00000208) A 32-bit integer RGBA value is stored in constant
                                                                                    register 2 for fragment calculations.*/
            __IOM uint32_t  C3REG;                             /*!< (@ 0x0000020C) A 32-bit integer RGBA value is stored in constant
                                                                                    register 3 for fragment calculations.*/
            __IM  uint32_t  RESERVED12[176];
            __IOM uint32_t  COORDMASK;                         /*!< (@ 0x000004D0) Inverted mask for rasterizer coordinates              */
            __IM  uint32_t  RESERVED13[13];
            __IOM uint32_t  GAMMAADDR;                         /*!< (@ 0x00000508) Enables Gamma LUTs and Set the internal address       */
            __IM  uint32_t  RESERVED14;
            __IOM uint32_t  GAMMADATA;                         /*!< (@ 0x00000510) Specify the Gamma LUT data                            */
            __IM  uint32_t  RESERVED15[187];
            __IOM uint32_t  TEX0BASEL;                         /*!< (@ 0x00000800) Texture mapping registers of drawing surface 0.(low
                                                                                    bits)*/
            __IOM uint32_t  TEX0BASEH;                         /*!< (@ 0x00000804) Texture mapping registers of drawing surface 0.(high
                                                                                    bits)*/
            __IM  uint32_t  RESERVED16[2];
            __IOM uint32_t  TEX1BASEL;                         /*!< (@ 0x00000810) Texture mapping registers of drawing surface 1.(low
                                                                                    bits)*/
            __IOM uint32_t  TEX1BASEH;                         /*!< (@ 0x00000814) Texture mapping registers of drawing surface 1.(high
                                                                                    bits)*/
            __IM  uint32_t  RESERVED17[2];
            __IOM uint32_t  TEX2BASEL;                         /*!< (@ 0x00000820) Texture mapping registers of drawing surface 2.(low
                                                                                    bits)*/
            __IOM uint32_t  TEX2BASEH;                         /*!< (@ 0x00000824) Texture mapping registers of drawing surface 2.(high
                                                                                    bits)*/
            __IM  uint32_t  RESERVED18[2];
            __IOM uint32_t  TEX3BASEL;                         /*!< (@ 0x00000830) Texture mapping registers of drawing surface 3.(low
                                                                                    bits)*/
            __IOM uint32_t  TEX3BASEH;                         /*!< (@ 0x00000834) Texture mapping registers of drawing surface 3.(high
                                                                                    bits)*/
            __IM  uint32_t  RESERVED19[2];
            __IOM uint32_t  CMDRINGSTOPL;                      /*!< (@ 0x00000840) Ring Buffers pointer Low bits.                        */
            __IOM uint32_t  CMDRINGSTOPH;                      /*!< (@ 0x00000844) Ring Buffers pointer High bits.                       */
            __IOM uint32_t  CMDADDRL;                          /*!< (@ 0x00000848) Command List base address Low bits                    */
            __IOM uint32_t  CMDADDRH;                          /*!< (@ 0x0000084C) Command List base address High bits                   */
            __IM  uint32_t  RESERVED20[488];
            __IOM uint32_t  IRQID;                             /*!< (@ 0x00000FF0) Signals an interrupt when written                     */
            __IOM uint32_t  GPFLAGS;                           /*!< (@ 0x00000FF4) Stop/Break the command list when debugging            */
            __IOM uint32_t  SYSINTERRUPT;                      /*!< (@ 0x00000FF8) On Read: Returns the SYSERROR_IRQ ID. On write: Clears
                                                                                    the SYSERROR_IRQ.*/
            __IOM uint32_t  BUSERRORMASK;                      /*!< (@ 0x00000FFC) Sets the mask for the Buserror Interrupt.             */
        } NRF_GPU_CORE_Type;                                 /*!< Size = 4096 (0x1000)                                                 */

        /* GPU_CORE_TEX0BASE: Base address of drawing surface 0. */
        #define GPU_CORE_TEX0BASE_ResetValue (0x00000000UL) /*!< Reset value of TEX0BASE register.                                   */

        /* TEX0BASE @Bits 0..31 : Specifies the base address or drawing surface 0. */
        #define GPU_CORE_TEX0BASE_TEX0BASE_Pos (0UL)       /*!< Position of TEX0BASE field.                                          */
        #define GPU_CORE_TEX0BASE_TEX0BASE_Msk (0xFFFFFFFFUL << GPU_CORE_TEX0BASE_TEX0BASE_Pos) /*!< Bit mask of TEX0BASE field.     */


        /* GPU_CORE_TEX0FSTRIDE: Image 0 Mode and Stride */
        #define GPU_CORE_TEX0FSTRIDE_ResetValue (0x00000000UL) /*!< Reset value of TEX0FSTRIDE register.                             */

        /* TEX0STRIDE @Bits 0..15 : Specifies the image stride distance in bytes from one scanline to another (signed) */
        #define GPU_CORE_TEX0FSTRIDE_TEX0STRIDE_Pos (0UL)  /*!< Position of TEX0STRIDE field.                                        */
        #define GPU_CORE_TEX0FSTRIDE_TEX0STRIDE_Msk (0xFFFFUL << GPU_CORE_TEX0FSTRIDE_TEX0STRIDE_Pos) /*!< Bit mask of TEX0STRIDE
                                                                                    field.*/

        /* TEX0MODE @Bits 16..23 : Specifies the image mode */
        #define GPU_CORE_TEX0FSTRIDE_TEX0MODE_Pos (16UL)   /*!< Position of TEX0MODE field.                                          */
        #define GPU_CORE_TEX0FSTRIDE_TEX0MODE_Msk (0xFFUL << GPU_CORE_TEX0FSTRIDE_TEX0MODE_Pos) /*!< Bit mask of TEX0MODE field.     */

        /* TEX0FORMAT @Bits 24..31 : Specifies the image format */
        #define GPU_CORE_TEX0FSTRIDE_TEX0FORMAT_Pos (24UL) /*!< Position of TEX0FORMAT field.                                        */
        #define GPU_CORE_TEX0FSTRIDE_TEX0FORMAT_Msk (0xFFUL << GPU_CORE_TEX0FSTRIDE_TEX0FORMAT_Pos) /*!< Bit mask of TEX0FORMAT
                                                                                    field.*/


        /* GPU_CORE_TEX0RESXY: Image 0 Resolution */
        #define GPU_CORE_TEX0RESXY_ResetValue (0x00000000UL) /*!< Reset value of TEX0RESXY register.                                 */

        /* TEX0RESX @Bits 0..15 : Specifies the size of resolution X */
        #define GPU_CORE_TEX0RESXY_TEX0RESX_Pos (0UL)      /*!< Position of TEX0RESX field.                                          */
        #define GPU_CORE_TEX0RESXY_TEX0RESX_Msk (0xFFFFUL << GPU_CORE_TEX0RESXY_TEX0RESX_Pos) /*!< Bit mask of TEX0RESX field.       */

        /* TEX0RESY @Bits 16..31 : Specifies the size of resolution Y */
        #define GPU_CORE_TEX0RESXY_TEX0RESY_Pos (16UL)     /*!< Position of TEX0RESY field.                                          */
        #define GPU_CORE_TEX0RESXY_TEX0RESY_Msk (0xFFFFUL << GPU_CORE_TEX0RESXY_TEX0RESY_Pos) /*!< Bit mask of TEX0RESY field.       */


        /* GPU_CORE_TEX1BASE: Base address of drawing surface 1. */
        #define GPU_CORE_TEX1BASE_ResetValue (0x00000000UL) /*!< Reset value of TEX1BASE register.                                   */

        /* TEX1BASE @Bits 0..31 : Specifies the base address or drawing surface 1. */
        #define GPU_CORE_TEX1BASE_TEX1BASE_Pos (0UL)       /*!< Position of TEX1BASE field.                                          */
        #define GPU_CORE_TEX1BASE_TEX1BASE_Msk (0xFFFFFFFFUL << GPU_CORE_TEX1BASE_TEX1BASE_Pos) /*!< Bit mask of TEX1BASE field.     */


        /* GPU_CORE_TEX1FSTRIDE: Image 1 Mode and Stride */
        #define GPU_CORE_TEX1FSTRIDE_ResetValue (0x00000000UL) /*!< Reset value of TEX1FSTRIDE register.                             */

        /* TEX1STRIDE @Bits 0..15 : Specifies the image stride distance in bytes from one scanline to another (signed) */
        #define GPU_CORE_TEX1FSTRIDE_TEX1STRIDE_Pos (0UL)  /*!< Position of TEX1STRIDE field.                                        */
        #define GPU_CORE_TEX1FSTRIDE_TEX1STRIDE_Msk (0xFFFFUL << GPU_CORE_TEX1FSTRIDE_TEX1STRIDE_Pos) /*!< Bit mask of TEX1STRIDE
                                                                                    field.*/

        /* TEX1MODE @Bits 16..23 : Specifies the image mode */
        #define GPU_CORE_TEX1FSTRIDE_TEX1MODE_Pos (16UL)   /*!< Position of TEX1MODE field.                                          */
        #define GPU_CORE_TEX1FSTRIDE_TEX1MODE_Msk (0xFFUL << GPU_CORE_TEX1FSTRIDE_TEX1MODE_Pos) /*!< Bit mask of TEX1MODE field.     */

        /* TEX1FORMAT @Bits 24..31 : Specifies the image format */
        #define GPU_CORE_TEX1FSTRIDE_TEX1FORMAT_Pos (24UL) /*!< Position of TEX1FORMAT field.                                        */
        #define GPU_CORE_TEX1FSTRIDE_TEX1FORMAT_Msk (0xFFUL << GPU_CORE_TEX1FSTRIDE_TEX1FORMAT_Pos) /*!< Bit mask of TEX1FORMAT
                                                                                    field.*/


        /* GPU_CORE_TEX1RESXY: Image 1 Resolution */
        #define GPU_CORE_TEX1RESXY_ResetValue (0x00000000UL) /*!< Reset value of TEX1RESXY register.                                 */

        /* TEX1RESX @Bits 0..15 : Specifies the size of resolution X */
        #define GPU_CORE_TEX1RESXY_TEX1RESX_Pos (0UL)      /*!< Position of TEX1RESX field.                                          */
        #define GPU_CORE_TEX1RESXY_TEX1RESX_Msk (0xFFFFUL << GPU_CORE_TEX1RESXY_TEX1RESX_Pos) /*!< Bit mask of TEX1RESX field.       */

        /* TEX1RESY @Bits 16..31 : Specifies the size of resolution Y */
        #define GPU_CORE_TEX1RESXY_TEX1RESY_Pos (16UL)     /*!< Position of TEX1RESY field.                                          */
        #define GPU_CORE_TEX1RESXY_TEX1RESY_Msk (0xFFFFUL << GPU_CORE_TEX1RESXY_TEX1RESY_Pos) /*!< Bit mask of TEX1RESY field.       */


        /* GPU_CORE_TEXCOLOR: Texture Maps default color (for use with Luminance and Alpha-only color formats) */
        #define GPU_CORE_TEXCOLOR_ResetValue (0x00000000UL) /*!< Reset value of TEXCOLOR register.                                   */

        /* TEXCOLORRED @Bits 0..7 : Specifies the Red (R) value */
        #define GPU_CORE_TEXCOLOR_TEXCOLORRED_Pos (0UL)    /*!< Position of TEXCOLORRED field.                                       */
        #define GPU_CORE_TEXCOLOR_TEXCOLORRED_Msk (0xFFUL << GPU_CORE_TEXCOLOR_TEXCOLORRED_Pos) /*!< Bit mask of TEXCOLORRED field.  */

        /* TEXCOLORGREEN @Bits 8..15 : Specifies the Green (G) value */
        #define GPU_CORE_TEXCOLOR_TEXCOLORGREEN_Pos (8UL)  /*!< Position of TEXCOLORGREEN field.                                     */
        #define GPU_CORE_TEXCOLOR_TEXCOLORGREEN_Msk (0xFFUL << GPU_CORE_TEXCOLOR_TEXCOLORGREEN_Pos) /*!< Bit mask of TEXCOLORGREEN
                                                                                    field.*/

        /* TEXCOLORBLUE @Bits 16..23 : Specifies the Blue (B) value */
        #define GPU_CORE_TEXCOLOR_TEXCOLORBLUE_Pos (16UL)  /*!< Position of TEXCOLORBLUE field.                                      */
        #define GPU_CORE_TEXCOLOR_TEXCOLORBLUE_Msk (0xFFUL << GPU_CORE_TEXCOLOR_TEXCOLORBLUE_Pos) /*!< Bit mask of TEXCOLORBLUE
                                                                                    field.*/

        /* TEXCOLORALPHA @Bits 24..31 : Specifies the Alpha (A) value */
        #define GPU_CORE_TEXCOLOR_TEXCOLORALPHA_Pos (24UL) /*!< Position of TEXCOLORALPHA field.                                     */
        #define GPU_CORE_TEXCOLOR_TEXCOLORALPHA_Msk (0xFFUL << GPU_CORE_TEXCOLOR_TEXCOLORALPHA_Pos) /*!< Bit mask of TEXCOLORALPHA
                                                                                    field.*/


        /* GPU_CORE_TEX2BASE: Base address of drawing surface 2. */
        #define GPU_CORE_TEX2BASE_ResetValue (0x00000000UL) /*!< Reset value of TEX2BASE register.                                   */

        /* TEX2BASE @Bits 0..31 : Specifies the base address or drawing surface 2. */
        #define GPU_CORE_TEX2BASE_TEX2BASE_Pos (0UL)       /*!< Position of TEX2BASE field.                                          */
        #define GPU_CORE_TEX2BASE_TEX2BASE_Msk (0xFFFFFFFFUL << GPU_CORE_TEX2BASE_TEX2BASE_Pos) /*!< Bit mask of TEX2BASE field.     */


        /* GPU_CORE_TEX2FSTRIDE: Image 2 Mode and Stride */
        #define GPU_CORE_TEX2FSTRIDE_ResetValue (0x00000000UL) /*!< Reset value of TEX2FSTRIDE register.                             */

        /* TEX2STRIDE @Bits 0..15 : Specifies the image stride distance in bytes from one scanline to another (signed) */
        #define GPU_CORE_TEX2FSTRIDE_TEX2STRIDE_Pos (0UL)  /*!< Position of TEX2STRIDE field.                                        */
        #define GPU_CORE_TEX2FSTRIDE_TEX2STRIDE_Msk (0xFFFFUL << GPU_CORE_TEX2FSTRIDE_TEX2STRIDE_Pos) /*!< Bit mask of TEX2STRIDE
                                                                                    field.*/

        /* TEX2MODE @Bits 16..23 : Specifies the image mode */
        #define GPU_CORE_TEX2FSTRIDE_TEX2MODE_Pos (16UL)   /*!< Position of TEX2MODE field.                                          */
        #define GPU_CORE_TEX2FSTRIDE_TEX2MODE_Msk (0xFFUL << GPU_CORE_TEX2FSTRIDE_TEX2MODE_Pos) /*!< Bit mask of TEX2MODE field.     */

        /* TEX2FORMAT @Bits 24..31 : Specifies the image format */
        #define GPU_CORE_TEX2FSTRIDE_TEX2FORMAT_Pos (24UL) /*!< Position of TEX2FORMAT field.                                        */
        #define GPU_CORE_TEX2FSTRIDE_TEX2FORMAT_Msk (0xFFUL << GPU_CORE_TEX2FSTRIDE_TEX2FORMAT_Pos) /*!< Bit mask of TEX2FORMAT
                                                                                    field.*/


        /* GPU_CORE_TEX2RESXY: Image 2 Resolution */
        #define GPU_CORE_TEX2RESXY_ResetValue (0x00000000UL) /*!< Reset value of TEX2RESXY register.                                 */

        /* TEX2RESX @Bits 0..15 : Specifies the size of resolution X */
        #define GPU_CORE_TEX2RESXY_TEX2RESX_Pos (0UL)      /*!< Position of TEX2RESX field.                                          */
        #define GPU_CORE_TEX2RESXY_TEX2RESX_Msk (0xFFFFUL << GPU_CORE_TEX2RESXY_TEX2RESX_Pos) /*!< Bit mask of TEX2RESX field.       */

        /* TEX2RESY @Bits 16..31 : Specifies the size of resolution Y */
        #define GPU_CORE_TEX2RESXY_TEX2RESY_Pos (16UL)     /*!< Position of TEX2RESY field.                                          */
        #define GPU_CORE_TEX2RESXY_TEX2RESY_Msk (0xFFFFUL << GPU_CORE_TEX2RESXY_TEX2RESY_Pos) /*!< Bit mask of TEX2RESY field.       */


        /* GPU_CORE_TEX3BASE: Base address of drawing surface 3. */
        #define GPU_CORE_TEX3BASE_ResetValue (0x00000000UL) /*!< Reset value of TEX3BASE register.                                   */

        /* TEX3BASE @Bits 0..31 : Specifies the base address or drawing surface 3. */
        #define GPU_CORE_TEX3BASE_TEX3BASE_Pos (0UL)       /*!< Position of TEX3BASE field.                                          */
        #define GPU_CORE_TEX3BASE_TEX3BASE_Msk (0xFFFFFFFFUL << GPU_CORE_TEX3BASE_TEX3BASE_Pos) /*!< Bit mask of TEX3BASE field.     */


        /* GPU_CORE_TEX3FSTRIDE: Image 3 Mode and Stride */
        #define GPU_CORE_TEX3FSTRIDE_ResetValue (0x00000000UL) /*!< Reset value of TEX3FSTRIDE register.                             */

        /* TEX3STRIDE @Bits 0..15 : Specifies the image stride distance in bytes from one scanline to another (signed) */
        #define GPU_CORE_TEX3FSTRIDE_TEX3STRIDE_Pos (0UL)  /*!< Position of TEX3STRIDE field.                                        */
        #define GPU_CORE_TEX3FSTRIDE_TEX3STRIDE_Msk (0xFFFFUL << GPU_CORE_TEX3FSTRIDE_TEX3STRIDE_Pos) /*!< Bit mask of TEX3STRIDE
                                                                                    field.*/

        /* TEX3MODE @Bits 16..23 : Specifies the image mode */
        #define GPU_CORE_TEX3FSTRIDE_TEX3MODE_Pos (16UL)   /*!< Position of TEX3MODE field.                                          */
        #define GPU_CORE_TEX3FSTRIDE_TEX3MODE_Msk (0xFFUL << GPU_CORE_TEX3FSTRIDE_TEX3MODE_Pos) /*!< Bit mask of TEX3MODE field.     */

        /* TEX3FORMAT @Bits 24..31 : Specifies the image format */
        #define GPU_CORE_TEX3FSTRIDE_TEX3FORMAT_Pos (24UL) /*!< Position of TEX3FORMAT field.                                        */
        #define GPU_CORE_TEX3FSTRIDE_TEX3FORMAT_Msk (0xFFUL << GPU_CORE_TEX3FSTRIDE_TEX3FORMAT_Pos) /*!< Bit mask of TEX3FORMAT
                                                                                    field.*/


        /* GPU_CORE_TEX3RESXY: Image 3 Resolution */
        #define GPU_CORE_TEX3RESXY_ResetValue (0x00000000UL) /*!< Reset value of TEX3RESXY register.                                 */

        /* TEX3RESX @Bits 0..15 : Specifies the size of resolution X */
        #define GPU_CORE_TEX3RESXY_TEX3RESX_Pos (0UL)      /*!< Position of TEX3RESX field.                                          */
        #define GPU_CORE_TEX3RESXY_TEX3RESX_Msk (0xFFFFUL << GPU_CORE_TEX3RESXY_TEX3RESX_Pos) /*!< Bit mask of TEX3RESX field.       */

        /* TEX3RESY @Bits 16..31 : Specifies the size of resolution Y */
        #define GPU_CORE_TEX3RESXY_TEX3RESY_Pos (16UL)     /*!< Position of TEX3RESY field.                                          */
        #define GPU_CORE_TEX3RESXY_TEX3RESY_Msk (0xFFFFUL << GPU_CORE_TEX3RESXY_TEX3RESY_Pos) /*!< Bit mask of TEX3RESY field.       */


        /* GPU_CORE_BREAKPOINT: (unspecified) */
        #define GPU_CORE_BREAKPOINT_ResetValue (0x00000000UL) /*!< Reset value of BREAKPOINT register.                               */

        /* BREAKPOINT @Bits 0..31 : (unspecified) */
        #define GPU_CORE_BREAKPOINT_BREAKPOINT_Pos (0UL)   /*!< Position of BREAKPOINT field.                                        */
        #define GPU_CORE_BREAKPOINT_BREAKPOINT_Msk (0xFFFFFFFFUL << GPU_CORE_BREAKPOINT_BREAKPOINT_Pos) /*!< Bit mask of BREAKPOINT
                                                                                    field.*/


        /* GPU_CORE_BREAKPOINTMASK: (unspecified) */
        #define GPU_CORE_BREAKPOINTMASK_ResetValue (0x00000000UL) /*!< Reset value of BREAKPOINTMASK register.                       */

        /* BREAKPOINTMASK @Bits 0..31 : (unspecified) */
        #define GPU_CORE_BREAKPOINTMASK_BREAKPOINTMASK_Pos (0UL) /*!< Position of BREAKPOINTMASK field.                              */
        #define GPU_CORE_BREAKPOINTMASK_BREAKPOINTMASK_Msk (0xFFFFFFFFUL << GPU_CORE_BREAKPOINTMASK_BREAKPOINTMASK_Pos) /*!< Bit mask
                                                                                    of BREAKPOINTMASK field.*/


        /* GPU_CORE_CGCMD: Enable Clock gating */
        #define GPU_CORE_CGCMD_ResetValue (0x00000000UL)   /*!< Reset value of CGCMD register.                                       */

        /* CGCMDSTOP @Bit 0 : When set to 1, the clock stops */
        #define GPU_CORE_CGCMD_CGCMDSTOP_Pos (0UL)         /*!< Position of CGCMDSTOP field.                                         */
        #define GPU_CORE_CGCMD_CGCMDSTOP_Msk (0x1UL << GPU_CORE_CGCMD_CGCMDSTOP_Pos) /*!< Bit mask of CGCMDSTOP field.               */

        /* CGCMDPOS01LEN30 @Bits 1..31 : Revered */
        #define GPU_CORE_CGCMD_CGCMDPOS01LEN30_Pos (1UL)   /*!< Position of CGCMDPOS01LEN30 field.                                   */
        #define GPU_CORE_CGCMD_CGCMDPOS01LEN30_Msk (0x7FFFFFFFUL << GPU_CORE_CGCMD_CGCMDPOS01LEN30_Pos) /*!< Bit mask of
                                                                                    CGCMDPOS01LEN30 field.*/


        /* GPU_CORE_CGCTRL: Clock gating controller */
        #define GPU_CORE_CGCTRL_ResetValue (0x00000000UL)  /*!< Reset value of CGCTRL register.                                      */

        /* CGCTRLCL @Bit 0 : Disable clock gating for the Command List Processor */
        #define GPU_CORE_CGCTRL_CGCTRLCL_Pos (0UL)         /*!< Position of CGCTRLCL field.                                          */
        #define GPU_CORE_CGCTRL_CGCTRLCL_Msk (0x1UL << GPU_CORE_CGCTRL_CGCTRLCL_Pos) /*!< Bit mask of CGCTRLCL field.                */

        /* CGCTRLRF @Bit 1 : Disable clock gating for the GPU Configuration Register File */
        #define GPU_CORE_CGCTRL_CGCTRLRF_Pos (1UL)         /*!< Position of CGCTRLRF field.                                          */
        #define GPU_CORE_CGCTRL_CGCTRLRF_Msk (0x1UL << GPU_CORE_CGCTRL_CGCTRLRF_Pos) /*!< Bit mask of CGCTRLRF field.                */

        /* CGCTRLPOS02LEN01 @Bit 2 : Revered */
        #define GPU_CORE_CGCTRL_CGCTRLPOS02LEN01_Pos (2UL) /*!< Position of CGCTRLPOS02LEN01 field.                                  */
        #define GPU_CORE_CGCTRL_CGCTRLPOS02LEN01_Msk (0x1UL << GPU_CORE_CGCTRL_CGCTRLPOS02LEN01_Pos) /*!< Bit mask of CGCTRLPOS02LEN01
                                                                                    field.*/

        /* CGCTRLROPC0 @Bit 3 : Disable clock gating for the Render Output Unit of core 0 */
        #define GPU_CORE_CGCTRL_CGCTRLROPC0_Pos (3UL)      /*!< Position of CGCTRLROPC0 field.                                       */
        #define GPU_CORE_CGCTRL_CGCTRLROPC0_Msk (0x1UL << GPU_CORE_CGCTRL_CGCTRLROPC0_Pos) /*!< Bit mask of CGCTRLROPC0 field.       */

        /* CGCTRLROPC1 @Bit 4 : Revered */
        #define GPU_CORE_CGCTRL_CGCTRLROPC1_Pos (4UL)      /*!< Position of CGCTRLROPC1 field.                                       */
        #define GPU_CORE_CGCTRL_CGCTRLROPC1_Msk (0x1UL << GPU_CORE_CGCTRL_CGCTRLROPC1_Pos) /*!< Bit mask of CGCTRLROPC1 field.       */

        /* CGCTRLROPC2 @Bit 5 : Revered */
        #define GPU_CORE_CGCTRL_CGCTRLROPC2_Pos (5UL)      /*!< Position of CGCTRLROPC2 field.                                       */
        #define GPU_CORE_CGCTRL_CGCTRLROPC2_Msk (0x1UL << GPU_CORE_CGCTRL_CGCTRLROPC2_Pos) /*!< Bit mask of CGCTRLROPC2 field.       */

        /* CGCTRLROPC3 @Bit 6 : Revered */
        #define GPU_CORE_CGCTRL_CGCTRLROPC3_Pos (6UL)      /*!< Position of CGCTRLROPC3 field.                                       */
        #define GPU_CORE_CGCTRL_CGCTRLROPC3_Msk (0x1UL << GPU_CORE_CGCTRL_CGCTRLROPC3_Pos) /*!< Bit mask of CGCTRLROPC3 field.       */

        /* CGCTRLBUS @Bit 7 : Disable clock gating for the BusInterface (memory System) */
        #define GPU_CORE_CGCTRL_CGCTRLBUS_Pos (7UL)        /*!< Position of CGCTRLBUS field.                                         */
        #define GPU_CORE_CGCTRL_CGCTRLBUS_Msk (0x1UL << GPU_CORE_CGCTRL_CGCTRLBUS_Pos) /*!< Bit mask of CGCTRLBUS field.             */

        /* CGCTRLPOS08LEN03 @Bits 8..10 : Revered */
        #define GPU_CORE_CGCTRL_CGCTRLPOS08LEN03_Pos (8UL) /*!< Position of CGCTRLPOS08LEN03 field.                                  */
        #define GPU_CORE_CGCTRL_CGCTRLPOS08LEN03_Msk (0x7UL << GPU_CORE_CGCTRL_CGCTRLPOS08LEN03_Pos) /*!< Bit mask of CGCTRLPOS08LEN03
                                                                                    field.*/

        /* CGCTRLPIPEC0 @Bit 11 : Disable clock gating for Core 0 Pipeline */
        #define GPU_CORE_CGCTRL_CGCTRLPIPEC0_Pos (11UL)    /*!< Position of CGCTRLPIPEC0 field.                                      */
        #define GPU_CORE_CGCTRL_CGCTRLPIPEC0_Msk (0x1UL << GPU_CORE_CGCTRL_CGCTRLPIPEC0_Pos) /*!< Bit mask of CGCTRLPIPEC0 field.    */

        /* CGCTRLPIPEC1 @Bit 12 : Revered */
        #define GPU_CORE_CGCTRL_CGCTRLPIPEC1_Pos (12UL)    /*!< Position of CGCTRLPIPEC1 field.                                      */
        #define GPU_CORE_CGCTRL_CGCTRLPIPEC1_Msk (0x1UL << GPU_CORE_CGCTRL_CGCTRLPIPEC1_Pos) /*!< Bit mask of CGCTRLPIPEC1 field.    */

        /* CGCTRLPIPEC2 @Bit 13 : Revered */
        #define GPU_CORE_CGCTRL_CGCTRLPIPEC2_Pos (13UL)    /*!< Position of CGCTRLPIPEC2 field.                                      */
        #define GPU_CORE_CGCTRL_CGCTRLPIPEC2_Msk (0x1UL << GPU_CORE_CGCTRL_CGCTRLPIPEC2_Pos) /*!< Bit mask of CGCTRLPIPEC2 field.    */

        /* CGCTRLPIPEC3 @Bit 14 : Revered */
        #define GPU_CORE_CGCTRL_CGCTRLPIPEC3_Pos (14UL)    /*!< Position of CGCTRLPIPEC3 field.                                      */
        #define GPU_CORE_CGCTRL_CGCTRLPIPEC3_Msk (0x1UL << GPU_CORE_CGCTRL_CGCTRLPIPEC3_Pos) /*!< Bit mask of CGCTRLPIPEC3 field.    */

        /* CGCTRLRFC0 @Bit 15 : Disable clock gating for Core 0 Register File */
        #define GPU_CORE_CGCTRL_CGCTRLRFC0_Pos (15UL)      /*!< Position of CGCTRLRFC0 field.                                        */
        #define GPU_CORE_CGCTRL_CGCTRLRFC0_Msk (0x1UL << GPU_CORE_CGCTRL_CGCTRLRFC0_Pos) /*!< Bit mask of CGCTRLRFC0 field.          */

        /* CGCTRLRFC1 @Bit 16 : Revered */
        #define GPU_CORE_CGCTRL_CGCTRLRFC1_Pos (16UL)      /*!< Position of CGCTRLRFC1 field.                                        */
        #define GPU_CORE_CGCTRL_CGCTRLRFC1_Msk (0x1UL << GPU_CORE_CGCTRL_CGCTRLRFC1_Pos) /*!< Bit mask of CGCTRLRFC1 field.          */

        /* CGCTRLRFC2 @Bit 17 : Revered */
        #define GPU_CORE_CGCTRL_CGCTRLRFC2_Pos (17UL)      /*!< Position of CGCTRLRFC2 field.                                        */
        #define GPU_CORE_CGCTRL_CGCTRLRFC2_Msk (0x1UL << GPU_CORE_CGCTRL_CGCTRLRFC2_Pos) /*!< Bit mask of CGCTRLRFC2 field.          */

        /* CGCTRLRFC3 @Bit 18 : Revered */
        #define GPU_CORE_CGCTRL_CGCTRLRFC3_Pos (18UL)      /*!< Position of CGCTRLRFC3 field.                                        */
        #define GPU_CORE_CGCTRL_CGCTRLRFC3_Msk (0x1UL << GPU_CORE_CGCTRL_CGCTRLRFC3_Pos) /*!< Bit mask of CGCTRLRFC3 field.          */

        /* CGCTRLSCHC0 @Bit 19 : Disable clock gating for Core 0 Scheduler */
        #define GPU_CORE_CGCTRL_CGCTRLSCHC0_Pos (19UL)     /*!< Position of CGCTRLSCHC0 field.                                       */
        #define GPU_CORE_CGCTRL_CGCTRLSCHC0_Msk (0x1UL << GPU_CORE_CGCTRL_CGCTRLSCHC0_Pos) /*!< Bit mask of CGCTRLSCHC0 field.       */

        /* CGCTRLSCHC1 @Bit 20 : Revered */
        #define GPU_CORE_CGCTRL_CGCTRLSCHC1_Pos (20UL)     /*!< Position of CGCTRLSCHC1 field.                                       */
        #define GPU_CORE_CGCTRL_CGCTRLSCHC1_Msk (0x1UL << GPU_CORE_CGCTRL_CGCTRLSCHC1_Pos) /*!< Bit mask of CGCTRLSCHC1 field.       */

        /* CGCTRLSCHC2 @Bit 21 : Revered */
        #define GPU_CORE_CGCTRL_CGCTRLSCHC2_Pos (21UL)     /*!< Position of CGCTRLSCHC2 field.                                       */
        #define GPU_CORE_CGCTRL_CGCTRLSCHC2_Msk (0x1UL << GPU_CORE_CGCTRL_CGCTRLSCHC2_Pos) /*!< Bit mask of CGCTRLSCHC2 field.       */

        /* CGCTRLSCHC3 @Bit 22 : Revered */
        #define GPU_CORE_CGCTRL_CGCTRLSCHC3_Pos (22UL)     /*!< Position of CGCTRLSCHC3 field.                                       */
        #define GPU_CORE_CGCTRL_CGCTRLSCHC3_Msk (0x1UL << GPU_CORE_CGCTRL_CGCTRLSCHC3_Pos) /*!< Bit mask of CGCTRLSCHC3 field.       */

        /* CGCTRLC0 @Bit 23 : Disable clock gating for Core 0 */
        #define GPU_CORE_CGCTRL_CGCTRLC0_Pos (23UL)        /*!< Position of CGCTRLC0 field.                                          */
        #define GPU_CORE_CGCTRL_CGCTRLC0_Msk (0x1UL << GPU_CORE_CGCTRL_CGCTRLC0_Pos) /*!< Bit mask of CGCTRLC0 field.                */

        /* CGCTRLC1 @Bit 24 : Revered */
        #define GPU_CORE_CGCTRL_CGCTRLC1_Pos (24UL)        /*!< Position of CGCTRLC1 field.                                          */
        #define GPU_CORE_CGCTRL_CGCTRLC1_Msk (0x1UL << GPU_CORE_CGCTRL_CGCTRLC1_Pos) /*!< Bit mask of CGCTRLC1 field.                */

        /* CGCTRLC2 @Bit 25 : Revered */
        #define GPU_CORE_CGCTRL_CGCTRLC2_Pos (25UL)        /*!< Position of CGCTRLC2 field.                                          */
        #define GPU_CORE_CGCTRL_CGCTRLC2_Msk (0x1UL << GPU_CORE_CGCTRL_CGCTRLC2_Pos) /*!< Bit mask of CGCTRLC2 field.                */

        /* CGCTRLC3 @Bit 26 : Revered */
        #define GPU_CORE_CGCTRL_CGCTRLC3_Pos (26UL)        /*!< Position of CGCTRLC3 field.                                          */
        #define GPU_CORE_CGCTRL_CGCTRLC3_Msk (0x1UL << GPU_CORE_CGCTRL_CGCTRLC3_Pos) /*!< Bit mask of CGCTRLC3 field.                */

        /* CGCTRLMEMC0 @Bit 27 : Disable clock gating for Core 0 Instruction Memory */
        #define GPU_CORE_CGCTRL_CGCTRLMEMC0_Pos (27UL)     /*!< Position of CGCTRLMEMC0 field.                                       */
        #define GPU_CORE_CGCTRL_CGCTRLMEMC0_Msk (0x1UL << GPU_CORE_CGCTRL_CGCTRLMEMC0_Pos) /*!< Bit mask of CGCTRLMEMC0 field.       */

        /* CGCTRLMEMC1 @Bit 28 : Revered */
        #define GPU_CORE_CGCTRL_CGCTRLMEMC1_Pos (28UL)     /*!< Position of CGCTRLMEMC1 field.                                       */
        #define GPU_CORE_CGCTRL_CGCTRLMEMC1_Msk (0x1UL << GPU_CORE_CGCTRL_CGCTRLMEMC1_Pos) /*!< Bit mask of CGCTRLMEMC1 field.       */

        /* CGCTRLMEMC2 @Bit 29 : Revered */
        #define GPU_CORE_CGCTRL_CGCTRLMEMC2_Pos (29UL)     /*!< Position of CGCTRLMEMC2 field.                                       */
        #define GPU_CORE_CGCTRL_CGCTRLMEMC2_Msk (0x1UL << GPU_CORE_CGCTRL_CGCTRLMEMC2_Pos) /*!< Bit mask of CGCTRLMEMC2 field.       */

        /* CGCTRLMEMC3 @Bit 30 : Revered */
        #define GPU_CORE_CGCTRL_CGCTRLMEMC3_Pos (30UL)     /*!< Position of CGCTRLMEMC3 field.                                       */
        #define GPU_CORE_CGCTRL_CGCTRLMEMC3_Msk (0x1UL << GPU_CORE_CGCTRL_CGCTRLMEMC3_Pos) /*!< Bit mask of CGCTRLMEMC3 field.       */

        /* CGCTRLALL @Bit 31 : Disable clock gating for all modules */
        #define GPU_CORE_CGCTRL_CGCTRLALL_Pos (31UL)       /*!< Position of CGCTRLALL field.                                         */
        #define GPU_CORE_CGCTRL_CGCTRLALL_Msk (0x1UL << GPU_CORE_CGCTRL_CGCTRLALL_Pos) /*!< Bit mask of CGCTRLALL field.             */


        /* GPU_CORE_DIRTYMIN: Read the Dirty_Min value. Resets dirty region to resolution size on write function. */
        #define GPU_CORE_DIRTYMIN_ResetValue (0xFFFFFFFFUL) /*!< Reset value of DIRTYMIN register.                                   */

        /* DIRTYMIN @Bits 0..31 : Write any value to reset dirty region to resolution size */
        #define GPU_CORE_DIRTYMIN_DIRTYMIN_Pos (0UL)       /*!< Position of DIRTYMIN field.                                          */
        #define GPU_CORE_DIRTYMIN_DIRTYMIN_Msk (0xFFFFFFFFUL << GPU_CORE_DIRTYMIN_DIRTYMIN_Pos) /*!< Bit mask of DIRTYMIN field.     */


        /* GPU_CORE_DIRTYMAX: Read the Dirty_Max value */
        #define GPU_CORE_DIRTYMAX_ResetValue (0x00000000UL) /*!< Reset value of DIRTYMAX register.                                   */

        /* DIRTYMAX @Bits 0..31 : Read the Dirty_max value */
        #define GPU_CORE_DIRTYMAX_DIRTYMAX_Pos (0UL)       /*!< Position of DIRTYMAX field.                                          */
        #define GPU_CORE_DIRTYMAX_DIRTYMAX_Msk (0xFFFFFFFFUL << GPU_CORE_DIRTYMAX_DIRTYMAX_Pos) /*!< Bit mask of DIRTYMAX field.     */


        /* GPU_CORE_CONVCOEFRAB: Specifies the YUV coefficients for Red color. Part one */
        #define GPU_CORE_CONVCOEFRAB_ResetValue (0x00000000UL) /*!< Reset value of CONVCOEFRAB register.                             */

        /* CONVCOEFRA @Bits 0..15 : Specifies the YUV coefficients for Red color. Part A */
        #define GPU_CORE_CONVCOEFRAB_CONVCOEFRA_Pos (0UL)  /*!< Position of CONVCOEFRA field.                                        */
        #define GPU_CORE_CONVCOEFRAB_CONVCOEFRA_Msk (0xFFFFUL << GPU_CORE_CONVCOEFRAB_CONVCOEFRA_Pos) /*!< Bit mask of CONVCOEFRA
                                                                                    field.*/

        /* CONVCOEFRB @Bits 16..31 : Specifies the YUV coefficients for Red color. Part B */
        #define GPU_CORE_CONVCOEFRAB_CONVCOEFRB_Pos (16UL) /*!< Position of CONVCOEFRB field.                                        */
        #define GPU_CORE_CONVCOEFRAB_CONVCOEFRB_Msk (0xFFFFUL << GPU_CORE_CONVCOEFRAB_CONVCOEFRB_Pos) /*!< Bit mask of CONVCOEFRB
                                                                                    field.*/


        /* GPU_CORE_CONVCOEFRCD: Specifies the YUV coefficients for Red color. Part two */
        #define GPU_CORE_CONVCOEFRCD_ResetValue (0x00000000UL) /*!< Reset value of CONVCOEFRCD register.                             */

        /* CONVCOEFRC @Bits 0..15 : Specifies the YUV coefficients for Red color. Part C */
        #define GPU_CORE_CONVCOEFRCD_CONVCOEFRC_Pos (0UL)  /*!< Position of CONVCOEFRC field.                                        */
        #define GPU_CORE_CONVCOEFRCD_CONVCOEFRC_Msk (0xFFFFUL << GPU_CORE_CONVCOEFRCD_CONVCOEFRC_Pos) /*!< Bit mask of CONVCOEFRC
                                                                                    field.*/

        /* CONVCOEFRD @Bits 16..31 : Specifies the YUV coefficients for Red color. Part D */
        #define GPU_CORE_CONVCOEFRCD_CONVCOEFRD_Pos (16UL) /*!< Position of CONVCOEFRD field.                                        */
        #define GPU_CORE_CONVCOEFRCD_CONVCOEFRD_Msk (0xFFFFUL << GPU_CORE_CONVCOEFRCD_CONVCOEFRD_Pos) /*!< Bit mask of CONVCOEFRD
                                                                                    field.*/


        /* GPU_CORE_CONVCOEFGAB: Specifies the YUV coefficients for Green color. Part one */
        #define GPU_CORE_CONVCOEFGAB_ResetValue (0x00000000UL) /*!< Reset value of CONVCOEFGAB register.                             */

        /* CONVCOEFGA @Bits 0..15 : Specifies the YUV coefficients for Green color. Part A */
        #define GPU_CORE_CONVCOEFGAB_CONVCOEFGA_Pos (0UL)  /*!< Position of CONVCOEFGA field.                                        */
        #define GPU_CORE_CONVCOEFGAB_CONVCOEFGA_Msk (0xFFFFUL << GPU_CORE_CONVCOEFGAB_CONVCOEFGA_Pos) /*!< Bit mask of CONVCOEFGA
                                                                                    field.*/

        /* CONVCOEFGB @Bits 16..31 : Specifies the YUV coefficients for Green color. Part B */
        #define GPU_CORE_CONVCOEFGAB_CONVCOEFGB_Pos (16UL) /*!< Position of CONVCOEFGB field.                                        */
        #define GPU_CORE_CONVCOEFGAB_CONVCOEFGB_Msk (0xFFFFUL << GPU_CORE_CONVCOEFGAB_CONVCOEFGB_Pos) /*!< Bit mask of CONVCOEFGB
                                                                                    field.*/


        /* GPU_CORE_CONVCOEFGCD: Specifies the YUV coefficients for Gren color. Part two */
        #define GPU_CORE_CONVCOEFGCD_ResetValue (0x00000000UL) /*!< Reset value of CONVCOEFGCD register.                             */

        /* CONVCOEFGC @Bits 0..15 : Specifies the YUV coefficients for Green color. Part C */
        #define GPU_CORE_CONVCOEFGCD_CONVCOEFGC_Pos (0UL)  /*!< Position of CONVCOEFGC field.                                        */
        #define GPU_CORE_CONVCOEFGCD_CONVCOEFGC_Msk (0xFFFFUL << GPU_CORE_CONVCOEFGCD_CONVCOEFGC_Pos) /*!< Bit mask of CONVCOEFGC
                                                                                    field.*/

        /* CONVCOEFGD @Bits 16..31 : Specifies the YUV coefficients for Green color. Part D */
        #define GPU_CORE_CONVCOEFGCD_CONVCOEFGD_Pos (16UL) /*!< Position of CONVCOEFGD field.                                        */
        #define GPU_CORE_CONVCOEFGCD_CONVCOEFGD_Msk (0xFFFFUL << GPU_CORE_CONVCOEFGCD_CONVCOEFGD_Pos) /*!< Bit mask of CONVCOEFGD
                                                                                    field.*/


        /* GPU_CORE_CONVCOEFBAB: Specifies the YUV coefficients for Blue color. Part one */
        #define GPU_CORE_CONVCOEFBAB_ResetValue (0x00000000UL) /*!< Reset value of CONVCOEFBAB register.                             */

        /* CONVCOEFBA @Bits 0..15 : Specifies the YUV coefficients for Blue color. Part A */
        #define GPU_CORE_CONVCOEFBAB_CONVCOEFBA_Pos (0UL)  /*!< Position of CONVCOEFBA field.                                        */
        #define GPU_CORE_CONVCOEFBAB_CONVCOEFBA_Msk (0xFFFFUL << GPU_CORE_CONVCOEFBAB_CONVCOEFBA_Pos) /*!< Bit mask of CONVCOEFBA
                                                                                    field.*/

        /* CONVCOEFBB @Bits 16..31 : Specifies the YUV coefficients for Blue color. Part B */
        #define GPU_CORE_CONVCOEFBAB_CONVCOEFBB_Pos (16UL) /*!< Position of CONVCOEFBB field.                                        */
        #define GPU_CORE_CONVCOEFBAB_CONVCOEFBB_Msk (0xFFFFUL << GPU_CORE_CONVCOEFBAB_CONVCOEFBB_Pos) /*!< Bit mask of CONVCOEFBB
                                                                                    field.*/


        /* GPU_CORE_CONVCOEFBCD: Specifies the YUV coefficients for Blue color. Part two */
        #define GPU_CORE_CONVCOEFBCD_ResetValue (0x00000000UL) /*!< Reset value of CONVCOEFBCD register.                             */

        /* CONVCOEFBC @Bits 0..15 : Specifies the YUV coefficients for Blue color. Part C */
        #define GPU_CORE_CONVCOEFBCD_CONVCOEFBC_Pos (0UL)  /*!< Position of CONVCOEFBC field.                                        */
        #define GPU_CORE_CONVCOEFBCD_CONVCOEFBC_Msk (0xFFFFUL << GPU_CORE_CONVCOEFBCD_CONVCOEFBC_Pos) /*!< Bit mask of CONVCOEFBC
                                                                                    field.*/

        /* CONVCOEFBD @Bits 16..31 : Specifies the YUV coefficients for Blue color. Part D */
        #define GPU_CORE_CONVCOEFBCD_CONVCOEFBD_Pos (16UL) /*!< Position of CONVCOEFBD field.                                        */
        #define GPU_CORE_CONVCOEFBCD_CONVCOEFBD_Msk (0xFFFFUL << GPU_CORE_CONVCOEFBCD_CONVCOEFBD_Pos) /*!< Bit mask of CONVCOEFBD
                                                                                    field.*/


        /* GPU_CORE_CRCM0: On read returns the CRC form Write Channel 0 */
        #define GPU_CORE_CRCM0_ResetValue (0x00000000UL)   /*!< Reset value of CRCM0 register.                                       */

        /* CRCM0 @Bits 0..31 : NEMA_CRC_M0 */
        #define GPU_CORE_CRCM0_CRCM0_Pos (0UL)             /*!< Position of CRCM0 field.                                             */
        #define GPU_CORE_CRCM0_CRCM0_Msk (0xFFFFFFFFUL << GPU_CORE_CRCM0_CRCM0_Pos) /*!< Bit mask of CRCM0 field.                    */


        /* GPU_CORE_CRCM1: On read returns the CRC form Write Channel 1 */
        #define GPU_CORE_CRCM1_ResetValue (0x00000000UL)   /*!< Reset value of CRCM1 register.                                       */

        /* CRCM1 @Bits 0..31 : NEMA_CRC_M1 */
        #define GPU_CORE_CRCM1_CRCM1_Pos (0UL)             /*!< Position of CRCM1 field.                                             */
        #define GPU_CORE_CRCM1_CRCM1_Msk (0xFFFFFFFFUL << GPU_CORE_CRCM1_CRCM1_Pos) /*!< Bit mask of CRCM1 field.                    */


        /* GPU_CORE_BUSCTRL: Indicates the value of the AWCACHE and the ARCACHE signals of the AXI Bus Interface. */
        #define GPU_CORE_BUSCTRL_ResetValue (0x00000000UL) /*!< Reset value of BUSCTRL register.                                     */

        /* BUSCTRLARCACHE @Bits 0..3 : Specifies the value of the output ARCACHE signal of the AXI Master Read Bus Interface */
        #define GPU_CORE_BUSCTRL_BUSCTRLARCACHE_Pos (0UL)  /*!< Position of BUSCTRLARCACHE field.                                    */
        #define GPU_CORE_BUSCTRL_BUSCTRLARCACHE_Msk (0xFUL << GPU_CORE_BUSCTRL_BUSCTRLARCACHE_Pos) /*!< Bit mask of BUSCTRLARCACHE
                                                                                    field.*/

        /* BUSCTRLAWCACHE @Bits 4..7 : Specifies the value of the output AWCACHE signal of the AXI Master Write Bus Interface */
        #define GPU_CORE_BUSCTRL_BUSCTRLAWCACHE_Pos (4UL)  /*!< Position of BUSCTRLAWCACHE field.                                    */
        #define GPU_CORE_BUSCTRL_BUSCTRLAWCACHE_Msk (0xFUL << GPU_CORE_BUSCTRL_BUSCTRLAWCACHE_Pos) /*!< Bit mask of BUSCTRLAWCACHE
                                                                                    field.*/

        /* BUSCTRLPOS08LEN24 @Bits 8..31 : Revered */
        #define GPU_CORE_BUSCTRL_BUSCTRLPOS08LEN24_Pos (8UL) /*!< Position of BUSCTRLPOS08LEN24 field.                               */
        #define GPU_CORE_BUSCTRL_BUSCTRLPOS08LEN24_Msk (0xFFFFFFUL << GPU_CORE_BUSCTRL_BUSCTRLPOS08LEN24_Pos) /*!< Bit mask of
                                                                                    BUSCTRLPOS08LEN24 field.*/


        /* GPU_CORE_IMEMADDR: Load shader instruction memory address. This register can be auto incremented. Its contains */
        #define GPU_CORE_IMEMADDR_ResetValue (0x00000000UL) /*!< Reset value of IMEMADDR register.                                   */

        /* IMEMADDR @Bits 0..3 : Specifies the load shader instruction memory address */
        #define GPU_CORE_IMEMADDR_IMEMADDR_Pos (0UL)       /*!< Position of IMEMADDR field.                                          */
        #define GPU_CORE_IMEMADDR_IMEMADDR_Msk (0xFUL << GPU_CORE_IMEMADDR_IMEMADDR_Pos) /*!< Bit mask of IMEMADDR field.            */

        /* IMEMADDRPOS04LEN28 @Bits 4..31 : Revered */
        #define GPU_CORE_IMEMADDR_IMEMADDRPOS04LEN28_Pos (4UL) /*!< Position of IMEMADDRPOS04LEN28 field.                            */
        #define GPU_CORE_IMEMADDR_IMEMADDRPOS04LEN28_Msk (0xFFFFFFFUL << GPU_CORE_IMEMADDR_IMEMADDRPOS04LEN28_Pos) /*!< Bit mask of
                                                                                    IMEMADDRPOS04LEN28 field.*/


        /* GPU_CORE_IMEMDATALOW: The lower bits (31-0) of the 64-bit load shader instruction memory data */
        #define GPU_CORE_IMEMDATALOW_ResetValue (0x00000000UL) /*!< Reset value of IMEMDATALOW register.                             */

        /* IMEMDATALOW @Bits 0..31 : Specifies the lower bits (31-0) of the load shader instruction memory data */
        #define GPU_CORE_IMEMDATALOW_IMEMDATALOW_Pos (0UL) /*!< Position of IMEMDATALOW field.                                       */
        #define GPU_CORE_IMEMDATALOW_IMEMDATALOW_Msk (0xFFFFFFFFUL << GPU_CORE_IMEMDATALOW_IMEMDATALOW_Pos) /*!< Bit mask of
                                                                                    IMEMDATALOW field.*/


        /* GPU_CORE_IMEMDATAHIGH: The higher bits (63-32) of the 64-bit load shader instruction memory data */
        #define GPU_CORE_IMEMDATAHIGH_ResetValue (0x00000000UL) /*!< Reset value of IMEMDATAHIGH register.                           */

        /* IMEMDATAHIGH @Bits 0..31 : Specifies the higher bits (63-32) of the load shader instruction memory data */
        #define GPU_CORE_IMEMDATAHIGH_IMEMDATAHIGH_Pos (0UL) /*!< Position of IMEMDATAHIGH field.                                    */
        #define GPU_CORE_IMEMDATAHIGH_IMEMDATAHIGH_Msk (0xFFFFFFFFUL << GPU_CORE_IMEMDATAHIGH_IMEMDATAHIGH_Pos) /*!< Bit mask of
                                                                                    IMEMDATAHIGH field.*/


        /* GPU_CORE_FLUSHCTRL: Controls the system flush */
        #define GPU_CORE_FLUSHCTRL_ResetValue (0x00000007UL) /*!< Reset value of FLUSHCTRL register.                                 */

        /* FLUSHCTRLPOS00LEN01 @Bit 0 : If set to 1, the read caches are flushed when the Command List Processor triggers the Rasterizer
                                        (Register NEMA_DRAW_CMD_NOHOLD) */

        #define GPU_CORE_FLUSHCTRL_FLUSHCTRLPOS00LEN01_Pos (0UL) /*!< Position of FLUSHCTRLPOS00LEN01 field.                         */
        #define GPU_CORE_FLUSHCTRL_FLUSHCTRLPOS00LEN01_Msk (0x1UL << GPU_CORE_FLUSHCTRL_FLUSHCTRLPOS00LEN01_Pos) /*!< Bit mask of
                                                                                    FLUSHCTRLPOS00LEN01 field.*/

        /* FLUSHCTRLPOS01LEN03 @Bits 1..3 : Revered */
        #define GPU_CORE_FLUSHCTRL_FLUSHCTRLPOS01LEN03_Pos (1UL) /*!< Position of FLUSHCTRLPOS01LEN03 field.                         */
        #define GPU_CORE_FLUSHCTRL_FLUSHCTRLPOS01LEN03_Msk (0x7UL << GPU_CORE_FLUSHCTRL_FLUSHCTRLPOS01LEN03_Pos) /*!< Bit mask of
                                                                                    FLUSHCTRLPOS01LEN03 field.*/

        /* FLUSHCTRLPOS04LEN01 @Bit 4 : If set to 1, the read caches are fluhsed when the Host triggers the Rasterizer (Register
                                        NEMA_DRAW_CMD_NOHOLD) */

        #define GPU_CORE_FLUSHCTRL_FLUSHCTRLPOS04LEN01_Pos (4UL) /*!< Position of FLUSHCTRLPOS04LEN01 field.                         */
        #define GPU_CORE_FLUSHCTRL_FLUSHCTRLPOS04LEN01_Msk (0x1UL << GPU_CORE_FLUSHCTRL_FLUSHCTRLPOS04LEN01_Pos) /*!< Bit mask of
                                                                                    FLUSHCTRLPOS04LEN01 field.*/

        /* FLUSHCTRLPOS05LEN01 @Bit 5 : Revered */
        #define GPU_CORE_FLUSHCTRL_FLUSHCTRLPOS05LEN01_Pos (5UL) /*!< Position of FLUSHCTRLPOS05LEN01 field.                         */
        #define GPU_CORE_FLUSHCTRL_FLUSHCTRLPOS05LEN01_Msk (0x1UL << GPU_CORE_FLUSHCTRL_FLUSHCTRLPOS05LEN01_Pos) /*!< Bit mask of
                                                                                    FLUSHCTRLPOS05LEN01 field.*/

        /* FLUSHCTRLPOS06LEN01 @Bit 6 : When set to 1, flush read caches */
        #define GPU_CORE_FLUSHCTRL_FLUSHCTRLPOS06LEN01_Pos (6UL) /*!< Position of FLUSHCTRLPOS06LEN01 field.                         */
        #define GPU_CORE_FLUSHCTRL_FLUSHCTRLPOS06LEN01_Msk (0x1UL << GPU_CORE_FLUSHCTRL_FLUSHCTRLPOS06LEN01_Pos) /*!< Bit mask of
                                                                                    FLUSHCTRLPOS06LEN01 field.*/

        /* FLUSHCTRLPOS07LEN01 @Bit 7 : If set to 1, the write caches are flushed when the Command List Processor triggers the
                                        Rasterizer (Register NEMA_DRAW_CMD_NOHOLD) */

        #define GPU_CORE_FLUSHCTRL_FLUSHCTRLPOS07LEN01_Pos (7UL) /*!< Position of FLUSHCTRLPOS07LEN01 field.                         */
        #define GPU_CORE_FLUSHCTRL_FLUSHCTRLPOS07LEN01_Msk (0x1UL << GPU_CORE_FLUSHCTRL_FLUSHCTRLPOS07LEN01_Pos) /*!< Bit mask of
                                                                                    FLUSHCTRLPOS07LEN01 field.*/

        /* FLUSHCTRLPOS08LEN03 @Bits 8..10 : Revered */
        #define GPU_CORE_FLUSHCTRL_FLUSHCTRLPOS08LEN03_Pos (8UL) /*!< Position of FLUSHCTRLPOS08LEN03 field.                         */
        #define GPU_CORE_FLUSHCTRL_FLUSHCTRLPOS08LEN03_Msk (0x7UL << GPU_CORE_FLUSHCTRL_FLUSHCTRLPOS08LEN03_Pos) /*!< Bit mask of
                                                                                    FLUSHCTRLPOS08LEN03 field.*/

        /* FLUSHCTRLPOS11LEN01 @Bit 11 : If set to 1, the write caches are flushed when the Host triggers the Rasterizer (Register
                                        NEMA_DRAW_CMD_NOHOLD) */

        #define GPU_CORE_FLUSHCTRL_FLUSHCTRLPOS11LEN01_Pos (11UL) /*!< Position of FLUSHCTRLPOS11LEN01 field.                        */
        #define GPU_CORE_FLUSHCTRL_FLUSHCTRLPOS11LEN01_Msk (0x1UL << GPU_CORE_FLUSHCTRL_FLUSHCTRLPOS11LEN01_Pos) /*!< Bit mask of
                                                                                    FLUSHCTRLPOS11LEN01 field.*/

        /* FLUSHCTRLPOS12LEN01 @Bit 12 : Revered */
        #define GPU_CORE_FLUSHCTRL_FLUSHCTRLPOS12LEN01_Pos (12UL) /*!< Position of FLUSHCTRLPOS12LEN01 field.                        */
        #define GPU_CORE_FLUSHCTRL_FLUSHCTRLPOS12LEN01_Msk (0x1UL << GPU_CORE_FLUSHCTRL_FLUSHCTRLPOS12LEN01_Pos) /*!< Bit mask of
                                                                                    FLUSHCTRLPOS12LEN01 field.*/

        /* FLUSHCTRLPOS13LEN01 @Bit 13 : When set to 1, flush write caches */
        #define GPU_CORE_FLUSHCTRL_FLUSHCTRLPOS13LEN01_Pos (13UL) /*!< Position of FLUSHCTRLPOS13LEN01 field.                        */
        #define GPU_CORE_FLUSHCTRL_FLUSHCTRLPOS13LEN01_Msk (0x1UL << GPU_CORE_FLUSHCTRL_FLUSHCTRLPOS13LEN01_Pos) /*!< Bit mask of
                                                                                    FLUSHCTRLPOS13LEN01 field.*/

        /* FLUSHCTRLPOS14LEN18 @Bits 14..31 : Revered */
        #define GPU_CORE_FLUSHCTRL_FLUSHCTRLPOS14LEN18_Pos (14UL) /*!< Position of FLUSHCTRLPOS14LEN18 field.                        */
        #define GPU_CORE_FLUSHCTRL_FLUSHCTRLPOS14LEN18_Msk (0x3FFFFUL << GPU_CORE_FLUSHCTRL_FLUSHCTRLPOS14LEN18_Pos) /*!< Bit mask of
                                                                                    FLUSHCTRLPOS14LEN18 field.*/


        /* GPU_CORE_CMDSTATUS: On read, returns internal CL processor status. */
        #define GPU_CORE_CMDSTATUS_ResetValue (0x00000000UL) /*!< Reset value of CMDSTATUS register.                                 */

        /* CMDSTATUSPOS00LEN01 @Bit 0 : Indicates the state of the FSM responsible for fetching */
        #define GPU_CORE_CMDSTATUS_CMDSTATUSPOS00LEN01_Pos (0UL) /*!< Position of CMDSTATUSPOS00LEN01 field.                         */
        #define GPU_CORE_CMDSTATUS_CMDSTATUSPOS00LEN01_Msk (0x1UL << GPU_CORE_CMDSTATUS_CMDSTATUSPOS00LEN01_Pos) /*!< Bit mask of
                                                                                    CMDSTATUSPOS00LEN01 field.*/

        /* CMDSTATUSPOS01LEN01 @Bits 1..3 : Revered */
        #define GPU_CORE_CMDSTATUS_CMDSTATUSPOS01LEN01_Pos (1UL) /*!< Position of CMDSTATUSPOS01LEN01 field.                         */
        #define GPU_CORE_CMDSTATUS_CMDSTATUSPOS01LEN01_Msk (0x7UL << GPU_CORE_CMDSTATUS_CMDSTATUSPOS01LEN01_Pos) /*!< Bit mask of
                                                                                    CMDSTATUSPOS01LEN01 field.*/

        /* CMDSTATUSPOS04LEN03 @Bits 4..6 : Indicates the state of CMDList internal FSM. */
        #define GPU_CORE_CMDSTATUS_CMDSTATUSPOS04LEN03_Pos (4UL) /*!< Position of CMDSTATUSPOS04LEN03 field.                         */
        #define GPU_CORE_CMDSTATUS_CMDSTATUSPOS04LEN03_Msk (0x7UL << GPU_CORE_CMDSTATUS_CMDSTATUSPOS04LEN03_Pos) /*!< Bit mask of
                                                                                    CMDSTATUSPOS04LEN03 field.*/

        /* CMDSTATUSPOS07LEN02 @Bits 7..8 : Revered */
        #define GPU_CORE_CMDSTATUS_CMDSTATUSPOS07LEN02_Pos (7UL) /*!< Position of CMDSTATUSPOS07LEN02 field.                         */
        #define GPU_CORE_CMDSTATUS_CMDSTATUSPOS07LEN02_Msk (0x3UL << GPU_CORE_CMDSTATUS_CMDSTATUSPOS07LEN02_Pos) /*!< Bit mask of
                                                                                    CMDSTATUSPOS07LEN02 field.*/

        /* CMDSTATUSPOS08LEN03 @Bits 9..11 : Show the address of the stack pointer */
        #define GPU_CORE_CMDSTATUS_CMDSTATUSPOS08LEN03_Pos (9UL) /*!< Position of CMDSTATUSPOS08LEN03 field.                         */
        #define GPU_CORE_CMDSTATUS_CMDSTATUSPOS08LEN03_Msk (0x7UL << GPU_CORE_CMDSTATUS_CMDSTATUSPOS08LEN03_Pos) /*!< Bit mask of
                                                                                    CMDSTATUSPOS08LEN03 field.*/

        /* CMDSTATUSPOS11LEN01 @Bit 12 : Revered */
        #define GPU_CORE_CMDSTATUS_CMDSTATUSPOS11LEN01_Pos (12UL) /*!< Position of CMDSTATUSPOS11LEN01 field.                        */
        #define GPU_CORE_CMDSTATUS_CMDSTATUSPOS11LEN01_Msk (0x1UL << GPU_CORE_CMDSTATUS_CMDSTATUSPOS11LEN01_Pos) /*!< Bit mask of
                                                                                    CMDSTATUSPOS11LEN01 field.*/

        /* CMDSTATUSPOS12LEN05 @Bits 13..17 : Show many cells are still available in FIFO */
        #define GPU_CORE_CMDSTATUS_CMDSTATUSPOS12LEN05_Pos (13UL) /*!< Position of CMDSTATUSPOS12LEN05 field.                        */
        #define GPU_CORE_CMDSTATUS_CMDSTATUSPOS12LEN05_Msk (0x1FUL << GPU_CORE_CMDSTATUS_CMDSTATUSPOS12LEN05_Pos) /*!< Bit mask of
                                                                                    CMDSTATUSPOS12LEN05 field.*/

        /* CMDSTATUSPOS17LEN11 @Bits 18..27 : Revered */
        #define GPU_CORE_CMDSTATUS_CMDSTATUSPOS17LEN11_Pos (18UL) /*!< Position of CMDSTATUSPOS17LEN11 field.                        */
        #define GPU_CORE_CMDSTATUS_CMDSTATUSPOS17LEN11_Msk (0x3FFUL << GPU_CORE_CMDSTATUS_CMDSTATUSPOS17LEN11_Pos) /*!< Bit mask of
                                                                                    CMDSTATUSPOS17LEN11 field.*/

        /* CMDSTATUSPOS28LEN01 @Bit 28 : Show many cells are still available in FIFO */
        #define GPU_CORE_CMDSTATUS_CMDSTATUSPOS28LEN01_Pos (28UL) /*!< Position of CMDSTATUSPOS28LEN01 field.                        */
        #define GPU_CORE_CMDSTATUS_CMDSTATUSPOS28LEN01_Msk (0x1UL << GPU_CORE_CMDSTATUS_CMDSTATUSPOS28LEN01_Pos) /*!< Bit mask of
                                                                                    CMDSTATUSPOS28LEN01 field.*/

        /* CMDSTATUSPOS29LEN01 @Bit 29 : Indicates if there are available data to read from FIFO */
        #define GPU_CORE_CMDSTATUS_CMDSTATUSPOS29LEN01_Pos (29UL) /*!< Position of CMDSTATUSPOS29LEN01 field.                        */
        #define GPU_CORE_CMDSTATUS_CMDSTATUSPOS29LEN01_Msk (0x1UL << GPU_CORE_CMDSTATUS_CMDSTATUSPOS29LEN01_Pos) /*!< Bit mask of
                                                                                    CMDSTATUSPOS29LEN01 field.*/

        /* CMDSTATUSPOS30LEN01 @Bit 30 : Indicates if there are data available in System Memory */
        #define GPU_CORE_CMDSTATUS_CMDSTATUSPOS30LEN01_Pos (30UL) /*!< Position of CMDSTATUSPOS30LEN01 field.                        */
        #define GPU_CORE_CMDSTATUS_CMDSTATUSPOS30LEN01_Msk (0x1UL << GPU_CORE_CMDSTATUS_CMDSTATUSPOS30LEN01_Pos) /*!< Bit mask of
                                                                                    CMDSTATUSPOS30LEN01 field.*/

        /* CMDSTATUSPOS31LEN01 @Bit 31 : Indicates if the Command List Processor is busy */
        #define GPU_CORE_CMDSTATUS_CMDSTATUSPOS31LEN01_Pos (31UL) /*!< Position of CMDSTATUSPOS31LEN01 field.                        */
        #define GPU_CORE_CMDSTATUS_CMDSTATUSPOS31LEN01_Msk (0x1UL << GPU_CORE_CMDSTATUS_CMDSTATUSPOS31LEN01_Pos) /*!< Bit mask of
                                                                                    CMDSTATUSPOS31LEN01 field.*/


        /* GPU_CORE_CMDRINGSTOP: Ring Buffers pointer. */
        #define GPU_CORE_CMDRINGSTOP_ResetValue (0x00000000UL) /*!< Reset value of CMDRINGSTOP register.                             */

        /* CMDRINGSTOP @Bits 0..31 : Stores the Ring Buffers last written address */
        #define GPU_CORE_CMDRINGSTOP_CMDRINGSTOP_Pos (0UL) /*!< Position of CMDRINGSTOP field.                                       */
        #define GPU_CORE_CMDRINGSTOP_CMDRINGSTOP_Msk (0xFFFFFFFFUL << GPU_CORE_CMDRINGSTOP_CMDRINGSTOP_Pos) /*!< Bit mask of
                                                                                    CMDRINGSTOP field.*/


        /* GPU_CORE_CMDADDR: Command list base address. */
        #define GPU_CORE_CMDADDR_ResetValue (0x00000000UL) /*!< Reset value of CMDADDR register.                                     */

        /* CMDADDR @Bits 0..31 : Specifies the base address of every new command list ready to be executed */
        #define GPU_CORE_CMDADDR_CMDADDR_Pos (0UL)         /*!< Position of CMDADDR field.                                           */
        #define GPU_CORE_CMDADDR_CMDADDR_Msk (0xFFFFFFFFUL << GPU_CORE_CMDADDR_CMDADDR_Pos) /*!< Bit mask of CMDADDR field.          */


        /* GPU_CORE_CMDSIZE: Command list length in words(32-bits) */
        #define GPU_CORE_CMDSIZE_ResetValue (0x00000000UL) /*!< Reset value of CMDSIZE register.                                     */

        /* CMDSIZE @Bits 0..31 : Specifies the length of the command list ready to be executed. */
        #define GPU_CORE_CMDSIZE_CMDSIZE_Pos (0UL)         /*!< Position of CMDSIZE field.                                           */
        #define GPU_CORE_CMDSIZE_CMDSIZE_Msk (0xFFFFFFFFUL << GPU_CORE_CMDSIZE_CMDSIZE_Pos) /*!< Bit mask of CMDSIZE field.          */


        /* GPU_CORE_INTERRUPT: Interrupt control register */
        #define GPU_CORE_INTERRUPT_ResetValue (0x00000000UL) /*!< Reset value of INTERRUPT register.                                 */

        /* INTERRUPTPOLARITY @Bit 0 : 1: IRQ signal is active low */
        #define GPU_CORE_INTERRUPT_INTERRUPTPOLARITY_Pos (0UL) /*!< Position of INTERRUPTPOLARITY field.                             */
        #define GPU_CORE_INTERRUPT_INTERRUPTPOLARITY_Msk (0x1UL << GPU_CORE_INTERRUPT_INTERRUPTPOLARITY_Pos) /*!< Bit mask of
                                                                                    INTERRUPTPOLARITY field.*/

        /* INTERRUPTCL @Bit 1 : When set to 1, signals an interrupt at the end of a command list */
        #define GPU_CORE_INTERRUPT_INTERRUPTCL_Pos (1UL)   /*!< Position of INTERRUPTCL field.                                       */
        #define GPU_CORE_INTERRUPT_INTERRUPTCL_Msk (0x1UL << GPU_CORE_INTERRUPT_INTERRUPTCL_Pos) /*!< Bit mask of INTERRUPTCL field. */

        /* INTERRUPTDRAW @Bit 2 : When set to 1, signals an interrupt at the end of a drawing command */
        #define GPU_CORE_INTERRUPT_INTERRUPTDRAW_Pos (2UL) /*!< Position of INTERRUPTDRAW field.                                     */
        #define GPU_CORE_INTERRUPT_INTERRUPTDRAW_Msk (0x1UL << GPU_CORE_INTERRUPT_INTERRUPTDRAW_Pos) /*!< Bit mask of INTERRUPTDRAW
                                                                                    field.*/

        /* INTERRUPTCLEAR @Bit 3 : When set to 1, the interrupt in the NEMA_IRQ_ID register is cleared */
        #define GPU_CORE_INTERRUPT_INTERRUPTCLEAR_Pos (3UL) /*!< Position of INTERRUPTCLEAR field.                                   */
        #define GPU_CORE_INTERRUPT_INTERRUPTCLEAR_Msk (0x1UL << GPU_CORE_INTERRUPT_INTERRUPTCLEAR_Pos) /*!< Bit mask of INTERRUPTCLEAR
                                                                                    field.*/

        /* INTERRUPTPOS04LEN26 @Bits 4..26 : Revered */
        #define GPU_CORE_INTERRUPT_INTERRUPTPOS04LEN26_Pos (4UL) /*!< Position of INTERRUPTPOS04LEN26 field.                         */
        #define GPU_CORE_INTERRUPT_INTERRUPTPOS04LEN26_Msk (0x7FFFFFUL << GPU_CORE_INTERRUPT_INTERRUPTPOS04LEN26_Pos) /*!< Bit mask of
                                                                                    INTERRUPTPOS04LEN26 field.*/

        /* INTERRUPTTHROTTLE @Bit 27 : When set to 1, the throttle signal will be ignored. */
        #define GPU_CORE_INTERRUPT_INTERRUPTTHROTTLE_Pos (27UL) /*!< Position of INTERRUPTTHROTTLE field.                            */
        #define GPU_CORE_INTERRUPT_INTERRUPTTHROTTLE_Msk (0x1UL << GPU_CORE_INTERRUPT_INTERRUPTTHROTTLE_Pos) /*!< Bit mask of
                                                                                    INTERRUPTTHROTTLE field.*/

        /* INTERRUPTPOS28LEN02 @Bits 28..29 : Revered */
        #define GPU_CORE_INTERRUPT_INTERRUPTPOS28LEN02_Pos (28UL) /*!< Position of INTERRUPTPOS28LEN02 field.                        */
        #define GPU_CORE_INTERRUPT_INTERRUPTPOS28LEN02_Msk (0x3UL << GPU_CORE_INTERRUPT_INTERRUPTPOS28LEN02_Pos) /*!< Bit mask of
                                                                                    INTERRUPTPOS28LEN02 field.*/

        /* INTERRUPTCLKDVFS @Bits 30..31 : Specify the core_clk_dvfs output */
        #define GPU_CORE_INTERRUPT_INTERRUPTCLKDVFS_Pos (30UL) /*!< Position of INTERRUPTCLKDVFS field.                              */
        #define GPU_CORE_INTERRUPT_INTERRUPTCLKDVFS_Msk (0x3UL << GPU_CORE_INTERRUPT_INTERRUPTCLKDVFS_Pos) /*!< Bit mask of
                                                                                    INTERRUPTCLKDVFS field.*/


        /* GPU_CORE_STATUS: On read, returns GPUs status. */
        #define GPU_CORE_STATUS_ResetValue (0x00000000UL)  /*!< Reset value of STATUS register.                                      */

        /* STATUSC0 @Bit 0 : Indicates if the Core 0 is busy */
        #define GPU_CORE_STATUS_STATUSC0_Pos (0UL)         /*!< Position of STATUSC0 field.                                          */
        #define GPU_CORE_STATUS_STATUSC0_Msk (0x1UL << GPU_CORE_STATUS_STATUSC0_Pos) /*!< Bit mask of STATUSC0 field.                */

        /* STATUSC1 @Bit 1 : Revered */
        #define GPU_CORE_STATUS_STATUSC1_Pos (1UL)         /*!< Position of STATUSC1 field.                                          */
        #define GPU_CORE_STATUS_STATUSC1_Msk (0x1UL << GPU_CORE_STATUS_STATUSC1_Pos) /*!< Bit mask of STATUSC1 field.                */

        /* STATUSC2 @Bit 2 : Revered */
        #define GPU_CORE_STATUS_STATUSC2_Pos (2UL)         /*!< Position of STATUSC2 field.                                          */
        #define GPU_CORE_STATUS_STATUSC2_Msk (0x1UL << GPU_CORE_STATUS_STATUSC2_Pos) /*!< Bit mask of STATUSC2 field.                */

        /* STATUSC3 @Bit 3 : Revered */
        #define GPU_CORE_STATUS_STATUSC3_Pos (3UL)         /*!< Position of STATUSC3 field.                                          */
        #define GPU_CORE_STATUS_STATUSC3_Msk (0x1UL << GPU_CORE_STATUS_STATUSC3_Pos) /*!< Bit mask of STATUSC3 field.                */

        /* STATUSPIPEC0 @Bit 4 : Indicates if the Core 0 graphics pipeline is busy */
        #define GPU_CORE_STATUS_STATUSPIPEC0_Pos (4UL)     /*!< Position of STATUSPIPEC0 field.                                      */
        #define GPU_CORE_STATUS_STATUSPIPEC0_Msk (0x1UL << GPU_CORE_STATUS_STATUSPIPEC0_Pos) /*!< Bit mask of STATUSPIPEC0 field.    */

        /* STATUSPIPEC1 @Bit 5 : Revered */
        #define GPU_CORE_STATUS_STATUSPIPEC1_Pos (5UL)     /*!< Position of STATUSPIPEC1 field.                                      */
        #define GPU_CORE_STATUS_STATUSPIPEC1_Msk (0x1UL << GPU_CORE_STATUS_STATUSPIPEC1_Pos) /*!< Bit mask of STATUSPIPEC1 field.    */

        /* STATUSPIPEC2 @Bit 6 : Revered */
        #define GPU_CORE_STATUS_STATUSPIPEC2_Pos (6UL)     /*!< Position of STATUSPIPEC2 field.                                      */
        #define GPU_CORE_STATUS_STATUSPIPEC2_Msk (0x1UL << GPU_CORE_STATUS_STATUSPIPEC2_Pos) /*!< Bit mask of STATUSPIPEC2 field.    */

        /* STATUSPIPEC3 @Bit 7 : Revered */
        #define GPU_CORE_STATUS_STATUSPIPEC3_Pos (7UL)     /*!< Position of STATUSPIPEC3 field.                                      */
        #define GPU_CORE_STATUS_STATUSPIPEC3_Msk (0x1UL << GPU_CORE_STATUS_STATUSPIPEC3_Pos) /*!< Bit mask of STATUSPIPEC3 field.    */

        /* STATUSTEXC0 @Bit 8 : Indicates if the Core 0 Texture Map Unit is busy */
        #define GPU_CORE_STATUS_STATUSTEXC0_Pos (8UL)      /*!< Position of STATUSTEXC0 field.                                       */
        #define GPU_CORE_STATUS_STATUSTEXC0_Msk (0x1UL << GPU_CORE_STATUS_STATUSTEXC0_Pos) /*!< Bit mask of STATUSTEXC0 field.       */

        /* STATUSTEXC1 @Bit 9 : Revered */
        #define GPU_CORE_STATUS_STATUSTEXC1_Pos (9UL)      /*!< Position of STATUSTEXC1 field.                                       */
        #define GPU_CORE_STATUS_STATUSTEXC1_Msk (0x1UL << GPU_CORE_STATUS_STATUSTEXC1_Pos) /*!< Bit mask of STATUSTEXC1 field.       */

        /* STATUSTEXC2 @Bit 10 : Revered */
        #define GPU_CORE_STATUS_STATUSTEXC2_Pos (10UL)     /*!< Position of STATUSTEXC2 field.                                       */
        #define GPU_CORE_STATUS_STATUSTEXC2_Msk (0x1UL << GPU_CORE_STATUS_STATUSTEXC2_Pos) /*!< Bit mask of STATUSTEXC2 field.       */

        /* STATUSTEXC3 @Bit 11 : Revered */
        #define GPU_CORE_STATUS_STATUSTEXC3_Pos (11UL)     /*!< Position of STATUSTEXC3 field.                                       */
        #define GPU_CORE_STATUS_STATUSTEXC3_Msk (0x1UL << GPU_CORE_STATUS_STATUSTEXC3_Pos) /*!< Bit mask of STATUSTEXC3 field.       */

        /* STATUSROPC0 @Bit 12 : Indicates if the Core 0 Render Output Unit is busy */
        #define GPU_CORE_STATUS_STATUSROPC0_Pos (12UL)     /*!< Position of STATUSROPC0 field.                                       */
        #define GPU_CORE_STATUS_STATUSROPC0_Msk (0x1UL << GPU_CORE_STATUS_STATUSROPC0_Pos) /*!< Bit mask of STATUSROPC0 field.       */

        /* STATUSROPC1 @Bit 13 : Revered */
        #define GPU_CORE_STATUS_STATUSROPC1_Pos (13UL)     /*!< Position of STATUSROPC1 field.                                       */
        #define GPU_CORE_STATUS_STATUSROPC1_Msk (0x1UL << GPU_CORE_STATUS_STATUSROPC1_Pos) /*!< Bit mask of STATUSROPC1 field.       */

        /* STATUSROPC2 @Bit 14 : Revered */
        #define GPU_CORE_STATUS_STATUSROPC2_Pos (14UL)     /*!< Position of STATUSROPC2 field.                                       */
        #define GPU_CORE_STATUS_STATUSROPC2_Msk (0x1UL << GPU_CORE_STATUS_STATUSROPC2_Pos) /*!< Bit mask of STATUSROPC2 field.       */

        /* STATUSROPC3 @Bit 15 : Revered */
        #define GPU_CORE_STATUS_STATUSROPC3_Pos (15UL)     /*!< Position of STATUSROPC3 field.                                       */
        #define GPU_CORE_STATUS_STATUSROPC3_Msk (0x1UL << GPU_CORE_STATUS_STATUSROPC3_Pos) /*!< Bit mask of STATUSROPC3 field.       */

        /* STATUSPOS16LEN08 @Bits 16..23 : Revered */
        #define GPU_CORE_STATUS_STATUSPOS16LEN08_Pos (16UL) /*!< Position of STATUSPOS16LEN08 field.                                 */
        #define GPU_CORE_STATUS_STATUSPOS16LEN08_Msk (0xFFUL << GPU_CORE_STATUS_STATUSPOS16LEN08_Pos) /*!< Bit mask of
                                                                                    STATUSPOS16LEN08 field.*/

        /* STATUSRASTERIZER @Bits 24..27 : Indicate if the Rasterizer Unit is busy */
        #define GPU_CORE_STATUS_STATUSRASTERIZER_Pos (24UL) /*!< Position of STATUSRASTERIZER field.                                 */
        #define GPU_CORE_STATUS_STATUSRASTERIZER_Msk (0xFUL << GPU_CORE_STATUS_STATUSRASTERIZER_Pos) /*!< Bit mask of STATUSRASTERIZER
                                                                                    field.*/

        /* STATUSCL @Bit 28 : Indicates if the Command List Processor is busy */
        #define GPU_CORE_STATUS_STATUSCL_Pos (28UL)        /*!< Position of STATUSCL field.                                          */
        #define GPU_CORE_STATUS_STATUSCL_Msk (0x1UL << GPU_CORE_STATUS_STATUSCL_Pos) /*!< Bit mask of STATUSCL field.                */

        /* STATUSCLBUS @Bit 29 : Indicates if the Command List bus is busy */
        #define GPU_CORE_STATUS_STATUSCLBUS_Pos (29UL)     /*!< Position of STATUSCLBUS field.                                       */
        #define GPU_CORE_STATUS_STATUSCLBUS_Msk (0x1UL << GPU_CORE_STATUS_STATUSCLBUS_Pos) /*!< Bit mask of STATUSCLBUS field.       */

        /* STATUSBUSIF @Bit 30 : Indicates if the Bus Interface Unit is busy */
        #define GPU_CORE_STATUS_STATUSBUSIF_Pos (30UL)     /*!< Position of STATUSBUSIF field.                                       */
        #define GPU_CORE_STATUS_STATUSBUSIF_Msk (0x1UL << GPU_CORE_STATUS_STATUSBUSIF_Pos) /*!< Bit mask of STATUSBUSIF field.       */

        /* STATUSSYSTEM @Bit 31 : Indicates if the system is busy */
        #define GPU_CORE_STATUS_STATUSSYSTEM_Pos (31UL)    /*!< Position of STATUSSYSTEM field.                                      */
        #define GPU_CORE_STATUS_STATUSSYSTEM_Msk (0x1UL << GPU_CORE_STATUS_STATUSSYSTEM_Pos) /*!< Bit mask of STATUSSYSTEM field.    */


        /* GPU_CORE_DRAWCMDNOHOLD: Rasterizer Command (e.g. draw triangle, rectangle etc) */
        #define GPU_CORE_DRAWCMDNOHOLD_ResetValue (0x00000000UL) /*!< Reset value of DRAWCMDNOHOLD register.                         */

        /* DRAWCMD @Bits 0..2 : Draw Command */
        #define GPU_CORE_DRAWCMDNOHOLD_DRAWCMD_Pos (0UL)   /*!< Position of DRAWCMD field.                                           */
        #define GPU_CORE_DRAWCMDNOHOLD_DRAWCMD_Msk (0x7UL << GPU_CORE_DRAWCMDNOHOLD_DRAWCMD_Pos) /*!< Bit mask of DRAWCMD field.     */

        /* DRAWCMDNOHOLDPOS03LEN20 @Bits 3..22 : Revered */
        #define GPU_CORE_DRAWCMDNOHOLD_DRAWCMDNOHOLDPOS03LEN20_Pos (3UL) /*!< Position of DRAWCMDNOHOLDPOS03LEN20 field.             */
        #define GPU_CORE_DRAWCMDNOHOLD_DRAWCMDNOHOLDPOS03LEN20_Msk (0xFFFFFUL << GPU_CORE_DRAWCMDNOHOLD_DRAWCMDNOHOLDPOS03LEN20_Pos)
                                                                                    /*!< Bit mask of DRAWCMDNOHOLDPOS03LEN20 field.*/

        /* AAEDGE3 @Bit 23 : When set to 1, Antialiasing feature is enabled for edge 3 */
        #define GPU_CORE_DRAWCMDNOHOLD_AAEDGE3_Pos (23UL)  /*!< Position of AAEDGE3 field.                                           */
        #define GPU_CORE_DRAWCMDNOHOLD_AAEDGE3_Msk (0x1UL << GPU_CORE_DRAWCMDNOHOLD_AAEDGE3_Pos) /*!< Bit mask of AAEDGE3 field.     */

        /* AAEDGE2 @Bit 24 : When set to 1, Antialiasing feature is enabled for edge 2 */
        #define GPU_CORE_DRAWCMDNOHOLD_AAEDGE2_Pos (24UL)  /*!< Position of AAEDGE2 field.                                           */
        #define GPU_CORE_DRAWCMDNOHOLD_AAEDGE2_Msk (0x1UL << GPU_CORE_DRAWCMDNOHOLD_AAEDGE2_Pos) /*!< Bit mask of AAEDGE2 field.     */

        /* AAEDGE1 @Bit 25 : When set to 1, Antialiasing feature is enabled for edge 1 */
        #define GPU_CORE_DRAWCMDNOHOLD_AAEDGE1_Pos (25UL)  /*!< Position of AAEDGE1 field.                                           */
        #define GPU_CORE_DRAWCMDNOHOLD_AAEDGE1_Msk (0x1UL << GPU_CORE_DRAWCMDNOHOLD_AAEDGE1_Pos) /*!< Bit mask of AAEDGE1 field.     */

        /* AAEDGE0 @Bit 26 : When set to 1, Antialiasing feature is enabled for edge 0 */
        #define GPU_CORE_DRAWCMDNOHOLD_AAEDGE0_Pos (26UL)  /*!< Position of AAEDGE0 field.                                           */
        #define GPU_CORE_DRAWCMDNOHOLD_AAEDGE0_Msk (0x1UL << GPU_CORE_DRAWCMDNOHOLD_AAEDGE0_Pos) /*!< Bit mask of AAEDGE0 field.     */

        /* DRAWGRADIENT @Bit 27 : When set to 1, color gradient is enabled */
        #define GPU_CORE_DRAWCMDNOHOLD_DRAWGRADIENT_Pos (27UL) /*!< Position of DRAWGRADIENT field.                                  */
        #define GPU_CORE_DRAWCMDNOHOLD_DRAWGRADIENT_Msk (0x1UL << GPU_CORE_DRAWCMDNOHOLD_DRAWGRADIENT_Pos) /*!< Bit mask of
                                                                                    DRAWGRADIENT field.*/

        /* DRAWNEGCULLING @Bit 28 : When set to 1, negative culling (clockwise) is enabled */
        #define GPU_CORE_DRAWCMDNOHOLD_DRAWNEGCULLING_Pos (28UL) /*!< Position of DRAWNEGCULLING field.                              */
        #define GPU_CORE_DRAWCMDNOHOLD_DRAWNEGCULLING_Msk (0x1UL << GPU_CORE_DRAWCMDNOHOLD_DRAWNEGCULLING_Pos) /*!< Bit mask of
                                                                                    DRAWNEGCULLING field.*/

        /* DRAWPOSCULLING @Bit 29 : When set to 1, positive culling (counter-clockwise) is enabled */
        #define GPU_CORE_DRAWCMDNOHOLD_DRAWPOSCULLING_Pos (29UL) /*!< Position of DRAWPOSCULLING field.                              */
        #define GPU_CORE_DRAWCMDNOHOLD_DRAWPOSCULLING_Msk (0x1UL << GPU_CORE_DRAWCMDNOHOLD_DRAWPOSCULLING_Pos) /*!< Bit mask of
                                                                                    DRAWPOSCULLING field.*/

        /* DRAWTILE @Bit 30 : When set to 1, tile mode is enabled */
        #define GPU_CORE_DRAWCMDNOHOLD_DRAWTILE_Pos (30UL) /*!< Position of DRAWTILE field.                                          */
        #define GPU_CORE_DRAWCMDNOHOLD_DRAWTILE_Msk (0x1UL << GPU_CORE_DRAWCMDNOHOLD_DRAWTILE_Pos) /*!< Bit mask of DRAWTILE field.  */

        /* DRAWCMDNOHOLDPOS31LEN01 @Bit 31 : Revered */
        #define GPU_CORE_DRAWCMDNOHOLD_DRAWCMDNOHOLDPOS31LEN01_Pos (31UL) /*!< Position of DRAWCMDNOHOLDPOS31LEN01 field.            */
        #define GPU_CORE_DRAWCMDNOHOLD_DRAWCMDNOHOLDPOS31LEN01_Msk (0x1UL << GPU_CORE_DRAWCMDNOHOLD_DRAWCMDNOHOLDPOS31LEN01_Pos) /*!<
                                                                                    Bit mask of DRAWCMDNOHOLDPOS31LEN01 field.*/


        /* GPU_CORE_DRAWSTARTXY: Vertex 0 drawing primitive. This register is used only for integer values. For greater accuracy */
        #define GPU_CORE_DRAWSTARTXY_ResetValue (0x00000000UL) /*!< Reset value of DRAWSTARTXY register.                             */

        /* DRAWSTARTX @Bits 0..15 : pecifies the X coordinate (integer value) of vertex 0 */
        #define GPU_CORE_DRAWSTARTXY_DRAWSTARTX_Pos (0UL)  /*!< Position of DRAWSTARTX field.                                        */
        #define GPU_CORE_DRAWSTARTXY_DRAWSTARTX_Msk (0xFFFFUL << GPU_CORE_DRAWSTARTXY_DRAWSTARTX_Pos) /*!< Bit mask of DRAWSTARTX
                                                                                    field.*/

        /* DRAWSTARTY @Bits 16..31 : Specifies the Y coordinate (integer value) of vertex 0 */
        #define GPU_CORE_DRAWSTARTXY_DRAWSTARTY_Pos (16UL) /*!< Position of DRAWSTARTY field.                                        */
        #define GPU_CORE_DRAWSTARTXY_DRAWSTARTY_Msk (0xFFFFUL << GPU_CORE_DRAWSTARTXY_DRAWSTARTY_Pos) /*!< Bit mask of DRAWSTARTY
                                                                                    field.*/


        /* GPU_CORE_DRAWENDXY: Vertex 1 drawing primitive. This register is used only for integer values. For greater accuracy */
        #define GPU_CORE_DRAWENDXY_ResetValue (0x00000000UL) /*!< Reset value of DRAWENDXY register.                                 */

        /* DRAWENDX @Bits 0..15 : pecifies the X coordinate (integer value) of vertex 1 */
        #define GPU_CORE_DRAWENDXY_DRAWENDX_Pos (0UL)      /*!< Position of DRAWENDX field.                                          */
        #define GPU_CORE_DRAWENDXY_DRAWENDX_Msk (0xFFFFUL << GPU_CORE_DRAWENDXY_DRAWENDX_Pos) /*!< Bit mask of DRAWENDX field.       */

        /* DRAWENDY @Bits 16..31 : Specifies the Y coordinate (integer value) of vertex 1 */
        #define GPU_CORE_DRAWENDXY_DRAWENDY_Pos (16UL)     /*!< Position of DRAWENDY field.                                          */
        #define GPU_CORE_DRAWENDXY_DRAWENDY_Msk (0xFFFFUL << GPU_CORE_DRAWENDXY_DRAWENDY_Pos) /*!< Bit mask of DRAWENDY field.       */


        /* GPU_CORE_CLIPMIN: Clipping Rectangle upper left vertex */
        #define GPU_CORE_CLIPMIN_ResetValue (0x00000000UL) /*!< Reset value of CLIPMIN register.                                     */

        /* CLIPMINX @Bits 0..15 : Define the upper left X coordinate */
        #define GPU_CORE_CLIPMIN_CLIPMINX_Pos (0UL)        /*!< Position of CLIPMINX field.                                          */
        #define GPU_CORE_CLIPMIN_CLIPMINX_Msk (0xFFFFUL << GPU_CORE_CLIPMIN_CLIPMINX_Pos) /*!< Bit mask of CLIPMINX field.           */

        /* CLIPMINY @Bits 16..31 : Define the upper left Y coordinate */
        #define GPU_CORE_CLIPMIN_CLIPMINY_Pos (16UL)       /*!< Position of CLIPMINY field.                                          */
        #define GPU_CORE_CLIPMIN_CLIPMINY_Msk (0xFFFFUL << GPU_CORE_CLIPMIN_CLIPMINY_Pos) /*!< Bit mask of CLIPMINY field.           */


        /* GPU_CORE_CLIPMAX: Clipping Rectangle bottom right vertex */
        #define GPU_CORE_CLIPMAX_ResetValue (0x00000000UL) /*!< Reset value of CLIPMAX register.                                     */

        /* CLIPMAXX @Bits 0..15 : Define the bottom left X coordinate */
        #define GPU_CORE_CLIPMAX_CLIPMAXX_Pos (0UL)        /*!< Position of CLIPMAXX field.                                          */
        #define GPU_CORE_CLIPMAX_CLIPMAXX_Msk (0xFFFFUL << GPU_CORE_CLIPMAX_CLIPMAXX_Pos) /*!< Bit mask of CLIPMAXX field.           */

        /* CLIPMAXY @Bits 16..31 : Define the bottom left Y coordinate */
        #define GPU_CORE_CLIPMAX_CLIPMAXY_Pos (16UL)       /*!< Position of CLIPMAXY field.                                          */
        #define GPU_CORE_CLIPMAX_CLIPMAXY_Msk (0xFFFFUL << GPU_CORE_CLIPMAX_CLIPMAXY_Pos) /*!< Bit mask of CLIPMAXY field.           */


        /* GPU_CORE_MATMULT: Rasterizer matrix multiplication control. This register is partially updated */
        #define GPU_CORE_MATMULT_ResetValue (0x00000000UL) /*!< Reset value of MATMULT register.                                     */

        /* MATMULTPOS00LEN26 @Bits 0..25 : Revered */
        #define GPU_CORE_MATMULT_MATMULTPOS00LEN26_Pos (0UL) /*!< Position of MATMULTPOS00LEN26 field.                               */
        #define GPU_CORE_MATMULT_MATMULTPOS00LEN26_Msk (0x3FFFFFFUL << GPU_CORE_MATMULT_MATMULTPOS00LEN26_Pos) /*!< Bit mask of
                                                                                    MATMULTPOS00LEN26 field.*/

        /* MATMULTPOS26LEN01 @Bit 26 : When set to 1, the result is in floating point value */
        #define GPU_CORE_MATMULT_MATMULTPOS26LEN01_Pos (26UL) /*!< Position of MATMULTPOS26LEN01 field.                              */
        #define GPU_CORE_MATMULT_MATMULTPOS26LEN01_Msk (0x1UL << GPU_CORE_MATMULT_MATMULTPOS26LEN01_Pos) /*!< Bit mask of
                                                                                    MATMULTPOS26LEN01 field.*/

        /* MATMULTPOS27LEN01 @Bit 27 : When set to 0, the result is in fixed point value (default) */
        #define GPU_CORE_MATMULT_MATMULTPOS27LEN01_Pos (27UL) /*!< Position of MATMULTPOS27LEN01 field.                              */
        #define GPU_CORE_MATMULT_MATMULTPOS27LEN01_Msk (0x1UL << GPU_CORE_MATMULT_MATMULTPOS27LEN01_Pos) /*!< Bit mask of
                                                                                    MATMULTPOS27LEN01 field.*/

        /* MATMULTPOS28LEN01 @Bit 28 : When set to 1, the matrix multiplications are bypassed */
        #define GPU_CORE_MATMULT_MATMULTPOS28LEN01_Pos (28UL) /*!< Position of MATMULTPOS28LEN01 field.                              */
        #define GPU_CORE_MATMULT_MATMULTPOS28LEN01_Msk (0x1UL << GPU_CORE_MATMULT_MATMULTPOS28LEN01_Pos) /*!< Bit mask of
                                                                                    MATMULTPOS28LEN01 field.*/

        /* MATMULTPOS29LEN01 @Bit 29 : When set to 1, the 0.5 value is added to the X and Y coordinates */
        #define GPU_CORE_MATMULT_MATMULTPOS29LEN01_Pos (29UL) /*!< Position of MATMULTPOS29LEN01 field.                              */
        #define GPU_CORE_MATMULT_MATMULTPOS29LEN01_Msk (0x1UL << GPU_CORE_MATMULT_MATMULTPOS29LEN01_Pos) /*!< Bit mask of
                                                                                    MATMULTPOS29LEN01 field.*/

        /* MATMULTPOS30LEN01 @Bit 30 : Revered */
        #define GPU_CORE_MATMULT_MATMULTPOS30LEN01_Pos (30UL) /*!< Position of MATMULTPOS30LEN01 field.                              */
        #define GPU_CORE_MATMULT_MATMULTPOS30LEN01_Msk (0x1UL << GPU_CORE_MATMULT_MATMULTPOS30LEN01_Pos) /*!< Bit mask of
                                                                                    MATMULTPOS30LEN01 field.*/

        /* MATMULTPOS31LEN01 @Bit 31 : When set to 0, perspective mode is on (default) */
        #define GPU_CORE_MATMULT_MATMULTPOS31LEN01_Pos (31UL) /*!< Position of MATMULTPOS31LEN01 field.                              */
        #define GPU_CORE_MATMULT_MATMULTPOS31LEN01_Msk (0x1UL << GPU_CORE_MATMULT_MATMULTPOS31LEN01_Pos) /*!< Bit mask of
                                                                                    MATMULTPOS31LEN01 field.*/


        /* GPU_CORE_CODEPTR: Shader code pointer */
        #define GPU_CORE_CODEPTR_ResetValue (0x00000000UL) /*!< Reset value of CODEPTR register.                                     */

        /* CODEPTRFRG @Bits 0..15 : Specifies the pointer for the instruction that will be executed for the foreground pixels */
        #define GPU_CORE_CODEPTR_CODEPTRFRG_Pos (0UL)      /*!< Position of CODEPTRFRG field.                                        */
        #define GPU_CORE_CODEPTR_CODEPTRFRG_Msk (0xFFFFUL << GPU_CORE_CODEPTR_CODEPTRFRG_Pos) /*!< Bit mask of CODEPTRFRG field.     */

        /* CODEPTRBCG @Bits 16..31 : Specifies the pointer for the instruction that will be executed for the background pixels */
        #define GPU_CORE_CODEPTR_CODEPTRBCG_Pos (16UL)     /*!< Position of CODEPTRBCG field.                                        */
        #define GPU_CORE_CODEPTR_CODEPTRBCG_Msk (0xFFFFUL << GPU_CORE_CODEPTR_CODEPTRBCG_Pos) /*!< Bit mask of CODEPTRBCG field.     */


        /* GPU_CORE_DRAWPT0X: X coordinate of vertex 0 drawing primitive. The value is 16.16 fixed point. */
        #define GPU_CORE_DRAWPT0X_ResetValue (0x00000000UL) /*!< Reset value of DRAWPT0X register.                                   */

        /* DRAWPT0X @Bits 0..31 : Specifies the X coordinate of vertex 0 drawing primitive (16.16 fixed point) */
        #define GPU_CORE_DRAWPT0X_DRAWPT0X_Pos (0UL)       /*!< Position of DRAWPT0X field.                                          */
        #define GPU_CORE_DRAWPT0X_DRAWPT0X_Msk (0xFFFFFFFFUL << GPU_CORE_DRAWPT0X_DRAWPT0X_Pos) /*!< Bit mask of DRAWPT0X field.     */


        /* GPU_CORE_DRAWPT0Y: Y coordinate of vertex 0 drawing primitive. The value is 16.16 fixed point. */
        #define GPU_CORE_DRAWPT0Y_ResetValue (0x00000000UL) /*!< Reset value of DRAWPT0Y register.                                   */

        /* DRAWPT0Y @Bits 0..31 : Specifies the Y coordinate of vertex 0 drawing primitive (16.16 fixed point) */
        #define GPU_CORE_DRAWPT0Y_DRAWPT0Y_Pos (0UL)       /*!< Position of DRAWPT0Y field.                                          */
        #define GPU_CORE_DRAWPT0Y_DRAWPT0Y_Msk (0xFFFFFFFFUL << GPU_CORE_DRAWPT0Y_DRAWPT0Y_Pos) /*!< Bit mask of DRAWPT0Y field.     */


        /* GPU_CORE_DRAWCOLOR: Rasterizer drawing color for filling primitives */
        #define GPU_CORE_DRAWCOLOR_ResetValue (0x00000000UL) /*!< Reset value of DRAWCOLOR register.                                 */

        /* DRAWCOLOR @Bits 0..31 : Specifies the drawing color for filling primitives */
        #define GPU_CORE_DRAWCOLOR_DRAWCOLOR_Pos (0UL)     /*!< Position of DRAWCOLOR field.                                         */
        #define GPU_CORE_DRAWCOLOR_DRAWCOLOR_Msk (0xFFFFFFFFUL << GPU_CORE_DRAWCOLOR_DRAWCOLOR_Pos) /*!< Bit mask of DRAWCOLOR field.*/


        /* GPU_CORE_DRAWPT1X: X coordinate of vertex 1 drawing primitive. The value is 16.16 fixed point. */
        #define GPU_CORE_DRAWPT1X_ResetValue (0x00000000UL) /*!< Reset value of DRAWPT1X register.                                   */

        /* DRAWPT1X @Bits 0..31 : Specifies the X coordinate of vertex 1 drawing primitive (16.16 fixed point) */
        #define GPU_CORE_DRAWPT1X_DRAWPT1X_Pos (0UL)       /*!< Position of DRAWPT1X field.                                          */
        #define GPU_CORE_DRAWPT1X_DRAWPT1X_Msk (0xFFFFFFFFUL << GPU_CORE_DRAWPT1X_DRAWPT1X_Pos) /*!< Bit mask of DRAWPT1X field.     */


        /* GPU_CORE_DRAWPT1Y: Y coordinate of vertex 1 drawing primitive. The value is 16.16 fixed point. */
        #define GPU_CORE_DRAWPT1Y_ResetValue (0x00000000UL) /*!< Reset value of DRAWPT1Y register.                                   */

        /* DRAWPT1Y @Bits 0..31 : Specifies the Y coordinate of vertex 1 drawing primitive (16.16 fixed point) */
        #define GPU_CORE_DRAWPT1Y_DRAWPT1Y_Pos (0UL)       /*!< Position of DRAWPT1Y field.                                          */
        #define GPU_CORE_DRAWPT1Y_DRAWPT1Y_Msk (0xFFFFFFFFUL << GPU_CORE_DRAWPT1Y_DRAWPT1Y_Pos) /*!< Bit mask of DRAWPT1Y field.     */


        /* GPU_CORE_BYPASSADDR: Address of bypass mode of rasterizer setup access */
        #define GPU_CORE_BYPASSADDR_ResetValue (0x00000000UL) /*!< Reset value of BYPASSADDR register.                               */

        /* BYPASSADDR @Bits 0..31 : Address of bypass mode of rasterizer setup access */
        #define GPU_CORE_BYPASSADDR_BYPASSADDR_Pos (0UL)   /*!< Position of BYPASSADDR field.                                        */
        #define GPU_CORE_BYPASSADDR_BYPASSADDR_Msk (0xFFFFFFFFUL << GPU_CORE_BYPASSADDR_BYPASSADDR_Pos) /*!< Bit mask of BYPASSADDR
                                                                                    field.*/


        /* GPU_CORE_BYPASSDATA: Data and enable of bypass mode of rasterizer */
        #define GPU_CORE_BYPASSDATA_ResetValue (0x00000000UL) /*!< Reset value of BYPASSDATA register.                               */

        /* BYPASSDATA @Bits 0..31 : Data and enable of bypass mode of rasterizer */
        #define GPU_CORE_BYPASSDATA_BYPASSDATA_Pos (0UL)   /*!< Position of BYPASSDATA field.                                        */
        #define GPU_CORE_BYPASSDATA_BYPASSDATA_Msk (0xFFFFFFFFUL << GPU_CORE_BYPASSDATA_BYPASSDATA_Pos) /*!< Bit mask of BYPASSDATA
                                                                                    field.*/


        /* GPU_CORE_DRAWPT2X: X coordinate of vertex 2 drawing primitive. The value is 16.16 fixed point */
        #define GPU_CORE_DRAWPT2X_ResetValue (0x00000000UL) /*!< Reset value of DRAWPT2X register.                                   */

        /* DRAWPT2X @Bits 0..31 : Specifies the X coordinate of vertex 2 drawing primitive (16.16 fixed point) */
        #define GPU_CORE_DRAWPT2X_DRAWPT2X_Pos (0UL)       /*!< Position of DRAWPT2X field.                                          */
        #define GPU_CORE_DRAWPT2X_DRAWPT2X_Msk (0xFFFFFFFFUL << GPU_CORE_DRAWPT2X_DRAWPT2X_Pos) /*!< Bit mask of DRAWPT2X field.     */


        /* GPU_CORE_DRAWPT2Y: Y coordinate of vertex 2 drawing primitive. The value is 16.16 fixed point */
        #define GPU_CORE_DRAWPT2Y_ResetValue (0x00000000UL) /*!< Reset value of DRAWPT2Y register.                                   */

        /* DRAWPT2Y @Bits 0..31 : Specifies the Y coordinate of vertex 2 drawing primitive (16.16 fixed point) */
        #define GPU_CORE_DRAWPT2Y_DRAWPT2Y_Pos (0UL)       /*!< Position of DRAWPT2Y field.                                          */
        #define GPU_CORE_DRAWPT2Y_DRAWPT2Y_Msk (0xFFFFFFFFUL << GPU_CORE_DRAWPT2Y_DRAWPT2Y_Pos) /*!< Bit mask of DRAWPT2Y field.     */


        /* GPU_CORE_CLID: Command List ID Key */
        #define GPU_CORE_CLID_ResetValue (0x00000000UL)    /*!< Reset value of CLID register.                                        */

        /* CLID @Bits 0..31 : Specifies the last executed command list */
        #define GPU_CORE_CLID_CLID_Pos (0UL)               /*!< Position of CLID field.                                              */
        #define GPU_CORE_CLID_CLID_Msk (0xFFFFFFFFUL << GPU_CORE_CLID_CLID_Pos) /*!< Bit mask of CLID field.                         */


        /* GPU_CORE_DRAWPT3X: X coordinate of vertex 3 drawing primitive. The value is 16.16 fixed point */
        #define GPU_CORE_DRAWPT3X_ResetValue (0x00000000UL) /*!< Reset value of DRAWPT3X register.                                   */

        /* DRAWPT3X @Bits 0..31 : Specifies the X coordinate of vertex 3 drawing primitive (16.16 fixed point) */
        #define GPU_CORE_DRAWPT3X_DRAWPT3X_Pos (0UL)       /*!< Position of DRAWPT3X field.                                          */
        #define GPU_CORE_DRAWPT3X_DRAWPT3X_Msk (0xFFFFFFFFUL << GPU_CORE_DRAWPT3X_DRAWPT3X_Pos) /*!< Bit mask of DRAWPT3X field.     */


        /* GPU_CORE_DRAWPT3Y: Y coordinate of vertex 3 drawing primitive. The value is 16.16 fixed point */
        #define GPU_CORE_DRAWPT3Y_ResetValue (0x00000000UL) /*!< Reset value of DRAWPT3Y register.                                   */

        /* DRAWPT3Y @Bits 0..31 : Specifies the Y coordinate of vertex 3 drawing primitive (16.16 fixed point) */
        #define GPU_CORE_DRAWPT3Y_DRAWPT3Y_Pos (0UL)       /*!< Position of DRAWPT3Y field.                                          */
        #define GPU_CORE_DRAWPT3Y_DRAWPT3Y_Msk (0xFFFFFFFFUL << GPU_CORE_DRAWPT3Y_DRAWPT3Y_Pos) /*!< Bit mask of DRAWPT3Y field.     */


        /* GPU_CORE_MM00: (0,0) matrix floating point element. On read return the floating point value with the selected characteristics
                        */

        #define GPU_CORE_MM00_ResetValue (0x00000000UL)    /*!< Reset value of MM00 register.                                        */

        /* MM00 @Bits 0..20 : Specifies the (0,0) element */
        #define GPU_CORE_MM00_MM00_Pos (0UL)               /*!< Position of MM00 field.                                              */
        #define GPU_CORE_MM00_MM00_Msk (0x1FFFFFUL << GPU_CORE_MM00_MM00_Pos) /*!< Bit mask of MM00 field.                           */

        /* MM00POS21LEN11 @Bits 21..31 : Revered */
        #define GPU_CORE_MM00_MM00POS21LEN11_Pos (21UL)    /*!< Position of MM00POS21LEN11 field.                                    */
        #define GPU_CORE_MM00_MM00POS21LEN11_Msk (0x7FFUL << GPU_CORE_MM00_MM00POS21LEN11_Pos) /*!< Bit mask of MM00POS21LEN11 field.*/


        /* GPU_CORE_MM01: (0,1) matrix floating point element. On read return the floating point value with the selected characteristics
                        */

        #define GPU_CORE_MM01_ResetValue (0x00000000UL)    /*!< Reset value of MM01 register.                                        */

        /* MM01 @Bits 0..20 : Specifies the (0,1) element */
        #define GPU_CORE_MM01_MM01_Pos (0UL)               /*!< Position of MM01 field.                                              */
        #define GPU_CORE_MM01_MM01_Msk (0x1FFFFFUL << GPU_CORE_MM01_MM01_Pos) /*!< Bit mask of MM01 field.                           */

        /* MM01POS21LEN11 @Bits 21..31 : Revered */
        #define GPU_CORE_MM01_MM01POS21LEN11_Pos (21UL)    /*!< Position of MM01POS21LEN11 field.                                    */
        #define GPU_CORE_MM01_MM01POS21LEN11_Msk (0x7FFUL << GPU_CORE_MM01_MM01POS21LEN11_Pos) /*!< Bit mask of MM01POS21LEN11 field.*/


        /* GPU_CORE_MM02: (0,2) matrix floating point element. On read return the floating point value with the selected characteristics
                        */

        #define GPU_CORE_MM02_ResetValue (0x00000000UL)    /*!< Reset value of MM02 register.                                        */

        /* MM02 @Bits 0..20 : Specifies the (0,2) element */
        #define GPU_CORE_MM02_MM02_Pos (0UL)               /*!< Position of MM02 field.                                              */
        #define GPU_CORE_MM02_MM02_Msk (0x1FFFFFUL << GPU_CORE_MM02_MM02_Pos) /*!< Bit mask of MM02 field.                           */

        /* MM02POS21LEN11 @Bits 21..31 : Revered */
        #define GPU_CORE_MM02_MM02POS21LEN11_Pos (21UL)    /*!< Position of MM02POS21LEN11 field.                                    */
        #define GPU_CORE_MM02_MM02POS21LEN11_Msk (0x7FFUL << GPU_CORE_MM02_MM02POS21LEN11_Pos) /*!< Bit mask of MM02POS21LEN11 field.*/


        /* GPU_CORE_MM10: (1,0) matrix floating point element. On read return the floating point value with the selected characteristics
                        */

        #define GPU_CORE_MM10_ResetValue (0x00000000UL)    /*!< Reset value of MM10 register.                                        */

        /* MM10 @Bits 0..20 : Specifies the (1,0) element */
        #define GPU_CORE_MM10_MM10_Pos (0UL)               /*!< Position of MM10 field.                                              */
        #define GPU_CORE_MM10_MM10_Msk (0x1FFFFFUL << GPU_CORE_MM10_MM10_Pos) /*!< Bit mask of MM10 field.                           */

        /* MM10POS21LEN11 @Bits 21..31 : Revered */
        #define GPU_CORE_MM10_MM10POS21LEN11_Pos (21UL)    /*!< Position of MM10POS21LEN11 field.                                    */
        #define GPU_CORE_MM10_MM10POS21LEN11_Msk (0x7FFUL << GPU_CORE_MM10_MM10POS21LEN11_Pos) /*!< Bit mask of MM10POS21LEN11 field.*/


        /* GPU_CORE_MM11: (1,1) matrix floating point element. On read return the floating point value with the selected characteristics
                        */

        #define GPU_CORE_MM11_ResetValue (0x00000000UL)    /*!< Reset value of MM11 register.                                        */

        /* MM11 @Bits 0..20 : Specifies the (1,1) element */
        #define GPU_CORE_MM11_MM11_Pos (0UL)               /*!< Position of MM11 field.                                              */
        #define GPU_CORE_MM11_MM11_Msk (0x1FFFFFUL << GPU_CORE_MM11_MM11_Pos) /*!< Bit mask of MM11 field.                           */

        /* MM11POS21LEN11 @Bits 21..31 : Revered */
        #define GPU_CORE_MM11_MM11POS21LEN11_Pos (21UL)    /*!< Position of MM11POS21LEN11 field.                                    */
        #define GPU_CORE_MM11_MM11POS21LEN11_Msk (0x7FFUL << GPU_CORE_MM11_MM11POS21LEN11_Pos) /*!< Bit mask of MM11POS21LEN11 field.*/


        /* GPU_CORE_MM12: (1,2) matrix floating point element. On read return the floating point value with the selected characteristics
                        */

        #define GPU_CORE_MM12_ResetValue (0x00000000UL)    /*!< Reset value of MM12 register.                                        */

        /* MM12 @Bits 0..20 : Specifies the (1,2) element */
        #define GPU_CORE_MM12_MM12_Pos (0UL)               /*!< Position of MM12 field.                                              */
        #define GPU_CORE_MM12_MM12_Msk (0x1FFFFFUL << GPU_CORE_MM12_MM12_Pos) /*!< Bit mask of MM12 field.                           */

        /* MM12POS21LEN11 @Bits 21..31 : Revered */
        #define GPU_CORE_MM12_MM12POS21LEN11_Pos (21UL)    /*!< Position of MM12POS21LEN11 field.                                    */
        #define GPU_CORE_MM12_MM12POS21LEN11_Msk (0x7FFUL << GPU_CORE_MM12_MM12POS21LEN11_Pos) /*!< Bit mask of MM12POS21LEN11 field.*/


        /* GPU_CORE_MM20: (2,0) matrix floating point element. On read return the floating point value with the selected characteristics
                        */

        #define GPU_CORE_MM20_ResetValue (0x00000000UL)    /*!< Reset value of MM20 register.                                        */

        /* MM20 @Bits 0..20 : Specifies the (2,0) element */
        #define GPU_CORE_MM20_MM20_Pos (0UL)               /*!< Position of MM20 field.                                              */
        #define GPU_CORE_MM20_MM20_Msk (0x1FFFFFUL << GPU_CORE_MM20_MM20_Pos) /*!< Bit mask of MM20 field.                           */

        /* MM20POS21LEN11 @Bits 21..31 : Revered */
        #define GPU_CORE_MM20_MM20POS21LEN11_Pos (21UL)    /*!< Position of MM20POS21LEN11 field.                                    */
        #define GPU_CORE_MM20_MM20POS21LEN11_Msk (0x7FFUL << GPU_CORE_MM20_MM20POS21LEN11_Pos) /*!< Bit mask of MM20POS21LEN11 field.*/


        /* GPU_CORE_MM21: (2,1) matrix floating point element. On read return the floating point value with the selected characteristics
                        */

        #define GPU_CORE_MM21_ResetValue (0x00000000UL)    /*!< Reset value of MM21 register.                                        */

        /* MM21 @Bits 0..20 : Specifies the (2,1) element */
        #define GPU_CORE_MM21_MM21_Pos (0UL)               /*!< Position of MM21 field.                                              */
        #define GPU_CORE_MM21_MM21_Msk (0x1FFFFFUL << GPU_CORE_MM21_MM21_Pos) /*!< Bit mask of MM21 field.                           */

        /* MM21POS21LEN11 @Bits 21..31 : Revered */
        #define GPU_CORE_MM21_MM21POS21LEN11_Pos (21UL)    /*!< Position of MM21POS21LEN11 field.                                    */
        #define GPU_CORE_MM21_MM21POS21LEN11_Msk (0x7FFUL << GPU_CORE_MM21_MM21POS21LEN11_Pos) /*!< Bit mask of MM21POS21LEN11 field.*/


        /* GPU_CORE_MM22: (2,2) matrix floating point element. On read return the floating point value with the selected characteristics
                        */

        #define GPU_CORE_MM22_ResetValue (0x00000000UL)    /*!< Reset value of MM22 register.                                        */

        /* MM22 @Bits 0..20 : Specifies the (2,2) element */
        #define GPU_CORE_MM22_MM22_Pos (0UL)               /*!< Position of MM22 field.                                              */
        #define GPU_CORE_MM22_MM22_Msk (0x1FFFFFUL << GPU_CORE_MM22_MM22_Pos) /*!< Bit mask of MM22 field.                           */

        /* MM22POS21LEN11 @Bits 21..31 : Revered */
        #define GPU_CORE_MM22_MM22POS21LEN11_Pos (21UL)    /*!< Position of MM22POS21LEN11 field.                                    */
        #define GPU_CORE_MM22_MM22POS21LEN11_Msk (0x7FFUL << GPU_CORE_MM22_MM22POS21LEN11_Pos) /*!< Bit mask of MM22POS21LEN11 field.*/


        /* GPU_CORE_DEPTHSTARTL: Depth value of the STARTXY pixel. This register defines the */
        #define GPU_CORE_DEPTHSTARTL_ResetValue (0x00000000UL) /*!< Reset value of DEPTHSTARTL register.                             */

        /* DEPTHSTARTL @Bits 0..31 : Specifies the fractional part of the depth value of the STARTXY pixel */
        #define GPU_CORE_DEPTHSTARTL_DEPTHSTARTL_Pos (0UL) /*!< Position of DEPTHSTARTL field.                                       */
        #define GPU_CORE_DEPTHSTARTL_DEPTHSTARTL_Msk (0xFFFFFFFFUL << GPU_CORE_DEPTHSTARTL_DEPTHSTARTL_Pos) /*!< Bit mask of
                                                                                    DEPTHSTARTL field.*/


        /* GPU_CORE_DEPTHSTARTH: Depth value of the STARTXY pixel. This register defines the */
        #define GPU_CORE_DEPTHSTARTH_ResetValue (0x00000000UL) /*!< Reset value of DEPTHSTARTH register.                             */

        /* DEPTHSTARTH @Bits 0..31 : Specifies the integral value of the depth value of the STARTXY pixel */
        #define GPU_CORE_DEPTHSTARTH_DEPTHSTARTH_Pos (0UL) /*!< Position of DEPTHSTARTH field.                                       */
        #define GPU_CORE_DEPTHSTARTH_DEPTHSTARTH_Msk (0xFFFFFFFFUL << GPU_CORE_DEPTHSTARTH_DEPTHSTARTH_Pos) /*!< Bit mask of
                                                                                    DEPTHSTARTH field.*/


        /* GPU_CORE_DEPTHDXL: For each step at x-axis, depth value is added. */
        #define GPU_CORE_DEPTHDXL_ResetValue (0x00000000UL) /*!< Reset value of DEPTHDXL register.                                   */

        /* DEPTHDXL @Bits 0..31 : Specifies the fractional part of the added depth value for each step at x-axis */
        #define GPU_CORE_DEPTHDXL_DEPTHDXL_Pos (0UL)       /*!< Position of DEPTHDXL field.                                          */
        #define GPU_CORE_DEPTHDXL_DEPTHDXL_Msk (0xFFFFFFFFUL << GPU_CORE_DEPTHDXL_DEPTHDXL_Pos) /*!< Bit mask of DEPTHDXL field.     */


        /* GPU_CORE_DEPTHDXH: For each step at x-axis, depth value is added. */
        #define GPU_CORE_DEPTHDXH_ResetValue (0x00000000UL) /*!< Reset value of DEPTHDXH register.                                   */

        /* DEPTHDXH @Bits 0..31 : Specifies the integral part of the added depth value for each step at x-axis */
        #define GPU_CORE_DEPTHDXH_DEPTHDXH_Pos (0UL)       /*!< Position of DEPTHDXH field.                                          */
        #define GPU_CORE_DEPTHDXH_DEPTHDXH_Msk (0xFFFFFFFFUL << GPU_CORE_DEPTHDXH_DEPTHDXH_Pos) /*!< Bit mask of DEPTHDXH field.     */


        /* GPU_CORE_DEPTHDYL: For each step at y-axis, depth value is added. */
        #define GPU_CORE_DEPTHDYL_ResetValue (0x00000000UL) /*!< Reset value of DEPTHDYL register.                                   */

        /* DEPTHDYL @Bits 0..31 : Specifies the fractional part of the added depth value for each step at y-axis */
        #define GPU_CORE_DEPTHDYL_DEPTHDYL_Pos (0UL)       /*!< Position of DEPTHDYL field.                                          */
        #define GPU_CORE_DEPTHDYL_DEPTHDYL_Msk (0xFFFFFFFFUL << GPU_CORE_DEPTHDYL_DEPTHDYL_Pos) /*!< Bit mask of DEPTHDYL field.     */


        /* GPU_CORE_DEPTHDYH: For each step at y-axis, depth value is added. */
        #define GPU_CORE_DEPTHDYH_ResetValue (0x00000000UL) /*!< Reset value of DEPTHDYH register.                                   */

        /* DEPTHDYH @Bits 0..31 : Specifies the integral part of the added depth value for each step at y-axis */
        #define GPU_CORE_DEPTHDYH_DEPTHDYH_Pos (0UL)       /*!< Position of DEPTHDYH field.                                          */
        #define GPU_CORE_DEPTHDYH_DEPTHDYH_Msk (0xFFFFFFFFUL << GPU_CORE_DEPTHDYH_DEPTHDYH_Pos) /*!< Bit mask of DEPTHDYH field.     */


        /* GPU_CORE_REDDX: For each step at x-axis, Red (R) value is added. */
        #define GPU_CORE_REDDX_ResetValue (0x00000000UL)   /*!< Reset value of REDDX register.                                       */

        /* REDDX @Bits 0..31 : Specifies the added Red (R) value for each step at x-axis */
        #define GPU_CORE_REDDX_REDDX_Pos (0UL)             /*!< Position of REDDX field.                                             */
        #define GPU_CORE_REDDX_REDDX_Msk (0xFFFFFFFFUL << GPU_CORE_REDDX_REDDX_Pos) /*!< Bit mask of REDDX field.                    */


        /* GPU_CORE_REDDY: For each step at y-axis, Red (R) value is added. */
        #define GPU_CORE_REDDY_ResetValue (0x00000000UL)   /*!< Reset value of REDDY register.                                       */

        /* REDDY @Bits 0..31 : Specifies the added Red (R) value for each step at y-axis */
        #define GPU_CORE_REDDY_REDDY_Pos (0UL)             /*!< Position of REDDY field.                                             */
        #define GPU_CORE_REDDY_REDDY_Msk (0xFFFFFFFFUL << GPU_CORE_REDDY_REDDY_Pos) /*!< Bit mask of REDDY field.                    */


        /* GPU_CORE_GREDX: For each step at x-axis, Green (G) value is added. */
        #define GPU_CORE_GREDX_ResetValue (0x00000000UL)   /*!< Reset value of GREDX register.                                       */

        /* GREDX @Bits 0..31 : Specifies the added Green (G) value for each step at x-axis */
        #define GPU_CORE_GREDX_GREDX_Pos (0UL)             /*!< Position of GREDX field.                                             */
        #define GPU_CORE_GREDX_GREDX_Msk (0xFFFFFFFFUL << GPU_CORE_GREDX_GREDX_Pos) /*!< Bit mask of GREDX field.                    */


        /* GPU_CORE_GREDY: For each step at y-axis, Green (G) value is added. */
        #define GPU_CORE_GREDY_ResetValue (0x00000000UL)   /*!< Reset value of GREDY register.                                       */

        /* GREDY @Bits 0..31 : Specifies the added Green (G) value for each step at y-axis */
        #define GPU_CORE_GREDY_GREDY_Pos (0UL)             /*!< Position of GREDY field.                                             */
        #define GPU_CORE_GREDY_GREDY_Msk (0xFFFFFFFFUL << GPU_CORE_GREDY_GREDY_Pos) /*!< Bit mask of GREDY field.                    */


        /* GPU_CORE_BLUDX: For each step at x-axis, Blue (B) value is added. */
        #define GPU_CORE_BLUDX_ResetValue (0x00000000UL)   /*!< Reset value of BLUDX register.                                       */

        /* BLUDX @Bits 0..31 : Specifies the added Blue (B) value for each step at x-axis */
        #define GPU_CORE_BLUDX_BLUDX_Pos (0UL)             /*!< Position of BLUDX field.                                             */
        #define GPU_CORE_BLUDX_BLUDX_Msk (0xFFFFFFFFUL << GPU_CORE_BLUDX_BLUDX_Pos) /*!< Bit mask of BLUDX field.                    */


        /* GPU_CORE_BLUDY: For each step at y-axis, Blue (B) value is added. */
        #define GPU_CORE_BLUDY_ResetValue (0x00000000UL)   /*!< Reset value of BLUDY register.                                       */

        /* BLUDY @Bits 0..31 : Specifies the added Blue (B) value for each step at y-axis */
        #define GPU_CORE_BLUDY_BLUDY_Pos (0UL)             /*!< Position of BLUDY field.                                             */
        #define GPU_CORE_BLUDY_BLUDY_Msk (0xFFFFFFFFUL << GPU_CORE_BLUDY_BLUDY_Pos) /*!< Bit mask of BLUDY field.                    */


        /* GPU_CORE_ALFDX: For each step at x-axis, Alpha (A) value is added. */
        #define GPU_CORE_ALFDX_ResetValue (0x00000000UL)   /*!< Reset value of ALFDX register.                                       */

        /* ALFDX @Bits 0..31 : Specifies the added Alpha (A) value for each step at x-axis */
        #define GPU_CORE_ALFDX_ALFDX_Pos (0UL)             /*!< Position of ALFDX field.                                             */
        #define GPU_CORE_ALFDX_ALFDX_Msk (0xFFFFFFFFUL << GPU_CORE_ALFDX_ALFDX_Pos) /*!< Bit mask of ALFDX field.                    */


        /* GPU_CORE_ALFDY: For each step at y-axis, Alpha (A) value is added. */
        #define GPU_CORE_ALFDY_ResetValue (0x00000000UL)   /*!< Reset value of ALFDY register.                                       */

        /* ALFDY @Bits 0..31 : Specifies the added Alpha (A) value for each step at y-axis */
        #define GPU_CORE_ALFDY_ALFDY_Pos (0UL)             /*!< Position of ALFDY field.                                             */
        #define GPU_CORE_ALFDY_ALFDY_Msk (0xFFFFFFFFUL << GPU_CORE_ALFDY_ALFDY_Pos) /*!< Bit mask of ALFDY field.                    */


        /* GPU_CORE_REDINIT: Red (R) value of the STARTXY pixel. The value is 16,16 fixed point */
        #define GPU_CORE_REDINIT_ResetValue (0x00000000UL) /*!< Reset value of REDINIT register.                                     */

        /* REDINIT @Bits 0..31 : Specifies the Red (R) value of the STARTXY pixel */
        #define GPU_CORE_REDINIT_REDINIT_Pos (0UL)         /*!< Position of REDINIT field.                                           */
        #define GPU_CORE_REDINIT_REDINIT_Msk (0xFFFFFFFFUL << GPU_CORE_REDINIT_REDINIT_Pos) /*!< Bit mask of REDINIT field.          */


        /* GPU_CORE_GREINIT: Green (G) value of the STARTXY pixel. The value is 16,16 fixed point */
        #define GPU_CORE_GREINIT_ResetValue (0x00000000UL) /*!< Reset value of GREINIT register.                                     */

        /* GREINIT @Bits 0..31 : Specifies the Green (G) value of the STARTXY pixel */
        #define GPU_CORE_GREINIT_GREINIT_Pos (0UL)         /*!< Position of GREINIT field.                                           */
        #define GPU_CORE_GREINIT_GREINIT_Msk (0xFFFFFFFFUL << GPU_CORE_GREINIT_GREINIT_Pos) /*!< Bit mask of GREINIT field.          */


        /* GPU_CORE_BLUINIT: Blue (B) value of the STARTXY pixel. The value is 16,16 fixed point */
        #define GPU_CORE_BLUINIT_ResetValue (0x00000000UL) /*!< Reset value of BLUINIT register.                                     */

        /* BLUINIT @Bits 0..31 : Specifies the Blue (B) value of the STARTXY pixel */
        #define GPU_CORE_BLUINIT_BLUINIT_Pos (0UL)         /*!< Position of BLUINIT field.                                           */
        #define GPU_CORE_BLUINIT_BLUINIT_Msk (0xFFFFFFFFUL << GPU_CORE_BLUINIT_BLUINIT_Pos) /*!< Bit mask of BLUINIT field.          */


        /* GPU_CORE_ALFINIT: Alpha (A) value of the STARTXY pixel. The value is 16,16 fixed point */
        #define GPU_CORE_ALFINIT_ResetValue (0x00000000UL) /*!< Reset value of ALFINIT register.                                     */

        /* ALFINIT @Bits 0..31 : Specifies the Alpha (A) value of the STARTXY pixel */
        #define GPU_CORE_ALFINIT_ALFINIT_Pos (0UL)         /*!< Position of ALFINIT field.                                           */
        #define GPU_CORE_ALFINIT_ALFINIT_Msk (0xFFFFFFFFUL << GPU_CORE_ALFINIT_ALFINIT_Pos) /*!< Bit mask of ALFINIT field.          */


        /* GPU_CORE_ROPBLENDERBLENDMODE: Blending Modes for different calculations between the source */
        #define GPU_CORE_ROPBLENDERBLENDMODE_ResetValue (0x00000000UL) /*!< Reset value of ROPBLENDERBLENDMODE register.             */

        /* ROPBLENDERBLENDMODESOURCE @Bits 0..3 : Blending mode of the current pixel (source pixel) */
        #define GPU_CORE_ROPBLENDERBLENDMODE_ROPBLENDERBLENDMODESOURCE_Pos (0UL) /*!< Position of ROPBLENDERBLENDMODESOURCE field.   */
        #define GPU_CORE_ROPBLENDERBLENDMODE_ROPBLENDERBLENDMODESOURCE_Msk (0xFUL << GPU_CORE_ROPBLENDERBLENDMODE_ROPBLENDERBLENDMODESOURCE_Pos)
                                                                                    /*!< Bit mask of ROPBLENDERBLENDMODESOURCE field.*/

        /* ROPBLENDERBLENDMODEPOS04LEN04 @Bits 4..7 : Revered */
        #define GPU_CORE_ROPBLENDERBLENDMODE_ROPBLENDERBLENDMODEPOS04LEN04_Pos (4UL) /*!< Position of ROPBLENDERBLENDMODEPOS04LEN04
                                                                                    field.*/
        #define GPU_CORE_ROPBLENDERBLENDMODE_ROPBLENDERBLENDMODEPOS04LEN04_Msk (0xFUL << GPU_CORE_ROPBLENDERBLENDMODE_ROPBLENDERBLENDMODEPOS04LEN04_Pos)
                                                                                    /*!< Bit mask of ROPBLENDERBLENDMODEPOS04LEN04
                                                                                    field.*/

        /* ROPBLENDERBLENDMODEDEST @Bits 8..11 : Blending mode of the stored pixel in the FrameBuffer (destination pixel) */
        #define GPU_CORE_ROPBLENDERBLENDMODE_ROPBLENDERBLENDMODEDEST_Pos (8UL) /*!< Position of ROPBLENDERBLENDMODEDEST field.       */
        #define GPU_CORE_ROPBLENDERBLENDMODE_ROPBLENDERBLENDMODEDEST_Msk (0xFUL << GPU_CORE_ROPBLENDERBLENDMODE_ROPBLENDERBLENDMODEDEST_Pos)
                                                                                    /*!< Bit mask of ROPBLENDERBLENDMODEDEST field.*/

        /* ROPBLENDERBLENDMODEPOS12LEN13 @Bits 12..24 : Revered */
        #define GPU_CORE_ROPBLENDERBLENDMODE_ROPBLENDERBLENDMODEPOS12LEN13_Pos (12UL) /*!< Position of ROPBLENDERBLENDMODEPOS12LEN13
                                                                                    field.*/
        #define GPU_CORE_ROPBLENDERBLENDMODE_ROPBLENDERBLENDMODEPOS12LEN13_Msk (0x1FFFUL << GPU_CORE_ROPBLENDERBLENDMODE_ROPBLENDERBLENDMODEPOS12LEN13_Pos)
                                                                                    /*!< Bit mask of ROPBLENDERBLENDMODEPOS12LEN13
                                                                                    field.*/

        /* ROPBLENDERBLENDMODEBLDOFF @Bit 25 : Force GPU to not use the Blender accelerator. */
        #define GPU_CORE_ROPBLENDERBLENDMODE_ROPBLENDERBLENDMODEBLDOFF_Pos (25UL) /*!< Position of ROPBLENDERBLENDMODEBLDOFF field.  */
        #define GPU_CORE_ROPBLENDERBLENDMODE_ROPBLENDERBLENDMODEBLDOFF_Msk (0x1UL << GPU_CORE_ROPBLENDERBLENDMODE_ROPBLENDERBLENDMODEBLDOFF_Pos)
                                                                                    /*!< Bit mask of ROPBLENDERBLENDMODEBLDOFF field.*/

        /* ROPBLENDERBLENDMODEPOS26LEN04 @Bits 26..29 : Revered */
        #define GPU_CORE_ROPBLENDERBLENDMODE_ROPBLENDERBLENDMODEPOS26LEN04_Pos (26UL) /*!< Position of ROPBLENDERBLENDMODEPOS26LEN04
                                                                                    field.*/
        #define GPU_CORE_ROPBLENDERBLENDMODE_ROPBLENDERBLENDMODEPOS26LEN04_Msk (0xFUL << GPU_CORE_ROPBLENDERBLENDMODE_ROPBLENDERBLENDMODEPOS26LEN04_Pos)
                                                                                    /*!< Bit mask of ROPBLENDERBLENDMODEPOS26LEN04
                                                                                    field.*/

        /* ROPBLENDERBLENDMODECLKEYSRC @Bit 30 : If set, enables Source Color Keying */
        #define GPU_CORE_ROPBLENDERBLENDMODE_ROPBLENDERBLENDMODECLKEYSRC_Pos (30UL) /*!< Position of ROPBLENDERBLENDMODECLKEYSRC
                                                                                    field.*/
        #define GPU_CORE_ROPBLENDERBLENDMODE_ROPBLENDERBLENDMODECLKEYSRC_Msk (0x1UL << GPU_CORE_ROPBLENDERBLENDMODE_ROPBLENDERBLENDMODECLKEYSRC_Pos)
                                                                                    /*!< Bit mask of ROPBLENDERBLENDMODECLKEYSRC field.*/

        /* ROPBLENDERBLENDMODECLKEYDST @Bit 31 : If set, enables Destination Color Keying */
        #define GPU_CORE_ROPBLENDERBLENDMODE_ROPBLENDERBLENDMODECLKEYDST_Pos (31UL) /*!< Position of ROPBLENDERBLENDMODECLKEYDST
                                                                                    field.*/
        #define GPU_CORE_ROPBLENDERBLENDMODE_ROPBLENDERBLENDMODECLKEYDST_Msk (0x1UL << GPU_CORE_ROPBLENDERBLENDMODE_ROPBLENDERBLENDMODECLKEYDST_Pos)
                                                                                    /*!< Bit mask of ROPBLENDERBLENDMODECLKEYDST field.*/


        /* GPU_CORE_ROPBLENDERDSTCKEY: When Color Keying is enabled. The new pixel is written in the Frame Buffer, */
        #define GPU_CORE_ROPBLENDERDSTCKEY_ResetValue (0x00000000UL) /*!< Reset value of ROPBLENDERDSTCKEY register.                 */

        /* ROPBLENDERDSTCKEYRED @Bits 0..7 : Specifies the Red (R) value */
        #define GPU_CORE_ROPBLENDERDSTCKEY_ROPBLENDERDSTCKEYRED_Pos (0UL) /*!< Position of ROPBLENDERDSTCKEYRED field.               */
        #define GPU_CORE_ROPBLENDERDSTCKEY_ROPBLENDERDSTCKEYRED_Msk (0xFFUL << GPU_CORE_ROPBLENDERDSTCKEY_ROPBLENDERDSTCKEYRED_Pos)
                                                                                    /*!< Bit mask of ROPBLENDERDSTCKEYRED field.*/

        /* ROPBLENDERDSTCKEYGREEN @Bits 8..15 : Specifies the Green (G) value */
        #define GPU_CORE_ROPBLENDERDSTCKEY_ROPBLENDERDSTCKEYGREEN_Pos (8UL) /*!< Position of ROPBLENDERDSTCKEYGREEN field.           */
        #define GPU_CORE_ROPBLENDERDSTCKEY_ROPBLENDERDSTCKEYGREEN_Msk (0xFFUL << GPU_CORE_ROPBLENDERDSTCKEY_ROPBLENDERDSTCKEYGREEN_Pos)
                                                                                    /*!< Bit mask of ROPBLENDERDSTCKEYGREEN field.*/

        /* ROPBLENDERDSTCKEYBLUE @Bits 16..23 : Specifies the Blue (B) value */
        #define GPU_CORE_ROPBLENDERDSTCKEY_ROPBLENDERDSTCKEYBLUE_Pos (16UL) /*!< Position of ROPBLENDERDSTCKEYBLUE field.            */
        #define GPU_CORE_ROPBLENDERDSTCKEY_ROPBLENDERDSTCKEYBLUE_Msk (0xFFUL << GPU_CORE_ROPBLENDERDSTCKEY_ROPBLENDERDSTCKEYBLUE_Pos)
                                                                                    /*!< Bit mask of ROPBLENDERDSTCKEYBLUE field.*/

        /* ROPBLENDERDSTCKEYALPHA @Bits 24..31 : Specifies the Alpha (A) value */
        #define GPU_CORE_ROPBLENDERDSTCKEY_ROPBLENDERDSTCKEYALPHA_Pos (24UL) /*!< Position of ROPBLENDERDSTCKEYALPHA field.          */
        #define GPU_CORE_ROPBLENDERDSTCKEY_ROPBLENDERDSTCKEYALPHA_Msk (0xFFUL << GPU_CORE_ROPBLENDERDSTCKEY_ROPBLENDERDSTCKEYALPHA_Pos)
                                                                                    /*!< Bit mask of ROPBLENDERDSTCKEYALPHA field.*/


        /* GPU_CORE_ROPBLENDERCONSTCOLOR: Constant Color value which is used for blending when the blending modes. */
        #define GPU_CORE_ROPBLENDERCONSTCOLOR_ResetValue (0x00000000UL) /*!< Reset value of ROPBLENDERCONSTCOLOR register.           */

        /* ROPBLENDERCONSTCOLORRED @Bits 0..7 : Specifies the Red (R) value */
        #define GPU_CORE_ROPBLENDERCONSTCOLOR_ROPBLENDERCONSTCOLORRED_Pos (0UL) /*!< Position of ROPBLENDERCONSTCOLORRED field.      */
        #define GPU_CORE_ROPBLENDERCONSTCOLOR_ROPBLENDERCONSTCOLORRED_Msk (0xFFUL << GPU_CORE_ROPBLENDERCONSTCOLOR_ROPBLENDERCONSTCOLORRED_Pos)
                                                                                    /*!< Bit mask of ROPBLENDERCONSTCOLORRED field.*/

        /* ROPBLENDERCONSTCOLORGREEN @Bits 8..15 : Specifies the Green (G) value */
        #define GPU_CORE_ROPBLENDERCONSTCOLOR_ROPBLENDERCONSTCOLORGREEN_Pos (8UL) /*!< Position of ROPBLENDERCONSTCOLORGREEN field.  */
        #define GPU_CORE_ROPBLENDERCONSTCOLOR_ROPBLENDERCONSTCOLORGREEN_Msk (0xFFUL << GPU_CORE_ROPBLENDERCONSTCOLOR_ROPBLENDERCONSTCOLORGREEN_Pos)
                                                                                    /*!< Bit mask of ROPBLENDERCONSTCOLORGREEN field.*/

        /* ROPBLENDERCONSTCOLORBLUE @Bits 16..23 : Specifies the Blue (B) value */
        #define GPU_CORE_ROPBLENDERCONSTCOLOR_ROPBLENDERCONSTCOLORBLUE_Pos (16UL) /*!< Position of ROPBLENDERCONSTCOLORBLUE field.   */
        #define GPU_CORE_ROPBLENDERCONSTCOLOR_ROPBLENDERCONSTCOLORBLUE_Msk (0xFFUL << GPU_CORE_ROPBLENDERCONSTCOLOR_ROPBLENDERCONSTCOLORBLUE_Pos)
                                                                                    /*!< Bit mask of ROPBLENDERCONSTCOLORBLUE field.*/

        /* ROPBLENDERCONSTCOLORALPHA @Bits 24..31 : Specifies the Alpha (A) value */
        #define GPU_CORE_ROPBLENDERCONSTCOLOR_ROPBLENDERCONSTCOLORALPHA_Pos (24UL) /*!< Position of ROPBLENDERCONSTCOLORALPHA field. */
        #define GPU_CORE_ROPBLENDERCONSTCOLOR_ROPBLENDERCONSTCOLORALPHA_Msk (0xFFUL << GPU_CORE_ROPBLENDERCONSTCOLOR_ROPBLENDERCONSTCOLORALPHA_Pos)
                                                                                    /*!< Bit mask of ROPBLENDERCONSTCOLORALPHA field.*/


        /* GPU_CORE_IPVERSION: Returns the configuration status */
        #define GPU_CORE_IPVERSION_ResetValue (0x00010009UL) /*!< Reset value of IPVERSION register.                                 */

        /* IPVERSION @Bits 0..31 : The current version of the GPU IP */
        #define GPU_CORE_IPVERSION_IPVERSION_Pos (0UL)     /*!< Position of IPVERSION field.                                         */
        #define GPU_CORE_IPVERSION_IPVERSION_Msk (0xFFFFFFFFUL << GPU_CORE_IPVERSION_IPVERSION_Pos) /*!< Bit mask of IPVERSION field.*/


        /* GPU_CORE_IDREG: GPU ID Register (fixed value) */
        #define GPU_CORE_IDREG_ResetValue (0x86362000UL)   /*!< Reset value of IDREG register.                                       */

        /* IDREG @Bits 0..31 : The fixed value is 0x86362000 */
        #define GPU_CORE_IDREG_IDREG_Pos (0UL)             /*!< Position of IDREG field.                                             */
        #define GPU_CORE_IDREG_IDREG_Msk (0xFFFFFFFFUL << GPU_CORE_IDREG_IDREG_Pos) /*!< Bit mask of IDREG field.                    */


        /* GPU_CORE_CONFIG: GPU onfiguration status */
        #define GPU_CORE_CONFIG_ResetValue (0xF4030106UL)  /*!< Reset value of CONFIG register.                                      */

        /* CONFIGTHREADS @Bits 0..7 : Indicates the log2 number of threads */
        #define GPU_CORE_CONFIG_CONFIGTHREADS_Pos (0UL)    /*!< Position of CONFIGTHREADS field.                                     */
        #define GPU_CORE_CONFIG_CONFIGTHREADS_Msk (0xFFUL << GPU_CORE_CONFIG_CONFIGTHREADS_Pos) /*!< Bit mask of CONFIGTHREADS field.*/

        /* CONFIGCORES @Bits 8..11 : Indicates the number of cores */
        #define GPU_CORE_CONFIG_CONFIGCORES_Pos (8UL)      /*!< Position of CONFIGCORES field.                                       */
        #define GPU_CORE_CONFIG_CONFIGCORES_Msk (0xFUL << GPU_CORE_CONFIG_CONFIGCORES_Pos) /*!< Bit mask of CONFIGCORES field.       */

        /* CONFIGPOS12LEN04 @Bits 12..15 : Revered */
        #define GPU_CORE_CONFIG_CONFIGPOS12LEN04_Pos (12UL) /*!< Position of CONFIGPOS12LEN04 field.                                 */
        #define GPU_CORE_CONFIG_CONFIGPOS12LEN04_Msk (0xFUL << GPU_CORE_CONFIG_CONFIGPOS12LEN04_Pos) /*!< Bit mask of CONFIGPOS12LEN04
                                                                                    field.*/

        /* CONFIGCG @Bit 16 : When set to 1, indicates that clock gating is enabled */
        #define GPU_CORE_CONFIG_CONFIGCG_Pos (16UL)        /*!< Position of CONFIGCG field.                                          */
        #define GPU_CORE_CONFIG_CONFIGCG_Msk (0x1UL << GPU_CORE_CONFIG_CONFIGCG_Pos) /*!< Bit mask of CONFIGCG field.                */

        /* CONFIGTSC4 @Bit 17 : When set to 1, indicates that TSC4 compression mode is enabled */
        #define GPU_CORE_CONFIG_CONFIGTSC4_Pos (17UL)      /*!< Position of CONFIGTSC4 field.                                        */
        #define GPU_CORE_CONFIG_CONFIGTSC4_Msk (0x1UL << GPU_CORE_CONFIG_CONFIGTSC4_Pos) /*!< Bit mask of CONFIGTSC4 field.          */

        /* CONFIGPOS18LEN08 @Bits 18..25 : Revered */
        #define GPU_CORE_CONFIG_CONFIGPOS18LEN08_Pos (18UL) /*!< Position of CONFIGPOS18LEN08 field.                                 */
        #define GPU_CORE_CONFIG_CONFIGPOS18LEN08_Msk (0xFFUL << GPU_CORE_CONFIG_CONFIGPOS18LEN08_Pos) /*!< Bit mask of
                                                                                    CONFIGPOS18LEN08 field.*/

        /* CONFIGDIRTY @Bit 26 : When set to 1, indicates that Dirty Region is enabled */
        #define GPU_CORE_CONFIG_CONFIGDIRTY_Pos (26UL)     /*!< Position of CONFIGDIRTY field.                                       */
        #define GPU_CORE_CONFIG_CONFIGDIRTY_Msk (0x1UL << GPU_CORE_CONFIG_CONFIGDIRTY_Pos) /*!< Bit mask of CONFIGDIRTY field.       */

        /* CONFIGASYNC @Bit 27 : When set to 1, Bus to Memory is Asynchronous to core clock */
        #define GPU_CORE_CONFIG_CONFIGASYNC_Pos (27UL)     /*!< Position of CONFIGASYNC field.                                       */
        #define GPU_CORE_CONFIG_CONFIGASYNC_Msk (0x1UL << GPU_CORE_CONFIG_CONFIGASYNC_Pos) /*!< Bit mask of CONFIGASYNC field.       */

        /* CONFIGBLENDER @Bit 28 : When set to 1, indicates that H/W Blender is enabled */
        #define GPU_CORE_CONFIG_CONFIGBLENDER_Pos (28UL)   /*!< Position of CONFIGBLENDER field.                                     */
        #define GPU_CORE_CONFIG_CONFIGBLENDER_Msk (0x1UL << GPU_CORE_CONFIG_CONFIGBLENDER_Pos) /*!< Bit mask of CONFIGBLENDER field. */

        /* CONFIGTSC6 @Bit 29 : When set to 1, indicates that TSC6 compression mode is enabled */
        #define GPU_CORE_CONFIG_CONFIGTSC6_Pos (29UL)      /*!< Position of CONFIGTSC6 field.                                        */
        #define GPU_CORE_CONFIG_CONFIGTSC6_Msk (0x1UL << GPU_CORE_CONFIG_CONFIGTSC6_Pos) /*!< Bit mask of CONFIGTSC6 field.          */

        /* CONFIGBL @Bit 30 : When set to 1, indicates that Bilinear filtering is enabled */
        #define GPU_CORE_CONFIG_CONFIGBL_Pos (30UL)        /*!< Position of CONFIGBL field.                                          */
        #define GPU_CORE_CONFIG_CONFIGBL_Msk (0x1UL << GPU_CORE_CONFIG_CONFIGBL_Pos) /*!< Bit mask of CONFIGBL field.                */

        /* CONFIGBUS @Bit 31 : When set to 1, indicates that the master bus is AXI */
        #define GPU_CORE_CONFIG_CONFIGBUS_Pos (31UL)       /*!< Position of CONFIGBUS field.                                         */
        #define GPU_CORE_CONFIG_CONFIGBUS_Msk (0x1UL << GPU_CORE_CONFIG_CONFIGBUS_Pos) /*!< Bit mask of CONFIGBUS field.             */


        /* GPU_CORE_CONFIGH: GPU onfiguration status (high bits) */
        #define GPU_CORE_CONFIGH_ResetValue (0x00000003UL) /*!< Reset value of CONFIGH register.                                     */

        /* CONFIGHAA @Bit 0 : Indicates that the Antialiasing feature is enabled */
        #define GPU_CORE_CONFIGH_CONFIGHAA_Pos (0UL)       /*!< Position of CONFIGHAA field.                                         */
        #define GPU_CORE_CONFIGH_CONFIGHAA_Msk (0x1UL << GPU_CORE_CONFIGH_CONFIGHAA_Pos) /*!< Bit mask of CONFIGHAA field.           */

        /* CONFIGHDEC @Bit 1 : Indicates that the TSc Framebuffer/Texture Decompression is enabled */
        #define GPU_CORE_CONFIGH_CONFIGHDEC_Pos (1UL)      /*!< Position of CONFIGHDEC field.                                        */
        #define GPU_CORE_CONFIGH_CONFIGHDEC_Msk (0x1UL << GPU_CORE_CONFIGH_CONFIGHDEC_Pos) /*!< Bit mask of CONFIGHDEC field.        */

        /* CONFIGH10BIT @Bit 2 : Indicates that 10-bit precision is selected */
        #define GPU_CORE_CONFIGH_CONFIGH10BIT_Pos (2UL)    /*!< Position of CONFIGH10BIT field.                                      */
        #define GPU_CORE_CONFIGH_CONFIGH10BIT_Msk (0x1UL << GPU_CORE_CONFIGH_CONFIGH10BIT_Pos) /*!< Bit mask of CONFIGH10BIT field.  */

        /* CONFIGHGAMMA @Bit 3 : Indicates that Gamma Correction is enabled */
        #define GPU_CORE_CONFIGH_CONFIGHGAMMA_Pos (3UL)    /*!< Position of CONFIGHGAMMA field.                                      */
        #define GPU_CORE_CONFIGH_CONFIGHGAMMA_Msk (0x1UL << GPU_CORE_CONFIGH_CONFIGHGAMMA_Pos) /*!< Bit mask of CONFIGHGAMMA field.  */

        /* CONFIGHYUVCOEF @Bit 4 : Indicates that YUV coefficients are present */
        #define GPU_CORE_CONFIGH_CONFIGHYUVCOEF_Pos (4UL)  /*!< Position of CONFIGHYUVCOEF field.                                    */
        #define GPU_CORE_CONFIGH_CONFIGHYUVCOEF_Msk (0x1UL << GPU_CORE_CONFIGH_CONFIGHYUVCOEF_Pos) /*!< Bit mask of CONFIGHYUVCOEF
                                                                                    field.*/

        /* CONFIGHTEXCHAN @Bit 5 : Indicates that Texture map unit has two channels */
        #define GPU_CORE_CONFIGH_CONFIGHTEXCHAN_Pos (5UL)  /*!< Position of CONFIGHTEXCHAN field.                                    */
        #define GPU_CORE_CONFIGH_CONFIGHTEXCHAN_Msk (0x1UL << GPU_CORE_CONFIGH_CONFIGHTEXCHAN_Pos) /*!< Bit mask of CONFIGHTEXCHAN
                                                                                    field.*/

        /* CONFIGHPOS04LEN28 @Bits 6..31 : Revered */
        #define GPU_CORE_CONFIGH_CONFIGHPOS04LEN28_Pos (6UL) /*!< Position of CONFIGHPOS04LEN28 field.                               */
        #define GPU_CORE_CONFIGH_CONFIGHPOS04LEN28_Msk (0x3FFFFFFUL << GPU_CORE_CONFIGH_CONFIGHPOS04LEN28_Pos) /*!< Bit mask of
                                                                                    CONFIGHPOS04LEN28 field.*/


        /* GPU_CORE_CORESELECT: Select which of the available cores will be active */
        #define GPU_CORE_CORESELECT_ResetValue (0x00000000UL) /*!< Reset value of CORESELECT register.                               */

        /* DISABLECORE0 @Bit 0 : set to deactivate core 0 */
        #define GPU_CORE_CORESELECT_DISABLECORE0_Pos (0UL) /*!< Position of DISABLECORE0 field.                                      */
        #define GPU_CORE_CORESELECT_DISABLECORE0_Msk (0x1UL << GPU_CORE_CORESELECT_DISABLECORE0_Pos) /*!< Bit mask of DISABLECORE0
                                                                                    field.*/

        /* DISABLECORE1 @Bit 1 : set to deactivate core 1 */
        #define GPU_CORE_CORESELECT_DISABLECORE1_Pos (1UL) /*!< Position of DISABLECORE1 field.                                      */
        #define GPU_CORE_CORESELECT_DISABLECORE1_Msk (0x1UL << GPU_CORE_CORESELECT_DISABLECORE1_Pos) /*!< Bit mask of DISABLECORE1
                                                                                    field.*/

        /* DISABLECORE2 @Bit 2 : set to deactivate core 2 */
        #define GPU_CORE_CORESELECT_DISABLECORE2_Pos (2UL) /*!< Position of DISABLECORE2 field.                                      */
        #define GPU_CORE_CORESELECT_DISABLECORE2_Msk (0x1UL << GPU_CORE_CORESELECT_DISABLECORE2_Pos) /*!< Bit mask of DISABLECORE2
                                                                                    field.*/

        /* DISABLECORE3 @Bit 3 : set to deactivate core 3 */
        #define GPU_CORE_CORESELECT_DISABLECORE3_Pos (3UL) /*!< Position of DISABLECORE3 field.                                      */
        #define GPU_CORE_CORESELECT_DISABLECORE3_Msk (0x1UL << GPU_CORE_CORESELECT_DISABLECORE3_Pos) /*!< Bit mask of DISABLECORE3
                                                                                    field.*/

        /* CORESELECTPOS04LEN28 @Bits 4..31 : Revered */
        #define GPU_CORE_CORESELECT_CORESELECTPOS04LEN28_Pos (4UL) /*!< Position of CORESELECTPOS04LEN28 field.                      */
        #define GPU_CORE_CORESELECT_CORESELECTPOS04LEN28_Msk (0xFFFFFFFUL << GPU_CORE_CORESELECT_CORESELECTPOS04LEN28_Pos) /*!< Bit
                                                                                    mask of CORESELECTPOS04LEN28 field.*/


        /* GPU_CORE_C0REG: A 32-bit integer RGBA value is stored in constant register 0 for fragment calculations. */
        #define GPU_CORE_C0REG_ResetValue (0x00000000UL)   /*!< Reset value of C0REG register.                                       */

        /* C0REGRED @Bits 0..7 : Specifies the Red (R) value */
        #define GPU_CORE_C0REG_C0REGRED_Pos (0UL)          /*!< Position of C0REGRED field.                                          */
        #define GPU_CORE_C0REG_C0REGRED_Msk (0xFFUL << GPU_CORE_C0REG_C0REGRED_Pos) /*!< Bit mask of C0REGRED field.                 */

        /* C0REGGREEN @Bits 8..15 : Specifies the Green (G) value */
        #define GPU_CORE_C0REG_C0REGGREEN_Pos (8UL)        /*!< Position of C0REGGREEN field.                                        */
        #define GPU_CORE_C0REG_C0REGGREEN_Msk (0xFFUL << GPU_CORE_C0REG_C0REGGREEN_Pos) /*!< Bit mask of C0REGGREEN field.           */

        /* C0REGBLUE @Bits 16..23 : Specifies the Blue (B) value */
        #define GPU_CORE_C0REG_C0REGBLUE_Pos (16UL)        /*!< Position of C0REGBLUE field.                                         */
        #define GPU_CORE_C0REG_C0REGBLUE_Msk (0xFFUL << GPU_CORE_C0REG_C0REGBLUE_Pos) /*!< Bit mask of C0REGBLUE field.              */

        /* C0REGALPHA @Bits 24..31 : Specifies the Alpha (A) value */
        #define GPU_CORE_C0REG_C0REGALPHA_Pos (24UL)       /*!< Position of C0REGALPHA field.                                        */
        #define GPU_CORE_C0REG_C0REGALPHA_Msk (0xFFUL << GPU_CORE_C0REG_C0REGALPHA_Pos) /*!< Bit mask of C0REGALPHA field.           */


        /* GPU_CORE_C1REG: A 32-bit integer RGBA value is stored in constant register 1 for fragment calculations. */
        #define GPU_CORE_C1REG_ResetValue (0x00000000UL)   /*!< Reset value of C1REG register.                                       */

        /* C1REGRED @Bits 0..7 : Specifies the Red (R) value */
        #define GPU_CORE_C1REG_C1REGRED_Pos (0UL)          /*!< Position of C1REGRED field.                                          */
        #define GPU_CORE_C1REG_C1REGRED_Msk (0xFFUL << GPU_CORE_C1REG_C1REGRED_Pos) /*!< Bit mask of C1REGRED field.                 */

        /* C1REGGREEN @Bits 8..15 : Specifies the Green (G) value */
        #define GPU_CORE_C1REG_C1REGGREEN_Pos (8UL)        /*!< Position of C1REGGREEN field.                                        */
        #define GPU_CORE_C1REG_C1REGGREEN_Msk (0xFFUL << GPU_CORE_C1REG_C1REGGREEN_Pos) /*!< Bit mask of C1REGGREEN field.           */

        /* C1REGBLUE @Bits 16..23 : Specifies the Blue (B) value */
        #define GPU_CORE_C1REG_C1REGBLUE_Pos (16UL)        /*!< Position of C1REGBLUE field.                                         */
        #define GPU_CORE_C1REG_C1REGBLUE_Msk (0xFFUL << GPU_CORE_C1REG_C1REGBLUE_Pos) /*!< Bit mask of C1REGBLUE field.              */

        /* C1REGALPHA @Bits 24..31 : Specifies the Alpha (A) value */
        #define GPU_CORE_C1REG_C1REGALPHA_Pos (24UL)       /*!< Position of C1REGALPHA field.                                        */
        #define GPU_CORE_C1REG_C1REGALPHA_Msk (0xFFUL << GPU_CORE_C1REG_C1REGALPHA_Pos) /*!< Bit mask of C1REGALPHA field.           */


        /* GPU_CORE_C2REG: A 32-bit integer RGBA value is stored in constant register 2 for fragment calculations. */
        #define GPU_CORE_C2REG_ResetValue (0x00000000UL)   /*!< Reset value of C2REG register.                                       */

        /* C2REGRED @Bits 0..7 : Specifies the Red (R) value */
        #define GPU_CORE_C2REG_C2REGRED_Pos (0UL)          /*!< Position of C2REGRED field.                                          */
        #define GPU_CORE_C2REG_C2REGRED_Msk (0xFFUL << GPU_CORE_C2REG_C2REGRED_Pos) /*!< Bit mask of C2REGRED field.                 */

        /* C2REGGREEN @Bits 8..15 : Specifies the Green (G) value */
        #define GPU_CORE_C2REG_C2REGGREEN_Pos (8UL)        /*!< Position of C2REGGREEN field.                                        */
        #define GPU_CORE_C2REG_C2REGGREEN_Msk (0xFFUL << GPU_CORE_C2REG_C2REGGREEN_Pos) /*!< Bit mask of C2REGGREEN field.           */

        /* C2REGBLUE @Bits 16..23 : Specifies the Blue (B) value */
        #define GPU_CORE_C2REG_C2REGBLUE_Pos (16UL)        /*!< Position of C2REGBLUE field.                                         */
        #define GPU_CORE_C2REG_C2REGBLUE_Msk (0xFFUL << GPU_CORE_C2REG_C2REGBLUE_Pos) /*!< Bit mask of C2REGBLUE field.              */

        /* C2REGALPHA @Bits 24..31 : Specifies the Alpha (A) value */
        #define GPU_CORE_C2REG_C2REGALPHA_Pos (24UL)       /*!< Position of C2REGALPHA field.                                        */
        #define GPU_CORE_C2REG_C2REGALPHA_Msk (0xFFUL << GPU_CORE_C2REG_C2REGALPHA_Pos) /*!< Bit mask of C2REGALPHA field.           */


        /* GPU_CORE_C3REG: A 32-bit integer RGBA value is stored in constant register 3 for fragment calculations. */
        #define GPU_CORE_C3REG_ResetValue (0x00000000UL)   /*!< Reset value of C3REG register.                                       */

        /* C3REGRED @Bits 0..7 : Specifies the Red (R) value */
        #define GPU_CORE_C3REG_C3REGRED_Pos (0UL)          /*!< Position of C3REGRED field.                                          */
        #define GPU_CORE_C3REG_C3REGRED_Msk (0xFFUL << GPU_CORE_C3REG_C3REGRED_Pos) /*!< Bit mask of C3REGRED field.                 */

        /* C3REGGREEN @Bits 8..15 : Specifies the Green (G) value */
        #define GPU_CORE_C3REG_C3REGGREEN_Pos (8UL)        /*!< Position of C3REGGREEN field.                                        */
        #define GPU_CORE_C3REG_C3REGGREEN_Msk (0xFFUL << GPU_CORE_C3REG_C3REGGREEN_Pos) /*!< Bit mask of C3REGGREEN field.           */

        /* C3REGBLUE @Bits 16..23 : Specifies the Blue (B) value */
        #define GPU_CORE_C3REG_C3REGBLUE_Pos (16UL)        /*!< Position of C3REGBLUE field.                                         */
        #define GPU_CORE_C3REG_C3REGBLUE_Msk (0xFFUL << GPU_CORE_C3REG_C3REGBLUE_Pos) /*!< Bit mask of C3REGBLUE field.              */

        /* C3REGALPHA @Bits 24..31 : Specifies the Alpha (A) value */
        #define GPU_CORE_C3REG_C3REGALPHA_Pos (24UL)       /*!< Position of C3REGALPHA field.                                        */
        #define GPU_CORE_C3REG_C3REGALPHA_Msk (0xFFUL << GPU_CORE_C3REG_C3REGALPHA_Pos) /*!< Bit mask of C3REGALPHA field.           */


        /* GPU_CORE_COORDMASK: Inverted mask for rasterizer coordinates */
        #define GPU_CORE_COORDMASK_ResetValue (0x00000FFFUL) /*!< Reset value of COORDMASK register.                                 */

        /* COORDMASK @Bits 0..31 : Inverted mask for rasterizer coordinates */
        #define GPU_CORE_COORDMASK_COORDMASK_Pos (0UL)     /*!< Position of COORDMASK field.                                         */
        #define GPU_CORE_COORDMASK_COORDMASK_Msk (0xFFFFFFFFUL << GPU_CORE_COORDMASK_COORDMASK_Pos) /*!< Bit mask of COORDMASK field.*/


        /* GPU_CORE_GAMMAADDR: Enables Gamma LUTs and Set the internal address */
        #define GPU_CORE_GAMMAADDR_ResetValue (0x00000000UL) /*!< Reset value of GAMMAADDR register.                                 */

        /* GAMMAADDR @Bits 0..15 : Specifies the internal address of LUTs */
        #define GPU_CORE_GAMMAADDR_GAMMAADDR_Pos (0UL)     /*!< Position of GAMMAADDR field.                                         */
        #define GPU_CORE_GAMMAADDR_GAMMAADDR_Msk (0xFFFFUL << GPU_CORE_GAMMAADDR_GAMMAADDR_Pos) /*!< Bit mask of GAMMAADDR field.    */

        /* GAMMAADDRPOS16LEN15 @Bits 16..30 : Revered */
        #define GPU_CORE_GAMMAADDR_GAMMAADDRPOS16LEN15_Pos (16UL) /*!< Position of GAMMAADDRPOS16LEN15 field.                        */
        #define GPU_CORE_GAMMAADDR_GAMMAADDRPOS16LEN15_Msk (0x7FFFUL << GPU_CORE_GAMMAADDR_GAMMAADDRPOS16LEN15_Pos) /*!< Bit mask of
                                                                                    GAMMAADDRPOS16LEN15 field.*/

        /* GAMMAENABLE @Bit 31 : Enables the Gamma Luts */
        #define GPU_CORE_GAMMAADDR_GAMMAENABLE_Pos (31UL)  /*!< Position of GAMMAENABLE field.                                       */
        #define GPU_CORE_GAMMAADDR_GAMMAENABLE_Msk (0x1UL << GPU_CORE_GAMMAADDR_GAMMAENABLE_Pos) /*!< Bit mask of GAMMAENABLE field. */


        /* GPU_CORE_GAMMADATA: Specify the Gamma LUT data */
        #define GPU_CORE_GAMMADATA_ResetValue (0x00000000UL) /*!< Reset value of GAMMADATA register.                                 */

        /* GAMMADATA @Bits 0..31 : Specify the Gamma LUT data for the specified address */
        #define GPU_CORE_GAMMADATA_GAMMADATA_Pos (0UL)     /*!< Position of GAMMADATA field.                                         */
        #define GPU_CORE_GAMMADATA_GAMMADATA_Msk (0xFFFFFFFFUL << GPU_CORE_GAMMADATA_GAMMADATA_Pos) /*!< Bit mask of GAMMADATA field.*/


        /* GPU_CORE_TEX0BASEL: Texture mapping registers of drawing surface 0.(low bits) */
        #define GPU_CORE_TEX0BASEL_ResetValue (0x00000000UL) /*!< Reset value of TEX0BASEL register.                                 */

        /* TEX0BASEL @Bits 0..31 : Image 0 Base Address low bits */
        #define GPU_CORE_TEX0BASEL_TEX0BASEL_Pos (0UL)     /*!< Position of TEX0BASEL field.                                         */
        #define GPU_CORE_TEX0BASEL_TEX0BASEL_Msk (0xFFFFFFFFUL << GPU_CORE_TEX0BASEL_TEX0BASEL_Pos) /*!< Bit mask of TEX0BASEL field.*/


        /* GPU_CORE_TEX0BASEH: Texture mapping registers of drawing surface 0.(high bits) */
        #define GPU_CORE_TEX0BASEH_ResetValue (0x00000000UL) /*!< Reset value of TEX0BASEH register.                                 */

        /* TEX0BASEH @Bits 0..31 : Image 0 Base Address high bits */
        #define GPU_CORE_TEX0BASEH_TEX0BASEH_Pos (0UL)     /*!< Position of TEX0BASEH field.                                         */
        #define GPU_CORE_TEX0BASEH_TEX0BASEH_Msk (0xFFFFFFFFUL << GPU_CORE_TEX0BASEH_TEX0BASEH_Pos) /*!< Bit mask of TEX0BASEH field.*/


        /* GPU_CORE_TEX1BASEL: Texture mapping registers of drawing surface 1.(low bits) */
        #define GPU_CORE_TEX1BASEL_ResetValue (0x00000000UL) /*!< Reset value of TEX1BASEL register.                                 */

        /* TEX1BASEL @Bits 0..31 : Image 1 Base Address low bits */
        #define GPU_CORE_TEX1BASEL_TEX1BASEL_Pos (0UL)     /*!< Position of TEX1BASEL field.                                         */
        #define GPU_CORE_TEX1BASEL_TEX1BASEL_Msk (0xFFFFFFFFUL << GPU_CORE_TEX1BASEL_TEX1BASEL_Pos) /*!< Bit mask of TEX1BASEL field.*/


        /* GPU_CORE_TEX1BASEH: Texture mapping registers of drawing surface 1.(high bits) */
        #define GPU_CORE_TEX1BASEH_ResetValue (0x00000000UL) /*!< Reset value of TEX1BASEH register.                                 */

        /* TEX1BASEH @Bits 0..31 : Image 1 Base Address high bits */
        #define GPU_CORE_TEX1BASEH_TEX1BASEH_Pos (0UL)     /*!< Position of TEX1BASEH field.                                         */
        #define GPU_CORE_TEX1BASEH_TEX1BASEH_Msk (0xFFFFFFFFUL << GPU_CORE_TEX1BASEH_TEX1BASEH_Pos) /*!< Bit mask of TEX1BASEH field.*/


        /* GPU_CORE_TEX2BASEL: Texture mapping registers of drawing surface 2.(low bits) */
        #define GPU_CORE_TEX2BASEL_ResetValue (0x00000000UL) /*!< Reset value of TEX2BASEL register.                                 */

        /* TEX2BASEL @Bits 0..31 : Image 2 Base Address low bits */
        #define GPU_CORE_TEX2BASEL_TEX2BASEL_Pos (0UL)     /*!< Position of TEX2BASEL field.                                         */
        #define GPU_CORE_TEX2BASEL_TEX2BASEL_Msk (0xFFFFFFFFUL << GPU_CORE_TEX2BASEL_TEX2BASEL_Pos) /*!< Bit mask of TEX2BASEL field.*/


        /* GPU_CORE_TEX2BASEH: Texture mapping registers of drawing surface 2.(high bits) */
        #define GPU_CORE_TEX2BASEH_ResetValue (0x00000000UL) /*!< Reset value of TEX2BASEH register.                                 */

        /* TEX2BASEH @Bits 0..31 : Image 2 Base Address high bits */
        #define GPU_CORE_TEX2BASEH_TEX2BASEH_Pos (0UL)     /*!< Position of TEX2BASEH field.                                         */
        #define GPU_CORE_TEX2BASEH_TEX2BASEH_Msk (0xFFFFFFFFUL << GPU_CORE_TEX2BASEH_TEX2BASEH_Pos) /*!< Bit mask of TEX2BASEH field.*/


        /* GPU_CORE_TEX3BASEL: Texture mapping registers of drawing surface 3.(low bits) */
        #define GPU_CORE_TEX3BASEL_ResetValue (0x00000000UL) /*!< Reset value of TEX3BASEL register.                                 */

        /* TEX3BASEL @Bits 0..31 : Image 3 Base Address low bits */
        #define GPU_CORE_TEX3BASEL_TEX3BASEL_Pos (0UL)     /*!< Position of TEX3BASEL field.                                         */
        #define GPU_CORE_TEX3BASEL_TEX3BASEL_Msk (0xFFFFFFFFUL << GPU_CORE_TEX3BASEL_TEX3BASEL_Pos) /*!< Bit mask of TEX3BASEL field.*/


        /* GPU_CORE_TEX3BASEH: Texture mapping registers of drawing surface 3.(high bits) */
        #define GPU_CORE_TEX3BASEH_ResetValue (0x00000000UL) /*!< Reset value of TEX3BASEH register.                                 */

        /* TEX3BASEH @Bits 0..31 : Image 3 Base Address high bits */
        #define GPU_CORE_TEX3BASEH_TEX3BASEH_Pos (0UL)     /*!< Position of TEX3BASEH field.                                         */
        #define GPU_CORE_TEX3BASEH_TEX3BASEH_Msk (0xFFFFFFFFUL << GPU_CORE_TEX3BASEH_TEX3BASEH_Pos) /*!< Bit mask of TEX3BASEH field.*/


        /* GPU_CORE_CMDRINGSTOPL: Ring Buffers pointer Low bits. */
        #define GPU_CORE_CMDRINGSTOPL_ResetValue (0x00000000UL) /*!< Reset value of CMDRINGSTOPL register.                           */

        /* CMDRINGSTOPL @Bits 0..31 : Updates Ring Buffers last written address Low bits. */
        #define GPU_CORE_CMDRINGSTOPL_CMDRINGSTOPL_Pos (0UL) /*!< Position of CMDRINGSTOPL field.                                    */
        #define GPU_CORE_CMDRINGSTOPL_CMDRINGSTOPL_Msk (0xFFFFFFFFUL << GPU_CORE_CMDRINGSTOPL_CMDRINGSTOPL_Pos) /*!< Bit mask of
                                                                                    CMDRINGSTOPL field.*/


        /* GPU_CORE_CMDRINGSTOPH: Ring Buffers pointer High bits. */
        #define GPU_CORE_CMDRINGSTOPH_ResetValue (0x00000000UL) /*!< Reset value of CMDRINGSTOPH register.                           */

        /* CMDRINGSTOPH @Bits 0..31 : Updates Ring Buffers last written address High bits. */
        #define GPU_CORE_CMDRINGSTOPH_CMDRINGSTOPH_Pos (0UL) /*!< Position of CMDRINGSTOPH field.                                    */
        #define GPU_CORE_CMDRINGSTOPH_CMDRINGSTOPH_Msk (0xFFFFFFFFUL << GPU_CORE_CMDRINGSTOPH_CMDRINGSTOPH_Pos) /*!< Bit mask of
                                                                                    CMDRINGSTOPH field.*/


        /* GPU_CORE_CMDADDRL: Command List base address Low bits */
        #define GPU_CORE_CMDADDRL_ResetValue (0x00000000UL) /*!< Reset value of CMDADDRL register.                                   */

        /* CMDADDRL @Bits 0..31 : Command List address Low bits */
        #define GPU_CORE_CMDADDRL_CMDADDRL_Pos (0UL)       /*!< Position of CMDADDRL field.                                          */
        #define GPU_CORE_CMDADDRL_CMDADDRL_Msk (0xFFFFFFFFUL << GPU_CORE_CMDADDRL_CMDADDRL_Pos) /*!< Bit mask of CMDADDRL field.     */


        /* GPU_CORE_CMDADDRH: Command List base address High bits */
        #define GPU_CORE_CMDADDRH_ResetValue (0x00000000UL) /*!< Reset value of CMDADDRH register.                                   */

        /* CMDADDRH @Bits 0..31 : Command List address High bits */
        #define GPU_CORE_CMDADDRH_CMDADDRH_Pos (0UL)       /*!< Position of CMDADDRH field.                                          */
        #define GPU_CORE_CMDADDRH_CMDADDRH_Msk (0xFFFFFFFFUL << GPU_CORE_CMDADDRH_CMDADDRH_Pos) /*!< Bit mask of CMDADDRH field.     */


        /* GPU_CORE_IRQID: Signals an interrupt when written */
        #define GPU_CORE_IRQID_ResetValue (0x00000000UL)   /*!< Reset value of IRQID register.                                       */

        /* IRQID @Bits 0..31 : Write any value to signal an interrupt */
        #define GPU_CORE_IRQID_IRQID_Pos (0UL)             /*!< Position of IRQID field.                                             */
        #define GPU_CORE_IRQID_IRQID_Msk (0xFFFFFFFFUL << GPU_CORE_IRQID_IRQID_Pos) /*!< Bit mask of IRQID field.                    */


        /* GPU_CORE_GPFLAGS: Stop/Break the command list when debugging */
        #define GPU_CORE_GPFLAGS_ResetValue (0x00000000UL) /*!< Reset value of GPFLAGS register.                                     */

        /* GPFLAGSLINE0 @Bit 0 : GP_FLAG line 0. */
        #define GPU_CORE_GPFLAGS_GPFLAGSLINE0_Pos (0UL)    /*!< Position of GPFLAGSLINE0 field.                                      */
        #define GPU_CORE_GPFLAGS_GPFLAGSLINE0_Msk (0x1UL << GPU_CORE_GPFLAGS_GPFLAGSLINE0_Pos) /*!< Bit mask of GPFLAGSLINE0 field.  */

        /* GPFLAGSLINE1 @Bit 1 : GP_FLAG line 1. */
        #define GPU_CORE_GPFLAGS_GPFLAGSLINE1_Pos (1UL)    /*!< Position of GPFLAGSLINE1 field.                                      */
        #define GPU_CORE_GPFLAGS_GPFLAGSLINE1_Msk (0x1UL << GPU_CORE_GPFLAGS_GPFLAGSLINE1_Pos) /*!< Bit mask of GPFLAGSLINE1 field.  */

        /* GPFLAGSLINE2 @Bit 2 : GP_FLAG line 2. */
        #define GPU_CORE_GPFLAGS_GPFLAGSLINE2_Pos (2UL)    /*!< Position of GPFLAGSLINE2 field.                                      */
        #define GPU_CORE_GPFLAGS_GPFLAGSLINE2_Msk (0x1UL << GPU_CORE_GPFLAGS_GPFLAGSLINE2_Pos) /*!< Bit mask of GPFLAGSLINE2 field.  */

        /* GPFLAGSLINE3 @Bit 3 : GP_FLAG line 3. */
        #define GPU_CORE_GPFLAGS_GPFLAGSLINE3_Pos (3UL)    /*!< Position of GPFLAGSLINE3 field.                                      */
        #define GPU_CORE_GPFLAGS_GPFLAGSLINE3_Msk (0x1UL << GPU_CORE_GPFLAGS_GPFLAGSLINE3_Pos) /*!< Bit mask of GPFLAGSLINE3 field.  */

        /* GPFLAGSLINEMASK0 @Bit 4 : GP_FLAG_mask when set to 1 masks/enables the generation of the output FREEZE signal from line 0 */
        #define GPU_CORE_GPFLAGS_GPFLAGSLINEMASK0_Pos (4UL) /*!< Position of GPFLAGSLINEMASK0 field.                                 */
        #define GPU_CORE_GPFLAGS_GPFLAGSLINEMASK0_Msk (0x1UL << GPU_CORE_GPFLAGS_GPFLAGSLINEMASK0_Pos) /*!< Bit mask of
                                                                                    GPFLAGSLINEMASK0 field.*/

        /* GPFLAGSLINEMASK1 @Bit 5 : GP_FLAG_mask when set to 1 masks/enables the generation of the output FREEZE signal from line 1 */
        #define GPU_CORE_GPFLAGS_GPFLAGSLINEMASK1_Pos (5UL) /*!< Position of GPFLAGSLINEMASK1 field.                                 */
        #define GPU_CORE_GPFLAGS_GPFLAGSLINEMASK1_Msk (0x1UL << GPU_CORE_GPFLAGS_GPFLAGSLINEMASK1_Pos) /*!< Bit mask of
                                                                                    GPFLAGSLINEMASK1 field.*/

        /* GPFLAGSLINEMASK2 @Bit 6 : GP_FLAG_mask when set to 1 masks/enables the generation of the output FREEZE signal from line 2 */
        #define GPU_CORE_GPFLAGS_GPFLAGSLINEMASK2_Pos (6UL) /*!< Position of GPFLAGSLINEMASK2 field.                                 */
        #define GPU_CORE_GPFLAGS_GPFLAGSLINEMASK2_Msk (0x1UL << GPU_CORE_GPFLAGS_GPFLAGSLINEMASK2_Pos) /*!< Bit mask of
                                                                                    GPFLAGSLINEMASK2 field.*/

        /* GPFLAGSLINEMASK3 @Bit 7 : GP_FLAG_mask when set to 1 masks/enables the generation of the output FREEZE signal from line 3 */
        #define GPU_CORE_GPFLAGS_GPFLAGSLINEMASK3_Pos (7UL) /*!< Position of GPFLAGSLINEMASK3 field.                                 */
        #define GPU_CORE_GPFLAGS_GPFLAGSLINEMASK3_Msk (0x1UL << GPU_CORE_GPFLAGS_GPFLAGSLINEMASK3_Pos) /*!< Bit mask of
                                                                                    GPFLAGSLINEMASK3 field.*/

        /* GPFLAGSIRQSYSERRMASK0 @Bit 8 : GP_FLAG_irqmask when set to 1 masks/enables the generation of the IRQ_SYSERROR from line 0 */
        #define GPU_CORE_GPFLAGS_GPFLAGSIRQSYSERRMASK0_Pos (8UL) /*!< Position of GPFLAGSIRQSYSERRMASK0 field.                       */
        #define GPU_CORE_GPFLAGS_GPFLAGSIRQSYSERRMASK0_Msk (0x1UL << GPU_CORE_GPFLAGS_GPFLAGSIRQSYSERRMASK0_Pos) /*!< Bit mask of
                                                                                    GPFLAGSIRQSYSERRMASK0 field.*/

        /* GPFLAGSIRQSYSERRMASK1 @Bit 9 : GP_FLAG_irqmask when set to 1 masks/enables the generation of the IRQ_SYSERROR from line 1 */
        #define GPU_CORE_GPFLAGS_GPFLAGSIRQSYSERRMASK1_Pos (9UL) /*!< Position of GPFLAGSIRQSYSERRMASK1 field.                       */
        #define GPU_CORE_GPFLAGS_GPFLAGSIRQSYSERRMASK1_Msk (0x1UL << GPU_CORE_GPFLAGS_GPFLAGSIRQSYSERRMASK1_Pos) /*!< Bit mask of
                                                                                    GPFLAGSIRQSYSERRMASK1 field.*/

        /* GPFLAGSIRQSYSERRMASK2 @Bit 10 : GP_FLAG_irqmask when set to 1 masks/enables the generation of the IRQ_SYSERROR from line 2 */
        #define GPU_CORE_GPFLAGS_GPFLAGSIRQSYSERRMASK2_Pos (10UL) /*!< Position of GPFLAGSIRQSYSERRMASK2 field.                      */
        #define GPU_CORE_GPFLAGS_GPFLAGSIRQSYSERRMASK2_Msk (0x1UL << GPU_CORE_GPFLAGS_GPFLAGSIRQSYSERRMASK2_Pos) /*!< Bit mask of
                                                                                    GPFLAGSIRQSYSERRMASK2 field.*/

        /* GPFLAGSIRQSYSERRMASK3 @Bit 11 : GP_FLAG_irqmask when set to 1 masks/enables the generation of the IRQ_SYSERROR from line 3 */
        #define GPU_CORE_GPFLAGS_GPFLAGSIRQSYSERRMASK3_Pos (11UL) /*!< Position of GPFLAGSIRQSYSERRMASK3 field.                      */
        #define GPU_CORE_GPFLAGS_GPFLAGSIRQSYSERRMASK3_Msk (0x1UL << GPU_CORE_GPFLAGS_GPFLAGSIRQSYSERRMASK3_Pos) /*!< Bit mask of
                                                                                    GPFLAGSIRQSYSERRMASK3 field.*/

        /* GPFLAGSPOS12LEN04 @Bits 12..15 : Revered */
        #define GPU_CORE_GPFLAGS_GPFLAGSPOS12LEN04_Pos (12UL) /*!< Position of GPFLAGSPOS12LEN04 field.                              */
        #define GPU_CORE_GPFLAGS_GPFLAGSPOS12LEN04_Msk (0xFUL << GPU_CORE_GPFLAGS_GPFLAGSPOS12LEN04_Pos) /*!< Bit mask of
                                                                                    GPFLAGSPOS12LEN04 field.*/

        /* GPFLAGSBRK0 @Bit 16 : When set to 1, set breakpoint for GP_FLAG line 0 if NEMA_GP_FLAGS[0] bit value is high. */
        #define GPU_CORE_GPFLAGS_GPFLAGSBRK0_Pos (16UL)    /*!< Position of GPFLAGSBRK0 field.                                       */
        #define GPU_CORE_GPFLAGS_GPFLAGSBRK0_Msk (0x1UL << GPU_CORE_GPFLAGS_GPFLAGSBRK0_Pos) /*!< Bit mask of GPFLAGSBRK0 field.     */

        /* GPFLAGSBRK1 @Bit 17 : When set to 1, set breakpoint for GP_FLAG line 0 if NEMA_GP_FLAGS[1] bit value is high. */
        #define GPU_CORE_GPFLAGS_GPFLAGSBRK1_Pos (17UL)    /*!< Position of GPFLAGSBRK1 field.                                       */
        #define GPU_CORE_GPFLAGS_GPFLAGSBRK1_Msk (0x1UL << GPU_CORE_GPFLAGS_GPFLAGSBRK1_Pos) /*!< Bit mask of GPFLAGSBRK1 field.     */

        /* GPFLAGSBRK2 @Bit 18 : When set to 1, set breakpoint for GP_FLAG line 0 if NEMA_GP_FLAGS[2] bit value is high. */
        #define GPU_CORE_GPFLAGS_GPFLAGSBRK2_Pos (18UL)    /*!< Position of GPFLAGSBRK2 field.                                       */
        #define GPU_CORE_GPFLAGS_GPFLAGSBRK2_Msk (0x1UL << GPU_CORE_GPFLAGS_GPFLAGSBRK2_Pos) /*!< Bit mask of GPFLAGSBRK2 field.     */

        /* GPFLAGSBRK3 @Bit 19 : When set to 1, set breakpoint for GP_FLAG line 0 if NEMA_GP_FLAGS[3] bit value is high. */
        #define GPU_CORE_GPFLAGS_GPFLAGSBRK3_Pos (19UL)    /*!< Position of GPFLAGSBRK3 field.                                       */
        #define GPU_CORE_GPFLAGS_GPFLAGSBRK3_Msk (0x1UL << GPU_CORE_GPFLAGS_GPFLAGSBRK3_Pos) /*!< Bit mask of GPFLAGSBRK3 field.     */

        /* GPFLAGSPOS20LEN12 @Bits 20..31 : Revered */
        #define GPU_CORE_GPFLAGS_GPFLAGSPOS20LEN12_Pos (20UL) /*!< Position of GPFLAGSPOS20LEN12 field.                              */
        #define GPU_CORE_GPFLAGS_GPFLAGSPOS20LEN12_Msk (0xFFFUL << GPU_CORE_GPFLAGS_GPFLAGSPOS20LEN12_Pos) /*!< Bit mask of
                                                                                    GPFLAGSPOS20LEN12 field.*/


        /* GPU_CORE_SYSINTERRUPT: On Read: Returns the SYSERROR_IRQ ID. On write: Clears the SYSERROR_IRQ. */
        #define GPU_CORE_SYSINTERRUPT_ResetValue (0x00000000UL) /*!< Reset value of SYSINTERRUPT register.                           */

        /* SYSERRORLINE0 @Bit 0 : Indicates that IRQ_SYSERROR due to GP_FLAG line 0. */
        #define GPU_CORE_SYSINTERRUPT_SYSERRORLINE0_Pos (0UL) /*!< Position of SYSERRORLINE0 field.                                  */
        #define GPU_CORE_SYSINTERRUPT_SYSERRORLINE0_Msk (0x1UL << GPU_CORE_SYSINTERRUPT_SYSERRORLINE0_Pos) /*!< Bit mask of
                                                                                    SYSERRORLINE0 field.*/

        /* SYSERRORLINE1 @Bit 1 : Indicates that IRQ_SYSERROR due to GP_FLAG line 1. */
        #define GPU_CORE_SYSINTERRUPT_SYSERRORLINE1_Pos (1UL) /*!< Position of SYSERRORLINE1 field.                                  */
        #define GPU_CORE_SYSINTERRUPT_SYSERRORLINE1_Msk (0x1UL << GPU_CORE_SYSINTERRUPT_SYSERRORLINE1_Pos) /*!< Bit mask of
                                                                                    SYSERRORLINE1 field.*/

        /* SYSERRORLINE2 @Bit 2 : Indicates that IRQ_SYSERROR due to GP_FLAG line 2. */
        #define GPU_CORE_SYSINTERRUPT_SYSERRORLINE2_Pos (2UL) /*!< Position of SYSERRORLINE2 field.                                  */
        #define GPU_CORE_SYSINTERRUPT_SYSERRORLINE2_Msk (0x1UL << GPU_CORE_SYSINTERRUPT_SYSERRORLINE2_Pos) /*!< Bit mask of
                                                                                    SYSERRORLINE2 field.*/

        /* SYSERRORLINE3 @Bit 3 : Indicates that IRQ_SYSERROR due to GP_FLAG line 3. */
        #define GPU_CORE_SYSINTERRUPT_SYSERRORLINE3_Pos (3UL) /*!< Position of SYSERRORLINE3 field.                                  */
        #define GPU_CORE_SYSINTERRUPT_SYSERRORLINE3_Msk (0x1UL << GPU_CORE_SYSINTERRUPT_SYSERRORLINE3_Pos) /*!< Bit mask of
                                                                                    SYSERRORLINE3 field.*/

        /* SYSERRORBUSCODE0 @Bit 4 : Indicates the Interface Error Code(AXI only). */
        #define GPU_CORE_SYSINTERRUPT_SYSERRORBUSCODE0_Pos (4UL) /*!< Position of SYSERRORBUSCODE0 field.                            */
        #define GPU_CORE_SYSINTERRUPT_SYSERRORBUSCODE0_Msk (0x1UL << GPU_CORE_SYSINTERRUPT_SYSERRORBUSCODE0_Pos) /*!< Bit mask of
                                                                                    SYSERRORBUSCODE0 field.*/

        /* SYSERRORBUSCODE1 @Bits 5..6 : Indicates the Bus Error Code occurence direction (AXI only). */
        #define GPU_CORE_SYSINTERRUPT_SYSERRORBUSCODE1_Pos (5UL) /*!< Position of SYSERRORBUSCODE1 field.                            */
        #define GPU_CORE_SYSINTERRUPT_SYSERRORBUSCODE1_Msk (0x3UL << GPU_CORE_SYSINTERRUPT_SYSERRORBUSCODE1_Pos) /*!< Bit mask of
                                                                                    SYSERRORBUSCODE1 field.*/

        /* SYSERRORBUSCODE2 @Bits 7..10 : Indicates the Bus Error Code Interface. */
        #define GPU_CORE_SYSINTERRUPT_SYSERRORBUSCODE2_Pos (7UL) /*!< Position of SYSERRORBUSCODE2 field.                            */
        #define GPU_CORE_SYSINTERRUPT_SYSERRORBUSCODE2_Msk (0xFUL << GPU_CORE_SYSINTERRUPT_SYSERRORBUSCODE2_Pos) /*!< Bit mask of
                                                                                    SYSERRORBUSCODE2 field.*/

        /* SYSERRORBUSERR @Bit 11 : Indicates that a bus error has occurred. */
        #define GPU_CORE_SYSINTERRUPT_SYSERRORBUSERR_Pos (11UL) /*!< Position of SYSERRORBUSERR field.                               */
        #define GPU_CORE_SYSINTERRUPT_SYSERRORBUSERR_Msk (0x1UL << GPU_CORE_SYSINTERRUPT_SYSERRORBUSERR_Pos) /*!< Bit mask of
                                                                                    SYSERRORBUSERR field.*/

        /* SYSINTERRUPTPOS12LEN20 @Bits 12..31 : Revered */
        #define GPU_CORE_SYSINTERRUPT_SYSINTERRUPTPOS12LEN20_Pos (12UL) /*!< Position of SYSINTERRUPTPOS12LEN20 field.               */
        #define GPU_CORE_SYSINTERRUPT_SYSINTERRUPTPOS12LEN20_Msk (0xFFFFFUL << GPU_CORE_SYSINTERRUPT_SYSINTERRUPTPOS12LEN20_Pos) /*!<
                                                                                    Bit mask of SYSINTERRUPTPOS12LEN20 field.*/


        /* GPU_CORE_BUSERRORMASK: Sets the mask for the Buserror Interrupt. */
        #define GPU_CORE_BUSERRORMASK_ResetValue (0x00000000UL) /*!< Reset value of BUSERRORMASK register.                           */

        /* BUSERRORMASK0 @Bit 0 : Revered */
        #define GPU_CORE_BUSERRORMASK_BUSERRORMASK0_Pos (0UL) /*!< Position of BUSERRORMASK0 field.                                  */
        #define GPU_CORE_BUSERRORMASK_BUSERRORMASK0_Msk (0x1UL << GPU_CORE_BUSERRORMASK_BUSERRORMASK0_Pos) /*!< Bit mask of
                                                                                    BUSERRORMASK0 field.*/

        /* BUSERRORMASK1 @Bits 1..2 : Sets the mask for the Bus Error Code occurence direction (AXI only). */
        #define GPU_CORE_BUSERRORMASK_BUSERRORMASK1_Pos (1UL) /*!< Position of BUSERRORMASK1 field.                                  */
        #define GPU_CORE_BUSERRORMASK_BUSERRORMASK1_Msk (0x3UL << GPU_CORE_BUSERRORMASK_BUSERRORMASK1_Pos) /*!< Bit mask of
                                                                                    BUSERRORMASK1 field.*/

        /* BUSERRORMASK2 @Bits 3..6 : Sets the mask for the Bus Error Code Interface. */
        #define GPU_CORE_BUSERRORMASK_BUSERRORMASK2_Pos (3UL) /*!< Position of BUSERRORMASK2 field.                                  */
        #define GPU_CORE_BUSERRORMASK_BUSERRORMASK2_Msk (0xFUL << GPU_CORE_BUSERRORMASK_BUSERRORMASK2_Pos) /*!< Bit mask of
                                                                                    BUSERRORMASK2 field.*/

        /* BUSERRORMASKPOS07LEN24 @Bits 7..31 : Revered */
        #define GPU_CORE_BUSERRORMASK_BUSERRORMASKPOS07LEN24_Pos (7UL) /*!< Position of BUSERRORMASKPOS07LEN24 field.                */
        #define GPU_CORE_BUSERRORMASK_BUSERRORMASKPOS07LEN24_Msk (0x1FFFFFFUL << GPU_CORE_BUSERRORMASK_BUSERRORMASKPOS07LEN24_Pos)
                                                                                    /*!< Bit mask of BUSERRORMASKPOS07LEN24 field.*/


        /* ======================================================= Struct GPU ======================================================== */
        /**
         * @brief GPU
         */
        typedef struct {                                   /*!< GPU Structure                                                        */
            __IM uint32_t RESERVED[64];
            __IOM uint32_t EVENTS_CORE;                      /*!< (@ 0x00000100) Event indicating that interrupt triggered at GPU core */
            __IOM uint32_t EVENTS_SYSERROR;                  /*!< (@ 0x00000104) Event indicating                                      */
            __IOM uint32_t EVENTS_STARTED;                   /*!< (@ 0x00000108) The display controller has been enabled.              */
            __IOM uint32_t EVENTS_FREEZE;                    /*!< (@ 0x0000010C) Freeze GPU                                            */
            __IM uint32_t RESERVED1[124];
            __IOM uint32_t INTEN;                            /*!< (@ 0x00000300) Enable or disable interrupt                           */
            __IOM uint32_t INTENSET;                         /*!< (@ 0x00000304) Enable interrupt                                      */
            __IOM uint32_t INTENCLR;                         /*!< (@ 0x00000308) Disable interrupt                                     */
            __IM uint32_t INTPEND;                           /*!< (@ 0x0000030C) Pending interrupts                                    */
            __IM uint32_t RESERVED2[124];
            __IOM uint32_t ENABLE;                           /*!< (@ 0x00000500) Enable GPU.                                           */
            __IOM uint32_t FLAG;                             /*!< (@ 0x00000504) FLAG information for FREEZE assertion.                */
            __IOM uint32_t STATUS;                           /*!< (@ 0x00000508) GPU ACTIVE and DVFS status fields.                    */
            __IM uint32_t RESERVED3[637];
            __IOM NRF_GPU_PCGCSLAVE_Type PCGCSLAVE;          /*!< (@ 0x00000F00) (unspecified)                                         */
            __IM uint32_t RESERVED4[30];
            __IOM NRF_GPU_CORE_Type CORE;                    /*!< (@ 0x00001000) (unspecified)                                         */
        } NRF_GPU_Type;                                    /*!< Size = 8192 (0x2000)                                                 */

        /* GPU_EVENTS_CORE: Event indicating that interrupt triggered at GPU core */
        #define GPU_EVENTS_CORE_ResetValue (0x00000000UL)  /*!< Reset value of EVENTS_CORE register.                                 */

        /* EVENTS_CORE @Bit 0 : Event indicating that interrupt triggered at GPU core */
        #define GPU_EVENTS_CORE_EVENTS_CORE_Pos (0UL)      /*!< Position of EVENTS_CORE field.                                       */
        #define GPU_EVENTS_CORE_EVENTS_CORE_Msk (0x1UL << GPU_EVENTS_CORE_EVENTS_CORE_Pos) /*!< Bit mask of EVENTS_CORE field.       */
        #define GPU_EVENTS_CORE_EVENTS_CORE_Min (0x0UL)    /*!< Min enumerator value of EVENTS_CORE field.                           */
        #define GPU_EVENTS_CORE_EVENTS_CORE_Max (0x1UL)    /*!< Max enumerator value of EVENTS_CORE field.                           */
        #define GPU_EVENTS_CORE_EVENTS_CORE_NotGenerated (0x0UL) /*!< Event not generated                                            */
        #define GPU_EVENTS_CORE_EVENTS_CORE_Generated (0x1UL) /*!< Event generated                                                   */


        /* GPU_EVENTS_SYSERROR: Event indicating */
        #define GPU_EVENTS_SYSERROR_ResetValue (0x00000000UL) /*!< Reset value of EVENTS_SYSERROR register.                          */

        /* EVENTS_SYSERROR @Bit 0 : Event indicating */
        #define GPU_EVENTS_SYSERROR_EVENTS_SYSERROR_Pos (0UL) /*!< Position of EVENTS_SYSERROR field.                                */
        #define GPU_EVENTS_SYSERROR_EVENTS_SYSERROR_Msk (0x1UL << GPU_EVENTS_SYSERROR_EVENTS_SYSERROR_Pos) /*!< Bit mask of
                                                                                    EVENTS_SYSERROR field.*/
        #define GPU_EVENTS_SYSERROR_EVENTS_SYSERROR_Min (0x0UL) /*!< Min enumerator value of EVENTS_SYSERROR field.                  */
        #define GPU_EVENTS_SYSERROR_EVENTS_SYSERROR_Max (0x1UL) /*!< Max enumerator value of EVENTS_SYSERROR field.                  */
        #define GPU_EVENTS_SYSERROR_EVENTS_SYSERROR_NotGenerated (0x0UL) /*!< Event not generated                                    */
        #define GPU_EVENTS_SYSERROR_EVENTS_SYSERROR_Generated (0x1UL) /*!< Event generated                                           */


        /* GPU_EVENTS_STARTED: The display controller has been enabled. */
        #define GPU_EVENTS_STARTED_ResetValue (0x00000000UL) /*!< Reset value of EVENTS_STARTED register.                            */

        /* EVENTS_STARTED @Bit 0 : The display controller has been enabled. */
        #define GPU_EVENTS_STARTED_EVENTS_STARTED_Pos (0UL) /*!< Position of EVENTS_STARTED field.                                   */
        #define GPU_EVENTS_STARTED_EVENTS_STARTED_Msk (0x1UL << GPU_EVENTS_STARTED_EVENTS_STARTED_Pos) /*!< Bit mask of EVENTS_STARTED
                                                                                    field.*/
        #define GPU_EVENTS_STARTED_EVENTS_STARTED_Min (0x0UL) /*!< Min enumerator value of EVENTS_STARTED field.                     */
        #define GPU_EVENTS_STARTED_EVENTS_STARTED_Max (0x1UL) /*!< Max enumerator value of EVENTS_STARTED field.                     */
        #define GPU_EVENTS_STARTED_EVENTS_STARTED_NotGenerated (0x0UL) /*!< Event not generated                                      */
        #define GPU_EVENTS_STARTED_EVENTS_STARTED_Generated (0x1UL) /*!< Event generated                                             */


        /* GPU_EVENTS_FREEZE: Freeze GPU */
        #define GPU_EVENTS_FREEZE_ResetValue (0x00000000UL) /*!< Reset value of EVENTS_FREEZE register.                              */

        /* EVENTS_FREEZE @Bit 0 : Freeze GPU */
        #define GPU_EVENTS_FREEZE_EVENTS_FREEZE_Pos (0UL)  /*!< Position of EVENTS_FREEZE field.                                     */
        #define GPU_EVENTS_FREEZE_EVENTS_FREEZE_Msk (0x1UL << GPU_EVENTS_FREEZE_EVENTS_FREEZE_Pos) /*!< Bit mask of EVENTS_FREEZE
                                                                                    field.*/
        #define GPU_EVENTS_FREEZE_EVENTS_FREEZE_Min (0x0UL) /*!< Min enumerator value of EVENTS_FREEZE field.                        */
        #define GPU_EVENTS_FREEZE_EVENTS_FREEZE_Max (0x1UL) /*!< Max enumerator value of EVENTS_FREEZE field.                        */
        #define GPU_EVENTS_FREEZE_EVENTS_FREEZE_NotGenerated (0x0UL) /*!< Event not generated                                        */
        #define GPU_EVENTS_FREEZE_EVENTS_FREEZE_Generated (0x1UL) /*!< Event generated                                               */


        /* GPU_INTEN: Enable or disable interrupt */
        #define GPU_INTEN_ResetValue (0x00000000UL)        /*!< Reset value of INTEN register.                                       */

        /* CORE @Bit 0 : Enable or disable interrupt for event CORE */
        #define GPU_INTEN_CORE_Pos (0UL)                   /*!< Position of CORE field.                                              */
        #define GPU_INTEN_CORE_Msk (0x1UL << GPU_INTEN_CORE_Pos) /*!< Bit mask of CORE field.                                        */
        #define GPU_INTEN_CORE_Min (0x0UL)                 /*!< Min enumerator value of CORE field.                                  */
        #define GPU_INTEN_CORE_Max (0x1UL)                 /*!< Max enumerator value of CORE field.                                  */
        #define GPU_INTEN_CORE_Disabled (0x0UL)            /*!< Disable                                                              */
        #define GPU_INTEN_CORE_Enabled (0x1UL)             /*!< Enable                                                               */

        /* SYSERROR @Bit 1 : Enable or disable interrupt for event SYSERROR */
        #define GPU_INTEN_SYSERROR_Pos (1UL)               /*!< Position of SYSERROR field.                                          */
        #define GPU_INTEN_SYSERROR_Msk (0x1UL << GPU_INTEN_SYSERROR_Pos) /*!< Bit mask of SYSERROR field.                            */
        #define GPU_INTEN_SYSERROR_Min (0x0UL)             /*!< Min enumerator value of SYSERROR field.                              */
        #define GPU_INTEN_SYSERROR_Max (0x1UL)             /*!< Max enumerator value of SYSERROR field.                              */
        #define GPU_INTEN_SYSERROR_Disabled (0x0UL)        /*!< Disable                                                              */
        #define GPU_INTEN_SYSERROR_Enabled (0x1UL)         /*!< Enable                                                               */

        /* STARTED @Bit 2 : Enable or disable interrupt for event STARTED */
        #define GPU_INTEN_STARTED_Pos (2UL)                /*!< Position of STARTED field.                                           */
        #define GPU_INTEN_STARTED_Msk (0x1UL << GPU_INTEN_STARTED_Pos) /*!< Bit mask of STARTED field.                               */
        #define GPU_INTEN_STARTED_Min (0x0UL)              /*!< Min enumerator value of STARTED field.                               */
        #define GPU_INTEN_STARTED_Max (0x1UL)              /*!< Max enumerator value of STARTED field.                               */
        #define GPU_INTEN_STARTED_Disabled (0x0UL)         /*!< Disable                                                              */
        #define GPU_INTEN_STARTED_Enabled (0x1UL)          /*!< Enable                                                               */

        /* FREEZE @Bit 3 : Enable or disable interrupt for event FREEZE */
        #define GPU_INTEN_FREEZE_Pos (3UL)                 /*!< Position of FREEZE field.                                            */
        #define GPU_INTEN_FREEZE_Msk (0x1UL << GPU_INTEN_FREEZE_Pos) /*!< Bit mask of FREEZE field.                                  */
        #define GPU_INTEN_FREEZE_Min (0x0UL)               /*!< Min enumerator value of FREEZE field.                                */
        #define GPU_INTEN_FREEZE_Max (0x1UL)               /*!< Max enumerator value of FREEZE field.                                */
        #define GPU_INTEN_FREEZE_Disabled (0x0UL)          /*!< Disable                                                              */
        #define GPU_INTEN_FREEZE_Enabled (0x1UL)           /*!< Enable                                                               */


        /* GPU_INTENSET: Enable interrupt */
        #define GPU_INTENSET_ResetValue (0x00000000UL)     /*!< Reset value of INTENSET register.                                    */

        /* CORE @Bit 0 : Write '1' to enable interrupt for event CORE */
        #define GPU_INTENSET_CORE_Pos (0UL)                /*!< Position of CORE field.                                              */
        #define GPU_INTENSET_CORE_Msk (0x1UL << GPU_INTENSET_CORE_Pos) /*!< Bit mask of CORE field.                                  */
        #define GPU_INTENSET_CORE_Min (0x0UL)              /*!< Min enumerator value of CORE field.                                  */
        #define GPU_INTENSET_CORE_Max (0x1UL)              /*!< Max enumerator value of CORE field.                                  */
        #define GPU_INTENSET_CORE_Set (0x1UL)              /*!< Enable                                                               */
        #define GPU_INTENSET_CORE_Disabled (0x0UL)         /*!< Read: Disabled                                                       */
        #define GPU_INTENSET_CORE_Enabled (0x1UL)          /*!< Read: Enabled                                                        */

        /* SYSERROR @Bit 1 : Write '1' to enable interrupt for event SYSERROR */
        #define GPU_INTENSET_SYSERROR_Pos (1UL)            /*!< Position of SYSERROR field.                                          */
        #define GPU_INTENSET_SYSERROR_Msk (0x1UL << GPU_INTENSET_SYSERROR_Pos) /*!< Bit mask of SYSERROR field.                      */
        #define GPU_INTENSET_SYSERROR_Min (0x0UL)          /*!< Min enumerator value of SYSERROR field.                              */
        #define GPU_INTENSET_SYSERROR_Max (0x1UL)          /*!< Max enumerator value of SYSERROR field.                              */
        #define GPU_INTENSET_SYSERROR_Set (0x1UL)          /*!< Enable                                                               */
        #define GPU_INTENSET_SYSERROR_Disabled (0x0UL)     /*!< Read: Disabled                                                       */
        #define GPU_INTENSET_SYSERROR_Enabled (0x1UL)      /*!< Read: Enabled                                                        */

        /* STARTED @Bit 2 : Write '1' to enable interrupt for event STARTED */
        #define GPU_INTENSET_STARTED_Pos (2UL)             /*!< Position of STARTED field.                                           */
        #define GPU_INTENSET_STARTED_Msk (0x1UL << GPU_INTENSET_STARTED_Pos) /*!< Bit mask of STARTED field.                         */
        #define GPU_INTENSET_STARTED_Min (0x0UL)           /*!< Min enumerator value of STARTED field.                               */
        #define GPU_INTENSET_STARTED_Max (0x1UL)           /*!< Max enumerator value of STARTED field.                               */
        #define GPU_INTENSET_STARTED_Set (0x1UL)           /*!< Enable                                                               */
        #define GPU_INTENSET_STARTED_Disabled (0x0UL)      /*!< Read: Disabled                                                       */
        #define GPU_INTENSET_STARTED_Enabled (0x1UL)       /*!< Read: Enabled                                                        */

        /* FREEZE @Bit 3 : Write '1' to enable interrupt for event FREEZE */
        #define GPU_INTENSET_FREEZE_Pos (3UL)              /*!< Position of FREEZE field.                                            */
        #define GPU_INTENSET_FREEZE_Msk (0x1UL << GPU_INTENSET_FREEZE_Pos) /*!< Bit mask of FREEZE field.                            */
        #define GPU_INTENSET_FREEZE_Min (0x0UL)            /*!< Min enumerator value of FREEZE field.                                */
        #define GPU_INTENSET_FREEZE_Max (0x1UL)            /*!< Max enumerator value of FREEZE field.                                */
        #define GPU_INTENSET_FREEZE_Set (0x1UL)            /*!< Enable                                                               */
        #define GPU_INTENSET_FREEZE_Disabled (0x0UL)       /*!< Read: Disabled                                                       */
        #define GPU_INTENSET_FREEZE_Enabled (0x1UL)        /*!< Read: Enabled                                                        */


        /* GPU_INTENCLR: Disable interrupt */
        #define GPU_INTENCLR_ResetValue (0x00000000UL)     /*!< Reset value of INTENCLR register.                                    */

        /* CORE @Bit 0 : Write '1' to disable interrupt for event CORE */
        #define GPU_INTENCLR_CORE_Pos (0UL)                /*!< Position of CORE field.                                              */
        #define GPU_INTENCLR_CORE_Msk (0x1UL << GPU_INTENCLR_CORE_Pos) /*!< Bit mask of CORE field.                                  */
        #define GPU_INTENCLR_CORE_Min (0x0UL)              /*!< Min enumerator value of CORE field.                                  */
        #define GPU_INTENCLR_CORE_Max (0x1UL)              /*!< Max enumerator value of CORE field.                                  */
        #define GPU_INTENCLR_CORE_Clear (0x1UL)            /*!< Disable                                                              */
        #define GPU_INTENCLR_CORE_Disabled (0x0UL)         /*!< Read: Disabled                                                       */
        #define GPU_INTENCLR_CORE_Enabled (0x1UL)          /*!< Read: Enabled                                                        */

        /* SYSERROR @Bit 1 : Write '1' to disable interrupt for event SYSERROR */
        #define GPU_INTENCLR_SYSERROR_Pos (1UL)            /*!< Position of SYSERROR field.                                          */
        #define GPU_INTENCLR_SYSERROR_Msk (0x1UL << GPU_INTENCLR_SYSERROR_Pos) /*!< Bit mask of SYSERROR field.                      */
        #define GPU_INTENCLR_SYSERROR_Min (0x0UL)          /*!< Min enumerator value of SYSERROR field.                              */
        #define GPU_INTENCLR_SYSERROR_Max (0x1UL)          /*!< Max enumerator value of SYSERROR field.                              */
        #define GPU_INTENCLR_SYSERROR_Clear (0x1UL)        /*!< Disable                                                              */
        #define GPU_INTENCLR_SYSERROR_Disabled (0x0UL)     /*!< Read: Disabled                                                       */
        #define GPU_INTENCLR_SYSERROR_Enabled (0x1UL)      /*!< Read: Enabled                                                        */

        /* STARTED @Bit 2 : Write '1' to disable interrupt for event STARTED */
        #define GPU_INTENCLR_STARTED_Pos (2UL)             /*!< Position of STARTED field.                                           */
        #define GPU_INTENCLR_STARTED_Msk (0x1UL << GPU_INTENCLR_STARTED_Pos) /*!< Bit mask of STARTED field.                         */
        #define GPU_INTENCLR_STARTED_Min (0x0UL)           /*!< Min enumerator value of STARTED field.                               */
        #define GPU_INTENCLR_STARTED_Max (0x1UL)           /*!< Max enumerator value of STARTED field.                               */
        #define GPU_INTENCLR_STARTED_Clear (0x1UL)         /*!< Disable                                                              */
        #define GPU_INTENCLR_STARTED_Disabled (0x0UL)      /*!< Read: Disabled                                                       */
        #define GPU_INTENCLR_STARTED_Enabled (0x1UL)       /*!< Read: Enabled                                                        */

        /* FREEZE @Bit 3 : Write '1' to disable interrupt for event FREEZE */
        #define GPU_INTENCLR_FREEZE_Pos (3UL)              /*!< Position of FREEZE field.                                            */
        #define GPU_INTENCLR_FREEZE_Msk (0x1UL << GPU_INTENCLR_FREEZE_Pos) /*!< Bit mask of FREEZE field.                            */
        #define GPU_INTENCLR_FREEZE_Min (0x0UL)            /*!< Min enumerator value of FREEZE field.                                */
        #define GPU_INTENCLR_FREEZE_Max (0x1UL)            /*!< Max enumerator value of FREEZE field.                                */
        #define GPU_INTENCLR_FREEZE_Clear (0x1UL)          /*!< Disable                                                              */
        #define GPU_INTENCLR_FREEZE_Disabled (0x0UL)       /*!< Read: Disabled                                                       */
        #define GPU_INTENCLR_FREEZE_Enabled (0x1UL)        /*!< Read: Enabled                                                        */


        /* GPU_INTPEND: Pending interrupts */
        #define GPU_INTPEND_ResetValue (0x00000000UL)      /*!< Reset value of INTPEND register.                                     */

        /* CORE @Bit 0 : Read pending status of interrupt for event CORE */
        #define GPU_INTPEND_CORE_Pos (0UL)                 /*!< Position of CORE field.                                              */
        #define GPU_INTPEND_CORE_Msk (0x1UL << GPU_INTPEND_CORE_Pos) /*!< Bit mask of CORE field.                                    */
        #define GPU_INTPEND_CORE_Min (0x0UL)               /*!< Min enumerator value of CORE field.                                  */
        #define GPU_INTPEND_CORE_Max (0x1UL)               /*!< Max enumerator value of CORE field.                                  */
        #define GPU_INTPEND_CORE_NotPending (0x0UL)        /*!< Read: Not pending                                                    */
        #define GPU_INTPEND_CORE_Pending (0x1UL)           /*!< Read: Pending                                                        */

        /* SYSERROR @Bit 1 : Read pending status of interrupt for event SYSERROR */
        #define GPU_INTPEND_SYSERROR_Pos (1UL)             /*!< Position of SYSERROR field.                                          */
        #define GPU_INTPEND_SYSERROR_Msk (0x1UL << GPU_INTPEND_SYSERROR_Pos) /*!< Bit mask of SYSERROR field.                        */
        #define GPU_INTPEND_SYSERROR_Min (0x0UL)           /*!< Min enumerator value of SYSERROR field.                              */
        #define GPU_INTPEND_SYSERROR_Max (0x1UL)           /*!< Max enumerator value of SYSERROR field.                              */
        #define GPU_INTPEND_SYSERROR_NotPending (0x0UL)    /*!< Read: Not pending                                                    */
        #define GPU_INTPEND_SYSERROR_Pending (0x1UL)       /*!< Read: Pending                                                        */

        /* STARTED @Bit 2 : Read pending status of interrupt for event STARTED */
        #define GPU_INTPEND_STARTED_Pos (2UL)              /*!< Position of STARTED field.                                           */
        #define GPU_INTPEND_STARTED_Msk (0x1UL << GPU_INTPEND_STARTED_Pos) /*!< Bit mask of STARTED field.                           */
        #define GPU_INTPEND_STARTED_Min (0x0UL)            /*!< Min enumerator value of STARTED field.                               */
        #define GPU_INTPEND_STARTED_Max (0x1UL)            /*!< Max enumerator value of STARTED field.                               */
        #define GPU_INTPEND_STARTED_NotPending (0x0UL)     /*!< Read: Not pending                                                    */
        #define GPU_INTPEND_STARTED_Pending (0x1UL)        /*!< Read: Pending                                                        */

        /* FREEZE @Bit 3 : Read pending status of interrupt for event FREEZE */
        #define GPU_INTPEND_FREEZE_Pos (3UL)               /*!< Position of FREEZE field.                                            */
        #define GPU_INTPEND_FREEZE_Msk (0x1UL << GPU_INTPEND_FREEZE_Pos) /*!< Bit mask of FREEZE field.                              */
        #define GPU_INTPEND_FREEZE_Min (0x0UL)             /*!< Min enumerator value of FREEZE field.                                */
        #define GPU_INTPEND_FREEZE_Max (0x1UL)             /*!< Max enumerator value of FREEZE field.                                */
        #define GPU_INTPEND_FREEZE_NotPending (0x0UL)      /*!< Read: Not pending                                                    */
        #define GPU_INTPEND_FREEZE_Pending (0x1UL)         /*!< Read: Pending                                                        */


        /* GPU_ENABLE: Enable GPU. */
        #define GPU_ENABLE_ResetValue (0x00000000UL)       /*!< Reset value of ENABLE register.                                      */

        /* EN @Bit 0 : Enable */
        #define GPU_ENABLE_EN_Pos (0UL)                    /*!< Position of EN field.                                                */
        #define GPU_ENABLE_EN_Msk (0x1UL << GPU_ENABLE_EN_Pos) /*!< Bit mask of EN field.                                            */
        #define GPU_ENABLE_EN_Min (0x0UL)                  /*!< Min enumerator value of EN field.                                    */
        #define GPU_ENABLE_EN_Max (0x1UL)                  /*!< Max enumerator value of EN field.                                    */
        #define GPU_ENABLE_EN_Disabled (0x0UL)             /*!< GPU disabled.                                                        */
        #define GPU_ENABLE_EN_Enabled (0x1UL)              /*!< GPU enabled.                                                         */


        /* GPU_FLAG: FLAG information for FREEZE assertion. */
        #define GPU_FLAG_ResetValue (0x00000000UL)         /*!< Reset value of FLAG register.                                        */

        /* FLAG @Bits 0..3 : Writing '1' sets the flag breakpoint, writing '0' resumes the breakpoint. Reading reads the value of the
                            flag. */

        #define GPU_FLAG_FLAG_Pos (0UL)                    /*!< Position of FLAG field.                                              */
        #define GPU_FLAG_FLAG_Msk (0xFUL << GPU_FLAG_FLAG_Pos) /*!< Bit mask of FLAG field.                                          */


        /* GPU_STATUS: GPU ACTIVE and DVFS status fields. */
        #define GPU_STATUS_ResetValue (0x00000000UL)       /*!< Reset value of STATUS register.                                      */

        /* ACTIVE @Bit 0 : GPU active indication */
        #define GPU_STATUS_ACTIVE_Pos (0UL)                /*!< Position of ACTIVE field.                                            */
        #define GPU_STATUS_ACTIVE_Msk (0x1UL << GPU_STATUS_ACTIVE_Pos) /*!< Bit mask of ACTIVE field.                                */
        #define GPU_STATUS_ACTIVE_Min (0x0UL)              /*!< Min enumerator value of ACTIVE field.                                */
        #define GPU_STATUS_ACTIVE_Max (0x1UL)              /*!< Max enumerator value of ACTIVE field.                                */
        #define GPU_STATUS_ACTIVE_BUSY (0x1UL)             /*!< GPU is Busy                                                          */
        #define GPU_STATUS_ACTIVE_IDLE (0x0UL)             /*!< GPU is idle                                                          */

        /* DVFS @Bits 1..2 : Frequency reduction request for GPU core clock. */
        #define GPU_STATUS_DVFS_Pos (1UL)                  /*!< Position of DVFS field.                                              */
        #define GPU_STATUS_DVFS_Msk (0x3UL << GPU_STATUS_DVFS_Pos) /*!< Bit mask of DVFS field.                                      */


        #endif                                               /*!< !defined(__ASSEMBLER__) && !defined(__ASSEMBLY__)                    */


        /* =========================================================================================================================== */
        /* ================                                           DISPC                                           ================ */
        /* =========================================================================================================================== */

        #if !defined(__ASSEMBLER__) && !defined(__ASSEMBLY__) /*!< Ignore C structs for assembly code.                                 */

        /* ================================================= Struct DISPC_PCGCSLAVE ================================================== */
        /**
         * @brief PCGCSLAVE [DISPC_PCGCSLAVE] (unspecified)
         */
        typedef struct {
            __IOM uint32_t  PENALTY[2];                        /*!< (@ 0x00000000) Penalty level for power/clock pair n                  */
            __IM  uint32_t  RESERVED[30];
            __IOM uint32_t  FORCEOVERRIDE[2];                  /*!< (@ 0x00000080) Force override of power/clock pair n                  */
        } NRF_DISPC_PCGCSLAVE_Type;                          /*!< Size = 136 (0x088)                                                   */

        /* DISPC_PCGCSLAVE_PENALTY: Penalty level for power/clock pair n */
        #define DISPC_PCGCSLAVE_PENALTY_MaxCount (2UL)     /*!< Max size of PENALTY[2] array.                                        */
        #define DISPC_PCGCSLAVE_PENALTY_ResetValue (0x00000000UL) /*!< Reset value of PENALTY[2] register.                           */

        /* PENALTY @Bits 0..7 : Penalty level */
        #define DISPC_PCGCSLAVE_PENALTY_PENALTY_Pos (0UL)  /*!< Position of PENALTY field.                                           */
        #define DISPC_PCGCSLAVE_PENALTY_PENALTY_Msk (0xFFUL << DISPC_PCGCSLAVE_PENALTY_PENALTY_Pos) /*!< Bit mask of PENALTY field.  */


        /* DISPC_PCGCSLAVE_FORCEOVERRIDE: Force override of power/clock pair n */
        #define DISPC_PCGCSLAVE_FORCEOVERRIDE_MaxCount (2UL) /*!< Max size of FORCEOVERRIDE[2] array.                                */
        #define DISPC_PCGCSLAVE_FORCEOVERRIDE_ResetValue (0x00000000UL) /*!< Reset value of FORCEOVERRIDE[2] register.               */

        /* CLOCKFORCINGPRE @Bits 0..3 : CLOCKFORCINGPRE */
        #define DISPC_PCGCSLAVE_FORCEOVERRIDE_CLOCKFORCINGPRE_Pos (0UL) /*!< Position of CLOCKFORCINGPRE field.                      */
        #define DISPC_PCGCSLAVE_FORCEOVERRIDE_CLOCKFORCINGPRE_Msk (0xFUL << DISPC_PCGCSLAVE_FORCEOVERRIDE_CLOCKFORCINGPRE_Pos) /*!<
                                                                                    Bit mask of CLOCKFORCINGPRE field.*/

        /* DOFORCECLOCKPRE @Bit 7 : DOFORCECLOCKPRE */
        #define DISPC_PCGCSLAVE_FORCEOVERRIDE_DOFORCECLOCKPRE_Pos (7UL) /*!< Position of DOFORCECLOCKPRE field.                      */
        #define DISPC_PCGCSLAVE_FORCEOVERRIDE_DOFORCECLOCKPRE_Msk (0x1UL << DISPC_PCGCSLAVE_FORCEOVERRIDE_DOFORCECLOCKPRE_Pos) /*!<
                                                                                    Bit mask of DOFORCECLOCKPRE field.*/

        /* POWERFORCINGPRE @Bits 8..9 : POWERFORCINGPRE */
        #define DISPC_PCGCSLAVE_FORCEOVERRIDE_POWERFORCINGPRE_Pos (8UL) /*!< Position of POWERFORCINGPRE field.                      */
        #define DISPC_PCGCSLAVE_FORCEOVERRIDE_POWERFORCINGPRE_Msk (0x3UL << DISPC_PCGCSLAVE_FORCEOVERRIDE_POWERFORCINGPRE_Pos) /*!<
                                                                                    Bit mask of POWERFORCINGPRE field.*/

        /* DOFORCEPOWERPRE @Bit 15 : DOFORCEPOWERPRE */
        #define DISPC_PCGCSLAVE_FORCEOVERRIDE_DOFORCEPOWERPRE_Pos (15UL) /*!< Position of DOFORCEPOWERPRE field.                     */
        #define DISPC_PCGCSLAVE_FORCEOVERRIDE_DOFORCEPOWERPRE_Msk (0x1UL << DISPC_PCGCSLAVE_FORCEOVERRIDE_DOFORCEPOWERPRE_Pos) /*!<
                                                                                    Bit mask of DOFORCEPOWERPRE field.*/



        /* ==================================================== Struct DISPC_CORE ==================================================== */
        /**
         * @brief CORE [DISPC_CORE] (unspecified)
         */
        typedef struct {
            __IOM uint32_t  MODE;                              /*!< (@ 0x00000000) General control register that activates the display   */
            __IOM uint32_t  CLKCTRL;                           /*!< (@ 0x00000004) Setup proper timing with divisor control bits         */
            __IOM uint32_t  BGCOLOR;                           /*!< (@ 0x00000008) Specifies the main background color.                  */
            __IOM uint32_t  RESXY;                             /*!< (@ 0x0000000C) Specifies the main X and Y resolutions.               */
            __IOM uint32_t  PLAY;                              /*!< (@ 0x00000010) Write any value to this register at the end of the
                                                                                    programming sequence to trigger the display.*/
            __IOM uint32_t  FRONTPORCHXY;                      /*!< (@ 0x00000014) Specifies the X and Y dimensions for the Front Porch. */
            __IOM uint32_t  BLANKINGXY;                        /*!< (@ 0x00000018) Specifies the X and Y dimensions for the Blanking
                                                                                    Period.*/
            __IOM uint32_t  BACKPORCHXY;                       /*!< (@ 0x0000001C) Specifies the X and Y dimensions for the Back Porch.  */
            __IOM uint32_t  CURSORXY;                          /*!< (@ 0x00000020) Specifies the cursors start X and Y coordinates.      */
            __IOM uint32_t  STARTXY;                           /*!< (@ 0x00000024) Specifies the start position of the very first frame. */
            __IOM uint32_t  DBIBCFG;                           /*!< (@ 0x00000028) Register for the configuration DBI Type-B interface   */
            __IOM uint32_t  GPIO;                              /*!< (@ 0x0000002C) General Purpose register.                             */
            __IOM uint32_t  LAYER0MODE;                        /*!< (@ 0x00000030) Activate and set-up layer 0                           */
            __IOM uint32_t  LAYER0STARTXY;                     /*!< (@ 0x00000034) X and Y start dimensions of layer 0                   */
            __IOM uint32_t  LAYER0SIZEXY;                      /*!< (@ 0x00000038) X and Y size of layer 0                               */
            __IOM uint32_t  LAYER0BASEADDR;                    /*!< (@ 0x0000003C) The start address of the framebuffer to be accessed by
                                                                                    layer 0*/
            __IOM uint32_t  LAYER0STRIDE;                      /*!< (@ 0x00000040) Specify the stride and the AXI bus burst of layer 0   */
            __IOM uint32_t  LAYER0RESXY;                       /*!< (@ 0x00000044) X and Y start dimensions of layerX and Y dimensions for
                                                                                    the resolution of layer 0.*/
            __IM  uint32_t  RESERVED[2];
            __IOM uint32_t  LAYER1MODE;                        /*!< (@ 0x00000050) Activate and set-up layer 1                           */
            __IOM uint32_t  LAYER1STARTXY;                     /*!< (@ 0x00000054) X and Y start dimensions of layer 1                   */
            __IOM uint32_t  LAYER1SIZEXY;                      /*!< (@ 0x00000058) X and Y size of layer 1                               */
            __IOM uint32_t  LAYER1BASEADDR;                    /*!< (@ 0x0000005C) The start address of the framebuffer to be accessed by
                                                                                    layer 1*/
            __IOM uint32_t  LAYER1STRIDE;                      /*!< (@ 0x00000060) Specify the stride and the AXI bus burst of layer 1   */
            __IOM uint32_t  LAYER1RESXY;                       /*!< (@ 0x00000064) X and Y start dimensions of layerX and Y dimensions for
                                                                                    the resolution of layer 1.*/
            __IM  uint32_t  RESERVED1[2];
            __IOM uint32_t  LAYER2MODE;                        /*!< (@ 0x00000070) Activate and set-up layer 2                           */
            __IOM uint32_t  LAYER2STARTXY;                     /*!< (@ 0x00000074) X and Y start dimensions of layer 2                   */
            __IOM uint32_t  LAYER2SIZEXY;                      /*!< (@ 0x00000078) X and Y size of layer 2                               */
            __IOM uint32_t  LAYER2BASEADDR;                    /*!< (@ 0x0000007C) The start address of the framebuffer to be accessed by
                                                                                    layer 2*/
            __IOM uint32_t  LAYER2STRIDE;                      /*!< (@ 0x00000080) Specify the stride and the AXI bus burst of layer 2   */
            __IOM uint32_t  LAYER2RESXY;                       /*!< (@ 0x00000084) X and Y start dimensions of layerX and Y dimensions for
                                                                                    the resolution of layer 2.*/
            __IM  uint32_t  RESERVED2[2];
            __IOM uint32_t  LAYER3MODE;                        /*!< (@ 0x00000090) Activate and set-up layer 3                           */
            __IOM uint32_t  LAYER3STARTXY;                     /*!< (@ 0x00000094) X and Y start dimensions of layer 3                   */
            __IOM uint32_t  LAYER3SIZEXY;                      /*!< (@ 0x00000098) X and Y size of layer 3                               */
            __IOM uint32_t  LAYER3BASEADDR;                    /*!< (@ 0x0000009C) The start address of the framebuffer to be accessed by
                                                                                    layer 3*/
            __IOM uint32_t  LAYER3STRIDE;                      /*!< (@ 0x000000A0) Specify the stride and the AXI bus burst of layer 3   */
            __IOM uint32_t  LAYER3RESXY;                       /*!< (@ 0x000000A4) X and Y start dimensions of layerX and Y dimensions for
                                                                                    the resolution of layer 3.*/
            __IM  uint32_t  RESERVED3[10];
            __IOM uint32_t  LAYER0UBASE;                       /*!< (@ 0x000000D0) The start address of the U chroma for layer 0 YUV
                                                                                    planar format.*/
            __IOM uint32_t  LAYER0VBASE;                       /*!< (@ 0x000000D4) The start address of the V chroma for layer 0 YUV
                                                                                    planar format.*/
            __IOM uint32_t  LAYER0UVSTRIDE;                    /*!< (@ 0x000000D8) Specify the stride for layer 0 YUV planar format.     */
            __IOM uint32_t  LAYER1UBASE;                       /*!< (@ 0x000000DC) The start address of the U chroma for layer 1 YUV
                                                                                    planar format.*/
            __IOM uint32_t  LAYER1VBASE;                       /*!< (@ 0x000000E0) The start address of the V chroma for layer 1 YUV
                                                                                    planar format.*/
            __IOM uint32_t  LAYER1UVSTRIDE;                    /*!< (@ 0x000000E4) Specify the stride for layer 1 YUV planar format.     */
            __IOM uint32_t  DBIBCMD;                           /*!< (@ 0x000000E8) Command Register to read/write commands from/to DBI
                                                                                    Type-B interface.*/
            __IOM uint32_t  DBIBRDAT;                          /*!< (@ 0x000000EC) Data read by DBI Type-B/SPI interface are stored in the
                                                                                    CORE_DBIB_RDAT register.*/
            __IOM uint32_t  CONFIG;                            /*!< (@ 0x000000F0) Information register of the layers activation and
                                                                                    setup.*/
            __IOM uint32_t  IDREG;                             /*!< (@ 0x000000F4) Identification Register.                              */
            __IOM uint32_t  INTERRUPT;                         /*!< (@ 0x000000F8) Interrupt register                                    */
            __IOM uint32_t  STATUS;                            /*!< (@ 0x000000FC) Status register                                       */
            __IOM uint32_t  COLMOD;                            /*!< (@ 0x00000100) Color mode status register.                           */
            __IM  uint32_t  RESERVED4[32];
            __IOM uint32_t  CRC;                               /*!< (@ 0x00000184) If CRC errors occur, they are written in the CORE_CRC
                                                                                    register*/
            __IOM uint32_t  LAYER2UBASE;                       /*!< (@ 0x00000188) The start address of the U chroma for layer 2 YUV
                                                                                    planar format.*/
            __IOM uint32_t  LAYER2VBASE;                       /*!< (@ 0x0000018C) The start address of the V chroma for layer 2 YUV
                                                                                    planar format.*/
            __IOM uint32_t  LAYER2UVSTRIDE;                    /*!< (@ 0x00000190) Specify the stride for layer 2 YUV planar format.     */
            __IOM uint32_t  LAYER3UBASE;                       /*!< (@ 0x00000194) The start address of the U chroma for layer 3 YUV
                                                                                    planar format.*/
            __IOM uint32_t  LAYER3VBASE;                       /*!< (@ 0x00000198) The start address of the V chroma for layer 3 YUV
                                                                                    planar format.*/
            __IOM uint32_t  LAYER3UVSTRIDE;                    /*!< (@ 0x0000019C) Specify the stride for layer 3 YUV planar format.     */
            __IOM uint32_t  FORMATCTRL;                        /*!< (@ 0x000001A0) Controls DBI and JDI format.                          */
            __IOM uint32_t  FORMATCTRL2;                       /*!< (@ 0x000001A4) Controls DBI and JDI format.                          */
            __IOM uint32_t  CLKCTRLCG;                         /*!< (@ 0x000001A8) Controls the Clock Gaters and the routing of format and
                                                                                    pixel clock*/
            __IOM uint32_t  FORMATCTRL3;                       /*!< (@ 0x000001AC) Control JDI format.                                   */
            __IM  uint32_t  RESERVED5[148];
            __IOM uint32_t  PALETTE;                           /*!< (@ 0x00000400) Global palette/gamma correction memory region.        */
            __IM  uint32_t  RESERVED6[255];
            __IOM uint32_t  CURSORIMAGE;                       /*!< (@ 0x00000800) Color values for the pixel Cursor that are used with
                                                                                    the Cursor LUT.*/
            __IM  uint32_t  RESERVED7[127];
            __IOM uint32_t  CURSORLUT;                         /*!< (@ 0x00000A00) Cursor Look-up Table.                                 */
            __IM  uint32_t  RESERVED8[383];
            __IOM uint32_t  GAMMALUT0;                         /*!< (@ 0x00001000) Layer 0 palette/gamma correction memory region.       */
            __IM  uint32_t  RESERVED9[255];
            __IOM uint32_t  GAMMALUT1;                         /*!< (@ 0x00001400) Layer 1 palette/gamma correction memory region.       */
            __IM  uint32_t  RESERVED10[255];
            __IOM uint32_t  GAMMALUT2;                         /*!< (@ 0x00001800) Layer 2 palette/gamma correction memory region.       */
            __IM  uint32_t  RESERVED11[255];
            __IOM uint32_t  GAMMALUT3;                         /*!< (@ 0x00001C00) Layer 3 palette/gamma correction memory region.       */
        } NRF_DISPC_CORE_Type;                               /*!< Size = 7172 (0x1C04)                                                 */

        /* DISPC_CORE_MODE: General control register that activates the display */
        #define DISPC_CORE_MODE_ResetValue (0x00000000UL)  /*!< Reset value of MODE register.                                        */

        /* TESTMODEEN @Bit 0 : When set to 1, test mode is enabled */
        #define DISPC_CORE_MODE_TESTMODEEN_Pos (0UL)       /*!< Position of TESTMODEEN field.                                        */
        #define DISPC_CORE_MODE_TESTMODEEN_Msk (0x1UL << DISPC_CORE_MODE_TESTMODEEN_Pos) /*!< Bit mask of TESTMODEEN field.          */

        /* DOUBLESCANEN @Bit 1 : When set to 1, double horizontal scan is enabled */
        #define DISPC_CORE_MODE_DOUBLESCANEN_Pos (1UL)     /*!< Position of DOUBLESCANEN field.                                      */
        #define DISPC_CORE_MODE_DOUBLESCANEN_Msk (0x1UL << DISPC_CORE_MODE_DOUBLESCANEN_Pos) /*!< Bit mask of DOUBLESCANEN field.    */

        /* LVDSEN @Bit 2 : When set to 0, LVDS interface is enabled */
        #define DISPC_CORE_MODE_LVDSEN_Pos (2UL)           /*!< Position of LVDSEN field.                                            */
        #define DISPC_CORE_MODE_LVDSEN_Msk (0x1UL << DISPC_CORE_MODE_LVDSEN_Pos) /*!< Bit mask of LVDSEN field.                      */

        /* MODEPOS03LEN01 @Bit 3 : When set to 0, the following output color formats are enabled */
        #define DISPC_CORE_MODE_MODEPOS03LEN01_Pos (3UL)   /*!< Position of MODEPOS03LEN01 field.                                    */
        #define DISPC_CORE_MODE_MODEPOS03LEN01_Msk (0x1UL << DISPC_CORE_MODE_MODEPOS03LEN01_Pos) /*!< Bit mask of MODEPOS03LEN01
                                                                                    field.*/

        /* DBIBEN @Bit 4 : When set to 0, DBI Type-B interface is enabled */
        #define DISPC_CORE_MODE_DBIBEN_Pos (4UL)           /*!< Position of DBIBEN field.                                            */
        #define DISPC_CORE_MODE_DBIBEN_Msk (0x1UL << DISPC_CORE_MODE_DBIBEN_Pos) /*!< Bit mask of DBIBEN field.                      */

        /* MODEPOS05LEN04 @Bits 5..8 : Display data format */
        #define DISPC_CORE_MODE_MODEPOS05LEN04_Pos (5UL)   /*!< Position of MODEPOS05LEN04 field.                                    */
        #define DISPC_CORE_MODE_MODEPOS05LEN04_Msk (0xFUL << DISPC_CORE_MODE_MODEPOS05LEN04_Pos) /*!< Bit mask of MODEPOS05LEN04
                                                                                    field.*/

        /* MODEPOS09LEN01 @Bit 9 : * 1: YUV/YCbCr format is enabled */
        #define DISPC_CORE_MODE_MODEPOS09LEN01_Pos (9UL)   /*!< Position of MODEPOS09LEN01 field.                                    */
        #define DISPC_CORE_MODE_MODEPOS09LEN01_Msk (0x1UL << DISPC_CORE_MODE_MODEPOS09LEN01_Pos) /*!< Bit mask of MODEPOS09LEN01
                                                                                    field.*/

        /* MODEPOS10LEN01 @Bit 10 : When set to 1, LVDS Enable output is enabled */
        #define DISPC_CORE_MODE_MODEPOS10LEN01_Pos (10UL)  /*!< Position of MODEPOS10LEN01 field.                                    */
        #define DISPC_CORE_MODE_MODEPOS10LEN01_Msk (0x1UL << DISPC_CORE_MODE_MODEPOS10LEN01_Pos) /*!< Bit mask of MODEPOS10LEN01
                                                                                    field.*/

        /* MODEPOS11LEN01 @Bit 11 : When set to 1, DPI_PCLK is equal to format_clk */
        #define DISPC_CORE_MODE_MODEPOS11LEN01_Pos (11UL)  /*!< Position of MODEPOS11LEN01 field.                                    */
        #define DISPC_CORE_MODE_MODEPOS11LEN01_Msk (0x1UL << DISPC_CORE_MODE_MODEPOS11LEN01_Pos) /*!< Bit mask of MODEPOS11LEN01
                                                                                    field.*/

        /* MODEPOS12LEN03 @Bits 12..14 : * 0x00: RGB888 24-bits */
        #define DISPC_CORE_MODE_MODEPOS12LEN03_Pos (12UL)  /*!< Position of MODEPOS12LEN03 field.                                    */
        #define DISPC_CORE_MODE_MODEPOS12LEN03_Msk (0x7UL << DISPC_CORE_MODE_MODEPOS12LEN03_Pos) /*!< Bit mask of MODEPOS12LEN03
                                                                                    field.*/

        /* MODEPOS15LEN02 @Bits 15..16 : Revered */
        #define DISPC_CORE_MODE_MODEPOS15LEN02_Pos (15UL)  /*!< Position of MODEPOS15LEN02 field.                                    */
        #define DISPC_CORE_MODE_MODEPOS15LEN02_Msk (0x3UL << DISPC_CORE_MODE_MODEPOS15LEN02_Pos) /*!< Bit mask of MODEPOS15LEN02
                                                                                    field.*/

        /* MODESNGFRAME @Bit 17 : When set to 1, single frame update is enabled */
        #define DISPC_CORE_MODE_MODESNGFRAME_Pos (17UL)    /*!< Position of MODESNGFRAME field.                                      */
        #define DISPC_CORE_MODE_MODESNGFRAME_Msk (0x1UL << DISPC_CORE_MODE_MODESNGFRAME_Pos) /*!< Bit mask of MODESNGFRAME field.    */

        /* MODEPOS18LEN01 @Bit 18 : When set to 1, underrun prevention is enabled for interfaces that support this */
        #define DISPC_CORE_MODE_MODEPOS18LEN01_Pos (18UL)  /*!< Position of MODEPOS18LEN01 field.                                    */
        #define DISPC_CORE_MODE_MODEPOS18LEN01_Msk (0x1UL << DISPC_CORE_MODE_MODEPOS18LEN01_Pos) /*!< Bit mask of MODEPOS18LEN01
                                                                                    field.*/

        /* MODEFORCEBLANK @Bit 19 : When set to 1, forces output to blank */
        #define DISPC_CORE_MODE_MODEFORCEBLANK_Pos (19UL)  /*!< Position of MODEFORCEBLANK field.                                    */
        #define DISPC_CORE_MODE_MODEFORCEBLANK_Msk (0x1UL << DISPC_CORE_MODE_MODEFORCEBLANK_Pos) /*!< Bit mask of MODEFORCEBLANK
                                                                                    field.*/

        /* MODEGLBGAMMAEN @Bit 20 : When set to 1, global gamma correction is enabled */
        #define DISPC_CORE_MODE_MODEGLBGAMMAEN_Pos (20UL)  /*!< Position of MODEGLBGAMMAEN field.                                    */
        #define DISPC_CORE_MODE_MODEGLBGAMMAEN_Msk (0x1UL << DISPC_CORE_MODE_MODEGLBGAMMAEN_Pos) /*!< Bit mask of MODEGLBGAMMAEN
                                                                                    field.*/

        /* MODEPOS21LEN02 @Bits 21..22 : Revered */
        #define DISPC_CORE_MODE_MODEPOS21LEN02_Pos (21UL)  /*!< Position of MODEPOS21LEN02 field.                                    */
        #define DISPC_CORE_MODE_MODEPOS21LEN02_Msk (0x3UL << DISPC_CORE_MODE_MODEPOS21LEN02_Pos) /*!< Bit mask of MODEPOS21LEN02
                                                                                    field.*/

        /* MODESNGVSYNC @Bit 23 : When set to 1, VSYNC for a single cycle per line is enabled */
        #define DISPC_CORE_MODE_MODESNGVSYNC_Pos (23UL)    /*!< Position of MODESNGVSYNC field.                                      */
        #define DISPC_CORE_MODE_MODESNGVSYNC_Msk (0x1UL << DISPC_CORE_MODE_MODESNGVSYNC_Pos) /*!< Bit mask of MODESNGVSYNC field.    */

        /* MODEDITHER @Bits 24..25 : Defines the dithering mode */
        #define DISPC_CORE_MODE_MODEDITHER_Pos (24UL)      /*!< Position of MODEDITHER field.                                        */
        #define DISPC_CORE_MODE_MODEDITHER_Msk (0x3UL << DISPC_CORE_MODE_MODEDITHER_Pos) /*!< Bit mask of MODEDITHER field.          */

        /* MODEDEPOL @Bit 26 : Defines DE polarity */
        #define DISPC_CORE_MODE_MODEDEPOL_Pos (26UL)       /*!< Position of MODEDEPOL field.                                         */
        #define DISPC_CORE_MODE_MODEDEPOL_Msk (0x1UL << DISPC_CORE_MODE_MODEDEPOL_Pos) /*!< Bit mask of MODEDEPOL field.             */

        /* MODEHSYNCPOL @Bit 27 : Defines HSYNC polarity */
        #define DISPC_CORE_MODE_MODEHSYNCPOL_Pos (27UL)    /*!< Position of MODEHSYNCPOL field.                                      */
        #define DISPC_CORE_MODE_MODEHSYNCPOL_Msk (0x1UL << DISPC_CORE_MODE_MODEHSYNCPOL_Pos) /*!< Bit mask of MODEHSYNCPOL field.    */

        /* MODEVSYNCPOL @Bit 28 : Defines VSYNC polarity */
        #define DISPC_CORE_MODE_MODEVSYNCPOL_Pos (28UL)    /*!< Position of MODEVSYNCPOL field.                                      */
        #define DISPC_CORE_MODE_MODEVSYNCPOL_Msk (0x1UL << DISPC_CORE_MODE_MODEVSYNCPOL_Pos) /*!< Bit mask of MODEVSYNCPOL field.    */

        /* MODEPOS29LEN01 @Bit 29 : Revered */
        #define DISPC_CORE_MODE_MODEPOS29LEN01_Pos (29UL)  /*!< Position of MODEPOS29LEN01 field.                                    */
        #define DISPC_CORE_MODE_MODEPOS29LEN01_Msk (0x1UL << DISPC_CORE_MODE_MODEPOS29LEN01_Pos) /*!< Bit mask of MODEPOS29LEN01
                                                                                    field.*/

        /* MODEPRGCUREN @Bit 30 : When set to 1, programmable cursor is enabled */
        #define DISPC_CORE_MODE_MODEPRGCUREN_Pos (30UL)    /*!< Position of MODEPRGCUREN field.                                      */
        #define DISPC_CORE_MODE_MODEPRGCUREN_Msk (0x1UL << DISPC_CORE_MODE_MODEPRGCUREN_Pos) /*!< Bit mask of MODEPRGCUREN field.    */

        /* MODEENABLE @Bit 31 : When set to 1, the display controller is activated */
        #define DISPC_CORE_MODE_MODEENABLE_Pos (31UL)      /*!< Position of MODEENABLE field.                                        */
        #define DISPC_CORE_MODE_MODEENABLE_Msk (0x1UL << DISPC_CORE_MODE_MODEENABLE_Pos) /*!< Bit mask of MODEENABLE field.          */


        /* DISPC_CORE_CLKCTRL: Setup proper timing with divisor control bits */
        #define DISPC_CORE_CLKCTRL_ResetValue (0x00000401UL) /*!< Reset value of CLKCTRL register.                                   */

        /* CLKCTRLPRIDIV @Bits 0..5 : Value of primary clock divider */
        #define DISPC_CORE_CLKCTRL_CLKCTRLPRIDIV_Pos (0UL) /*!< Position of CLKCTRLPRIDIV field.                                     */
        #define DISPC_CORE_CLKCTRL_CLKCTRLPRIDIV_Msk (0x3FUL << DISPC_CORE_CLKCTRL_CLKCTRLPRIDIV_Pos) /*!< Bit mask of CLKCTRLPRIDIV
                                                                                    field.*/

        /* CLKCTRLPOS06LEN02 @Bits 6..7 : Revered */
        #define DISPC_CORE_CLKCTRL_CLKCTRLPOS06LEN02_Pos (6UL) /*!< Position of CLKCTRLPOS06LEN02 field.                             */
        #define DISPC_CORE_CLKCTRL_CLKCTRLPOS06LEN02_Msk (0x3UL << DISPC_CORE_CLKCTRL_CLKCTRLPOS06LEN02_Pos) /*!< Bit mask of
                                                                                    CLKCTRLPOS06LEN02 field.*/

        /* CLKCTRLPREFETCH @Bits 8..13 : Number of lines to be prefetched before starting the */
        #define DISPC_CORE_CLKCTRL_CLKCTRLPREFETCH_Pos (8UL) /*!< Position of CLKCTRLPREFETCH field.                                 */
        #define DISPC_CORE_CLKCTRL_CLKCTRLPREFETCH_Msk (0x3FUL << DISPC_CORE_CLKCTRL_CLKCTRLPREFETCH_Pos) /*!< Bit mask of
                                                                                    CLKCTRLPREFETCH field.*/

        /* CLKCTRLPOS14LEN02 @Bits 14..15 : Revered */
        #define DISPC_CORE_CLKCTRL_CLKCTRLPOS14LEN02_Pos (14UL) /*!< Position of CLKCTRLPOS14LEN02 field.                            */
        #define DISPC_CORE_CLKCTRL_CLKCTRLPOS14LEN02_Msk (0x3UL << DISPC_CORE_CLKCTRL_CLKCTRLPOS14LEN02_Pos) /*!< Bit mask of
                                                                                    CLKCTRLPOS14LEN02 field.*/

        /* CLKCTRLPLLSLCT @Bits 16..23 : Select PLL Clock. Drives the pll_sw pins */
        #define DISPC_CORE_CLKCTRL_CLKCTRLPLLSLCT_Pos (16UL) /*!< Position of CLKCTRLPLLSLCT field.                                  */
        #define DISPC_CORE_CLKCTRL_CLKCTRLPLLSLCT_Msk (0xFFUL << DISPC_CORE_CLKCTRL_CLKCTRLPLLSLCT_Pos) /*!< Bit mask of
                                                                                    CLKCTRLPLLSLCT field.*/

        /* CLKCTRLSHFPHASE @Bits 24..26 : Clock phase shift value for LVDS operation */
        #define DISPC_CORE_CLKCTRL_CLKCTRLSHFPHASE_Pos (24UL) /*!< Position of CLKCTRLSHFPHASE field.                                */
        #define DISPC_CORE_CLKCTRL_CLKCTRLSHFPHASE_Msk (0x7UL << DISPC_CORE_CLKCTRL_CLKCTRLSHFPHASE_Pos) /*!< Bit mask of
                                                                                    CLKCTRLSHFPHASE field.*/

        /* CLKCTRLOPTDIV @Bits 27..31 : Value of optional clock divider */
        #define DISPC_CORE_CLKCTRL_CLKCTRLOPTDIV_Pos (27UL) /*!< Position of CLKCTRLOPTDIV field.                                    */
        #define DISPC_CORE_CLKCTRL_CLKCTRLOPTDIV_Msk (0x1FUL << DISPC_CORE_CLKCTRL_CLKCTRLOPTDIV_Pos) /*!< Bit mask of CLKCTRLOPTDIV
                                                                                    field.*/


        /* DISPC_CORE_BGCOLOR: Specifies the main background color. */
        #define DISPC_CORE_BGCOLOR_ResetValue (0x00000000UL) /*!< Reset value of BGCOLOR register.                                   */

        /* BGCOLORALPHA @Bits 0..7 : Color alpha is used as background color */
        #define DISPC_CORE_BGCOLOR_BGCOLORALPHA_Pos (0UL)  /*!< Position of BGCOLORALPHA field.                                      */
        #define DISPC_CORE_BGCOLOR_BGCOLORALPHA_Msk (0xFFUL << DISPC_CORE_BGCOLOR_BGCOLORALPHA_Pos) /*!< Bit mask of BGCOLORALPHA
                                                                                    field.*/

        /* BGCOLORBLUE @Bits 8..15 : Color blue is used as background color */
        #define DISPC_CORE_BGCOLOR_BGCOLORBLUE_Pos (8UL)   /*!< Position of BGCOLORBLUE field.                                       */
        #define DISPC_CORE_BGCOLOR_BGCOLORBLUE_Msk (0xFFUL << DISPC_CORE_BGCOLOR_BGCOLORBLUE_Pos) /*!< Bit mask of BGCOLORBLUE field.*/

        /* BGCOLORGREEN @Bits 16..23 : Color green is used as background color */
        #define DISPC_CORE_BGCOLOR_BGCOLORGREEN_Pos (16UL) /*!< Position of BGCOLORGREEN field.                                      */
        #define DISPC_CORE_BGCOLOR_BGCOLORGREEN_Msk (0xFFUL << DISPC_CORE_BGCOLOR_BGCOLORGREEN_Pos) /*!< Bit mask of BGCOLORGREEN
                                                                                    field.*/

        /* BGCOLORRED @Bits 24..31 : Color red is used as background color */
        #define DISPC_CORE_BGCOLOR_BGCOLORRED_Pos (24UL)   /*!< Position of BGCOLORRED field.                                        */
        #define DISPC_CORE_BGCOLOR_BGCOLORRED_Msk (0xFFUL << DISPC_CORE_BGCOLOR_BGCOLORRED_Pos) /*!< Bit mask of BGCOLORRED field.   */


        /* DISPC_CORE_RESXY: Specifies the main X and Y resolutions. */
        #define DISPC_CORE_RESXY_ResetValue (0x00000000UL) /*!< Reset value of RESXY register.                                       */

        /* RESY @Bits 0..15 : Value of Y resolution in pixels */
        #define DISPC_CORE_RESXY_RESY_Pos (0UL)            /*!< Position of RESY field.                                              */
        #define DISPC_CORE_RESXY_RESY_Msk (0xFFFFUL << DISPC_CORE_RESXY_RESY_Pos) /*!< Bit mask of RESY field.                       */

        /* RESX @Bits 16..31 : Value of X resolution in pixels */
        #define DISPC_CORE_RESXY_RESX_Pos (16UL)           /*!< Position of RESX field.                                              */
        #define DISPC_CORE_RESXY_RESX_Msk (0xFFFFUL << DISPC_CORE_RESXY_RESX_Pos) /*!< Bit mask of RESX field.                       */


        /* DISPC_CORE_PLAY: Write any value to this register at the end of the programming sequence to trigger the display. */
        #define DISPC_CORE_PLAY_ResetValue (0x00000000UL)  /*!< Reset value of PLAY register.                                        */

        /* PLAY @Bits 0..31 : Trigger the frame generation process */
        #define DISPC_CORE_PLAY_PLAY_Pos (0UL)             /*!< Position of PLAY field.                                              */
        #define DISPC_CORE_PLAY_PLAY_Msk (0xFFFFFFFFUL << DISPC_CORE_PLAY_PLAY_Pos) /*!< Bit mask of PLAY field.                     */


        /* DISPC_CORE_FRONTPORCHXY: Specifies the X and Y dimensions for the Front Porch. */
        #define DISPC_CORE_FRONTPORCHXY_ResetValue (0x00000000UL) /*!< Reset value of FRONTPORCHXY register.                         */

        /* FRONTPORCHY @Bits 0..15 : Specify the number of lines for the front porch Y dimension */
        #define DISPC_CORE_FRONTPORCHXY_FRONTPORCHY_Pos (0UL) /*!< Position of FRONTPORCHY field.                                    */
        #define DISPC_CORE_FRONTPORCHXY_FRONTPORCHY_Msk (0xFFFFUL << DISPC_CORE_FRONTPORCHXY_FRONTPORCHY_Pos) /*!< Bit mask of
                                                                                    FRONTPORCHY field.*/

        /* FRONTPORCHX @Bits 16..31 : Specify the pixel clock cycles for the front porch X dimension */
        #define DISPC_CORE_FRONTPORCHXY_FRONTPORCHX_Pos (16UL) /*!< Position of FRONTPORCHX field.                                   */
        #define DISPC_CORE_FRONTPORCHXY_FRONTPORCHX_Msk (0xFFFFUL << DISPC_CORE_FRONTPORCHXY_FRONTPORCHX_Pos) /*!< Bit mask of
                                                                                    FRONTPORCHX field.*/


        /* DISPC_CORE_BLANKINGXY: Specifies the X and Y dimensions for the Blanking Period. */
        #define DISPC_CORE_BLANKINGXY_ResetValue (0x00000000UL) /*!< Reset value of BLANKINGXY register.                             */

        /* BLANKINGY @Bits 0..15 : Specify the VSYNC lines for the Y dimension blanking period */
        #define DISPC_CORE_BLANKINGXY_BLANKINGY_Pos (0UL)  /*!< Position of BLANKINGY field.                                         */
        #define DISPC_CORE_BLANKINGXY_BLANKINGY_Msk (0xFFFFUL << DISPC_CORE_BLANKINGXY_BLANKINGY_Pos) /*!< Bit mask of BLANKINGY
                                                                                    field.*/

        /* BLANKINGX @Bits 16..31 : Specify the HSYNC pulse length for the X dimension blanking period */
        #define DISPC_CORE_BLANKINGXY_BLANKINGX_Pos (16UL) /*!< Position of BLANKINGX field.                                         */
        #define DISPC_CORE_BLANKINGXY_BLANKINGX_Msk (0xFFFFUL << DISPC_CORE_BLANKINGXY_BLANKINGX_Pos) /*!< Bit mask of BLANKINGX
                                                                                    field.*/


        /* DISPC_CORE_BACKPORCHXY: Specifies the X and Y dimensions for the Back Porch. */
        #define DISPC_CORE_BACKPORCHXY_ResetValue (0x00000000UL) /*!< Reset value of BACKPORCHXY register.                           */

        /* BACKPORCHY @Bits 0..15 : Specify the number of lines for the front porch Y dimension */
        #define DISPC_CORE_BACKPORCHXY_BACKPORCHY_Pos (0UL) /*!< Position of BACKPORCHY field.                                       */
        #define DISPC_CORE_BACKPORCHXY_BACKPORCHY_Msk (0xFFFFUL << DISPC_CORE_BACKPORCHXY_BACKPORCHY_Pos) /*!< Bit mask of BACKPORCHY
                                                                                    field.*/

        /* BACKPORCHX @Bits 16..31 : Specify the pixel clock cycles for the back porch X dimension */
        #define DISPC_CORE_BACKPORCHXY_BACKPORCHX_Pos (16UL) /*!< Position of BACKPORCHX field.                                      */
        #define DISPC_CORE_BACKPORCHXY_BACKPORCHX_Msk (0xFFFFUL << DISPC_CORE_BACKPORCHXY_BACKPORCHX_Pos) /*!< Bit mask of BACKPORCHX
                                                                                    field.*/


        /* DISPC_CORE_CURSORXY: Specifies the cursors start X and Y coordinates. */
        #define DISPC_CORE_CURSORXY_ResetValue (0x00000000UL) /*!< Reset value of CURSORXY register.                                 */

        /* CURSORY @Bits 0..15 : Specify cursors Y dimension */
        #define DISPC_CORE_CURSORXY_CURSORY_Pos (0UL)      /*!< Position of CURSORY field.                                           */
        #define DISPC_CORE_CURSORXY_CURSORY_Msk (0xFFFFUL << DISPC_CORE_CURSORXY_CURSORY_Pos) /*!< Bit mask of CURSORY field.        */

        /* CURSORX @Bits 16..31 : Specify cursors X dimension */
        #define DISPC_CORE_CURSORXY_CURSORX_Pos (16UL)     /*!< Position of CURSORX field.                                           */
        #define DISPC_CORE_CURSORXY_CURSORX_Msk (0xFFFFUL << DISPC_CORE_CURSORXY_CURSORX_Pos) /*!< Bit mask of CURSORX field.        */


        /* DISPC_CORE_STARTXY: Specifies the start position of the very first frame. */
        #define DISPC_CORE_STARTXY_ResetValue (0x00000000UL) /*!< Reset value of STARTXY register.                                   */

        /* STARTY @Bits 0..15 : Specify framess Y dimension */
        #define DISPC_CORE_STARTXY_STARTY_Pos (0UL)        /*!< Position of STARTY field.                                            */
        #define DISPC_CORE_STARTXY_STARTY_Msk (0xFFFFUL << DISPC_CORE_STARTXY_STARTY_Pos) /*!< Bit mask of STARTY field.             */

        /* STARTX @Bits 16..31 : Specify framess X dimension */
        #define DISPC_CORE_STARTXY_STARTX_Pos (16UL)       /*!< Position of STARTX field.                                            */
        #define DISPC_CORE_STARTXY_STARTX_Msk (0xFFFFUL << DISPC_CORE_STARTXY_STARTX_Pos) /*!< Bit mask of STARTX field.             */


        /* DISPC_CORE_DBIBCFG: Register for the configuration DBI Type-B interface */
        #define DISPC_CORE_DBIBCFG_ResetValue (0x00000000UL) /*!< Reset value of DBIBCFG register.                                   */

        /* DBIBCFGPOS00LEN03 @Bits 0..2 : Set the color format for DBI Type-B interface */
        #define DISPC_CORE_DBIBCFG_DBIBCFGPOS00LEN03_Pos (0UL) /*!< Position of DBIBCFGPOS00LEN03 field.                             */
        #define DISPC_CORE_DBIBCFG_DBIBCFGPOS00LEN03_Msk (0x7UL << DISPC_CORE_DBIBCFG_DBIBCFGPOS00LEN03_Pos) /*!< Bit mask of
                                                                                    DBIBCFGPOS00LEN03 field.*/

        /* DBIBCFGPOS03LEN03 @Bits 3..5 : Set the data order of the 8-bit data word: */
        #define DISPC_CORE_DBIBCFG_DBIBCFGPOS03LEN03_Pos (3UL) /*!< Position of DBIBCFGPOS03LEN03 field.                             */
        #define DISPC_CORE_DBIBCFG_DBIBCFGPOS03LEN03_Msk (0x7UL << DISPC_CORE_DBIBCFG_DBIBCFGPOS03LEN03_Pos) /*!< Bit mask of
                                                                                    DBIBCFGPOS03LEN03 field.*/

        /* DBIBCFGPOS06LEN03 @Bits 6..8 : Set DBI Type-B interface width (8, 9 or 16 bits) and the serial interface: */
        #define DISPC_CORE_DBIBCFG_DBIBCFGPOS06LEN03_Pos (6UL) /*!< Position of DBIBCFGPOS06LEN03 field.                             */
        #define DISPC_CORE_DBIBCFG_DBIBCFGPOS06LEN03_Msk (0x7UL << DISPC_CORE_DBIBCFG_DBIBCFGPOS06LEN03_Pos) /*!< Bit mask of
                                                                                    DBIBCFGPOS06LEN03 field.*/

        /* DBIBCFGPOS09LEN02 @Bits 9..10 : Set mode of operation SPI/DualSPI/QuadSPI/QuadSPI DDR */
        #define DISPC_CORE_DBIBCFG_DBIBCFGPOS09LEN02_Pos (9UL) /*!< Position of DBIBCFGPOS09LEN02 field.                             */
        #define DISPC_CORE_DBIBCFG_DBIBCFGPOS09LEN02_Msk (0x3UL << DISPC_CORE_DBIBCFG_DBIBCFGPOS09LEN02_Pos) /*!< Bit mask of
                                                                                    DBIBCFGPOS09LEN02 field.*/

        /* DBIBCFGPOS11LEN01 @Bit 11 : When set to 1, Enables DualSPI sub-pixel transaction */
        #define DISPC_CORE_DBIBCFG_DBIBCFGPOS11LEN01_Pos (11UL) /*!< Position of DBIBCFGPOS11LEN01 field.                            */
        #define DISPC_CORE_DBIBCFG_DBIBCFGPOS11LEN01_Msk (0x1UL << DISPC_CORE_DBIBCFG_DBIBCFGPOS11LEN01_Pos) /*!< Bit mask of
                                                                                    DBIBCFGPOS11LEN01 field.*/

        /* DBIBCFGPOS12LEN01 @Bit 12 : When set to 1, enables the horizontal blanking */
        #define DISPC_CORE_DBIBCFG_DBIBCFGPOS12LEN01_Pos (12UL) /*!< Position of DBIBCFGPOS12LEN01 field.                            */
        #define DISPC_CORE_DBIBCFG_DBIBCFGPOS12LEN01_Msk (0x1UL << DISPC_CORE_DBIBCFG_DBIBCFGPOS12LEN01_Pos) /*!< Bit mask of
                                                                                    DBIBCFGPOS12LEN01 field.*/

        /* DBIBCFGPOS13LEN01 @Bit 13 : When set to 1, enables the external control */
        #define DISPC_CORE_DBIBCFG_DBIBCFGPOS13LEN01_Pos (13UL) /*!< Position of DBIBCFGPOS13LEN01 field.                            */
        #define DISPC_CORE_DBIBCFG_DBIBCFGPOS13LEN01_Msk (0x1UL << DISPC_CORE_DBIBCFG_DBIBCFGPOS13LEN01_Pos) /*!< Bit mask of
                                                                                    DBIBCFGPOS13LEN01 field.*/

        /* DBIBCFGPOS14LEN01 @Bit 14 : When set to 1, expose pixel generation clock on the DBIB_CLK */
        #define DISPC_CORE_DBIBCFG_DBIBCFGPOS14LEN01_Pos (14UL) /*!< Position of DBIBCFGPOS14LEN01 field.                            */
        #define DISPC_CORE_DBIBCFG_DBIBCFGPOS14LEN01_Msk (0x1UL << DISPC_CORE_DBIBCFG_DBIBCFGPOS14LEN01_Pos) /*!< Bit mask of
                                                                                    DBIBCFGPOS14LEN01 field.*/

        /* DBIBCFGPOS15LEN01 @Bit 15 : When set to 1, two-byte address is sent with each horizontal line (SPI) */
        #define DISPC_CORE_DBIBCFG_DBIBCFGPOS15LEN01_Pos (15UL) /*!< Position of DBIBCFGPOS15LEN01 field.                            */
        #define DISPC_CORE_DBIBCFG_DBIBCFGPOS15LEN01_Msk (0x1UL << DISPC_CORE_DBIBCFG_DBIBCFGPOS15LEN01_Pos) /*!< Bit mask of
                                                                                    DBIBCFGPOS15LEN01 field.*/

        /* DBIBCFGPOS16LEN01 @Bit 16 : When set to 1, inverts the bit-order of the horizontal line address */
        #define DISPC_CORE_DBIBCFG_DBIBCFGPOS16LEN01_Pos (16UL) /*!< Position of DBIBCFGPOS16LEN01 field.                            */
        #define DISPC_CORE_DBIBCFG_DBIBCFGPOS16LEN01_Msk (0x1UL << DISPC_CORE_DBIBCFG_DBIBCFGPOS16LEN01_Pos) /*!< Bit mask of
                                                                                    DBIBCFGPOS16LEN01 field.*/

        /* DBIBCFGPOS17LEN01 @Bit 17 : When set to 1, command data are used as header of each line */
        #define DISPC_CORE_DBIBCFG_DBIBCFGPOS17LEN01_Pos (17UL) /*!< Position of DBIBCFGPOS17LEN01 field.                            */
        #define DISPC_CORE_DBIBCFG_DBIBCFGPOS17LEN01_Msk (0x1UL << DISPC_CORE_DBIBCFG_DBIBCFGPOS17LEN01_Pos) /*!< Bit mask of
                                                                                    DBIBCFGPOS17LEN01 field.*/

        /* DBIBCFGPOS18LEN01 @Bit 18 : Revered */
        #define DISPC_CORE_DBIBCFG_DBIBCFGPOS18LEN01_Pos (18UL) /*!< Position of DBIBCFGPOS18LEN01 field.                            */
        #define DISPC_CORE_DBIBCFG_DBIBCFGPOS18LEN01_Msk (0x1UL << DISPC_CORE_DBIBCFG_DBIBCFGPOS18LEN01_Pos) /*!< Bit mask of
                                                                                    DBIBCFGPOS18LEN01 field.*/

        /* DBIBCFGPOS19LEN01 @Bit 19 : Sets SPI Clock Polarity */
        #define DISPC_CORE_DBIBCFG_DBIBCFGPOS19LEN01_Pos (19UL) /*!< Position of DBIBCFGPOS19LEN01 field.                            */
        #define DISPC_CORE_DBIBCFG_DBIBCFGPOS19LEN01_Msk (0x1UL << DISPC_CORE_DBIBCFG_DBIBCFGPOS19LEN01_Pos) /*!< Bit mask of
                                                                                    DBIBCFGPOS19LEN01 field.*/

        /* DBIBCFGPOS20LEN01 @Bit 20 : Sets SPI Clock Phase */
        #define DISPC_CORE_DBIBCFG_DBIBCFGPOS20LEN01_Pos (20UL) /*!< Position of DBIBCFGPOS20LEN01 field.                            */
        #define DISPC_CORE_DBIBCFG_DBIBCFGPOS20LEN01_Msk (0x1UL << DISPC_CORE_DBIBCFG_DBIBCFGPOS20LEN01_Pos) /*!< Bit mask of
                                                                                    DBIBCFGPOS20LEN01 field.*/

        /* DBIBCFGPOS21LEN01 @Bit 21 : When set to 1, Enables back-pressure for DBI Type-B interface */
        #define DISPC_CORE_DBIBCFG_DBIBCFGPOS21LEN01_Pos (21UL) /*!< Position of DBIBCFGPOS21LEN01 field.                            */
        #define DISPC_CORE_DBIBCFG_DBIBCFGPOS21LEN01_Msk (0x1UL << DISPC_CORE_DBIBCFG_DBIBCFGPOS21LEN01_Pos) /*!< Bit mask of
                                                                                    DBIBCFGPOS21LEN01 field.*/

        /* DBIBCFGPOS22LEN01 @Bit 22 : When set to 1, SPI 4-wire interface is enabled */
        #define DISPC_CORE_DBIBCFG_DBIBCFGPOS22LEN01_Pos (22UL) /*!< Position of DBIBCFGPOS22LEN01 field.                            */
        #define DISPC_CORE_DBIBCFG_DBIBCFGPOS22LEN01_Msk (0x1UL << DISPC_CORE_DBIBCFG_DBIBCFGPOS22LEN01_Pos) /*!< Bit mask of
                                                                                    DBIBCFGPOS22LEN01 field.*/

        /* DBIBCFGPOS23LEN01 @Bit 23 : When set to 1, SPI 3-wire interface is enabled */
        #define DISPC_CORE_DBIBCFG_DBIBCFGPOS23LEN01_Pos (23UL) /*!< Position of DBIBCFGPOS23LEN01 field.                            */
        #define DISPC_CORE_DBIBCFG_DBIBCFGPOS23LEN01_Msk (0x1UL << DISPC_CORE_DBIBCFG_DBIBCFGPOS23LEN01_Pos) /*!< Bit mask of
                                                                                    DBIBCFGPOS23LEN01 field.*/

        /* DBIBCFGPOS24LEN01 @Bit 24 : Invert Pixel Order */
        #define DISPC_CORE_DBIBCFG_DBIBCFGPOS24LEN01_Pos (24UL) /*!< Position of DBIBCFGPOS24LEN01 field.                            */
        #define DISPC_CORE_DBIBCFG_DBIBCFGPOS24LEN01_Msk (0x1UL << DISPC_CORE_DBIBCFG_DBIBCFGPOS24LEN01_Pos) /*!< Bit mask of
                                                                                    DBIBCFGPOS24LEN01 field.*/

        /* DBIBCFGPOS25LEN01 @Bit 25 : Drives DBIB_RESX output signal of DBI Type-B interface */
        #define DISPC_CORE_DBIBCFG_DBIBCFGPOS25LEN01_Pos (25UL) /*!< Position of DBIBCFGPOS25LEN01 field.                            */
        #define DISPC_CORE_DBIBCFG_DBIBCFGPOS25LEN01_Msk (0x1UL << DISPC_CORE_DBIBCFG_DBIBCFGPOS25LEN01_Pos) /*!< Bit mask of
                                                                                    DBIBCFGPOS25LEN01 field.*/

        /* DBIBCFGPOS26LEN01 @Bit 26 : When set to 1, force DBI Type-B interface to idle state. */
        #define DISPC_CORE_DBIBCFG_DBIBCFGPOS26LEN01_Pos (26UL) /*!< Position of DBIBCFGPOS26LEN01 field.                            */
        #define DISPC_CORE_DBIBCFG_DBIBCFGPOS26LEN01_Msk (0x1UL << DISPC_CORE_DBIBCFG_DBIBCFGPOS26LEN01_Pos) /*!< Bit mask of
                                                                                    DBIBCFGPOS26LEN01 field.*/

        /* DBIBCFGPOS27LEN01 @Bit 27 : When set to 1, enables the usage of SPI_DC wire as SPI_SD1 */
        #define DISPC_CORE_DBIBCFG_DBIBCFGPOS27LEN01_Pos (27UL) /*!< Position of DBIBCFGPOS27LEN01 field.                            */
        #define DISPC_CORE_DBIBCFG_DBIBCFGPOS27LEN01_Msk (0x1UL << DISPC_CORE_DBIBCFG_DBIBCFGPOS27LEN01_Pos) /*!< Bit mask of
                                                                                    DBIBCFGPOS27LEN01 field.*/

        /* DBIBCFGPOS28LEN01 @Bit 28 : When set to 1, the DBIB_TE signal is disabled */
        #define DISPC_CORE_DBIBCFG_DBIBCFGPOS28LEN01_Pos (28UL) /*!< Position of DBIBCFGPOS28LEN01 field.                            */
        #define DISPC_CORE_DBIBCFG_DBIBCFGPOS28LEN01_Msk (0x1UL << DISPC_CORE_DBIBCFG_DBIBCFGPOS28LEN01_Pos) /*!< Bit mask of
                                                                                    DBIBCFGPOS28LEN01 field.*/

        /* DBIBCFGPOS29LEN01 @Bit 29 : Sets the value of DBIB_CSX signal: */
        #define DISPC_CORE_DBIBCFG_DBIBCFGPOS29LEN01_Pos (29UL) /*!< Position of DBIBCFGPOS29LEN01 field.                            */
        #define DISPC_CORE_DBIBCFG_DBIBCFGPOS29LEN01_Msk (0x1UL << DISPC_CORE_DBIBCFG_DBIBCFGPOS29LEN01_Pos) /*!< Bit mask of
                                                                                    DBIBCFGPOS29LEN01 field.*/

        /* DBIBCFGPOS30LEN01 @Bit 30 : When set to 1, the value of the CSX signal of the DBI Type-B interface */
        #define DISPC_CORE_DBIBCFG_DBIBCFGPOS30LEN01_Pos (30UL) /*!< Position of DBIBCFGPOS30LEN01 field.                            */
        #define DISPC_CORE_DBIBCFG_DBIBCFGPOS30LEN01_Msk (0x1UL << DISPC_CORE_DBIBCFG_DBIBCFGPOS30LEN01_Pos) /*!< Bit mask of
                                                                                    DBIBCFGPOS30LEN01 field.*/

        /* DBIBCFGPOS31LEN01 @Bit 31 : When set to 1, the DBI Type-B interface is activated */
        #define DISPC_CORE_DBIBCFG_DBIBCFGPOS31LEN01_Pos (31UL) /*!< Position of DBIBCFGPOS31LEN01 field.                            */
        #define DISPC_CORE_DBIBCFG_DBIBCFGPOS31LEN01_Msk (0x1UL << DISPC_CORE_DBIBCFG_DBIBCFGPOS31LEN01_Pos) /*!< Bit mask of
                                                                                    DBIBCFGPOS31LEN01 field.*/


        /* DISPC_CORE_GPIO: General Purpose register. */
        #define DISPC_CORE_GPIO_ResetValue (0x00004000UL)  /*!< Reset value of GPIO register.                                        */

        /* GPIOPOS0LEN13 @Bits 0..12 : Read/Write from/to GPIO pins */
        #define DISPC_CORE_GPIO_GPIOPOS0LEN13_Pos (0UL)    /*!< Position of GPIOPOS0LEN13 field.                                     */
        #define DISPC_CORE_GPIO_GPIOPOS0LEN13_Msk (0x1FFFUL << DISPC_CORE_GPIO_GPIOPOS0LEN13_Pos) /*!< Bit mask of GPIOPOS0LEN13
                                                                                    field.*/

        /* GPIOPOS13LEN02 @Bits 13..14 : Scaler advance */
        #define DISPC_CORE_GPIO_GPIOPOS13LEN02_Pos (13UL)  /*!< Position of GPIOPOS13LEN02 field.                                    */
        #define DISPC_CORE_GPIO_GPIOPOS13LEN02_Msk (0x3UL << DISPC_CORE_GPIO_GPIOPOS13LEN02_Pos) /*!< Bit mask of GPIOPOS13LEN02
                                                                                    field.*/

        /* GPIOPOS15LEN01 @Bit 15 : Assert DPI-2 Shutdown Signal */
        #define DISPC_CORE_GPIO_GPIOPOS15LEN01_Pos (15UL)  /*!< Position of GPIOPOS15LEN01 field.                                    */
        #define DISPC_CORE_GPIO_GPIOPOS15LEN01_Msk (0x1UL << DISPC_CORE_GPIO_GPIOPOS15LEN01_Pos) /*!< Bit mask of GPIOPOS15LEN01
                                                                                    field.*/

        /* GPIOPOS16LEN01 @Bit 16 : Assert DPI-2 Color Mode Signal */
        #define DISPC_CORE_GPIO_GPIOPOS16LEN01_Pos (16UL)  /*!< Position of GPIOPOS16LEN01 field.                                    */
        #define DISPC_CORE_GPIO_GPIOPOS16LEN01_Msk (0x1UL << DISPC_CORE_GPIO_GPIOPOS16LEN01_Pos) /*!< Bit mask of GPIOPOS16LEN01
                                                                                    field.*/

        /* GPIOPOS17LEN15 @Bits 17..31 : Revered */
        #define DISPC_CORE_GPIO_GPIOPOS17LEN15_Pos (17UL)  /*!< Position of GPIOPOS17LEN15 field.                                    */
        #define DISPC_CORE_GPIO_GPIOPOS17LEN15_Msk (0x7FFFUL << DISPC_CORE_GPIO_GPIOPOS17LEN15_Pos) /*!< Bit mask of GPIOPOS17LEN15
                                                                                    field.*/


        /* DISPC_CORE_LAYER0MODE: Activate and set-up layer 0 */
        #define DISPC_CORE_LAYER0MODE_ResetValue (0x00000000UL) /*!< Reset value of LAYER0MODE register.                             */

        /* LAYER0COLORMODE @Bits 0..4 : Color mode for layer 0. */
        #define DISPC_CORE_LAYER0MODE_LAYER0COLORMODE_Pos (0UL) /*!< Position of LAYER0COLORMODE field.                              */
        #define DISPC_CORE_LAYER0MODE_LAYER0COLORMODE_Msk (0x1FUL << DISPC_CORE_LAYER0MODE_LAYER0COLORMODE_Pos) /*!< Bit mask of
                                                                                    LAYER0COLORMODE field.*/

        /* LAYER0MODELAYERREGISTERPROTECT @Bit 5 : Enable Register Protection for display layer registers. */
        #define DISPC_CORE_LAYER0MODE_LAYER0MODELAYERREGISTERPROTECT_Pos (5UL) /*!< Position of LAYER0MODELAYERREGISTERPROTECT field.*/
        #define DISPC_CORE_LAYER0MODE_LAYER0MODELAYERREGISTERPROTECT_Msk (0x1UL << DISPC_CORE_LAYER0MODE_LAYER0MODELAYERREGISTERPROTECT_Pos)
                                                                                    /*!< Bit mask of LAYER0MODELAYERREGISTERPROTECT
                                                                                    field.*/

        /* LAYER0MODEPOS05LEN02 @Bits 6..7 : Revered */
        #define DISPC_CORE_LAYER0MODE_LAYER0MODEPOS05LEN02_Pos (6UL) /*!< Position of LAYER0MODEPOS05LEN02 field.                    */
        #define DISPC_CORE_LAYER0MODE_LAYER0MODEPOS05LEN02_Msk (0x3UL << DISPC_CORE_LAYER0MODE_LAYER0MODEPOS05LEN02_Pos) /*!< Bit mask
                                                                                    of LAYER0MODEPOS05LEN02 field.*/

        /* LAYER0SRCBLD @Bits 8..11 : Source blending function for layer 0. */
        #define DISPC_CORE_LAYER0MODE_LAYER0SRCBLD_Pos (8UL) /*!< Position of LAYER0SRCBLD field.                                    */
        #define DISPC_CORE_LAYER0MODE_LAYER0SRCBLD_Msk (0xFUL << DISPC_CORE_LAYER0MODE_LAYER0SRCBLD_Pos) /*!< Bit mask of LAYER0SRCBLD
                                                                                    field.*/

        /* LAYER0DSTBLD @Bits 12..15 : Destination blending function for layer 0. */
        #define DISPC_CORE_LAYER0MODE_LAYER0DSTBLD_Pos (12UL) /*!< Position of LAYER0DSTBLD field.                                   */
        #define DISPC_CORE_LAYER0MODE_LAYER0DSTBLD_Msk (0xFUL << DISPC_CORE_LAYER0MODE_LAYER0DSTBLD_Pos) /*!< Bit mask of LAYER0DSTBLD
                                                                                    field.*/

        /* LAYER0GLBALPHA @Bits 16..23 : Alpha layer global value (0x00-0xFF range) */
        #define DISPC_CORE_LAYER0MODE_LAYER0GLBALPHA_Pos (16UL) /*!< Position of LAYER0GLBALPHA field.                               */
        #define DISPC_CORE_LAYER0MODE_LAYER0GLBALPHA_Msk (0xFFUL << DISPC_CORE_LAYER0MODE_LAYER0GLBALPHA_Pos) /*!< Bit mask of
                                                                                    LAYER0GLBALPHA field.*/

        /* LAYER0MODEPOS24LEN02 @Bits 24..25 : Revered */
        #define DISPC_CORE_LAYER0MODE_LAYER0MODEPOS24LEN02_Pos (24UL) /*!< Position of LAYER0MODEPOS24LEN02 field.                   */
        #define DISPC_CORE_LAYER0MODE_LAYER0MODEPOS24LEN02_Msk (0x3UL << DISPC_CORE_LAYER0MODE_LAYER0MODEPOS24LEN02_Pos) /*!< Bit mask
                                                                                    of LAYER0MODEPOS24LEN02 field.*/

        /* LAYER0GAMMAEN @Bit 26 : When set to 1, Gamma Look Up Table is enabled */
        #define DISPC_CORE_LAYER0MODE_LAYER0GAMMAEN_Pos (26UL) /*!< Position of LAYER0GAMMAEN field.                                 */
        #define DISPC_CORE_LAYER0MODE_LAYER0GAMMAEN_Msk (0x1UL << DISPC_CORE_LAYER0MODE_LAYER0GAMMAEN_Pos) /*!< Bit mask of
                                                                                    LAYER0GAMMAEN field.*/

        /* LAYER0HLOCK @Bit 27 : When set to 1, HLOCK signal on AHB DMAs is asserted */
        #define DISPC_CORE_LAYER0MODE_LAYER0HLOCK_Pos (27UL) /*!< Position of LAYER0HLOCK field.                                     */
        #define DISPC_CORE_LAYER0MODE_LAYER0HLOCK_Msk (0x1UL << DISPC_CORE_LAYER0MODE_LAYER0HLOCK_Pos) /*!< Bit mask of LAYER0HLOCK
                                                                                    field.*/

        /* LAYER0PREMULT @Bit 28 : When set to 1, premultiply image alpha is enabled */
        #define DISPC_CORE_LAYER0MODE_LAYER0PREMULT_Pos (28UL) /*!< Position of LAYER0PREMULT field.                                 */
        #define DISPC_CORE_LAYER0MODE_LAYER0PREMULT_Msk (0x1UL << DISPC_CORE_LAYER0MODE_LAYER0PREMULT_Pos) /*!< Bit mask of
                                                                                    LAYER0PREMULT field.*/

        /* LAYER0BLEN @Bit 29 : When set to 0, bilinear filtering is enabled. */
        #define DISPC_CORE_LAYER0MODE_LAYER0BLEN_Pos (29UL) /*!< Position of LAYER0BLEN field.                                       */
        #define DISPC_CORE_LAYER0MODE_LAYER0BLEN_Msk (0x1UL << DISPC_CORE_LAYER0MODE_LAYER0BLEN_Pos) /*!< Bit mask of LAYER0BLEN
                                                                                    field.*/

        /* LAYER0FORCEALPHA @Bit 30 : When set to 1, force alpha with global alpha */
        #define DISPC_CORE_LAYER0MODE_LAYER0FORCEALPHA_Pos (30UL) /*!< Position of LAYER0FORCEALPHA field.                           */
        #define DISPC_CORE_LAYER0MODE_LAYER0FORCEALPHA_Msk (0x1UL << DISPC_CORE_LAYER0MODE_LAYER0FORCEALPHA_Pos) /*!< Bit mask of
                                                                                    LAYER0FORCEALPHA field.*/

        /* LAYER0ENABLE @Bit 31 : When set to 1, layer n is enabled */
        #define DISPC_CORE_LAYER0MODE_LAYER0ENABLE_Pos (31UL) /*!< Position of LAYER0ENABLE field.                                   */
        #define DISPC_CORE_LAYER0MODE_LAYER0ENABLE_Msk (0x1UL << DISPC_CORE_LAYER0MODE_LAYER0ENABLE_Pos) /*!< Bit mask of LAYER0ENABLE
                                                                                    field.*/


        /* DISPC_CORE_LAYER0STARTXY: X and Y start dimensions of layer 0 */
        #define DISPC_CORE_LAYER0STARTXY_ResetValue (0x00000000UL) /*!< Reset value of LAYER0STARTXY register.                       */

        /* LAYER0STARTY @Bits 0..15 : Specify the pixel offset of the starting Y dimension of layer 0 */
        #define DISPC_CORE_LAYER0STARTXY_LAYER0STARTY_Pos (0UL) /*!< Position of LAYER0STARTY field.                                 */
        #define DISPC_CORE_LAYER0STARTXY_LAYER0STARTY_Msk (0xFFFFUL << DISPC_CORE_LAYER0STARTXY_LAYER0STARTY_Pos) /*!< Bit mask of
                                                                                    LAYER0STARTY field.*/

        /* LAYER0STARTX @Bits 16..31 : Specify the pixel offset of the starting X dimension of layer 0 */
        #define DISPC_CORE_LAYER0STARTXY_LAYER0STARTX_Pos (16UL) /*!< Position of LAYER0STARTX field.                                */
        #define DISPC_CORE_LAYER0STARTXY_LAYER0STARTX_Msk (0xFFFFUL << DISPC_CORE_LAYER0STARTXY_LAYER0STARTX_Pos) /*!< Bit mask of
                                                                                    LAYER0STARTX field.*/


        /* DISPC_CORE_LAYER0SIZEXY: X and Y size of layer 0 */
        #define DISPC_CORE_LAYER0SIZEXY_ResetValue (0x00000000UL) /*!< Reset value of LAYER0SIZEXY register.                         */

        /* LAYER0SIZEY @Bits 0..15 : Specify the pixel size of the layer 0 in the Y dimension */
        #define DISPC_CORE_LAYER0SIZEXY_LAYER0SIZEY_Pos (0UL) /*!< Position of LAYER0SIZEY field.                                    */
        #define DISPC_CORE_LAYER0SIZEXY_LAYER0SIZEY_Msk (0xFFFFUL << DISPC_CORE_LAYER0SIZEXY_LAYER0SIZEY_Pos) /*!< Bit mask of
                                                                                    LAYER0SIZEY field.*/

        /* LAYER0SIZEX @Bits 16..31 : Specify the pixel size of the layer 0 in the X dimension */
        #define DISPC_CORE_LAYER0SIZEXY_LAYER0SIZEX_Pos (16UL) /*!< Position of LAYER0SIZEX field.                                   */
        #define DISPC_CORE_LAYER0SIZEXY_LAYER0SIZEX_Msk (0xFFFFUL << DISPC_CORE_LAYER0SIZEXY_LAYER0SIZEX_Pos) /*!< Bit mask of
                                                                                    LAYER0SIZEX field.*/


        /* DISPC_CORE_LAYER0BASEADDR: The start address of the framebuffer to be accessed by layer 0 */
        #define DISPC_CORE_LAYER0BASEADDR_ResetValue (0x00000000UL) /*!< Reset value of LAYER0BASEADDR register.                     */

        /* LAYER0BASEADDR @Bits 0..31 : Specify the start address of framebuffer for layer 0. */
        #define DISPC_CORE_LAYER0BASEADDR_LAYER0BASEADDR_Pos (0UL) /*!< Position of LAYER0BASEADDR field.                            */
        #define DISPC_CORE_LAYER0BASEADDR_LAYER0BASEADDR_Msk (0xFFFFFFFFUL << DISPC_CORE_LAYER0BASEADDR_LAYER0BASEADDR_Pos) /*!< Bit
                                                                                    mask of LAYER0BASEADDR field.*/


        /* DISPC_CORE_LAYER0STRIDE: Specify the stride and the AXI bus burst of layer 0 */
        #define DISPC_CORE_LAYER0STRIDE_ResetValue (0x00000000UL) /*!< Reset value of LAYER0STRIDE register.                         */

        /* LAYER0STRIDE @Bits 0..15 : Specify the stride, which is the distance from line to line in bytes for layer 0 memory */
        #define DISPC_CORE_LAYER0STRIDE_LAYER0STRIDE_Pos (0UL) /*!< Position of LAYER0STRIDE field.                                  */
        #define DISPC_CORE_LAYER0STRIDE_LAYER0STRIDE_Msk (0xFFFFUL << DISPC_CORE_LAYER0STRIDE_LAYER0STRIDE_Pos) /*!< Bit mask of
                                                                                    LAYER0STRIDE field.*/

        /* LAYER0AXIBEAT @Bits 16..18 : Specify the AXI-beats per burst in layer 0 */
        #define DISPC_CORE_LAYER0STRIDE_LAYER0AXIBEAT_Pos (16UL) /*!< Position of LAYER0AXIBEAT field.                               */
        #define DISPC_CORE_LAYER0STRIDE_LAYER0AXIBEAT_Msk (0x7UL << DISPC_CORE_LAYER0STRIDE_LAYER0AXIBEAT_Pos) /*!< Bit mask of
                                                                                    LAYER0AXIBEAT field.*/

        /* LAYER0AXITHRESHOLD @Bits 19..20 : Specify the AXI fifo threshold burst start in layer 0 */
        #define DISPC_CORE_LAYER0STRIDE_LAYER0AXITHRESHOLD_Pos (19UL) /*!< Position of LAYER0AXITHRESHOLD field.                     */
        #define DISPC_CORE_LAYER0STRIDE_LAYER0AXITHRESHOLD_Msk (0x3UL << DISPC_CORE_LAYER0STRIDE_LAYER0AXITHRESHOLD_Pos) /*!< Bit mask
                                                                                    of LAYER0AXITHRESHOLD field.*/

        /* LAYER0STRIDEPOS21LEN4 @Bits 21..24 : Revered */
        #define DISPC_CORE_LAYER0STRIDE_LAYER0STRIDEPOS21LEN4_Pos (21UL) /*!< Position of LAYER0STRIDEPOS21LEN4 field.               */
        #define DISPC_CORE_LAYER0STRIDE_LAYER0STRIDEPOS21LEN4_Msk (0xFUL << DISPC_CORE_LAYER0STRIDE_LAYER0STRIDEPOS21LEN4_Pos) /*!<
                                                                                    Bit mask of LAYER0STRIDEPOS21LEN4 field.*/

        /* LAYER0DMATHRESHOLD @Bits 25..27 : Specify the DMA prefetch Level in layer 0 */
        #define DISPC_CORE_LAYER0STRIDE_LAYER0DMATHRESHOLD_Pos (25UL) /*!< Position of LAYER0DMATHRESHOLD field.                     */
        #define DISPC_CORE_LAYER0STRIDE_LAYER0DMATHRESHOLD_Msk (0x7UL << DISPC_CORE_LAYER0STRIDE_LAYER0DMATHRESHOLD_Pos) /*!< Bit mask
                                                                                    of LAYER0DMATHRESHOLD field.*/

        /* LAYER0STRIDEPOS28LEN4 @Bits 28..31 : Revered */
        #define DISPC_CORE_LAYER0STRIDE_LAYER0STRIDEPOS28LEN4_Pos (28UL) /*!< Position of LAYER0STRIDEPOS28LEN4 field.               */
        #define DISPC_CORE_LAYER0STRIDE_LAYER0STRIDEPOS28LEN4_Msk (0xFUL << DISPC_CORE_LAYER0STRIDE_LAYER0STRIDEPOS28LEN4_Pos) /*!<
                                                                                    Bit mask of LAYER0STRIDEPOS28LEN4 field.*/


        /* DISPC_CORE_LAYER0RESXY: X and Y start dimensions of layerX and Y dimensions for the resolution of layer 0. */
        #define DISPC_CORE_LAYER0RESXY_ResetValue (0x00000000UL) /*!< Reset value of LAYER0RESXY register.                           */

        /* LAYER0RESY @Bits 0..15 : Specify the layer 0 pixel resolution in the Y dimension */
        #define DISPC_CORE_LAYER0RESXY_LAYER0RESY_Pos (0UL) /*!< Position of LAYER0RESY field.                                       */
        #define DISPC_CORE_LAYER0RESXY_LAYER0RESY_Msk (0xFFFFUL << DISPC_CORE_LAYER0RESXY_LAYER0RESY_Pos) /*!< Bit mask of LAYER0RESY
                                                                                    field.*/

        /* LAYER0RESX @Bits 16..31 : Specify the layer 0 pixel resolution in the X dimension */
        #define DISPC_CORE_LAYER0RESXY_LAYER0RESX_Pos (16UL) /*!< Position of LAYER0RESX field.                                      */
        #define DISPC_CORE_LAYER0RESXY_LAYER0RESX_Msk (0xFFFFUL << DISPC_CORE_LAYER0RESXY_LAYER0RESX_Pos) /*!< Bit mask of LAYER0RESX
                                                                                    field.*/


        /* DISPC_CORE_LAYER1MODE: Activate and set-up layer 1 */
        #define DISPC_CORE_LAYER1MODE_ResetValue (0x00000000UL) /*!< Reset value of LAYER1MODE register.                             */

        /* LAYER1COLORMODE @Bits 0..4 : Color mode for layer 1. */
        #define DISPC_CORE_LAYER1MODE_LAYER1COLORMODE_Pos (0UL) /*!< Position of LAYER1COLORMODE field.                              */
        #define DISPC_CORE_LAYER1MODE_LAYER1COLORMODE_Msk (0x1FUL << DISPC_CORE_LAYER1MODE_LAYER1COLORMODE_Pos) /*!< Bit mask of
                                                                                    LAYER1COLORMODE field.*/

        /* LAYER1MODELAYERREGISTERPROTECT @Bit 5 : Enable Register Protection for display layer registers. */
        #define DISPC_CORE_LAYER1MODE_LAYER1MODELAYERREGISTERPROTECT_Pos (5UL) /*!< Position of LAYER1MODELAYERREGISTERPROTECT field.*/
        #define DISPC_CORE_LAYER1MODE_LAYER1MODELAYERREGISTERPROTECT_Msk (0x1UL << DISPC_CORE_LAYER1MODE_LAYER1MODELAYERREGISTERPROTECT_Pos)
                                                                                    /*!< Bit mask of LAYER1MODELAYERREGISTERPROTECT
                                                                                    field.*/

        /* LAYER1MODEPOS05LEN02 @Bits 6..7 : Revered */
        #define DISPC_CORE_LAYER1MODE_LAYER1MODEPOS05LEN02_Pos (6UL) /*!< Position of LAYER1MODEPOS05LEN02 field.                    */
        #define DISPC_CORE_LAYER1MODE_LAYER1MODEPOS05LEN02_Msk (0x3UL << DISPC_CORE_LAYER1MODE_LAYER1MODEPOS05LEN02_Pos) /*!< Bit mask
                                                                                    of LAYER1MODEPOS05LEN02 field.*/

        /* LAYER1SRCBLD @Bits 8..11 : Source blending function for layer 1. */
        #define DISPC_CORE_LAYER1MODE_LAYER1SRCBLD_Pos (8UL) /*!< Position of LAYER1SRCBLD field.                                    */
        #define DISPC_CORE_LAYER1MODE_LAYER1SRCBLD_Msk (0xFUL << DISPC_CORE_LAYER1MODE_LAYER1SRCBLD_Pos) /*!< Bit mask of LAYER1SRCBLD
                                                                                    field.*/

        /* LAYER1DSTBLD @Bits 12..15 : Destination blending function for layer 1. */
        #define DISPC_CORE_LAYER1MODE_LAYER1DSTBLD_Pos (12UL) /*!< Position of LAYER1DSTBLD field.                                   */
        #define DISPC_CORE_LAYER1MODE_LAYER1DSTBLD_Msk (0xFUL << DISPC_CORE_LAYER1MODE_LAYER1DSTBLD_Pos) /*!< Bit mask of LAYER1DSTBLD
                                                                                    field.*/

        /* LAYER1GLBALPHA @Bits 16..23 : Alpha layer global value (0x00-0xFF range) */
        #define DISPC_CORE_LAYER1MODE_LAYER1GLBALPHA_Pos (16UL) /*!< Position of LAYER1GLBALPHA field.                               */
        #define DISPC_CORE_LAYER1MODE_LAYER1GLBALPHA_Msk (0xFFUL << DISPC_CORE_LAYER1MODE_LAYER1GLBALPHA_Pos) /*!< Bit mask of
                                                                                    LAYER1GLBALPHA field.*/

        /* LAYER1MODEPOS24LEN02 @Bits 24..25 : Revered */
        #define DISPC_CORE_LAYER1MODE_LAYER1MODEPOS24LEN02_Pos (24UL) /*!< Position of LAYER1MODEPOS24LEN02 field.                   */
        #define DISPC_CORE_LAYER1MODE_LAYER1MODEPOS24LEN02_Msk (0x3UL << DISPC_CORE_LAYER1MODE_LAYER1MODEPOS24LEN02_Pos) /*!< Bit mask
                                                                                    of LAYER1MODEPOS24LEN02 field.*/

        /* LAYER1GAMMAEN @Bit 26 : When set to 1, Gamma Look Up Table is enabled */
        #define DISPC_CORE_LAYER1MODE_LAYER1GAMMAEN_Pos (26UL) /*!< Position of LAYER1GAMMAEN field.                                 */
        #define DISPC_CORE_LAYER1MODE_LAYER1GAMMAEN_Msk (0x1UL << DISPC_CORE_LAYER1MODE_LAYER1GAMMAEN_Pos) /*!< Bit mask of
                                                                                    LAYER1GAMMAEN field.*/

        /* LAYER1HLOCK @Bit 27 : When set to 1, HLOCK signal on AHB DMAs is asserted */
        #define DISPC_CORE_LAYER1MODE_LAYER1HLOCK_Pos (27UL) /*!< Position of LAYER1HLOCK field.                                     */
        #define DISPC_CORE_LAYER1MODE_LAYER1HLOCK_Msk (0x1UL << DISPC_CORE_LAYER1MODE_LAYER1HLOCK_Pos) /*!< Bit mask of LAYER1HLOCK
                                                                                    field.*/

        /* LAYER1PREMULT @Bit 28 : When set to 1, premultiply image alpha is enabled */
        #define DISPC_CORE_LAYER1MODE_LAYER1PREMULT_Pos (28UL) /*!< Position of LAYER1PREMULT field.                                 */
        #define DISPC_CORE_LAYER1MODE_LAYER1PREMULT_Msk (0x1UL << DISPC_CORE_LAYER1MODE_LAYER1PREMULT_Pos) /*!< Bit mask of
                                                                                    LAYER1PREMULT field.*/

        /* LAYER1BLEN @Bit 29 : When set to 0, bilinear filtering is enabled. */
        #define DISPC_CORE_LAYER1MODE_LAYER1BLEN_Pos (29UL) /*!< Position of LAYER1BLEN field.                                       */
        #define DISPC_CORE_LAYER1MODE_LAYER1BLEN_Msk (0x1UL << DISPC_CORE_LAYER1MODE_LAYER1BLEN_Pos) /*!< Bit mask of LAYER1BLEN
                                                                                    field.*/

        /* LAYER1FORCEALPHA @Bit 30 : When set to 1, force alpha with global alpha */
        #define DISPC_CORE_LAYER1MODE_LAYER1FORCEALPHA_Pos (30UL) /*!< Position of LAYER1FORCEALPHA field.                           */
        #define DISPC_CORE_LAYER1MODE_LAYER1FORCEALPHA_Msk (0x1UL << DISPC_CORE_LAYER1MODE_LAYER1FORCEALPHA_Pos) /*!< Bit mask of
                                                                                    LAYER1FORCEALPHA field.*/

        /* LAYER1ENABLE @Bit 31 : When set to 1, layer n is enabled */
        #define DISPC_CORE_LAYER1MODE_LAYER1ENABLE_Pos (31UL) /*!< Position of LAYER1ENABLE field.                                   */
        #define DISPC_CORE_LAYER1MODE_LAYER1ENABLE_Msk (0x1UL << DISPC_CORE_LAYER1MODE_LAYER1ENABLE_Pos) /*!< Bit mask of LAYER1ENABLE
                                                                                    field.*/


        /* DISPC_CORE_LAYER1STARTXY: X and Y start dimensions of layer 1 */
        #define DISPC_CORE_LAYER1STARTXY_ResetValue (0x00000000UL) /*!< Reset value of LAYER1STARTXY register.                       */

        /* LAYER1STARTY @Bits 0..15 : Specify the pixel offset of the starting Y dimension of layer 1 */
        #define DISPC_CORE_LAYER1STARTXY_LAYER1STARTY_Pos (0UL) /*!< Position of LAYER1STARTY field.                                 */
        #define DISPC_CORE_LAYER1STARTXY_LAYER1STARTY_Msk (0xFFFFUL << DISPC_CORE_LAYER1STARTXY_LAYER1STARTY_Pos) /*!< Bit mask of
                                                                                    LAYER1STARTY field.*/

        /* LAYER1STARTX @Bits 16..31 : Specify the pixel offset of the starting X dimension of layer 1 */
        #define DISPC_CORE_LAYER1STARTXY_LAYER1STARTX_Pos (16UL) /*!< Position of LAYER1STARTX field.                                */
        #define DISPC_CORE_LAYER1STARTXY_LAYER1STARTX_Msk (0xFFFFUL << DISPC_CORE_LAYER1STARTXY_LAYER1STARTX_Pos) /*!< Bit mask of
                                                                                    LAYER1STARTX field.*/


        /* DISPC_CORE_LAYER1SIZEXY: X and Y size of layer 1 */
        #define DISPC_CORE_LAYER1SIZEXY_ResetValue (0x00000000UL) /*!< Reset value of LAYER1SIZEXY register.                         */

        /* LAYER1SIZEY @Bits 0..15 : Specify the pixel size of the layer 1 in the Y dimension */
        #define DISPC_CORE_LAYER1SIZEXY_LAYER1SIZEY_Pos (0UL) /*!< Position of LAYER1SIZEY field.                                    */
        #define DISPC_CORE_LAYER1SIZEXY_LAYER1SIZEY_Msk (0xFFFFUL << DISPC_CORE_LAYER1SIZEXY_LAYER1SIZEY_Pos) /*!< Bit mask of
                                                                                    LAYER1SIZEY field.*/

        /* LAYER1SIZEX @Bits 16..31 : Specify the pixel size of the layer 1 in the X dimension */
        #define DISPC_CORE_LAYER1SIZEXY_LAYER1SIZEX_Pos (16UL) /*!< Position of LAYER1SIZEX field.                                   */
        #define DISPC_CORE_LAYER1SIZEXY_LAYER1SIZEX_Msk (0xFFFFUL << DISPC_CORE_LAYER1SIZEXY_LAYER1SIZEX_Pos) /*!< Bit mask of
                                                                                    LAYER1SIZEX field.*/


        /* DISPC_CORE_LAYER1BASEADDR: The start address of the framebuffer to be accessed by layer 1 */
        #define DISPC_CORE_LAYER1BASEADDR_ResetValue (0x00000000UL) /*!< Reset value of LAYER1BASEADDR register.                     */

        /* LAYER1BASEADDR @Bits 0..31 : Specify the start address of framebuffer for layer 1. */
        #define DISPC_CORE_LAYER1BASEADDR_LAYER1BASEADDR_Pos (0UL) /*!< Position of LAYER1BASEADDR field.                            */
        #define DISPC_CORE_LAYER1BASEADDR_LAYER1BASEADDR_Msk (0xFFFFFFFFUL << DISPC_CORE_LAYER1BASEADDR_LAYER1BASEADDR_Pos) /*!< Bit
                                                                                    mask of LAYER1BASEADDR field.*/


        /* DISPC_CORE_LAYER1STRIDE: Specify the stride and the AXI bus burst of layer 1 */
        #define DISPC_CORE_LAYER1STRIDE_ResetValue (0x00000000UL) /*!< Reset value of LAYER1STRIDE register.                         */

        /* LAYER1STRIDE @Bits 0..15 : Specify the stride, which is the distance from line to line in bytes for layer 1 memory */
        #define DISPC_CORE_LAYER1STRIDE_LAYER1STRIDE_Pos (0UL) /*!< Position of LAYER1STRIDE field.                                  */
        #define DISPC_CORE_LAYER1STRIDE_LAYER1STRIDE_Msk (0xFFFFUL << DISPC_CORE_LAYER1STRIDE_LAYER1STRIDE_Pos) /*!< Bit mask of
                                                                                    LAYER1STRIDE field.*/

        /* LAYER1AXIBEAT @Bits 16..18 : Specify the AXI-beats per burst in layer 1 */
        #define DISPC_CORE_LAYER1STRIDE_LAYER1AXIBEAT_Pos (16UL) /*!< Position of LAYER1AXIBEAT field.                               */
        #define DISPC_CORE_LAYER1STRIDE_LAYER1AXIBEAT_Msk (0x7UL << DISPC_CORE_LAYER1STRIDE_LAYER1AXIBEAT_Pos) /*!< Bit mask of
                                                                                    LAYER1AXIBEAT field.*/

        /* LAYER1AXITHRESHOLD @Bits 19..20 : Specify the AXI fifo threshold burst start in layer 1 */
        #define DISPC_CORE_LAYER1STRIDE_LAYER1AXITHRESHOLD_Pos (19UL) /*!< Position of LAYER1AXITHRESHOLD field.                     */
        #define DISPC_CORE_LAYER1STRIDE_LAYER1AXITHRESHOLD_Msk (0x3UL << DISPC_CORE_LAYER1STRIDE_LAYER1AXITHRESHOLD_Pos) /*!< Bit mask
                                                                                    of LAYER1AXITHRESHOLD field.*/

        /* LAYER1STRIDEPOS21LEN4 @Bits 21..24 : Revered */
        #define DISPC_CORE_LAYER1STRIDE_LAYER1STRIDEPOS21LEN4_Pos (21UL) /*!< Position of LAYER1STRIDEPOS21LEN4 field.               */
        #define DISPC_CORE_LAYER1STRIDE_LAYER1STRIDEPOS21LEN4_Msk (0xFUL << DISPC_CORE_LAYER1STRIDE_LAYER1STRIDEPOS21LEN4_Pos) /*!<
                                                                                    Bit mask of LAYER1STRIDEPOS21LEN4 field.*/

        /* LAYER1DMATHRESHOLD @Bits 25..27 : Specify the DMA prefetch Level in layer 1 */
        #define DISPC_CORE_LAYER1STRIDE_LAYER1DMATHRESHOLD_Pos (25UL) /*!< Position of LAYER1DMATHRESHOLD field.                     */
        #define DISPC_CORE_LAYER1STRIDE_LAYER1DMATHRESHOLD_Msk (0x7UL << DISPC_CORE_LAYER1STRIDE_LAYER1DMATHRESHOLD_Pos) /*!< Bit mask
                                                                                    of LAYER1DMATHRESHOLD field.*/

        /* LAYER1STRIDEPOS28LEN4 @Bits 28..31 : Revered */
        #define DISPC_CORE_LAYER1STRIDE_LAYER1STRIDEPOS28LEN4_Pos (28UL) /*!< Position of LAYER1STRIDEPOS28LEN4 field.               */
        #define DISPC_CORE_LAYER1STRIDE_LAYER1STRIDEPOS28LEN4_Msk (0xFUL << DISPC_CORE_LAYER1STRIDE_LAYER1STRIDEPOS28LEN4_Pos) /*!<
                                                                                    Bit mask of LAYER1STRIDEPOS28LEN4 field.*/


        /* DISPC_CORE_LAYER1RESXY: X and Y start dimensions of layerX and Y dimensions for the resolution of layer 1. */
        #define DISPC_CORE_LAYER1RESXY_ResetValue (0x00000000UL) /*!< Reset value of LAYER1RESXY register.                           */

        /* LAYER1RESY @Bits 0..15 : Specify the layer 1 pixel resolution in the Y dimension */
        #define DISPC_CORE_LAYER1RESXY_LAYER1RESY_Pos (0UL) /*!< Position of LAYER1RESY field.                                       */
        #define DISPC_CORE_LAYER1RESXY_LAYER1RESY_Msk (0xFFFFUL << DISPC_CORE_LAYER1RESXY_LAYER1RESY_Pos) /*!< Bit mask of LAYER1RESY
                                                                                    field.*/

        /* LAYER1RESX @Bits 16..31 : Specify the layer 1 pixel resolution in the X dimension */
        #define DISPC_CORE_LAYER1RESXY_LAYER1RESX_Pos (16UL) /*!< Position of LAYER1RESX field.                                      */
        #define DISPC_CORE_LAYER1RESXY_LAYER1RESX_Msk (0xFFFFUL << DISPC_CORE_LAYER1RESXY_LAYER1RESX_Pos) /*!< Bit mask of LAYER1RESX
                                                                                    field.*/


        /* DISPC_CORE_LAYER2MODE: Activate and set-up layer 2 */
        #define DISPC_CORE_LAYER2MODE_ResetValue (0x00000000UL) /*!< Reset value of LAYER2MODE register.                             */

        /* LAYER2COLORMODE @Bits 0..4 : Color mode for layer 2. */
        #define DISPC_CORE_LAYER2MODE_LAYER2COLORMODE_Pos (0UL) /*!< Position of LAYER2COLORMODE field.                              */
        #define DISPC_CORE_LAYER2MODE_LAYER2COLORMODE_Msk (0x1FUL << DISPC_CORE_LAYER2MODE_LAYER2COLORMODE_Pos) /*!< Bit mask of
                                                                                    LAYER2COLORMODE field.*/

        /* LAYER2MODELAYERREGISTERPROTECT @Bit 5 : Enable Register Protection for display layer registers. */
        #define DISPC_CORE_LAYER2MODE_LAYER2MODELAYERREGISTERPROTECT_Pos (5UL) /*!< Position of LAYER2MODELAYERREGISTERPROTECT field.*/
        #define DISPC_CORE_LAYER2MODE_LAYER2MODELAYERREGISTERPROTECT_Msk (0x1UL << DISPC_CORE_LAYER2MODE_LAYER2MODELAYERREGISTERPROTECT_Pos)
                                                                                    /*!< Bit mask of LAYER2MODELAYERREGISTERPROTECT
                                                                                    field.*/

        /* LAYER2MODEPOS05LEN02 @Bits 6..7 : Revered */
        #define DISPC_CORE_LAYER2MODE_LAYER2MODEPOS05LEN02_Pos (6UL) /*!< Position of LAYER2MODEPOS05LEN02 field.                    */
        #define DISPC_CORE_LAYER2MODE_LAYER2MODEPOS05LEN02_Msk (0x3UL << DISPC_CORE_LAYER2MODE_LAYER2MODEPOS05LEN02_Pos) /*!< Bit mask
                                                                                    of LAYER2MODEPOS05LEN02 field.*/

        /* LAYER2SRCBLD @Bits 8..11 : Source blending function for layer 2. */
        #define DISPC_CORE_LAYER2MODE_LAYER2SRCBLD_Pos (8UL) /*!< Position of LAYER2SRCBLD field.                                    */
        #define DISPC_CORE_LAYER2MODE_LAYER2SRCBLD_Msk (0xFUL << DISPC_CORE_LAYER2MODE_LAYER2SRCBLD_Pos) /*!< Bit mask of LAYER2SRCBLD
                                                                                    field.*/

        /* LAYER2DSTBLD @Bits 12..15 : Destination blending function for layer 2. */
        #define DISPC_CORE_LAYER2MODE_LAYER2DSTBLD_Pos (12UL) /*!< Position of LAYER2DSTBLD field.                                   */
        #define DISPC_CORE_LAYER2MODE_LAYER2DSTBLD_Msk (0xFUL << DISPC_CORE_LAYER2MODE_LAYER2DSTBLD_Pos) /*!< Bit mask of LAYER2DSTBLD
                                                                                    field.*/

        /* LAYER2GLBALPHA @Bits 16..23 : Alpha layer global value (0x00-0xFF range) */
        #define DISPC_CORE_LAYER2MODE_LAYER2GLBALPHA_Pos (16UL) /*!< Position of LAYER2GLBALPHA field.                               */
        #define DISPC_CORE_LAYER2MODE_LAYER2GLBALPHA_Msk (0xFFUL << DISPC_CORE_LAYER2MODE_LAYER2GLBALPHA_Pos) /*!< Bit mask of
                                                                                    LAYER2GLBALPHA field.*/

        /* LAYER2MODEPOS24LEN02 @Bits 24..25 : Revered */
        #define DISPC_CORE_LAYER2MODE_LAYER2MODEPOS24LEN02_Pos (24UL) /*!< Position of LAYER2MODEPOS24LEN02 field.                   */
        #define DISPC_CORE_LAYER2MODE_LAYER2MODEPOS24LEN02_Msk (0x3UL << DISPC_CORE_LAYER2MODE_LAYER2MODEPOS24LEN02_Pos) /*!< Bit mask
                                                                                    of LAYER2MODEPOS24LEN02 field.*/

        /* LAYER2GAMMAEN @Bit 26 : When set to 1, Gamma Look Up Table is enabled */
        #define DISPC_CORE_LAYER2MODE_LAYER2GAMMAEN_Pos (26UL) /*!< Position of LAYER2GAMMAEN field.                                 */
        #define DISPC_CORE_LAYER2MODE_LAYER2GAMMAEN_Msk (0x1UL << DISPC_CORE_LAYER2MODE_LAYER2GAMMAEN_Pos) /*!< Bit mask of
                                                                                    LAYER2GAMMAEN field.*/

        /* LAYER2HLOCK @Bit 27 : When set to 1, HLOCK signal on AHB DMAs is asserted */
        #define DISPC_CORE_LAYER2MODE_LAYER2HLOCK_Pos (27UL) /*!< Position of LAYER2HLOCK field.                                     */
        #define DISPC_CORE_LAYER2MODE_LAYER2HLOCK_Msk (0x1UL << DISPC_CORE_LAYER2MODE_LAYER2HLOCK_Pos) /*!< Bit mask of LAYER2HLOCK
                                                                                    field.*/

        /* LAYER2PREMULT @Bit 28 : When set to 1, premultiply image alpha is enabled */
        #define DISPC_CORE_LAYER2MODE_LAYER2PREMULT_Pos (28UL) /*!< Position of LAYER2PREMULT field.                                 */
        #define DISPC_CORE_LAYER2MODE_LAYER2PREMULT_Msk (0x1UL << DISPC_CORE_LAYER2MODE_LAYER2PREMULT_Pos) /*!< Bit mask of
                                                                                    LAYER2PREMULT field.*/

        /* LAYER2BLEN @Bit 29 : When set to 0, bilinear filtering is enabled. */
        #define DISPC_CORE_LAYER2MODE_LAYER2BLEN_Pos (29UL) /*!< Position of LAYER2BLEN field.                                       */
        #define DISPC_CORE_LAYER2MODE_LAYER2BLEN_Msk (0x1UL << DISPC_CORE_LAYER2MODE_LAYER2BLEN_Pos) /*!< Bit mask of LAYER2BLEN
                                                                                    field.*/

        /* LAYER2FORCEALPHA @Bit 30 : When set to 1, force alpha with global alpha */
        #define DISPC_CORE_LAYER2MODE_LAYER2FORCEALPHA_Pos (30UL) /*!< Position of LAYER2FORCEALPHA field.                           */
        #define DISPC_CORE_LAYER2MODE_LAYER2FORCEALPHA_Msk (0x1UL << DISPC_CORE_LAYER2MODE_LAYER2FORCEALPHA_Pos) /*!< Bit mask of
                                                                                    LAYER2FORCEALPHA field.*/

        /* LAYER2ENABLE @Bit 31 : When set to 1, layer n is enabled */
        #define DISPC_CORE_LAYER2MODE_LAYER2ENABLE_Pos (31UL) /*!< Position of LAYER2ENABLE field.                                   */
        #define DISPC_CORE_LAYER2MODE_LAYER2ENABLE_Msk (0x1UL << DISPC_CORE_LAYER2MODE_LAYER2ENABLE_Pos) /*!< Bit mask of LAYER2ENABLE
                                                                                    field.*/


        /* DISPC_CORE_LAYER2STARTXY: X and Y start dimensions of layer 2 */
        #define DISPC_CORE_LAYER2STARTXY_ResetValue (0x00000000UL) /*!< Reset value of LAYER2STARTXY register.                       */

        /* LAYER2STARTY @Bits 0..15 : Specify the pixel offset of the starting Y dimension of layer 2 */
        #define DISPC_CORE_LAYER2STARTXY_LAYER2STARTY_Pos (0UL) /*!< Position of LAYER2STARTY field.                                 */
        #define DISPC_CORE_LAYER2STARTXY_LAYER2STARTY_Msk (0xFFFFUL << DISPC_CORE_LAYER2STARTXY_LAYER2STARTY_Pos) /*!< Bit mask of
                                                                                    LAYER2STARTY field.*/

        /* LAYER2STARTX @Bits 16..31 : Specify the pixel offset of the starting X dimension of layer 2 */
        #define DISPC_CORE_LAYER2STARTXY_LAYER2STARTX_Pos (16UL) /*!< Position of LAYER2STARTX field.                                */
        #define DISPC_CORE_LAYER2STARTXY_LAYER2STARTX_Msk (0xFFFFUL << DISPC_CORE_LAYER2STARTXY_LAYER2STARTX_Pos) /*!< Bit mask of
                                                                                    LAYER2STARTX field.*/


        /* DISPC_CORE_LAYER2SIZEXY: X and Y size of layer 2 */
        #define DISPC_CORE_LAYER2SIZEXY_ResetValue (0x00000000UL) /*!< Reset value of LAYER2SIZEXY register.                         */

        /* LAYER2SIZEY @Bits 0..15 : Specify the pixel size of the layer 2 in the Y dimension */
        #define DISPC_CORE_LAYER2SIZEXY_LAYER2SIZEY_Pos (0UL) /*!< Position of LAYER2SIZEY field.                                    */
        #define DISPC_CORE_LAYER2SIZEXY_LAYER2SIZEY_Msk (0xFFFFUL << DISPC_CORE_LAYER2SIZEXY_LAYER2SIZEY_Pos) /*!< Bit mask of
                                                                                    LAYER2SIZEY field.*/

        /* LAYER2SIZEX @Bits 16..31 : Specify the pixel size of the layer 2 in the X dimension */
        #define DISPC_CORE_LAYER2SIZEXY_LAYER2SIZEX_Pos (16UL) /*!< Position of LAYER2SIZEX field.                                   */
        #define DISPC_CORE_LAYER2SIZEXY_LAYER2SIZEX_Msk (0xFFFFUL << DISPC_CORE_LAYER2SIZEXY_LAYER2SIZEX_Pos) /*!< Bit mask of
                                                                                    LAYER2SIZEX field.*/


        /* DISPC_CORE_LAYER2BASEADDR: The start address of the framebuffer to be accessed by layer 2 */
        #define DISPC_CORE_LAYER2BASEADDR_ResetValue (0x00000000UL) /*!< Reset value of LAYER2BASEADDR register.                     */

        /* LAYER2BASEADDR @Bits 0..31 : Specify the start address of framebuffer for layer 2. */
        #define DISPC_CORE_LAYER2BASEADDR_LAYER2BASEADDR_Pos (0UL) /*!< Position of LAYER2BASEADDR field.                            */
        #define DISPC_CORE_LAYER2BASEADDR_LAYER2BASEADDR_Msk (0xFFFFFFFFUL << DISPC_CORE_LAYER2BASEADDR_LAYER2BASEADDR_Pos) /*!< Bit
                                                                                    mask of LAYER2BASEADDR field.*/


        /* DISPC_CORE_LAYER2STRIDE: Specify the stride and the AXI bus burst of layer 2 */
        #define DISPC_CORE_LAYER2STRIDE_ResetValue (0x00000000UL) /*!< Reset value of LAYER2STRIDE register.                         */

        /* LAYER2STRIDE @Bits 0..15 : Specify the stride, which is the distance from line to line in bytes for layer 2 memory */
        #define DISPC_CORE_LAYER2STRIDE_LAYER2STRIDE_Pos (0UL) /*!< Position of LAYER2STRIDE field.                                  */
        #define DISPC_CORE_LAYER2STRIDE_LAYER2STRIDE_Msk (0xFFFFUL << DISPC_CORE_LAYER2STRIDE_LAYER2STRIDE_Pos) /*!< Bit mask of
                                                                                    LAYER2STRIDE field.*/

        /* LAYER2AXIBEAT @Bits 16..18 : Specify the AXI-beats per burst in layer 2 */
        #define DISPC_CORE_LAYER2STRIDE_LAYER2AXIBEAT_Pos (16UL) /*!< Position of LAYER2AXIBEAT field.                               */
        #define DISPC_CORE_LAYER2STRIDE_LAYER2AXIBEAT_Msk (0x7UL << DISPC_CORE_LAYER2STRIDE_LAYER2AXIBEAT_Pos) /*!< Bit mask of
                                                                                    LAYER2AXIBEAT field.*/

        /* LAYER2AXITHRESHOLD @Bits 19..20 : Specify the AXI fifo threshold burst start in layer 2 */
        #define DISPC_CORE_LAYER2STRIDE_LAYER2AXITHRESHOLD_Pos (19UL) /*!< Position of LAYER2AXITHRESHOLD field.                     */
        #define DISPC_CORE_LAYER2STRIDE_LAYER2AXITHRESHOLD_Msk (0x3UL << DISPC_CORE_LAYER2STRIDE_LAYER2AXITHRESHOLD_Pos) /*!< Bit mask
                                                                                    of LAYER2AXITHRESHOLD field.*/

        /* LAYER2STRIDEPOS21LEN4 @Bits 21..24 : Revered */
        #define DISPC_CORE_LAYER2STRIDE_LAYER2STRIDEPOS21LEN4_Pos (21UL) /*!< Position of LAYER2STRIDEPOS21LEN4 field.               */
        #define DISPC_CORE_LAYER2STRIDE_LAYER2STRIDEPOS21LEN4_Msk (0xFUL << DISPC_CORE_LAYER2STRIDE_LAYER2STRIDEPOS21LEN4_Pos) /*!<
                                                                                    Bit mask of LAYER2STRIDEPOS21LEN4 field.*/

        /* LAYER2DMATHRESHOLD @Bits 25..27 : Specify the DMA prefetch Level in layer 2 */
        #define DISPC_CORE_LAYER2STRIDE_LAYER2DMATHRESHOLD_Pos (25UL) /*!< Position of LAYER2DMATHRESHOLD field.                     */
        #define DISPC_CORE_LAYER2STRIDE_LAYER2DMATHRESHOLD_Msk (0x7UL << DISPC_CORE_LAYER2STRIDE_LAYER2DMATHRESHOLD_Pos) /*!< Bit mask
                                                                                    of LAYER2DMATHRESHOLD field.*/

        /* LAYER2STRIDEPOS28LEN4 @Bits 28..31 : Revered */
        #define DISPC_CORE_LAYER2STRIDE_LAYER2STRIDEPOS28LEN4_Pos (28UL) /*!< Position of LAYER2STRIDEPOS28LEN4 field.               */
        #define DISPC_CORE_LAYER2STRIDE_LAYER2STRIDEPOS28LEN4_Msk (0xFUL << DISPC_CORE_LAYER2STRIDE_LAYER2STRIDEPOS28LEN4_Pos) /*!<
                                                                                    Bit mask of LAYER2STRIDEPOS28LEN4 field.*/


        /* DISPC_CORE_LAYER2RESXY: X and Y start dimensions of layerX and Y dimensions for the resolution of layer 2. */
        #define DISPC_CORE_LAYER2RESXY_ResetValue (0x00000000UL) /*!< Reset value of LAYER2RESXY register.                           */

        /* LAYER2RESY @Bits 0..15 : Specify the layer 2 pixel resolution in the Y dimension */
        #define DISPC_CORE_LAYER2RESXY_LAYER2RESY_Pos (0UL) /*!< Position of LAYER2RESY field.                                       */
        #define DISPC_CORE_LAYER2RESXY_LAYER2RESY_Msk (0xFFFFUL << DISPC_CORE_LAYER2RESXY_LAYER2RESY_Pos) /*!< Bit mask of LAYER2RESY
                                                                                    field.*/

        /* LAYER2RESX @Bits 16..31 : Specify the layer 2 pixel resolution in the X dimension */
        #define DISPC_CORE_LAYER2RESXY_LAYER2RESX_Pos (16UL) /*!< Position of LAYER2RESX field.                                      */
        #define DISPC_CORE_LAYER2RESXY_LAYER2RESX_Msk (0xFFFFUL << DISPC_CORE_LAYER2RESXY_LAYER2RESX_Pos) /*!< Bit mask of LAYER2RESX
                                                                                    field.*/


        /* DISPC_CORE_LAYER3MODE: Activate and set-up layer 3 */
        #define DISPC_CORE_LAYER3MODE_ResetValue (0x00000000UL) /*!< Reset value of LAYER3MODE register.                             */

        /* LAYER3COLORMODE @Bits 0..4 : Color mode for layer 3. */
        #define DISPC_CORE_LAYER3MODE_LAYER3COLORMODE_Pos (0UL) /*!< Position of LAYER3COLORMODE field.                              */
        #define DISPC_CORE_LAYER3MODE_LAYER3COLORMODE_Msk (0x1FUL << DISPC_CORE_LAYER3MODE_LAYER3COLORMODE_Pos) /*!< Bit mask of
                                                                                    LAYER3COLORMODE field.*/

        /* LAYER3MODELAYERREGISTERPROTECT @Bit 5 : Enable Register Protection for display layer registers. */
        #define DISPC_CORE_LAYER3MODE_LAYER3MODELAYERREGISTERPROTECT_Pos (5UL) /*!< Position of LAYER3MODELAYERREGISTERPROTECT field.*/
        #define DISPC_CORE_LAYER3MODE_LAYER3MODELAYERREGISTERPROTECT_Msk (0x1UL << DISPC_CORE_LAYER3MODE_LAYER3MODELAYERREGISTERPROTECT_Pos)
                                                                                    /*!< Bit mask of LAYER3MODELAYERREGISTERPROTECT
                                                                                    field.*/

        /* LAYER3MODEPOS05LEN02 @Bits 6..7 : Revered */
        #define DISPC_CORE_LAYER3MODE_LAYER3MODEPOS05LEN02_Pos (6UL) /*!< Position of LAYER3MODEPOS05LEN02 field.                    */
        #define DISPC_CORE_LAYER3MODE_LAYER3MODEPOS05LEN02_Msk (0x3UL << DISPC_CORE_LAYER3MODE_LAYER3MODEPOS05LEN02_Pos) /*!< Bit mask
                                                                                    of LAYER3MODEPOS05LEN02 field.*/

        /* LAYER3SRCBLD @Bits 8..11 : Source blending function for layer 3. */
        #define DISPC_CORE_LAYER3MODE_LAYER3SRCBLD_Pos (8UL) /*!< Position of LAYER3SRCBLD field.                                    */
        #define DISPC_CORE_LAYER3MODE_LAYER3SRCBLD_Msk (0xFUL << DISPC_CORE_LAYER3MODE_LAYER3SRCBLD_Pos) /*!< Bit mask of LAYER3SRCBLD
                                                                                    field.*/

        /* LAYER3DSTBLD @Bits 12..15 : Destination blending function for layer 3. */
        #define DISPC_CORE_LAYER3MODE_LAYER3DSTBLD_Pos (12UL) /*!< Position of LAYER3DSTBLD field.                                   */
        #define DISPC_CORE_LAYER3MODE_LAYER3DSTBLD_Msk (0xFUL << DISPC_CORE_LAYER3MODE_LAYER3DSTBLD_Pos) /*!< Bit mask of LAYER3DSTBLD
                                                                                    field.*/

        /* LAYER3GLBALPHA @Bits 16..23 : Alpha layer global value (0x00-0xFF range) */
        #define DISPC_CORE_LAYER3MODE_LAYER3GLBALPHA_Pos (16UL) /*!< Position of LAYER3GLBALPHA field.                               */
        #define DISPC_CORE_LAYER3MODE_LAYER3GLBALPHA_Msk (0xFFUL << DISPC_CORE_LAYER3MODE_LAYER3GLBALPHA_Pos) /*!< Bit mask of
                                                                                    LAYER3GLBALPHA field.*/

        /* LAYER3MODEPOS24LEN02 @Bits 24..25 : Revered */
        #define DISPC_CORE_LAYER3MODE_LAYER3MODEPOS24LEN02_Pos (24UL) /*!< Position of LAYER3MODEPOS24LEN02 field.                   */
        #define DISPC_CORE_LAYER3MODE_LAYER3MODEPOS24LEN02_Msk (0x3UL << DISPC_CORE_LAYER3MODE_LAYER3MODEPOS24LEN02_Pos) /*!< Bit mask
                                                                                    of LAYER3MODEPOS24LEN02 field.*/

        /* LAYER3GAMMAEN @Bit 26 : When set to 1, Gamma Look Up Table is enabled */
        #define DISPC_CORE_LAYER3MODE_LAYER3GAMMAEN_Pos (26UL) /*!< Position of LAYER3GAMMAEN field.                                 */
        #define DISPC_CORE_LAYER3MODE_LAYER3GAMMAEN_Msk (0x1UL << DISPC_CORE_LAYER3MODE_LAYER3GAMMAEN_Pos) /*!< Bit mask of
                                                                                    LAYER3GAMMAEN field.*/

        /* LAYER3HLOCK @Bit 27 : When set to 1, HLOCK signal on AHB DMAs is asserted */
        #define DISPC_CORE_LAYER3MODE_LAYER3HLOCK_Pos (27UL) /*!< Position of LAYER3HLOCK field.                                     */
        #define DISPC_CORE_LAYER3MODE_LAYER3HLOCK_Msk (0x1UL << DISPC_CORE_LAYER3MODE_LAYER3HLOCK_Pos) /*!< Bit mask of LAYER3HLOCK
                                                                                    field.*/

        /* LAYER3PREMULT @Bit 28 : When set to 1, premultiply image alpha is enabled */
        #define DISPC_CORE_LAYER3MODE_LAYER3PREMULT_Pos (28UL) /*!< Position of LAYER3PREMULT field.                                 */
        #define DISPC_CORE_LAYER3MODE_LAYER3PREMULT_Msk (0x1UL << DISPC_CORE_LAYER3MODE_LAYER3PREMULT_Pos) /*!< Bit mask of
                                                                                    LAYER3PREMULT field.*/

        /* LAYER3BLEN @Bit 29 : When set to 0, bilinear filtering is enabled. */
        #define DISPC_CORE_LAYER3MODE_LAYER3BLEN_Pos (29UL) /*!< Position of LAYER3BLEN field.                                       */
        #define DISPC_CORE_LAYER3MODE_LAYER3BLEN_Msk (0x1UL << DISPC_CORE_LAYER3MODE_LAYER3BLEN_Pos) /*!< Bit mask of LAYER3BLEN
                                                                                    field.*/

        /* LAYER3FORCEALPHA @Bit 30 : When set to 1, force alpha with global alpha */
        #define DISPC_CORE_LAYER3MODE_LAYER3FORCEALPHA_Pos (30UL) /*!< Position of LAYER3FORCEALPHA field.                           */
        #define DISPC_CORE_LAYER3MODE_LAYER3FORCEALPHA_Msk (0x1UL << DISPC_CORE_LAYER3MODE_LAYER3FORCEALPHA_Pos) /*!< Bit mask of
                                                                                    LAYER3FORCEALPHA field.*/

        /* LAYER3ENABLE @Bit 31 : When set to 1, layer n is enabled */
        #define DISPC_CORE_LAYER3MODE_LAYER3ENABLE_Pos (31UL) /*!< Position of LAYER3ENABLE field.                                   */
        #define DISPC_CORE_LAYER3MODE_LAYER3ENABLE_Msk (0x1UL << DISPC_CORE_LAYER3MODE_LAYER3ENABLE_Pos) /*!< Bit mask of LAYER3ENABLE
                                                                                    field.*/


        /* DISPC_CORE_LAYER3STARTXY: X and Y start dimensions of layer 3 */
        #define DISPC_CORE_LAYER3STARTXY_ResetValue (0x00000000UL) /*!< Reset value of LAYER3STARTXY register.                       */

        /* LAYER3STARTY @Bits 0..15 : Specify the pixel offset of the starting Y dimension of layer 3 */
        #define DISPC_CORE_LAYER3STARTXY_LAYER3STARTY_Pos (0UL) /*!< Position of LAYER3STARTY field.                                 */
        #define DISPC_CORE_LAYER3STARTXY_LAYER3STARTY_Msk (0xFFFFUL << DISPC_CORE_LAYER3STARTXY_LAYER3STARTY_Pos) /*!< Bit mask of
                                                                                    LAYER3STARTY field.*/

        /* LAYER3STARTX @Bits 16..31 : Specify the pixel offset of the starting X dimension of layer 3 */
        #define DISPC_CORE_LAYER3STARTXY_LAYER3STARTX_Pos (16UL) /*!< Position of LAYER3STARTX field.                                */
        #define DISPC_CORE_LAYER3STARTXY_LAYER3STARTX_Msk (0xFFFFUL << DISPC_CORE_LAYER3STARTXY_LAYER3STARTX_Pos) /*!< Bit mask of
                                                                                    LAYER3STARTX field.*/


        /* DISPC_CORE_LAYER3SIZEXY: X and Y size of layer 3 */
        #define DISPC_CORE_LAYER3SIZEXY_ResetValue (0x00000000UL) /*!< Reset value of LAYER3SIZEXY register.                         */

        /* LAYER3SIZEY @Bits 0..15 : Specify the pixel size of the layer 3 in the Y dimension */
        #define DISPC_CORE_LAYER3SIZEXY_LAYER3SIZEY_Pos (0UL) /*!< Position of LAYER3SIZEY field.                                    */
        #define DISPC_CORE_LAYER3SIZEXY_LAYER3SIZEY_Msk (0xFFFFUL << DISPC_CORE_LAYER3SIZEXY_LAYER3SIZEY_Pos) /*!< Bit mask of
                                                                                    LAYER3SIZEY field.*/

        /* LAYER3SIZEX @Bits 16..31 : Specify the pixel size of the layer 3 in the X dimension */
        #define DISPC_CORE_LAYER3SIZEXY_LAYER3SIZEX_Pos (16UL) /*!< Position of LAYER3SIZEX field.                                   */
        #define DISPC_CORE_LAYER3SIZEXY_LAYER3SIZEX_Msk (0xFFFFUL << DISPC_CORE_LAYER3SIZEXY_LAYER3SIZEX_Pos) /*!< Bit mask of
                                                                                    LAYER3SIZEX field.*/


        /* DISPC_CORE_LAYER3BASEADDR: The start address of the framebuffer to be accessed by layer 3 */
        #define DISPC_CORE_LAYER3BASEADDR_ResetValue (0x00000000UL) /*!< Reset value of LAYER3BASEADDR register.                     */

        /* LAYER3BASEADDR @Bits 0..31 : Specify the start address of framebuffer for layer 3. */
        #define DISPC_CORE_LAYER3BASEADDR_LAYER3BASEADDR_Pos (0UL) /*!< Position of LAYER3BASEADDR field.                            */
        #define DISPC_CORE_LAYER3BASEADDR_LAYER3BASEADDR_Msk (0xFFFFFFFFUL << DISPC_CORE_LAYER3BASEADDR_LAYER3BASEADDR_Pos) /*!< Bit
                                                                                    mask of LAYER3BASEADDR field.*/


        /* DISPC_CORE_LAYER3STRIDE: Specify the stride and the AXI bus burst of layer 3 */
        #define DISPC_CORE_LAYER3STRIDE_ResetValue (0x00000000UL) /*!< Reset value of LAYER3STRIDE register.                         */

        /* LAYER3STRIDE @Bits 0..15 : Specify the stride, which is the distance from line to line in bytes for layer 3 memory */
        #define DISPC_CORE_LAYER3STRIDE_LAYER3STRIDE_Pos (0UL) /*!< Position of LAYER3STRIDE field.                                  */
        #define DISPC_CORE_LAYER3STRIDE_LAYER3STRIDE_Msk (0xFFFFUL << DISPC_CORE_LAYER3STRIDE_LAYER3STRIDE_Pos) /*!< Bit mask of
                                                                                    LAYER3STRIDE field.*/

        /* LAYER3AXIBEAT @Bits 16..18 : Specify the AXI-beats per burst in layer 3 */
        #define DISPC_CORE_LAYER3STRIDE_LAYER3AXIBEAT_Pos (16UL) /*!< Position of LAYER3AXIBEAT field.                               */
        #define DISPC_CORE_LAYER3STRIDE_LAYER3AXIBEAT_Msk (0x7UL << DISPC_CORE_LAYER3STRIDE_LAYER3AXIBEAT_Pos) /*!< Bit mask of
                                                                                    LAYER3AXIBEAT field.*/

        /* LAYER3AXITHRESHOLD @Bits 19..20 : Specify the AXI fifo threshold burst start in layer 3 */
        #define DISPC_CORE_LAYER3STRIDE_LAYER3AXITHRESHOLD_Pos (19UL) /*!< Position of LAYER3AXITHRESHOLD field.                     */
        #define DISPC_CORE_LAYER3STRIDE_LAYER3AXITHRESHOLD_Msk (0x3UL << DISPC_CORE_LAYER3STRIDE_LAYER3AXITHRESHOLD_Pos) /*!< Bit mask
                                                                                    of LAYER3AXITHRESHOLD field.*/

        /* LAYER3STRIDEPOS21LEN4 @Bits 21..24 : Revered */
        #define DISPC_CORE_LAYER3STRIDE_LAYER3STRIDEPOS21LEN4_Pos (21UL) /*!< Position of LAYER3STRIDEPOS21LEN4 field.               */
        #define DISPC_CORE_LAYER3STRIDE_LAYER3STRIDEPOS21LEN4_Msk (0xFUL << DISPC_CORE_LAYER3STRIDE_LAYER3STRIDEPOS21LEN4_Pos) /*!<
                                                                                    Bit mask of LAYER3STRIDEPOS21LEN4 field.*/

        /* LAYER3DMATHRESHOLD @Bits 25..27 : Specify the DMA prefetch Level in layer 3 */
        #define DISPC_CORE_LAYER3STRIDE_LAYER3DMATHRESHOLD_Pos (25UL) /*!< Position of LAYER3DMATHRESHOLD field.                     */
        #define DISPC_CORE_LAYER3STRIDE_LAYER3DMATHRESHOLD_Msk (0x7UL << DISPC_CORE_LAYER3STRIDE_LAYER3DMATHRESHOLD_Pos) /*!< Bit mask
                                                                                    of LAYER3DMATHRESHOLD field.*/

        /* LAYER3STRIDEPOS28LEN4 @Bits 28..31 : Revered */
        #define DISPC_CORE_LAYER3STRIDE_LAYER3STRIDEPOS28LEN4_Pos (28UL) /*!< Position of LAYER3STRIDEPOS28LEN4 field.               */
        #define DISPC_CORE_LAYER3STRIDE_LAYER3STRIDEPOS28LEN4_Msk (0xFUL << DISPC_CORE_LAYER3STRIDE_LAYER3STRIDEPOS28LEN4_Pos) /*!<
                                                                                    Bit mask of LAYER3STRIDEPOS28LEN4 field.*/


        /* DISPC_CORE_LAYER3RESXY: X and Y start dimensions of layerX and Y dimensions for the resolution of layer 3. */
        #define DISPC_CORE_LAYER3RESXY_ResetValue (0x00000000UL) /*!< Reset value of LAYER3RESXY register.                           */

        /* LAYER3RESY @Bits 0..15 : Specify the layer 3 pixel resolution in the Y dimension */
        #define DISPC_CORE_LAYER3RESXY_LAYER3RESY_Pos (0UL) /*!< Position of LAYER3RESY field.                                       */
        #define DISPC_CORE_LAYER3RESXY_LAYER3RESY_Msk (0xFFFFUL << DISPC_CORE_LAYER3RESXY_LAYER3RESY_Pos) /*!< Bit mask of LAYER3RESY
                                                                                    field.*/

        /* LAYER3RESX @Bits 16..31 : Specify the layer 3 pixel resolution in the X dimension */
        #define DISPC_CORE_LAYER3RESXY_LAYER3RESX_Pos (16UL) /*!< Position of LAYER3RESX field.                                      */
        #define DISPC_CORE_LAYER3RESXY_LAYER3RESX_Msk (0xFFFFUL << DISPC_CORE_LAYER3RESXY_LAYER3RESX_Pos) /*!< Bit mask of LAYER3RESX
                                                                                    field.*/


        /* DISPC_CORE_LAYER0UBASE: The start address of the U chroma for layer 0 YUV planar format. */
        #define DISPC_CORE_LAYER0UBASE_ResetValue (0x00000000UL) /*!< Reset value of LAYER0UBASE register.                           */

        /* LAYER0UBASE @Bits 0..31 : Specify the start address of U chroma for layer 0 */
        #define DISPC_CORE_LAYER0UBASE_LAYER0UBASE_Pos (0UL) /*!< Position of LAYER0UBASE field.                                     */
        #define DISPC_CORE_LAYER0UBASE_LAYER0UBASE_Msk (0xFFFFFFFFUL << DISPC_CORE_LAYER0UBASE_LAYER0UBASE_Pos) /*!< Bit mask of
                                                                                    LAYER0UBASE field.*/


        /* DISPC_CORE_LAYER0VBASE: The start address of the V chroma for layer 0 YUV planar format. */
        #define DISPC_CORE_LAYER0VBASE_ResetValue (0x00000000UL) /*!< Reset value of LAYER0VBASE register.                           */

        /* LAYER0VBASE @Bits 0..31 : Specify the start address of V chroma for layer 0 */
        #define DISPC_CORE_LAYER0VBASE_LAYER0VBASE_Pos (0UL) /*!< Position of LAYER0VBASE field.                                     */
        #define DISPC_CORE_LAYER0VBASE_LAYER0VBASE_Msk (0xFFFFFFFFUL << DISPC_CORE_LAYER0VBASE_LAYER0VBASE_Pos) /*!< Bit mask of
                                                                                    LAYER0VBASE field.*/


        /* DISPC_CORE_LAYER0UVSTRIDE: Specify the stride for layer 0 YUV planar format. */
        #define DISPC_CORE_LAYER0UVSTRIDE_ResetValue (0x00000000UL) /*!< Reset value of LAYER0UVSTRIDE register.                     */

        /* LAYER0UVSTRIDE @Bits 0..31 : Specify the stride for layer 0 YUV planar format. */
        #define DISPC_CORE_LAYER0UVSTRIDE_LAYER0UVSTRIDE_Pos (0UL) /*!< Position of LAYER0UVSTRIDE field.                            */
        #define DISPC_CORE_LAYER0UVSTRIDE_LAYER0UVSTRIDE_Msk (0xFFFFFFFFUL << DISPC_CORE_LAYER0UVSTRIDE_LAYER0UVSTRIDE_Pos) /*!< Bit
                                                                                    mask of LAYER0UVSTRIDE field.*/


        /* DISPC_CORE_LAYER1UBASE: The start address of the U chroma for layer 1 YUV planar format. */
        #define DISPC_CORE_LAYER1UBASE_ResetValue (0x00000000UL) /*!< Reset value of LAYER1UBASE register.                           */

        /* LAYER1UBASE @Bits 0..31 : Specify the start address of U chroma for layer 1 */
        #define DISPC_CORE_LAYER1UBASE_LAYER1UBASE_Pos (0UL) /*!< Position of LAYER1UBASE field.                                     */
        #define DISPC_CORE_LAYER1UBASE_LAYER1UBASE_Msk (0xFFFFFFFFUL << DISPC_CORE_LAYER1UBASE_LAYER1UBASE_Pos) /*!< Bit mask of
                                                                                    LAYER1UBASE field.*/


        /* DISPC_CORE_LAYER1VBASE: The start address of the V chroma for layer 1 YUV planar format. */
        #define DISPC_CORE_LAYER1VBASE_ResetValue (0x00000000UL) /*!< Reset value of LAYER1VBASE register.                           */

        /* LAYER1VBASE @Bits 0..31 : Specify the start address of V chroma for layer 1 */
        #define DISPC_CORE_LAYER1VBASE_LAYER1VBASE_Pos (0UL) /*!< Position of LAYER1VBASE field.                                     */
        #define DISPC_CORE_LAYER1VBASE_LAYER1VBASE_Msk (0xFFFFFFFFUL << DISPC_CORE_LAYER1VBASE_LAYER1VBASE_Pos) /*!< Bit mask of
                                                                                    LAYER1VBASE field.*/


        /* DISPC_CORE_LAYER1UVSTRIDE: Specify the stride for layer 1 YUV planar format. */
        #define DISPC_CORE_LAYER1UVSTRIDE_ResetValue (0x00000000UL) /*!< Reset value of LAYER1UVSTRIDE register.                     */

        /* LAYER1UVSTRIDE @Bits 0..31 : Specify the stride for layer 1 YUV planar format. */
        #define DISPC_CORE_LAYER1UVSTRIDE_LAYER1UVSTRIDE_Pos (0UL) /*!< Position of LAYER1UVSTRIDE field.                            */
        #define DISPC_CORE_LAYER1UVSTRIDE_LAYER1UVSTRIDE_Msk (0xFFFFFFFFUL << DISPC_CORE_LAYER1UVSTRIDE_LAYER1UVSTRIDE_Pos) /*!< Bit
                                                                                    mask of LAYER1UVSTRIDE field.*/


        /* DISPC_CORE_DBIBCMD: Command Register to read/write commands from/to DBI Type-B interface. */
        #define DISPC_CORE_DBIBCMD_ResetValue (0x00000000UL) /*!< Reset value of DBIBCMD register.                                   */

        /* DBIBCMDPOS00LEN16 @Bits 0..15 : Data to send to the DBI Type-B interface */
        #define DISPC_CORE_DBIBCMD_DBIBCMDPOS00LEN16_Pos (0UL) /*!< Position of DBIBCMDPOS00LEN16 field.                             */
        #define DISPC_CORE_DBIBCMD_DBIBCMDPOS00LEN16_Msk (0xFFFFUL << DISPC_CORE_DBIBCMD_DBIBCMDPOS00LEN16_Pos) /*!< Bit mask of
                                                                                    DBIBCMDPOS00LEN16 field.*/

        /* DBIBCMDPOS16LEN08 @Bits 16..23 : Revered */
        #define DISPC_CORE_DBIBCMD_DBIBCMDPOS16LEN08_Pos (16UL) /*!< Position of DBIBCMDPOS16LEN08 field.                            */
        #define DISPC_CORE_DBIBCMD_DBIBCMDPOS16LEN08_Msk (0xFFUL << DISPC_CORE_DBIBCMD_DBIBCMDPOS16LEN08_Pos) /*!< Bit mask of
                                                                                    DBIBCMDPOS16LEN08 field.*/

        /* DBIBCMDPOS24LEN01 @Bit 24 : When sets to 1, store internally a command type which is */
        #define DISPC_CORE_DBIBCMD_DBIBCMDPOS24LEN01_Pos (24UL) /*!< Position of DBIBCMDPOS24LEN01 field.                            */
        #define DISPC_CORE_DBIBCMD_DBIBCMDPOS24LEN01_Msk (0x1UL << DISPC_CORE_DBIBCMD_DBIBCMDPOS24LEN01_Pos) /*!< Bit mask of
                                                                                    DBIBCMDPOS24LEN01 field.*/

        /* DBIBCMDPOS25LEN01 @Bit 25 : When sets to 1, FMTCTRL[15:8] is exposed on DBIB_CT pins and */
        #define DISPC_CORE_DBIBCMD_DBIBCMDPOS25LEN01_Pos (25UL) /*!< Position of DBIBCMDPOS25LEN01 field.                            */
        #define DISPC_CORE_DBIBCMD_DBIBCMDPOS25LEN01_Msk (0x1UL << DISPC_CORE_DBIBCMD_DBIBCMDPOS25LEN01_Pos) /*!< Bit mask of
                                                                                    DBIBCMDPOS25LEN01 field.*/

        /* DBIBCMDPOS26LEN01 @Bit 26 : When sets to 1, read mode is enabled */
        #define DISPC_CORE_DBIBCMD_DBIBCMDPOS26LEN01_Pos (26UL) /*!< Position of DBIBCMDPOS26LEN01 field.                            */
        #define DISPC_CORE_DBIBCMD_DBIBCMDPOS26LEN01_Msk (0x1UL << DISPC_CORE_DBIBCMD_DBIBCMDPOS26LEN01_Pos) /*!< Bit mask of
                                                                                    DBIBCMDPOS26LEN01 field.*/

        /* DBIBCMDPOS27LEN01 @Bit 27 : When sets to 1, switch to serial transmission of the */
        #define DISPC_CORE_DBIBCMD_DBIBCMDPOS27LEN01_Pos (27UL) /*!< Position of DBIBCMDPOS27LEN01 field.                            */
        #define DISPC_CORE_DBIBCMD_DBIBCMDPOS27LEN01_Msk (0x1UL << DISPC_CORE_DBIBCMD_DBIBCMDPOS27LEN01_Pos) /*!< Bit mask of
                                                                                    DBIBCMDPOS27LEN01 field.*/

        /* DBIBCMDPOS28LEN01 @Bits 28..29 : Determine the command width. */
        #define DISPC_CORE_DBIBCMD_DBIBCMDPOS28LEN01_Pos (28UL) /*!< Position of DBIBCMDPOS28LEN01 field.                            */
        #define DISPC_CORE_DBIBCMD_DBIBCMDPOS28LEN01_Msk (0x3UL << DISPC_CORE_DBIBCMD_DBIBCMDPOS28LEN01_Pos) /*!< Bit mask of
                                                                                    DBIBCMDPOS28LEN01 field.*/

        /* DBIBCMDPOS30LEN01 @Bit 30 : Send direct data of type command to the DBI Type-B interface */
        #define DISPC_CORE_DBIBCMD_DBIBCMDPOS30LEN01_Pos (30UL) /*!< Position of DBIBCMDPOS30LEN01 field.                            */
        #define DISPC_CORE_DBIBCMD_DBIBCMDPOS30LEN01_Msk (0x1UL << DISPC_CORE_DBIBCMD_DBIBCMDPOS30LEN01_Pos) /*!< Bit mask of
                                                                                    DBIBCMDPOS30LEN01 field.*/

        /* DBIBCMDPOS31LEN01 @Bit 31 : When set to 0, indicates that the command data are */
        #define DISPC_CORE_DBIBCMD_DBIBCMDPOS31LEN01_Pos (31UL) /*!< Position of DBIBCMDPOS31LEN01 field.                            */
        #define DISPC_CORE_DBIBCMD_DBIBCMDPOS31LEN01_Msk (0x1UL << DISPC_CORE_DBIBCMD_DBIBCMDPOS31LEN01_Pos) /*!< Bit mask of
                                                                                    DBIBCMDPOS31LEN01 field.*/


        /* DISPC_CORE_DBIBRDAT: Data read by DBI Type-B/SPI interface are stored in the CORE_DBIB_RDAT register. */
        #define DISPC_CORE_DBIBRDAT_ResetValue (0x00000000UL) /*!< Reset value of DBIBRDAT register.                                 */

        /* DBIBRDATPOS00LEN30 @Bits 0..29 : Read data from DBI Type-B/SPI interfaces (low bits) */
        #define DISPC_CORE_DBIBRDAT_DBIBRDATPOS00LEN30_Pos (0UL) /*!< Position of DBIBRDATPOS00LEN30 field.                          */
        #define DISPC_CORE_DBIBRDAT_DBIBRDATPOS00LEN30_Msk (0x3FFFFFFFUL << DISPC_CORE_DBIBRDAT_DBIBRDATPOS00LEN30_Pos) /*!< Bit mask
                                                                                    of DBIBRDATPOS00LEN30 field.*/

        /* DBIBRDATPOS30LEN02 @Bits 30..31 : On Write: Specify the number of read cycles */
        #define DISPC_CORE_DBIBRDAT_DBIBRDATPOS30LEN02_Pos (30UL) /*!< Position of DBIBRDATPOS30LEN02 field.                         */
        #define DISPC_CORE_DBIBRDAT_DBIBRDATPOS30LEN02_Msk (0x3UL << DISPC_CORE_DBIBRDAT_DBIBRDATPOS30LEN02_Pos) /*!< Bit mask of
                                                                                    DBIBRDATPOS30LEN02 field.*/


        /* DISPC_CORE_CONFIG: Information register of the layers activation and setup. */
        #define DISPC_CORE_CONFIG_ResetValue (0xF0BBBBFBUL) /*!< Reset value of CONFIG register.                                     */

        /* CONFIGPOS00LEN01 @Bit 0 : Indicates that Global Gamma/Palette is enabled */
        #define DISPC_CORE_CONFIG_CONFIGPOS00LEN01_Pos (0UL) /*!< Position of CONFIGPOS00LEN01 field.                                */
        #define DISPC_CORE_CONFIG_CONFIGPOS00LEN01_Msk (0x1UL << DISPC_CORE_CONFIG_CONFIGPOS00LEN01_Pos) /*!< Bit mask of
                                                                                    CONFIGPOS00LEN01 field.*/

        /* CONFIGPOS01LEN01 @Bit 1 : Indicates that fixed cursor is enabled */
        #define DISPC_CORE_CONFIG_CONFIGPOS01LEN01_Pos (1UL) /*!< Position of CONFIGPOS01LEN01 field.                                */
        #define DISPC_CORE_CONFIG_CONFIGPOS01LEN01_Msk (0x1UL << DISPC_CORE_CONFIG_CONFIGPOS01LEN01_Pos) /*!< Bit mask of
                                                                                    CONFIGPOS01LEN01 field.*/

        /* CONFIGPOS02LEN01 @Bit 2 : Indicates that programmable cursor is enabled */
        #define DISPC_CORE_CONFIG_CONFIGPOS02LEN01_Pos (2UL) /*!< Position of CONFIGPOS02LEN01 field.                                */
        #define DISPC_CORE_CONFIG_CONFIGPOS02LEN01_Msk (0x1UL << DISPC_CORE_CONFIG_CONFIGPOS02LEN01_Pos) /*!< Bit mask of
                                                                                    CONFIGPOS02LEN01 field.*/

        /* CONFIGPOS03LEN01 @Bit 3 : Indicates that dithering is enabled */
        #define DISPC_CORE_CONFIG_CONFIGPOS03LEN01_Pos (3UL) /*!< Position of CONFIGPOS03LEN01 field.                                */
        #define DISPC_CORE_CONFIG_CONFIGPOS03LEN01_Msk (0x1UL << DISPC_CORE_CONFIG_CONFIGPOS03LEN01_Pos) /*!< Bit mask of
                                                                                    CONFIGPOS03LEN01 field.*/

        /* CONFIGPOS04LEN01 @Bit 4 : Indicates that formatting is enabled */
        #define DISPC_CORE_CONFIG_CONFIGPOS04LEN01_Pos (4UL) /*!< Position of CONFIGPOS04LEN01 field.                                */
        #define DISPC_CORE_CONFIG_CONFIGPOS04LEN01_Msk (0x1UL << DISPC_CORE_CONFIG_CONFIGPOS04LEN01_Pos) /*!< Bit mask of
                                                                                    CONFIGPOS04LEN01 field.*/

        /* CONFIGPOS05LEN01 @Bit 5 : Indicates that high quality YUV/YCbCr converter is enabled */
        #define DISPC_CORE_CONFIG_CONFIGPOS05LEN01_Pos (5UL) /*!< Position of CONFIGPOS05LEN01 field.                                */
        #define DISPC_CORE_CONFIG_CONFIGPOS05LEN01_Msk (0x1UL << DISPC_CORE_CONFIG_CONFIGPOS05LEN01_Pos) /*!< Bit mask of
                                                                                    CONFIGPOS05LEN01 field.*/

        /* CONFIGPOS06LEN01 @Bit 6 : Indicates that DBI Type-B interface is enabled */
        #define DISPC_CORE_CONFIG_CONFIGPOS06LEN01_Pos (6UL) /*!< Position of CONFIGPOS06LEN01 field.                                */
        #define DISPC_CORE_CONFIG_CONFIGPOS06LEN01_Msk (0x1UL << DISPC_CORE_CONFIG_CONFIGPOS06LEN01_Pos) /*!< Bit mask of
                                                                                    CONFIGPOS06LEN01 field.*/

        /* CONFIGPOS07LEN01 @Bit 7 : Indicates that RGB to YUV/YCbCr converter is enabled */
        #define DISPC_CORE_CONFIG_CONFIGPOS07LEN01_Pos (7UL) /*!< Position of CONFIGPOS07LEN01 field.                                */
        #define DISPC_CORE_CONFIG_CONFIGPOS07LEN01_Msk (0x1UL << DISPC_CORE_CONFIG_CONFIGPOS07LEN01_Pos) /*!< Bit mask of
                                                                                    CONFIGPOS07LEN01 field.*/

        /* CONFIGPOS08LEN01 @Bit 8 : Indicates that layer 0 is enabled */
        #define DISPC_CORE_CONFIG_CONFIGPOS08LEN01_Pos (8UL) /*!< Position of CONFIGPOS08LEN01 field.                                */
        #define DISPC_CORE_CONFIG_CONFIGPOS08LEN01_Msk (0x1UL << DISPC_CORE_CONFIG_CONFIGPOS08LEN01_Pos) /*!< Bit mask of
                                                                                    CONFIGPOS08LEN01 field.*/

        /* CONFIGPOS09LEN01 @Bit 9 : Indicates that layer 0 has blender */
        #define DISPC_CORE_CONFIG_CONFIGPOS09LEN01_Pos (9UL) /*!< Position of CONFIGPOS09LEN01 field.                                */
        #define DISPC_CORE_CONFIG_CONFIGPOS09LEN01_Msk (0x1UL << DISPC_CORE_CONFIG_CONFIGPOS09LEN01_Pos) /*!< Bit mask of
                                                                                    CONFIGPOS09LEN01 field.*/

        /* CONFIGPOS10LEN01 @Bit 10 : Revered */
        #define DISPC_CORE_CONFIG_CONFIGPOS10LEN01_Pos (10UL) /*!< Position of CONFIGPOS10LEN01 field.                               */
        #define DISPC_CORE_CONFIG_CONFIGPOS10LEN01_Msk (0x1UL << DISPC_CORE_CONFIG_CONFIGPOS10LEN01_Pos) /*!< Bit mask of
                                                                                    CONFIGPOS10LEN01 field.*/

        /* CONFIGPOS11LEN01 @Bit 11 : Indicates that layer 0 has gamma LUT */
        #define DISPC_CORE_CONFIG_CONFIGPOS11LEN01_Pos (11UL) /*!< Position of CONFIGPOS11LEN01 field.                               */
        #define DISPC_CORE_CONFIG_CONFIGPOS11LEN01_Msk (0x1UL << DISPC_CORE_CONFIG_CONFIGPOS11LEN01_Pos) /*!< Bit mask of
                                                                                    CONFIGPOS11LEN01 field.*/

        /* CONFIGPOS12LEN01 @Bit 12 : Indicates that layer 1 is enabled */
        #define DISPC_CORE_CONFIG_CONFIGPOS12LEN01_Pos (12UL) /*!< Position of CONFIGPOS12LEN01 field.                               */
        #define DISPC_CORE_CONFIG_CONFIGPOS12LEN01_Msk (0x1UL << DISPC_CORE_CONFIG_CONFIGPOS12LEN01_Pos) /*!< Bit mask of
                                                                                    CONFIGPOS12LEN01 field.*/

        /* CONFIGPOS13LEN01 @Bit 13 : Indicates that layer 1 has blender */
        #define DISPC_CORE_CONFIG_CONFIGPOS13LEN01_Pos (13UL) /*!< Position of CONFIGPOS13LEN01 field.                               */
        #define DISPC_CORE_CONFIG_CONFIGPOS13LEN01_Msk (0x1UL << DISPC_CORE_CONFIG_CONFIGPOS13LEN01_Pos) /*!< Bit mask of
                                                                                    CONFIGPOS13LEN01 field.*/

        /* CONFIGPOS14LEN01 @Bit 14 : Revered */
        #define DISPC_CORE_CONFIG_CONFIGPOS14LEN01_Pos (14UL) /*!< Position of CONFIGPOS14LEN01 field.                               */
        #define DISPC_CORE_CONFIG_CONFIGPOS14LEN01_Msk (0x1UL << DISPC_CORE_CONFIG_CONFIGPOS14LEN01_Pos) /*!< Bit mask of
                                                                                    CONFIGPOS14LEN01 field.*/

        /* CONFIGPOS15LEN01 @Bit 15 : Indicates that layer 1 has gamma LUT */
        #define DISPC_CORE_CONFIG_CONFIGPOS15LEN01_Pos (15UL) /*!< Position of CONFIGPOS15LEN01 field.                               */
        #define DISPC_CORE_CONFIG_CONFIGPOS15LEN01_Msk (0x1UL << DISPC_CORE_CONFIG_CONFIGPOS15LEN01_Pos) /*!< Bit mask of
                                                                                    CONFIGPOS15LEN01 field.*/

        /* CONFIGPOS16LEN01 @Bit 16 : Indicates that layer 2 is enabled */
        #define DISPC_CORE_CONFIG_CONFIGPOS16LEN01_Pos (16UL) /*!< Position of CONFIGPOS16LEN01 field.                               */
        #define DISPC_CORE_CONFIG_CONFIGPOS16LEN01_Msk (0x1UL << DISPC_CORE_CONFIG_CONFIGPOS16LEN01_Pos) /*!< Bit mask of
                                                                                    CONFIGPOS16LEN01 field.*/

        /* CONFIGPOS17LEN01 @Bit 17 : Indicates that layer 2 has blender */
        #define DISPC_CORE_CONFIG_CONFIGPOS17LEN01_Pos (17UL) /*!< Position of CONFIGPOS17LEN01 field.                               */
        #define DISPC_CORE_CONFIG_CONFIGPOS17LEN01_Msk (0x1UL << DISPC_CORE_CONFIG_CONFIGPOS17LEN01_Pos) /*!< Bit mask of
                                                                                    CONFIGPOS17LEN01 field.*/

        /* CONFIGPOS18LEN01 @Bit 18 : Revered */
        #define DISPC_CORE_CONFIG_CONFIGPOS18LEN01_Pos (18UL) /*!< Position of CONFIGPOS18LEN01 field.                               */
        #define DISPC_CORE_CONFIG_CONFIGPOS18LEN01_Msk (0x1UL << DISPC_CORE_CONFIG_CONFIGPOS18LEN01_Pos) /*!< Bit mask of
                                                                                    CONFIGPOS18LEN01 field.*/

        /* CONFIGPOS19LEN01 @Bit 19 : Indicates that layer 2 has gamma LUT */
        #define DISPC_CORE_CONFIG_CONFIGPOS19LEN01_Pos (19UL) /*!< Position of CONFIGPOS19LEN01 field.                               */
        #define DISPC_CORE_CONFIG_CONFIGPOS19LEN01_Msk (0x1UL << DISPC_CORE_CONFIG_CONFIGPOS19LEN01_Pos) /*!< Bit mask of
                                                                                    CONFIGPOS19LEN01 field.*/

        /* CONFIGPOS20LEN01 @Bit 20 : Indicates that layer 3 is enabled */
        #define DISPC_CORE_CONFIG_CONFIGPOS20LEN01_Pos (20UL) /*!< Position of CONFIGPOS20LEN01 field.                               */
        #define DISPC_CORE_CONFIG_CONFIGPOS20LEN01_Msk (0x1UL << DISPC_CORE_CONFIG_CONFIGPOS20LEN01_Pos) /*!< Bit mask of
                                                                                    CONFIGPOS20LEN01 field.*/

        /* CONFIGPOS21LEN01 @Bit 21 : Indicates that layer 3 has blender */
        #define DISPC_CORE_CONFIG_CONFIGPOS21LEN01_Pos (21UL) /*!< Position of CONFIGPOS21LEN01 field.                               */
        #define DISPC_CORE_CONFIG_CONFIGPOS21LEN01_Msk (0x1UL << DISPC_CORE_CONFIG_CONFIGPOS21LEN01_Pos) /*!< Bit mask of
                                                                                    CONFIGPOS21LEN01 field.*/

        /* CONFIGPOS22LEN01 @Bit 22 : Revered */
        #define DISPC_CORE_CONFIG_CONFIGPOS22LEN01_Pos (22UL) /*!< Position of CONFIGPOS22LEN01 field.                               */
        #define DISPC_CORE_CONFIG_CONFIGPOS22LEN01_Msk (0x1UL << DISPC_CORE_CONFIG_CONFIGPOS22LEN01_Pos) /*!< Bit mask of
                                                                                    CONFIGPOS22LEN01 field.*/

        /* CONFIGPOS23LEN01 @Bit 23 : Indicates that layer 3 has gamma LUT */
        #define DISPC_CORE_CONFIG_CONFIGPOS23LEN01_Pos (23UL) /*!< Position of CONFIGPOS23LEN01 field.                               */
        #define DISPC_CORE_CONFIG_CONFIGPOS23LEN01_Msk (0x1UL << DISPC_CORE_CONFIG_CONFIGPOS23LEN01_Pos) /*!< Bit mask of
                                                                                    CONFIGPOS23LEN01 field.*/

        /* CONFIGPOS24LEN04 @Bits 24..27 : Revered */
        #define DISPC_CORE_CONFIG_CONFIGPOS24LEN04_Pos (24UL) /*!< Position of CONFIGPOS24LEN04 field.                               */
        #define DISPC_CORE_CONFIG_CONFIGPOS24LEN04_Msk (0xFUL << DISPC_CORE_CONFIG_CONFIGPOS24LEN04_Pos) /*!< Bit mask of
                                                                                    CONFIGPOS24LEN04 field.*/

        /* CONFIGPOS28LEN01 @Bit 28 : Indicates that layer 0 has YUV Memory */
        #define DISPC_CORE_CONFIG_CONFIGPOS28LEN01_Pos (28UL) /*!< Position of CONFIGPOS28LEN01 field.                               */
        #define DISPC_CORE_CONFIG_CONFIGPOS28LEN01_Msk (0x1UL << DISPC_CORE_CONFIG_CONFIGPOS28LEN01_Pos) /*!< Bit mask of
                                                                                    CONFIGPOS28LEN01 field.*/

        /* CONFIGPOS29LEN01 @Bit 29 : Indicates that layer 1 has YUV Memory */
        #define DISPC_CORE_CONFIG_CONFIGPOS29LEN01_Pos (29UL) /*!< Position of CONFIGPOS29LEN01 field.                               */
        #define DISPC_CORE_CONFIG_CONFIGPOS29LEN01_Msk (0x1UL << DISPC_CORE_CONFIG_CONFIGPOS29LEN01_Pos) /*!< Bit mask of
                                                                                    CONFIGPOS29LEN01 field.*/

        /* CONFIGPOS30LEN01 @Bit 30 : Indicates that layer 2 has YUV Memory */
        #define DISPC_CORE_CONFIG_CONFIGPOS30LEN01_Pos (30UL) /*!< Position of CONFIGPOS30LEN01 field.                               */
        #define DISPC_CORE_CONFIG_CONFIGPOS30LEN01_Msk (0x1UL << DISPC_CORE_CONFIG_CONFIGPOS30LEN01_Pos) /*!< Bit mask of
                                                                                    CONFIGPOS30LEN01 field.*/

        /* CONFIGPOS31LEN01 @Bit 31 : Indicates that layer 3 has YUV Memory */
        #define DISPC_CORE_CONFIG_CONFIGPOS31LEN01_Pos (31UL) /*!< Position of CONFIGPOS31LEN01 field.                               */
        #define DISPC_CORE_CONFIG_CONFIGPOS31LEN01_Msk (0x1UL << DISPC_CORE_CONFIG_CONFIGPOS31LEN01_Pos) /*!< Bit mask of
                                                                                    CONFIGPOS31LEN01 field.*/


        /* DISPC_CORE_IDREG: Identification Register. */
        #define DISPC_CORE_IDREG_ResetValue (0x87452365UL) /*!< Reset value of IDREG register.                                       */

        /* IDREG @Bits 0..31 : Constant ID value */
        #define DISPC_CORE_IDREG_IDREG_Pos (0UL)           /*!< Position of IDREG field.                                             */
        #define DISPC_CORE_IDREG_IDREG_Msk (0xFFFFFFFFUL << DISPC_CORE_IDREG_IDREG_Pos) /*!< Bit mask of IDREG field.                */


        /* DISPC_CORE_INTERRUPT: Interrupt register */
        #define DISPC_CORE_INTERRUPT_ResetValue (0x00000001UL) /*!< Reset value of INTERRUPT register.                               */

        /* INTERRUPTPOS00LEN01 @Bit 0 : When set to 1, VSYNC interrupt enabled */
        #define DISPC_CORE_INTERRUPT_INTERRUPTPOS00LEN01_Pos (0UL) /*!< Position of INTERRUPTPOS00LEN01 field.                       */
        #define DISPC_CORE_INTERRUPT_INTERRUPTPOS00LEN01_Msk (0x1UL << DISPC_CORE_INTERRUPT_INTERRUPTPOS00LEN01_Pos) /*!< Bit mask of
                                                                                    INTERRUPTPOS00LEN01 field.*/

        /* INTERRUPTPOS01LEN01 @Bit 1 : When set to 1, HSYNC interrupt enabled */
        #define DISPC_CORE_INTERRUPT_INTERRUPTPOS01LEN01_Pos (1UL) /*!< Position of INTERRUPTPOS01LEN01 field.                       */
        #define DISPC_CORE_INTERRUPT_INTERRUPTPOS01LEN01_Msk (0x1UL << DISPC_CORE_INTERRUPT_INTERRUPTPOS01LEN01_Pos) /*!< Bit mask of
                                                                                    INTERRUPTPOS01LEN01 field.*/

        /* INTERRUPTPOS02LEN01 @Bit 2 : When set to 1, signals an interrupt on MMU error */
        #define DISPC_CORE_INTERRUPT_INTERRUPTPOS02LEN01_Pos (2UL) /*!< Position of INTERRUPTPOS02LEN01 field.                       */
        #define DISPC_CORE_INTERRUPT_INTERRUPTPOS02LEN01_Msk (0x1UL << DISPC_CORE_INTERRUPT_INTERRUPTPOS02LEN01_Pos) /*!< Bit mask of
                                                                                    INTERRUPTPOS02LEN01 field.*/

        /* INTERRUPTPOS03LEN01 @Bit 3 : When set to 1, TE interrupt enabled */
        #define DISPC_CORE_INTERRUPT_INTERRUPTPOS03LEN01_Pos (3UL) /*!< Position of INTERRUPTPOS03LEN01 field.                       */
        #define DISPC_CORE_INTERRUPT_INTERRUPTPOS03LEN01_Msk (0x1UL << DISPC_CORE_INTERRUPT_INTERRUPTPOS03LEN01_Pos) /*!< Bit mask of
                                                                                    INTERRUPTPOS03LEN01 field.*/

        /* INTERRUPTPOS04LEN01 @Bit 4 : When set to 1, signals an interrupt on Frame End */
        #define DISPC_CORE_INTERRUPT_INTERRUPTPOS04LEN01_Pos (4UL) /*!< Position of INTERRUPTPOS04LEN01 field.                       */
        #define DISPC_CORE_INTERRUPT_INTERRUPTPOS04LEN01_Msk (0x1UL << DISPC_CORE_INTERRUPT_INTERRUPTPOS04LEN01_Pos) /*!< Bit mask of
                                                                                    INTERRUPTPOS04LEN01 field.*/

        /* INTERRUPTPOS05LEN25 @Bits 5..29 : Revered */
        #define DISPC_CORE_INTERRUPT_INTERRUPTPOS05LEN25_Pos (5UL) /*!< Position of INTERRUPTPOS05LEN25 field.                       */
        #define DISPC_CORE_INTERRUPT_INTERRUPTPOS05LEN25_Msk (0x1FFFFFFUL << DISPC_CORE_INTERRUPT_INTERRUPTPOS05LEN25_Pos) /*!< Bit
                                                                                    mask of INTERRUPTPOS05LEN25 field.*/

        /* INTERRUPTPOS30LEN01 @Bit 30 : Indicates IRQ is underway */
        #define DISPC_CORE_INTERRUPT_INTERRUPTPOS30LEN01_Pos (30UL) /*!< Position of INTERRUPTPOS30LEN01 field.                      */
        #define DISPC_CORE_INTERRUPT_INTERRUPTPOS30LEN01_Msk (0x1UL << DISPC_CORE_INTERRUPT_INTERRUPTPOS30LEN01_Pos) /*!< Bit mask of
                                                                                    INTERRUPTPOS30LEN01 field.*/

        /* INTERRUPTPOS31LEN01 @Bit 31 : Interrupt request trigger control */
        #define DISPC_CORE_INTERRUPT_INTERRUPTPOS31LEN01_Pos (31UL) /*!< Position of INTERRUPTPOS31LEN01 field.                      */
        #define DISPC_CORE_INTERRUPT_INTERRUPTPOS31LEN01_Msk (0x1UL << DISPC_CORE_INTERRUPT_INTERRUPTPOS31LEN01_Pos) /*!< Bit mask of
                                                                                    INTERRUPTPOS31LEN01 field.*/


        /* DISPC_CORE_STATUS: Status register */
        #define DISPC_CORE_STATUS_ResetValue (0x00000000UL) /*!< Reset value of STATUS register.                                     */

        /* STATUSPOS00LEN01 @Bit 0 : Indicates that the controller is not in active vertical blanking */
        #define DISPC_CORE_STATUS_STATUSPOS00LEN01_Pos (0UL) /*!< Position of STATUSPOS00LEN01 field.                                */
        #define DISPC_CORE_STATUS_STATUSPOS00LEN01_Msk (0x1UL << DISPC_CORE_STATUS_STATUSPOS00LEN01_Pos) /*!< Bit mask of
                                                                                    STATUSPOS00LEN01 field.*/

        /* STATUSPOS01LEN01 @Bit 1 : Indicates the DE signal status (0 or 1) at the current time of reading */
        #define DISPC_CORE_STATUS_STATUSPOS01LEN01_Pos (1UL) /*!< Position of STATUSPOS01LEN01 field.                                */
        #define DISPC_CORE_STATUS_STATUSPOS01LEN01_Msk (0x1UL << DISPC_CORE_STATUS_STATUSPOS01LEN01_Pos) /*!< Bit mask of
                                                                                    STATUSPOS01LEN01 field.*/

        /* STATUSPOS02LEN01 @Bit 2 : Indicates the HSYNC signal status (0 or 1) at the current time of reading */
        #define DISPC_CORE_STATUS_STATUSPOS02LEN01_Pos (2UL) /*!< Position of STATUSPOS02LEN01 field.                                */
        #define DISPC_CORE_STATUS_STATUSPOS02LEN01_Msk (0x1UL << DISPC_CORE_STATUS_STATUSPOS02LEN01_Pos) /*!< Bit mask of
                                                                                    STATUSPOS02LEN01 field.*/

        /* STATUSPOS03LEN01 @Bit 3 : Indicates the VSYNC signal status and the tearing effect signal */
        #define DISPC_CORE_STATUS_STATUSPOS03LEN01_Pos (3UL) /*!< Position of STATUSPOS03LEN01 field.                                */
        #define DISPC_CORE_STATUS_STATUSPOS03LEN01_Msk (0x1UL << DISPC_CORE_STATUS_STATUSPOS03LEN01_Pos) /*!< Bit mask of
                                                                                    STATUSPOS03LEN01 field.*/

        /* STATUSPOS04LEN01 @Bit 4 : Indicates the CSYNC signal status (0 or 1) at the current time of reading */
        #define DISPC_CORE_STATUS_STATUSPOS04LEN01_Pos (4UL) /*!< Position of STATUSPOS04LEN01 field.                                */
        #define DISPC_CORE_STATUS_STATUSPOS04LEN01_Msk (0x1UL << DISPC_CORE_STATUS_STATUSPOS04LEN01_Pos) /*!< Bit mask of
                                                                                    STATUSPOS04LEN01 field.*/

        /* STATUSPOS05LEN01 @Bit 5 : Indicates that the last row is currently displayed */
        #define DISPC_CORE_STATUS_STATUSPOS05LEN01_Pos (5UL) /*!< Position of STATUSPOS05LEN01 field.                                */
        #define DISPC_CORE_STATUS_STATUSPOS05LEN01_Msk (0x1UL << DISPC_CORE_STATUS_STATUSPOS05LEN01_Pos) /*!< Bit mask of
                                                                                    STATUSPOS05LEN01 field.*/

        /* STATUSPOS06LEN01 @Bit 6 : Indicates current underflow */
        #define DISPC_CORE_STATUS_STATUSPOS06LEN01_Pos (6UL) /*!< Position of STATUSPOS06LEN01 field.                                */
        #define DISPC_CORE_STATUS_STATUSPOS06LEN01_Msk (0x1UL << DISPC_CORE_STATUS_STATUSPOS06LEN01_Pos) /*!< Bit mask of
                                                                                    STATUSPOS06LEN01 field.*/

        /* STATUSPOS07LEN01 @Bit 7 : Indicates sticky underflow. This bit clears when interrupt register is written */
        #define DISPC_CORE_STATUS_STATUSPOS07LEN01_Pos (7UL) /*!< Position of STATUSPOS07LEN01 field.                                */
        #define DISPC_CORE_STATUS_STATUSPOS07LEN01_Msk (0x1UL << DISPC_CORE_STATUS_STATUSPOS07LEN01_Pos) /*!< Bit mask of
                                                                                    STATUSPOS07LEN01 field.*/

        /* STATUSPOS08LEN01 @Bit 8 : Indicates DBI Type-B tearing effect */
        #define DISPC_CORE_STATUS_STATUSPOS08LEN01_Pos (8UL) /*!< Position of STATUSPOS08LEN01 field.                                */
        #define DISPC_CORE_STATUS_STATUSPOS08LEN01_Msk (0x1UL << DISPC_CORE_STATUS_STATUSPOS08LEN01_Pos) /*!< Bit mask of
                                                                                    STATUSPOS08LEN01 field.*/

        /* STATUSPOS09LEN01 @Bit 9 : Revered */
        #define DISPC_CORE_STATUS_STATUSPOS09LEN01_Pos (9UL) /*!< Position of STATUSPOS09LEN01 field.                                */
        #define DISPC_CORE_STATUS_STATUSPOS09LEN01_Msk (0x1UL << DISPC_CORE_STATUS_STATUSPOS09LEN01_Pos) /*!< Bit mask of
                                                                                    STATUSPOS09LEN01 field.*/

        /* STATUSPOS10LEN01 @Bit 10 : Indicates pending RGB data in DBI Type-B interface */
        #define DISPC_CORE_STATUS_STATUSPOS10LEN01_Pos (10UL) /*!< Position of STATUSPOS10LEN01 field.                               */
        #define DISPC_CORE_STATUS_STATUSPOS10LEN01_Msk (0x1UL << DISPC_CORE_STATUS_STATUSPOS10LEN01_Pos) /*!< Bit mask of
                                                                                    STATUSPOS10LEN01 field.*/

        /* STATUSPOS11LEN01 @Bit 11 : Indicates pending commands in DBI Type-B interface */
        #define DISPC_CORE_STATUS_STATUSPOS11LEN01_Pos (11UL) /*!< Position of STATUSPOS11LEN01 field.                               */
        #define DISPC_CORE_STATUS_STATUSPOS11LEN01_Msk (0x1UL << DISPC_CORE_STATUS_STATUSPOS11LEN01_Pos) /*!< Bit mask of
                                                                                    STATUSPOS11LEN01 field.*/

        /* STATUSPOS12LEN01 @Bit 12 : Indicates pending output transaction in DBI Type-B interface */
        #define DISPC_CORE_STATUS_STATUSPOS12LEN01_Pos (12UL) /*!< Position of STATUSPOS12LEN01 field.                               */
        #define DISPC_CORE_STATUS_STATUSPOS12LEN01_Msk (0x1UL << DISPC_CORE_STATUS_STATUSPOS12LEN01_Pos) /*!< Bit mask of
                                                                                    STATUSPOS12LEN01 field.*/

        /* STATUSPOS13LEN01 @Bit 13 : Indicates Frame end */
        #define DISPC_CORE_STATUS_STATUSPOS13LEN01_Pos (13UL) /*!< Position of STATUSPOS13LEN01 field.                               */
        #define DISPC_CORE_STATUS_STATUSPOS13LEN01_Msk (0x1UL << DISPC_CORE_STATUS_STATUSPOS13LEN01_Pos) /*!< Bit mask of
                                                                                    STATUSPOS13LEN01 field.*/

        /* STATUSPOS14LEN01 @Bit 14 : Indicates DBI/SPI CS status */
        #define DISPC_CORE_STATUS_STATUSPOS14LEN01_Pos (14UL) /*!< Position of STATUSPOS14LEN01 field.                               */
        #define DISPC_CORE_STATUS_STATUSPOS14LEN01_Msk (0x1UL << DISPC_CORE_STATUS_STATUSPOS14LEN01_Pos) /*!< Bit mask of
                                                                                    STATUSPOS14LEN01 field.*/

        /* STATUSPOS15LEN01 @Bit 15 : Indicates the DBI Command fifo ack */
        #define DISPC_CORE_STATUS_STATUSPOS15LEN01_Pos (15UL) /*!< Position of STATUSPOS15LEN01 field.                               */
        #define DISPC_CORE_STATUS_STATUSPOS15LEN01_Msk (0x1UL << DISPC_CORE_STATUS_STATUSPOS15LEN01_Pos) /*!< Bit mask of
                                                                                    STATUSPOS15LEN01 field.*/

        /* STATUSPOS16LEN01 @Bit 16 : Indicates read/write operation on SPI */
        #define DISPC_CORE_STATUS_STATUSPOS16LEN01_Pos (16UL) /*!< Position of STATUSPOS16LEN01 field.                               */
        #define DISPC_CORE_STATUS_STATUSPOS16LEN01_Msk (0x1UL << DISPC_CORE_STATUS_STATUSPOS16LEN01_Pos) /*!< Bit mask of
                                                                                    STATUSPOS16LEN01 field.*/

        /* STATUSPOS17LEN01 @Bit 17 : Indicates CRC Register read ready */
        #define DISPC_CORE_STATUS_STATUSPOS17LEN01_Pos (17UL) /*!< Position of STATUSPOS17LEN01 field.                               */
        #define DISPC_CORE_STATUS_STATUSPOS17LEN01_Msk (0x1UL << DISPC_CORE_STATUS_STATUSPOS17LEN01_Pos) /*!< Bit mask of
                                                                                    STATUSPOS17LEN01 field.*/

        /* STATUSPOS17LEN14 @Bits 18..31 : Revered */
        #define DISPC_CORE_STATUS_STATUSPOS17LEN14_Pos (18UL) /*!< Position of STATUSPOS17LEN14 field.                               */
        #define DISPC_CORE_STATUS_STATUSPOS17LEN14_Msk (0x3FFFUL << DISPC_CORE_STATUS_STATUSPOS17LEN14_Pos) /*!< Bit mask of
                                                                                    STATUSPOS17LEN14 field.*/


        /* DISPC_CORE_COLMOD: Color mode status register. */
        #define DISPC_CORE_COLMOD_ResetValue (0x0067FFFDUL) /*!< Reset value of COLMOD register.                                     */

        /* COLMODPOS00LEN01 @Bit 0 : Zero value indicates that the TSc4/TSc6 propietary color format is enabled */
        #define DISPC_CORE_COLMOD_COLMODPOS00LEN01_Pos (0UL) /*!< Position of COLMODPOS00LEN01 field.                                */
        #define DISPC_CORE_COLMOD_COLMODPOS00LEN01_Msk (0x1UL << DISPC_CORE_COLMOD_COLMODPOS00LEN01_Pos) /*!< Bit mask of
                                                                                    COLMODPOS00LEN01 field.*/

        /* COLMODPOS01LEN01 @Bit 1 : Zero value indicates that the TLYUV420 color format is enabled */
        #define DISPC_CORE_COLMOD_COLMODPOS01LEN01_Pos (1UL) /*!< Position of COLMODPOS01LEN01 field.                                */
        #define DISPC_CORE_COLMOD_COLMODPOS01LEN01_Msk (0x1UL << DISPC_CORE_COLMOD_COLMODPOS01LEN01_Pos) /*!< Bit mask of
                                                                                    COLMODPOS01LEN01 field.*/

        /* COLMODPOS02LEN01 @Bit 2 : Zero value indicates that the V_YUV420 color format is enabled */
        #define DISPC_CORE_COLMOD_COLMODPOS02LEN01_Pos (2UL) /*!< Position of COLMODPOS02LEN01 field.                                */
        #define DISPC_CORE_COLMOD_COLMODPOS02LEN01_Msk (0x1UL << DISPC_CORE_COLMOD_COLMODPOS02LEN01_Pos) /*!< Bit mask of
                                                                                    COLMODPOS02LEN01 field.*/

        /* COLMODPOS03LEN01 @Bit 3 : Zero value indicates that the BGRA8888 32-bit color format is enabled */
        #define DISPC_CORE_COLMOD_COLMODPOS03LEN01_Pos (3UL) /*!< Position of COLMODPOS03LEN01 field.                                */
        #define DISPC_CORE_COLMOD_COLMODPOS03LEN01_Msk (0x1UL << DISPC_CORE_COLMOD_COLMODPOS03LEN01_Pos) /*!< Bit mask of
                                                                                    COLMODPOS03LEN01 field.*/

        /* COLMODPOS04LEN01 @Bit 4 : Zero value indicates that the ABGR8888 32-bit color format is enabled */
        #define DISPC_CORE_COLMOD_COLMODPOS04LEN01_Pos (4UL) /*!< Position of COLMODPOS04LEN01 field.                                */
        #define DISPC_CORE_COLMOD_COLMODPOS04LEN01_Msk (0x1UL << DISPC_CORE_COLMOD_COLMODPOS04LEN01_Pos) /*!< Bit mask of
                                                                                    COLMODPOS04LEN01 field.*/

        /* COLMODPOS05LEN01 @Bit 5 : Zero value indicates that the YUY2 color format is enabled */
        #define DISPC_CORE_COLMOD_COLMODPOS05LEN01_Pos (5UL) /*!< Position of COLMODPOS05LEN01 field.                                */
        #define DISPC_CORE_COLMOD_COLMODPOS05LEN01_Msk (0x1UL << DISPC_CORE_COLMOD_COLMODPOS05LEN01_Pos) /*!< Bit mask of
                                                                                    COLMODPOS05LEN01 field.*/

        /* COLMODPOS06LEN01 @Bit 6 : Zero value indicates that the RGB888 24-bit color format is enabled */
        #define DISPC_CORE_COLMOD_COLMODPOS06LEN01_Pos (6UL) /*!< Position of COLMODPOS06LEN01 field.                                */
        #define DISPC_CORE_COLMOD_COLMODPOS06LEN01_Msk (0x1UL << DISPC_CORE_COLMOD_COLMODPOS06LEN01_Pos) /*!< Bit mask of
                                                                                    COLMODPOS06LEN01 field.*/

        /* COLMODPOS07LEN01 @Bit 7 : Zero value indicates that the YUYV color format is enabled */
        #define DISPC_CORE_COLMOD_COLMODPOS07LEN01_Pos (7UL) /*!< Position of COLMODPOS07LEN01 field.                                */
        #define DISPC_CORE_COLMOD_COLMODPOS07LEN01_Msk (0x1UL << DISPC_CORE_COLMOD_COLMODPOS07LEN01_Pos) /*!< Bit mask of
                                                                                    COLMODPOS07LEN01 field.*/

        /* COLMODPOS08LEN01 @Bit 8 : Zero value indicates that the L4 color format is enabled */
        #define DISPC_CORE_COLMOD_COLMODPOS08LEN01_Pos (8UL) /*!< Position of COLMODPOS08LEN01 field.                                */
        #define DISPC_CORE_COLMOD_COLMODPOS08LEN01_Msk (0x1UL << DISPC_CORE_COLMOD_COLMODPOS08LEN01_Pos) /*!< Bit mask of
                                                                                    COLMODPOS08LEN01 field.*/

        /* COLMODPOS09LEN01 @Bit 9 : Zero value indicates that the L1 color format is enabled */
        #define DISPC_CORE_COLMOD_COLMODPOS09LEN01_Pos (9UL) /*!< Position of COLMODPOS09LEN01 field.                                */
        #define DISPC_CORE_COLMOD_COLMODPOS09LEN01_Msk (0x1UL << DISPC_CORE_COLMOD_COLMODPOS09LEN01_Pos) /*!< Bit mask of
                                                                                    COLMODPOS09LEN01 field.*/

        /* COLMODPOS10LEN01 @Bit 10 : Zero value indicates that the L8 color format is enabled */
        #define DISPC_CORE_COLMOD_COLMODPOS10LEN01_Pos (10UL) /*!< Position of COLMODPOS10LEN01 field.                               */
        #define DISPC_CORE_COLMOD_COLMODPOS10LEN01_Msk (0x1UL << DISPC_CORE_COLMOD_COLMODPOS10LEN01_Pos) /*!< Bit mask of
                                                                                    COLMODPOS10LEN01 field.*/

        /* COLMODPOS11LEN01 @Bit 11 : Zero value indicates that the ARGB8888 32-bit color format is enabled */
        #define DISPC_CORE_COLMOD_COLMODPOS11LEN01_Pos (11UL) /*!< Position of COLMODPOS11LEN01 field.                               */
        #define DISPC_CORE_COLMOD_COLMODPOS11LEN01_Msk (0x1UL << DISPC_CORE_COLMOD_COLMODPOS11LEN01_Pos) /*!< Bit mask of
                                                                                    COLMODPOS11LEN01 field.*/

        /* COLMODPOS12LEN01 @Bit 12 : Zero value indicates that the RGB565 16-bit color format is enabled */
        #define DISPC_CORE_COLMOD_COLMODPOS12LEN01_Pos (12UL) /*!< Position of COLMODPOS12LEN01 field.                               */
        #define DISPC_CORE_COLMOD_COLMODPOS12LEN01_Msk (0x1UL << DISPC_CORE_COLMOD_COLMODPOS12LEN01_Pos) /*!< Bit mask of
                                                                                    COLMODPOS12LEN01 field.*/

        /* COLMODPOS13LEN01 @Bit 13 : Zero value indicates that the RGB332 8-bit color format is enabled */
        #define DISPC_CORE_COLMOD_COLMODPOS13LEN01_Pos (13UL) /*!< Position of COLMODPOS13LEN01 field.                               */
        #define DISPC_CORE_COLMOD_COLMODPOS13LEN01_Msk (0x1UL << DISPC_CORE_COLMOD_COLMODPOS13LEN01_Pos) /*!< Bit mask of
                                                                                    COLMODPOS13LEN01 field.*/

        /* COLMODPOS14LEN01 @Bit 14 : Zero value indicates that the RGBA8888 32-bit color format is enabled */
        #define DISPC_CORE_COLMOD_COLMODPOS14LEN01_Pos (14UL) /*!< Position of COLMODPOS14LEN01 field.                               */
        #define DISPC_CORE_COLMOD_COLMODPOS14LEN01_Msk (0x1UL << DISPC_CORE_COLMOD_COLMODPOS14LEN01_Pos) /*!< Bit mask of
                                                                                    COLMODPOS14LEN01 field.*/

        /* COLMODPOS15LEN01 @Bit 15 : Zero value indicates that the RGBA5551 16-bit color format is enabled */
        #define DISPC_CORE_COLMOD_COLMODPOS15LEN01_Pos (15UL) /*!< Position of COLMODPOS15LEN01 field.                               */
        #define DISPC_CORE_COLMOD_COLMODPOS15LEN01_Msk (0x1UL << DISPC_CORE_COLMOD_COLMODPOS15LEN01_Pos) /*!< Bit mask of
                                                                                    COLMODPOS15LEN01 field.*/

        /* COLMODPOS16LEN01 @Bit 16 : Zero value indicates that the LUT8 color format is enabled */
        #define DISPC_CORE_COLMOD_COLMODPOS16LEN01_Pos (16UL) /*!< Position of COLMODPOS16LEN01 field.                               */
        #define DISPC_CORE_COLMOD_COLMODPOS16LEN01_Msk (0x1UL << DISPC_CORE_COLMOD_COLMODPOS16LEN01_Pos) /*!< Bit mask of
                                                                                    COLMODPOS16LEN01 field.*/

        /* COLMODPOS17LEN01 @Bit 17 : High value indicates that TSC4 is enabled */
        #define DISPC_CORE_COLMOD_COLMODPOS17LEN01_Pos (17UL) /*!< Position of COLMODPOS17LEN01 field.                               */
        #define DISPC_CORE_COLMOD_COLMODPOS17LEN01_Msk (0x1UL << DISPC_CORE_COLMOD_COLMODPOS17LEN01_Pos) /*!< Bit mask of
                                                                                    COLMODPOS17LEN01 field.*/

        /* COLMODPOS18LEN01 @Bit 18 : High value indicate that TSC6 is enabled */
        #define DISPC_CORE_COLMOD_COLMODPOS18LEN01_Pos (18UL) /*!< Position of COLMODPOS18LEN01 field.                               */
        #define DISPC_CORE_COLMOD_COLMODPOS18LEN01_Msk (0x1UL << DISPC_CORE_COLMOD_COLMODPOS18LEN01_Pos) /*!< Bit mask of
                                                                                    COLMODPOS18LEN01 field.*/

        /* COLMODPOS19LEN01 @Bit 19 : Revered */
        #define DISPC_CORE_COLMOD_COLMODPOS19LEN01_Pos (19UL) /*!< Position of COLMODPOS19LEN01 field.                               */
        #define DISPC_CORE_COLMOD_COLMODPOS19LEN01_Msk (0x1UL << DISPC_CORE_COLMOD_COLMODPOS19LEN01_Pos) /*!< Bit mask of
                                                                                    COLMODPOS19LEN01 field.*/

        /* COLMODPOS20LEN01 @Bit 20 : Revered */
        #define DISPC_CORE_COLMOD_COLMODPOS20LEN01_Pos (20UL) /*!< Position of COLMODPOS20LEN01 field.                               */
        #define DISPC_CORE_COLMOD_COLMODPOS20LEN01_Msk (0x1UL << DISPC_CORE_COLMOD_COLMODPOS20LEN01_Pos) /*!< Bit mask of
                                                                                    COLMODPOS20LEN01 field.*/

        /* COLMODPOS21LEN01 @Bit 21 : Zero value indicates that the RGBA4444 16-bit color format is enabled */
        #define DISPC_CORE_COLMOD_COLMODPOS21LEN01_Pos (21UL) /*!< Position of COLMODPOS21LEN01 field.                               */
        #define DISPC_CORE_COLMOD_COLMODPOS21LEN01_Msk (0x1UL << DISPC_CORE_COLMOD_COLMODPOS21LEN01_Pos) /*!< Bit mask of
                                                                                    COLMODPOS21LEN01 field.*/

        /* COLMODPOS22LEN01 @Bit 22 : Zero value indicates that the ARGB4444 16-bit color format is enabled */
        #define DISPC_CORE_COLMOD_COLMODPOS22LEN01_Pos (22UL) /*!< Position of COLMODPOS22LEN01 field.                               */
        #define DISPC_CORE_COLMOD_COLMODPOS22LEN01_Msk (0x1UL << DISPC_CORE_COLMOD_COLMODPOS22LEN01_Pos) /*!< Bit mask of
                                                                                    COLMODPOS22LEN01 field.*/

        /* COLMODPOS23LEN06 @Bits 23..28 : Revered */
        #define DISPC_CORE_COLMOD_COLMODPOS23LEN06_Pos (23UL) /*!< Position of COLMODPOS23LEN06 field.                               */
        #define DISPC_CORE_COLMOD_COLMODPOS23LEN06_Msk (0x3FUL << DISPC_CORE_COLMOD_COLMODPOS23LEN06_Pos) /*!< Bit mask of
                                                                                    COLMODPOS23LEN06 field.*/

        /* COLMODPOS29LEN01 @Bit 29 : High value indicate that display is equiped with JDI */
        #define DISPC_CORE_COLMOD_COLMODPOS29LEN01_Pos (29UL) /*!< Position of COLMODPOS29LEN01 field.                               */
        #define DISPC_CORE_COLMOD_COLMODPOS29LEN01_Msk (0x1UL << DISPC_CORE_COLMOD_COLMODPOS29LEN01_Pos) /*!< Bit mask of
                                                                                    COLMODPOS29LEN01 field.*/

        /* COLMODPOS30LEN01 @Bit 30 : Revered */
        #define DISPC_CORE_COLMOD_COLMODPOS30LEN01_Pos (30UL) /*!< Position of COLMODPOS30LEN01 field.                               */
        #define DISPC_CORE_COLMOD_COLMODPOS30LEN01_Msk (0x1UL << DISPC_CORE_COLMOD_COLMODPOS30LEN01_Pos) /*!< Bit mask of
                                                                                    COLMODPOS30LEN01 field.*/

        /* COLMODPOS31LEN01 @Bit 31 : Revered */
        #define DISPC_CORE_COLMOD_COLMODPOS31LEN01_Pos (31UL) /*!< Position of COLMODPOS31LEN01 field.                               */
        #define DISPC_CORE_COLMOD_COLMODPOS31LEN01_Msk (0x1UL << DISPC_CORE_COLMOD_COLMODPOS31LEN01_Pos) /*!< Bit mask of
                                                                                    COLMODPOS31LEN01 field.*/


        /* DISPC_CORE_CRC: If CRC errors occur, they are written in the CORE_CRC register */
        #define DISPC_CORE_CRC_ResetValue (0x00000000UL)   /*!< Reset value of CRC register.                                         */

        /* CRC @Bits 0..31 : CRC value if CRC error exists */
        #define DISPC_CORE_CRC_CRC_Pos (0UL)               /*!< Position of CRC field.                                               */
        #define DISPC_CORE_CRC_CRC_Msk (0xFFFFFFFFUL << DISPC_CORE_CRC_CRC_Pos) /*!< Bit mask of CRC field.                          */


        /* DISPC_CORE_LAYER2UBASE: The start address of the U chroma for layer 2 YUV planar format. */
        #define DISPC_CORE_LAYER2UBASE_ResetValue (0x00000000UL) /*!< Reset value of LAYER2UBASE register.                           */

        /* LAYER2UBASE @Bits 0..31 : Specify the start address of U chroma for layer 2 */
        #define DISPC_CORE_LAYER2UBASE_LAYER2UBASE_Pos (0UL) /*!< Position of LAYER2UBASE field.                                     */
        #define DISPC_CORE_LAYER2UBASE_LAYER2UBASE_Msk (0xFFFFFFFFUL << DISPC_CORE_LAYER2UBASE_LAYER2UBASE_Pos) /*!< Bit mask of
                                                                                    LAYER2UBASE field.*/


        /* DISPC_CORE_LAYER2VBASE: The start address of the V chroma for layer 2 YUV planar format. */
        #define DISPC_CORE_LAYER2VBASE_ResetValue (0x00000000UL) /*!< Reset value of LAYER2VBASE register.                           */

        /* LAYER2VBASE @Bits 0..31 : Specify the start address of V chroma for layer 2 */
        #define DISPC_CORE_LAYER2VBASE_LAYER2VBASE_Pos (0UL) /*!< Position of LAYER2VBASE field.                                     */
        #define DISPC_CORE_LAYER2VBASE_LAYER2VBASE_Msk (0xFFFFFFFFUL << DISPC_CORE_LAYER2VBASE_LAYER2VBASE_Pos) /*!< Bit mask of
                                                                                    LAYER2VBASE field.*/


        /* DISPC_CORE_LAYER2UVSTRIDE: Specify the stride for layer 2 YUV planar format. */
        #define DISPC_CORE_LAYER2UVSTRIDE_ResetValue (0x00000000UL) /*!< Reset value of LAYER2UVSTRIDE register.                     */

        /* LAYER2UVSTRIDE @Bits 0..31 : Specify the stride for layer 2 YUV planar format. */
        #define DISPC_CORE_LAYER2UVSTRIDE_LAYER2UVSTRIDE_Pos (0UL) /*!< Position of LAYER2UVSTRIDE field.                            */
        #define DISPC_CORE_LAYER2UVSTRIDE_LAYER2UVSTRIDE_Msk (0xFFFFFFFFUL << DISPC_CORE_LAYER2UVSTRIDE_LAYER2UVSTRIDE_Pos) /*!< Bit
                                                                                    mask of LAYER2UVSTRIDE field.*/


        /* DISPC_CORE_LAYER3UBASE: The start address of the U chroma for layer 3 YUV planar format. */
        #define DISPC_CORE_LAYER3UBASE_ResetValue (0x00000000UL) /*!< Reset value of LAYER3UBASE register.                           */

        /* LAYER3UBASE @Bits 0..31 : Specify the start address of U chroma for layer 3 */
        #define DISPC_CORE_LAYER3UBASE_LAYER3UBASE_Pos (0UL) /*!< Position of LAYER3UBASE field.                                     */
        #define DISPC_CORE_LAYER3UBASE_LAYER3UBASE_Msk (0xFFFFFFFFUL << DISPC_CORE_LAYER3UBASE_LAYER3UBASE_Pos) /*!< Bit mask of
                                                                                    LAYER3UBASE field.*/


        /* DISPC_CORE_LAYER3VBASE: The start address of the V chroma for layer 3 YUV planar format. */
        #define DISPC_CORE_LAYER3VBASE_ResetValue (0x00000000UL) /*!< Reset value of LAYER3VBASE register.                           */

        /* LAYER3VBASE @Bits 0..31 : Specify the start address of V chroma for layer 3 */
        #define DISPC_CORE_LAYER3VBASE_LAYER3VBASE_Pos (0UL) /*!< Position of LAYER3VBASE field.                                     */
        #define DISPC_CORE_LAYER3VBASE_LAYER3VBASE_Msk (0xFFFFFFFFUL << DISPC_CORE_LAYER3VBASE_LAYER3VBASE_Pos) /*!< Bit mask of
                                                                                    LAYER3VBASE field.*/


        /* DISPC_CORE_LAYER3UVSTRIDE: Specify the stride for layer 3 YUV planar format. */
        #define DISPC_CORE_LAYER3UVSTRIDE_ResetValue (0x00000000UL) /*!< Reset value of LAYER3UVSTRIDE register.                     */

        /* LAYER3UVSTRIDE @Bits 0..31 : Specify the stride for layer 3 YUV planar format. */
        #define DISPC_CORE_LAYER3UVSTRIDE_LAYER3UVSTRIDE_Pos (0UL) /*!< Position of LAYER3UVSTRIDE field.                            */
        #define DISPC_CORE_LAYER3UVSTRIDE_LAYER3UVSTRIDE_Msk (0xFFFFFFFFUL << DISPC_CORE_LAYER3UVSTRIDE_LAYER3UVSTRIDE_Pos) /*!< Bit
                                                                                    mask of LAYER3UVSTRIDE field.*/


        /* DISPC_CORE_FORMATCTRL: Controls DBI and JDI format. */
        #define DISPC_CORE_FORMATCTRL_ResetValue (0x00000000UL) /*!< Reset value of FORMATCTRL register.                             */

        /* FORMATCTRLPOS00LEN03 @Bits 0..2 : When DBI-Type B Interface is selected */
        #define DISPC_CORE_FORMATCTRL_FORMATCTRLPOS00LEN03_Pos (0UL) /*!< Position of FORMATCTRLPOS00LEN03 field.                    */
        #define DISPC_CORE_FORMATCTRL_FORMATCTRLPOS00LEN03_Msk (0x7UL << DISPC_CORE_FORMATCTRL_FORMATCTRLPOS00LEN03_Pos) /*!< Bit mask
                                                                                    of FORMATCTRLPOS00LEN03 field.*/

        /* FORMATCTRLPOS03LEN05 @Bits 3..7 : When DBI-Type B Interface is selected */
        #define DISPC_CORE_FORMATCTRL_FORMATCTRLPOS03LEN05_Pos (3UL) /*!< Position of FORMATCTRLPOS03LEN05 field.                    */
        #define DISPC_CORE_FORMATCTRL_FORMATCTRLPOS03LEN05_Msk (0x1FUL << DISPC_CORE_FORMATCTRL_FORMATCTRLPOS03LEN05_Pos) /*!< Bit
                                                                                    mask of FORMATCTRLPOS03LEN05 field.*/

        /* FORMATCTRLPOS08LEN05 @Bits 8..12 : When DBI-Type B Interface is selected */
        #define DISPC_CORE_FORMATCTRL_FORMATCTRLPOS08LEN05_Pos (8UL) /*!< Position of FORMATCTRLPOS08LEN05 field.                    */
        #define DISPC_CORE_FORMATCTRL_FORMATCTRLPOS08LEN05_Msk (0x1FUL << DISPC_CORE_FORMATCTRL_FORMATCTRLPOS08LEN05_Pos) /*!< Bit
                                                                                    mask of FORMATCTRLPOS08LEN05 field.*/

        /* FORMATCTRLPOS13LEN03 @Bits 13..15 : When DBI-Type B Interface is selected */
        #define DISPC_CORE_FORMATCTRL_FORMATCTRLPOS13LEN03_Pos (13UL) /*!< Position of FORMATCTRLPOS13LEN03 field.                   */
        #define DISPC_CORE_FORMATCTRL_FORMATCTRLPOS13LEN03_Msk (0x7UL << DISPC_CORE_FORMATCTRL_FORMATCTRLPOS13LEN03_Pos) /*!< Bit mask
                                                                                    of FORMATCTRLPOS13LEN03 field.*/

        /* FORMATCTRLPOS16LEN06 @Bits 16..21 : When DBI-Type B Interface is selected */
        #define DISPC_CORE_FORMATCTRL_FORMATCTRLPOS16LEN06_Pos (16UL) /*!< Position of FORMATCTRLPOS16LEN06 field.                   */
        #define DISPC_CORE_FORMATCTRL_FORMATCTRLPOS16LEN06_Msk (0x3FUL << DISPC_CORE_FORMATCTRL_FORMATCTRLPOS16LEN06_Pos) /*!< Bit
                                                                                    mask of FORMATCTRLPOS16LEN06 field.*/

        /* FORMATCTRLPOS22LEN01 @Bit 22 : When DBI-Type B Interface is selected */
        #define DISPC_CORE_FORMATCTRL_FORMATCTRLPOS22LEN01_Pos (22UL) /*!< Position of FORMATCTRLPOS22LEN01 field.                   */
        #define DISPC_CORE_FORMATCTRL_FORMATCTRLPOS22LEN01_Msk (0x1UL << DISPC_CORE_FORMATCTRL_FORMATCTRLPOS22LEN01_Pos) /*!< Bit mask
                                                                                    of FORMATCTRLPOS22LEN01 field.*/

        /* FORMATCTRLPOS23LEN03 @Bits 23..25 : When DBI-Type B Interface is selected */
        #define DISPC_CORE_FORMATCTRL_FORMATCTRLPOS23LEN03_Pos (23UL) /*!< Position of FORMATCTRLPOS23LEN03 field.                   */
        #define DISPC_CORE_FORMATCTRL_FORMATCTRLPOS23LEN03_Msk (0x7UL << DISPC_CORE_FORMATCTRL_FORMATCTRLPOS23LEN03_Pos) /*!< Bit mask
                                                                                    of FORMATCTRLPOS23LEN03 field.*/

        /* FORMATCTRLPOS26LEN03 @Bits 26..28 : When DBI-Type B Interface is selected */
        #define DISPC_CORE_FORMATCTRL_FORMATCTRLPOS26LEN03_Pos (26UL) /*!< Position of FORMATCTRLPOS26LEN03 field.                   */
        #define DISPC_CORE_FORMATCTRL_FORMATCTRLPOS26LEN03_Msk (0x7UL << DISPC_CORE_FORMATCTRL_FORMATCTRLPOS26LEN03_Pos) /*!< Bit mask
                                                                                    of FORMATCTRLPOS26LEN03 field.*/

        /* FORMATCTRLPOS29LEN01 @Bit 29 : Revered */
        #define DISPC_CORE_FORMATCTRL_FORMATCTRLPOS29LEN01_Pos (29UL) /*!< Position of FORMATCTRLPOS29LEN01 field.                   */
        #define DISPC_CORE_FORMATCTRL_FORMATCTRLPOS29LEN01_Msk (0x1UL << DISPC_CORE_FORMATCTRL_FORMATCTRLPOS29LEN01_Pos) /*!< Bit mask
                                                                                    of FORMATCTRLPOS29LEN01 field.*/

        /* FORMATCTRLPOS30LEN01 @Bit 30 : When DBI-Type B Interface is selected */
        #define DISPC_CORE_FORMATCTRL_FORMATCTRLPOS30LEN01_Pos (30UL) /*!< Position of FORMATCTRLPOS30LEN01 field.                   */
        #define DISPC_CORE_FORMATCTRL_FORMATCTRLPOS30LEN01_Msk (0x1UL << DISPC_CORE_FORMATCTRL_FORMATCTRLPOS30LEN01_Pos) /*!< Bit mask
                                                                                    of FORMATCTRLPOS30LEN01 field.*/

        /* FORMATCTRLPOS31LEN01 @Bit 31 : When DBI-Type B Interface is selected */
        #define DISPC_CORE_FORMATCTRL_FORMATCTRLPOS31LEN01_Pos (31UL) /*!< Position of FORMATCTRLPOS31LEN01 field.                   */
        #define DISPC_CORE_FORMATCTRL_FORMATCTRLPOS31LEN01_Msk (0x1UL << DISPC_CORE_FORMATCTRL_FORMATCTRLPOS31LEN01_Pos) /*!< Bit mask
                                                                                    of FORMATCTRLPOS31LEN01 field.*/


        /* DISPC_CORE_FORMATCTRL2: Controls DBI and JDI format. */
        #define DISPC_CORE_FORMATCTRL2_ResetValue (0x00000000UL) /*!< Reset value of FORMATCTRL2 register.                           */

        /* FORMATCTRL2POS00LEN10 @Bits 0..9 : When DBI-Type B Interface is selected */
        #define DISPC_CORE_FORMATCTRL2_FORMATCTRL2POS00LEN10_Pos (0UL) /*!< Position of FORMATCTRL2POS00LEN10 field.                 */
        #define DISPC_CORE_FORMATCTRL2_FORMATCTRL2POS00LEN10_Msk (0x3FFUL << DISPC_CORE_FORMATCTRL2_FORMATCTRL2POS00LEN10_Pos) /*!<
                                                                                    Bit mask of FORMATCTRL2POS00LEN10 field.*/

        /* FORMATCTRL2POS10LEN06 @Bits 10..15 : When DBI-Type B Interface is selected */
        #define DISPC_CORE_FORMATCTRL2_FORMATCTRL2POS10LEN06_Pos (10UL) /*!< Position of FORMATCTRL2POS10LEN06 field.                */
        #define DISPC_CORE_FORMATCTRL2_FORMATCTRL2POS10LEN06_Msk (0x3FUL << DISPC_CORE_FORMATCTRL2_FORMATCTRL2POS10LEN06_Pos) /*!< Bit
                                                                                    mask of FORMATCTRL2POS10LEN06 field.*/

        /* FORMATCTRL2POS16LEN04 @Bits 16..19 : When DBI-Type B Interface is selected */
        #define DISPC_CORE_FORMATCTRL2_FORMATCTRL2POS16LEN04_Pos (16UL) /*!< Position of FORMATCTRL2POS16LEN04 field.                */
        #define DISPC_CORE_FORMATCTRL2_FORMATCTRL2POS16LEN04_Msk (0xFUL << DISPC_CORE_FORMATCTRL2_FORMATCTRL2POS16LEN04_Pos) /*!< Bit
                                                                                    mask of FORMATCTRL2POS16LEN04 field.*/

        /* FORMATCTRL2POS20LEN10 @Bits 20..29 : When DBI-Type B Interface is selected */
        #define DISPC_CORE_FORMATCTRL2_FORMATCTRL2POS20LEN10_Pos (20UL) /*!< Position of FORMATCTRL2POS20LEN10 field.                */
        #define DISPC_CORE_FORMATCTRL2_FORMATCTRL2POS20LEN10_Msk (0x3FFUL << DISPC_CORE_FORMATCTRL2_FORMATCTRL2POS20LEN10_Pos) /*!<
                                                                                    Bit mask of FORMATCTRL2POS20LEN10 field.*/

        /* FORMATCTRL2POS30LEN02 @Bits 30..31 : Revered */
        #define DISPC_CORE_FORMATCTRL2_FORMATCTRL2POS30LEN02_Pos (30UL) /*!< Position of FORMATCTRL2POS30LEN02 field.                */
        #define DISPC_CORE_FORMATCTRL2_FORMATCTRL2POS30LEN02_Msk (0x3UL << DISPC_CORE_FORMATCTRL2_FORMATCTRL2POS30LEN02_Pos) /*!< Bit
                                                                                    mask of FORMATCTRL2POS30LEN02 field.*/


        /* DISPC_CORE_CLKCTRLCG: Controls the Clock Gaters and the routing of format and pixel clock */
        #define DISPC_CORE_CLKCTRLCG_ResetValue (0x00000401UL) /*!< Reset value of CLKCTRLCG register.                               */

        /* CLKCTRLCGPOS00LEN01 @Bit 0 : Enable clock divider */
        #define DISPC_CORE_CLKCTRLCG_CLKCTRLCGPOS00LEN01_Pos (0UL) /*!< Position of CLKCTRLCGPOS00LEN01 field.                       */
        #define DISPC_CORE_CLKCTRLCG_CLKCTRLCGPOS00LEN01_Msk (0x1UL << DISPC_CORE_CLKCTRLCG_CLKCTRLCGPOS00LEN01_Pos) /*!< Bit mask of
                                                                                    CLKCTRLCGPOS00LEN01 field.*/

        /* CLKCTRLCGPOS01LEN01 @Bit 1 : Invert (ouput) clock polarity */
        #define DISPC_CORE_CLKCTRLCG_CLKCTRLCGPOS01LEN01_Pos (1UL) /*!< Position of CLKCTRLCGPOS01LEN01 field.                       */
        #define DISPC_CORE_CLKCTRLCG_CLKCTRLCGPOS01LEN01_Msk (0x1UL << DISPC_CORE_CLKCTRLCG_CLKCTRLCGPOS01LEN01_Pos) /*!< Bit mask of
                                                                                    CLKCTRLCGPOS01LEN01 field.*/

        /* CLKCTRLCGPOS02LEN01 @Bit 2 : Pixel generation and format clock swap */
        #define DISPC_CORE_CLKCTRLCG_CLKCTRLCGPOS02LEN01_Pos (2UL) /*!< Position of CLKCTRLCGPOS02LEN01 field.                       */
        #define DISPC_CORE_CLKCTRLCG_CLKCTRLCGPOS02LEN01_Msk (0x1UL << DISPC_CORE_CLKCTRLCG_CLKCTRLCGPOS02LEN01_Pos) /*!< Bit mask of
                                                                                    CLKCTRLCGPOS02LEN01 field.*/

        /* CLKCTRLCGPOS03LEN19 @Bits 3..21 : Revered */
        #define DISPC_CORE_CLKCTRLCG_CLKCTRLCGPOS03LEN19_Pos (3UL) /*!< Position of CLKCTRLCGPOS03LEN19 field.                       */
        #define DISPC_CORE_CLKCTRLCG_CLKCTRLCGPOS03LEN19_Msk (0x7FFFFUL << DISPC_CORE_CLKCTRLCG_CLKCTRLCGPOS03LEN19_Pos) /*!< Bit mask
                                                                                    of CLKCTRLCGPOS03LEN19 field.*/

        /* CLKCTRLCGPOS22LEN01 @Bit 22 : Clock-gaters bypass */
        #define DISPC_CORE_CLKCTRLCG_CLKCTRLCGPOS22LEN01_Pos (22UL) /*!< Position of CLKCTRLCGPOS22LEN01 field.                      */
        #define DISPC_CORE_CLKCTRLCG_CLKCTRLCGPOS22LEN01_Msk (0x1UL << DISPC_CORE_CLKCTRLCG_CLKCTRLCGPOS22LEN01_Pos) /*!< Bit mask of
                                                                                    CLKCTRLCGPOS22LEN01 field.*/

        /* CLKCTRLCGPOS23LEN01 @Bit 23 : RegFile clock-gaters bypass */
        #define DISPC_CORE_CLKCTRLCG_CLKCTRLCGPOS23LEN01_Pos (23UL) /*!< Position of CLKCTRLCGPOS23LEN01 field.                      */
        #define DISPC_CORE_CLKCTRLCG_CLKCTRLCGPOS23LEN01_Msk (0x1UL << DISPC_CORE_CLKCTRLCG_CLKCTRLCGPOS23LEN01_Pos) /*!< Bit mask of
                                                                                    CLKCTRLCGPOS23LEN01 field.*/

        /* CLKCTRLCGPOS24LEN01 @Bit 24 : layer 0 pixel clock clock-gater bypass */
        #define DISPC_CORE_CLKCTRLCG_CLKCTRLCGPOS24LEN01_Pos (24UL) /*!< Position of CLKCTRLCGPOS24LEN01 field.                      */
        #define DISPC_CORE_CLKCTRLCG_CLKCTRLCGPOS24LEN01_Msk (0x1UL << DISPC_CORE_CLKCTRLCG_CLKCTRLCGPOS24LEN01_Pos) /*!< Bit mask of
                                                                                    CLKCTRLCGPOS24LEN01 field.*/

        /* CLKCTRLCGPOS25LEN01 @Bit 25 : layer 0 bus clock clock-gater bypass */
        #define DISPC_CORE_CLKCTRLCG_CLKCTRLCGPOS25LEN01_Pos (25UL) /*!< Position of CLKCTRLCGPOS25LEN01 field.                      */
        #define DISPC_CORE_CLKCTRLCG_CLKCTRLCGPOS25LEN01_Msk (0x1UL << DISPC_CORE_CLKCTRLCG_CLKCTRLCGPOS25LEN01_Pos) /*!< Bit mask of
                                                                                    CLKCTRLCGPOS25LEN01 field.*/

        /* CLKCTRLCGPOS26LEN01 @Bit 26 : layer 1 pixel clock clock-gater bypass */
        #define DISPC_CORE_CLKCTRLCG_CLKCTRLCGPOS26LEN01_Pos (26UL) /*!< Position of CLKCTRLCGPOS26LEN01 field.                      */
        #define DISPC_CORE_CLKCTRLCG_CLKCTRLCGPOS26LEN01_Msk (0x1UL << DISPC_CORE_CLKCTRLCG_CLKCTRLCGPOS26LEN01_Pos) /*!< Bit mask of
                                                                                    CLKCTRLCGPOS26LEN01 field.*/

        /* CLKCTRLCGPOS27LEN01 @Bit 27 : layer 1 bus clock clock-gater bypass */
        #define DISPC_CORE_CLKCTRLCG_CLKCTRLCGPOS27LEN01_Pos (27UL) /*!< Position of CLKCTRLCGPOS27LEN01 field.                      */
        #define DISPC_CORE_CLKCTRLCG_CLKCTRLCGPOS27LEN01_Msk (0x1UL << DISPC_CORE_CLKCTRLCG_CLKCTRLCGPOS27LEN01_Pos) /*!< Bit mask of
                                                                                    CLKCTRLCGPOS27LEN01 field.*/

        /* CLKCTRLCGPOS28LEN01 @Bit 28 : layer 2 pixel clock clock-gater bypass */
        #define DISPC_CORE_CLKCTRLCG_CLKCTRLCGPOS28LEN01_Pos (28UL) /*!< Position of CLKCTRLCGPOS28LEN01 field.                      */
        #define DISPC_CORE_CLKCTRLCG_CLKCTRLCGPOS28LEN01_Msk (0x1UL << DISPC_CORE_CLKCTRLCG_CLKCTRLCGPOS28LEN01_Pos) /*!< Bit mask of
                                                                                    CLKCTRLCGPOS28LEN01 field.*/

        /* CLKCTRLCGPOS29LEN01 @Bit 29 : layer 2 bus clock clock-gater bypass */
        #define DISPC_CORE_CLKCTRLCG_CLKCTRLCGPOS29LEN01_Pos (29UL) /*!< Position of CLKCTRLCGPOS29LEN01 field.                      */
        #define DISPC_CORE_CLKCTRLCG_CLKCTRLCGPOS29LEN01_Msk (0x1UL << DISPC_CORE_CLKCTRLCG_CLKCTRLCGPOS29LEN01_Pos) /*!< Bit mask of
                                                                                    CLKCTRLCGPOS29LEN01 field.*/

        /* CLKCTRLCGPOS30LEN01 @Bit 30 : layer 3 pixel clock clock-gater bypass */
        #define DISPC_CORE_CLKCTRLCG_CLKCTRLCGPOS30LEN01_Pos (30UL) /*!< Position of CLKCTRLCGPOS30LEN01 field.                      */
        #define DISPC_CORE_CLKCTRLCG_CLKCTRLCGPOS30LEN01_Msk (0x1UL << DISPC_CORE_CLKCTRLCG_CLKCTRLCGPOS30LEN01_Pos) /*!< Bit mask of
                                                                                    CLKCTRLCGPOS30LEN01 field.*/

        /* CLKCTRLCGPOS31LEN01 @Bit 31 : layer 3 bus clock clock-gater bypass */
        #define DISPC_CORE_CLKCTRLCG_CLKCTRLCGPOS31LEN01_Pos (31UL) /*!< Position of CLKCTRLCGPOS31LEN01 field.                      */
        #define DISPC_CORE_CLKCTRLCG_CLKCTRLCGPOS31LEN01_Msk (0x1UL << DISPC_CORE_CLKCTRLCG_CLKCTRLCGPOS31LEN01_Pos) /*!< Bit mask of
                                                                                    CLKCTRLCGPOS31LEN01 field.*/


        /* DISPC_CORE_FORMATCTRL3: Control JDI format. */
        #define DISPC_CORE_FORMATCTRL3_ResetValue (0x00000000UL) /*!< Reset value of FORMATCTRL3 register.                           */

        /* FORMATCTRL3POS00LEN10 @Bits 0..9 : Set the high state of XRST signal in multiple of VCK */
        #define DISPC_CORE_FORMATCTRL3_FORMATCTRL3POS00LEN10_Pos (0UL) /*!< Position of FORMATCTRL3POS00LEN10 field.                 */
        #define DISPC_CORE_FORMATCTRL3_FORMATCTRL3POS00LEN10_Msk (0x3FFUL << DISPC_CORE_FORMATCTRL3_FORMATCTRL3POS00LEN10_Pos) /*!<
                                                                                    Bit mask of FORMATCTRL3POS00LEN10 field.*/

        /* FORMATCTRL3POS10LEN3 @Bits 10..12 : Set the delay that begins at the CS activation and */
        #define DISPC_CORE_FORMATCTRL3_FORMATCTRL3POS10LEN3_Pos (10UL) /*!< Position of FORMATCTRL3POS10LEN3 field.                  */
        #define DISPC_CORE_FORMATCTRL3_FORMATCTRL3POS10LEN3_Msk (0x7UL << DISPC_CORE_FORMATCTRL3_FORMATCTRL3POS10LEN3_Pos) /*!< Bit
                                                                                    mask of FORMATCTRL3POS10LEN3 field.*/

        /* FORMATCTRL3POS13LEN3 @Bits 13..15 : Set the delay that begins at the last negative edge of SPI_CLK and */
        #define DISPC_CORE_FORMATCTRL3_FORMATCTRL3POS13LEN3_Pos (13UL) /*!< Position of FORMATCTRL3POS13LEN3 field.                  */
        #define DISPC_CORE_FORMATCTRL3_FORMATCTRL3POS13LEN3_Msk (0x7UL << DISPC_CORE_FORMATCTRL3_FORMATCTRL3POS13LEN3_Pos) /*!< Bit
                                                                                    mask of FORMATCTRL3POS13LEN3 field.*/

        /* FORMATCTRL3POS16LEN16 @Bits 16..31 : Revered */
        #define DISPC_CORE_FORMATCTRL3_FORMATCTRL3POS16LEN16_Pos (16UL) /*!< Position of FORMATCTRL3POS16LEN16 field.                */
        #define DISPC_CORE_FORMATCTRL3_FORMATCTRL3POS16LEN16_Msk (0xFFFFUL << DISPC_CORE_FORMATCTRL3_FORMATCTRL3POS16LEN16_Pos) /*!<
                                                                                    Bit mask of FORMATCTRL3POS16LEN16 field.*/


        /* DISPC_CORE_PALETTE: Global palette/gamma correction memory region. */
        #define DISPC_CORE_PALETTE_ResetValue (0x00000000UL) /*!< Reset value of PALETTE register.                                   */

        /* PALETTEBLUE @Bits 0..7 : Gamma ramp blue bits. */
        #define DISPC_CORE_PALETTE_PALETTEBLUE_Pos (0UL)   /*!< Position of PALETTEBLUE field.                                       */
        #define DISPC_CORE_PALETTE_PALETTEBLUE_Msk (0xFFUL << DISPC_CORE_PALETTE_PALETTEBLUE_Pos) /*!< Bit mask of PALETTEBLUE field.*/

        /* PALETTEGREEN @Bits 8..15 : Gamma ramp green bits. */
        #define DISPC_CORE_PALETTE_PALETTEGREEN_Pos (8UL)  /*!< Position of PALETTEGREEN field.                                      */
        #define DISPC_CORE_PALETTE_PALETTEGREEN_Msk (0xFFUL << DISPC_CORE_PALETTE_PALETTEGREEN_Pos) /*!< Bit mask of PALETTEGREEN
                                                                                    field.*/

        /* PALETTERED @Bits 16..23 : Gamma ramp red bits. */
        #define DISPC_CORE_PALETTE_PALETTERED_Pos (16UL)   /*!< Position of PALETTERED field.                                        */
        #define DISPC_CORE_PALETTE_PALETTERED_Msk (0xFFUL << DISPC_CORE_PALETTE_PALETTERED_Pos) /*!< Bit mask of PALETTERED field.   */

        /* PALETTEPOS24LEN08 @Bits 24..31 : Revered */
        #define DISPC_CORE_PALETTE_PALETTEPOS24LEN08_Pos (24UL) /*!< Position of PALETTEPOS24LEN08 field.                            */
        #define DISPC_CORE_PALETTE_PALETTEPOS24LEN08_Msk (0xFFUL << DISPC_CORE_PALETTE_PALETTEPOS24LEN08_Pos) /*!< Bit mask of
                                                                                    PALETTEPOS24LEN08 field.*/


        /* DISPC_CORE_CURSORIMAGE: Color values for the pixel Cursor that are used with the Cursor LUT. */
        #define DISPC_CORE_CURSORIMAGE_ResetValue (0x00000000UL) /*!< Reset value of CURSORIMAGE register.                           */

        /* CURSORIMAGEPOS03LEN04 @Bits 0..3 : Pixel (x,6) color Look up bits */
        #define DISPC_CORE_CURSORIMAGE_CURSORIMAGEPOS03LEN04_Pos (0UL) /*!< Position of CURSORIMAGEPOS03LEN04 field.                 */
        #define DISPC_CORE_CURSORIMAGE_CURSORIMAGEPOS03LEN04_Msk (0xFUL << DISPC_CORE_CURSORIMAGE_CURSORIMAGEPOS03LEN04_Pos) /*!< Bit
                                                                                    mask of CURSORIMAGEPOS03LEN04 field.*/

        /* CURSORIMAGEPOS04LEN04 @Bits 4..7 : Pixel (x,5) color Look up bits */
        #define DISPC_CORE_CURSORIMAGE_CURSORIMAGEPOS04LEN04_Pos (4UL) /*!< Position of CURSORIMAGEPOS04LEN04 field.                 */
        #define DISPC_CORE_CURSORIMAGE_CURSORIMAGEPOS04LEN04_Msk (0xFUL << DISPC_CORE_CURSORIMAGE_CURSORIMAGEPOS04LEN04_Pos) /*!< Bit
                                                                                    mask of CURSORIMAGEPOS04LEN04 field.*/

        /* CURSORIMAGEPOS08LEN04 @Bits 8..11 : Revered */
        #define DISPC_CORE_CURSORIMAGE_CURSORIMAGEPOS08LEN04_Pos (8UL) /*!< Position of CURSORIMAGEPOS08LEN04 field.                 */
        #define DISPC_CORE_CURSORIMAGE_CURSORIMAGEPOS08LEN04_Msk (0xFUL << DISPC_CORE_CURSORIMAGE_CURSORIMAGEPOS08LEN04_Pos) /*!< Bit
                                                                                    mask of CURSORIMAGEPOS08LEN04 field.*/

        /* CURSORIMAGEPOS12LEN04 @Bits 12..15 : Pixel (x,4) color Look up bits */
        #define DISPC_CORE_CURSORIMAGE_CURSORIMAGEPOS12LEN04_Pos (12UL) /*!< Position of CURSORIMAGEPOS12LEN04 field.                */
        #define DISPC_CORE_CURSORIMAGE_CURSORIMAGEPOS12LEN04_Msk (0xFUL << DISPC_CORE_CURSORIMAGE_CURSORIMAGEPOS12LEN04_Pos) /*!< Bit
                                                                                    mask of CURSORIMAGEPOS12LEN04 field.*/

        /* CURSORIMAGEPOS16LEN04 @Bits 16..19 : Pixel (x,3) color Look up bits */
        #define DISPC_CORE_CURSORIMAGE_CURSORIMAGEPOS16LEN04_Pos (16UL) /*!< Position of CURSORIMAGEPOS16LEN04 field.                */
        #define DISPC_CORE_CURSORIMAGE_CURSORIMAGEPOS16LEN04_Msk (0xFUL << DISPC_CORE_CURSORIMAGE_CURSORIMAGEPOS16LEN04_Pos) /*!< Bit
                                                                                    mask of CURSORIMAGEPOS16LEN04 field.*/

        /* CURSORIMAGEPOS20LEN04 @Bits 20..23 : Pixel (x,2) color Look up bits */
        #define DISPC_CORE_CURSORIMAGE_CURSORIMAGEPOS20LEN04_Pos (20UL) /*!< Position of CURSORIMAGEPOS20LEN04 field.                */
        #define DISPC_CORE_CURSORIMAGE_CURSORIMAGEPOS20LEN04_Msk (0xFUL << DISPC_CORE_CURSORIMAGE_CURSORIMAGEPOS20LEN04_Pos) /*!< Bit
                                                                                    mask of CURSORIMAGEPOS20LEN04 field.*/

        /* CURSORIMAGEPOS24LEN04 @Bits 24..27 : Pixel (x,1) color Look up bits */
        #define DISPC_CORE_CURSORIMAGE_CURSORIMAGEPOS24LEN04_Pos (24UL) /*!< Position of CURSORIMAGEPOS24LEN04 field.                */
        #define DISPC_CORE_CURSORIMAGE_CURSORIMAGEPOS24LEN04_Msk (0xFUL << DISPC_CORE_CURSORIMAGE_CURSORIMAGEPOS24LEN04_Pos) /*!< Bit
                                                                                    mask of CURSORIMAGEPOS24LEN04 field.*/

        /* CURSORIMAGEPOS28LEN04 @Bits 28..31 : Pixel (x,0) color Look up bits */
        #define DISPC_CORE_CURSORIMAGE_CURSORIMAGEPOS28LEN04_Pos (28UL) /*!< Position of CURSORIMAGEPOS28LEN04 field.                */
        #define DISPC_CORE_CURSORIMAGE_CURSORIMAGEPOS28LEN04_Msk (0xFUL << DISPC_CORE_CURSORIMAGE_CURSORIMAGEPOS28LEN04_Pos) /*!< Bit
                                                                                    mask of CURSORIMAGEPOS28LEN04 field.*/


        /* DISPC_CORE_CURSORLUT: Cursor Look-up Table. */
        #define DISPC_CORE_CURSORLUT_ResetValue (0x00000000UL) /*!< Reset value of CURSORLUT register.                               */

        /* CURSORLUTBLUE @Bits 0..7 : Color blue is used as Lut color. */
        #define DISPC_CORE_CURSORLUT_CURSORLUTBLUE_Pos (0UL) /*!< Position of CURSORLUTBLUE field.                                   */
        #define DISPC_CORE_CURSORLUT_CURSORLUTBLUE_Msk (0xFFUL << DISPC_CORE_CURSORLUT_CURSORLUTBLUE_Pos) /*!< Bit mask of
                                                                                    CURSORLUTBLUE field.*/

        /* CURSORLUTGREEN @Bits 8..15 : Color green is used as Lut color. */
        #define DISPC_CORE_CURSORLUT_CURSORLUTGREEN_Pos (8UL) /*!< Position of CURSORLUTGREEN field.                                 */
        #define DISPC_CORE_CURSORLUT_CURSORLUTGREEN_Msk (0xFFUL << DISPC_CORE_CURSORLUT_CURSORLUTGREEN_Pos) /*!< Bit mask of
                                                                                    CURSORLUTGREEN field.*/

        /* CURSORLUTRED @Bits 16..23 : Color red is used as Lut color. */
        #define DISPC_CORE_CURSORLUT_CURSORLUTRED_Pos (16UL) /*!< Position of CURSORLUTRED field.                                    */
        #define DISPC_CORE_CURSORLUT_CURSORLUTRED_Msk (0xFFUL << DISPC_CORE_CURSORLUT_CURSORLUTRED_Pos) /*!< Bit mask of CURSORLUTRED
                                                                                    field.*/

        /* CURSORLUTPOS24LEN08 @Bits 24..31 : Revered */
        #define DISPC_CORE_CURSORLUT_CURSORLUTPOS24LEN08_Pos (24UL) /*!< Position of CURSORLUTPOS24LEN08 field.                      */
        #define DISPC_CORE_CURSORLUT_CURSORLUTPOS24LEN08_Msk (0xFFUL << DISPC_CORE_CURSORLUT_CURSORLUTPOS24LEN08_Pos) /*!< Bit mask of
                                                                                    CURSORLUTPOS24LEN08 field.*/


        /* DISPC_CORE_GAMMALUT0: Layer 0 palette/gamma correction memory region. */
        #define DISPC_CORE_GAMMALUT0_ResetValue (0x00000000UL) /*!< Reset value of GAMMALUT0 register.                               */

        /* GAMMALUT0BLUE @Bits 0..7 : Color blue is used as Lut color. */
        #define DISPC_CORE_GAMMALUT0_GAMMALUT0BLUE_Pos (0UL) /*!< Position of GAMMALUT0BLUE field.                                   */
        #define DISPC_CORE_GAMMALUT0_GAMMALUT0BLUE_Msk (0xFFUL << DISPC_CORE_GAMMALUT0_GAMMALUT0BLUE_Pos) /*!< Bit mask of
                                                                                    GAMMALUT0BLUE field.*/

        /* GAMMALUT0GREEN @Bits 8..15 : Color green is used as Lut color. */
        #define DISPC_CORE_GAMMALUT0_GAMMALUT0GREEN_Pos (8UL) /*!< Position of GAMMALUT0GREEN field.                                 */
        #define DISPC_CORE_GAMMALUT0_GAMMALUT0GREEN_Msk (0xFFUL << DISPC_CORE_GAMMALUT0_GAMMALUT0GREEN_Pos) /*!< Bit mask of
                                                                                    GAMMALUT0GREEN field.*/

        /* GAMMALUT0RED @Bits 16..23 : Color red is used as Lut color. */
        #define DISPC_CORE_GAMMALUT0_GAMMALUT0RED_Pos (16UL) /*!< Position of GAMMALUT0RED field.                                    */
        #define DISPC_CORE_GAMMALUT0_GAMMALUT0RED_Msk (0xFFUL << DISPC_CORE_GAMMALUT0_GAMMALUT0RED_Pos) /*!< Bit mask of GAMMALUT0RED
                                                                                    field.*/

        /* GAMMALUT0ALPHA @Bits 24..31 : Color alpha is used as Lut color. */
        #define DISPC_CORE_GAMMALUT0_GAMMALUT0ALPHA_Pos (24UL) /*!< Position of GAMMALUT0ALPHA field.                                */
        #define DISPC_CORE_GAMMALUT0_GAMMALUT0ALPHA_Msk (0xFFUL << DISPC_CORE_GAMMALUT0_GAMMALUT0ALPHA_Pos) /*!< Bit mask of
                                                                                    GAMMALUT0ALPHA field.*/


        /* DISPC_CORE_GAMMALUT1: Layer 1 palette/gamma correction memory region. */
        #define DISPC_CORE_GAMMALUT1_ResetValue (0x00000000UL) /*!< Reset value of GAMMALUT1 register.                               */

        /* GAMMALUT1BLUE @Bits 0..7 : Color blue is used as Lut color. */
        #define DISPC_CORE_GAMMALUT1_GAMMALUT1BLUE_Pos (0UL) /*!< Position of GAMMALUT1BLUE field.                                   */
        #define DISPC_CORE_GAMMALUT1_GAMMALUT1BLUE_Msk (0xFFUL << DISPC_CORE_GAMMALUT1_GAMMALUT1BLUE_Pos) /*!< Bit mask of
                                                                                    GAMMALUT1BLUE field.*/

        /* GAMMALUT1GREEN @Bits 8..15 : Color green is used as Lut color. */
        #define DISPC_CORE_GAMMALUT1_GAMMALUT1GREEN_Pos (8UL) /*!< Position of GAMMALUT1GREEN field.                                 */
        #define DISPC_CORE_GAMMALUT1_GAMMALUT1GREEN_Msk (0xFFUL << DISPC_CORE_GAMMALUT1_GAMMALUT1GREEN_Pos) /*!< Bit mask of
                                                                                    GAMMALUT1GREEN field.*/

        /* GAMMALUT1RED @Bits 16..23 : Color red is used as Lut color. */
        #define DISPC_CORE_GAMMALUT1_GAMMALUT1RED_Pos (16UL) /*!< Position of GAMMALUT1RED field.                                    */
        #define DISPC_CORE_GAMMALUT1_GAMMALUT1RED_Msk (0xFFUL << DISPC_CORE_GAMMALUT1_GAMMALUT1RED_Pos) /*!< Bit mask of GAMMALUT1RED
                                                                                    field.*/

        /* GAMMALUT1ALPHA @Bits 24..31 : Color alpha is used as Lut color. */
        #define DISPC_CORE_GAMMALUT1_GAMMALUT1ALPHA_Pos (24UL) /*!< Position of GAMMALUT1ALPHA field.                                */
        #define DISPC_CORE_GAMMALUT1_GAMMALUT1ALPHA_Msk (0xFFUL << DISPC_CORE_GAMMALUT1_GAMMALUT1ALPHA_Pos) /*!< Bit mask of
                                                                                    GAMMALUT1ALPHA field.*/


        /* DISPC_CORE_GAMMALUT2: Layer 2 palette/gamma correction memory region. */
        #define DISPC_CORE_GAMMALUT2_ResetValue (0x00000000UL) /*!< Reset value of GAMMALUT2 register.                               */

        /* GAMMALUT2BLUE @Bits 0..7 : Color blue is used as Lut color. */
        #define DISPC_CORE_GAMMALUT2_GAMMALUT2BLUE_Pos (0UL) /*!< Position of GAMMALUT2BLUE field.                                   */
        #define DISPC_CORE_GAMMALUT2_GAMMALUT2BLUE_Msk (0xFFUL << DISPC_CORE_GAMMALUT2_GAMMALUT2BLUE_Pos) /*!< Bit mask of
                                                                                    GAMMALUT2BLUE field.*/

        /* GAMMALUT2GREEN @Bits 8..15 : Color green is used as Lut color. */
        #define DISPC_CORE_GAMMALUT2_GAMMALUT2GREEN_Pos (8UL) /*!< Position of GAMMALUT2GREEN field.                                 */
        #define DISPC_CORE_GAMMALUT2_GAMMALUT2GREEN_Msk (0xFFUL << DISPC_CORE_GAMMALUT2_GAMMALUT2GREEN_Pos) /*!< Bit mask of
                                                                                    GAMMALUT2GREEN field.*/

        /* GAMMALUT2RED @Bits 16..23 : Color red is used as Lut color. */
        #define DISPC_CORE_GAMMALUT2_GAMMALUT2RED_Pos (16UL) /*!< Position of GAMMALUT2RED field.                                    */
        #define DISPC_CORE_GAMMALUT2_GAMMALUT2RED_Msk (0xFFUL << DISPC_CORE_GAMMALUT2_GAMMALUT2RED_Pos) /*!< Bit mask of GAMMALUT2RED
                                                                                    field.*/

        /* GAMMALUT2ALPHA @Bits 24..31 : Color alpha is used as Lut color. */
        #define DISPC_CORE_GAMMALUT2_GAMMALUT2ALPHA_Pos (24UL) /*!< Position of GAMMALUT2ALPHA field.                                */
        #define DISPC_CORE_GAMMALUT2_GAMMALUT2ALPHA_Msk (0xFFUL << DISPC_CORE_GAMMALUT2_GAMMALUT2ALPHA_Pos) /*!< Bit mask of
                                                                                    GAMMALUT2ALPHA field.*/


        /* DISPC_CORE_GAMMALUT3: Layer 3 palette/gamma correction memory region. */
        #define DISPC_CORE_GAMMALUT3_ResetValue (0x00000000UL) /*!< Reset value of GAMMALUT3 register.                               */

        /* GAMMALUT3BLUE @Bits 0..7 : Color blue is used as Lut color. */
        #define DISPC_CORE_GAMMALUT3_GAMMALUT3BLUE_Pos (0UL) /*!< Position of GAMMALUT3BLUE field.                                   */
        #define DISPC_CORE_GAMMALUT3_GAMMALUT3BLUE_Msk (0xFFUL << DISPC_CORE_GAMMALUT3_GAMMALUT3BLUE_Pos) /*!< Bit mask of
                                                                                    GAMMALUT3BLUE field.*/

        /* GAMMALUT3GREEN @Bits 8..15 : Color green is used as Lut color. */
        #define DISPC_CORE_GAMMALUT3_GAMMALUT3GREEN_Pos (8UL) /*!< Position of GAMMALUT3GREEN field.                                 */
        #define DISPC_CORE_GAMMALUT3_GAMMALUT3GREEN_Msk (0xFFUL << DISPC_CORE_GAMMALUT3_GAMMALUT3GREEN_Pos) /*!< Bit mask of
                                                                                    GAMMALUT3GREEN field.*/

        /* GAMMALUT3RED @Bits 16..23 : Color red is used as Lut color. */
        #define DISPC_CORE_GAMMALUT3_GAMMALUT3RED_Pos (16UL) /*!< Position of GAMMALUT3RED field.                                    */
        #define DISPC_CORE_GAMMALUT3_GAMMALUT3RED_Msk (0xFFUL << DISPC_CORE_GAMMALUT3_GAMMALUT3RED_Pos) /*!< Bit mask of GAMMALUT3RED
                                                                                    field.*/

        /* GAMMALUT3ALPHA @Bits 24..31 : Color alpha is used as Lut color. */
        #define DISPC_CORE_GAMMALUT3_GAMMALUT3ALPHA_Pos (24UL) /*!< Position of GAMMALUT3ALPHA field.                                */
        #define DISPC_CORE_GAMMALUT3_GAMMALUT3ALPHA_Msk (0xFFUL << DISPC_CORE_GAMMALUT3_GAMMALUT3ALPHA_Pos) /*!< Bit mask of
                                                                                    GAMMALUT3ALPHA field.*/


        /* ====================================================== Struct DISPC ======================================================= */
        /**
         * @brief DISPC
         */
        typedef struct {                                   /*!< DISPC Structure                                                      */
            __IM uint32_t RESERVED[64];
            __IOM uint32_t EVENTS_CORE;                      /*!< (@ 0x00000100) Event indicating that interrupt triggered at DISPC
                                                                                core*/
            __IOM uint32_t EVENTS_UNDERRUN;                  /*!< (@ 0x00000104) Event indicating that underrun triggered in the DISPC
                                                                                core FIFO*/
            __IOM uint32_t EVENTS_LOWBUFFER;                 /*!< (@ 0x00000108) Event indicating a low level condition in the DISPC
                                                                                core FIFO*/
            __IOM uint32_t EVENTS_STARTED;                   /*!< (@ 0x0000010C) The display controller has been enabled.              */
            __IM uint32_t RESERVED1[124];
            __IOM uint32_t INTEN;                            /*!< (@ 0x00000300) Enable or disable interrupt                           */
            __IOM uint32_t INTENSET;                         /*!< (@ 0x00000304) Enable interrupt                                      */
            __IOM uint32_t INTENCLR;                         /*!< (@ 0x00000308) Disable interrupt                                     */
            __IM uint32_t INTPEND;                           /*!< (@ 0x0000030C) Pending interrupts                                    */
            __IM uint32_t RESERVED2[124];
            __IOM uint32_t ENABLE;                           /*!< (@ 0x00000500) Enable Display Controller.                            */
            __IM uint32_t RESERVED3[639];
            __IOM NRF_DISPC_PCGCSLAVE_Type PCGCSLAVE;        /*!< (@ 0x00000F00) (unspecified)                                         */
            __IM uint32_t RESERVED4[30];
            __IOM NRF_DISPC_CORE_Type CORE;                  /*!< (@ 0x00001000) (unspecified)                                         */
        } NRF_DISPC_Type;                                  /*!< Size = 11268 (0x2C04)                                                */

        /* DISPC_EVENTS_CORE: Event indicating that interrupt triggered at DISPC core */
        #define DISPC_EVENTS_CORE_ResetValue (0x00000000UL) /*!< Reset value of EVENTS_CORE register.                                */

        /* EVENTS_CORE @Bit 0 : Event indicating that interrupt triggered at DISPC core */
        #define DISPC_EVENTS_CORE_EVENTS_CORE_Pos (0UL)    /*!< Position of EVENTS_CORE field.                                       */
        #define DISPC_EVENTS_CORE_EVENTS_CORE_Msk (0x1UL << DISPC_EVENTS_CORE_EVENTS_CORE_Pos) /*!< Bit mask of EVENTS_CORE field.   */
        #define DISPC_EVENTS_CORE_EVENTS_CORE_Min (0x0UL)  /*!< Min enumerator value of EVENTS_CORE field.                           */
        #define DISPC_EVENTS_CORE_EVENTS_CORE_Max (0x1UL)  /*!< Max enumerator value of EVENTS_CORE field.                           */
        #define DISPC_EVENTS_CORE_EVENTS_CORE_NotGenerated (0x0UL) /*!< Event not generated                                          */
        #define DISPC_EVENTS_CORE_EVENTS_CORE_Generated (0x1UL) /*!< Event generated                                                 */


        /* DISPC_EVENTS_UNDERRUN: Event indicating that underrun triggered in the DISPC core FIFO */
        #define DISPC_EVENTS_UNDERRUN_ResetValue (0x00000000UL) /*!< Reset value of EVENTS_UNDERRUN register.                        */

        /* EVENTS_UNDERRUN @Bit 0 : Event indicating that underrun triggered in the DISPC core FIFO */
        #define DISPC_EVENTS_UNDERRUN_EVENTS_UNDERRUN_Pos (0UL) /*!< Position of EVENTS_UNDERRUN field.                              */
        #define DISPC_EVENTS_UNDERRUN_EVENTS_UNDERRUN_Msk (0x1UL << DISPC_EVENTS_UNDERRUN_EVENTS_UNDERRUN_Pos) /*!< Bit mask of
                                                                                    EVENTS_UNDERRUN field.*/
        #define DISPC_EVENTS_UNDERRUN_EVENTS_UNDERRUN_Min (0x0UL) /*!< Min enumerator value of EVENTS_UNDERRUN field.                */
        #define DISPC_EVENTS_UNDERRUN_EVENTS_UNDERRUN_Max (0x1UL) /*!< Max enumerator value of EVENTS_UNDERRUN field.                */
        #define DISPC_EVENTS_UNDERRUN_EVENTS_UNDERRUN_NotGenerated (0x0UL) /*!< Event not generated                                  */
        #define DISPC_EVENTS_UNDERRUN_EVENTS_UNDERRUN_Generated (0x1UL) /*!< Event generated                                         */


        /* DISPC_EVENTS_LOWBUFFER: Event indicating a low level condition in the DISPC core FIFO */
        #define DISPC_EVENTS_LOWBUFFER_ResetValue (0x00000000UL) /*!< Reset value of EVENTS_LOWBUFFER register.                      */

        /* EVENTS_LOWBUFFER @Bit 0 : Event indicating a low level condition in the DISPC core FIFO */
        #define DISPC_EVENTS_LOWBUFFER_EVENTS_LOWBUFFER_Pos (0UL) /*!< Position of EVENTS_LOWBUFFER field.                           */
        #define DISPC_EVENTS_LOWBUFFER_EVENTS_LOWBUFFER_Msk (0x1UL << DISPC_EVENTS_LOWBUFFER_EVENTS_LOWBUFFER_Pos) /*!< Bit mask of
                                                                                    EVENTS_LOWBUFFER field.*/
        #define DISPC_EVENTS_LOWBUFFER_EVENTS_LOWBUFFER_Min (0x0UL) /*!< Min enumerator value of EVENTS_LOWBUFFER field.             */
        #define DISPC_EVENTS_LOWBUFFER_EVENTS_LOWBUFFER_Max (0x1UL) /*!< Max enumerator value of EVENTS_LOWBUFFER field.             */
        #define DISPC_EVENTS_LOWBUFFER_EVENTS_LOWBUFFER_NotGenerated (0x0UL) /*!< Event not generated                                */
        #define DISPC_EVENTS_LOWBUFFER_EVENTS_LOWBUFFER_Generated (0x1UL) /*!< Event generated                                       */


        /* DISPC_EVENTS_STARTED: The display controller has been enabled. */
        #define DISPC_EVENTS_STARTED_ResetValue (0x00000000UL) /*!< Reset value of EVENTS_STARTED register.                          */

        /* EVENTS_STARTED @Bit 0 : The display controller has been enabled. */
        #define DISPC_EVENTS_STARTED_EVENTS_STARTED_Pos (0UL) /*!< Position of EVENTS_STARTED field.                                 */
        #define DISPC_EVENTS_STARTED_EVENTS_STARTED_Msk (0x1UL << DISPC_EVENTS_STARTED_EVENTS_STARTED_Pos) /*!< Bit mask of
                                                                                    EVENTS_STARTED field.*/
        #define DISPC_EVENTS_STARTED_EVENTS_STARTED_Min (0x0UL) /*!< Min enumerator value of EVENTS_STARTED field.                   */
        #define DISPC_EVENTS_STARTED_EVENTS_STARTED_Max (0x1UL) /*!< Max enumerator value of EVENTS_STARTED field.                   */
        #define DISPC_EVENTS_STARTED_EVENTS_STARTED_NotGenerated (0x0UL) /*!< Event not generated                                    */
        #define DISPC_EVENTS_STARTED_EVENTS_STARTED_Generated (0x1UL) /*!< Event generated                                           */


        /* DISPC_INTEN: Enable or disable interrupt */
        #define DISPC_INTEN_ResetValue (0x00000000UL)      /*!< Reset value of INTEN register.                                       */

        /* CORE @Bit 0 : Enable or disable interrupt for event CORE */
        #define DISPC_INTEN_CORE_Pos (0UL)                 /*!< Position of CORE field.                                              */
        #define DISPC_INTEN_CORE_Msk (0x1UL << DISPC_INTEN_CORE_Pos) /*!< Bit mask of CORE field.                                    */
        #define DISPC_INTEN_CORE_Min (0x0UL)               /*!< Min enumerator value of CORE field.                                  */
        #define DISPC_INTEN_CORE_Max (0x1UL)               /*!< Max enumerator value of CORE field.                                  */
        #define DISPC_INTEN_CORE_Disabled (0x0UL)          /*!< Disable                                                              */
        #define DISPC_INTEN_CORE_Enabled (0x1UL)           /*!< Enable                                                               */

        /* UNDERRUN @Bit 1 : Enable or disable interrupt for event UNDERRUN */
        #define DISPC_INTEN_UNDERRUN_Pos (1UL)             /*!< Position of UNDERRUN field.                                          */
        #define DISPC_INTEN_UNDERRUN_Msk (0x1UL << DISPC_INTEN_UNDERRUN_Pos) /*!< Bit mask of UNDERRUN field.                        */
        #define DISPC_INTEN_UNDERRUN_Min (0x0UL)           /*!< Min enumerator value of UNDERRUN field.                              */
        #define DISPC_INTEN_UNDERRUN_Max (0x1UL)           /*!< Max enumerator value of UNDERRUN field.                              */
        #define DISPC_INTEN_UNDERRUN_Disabled (0x0UL)      /*!< Disable                                                              */
        #define DISPC_INTEN_UNDERRUN_Enabled (0x1UL)       /*!< Enable                                                               */

        /* LOWBUFFER @Bit 2 : Enable or disable interrupt for event LOWBUFFER */
        #define DISPC_INTEN_LOWBUFFER_Pos (2UL)            /*!< Position of LOWBUFFER field.                                         */
        #define DISPC_INTEN_LOWBUFFER_Msk (0x1UL << DISPC_INTEN_LOWBUFFER_Pos) /*!< Bit mask of LOWBUFFER field.                     */
        #define DISPC_INTEN_LOWBUFFER_Min (0x0UL)          /*!< Min enumerator value of LOWBUFFER field.                             */
        #define DISPC_INTEN_LOWBUFFER_Max (0x1UL)          /*!< Max enumerator value of LOWBUFFER field.                             */
        #define DISPC_INTEN_LOWBUFFER_Disabled (0x0UL)     /*!< Disable                                                              */
        #define DISPC_INTEN_LOWBUFFER_Enabled (0x1UL)      /*!< Enable                                                               */

        /* STARTED @Bit 3 : Enable or disable interrupt for event STARTED */
        #define DISPC_INTEN_STARTED_Pos (3UL)              /*!< Position of STARTED field.                                           */
        #define DISPC_INTEN_STARTED_Msk (0x1UL << DISPC_INTEN_STARTED_Pos) /*!< Bit mask of STARTED field.                           */
        #define DISPC_INTEN_STARTED_Min (0x0UL)            /*!< Min enumerator value of STARTED field.                               */
        #define DISPC_INTEN_STARTED_Max (0x1UL)            /*!< Max enumerator value of STARTED field.                               */
        #define DISPC_INTEN_STARTED_Disabled (0x0UL)       /*!< Disable                                                              */
        #define DISPC_INTEN_STARTED_Enabled (0x1UL)        /*!< Enable                                                               */


        /* DISPC_INTENSET: Enable interrupt */
        #define DISPC_INTENSET_ResetValue (0x00000000UL)   /*!< Reset value of INTENSET register.                                    */

        /* CORE @Bit 0 : Write '1' to enable interrupt for event CORE */
        #define DISPC_INTENSET_CORE_Pos (0UL)              /*!< Position of CORE field.                                              */
        #define DISPC_INTENSET_CORE_Msk (0x1UL << DISPC_INTENSET_CORE_Pos) /*!< Bit mask of CORE field.                              */
        #define DISPC_INTENSET_CORE_Min (0x0UL)            /*!< Min enumerator value of CORE field.                                  */
        #define DISPC_INTENSET_CORE_Max (0x1UL)            /*!< Max enumerator value of CORE field.                                  */
        #define DISPC_INTENSET_CORE_Set (0x1UL)            /*!< Enable                                                               */
        #define DISPC_INTENSET_CORE_Disabled (0x0UL)       /*!< Read: Disabled                                                       */
        #define DISPC_INTENSET_CORE_Enabled (0x1UL)        /*!< Read: Enabled                                                        */

        /* UNDERRUN @Bit 1 : Write '1' to enable interrupt for event UNDERRUN */
        #define DISPC_INTENSET_UNDERRUN_Pos (1UL)          /*!< Position of UNDERRUN field.                                          */
        #define DISPC_INTENSET_UNDERRUN_Msk (0x1UL << DISPC_INTENSET_UNDERRUN_Pos) /*!< Bit mask of UNDERRUN field.                  */
        #define DISPC_INTENSET_UNDERRUN_Min (0x0UL)        /*!< Min enumerator value of UNDERRUN field.                              */
        #define DISPC_INTENSET_UNDERRUN_Max (0x1UL)        /*!< Max enumerator value of UNDERRUN field.                              */
        #define DISPC_INTENSET_UNDERRUN_Set (0x1UL)        /*!< Enable                                                               */
        #define DISPC_INTENSET_UNDERRUN_Disabled (0x0UL)   /*!< Read: Disabled                                                       */
        #define DISPC_INTENSET_UNDERRUN_Enabled (0x1UL)    /*!< Read: Enabled                                                        */

        /* LOWBUFFER @Bit 2 : Write '1' to enable interrupt for event LOWBUFFER */
        #define DISPC_INTENSET_LOWBUFFER_Pos (2UL)         /*!< Position of LOWBUFFER field.                                         */
        #define DISPC_INTENSET_LOWBUFFER_Msk (0x1UL << DISPC_INTENSET_LOWBUFFER_Pos) /*!< Bit mask of LOWBUFFER field.               */
        #define DISPC_INTENSET_LOWBUFFER_Min (0x0UL)       /*!< Min enumerator value of LOWBUFFER field.                             */
        #define DISPC_INTENSET_LOWBUFFER_Max (0x1UL)       /*!< Max enumerator value of LOWBUFFER field.                             */
        #define DISPC_INTENSET_LOWBUFFER_Set (0x1UL)       /*!< Enable                                                               */
        #define DISPC_INTENSET_LOWBUFFER_Disabled (0x0UL)  /*!< Read: Disabled                                                       */
        #define DISPC_INTENSET_LOWBUFFER_Enabled (0x1UL)   /*!< Read: Enabled                                                        */

        /* STARTED @Bit 3 : Write '1' to enable interrupt for event STARTED */
        #define DISPC_INTENSET_STARTED_Pos (3UL)           /*!< Position of STARTED field.                                           */
        #define DISPC_INTENSET_STARTED_Msk (0x1UL << DISPC_INTENSET_STARTED_Pos) /*!< Bit mask of STARTED field.                     */
        #define DISPC_INTENSET_STARTED_Min (0x0UL)         /*!< Min enumerator value of STARTED field.                               */
        #define DISPC_INTENSET_STARTED_Max (0x1UL)         /*!< Max enumerator value of STARTED field.                               */
        #define DISPC_INTENSET_STARTED_Set (0x1UL)         /*!< Enable                                                               */
        #define DISPC_INTENSET_STARTED_Disabled (0x0UL)    /*!< Read: Disabled                                                       */
        #define DISPC_INTENSET_STARTED_Enabled (0x1UL)     /*!< Read: Enabled                                                        */


        /* DISPC_INTENCLR: Disable interrupt */
        #define DISPC_INTENCLR_ResetValue (0x00000000UL)   /*!< Reset value of INTENCLR register.                                    */

        /* CORE @Bit 0 : Write '1' to disable interrupt for event CORE */
        #define DISPC_INTENCLR_CORE_Pos (0UL)              /*!< Position of CORE field.                                              */
        #define DISPC_INTENCLR_CORE_Msk (0x1UL << DISPC_INTENCLR_CORE_Pos) /*!< Bit mask of CORE field.                              */
        #define DISPC_INTENCLR_CORE_Min (0x0UL)            /*!< Min enumerator value of CORE field.                                  */
        #define DISPC_INTENCLR_CORE_Max (0x1UL)            /*!< Max enumerator value of CORE field.                                  */
        #define DISPC_INTENCLR_CORE_Clear (0x1UL)          /*!< Disable                                                              */
        #define DISPC_INTENCLR_CORE_Disabled (0x0UL)       /*!< Read: Disabled                                                       */
        #define DISPC_INTENCLR_CORE_Enabled (0x1UL)        /*!< Read: Enabled                                                        */

        /* UNDERRUN @Bit 1 : Write '1' to disable interrupt for event UNDERRUN */
        #define DISPC_INTENCLR_UNDERRUN_Pos (1UL)          /*!< Position of UNDERRUN field.                                          */
        #define DISPC_INTENCLR_UNDERRUN_Msk (0x1UL << DISPC_INTENCLR_UNDERRUN_Pos) /*!< Bit mask of UNDERRUN field.                  */
        #define DISPC_INTENCLR_UNDERRUN_Min (0x0UL)        /*!< Min enumerator value of UNDERRUN field.                              */
        #define DISPC_INTENCLR_UNDERRUN_Max (0x1UL)        /*!< Max enumerator value of UNDERRUN field.                              */
        #define DISPC_INTENCLR_UNDERRUN_Clear (0x1UL)      /*!< Disable                                                              */
        #define DISPC_INTENCLR_UNDERRUN_Disabled (0x0UL)   /*!< Read: Disabled                                                       */
        #define DISPC_INTENCLR_UNDERRUN_Enabled (0x1UL)    /*!< Read: Enabled                                                        */

        /* LOWBUFFER @Bit 2 : Write '1' to disable interrupt for event LOWBUFFER */
        #define DISPC_INTENCLR_LOWBUFFER_Pos (2UL)         /*!< Position of LOWBUFFER field.                                         */
        #define DISPC_INTENCLR_LOWBUFFER_Msk (0x1UL << DISPC_INTENCLR_LOWBUFFER_Pos) /*!< Bit mask of LOWBUFFER field.               */
        #define DISPC_INTENCLR_LOWBUFFER_Min (0x0UL)       /*!< Min enumerator value of LOWBUFFER field.                             */
        #define DISPC_INTENCLR_LOWBUFFER_Max (0x1UL)       /*!< Max enumerator value of LOWBUFFER field.                             */
        #define DISPC_INTENCLR_LOWBUFFER_Clear (0x1UL)     /*!< Disable                                                              */
        #define DISPC_INTENCLR_LOWBUFFER_Disabled (0x0UL)  /*!< Read: Disabled                                                       */
        #define DISPC_INTENCLR_LOWBUFFER_Enabled (0x1UL)   /*!< Read: Enabled                                                        */

        /* STARTED @Bit 3 : Write '1' to disable interrupt for event STARTED */
        #define DISPC_INTENCLR_STARTED_Pos (3UL)           /*!< Position of STARTED field.                                           */
        #define DISPC_INTENCLR_STARTED_Msk (0x1UL << DISPC_INTENCLR_STARTED_Pos) /*!< Bit mask of STARTED field.                     */
        #define DISPC_INTENCLR_STARTED_Min (0x0UL)         /*!< Min enumerator value of STARTED field.                               */
        #define DISPC_INTENCLR_STARTED_Max (0x1UL)         /*!< Max enumerator value of STARTED field.                               */
        #define DISPC_INTENCLR_STARTED_Clear (0x1UL)       /*!< Disable                                                              */
        #define DISPC_INTENCLR_STARTED_Disabled (0x0UL)    /*!< Read: Disabled                                                       */
        #define DISPC_INTENCLR_STARTED_Enabled (0x1UL)     /*!< Read: Enabled                                                        */


        /* DISPC_INTPEND: Pending interrupts */
        #define DISPC_INTPEND_ResetValue (0x00000000UL)    /*!< Reset value of INTPEND register.                                     */

        /* CORE @Bit 0 : Read pending status of interrupt for event CORE */
        #define DISPC_INTPEND_CORE_Pos (0UL)               /*!< Position of CORE field.                                              */
        #define DISPC_INTPEND_CORE_Msk (0x1UL << DISPC_INTPEND_CORE_Pos) /*!< Bit mask of CORE field.                                */
        #define DISPC_INTPEND_CORE_Min (0x0UL)             /*!< Min enumerator value of CORE field.                                  */
        #define DISPC_INTPEND_CORE_Max (0x1UL)             /*!< Max enumerator value of CORE field.                                  */
        #define DISPC_INTPEND_CORE_NotPending (0x0UL)      /*!< Read: Not pending                                                    */
        #define DISPC_INTPEND_CORE_Pending (0x1UL)         /*!< Read: Pending                                                        */

        /* UNDERRUN @Bit 1 : Read pending status of interrupt for event UNDERRUN */
        #define DISPC_INTPEND_UNDERRUN_Pos (1UL)           /*!< Position of UNDERRUN field.                                          */
        #define DISPC_INTPEND_UNDERRUN_Msk (0x1UL << DISPC_INTPEND_UNDERRUN_Pos) /*!< Bit mask of UNDERRUN field.                    */
        #define DISPC_INTPEND_UNDERRUN_Min (0x0UL)         /*!< Min enumerator value of UNDERRUN field.                              */
        #define DISPC_INTPEND_UNDERRUN_Max (0x1UL)         /*!< Max enumerator value of UNDERRUN field.                              */
        #define DISPC_INTPEND_UNDERRUN_NotPending (0x0UL)  /*!< Read: Not pending                                                    */
        #define DISPC_INTPEND_UNDERRUN_Pending (0x1UL)     /*!< Read: Pending                                                        */

        /* LOWBUFFER @Bit 2 : Read pending status of interrupt for event LOWBUFFER */
        #define DISPC_INTPEND_LOWBUFFER_Pos (2UL)          /*!< Position of LOWBUFFER field.                                         */
        #define DISPC_INTPEND_LOWBUFFER_Msk (0x1UL << DISPC_INTPEND_LOWBUFFER_Pos) /*!< Bit mask of LOWBUFFER field.                 */
        #define DISPC_INTPEND_LOWBUFFER_Min (0x0UL)        /*!< Min enumerator value of LOWBUFFER field.                             */
        #define DISPC_INTPEND_LOWBUFFER_Max (0x1UL)        /*!< Max enumerator value of LOWBUFFER field.                             */
        #define DISPC_INTPEND_LOWBUFFER_NotPending (0x0UL) /*!< Read: Not pending                                                    */
        #define DISPC_INTPEND_LOWBUFFER_Pending (0x1UL)    /*!< Read: Pending                                                        */

        /* STARTED @Bit 3 : Read pending status of interrupt for event STARTED */
        #define DISPC_INTPEND_STARTED_Pos (3UL)            /*!< Position of STARTED field.                                           */
        #define DISPC_INTPEND_STARTED_Msk (0x1UL << DISPC_INTPEND_STARTED_Pos) /*!< Bit mask of STARTED field.                       */
        #define DISPC_INTPEND_STARTED_Min (0x0UL)          /*!< Min enumerator value of STARTED field.                               */
        #define DISPC_INTPEND_STARTED_Max (0x1UL)          /*!< Max enumerator value of STARTED field.                               */
        #define DISPC_INTPEND_STARTED_NotPending (0x0UL)   /*!< Read: Not pending                                                    */
        #define DISPC_INTPEND_STARTED_Pending (0x1UL)      /*!< Read: Pending                                                        */


        /* DISPC_ENABLE: Enable Display Controller. */
        #define DISPC_ENABLE_ResetValue (0x00000000UL)     /*!< Reset value of ENABLE register.                                      */

        /* EN @Bit 0 : Enable */
        #define DISPC_ENABLE_EN_Pos (0UL)                  /*!< Position of EN field.                                                */
        #define DISPC_ENABLE_EN_Msk (0x1UL << DISPC_ENABLE_EN_Pos) /*!< Bit mask of EN field.                                        */
        #define DISPC_ENABLE_EN_Min (0x0UL)                /*!< Min enumerator value of EN field.                                    */
        #define DISPC_ENABLE_EN_Max (0x1UL)                /*!< Max enumerator value of EN field.                                    */
        #define DISPC_ENABLE_EN_Disabled (0x0UL)           /*!< DISPC disabled.                                                      */
        #define DISPC_ENABLE_EN_Enabled (0x1UL)            /*!< DISPC enabled.                                                       */


        #endif                                               /*!< !defined(__ASSEMBLER__) && !defined(__ASSEMBLY__)                    */


        /* ============================================== Processor Specific Interrupts ============================================== */
        //   GPU_IRQn                               = 0,        /*!< 0 GPU                                                                */
        //   DISPC_IRQn                             = 4,        /*!< 4 DISPC                                                              */
        //   GSI_IRQn                               = 8,        /*!< 8 GSI                                                                */

        /* =========================================================================================================================== */
        /* ================                                  Peripheral Address Map                                  ================ */
        /* =========================================================================================================================== */

        #define NRF_GRAPHICS_GPU_NS_BASE          0x49000000UL
        #define NRF_GRAPHICS_DISPC_NS_BASE        0x49004000UL
        #define NRF_GRAPHICS_GSI_NS_BASE          0x49008000UL

        /* =========================================================================================================================== */
        /* ================                                  Peripheral Declaration                                  ================ */
        /* =========================================================================================================================== */

        #define NRF_GRAPHICS_GPU_NS               ((NRF_GPU_Type*)                      NRF_GRAPHICS_GPU_NS_BASE)
        #define NRF_GRAPHICS_DISPC_NS             ((NRF_DISPC_Type*)                    NRF_GRAPHICS_DISPC_NS_BASE)
        #define NRF_GRAPHICS_GSI_NS               ((NRF_GSI_Type*)                      NRF_GRAPHICS_GSI_NS_BASE)

        /* =========================================================================================================================== */
        /* ================                                    TrustZone Remapping                                    ================ */
        /* =========================================================================================================================== */

        #define NRF_GRAPHICS_GPU                        NRF_GRAPHICS_GPU_NS
        #define NRF_GRAPHICS_DISPC                      NRF_GRAPHICS_DISPC_NS
        #define NRF_GRAPHICS_GSI                        NRF_GRAPHICS_GSI_NS

        /* =========================================================================================================================== */
        /* ================                                  Local Domain Remapping                                  ================ */
        /* =========================================================================================================================== */

        #ifdef NRF_GRAPHICS                                  /*!< Remap NRF_DOMAIN instances to NRF_X symbol for ease of use.          */
            #define NRF_GPU                                 NRF_GRAPHICS_GPU
            #define NRF_DISPC                               NRF_GRAPHICS_DISPC
            #define NRF_GSI                                 NRF_GRAPHICS_GSI
        #endif

    #endif // && NRF_APPLICATION
#endif

/**************************************************************************************************/
/* End fixups section for NRF7140_XXAA                                                            */
/**************************************************************************************************/

/**************************************************************************************************/
/* Start fixups section for NRF9230_XXAA                                                          */
/**************************************************************************************************/

#if defined(NRF9230_XXAA)
    typedef struct {                                   /*!< RESETHUB Structure                                                   */
        __OM uint32_t TASKS_RESETDOMAIN[8];              /*!< (@ 0x00000000) Reset the domain [n], where n is domain id.           */
        __IM uint32_t RESERVED[56];
        __IOM uint32_t EVENTS_DOMAINRESET[8];            /*!< (@ 0x00000100) Domain [n] was reset, where n is domain id.           */
        __IM uint32_t RESERVED1[120];
        __IOM uint32_t INTEN;                            /*!< (@ 0x00000300) Enable or disable interrupt                           */
        __IOM uint32_t INTENSET;                         /*!< (@ 0x00000304) Enable interrupt                                      */
        __IOM uint32_t INTENCLR;                         /*!< (@ 0x00000308) Disable interrupt                                     */
        __IM uint32_t INTPEND;                           /*!< (@ 0x0000030C) Pending interrupts                                    */
        __IM uint32_t RESERVED2[60];
        __IOM NRF_RESETHUB_RESETREAS_Type RESETREAS;     /*!< (@ 0x00000400) (unspecified)                                         */
        __IM uint32_t RESERVED3[55];
        __IOM uint32_t RESETMASK;                        /*!< (@ 0x00000500) Mask the reset request for a domain by itself.        */
        __IOM uint32_t CROSSDOMAINRESET;                 /*!< (@ 0x00000504) Enable cross domain resets.                           */
        __IOM uint32_t GPREGRET;                         /*!< (@ 0x00000508) General purpose retention register.                   */
    } NRF_RESETHUB_Type_fixed;                         /*!< Size = 1292 (0x50C)                                                  */

    #if defined(NRF_RESETHUB_S)
        #undef NRF_RESETHUB_S
        #define NRF_RESETHUB_S ((NRF_RESETHUB_Type_fixed*) NRF_RESETHUB_S_BASE)
    #endif
    #if defined(NRF_RESETHUB_NS)
        #undef NRF_RESETHUB_NS
        #define NRF_RESETHUB_NS ((NRF_RESETHUB_Type_fixed*) NRF_RESETHUB_NS_BASE)
    #endif

    #define NRF_RESETHUB_Type NRF_RESETHUB_Type_fixed

    #define GRTC_SYSCOUNTER_INDEX NRF_GRTC_IRQ_GROUP
    // Old HFXO modes are not supported
    #ifdef BICR_HFXO_CONFIG_MODE_Pierce
        #undef BICR_HFXO_CONFIG_MODE_Pierce
    #endif
    #ifdef BICR_HFXO_CONFIG_MODE_PIXO
        #undef BICR_HFXO_CONFIG_MODE_PIXO
    #endif
    #ifdef BICR_HFXO_CONFIG_MODE_ExtSquare
        #undef BICR_HFXO_CONFIG_MODE_ExtSquare
    #endif
    #ifdef BICR_HFXO_CONFIG_MODE_Auto
        #undef BICR_HFXO_CONFIG_MODE_Auto
    #endif
    #define BICR_HFXO_CONFIG_MODE_Normal   (0x0UL)     /*!< HFXO Normal mode.                                                    */
    #define BICR_HFXO_CONFIG_MODE_TCXO     (0x1UL)     /*!< HFXO TCXO/bypass mode.                                               */
    #define BICR_HFXO_CONFIG_MODE_Crystal2 (0x2UL)     /*!< Reserved value.                                                      */
    #define BICR_HFXO_CONFIG_MODE_Crystal3 (0x3UL)     /*!< Reserved value.                                                      */
    #define BICR_HFXO_CONFIG_MODE_Crystal4 (0x4UL)     /*!< Reserved value.                                                      */
    #define BICR_HFXO_CONFIG_MODE_Crystal5 (0x5UL)     /*!< Reserved value.                                                      */
    #define BICR_HFXO_CONFIG_MODE_Crystal6 (0x6UL)     /*!< Reserved value.                                                      */

    /* TODO: HM-17600 */
    typedef struct {
        __IM uint32_t RESERVED00[1];
        __OM uint32_t TASKS_STOP;
        __IM uint32_t RESERVED01[1];
        __OM uint32_t TASKS_SUSPEND;
        __OM uint32_t TASKS_RESUME;
        __IM uint32_t RESERVED1[5];
        __OM NRF_TWIM_TASKS_DMA_Type TASKS_DMA;
        __IM uint32_t RESERVED2[13];
        __IOM uint32_t SUBSCRIBE_SUSPEND;
        __IOM uint32_t SUBSCRIBE_RESUME;
        __IM uint32_t RESERVED3[5];
        __IOM NRF_TWIM_SUBSCRIBE_DMA_Type SUBSCRIBE_DMA;
        __IM uint32_t RESERVED4[11];
        __IOM uint32_t EVENTS_STOPPED;
        __IM uint32_t RESERVED5[3];
        __IOM uint32_t EVENTS_ERROR;
        __IM uint32_t RESERVED6[2];
        __IOM uint32_t EVENTS_BB;
        __IM uint32_t RESERVED7;
        __IOM uint32_t EVENTS_SUSPENDED;
        __IM uint32_t RESERVED8[2];
        __IOM uint32_t EVENTS_LASTRX;
        __IOM uint32_t EVENTS_LASTTX;
        __IM uint32_t RESERVED9[4];
        __IOM NRF_TWIM_EVENTS_DMA_Type EVENTS_DMA;
        __IM uint32_t RESERVED10[4];
        __IOM uint32_t PUBLISH_STOPPED;
        __IM uint32_t RESERVED11[3];
        __IOM uint32_t PUBLISH_ERROR;
        __IM uint32_t RESERVED12[2];
        __IOM uint32_t PUBLISH_BB;
        __IM uint32_t RESERVED13;
        __IOM uint32_t PUBLISH_SUSPENDED;
        __IM uint32_t RESERVED14[2];
        __IOM uint32_t PUBLISH_LASTRX;
        __IOM uint32_t PUBLISH_LASTTX;
        __IM uint32_t RESERVED15[4];
        __IOM NRF_TWIM_PUBLISH_DMA_Type PUBLISH_DMA;
        __IM uint32_t RESERVED16[3];
        __IOM uint32_t SHORTS;
        __IM uint32_t RESERVED17[63];
        __IOM uint32_t INTEN;
        __IOM uint32_t INTENSET;
        __IOM uint32_t INTENCLR;
        __IM uint32_t RESERVED18[110];
        __IOM uint32_t ERRORSRC;
        __IM uint32_t RESERVED19[14];
        __IOM uint32_t ENABLE;
        __IOM uint32_t CONFIG;
        __IM uint32_t RESERVED20[6];
        __IOM uint32_t FMPLUS;
        __IOM uint32_t FREQUENCY;
        __IM uint32_t RESERVED21[24];
        __IOM uint32_t ADDRESS;
        __IM uint32_t RESERVED22[29];
        __IOM NRF_TWIM_PSEL_Type PSEL;
        __IM uint32_t RESERVED23[62];
        __IOM NRF_TWIM_DMA_Type DMA;
    } NRF_TWIM_Type_fixed;

    #if defined(NRF_TWIM130_S)
        #undef NRF_TWIM130_S
        #define NRF_TWIM130_S ((NRF_TWIM_Type_fixed*) NRF_TWIM130_S_BASE)
    #endif

    #if defined(NRF_TWIM131_S)
        #undef NRF_TWIM131_S
        #define NRF_TWIM131_S ((NRF_TWIM_Type_fixed*) NRF_TWIM131_S_BASE)
    #endif

    #if defined(NRF_TWIM132_S)
        #undef NRF_TWIM132_S
        #define NRF_TWIM132_S ((NRF_TWIM_Type_fixed*) NRF_TWIM132_S_BASE)
    #endif

    #if defined(NRF_TWIM133_S)
        #undef NRF_TWIM133_S
        #define NRF_TWIM133_S ((NRF_TWIM_Type_fixed*) NRF_TWIM133_S_BASE)
    #endif

    #if defined(NRF_TWIM134_S)
        #undef NRF_TWIM134_S
        #define NRF_TWIM134_S ((NRF_TWIM_Type_fixed*) NRF_TWIM134_S_BASE)
    #endif

    #if defined(NRF_TWIM135_S)
        #undef NRF_TWIM135_S
        #define NRF_TWIM135_S ((NRF_TWIM_Type_fixed*) NRF_TWIM135_S_BASE)
    #endif

    #if defined(NRF_TWIM136_S)
        #undef NRF_TWIM136_S
        #define NRF_TWIM136_S ((NRF_TWIM_Type_fixed*) NRF_TWIM136_S_BASE)
    #endif

    #if defined(NRF_TWIM137_S)
        #undef NRF_TWIM137_S
        #define NRF_TWIM137_S ((NRF_TWIM_Type_fixed*) NRF_TWIM137_S_BASE)
    #endif

    #define NRF_TWIM_Type NRF_TWIM_Type_fixed

    typedef struct {
        __IM  uint32_t  RESERVED;
        __IOM uint32_t  CNT;                               /*!< (@ 0x00000004) Number of values (duty cycles) in this sequence       */
        __IOM uint32_t  REFRESH;                           /*!< (@ 0x00000008) Number of additional PWM periods between samples loaded
                                                                                into compare register*/
        __IOM uint32_t  ENDDELAY;                          /*!< (@ 0x0000000C) Time added after the sequence                         */
        __IM  uint32_t  RESERVED1[4];
    } NRF_PWM_SEQ_Type_fixed;                                  /*!< Size = 32 (0x020)                                                    */

    /* PWM_SEQ_CNT: Number of values (duty cycles) in this sequence */
    #define PWM_SEQ_CNT_ResetValue (0x00000000UL)      /*!< Reset value of CNT register.                                         */

    /* CNT @Bits 0..14 : Number of values (duty cycles) in this sequence */
    #define PWM_SEQ_CNT_CNT_Pos (0UL)                  /*!< Position of CNT field.                                               */
    #define PWM_SEQ_CNT_CNT_Msk (0x7FFFUL << PWM_SEQ_CNT_CNT_Pos) /*!< Bit mask of CNT field.                                    */
    #define PWM_SEQ_CNT_CNT_Min (0x0UL)                /*!< Min enumerator value of CNT field.                                   */
    #define PWM_SEQ_CNT_CNT_Max (0x0UL)                /*!< Max enumerator value of CNT field.                                   */
    #define PWM_SEQ_CNT_CNT_Disabled (0x0000UL)        /*!< Sequence is disabled, and shall not be started as it is empty        */

    typedef struct {                                   /*!< PWM Structure                                                        */
        __OM uint32_t TASKS_START;                       /*!< (@ 0x00000000) Starts PWM pulse generation with the last loaded
                                                                            values*/
        __OM uint32_t TASKS_STOP;                        /*!< (@ 0x00000004) Stops PWM pulse generation on all channels at the end
                                                                            of current PWM period, and stops sequence playback*/
        __OM uint32_t TASKS_NEXTSTEP;                    /*!< (@ 0x00000008) Steps by one value in the current sequence on all
                                                                            enabled channels if DECODER.MODE=NextStep. Does not
                                                                            cause PWM generation to start if not running.*/
        __OM uint32_t TASKS_SEQABORT;                    /*!< (@ 0x0000000C) (Gracefully) aborts the playback of the current
                                                                            sequence or the current end delay*/
        __OM NRF_PWM_TASKS_DMA_Type TASKS_DMA;           /*!< (@ 0x00000010) Peripheral tasks.                                     */
        __IM uint32_t RESERVED[24];
        __IOM uint32_t SUBSCRIBE_START;                  /*!< (@ 0x00000080) Subscribe configuration for task START                */
        __IOM uint32_t SUBSCRIBE_STOP;                   /*!< (@ 0x00000084) Subscribe configuration for task STOP                 */
        __IOM uint32_t SUBSCRIBE_NEXTSTEP;               /*!< (@ 0x00000088) Subscribe configuration for task NEXTSTEP             */
        __IOM uint32_t SUBSCRIBE_SEQABORT;               /*!< (@ 0x0000008C) Subscribe configuration for task SEQABORT             */
        __IOM NRF_PWM_SUBSCRIBE_DMA_Type SUBSCRIBE_DMA;  /*!< (@ 0x00000090) Subscribe configuration for tasks                     */
        __IM uint32_t RESERVED1[24];
        __IOM uint32_t EVENTS_STARTED;                   /*!< (@ 0x00000100) Response to START task, emitted when the PWM pulse
                                                                            generation starts*/
        __IOM uint32_t EVENTS_STOPPED;                   /*!< (@ 0x00000104) Response to STOP task, emitted when PWM pulses are no
                                                                            longer generated*/
        __IOM uint32_t EVENTS_SEQSTARTED[2];             /*!< (@ 0x00000108) First PWM period started on sequence n                */
        __IOM uint32_t EVENTS_SEQEND[2];                 /*!< (@ 0x00000110) Emitted at end of every sequence n, when last value
                                                                            from RAM has been applied to wave counter*/
        __IOM uint32_t EVENTS_PWMPERIODEND;              /*!< (@ 0x00000118) Emitted at the end of each PWM period                 */
        __IOM uint32_t EVENTS_LOOPSDONE;                 /*!< (@ 0x0000011C) Concatenated sequences have been played the amount of
                                                                            times defined in LOOP.CNT*/
        __IOM uint32_t EVENTS_RAMUNDERFLOW;              /*!< (@ 0x00000120) Emitted when retrieving from RAM does not complete in
                                                                            time for the PWM module*/
        __IOM NRF_PWM_EVENTS_DMA_Type EVENTS_DMA;        /*!< (@ 0x00000124) Peripheral events.                                    */
        __IOM uint32_t EVENTS_COMPAREMATCH[4];           /*!< (@ 0x0000013C) This event is generated when the compare matches for
                                                                            the compare channel [n].*/
        __IM uint32_t RESERVED2[13];
        __IOM uint32_t PUBLISH_STARTED;                  /*!< (@ 0x00000180) Publish configuration for event STARTED               */
        __IOM uint32_t PUBLISH_STOPPED;                  /*!< (@ 0x00000184) Publish configuration for event STOPPED               */
        __IOM uint32_t PUBLISH_SEQSTARTED[2];            /*!< (@ 0x00000188) Publish configuration for event SEQSTARTED[n]         */
        __IOM uint32_t PUBLISH_SEQEND[2];                /*!< (@ 0x00000190) Publish configuration for event SEQEND[n]             */
        __IOM uint32_t PUBLISH_PWMPERIODEND;             /*!< (@ 0x00000198) Publish configuration for event PWMPERIODEND          */
        __IOM uint32_t PUBLISH_LOOPSDONE;                /*!< (@ 0x0000019C) Publish configuration for event LOOPSDONE             */
        __IOM uint32_t PUBLISH_RAMUNDERFLOW;             /*!< (@ 0x000001A0) Publish configuration for event RAMUNDERFLOW          */
        __IOM NRF_PWM_PUBLISH_DMA_Type PUBLISH_DMA;      /*!< (@ 0x000001A4) Publish configuration for events                      */
        __IOM uint32_t PUBLISH_COMPAREMATCH[4];          /*!< (@ 0x000001BC) Publish configuration for event COMPAREMATCH[n]       */
        __IM uint32_t RESERVED3[13];
        __IOM uint32_t SHORTS;                           /*!< (@ 0x00000200) Shortcuts between local events and tasks              */
        __IM uint32_t RESERVED4[63];
        __IOM uint32_t INTEN;                            /*!< (@ 0x00000300) Enable or disable interrupt                           */
        __IOM uint32_t INTENSET;                         /*!< (@ 0x00000304) Enable interrupt                                      */
        __IOM uint32_t INTENCLR;                         /*!< (@ 0x00000308) Disable interrupt                                     */
        __IM uint32_t INTPEND;                           /*!< (@ 0x0000030C) Pending interrupts                                    */
        __IM uint32_t RESERVED5[124];
        __IOM uint32_t ENABLE;                           /*!< (@ 0x00000500) PWM module enable register                            */
        __IOM uint32_t MODE;                             /*!< (@ 0x00000504) Selects operating mode of the wave counter            */
        __IOM uint32_t COUNTERTOP;                       /*!< (@ 0x00000508) Value up to which the pulse generator counter counts  */
        __IOM uint32_t PRESCALER;                        /*!< (@ 0x0000050C) Configuration for PWM_CLK                             */
        __IOM uint32_t DECODER;                          /*!< (@ 0x00000510) Configuration of the decoder                          */
        __IOM uint32_t LOOP;                             /*!< (@ 0x00000514) Number of playbacks of a loop                         */
        __IOM uint32_t IDLEOUT;                          /*!< (@ 0x00000518) Configure the output value on the PWM channel during
                                                                            idle*/
        __IM uint32_t RESERVED6;
        __IOM NRF_PWM_SEQ_Type_fixed SEQ[2];                   /*!< (@ 0x00000520) (unspecified)                                         */
        __IOM NRF_PWM_PSEL_Type PSEL;                    /*!< (@ 0x00000560) (unspecified)                                         */
        __IM uint32_t RESERVED7[100];
        __IOM NRF_PWM_DMA_Type DMA;                      /*!< (@ 0x00000700) (unspecified)                                         */
    } NRF_PWM_Type_fixed;                                    /*!< Size = 1864 (0x748)                                                  */

    #if defined(NRF_PWM120_NS)
        #undef NRF_PWM120_NS
        #define NRF_PWM120_NS ((NRF_PWM_Type_fixed*) NRF_PWM120_NS_BASE)
    #endif

    #if defined(NRF_PWM120_S)
        #undef NRF_PWM120_S
        #define NRF_PWM120_S ((NRF_PWM_Type_fixed*) NRF_PWM120_S_BASE)
    #endif

    #if defined(NRF_PWM130_NS)
        #undef NRF_PWM130_NS
        #define NRF_PWM130_NS ((NRF_PWM_Type_fixed*) NRF_PWM130_NS_BASE)
    #endif

    #if defined(NRF_PWM130_S)
        #undef NRF_PWM130_S
        #define NRF_PWM130_S ((NRF_PWM_Type_fixed*) NRF_PWM130_S_BASE)
    #endif

    #if defined(NRF_PWM131_NS)
        #undef NRF_PWM131_NS
        #define NRF_PWM131_NS ((NRF_PWM_Type_fixed*) NRF_PWM131_NS_BASE)
    #endif

    #if defined(NRF_PWM131_S)
        #undef NRF_PWM131_S
        #define NRF_PWM131_S ((NRF_PWM_Type_fixed*) NRF_PWM131_S_BASE)
    #endif

    #if defined(NRF_PWM132_NS)
        #undef NRF_PWM132_NS
        #define NRF_PWM132_NS ((NRF_PWM_Type_fixed*) NRF_PWM132_NS_BASE)
    #endif

    #if defined(NRF_PWM132_S)
        #undef NRF_PWM132_S
        #define NRF_PWM132_S ((NRF_PWM_Type_fixed*) NRF_PWM132_S_BASE)
    #endif

    #if defined(NRF_PWM133_NS)
        #undef NRF_PWM133_NS
        #define NRF_PWM133_NS ((NRF_PWM_Type_fixed*) NRF_PWM133_NS_BASE)
    #endif

    #if defined(NRF_PWM133_S)
        #undef NRF_PWM133_S
        #define NRF_PWM133_S ((NRF_PWM_Type_fixed*) NRF_PWM133_S_BASE)
    #endif

    #define NRF_PWM_Type NRF_PWM_Type_fixed

    typedef struct {                                   /*!< GRTC Structure                                                       */
        __OM uint32_t TASKS_CAPTURE[16];                 /*!< (@ 0x00000000) Capture the counter value to CC[n] register           */
        __IM uint32_t RESERVED1[8];
        __OM uint32_t TASKS_START;                       /*!< (@ 0x00000060) Start the counter                                     */
        __OM uint32_t TASKS_STOP;                        /*!< (@ 0x00000064) Stop the counter                                      */
        __OM uint32_t TASKS_CLEAR;                       /*!< (@ 0x00000068) Clear the counter                                     */
        __OM uint32_t TASKS_PWMSTART;                    /*!< (@ 0x0000006C) Start the PWM                                         */
        __OM uint32_t TASKS_PWMSTOP;                     /*!< (@ 0x00000070) Stop the PWM                                          */
        __IM uint32_t RESERVED2[3];
        __IOM uint32_t SUBSCRIBE_CAPTURE[16];            /*!< (@ 0x00000080) Subscribe configuration for task CAPTURE[n]           */
        __IM uint32_t RESERVED3[16];
        __IOM uint32_t EVENTS_COMPARE[16];               /*!< (@ 0x00000100) Compare event on CC[n] match                          */
        __IM uint32_t RESERVED4[8];
        __IOM uint32_t EVENTS_RTCOMPARE;                 /*!< (@ 0x00000160) Compare event on RTCOMPARE register match             */
        __IOM uint32_t EVENTS_RTCOMPARESYNC;             /*!< (@ 0x00000164) The value written from the register RTCOMPAREL/H or
                                                                            RTCOMPARESYNCL/H is latched to RTCOMPARE*/
        __IOM uint32_t EVENTS_SYSCOUNTERVALID;           /*!< (@ 0x00000168) The SYSCOUNTER is in active state and value is valid  */
        __IOM uint32_t EVENTS_PWMPERIODEND;              /*!< (@ 0x0000016C) Event on end of each PWM period                       */
        __IM uint32_t RESERVED5[4];
        __IOM uint32_t PUBLISH_COMPARE[16];              /*!< (@ 0x00000180) Publish configuration for event COMPARE[n]            */
        __IM uint32_t RESERVED6[8];
        __IOM uint32_t PUBLISH_RTCOMPARE;                /*!< (@ 0x000001E0) Publish configuration for event RTCOMPARE             */
        __IM uint32_t RESERVED7[7];
        __IOM uint32_t SHORTS;                           /*!< (@ 0x00000200) Shortcuts between local events and tasks              */
        __IM uint32_t RESERVED8[63];
        __IOM uint32_t INTEN0;                           /*!< (@ 0x00000300) Enable or disable interrupt                           */
        __IOM uint32_t INTENSET0;                        /*!< (@ 0x00000304) Enable interrupt                                      */
        __IOM uint32_t INTENCLR0;                        /*!< (@ 0x00000308) Disable interrupt                                     */
        __IM uint32_t INTPEND0;                          /*!< (@ 0x0000030C) Pending interrupts                                    */
        __IOM uint32_t INTEN1;                           /*!< (@ 0x00000310) Enable or disable interrupt                           */
        __IOM uint32_t INTENSET1;                        /*!< (@ 0x00000314) Enable interrupt                                      */
        __IOM uint32_t INTENCLR1;                        /*!< (@ 0x00000318) Disable interrupt                                     */
        __IM uint32_t INTPEND1;                          /*!< (@ 0x0000031C) Pending interrupts                                    */
        __IOM uint32_t INTEN2;                           /*!< (@ 0x00000320) Enable or disable interrupt                           */
        __IOM uint32_t INTENSET2;                        /*!< (@ 0x00000324) Enable interrupt                                      */
        __IOM uint32_t INTENCLR2;                        /*!< (@ 0x00000328) Disable interrupt                                     */
        __IM uint32_t INTPEND2;                          /*!< (@ 0x0000032C) Pending interrupts                                    */
        __IOM uint32_t INTEN3;                           /*!< (@ 0x00000330) Enable or disable interrupt                           */
        __IOM uint32_t INTENSET3;                        /*!< (@ 0x00000334) Enable interrupt                                      */
        __IOM uint32_t INTENCLR3;                        /*!< (@ 0x00000338) Disable interrupt                                     */
        __IM uint32_t INTPEND3;                          /*!< (@ 0x0000033C) Pending interrupts                                    */
        __IOM uint32_t INTEN4;                           /*!< (@ 0x00000340) Enable or disable interrupt                           */
        __IOM uint32_t INTENSET4;                        /*!< (@ 0x00000344) Enable interrupt                                      */
        __IOM uint32_t INTENCLR4;                        /*!< (@ 0x00000348) Disable interrupt                                     */
        __IM uint32_t INTPEND4;                          /*!< (@ 0x0000034C) Pending interrupts                                    */
        __IOM uint32_t INTEN5;                           /*!< (@ 0x00000350) Enable or disable interrupt                           */
        __IOM uint32_t INTENSET5;                        /*!< (@ 0x00000354) Enable interrupt                                      */
        __IOM uint32_t INTENCLR5;                        /*!< (@ 0x00000358) Disable interrupt                                     */
        __IM uint32_t INTPEND5;                          /*!< (@ 0x0000035C) Pending interrupts                                    */
        __IOM uint32_t INTEN6;                           /*!< (@ 0x00000360) Enable or disable interrupt                           */
        __IOM uint32_t INTENSET6;                        /*!< (@ 0x00000364) Enable interrupt                                      */
        __IOM uint32_t INTENCLR6;                        /*!< (@ 0x00000368) Disable interrupt                                     */
        __IM uint32_t INTPEND6;                          /*!< (@ 0x0000036C) Pending interrupts                                    */
        __IOM uint32_t INTEN7;                           /*!< (@ 0x00000370) Enable or disable interrupt                           */
        __IOM uint32_t INTENSET7;                        /*!< (@ 0x00000374) Enable interrupt                                      */
        __IOM uint32_t INTENCLR7;                        /*!< (@ 0x00000378) Disable interrupt                                     */
        __IM uint32_t INTPEND7;                          /*!< (@ 0x0000037C) Pending interrupts                                    */
        __IOM uint32_t INTEN8;                           /*!< (@ 0x00000380) Enable or disable interrupt                           */
        __IOM uint32_t INTENSET8;                        /*!< (@ 0x00000384) Enable interrupt                                      */
        __IOM uint32_t INTENCLR8;                        /*!< (@ 0x00000388) Disable interrupt                                     */
        __IM uint32_t INTPEND8;                          /*!< (@ 0x0000038C) Pending interrupts                                    */
        __IOM uint32_t INTEN9;                           /*!< (@ 0x00000390) Enable or disable interrupt                           */
        __IOM uint32_t INTENSET9;                        /*!< (@ 0x00000394) Enable interrupt                                      */
        __IOM uint32_t INTENCLR9;                        /*!< (@ 0x00000398) Disable interrupt                                     */
        __IM uint32_t INTPEND9;                          /*!< (@ 0x0000039C) Pending interrupts                                    */
        __IOM uint32_t INTEN10;                          /*!< (@ 0x000003A0) Enable or disable interrupt                           */
        __IOM uint32_t INTENSET10;                       /*!< (@ 0x000003A4) Enable interrupt                                      */
        __IOM uint32_t INTENCLR10;                       /*!< (@ 0x000003A8) Disable interrupt                                     */
        __IM uint32_t INTPEND10;                         /*!< (@ 0x000003AC) Pending interrupts                                    */
        __IOM uint32_t INTEN11;                          /*!< (@ 0x000003B0) Enable or disable interrupt                           */
        __IOM uint32_t INTENSET11;                       /*!< (@ 0x000003B4) Enable interrupt                                      */
        __IOM uint32_t INTENCLR11;                       /*!< (@ 0x000003B8) Disable interrupt                                     */
        __IM uint32_t INTPEND11;                         /*!< (@ 0x000003BC) Pending interrupts                                    */
        __IOM uint32_t INTEN12;                          /*!< (@ 0x000003C0) Enable or disable interrupt                           */
        __IOM uint32_t INTENSET12;                       /*!< (@ 0x000003C4) Enable interrupt                                      */
        __IOM uint32_t INTENCLR12;                       /*!< (@ 0x000003C8) Disable interrupt                                     */
        __IM uint32_t INTPEND12;                         /*!< (@ 0x000003CC) Pending interrupts                                    */
        __IOM uint32_t INTEN13;                          /*!< (@ 0x000003D0) Enable or disable interrupt                           */
        __IOM uint32_t INTENSET13;                       /*!< (@ 0x000003D4) Enable interrupt                                      */
        __IOM uint32_t INTENCLR13;                       /*!< (@ 0x000003D8) Disable interrupt                                     */
        __IM uint32_t INTPEND13;                         /*!< (@ 0x000003DC) Pending interrupts                                    */
        __IOM uint32_t INTEN14;                          /*!< (@ 0x000003E0) Enable or disable interrupt                           */
        __IOM uint32_t INTENSET14;                       /*!< (@ 0x000003E4) Enable interrupt                                      */
        __IOM uint32_t INTENCLR14;                       /*!< (@ 0x000003E8) Disable interrupt                                     */
        __IM uint32_t INTPEND14;                         /*!< (@ 0x000003EC) Pending interrupts                                    */
        __IOM uint32_t INTEN15;                          /*!< (@ 0x000003F0) Enable or disable interrupt                           */
        __IOM uint32_t INTENSET15;                       /*!< (@ 0x000003F4) Enable interrupt                                      */
        __IOM uint32_t INTENCLR15;                       /*!< (@ 0x000003F8) Disable interrupt                                     */
        __IM uint32_t INTPEND15;                         /*!< (@ 0x000003FC) Pending interrupts                                    */
        __IOM uint32_t EVTEN;                            /*!< (@ 0x00000400) Enable or disable event routing                       */
        __IOM uint32_t EVTENSET;                         /*!< (@ 0x00000404) Enable event routing                                  */
        __IOM uint32_t EVTENCLR;                         /*!< (@ 0x00000408) Disable event routing                                 */
        __IM uint32_t RESERVED9[61];
        __IM uint32_t RTCOUNTERL;                        /*!< (@ 0x00000500) The lower 32-bits of the RTCOUNTER counter.           */
        __IM uint32_t RTCOUNTERH;                        /*!< (@ 0x00000504) The most significant bits of the RTCOUNTER counter.   */
        __IM uint32_t RESERVED10[2];
        __IOM uint32_t MODE;                             /*!< (@ 0x00000510) Counter mode selection                                */
        __IM uint32_t SYSCOUNTERL;                       /*!< (@ 0x00000514) The lower 32-bits of the SYSCOUNTER                   */
        __IM uint32_t SYSCOUNTERH;                       /*!< (@ 0x00000518) The higher 20-bits of the SYSCOUNTER                  */
        __IM uint32_t RESERVED11;
        __IOM NRF_GRTC_CC_Type CC[16];                   /*!< (@ 0x00000520) (unspecified)                                         */
        __IM uint32_t RESERVED12[32];
        __IOM uint32_t KEEPRUNNING;                      /*!< (@ 0x000006A0) Request to keep the SYSCOUNTER in the active state and
                                                                            prevent going to sleep*/
        __IOM uint32_t TIMEOUT;                          /*!< (@ 0x000006A4) Timeout after all CPUs gone into sleep state to stop
                                                                            the SYSCOUNTER*/
        __IOM uint32_t INTERVAL;                         /*!< (@ 0x000006A8) Count to add to CC[0] when the event EVENTS_COMPARE[0]
                                                                            triggers.*/
        __IOM uint32_t WAKETIME;                         /*!< (@ 0x000006AC) GRTC wake up time.                                    */
        __IM uint32_t RESERVED13[20];
        __IOM uint32_t RTCOMPAREL;                       /*!< (@ 0x00000700) The lower 32-bits of the RTCOMPARE register.          */
        __IOM uint32_t RTCOMPAREH;                       /*!< (@ 0x00000704) The most significant bits of the RTCOMPARE register.  */
        __IOM uint32_t RTCOMPARESYNCL;                   /*!< (@ 0x00000708) The lower 32-bits of the RTCOMPARESYNC register.      */
        __IOM uint32_t RTCOMPARESYNCH;                   /*!< (@ 0x0000070C) The most significant bits of the RTCOMPARESYNC register.*/
        __IOM uint32_t PWMCONFIG;                        /*!< (@ 0x00000710) PWM configuration.                                    */
        __IOM uint32_t CLKOUT;                           /*!< (@ 0x00000714) Configuration of clock output                         */
        __IOM uint32_t CLKCFG;                           /*!< (@ 0x00000718) Clock Configuration                                   */
        __IM uint32_t RESERVED14;
        __IOM NRF_GRTC_SYSCOUNTER_Type SYSCOUNTER[16];   /*!< (@ 0x00000720) (unspecified)                                         */
    } NRF_GRTC_Type_fixed;                             /*!< Size = 2080 (0x820)                                                  */

    #ifdef GRTC_CC_MaxCount
        #undef GRTC_CC_MaxCount
        #define GRTC_CC_MaxCount (16UL)                  /*!< Max size of CC[16] array.                                            */
    #endif
    #ifdef GRTC_TASKS_CAPTURE_MaxCount
        #undef GRTC_TASKS_CAPTURE_MaxCount
        #define GRTC_TASKS_CAPTURE_MaxCount (16UL)       /*!< Max size of TASKS_CAPTURE[16] array.                                 */
    #endif
    #ifdef GRTC_SUBSCRIBE_CAPTURE_MaxCount
        #undef GRTC_SUBSCRIBE_CAPTURE_MaxCount
        #define GRTC_SUBSCRIBE_CAPTURE_MaxCount (16UL)   /*!< Max size of SUBSCRIBE_CAPTURE[16] array.                             */
    #endif
    #ifdef GRTC_EVENTS_COMPARE_MaxCount
        #undef GRTC_EVENTS_COMPARE_MaxCount
        #define GRTC_EVENTS_COMPARE_MaxCount (16UL)      /*!< Max size of EVENTS_COMPARE[16] array.                                */
    #endif
    #ifdef GRTC_PUBLISH_COMPARE_MaxCount
        #undef GRTC_PUBLISH_COMPARE_MaxCount
        #define GRTC_PUBLISH_COMPARE_MaxCount (16UL)     /*!< Max size of PUBLISH_COMPARE[16] array.                               */
    #endif

    #ifdef NRF_GRTC_NS
        #undef NRF_GRTC_NS
        #define NRF_GRTC_NS ((NRF_GRTC_Type_fixed*) NRF_GRTC_NS_BASE)
    #endif
    #ifdef NRF_GRTC_S
        #undef NRF_GRTC_S
        #define NRF_GRTC_S ((NRF_GRTC_Type_fixed*) NRF_GRTC_S_BASE)
    #endif

    #define NRF_GRTC_Type NRF_GRTC_Type_fixed

    typedef struct {                                     /*!< HFXO64M Structure                                                    */
        __IM uint32_t RESERVED[64];
        __IOM uint32_t EVENTS_STARTED;                   /*!< (@ 0x00000100) HFXO64M started                                       */
        __IOM uint32_t EVENTS_STOPPED;                   /*!< (@ 0x00000104) HFXO64M stopped                                       */
        __IOM uint32_t EVENTS_ERRORBIAS;                 /*!< (@ 0x00000108) Error in BIAS setup                                   */
        __IOM uint32_t EVENTS_ERRORDETECTOR;             /*!< (@ 0x0000010C) Error with DETECTOR                                   */
        __IOM uint32_t EVENTS_ERRORTCXO;                 /*!< (@ 0x00000110) Error with TCXO startup                               */
        __IOM uint32_t EVENTS_STARTREQ;                  /*!< (@ 0x00000114) Clock start has been requested                        */
        __IOM uint32_t EVENTS_STOPREQ;                   /*!< (@ 0x00000118) Clock stop has been requested                         */
        __IM uint32_t RESERVED1[121];
        __IOM uint32_t INTEN;                            /*!< (@ 0x00000300) Enable or disable interrupt                           */
        __IOM uint32_t INTENSET;                         /*!< (@ 0x00000304) Enable interrupt                                      */
        __IOM uint32_t INTENCLR;                         /*!< (@ 0x00000308) Disable interrupt                                     */
        __IM uint32_t INTPEND;                           /*!< (@ 0x0000030C) Pending interrupts                                    */
        __IM uint32_t RESERVED2[60];
        __IM uint32_t STATUS;                            /*!< (@ 0x00000400) HFXO64M status                                        */
        __IM uint32_t STATUSANA;                         /*!< (@ 0x00000404) Status of analog module output signals                */
        __IM uint32_t STATUSMMI;                         /*!< (@ 0x00000408) MMI internal values for debug use.                    */
        __IM uint32_t RESERVED3[13];
        __IOM NRF_HFXO64M_TRIM_Type TRIM;                /*!< (@ 0x00000440) (unspecified)                                         */
        __IM uint32_t RESERVED4[5];
        __IOM NRF_HFXO64M_TS_Type TS;                    /*!< (@ 0x00000460) (unspecified)                                         */
        __IM uint32_t RESERVED5[4];
        __IOM uint32_t MIRROR;                           /*!< (@ 0x00000480) Enable LOCK for mirrored registers                    */
        __IOM uint32_t PWRUPCTRL;                        /*!< (@ 0x00000484) Power up control                                      */
        __IOM uint32_t MODE;                             /*!< (@ 0x00000488) HFXO64M mode                                          */
        __IOM uint32_t XTALSETTLETIME;                   /*!< (@ 0x0000048C) Settle time of the crystal. List of pre-coded times.  */
        __IOM uint32_t CHIRPTIME;                        /*!< (@ 0x00000490) Chirp period length. List of pre-coded times.         */
        __IOM uint32_t ENABLEDAMPING;                    /*!< (@ 0x00000494) Enables the MMI to do crystal damping when stopping the
                                                                            oscillator.*/
        __IOM uint32_t FORCEBUFF;                        /*!< (@ 0x00000498) Enables all clock buffers when sinOut4_ana buffer is
                                                                            enabled.*/
        __IOM uint32_t CFG;                              /*!< (@ 0x0000049C) Direct HFXO64M static configurations.                 */
        __IM uint32_t RESERVED6[24];
        __IOM NRF_HFXO64M_OVERRIDE_Type OVERRIDE;        /*!< (@ 0x00000500) (unspecified)                                         */
        __IM uint32_t RESERVED7[41];
        __IOM NRF_HFXO64M_DFT_Type DFT;                  /*!< (@ 0x00000600) (unspecified)                                         */
    } NRF_HFXO64M_Type_fixed;                            /*!< Size = 1540 (0x604)                                                  */

    /* HFXO64M_EVENTS_ERRORTCXO: Error with TCXO startup */
    #define HFXO64M_EVENTS_ERRORTCXO_ResetValue (0x00000000UL)              /*!< Reset value of EVENTS_ERRORTCXO register.       */

    /* EVENTS_ERRORTCXO @Bit 0 : Error with TCXO startup */
    #define HFXO64M_EVENTS_ERRORTCXO_EVENTS_ERRORTCXO_Pos (0UL)             /*!< Position of EVENTS_ERRORTCXO field.             */
    #define HFXO64M_EVENTS_ERRORTCXO_EVENTS_ERRORTCXO_Msk (0x1UL << HFXO64M_EVENTS_ERRORTCXO_EVENTS_ERRORTCXO_Pos)
                                                                            /*!< Bit mask of EVENTS_ERRORTCXO field.             */
    #define HFXO64M_EVENTS_ERRORTCXO_EVENTS_ERRORTCXO_Min (0x0UL)           /*!< Min enumerator value of EVENTS_ERRORTCXO field. */
    #define HFXO64M_EVENTS_ERRORTCXO_EVENTS_ERRORTCXO_Max (0x1UL)           /*!< Max enumerator value of EVENTS_ERRORTCXO field. */
    #define HFXO64M_EVENTS_ERRORTCXO_EVENTS_ERRORTCXO_NotGenerated (0x0UL)  /*!< Event not generated                             */
    #define HFXO64M_EVENTS_ERRORTCXO_EVENTS_ERRORTCXO_Generated (0x1UL)     /*!< Event generated                                 */

    /* HFXO64M_EVENTS_STARTREQ: Clock start has been requested */
    #define HFXO64M_EVENTS_STARTREQ_ResetValue (0x00000000UL)               /*!< Reset value of EVENTS_STARTREQ register.         */

    /* EVENTS_STARTREQ @Bit 0 : Clock start has been requested */
    #define HFXO64M_EVENTS_STARTREQ_EVENTS_STARTREQ_Pos (0UL)               /*!< Position of EVENTS_STARTREQ field.               */
    #define HFXO64M_EVENTS_STARTREQ_EVENTS_STARTREQ_Msk (0x1UL << HFXO64M_EVENTS_STARTREQ_EVENTS_STARTREQ_Pos)
                                                                            /*!< Bit mask of EVENTS_STARTREQ field.*/
    #define HFXO64M_EVENTS_STARTREQ_EVENTS_STARTREQ_Min (0x0UL)             /*!< Min enumerator value of EVENTS_STARTREQ field.    */
    #define HFXO64M_EVENTS_STARTREQ_EVENTS_STARTREQ_Max (0x1UL)             /*!< Max enumerator value of EVENTS_STARTREQ field.    */
    #define HFXO64M_EVENTS_STARTREQ_EVENTS_STARTREQ_NotGenerated (0x0UL)    /*!< Event not generated                               */
    #define HFXO64M_EVENTS_STARTREQ_EVENTS_STARTREQ_Generated (0x1UL)       /*!< Event generated                                   */

    /* HFXO64M_EVENTS_STOPREQ: Clock stop has been requested */
    #define HFXO64M_EVENTS_STOPREQ_ResetValue (0x00000000UL)                /*!< Reset value of EVENTS_STOPREQ register.         */

    /* EVENTS_STOPREQ @Bit 0 : Clock stop has been requested */
    #define HFXO64M_EVENTS_STOPREQ_EVENTS_STOPREQ_Pos (0UL)                 /*!< Position of EVENTS_STOPREQ field.               */
    #define HFXO64M_EVENTS_STOPREQ_EVENTS_STOPREQ_Msk (0x1UL << HFXO64M_EVENTS_STOPREQ_EVENTS_STOPREQ_Pos)
                                                                            /*!< Bit mask of EVENTS_STOPREQ field.*/
    #define HFXO64M_EVENTS_STOPREQ_EVENTS_STOPREQ_Min (0x0UL)               /*!< Min enumerator value of EVENTS_STOPREQ field.    */
    #define HFXO64M_EVENTS_STOPREQ_EVENTS_STOPREQ_Max (0x1UL)               /*!< Max enumerator value of EVENTS_STOPREQ field.    */
    #define HFXO64M_EVENTS_STOPREQ_EVENTS_STOPREQ_NotGenerated (0x0UL)      /*!< Event not generated                               */
    #define HFXO64M_EVENTS_STOPREQ_EVENTS_STOPREQ_Generated (0x1UL)         /*!< Event generated                                   */

    /* ERRORTCXO @Bit 4 : Enable or disable interrupt for event ERRORTCXO */
    #define HFXO64M_INTEN_ERRORTCXO_Pos (4UL)                                  /*!< Position of ERRORTCXO field.             */
    #define HFXO64M_INTEN_ERRORTCXO_Msk (0x1UL << HFXO64M_INTEN_ERRORTCXO_Pos) /*!< Bit mask of ERRORTCXO field.             */
    #define HFXO64M_INTEN_ERRORTCXO_Min (0x0UL)                                /*!< Min enumerator value of ERRORTCXO field. */
    #define HFXO64M_INTEN_ERRORTCXO_Max (0x1UL)                                /*!< Max enumerator value of ERRORTCXO field. */
    #define HFXO64M_INTEN_ERRORTCXO_Disabled (0x0UL)                           /*!< Disable                                  */
    #define HFXO64M_INTEN_ERRORTCXO_Enabled (0x1UL)                            /*!< Enable                                   */

    /* STARTREQ @Bit 5 : Enable or disable interrupt for event STARTREQ */
    #define HFXO64M_INTEN_STARTREQ_Pos (5UL)                                 /*!< Position of STARTREQ field.             */
    #define HFXO64M_INTEN_STARTREQ_Msk (0x1UL << HFXO64M_INTEN_STARTREQ_Pos) /*!< Bit mask of STARTREQ field.             */
    #define HFXO64M_INTEN_STARTREQ_Min (0x0UL)                               /*!< Min enumerator value of STARTREQ field. */
    #define HFXO64M_INTEN_STARTREQ_Max (0x1UL)                               /*!< Max enumerator value of STARTREQ field. */
    #define HFXO64M_INTEN_STARTREQ_Disabled (0x0UL)                          /*!< Disable                                 */
    #define HFXO64M_INTEN_STARTREQ_Enabled (0x1UL)                           /*!< Enable                                  */

    /* STOPREQ @Bit 6 : Enable or disable interrupt for event STOPREQ */
    #define HFXO64M_INTEN_STOPREQ_Pos (6UL)                                /*!< Position of STOPREQ field.             */
    #define HFXO64M_INTEN_STOPREQ_Msk (0x1UL << HFXO64M_INTEN_STOPREQ_Pos) /*!< Bit mask of STOPREQ field.             */
    #define HFXO64M_INTEN_STOPREQ_Min (0x0UL)                              /*!< Min enumerator value of STOPREQ field. */
    #define HFXO64M_INTEN_STOPREQ_Max (0x1UL)                              /*!< Max enumerator value of STOPREQ field. */
    #define HFXO64M_INTEN_STOPREQ_Disabled (0x0UL)                         /*!< Disable                                */
    #define HFXO64M_INTEN_STOPREQ_Enabled (0x1UL)                          /*!< Enable                                 */

    /* ERRORTCXO @Bit 4 : Write '1' to enable interrupt for event ERRORTCXO */
    #define HFXO64M_INTENSET_ERRORTCXO_Pos (4UL)                                     /*!< Position of ERRORTCXO field.             */
    #define HFXO64M_INTENSET_ERRORTCXO_Msk (0x1UL << HFXO64M_INTENSET_ERRORTCXO_Pos) /*!< Bit mask of ERRORTCXO field.             */
    #define HFXO64M_INTENSET_ERRORTCXO_Min (0x0UL)                                   /*!< Min enumerator value of ERRORTCXO field. */
    #define HFXO64M_INTENSET_ERRORTCXO_Max (0x1UL)                                   /*!< Max enumerator value of ERRORTCXO field. */
    #define HFXO64M_INTENSET_ERRORTCXO_Set (0x1UL)                                   /*!< Enable                                   */
    #define HFXO64M_INTENSET_ERRORTCXO_Disabled (0x0UL)                              /*!< Read: Disabled                           */
    #define HFXO64M_INTENSET_ERRORTCXO_Enabled (0x1UL)                               /*!< Read: Enabled                            */

    /* STARTREQ @Bit 5 : Write '1' to enable interrupt for event STARTREQ */
    #define HFXO64M_INTENSET_STARTREQ_Pos (5UL)                                     /*!< Position of STARTREQ field.             */
    #define HFXO64M_INTENSET_STARTREQ_Msk (0x1UL << HFXO64M_INTENSET_STARTREQ_Pos) /*!< Bit mask of STARTREQ field.              */
    #define HFXO64M_INTENSET_STARTREQ_Min (0x0UL)                                   /*!< Min enumerator value of STARTREQ field. */
    #define HFXO64M_INTENSET_STARTREQ_Max (0x1UL)                                   /*!< Max enumerator value of STARTREQ field. */
    #define HFXO64M_INTENSET_STARTREQ_Set (0x1UL)                                   /*!< Enable                                  */
    #define HFXO64M_INTENSET_STARTREQ_Disabled (0x0UL)                              /*!< Read: Disabled                          */
    #define HFXO64M_INTENSET_STARTREQ_Enabled (0x1UL)                               /*!< Read: Enabled                           */

    /* STOPREQ @Bit 6 : Write '1' to enable interrupt for event STOPREQ */
    #define HFXO64M_INTENSET_STOPREQ_Pos (6UL)                                     /*!< Position of STOPREQ field.             */
    #define HFXO64M_INTENSET_STOPREQ_Msk (0x1UL << HFXO64M_INTENSET_STOPREQ_Pos) /*!< Bit mask of STOPREQ field.               */
    #define HFXO64M_INTENSET_STOPREQ_Min (0x0UL)                                   /*!< Min enumerator value of STOPREQ field. */
    #define HFXO64M_INTENSET_STOPREQ_Max (0x1UL)                                   /*!< Max enumerator value of STOPREQ field. */
    #define HFXO64M_INTENSET_STOPREQ_Set (0x1UL)                                   /*!< Enable                                 */
    #define HFXO64M_INTENSET_STOPREQ_Disabled (0x0UL)                              /*!< Read: Disabled                         */
    #define HFXO64M_INTENSET_STOPREQ_Enabled (0x1UL)                               /*!< Read: Enabled                          */

    /* ERRORTCXO @Bit 4 : Write '1' to disable interrupt for event ERRORTCXO */
    #define HFXO64M_INTENCLR_ERRORTCXO_Pos (4UL)                                     /*!< Position of ERRORTCXO field.             */
    #define HFXO64M_INTENCLR_ERRORTCXO_Msk (0x1UL << HFXO64M_INTENCLR_ERRORTCXO_Pos) /*!< Bit mask of ERRORTCXO field.             */
    #define HFXO64M_INTENCLR_ERRORTCXO_Min (0x0UL)                                   /*!< Min enumerator value of ERRORTCXO field. */
    #define HFXO64M_INTENCLR_ERRORTCXO_Max (0x1UL)                                   /*!< Max enumerator value of ERRORTCXO field. */
    #define HFXO64M_INTENCLR_ERRORTCXO_Clear (0x1UL)                                 /*!< Disable                                  */
    #define HFXO64M_INTENCLR_ERRORTCXO_Disabled (0x0UL)                              /*!< Read: Disabled                           */
    #define HFXO64M_INTENCLR_ERRORTCXO_Enabled (0x1UL)                               /*!< Read: Enabled                            */

    /* STARTREQ @Bit 5 : Write '1' to disable interrupt for event STARTREQ */
    #define HFXO64M_INTENCLR_STARTREQ_Pos (5UL)                                    /*!< Position of STARTREQ field.             */
    #define HFXO64M_INTENCLR_STARTREQ_Msk (0x1UL << HFXO64M_INTENCLR_STARTREQ_Pos) /*!< Bit mask of STARTREQ field.             */
    #define HFXO64M_INTENCLR_STARTREQ_Min (0x0UL)                                  /*!< Min enumerator value of STARTREQ field. */
    #define HFXO64M_INTENCLR_STARTREQ_Max (0x1UL)                                  /*!< Max enumerator value of STARTREQ field. */
    #define HFXO64M_INTENCLR_STARTREQ_Clear (0x1UL)                                /*!< Disable                                 */
    #define HFXO64M_INTENCLR_STARTREQ_Disabled (0x0UL)                             /*!< Read: Disabled                          */
    #define HFXO64M_INTENCLR_STARTREQ_Enabled (0x1UL)                              /*!< Read: Enabled                           */

    /* STOPREQ @Bit 6 : Write '1' to disable interrupt for event STOPREQ */
    #define HFXO64M_INTENCLR_STOPREQ_Pos (6UL)                                   /*!< Position of STOPREQ field.             */
    #define HFXO64M_INTENCLR_STOPREQ_Msk (0x1UL << HFXO64M_INTENCLR_STOPREQ_Pos) /*!< Bit mask of STOPREQ field.             */
    #define HFXO64M_INTENCLR_STOPREQ_Min (0x0UL)                                 /*!< Min enumerator value of STOPREQ field. */
    #define HFXO64M_INTENCLR_STOPREQ_Max (0x1UL)                                 /*!< Max enumerator value of STOPREQ field. */
    #define HFXO64M_INTENCLR_STOPREQ_Clear (0x1UL)                               /*!< Disable                                */
    #define HFXO64M_INTENCLR_STOPREQ_Disabled (0x0UL)                            /*!< Read: Disabled                         */
    #define HFXO64M_INTENCLR_STOPREQ_Enabled (0x1UL)                             /*!< Read: Enabled                          */

    /* ERRORTCXO @Bit 4 : Read pending status of interrupt for event ERRORTCXO */
    #define HFXO64M_INTPEND_ERRORTCXO_Pos (4UL)                                    /*!< Position of ERRORTCXO field.             */
    #define HFXO64M_INTPEND_ERRORTCXO_Msk (0x1UL << HFXO64M_INTPEND_ERRORTCXO_Pos) /*!< Bit mask of ERRORTCXO field.             */
    #define HFXO64M_INTPEND_ERRORTCXO_Min (0x0UL)                                  /*!< Min enumerator value of ERRORTCXO field. */
    #define HFXO64M_INTPEND_ERRORTCXO_Max (0x1UL)                                  /*!< Max enumerator value of ERRORTCXO field. */
    #define HFXO64M_INTPEND_ERRORTCXO_NotPending (0x0UL)                           /*!< Read: Not pending                        */
    #define HFXO64M_INTPEND_ERRORTCXO_Pending (0x1UL)                              /*!< Read: Pending                            */

    /* STARTREQ @Bit 5 : Read pending status of interrupt for event STARTREQ */
    #define HFXO64M_INTPEND_STARTREQ_Pos (5UL)                                   /*!< Position of STARTREQ field.             */
    #define HFXO64M_INTPEND_STARTREQ_Msk (0x1UL << HFXO64M_INTPEND_STARTREQ_Pos) /*!< Bit mask of STARTREQ field.             */
    #define HFXO64M_INTPEND_STARTREQ_Min (0x0UL)                                 /*!< Min enumerator value of STARTREQ field. */
    #define HFXO64M_INTPEND_STARTREQ_Max (0x1UL)                                 /*!< Max enumerator value of STARTREQ field. */
    #define HFXO64M_INTPEND_STARTREQ_NotPending (0x0UL)                          /*!< Read: Not pending                       */
    #define HFXO64M_INTPEND_STARTREQ_Pending (0x1UL)                             /*!< Read: Pending                           */

    /* STOPREQ @Bit 6 : Read pending status of interrupt for event STOPREQ */
    #define HFXO64M_INTPEND_STOPREQ_Pos (6UL)                                  /*!< Position of STOPREQ field.             */
    #define HFXO64M_INTPEND_STOPREQ_Msk (0x1UL << HFXO64M_INTPEND_STOPREQ_Pos) /*!< Bit mask of STOPREQ field.             */
    #define HFXO64M_INTPEND_STOPREQ_Min (0x0UL)                                /*!< Min enumerator value of STOPREQ field. */
    #define HFXO64M_INTPEND_STOPREQ_Max (0x1UL)                                /*!< Max enumerator value of STOPREQ field. */
    #define HFXO64M_INTPEND_STOPREQ_NotPending (0x0UL)                         /*!< Read: Not pending                      */
    #define HFXO64M_INTPEND_STOPREQ_Pending (0x1UL)                            /*!< Read: Pending                          */

    #ifdef NRF_SYSCTRL_HFXO64M_S
        #undef NRF_SYSCTRL_HFXO64M_S
        #define NRF_SYSCTRL_HFXO64M_S ((NRF_HFXO64M_Type_fixed*) NRF_SYSCTRL_HFXO64M_S_BASE)
    #endif

    #define NRF_HFXO64M_Type NRF_HFXO64M_Type_fixed
#endif

/**************************************************************************************************/
/* End fixups section for NRF9230_XXAA                                                            */
/**************************************************************************************************/

#endif // MDK_FIXUPS_H__
