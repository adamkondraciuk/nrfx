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

#ifndef HALTIUM_SECURE_PERIPHERALS_H
#define HALTIUM_SECURE_PERIPHERALS_H

#ifdef __cplusplus
    extern "C" {
#endif

/*Secure Information Configuration Registers*/
#define SICR_PRESENT
#define SICR_COUNT 1

/*ROM Information Configuration Registers*/
#define RICR_PRESENT
#define RICR_COUNT 1

/*CACHEDATA*/
#define CACHEDATA_PRESENT
#define CACHEDATA_COUNT 2

/*CACHEINFO*/
#define CACHEINFO_PRESENT
#define CACHEINFO_COUNT 2

/*CRACENCORE*/
#define CRACENCORE_PRESENT
#define CRACENCORE_COUNT 1

#define CRACENCORE_CRYPTMSTRDMAREGS 1
#define CRACENCORE_CRYPTMSTRHWREGS 1
#define CRACENCORE_RNGCONTROLREGS 1
#define CRACENCORE_PKREGS 1
#define CRACENCORE_IKGREGS 1
#define CRACENCORE_RNGDATAREGS 1
#define CRACENCORE_PKDATAMEMORYREGS 1
#define CRACENCORE_PKUCODEREGS 1
#define CRACENCORE_CRACENRESETVALUES 1
#define CRACENCORE_SHA3RESETVALUES 0

/*System protection unit*/
#define SPU_PRESENT
#define SPU_COUNT 16

#define SPU200_BELLS 0
#define SPU200_IPCT 0
#define SPU200_DPPI 0
#define SPU200_GPIOTE 0
#define SPU200_GRTC 0
#define SPU200_GPIO 0

#define SPU000_BELLS 0
#define SPU000_IPCT 0
#define SPU000_DPPI 0
#define SPU000_GPIOTE 0
#define SPU000_GRTC 0
#define SPU000_GPIO 0

#define SPU010_BELLS 0
#define SPU010_IPCT 1
#define SPU010_DPPI 0
#define SPU010_GPIOTE 0
#define SPU010_GRTC 0
#define SPU010_GPIO 0

#define SPU110_BELLS 0
#define SPU110_IPCT 0
#define SPU110_DPPI 0
#define SPU110_GPIOTE 0
#define SPU110_GRTC 0
#define SPU110_GPIO 0

#define SPU111_BELLS 1
#define SPU111_IPCT 0
#define SPU111_DPPI 0
#define SPU111_GPIOTE 0
#define SPU111_GRTC 0
#define SPU111_GPIO 0

#define SPU120_BELLS 1
#define SPU120_IPCT 0
#define SPU120_DPPI 0
#define SPU120_GPIOTE 0
#define SPU120_GRTC 0
#define SPU120_GPIO 0

#define SPU121_BELLS 0
#define SPU121_IPCT 1
#define SPU121_DPPI 0
#define SPU121_GPIOTE 0
#define SPU121_GRTC 0
#define SPU121_GPIO 0

#define SPU122_BELLS 0
#define SPU122_IPCT 0
#define SPU122_DPPI 1
#define SPU122_GPIOTE 0
#define SPU122_GRTC 0
#define SPU122_GPIO 0

#define SPU130_BELLS 0
#define SPU130_IPCT 0
#define SPU130_DPPI 0
#define SPU130_GPIOTE 0
#define SPU130_GRTC 0
#define SPU130_GPIO 0

#define SPU131_BELLS 0
#define SPU131_IPCT 1
#define SPU131_DPPI 1
#define SPU131_GPIOTE 1
#define SPU131_GRTC 0
#define SPU131_GPIO 1

#define SPU132_BELLS 0
#define SPU132_IPCT 0
#define SPU132_DPPI 1
#define SPU132_GPIOTE 0
#define SPU132_GRTC 0
#define SPU132_GPIO 0

#define SPU133_BELLS 0
#define SPU133_IPCT 0
#define SPU133_DPPI 1
#define SPU133_GPIOTE 0
#define SPU133_GRTC 1
#define SPU133_GPIO 0

#define SPU134_BELLS 0
#define SPU134_IPCT 0
#define SPU134_DPPI 1
#define SPU134_GPIOTE 0
#define SPU134_GRTC 0
#define SPU134_GPIO 0

#define SPU135_BELLS 0
#define SPU135_IPCT 0
#define SPU135_DPPI 1
#define SPU135_GPIOTE 0
#define SPU135_GRTC 0
#define SPU135_GPIO 0

#define SPU136_BELLS 0
#define SPU136_IPCT 0
#define SPU136_DPPI 1
#define SPU136_GPIOTE 0
#define SPU136_GRTC 0
#define SPU136_GPIO 0

#define SPU137_BELLS 0
#define SPU137_IPCT 0
#define SPU137_DPPI 1
#define SPU137_GPIOTE 0
#define SPU137_GRTC 0
#define SPU137_GPIO 0

/*Control access port*/
#define CTRLAPPERI_PRESENT
#define CTRLAPPERI_COUNT 1

/*LRCCONF*/
#define LRCCONF_PRESENT
#define LRCCONF_COUNT 3

#define LRCCONF200_POWERON 1
#define LRCCONF200_RETAIN 1
#define LRCCONF200_OTHERON 0
#define LRCCONF200_AX2XWAITSTATES 0
#define LRCCONF200_SYSTEMOFF 1
#define LRCCONF200_PDACT 0
#define LRCCONF200_CLKCTRL 1

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
#define PCGCMASTER_COUNT 5

#define PCGCM200_POWERCONSUMPTIONCALC 1
#define PCGCM200_SETPWRCONTHRESHOLDBASE 1
#define PCGCM200_CLOCKFORCEREG 1
#define PCGCM200_MASTERFORCEREG 1

#define PCGCM000_POWERCONSUMPTIONCALC 1
#define PCGCM000_SETPWRCONTHRESHOLDBASE 1
#define PCGCM000_CLOCKFORCEREG 1
#define PCGCM000_MASTERFORCEREG 1

#define PCGCM001_POWERCONSUMPTIONCALC 1
#define PCGCM001_SETPWRCONTHRESHOLDBASE 1
#define PCGCM001_CLOCKFORCEREG 1
#define PCGCM001_MASTERFORCEREG 1

#define PCGCM010_POWERCONSUMPTIONCALC 1
#define PCGCM010_SETPWRCONTHRESHOLDBASE 1
#define PCGCM010_CLOCKFORCEREG 1
#define PCGCM010_MASTERFORCEREG 1

#define PCGCM011_POWERCONSUMPTIONCALC 1
#define PCGCM011_SETPWRCONTHRESHOLDBASE 1
#define PCGCM011_CLOCKFORCEREG 1
#define PCGCM011_MASTERFORCEREG 1

/*Memory Privilege Controller*/
#define MPC_PRESENT
#define MPC_COUNT 6

/*Memory configuration*/
#define MEMCONF_PRESENT
#define MEMCONF_COUNT 2

#define MEMCONF200_RETTRIM 1
#define MEMCONF200_REPAIR 0
#define MEMCONF200_POWER 0

#define MEMCONF_RETTRIM 1
#define MEMCONF_REPAIR 0
#define MEMCONF_POWER 1

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

/*MVDMA performs direct-memory-accesses between memories. Data is transferred according to job descriptor lists. Each transfer has corresponding source and sink descriptor lists with matching data amounts. The lists are in memory and they contain data buffer information, address pointers, buffer sizes and data type attributes.*/
                                                                                                                                  
#define MVDMA_PRESENT
#define MVDMA_COUNT 1

/*RAM Controller*/
#define RAMC_PRESENT
#define RAMC_COUNT 2

#define RAMC000_ECC 0
#define RAMC000_SEC 1

#define RAMC001_ECC 0
#define RAMC001_SEC 1

/*ROM Controller*/
#define ROMC_PRESENT
#define ROMC_COUNT 1

/*CRACEN*/
#define CRACEN_PRESENT
#define CRACEN_COUNT 1

#define CRACEN_CRYPTOACCELERATOR 1

/*PCGCSlave*/
#define PCGCSLAVE_PRESENT
#define PCGCSLAVE_COUNT 2

#define PCGCS000_PENALTYTASKS 1

#define PCGCS010_PENALTYTASKS 1

/*HSFLL*/
#define HSFLL_PRESENT
#define HSFLL_COUNT 1

/*CPU Configuration*/
#define CPUCONF_PRESENT
#define CPUCONF_COUNT 1

#define CPUCONF_HASTASKERASECACHE 1
#define CPUCONF_HASINITSVTOR 1
#define CPUCONF_HASINITNSVTOR 1
#define CPUCONF_HASCPUSTART 1
#define CPUCONF_HASCPUWAIT 1

/*Watchdog Timer*/
#define WDT_PRESENT
#define WDT_COUNT 2

/*Tamper controller*/
#define TAMPC_PRESENT
#define TAMPC_COUNT 1

/*The Built-in Leakage Sensor (BILS) module.*/
#define BILS_PRESENT
#define BILS_COUNT 1

/*ABB peripheral*/
#define ABB_PRESENT
#define ABB_COUNT 1

/*RESETINFO*/
#define RESETINFO_PRESENT
#define RESETINFO_COUNT 1

#define RESETINFO_HASRESETREAS 0

/*BELLBOARD APB registers*/
#define BELLBOARD_PRESENT
#define BELLBOARD_COUNT 1

/*IPCMAP APB registers*/
#define IPCMAP_PRESENT
#define IPCMAP_COUNT 1

/*IRQMAP APB registers*/
#define IRQMAP_PRESENT
#define IRQMAP_COUNT 1


#ifdef __cplusplus
}
#endif
#endif /* HALTIUM_SECURE_PERIPHERALS_H */

