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

#ifndef HALTIUM_CELLDSP_PERIPHERALS_H
#define HALTIUM_CELLDSP_PERIPHERALS_H

#ifdef __cplusplus
    extern "C" {
#endif

/*System Trace Macrocell data buffer*/
#define STMDATA_PRESENT
#define STMDATA_COUNT 1

/*HSFLL*/
#define HSFLL_PRESENT
#define HSFLL_COUNT 1

/*LRCCONF*/
#define LRCCONF_PRESENT
#define LRCCONF_COUNT 2

#define LRCCONF0_POWERON 1
#define LRCCONF0_RETAIN 1
#define LRCCONF0_OTHERON 0
#define LRCCONF0_AX2XWAITSTATES 0
#define LRCCONF0_SYSTEMOFF 1
#define LRCCONF0_PDACT 1
#define LRCCONF0_CLKCTRL 0

#define LRCCONF1_POWERON 0
#define LRCCONF1_RETAIN 0
#define LRCCONF1_OTHERON 0
#define LRCCONF1_AX2XWAITSTATES 0
#define LRCCONF1_SYSTEMOFF 0
#define LRCCONF1_PDACT 1
#define LRCCONF1_CLKCTRL 1

/*Memory Privilege Controller*/
#define MPC_PRESENT
#define MPC_COUNT 1

/*MVDMA performs direct-memory-accesses between memories. Data is transferred according to job descriptor lists. Each transfer has corresponding source and sink descriptor lists with matching data amounts. The lists are in memory and they contain data buffer information, address pointers, buffer sizes and data type attributes.*/
                                                                                                                                  
#define MVDMA_PRESENT
#define MVDMA_COUNT 1

/*RAM Controller*/
#define RAMC_PRESENT
#define RAMC_COUNT 3

#define RAMC00_ECC 0
#define RAMC00_SEC 1

#define RAMC10_ECC 0
#define RAMC10_SEC 1

#define RAMC20_ECC 0
#define RAMC20_SEC 1

/*DSP interrupt mapper*/
#define DSPINTMAP_PRESENT
#define DSPINTMAP_COUNT 1

/*Memory Watch Unit*/
#define MWU_PRESENT
#define MWU_COUNT 1

/*LTE Front End*/
#define LTEFE_PRESENT
#define LTEFE_COUNT 1

/*Decoding*/
#define TURBO_PRESENT
#define TURBO_COUNT 1

/*LTE HARQ*/
#define HARQ_PRESENT
#define HARQ_COUNT 1

/*VITERBI*/
#define VITERBI_PRESENT
#define VITERBI_COUNT 1

/*PPIB APB registers*/
#define PPIB_PRESENT
#define PPIB_COUNT 2

/*CPU Configuration*/
#define CPUCONF_PRESENT
#define CPUCONF_COUNT 1

#define CPUCONF_HASTASKERASECACHE 1
#define CPUCONF_HASINITSVTOR 1
#define CPUCONF_HASINITNSVTOR 1
#define CPUCONF_HASCPUSTART 1
#define CPUCONF_HASCPUWAIT 1

/*Memory configuration*/
#define MEMCONF_PRESENT
#define MEMCONF_COUNT 1

#define MEMCONF_RETTRIM 1
#define MEMCONF_REPAIR 1
#define MEMCONF_POWER 1

/*DSP control*/
#define DSPCTRL_PRESENT
#define DSPCTRL_COUNT 1

/*PCGC Master*/
#define PCGCMASTER_PRESENT
#define PCGCMASTER_COUNT 2

#define PCGCM0_POWERCONSUMPTIONCALC 1
#define PCGCM0_SETPWRCONTHRESHOLDBASE 1
#define PCGCM0_CLOCKFORCEREG 1
#define PCGCM0_MASTERFORCEREG 1

#define PCGCM1_POWERCONSUMPTIONCALC 1
#define PCGCM1_SETPWRCONTHRESHOLDBASE 1
#define PCGCM1_CLOCKFORCEREG 1
#define PCGCM1_MASTERFORCEREG 1

/*Distributed programmable peripheral interconnect controller*/
#define DPPIC_HASCHANNELGROUPS 1

/*PCGCSlave*/
#define PCGCSLAVE_PRESENT
#define PCGCSLAVE_COUNT 1

#define PCGCS0_PENALTYTASKS 1

/*System Trace Macrocell*/
#define STM_PRESENT
#define STM_COUNT 1

/*Embedded Trace Macrocell*/
#define ETM_PRESENT
#define ETM_COUNT 1

/*Trace delay register*/
#define TRACEDELAYREG_PRESENT
#define TRACEDELAYREG_COUNT 1

/*BELLBOARD APB registers*/
#define BELLBOARD_PRESENT
#define BELLBOARD_COUNT 1


#ifdef __cplusplus
}
#endif
#endif /* HALTIUM_CELLDSP_PERIPHERALS_H */

