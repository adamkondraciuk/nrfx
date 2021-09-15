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

#ifndef HALTIUM_APPLICATION_PERIPHERALS_H
#define HALTIUM_APPLICATION_PERIPHERALS_H

#ifdef __cplusplus
    extern "C" {
#endif

/*User information configuration registers*/
#define UICR_PRESENT
#define UICR_COUNT 1

/*Board information configuration registers*/
#define BICR_PRESENT
#define BICR_COUNT 1

#define BICR_P0_EXISTS 1
#define BICR_P1_EXISTS 1
#define BICR_P2_EXISTS 1
#define BICR_P3_EXISTS 1
#define BICR_P4_EXISTS 1
#define BICR_P5_EXISTS 1
#define BICR_P6_EXISTS 1
#define BICR_P7_EXISTS 1
#define BICR_P8_EXISTS 1
#define BICR_P9_EXISTS 1
#define BICR_P10_EXISTS 1
#define BICR_P11_EXISTS 1
#define BICR_P12_EXISTS 1
#define BICR_P13_EXISTS 1
#define BICR_P14_EXISTS 1
#define BICR_P15_EXISTS 1

/*CACHEDATA*/
#define CACHEDATA_PRESENT
#define CACHEDATA_COUNT 2

/*CACHEINFO*/
#define CACHEINFO_PRESENT
#define CACHEINFO_COUNT 2

/*Embedded Trace Macrocell*/
#define ETM_PRESENT
#define ETM_COUNT 1

/*CM33 SubSystem*/
#define CM33SS_PRESENT
#define CM33SS_COUNT 1

/*Cache*/
#define CACHE_PRESENT
#define CACHE_COUNT 2

#define ICACHE_VIRTUALCACHE 0
#define ICACHE_FLUSH 1
#define ICACHE_CLEAN 0

#define DCACHE_VIRTUALCACHE 0
#define DCACHE_FLUSH 1
#define DCACHE_CLEAN 1

/*System protection unit*/
#define SPU_PRESENT
#define SPU_COUNT 2

#define SPU000_BELLS 0
#define SPU000_IPCT 0
#define SPU000_DPPI 0
#define SPU000_GPIOTE 0
#define SPU000_GRTC 1
#define SPU000_GPIO 0

#define SPU010_BELLS 0
#define SPU010_IPCT 1
#define SPU010_DPPI 0
#define SPU010_GPIOTE 0
#define SPU010_GRTC 1
#define SPU010_GPIO 0

/*Memory Privilege Controller*/
#define MPC_PRESENT
#define MPC_COUNT 1

/*MVDMA performs direct-memory-accesses between memories. Data is transferred according to job descriptor lists. Each transfer has corresponding source and sink descriptor lists with matching data amounts. The lists are in memory and they contain data buffer information, address pointers, buffer sizes and data type attributes.*/
                                                                                                                                  
#define MVDMA_PRESENT
#define MVDMA_COUNT 1

/*RAM Controller*/
#define RAMC_PRESENT
#define RAMC_COUNT 1

#define RAMC_ECC 0
#define RAMC_SEC 1

/*PCGCSlave*/
#define PCGCSLAVE_PRESENT
#define PCGCSLAVE_COUNT 2

#define PCGCS000_PENALTYTASKS 1

#define PCGCS010_PENALTYTASKS 1

/*HSFLL*/
#define HSFLL_PRESENT
#define HSFLL_COUNT 1

/*LRCCONF*/
#define LRCCONF_PRESENT
#define LRCCONF_COUNT 2

#define LRCCONF000_POWERON 0
#define LRCCONF000_RETAIN 0
#define LRCCONF000_OTHERON 0
#define LRCCONF000_AX2XWAITSTATES 0
#define LRCCONF000_SYSTEMOFF 0
#define LRCCONF000_PDACT 1
#define LRCCONF000_CLKCTRL 1

#define LRCCONF010_POWERON 1
#define LRCCONF010_RETAIN 1
#define LRCCONF010_OTHERON 0
#define LRCCONF010_AX2XWAITSTATES 0
#define LRCCONF010_SYSTEMOFF 1
#define LRCCONF010_PDACT 1
#define LRCCONF010_CLKCTRL 0

/*PCGC Master*/
#define PCGCMASTER_PRESENT
#define PCGCMASTER_COUNT 2

#define PCGCM000_POWERCONSUMPTIONCALC 1
#define PCGCM000_SETPWRCONTHRESHOLDBASE 1
#define PCGCM000_CLOCKFORCEREG 1
#define PCGCM000_MASTERFORCEREG 1

#define PCGCM010_POWERCONSUMPTIONCALC 1
#define PCGCM010_SETPWRCONTHRESHOLDBASE 1
#define PCGCM010_CLOCKFORCEREG 1
#define PCGCM010_MASTERFORCEREG 1

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
#define MEMCONF_REPAIR 0
#define MEMCONF_POWER 1

/*Watchdog Timer*/
#define WDT_PRESENT
#define WDT_COUNT 2

/*The Built-in Leakage Sensor (BILS) module.*/
#define BILS_PRESENT
#define BILS_COUNT 1

/*ABB peripheral*/
#define ABB_PRESENT
#define ABB_COUNT 1

/*RESETINFO*/
#define RESETINFO_PRESENT
#define RESETINFO_COUNT 1

#define RESETINFO_HASRESETREAS 1

/*BELLBOARD APB registers*/
#define BELLBOARD_PRESENT
#define BELLBOARD_COUNT 1


#ifdef __cplusplus
}
#endif
#endif /* HALTIUM_APPLICATION_PERIPHERALS_H */

