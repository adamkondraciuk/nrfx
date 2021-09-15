/*

Copyright (c) 2010 - 2021, Nordic Semiconductor ASA

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

#ifndef HALTIUM_CELLRF_PERIPHERALS_H
#define HALTIUM_CELLRF_PERIPHERALS_H

#ifdef __cplusplus
    extern "C" {
#endif

/*HSFLL*/
#define HSFLL_PRESENT
#define HSFLL_COUNT 1

/*RfTimer*/
#define RFTIMER_PRESENT
#define RFTIMER_COUNT 3

/*PCGCSlave*/
#define PCGCSLAVE_PRESENT
#define PCGCSLAVE_COUNT 2

#define PCGCS0_PENALTYTASKS 1

#define PCGCS1_PENALTYTASKS 1

/*HALTI_TX_register_map AhmaTxDigDigitalReg register map AhmaTxDigAnalogReg register map*/
#define TXDFE_PRESENT
#define TXDFE_COUNT 1

/*RAM Controller*/
#define RAMC_PRESENT
#define RAMC_COUNT 6

#define RAMCM0_ECC 0
#define RAMCM0_SEC 0

#define RAMCDATA_ECC 0
#define RAMCDATA_SEC 0

#define RAMCIPC_ECC 0
#define RAMCIPC_SEC 0

#define RAMCTX_ECC 0
#define RAMCTX_SEC 0

#define RAMCRX_ECC 0
#define RAMCRX_SEC 0

#define RAMCGNSS_ECC 0
#define RAMCGNSS_SEC 0

/*Event generator unit*/
#define EGUTX_PEND 0

#define EGURX_PEND 1

/*HALTI_RX_register_map AhmaRx Digital control register map AhmaRx Analog control register map*/
#define RXDFE_PRESENT
#define RXDFE_COUNT 2

#define RXDFE_AnaReg 1

#define RXDFEGNSS_AnaReg 0

/*PCGC Master*/
#define PCGCMASTER_PRESENT
#define PCGCMASTER_COUNT 3

#define PCGCM0_POWERCONSUMPTIONCALC 1
#define PCGCM0_SETPWRCONTHRESHOLDBASE 1
#define PCGCM0_CLOCKFORCEREG 1
#define PCGCM0_MASTERFORCEREG 1

#define PCGCM1_POWERCONSUMPTIONCALC 1
#define PCGCM1_SETPWRCONTHRESHOLDBASE 1
#define PCGCM1_CLOCKFORCEREG 1
#define PCGCM1_MASTERFORCEREG 1

#define PCGCM2_POWERCONSUMPTIONCALC 1
#define PCGCM2_SETPWRCONTHRESHOLDBASE 1
#define PCGCM2_CLOCKFORCEREG 1
#define PCGCM2_MASTERFORCEREG 1

/*LRCCONF*/
#define LRCCONF_PRESENT
#define LRCCONF_COUNT 3

#define LRCCONF0_POWERON 0
#define LRCCONF0_RETAIN 0
#define LRCCONF0_OTHERON 0
#define LRCCONF0_AX2XWAITSTATES 0
#define LRCCONF0_SYSTEMOFF 0
#define LRCCONF0_PDACT 1
#define LRCCONF0_CLKCTRL 0

#define LRCCONF1_POWERON 1
#define LRCCONF1_RETAIN 1
#define LRCCONF1_OTHERON 0
#define LRCCONF1_AX2XWAITSTATES 0
#define LRCCONF1_SYSTEMOFF 1
#define LRCCONF1_PDACT 1
#define LRCCONF1_CLKCTRL 0

#define LRCCONF2_POWERON 0
#define LRCCONF2_RETAIN 0
#define LRCCONF2_OTHERON 0
#define LRCCONF2_AX2XWAITSTATES 0
#define LRCCONF2_SYSTEMOFF 0
#define LRCCONF2_PDACT 1
#define LRCCONF2_CLKCTRL 1

/*Direct Sequence Access controller, version 2*/
#define DSA2_PRESENT
#define DSA2_COUNT 2

#define DSA2TX_SEQUENCEREGISTERS 0

#define DSA2RX_SEQUENCEREGISTERS 0

/*Memory Privilege Controller*/
#define MPC_PRESENT
#define MPC_COUNT 1

/*Sensor Analog to Digital Converter*/
#define SENSORADC_PRESENT
#define SENSORADC_COUNT 1

/*AhmaRfSubsystem general control register map*/
#define RFSERVICES_PRESENT
#define RFSERVICES_COUNT 1

/*RF Core Services used by blocks in AhmaRfSubSystem Core*/
#define RFCORESERVICES_PRESENT
#define RFCORESERVICES_COUNT 1

/*CPU Configuration*/
#define CPUCONF_PRESENT
#define CPUCONF_COUNT 1

#define CPUCONF_HASTASKERASECACHE 0
#define CPUCONF_HASINITSVTOR 0
#define CPUCONF_HASINITNSVTOR 0
#define CPUCONF_HASCPUSTART 1
#define CPUCONF_HASCPUWAIT 0

/*MVDMA performs direct-memory-accesses between memories. Data is transferred according to job descriptor lists. Each transfer has corresponding source and sink descriptor lists with matching data amounts. The lists are in memory and they contain data buffer information, address pointers, buffer sizes and data type attributes.*/
                                                                                                                                  
#define MVDMA_PRESENT
#define MVDMA_COUNT 1

/*Memory configuration*/
#define MEMCONF_PRESENT
#define MEMCONF_COUNT 1

#define MEMCONF_RETTRIM 0
#define MEMCONF_REPAIR 1
#define MEMCONF_POWER 1

/*BELLBOARD APB registers*/
#define BELLBOARD_PRESENT
#define BELLBOARD_COUNT 1

/*RFPLL register map*/
#define RFPLL_PRESENT
#define RFPLL_COUNT 1

/*Distributed programmable peripheral interconnect controller*/
#define DPPIC_HASCHANNELGROUPS 1

/*GPIO Port*/
#define GPIO_DRIVECTRL 0
#define GPIO_PWRCTRL 0


#ifdef __cplusplus
}
#endif
#endif /* HALTIUM_CELLRF_PERIPHERALS_H */

