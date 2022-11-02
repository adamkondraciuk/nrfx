#ifndef MDK_FIXUPS_H__
#define MDK_FIXUPS_H__

#if defined(LILIUMFP1_XXAA) || defined(LILIUMSOC1_XXAA) || defined(NRF9230_XXAA) \
    || defined(NRF7140_XXAA)
#define HALTIUM_XXAA 1
#endif

#if defined(MOONLIGHT_XXAA)
    #if defined(NRF_TRUSTZONE_NONSECURE)
        /** @brief Fixup for the GRTC IRQn lines. */
        #define GRTC_IRQn       GRTC_0_IRQn
        #define nrfx_grtc_irq_handler     GRTC_0_IRQHandler
        #define nrfx_gpiote20_irq_handler GPIOTE20_0_IRQHandler
        #define nrfx_gpiote30_irq_handler GPIOTE30_0_IRQHandler
    #else
        #if defined(NRF_APPLICATION) || defined(__NRFX_DOXYGEN__)
            #define NRF_GRTC_IRQ_GROUP 2
        #else
            #error Unknown core.
        #endif

        #define GRTC_IRQn       GRTC_1_IRQn
        #define nrfx_grtc_irq_handler     GRTC_1_IRQHandler
        #define nrfx_gpiote20_irq_handler GPIOTE20_1_IRQHandler
        #define nrfx_gpiote30_irq_handler GPIOTE30_1_IRQHandler
    #endif // defined(NRF_TRUSTZONE_NONSECURE)

    #if defined(DPPIC_PRESENT)
        #define DPPI_PRESENT
        // TODO: Establish numbers of DPPI_GROUP_NUM and DPPI_CH_NUM
        #define DPPI_CH_NUM 8
        #define DPPI_GROUP_NUM 1
        #ifndef NRF_DPPIC
        // TODO: Add support for NRF_DPPIC00, NRF_DPPIC10, NRF_DPPIC20, NRF_DPPIC30
            #define NRF_DPPIC NRF_DPPIC00
        #endif
    #endif
#endif

#if defined(HALTIUM_XXAA) || defined(MOONLIGHT_XXAA)

typedef NRF_DOMAINS_t nrf_domain_t;

#define NRF_DOMAIN_COUNT NRF_DOMAIN_GLOBAL + 1

#endif /* defined(HALTIUM_XXAA) || defined(MOONLIGHT_XXAA) */

#if defined(HALTIUM_XXAA)

/* MDK-2070 */
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
#endif

/* TODO: Create tag for internal cores and remove them from public release. */
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

#define NRF_PROCESSOR_ID_COUNT NRF_PROCESSOR_ID_FLPR + 1

/* MDK-2059 */
#define ADDRESS_REGION_Pos       (29UL)
#define ADDRESS_REGION_Msk       (0xE0000000UL)
#define ADDRESS_SECURITY_Pos     (28UL)
#define ADDRESS_SECURITY_Msk     (0x10000000UL)
#define ADDRESS_DOMAIN_Pos       (24UL)
#define ADDRESS_DOMAIN_Msk       (0x0F000000UL)
#define ADDRESS_BUS_Pos          (16UL)
#define ADDRESS_BUS_Msk          (0x00FF0000UL)
#define ADDRESS_BRIDGE_GROUP_Pos (20UL)
#define ADDRESS_BRIDGE_GROUP_Msk (0x00F00000UL)
#define ADDRESS_SLAVE_Pos        (12UL)
#define ADDRESS_SLAVE_Msk        (0x0000F000UL)
#define ADDRESS_PERIPHID_Pos     (12UL)
#define ADDRESS_PERIPHID_Msk     (0x007FF000UL)

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

/* TODO: Create ticket for MDK. */
#define NRF_SYSCTRL_APB32_TO_APB38_CHANNELS 0x000000FF
#define NRF_SYSCTRL_APB32_TO_APB39_CHANNELS 0x0000FF00
#define NRF_SYSCTRL_APB32_TO_APB3A_CHANNELS 0x00FF0000
#define NRF_SYSCTRL_APB32_TO_APB3B_CHANNELS 0xFF000000
#define NRF_SYSCTRL_APB32_TO_APB3C_CHANNELS 0x000000FF
#define NRF_SYSCTRL_APB32_TO_APB3D_CHANNELS 0x0000FF00
#define NRF_SYSCTRL_APB32_TO_APB22_CHANNELS 0x00FF0000

#define GLOBAL_IRQN_START (96)
#define GLOBAL_IRQN_MAX   (480)

#if defined(DPPIC_PRESENT)
#define DPPI_PRESENT
#define DPPI_CH_NUM 8
#define DPPI_GROUP_NUM 2

#ifdef NRF7140_XXAA
#define NRF_DPPIC NRF_DPPIC110
#endif

#endif

#define EGU130_CH_NUM 8
#define EGU020_CH_NUM 16

#if !((defined(LILIUMFP1_XXAA) || defined(NRF9230_XXAA) || defined(NRF7140_XXAA)) && \
      (defined(NRF_APPLICATION) || defined(NRF_RADIOCORE) \
       || defined(NRF_SECURE) || defined(NRF_CELLCORE) \
       || defined(NRF_PPR) || defined(NRF_FLPR) || defined(NRF_SYSCTRL) \
       || defined(NRF_LMAC) || defined(NRF_UMAC)))
#define P0_PIN_NUM (12)
#define P1_PIN_NUM (12)
#define P2_PIN_NUM (12)
#define P6_PIN_NUM (14)
#define P7_PIN_NUM (8)
#define P9_PIN_NUM (6)
#define P0_FEATURE_PINS_PRESENT 0xFFFUL
#define P1_FEATURE_PINS_PRESENT 0xFFFUL
#define P2_FEATURE_PINS_PRESENT 0xFFFUL
#define P6_FEATURE_PINS_PRESENT 0x3FFFUL
#define P7_FEATURE_PINS_PRESENT 0xFFUL
#define P9_FEATURE_PINS_PRESENT 0x3FUL
#endif

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
    #elif defined(NRF_RADIOCORE)
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
#elif defined(NRF_SYSCTRL) || defined(NRF_SECURE)
    #define NRF_GRTC_IRQ_GROUP 6
#elif defined(NRF_PPR) || defined(NRF_FLPR)
    #define NRF_GRTC_IRQ_GROUP 2
#else
    #if defined(NRF_SECURE)
        #define NRF_GRTC_IRQ_GROUP 1
    #elif defined(NRF_APPLICATION)
        #define NRF_GRTC_IRQ_GROUP 3
    #elif defined(NRF_RADIOCORE)
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
/** @brief Fixup for the GRTC IRQn lines. */
    #define GRTC_IRQn       GRTC_0_IRQn
/** @brief Fixup for the GRTC IRQHandler. */
    #define GRTC_IRQHandler GRTC0_0_IRQHandler
#else
    #define GRTC_IRQn       GRTC_1_IRQn
    #define GRTC_IRQHandler GRTC0_1_IRQHandler
#endif

#define NRF_GRTC_INTEN_MASK 0x7FFFFFF

#define LPCOMP_REFSEL_RESOLUTION 16

#define RTC130_CC_NUM 4
#define RTC131_CC_NUM 4

#define SAADC_CH_NUM 8

#if !((defined(LILIUMFP1_XXAA) || defined(NRF9230_XXAA) || defined(NRF7140_XXAA)) && \
      (defined(NRF_APPLICATION) || defined(NRF_RADIOCORE) \
       || defined(NRF_SECURE) || defined(NRF_CELLCORE) \
       || defined(NRF_PPR) || defined(NRF_FLPR) || defined(NRF_SYSCTRL) \
       || defined(NRF_LMAC) || defined(NRF_UMAC)))
#define SPIM120_MAX_DATARATE 32
#define SPIM121_MAX_DATARATE 32
#endif

#define SPIM130_MAX_DATARATE 8
#define SPIM131_MAX_DATARATE 8
#define SPIM132_MAX_DATARATE 8
#define SPIM133_MAX_DATARATE 8
#define SPIM134_MAX_DATARATE 8
#define SPIM135_MAX_DATARATE 8
#define SPIM136_MAX_DATARATE 8
#define SPIM137_MAX_DATARATE 8

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

#if !defined(NRF7140_XXAA) && !defined(NRF9230_XXAA)
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
#endif

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

#if !defined(NRF7140_XXAA) && !defined(NRF9230_XXAA)
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
#endif

#define SPIS120_EASYDMA_MAXCNT_SIZE 16
#define SPIS130_EASYDMA_MAXCNT_SIZE 16
#define SPIS131_EASYDMA_MAXCNT_SIZE 16
#define SPIS132_EASYDMA_MAXCNT_SIZE 16
#define SPIS133_EASYDMA_MAXCNT_SIZE 16
#define SPIS134_EASYDMA_MAXCNT_SIZE 16
#define SPIS135_EASYDMA_MAXCNT_SIZE 16
#define SPIS136_EASYDMA_MAXCNT_SIZE 16
#define SPIS137_EASYDMA_MAXCNT_SIZE 16

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

#ifdef NRF7140_XXAA
#define NRF_PDM   NRF_PDM130

#if (defined(NRF_LMAC) || defined(NRF_UMAC))
#undef GPIOTE_PRESENT
#endif

#if (defined(NRF_LMAC) || defined(NRF_UMAC))
#undef GPIOTE_PRESENT
#endif

#undef QSPI_PRESENT
#endif /* NRF7140_XXAA */

#if defined(NRF_RADIOCORE) && !defined(NRF7140_XXAA) && !defined(NRF9230_XXAA)
#define TIMER020_CC_NUM 6
#define TIMER021_CC_NUM 6
#define TIMER022_CC_NUM 6

#define TIMER020_MAX_SIZE 32
#define TIMER021_MAX_SIZE 32
#define TIMER022_MAX_SIZE 32
#endif

#define NRF_VPR_CLIC_PRIO_COUNT 4
#define CLIC_CLIC_CLICCFG_NMBITS_ModeMU  1
#define CLIC_CLIC_CLICCFG_NMBITS_ModeMSU 2

#define VPR_VEVIF_EVENT_MaxCount 32

#define CSR_MINTTRESH 0x347

#if defined(NRF_SYSCTRL) || defined(NRF_PPR) || defined(NRF_FLPR)
    #define MVDMA_JOBLISTCOUNT 4
#else
    #define MVDMA_JOBLISTCOUNT 1
#endif

#define MVDMA_AXI_BUS_WIDTH 8

/* NCSDK-10983 */

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

#if defined(SPU_FEATURE_GPIO_MaxCount)
#undef SPU_FEATURE_GPIO_MaxCount
#define SPU_FEATURE_GPIO_MaxCount 16
#endif

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
  __IOM NRF_SPU_FEATURE_BELLS_Type BELLS;
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

#if defined(NRF7140_XXAA) || defined(NRF9230_XXAA)
/* HM-17600 */
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
#endif

#undef NRF_ETR_NS
#define NRF_ETR_NS ((NRF_ETR_Type*) NRF_ETR_NS_BASE)

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

#if defined(LILIUMSOC1_XXAA) && (defined(NRF_APPLICATION))
#undef EGU_PRESENT
#endif

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

#endif // defined(HALTIUM_XXAA)

#if defined(MOONLIGHT_XXAA)

/* TAMPC @Bit 13 : Reset due to TAMPC detecting illegal tampering of the device */
  #define RESET_RESETREAS_TAMPC_Pos (13UL)             /*!< Position of TAMPC field.                                           */
  #define RESET_RESETREAS_TAMPC_Msk (0x1UL << RESET_RESETREAS_TAMPC_Pos) /*!< Bit mask of TAMPC field.                         */
  #define RESET_RESETREAS_TAMPC_Min (0x0UL)            /*!< Min enumerator value of TAMPC field.                               */
  #define RESET_RESETREAS_TAMPC_Max (0x1UL)            /*!< Max enumerator value of TAMPC field.                               */
  #define RESET_RESETREAS_TAMPC_NotDetected (0x0UL)    /*!< Not detected                                                       */
  #define RESET_RESETREAS_TAMPC_Detected (0x1UL)       /*!< Detected                                                           */

/* VMON @Bit 14 : Reset due to VMON detecting illegal tampering of the device */
  #define RESET_RESETREAS_VMON_Pos (14UL)             /*!< Position of VMON field.                                             */
  #define RESET_RESETREAS_VMON_Msk (0x1UL << RESET_RESETREAS_VMON_Pos) /*!< Bit mask of VMON field.                            */
  #define RESET_RESETREAS_VMON_Min (0x0UL)            /*!< Min enumerator value of VMON field.                                 */
  #define RESET_RESETREAS_VMON_Max (0x1UL)            /*!< Max enumerator value of VMON field.                                 */
  #define RESET_RESETREAS_VMON_NotDetected (0x0UL)    /*!< Not detected                                                        */
  #define RESET_RESETREAS_VMON_Detected (0x1UL)       /*!< Detected                                                            */

#endif

#if defined(NRF9230_XXAA)
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
#endif // defined(NRF9230_XXAA)

#endif // MDK_FIXUPS_H__
