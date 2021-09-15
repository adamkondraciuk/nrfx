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

#ifndef HALTIUM_CELLCORE_PERIPHERALS_H
#define HALTIUM_CELLCORE_PERIPHERALS_H

#ifdef __cplusplus
    extern "C" {
#endif

/*User information configuration registers*/
#define UICR_PRESENT
#define UICR_COUNT 1

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
#define SPU_COUNT 4

#define SPU0_BELLS 0
#define SPU0_IPCT 0
#define SPU0_DPPI 0
#define SPU0_GPIOTE 0
#define SPU0_GRTC 1
#define SPU0_GPIO 0

#define SPU1_BELLS 0
#define SPU1_IPCT 0
#define SPU1_DPPI 0
#define SPU1_GPIOTE 0
#define SPU1_GRTC 1
#define SPU1_GPIO 0

#define SPU2_BELLS 0
#define SPU2_IPCT 1
#define SPU2_DPPI 1
#define SPU2_GPIOTE 0
#define SPU2_GRTC 1
#define SPU2_GPIO 0

#define SPU3_BELLS 0
#define SPU3_IPCT 0
#define SPU3_DPPI 1
#define SPU3_GPIOTE 0
#define SPU3_GRTC 1
#define SPU3_GPIO 0

/*HSFLL*/
#define HSFLL_PRESENT
#define HSFLL_COUNT 1

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

#define LRCCONF3_POWERON 0
#define LRCCONF3_RETAIN 0
#define LRCCONF3_OTHERON 0
#define LRCCONF3_AX2XWAITSTATES 0
#define LRCCONF3_SYSTEMOFF 0
#define LRCCONF3_PDACT 1
#define LRCCONF3_CLKCTRL 1

/*Memory Privilege Controller*/
#define MPC_PRESENT
#define MPC_COUNT 1

/*AXI AXI Core*/
#define AXI_PRESENT
#define AXI_COUNT 1

/*MVDMA performs direct-memory-accesses between memories. Data is transferred according to job descriptor lists. Each transfer has corresponding source and sink descriptor lists with matching data amounts. The lists are in memory and they contain data buffer information, address pointers, buffer sizes and data type attributes.*/
                                                                                                                                  
#define MVDMA_PRESENT
#define MVDMA_COUNT 1

/*RAM Controller*/
#define RAMC_PRESENT
#define RAMC_COUNT 1

#define RAMC00_ECC 0
#define RAMC00_SEC 1

/*AES-128 HW accelerator for LTE L2 security and MAC*/
#define AESLTE_PRESENT
#define AESLTE_COUNT 1

/*Snow 3G Security IP*/
#define SNOW_PRESENT
#define SNOW_COUNT 1

/*ZUC LTE L2 security IP*/
#define ZUC_PRESENT
#define ZUC_COUNT 1

/*Trace delay register*/
#define TRACEDELAYREG_PRESENT
#define TRACEDELAYREG_COUNT 1

/*PCGCSlave*/
#define PCGCSLAVE_PRESENT
#define PCGCSLAVE_COUNT 3

#define PCGCS0_PENALTYTASKS 1

#define PCGCS1_PENALTYTASKS 1

#define PCGCS3_PENALTYTASKS 1

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

#define PCGCM3_POWERCONSUMPTIONCALC 1
#define PCGCM3_SETPWRCONTHRESHOLDBASE 1
#define PCGCM3_CLOCKFORCEREG 1
#define PCGCM3_MASTERFORCEREG 1

/*RESETINFO*/
#define RESETINFO_PRESENT
#define RESETINFO_COUNT 1

#define RESETINFO_HASRESETREAS 1

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

/*Watchdog Timer*/
#define WDT_PRESENT
#define WDT_COUNT 2

/*Distributed programmable peripheral interconnect controller*/
#define DPPIC0_HASCHANNELGROUPS 1

#define DPPIC1_HASCHANNELGROUPS 1

/*LFCLK calibration measurement*/
#define LFCLKCALIBMEAS_PRESENT
#define LFCLKCALIBMEAS_COUNT 1

/*Timer event synchronizer*/
#define TIMEREVENTSYNCH_PRESENT
#define TIMEREVENTSYNCH_COUNT 1

/*Timemark multiplexer for LTE System Timer*/
#define TIMEMARKMUX_PRESENT
#define TIMEMARKMUX_COUNT 2

/*Modem Clock PLL*/
#define MCPLL_PRESENT
#define MCPLL_COUNT 1

/*Modem Timer/Counter*/
#define MODEMTIMER_PRESENT
#define MODEMTIMER_COUNT 3

/*BELLBOARD APB registers*/
#define BELLBOARD_PRESENT
#define BELLBOARD_COUNT 1


#ifdef __cplusplus
}
#endif
#endif /* HALTIUM_CELLCORE_PERIPHERALS_H */

