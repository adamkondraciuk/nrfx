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

#ifndef NRF9230_SECURE_PERIPHERALS_H
#define NRF9230_SECURE_PERIPHERALS_H

#ifdef __cplusplus
    extern "C" {
#endif

#include <stdbool.h>
/*CACHEDATA*/
#define ICACHEDATA_PRESENT 1
#define ICACHEDATA_COUNT 1

#define ICACHEDATA_NUMSETS 256                       /*!< Number of sets : 256                                                 */
#define ICACHEDATA_NUMWAYS 2                         /*!< Number of ways : 2                                                   */
#define ICACHEDATA_NUMDATAUNIT 4                     /*!< Number of data units : 4                                             */
#define ICACHEDATA_DATAWIDTH 2                       /*!< Data width of a data unit : 2 word(s)                                */

/*CACHEINFO*/
#define ICACHEINFO_PRESENT 1
#define ICACHEINFO_COUNT 1

#define ICACHEINFO_NUMSETS 256                       /*!< Number of sets : 256                                                 */
#define ICACHEINFO_NUMWAYS 2                         /*!< Number of ways : 2                                                   */
#define ICACHEINFO_NUMDATAUNIT 4                     /*!< Number of data units : 4                                             */
#define ICACHEINFO_DATAWIDTH 2                       /*!< Data width of a data unit : 2 word(s)                                */
#define ICACHEINFO_TAGWIDTH 19                       /*!< TAG width : 19                                                       */
#define ICACHEINFO_DU_EXTENSION 0                    /*!< (unspecified)                                                        */

/*Secure Information Configuration Registers*/
#define SICR_PRESENT 1
#define SICR_COUNT 1

/*ROM Information Configuration Registers*/
#define RICR_PRESENT 1
#define RICR_COUNT 1

/*CACHEDATA*/
#define DCACHEDATA_PRESENT 1
#define DCACHEDATA_COUNT 1

#define DCACHEDATA_NUMSETS 256                       /*!< Number of sets : 256                                                 */
#define DCACHEDATA_NUMWAYS 2                         /*!< Number of ways : 2                                                   */
#define DCACHEDATA_NUMDATAUNIT 8                     /*!< Number of data units : 8                                             */
#define DCACHEDATA_DATAWIDTH 1                       /*!< Data width of a data unit : 1 word(s)                                */

/*CACHEINFO*/
#define DCACHEINFO_PRESENT 1
#define DCACHEINFO_COUNT 1

#define DCACHEINFO_NUMSETS 256                       /*!< Number of sets : 256                                                 */
#define DCACHEINFO_NUMWAYS 2                         /*!< Number of ways : 2                                                   */
#define DCACHEINFO_NUMDATAUNIT 8                     /*!< Number of data units : 8                                             */
#define DCACHEINFO_DATAWIDTH 1                       /*!< Data width of a data unit : 1 word(s)                                */
#define DCACHEINFO_TAGWIDTH 19                       /*!< TAG width : 19                                                       */
#define DCACHEINFO_DU_EXTENSION 1                    /*!< (unspecified)                                                        */

/*CRACENCORE*/
#define CRACENCORE_PRESENT 1
#define CRACENCORE_COUNT 1

#define CRACENCORE_CRYPTMSTRDMAREGS 1                /*!< (unspecified)                                                        */
#define CRACENCORE_CRYPTMSTRHWREGS 1                 /*!< (unspecified)                                                        */
#define CRACENCORE_RNGCONTROLREGS 1                  /*!< (unspecified)                                                        */
#define CRACENCORE_PKREGS 1                          /*!< (unspecified)                                                        */
#define CRACENCORE_IKGREGS 1                         /*!< (unspecified)                                                        */
#define CRACENCORE_RNGDATAREGS 1                     /*!< (unspecified)                                                        */
#define CRACENCORE_PKDATAMEMORYREGS 1                /*!< (unspecified)                                                        */
#define CRACENCORE_PKUCODEREGS 1                     /*!< (unspecified)                                                        */
#define CRACENCORE_CRACENRESETVALUES 1               /*!< (unspecified)                                                        */
#define CRACENCORE_SHA3RESETVALUES 0                 /*!< (unspecified)                                                        */
#define CRACENCORE_PKE_DATA_MEMORY 0x51808000        /*!< (unspecified)                                                        */
#define CRACENCORE_PKE_DATA_MEMORY_SIZE 17408        /*!< (unspecified)                                                        */
#define CRACENCORE_PKE_CODE_MEMORY 0x5180C000        /*!< (unspecified)                                                        */
#define CRACENCORE_PKE_CODE_MEMORY_SIZE 5120         /*!< (unspecified)                                                        */

/*Memory configuration*/
#define MEMCONF_PRESENT 1
#define MEMCONF_COUNT 2

#define MEMCONF200_RETTRIM 1                         /*!< (unspecified)                                                        */
#define MEMCONF200_REPAIR 0                          /*!< (unspecified)                                                        */
#define MEMCONF200_REPAIR_INTERNAL_DOC 0             /*!< (unspecified)                                                        */
#define MEMCONF200_POWER 0                           /*!< (unspecified)                                                        */
#define MEMCONF200_RET2 1                            /*!< (unspecified)                                                        */
#define MEMCONF200_RETAIN_PUBLIC_DOC 1               /*!< (unspecified)                                                        */
#define MEMCONF200_RETAIN_INTERNAL_DOC 0             /*!< (unspecified)                                                        */
#define MEMCONF200_TRIM_INTERNAL_DOC 0               /*!< (unspecified)                                                        */

#define MEMCONF_RETTRIM 1                            /*!< (unspecified)                                                        */
#define MEMCONF_REPAIR 0                             /*!< (unspecified)                                                        */
#define MEMCONF_REPAIR_INTERNAL_DOC 0                /*!< (unspecified)                                                        */
#define MEMCONF_POWER 1                              /*!< (unspecified)                                                        */
#define MEMCONF_RET2 1                               /*!< (unspecified)                                                        */
#define MEMCONF_RETAIN_PUBLIC_DOC 1                  /*!< (unspecified)                                                        */
#define MEMCONF_RETAIN_INTERNAL_DOC 0                /*!< (unspecified)                                                        */
#define MEMCONF_TRIM_INTERNAL_DOC 0                  /*!< (unspecified)                                                        */

/*Embedded Trace Macrocell*/
#define ETM_PRESENT 1
#define ETM_COUNT 1

/*Cross-Trigger Interface control*/
#define CTI_PRESENT 1
#define CTI_COUNT 3

/*CM33 SubSystem*/
#define CM33SS_PRESENT 1
#define CM33SS_COUNT 1

#define CPUC_FPUAVAILABLE 0                          /*!< (unspecified)                                                        */

/*Cache*/
#define CACHE_PRESENT 1
#define CACHE_COUNT 2

#define ICACHE_VIRTUALCACHE 0                        /*!< (unspecified)                                                        */
#define ICACHE_FLUSH 0                               /*!< (unspecified)                                                        */
#define ICACHE_CLEAN 0                               /*!< (unspecified)                                                        */
#define ICACHE_NONCACHEABLEMISS 1                    /*!< (unspecified)                                                        */
#define ICACHE_BUSWIDTH_MIN 0                        /*!< Data bus width : 0..63                                               */
#define ICACHE_BUSWIDTH_MAX 63                       /*!< Data bus width : 0..63                                               */
#define ICACHE_BUSWIDTH_SIZE 64                      /*!< Data bus width : 0..63                                               */
#define ICACHE_SECUREINVALIDATE 1                    /*!< (unspecified)                                                        */

#define DCACHE_VIRTUALCACHE 0                        /*!< (unspecified)                                                        */
#define DCACHE_FLUSH 1                               /*!< (unspecified)                                                        */
#define DCACHE_CLEAN 1                               /*!< (unspecified)                                                        */
#define DCACHE_NONCACHEABLEMISS 1                    /*!< (unspecified)                                                        */
#define DCACHE_BUSWIDTH_MIN 0                        /*!< Data bus width : 0..63                                               */
#define DCACHE_BUSWIDTH_MAX 63                       /*!< Data bus width : 0..63                                               */
#define DCACHE_BUSWIDTH_SIZE 64                      /*!< Data bus width : 0..63                                               */
#define DCACHE_SECUREINVALIDATE 1                    /*!< (unspecified)                                                        */

/*System protection unit*/
#define SPU_PRESENT 1
#define SPU_COUNT 17

#define SPU000_FLATFEATURES 1                        /*!< (unspecified)                                                        */
#define SPU000_NESTEDFEATURES 1                      /*!< (unspecified)                                                        */
#define SPU000_GRTCSECONDARYOFFSET 0                 /*!< (unspecified)                                                        */
#define SPU000_BELLS 0                               /*!< (unspecified)                                                        */
#define SPU000_IPCT 0                                /*!< (unspecified)                                                        */
#define SPU000_DPPI 0                                /*!< (unspecified)                                                        */
#define SPU000_GPIOTE 0                              /*!< (unspecified)                                                        */
#define SPU000_GRTC 0                                /*!< (unspecified)                                                        */
#define SPU000_GPIO 0                                /*!< (unspecified)                                                        */
#define SPU000_CRACEN 0                              /*!< (unspecified)                                                        */
#define SPU000_MRAMC 0                               /*!< (unspecified)                                                        */
#define SPU000_COEXC 0                               /*!< (unspecified)                                                        */
#define SPU000_ANTSWC 0                              /*!< (unspecified)                                                        */
#define SPU000_TDD 0                                 /*!< (unspecified)                                                        */
#define SPU000_SLAVE_BITS 4                          /*!< SLAVE_BITS=4 (number of address bits required to represent the
                                                          peripheral slave index)*/
#define SPU000_SPU_NUM_CLOCK_POWER_PAIR_MIN 0        /*!< Number of clock/power pairs used by PCGC Slave - [0..0]              */
#define SPU000_SPU_NUM_CLOCK_POWER_PAIR_MAX 0        /*!< Number of clock/power pairs used by PCGC Slave - [0..0]              */
#define SPU000_SPU_NUM_CLOCK_POWER_PAIR_SIZE 1       /*!< Number of clock/power pairs used by PCGC Slave - [0..0]              */
#define SPU000_SPU_NOTFULLPCPZERO 0                  /*!< (unspecified)                                                        */
#define SPU000_PENALTYTASKS 0                        /*!< (unspecified)                                                        */

#define SPU010_FLATFEATURES 1                        /*!< (unspecified)                                                        */
#define SPU010_NESTEDFEATURES 1                      /*!< (unspecified)                                                        */
#define SPU010_GRTCSECONDARYOFFSET 0                 /*!< (unspecified)                                                        */
#define SPU010_BELLS 0                               /*!< (unspecified)                                                        */
#define SPU010_IPCT 1                                /*!< (unspecified)                                                        */
#define SPU010_DPPI 0                                /*!< (unspecified)                                                        */
#define SPU010_GPIOTE 0                              /*!< (unspecified)                                                        */
#define SPU010_GRTC 0                                /*!< (unspecified)                                                        */
#define SPU010_GPIO 0                                /*!< (unspecified)                                                        */
#define SPU010_CRACEN 0                              /*!< (unspecified)                                                        */
#define SPU010_MRAMC 0                               /*!< (unspecified)                                                        */
#define SPU010_COEXC 0                               /*!< (unspecified)                                                        */
#define SPU010_ANTSWC 0                              /*!< (unspecified)                                                        */
#define SPU010_TDD 0                                 /*!< (unspecified)                                                        */
#define SPU010_SLAVE_BITS 4                          /*!< SLAVE_BITS=4 (number of address bits required to represent the
                                                          peripheral slave index)*/
#define SPU010_SPU_NUM_CLOCK_POWER_PAIR_MIN 0        /*!< Number of clock/power pairs used by PCGC Slave - [0..0]              */
#define SPU010_SPU_NUM_CLOCK_POWER_PAIR_MAX 0        /*!< Number of clock/power pairs used by PCGC Slave - [0..0]              */
#define SPU010_SPU_NUM_CLOCK_POWER_PAIR_SIZE 1       /*!< Number of clock/power pairs used by PCGC Slave - [0..0]              */
#define SPU010_SPU_NOTFULLPCPZERO 0                  /*!< (unspecified)                                                        */
#define SPU010_PENALTYTASKS 0                        /*!< (unspecified)                                                        */

#define SPU200_FLATFEATURES 1                        /*!< (unspecified)                                                        */
#define SPU200_NESTEDFEATURES 1                      /*!< (unspecified)                                                        */
#define SPU200_GRTCSECONDARYOFFSET 0                 /*!< (unspecified)                                                        */
#define SPU200_BELLS 0                               /*!< (unspecified)                                                        */
#define SPU200_IPCT 0                                /*!< (unspecified)                                                        */
#define SPU200_DPPI 0                                /*!< (unspecified)                                                        */
#define SPU200_GPIOTE 0                              /*!< (unspecified)                                                        */
#define SPU200_GRTC 0                                /*!< (unspecified)                                                        */
#define SPU200_GPIO 0                                /*!< (unspecified)                                                        */
#define SPU200_CRACEN 0                              /*!< (unspecified)                                                        */
#define SPU200_MRAMC 0                               /*!< (unspecified)                                                        */
#define SPU200_COEXC 0                               /*!< (unspecified)                                                        */
#define SPU200_ANTSWC 0                              /*!< (unspecified)                                                        */
#define SPU200_TDD 1                                 /*!< (unspecified)                                                        */
#define SPU200_SLAVE_BITS 4                          /*!< SLAVE_BITS=4 (number of address bits required to represent the
                                                          peripheral slave index)*/
#define SPU200_SPU_NUM_CLOCK_POWER_PAIR_MIN 0        /*!< Number of clock/power pairs used by PCGC Slave - [0..0]              */
#define SPU200_SPU_NUM_CLOCK_POWER_PAIR_MAX 0        /*!< Number of clock/power pairs used by PCGC Slave - [0..0]              */
#define SPU200_SPU_NUM_CLOCK_POWER_PAIR_SIZE 1       /*!< Number of clock/power pairs used by PCGC Slave - [0..0]              */
#define SPU200_SPU_NOTFULLPCPZERO 0                  /*!< (unspecified)                                                        */
#define SPU200_PENALTYTASKS 0                        /*!< (unspecified)                                                        */

#define SPU210_FLATFEATURES 1                        /*!< (unspecified)                                                        */
#define SPU210_NESTEDFEATURES 1                      /*!< (unspecified)                                                        */
#define SPU210_GRTCSECONDARYOFFSET 0                 /*!< (unspecified)                                                        */
#define SPU210_BELLS 0                               /*!< (unspecified)                                                        */
#define SPU210_IPCT 0                                /*!< (unspecified)                                                        */
#define SPU210_DPPI 0                                /*!< (unspecified)                                                        */
#define SPU210_GPIOTE 0                              /*!< (unspecified)                                                        */
#define SPU210_GRTC 0                                /*!< (unspecified)                                                        */
#define SPU210_GPIO 0                                /*!< (unspecified)                                                        */
#define SPU210_CRACEN 0                              /*!< (unspecified)                                                        */
#define SPU210_MRAMC 0                               /*!< (unspecified)                                                        */
#define SPU210_COEXC 0                               /*!< (unspecified)                                                        */
#define SPU210_ANTSWC 0                              /*!< (unspecified)                                                        */
#define SPU210_TDD 0                                 /*!< (unspecified)                                                        */
#define SPU210_SLAVE_BITS 4                          /*!< SLAVE_BITS=4 (number of address bits required to represent the
                                                          peripheral slave index)*/
#define SPU210_SPU_NUM_CLOCK_POWER_PAIR_MIN 0        /*!< Number of clock/power pairs used by PCGC Slave - [0..0]              */
#define SPU210_SPU_NUM_CLOCK_POWER_PAIR_MAX 0        /*!< Number of clock/power pairs used by PCGC Slave - [0..0]              */
#define SPU210_SPU_NUM_CLOCK_POWER_PAIR_SIZE 1       /*!< Number of clock/power pairs used by PCGC Slave - [0..0]              */
#define SPU210_SPU_NOTFULLPCPZERO 0                  /*!< (unspecified)                                                        */
#define SPU210_PENALTYTASKS 0                        /*!< (unspecified)                                                        */

#define SPU110_FLATFEATURES 1                        /*!< (unspecified)                                                        */
#define SPU110_NESTEDFEATURES 1                      /*!< (unspecified)                                                        */
#define SPU110_GRTCSECONDARYOFFSET 0                 /*!< (unspecified)                                                        */
#define SPU110_BELLS 0                               /*!< (unspecified)                                                        */
#define SPU110_IPCT 0                                /*!< (unspecified)                                                        */
#define SPU110_DPPI 0                                /*!< (unspecified)                                                        */
#define SPU110_GPIOTE 0                              /*!< (unspecified)                                                        */
#define SPU110_GRTC 0                                /*!< (unspecified)                                                        */
#define SPU110_GPIO 0                                /*!< (unspecified)                                                        */
#define SPU110_CRACEN 0                              /*!< (unspecified)                                                        */
#define SPU110_MRAMC 0                               /*!< (unspecified)                                                        */
#define SPU110_COEXC 0                               /*!< (unspecified)                                                        */
#define SPU110_ANTSWC 0                              /*!< (unspecified)                                                        */
#define SPU110_TDD 0                                 /*!< (unspecified)                                                        */
#define SPU110_SLAVE_BITS 4                          /*!< SLAVE_BITS=4 (number of address bits required to represent the
                                                          peripheral slave index)*/
#define SPU110_SPU_NUM_CLOCK_POWER_PAIR_MIN 0        /*!< Number of clock/power pairs used by PCGC Slave - [0..0]              */
#define SPU110_SPU_NUM_CLOCK_POWER_PAIR_MAX 0        /*!< Number of clock/power pairs used by PCGC Slave - [0..0]              */
#define SPU110_SPU_NUM_CLOCK_POWER_PAIR_SIZE 1       /*!< Number of clock/power pairs used by PCGC Slave - [0..0]              */
#define SPU110_SPU_NOTFULLPCPZERO 0                  /*!< (unspecified)                                                        */
#define SPU110_PENALTYTASKS 0                        /*!< (unspecified)                                                        */

#define SPU111_FLATFEATURES 1                        /*!< (unspecified)                                                        */
#define SPU111_NESTEDFEATURES 1                      /*!< (unspecified)                                                        */
#define SPU111_GRTCSECONDARYOFFSET 0                 /*!< (unspecified)                                                        */
#define SPU111_BELLS 1                               /*!< (unspecified)                                                        */
#define SPU111_IPCT 0                                /*!< (unspecified)                                                        */
#define SPU111_DPPI 0                                /*!< (unspecified)                                                        */
#define SPU111_GPIOTE 0                              /*!< (unspecified)                                                        */
#define SPU111_GRTC 0                                /*!< (unspecified)                                                        */
#define SPU111_GPIO 0                                /*!< (unspecified)                                                        */
#define SPU111_CRACEN 0                              /*!< (unspecified)                                                        */
#define SPU111_MRAMC 1                               /*!< (unspecified)                                                        */
#define SPU111_COEXC 0                               /*!< (unspecified)                                                        */
#define SPU111_ANTSWC 0                              /*!< (unspecified)                                                        */
#define SPU111_TDD 0                                 /*!< (unspecified)                                                        */
#define SPU111_SLAVE_BITS 4                          /*!< SLAVE_BITS=4 (number of address bits required to represent the
                                                          peripheral slave index)*/
#define SPU111_SPU_NUM_CLOCK_POWER_PAIR_MIN 0        /*!< Number of clock/power pairs used by PCGC Slave - [0..0]              */
#define SPU111_SPU_NUM_CLOCK_POWER_PAIR_MAX 0        /*!< Number of clock/power pairs used by PCGC Slave - [0..0]              */
#define SPU111_SPU_NUM_CLOCK_POWER_PAIR_SIZE 1       /*!< Number of clock/power pairs used by PCGC Slave - [0..0]              */
#define SPU111_SPU_NOTFULLPCPZERO 0                  /*!< (unspecified)                                                        */
#define SPU111_PENALTYTASKS 0                        /*!< (unspecified)                                                        */

#define SPU120_FLATFEATURES 1                        /*!< (unspecified)                                                        */
#define SPU120_NESTEDFEATURES 1                      /*!< (unspecified)                                                        */
#define SPU120_GRTCSECONDARYOFFSET 0                 /*!< (unspecified)                                                        */
#define SPU120_BELLS 1                               /*!< (unspecified)                                                        */
#define SPU120_IPCT 0                                /*!< (unspecified)                                                        */
#define SPU120_DPPI 0                                /*!< (unspecified)                                                        */
#define SPU120_GPIOTE 0                              /*!< (unspecified)                                                        */
#define SPU120_GRTC 0                                /*!< (unspecified)                                                        */
#define SPU120_GPIO 0                                /*!< (unspecified)                                                        */
#define SPU120_CRACEN 0                              /*!< (unspecified)                                                        */
#define SPU120_MRAMC 0                               /*!< (unspecified)                                                        */
#define SPU120_COEXC 0                               /*!< (unspecified)                                                        */
#define SPU120_ANTSWC 0                              /*!< (unspecified)                                                        */
#define SPU120_TDD 0                                 /*!< (unspecified)                                                        */
#define SPU120_SLAVE_BITS 4                          /*!< SLAVE_BITS=4 (number of address bits required to represent the
                                                          peripheral slave index)*/
#define SPU120_SPU_NUM_CLOCK_POWER_PAIR_MIN 0        /*!< Number of clock/power pairs used by PCGC Slave - [0..0]              */
#define SPU120_SPU_NUM_CLOCK_POWER_PAIR_MAX 0        /*!< Number of clock/power pairs used by PCGC Slave - [0..0]              */
#define SPU120_SPU_NUM_CLOCK_POWER_PAIR_SIZE 1       /*!< Number of clock/power pairs used by PCGC Slave - [0..0]              */
#define SPU120_SPU_NOTFULLPCPZERO 0                  /*!< (unspecified)                                                        */
#define SPU120_PENALTYTASKS 0                        /*!< (unspecified)                                                        */

#define SPU121_FLATFEATURES 1                        /*!< (unspecified)                                                        */
#define SPU121_NESTEDFEATURES 1                      /*!< (unspecified)                                                        */
#define SPU121_GRTCSECONDARYOFFSET 0                 /*!< (unspecified)                                                        */
#define SPU121_BELLS 0                               /*!< (unspecified)                                                        */
#define SPU121_IPCT 1                                /*!< (unspecified)                                                        */
#define SPU121_DPPI 0                                /*!< (unspecified)                                                        */
#define SPU121_GPIOTE 0                              /*!< (unspecified)                                                        */
#define SPU121_GRTC 0                                /*!< (unspecified)                                                        */
#define SPU121_GPIO 0                                /*!< (unspecified)                                                        */
#define SPU121_CRACEN 0                              /*!< (unspecified)                                                        */
#define SPU121_MRAMC 0                               /*!< (unspecified)                                                        */
#define SPU121_COEXC 0                               /*!< (unspecified)                                                        */
#define SPU121_ANTSWC 0                              /*!< (unspecified)                                                        */
#define SPU121_TDD 0                                 /*!< (unspecified)                                                        */
#define SPU121_SLAVE_BITS 4                          /*!< SLAVE_BITS=4 (number of address bits required to represent the
                                                          peripheral slave index)*/
#define SPU121_SPU_NUM_CLOCK_POWER_PAIR_MIN 0        /*!< Number of clock/power pairs used by PCGC Slave - [0..0]              */
#define SPU121_SPU_NUM_CLOCK_POWER_PAIR_MAX 0        /*!< Number of clock/power pairs used by PCGC Slave - [0..0]              */
#define SPU121_SPU_NUM_CLOCK_POWER_PAIR_SIZE 1       /*!< Number of clock/power pairs used by PCGC Slave - [0..0]              */
#define SPU121_SPU_NOTFULLPCPZERO 0                  /*!< (unspecified)                                                        */
#define SPU121_PENALTYTASKS 0                        /*!< (unspecified)                                                        */

#define SPU122_FLATFEATURES 1                        /*!< (unspecified)                                                        */
#define SPU122_NESTEDFEATURES 1                      /*!< (unspecified)                                                        */
#define SPU122_GRTCSECONDARYOFFSET 0                 /*!< (unspecified)                                                        */
#define SPU122_BELLS 0                               /*!< (unspecified)                                                        */
#define SPU122_IPCT 0                                /*!< (unspecified)                                                        */
#define SPU122_DPPI 1                                /*!< (unspecified)                                                        */
#define SPU122_GPIOTE 0                              /*!< (unspecified)                                                        */
#define SPU122_GRTC 0                                /*!< (unspecified)                                                        */
#define SPU122_GPIO 0                                /*!< (unspecified)                                                        */
#define SPU122_CRACEN 0                              /*!< (unspecified)                                                        */
#define SPU122_MRAMC 0                               /*!< (unspecified)                                                        */
#define SPU122_COEXC 0                               /*!< (unspecified)                                                        */
#define SPU122_ANTSWC 0                              /*!< (unspecified)                                                        */
#define SPU122_TDD 0                                 /*!< (unspecified)                                                        */
#define SPU122_SLAVE_BITS 4                          /*!< SLAVE_BITS=4 (number of address bits required to represent the
                                                          peripheral slave index)*/
#define SPU122_SPU_NUM_CLOCK_POWER_PAIR_MIN 0        /*!< Number of clock/power pairs used by PCGC Slave - [0..0]              */
#define SPU122_SPU_NUM_CLOCK_POWER_PAIR_MAX 0        /*!< Number of clock/power pairs used by PCGC Slave - [0..0]              */
#define SPU122_SPU_NUM_CLOCK_POWER_PAIR_SIZE 1       /*!< Number of clock/power pairs used by PCGC Slave - [0..0]              */
#define SPU122_SPU_NOTFULLPCPZERO 0                  /*!< (unspecified)                                                        */
#define SPU122_PENALTYTASKS 0                        /*!< (unspecified)                                                        */

#define SPU130_FLATFEATURES 1                        /*!< (unspecified)                                                        */
#define SPU130_NESTEDFEATURES 1                      /*!< (unspecified)                                                        */
#define SPU130_GRTCSECONDARYOFFSET 0                 /*!< (unspecified)                                                        */
#define SPU130_BELLS 0                               /*!< (unspecified)                                                        */
#define SPU130_IPCT 0                                /*!< (unspecified)                                                        */
#define SPU130_DPPI 0                                /*!< (unspecified)                                                        */
#define SPU130_GPIOTE 0                              /*!< (unspecified)                                                        */
#define SPU130_GRTC 0                                /*!< (unspecified)                                                        */
#define SPU130_GPIO 0                                /*!< (unspecified)                                                        */
#define SPU130_CRACEN 0                              /*!< (unspecified)                                                        */
#define SPU130_MRAMC 0                               /*!< (unspecified)                                                        */
#define SPU130_COEXC 0                               /*!< (unspecified)                                                        */
#define SPU130_ANTSWC 0                              /*!< (unspecified)                                                        */
#define SPU130_TDD 0                                 /*!< (unspecified)                                                        */
#define SPU130_SLAVE_BITS 4                          /*!< SLAVE_BITS=4 (number of address bits required to represent the
                                                          peripheral slave index)*/
#define SPU130_SPU_NUM_CLOCK_POWER_PAIR_MIN 0        /*!< Number of clock/power pairs used by PCGC Slave - [0..0]              */
#define SPU130_SPU_NUM_CLOCK_POWER_PAIR_MAX 0        /*!< Number of clock/power pairs used by PCGC Slave - [0..0]              */
#define SPU130_SPU_NUM_CLOCK_POWER_PAIR_SIZE 1       /*!< Number of clock/power pairs used by PCGC Slave - [0..0]              */
#define SPU130_SPU_NOTFULLPCPZERO 0                  /*!< (unspecified)                                                        */
#define SPU130_PENALTYTASKS 0                        /*!< (unspecified)                                                        */

#define SPU131_FLATFEATURES 1                        /*!< (unspecified)                                                        */
#define SPU131_NESTEDFEATURES 1                      /*!< (unspecified)                                                        */
#define SPU131_GRTCSECONDARYOFFSET 0                 /*!< (unspecified)                                                        */
#define SPU131_BELLS 0                               /*!< (unspecified)                                                        */
#define SPU131_IPCT 1                                /*!< (unspecified)                                                        */
#define SPU131_DPPI 1                                /*!< (unspecified)                                                        */
#define SPU131_GPIOTE 1                              /*!< (unspecified)                                                        */
#define SPU131_GRTC 0                                /*!< (unspecified)                                                        */
#define SPU131_GPIO 1                                /*!< (unspecified)                                                        */
#define SPU131_CRACEN 0                              /*!< (unspecified)                                                        */
#define SPU131_MRAMC 0                               /*!< (unspecified)                                                        */
#define SPU131_COEXC 0                               /*!< (unspecified)                                                        */
#define SPU131_ANTSWC 0                              /*!< (unspecified)                                                        */
#define SPU131_TDD 0                                 /*!< (unspecified)                                                        */
#define SPU131_SLAVE_BITS 4                          /*!< SLAVE_BITS=4 (number of address bits required to represent the
                                                          peripheral slave index)*/
#define SPU131_SPU_NUM_CLOCK_POWER_PAIR_MIN 0        /*!< Number of clock/power pairs used by PCGC Slave - [0..0]              */
#define SPU131_SPU_NUM_CLOCK_POWER_PAIR_MAX 0        /*!< Number of clock/power pairs used by PCGC Slave - [0..0]              */
#define SPU131_SPU_NUM_CLOCK_POWER_PAIR_SIZE 1       /*!< Number of clock/power pairs used by PCGC Slave - [0..0]              */
#define SPU131_SPU_NOTFULLPCPZERO 0                  /*!< (unspecified)                                                        */
#define SPU131_PENALTYTASKS 0                        /*!< (unspecified)                                                        */

#define SPU132_FLATFEATURES 1                        /*!< (unspecified)                                                        */
#define SPU132_NESTEDFEATURES 1                      /*!< (unspecified)                                                        */
#define SPU132_GRTCSECONDARYOFFSET 0                 /*!< (unspecified)                                                        */
#define SPU132_BELLS 0                               /*!< (unspecified)                                                        */
#define SPU132_IPCT 0                                /*!< (unspecified)                                                        */
#define SPU132_DPPI 1                                /*!< (unspecified)                                                        */
#define SPU132_GPIOTE 0                              /*!< (unspecified)                                                        */
#define SPU132_GRTC 0                                /*!< (unspecified)                                                        */
#define SPU132_GPIO 0                                /*!< (unspecified)                                                        */
#define SPU132_CRACEN 0                              /*!< (unspecified)                                                        */
#define SPU132_MRAMC 0                               /*!< (unspecified)                                                        */
#define SPU132_COEXC 0                               /*!< (unspecified)                                                        */
#define SPU132_ANTSWC 0                              /*!< (unspecified)                                                        */
#define SPU132_TDD 0                                 /*!< (unspecified)                                                        */
#define SPU132_SLAVE_BITS 4                          /*!< SLAVE_BITS=4 (number of address bits required to represent the
                                                          peripheral slave index)*/
#define SPU132_SPU_NUM_CLOCK_POWER_PAIR_MIN 0        /*!< Number of clock/power pairs used by PCGC Slave - [0..0]              */
#define SPU132_SPU_NUM_CLOCK_POWER_PAIR_MAX 0        /*!< Number of clock/power pairs used by PCGC Slave - [0..0]              */
#define SPU132_SPU_NUM_CLOCK_POWER_PAIR_SIZE 1       /*!< Number of clock/power pairs used by PCGC Slave - [0..0]              */
#define SPU132_SPU_NOTFULLPCPZERO 0                  /*!< (unspecified)                                                        */
#define SPU132_PENALTYTASKS 0                        /*!< (unspecified)                                                        */

#define SPU133_FLATFEATURES 1                        /*!< (unspecified)                                                        */
#define SPU133_NESTEDFEATURES 1                      /*!< (unspecified)                                                        */
#define SPU133_GRTCSECONDARYOFFSET 0                 /*!< (unspecified)                                                        */
#define SPU133_BELLS 0                               /*!< (unspecified)                                                        */
#define SPU133_IPCT 0                                /*!< (unspecified)                                                        */
#define SPU133_DPPI 1                                /*!< (unspecified)                                                        */
#define SPU133_GPIOTE 0                              /*!< (unspecified)                                                        */
#define SPU133_GRTC 1                                /*!< (unspecified)                                                        */
#define SPU133_GPIO 0                                /*!< (unspecified)                                                        */
#define SPU133_CRACEN 0                              /*!< (unspecified)                                                        */
#define SPU133_MRAMC 0                               /*!< (unspecified)                                                        */
#define SPU133_COEXC 0                               /*!< (unspecified)                                                        */
#define SPU133_ANTSWC 0                              /*!< (unspecified)                                                        */
#define SPU133_TDD 0                                 /*!< (unspecified)                                                        */
#define SPU133_SLAVE_BITS 4                          /*!< SLAVE_BITS=4 (number of address bits required to represent the
                                                          peripheral slave index)*/
#define SPU133_SPU_NUM_CLOCK_POWER_PAIR_MIN 0        /*!< Number of clock/power pairs used by PCGC Slave - [0..0]              */
#define SPU133_SPU_NUM_CLOCK_POWER_PAIR_MAX 0        /*!< Number of clock/power pairs used by PCGC Slave - [0..0]              */
#define SPU133_SPU_NUM_CLOCK_POWER_PAIR_SIZE 1       /*!< Number of clock/power pairs used by PCGC Slave - [0..0]              */
#define SPU133_SPU_NOTFULLPCPZERO 0                  /*!< (unspecified)                                                        */
#define SPU133_PENALTYTASKS 0                        /*!< (unspecified)                                                        */

#define SPU134_FLATFEATURES 1                        /*!< (unspecified)                                                        */
#define SPU134_NESTEDFEATURES 1                      /*!< (unspecified)                                                        */
#define SPU134_GRTCSECONDARYOFFSET 0                 /*!< (unspecified)                                                        */
#define SPU134_BELLS 0                               /*!< (unspecified)                                                        */
#define SPU134_IPCT 0                                /*!< (unspecified)                                                        */
#define SPU134_DPPI 1                                /*!< (unspecified)                                                        */
#define SPU134_GPIOTE 0                              /*!< (unspecified)                                                        */
#define SPU134_GRTC 0                                /*!< (unspecified)                                                        */
#define SPU134_GPIO 0                                /*!< (unspecified)                                                        */
#define SPU134_CRACEN 0                              /*!< (unspecified)                                                        */
#define SPU134_MRAMC 0                               /*!< (unspecified)                                                        */
#define SPU134_COEXC 0                               /*!< (unspecified)                                                        */
#define SPU134_ANTSWC 0                              /*!< (unspecified)                                                        */
#define SPU134_TDD 0                                 /*!< (unspecified)                                                        */
#define SPU134_SLAVE_BITS 4                          /*!< SLAVE_BITS=4 (number of address bits required to represent the
                                                          peripheral slave index)*/
#define SPU134_SPU_NUM_CLOCK_POWER_PAIR_MIN 0        /*!< Number of clock/power pairs used by PCGC Slave - [0..0]              */
#define SPU134_SPU_NUM_CLOCK_POWER_PAIR_MAX 0        /*!< Number of clock/power pairs used by PCGC Slave - [0..0]              */
#define SPU134_SPU_NUM_CLOCK_POWER_PAIR_SIZE 1       /*!< Number of clock/power pairs used by PCGC Slave - [0..0]              */
#define SPU134_SPU_NOTFULLPCPZERO 0                  /*!< (unspecified)                                                        */
#define SPU134_PENALTYTASKS 0                        /*!< (unspecified)                                                        */

#define SPU135_FLATFEATURES 1                        /*!< (unspecified)                                                        */
#define SPU135_NESTEDFEATURES 1                      /*!< (unspecified)                                                        */
#define SPU135_GRTCSECONDARYOFFSET 0                 /*!< (unspecified)                                                        */
#define SPU135_BELLS 0                               /*!< (unspecified)                                                        */
#define SPU135_IPCT 0                                /*!< (unspecified)                                                        */
#define SPU135_DPPI 1                                /*!< (unspecified)                                                        */
#define SPU135_GPIOTE 0                              /*!< (unspecified)                                                        */
#define SPU135_GRTC 0                                /*!< (unspecified)                                                        */
#define SPU135_GPIO 0                                /*!< (unspecified)                                                        */
#define SPU135_CRACEN 0                              /*!< (unspecified)                                                        */
#define SPU135_MRAMC 0                               /*!< (unspecified)                                                        */
#define SPU135_COEXC 0                               /*!< (unspecified)                                                        */
#define SPU135_ANTSWC 0                              /*!< (unspecified)                                                        */
#define SPU135_TDD 0                                 /*!< (unspecified)                                                        */
#define SPU135_SLAVE_BITS 4                          /*!< SLAVE_BITS=4 (number of address bits required to represent the
                                                          peripheral slave index)*/
#define SPU135_SPU_NUM_CLOCK_POWER_PAIR_MIN 0        /*!< Number of clock/power pairs used by PCGC Slave - [0..0]              */
#define SPU135_SPU_NUM_CLOCK_POWER_PAIR_MAX 0        /*!< Number of clock/power pairs used by PCGC Slave - [0..0]              */
#define SPU135_SPU_NUM_CLOCK_POWER_PAIR_SIZE 1       /*!< Number of clock/power pairs used by PCGC Slave - [0..0]              */
#define SPU135_SPU_NOTFULLPCPZERO 0                  /*!< (unspecified)                                                        */
#define SPU135_PENALTYTASKS 0                        /*!< (unspecified)                                                        */

#define SPU136_FLATFEATURES 1                        /*!< (unspecified)                                                        */
#define SPU136_NESTEDFEATURES 1                      /*!< (unspecified)                                                        */
#define SPU136_GRTCSECONDARYOFFSET 0                 /*!< (unspecified)                                                        */
#define SPU136_BELLS 0                               /*!< (unspecified)                                                        */
#define SPU136_IPCT 0                                /*!< (unspecified)                                                        */
#define SPU136_DPPI 1                                /*!< (unspecified)                                                        */
#define SPU136_GPIOTE 0                              /*!< (unspecified)                                                        */
#define SPU136_GRTC 0                                /*!< (unspecified)                                                        */
#define SPU136_GPIO 0                                /*!< (unspecified)                                                        */
#define SPU136_CRACEN 0                              /*!< (unspecified)                                                        */
#define SPU136_MRAMC 0                               /*!< (unspecified)                                                        */
#define SPU136_COEXC 0                               /*!< (unspecified)                                                        */
#define SPU136_ANTSWC 0                              /*!< (unspecified)                                                        */
#define SPU136_TDD 0                                 /*!< (unspecified)                                                        */
#define SPU136_SLAVE_BITS 4                          /*!< SLAVE_BITS=4 (number of address bits required to represent the
                                                          peripheral slave index)*/
#define SPU136_SPU_NUM_CLOCK_POWER_PAIR_MIN 0        /*!< Number of clock/power pairs used by PCGC Slave - [0..0]              */
#define SPU136_SPU_NUM_CLOCK_POWER_PAIR_MAX 0        /*!< Number of clock/power pairs used by PCGC Slave - [0..0]              */
#define SPU136_SPU_NUM_CLOCK_POWER_PAIR_SIZE 1       /*!< Number of clock/power pairs used by PCGC Slave - [0..0]              */
#define SPU136_SPU_NOTFULLPCPZERO 0                  /*!< (unspecified)                                                        */
#define SPU136_PENALTYTASKS 0                        /*!< (unspecified)                                                        */

#define SPU137_FLATFEATURES 1                        /*!< (unspecified)                                                        */
#define SPU137_NESTEDFEATURES 1                      /*!< (unspecified)                                                        */
#define SPU137_GRTCSECONDARYOFFSET 0                 /*!< (unspecified)                                                        */
#define SPU137_BELLS 0                               /*!< (unspecified)                                                        */
#define SPU137_IPCT 0                                /*!< (unspecified)                                                        */
#define SPU137_DPPI 1                                /*!< (unspecified)                                                        */
#define SPU137_GPIOTE 0                              /*!< (unspecified)                                                        */
#define SPU137_GRTC 0                                /*!< (unspecified)                                                        */
#define SPU137_GPIO 0                                /*!< (unspecified)                                                        */
#define SPU137_CRACEN 0                              /*!< (unspecified)                                                        */
#define SPU137_MRAMC 0                               /*!< (unspecified)                                                        */
#define SPU137_COEXC 0                               /*!< (unspecified)                                                        */
#define SPU137_ANTSWC 0                              /*!< (unspecified)                                                        */
#define SPU137_TDD 0                                 /*!< (unspecified)                                                        */
#define SPU137_SLAVE_BITS 4                          /*!< SLAVE_BITS=4 (number of address bits required to represent the
                                                          peripheral slave index)*/
#define SPU137_SPU_NUM_CLOCK_POWER_PAIR_MIN 0        /*!< Number of clock/power pairs used by PCGC Slave - [0..0]              */
#define SPU137_SPU_NUM_CLOCK_POWER_PAIR_MAX 0        /*!< Number of clock/power pairs used by PCGC Slave - [0..0]              */
#define SPU137_SPU_NUM_CLOCK_POWER_PAIR_SIZE 1       /*!< Number of clock/power pairs used by PCGC Slave - [0..0]              */
#define SPU137_SPU_NOTFULLPCPZERO 0                  /*!< (unspecified)                                                        */
#define SPU137_PENALTYTASKS 0                        /*!< (unspecified)                                                        */

/*Memory Privilege Controller*/
#define MPC_PRESENT 1
#define MPC_COUNT 6

#define MPC000_EXTEND_CLOCK_REQ 0                    /*!< (unspecified)                                                        */
#define MPC000_RTCHOKE 1                             /*!< (unspecified)                                                        */
#define MPC000_OVERRIDE_GRAN 4096                    /*!< The override region granularity is 4096 bytes                        */

#define MPC200_EXTEND_CLOCK_REQ 0                    /*!< (unspecified)                                                        */
#define MPC200_RTCHOKE 1                             /*!< (unspecified)                                                        */
#define MPC200_OVERRIDE_GRAN 4096                    /*!< The override region granularity is 4096 bytes                        */

#define MPC110_EXTEND_CLOCK_REQ 1                    /*!< (unspecified)                                                        */
#define MPC110_RTCHOKE 1                             /*!< (unspecified)                                                        */
#define MPC110_OVERRIDE_GRAN 4096                    /*!< The override region granularity is 4096 bytes                        */

#define MPC111_EXTEND_CLOCK_REQ 1                    /*!< (unspecified)                                                        */
#define MPC111_RTCHOKE 1                             /*!< (unspecified)                                                        */
#define MPC111_OVERRIDE_GRAN 4096                    /*!< The override region granularity is 4096 bytes                        */

#define MPC120_EXTEND_CLOCK_REQ 0                    /*!< (unspecified)                                                        */
#define MPC120_RTCHOKE 1                             /*!< (unspecified)                                                        */
#define MPC120_OVERRIDE_GRAN 32                      /*!< The override region granularity is 32 bytes                          */

#define MPC130_EXTEND_CLOCK_REQ 0                    /*!< (unspecified)                                                        */
#define MPC130_RTCHOKE 1                             /*!< (unspecified)                                                        */
#define MPC130_OVERRIDE_GRAN 32                      /*!< The override region granularity is 32 bytes                          */

/*MVDMA performs direct-memory-accesses between memories. Data is transferred according to job descriptor lists. Each transfer has corresponding source and sink descriptor lists with matching data amounts. The lists are in memory and they contain data buffer information, address pointers, buffer sizes and data type attributes.*/

#define MVDMA_PRESENT 1
#define MVDMA_COUNT 3

#define MVDMA_COMPLETED_EVENT 1                      /*!< (unspecified)                                                        */
#define MVDMA_DPPI_DISCONNECTED 0                    /*!< (unspecified)                                                        */
#define MVDMA_INSTANCE_IN_WRAPPER 0                  /*!< (unspecified)                                                        */

#define MVDMA120_COMPLETED_EVENT 1                   /*!< (unspecified)                                                        */
#define MVDMA120_DPPI_DISCONNECTED 1                 /*!< (unspecified)                                                        */
#define MVDMA120_INSTANCE_IN_WRAPPER 1               /*!< (unspecified)                                                        */

#define MVDMA121_COMPLETED_EVENT 1                   /*!< (unspecified)                                                        */
#define MVDMA121_DPPI_DISCONNECTED 1                 /*!< (unspecified)                                                        */
#define MVDMA121_INSTANCE_IN_WRAPPER 1               /*!< (unspecified)                                                        */

/*RAM Controller*/
#define RAMC_PRESENT 1
#define RAMC_COUNT 4

#define RAMC000_ECC 0                                /*!< (unspecified)                                                        */
#define RAMC000_SEC 1                                /*!< (unspecified)                                                        */

#define RAMC001_ECC 0                                /*!< (unspecified)                                                        */
#define RAMC001_SEC 1                                /*!< (unspecified)                                                        */

#define RAMC122_ECC 0                                /*!< (unspecified)                                                        */
#define RAMC122_SEC 0                                /*!< (unspecified)                                                        */

#define RAMC123_ECC 0                                /*!< (unspecified)                                                        */
#define RAMC123_SEC 0                                /*!< (unspecified)                                                        */

/*ROM Controller*/
#define ROMC_PRESENT 1
#define ROMC_COUNT 1

/*CRACEN*/
#define CRACEN_PRESENT 1
#define CRACEN_COUNT 1

#define CRACEN_CRYPTOACCELERATOR 1                   /*!< (unspecified)                                                        */
#define CRACEN_SEEDRAMLOCK 1                         /*!< (unspecified)                                                        */
#define CRACEN_PROTECTED_RAM_SEED 0x51810000         /*!< (unspecified)                                                        */
#define CRACEN_PROTECTED_RAM_SEED_SIZE 64            /*!< (unspecified)                                                        */
#define CRACEN_PROTECTED_RAM_AES_KEY0 0x51810040     /*!< (unspecified)                                                        */
#define CRACEN_PROTECTED_RAM_AES_KEY0_SIZE 32        /*!< (unspecified)                                                        */
#define CRACEN_PROTECTED_RAM_AES_KEY1 0x51810060     /*!< (unspecified)                                                        */
#define CRACEN_PROTECTED_RAM_AES_KEY1_SIZE 32        /*!< (unspecified)                                                        */
#define CRACEN_PROTECTED_RAM_SM4_KEY0 0x51810080     /*!< (unspecified)                                                        */
#define CRACEN_PROTECTED_RAM_SM4_KEY0_SIZE 16        /*!< (unspecified)                                                        */
#define CRACEN_PROTECTED_RAM_SM4_KEY1 0x51810090     /*!< (unspecified)                                                        */
#define CRACEN_PROTECTED_RAM_SM4_KEY1_SIZE 16        /*!< (unspecified)                                                        */
#define CRACEN_PROTECTED_RAM_SM4_KEY2 0x518100A0     /*!< (unspecified)                                                        */
#define CRACEN_PROTECTED_RAM_SM4_KEY2_SIZE 16        /*!< (unspecified)                                                        */
#define CRACEN_PROTECTED_RAM_SM4_KEY3 0x518100B0     /*!< (unspecified)                                                        */
#define CRACEN_PROTECTED_RAM_SM4_KEY3_SIZE 16        /*!< (unspecified)                                                        */
#define CRACEN_PROTECTED_RAM_RESERVED 0x518100C0     /*!< (unspecified)                                                        */
#define CRACEN_PROTECTED_RAM_RESERVED_SIZE 64        /*!< (unspecified)                                                        */

/*PCGCSlave*/
#define PCGCSLAVE_PRESENT 1
#define PCGCSLAVE_COUNT 2

#define PCGCS000_NUM_CLOCK_POWER_PAIR_MIN 0          /*!< Number of clock/power pairs used by PCGC Slave - [0..1]              */
#define PCGCS000_NUM_CLOCK_POWER_PAIR_MAX 1          /*!< Number of clock/power pairs used by PCGC Slave - [0..1]              */
#define PCGCS000_NUM_CLOCK_POWER_PAIR_SIZE 2         /*!< Number of clock/power pairs used by PCGC Slave - [0..1]              */
#define PCGCS000_NOTFULLPCPZERO 1                    /*!< (unspecified)                                                        */
#define PCGCS000_PENALTYTASKS 0                      /*!< (unspecified)                                                        */

#define PCGCS010_NUM_CLOCK_POWER_PAIR_MIN 0          /*!< Number of clock/power pairs used by PCGC Slave - [0..1]              */
#define PCGCS010_NUM_CLOCK_POWER_PAIR_MAX 1          /*!< Number of clock/power pairs used by PCGC Slave - [0..1]              */
#define PCGCS010_NUM_CLOCK_POWER_PAIR_SIZE 2         /*!< Number of clock/power pairs used by PCGC Slave - [0..1]              */
#define PCGCS010_NOTFULLPCPZERO 1                    /*!< (unspecified)                                                        */
#define PCGCS010_PENALTYTASKS 0                      /*!< (unspecified)                                                        */

/*PCGC Master*/
#define PCGCMASTER_PRESENT 1
#define PCGCMASTER_COUNT 4

#define PCGCM000_POWERCONSUMPTIONCALC 0              /*!< (unspecified)                                                        */
#define PCGCM000_SETPWRCONTHRESHOLDBASE 1            /*!< (unspecified)                                                        */
#define PCGCM000_CLOCKFORCEREG 1                     /*!< (unspecified)                                                        */
#define PCGCM000_MASTERFORCEREG 1                    /*!< (unspecified)                                                        */

#define PCGCM001_POWERCONSUMPTIONCALC 0              /*!< (unspecified)                                                        */
#define PCGCM001_SETPWRCONTHRESHOLDBASE 1            /*!< (unspecified)                                                        */
#define PCGCM001_CLOCKFORCEREG 1                     /*!< (unspecified)                                                        */
#define PCGCM001_MASTERFORCEREG 1                    /*!< (unspecified)                                                        */

#define PCGCM010_POWERCONSUMPTIONCALC 0              /*!< (unspecified)                                                        */
#define PCGCM010_SETPWRCONTHRESHOLDBASE 1            /*!< (unspecified)                                                        */
#define PCGCM010_CLOCKFORCEREG 1                     /*!< (unspecified)                                                        */
#define PCGCM010_MASTERFORCEREG 1                    /*!< (unspecified)                                                        */

#define PCGCM011_POWERCONSUMPTIONCALC 0              /*!< (unspecified)                                                        */
#define PCGCM011_SETPWRCONTHRESHOLDBASE 1            /*!< (unspecified)                                                        */
#define PCGCM011_CLOCKFORCEREG 1                     /*!< (unspecified)                                                        */
#define PCGCM011_MASTERFORCEREG 1                    /*!< (unspecified)                                                        */

/*HSFLL*/
#define HSFLL_PRESENT 1
#define HSFLL_COUNT 2

#define HSFLL_DITHER_32B 1                           /*!< (unspecified)                                                        */
#define HSFLL_CLOCKCTRL_MULT_RESET 6                 /*!< Reset value of register CLOCKCTRL.MULT: clockctrl_mult_reset         */
#define HSFLL_CLOCKCTRL_INTEGER_DIVISION 0           /*!< (unspecified)                                                        */

#define HSFLL121_DITHER_32B 1                        /*!< (unspecified)                                                        */
#define HSFLL121_CLOCKCTRL_MULT_RESET 6              /*!< Reset value of register CLOCKCTRL.MULT: clockctrl_mult_reset         */
#define HSFLL121_CLOCKCTRL_INTEGER_DIVISION 0        /*!< (unspecified)                                                        */

/*LRCCONF*/
#define LRCCONF_PRESENT 1
#define LRCCONF_COUNT 2

#define LRCCONF000_POWERON 0                         /*!< (unspecified)                                                        */
#define LRCCONF000_RETAIN 0                          /*!< (unspecified)                                                        */
#define LRCCONF000_SYSTEMOFF 0                       /*!< (unspecified)                                                        */
#define LRCCONF000_LRCREQHFXO 0                      /*!< (unspecified)                                                        */
#define LRCCONF000_NCLK_MIN 0                        /*!< (unspecified)                                                        */
#define LRCCONF000_NCLK_MAX 0                        /*!< (unspecified)                                                        */
#define LRCCONF000_NCLK_SIZE 1                       /*!< (unspecified)                                                        */
#define LRCCONF000_CLKCTRL 1                         /*!< (unspecified)                                                        */
#define LRCCONF000_NACTPD_MIN 0                      /*!< (unspecified)                                                        */
#define LRCCONF000_NACTPD_MAX 7                      /*!< (unspecified)                                                        */
#define LRCCONF000_NACTPD_SIZE 8                     /*!< (unspecified)                                                        */
#define LRCCONF000_PDACT 0                           /*!< (unspecified)                                                        */
#define LRCCONF000_NPD_MIN 0                         /*!< (unspecified)                                                        */
#define LRCCONF000_NPD_MAX 7                         /*!< (unspecified)                                                        */
#define LRCCONF000_NPD_SIZE 8                        /*!< (unspecified)                                                        */
#define LRCCONF000_OTHERON 0                         /*!< (unspecified)                                                        */
#define LRCCONF000_NDOMAINS_MIN 0                    /*!< (unspecified)                                                        */
#define LRCCONF000_NDOMAINS_MAX 15                   /*!< (unspecified)                                                        */
#define LRCCONF000_NDOMAINS_SIZE 16                  /*!< (unspecified)                                                        */
#define LRCCONF000_AX2XWAITSTATES 0                  /*!< (unspecified)                                                        */
#define LRCCONF000_POWERON_MAIN_RESET 0              /*!< (unspecified)                                                        */
#define LRCCONF000_POWERON_ACT_RESET 0               /*!< (unspecified)                                                        */
#define LRCCONF000_RETAIN_MAIN_RESET 1               /*!< (unspecified)                                                        */
#define LRCCONF000_RETAIN_ACT_RESET 1                /*!< (unspecified)                                                        */

#define LRCCONF010_POWERON 1                         /*!< (unspecified)                                                        */
#define LRCCONF010_RETAIN 1                          /*!< (unspecified)                                                        */
#define LRCCONF010_SYSTEMOFF 1                       /*!< (unspecified)                                                        */
#define LRCCONF010_LRCREQHFXO 1                      /*!< (unspecified)                                                        */
#define LRCCONF010_NCLK_MIN 0                        /*!< (unspecified)                                                        */
#define LRCCONF010_NCLK_MAX 0                        /*!< (unspecified)                                                        */
#define LRCCONF010_NCLK_SIZE 1                       /*!< (unspecified)                                                        */
#define LRCCONF010_CLKCTRL 1                         /*!< (unspecified)                                                        */
#define LRCCONF010_NACTPD_MIN 0                      /*!< (unspecified)                                                        */
#define LRCCONF010_NACTPD_MAX 0                      /*!< (unspecified)                                                        */
#define LRCCONF010_NACTPD_SIZE 1                     /*!< (unspecified)                                                        */
#define LRCCONF010_PDACT 1                           /*!< (unspecified)                                                        */
#define LRCCONF010_NPD_MIN 0                         /*!< (unspecified)                                                        */
#define LRCCONF010_NPD_MAX 7                         /*!< (unspecified)                                                        */
#define LRCCONF010_NPD_SIZE 8                        /*!< (unspecified)                                                        */
#define LRCCONF010_OTHERON 0                         /*!< (unspecified)                                                        */
#define LRCCONF010_NDOMAINS_MIN 0                    /*!< (unspecified)                                                        */
#define LRCCONF010_NDOMAINS_MAX 15                   /*!< (unspecified)                                                        */
#define LRCCONF010_NDOMAINS_SIZE 16                  /*!< (unspecified)                                                        */
#define LRCCONF010_AX2XWAITSTATES 0                  /*!< (unspecified)                                                        */
#define LRCCONF010_POWERON_MAIN_RESET 0              /*!< Reset value of register POWERON.MAIN: 0                              */
#define LRCCONF010_POWERON_ACT_RESET 0               /*!< Reset value of register POWERON.ACT: 0                               */
#define LRCCONF010_RETAIN_MAIN_RESET 1               /*!< Reset value of register RETAIN.MAIN: 1                               */
#define LRCCONF010_RETAIN_ACT_RESET 1                /*!< Reset value of register RETAIN.ACT: 1                                */

/*CPU Configuration*/
#define CPUCONF_PRESENT 1
#define CPUCONF_COUNT 1

#define CPUCONF_HASTASKERASECACHE 1                  /*!< (unspecified)                                                        */
#define CPUCONF_HASINITSVTOR 1                       /*!< (unspecified)                                                        */
#define CPUCONF_HASINITNSVTOR 1                      /*!< (unspecified)                                                        */
#define CPUCONF_HASCPUSTART 1                        /*!< (unspecified)                                                        */
#define CPUCONF_HASCPUWAIT 1                         /*!< (unspecified)                                                        */

/*Watchdog Timer*/
#define WDT_PRESENT 1
#define WDT_COUNT 4

#define WDT010_START_ON_RESET 1                      /*!< (unspecified)                                                        */
#define WDT010_CRV_RESETVALUE 32768                  /*!< (unspecified)                                                        */
#define WDT010_ALLOW_STOP 1                          /*!< (unspecified)                                                        */
#define WDT010_HAS_INTEN 1                           /*!< (unspecified)                                                        */

#define WDT011_START_ON_RESET 0                      /*!< (unspecified)                                                        */
#define WDT011_CRV_RESETVALUE 4294967295             /*!< (unspecified)                                                        */
#define WDT011_ALLOW_STOP 0                          /*!< (unspecified)                                                        */
#define WDT011_HAS_INTEN 1                           /*!< (unspecified)                                                        */

#define WDT131_START_ON_RESET 0                      /*!< (unspecified)                                                        */
#define WDT131_CRV_RESETVALUE 4294967295             /*!< (unspecified)                                                        */
#define WDT131_ALLOW_STOP 0                          /*!< (unspecified)                                                        */
#define WDT131_HAS_INTEN 1                           /*!< (unspecified)                                                        */

#define WDT132_START_ON_RESET 0                      /*!< (unspecified)                                                        */
#define WDT132_CRV_RESETVALUE 4294967295             /*!< (unspecified)                                                        */
#define WDT132_ALLOW_STOP 0                          /*!< (unspecified)                                                        */
#define WDT132_HAS_INTEN 1                           /*!< (unspecified)                                                        */

/*Tamper controller*/
#define TAMPC_PRESENT 1
#define TAMPC_COUNT 1

#define TAMPC_ERASEPROTECT 0                         /*!< (unspecified)                                                        */
#define TAMPC_PROTECT_INTRESETEN_CTRL_VALUE_RESET 1  /*!< Reset value of field VALUE in register PROTECT.INTRESETEN.CTRL: 1    */

/*MUTEX*/
#define MUTEX_PRESENT 1
#define MUTEX_COUNT 3

/*ABB peripheral*/
#define ABB_PRESENT 1
#define ABB_COUNT 1

/*RESETINFO*/
#define RESETINFO_PRESENT 1
#define RESETINFO_COUNT 1

#define RESETINFO_HASRESETREAS 1                     /*!< (unspecified)                                                        */
#define RESETINFO_CROSSDOMAINRESET 1                 /*!< (unspecified)                                                        */

/*IPCT APB registers*/
#define IPCT_PRESENT 1
#define IPCT_COUNT 3

#define IPCT_IRQ_COUNT 2

#define IPCT120_IRQ_COUNT 1

#define IPCT130_IRQ_COUNT 1

/*Software interrupt*/
#define SWI_PRESENT 1
#define SWI_COUNT 8

/*BELLBOARD APB registers*/
#define BELLBOARD_PRESENT 1
#define BELLBOARD_COUNT 1

#define BELLBOARD_IRQ_COUNT 4

/*Control access port*/
#define CTRLAPPERI_PRESENT 1
#define CTRLAPPERI_COUNT 1

#define CTRLAP_BOOTSTATUS_REG 1                      /*!< (unspecified)                                                        */

/*IPCMAP APB registers*/
#define IPCMAP_PRESENT 1
#define IPCMAP_COUNT 1

/*IRQMAP APB registers*/
#define IRQMAP_PRESENT 1
#define IRQMAP_COUNT 1

/*Factory Information Configuration Registers*/
#define FICR_PRESENT 1
#define FICR_COUNT 1

#define FICR_LTE_ON 1                                /*!< (unspecified)                                                        */
#define FICR_WIFI_ON 0                               /*!< (unspecified)                                                        */
#define FICR_NFC_ON 0                                /*!< (unspecified)                                                        */
#define FICR_ML_ON 0                                 /*!< (unspecified)                                                        */
#define FICR_SDCARD_ON 0                             /*!< (unspecified)                                                        */
#define FICR_VREG_1V8_0V8 0                          /*!< (unspecified)                                                        */
#define FICR_AUDIO_USB_PROGRAMMABLE_OWNER 0          /*!< (unspecified)                                                        */

/*USBHSCORE*/
#define USBHSCORE_PRESENT 1
#define USBHSCORE_COUNT 1

/*I3CCORE*/
#define I3CCORE_PRESENT 1
#define I3CCORE_COUNT 2

/*DMU*/
#define DMU_PRESENT 1
#define DMU_COUNT 2

/*MCAN*/
#define MCAN_PRESENT 1
#define MCAN_COUNT 2

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

/*Embedded Trace Router*/
#define ETR_PRESENT 1
#define ETR_COUNT 1

/*ATB Replicator module*/
#define ATBREPLICATOR_PRESENT 1
#define ATBREPLICATOR_COUNT 4

/*ATB funnel module*/
#define ATBFUNNEL_PRESENT 1
#define ATBFUNNEL_COUNT 4

/*GPIO Tasks and Events*/
#define GPIOTE_PRESENT 1
#define GPIOTE_COUNT 2

#define GPIOTE130_IRQ_COUNT 2
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

#define GPIOTE131_IRQ_COUNT 2
#define GPIOTE131_GPIOTE_NCHANNELS_MIN 0             /*!< Number of GPIOTE channels: 0..7                                      */
#define GPIOTE131_GPIOTE_NCHANNELS_MAX 7             /*!< Number of GPIOTE channels: 0..7                                      */
#define GPIOTE131_GPIOTE_NCHANNELS_SIZE 8            /*!< Number of GPIOTE channels: 0..7                                      */
#define GPIOTE131_GPIOTE_NPORTEVENTS_MIN 0           /*!< Number of GPIOTE port events: 0..3                                   */
#define GPIOTE131_GPIOTE_NPORTEVENTS_MAX 3           /*!< Number of GPIOTE port events: 0..3                                   */
#define GPIOTE131_GPIOTE_NPORTEVENTS_SIZE 4          /*!< Number of GPIOTE port events: 0..3                                   */
#define GPIOTE131_GPIOTE_NINTERRUPTS_MIN 0           /*!< Number of GPIOTE interrupts: 0..1                                    */
#define GPIOTE131_GPIOTE_NINTERRUPTS_MAX 1           /*!< Number of GPIOTE interrupts: 0..1                                    */
#define GPIOTE131_GPIOTE_NINTERRUPTS_SIZE 2          /*!< Number of GPIOTE interrupts: 0..1                                    */
#define GPIOTE131_HAS_PORT_EVENT 1                   /*!< (unspecified)                                                        */

/*Global Real-time counter*/
#define GRTC_PRESENT 1
#define GRTC_COUNT 1

#define GRTC_IRQ_COUNT 3
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
#define GRTC_GRTC_NINTERRUPTS_MIN 0                  /*!< Number of GRTC interrupts : 0..2                                     */
#define GRTC_GRTC_NINTERRUPTS_MAX 2                  /*!< Number of GRTC interrupts : 0..2                                     */
#define GRTC_GRTC_NINTERRUPTS_SIZE 3                 /*!< Number of GRTC interrupts : 0..2                                     */
#define GRTC_PWMREGS 1                               /*!< (unspecified)                                                        */
#define GRTC_CLKOUTREG 1                             /*!< (unspecified)                                                        */
#define GRTC_CLKSELREG 1                             /*!< (unspecified)                                                        */
#define GRTC_CLKSELLFLPRC 1                          /*!< (unspecified)                                                        */
#define GRTC_CCADD_WRITE_ONLY 1                      /*!< (unspecified)                                                        */
#define GRTC_READY_STATUS_AND_EVENTS 0               /*!< (unspecified)                                                        */

/*Trace buffer monitor*/
#define TBM_PRESENT 1
#define TBM_COUNT 1

/*USBHS*/
#define USBHS_PRESENT 1
#define USBHS_COUNT 1

#define USBHS_SIMULATIONREGISTERS 0                  /*!< (unspecified)                                                        */

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

/*External Memory Interface*/
#define EXMIF_PRESENT 1
#define EXMIF_COUNT 1

/*AUXPLL*/
#define AUXPLL_PRESENT 1
#define AUXPLL_COUNT 3

/*AUXPM*/
#define AUXPM_PRESENT 1
#define AUXPM_COUNT 2

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
#define VPR120_VEVIF_NEVENTS_MIN 28                  /*!< VEVIF events: 28..31                                                 */
#define VPR120_VEVIF_NEVENTS_MAX 31                  /*!< VEVIF events: 28..31                                                 */
#define VPR120_VEVIF_NEVENTS_SIZE 32                 /*!< VEVIF events: 28..31                                                 */
#define VPR120_DEBUGGER_OFFSET 1024                  /*!< Debugger interface register offset: 0x5F8C8400                       */

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
#define VPR121_VEVIF_NEVENTS_MIN 28                  /*!< VEVIF events: 28..31                                                 */
#define VPR121_VEVIF_NEVENTS_MAX 31                  /*!< VEVIF events: 28..31                                                 */
#define VPR121_VEVIF_NEVENTS_SIZE 32                 /*!< VEVIF events: 28..31                                                 */
#define VPR121_DEBUGGER_OFFSET 1024                  /*!< Debugger interface register offset: 0x5F8D4400                       */

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
#define VPR130_VEVIF_NEVENTS_MIN 12                  /*!< VEVIF events: 12..15                                                 */
#define VPR130_VEVIF_NEVENTS_MAX 15                  /*!< VEVIF events: 12..15                                                 */
#define VPR130_VEVIF_NEVENTS_SIZE 16                 /*!< VEVIF events: 12..15                                                 */
#define VPR130_DEBUGGER_OFFSET 1024                  /*!< Debugger interface register offset: 0x5F908400                       */

/*Prototype HW information registers.*/
#define PROTOTYPEINFO_PRESENT 1
#define PROTOTYPEINFO_COUNT 1

/*I3C*/
#define I3C_PRESENT 1
#define I3C_COUNT 2

/*Controller Area Network*/
#define CAN_PRESENT 1
#define CAN_COUNT 2

/*Distributed programmable peripheral interconnect controller*/
#define DPPIC_PRESENT 1
#define DPPIC_COUNT 8

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

#define DPPIC135_HASCHANNELGROUPS 1                  /*!< (unspecified)                                                        */
#define DPPIC135_CH_NUM_MIN 0                        /*!< (unspecified)                                                        */
#define DPPIC135_CH_NUM_MAX 7                        /*!< (unspecified)                                                        */
#define DPPIC135_CH_NUM_SIZE 8                       /*!< (unspecified)                                                        */
#define DPPIC135_GROUP_NUM_MIN 0                     /*!< (unspecified)                                                        */
#define DPPIC135_GROUP_NUM_MAX 1                     /*!< (unspecified)                                                        */
#define DPPIC135_GROUP_NUM_SIZE 2                    /*!< (unspecified)                                                        */

#define DPPIC136_HASCHANNELGROUPS 1                  /*!< (unspecified)                                                        */
#define DPPIC136_CH_NUM_MIN 0                        /*!< (unspecified)                                                        */
#define DPPIC136_CH_NUM_MAX 7                        /*!< (unspecified)                                                        */
#define DPPIC136_CH_NUM_SIZE 8                       /*!< (unspecified)                                                        */
#define DPPIC136_GROUP_NUM_MIN 0                     /*!< (unspecified)                                                        */
#define DPPIC136_GROUP_NUM_MAX 1                     /*!< (unspecified)                                                        */
#define DPPIC136_GROUP_NUM_SIZE 2                    /*!< (unspecified)                                                        */

/*Timer/Counter*/
#define TIMER_PRESENT 1
#define TIMER_COUNT 10

#define TIMER120_CC_NUM_MIN 0                        /*!< (unspecified)                                                        */
#define TIMER120_CC_NUM_MAX 5                        /*!< (unspecified)                                                        */
#define TIMER120_CC_NUM_SIZE 6                       /*!< (unspecified)                                                        */
#define TIMER120_MAX_SIZE_MIN 0                      /*!< (unspecified)                                                        */
#define TIMER120_MAX_SIZE_MAX 31                     /*!< (unspecified)                                                        */
#define TIMER120_MAX_SIZE_SIZE 32                    /*!< (unspecified)                                                        */
#define TIMER120_PCLK_MHZ 320                        /*!< Peripheral clock frequency (PCLK) is 320 MHz                         */
#define TIMER120_PCLK_VARIABLE 0                     /*!< (unspecified)                                                        */

#define TIMER121_CC_NUM_MIN 0                        /*!< (unspecified)                                                        */
#define TIMER121_CC_NUM_MAX 5                        /*!< (unspecified)                                                        */
#define TIMER121_CC_NUM_SIZE 6                       /*!< (unspecified)                                                        */
#define TIMER121_MAX_SIZE_MIN 0                      /*!< (unspecified)                                                        */
#define TIMER121_MAX_SIZE_MAX 31                     /*!< (unspecified)                                                        */
#define TIMER121_MAX_SIZE_SIZE 32                    /*!< (unspecified)                                                        */
#define TIMER121_PCLK_MHZ 320                        /*!< Peripheral clock frequency (PCLK) is 320 MHz                         */
#define TIMER121_PCLK_VARIABLE 0                     /*!< (unspecified)                                                        */

#define TIMER130_CC_NUM_MIN 0                        /*!< (unspecified)                                                        */
#define TIMER130_CC_NUM_MAX 5                        /*!< (unspecified)                                                        */
#define TIMER130_CC_NUM_SIZE 6                       /*!< (unspecified)                                                        */
#define TIMER130_MAX_SIZE_MIN 0                      /*!< (unspecified)                                                        */
#define TIMER130_MAX_SIZE_MAX 31                     /*!< (unspecified)                                                        */
#define TIMER130_MAX_SIZE_SIZE 32                    /*!< (unspecified)                                                        */
#define TIMER130_PCLK_MHZ 16                         /*!< Peripheral clock frequency (PCLK) is 16 MHz                          */
#define TIMER130_PCLK_VARIABLE 0                     /*!< (unspecified)                                                        */

#define TIMER131_CC_NUM_MIN 0                        /*!< (unspecified)                                                        */
#define TIMER131_CC_NUM_MAX 5                        /*!< (unspecified)                                                        */
#define TIMER131_CC_NUM_SIZE 6                       /*!< (unspecified)                                                        */
#define TIMER131_MAX_SIZE_MIN 0                      /*!< (unspecified)                                                        */
#define TIMER131_MAX_SIZE_MAX 31                     /*!< (unspecified)                                                        */
#define TIMER131_MAX_SIZE_SIZE 32                    /*!< (unspecified)                                                        */
#define TIMER131_PCLK_MHZ 16                         /*!< Peripheral clock frequency (PCLK) is 16 MHz                          */
#define TIMER131_PCLK_VARIABLE 0                     /*!< (unspecified)                                                        */

#define TIMER132_CC_NUM_MIN 0                        /*!< (unspecified)                                                        */
#define TIMER132_CC_NUM_MAX 5                        /*!< (unspecified)                                                        */
#define TIMER132_CC_NUM_SIZE 6                       /*!< (unspecified)                                                        */
#define TIMER132_MAX_SIZE_MIN 0                      /*!< (unspecified)                                                        */
#define TIMER132_MAX_SIZE_MAX 31                     /*!< (unspecified)                                                        */
#define TIMER132_MAX_SIZE_SIZE 32                    /*!< (unspecified)                                                        */
#define TIMER132_PCLK_MHZ 16                         /*!< Peripheral clock frequency (PCLK) is 16 MHz                          */
#define TIMER132_PCLK_VARIABLE 0                     /*!< (unspecified)                                                        */

#define TIMER133_CC_NUM_MIN 0                        /*!< (unspecified)                                                        */
#define TIMER133_CC_NUM_MAX 5                        /*!< (unspecified)                                                        */
#define TIMER133_CC_NUM_SIZE 6                       /*!< (unspecified)                                                        */
#define TIMER133_MAX_SIZE_MIN 0                      /*!< (unspecified)                                                        */
#define TIMER133_MAX_SIZE_MAX 31                     /*!< (unspecified)                                                        */
#define TIMER133_MAX_SIZE_SIZE 32                    /*!< (unspecified)                                                        */
#define TIMER133_PCLK_MHZ 16                         /*!< Peripheral clock frequency (PCLK) is 16 MHz                          */
#define TIMER133_PCLK_VARIABLE 0                     /*!< (unspecified)                                                        */

#define TIMER134_CC_NUM_MIN 0                        /*!< (unspecified)                                                        */
#define TIMER134_CC_NUM_MAX 5                        /*!< (unspecified)                                                        */
#define TIMER134_CC_NUM_SIZE 6                       /*!< (unspecified)                                                        */
#define TIMER134_MAX_SIZE_MIN 0                      /*!< (unspecified)                                                        */
#define TIMER134_MAX_SIZE_MAX 31                     /*!< (unspecified)                                                        */
#define TIMER134_MAX_SIZE_SIZE 32                    /*!< (unspecified)                                                        */
#define TIMER134_PCLK_MHZ 16                         /*!< Peripheral clock frequency (PCLK) is 16 MHz                          */
#define TIMER134_PCLK_VARIABLE 0                     /*!< (unspecified)                                                        */

#define TIMER135_CC_NUM_MIN 0                        /*!< (unspecified)                                                        */
#define TIMER135_CC_NUM_MAX 5                        /*!< (unspecified)                                                        */
#define TIMER135_CC_NUM_SIZE 6                       /*!< (unspecified)                                                        */
#define TIMER135_MAX_SIZE_MIN 0                      /*!< (unspecified)                                                        */
#define TIMER135_MAX_SIZE_MAX 31                     /*!< (unspecified)                                                        */
#define TIMER135_MAX_SIZE_SIZE 32                    /*!< (unspecified)                                                        */
#define TIMER135_PCLK_MHZ 16                         /*!< Peripheral clock frequency (PCLK) is 16 MHz                          */
#define TIMER135_PCLK_VARIABLE 0                     /*!< (unspecified)                                                        */

#define TIMER136_CC_NUM_MIN 0                        /*!< (unspecified)                                                        */
#define TIMER136_CC_NUM_MAX 5                        /*!< (unspecified)                                                        */
#define TIMER136_CC_NUM_SIZE 6                       /*!< (unspecified)                                                        */
#define TIMER136_MAX_SIZE_MIN 0                      /*!< (unspecified)                                                        */
#define TIMER136_MAX_SIZE_MAX 31                     /*!< (unspecified)                                                        */
#define TIMER136_MAX_SIZE_SIZE 32                    /*!< (unspecified)                                                        */
#define TIMER136_PCLK_MHZ 16                         /*!< Peripheral clock frequency (PCLK) is 16 MHz                          */
#define TIMER136_PCLK_VARIABLE 0                     /*!< (unspecified)                                                        */

#define TIMER137_CC_NUM_MIN 0                        /*!< (unspecified)                                                        */
#define TIMER137_CC_NUM_MAX 5                        /*!< (unspecified)                                                        */
#define TIMER137_CC_NUM_SIZE 6                       /*!< (unspecified)                                                        */
#define TIMER137_MAX_SIZE_MIN 0                      /*!< (unspecified)                                                        */
#define TIMER137_MAX_SIZE_MAX 31                     /*!< (unspecified)                                                        */
#define TIMER137_MAX_SIZE_SIZE 32                    /*!< (unspecified)                                                        */
#define TIMER137_PCLK_MHZ 16                         /*!< Peripheral clock frequency (PCLK) is 16 MHz                          */
#define TIMER137_PCLK_VARIABLE 0                     /*!< (unspecified)                                                        */

/*Pulse width modulation unit*/
#define PWM_PRESENT 1
#define PWM_COUNT 5

#define PWM120_EASYDMA5 1                            /*!< (unspecified)                                                        */
#define PWM120_EASYDMATEMP 0                         /*!< (unspecified)                                                        */
#define PWM120_IDLE_OUT 1                            /*!< (unspecified)                                                        */
#define PWM120_COMPARE_MATCH 1                       /*!< (unspecified)                                                        */
#define PWM120_FEATURES_V2 0                         /*!< (unspecified)                                                        */
#define PWM120_NO_FEATURES_V2 1                      /*!< (unspecified)                                                        */
#define PWM120_EASYDMALISTINCLUDED 0                 /*!< (unspecified)                                                        */
#define PWM120_EASYDMAMODEINCLUDED 0                 /*!< (unspecified)                                                        */
#define PWM120_EASYDMAFULLLPMODEINCLUDED 0           /*!< (unspecified)                                                        */
#define PWM120_EASYDMAPATTERNMATCHERINCLUDED 0       /*!< (unspecified)                                                        */
#define PWM120_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 1 /*!< (unspecified)                                                   */
#define PWM120_EASYDMASTOPTASKINCLUDED 1             /*!< (unspecified)                                                        */

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

#define PWM132_EASYDMA5 1                            /*!< (unspecified)                                                        */
#define PWM132_EASYDMATEMP 0                         /*!< (unspecified)                                                        */
#define PWM132_IDLE_OUT 1                            /*!< (unspecified)                                                        */
#define PWM132_COMPARE_MATCH 1                       /*!< (unspecified)                                                        */
#define PWM132_FEATURES_V2 0                         /*!< (unspecified)                                                        */
#define PWM132_NO_FEATURES_V2 1                      /*!< (unspecified)                                                        */
#define PWM132_EASYDMALISTINCLUDED 0                 /*!< (unspecified)                                                        */
#define PWM132_EASYDMAMODEINCLUDED 0                 /*!< (unspecified)                                                        */
#define PWM132_EASYDMAFULLLPMODEINCLUDED 0           /*!< (unspecified)                                                        */
#define PWM132_EASYDMAPATTERNMATCHERINCLUDED 0       /*!< (unspecified)                                                        */
#define PWM132_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 1 /*!< (unspecified)                                                   */
#define PWM132_EASYDMASTOPTASKINCLUDED 1             /*!< (unspecified)                                                        */

#define PWM133_EASYDMA5 1                            /*!< (unspecified)                                                        */
#define PWM133_EASYDMATEMP 0                         /*!< (unspecified)                                                        */
#define PWM133_IDLE_OUT 1                            /*!< (unspecified)                                                        */
#define PWM133_COMPARE_MATCH 1                       /*!< (unspecified)                                                        */
#define PWM133_FEATURES_V2 0                         /*!< (unspecified)                                                        */
#define PWM133_NO_FEATURES_V2 1                      /*!< (unspecified)                                                        */
#define PWM133_EASYDMALISTINCLUDED 0                 /*!< (unspecified)                                                        */
#define PWM133_EASYDMAMODEINCLUDED 0                 /*!< (unspecified)                                                        */
#define PWM133_EASYDMAFULLLPMODEINCLUDED 0           /*!< (unspecified)                                                        */
#define PWM133_EASYDMAPATTERNMATCHERINCLUDED 0       /*!< (unspecified)                                                        */
#define PWM133_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 1 /*!< (unspecified)                                                   */
#define PWM133_EASYDMASTOPTASKINCLUDED 1             /*!< (unspecified)                                                        */

/*SPI Slave*/
#define SPIS_PRESENT 1
#define SPIS_COUNT 9

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

#define SPIS134_LEGACYPSEL 0                         /*!< (unspecified)                                                        */
#define SPIS134_LEGACYEDMA 0                         /*!< (unspecified)                                                        */
#define SPIS134_EASYDMA_MAXCNT_MIN 0                 /*!< (unspecified)                                                        */
#define SPIS134_EASYDMA_MAXCNT_MAX 14                /*!< (unspecified)                                                        */
#define SPIS134_EASYDMA_MAXCNT_SIZE 15               /*!< (unspecified)                                                        */
#define SPIS134_EASYDMA5 1                           /*!< (unspecified)                                                        */
#define SPIS134_EASYDMATEMP 0                        /*!< (unspecified)                                                        */
#define SPIS134_EASYDMALISTINCLUDED 1                /*!< (unspecified)                                                        */
#define SPIS134_EASYDMAMODEINCLUDED 0                /*!< (unspecified)                                                        */
#define SPIS134_EASYDMAFULLLPMODEINCLUDED 0          /*!< (unspecified)                                                        */
#define SPIS134_EASYDMAPATTERNMATCHERINCLUDED 1      /*!< (unspecified)                                                        */
#define SPIS134_EASYDMANUMMATCHCHANNELS_MIN 0        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIS134_EASYDMANUMMATCHCHANNELS_MAX 3        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIS134_EASYDMANUMMATCHCHANNELS_SIZE 4       /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIS134_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 1 /*!< (unspecified)                                                  */
#define SPIS134_EASYDMASTOPTASKINCLUDED 1            /*!< (unspecified)                                                        */

#define SPIS135_LEGACYPSEL 0                         /*!< (unspecified)                                                        */
#define SPIS135_LEGACYEDMA 0                         /*!< (unspecified)                                                        */
#define SPIS135_EASYDMA_MAXCNT_MIN 0                 /*!< (unspecified)                                                        */
#define SPIS135_EASYDMA_MAXCNT_MAX 14                /*!< (unspecified)                                                        */
#define SPIS135_EASYDMA_MAXCNT_SIZE 15               /*!< (unspecified)                                                        */
#define SPIS135_EASYDMA5 1                           /*!< (unspecified)                                                        */
#define SPIS135_EASYDMATEMP 0                        /*!< (unspecified)                                                        */
#define SPIS135_EASYDMALISTINCLUDED 1                /*!< (unspecified)                                                        */
#define SPIS135_EASYDMAMODEINCLUDED 0                /*!< (unspecified)                                                        */
#define SPIS135_EASYDMAFULLLPMODEINCLUDED 0          /*!< (unspecified)                                                        */
#define SPIS135_EASYDMAPATTERNMATCHERINCLUDED 1      /*!< (unspecified)                                                        */
#define SPIS135_EASYDMANUMMATCHCHANNELS_MIN 0        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIS135_EASYDMANUMMATCHCHANNELS_MAX 3        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIS135_EASYDMANUMMATCHCHANNELS_SIZE 4       /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIS135_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 1 /*!< (unspecified)                                                  */
#define SPIS135_EASYDMASTOPTASKINCLUDED 1            /*!< (unspecified)                                                        */

#define SPIS136_LEGACYPSEL 0                         /*!< (unspecified)                                                        */
#define SPIS136_LEGACYEDMA 0                         /*!< (unspecified)                                                        */
#define SPIS136_EASYDMA_MAXCNT_MIN 0                 /*!< (unspecified)                                                        */
#define SPIS136_EASYDMA_MAXCNT_MAX 14                /*!< (unspecified)                                                        */
#define SPIS136_EASYDMA_MAXCNT_SIZE 15               /*!< (unspecified)                                                        */
#define SPIS136_EASYDMA5 1                           /*!< (unspecified)                                                        */
#define SPIS136_EASYDMATEMP 0                        /*!< (unspecified)                                                        */
#define SPIS136_EASYDMALISTINCLUDED 1                /*!< (unspecified)                                                        */
#define SPIS136_EASYDMAMODEINCLUDED 0                /*!< (unspecified)                                                        */
#define SPIS136_EASYDMAFULLLPMODEINCLUDED 0          /*!< (unspecified)                                                        */
#define SPIS136_EASYDMAPATTERNMATCHERINCLUDED 1      /*!< (unspecified)                                                        */
#define SPIS136_EASYDMANUMMATCHCHANNELS_MIN 0        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIS136_EASYDMANUMMATCHCHANNELS_MAX 3        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIS136_EASYDMANUMMATCHCHANNELS_SIZE 4       /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIS136_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 1 /*!< (unspecified)                                                  */
#define SPIS136_EASYDMASTOPTASKINCLUDED 1            /*!< (unspecified)                                                        */

#define SPIS137_LEGACYPSEL 0                         /*!< (unspecified)                                                        */
#define SPIS137_LEGACYEDMA 0                         /*!< (unspecified)                                                        */
#define SPIS137_EASYDMA_MAXCNT_MIN 0                 /*!< (unspecified)                                                        */
#define SPIS137_EASYDMA_MAXCNT_MAX 14                /*!< (unspecified)                                                        */
#define SPIS137_EASYDMA_MAXCNT_SIZE 15               /*!< (unspecified)                                                        */
#define SPIS137_EASYDMA5 1                           /*!< (unspecified)                                                        */
#define SPIS137_EASYDMATEMP 0                        /*!< (unspecified)                                                        */
#define SPIS137_EASYDMALISTINCLUDED 1                /*!< (unspecified)                                                        */
#define SPIS137_EASYDMAMODEINCLUDED 0                /*!< (unspecified)                                                        */
#define SPIS137_EASYDMAFULLLPMODEINCLUDED 0          /*!< (unspecified)                                                        */
#define SPIS137_EASYDMAPATTERNMATCHERINCLUDED 1      /*!< (unspecified)                                                        */
#define SPIS137_EASYDMANUMMATCHCHANNELS_MIN 0        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIS137_EASYDMANUMMATCHCHANNELS_MAX 3        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIS137_EASYDMANUMMATCHCHANNELS_SIZE 4       /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIS137_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 1 /*!< (unspecified)                                                  */
#define SPIS137_EASYDMASTOPTASKINCLUDED 1            /*!< (unspecified)                                                        */

/*Serial Peripheral Interface Master with EasyDMA*/
#define SPIM_PRESENT 1
#define SPIM_COUNT 10

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
#define SPIM120_STALL_STATUS_TX_PRESENT 0            /*!< (unspecified)                                                        */
#define SPIM120_HSSPI 0                              /*!< (unspecified)                                                        */
#define SPIM120_HIGH_SPEED_DOMAIN 1                  /*!< (unspecified)                                                        */
#define SPIM120_MULTIPLE_CHIPSELECT 1                /*!< (unspecified)                                                        */
#define SPIM120_NUM_CHIPSELECT_MIN 0                 /*!< Peripheral supports 0..0 chip select signals.                        */
#define SPIM120_NUM_CHIPSELECT_MAX 0                 /*!< Peripheral supports 0..0 chip select signals.                        */
#define SPIM120_NUM_CHIPSELECT_SIZE 1                /*!< Peripheral supports 0..0 chip select signals.                        */
#define SPIM120_CORE_FREQUENCY 320                   /*!< Peripheral core frequency is 320 MHz.                                */
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

#define SPIM121_EASYDMA5 1                           /*!< (unspecified)                                                        */
#define SPIM121_EASYDMATEMP 0                        /*!< (unspecified)                                                        */
#define SPIM121_EASYDMALISTINCLUDED 1                /*!< (unspecified)                                                        */
#define SPIM121_EASYDMAMODEINCLUDED 0                /*!< (unspecified)                                                        */
#define SPIM121_EASYDMAFULLLPMODEINCLUDED 0          /*!< (unspecified)                                                        */
#define SPIM121_EASYDMAPATTERNMATCHERINCLUDED 1      /*!< (unspecified)                                                        */
#define SPIM121_EASYDMANUMMATCHCHANNELS_MIN 0        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIM121_EASYDMANUMMATCHCHANNELS_MAX 3        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIM121_EASYDMANUMMATCHCHANNELS_SIZE 4       /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIM121_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 1 /*!< (unspecified)                                                  */
#define SPIM121_EASYDMASTOPTASKINCLUDED 1            /*!< (unspecified)                                                        */
#define SPIM121_MAX_DATARATE 32                      /*!< (unspecified)                                                        */
#define SPIM121_EASYDMA_MAXCNT_MIN 0                 /*!< (unspecified)                                                        */
#define SPIM121_EASYDMA_MAXCNT_MAX 14                /*!< (unspecified)                                                        */
#define SPIM121_EASYDMA_MAXCNT_SIZE 15               /*!< (unspecified)                                                        */
#define SPIM121_FEATURE_HARDWARE_CSN_PRESENT 1       /*!< (unspecified)                                                        */
#define SPIM121_FEATURE_HARDWARE_DCX_PRESENT 1       /*!< (unspecified)                                                        */
#define SPIM121_FEATURE_RXDELAY_PRESENT 1            /*!< (unspecified)                                                        */
#define SPIM121_STALL_STATUS_PRESENT 0               /*!< (unspecified)                                                        */
#define SPIM121_STALL_STATUS_TX_PRESENT 0            /*!< (unspecified)                                                        */
#define SPIM121_HSSPI 0                              /*!< (unspecified)                                                        */
#define SPIM121_HIGH_SPEED_DOMAIN 1                  /*!< (unspecified)                                                        */
#define SPIM121_MULTIPLE_CHIPSELECT 1                /*!< (unspecified)                                                        */
#define SPIM121_NUM_CHIPSELECT_MIN 0                 /*!< Peripheral supports 0..0 chip select signals.                        */
#define SPIM121_NUM_CHIPSELECT_MAX 0                 /*!< Peripheral supports 0..0 chip select signals.                        */
#define SPIM121_NUM_CHIPSELECT_SIZE 1                /*!< Peripheral supports 0..0 chip select signals.                        */
#define SPIM121_CORE_FREQUENCY 320                   /*!< Peripheral core frequency is 320 MHz.                                */
#define SPIM121_PRESCALER_PRESENT 1                  /*!< (unspecified)                                                        */
#define SPIM121_PRESCALER_DIVISOR_RANGE_MIN 4        /*!< (unspecified)                                                        */
#define SPIM121_PRESCALER_DIVISOR_RANGE_MAX 126      /*!< (unspecified)                                                        */
#define SPIM121_PRESCALER_DIVISOR_RANGE_SIZE 127     /*!< (unspecified)                                                        */
#define SPIM121_RXDELAY_VALUE_RANGE_MIN 0            /*!< (unspecified)                                                        */
#define SPIM121_RXDELAY_VALUE_RANGE_MAX 40           /*!< (unspecified)                                                        */
#define SPIM121_RXDELAY_VALUE_RANGE_SIZE 41          /*!< (unspecified)                                                        */
#define SPIM121_RXDELAY_RESET_VALUE 2                /*!< (unspecified)                                                        */
#define SPIM121_RXDELAY_FIELD_WIDTH_MIN 0            /*!< (unspecified)                                                        */
#define SPIM121_RXDELAY_FIELD_WIDTH_MAX 5            /*!< (unspecified)                                                        */
#define SPIM121_RXDELAY_FIELD_WIDTH_SIZE 6           /*!< (unspecified)                                                        */

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
#define SPIM130_STALL_STATUS_TX_PRESENT 0            /*!< (unspecified)                                                        */
#define SPIM130_HSSPI 0                              /*!< (unspecified)                                                        */
#define SPIM130_HIGH_SPEED_DOMAIN 0                  /*!< (unspecified)                                                        */
#define SPIM130_MULTIPLE_CHIPSELECT 1                /*!< (unspecified)                                                        */
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
#define SPIM131_STALL_STATUS_TX_PRESENT 0            /*!< (unspecified)                                                        */
#define SPIM131_HSSPI 0                              /*!< (unspecified)                                                        */
#define SPIM131_HIGH_SPEED_DOMAIN 0                  /*!< (unspecified)                                                        */
#define SPIM131_MULTIPLE_CHIPSELECT 1                /*!< (unspecified)                                                        */
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
#define SPIM132_STALL_STATUS_TX_PRESENT 0            /*!< (unspecified)                                                        */
#define SPIM132_HSSPI 0                              /*!< (unspecified)                                                        */
#define SPIM132_HIGH_SPEED_DOMAIN 0                  /*!< (unspecified)                                                        */
#define SPIM132_MULTIPLE_CHIPSELECT 1                /*!< (unspecified)                                                        */
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
#define SPIM133_STALL_STATUS_TX_PRESENT 0            /*!< (unspecified)                                                        */
#define SPIM133_HSSPI 0                              /*!< (unspecified)                                                        */
#define SPIM133_HIGH_SPEED_DOMAIN 0                  /*!< (unspecified)                                                        */
#define SPIM133_MULTIPLE_CHIPSELECT 1                /*!< (unspecified)                                                        */
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

#define SPIM134_EASYDMA5 1                           /*!< (unspecified)                                                        */
#define SPIM134_EASYDMATEMP 0                        /*!< (unspecified)                                                        */
#define SPIM134_EASYDMALISTINCLUDED 1                /*!< (unspecified)                                                        */
#define SPIM134_EASYDMAMODEINCLUDED 0                /*!< (unspecified)                                                        */
#define SPIM134_EASYDMAFULLLPMODEINCLUDED 0          /*!< (unspecified)                                                        */
#define SPIM134_EASYDMAPATTERNMATCHERINCLUDED 1      /*!< (unspecified)                                                        */
#define SPIM134_EASYDMANUMMATCHCHANNELS_MIN 0        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIM134_EASYDMANUMMATCHCHANNELS_MAX 3        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIM134_EASYDMANUMMATCHCHANNELS_SIZE 4       /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIM134_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 1 /*!< (unspecified)                                                  */
#define SPIM134_EASYDMASTOPTASKINCLUDED 1            /*!< (unspecified)                                                        */
#define SPIM134_MAX_DATARATE 8                       /*!< (unspecified)                                                        */
#define SPIM134_EASYDMA_MAXCNT_MIN 0                 /*!< (unspecified)                                                        */
#define SPIM134_EASYDMA_MAXCNT_MAX 14                /*!< (unspecified)                                                        */
#define SPIM134_EASYDMA_MAXCNT_SIZE 15               /*!< (unspecified)                                                        */
#define SPIM134_FEATURE_HARDWARE_CSN_PRESENT 1       /*!< (unspecified)                                                        */
#define SPIM134_FEATURE_HARDWARE_DCX_PRESENT 1       /*!< (unspecified)                                                        */
#define SPIM134_FEATURE_RXDELAY_PRESENT 1            /*!< (unspecified)                                                        */
#define SPIM134_STALL_STATUS_PRESENT 0               /*!< (unspecified)                                                        */
#define SPIM134_STALL_STATUS_TX_PRESENT 0            /*!< (unspecified)                                                        */
#define SPIM134_HSSPI 0                              /*!< (unspecified)                                                        */
#define SPIM134_HIGH_SPEED_DOMAIN 0                  /*!< (unspecified)                                                        */
#define SPIM134_MULTIPLE_CHIPSELECT 1                /*!< (unspecified)                                                        */
#define SPIM134_NUM_CHIPSELECT_MIN 0                 /*!< Peripheral supports 0..0 chip select signals.                        */
#define SPIM134_NUM_CHIPSELECT_MAX 0                 /*!< Peripheral supports 0..0 chip select signals.                        */
#define SPIM134_NUM_CHIPSELECT_SIZE 1                /*!< Peripheral supports 0..0 chip select signals.                        */
#define SPIM134_CORE_FREQUENCY 16                    /*!< Peripheral core frequency is 16 MHz.                                 */
#define SPIM134_PRESCALER_PRESENT 1                  /*!< (unspecified)                                                        */
#define SPIM134_PRESCALER_DIVISOR_RANGE_MIN 2        /*!< (unspecified)                                                        */
#define SPIM134_PRESCALER_DIVISOR_RANGE_MAX 126      /*!< (unspecified)                                                        */
#define SPIM134_PRESCALER_DIVISOR_RANGE_SIZE 127     /*!< (unspecified)                                                        */
#define SPIM134_RXDELAY_VALUE_RANGE_MIN 0            /*!< (unspecified)                                                        */
#define SPIM134_RXDELAY_VALUE_RANGE_MAX 40           /*!< (unspecified)                                                        */
#define SPIM134_RXDELAY_VALUE_RANGE_SIZE 41          /*!< (unspecified)                                                        */
#define SPIM134_RXDELAY_RESET_VALUE 2                /*!< (unspecified)                                                        */
#define SPIM134_RXDELAY_FIELD_WIDTH_MIN 0            /*!< (unspecified)                                                        */
#define SPIM134_RXDELAY_FIELD_WIDTH_MAX 5            /*!< (unspecified)                                                        */
#define SPIM134_RXDELAY_FIELD_WIDTH_SIZE 6           /*!< (unspecified)                                                        */

#define SPIM135_EASYDMA5 1                           /*!< (unspecified)                                                        */
#define SPIM135_EASYDMATEMP 0                        /*!< (unspecified)                                                        */
#define SPIM135_EASYDMALISTINCLUDED 1                /*!< (unspecified)                                                        */
#define SPIM135_EASYDMAMODEINCLUDED 0                /*!< (unspecified)                                                        */
#define SPIM135_EASYDMAFULLLPMODEINCLUDED 0          /*!< (unspecified)                                                        */
#define SPIM135_EASYDMAPATTERNMATCHERINCLUDED 1      /*!< (unspecified)                                                        */
#define SPIM135_EASYDMANUMMATCHCHANNELS_MIN 0        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIM135_EASYDMANUMMATCHCHANNELS_MAX 3        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIM135_EASYDMANUMMATCHCHANNELS_SIZE 4       /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIM135_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 1 /*!< (unspecified)                                                  */
#define SPIM135_EASYDMASTOPTASKINCLUDED 1            /*!< (unspecified)                                                        */
#define SPIM135_MAX_DATARATE 8                       /*!< (unspecified)                                                        */
#define SPIM135_EASYDMA_MAXCNT_MIN 0                 /*!< (unspecified)                                                        */
#define SPIM135_EASYDMA_MAXCNT_MAX 14                /*!< (unspecified)                                                        */
#define SPIM135_EASYDMA_MAXCNT_SIZE 15               /*!< (unspecified)                                                        */
#define SPIM135_FEATURE_HARDWARE_CSN_PRESENT 1       /*!< (unspecified)                                                        */
#define SPIM135_FEATURE_HARDWARE_DCX_PRESENT 1       /*!< (unspecified)                                                        */
#define SPIM135_FEATURE_RXDELAY_PRESENT 1            /*!< (unspecified)                                                        */
#define SPIM135_STALL_STATUS_PRESENT 0               /*!< (unspecified)                                                        */
#define SPIM135_STALL_STATUS_TX_PRESENT 0            /*!< (unspecified)                                                        */
#define SPIM135_HSSPI 0                              /*!< (unspecified)                                                        */
#define SPIM135_HIGH_SPEED_DOMAIN 0                  /*!< (unspecified)                                                        */
#define SPIM135_MULTIPLE_CHIPSELECT 1                /*!< (unspecified)                                                        */
#define SPIM135_NUM_CHIPSELECT_MIN 0                 /*!< Peripheral supports 0..0 chip select signals.                        */
#define SPIM135_NUM_CHIPSELECT_MAX 0                 /*!< Peripheral supports 0..0 chip select signals.                        */
#define SPIM135_NUM_CHIPSELECT_SIZE 1                /*!< Peripheral supports 0..0 chip select signals.                        */
#define SPIM135_CORE_FREQUENCY 16                    /*!< Peripheral core frequency is 16 MHz.                                 */
#define SPIM135_PRESCALER_PRESENT 1                  /*!< (unspecified)                                                        */
#define SPIM135_PRESCALER_DIVISOR_RANGE_MIN 2        /*!< (unspecified)                                                        */
#define SPIM135_PRESCALER_DIVISOR_RANGE_MAX 126      /*!< (unspecified)                                                        */
#define SPIM135_PRESCALER_DIVISOR_RANGE_SIZE 127     /*!< (unspecified)                                                        */
#define SPIM135_RXDELAY_VALUE_RANGE_MIN 0            /*!< (unspecified)                                                        */
#define SPIM135_RXDELAY_VALUE_RANGE_MAX 40           /*!< (unspecified)                                                        */
#define SPIM135_RXDELAY_VALUE_RANGE_SIZE 41          /*!< (unspecified)                                                        */
#define SPIM135_RXDELAY_RESET_VALUE 2                /*!< (unspecified)                                                        */
#define SPIM135_RXDELAY_FIELD_WIDTH_MIN 0            /*!< (unspecified)                                                        */
#define SPIM135_RXDELAY_FIELD_WIDTH_MAX 5            /*!< (unspecified)                                                        */
#define SPIM135_RXDELAY_FIELD_WIDTH_SIZE 6           /*!< (unspecified)                                                        */

#define SPIM136_EASYDMA5 1                           /*!< (unspecified)                                                        */
#define SPIM136_EASYDMATEMP 0                        /*!< (unspecified)                                                        */
#define SPIM136_EASYDMALISTINCLUDED 1                /*!< (unspecified)                                                        */
#define SPIM136_EASYDMAMODEINCLUDED 0                /*!< (unspecified)                                                        */
#define SPIM136_EASYDMAFULLLPMODEINCLUDED 0          /*!< (unspecified)                                                        */
#define SPIM136_EASYDMAPATTERNMATCHERINCLUDED 1      /*!< (unspecified)                                                        */
#define SPIM136_EASYDMANUMMATCHCHANNELS_MIN 0        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIM136_EASYDMANUMMATCHCHANNELS_MAX 3        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIM136_EASYDMANUMMATCHCHANNELS_SIZE 4       /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIM136_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 1 /*!< (unspecified)                                                  */
#define SPIM136_EASYDMASTOPTASKINCLUDED 1            /*!< (unspecified)                                                        */
#define SPIM136_MAX_DATARATE 8                       /*!< (unspecified)                                                        */
#define SPIM136_EASYDMA_MAXCNT_MIN 0                 /*!< (unspecified)                                                        */
#define SPIM136_EASYDMA_MAXCNT_MAX 14                /*!< (unspecified)                                                        */
#define SPIM136_EASYDMA_MAXCNT_SIZE 15               /*!< (unspecified)                                                        */
#define SPIM136_FEATURE_HARDWARE_CSN_PRESENT 1       /*!< (unspecified)                                                        */
#define SPIM136_FEATURE_HARDWARE_DCX_PRESENT 1       /*!< (unspecified)                                                        */
#define SPIM136_FEATURE_RXDELAY_PRESENT 1            /*!< (unspecified)                                                        */
#define SPIM136_STALL_STATUS_PRESENT 0               /*!< (unspecified)                                                        */
#define SPIM136_STALL_STATUS_TX_PRESENT 0            /*!< (unspecified)                                                        */
#define SPIM136_HSSPI 0                              /*!< (unspecified)                                                        */
#define SPIM136_HIGH_SPEED_DOMAIN 0                  /*!< (unspecified)                                                        */
#define SPIM136_MULTIPLE_CHIPSELECT 1                /*!< (unspecified)                                                        */
#define SPIM136_NUM_CHIPSELECT_MIN 0                 /*!< Peripheral supports 0..0 chip select signals.                        */
#define SPIM136_NUM_CHIPSELECT_MAX 0                 /*!< Peripheral supports 0..0 chip select signals.                        */
#define SPIM136_NUM_CHIPSELECT_SIZE 1                /*!< Peripheral supports 0..0 chip select signals.                        */
#define SPIM136_CORE_FREQUENCY 16                    /*!< Peripheral core frequency is 16 MHz.                                 */
#define SPIM136_PRESCALER_PRESENT 1                  /*!< (unspecified)                                                        */
#define SPIM136_PRESCALER_DIVISOR_RANGE_MIN 2        /*!< (unspecified)                                                        */
#define SPIM136_PRESCALER_DIVISOR_RANGE_MAX 126      /*!< (unspecified)                                                        */
#define SPIM136_PRESCALER_DIVISOR_RANGE_SIZE 127     /*!< (unspecified)                                                        */
#define SPIM136_RXDELAY_VALUE_RANGE_MIN 0            /*!< (unspecified)                                                        */
#define SPIM136_RXDELAY_VALUE_RANGE_MAX 40           /*!< (unspecified)                                                        */
#define SPIM136_RXDELAY_VALUE_RANGE_SIZE 41          /*!< (unspecified)                                                        */
#define SPIM136_RXDELAY_RESET_VALUE 2                /*!< (unspecified)                                                        */
#define SPIM136_RXDELAY_FIELD_WIDTH_MIN 0            /*!< (unspecified)                                                        */
#define SPIM136_RXDELAY_FIELD_WIDTH_MAX 5            /*!< (unspecified)                                                        */
#define SPIM136_RXDELAY_FIELD_WIDTH_SIZE 6           /*!< (unspecified)                                                        */

#define SPIM137_EASYDMA5 1                           /*!< (unspecified)                                                        */
#define SPIM137_EASYDMATEMP 0                        /*!< (unspecified)                                                        */
#define SPIM137_EASYDMALISTINCLUDED 1                /*!< (unspecified)                                                        */
#define SPIM137_EASYDMAMODEINCLUDED 0                /*!< (unspecified)                                                        */
#define SPIM137_EASYDMAFULLLPMODEINCLUDED 0          /*!< (unspecified)                                                        */
#define SPIM137_EASYDMAPATTERNMATCHERINCLUDED 1      /*!< (unspecified)                                                        */
#define SPIM137_EASYDMANUMMATCHCHANNELS_MIN 0        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIM137_EASYDMANUMMATCHCHANNELS_MAX 3        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIM137_EASYDMANUMMATCHCHANNELS_SIZE 4       /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIM137_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 1 /*!< (unspecified)                                                  */
#define SPIM137_EASYDMASTOPTASKINCLUDED 1            /*!< (unspecified)                                                        */
#define SPIM137_MAX_DATARATE 8                       /*!< (unspecified)                                                        */
#define SPIM137_EASYDMA_MAXCNT_MIN 0                 /*!< (unspecified)                                                        */
#define SPIM137_EASYDMA_MAXCNT_MAX 14                /*!< (unspecified)                                                        */
#define SPIM137_EASYDMA_MAXCNT_SIZE 15               /*!< (unspecified)                                                        */
#define SPIM137_FEATURE_HARDWARE_CSN_PRESENT 1       /*!< (unspecified)                                                        */
#define SPIM137_FEATURE_HARDWARE_DCX_PRESENT 1       /*!< (unspecified)                                                        */
#define SPIM137_FEATURE_RXDELAY_PRESENT 1            /*!< (unspecified)                                                        */
#define SPIM137_STALL_STATUS_PRESENT 0               /*!< (unspecified)                                                        */
#define SPIM137_STALL_STATUS_TX_PRESENT 0            /*!< (unspecified)                                                        */
#define SPIM137_HSSPI 0                              /*!< (unspecified)                                                        */
#define SPIM137_HIGH_SPEED_DOMAIN 0                  /*!< (unspecified)                                                        */
#define SPIM137_MULTIPLE_CHIPSELECT 1                /*!< (unspecified)                                                        */
#define SPIM137_NUM_CHIPSELECT_MIN 0                 /*!< Peripheral supports 0..0 chip select signals.                        */
#define SPIM137_NUM_CHIPSELECT_MAX 0                 /*!< Peripheral supports 0..0 chip select signals.                        */
#define SPIM137_NUM_CHIPSELECT_SIZE 1                /*!< Peripheral supports 0..0 chip select signals.                        */
#define SPIM137_CORE_FREQUENCY 16                    /*!< Peripheral core frequency is 16 MHz.                                 */
#define SPIM137_PRESCALER_PRESENT 1                  /*!< (unspecified)                                                        */
#define SPIM137_PRESCALER_DIVISOR_RANGE_MIN 2        /*!< (unspecified)                                                        */
#define SPIM137_PRESCALER_DIVISOR_RANGE_MAX 126      /*!< (unspecified)                                                        */
#define SPIM137_PRESCALER_DIVISOR_RANGE_SIZE 127     /*!< (unspecified)                                                        */
#define SPIM137_RXDELAY_VALUE_RANGE_MIN 0            /*!< (unspecified)                                                        */
#define SPIM137_RXDELAY_VALUE_RANGE_MAX 40           /*!< (unspecified)                                                        */
#define SPIM137_RXDELAY_VALUE_RANGE_SIZE 41          /*!< (unspecified)                                                        */
#define SPIM137_RXDELAY_RESET_VALUE 2                /*!< (unspecified)                                                        */
#define SPIM137_RXDELAY_FIELD_WIDTH_MIN 0            /*!< (unspecified)                                                        */
#define SPIM137_RXDELAY_FIELD_WIDTH_MAX 5            /*!< (unspecified)                                                        */
#define SPIM137_RXDELAY_FIELD_WIDTH_SIZE 6           /*!< (unspecified)                                                        */

/*UART with EasyDMA*/
#define UARTE_PRESENT 1
#define UARTE_COUNT 9

#define UARTE120_EASYDMA_MAXCNT_MIN 0                /*!< (unspecified)                                                        */
#define UARTE120_EASYDMA_MAXCNT_MAX 14               /*!< (unspecified)                                                        */
#define UARTE120_EASYDMA_MAXCNT_SIZE 15              /*!< (unspecified)                                                        */
#define UARTE120_EASYDMA5 1                          /*!< (unspecified)                                                        */
#define UARTE120_EASYDMATEMP 0                       /*!< (unspecified)                                                        */
#define UARTE120_TIMEOUT_INTERRUPT 1                 /*!< (unspecified)                                                        */
#define UARTE120_CONFIGURABLE_DATA_FRAME_SIZE 1      /*!< (unspecified)                                                        */
#define UARTE120_CORE_FREQUENCY 320                  /*!< Peripheral clock frequency is 320 MHz.                               */
#define UARTE120_CORE_CLOCK_320 1                    /*!< (unspecified)                                                        */
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

#define UARTE134_EASYDMA_MAXCNT_MIN 0                /*!< (unspecified)                                                        */
#define UARTE134_EASYDMA_MAXCNT_MAX 14               /*!< (unspecified)                                                        */
#define UARTE134_EASYDMA_MAXCNT_SIZE 15              /*!< (unspecified)                                                        */
#define UARTE134_EASYDMA5 1                          /*!< (unspecified)                                                        */
#define UARTE134_EASYDMATEMP 0                       /*!< (unspecified)                                                        */
#define UARTE134_TIMEOUT_INTERRUPT 1                 /*!< (unspecified)                                                        */
#define UARTE134_CONFIGURABLE_DATA_FRAME_SIZE 1      /*!< (unspecified)                                                        */
#define UARTE134_CORE_FREQUENCY 16                   /*!< Peripheral clock frequency is 16 MHz.                                */
#define UARTE134_CORE_CLOCK_16 1                     /*!< (unspecified)                                                        */
#define UARTE134_SHORTS_ENDTX_STOPTX 1               /*!< (unspecified)                                                        */
#define UARTE134_EASYDMALISTINCLUDED 1               /*!< (unspecified)                                                        */
#define UARTE134_EASYDMAMODEINCLUDED 0               /*!< (unspecified)                                                        */
#define UARTE134_EASYDMAFULLLPMODEINCLUDED 0         /*!< (unspecified)                                                        */
#define UARTE134_EASYDMAPATTERNMATCHERINCLUDED 1     /*!< (unspecified)                                                        */
#define UARTE134_EASYDMANUMMATCHCHANNELS_MIN 0       /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define UARTE134_EASYDMANUMMATCHCHANNELS_MAX 3       /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define UARTE134_EASYDMANUMMATCHCHANNELS_SIZE 4      /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define UARTE134_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 1 /*!< (unspecified)                                                 */
#define UARTE134_EASYDMASTOPTASKINCLUDED 1           /*!< (unspecified)                                                        */

#define UARTE135_EASYDMA_MAXCNT_MIN 0                /*!< (unspecified)                                                        */
#define UARTE135_EASYDMA_MAXCNT_MAX 14               /*!< (unspecified)                                                        */
#define UARTE135_EASYDMA_MAXCNT_SIZE 15              /*!< (unspecified)                                                        */
#define UARTE135_EASYDMA5 1                          /*!< (unspecified)                                                        */
#define UARTE135_EASYDMATEMP 0                       /*!< (unspecified)                                                        */
#define UARTE135_TIMEOUT_INTERRUPT 1                 /*!< (unspecified)                                                        */
#define UARTE135_CONFIGURABLE_DATA_FRAME_SIZE 1      /*!< (unspecified)                                                        */
#define UARTE135_CORE_FREQUENCY 16                   /*!< Peripheral clock frequency is 16 MHz.                                */
#define UARTE135_CORE_CLOCK_16 1                     /*!< (unspecified)                                                        */
#define UARTE135_SHORTS_ENDTX_STOPTX 1               /*!< (unspecified)                                                        */
#define UARTE135_EASYDMALISTINCLUDED 1               /*!< (unspecified)                                                        */
#define UARTE135_EASYDMAMODEINCLUDED 0               /*!< (unspecified)                                                        */
#define UARTE135_EASYDMAFULLLPMODEINCLUDED 0         /*!< (unspecified)                                                        */
#define UARTE135_EASYDMAPATTERNMATCHERINCLUDED 1     /*!< (unspecified)                                                        */
#define UARTE135_EASYDMANUMMATCHCHANNELS_MIN 0       /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define UARTE135_EASYDMANUMMATCHCHANNELS_MAX 3       /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define UARTE135_EASYDMANUMMATCHCHANNELS_SIZE 4      /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define UARTE135_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 1 /*!< (unspecified)                                                 */
#define UARTE135_EASYDMASTOPTASKINCLUDED 1           /*!< (unspecified)                                                        */

#define UARTE136_EASYDMA_MAXCNT_MIN 0                /*!< (unspecified)                                                        */
#define UARTE136_EASYDMA_MAXCNT_MAX 14               /*!< (unspecified)                                                        */
#define UARTE136_EASYDMA_MAXCNT_SIZE 15              /*!< (unspecified)                                                        */
#define UARTE136_EASYDMA5 1                          /*!< (unspecified)                                                        */
#define UARTE136_EASYDMATEMP 0                       /*!< (unspecified)                                                        */
#define UARTE136_TIMEOUT_INTERRUPT 1                 /*!< (unspecified)                                                        */
#define UARTE136_CONFIGURABLE_DATA_FRAME_SIZE 1      /*!< (unspecified)                                                        */
#define UARTE136_CORE_FREQUENCY 16                   /*!< Peripheral clock frequency is 16 MHz.                                */
#define UARTE136_CORE_CLOCK_16 1                     /*!< (unspecified)                                                        */
#define UARTE136_SHORTS_ENDTX_STOPTX 1               /*!< (unspecified)                                                        */
#define UARTE136_EASYDMALISTINCLUDED 1               /*!< (unspecified)                                                        */
#define UARTE136_EASYDMAMODEINCLUDED 0               /*!< (unspecified)                                                        */
#define UARTE136_EASYDMAFULLLPMODEINCLUDED 0         /*!< (unspecified)                                                        */
#define UARTE136_EASYDMAPATTERNMATCHERINCLUDED 1     /*!< (unspecified)                                                        */
#define UARTE136_EASYDMANUMMATCHCHANNELS_MIN 0       /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define UARTE136_EASYDMANUMMATCHCHANNELS_MAX 3       /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define UARTE136_EASYDMANUMMATCHCHANNELS_SIZE 4      /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define UARTE136_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 1 /*!< (unspecified)                                                 */
#define UARTE136_EASYDMASTOPTASKINCLUDED 1           /*!< (unspecified)                                                        */

#define UARTE137_EASYDMA_MAXCNT_MIN 0                /*!< (unspecified)                                                        */
#define UARTE137_EASYDMA_MAXCNT_MAX 14               /*!< (unspecified)                                                        */
#define UARTE137_EASYDMA_MAXCNT_SIZE 15              /*!< (unspecified)                                                        */
#define UARTE137_EASYDMA5 1                          /*!< (unspecified)                                                        */
#define UARTE137_EASYDMATEMP 0                       /*!< (unspecified)                                                        */
#define UARTE137_TIMEOUT_INTERRUPT 1                 /*!< (unspecified)                                                        */
#define UARTE137_CONFIGURABLE_DATA_FRAME_SIZE 1      /*!< (unspecified)                                                        */
#define UARTE137_CORE_FREQUENCY 16                   /*!< Peripheral clock frequency is 16 MHz.                                */
#define UARTE137_CORE_CLOCK_16 1                     /*!< (unspecified)                                                        */
#define UARTE137_SHORTS_ENDTX_STOPTX 1               /*!< (unspecified)                                                        */
#define UARTE137_EASYDMALISTINCLUDED 1               /*!< (unspecified)                                                        */
#define UARTE137_EASYDMAMODEINCLUDED 0               /*!< (unspecified)                                                        */
#define UARTE137_EASYDMAFULLLPMODEINCLUDED 0         /*!< (unspecified)                                                        */
#define UARTE137_EASYDMAPATTERNMATCHERINCLUDED 1     /*!< (unspecified)                                                        */
#define UARTE137_EASYDMANUMMATCHCHANNELS_MIN 0       /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define UARTE137_EASYDMANUMMATCHCHANNELS_MAX 3       /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define UARTE137_EASYDMANUMMATCHCHANNELS_SIZE 4      /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define UARTE137_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 1 /*!< (unspecified)                                                 */
#define UARTE137_EASYDMASTOPTASKINCLUDED 1           /*!< (unspecified)                                                        */

/*I2C compatible Two-Wire Master Interface with EasyDMA*/
#define TWIM_PRESENT 1
#define TWIM_COUNT 9

#define TWIM120_EASYDMA5 1                           /*!< (unspecified)                                                        */
#define TWIM120_EASYDMATEMP 0                        /*!< (unspecified)                                                        */
#define TWIM120_EASYDMA_MAXCNT_MIN 0                 /*!< (unspecified)                                                        */
#define TWIM120_EASYDMA_MAXCNT_MAX 14                /*!< (unspecified)                                                        */
#define TWIM120_EASYDMA_MAXCNT_SIZE 15               /*!< (unspecified)                                                        */
#define TWIM120_EASYDMALISTINCLUDED 1                /*!< (unspecified)                                                        */
#define TWIM120_EASYDMAMODEINCLUDED 0                /*!< (unspecified)                                                        */
#define TWIM120_EASYDMAFULLLPMODEINCLUDED 0          /*!< (unspecified)                                                        */
#define TWIM120_EASYDMAPATTERNMATCHERINCLUDED 1      /*!< (unspecified)                                                        */
#define TWIM120_EASYDMANUMMATCHCHANNELS_MIN 0        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define TWIM120_EASYDMANUMMATCHCHANNELS_MAX 3        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define TWIM120_EASYDMANUMMATCHCHANNELS_SIZE 4       /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define TWIM120_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 1 /*!< (unspecified)                                                  */
#define TWIM120_EASYDMASTOPTASKINCLUDED 1            /*!< (unspecified)                                                        */

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

#define TWIM134_EASYDMA5 1                           /*!< (unspecified)                                                        */
#define TWIM134_EASYDMATEMP 0                        /*!< (unspecified)                                                        */
#define TWIM134_EASYDMA_MAXCNT_MIN 0                 /*!< (unspecified)                                                        */
#define TWIM134_EASYDMA_MAXCNT_MAX 14                /*!< (unspecified)                                                        */
#define TWIM134_EASYDMA_MAXCNT_SIZE 15               /*!< (unspecified)                                                        */
#define TWIM134_EASYDMALISTINCLUDED 1                /*!< (unspecified)                                                        */
#define TWIM134_EASYDMAMODEINCLUDED 0                /*!< (unspecified)                                                        */
#define TWIM134_EASYDMAFULLLPMODEINCLUDED 0          /*!< (unspecified)                                                        */
#define TWIM134_EASYDMAPATTERNMATCHERINCLUDED 1      /*!< (unspecified)                                                        */
#define TWIM134_EASYDMANUMMATCHCHANNELS_MIN 0        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define TWIM134_EASYDMANUMMATCHCHANNELS_MAX 3        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define TWIM134_EASYDMANUMMATCHCHANNELS_SIZE 4       /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define TWIM134_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 1 /*!< (unspecified)                                                  */
#define TWIM134_EASYDMASTOPTASKINCLUDED 1            /*!< (unspecified)                                                        */

#define TWIM135_EASYDMA5 1                           /*!< (unspecified)                                                        */
#define TWIM135_EASYDMATEMP 0                        /*!< (unspecified)                                                        */
#define TWIM135_EASYDMA_MAXCNT_MIN 0                 /*!< (unspecified)                                                        */
#define TWIM135_EASYDMA_MAXCNT_MAX 14                /*!< (unspecified)                                                        */
#define TWIM135_EASYDMA_MAXCNT_SIZE 15               /*!< (unspecified)                                                        */
#define TWIM135_EASYDMALISTINCLUDED 1                /*!< (unspecified)                                                        */
#define TWIM135_EASYDMAMODEINCLUDED 0                /*!< (unspecified)                                                        */
#define TWIM135_EASYDMAFULLLPMODEINCLUDED 0          /*!< (unspecified)                                                        */
#define TWIM135_EASYDMAPATTERNMATCHERINCLUDED 1      /*!< (unspecified)                                                        */
#define TWIM135_EASYDMANUMMATCHCHANNELS_MIN 0        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define TWIM135_EASYDMANUMMATCHCHANNELS_MAX 3        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define TWIM135_EASYDMANUMMATCHCHANNELS_SIZE 4       /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define TWIM135_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 1 /*!< (unspecified)                                                  */
#define TWIM135_EASYDMASTOPTASKINCLUDED 1            /*!< (unspecified)                                                        */

#define TWIM136_EASYDMA5 1                           /*!< (unspecified)                                                        */
#define TWIM136_EASYDMATEMP 0                        /*!< (unspecified)                                                        */
#define TWIM136_EASYDMA_MAXCNT_MIN 0                 /*!< (unspecified)                                                        */
#define TWIM136_EASYDMA_MAXCNT_MAX 14                /*!< (unspecified)                                                        */
#define TWIM136_EASYDMA_MAXCNT_SIZE 15               /*!< (unspecified)                                                        */
#define TWIM136_EASYDMALISTINCLUDED 1                /*!< (unspecified)                                                        */
#define TWIM136_EASYDMAMODEINCLUDED 0                /*!< (unspecified)                                                        */
#define TWIM136_EASYDMAFULLLPMODEINCLUDED 0          /*!< (unspecified)                                                        */
#define TWIM136_EASYDMAPATTERNMATCHERINCLUDED 1      /*!< (unspecified)                                                        */
#define TWIM136_EASYDMANUMMATCHCHANNELS_MIN 0        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define TWIM136_EASYDMANUMMATCHCHANNELS_MAX 3        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define TWIM136_EASYDMANUMMATCHCHANNELS_SIZE 4       /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define TWIM136_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 1 /*!< (unspecified)                                                  */
#define TWIM136_EASYDMASTOPTASKINCLUDED 1            /*!< (unspecified)                                                        */

#define TWIM137_EASYDMA5 1                           /*!< (unspecified)                                                        */
#define TWIM137_EASYDMATEMP 0                        /*!< (unspecified)                                                        */
#define TWIM137_EASYDMA_MAXCNT_MIN 0                 /*!< (unspecified)                                                        */
#define TWIM137_EASYDMA_MAXCNT_MAX 14                /*!< (unspecified)                                                        */
#define TWIM137_EASYDMA_MAXCNT_SIZE 15               /*!< (unspecified)                                                        */
#define TWIM137_EASYDMALISTINCLUDED 1                /*!< (unspecified)                                                        */
#define TWIM137_EASYDMAMODEINCLUDED 0                /*!< (unspecified)                                                        */
#define TWIM137_EASYDMAFULLLPMODEINCLUDED 0          /*!< (unspecified)                                                        */
#define TWIM137_EASYDMAPATTERNMATCHERINCLUDED 1      /*!< (unspecified)                                                        */
#define TWIM137_EASYDMANUMMATCHCHANNELS_MIN 0        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define TWIM137_EASYDMANUMMATCHCHANNELS_MAX 3        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define TWIM137_EASYDMANUMMATCHCHANNELS_SIZE 4       /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define TWIM137_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 1 /*!< (unspecified)                                                  */
#define TWIM137_EASYDMASTOPTASKINCLUDED 1            /*!< (unspecified)                                                        */

/*Real-time counter*/
#define RTC_PRESENT 1
#define RTC_COUNT 2

#define RTC130_CC_NUM_MIN 0                          /*!< (unspecified)                                                        */
#define RTC130_CC_NUM_MAX 3                          /*!< (unspecified)                                                        */
#define RTC130_CC_NUM_SIZE 4                         /*!< (unspecified)                                                        */
#define RTC130_BIT_WIDTH_MIN 0                       /*!< (unspecified)                                                        */
#define RTC130_BIT_WIDTH_MAX 23                      /*!< (unspecified)                                                        */
#define RTC130_BIT_WIDTH_SIZE 24                     /*!< (unspecified)                                                        */
#define RTC130_LFCLK_ENABLE 1                        /*!< (unspecified)                                                        */

#define RTC131_CC_NUM_MIN 0                          /*!< (unspecified)                                                        */
#define RTC131_CC_NUM_MAX 3                          /*!< (unspecified)                                                        */
#define RTC131_CC_NUM_SIZE 4                         /*!< (unspecified)                                                        */
#define RTC131_BIT_WIDTH_MIN 0                       /*!< (unspecified)                                                        */
#define RTC131_BIT_WIDTH_MAX 23                      /*!< (unspecified)                                                        */
#define RTC131_BIT_WIDTH_SIZE 24                     /*!< (unspecified)                                                        */
#define RTC131_LFCLK_ENABLE 1                        /*!< (unspecified)                                                        */

/*Event generator unit*/
#define EGU_PRESENT 1
#define EGU_COUNT 1

#define EGU130_PEND 0                                /*!< (unspecified)                                                        */
#define EGU130_CH_NUM_MIN 0                          /*!< (unspecified)                                                        */
#define EGU130_CH_NUM_MAX 7                          /*!< (unspecified)                                                        */
#define EGU130_CH_NUM_SIZE 8                         /*!< (unspecified)                                                        */

/*GPIO Port*/
#define GPIO_PRESENT 1
#define GPIO_COUNT 10

#define P0_CTRLSEL_MAP1 1                            /*!< (unspecified)                                                        */
#define P0_CTRLSEL_MAP2 0                            /*!< (unspecified)                                                        */
#define P0_CTRLSEL_MAP3 0                            /*!< (unspecified)                                                        */
#define P0_PIN_NUM_MIN 0                             /*!< (unspecified)                                                        */
#define P0_PIN_NUM_MAX 12                            /*!< (unspecified)                                                        */
#define P0_PIN_NUM_SIZE 13                           /*!< (unspecified)                                                        */
#define P0_FEATURE_PINS_PRESENT 0x00001FFFUL         /*!< (unspecified)                                                        */
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
#define P2_PIN_NUM_MAX 11                            /*!< (unspecified)                                                        */
#define P2_PIN_NUM_SIZE 12                           /*!< (unspecified)                                                        */
#define P2_FEATURE_PINS_PRESENT 0x00000FFFUL         /*!< (unspecified)                                                        */
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

#define P6_CTRLSEL_MAP1 1                            /*!< (unspecified)                                                        */
#define P6_CTRLSEL_MAP2 0                            /*!< (unspecified)                                                        */
#define P6_CTRLSEL_MAP3 0                            /*!< (unspecified)                                                        */
#define P6_PIN_NUM_MIN 0                             /*!< (unspecified)                                                        */
#define P6_PIN_NUM_MAX 13                            /*!< (unspecified)                                                        */
#define P6_PIN_NUM_SIZE 14                           /*!< (unspecified)                                                        */
#define P6_FEATURE_PINS_PRESENT 0x00003FFFUL         /*!< (unspecified)                                                        */
#define P6_DRIVECTRL 1                               /*!< (unspecified)                                                        */
#define P6_RETAIN 1                                  /*!< (unspecified)                                                        */
#define P6_PWRCTRL 0                                 /*!< (unspecified)                                                        */
#define P6_PWRCTRL_SEPARATE_REG 1                    /*!< (unspecified)                                                        */
#define P6_VSS_FLOAT_DFT 0                           /*!< (unspecified)                                                        */
#define P6_PIN_OWNER_SEC 0                           /*!< (unspecified)                                                        */
#define P6_WIFI_CORE_PRESENT 0                       /*!< (unspecified)                                                        */
#define P6_RETAIN_PER_PIN 1                          /*!< (unspecified)                                                        */
#define P6_CLOCKPIN 1                                /*!< (unspecified)                                                        */
#define P6_BIASCTRL 0                                /*!< (unspecified)                                                        */

#define P8_CTRLSEL_MAP1 1                            /*!< (unspecified)                                                        */
#define P8_CTRLSEL_MAP2 0                            /*!< (unspecified)                                                        */
#define P8_CTRLSEL_MAP3 0                            /*!< (unspecified)                                                        */
#define P8_PIN_NUM_MIN 0                             /*!< (unspecified)                                                        */
#define P8_PIN_NUM_MAX 4                             /*!< (unspecified)                                                        */
#define P8_PIN_NUM_SIZE 5                            /*!< (unspecified)                                                        */
#define P8_FEATURE_PINS_PRESENT 0x0000001FUL         /*!< (unspecified)                                                        */
#define P8_DRIVECTRL 1                               /*!< (unspecified)                                                        */
#define P8_RETAIN 1                                  /*!< (unspecified)                                                        */
#define P8_PWRCTRL 0                                 /*!< (unspecified)                                                        */
#define P8_PWRCTRL_SEPARATE_REG 1                    /*!< (unspecified)                                                        */
#define P8_VSS_FLOAT_DFT 0                           /*!< (unspecified)                                                        */
#define P8_PIN_OWNER_SEC 0                           /*!< (unspecified)                                                        */
#define P8_WIFI_CORE_PRESENT 0                       /*!< (unspecified)                                                        */
#define P8_RETAIN_PER_PIN 1                          /*!< (unspecified)                                                        */
#define P8_CLOCKPIN 1                                /*!< (unspecified)                                                        */
#define P8_BIASCTRL 0                                /*!< (unspecified)                                                        */

#define P9_CTRLSEL_MAP1 1                            /*!< (unspecified)                                                        */
#define P9_CTRLSEL_MAP2 0                            /*!< (unspecified)                                                        */
#define P9_CTRLSEL_MAP3 0                            /*!< (unspecified)                                                        */
#define P9_PIN_NUM_MIN 0                             /*!< (unspecified)                                                        */
#define P9_PIN_NUM_MAX 5                             /*!< (unspecified)                                                        */
#define P9_PIN_NUM_SIZE 6                            /*!< (unspecified)                                                        */
#define P9_FEATURE_PINS_PRESENT 0x0000003FUL         /*!< (unspecified)                                                        */
#define P9_DRIVECTRL 0                               /*!< (unspecified)                                                        */
#define P9_RETAIN 1                                  /*!< (unspecified)                                                        */
#define P9_PWRCTRL 1                                 /*!< (unspecified)                                                        */
#define P9_PWRCTRL_SEPARATE_REG 1                    /*!< (unspecified)                                                        */
#define P9_VSS_FLOAT_DFT 1                           /*!< (unspecified)                                                        */
#define P9_PIN_OWNER_SEC 0                           /*!< (unspecified)                                                        */
#define P9_WIFI_CORE_PRESENT 0                       /*!< (unspecified)                                                        */
#define P9_RETAIN_PER_PIN 1                          /*!< (unspecified)                                                        */
#define P9_CLOCKPIN 1                                /*!< (unspecified)                                                        */
#define P9_BIASCTRL 0                                /*!< (unspecified)                                                        */

#define P10_CTRLSEL_MAP1 1                           /*!< (unspecified)                                                        */
#define P10_CTRLSEL_MAP2 0                           /*!< (unspecified)                                                        */
#define P10_CTRLSEL_MAP3 0                           /*!< (unspecified)                                                        */
#define P10_PIN_NUM_MIN 0                            /*!< (unspecified)                                                        */
#define P10_PIN_NUM_MAX 7                            /*!< (unspecified)                                                        */
#define P10_PIN_NUM_SIZE 8                           /*!< (unspecified)                                                        */
#define P10_FEATURE_PINS_PRESENT 0x000000FFUL        /*!< (unspecified)                                                        */
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

#define P11_CTRLSEL_MAP1 1                           /*!< (unspecified)                                                        */
#define P11_CTRLSEL_MAP2 0                           /*!< (unspecified)                                                        */
#define P11_CTRLSEL_MAP3 0                           /*!< (unspecified)                                                        */
#define P11_PIN_NUM_MIN 0                            /*!< (unspecified)                                                        */
#define P11_PIN_NUM_MAX 7                            /*!< (unspecified)                                                        */
#define P11_PIN_NUM_SIZE 8                           /*!< (unspecified)                                                        */
#define P11_FEATURE_PINS_PRESENT 0x000000FFUL        /*!< (unspecified)                                                        */
#define P11_DRIVECTRL 0                              /*!< (unspecified)                                                        */
#define P11_RETAIN 1                                 /*!< (unspecified)                                                        */
#define P11_PWRCTRL 0                                /*!< (unspecified)                                                        */
#define P11_PWRCTRL_SEPARATE_REG 1                   /*!< (unspecified)                                                        */
#define P11_VSS_FLOAT_DFT 0                          /*!< (unspecified)                                                        */
#define P11_PIN_OWNER_SEC 0                          /*!< (unspecified)                                                        */
#define P11_WIFI_CORE_PRESENT 0                      /*!< (unspecified)                                                        */
#define P11_RETAIN_PER_PIN 1                         /*!< (unspecified)                                                        */
#define P11_CLOCKPIN 1                               /*!< (unspecified)                                                        */
#define P11_BIASCTRL 0                               /*!< (unspecified)                                                        */

#define P12_CTRLSEL_MAP1 1                           /*!< (unspecified)                                                        */
#define P12_CTRLSEL_MAP2 0                           /*!< (unspecified)                                                        */
#define P12_CTRLSEL_MAP3 0                           /*!< (unspecified)                                                        */
#define P12_PIN_NUM_MIN 0                            /*!< (unspecified)                                                        */
#define P12_PIN_NUM_MAX 2                            /*!< (unspecified)                                                        */
#define P12_PIN_NUM_SIZE 3                           /*!< (unspecified)                                                        */
#define P12_FEATURE_PINS_PRESENT 0x00000007UL        /*!< (unspecified)                                                        */
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

#define P13_CTRLSEL_MAP1 1                           /*!< (unspecified)                                                        */
#define P13_CTRLSEL_MAP2 0                           /*!< (unspecified)                                                        */
#define P13_CTRLSEL_MAP3 0                           /*!< (unspecified)                                                        */
#define P13_PIN_NUM_MIN 0                            /*!< (unspecified)                                                        */
#define P13_PIN_NUM_MAX 3                            /*!< (unspecified)                                                        */
#define P13_PIN_NUM_SIZE 4                           /*!< (unspecified)                                                        */
#define P13_FEATURE_PINS_PRESENT 0x0000000FUL        /*!< (unspecified)                                                        */
#define P13_DRIVECTRL 0                              /*!< (unspecified)                                                        */
#define P13_RETAIN 1                                 /*!< (unspecified)                                                        */
#define P13_PWRCTRL 0                                /*!< (unspecified)                                                        */
#define P13_PWRCTRL_SEPARATE_REG 1                   /*!< (unspecified)                                                        */
#define P13_VSS_FLOAT_DFT 0                          /*!< (unspecified)                                                        */
#define P13_PIN_OWNER_SEC 0                          /*!< (unspecified)                                                        */
#define P13_WIFI_CORE_PRESENT 0                      /*!< (unspecified)                                                        */
#define P13_RETAIN_PER_PIN 1                         /*!< (unspecified)                                                        */
#define P13_CLOCKPIN 1                               /*!< (unspecified)                                                        */
#define P13_BIASCTRL 0                               /*!< (unspecified)                                                        */

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

/*VREGUSB peripheral*/
#define VREGUSB_PRESENT 1
#define VREGUSB_COUNT 1

#define VREGUSB_PROLONGED_WAKEUP 1                   /*!< (unspecified)                                                        */

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

/*Comparator*/
#define COMP_PRESENT 1
#define COMP_COUNT 1

#define COMP_GF22N 1                                 /*!< (unspecified)                                                        */
#define COMP_TSMC22N 0                               /*!< (unspecified)                                                        */

/*Low-power comparator*/
#define LPCOMP_PRESENT 1
#define LPCOMP_COUNT 1

#define LPCOMP_GF22N 1                               /*!< (unspecified)                                                        */
#define LPCOMP_TSMC22N 0                             /*!< (unspecified)                                                        */
#define LPCOMP_RETAIN 1                              /*!< (unspecified)                                                        */
#define LPCOMP_POWER 0                               /*!< (unspecified)                                                        */

/*Temperature Sensor*/
#define TEMP_PRESENT 1
#define TEMP_COUNT 1

#define TEMP_HAS_ATBCONFIG 1                         /*!< (unspecified)                                                        */
#define TEMP_HAS_OVERRIDEPWR 0                       /*!< (unspecified)                                                        */

/*Time division multiplexed audio interface*/
#define TDM_PRESENT 1
#define TDM_COUNT 2

#define TDM130_EASYDMA5 1                            /*!< (unspecified)                                                        */
#define TDM130_EASYDMATEMP 0                         /*!< (unspecified)                                                        */
#define TDM130_NUM_CHANNELS_MIN 0                    /*!< (unspecified)                                                        */
#define TDM130_NUM_CHANNELS_MAX 7                    /*!< (unspecified)                                                        */
#define TDM130_NUM_CHANNELS_SIZE 8                   /*!< (unspecified)                                                        */
#define TDM130_TDM_NUM_CLOCK_POWER_PAIR_MIN 0        /*!< Number of clock/power pairs used by TDM instance of PCGC Slave -
                                                          [0..3]*/
#define TDM130_TDM_NUM_CLOCK_POWER_PAIR_MAX 3        /*!< Number of clock/power pairs used by TDM instance of PCGC Slave -
                                                          [0..3]*/
#define TDM130_TDM_NUM_CLOCK_POWER_PAIR_SIZE 4       /*!< Number of clock/power pairs used by TDM instance of PCGC Slave -
                                                          [0..3]*/
#define TDM130_TDM_NOTFULLPCPZERO 1                  /*!< (unspecified)                                                        */
#define TDM130_BRGMCK_NUM_CLOCK_POWER_PAIR_MIN 0     /*!< Number of clock/power pairs used by BRGMCK instance of PCGC Slave -
                                                          [brgmck_numpcp]*/
#define TDM130_BRGMCK_NUM_CLOCK_POWER_PAIR_MAX 2     /*!< Number of clock/power pairs used by BRGMCK instance of PCGC Slave -
                                                          [brgmck_numpcp]*/
#define TDM130_BRGMCK_NUM_CLOCK_POWER_PAIR_SIZE 3    /*!< Number of clock/power pairs used by BRGMCK instance of PCGC Slave -
                                                          [brgmck_numpcp]*/
#define TDM130_BRGMCK_NOTFULLPCPZERO 1               /*!< (unspecified)                                                        */
#define TDM130_BRGSCK_NUM_CLOCK_POWER_PAIR_MIN 0     /*!< Number of clock/power pairs used by BRGSCK instance of PCGC Slave -
                                                          [brgsck_numpcp]*/
#define TDM130_BRGSCK_NUM_CLOCK_POWER_PAIR_MAX 2     /*!< Number of clock/power pairs used by BRGSCK instance of PCGC Slave -
                                                          [brgsck_numpcp]*/
#define TDM130_BRGSCK_NUM_CLOCK_POWER_PAIR_SIZE 3    /*!< Number of clock/power pairs used by BRGSCK instance of PCGC Slave -
                                                          [brgsck_numpcp]*/
#define TDM130_BRGSCK_NOTFULLPCPZERO 1               /*!< (unspecified)                                                        */
#define TDM130_DMARX_NUM_CLOCK_POWER_PAIR_MIN 0      /*!< Number of clock/power pairs used by DMARX instance of PCGC Slave -
                                                          [dmarx_numpcp]*/
#define TDM130_DMARX_NUM_CLOCK_POWER_PAIR_MAX 1      /*!< Number of clock/power pairs used by DMARX instance of PCGC Slave -
                                                          [dmarx_numpcp]*/
#define TDM130_DMARX_NUM_CLOCK_POWER_PAIR_SIZE 2     /*!< Number of clock/power pairs used by DMARX instance of PCGC Slave -
                                                          [dmarx_numpcp]*/
#define TDM130_DMARX_NOTFULLPCPZERO 1                /*!< (unspecified)                                                        */
#define TDM130_DMATX_NUM_CLOCK_POWER_PAIR_MIN 0      /*!< Number of clock/power pairs used by DMATX instance of PCGC Slave -
                                                          [dmatx_numpcp]*/
#define TDM130_DMATX_NUM_CLOCK_POWER_PAIR_MAX 1      /*!< Number of clock/power pairs used by DMATX instance of PCGC Slave -
                                                          [dmatx_numpcp]*/
#define TDM130_DMATX_NUM_CLOCK_POWER_PAIR_SIZE 2     /*!< Number of clock/power pairs used by DMATX instance of PCGC Slave -
                                                          [dmatx_numpcp]*/
#define TDM130_DMATX_NOTFULLPCPZERO 1                /*!< (unspecified)                                                        */
#define TDM130_EASYDMALISTINCLUDED 0                 /*!< (unspecified)                                                        */
#define TDM130_EASYDMAMODEINCLUDED 1                 /*!< (unspecified)                                                        */
#define TDM130_EASYDMAFULLLPMODEINCLUDED 0           /*!< (unspecified)                                                        */
#define TDM130_EASYDMAPATTERNMATCHERINCLUDED 0       /*!< (unspecified)                                                        */
#define TDM130_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 1 /*!< (unspecified)                                                   */
#define TDM130_EASYDMASTOPTASKINCLUDED 1             /*!< (unspecified)                                                        */

#define TDM131_EASYDMA5 1                            /*!< (unspecified)                                                        */
#define TDM131_EASYDMATEMP 0                         /*!< (unspecified)                                                        */
#define TDM131_NUM_CHANNELS_MIN 0                    /*!< (unspecified)                                                        */
#define TDM131_NUM_CHANNELS_MAX 7                    /*!< (unspecified)                                                        */
#define TDM131_NUM_CHANNELS_SIZE 8                   /*!< (unspecified)                                                        */
#define TDM131_TDM_NUM_CLOCK_POWER_PAIR_MIN 0        /*!< Number of clock/power pairs used by TDM instance of PCGC Slave -
                                                          [0..3]*/
#define TDM131_TDM_NUM_CLOCK_POWER_PAIR_MAX 3        /*!< Number of clock/power pairs used by TDM instance of PCGC Slave -
                                                          [0..3]*/
#define TDM131_TDM_NUM_CLOCK_POWER_PAIR_SIZE 4       /*!< Number of clock/power pairs used by TDM instance of PCGC Slave -
                                                          [0..3]*/
#define TDM131_TDM_NOTFULLPCPZERO 1                  /*!< (unspecified)                                                        */
#define TDM131_BRGMCK_NUM_CLOCK_POWER_PAIR_MIN 0     /*!< Number of clock/power pairs used by BRGMCK instance of PCGC Slave -
                                                          [brgmck_numpcp]*/
#define TDM131_BRGMCK_NUM_CLOCK_POWER_PAIR_MAX 2     /*!< Number of clock/power pairs used by BRGMCK instance of PCGC Slave -
                                                          [brgmck_numpcp]*/
#define TDM131_BRGMCK_NUM_CLOCK_POWER_PAIR_SIZE 3    /*!< Number of clock/power pairs used by BRGMCK instance of PCGC Slave -
                                                          [brgmck_numpcp]*/
#define TDM131_BRGMCK_NOTFULLPCPZERO 1               /*!< (unspecified)                                                        */
#define TDM131_BRGSCK_NUM_CLOCK_POWER_PAIR_MIN 0     /*!< Number of clock/power pairs used by BRGSCK instance of PCGC Slave -
                                                          [brgsck_numpcp]*/
#define TDM131_BRGSCK_NUM_CLOCK_POWER_PAIR_MAX 2     /*!< Number of clock/power pairs used by BRGSCK instance of PCGC Slave -
                                                          [brgsck_numpcp]*/
#define TDM131_BRGSCK_NUM_CLOCK_POWER_PAIR_SIZE 3    /*!< Number of clock/power pairs used by BRGSCK instance of PCGC Slave -
                                                          [brgsck_numpcp]*/
#define TDM131_BRGSCK_NOTFULLPCPZERO 1               /*!< (unspecified)                                                        */
#define TDM131_DMARX_NUM_CLOCK_POWER_PAIR_MIN 0      /*!< Number of clock/power pairs used by DMARX instance of PCGC Slave -
                                                          [dmarx_numpcp]*/
#define TDM131_DMARX_NUM_CLOCK_POWER_PAIR_MAX 1      /*!< Number of clock/power pairs used by DMARX instance of PCGC Slave -
                                                          [dmarx_numpcp]*/
#define TDM131_DMARX_NUM_CLOCK_POWER_PAIR_SIZE 2     /*!< Number of clock/power pairs used by DMARX instance of PCGC Slave -
                                                          [dmarx_numpcp]*/
#define TDM131_DMARX_NOTFULLPCPZERO 1                /*!< (unspecified)                                                        */
#define TDM131_DMATX_NUM_CLOCK_POWER_PAIR_MIN 0      /*!< Number of clock/power pairs used by DMATX instance of PCGC Slave -
                                                          [dmatx_numpcp]*/
#define TDM131_DMATX_NUM_CLOCK_POWER_PAIR_MAX 1      /*!< Number of clock/power pairs used by DMATX instance of PCGC Slave -
                                                          [dmatx_numpcp]*/
#define TDM131_DMATX_NUM_CLOCK_POWER_PAIR_SIZE 2     /*!< Number of clock/power pairs used by DMATX instance of PCGC Slave -
                                                          [dmatx_numpcp]*/
#define TDM131_DMATX_NOTFULLPCPZERO 1                /*!< (unspecified)                                                        */
#define TDM131_EASYDMALISTINCLUDED 0                 /*!< (unspecified)                                                        */
#define TDM131_EASYDMAMODEINCLUDED 1                 /*!< (unspecified)                                                        */
#define TDM131_EASYDMAFULLLPMODEINCLUDED 0           /*!< (unspecified)                                                        */
#define TDM131_EASYDMAPATTERNMATCHERINCLUDED 0       /*!< (unspecified)                                                        */
#define TDM131_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 1 /*!< (unspecified)                                                   */
#define TDM131_EASYDMASTOPTASKINCLUDED 1             /*!< (unspecified)                                                        */

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

/*Quadrature Decoder*/
#define QDEC_PRESENT 1
#define QDEC_COUNT 2

#define QDEC130_LEGACYPSEL 0                         /*!< (unspecified)                                                        */

#define QDEC131_LEGACYPSEL 0                         /*!< (unspecified)                                                        */

/*SIM card interface*/
#define SIMIF_PRESENT 1
#define SIMIF_COUNT 2

#define SIMIF130_SWOVERRIDE_REGS 1                   /*!< (unspecified)                                                        */

#define SIMIF131_SWOVERRIDE_REGS 1                   /*!< (unspecified)                                                        */

/*MipiRffe Master*/
#define MIPIRFFE_PRESENT 1
#define MIPIRFFE_COUNT 1

/*I2C compatible Two-Wire Slave Interface with EasyDMA*/
#define TWIS_PRESENT 1
#define TWIS_COUNT 8

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

#define TWIS134_EASYDMA5 1                           /*!< (unspecified)                                                        */
#define TWIS134_EASYDMATEMP 0                        /*!< (unspecified)                                                        */
#define TWIS134_EASYDMA_MAXCNT_MIN 0                 /*!< (unspecified)                                                        */
#define TWIS134_EASYDMA_MAXCNT_MAX 14                /*!< (unspecified)                                                        */
#define TWIS134_EASYDMA_MAXCNT_SIZE 15               /*!< (unspecified)                                                        */
#define TWIS134_EASYDMALISTINCLUDED 1                /*!< (unspecified)                                                        */
#define TWIS134_EASYDMAMODEINCLUDED 0                /*!< (unspecified)                                                        */
#define TWIS134_EASYDMAFULLLPMODEINCLUDED 0          /*!< (unspecified)                                                        */
#define TWIS134_EASYDMAPATTERNMATCHERINCLUDED 1      /*!< (unspecified)                                                        */
#define TWIS134_EASYDMANUMMATCHCHANNELS_MIN 0        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define TWIS134_EASYDMANUMMATCHCHANNELS_MAX 3        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define TWIS134_EASYDMANUMMATCHCHANNELS_SIZE 4       /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define TWIS134_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 1 /*!< (unspecified)                                                  */
#define TWIS134_EASYDMASTOPTASKINCLUDED 1            /*!< (unspecified)                                                        */

#define TWIS135_EASYDMA5 1                           /*!< (unspecified)                                                        */
#define TWIS135_EASYDMATEMP 0                        /*!< (unspecified)                                                        */
#define TWIS135_EASYDMA_MAXCNT_MIN 0                 /*!< (unspecified)                                                        */
#define TWIS135_EASYDMA_MAXCNT_MAX 14                /*!< (unspecified)                                                        */
#define TWIS135_EASYDMA_MAXCNT_SIZE 15               /*!< (unspecified)                                                        */
#define TWIS135_EASYDMALISTINCLUDED 1                /*!< (unspecified)                                                        */
#define TWIS135_EASYDMAMODEINCLUDED 0                /*!< (unspecified)                                                        */
#define TWIS135_EASYDMAFULLLPMODEINCLUDED 0          /*!< (unspecified)                                                        */
#define TWIS135_EASYDMAPATTERNMATCHERINCLUDED 1      /*!< (unspecified)                                                        */
#define TWIS135_EASYDMANUMMATCHCHANNELS_MIN 0        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define TWIS135_EASYDMANUMMATCHCHANNELS_MAX 3        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define TWIS135_EASYDMANUMMATCHCHANNELS_SIZE 4       /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define TWIS135_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 1 /*!< (unspecified)                                                  */
#define TWIS135_EASYDMASTOPTASKINCLUDED 1            /*!< (unspecified)                                                        */

#define TWIS136_EASYDMA5 1                           /*!< (unspecified)                                                        */
#define TWIS136_EASYDMATEMP 0                        /*!< (unspecified)                                                        */
#define TWIS136_EASYDMA_MAXCNT_MIN 0                 /*!< (unspecified)                                                        */
#define TWIS136_EASYDMA_MAXCNT_MAX 14                /*!< (unspecified)                                                        */
#define TWIS136_EASYDMA_MAXCNT_SIZE 15               /*!< (unspecified)                                                        */
#define TWIS136_EASYDMALISTINCLUDED 1                /*!< (unspecified)                                                        */
#define TWIS136_EASYDMAMODEINCLUDED 0                /*!< (unspecified)                                                        */
#define TWIS136_EASYDMAFULLLPMODEINCLUDED 0          /*!< (unspecified)                                                        */
#define TWIS136_EASYDMAPATTERNMATCHERINCLUDED 1      /*!< (unspecified)                                                        */
#define TWIS136_EASYDMANUMMATCHCHANNELS_MIN 0        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define TWIS136_EASYDMANUMMATCHCHANNELS_MAX 3        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define TWIS136_EASYDMANUMMATCHCHANNELS_SIZE 4       /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define TWIS136_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 1 /*!< (unspecified)                                                  */
#define TWIS136_EASYDMASTOPTASKINCLUDED 1            /*!< (unspecified)                                                        */

#define TWIS137_EASYDMA5 1                           /*!< (unspecified)                                                        */
#define TWIS137_EASYDMATEMP 0                        /*!< (unspecified)                                                        */
#define TWIS137_EASYDMA_MAXCNT_MIN 0                 /*!< (unspecified)                                                        */
#define TWIS137_EASYDMA_MAXCNT_MAX 14                /*!< (unspecified)                                                        */
#define TWIS137_EASYDMA_MAXCNT_SIZE 15               /*!< (unspecified)                                                        */
#define TWIS137_EASYDMALISTINCLUDED 1                /*!< (unspecified)                                                        */
#define TWIS137_EASYDMAMODEINCLUDED 0                /*!< (unspecified)                                                        */
#define TWIS137_EASYDMAFULLLPMODEINCLUDED 0          /*!< (unspecified)                                                        */
#define TWIS137_EASYDMAPATTERNMATCHERINCLUDED 1      /*!< (unspecified)                                                        */
#define TWIS137_EASYDMANUMMATCHCHANNELS_MIN 0        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define TWIS137_EASYDMANUMMATCHCHANNELS_MAX 3        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define TWIS137_EASYDMANUMMATCHCHANNELS_SIZE 4       /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define TWIS137_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 1 /*!< (unspecified)                                                  */
#define TWIS137_EASYDMASTOPTASKINCLUDED 1            /*!< (unspecified)                                                        */

/* ============================================= SPU010 Split Security Features ============================================== */
/**
  * @brief Indexes in SPU010.FEATURES controlling access permissions of features with split security
  */
typedef enum {
  NRF_SECURE_SPU010_FEATURES_IPCT_CH_0       = 0,    /*!< Index of access permissions for channel 0 of IPCT                    */
  NRF_SECURE_SPU010_FEATURES_IPCT_CH_1       = 1,    /*!< Index of access permissions for channel 1 of IPCT                    */
  NRF_SECURE_SPU010_FEATURES_IPCT_CH_2       = 2,    /*!< Index of access permissions for channel 2 of IPCT                    */
  NRF_SECURE_SPU010_FEATURES_IPCT_CH_3       = 3,    /*!< Index of access permissions for channel 3 of IPCT                    */
  NRF_SECURE_SPU010_FEATURES_IPCT_INTERRUPT_0 = 24,  /*!< Index of access permissions for interrupt 0 of IPCT                  */
  NRF_SECURE_SPU010_FEATURES_IPCT_INTERRUPT_1 = 25,  /*!< Index of access permissions for interrupt 1 of IPCT                  */
} NRF_SECURE_SPU010_FEATURES_ENUM_t;

/* ============================================= SPU111 Split Security Features ============================================== */
/**
  * @brief Indexes in SPU111.FEATURES controlling access permissions of features with split security
  */
typedef enum {
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_SECURE_TASKS_0 = 48, /*!< Index of access permissions for task pair [1:0] of BELLBOARD  */
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_SECURE_TASKS_1 = 49, /*!< Index of access permissions for task pair [3:2] of BELLBOARD  */
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_SECURE_TASKS_2 = 50, /*!< Index of access permissions for task pair [5:4] of BELLBOARD  */
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_SECURE_TASKS_3 = 51, /*!< Index of access permissions for task pair [7:6] of BELLBOARD  */
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_SECURE_TASKS_4 = 52, /*!< Index of access permissions for task pair [9:8] of BELLBOARD  */
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_SECURE_TASKS_5 = 53, /*!< Index of access permissions for task pair [11:10] of BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_SECURE_TASKS_6 = 54, /*!< Index of access permissions for task pair [13:12] of BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_SECURE_TASKS_7 = 55, /*!< Index of access permissions for task pair [15:14] of BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_SECURE_TASKS_8 = 56, /*!< Index of access permissions for task pair [17:16] of BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_SECURE_TASKS_9 = 57, /*!< Index of access permissions for task pair [19:18] of BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_SECURE_TASKS_10 = 58, /*!< Index of access permissions for task pair [21:20] of
                                                                  BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_SECURE_TASKS_11 = 59, /*!< Index of access permissions for task pair [23:22] of
                                                                  BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_SECURE_TASKS_12 = 60, /*!< Index of access permissions for task pair [25:24] of
                                                                  BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_SECURE_TASKS_13 = 61, /*!< Index of access permissions for task pair [27:26] of
                                                                  BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_SECURE_TASKS_14 = 62, /*!< Index of access permissions for task pair [29:28] of
                                                                  BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_SECURE_TASKS_15 = 63, /*!< Index of access permissions for task pair [31:30] of
                                                                  BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_SECURE_EVENTS_0 = 64, /*!< Index of access permissions for event pair [1:0] of BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_SECURE_EVENTS_1 = 65, /*!< Index of access permissions for event pair [3:2] of BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_SECURE_EVENTS_2 = 66, /*!< Index of access permissions for event pair [5:4] of BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_SECURE_EVENTS_3 = 67, /*!< Index of access permissions for event pair [7:6] of BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_SECURE_EVENTS_4 = 68, /*!< Index of access permissions for event pair [9:8] of BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_SECURE_EVENTS_5 = 69, /*!< Index of access permissions for event pair [11:10] of
                                                                  BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_SECURE_EVENTS_6 = 70, /*!< Index of access permissions for event pair [13:12] of
                                                                  BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_SECURE_EVENTS_7 = 71, /*!< Index of access permissions for event pair [15:14] of
                                                                  BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_SECURE_EVENTS_8 = 72, /*!< Index of access permissions for event pair [17:16] of
                                                                  BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_SECURE_EVENTS_9 = 73, /*!< Index of access permissions for event pair [19:18] of
                                                                  BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_SECURE_EVENTS_10 = 74, /*!< Index of access permissions for event pair [21:20] of
                                                                   BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_SECURE_EVENTS_11 = 75, /*!< Index of access permissions for event pair [23:22] of
                                                                   BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_SECURE_EVENTS_12 = 76, /*!< Index of access permissions for event pair [25:24] of
                                                                   BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_SECURE_EVENTS_13 = 77, /*!< Index of access permissions for event pair [27:26] of
                                                                   BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_SECURE_EVENTS_14 = 78, /*!< Index of access permissions for event pair [29:28] of
                                                                   BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_SECURE_EVENTS_15 = 79, /*!< Index of access permissions for event pair [31:30] of
                                                                   BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_SECURE_INTERRUPT_0 = 80, /*!< Index of access permissions for interrupt 0 of BELLBOARD  */
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_SECURE_INTERRUPT_1 = 81, /*!< Index of access permissions for interrupt 1 of BELLBOARD  */
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_SECURE_INTERRUPT_2 = 82, /*!< Index of access permissions for interrupt 2 of BELLBOARD  */
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_SECURE_INTERRUPT_3 = 83, /*!< Index of access permissions for interrupt 3 of BELLBOARD  */
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_APPLICATION_TASKS_0 = 96, /*!< Index of access permissions for task pair [1:0] of
                                                                      BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_APPLICATION_TASKS_1 = 97, /*!< Index of access permissions for task pair [3:2] of
                                                                      BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_APPLICATION_TASKS_2 = 98, /*!< Index of access permissions for task pair [5:4] of
                                                                      BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_APPLICATION_TASKS_3 = 99, /*!< Index of access permissions for task pair [7:6] of
                                                                      BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_APPLICATION_TASKS_4 = 100, /*!< Index of access permissions for task pair [9:8] of
                                                                       BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_APPLICATION_TASKS_5 = 101, /*!< Index of access permissions for task pair [11:10] of
                                                                       BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_APPLICATION_TASKS_6 = 102, /*!< Index of access permissions for task pair [13:12] of
                                                                       BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_APPLICATION_TASKS_7 = 103, /*!< Index of access permissions for task pair [15:14] of
                                                                       BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_APPLICATION_TASKS_8 = 104, /*!< Index of access permissions for task pair [17:16] of
                                                                       BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_APPLICATION_TASKS_9 = 105, /*!< Index of access permissions for task pair [19:18] of
                                                                       BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_APPLICATION_TASKS_10 = 106, /*!< Index of access permissions for task pair [21:20] of
                                                                        BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_APPLICATION_TASKS_11 = 107, /*!< Index of access permissions for task pair [23:22] of
                                                                        BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_APPLICATION_TASKS_12 = 108, /*!< Index of access permissions for task pair [25:24] of
                                                                        BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_APPLICATION_TASKS_13 = 109, /*!< Index of access permissions for task pair [27:26] of
                                                                        BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_APPLICATION_TASKS_14 = 110, /*!< Index of access permissions for task pair [29:28] of
                                                                        BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_APPLICATION_TASKS_15 = 111, /*!< Index of access permissions for task pair [31:30] of
                                                                        BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_APPLICATION_EVENTS_0 = 112, /*!< Index of access permissions for event pair [1:0] of
                                                                        BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_APPLICATION_EVENTS_1 = 113, /*!< Index of access permissions for event pair [3:2] of
                                                                        BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_APPLICATION_EVENTS_2 = 114, /*!< Index of access permissions for event pair [5:4] of
                                                                        BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_APPLICATION_EVENTS_3 = 115, /*!< Index of access permissions for event pair [7:6] of
                                                                        BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_APPLICATION_EVENTS_4 = 116, /*!< Index of access permissions for event pair [9:8] of
                                                                        BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_APPLICATION_EVENTS_5 = 117, /*!< Index of access permissions for event pair [11:10] of
                                                                        BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_APPLICATION_EVENTS_6 = 118, /*!< Index of access permissions for event pair [13:12] of
                                                                        BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_APPLICATION_EVENTS_7 = 119, /*!< Index of access permissions for event pair [15:14] of
                                                                        BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_APPLICATION_EVENTS_8 = 120, /*!< Index of access permissions for event pair [17:16] of
                                                                        BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_APPLICATION_EVENTS_9 = 121, /*!< Index of access permissions for event pair [19:18] of
                                                                        BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_APPLICATION_EVENTS_10 = 122, /*!< Index of access permissions for event pair [21:20] of
                                                                         BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_APPLICATION_EVENTS_11 = 123, /*!< Index of access permissions for event pair [23:22] of
                                                                         BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_APPLICATION_EVENTS_12 = 124, /*!< Index of access permissions for event pair [25:24] of
                                                                         BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_APPLICATION_EVENTS_13 = 125, /*!< Index of access permissions for event pair [27:26] of
                                                                         BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_APPLICATION_EVENTS_14 = 126, /*!< Index of access permissions for event pair [29:28] of
                                                                         BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_APPLICATION_EVENTS_15 = 127, /*!< Index of access permissions for event pair [31:30] of
                                                                         BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_APPLICATION_INTERRUPT_0 = 128, /*!< Index of access permissions for interrupt 0 of
                                                                           BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_APPLICATION_INTERRUPT_1 = 129, /*!< Index of access permissions for interrupt 1 of
                                                                           BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_APPLICATION_INTERRUPT_2 = 130, /*!< Index of access permissions for interrupt 2 of
                                                                           BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_APPLICATION_INTERRUPT_3 = 131, /*!< Index of access permissions for interrupt 3 of
                                                                           BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_RADIOCORE_TASKS_0 = 144, /*!< Index of access permissions for task pair [1:0] of
                                                                     BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_RADIOCORE_TASKS_1 = 145, /*!< Index of access permissions for task pair [3:2] of
                                                                     BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_RADIOCORE_TASKS_2 = 146, /*!< Index of access permissions for task pair [5:4] of
                                                                     BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_RADIOCORE_TASKS_3 = 147, /*!< Index of access permissions for task pair [7:6] of
                                                                     BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_RADIOCORE_TASKS_4 = 148, /*!< Index of access permissions for task pair [9:8] of
                                                                     BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_RADIOCORE_TASKS_5 = 149, /*!< Index of access permissions for task pair [11:10] of
                                                                     BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_RADIOCORE_TASKS_6 = 150, /*!< Index of access permissions for task pair [13:12] of
                                                                     BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_RADIOCORE_TASKS_7 = 151, /*!< Index of access permissions for task pair [15:14] of
                                                                     BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_RADIOCORE_TASKS_8 = 152, /*!< Index of access permissions for task pair [17:16] of
                                                                     BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_RADIOCORE_TASKS_9 = 153, /*!< Index of access permissions for task pair [19:18] of
                                                                     BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_RADIOCORE_TASKS_10 = 154, /*!< Index of access permissions for task pair [21:20] of
                                                                      BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_RADIOCORE_TASKS_11 = 155, /*!< Index of access permissions for task pair [23:22] of
                                                                      BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_RADIOCORE_TASKS_12 = 156, /*!< Index of access permissions for task pair [25:24] of
                                                                      BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_RADIOCORE_TASKS_13 = 157, /*!< Index of access permissions for task pair [27:26] of
                                                                      BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_RADIOCORE_TASKS_14 = 158, /*!< Index of access permissions for task pair [29:28] of
                                                                      BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_RADIOCORE_TASKS_15 = 159, /*!< Index of access permissions for task pair [31:30] of
                                                                      BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_RADIOCORE_EVENTS_0 = 160, /*!< Index of access permissions for event pair [1:0] of
                                                                      BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_RADIOCORE_EVENTS_1 = 161, /*!< Index of access permissions for event pair [3:2] of
                                                                      BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_RADIOCORE_EVENTS_2 = 162, /*!< Index of access permissions for event pair [5:4] of
                                                                      BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_RADIOCORE_EVENTS_3 = 163, /*!< Index of access permissions for event pair [7:6] of
                                                                      BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_RADIOCORE_EVENTS_4 = 164, /*!< Index of access permissions for event pair [9:8] of
                                                                      BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_RADIOCORE_EVENTS_5 = 165, /*!< Index of access permissions for event pair [11:10] of
                                                                      BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_RADIOCORE_EVENTS_6 = 166, /*!< Index of access permissions for event pair [13:12] of
                                                                      BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_RADIOCORE_EVENTS_7 = 167, /*!< Index of access permissions for event pair [15:14] of
                                                                      BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_RADIOCORE_EVENTS_8 = 168, /*!< Index of access permissions for event pair [17:16] of
                                                                      BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_RADIOCORE_EVENTS_9 = 169, /*!< Index of access permissions for event pair [19:18] of
                                                                      BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_RADIOCORE_EVENTS_10 = 170, /*!< Index of access permissions for event pair [21:20] of
                                                                       BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_RADIOCORE_EVENTS_11 = 171, /*!< Index of access permissions for event pair [23:22] of
                                                                       BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_RADIOCORE_EVENTS_12 = 172, /*!< Index of access permissions for event pair [25:24] of
                                                                       BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_RADIOCORE_EVENTS_13 = 173, /*!< Index of access permissions for event pair [27:26] of
                                                                       BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_RADIOCORE_EVENTS_14 = 174, /*!< Index of access permissions for event pair [29:28] of
                                                                       BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_RADIOCORE_EVENTS_15 = 175, /*!< Index of access permissions for event pair [31:30] of
                                                                       BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_RADIOCORE_INTERRUPT_0 = 176, /*!< Index of access permissions for interrupt 0 of
                                                                         BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_RADIOCORE_INTERRUPT_1 = 177, /*!< Index of access permissions for interrupt 1 of
                                                                         BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_RADIOCORE_INTERRUPT_2 = 178, /*!< Index of access permissions for interrupt 2 of
                                                                         BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_RADIOCORE_INTERRUPT_3 = 179, /*!< Index of access permissions for interrupt 3 of
                                                                         BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLCORE_TASKS_0 = 192, /*!< Index of access permissions for task pair [1:0] of
                                                                    BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLCORE_TASKS_1 = 193, /*!< Index of access permissions for task pair [3:2] of
                                                                    BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLCORE_TASKS_2 = 194, /*!< Index of access permissions for task pair [5:4] of
                                                                    BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLCORE_TASKS_3 = 195, /*!< Index of access permissions for task pair [7:6] of
                                                                    BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLCORE_TASKS_4 = 196, /*!< Index of access permissions for task pair [9:8] of
                                                                    BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLCORE_TASKS_5 = 197, /*!< Index of access permissions for task pair [11:10] of
                                                                    BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLCORE_TASKS_6 = 198, /*!< Index of access permissions for task pair [13:12] of
                                                                    BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLCORE_TASKS_7 = 199, /*!< Index of access permissions for task pair [15:14] of
                                                                    BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLCORE_TASKS_8 = 200, /*!< Index of access permissions for task pair [17:16] of
                                                                    BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLCORE_TASKS_9 = 201, /*!< Index of access permissions for task pair [19:18] of
                                                                    BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLCORE_TASKS_10 = 202, /*!< Index of access permissions for task pair [21:20] of
                                                                     BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLCORE_TASKS_11 = 203, /*!< Index of access permissions for task pair [23:22] of
                                                                     BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLCORE_TASKS_12 = 204, /*!< Index of access permissions for task pair [25:24] of
                                                                     BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLCORE_TASKS_13 = 205, /*!< Index of access permissions for task pair [27:26] of
                                                                     BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLCORE_TASKS_14 = 206, /*!< Index of access permissions for task pair [29:28] of
                                                                     BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLCORE_TASKS_15 = 207, /*!< Index of access permissions for task pair [31:30] of
                                                                     BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLCORE_EVENTS_0 = 208, /*!< Index of access permissions for event pair [1:0] of
                                                                     BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLCORE_EVENTS_1 = 209, /*!< Index of access permissions for event pair [3:2] of
                                                                     BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLCORE_EVENTS_2 = 210, /*!< Index of access permissions for event pair [5:4] of
                                                                     BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLCORE_EVENTS_3 = 211, /*!< Index of access permissions for event pair [7:6] of
                                                                     BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLCORE_EVENTS_4 = 212, /*!< Index of access permissions for event pair [9:8] of
                                                                     BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLCORE_EVENTS_5 = 213, /*!< Index of access permissions for event pair [11:10] of
                                                                     BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLCORE_EVENTS_6 = 214, /*!< Index of access permissions for event pair [13:12] of
                                                                     BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLCORE_EVENTS_7 = 215, /*!< Index of access permissions for event pair [15:14] of
                                                                     BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLCORE_EVENTS_8 = 216, /*!< Index of access permissions for event pair [17:16] of
                                                                     BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLCORE_EVENTS_9 = 217, /*!< Index of access permissions for event pair [19:18] of
                                                                     BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLCORE_EVENTS_10 = 218, /*!< Index of access permissions for event pair [21:20] of
                                                                      BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLCORE_EVENTS_11 = 219, /*!< Index of access permissions for event pair [23:22] of
                                                                      BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLCORE_EVENTS_12 = 220, /*!< Index of access permissions for event pair [25:24] of
                                                                      BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLCORE_EVENTS_13 = 221, /*!< Index of access permissions for event pair [27:26] of
                                                                      BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLCORE_EVENTS_14 = 222, /*!< Index of access permissions for event pair [29:28] of
                                                                      BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLCORE_EVENTS_15 = 223, /*!< Index of access permissions for event pair [31:30] of
                                                                      BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLCORE_INTERRUPT_0 = 224, /*!< Index of access permissions for interrupt 0 of
                                                                        BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLCORE_INTERRUPT_1 = 225, /*!< Index of access permissions for interrupt 1 of
                                                                        BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLCORE_INTERRUPT_2 = 226, /*!< Index of access permissions for interrupt 2 of
                                                                        BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLCORE_INTERRUPT_3 = 227, /*!< Index of access permissions for interrupt 3 of
                                                                        BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLDSP_TASKS_0 = 240, /*!< Index of access permissions for task pair [1:0] of BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLDSP_TASKS_1 = 241, /*!< Index of access permissions for task pair [3:2] of BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLDSP_TASKS_2 = 242, /*!< Index of access permissions for task pair [5:4] of BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLDSP_TASKS_3 = 243, /*!< Index of access permissions for task pair [7:6] of BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLDSP_TASKS_4 = 244, /*!< Index of access permissions for task pair [9:8] of BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLDSP_TASKS_5 = 245, /*!< Index of access permissions for task pair [11:10] of
                                                                   BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLDSP_TASKS_6 = 246, /*!< Index of access permissions for task pair [13:12] of
                                                                   BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLDSP_TASKS_7 = 247, /*!< Index of access permissions for task pair [15:14] of
                                                                   BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLDSP_TASKS_8 = 248, /*!< Index of access permissions for task pair [17:16] of
                                                                   BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLDSP_TASKS_9 = 249, /*!< Index of access permissions for task pair [19:18] of
                                                                   BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLDSP_TASKS_10 = 250, /*!< Index of access permissions for task pair [21:20] of
                                                                    BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLDSP_TASKS_11 = 251, /*!< Index of access permissions for task pair [23:22] of
                                                                    BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLDSP_TASKS_12 = 252, /*!< Index of access permissions for task pair [25:24] of
                                                                    BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLDSP_TASKS_13 = 253, /*!< Index of access permissions for task pair [27:26] of
                                                                    BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLDSP_TASKS_14 = 254, /*!< Index of access permissions for task pair [29:28] of
                                                                    BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLDSP_TASKS_15 = 255, /*!< Index of access permissions for task pair [31:30] of
                                                                    BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLDSP_EVENTS_0 = 256, /*!< Index of access permissions for event pair [1:0] of
                                                                    BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLDSP_EVENTS_1 = 257, /*!< Index of access permissions for event pair [3:2] of
                                                                    BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLDSP_EVENTS_2 = 258, /*!< Index of access permissions for event pair [5:4] of
                                                                    BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLDSP_EVENTS_3 = 259, /*!< Index of access permissions for event pair [7:6] of
                                                                    BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLDSP_EVENTS_4 = 260, /*!< Index of access permissions for event pair [9:8] of
                                                                    BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLDSP_EVENTS_5 = 261, /*!< Index of access permissions for event pair [11:10] of
                                                                    BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLDSP_EVENTS_6 = 262, /*!< Index of access permissions for event pair [13:12] of
                                                                    BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLDSP_EVENTS_7 = 263, /*!< Index of access permissions for event pair [15:14] of
                                                                    BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLDSP_EVENTS_8 = 264, /*!< Index of access permissions for event pair [17:16] of
                                                                    BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLDSP_EVENTS_9 = 265, /*!< Index of access permissions for event pair [19:18] of
                                                                    BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLDSP_EVENTS_10 = 266, /*!< Index of access permissions for event pair [21:20] of
                                                                     BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLDSP_EVENTS_11 = 267, /*!< Index of access permissions for event pair [23:22] of
                                                                     BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLDSP_EVENTS_12 = 268, /*!< Index of access permissions for event pair [25:24] of
                                                                     BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLDSP_EVENTS_13 = 269, /*!< Index of access permissions for event pair [27:26] of
                                                                     BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLDSP_EVENTS_14 = 270, /*!< Index of access permissions for event pair [29:28] of
                                                                     BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLDSP_EVENTS_15 = 271, /*!< Index of access permissions for event pair [31:30] of
                                                                     BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLDSP_INTERRUPT_0 = 272, /*!< Index of access permissions for interrupt 0 of BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLDSP_INTERRUPT_1 = 273, /*!< Index of access permissions for interrupt 1 of BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLDSP_INTERRUPT_2 = 274, /*!< Index of access permissions for interrupt 2 of BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLDSP_INTERRUPT_3 = 275, /*!< Index of access permissions for interrupt 3 of BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLRF_TASKS_0 = 288, /*!< Index of access permissions for task pair [1:0] of BELLBOARD */
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLRF_TASKS_1 = 289, /*!< Index of access permissions for task pair [3:2] of BELLBOARD */
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLRF_TASKS_2 = 290, /*!< Index of access permissions for task pair [5:4] of BELLBOARD */
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLRF_TASKS_3 = 291, /*!< Index of access permissions for task pair [7:6] of BELLBOARD */
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLRF_TASKS_4 = 292, /*!< Index of access permissions for task pair [9:8] of BELLBOARD */
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLRF_TASKS_5 = 293, /*!< Index of access permissions for task pair [11:10] of
                                                                  BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLRF_TASKS_6 = 294, /*!< Index of access permissions for task pair [13:12] of
                                                                  BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLRF_TASKS_7 = 295, /*!< Index of access permissions for task pair [15:14] of
                                                                  BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLRF_TASKS_8 = 296, /*!< Index of access permissions for task pair [17:16] of
                                                                  BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLRF_TASKS_9 = 297, /*!< Index of access permissions for task pair [19:18] of
                                                                  BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLRF_TASKS_10 = 298, /*!< Index of access permissions for task pair [21:20] of
                                                                   BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLRF_TASKS_11 = 299, /*!< Index of access permissions for task pair [23:22] of
                                                                   BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLRF_TASKS_12 = 300, /*!< Index of access permissions for task pair [25:24] of
                                                                   BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLRF_TASKS_13 = 301, /*!< Index of access permissions for task pair [27:26] of
                                                                   BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLRF_TASKS_14 = 302, /*!< Index of access permissions for task pair [29:28] of
                                                                   BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLRF_TASKS_15 = 303, /*!< Index of access permissions for task pair [31:30] of
                                                                   BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLRF_EVENTS_0 = 304, /*!< Index of access permissions for event pair [1:0] of
                                                                   BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLRF_EVENTS_1 = 305, /*!< Index of access permissions for event pair [3:2] of
                                                                   BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLRF_EVENTS_2 = 306, /*!< Index of access permissions for event pair [5:4] of
                                                                   BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLRF_EVENTS_3 = 307, /*!< Index of access permissions for event pair [7:6] of
                                                                   BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLRF_EVENTS_4 = 308, /*!< Index of access permissions for event pair [9:8] of
                                                                   BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLRF_EVENTS_5 = 309, /*!< Index of access permissions for event pair [11:10] of
                                                                   BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLRF_EVENTS_6 = 310, /*!< Index of access permissions for event pair [13:12] of
                                                                   BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLRF_EVENTS_7 = 311, /*!< Index of access permissions for event pair [15:14] of
                                                                   BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLRF_EVENTS_8 = 312, /*!< Index of access permissions for event pair [17:16] of
                                                                   BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLRF_EVENTS_9 = 313, /*!< Index of access permissions for event pair [19:18] of
                                                                   BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLRF_EVENTS_10 = 314, /*!< Index of access permissions for event pair [21:20] of
                                                                    BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLRF_EVENTS_11 = 315, /*!< Index of access permissions for event pair [23:22] of
                                                                    BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLRF_EVENTS_12 = 316, /*!< Index of access permissions for event pair [25:24] of
                                                                    BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLRF_EVENTS_13 = 317, /*!< Index of access permissions for event pair [27:26] of
                                                                    BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLRF_EVENTS_14 = 318, /*!< Index of access permissions for event pair [29:28] of
                                                                    BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLRF_EVENTS_15 = 319, /*!< Index of access permissions for event pair [31:30] of
                                                                    BELLBOARD*/
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLRF_INTERRUPT_0 = 320, /*!< Index of access permissions for interrupt 0 of BELLBOARD */
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLRF_INTERRUPT_1 = 321, /*!< Index of access permissions for interrupt 1 of BELLBOARD */
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLRF_INTERRUPT_2 = 322, /*!< Index of access permissions for interrupt 2 of BELLBOARD */
  NRF_SECURE_SPU111_FEATURES_BELLBOARD_CELLRF_INTERRUPT_3 = 323, /*!< Index of access permissions for interrupt 3 of BELLBOARD */
  NRF_SECURE_SPU111_FEATURES_MRAMC110_WAITSTATES = 384, /*!< Index of access permissions for WAITSTATES register of MRAMC110   */
  NRF_SECURE_SPU111_FEATURES_MRAMC110_AUTODPOWERDOWN = 385, /*!< Index of access permissions for POWER.AUTOPOWERDOWN register of
                                                                 MRAMC110*/
  NRF_SECURE_SPU111_FEATURES_MRAMC110_READY  = 386,  /*!< Index of access permissions for READY/READYNEXT registers of MRAMC110*/
  NRF_SECURE_SPU111_FEATURES_MRAMC111_WAITSTATES = 387, /*!< Index of access permissions for WAITSTATES register of MRAMC111   */
  NRF_SECURE_SPU111_FEATURES_MRAMC111_AUTODPOWERDOWN = 388, /*!< Index of access permissions for POWER.AUTOPOWERDOWN register of
                                                                 MRAMC111*/
  NRF_SECURE_SPU111_FEATURES_MRAMC111_READY  = 389,  /*!< Index of access permissions for READY/READYNEXT registers of MRAMC111*/
} NRF_SECURE_SPU111_FEATURES_ENUM_t;

/* ============================================= SPU120 Split Security Features ============================================== */
/**
  * @brief Indexes in SPU120.FEATURES controlling access permissions of features with split security
  */
typedef enum {
  NRF_SECURE_SPU120_FEATURES_VPR120_TASKS_0  = 192,  /*!< Index of access permissions for task pair [1:0] of VPR120            */
  NRF_SECURE_SPU120_FEATURES_VPR120_TASKS_1  = 193,  /*!< Index of access permissions for task pair [3:2] of VPR120            */
  NRF_SECURE_SPU120_FEATURES_VPR120_TASKS_2  = 194,  /*!< Index of access permissions for task pair [5:4] of VPR120            */
  NRF_SECURE_SPU120_FEATURES_VPR120_TASKS_3  = 195,  /*!< Index of access permissions for task pair [7:6] of VPR120            */
  NRF_SECURE_SPU120_FEATURES_VPR120_TASKS_6  = 198,  /*!< Index of access permissions for task pair [13:12] of VPR120          */
  NRF_SECURE_SPU120_FEATURES_VPR120_TASKS_7  = 199,  /*!< Index of access permissions for task pair [15:14] of VPR120          */
  NRF_SECURE_SPU120_FEATURES_VPR120_TASKS_8  = 200,  /*!< Index of access permissions for task pair [17:16] of VPR120          */
  NRF_SECURE_SPU120_FEATURES_VPR120_TASKS_9  = 201,  /*!< Index of access permissions for task pair [19:18] of VPR120          */
  NRF_SECURE_SPU120_FEATURES_VPR120_TASKS_10 = 202,  /*!< Index of access permissions for task pair [21:20] of VPR120          */
  NRF_SECURE_SPU120_FEATURES_VPR120_TASKS_11 = 203,  /*!< Index of access permissions for task pair [23:22] of VPR120          */
  NRF_SECURE_SPU120_FEATURES_VPR120_TASKS_12 = 204,  /*!< Index of access permissions for task pair [25:24] of VPR120          */
  NRF_SECURE_SPU120_FEATURES_VPR120_TASKS_13 = 205,  /*!< Index of access permissions for task pair [27:26] of VPR120          */
  NRF_SECURE_SPU120_FEATURES_VPR120_TASKS_14 = 206,  /*!< Index of access permissions for task pair [29:28] of VPR120          */
  NRF_SECURE_SPU120_FEATURES_VPR120_TASKS_15 = 207,  /*!< Index of access permissions for task pair [31:30] of VPR120          */
} NRF_SECURE_SPU120_FEATURES_ENUM_t;

/* ============================================= SPU121 Split Security Features ============================================== */
/**
  * @brief Indexes in SPU121.FEATURES controlling access permissions of features with split security
  */
typedef enum {
  NRF_SECURE_SPU121_FEATURES_IPCT120_CH_0    = 0,    /*!< Index of access permissions for channel 0 of IPCT120                 */
  NRF_SECURE_SPU121_FEATURES_IPCT120_CH_1    = 1,    /*!< Index of access permissions for channel 1 of IPCT120                 */
  NRF_SECURE_SPU121_FEATURES_IPCT120_CH_2    = 2,    /*!< Index of access permissions for channel 2 of IPCT120                 */
  NRF_SECURE_SPU121_FEATURES_IPCT120_CH_3    = 3,    /*!< Index of access permissions for channel 3 of IPCT120                 */
  NRF_SECURE_SPU121_FEATURES_IPCT120_CH_4    = 4,    /*!< Index of access permissions for channel 4 of IPCT120                 */
  NRF_SECURE_SPU121_FEATURES_IPCT120_CH_5    = 5,    /*!< Index of access permissions for channel 5 of IPCT120                 */
  NRF_SECURE_SPU121_FEATURES_IPCT120_CH_6    = 6,    /*!< Index of access permissions for channel 6 of IPCT120                 */
  NRF_SECURE_SPU121_FEATURES_IPCT120_CH_7    = 7,    /*!< Index of access permissions for channel 7 of IPCT120                 */
} NRF_SECURE_SPU121_FEATURES_ENUM_t;

/* ============================================= SPU122 Split Security Features ============================================== */
/**
  * @brief Indexes in SPU122.FEATURES controlling access permissions of features with split security
  */
typedef enum {
  NRF_SECURE_SPU122_FEATURES_DPPIC120_CH_0   = 32,   /*!< Index of access permissions for channel 0 of DPPIC120                */
  NRF_SECURE_SPU122_FEATURES_DPPIC120_CH_1   = 33,   /*!< Index of access permissions for channel 1 of DPPIC120                */
  NRF_SECURE_SPU122_FEATURES_DPPIC120_CH_2   = 34,   /*!< Index of access permissions for channel 2 of DPPIC120                */
  NRF_SECURE_SPU122_FEATURES_DPPIC120_CH_3   = 35,   /*!< Index of access permissions for channel 3 of DPPIC120                */
  NRF_SECURE_SPU122_FEATURES_DPPIC120_CH_4   = 36,   /*!< Index of access permissions for channel 4 of DPPIC120                */
  NRF_SECURE_SPU122_FEATURES_DPPIC120_CH_5   = 37,   /*!< Index of access permissions for channel 5 of DPPIC120                */
  NRF_SECURE_SPU122_FEATURES_DPPIC120_CH_6   = 38,   /*!< Index of access permissions for channel 6 of DPPIC120                */
  NRF_SECURE_SPU122_FEATURES_DPPIC120_CH_7   = 39,   /*!< Index of access permissions for channel 7 of DPPIC120                */
  NRF_SECURE_SPU122_FEATURES_DPPIC120_CHG_0  = 56,   /*!< Index of access permissions for channel group 0 of DPPIC120          */
  NRF_SECURE_SPU122_FEATURES_DPPIC120_CHG_1  = 57,   /*!< Index of access permissions for channel group 1 of DPPIC120          */
} NRF_SECURE_SPU122_FEATURES_ENUM_t;

/* ============================================= SPU131 Split Security Features ============================================== */
/**
  * @brief Indexes in SPU131.FEATURES controlling access permissions of features with split security
  */
typedef enum {
  NRF_SECURE_SPU131_FEATURES_IPCT130_CH_0    = 0,    /*!< Index of access permissions for channel 0 of IPCT130                 */
  NRF_SECURE_SPU131_FEATURES_IPCT130_CH_1    = 1,    /*!< Index of access permissions for channel 1 of IPCT130                 */
  NRF_SECURE_SPU131_FEATURES_IPCT130_CH_2    = 2,    /*!< Index of access permissions for channel 2 of IPCT130                 */
  NRF_SECURE_SPU131_FEATURES_IPCT130_CH_3    = 3,    /*!< Index of access permissions for channel 3 of IPCT130                 */
  NRF_SECURE_SPU131_FEATURES_IPCT130_CH_4    = 4,    /*!< Index of access permissions for channel 4 of IPCT130                 */
  NRF_SECURE_SPU131_FEATURES_IPCT130_CH_5    = 5,    /*!< Index of access permissions for channel 5 of IPCT130                 */
  NRF_SECURE_SPU131_FEATURES_IPCT130_CH_6    = 6,    /*!< Index of access permissions for channel 6 of IPCT130                 */
  NRF_SECURE_SPU131_FEATURES_IPCT130_CH_7    = 7,    /*!< Index of access permissions for channel 7 of IPCT130                 */
  NRF_SECURE_SPU131_FEATURES_DPPIC130_CH_0   = 32,   /*!< Index of access permissions for channel 0 of DPPIC130                */
  NRF_SECURE_SPU131_FEATURES_DPPIC130_CH_1   = 33,   /*!< Index of access permissions for channel 1 of DPPIC130                */
  NRF_SECURE_SPU131_FEATURES_DPPIC130_CH_2   = 34,   /*!< Index of access permissions for channel 2 of DPPIC130                */
  NRF_SECURE_SPU131_FEATURES_DPPIC130_CH_3   = 35,   /*!< Index of access permissions for channel 3 of DPPIC130                */
  NRF_SECURE_SPU131_FEATURES_DPPIC130_CH_4   = 36,   /*!< Index of access permissions for channel 4 of DPPIC130                */
  NRF_SECURE_SPU131_FEATURES_DPPIC130_CH_5   = 37,   /*!< Index of access permissions for channel 5 of DPPIC130                */
  NRF_SECURE_SPU131_FEATURES_DPPIC130_CH_6   = 38,   /*!< Index of access permissions for channel 6 of DPPIC130                */
  NRF_SECURE_SPU131_FEATURES_DPPIC130_CH_7   = 39,   /*!< Index of access permissions for channel 7 of DPPIC130                */
  NRF_SECURE_SPU131_FEATURES_DPPIC130_CHG_0  = 56,   /*!< Index of access permissions for channel group 0 of DPPIC130          */
  NRF_SECURE_SPU131_FEATURES_DPPIC130_CHG_1  = 57,   /*!< Index of access permissions for channel group 1 of DPPIC130          */
  NRF_SECURE_SPU131_FEATURES_GPIOTE130_CH_0  = 64,   /*!< Index of access permissions for channel 0 of GPIOTE130               */
  NRF_SECURE_SPU131_FEATURES_GPIOTE130_CH_1  = 65,   /*!< Index of access permissions for channel 1 of GPIOTE130               */
  NRF_SECURE_SPU131_FEATURES_GPIOTE130_CH_2  = 66,   /*!< Index of access permissions for channel 2 of GPIOTE130               */
  NRF_SECURE_SPU131_FEATURES_GPIOTE130_CH_3  = 67,   /*!< Index of access permissions for channel 3 of GPIOTE130               */
  NRF_SECURE_SPU131_FEATURES_GPIOTE130_CH_4  = 68,   /*!< Index of access permissions for channel 4 of GPIOTE130               */
  NRF_SECURE_SPU131_FEATURES_GPIOTE130_CH_5  = 69,   /*!< Index of access permissions for channel 5 of GPIOTE130               */
  NRF_SECURE_SPU131_FEATURES_GPIOTE130_CH_6  = 70,   /*!< Index of access permissions for channel 6 of GPIOTE130               */
  NRF_SECURE_SPU131_FEATURES_GPIOTE130_CH_7  = 71,   /*!< Index of access permissions for channel 7 of GPIOTE130               */
  NRF_SECURE_SPU131_FEATURES_GPIOTE130_INTERRUPT_0 = 72, /*!< Index of access permissions for interrupt 0 of GPIOTE130         */
  NRF_SECURE_SPU131_FEATURES_GPIOTE130_INTERRUPT_1 = 73, /*!< Index of access permissions for interrupt 1 of GPIOTE130         */
  NRF_SECURE_SPU131_FEATURES_GPIOTE130_INTERRUPT_2 = 74, /*!< Index of access permissions for interrupt 2 of GPIOTE130         */
  NRF_SECURE_SPU131_FEATURES_GPIOTE130_INTERRUPT_3 = 75, /*!< Index of access permissions for interrupt 3 of GPIOTE130         */
  NRF_SECURE_SPU131_FEATURES_GPIOTE130_INTERRUPT_4 = 76, /*!< Index of access permissions for interrupt 4 of GPIOTE130         */
  NRF_SECURE_SPU131_FEATURES_GPIOTE130_INTERRUPT_5 = 77, /*!< Index of access permissions for interrupt 5 of GPIOTE130         */
  NRF_SECURE_SPU131_FEATURES_GPIOTE130_INTERRUPT_6 = 78, /*!< Index of access permissions for interrupt 6 of GPIOTE130         */
  NRF_SECURE_SPU131_FEATURES_GPIOTE131_CH_0  = 80,   /*!< Index of access permissions for channel 0 of GPIOTE131               */
  NRF_SECURE_SPU131_FEATURES_GPIOTE131_CH_1  = 81,   /*!< Index of access permissions for channel 1 of GPIOTE131               */
  NRF_SECURE_SPU131_FEATURES_GPIOTE131_CH_2  = 82,   /*!< Index of access permissions for channel 2 of GPIOTE131               */
  NRF_SECURE_SPU131_FEATURES_GPIOTE131_CH_3  = 83,   /*!< Index of access permissions for channel 3 of GPIOTE131               */
  NRF_SECURE_SPU131_FEATURES_GPIOTE131_CH_4  = 84,   /*!< Index of access permissions for channel 4 of GPIOTE131               */
  NRF_SECURE_SPU131_FEATURES_GPIOTE131_CH_5  = 85,   /*!< Index of access permissions for channel 5 of GPIOTE131               */
  NRF_SECURE_SPU131_FEATURES_GPIOTE131_CH_6  = 86,   /*!< Index of access permissions for channel 6 of GPIOTE131               */
  NRF_SECURE_SPU131_FEATURES_GPIOTE131_CH_7  = 87,   /*!< Index of access permissions for channel 7 of GPIOTE131               */
  NRF_SECURE_SPU131_FEATURES_GPIOTE131_INTERRUPT_0 = 88, /*!< Index of access permissions for interrupt 0 of GPIOTE131         */
  NRF_SECURE_SPU131_FEATURES_GPIOTE131_INTERRUPT_1 = 89, /*!< Index of access permissions for interrupt 1 of GPIOTE131         */
  NRF_SECURE_SPU131_FEATURES_GPIOTE131_INTERRUPT_2 = 90, /*!< Index of access permissions for interrupt 2 of GPIOTE131         */
  NRF_SECURE_SPU131_FEATURES_GPIOTE131_INTERRUPT_3 = 91, /*!< Index of access permissions for interrupt 3 of GPIOTE131         */
  NRF_SECURE_SPU131_FEATURES_GPIOTE131_INTERRUPT_4 = 92, /*!< Index of access permissions for interrupt 4 of GPIOTE131         */
  NRF_SECURE_SPU131_FEATURES_GPIOTE131_INTERRUPT_5 = 93, /*!< Index of access permissions for interrupt 5 of GPIOTE131         */
  NRF_SECURE_SPU131_FEATURES_GPIOTE131_INTERRUPT_6 = 94, /*!< Index of access permissions for interrupt 6 of GPIOTE131         */
  NRF_SECURE_SPU131_FEATURES_P0_PIN_0        = 128,  /*!< Index of access permissions for pin 0 of GPIO port P0                */
  NRF_SECURE_SPU131_FEATURES_P0_PIN_1        = 129,  /*!< Index of access permissions for pin 1 of GPIO port P0                */
  NRF_SECURE_SPU131_FEATURES_P0_PIN_2        = 130,  /*!< Index of access permissions for pin 2 of GPIO port P0                */
  NRF_SECURE_SPU131_FEATURES_P0_PIN_3        = 131,  /*!< Index of access permissions for pin 3 of GPIO port P0                */
  NRF_SECURE_SPU131_FEATURES_P0_PIN_4        = 132,  /*!< Index of access permissions for pin 4 of GPIO port P0                */
  NRF_SECURE_SPU131_FEATURES_P0_PIN_5        = 133,  /*!< Index of access permissions for pin 5 of GPIO port P0                */
  NRF_SECURE_SPU131_FEATURES_P0_PIN_6        = 134,  /*!< Index of access permissions for pin 6 of GPIO port P0                */
  NRF_SECURE_SPU131_FEATURES_P0_PIN_7        = 135,  /*!< Index of access permissions for pin 7 of GPIO port P0                */
  NRF_SECURE_SPU131_FEATURES_P0_PIN_8        = 136,  /*!< Index of access permissions for pin 8 of GPIO port P0                */
  NRF_SECURE_SPU131_FEATURES_P0_PIN_9        = 137,  /*!< Index of access permissions for pin 9 of GPIO port P0                */
  NRF_SECURE_SPU131_FEATURES_P0_PIN_10       = 138,  /*!< Index of access permissions for pin 10 of GPIO port P0               */
  NRF_SECURE_SPU131_FEATURES_P0_PIN_11       = 139,  /*!< Index of access permissions for pin 11 of GPIO port P0               */
  NRF_SECURE_SPU131_FEATURES_P0_PIN_12       = 140,  /*!< Index of access permissions for pin 12 of GPIO port P0               */
  NRF_SECURE_SPU131_FEATURES_P1_PIN_0        = 160,  /*!< Index of access permissions for pin 0 of GPIO port P1                */
  NRF_SECURE_SPU131_FEATURES_P1_PIN_1        = 161,  /*!< Index of access permissions for pin 1 of GPIO port P1                */
  NRF_SECURE_SPU131_FEATURES_P1_PIN_2        = 162,  /*!< Index of access permissions for pin 2 of GPIO port P1                */
  NRF_SECURE_SPU131_FEATURES_P1_PIN_3        = 163,  /*!< Index of access permissions for pin 3 of GPIO port P1                */
  NRF_SECURE_SPU131_FEATURES_P1_PIN_4        = 164,  /*!< Index of access permissions for pin 4 of GPIO port P1                */
  NRF_SECURE_SPU131_FEATURES_P1_PIN_5        = 165,  /*!< Index of access permissions for pin 5 of GPIO port P1                */
  NRF_SECURE_SPU131_FEATURES_P1_PIN_6        = 166,  /*!< Index of access permissions for pin 6 of GPIO port P1                */
  NRF_SECURE_SPU131_FEATURES_P1_PIN_7        = 167,  /*!< Index of access permissions for pin 7 of GPIO port P1                */
  NRF_SECURE_SPU131_FEATURES_P1_PIN_8        = 168,  /*!< Index of access permissions for pin 8 of GPIO port P1                */
  NRF_SECURE_SPU131_FEATURES_P1_PIN_9        = 169,  /*!< Index of access permissions for pin 9 of GPIO port P1                */
  NRF_SECURE_SPU131_FEATURES_P1_PIN_10       = 170,  /*!< Index of access permissions for pin 10 of GPIO port P1               */
  NRF_SECURE_SPU131_FEATURES_P1_PIN_11       = 171,  /*!< Index of access permissions for pin 11 of GPIO port P1               */
  NRF_SECURE_SPU131_FEATURES_P2_PIN_0        = 192,  /*!< Index of access permissions for pin 0 of GPIO port P2                */
  NRF_SECURE_SPU131_FEATURES_P2_PIN_1        = 193,  /*!< Index of access permissions for pin 1 of GPIO port P2                */
  NRF_SECURE_SPU131_FEATURES_P2_PIN_2        = 194,  /*!< Index of access permissions for pin 2 of GPIO port P2                */
  NRF_SECURE_SPU131_FEATURES_P2_PIN_3        = 195,  /*!< Index of access permissions for pin 3 of GPIO port P2                */
  NRF_SECURE_SPU131_FEATURES_P2_PIN_4        = 196,  /*!< Index of access permissions for pin 4 of GPIO port P2                */
  NRF_SECURE_SPU131_FEATURES_P2_PIN_5        = 197,  /*!< Index of access permissions for pin 5 of GPIO port P2                */
  NRF_SECURE_SPU131_FEATURES_P2_PIN_6        = 198,  /*!< Index of access permissions for pin 6 of GPIO port P2                */
  NRF_SECURE_SPU131_FEATURES_P2_PIN_7        = 199,  /*!< Index of access permissions for pin 7 of GPIO port P2                */
  NRF_SECURE_SPU131_FEATURES_P2_PIN_8        = 200,  /*!< Index of access permissions for pin 8 of GPIO port P2                */
  NRF_SECURE_SPU131_FEATURES_P2_PIN_9        = 201,  /*!< Index of access permissions for pin 9 of GPIO port P2                */
  NRF_SECURE_SPU131_FEATURES_P2_PIN_10       = 202,  /*!< Index of access permissions for pin 10 of GPIO port P2               */
  NRF_SECURE_SPU131_FEATURES_P2_PIN_11       = 203,  /*!< Index of access permissions for pin 11 of GPIO port P2               */
  NRF_SECURE_SPU131_FEATURES_P6_PIN_0        = 320,  /*!< Index of access permissions for pin 0 of GPIO port P6                */
  NRF_SECURE_SPU131_FEATURES_P6_PIN_1        = 321,  /*!< Index of access permissions for pin 1 of GPIO port P6                */
  NRF_SECURE_SPU131_FEATURES_P6_PIN_2        = 322,  /*!< Index of access permissions for pin 2 of GPIO port P6                */
  NRF_SECURE_SPU131_FEATURES_P6_PIN_3        = 323,  /*!< Index of access permissions for pin 3 of GPIO port P6                */
  NRF_SECURE_SPU131_FEATURES_P6_PIN_4        = 324,  /*!< Index of access permissions for pin 4 of GPIO port P6                */
  NRF_SECURE_SPU131_FEATURES_P6_PIN_5        = 325,  /*!< Index of access permissions for pin 5 of GPIO port P6                */
  NRF_SECURE_SPU131_FEATURES_P6_PIN_6        = 326,  /*!< Index of access permissions for pin 6 of GPIO port P6                */
  NRF_SECURE_SPU131_FEATURES_P6_PIN_7        = 327,  /*!< Index of access permissions for pin 7 of GPIO port P6                */
  NRF_SECURE_SPU131_FEATURES_P6_PIN_8        = 328,  /*!< Index of access permissions for pin 8 of GPIO port P6                */
  NRF_SECURE_SPU131_FEATURES_P6_PIN_9        = 329,  /*!< Index of access permissions for pin 9 of GPIO port P6                */
  NRF_SECURE_SPU131_FEATURES_P6_PIN_10       = 330,  /*!< Index of access permissions for pin 10 of GPIO port P6               */
  NRF_SECURE_SPU131_FEATURES_P6_PIN_11       = 331,  /*!< Index of access permissions for pin 11 of GPIO port P6               */
  NRF_SECURE_SPU131_FEATURES_P6_PIN_12       = 332,  /*!< Index of access permissions for pin 12 of GPIO port P6               */
  NRF_SECURE_SPU131_FEATURES_P6_PIN_13       = 333,  /*!< Index of access permissions for pin 13 of GPIO port P6               */
  NRF_SECURE_SPU131_FEATURES_P8_PIN_0        = 384,  /*!< Index of access permissions for pin 0 of GPIO port P8                */
  NRF_SECURE_SPU131_FEATURES_P8_PIN_1        = 385,  /*!< Index of access permissions for pin 1 of GPIO port P8                */
  NRF_SECURE_SPU131_FEATURES_P8_PIN_2        = 386,  /*!< Index of access permissions for pin 2 of GPIO port P8                */
  NRF_SECURE_SPU131_FEATURES_P8_PIN_3        = 387,  /*!< Index of access permissions for pin 3 of GPIO port P8                */
  NRF_SECURE_SPU131_FEATURES_P8_PIN_4        = 388,  /*!< Index of access permissions for pin 4 of GPIO port P8                */
  NRF_SECURE_SPU131_FEATURES_P9_PIN_0        = 416,  /*!< Index of access permissions for pin 0 of GPIO port P9                */
  NRF_SECURE_SPU131_FEATURES_P9_PIN_1        = 417,  /*!< Index of access permissions for pin 1 of GPIO port P9                */
  NRF_SECURE_SPU131_FEATURES_P9_PIN_2        = 418,  /*!< Index of access permissions for pin 2 of GPIO port P9                */
  NRF_SECURE_SPU131_FEATURES_P9_PIN_3        = 419,  /*!< Index of access permissions for pin 3 of GPIO port P9                */
  NRF_SECURE_SPU131_FEATURES_P9_PIN_4        = 420,  /*!< Index of access permissions for pin 4 of GPIO port P9                */
  NRF_SECURE_SPU131_FEATURES_P9_PIN_5        = 421,  /*!< Index of access permissions for pin 5 of GPIO port P9                */
  NRF_SECURE_SPU131_FEATURES_P11_PIN_0       = 480,  /*!< Index of access permissions for pin 0 of GPIO port P11               */
  NRF_SECURE_SPU131_FEATURES_P11_PIN_1       = 481,  /*!< Index of access permissions for pin 1 of GPIO port P11               */
  NRF_SECURE_SPU131_FEATURES_P11_PIN_2       = 482,  /*!< Index of access permissions for pin 2 of GPIO port P11               */
  NRF_SECURE_SPU131_FEATURES_P11_PIN_3       = 483,  /*!< Index of access permissions for pin 3 of GPIO port P11               */
  NRF_SECURE_SPU131_FEATURES_P11_PIN_4       = 484,  /*!< Index of access permissions for pin 4 of GPIO port P11               */
  NRF_SECURE_SPU131_FEATURES_P11_PIN_5       = 485,  /*!< Index of access permissions for pin 5 of GPIO port P11               */
  NRF_SECURE_SPU131_FEATURES_P11_PIN_6       = 486,  /*!< Index of access permissions for pin 6 of GPIO port P11               */
  NRF_SECURE_SPU131_FEATURES_P11_PIN_7       = 487,  /*!< Index of access permissions for pin 7 of GPIO port P11               */
  NRF_SECURE_SPU131_FEATURES_P12_PIN_0       = 512,  /*!< Index of access permissions for pin 0 of GPIO port P12               */
  NRF_SECURE_SPU131_FEATURES_P12_PIN_1       = 513,  /*!< Index of access permissions for pin 1 of GPIO port P12               */
  NRF_SECURE_SPU131_FEATURES_P12_PIN_2       = 514,  /*!< Index of access permissions for pin 2 of GPIO port P12               */
} NRF_SECURE_SPU131_FEATURES_ENUM_t;

/* ============================================= SPU132 Split Security Features ============================================== */
/**
  * @brief Indexes in SPU132.FEATURES controlling access permissions of features with split security
  */
typedef enum {
  NRF_SECURE_SPU132_FEATURES_DPPIC131_CH_0   = 32,   /*!< Index of access permissions for channel 0 of DPPIC131                */
  NRF_SECURE_SPU132_FEATURES_DPPIC131_CH_1   = 33,   /*!< Index of access permissions for channel 1 of DPPIC131                */
  NRF_SECURE_SPU132_FEATURES_DPPIC131_CH_2   = 34,   /*!< Index of access permissions for channel 2 of DPPIC131                */
  NRF_SECURE_SPU132_FEATURES_DPPIC131_CH_3   = 35,   /*!< Index of access permissions for channel 3 of DPPIC131                */
  NRF_SECURE_SPU132_FEATURES_DPPIC131_CH_4   = 36,   /*!< Index of access permissions for channel 4 of DPPIC131                */
  NRF_SECURE_SPU132_FEATURES_DPPIC131_CH_5   = 37,   /*!< Index of access permissions for channel 5 of DPPIC131                */
  NRF_SECURE_SPU132_FEATURES_DPPIC131_CH_6   = 38,   /*!< Index of access permissions for channel 6 of DPPIC131                */
  NRF_SECURE_SPU132_FEATURES_DPPIC131_CH_7   = 39,   /*!< Index of access permissions for channel 7 of DPPIC131                */
  NRF_SECURE_SPU132_FEATURES_DPPIC131_CHG_0  = 56,   /*!< Index of access permissions for channel group 0 of DPPIC131          */
  NRF_SECURE_SPU132_FEATURES_DPPIC131_CHG_1  = 57,   /*!< Index of access permissions for channel group 1 of DPPIC131          */
} NRF_SECURE_SPU132_FEATURES_ENUM_t;

/* ============================================= SPU133 Split Security Features ============================================== */
/**
  * @brief Indexes in SPU133.FEATURES controlling access permissions of features with split security
  */
typedef enum {
  NRF_SECURE_SPU133_FEATURES_DPPIC132_CH_0   = 32,   /*!< Index of access permissions for channel 0 of DPPIC132                */
  NRF_SECURE_SPU133_FEATURES_DPPIC132_CH_1   = 33,   /*!< Index of access permissions for channel 1 of DPPIC132                */
  NRF_SECURE_SPU133_FEATURES_DPPIC132_CH_2   = 34,   /*!< Index of access permissions for channel 2 of DPPIC132                */
  NRF_SECURE_SPU133_FEATURES_DPPIC132_CH_3   = 35,   /*!< Index of access permissions for channel 3 of DPPIC132                */
  NRF_SECURE_SPU133_FEATURES_DPPIC132_CH_4   = 36,   /*!< Index of access permissions for channel 4 of DPPIC132                */
  NRF_SECURE_SPU133_FEATURES_DPPIC132_CH_5   = 37,   /*!< Index of access permissions for channel 5 of DPPIC132                */
  NRF_SECURE_SPU133_FEATURES_DPPIC132_CH_6   = 38,   /*!< Index of access permissions for channel 6 of DPPIC132                */
  NRF_SECURE_SPU133_FEATURES_DPPIC132_CH_7   = 39,   /*!< Index of access permissions for channel 7 of DPPIC132                */
  NRF_SECURE_SPU133_FEATURES_DPPIC132_CHG_0  = 56,   /*!< Index of access permissions for channel group 0 of DPPIC132          */
  NRF_SECURE_SPU133_FEATURES_DPPIC132_CHG_1  = 57,   /*!< Index of access permissions for channel group 1 of DPPIC132          */
  NRF_SECURE_SPU133_FEATURES_GRTC_CC_0       = 128,  /*!< Index of access permissions for compare and capture channel 0 of GRTC*/
  NRF_SECURE_SPU133_FEATURES_GRTC_CC_1       = 129,  /*!< Index of access permissions for compare and capture channel 1 of GRTC*/
  NRF_SECURE_SPU133_FEATURES_GRTC_CC_2       = 130,  /*!< Index of access permissions for compare and capture channel 2 of GRTC*/
  NRF_SECURE_SPU133_FEATURES_GRTC_CC_3       = 131,  /*!< Index of access permissions for compare and capture channel 3 of GRTC*/
  NRF_SECURE_SPU133_FEATURES_GRTC_CC_4       = 132,  /*!< Index of access permissions for compare and capture channel 4 of GRTC*/
  NRF_SECURE_SPU133_FEATURES_GRTC_CC_5       = 133,  /*!< Index of access permissions for compare and capture channel 5 of GRTC*/
  NRF_SECURE_SPU133_FEATURES_GRTC_CC_6       = 134,  /*!< Index of access permissions for compare and capture channel 6 of GRTC*/
  NRF_SECURE_SPU133_FEATURES_GRTC_CC_7       = 135,  /*!< Index of access permissions for compare and capture channel 7 of GRTC*/
  NRF_SECURE_SPU133_FEATURES_GRTC_CC_8       = 136,  /*!< Index of access permissions for compare and capture channel 8 of GRTC*/
  NRF_SECURE_SPU133_FEATURES_GRTC_CC_9       = 137,  /*!< Index of access permissions for compare and capture channel 9 of GRTC*/
  NRF_SECURE_SPU133_FEATURES_GRTC_CC_10      = 138,  /*!< Index of access permissions for compare and capture channel 10 of
                                                          GRTC*/
  NRF_SECURE_SPU133_FEATURES_GRTC_CC_11      = 139,  /*!< Index of access permissions for compare and capture channel 11 of
                                                          GRTC*/
  NRF_SECURE_SPU133_FEATURES_GRTC_CC_12      = 140,  /*!< Index of access permissions for compare and capture channel 12 of
                                                          GRTC*/
  NRF_SECURE_SPU133_FEATURES_GRTC_CC_13      = 141,  /*!< Index of access permissions for compare and capture channel 13 of
                                                          GRTC*/
  NRF_SECURE_SPU133_FEATURES_GRTC_CC_14      = 142,  /*!< Index of access permissions for compare and capture channel 14 of
                                                          GRTC*/
  NRF_SECURE_SPU133_FEATURES_GRTC_CC_15      = 143,  /*!< Index of access permissions for compare and capture channel 15 of
                                                          GRTC*/
  NRF_SECURE_SPU133_FEATURES_GRTC_CC_16      = 144,  /*!< Index of access permissions for compare and capture channel 16 of
                                                          GRTC*/
  NRF_SECURE_SPU133_FEATURES_GRTC_CC_17      = 145,  /*!< Index of access permissions for compare and capture channel 17 of
                                                          GRTC*/
  NRF_SECURE_SPU133_FEATURES_GRTC_CC_18      = 146,  /*!< Index of access permissions for compare and capture channel 18 of
                                                          GRTC*/
  NRF_SECURE_SPU133_FEATURES_GRTC_CC_19      = 147,  /*!< Index of access permissions for compare and capture channel 19 of
                                                          GRTC*/
  NRF_SECURE_SPU133_FEATURES_GRTC_PWMCONFIG  = 157,  /*!< Index of access permissions for PWMCONFIG register of GRTC           */
  NRF_SECURE_SPU133_FEATURES_GRTC_CLK        = 158,  /*!< Index of access permissions for CLKOUT/CLKCFG registers of GRTC      */
  NRF_SECURE_SPU133_FEATURES_GRTC_SYSCOUNTER = 159,  /*!< Index of access permissions for SYSCOUNTERL/SYSCOUNTERH registers of
                                                          GRTC*/
  NRF_SECURE_SPU133_FEATURES_GRTC_INTERRUPT_0 = 160, /*!< Index of access permissions for interrupt 0 of GRTC                  */
  NRF_SECURE_SPU133_FEATURES_GRTC_INTERRUPT_1 = 161, /*!< Index of access permissions for interrupt 0 of GRTC                  */
  NRF_SECURE_SPU133_FEATURES_GRTC_INTERRUPT_2 = 162, /*!< Index of access permissions for interrupt 0 of GRTC                  */
  NRF_SECURE_SPU133_FEATURES_GRTC_INTERRUPT_3 = 163, /*!< Index of access permissions for interrupt 0 of GRTC                  */
  NRF_SECURE_SPU133_FEATURES_GRTC_INTERRUPT_4 = 164, /*!< Index of access permissions for interrupt 0 of GRTC                  */
  NRF_SECURE_SPU133_FEATURES_GRTC_INTERRUPT_5 = 165, /*!< Index of access permissions for interrupt 0 of GRTC                  */
  NRF_SECURE_SPU133_FEATURES_GRTC_INTERRUPT_6 = 166, /*!< Index of access permissions for interrupt 0 of GRTC                  */
  NRF_SECURE_SPU133_FEATURES_GRTC_INTERRUPT_7 = 167, /*!< Index of access permissions for interrupt 0 of GRTC                  */
  NRF_SECURE_SPU133_FEATURES_GRTC_INTERRUPT_8 = 168, /*!< Index of access permissions for interrupt 0 of GRTC                  */
  NRF_SECURE_SPU133_FEATURES_GRTC_INTERRUPT_9 = 169, /*!< Index of access permissions for interrupt 0 of GRTC                  */
  NRF_SECURE_SPU133_FEATURES_GRTC_INTERRUPT_10 = 170, /*!< Index of access permissions for interrupt 0 of GRTC                 */
  NRF_SECURE_SPU133_FEATURES_GRTC_INTERRUPT_11 = 171, /*!< Index of access permissions for interrupt 0 of GRTC                 */
  NRF_SECURE_SPU133_FEATURES_GRTC_INTERRUPT_12 = 172, /*!< Index of access permissions for interrupt 0 of GRTC                 */
} NRF_SECURE_SPU133_FEATURES_ENUM_t;

/* ============================================= SPU134 Split Security Features ============================================== */
/**
  * @brief Indexes in SPU134.FEATURES controlling access permissions of features with split security
  */
typedef enum {
  NRF_SECURE_SPU134_FEATURES_DPPIC133_CH_0   = 32,   /*!< Index of access permissions for channel 0 of DPPIC133                */
  NRF_SECURE_SPU134_FEATURES_DPPIC133_CH_1   = 33,   /*!< Index of access permissions for channel 1 of DPPIC133                */
  NRF_SECURE_SPU134_FEATURES_DPPIC133_CH_2   = 34,   /*!< Index of access permissions for channel 2 of DPPIC133                */
  NRF_SECURE_SPU134_FEATURES_DPPIC133_CH_3   = 35,   /*!< Index of access permissions for channel 3 of DPPIC133                */
  NRF_SECURE_SPU134_FEATURES_DPPIC133_CH_4   = 36,   /*!< Index of access permissions for channel 4 of DPPIC133                */
  NRF_SECURE_SPU134_FEATURES_DPPIC133_CH_5   = 37,   /*!< Index of access permissions for channel 5 of DPPIC133                */
  NRF_SECURE_SPU134_FEATURES_DPPIC133_CH_6   = 38,   /*!< Index of access permissions for channel 6 of DPPIC133                */
  NRF_SECURE_SPU134_FEATURES_DPPIC133_CH_7   = 39,   /*!< Index of access permissions for channel 7 of DPPIC133                */
  NRF_SECURE_SPU134_FEATURES_DPPIC133_CHG_0  = 56,   /*!< Index of access permissions for channel group 0 of DPPIC133          */
  NRF_SECURE_SPU134_FEATURES_DPPIC133_CHG_1  = 57,   /*!< Index of access permissions for channel group 1 of DPPIC133          */
} NRF_SECURE_SPU134_FEATURES_ENUM_t;

/* ============================================= SPU135 Split Security Features ============================================== */
/**
  * @brief Indexes in SPU135.FEATURES controlling access permissions of features with split security
  */
typedef enum {
  NRF_SECURE_SPU135_FEATURES_DPPIC134_CH_0   = 32,   /*!< Index of access permissions for channel 0 of DPPIC134                */
  NRF_SECURE_SPU135_FEATURES_DPPIC134_CH_1   = 33,   /*!< Index of access permissions for channel 1 of DPPIC134                */
  NRF_SECURE_SPU135_FEATURES_DPPIC134_CH_2   = 34,   /*!< Index of access permissions for channel 2 of DPPIC134                */
  NRF_SECURE_SPU135_FEATURES_DPPIC134_CH_3   = 35,   /*!< Index of access permissions for channel 3 of DPPIC134                */
  NRF_SECURE_SPU135_FEATURES_DPPIC134_CH_4   = 36,   /*!< Index of access permissions for channel 4 of DPPIC134                */
  NRF_SECURE_SPU135_FEATURES_DPPIC134_CH_5   = 37,   /*!< Index of access permissions for channel 5 of DPPIC134                */
  NRF_SECURE_SPU135_FEATURES_DPPIC134_CH_6   = 38,   /*!< Index of access permissions for channel 6 of DPPIC134                */
  NRF_SECURE_SPU135_FEATURES_DPPIC134_CH_7   = 39,   /*!< Index of access permissions for channel 7 of DPPIC134                */
  NRF_SECURE_SPU135_FEATURES_DPPIC134_CHG_0  = 56,   /*!< Index of access permissions for channel group 0 of DPPIC134          */
  NRF_SECURE_SPU135_FEATURES_DPPIC134_CHG_1  = 57,   /*!< Index of access permissions for channel group 1 of DPPIC134          */
} NRF_SECURE_SPU135_FEATURES_ENUM_t;

/* ============================================= SPU136 Split Security Features ============================================== */
/**
  * @brief Indexes in SPU136.FEATURES controlling access permissions of features with split security
  */
typedef enum {
  NRF_SECURE_SPU136_FEATURES_DPPIC135_CH_0   = 32,   /*!< Index of access permissions for channel 0 of DPPIC135                */
  NRF_SECURE_SPU136_FEATURES_DPPIC135_CH_1   = 33,   /*!< Index of access permissions for channel 1 of DPPIC135                */
  NRF_SECURE_SPU136_FEATURES_DPPIC135_CH_2   = 34,   /*!< Index of access permissions for channel 2 of DPPIC135                */
  NRF_SECURE_SPU136_FEATURES_DPPIC135_CH_3   = 35,   /*!< Index of access permissions for channel 3 of DPPIC135                */
  NRF_SECURE_SPU136_FEATURES_DPPIC135_CH_4   = 36,   /*!< Index of access permissions for channel 4 of DPPIC135                */
  NRF_SECURE_SPU136_FEATURES_DPPIC135_CH_5   = 37,   /*!< Index of access permissions for channel 5 of DPPIC135                */
  NRF_SECURE_SPU136_FEATURES_DPPIC135_CH_6   = 38,   /*!< Index of access permissions for channel 6 of DPPIC135                */
  NRF_SECURE_SPU136_FEATURES_DPPIC135_CH_7   = 39,   /*!< Index of access permissions for channel 7 of DPPIC135                */
  NRF_SECURE_SPU136_FEATURES_DPPIC135_CHG_0  = 56,   /*!< Index of access permissions for channel group 0 of DPPIC135          */
  NRF_SECURE_SPU136_FEATURES_DPPIC135_CHG_1  = 57,   /*!< Index of access permissions for channel group 1 of DPPIC135          */
} NRF_SECURE_SPU136_FEATURES_ENUM_t;

/* ============================================= SPU137 Split Security Features ============================================== */
/**
  * @brief Indexes in SPU137.FEATURES controlling access permissions of features with split security
  */
typedef enum {
  NRF_SECURE_SPU137_FEATURES_DPPIC136_CH_0   = 32,   /*!< Index of access permissions for channel 0 of DPPIC136                */
  NRF_SECURE_SPU137_FEATURES_DPPIC136_CH_1   = 33,   /*!< Index of access permissions for channel 1 of DPPIC136                */
  NRF_SECURE_SPU137_FEATURES_DPPIC136_CH_2   = 34,   /*!< Index of access permissions for channel 2 of DPPIC136                */
  NRF_SECURE_SPU137_FEATURES_DPPIC136_CH_3   = 35,   /*!< Index of access permissions for channel 3 of DPPIC136                */
  NRF_SECURE_SPU137_FEATURES_DPPIC136_CH_4   = 36,   /*!< Index of access permissions for channel 4 of DPPIC136                */
  NRF_SECURE_SPU137_FEATURES_DPPIC136_CH_5   = 37,   /*!< Index of access permissions for channel 5 of DPPIC136                */
  NRF_SECURE_SPU137_FEATURES_DPPIC136_CH_6   = 38,   /*!< Index of access permissions for channel 6 of DPPIC136                */
  NRF_SECURE_SPU137_FEATURES_DPPIC136_CH_7   = 39,   /*!< Index of access permissions for channel 7 of DPPIC136                */
  NRF_SECURE_SPU137_FEATURES_DPPIC136_CHG_0  = 56,   /*!< Index of access permissions for channel group 0 of DPPIC136          */
  NRF_SECURE_SPU137_FEATURES_DPPIC136_CHG_1  = 57,   /*!< Index of access permissions for channel group 1 of DPPIC136          */
} NRF_SECURE_SPU137_FEATURES_ENUM_t;


#ifdef __cplusplus
}
#endif
#endif /* NRF9230_SECURE_PERIPHERALS_H */

