#ifndef MDK_FIXUPS_H__
#define MDK_FIXUPS_H__

#if defined(HALTIUM_XXAA)
typedef NRF_DOMAINS_t nrf_domain_t;

#define NRF_DOMAIN_COUNT NRF_DOMAIN_GLOBAL + 1

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
    NRF_PROCESSOR_ID_COUNT,
} nrf_processor_id_t;

/* MDK-2059 */
#define ADDRESS_REGION_Pos   (29UL)
#define ADDRESS_REGION_Msk   (0xE0000000UL)
#define ADDRESS_SECURITY_Pos (28UL)
#define ADDRESS_SECURITY_Msk (0x10000000UL)
#define ADDRESS_DOMAIN_Pos   (24UL)
#define ADDRESS_DOMAIN_Msk   (0x0F000000UL)
#define ADDRESS_BUS_Pos      (16UL)
#define ADDRESS_BUS_Msk      (0x00FF0000UL)
#define ADDRESS_SLAVE_Pos    (12UL)
#define ADDRESS_SLAVE_Msk    (0x0000F000UL)
#define ADDRESS_PERIPHID_Pos (12UL)
#define ADDRESS_PERIPHID_Msk (0x007FF000UL)

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

#define GLOBAL_IRQN_START (96)
#define GLOBAL_IRQN_MAX   (480)

#define DPPI_PRESENT 1
#define DPPI_CH_NUM 8
#define DPPI_GROUP_NUM 2

#define EGU130_CH_NUM 8
#define EGU020_CH_NUM 16

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
#else
    #if defined(NRF_SECURE)
        #define NRF_GPIOTE_IRQ_GROUP 1
    #elif defined(NRF_APPLICATION) || defined(NRF_SYSTEMC_APPLICATION)
        #define NRF_GPIOTE_IRQ_GROUP 3
    #elif defined(NRF_RADIOCORE)
        #define NRF_GPIOTE_IRQ_GROUP 5
    #elif defined(NRF_CELLCORE)
        #define NRF_GPIOTE_IRQ_GROUP 5
    #else
        #error Unknown core.
    #endif
#endif // defined(NRF_TRUSTZONE_NONSECURE)

#if defined(NRF_TRUSTZONE_NONSECURE)
#if !defined(NRF_CELLCORE)
#define nrfx_gpiote_irq_handler      GPIOTE1300_0_IRQHandler
#else
#define nrfx_gpiote_irq_handler      GPIOTE1310_0_IRQHandler
#endif
#else
#if !defined(NRF_CELLCORE)
#define nrfx_gpiote_irq_handler      GPIOTE1300_1_IRQHandler
#else
#define nrfx_gpiote_irq_handler      GPIOTE1310_1_IRQHandler
#endif
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
#elif defined(NRF_PPR)
    #define NRF_GRTC_IRQ_GROUP 4
#else
    #if defined(NRF_SECURE)
        #define NRF_GRTC_IRQ_GROUP 1
    #elif defined(NRF_APPLICATION) || defined(NRF_SYSTEMC_APPLICATION)
        #define NRF_GRTC_IRQ_GROUP 3
    #elif defined(NRF_RADIOCORE)
        #define NRF_GRTC_IRQ_GROUP 5
    #elif defined(NRF_CELLCORE)
        #define NRF_GRTC_IRQ_GROUP 7
    #else
        #error Unknown core.
    #endif
#endif

#if defined(NRF_TRUSTZONE_NONSECURE) || defined(NRF_SYSCTRL) || defined(NRF_PPR) || defined(__NRFX_DOXYGEN__)
/** @brief Fixup for the GRTC IRQn lines. */
    #define GRTC_IRQn       GRTC_0_IRQn
    /** @todo Remove when fix in MDK will appear. */
    #if defined(NRF_SYSTEMC_APPLICATION) || \
        defined(NRF_SYSTEMC_SECURE)
        /** @brief Fixup for the GRTC IRQHandler. */
        #define GRTC_IRQHandler GRTC0_IRQHandler
    #else
        /** @brief Fixup for the GRTC IRQHandler. */
        #define GRTC_IRQHandler GRTC0_0_IRQHandler
    #endif
#else
    #define GRTC_IRQn       GRTC_1_IRQn
    #if defined(NRF_SYSTEMC_APPLICATION) || \
        defined(NRF_SYSTEMC_SECURE)
        #define GRTC_IRQHandler GRTC1_IRQHandler
    #else
        #define GRTC_IRQHandler GRTC0_1_IRQHandler
    #endif
#endif

#define NRF_GRTC_INTEN_MASK 0x7FFFFFF

#define LPCOMP_REFSEL_RESOLUTION 16

#define RTC130_CC_NUM 4
#define RTC131_CC_NUM 4

#define SAADC_CH_NUM 8

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

#if defined(NRF_RADIOCORE)
#define TIMER020_CC_NUM 6
#define TIMER021_CC_NUM 6
#define TIMER022_CC_NUM 6

#define TIMER020_MAX_SIZE 32
#define TIMER021_MAX_SIZE 32
#define TIMER022_MAX_SIZE 32
#endif //defined(NRF_RADIOCORE)

#define NRF_VPR_CLIC_PRIO_COUNT 4
#define CLIC_CLIC_CLICCFG_NMBITS_ModeMU  1
#define CLIC_CLIC_CLICCFG_NMBITS_ModeMSU 2

#define VPR_VEVIF_EVENT_MaxCount 32









#endif // defined(HALTIUM_XXAA)

#endif // MDK_FIXUPS_H__
