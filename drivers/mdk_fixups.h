#ifndef MDK_FIXUPS_H__
#define MDK_FIXUPS_H__

/**************************************************************************************************/
/* Start fixups section for HALTIUM_XXAA                                                          */
/**************************************************************************************************/

#if defined(NRF54H20_ENGA_XXAA) || defined(NRF54H20_XXAA) || defined(NRF7140_XXAA) \
    || defined(NRF9230_XXAA)
    #define HALTIUM_XXAA 1
#endif

#if defined(HALTIUM_XXAA)

    /* TODO: MDK-2221 */
    #define NRF_DOMAIN_COUNT NRF_DOMAIN_GLOBAL + 1

    #define GRTC_INTEN_Msk NRFX_BIT_MASK(GRTC_CC_MaxCount)

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
        #define NRF_DOMAIN NRF_DOMAIN_GLOBALFAST
    #elif defined(NRF_FLPR)
        #define NRF_DOMAIN NRF_DOMAIN_GLOBALFAST
    #elif defined(NRF_PPR)
        #define NRF_DOMAIN NRF_DOMAIN_GLOBALSLOW
    #elif defined(NRF_LMAC)
        #define NRF_DOMAIN NRF_DOMAIN_WIFICORE
    #elif defined(NRF_UMAC)
        #define NRF_DOMAIN NRF_DOMAIN_WIFICORE
    #endif

    /* TODO: MDK-2221 */
    #define NRF_PROCESSOR_COUNT (NRF_PROCESSOR_FLPR + 1)

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
    #elif !defined(NRF_CELLCORE)
        #define NRF_GPIOTE130_IRQn      GPIOTE130_1_IRQn
        #define nrfx_gpiote_irq_handler GPIOTE130_1_IRQHandler
    #endif // defined(NRF_TRUSTZONE_NONSECURE)

    #define NRF_GPIOTE_INT_COUNT 7

    #define GPIOTE_CH_NUM   8
    #define GPIOTE_PORT_NUM GPIOTE_EVENTS_PORT_MaxCount
    #define GPIOTE_FEATURE_SET_PRESENT
    #define GPIOTE_FEATURE_CLR_PRESENT

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
    #if defined(NRF54H20_XXAA) || defined(NRF7140_XXAA)
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

    #if defined (COMP_REFSEL_REFSEL_Int2V4)
        #undef COMP_REFSEL_REFSEL_Int2V4
    #endif

    #if defined (COMP_REFSEL_REFSEL_Int1V8)
        #undef COMP_REFSEL_REFSEL_Int1V8
    #endif

    #define LPCOMP_REFSEL_RESOLUTION 16

    /* TODO: HM-20336 */
    #define SAADC_CH_NUM 8

    #if defined(DPPIC_PRESENT)
        #if !defined(DPPI_PRESENT)
            #define DPPI_PRESENT
        #endif
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
#if defined(VDETAO0V8_DFT_TCFG_UNLOCKBOD_Msk) && !defined(VDETAO0V8_DFT_TCFG_UNLOCKBOD_Enabled)
    #define VDETAO0V8_DFT_TCFG_UNLOCKBOD_Enabled (0x1UL)
#elif defined(VDETAO0V8_DFT_TCFG_LOCKBOD_Msk) && !defined(VDETAO0V8_DFT_TCFG_LOCKBOD_Enabled)
    #define VDETAO0V8_DFT_TCFG_LOCKBOD_Enabled (0x1UL)
#endif
#if defined(VDETAO0V8_DFT_TCFG_OVERRIDEBODPGD0_Msk) && !defined(VDETAO0V8_DFT_TCFG_OVERRIDEBODPGD0_Enabled)
    #define VDETAO0V8_DFT_TCFG_OVERRIDEBODPGD0_Enabled (0x1UL)
#endif
#if defined(VDETAO0V8_DFT_TCFG_SETTLEDMBIASIBPSRFORECE0_Msk) && !defined(VDETAO0V8_DFT_TCFG_SETTLEDMBIASIBPSRFORECE0_Enabled)
    #define VDETAO0V8_DFT_TCFG_SETTLEDMBIASIBPSRFORECE0_Enabled (0x1UL)
#endif
    #define VDETAO0V8_DFT_TCFG_OVERRIDEN_Enabled (0x1UL)
    #define VDETAO0V8_DFT_TCFG_DISCONNECTSENSE_Enabled (0x1UL)

    #define VDETAO0V8_DFT_TCFG_PGDCOMPARATOR_Disabled (0x0UL)
    #define VDETAO0V8_DFT_TCFG_BODCOMPARATOR_Disabled (0x0UL)
    #define VDETAO0V8_DFT_TCFG_BODCOMPARATOR1UA_Disabled (0x0UL)
#if defined(VDETAO0V8_DFT_TCFG_UNLOCKBOD_Msk) && !defined(VDETAO0V8_DFT_TCFG_UNLOCKBOD_Disabled)
    #define VDETAO0V8_DFT_TCFG_UNLOCKBOD_Disabled (0x0UL)
#elif defined(VDETAO0V8_DFT_TCFG_LOCKBOD_Msk) && !defined(VDETAO0V8_DFT_TCFG_LOCKBOD_Disabled)
    #define VDETAO0V8_DFT_TCFG_LOCKBOD_Disabled (0x0UL)
#endif
#if defined(VDETAO0V8_DFT_TCFG_OVERRIDEBODPGD0_Msk) && !defined(VDETAO0V8_DFT_TCFG_OVERRIDEBODPGD0_Disabled)
    #define VDETAO0V8_DFT_TCFG_OVERRIDEBODPGD0_Disabled (0x0UL)
#endif
#if defined(VDETAO0V8_DFT_TCFG_SETTLEDMBIASIBPSRFORECE0_Msk) && !defined(VDETAO0V8_DFT_TCFG_SETTLEDMBIASIBPSRFORECE0_Disabled)
    #define VDETAO0V8_DFT_TCFG_SETTLEDMBIASIBPSRFORECE0_Disabled (0x0UL)
#endif
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

    /* TODO: HM-21442 */
    #define OSCRFR_TRIM_OSC_VAL_Val34    OSCRFR_TRIM_OSC_VAL_Val23
    #define OSCRFR_TRIM_OSC_VAL_Val154   OSCRFR_TRIM_OSC_VAL_Val54
    #define OSCRFR_TRIM_OSC_VAL_Val670   OSCRFR_TRIM_OSC_VAL_Val98
    #define OSCRFR_TRIM_OSC_VAL_ValNeg54 OSCRFR_TRIM_OSC_VAL_ValNeg51
    #define OSCRFR_TRIM_OSC_VAL_ValNeg49 OSCRFR_TRIM_OSC_VAL_ValNeg42
    #define OSCRFR_TRIM_OSC_VAL_ValNeg37 OSCRFR_TRIM_OSC_VAL_ValNeg31
    #define OSCRFR_TRIM_OSC_VAL_ValNeg26 OSCRFR_TRIM_OSC_VAL_ValNeg18

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

    /* ==================================================== Struct MPC_REGION ==================================================== */
    #define MPC_MASTER_PORTS_MaxCount (32UL) /*!< Max number of master ports. */
#endif

/**************************************************************************************************/
/* End fixups section for HALTIUM_XXAA                                                            */
/**************************************************************************************************/

/**************************************************************************************************/
/* Start fixups section for NRF54H20_ENGA                                                         */
/**************************************************************************************************/

#if defined(NRF54H20_ENGA_XXAA)

    /* TODO: MDK-2233 and MDK-2234 - wait for MDK team response. */
    #if defined(NRF_TRUSTZONE_NONSECURE) || defined(__NRFX_DOXYGEN__)
        #if defined(NRF_SECURE) || defined(__NRFX_DOXYGEN__)
            #define NRF_GRTC_IRQ_GROUP 0
        #elif defined(NRF_APPLICATION)
            #define NRF_GRTC_IRQ_GROUP 2
        #elif defined(NRF_RADIOCORE)
            #define NRF_GRTC_IRQ_GROUP 4
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
        #else
            #error Unknown core.
        #endif
    #endif

    #if defined(IPCMAP_CHANNEL_MaxCount)
        #undef IPCMAP_CHANNEL_MaxCount
        #define IPCMAP_CHANNEL_MaxCount (16UL)
    #endif

        #if defined(NRF_TRUSTZONE_NONSECURE) || defined(NRF_SYSCTRL) || defined(NRF_PPR) || \
            defined(NRF_FLPR) || defined(NRF_BBPR) || defined(__NRFX_DOXYGEN__)
        #define GRTC_IRQn       GRTC_0_IRQn
        #define GRTC_IRQHandler GRTC_0_IRQHandler
    #else
        #define GRTC_IRQn       GRTC_1_IRQn
        #define GRTC_IRQHandler GRTC_1_IRQHandler
    #endif

    /* TODO: MDK 8.52.0 contains fix for HM-17533 bug, however it is fixed in VPR1.1 so earlier
     * revisions needs tweaked offset. Related issues: NRFX-3519 NRFX-2832 */
    #undef VPRCSR_MINTTHRESH_TH_Pos
    #undef VPRCSR_MINTTHRESH_TH_Msk
    #define VPRCSR_MINTTHRESH_TH_Pos (24UL)
    #define VPRCSR_MINTTHRESH_TH_Msk (0xFFUL << VPRCSR_MINTTHRESH_TH_Pos)

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

    #if defined(P0_PIN_NUM)
        #undef P0_PIN_NUM
    #endif
    #define P0_PIN_NUM (P0_PIN_NUM_MAX - P0_PIN_NUM_MIN + 1)

    #if defined(P1_PIN_NUM)
        #undef P1_PIN_NUM
    #endif
    #define P1_PIN_NUM (P1_PIN_NUM_MAX - P1_PIN_NUM_MIN + 1)

    #if defined(P2_PIN_NUM)
        #undef P2_PIN_NUM
    #endif
    #define P2_PIN_NUM (P2_PIN_NUM_MAX - P2_PIN_NUM_MIN + 1)

    #if defined(P6_PIN_NUM)
        #undef P6_PIN_NUM
    #endif
    #define P6_PIN_NUM (P6_PIN_NUM_MAX - P6_PIN_NUM_MIN + 1)

    #if defined(P7_PIN_NUM)
        #undef P7_PIN_NUM
    #endif
    #define P7_PIN_NUM (P7_PIN_NUM_MAX - P7_PIN_NUM_MIN + 1)

    #if defined(P9_PIN_NUM)
        #undef P9_PIN_NUM
    #endif
    #define P9_PIN_NUM (P9_PIN_NUM_MAX - P9_PIN_NUM_MIN + 1)

    /* TODO: MDK-2220 */

    #if defined(P0_PINS_PRESENT)
        #undef P0_PINS_PRESENT
    #endif
    #define P0_PINS_PRESENT 0xFFFUL

    #if defined(P1_PINS_PRESENT)
        #undef P1_PINS_PRESENT
    #endif
    #define P1_PINS_PRESENT 0xFFFUL

    #if defined(P2_PINS_PRESENT)
        #undef P2_PINS_PRESENT
    #endif
    #define P2_PINS_PRESENT 0xFFFUL

    #if defined(P6_PINS_PRESENT)
        #undef P6_PINS_PRESENT
    #endif
    #define P6_PINS_PRESENT 0x3FFFUL

    #if defined(P7_PINS_PRESENT)
        #undef P7_PINS_PRESENT
    #endif
    #define P7_PINS_PRESENT 0xFFUL

    #if defined(P9_PINS_PRESENT)
        #undef P9_PINS_PRESENT
    #endif
    #define P9_PINS_PRESENT 0x3FUL

    #define P0_FEATURE_PINS_PRESENT P0_PINS_PRESENT
    #define P1_FEATURE_PINS_PRESENT P1_PINS_PRESENT
    #define P2_FEATURE_PINS_PRESENT P2_PINS_PRESENT
    #define P6_FEATURE_PINS_PRESENT P6_PINS_PRESENT
    #define P7_FEATURE_PINS_PRESENT P7_PINS_PRESENT
    #define P9_FEATURE_PINS_PRESENT P9_PINS_PRESENT

    #if defined(UARTE120_EASYDMA_MAXCNT_SIZE_MAX) && !defined(UARTE120_EASYDMA_MAXCNT_SIZE)
        #define UARTE120_EASYDMA_MAXCNT_SIZE (UARTE120_EASYDMA_MAXCNT_SIZE_MAX + 1UL)
    #endif

    #if defined(UARTE130_EASYDMA_MAXCNT_SIZE_MAX) && !defined(UARTE130_EASYDMA_MAXCNT_SIZE)
        #define UARTE130_EASYDMA_MAXCNT_SIZE (UARTE130_EASYDMA_MAXCNT_SIZE_MAX + 1UL)
    #endif

    #if defined(UARTE131_EASYDMA_MAXCNT_SIZE_MAX) && !defined(UARTE131_EASYDMA_MAXCNT_SIZE)
        #define UARTE131_EASYDMA_MAXCNT_SIZE (UARTE131_EASYDMA_MAXCNT_SIZE_MAX + 1UL)
    #endif

    #if defined(UARTE132_EASYDMA_MAXCNT_SIZE_MAX) && !defined(UARTE132_EASYDMA_MAXCNT_SIZE)
        #define UARTE132_EASYDMA_MAXCNT_SIZE (UARTE132_EASYDMA_MAXCNT_SIZE_MAX + 1UL)
    #endif

    #if defined(UARTE133_EASYDMA_MAXCNT_SIZE_MAX) && !defined(UARTE133_EASYDMA_MAXCNT_SIZE)
        #define UARTE133_EASYDMA_MAXCNT_SIZE (UARTE133_EASYDMA_MAXCNT_SIZE_MAX + 1UL)
    #endif

    #if defined(UARTE134_EASYDMA_MAXCNT_SIZE_MAX) && !defined(UARTE134_EASYDMA_MAXCNT_SIZE)
        #define UARTE134_EASYDMA_MAXCNT_SIZE (UARTE134_EASYDMA_MAXCNT_SIZE_MAX + 1UL)
    #endif

    #if defined(UARTE135_EASYDMA_MAXCNT_SIZE_MAX) && !defined(UARTE135_EASYDMA_MAXCNT_SIZE)
        #define UARTE135_EASYDMA_MAXCNT_SIZE (UARTE135_EASYDMA_MAXCNT_SIZE_MAX + 1UL)
    #endif

    #if defined(UARTE136_EASYDMA_MAXCNT_SIZE_MAX) && !defined(UARTE136_EASYDMA_MAXCNT_SIZE)
        #define UARTE136_EASYDMA_MAXCNT_SIZE (UARTE136_EASYDMA_MAXCNT_SIZE_MAX + 1UL)
    #endif

    #if defined(UARTE137_EASYDMA_MAXCNT_SIZE_MAX) && !defined(UARTE137_EASYDMA_MAXCNT_SIZE)
        #define UARTE137_EASYDMA_MAXCNT_SIZE (UARTE137_EASYDMA_MAXCNT_SIZE_MAX + 1UL)
    #endif

    #if defined(DPPIC020_CH_NUM_MAX) && !defined(DPPIC020_CH_NUM)
        #define DPPIC020_CH_NUM (DPPIC020_CH_NUM_MAX + 1UL)
    #endif

    #if defined(DPPIC030_CH_NUM_MAX) && !defined(DPPIC030_CH_NUM)
        #define DPPIC030_CH_NUM (DPPIC030_CH_NUM_MAX + 1UL)
    #endif

    #if defined(DPPIC120_CH_NUM_MAX) && !defined(DPPIC120_CH_NUM)
        #define DPPIC120_CH_NUM (DPPIC120_CH_NUM_MAX + 1UL)
    #endif

    #if defined(DPPIC130_CH_NUM_MAX) && !defined(DPPIC130_CH_NUM)
        #define DPPIC130_CH_NUM (DPPIC130_CH_NUM_MAX + 1UL)
    #endif

    #if defined(DPPIC131_CH_NUM_MAX) && !defined(DPPIC131_CH_NUM)
        #define DPPIC131_CH_NUM (DPPIC131_CH_NUM_MAX + 1UL)
    #endif

    #if defined(DPPIC132_CH_NUM_MAX) && !defined(DPPIC132_CH_NUM)
        #define DPPIC132_CH_NUM (DPPIC132_CH_NUM_MAX + 1UL)
    #endif

    #if defined(DPPIC133_CH_NUM_MAX) && !defined(DPPIC133_CH_NUM)
        #define DPPIC133_CH_NUM (DPPIC133_CH_NUM_MAX + 1UL)
    #endif

    #if defined(DPPIC134_CH_NUM_MAX) && !defined(DPPIC134_CH_NUM)
        #define DPPIC134_CH_NUM (DPPIC134_CH_NUM_MAX + 1UL)
    #endif

    #if defined(DPPIC135_CH_NUM_MAX) && !defined(DPPIC135_CH_NUM)
        #define DPPIC135_CH_NUM (DPPIC135_CH_NUM_MAX + 1UL)
    #endif

    #if defined(DPPIC136_CH_NUM_MAX) && !defined(DPPIC136_CH_NUM)
        #define DPPIC136_CH_NUM (DPPIC136_CH_NUM_MAX + 1UL)
    #endif

    /* <periph>_<feature>_MaxCount symbols meaning is inconsistent - sometimes they express
     * size of an array they describe, sometimes they express last applicable index. */

    #undef CACHEDATA_SET_WAY_DU_MaxCount
    #undef CACHEDATA_SET_WAY_MaxCount
    #undef CACHEDATA_SET_MaxCount
    #undef CACHEINFO_SET_MaxCount
    #undef DPPIC_TASKS_CHG_MaxCount
    #undef DPPIC_SUBSCRIBE_CHG_MaxCount
    #undef ETM_TRCRSCTLR_MaxCount
    #undef EXMEE_REGION_MaxCount
    #undef FICR_TRIM_SYSCTRL_MEMCONF120_REPAIR_MaxCount
    #undef FICR_TRIM_SYSCTRL_MEMCONF120_BLOCKTYPE_MaxCount
    #undef FICR_TRIM_SYSCTRL_MEMCONF130_BLOCKTYPE_MaxCount
    #undef FICR_TRIM_APPLICATION_MEMCONF_BLOCKTYPE_MaxCount
    #undef FICR_TRIM_RADIOCORE_MEMCONF_BLOCKTYPE_MaxCount
    #undef FICR_TRIM_SECURE_MEMCONF_BLOCKTYPE_MaxCount
    #undef GPIOTE_EVENTS_PORT_MaxCount
    #undef GPIOTE_PUBLISH_PORT_MaxCount
    #undef GRTC_CC_MaxCount
    #undef I2S_CHANNEL_MaxCount
    #undef I3CCORE_CORE_DEVCHARTABLE_MaxCount
    #undef IPCMAP_CHANNEL_MaxCount
    #undef IRQMAP_IRQ_MaxCount
    #undef LRCCONF_CLKSTAT_MaxCount
    #undef LRCCONF_CLKCTRL_MaxCount
    #undef MEMCONF_POWER_MaxCount
    #undef MEMCONF_REPAIR_MaxCount
    #undef MEMCONF_BLOCKTYPE_MaxCount
    #undef MPC_REGION_MaxCount
    #undef MPC_OVERRIDE_MaxCount
    #undef OICR_USER_PUBKEY_MaxCount
    #undef OICR_USER_AUTHOPKEY_MaxCount
    #undef OICR_NORDIC_PUBKEY_MaxCount
    #undef OICR_NORDIC_AUTHOPKEY_MaxCount
    #undef OICR_CRACEN_KEY_MaxCount
    #undef OICR_MRAM_MaxCount
    #undef POWER_ABB_MaxCount
    #undef PWM_SEQ_MaxCount
    #undef RADIO_ACQINJDMA_MaxCount
    #undef SAADC_EVENTS_CH_MaxCount
    #undef SAADC_PUBLISH_CH_MaxCount
    #undef SAADC_CH_MaxCount
    #undef SPU_PERIPH_MaxCount
    #undef SPU_FEATURE_GPIOTE_MaxCount
    #undef SPU_FEATURE_GPIO_MaxCount
    #undef SPU_FEATURE_BELLS_DOMAIN_MaxCount
    #undef STMDATA_DOMAIN_MaxCount
    #undef STMDATA_BUFFER_MaxCount
    #undef TAMPC_PROTECT_FEATURE_MaxCount
    #undef TAMPC_PROTECT_DOMAIN_MaxCount
    #undef TAMPC_PROTECT_AP_MaxCount
    #undef UICR_MEM_MaxCount
    #undef UICR_PERIPH_MaxCount
    #undef UICR_GPIO_MaxCount
    #undef UICR_GPIOTE_MaxCount
    #undef UICR_IPCT_GLOBAL_MaxCount
    #undef UICR_DPPI_LOCAL_MaxCount
    #undef UICR_DPPI_GLOBAL_MaxCount
    #undef UICR_MAILBOX_MaxCount
    #undef USBHSCORE_HC_MaxCount
    #undef USBHSCORE_DWCOTGDFIFO_MaxCount

    #define CACHEDATA_SET_WAY_DU_MaxCount (4UL)        /*!< Max size of DU[4] array.                    */
    #define CACHEDATA_SET_WAY_MaxCount (2UL)           /*!< Max size of WAY[2] array.                   */
    #define CACHEDATA_SET_MaxCount (256UL)             /*!< Max size of SET[256] array.                 */
    #define CACHEINFO_SET_MaxCount (256UL)             /*!< Max size of SET[256] array.                 */
    #define DPPIC_TASKS_CHG_MaxCount (2UL)             /*!< Max size of TASKS_CHG[2] array.             */
    #define DPPIC_SUBSCRIBE_CHG_MaxCount (2UL)         /*!< Max size of SUBSCRIBE_CHG[2] array.         */
    #define ETM_TRCRSCTLR_MaxCount (32UL)              /*!< Max size of TRCRSCTLR[32] array.            */
    #define EXMEE_REGION_MaxCount (16UL)               /*!< Max size of REGION[16] array.               */
    #define FICR_TRIM_SYSCTRL_MEMCONF120_REPAIR_MaxCount (36UL) /*!< Max size of REPAIR[36] array.      */
    #define FICR_TRIM_SYSCTRL_MEMCONF120_BLOCKTYPE_MaxCount (8UL) /*!< Max size of BLOCKTYPE[8] array.  */
    #define FICR_TRIM_SYSCTRL_MEMCONF130_BLOCKTYPE_MaxCount (2UL) /*!< Max size of BLOCKTYPE[2] array.  */
    #define FICR_TRIM_APPLICATION_MEMCONF_BLOCKTYPE_MaxCount (3UL) /*!< Max size of BLOCKTYPE[3] array. */
    #define FICR_TRIM_RADIOCORE_MEMCONF_BLOCKTYPE_MaxCount (3UL) /*!< Max size of BLOCKTYPE[3] array.   */
    #define FICR_TRIM_SECURE_MEMCONF_BLOCKTYPE_MaxCount (7UL) /*!< Max size of BLOCKTYPE[7] array.      */
    #define GPIOTE_EVENTS_PORT_MaxCount (4UL)          /*!< Max size of EVENTS_PORT[4] array.           */
    #define GPIOTE_PUBLISH_PORT_MaxCount (4UL)         /*!< Max size of PUBLISH_PORT[4] array.          */
    #define GRTC_CC_MaxCount (16UL)                    /*!< Max size of CC[16] array.                   */
    #define I2S_CHANNEL_MaxCount (2UL)                 /*!< Max size of CHANNEL[2] array.               */
    #define I3CCORE_CORE_DEVCHARTABLE_MaxCount (10UL)  /*!< Max size of DEVCHARTABLE[10] array.         */
    #define IPCMAP_CHANNEL_MaxCount (16UL)             /*!< Max size of CHANNEL[16] array.              */
    #define IRQMAP_IRQ_MaxCount (480UL)                /*!< Max size of IRQ[480] array.                 */
    #define LRCCONF_CLKSTAT_MaxCount (8UL)             /*!< Max size of CLKSTAT[8] array.               */
    #define LRCCONF_CLKCTRL_MaxCount (8UL)             /*!< Max size of CLKCTRL[8] array.               */
    #define MEMCONF_POWER_MaxCount (2UL)               /*!< Max size of POWER[2] array.                 */
    #define MEMCONF_REPAIR_MaxCount (192UL)            /*!< Max size of REPAIR[192] array.              */
    #define MEMCONF_BLOCKTYPE_MaxCount (64UL)          /*!< Max size of BLOCKTYPE[64] array.            */
    #define MPC_REGION_MaxCount (32UL)                 /*!< Max size of REGION[32] array.               */
    #define MPC_OVERRIDE_MaxCount (40UL)               /*!< Max size of OVERRIDE[40] array.             */
    #define OICR_USER_PUBKEY_MaxCount (4UL)            /*!< Max size of PUBKEY[4] array.                */
    #define OICR_USER_AUTHOPKEY_MaxCount (4UL)         /*!< Max size of AUTHOPKEY[4] array.             */
    #define OICR_NORDIC_PUBKEY_MaxCount (4UL)          /*!< Max size of PUBKEY[4] array.                */
    #define OICR_NORDIC_AUTHOPKEY_MaxCount (4UL)       /*!< Max size of AUTHOPKEY[4] array.             */
    #define OICR_CRACEN_KEY_MaxCount (4UL)             /*!< Max size of KEY[4] array.                   */
    #define OICR_MRAM_MaxCount (2UL)                   /*!< Max size of MRAM[2] array.                  */
    #define POWER_ABB_MaxCount (2UL)                   /*!< Max size of ABB[2] array.                   */
    #define PWM_SEQ_MaxCount (2UL)                     /*!< Max size of SEQ[2] array.                   */
    #define RADIO_ACQINJDMA_MaxCount (2UL)             /*!< Max size of ACQINJDMA[2] array.             */
    #define SAADC_EVENTS_CH_MaxCount (8UL)             /*!< Max size of EVENTS_CH[8] array.             */
    #define SAADC_PUBLISH_CH_MaxCount (8UL)            /*!< Max size of PUBLISH_CH[8] array.            */
    #define SAADC_CH_MaxCount (8UL)                    /*!< Max size of CH[8] array.                    */
    #define SPU_PERIPH_MaxCount (32UL)                 /*!< Max size of PERIPH[32] array.               */
    #define SPU_FEATURE_GPIOTE_MaxCount (1UL)          /*!< Max size of GPIOTE[1] array.                */
    #define SPU_FEATURE_GPIO_MaxCount (10UL)           /*!< Max size of GPIO[10] array.                 */
    #define SPU_FEATURE_BELLS_DOMAIN_MaxCount (16UL)   /*!< Max size of DOMAIN[16] array.               */
    #define STMDATA_DOMAIN_MaxCount (16UL)             /*!< Max size of DOMAIN[16] array.               */
    #define STMDATA_BUFFER_MaxCount (16UL)             /*!< Max size of BUFFER[16] array.               */
    #define TAMPC_PROTECT_FEATURE_MaxCount (128UL)     /*!< Max size of FEATURE[128] array.             */
    #define TAMPC_PROTECT_DOMAIN_MaxCount (16UL)       /*!< Max size of DOMAIN[16] array.               */
    #define TAMPC_PROTECT_AP_MaxCount (16UL)           /*!< Max size of AP[16] array.                   */
    #define UICR_MEM_MaxCount (16UL)                   /*!< Max size of MEM[16] array.                  */
    #define UICR_PERIPH_MaxCount (192UL)               /*!< Max size of PERIPH[192] array.              */
    #define UICR_GPIO_MaxCount (16UL)                  /*!< Max size of GPIO[16] array.                 */
    #define UICR_GPIOTE_MaxCount (4UL)                 /*!< Max size of GPIOTE[4] array.                */
    #define UICR_IPCT_GLOBAL_MaxCount (2UL)            /*!< Max size of GLOBAL[2] array.                */
    #define UICR_DPPI_LOCAL_MaxCount (2UL)             /*!< Max size of LOCAL[2] array.                 */
    #define UICR_DPPI_GLOBAL_MaxCount (12UL)           /*!< Max size of GLOBAL[12] array.               */
    #define UICR_MAILBOX_MaxCount (8UL)                /*!< Max size of MAILBOX[8] array.               */
    #define USBHSCORE_HC_MaxCount (16UL)               /*!< Max size of HC[16] array.                   */
    #define USBHSCORE_DWCOTGDFIFO_MaxCount (16UL)      /*!< Max size of DWCOTGDFIFO[16] array.          */

    /* TODO: HM-21217 */
    typedef struct {
        __OM uint32_t TASKS_ACTIVATE;                    /*!< (@ 0x00000000) Activate NFCT peripheral for incoming and outgoing
                                                                             frames, change state to activated*/
        __OM uint32_t TASKS_DISABLE;                     /*!< (@ 0x00000004) Disable NFCT peripheral                               */
        __OM uint32_t TASKS_SENSE;                       /*!< (@ 0x00000008) Enable NFC sense field mode, change state to sense
                                                                             mode*/
        __OM uint32_t TASKS_STARTTX;                     /*!< (@ 0x0000000C) Start transmission of an outgoing frame, change state
                                                                             to transmit*/
        __OM uint32_t TASKS_STOPTX;                      /*!< (@ 0x00000010) Stops an issued transmission of a frame               */
        __OM uint32_t TASKS_START_ROSCCAL;               /*!< (@ 0x00000014) Starts calibration of ring oscillator                 */
        __OM uint32_t TASKS_FREQMEASURE;                 /*!< (@ 0x00000018) Measures the 13.56 MHz clock frequency                */
        __OM uint32_t TASKS_ENABLERXDATA;                /*!< (@ 0x0000001C) Initializes the EasyDMA for receive.                  */
        __OM uint32_t TASKS_DISABLERXDATA;               /*!< (@ 0x00000020) Ends current EasyDMA transfer and stops waiting for
                                                                             start of frame (SoF)*/
        __OM uint32_t TASKS_GOIDLE;                      /*!< (@ 0x00000024) Force state machine to IDLE state                     */
        __OM uint32_t TASKS_GOSLEEP;                     /*!< (@ 0x00000028) Force state machine to SLEEP_A state                  */
        __IM uint32_t RESERVED[21];
        __IOM uint32_t SUBSCRIBE_ACTIVATE;               /*!< (@ 0x00000080) Subscribe configuration for task ACTIVATE             */
        __IOM uint32_t SUBSCRIBE_DISABLE;                /*!< (@ 0x00000084) Subscribe configuration for task DISABLE              */
        __IOM uint32_t SUBSCRIBE_SENSE;                  /*!< (@ 0x00000088) Subscribe configuration for task SENSE                */
        __IOM uint32_t SUBSCRIBE_STARTTX;                /*!< (@ 0x0000008C) Subscribe configuration for task STARTTX              */
        __IOM uint32_t SUBSCRIBE_STOPTX;                 /*!< (@ 0x00000090) Subscribe configuration for task STOPTX               */
        __IOM uint32_t SUBSCRIBE_START_ROSCCAL;          /*!< (@ 0x00000094) Subscribe configuration for task START_ROSCCAL        */
        __IOM uint32_t SUBSCRIBE_FREQMEASURE;            /*!< (@ 0x00000098) Subscribe configuration for task FREQMEASURE          */
        __IOM uint32_t SUBSCRIBE_ENABLERXDATA;           /*!< (@ 0x0000009C) Subscribe configuration for task ENABLERXDATA         */
        __IOM uint32_t SUBSCRIBE_DISABLERXDATA;          /*!< (@ 0x000000A0) Subscribe configuration for task DISABLERXDATA        */
        __IOM uint32_t SUBSCRIBE_GOIDLE;                 /*!< (@ 0x000000A4) Subscribe configuration for task GOIDLE               */
        __IOM uint32_t SUBSCRIBE_GOSLEEP;                /*!< (@ 0x000000A8) Subscribe configuration for task GOSLEEP              */
        __IM uint32_t RESERVED1[21];
        __IOM uint32_t EVENTS_READY;                     /*!< (@ 0x00000100) The NFCT peripheral is ready to receive and send
                                                                             frames*/
        __IOM uint32_t EVENTS_FIELDDETECTED;             /*!< (@ 0x00000104) Remote NFC field detected                             */
        __IOM uint32_t EVENTS_FIELDLOST;                 /*!< (@ 0x00000108) Remote NFC field lost                                 */
        __IOM uint32_t EVENTS_TXFRAMESTART;              /*!< (@ 0x0000010C) Marks the start of the first symbol of a transmitted
                                                                             frame*/
        __IOM uint32_t EVENTS_TXFRAMEEND;                /*!< (@ 0x00000110) Marks the end of the last transmitted on-air symbol of
                                                                             a frame data bit on the last positive edge ckTxNfc with
                                                                             nfcTransmit = 1*/
        __IOM uint32_t EVENTS_RXFRAMESTART;              /*!< (@ 0x00000114) Marks the end of the first symbol of a received frame */
        __IOM uint32_t EVENTS_RXFRAMEEND;                /*!< (@ 0x00000118) Received data has been checked (CRC, parity) and
                                                                             transferred to RAM, and EasyDMA has ended accessing the
                                                                             RX buffer*/
        __IOM uint32_t EVENTS_ERROR;                     /*!< (@ 0x0000011C) NFC error reported. The ERRORSTATUS register contains
                                                                             details on the source of the error.*/
        __IOM uint32_t EVENTS_FREQMEASUREDONE;           /*!< (@ 0x00000120) Done with one frequency measurement, result available
                                                                             in the MEASUREDFREQ register. This event will fire
                                                                             several times during calibration.*/
        __IOM uint32_t EVENTS_CALCOMPLETE;               /*!< (@ 0x00000124) NFC ring oscillator calibration complete.             */
        __IOM uint32_t EVENTS_RXERROR;                   /*!< (@ 0x00000128) NFC RX frame error reported. The FRAMESTATUS.RX
                                                                             register contains details on the source of the error.*/
        __IOM uint32_t EVENTS_ENDRX;                     /*!< (@ 0x0000012C) RX buffer (as defined by PACKETPTR and MAXLEN) in Data
                                                                             RAM full.*/
        __IOM uint32_t EVENTS_ENDTX;                     /*!< (@ 0x00000130) Transmission of data in RAM has ended, and EasyDMA has
                                                                             ended accessing the TX buffer*/
        __IM uint32_t RESERVED2;
        __IOM uint32_t EVENTS_AUTOCOLRESSTARTED;         /*!< (@ 0x00000138) Auto collision resolution process has started Event
                                                                             generated when ALL_REQ or SENS_REQ has been received
                                                                             while in IDLE state*/
        __IOM uint32_t EVENTS_AUTOCOLRES1;               /*!< (@ 0x0000013C) Auto collision resolution cascade level 1 succeeded   */
        __IOM uint32_t EVENTS_AUTOCOLRES2;               /*!< (@ 0x00000140) Auto collision resolution cascade level 2 succeeded   */
        __IOM uint32_t EVENTS_AUTOCOLRES3;               /*!< (@ 0x00000144) Auto collision resolution cascade level 3 succeeded   */
        __IOM uint32_t EVENTS_COLLISION;                 /*!< (@ 0x00000148) NFC auto collision resolution error reported. The
                                                                             AUTOCOLRESSTATUS register contains details on the
                                                                             source of the error.*/
        __IOM uint32_t EVENTS_SELECTED;                  /*!< (@ 0x0000014C) NFC auto collision resolution successfully completed  */
        __IOM uint32_t EVENTS_STARTED;                   /*!< (@ 0x00000150) EasyDMA is ready to receive or send frames.           */
        __IM uint32_t RESERVED3[11];
        __IOM uint32_t PUBLISH_READY;                    /*!< (@ 0x00000180) Publish configuration for event READY                 */
        __IOM uint32_t PUBLISH_FIELDDETECTED;            /*!< (@ 0x00000184) Publish configuration for event FIELDDETECTED         */
        __IOM uint32_t PUBLISH_FIELDLOST;                /*!< (@ 0x00000188) Publish configuration for event FIELDLOST             */
        __IOM uint32_t PUBLISH_TXFRAMESTART;             /*!< (@ 0x0000018C) Publish configuration for event TXFRAMESTART          */
        __IOM uint32_t PUBLISH_TXFRAMEEND;               /*!< (@ 0x00000190) Publish configuration for event TXFRAMEEND            */
        __IOM uint32_t PUBLISH_RXFRAMESTART;             /*!< (@ 0x00000194) Publish configuration for event RXFRAMESTART          */
        __IOM uint32_t PUBLISH_RXFRAMEEND;               /*!< (@ 0x00000198) Publish configuration for event RXFRAMEEND            */
        __IOM uint32_t PUBLISH_ERROR;                    /*!< (@ 0x0000019C) Publish configuration for event ERROR                 */
        __IOM uint32_t PUBLISH_FREQMEASUREDONE;          /*!< (@ 0x000001A0) Publish configuration for event FREQMEASUREDONE       */
        __IOM uint32_t PUBLISH_CALCOMPLETE;              /*!< (@ 0x000001A4) Publish configuration for event CALCOMPLETE           */
        __IOM uint32_t PUBLISH_RXERROR;                  /*!< (@ 0x000001A8) Publish configuration for event RXERROR               */
        __IOM uint32_t PUBLISH_ENDRX;                    /*!< (@ 0x000001AC) Publish configuration for event ENDRX                 */
        __IOM uint32_t PUBLISH_ENDTX;                    /*!< (@ 0x000001B0) Publish configuration for event ENDTX                 */
        __IM uint32_t RESERVED4;
        __IOM uint32_t PUBLISH_AUTOCOLRESSTARTED;        /*!< (@ 0x000001B8) Publish configuration for event AUTOCOLRESSTARTED     */
        __IOM uint32_t PUBLISH_AUTOCOLRES1;              /*!< (@ 0x000001BC) Publish configuration for event AUTOCOLRES1           */
        __IOM uint32_t PUBLISH_AUTOCOLRES2;              /*!< (@ 0x000001C0) Publish configuration for event AUTOCOLRES2           */
        __IOM uint32_t PUBLISH_AUTOCOLRES3;              /*!< (@ 0x000001C4) Publish configuration for event AUTOCOLRES3           */
        __IOM uint32_t PUBLISH_COLLISION;                /*!< (@ 0x000001C8) Publish configuration for event COLLISION             */
        __IOM uint32_t PUBLISH_SELECTED;                 /*!< (@ 0x000001CC) Publish configuration for event SELECTED              */
        __IOM uint32_t PUBLISH_STARTED;                  /*!< (@ 0x000001D0) Publish configuration for event STARTED               */
        __IM uint32_t RESERVED5[11];
        __IOM uint32_t SHORTS;                           /*!< (@ 0x00000200) Shortcuts between local events and tasks              */
        __IM uint32_t RESERVED6[63];
        __IOM uint32_t INTEN;                            /*!< (@ 0x00000300) Enable or disable interrupt                           */
        __IOM uint32_t INTENSET;                         /*!< (@ 0x00000304) Enable interrupt                                      */
        __IOM uint32_t INTENCLR;                         /*!< (@ 0x00000308) Disable interrupt                                     */
        __IM uint32_t RESERVED7[61];
        __IM uint32_t PWRUPSENSE;                        /*!< (@ 0x00000400) Tells if the NFCT peripheral is in SENSE mode         */
        __IOM uint32_t ERRORSTATUS;                      /*!< (@ 0x00000404) NFC Error Status register                             */
        __IOM uint32_t AUTOCOLRESSTATUS;                 /*!< (@ 0x00000408) NFC Auto collision resolution Error Status register   */
        __IOM NRF_NFCT_FRAMESTATUS_Type FRAMESTATUS;     /*!< (@ 0x0000040C) (unspecified)                                         */
        __IM uint32_t NFCTAGSTATE;                       /*!< (@ 0x00000410) Current operating state of NFC tag                    */
        __IM uint32_t RESERVED8[3];
        __IM uint32_t SLEEPSTATE;                        /*!< (@ 0x00000420) Sleep state during automatic collision resolution     */
        __IM uint32_t BYTESWRITTENTORAM;                 /*!< (@ 0x00000424) Number of bytes written to RAM                        */
        __IM uint32_t NFCFRAMINGCORESTATE;               /*!< (@ 0x00000428) NFC Framing Core State                                */
        __IOM uint32_t NFCANTICOLRESSTATE;               /*!< (@ 0x0000042C) Automatic collision resolution (anti-collision) state */
        __IM uint32_t RESERVED9;
        __IM uint32_t MEASUREDFREQ;                      /*!< (@ 0x00000434) The frequency measured on the 13.56 MHz NFC carrier
                                                                             signal*/
        __IM uint32_t ROSCCALVALUE;                      /*!< (@ 0x00000438) The current value used by the ring oscillator         */
        __IM uint32_t FIELDPRESENT;                      /*!< (@ 0x0000043C) Indicates the presence or not of a valid field        */
        __IM uint32_t CMFBPDREF;                         /*!< (@ 0x00000440) Current value of common-mode voltage level at pad     */
        __IM uint32_t RESERVED10[47];
        __IOM uint32_t ENABLE;                           /*!< (@ 0x00000500) Register to enable NFC functionality                  */
        __IOM uint32_t FRAMEDELAYMIN;                    /*!< (@ 0x00000504) Minimum frame delay                                   */
        __IOM uint32_t FRAMEDELAYMAX;                    /*!< (@ 0x00000508) Maximum frame delay                                   */
        __IOM uint32_t FRAMEDELAYMODE;                   /*!< (@ 0x0000050C) Configuration register for the Frame Delay Timer      */
        __IOM uint32_t PACKETPTR;                        /*!< (@ 0x00000510) Packet pointer for TXD and RXD data storage in Data
                                                                             RAM*/
        __IOM uint32_t MAXLEN;                           /*!< (@ 0x00000514) Size of the RAM buffer allocated to TXD and RXD data
                                                                             storage each*/
        __IOM NRF_NFCT_TXD_Type TXD;                     /*!< (@ 0x00000518) (unspecified)                                         */
        __IOM NRF_NFCT_RXD_Type RXD;                     /*!< (@ 0x00000520) (unspecified)                                         */
        __IOM uint32_t FRAMEDELAYSHIFT;                  /*!< (@ 0x00000528) Correction for the frame delay reference              */
        __IOM uint32_t MODULATIONCTRL;                   /*!< (@ 0x0000052C) Enables the modulation output to a GPIO pin which can
                                                                             be connected to a second external antenna.*/
        __IOM uint32_t CRCPOLY;                          /*!< (@ 0x00000530) CRC polynomial                                        */
        __IOM uint32_t CRCINIT;                          /*!< (@ 0x00000534) CRC initial value                                     */
        __IOM uint32_t MODULATIONPSEL;                   /*!< (@ 0x00000538) Pin select for Modulation control                     */
        __IM uint32_t RESERVED12[5];
        __IOM uint32_t MODE;                             /*!< (@ 0x00000550) Configure EasyDMA mode                                */
        __IM uint32_t RESERVED13[15];
        __IOM uint32_t NFCID1_LAST;                      /*!< (@ 0x00000590) Last NFCID1 part (4, 7 or 10 bytes ID)                */
        __IOM uint32_t NFCID1_2ND_LAST;                  /*!< (@ 0x00000594) Second last NFCID1 part (7 or 10 bytes ID)            */
        __IOM uint32_t NFCID1_3RD_LAST;                  /*!< (@ 0x00000598) Third last NFCID1 part (10 bytes ID)                  */
        __IOM uint32_t AUTOCOLRESCONFIG;                 /*!< (@ 0x0000059C) Controls the auto collision resolution function. This
                                                                             setting must be done before the NFCT peripheral is
                                                                             activated.*/
        __IOM uint32_t SENSRES;                          /*!< (@ 0x000005A0) NFC-A SENS_RES auto-response settings                 */
        __IOM uint32_t SELRES;                           /*!< (@ 0x000005A4) NFC-A SEL_RES auto-response settings                  */
        __IM uint32_t RESERVED14[29];
        __IOM uint32_t DEMODCONFIG;                      /*!< (@ 0x0000061C) Configuration settings for demodulation               */
        __IM uint32_t RESERVED15[2];
        __IOM uint32_t SYMBOLTOLLOWER;                   /*!< (@ 0x00000628) Configuration register for the tolerance of the
                                                                             received NFC pulse width*/
        __IOM uint32_t SYMBOLTOLUPPER;                   /*!< (@ 0x0000062C) Configuration register for the tolerance of the
                                                                             received NFC pulse width*/
        __IOM uint32_t CONTINUOUSSUBCARRIER;             /*!< (@ 0x00000630) Selects continuous sub-carrier transmission           */
        __IM uint32_t RESERVED16[2];
        __IOM uint32_t CLOCKRECCONFIG;                   /*!< (@ 0x0000063C) Configuration bits for NFCT_CLOCKREC_GF22N            */
        __IM uint32_t RESERVED17[4];
        __IOM uint32_t OVERRIDEENABLE;                   /*!< (@ 0x00000650) Enables override functionality.                       */
        __IM uint32_t RESERVED18[3];
        __IOM uint32_t OVRVALPWRUPNFC;                   /*!< (@ 0x00000660) Override value for pwrupNfc                           */
        __IOM uint32_t OVRVALMODULATION;                 /*!< (@ 0x00000664) Override value for modulation on/off                  */
        __IM uint32_t RESERVED19[3];
        __IOM uint32_t OVRVALROSCCALCODE;                /*!< (@ 0x00000674) Override value for the calibration word for the
                                                                             oscillator*/
        __IOM uint32_t OVRVALCLAMPEN1V6;                 /*!< (@ 0x00000678) Override value for the 1V6 clamp                      */
        __IOM uint32_t OVRVALCLAMPEN2V6;                 /*!< (@ 0x0000067C) Override value for the 2V6 clamp                      */
        __IOM uint32_t CALENNFC;                         /*!< (@ 0x00000680) Value for the signal CALEN going to the oscillator    */
        __IOM uint32_t AUTOCAL;                          /*!< (@ 0x00000684) Controls auto-calibration at NFCT module enabling     */
        __IM uint32_t RESERVED20;
        __IOM uint32_t SHUNTREGCONFIG;                   /*!< (@ 0x0000068C) Configuration for NFCT_SHUNTREG_GF22N                 */
        __IOM uint32_t LOADMODCONFIG;                    /*!< (@ 0x00000690) Configuration for load modulation                     */
        __IM uint32_t RESERVED21[2];
        __IOM uint32_t OVRVALCMFBPDREF;                  /*!< (@ 0x0000069C) Override value for cmfbPdRef                          */
        __IOM uint32_t LOCKDETECTWINDOW;                 /*!< (@ 0x000006A0) Adjust window size on falling edge of lock detect
                                                                             filter used for demodulation*/
        __IM uint32_t RESERVED22;
        __IOM uint32_t PNFCCFGRET;                       /*!< (@ 0x000006A8) Configuration of constant bits in P_NFCCFG_RET_0V8    */
        __IOM uint32_t SHUNTALGCONFIG;                   /*!< (@ 0x000006AC) Configuration settings for Shunt regulator algorithm  */
        __IOM uint32_t DTB0CFGNFCTRET;                   /*!< (@ 0x000006B0) Digital test signal switch control                    */
        __IM uint32_t RESERVED23;
        __IOM uint32_t OVRVALPWRUPNFCTFIELDDET;          /*!< (@ 0x000006B8) Power up field detect part of circuit and 5 nA IBPP
                                                                             current reference*/
        __IOM uint32_t OVRVALNFCTRSTEDCLK;               /*!< (@ 0x000006BC) Resets edge detect signal in NFCT_CLOCKREC_GF22N      */
        __IOM uint32_t OVRVALNFCTRSTPEAKLEV;             /*!< (@ 0x000006C0) Resets peak detectors in NFCT_SHUNTREG_GF22N          */
        __IOM uint32_t OVRVALNFCTCALEN;                  /*!< (@ 0x000006C4) Enable calibration of ring oscillator in
                                                                             NFCT_CLOCKREC_GF22N*/
        __IOM uint32_t OVRVALTCFGNFCT;                   /*!< (@ 0x000006C8) Digital test signal switch control                    */
        __IOM uint32_t NFCTFIELDDETCFG;                  /*!< (@ 0x000006CC) NFCT_FIELDDET_GF22N configuration bits                */
        __IOM uint32_t NFCTCTRL;                         /*!< (@ 0x000006D0) Spare digital control signals                         */
        __IOM uint32_t PWRUPNFCTLDO;                     /*!< (@ 0x000006D4) Power-up for LDO                                      */
        __IM uint32_t RESERVED24[2];
        __IM uint32_t NFCTCALCMP;                        /*!< (@ 0x000006E0) Output from the calibration comparator                */
        __IOM uint32_t BIASCFG;                          /*!< (@ 0x000006E4) Configuration of NFCT_BIAS_GF22N                      */
        __IOM uint32_t RINGOSCCONFIG;                    /*!< (@ 0x000006E8) Configuration settings for ring oscillator algorithm  */
        __IOM uint32_t OVRVALRETAIN;                     /*!< (@ 0x000006EC) Retain - Latch and isolate all RET_0V8 inputs to
                                                                             NFCT_ANA_GF22N and P_NFC_GF22N*/
        __IOM uint32_t ATB0CFGNFCTRET;                   /*!< (@ 0x000006F0) Analog test signal switch control                     */
        __IOM uint32_t ATB1CFGNFCTRET;                   /*!< (@ 0x000006F4) Analog test signal switch control                     */
        __IOM uint32_t CMFBENABLE;                       /*!< (@ 0x000006F8) Enable calibration of cmfbPdRef                       */
        __IOM uint32_t OVRVALPADNFCCFG;                  /*!< (@ 0x000006FC) Override of P_NFCCFG_RET_0V8 to P_NFC_GF22N           */
        __IOM uint32_t PADCONFIG;                        /*!< (@ 0x00000700) NFC pad configuration                                 */
    } NRF_NFCT_Type_fixed;                               /*!< Size = 1796 (0x704)*/

    #if defined(NRF_NFCT_S)
        #undef NRF_NFCT_S
        #define NRF_NFCT_S ((NRF_NFCT_Type_fixed*) NRF_NFCT_S_BASE)
    #endif
    #if defined(NRF_NFCT_NS)
        #undef NRF_NFCT_NS
        #define NRF_NFCT_NS ((NRF_NFCT_Type_fixed*) NRF_NFCT_NS_BASE)
    #endif

    #define NRF_NFCT_Type NRF_NFCT_Type_fixed

#endif

/**************************************************************************************************/
/* End fixups section for NRF54H20_ENGA                                                           */
/**************************************************************************************************/

/**************************************************************************************************/
/* Start fixups section for NRF54H20_XXAA (LILIUMFP1)                                             */
/**************************************************************************************************/

#if defined(NRF54H20_XXAA)

    /* TODO: MDK-2233 and MDK-2234 - wait for MDK team response. */
    #if defined(NRF_TRUSTZONE_NONSECURE) || defined(__NRFX_DOXYGEN__)
        #if defined(NRF_SECURE) || defined(__NRFX_DOXYGEN__)
            #define NRF_GRTC_IRQ_GROUP 0
        #elif defined(NRF_APPLICATION)
            #define NRF_GRTC_IRQ_GROUP 2
        #elif defined(NRF_RADIOCORE)
            #define NRF_GRTC_IRQ_GROUP 4
        #else
            #error Unknown core.
        #endif
    #elif defined(NRF_SYSCTRL)
        #define NRF_GRTC_IRQ_GROUP 7
    #elif defined(NRF_PPR)
        #define NRF_GRTC_IRQ_GROUP 8
    #elif defined(NRF_FLPR)
        #define NRF_GRTC_IRQ_GROUP 9
    #elif defined(NRF_BBPR)
        #define NRF_GRTC_IRQ_GROUP 10
    #else
        #if defined(NRF_SECURE)
            #define NRF_GRTC_IRQ_GROUP 1
        #elif defined(NRF_APPLICATION)
            #define NRF_GRTC_IRQ_GROUP 3
        #elif defined(NRF_RADIOCORE)
            #define NRF_GRTC_IRQ_GROUP 5
        #else
            #error Unknown core.
        #endif
    #endif

    #if defined(NRF_TRUSTZONE_NONSECURE) || defined(NRF_SYSCTRL) || defined(NRF_PPR) || \
            defined(NRF_FLPR) || defined(NRF_BBPR) || defined(__NRFX_DOXYGEN__)
        #define GRTC_IRQn       GRTC_0_IRQn
        #define GRTC_IRQHandler GRTC_0_IRQHandler
    #else
        #define GRTC_IRQn       GRTC_1_IRQn
        #define GRTC_IRQHandler GRTC_1_IRQHandler
    /* TODO: NRFX-3940 - Add GRTC_2_IRQn and GRTC_2_IRQHandler for RadioCore. */
    #endif

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

    #define P0_FEATURE_PINS_PRESENT P0_PINS_PRESENT
    #define P1_FEATURE_PINS_PRESENT P1_PINS_PRESENT
    #define P2_FEATURE_PINS_PRESENT P2_PINS_PRESENT
    #define P6_FEATURE_PINS_PRESENT P6_PINS_PRESENT
    #define P7_FEATURE_PINS_PRESENT P7_PINS_PRESENT
    #define P9_FEATURE_PINS_PRESENT P9_PINS_PRESENT

    // SPIM EASYDMA_MAXCNT_SIZE
    #if defined(SPIM120_EASYDMA_MAXCNT_SIZE_MAX) && !defined(SPIM120_EASYDMA_MAXCNT_SIZE)
        #define SPIM120_EASYDMA_MAXCNT_SIZE (SPIM120_EASYDMA_MAXCNT_SIZE_MAX + 1UL)
    #endif

    #if defined(SPIM121_EASYDMA_MAXCNT_SIZE_MAX) && !defined(SPIM121_EASYDMA_MAXCNT_SIZE)
        #define SPIM121_EASYDMA_MAXCNT_SIZE (SPIM121_EASYDMA_MAXCNT_SIZE_MAX + 1UL)
    #endif

    #if defined(SPIM130_EASYDMA_MAXCNT_SIZE_MAX) && !defined(SPIM130_EASYDMA_MAXCNT_SIZE)
        #define SPIM130_EASYDMA_MAXCNT_SIZE (SPIM130_EASYDMA_MAXCNT_SIZE_MAX + 1UL)
    #endif

    #if defined(SPIM131_EASYDMA_MAXCNT_SIZE_MAX) && !defined(SPIM131_EASYDMA_MAXCNT_SIZE)
        #define SPIM131_EASYDMA_MAXCNT_SIZE (SPIM131_EASYDMA_MAXCNT_SIZE_MAX + 1UL)
    #endif

    #if defined(SPIM132_EASYDMA_MAXCNT_SIZE_MAX) && !defined(SPIM132_EASYDMA_MAXCNT_SIZE)
        #define SPIM132_EASYDMA_MAXCNT_SIZE (SPIM132_EASYDMA_MAXCNT_SIZE_MAX + 1UL)
    #endif

    #if defined(SPIM133_EASYDMA_MAXCNT_SIZE_MAX) && !defined(SPIM133_EASYDMA_MAXCNT_SIZE)
        #define SPIM133_EASYDMA_MAXCNT_SIZE (SPIM133_EASYDMA_MAXCNT_SIZE_MAX + 1UL)
    #endif

    #if defined(SPIM134_EASYDMA_MAXCNT_SIZE_MAX) && !defined(SPIM134_EASYDMA_MAXCNT_SIZE)
        #define SPIM134_EASYDMA_MAXCNT_SIZE (SPIM134_EASYDMA_MAXCNT_SIZE_MAX + 1UL)
    #endif

    #if defined(SPIM135_EASYDMA_MAXCNT_SIZE_MAX) && !defined(SPIM135_EASYDMA_MAXCNT_SIZE)
        #define SPIM135_EASYDMA_MAXCNT_SIZE (SPIM135_EASYDMA_MAXCNT_SIZE_MAX + 1UL)
    #endif

    #if defined(SPIM136_EASYDMA_MAXCNT_SIZE_MAX) && !defined(SPIM136_EASYDMA_MAXCNT_SIZE)
        #define SPIM136_EASYDMA_MAXCNT_SIZE (SPIM136_EASYDMA_MAXCNT_SIZE_MAX + 1UL)
    #endif

    #if defined(SPIM137_EASYDMA_MAXCNT_SIZE_MAX) && !defined(SPIM137_EASYDMA_MAXCNT_SIZE)
        #define SPIM137_EASYDMA_MAXCNT_SIZE (SPIM137_EASYDMA_MAXCNT_SIZE_MAX + 1UL)
    #endif

    // SPIS EASYDMA_MAXCNT_SIZE
    #if defined(SPIS120_EASYDMA_MAXCNT_SIZE_MAX) && !defined(SPIS120_EASYDMA_MAXCNT_SIZE)
        #define SPIS120_EASYDMA_MAXCNT_SIZE (SPIS120_EASYDMA_MAXCNT_SIZE_MAX + 1UL)
    #endif

    #if defined(SPIS130_EASYDMA_MAXCNT_SIZE_MAX) && !defined(SPIS130_EASYDMA_MAXCNT_SIZE)
        #define SPIS130_EASYDMA_MAXCNT_SIZE (SPIS130_EASYDMA_MAXCNT_SIZE_MAX + 1UL)
    #endif

    #if defined(SPIS131_EASYDMA_MAXCNT_SIZE_MAX) && !defined(SPIS131_EASYDMA_MAXCNT_SIZE)
        #define SPIS131_EASYDMA_MAXCNT_SIZE (SPIS131_EASYDMA_MAXCNT_SIZE_MAX + 1UL)
    #endif

    #if defined(SPIS132_EASYDMA_MAXCNT_SIZE_MAX) && !defined(SPIS132_EASYDMA_MAXCNT_SIZE)
        #define SPIS132_EASYDMA_MAXCNT_SIZE (SPIS132_EASYDMA_MAXCNT_SIZE_MAX + 1UL)
    #endif

    #if defined(SPIS133_EASYDMA_MAXCNT_SIZE_MAX) && !defined(SPIS133_EASYDMA_MAXCNT_SIZE)
        #define SPIS133_EASYDMA_MAXCNT_SIZE (SPIS133_EASYDMA_MAXCNT_SIZE_MAX + 1UL)
    #endif

    #if defined(SPIS134_EASYDMA_MAXCNT_SIZE_MAX) && !defined(SPIS134_EASYDMA_MAXCNT_SIZE)
        #define SPIS134_EASYDMA_MAXCNT_SIZE (SPIS134_EASYDMA_MAXCNT_SIZE_MAX + 1UL)
    #endif

    #if defined(SPIS135_EASYDMA_MAXCNT_SIZE_MAX) && !defined(SPIS135_EASYDMA_MAXCNT_SIZE)
        #define SPIS135_EASYDMA_MAXCNT_SIZE (SPIS135_EASYDMA_MAXCNT_SIZE_MAX + 1UL)
    #endif

    #if defined(SPIS136_EASYDMA_MAXCNT_SIZE_MAX) && !defined(SPIS136_EASYDMA_MAXCNT_SIZE)
        #define SPIS136_EASYDMA_MAXCNT_SIZE (SPIS136_EASYDMA_MAXCNT_SIZE_MAX + 1UL)
    #endif

    #if defined(SPIS137_EASYDMA_MAXCNT_SIZE_MAX) && !defined(SPIS137_EASYDMA_MAXCNT_SIZE)
        #define SPIS137_EASYDMA_MAXCNT_SIZE (SPIS137_EASYDMA_MAXCNT_SIZE_MAX + 1UL)
    #endif

    // TWIM EASYDMA_MAXCNT_SIZE
    #if defined(TWIM130_EASYDMA_MAXCNT_SIZE_MAX) && !defined(TWIM130_EASYDMA_MAXCNT_SIZE)
        #define TWIM130_EASYDMA_MAXCNT_SIZE (TWIM130_EASYDMA_MAXCNT_SIZE_MAX + 1UL)
    #endif

    #if defined(TWIM131_EASYDMA_MAXCNT_SIZE_MAX) && !defined(TWIM131_EASYDMA_MAXCNT_SIZE)
        #define TWIM131_EASYDMA_MAXCNT_SIZE (TWIM131_EASYDMA_MAXCNT_SIZE_MAX + 1UL)
    #endif

    #if defined(TWIM132_EASYDMA_MAXCNT_SIZE_MAX) && !defined(TWIM132_EASYDMA_MAXCNT_SIZE)
        #define TWIM132_EASYDMA_MAXCNT_SIZE (TWIM132_EASYDMA_MAXCNT_SIZE_MAX + 1UL)
    #endif

    #if defined(TWIM133_EASYDMA_MAXCNT_SIZE_MAX) && !defined(TWIM133_EASYDMA_MAXCNT_SIZE)
        #define TWIM133_EASYDMA_MAXCNT_SIZE (TWIM133_EASYDMA_MAXCNT_SIZE_MAX + 1UL)
    #endif

    #if defined(TWIM134_EASYDMA_MAXCNT_SIZE_MAX) && !defined(TWIM134_EASYDMA_MAXCNT_SIZE)
        #define TWIM134_EASYDMA_MAXCNT_SIZE (TWIM134_EASYDMA_MAXCNT_SIZE_MAX + 1UL)
    #endif

    #if defined(TWIM135_EASYDMA_MAXCNT_SIZE_MAX) && !defined(TWIM135_EASYDMA_MAXCNT_SIZE)
        #define TWIM135_EASYDMA_MAXCNT_SIZE (TWIM135_EASYDMA_MAXCNT_SIZE_MAX + 1UL)
    #endif

    #if defined(TWIM136_EASYDMA_MAXCNT_SIZE_MAX) && !defined(TWIM136_EASYDMA_MAXCNT_SIZE)
        #define TWIM136_EASYDMA_MAXCNT_SIZE (TWIM136_EASYDMA_MAXCNT_SIZE_MAX + 1UL)
    #endif

    #if defined(TWIM137_EASYDMA_MAXCNT_SIZE_MAX) && !defined(TWIM137_EASYDMA_MAXCNT_SIZE)
        #define TWIM137_EASYDMA_MAXCNT_SIZE (TWIM137_EASYDMA_MAXCNT_SIZE_MAX + 1UL)
    #endif

    // TWIS EASYDMA_MAXCNT_SIZE
    #if defined(TWIS130_EASYDMA_MAXCNT_SIZE_MAX) && !defined(TWIS130_EASYDMA_MAXCNT_SIZE)
        #define TWIS130_EASYDMA_MAXCNT_SIZE (TWIS130_EASYDMA_MAXCNT_SIZE_MAX + 1UL)
    #endif

    #if defined(TWIS131_EASYDMA_MAXCNT_SIZE_MAX) && !defined(TWIS131_EASYDMA_MAXCNT_SIZE)
        #define TWIS131_EASYDMA_MAXCNT_SIZE (TWIS131_EASYDMA_MAXCNT_SIZE_MAX + 1UL)
    #endif

    #if defined(TWIS132_EASYDMA_MAXCNT_SIZE_MAX) && !defined(TWIS132_EASYDMA_MAXCNT_SIZE)
        #define TWIS132_EASYDMA_MAXCNT_SIZE (TWIS132_EASYDMA_MAXCNT_SIZE_MAX + 1UL)
    #endif

    #if defined(TWIS133_EASYDMA_MAXCNT_SIZE_MAX) && !defined(TWIS133_EASYDMA_MAXCNT_SIZE)
        #define TWIS133_EASYDMA_MAXCNT_SIZE (TWIS133_EASYDMA_MAXCNT_SIZE_MAX + 1UL)
    #endif

    #if defined(TWIS134_EASYDMA_MAXCNT_SIZE_MAX) && !defined(TWIS134_EASYDMA_MAXCNT_SIZE)
        #define TWIS134_EASYDMA_MAXCNT_SIZE (TWIS134_EASYDMA_MAXCNT_SIZE_MAX + 1UL)
    #endif

    #if defined(TWIS135_EASYDMA_MAXCNT_SIZE_MAX) && !defined(TWIS135_EASYDMA_MAXCNT_SIZE)
        #define TWIS135_EASYDMA_MAXCNT_SIZE (TWIS135_EASYDMA_MAXCNT_SIZE_MAX + 1UL)
    #endif

    #if defined(TWIS136_EASYDMA_MAXCNT_SIZE_MAX) && !defined(TWIS136_EASYDMA_MAXCNT_SIZE)
        #define TWIS136_EASYDMA_MAXCNT_SIZE (TWIS136_EASYDMA_MAXCNT_SIZE_MAX + 1UL)
    #endif

    #if defined(TWIS137_EASYDMA_MAXCNT_SIZE_MAX) && !defined(TWIS137_EASYDMA_MAXCNT_SIZE)
        #define TWIS137_EASYDMA_MAXCNT_SIZE (TWIS137_EASYDMA_MAXCNT_SIZE_MAX + 1UL)
    #endif

    // UARTE EASYDMA_MAXCNT_SIZE
    #if defined(UARTE120_EASYDMA_MAXCNT_SIZE_MAX) && !defined(UARTE120_EASYDMA_MAXCNT_SIZE)
        #define UARTE120_EASYDMA_MAXCNT_SIZE (UARTE120_EASYDMA_MAXCNT_SIZE_MAX + 1UL)
    #endif

    #if defined(UARTE130_EASYDMA_MAXCNT_SIZE_MAX) && !defined(UARTE130_EASYDMA_MAXCNT_SIZE)
        #define UARTE130_EASYDMA_MAXCNT_SIZE (UARTE130_EASYDMA_MAXCNT_SIZE_MAX + 1UL)
    #endif

    #if defined(UARTE131_EASYDMA_MAXCNT_SIZE_MAX) && !defined(UARTE131_EASYDMA_MAXCNT_SIZE)
        #define UARTE131_EASYDMA_MAXCNT_SIZE (UARTE131_EASYDMA_MAXCNT_SIZE_MAX + 1UL)
    #endif

    #if defined(UARTE132_EASYDMA_MAXCNT_SIZE_MAX) && !defined(UARTE132_EASYDMA_MAXCNT_SIZE)
        #define UARTE132_EASYDMA_MAXCNT_SIZE (UARTE132_EASYDMA_MAXCNT_SIZE_MAX + 1UL)
    #endif

    #if defined(UARTE133_EASYDMA_MAXCNT_SIZE_MAX) && !defined(UARTE133_EASYDMA_MAXCNT_SIZE)
        #define UARTE133_EASYDMA_MAXCNT_SIZE (UARTE133_EASYDMA_MAXCNT_SIZE_MAX + 1UL)
    #endif

    #if defined(UARTE134_EASYDMA_MAXCNT_SIZE_MAX) && !defined(UARTE134_EASYDMA_MAXCNT_SIZE)
        #define UARTE134_EASYDMA_MAXCNT_SIZE (UARTE134_EASYDMA_MAXCNT_SIZE_MAX + 1UL)
    #endif

    #if defined(UARTE135_EASYDMA_MAXCNT_SIZE_MAX) && !defined(UARTE135_EASYDMA_MAXCNT_SIZE)
        #define UARTE135_EASYDMA_MAXCNT_SIZE (UARTE135_EASYDMA_MAXCNT_SIZE_MAX + 1UL)
    #endif

    #if defined(UARTE136_EASYDMA_MAXCNT_SIZE_MAX) && !defined(UARTE136_EASYDMA_MAXCNT_SIZE)
        #define UARTE136_EASYDMA_MAXCNT_SIZE (UARTE136_EASYDMA_MAXCNT_SIZE_MAX + 1UL)
    #endif

    #if defined(UARTE137_EASYDMA_MAXCNT_SIZE_MAX) && !defined(UARTE137_EASYDMA_MAXCNT_SIZE)
        #define UARTE137_EASYDMA_MAXCNT_SIZE (UARTE137_EASYDMA_MAXCNT_SIZE_MAX + 1UL)
    #endif

    // EGU CH_NUM
    #if defined(EGU130_CH_NUM_MAX) && !defined(EGU130_CH_NUM)
        #define EGU130_CH_NUM (EGU130_CH_NUM_MAX + 1UL)
    #endif

    // EGU CH_NUM
    #if defined(EGU020_CH_NUM_MAX) && !defined(EGU020_CH_NUM)
        #define EGU020_CH_NUM (EGU020_CH_NUM_MAX + 1UL)
    #endif

    #if defined(P0_PIN_NUM_MAX) && !defined(P0_PIN_NUM)
        #define P0_PIN_NUM (P0_PIN_NUM_MAX + 1UL)
    #endif

    #if defined(P1_PIN_NUM_MAX) && !defined(P1_PIN_NUM)
        #define P1_PIN_NUM (P1_PIN_NUM_MAX + 1UL)
    #endif

    #if defined(P2_PIN_NUM_MAX) && !defined(P2_PIN_NUM)
        #define P2_PIN_NUM (P2_PIN_NUM_MAX + 1UL)
    #endif

    #if defined(P6_PIN_NUM_MAX) && !defined(P6_PIN_NUM)
        #define P6_PIN_NUM (P6_PIN_NUM_MAX + 1UL)
    #endif

    #if defined(P7_PIN_NUM_MAX) && !defined(P7_PIN_NUM)
        #define P7_PIN_NUM (P7_PIN_NUM_MAX + 1UL)
    #endif

    #if defined(P9_PIN_NUM_MAX) && !defined(P9_PIN_NUM)
        #define P9_PIN_NUM (P9_PIN_NUM_MAX + 1UL)
    #endif

    #define DPPI_CH_NUM 8

    /* <periph>_<feature>_MaxCount symbols meaning is inconsistent - sometimes they express
     * size of an array they describe, sometimes they express last applicable index. */

    #undef ETM_TRCRSCTLR_MaxCount
    #undef RADIO_PENALTYREG_PCP_MaxCount

    #define ETM_TRCRSCTLR_MaxCount (32UL)                          /*!< Max size of TRCRSCTLR[32] array.            */
    #define RADIO_PENALTYREG_PCP_MaxCount (5UL)                    /*!< Max size of PCP[5] array.                   */
#endif

/**************************************************************************************************/
/* End fixups section for NRF54H20_XXAA (LILIUMFP1)                                               */
/**************************************************************************************************/

/**************************************************************************************************/
/* Start fixups section for NRF54L15 (MOONLIGHT)                                                  */
/**************************************************************************************************/

#if defined(MOONLIGHT_XXAA)
    #define LUMOS_XXAA 1

    /* HM-21528 */
    #define TWIM_SHORTS_DMA_RX_MATCH2_DMA_RX_ENABLEMATCH3_Pos (23UL)
    #define TWIM_SHORTS_DMA_RX_MATCH2_DMA_RX_ENABLEMATCH3_Msk (0x1UL << TWIM_SHORTS_DMA_RX_MATCH2_DMA_RX_ENABLEMATCH3_Pos)
    #define TWIM_SHORTS_DMA_RX_MATCH2_DMA_RX_ENABLEMATCH3_Min (0x0UL)
    #define TWIM_SHORTS_DMA_RX_MATCH2_DMA_RX_ENABLEMATCH3_Max (0x1UL)
    #define TWIM_SHORTS_DMA_RX_MATCH2_DMA_RX_ENABLEMATCH3_Disabled (0x0UL)
    #define TWIM_SHORTS_DMA_RX_MATCH2_DMA_RX_ENABLEMATCH3_Enabled (0x1UL)
    #define TWIM_SHORTS_DMA_RX_MATCH3_DMA_RX_ENABLEMATCH0_Pos (24UL)
    #define TWIM_SHORTS_DMA_RX_MATCH3_DMA_RX_ENABLEMATCH0_Msk (0x1UL << TWIM_SHORTS_DMA_RX_MATCH3_DMA_RX_ENABLEMATCH0_Pos)
    #define TWIM_SHORTS_DMA_RX_MATCH3_DMA_RX_ENABLEMATCH0_Min (0x0UL)
    #define TWIM_SHORTS_DMA_RX_MATCH3_DMA_RX_ENABLEMATCH0_Max (0x1UL)
    #define TWIM_SHORTS_DMA_RX_MATCH3_DMA_RX_ENABLEMATCH0_Disabled (0x0UL)
    #define TWIM_SHORTS_DMA_RX_MATCH3_DMA_RX_ENABLEMATCH0_Enabled (0x1UL)

    /* HM-21528 */
    #define SPIM_SHORTS_DMA_RX_MATCH3_DMA_RX_ENABLEMATCH0_Pos (24UL)
    #define SPIM_SHORTS_DMA_RX_MATCH3_DMA_RX_ENABLEMATCH0_Msk (0x1UL << SPIM_SHORTS_DMA_RX_MATCH3_DMA_RX_ENABLEMATCH4_Pos)
    #define SPIM_SHORTS_DMA_RX_MATCH3_DMA_RX_ENABLEMATCH0_Min (0x0UL)
    #define SPIM_SHORTS_DMA_RX_MATCH3_DMA_RX_ENABLEMATCH0_Max (0x1UL)
    #define SPIM_SHORTS_DMA_RX_MATCH3_DMA_RX_ENABLEMATCH0_Disabled (0x0UL)
    #define SPIM_SHORTS_DMA_RX_MATCH3_DMA_RX_ENABLEMATCH0_Enabled (0x1UL)

    #define P0_FEATURE_PINS_PRESENT P0_PINS_PRESENT
    #define P1_FEATURE_PINS_PRESENT P1_PINS_PRESENT
    #define P2_FEATURE_PINS_PRESENT P2_PINS_PRESENT

    /* MLT-5776 */
    typedef enum {
        NRF_DOMAIN_APPLICATION = 1, /*!< Application core                   */
        NRF_DOMAIN_FLPR    = 2,     /*!< Flipper, Fast Peripheral Processor */
        NRF_DOMAIN_GLOBAL  = 3,     /*!< Global peripherals                 */
    } NRF_DOMAINS_t;

    typedef NRF_DOMAINS_t nrf_domain_t;
    #define ADDRESS_BUS_Pos (18UL)
    #define ADDRESS_BUS_Msk (0x3FUL << ADDRESS_BUS_Pos)

    /* TODO: MDK-2221 */
    #define NRF_DOMAIN_COUNT NRF_DOMAIN_GLOBAL + 1

    /* TODO: HM-20336 */
    #define SAADC_CH_NUM 8

    typedef enum {
        NRF_OWNER_NONE            = 0,
        NRF_OWNER_APPLICATION     = 1,
        NRF_OWNER_KMU             = 2,
    } NRF_OWNERID_Type;

    #define GRTC_INTEN_Msk NRFX_BIT_MASK(GRTC_CC_MaxCount)

    #define GPIOTE_CH_NUM   8
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
        #define CTRLAP_IRQn      (IRQn_Type)82
        #define CM33SS_IRQn      (IRQn_Type)84
        #define TIMER00_IRQn     (IRQn_Type)85
        #define GPIOTE20_0_IRQn  (IRQn_Type)218
        #define GPIOTE20_1_IRQn  (IRQn_Type)219
        #define TAMPC_IRQn       (IRQn_Type)220
        #define I2S20_IRQn       (IRQn_Type)221
        #define GRTC_3_IRQn      (IRQn_Type)229
        #define GPIOTE30_0_IRQn  (IRQn_Type)268
        #define GPIOTE30_1_IRQn  (IRQn_Type)269
        #define CLOCK_POWER_IRQn (IRQn_Type)270

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

    #define GPIOTE_CH_NUM   8
    #define GPIOTE_FEATURE_SET_PRESENT
    #define GPIOTE_FEATURE_CLR_PRESENT
    #define GPIOTE_PORT_NUM GPIOTE_EVENTS_PORT_MaxCount

    #define SPIS20_EASYDMA_MAXCNT_SIZE (SPIS20_EASYDMA_MAXCNT_SIZE_MAX + 1UL)
    #define SPIS21_EASYDMA_MAXCNT_SIZE (SPIS21_EASYDMA_MAXCNT_SIZE_MAX + 1UL)
    #define SPIS22_EASYDMA_MAXCNT_SIZE (SPIS22_EASYDMA_MAXCNT_SIZE_MAX + 1UL)
    #define SPIS30_EASYDMA_MAXCNT_SIZE (SPIS30_EASYDMA_MAXCNT_SIZE_MAX + 1UL)
    #define SPIS00_EASYDMA_MAXCNT_SIZE (SPIS00_EASYDMA_MAXCNT_SIZE_MAX + 1UL)

    #define SPIM20_EASYDMA_MAXCNT_SIZE (SPIM20_EASYDMA_MAXCNT_SIZE_MAX + 1UL)
    #define SPIM21_EASYDMA_MAXCNT_SIZE (SPIM21_EASYDMA_MAXCNT_SIZE_MAX + 1UL)
    #define SPIM22_EASYDMA_MAXCNT_SIZE (SPIM22_EASYDMA_MAXCNT_SIZE_MAX + 1UL)
    #define SPIM30_EASYDMA_MAXCNT_SIZE (SPIM30_EASYDMA_MAXCNT_SIZE_MAX + 1UL)
    #define SPIM00_EASYDMA_MAXCNT_SIZE (SPIM00_EASYDMA_MAXCNT_SIZE_MAX + 1UL)

    #define TIMER00_CC_NUM (TIMER00_CC_NUM_MAX + 1UL)
    #define TIMER10_CC_NUM (TIMER10_CC_NUM_MAX + 1UL)
    #define TIMER20_CC_NUM (TIMER20_CC_NUM_MAX + 1UL)
    #define TIMER21_CC_NUM (TIMER21_CC_NUM_MAX + 1UL)
    #define TIMER22_CC_NUM (TIMER22_CC_NUM_MAX + 1UL)
    #define TIMER23_CC_NUM (TIMER23_CC_NUM_MAX + 1UL)
    #define TIMER24_CC_NUM (TIMER24_CC_NUM_MAX + 1UL)

    #define UARTE00_EASYDMA_MAXCNT_SIZE (UARTE00_EASYDMA_MAXCNT_SIZE_MAX + 1UL)
    #define UARTE10_EASYDMA_MAXCNT_SIZE (UARTE10_EASYDMA_MAXCNT_SIZE_MAX + 1UL)
    #define UARTE20_EASYDMA_MAXCNT_SIZE (UARTE20_EASYDMA_MAXCNT_SIZE_MAX + 1UL)
    #define UARTE21_EASYDMA_MAXCNT_SIZE (UARTE21_EASYDMA_MAXCNT_SIZE_MAX + 1UL)
    #define UARTE22_EASYDMA_MAXCNT_SIZE (UARTE22_EASYDMA_MAXCNT_SIZE_MAX + 1UL)
    #define UARTE30_EASYDMA_MAXCNT_SIZE (UARTE30_EASYDMA_MAXCNT_SIZE_MAX + 1UL)

    #define TIMER00_MAX_SIZE (TIMER00_MAX_SIZE_MAX + 1UL)
    #define TIMER10_MAX_SIZE (TIMER10_MAX_SIZE_MAX + 1UL)
    #define TIMER20_MAX_SIZE (TIMER20_MAX_SIZE_MAX + 1UL)
    #define TIMER21_MAX_SIZE (TIMER21_MAX_SIZE_MAX + 1UL)
    #define TIMER22_MAX_SIZE (TIMER22_MAX_SIZE_MAX + 1UL)
    #define TIMER23_MAX_SIZE (TIMER23_MAX_SIZE_MAX + 1UL)
    #define TIMER24_MAX_SIZE (TIMER24_MAX_SIZE_MAX + 1UL)

    #define EGU10_CH_NUM (EGU10_CH_NUM_MAX + 1UL)
    #define EGU20_CH_NUM (EGU20_CH_NUM_MAX + 1UL)

    #define RTC10_CC_NUM (RTC10_CC_NUM_MAX + 1UL)
    #define RTC30_CC_NUM (RTC30_CC_NUM_MAX + 1UL)

    #define P0_PIN_NUM (P0_PIN_NUM_MAX + 1UL)
    #define P1_PIN_NUM (P1_PIN_NUM_MAX + 1UL)
    #define P2_PIN_NUM (P2_PIN_NUM_MAX + 1UL)

    #define GPIOTE20_GPIOTE_NCHANNELS (GPIOTE20_GPIOTE_NCHANNELS_MAX + 1UL)
    #define GPIOTE30_GPIOTE_NCHANNELS (GPIOTE30_GPIOTE_NCHANNELS_MAX + 1UL)

    #define DPPIC00_CH_NUM (DPPIC00_CH_NUM_MAX + 1UL)
    #define DPPIC10_CH_NUM (DPPIC10_CH_NUM_MAX + 1UL)
    #define DPPIC20_CH_NUM (DPPIC20_CH_NUM_MAX + 1UL)
    #define DPPIC30_CH_NUM (DPPIC30_CH_NUM_MAX + 1UL)

    #define DPPIC00_GROUP_NUM (DPPIC00_GROUP_NUM_MAX + 1UL)
    #define DPPIC10_GROUP_NUM (DPPIC10_GROUP_NUM_MAX + 1UL)
    #define DPPIC20_GROUP_NUM (DPPIC20_GROUP_NUM_MAX + 1UL)
    #define DPPIC30_GROUP_NUM (DPPIC30_GROUP_NUM_MAX + 1UL)

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

    #define SAADC_CH_CONFIG_RESP_Bypass (0x0UL)        /*!< Bypass resistor ladder                                               */
    #define SAADC_CH_CONFIG_RESP_Pulldown (0x1UL)      /*!< Pull-down to GND                                                     */
    #define SAADC_CH_CONFIG_RESP_Pullup (0x2UL)        /*!< Pull-up to VDD_AO_1V8                                                */

    //  #define SAADC_CH_CONFIG_GAIN_Gain2_3 (0x0UL)       /*!< 2/3                                                                  */
    #define SAADC_CH_CONFIG_GAIN_Gain1 (0x1UL)         /*!< 1                                                                    */
    #define SAADC_CH_CONFIG_GAIN_Gain2 (0x2UL)         /*!< 2                                                                    */
    #define SAADC_CH_CONFIG_GAIN_Gain4 (0x3UL)         /*!< 4                                                                    */
    #define SAADC_CH_CONFIG_RESP_Pos (0UL) /*!< Position of RESP field. */
    #define SAADC_CH_CONFIG_RESP_Msk (0x3UL << SAADC_CH_CONFIG_RESP_Pos) /*!< Bit mask of RESP field.                            */
    #define SAADC_CH_CONFIG_RESN_Pos (4UL)             /*!< Position of RESN field.                                              */
    #define SAADC_CH_CONFIG_RESN_Msk (0x3UL << SAADC_CH_CONFIG_RESN_Pos) /*!< Bit mask of RESN field.                            */

    /* RRAMC_WAITSTATES: Waitstates for RRAM read access */
    #define RRAMC_WAITSTATES_VALUE_MaxCount 3 /*!< Max size of the index array related to the AXI clock frequencies. */

    #define RADIO_TIMING_RU_Default 0
    #define RADIO_TIMING_RU_Fast    1

    /* ==================================================== Struct MPC_REGION ==================================================== */
    #define MPC_MASTER_PORTS_MaxCount (15UL) /*!< Max number of master ports. */


/* ================================================= Struct RRAMC_BUFSTATUS ================================================== */
/**
  * @brief BUFSTATUS [RRAMC_BUFSTATUS] (unspecified)
  */
typedef struct {
  __IM  uint32_t  LOADBUF;                           /*!< (@ 0x00000000) Load-buffer status                                    */
  __IM  uint32_t  WRITEBUF;                          /*!< (@ 0x00000004) Write-buffer status                                   */
  __IM  uint32_t  BUF_EMPTY;                         /*TODO This name was changed due to a conflict with zephyr EMPTY macro. If in MDK name EMPTY will still exist
                                                      * mdk_fixups should take care of it and redefine EMPTY to BUF_EMPTY or any other name that do not
                                                      * cause conflicts.
                                                      * < (@ 0x00000008) Internal write-buffer is empty
                                                      */
} NRF_RRAMC_BUFSTATUS_Type_fixed;                    /*!< Size = 12 (0x00C)                                                    */

/* ====================================================== Struct RRAMC ======================================================= */
/**
  * @brief RRAM controller
  */
  typedef struct {                                   /*!< RRAMC Structure                                                      */
    __OM uint32_t TASKS_WAKEUP;                      /*!< (@ 0x00000000) Wakeup the RRAM from low power mode                   */
    __OM uint32_t TASKS_CLRWRITEBUF;                 /*!< (@ 0x00000004) Clear internal write-buffer                           */
    __OM uint32_t TASKS_COMMITWRITEBUF;              /*!< (@ 0x00000008) Commits the data stored in internal write-buffer to
                                                                         RRAM*/
    __IM uint32_t RESERVED[29];
    __IOM uint32_t SUBSCRIBE_WAKEUP;                 /*!< (@ 0x00000080) Subscribe configuration for task WAKEUP               */
    __IOM uint32_t SUBSCRIBE_CLRWRITEBUF;            /*!< (@ 0x00000084) Subscribe configuration for task CLRWRITEBUF          */
    __IOM uint32_t SUBSCRIBE_COMMITWRITEBUF;         /*!< (@ 0x00000088) Subscribe configuration for task COMMITWRITEBUF       */
    __IM uint32_t RESERVED1[29];
    __IOM uint32_t EVENTS_WOKENUP;                   /*!< (@ 0x00000100) RRAMC is woken up from low power mode                 */
    __IOM uint32_t EVENTS_READY;                     /*!< (@ 0x00000104) RRAMC is ready                                        */
    __IOM uint32_t EVENTS_READYNEXT;                 /*!< (@ 0x00000108) Ready to accept a new write operation                 */
    __IOM uint32_t EVENTS_ACCESSERROR;               /*!< (@ 0x0000010C) RRAM access error                                     */
    __IM uint32_t RESERVED2[28];
    __IOM uint32_t PUBLISH_WOKENUP;                  /*!< (@ 0x00000180) Publish configuration for event WOKENUP               */
    __IM uint32_t RESERVED3[95];
    __IOM uint32_t INTEN;                            /*!< (@ 0x00000300) Enable or disable interrupt                           */
    __IOM uint32_t INTENSET;                         /*!< (@ 0x00000304) Enable interrupt                                      */
    __IOM uint32_t INTENCLR;                         /*!< (@ 0x00000308) Disable interrupt                                     */
    __IM uint32_t INTPEND;                           /*!< (@ 0x0000030C) Pending interrupts                                    */
    __IM uint32_t RESERVED4[60];
    __IM uint32_t READY;                             /*!< (@ 0x00000400) RRAMC ready status                                    */
    __IM uint32_t READYNEXT;                         /*!< (@ 0x00000404) Ready next flag                                       */
    __IM uint32_t ACCESSERRORADDR;                   /*!< (@ 0x00000408) Address of the first access error                     */
    __IM uint32_t TRCSTATUS;                         /*!< (@ 0x0000040C) TRC status                                            */
    __IOM NRF_RRAMC_BUFSTATUS_Type_fixed BUFSTATUS;  /*!< (@ 0x00000410) (unspecified)                                         */
    __IM uint32_t RESERVED5[57];
    __IOM uint32_t CONFIG;                           /*!< (@ 0x00000500) Configuration register                                */
    __IOM uint32_t READCONFIG;                       /*!< (@ 0x00000504) Read configuration register                           */
    __IOM uint32_t WAITSTATES;                       /*!< (@ 0x00000508) Waitstates for RRAM read access                       */
    __IOM uint32_t READYNEXTTIMEOUT;                 /*!< (@ 0x0000050C) Configuration for ready next timeout counter, in units
                                                                         of AXI clock frequency*/
    __IOM NRF_RRAMC_POWER_Type POWER;                /*!< (@ 0x00000510) (unspecified)                                         */
    __IM uint32_t RESERVED6[3];
    __IOM NRF_RRAMC_ERASE_Type ERASE;                /*!< (@ 0x00000540) (unspecified)                                         */
    __IM uint32_t RESERVED7[2];
    __IOM NRF_RRAMC_REGION_Type REGION[5];           /*!< (@ 0x00000550) (unspecified)                                         */
    __IM uint32_t RESERVED8[10];
    __IOM NRF_RRAMC_GLITCHDETECTOR_Type GLITCHDETECTOR; /*!< (@ 0x000005A0) (unspecified)                                      */
    __IM uint32_t RESERVED9[5];
    __IOM NRF_RRAMC_INTERNAL_Type INTERNAL;          /*!< (@ 0x000005D0) (unspecified)                                         */
    __IM uint32_t RESERVED10[4];
    __IOM NRF_RRAMC_TEST_Type TEST;                  /*!< (@ 0x00000600) (unspecified)                                         */
    __IM uint32_t RESERVED11[383];
    __IOM NRF_RRAMC_PCGCSLAVE_Type PCGCSLAVE;        /*!< (@ 0x00000C00) (unspecified)                                         */
  } NRF_RRAMC_Type_fixed; 

    #if defined(NRF_RRAMC_S)
        #undef NRF_RRAMC_S
        #define NRF_RRAMC_S ((NRF_RRAMC_Type_fixed*) NRF_RRAMC_S_BASE)
    #endif

    #if defined(NRF_RRAMC_NS)
        #undef NRF_RRAMC_NS
        #define NRF_RRAMC_NS ((NRF_RRAMC_Type_fixed*) NRF_RRAMC_NS_BASE)
    #endif

    #define NRF_RRAMC_Type NRF_RRAMC_Type_fixed

    /* Mask for GPREGRET in Moonlight's MDK is 32-bit instead of 8-bit. */
    #undef POWER_GPREGRET_GPREGRET_Msk
    #define POWER_GPREGRET_GPREGRET_Msk (0xFFUL << POWER_GPREGRET_GPREGRET_Pos) /*!< Bit mask of GPREGRET field.           */

    /* TODO: Remove while integrating MDK 8.55.0 */
    /* LPCOMP @Bit 9 : Reset due to wakeup from System OFF mode when wakeup is triggered by ANADETECT signal from LPCOMP */
    #define RESET_RESETREAS_LPCOMP_Pos (9UL)           /*!< Position of LPCOMP field.                                            */
    #define RESET_RESETREAS_LPCOMP_Msk (0x1UL << RESET_RESETREAS_LPCOMP_Pos) /*!< Bit mask of LPCOMP field.                      */
    #define RESET_RESETREAS_LPCOMP_Min (0x0UL)         /*!< Min enumerator value of LPCOMP field.                                */
    #define RESET_RESETREAS_LPCOMP_Max (0x1UL)         /*!< Max enumerator value of LPCOMP field.                                */
    #define RESET_RESETREAS_LPCOMP_NotDetected (0x0UL) /*!< Not detected                                                         */
    #define RESET_RESETREAS_LPCOMP_Detected (0x1UL)    /*!< Detected                                                             */
#endif

/**************************************************************************************************/
/* End fixups section for NRF54L15 (MOONLIGHT)                                                    */
/**************************************************************************************************/

/**************************************************************************************************/
/* Start fixups section for NRF7140_XXAA                                                          */
/**************************************************************************************************/

#if defined(NRF7140_XXAA)

    /* TODO: MDK-2233 and MDK-2234 - wait for MDK team response. */
    #if defined(NRF_TRUSTZONE_NONSECURE) || defined(__NRFX_DOXYGEN__)
        #if defined(NRF_SECURE) || defined(__NRFX_DOXYGEN__)
            #define NRF_GRTC_IRQ_GROUP 0
        #elif defined(NRF_APPLICATION)
            #define NRF_GRTC_IRQ_GROUP 2
        #elif defined(NRF_RADIOCORE)
            #define NRF_GRTC_IRQ_GROUP 4
        #else
            #error Unknown core.
        #endif
    #elif defined(NRF_SYSCTRL)
        #define NRF_GRTC_IRQ_GROUP 7
    #elif defined(NRF_PPR)
        #define NRF_GRTC_IRQ_GROUP 10
    #elif defined(NRF_FLPR)
        #define NRF_GRTC_IRQ_GROUP 11
    #elif defined(NRF_BBPR)
        #define NRF_GRTC_IRQ_GROUP 12
    #elif defined(NRF_LMAC)
        /* TODO: Investigate how to handle group 9 for this core. */
        #define NRF_GRTC_IRQ_GROUP 8
    #elif defined(NRF_UMAC)
        #define NRF_GRTC_IRQ_GROUP 13
    #else
        #if defined(NRF_SECURE)
            #define NRF_GRTC_IRQ_GROUP 1
        #elif defined(NRF_APPLICATION)
            #define NRF_GRTC_IRQ_GROUP 3
        #elif defined(NRF_RADIOCORE)
            #define NRF_GRTC_IRQ_GROUP 5
        #else
            #error Unknown core.
        #endif
    #endif

    #if defined(NRF_TRUSTZONE_NONSECURE) || defined(NRF_SYSCTRL) || defined(NRF_PPR) || \
            defined(NRF_FLPR) || defined(NRF_BBPR) || defined(NRF_LMAC) || defined(NRF_UMAC) || \
            defined(__NRFX_DOXYGEN__)
        #define GRTC_IRQn       GRTC_0_IRQn
        #define GRTC_IRQHandler GRTC_0_IRQHandler
    #else
        #define GRTC_IRQn       GRTC_1_IRQn
        #define GRTC_IRQHandler GRTC_1_IRQHandler
    /* TODO: NRFX-3940 - Add GRTC_2_IRQn and GRTC_2_IRQHandler for RadioCore. */
    #endif

    /* HM-21528 */
    #define TWIM_SHORTS_DMA_RX_MATCH2_DMA_RX_ENABLEMATCH3_Pos (23UL)
    #define TWIM_SHORTS_DMA_RX_MATCH2_DMA_RX_ENABLEMATCH3_Msk (0x1UL << TWIM_SHORTS_DMA_RX_MATCH2_DMA_RX_ENABLEMATCH3_Pos)
    #define TWIM_SHORTS_DMA_RX_MATCH2_DMA_RX_ENABLEMATCH3_Min (0x0UL)
    #define TWIM_SHORTS_DMA_RX_MATCH2_DMA_RX_ENABLEMATCH3_Max (0x1UL)
    #define TWIM_SHORTS_DMA_RX_MATCH2_DMA_RX_ENABLEMATCH3_Disabled (0x0UL)
    #define TWIM_SHORTS_DMA_RX_MATCH2_DMA_RX_ENABLEMATCH3_Enabled (0x1UL)
    #define TWIM_SHORTS_DMA_RX_MATCH3_DMA_RX_ENABLEMATCH0_Pos (24UL)
    #define TWIM_SHORTS_DMA_RX_MATCH3_DMA_RX_ENABLEMATCH0_Msk (0x1UL << TWIM_SHORTS_DMA_RX_MATCH3_DMA_RX_ENABLEMATCH0_Pos)
    #define TWIM_SHORTS_DMA_RX_MATCH3_DMA_RX_ENABLEMATCH0_Min (0x0UL)
    #define TWIM_SHORTS_DMA_RX_MATCH3_DMA_RX_ENABLEMATCH0_Max (0x1UL)
    #define TWIM_SHORTS_DMA_RX_MATCH3_DMA_RX_ENABLEMATCH0_Disabled (0x0UL)
    #define TWIM_SHORTS_DMA_RX_MATCH3_DMA_RX_ENABLEMATCH0_Enabled (0x1UL)

    /* HM-21528 */
    #define SPIM_SHORTS_DMA_RX_MATCH3_DMA_RX_ENABLEMATCH0_Pos (24UL)
    #define SPIM_SHORTS_DMA_RX_MATCH3_DMA_RX_ENABLEMATCH0_Msk (0x1UL << SPIM_SHORTS_DMA_RX_MATCH3_DMA_RX_ENABLEMATCH4_Pos)
    #define SPIM_SHORTS_DMA_RX_MATCH3_DMA_RX_ENABLEMATCH0_Min (0x0UL)
    #define SPIM_SHORTS_DMA_RX_MATCH3_DMA_RX_ENABLEMATCH0_Max (0x1UL)
    #define SPIM_SHORTS_DMA_RX_MATCH3_DMA_RX_ENABLEMATCH0_Disabled (0x0UL)
    #define SPIM_SHORTS_DMA_RX_MATCH3_DMA_RX_ENABLEMATCH0_Enabled (0x1UL)

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

    #define P0_PIN_NUM 12
    #define P1_PIN_NUM 12
    #define P2_PIN_NUM 18
    #define P3_PIN_NUM 18
    #define P5_PIN_NUM 14
    #define P6_PIN_NUM 14
    #define P8_PIN_NUM 5
    #define P9_PIN_NUM 6

    #define P0_FEATURE_PINS_PRESENT P0_PINS_PRESENT
    #define P1_FEATURE_PINS_PRESENT P1_PINS_PRESENT
    #define P2_FEATURE_PINS_PRESENT P2_PINS_PRESENT
    #define P3_FEATURE_PINS_PRESENT P3_PINS_PRESENT
    #define P5_FEATURE_PINS_PRESENT P5_PINS_PRESENT
    #define P6_FEATURE_PINS_PRESENT P6_PINS_PRESENT
    #define P8_FEATURE_PINS_PRESENT P8_PINS_PRESENT
    #define P9_FEATURE_PINS_PRESENT P9_PINS_PRESENT

    #define EGU130_CH_NUM 8
    #define EGU020_CH_NUM 16
    #define RTC130_CC_NUM 4
    #define RTC131_CC_NUM 4

    #define UARTE120_EASYDMA_MAXCNT_SIZE 16
    #define UARTE130_EASYDMA_MAXCNT_SIZE 16
    #define UARTE131_EASYDMA_MAXCNT_SIZE 16
    #define UARTE132_EASYDMA_MAXCNT_SIZE 16
    #define UARTE133_EASYDMA_MAXCNT_SIZE 16
    #define UARTE134_EASYDMA_MAXCNT_SIZE 16
    #define UARTE135_EASYDMA_MAXCNT_SIZE 16
    #define UARTE136_EASYDMA_MAXCNT_SIZE 16
    #define UARTE137_EASYDMA_MAXCNT_SIZE 16

    #define SPIM120_EASYDMA_MAXCNT_SIZE 16
    #define SPIM121_EASYDMA_MAXCNT_SIZE 16
    #define SPIM122_EASYDMA_MAXCNT_SIZE 16
    #define SPIM123_EASYDMA_MAXCNT_SIZE 16
    #define SPIM130_EASYDMA_MAXCNT_SIZE 16
    #define SPIM131_EASYDMA_MAXCNT_SIZE 16
    #define SPIM132_EASYDMA_MAXCNT_SIZE 16
    #define SPIM133_EASYDMA_MAXCNT_SIZE 16
    #define SPIM134_EASYDMA_MAXCNT_SIZE 16
    #define SPIM135_EASYDMA_MAXCNT_SIZE 16
    #define SPIM136_EASYDMA_MAXCNT_SIZE 16
    #define SPIM137_EASYDMA_MAXCNT_SIZE 16

    #define SPIS120_EASYDMA_MAXCNT_SIZE 16
    #define SPIS130_EASYDMA_MAXCNT_SIZE 16
    #define SPIS131_EASYDMA_MAXCNT_SIZE 16
    #define SPIS132_EASYDMA_MAXCNT_SIZE 16
    #define SPIS133_EASYDMA_MAXCNT_SIZE 16
    #define SPIS134_EASYDMA_MAXCNT_SIZE 16
    #define SPIS135_EASYDMA_MAXCNT_SIZE 16
    #define SPIS136_EASYDMA_MAXCNT_SIZE 16
    #define SPIS137_EASYDMA_MAXCNT_SIZE 16

    #define TIMER020_CC_NUM 8
    #define TIMER021_CC_NUM 8
    #define TIMER022_CC_NUM 8
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

    #define DPPIC020_CH_NUM 24
    #define DPPIC030_CH_NUM 16
    #define DPPIC120_CH_NUM 8
    #define DPPIC130_CH_NUM 8
    #define DPPIC131_CH_NUM 8
    #define DPPIC132_CH_NUM 8
    #define DPPIC133_CH_NUM 8
    #define DPPIC134_CH_NUM 8
    #define DPPIC135_CH_NUM 8
    #define DPPIC136_CH_NUM 8

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

#endif

/**************************************************************************************************/
/* End fixups section for NRF7140_XXAA                                                            */
/**************************************************************************************************/

/**************************************************************************************************/
/* Start fixups section for NRF9230_XXAA                                                          */
/**************************************************************************************************/

#if defined(NRF9230_XXAA)

    /* TODO: MDK-2233 and MDK-2234 - wait for MDK team response. */
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
        #define NRF_GRTC_IRQ_GROUP 7
    #elif defined(NRF_PPR)
        #define NRF_GRTC_IRQ_GROUP 10
    #elif defined(NRF_FLPR)
        #define NRF_GRTC_IRQ_GROUP 11
    #elif defined(NRF_BBPR)
        #define NRF_GRTC_IRQ_GROUP 12
    #else
        #if defined(NRF_SECURE)
            #define NRF_GRTC_IRQ_GROUP 1
        #elif defined(NRF_APPLICATION)
            #define NRF_GRTC_IRQ_GROUP 3
        #elif defined(NRF_RADIOCORE)
            #define NRF_GRTC_IRQ_GROUP 5
        #elif defined(NRF_CELLCORE)
            #define NRF_GRTC_IRQ_GROUP 9
        #else
            #error Unknown core.
        #endif
    #endif

    #if defined(NRF_TRUSTZONE_NONSECURE) || defined(NRF_SYSCTRL) || defined(NRF_PPR) || \
            defined(NRF_FLPR) || defined(NRF_BBPR) || defined(__NRFX_DOXYGEN__)
        #define GRTC_IRQn       GRTC_0_IRQn
        #define GRTC_IRQHandler GRTC_0_IRQHandler
    #else
        #define GRTC_IRQn       GRTC_1_IRQn
        #define GRTC_IRQHandler GRTC_1_IRQHandler
    /* TODO: NRFX-3940 - Add GRTC_2_IRQn and GRTC_2_IRQHandler for RadioCore. */
    #endif

    #if defined(NRF_CELLCORE)
        #if defined(NRF_TRUSTZONE_NONSECURE)
            #define NRF_GPIOTE131_IRQn      GPIOTE131_0_IRQn
            #define nrfx_gpiote_irq_handler GPIOTE131_0_IRQHandler
        #else
            #define NRF_GPIOTE131_IRQn      GPIOTE131_1_IRQn
            #define nrfx_gpiote_irq_handler GPIOTE131_1_IRQHandler
        #endif // defined(NRF_TRUSTZONE_NONSECURE)
    #endif //defined(NRF_CELLCORE)

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

    /* HM-21366 Peripheral capabilities described as _MIN and _MAX instead of single symbol */
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

    #define P0_FEATURE_PINS_PRESENT P0_PINS_PRESENT
    #define P1_FEATURE_PINS_PRESENT P1_PINS_PRESENT
    #define P2_FEATURE_PINS_PRESENT P2_PINS_PRESENT
    #define P6_FEATURE_PINS_PRESENT P6_PINS_PRESENT
    #define P8_FEATURE_PINS_PRESENT P8_PINS_PRESENT
    #define P9_FEATURE_PINS_PRESENT P9_PINS_PRESENT
    #define P10_FEATURE_PINS_PRESENT P10_PINS_PRESENT
    #define P11_FEATURE_PINS_PRESENT P11_PINS_PRESENT
    #define P12_FEATURE_PINS_PRESENT P12_PINS_PRESENT
    #define P13_FEATURE_PINS_PRESENT P13_PINS_PRESENT

    #define P0_PIN_NUM P0_PIN_NUM_MAX
    #define P1_PIN_NUM P1_PIN_NUM_MAX
    #define P2_PIN_NUM P2_PIN_NUM_MAX
    #define P6_PIN_NUM P6_PIN_NUM_MAX
    #define P8_PIN_NUM P8_PIN_NUM_MAX
    #define P9_PIN_NUM P9_PIN_NUM_MAX
    #define P10_PIN_NUM P10_PIN_NUM_MAX
    #define P11_PIN_NUM P11_PIN_NUM_MAX
    #define P12_PIN_NUM P12_PIN_NUM_MAX
    #define P13_PIN_NUM P13_PIN_NUM_MAX

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

    #define EGU130_CH_NUM 8
    #define EGU020_CH_NUM 16

    #if defined(DPPIC0_CH_NUM_MAX) && !defined(DPPIC0_CH_NUM)
        #define DPPIC0_CH_NUM (DPPIC0_CH_NUM_MAX + 1UL)
    #endif

    #if defined(DPPIC1_CH_NUM_MAX) && !defined(DPPIC1_CH_NUM)
        #define DPPIC1_CH_NUM (DPPIC1_CH_NUM_MAX + 1UL)
    #endif

    #if defined(DPPIC020_CH_NUM_MAX) && !defined(DPPIC020_CH_NUM)
        #define DPPIC020_CH_NUM (DPPIC020_CH_NUM_MAX + 1UL)
    #endif

    #if defined(DPPIC030_CH_NUM_MAX) && !defined(DPPIC030_CH_NUM)
        #define DPPIC030_CH_NUM (DPPIC030_CH_NUM_MAX + 1UL)
    #endif

    #if defined(DPPIC120_CH_NUM_MAX) && !defined(DPPIC120_CH_NUM)
        #define DPPIC120_CH_NUM (DPPIC120_CH_NUM_MAX + 1UL)
    #endif

    #if defined(DPPIC130_CH_NUM_MAX) && !defined(DPPIC130_CH_NUM)
        #define DPPIC130_CH_NUM (DPPIC130_CH_NUM_MAX + 1UL)
    #endif

    #if defined(DPPIC131_CH_NUM_MAX) && !defined(DPPIC131_CH_NUM)
        #define DPPIC131_CH_NUM (DPPIC131_CH_NUM_MAX + 1UL)
    #endif

    #if defined(DPPIC132_CH_NUM_MAX) && !defined(DPPIC132_CH_NUM)
        #define DPPIC132_CH_NUM (DPPIC132_CH_NUM_MAX + 1UL)
    #endif

    #if defined(DPPIC133_CH_NUM_MAX) && !defined(DPPIC133_CH_NUM)
        #define DPPIC133_CH_NUM (DPPIC133_CH_NUM_MAX + 1UL)
    #endif

    #if defined(DPPIC134_CH_NUM_MAX) && !defined(DPPIC134_CH_NUM)
        #define DPPIC134_CH_NUM (DPPIC134_CH_NUM_MAX + 1UL)
    #endif

    #if defined(DPPIC135_CH_NUM_MAX) && !defined(DPPIC135_CH_NUM)
        #define DPPIC135_CH_NUM (DPPIC135_CH_NUM_MAX + 1UL)
    #endif

    #if defined(DPPIC136_CH_NUM_MAX) && !defined(DPPIC136_CH_NUM)
        #define DPPIC136_CH_NUM (DPPIC136_CH_NUM_MAX + 1UL)
    #endif

#endif

/**************************************************************************************************/
/* End fixups section for NRF9230_XXAA                                                            */
/**************************************************************************************************/

#endif // MDK_FIXUPS_H__
