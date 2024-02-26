#ifndef MDK_FIXUPS_H__
#define MDK_FIXUPS_H__

/**************************************************************************************************/
/* Start fixups section for HALTIUM_XXAA                                                          */
/**************************************************************************************************/

#if defined(NRF7140_XXAA) || defined(NRF9230_ENGA_XXAA)
    #define HALTIUM_XXAA 1
#endif

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
/* Start fixups section for NRF54H20_ENGA                                                         */
/**************************************************************************************************/

#if defined(NRF54H20_ENGA_XXAA)
    #include "nrf54h20_enga_interim.h"

    /* Internal part */
    #if defined(NRF_TRUSTZONE_NONSECURE)
        #if defined(NRF_SECURE)
            #define GRTC_IRQ_GROUP 0
            #define GPIOTE_IRQ_GROUP 0
        #endif
    #elif defined(NRF_SYSCTRL)
        #define GRTC_IRQ_GROUP 6
        #define GPIOTE_IRQ_GROUP 6
    #else
        #if defined(NRF_SECURE)
            #define GRTC_IRQ_GROUP 1
            #define GPIOTE_IRQ_GROUP 1
        #endif
    #endif

    #if !defined(GRTC_IRQ_GROUP)
        #error Unknown core.
    #endif

    #define IPCMAP_CHANNEL_MaxCount (16UL)

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

    /* TODO: HM-21442 */
    #define OSCRFR_TRIM_OSC_VAL_Val35    OSCRFR_TRIM_OSC_VAL_Val23
    #define OSCRFR_TRIM_OSC_VAL_Val154   OSCRFR_TRIM_OSC_VAL_Val54
    #define OSCRFR_TRIM_OSC_VAL_Val670   OSCRFR_TRIM_OSC_VAL_Val98
    #define OSCRFR_TRIM_OSC_VAL_ValNeg54 OSCRFR_TRIM_OSC_VAL_ValNeg51
    #define OSCRFR_TRIM_OSC_VAL_ValNeg49 OSCRFR_TRIM_OSC_VAL_ValNeg42
    #define OSCRFR_TRIM_OSC_VAL_ValNeg37 OSCRFR_TRIM_OSC_VAL_ValNeg31
    #define OSCRFR_TRIM_OSC_VAL_ValNeg26 OSCRFR_TRIM_OSC_VAL_ValNeg18

#endif

/**************************************************************************************************/
/* End fixups section for NRF54H20_ENGA                                                           */
/**************************************************************************************************/

/**************************************************************************************************/
/* Start fixups section for NRF54H20_XXAA (LILIUMFP1)                                             */
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

    /* TODO: HM-24456 */
    #undef  SAADC_TESTCTRL_LINCALEN_Disabled
    #undef  SAADC_TESTCTRL_CALDMAWREN_Disabled
    #define SAADC_TESTCTRL_LINCALEN_Disabled   (0x0UL)
    #define SAADC_TESTCTRL_CALDMAWREN_Disabled (0x0UL)
#endif

/**************************************************************************************************/
/* End fixups section for NRF54H20_XXAA (LILIUMFP1)                                               */
/**************************************************************************************************/

/**************************************************************************************************/
/* Start fixups section for NRF54L15_ENGA_XXAA                                                    */
/**************************************************************************************************/

#if defined(NRF54L15_ENGA_XXAA)
    #include "nrf54l15_enga_interim.h"

    /* TODO: HM-24456 */
    #undef  SAADC_TESTCTRL_LINCALEN_Disabled
    #undef  SAADC_TESTCTRL_CALDMAWREN_Disabled
    #define SAADC_TESTCTRL_LINCALEN_Disabled   (0x0UL)
    #define SAADC_TESTCTRL_CALDMAWREN_Disabled (0x0UL)
#endif

/**************************************************************************************************/
/* End fixups section for NRF54L15_ENGA_XXAA                                                      */
/**************************************************************************************************/

/**************************************************************************************************/
/* Start fixups section for NRF54L15_XXAA                                                         */
/**************************************************************************************************/

#if defined(NRF54L15_XXAA)
    #include "nrf54l15_interim.h"

    /* TODO: HM-24456 */
    #undef  SAADC_TESTCTRL_LINCALEN_Disabled
    #undef  SAADC_TESTCTRL_CALDMAWREN_Disabled
    #define SAADC_TESTCTRL_LINCALEN_Disabled   (0x0UL)
    #define SAADC_TESTCTRL_CALDMAWREN_Disabled (0x0UL)
#endif

/**************************************************************************************************/
/* End fixups section for NRF54L15_XXAA                                                           */
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

    #define P0_PIN_NUM (P0_PIN_NUM_MAX + 1UL)
    #define P1_PIN_NUM (P1_PIN_NUM_MAX + 1UL)
    #define P2_PIN_NUM (P2_PIN_NUM_MAX + 1UL)
    #define P3_PIN_NUM (P3_PIN_NUM_MAX + 1UL)
    #define P5_PIN_NUM (P5_PIN_NUM_MAX + 1UL)
    #define P6_PIN_NUM (P6_PIN_NUM_MAX + 1UL)
    #define P8_PIN_NUM (P8_PIN_NUM_MAX + 1UL)
    #define P9_PIN_NUM (P9_PIN_NUM_MAX + 1UL)

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

    #define RTC_CC_NUM    (RTC_CC_NUM_MAX + 1UL)
    #define RTC130_CC_NUM (RTC130_CC_NUM_MAX + 1UL)
    #define RTC131_CC_NUM (RTC131_CC_NUM_MAX + 1UL)

    /* MLT-7849 */
    #define TWIM_SHORTS_LASTRX_STOP_Pos (12UL)
    #define TWIM_SHORTS_LASTRX_STOP_Msk (0x1UL << TWIM_SHORTS_LASTRX_STOP_Pos)
    #define TWIM_SHORTS_LASTRX_STOP_Min (0x0UL)
    #define TWIM_SHORTS_LASTRX_STOP_Max (0x1UL)
    #define TWIM_SHORTS_LASTRX_STOP_Disabled (0x0UL)
    #define TWIM_SHORTS_LASTRX_STOP_Enabled (0x1UL)

    /* TODO: HM-24456 */
    #undef  SAADC_TESTCTRL_LINCALEN_Disabled
    #undef  SAADC_TESTCTRL_CALDMAWREN_Disabled
    #define SAADC_TESTCTRL_LINCALEN_Disabled   (0x0UL)
    #define SAADC_TESTCTRL_CALDMAWREN_Disabled (0x0UL)
#endif

/**************************************************************************************************/
/* End fixups section for NRF7140_XXAA                                                            */
/**************************************************************************************************/

/**************************************************************************************************/
/* Start fixups section for NRF9230_ENGA_XXAA                                                          */
/**************************************************************************************************/

#if defined(NRF9230_ENGA_XXAA)

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

    #define GPIOTE131_CH_NUM (GPIOTE131_GPIOTE_NCHANNELS_MAX + 1UL)
    #define GPIOTE131_AVAILABLE_GPIO_PORTS 0x3A07UL

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

    #define RTC130_CC_NUM (RTC130_CC_NUM_MAX + 1UL)
    #define RTC131_CC_NUM (RTC131_CC_NUM_MAX + 1UL)

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

    #if defined(P8_PIN_NUM)
        #undef P8_PIN_NUM
    #endif
    #define P8_PIN_NUM (P8_PIN_NUM_MAX - P8_PIN_NUM_MIN + 1)

    #if defined(P9_PIN_NUM)
        #undef P9_PIN_NUM
    #endif
    #define P9_PIN_NUM (P9_PIN_NUM_MAX - P9_PIN_NUM_MIN + 1)

    #if defined(P10_PIN_NUM)
        #undef P10_PIN_NUM
    #endif
    #define P10_PIN_NUM (P10_PIN_NUM_MAX - P10_PIN_NUM_MIN + 1)

    #if defined(P11_PIN_NUM)
        #undef P11_PIN_NUM
    #endif
    #define P11_PIN_NUM (P11_PIN_NUM_MAX - P11_PIN_NUM_MIN + 1)

    #if defined(P12_PIN_NUM)
        #undef P12_PIN_NUM
    #endif
    #define P12_PIN_NUM (P12_PIN_NUM_MAX - P12_PIN_NUM_MIN + 1)

    #if defined(P13_PIN_NUM)
        #undef P13_PIN_NUM
    #endif
    #define P13_PIN_NUM (P13_PIN_NUM_MAX - P13_PIN_NUM_MIN + 1)

    /* TODO: MDK-2220 */

    #if defined(P0_PINS_PRESENT)
        #undef P0_PINS_PRESENT
    #endif
    #define P0_PINS_PRESENT 0x1FFFUL

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

    #if defined(P8_PINS_PRESENT)
        #undef P8_PINS_PRESENT
    #endif
    #define P8_PINS_PRESENT 0x1FUL

    #if defined(P9_PINS_PRESENT)
        #undef P9_PINS_PRESENT
    #endif
    #define P9_PINS_PRESENT 0x3FUL

    #if defined(P10_PINS_PRESENT)
        #undef P10_PINS_PRESENT
    #endif
    #define P10_PINS_PRESENT 0xFFUL

    #if defined(P11_PINS_PRESENT)
        #undef P11_PINS_PRESENT
    #endif
    #define P11_PINS_PRESENT 0xFFUL

    #if defined(P12_PINS_PRESENT)
        #undef P12_PINS_PRESENT
    #endif
    #define P12_PINS_PRESENT 0x7UL

    #if defined(P13_PINS_PRESENT)
        #undef P13_PINS_PRESENT
    #endif
    #define P13_PINS_PRESENT 0xFUL

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

    #if defined(DPPIC0_CH_NUM_MAX) && !defined(DPPIC0_CH_NUM)
        #define DPPIC0_CH_NUM (DPPIC0_CH_NUM_MAX + 1UL)
    #endif
    #if defined(DPPIC1_CH_NUM_MAX) && !defined(DPPIC1_CH_NUM)
        #define DPPIC1_CH_NUM (DPPIC1_CH_NUM_MAX + 1UL)
    #endif

    /* TODO: HM-21442 */
    #define OSCRFR_TRIM_OSC_VAL_Val35    OSCRFR_TRIM_OSC_VAL_Val23
    #define OSCRFR_TRIM_OSC_VAL_Val154   OSCRFR_TRIM_OSC_VAL_Val54
    #define OSCRFR_TRIM_OSC_VAL_Val670   OSCRFR_TRIM_OSC_VAL_Val98
    #define OSCRFR_TRIM_OSC_VAL_ValNeg54 OSCRFR_TRIM_OSC_VAL_ValNeg51
    #define OSCRFR_TRIM_OSC_VAL_ValNeg49 OSCRFR_TRIM_OSC_VAL_ValNeg42
    #define OSCRFR_TRIM_OSC_VAL_ValNeg37 OSCRFR_TRIM_OSC_VAL_ValNeg31
    #define OSCRFR_TRIM_OSC_VAL_ValNeg26 OSCRFR_TRIM_OSC_VAL_ValNeg18

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

    #define SPIS120_EASYDMA_MAXCNT_SIZE 16
    #define SPIS130_EASYDMA_MAXCNT_SIZE 16
    #define SPIS131_EASYDMA_MAXCNT_SIZE 16
    #define SPIS132_EASYDMA_MAXCNT_SIZE 16
    #define SPIS133_EASYDMA_MAXCNT_SIZE 16
    #define SPIS134_EASYDMA_MAXCNT_SIZE 16
    #define SPIS135_EASYDMA_MAXCNT_SIZE 16
    #define SPIS136_EASYDMA_MAXCNT_SIZE 16
    #define SPIS137_EASYDMA_MAXCNT_SIZE 16

    #define UARTE120_EASYDMA_MAXCNT_SIZE 16
    #define UARTE130_EASYDMA_MAXCNT_SIZE 16
    #define UARTE131_EASYDMA_MAXCNT_SIZE 16
    #define UARTE132_EASYDMA_MAXCNT_SIZE 16
    #define UARTE133_EASYDMA_MAXCNT_SIZE 16
    #define UARTE134_EASYDMA_MAXCNT_SIZE 16
    #define UARTE135_EASYDMA_MAXCNT_SIZE 16
    #define UARTE136_EASYDMA_MAXCNT_SIZE 16
    #define UARTE137_EASYDMA_MAXCNT_SIZE 16

    #define DPPIC0_CH_NUM (DPPIC0_CH_NUM_MAX + 1UL)
    #define DPPIC1_CH_NUM (DPPIC1_CH_NUM_MAX + 1UL)

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

    #define DPPIC0_GROUP_NUM (DPPIC0_GROUP_NUM_MAX + 1UL)
    #define DPPIC1_GROUP_NUM (DPPIC1_GROUP_NUM_MAX + 1UL)

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

    #define RTC_CC_NUM (RTC_CC_NUM_MAX + 1UL)

    /* TODO: HM-24456 */
    #undef  SAADC_TESTCTRL_LINCALEN_Disabled
    #undef  SAADC_TESTCTRL_CALDMAWREN_Disabled
    #define SAADC_TESTCTRL_LINCALEN_Disabled   (0x0UL)
    #define SAADC_TESTCTRL_CALDMAWREN_Disabled (0x0UL)
#endif

/**************************************************************************************************/
/* End fixups section for NRF9230_ENGA_XXAA                                                            */
/**************************************************************************************************/

#endif // MDK_FIXUPS_H__
