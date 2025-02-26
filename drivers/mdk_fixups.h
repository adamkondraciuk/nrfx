#ifndef MDK_FIXUPS_H__
#define MDK_FIXUPS_H__

/**************************************************************************************************/
/* Start fixups section for HALTIUM_XXAA                                                          */
/**************************************************************************************************/

#if defined(HALTIUM_XXAA)
    #include "haltium_interim.h"

    #if defined(NRF_SECURE)
        #define NRF_PROCESSOR NRF_PROCESSOR_SECURE
    #elif defined(NRF_CELLCORE)
        #define NRF_PROCESSOR NRF_PROCESSOR_CELLCORE
    #elif defined(NRF_SYSCTRL)
        #define NRF_PROCESSOR NRF_PROCESSOR_SYSCTRL
    #elif defined(NRF_LMAC)
        #define NRF_PROCESSOR NRF_PROCESSOR_WIFILMAC
    #elif defined(NRF_UMAC)
        #define NRF_PROCESSOR NRF_PROCESSOR_WIFIUMAC
    #elif defined(NRF_BBPR)
        #define NRF_PROCESSOR NRF_PROCESSOR_BBPR
    #endif

    #if defined(NRF_SECURE)
        #define NRF_OWNER NRF_OWNER_SECURE
    #elif defined(NRF_CELLCORE)
        #define NRF_OWNER NRF_OWNER_CELL
    #elif defined(NRF_SYSCTRL)
        #define NRF_OWNER NRF_OWNER_SYSCTRL
    #elif defined(NRF_LMAC)
        #define NRF_OWNER NRF_OWNER_WIFICORE
    #elif defined(NRF_UMAC)
        #define NRF_OWNER NRF_OWNER_WIFICORE
    #endif

    #if defined(IPCT_PRESENT)
        #if defined(NRF_SECURE)
            #define LOCAL_IPCT_NUM 4
        #endif
    #endif

    #define NRF_SYSCTRL_PPIB130_TO_PPIB132_CHANNELS_OFFSET 0
    #define NRF_SYSCTRL_PPIB130_TO_PPIB133_CHANNELS_OFFSET 8
    #define NRF_SYSCTRL_PPIB130_TO_PPIB134_CHANNELS_OFFSET 16
    #define NRF_SYSCTRL_PPIB130_TO_PPIB135_CHANNELS_OFFSET 24
    #define NRF_SYSCTRL_PPIB131_TO_PPIB136_CHANNELS_OFFSET 0
    #define NRF_SYSCTRL_PPIB131_TO_PPIB137_CHANNELS_OFFSET 8
    #define NRF_SYSCTRL_PPIB131_TO_PPIB121_CHANNELS_OFFSET 16

    #define EASYVDMA_PRESENT

    #define SPU0_PERIPH_COUNT 14
    #define SPU1_PERIPH_COUNT 10
    #define SPU2_PERIPH_COUNT 6
    #define SPU3_PERIPH_COUNT 8
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
#endif

/**************************************************************************************************/
/* End fixups section for HALTIUM_XXAA                                                            */
/**************************************************************************************************/

/**************************************************************************************************/
/* Start fixups section for NRF54H20_XXAA (LILIUM 1.1)                                            */
/**************************************************************************************************/

#if defined(NRF54H20_XXAA)
    #include "nrf54h20_interim.h"

    /* Internal part */
    #if defined(NRF_TRUSTZONE_NONSECURE)
        #if defined(NRF_SECURE)
            #define GRTC_IRQ_GROUP 0
            #define GPIOTE_IRQ_GROUP 0
        #endif
    #elif defined(NRF_SYSCTRL)
        #define GRTC_IRQ_GROUP 7
        #define GPIOTE_IRQ_GROUP 6
    #elif defined(NRF_BBPR)
        #define GRTC_IRQ_GROUP 10
    #else
        #if defined(NRF_SECURE)
            #define GRTC_IRQ_GROUP 1
            #define GPIOTE_IRQ_GROUP 1
        #endif
    #endif

    #if !defined(GRTC_IRQ_GROUP)
        #error Unknown core.
    #endif

#endif

/**************************************************************************************************/
/* End fixups section for NRF54H20_XXAA (LILIUM 1.1)                                              */
/**************************************************************************************************/

/**************************************************************************************************/
/* Start fixups section for NRF54L05_XXAA                                                         */
/**************************************************************************************************/

#if defined(NRF54L05_XXAA)
    #include "nrf54l05_interim.h"
#endif

/**************************************************************************************************/
/* End fixups section for NRF54L05_XXAA                                                           */
/**************************************************************************************************/

/**************************************************************************************************/
/* Start fixups section for NRF54L10_XXAA                                                         */
/**************************************************************************************************/

#if defined(NRF54L10_XXAA)
    #include "nrf54l10_interim.h"
#endif

/**************************************************************************************************/
/* End fixups section for NRF54L10_XXAA                                                           */
/**************************************************************************************************/

/**************************************************************************************************/
/* Start fixups section for NRF54L15_XXAA                                                         */
/**************************************************************************************************/

#if defined(NRF54L15_XXAA)
    #include "nrf54l15_interim.h"
#endif

/**************************************************************************************************/
/* End fixups section for NRF54L15_XXAA                                                           */
/**************************************************************************************************/

/**************************************************************************************************/
/* Start fixups section for NRF54LM20A_ENGA_XXAA                                                  */
/**************************************************************************************************/

#if defined(NRF54LM20A_ENGA_XXAA)
    #include "nrf54lm20a_enga_interim.h"

    #ifdef VPRCSR_MINTTHRESH_ResetValue
        #undef VPRCSR_MINTTHRESH_ResetValue
        #define VPRCSR_MINTTHRESH_ResetValue (0x0000001FUL)
    #endif
    #ifdef VPRCSR_MINTTHRESH_TH_DISABLED
        #undef VPRCSR_MINTTHRESH_TH_DISABLED
        #define VPRCSR_MINTTHRESH_TH_DISABLED (0x1FUL)
    #endif
#endif

/**************************************************************************************************/
/* End fixups section for NRF54LM20A_ENGA_XXAA                                                    */
/**************************************************************************************************/

/**************************************************************************************************/
/* Start fixups section for NRF54LV10A_ENGA_XXAA                                                  */
/**************************************************************************************************/

#if defined(NRF54LV10A_ENGA_XXAA)
    #include "nrf54lv10a_enga_interim.h"
#endif

/**************************************************************************************************/
/* End fixups section for NRF54LV10A_ENGA_XXAA                                                    */
/**************************************************************************************************/

/**************************************************************************************************/
/* Start fixups section for NRF7120_ENGA_XXAA                                                         */
/**************************************************************************************************/

#if defined(NRF7120_ENGA_XXAA)

  #include "nrf7120_enga_interim.h"

#endif

/**************************************************************************************************/
/* End fixups section for NRF7120_ENGA_XXAA                                                           */
/**************************************************************************************************/

/**************************************************************************************************/
/* Start fixups section for NRF7140_XXAA                                                          */
/**************************************************************************************************/

#if defined(NRF7140_XXAA)

    /* External part */
    #if defined(NRF_APPLICATION)
        #define NRF_DOMAIN NRF_DOMAIN_APPLICATION
    #elif defined(NRF_RADIOCORE)
        #define NRF_DOMAIN NRF_DOMAIN_RADIOCORE
    #elif defined(NRF_FLPR)
        #define NRF_DOMAIN NRF_DOMAIN_GLOBALFAST
    #elif defined(NRF_PPR)
        #define NRF_DOMAIN NRF_DOMAIN_GLOBALSLOW
    #endif

    #if defined(NRF_TRUSTZONE_NONSECURE)
        #if defined(NRF_APPLICATION)
            #define GRTC_IRQ_GROUP 2
            #define GPIOTE_IRQ_GROUP 2
        #elif defined(NRF_RADIOCORE)
            #define GRTC_IRQ_GROUP 4
            #define GPIOTE_IRQ_GROUP 4
        #endif
    #elif defined(NRF_PPR)
        #define GRTC_IRQ_GROUP 10
        #define GPIOTE_IRQ_GROUP 2
    #elif defined(NRF_FLPR)
        #define GRTC_IRQ_GROUP 11
        #define GPIOTE_IRQ_GROUP 2
    #else
        #if defined(NRF_APPLICATION)
            #define GRTC_IRQ_GROUP 3
            #define GPIOTE_IRQ_GROUP 3
        #elif defined(NRF_RADIOCORE)
            #define GRTC_IRQ_GROUP 5
            #define GPIOTE_IRQ_GROUP 5
        #endif
    #endif

    #define RADIO_TIMING_RU_Legacy 0
    #define RADIO_TIMING_RU_Fast   1

    /* Internal part */
    #if defined(NRF_SECURE)
        #define NRF_DOMAIN NRF_DOMAIN_SECURE
    #elif defined(NRF_CELLCORE)
        #define NRF_DOMAIN NRF_DOMAIN_CELLCORE
    #elif defined(NRF_SYSCTRL)
        #define NRF_DOMAIN NRF_DOMAIN_GLOBALFAST
    #elif defined(NRF_LMAC)
        #define NRF_DOMAIN NRF_DOMAIN_WIFICORE
    #elif defined(NRF_UMAC)
        #define NRF_DOMAIN NRF_DOMAIN_WIFICORE
    #endif

    #if defined(NRF_TRUSTZONE_NONSECURE)
        #if defined(NRF_SECURE)
            #define GRTC_IRQ_GROUP 0
            #define GPIOTE_IRQ_GROUP 0
        #elif defined(NRF_CELLCORE)
            #define GRTC_IRQ_GROUP 8
            #define GPIOTE_IRQ_GROUP 4
        #endif
    #elif defined(NRF_SYSCTRL)
        #define GRTC_IRQ_GROUP 7
        #define GPIOTE_IRQ_GROUP 6
    #elif defined(NRF_LMAC)
        #define GRTC_IRQ_GROUP 8
        #define GPIOTE_IRQ_GROUP 2
    #elif defined(NRF_UMAC)
        #define GRTC_IRQ_GROUP 13
        #define GPIOTE_IRQ_GROUP 2
    #else
        #if defined(NRF_SECURE)
            #define GRTC_IRQ_GROUP 1
            #define GPIOTE_IRQ_GROUP 1
        #endif
    #endif

    #if !defined(GRTC_IRQ_GROUP)
        #error Unknown core.
    #endif

    #undef QSPI_PRESENT

    #define NRF_GRAPHICS_AUXPLL_NS_BASE       0x4900B000UL
    #define NRF_GRAPHICS_AUXPLL_NS            ((NRF_AUXPLL_Type*) NRF_GRAPHICS_AUXPLL_NS_BASE)
    #define NRF_GRAPHICS_AUXPLL               NRF_GRAPHICS_AUXPLL_NS
    #define NRF_AUXPLL                        NRF_GRAPHICS_AUXPLL

    #define P0_PIN_NUM P0_PIN_NUM_SIZE
    #define P1_PIN_NUM P1_PIN_NUM_SIZE
    #define P2_PIN_NUM P2_PIN_NUM_SIZE
    #define P3_PIN_NUM P3_PIN_NUM_SIZE
    #define P5_PIN_NUM P5_PIN_NUM_SIZE
    #define P6_PIN_NUM P6_PIN_NUM_SIZE
    #define P8_PIN_NUM P8_PIN_NUM_SIZE
    #define P9_PIN_NUM P9_PIN_NUM_SIZE

    #define RTC_CC_NUM    RTC_CC_NUM_SIZE
    #define RTC130_CC_NUM RTC130_CC_NUM_SIZE
    #define RTC131_CC_NUM RTC131_CC_NUM_SIZE

    #define DPPIC020_CH_NUM (DPPIC020_CH_NUM_MAX + 1UL)
    #define DPPIC030_CH_NUM (DPPIC030_CH_NUM_MAX + 1UL)
    #define DPPIC120_CH_NUM (DPPIC120_CH_NUM_MAX + 1UL)
    #define DPPIC130_CH_NUM (DPPIC130_CH_NUM_MAX + 1UL)
    #define DPPIC131_CH_NUM (DPPIC131_CH_NUM_MAX + 1UL)
    #define DPPIC132_CH_NUM (DPPIC132_CH_NUM_MAX + 1UL)
    #define DPPIC133_CH_NUM (DPPIC133_CH_NUM_MAX + 1UL)
    #define DPPIC134_CH_NUM (DPPIC134_CH_NUM_MAX + 1UL)
    #define DPPIC135_CH_NUM (DPPIC135_CH_NUM_MAX + 1UL)
    #define DPPIC136_CH_NUM (DPPIC136_CH_NUM_MAX + 1UL)

    #define DPPIC020_GROUP_NUM (DPPIC020_GROUP_NUM_MAX + 1UL)
    #define DPPIC030_GROUP_NUM (DPPIC030_GROUP_NUM_MAX + 1UL)
    #define DPPIC120_GROUP_NUM (DPPIC120_GROUP_NUM_MAX + 1UL)
    #define DPPIC130_GROUP_NUM (DPPIC130_GROUP_NUM_MAX + 1UL)
    #define DPPIC131_GROUP_NUM (DPPIC131_GROUP_NUM_MAX + 1UL)
    #define DPPIC132_GROUP_NUM (DPPIC132_GROUP_NUM_MAX + 1UL)
    #define DPPIC133_GROUP_NUM (DPPIC133_GROUP_NUM_MAX + 1UL)
    #define DPPIC134_GROUP_NUM (DPPIC134_GROUP_NUM_MAX + 1UL)
    #define DPPIC135_GROUP_NUM (DPPIC135_GROUP_NUM_MAX + 1UL)
    #define DPPIC136_GROUP_NUM (DPPIC136_GROUP_NUM_MAX + 1UL)

    #define EGU020_CH_NUM (EGU020_CH_NUM_MAX + 1UL)
    #define EGU130_CH_NUM (EGU130_CH_NUM_MAX + 1UL)

    #define TIMER020_MAX_SIZE (TIMER020_MAX_SIZE_MAX + 1UL)
    #define TIMER021_MAX_SIZE (TIMER021_MAX_SIZE_MAX + 1UL)
    #define TIMER022_MAX_SIZE (TIMER022_MAX_SIZE_MAX + 1UL)
    #define TIMER120_MAX_SIZE (TIMER120_MAX_SIZE_MAX + 1UL)
    #define TIMER121_MAX_SIZE (TIMER121_MAX_SIZE_MAX + 1UL)
    #define TIMER130_MAX_SIZE (TIMER130_MAX_SIZE_MAX + 1UL)
    #define TIMER131_MAX_SIZE (TIMER131_MAX_SIZE_MAX + 1UL)
    #define TIMER132_MAX_SIZE (TIMER132_MAX_SIZE_MAX + 1UL)
    #define TIMER133_MAX_SIZE (TIMER133_MAX_SIZE_MAX + 1UL)
    #define TIMER134_MAX_SIZE (TIMER134_MAX_SIZE_MAX + 1UL)
    #define TIMER135_MAX_SIZE (TIMER135_MAX_SIZE_MAX + 1UL)
    #define TIMER136_MAX_SIZE (TIMER136_MAX_SIZE_MAX + 1UL)
    #define TIMER137_MAX_SIZE (TIMER137_MAX_SIZE_MAX + 1UL)

    #define TIMER020_CC_NUM (TIMER020_CC_NUM_MAX + 1UL)
    #define TIMER021_CC_NUM (TIMER021_CC_NUM_MAX + 1UL)
    #define TIMER022_CC_NUM (TIMER022_CC_NUM_MAX + 1UL)
    #define TIMER120_CC_NUM (TIMER120_CC_NUM_MAX + 1UL)
    #define TIMER121_CC_NUM (TIMER121_CC_NUM_MAX + 1UL)
    #define TIMER130_CC_NUM (TIMER130_CC_NUM_MAX + 1UL)
    #define TIMER131_CC_NUM (TIMER131_CC_NUM_MAX + 1UL)
    #define TIMER132_CC_NUM (TIMER132_CC_NUM_MAX + 1UL)
    #define TIMER133_CC_NUM (TIMER133_CC_NUM_MAX + 1UL)
    #define TIMER134_CC_NUM (TIMER134_CC_NUM_MAX + 1UL)
    #define TIMER135_CC_NUM (TIMER135_CC_NUM_MAX + 1UL)
    #define TIMER136_CC_NUM (TIMER136_CC_NUM_MAX + 1UL)
    #define TIMER137_CC_NUM (TIMER137_CC_NUM_MAX + 1UL)

#endif

/**************************************************************************************************/
/* End fixups section for NRF7140_XXAA                                                            */
/**************************************************************************************************/

/**************************************************************************************************/
/* Start fixups section for NRF9220_XXAA                                                          */
/**************************************************************************************************/

#if defined(NRF9220_XXAA)

    #if defined(NRF_APPLICATION_UICR_NS_BASE)
        #undef NRF_APPLICATION_UICR_NS_BASE
        #define NRF_APPLICATION_UICR_NS_BASE 0x0FFF0000UL
    #endif

    #if defined(NRF_APPLICATION_UICR_NS)
        #undef NRF_APPLICATION_UICR_NS
        #define NRF_APPLICATION_UICR_NS ((NRF_UICR_Type*) NRF_APPLICATION_UICR_NS_BASE)
    #endif

    #if defined(NRF_APPLICATION_UICR)
        #undef NRF_APPLICATION_UICR
        #define NRF_APPLICATION_UICR NRF_APPLICATION_UICR_NS
    #endif

    #if defined(NRF_UICR)
        #undef NRF_UICR
        #define NRF_UICR NRF_APPLICATION_UICR
    #endif

    #if defined(NRF_APPLICATION_BICR_NS_BASE)
        #undef NRF_APPLICATION_BICR_NS_BASE
        #define NRF_APPLICATION_BICR_NS_BASE 0x0FFF0800UL
    #endif

    #if defined(NRF_APPLICATION_BICR_NS)
        #undef NRF_APPLICATION_BICR_NS
        #define NRF_APPLICATION_BICR_NS ((NRF_BICR_Type*) NRF_APPLICATION_BICR_NS_BASE)
    #endif

    #if defined(NRF_APPLICATION_BICR)
        #undef NRF_APPLICATION_BICR
        #define NRF_APPLICATION_BICR NRF_APPLICATION_BICR_NS
    #endif

    #if defined(NRF_BICR)
        #undef NRF_BICR
        #define NRF_BICR NRF_APPLICATION_BICR
    #endif

    /* Internal part */
    #if defined(NRF_TRUSTZONE_NONSECURE)
        #if defined(NRF_SECURE)
            #define GRTC_IRQ_GROUP 0
            #define GPIOTE_IRQ_GROUP 0
        #elif defined(NRF_APPLICATION)
            #define GRTC_IRQ_GROUP 2
            #define GPIOTE_IRQ_GROUP 0
        #elif defined(NRF_CELLCORE)
            #define GRTC_IRQ_GROUP 5
            #define GPIOTE_IRQ_GROUP 0
        #endif
    #elif defined(NRF_SYSCTRL)
        #define GRTC_IRQ_GROUP 4
        #define GPIOTE_IRQ_GROUP 0
    #elif defined(NRF_PPR)
        #define GRTC_IRQ_GROUP 7
        #define GPIOTE_IRQ_GROUP 0
    #else
        #if defined(NRF_SECURE)
            #define GRTC_IRQ_GROUP 1
            #define GPIOTE_IRQ_GROUP 1
        #elif defined(NRF_APPLICATION)
            #define GRTC_IRQ_GROUP 3
            #define GPIOTE_IRQ_GROUP 1
        #elif defined(NRF_CELLCORE)
            #define GRTC_IRQ_GROUP 6
            #define GPIOTE_IRQ_GROUP 1
        #endif
    #endif

    #if !defined(GRTC_IRQ_GROUP)
        #error Unknown core.
    #endif

    #define DPPIC020_CH_NUM (DPPIC020_CH_NUM_MAX + 1UL)
    #define DPPIC030_CH_NUM (DPPIC030_CH_NUM_MAX + 1UL)
    #define DPPIC120_CH_NUM (DPPIC120_CH_NUM_MAX + 1UL)
    #define DPPIC130_CH_NUM (DPPIC130_CH_NUM_MAX + 1UL)
    #define DPPIC131_CH_NUM (DPPIC131_CH_NUM_MAX + 1UL)
    #define DPPIC132_CH_NUM (DPPIC132_CH_NUM_MAX + 1UL)
    #define DPPIC133_CH_NUM (DPPIC133_CH_NUM_MAX + 1UL)
    #define DPPIC134_CH_NUM (DPPIC134_CH_NUM_MAX + 1UL)

    #define DPPIC020_GROUP_NUM (DPPIC020_GROUP_NUM_MAX + 1UL)
    #define DPPIC030_GROUP_NUM (DPPIC030_GROUP_NUM_MAX + 1UL)
    #define DPPIC120_GROUP_NUM (DPPIC120_GROUP_NUM_MAX + 1UL)
    #define DPPIC130_GROUP_NUM (DPPIC130_GROUP_NUM_MAX + 1UL)
    #define DPPIC131_GROUP_NUM (DPPIC131_GROUP_NUM_MAX + 1UL)
    #define DPPIC132_GROUP_NUM (DPPIC132_GROUP_NUM_MAX + 1UL)
    #define DPPIC133_GROUP_NUM (DPPIC133_GROUP_NUM_MAX + 1UL)
    #define DPPIC134_GROUP_NUM (DPPIC134_GROUP_NUM_MAX + 1UL)

    #define EGU130_CH_NUM (EGU130_CH_NUM_MAX + 1UL)

    #define P0_PIN_NUM P0_PIN_NUM_SIZE
    #define P1_PIN_NUM P1_PIN_NUM_SIZE
    #define P2_PIN_NUM P2_PIN_NUM_SIZE
    #define P5_PIN_NUM P5_PIN_NUM_SIZE
    #define P10_PIN_NUM P10_PIN_NUM_SIZE
    #define P12_PIN_NUM P12_PIN_NUM_SIZE
#endif
/**************************************************************************************************/
/* End fixups section for NRF9220_XXAA                                                            */
/**************************************************************************************************/

/**************************************************************************************************/
/* Start fixups section for NRF9230_ENGA_XXAA (HSOC 1)                                            */
/**************************************************************************************************/

#if defined(NRF9230_ENGA_XXAA)
    /* nRF9230 EngA integration was done correctly last time in MDK 8.59.0.
     * Keep this forever to make this legacy MDK compatible with the new ones
     * integrated already for other targets. */

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
    #endif

    #if defined(NRF_APPLICATION)
        #define NRF_PROCESSOR NRF_PROCESSOR_APPLICATION
    #elif defined(NRF_RADIOCORE)
        #define NRF_PROCESSOR NRF_PROCESSOR_RADIOCORE
    #elif defined(NRF_FLPR)
        #define NRF_PROCESSOR NRF_PROCESSOR_FLPR
    #elif defined(NRF_PPR)
        #define NRF_PROCESSOR NRF_PROCESSOR_PPR
    #endif

    #if defined(NRF_APPLICATION)
        #define NRF_OWNER NRF_OWNER_APPLICATION
    #elif defined(NRF_RADIOCORE)
        #define NRF_OWNER NRF_OWNER_RADIOCORE
    #elif defined(NRF_FLPR) && !defined(NRF_OWNER)
        #define NRF_OWNER NRF_OWNER_APPLICATION
    #elif defined(NRF_PPR) && !defined(NRF_OWNER)
        #define NRF_OWNER NRF_OWNER_APPLICATION
    #endif

    typedef enum {
        NRF_DOMAIN_SECURE      = 1,
        NRF_DOMAIN_APPLICATION = 2,
        NRF_DOMAIN_RADIOCORE   = 3,
        NRF_DOMAIN_CELLCORE    = 4,
        NRF_DOMAIN_CELLDSP     = 5,
        NRF_DOMAIN_CELLRF      = 6,
        NRF_DOMAIN_ISIMCORE    = 7,
        NRF_DOMAIN_WIFICORE    = 8,
        NRF_DOMAIN_GLOBALFAST  = 12,
        NRF_DOMAIN_GLOBALSLOW  = 13,
        NRF_DOMAIN_GLOBAL      = 15,
     } NRF_DOMAINID_Type;

    typedef enum {
       NRF_OWNER_NONE            = 0,
       NRF_OWNER_SECURE          = 1,
       NRF_OWNER_APPLICATION     = 2,
       NRF_OWNER_RADIOCORE       = 3,
       NRF_OWNER_CELL            = 4,
       NRF_OWNER_ISIMCORE        = 5,
       NRF_OWNER_SYSCTRL         = 8,
       NRF_OWNER_DBG_SECURE      = 9,
       NRF_OWNER_DBG_APPLICATION = 10,
       NRF_OWNER_DBG_RADIOCORE   = 11,
       NRF_OWNER_DBG_CELLCORE    = 12,
       NRF_OWNER_DBG_CELLRF      = 13,
       NRF_OWNER_DBG_ISIMCORE    = 15
    } NRF_OWNERID_Type;

    typedef enum {
       NRF_PROCESSOR_SECURE      = 1,
       NRF_PROCESSOR_APPLICATION = 2,
       NRF_PROCESSOR_RADIOCORE   = 3,
       NRF_PROCESSOR_CELLCORE    = 4,
       NRF_PROCESSOR_CELLDSP     = 5,
       NRF_PROCESSOR_CELLRF      = 6,
       NRF_PROCESSOR_ISIMCORE    = 7,
       NRF_PROCESSOR_BBPR        = 11,
       NRF_PROCESSOR_SYSCTRL     = 12,
       NRF_PROCESSOR_PPR         = 13,
       NRF_PROCESSOR_FLPR        = 14,
    } NRF_PROCESSORID_Type;

    #define P0_FEATURE_PINS_PRESENT  (0x00001FFFUL)
    #define P1_FEATURE_PINS_PRESENT  (0x00000FFFUL)
    #define P2_FEATURE_PINS_PRESENT  (0x00000FFFUL)
    #define P6_FEATURE_PINS_PRESENT  (0x00003FFFUL)
    #define P8_FEATURE_PINS_PRESENT  (0x0000001FUL)
    #define P9_FEATURE_PINS_PRESENT  (0x0000003FUL)
    #define P10_FEATURE_PINS_PRESENT (0x000000FFUL)
    #define P11_FEATURE_PINS_PRESENT (0x000000FFUL)
    #define P12_FEATURE_PINS_PRESENT (0x00000007UL)
    #define P13_FEATURE_PINS_PRESENT (0x0000000FUL)

    #define P0_PIN_NUM_SIZE (P0_PIN_NUM_MAX + 1UL)
    #define P1_PIN_NUM_SIZE (P1_PIN_NUM_MAX + 1UL)
    #define P2_PIN_NUM_SIZE (P2_PIN_NUM_MAX + 1UL)
    #define P6_PIN_NUM_SIZE (P6_PIN_NUM_MAX + 1UL)
    #define P8_PIN_NUM_SIZE (P8_PIN_NUM_MAX + 1UL)
    #define P9_PIN_NUM_SIZE (P9_PIN_NUM_MAX + 1UL)
    #define P10_PIN_NUM_SIZE (P10_PIN_NUM_MAX + 1UL)
    #define P11_PIN_NUM_SIZE (P11_PIN_NUM_MAX + 1UL)
    #define P12_PIN_NUM_SIZE (P12_PIN_NUM_MAX + 1UL)
    #define P13_PIN_NUM_SIZE (P13_PIN_NUM_MAX + 1UL)

    #define DPPIC0_CH_NUM_SIZE   (DPPIC0_CH_NUM_MAX + 1UL)
    #define DPPIC1_CH_NUM_SIZE   (DPPIC1_CH_NUM_MAX + 1UL)
    #define DPPIC020_CH_NUM_SIZE (DPPIC020_CH_NUM_MAX + 1UL)
    #define DPPIC030_CH_NUM_SIZE (DPPIC030_CH_NUM_MAX + 1UL)
    #define DPPIC120_CH_NUM_SIZE (DPPIC120_CH_NUM_MAX + 1UL)
    #define DPPIC130_CH_NUM_SIZE (DPPIC130_CH_NUM_MAX + 1UL)
    #define DPPIC131_CH_NUM_SIZE (DPPIC131_CH_NUM_MAX + 1UL)
    #define DPPIC132_CH_NUM_SIZE (DPPIC132_CH_NUM_MAX + 1UL)
    #define DPPIC133_CH_NUM_SIZE (DPPIC133_CH_NUM_MAX + 1UL)
    #define DPPIC134_CH_NUM_SIZE (DPPIC134_CH_NUM_MAX + 1UL)
    #define DPPIC135_CH_NUM_SIZE (DPPIC135_CH_NUM_MAX + 1UL)
    #define DPPIC136_CH_NUM_SIZE (DPPIC136_CH_NUM_MAX + 1UL)

    #define DPPIC0_GROUP_NUM_SIZE   (DPPIC0_GROUP_NUM_MAX + 1UL)
    #define DPPIC1_GROUP_NUM_SIZE   (DPPIC1_GROUP_NUM_MAX + 1UL)
    #define DPPIC020_GROUP_NUM_SIZE (DPPIC020_GROUP_NUM_MAX + 1UL)
    #define DPPIC030_GROUP_NUM_SIZE (DPPIC030_GROUP_NUM_MAX + 1UL)
    #define DPPIC120_GROUP_NUM_SIZE (DPPIC120_GROUP_NUM_MAX + 1UL)
    #define DPPIC130_GROUP_NUM_SIZE (DPPIC130_GROUP_NUM_MAX + 1UL)
    #define DPPIC131_GROUP_NUM_SIZE (DPPIC131_GROUP_NUM_MAX + 1UL)
    #define DPPIC132_GROUP_NUM_SIZE (DPPIC132_GROUP_NUM_MAX + 1UL)
    #define DPPIC133_GROUP_NUM_SIZE (DPPIC133_GROUP_NUM_MAX + 1UL)
    #define DPPIC134_GROUP_NUM_SIZE (DPPIC134_GROUP_NUM_MAX + 1UL)
    #define DPPIC135_GROUP_NUM_SIZE (DPPIC135_GROUP_NUM_MAX + 1UL)
    #define DPPIC136_GROUP_NUM_SIZE (DPPIC136_GROUP_NUM_MAX + 1UL)

    #define EGU020_CH_NUM_SIZE (EGU020_CH_NUM_MAX + 1UL)
    #define EGU130_CH_NUM_SIZE (EGU130_CH_NUM_MAX + 1UL)

    #define RTC_CC_NUM_SIZE    (RTC_CC_NUM_MAX + 1UL)
    #define RTC130_CC_NUM_SIZE (RTC130_CC_NUM_MAX + 1UL)
    #define RTC131_CC_NUM_SIZE (RTC131_CC_NUM_MAX + 1UL)

    #define TIMER020_MAX_SIZE_SIZE (TIMER020_MAX_SIZE_MAX + 1UL)
    #define TIMER021_MAX_SIZE_SIZE (TIMER021_MAX_SIZE_MAX + 1UL)
    #define TIMER022_MAX_SIZE_SIZE (TIMER022_MAX_SIZE_MAX + 1UL)
    #define TIMER120_MAX_SIZE_SIZE (TIMER120_MAX_SIZE_MAX + 1UL)
    #define TIMER121_MAX_SIZE_SIZE (TIMER121_MAX_SIZE_MAX + 1UL)
    #define TIMER130_MAX_SIZE_SIZE (TIMER130_MAX_SIZE_MAX + 1UL)
    #define TIMER131_MAX_SIZE_SIZE (TIMER131_MAX_SIZE_MAX + 1UL)
    #define TIMER132_MAX_SIZE_SIZE (TIMER132_MAX_SIZE_MAX + 1UL)
    #define TIMER133_MAX_SIZE_SIZE (TIMER133_MAX_SIZE_MAX + 1UL)
    #define TIMER134_MAX_SIZE_SIZE (TIMER134_MAX_SIZE_MAX + 1UL)
    #define TIMER135_MAX_SIZE_SIZE (TIMER135_MAX_SIZE_MAX + 1UL)
    #define TIMER136_MAX_SIZE_SIZE (TIMER136_MAX_SIZE_MAX + 1UL)
    #define TIMER137_MAX_SIZE_SIZE (TIMER137_MAX_SIZE_MAX + 1UL)

    #define TIMER020_CC_NUM_SIZE (TIMER020_CC_NUM_MAX + 1UL)
    #define TIMER021_CC_NUM_SIZE (TIMER021_CC_NUM_MAX + 1UL)
    #define TIMER022_CC_NUM_SIZE (TIMER022_CC_NUM_MAX + 1UL)
    #define TIMER120_CC_NUM_SIZE (TIMER120_CC_NUM_MAX + 1UL)
    #define TIMER121_CC_NUM_SIZE (TIMER121_CC_NUM_MAX + 1UL)
    #define TIMER130_CC_NUM_SIZE (TIMER130_CC_NUM_MAX + 1UL)
    #define TIMER131_CC_NUM_SIZE (TIMER131_CC_NUM_MAX + 1UL)
    #define TIMER132_CC_NUM_SIZE (TIMER132_CC_NUM_MAX + 1UL)
    #define TIMER133_CC_NUM_SIZE (TIMER133_CC_NUM_MAX + 1UL)
    #define TIMER134_CC_NUM_SIZE (TIMER134_CC_NUM_MAX + 1UL)
    #define TIMER135_CC_NUM_SIZE (TIMER135_CC_NUM_MAX + 1UL)
    #define TIMER136_CC_NUM_SIZE (TIMER136_CC_NUM_MAX + 1UL)
    #define TIMER137_CC_NUM_SIZE (TIMER137_CC_NUM_MAX + 1UL)

    #define TWIM120_EASYDMA_MAXCNT_SIZE (TWIM120_EASYDMA_MAXCNT_MAX  + 1UL)
    #define TWIM130_EASYDMA_MAXCNT_SIZE (TWIM130_EASYDMA_MAXCNT_MAX  + 1UL)
    #define TWIM131_EASYDMA_MAXCNT_SIZE (TWIM131_EASYDMA_MAXCNT_MAX  + 1UL)
    #define TWIM132_EASYDMA_MAXCNT_SIZE (TWIM132_EASYDMA_MAXCNT_MAX  + 1UL)
    #define TWIM133_EASYDMA_MAXCNT_SIZE (TWIM133_EASYDMA_MAXCNT_MAX  + 1UL)
    #define TWIM134_EASYDMA_MAXCNT_SIZE (TWIM134_EASYDMA_MAXCNT_MAX  + 1UL)
    #define TWIM135_EASYDMA_MAXCNT_SIZE (TWIM135_EASYDMA_MAXCNT_MAX  + 1UL)
    #define TWIM136_EASYDMA_MAXCNT_SIZE (TWIM136_EASYDMA_MAXCNT_MAX  + 1UL)
    #define TWIM137_EASYDMA_MAXCNT_SIZE (TWIM137_EASYDMA_MAXCNT_MAX  + 1UL)

    #define TWIS120_EASYDMA_MAXCNT_SIZE (TWIS120_EASYDMA_MAXCNT_MAX  + 1UL)
    #define TWIS130_EASYDMA_MAXCNT_SIZE (TWIS130_EASYDMA_MAXCNT_MAX  + 1UL)
    #define TWIS131_EASYDMA_MAXCNT_SIZE (TWIS131_EASYDMA_MAXCNT_MAX  + 1UL)
    #define TWIS132_EASYDMA_MAXCNT_SIZE (TWIS132_EASYDMA_MAXCNT_MAX  + 1UL)
    #define TWIS133_EASYDMA_MAXCNT_SIZE (TWIS133_EASYDMA_MAXCNT_MAX  + 1UL)
    #define TWIS134_EASYDMA_MAXCNT_SIZE (TWIS134_EASYDMA_MAXCNT_MAX  + 1UL)
    #define TWIS135_EASYDMA_MAXCNT_SIZE (TWIS135_EASYDMA_MAXCNT_MAX  + 1UL)
    #define TWIS136_EASYDMA_MAXCNT_SIZE (TWIS136_EASYDMA_MAXCNT_MAX  + 1UL)
    #define TWIS137_EASYDMA_MAXCNT_SIZE (TWIS137_EASYDMA_MAXCNT_MAX  + 1UL)

    #define SPIM120_EASYDMA_MAXCNT_SIZE (SPIM120_EASYDMA_MAXCNT_MAX  + 1UL)
    #define SPIM121_EASYDMA_MAXCNT_SIZE (SPIM121_EASYDMA_MAXCNT_MAX  + 1UL)
    #define SPIM130_EASYDMA_MAXCNT_SIZE (SPIM130_EASYDMA_MAXCNT_MAX  + 1UL)
    #define SPIM131_EASYDMA_MAXCNT_SIZE (SPIM131_EASYDMA_MAXCNT_MAX  + 1UL)
    #define SPIM132_EASYDMA_MAXCNT_SIZE (SPIM132_EASYDMA_MAXCNT_MAX  + 1UL)
    #define SPIM133_EASYDMA_MAXCNT_SIZE (SPIM133_EASYDMA_MAXCNT_MAX  + 1UL)
    #define SPIM134_EASYDMA_MAXCNT_SIZE (SPIM134_EASYDMA_MAXCNT_MAX  + 1UL)
    #define SPIM135_EASYDMA_MAXCNT_SIZE (SPIM135_EASYDMA_MAXCNT_MAX  + 1UL)
    #define SPIM136_EASYDMA_MAXCNT_SIZE (SPIM136_EASYDMA_MAXCNT_MAX  + 1UL)
    #define SPIM137_EASYDMA_MAXCNT_SIZE (SPIM137_EASYDMA_MAXCNT_MAX  + 1UL)

    #define SPIS120_EASYDMA_MAXCNT_SIZE (SPIS120_EASYDMA_MAXCNT_MAX  + 1UL)
    #define SPIS130_EASYDMA_MAXCNT_SIZE (SPIS130_EASYDMA_MAXCNT_MAX  + 1UL)
    #define SPIS131_EASYDMA_MAXCNT_SIZE (SPIS131_EASYDMA_MAXCNT_MAX  + 1UL)
    #define SPIS132_EASYDMA_MAXCNT_SIZE (SPIS132_EASYDMA_MAXCNT_MAX  + 1UL)
    #define SPIS133_EASYDMA_MAXCNT_SIZE (SPIS133_EASYDMA_MAXCNT_MAX  + 1UL)
    #define SPIS134_EASYDMA_MAXCNT_SIZE (SPIS134_EASYDMA_MAXCNT_MAX  + 1UL)
    #define SPIS135_EASYDMA_MAXCNT_SIZE (SPIS135_EASYDMA_MAXCNT_MAX  + 1UL)
    #define SPIS136_EASYDMA_MAXCNT_SIZE (SPIS136_EASYDMA_MAXCNT_MAX  + 1UL)
    #define SPIS137_EASYDMA_MAXCNT_SIZE (SPIS137_EASYDMA_MAXCNT_MAX  + 1UL)

    #define UARTE120_EASYDMA_MAXCNT_SIZE (UARTE120_EASYDMA_MAXCNT_MAX  + 1UL)
    #define UARTE130_EASYDMA_MAXCNT_SIZE (UARTE130_EASYDMA_MAXCNT_MAX  + 1UL)
    #define UARTE131_EASYDMA_MAXCNT_SIZE (UARTE131_EASYDMA_MAXCNT_MAX  + 1UL)
    #define UARTE132_EASYDMA_MAXCNT_SIZE (UARTE132_EASYDMA_MAXCNT_MAX  + 1UL)
    #define UARTE133_EASYDMA_MAXCNT_SIZE (UARTE133_EASYDMA_MAXCNT_MAX  + 1UL)
    #define UARTE134_EASYDMA_MAXCNT_SIZE (UARTE134_EASYDMA_MAXCNT_MAX  + 1UL)
    #define UARTE135_EASYDMA_MAXCNT_SIZE (UARTE135_EASYDMA_MAXCNT_MAX  + 1UL)
    #define UARTE136_EASYDMA_MAXCNT_SIZE (UARTE136_EASYDMA_MAXCNT_MAX  + 1UL)
    #define UARTE137_EASYDMA_MAXCNT_SIZE (UARTE137_EASYDMA_MAXCNT_MAX  + 1UL)

    #define PWM_SHORTS_LOOPSDONE_DMA_SEQ0_START_Pos (2UL)
    #define PWM_SHORTS_LOOPSDONE_DMA_SEQ0_START_Msk (0x1UL << PWM_SHORTS_LOOPSDONE_DMA_SEQ0_START_Pos)
    #define PWM_SHORTS_LOOPSDONE_DMA_SEQ0_START_Min (0x0UL)
    #define PWM_SHORTS_LOOPSDONE_DMA_SEQ0_START_Max (0x1UL)
    #define PWM_SHORTS_LOOPSDONE_DMA_SEQ0_START_Disabled (0x0UL)
    #define PWM_SHORTS_LOOPSDONE_DMA_SEQ0_START_Enabled (0x1UL)

    #define PWM_SHORTS_LOOPSDONE_DMA_SEQ1_START_Pos (3UL)
    #define PWM_SHORTS_LOOPSDONE_DMA_SEQ1_START_Msk (0x1UL << PWM_SHORTS_LOOPSDONE_DMA_SEQ1_START_Pos)
    #define PWM_SHORTS_LOOPSDONE_DMA_SEQ1_START_Min (0x0UL)
    #define PWM_SHORTS_LOOPSDONE_DMA_SEQ1_START_Max (0x1UL)
    #define PWM_SHORTS_LOOPSDONE_DMA_SEQ1_START_Disabled (0x0UL)
    #define PWM_SHORTS_LOOPSDONE_DMA_SEQ1_START_Enabled (0x1UL)

    #include "nrf9230_enga_interim.h"

    /* Internal part */
    #if defined(NRF_TRUSTZONE_NONSECURE)
        #if defined(NRF_SECURE)
            #define GRTC_IRQ_GROUP 0
            #define GPIOTE_IRQ_GROUP 0
        #elif defined(NRF_CELLCORE)
            #define GRTC_IRQ_GROUP 8
            #define GPIOTE_IRQ_GROUP 4
        #endif
    #elif defined(NRF_SYSCTRL)
        #define GRTC_IRQ_GROUP 7
        #define GPIOTE_IRQ_GROUP 6
    #elif defined(NRF_BBPR)
        #define GRTC_IRQ_GROUP 12
    #else
        #if defined(NRF_SECURE)
            #define GRTC_IRQ_GROUP 1
            #define GPIOTE_IRQ_GROUP 1
        #elif defined(NRF_CELLCORE)
            #define GRTC_IRQ_GROUP 9
            #define GPIOTE_IRQ_GROUP 5
        #endif
    #endif

    #if !defined(GRTC_IRQ_GROUP)
        #error Unknown core.
    #endif

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

    #define DPPIC0_CH_NUM DPPIC0_CH_NUM_SIZE
    #define DPPIC1_CH_NUM DPPIC1_CH_NUM_SIZE

    #define DPPIC0_GROUP_NUM DPPIC0_GROUP_NUM_SIZE
    #define DPPIC1_GROUP_NUM DPPIC1_GROUP_NUM_SIZE

    /* TODO: HM-21442 */
    #define OSCRFR_TRIM_OSC_VAL_Val35    OSCRFR_TRIM_OSC_VAL_Val23
    #define OSCRFR_TRIM_OSC_VAL_Val154   OSCRFR_TRIM_OSC_VAL_Val54
    #define OSCRFR_TRIM_OSC_VAL_Val670   OSCRFR_TRIM_OSC_VAL_Val98
    #define OSCRFR_TRIM_OSC_VAL_ValNeg54 OSCRFR_TRIM_OSC_VAL_ValNeg51
    #define OSCRFR_TRIM_OSC_VAL_ValNeg49 OSCRFR_TRIM_OSC_VAL_ValNeg42
    #define OSCRFR_TRIM_OSC_VAL_ValNeg37 OSCRFR_TRIM_OSC_VAL_ValNeg31
    #define OSCRFR_TRIM_OSC_VAL_ValNeg26 OSCRFR_TRIM_OSC_VAL_ValNeg18

    #define BELLBOARD_IRQ_COUNT 4

#endif

/**************************************************************************************************/
/* End fixups section for NRF9230_ENGA_XXAA (HSOC 1)                                              */
/**************************************************************************************************/

/**************************************************************************************************/
/* Start fixups section for NRF9230_ENGB_XXAA (HSOC 1.1)                                          */
/**************************************************************************************************/

#if defined(NRF9230_ENGB_XXAA)
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
    #endif

    #if defined(NRF_APPLICATION)
        #define NRF_PROCESSOR NRF_PROCESSOR_APPLICATION
    #elif defined(NRF_RADIOCORE)
        #define NRF_PROCESSOR NRF_PROCESSOR_RADIOCORE
    #elif defined(NRF_FLPR)
        #define NRF_PROCESSOR NRF_PROCESSOR_FLPR
    #elif defined(NRF_PPR)
        #define NRF_PROCESSOR NRF_PROCESSOR_PPR
    #endif

    #if defined(NRF_APPLICATION)
        #define NRF_OWNER NRF_OWNER_APPLICATION
    #elif defined(NRF_RADIOCORE)
        #define NRF_OWNER NRF_OWNER_RADIOCORE
    #elif defined(NRF_FLPR) && !defined(NRF_OWNER)
        #define NRF_OWNER NRF_OWNER_APPLICATION
    #elif defined(NRF_PPR) && !defined(NRF_OWNER)
        #define NRF_OWNER NRF_OWNER_APPLICATION
    #endif

    #define PWM_SHORTS_LOOPSDONE_DMA_SEQ0_START_Pos (2UL)
    #define PWM_SHORTS_LOOPSDONE_DMA_SEQ0_START_Msk (0x1UL << PWM_SHORTS_LOOPSDONE_DMA_SEQ0_START_Pos)
    #define PWM_SHORTS_LOOPSDONE_DMA_SEQ0_START_Min (0x0UL)
    #define PWM_SHORTS_LOOPSDONE_DMA_SEQ0_START_Max (0x1UL)
    #define PWM_SHORTS_LOOPSDONE_DMA_SEQ0_START_Disabled (0x0UL)
    #define PWM_SHORTS_LOOPSDONE_DMA_SEQ0_START_Enabled (0x1UL)

    #define PWM_SHORTS_LOOPSDONE_DMA_SEQ1_START_Pos (3UL)
    #define PWM_SHORTS_LOOPSDONE_DMA_SEQ1_START_Msk (0x1UL << PWM_SHORTS_LOOPSDONE_DMA_SEQ1_START_Pos)
    #define PWM_SHORTS_LOOPSDONE_DMA_SEQ1_START_Min (0x0UL)
    #define PWM_SHORTS_LOOPSDONE_DMA_SEQ1_START_Max (0x1UL)
    #define PWM_SHORTS_LOOPSDONE_DMA_SEQ1_START_Disabled (0x0UL)
    #define PWM_SHORTS_LOOPSDONE_DMA_SEQ1_START_Enabled (0x1UL)

    #include "nrf9230_engb_interim.h"

    /* Internal part */
    #if defined(NRF_TRUSTZONE_NONSECURE)
        #if defined(NRF_SECURE)
            #define GRTC_IRQ_GROUP 0
            #define GPIOTE_IRQ_GROUP 0
        #elif defined(NRF_CELLCORE)
            #define GRTC_IRQ_GROUP 8
            #define GPIOTE_IRQ_GROUP 4
        #endif
    #elif defined(NRF_SYSCTRL)
        #define GRTC_IRQ_GROUP 7
        #define GPIOTE_IRQ_GROUP 6
    #elif defined(NRF_BBPR)
        #define GRTC_IRQ_GROUP 12
    #else
        #if defined(NRF_SECURE)
            #define GRTC_IRQ_GROUP 1
            #define GPIOTE_IRQ_GROUP 1
        #elif defined(NRF_CELLCORE)
            #define GRTC_IRQ_GROUP 9
            #define GPIOTE_IRQ_GROUP 5
        #endif
    #endif

    #if !defined(GRTC_IRQ_GROUP)
        #error Unknown core.
    #endif

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

    #define DPPIC0_CH_NUM DPPIC0_CH_NUM_SIZE
    #define DPPIC1_CH_NUM DPPIC1_CH_NUM_SIZE

    #define DPPIC0_GROUP_NUM DPPIC0_GROUP_NUM_SIZE
    #define DPPIC1_GROUP_NUM DPPIC1_GROUP_NUM_SIZE

    /* TODO: HM-21442 */
    #define OSCRFR_TRIM_OSC_VAL_Val35    OSCRFR_TRIM_OSC_VAL_Val23
    #define OSCRFR_TRIM_OSC_VAL_Val154   OSCRFR_TRIM_OSC_VAL_Val54
    #define OSCRFR_TRIM_OSC_VAL_Val670   OSCRFR_TRIM_OSC_VAL_Val98
    #define OSCRFR_TRIM_OSC_VAL_ValNeg54 OSCRFR_TRIM_OSC_VAL_ValNeg51
    #define OSCRFR_TRIM_OSC_VAL_ValNeg49 OSCRFR_TRIM_OSC_VAL_ValNeg42
    #define OSCRFR_TRIM_OSC_VAL_ValNeg37 OSCRFR_TRIM_OSC_VAL_ValNeg31
    #define OSCRFR_TRIM_OSC_VAL_ValNeg26 OSCRFR_TRIM_OSC_VAL_ValNeg18

/* NRFX-6793: Inadequate type definitions in MDK */
#if defined(NRF_SECURE)
#if !defined(__ASSEMBLER__) && !defined(__ASSEMBLY__) /*!< Ignore C structs for assembly code.                                 */

/* ============================================ Struct SICR_AROT_SECURE_OEMPUBKEY ============================================ */
/**
  * @brief OEMPUBKEY [SICR_AROT_SECURE_OEMPUBKEY] The public key used by the top level SUIT manifest. The public key is stored
            as additional authenticated data (AAD) in unencrypted form using an AEAD scheme realized by AES-256 GCM mode, with
            the secure domain KEK used as a secret key. The initialization vector is provided in NONCE register. Key attributes
            from ATTR register shall be used as an additional authenticated data (AAD) in AEAD. The content of PUBKEY registers
            shall be used as an additional authenticated data (AAD) in AEAD.

  */
typedef struct {
  __IOM uint32_t  NONCE;                             /*!< (@ 0x00000000) The initialization vector of the encryption algorithm
                                                                         used to protect the top level SUIT manifest public key
                                                                         generation [n].*/
  __IOM uint32_t  ATTR;                              /*!< (@ 0x00000004) The attributes of the local domain firmware master
                                                                         encryption key generation [n]. This field is used as an
                                                                         additional authenticated data (AAD) in AEAD.*/
  __IOM uint32_t  PUBKEY[16];                        /*!< (@ 0x00000008) The top level SUIT manifest public key generation [n].
                                                                         This field is used as an additional authenticated data
                                                                         (AAD) in AEAD.*/
  __IOM uint32_t  MAC[4];                            /*!< (@ 0x00000048) The authentication tag of the top level SUIT manifest
                                                                         public key generation [n].*/
  __IOM uint32_t  RFU[2];                            /*!< (@ 0x00000058) (unspecified)                                         */
} NRF_SICR_AROT_SECURE_OEMPUBKEY_Type;               /*!< Size = 96 (0x060)                                                    */
  #define SICR_AROT_SECURE_OEMPUBKEY_MaxCount (3UL)  /*!< Size of OEMPUBKEY[3] array.                                          */
  #define SICR_AROT_SECURE_OEMPUBKEY_MaxIndex (2UL)  /*!< Max index of OEMPUBKEY[3] array.                                     */
  #define SICR_AROT_SECURE_OEMPUBKEY_MinIndex (0UL)  /*!< Min index of OEMPUBKEY[3] array.                                     */

/* SICR_AROT_SECURE_OEMPUBKEY_NONCE: The initialization vector of the encryption algorithm used to protect the top level SUIT
                                      manifest public key generation [n]. */


/* VALUE @Bits 0..31 : Value of nonce used by AEAD. */
  #define SICR_AROT_SECURE_OEMPUBKEY_NONCE_VALUE_Pos (0UL) /*!< Position of VALUE field.                                       */
  #define SICR_AROT_SECURE_OEMPUBKEY_NONCE_VALUE_Msk (0xFFFFFFFFUL << SICR_AROT_SECURE_OEMPUBKEY_NONCE_VALUE_Pos) /*!< Bit mask
                                                                            of VALUE field.*/


/* SICR_AROT_SECURE_OEMPUBKEY_ATTR: The attributes of the local domain firmware master encryption key generation [n]. This field
                                     is used as an additional authenticated data (AAD) in AEAD. */


/* TYPE @Bits 0..15 : Type of the key. This field should follow the key type encoding from PSA Crypto API v1.2.1. */
  #define SICR_AROT_SECURE_OEMPUBKEY_ATTR_TYPE_Pos (0UL) /*!< Position of TYPE field.                                          */
  #define SICR_AROT_SECURE_OEMPUBKEY_ATTR_TYPE_Msk (0xFFFFUL << SICR_AROT_SECURE_OEMPUBKEY_ATTR_TYPE_Pos) /*!< Bit mask of TYPE
                                                                            field.*/

/* LEN @Bits 16..31 : Length of the key in bits. */
  #define SICR_AROT_SECURE_OEMPUBKEY_ATTR_LEN_Pos (16UL) /*!< Position of LEN field.                                           */
  #define SICR_AROT_SECURE_OEMPUBKEY_ATTR_LEN_Msk (0xFFFFUL << SICR_AROT_SECURE_OEMPUBKEY_ATTR_LEN_Pos) /*!< Bit mask of LEN
                                                                            field.*/


/* SICR_AROT_SECURE_OEMPUBKEY_PUBKEY: The top level SUIT manifest public key generation [n]. This field is used as an additional
                                       authenticated data (AAD) in AEAD. */

  #define SICR_AROT_SECURE_OEMPUBKEY_PUBKEY_MaxCount (16UL) /*!< Max size of PUBKEY[16] array.                                 */
  #define SICR_AROT_SECURE_OEMPUBKEY_PUBKEY_MaxIndex (15UL) /*!< Max index of PUBKEY[16] array.                                */
  #define SICR_AROT_SECURE_OEMPUBKEY_PUBKEY_MinIndex (0UL) /*!< Min index of PUBKEY[16] array.                                 */

/* VALUE @Bits 0..31 : Value for word [o] in the key value [n]. */
  #define SICR_AROT_SECURE_OEMPUBKEY_PUBKEY_VALUE_Pos (0UL) /*!< Position of VALUE field.                                      */
  #define SICR_AROT_SECURE_OEMPUBKEY_PUBKEY_VALUE_Msk (0xFFFFFFFFUL << SICR_AROT_SECURE_OEMPUBKEY_PUBKEY_VALUE_Pos) /*!< Bit
                                                                            mask of VALUE field.*/


/* SICR_AROT_SECURE_OEMPUBKEY_MAC: The authentication tag of the top level SUIT manifest public key generation [n]. */
  #define SICR_AROT_SECURE_OEMPUBKEY_MAC_MaxCount (4UL) /*!< Max size of MAC[4] array.                                         */
  #define SICR_AROT_SECURE_OEMPUBKEY_MAC_MaxIndex (3UL) /*!< Max index of MAC[4] array.                                        */
  #define SICR_AROT_SECURE_OEMPUBKEY_MAC_MinIndex (0UL) /*!< Min index of MAC[4] array.                                        */

/* VALUE @Bits 0..31 : The word [o] of the authentication tag. */
  #define SICR_AROT_SECURE_OEMPUBKEY_MAC_VALUE_Pos (0UL) /*!< Position of VALUE field.                                         */
  #define SICR_AROT_SECURE_OEMPUBKEY_MAC_VALUE_Msk (0xFFFFFFFFUL << SICR_AROT_SECURE_OEMPUBKEY_MAC_VALUE_Pos) /*!< Bit mask of
                                                                            VALUE field.*/


/* SICR_AROT_SECURE_OEMPUBKEY_RFU: (unspecified) */
  #define SICR_AROT_SECURE_OEMPUBKEY_RFU_MaxCount (2UL) /*!< Max size of RFU[2] array.                                         */
  #define SICR_AROT_SECURE_OEMPUBKEY_RFU_MaxIndex (1UL) /*!< Max index of RFU[2] array.                                        */
  #define SICR_AROT_SECURE_OEMPUBKEY_RFU_MinIndex (0UL) /*!< Min index of RFU[2] array.                                        */

/* VALUE @Bits 0..31 : RFU word [o]. */
  #define SICR_AROT_SECURE_OEMPUBKEY_RFU_VALUE_Pos (0UL) /*!< Position of VALUE field.                                         */
  #define SICR_AROT_SECURE_OEMPUBKEY_RFU_VALUE_Msk (0xFFFFFFFFUL << SICR_AROT_SECURE_OEMPUBKEY_RFU_VALUE_Pos) /*!< Bit mask of
                                                                            VALUE field.*/



/* ========================================= Struct SICR_AROT_SECURE_PERSONALIZATION ========================================= */
/**
  * @brief PERSONALIZATION [SICR_AROT_SECURE_PERSONALIZATION] The device unique pad used as part of a personalization string
            during IKG key generation.

  */
typedef struct {
  __IOM uint32_t  PAD[4];                            /*!< (@ 0x00000000) The device unique pad.                                */
} NRF_SICR_AROT_SECURE_PERSONALIZATION_Type;         /*!< Size = 16 (0x010)                                                    */

/* SICR_AROT_SECURE_PERSONALIZATION_PAD: The device unique pad. */
  #define SICR_AROT_SECURE_PERSONALIZATION_PAD_MaxCount (4UL) /*!< Max size of PAD[4] array.                                   */
  #define SICR_AROT_SECURE_PERSONALIZATION_PAD_MaxIndex (3UL) /*!< Max index of PAD[4] array.                                  */
  #define SICR_AROT_SECURE_PERSONALIZATION_PAD_MinIndex (0UL) /*!< Min index of PAD[4] array.                                  */

/* VALUE @Bits 0..31 : Value for word [n] in the unique pad. */
  #define SICR_AROT_SECURE_PERSONALIZATION_PAD_VALUE_Pos (0UL) /*!< Position of VALUE field.                                   */
  #define SICR_AROT_SECURE_PERSONALIZATION_PAD_VALUE_Msk (0xFFFFFFFFUL << SICR_AROT_SECURE_PERSONALIZATION_PAD_VALUE_Pos) /*!<
                                                                            Bit mask of VALUE field.*/



/* ======================================= Struct SICR_AROT_SECURE_DATAPROTECTION_UICR ======================================= */
/**
  * @brief UICR [SICR_AROT_SECURE_DATAPROTECTION_UICR] Authentication tag used for validation of the content of the UICRs. The
            UICRs content provides information about a domain peripherals associations and memory layout configuration. It is
            stored in an unencrypted form in a dedicated memory location. A validation shall be performed using an AEAD scheme
            realized by AES-256 GCM mode, with the domain KEK used as a secret key and UICR content used as additional
            authenticated data (AAD). The initialization vector is provided in NONCE register.

  */
typedef struct {
  __IOM uint32_t  NONCE;                             /*!< (@ 0x00000000) The initialization vector of the encryption algorithm
                                                                         used to protect the domain UICRs content.*/
  __IOM uint32_t  MAC[4];                            /*!< (@ 0x00000004) The authentication tag of the domain UICRs.           */
  __IOM uint32_t  RFU[3];                            /*!< (@ 0x00000014) (unspecified)                                         */
} NRF_SICR_AROT_SECURE_DATAPROTECTION_UICR_Type;     /*!< Size = 32 (0x020)                                                    */

/* SICR_AROT_SECURE_DATAPROTECTION_UICR_NONCE: The initialization vector of the encryption algorithm used to protect the domain
                                                UICRs content. */


/* VALUE @Bits 0..31 : Value of nonce used by AEAD. */
  #define SICR_AROT_SECURE_DATAPROTECTION_UICR_NONCE_VALUE_Pos (0UL) /*!< Position of VALUE field.                             */
  #define SICR_AROT_SECURE_DATAPROTECTION_UICR_NONCE_VALUE_Msk (0xFFFFFFFFUL << SICR_AROT_SECURE_DATAPROTECTION_UICR_NONCE_VALUE_Pos)
                                                                            /*!< Bit mask of VALUE field.*/


/* SICR_AROT_SECURE_DATAPROTECTION_UICR_MAC: The authentication tag of the domain UICRs. */
  #define SICR_AROT_SECURE_DATAPROTECTION_UICR_MAC_MaxCount (4UL) /*!< Max size of MAC[4] array.                               */
  #define SICR_AROT_SECURE_DATAPROTECTION_UICR_MAC_MaxIndex (3UL) /*!< Max index of MAC[4] array.                              */
  #define SICR_AROT_SECURE_DATAPROTECTION_UICR_MAC_MinIndex (0UL) /*!< Min index of MAC[4] array.                              */

/* VALUE @Bits 0..31 : The word [n] of the authentication tag. */
  #define SICR_AROT_SECURE_DATAPROTECTION_UICR_MAC_VALUE_Pos (0UL) /*!< Position of VALUE field.                               */
  #define SICR_AROT_SECURE_DATAPROTECTION_UICR_MAC_VALUE_Msk (0xFFFFFFFFUL << SICR_AROT_SECURE_DATAPROTECTION_UICR_MAC_VALUE_Pos)
                                                                            /*!< Bit mask of VALUE field.*/


/* SICR_AROT_SECURE_DATAPROTECTION_UICR_RFU: (unspecified) */
  #define SICR_AROT_SECURE_DATAPROTECTION_UICR_RFU_MaxCount (3UL) /*!< Max size of RFU[3] array.                               */
  #define SICR_AROT_SECURE_DATAPROTECTION_UICR_RFU_MaxIndex (2UL) /*!< Max index of RFU[3] array.                              */
  #define SICR_AROT_SECURE_DATAPROTECTION_UICR_RFU_MinIndex (0UL) /*!< Min index of RFU[3] array.                              */

/* VALUE @Bits 0..31 : RFU word [n]. */
  #define SICR_AROT_SECURE_DATAPROTECTION_UICR_RFU_VALUE_Pos (0UL) /*!< Position of VALUE field.                               */
  #define SICR_AROT_SECURE_DATAPROTECTION_UICR_RFU_VALUE_Msk (0xFFFFFFFFUL << SICR_AROT_SECURE_DATAPROTECTION_UICR_RFU_VALUE_Pos)
                                                                            /*!< Bit mask of VALUE field.*/



/* ========================================= Struct SICR_AROT_SECURE_DATAPROTECTION ========================================== */
/**
  * @brief DATAPROTECTION [SICR_AROT_SECURE_DATAPROTECTION] Elements used for validation of data provisioned onto a device by
            the local domain.

  */
typedef struct {
  __IOM NRF_SICR_AROT_SECURE_DATAPROTECTION_UICR_Type UICR; /*!< (@ 0x00000000) Authentication tag used for validation of the
                                                                            content of the UICRs. The UICRs content provides
                                                                            information about a domain peripherals associations
                                                                            and memory layout configuration. It is stored in an
                                                                            unencrypted form in a dedicated memory location. A
                                                                            validation shall be performed using an AEAD scheme
                                                                            realized by AES-256 GCM mode, with the domain KEK
                                                                            used as a secret key and UICR content used as
                                                                            additional authenticated data (AAD). The
                                                                            initialization vector is provided in NONCE
                                                                            register.*/
} NRF_SICR_AROT_SECURE_DATAPROTECTION_Type;          /*!< Size = 32 (0x020)                                                    */


/* ================================================= Struct SICR_AROT_SECURE ================================================= */
/**
  * @brief SECURE [SICR_AROT_SECURE] (unspecified)
  */
typedef struct {
  __IOM NRF_SICR_AROT_SECURE_OEMPUBKEY_Type OEMPUBKEY[3]; /*!< (@ 0x00000000) The public key used by the top level SUIT
                                                                            manifest. The public key is stored as additional
                                                                            authenticated data (AAD) in unencrypted form using
                                                                            an AEAD scheme realized by AES-256 GCM mode, with
                                                                            the secure domain KEK used as a secret key. The
                                                                            initialization vector is provided in NONCE register.
                                                                            Key attributes from ATTR register shall be used as
                                                                            an additional authenticated data (AAD) in AEAD. The
                                                                            content of PUBKEY registers shall be used as an
                                                                            additional authenticated data (AAD) in AEAD.*/
  __IOM NRF_SICR_AROT_SECURE_PERSONALIZATION_Type PERSONALIZATION; /*!< (@ 0x00000120) The device unique pad used as part of a
                                                                            personalization string during IKG key generation.*/
  __IOM NRF_SICR_AROT_SECURE_DATAPROTECTION_Type DATAPROTECTION; /*!< (@ 0x00000130) Elements used for validation of data
                                                                            provisioned onto a device by the local domain.*/
  __IM  uint32_t  RESERVED[172];
} NRF_SICR_AROT_SECURE_Type_fixed;                   /*!< Size = 1024 (0x400)                                                  */


/* =========================================== Struct SICR_AROT_APPLICATION_FWENC ============================================ */
/**
  * @brief FWENC [SICR_AROT_APPLICATION_FWENC] Local domain firmware master encryption key. The key is stored in an encrypted
            then authenticated form using an AEAD scheme realized by AES-256 GCM mode, with the local domain KEK used as a
            secret key. The initialization vector is provided in NONCE register. Key attributes from ATTR register shall be used
            as an additional authenticated data (AAD) in AEAD.

  */
typedef struct {
  __IOM uint32_t  NONCE;                             /*!< (@ 0x00000000) The initialization vector of the encryption algorithm
                                                                         used to protect the local domain firmware master
                                                                         encryption key generation [n].*/
  __IOM uint32_t  ATTR;                              /*!< (@ 0x00000004) The attributes of the local domain firmware master
                                                                         encryption key generation [n]. This field is used as an
                                                                         additional authenticated data (AAD) in AEAD.*/
  __IOM uint32_t  CIPHERTEXT[8];                     /*!< (@ 0x00000008) The encrypted local domain firmware master encryption
                                                                         key generation [n].*/
  __IOM uint32_t  MAC[4];                            /*!< (@ 0x00000028) The authentication tag of the local domain firmware
                                                                         master encryption key generation [n].*/
  __IOM uint32_t  RFU[2];                            /*!< (@ 0x00000038) (unspecified)                                         */
} NRF_SICR_AROT_APPLICATION_FWENC_Type;              /*!< Size = 64 (0x040)                                                    */
  #define SICR_AROT_APPLICATION_FWENC_MaxCount (2UL) /*!< Size of FWENC[2] array.                                              */
  #define SICR_AROT_APPLICATION_FWENC_MaxIndex (1UL) /*!< Max index of FWENC[2] array.                                         */
  #define SICR_AROT_APPLICATION_FWENC_MinIndex (0UL) /*!< Min index of FWENC[2] array.                                         */

/* SICR_AROT_APPLICATION_FWENC_NONCE: The initialization vector of the encryption algorithm used to protect the local domain
                                       firmware master encryption key generation [n]. */


/* VALUE @Bits 0..31 : Value of nonce used by AEAD. */
  #define SICR_AROT_APPLICATION_FWENC_NONCE_VALUE_Pos (0UL) /*!< Position of VALUE field.                                      */
  #define SICR_AROT_APPLICATION_FWENC_NONCE_VALUE_Msk (0xFFFFFFFFUL << SICR_AROT_APPLICATION_FWENC_NONCE_VALUE_Pos) /*!< Bit
                                                                            mask of VALUE field.*/


/* SICR_AROT_APPLICATION_FWENC_ATTR: The attributes of the local domain firmware master encryption key generation [n]. This
                                      field is used as an additional authenticated data (AAD) in AEAD. */


/* TYPE @Bits 0..15 : Type of the key. This field should follow the key type encoding from PSA Crypto API v1.2.1. */
  #define SICR_AROT_APPLICATION_FWENC_ATTR_TYPE_Pos (0UL) /*!< Position of TYPE field.                                         */
  #define SICR_AROT_APPLICATION_FWENC_ATTR_TYPE_Msk (0xFFFFUL << SICR_AROT_APPLICATION_FWENC_ATTR_TYPE_Pos) /*!< Bit mask of
                                                                            TYPE field.*/

/* LEN @Bits 16..31 : Length of the key in bits. */
  #define SICR_AROT_APPLICATION_FWENC_ATTR_LEN_Pos (16UL) /*!< Position of LEN field.                                          */
  #define SICR_AROT_APPLICATION_FWENC_ATTR_LEN_Msk (0xFFFFUL << SICR_AROT_APPLICATION_FWENC_ATTR_LEN_Pos) /*!< Bit mask of LEN
                                                                            field.*/


/* SICR_AROT_APPLICATION_FWENC_CIPHERTEXT: The encrypted local domain firmware master encryption key generation [n]. */
  #define SICR_AROT_APPLICATION_FWENC_CIPHERTEXT_MaxCount (8UL) /*!< Max size of CIPHERTEXT[8] array.                          */
  #define SICR_AROT_APPLICATION_FWENC_CIPHERTEXT_MaxIndex (7UL) /*!< Max index of CIPHERTEXT[8] array.                         */
  #define SICR_AROT_APPLICATION_FWENC_CIPHERTEXT_MinIndex (0UL) /*!< Min index of CIPHERTEXT[8] array.                         */

/* VALUE @Bits 0..31 : Value for word [o] in the key value [n]. */
  #define SICR_AROT_APPLICATION_FWENC_CIPHERTEXT_VALUE_Pos (0UL) /*!< Position of VALUE field.                                 */
  #define SICR_AROT_APPLICATION_FWENC_CIPHERTEXT_VALUE_Msk (0xFFFFFFFFUL << SICR_AROT_APPLICATION_FWENC_CIPHERTEXT_VALUE_Pos)
                                                                            /*!< Bit mask of VALUE field.*/


/* SICR_AROT_APPLICATION_FWENC_MAC: The authentication tag of the local domain firmware master encryption key generation [n]. */
  #define SICR_AROT_APPLICATION_FWENC_MAC_MaxCount (4UL) /*!< Max size of MAC[4] array.                                        */
  #define SICR_AROT_APPLICATION_FWENC_MAC_MaxIndex (3UL) /*!< Max index of MAC[4] array.                                       */
  #define SICR_AROT_APPLICATION_FWENC_MAC_MinIndex (0UL) /*!< Min index of MAC[4] array.                                       */

/* VALUE @Bits 0..31 : The word [o] of the authentication tag. */
  #define SICR_AROT_APPLICATION_FWENC_MAC_VALUE_Pos (0UL) /*!< Position of VALUE field.                                        */
  #define SICR_AROT_APPLICATION_FWENC_MAC_VALUE_Msk (0xFFFFFFFFUL << SICR_AROT_APPLICATION_FWENC_MAC_VALUE_Pos) /*!< Bit mask of
                                                                            VALUE field.*/


/* SICR_AROT_APPLICATION_FWENC_RFU: (unspecified) */
  #define SICR_AROT_APPLICATION_FWENC_RFU_MaxCount (2UL) /*!< Max size of RFU[2] array.                                        */
  #define SICR_AROT_APPLICATION_FWENC_RFU_MaxIndex (1UL) /*!< Max index of RFU[2] array.                                       */
  #define SICR_AROT_APPLICATION_FWENC_RFU_MinIndex (0UL) /*!< Min index of RFU[2] array.                                       */

/* VALUE @Bits 0..31 : RFU word [o]. */
  #define SICR_AROT_APPLICATION_FWENC_RFU_VALUE_Pos (0UL) /*!< Position of VALUE field.                                        */
  #define SICR_AROT_APPLICATION_FWENC_RFU_VALUE_Msk (0xFFFFFFFFUL << SICR_AROT_APPLICATION_FWENC_RFU_VALUE_Pos) /*!< Bit mask of
                                                                            VALUE field.*/



/* ======================================== Struct SICR_AROT_APPLICATION_AUTHDEBUGKEY ======================================== */
/**
  * @brief AUTHDEBUGKEY [SICR_AROT_APPLICATION_AUTHDEBUGKEY] Local domain authenticated debug access public key. The public key
            is stored as additional authenticated data (AAD) in unencrypted form using an AEAD scheme realized by AES-256 GCM
            mode, with the local domain KEK used as a secret key. The initialization vector is provided in NONCE register. Key
            attributes from ATTR register shall be used as an additional authenticated data (AAD) in AEAD. The content of PUBKEY
            registers shall be used as an additional authenticated data (AAD) in AEAD.

  */
typedef struct {
  __IOM uint32_t  NONCE;                             /*!< (@ 0x00000000) The initialization vector of the encryption algorithm
                                                                         used to protect the local domain authenticated debug
                                                                         access public key generation [n].*/
  __IOM uint32_t  ATTR;                              /*!< (@ 0x00000004) The attributes of the local domain firmware master
                                                                         encryption key generation [n]. This field is used as an
                                                                         additional authenticated data (AAD) in AEAD.*/
  __IOM uint32_t  PUBKEY[16];                        /*!< (@ 0x00000008) The local domain authenticated debug access public key
                                                                         generation [n].*/
  __IOM uint32_t  MAC[4];                            /*!< (@ 0x00000048) The authentication tag of the local domain
                                                                         authenticated debug access public key generation [n].*/
  __IOM uint32_t  RFU[2];                            /*!< (@ 0x00000058) (unspecified)                                         */
} NRF_SICR_AROT_APPLICATION_AUTHDEBUGKEY_Type;       /*!< Size = 96 (0x060)                                                    */
  #define SICR_AROT_APPLICATION_AUTHDEBUGKEY_MaxCount (3UL) /*!< Size of AUTHDEBUGKEY[3] array.                                */
  #define SICR_AROT_APPLICATION_AUTHDEBUGKEY_MaxIndex (2UL) /*!< Max index of AUTHDEBUGKEY[3] array.                           */
  #define SICR_AROT_APPLICATION_AUTHDEBUGKEY_MinIndex (0UL) /*!< Min index of AUTHDEBUGKEY[3] array.                           */

/* SICR_AROT_APPLICATION_AUTHDEBUGKEY_NONCE: The initialization vector of the encryption algorithm used to protect the local
                                              domain authenticated debug access public key generation [n]. */


/* VALUE @Bits 0..31 : Value of nonce used by AEAD. */
  #define SICR_AROT_APPLICATION_AUTHDEBUGKEY_NONCE_VALUE_Pos (0UL) /*!< Position of VALUE field.                               */
  #define SICR_AROT_APPLICATION_AUTHDEBUGKEY_NONCE_VALUE_Msk (0xFFFFFFFFUL << SICR_AROT_APPLICATION_AUTHDEBUGKEY_NONCE_VALUE_Pos)
                                                                            /*!< Bit mask of VALUE field.*/


/* SICR_AROT_APPLICATION_AUTHDEBUGKEY_ATTR: The attributes of the local domain firmware master encryption key generation [n].
                                             This field is used as an additional authenticated data (AAD) in AEAD. */


/* TYPE @Bits 0..15 : Type of the key. This field should follow the key type encoding from PSA Crypto API v1.2.1. */
  #define SICR_AROT_APPLICATION_AUTHDEBUGKEY_ATTR_TYPE_Pos (0UL) /*!< Position of TYPE field.                                  */
  #define SICR_AROT_APPLICATION_AUTHDEBUGKEY_ATTR_TYPE_Msk (0xFFFFUL << SICR_AROT_APPLICATION_AUTHDEBUGKEY_ATTR_TYPE_Pos) /*!<
                                                                            Bit mask of TYPE field.*/

/* LEN @Bits 16..31 : Length of the key in bits. */
  #define SICR_AROT_APPLICATION_AUTHDEBUGKEY_ATTR_LEN_Pos (16UL) /*!< Position of LEN field.                                   */
  #define SICR_AROT_APPLICATION_AUTHDEBUGKEY_ATTR_LEN_Msk (0xFFFFUL << SICR_AROT_APPLICATION_AUTHDEBUGKEY_ATTR_LEN_Pos) /*!< Bit
                                                                            mask of LEN field.*/


/* SICR_AROT_APPLICATION_AUTHDEBUGKEY_PUBKEY: The local domain authenticated debug access public key generation [n]. */
  #define SICR_AROT_APPLICATION_AUTHDEBUGKEY_PUBKEY_MaxCount (16UL) /*!< Max size of PUBKEY[16] array.                         */
  #define SICR_AROT_APPLICATION_AUTHDEBUGKEY_PUBKEY_MaxIndex (15UL) /*!< Max index of PUBKEY[16] array.                        */
  #define SICR_AROT_APPLICATION_AUTHDEBUGKEY_PUBKEY_MinIndex (0UL) /*!< Min index of PUBKEY[16] array.                         */

/* VALUE @Bits 0..31 : Value for word [o] in the key value [n]. */
  #define SICR_AROT_APPLICATION_AUTHDEBUGKEY_PUBKEY_VALUE_Pos (0UL) /*!< Position of VALUE field.                              */
  #define SICR_AROT_APPLICATION_AUTHDEBUGKEY_PUBKEY_VALUE_Msk (0xFFFFFFFFUL << SICR_AROT_APPLICATION_AUTHDEBUGKEY_PUBKEY_VALUE_Pos)
                                                                            /*!< Bit mask of VALUE field.*/


/* SICR_AROT_APPLICATION_AUTHDEBUGKEY_MAC: The authentication tag of the local domain authenticated debug access public key
                                            generation [n]. */

  #define SICR_AROT_APPLICATION_AUTHDEBUGKEY_MAC_MaxCount (4UL) /*!< Max size of MAC[4] array.                                 */
  #define SICR_AROT_APPLICATION_AUTHDEBUGKEY_MAC_MaxIndex (3UL) /*!< Max index of MAC[4] array.                                */
  #define SICR_AROT_APPLICATION_AUTHDEBUGKEY_MAC_MinIndex (0UL) /*!< Min index of MAC[4] array.                                */

/* VALUE @Bits 0..31 : The word [o] of the authentication tag. */
  #define SICR_AROT_APPLICATION_AUTHDEBUGKEY_MAC_VALUE_Pos (0UL) /*!< Position of VALUE field.                                 */
  #define SICR_AROT_APPLICATION_AUTHDEBUGKEY_MAC_VALUE_Msk (0xFFFFFFFFUL << SICR_AROT_APPLICATION_AUTHDEBUGKEY_MAC_VALUE_Pos)
                                                                            /*!< Bit mask of VALUE field.*/


/* SICR_AROT_APPLICATION_AUTHDEBUGKEY_RFU: (unspecified) */
  #define SICR_AROT_APPLICATION_AUTHDEBUGKEY_RFU_MaxCount (2UL) /*!< Max size of RFU[2] array.                                 */
  #define SICR_AROT_APPLICATION_AUTHDEBUGKEY_RFU_MaxIndex (1UL) /*!< Max index of RFU[2] array.                                */
  #define SICR_AROT_APPLICATION_AUTHDEBUGKEY_RFU_MinIndex (0UL) /*!< Min index of RFU[2] array.                                */

/* VALUE @Bits 0..31 : RFU word [o]. */
  #define SICR_AROT_APPLICATION_AUTHDEBUGKEY_RFU_VALUE_Pos (0UL) /*!< Position of VALUE field.                                 */
  #define SICR_AROT_APPLICATION_AUTHDEBUGKEY_RFU_VALUE_Msk (0xFFFFFFFFUL << SICR_AROT_APPLICATION_AUTHDEBUGKEY_RFU_VALUE_Pos)
                                                                            /*!< Bit mask of VALUE field.*/



/* ========================================= Struct SICR_AROT_APPLICATION_SUITPUBKEY ========================================= */
/**
  * @brief SUITPUBKEY [SICR_AROT_APPLICATION_SUITPUBKEY] Public key used by the local domain SUIT manifest. The public key is
            stored as additional authenticated data (AAD) in unencrypted form using an AEAD scheme realized by AES-256 GCM mode,
            with the local domain KEK used as a secret key. The initialization vector is provided in NONCE register. Key
            attributes from ATTR register shall be used as an additional authenticated data (AAD) in AEAD. The content of PUBKEY
            registers shall be used as an additional authenticated data (AAD) in AEAD.

  */
typedef struct {
  __IOM uint32_t  NONCE;                             /*!< (@ 0x00000000) The initialization vector of the encryption algorithm
                                                                         used to protect the local domain SUIT manifest public
                                                                         key generation [n].*/
  __IOM uint32_t  ATTR;                              /*!< (@ 0x00000004) The attributes of the local domain firmware master
                                                                         encryption key generation [n]. This field is used as an
                                                                         additional authenticated data (AAD) in AEAD.*/
  __IOM uint32_t  PUBKEY[16];                        /*!< (@ 0x00000008) The local domain SUIT manifest public key generation
                                                                         [n].*/
  __IOM uint32_t  MAC[4];                            /*!< (@ 0x00000048) The authentication tag of the local domain SUIT
                                                                         manifest public key generation [n].*/
  __IOM uint32_t  RFU[2];                            /*!< (@ 0x00000058) (unspecified)                                         */
} NRF_SICR_AROT_APPLICATION_SUITPUBKEY_Type;         /*!< Size = 96 (0x060)                                                    */
  #define SICR_AROT_APPLICATION_SUITPUBKEY_MaxCount (3UL) /*!< Size of SUITPUBKEY[3] array.                                    */
  #define SICR_AROT_APPLICATION_SUITPUBKEY_MaxIndex (2UL) /*!< Max index of SUITPUBKEY[3] array.                               */
  #define SICR_AROT_APPLICATION_SUITPUBKEY_MinIndex (0UL) /*!< Min index of SUITPUBKEY[3] array.                               */

/* SICR_AROT_APPLICATION_SUITPUBKEY_NONCE: The initialization vector of the encryption algorithm used to protect the local
                                            domain SUIT manifest public key generation [n]. */


/* VALUE @Bits 0..31 : Value of nonce used by AEAD. */
  #define SICR_AROT_APPLICATION_SUITPUBKEY_NONCE_VALUE_Pos (0UL) /*!< Position of VALUE field.                                 */
  #define SICR_AROT_APPLICATION_SUITPUBKEY_NONCE_VALUE_Msk (0xFFFFFFFFUL << SICR_AROT_APPLICATION_SUITPUBKEY_NONCE_VALUE_Pos)
                                                                            /*!< Bit mask of VALUE field.*/


/* SICR_AROT_APPLICATION_SUITPUBKEY_ATTR: The attributes of the local domain firmware master encryption key generation [n]. This
                                           field is used as an additional authenticated data (AAD) in AEAD. */


/* TYPE @Bits 0..15 : Type of the key. This field should follow the key type encoding from PSA Crypto API v1.2.1. */
  #define SICR_AROT_APPLICATION_SUITPUBKEY_ATTR_TYPE_Pos (0UL) /*!< Position of TYPE field.                                    */
  #define SICR_AROT_APPLICATION_SUITPUBKEY_ATTR_TYPE_Msk (0xFFFFUL << SICR_AROT_APPLICATION_SUITPUBKEY_ATTR_TYPE_Pos) /*!< Bit
                                                                            mask of TYPE field.*/

/* LEN @Bits 16..31 : Length of the key in bits. */
  #define SICR_AROT_APPLICATION_SUITPUBKEY_ATTR_LEN_Pos (16UL) /*!< Position of LEN field.                                     */
  #define SICR_AROT_APPLICATION_SUITPUBKEY_ATTR_LEN_Msk (0xFFFFUL << SICR_AROT_APPLICATION_SUITPUBKEY_ATTR_LEN_Pos) /*!< Bit
                                                                            mask of LEN field.*/


/* SICR_AROT_APPLICATION_SUITPUBKEY_PUBKEY: The local domain SUIT manifest public key generation [n]. */
  #define SICR_AROT_APPLICATION_SUITPUBKEY_PUBKEY_MaxCount (16UL) /*!< Max size of PUBKEY[16] array.                           */
  #define SICR_AROT_APPLICATION_SUITPUBKEY_PUBKEY_MaxIndex (15UL) /*!< Max index of PUBKEY[16] array.                          */
  #define SICR_AROT_APPLICATION_SUITPUBKEY_PUBKEY_MinIndex (0UL) /*!< Min index of PUBKEY[16] array.                           */

/* VALUE @Bits 0..31 : Value for word [o] in the key value [n]. */
  #define SICR_AROT_APPLICATION_SUITPUBKEY_PUBKEY_VALUE_Pos (0UL) /*!< Position of VALUE field.                                */
  #define SICR_AROT_APPLICATION_SUITPUBKEY_PUBKEY_VALUE_Msk (0xFFFFFFFFUL << SICR_AROT_APPLICATION_SUITPUBKEY_PUBKEY_VALUE_Pos)
                                                                            /*!< Bit mask of VALUE field.*/


/* SICR_AROT_APPLICATION_SUITPUBKEY_MAC: The authentication tag of the local domain SUIT manifest public key generation [n]. */
  #define SICR_AROT_APPLICATION_SUITPUBKEY_MAC_MaxCount (4UL) /*!< Max size of MAC[4] array.                                   */
  #define SICR_AROT_APPLICATION_SUITPUBKEY_MAC_MaxIndex (3UL) /*!< Max index of MAC[4] array.                                  */
  #define SICR_AROT_APPLICATION_SUITPUBKEY_MAC_MinIndex (0UL) /*!< Min index of MAC[4] array.                                  */

/* VALUE @Bits 0..31 : The word [o] of the authentication tag. */
  #define SICR_AROT_APPLICATION_SUITPUBKEY_MAC_VALUE_Pos (0UL) /*!< Position of VALUE field.                                   */
  #define SICR_AROT_APPLICATION_SUITPUBKEY_MAC_VALUE_Msk (0xFFFFFFFFUL << SICR_AROT_APPLICATION_SUITPUBKEY_MAC_VALUE_Pos) /*!<
                                                                            Bit mask of VALUE field.*/


/* SICR_AROT_APPLICATION_SUITPUBKEY_RFU: (unspecified) */
  #define SICR_AROT_APPLICATION_SUITPUBKEY_RFU_MaxCount (2UL) /*!< Max size of RFU[2] array.                                   */
  #define SICR_AROT_APPLICATION_SUITPUBKEY_RFU_MaxIndex (1UL) /*!< Max index of RFU[2] array.                                  */
  #define SICR_AROT_APPLICATION_SUITPUBKEY_RFU_MinIndex (0UL) /*!< Min index of RFU[2] array.                                  */

/* VALUE @Bits 0..31 : RFU word [o]. */
  #define SICR_AROT_APPLICATION_SUITPUBKEY_RFU_VALUE_Pos (0UL) /*!< Position of VALUE field.                                   */
  #define SICR_AROT_APPLICATION_SUITPUBKEY_RFU_VALUE_Msk (0xFFFFFFFFUL << SICR_AROT_APPLICATION_SUITPUBKEY_RFU_VALUE_Pos) /*!<
                                                                            Bit mask of VALUE field.*/



/* ==================================== Struct SICR_AROT_APPLICATION_DATAPROTECTION_UICR ===================================== */
/**
  * @brief UICR [SICR_AROT_APPLICATION_DATAPROTECTION_UICR] Authentication tag used for validation of the content of the UICRs.
            The UICRs content provides information about a domain peripherals associations and memory layout configuration. It
            is stored in an unencrypted form in a dedicated memory location. A validation shall be performed using an AEAD
            scheme realized by AES-256 GCM mode, with the domain KEK used as a secret key and UICR content used as additional
            authenticated data (AAD). The initialization vector is provided in NONCE register.

  */
typedef struct {
  __IOM uint32_t  NONCE;                             /*!< (@ 0x00000000) The initialization vector of the encryption algorithm
                                                                         used to protect the domain UICRs content.*/
  __IOM uint32_t  MAC[4];                            /*!< (@ 0x00000004) The authentication tag of the domain UICRs.           */
  __IOM uint32_t  RFU[3];                            /*!< (@ 0x00000014) (unspecified)                                         */
} NRF_SICR_AROT_APPLICATION_DATAPROTECTION_UICR_Type; /*!< Size = 32 (0x020)                                                   */

/* SICR_AROT_APPLICATION_DATAPROTECTION_UICR_NONCE: The initialization vector of the encryption algorithm used to protect the
                                                     domain UICRs content. */


/* VALUE @Bits 0..31 : Value of nonce used by AEAD. */
  #define SICR_AROT_APPLICATION_DATAPROTECTION_UICR_NONCE_VALUE_Pos (0UL) /*!< Position of VALUE field.                        */
  #define SICR_AROT_APPLICATION_DATAPROTECTION_UICR_NONCE_VALUE_Msk (0xFFFFFFFFUL << SICR_AROT_APPLICATION_DATAPROTECTION_UICR_NONCE_VALUE_Pos)
                                                                            /*!< Bit mask of VALUE field.*/


/* SICR_AROT_APPLICATION_DATAPROTECTION_UICR_MAC: The authentication tag of the domain UICRs. */
  #define SICR_AROT_APPLICATION_DATAPROTECTION_UICR_MAC_MaxCount (4UL) /*!< Max size of MAC[4] array.                          */
  #define SICR_AROT_APPLICATION_DATAPROTECTION_UICR_MAC_MaxIndex (3UL) /*!< Max index of MAC[4] array.                         */
  #define SICR_AROT_APPLICATION_DATAPROTECTION_UICR_MAC_MinIndex (0UL) /*!< Min index of MAC[4] array.                         */

/* VALUE @Bits 0..31 : The word [n] of the authentication tag. */
  #define SICR_AROT_APPLICATION_DATAPROTECTION_UICR_MAC_VALUE_Pos (0UL) /*!< Position of VALUE field.                          */
  #define SICR_AROT_APPLICATION_DATAPROTECTION_UICR_MAC_VALUE_Msk (0xFFFFFFFFUL << SICR_AROT_APPLICATION_DATAPROTECTION_UICR_MAC_VALUE_Pos)
                                                                            /*!< Bit mask of VALUE field.*/


/* SICR_AROT_APPLICATION_DATAPROTECTION_UICR_RFU: (unspecified) */
  #define SICR_AROT_APPLICATION_DATAPROTECTION_UICR_RFU_MaxCount (3UL) /*!< Max size of RFU[3] array.                          */
  #define SICR_AROT_APPLICATION_DATAPROTECTION_UICR_RFU_MaxIndex (2UL) /*!< Max index of RFU[3] array.                         */
  #define SICR_AROT_APPLICATION_DATAPROTECTION_UICR_RFU_MinIndex (0UL) /*!< Min index of RFU[3] array.                         */

/* VALUE @Bits 0..31 : RFU word [n]. */
  #define SICR_AROT_APPLICATION_DATAPROTECTION_UICR_RFU_VALUE_Pos (0UL) /*!< Position of VALUE field.                          */
  #define SICR_AROT_APPLICATION_DATAPROTECTION_UICR_RFU_VALUE_Msk (0xFFFFFFFFUL << SICR_AROT_APPLICATION_DATAPROTECTION_UICR_RFU_VALUE_Pos)
                                                                            /*!< Bit mask of VALUE field.*/



/* ======================================= Struct SICR_AROT_APPLICATION_DATAPROTECTION ======================================= */
/**
  * @brief DATAPROTECTION [SICR_AROT_APPLICATION_DATAPROTECTION] Elements used for validation of data provisioned onto a device
            by the local domain.

  */
typedef struct {
  __IOM NRF_SICR_AROT_APPLICATION_DATAPROTECTION_UICR_Type UICR; /*!< (@ 0x00000000) Authentication tag used for validation of
                                                                            the content of the UICRs. The UICRs content provides
                                                                            information about a domain peripherals associations
                                                                            and memory layout configuration. It is stored in an
                                                                            unencrypted form in a dedicated memory location. A
                                                                            validation shall be performed using an AEAD scheme
                                                                            realized by AES-256 GCM mode, with the domain KEK
                                                                            used as a secret key and UICR content used as
                                                                            additional authenticated data (AAD). The
                                                                            initialization vector is provided in NONCE
                                                                            register.*/
} NRF_SICR_AROT_APPLICATION_DATAPROTECTION_Type;     /*!< Size = 32 (0x020)                                                    */


/* ======================================== Struct SICR_AROT_APPLICATION_DOMAINSTATE ========================================= */
/**
  * @brief DOMAINSTATE [SICR_AROT_APPLICATION_DOMAINSTATE] Registers holding the information regarding the local domain state.
  */
typedef struct {
  __IOM uint32_t  RFU[3];                            /*!< (@ 0x00000000) (unspecified)                                         */
  __IOM uint32_t  LCS;                               /*!< (@ 0x0000000C) The local domain lifecycle state as determined by the
                                                                         URoT.*/
} NRF_SICR_AROT_APPLICATION_DOMAINSTATE_Type;        /*!< Size = 16 (0x010)                                                    */

/* SICR_AROT_APPLICATION_DOMAINSTATE_RFU: (unspecified) */
  #define SICR_AROT_APPLICATION_DOMAINSTATE_RFU_MaxCount (3UL) /*!< Max size of RFU[3] array.                                  */
  #define SICR_AROT_APPLICATION_DOMAINSTATE_RFU_MaxIndex (2UL) /*!< Max index of RFU[3] array.                                 */
  #define SICR_AROT_APPLICATION_DOMAINSTATE_RFU_MinIndex (0UL) /*!< Min index of RFU[3] array.                                 */

/* VALUE @Bits 0..31 : RFU word [n]. */
  #define SICR_AROT_APPLICATION_DOMAINSTATE_RFU_VALUE_Pos (0UL) /*!< Position of VALUE field.                                  */
  #define SICR_AROT_APPLICATION_DOMAINSTATE_RFU_VALUE_Msk (0xFFFFFFFFUL << SICR_AROT_APPLICATION_DOMAINSTATE_RFU_VALUE_Pos) /*!<
                                                                            Bit mask of VALUE field.*/


/* SICR_AROT_APPLICATION_DOMAINSTATE_LCS: The local domain lifecycle state as determined by the URoT. */

/* STATE @Bits 0..31 : The local domain lifecycle state. */
  #define SICR_AROT_APPLICATION_DOMAINSTATE_LCS_STATE_Pos (0UL) /*!< Position of STATE field.                                  */
  #define SICR_AROT_APPLICATION_DOMAINSTATE_LCS_STATE_Msk (0xFFFFFFFFUL << SICR_AROT_APPLICATION_DOMAINSTATE_LCS_STATE_Pos) /*!<
                                                                            Bit mask of STATE field.*/
  #define SICR_AROT_APPLICATION_DOMAINSTATE_LCS_STATE_Min (0x3590FCC5UL) /*!< Min enumerator value of STATE field.             */
  #define SICR_AROT_APPLICATION_DOMAINSTATE_LCS_STATE_Max (0xF6852179UL) /*!< Max enumerator value of STATE field.             */
  #define SICR_AROT_APPLICATION_DOMAINSTATE_LCS_STATE_AssemblyAndTest (0x3590FCC5UL) /*!< The local domain assets are installed
                                                                            in this state. This includes the optional local
                                                                            domain ARoT (its secure program).*/
  #define SICR_AROT_APPLICATION_DOMAINSTATE_LCS_STATE_ARoTProvisioning (0xF6852179UL) /*!< The optional local domain ARoT is
                                                                            provisioned in this state.*/
  #define SICR_AROT_APPLICATION_DOMAINSTATE_LCS_STATE_Secured (0x9F6B5F01UL) /*!< The local domain assets are provisioned and
                                                                            secured.*/



/* ============================================== Struct SICR_AROT_APPLICATION =============================================== */
/**
  * @brief APPLICATION [SICR_AROT_APPLICATION] (unspecified)
  */
typedef struct {
  __IOM NRF_SICR_AROT_APPLICATION_FWENC_Type FWENC[2]; /*!< (@ 0x00000000) Local domain firmware master encryption key. The key
                                                                           is stored in an encrypted then authenticated form
                                                                           using an AEAD scheme realized by AES-256 GCM mode,
                                                                           with the local domain KEK used as a secret key. The
                                                                           initialization vector is provided in NONCE register.
                                                                           Key attributes from ATTR register shall be used as an
                                                                           additional authenticated data (AAD) in AEAD.*/
  __IOM NRF_SICR_AROT_APPLICATION_AUTHDEBUGKEY_Type AUTHDEBUGKEY[3]; /*!< (@ 0x00000080) Local domain authenticated debug access
                                                                            public key. The public key is stored as additional
                                                                            authenticated data (AAD) in unencrypted form using
                                                                            an AEAD scheme realized by AES-256 GCM mode, with
                                                                            the local domain KEK used as a secret key. The
                                                                            initialization vector is provided in NONCE register.
                                                                            Key attributes from ATTR register shall be used as
                                                                            an additional authenticated data (AAD) in AEAD. The
                                                                            content of PUBKEY registers shall be used as an
                                                                            additional authenticated data (AAD) in AEAD.*/
  __IOM NRF_SICR_AROT_APPLICATION_SUITPUBKEY_Type SUITPUBKEY[3]; /*!< (@ 0x000001A0) Public key used by the local domain SUIT
                                                                            manifest. The public key is stored as additional
                                                                            authenticated data (AAD) in unencrypted form using
                                                                            an AEAD scheme realized by AES-256 GCM mode, with
                                                                            the local domain KEK used as a secret key. The
                                                                            initialization vector is provided in NONCE register.
                                                                            Key attributes from ATTR register shall be used as
                                                                            an additional authenticated data (AAD) in AEAD. The
                                                                            content of PUBKEY registers shall be used as an
                                                                            additional authenticated data (AAD) in AEAD.*/
  __IOM NRF_SICR_AROT_APPLICATION_DATAPROTECTION_Type DATAPROTECTION; /*!< (@ 0x000002C0) Elements used for validation of data
                                                                            provisioned onto a device by the local domain.*/
  __IOM NRF_SICR_AROT_APPLICATION_DOMAINSTATE_Type DOMAINSTATE; /*!< (@ 0x000002E0) Registers holding the information regarding
                                                                            the local domain state.*/
  __IM  uint32_t  RESERVED[68];
} NRF_SICR_AROT_APPLICATION_Type_fixed;              /*!< Size = 1024 (0x400)                                                  */


/* ============================================== Struct SICR_AROT_RADIO_FWENC =============================================== */
/**
  * @brief FWENC [SICR_AROT_RADIO_FWENC] Local domain firmware master encryption key. The key is stored in an encrypted then
            authenticated form using an AEAD scheme realized by AES-256 GCM mode, with the local domain KEK used as a secret
            key. The initialization vector is provided in NONCE register. Key attributes from ATTR register shall be used as an
            additional authenticated data (AAD) in AEAD.

  */
typedef struct {
  __IOM uint32_t  NONCE;                             /*!< (@ 0x00000000) The initialization vector of the encryption algorithm
                                                                         used to protect the local domain firmware master
                                                                         encryption key generation [n].*/
  __IOM uint32_t  ATTR;                              /*!< (@ 0x00000004) The attributes of the local domain firmware master
                                                                         encryption key generation [n]. This field is used as an
                                                                         additional authenticated data (AAD) in AEAD.*/
  __IOM uint32_t  CIPHERTEXT[8];                     /*!< (@ 0x00000008) The encrypted local domain firmware master encryption
                                                                         key generation [n].*/
  __IOM uint32_t  MAC[4];                            /*!< (@ 0x00000028) The authentication tag of the local domain firmware
                                                                         master encryption key generation [n].*/
  __IOM uint32_t  RFU[2];                            /*!< (@ 0x00000038) (unspecified)                                         */
} NRF_SICR_AROT_RADIO_FWENC_Type;                    /*!< Size = 64 (0x040)                                                    */
  #define SICR_AROT_RADIO_FWENC_MaxCount (2UL)       /*!< Size of FWENC[2] array.                                              */
  #define SICR_AROT_RADIO_FWENC_MaxIndex (1UL)       /*!< Max index of FWENC[2] array.                                         */
  #define SICR_AROT_RADIO_FWENC_MinIndex (0UL)       /*!< Min index of FWENC[2] array.                                         */

/* SICR_AROT_RADIO_FWENC_NONCE: The initialization vector of the encryption algorithm used to protect the local domain firmware
                                 master encryption key generation [n]. */


/* VALUE @Bits 0..31 : Value of nonce used by AEAD. */
  #define SICR_AROT_RADIO_FWENC_NONCE_VALUE_Pos (0UL) /*!< Position of VALUE field.                                            */
  #define SICR_AROT_RADIO_FWENC_NONCE_VALUE_Msk (0xFFFFFFFFUL << SICR_AROT_RADIO_FWENC_NONCE_VALUE_Pos) /*!< Bit mask of VALUE
                                                                            field.*/


/* SICR_AROT_RADIO_FWENC_ATTR: The attributes of the local domain firmware master encryption key generation [n]. This field is
                                used as an additional authenticated data (AAD) in AEAD. */


/* TYPE @Bits 0..15 : Type of the key. This field should follow the key type encoding from PSA Crypto API v1.2.1. */
  #define SICR_AROT_RADIO_FWENC_ATTR_TYPE_Pos (0UL)  /*!< Position of TYPE field.                                              */
  #define SICR_AROT_RADIO_FWENC_ATTR_TYPE_Msk (0xFFFFUL << SICR_AROT_RADIO_FWENC_ATTR_TYPE_Pos) /*!< Bit mask of TYPE field.   */

/* LEN @Bits 16..31 : Length of the key in bits. */
  #define SICR_AROT_RADIO_FWENC_ATTR_LEN_Pos (16UL)  /*!< Position of LEN field.                                               */
  #define SICR_AROT_RADIO_FWENC_ATTR_LEN_Msk (0xFFFFUL << SICR_AROT_RADIO_FWENC_ATTR_LEN_Pos) /*!< Bit mask of LEN field.      */


/* SICR_AROT_RADIO_FWENC_CIPHERTEXT: The encrypted local domain firmware master encryption key generation [n]. */
  #define SICR_AROT_RADIO_FWENC_CIPHERTEXT_MaxCount (8UL) /*!< Max size of CIPHERTEXT[8] array.                                */
  #define SICR_AROT_RADIO_FWENC_CIPHERTEXT_MaxIndex (7UL) /*!< Max index of CIPHERTEXT[8] array.                               */
  #define SICR_AROT_RADIO_FWENC_CIPHERTEXT_MinIndex (0UL) /*!< Min index of CIPHERTEXT[8] array.                               */

/* VALUE @Bits 0..31 : Value for word [o] in the key value [n]. */
  #define SICR_AROT_RADIO_FWENC_CIPHERTEXT_VALUE_Pos (0UL) /*!< Position of VALUE field.                                       */
  #define SICR_AROT_RADIO_FWENC_CIPHERTEXT_VALUE_Msk (0xFFFFFFFFUL << SICR_AROT_RADIO_FWENC_CIPHERTEXT_VALUE_Pos) /*!< Bit mask
                                                                            of VALUE field.*/


/* SICR_AROT_RADIO_FWENC_MAC: The authentication tag of the local domain firmware master encryption key generation [n]. */
  #define SICR_AROT_RADIO_FWENC_MAC_MaxCount (4UL)   /*!< Max size of MAC[4] array.                                            */
  #define SICR_AROT_RADIO_FWENC_MAC_MaxIndex (3UL)   /*!< Max index of MAC[4] array.                                           */
  #define SICR_AROT_RADIO_FWENC_MAC_MinIndex (0UL)   /*!< Min index of MAC[4] array.                                           */

/* VALUE @Bits 0..31 : The word [o] of the authentication tag. */
  #define SICR_AROT_RADIO_FWENC_MAC_VALUE_Pos (0UL)  /*!< Position of VALUE field.                                             */
  #define SICR_AROT_RADIO_FWENC_MAC_VALUE_Msk (0xFFFFFFFFUL << SICR_AROT_RADIO_FWENC_MAC_VALUE_Pos) /*!< Bit mask of VALUE
                                                                            field.*/


/* SICR_AROT_RADIO_FWENC_RFU: (unspecified) */
  #define SICR_AROT_RADIO_FWENC_RFU_MaxCount (2UL)   /*!< Max size of RFU[2] array.                                            */
  #define SICR_AROT_RADIO_FWENC_RFU_MaxIndex (1UL)   /*!< Max index of RFU[2] array.                                           */
  #define SICR_AROT_RADIO_FWENC_RFU_MinIndex (0UL)   /*!< Min index of RFU[2] array.                                           */

/* VALUE @Bits 0..31 : RFU word [o]. */
  #define SICR_AROT_RADIO_FWENC_RFU_VALUE_Pos (0UL)  /*!< Position of VALUE field.                                             */
  #define SICR_AROT_RADIO_FWENC_RFU_VALUE_Msk (0xFFFFFFFFUL << SICR_AROT_RADIO_FWENC_RFU_VALUE_Pos) /*!< Bit mask of VALUE
                                                                            field.*/



/* =========================================== Struct SICR_AROT_RADIO_AUTHDEBUGKEY =========================================== */
/**
  * @brief AUTHDEBUGKEY [SICR_AROT_RADIO_AUTHDEBUGKEY] Local domain authenticated debug access public key. The public key is
            stored as additional authenticated data (AAD) in unencrypted form using an AEAD scheme realized by AES-256 GCM mode,
            with the local domain KEK used as a secret key. The initialization vector is provided in NONCE register. Key
            attributes from ATTR register shall be used as an additional authenticated data (AAD) in AEAD. The content of PUBKEY
            registers shall be used as an additional authenticated data (AAD) in AEAD.

  */
typedef struct {
  __IOM uint32_t  NONCE;                             /*!< (@ 0x00000000) The initialization vector of the encryption algorithm
                                                                         used to protect the local domain authenticated debug
                                                                         access public key generation [n].*/
  __IOM uint32_t  ATTR;                              /*!< (@ 0x00000004) The attributes of the local domain firmware master
                                                                         encryption key generation [n]. This field is used as an
                                                                         additional authenticated data (AAD) in AEAD.*/
  __IOM uint32_t  PUBKEY[16];                        /*!< (@ 0x00000008) The local domain authenticated debug access public key
                                                                         generation [n].*/
  __IOM uint32_t  MAC[4];                            /*!< (@ 0x00000048) The authentication tag of the local domain
                                                                         authenticated debug access public key generation [n].*/
  __IOM uint32_t  RFU[2];                            /*!< (@ 0x00000058) (unspecified)                                         */
} NRF_SICR_AROT_RADIO_AUTHDEBUGKEY_Type;             /*!< Size = 96 (0x060)                                                    */
  #define SICR_AROT_RADIO_AUTHDEBUGKEY_MaxCount (3UL) /*!< Size of AUTHDEBUGKEY[3] array.                                      */
  #define SICR_AROT_RADIO_AUTHDEBUGKEY_MaxIndex (2UL) /*!< Max index of AUTHDEBUGKEY[3] array.                                 */
  #define SICR_AROT_RADIO_AUTHDEBUGKEY_MinIndex (0UL) /*!< Min index of AUTHDEBUGKEY[3] array.                                 */

/* SICR_AROT_RADIO_AUTHDEBUGKEY_NONCE: The initialization vector of the encryption algorithm used to protect the local domain
                                        authenticated debug access public key generation [n]. */


/* VALUE @Bits 0..31 : Value of nonce used by AEAD. */
  #define SICR_AROT_RADIO_AUTHDEBUGKEY_NONCE_VALUE_Pos (0UL) /*!< Position of VALUE field.                                     */
  #define SICR_AROT_RADIO_AUTHDEBUGKEY_NONCE_VALUE_Msk (0xFFFFFFFFUL << SICR_AROT_RADIO_AUTHDEBUGKEY_NONCE_VALUE_Pos) /*!< Bit
                                                                            mask of VALUE field.*/


/* SICR_AROT_RADIO_AUTHDEBUGKEY_ATTR: The attributes of the local domain firmware master encryption key generation [n]. This
                                       field is used as an additional authenticated data (AAD) in AEAD. */


/* TYPE @Bits 0..15 : Type of the key. This field should follow the key type encoding from PSA Crypto API v1.2.1. */
  #define SICR_AROT_RADIO_AUTHDEBUGKEY_ATTR_TYPE_Pos (0UL) /*!< Position of TYPE field.                                        */
  #define SICR_AROT_RADIO_AUTHDEBUGKEY_ATTR_TYPE_Msk (0xFFFFUL << SICR_AROT_RADIO_AUTHDEBUGKEY_ATTR_TYPE_Pos) /*!< Bit mask of
                                                                            TYPE field.*/

/* LEN @Bits 16..31 : Length of the key in bits. */
  #define SICR_AROT_RADIO_AUTHDEBUGKEY_ATTR_LEN_Pos (16UL) /*!< Position of LEN field.                                         */
  #define SICR_AROT_RADIO_AUTHDEBUGKEY_ATTR_LEN_Msk (0xFFFFUL << SICR_AROT_RADIO_AUTHDEBUGKEY_ATTR_LEN_Pos) /*!< Bit mask of LEN
                                                                            field.*/


/* SICR_AROT_RADIO_AUTHDEBUGKEY_PUBKEY: The local domain authenticated debug access public key generation [n]. */
  #define SICR_AROT_RADIO_AUTHDEBUGKEY_PUBKEY_MaxCount (16UL) /*!< Max size of PUBKEY[16] array.                               */
  #define SICR_AROT_RADIO_AUTHDEBUGKEY_PUBKEY_MaxIndex (15UL) /*!< Max index of PUBKEY[16] array.                              */
  #define SICR_AROT_RADIO_AUTHDEBUGKEY_PUBKEY_MinIndex (0UL) /*!< Min index of PUBKEY[16] array.                               */

/* VALUE @Bits 0..31 : Value for word [o] in the key value [n]. */
  #define SICR_AROT_RADIO_AUTHDEBUGKEY_PUBKEY_VALUE_Pos (0UL) /*!< Position of VALUE field.                                    */
  #define SICR_AROT_RADIO_AUTHDEBUGKEY_PUBKEY_VALUE_Msk (0xFFFFFFFFUL << SICR_AROT_RADIO_AUTHDEBUGKEY_PUBKEY_VALUE_Pos) /*!< Bit
                                                                            mask of VALUE field.*/


/* SICR_AROT_RADIO_AUTHDEBUGKEY_MAC: The authentication tag of the local domain authenticated debug access public key generation
                                      [n]. */

  #define SICR_AROT_RADIO_AUTHDEBUGKEY_MAC_MaxCount (4UL) /*!< Max size of MAC[4] array.                                       */
  #define SICR_AROT_RADIO_AUTHDEBUGKEY_MAC_MaxIndex (3UL) /*!< Max index of MAC[4] array.                                      */
  #define SICR_AROT_RADIO_AUTHDEBUGKEY_MAC_MinIndex (0UL) /*!< Min index of MAC[4] array.                                      */

/* VALUE @Bits 0..31 : The word [o] of the authentication tag. */
  #define SICR_AROT_RADIO_AUTHDEBUGKEY_MAC_VALUE_Pos (0UL) /*!< Position of VALUE field.                                       */
  #define SICR_AROT_RADIO_AUTHDEBUGKEY_MAC_VALUE_Msk (0xFFFFFFFFUL << SICR_AROT_RADIO_AUTHDEBUGKEY_MAC_VALUE_Pos) /*!< Bit mask
                                                                            of VALUE field.*/


/* SICR_AROT_RADIO_AUTHDEBUGKEY_RFU: (unspecified) */
  #define SICR_AROT_RADIO_AUTHDEBUGKEY_RFU_MaxCount (2UL) /*!< Max size of RFU[2] array.                                       */
  #define SICR_AROT_RADIO_AUTHDEBUGKEY_RFU_MaxIndex (1UL) /*!< Max index of RFU[2] array.                                      */
  #define SICR_AROT_RADIO_AUTHDEBUGKEY_RFU_MinIndex (0UL) /*!< Min index of RFU[2] array.                                      */

/* VALUE @Bits 0..31 : RFU word [o]. */
  #define SICR_AROT_RADIO_AUTHDEBUGKEY_RFU_VALUE_Pos (0UL) /*!< Position of VALUE field.                                       */
  #define SICR_AROT_RADIO_AUTHDEBUGKEY_RFU_VALUE_Msk (0xFFFFFFFFUL << SICR_AROT_RADIO_AUTHDEBUGKEY_RFU_VALUE_Pos) /*!< Bit mask
                                                                            of VALUE field.*/



/* ============================================ Struct SICR_AROT_RADIO_SUITPUBKEY ============================================ */
/**
  * @brief SUITPUBKEY [SICR_AROT_RADIO_SUITPUBKEY] Public key used by the local domain SUIT manifest. The public key is stored
            as additional authenticated data (AAD) in unencrypted form using an AEAD scheme realized by AES-256 GCM mode, with
            the local domain KEK used as a secret key. The initialization vector is provided in NONCE register. Key attributes
            from ATTR register shall be used as an additional authenticated data (AAD) in AEAD. The content of PUBKEY registers
            shall be used as an additional authenticated data (AAD) in AEAD.

  */
typedef struct {
  __IOM uint32_t  NONCE;                             /*!< (@ 0x00000000) The initialization vector of the encryption algorithm
                                                                         used to protect the local domain SUIT manifest public
                                                                         key generation [n].*/
  __IOM uint32_t  ATTR;                              /*!< (@ 0x00000004) The attributes of the local domain firmware master
                                                                         encryption key generation [n]. This field is used as an
                                                                         additional authenticated data (AAD) in AEAD.*/
  __IOM uint32_t  PUBKEY[16];                        /*!< (@ 0x00000008) The local domain SUIT manifest public key generation
                                                                         [n].*/
  __IOM uint32_t  MAC[4];                            /*!< (@ 0x00000048) The authentication tag of the local domain SUIT
                                                                         manifest public key generation [n].*/
  __IOM uint32_t  RFU[2];                            /*!< (@ 0x00000058) (unspecified)                                         */
} NRF_SICR_AROT_RADIO_SUITPUBKEY_Type;               /*!< Size = 96 (0x060)                                                    */
  #define SICR_AROT_RADIO_SUITPUBKEY_MaxCount (3UL)  /*!< Size of SUITPUBKEY[3] array.                                         */
  #define SICR_AROT_RADIO_SUITPUBKEY_MaxIndex (2UL)  /*!< Max index of SUITPUBKEY[3] array.                                    */
  #define SICR_AROT_RADIO_SUITPUBKEY_MinIndex (0UL)  /*!< Min index of SUITPUBKEY[3] array.                                    */

/* SICR_AROT_RADIO_SUITPUBKEY_NONCE: The initialization vector of the encryption algorithm used to protect the local domain SUIT
                                      manifest public key generation [n]. */


/* VALUE @Bits 0..31 : Value of nonce used by AEAD. */
  #define SICR_AROT_RADIO_SUITPUBKEY_NONCE_VALUE_Pos (0UL) /*!< Position of VALUE field.                                       */
  #define SICR_AROT_RADIO_SUITPUBKEY_NONCE_VALUE_Msk (0xFFFFFFFFUL << SICR_AROT_RADIO_SUITPUBKEY_NONCE_VALUE_Pos) /*!< Bit mask
                                                                            of VALUE field.*/


/* SICR_AROT_RADIO_SUITPUBKEY_ATTR: The attributes of the local domain firmware master encryption key generation [n]. This field
                                     is used as an additional authenticated data (AAD) in AEAD. */


/* TYPE @Bits 0..15 : Type of the key. This field should follow the key type encoding from PSA Crypto API v1.2.1. */
  #define SICR_AROT_RADIO_SUITPUBKEY_ATTR_TYPE_Pos (0UL) /*!< Position of TYPE field.                                          */
  #define SICR_AROT_RADIO_SUITPUBKEY_ATTR_TYPE_Msk (0xFFFFUL << SICR_AROT_RADIO_SUITPUBKEY_ATTR_TYPE_Pos) /*!< Bit mask of TYPE
                                                                            field.*/

/* LEN @Bits 16..31 : Length of the key in bits. */
  #define SICR_AROT_RADIO_SUITPUBKEY_ATTR_LEN_Pos (16UL) /*!< Position of LEN field.                                           */
  #define SICR_AROT_RADIO_SUITPUBKEY_ATTR_LEN_Msk (0xFFFFUL << SICR_AROT_RADIO_SUITPUBKEY_ATTR_LEN_Pos) /*!< Bit mask of LEN
                                                                            field.*/


/* SICR_AROT_RADIO_SUITPUBKEY_PUBKEY: The local domain SUIT manifest public key generation [n]. */
  #define SICR_AROT_RADIO_SUITPUBKEY_PUBKEY_MaxCount (16UL) /*!< Max size of PUBKEY[16] array.                                 */
  #define SICR_AROT_RADIO_SUITPUBKEY_PUBKEY_MaxIndex (15UL) /*!< Max index of PUBKEY[16] array.                                */
  #define SICR_AROT_RADIO_SUITPUBKEY_PUBKEY_MinIndex (0UL) /*!< Min index of PUBKEY[16] array.                                 */

/* VALUE @Bits 0..31 : Value for word [o] in the key value [n]. */
  #define SICR_AROT_RADIO_SUITPUBKEY_PUBKEY_VALUE_Pos (0UL) /*!< Position of VALUE field.                                      */
  #define SICR_AROT_RADIO_SUITPUBKEY_PUBKEY_VALUE_Msk (0xFFFFFFFFUL << SICR_AROT_RADIO_SUITPUBKEY_PUBKEY_VALUE_Pos) /*!< Bit
                                                                            mask of VALUE field.*/


/* SICR_AROT_RADIO_SUITPUBKEY_MAC: The authentication tag of the local domain SUIT manifest public key generation [n]. */
  #define SICR_AROT_RADIO_SUITPUBKEY_MAC_MaxCount (4UL) /*!< Max size of MAC[4] array.                                         */
  #define SICR_AROT_RADIO_SUITPUBKEY_MAC_MaxIndex (3UL) /*!< Max index of MAC[4] array.                                        */
  #define SICR_AROT_RADIO_SUITPUBKEY_MAC_MinIndex (0UL) /*!< Min index of MAC[4] array.                                        */

/* VALUE @Bits 0..31 : The word [o] of the authentication tag. */
  #define SICR_AROT_RADIO_SUITPUBKEY_MAC_VALUE_Pos (0UL) /*!< Position of VALUE field.                                         */
  #define SICR_AROT_RADIO_SUITPUBKEY_MAC_VALUE_Msk (0xFFFFFFFFUL << SICR_AROT_RADIO_SUITPUBKEY_MAC_VALUE_Pos) /*!< Bit mask of
                                                                            VALUE field.*/


/* SICR_AROT_RADIO_SUITPUBKEY_RFU: (unspecified) */
  #define SICR_AROT_RADIO_SUITPUBKEY_RFU_MaxCount (2UL) /*!< Max size of RFU[2] array.                                         */
  #define SICR_AROT_RADIO_SUITPUBKEY_RFU_MaxIndex (1UL) /*!< Max index of RFU[2] array.                                        */
  #define SICR_AROT_RADIO_SUITPUBKEY_RFU_MinIndex (0UL) /*!< Min index of RFU[2] array.                                        */

/* VALUE @Bits 0..31 : RFU word [o]. */
  #define SICR_AROT_RADIO_SUITPUBKEY_RFU_VALUE_Pos (0UL) /*!< Position of VALUE field.                                         */
  #define SICR_AROT_RADIO_SUITPUBKEY_RFU_VALUE_Msk (0xFFFFFFFFUL << SICR_AROT_RADIO_SUITPUBKEY_RFU_VALUE_Pos) /*!< Bit mask of
                                                                            VALUE field.*/



/* ======================================= Struct SICR_AROT_RADIO_DATAPROTECTION_UICR ======================================== */
/**
  * @brief UICR [SICR_AROT_RADIO_DATAPROTECTION_UICR] Authentication tag used for validation of the content of the UICRs. The
            UICRs content provides information about a domain peripherals associations and memory layout configuration. It is
            stored in an unencrypted form in a dedicated memory location. A validation shall be performed using an AEAD scheme
            realized by AES-256 GCM mode, with the domain KEK used as a secret key and UICR content used as additional
            authenticated data (AAD). The initialization vector is provided in NONCE register.

  */
typedef struct {
  __IOM uint32_t  NONCE;                             /*!< (@ 0x00000000) The initialization vector of the encryption algorithm
                                                                         used to protect the domain UICRs content.*/
  __IOM uint32_t  MAC[4];                            /*!< (@ 0x00000004) The authentication tag of the domain UICRs.           */
  __IOM uint32_t  RFU[3];                            /*!< (@ 0x00000014) (unspecified)                                         */
} NRF_SICR_AROT_RADIO_DATAPROTECTION_UICR_Type;      /*!< Size = 32 (0x020)                                                    */

/* SICR_AROT_RADIO_DATAPROTECTION_UICR_NONCE: The initialization vector of the encryption algorithm used to protect the domain
                                               UICRs content. */


/* VALUE @Bits 0..31 : Value of nonce used by AEAD. */
  #define SICR_AROT_RADIO_DATAPROTECTION_UICR_NONCE_VALUE_Pos (0UL) /*!< Position of VALUE field.                              */
  #define SICR_AROT_RADIO_DATAPROTECTION_UICR_NONCE_VALUE_Msk (0xFFFFFFFFUL << SICR_AROT_RADIO_DATAPROTECTION_UICR_NONCE_VALUE_Pos)
                                                                            /*!< Bit mask of VALUE field.*/


/* SICR_AROT_RADIO_DATAPROTECTION_UICR_MAC: The authentication tag of the domain UICRs. */
  #define SICR_AROT_RADIO_DATAPROTECTION_UICR_MAC_MaxCount (4UL) /*!< Max size of MAC[4] array.                                */
  #define SICR_AROT_RADIO_DATAPROTECTION_UICR_MAC_MaxIndex (3UL) /*!< Max index of MAC[4] array.                               */
  #define SICR_AROT_RADIO_DATAPROTECTION_UICR_MAC_MinIndex (0UL) /*!< Min index of MAC[4] array.                               */

/* VALUE @Bits 0..31 : The word [n] of the authentication tag. */
  #define SICR_AROT_RADIO_DATAPROTECTION_UICR_MAC_VALUE_Pos (0UL) /*!< Position of VALUE field.                                */
  #define SICR_AROT_RADIO_DATAPROTECTION_UICR_MAC_VALUE_Msk (0xFFFFFFFFUL << SICR_AROT_RADIO_DATAPROTECTION_UICR_MAC_VALUE_Pos)
                                                                            /*!< Bit mask of VALUE field.*/


/* SICR_AROT_RADIO_DATAPROTECTION_UICR_RFU: (unspecified) */
  #define SICR_AROT_RADIO_DATAPROTECTION_UICR_RFU_MaxCount (3UL) /*!< Max size of RFU[3] array.                                */
  #define SICR_AROT_RADIO_DATAPROTECTION_UICR_RFU_MaxIndex (2UL) /*!< Max index of RFU[3] array.                               */
  #define SICR_AROT_RADIO_DATAPROTECTION_UICR_RFU_MinIndex (0UL) /*!< Min index of RFU[3] array.                               */

/* VALUE @Bits 0..31 : RFU word [n]. */
  #define SICR_AROT_RADIO_DATAPROTECTION_UICR_RFU_VALUE_Pos (0UL) /*!< Position of VALUE field.                                */
  #define SICR_AROT_RADIO_DATAPROTECTION_UICR_RFU_VALUE_Msk (0xFFFFFFFFUL << SICR_AROT_RADIO_DATAPROTECTION_UICR_RFU_VALUE_Pos)
                                                                            /*!< Bit mask of VALUE field.*/



/* ========================================== Struct SICR_AROT_RADIO_DATAPROTECTION ========================================== */
/**
  * @brief DATAPROTECTION [SICR_AROT_RADIO_DATAPROTECTION] Elements used for validation of data provisioned onto a device by the
            local domain.

  */
typedef struct {
  __IOM NRF_SICR_AROT_RADIO_DATAPROTECTION_UICR_Type UICR; /*!< (@ 0x00000000) Authentication tag used for validation of the
                                                                            content of the UICRs. The UICRs content provides
                                                                            information about a domain peripherals associations
                                                                            and memory layout configuration. It is stored in an
                                                                            unencrypted form in a dedicated memory location. A
                                                                            validation shall be performed using an AEAD scheme
                                                                            realized by AES-256 GCM mode, with the domain KEK
                                                                            used as a secret key and UICR content used as
                                                                            additional authenticated data (AAD). The
                                                                            initialization vector is provided in NONCE
                                                                            register.*/
} NRF_SICR_AROT_RADIO_DATAPROTECTION_Type;           /*!< Size = 32 (0x020)                                                    */


/* =========================================== Struct SICR_AROT_RADIO_DOMAINSTATE ============================================ */
/**
  * @brief DOMAINSTATE [SICR_AROT_RADIO_DOMAINSTATE] Registers holding the information regarding the local domain state.
  */
typedef struct {
  __IOM uint32_t  RFU[3];                            /*!< (@ 0x00000000) (unspecified)                                         */
  __IOM uint32_t  LCS;                               /*!< (@ 0x0000000C) The local domain lifecycle state as determined by the
                                                                         URoT.*/
} NRF_SICR_AROT_RADIO_DOMAINSTATE_Type;              /*!< Size = 16 (0x010)                                                    */

/* SICR_AROT_RADIO_DOMAINSTATE_RFU: (unspecified) */
  #define SICR_AROT_RADIO_DOMAINSTATE_RFU_MaxCount (3UL) /*!< Max size of RFU[3] array.                                        */
  #define SICR_AROT_RADIO_DOMAINSTATE_RFU_MaxIndex (2UL) /*!< Max index of RFU[3] array.                                       */
  #define SICR_AROT_RADIO_DOMAINSTATE_RFU_MinIndex (0UL) /*!< Min index of RFU[3] array.                                       */

/* VALUE @Bits 0..31 : RFU word [n]. */
  #define SICR_AROT_RADIO_DOMAINSTATE_RFU_VALUE_Pos (0UL) /*!< Position of VALUE field.                                        */
  #define SICR_AROT_RADIO_DOMAINSTATE_RFU_VALUE_Msk (0xFFFFFFFFUL << SICR_AROT_RADIO_DOMAINSTATE_RFU_VALUE_Pos) /*!< Bit mask of
                                                                            VALUE field.*/


/* SICR_AROT_RADIO_DOMAINSTATE_LCS: The local domain lifecycle state as determined by the URoT. */

/* STATE @Bits 0..31 : The local domain lifecycle state. */
  #define SICR_AROT_RADIO_DOMAINSTATE_LCS_STATE_Pos (0UL) /*!< Position of STATE field.                                        */
  #define SICR_AROT_RADIO_DOMAINSTATE_LCS_STATE_Msk (0xFFFFFFFFUL << SICR_AROT_RADIO_DOMAINSTATE_LCS_STATE_Pos) /*!< Bit mask of
                                                                            STATE field.*/
  #define SICR_AROT_RADIO_DOMAINSTATE_LCS_STATE_Min (0x3590FCC5UL) /*!< Min enumerator value of STATE field.                   */
  #define SICR_AROT_RADIO_DOMAINSTATE_LCS_STATE_Max (0xF6852179UL) /*!< Max enumerator value of STATE field.                   */
  #define SICR_AROT_RADIO_DOMAINSTATE_LCS_STATE_AssemblyAndTest (0x3590FCC5UL) /*!< The local domain assets are installed in
                                                                            this state. This includes the optional local domain
                                                                            ARoT (its secure program).*/
  #define SICR_AROT_RADIO_DOMAINSTATE_LCS_STATE_ARoTProvisioning (0xF6852179UL) /*!< The optional local domain ARoT is
                                                                            provisioned in this state.*/
  #define SICR_AROT_RADIO_DOMAINSTATE_LCS_STATE_Secured (0x9F6B5F01UL) /*!< The local domain assets are provisioned and
                                                                            secured.*/



/* ================================================= Struct SICR_AROT_RADIO ================================================== */
/**
  * @brief RADIO [SICR_AROT_RADIO] (unspecified)
  */
typedef struct {
  __IOM NRF_SICR_AROT_RADIO_FWENC_Type FWENC[2];     /*!< (@ 0x00000000) Local domain firmware master encryption key. The key is
                                                                         stored in an encrypted then authenticated form using an
                                                                         AEAD scheme realized by AES-256 GCM mode, with the
                                                                         local domain KEK used as a secret key. The
                                                                         initialization vector is provided in NONCE register.
                                                                         Key attributes from ATTR register shall be used as an
                                                                         additional authenticated data (AAD) in AEAD.*/
  __IOM NRF_SICR_AROT_RADIO_AUTHDEBUGKEY_Type AUTHDEBUGKEY[3]; /*!< (@ 0x00000080) Local domain authenticated debug access
                                                                            public key. The public key is stored as additional
                                                                            authenticated data (AAD) in unencrypted form using
                                                                            an AEAD scheme realized by AES-256 GCM mode, with
                                                                            the local domain KEK used as a secret key. The
                                                                            initialization vector is provided in NONCE register.
                                                                            Key attributes from ATTR register shall be used as
                                                                            an additional authenticated data (AAD) in AEAD. The
                                                                            content of PUBKEY registers shall be used as an
                                                                            additional authenticated data (AAD) in AEAD.*/
  __IOM NRF_SICR_AROT_RADIO_SUITPUBKEY_Type SUITPUBKEY[3]; /*!< (@ 0x000001A0) Public key used by the local domain SUIT
                                                                            manifest. The public key is stored as additional
                                                                            authenticated data (AAD) in unencrypted form using
                                                                            an AEAD scheme realized by AES-256 GCM mode, with
                                                                            the local domain KEK used as a secret key. The
                                                                            initialization vector is provided in NONCE register.
                                                                            Key attributes from ATTR register shall be used as
                                                                            an additional authenticated data (AAD) in AEAD. The
                                                                            content of PUBKEY registers shall be used as an
                                                                            additional authenticated data (AAD) in AEAD.*/
  __IOM NRF_SICR_AROT_RADIO_DATAPROTECTION_Type DATAPROTECTION; /*!< (@ 0x000002C0) Elements used for validation of data
                                                                            provisioned onto a device by the local domain.*/
  __IOM NRF_SICR_AROT_RADIO_DOMAINSTATE_Type DOMAINSTATE; /*!< (@ 0x000002E0) Registers holding the information regarding the
                                                                            local domain state.*/
  __IM  uint32_t  RESERVED[68];
} NRF_SICR_AROT_RADIO_Type_fixed;                    /*!< Size = 1024 (0x400)                                                  */


/* =========================================== Struct SICR_AROT_CELLULARCORE_FWENC =========================================== */
/**
  * @brief FWENC [SICR_AROT_CELLULARCORE_FWENC] Local domain firmware master encryption key. The key is stored in an encrypted
            then authenticated form using an AEAD scheme realized by AES-256 GCM mode, with the local domain KEK used as a
            secret key. The initialization vector is provided in NONCE register. Key attributes from ATTR register shall be used
            as an additional authenticated data (AAD) in AEAD.

  */
typedef struct {
  __IOM uint32_t  NONCE;                             /*!< (@ 0x00000000) The initialization vector of the encryption algorithm
                                                                         used to protect the local domain firmware master
                                                                         encryption key generation [n].*/
  __IOM uint32_t  ATTR;                              /*!< (@ 0x00000004) The attributes of the local domain firmware master
                                                                         encryption key generation [n]. This field is used as an
                                                                         additional authenticated data (AAD) in AEAD.*/
  __IOM uint32_t  CIPHERTEXT[8];                     /*!< (@ 0x00000008) The encrypted local domain firmware master encryption
                                                                         key generation [n].*/
  __IOM uint32_t  MAC[4];                            /*!< (@ 0x00000028) The authentication tag of the local domain firmware
                                                                         master encryption key generation [n].*/
  __IOM uint32_t  RFU[2];                            /*!< (@ 0x00000038) (unspecified)                                         */
} NRF_SICR_AROT_CELLULARCORE_FWENC_Type;             /*!< Size = 64 (0x040)                                                    */
  #define SICR_AROT_CELLULARCORE_FWENC_MaxCount (2UL) /*!< Size of FWENC[2] array.                                             */
  #define SICR_AROT_CELLULARCORE_FWENC_MaxIndex (1UL) /*!< Max index of FWENC[2] array.                                        */
  #define SICR_AROT_CELLULARCORE_FWENC_MinIndex (0UL) /*!< Min index of FWENC[2] array.                                        */

/* SICR_AROT_CELLULARCORE_FWENC_NONCE: The initialization vector of the encryption algorithm used to protect the local domain
                                        firmware master encryption key generation [n]. */


/* VALUE @Bits 0..31 : Value of nonce used by AEAD. */
  #define SICR_AROT_CELLULARCORE_FWENC_NONCE_VALUE_Pos (0UL) /*!< Position of VALUE field.                                     */
  #define SICR_AROT_CELLULARCORE_FWENC_NONCE_VALUE_Msk (0xFFFFFFFFUL << SICR_AROT_CELLULARCORE_FWENC_NONCE_VALUE_Pos) /*!< Bit
                                                                            mask of VALUE field.*/


/* SICR_AROT_CELLULARCORE_FWENC_ATTR: The attributes of the local domain firmware master encryption key generation [n]. This
                                       field is used as an additional authenticated data (AAD) in AEAD. */


/* TYPE @Bits 0..15 : Type of the key. This field should follow the key type encoding from PSA Crypto API v1.2.1. */
  #define SICR_AROT_CELLULARCORE_FWENC_ATTR_TYPE_Pos (0UL) /*!< Position of TYPE field.                                        */
  #define SICR_AROT_CELLULARCORE_FWENC_ATTR_TYPE_Msk (0xFFFFUL << SICR_AROT_CELLULARCORE_FWENC_ATTR_TYPE_Pos) /*!< Bit mask of
                                                                            TYPE field.*/

/* LEN @Bits 16..31 : Length of the key in bits. */
  #define SICR_AROT_CELLULARCORE_FWENC_ATTR_LEN_Pos (16UL) /*!< Position of LEN field.                                         */
  #define SICR_AROT_CELLULARCORE_FWENC_ATTR_LEN_Msk (0xFFFFUL << SICR_AROT_CELLULARCORE_FWENC_ATTR_LEN_Pos) /*!< Bit mask of LEN
                                                                            field.*/


/* SICR_AROT_CELLULARCORE_FWENC_CIPHERTEXT: The encrypted local domain firmware master encryption key generation [n]. */
  #define SICR_AROT_CELLULARCORE_FWENC_CIPHERTEXT_MaxCount (8UL) /*!< Max size of CIPHERTEXT[8] array.                         */
  #define SICR_AROT_CELLULARCORE_FWENC_CIPHERTEXT_MaxIndex (7UL) /*!< Max index of CIPHERTEXT[8] array.                        */
  #define SICR_AROT_CELLULARCORE_FWENC_CIPHERTEXT_MinIndex (0UL) /*!< Min index of CIPHERTEXT[8] array.                        */

/* VALUE @Bits 0..31 : Value for word [o] in the key value [n]. */
  #define SICR_AROT_CELLULARCORE_FWENC_CIPHERTEXT_VALUE_Pos (0UL) /*!< Position of VALUE field.                                */
  #define SICR_AROT_CELLULARCORE_FWENC_CIPHERTEXT_VALUE_Msk (0xFFFFFFFFUL << SICR_AROT_CELLULARCORE_FWENC_CIPHERTEXT_VALUE_Pos)
                                                                            /*!< Bit mask of VALUE field.*/


/* SICR_AROT_CELLULARCORE_FWENC_MAC: The authentication tag of the local domain firmware master encryption key generation [n]. */
  #define SICR_AROT_CELLULARCORE_FWENC_MAC_MaxCount (4UL) /*!< Max size of MAC[4] array.                                       */
  #define SICR_AROT_CELLULARCORE_FWENC_MAC_MaxIndex (3UL) /*!< Max index of MAC[4] array.                                      */
  #define SICR_AROT_CELLULARCORE_FWENC_MAC_MinIndex (0UL) /*!< Min index of MAC[4] array.                                      */

/* VALUE @Bits 0..31 : The word [o] of the authentication tag. */
  #define SICR_AROT_CELLULARCORE_FWENC_MAC_VALUE_Pos (0UL) /*!< Position of VALUE field.                                       */
  #define SICR_AROT_CELLULARCORE_FWENC_MAC_VALUE_Msk (0xFFFFFFFFUL << SICR_AROT_CELLULARCORE_FWENC_MAC_VALUE_Pos) /*!< Bit mask
                                                                            of VALUE field.*/


/* SICR_AROT_CELLULARCORE_FWENC_RFU: (unspecified) */
  #define SICR_AROT_CELLULARCORE_FWENC_RFU_MaxCount (2UL) /*!< Max size of RFU[2] array.                                       */
  #define SICR_AROT_CELLULARCORE_FWENC_RFU_MaxIndex (1UL) /*!< Max index of RFU[2] array.                                      */
  #define SICR_AROT_CELLULARCORE_FWENC_RFU_MinIndex (0UL) /*!< Min index of RFU[2] array.                                      */

/* VALUE @Bits 0..31 : RFU word [o]. */
  #define SICR_AROT_CELLULARCORE_FWENC_RFU_VALUE_Pos (0UL) /*!< Position of VALUE field.                                       */
  #define SICR_AROT_CELLULARCORE_FWENC_RFU_VALUE_Msk (0xFFFFFFFFUL << SICR_AROT_CELLULARCORE_FWENC_RFU_VALUE_Pos) /*!< Bit mask
                                                                            of VALUE field.*/



/* ======================================= Struct SICR_AROT_CELLULARCORE_AUTHDEBUGKEY ======================================== */
/**
  * @brief AUTHDEBUGKEY [SICR_AROT_CELLULARCORE_AUTHDEBUGKEY] Local domain authenticated debug access public key. The public key
            is stored as additional authenticated data (AAD) in unencrypted form using an AEAD scheme realized by AES-256 GCM
            mode, with the local domain KEK used as a secret key. The initialization vector is provided in NONCE register. Key
            attributes from ATTR register shall be used as an additional authenticated data (AAD) in AEAD. The content of PUBKEY
            registers shall be used as an additional authenticated data (AAD) in AEAD.

  */
typedef struct {
  __IOM uint32_t  NONCE;                             /*!< (@ 0x00000000) The initialization vector of the encryption algorithm
                                                                         used to protect the local domain authenticated debug
                                                                         access public key generation [n].*/
  __IOM uint32_t  ATTR;                              /*!< (@ 0x00000004) The attributes of the local domain firmware master
                                                                         encryption key generation [n]. This field is used as an
                                                                         additional authenticated data (AAD) in AEAD.*/
  __IOM uint32_t  PUBKEY[16];                        /*!< (@ 0x00000008) The local domain authenticated debug access public key
                                                                         generation [n].*/
  __IOM uint32_t  MAC[4];                            /*!< (@ 0x00000048) The authentication tag of the local domain
                                                                         authenticated debug access public key generation [n].*/
  __IOM uint32_t  RFU[2];                            /*!< (@ 0x00000058) (unspecified)                                         */
} NRF_SICR_AROT_CELLULARCORE_AUTHDEBUGKEY_Type;      /*!< Size = 96 (0x060)                                                    */
  #define SICR_AROT_CELLULARCORE_AUTHDEBUGKEY_MaxCount (3UL) /*!< Size of AUTHDEBUGKEY[3] array.                               */
  #define SICR_AROT_CELLULARCORE_AUTHDEBUGKEY_MaxIndex (2UL) /*!< Max index of AUTHDEBUGKEY[3] array.                          */
  #define SICR_AROT_CELLULARCORE_AUTHDEBUGKEY_MinIndex (0UL) /*!< Min index of AUTHDEBUGKEY[3] array.                          */

/* SICR_AROT_CELLULARCORE_AUTHDEBUGKEY_NONCE: The initialization vector of the encryption algorithm used to protect the local
                                               domain authenticated debug access public key generation [n]. */


/* VALUE @Bits 0..31 : Value of nonce used by AEAD. */
  #define SICR_AROT_CELLULARCORE_AUTHDEBUGKEY_NONCE_VALUE_Pos (0UL) /*!< Position of VALUE field.                              */
  #define SICR_AROT_CELLULARCORE_AUTHDEBUGKEY_NONCE_VALUE_Msk (0xFFFFFFFFUL << SICR_AROT_CELLULARCORE_AUTHDEBUGKEY_NONCE_VALUE_Pos)
                                                                            /*!< Bit mask of VALUE field.*/


/* SICR_AROT_CELLULARCORE_AUTHDEBUGKEY_ATTR: The attributes of the local domain firmware master encryption key generation [n].
                                              This field is used as an additional authenticated data (AAD) in AEAD. */


/* TYPE @Bits 0..15 : Type of the key. This field should follow the key type encoding from PSA Crypto API v1.2.1. */
  #define SICR_AROT_CELLULARCORE_AUTHDEBUGKEY_ATTR_TYPE_Pos (0UL) /*!< Position of TYPE field.                                 */
  #define SICR_AROT_CELLULARCORE_AUTHDEBUGKEY_ATTR_TYPE_Msk (0xFFFFUL << SICR_AROT_CELLULARCORE_AUTHDEBUGKEY_ATTR_TYPE_Pos) /*!<
                                                                            Bit mask of TYPE field.*/

/* LEN @Bits 16..31 : Length of the key in bits. */
  #define SICR_AROT_CELLULARCORE_AUTHDEBUGKEY_ATTR_LEN_Pos (16UL) /*!< Position of LEN field.                                  */
  #define SICR_AROT_CELLULARCORE_AUTHDEBUGKEY_ATTR_LEN_Msk (0xFFFFUL << SICR_AROT_CELLULARCORE_AUTHDEBUGKEY_ATTR_LEN_Pos) /*!<
                                                                            Bit mask of LEN field.*/


/* SICR_AROT_CELLULARCORE_AUTHDEBUGKEY_PUBKEY: The local domain authenticated debug access public key generation [n]. */
  #define SICR_AROT_CELLULARCORE_AUTHDEBUGKEY_PUBKEY_MaxCount (16UL) /*!< Max size of PUBKEY[16] array.                        */
  #define SICR_AROT_CELLULARCORE_AUTHDEBUGKEY_PUBKEY_MaxIndex (15UL) /*!< Max index of PUBKEY[16] array.                       */
  #define SICR_AROT_CELLULARCORE_AUTHDEBUGKEY_PUBKEY_MinIndex (0UL) /*!< Min index of PUBKEY[16] array.                        */

/* VALUE @Bits 0..31 : Value for word [o] in the key value [n]. */
  #define SICR_AROT_CELLULARCORE_AUTHDEBUGKEY_PUBKEY_VALUE_Pos (0UL) /*!< Position of VALUE field.                             */
  #define SICR_AROT_CELLULARCORE_AUTHDEBUGKEY_PUBKEY_VALUE_Msk (0xFFFFFFFFUL << SICR_AROT_CELLULARCORE_AUTHDEBUGKEY_PUBKEY_VALUE_Pos)
                                                                            /*!< Bit mask of VALUE field.*/


/* SICR_AROT_CELLULARCORE_AUTHDEBUGKEY_MAC: The authentication tag of the local domain authenticated debug access public key
                                             generation [n]. */

  #define SICR_AROT_CELLULARCORE_AUTHDEBUGKEY_MAC_MaxCount (4UL) /*!< Max size of MAC[4] array.                                */
  #define SICR_AROT_CELLULARCORE_AUTHDEBUGKEY_MAC_MaxIndex (3UL) /*!< Max index of MAC[4] array.                               */
  #define SICR_AROT_CELLULARCORE_AUTHDEBUGKEY_MAC_MinIndex (0UL) /*!< Min index of MAC[4] array.                               */

/* VALUE @Bits 0..31 : The word [o] of the authentication tag. */
  #define SICR_AROT_CELLULARCORE_AUTHDEBUGKEY_MAC_VALUE_Pos (0UL) /*!< Position of VALUE field.                                */
  #define SICR_AROT_CELLULARCORE_AUTHDEBUGKEY_MAC_VALUE_Msk (0xFFFFFFFFUL << SICR_AROT_CELLULARCORE_AUTHDEBUGKEY_MAC_VALUE_Pos)
                                                                            /*!< Bit mask of VALUE field.*/


/* SICR_AROT_CELLULARCORE_AUTHDEBUGKEY_RFU: (unspecified) */
  #define SICR_AROT_CELLULARCORE_AUTHDEBUGKEY_RFU_MaxCount (2UL) /*!< Max size of RFU[2] array.                                */
  #define SICR_AROT_CELLULARCORE_AUTHDEBUGKEY_RFU_MaxIndex (1UL) /*!< Max index of RFU[2] array.                               */
  #define SICR_AROT_CELLULARCORE_AUTHDEBUGKEY_RFU_MinIndex (0UL) /*!< Min index of RFU[2] array.                               */

/* VALUE @Bits 0..31 : RFU word [o]. */
  #define SICR_AROT_CELLULARCORE_AUTHDEBUGKEY_RFU_VALUE_Pos (0UL) /*!< Position of VALUE field.                                */
  #define SICR_AROT_CELLULARCORE_AUTHDEBUGKEY_RFU_VALUE_Msk (0xFFFFFFFFUL << SICR_AROT_CELLULARCORE_AUTHDEBUGKEY_RFU_VALUE_Pos)
                                                                            /*!< Bit mask of VALUE field.*/



/* ======================================== Struct SICR_AROT_CELLULARCORE_SUITPUBKEY ========================================= */
/**
  * @brief SUITPUBKEY [SICR_AROT_CELLULARCORE_SUITPUBKEY] Public key used by the local domain SUIT manifest. The public key is
            stored as additional authenticated data (AAD) in unencrypted form using an AEAD scheme realized by AES-256 GCM mode,
            with the local domain KEK used as a secret key. The initialization vector is provided in NONCE register. Key
            attributes from ATTR register shall be used as an additional authenticated data (AAD) in AEAD. The content of PUBKEY
            registers shall be used as an additional authenticated data (AAD) in AEAD.

  */
typedef struct {
  __IOM uint32_t  NONCE;                             /*!< (@ 0x00000000) The initialization vector of the encryption algorithm
                                                                         used to protect the local domain SUIT manifest public
                                                                         key generation [n].*/
  __IOM uint32_t  ATTR;                              /*!< (@ 0x00000004) The attributes of the local domain firmware master
                                                                         encryption key generation [n]. This field is used as an
                                                                         additional authenticated data (AAD) in AEAD.*/
  __IOM uint32_t  PUBKEY[16];                        /*!< (@ 0x00000008) The local domain SUIT manifest public key generation
                                                                         [n].*/
  __IOM uint32_t  MAC[4];                            /*!< (@ 0x00000048) The authentication tag of the local domain SUIT
                                                                         manifest public key generation [n].*/
  __IOM uint32_t  RFU[2];                            /*!< (@ 0x00000058) (unspecified)                                         */
} NRF_SICR_AROT_CELLULARCORE_SUITPUBKEY_Type;        /*!< Size = 96 (0x060)                                                    */
  #define SICR_AROT_CELLULARCORE_SUITPUBKEY_MaxCount (3UL) /*!< Size of SUITPUBKEY[3] array.                                   */
  #define SICR_AROT_CELLULARCORE_SUITPUBKEY_MaxIndex (2UL) /*!< Max index of SUITPUBKEY[3] array.                              */
  #define SICR_AROT_CELLULARCORE_SUITPUBKEY_MinIndex (0UL) /*!< Min index of SUITPUBKEY[3] array.                              */

/* SICR_AROT_CELLULARCORE_SUITPUBKEY_NONCE: The initialization vector of the encryption algorithm used to protect the local
                                             domain SUIT manifest public key generation [n]. */


/* VALUE @Bits 0..31 : Value of nonce used by AEAD. */
  #define SICR_AROT_CELLULARCORE_SUITPUBKEY_NONCE_VALUE_Pos (0UL) /*!< Position of VALUE field.                                */
  #define SICR_AROT_CELLULARCORE_SUITPUBKEY_NONCE_VALUE_Msk (0xFFFFFFFFUL << SICR_AROT_CELLULARCORE_SUITPUBKEY_NONCE_VALUE_Pos)
                                                                            /*!< Bit mask of VALUE field.*/


/* SICR_AROT_CELLULARCORE_SUITPUBKEY_ATTR: The attributes of the local domain firmware master encryption key generation [n].
                                            This field is used as an additional authenticated data (AAD) in AEAD. */


/* TYPE @Bits 0..15 : Type of the key. This field should follow the key type encoding from PSA Crypto API v1.2.1. */
  #define SICR_AROT_CELLULARCORE_SUITPUBKEY_ATTR_TYPE_Pos (0UL) /*!< Position of TYPE field.                                   */
  #define SICR_AROT_CELLULARCORE_SUITPUBKEY_ATTR_TYPE_Msk (0xFFFFUL << SICR_AROT_CELLULARCORE_SUITPUBKEY_ATTR_TYPE_Pos) /*!< Bit
                                                                            mask of TYPE field.*/

/* LEN @Bits 16..31 : Length of the key in bits. */
  #define SICR_AROT_CELLULARCORE_SUITPUBKEY_ATTR_LEN_Pos (16UL) /*!< Position of LEN field.                                    */
  #define SICR_AROT_CELLULARCORE_SUITPUBKEY_ATTR_LEN_Msk (0xFFFFUL << SICR_AROT_CELLULARCORE_SUITPUBKEY_ATTR_LEN_Pos) /*!< Bit
                                                                            mask of LEN field.*/


/* SICR_AROT_CELLULARCORE_SUITPUBKEY_PUBKEY: The local domain SUIT manifest public key generation [n]. */
  #define SICR_AROT_CELLULARCORE_SUITPUBKEY_PUBKEY_MaxCount (16UL) /*!< Max size of PUBKEY[16] array.                          */
  #define SICR_AROT_CELLULARCORE_SUITPUBKEY_PUBKEY_MaxIndex (15UL) /*!< Max index of PUBKEY[16] array.                         */
  #define SICR_AROT_CELLULARCORE_SUITPUBKEY_PUBKEY_MinIndex (0UL) /*!< Min index of PUBKEY[16] array.                          */

/* VALUE @Bits 0..31 : Value for word [o] in the key value [n]. */
  #define SICR_AROT_CELLULARCORE_SUITPUBKEY_PUBKEY_VALUE_Pos (0UL) /*!< Position of VALUE field.                               */
  #define SICR_AROT_CELLULARCORE_SUITPUBKEY_PUBKEY_VALUE_Msk (0xFFFFFFFFUL << SICR_AROT_CELLULARCORE_SUITPUBKEY_PUBKEY_VALUE_Pos)
                                                                            /*!< Bit mask of VALUE field.*/


/* SICR_AROT_CELLULARCORE_SUITPUBKEY_MAC: The authentication tag of the local domain SUIT manifest public key generation [n]. */
  #define SICR_AROT_CELLULARCORE_SUITPUBKEY_MAC_MaxCount (4UL) /*!< Max size of MAC[4] array.                                  */
  #define SICR_AROT_CELLULARCORE_SUITPUBKEY_MAC_MaxIndex (3UL) /*!< Max index of MAC[4] array.                                 */
  #define SICR_AROT_CELLULARCORE_SUITPUBKEY_MAC_MinIndex (0UL) /*!< Min index of MAC[4] array.                                 */

/* VALUE @Bits 0..31 : The word [o] of the authentication tag. */
  #define SICR_AROT_CELLULARCORE_SUITPUBKEY_MAC_VALUE_Pos (0UL) /*!< Position of VALUE field.                                  */
  #define SICR_AROT_CELLULARCORE_SUITPUBKEY_MAC_VALUE_Msk (0xFFFFFFFFUL << SICR_AROT_CELLULARCORE_SUITPUBKEY_MAC_VALUE_Pos) /*!<
                                                                            Bit mask of VALUE field.*/


/* SICR_AROT_CELLULARCORE_SUITPUBKEY_RFU: (unspecified) */
  #define SICR_AROT_CELLULARCORE_SUITPUBKEY_RFU_MaxCount (2UL) /*!< Max size of RFU[2] array.                                  */
  #define SICR_AROT_CELLULARCORE_SUITPUBKEY_RFU_MaxIndex (1UL) /*!< Max index of RFU[2] array.                                 */
  #define SICR_AROT_CELLULARCORE_SUITPUBKEY_RFU_MinIndex (0UL) /*!< Min index of RFU[2] array.                                 */

/* VALUE @Bits 0..31 : RFU word [o]. */
  #define SICR_AROT_CELLULARCORE_SUITPUBKEY_RFU_VALUE_Pos (0UL) /*!< Position of VALUE field.                                  */
  #define SICR_AROT_CELLULARCORE_SUITPUBKEY_RFU_VALUE_Msk (0xFFFFFFFFUL << SICR_AROT_CELLULARCORE_SUITPUBKEY_RFU_VALUE_Pos) /*!<
                                                                            Bit mask of VALUE field.*/



/* ==================================== Struct SICR_AROT_CELLULARCORE_DATAPROTECTION_UICR ==================================== */
/**
  * @brief UICR [SICR_AROT_CELLULARCORE_DATAPROTECTION_UICR] Authentication tag used for validation of the content of the UICRs.
            The UICRs content provides information about a domain peripherals associations and memory layout configuration. It
            is stored in an unencrypted form in a dedicated memory location. A validation shall be performed using an AEAD
            scheme realized by AES-256 GCM mode, with the domain KEK used as a secret key and UICR content used as additional
            authenticated data (AAD). The initialization vector is provided in NONCE register.

  */
typedef struct {
  __IOM uint32_t  NONCE;                             /*!< (@ 0x00000000) The initialization vector of the encryption algorithm
                                                                         used to protect the domain UICRs content.*/
  __IOM uint32_t  MAC[4];                            /*!< (@ 0x00000004) The authentication tag of the domain UICRs.           */
  __IOM uint32_t  RFU[3];                            /*!< (@ 0x00000014) (unspecified)                                         */
} NRF_SICR_AROT_CELLULARCORE_DATAPROTECTION_UICR_Type; /*!< Size = 32 (0x020)                                                  */

/* SICR_AROT_CELLULARCORE_DATAPROTECTION_UICR_NONCE: The initialization vector of the encryption algorithm used to protect the
                                                      domain UICRs content. */


/* VALUE @Bits 0..31 : Value of nonce used by AEAD. */
  #define SICR_AROT_CELLULARCORE_DATAPROTECTION_UICR_NONCE_VALUE_Pos (0UL) /*!< Position of VALUE field.                       */
  #define SICR_AROT_CELLULARCORE_DATAPROTECTION_UICR_NONCE_VALUE_Msk (0xFFFFFFFFUL << SICR_AROT_CELLULARCORE_DATAPROTECTION_UICR_NONCE_VALUE_Pos)
                                                                            /*!< Bit mask of VALUE field.*/


/* SICR_AROT_CELLULARCORE_DATAPROTECTION_UICR_MAC: The authentication tag of the domain UICRs. */
  #define SICR_AROT_CELLULARCORE_DATAPROTECTION_UICR_MAC_MaxCount (4UL) /*!< Max size of MAC[4] array.                         */
  #define SICR_AROT_CELLULARCORE_DATAPROTECTION_UICR_MAC_MaxIndex (3UL) /*!< Max index of MAC[4] array.                        */
  #define SICR_AROT_CELLULARCORE_DATAPROTECTION_UICR_MAC_MinIndex (0UL) /*!< Min index of MAC[4] array.                        */

/* VALUE @Bits 0..31 : The word [n] of the authentication tag. */
  #define SICR_AROT_CELLULARCORE_DATAPROTECTION_UICR_MAC_VALUE_Pos (0UL) /*!< Position of VALUE field.                         */
  #define SICR_AROT_CELLULARCORE_DATAPROTECTION_UICR_MAC_VALUE_Msk (0xFFFFFFFFUL << SICR_AROT_CELLULARCORE_DATAPROTECTION_UICR_MAC_VALUE_Pos)
                                                                            /*!< Bit mask of VALUE field.*/


/* SICR_AROT_CELLULARCORE_DATAPROTECTION_UICR_RFU: (unspecified) */
  #define SICR_AROT_CELLULARCORE_DATAPROTECTION_UICR_RFU_MaxCount (3UL) /*!< Max size of RFU[3] array.                         */
  #define SICR_AROT_CELLULARCORE_DATAPROTECTION_UICR_RFU_MaxIndex (2UL) /*!< Max index of RFU[3] array.                        */
  #define SICR_AROT_CELLULARCORE_DATAPROTECTION_UICR_RFU_MinIndex (0UL) /*!< Min index of RFU[3] array.                        */

/* VALUE @Bits 0..31 : RFU word [n]. */
  #define SICR_AROT_CELLULARCORE_DATAPROTECTION_UICR_RFU_VALUE_Pos (0UL) /*!< Position of VALUE field.                         */
  #define SICR_AROT_CELLULARCORE_DATAPROTECTION_UICR_RFU_VALUE_Msk (0xFFFFFFFFUL << SICR_AROT_CELLULARCORE_DATAPROTECTION_UICR_RFU_VALUE_Pos)
                                                                            /*!< Bit mask of VALUE field.*/



/* ====================================== Struct SICR_AROT_CELLULARCORE_DATAPROTECTION ======================================= */
/**
  * @brief DATAPROTECTION [SICR_AROT_CELLULARCORE_DATAPROTECTION] Elements used for validation of data provisioned onto a device
            by the local domain.

  */
typedef struct {
  __IOM NRF_SICR_AROT_CELLULARCORE_DATAPROTECTION_UICR_Type UICR; /*!< (@ 0x00000000) Authentication tag used for validation of
                                                                            the content of the UICRs. The UICRs content provides
                                                                            information about a domain peripherals associations
                                                                            and memory layout configuration. It is stored in an
                                                                            unencrypted form in a dedicated memory location. A
                                                                            validation shall be performed using an AEAD scheme
                                                                            realized by AES-256 GCM mode, with the domain KEK
                                                                            used as a secret key and UICR content used as
                                                                            additional authenticated data (AAD). The
                                                                            initialization vector is provided in NONCE
                                                                            register.*/
} NRF_SICR_AROT_CELLULARCORE_DATAPROTECTION_Type;    /*!< Size = 32 (0x020)                                                    */


/* ======================================== Struct SICR_AROT_CELLULARCORE_DOMAINSTATE ======================================== */
/**
  * @brief DOMAINSTATE [SICR_AROT_CELLULARCORE_DOMAINSTATE] Registers holding the information regarding the local domain state.
  */
typedef struct {
  __IOM uint32_t  RFU[3];                            /*!< (@ 0x00000000) (unspecified)                                         */
  __IOM uint32_t  LCS;                               /*!< (@ 0x0000000C) The local domain lifecycle state as determined by the
                                                                         URoT.*/
} NRF_SICR_AROT_CELLULARCORE_DOMAINSTATE_Type;       /*!< Size = 16 (0x010)                                                    */

/* SICR_AROT_CELLULARCORE_DOMAINSTATE_RFU: (unspecified) */
  #define SICR_AROT_CELLULARCORE_DOMAINSTATE_RFU_MaxCount (3UL) /*!< Max size of RFU[3] array.                                 */
  #define SICR_AROT_CELLULARCORE_DOMAINSTATE_RFU_MaxIndex (2UL) /*!< Max index of RFU[3] array.                                */
  #define SICR_AROT_CELLULARCORE_DOMAINSTATE_RFU_MinIndex (0UL) /*!< Min index of RFU[3] array.                                */

/* VALUE @Bits 0..31 : RFU word [n]. */
  #define SICR_AROT_CELLULARCORE_DOMAINSTATE_RFU_VALUE_Pos (0UL) /*!< Position of VALUE field.                                 */
  #define SICR_AROT_CELLULARCORE_DOMAINSTATE_RFU_VALUE_Msk (0xFFFFFFFFUL << SICR_AROT_CELLULARCORE_DOMAINSTATE_RFU_VALUE_Pos)
                                                                            /*!< Bit mask of VALUE field.*/


/* SICR_AROT_CELLULARCORE_DOMAINSTATE_LCS: The local domain lifecycle state as determined by the URoT. */

/* STATE @Bits 0..31 : The local domain lifecycle state. */
  #define SICR_AROT_CELLULARCORE_DOMAINSTATE_LCS_STATE_Pos (0UL) /*!< Position of STATE field.                                 */
  #define SICR_AROT_CELLULARCORE_DOMAINSTATE_LCS_STATE_Msk (0xFFFFFFFFUL << SICR_AROT_CELLULARCORE_DOMAINSTATE_LCS_STATE_Pos)
                                                                            /*!< Bit mask of STATE field.*/
  #define SICR_AROT_CELLULARCORE_DOMAINSTATE_LCS_STATE_Min (0x3590FCC5UL) /*!< Min enumerator value of STATE field.            */
  #define SICR_AROT_CELLULARCORE_DOMAINSTATE_LCS_STATE_Max (0xF6852179UL) /*!< Max enumerator value of STATE field.            */
  #define SICR_AROT_CELLULARCORE_DOMAINSTATE_LCS_STATE_AssemblyAndTest (0x3590FCC5UL) /*!< The local domain assets are installed
                                                                            in this state. This includes the optional local
                                                                            domain ARoT (its secure program).*/
  #define SICR_AROT_CELLULARCORE_DOMAINSTATE_LCS_STATE_ARoTProvisioning (0xF6852179UL) /*!< The optional local domain ARoT is
                                                                            provisioned in this state.*/
  #define SICR_AROT_CELLULARCORE_DOMAINSTATE_LCS_STATE_Secured (0x9F6B5F01UL) /*!< The local domain assets are provisioned and
                                                                            secured.*/



/* ============================================== Struct SICR_AROT_CELLULARCORE ============================================== */
/**
  * @brief CELLULARCORE [SICR_AROT_CELLULARCORE] (unspecified)
  */
typedef struct {
  __IOM NRF_SICR_AROT_CELLULARCORE_FWENC_Type FWENC[2]; /*!< (@ 0x00000000) Local domain firmware master encryption key. The key
                                                                            is stored in an encrypted then authenticated form
                                                                            using an AEAD scheme realized by AES-256 GCM mode,
                                                                            with the local domain KEK used as a secret key. The
                                                                            initialization vector is provided in NONCE register.
                                                                            Key attributes from ATTR register shall be used as
                                                                            an additional authenticated data (AAD) in AEAD.*/
  __IOM NRF_SICR_AROT_CELLULARCORE_AUTHDEBUGKEY_Type AUTHDEBUGKEY[3]; /*!< (@ 0x00000080) Local domain authenticated debug
                                                                            access public key. The public key is stored as
                                                                            additional authenticated data (AAD) in unencrypted
                                                                            form using an AEAD scheme realized by AES-256 GCM
                                                                            mode, with the local domain KEK used as a secret
                                                                            key. The initialization vector is provided in NONCE
                                                                            register. Key attributes from ATTR register shall be
                                                                            used as an additional authenticated data (AAD) in
                                                                            AEAD. The content of PUBKEY registers shall be used
                                                                            as an additional authenticated data (AAD) in AEAD.*/
  __IOM NRF_SICR_AROT_CELLULARCORE_SUITPUBKEY_Type SUITPUBKEY[3]; /*!< (@ 0x000001A0) Public key used by the local domain SUIT
                                                                            manifest. The public key is stored as additional
                                                                            authenticated data (AAD) in unencrypted form using
                                                                            an AEAD scheme realized by AES-256 GCM mode, with
                                                                            the local domain KEK used as a secret key. The
                                                                            initialization vector is provided in NONCE register.
                                                                            Key attributes from ATTR register shall be used as
                                                                            an additional authenticated data (AAD) in AEAD. The
                                                                            content of PUBKEY registers shall be used as an
                                                                            additional authenticated data (AAD) in AEAD.*/
  __IOM NRF_SICR_AROT_CELLULARCORE_DATAPROTECTION_Type DATAPROTECTION; /*!< (@ 0x000002C0) Elements used for validation of data
                                                                            provisioned onto a device by the local domain.*/
  __IOM NRF_SICR_AROT_CELLULARCORE_DOMAINSTATE_Type DOMAINSTATE; /*!< (@ 0x000002E0) Registers holding the information regarding
                                                                            the local domain state.*/
  __IM  uint32_t  RESERVED[68];
} NRF_SICR_AROT_CELLULARCORE_Type_fixed;             /*!< Size = 1024 (0x400)                                                  */


/* ============================================= Struct SICR_AROT_WIFICORE_FWENC ============================================= */
/**
  * @brief FWENC [SICR_AROT_WIFICORE_FWENC] Local domain firmware master encryption key. The key is stored in an encrypted then
            authenticated form using an AEAD scheme realized by AES-256 GCM mode, with the local domain KEK used as a secret
            key. The initialization vector is provided in NONCE register. Key attributes from ATTR register shall be used as an
            additional authenticated data (AAD) in AEAD.

  */
typedef struct {
  __IOM uint32_t  NONCE;                             /*!< (@ 0x00000000) The initialization vector of the encryption algorithm
                                                                         used to protect the local domain firmware master
                                                                         encryption key generation [n].*/
  __IOM uint32_t  ATTR;                              /*!< (@ 0x00000004) The attributes of the local domain firmware master
                                                                         encryption key generation [n]. This field is used as an
                                                                         additional authenticated data (AAD) in AEAD.*/
  __IOM uint32_t  CIPHERTEXT[8];                     /*!< (@ 0x00000008) The encrypted local domain firmware master encryption
                                                                         key generation [n].*/
  __IOM uint32_t  MAC[4];                            /*!< (@ 0x00000028) The authentication tag of the local domain firmware
                                                                         master encryption key generation [n].*/
  __IOM uint32_t  RFU[2];                            /*!< (@ 0x00000038) (unspecified)                                         */
} NRF_SICR_AROT_WIFICORE_FWENC_Type;                 /*!< Size = 64 (0x040)                                                    */
  #define SICR_AROT_WIFICORE_FWENC_MaxCount (2UL)    /*!< Size of FWENC[2] array.                                              */
  #define SICR_AROT_WIFICORE_FWENC_MaxIndex (1UL)    /*!< Max index of FWENC[2] array.                                         */
  #define SICR_AROT_WIFICORE_FWENC_MinIndex (0UL)    /*!< Min index of FWENC[2] array.                                         */

/* SICR_AROT_WIFICORE_FWENC_NONCE: The initialization vector of the encryption algorithm used to protect the local domain
                                    firmware master encryption key generation [n]. */


/* VALUE @Bits 0..31 : Value of nonce used by AEAD. */
  #define SICR_AROT_WIFICORE_FWENC_NONCE_VALUE_Pos (0UL) /*!< Position of VALUE field.                                         */
  #define SICR_AROT_WIFICORE_FWENC_NONCE_VALUE_Msk (0xFFFFFFFFUL << SICR_AROT_WIFICORE_FWENC_NONCE_VALUE_Pos) /*!< Bit mask of
                                                                            VALUE field.*/


/* SICR_AROT_WIFICORE_FWENC_ATTR: The attributes of the local domain firmware master encryption key generation [n]. This field
                                   is used as an additional authenticated data (AAD) in AEAD. */


/* TYPE @Bits 0..15 : Type of the key. This field should follow the key type encoding from PSA Crypto API v1.2.1. */
  #define SICR_AROT_WIFICORE_FWENC_ATTR_TYPE_Pos (0UL) /*!< Position of TYPE field.                                            */
  #define SICR_AROT_WIFICORE_FWENC_ATTR_TYPE_Msk (0xFFFFUL << SICR_AROT_WIFICORE_FWENC_ATTR_TYPE_Pos) /*!< Bit mask of TYPE
                                                                            field.*/

/* LEN @Bits 16..31 : Length of the key in bits. */
  #define SICR_AROT_WIFICORE_FWENC_ATTR_LEN_Pos (16UL) /*!< Position of LEN field.                                             */
  #define SICR_AROT_WIFICORE_FWENC_ATTR_LEN_Msk (0xFFFFUL << SICR_AROT_WIFICORE_FWENC_ATTR_LEN_Pos) /*!< Bit mask of LEN field.*/


/* SICR_AROT_WIFICORE_FWENC_CIPHERTEXT: The encrypted local domain firmware master encryption key generation [n]. */
  #define SICR_AROT_WIFICORE_FWENC_CIPHERTEXT_MaxCount (8UL) /*!< Max size of CIPHERTEXT[8] array.                             */
  #define SICR_AROT_WIFICORE_FWENC_CIPHERTEXT_MaxIndex (7UL) /*!< Max index of CIPHERTEXT[8] array.                            */
  #define SICR_AROT_WIFICORE_FWENC_CIPHERTEXT_MinIndex (0UL) /*!< Min index of CIPHERTEXT[8] array.                            */

/* VALUE @Bits 0..31 : Value for word [o] in the key value [n]. */
  #define SICR_AROT_WIFICORE_FWENC_CIPHERTEXT_VALUE_Pos (0UL) /*!< Position of VALUE field.                                    */
  #define SICR_AROT_WIFICORE_FWENC_CIPHERTEXT_VALUE_Msk (0xFFFFFFFFUL << SICR_AROT_WIFICORE_FWENC_CIPHERTEXT_VALUE_Pos) /*!< Bit
                                                                            mask of VALUE field.*/


/* SICR_AROT_WIFICORE_FWENC_MAC: The authentication tag of the local domain firmware master encryption key generation [n]. */
  #define SICR_AROT_WIFICORE_FWENC_MAC_MaxCount (4UL) /*!< Max size of MAC[4] array.                                           */
  #define SICR_AROT_WIFICORE_FWENC_MAC_MaxIndex (3UL) /*!< Max index of MAC[4] array.                                          */
  #define SICR_AROT_WIFICORE_FWENC_MAC_MinIndex (0UL) /*!< Min index of MAC[4] array.                                          */

/* VALUE @Bits 0..31 : The word [o] of the authentication tag. */
  #define SICR_AROT_WIFICORE_FWENC_MAC_VALUE_Pos (0UL) /*!< Position of VALUE field.                                           */
  #define SICR_AROT_WIFICORE_FWENC_MAC_VALUE_Msk (0xFFFFFFFFUL << SICR_AROT_WIFICORE_FWENC_MAC_VALUE_Pos) /*!< Bit mask of VALUE
                                                                            field.*/


/* SICR_AROT_WIFICORE_FWENC_RFU: (unspecified) */
  #define SICR_AROT_WIFICORE_FWENC_RFU_MaxCount (2UL) /*!< Max size of RFU[2] array.                                           */
  #define SICR_AROT_WIFICORE_FWENC_RFU_MaxIndex (1UL) /*!< Max index of RFU[2] array.                                          */
  #define SICR_AROT_WIFICORE_FWENC_RFU_MinIndex (0UL) /*!< Min index of RFU[2] array.                                          */

/* VALUE @Bits 0..31 : RFU word [o]. */
  #define SICR_AROT_WIFICORE_FWENC_RFU_VALUE_Pos (0UL) /*!< Position of VALUE field.                                           */
  #define SICR_AROT_WIFICORE_FWENC_RFU_VALUE_Msk (0xFFFFFFFFUL << SICR_AROT_WIFICORE_FWENC_RFU_VALUE_Pos) /*!< Bit mask of VALUE
                                                                            field.*/



/* ========================================= Struct SICR_AROT_WIFICORE_AUTHDEBUGKEY ========================================== */
/**
  * @brief AUTHDEBUGKEY [SICR_AROT_WIFICORE_AUTHDEBUGKEY] Local domain authenticated debug access public key. The public key is
            stored as additional authenticated data (AAD) in unencrypted form using an AEAD scheme realized by AES-256 GCM mode,
            with the local domain KEK used as a secret key. The initialization vector is provided in NONCE register. Key
            attributes from ATTR register shall be used as an additional authenticated data (AAD) in AEAD. The content of PUBKEY
            registers shall be used as an additional authenticated data (AAD) in AEAD.

  */
typedef struct {
  __IOM uint32_t  NONCE;                             /*!< (@ 0x00000000) The initialization vector of the encryption algorithm
                                                                         used to protect the local domain authenticated debug
                                                                         access public key generation [n].*/
  __IOM uint32_t  ATTR;                              /*!< (@ 0x00000004) The attributes of the local domain firmware master
                                                                         encryption key generation [n]. This field is used as an
                                                                         additional authenticated data (AAD) in AEAD.*/
  __IOM uint32_t  PUBKEY[16];                        /*!< (@ 0x00000008) The local domain authenticated debug access public key
                                                                         generation [n].*/
  __IOM uint32_t  MAC[4];                            /*!< (@ 0x00000048) The authentication tag of the local domain
                                                                         authenticated debug access public key generation [n].*/
  __IOM uint32_t  RFU[2];                            /*!< (@ 0x00000058) (unspecified)                                         */
} NRF_SICR_AROT_WIFICORE_AUTHDEBUGKEY_Type;          /*!< Size = 96 (0x060)                                                    */
  #define SICR_AROT_WIFICORE_AUTHDEBUGKEY_MaxCount (3UL) /*!< Size of AUTHDEBUGKEY[3] array.                                   */
  #define SICR_AROT_WIFICORE_AUTHDEBUGKEY_MaxIndex (2UL) /*!< Max index of AUTHDEBUGKEY[3] array.                              */
  #define SICR_AROT_WIFICORE_AUTHDEBUGKEY_MinIndex (0UL) /*!< Min index of AUTHDEBUGKEY[3] array.                              */

/* SICR_AROT_WIFICORE_AUTHDEBUGKEY_NONCE: The initialization vector of the encryption algorithm used to protect the local domain
                                           authenticated debug access public key generation [n]. */


/* VALUE @Bits 0..31 : Value of nonce used by AEAD. */
  #define SICR_AROT_WIFICORE_AUTHDEBUGKEY_NONCE_VALUE_Pos (0UL) /*!< Position of VALUE field.                                  */
  #define SICR_AROT_WIFICORE_AUTHDEBUGKEY_NONCE_VALUE_Msk (0xFFFFFFFFUL << SICR_AROT_WIFICORE_AUTHDEBUGKEY_NONCE_VALUE_Pos) /*!<
                                                                            Bit mask of VALUE field.*/


/* SICR_AROT_WIFICORE_AUTHDEBUGKEY_ATTR: The attributes of the local domain firmware master encryption key generation [n]. This
                                          field is used as an additional authenticated data (AAD) in AEAD. */


/* TYPE @Bits 0..15 : Type of the key. This field should follow the key type encoding from PSA Crypto API v1.2.1. */
  #define SICR_AROT_WIFICORE_AUTHDEBUGKEY_ATTR_TYPE_Pos (0UL) /*!< Position of TYPE field.                                     */
  #define SICR_AROT_WIFICORE_AUTHDEBUGKEY_ATTR_TYPE_Msk (0xFFFFUL << SICR_AROT_WIFICORE_AUTHDEBUGKEY_ATTR_TYPE_Pos) /*!< Bit
                                                                            mask of TYPE field.*/

/* LEN @Bits 16..31 : Length of the key in bits. */
  #define SICR_AROT_WIFICORE_AUTHDEBUGKEY_ATTR_LEN_Pos (16UL) /*!< Position of LEN field.                                      */
  #define SICR_AROT_WIFICORE_AUTHDEBUGKEY_ATTR_LEN_Msk (0xFFFFUL << SICR_AROT_WIFICORE_AUTHDEBUGKEY_ATTR_LEN_Pos) /*!< Bit mask
                                                                            of LEN field.*/


/* SICR_AROT_WIFICORE_AUTHDEBUGKEY_PUBKEY: The local domain authenticated debug access public key generation [n]. */
  #define SICR_AROT_WIFICORE_AUTHDEBUGKEY_PUBKEY_MaxCount (16UL) /*!< Max size of PUBKEY[16] array.                            */
  #define SICR_AROT_WIFICORE_AUTHDEBUGKEY_PUBKEY_MaxIndex (15UL) /*!< Max index of PUBKEY[16] array.                           */
  #define SICR_AROT_WIFICORE_AUTHDEBUGKEY_PUBKEY_MinIndex (0UL) /*!< Min index of PUBKEY[16] array.                            */

/* VALUE @Bits 0..31 : Value for word [o] in the key value [n]. */
  #define SICR_AROT_WIFICORE_AUTHDEBUGKEY_PUBKEY_VALUE_Pos (0UL) /*!< Position of VALUE field.                                 */
  #define SICR_AROT_WIFICORE_AUTHDEBUGKEY_PUBKEY_VALUE_Msk (0xFFFFFFFFUL << SICR_AROT_WIFICORE_AUTHDEBUGKEY_PUBKEY_VALUE_Pos)
                                                                            /*!< Bit mask of VALUE field.*/


/* SICR_AROT_WIFICORE_AUTHDEBUGKEY_MAC: The authentication tag of the local domain authenticated debug access public key
                                         generation [n]. */

  #define SICR_AROT_WIFICORE_AUTHDEBUGKEY_MAC_MaxCount (4UL) /*!< Max size of MAC[4] array.                                    */
  #define SICR_AROT_WIFICORE_AUTHDEBUGKEY_MAC_MaxIndex (3UL) /*!< Max index of MAC[4] array.                                   */
  #define SICR_AROT_WIFICORE_AUTHDEBUGKEY_MAC_MinIndex (0UL) /*!< Min index of MAC[4] array.                                   */

/* VALUE @Bits 0..31 : The word [o] of the authentication tag. */
  #define SICR_AROT_WIFICORE_AUTHDEBUGKEY_MAC_VALUE_Pos (0UL) /*!< Position of VALUE field.                                    */
  #define SICR_AROT_WIFICORE_AUTHDEBUGKEY_MAC_VALUE_Msk (0xFFFFFFFFUL << SICR_AROT_WIFICORE_AUTHDEBUGKEY_MAC_VALUE_Pos) /*!< Bit
                                                                            mask of VALUE field.*/


/* SICR_AROT_WIFICORE_AUTHDEBUGKEY_RFU: (unspecified) */
  #define SICR_AROT_WIFICORE_AUTHDEBUGKEY_RFU_MaxCount (2UL) /*!< Max size of RFU[2] array.                                    */
  #define SICR_AROT_WIFICORE_AUTHDEBUGKEY_RFU_MaxIndex (1UL) /*!< Max index of RFU[2] array.                                   */
  #define SICR_AROT_WIFICORE_AUTHDEBUGKEY_RFU_MinIndex (0UL) /*!< Min index of RFU[2] array.                                   */

/* VALUE @Bits 0..31 : RFU word [o]. */
  #define SICR_AROT_WIFICORE_AUTHDEBUGKEY_RFU_VALUE_Pos (0UL) /*!< Position of VALUE field.                                    */
  #define SICR_AROT_WIFICORE_AUTHDEBUGKEY_RFU_VALUE_Msk (0xFFFFFFFFUL << SICR_AROT_WIFICORE_AUTHDEBUGKEY_RFU_VALUE_Pos) /*!< Bit
                                                                            mask of VALUE field.*/



/* ========================================== Struct SICR_AROT_WIFICORE_SUITPUBKEY =========================================== */
/**
  * @brief SUITPUBKEY [SICR_AROT_WIFICORE_SUITPUBKEY] Public key used by the local domain SUIT manifest. The public key is
            stored as additional authenticated data (AAD) in unencrypted form using an AEAD scheme realized by AES-256 GCM mode,
            with the local domain KEK used as a secret key. The initialization vector is provided in NONCE register. Key
            attributes from ATTR register shall be used as an additional authenticated data (AAD) in AEAD. The content of PUBKEY
            registers shall be used as an additional authenticated data (AAD) in AEAD.

  */
typedef struct {
  __IOM uint32_t  NONCE;                             /*!< (@ 0x00000000) The initialization vector of the encryption algorithm
                                                                         used to protect the local domain SUIT manifest public
                                                                         key generation [n].*/
  __IOM uint32_t  ATTR;                              /*!< (@ 0x00000004) The attributes of the local domain firmware master
                                                                         encryption key generation [n]. This field is used as an
                                                                         additional authenticated data (AAD) in AEAD.*/
  __IOM uint32_t  PUBKEY[16];                        /*!< (@ 0x00000008) The local domain SUIT manifest public key generation
                                                                         [n].*/
  __IOM uint32_t  MAC[4];                            /*!< (@ 0x00000048) The authentication tag of the local domain SUIT
                                                                         manifest public key generation [n].*/
  __IOM uint32_t  RFU[2];                            /*!< (@ 0x00000058) (unspecified)                                         */
} NRF_SICR_AROT_WIFICORE_SUITPUBKEY_Type;            /*!< Size = 96 (0x060)                                                    */
  #define SICR_AROT_WIFICORE_SUITPUBKEY_MaxCount (3UL) /*!< Size of SUITPUBKEY[3] array.                                       */
  #define SICR_AROT_WIFICORE_SUITPUBKEY_MaxIndex (2UL) /*!< Max index of SUITPUBKEY[3] array.                                  */
  #define SICR_AROT_WIFICORE_SUITPUBKEY_MinIndex (0UL) /*!< Min index of SUITPUBKEY[3] array.                                  */

/* SICR_AROT_WIFICORE_SUITPUBKEY_NONCE: The initialization vector of the encryption algorithm used to protect the local domain
                                         SUIT manifest public key generation [n]. */


/* VALUE @Bits 0..31 : Value of nonce used by AEAD. */
  #define SICR_AROT_WIFICORE_SUITPUBKEY_NONCE_VALUE_Pos (0UL) /*!< Position of VALUE field.                                    */
  #define SICR_AROT_WIFICORE_SUITPUBKEY_NONCE_VALUE_Msk (0xFFFFFFFFUL << SICR_AROT_WIFICORE_SUITPUBKEY_NONCE_VALUE_Pos) /*!< Bit
                                                                            mask of VALUE field.*/


/* SICR_AROT_WIFICORE_SUITPUBKEY_ATTR: The attributes of the local domain firmware master encryption key generation [n]. This
                                        field is used as an additional authenticated data (AAD) in AEAD. */


/* TYPE @Bits 0..15 : Type of the key. This field should follow the key type encoding from PSA Crypto API v1.2.1. */
  #define SICR_AROT_WIFICORE_SUITPUBKEY_ATTR_TYPE_Pos (0UL) /*!< Position of TYPE field.                                       */
  #define SICR_AROT_WIFICORE_SUITPUBKEY_ATTR_TYPE_Msk (0xFFFFUL << SICR_AROT_WIFICORE_SUITPUBKEY_ATTR_TYPE_Pos) /*!< Bit mask of
                                                                            TYPE field.*/

/* LEN @Bits 16..31 : Length of the key in bits. */
  #define SICR_AROT_WIFICORE_SUITPUBKEY_ATTR_LEN_Pos (16UL) /*!< Position of LEN field.                                        */
  #define SICR_AROT_WIFICORE_SUITPUBKEY_ATTR_LEN_Msk (0xFFFFUL << SICR_AROT_WIFICORE_SUITPUBKEY_ATTR_LEN_Pos) /*!< Bit mask of
                                                                            LEN field.*/


/* SICR_AROT_WIFICORE_SUITPUBKEY_PUBKEY: The local domain SUIT manifest public key generation [n]. */
  #define SICR_AROT_WIFICORE_SUITPUBKEY_PUBKEY_MaxCount (16UL) /*!< Max size of PUBKEY[16] array.                              */
  #define SICR_AROT_WIFICORE_SUITPUBKEY_PUBKEY_MaxIndex (15UL) /*!< Max index of PUBKEY[16] array.                             */
  #define SICR_AROT_WIFICORE_SUITPUBKEY_PUBKEY_MinIndex (0UL) /*!< Min index of PUBKEY[16] array.                              */

/* VALUE @Bits 0..31 : Value for word [o] in the key value [n]. */
  #define SICR_AROT_WIFICORE_SUITPUBKEY_PUBKEY_VALUE_Pos (0UL) /*!< Position of VALUE field.                                   */
  #define SICR_AROT_WIFICORE_SUITPUBKEY_PUBKEY_VALUE_Msk (0xFFFFFFFFUL << SICR_AROT_WIFICORE_SUITPUBKEY_PUBKEY_VALUE_Pos) /*!<
                                                                            Bit mask of VALUE field.*/


/* SICR_AROT_WIFICORE_SUITPUBKEY_MAC: The authentication tag of the local domain SUIT manifest public key generation [n]. */
  #define SICR_AROT_WIFICORE_SUITPUBKEY_MAC_MaxCount (4UL) /*!< Max size of MAC[4] array.                                      */
  #define SICR_AROT_WIFICORE_SUITPUBKEY_MAC_MaxIndex (3UL) /*!< Max index of MAC[4] array.                                     */
  #define SICR_AROT_WIFICORE_SUITPUBKEY_MAC_MinIndex (0UL) /*!< Min index of MAC[4] array.                                     */

/* VALUE @Bits 0..31 : The word [o] of the authentication tag. */
  #define SICR_AROT_WIFICORE_SUITPUBKEY_MAC_VALUE_Pos (0UL) /*!< Position of VALUE field.                                      */
  #define SICR_AROT_WIFICORE_SUITPUBKEY_MAC_VALUE_Msk (0xFFFFFFFFUL << SICR_AROT_WIFICORE_SUITPUBKEY_MAC_VALUE_Pos) /*!< Bit
                                                                            mask of VALUE field.*/


/* SICR_AROT_WIFICORE_SUITPUBKEY_RFU: (unspecified) */
  #define SICR_AROT_WIFICORE_SUITPUBKEY_RFU_MaxCount (2UL) /*!< Max size of RFU[2] array.                                      */
  #define SICR_AROT_WIFICORE_SUITPUBKEY_RFU_MaxIndex (1UL) /*!< Max index of RFU[2] array.                                     */
  #define SICR_AROT_WIFICORE_SUITPUBKEY_RFU_MinIndex (0UL) /*!< Min index of RFU[2] array.                                     */

/* VALUE @Bits 0..31 : RFU word [o]. */
  #define SICR_AROT_WIFICORE_SUITPUBKEY_RFU_VALUE_Pos (0UL) /*!< Position of VALUE field.                                      */
  #define SICR_AROT_WIFICORE_SUITPUBKEY_RFU_VALUE_Msk (0xFFFFFFFFUL << SICR_AROT_WIFICORE_SUITPUBKEY_RFU_VALUE_Pos) /*!< Bit
                                                                            mask of VALUE field.*/



/* ====================================== Struct SICR_AROT_WIFICORE_DATAPROTECTION_UICR ====================================== */
/**
  * @brief UICR [SICR_AROT_WIFICORE_DATAPROTECTION_UICR] Authentication tag used for validation of the content of the UICRs. The
            UICRs content provides information about a domain peripherals associations and memory layout configuration. It is
            stored in an unencrypted form in a dedicated memory location. A validation shall be performed using an AEAD scheme
            realized by AES-256 GCM mode, with the domain KEK used as a secret key and UICR content used as additional
            authenticated data (AAD). The initialization vector is provided in NONCE register.

  */
typedef struct {
  __IOM uint32_t  NONCE;                             /*!< (@ 0x00000000) The initialization vector of the encryption algorithm
                                                                         used to protect the domain UICRs content.*/
  __IOM uint32_t  MAC[4];                            /*!< (@ 0x00000004) The authentication tag of the domain UICRs.           */
  __IOM uint32_t  RFU[3];                            /*!< (@ 0x00000014) (unspecified)                                         */
} NRF_SICR_AROT_WIFICORE_DATAPROTECTION_UICR_Type;   /*!< Size = 32 (0x020)                                                    */

/* SICR_AROT_WIFICORE_DATAPROTECTION_UICR_NONCE: The initialization vector of the encryption algorithm used to protect the
                                                  domain UICRs content. */


/* VALUE @Bits 0..31 : Value of nonce used by AEAD. */
  #define SICR_AROT_WIFICORE_DATAPROTECTION_UICR_NONCE_VALUE_Pos (0UL) /*!< Position of VALUE field.                           */
  #define SICR_AROT_WIFICORE_DATAPROTECTION_UICR_NONCE_VALUE_Msk (0xFFFFFFFFUL << SICR_AROT_WIFICORE_DATAPROTECTION_UICR_NONCE_VALUE_Pos)
                                                                            /*!< Bit mask of VALUE field.*/


/* SICR_AROT_WIFICORE_DATAPROTECTION_UICR_MAC: The authentication tag of the domain UICRs. */
  #define SICR_AROT_WIFICORE_DATAPROTECTION_UICR_MAC_MaxCount (4UL) /*!< Max size of MAC[4] array.                             */
  #define SICR_AROT_WIFICORE_DATAPROTECTION_UICR_MAC_MaxIndex (3UL) /*!< Max index of MAC[4] array.                            */
  #define SICR_AROT_WIFICORE_DATAPROTECTION_UICR_MAC_MinIndex (0UL) /*!< Min index of MAC[4] array.                            */

/* VALUE @Bits 0..31 : The word [n] of the authentication tag. */
  #define SICR_AROT_WIFICORE_DATAPROTECTION_UICR_MAC_VALUE_Pos (0UL) /*!< Position of VALUE field.                             */
  #define SICR_AROT_WIFICORE_DATAPROTECTION_UICR_MAC_VALUE_Msk (0xFFFFFFFFUL << SICR_AROT_WIFICORE_DATAPROTECTION_UICR_MAC_VALUE_Pos)
                                                                            /*!< Bit mask of VALUE field.*/


/* SICR_AROT_WIFICORE_DATAPROTECTION_UICR_RFU: (unspecified) */
  #define SICR_AROT_WIFICORE_DATAPROTECTION_UICR_RFU_MaxCount (3UL) /*!< Max size of RFU[3] array.                             */
  #define SICR_AROT_WIFICORE_DATAPROTECTION_UICR_RFU_MaxIndex (2UL) /*!< Max index of RFU[3] array.                            */
  #define SICR_AROT_WIFICORE_DATAPROTECTION_UICR_RFU_MinIndex (0UL) /*!< Min index of RFU[3] array.                            */

/* VALUE @Bits 0..31 : RFU word [n]. */
  #define SICR_AROT_WIFICORE_DATAPROTECTION_UICR_RFU_VALUE_Pos (0UL) /*!< Position of VALUE field.                             */
  #define SICR_AROT_WIFICORE_DATAPROTECTION_UICR_RFU_VALUE_Msk (0xFFFFFFFFUL << SICR_AROT_WIFICORE_DATAPROTECTION_UICR_RFU_VALUE_Pos)
                                                                            /*!< Bit mask of VALUE field.*/



/* ======================================== Struct SICR_AROT_WIFICORE_DATAPROTECTION ========================================= */
/**
  * @brief DATAPROTECTION [SICR_AROT_WIFICORE_DATAPROTECTION] Elements used for validation of data provisioned onto a device by
            the local domain.

  */
typedef struct {
  __IOM NRF_SICR_AROT_WIFICORE_DATAPROTECTION_UICR_Type UICR; /*!< (@ 0x00000000) Authentication tag used for validation of the
                                                                            content of the UICRs. The UICRs content provides
                                                                            information about a domain peripherals associations
                                                                            and memory layout configuration. It is stored in an
                                                                            unencrypted form in a dedicated memory location. A
                                                                            validation shall be performed using an AEAD scheme
                                                                            realized by AES-256 GCM mode, with the domain KEK
                                                                            used as a secret key and UICR content used as
                                                                            additional authenticated data (AAD). The
                                                                            initialization vector is provided in NONCE
                                                                            register.*/
} NRF_SICR_AROT_WIFICORE_DATAPROTECTION_Type;        /*!< Size = 32 (0x020)                                                    */


/* ========================================== Struct SICR_AROT_WIFICORE_DOMAINSTATE ========================================== */
/**
  * @brief DOMAINSTATE [SICR_AROT_WIFICORE_DOMAINSTATE] Registers holding the information regarding the local domain state.
  */
typedef struct {
  __IOM uint32_t  RFU[3];                            /*!< (@ 0x00000000) (unspecified)                                         */
  __IOM uint32_t  LCS;                               /*!< (@ 0x0000000C) The local domain lifecycle state as determined by the
                                                                         URoT.*/
} NRF_SICR_AROT_WIFICORE_DOMAINSTATE_Type;           /*!< Size = 16 (0x010)                                                    */

/* SICR_AROT_WIFICORE_DOMAINSTATE_RFU: (unspecified) */
  #define SICR_AROT_WIFICORE_DOMAINSTATE_RFU_MaxCount (3UL) /*!< Max size of RFU[3] array.                                     */
  #define SICR_AROT_WIFICORE_DOMAINSTATE_RFU_MaxIndex (2UL) /*!< Max index of RFU[3] array.                                    */
  #define SICR_AROT_WIFICORE_DOMAINSTATE_RFU_MinIndex (0UL) /*!< Min index of RFU[3] array.                                    */

/* VALUE @Bits 0..31 : RFU word [n]. */
  #define SICR_AROT_WIFICORE_DOMAINSTATE_RFU_VALUE_Pos (0UL) /*!< Position of VALUE field.                                     */
  #define SICR_AROT_WIFICORE_DOMAINSTATE_RFU_VALUE_Msk (0xFFFFFFFFUL << SICR_AROT_WIFICORE_DOMAINSTATE_RFU_VALUE_Pos) /*!< Bit
                                                                            mask of VALUE field.*/


/* SICR_AROT_WIFICORE_DOMAINSTATE_LCS: The local domain lifecycle state as determined by the URoT. */

/* STATE @Bits 0..31 : The local domain lifecycle state. */
  #define SICR_AROT_WIFICORE_DOMAINSTATE_LCS_STATE_Pos (0UL) /*!< Position of STATE field.                                     */
  #define SICR_AROT_WIFICORE_DOMAINSTATE_LCS_STATE_Msk (0xFFFFFFFFUL << SICR_AROT_WIFICORE_DOMAINSTATE_LCS_STATE_Pos) /*!< Bit
                                                                            mask of STATE field.*/
  #define SICR_AROT_WIFICORE_DOMAINSTATE_LCS_STATE_Min (0x3590FCC5UL) /*!< Min enumerator value of STATE field.                */
  #define SICR_AROT_WIFICORE_DOMAINSTATE_LCS_STATE_Max (0xF6852179UL) /*!< Max enumerator value of STATE field.                */
  #define SICR_AROT_WIFICORE_DOMAINSTATE_LCS_STATE_AssemblyAndTest (0x3590FCC5UL) /*!< The local domain assets are installed in
                                                                            this state. This includes the optional local domain
                                                                            ARoT (its secure program).*/
  #define SICR_AROT_WIFICORE_DOMAINSTATE_LCS_STATE_ARoTProvisioning (0xF6852179UL) /*!< The optional local domain ARoT is
                                                                            provisioned in this state.*/
  #define SICR_AROT_WIFICORE_DOMAINSTATE_LCS_STATE_Secured (0x9F6B5F01UL) /*!< The local domain assets are provisioned and
                                                                            secured.*/



/* ================================================ Struct SICR_AROT_WIFICORE ================================================ */
/**
  * @brief WIFICORE [SICR_AROT_WIFICORE] (unspecified)
  */
typedef struct {
  __IOM NRF_SICR_AROT_WIFICORE_FWENC_Type FWENC[2];  /*!< (@ 0x00000000) Local domain firmware master encryption key. The key is
                                                                         stored in an encrypted then authenticated form using an
                                                                         AEAD scheme realized by AES-256 GCM mode, with the
                                                                         local domain KEK used as a secret key. The
                                                                         initialization vector is provided in NONCE register.
                                                                         Key attributes from ATTR register shall be used as an
                                                                         additional authenticated data (AAD) in AEAD.*/
  __IOM NRF_SICR_AROT_WIFICORE_AUTHDEBUGKEY_Type AUTHDEBUGKEY[3]; /*!< (@ 0x00000080) Local domain authenticated debug access
                                                                            public key. The public key is stored as additional
                                                                            authenticated data (AAD) in unencrypted form using
                                                                            an AEAD scheme realized by AES-256 GCM mode, with
                                                                            the local domain KEK used as a secret key. The
                                                                            initialization vector is provided in NONCE register.
                                                                            Key attributes from ATTR register shall be used as
                                                                            an additional authenticated data (AAD) in AEAD. The
                                                                            content of PUBKEY registers shall be used as an
                                                                            additional authenticated data (AAD) in AEAD.*/
  __IOM NRF_SICR_AROT_WIFICORE_SUITPUBKEY_Type SUITPUBKEY[3]; /*!< (@ 0x000001A0) Public key used by the local domain SUIT
                                                                            manifest. The public key is stored as additional
                                                                            authenticated data (AAD) in unencrypted form using
                                                                            an AEAD scheme realized by AES-256 GCM mode, with
                                                                            the local domain KEK used as a secret key. The
                                                                            initialization vector is provided in NONCE register.
                                                                            Key attributes from ATTR register shall be used as
                                                                            an additional authenticated data (AAD) in AEAD. The
                                                                            content of PUBKEY registers shall be used as an
                                                                            additional authenticated data (AAD) in AEAD.*/
  __IOM NRF_SICR_AROT_WIFICORE_DATAPROTECTION_Type DATAPROTECTION; /*!< (@ 0x000002C0) Elements used for validation of data
                                                                            provisioned onto a device by the local domain.*/
  __IOM NRF_SICR_AROT_WIFICORE_DOMAINSTATE_Type DOMAINSTATE; /*!< (@ 0x000002E0) Registers holding the information regarding the
                                                                            local domain state.*/
  __IM  uint32_t  RESERVED[68];
} NRF_SICR_AROT_WIFICORE_Type;                       /*!< Size = 1024 (0x400)                                                  */


/* ==================================================== Struct SICR_AROT ===================================================== */
/**
  * @brief AROT [SICR_AROT] Interface used by the secure domain firmware to extend the RoT to the other local domains and store
            information on configuration of debug access ports, CTRL-AP methods, and other platfrom security related
            configurations per domain. These registers are only accessed the secure domain firmware. Any operations related to
            the local domains must be requested via the secure domain firmware API.

  */
typedef struct {
  __IOM NRF_SICR_AROT_SECURE_Type_fixed SECURE;            /*!< (@ 0x00000000) Any next-stage secure domain firmware related.        */
  __IOM NRF_SICR_AROT_APPLICATION_Type_fixed APPLICATION;  /*!< (@ 0x00000400) Extended RoT to the application core/domain.          */
  __IOM NRF_SICR_AROT_RADIO_Type_fixed RADIO;              /*!< (@ 0x00000800) Interface to extend the RoT to the radio core/domain. */
  __IOM NRF_SICR_AROT_CELLULARCORE_Type_fixed CELLULARCORE; /*!< (@ 0x00000C00) Interface to extend the RoT to the cellular
                                                                          core/domain.*/
  __IOM NRF_SICR_AROT_WIFICORE_Type WIFICORE;        /*!< (@ 0x00001000) (unspecified)                                         */
} NRF_SICR_AROT_Type_fixed;                          /*!< Size = 5120 (0x1400)                                                 */


/* ======================================================= Struct SICR ======================================================= */
/**
  * @brief Secure Information Configuration Registers
  */
  typedef struct {                                   /*!< SICR Structure                                                       */
    __IOM NRF_SICR_IROT_Type IROT;                   /*!< (@ 0x00000000) Information on immutable Root of Trust. Secure domain
                                                                         ROM writes these registers only in LCS Empty, RoT and
                                                                         DEPLOYED.*/
    __IM uint32_t RESERVED[24];
    __IOM NRF_SICR_UROT_Type UROT;                   /*!< (@ 0x000000F0) Interface to store information related to the
                                                                         updateable RoT.*/
    __IM uint32_t RESERVED1[60];
    __IOM NRF_SICR_AROT_Type_fixed AROT;             /*!< (@ 0x00001500) Interface used by the secure domain firmware to extend
                                                                         the RoT to the other local domains and store
                                                                         information on configuration of debug access ports,
                                                                         CTRL-AP methods, and other platfrom security related
                                                                         configurations per domain. These registers are only
                                                                         accessed the secure domain firmware. Any operations
                                                                         related to the local domains must be requested via the
                                                                         secure domain firmware API.*/
  } NRF_SICR_Type_fixed;                             /*!< Size = 9472 (0x2500)                                                 */

#endif                                               /*!< !defined(__ASSEMBLER__) && !defined(__ASSEMBLY__)                    */

#define NRF_SICR_AROT_SECURE_Type NRF_SICR_AROT_SECURE_Type_fixed
#define NRF_SICR_AROT_APPLICATION_Type NRF_SICR_AROT_APPLICATION_Type_fixed
#define NRF_SICR_AROT_RADIO_Type NRF_SICR_AROT_RADIO_Type_fixed
#define NRF_SICR_AROT_CELLULARCORE_Type NRF_SICR_AROT_CELLULARCORE_Type_fixed
#define NRF_SICR_AROT_Type NRF_SICR_AROT_Type_fixed
#define NRF_SICR_Type NRF_SICR_Type_fixed

#ifdef NRF_SECURE_SICR_S
    #undef NRF_SECURE_SICR_S
    #define NRF_SECURE_SICR_S                 ((NRF_SICR_Type_fixed*)               NRF_SECURE_SICR_S_BASE)
#endif /* NRF_SECURE_SICR_S */

#endif /* defined(NRF_SECURE) */
#endif /* defined(NRF9230_ENGB_XXAA) */

/**************************************************************************************************/
/* End fixups section for NRF9230_ENGB_XXAA (HSOC 1.1)                                            */
/**************************************************************************************************/

/**************************************************************************************************/
/* Start fixups section for NRF9230_XXAA (HALTI FP1)                                              */
/**************************************************************************************************/

#if defined(NRF9230_XXAA)
    /* External part */
    #if defined(NRF_APPLICATION)
        #define NRF_DOMAIN NRF_DOMAIN_APPLICATION
    #elif defined(NRF_RADIOCORE)
        #define NRF_DOMAIN NRF_DOMAIN_RADIOCORE
    #elif defined(NRF_FLPR)
        #define NRF_DOMAIN NRF_DOMAIN_GLOBALFAST
    #elif defined(NRF_PPR)
        #define NRF_DOMAIN NRF_DOMAIN_GLOBALSLOW
    #endif

    #if defined(NRF_TRUSTZONE_NONSECURE)
        #if defined(NRF_APPLICATION)
            #define GRTC_IRQ_GROUP 2
            #define GPIOTE_IRQ_GROUP 2
        #elif defined(NRF_RADIOCORE)
            #define GRTC_IRQ_GROUP 4
            #define GPIOTE_IRQ_GROUP 4
        #endif
    #elif defined(NRF_PPR)
        #define GRTC_IRQ_GROUP 10
        #define GPIOTE_IRQ_GROUP 2
    #elif defined(NRF_FLPR)
        #define GRTC_IRQ_GROUP 11
        #define GPIOTE_IRQ_GROUP 2
    #else
        #if defined(NRF_APPLICATION)
            #define GRTC_IRQ_GROUP 3
            #define GPIOTE_IRQ_GROUP 3
        #elif defined(NRF_RADIOCORE)
            #define GRTC_IRQ_GROUP 5
            #define GPIOTE_IRQ_GROUP 5
        #endif
    #endif

    #define GPIOTE131_CH_NUM (GPIOTE131_GPIOTE_NCHANNELS_MAX + 1UL)
    #define GPIOTE131_AVAILABLE_GPIO_PORTS 0x3A07UL

    #define RADIO_TIMING_RU_Legacy 0
    #define RADIO_TIMING_RU_Fast   1

    /* Internal part */
    #if defined(NRF_TRUSTZONE_NONSECURE)
        #if defined(NRF_SECURE)
            #define GRTC_IRQ_GROUP 0
            #define GPIOTE_IRQ_GROUP 0
        #elif defined(NRF_CELLCORE)
            #define GRTC_IRQ_GROUP 8
            #define GPIOTE_IRQ_GROUP 4
        #endif
    #elif defined(NRF_SYSCTRL)
        #define GRTC_IRQ_GROUP 7
        #define GPIOTE_IRQ_GROUP 6
    #elif defined(NRF_BBPR)
        #define GRTC_IRQ_GROUP 12
    #else
        #if defined(NRF_SECURE)
            #define GRTC_IRQ_GROUP 1
            #define GPIOTE_IRQ_GROUP 1
        #elif defined(NRF_CELLCORE)
            #define GRTC_IRQ_GROUP 9
            #define GPIOTE_IRQ_GROUP 5
        #endif
    #endif

    #if !defined(GRTC_IRQ_GROUP)
        #error Unknown core.
    #endif

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

    #define DPPIC0_CH_NUM DPPIC0_CH_NUM_SIZE
    #define DPPIC1_CH_NUM DPPIC1_CH_NUM_SIZE

    #define DPPIC0_GROUP_NUM DPPIC0_GROUP_NUM_SIZE
    #define DPPIC1_GROUP_NUM DPPIC1_GROUP_NUM_SIZE

    #define P0_PIN_NUM  P0_PIN_NUM_SIZE
    #define P1_PIN_NUM  P1_PIN_NUM_SIZE
    #define P2_PIN_NUM  P2_PIN_NUM_SIZE
    #define P6_PIN_NUM  P6_PIN_NUM_SIZE
    #define P8_PIN_NUM  P8_PIN_NUM_SIZE
    #define P9_PIN_NUM  P9_PIN_NUM_SIZE
    #define P10_PIN_NUM P10_PIN_NUM_SIZE
    #define P11_PIN_NUM P11_PIN_NUM_SIZE
    #define P12_PIN_NUM P12_PIN_NUM_SIZE
    #define P13_PIN_NUM P13_PIN_NUM_SIZE

    #define RTC_CC_NUM    RTC_CC_NUM_SIZE
    #define RTC130_CC_NUM RTC130_CC_NUM_SIZE
    #define RTC131_CC_NUM RTC131_CC_NUM_SIZE

    #define DPPIC020_CH_NUM (DPPIC020_CH_NUM_MAX + 1UL)
    #define DPPIC030_CH_NUM (DPPIC030_CH_NUM_MAX + 1UL)
    #define DPPIC120_CH_NUM (DPPIC120_CH_NUM_MAX + 1UL)
    #define DPPIC130_CH_NUM (DPPIC130_CH_NUM_MAX + 1UL)
    #define DPPIC131_CH_NUM (DPPIC131_CH_NUM_MAX + 1UL)
    #define DPPIC132_CH_NUM (DPPIC132_CH_NUM_MAX + 1UL)
    #define DPPIC133_CH_NUM (DPPIC133_CH_NUM_MAX + 1UL)
    #define DPPIC134_CH_NUM (DPPIC134_CH_NUM_MAX + 1UL)
    #define DPPIC135_CH_NUM (DPPIC135_CH_NUM_MAX + 1UL)
    #define DPPIC136_CH_NUM (DPPIC136_CH_NUM_MAX + 1UL)

    #define DPPIC020_GROUP_NUM (DPPIC020_GROUP_NUM_MAX + 1UL)
    #define DPPIC030_GROUP_NUM (DPPIC030_GROUP_NUM_MAX + 1UL)
    #define DPPIC120_GROUP_NUM (DPPIC120_GROUP_NUM_MAX + 1UL)
    #define DPPIC130_GROUP_NUM (DPPIC130_GROUP_NUM_MAX + 1UL)
    #define DPPIC131_GROUP_NUM (DPPIC131_GROUP_NUM_MAX + 1UL)
    #define DPPIC132_GROUP_NUM (DPPIC132_GROUP_NUM_MAX + 1UL)
    #define DPPIC133_GROUP_NUM (DPPIC133_GROUP_NUM_MAX + 1UL)
    #define DPPIC134_GROUP_NUM (DPPIC134_GROUP_NUM_MAX + 1UL)
    #define DPPIC135_GROUP_NUM (DPPIC135_GROUP_NUM_MAX + 1UL)
    #define DPPIC136_GROUP_NUM (DPPIC136_GROUP_NUM_MAX + 1UL)

    #define EGU020_CH_NUM (EGU020_CH_NUM_MAX + 1UL)
    #define EGU130_CH_NUM (EGU130_CH_NUM_MAX + 1UL)

    #define TIMER020_MAX_SIZE (TIMER020_MAX_SIZE_MAX + 1UL)
    #define TIMER021_MAX_SIZE (TIMER021_MAX_SIZE_MAX + 1UL)
    #define TIMER022_MAX_SIZE (TIMER022_MAX_SIZE_MAX + 1UL)
    #define TIMER120_MAX_SIZE (TIMER120_MAX_SIZE_MAX + 1UL)
    #define TIMER121_MAX_SIZE (TIMER121_MAX_SIZE_MAX + 1UL)
    #define TIMER130_MAX_SIZE (TIMER130_MAX_SIZE_MAX + 1UL)
    #define TIMER131_MAX_SIZE (TIMER131_MAX_SIZE_MAX + 1UL)
    #define TIMER132_MAX_SIZE (TIMER132_MAX_SIZE_MAX + 1UL)
    #define TIMER133_MAX_SIZE (TIMER133_MAX_SIZE_MAX + 1UL)
    #define TIMER134_MAX_SIZE (TIMER134_MAX_SIZE_MAX + 1UL)
    #define TIMER135_MAX_SIZE (TIMER135_MAX_SIZE_MAX + 1UL)
    #define TIMER136_MAX_SIZE (TIMER136_MAX_SIZE_MAX + 1UL)
    #define TIMER137_MAX_SIZE (TIMER137_MAX_SIZE_MAX + 1UL)

    #define TIMER020_CC_NUM (TIMER020_CC_NUM_MAX + 1UL)
    #define TIMER021_CC_NUM (TIMER021_CC_NUM_MAX + 1UL)
    #define TIMER022_CC_NUM (TIMER022_CC_NUM_MAX + 1UL)
    #define TIMER120_CC_NUM (TIMER120_CC_NUM_MAX + 1UL)
    #define TIMER121_CC_NUM (TIMER121_CC_NUM_MAX + 1UL)
    #define TIMER130_CC_NUM (TIMER130_CC_NUM_MAX + 1UL)
    #define TIMER131_CC_NUM (TIMER131_CC_NUM_MAX + 1UL)
    #define TIMER132_CC_NUM (TIMER132_CC_NUM_MAX + 1UL)
    #define TIMER133_CC_NUM (TIMER133_CC_NUM_MAX + 1UL)
    #define TIMER134_CC_NUM (TIMER134_CC_NUM_MAX + 1UL)
    #define TIMER135_CC_NUM (TIMER135_CC_NUM_MAX + 1UL)
    #define TIMER136_CC_NUM (TIMER136_CC_NUM_MAX + 1UL)
    #define TIMER137_CC_NUM (TIMER137_CC_NUM_MAX + 1UL)

#endif

/**************************************************************************************************/
/* End fixups section for NRF9230_XXAA (HALTI FP1)                                                */
/**************************************************************************************************/

#endif // MDK_FIXUPS_H__
