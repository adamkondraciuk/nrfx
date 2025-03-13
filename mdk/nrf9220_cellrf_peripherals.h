/*

Copyright (c) 2010 - 2024, Nordic Semiconductor ASA

All rights reserved.

Redistribution and use in source and binary forms, with or without modification,
are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this
   list of conditions and the following disclaimer.

2. Redistributions in binary form, except as embedded into a Nordic
   Semiconductor ASA integrated circuit in a product or a software update for
   such product, must reproduce the above copyright notice, this list of
   conditions and the following disclaimer in the documentation and/or other
   materials provided with the distribution.

3. Neither the name of Nordic Semiconductor ASA nor the names of its
   contributors may be used to endorse or promote products derived from this
   software without specific prior written permission.

4. This software, with or without modification, must only be used with a
   Nordic Semiconductor ASA integrated circuit.

5. Any software provided in binary form under this license must not be reverse
   engineered, decompiled, modified and/or disassembled.

THIS SOFTWARE IS PROVIDED BY NORDIC SEMICONDUCTOR ASA "AS IS" AND ANY EXPRESS
OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
OF MERCHANTABILITY, NONINFRINGEMENT, AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL NORDIC SEMICONDUCTOR ASA OR CONTRIBUTORS BE
LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE
GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

*/

#ifndef NRF9220_CELLRF_PERIPHERALS_H
#define NRF9220_CELLRF_PERIPHERALS_H

#ifdef __cplusplus
    extern "C" {
#endif

#include <stdbool.h>
/*PCGCSlave*/
#define PCGCSLAVE_PRESENT 1
#define PCGCSLAVE_COUNT 3

#define PCGCS0_NUM_CLOCK_POWER_PAIR_MIN 0            /*!< Number of clock/power pairs used by PCGC Slave - [0..1]              */
#define PCGCS0_NUM_CLOCK_POWER_PAIR_MAX 1            /*!< Number of clock/power pairs used by PCGC Slave - [0..1]              */
#define PCGCS0_NUM_CLOCK_POWER_PAIR_SIZE 2           /*!< Number of clock/power pairs used by PCGC Slave - [0..1]              */
#define PCGCS0_NOTFULLPCPZERO 1                      /*!< (unspecified)                                                        */
#define PCGCS0_PENALTYTASKS 0                        /*!< (unspecified)                                                        */

#define PCGCS1_NUM_CLOCK_POWER_PAIR_MIN 0            /*!< Number of clock/power pairs used by PCGC Slave - [0..1]              */
#define PCGCS1_NUM_CLOCK_POWER_PAIR_MAX 1            /*!< Number of clock/power pairs used by PCGC Slave - [0..1]              */
#define PCGCS1_NUM_CLOCK_POWER_PAIR_SIZE 2           /*!< Number of clock/power pairs used by PCGC Slave - [0..1]              */
#define PCGCS1_NOTFULLPCPZERO 1                      /*!< (unspecified)                                                        */
#define PCGCS1_PENALTYTASKS 0                        /*!< (unspecified)                                                        */

#define PCGCS2_NUM_CLOCK_POWER_PAIR_MIN 0            /*!< Number of clock/power pairs used by PCGC Slave - [0..1]              */
#define PCGCS2_NUM_CLOCK_POWER_PAIR_MAX 1            /*!< Number of clock/power pairs used by PCGC Slave - [0..1]              */
#define PCGCS2_NUM_CLOCK_POWER_PAIR_SIZE 2           /*!< Number of clock/power pairs used by PCGC Slave - [0..1]              */
#define PCGCS2_NOTFULLPCPZERO 1                      /*!< (unspecified)                                                        */
#define PCGCS2_PENALTYTASKS 0                        /*!< (unspecified)                                                        */

/*RAM Controller*/
#define RAMC_PRESENT 1
#define RAMC_COUNT 5

#define RAMCM0_ECC 0                                 /*!< (unspecified)                                                        */
#define RAMCM0_SEC 0                                 /*!< (unspecified)                                                        */

#define RAMCIPC_ECC 0                                /*!< (unspecified)                                                        */
#define RAMCIPC_SEC 0                                /*!< (unspecified)                                                        */

#define RAMCTX_ECC 0                                 /*!< (unspecified)                                                        */
#define RAMCTX_SEC 0                                 /*!< (unspecified)                                                        */

#define RAMCRX_ECC 0                                 /*!< (unspecified)                                                        */
#define RAMCRX_SEC 0                                 /*!< (unspecified)                                                        */

#define RAMCGNSS_ECC 0                               /*!< (unspecified)                                                        */
#define RAMCGNSS_SEC 0                               /*!< (unspecified)                                                        */

/*MUTEX*/
#define MUTEX_PRESENT 1
#define MUTEX_COUNT 3

/*PCGC Master*/
#define PCGCMASTER_PRESENT 1
#define PCGCMASTER_COUNT 3

#define PCGCM0_POWERCONSUMPTIONCALC 0                /*!< (unspecified)                                                        */
#define PCGCM0_SETPWRCONTHRESHOLDBASE 1              /*!< (unspecified)                                                        */
#define PCGCM0_CLOCKFORCEREG 1                       /*!< (unspecified)                                                        */
#define PCGCM0_MASTERFORCEREG 1                      /*!< (unspecified)                                                        */

#define PCGCM1_POWERCONSUMPTIONCALC 0                /*!< (unspecified)                                                        */
#define PCGCM1_SETPWRCONTHRESHOLDBASE 1              /*!< (unspecified)                                                        */
#define PCGCM1_CLOCKFORCEREG 1                       /*!< (unspecified)                                                        */
#define PCGCM1_MASTERFORCEREG 1                      /*!< (unspecified)                                                        */

#define PCGCM2_POWERCONSUMPTIONCALC 0                /*!< (unspecified)                                                        */
#define PCGCM2_SETPWRCONTHRESHOLDBASE 1              /*!< (unspecified)                                                        */
#define PCGCM2_CLOCKFORCEREG 1                       /*!< (unspecified)                                                        */
#define PCGCM2_MASTERFORCEREG 1                      /*!< (unspecified)                                                        */

/*LRCCONF*/
#define LRCCONF_PRESENT 1
#define LRCCONF_COUNT 3

#define LRCCONF0_POWERON 0                           /*!< (unspecified)                                                        */
#define LRCCONF0_RETAIN 0                            /*!< (unspecified)                                                        */
#define LRCCONF0_SYSTEMOFF 0                         /*!< (unspecified)                                                        */
#define LRCCONF0_LRCREQHFXO 0                        /*!< (unspecified)                                                        */
#define LRCCONF0_NCLK_MIN 0                          /*!< (unspecified)                                                        */
#define LRCCONF0_NCLK_MAX 7                          /*!< (unspecified)                                                        */
#define LRCCONF0_NCLK_SIZE 8                         /*!< (unspecified)                                                        */
#define LRCCONF0_CLKCTRL 0                           /*!< (unspecified)                                                        */
#define LRCCONF0_NACTPD_MIN 0                        /*!< (unspecified)                                                        */
#define LRCCONF0_NACTPD_MAX 7                        /*!< (unspecified)                                                        */
#define LRCCONF0_NACTPD_SIZE 8                       /*!< (unspecified)                                                        */
#define LRCCONF0_PDACT 0                             /*!< (unspecified)                                                        */
#define LRCCONF0_NPD_MIN 0                           /*!< (unspecified)                                                        */
#define LRCCONF0_NPD_MAX 7                           /*!< (unspecified)                                                        */
#define LRCCONF0_NPD_SIZE 8                          /*!< (unspecified)                                                        */
#define LRCCONF0_OTHERON 0                           /*!< (unspecified)                                                        */
#define LRCCONF0_NDOMAINS_MIN 0                      /*!< (unspecified)                                                        */
#define LRCCONF0_NDOMAINS_MAX 15                     /*!< (unspecified)                                                        */
#define LRCCONF0_NDOMAINS_SIZE 16                    /*!< (unspecified)                                                        */
#define LRCCONF0_AX2XWAITSTATES 0                    /*!< (unspecified)                                                        */
#define LRCCONF0_POWERON_MAIN_RESET 0                /*!< (unspecified)                                                        */
#define LRCCONF0_POWERON_ACT_RESET 0                 /*!< (unspecified)                                                        */
#define LRCCONF0_RETAIN_MAIN_RESET 1                 /*!< (unspecified)                                                        */
#define LRCCONF0_RETAIN_ACT_RESET 1                  /*!< (unspecified)                                                        */

#define LRCCONF1_POWERON 1                           /*!< (unspecified)                                                        */
#define LRCCONF1_RETAIN 1                            /*!< (unspecified)                                                        */
#define LRCCONF1_SYSTEMOFF 1                         /*!< (unspecified)                                                        */
#define LRCCONF1_LRCREQHFXO 1                        /*!< (unspecified)                                                        */
#define LRCCONF1_NCLK_MIN 0                          /*!< (unspecified)                                                        */
#define LRCCONF1_NCLK_MAX 0                          /*!< (unspecified)                                                        */
#define LRCCONF1_NCLK_SIZE 1                         /*!< (unspecified)                                                        */
#define LRCCONF1_CLKCTRL 1                           /*!< (unspecified)                                                        */
#define LRCCONF1_NACTPD_MIN 0                        /*!< (unspecified)                                                        */
#define LRCCONF1_NACTPD_MAX 1                        /*!< (unspecified)                                                        */
#define LRCCONF1_NACTPD_SIZE 2                       /*!< (unspecified)                                                        */
#define LRCCONF1_PDACT 1                             /*!< (unspecified)                                                        */
#define LRCCONF1_NPD_MIN 0                           /*!< (unspecified)                                                        */
#define LRCCONF1_NPD_MAX 7                           /*!< (unspecified)                                                        */
#define LRCCONF1_NPD_SIZE 8                          /*!< (unspecified)                                                        */
#define LRCCONF1_OTHERON 0                           /*!< (unspecified)                                                        */
#define LRCCONF1_NDOMAINS_MIN 0                      /*!< (unspecified)                                                        */
#define LRCCONF1_NDOMAINS_MAX 15                     /*!< (unspecified)                                                        */
#define LRCCONF1_NDOMAINS_SIZE 16                    /*!< (unspecified)                                                        */
#define LRCCONF1_AX2XWAITSTATES 0                    /*!< (unspecified)                                                        */
#define LRCCONF1_POWERON_MAIN_RESET 0                /*!< Reset value of register POWERON.MAIN: 0                              */
#define LRCCONF1_POWERON_ACT_RESET 0                 /*!< Reset value of register POWERON.ACT: 0                               */
#define LRCCONF1_RETAIN_MAIN_RESET 1                 /*!< Reset value of register RETAIN.MAIN: 1                               */
#define LRCCONF1_RETAIN_ACT_RESET 0                  /*!< Reset value of register RETAIN.ACT: 0                                */

#define LRCCONF2_POWERON 0                           /*!< (unspecified)                                                        */
#define LRCCONF2_RETAIN 0                            /*!< (unspecified)                                                        */
#define LRCCONF2_SYSTEMOFF 0                         /*!< (unspecified)                                                        */
#define LRCCONF2_LRCREQHFXO 0                        /*!< (unspecified)                                                        */
#define LRCCONF2_NCLK_MIN 0                          /*!< (unspecified)                                                        */
#define LRCCONF2_NCLK_MAX 0                          /*!< (unspecified)                                                        */
#define LRCCONF2_NCLK_SIZE 1                         /*!< (unspecified)                                                        */
#define LRCCONF2_CLKCTRL 1                           /*!< (unspecified)                                                        */
#define LRCCONF2_NACTPD_MIN 0                        /*!< (unspecified)                                                        */
#define LRCCONF2_NACTPD_MAX 7                        /*!< (unspecified)                                                        */
#define LRCCONF2_NACTPD_SIZE 8                       /*!< (unspecified)                                                        */
#define LRCCONF2_PDACT 0                             /*!< (unspecified)                                                        */
#define LRCCONF2_NPD_MIN 0                           /*!< (unspecified)                                                        */
#define LRCCONF2_NPD_MAX 7                           /*!< (unspecified)                                                        */
#define LRCCONF2_NPD_SIZE 8                          /*!< (unspecified)                                                        */
#define LRCCONF2_OTHERON 0                           /*!< (unspecified)                                                        */
#define LRCCONF2_NDOMAINS_MIN 0                      /*!< (unspecified)                                                        */
#define LRCCONF2_NDOMAINS_MAX 15                     /*!< (unspecified)                                                        */
#define LRCCONF2_NDOMAINS_SIZE 16                    /*!< (unspecified)                                                        */
#define LRCCONF2_AX2XWAITSTATES 0                    /*!< (unspecified)                                                        */
#define LRCCONF2_POWERON_MAIN_RESET 0                /*!< (unspecified)                                                        */
#define LRCCONF2_POWERON_ACT_RESET 0                 /*!< (unspecified)                                                        */
#define LRCCONF2_RETAIN_MAIN_RESET 1                 /*!< (unspecified)                                                        */
#define LRCCONF2_RETAIN_ACT_RESET 1                  /*!< (unspecified)                                                        */

/*HSFLL*/
#define HSFLL_PRESENT 1
#define HSFLL_COUNT 1

#define HSFLL_DITHER_32B 1                           /*!< (unspecified)                                                        */
#define HSFLL_CLOCKCTRL_MULT_RESET 6                 /*!< Reset value of register CLOCKCTRL.MULT: clockctrl_mult_reset         */
#define HSFLL_CLOCKCTRL_INTEGER_DIVISION 0           /*!< (unspecified)                                                        */

/*Memory Privilege Controller*/
#define MPC_PRESENT 1
#define MPC_COUNT 1

#define MPC_EXTEND_CLOCK_REQ 0                       /*!< (unspecified)                                                        */
#define MPC_RTCHOKE 1                                /*!< (unspecified)                                                        */
#define MPC_OVERRIDE_GRAN 4096                       /*!< The override region granularity is 4096 bytes                        */

/*CPU Configuration*/
#define CPUCONF_PRESENT 1
#define CPUCONF_COUNT 1

#define CPUCONF_HASTASKERASECACHE 0                  /*!< (unspecified)                                                        */
#define CPUCONF_HASINITSVTOR 0                       /*!< (unspecified)                                                        */
#define CPUCONF_HASINITNSVTOR 0                      /*!< (unspecified)                                                        */
#define CPUCONF_HASCPUSTART 1                        /*!< (unspecified)                                                        */
#define CPUCONF_HASCPUWAIT 0                         /*!< (unspecified)                                                        */

/*Memory configuration*/
#define MEMCONF_PRESENT 1
#define MEMCONF_COUNT 1

#define MEMCONF_RETTRIM 0                            /*!< (unspecified)                                                        */
#define MEMCONF_REPAIR 1                             /*!< (unspecified)                                                        */
#define MEMCONF_REPAIR_INTERNAL_DOC 0                /*!< (unspecified)                                                        */
#define MEMCONF_POWER 1                              /*!< (unspecified)                                                        */
#define MEMCONF_RET2 1                               /*!< (unspecified)                                                        */
#define MEMCONF_TRIM_INTERNAL_DOC 0                  /*!< (unspecified)                                                        */
#define MEMCONF_NUMADDRBITS_MIN 0                    /*!< Number of bits in repair address at MEMCONF.REPAIR.BITLINE.ADDR :
                                                          [0..12]*/
#define MEMCONF_NUMADDRBITS_MAX 12                   /*!< Number of bits in repair address at MEMCONF.REPAIR.BITLINE.ADDR :
                                                          [0..12]*/
#define MEMCONF_NUMADDRBITS_SIZE 13                  /*!< Number of bits in repair address at MEMCONF.REPAIR.BITLINE.ADDR :
                                                          [0..12]*/

/*RfTimer*/
#define RFTIMER_PRESENT 1
#define RFTIMER_COUNT 3

#define RFTIMERTX_NCC 2                              /*!< Number of compare/capture registers : 2                              */
#define RFTIMERTX_BWIDTH 16                          /*!< Counter width : 16 bits                                              */

#define RFTIMERRX_NCC 2                              /*!< Number of compare/capture registers : 2                              */
#define RFTIMERRX_BWIDTH 16                          /*!< Counter width : 16 bits                                              */

#define RFTIMERSTC_NCC 16                            /*!< Number of compare/capture registers : 16                             */
#define RFTIMERSTC_BWIDTH 64                         /*!< Counter width : 64 bits                                              */

/*Distributed programmable peripheral interconnect controller*/
#define DPPIC_PRESENT 1
#define DPPIC_COUNT 7

#define DPPIC_HASCHANNELGROUPS 0                     /*!< (unspecified)                                                        */
#define DPPIC_CH_NUM_MIN 0                           /*!< (unspecified)                                                        */
#define DPPIC_CH_NUM_MAX 15                          /*!< (unspecified)                                                        */
#define DPPIC_CH_NUM_SIZE 16                         /*!< (unspecified)                                                        */
#define DPPIC_GROUP_NUM_MIN 0                        /*!< (unspecified)                                                        */
#define DPPIC_GROUP_NUM_MAX 3                        /*!< (unspecified)                                                        */
#define DPPIC_GROUP_NUM_SIZE 4                       /*!< (unspecified)                                                        */

#define DPPIC120_HASCHANNELGROUPS 1                  /*!< (unspecified)                                                        */
#define DPPIC120_CH_NUM_MIN 0                        /*!< (unspecified)                                                        */
#define DPPIC120_CH_NUM_MAX 7                        /*!< (unspecified)                                                        */
#define DPPIC120_CH_NUM_SIZE 8                       /*!< (unspecified)                                                        */
#define DPPIC120_GROUP_NUM_MIN 0                     /*!< (unspecified)                                                        */
#define DPPIC120_GROUP_NUM_MAX 1                     /*!< (unspecified)                                                        */
#define DPPIC120_GROUP_NUM_SIZE 2                    /*!< (unspecified)                                                        */

#define DPPIC130_HASCHANNELGROUPS 1                  /*!< (unspecified)                                                        */
#define DPPIC130_CH_NUM_MIN 0                        /*!< (unspecified)                                                        */
#define DPPIC130_CH_NUM_MAX 7                        /*!< (unspecified)                                                        */
#define DPPIC130_CH_NUM_SIZE 8                       /*!< (unspecified)                                                        */
#define DPPIC130_GROUP_NUM_MIN 0                     /*!< (unspecified)                                                        */
#define DPPIC130_GROUP_NUM_MAX 1                     /*!< (unspecified)                                                        */
#define DPPIC130_GROUP_NUM_SIZE 2                    /*!< (unspecified)                                                        */

#define DPPIC131_HASCHANNELGROUPS 1                  /*!< (unspecified)                                                        */
#define DPPIC131_CH_NUM_MIN 0                        /*!< (unspecified)                                                        */
#define DPPIC131_CH_NUM_MAX 7                        /*!< (unspecified)                                                        */
#define DPPIC131_CH_NUM_SIZE 8                       /*!< (unspecified)                                                        */
#define DPPIC131_GROUP_NUM_MIN 0                     /*!< (unspecified)                                                        */
#define DPPIC131_GROUP_NUM_MAX 1                     /*!< (unspecified)                                                        */
#define DPPIC131_GROUP_NUM_SIZE 2                    /*!< (unspecified)                                                        */

#define DPPIC132_HASCHANNELGROUPS 1                  /*!< (unspecified)                                                        */
#define DPPIC132_CH_NUM_MIN 0                        /*!< (unspecified)                                                        */
#define DPPIC132_CH_NUM_MAX 7                        /*!< (unspecified)                                                        */
#define DPPIC132_CH_NUM_SIZE 8                       /*!< (unspecified)                                                        */
#define DPPIC132_GROUP_NUM_MIN 0                     /*!< (unspecified)                                                        */
#define DPPIC132_GROUP_NUM_MAX 1                     /*!< (unspecified)                                                        */
#define DPPIC132_GROUP_NUM_SIZE 2                    /*!< (unspecified)                                                        */

#define DPPIC133_HASCHANNELGROUPS 1                  /*!< (unspecified)                                                        */
#define DPPIC133_CH_NUM_MIN 0                        /*!< (unspecified)                                                        */
#define DPPIC133_CH_NUM_MAX 7                        /*!< (unspecified)                                                        */
#define DPPIC133_CH_NUM_SIZE 8                       /*!< (unspecified)                                                        */
#define DPPIC133_GROUP_NUM_MIN 0                     /*!< (unspecified)                                                        */
#define DPPIC133_GROUP_NUM_MAX 1                     /*!< (unspecified)                                                        */
#define DPPIC133_GROUP_NUM_SIZE 2                    /*!< (unspecified)                                                        */

#define DPPIC134_HASCHANNELGROUPS 1                  /*!< (unspecified)                                                        */
#define DPPIC134_CH_NUM_MIN 0                        /*!< (unspecified)                                                        */
#define DPPIC134_CH_NUM_MAX 7                        /*!< (unspecified)                                                        */
#define DPPIC134_CH_NUM_SIZE 8                       /*!< (unspecified)                                                        */
#define DPPIC134_GROUP_NUM_MIN 0                     /*!< (unspecified)                                                        */
#define DPPIC134_GROUP_NUM_MAX 1                     /*!< (unspecified)                                                        */
#define DPPIC134_GROUP_NUM_SIZE 2                    /*!< (unspecified)                                                        */

/*Cross-Trigger Interface control*/
#define CTI_PRESENT 1
#define CTI_COUNT 3

/*HALTI_TX_register_map AhmaTxDigDigitalReg register map KarhuTxDigAnalogReg register map*/
#define TXDFE_PRESENT 1
#define TXDFE_COUNT 1

#define TXDFE_DECT_ENH 1                             /*!< (unspecified)                                                        */
#define TXDFE_NO_DECT_ENH 0                          /*!< (unspecified)                                                        */
#define TXDFE_AHMA_ANAREG 0                          /*!< (unspecified)                                                        */
#define TXDFE_KARHU_ANAREG 1                         /*!< (unspecified)                                                        */

/*Event generator unit*/
#define EGU_PRESENT 1
#define EGU_COUNT 3

#define EGUTX_PEND 1                                 /*!< (unspecified)                                                        */
#define EGUTX_CH_NUM_MIN 0                           /*!< (unspecified)                                                        */
#define EGUTX_CH_NUM_MAX 7                           /*!< (unspecified)                                                        */
#define EGUTX_CH_NUM_SIZE 8                          /*!< (unspecified)                                                        */

#define EGURX_PEND 1                                 /*!< (unspecified)                                                        */
#define EGURX_CH_NUM_MIN 0                           /*!< (unspecified)                                                        */
#define EGURX_CH_NUM_MAX 7                           /*!< (unspecified)                                                        */
#define EGURX_CH_NUM_SIZE 8                          /*!< (unspecified)                                                        */

#define EGU130_PEND 0                                /*!< (unspecified)                                                        */
#define EGU130_CH_NUM_MIN 0                          /*!< (unspecified)                                                        */
#define EGU130_CH_NUM_MAX 7                          /*!< (unspecified)                                                        */
#define EGU130_CH_NUM_SIZE 8                         /*!< (unspecified)                                                        */

/*HALTI_RX_register_map AhmaRx Digital control register map Karhu Rx Analog control register map AhmaRx Digital control register map*/

#define RXDFE_PRESENT 1
#define RXDFE_COUNT 1

#define RXDFE_ANAREG 0                               /*!< (unspecified)                                                        */
#define RXDFE_KARHUANAREG 1                          /*!< (unspecified)                                                        */
#define RXDFE_ADDREG 1                               /*!< (unspecified)                                                        */
#define RXDFE_DECT_ENH 1                             /*!< (unspecified)                                                        */
#define RXDFE_AUTOCORR 0                             /*!< (unspecified)                                                        */
#define RXDFE_IQIFENH 1                              /*!< (unspecified)                                                        */
#define RXDFE_WIFIGNIF 0                             /*!< (unspecified)                                                        */

/*Direct Sequence Access controller, version 2*/
#define DSA2_PRESENT 1
#define DSA2_COUNT 2

#define DSA2TX_SEQUENCEREGISTERS 0                   /*!< Implement sequence memory using flip-flops instead of using the AXI
                                                          RAM interface*/

#define DSA2RX_SEQUENCEREGISTERS 0                   /*!< Implement sequence memory using flip-flops instead of using the AXI
                                                          RAM interface*/

/*GPIO Tasks and Events*/
#define GPIOTE_PRESENT 1
#define GPIOTE_COUNT 2

#define GPIOTE_IRQ_COUNT 1
#define GPIOTE_LATENCY 1                             /*!< (unspecified)                                                        */
#define GPIOTE_GPIOTE_NCHANNELS_MIN 0                /*!< Number of GPIOTE channels: 0..7                                      */
#define GPIOTE_GPIOTE_NCHANNELS_MAX 7                /*!< Number of GPIOTE channels: 0..7                                      */
#define GPIOTE_GPIOTE_NCHANNELS_SIZE 8               /*!< Number of GPIOTE channels: 0..7                                      */
#define GPIOTE_GPIOTE_NPORTEVENTS 0                  /*!< Number of GPIOTE port events: 0                                      */
#define GPIOTE_GPIOTE_NINTERRUPTS_MIN 0              /*!< Number of GPIOTE interrupts: 0..0                                    */
#define GPIOTE_GPIOTE_NINTERRUPTS_MAX 0              /*!< Number of GPIOTE interrupts: 0..0                                    */
#define GPIOTE_GPIOTE_NINTERRUPTS_SIZE 1             /*!< Number of GPIOTE interrupts: 0..0                                    */
#define GPIOTE_HAS_PORT_EVENT 0                      /*!< (unspecified)                                                        */

#define GPIOTE130_IRQ_COUNT 2
#define GPIOTE130_LATENCY 1                          /*!< (unspecified)                                                        */
#define GPIOTE130_GPIOTE_NCHANNELS_MIN 0             /*!< Number of GPIOTE channels: 0..7                                      */
#define GPIOTE130_GPIOTE_NCHANNELS_MAX 7             /*!< Number of GPIOTE channels: 0..7                                      */
#define GPIOTE130_GPIOTE_NCHANNELS_SIZE 8            /*!< Number of GPIOTE channels: 0..7                                      */
#define GPIOTE130_GPIOTE_NPORTEVENTS_MIN 0           /*!< Number of GPIOTE port events: 0..3                                   */
#define GPIOTE130_GPIOTE_NPORTEVENTS_MAX 3           /*!< Number of GPIOTE port events: 0..3                                   */
#define GPIOTE130_GPIOTE_NPORTEVENTS_SIZE 4          /*!< Number of GPIOTE port events: 0..3                                   */
#define GPIOTE130_GPIOTE_NINTERRUPTS_MIN 0           /*!< Number of GPIOTE interrupts: 0..1                                    */
#define GPIOTE130_GPIOTE_NINTERRUPTS_MAX 1           /*!< Number of GPIOTE interrupts: 0..1                                    */
#define GPIOTE130_GPIOTE_NINTERRUPTS_SIZE 2          /*!< Number of GPIOTE interrupts: 0..1                                    */
#define GPIOTE130_HAS_PORT_EVENT 1                   /*!< (unspecified)                                                        */

/*Sensor Analog to Digital Converter*/
#define SENSORADC_PRESENT 1
#define SENSORADC_COUNT 1

/*MipiRffe Master*/
#define MIPIRFFE_PRESENT 1
#define MIPIRFFE_COUNT 2

/*Ahma SX register map SX register map*/
#define SX_PRESENT 1
#define SX_COUNT 1

#define SX_TESTCHIP_REGS 0                           /*!< (unspecified)                                                        */

/*AhmaRfSubsystem general control register map AhmaRfSubsystem general control register map*/
#define RFSERVICES_PRESENT 1
#define RFSERVICES_COUNT 1

#define RFSERVICES_INC_PADCNF_PWRREQ 1               /*!< (unspecified)                                                        */

/*AhmaRfSubsystem general control register map AhmaRfSubsystem general control register map*/
#define RFCORESERVICES_PRESENT 1
#define RFCORESERVICES_COUNT 1

#define RFCORESERVICES_EXTENDED_REGS 1               /*!< (unspecified)                                                        */
#define RFCORESERVICES_PCRM_REGS 1                   /*!< (unspecified)                                                        */

/*BELLBOARD APB registers*/
#define BELLBOARD_PRESENT 1
#define BELLBOARD_COUNT 1

#define BELLBOARD_IRQ_COUNT 4

/*IPCT APB registers*/
#define IPCT_PRESENT 1
#define IPCT_COUNT 3

#define IPCT_IRQ_COUNT 6

#define IPCT120_IRQ_COUNT 1

#define IPCT130_IRQ_COUNT 1

/*MICR*/
#define MICR_PRESENT 1
#define MICR_COUNT 1

#define MICR_LTE_ON 0                                /*!< (unspecified)                                                        */
#define MICR_SAANA_LTE_ON 1                          /*!< (unspecified)                                                        */

/*Factory Information Configuration Registers*/
#define FICR_PRESENT 1
#define FICR_COUNT 1

#define FICR_LTE_ON 0                                /*!< (unspecified)                                                        */
#define FICR_SAANA_LTE_ON 1                          /*!< (unspecified)                                                        */
#define FICR_KARHU_TESTCHIP_REGS 0                   /*!< (unspecified)                                                        */
#define FICR_WIFI_ON 0                               /*!< (unspecified)                                                        */
#define FICR_NFC_ON 1                                /*!< (unspecified)                                                        */
#define FICR_ML_ON 0                                 /*!< (unspecified)                                                        */
#define FICR_SDCARD_ON 0                             /*!< (unspecified)                                                        */
#define FICR_VREG_1V8_0V8 0                          /*!< (unspecified)                                                        */
#define FICR_AUDIO_USB_PROGRAMMABLE_OWNER 0          /*!< (unspecified)                                                        */
#define FICR_ISIM_ON 0                               /*!< (unspecified)                                                        */

/*System Trace Macrocell data buffer*/
#define STMDATA_PRESENT 1
#define STMDATA_COUNT 1

/*TDDCONF*/
#define TDDCONF_PRESENT 1
#define TDDCONF_COUNT 1

#define TDDCONF_FEATEN_TDDCONF_CLK_320MHZ 0          /*!< (unspecified)                                                        */
#define TDDCONF_FEATEN_TDDCONF_CLK_400MHZ 1          /*!< (unspecified)                                                        */

/*Timestamp generator*/
#define TSGEN_PRESENT 1
#define TSGEN_COUNT 1

/*System Trace Macrocell*/
#define STM_PRESENT 1
#define STM_COUNT 1

/*Trace Port Interface Unit*/
#define TPIU_PRESENT 1
#define TPIU_COUNT 1

/*Embedded Trace Buffer*/
#define ETB_PRESENT 1
#define ETB_COUNT 1

/*(unspecified)*/
#define ETR_PRESENT 1
#define ETR_COUNT 1

/*ATB Replicator module*/
#define ATBREPLICATOR_PRESENT 1
#define ATBREPLICATOR_COUNT 4

/*ATB funnel module*/
#define ATBFUNNEL_PRESENT 1
#define ATBFUNNEL_COUNT 4

/*Granular Power Requester*/
#define GPR_PRESENT 1
#define GPR_COUNT 1

#define GPR_NUM_CPWRUPM 9                            /*!< Number of power-control interfaces: 9                                */

/*Global Real-time counter*/
#define GRTC_PRESENT 1
#define GRTC_COUNT 1

#define GRTC_IRQ_COUNT 2
#define GRTC_MSBWIDTH_MIN 0                          /*!< Width of the RTCOUNTERH, RTCOMPAREH and RTCOMPARESYNCH registers :
                                                          0..14*/
#define GRTC_MSBWIDTH_MAX 14                         /*!< Width of the RTCOUNTERH, RTCOMPAREH and RTCOMPARESYNCH registers :
                                                          0..14*/
#define GRTC_MSBWIDTH_SIZE 15                        /*!< Width of the RTCOUNTERH, RTCOMPAREH and RTCOMPARESYNCH registers :
                                                          0..14*/
#define GRTC_NCC_MIN 0                               /*!< Number of compare/capture registers : 0..19                          */
#define GRTC_NCC_MAX 19                              /*!< Number of compare/capture registers : 0..19                          */
#define GRTC_NCC_SIZE 20                             /*!< Number of compare/capture registers : 0..19                          */
#define GRTC_NTIMEOUT_MIN 0                          /*!< Width of the TIMEOUT register : 0..15                                */
#define GRTC_NTIMEOUT_MAX 15                         /*!< Width of the TIMEOUT register : 0..15                                */
#define GRTC_NTIMEOUT_SIZE 16                        /*!< Width of the TIMEOUT register : 0..15                                */
#define GRTC_NDOMAIN_MIN 0                           /*!< Number of domains at the KEEPRUNNING register: 0..15                 */
#define GRTC_NDOMAIN_MAX 15                          /*!< Number of domains at the KEEPRUNNING register: 0..15                 */
#define GRTC_NDOMAIN_SIZE 16                         /*!< Number of domains at the KEEPRUNNING register: 0..15                 */
#define GRTC_GRTC_NINTERRUPTS_MIN 0                  /*!< Number of GRTC interrupts : 0..1                                     */
#define GRTC_GRTC_NINTERRUPTS_MAX 1                  /*!< Number of GRTC interrupts : 0..1                                     */
#define GRTC_GRTC_NINTERRUPTS_SIZE 2                 /*!< Number of GRTC interrupts : 0..1                                     */
#define GRTC_PWMREGS 1                               /*!< (unspecified)                                                        */
#define GRTC_CLKOUTREG 1                             /*!< (unspecified)                                                        */
#define GRTC_CLKSELREG 1                             /*!< (unspecified)                                                        */
#define GRTC_CLKSELLFLPRC 1                          /*!< (unspecified)                                                        */
#define GRTC_CCADD_WRITE_ONLY 1                      /*!< (unspecified)                                                        */
#define GRTC_READY_STATUS_AND_EVENTS 0               /*!< (unspecified)                                                        */
#define GRTC_SYSCOUNTER_LOADED_STATUS 0              /*!< (unspecified)                                                        */
#define GRTC_CC_PAST_STATUS 0                        /*!< (unspecified)                                                        */
#define GRTC_SYSCOUNTER_WRITEABLE 0                  /*!< (unspecified)                                                        */

/*MRAM controller*/
#define MRAMC_PRESENT 1
#define MRAMC_COUNT 2

#define MRAMC110_NMRAMWORDSIZE 128                   /*!< (unspecified)                                                        */
#define MRAMC110_NMRAMPAGESIZE 4                     /*!< (unspecified)                                                        */
#define MRAMC110_NNVRPAGESIZE 3                      /*!< (unspecified)                                                        */
#define MRAMC110_NMAINMEMORYSIZE 6                   /*!< MRAM main memory size: 6 MB                                          */
#define MRAMC110_NNVRPAGES_MIN 0                     /*!< Number of MRAM NVR pages: 0..3                                       */
#define MRAMC110_NNVRPAGES_MAX 3                     /*!< Number of MRAM NVR pages: 0..3                                       */
#define MRAMC110_NNVRPAGES_SIZE 4                    /*!< Number of MRAM NVR pages: 0..3                                       */
#define MRAMC110_NSIZEMRAMWORDS_MIN 1                /*!< Register ERASE.SIZE.SIZE range: 1..393216                            */
#define MRAMC110_NSIZEMRAMWORDS_MAX 393216           /*!< Register ERASE.SIZE.SIZE range: 1..393216                            */
#define MRAMC110_NSIZEMRAMWORDS_SIZE 393217          /*!< Register ERASE.SIZE.SIZE range: 1..393216                            */
#define MRAMC110_MARMDATAWIDTHWORDS_MIN 0            /*!< Register TESTMODE2.MRAM.DATA/DATAINC size: 0..3                      */
#define MRAMC110_MARMDATAWIDTHWORDS_MAX 3            /*!< Register TESTMODE2.MRAM.DATA/DATAINC size: 0..3                      */
#define MRAMC110_MARMDATAWIDTHWORDS_SIZE 4           /*!< Register TESTMODE2.MRAM.DATA/DATAINC size: 0..3                      */
#define MRAMC110_NVRPAGEUPPER 1                      /*!< (unspecified)                                                        */
#define MRAMC110_NVRPAGELOWER 1                      /*!< (unspecified)                                                        */
#define MRAMC110_NVRPAGEENABLENORMALWRITE 1          /*!< (unspecified)                                                        */
#define MRAMC110_NVRPAGELRSIZEBITS_MIN 24            /*!< (unspecified)                                                        */
#define MRAMC110_NVRPAGELRSIZEBITS_MAX 27            /*!< (unspecified)                                                        */
#define MRAMC110_NVRPAGELRSIZEBITS_SIZE 28           /*!< (unspecified)                                                        */
#define MRAMC110_NVRPAGELRSIZERESET 15               /*!< (unspecified)                                                        */
#define MRAMC110_NVRPAGELRSIZEVALUE_MIN 0            /*!< (unspecified)                                                        */
#define MRAMC110_NVRPAGELRSIZEVALUE_MAX 15           /*!< (unspecified)                                                        */
#define MRAMC110_NVRPAGELRSIZEVALUE_SIZE 16          /*!< (unspecified)                                                        */
#define MRAMC110_NVRPAGELWSIZEBITS_MIN 28            /*!< (unspecified)                                                        */
#define MRAMC110_NVRPAGELWSIZEBITS_MAX 31            /*!< (unspecified)                                                        */
#define MRAMC110_NVRPAGELWSIZEBITS_SIZE 32           /*!< (unspecified)                                                        */
#define MRAMC110_NVRPAGELWSIZERESET 15               /*!< (unspecified)                                                        */
#define MRAMC110_NVRPAGELWSIZEVALUE_MIN 0            /*!< (unspecified)                                                        */
#define MRAMC110_NVRPAGELWSIZEVALUE_MAX 15           /*!< (unspecified)                                                        */
#define MRAMC110_NVRPAGELWSIZEVALUE_SIZE 16          /*!< (unspecified)                                                        */
#define MRAMC110_IMPROVEDBURSTMODE 1                 /*!< (unspecified)                                                        */

#define MRAMC111_NMRAMWORDSIZE 128                   /*!< (unspecified)                                                        */
#define MRAMC111_NMRAMPAGESIZE 4                     /*!< (unspecified)                                                        */
#define MRAMC111_NNVRPAGESIZE 1                      /*!< (unspecified)                                                        */
#define MRAMC111_NMAINMEMORYSIZE 2                   /*!< MRAM main memory size: 2 MB                                          */
#define MRAMC111_NNVRPAGES_MIN 0                     /*!< Number of MRAM NVR pages: 0..3                                       */
#define MRAMC111_NNVRPAGES_MAX 3                     /*!< Number of MRAM NVR pages: 0..3                                       */
#define MRAMC111_NNVRPAGES_SIZE 4                    /*!< Number of MRAM NVR pages: 0..3                                       */
#define MRAMC111_NSIZEMRAMWORDS_MIN 1                /*!< Register ERASE.SIZE.SIZE range: 1..131072                            */
#define MRAMC111_NSIZEMRAMWORDS_MAX 131072           /*!< Register ERASE.SIZE.SIZE range: 1..131072                            */
#define MRAMC111_NSIZEMRAMWORDS_SIZE 131073          /*!< Register ERASE.SIZE.SIZE range: 1..131072                            */
#define MRAMC111_MARMDATAWIDTHWORDS_MIN 0            /*!< Register TESTMODE2.MRAM.DATA/DATAINC size: 0..3                      */
#define MRAMC111_MARMDATAWIDTHWORDS_MAX 3            /*!< Register TESTMODE2.MRAM.DATA/DATAINC size: 0..3                      */
#define MRAMC111_MARMDATAWIDTHWORDS_SIZE 4           /*!< Register TESTMODE2.MRAM.DATA/DATAINC size: 0..3                      */
#define MRAMC111_NVRPAGEUPPER 0                      /*!< (unspecified)                                                        */
#define MRAMC111_NVRPAGELOWER 0                      /*!< (unspecified)                                                        */
#define MRAMC111_NVRPAGEENABLENORMALWRITE 0          /*!< (unspecified)                                                        */
#define MRAMC111_NVRPAGELRSIZEBITS_MIN 24            /*!< (unspecified)                                                        */
#define MRAMC111_NVRPAGELRSIZEBITS_MAX 27            /*!< (unspecified)                                                        */
#define MRAMC111_NVRPAGELRSIZEBITS_SIZE 28           /*!< (unspecified)                                                        */
#define MRAMC111_NVRPAGELRSIZERESET 15               /*!< (unspecified)                                                        */
#define MRAMC111_NVRPAGELRSIZEVALUE_MIN 0            /*!< (unspecified)                                                        */
#define MRAMC111_NVRPAGELRSIZEVALUE_MAX 15           /*!< (unspecified)                                                        */
#define MRAMC111_NVRPAGELRSIZEVALUE_SIZE 16          /*!< (unspecified)                                                        */
#define MRAMC111_NVRPAGELWSIZEBITS_MIN 28            /*!< (unspecified)                                                        */
#define MRAMC111_NVRPAGELWSIZEBITS_MAX 31            /*!< (unspecified)                                                        */
#define MRAMC111_NVRPAGELWSIZEBITS_SIZE 32           /*!< (unspecified)                                                        */
#define MRAMC111_NVRPAGELWSIZERESET 15               /*!< (unspecified)                                                        */
#define MRAMC111_NVRPAGELWSIZEVALUE_MIN 0            /*!< (unspecified)                                                        */
#define MRAMC111_NVRPAGELWSIZEVALUE_MAX 15           /*!< (unspecified)                                                        */
#define MRAMC111_NVRPAGELWSIZEVALUE_SIZE 16          /*!< (unspecified)                                                        */
#define MRAMC111_IMPROVEDBURSTMODE 1                 /*!< (unspecified)                                                        */

/*OTP controller*/
#define OTPC_PRESENT 1
#define OTPC_COUNT 1

#define OTPC_REGION_NO_EXTENSION 0                   /*!< (unspecified)                                                        */
#define OTPC_REGION_EXTENSION 1                      /*!< (unspecified)                                                        */
#define OTPC_TESTMODE_WRITEBACK_EVENT 0              /*!< (unspecified)                                                        */
#define OTPC_NREGIONS_MIN 0                          /*!< Number of OTP regions : 0..5                                         */
#define OTPC_NREGIONS_MAX 5                          /*!< Number of OTP regions : 0..5                                         */
#define OTPC_NREGIONS_SIZE 6                         /*!< Number of OTP regions : 0..5                                         */
#define OTPC_REGION0ADDR 797179904                   /*!< Region 0 address : 797179904, size: 768 Bytes                        */
#define OTPC_REGION0SIZE 768                         /*!< (unspecified)                                                        */
#define OTPC_REGION1ADDR 797180672                   /*!< Region 1 address : 797180672, size: 256 Bytes                        */
#define OTPC_REGION1SIZE 256                         /*!< (unspecified)                                                        */
#define OTPC_REGION2ADDR 797180928                   /*!< Region 2 address : 797180928, size: 768 Bytes                        */
#define OTPC_REGION2SIZE 768                         /*!< (unspecified)                                                        */
#define OTPC_REGION3ADDR 797181696                   /*!< Region 3 address : 797181696, size: 768 Bytes                        */
#define OTPC_REGION3SIZE 768                         /*!< (unspecified)                                                        */
#define OTPC_REGION4ADDR 797182464                   /*!< Region 4 address : 797182464, size: 512 Bytes                        */
#define OTPC_REGION4SIZE 512                         /*!< (unspecified)                                                        */
#define OTPC_REGION5ADDR 797182976                   /*!< Region 5 address : 797182976, size: 13312 Bytes                      */
#define OTPC_REGION5SIZE 13312                       /*!< (unspecified)                                                        */

/*VPR peripheral registers*/
#define VPR_PRESENT 1
#define VPR_COUNT 3

#define VPR120_INIT_PC_RESET_VALUE 0x2F800000        /*!< Boot vector (INIT_PC_RESET_VALUE): 0x2F800000                        */
#define VPR120_VPR_START_RESET_VALUE 1               /*!< Self-booting (VPR_START_RESET_VALUE): 1                              */
#define VPR120_RAM_BASE_ADDR 0x2F880000              /*!< VPR RAM base address (RAM_BASE_ADDR): 0x2F880000                     */
#define VPR120_RAM_SZ 16                             /*!< VPR RAM size (RAM_SZ): 16 (Value in bytes is computed as 2^(RAM
                                                          size))*/
#define VPR120_VPRSAVEDCTX_REGNAME NRF_MEMCONF120->POWER[0].RET /*!< (unspecified)                                             */
#define VPR120_VPRSAVEDCTX_REGBIT 22                 /*!< (unspecified)                                                        */
#define VPR120_RETAINED 0                            /*!< Retain registers in Deep Sleep mode: 0                               */
#define VPR120_VPRSAVEDCTX 1                         /*!< (unspecified)                                                        */
#define VPR120_VPRSAVEADDR 0x2F880000                /*!< VPR context save address: 0x2F880000                                 */
#define VPR120_VPRREMAPADDRVTOB 0x2F840000           /*!< VPR remap address: 0x2F840000                                        */
#define VPR120_VEVIF_NTASKS_MIN 0                    /*!< VEVIF tasks: 0..31                                                   */
#define VPR120_VEVIF_NTASKS_MAX 31                   /*!< VEVIF tasks: 0..31                                                   */
#define VPR120_VEVIF_NTASKS_SIZE 32                  /*!< VEVIF tasks: 0..31                                                   */
#define VPR120_VEVIF_TASKS_MASK 0xFFFFF0FF           /*!< Mask of supported VEVIF tasks: 0xFFFFF0FF                            */
#define VPR120_VEVIF_NDPPI_MIN 24                    /*!< VEVIF DPPI channels: 24..27                                          */
#define VPR120_VEVIF_NDPPI_MAX 27                    /*!< VEVIF DPPI channels: 24..27                                          */
#define VPR120_VEVIF_NDPPI_SIZE 28                   /*!< VEVIF DPPI channels: 24..27                                          */
#define VPR120_VEVIF_DPPI_MASK 0x0F000000            /*!< Mask of supported VEVIF DPPI channels: 0x0F000000                    */
#define VPR120_VEVIF_NEVENTS_MIN 28                  /*!< VEVIF events: 28..31                                                 */
#define VPR120_VEVIF_NEVENTS_MAX 31                  /*!< VEVIF events: 28..31                                                 */
#define VPR120_VEVIF_NEVENTS_SIZE 32                 /*!< VEVIF events: 28..31                                                 */
#define VPR120_VEVIF_EVENTS_MASK 0xF0000000          /*!< Mask of supported VEVIF events: 0xF0000000                           */
#define VPR120_DEBUGGER_OFFSET 1024                  /*!< Debugger interface register offset: 0x5F8C8400                       */
#define VPR120_RTP_VPR_1_5 1                         /*!< (unspecified)                                                        */

#define VPR121_INIT_PC_RESET_VALUE 0x00000000        /*!< Boot vector (INIT_PC_RESET_VALUE): 0x00000000                        */
#define VPR121_VPR_START_RESET_VALUE 0               /*!< Self-booting (VPR_START_RESET_VALUE): 0                              */
#define VPR121_RAM_BASE_ADDR 0x2F890000              /*!< VPR RAM base address (RAM_BASE_ADDR): 0x2F890000                     */
#define VPR121_RAM_SZ 15                             /*!< VPR RAM size (RAM_SZ): 15 (Value in bytes is computed as 2^(RAM
                                                          size))*/
#define VPR121_VPRSAVEDCTX_REGNAME NRF_MEMCONF120->POWER[0].RET /*!< (unspecified)                                             */
#define VPR121_VPRSAVEDCTX_REGBIT 23                 /*!< (unspecified)                                                        */
#define VPR121_RETAINED 0                            /*!< Retain registers in Deep Sleep mode: 0                               */
#define VPR121_VPRSAVEDCTX 1                         /*!< (unspecified)                                                        */
#define VPR121_VPRSAVEADDR 0x2F800000                /*!< VPR context save address: 0x2F800000                                 */
#define VPR121_VPRREMAPADDRVTOB 0x00000000           /*!< VPR remap address: 0x00000000                                        */
#define VPR121_VEVIF_NTASKS_MIN 0                    /*!< VEVIF tasks: 0..31                                                   */
#define VPR121_VEVIF_NTASKS_MAX 31                   /*!< VEVIF tasks: 0..31                                                   */
#define VPR121_VEVIF_NTASKS_SIZE 32                  /*!< VEVIF tasks: 0..31                                                   */
#define VPR121_VEVIF_TASKS_MASK 0xFFFF0000           /*!< Mask of supported VEVIF tasks: 0xFFFF0000                            */
#define VPR121_VEVIF_NDPPI_MIN 24                    /*!< VEVIF DPPI channels: 24..27                                          */
#define VPR121_VEVIF_NDPPI_MAX 27                    /*!< VEVIF DPPI channels: 24..27                                          */
#define VPR121_VEVIF_NDPPI_SIZE 28                   /*!< VEVIF DPPI channels: 24..27                                          */
#define VPR121_VEVIF_DPPI_MASK 0x0F000000            /*!< Mask of supported VEVIF DPPI channels: 0x0F000000                    */
#define VPR121_VEVIF_NEVENTS_MIN 28                  /*!< VEVIF events: 28..31                                                 */
#define VPR121_VEVIF_NEVENTS_MAX 31                  /*!< VEVIF events: 28..31                                                 */
#define VPR121_VEVIF_NEVENTS_SIZE 32                 /*!< VEVIF events: 28..31                                                 */
#define VPR121_VEVIF_EVENTS_MASK 0xF0000000          /*!< Mask of supported VEVIF events: 0xF0000000                           */
#define VPR121_DEBUGGER_OFFSET 1024                  /*!< Debugger interface register offset: 0x5F8D4400                       */
#define VPR121_RTP_VPR_1_5 1                         /*!< (unspecified)                                                        */

#define VPR130_INIT_PC_RESET_VALUE 0x00000000        /*!< Boot vector (INIT_PC_RESET_VALUE): 0x00000000                        */
#define VPR130_VPR_START_RESET_VALUE 0               /*!< Self-booting (VPR_START_RESET_VALUE): 0                              */
#define VPR130_RAM_BASE_ADDR 0x2FC00000              /*!< VPR RAM base address (RAM_BASE_ADDR): 0x2FC00000                     */
#define VPR130_RAM_SZ 15                             /*!< VPR RAM size (RAM_SZ): 15 (Value in bytes is computed as 2^(RAM
                                                          size))*/
#define VPR130_VPRSAVEDCTX_REGNAME NRF_MEMCONF130->POWER[0].RET /*!< (unspecified)                                             */
#define VPR130_VPRSAVEDCTX_REGBIT 5                  /*!< (unspecified)                                                        */
#define VPR130_RETAINED 1                            /*!< Retain registers in Deep Sleep mode: 1                               */
#define VPR130_VPRSAVEDCTX 1                         /*!< (unspecified)                                                        */
#define VPR130_VPRSAVEADDR 0x2F800000                /*!< VPR context save address: 0x2F800000                                 */
#define VPR130_VPRREMAPADDRVTOB 0x00000000           /*!< VPR remap address: 0x00000000                                        */
#define VPR130_VEVIF_NTASKS_MIN 0                    /*!< VEVIF tasks: 0..15                                                   */
#define VPR130_VEVIF_NTASKS_MAX 15                   /*!< VEVIF tasks: 0..15                                                   */
#define VPR130_VEVIF_NTASKS_SIZE 16                  /*!< VEVIF tasks: 0..15                                                   */
#define VPR130_VEVIF_TASKS_MASK 0x0000FFF0           /*!< Mask of supported VEVIF tasks: 0x0000FFF0                            */
#define VPR130_VEVIF_NDPPI_MIN 8                     /*!< VEVIF DPPI channels: 8..11                                           */
#define VPR130_VEVIF_NDPPI_MAX 11                    /*!< VEVIF DPPI channels: 8..11                                           */
#define VPR130_VEVIF_NDPPI_SIZE 12                   /*!< VEVIF DPPI channels: 8..11                                           */
#define VPR130_VEVIF_DPPI_MASK 0x00000F00            /*!< Mask of supported VEVIF DPPI channels: 0x00000F00                    */
#define VPR130_VEVIF_NEVENTS_MIN 12                  /*!< VEVIF events: 12..15                                                 */
#define VPR130_VEVIF_NEVENTS_MAX 15                  /*!< VEVIF events: 12..15                                                 */
#define VPR130_VEVIF_NEVENTS_SIZE 16                 /*!< VEVIF events: 12..15                                                 */
#define VPR130_VEVIF_EVENTS_MASK 0x0000F000          /*!< Mask of supported VEVIF events: 0x0000F000                           */
#define VPR130_DEBUGGER_OFFSET 1024                  /*!< Debugger interface register offset: 0x5F908400                       */
#define VPR130_RTP_VPR_1_5 1                         /*!< (unspecified)                                                        */

/*Prototype HW information registers.*/
#define PROTOTYPEINFO_PRESENT 1
#define PROTOTYPEINFO_COUNT 1

/*Timer/Counter*/
#define TIMER_PRESENT 1
#define TIMER_COUNT 5

#define TIMER120_CC_NUM_MIN 0                        /*!< (unspecified)                                                        */
#define TIMER120_CC_NUM_MAX 5                        /*!< (unspecified)                                                        */
#define TIMER120_CC_NUM_SIZE 6                       /*!< (unspecified)                                                        */
#define TIMER120_MAX_SIZE_MIN 0                      /*!< (unspecified)                                                        */
#define TIMER120_MAX_SIZE_MAX 31                     /*!< (unspecified)                                                        */
#define TIMER120_MAX_SIZE_SIZE 32                    /*!< (unspecified)                                                        */
#define TIMER120_PCLK_MHZ 256                        /*!< Peripheral clock frequency (PCLK) is 256 MHz                         */
#define TIMER120_PCLK_VARIABLE 0                     /*!< (unspecified)                                                        */
#define TIMER120_SHUTDOWN_TASK 0                     /*!< (unspecified)                                                        */

#define TIMER130_CC_NUM_MIN 0                        /*!< (unspecified)                                                        */
#define TIMER130_CC_NUM_MAX 5                        /*!< (unspecified)                                                        */
#define TIMER130_CC_NUM_SIZE 6                       /*!< (unspecified)                                                        */
#define TIMER130_MAX_SIZE_MIN 0                      /*!< (unspecified)                                                        */
#define TIMER130_MAX_SIZE_MAX 31                     /*!< (unspecified)                                                        */
#define TIMER130_MAX_SIZE_SIZE 32                    /*!< (unspecified)                                                        */
#define TIMER130_PCLK_MHZ 16                         /*!< Peripheral clock frequency (PCLK) is 16 MHz                          */
#define TIMER130_PCLK_VARIABLE 0                     /*!< (unspecified)                                                        */
#define TIMER130_SHUTDOWN_TASK 0                     /*!< (unspecified)                                                        */

#define TIMER131_CC_NUM_MIN 0                        /*!< (unspecified)                                                        */
#define TIMER131_CC_NUM_MAX 5                        /*!< (unspecified)                                                        */
#define TIMER131_CC_NUM_SIZE 6                       /*!< (unspecified)                                                        */
#define TIMER131_MAX_SIZE_MIN 0                      /*!< (unspecified)                                                        */
#define TIMER131_MAX_SIZE_MAX 31                     /*!< (unspecified)                                                        */
#define TIMER131_MAX_SIZE_SIZE 32                    /*!< (unspecified)                                                        */
#define TIMER131_PCLK_MHZ 16                         /*!< Peripheral clock frequency (PCLK) is 16 MHz                          */
#define TIMER131_PCLK_VARIABLE 0                     /*!< (unspecified)                                                        */
#define TIMER131_SHUTDOWN_TASK 0                     /*!< (unspecified)                                                        */

#define TIMER132_CC_NUM_MIN 0                        /*!< (unspecified)                                                        */
#define TIMER132_CC_NUM_MAX 5                        /*!< (unspecified)                                                        */
#define TIMER132_CC_NUM_SIZE 6                       /*!< (unspecified)                                                        */
#define TIMER132_MAX_SIZE_MIN 0                      /*!< (unspecified)                                                        */
#define TIMER132_MAX_SIZE_MAX 31                     /*!< (unspecified)                                                        */
#define TIMER132_MAX_SIZE_SIZE 32                    /*!< (unspecified)                                                        */
#define TIMER132_PCLK_MHZ 16                         /*!< Peripheral clock frequency (PCLK) is 16 MHz                          */
#define TIMER132_PCLK_VARIABLE 0                     /*!< (unspecified)                                                        */
#define TIMER132_SHUTDOWN_TASK 0                     /*!< (unspecified)                                                        */

#define TIMER133_CC_NUM_MIN 0                        /*!< (unspecified)                                                        */
#define TIMER133_CC_NUM_MAX 5                        /*!< (unspecified)                                                        */
#define TIMER133_CC_NUM_SIZE 6                       /*!< (unspecified)                                                        */
#define TIMER133_MAX_SIZE_MIN 0                      /*!< (unspecified)                                                        */
#define TIMER133_MAX_SIZE_MAX 31                     /*!< (unspecified)                                                        */
#define TIMER133_MAX_SIZE_SIZE 32                    /*!< (unspecified)                                                        */
#define TIMER133_PCLK_MHZ 16                         /*!< Peripheral clock frequency (PCLK) is 16 MHz                          */
#define TIMER133_PCLK_VARIABLE 0                     /*!< (unspecified)                                                        */
#define TIMER133_SHUTDOWN_TASK 0                     /*!< (unspecified)                                                        */

/*Serial Peripheral Interface Master with EasyDMA*/
#define SPIM_PRESENT 1
#define SPIM_COUNT 5

#define SPIM120_EASYDMA5 1                           /*!< (unspecified)                                                        */
#define SPIM120_EASYDMATEMP 0                        /*!< (unspecified)                                                        */
#define SPIM120_EASYDMALISTINCLUDED 1                /*!< (unspecified)                                                        */
#define SPIM120_EASYDMAMODEINCLUDED 0                /*!< (unspecified)                                                        */
#define SPIM120_EASYDMAFULLLPMODEINCLUDED 0          /*!< (unspecified)                                                        */
#define SPIM120_EASYDMAPATTERNMATCHERINCLUDED 1      /*!< (unspecified)                                                        */
#define SPIM120_EASYDMANUMMATCHCHANNELS_MIN 0        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIM120_EASYDMANUMMATCHCHANNELS_MAX 3        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIM120_EASYDMANUMMATCHCHANNELS_SIZE 4       /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIM120_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 1 /*!< (unspecified)                                                  */
#define SPIM120_EASYDMASTOPTASKINCLUDED 1            /*!< (unspecified)                                                        */
#define SPIM120_MAX_DATARATE 32                      /*!< (unspecified)                                                        */
#define SPIM120_EASYDMA_MAXCNT_MIN 0                 /*!< (unspecified)                                                        */
#define SPIM120_EASYDMA_MAXCNT_MAX 14                /*!< (unspecified)                                                        */
#define SPIM120_EASYDMA_MAXCNT_SIZE 15               /*!< (unspecified)                                                        */
#define SPIM120_FEATURE_HARDWARE_CSN_PRESENT 1       /*!< (unspecified)                                                        */
#define SPIM120_FEATURE_HARDWARE_DCX_PRESENT 1       /*!< (unspecified)                                                        */
#define SPIM120_FEATURE_RXDELAY_PRESENT 1            /*!< (unspecified)                                                        */
#define SPIM120_STALL_STATUS_PRESENT 0               /*!< (unspecified)                                                        */
#define SPIM120_STALL_STATUS_TX_PRESENT 1            /*!< (unspecified)                                                        */
#define SPIM120_HSSPI 0                              /*!< (unspecified)                                                        */
#define SPIM120_HIGH_SPEED_DOMAIN 1                  /*!< (unspecified)                                                        */
#define SPIM120_MULTIPLE_CHIPSELECT 0                /*!< (unspecified)                                                        */
#define SPIM120_NUM_CHIPSELECT_MIN 0                 /*!< Peripheral supports 0..0 chip select signals.                        */
#define SPIM120_NUM_CHIPSELECT_MAX 0                 /*!< Peripheral supports 0..0 chip select signals.                        */
#define SPIM120_NUM_CHIPSELECT_SIZE 1                /*!< Peripheral supports 0..0 chip select signals.                        */
#define SPIM120_CORE_FREQUENCY 256                   /*!< Peripheral core frequency is 256 MHz.                                */
#define SPIM120_PRESCALER_PRESENT 1                  /*!< (unspecified)                                                        */
#define SPIM120_PRESCALER_DIVISOR_RANGE_MIN 4        /*!< (unspecified)                                                        */
#define SPIM120_PRESCALER_DIVISOR_RANGE_MAX 126      /*!< (unspecified)                                                        */
#define SPIM120_PRESCALER_DIVISOR_RANGE_SIZE 127     /*!< (unspecified)                                                        */
#define SPIM120_RXDELAY_VALUE_RANGE_MIN 0            /*!< (unspecified)                                                        */
#define SPIM120_RXDELAY_VALUE_RANGE_MAX 40           /*!< (unspecified)                                                        */
#define SPIM120_RXDELAY_VALUE_RANGE_SIZE 41          /*!< (unspecified)                                                        */
#define SPIM120_RXDELAY_RESET_VALUE 2                /*!< (unspecified)                                                        */
#define SPIM120_RXDELAY_FIELD_WIDTH_MIN 0            /*!< (unspecified)                                                        */
#define SPIM120_RXDELAY_FIELD_WIDTH_MAX 5            /*!< (unspecified)                                                        */
#define SPIM120_RXDELAY_FIELD_WIDTH_SIZE 6           /*!< (unspecified)                                                        */

#define SPIM130_EASYDMA5 1                           /*!< (unspecified)                                                        */
#define SPIM130_EASYDMATEMP 0                        /*!< (unspecified)                                                        */
#define SPIM130_EASYDMALISTINCLUDED 1                /*!< (unspecified)                                                        */
#define SPIM130_EASYDMAMODEINCLUDED 0                /*!< (unspecified)                                                        */
#define SPIM130_EASYDMAFULLLPMODEINCLUDED 0          /*!< (unspecified)                                                        */
#define SPIM130_EASYDMAPATTERNMATCHERINCLUDED 1      /*!< (unspecified)                                                        */
#define SPIM130_EASYDMANUMMATCHCHANNELS_MIN 0        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIM130_EASYDMANUMMATCHCHANNELS_MAX 3        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIM130_EASYDMANUMMATCHCHANNELS_SIZE 4       /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIM130_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 1 /*!< (unspecified)                                                  */
#define SPIM130_EASYDMASTOPTASKINCLUDED 1            /*!< (unspecified)                                                        */
#define SPIM130_MAX_DATARATE 8                       /*!< (unspecified)                                                        */
#define SPIM130_EASYDMA_MAXCNT_MIN 0                 /*!< (unspecified)                                                        */
#define SPIM130_EASYDMA_MAXCNT_MAX 14                /*!< (unspecified)                                                        */
#define SPIM130_EASYDMA_MAXCNT_SIZE 15               /*!< (unspecified)                                                        */
#define SPIM130_FEATURE_HARDWARE_CSN_PRESENT 1       /*!< (unspecified)                                                        */
#define SPIM130_FEATURE_HARDWARE_DCX_PRESENT 1       /*!< (unspecified)                                                        */
#define SPIM130_FEATURE_RXDELAY_PRESENT 1            /*!< (unspecified)                                                        */
#define SPIM130_STALL_STATUS_PRESENT 0               /*!< (unspecified)                                                        */
#define SPIM130_STALL_STATUS_TX_PRESENT 1            /*!< (unspecified)                                                        */
#define SPIM130_HSSPI 0                              /*!< (unspecified)                                                        */
#define SPIM130_HIGH_SPEED_DOMAIN 0                  /*!< (unspecified)                                                        */
#define SPIM130_MULTIPLE_CHIPSELECT 0                /*!< (unspecified)                                                        */
#define SPIM130_NUM_CHIPSELECT_MIN 0                 /*!< Peripheral supports 0..0 chip select signals.                        */
#define SPIM130_NUM_CHIPSELECT_MAX 0                 /*!< Peripheral supports 0..0 chip select signals.                        */
#define SPIM130_NUM_CHIPSELECT_SIZE 1                /*!< Peripheral supports 0..0 chip select signals.                        */
#define SPIM130_CORE_FREQUENCY 16                    /*!< Peripheral core frequency is 16 MHz.                                 */
#define SPIM130_PRESCALER_PRESENT 1                  /*!< (unspecified)                                                        */
#define SPIM130_PRESCALER_DIVISOR_RANGE_MIN 2        /*!< (unspecified)                                                        */
#define SPIM130_PRESCALER_DIVISOR_RANGE_MAX 126      /*!< (unspecified)                                                        */
#define SPIM130_PRESCALER_DIVISOR_RANGE_SIZE 127     /*!< (unspecified)                                                        */
#define SPIM130_RXDELAY_VALUE_RANGE_MIN 0            /*!< (unspecified)                                                        */
#define SPIM130_RXDELAY_VALUE_RANGE_MAX 40           /*!< (unspecified)                                                        */
#define SPIM130_RXDELAY_VALUE_RANGE_SIZE 41          /*!< (unspecified)                                                        */
#define SPIM130_RXDELAY_RESET_VALUE 2                /*!< (unspecified)                                                        */
#define SPIM130_RXDELAY_FIELD_WIDTH_MIN 0            /*!< (unspecified)                                                        */
#define SPIM130_RXDELAY_FIELD_WIDTH_MAX 5            /*!< (unspecified)                                                        */
#define SPIM130_RXDELAY_FIELD_WIDTH_SIZE 6           /*!< (unspecified)                                                        */

#define SPIM131_EASYDMA5 1                           /*!< (unspecified)                                                        */
#define SPIM131_EASYDMATEMP 0                        /*!< (unspecified)                                                        */
#define SPIM131_EASYDMALISTINCLUDED 1                /*!< (unspecified)                                                        */
#define SPIM131_EASYDMAMODEINCLUDED 0                /*!< (unspecified)                                                        */
#define SPIM131_EASYDMAFULLLPMODEINCLUDED 0          /*!< (unspecified)                                                        */
#define SPIM131_EASYDMAPATTERNMATCHERINCLUDED 1      /*!< (unspecified)                                                        */
#define SPIM131_EASYDMANUMMATCHCHANNELS_MIN 0        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIM131_EASYDMANUMMATCHCHANNELS_MAX 3        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIM131_EASYDMANUMMATCHCHANNELS_SIZE 4       /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIM131_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 1 /*!< (unspecified)                                                  */
#define SPIM131_EASYDMASTOPTASKINCLUDED 1            /*!< (unspecified)                                                        */
#define SPIM131_MAX_DATARATE 8                       /*!< (unspecified)                                                        */
#define SPIM131_EASYDMA_MAXCNT_MIN 0                 /*!< (unspecified)                                                        */
#define SPIM131_EASYDMA_MAXCNT_MAX 14                /*!< (unspecified)                                                        */
#define SPIM131_EASYDMA_MAXCNT_SIZE 15               /*!< (unspecified)                                                        */
#define SPIM131_FEATURE_HARDWARE_CSN_PRESENT 1       /*!< (unspecified)                                                        */
#define SPIM131_FEATURE_HARDWARE_DCX_PRESENT 1       /*!< (unspecified)                                                        */
#define SPIM131_FEATURE_RXDELAY_PRESENT 1            /*!< (unspecified)                                                        */
#define SPIM131_STALL_STATUS_PRESENT 0               /*!< (unspecified)                                                        */
#define SPIM131_STALL_STATUS_TX_PRESENT 1            /*!< (unspecified)                                                        */
#define SPIM131_HSSPI 0                              /*!< (unspecified)                                                        */
#define SPIM131_HIGH_SPEED_DOMAIN 0                  /*!< (unspecified)                                                        */
#define SPIM131_MULTIPLE_CHIPSELECT 0                /*!< (unspecified)                                                        */
#define SPIM131_NUM_CHIPSELECT_MIN 0                 /*!< Peripheral supports 0..0 chip select signals.                        */
#define SPIM131_NUM_CHIPSELECT_MAX 0                 /*!< Peripheral supports 0..0 chip select signals.                        */
#define SPIM131_NUM_CHIPSELECT_SIZE 1                /*!< Peripheral supports 0..0 chip select signals.                        */
#define SPIM131_CORE_FREQUENCY 16                    /*!< Peripheral core frequency is 16 MHz.                                 */
#define SPIM131_PRESCALER_PRESENT 1                  /*!< (unspecified)                                                        */
#define SPIM131_PRESCALER_DIVISOR_RANGE_MIN 2        /*!< (unspecified)                                                        */
#define SPIM131_PRESCALER_DIVISOR_RANGE_MAX 126      /*!< (unspecified)                                                        */
#define SPIM131_PRESCALER_DIVISOR_RANGE_SIZE 127     /*!< (unspecified)                                                        */
#define SPIM131_RXDELAY_VALUE_RANGE_MIN 0            /*!< (unspecified)                                                        */
#define SPIM131_RXDELAY_VALUE_RANGE_MAX 40           /*!< (unspecified)                                                        */
#define SPIM131_RXDELAY_VALUE_RANGE_SIZE 41          /*!< (unspecified)                                                        */
#define SPIM131_RXDELAY_RESET_VALUE 2                /*!< (unspecified)                                                        */
#define SPIM131_RXDELAY_FIELD_WIDTH_MIN 0            /*!< (unspecified)                                                        */
#define SPIM131_RXDELAY_FIELD_WIDTH_MAX 5            /*!< (unspecified)                                                        */
#define SPIM131_RXDELAY_FIELD_WIDTH_SIZE 6           /*!< (unspecified)                                                        */

#define SPIM132_EASYDMA5 1                           /*!< (unspecified)                                                        */
#define SPIM132_EASYDMATEMP 0                        /*!< (unspecified)                                                        */
#define SPIM132_EASYDMALISTINCLUDED 1                /*!< (unspecified)                                                        */
#define SPIM132_EASYDMAMODEINCLUDED 0                /*!< (unspecified)                                                        */
#define SPIM132_EASYDMAFULLLPMODEINCLUDED 0          /*!< (unspecified)                                                        */
#define SPIM132_EASYDMAPATTERNMATCHERINCLUDED 1      /*!< (unspecified)                                                        */
#define SPIM132_EASYDMANUMMATCHCHANNELS_MIN 0        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIM132_EASYDMANUMMATCHCHANNELS_MAX 3        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIM132_EASYDMANUMMATCHCHANNELS_SIZE 4       /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIM132_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 1 /*!< (unspecified)                                                  */
#define SPIM132_EASYDMASTOPTASKINCLUDED 1            /*!< (unspecified)                                                        */
#define SPIM132_MAX_DATARATE 8                       /*!< (unspecified)                                                        */
#define SPIM132_EASYDMA_MAXCNT_MIN 0                 /*!< (unspecified)                                                        */
#define SPIM132_EASYDMA_MAXCNT_MAX 14                /*!< (unspecified)                                                        */
#define SPIM132_EASYDMA_MAXCNT_SIZE 15               /*!< (unspecified)                                                        */
#define SPIM132_FEATURE_HARDWARE_CSN_PRESENT 1       /*!< (unspecified)                                                        */
#define SPIM132_FEATURE_HARDWARE_DCX_PRESENT 1       /*!< (unspecified)                                                        */
#define SPIM132_FEATURE_RXDELAY_PRESENT 1            /*!< (unspecified)                                                        */
#define SPIM132_STALL_STATUS_PRESENT 0               /*!< (unspecified)                                                        */
#define SPIM132_STALL_STATUS_TX_PRESENT 1            /*!< (unspecified)                                                        */
#define SPIM132_HSSPI 0                              /*!< (unspecified)                                                        */
#define SPIM132_HIGH_SPEED_DOMAIN 0                  /*!< (unspecified)                                                        */
#define SPIM132_MULTIPLE_CHIPSELECT 0                /*!< (unspecified)                                                        */
#define SPIM132_NUM_CHIPSELECT_MIN 0                 /*!< Peripheral supports 0..0 chip select signals.                        */
#define SPIM132_NUM_CHIPSELECT_MAX 0                 /*!< Peripheral supports 0..0 chip select signals.                        */
#define SPIM132_NUM_CHIPSELECT_SIZE 1                /*!< Peripheral supports 0..0 chip select signals.                        */
#define SPIM132_CORE_FREQUENCY 16                    /*!< Peripheral core frequency is 16 MHz.                                 */
#define SPIM132_PRESCALER_PRESENT 1                  /*!< (unspecified)                                                        */
#define SPIM132_PRESCALER_DIVISOR_RANGE_MIN 2        /*!< (unspecified)                                                        */
#define SPIM132_PRESCALER_DIVISOR_RANGE_MAX 126      /*!< (unspecified)                                                        */
#define SPIM132_PRESCALER_DIVISOR_RANGE_SIZE 127     /*!< (unspecified)                                                        */
#define SPIM132_RXDELAY_VALUE_RANGE_MIN 0            /*!< (unspecified)                                                        */
#define SPIM132_RXDELAY_VALUE_RANGE_MAX 40           /*!< (unspecified)                                                        */
#define SPIM132_RXDELAY_VALUE_RANGE_SIZE 41          /*!< (unspecified)                                                        */
#define SPIM132_RXDELAY_RESET_VALUE 2                /*!< (unspecified)                                                        */
#define SPIM132_RXDELAY_FIELD_WIDTH_MIN 0            /*!< (unspecified)                                                        */
#define SPIM132_RXDELAY_FIELD_WIDTH_MAX 5            /*!< (unspecified)                                                        */
#define SPIM132_RXDELAY_FIELD_WIDTH_SIZE 6           /*!< (unspecified)                                                        */

#define SPIM133_EASYDMA5 1                           /*!< (unspecified)                                                        */
#define SPIM133_EASYDMATEMP 0                        /*!< (unspecified)                                                        */
#define SPIM133_EASYDMALISTINCLUDED 1                /*!< (unspecified)                                                        */
#define SPIM133_EASYDMAMODEINCLUDED 0                /*!< (unspecified)                                                        */
#define SPIM133_EASYDMAFULLLPMODEINCLUDED 0          /*!< (unspecified)                                                        */
#define SPIM133_EASYDMAPATTERNMATCHERINCLUDED 1      /*!< (unspecified)                                                        */
#define SPIM133_EASYDMANUMMATCHCHANNELS_MIN 0        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIM133_EASYDMANUMMATCHCHANNELS_MAX 3        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIM133_EASYDMANUMMATCHCHANNELS_SIZE 4       /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIM133_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 1 /*!< (unspecified)                                                  */
#define SPIM133_EASYDMASTOPTASKINCLUDED 1            /*!< (unspecified)                                                        */
#define SPIM133_MAX_DATARATE 8                       /*!< (unspecified)                                                        */
#define SPIM133_EASYDMA_MAXCNT_MIN 0                 /*!< (unspecified)                                                        */
#define SPIM133_EASYDMA_MAXCNT_MAX 14                /*!< (unspecified)                                                        */
#define SPIM133_EASYDMA_MAXCNT_SIZE 15               /*!< (unspecified)                                                        */
#define SPIM133_FEATURE_HARDWARE_CSN_PRESENT 1       /*!< (unspecified)                                                        */
#define SPIM133_FEATURE_HARDWARE_DCX_PRESENT 1       /*!< (unspecified)                                                        */
#define SPIM133_FEATURE_RXDELAY_PRESENT 1            /*!< (unspecified)                                                        */
#define SPIM133_STALL_STATUS_PRESENT 0               /*!< (unspecified)                                                        */
#define SPIM133_STALL_STATUS_TX_PRESENT 1            /*!< (unspecified)                                                        */
#define SPIM133_HSSPI 0                              /*!< (unspecified)                                                        */
#define SPIM133_HIGH_SPEED_DOMAIN 0                  /*!< (unspecified)                                                        */
#define SPIM133_MULTIPLE_CHIPSELECT 0                /*!< (unspecified)                                                        */
#define SPIM133_NUM_CHIPSELECT_MIN 0                 /*!< Peripheral supports 0..0 chip select signals.                        */
#define SPIM133_NUM_CHIPSELECT_MAX 0                 /*!< Peripheral supports 0..0 chip select signals.                        */
#define SPIM133_NUM_CHIPSELECT_SIZE 1                /*!< Peripheral supports 0..0 chip select signals.                        */
#define SPIM133_CORE_FREQUENCY 16                    /*!< Peripheral core frequency is 16 MHz.                                 */
#define SPIM133_PRESCALER_PRESENT 1                  /*!< (unspecified)                                                        */
#define SPIM133_PRESCALER_DIVISOR_RANGE_MIN 2        /*!< (unspecified)                                                        */
#define SPIM133_PRESCALER_DIVISOR_RANGE_MAX 126      /*!< (unspecified)                                                        */
#define SPIM133_PRESCALER_DIVISOR_RANGE_SIZE 127     /*!< (unspecified)                                                        */
#define SPIM133_RXDELAY_VALUE_RANGE_MIN 0            /*!< (unspecified)                                                        */
#define SPIM133_RXDELAY_VALUE_RANGE_MAX 40           /*!< (unspecified)                                                        */
#define SPIM133_RXDELAY_VALUE_RANGE_SIZE 41          /*!< (unspecified)                                                        */
#define SPIM133_RXDELAY_RESET_VALUE 2                /*!< (unspecified)                                                        */
#define SPIM133_RXDELAY_FIELD_WIDTH_MIN 0            /*!< (unspecified)                                                        */
#define SPIM133_RXDELAY_FIELD_WIDTH_MAX 5            /*!< (unspecified)                                                        */
#define SPIM133_RXDELAY_FIELD_WIDTH_SIZE 6           /*!< (unspecified)                                                        */

/*SPI Slave*/
#define SPIS_PRESENT 1
#define SPIS_COUNT 5

#define SPIS120_LEGACYPSEL 0                         /*!< (unspecified)                                                        */
#define SPIS120_LEGACYEDMA 0                         /*!< (unspecified)                                                        */
#define SPIS120_EASYDMA_MAXCNT_MIN 0                 /*!< (unspecified)                                                        */
#define SPIS120_EASYDMA_MAXCNT_MAX 14                /*!< (unspecified)                                                        */
#define SPIS120_EASYDMA_MAXCNT_SIZE 15               /*!< (unspecified)                                                        */
#define SPIS120_EASYDMA5 1                           /*!< (unspecified)                                                        */
#define SPIS120_EASYDMATEMP 0                        /*!< (unspecified)                                                        */
#define SPIS120_EASYDMALISTINCLUDED 1                /*!< (unspecified)                                                        */
#define SPIS120_EASYDMAMODEINCLUDED 0                /*!< (unspecified)                                                        */
#define SPIS120_EASYDMAFULLLPMODEINCLUDED 0          /*!< (unspecified)                                                        */
#define SPIS120_EASYDMAPATTERNMATCHERINCLUDED 1      /*!< (unspecified)                                                        */
#define SPIS120_EASYDMANUMMATCHCHANNELS_MIN 0        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIS120_EASYDMANUMMATCHCHANNELS_MAX 3        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIS120_EASYDMANUMMATCHCHANNELS_SIZE 4       /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIS120_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 1 /*!< (unspecified)                                                  */
#define SPIS120_EASYDMASTOPTASKINCLUDED 1            /*!< (unspecified)                                                        */

#define SPIS130_LEGACYPSEL 0                         /*!< (unspecified)                                                        */
#define SPIS130_LEGACYEDMA 0                         /*!< (unspecified)                                                        */
#define SPIS130_EASYDMA_MAXCNT_MIN 0                 /*!< (unspecified)                                                        */
#define SPIS130_EASYDMA_MAXCNT_MAX 14                /*!< (unspecified)                                                        */
#define SPIS130_EASYDMA_MAXCNT_SIZE 15               /*!< (unspecified)                                                        */
#define SPIS130_EASYDMA5 1                           /*!< (unspecified)                                                        */
#define SPIS130_EASYDMATEMP 0                        /*!< (unspecified)                                                        */
#define SPIS130_EASYDMALISTINCLUDED 1                /*!< (unspecified)                                                        */
#define SPIS130_EASYDMAMODEINCLUDED 0                /*!< (unspecified)                                                        */
#define SPIS130_EASYDMAFULLLPMODEINCLUDED 0          /*!< (unspecified)                                                        */
#define SPIS130_EASYDMAPATTERNMATCHERINCLUDED 1      /*!< (unspecified)                                                        */
#define SPIS130_EASYDMANUMMATCHCHANNELS_MIN 0        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIS130_EASYDMANUMMATCHCHANNELS_MAX 3        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIS130_EASYDMANUMMATCHCHANNELS_SIZE 4       /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIS130_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 1 /*!< (unspecified)                                                  */
#define SPIS130_EASYDMASTOPTASKINCLUDED 1            /*!< (unspecified)                                                        */

#define SPIS131_LEGACYPSEL 0                         /*!< (unspecified)                                                        */
#define SPIS131_LEGACYEDMA 0                         /*!< (unspecified)                                                        */
#define SPIS131_EASYDMA_MAXCNT_MIN 0                 /*!< (unspecified)                                                        */
#define SPIS131_EASYDMA_MAXCNT_MAX 14                /*!< (unspecified)                                                        */
#define SPIS131_EASYDMA_MAXCNT_SIZE 15               /*!< (unspecified)                                                        */
#define SPIS131_EASYDMA5 1                           /*!< (unspecified)                                                        */
#define SPIS131_EASYDMATEMP 0                        /*!< (unspecified)                                                        */
#define SPIS131_EASYDMALISTINCLUDED 1                /*!< (unspecified)                                                        */
#define SPIS131_EASYDMAMODEINCLUDED 0                /*!< (unspecified)                                                        */
#define SPIS131_EASYDMAFULLLPMODEINCLUDED 0          /*!< (unspecified)                                                        */
#define SPIS131_EASYDMAPATTERNMATCHERINCLUDED 1      /*!< (unspecified)                                                        */
#define SPIS131_EASYDMANUMMATCHCHANNELS_MIN 0        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIS131_EASYDMANUMMATCHCHANNELS_MAX 3        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIS131_EASYDMANUMMATCHCHANNELS_SIZE 4       /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIS131_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 1 /*!< (unspecified)                                                  */
#define SPIS131_EASYDMASTOPTASKINCLUDED 1            /*!< (unspecified)                                                        */

#define SPIS132_LEGACYPSEL 0                         /*!< (unspecified)                                                        */
#define SPIS132_LEGACYEDMA 0                         /*!< (unspecified)                                                        */
#define SPIS132_EASYDMA_MAXCNT_MIN 0                 /*!< (unspecified)                                                        */
#define SPIS132_EASYDMA_MAXCNT_MAX 14                /*!< (unspecified)                                                        */
#define SPIS132_EASYDMA_MAXCNT_SIZE 15               /*!< (unspecified)                                                        */
#define SPIS132_EASYDMA5 1                           /*!< (unspecified)                                                        */
#define SPIS132_EASYDMATEMP 0                        /*!< (unspecified)                                                        */
#define SPIS132_EASYDMALISTINCLUDED 1                /*!< (unspecified)                                                        */
#define SPIS132_EASYDMAMODEINCLUDED 0                /*!< (unspecified)                                                        */
#define SPIS132_EASYDMAFULLLPMODEINCLUDED 0          /*!< (unspecified)                                                        */
#define SPIS132_EASYDMAPATTERNMATCHERINCLUDED 1      /*!< (unspecified)                                                        */
#define SPIS132_EASYDMANUMMATCHCHANNELS_MIN 0        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIS132_EASYDMANUMMATCHCHANNELS_MAX 3        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIS132_EASYDMANUMMATCHCHANNELS_SIZE 4       /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIS132_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 1 /*!< (unspecified)                                                  */
#define SPIS132_EASYDMASTOPTASKINCLUDED 1            /*!< (unspecified)                                                        */

#define SPIS133_LEGACYPSEL 0                         /*!< (unspecified)                                                        */
#define SPIS133_LEGACYEDMA 0                         /*!< (unspecified)                                                        */
#define SPIS133_EASYDMA_MAXCNT_MIN 0                 /*!< (unspecified)                                                        */
#define SPIS133_EASYDMA_MAXCNT_MAX 14                /*!< (unspecified)                                                        */
#define SPIS133_EASYDMA_MAXCNT_SIZE 15               /*!< (unspecified)                                                        */
#define SPIS133_EASYDMA5 1                           /*!< (unspecified)                                                        */
#define SPIS133_EASYDMATEMP 0                        /*!< (unspecified)                                                        */
#define SPIS133_EASYDMALISTINCLUDED 1                /*!< (unspecified)                                                        */
#define SPIS133_EASYDMAMODEINCLUDED 0                /*!< (unspecified)                                                        */
#define SPIS133_EASYDMAFULLLPMODEINCLUDED 0          /*!< (unspecified)                                                        */
#define SPIS133_EASYDMAPATTERNMATCHERINCLUDED 1      /*!< (unspecified)                                                        */
#define SPIS133_EASYDMANUMMATCHCHANNELS_MIN 0        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIS133_EASYDMANUMMATCHCHANNELS_MAX 3        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIS133_EASYDMANUMMATCHCHANNELS_SIZE 4       /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIS133_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 1 /*!< (unspecified)                                                  */
#define SPIS133_EASYDMASTOPTASKINCLUDED 1            /*!< (unspecified)                                                        */

/*UART with EasyDMA*/
#define UARTE_PRESENT 1
#define UARTE_COUNT 5

#define UARTE120_EASYDMA_MAXCNT_MIN 0                /*!< (unspecified)                                                        */
#define UARTE120_EASYDMA_MAXCNT_MAX 14               /*!< (unspecified)                                                        */
#define UARTE120_EASYDMA_MAXCNT_SIZE 15              /*!< (unspecified)                                                        */
#define UARTE120_EASYDMA5 1                          /*!< (unspecified)                                                        */
#define UARTE120_EASYDMATEMP 0                       /*!< (unspecified)                                                        */
#define UARTE120_TIMEOUT_INTERRUPT 1                 /*!< (unspecified)                                                        */
#define UARTE120_CONFIGURABLE_DATA_FRAME_SIZE 1      /*!< (unspecified)                                                        */
#define UARTE120_CORE_FREQUENCY 256                  /*!< Peripheral clock frequency is 256 MHz.                               */
#define UARTE120_CORE_CLOCK_256 1                    /*!< (unspecified)                                                        */
#define UARTE120_SHORTS_ENDTX_STOPTX 1               /*!< (unspecified)                                                        */
#define UARTE120_EASYDMALISTINCLUDED 1               /*!< (unspecified)                                                        */
#define UARTE120_EASYDMAMODEINCLUDED 0               /*!< (unspecified)                                                        */
#define UARTE120_EASYDMAFULLLPMODEINCLUDED 0         /*!< (unspecified)                                                        */
#define UARTE120_EASYDMAPATTERNMATCHERINCLUDED 1     /*!< (unspecified)                                                        */
#define UARTE120_EASYDMANUMMATCHCHANNELS_MIN 0       /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define UARTE120_EASYDMANUMMATCHCHANNELS_MAX 3       /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define UARTE120_EASYDMANUMMATCHCHANNELS_SIZE 4      /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define UARTE120_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 1 /*!< (unspecified)                                                 */
#define UARTE120_EASYDMASTOPTASKINCLUDED 1           /*!< (unspecified)                                                        */

#define UARTE130_EASYDMA_MAXCNT_MIN 0                /*!< (unspecified)                                                        */
#define UARTE130_EASYDMA_MAXCNT_MAX 14               /*!< (unspecified)                                                        */
#define UARTE130_EASYDMA_MAXCNT_SIZE 15              /*!< (unspecified)                                                        */
#define UARTE130_EASYDMA5 1                          /*!< (unspecified)                                                        */
#define UARTE130_EASYDMATEMP 0                       /*!< (unspecified)                                                        */
#define UARTE130_TIMEOUT_INTERRUPT 1                 /*!< (unspecified)                                                        */
#define UARTE130_CONFIGURABLE_DATA_FRAME_SIZE 1      /*!< (unspecified)                                                        */
#define UARTE130_CORE_FREQUENCY 16                   /*!< Peripheral clock frequency is 16 MHz.                                */
#define UARTE130_CORE_CLOCK_16 1                     /*!< (unspecified)                                                        */
#define UARTE130_SHORTS_ENDTX_STOPTX 1               /*!< (unspecified)                                                        */
#define UARTE130_EASYDMALISTINCLUDED 1               /*!< (unspecified)                                                        */
#define UARTE130_EASYDMAMODEINCLUDED 0               /*!< (unspecified)                                                        */
#define UARTE130_EASYDMAFULLLPMODEINCLUDED 0         /*!< (unspecified)                                                        */
#define UARTE130_EASYDMAPATTERNMATCHERINCLUDED 1     /*!< (unspecified)                                                        */
#define UARTE130_EASYDMANUMMATCHCHANNELS_MIN 0       /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define UARTE130_EASYDMANUMMATCHCHANNELS_MAX 3       /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define UARTE130_EASYDMANUMMATCHCHANNELS_SIZE 4      /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define UARTE130_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 1 /*!< (unspecified)                                                 */
#define UARTE130_EASYDMASTOPTASKINCLUDED 1           /*!< (unspecified)                                                        */

#define UARTE131_EASYDMA_MAXCNT_MIN 0                /*!< (unspecified)                                                        */
#define UARTE131_EASYDMA_MAXCNT_MAX 14               /*!< (unspecified)                                                        */
#define UARTE131_EASYDMA_MAXCNT_SIZE 15              /*!< (unspecified)                                                        */
#define UARTE131_EASYDMA5 1                          /*!< (unspecified)                                                        */
#define UARTE131_EASYDMATEMP 0                       /*!< (unspecified)                                                        */
#define UARTE131_TIMEOUT_INTERRUPT 1                 /*!< (unspecified)                                                        */
#define UARTE131_CONFIGURABLE_DATA_FRAME_SIZE 1      /*!< (unspecified)                                                        */
#define UARTE131_CORE_FREQUENCY 16                   /*!< Peripheral clock frequency is 16 MHz.                                */
#define UARTE131_CORE_CLOCK_16 1                     /*!< (unspecified)                                                        */
#define UARTE131_SHORTS_ENDTX_STOPTX 1               /*!< (unspecified)                                                        */
#define UARTE131_EASYDMALISTINCLUDED 1               /*!< (unspecified)                                                        */
#define UARTE131_EASYDMAMODEINCLUDED 0               /*!< (unspecified)                                                        */
#define UARTE131_EASYDMAFULLLPMODEINCLUDED 0         /*!< (unspecified)                                                        */
#define UARTE131_EASYDMAPATTERNMATCHERINCLUDED 1     /*!< (unspecified)                                                        */
#define UARTE131_EASYDMANUMMATCHCHANNELS_MIN 0       /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define UARTE131_EASYDMANUMMATCHCHANNELS_MAX 3       /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define UARTE131_EASYDMANUMMATCHCHANNELS_SIZE 4      /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define UARTE131_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 1 /*!< (unspecified)                                                 */
#define UARTE131_EASYDMASTOPTASKINCLUDED 1           /*!< (unspecified)                                                        */

#define UARTE132_EASYDMA_MAXCNT_MIN 0                /*!< (unspecified)                                                        */
#define UARTE132_EASYDMA_MAXCNT_MAX 14               /*!< (unspecified)                                                        */
#define UARTE132_EASYDMA_MAXCNT_SIZE 15              /*!< (unspecified)                                                        */
#define UARTE132_EASYDMA5 1                          /*!< (unspecified)                                                        */
#define UARTE132_EASYDMATEMP 0                       /*!< (unspecified)                                                        */
#define UARTE132_TIMEOUT_INTERRUPT 1                 /*!< (unspecified)                                                        */
#define UARTE132_CONFIGURABLE_DATA_FRAME_SIZE 1      /*!< (unspecified)                                                        */
#define UARTE132_CORE_FREQUENCY 16                   /*!< Peripheral clock frequency is 16 MHz.                                */
#define UARTE132_CORE_CLOCK_16 1                     /*!< (unspecified)                                                        */
#define UARTE132_SHORTS_ENDTX_STOPTX 1               /*!< (unspecified)                                                        */
#define UARTE132_EASYDMALISTINCLUDED 1               /*!< (unspecified)                                                        */
#define UARTE132_EASYDMAMODEINCLUDED 0               /*!< (unspecified)                                                        */
#define UARTE132_EASYDMAFULLLPMODEINCLUDED 0         /*!< (unspecified)                                                        */
#define UARTE132_EASYDMAPATTERNMATCHERINCLUDED 1     /*!< (unspecified)                                                        */
#define UARTE132_EASYDMANUMMATCHCHANNELS_MIN 0       /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define UARTE132_EASYDMANUMMATCHCHANNELS_MAX 3       /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define UARTE132_EASYDMANUMMATCHCHANNELS_SIZE 4      /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define UARTE132_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 1 /*!< (unspecified)                                                 */
#define UARTE132_EASYDMASTOPTASKINCLUDED 1           /*!< (unspecified)                                                        */

#define UARTE133_EASYDMA_MAXCNT_MIN 0                /*!< (unspecified)                                                        */
#define UARTE133_EASYDMA_MAXCNT_MAX 14               /*!< (unspecified)                                                        */
#define UARTE133_EASYDMA_MAXCNT_SIZE 15              /*!< (unspecified)                                                        */
#define UARTE133_EASYDMA5 1                          /*!< (unspecified)                                                        */
#define UARTE133_EASYDMATEMP 0                       /*!< (unspecified)                                                        */
#define UARTE133_TIMEOUT_INTERRUPT 1                 /*!< (unspecified)                                                        */
#define UARTE133_CONFIGURABLE_DATA_FRAME_SIZE 1      /*!< (unspecified)                                                        */
#define UARTE133_CORE_FREQUENCY 16                   /*!< Peripheral clock frequency is 16 MHz.                                */
#define UARTE133_CORE_CLOCK_16 1                     /*!< (unspecified)                                                        */
#define UARTE133_SHORTS_ENDTX_STOPTX 1               /*!< (unspecified)                                                        */
#define UARTE133_EASYDMALISTINCLUDED 1               /*!< (unspecified)                                                        */
#define UARTE133_EASYDMAMODEINCLUDED 0               /*!< (unspecified)                                                        */
#define UARTE133_EASYDMAFULLLPMODEINCLUDED 0         /*!< (unspecified)                                                        */
#define UARTE133_EASYDMAPATTERNMATCHERINCLUDED 1     /*!< (unspecified)                                                        */
#define UARTE133_EASYDMANUMMATCHCHANNELS_MIN 0       /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define UARTE133_EASYDMANUMMATCHCHANNELS_MAX 3       /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define UARTE133_EASYDMANUMMATCHCHANNELS_SIZE 4      /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define UARTE133_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 1 /*!< (unspecified)                                                 */
#define UARTE133_EASYDMASTOPTASKINCLUDED 1           /*!< (unspecified)                                                        */

/*AHB Buffer*/
#define AHBBUFFER_PRESENT 1
#define AHBBUFFER_COUNT 2

/*Real-time counter*/
#define RTC_PRESENT 1
#define RTC_COUNT 1

#define RTC130_CC_NUM_MIN 0                          /*!< (unspecified)                                                        */
#define RTC130_CC_NUM_MAX 3                          /*!< (unspecified)                                                        */
#define RTC130_CC_NUM_SIZE 4                         /*!< (unspecified)                                                        */
#define RTC130_BIT_WIDTH_MIN 0                       /*!< (unspecified)                                                        */
#define RTC130_BIT_WIDTH_MAX 23                      /*!< (unspecified)                                                        */
#define RTC130_BIT_WIDTH_SIZE 24                     /*!< (unspecified)                                                        */
#define RTC130_LFCLK_ENABLE 1                        /*!< (unspecified)                                                        */

/*Watchdog Timer*/
#define WDT_PRESENT 1
#define WDT_COUNT 2

#define WDT131_START_ON_RESET 0                      /*!< (unspecified)                                                        */
#define WDT131_CRV_RESETVALUE 4294967295             /*!< (unspecified)                                                        */
#define WDT131_ALLOW_STOP 0                          /*!< (unspecified)                                                        */
#define WDT131_HAS_INTEN 1                           /*!< (unspecified)                                                        */

#define WDT132_START_ON_RESET 0                      /*!< (unspecified)                                                        */
#define WDT132_CRV_RESETVALUE 4294967295             /*!< (unspecified)                                                        */
#define WDT132_ALLOW_STOP 0                          /*!< (unspecified)                                                        */
#define WDT132_HAS_INTEN 1                           /*!< (unspecified)                                                        */

/*GPIO Port*/
#define GPIO_PRESENT 1
#define GPIO_COUNT 6

#define P0_CTRLSEL_MAP1 1                            /*!< (unspecified)                                                        */
#define P0_CTRLSEL_MAP2 0                            /*!< (unspecified)                                                        */
#define P0_CTRLSEL_MAP3 0                            /*!< (unspecified)                                                        */
#define P0_PIN_NUM_MIN 0                             /*!< (unspecified)                                                        */
#define P0_PIN_NUM_MAX 4                             /*!< (unspecified)                                                        */
#define P0_PIN_NUM_SIZE 5                            /*!< (unspecified)                                                        */
#define P0_FEATURE_PINS_PRESENT 0x0000001FUL         /*!< (unspecified)                                                        */
#define P0_PIN_SENSE_MECHANISM 1                     /*!< (unspecified)                                                        */
#define P0_DRIVECTRL 0                               /*!< (unspecified)                                                        */
#define P0_RETAIN 1                                  /*!< (unspecified)                                                        */
#define P0_PWRCTRL 0                                 /*!< (unspecified)                                                        */
#define P0_PWRCTRL_SEPARATE_REG 1                    /*!< (unspecified)                                                        */
#define P0_VSS_FLOAT_DFT 0                           /*!< (unspecified)                                                        */
#define P0_PIN_OWNER_SEC 0                           /*!< (unspecified)                                                        */
#define P0_WIFI_CORE_PRESENT 0                       /*!< (unspecified)                                                        */
#define P0_RETAIN_PER_PIN 1                          /*!< (unspecified)                                                        */
#define P0_CLOCKPIN 1                                /*!< (unspecified)                                                        */
#define P0_BIASCTRL 0                                /*!< (unspecified)                                                        */

#define P1_CTRLSEL_MAP1 1                            /*!< (unspecified)                                                        */
#define P1_CTRLSEL_MAP2 0                            /*!< (unspecified)                                                        */
#define P1_CTRLSEL_MAP3 0                            /*!< (unspecified)                                                        */
#define P1_PIN_NUM_MIN 0                             /*!< (unspecified)                                                        */
#define P1_PIN_NUM_MAX 11                            /*!< (unspecified)                                                        */
#define P1_PIN_NUM_SIZE 12                           /*!< (unspecified)                                                        */
#define P1_FEATURE_PINS_PRESENT 0x00000FFFUL         /*!< (unspecified)                                                        */
#define P1_PIN_SENSE_MECHANISM 1                     /*!< (unspecified)                                                        */
#define P1_DRIVECTRL 0                               /*!< (unspecified)                                                        */
#define P1_RETAIN 1                                  /*!< (unspecified)                                                        */
#define P1_PWRCTRL 0                                 /*!< (unspecified)                                                        */
#define P1_PWRCTRL_SEPARATE_REG 1                    /*!< (unspecified)                                                        */
#define P1_VSS_FLOAT_DFT 0                           /*!< (unspecified)                                                        */
#define P1_PIN_OWNER_SEC 0                           /*!< (unspecified)                                                        */
#define P1_WIFI_CORE_PRESENT 0                       /*!< (unspecified)                                                        */
#define P1_RETAIN_PER_PIN 1                          /*!< (unspecified)                                                        */
#define P1_CLOCKPIN 1                                /*!< (unspecified)                                                        */
#define P1_BIASCTRL 0                                /*!< (unspecified)                                                        */

#define P2_CTRLSEL_MAP1 1                            /*!< (unspecified)                                                        */
#define P2_CTRLSEL_MAP2 0                            /*!< (unspecified)                                                        */
#define P2_CTRLSEL_MAP3 0                            /*!< (unspecified)                                                        */
#define P2_PIN_NUM_MIN 0                             /*!< (unspecified)                                                        */
#define P2_PIN_NUM_MAX 9                             /*!< (unspecified)                                                        */
#define P2_PIN_NUM_SIZE 10                           /*!< (unspecified)                                                        */
#define P2_FEATURE_PINS_PRESENT 0x000003FFUL         /*!< (unspecified)                                                        */
#define P2_PIN_SENSE_MECHANISM 1                     /*!< (unspecified)                                                        */
#define P2_DRIVECTRL 0                               /*!< (unspecified)                                                        */
#define P2_RETAIN 1                                  /*!< (unspecified)                                                        */
#define P2_PWRCTRL 0                                 /*!< (unspecified)                                                        */
#define P2_PWRCTRL_SEPARATE_REG 1                    /*!< (unspecified)                                                        */
#define P2_VSS_FLOAT_DFT 0                           /*!< (unspecified)                                                        */
#define P2_PIN_OWNER_SEC 0                           /*!< (unspecified)                                                        */
#define P2_WIFI_CORE_PRESENT 0                       /*!< (unspecified)                                                        */
#define P2_RETAIN_PER_PIN 1                          /*!< (unspecified)                                                        */
#define P2_CLOCKPIN 1                                /*!< (unspecified)                                                        */
#define P2_BIASCTRL 0                                /*!< (unspecified)                                                        */

#define P5_CTRLSEL_MAP1 1                            /*!< (unspecified)                                                        */
#define P5_CTRLSEL_MAP2 0                            /*!< (unspecified)                                                        */
#define P5_CTRLSEL_MAP3 0                            /*!< (unspecified)                                                        */
#define P5_PIN_NUM_MIN 0                             /*!< (unspecified)                                                        */
#define P5_PIN_NUM_MAX 5                             /*!< (unspecified)                                                        */
#define P5_PIN_NUM_SIZE 6                            /*!< (unspecified)                                                        */
#define P5_FEATURE_PINS_PRESENT 0x0000003FUL         /*!< (unspecified)                                                        */
#define P5_PIN_SENSE_MECHANISM 1                     /*!< (unspecified)                                                        */
#define P5_DRIVECTRL 0                               /*!< (unspecified)                                                        */
#define P5_RETAIN 1                                  /*!< (unspecified)                                                        */
#define P5_PWRCTRL 0                                 /*!< (unspecified)                                                        */
#define P5_PWRCTRL_SEPARATE_REG 1                    /*!< (unspecified)                                                        */
#define P5_VSS_FLOAT_DFT 0                           /*!< (unspecified)                                                        */
#define P5_PIN_OWNER_SEC 0                           /*!< (unspecified)                                                        */
#define P5_WIFI_CORE_PRESENT 0                       /*!< (unspecified)                                                        */
#define P5_RETAIN_PER_PIN 1                          /*!< (unspecified)                                                        */
#define P5_CLOCKPIN 1                                /*!< (unspecified)                                                        */
#define P5_BIASCTRL 0                                /*!< (unspecified)                                                        */

#define P10_CTRLSEL_MAP1 1                           /*!< (unspecified)                                                        */
#define P10_CTRLSEL_MAP2 0                           /*!< (unspecified)                                                        */
#define P10_CTRLSEL_MAP3 0                           /*!< (unspecified)                                                        */
#define P10_PIN_NUM_MIN 0                            /*!< (unspecified)                                                        */
#define P10_PIN_NUM_MAX 7                            /*!< (unspecified)                                                        */
#define P10_PIN_NUM_SIZE 8                           /*!< (unspecified)                                                        */
#define P10_FEATURE_PINS_PRESENT 0x000000FFUL        /*!< (unspecified)                                                        */
#define P10_PIN_SENSE_MECHANISM 1                    /*!< (unspecified)                                                        */
#define P10_DRIVECTRL 0                              /*!< (unspecified)                                                        */
#define P10_RETAIN 1                                 /*!< (unspecified)                                                        */
#define P10_PWRCTRL 0                                /*!< (unspecified)                                                        */
#define P10_PWRCTRL_SEPARATE_REG 1                   /*!< (unspecified)                                                        */
#define P10_VSS_FLOAT_DFT 0                          /*!< (unspecified)                                                        */
#define P10_PIN_OWNER_SEC 0                          /*!< (unspecified)                                                        */
#define P10_WIFI_CORE_PRESENT 0                      /*!< (unspecified)                                                        */
#define P10_RETAIN_PER_PIN 1                         /*!< (unspecified)                                                        */
#define P10_CLOCKPIN 1                               /*!< (unspecified)                                                        */
#define P10_BIASCTRL 0                               /*!< (unspecified)                                                        */

#define P12_CTRLSEL_MAP1 1                           /*!< (unspecified)                                                        */
#define P12_CTRLSEL_MAP2 0                           /*!< (unspecified)                                                        */
#define P12_CTRLSEL_MAP3 0                           /*!< (unspecified)                                                        */
#define P12_PIN_NUM_MIN 0                            /*!< (unspecified)                                                        */
#define P12_PIN_NUM_MAX 2                            /*!< (unspecified)                                                        */
#define P12_PIN_NUM_SIZE 3                           /*!< (unspecified)                                                        */
#define P12_FEATURE_PINS_PRESENT 0x00000007UL        /*!< (unspecified)                                                        */
#define P12_PIN_SENSE_MECHANISM 1                    /*!< (unspecified)                                                        */
#define P12_DRIVECTRL 0                              /*!< (unspecified)                                                        */
#define P12_RETAIN 1                                 /*!< (unspecified)                                                        */
#define P12_PWRCTRL 0                                /*!< (unspecified)                                                        */
#define P12_PWRCTRL_SEPARATE_REG 1                   /*!< (unspecified)                                                        */
#define P12_VSS_FLOAT_DFT 0                          /*!< (unspecified)                                                        */
#define P12_PIN_OWNER_SEC 0                          /*!< (unspecified)                                                        */
#define P12_WIFI_CORE_PRESENT 0                      /*!< (unspecified)                                                        */
#define P12_RETAIN_PER_PIN 1                         /*!< (unspecified)                                                        */
#define P12_CLOCKPIN 1                               /*!< (unspecified)                                                        */
#define P12_BIASCTRL 0                               /*!< (unspecified)                                                        */

/*GPIO Internal*/
#define GPIOINTERNAL_PRESENT 1
#define GPIOINTERNAL_COUNT 1

#define GPIOINTERNAL_TURNOFFAUTOCLOCKSOURCEREQ 1     /*!< (unspecified)                                                        */
#define GPIOINTERNAL_POWERFORCINGPRE 1               /*!< (unspecified)                                                        */
#define GPIOINTERNAL_DOFORCEPOWERPRE 1               /*!< (unspecified)                                                        */
#define GPIOINTERNAL_PENALTYBITS_MIN 0               /*!< (unspecified)                                                        */
#define GPIOINTERNAL_PENALTYBITS_MAX 7               /*!< (unspecified)                                                        */
#define GPIOINTERNAL_PENALTYBITS_SIZE 8              /*!< (unspecified)                                                        */

/*Reset hub*/
#define RESETHUB_PRESENT 1
#define RESETHUB_COUNT 1

#define RESETHUB_DOMAIN_MASK 252                     /*!< Mask for supported domains.                                          */
#define RESETHUB_CROSSDOMAINRESET 1                  /*!< (unspecified)                                                        */

/*AUXPLL*/
#define AUXPLL_PRESENT 1
#define AUXPLL_COUNT 1

/*AUXPM*/
#define AUXPM_PRESENT 1
#define AUXPM_COUNT 1

/*Analog to Digital Converter*/
#define SAADC_PRESENT 1
#define SAADC_COUNT 1

#define SAADC_EASYDMA5 0                             /*!< (unspecified)                                                        */
#define SAADC_EASYDMATEMP 1                          /*!< (unspecified)                                                        */
#define SAADC_PSEL_V2 1                              /*!< (unspecified)                                                        */
#define SAADC_TASKS_CALIBRATEGAIN 1                  /*!< (unspecified)                                                        */
#define SAADC_PADC_TSMC22 0                          /*!< (unspecified)                                                        */
#define SAADC_SAMPLERATE_CC_VALUERANGE_MIN 4         /*!< (unspecified)                                                        */
#define SAADC_SAMPLERATE_CC_VALUERANGE_MAX 2047      /*!< (unspecified)                                                        */
#define SAADC_SAMPLERATE_CC_VALUERANGE_SIZE 2048     /*!< (unspecified)                                                        */
#define SAADC_TACQ_VALUE_RANGE_MIN 0                 /*!< (unspecified)                                                        */
#define SAADC_TACQ_VALUE_RANGE_MAX 319               /*!< (unspecified)                                                        */
#define SAADC_TACQ_VALUE_RANGE_SIZE 320              /*!< (unspecified)                                                        */
#define SAADC_TCONV_VALUE_RANGE_MIN 0                /*!< (unspecified)                                                        */
#define SAADC_TCONV_VALUE_RANGE_MAX 7                /*!< (unspecified)                                                        */
#define SAADC_TCONV_VALUE_RANGE_SIZE 8               /*!< (unspecified)                                                        */
#define SAADC_EASYDMALISTINCLUDED 0                  /*!< (unspecified)                                                        */
#define SAADC_EASYDMAMODEINCLUDED 0                  /*!< (unspecified)                                                        */
#define SAADC_EASYDMAFULLLPMODEINCLUDED 0            /*!< (unspecified)                                                        */
#define SAADC_EASYDMAPATTERNMATCHERINCLUDED 0        /*!< (unspecified)                                                        */
#define SAADC_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 0 /*!< (unspecified)                                                    */
#define SAADC_EASYDMASTOPTASKINCLUDED 1              /*!< (unspecified)                                                        */

/*Temperature Sensor*/
#define TEMP_PRESENT 1
#define TEMP_COUNT 1

#define TEMP_HAS_ATBCONFIG 1                         /*!< (unspecified)                                                        */
#define TEMP_HAS_OVERRIDEPWR 0                       /*!< (unspecified)                                                        */

/*NFC-A compatible radio NFC-A compatible radio*/
#define NFCT_PRESENT 1
#define NFCT_COUNT 1

#define NFCT_EASYDMA5 0                              /*!< (unspecified)                                                        */
#define NFCT_EASYDMATEMP 1                           /*!< (unspecified)                                                        */
#define NFCT_BUSERROR_PRESENT 0                      /*!< (unspecified)                                                        */
#define NFCT_NFCTFIELDDETCFG_RESET 1                 /*!< Reset value of register NFCTFIELDDETCFG: 1                           */

/*Pulse Density Modulation (Digital Microphone) Interface*/
#define PDM_PRESENT 1
#define PDM_COUNT 1

#define PDM_EASYDMA5 0                               /*!< (unspecified)                                                        */
#define PDM_EASYDMATEMP 1                            /*!< (unspecified)                                                        */
#define PDM_SAMPLE16 0                               /*!< (unspecified)                                                        */
#define PDM_SAMPLE48 1                               /*!< (unspecified)                                                        */
#define PDM_EASYDMALISTINCLUDED 0                    /*!< (unspecified)                                                        */
#define PDM_EASYDMAMODEINCLUDED 0                    /*!< (unspecified)                                                        */
#define PDM_EASYDMAFULLLPMODEINCLUDED 0              /*!< (unspecified)                                                        */
#define PDM_EASYDMAPATTERNMATCHERINCLUDED 0          /*!< (unspecified)                                                        */
#define PDM_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 1 /*!< (unspecified)                                                      */
#define PDM_EASYDMASTOPTASKINCLUDED 1                /*!< (unspecified)                                                        */

/*SIM card interface*/
#define SIMIF_PRESENT 1
#define SIMIF_COUNT 1

#define SIMIF130_SWOVERRIDE_REGS 1                   /*!< (unspecified)                                                        */

/*Pulse width modulation unit*/
#define PWM_PRESENT 1
#define PWM_COUNT 2

#define PWM130_EASYDMA5 1                            /*!< (unspecified)                                                        */
#define PWM130_EASYDMATEMP 0                         /*!< (unspecified)                                                        */
#define PWM130_IDLE_OUT 1                            /*!< (unspecified)                                                        */
#define PWM130_COMPARE_MATCH 1                       /*!< (unspecified)                                                        */
#define PWM130_FEATURES_V2 0                         /*!< (unspecified)                                                        */
#define PWM130_NO_FEATURES_V2 1                      /*!< (unspecified)                                                        */
#define PWM130_EASYDMALISTINCLUDED 0                 /*!< (unspecified)                                                        */
#define PWM130_EASYDMAMODEINCLUDED 0                 /*!< (unspecified)                                                        */
#define PWM130_EASYDMAFULLLPMODEINCLUDED 0           /*!< (unspecified)                                                        */
#define PWM130_EASYDMAPATTERNMATCHERINCLUDED 0       /*!< (unspecified)                                                        */
#define PWM130_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 1 /*!< (unspecified)                                                   */
#define PWM130_EASYDMASTOPTASKINCLUDED 1             /*!< (unspecified)                                                        */

#define PWM131_EASYDMA5 1                            /*!< (unspecified)                                                        */
#define PWM131_EASYDMATEMP 0                         /*!< (unspecified)                                                        */
#define PWM131_IDLE_OUT 1                            /*!< (unspecified)                                                        */
#define PWM131_COMPARE_MATCH 1                       /*!< (unspecified)                                                        */
#define PWM131_FEATURES_V2 0                         /*!< (unspecified)                                                        */
#define PWM131_NO_FEATURES_V2 1                      /*!< (unspecified)                                                        */
#define PWM131_EASYDMALISTINCLUDED 0                 /*!< (unspecified)                                                        */
#define PWM131_EASYDMAMODEINCLUDED 0                 /*!< (unspecified)                                                        */
#define PWM131_EASYDMAFULLLPMODEINCLUDED 0           /*!< (unspecified)                                                        */
#define PWM131_EASYDMAPATTERNMATCHERINCLUDED 0       /*!< (unspecified)                                                        */
#define PWM131_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 1 /*!< (unspecified)                                                   */
#define PWM131_EASYDMASTOPTASKINCLUDED 1             /*!< (unspecified)                                                        */

/*I2C compatible Two-Wire Master Interface with EasyDMA*/
#define TWIM_PRESENT 1
#define TWIM_COUNT 4

#define TWIM130_EASYDMA5 1                           /*!< (unspecified)                                                        */
#define TWIM130_EASYDMATEMP 0                        /*!< (unspecified)                                                        */
#define TWIM130_EASYDMA_MAXCNT_MIN 0                 /*!< (unspecified)                                                        */
#define TWIM130_EASYDMA_MAXCNT_MAX 14                /*!< (unspecified)                                                        */
#define TWIM130_EASYDMA_MAXCNT_SIZE 15               /*!< (unspecified)                                                        */
#define TWIM130_EASYDMALISTINCLUDED 1                /*!< (unspecified)                                                        */
#define TWIM130_EASYDMAMODEINCLUDED 0                /*!< (unspecified)                                                        */
#define TWIM130_EASYDMAFULLLPMODEINCLUDED 0          /*!< (unspecified)                                                        */
#define TWIM130_EASYDMAPATTERNMATCHERINCLUDED 1      /*!< (unspecified)                                                        */
#define TWIM130_EASYDMANUMMATCHCHANNELS_MIN 0        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define TWIM130_EASYDMANUMMATCHCHANNELS_MAX 3        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define TWIM130_EASYDMANUMMATCHCHANNELS_SIZE 4       /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define TWIM130_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 1 /*!< (unspecified)                                                  */
#define TWIM130_EASYDMASTOPTASKINCLUDED 1            /*!< (unspecified)                                                        */

#define TWIM131_EASYDMA5 1                           /*!< (unspecified)                                                        */
#define TWIM131_EASYDMATEMP 0                        /*!< (unspecified)                                                        */
#define TWIM131_EASYDMA_MAXCNT_MIN 0                 /*!< (unspecified)                                                        */
#define TWIM131_EASYDMA_MAXCNT_MAX 14                /*!< (unspecified)                                                        */
#define TWIM131_EASYDMA_MAXCNT_SIZE 15               /*!< (unspecified)                                                        */
#define TWIM131_EASYDMALISTINCLUDED 1                /*!< (unspecified)                                                        */
#define TWIM131_EASYDMAMODEINCLUDED 0                /*!< (unspecified)                                                        */
#define TWIM131_EASYDMAFULLLPMODEINCLUDED 0          /*!< (unspecified)                                                        */
#define TWIM131_EASYDMAPATTERNMATCHERINCLUDED 1      /*!< (unspecified)                                                        */
#define TWIM131_EASYDMANUMMATCHCHANNELS_MIN 0        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define TWIM131_EASYDMANUMMATCHCHANNELS_MAX 3        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define TWIM131_EASYDMANUMMATCHCHANNELS_SIZE 4       /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define TWIM131_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 1 /*!< (unspecified)                                                  */
#define TWIM131_EASYDMASTOPTASKINCLUDED 1            /*!< (unspecified)                                                        */

#define TWIM132_EASYDMA5 1                           /*!< (unspecified)                                                        */
#define TWIM132_EASYDMATEMP 0                        /*!< (unspecified)                                                        */
#define TWIM132_EASYDMA_MAXCNT_MIN 0                 /*!< (unspecified)                                                        */
#define TWIM132_EASYDMA_MAXCNT_MAX 14                /*!< (unspecified)                                                        */
#define TWIM132_EASYDMA_MAXCNT_SIZE 15               /*!< (unspecified)                                                        */
#define TWIM132_EASYDMALISTINCLUDED 1                /*!< (unspecified)                                                        */
#define TWIM132_EASYDMAMODEINCLUDED 0                /*!< (unspecified)                                                        */
#define TWIM132_EASYDMAFULLLPMODEINCLUDED 0          /*!< (unspecified)                                                        */
#define TWIM132_EASYDMAPATTERNMATCHERINCLUDED 1      /*!< (unspecified)                                                        */
#define TWIM132_EASYDMANUMMATCHCHANNELS_MIN 0        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define TWIM132_EASYDMANUMMATCHCHANNELS_MAX 3        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define TWIM132_EASYDMANUMMATCHCHANNELS_SIZE 4       /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define TWIM132_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 1 /*!< (unspecified)                                                  */
#define TWIM132_EASYDMASTOPTASKINCLUDED 1            /*!< (unspecified)                                                        */

#define TWIM133_EASYDMA5 1                           /*!< (unspecified)                                                        */
#define TWIM133_EASYDMATEMP 0                        /*!< (unspecified)                                                        */
#define TWIM133_EASYDMA_MAXCNT_MIN 0                 /*!< (unspecified)                                                        */
#define TWIM133_EASYDMA_MAXCNT_MAX 14                /*!< (unspecified)                                                        */
#define TWIM133_EASYDMA_MAXCNT_SIZE 15               /*!< (unspecified)                                                        */
#define TWIM133_EASYDMALISTINCLUDED 1                /*!< (unspecified)                                                        */
#define TWIM133_EASYDMAMODEINCLUDED 0                /*!< (unspecified)                                                        */
#define TWIM133_EASYDMAFULLLPMODEINCLUDED 0          /*!< (unspecified)                                                        */
#define TWIM133_EASYDMAPATTERNMATCHERINCLUDED 1      /*!< (unspecified)                                                        */
#define TWIM133_EASYDMANUMMATCHCHANNELS_MIN 0        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define TWIM133_EASYDMANUMMATCHCHANNELS_MAX 3        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define TWIM133_EASYDMANUMMATCHCHANNELS_SIZE 4       /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define TWIM133_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 1 /*!< (unspecified)                                                  */
#define TWIM133_EASYDMASTOPTASKINCLUDED 1            /*!< (unspecified)                                                        */

/*I2C compatible Two-Wire Slave Interface with EasyDMA*/
#define TWIS_PRESENT 1
#define TWIS_COUNT 4

#define TWIS130_EASYDMA5 1                           /*!< (unspecified)                                                        */
#define TWIS130_EASYDMATEMP 0                        /*!< (unspecified)                                                        */
#define TWIS130_EASYDMA_MAXCNT_MIN 0                 /*!< (unspecified)                                                        */
#define TWIS130_EASYDMA_MAXCNT_MAX 14                /*!< (unspecified)                                                        */
#define TWIS130_EASYDMA_MAXCNT_SIZE 15               /*!< (unspecified)                                                        */
#define TWIS130_EASYDMALISTINCLUDED 1                /*!< (unspecified)                                                        */
#define TWIS130_EASYDMAMODEINCLUDED 0                /*!< (unspecified)                                                        */
#define TWIS130_EASYDMAFULLLPMODEINCLUDED 0          /*!< (unspecified)                                                        */
#define TWIS130_EASYDMAPATTERNMATCHERINCLUDED 1      /*!< (unspecified)                                                        */
#define TWIS130_EASYDMANUMMATCHCHANNELS_MIN 0        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define TWIS130_EASYDMANUMMATCHCHANNELS_MAX 3        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define TWIS130_EASYDMANUMMATCHCHANNELS_SIZE 4       /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define TWIS130_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 1 /*!< (unspecified)                                                  */
#define TWIS130_EASYDMASTOPTASKINCLUDED 1            /*!< (unspecified)                                                        */

#define TWIS131_EASYDMA5 1                           /*!< (unspecified)                                                        */
#define TWIS131_EASYDMATEMP 0                        /*!< (unspecified)                                                        */
#define TWIS131_EASYDMA_MAXCNT_MIN 0                 /*!< (unspecified)                                                        */
#define TWIS131_EASYDMA_MAXCNT_MAX 14                /*!< (unspecified)                                                        */
#define TWIS131_EASYDMA_MAXCNT_SIZE 15               /*!< (unspecified)                                                        */
#define TWIS131_EASYDMALISTINCLUDED 1                /*!< (unspecified)                                                        */
#define TWIS131_EASYDMAMODEINCLUDED 0                /*!< (unspecified)                                                        */
#define TWIS131_EASYDMAFULLLPMODEINCLUDED 0          /*!< (unspecified)                                                        */
#define TWIS131_EASYDMAPATTERNMATCHERINCLUDED 1      /*!< (unspecified)                                                        */
#define TWIS131_EASYDMANUMMATCHCHANNELS_MIN 0        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define TWIS131_EASYDMANUMMATCHCHANNELS_MAX 3        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define TWIS131_EASYDMANUMMATCHCHANNELS_SIZE 4       /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define TWIS131_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 1 /*!< (unspecified)                                                  */
#define TWIS131_EASYDMASTOPTASKINCLUDED 1            /*!< (unspecified)                                                        */

#define TWIS132_EASYDMA5 1                           /*!< (unspecified)                                                        */
#define TWIS132_EASYDMATEMP 0                        /*!< (unspecified)                                                        */
#define TWIS132_EASYDMA_MAXCNT_MIN 0                 /*!< (unspecified)                                                        */
#define TWIS132_EASYDMA_MAXCNT_MAX 14                /*!< (unspecified)                                                        */
#define TWIS132_EASYDMA_MAXCNT_SIZE 15               /*!< (unspecified)                                                        */
#define TWIS132_EASYDMALISTINCLUDED 1                /*!< (unspecified)                                                        */
#define TWIS132_EASYDMAMODEINCLUDED 0                /*!< (unspecified)                                                        */
#define TWIS132_EASYDMAFULLLPMODEINCLUDED 0          /*!< (unspecified)                                                        */
#define TWIS132_EASYDMAPATTERNMATCHERINCLUDED 1      /*!< (unspecified)                                                        */
#define TWIS132_EASYDMANUMMATCHCHANNELS_MIN 0        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define TWIS132_EASYDMANUMMATCHCHANNELS_MAX 3        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define TWIS132_EASYDMANUMMATCHCHANNELS_SIZE 4       /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define TWIS132_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 1 /*!< (unspecified)                                                  */
#define TWIS132_EASYDMASTOPTASKINCLUDED 1            /*!< (unspecified)                                                        */

#define TWIS133_EASYDMA5 1                           /*!< (unspecified)                                                        */
#define TWIS133_EASYDMATEMP 0                        /*!< (unspecified)                                                        */
#define TWIS133_EASYDMA_MAXCNT_MIN 0                 /*!< (unspecified)                                                        */
#define TWIS133_EASYDMA_MAXCNT_MAX 14                /*!< (unspecified)                                                        */
#define TWIS133_EASYDMA_MAXCNT_SIZE 15               /*!< (unspecified)                                                        */
#define TWIS133_EASYDMALISTINCLUDED 1                /*!< (unspecified)                                                        */
#define TWIS133_EASYDMAMODEINCLUDED 0                /*!< (unspecified)                                                        */
#define TWIS133_EASYDMAFULLLPMODEINCLUDED 0          /*!< (unspecified)                                                        */
#define TWIS133_EASYDMAPATTERNMATCHERINCLUDED 1      /*!< (unspecified)                                                        */
#define TWIS133_EASYDMANUMMATCHCHANNELS_MIN 0        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define TWIS133_EASYDMANUMMATCHCHANNELS_MAX 3        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define TWIS133_EASYDMANUMMATCHCHANNELS_SIZE 4       /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define TWIS133_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 1 /*!< (unspecified)                                                  */
#define TWIS133_EASYDMASTOPTASKINCLUDED 1            /*!< (unspecified)                                                        */


#ifdef __cplusplus
}
#endif
#endif /* NRF9220_CELLRF_PERIPHERALS_H */

