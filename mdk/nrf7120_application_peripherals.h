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

#ifndef NRF7120_APPLICATION_PERIPHERALS_H
#define NRF7120_APPLICATION_PERIPHERALS_H

#ifdef __cplusplus
    extern "C" {
#endif

#include <stdbool.h>
/*CACHEDATA*/
#define CACHEDATA_PRESENT 1
#define CACHEDATA_COUNT 1

#define ICACHEDATA_NUMSETS_MIN 0                     /*!< Number of sets : 0..127                                              */
#define ICACHEDATA_NUMSETS_MAX 127                   /*!< Number of sets : 0..127                                              */
#define ICACHEDATA_NUMSETS_SIZE 128                  /*!< Number of sets : 0..127                                              */
#define ICACHEDATA_NUMWAYS_MIN 0                     /*!< Number of ways : 0..1                                                */
#define ICACHEDATA_NUMWAYS_MAX 1                     /*!< Number of ways : 0..1                                                */
#define ICACHEDATA_NUMWAYS_SIZE 2                    /*!< Number of ways : 0..1                                                */
#define ICACHEDATA_NUMDATAUNIT_MIN 0                 /*!< Number of data units : 0..3                                          */
#define ICACHEDATA_NUMDATAUNIT_MAX 3                 /*!< Number of data units : 0..3                                          */
#define ICACHEDATA_NUMDATAUNIT_SIZE 4                /*!< Number of data units : 0..3                                          */
#define ICACHEDATA_DATAWIDTH_MIN 0                   /*!< Data width of a data unit : 0..1 words                               */
#define ICACHEDATA_DATAWIDTH_MAX 1                   /*!< Data width of a data unit : 0..1 words                               */
#define ICACHEDATA_DATAWIDTH_SIZE 2                  /*!< Data width of a data unit : 0..1 words                               */

/*CACHEINFO*/
#define CACHEINFO_PRESENT 1
#define CACHEINFO_COUNT 1

#define ICACHEINFO_NUMSETS_MIN 0                     /*!< Number of sets : 0..127                                              */
#define ICACHEINFO_NUMSETS_MAX 127                   /*!< Number of sets : 0..127                                              */
#define ICACHEINFO_NUMSETS_SIZE 128                  /*!< Number of sets : 0..127                                              */
#define ICACHEINFO_NUMWAYS_MIN 0                     /*!< Number of ways : 0..1                                                */
#define ICACHEINFO_NUMWAYS_MAX 1                     /*!< Number of ways : 0..1                                                */
#define ICACHEINFO_NUMWAYS_SIZE 2                    /*!< Number of ways : 0..1                                                */
#define ICACHEINFO_NUMDATAUNIT_MIN 0                 /*!< Number of data units : 0..7                                          */
#define ICACHEINFO_NUMDATAUNIT_MAX 7                 /*!< Number of data units : 0..7                                          */
#define ICACHEINFO_NUMDATAUNIT_SIZE 8                /*!< Number of data units : 0..7                                          */
#define ICACHEINFO_DATAWIDTH_MIN 0                   /*!< Data width of a data unit : 0..3 words                               */
#define ICACHEINFO_DATAWIDTH_MAX 3                   /*!< Data width of a data unit : 0..3 words                               */
#define ICACHEINFO_DATAWIDTH_SIZE 4                  /*!< Data width of a data unit : 0..3 words                               */
#define ICACHEINFO_TAGWIDTH_MIN 0                    /*!< TAG width : 0..23                                                    */
#define ICACHEINFO_TAGWIDTH_MAX 23                   /*!< TAG width : 0..23                                                    */
#define ICACHEINFO_TAGWIDTH_SIZE 24                  /*!< TAG width : 0..23                                                    */
#define ICACHEINFO_DU_EXTENSION 0                    /*!< (unspecified)                                                        */

/*Trace Port Interface Unit*/
#define TPIU_PRESENT 1
#define TPIU_COUNT 1

/*Embedded Trace Macrocell*/
#define ETM_PRESENT 1
#define ETM_COUNT 1

/*CPU control*/
#define CPUC_PRESENT 1
#define CPUC_COUNT 1

/*Cache*/
#define CACHE_PRESENT 1
#define CACHE_COUNT 1

#define ICACHE_VIRTUALCACHE 0                        /*!< (unspecified)                                                        */
#define ICACHE_FLUSH 0                               /*!< (unspecified)                                                        */
#define ICACHE_CLEAN 0                               /*!< (unspecified)                                                        */
#define ICACHE_NONCACHEABLEMISS 0                    /*!< (unspecified)                                                        */
#define ICACHE_BUSWIDTH_MIN 0                        /*!< Data bus width : 0..63                                               */
#define ICACHE_BUSWIDTH_MAX 63                       /*!< Data bus width : 0..63                                               */
#define ICACHE_BUSWIDTH_SIZE 64                      /*!< Data bus width : 0..63                                               */

/*Software interrupt*/
#define SWI_PRESENT 1
#define SWI_COUNT 4

/*Factory Information Configuration Registers*/
#define FICR_PRESENT 1
#define FICR_COUNT 1

/*User Information Configuration Registers*/
#define UICR_PRESENT 1
#define UICR_COUNT 1

#define UICR_USERCNF 1                               /*!< (unspecified)                                                        */
#define UICR_MRAM 1                                  /*!< (unspecified)                                                        */

/*Factory Information Configuration Registers*/
#define SICR_PRESENT 1
#define SICR_COUNT 1

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
#define CRACENCORE_PKE_DATA_MEMORY 0x50018000        /*!< (unspecified)                                                        */
#define CRACENCORE_PKE_DATA_MEMORY_SIZE 16384        /*!< (unspecified)                                                        */
#define CRACENCORE_PKE_CODE_MEMORY 0x5001C000        /*!< (unspecified)                                                        */
#define CRACENCORE_PKE_CODE_MEMORY_SIZE 8192         /*!< (unspecified)                                                        */

/*System protection unit*/
#define SPU_PRESENT 1
#define SPU_COUNT 4

#define SPU00_FLATFEATURES 0                         /*!< (unspecified)                                                        */
#define SPU00_NESTEDFEATURES 1                       /*!< (unspecified)                                                        */
#define SPU00_GRTCSECONDARYOFFSET 1                  /*!< (unspecified)                                                        */
#define SPU00_BELLS 0                                /*!< (unspecified)                                                        */
#define SPU00_IPCT 0                                 /*!< (unspecified)                                                        */
#define SPU00_DPPI 1                                 /*!< (unspecified)                                                        */
#define SPU00_GPIOTE 0                               /*!< (unspecified)                                                        */
#define SPU00_GRTC 0                                 /*!< (unspecified)                                                        */
#define SPU00_GPIO 1                                 /*!< (unspecified)                                                        */
#define SPU00_CRACEN 1                               /*!< (unspecified)                                                        */
#define SPU00_MRAMC 0                                /*!< (unspecified)                                                        */
#define SPU00_COEXC 0                                /*!< (unspecified)                                                        */
#define SPU00_ANTSWC 0                               /*!< (unspecified)                                                        */
#define SPU00_TDD 0                                  /*!< (unspecified)                                                        */
#define SPU00_SLAVE_BITS 4                           /*!< SLAVE_BITS=4 (number of address bits required to represent the
                                                          peripheral slave index)*/
#define SPU00_SPU_NUM_CLOCK_POWER_PAIR_MIN 0         /*!< Number of clock/power pairs used by PCGC Slave - [0..0]              */
#define SPU00_SPU_NUM_CLOCK_POWER_PAIR_MAX 0         /*!< Number of clock/power pairs used by PCGC Slave - [0..0]              */
#define SPU00_SPU_NUM_CLOCK_POWER_PAIR_SIZE 1        /*!< Number of clock/power pairs used by PCGC Slave - [0..0]              */
#define SPU00_SPU_NOTFULLPCPZERO 0                   /*!< (unspecified)                                                        */
#define SPU00_PENALTYTASKS 0                         /*!< (unspecified)                                                        */

#define SPU10_FLATFEATURES 0                         /*!< (unspecified)                                                        */
#define SPU10_NESTEDFEATURES 1                       /*!< (unspecified)                                                        */
#define SPU10_GRTCSECONDARYOFFSET 1                  /*!< (unspecified)                                                        */
#define SPU10_BELLS 0                                /*!< (unspecified)                                                        */
#define SPU10_IPCT 0                                 /*!< (unspecified)                                                        */
#define SPU10_DPPI 1                                 /*!< (unspecified)                                                        */
#define SPU10_GPIOTE 0                               /*!< (unspecified)                                                        */
#define SPU10_GRTC 0                                 /*!< (unspecified)                                                        */
#define SPU10_GPIO 0                                 /*!< (unspecified)                                                        */
#define SPU10_CRACEN 0                               /*!< (unspecified)                                                        */
#define SPU10_MRAMC 0                                /*!< (unspecified)                                                        */
#define SPU10_COEXC 0                                /*!< (unspecified)                                                        */
#define SPU10_ANTSWC 0                               /*!< (unspecified)                                                        */
#define SPU10_TDD 0                                  /*!< (unspecified)                                                        */
#define SPU10_SLAVE_BITS 4                           /*!< SLAVE_BITS=4 (number of address bits required to represent the
                                                          peripheral slave index)*/
#define SPU10_SPU_NUM_CLOCK_POWER_PAIR_MIN 0         /*!< Number of clock/power pairs used by PCGC Slave - [0..0]              */
#define SPU10_SPU_NUM_CLOCK_POWER_PAIR_MAX 0         /*!< Number of clock/power pairs used by PCGC Slave - [0..0]              */
#define SPU10_SPU_NUM_CLOCK_POWER_PAIR_SIZE 1        /*!< Number of clock/power pairs used by PCGC Slave - [0..0]              */
#define SPU10_SPU_NOTFULLPCPZERO 0                   /*!< (unspecified)                                                        */
#define SPU10_PENALTYTASKS 0                         /*!< (unspecified)                                                        */

#define SPU20_FLATFEATURES 0                         /*!< (unspecified)                                                        */
#define SPU20_NESTEDFEATURES 1                       /*!< (unspecified)                                                        */
#define SPU20_GRTCSECONDARYOFFSET 1                  /*!< (unspecified)                                                        */
#define SPU20_BELLS 0                                /*!< (unspecified)                                                        */
#define SPU20_IPCT 0                                 /*!< (unspecified)                                                        */
#define SPU20_DPPI 1                                 /*!< (unspecified)                                                        */
#define SPU20_GPIOTE 1                               /*!< (unspecified)                                                        */
#define SPU20_GRTC 1                                 /*!< (unspecified)                                                        */
#define SPU20_GPIO 1                                 /*!< (unspecified)                                                        */
#define SPU20_CRACEN 0                               /*!< (unspecified)                                                        */
#define SPU20_MRAMC 0                                /*!< (unspecified)                                                        */
#define SPU20_COEXC 0                                /*!< (unspecified)                                                        */
#define SPU20_ANTSWC 0                               /*!< (unspecified)                                                        */
#define SPU20_TDD 0                                  /*!< (unspecified)                                                        */
#define SPU20_SLAVE_BITS 4                           /*!< SLAVE_BITS=4 (number of address bits required to represent the
                                                          peripheral slave index)*/
#define SPU20_SPU_NUM_CLOCK_POWER_PAIR_MIN 0         /*!< Number of clock/power pairs used by PCGC Slave - [0..0]              */
#define SPU20_SPU_NUM_CLOCK_POWER_PAIR_MAX 0         /*!< Number of clock/power pairs used by PCGC Slave - [0..0]              */
#define SPU20_SPU_NUM_CLOCK_POWER_PAIR_SIZE 1        /*!< Number of clock/power pairs used by PCGC Slave - [0..0]              */
#define SPU20_SPU_NOTFULLPCPZERO 0                   /*!< (unspecified)                                                        */
#define SPU20_PENALTYTASKS 0                         /*!< (unspecified)                                                        */

#define SPU30_FLATFEATURES 0                         /*!< (unspecified)                                                        */
#define SPU30_NESTEDFEATURES 1                       /*!< (unspecified)                                                        */
#define SPU30_GRTCSECONDARYOFFSET 1                  /*!< (unspecified)                                                        */
#define SPU30_BELLS 0                                /*!< (unspecified)                                                        */
#define SPU30_IPCT 0                                 /*!< (unspecified)                                                        */
#define SPU30_DPPI 1                                 /*!< (unspecified)                                                        */
#define SPU30_GPIOTE 1                               /*!< (unspecified)                                                        */
#define SPU30_GRTC 0                                 /*!< (unspecified)                                                        */
#define SPU30_GPIO 1                                 /*!< (unspecified)                                                        */
#define SPU30_CRACEN 0                               /*!< (unspecified)                                                        */
#define SPU30_MRAMC 0                                /*!< (unspecified)                                                        */
#define SPU30_COEXC 0                                /*!< (unspecified)                                                        */
#define SPU30_ANTSWC 0                               /*!< (unspecified)                                                        */
#define SPU30_TDD 0                                  /*!< (unspecified)                                                        */
#define SPU30_SLAVE_BITS 4                           /*!< SLAVE_BITS=4 (number of address bits required to represent the
                                                          peripheral slave index)*/
#define SPU30_SPU_NUM_CLOCK_POWER_PAIR_MIN 0         /*!< Number of clock/power pairs used by PCGC Slave - [0..0]              */
#define SPU30_SPU_NUM_CLOCK_POWER_PAIR_MAX 0         /*!< Number of clock/power pairs used by PCGC Slave - [0..0]              */
#define SPU30_SPU_NUM_CLOCK_POWER_PAIR_SIZE 1        /*!< Number of clock/power pairs used by PCGC Slave - [0..0]              */
#define SPU30_SPU_NOTFULLPCPZERO 0                   /*!< (unspecified)                                                        */
#define SPU30_PENALTYTASKS 0                         /*!< (unspecified)                                                        */

/*Memory Privilege Controller*/
#define MPC_PRESENT 1
#define MPC_COUNT 1

#define MPC00_EXTEND_CLOCK_REQ 0                     /*!< (unspecified)                                                        */
#define MPC00_RTCHOKE 0                              /*!< (unspecified)                                                        */
#define MPC00_OVERRIDE_GRAN 4096                     /*!< The override region granularity is 4096 bytes                        */

/*Distributed programmable peripheral interconnect controller*/
#define DPPIC_PRESENT 1
#define DPPIC_COUNT 4

#define DPPIC00_HASCHANNELGROUPS 1                   /*!< (unspecified)                                                        */
#define DPPIC00_CH_NUM_MIN 0                         /*!< (unspecified)                                                        */
#define DPPIC00_CH_NUM_MAX 15                        /*!< (unspecified)                                                        */
#define DPPIC00_CH_NUM_SIZE 16                       /*!< (unspecified)                                                        */
#define DPPIC00_GROUP_NUM_MIN 0                      /*!< (unspecified)                                                        */
#define DPPIC00_GROUP_NUM_MAX 1                      /*!< (unspecified)                                                        */
#define DPPIC00_GROUP_NUM_SIZE 2                     /*!< (unspecified)                                                        */

#define DPPIC10_HASCHANNELGROUPS 1                   /*!< (unspecified)                                                        */
#define DPPIC10_CH_NUM_MIN 0                         /*!< (unspecified)                                                        */
#define DPPIC10_CH_NUM_MAX 23                        /*!< (unspecified)                                                        */
#define DPPIC10_CH_NUM_SIZE 24                       /*!< (unspecified)                                                        */
#define DPPIC10_GROUP_NUM_MIN 0                      /*!< (unspecified)                                                        */
#define DPPIC10_GROUP_NUM_MAX 5                      /*!< (unspecified)                                                        */
#define DPPIC10_GROUP_NUM_SIZE 6                     /*!< (unspecified)                                                        */

#define DPPIC20_HASCHANNELGROUPS 1                   /*!< (unspecified)                                                        */
#define DPPIC20_CH_NUM_MIN 0                         /*!< (unspecified)                                                        */
#define DPPIC20_CH_NUM_MAX 15                        /*!< (unspecified)                                                        */
#define DPPIC20_CH_NUM_SIZE 16                       /*!< (unspecified)                                                        */
#define DPPIC20_GROUP_NUM_MIN 0                      /*!< (unspecified)                                                        */
#define DPPIC20_GROUP_NUM_MAX 5                      /*!< (unspecified)                                                        */
#define DPPIC20_GROUP_NUM_SIZE 6                     /*!< (unspecified)                                                        */

#define DPPIC30_HASCHANNELGROUPS 1                   /*!< (unspecified)                                                        */
#define DPPIC30_CH_NUM_MIN 0                         /*!< (unspecified)                                                        */
#define DPPIC30_CH_NUM_MAX 3                         /*!< (unspecified)                                                        */
#define DPPIC30_CH_NUM_SIZE 4                        /*!< (unspecified)                                                        */
#define DPPIC30_GROUP_NUM_MIN 0                      /*!< (unspecified)                                                        */
#define DPPIC30_GROUP_NUM_MAX 1                      /*!< (unspecified)                                                        */
#define DPPIC30_GROUP_NUM_SIZE 2                     /*!< (unspecified)                                                        */

/*PPIB APB registers*/
#define PPIB_PRESENT 1
#define PPIB_COUNT 8

#define PPIB00_NTASKSEVENTS_MIN 0                    /*!< (unspecified)                                                        */
#define PPIB00_NTASKSEVENTS_MAX 11                   /*!< (unspecified)                                                        */
#define PPIB00_NTASKSEVENTS_SIZE 12                  /*!< (unspecified)                                                        */

#define PPIB01_NTASKSEVENTS_MIN 0                    /*!< (unspecified)                                                        */
#define PPIB01_NTASKSEVENTS_MAX 7                    /*!< (unspecified)                                                        */
#define PPIB01_NTASKSEVENTS_SIZE 8                   /*!< (unspecified)                                                        */

#define PPIB10_NTASKSEVENTS_MIN 0                    /*!< (unspecified)                                                        */
#define PPIB10_NTASKSEVENTS_MAX 7                    /*!< (unspecified)                                                        */
#define PPIB10_NTASKSEVENTS_SIZE 8                   /*!< (unspecified)                                                        */

#define PPIB11_NTASKSEVENTS_MIN 0                    /*!< (unspecified)                                                        */
#define PPIB11_NTASKSEVENTS_MAX 7                    /*!< (unspecified)                                                        */
#define PPIB11_NTASKSEVENTS_SIZE 8                   /*!< (unspecified)                                                        */

#define PPIB20_NTASKSEVENTS_MIN 0                    /*!< (unspecified)                                                        */
#define PPIB20_NTASKSEVENTS_MAX 7                    /*!< (unspecified)                                                        */
#define PPIB20_NTASKSEVENTS_SIZE 8                   /*!< (unspecified)                                                        */

#define PPIB21_NTASKSEVENTS_MIN 0                    /*!< (unspecified)                                                        */
#define PPIB21_NTASKSEVENTS_MAX 7                    /*!< (unspecified)                                                        */
#define PPIB21_NTASKSEVENTS_SIZE 8                   /*!< (unspecified)                                                        */

#define PPIB22_NTASKSEVENTS_MIN 0                    /*!< (unspecified)                                                        */
#define PPIB22_NTASKSEVENTS_MAX 3                    /*!< (unspecified)                                                        */
#define PPIB22_NTASKSEVENTS_SIZE 4                   /*!< (unspecified)                                                        */

#define PPIB30_NTASKSEVENTS_MIN 0                    /*!< (unspecified)                                                        */
#define PPIB30_NTASKSEVENTS_MAX 3                    /*!< (unspecified)                                                        */
#define PPIB30_NTASKSEVENTS_SIZE 4                   /*!< (unspecified)                                                        */

/*Key management unit*/
#define KMU_PRESENT 1
#define KMU_COUNT 1

#define KMU_KEYSLOTIDBITS_MIN 0                      /*!< Range of KEYSLOT.ID field (start and end bit position)               */
#define KMU_KEYSLOTIDBITS_MAX 7                      /*!< Range of KEYSLOT.ID field (start and end bit position)               */
#define KMU_KEYSLOTIDBITS_SIZE 8                     /*!< Range of KEYSLOT.ID field (start and end bit position)               */
#define KMU_KEYSLOTNUM 256                           /*!< Number of keyslots is 256                                            */
#define KMU_KEYSLOTBITS 128                          /*!< Number of bits per keyslot is 128                                    */

/*Accelerated Address Resolver*/
#define AAR_PRESENT 1
#define AAR_COUNT 1

#define AAR00_DMAERROR 1                             /*!< (unspecified)                                                        */
#define AAR00_ERRORSTATUS 1                          /*!< (unspecified)                                                        */
#define AAR00_ERROREVENT 1                           /*!< (unspecified)                                                        */

/*AES CCM Mode Encryption*/
#define CCM_PRESENT 1
#define CCM_COUNT 1

#define CCM00_AMOUNTREG 0                            /*!< (unspecified)                                                        */
#define CCM00_ONTHEFLYDECRYPTION 0                   /*!< (unspecified)                                                        */
#define CCM00_DMAERROR 1                             /*!< (unspecified)                                                        */

/*AES ECB Mode Encryption*/
#define ECB_PRESENT 1
#define ECB_COUNT 1

#define ECB00_AMOUNTREG 0                            /*!< (unspecified)                                                        */
#define ECB00_DMAERROR 1                             /*!< (unspecified)                                                        */

/*VPR peripheral registers*/
#define VPR_PRESENT 1
#define VPR_COUNT 1

#define VPR00_INIT_PC_RESET_VALUE 0x00E00000         /*!< Boot vector (INIT_PC_RESET_VALUE): 0x00E00000                        */
#define VPR00_VPR_START_RESET_VALUE 1                /*!< Self-booting (VPR_START_RESET_VALUE): 1                              */
#define VPR00_RAM_BASE_ADDR 0x20000000               /*!< VPR RAM base address (RAM_BASE_ADDR): 0x20000000                     */
#define VPR00_RAM_SZ 20                              /*!< VPR RAM size (RAM_SZ): 20 (Value in bytes is computed as 2^(RAM
                                                          size))*/
#define VPR00_VPRSAVEDCTX_REGNAME NRF_MEMCONF->POWER[1].RET /*!< (unspecified)                                                 */
#define VPR00_VPRSAVEDCTX_REGBIT 0                   /*!< (unspecified)                                                        */
#define VPR00_RETAINED 0                             /*!< Retain registers in Deep Sleep mode: 0                               */
#define VPR00_VPRSAVEDCTX 1                          /*!< (unspecified)                                                        */
#define VPR00_VPRSAVEADDR 0x200FFE00                 /*!< VPR context save address: 0x200FFE00                                 */
#define VPR00_VPRREMAPADDRVTOB 0x00000000            /*!< VPR remap address: 0x00000000                                        */
#define VPR00_VEVIF_NTASKS_MIN 16                    /*!< VEVIF tasks: 16..22                                                  */
#define VPR00_VEVIF_NTASKS_MAX 22                    /*!< VEVIF tasks: 16..22                                                  */
#define VPR00_VEVIF_NTASKS_SIZE 23                   /*!< VEVIF tasks: 16..22                                                  */
#define VPR00_VEVIF_TASKS_MASK 0x007F0000            /*!< Mask of supported VEVIF tasks: 0x007F0000                            */
#define VPR00_VEVIF_NDPPI_MIN 0                      /*!< VEVIF DPPI channels: 0..3                                            */
#define VPR00_VEVIF_NDPPI_MAX 3                      /*!< VEVIF DPPI channels: 0..3                                            */
#define VPR00_VEVIF_NDPPI_SIZE 4                     /*!< VEVIF DPPI channels: 0..3                                            */
#define VPR00_VEVIF_DPPI_MASK 0x000F0000             /*!< Mask of supported VEVIF DPPI channels: 0x000F0000                    */
#define VPR00_VEVIF_NEVENTS_MIN 16                   /*!< VEVIF events: 16..22                                                 */
#define VPR00_VEVIF_NEVENTS_MAX 22                   /*!< VEVIF events: 16..22                                                 */
#define VPR00_VEVIF_NEVENTS_SIZE 23                  /*!< VEVIF events: 16..22                                                 */
#define VPR00_VEVIF_EVENTS_MASK 0x00100000           /*!< Mask of supported VEVIF events: 0x00100000                           */
#define VPR00_DEBUGGER_OFFSET 1024                   /*!< Debugger interface register offset: 0x5004C400                       */

/*Serial Peripheral Interface Master with EasyDMA*/
#define SPIM_PRESENT 1
#define SPIM_COUNT 9

#define SPIM00_EASYDMA5 1                            /*!< (unspecified)                                                        */
#define SPIM00_EASYDMATEMP 0                         /*!< (unspecified)                                                        */
#define SPIM00_EASYDMALISTINCLUDED 1                 /*!< (unspecified)                                                        */
#define SPIM00_EASYDMAMODEINCLUDED 0                 /*!< (unspecified)                                                        */
#define SPIM00_EASYDMAFULLLPMODEINCLUDED 0           /*!< (unspecified)                                                        */
#define SPIM00_EASYDMAPATTERNMATCHERINCLUDED 1       /*!< (unspecified)                                                        */
#define SPIM00_EASYDMANUMMATCHCHANNELS_MIN 0         /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIM00_EASYDMANUMMATCHCHANNELS_MAX 3         /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIM00_EASYDMANUMMATCHCHANNELS_SIZE 4        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIM00_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 0 /*!< (unspecified)                                                   */
#define SPIM00_EASYDMASTOPTASKINCLUDED 1             /*!< (unspecified)                                                        */
#define SPIM00_MAX_DATARATE 32                       /*!< (unspecified)                                                        */
#define SPIM00_EASYDMA_MAXCNT_MIN 0                  /*!< (unspecified)                                                        */
#define SPIM00_EASYDMA_MAXCNT_MAX 15                 /*!< (unspecified)                                                        */
#define SPIM00_EASYDMA_MAXCNT_SIZE 16                /*!< (unspecified)                                                        */
#define SPIM00_FEATURE_HARDWARE_CSN_PRESENT 1        /*!< (unspecified)                                                        */
#define SPIM00_FEATURE_HARDWARE_DCX_PRESENT 1        /*!< (unspecified)                                                        */
#define SPIM00_FEATURE_RXDELAY_PRESENT 1             /*!< (unspecified)                                                        */
#define SPIM00_STALL_STATUS_PRESENT 0                /*!< (unspecified)                                                        */
#define SPIM00_STALL_STATUS_TX_PRESENT 1             /*!< (unspecified)                                                        */
#define SPIM00_HSSPI 0                               /*!< (unspecified)                                                        */
#define SPIM00_HIGH_SPEED_DOMAIN 0                   /*!< (unspecified)                                                        */
#define SPIM00_MULTIPLE_CHIPSELECT 0                 /*!< (unspecified)                                                        */
#define SPIM00_NUM_CHIPSELECT_MIN 0                  /*!< Peripheral supports 0..0 chip select signals.                        */
#define SPIM00_NUM_CHIPSELECT_MAX 0                  /*!< Peripheral supports 0..0 chip select signals.                        */
#define SPIM00_NUM_CHIPSELECT_SIZE 1                 /*!< Peripheral supports 0..0 chip select signals.                        */
#define SPIM00_CORE_FREQUENCY 256                    /*!< Peripheral core frequency is 256 MHz.                                */
#define SPIM00_PRESCALER_PRESENT 1                   /*!< (unspecified)                                                        */
#define SPIM00_PRESCALER_DIVISOR_RANGE_MIN 4         /*!< (unspecified)                                                        */
#define SPIM00_PRESCALER_DIVISOR_RANGE_MAX 126       /*!< (unspecified)                                                        */
#define SPIM00_PRESCALER_DIVISOR_RANGE_SIZE 127      /*!< (unspecified)                                                        */
#define SPIM00_RXDELAY_VALUE_RANGE_MIN 0             /*!< (unspecified)                                                        */
#define SPIM00_RXDELAY_VALUE_RANGE_MAX 7             /*!< (unspecified)                                                        */
#define SPIM00_RXDELAY_VALUE_RANGE_SIZE 8            /*!< (unspecified)                                                        */
#define SPIM00_RXDELAY_RESET_VALUE 2                 /*!< (unspecified)                                                        */
#define SPIM00_RXDELAY_FIELD_WIDTH_MIN 0             /*!< (unspecified)                                                        */
#define SPIM00_RXDELAY_FIELD_WIDTH_MAX 2             /*!< (unspecified)                                                        */
#define SPIM00_RXDELAY_FIELD_WIDTH_SIZE 3            /*!< (unspecified)                                                        */

#define SPIM01_EASYDMA5 1                            /*!< (unspecified)                                                        */
#define SPIM01_EASYDMATEMP 0                         /*!< (unspecified)                                                        */
#define SPIM01_EASYDMALISTINCLUDED 1                 /*!< (unspecified)                                                        */
#define SPIM01_EASYDMAMODEINCLUDED 0                 /*!< (unspecified)                                                        */
#define SPIM01_EASYDMAFULLLPMODEINCLUDED 0           /*!< (unspecified)                                                        */
#define SPIM01_EASYDMAPATTERNMATCHERINCLUDED 1       /*!< (unspecified)                                                        */
#define SPIM01_EASYDMANUMMATCHCHANNELS_MIN 0         /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIM01_EASYDMANUMMATCHCHANNELS_MAX 3         /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIM01_EASYDMANUMMATCHCHANNELS_SIZE 4        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIM01_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 0 /*!< (unspecified)                                                   */
#define SPIM01_EASYDMASTOPTASKINCLUDED 1             /*!< (unspecified)                                                        */
#define SPIM01_MAX_DATARATE 32                       /*!< (unspecified)                                                        */
#define SPIM01_EASYDMA_MAXCNT_MIN 0                  /*!< (unspecified)                                                        */
#define SPIM01_EASYDMA_MAXCNT_MAX 15                 /*!< (unspecified)                                                        */
#define SPIM01_EASYDMA_MAXCNT_SIZE 16                /*!< (unspecified)                                                        */
#define SPIM01_FEATURE_HARDWARE_CSN_PRESENT 1        /*!< (unspecified)                                                        */
#define SPIM01_FEATURE_HARDWARE_DCX_PRESENT 1        /*!< (unspecified)                                                        */
#define SPIM01_FEATURE_RXDELAY_PRESENT 1             /*!< (unspecified)                                                        */
#define SPIM01_STALL_STATUS_PRESENT 0                /*!< (unspecified)                                                        */
#define SPIM01_STALL_STATUS_TX_PRESENT 1             /*!< (unspecified)                                                        */
#define SPIM01_HSSPI 0                               /*!< (unspecified)                                                        */
#define SPIM01_HIGH_SPEED_DOMAIN 0                   /*!< (unspecified)                                                        */
#define SPIM01_MULTIPLE_CHIPSELECT 0                 /*!< (unspecified)                                                        */
#define SPIM01_NUM_CHIPSELECT_MIN 0                  /*!< Peripheral supports 0..0 chip select signals.                        */
#define SPIM01_NUM_CHIPSELECT_MAX 0                  /*!< Peripheral supports 0..0 chip select signals.                        */
#define SPIM01_NUM_CHIPSELECT_SIZE 1                 /*!< Peripheral supports 0..0 chip select signals.                        */
#define SPIM01_CORE_FREQUENCY 256                    /*!< Peripheral core frequency is 256 MHz.                                */
#define SPIM01_PRESCALER_PRESENT 1                   /*!< (unspecified)                                                        */
#define SPIM01_PRESCALER_DIVISOR_RANGE_MIN 4         /*!< (unspecified)                                                        */
#define SPIM01_PRESCALER_DIVISOR_RANGE_MAX 126       /*!< (unspecified)                                                        */
#define SPIM01_PRESCALER_DIVISOR_RANGE_SIZE 127      /*!< (unspecified)                                                        */
#define SPIM01_RXDELAY_VALUE_RANGE_MIN 0             /*!< (unspecified)                                                        */
#define SPIM01_RXDELAY_VALUE_RANGE_MAX 7             /*!< (unspecified)                                                        */
#define SPIM01_RXDELAY_VALUE_RANGE_SIZE 8            /*!< (unspecified)                                                        */
#define SPIM01_RXDELAY_RESET_VALUE 2                 /*!< (unspecified)                                                        */
#define SPIM01_RXDELAY_FIELD_WIDTH_MIN 0             /*!< (unspecified)                                                        */
#define SPIM01_RXDELAY_FIELD_WIDTH_MAX 2             /*!< (unspecified)                                                        */
#define SPIM01_RXDELAY_FIELD_WIDTH_SIZE 3            /*!< (unspecified)                                                        */

#define SPIM02_EASYDMA5 1                            /*!< (unspecified)                                                        */
#define SPIM02_EASYDMATEMP 0                         /*!< (unspecified)                                                        */
#define SPIM02_EASYDMALISTINCLUDED 1                 /*!< (unspecified)                                                        */
#define SPIM02_EASYDMAMODEINCLUDED 0                 /*!< (unspecified)                                                        */
#define SPIM02_EASYDMAFULLLPMODEINCLUDED 0           /*!< (unspecified)                                                        */
#define SPIM02_EASYDMAPATTERNMATCHERINCLUDED 1       /*!< (unspecified)                                                        */
#define SPIM02_EASYDMANUMMATCHCHANNELS_MIN 0         /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIM02_EASYDMANUMMATCHCHANNELS_MAX 3         /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIM02_EASYDMANUMMATCHCHANNELS_SIZE 4        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIM02_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 0 /*!< (unspecified)                                                   */
#define SPIM02_EASYDMASTOPTASKINCLUDED 1             /*!< (unspecified)                                                        */
#define SPIM02_MAX_DATARATE 32                       /*!< (unspecified)                                                        */
#define SPIM02_EASYDMA_MAXCNT_MIN 0                  /*!< (unspecified)                                                        */
#define SPIM02_EASYDMA_MAXCNT_MAX 15                 /*!< (unspecified)                                                        */
#define SPIM02_EASYDMA_MAXCNT_SIZE 16                /*!< (unspecified)                                                        */
#define SPIM02_FEATURE_HARDWARE_CSN_PRESENT 1        /*!< (unspecified)                                                        */
#define SPIM02_FEATURE_HARDWARE_DCX_PRESENT 1        /*!< (unspecified)                                                        */
#define SPIM02_FEATURE_RXDELAY_PRESENT 1             /*!< (unspecified)                                                        */
#define SPIM02_STALL_STATUS_PRESENT 0                /*!< (unspecified)                                                        */
#define SPIM02_STALL_STATUS_TX_PRESENT 1             /*!< (unspecified)                                                        */
#define SPIM02_HSSPI 0                               /*!< (unspecified)                                                        */
#define SPIM02_HIGH_SPEED_DOMAIN 0                   /*!< (unspecified)                                                        */
#define SPIM02_MULTIPLE_CHIPSELECT 0                 /*!< (unspecified)                                                        */
#define SPIM02_NUM_CHIPSELECT_MIN 0                  /*!< Peripheral supports 0..0 chip select signals.                        */
#define SPIM02_NUM_CHIPSELECT_MAX 0                  /*!< Peripheral supports 0..0 chip select signals.                        */
#define SPIM02_NUM_CHIPSELECT_SIZE 1                 /*!< Peripheral supports 0..0 chip select signals.                        */
#define SPIM02_CORE_FREQUENCY 256                    /*!< Peripheral core frequency is 256 MHz.                                */
#define SPIM02_PRESCALER_PRESENT 1                   /*!< (unspecified)                                                        */
#define SPIM02_PRESCALER_DIVISOR_RANGE_MIN 4         /*!< (unspecified)                                                        */
#define SPIM02_PRESCALER_DIVISOR_RANGE_MAX 126       /*!< (unspecified)                                                        */
#define SPIM02_PRESCALER_DIVISOR_RANGE_SIZE 127      /*!< (unspecified)                                                        */
#define SPIM02_RXDELAY_VALUE_RANGE_MIN 0             /*!< (unspecified)                                                        */
#define SPIM02_RXDELAY_VALUE_RANGE_MAX 7             /*!< (unspecified)                                                        */
#define SPIM02_RXDELAY_VALUE_RANGE_SIZE 8            /*!< (unspecified)                                                        */
#define SPIM02_RXDELAY_RESET_VALUE 2                 /*!< (unspecified)                                                        */
#define SPIM02_RXDELAY_FIELD_WIDTH_MIN 0             /*!< (unspecified)                                                        */
#define SPIM02_RXDELAY_FIELD_WIDTH_MAX 2             /*!< (unspecified)                                                        */
#define SPIM02_RXDELAY_FIELD_WIDTH_SIZE 3            /*!< (unspecified)                                                        */

#define SPIM20_EASYDMA5 1                            /*!< (unspecified)                                                        */
#define SPIM20_EASYDMATEMP 0                         /*!< (unspecified)                                                        */
#define SPIM20_EASYDMALISTINCLUDED 1                 /*!< (unspecified)                                                        */
#define SPIM20_EASYDMAMODEINCLUDED 0                 /*!< (unspecified)                                                        */
#define SPIM20_EASYDMAFULLLPMODEINCLUDED 0           /*!< (unspecified)                                                        */
#define SPIM20_EASYDMAPATTERNMATCHERINCLUDED 1       /*!< (unspecified)                                                        */
#define SPIM20_EASYDMANUMMATCHCHANNELS_MIN 0         /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIM20_EASYDMANUMMATCHCHANNELS_MAX 3         /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIM20_EASYDMANUMMATCHCHANNELS_SIZE 4        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIM20_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 0 /*!< (unspecified)                                                   */
#define SPIM20_EASYDMASTOPTASKINCLUDED 1             /*!< (unspecified)                                                        */
#define SPIM20_MAX_DATARATE 8                        /*!< (unspecified)                                                        */
#define SPIM20_EASYDMA_MAXCNT_MIN 0                  /*!< (unspecified)                                                        */
#define SPIM20_EASYDMA_MAXCNT_MAX 15                 /*!< (unspecified)                                                        */
#define SPIM20_EASYDMA_MAXCNT_SIZE 16                /*!< (unspecified)                                                        */
#define SPIM20_FEATURE_HARDWARE_CSN_PRESENT 1        /*!< (unspecified)                                                        */
#define SPIM20_FEATURE_HARDWARE_DCX_PRESENT 1        /*!< (unspecified)                                                        */
#define SPIM20_FEATURE_RXDELAY_PRESENT 1             /*!< (unspecified)                                                        */
#define SPIM20_STALL_STATUS_PRESENT 0                /*!< (unspecified)                                                        */
#define SPIM20_STALL_STATUS_TX_PRESENT 0             /*!< (unspecified)                                                        */
#define SPIM20_HSSPI 0                               /*!< (unspecified)                                                        */
#define SPIM20_HIGH_SPEED_DOMAIN 0                   /*!< (unspecified)                                                        */
#define SPIM20_MULTIPLE_CHIPSELECT 0                 /*!< (unspecified)                                                        */
#define SPIM20_NUM_CHIPSELECT_MIN 0                  /*!< Peripheral supports 0..0 chip select signals.                        */
#define SPIM20_NUM_CHIPSELECT_MAX 0                  /*!< Peripheral supports 0..0 chip select signals.                        */
#define SPIM20_NUM_CHIPSELECT_SIZE 1                 /*!< Peripheral supports 0..0 chip select signals.                        */
#define SPIM20_CORE_FREQUENCY 16                     /*!< Peripheral core frequency is 16 MHz.                                 */
#define SPIM20_PRESCALER_PRESENT 1                   /*!< (unspecified)                                                        */
#define SPIM20_PRESCALER_DIVISOR_RANGE_MIN 2         /*!< (unspecified)                                                        */
#define SPIM20_PRESCALER_DIVISOR_RANGE_MAX 126       /*!< (unspecified)                                                        */
#define SPIM20_PRESCALER_DIVISOR_RANGE_SIZE 127      /*!< (unspecified)                                                        */
#define SPIM20_RXDELAY_VALUE_RANGE_MIN 0             /*!< (unspecified)                                                        */
#define SPIM20_RXDELAY_VALUE_RANGE_MAX 7             /*!< (unspecified)                                                        */
#define SPIM20_RXDELAY_VALUE_RANGE_SIZE 8            /*!< (unspecified)                                                        */
#define SPIM20_RXDELAY_RESET_VALUE 1                 /*!< (unspecified)                                                        */
#define SPIM20_RXDELAY_FIELD_WIDTH_MIN 0             /*!< (unspecified)                                                        */
#define SPIM20_RXDELAY_FIELD_WIDTH_MAX 2             /*!< (unspecified)                                                        */
#define SPIM20_RXDELAY_FIELD_WIDTH_SIZE 3            /*!< (unspecified)                                                        */

#define SPIM21_EASYDMA5 1                            /*!< (unspecified)                                                        */
#define SPIM21_EASYDMATEMP 0                         /*!< (unspecified)                                                        */
#define SPIM21_EASYDMALISTINCLUDED 1                 /*!< (unspecified)                                                        */
#define SPIM21_EASYDMAMODEINCLUDED 0                 /*!< (unspecified)                                                        */
#define SPIM21_EASYDMAFULLLPMODEINCLUDED 0           /*!< (unspecified)                                                        */
#define SPIM21_EASYDMAPATTERNMATCHERINCLUDED 1       /*!< (unspecified)                                                        */
#define SPIM21_EASYDMANUMMATCHCHANNELS_MIN 0         /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIM21_EASYDMANUMMATCHCHANNELS_MAX 3         /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIM21_EASYDMANUMMATCHCHANNELS_SIZE 4        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIM21_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 0 /*!< (unspecified)                                                   */
#define SPIM21_EASYDMASTOPTASKINCLUDED 1             /*!< (unspecified)                                                        */
#define SPIM21_MAX_DATARATE 8                        /*!< (unspecified)                                                        */
#define SPIM21_EASYDMA_MAXCNT_MIN 0                  /*!< (unspecified)                                                        */
#define SPIM21_EASYDMA_MAXCNT_MAX 15                 /*!< (unspecified)                                                        */
#define SPIM21_EASYDMA_MAXCNT_SIZE 16                /*!< (unspecified)                                                        */
#define SPIM21_FEATURE_HARDWARE_CSN_PRESENT 1        /*!< (unspecified)                                                        */
#define SPIM21_FEATURE_HARDWARE_DCX_PRESENT 1        /*!< (unspecified)                                                        */
#define SPIM21_FEATURE_RXDELAY_PRESENT 1             /*!< (unspecified)                                                        */
#define SPIM21_STALL_STATUS_PRESENT 0                /*!< (unspecified)                                                        */
#define SPIM21_STALL_STATUS_TX_PRESENT 0             /*!< (unspecified)                                                        */
#define SPIM21_HSSPI 0                               /*!< (unspecified)                                                        */
#define SPIM21_HIGH_SPEED_DOMAIN 0                   /*!< (unspecified)                                                        */
#define SPIM21_MULTIPLE_CHIPSELECT 0                 /*!< (unspecified)                                                        */
#define SPIM21_NUM_CHIPSELECT_MIN 0                  /*!< Peripheral supports 0..0 chip select signals.                        */
#define SPIM21_NUM_CHIPSELECT_MAX 0                  /*!< Peripheral supports 0..0 chip select signals.                        */
#define SPIM21_NUM_CHIPSELECT_SIZE 1                 /*!< Peripheral supports 0..0 chip select signals.                        */
#define SPIM21_CORE_FREQUENCY 16                     /*!< Peripheral core frequency is 16 MHz.                                 */
#define SPIM21_PRESCALER_PRESENT 1                   /*!< (unspecified)                                                        */
#define SPIM21_PRESCALER_DIVISOR_RANGE_MIN 2         /*!< (unspecified)                                                        */
#define SPIM21_PRESCALER_DIVISOR_RANGE_MAX 126       /*!< (unspecified)                                                        */
#define SPIM21_PRESCALER_DIVISOR_RANGE_SIZE 127      /*!< (unspecified)                                                        */
#define SPIM21_RXDELAY_VALUE_RANGE_MIN 0             /*!< (unspecified)                                                        */
#define SPIM21_RXDELAY_VALUE_RANGE_MAX 7             /*!< (unspecified)                                                        */
#define SPIM21_RXDELAY_VALUE_RANGE_SIZE 8            /*!< (unspecified)                                                        */
#define SPIM21_RXDELAY_RESET_VALUE 1                 /*!< (unspecified)                                                        */
#define SPIM21_RXDELAY_FIELD_WIDTH_MIN 0             /*!< (unspecified)                                                        */
#define SPIM21_RXDELAY_FIELD_WIDTH_MAX 2             /*!< (unspecified)                                                        */
#define SPIM21_RXDELAY_FIELD_WIDTH_SIZE 3            /*!< (unspecified)                                                        */

#define SPIM22_EASYDMA5 1                            /*!< (unspecified)                                                        */
#define SPIM22_EASYDMATEMP 0                         /*!< (unspecified)                                                        */
#define SPIM22_EASYDMALISTINCLUDED 1                 /*!< (unspecified)                                                        */
#define SPIM22_EASYDMAMODEINCLUDED 0                 /*!< (unspecified)                                                        */
#define SPIM22_EASYDMAFULLLPMODEINCLUDED 0           /*!< (unspecified)                                                        */
#define SPIM22_EASYDMAPATTERNMATCHERINCLUDED 1       /*!< (unspecified)                                                        */
#define SPIM22_EASYDMANUMMATCHCHANNELS_MIN 0         /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIM22_EASYDMANUMMATCHCHANNELS_MAX 3         /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIM22_EASYDMANUMMATCHCHANNELS_SIZE 4        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIM22_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 0 /*!< (unspecified)                                                   */
#define SPIM22_EASYDMASTOPTASKINCLUDED 1             /*!< (unspecified)                                                        */
#define SPIM22_MAX_DATARATE 8                        /*!< (unspecified)                                                        */
#define SPIM22_EASYDMA_MAXCNT_MIN 0                  /*!< (unspecified)                                                        */
#define SPIM22_EASYDMA_MAXCNT_MAX 15                 /*!< (unspecified)                                                        */
#define SPIM22_EASYDMA_MAXCNT_SIZE 16                /*!< (unspecified)                                                        */
#define SPIM22_FEATURE_HARDWARE_CSN_PRESENT 1        /*!< (unspecified)                                                        */
#define SPIM22_FEATURE_HARDWARE_DCX_PRESENT 0        /*!< (unspecified)                                                        */
#define SPIM22_FEATURE_RXDELAY_PRESENT 1             /*!< (unspecified)                                                        */
#define SPIM22_STALL_STATUS_PRESENT 0                /*!< (unspecified)                                                        */
#define SPIM22_STALL_STATUS_TX_PRESENT 0             /*!< (unspecified)                                                        */
#define SPIM22_HSSPI 0                               /*!< (unspecified)                                                        */
#define SPIM22_HIGH_SPEED_DOMAIN 0                   /*!< (unspecified)                                                        */
#define SPIM22_MULTIPLE_CHIPSELECT 0                 /*!< (unspecified)                                                        */
#define SPIM22_NUM_CHIPSELECT_MIN 0                  /*!< Peripheral supports 0..0 chip select signals.                        */
#define SPIM22_NUM_CHIPSELECT_MAX 0                  /*!< Peripheral supports 0..0 chip select signals.                        */
#define SPIM22_NUM_CHIPSELECT_SIZE 1                 /*!< Peripheral supports 0..0 chip select signals.                        */
#define SPIM22_CORE_FREQUENCY 16                     /*!< Peripheral core frequency is 16 MHz.                                 */
#define SPIM22_PRESCALER_PRESENT 1                   /*!< (unspecified)                                                        */
#define SPIM22_PRESCALER_DIVISOR_RANGE_MIN 2         /*!< (unspecified)                                                        */
#define SPIM22_PRESCALER_DIVISOR_RANGE_MAX 126       /*!< (unspecified)                                                        */
#define SPIM22_PRESCALER_DIVISOR_RANGE_SIZE 127      /*!< (unspecified)                                                        */
#define SPIM22_RXDELAY_VALUE_RANGE_MIN 0             /*!< (unspecified)                                                        */
#define SPIM22_RXDELAY_VALUE_RANGE_MAX 7             /*!< (unspecified)                                                        */
#define SPIM22_RXDELAY_VALUE_RANGE_SIZE 8            /*!< (unspecified)                                                        */
#define SPIM22_RXDELAY_RESET_VALUE 1                 /*!< (unspecified)                                                        */
#define SPIM22_RXDELAY_FIELD_WIDTH_MIN 0             /*!< (unspecified)                                                        */
#define SPIM22_RXDELAY_FIELD_WIDTH_MAX 2             /*!< (unspecified)                                                        */
#define SPIM22_RXDELAY_FIELD_WIDTH_SIZE 3            /*!< (unspecified)                                                        */

#define SPIM23_EASYDMA5 1                            /*!< (unspecified)                                                        */
#define SPIM23_EASYDMATEMP 0                         /*!< (unspecified)                                                        */
#define SPIM23_EASYDMALISTINCLUDED 1                 /*!< (unspecified)                                                        */
#define SPIM23_EASYDMAMODEINCLUDED 0                 /*!< (unspecified)                                                        */
#define SPIM23_EASYDMAFULLLPMODEINCLUDED 0           /*!< (unspecified)                                                        */
#define SPIM23_EASYDMAPATTERNMATCHERINCLUDED 1       /*!< (unspecified)                                                        */
#define SPIM23_EASYDMANUMMATCHCHANNELS_MIN 0         /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIM23_EASYDMANUMMATCHCHANNELS_MAX 3         /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIM23_EASYDMANUMMATCHCHANNELS_SIZE 4        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIM23_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 0 /*!< (unspecified)                                                   */
#define SPIM23_EASYDMASTOPTASKINCLUDED 1             /*!< (unspecified)                                                        */
#define SPIM23_MAX_DATARATE 8                        /*!< (unspecified)                                                        */
#define SPIM23_EASYDMA_MAXCNT_MIN 0                  /*!< (unspecified)                                                        */
#define SPIM23_EASYDMA_MAXCNT_MAX 15                 /*!< (unspecified)                                                        */
#define SPIM23_EASYDMA_MAXCNT_SIZE 16                /*!< (unspecified)                                                        */
#define SPIM23_FEATURE_HARDWARE_CSN_PRESENT 1        /*!< (unspecified)                                                        */
#define SPIM23_FEATURE_HARDWARE_DCX_PRESENT 0        /*!< (unspecified)                                                        */
#define SPIM23_FEATURE_RXDELAY_PRESENT 1             /*!< (unspecified)                                                        */
#define SPIM23_STALL_STATUS_PRESENT 0                /*!< (unspecified)                                                        */
#define SPIM23_STALL_STATUS_TX_PRESENT 0             /*!< (unspecified)                                                        */
#define SPIM23_HSSPI 0                               /*!< (unspecified)                                                        */
#define SPIM23_HIGH_SPEED_DOMAIN 0                   /*!< (unspecified)                                                        */
#define SPIM23_MULTIPLE_CHIPSELECT 0                 /*!< (unspecified)                                                        */
#define SPIM23_NUM_CHIPSELECT_MIN 0                  /*!< Peripheral supports 0..0 chip select signals.                        */
#define SPIM23_NUM_CHIPSELECT_MAX 0                  /*!< Peripheral supports 0..0 chip select signals.                        */
#define SPIM23_NUM_CHIPSELECT_SIZE 1                 /*!< Peripheral supports 0..0 chip select signals.                        */
#define SPIM23_CORE_FREQUENCY 16                     /*!< Peripheral core frequency is 16 MHz.                                 */
#define SPIM23_PRESCALER_PRESENT 1                   /*!< (unspecified)                                                        */
#define SPIM23_PRESCALER_DIVISOR_RANGE_MIN 2         /*!< (unspecified)                                                        */
#define SPIM23_PRESCALER_DIVISOR_RANGE_MAX 126       /*!< (unspecified)                                                        */
#define SPIM23_PRESCALER_DIVISOR_RANGE_SIZE 127      /*!< (unspecified)                                                        */
#define SPIM23_RXDELAY_VALUE_RANGE_MIN 0             /*!< (unspecified)                                                        */
#define SPIM23_RXDELAY_VALUE_RANGE_MAX 7             /*!< (unspecified)                                                        */
#define SPIM23_RXDELAY_VALUE_RANGE_SIZE 8            /*!< (unspecified)                                                        */
#define SPIM23_RXDELAY_RESET_VALUE 1                 /*!< (unspecified)                                                        */
#define SPIM23_RXDELAY_FIELD_WIDTH_MIN 0             /*!< (unspecified)                                                        */
#define SPIM23_RXDELAY_FIELD_WIDTH_MAX 2             /*!< (unspecified)                                                        */
#define SPIM23_RXDELAY_FIELD_WIDTH_SIZE 3            /*!< (unspecified)                                                        */

#define SPIM24_EASYDMA5 1                            /*!< (unspecified)                                                        */
#define SPIM24_EASYDMATEMP 0                         /*!< (unspecified)                                                        */
#define SPIM24_EASYDMALISTINCLUDED 1                 /*!< (unspecified)                                                        */
#define SPIM24_EASYDMAMODEINCLUDED 0                 /*!< (unspecified)                                                        */
#define SPIM24_EASYDMAFULLLPMODEINCLUDED 0           /*!< (unspecified)                                                        */
#define SPIM24_EASYDMAPATTERNMATCHERINCLUDED 1       /*!< (unspecified)                                                        */
#define SPIM24_EASYDMANUMMATCHCHANNELS_MIN 0         /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIM24_EASYDMANUMMATCHCHANNELS_MAX 3         /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIM24_EASYDMANUMMATCHCHANNELS_SIZE 4        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIM24_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 0 /*!< (unspecified)                                                   */
#define SPIM24_EASYDMASTOPTASKINCLUDED 1             /*!< (unspecified)                                                        */
#define SPIM24_MAX_DATARATE 8                        /*!< (unspecified)                                                        */
#define SPIM24_EASYDMA_MAXCNT_MIN 0                  /*!< (unspecified)                                                        */
#define SPIM24_EASYDMA_MAXCNT_MAX 15                 /*!< (unspecified)                                                        */
#define SPIM24_EASYDMA_MAXCNT_SIZE 16                /*!< (unspecified)                                                        */
#define SPIM24_FEATURE_HARDWARE_CSN_PRESENT 1        /*!< (unspecified)                                                        */
#define SPIM24_FEATURE_HARDWARE_DCX_PRESENT 0        /*!< (unspecified)                                                        */
#define SPIM24_FEATURE_RXDELAY_PRESENT 1             /*!< (unspecified)                                                        */
#define SPIM24_STALL_STATUS_PRESENT 0                /*!< (unspecified)                                                        */
#define SPIM24_STALL_STATUS_TX_PRESENT 0             /*!< (unspecified)                                                        */
#define SPIM24_HSSPI 0                               /*!< (unspecified)                                                        */
#define SPIM24_HIGH_SPEED_DOMAIN 0                   /*!< (unspecified)                                                        */
#define SPIM24_MULTIPLE_CHIPSELECT 0                 /*!< (unspecified)                                                        */
#define SPIM24_NUM_CHIPSELECT_MIN 0                  /*!< Peripheral supports 0..0 chip select signals.                        */
#define SPIM24_NUM_CHIPSELECT_MAX 0                  /*!< Peripheral supports 0..0 chip select signals.                        */
#define SPIM24_NUM_CHIPSELECT_SIZE 1                 /*!< Peripheral supports 0..0 chip select signals.                        */
#define SPIM24_CORE_FREQUENCY 16                     /*!< Peripheral core frequency is 16 MHz.                                 */
#define SPIM24_PRESCALER_PRESENT 1                   /*!< (unspecified)                                                        */
#define SPIM24_PRESCALER_DIVISOR_RANGE_MIN 2         /*!< (unspecified)                                                        */
#define SPIM24_PRESCALER_DIVISOR_RANGE_MAX 126       /*!< (unspecified)                                                        */
#define SPIM24_PRESCALER_DIVISOR_RANGE_SIZE 127      /*!< (unspecified)                                                        */
#define SPIM24_RXDELAY_VALUE_RANGE_MIN 0             /*!< (unspecified)                                                        */
#define SPIM24_RXDELAY_VALUE_RANGE_MAX 7             /*!< (unspecified)                                                        */
#define SPIM24_RXDELAY_VALUE_RANGE_SIZE 8            /*!< (unspecified)                                                        */
#define SPIM24_RXDELAY_RESET_VALUE 1                 /*!< (unspecified)                                                        */
#define SPIM24_RXDELAY_FIELD_WIDTH_MIN 0             /*!< (unspecified)                                                        */
#define SPIM24_RXDELAY_FIELD_WIDTH_MAX 2             /*!< (unspecified)                                                        */
#define SPIM24_RXDELAY_FIELD_WIDTH_SIZE 3            /*!< (unspecified)                                                        */

#define SPIM30_EASYDMA5 1                            /*!< (unspecified)                                                        */
#define SPIM30_EASYDMATEMP 0                         /*!< (unspecified)                                                        */
#define SPIM30_EASYDMALISTINCLUDED 1                 /*!< (unspecified)                                                        */
#define SPIM30_EASYDMAMODEINCLUDED 0                 /*!< (unspecified)                                                        */
#define SPIM30_EASYDMAFULLLPMODEINCLUDED 0           /*!< (unspecified)                                                        */
#define SPIM30_EASYDMAPATTERNMATCHERINCLUDED 1       /*!< (unspecified)                                                        */
#define SPIM30_EASYDMANUMMATCHCHANNELS_MIN 0         /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIM30_EASYDMANUMMATCHCHANNELS_MAX 3         /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIM30_EASYDMANUMMATCHCHANNELS_SIZE 4        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIM30_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 0 /*!< (unspecified)                                                   */
#define SPIM30_EASYDMASTOPTASKINCLUDED 1             /*!< (unspecified)                                                        */
#define SPIM30_MAX_DATARATE 8                        /*!< (unspecified)                                                        */
#define SPIM30_EASYDMA_MAXCNT_MIN 0                  /*!< (unspecified)                                                        */
#define SPIM30_EASYDMA_MAXCNT_MAX 15                 /*!< (unspecified)                                                        */
#define SPIM30_EASYDMA_MAXCNT_SIZE 16                /*!< (unspecified)                                                        */
#define SPIM30_FEATURE_HARDWARE_CSN_PRESENT 1        /*!< (unspecified)                                                        */
#define SPIM30_FEATURE_HARDWARE_DCX_PRESENT 0        /*!< (unspecified)                                                        */
#define SPIM30_FEATURE_RXDELAY_PRESENT 1             /*!< (unspecified)                                                        */
#define SPIM30_STALL_STATUS_PRESENT 0                /*!< (unspecified)                                                        */
#define SPIM30_STALL_STATUS_TX_PRESENT 0             /*!< (unspecified)                                                        */
#define SPIM30_HSSPI 0                               /*!< (unspecified)                                                        */
#define SPIM30_HIGH_SPEED_DOMAIN 0                   /*!< (unspecified)                                                        */
#define SPIM30_MULTIPLE_CHIPSELECT 0                 /*!< (unspecified)                                                        */
#define SPIM30_NUM_CHIPSELECT_MIN 0                  /*!< Peripheral supports 0..0 chip select signals.                        */
#define SPIM30_NUM_CHIPSELECT_MAX 0                  /*!< Peripheral supports 0..0 chip select signals.                        */
#define SPIM30_NUM_CHIPSELECT_SIZE 1                 /*!< Peripheral supports 0..0 chip select signals.                        */
#define SPIM30_CORE_FREQUENCY 16                     /*!< Peripheral core frequency is 16 MHz.                                 */
#define SPIM30_PRESCALER_PRESENT 1                   /*!< (unspecified)                                                        */
#define SPIM30_PRESCALER_DIVISOR_RANGE_MIN 2         /*!< (unspecified)                                                        */
#define SPIM30_PRESCALER_DIVISOR_RANGE_MAX 126       /*!< (unspecified)                                                        */
#define SPIM30_PRESCALER_DIVISOR_RANGE_SIZE 127      /*!< (unspecified)                                                        */
#define SPIM30_RXDELAY_VALUE_RANGE_MIN 0             /*!< (unspecified)                                                        */
#define SPIM30_RXDELAY_VALUE_RANGE_MAX 7             /*!< (unspecified)                                                        */
#define SPIM30_RXDELAY_VALUE_RANGE_SIZE 8            /*!< (unspecified)                                                        */
#define SPIM30_RXDELAY_RESET_VALUE 1                 /*!< (unspecified)                                                        */
#define SPIM30_RXDELAY_FIELD_WIDTH_MIN 0             /*!< (unspecified)                                                        */
#define SPIM30_RXDELAY_FIELD_WIDTH_MAX 2             /*!< (unspecified)                                                        */
#define SPIM30_RXDELAY_FIELD_WIDTH_SIZE 3            /*!< (unspecified)                                                        */

/*UART with EasyDMA*/
#define UARTE_PRESENT 1
#define UARTE_COUNT 7

#define UARTE00_EASYDMA_MAXCNT_MIN 0                 /*!< (unspecified)                                                        */
#define UARTE00_EASYDMA_MAXCNT_MAX 15                /*!< (unspecified)                                                        */
#define UARTE00_EASYDMA_MAXCNT_SIZE 16               /*!< (unspecified)                                                        */
#define UARTE00_EASYDMA5 1                           /*!< (unspecified)                                                        */
#define UARTE00_EASYDMATEMP 0                        /*!< (unspecified)                                                        */
#define UARTE00_TIMEOUT_INTERRUPT 1                  /*!< (unspecified)                                                        */
#define UARTE00_CONFIGURABLE_DATA_FRAME_SIZE 1       /*!< (unspecified)                                                        */
#define UARTE00_CORE_FREQUENCY 256                   /*!< Peripheral clock frequency is 256 MHz.                               */
#define UARTE00_CORE_CLOCK_256 1                     /*!< (unspecified)                                                        */
#define UARTE00_SHORTS_ENDTX_STOPTX 1                /*!< (unspecified)                                                        */
#define UARTE00_EASYDMALISTINCLUDED 0                /*!< (unspecified)                                                        */
#define UARTE00_EASYDMAMODEINCLUDED 0                /*!< (unspecified)                                                        */
#define UARTE00_EASYDMAFULLLPMODEINCLUDED 0          /*!< (unspecified)                                                        */
#define UARTE00_EASYDMAPATTERNMATCHERINCLUDED 1      /*!< (unspecified)                                                        */
#define UARTE00_EASYDMANUMMATCHCHANNELS_MIN 0        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define UARTE00_EASYDMANUMMATCHCHANNELS_MAX 3        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define UARTE00_EASYDMANUMMATCHCHANNELS_SIZE 4       /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define UARTE00_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 0 /*!< (unspecified)                                                  */
#define UARTE00_EASYDMASTOPTASKINCLUDED 1            /*!< (unspecified)                                                        */

#define UARTE20_EASYDMA_MAXCNT_MIN 0                 /*!< (unspecified)                                                        */
#define UARTE20_EASYDMA_MAXCNT_MAX 15                /*!< (unspecified)                                                        */
#define UARTE20_EASYDMA_MAXCNT_SIZE 16               /*!< (unspecified)                                                        */
#define UARTE20_EASYDMA5 1                           /*!< (unspecified)                                                        */
#define UARTE20_EASYDMATEMP 0                        /*!< (unspecified)                                                        */
#define UARTE20_TIMEOUT_INTERRUPT 1                  /*!< (unspecified)                                                        */
#define UARTE20_CONFIGURABLE_DATA_FRAME_SIZE 1       /*!< (unspecified)                                                        */
#define UARTE20_CORE_FREQUENCY 16                    /*!< Peripheral clock frequency is 16 MHz.                                */
#define UARTE20_CORE_CLOCK_16 1                      /*!< (unspecified)                                                        */
#define UARTE20_SHORTS_ENDTX_STOPTX 1                /*!< (unspecified)                                                        */
#define UARTE20_EASYDMALISTINCLUDED 0                /*!< (unspecified)                                                        */
#define UARTE20_EASYDMAMODEINCLUDED 0                /*!< (unspecified)                                                        */
#define UARTE20_EASYDMAFULLLPMODEINCLUDED 0          /*!< (unspecified)                                                        */
#define UARTE20_EASYDMAPATTERNMATCHERINCLUDED 1      /*!< (unspecified)                                                        */
#define UARTE20_EASYDMANUMMATCHCHANNELS_MIN 0        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define UARTE20_EASYDMANUMMATCHCHANNELS_MAX 3        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define UARTE20_EASYDMANUMMATCHCHANNELS_SIZE 4       /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define UARTE20_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 0 /*!< (unspecified)                                                  */
#define UARTE20_EASYDMASTOPTASKINCLUDED 1            /*!< (unspecified)                                                        */

#define UARTE21_EASYDMA_MAXCNT_MIN 0                 /*!< (unspecified)                                                        */
#define UARTE21_EASYDMA_MAXCNT_MAX 15                /*!< (unspecified)                                                        */
#define UARTE21_EASYDMA_MAXCNT_SIZE 16               /*!< (unspecified)                                                        */
#define UARTE21_EASYDMA5 1                           /*!< (unspecified)                                                        */
#define UARTE21_EASYDMATEMP 0                        /*!< (unspecified)                                                        */
#define UARTE21_TIMEOUT_INTERRUPT 1                  /*!< (unspecified)                                                        */
#define UARTE21_CONFIGURABLE_DATA_FRAME_SIZE 1       /*!< (unspecified)                                                        */
#define UARTE21_CORE_FREQUENCY 16                    /*!< Peripheral clock frequency is 16 MHz.                                */
#define UARTE21_CORE_CLOCK_16 1                      /*!< (unspecified)                                                        */
#define UARTE21_SHORTS_ENDTX_STOPTX 1                /*!< (unspecified)                                                        */
#define UARTE21_EASYDMALISTINCLUDED 0                /*!< (unspecified)                                                        */
#define UARTE21_EASYDMAMODEINCLUDED 0                /*!< (unspecified)                                                        */
#define UARTE21_EASYDMAFULLLPMODEINCLUDED 0          /*!< (unspecified)                                                        */
#define UARTE21_EASYDMAPATTERNMATCHERINCLUDED 1      /*!< (unspecified)                                                        */
#define UARTE21_EASYDMANUMMATCHCHANNELS_MIN 0        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define UARTE21_EASYDMANUMMATCHCHANNELS_MAX 3        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define UARTE21_EASYDMANUMMATCHCHANNELS_SIZE 4       /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define UARTE21_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 0 /*!< (unspecified)                                                  */
#define UARTE21_EASYDMASTOPTASKINCLUDED 1            /*!< (unspecified)                                                        */

#define UARTE22_EASYDMA_MAXCNT_MIN 0                 /*!< (unspecified)                                                        */
#define UARTE22_EASYDMA_MAXCNT_MAX 15                /*!< (unspecified)                                                        */
#define UARTE22_EASYDMA_MAXCNT_SIZE 16               /*!< (unspecified)                                                        */
#define UARTE22_EASYDMA5 1                           /*!< (unspecified)                                                        */
#define UARTE22_EASYDMATEMP 0                        /*!< (unspecified)                                                        */
#define UARTE22_TIMEOUT_INTERRUPT 1                  /*!< (unspecified)                                                        */
#define UARTE22_CONFIGURABLE_DATA_FRAME_SIZE 1       /*!< (unspecified)                                                        */
#define UARTE22_CORE_FREQUENCY 16                    /*!< Peripheral clock frequency is 16 MHz.                                */
#define UARTE22_CORE_CLOCK_16 1                      /*!< (unspecified)                                                        */
#define UARTE22_SHORTS_ENDTX_STOPTX 1                /*!< (unspecified)                                                        */
#define UARTE22_EASYDMALISTINCLUDED 0                /*!< (unspecified)                                                        */
#define UARTE22_EASYDMAMODEINCLUDED 0                /*!< (unspecified)                                                        */
#define UARTE22_EASYDMAFULLLPMODEINCLUDED 0          /*!< (unspecified)                                                        */
#define UARTE22_EASYDMAPATTERNMATCHERINCLUDED 1      /*!< (unspecified)                                                        */
#define UARTE22_EASYDMANUMMATCHCHANNELS_MIN 0        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define UARTE22_EASYDMANUMMATCHCHANNELS_MAX 3        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define UARTE22_EASYDMANUMMATCHCHANNELS_SIZE 4       /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define UARTE22_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 0 /*!< (unspecified)                                                  */
#define UARTE22_EASYDMASTOPTASKINCLUDED 1            /*!< (unspecified)                                                        */

#define UARTE23_EASYDMA_MAXCNT_MIN 0                 /*!< (unspecified)                                                        */
#define UARTE23_EASYDMA_MAXCNT_MAX 15                /*!< (unspecified)                                                        */
#define UARTE23_EASYDMA_MAXCNT_SIZE 16               /*!< (unspecified)                                                        */
#define UARTE23_EASYDMA5 1                           /*!< (unspecified)                                                        */
#define UARTE23_EASYDMATEMP 0                        /*!< (unspecified)                                                        */
#define UARTE23_TIMEOUT_INTERRUPT 1                  /*!< (unspecified)                                                        */
#define UARTE23_CONFIGURABLE_DATA_FRAME_SIZE 1       /*!< (unspecified)                                                        */
#define UARTE23_CORE_FREQUENCY 16                    /*!< Peripheral clock frequency is 16 MHz.                                */
#define UARTE23_CORE_CLOCK_16 1                      /*!< (unspecified)                                                        */
#define UARTE23_SHORTS_ENDTX_STOPTX 1                /*!< (unspecified)                                                        */
#define UARTE23_EASYDMALISTINCLUDED 0                /*!< (unspecified)                                                        */
#define UARTE23_EASYDMAMODEINCLUDED 0                /*!< (unspecified)                                                        */
#define UARTE23_EASYDMAFULLLPMODEINCLUDED 0          /*!< (unspecified)                                                        */
#define UARTE23_EASYDMAPATTERNMATCHERINCLUDED 1      /*!< (unspecified)                                                        */
#define UARTE23_EASYDMANUMMATCHCHANNELS_MIN 0        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define UARTE23_EASYDMANUMMATCHCHANNELS_MAX 3        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define UARTE23_EASYDMANUMMATCHCHANNELS_SIZE 4       /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define UARTE23_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 0 /*!< (unspecified)                                                  */
#define UARTE23_EASYDMASTOPTASKINCLUDED 1            /*!< (unspecified)                                                        */

#define UARTE24_EASYDMA_MAXCNT_MIN 0                 /*!< (unspecified)                                                        */
#define UARTE24_EASYDMA_MAXCNT_MAX 15                /*!< (unspecified)                                                        */
#define UARTE24_EASYDMA_MAXCNT_SIZE 16               /*!< (unspecified)                                                        */
#define UARTE24_EASYDMA5 1                           /*!< (unspecified)                                                        */
#define UARTE24_EASYDMATEMP 0                        /*!< (unspecified)                                                        */
#define UARTE24_TIMEOUT_INTERRUPT 1                  /*!< (unspecified)                                                        */
#define UARTE24_CONFIGURABLE_DATA_FRAME_SIZE 1       /*!< (unspecified)                                                        */
#define UARTE24_CORE_FREQUENCY 16                    /*!< Peripheral clock frequency is 16 MHz.                                */
#define UARTE24_CORE_CLOCK_16 1                      /*!< (unspecified)                                                        */
#define UARTE24_SHORTS_ENDTX_STOPTX 1                /*!< (unspecified)                                                        */
#define UARTE24_EASYDMALISTINCLUDED 0                /*!< (unspecified)                                                        */
#define UARTE24_EASYDMAMODEINCLUDED 0                /*!< (unspecified)                                                        */
#define UARTE24_EASYDMAFULLLPMODEINCLUDED 0          /*!< (unspecified)                                                        */
#define UARTE24_EASYDMAPATTERNMATCHERINCLUDED 1      /*!< (unspecified)                                                        */
#define UARTE24_EASYDMANUMMATCHCHANNELS_MIN 0        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define UARTE24_EASYDMANUMMATCHCHANNELS_MAX 3        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define UARTE24_EASYDMANUMMATCHCHANNELS_SIZE 4       /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define UARTE24_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 0 /*!< (unspecified)                                                  */
#define UARTE24_EASYDMASTOPTASKINCLUDED 1            /*!< (unspecified)                                                        */

#define UARTE30_EASYDMA_MAXCNT_MIN 0                 /*!< (unspecified)                                                        */
#define UARTE30_EASYDMA_MAXCNT_MAX 15                /*!< (unspecified)                                                        */
#define UARTE30_EASYDMA_MAXCNT_SIZE 16               /*!< (unspecified)                                                        */
#define UARTE30_EASYDMA5 1                           /*!< (unspecified)                                                        */
#define UARTE30_EASYDMATEMP 0                        /*!< (unspecified)                                                        */
#define UARTE30_TIMEOUT_INTERRUPT 1                  /*!< (unspecified)                                                        */
#define UARTE30_CONFIGURABLE_DATA_FRAME_SIZE 1       /*!< (unspecified)                                                        */
#define UARTE30_CORE_FREQUENCY 16                    /*!< Peripheral clock frequency is 16 MHz.                                */
#define UARTE30_CORE_CLOCK_16 1                      /*!< (unspecified)                                                        */
#define UARTE30_SHORTS_ENDTX_STOPTX 1                /*!< (unspecified)                                                        */
#define UARTE30_EASYDMALISTINCLUDED 0                /*!< (unspecified)                                                        */
#define UARTE30_EASYDMAMODEINCLUDED 0                /*!< (unspecified)                                                        */
#define UARTE30_EASYDMAFULLLPMODEINCLUDED 0          /*!< (unspecified)                                                        */
#define UARTE30_EASYDMAPATTERNMATCHERINCLUDED 1      /*!< (unspecified)                                                        */
#define UARTE30_EASYDMANUMMATCHCHANNELS_MIN 0        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define UARTE30_EASYDMANUMMATCHCHANNELS_MAX 3        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define UARTE30_EASYDMANUMMATCHCHANNELS_SIZE 4       /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define UARTE30_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 0 /*!< (unspecified)                                                  */
#define UARTE30_EASYDMASTOPTASKINCLUDED 1            /*!< (unspecified)                                                        */

/*MRAM controller*/
#define MRAMC_PRESENT 1
#define MRAMC_COUNT 1

#define MRAMC_NMRAMWORDSIZE 128                      /*!< (unspecified)                                                        */
#define MRAMC_NMRAMPAGESIZE 4                        /*!< (unspecified)                                                        */
#define MRAMC_NNVRPAGESIZE 4                         /*!< (unspecified)                                                        */
#define MRAMC_NMAINMEMORYSIZE 4                      /*!< MRAM main memory size: 4 MB                                          */
#define MRAMC_NNVRPAGES_MIN 0                        /*!< Number of MRAM NVR pages: 0..1                                       */
#define MRAMC_NNVRPAGES_MAX 1                        /*!< Number of MRAM NVR pages: 0..1                                       */
#define MRAMC_NNVRPAGES_SIZE 2                       /*!< Number of MRAM NVR pages: 0..1                                       */
#define MRAMC_NSIZEMRAMWORDS_MIN 1                   /*!< Register ERASE.SIZE.SIZE range: 1..262144                            */
#define MRAMC_NSIZEMRAMWORDS_MAX 262144              /*!< Register ERASE.SIZE.SIZE range: 1..262144                            */
#define MRAMC_NSIZEMRAMWORDS_SIZE 262145             /*!< Register ERASE.SIZE.SIZE range: 1..262144                            */
#define MRAMC_MARMDATAWIDTHWORDS_MIN 0               /*!< Register TESTMODE2.MRAM.DATA/DATAINC size: 0..3                      */
#define MRAMC_MARMDATAWIDTHWORDS_MAX 3               /*!< Register TESTMODE2.MRAM.DATA/DATAINC size: 0..3                      */
#define MRAMC_MARMDATAWIDTHWORDS_SIZE 4              /*!< Register TESTMODE2.MRAM.DATA/DATAINC size: 0..3                      */
#define MRAMC_NVRPAGEUPPER 1                         /*!< (unspecified)                                                        */
#define MRAMC_NVRPAGELOWER 1                         /*!< (unspecified)                                                        */
#define MRAMC_NVRPAGEENABLENORMALWRITE 1             /*!< (unspecified)                                                        */
#define MRAMC_NVRPAGELRSIZEBITS_MIN 24               /*!< (unspecified)                                                        */
#define MRAMC_NVRPAGELRSIZEBITS_MAX 27               /*!< (unspecified)                                                        */
#define MRAMC_NVRPAGELRSIZEBITS_SIZE 28              /*!< (unspecified)                                                        */
#define MRAMC_NVRPAGELRSIZERESET 15                  /*!< (unspecified)                                                        */
#define MRAMC_NVRPAGELRSIZEVALUE_MIN 0               /*!< (unspecified)                                                        */
#define MRAMC_NVRPAGELRSIZEVALUE_MAX 15              /*!< (unspecified)                                                        */
#define MRAMC_NVRPAGELRSIZEVALUE_SIZE 16             /*!< (unspecified)                                                        */
#define MRAMC_NVRPAGELWSIZEBITS_MIN 28               /*!< (unspecified)                                                        */
#define MRAMC_NVRPAGELWSIZEBITS_MAX 31               /*!< (unspecified)                                                        */
#define MRAMC_NVRPAGELWSIZEBITS_SIZE 32              /*!< (unspecified)                                                        */
#define MRAMC_NVRPAGELWSIZERESET 15                  /*!< (unspecified)                                                        */
#define MRAMC_NVRPAGELWSIZEVALUE_MIN 0               /*!< (unspecified)                                                        */
#define MRAMC_NVRPAGELWSIZEVALUE_MAX 15              /*!< (unspecified)                                                        */
#define MRAMC_NVRPAGELWSIZEVALUE_SIZE 16             /*!< (unspecified)                                                        */
#define MRAMC_IMPROVEDBURSTMODE 1                    /*!< (unspecified)                                                        */

/*GPIO high-speed pad control*/
#define GPIOHSPADCTRL_PRESENT 1
#define GPIOHSPADCTRL_COUNT 1

/*GPIO Port*/
#define GPIO_PRESENT 1
#define GPIO_COUNT 5

#define P2_CTRLSEL_MAP1 0                            /*!< (unspecified)                                                        */
#define P2_CTRLSEL_MAP2 1                            /*!< (unspecified)                                                        */
#define P2_CTRLSEL_MAP3 0                            /*!< (unspecified)                                                        */
#define P2_PIN_NUM_MIN 0                             /*!< (unspecified)                                                        */
#define P2_PIN_NUM_MAX 11                            /*!< (unspecified)                                                        */
#define P2_PIN_NUM_SIZE 12                           /*!< (unspecified)                                                        */
#define P2_FEATURE_PINS_PRESENT 4095                 /*!< (unspecified)                                                        */
#define P2_DRIVECTRL 0                               /*!< (unspecified)                                                        */
#define P2_RETAIN 0                                  /*!< (unspecified)                                                        */
#define P2_PWRCTRL 0                                 /*!< (unspecified)                                                        */
#define P2_PWRCTRL_SEPARATE_REG 0                    /*!< (unspecified)                                                        */
#define P2_VSS_FLOAT_DFT 0                           /*!< (unspecified)                                                        */
#define P2_PIN_OWNER_SEC 0                           /*!< (unspecified)                                                        */
#define P2_WIFI_CORE_PRESENT 0                       /*!< (unspecified)                                                        */
#define P2_RETAIN_PER_PIN 0                          /*!< (unspecified)                                                        */
#define P2_CLOCKPIN 0                                /*!< (unspecified)                                                        */
#define P2_BIASCTRL 0                                /*!< (unspecified)                                                        */

#define P1_CTRLSEL_MAP1 0                            /*!< (unspecified)                                                        */
#define P1_CTRLSEL_MAP2 1                            /*!< (unspecified)                                                        */
#define P1_CTRLSEL_MAP3 0                            /*!< (unspecified)                                                        */
#define P1_PIN_NUM_MIN 0                             /*!< (unspecified)                                                        */
#define P1_PIN_NUM_MAX 19                            /*!< (unspecified)                                                        */
#define P1_PIN_NUM_SIZE 20                           /*!< (unspecified)                                                        */
#define P1_FEATURE_PINS_PRESENT 1048575              /*!< (unspecified)                                                        */
#define P1_DRIVECTRL 0                               /*!< (unspecified)                                                        */
#define P1_RETAIN 0                                  /*!< (unspecified)                                                        */
#define P1_PWRCTRL 0                                 /*!< (unspecified)                                                        */
#define P1_PWRCTRL_SEPARATE_REG 0                    /*!< (unspecified)                                                        */
#define P1_VSS_FLOAT_DFT 0                           /*!< (unspecified)                                                        */
#define P1_PIN_OWNER_SEC 0                           /*!< (unspecified)                                                        */
#define P1_WIFI_CORE_PRESENT 0                       /*!< (unspecified)                                                        */
#define P1_RETAIN_PER_PIN 0                          /*!< (unspecified)                                                        */
#define P1_CLOCKPIN 0                                /*!< (unspecified)                                                        */
#define P1_BIASCTRL 0                                /*!< (unspecified)                                                        */

#define P3_CTRLSEL_MAP1 0                            /*!< (unspecified)                                                        */
#define P3_CTRLSEL_MAP2 1                            /*!< (unspecified)                                                        */
#define P3_CTRLSEL_MAP3 0                            /*!< (unspecified)                                                        */
#define P3_PIN_NUM_MIN 0                             /*!< (unspecified)                                                        */
#define P3_PIN_NUM_MAX 12                            /*!< (unspecified)                                                        */
#define P3_PIN_NUM_SIZE 13                           /*!< (unspecified)                                                        */
#define P3_FEATURE_PINS_PRESENT 8191                 /*!< (unspecified)                                                        */
#define P3_DRIVECTRL 0                               /*!< (unspecified)                                                        */
#define P3_RETAIN 0                                  /*!< (unspecified)                                                        */
#define P3_PWRCTRL 0                                 /*!< (unspecified)                                                        */
#define P3_PWRCTRL_SEPARATE_REG 0                    /*!< (unspecified)                                                        */
#define P3_VSS_FLOAT_DFT 0                           /*!< (unspecified)                                                        */
#define P3_PIN_OWNER_SEC 0                           /*!< (unspecified)                                                        */
#define P3_WIFI_CORE_PRESENT 0                       /*!< (unspecified)                                                        */
#define P3_RETAIN_PER_PIN 0                          /*!< (unspecified)                                                        */
#define P3_CLOCKPIN 0                                /*!< (unspecified)                                                        */
#define P3_BIASCTRL 0                                /*!< (unspecified)                                                        */

#define P4_CTRLSEL_MAP1 0                            /*!< (unspecified)                                                        */
#define P4_CTRLSEL_MAP2 1                            /*!< (unspecified)                                                        */
#define P4_CTRLSEL_MAP3 0                            /*!< (unspecified)                                                        */
#define P4_PIN_NUM_MIN 0                             /*!< (unspecified)                                                        */
#define P4_PIN_NUM_MAX 11                            /*!< (unspecified)                                                        */
#define P4_PIN_NUM_SIZE 12                           /*!< (unspecified)                                                        */
#define P4_FEATURE_PINS_PRESENT 4095                 /*!< (unspecified)                                                        */
#define P4_DRIVECTRL 0                               /*!< (unspecified)                                                        */
#define P4_RETAIN 0                                  /*!< (unspecified)                                                        */
#define P4_PWRCTRL 0                                 /*!< (unspecified)                                                        */
#define P4_PWRCTRL_SEPARATE_REG 0                    /*!< (unspecified)                                                        */
#define P4_VSS_FLOAT_DFT 0                           /*!< (unspecified)                                                        */
#define P4_PIN_OWNER_SEC 0                           /*!< (unspecified)                                                        */
#define P4_WIFI_CORE_PRESENT 0                       /*!< (unspecified)                                                        */
#define P4_RETAIN_PER_PIN 0                          /*!< (unspecified)                                                        */
#define P4_CLOCKPIN 0                                /*!< (unspecified)                                                        */
#define P4_BIASCTRL 0                                /*!< (unspecified)                                                        */

#define P0_CTRLSEL_MAP1 0                            /*!< (unspecified)                                                        */
#define P0_CTRLSEL_MAP2 1                            /*!< (unspecified)                                                        */
#define P0_CTRLSEL_MAP3 0                            /*!< (unspecified)                                                        */
#define P0_PIN_NUM_MIN 0                             /*!< (unspecified)                                                        */
#define P0_PIN_NUM_MAX 9                             /*!< (unspecified)                                                        */
#define P0_PIN_NUM_SIZE 10                           /*!< (unspecified)                                                        */
#define P0_FEATURE_PINS_PRESENT 1023                 /*!< (unspecified)                                                        */
#define P0_DRIVECTRL 0                               /*!< (unspecified)                                                        */
#define P0_RETAIN 0                                  /*!< (unspecified)                                                        */
#define P0_PWRCTRL 0                                 /*!< (unspecified)                                                        */
#define P0_PWRCTRL_SEPARATE_REG 0                    /*!< (unspecified)                                                        */
#define P0_VSS_FLOAT_DFT 0                           /*!< (unspecified)                                                        */
#define P0_PIN_OWNER_SEC 0                           /*!< (unspecified)                                                        */
#define P0_WIFI_CORE_PRESENT 0                       /*!< (unspecified)                                                        */
#define P0_RETAIN_PER_PIN 0                          /*!< (unspecified)                                                        */
#define P0_CLOCKPIN 0                                /*!< (unspecified)                                                        */
#define P0_BIASCTRL 0                                /*!< (unspecified)                                                        */

/*GPIO Internal*/
#define GPIOINTERNAL_PRESENT 1
#define GPIOINTERNAL_COUNT 3

#define GPIOINTERNALP2_TURNOFFAUTOCLOCKSOURCEREQ 0   /*!< (unspecified)                                                        */
#define GPIOINTERNALP2_POWERFORCINGPRE 0             /*!< (unspecified)                                                        */
#define GPIOINTERNALP2_DOFORCEPOWERPRE 0             /*!< (unspecified)                                                        */
#define GPIOINTERNALP2_PENALTYBITS_MIN 0             /*!< (unspecified)                                                        */
#define GPIOINTERNALP2_PENALTYBITS_MAX 1             /*!< (unspecified)                                                        */
#define GPIOINTERNALP2_PENALTYBITS_SIZE 2            /*!< (unspecified)                                                        */

#define GPIOINTERNALP1_TURNOFFAUTOCLOCKSOURCEREQ 0   /*!< (unspecified)                                                        */
#define GPIOINTERNALP1_POWERFORCINGPRE 0             /*!< (unspecified)                                                        */
#define GPIOINTERNALP1_DOFORCEPOWERPRE 0             /*!< (unspecified)                                                        */
#define GPIOINTERNALP1_PENALTYBITS_MIN 0             /*!< (unspecified)                                                        */
#define GPIOINTERNALP1_PENALTYBITS_MAX 1             /*!< (unspecified)                                                        */
#define GPIOINTERNALP1_PENALTYBITS_SIZE 2            /*!< (unspecified)                                                        */

#define GPIOINTERNALP0_TURNOFFAUTOCLOCKSOURCEREQ 0   /*!< (unspecified)                                                        */
#define GPIOINTERNALP0_POWERFORCINGPRE 0             /*!< (unspecified)                                                        */
#define GPIOINTERNALP0_DOFORCEPOWERPRE 0             /*!< (unspecified)                                                        */
#define GPIOINTERNALP0_PENALTYBITS_MIN 0             /*!< (unspecified)                                                        */
#define GPIOINTERNALP0_PENALTYBITS_MAX 1             /*!< (unspecified)                                                        */
#define GPIOINTERNALP0_PENALTYBITS_SIZE 2            /*!< (unspecified)                                                        */

/*Control access port*/
#define CTRLAPPERI_PRESENT 1
#define CTRLAPPERI_COUNT 1

/*Trace and debug control*/
#define TAD_PRESENT 1
#define TAD_COUNT 1

#define TAD_TADFORCEON 0                             /*!< (unspecified)                                                        */
#define TAD_TAD_HAS_TASKS 0                          /*!< (unspecified)                                                        */
#define TAD_PDREQCLR 1                               /*!< (unspecified)                                                        */

/*Timer/Counter*/
#define TIMER_PRESENT 1
#define TIMER_COUNT 7

#define TIMER00_CC_NUM_MIN 0                         /*!< (unspecified)                                                        */
#define TIMER00_CC_NUM_MAX 5                         /*!< (unspecified)                                                        */
#define TIMER00_CC_NUM_SIZE 6                        /*!< (unspecified)                                                        */
#define TIMER00_MAX_SIZE_MIN 0                       /*!< (unspecified)                                                        */
#define TIMER00_MAX_SIZE_MAX 31                      /*!< (unspecified)                                                        */
#define TIMER00_MAX_SIZE_SIZE 32                     /*!< (unspecified)                                                        */
#define TIMER00_PCLK_MHZ 256                         /*!< Peripheral clock frequency (PCLK) is 256 MHz                         */
#define TIMER00_PCLK_VARIABLE 1                      /*!< (unspecified)                                                        */

#define TIMER10_CC_NUM_MIN 0                         /*!< (unspecified)                                                        */
#define TIMER10_CC_NUM_MAX 7                         /*!< (unspecified)                                                        */
#define TIMER10_CC_NUM_SIZE 8                        /*!< (unspecified)                                                        */
#define TIMER10_MAX_SIZE_MIN 0                       /*!< (unspecified)                                                        */
#define TIMER10_MAX_SIZE_MAX 31                      /*!< (unspecified)                                                        */
#define TIMER10_MAX_SIZE_SIZE 32                     /*!< (unspecified)                                                        */
#define TIMER10_PCLK_MHZ 32                          /*!< Peripheral clock frequency (PCLK) is 32 MHz                          */
#define TIMER10_PCLK_VARIABLE 0                      /*!< (unspecified)                                                        */

#define TIMER20_CC_NUM_MIN 0                         /*!< (unspecified)                                                        */
#define TIMER20_CC_NUM_MAX 5                         /*!< (unspecified)                                                        */
#define TIMER20_CC_NUM_SIZE 6                        /*!< (unspecified)                                                        */
#define TIMER20_MAX_SIZE_MIN 0                       /*!< (unspecified)                                                        */
#define TIMER20_MAX_SIZE_MAX 31                      /*!< (unspecified)                                                        */
#define TIMER20_MAX_SIZE_SIZE 32                     /*!< (unspecified)                                                        */
#define TIMER20_PCLK_MHZ 16                          /*!< Peripheral clock frequency (PCLK) is 16 MHz                          */
#define TIMER20_PCLK_VARIABLE 0                      /*!< (unspecified)                                                        */

#define TIMER21_CC_NUM_MIN 0                         /*!< (unspecified)                                                        */
#define TIMER21_CC_NUM_MAX 5                         /*!< (unspecified)                                                        */
#define TIMER21_CC_NUM_SIZE 6                        /*!< (unspecified)                                                        */
#define TIMER21_MAX_SIZE_MIN 0                       /*!< (unspecified)                                                        */
#define TIMER21_MAX_SIZE_MAX 31                      /*!< (unspecified)                                                        */
#define TIMER21_MAX_SIZE_SIZE 32                     /*!< (unspecified)                                                        */
#define TIMER21_PCLK_MHZ 16                          /*!< Peripheral clock frequency (PCLK) is 16 MHz                          */
#define TIMER21_PCLK_VARIABLE 0                      /*!< (unspecified)                                                        */

#define TIMER22_CC_NUM_MIN 0                         /*!< (unspecified)                                                        */
#define TIMER22_CC_NUM_MAX 5                         /*!< (unspecified)                                                        */
#define TIMER22_CC_NUM_SIZE 6                        /*!< (unspecified)                                                        */
#define TIMER22_MAX_SIZE_MIN 0                       /*!< (unspecified)                                                        */
#define TIMER22_MAX_SIZE_MAX 31                      /*!< (unspecified)                                                        */
#define TIMER22_MAX_SIZE_SIZE 32                     /*!< (unspecified)                                                        */
#define TIMER22_PCLK_MHZ 16                          /*!< Peripheral clock frequency (PCLK) is 16 MHz                          */
#define TIMER22_PCLK_VARIABLE 0                      /*!< (unspecified)                                                        */

#define TIMER23_CC_NUM_MIN 0                         /*!< (unspecified)                                                        */
#define TIMER23_CC_NUM_MAX 5                         /*!< (unspecified)                                                        */
#define TIMER23_CC_NUM_SIZE 6                        /*!< (unspecified)                                                        */
#define TIMER23_MAX_SIZE_MIN 0                       /*!< (unspecified)                                                        */
#define TIMER23_MAX_SIZE_MAX 31                      /*!< (unspecified)                                                        */
#define TIMER23_MAX_SIZE_SIZE 32                     /*!< (unspecified)                                                        */
#define TIMER23_PCLK_MHZ 16                          /*!< Peripheral clock frequency (PCLK) is 16 MHz                          */
#define TIMER23_PCLK_VARIABLE 0                      /*!< (unspecified)                                                        */

#define TIMER24_CC_NUM_MIN 0                         /*!< (unspecified)                                                        */
#define TIMER24_CC_NUM_MAX 5                         /*!< (unspecified)                                                        */
#define TIMER24_CC_NUM_SIZE 6                        /*!< (unspecified)                                                        */
#define TIMER24_MAX_SIZE_MIN 0                       /*!< (unspecified)                                                        */
#define TIMER24_MAX_SIZE_MAX 31                      /*!< (unspecified)                                                        */
#define TIMER24_MAX_SIZE_SIZE 32                     /*!< (unspecified)                                                        */
#define TIMER24_PCLK_MHZ 16                          /*!< Peripheral clock frequency (PCLK) is 16 MHz                          */
#define TIMER24_PCLK_VARIABLE 0                      /*!< (unspecified)                                                        */

/*Axon wrapper*/
#define AXONS_PRESENT 1
#define AXONS_COUNT 1

#define AXONS_NUM_CLOCK_POWER_PAIR_MIN 0             /*!< Number of clock/power pairs used by PCGC Slave - [0..1]              */
#define AXONS_NUM_CLOCK_POWER_PAIR_MAX 1             /*!< Number of clock/power pairs used by PCGC Slave - [0..1]              */
#define AXONS_NUM_CLOCK_POWER_PAIR_SIZE 2            /*!< Number of clock/power pairs used by PCGC Slave - [0..1]              */
#define AXONS_NOTFULLPCPZERO 0                       /*!< (unspecified)                                                        */
#define AXONS_PENALTYTASKS 0                         /*!< (unspecified)                                                        */

/*Event generator unit*/
#define EGU_PRESENT 1
#define EGU_COUNT 3

#define EGU00_PEND 0                                 /*!< (unspecified)                                                        */
#define EGU00_CH_NUM_MIN 0                           /*!< (unspecified)                                                        */
#define EGU00_CH_NUM_MAX 5                           /*!< (unspecified)                                                        */
#define EGU00_CH_NUM_SIZE 6                          /*!< (unspecified)                                                        */

#define EGU10_PEND 0                                 /*!< (unspecified)                                                        */
#define EGU10_CH_NUM_MIN 0                           /*!< (unspecified)                                                        */
#define EGU10_CH_NUM_MAX 15                          /*!< (unspecified)                                                        */
#define EGU10_CH_NUM_SIZE 16                         /*!< (unspecified)                                                        */

#define EGU20_PEND 0                                 /*!< (unspecified)                                                        */
#define EGU20_CH_NUM_MIN 0                           /*!< (unspecified)                                                        */
#define EGU20_CH_NUM_MAX 5                           /*!< (unspecified)                                                        */
#define EGU20_CH_NUM_SIZE 6                          /*!< (unspecified)                                                        */

/*CRACEN*/
#define CRACEN_PRESENT 1
#define CRACEN_COUNT 1

#define CRACEN_CRYPTOACCELERATOR 1                   /*!< (unspecified)                                                        */
#define CRACEN_SEEDRAMLOCK 0                         /*!< (unspecified)                                                        */
#define CRACEN_SPLITKEYRAMLOCK 1                     /*!< (unspecified)                                                        */
#define CRACEN_SEEDALIGNED 1                         /*!< (unspecified)                                                        */
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
#define CRACEN_PKEDATA 0x50018000                    /*!< PKE data (address 0x50018000) must be read and written using aligned
                                                          access, i.e. using an operation where a word-aligned address is used
                                                          for a word, or a halfword-aligned address is used for a halfword
                                                          access.*/
#define CRACEN_PKECODE 0x5001C000                    /*!< PKE code (address 0x5001C000) must be read and written using aligned
                                                          access, i.e. using an operation where a word-aligned address is used
                                                          for a word, or a halfword-aligned address is used for a halfword
                                                          access.*/

/*USBHS*/
#define USBHS_PRESENT 1
#define USBHS_COUNT 1

#define USBHS_SIMULATIONREGISTERS 0                  /*!< (unspecified)                                                        */

/*Quad serial peripheral interface*/
#define QSPI_PRESENT 1
#define QSPI_COUNT 2

#define QSPI0_EASYDMALISTINCLUDED 0                  /*!< (unspecified)                                                        */
#define QSPI0_EASYDMAMODEINCLUDED 0                  /*!< (unspecified)                                                        */
#define QSPI0_EASYDMAFULLLPMODEINCLUDED 0            /*!< (unspecified)                                                        */
#define QSPI0_EASYDMAPATTERNMATCHERINCLUDED 0        /*!< (unspecified)                                                        */
#define QSPI0_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 0 /*!< (unspecified)                                                    */
#define QSPI0_EASYDMASTOPTASKINCLUDED 1              /*!< (unspecified)                                                        */
#define QSPI0_AXI_LITE 0                             /*!< (unspecified)                                                        */
#define QSPI0_FIFO_DEPTH 16                          /*!< Depth of the transmit and receive FIFOs is 16                        */
#define QSPI0_QSPI_NUM_CLOCK_POWER_PAIR_MIN 0        /*!< Number of clock/power pairs used by PCGC Slave - [0..3]              */
#define QSPI0_QSPI_NUM_CLOCK_POWER_PAIR_MAX 3        /*!< Number of clock/power pairs used by PCGC Slave - [0..3]              */
#define QSPI0_QSPI_NUM_CLOCK_POWER_PAIR_SIZE 4       /*!< Number of clock/power pairs used by PCGC Slave - [0..3]              */
#define QSPI0_QSPI_NOTFULLPCPZERO 1                  /*!< (unspecified)                                                        */

#define QSPI1_EASYDMALISTINCLUDED 0                  /*!< (unspecified)                                                        */
#define QSPI1_EASYDMAMODEINCLUDED 0                  /*!< (unspecified)                                                        */
#define QSPI1_EASYDMAFULLLPMODEINCLUDED 0            /*!< (unspecified)                                                        */
#define QSPI1_EASYDMAPATTERNMATCHERINCLUDED 0        /*!< (unspecified)                                                        */
#define QSPI1_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 0 /*!< (unspecified)                                                    */
#define QSPI1_EASYDMASTOPTASKINCLUDED 1              /*!< (unspecified)                                                        */
#define QSPI1_AXI_LITE 0                             /*!< (unspecified)                                                        */
#define QSPI1_FIFO_DEPTH 16                          /*!< Depth of the transmit and receive FIFOs is 16                        */
#define QSPI1_QSPI_NUM_CLOCK_POWER_PAIR_MIN 0        /*!< Number of clock/power pairs used by PCGC Slave - [0..3]              */
#define QSPI1_QSPI_NUM_CLOCK_POWER_PAIR_MAX 3        /*!< Number of clock/power pairs used by PCGC Slave - [0..3]              */
#define QSPI1_QSPI_NUM_CLOCK_POWER_PAIR_SIZE 4       /*!< Number of clock/power pairs used by PCGC Slave - [0..3]              */
#define QSPI1_QSPI_NOTFULLPCPZERO 1                  /*!< (unspecified)                                                        */

/*CPU Configuration*/
#define CPUCONF_PRESENT 1
#define CPUCONF_COUNT 1

#define CPUCONF_HASTASKERASECACHE 0                  /*!< (unspecified)                                                        */
#define CPUCONF_HASINITSVTOR 0                       /*!< (unspecified)                                                        */
#define CPUCONF_HASINITNSVTOR 0                      /*!< (unspecified)                                                        */
#define CPUCONF_HASCPUSTART 1                        /*!< (unspecified)                                                        */
#define CPUCONF_HASCPUWAIT 0                         /*!< (unspecified)                                                        */

/*BELLBOARD APB registers*/
#define BELLBOARD_PRESENT 1
#define BELLBOARD_COUNT 1

#define BELLBOARD_IRQ_COUNT 2

/*PULSEDET peripheral*/
#define PULSEDET_PRESENT 1
#define PULSEDET_COUNT 5

/*Spare registers*/
#define SREGS_PRESENT 1
#define SREGS_COUNT 4

#define SREGS00_NUM_TASKS_MIN 0                      /*!< (unspecified)                                                        */
#define SREGS00_NUM_TASKS_MAX 1                      /*!< (unspecified)                                                        */
#define SREGS00_NUM_TASKS_SIZE 2                     /*!< (unspecified)                                                        */
#define SREGS00_TASKS 0                              /*!< (unspecified)                                                        */
#define SREGS00_NUM_EVENTS_MIN 0                     /*!< (unspecified)                                                        */
#define SREGS00_NUM_EVENTS_MAX 2                     /*!< (unspecified)                                                        */
#define SREGS00_NUM_EVENTS_SIZE 3                    /*!< (unspecified)                                                        */
#define SREGS00_EVENTS 0                             /*!< (unspecified)                                                        */
#define SREGS00_NUM_MAIN_REGS_MIN 0                  /*!< (unspecified)                                                        */
#define SREGS00_NUM_MAIN_REGS_MAX 0                  /*!< (unspecified)                                                        */
#define SREGS00_NUM_MAIN_REGS_SIZE 1                 /*!< (unspecified)                                                        */
#define SREGS00_NUM_BITS_PER_MAIN_REG_MIN 0          /*!< (unspecified)                                                        */
#define SREGS00_NUM_BITS_PER_MAIN_REG_MAX 7          /*!< (unspecified)                                                        */
#define SREGS00_NUM_BITS_PER_MAIN_REG_SIZE 8         /*!< (unspecified)                                                        */
#define SREGS00_MAINREGS 0                           /*!< (unspecified)                                                        */
#define SREGS00_NUM_AO_REGS_MIN 0                    /*!< (unspecified)                                                        */
#define SREGS00_NUM_AO_REGS_MAX 0                    /*!< (unspecified)                                                        */
#define SREGS00_NUM_AO_REGS_SIZE 1                   /*!< (unspecified)                                                        */
#define SREGS00_NUM_BITS_PER_AO_REG_MIN 0            /*!< (unspecified)                                                        */
#define SREGS00_NUM_BITS_PER_AO_REG_MAX 3            /*!< (unspecified)                                                        */
#define SREGS00_NUM_BITS_PER_AO_REG_SIZE 4           /*!< (unspecified)                                                        */
#define SREGS00_AOREGS 0                             /*!< (unspecified)                                                        */
#define SREGS00_NUM_REGS_MIN 0                       /*!< (unspecified)                                                        */
#define SREGS00_NUM_REGS_MAX 1                       /*!< (unspecified)                                                        */
#define SREGS00_NUM_REGS_SIZE 2                      /*!< (unspecified)                                                        */
#define SREGS00_NUM_BITS_PER_REG_MIN 0               /*!< (unspecified)                                                        */
#define SREGS00_NUM_BITS_PER_REG_MAX 31              /*!< (unspecified)                                                        */
#define SREGS00_NUM_BITS_PER_REG_SIZE 32             /*!< (unspecified)                                                        */
#define SREGS00_REGS 1                               /*!< (unspecified)                                                        */
#define SREGS00_POSTEDWRITESREGS 0                   /*!< (unspecified)                                                        */
#define SREGS00_AXIPROLONGREQUESTREGS 0              /*!< (unspecified)                                                        */
#define SREGS00_RADIOSIDEBANDREQUEST 0               /*!< (unspecified)                                                        */

#define SREGS10_NUM_TASKS_MIN 0                      /*!< (unspecified)                                                        */
#define SREGS10_NUM_TASKS_MAX 1                      /*!< (unspecified)                                                        */
#define SREGS10_NUM_TASKS_SIZE 2                     /*!< (unspecified)                                                        */
#define SREGS10_TASKS 0                              /*!< (unspecified)                                                        */
#define SREGS10_NUM_EVENTS_MIN 0                     /*!< (unspecified)                                                        */
#define SREGS10_NUM_EVENTS_MAX 2                     /*!< (unspecified)                                                        */
#define SREGS10_NUM_EVENTS_SIZE 3                    /*!< (unspecified)                                                        */
#define SREGS10_EVENTS 0                             /*!< (unspecified)                                                        */
#define SREGS10_NUM_MAIN_REGS_MIN 0                  /*!< (unspecified)                                                        */
#define SREGS10_NUM_MAIN_REGS_MAX 0                  /*!< (unspecified)                                                        */
#define SREGS10_NUM_MAIN_REGS_SIZE 1                 /*!< (unspecified)                                                        */
#define SREGS10_NUM_BITS_PER_MAIN_REG_MIN 0          /*!< (unspecified)                                                        */
#define SREGS10_NUM_BITS_PER_MAIN_REG_MAX 7          /*!< (unspecified)                                                        */
#define SREGS10_NUM_BITS_PER_MAIN_REG_SIZE 8         /*!< (unspecified)                                                        */
#define SREGS10_MAINREGS 0                           /*!< (unspecified)                                                        */
#define SREGS10_NUM_AO_REGS_MIN 0                    /*!< (unspecified)                                                        */
#define SREGS10_NUM_AO_REGS_MAX 0                    /*!< (unspecified)                                                        */
#define SREGS10_NUM_AO_REGS_SIZE 1                   /*!< (unspecified)                                                        */
#define SREGS10_NUM_BITS_PER_AO_REG_MIN 0            /*!< (unspecified)                                                        */
#define SREGS10_NUM_BITS_PER_AO_REG_MAX 3            /*!< (unspecified)                                                        */
#define SREGS10_NUM_BITS_PER_AO_REG_SIZE 4           /*!< (unspecified)                                                        */
#define SREGS10_AOREGS 0                             /*!< (unspecified)                                                        */
#define SREGS10_NUM_REGS_MIN 0                       /*!< (unspecified)                                                        */
#define SREGS10_NUM_REGS_MAX 1                       /*!< (unspecified)                                                        */
#define SREGS10_NUM_REGS_SIZE 2                      /*!< (unspecified)                                                        */
#define SREGS10_NUM_BITS_PER_REG_MIN 0               /*!< (unspecified)                                                        */
#define SREGS10_NUM_BITS_PER_REG_MAX 31              /*!< (unspecified)                                                        */
#define SREGS10_NUM_BITS_PER_REG_SIZE 32             /*!< (unspecified)                                                        */
#define SREGS10_REGS 1                               /*!< (unspecified)                                                        */
#define SREGS10_POSTEDWRITESREGS 1                   /*!< (unspecified)                                                        */
#define SREGS10_AXIPROLONGREQUESTREGS 1              /*!< (unspecified)                                                        */
#define SREGS10_RADIOSIDEBANDREQUEST 1               /*!< (unspecified)                                                        */

#define SREGS20_NUM_TASKS_MIN 0                      /*!< (unspecified)                                                        */
#define SREGS20_NUM_TASKS_MAX 1                      /*!< (unspecified)                                                        */
#define SREGS20_NUM_TASKS_SIZE 2                     /*!< (unspecified)                                                        */
#define SREGS20_TASKS 0                              /*!< (unspecified)                                                        */
#define SREGS20_NUM_EVENTS_MIN 0                     /*!< (unspecified)                                                        */
#define SREGS20_NUM_EVENTS_MAX 2                     /*!< (unspecified)                                                        */
#define SREGS20_NUM_EVENTS_SIZE 3                    /*!< (unspecified)                                                        */
#define SREGS20_EVENTS 0                             /*!< (unspecified)                                                        */
#define SREGS20_NUM_MAIN_REGS_MIN 0                  /*!< (unspecified)                                                        */
#define SREGS20_NUM_MAIN_REGS_MAX 0                  /*!< (unspecified)                                                        */
#define SREGS20_NUM_MAIN_REGS_SIZE 1                 /*!< (unspecified)                                                        */
#define SREGS20_NUM_BITS_PER_MAIN_REG_MIN 0          /*!< (unspecified)                                                        */
#define SREGS20_NUM_BITS_PER_MAIN_REG_MAX 7          /*!< (unspecified)                                                        */
#define SREGS20_NUM_BITS_PER_MAIN_REG_SIZE 8         /*!< (unspecified)                                                        */
#define SREGS20_MAINREGS 0                           /*!< (unspecified)                                                        */
#define SREGS20_NUM_AO_REGS_MIN 0                    /*!< (unspecified)                                                        */
#define SREGS20_NUM_AO_REGS_MAX 0                    /*!< (unspecified)                                                        */
#define SREGS20_NUM_AO_REGS_SIZE 1                   /*!< (unspecified)                                                        */
#define SREGS20_NUM_BITS_PER_AO_REG_MIN 0            /*!< (unspecified)                                                        */
#define SREGS20_NUM_BITS_PER_AO_REG_MAX 3            /*!< (unspecified)                                                        */
#define SREGS20_NUM_BITS_PER_AO_REG_SIZE 4           /*!< (unspecified)                                                        */
#define SREGS20_AOREGS 0                             /*!< (unspecified)                                                        */
#define SREGS20_NUM_REGS_MIN 0                       /*!< (unspecified)                                                        */
#define SREGS20_NUM_REGS_MAX 1                       /*!< (unspecified)                                                        */
#define SREGS20_NUM_REGS_SIZE 2                      /*!< (unspecified)                                                        */
#define SREGS20_NUM_BITS_PER_REG_MIN 0               /*!< (unspecified)                                                        */
#define SREGS20_NUM_BITS_PER_REG_MAX 31              /*!< (unspecified)                                                        */
#define SREGS20_NUM_BITS_PER_REG_SIZE 32             /*!< (unspecified)                                                        */
#define SREGS20_REGS 1                               /*!< (unspecified)                                                        */
#define SREGS20_POSTEDWRITESREGS 0                   /*!< (unspecified)                                                        */
#define SREGS20_AXIPROLONGREQUESTREGS 1              /*!< (unspecified)                                                        */
#define SREGS20_RADIOSIDEBANDREQUEST 0               /*!< (unspecified)                                                        */

#define SREGS30_NUM_TASKS_MIN 0                      /*!< (unspecified)                                                        */
#define SREGS30_NUM_TASKS_MAX 1                      /*!< (unspecified)                                                        */
#define SREGS30_NUM_TASKS_SIZE 2                     /*!< (unspecified)                                                        */
#define SREGS30_TASKS 0                              /*!< (unspecified)                                                        */
#define SREGS30_NUM_EVENTS_MIN 0                     /*!< (unspecified)                                                        */
#define SREGS30_NUM_EVENTS_MAX 2                     /*!< (unspecified)                                                        */
#define SREGS30_NUM_EVENTS_SIZE 3                    /*!< (unspecified)                                                        */
#define SREGS30_EVENTS 0                             /*!< (unspecified)                                                        */
#define SREGS30_NUM_MAIN_REGS_MIN 0                  /*!< (unspecified)                                                        */
#define SREGS30_NUM_MAIN_REGS_MAX 0                  /*!< (unspecified)                                                        */
#define SREGS30_NUM_MAIN_REGS_SIZE 1                 /*!< (unspecified)                                                        */
#define SREGS30_NUM_BITS_PER_MAIN_REG_MIN 0          /*!< (unspecified)                                                        */
#define SREGS30_NUM_BITS_PER_MAIN_REG_MAX 7          /*!< (unspecified)                                                        */
#define SREGS30_NUM_BITS_PER_MAIN_REG_SIZE 8         /*!< (unspecified)                                                        */
#define SREGS30_MAINREGS 1                           /*!< (unspecified)                                                        */
#define SREGS30_NUM_AO_REGS_MIN 0                    /*!< (unspecified)                                                        */
#define SREGS30_NUM_AO_REGS_MAX 0                    /*!< (unspecified)                                                        */
#define SREGS30_NUM_AO_REGS_SIZE 1                   /*!< (unspecified)                                                        */
#define SREGS30_NUM_BITS_PER_AO_REG_MIN 0            /*!< (unspecified)                                                        */
#define SREGS30_NUM_BITS_PER_AO_REG_MAX 3            /*!< (unspecified)                                                        */
#define SREGS30_NUM_BITS_PER_AO_REG_SIZE 4           /*!< (unspecified)                                                        */
#define SREGS30_AOREGS 1                             /*!< (unspecified)                                                        */
#define SREGS30_NUM_REGS_MIN 0                       /*!< (unspecified)                                                        */
#define SREGS30_NUM_REGS_MAX 0                       /*!< (unspecified)                                                        */
#define SREGS30_NUM_REGS_SIZE 1                      /*!< (unspecified)                                                        */
#define SREGS30_NUM_BITS_PER_REG_MIN 0               /*!< (unspecified)                                                        */
#define SREGS30_NUM_BITS_PER_REG_MAX 15              /*!< (unspecified)                                                        */
#define SREGS30_NUM_BITS_PER_REG_SIZE 16             /*!< (unspecified)                                                        */
#define SREGS30_REGS 1                               /*!< (unspecified)                                                        */
#define SREGS30_POSTEDWRITESREGS 0                   /*!< (unspecified)                                                        */
#define SREGS30_AXIPROLONGREQUESTREGS 0              /*!< (unspecified)                                                        */
#define SREGS30_RADIOSIDEBANDREQUEST 0               /*!< (unspecified)                                                        */

/*PCGCSlave*/
#define PCGCSLAVE_PRESENT 1
#define PCGCSLAVE_COUNT 5

#define SUPPORT00_PENALTYTASKS 0                     /*!< (unspecified)                                                        */

#define SUPPORT10_PENALTYTASKS 0                     /*!< (unspecified)                                                        */

#define SUPPORT20_PENALTYTASKS 0                     /*!< (unspecified)                                                        */

#define PCGCS30_PENALTYTASKS 0                       /*!< (unspecified)                                                        */

#define SUPPORT30_PENALTYTASKS 0                     /*!< (unspecified)                                                        */

/*2.4 GHz radio*/
#define RADIO_PRESENT 1
#define RADIO_COUNT 1

#define RADIO_IRQ_COUNT 2
#define RADIO_WHITENINGPOLY 1                        /*!< (unspecified)                                                        */
#define RADIO_ADPLLCOMPANION_INCLUDE_DMA 0           /*!< (unspecified)                                                        */

/*IPCT APB registers*/
#define IPCT_PRESENT 1
#define IPCT_COUNT 1

#define IPCT10_IRQ_COUNT 2

/*SPI Slave*/
#define SPIS_PRESENT 1
#define SPIS_COUNT 6

#define SPIS20_LEGACYPSEL 0                          /*!< (unspecified)                                                        */
#define SPIS20_LEGACYEDMA 0                          /*!< (unspecified)                                                        */
#define SPIS20_EASYDMA_MAXCNT_MIN 0                  /*!< (unspecified)                                                        */
#define SPIS20_EASYDMA_MAXCNT_MAX 15                 /*!< (unspecified)                                                        */
#define SPIS20_EASYDMA_MAXCNT_SIZE 16                /*!< (unspecified)                                                        */
#define SPIS20_EASYDMA5 1                            /*!< (unspecified)                                                        */
#define SPIS20_EASYDMATEMP 0                         /*!< (unspecified)                                                        */
#define SPIS20_EASYDMALISTINCLUDED 0                 /*!< (unspecified)                                                        */
#define SPIS20_EASYDMAMODEINCLUDED 0                 /*!< (unspecified)                                                        */
#define SPIS20_EASYDMAFULLLPMODEINCLUDED 0           /*!< (unspecified)                                                        */
#define SPIS20_EASYDMAPATTERNMATCHERINCLUDED 1       /*!< (unspecified)                                                        */
#define SPIS20_EASYDMANUMMATCHCHANNELS_MIN 0         /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIS20_EASYDMANUMMATCHCHANNELS_MAX 3         /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIS20_EASYDMANUMMATCHCHANNELS_SIZE 4        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIS20_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 0 /*!< (unspecified)                                                   */
#define SPIS20_EASYDMASTOPTASKINCLUDED 1             /*!< (unspecified)                                                        */

#define SPIS21_LEGACYPSEL 0                          /*!< (unspecified)                                                        */
#define SPIS21_LEGACYEDMA 0                          /*!< (unspecified)                                                        */
#define SPIS21_EASYDMA_MAXCNT_MIN 0                  /*!< (unspecified)                                                        */
#define SPIS21_EASYDMA_MAXCNT_MAX 15                 /*!< (unspecified)                                                        */
#define SPIS21_EASYDMA_MAXCNT_SIZE 16                /*!< (unspecified)                                                        */
#define SPIS21_EASYDMA5 1                            /*!< (unspecified)                                                        */
#define SPIS21_EASYDMATEMP 0                         /*!< (unspecified)                                                        */
#define SPIS21_EASYDMALISTINCLUDED 0                 /*!< (unspecified)                                                        */
#define SPIS21_EASYDMAMODEINCLUDED 0                 /*!< (unspecified)                                                        */
#define SPIS21_EASYDMAFULLLPMODEINCLUDED 0           /*!< (unspecified)                                                        */
#define SPIS21_EASYDMAPATTERNMATCHERINCLUDED 1       /*!< (unspecified)                                                        */
#define SPIS21_EASYDMANUMMATCHCHANNELS_MIN 0         /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIS21_EASYDMANUMMATCHCHANNELS_MAX 3         /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIS21_EASYDMANUMMATCHCHANNELS_SIZE 4        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIS21_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 0 /*!< (unspecified)                                                   */
#define SPIS21_EASYDMASTOPTASKINCLUDED 1             /*!< (unspecified)                                                        */

#define SPIS22_LEGACYPSEL 0                          /*!< (unspecified)                                                        */
#define SPIS22_LEGACYEDMA 0                          /*!< (unspecified)                                                        */
#define SPIS22_EASYDMA_MAXCNT_MIN 0                  /*!< (unspecified)                                                        */
#define SPIS22_EASYDMA_MAXCNT_MAX 15                 /*!< (unspecified)                                                        */
#define SPIS22_EASYDMA_MAXCNT_SIZE 16                /*!< (unspecified)                                                        */
#define SPIS22_EASYDMA5 1                            /*!< (unspecified)                                                        */
#define SPIS22_EASYDMATEMP 0                         /*!< (unspecified)                                                        */
#define SPIS22_EASYDMALISTINCLUDED 0                 /*!< (unspecified)                                                        */
#define SPIS22_EASYDMAMODEINCLUDED 0                 /*!< (unspecified)                                                        */
#define SPIS22_EASYDMAFULLLPMODEINCLUDED 0           /*!< (unspecified)                                                        */
#define SPIS22_EASYDMAPATTERNMATCHERINCLUDED 1       /*!< (unspecified)                                                        */
#define SPIS22_EASYDMANUMMATCHCHANNELS_MIN 0         /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIS22_EASYDMANUMMATCHCHANNELS_MAX 3         /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIS22_EASYDMANUMMATCHCHANNELS_SIZE 4        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIS22_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 0 /*!< (unspecified)                                                   */
#define SPIS22_EASYDMASTOPTASKINCLUDED 1             /*!< (unspecified)                                                        */

#define SPIS23_LEGACYPSEL 0                          /*!< (unspecified)                                                        */
#define SPIS23_LEGACYEDMA 0                          /*!< (unspecified)                                                        */
#define SPIS23_EASYDMA_MAXCNT_MIN 0                  /*!< (unspecified)                                                        */
#define SPIS23_EASYDMA_MAXCNT_MAX 15                 /*!< (unspecified)                                                        */
#define SPIS23_EASYDMA_MAXCNT_SIZE 16                /*!< (unspecified)                                                        */
#define SPIS23_EASYDMA5 1                            /*!< (unspecified)                                                        */
#define SPIS23_EASYDMATEMP 0                         /*!< (unspecified)                                                        */
#define SPIS23_EASYDMALISTINCLUDED 0                 /*!< (unspecified)                                                        */
#define SPIS23_EASYDMAMODEINCLUDED 0                 /*!< (unspecified)                                                        */
#define SPIS23_EASYDMAFULLLPMODEINCLUDED 0           /*!< (unspecified)                                                        */
#define SPIS23_EASYDMAPATTERNMATCHERINCLUDED 1       /*!< (unspecified)                                                        */
#define SPIS23_EASYDMANUMMATCHCHANNELS_MIN 0         /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIS23_EASYDMANUMMATCHCHANNELS_MAX 3         /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIS23_EASYDMANUMMATCHCHANNELS_SIZE 4        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIS23_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 0 /*!< (unspecified)                                                   */
#define SPIS23_EASYDMASTOPTASKINCLUDED 1             /*!< (unspecified)                                                        */

#define SPIS24_LEGACYPSEL 0                          /*!< (unspecified)                                                        */
#define SPIS24_LEGACYEDMA 0                          /*!< (unspecified)                                                        */
#define SPIS24_EASYDMA_MAXCNT_MIN 0                  /*!< (unspecified)                                                        */
#define SPIS24_EASYDMA_MAXCNT_MAX 15                 /*!< (unspecified)                                                        */
#define SPIS24_EASYDMA_MAXCNT_SIZE 16                /*!< (unspecified)                                                        */
#define SPIS24_EASYDMA5 1                            /*!< (unspecified)                                                        */
#define SPIS24_EASYDMATEMP 0                         /*!< (unspecified)                                                        */
#define SPIS24_EASYDMALISTINCLUDED 0                 /*!< (unspecified)                                                        */
#define SPIS24_EASYDMAMODEINCLUDED 0                 /*!< (unspecified)                                                        */
#define SPIS24_EASYDMAFULLLPMODEINCLUDED 0           /*!< (unspecified)                                                        */
#define SPIS24_EASYDMAPATTERNMATCHERINCLUDED 1       /*!< (unspecified)                                                        */
#define SPIS24_EASYDMANUMMATCHCHANNELS_MIN 0         /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIS24_EASYDMANUMMATCHCHANNELS_MAX 3         /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIS24_EASYDMANUMMATCHCHANNELS_SIZE 4        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIS24_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 0 /*!< (unspecified)                                                   */
#define SPIS24_EASYDMASTOPTASKINCLUDED 1             /*!< (unspecified)                                                        */

#define SPIS30_LEGACYPSEL 0                          /*!< (unspecified)                                                        */
#define SPIS30_LEGACYEDMA 0                          /*!< (unspecified)                                                        */
#define SPIS30_EASYDMA_MAXCNT_MIN 0                  /*!< (unspecified)                                                        */
#define SPIS30_EASYDMA_MAXCNT_MAX 15                 /*!< (unspecified)                                                        */
#define SPIS30_EASYDMA_MAXCNT_SIZE 16                /*!< (unspecified)                                                        */
#define SPIS30_EASYDMA5 1                            /*!< (unspecified)                                                        */
#define SPIS30_EASYDMATEMP 0                         /*!< (unspecified)                                                        */
#define SPIS30_EASYDMALISTINCLUDED 0                 /*!< (unspecified)                                                        */
#define SPIS30_EASYDMAMODEINCLUDED 0                 /*!< (unspecified)                                                        */
#define SPIS30_EASYDMAFULLLPMODEINCLUDED 0           /*!< (unspecified)                                                        */
#define SPIS30_EASYDMAPATTERNMATCHERINCLUDED 1       /*!< (unspecified)                                                        */
#define SPIS30_EASYDMANUMMATCHCHANNELS_MIN 0         /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIS30_EASYDMANUMMATCHCHANNELS_MAX 3         /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIS30_EASYDMANUMMATCHCHANNELS_SIZE 4        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define SPIS30_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 0 /*!< (unspecified)                                                   */
#define SPIS30_EASYDMASTOPTASKINCLUDED 1             /*!< (unspecified)                                                        */

/*I2C compatible Two-Wire Master Interface with EasyDMA*/
#define TWIM_PRESENT 1
#define TWIM_COUNT 6

#define TWIM20_EASYDMA5 1                            /*!< (unspecified)                                                        */
#define TWIM20_EASYDMATEMP 0                         /*!< (unspecified)                                                        */
#define TWIM20_EASYDMA_MAXCNT_MIN 0                  /*!< (unspecified)                                                        */
#define TWIM20_EASYDMA_MAXCNT_MAX 15                 /*!< (unspecified)                                                        */
#define TWIM20_EASYDMA_MAXCNT_SIZE 16                /*!< (unspecified)                                                        */
#define TWIM20_EASYDMALISTINCLUDED 0                 /*!< (unspecified)                                                        */
#define TWIM20_EASYDMAMODEINCLUDED 0                 /*!< (unspecified)                                                        */
#define TWIM20_EASYDMAFULLLPMODEINCLUDED 0           /*!< (unspecified)                                                        */
#define TWIM20_EASYDMAPATTERNMATCHERINCLUDED 1       /*!< (unspecified)                                                        */
#define TWIM20_EASYDMANUMMATCHCHANNELS_MIN 0         /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define TWIM20_EASYDMANUMMATCHCHANNELS_MAX 3         /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define TWIM20_EASYDMANUMMATCHCHANNELS_SIZE 4        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define TWIM20_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 0 /*!< (unspecified)                                                   */
#define TWIM20_EASYDMASTOPTASKINCLUDED 1             /*!< (unspecified)                                                        */

#define TWIM21_EASYDMA5 1                            /*!< (unspecified)                                                        */
#define TWIM21_EASYDMATEMP 0                         /*!< (unspecified)                                                        */
#define TWIM21_EASYDMA_MAXCNT_MIN 0                  /*!< (unspecified)                                                        */
#define TWIM21_EASYDMA_MAXCNT_MAX 15                 /*!< (unspecified)                                                        */
#define TWIM21_EASYDMA_MAXCNT_SIZE 16                /*!< (unspecified)                                                        */
#define TWIM21_EASYDMALISTINCLUDED 0                 /*!< (unspecified)                                                        */
#define TWIM21_EASYDMAMODEINCLUDED 0                 /*!< (unspecified)                                                        */
#define TWIM21_EASYDMAFULLLPMODEINCLUDED 0           /*!< (unspecified)                                                        */
#define TWIM21_EASYDMAPATTERNMATCHERINCLUDED 1       /*!< (unspecified)                                                        */
#define TWIM21_EASYDMANUMMATCHCHANNELS_MIN 0         /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define TWIM21_EASYDMANUMMATCHCHANNELS_MAX 3         /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define TWIM21_EASYDMANUMMATCHCHANNELS_SIZE 4        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define TWIM21_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 0 /*!< (unspecified)                                                   */
#define TWIM21_EASYDMASTOPTASKINCLUDED 1             /*!< (unspecified)                                                        */

#define TWIM22_EASYDMA5 1                            /*!< (unspecified)                                                        */
#define TWIM22_EASYDMATEMP 0                         /*!< (unspecified)                                                        */
#define TWIM22_EASYDMA_MAXCNT_MIN 0                  /*!< (unspecified)                                                        */
#define TWIM22_EASYDMA_MAXCNT_MAX 15                 /*!< (unspecified)                                                        */
#define TWIM22_EASYDMA_MAXCNT_SIZE 16                /*!< (unspecified)                                                        */
#define TWIM22_EASYDMALISTINCLUDED 0                 /*!< (unspecified)                                                        */
#define TWIM22_EASYDMAMODEINCLUDED 0                 /*!< (unspecified)                                                        */
#define TWIM22_EASYDMAFULLLPMODEINCLUDED 0           /*!< (unspecified)                                                        */
#define TWIM22_EASYDMAPATTERNMATCHERINCLUDED 1       /*!< (unspecified)                                                        */
#define TWIM22_EASYDMANUMMATCHCHANNELS_MIN 0         /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define TWIM22_EASYDMANUMMATCHCHANNELS_MAX 3         /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define TWIM22_EASYDMANUMMATCHCHANNELS_SIZE 4        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define TWIM22_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 0 /*!< (unspecified)                                                   */
#define TWIM22_EASYDMASTOPTASKINCLUDED 1             /*!< (unspecified)                                                        */

#define TWIM23_EASYDMA5 1                            /*!< (unspecified)                                                        */
#define TWIM23_EASYDMATEMP 0                         /*!< (unspecified)                                                        */
#define TWIM23_EASYDMA_MAXCNT_MIN 0                  /*!< (unspecified)                                                        */
#define TWIM23_EASYDMA_MAXCNT_MAX 15                 /*!< (unspecified)                                                        */
#define TWIM23_EASYDMA_MAXCNT_SIZE 16                /*!< (unspecified)                                                        */
#define TWIM23_EASYDMALISTINCLUDED 0                 /*!< (unspecified)                                                        */
#define TWIM23_EASYDMAMODEINCLUDED 0                 /*!< (unspecified)                                                        */
#define TWIM23_EASYDMAFULLLPMODEINCLUDED 0           /*!< (unspecified)                                                        */
#define TWIM23_EASYDMAPATTERNMATCHERINCLUDED 1       /*!< (unspecified)                                                        */
#define TWIM23_EASYDMANUMMATCHCHANNELS_MIN 0         /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define TWIM23_EASYDMANUMMATCHCHANNELS_MAX 3         /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define TWIM23_EASYDMANUMMATCHCHANNELS_SIZE 4        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define TWIM23_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 0 /*!< (unspecified)                                                   */
#define TWIM23_EASYDMASTOPTASKINCLUDED 1             /*!< (unspecified)                                                        */

#define TWIM24_EASYDMA5 1                            /*!< (unspecified)                                                        */
#define TWIM24_EASYDMATEMP 0                         /*!< (unspecified)                                                        */
#define TWIM24_EASYDMA_MAXCNT_MIN 0                  /*!< (unspecified)                                                        */
#define TWIM24_EASYDMA_MAXCNT_MAX 15                 /*!< (unspecified)                                                        */
#define TWIM24_EASYDMA_MAXCNT_SIZE 16                /*!< (unspecified)                                                        */
#define TWIM24_EASYDMALISTINCLUDED 0                 /*!< (unspecified)                                                        */
#define TWIM24_EASYDMAMODEINCLUDED 0                 /*!< (unspecified)                                                        */
#define TWIM24_EASYDMAFULLLPMODEINCLUDED 0           /*!< (unspecified)                                                        */
#define TWIM24_EASYDMAPATTERNMATCHERINCLUDED 1       /*!< (unspecified)                                                        */
#define TWIM24_EASYDMANUMMATCHCHANNELS_MIN 0         /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define TWIM24_EASYDMANUMMATCHCHANNELS_MAX 3         /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define TWIM24_EASYDMANUMMATCHCHANNELS_SIZE 4        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define TWIM24_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 0 /*!< (unspecified)                                                   */
#define TWIM24_EASYDMASTOPTASKINCLUDED 1             /*!< (unspecified)                                                        */

#define TWIM30_EASYDMA5 1                            /*!< (unspecified)                                                        */
#define TWIM30_EASYDMATEMP 0                         /*!< (unspecified)                                                        */
#define TWIM30_EASYDMA_MAXCNT_MIN 0                  /*!< (unspecified)                                                        */
#define TWIM30_EASYDMA_MAXCNT_MAX 15                 /*!< (unspecified)                                                        */
#define TWIM30_EASYDMA_MAXCNT_SIZE 16                /*!< (unspecified)                                                        */
#define TWIM30_EASYDMALISTINCLUDED 0                 /*!< (unspecified)                                                        */
#define TWIM30_EASYDMAMODEINCLUDED 0                 /*!< (unspecified)                                                        */
#define TWIM30_EASYDMAFULLLPMODEINCLUDED 0           /*!< (unspecified)                                                        */
#define TWIM30_EASYDMAPATTERNMATCHERINCLUDED 1       /*!< (unspecified)                                                        */
#define TWIM30_EASYDMANUMMATCHCHANNELS_MIN 0         /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define TWIM30_EASYDMANUMMATCHCHANNELS_MAX 3         /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define TWIM30_EASYDMANUMMATCHCHANNELS_SIZE 4        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define TWIM30_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 0 /*!< (unspecified)                                                   */
#define TWIM30_EASYDMASTOPTASKINCLUDED 1             /*!< (unspecified)                                                        */

/*I2C compatible Two-Wire Slave Interface with EasyDMA*/
#define TWIS_PRESENT 1
#define TWIS_COUNT 6

#define TWIS20_EASYDMA5 1                            /*!< (unspecified)                                                        */
#define TWIS20_EASYDMATEMP 0                         /*!< (unspecified)                                                        */
#define TWIS20_EASYDMA_MAXCNT_MIN 0                  /*!< (unspecified)                                                        */
#define TWIS20_EASYDMA_MAXCNT_MAX 15                 /*!< (unspecified)                                                        */
#define TWIS20_EASYDMA_MAXCNT_SIZE 16                /*!< (unspecified)                                                        */
#define TWIS20_EASYDMALISTINCLUDED 0                 /*!< (unspecified)                                                        */
#define TWIS20_EASYDMAMODEINCLUDED 0                 /*!< (unspecified)                                                        */
#define TWIS20_EASYDMAFULLLPMODEINCLUDED 0           /*!< (unspecified)                                                        */
#define TWIS20_EASYDMAPATTERNMATCHERINCLUDED 1       /*!< (unspecified)                                                        */
#define TWIS20_EASYDMANUMMATCHCHANNELS_MIN 0         /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define TWIS20_EASYDMANUMMATCHCHANNELS_MAX 3         /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define TWIS20_EASYDMANUMMATCHCHANNELS_SIZE 4        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define TWIS20_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 0 /*!< (unspecified)                                                   */
#define TWIS20_EASYDMASTOPTASKINCLUDED 1             /*!< (unspecified)                                                        */

#define TWIS21_EASYDMA5 1                            /*!< (unspecified)                                                        */
#define TWIS21_EASYDMATEMP 0                         /*!< (unspecified)                                                        */
#define TWIS21_EASYDMA_MAXCNT_MIN 0                  /*!< (unspecified)                                                        */
#define TWIS21_EASYDMA_MAXCNT_MAX 15                 /*!< (unspecified)                                                        */
#define TWIS21_EASYDMA_MAXCNT_SIZE 16                /*!< (unspecified)                                                        */
#define TWIS21_EASYDMALISTINCLUDED 0                 /*!< (unspecified)                                                        */
#define TWIS21_EASYDMAMODEINCLUDED 0                 /*!< (unspecified)                                                        */
#define TWIS21_EASYDMAFULLLPMODEINCLUDED 0           /*!< (unspecified)                                                        */
#define TWIS21_EASYDMAPATTERNMATCHERINCLUDED 1       /*!< (unspecified)                                                        */
#define TWIS21_EASYDMANUMMATCHCHANNELS_MIN 0         /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define TWIS21_EASYDMANUMMATCHCHANNELS_MAX 3         /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define TWIS21_EASYDMANUMMATCHCHANNELS_SIZE 4        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define TWIS21_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 0 /*!< (unspecified)                                                   */
#define TWIS21_EASYDMASTOPTASKINCLUDED 1             /*!< (unspecified)                                                        */

#define TWIS22_EASYDMA5 1                            /*!< (unspecified)                                                        */
#define TWIS22_EASYDMATEMP 0                         /*!< (unspecified)                                                        */
#define TWIS22_EASYDMA_MAXCNT_MIN 0                  /*!< (unspecified)                                                        */
#define TWIS22_EASYDMA_MAXCNT_MAX 15                 /*!< (unspecified)                                                        */
#define TWIS22_EASYDMA_MAXCNT_SIZE 16                /*!< (unspecified)                                                        */
#define TWIS22_EASYDMALISTINCLUDED 0                 /*!< (unspecified)                                                        */
#define TWIS22_EASYDMAMODEINCLUDED 0                 /*!< (unspecified)                                                        */
#define TWIS22_EASYDMAFULLLPMODEINCLUDED 0           /*!< (unspecified)                                                        */
#define TWIS22_EASYDMAPATTERNMATCHERINCLUDED 1       /*!< (unspecified)                                                        */
#define TWIS22_EASYDMANUMMATCHCHANNELS_MIN 0         /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define TWIS22_EASYDMANUMMATCHCHANNELS_MAX 3         /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define TWIS22_EASYDMANUMMATCHCHANNELS_SIZE 4        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define TWIS22_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 0 /*!< (unspecified)                                                   */
#define TWIS22_EASYDMASTOPTASKINCLUDED 1             /*!< (unspecified)                                                        */

#define TWIS23_EASYDMA5 1                            /*!< (unspecified)                                                        */
#define TWIS23_EASYDMATEMP 0                         /*!< (unspecified)                                                        */
#define TWIS23_EASYDMA_MAXCNT_MIN 0                  /*!< (unspecified)                                                        */
#define TWIS23_EASYDMA_MAXCNT_MAX 15                 /*!< (unspecified)                                                        */
#define TWIS23_EASYDMA_MAXCNT_SIZE 16                /*!< (unspecified)                                                        */
#define TWIS23_EASYDMALISTINCLUDED 0                 /*!< (unspecified)                                                        */
#define TWIS23_EASYDMAMODEINCLUDED 0                 /*!< (unspecified)                                                        */
#define TWIS23_EASYDMAFULLLPMODEINCLUDED 0           /*!< (unspecified)                                                        */
#define TWIS23_EASYDMAPATTERNMATCHERINCLUDED 1       /*!< (unspecified)                                                        */
#define TWIS23_EASYDMANUMMATCHCHANNELS_MIN 0         /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define TWIS23_EASYDMANUMMATCHCHANNELS_MAX 3         /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define TWIS23_EASYDMANUMMATCHCHANNELS_SIZE 4        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define TWIS23_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 0 /*!< (unspecified)                                                   */
#define TWIS23_EASYDMASTOPTASKINCLUDED 1             /*!< (unspecified)                                                        */

#define TWIS24_EASYDMA5 1                            /*!< (unspecified)                                                        */
#define TWIS24_EASYDMATEMP 0                         /*!< (unspecified)                                                        */
#define TWIS24_EASYDMA_MAXCNT_MIN 0                  /*!< (unspecified)                                                        */
#define TWIS24_EASYDMA_MAXCNT_MAX 15                 /*!< (unspecified)                                                        */
#define TWIS24_EASYDMA_MAXCNT_SIZE 16                /*!< (unspecified)                                                        */
#define TWIS24_EASYDMALISTINCLUDED 0                 /*!< (unspecified)                                                        */
#define TWIS24_EASYDMAMODEINCLUDED 0                 /*!< (unspecified)                                                        */
#define TWIS24_EASYDMAFULLLPMODEINCLUDED 0           /*!< (unspecified)                                                        */
#define TWIS24_EASYDMAPATTERNMATCHERINCLUDED 1       /*!< (unspecified)                                                        */
#define TWIS24_EASYDMANUMMATCHCHANNELS_MIN 0         /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define TWIS24_EASYDMANUMMATCHCHANNELS_MAX 3         /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define TWIS24_EASYDMANUMMATCHCHANNELS_SIZE 4        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define TWIS24_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 0 /*!< (unspecified)                                                   */
#define TWIS24_EASYDMASTOPTASKINCLUDED 1             /*!< (unspecified)                                                        */

#define TWIS30_EASYDMA5 1                            /*!< (unspecified)                                                        */
#define TWIS30_EASYDMATEMP 0                         /*!< (unspecified)                                                        */
#define TWIS30_EASYDMA_MAXCNT_MIN 0                  /*!< (unspecified)                                                        */
#define TWIS30_EASYDMA_MAXCNT_MAX 15                 /*!< (unspecified)                                                        */
#define TWIS30_EASYDMA_MAXCNT_SIZE 16                /*!< (unspecified)                                                        */
#define TWIS30_EASYDMALISTINCLUDED 0                 /*!< (unspecified)                                                        */
#define TWIS30_EASYDMAMODEINCLUDED 0                 /*!< (unspecified)                                                        */
#define TWIS30_EASYDMAFULLLPMODEINCLUDED 0           /*!< (unspecified)                                                        */
#define TWIS30_EASYDMAPATTERNMATCHERINCLUDED 1       /*!< (unspecified)                                                        */
#define TWIS30_EASYDMANUMMATCHCHANNELS_MIN 0         /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define TWIS30_EASYDMANUMMATCHCHANNELS_MAX 3         /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define TWIS30_EASYDMANUMMATCHCHANNELS_SIZE 4        /*!< EasyDMA pattern matching engine supports events 0..3.                */
#define TWIS30_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 0 /*!< (unspecified)                                                   */
#define TWIS30_EASYDMASTOPTASKINCLUDED 1             /*!< (unspecified)                                                        */

/*Memory configuration*/
#define MEMCONF_PRESENT 1
#define MEMCONF_COUNT 2

#define MEMCONF_RETTRIM 1                            /*!< (unspecified)                                                        */
#define MEMCONF_REPAIR 0                             /*!< (unspecified)                                                        */
#define MEMCONF_REPAIR_INTERNAL_DOC 0                /*!< (unspecified)                                                        */
#define MEMCONF_POWER 1                              /*!< (unspecified)                                                        */
#define MEMCONF_RET2 1                               /*!< (unspecified)                                                        */
#define MEMCONF_TRIM_INTERNAL_DOC 1                  /*!< (unspecified)                                                        */

#define MEMCONF_WIFI_RETTRIM 1                       /*!< (unspecified)                                                        */
#define MEMCONF_WIFI_REPAIR 0                        /*!< (unspecified)                                                        */
#define MEMCONF_WIFI_REPAIR_INTERNAL_DOC 0           /*!< (unspecified)                                                        */
#define MEMCONF_WIFI_POWER 1                         /*!< (unspecified)                                                        */
#define MEMCONF_WIFI_RET2 1                          /*!< (unspecified)                                                        */
#define MEMCONF_WIFI_TRIM_INTERNAL_DOC 1             /*!< (unspecified)                                                        */

/*Pulse Density Modulation (Digital Microphone) Interface*/
#define PDM_PRESENT 1
#define PDM_COUNT 2

#define PDM20_EASYDMA5 0                             /*!< (unspecified)                                                        */
#define PDM20_EASYDMATEMP 1                          /*!< (unspecified)                                                        */
#define PDM20_SAMPLE16 0                             /*!< (unspecified)                                                        */
#define PDM20_SAMPLE48 1                             /*!< (unspecified)                                                        */
#define PDM20_PRESCALER_PRESENT 1                    /*!< (unspecified)                                                        */
#define PDM20_EASYDMALISTINCLUDED 0                  /*!< (unspecified)                                                        */
#define PDM20_EASYDMAMODEINCLUDED 0                  /*!< (unspecified)                                                        */
#define PDM20_EASYDMAFULLLPMODEINCLUDED 0            /*!< (unspecified)                                                        */
#define PDM20_EASYDMAPATTERNMATCHERINCLUDED 0        /*!< (unspecified)                                                        */
#define PDM20_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 1 /*!< (unspecified)                                                    */
#define PDM20_EASYDMASTOPTASKINCLUDED 1              /*!< (unspecified)                                                        */

#define PDM21_EASYDMA5 0                             /*!< (unspecified)                                                        */
#define PDM21_EASYDMATEMP 1                          /*!< (unspecified)                                                        */
#define PDM21_SAMPLE16 0                             /*!< (unspecified)                                                        */
#define PDM21_SAMPLE48 1                             /*!< (unspecified)                                                        */
#define PDM21_PRESCALER_PRESENT 1                    /*!< (unspecified)                                                        */
#define PDM21_EASYDMALISTINCLUDED 0                  /*!< (unspecified)                                                        */
#define PDM21_EASYDMAMODEINCLUDED 0                  /*!< (unspecified)                                                        */
#define PDM21_EASYDMAFULLLPMODEINCLUDED 0            /*!< (unspecified)                                                        */
#define PDM21_EASYDMAPATTERNMATCHERINCLUDED 0        /*!< (unspecified)                                                        */
#define PDM21_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 1 /*!< (unspecified)                                                    */
#define PDM21_EASYDMASTOPTASKINCLUDED 1              /*!< (unspecified)                                                        */

/*Pulse width modulation unit*/
#define PWM_PRESENT 1
#define PWM_COUNT 3

#define PWM20_EASYDMA5 1                             /*!< (unspecified)                                                        */
#define PWM20_EASYDMATEMP 0                          /*!< (unspecified)                                                        */
#define PWM20_IDLE_OUT 1                             /*!< (unspecified)                                                        */
#define PWM20_COMPARE_MATCH 1                        /*!< (unspecified)                                                        */
#define PWM20_FEATURES_V2 0                          /*!< (unspecified)                                                        */
#define PWM20_NO_FEATURES_V2 1                       /*!< (unspecified)                                                        */
#define PWM20_EASYDMALISTINCLUDED 0                  /*!< (unspecified)                                                        */
#define PWM20_EASYDMAMODEINCLUDED 0                  /*!< (unspecified)                                                        */
#define PWM20_EASYDMAFULLLPMODEINCLUDED 0            /*!< (unspecified)                                                        */
#define PWM20_EASYDMAPATTERNMATCHERINCLUDED 0        /*!< (unspecified)                                                        */
#define PWM20_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 1 /*!< (unspecified)                                                    */
#define PWM20_EASYDMASTOPTASKINCLUDED 1              /*!< (unspecified)                                                        */

#define PWM21_EASYDMA5 1                             /*!< (unspecified)                                                        */
#define PWM21_EASYDMATEMP 0                          /*!< (unspecified)                                                        */
#define PWM21_IDLE_OUT 1                             /*!< (unspecified)                                                        */
#define PWM21_COMPARE_MATCH 1                        /*!< (unspecified)                                                        */
#define PWM21_FEATURES_V2 0                          /*!< (unspecified)                                                        */
#define PWM21_NO_FEATURES_V2 1                       /*!< (unspecified)                                                        */
#define PWM21_EASYDMALISTINCLUDED 0                  /*!< (unspecified)                                                        */
#define PWM21_EASYDMAMODEINCLUDED 0                  /*!< (unspecified)                                                        */
#define PWM21_EASYDMAFULLLPMODEINCLUDED 0            /*!< (unspecified)                                                        */
#define PWM21_EASYDMAPATTERNMATCHERINCLUDED 0        /*!< (unspecified)                                                        */
#define PWM21_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 1 /*!< (unspecified)                                                    */
#define PWM21_EASYDMASTOPTASKINCLUDED 1              /*!< (unspecified)                                                        */

#define PWM22_EASYDMA5 1                             /*!< (unspecified)                                                        */
#define PWM22_EASYDMATEMP 0                          /*!< (unspecified)                                                        */
#define PWM22_IDLE_OUT 1                             /*!< (unspecified)                                                        */
#define PWM22_COMPARE_MATCH 1                        /*!< (unspecified)                                                        */
#define PWM22_FEATURES_V2 0                          /*!< (unspecified)                                                        */
#define PWM22_NO_FEATURES_V2 1                       /*!< (unspecified)                                                        */
#define PWM22_EASYDMALISTINCLUDED 0                  /*!< (unspecified)                                                        */
#define PWM22_EASYDMAMODEINCLUDED 0                  /*!< (unspecified)                                                        */
#define PWM22_EASYDMAFULLLPMODEINCLUDED 0            /*!< (unspecified)                                                        */
#define PWM22_EASYDMAPATTERNMATCHERINCLUDED 0        /*!< (unspecified)                                                        */
#define PWM22_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 1 /*!< (unspecified)                                                    */
#define PWM22_EASYDMASTOPTASKINCLUDED 1              /*!< (unspecified)                                                        */

/*Analog to Digital Converter*/
#define SAADC_PRESENT 1
#define SAADC_COUNT 1

#define SAADC_EASYDMA5 0                             /*!< (unspecified)                                                        */
#define SAADC_EASYDMATEMP 1                          /*!< (unspecified)                                                        */
#define SAADC_PSEL_V2 1                              /*!< (unspecified)                                                        */
#define SAADC_TASKS_CALIBRATEGAIN 1                  /*!< (unspecified)                                                        */
#define SAADC_PADC_TSMC22 0                          /*!< (unspecified)                                                        */
#define SAADC_SAMPLERATE_CC_VALUERANGE_MIN 8         /*!< (unspecified)                                                        */
#define SAADC_SAMPLERATE_CC_VALUERANGE_MAX 2047      /*!< (unspecified)                                                        */
#define SAADC_SAMPLERATE_CC_VALUERANGE_SIZE 2048     /*!< (unspecified)                                                        */
#define SAADC_TACQ_VALUE_RANGE_MIN 1                 /*!< (unspecified)                                                        */
#define SAADC_TACQ_VALUE_RANGE_MAX 319               /*!< (unspecified)                                                        */
#define SAADC_TACQ_VALUE_RANGE_SIZE 320              /*!< (unspecified)                                                        */
#define SAADC_TCONV_VALUE_RANGE_MIN 1                /*!< (unspecified)                                                        */
#define SAADC_TCONV_VALUE_RANGE_MAX 7                /*!< (unspecified)                                                        */
#define SAADC_TCONV_VALUE_RANGE_SIZE 8               /*!< (unspecified)                                                        */
#define SAADC_PADC_WIFI_SUPPLY_GF22 1                /*!< (unspecified)                                                        */
#define SAADC_EASYDMALISTINCLUDED 0                  /*!< (unspecified)                                                        */
#define SAADC_EASYDMAMODEINCLUDED 0                  /*!< (unspecified)                                                        */
#define SAADC_EASYDMAFULLLPMODEINCLUDED 0            /*!< (unspecified)                                                        */
#define SAADC_EASYDMAPATTERNMATCHERINCLUDED 0        /*!< (unspecified)                                                        */
#define SAADC_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 0 /*!< (unspecified)                                                    */
#define SAADC_EASYDMASTOPTASKINCLUDED 0              /*!< (unspecified)                                                        */

/*NFC-A compatible radio NFC-A compatible radio*/
#define NFCT_PRESENT 1
#define NFCT_COUNT 1

#define NFCT_EASYDMA5 0                              /*!< (unspecified)                                                        */
#define NFCT_EASYDMATEMP 1                           /*!< (unspecified)                                                        */
#define NFCT_BUSERROR_PRESENT 0                      /*!< (unspecified)                                                        */
#define NFCT_NFCTFIELDDETCFG_RESET 1                 /*!< Reset value of register NFCTFIELDDETCFG: 1                           */

/*Temperature Sensor*/
#define TEMP_PRESENT 1
#define TEMP_COUNT 1

#define TEMP_HAS_ATBCONFIG 0                         /*!< (unspecified)                                                        */

/*GPIO Tasks and Events*/
#define GPIOTE_PRESENT 1
#define GPIOTE_COUNT 2

#define GPIOTE20_IRQ_COUNT 2
#define GPIOTE20_LATENCY 0                           /*!< (unspecified)                                                        */
#define GPIOTE20_GPIOTE_NCHANNELS_MIN 0              /*!< Number of GPIOTE channels: 0..7                                      */
#define GPIOTE20_GPIOTE_NCHANNELS_MAX 7              /*!< Number of GPIOTE channels: 0..7                                      */
#define GPIOTE20_GPIOTE_NCHANNELS_SIZE 8             /*!< Number of GPIOTE channels: 0..7                                      */
#define GPIOTE20_GPIOTE_NPORTEVENTS_MIN 0            /*!< Number of GPIOTE port events: 0..0                                   */
#define GPIOTE20_GPIOTE_NPORTEVENTS_MAX 0            /*!< Number of GPIOTE port events: 0..0                                   */
#define GPIOTE20_GPIOTE_NPORTEVENTS_SIZE 1           /*!< Number of GPIOTE port events: 0..0                                   */
#define GPIOTE20_GPIOTE_NINTERRUPTS_MIN 0            /*!< Number of GPIOTE interrupts: 0..1                                    */
#define GPIOTE20_GPIOTE_NINTERRUPTS_MAX 1            /*!< Number of GPIOTE interrupts: 0..1                                    */
#define GPIOTE20_GPIOTE_NINTERRUPTS_SIZE 2           /*!< Number of GPIOTE interrupts: 0..1                                    */
#define GPIOTE20_HAS_PORT_EVENT 1                    /*!< (unspecified)                                                        */

#define GPIOTE30_IRQ_COUNT 2
#define GPIOTE30_LATENCY 0                           /*!< (unspecified)                                                        */
#define GPIOTE30_GPIOTE_NCHANNELS_MIN 0              /*!< Number of GPIOTE channels: 0..3                                      */
#define GPIOTE30_GPIOTE_NCHANNELS_MAX 3              /*!< Number of GPIOTE channels: 0..3                                      */
#define GPIOTE30_GPIOTE_NCHANNELS_SIZE 4             /*!< Number of GPIOTE channels: 0..3                                      */
#define GPIOTE30_GPIOTE_NPORTEVENTS_MIN 0            /*!< Number of GPIOTE port events: 0..0                                   */
#define GPIOTE30_GPIOTE_NPORTEVENTS_MAX 0            /*!< Number of GPIOTE port events: 0..0                                   */
#define GPIOTE30_GPIOTE_NPORTEVENTS_SIZE 1           /*!< Number of GPIOTE port events: 0..0                                   */
#define GPIOTE30_GPIOTE_NINTERRUPTS_MIN 0            /*!< Number of GPIOTE interrupts: 0..1                                    */
#define GPIOTE30_GPIOTE_NINTERRUPTS_MAX 1            /*!< Number of GPIOTE interrupts: 0..1                                    */
#define GPIOTE30_GPIOTE_NINTERRUPTS_SIZE 2           /*!< Number of GPIOTE interrupts: 0..1                                    */
#define GPIOTE30_HAS_PORT_EVENT 1                    /*!< (unspecified)                                                        */

/*Quadrature Decoder*/
#define QDEC_PRESENT 1
#define QDEC_COUNT 2

#define QDEC20_LEGACYPSEL 0                          /*!< (unspecified)                                                        */

#define QDEC21_LEGACYPSEL 0                          /*!< (unspecified)                                                        */

/*Global Real-time counter*/
#define GRTC_PRESENT 1
#define GRTC_COUNT 1

#define GRTC_IRQ_COUNT 6
#define GRTC_MSBWIDTH_MIN 0                          /*!< Width of the RTCOUNTERH, RTCOMPAREH and RTCOMPARESYNCH registers :
                                                          0..14*/
#define GRTC_MSBWIDTH_MAX 14                         /*!< Width of the RTCOUNTERH, RTCOMPAREH and RTCOMPARESYNCH registers :
                                                          0..14*/
#define GRTC_MSBWIDTH_SIZE 15                        /*!< Width of the RTCOUNTERH, RTCOMPAREH and RTCOMPARESYNCH registers :
                                                          0..14*/
#define GRTC_NCC_MIN 0                               /*!< Number of compare/capture registers : 0..15                          */
#define GRTC_NCC_MAX 15                              /*!< Number of compare/capture registers : 0..15                          */
#define GRTC_NCC_SIZE 16                             /*!< Number of compare/capture registers : 0..15                          */
#define GRTC_NTIMEOUT_MIN 0                          /*!< Width of the TIMEOUT register : 0..15                                */
#define GRTC_NTIMEOUT_MAX 15                         /*!< Width of the TIMEOUT register : 0..15                                */
#define GRTC_NTIMEOUT_SIZE 16                        /*!< Width of the TIMEOUT register : 0..15                                */
#define GRTC_NDOMAIN_MIN 0                           /*!< Number of domains at the KEEPRUNNING register: 0..15                 */
#define GRTC_NDOMAIN_MAX 15                          /*!< Number of domains at the KEEPRUNNING register: 0..15                 */
#define GRTC_NDOMAIN_SIZE 16                         /*!< Number of domains at the KEEPRUNNING register: 0..15                 */
#define GRTC_GRTC_NINTERRUPTS_MIN 0                  /*!< Number of GRTC interrupts : 0..5                                     */
#define GRTC_GRTC_NINTERRUPTS_MAX 5                  /*!< Number of GRTC interrupts : 0..5                                     */
#define GRTC_GRTC_NINTERRUPTS_SIZE 6                 /*!< Number of GRTC interrupts : 0..5                                     */
#define GRTC_PWMREGS 1                               /*!< (unspecified)                                                        */
#define GRTC_CLKOUTREG 1                             /*!< (unspecified)                                                        */
#define GRTC_CLKSELREG 1                             /*!< (unspecified)                                                        */
#define GRTC_CLKSELLFLPRC 1                          /*!< (unspecified)                                                        */
#define GRTC_CCADD_WRITE_ONLY 0                      /*!< (unspecified)                                                        */

/*PCGC Master*/
#define PCGCMASTER_PRESENT 1
#define PCGCMASTER_COUNT 2

#define PCGCM20_POWERCONSUMPTIONCALC 1               /*!< (unspecified)                                                        */
#define PCGCM20_SETPWRCONTHRESHOLDBASE 1             /*!< (unspecified)                                                        */
#define PCGCM20_CLOCKFORCEREG 1                      /*!< (unspecified)                                                        */
#define PCGCM20_MASTERFORCEREG 1                     /*!< (unspecified)                                                        */

#define PCGCM30_POWERCONSUMPTIONCALC 1               /*!< (unspecified)                                                        */
#define PCGCM30_SETPWRCONTHRESHOLDBASE 1             /*!< (unspecified)                                                        */
#define PCGCM30_CLOCKFORCEREG 1                      /*!< (unspecified)                                                        */
#define PCGCM30_MASTERFORCEREG 1                     /*!< (unspecified)                                                        */

/*Time division multiplexed audio interface*/
#define TDM_PRESENT 1
#define TDM_COUNT 1

#define TDM_EASYDMA5 1                               /*!< (unspecified)                                                        */
#define TDM_EASYDMATEMP 0                            /*!< (unspecified)                                                        */
#define TDM_NUM_CHANNELS_MIN 0                       /*!< (unspecified)                                                        */
#define TDM_NUM_CHANNELS_MAX 7                       /*!< (unspecified)                                                        */
#define TDM_NUM_CHANNELS_SIZE 8                      /*!< (unspecified)                                                        */
#define TDM_TDM_NUM_CLOCK_POWER_PAIR_MIN 0           /*!< Number of clock/power pairs used by TDM instance of PCGC Slave -
                                                          [0..3]*/
#define TDM_TDM_NUM_CLOCK_POWER_PAIR_MAX 3           /*!< Number of clock/power pairs used by TDM instance of PCGC Slave -
                                                          [0..3]*/
#define TDM_TDM_NUM_CLOCK_POWER_PAIR_SIZE 4          /*!< Number of clock/power pairs used by TDM instance of PCGC Slave -
                                                          [0..3]*/
#define TDM_TDM_NOTFULLPCPZERO 1                     /*!< (unspecified)                                                        */
#define TDM_BRGMCK_NUM_CLOCK_POWER_PAIR_MIN 0        /*!< Number of clock/power pairs used by BRGMCK instance of PCGC Slave -
                                                          [brgmck_numpcp]*/
#define TDM_BRGMCK_NUM_CLOCK_POWER_PAIR_MAX 2        /*!< Number of clock/power pairs used by BRGMCK instance of PCGC Slave -
                                                          [brgmck_numpcp]*/
#define TDM_BRGMCK_NUM_CLOCK_POWER_PAIR_SIZE 3       /*!< Number of clock/power pairs used by BRGMCK instance of PCGC Slave -
                                                          [brgmck_numpcp]*/
#define TDM_BRGMCK_NOTFULLPCPZERO 1                  /*!< (unspecified)                                                        */
#define TDM_BRGSCK_NUM_CLOCK_POWER_PAIR_MIN 0        /*!< Number of clock/power pairs used by BRGSCK instance of PCGC Slave -
                                                          [brgsck_numpcp]*/
#define TDM_BRGSCK_NUM_CLOCK_POWER_PAIR_MAX 2        /*!< Number of clock/power pairs used by BRGSCK instance of PCGC Slave -
                                                          [brgsck_numpcp]*/
#define TDM_BRGSCK_NUM_CLOCK_POWER_PAIR_SIZE 3       /*!< Number of clock/power pairs used by BRGSCK instance of PCGC Slave -
                                                          [brgsck_numpcp]*/
#define TDM_BRGSCK_NOTFULLPCPZERO 1                  /*!< (unspecified)                                                        */
#define TDM_DMARX_NUM_CLOCK_POWER_PAIR_MIN 0         /*!< Number of clock/power pairs used by DMARX instance of PCGC Slave -
                                                          [dmarx_numpcp]*/
#define TDM_DMARX_NUM_CLOCK_POWER_PAIR_MAX 1         /*!< Number of clock/power pairs used by DMARX instance of PCGC Slave -
                                                          [dmarx_numpcp]*/
#define TDM_DMARX_NUM_CLOCK_POWER_PAIR_SIZE 2        /*!< Number of clock/power pairs used by DMARX instance of PCGC Slave -
                                                          [dmarx_numpcp]*/
#define TDM_DMARX_NOTFULLPCPZERO 1                   /*!< (unspecified)                                                        */
#define TDM_DMATX_NUM_CLOCK_POWER_PAIR_MIN 0         /*!< Number of clock/power pairs used by DMATX instance of PCGC Slave -
                                                          [dmatx_numpcp]*/
#define TDM_DMATX_NUM_CLOCK_POWER_PAIR_MAX 1         /*!< Number of clock/power pairs used by DMATX instance of PCGC Slave -
                                                          [dmatx_numpcp]*/
#define TDM_DMATX_NUM_CLOCK_POWER_PAIR_SIZE 2        /*!< Number of clock/power pairs used by DMATX instance of PCGC Slave -
                                                          [dmatx_numpcp]*/
#define TDM_DMATX_NOTFULLPCPZERO 1                   /*!< (unspecified)                                                        */
#define TDM_EASYDMALISTINCLUDED 0                    /*!< (unspecified)                                                        */
#define TDM_EASYDMAMODEINCLUDED 1                    /*!< (unspecified)                                                        */
#define TDM_EASYDMAFULLLPMODEINCLUDED 0              /*!< (unspecified)                                                        */
#define TDM_EASYDMAPATTERNMATCHERINCLUDED 0          /*!< (unspecified)                                                        */
#define TDM_EASYDMA_CURRENT_AMOUNT_REGISTER_INCLUDED 1 /*!< (unspecified)                                                      */
#define TDM_EASYDMASTOPTASKINCLUDED 1                /*!< (unspecified)                                                        */

/*AUXPLL*/
#define AUXPLL_PRESENT 1
#define AUXPLL_COUNT 1

/*AUXPM*/
#define AUXPM_PRESENT 1
#define AUXPM_COUNT 1

/*Tamper controller*/
#define TAMPC_PRESENT 1
#define TAMPC_COUNT 1

#define TAMPC_ERASEPROTECT 1                         /*!< (unspecified)                                                        */
#define TAMPC_WARMBOOT 0                             /*!< (unspecified)                                                        */
#define TAMPC_CORESIGHT 0                            /*!< (unspecified)                                                        */
#define TAMPC_APSPIDEN 0                             /*!< (unspecified)                                                        */
#define TAMPC_PROTECT_INTRESETEN_CTRL_VALUE_RESET 1  /*!< Reset value of field VALUE in register PROTECT.INTRESETEN.CTRL: 1    */
#define TAMPC_TAMPERSWITCH 0                         /*!< (unspecified)                                                        */

/*Coexistence controller*/
#define COEXC_PRESENT 1
#define COEXC_COUNT 1

#define COEXC_NCLIENTS_MIN 0                         /*!< Number of clients supported : 0..5                                   */
#define COEXC_NCLIENTS_MAX 5                         /*!< Number of clients supported : 0..5                                   */
#define COEXC_NCLIENTS_SIZE 6                        /*!< Number of clients supported : 0..5                                   */
#define COEXC_NMODES_MIN 0                           /*!< Number of modes per client: 0..1                                     */
#define COEXC_NMODES_MAX 1                           /*!< Number of modes per client: 0..1                                     */
#define COEXC_NMODES_SIZE 2                          /*!< Number of modes per client: 0..1                                     */
#define COEXC_NCCMALLOWMODES_MIN 0                   /*!< (unspecified)                                                        */
#define COEXC_NCCMALLOWMODES_MAX 1                   /*!< (unspecified)                                                        */
#define COEXC_NCCMALLOWMODES_SIZE 2                  /*!< (unspecified)                                                        */
#define COEXC_NPRIORITYBITS_MIN 16                   /*!< CCCONF priority bits : 16..23                                        */
#define COEXC_NPRIORITYBITS_MAX 23                   /*!< CCCONF priority bits : 16..23                                        */
#define COEXC_NPRIORITYBITS_SIZE 24                  /*!< CCCONF priority bits : 16..23                                        */
#define COEXC_COEXC_NUM_CLOCK_POWER_PAIR_MIN 0       /*!< Number of clock/power pairs used by the instance of PCGC Slave -
                                                          [0..1]*/
#define COEXC_COEXC_NUM_CLOCK_POWER_PAIR_MAX 1       /*!< Number of clock/power pairs used by the instance of PCGC Slave -
                                                          [0..1]*/
#define COEXC_COEXC_NUM_CLOCK_POWER_PAIR_SIZE 2      /*!< Number of clock/power pairs used by the instance of PCGC Slave -
                                                          [0..1]*/
#define COEXC_COEXC_NOTFULLPCPZERO 1                 /*!< (unspecified)                                                        */

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
#define LPCOMP_RETAIN 0                              /*!< (unspecified)                                                        */
#define LPCOMP_POWER 0                               /*!< (unspecified)                                                        */

/*Watchdog Timer*/
#define WDT_PRESENT 1
#define WDT_COUNT 2

#define WDT30_START_ON_RESET 0                       /*!< (unspecified)                                                        */
#define WDT30_CRV_RESETVALUE 4294967295              /*!< (unspecified)                                                        */
#define WDT30_ALLOW_STOP 1                           /*!< (unspecified)                                                        */
#define WDT30_HAS_INTEN 0                            /*!< (unspecified)                                                        */

#define WDT31_START_ON_RESET 0                       /*!< (unspecified)                                                        */
#define WDT31_CRV_RESETVALUE 4294967295              /*!< (unspecified)                                                        */
#define WDT31_ALLOW_STOP 1                           /*!< (unspecified)                                                        */
#define WDT31_HAS_INTEN 0                            /*!< (unspecified)                                                        */

/*Clock management*/
#define CLOCK_PRESENT 1
#define CLOCK_COUNT 1

#define CLOCK_XOTUNE 1                               /*!< (unspecified)                                                        */

/*Power control*/
#define POWER_PRESENT 1
#define POWER_COUNT 1

#define POWER_CONSTLATSTAT 1                         /*!< (unspecified)                                                        */

/*Reset control*/
#define RESET_PRESENT 1
#define RESET_COUNT 1

/*Voltage glitch detectors*/
#define GLITCHDET_PRESENT 1
#define GLITCHDET_COUNT 1

/*Oscillator control*/
#define OSCILLATORS_PRESENT 1
#define OSCILLATORS_COUNT 1

/*Voltage regulators*/
#define REGULATORS_PRESENT 1
#define REGULATORS_COUNT 1

/*VREGUSB peripheral*/
#define VREGUSB_PRESENT 1
#define VREGUSB_COUNT 1

#define USBREG_PROLONGED_WAKEUP 0                    /*!< (unspecified)                                                        */

/*LFXO peripheral*/
#define LFXO_PRESENT 1
#define LFXO_COUNT 1

/*LFRC peripheral*/
#define LFRC_PRESENT 1
#define LFRC_COUNT 1

/*HFXO64M peripheral*/
#define HFXO64M_PRESENT 1
#define HFXO64M_COUNT 1

/*VREGMRAM peripheral*/
#define VREGMRAM_PRESENT 1
#define VREGMRAM_COUNT 1

/*VREGAO1V8 peripheral*/
#define VREGAO1V8_PRESENT 1
#define VREGAO1V8_COUNT 1

/*VREGAO0V8 peripheral*/
#define VREGAO0V8_PRESENT 1
#define VREGAO0V8_COUNT 1

#define VREGAO0V8B_OVERRIDE_CFGDYNAMIC 1             /*!< (unspecified)                                                        */

/*VREGVS0V8 peripheral*/
#define VREGVS0V8_PRESENT 1
#define VREGVS0V8_COUNT 1

#define VREGAO0V8A_INCLUDE_PCGCS 1                   /*!< (unspecified)                                                        */
#define VREGAO0V8A_VREGVS0V8_NUM_CLOCK_POWER_PAIR_MIN 0 /*!< Number of clock/power pairs used by the instance of PCGC Slave -
                                                             [0..2]*/
#define VREGAO0V8A_VREGVS0V8_NUM_CLOCK_POWER_PAIR_MAX 2 /*!< Number of clock/power pairs used by the instance of PCGC Slave -
                                                             [0..2]*/
#define VREGAO0V8A_VREGVS0V8_NUM_CLOCK_POWER_PAIR_SIZE 3 /*!< Number of clock/power pairs used by the instance of PCGC Slave -
                                                              [0..2]*/
#define VREGAO0V8A_VREGVS0V8_NOTFULLPCPZERO 0        /*!< (unspecified)                                                        */
#define VREGAO0V8A_HIGHER_CURRENT_LIMIT 1            /*!< (unspecified)                                                        */
#define VREGAO0V8A_ADD_HP_HELPER_MODE 1              /*!< (unspecified)                                                        */

/*VREGSU peripheral*/
#define VREGSU_PRESENT 1
#define VREGSU_COUNT 1

/*OSCRFR peripheral*/
#define OSCRFR_PRESENT 1
#define OSCRFR_COUNT 1

/* ==================================================== Baudrate settings ==================================================== */
/**
  * @brief UARTE.BAUDRATE register values for combinations of baudrate and core frequency
  */
typedef enum {
  NRF_UARTE00_BAUDRATE_BAUDRATE_Baud1200Core64M = 77824, /*!< 1200 baud (actual rate: 1161, -3.2 percent error), 64 MHz core
                                                              frequency*/
  NRF_UARTE00_BAUDRATE_BAUDRATE_Baud2400Core64M = 159744, /*!< 2400 baud (actual rate: 2384, -0.7 percent error), 64 MHz core
                                                               frequency*/
  NRF_UARTE00_BAUDRATE_BAUDRATE_Baud4800Core64M = 319488, /*!< 4800 baud (actual rate: 4768, -0.7 percent error), 64 MHz core
                                                               frequency*/
  NRF_UARTE00_BAUDRATE_BAUDRATE_Baud9600Core64M = 643072, /*!< 9600 baud (actual rate: 9598, -0.0 percent error), 64 MHz core
                                                               frequency*/
  NRF_UARTE00_BAUDRATE_BAUDRATE_Baud14400Core64M = 962560, /*!< 14400 baud (actual rate: 14366, -0.2 percent error), 64 MHz core
                                                                frequency*/
  NRF_UARTE00_BAUDRATE_BAUDRATE_Baud19200Core64M = 1286144, /*!< 19200 baud (actual rate: 19196, -0.0 percent error), 64 MHz
                                                                 core frequency*/
  NRF_UARTE00_BAUDRATE_BAUDRATE_Baud28800Core64M = 1929216, /*!< 28800 baud (actual rate: 28794, -0.0 percent error), 64 MHz
                                                                 core frequency*/
  NRF_UARTE00_BAUDRATE_BAUDRATE_Baud31250Core64M = 2097152, /*!< 31250 baud (actual rate: 31300, 0.2 percent error), 64 MHz core
                                                                 frequency*/
  NRF_UARTE00_BAUDRATE_BAUDRATE_Baud38400Core64M = 2576384, /*!< 38400 baud (actual rate: 38453, 0.1 percent error), 64 MHz core
                                                                 frequency*/
  NRF_UARTE00_BAUDRATE_BAUDRATE_Baud56000Core64M = 3756032, /*!< 56000 baud (actual rate: 56060, 0.1 percent error), 64 MHz core
                                                                 frequency*/
  NRF_UARTE00_BAUDRATE_BAUDRATE_Baud57600Core64M = 3862528, /*!< 57600 baud (actual rate: 57649, 0.1 percent error), 64 MHz core
                                                                 frequency*/
  NRF_UARTE00_BAUDRATE_BAUDRATE_Baud76800Core64M = 5152768, /*!< 76800 baud (actual rate: 76906, 0.1 percent error), 64 MHz core
                                                                 frequency*/
  NRF_UARTE00_BAUDRATE_BAUDRATE_Baud115200Core64M = 7720960, /*!< 115200 baud (actual rate: 115238, 0.0 percent error), 64 MHz
                                                                  core frequency*/
  NRF_UARTE00_BAUDRATE_BAUDRATE_Baud230400Core64M = 15446016, /*!< 230400 baud (actual rate: 230537, 0.1 percent error), 64 MHz
                                                                   core frequency*/
  NRF_UARTE00_BAUDRATE_BAUDRATE_Baud250000Core64M = 16777216, /*!< 250000 baud (actual rate: 250406, 0.2 percent error), 64 MHz
                                                                   core frequency*/
  NRF_UARTE00_BAUDRATE_BAUDRATE_Baud460800Core64M = 30896128, /*!< 460800 baud (actual rate: 461136, 0.1 percent error), 64 MHz
                                                                   core frequency*/
  NRF_UARTE00_BAUDRATE_BAUDRATE_Baud921600Core64M = 62242816, /*!< 921600 baud (actual rate: 928997, 0.8 percent error), 64 MHz
                                                                   core frequency*/
  NRF_UARTE00_BAUDRATE_BAUDRATE_Baud1000000Core64M = 67108864, /*!< 1000000 baud (actual rate: 1001624, 0.2 percent error), 64
                                                                    MHz core frequency*/
  NRF_UARTE00_BAUDRATE_BAUDRATE_Baud1200Core128M = 36864, /*!< 1200 baud (actual rate: 1117, -6.9 percent error), 128 MHz core
                                                               frequency*/
  NRF_UARTE00_BAUDRATE_BAUDRATE_Baud2400Core128M = 77824, /*!< 2400 baud (actual rate: 2358, -1.7 percent error), 128 MHz core
                                                               frequency*/
  NRF_UARTE00_BAUDRATE_BAUDRATE_Baud4800Core128M = 159744, /*!< 4800 baud (actual rate: 4840, 0.8 percent error), 128 MHz core
                                                                frequency*/
  NRF_UARTE00_BAUDRATE_BAUDRATE_Baud9600Core128M = 319488, /*!< 9600 baud (actual rate: 9681, 0.8 percent error), 128 MHz core
                                                                frequency*/
  NRF_UARTE00_BAUDRATE_BAUDRATE_Baud14400Core128M = 479232, /*!< 14400 baud (actual rate: 14522, 0.8 percent error), 128 MHz
                                                                 core frequency*/
  NRF_UARTE00_BAUDRATE_BAUDRATE_Baud19200Core128M = 643072, /*!< 19200 baud (actual rate: 19487, 1.5 percent error), 128 MHz
                                                                 core frequency*/
  NRF_UARTE00_BAUDRATE_BAUDRATE_Baud28800Core128M = 962560, /*!< 28800 baud (actual rate: 29168, 1.3 percent error), 128 MHz
                                                                 core frequency*/
  NRF_UARTE00_BAUDRATE_BAUDRATE_Baud31250Core128M = 1048576, /*!< 31250 baud (actual rate: 31775, 1.7 percent error), 128 MHz
                                                                  core frequency*/
  NRF_UARTE00_BAUDRATE_BAUDRATE_Baud38400Core128M = 1286144, /*!< 38400 baud (actual rate: 38974, 1.5 percent error), 128 MHz
                                                                  core frequency*/
  NRF_UARTE00_BAUDRATE_BAUDRATE_Baud56000Core128M = 1875968, /*!< 56000 baud (actual rate: 56847, 1.5 percent error), 128 MHz
                                                                  core frequency*/
  NRF_UARTE00_BAUDRATE_BAUDRATE_Baud57600Core128M = 1929216, /*!< 57600 baud (actual rate: 58461, 1.5 percent error), 128 MHz
                                                                  core frequency*/
  NRF_UARTE00_BAUDRATE_BAUDRATE_Baud76800Core128M = 2576384, /*!< 76800 baud (actual rate: 78072, 1.7 percent error), 128 MHz
                                                                  core frequency*/
  NRF_UARTE00_BAUDRATE_BAUDRATE_Baud115200Core128M = 3862528, /*!< 115200 baud (actual rate: 117046, 1.6 percent error), 128 MHz
                                                                   core frequency*/
  NRF_UARTE00_BAUDRATE_BAUDRATE_Baud230400Core128M = 7720960, /*!< 230400 baud (actual rate: 233968, 1.5 percent error), 128 MHz
                                                                   core frequency*/
  NRF_UARTE00_BAUDRATE_BAUDRATE_Baud250000Core128M = 8388608, /*!< 250000 baud (actual rate: 254200, 1.7 percent error), 128 MHz
                                                                   core frequency*/
  NRF_UARTE00_BAUDRATE_BAUDRATE_Baud460800Core128M = 15446016, /*!< 460800 baud (actual rate: 468061, 1.6 percent error), 128
                                                                    MHz core frequency*/
  NRF_UARTE00_BAUDRATE_BAUDRATE_Baud921600Core128M = 30896128, /*!< 921600 baud (actual rate: 936246, 1.6 percent error), 128
                                                                    MHz core frequency*/
  NRF_UARTE00_BAUDRATE_BAUDRATE_Baud1000000Core128M = 33554432, /*!< 1000000 baud (actual rate: 1016800, 1.7 percent error), 128
                                                                     MHz core frequency*/
} NRF_UARTE00_BAUDRATE_BAUDRATE_ENUM_t;

/* ==================================================== Baudrate settings ==================================================== */
/**
  * @brief UARTE.BAUDRATE register values for combinations of baudrate and core frequency
  */
typedef enum {
  NRF_UARTE20_BAUDRATE_BAUDRATE_Baud1200Core16M = 319488, /*!< 1200 baud (actual rate: 1192, -0.7 percent error), 16 MHz core
                                                               frequency*/
  NRF_UARTE20_BAUDRATE_BAUDRATE_Baud2400Core16M = 643072, /*!< 2400 baud (actual rate: 2399, -0.0 percent error), 16 MHz core
                                                               frequency*/
  NRF_UARTE20_BAUDRATE_BAUDRATE_Baud4800Core16M = 1286144, /*!< 4800 baud (actual rate: 4799, -0.0 percent error), 16 MHz core
                                                                frequency*/
  NRF_UARTE20_BAUDRATE_BAUDRATE_Baud9600Core16M = 2576384, /*!< 9600 baud (actual rate: 9613, 0.1 percent error), 16 MHz core
                                                                frequency*/
  NRF_UARTE20_BAUDRATE_BAUDRATE_Baud14400Core16M = 3862528, /*!< 14400 baud (actual rate: 14412, 0.1 percent error), 16 MHz core
                                                                 frequency*/
  NRF_UARTE20_BAUDRATE_BAUDRATE_Baud19200Core16M = 5152768, /*!< 19200 baud (actual rate: 19226, 0.1 percent error), 16 MHz core
                                                                 frequency*/
  NRF_UARTE20_BAUDRATE_BAUDRATE_Baud28800Core16M = 7720960, /*!< 28800 baud (actual rate: 28809, 0.0 percent error), 16 MHz core
                                                                 frequency*/
  NRF_UARTE20_BAUDRATE_BAUDRATE_Baud31250Core16M = 8388608, /*!< 31250 baud (actual rate: 31300, 0.2 percent error), 16 MHz core
                                                                 frequency*/
  NRF_UARTE20_BAUDRATE_BAUDRATE_Baud38400Core16M = 10297344, /*!< 38400 baud (actual rate: 38422, 0.1 percent error), 16 MHz
                                                                  core frequency*/
  NRF_UARTE20_BAUDRATE_BAUDRATE_Baud56000Core16M = 15015936, /*!< 56000 baud (actual rate: 56029, 0.1 percent error), 16 MHz
                                                                  core frequency*/
  NRF_UARTE20_BAUDRATE_BAUDRATE_Baud57600Core16M = 15446016, /*!< 57600 baud (actual rate: 57634, 0.1 percent error), 16 MHz
                                                                  core frequency*/
  NRF_UARTE20_BAUDRATE_BAUDRATE_Baud76800Core16M = 20647936, /*!< 76800 baud (actual rate: 77044, 0.3 percent error), 16 MHz
                                                                  core frequency*/
  NRF_UARTE20_BAUDRATE_BAUDRATE_Baud115200Core16M = 30896128, /*!< 115200 baud (actual rate: 115284, 0.1 percent error), 16 MHz
                                                                   core frequency*/
  NRF_UARTE20_BAUDRATE_BAUDRATE_Baud230400Core16M = 62242816, /*!< 230400 baud (actual rate: 232249, 0.8 percent error), 16 MHz
                                                                   core frequency*/
  NRF_UARTE20_BAUDRATE_BAUDRATE_Baud250000Core16M = 67108864, /*!< 250000 baud (actual rate: 250406, 0.2 percent error), 16 MHz
                                                                   core frequency*/
  NRF_UARTE20_BAUDRATE_BAUDRATE_Baud460800Core16M = 122712064, /*!< 460800 baud (actual rate: 457880, -0.6 percent error), 16
                                                                    MHz core frequency*/
  NRF_UARTE20_BAUDRATE_BAUDRATE_Baud921600Core16M = 252641280, /*!< 921600 baud (actual rate: 942691, 2.3 percent error), 16 MHz
                                                                    core frequency*/
  NRF_UARTE20_BAUDRATE_BAUDRATE_Baud1000000Core16M = 268435456, /*!< 1000000 baud (actual rate: 1001624, 0.2 percent error), 16
                                                                     MHz core frequency*/
} NRF_UARTE20_BAUDRATE_BAUDRATE_ENUM_t;

/* ==================================================== Baudrate settings ==================================================== */
/**
  * @brief UARTE.BAUDRATE register values for combinations of baudrate and core frequency
  */
typedef enum {
  NRF_UARTE21_BAUDRATE_BAUDRATE_Baud1200Core16M = 319488, /*!< 1200 baud (actual rate: 1192, -0.7 percent error), 16 MHz core
                                                               frequency*/
  NRF_UARTE21_BAUDRATE_BAUDRATE_Baud2400Core16M = 643072, /*!< 2400 baud (actual rate: 2399, -0.0 percent error), 16 MHz core
                                                               frequency*/
  NRF_UARTE21_BAUDRATE_BAUDRATE_Baud4800Core16M = 1286144, /*!< 4800 baud (actual rate: 4799, -0.0 percent error), 16 MHz core
                                                                frequency*/
  NRF_UARTE21_BAUDRATE_BAUDRATE_Baud9600Core16M = 2576384, /*!< 9600 baud (actual rate: 9613, 0.1 percent error), 16 MHz core
                                                                frequency*/
  NRF_UARTE21_BAUDRATE_BAUDRATE_Baud14400Core16M = 3862528, /*!< 14400 baud (actual rate: 14412, 0.1 percent error), 16 MHz core
                                                                 frequency*/
  NRF_UARTE21_BAUDRATE_BAUDRATE_Baud19200Core16M = 5152768, /*!< 19200 baud (actual rate: 19226, 0.1 percent error), 16 MHz core
                                                                 frequency*/
  NRF_UARTE21_BAUDRATE_BAUDRATE_Baud28800Core16M = 7720960, /*!< 28800 baud (actual rate: 28809, 0.0 percent error), 16 MHz core
                                                                 frequency*/
  NRF_UARTE21_BAUDRATE_BAUDRATE_Baud31250Core16M = 8388608, /*!< 31250 baud (actual rate: 31300, 0.2 percent error), 16 MHz core
                                                                 frequency*/
  NRF_UARTE21_BAUDRATE_BAUDRATE_Baud38400Core16M = 10297344, /*!< 38400 baud (actual rate: 38422, 0.1 percent error), 16 MHz
                                                                  core frequency*/
  NRF_UARTE21_BAUDRATE_BAUDRATE_Baud56000Core16M = 15015936, /*!< 56000 baud (actual rate: 56029, 0.1 percent error), 16 MHz
                                                                  core frequency*/
  NRF_UARTE21_BAUDRATE_BAUDRATE_Baud57600Core16M = 15446016, /*!< 57600 baud (actual rate: 57634, 0.1 percent error), 16 MHz
                                                                  core frequency*/
  NRF_UARTE21_BAUDRATE_BAUDRATE_Baud76800Core16M = 20647936, /*!< 76800 baud (actual rate: 77044, 0.3 percent error), 16 MHz
                                                                  core frequency*/
  NRF_UARTE21_BAUDRATE_BAUDRATE_Baud115200Core16M = 30896128, /*!< 115200 baud (actual rate: 115284, 0.1 percent error), 16 MHz
                                                                   core frequency*/
  NRF_UARTE21_BAUDRATE_BAUDRATE_Baud230400Core16M = 62242816, /*!< 230400 baud (actual rate: 232249, 0.8 percent error), 16 MHz
                                                                   core frequency*/
  NRF_UARTE21_BAUDRATE_BAUDRATE_Baud250000Core16M = 67108864, /*!< 250000 baud (actual rate: 250406, 0.2 percent error), 16 MHz
                                                                   core frequency*/
  NRF_UARTE21_BAUDRATE_BAUDRATE_Baud460800Core16M = 122712064, /*!< 460800 baud (actual rate: 457880, -0.6 percent error), 16
                                                                    MHz core frequency*/
  NRF_UARTE21_BAUDRATE_BAUDRATE_Baud921600Core16M = 252641280, /*!< 921600 baud (actual rate: 942691, 2.3 percent error), 16 MHz
                                                                    core frequency*/
  NRF_UARTE21_BAUDRATE_BAUDRATE_Baud1000000Core16M = 268435456, /*!< 1000000 baud (actual rate: 1001624, 0.2 percent error), 16
                                                                     MHz core frequency*/
} NRF_UARTE21_BAUDRATE_BAUDRATE_ENUM_t;

/* ==================================================== Baudrate settings ==================================================== */
/**
  * @brief UARTE.BAUDRATE register values for combinations of baudrate and core frequency
  */
typedef enum {
  NRF_UARTE22_BAUDRATE_BAUDRATE_Baud1200Core16M = 319488, /*!< 1200 baud (actual rate: 1192, -0.7 percent error), 16 MHz core
                                                               frequency*/
  NRF_UARTE22_BAUDRATE_BAUDRATE_Baud2400Core16M = 643072, /*!< 2400 baud (actual rate: 2399, -0.0 percent error), 16 MHz core
                                                               frequency*/
  NRF_UARTE22_BAUDRATE_BAUDRATE_Baud4800Core16M = 1286144, /*!< 4800 baud (actual rate: 4799, -0.0 percent error), 16 MHz core
                                                                frequency*/
  NRF_UARTE22_BAUDRATE_BAUDRATE_Baud9600Core16M = 2576384, /*!< 9600 baud (actual rate: 9613, 0.1 percent error), 16 MHz core
                                                                frequency*/
  NRF_UARTE22_BAUDRATE_BAUDRATE_Baud14400Core16M = 3862528, /*!< 14400 baud (actual rate: 14412, 0.1 percent error), 16 MHz core
                                                                 frequency*/
  NRF_UARTE22_BAUDRATE_BAUDRATE_Baud19200Core16M = 5152768, /*!< 19200 baud (actual rate: 19226, 0.1 percent error), 16 MHz core
                                                                 frequency*/
  NRF_UARTE22_BAUDRATE_BAUDRATE_Baud28800Core16M = 7720960, /*!< 28800 baud (actual rate: 28809, 0.0 percent error), 16 MHz core
                                                                 frequency*/
  NRF_UARTE22_BAUDRATE_BAUDRATE_Baud31250Core16M = 8388608, /*!< 31250 baud (actual rate: 31300, 0.2 percent error), 16 MHz core
                                                                 frequency*/
  NRF_UARTE22_BAUDRATE_BAUDRATE_Baud38400Core16M = 10297344, /*!< 38400 baud (actual rate: 38422, 0.1 percent error), 16 MHz
                                                                  core frequency*/
  NRF_UARTE22_BAUDRATE_BAUDRATE_Baud56000Core16M = 15015936, /*!< 56000 baud (actual rate: 56029, 0.1 percent error), 16 MHz
                                                                  core frequency*/
  NRF_UARTE22_BAUDRATE_BAUDRATE_Baud57600Core16M = 15446016, /*!< 57600 baud (actual rate: 57634, 0.1 percent error), 16 MHz
                                                                  core frequency*/
  NRF_UARTE22_BAUDRATE_BAUDRATE_Baud76800Core16M = 20647936, /*!< 76800 baud (actual rate: 77044, 0.3 percent error), 16 MHz
                                                                  core frequency*/
  NRF_UARTE22_BAUDRATE_BAUDRATE_Baud115200Core16M = 30896128, /*!< 115200 baud (actual rate: 115284, 0.1 percent error), 16 MHz
                                                                   core frequency*/
  NRF_UARTE22_BAUDRATE_BAUDRATE_Baud230400Core16M = 62242816, /*!< 230400 baud (actual rate: 232249, 0.8 percent error), 16 MHz
                                                                   core frequency*/
  NRF_UARTE22_BAUDRATE_BAUDRATE_Baud250000Core16M = 67108864, /*!< 250000 baud (actual rate: 250406, 0.2 percent error), 16 MHz
                                                                   core frequency*/
  NRF_UARTE22_BAUDRATE_BAUDRATE_Baud460800Core16M = 122712064, /*!< 460800 baud (actual rate: 457880, -0.6 percent error), 16
                                                                    MHz core frequency*/
  NRF_UARTE22_BAUDRATE_BAUDRATE_Baud921600Core16M = 252641280, /*!< 921600 baud (actual rate: 942691, 2.3 percent error), 16 MHz
                                                                    core frequency*/
  NRF_UARTE22_BAUDRATE_BAUDRATE_Baud1000000Core16M = 268435456, /*!< 1000000 baud (actual rate: 1001624, 0.2 percent error), 16
                                                                     MHz core frequency*/
} NRF_UARTE22_BAUDRATE_BAUDRATE_ENUM_t;

/* ==================================================== Baudrate settings ==================================================== */
/**
  * @brief UARTE.BAUDRATE register values for combinations of baudrate and core frequency
  */
typedef enum {
  NRF_UARTE23_BAUDRATE_BAUDRATE_Baud1200Core16M = 319488, /*!< 1200 baud (actual rate: 1192, -0.7 percent error), 16 MHz core
                                                               frequency*/
  NRF_UARTE23_BAUDRATE_BAUDRATE_Baud2400Core16M = 643072, /*!< 2400 baud (actual rate: 2399, -0.0 percent error), 16 MHz core
                                                               frequency*/
  NRF_UARTE23_BAUDRATE_BAUDRATE_Baud4800Core16M = 1286144, /*!< 4800 baud (actual rate: 4799, -0.0 percent error), 16 MHz core
                                                                frequency*/
  NRF_UARTE23_BAUDRATE_BAUDRATE_Baud9600Core16M = 2576384, /*!< 9600 baud (actual rate: 9613, 0.1 percent error), 16 MHz core
                                                                frequency*/
  NRF_UARTE23_BAUDRATE_BAUDRATE_Baud14400Core16M = 3862528, /*!< 14400 baud (actual rate: 14412, 0.1 percent error), 16 MHz core
                                                                 frequency*/
  NRF_UARTE23_BAUDRATE_BAUDRATE_Baud19200Core16M = 5152768, /*!< 19200 baud (actual rate: 19226, 0.1 percent error), 16 MHz core
                                                                 frequency*/
  NRF_UARTE23_BAUDRATE_BAUDRATE_Baud28800Core16M = 7720960, /*!< 28800 baud (actual rate: 28809, 0.0 percent error), 16 MHz core
                                                                 frequency*/
  NRF_UARTE23_BAUDRATE_BAUDRATE_Baud31250Core16M = 8388608, /*!< 31250 baud (actual rate: 31300, 0.2 percent error), 16 MHz core
                                                                 frequency*/
  NRF_UARTE23_BAUDRATE_BAUDRATE_Baud38400Core16M = 10297344, /*!< 38400 baud (actual rate: 38422, 0.1 percent error), 16 MHz
                                                                  core frequency*/
  NRF_UARTE23_BAUDRATE_BAUDRATE_Baud56000Core16M = 15015936, /*!< 56000 baud (actual rate: 56029, 0.1 percent error), 16 MHz
                                                                  core frequency*/
  NRF_UARTE23_BAUDRATE_BAUDRATE_Baud57600Core16M = 15446016, /*!< 57600 baud (actual rate: 57634, 0.1 percent error), 16 MHz
                                                                  core frequency*/
  NRF_UARTE23_BAUDRATE_BAUDRATE_Baud76800Core16M = 20647936, /*!< 76800 baud (actual rate: 77044, 0.3 percent error), 16 MHz
                                                                  core frequency*/
  NRF_UARTE23_BAUDRATE_BAUDRATE_Baud115200Core16M = 30896128, /*!< 115200 baud (actual rate: 115284, 0.1 percent error), 16 MHz
                                                                   core frequency*/
  NRF_UARTE23_BAUDRATE_BAUDRATE_Baud230400Core16M = 62242816, /*!< 230400 baud (actual rate: 232249, 0.8 percent error), 16 MHz
                                                                   core frequency*/
  NRF_UARTE23_BAUDRATE_BAUDRATE_Baud250000Core16M = 67108864, /*!< 250000 baud (actual rate: 250406, 0.2 percent error), 16 MHz
                                                                   core frequency*/
  NRF_UARTE23_BAUDRATE_BAUDRATE_Baud460800Core16M = 122712064, /*!< 460800 baud (actual rate: 457880, -0.6 percent error), 16
                                                                    MHz core frequency*/
  NRF_UARTE23_BAUDRATE_BAUDRATE_Baud921600Core16M = 252641280, /*!< 921600 baud (actual rate: 942691, 2.3 percent error), 16 MHz
                                                                    core frequency*/
  NRF_UARTE23_BAUDRATE_BAUDRATE_Baud1000000Core16M = 268435456, /*!< 1000000 baud (actual rate: 1001624, 0.2 percent error), 16
                                                                     MHz core frequency*/
} NRF_UARTE23_BAUDRATE_BAUDRATE_ENUM_t;

/* ==================================================== Baudrate settings ==================================================== */
/**
  * @brief UARTE.BAUDRATE register values for combinations of baudrate and core frequency
  */
typedef enum {
  NRF_UARTE24_BAUDRATE_BAUDRATE_Baud1200Core16M = 319488, /*!< 1200 baud (actual rate: 1192, -0.7 percent error), 16 MHz core
                                                               frequency*/
  NRF_UARTE24_BAUDRATE_BAUDRATE_Baud2400Core16M = 643072, /*!< 2400 baud (actual rate: 2399, -0.0 percent error), 16 MHz core
                                                               frequency*/
  NRF_UARTE24_BAUDRATE_BAUDRATE_Baud4800Core16M = 1286144, /*!< 4800 baud (actual rate: 4799, -0.0 percent error), 16 MHz core
                                                                frequency*/
  NRF_UARTE24_BAUDRATE_BAUDRATE_Baud9600Core16M = 2576384, /*!< 9600 baud (actual rate: 9613, 0.1 percent error), 16 MHz core
                                                                frequency*/
  NRF_UARTE24_BAUDRATE_BAUDRATE_Baud14400Core16M = 3862528, /*!< 14400 baud (actual rate: 14412, 0.1 percent error), 16 MHz core
                                                                 frequency*/
  NRF_UARTE24_BAUDRATE_BAUDRATE_Baud19200Core16M = 5152768, /*!< 19200 baud (actual rate: 19226, 0.1 percent error), 16 MHz core
                                                                 frequency*/
  NRF_UARTE24_BAUDRATE_BAUDRATE_Baud28800Core16M = 7720960, /*!< 28800 baud (actual rate: 28809, 0.0 percent error), 16 MHz core
                                                                 frequency*/
  NRF_UARTE24_BAUDRATE_BAUDRATE_Baud31250Core16M = 8388608, /*!< 31250 baud (actual rate: 31300, 0.2 percent error), 16 MHz core
                                                                 frequency*/
  NRF_UARTE24_BAUDRATE_BAUDRATE_Baud38400Core16M = 10297344, /*!< 38400 baud (actual rate: 38422, 0.1 percent error), 16 MHz
                                                                  core frequency*/
  NRF_UARTE24_BAUDRATE_BAUDRATE_Baud56000Core16M = 15015936, /*!< 56000 baud (actual rate: 56029, 0.1 percent error), 16 MHz
                                                                  core frequency*/
  NRF_UARTE24_BAUDRATE_BAUDRATE_Baud57600Core16M = 15446016, /*!< 57600 baud (actual rate: 57634, 0.1 percent error), 16 MHz
                                                                  core frequency*/
  NRF_UARTE24_BAUDRATE_BAUDRATE_Baud76800Core16M = 20647936, /*!< 76800 baud (actual rate: 77044, 0.3 percent error), 16 MHz
                                                                  core frequency*/
  NRF_UARTE24_BAUDRATE_BAUDRATE_Baud115200Core16M = 30896128, /*!< 115200 baud (actual rate: 115284, 0.1 percent error), 16 MHz
                                                                   core frequency*/
  NRF_UARTE24_BAUDRATE_BAUDRATE_Baud230400Core16M = 62242816, /*!< 230400 baud (actual rate: 232249, 0.8 percent error), 16 MHz
                                                                   core frequency*/
  NRF_UARTE24_BAUDRATE_BAUDRATE_Baud250000Core16M = 67108864, /*!< 250000 baud (actual rate: 250406, 0.2 percent error), 16 MHz
                                                                   core frequency*/
  NRF_UARTE24_BAUDRATE_BAUDRATE_Baud460800Core16M = 122712064, /*!< 460800 baud (actual rate: 457880, -0.6 percent error), 16
                                                                    MHz core frequency*/
  NRF_UARTE24_BAUDRATE_BAUDRATE_Baud921600Core16M = 252641280, /*!< 921600 baud (actual rate: 942691, 2.3 percent error), 16 MHz
                                                                    core frequency*/
  NRF_UARTE24_BAUDRATE_BAUDRATE_Baud1000000Core16M = 268435456, /*!< 1000000 baud (actual rate: 1001624, 0.2 percent error), 16
                                                                     MHz core frequency*/
} NRF_UARTE24_BAUDRATE_BAUDRATE_ENUM_t;

/* ==================================================== Baudrate settings ==================================================== */
/**
  * @brief UARTE.BAUDRATE register values for combinations of baudrate and core frequency
  */
typedef enum {
  NRF_UARTE30_BAUDRATE_BAUDRATE_Baud1200Core16M = 319488, /*!< 1200 baud (actual rate: 1192, -0.7 percent error), 16 MHz core
                                                               frequency*/
  NRF_UARTE30_BAUDRATE_BAUDRATE_Baud2400Core16M = 643072, /*!< 2400 baud (actual rate: 2399, -0.0 percent error), 16 MHz core
                                                               frequency*/
  NRF_UARTE30_BAUDRATE_BAUDRATE_Baud4800Core16M = 1286144, /*!< 4800 baud (actual rate: 4799, -0.0 percent error), 16 MHz core
                                                                frequency*/
  NRF_UARTE30_BAUDRATE_BAUDRATE_Baud9600Core16M = 2576384, /*!< 9600 baud (actual rate: 9613, 0.1 percent error), 16 MHz core
                                                                frequency*/
  NRF_UARTE30_BAUDRATE_BAUDRATE_Baud14400Core16M = 3862528, /*!< 14400 baud (actual rate: 14412, 0.1 percent error), 16 MHz core
                                                                 frequency*/
  NRF_UARTE30_BAUDRATE_BAUDRATE_Baud19200Core16M = 5152768, /*!< 19200 baud (actual rate: 19226, 0.1 percent error), 16 MHz core
                                                                 frequency*/
  NRF_UARTE30_BAUDRATE_BAUDRATE_Baud28800Core16M = 7720960, /*!< 28800 baud (actual rate: 28809, 0.0 percent error), 16 MHz core
                                                                 frequency*/
  NRF_UARTE30_BAUDRATE_BAUDRATE_Baud31250Core16M = 8388608, /*!< 31250 baud (actual rate: 31300, 0.2 percent error), 16 MHz core
                                                                 frequency*/
  NRF_UARTE30_BAUDRATE_BAUDRATE_Baud38400Core16M = 10297344, /*!< 38400 baud (actual rate: 38422, 0.1 percent error), 16 MHz
                                                                  core frequency*/
  NRF_UARTE30_BAUDRATE_BAUDRATE_Baud56000Core16M = 15015936, /*!< 56000 baud (actual rate: 56029, 0.1 percent error), 16 MHz
                                                                  core frequency*/
  NRF_UARTE30_BAUDRATE_BAUDRATE_Baud57600Core16M = 15446016, /*!< 57600 baud (actual rate: 57634, 0.1 percent error), 16 MHz
                                                                  core frequency*/
  NRF_UARTE30_BAUDRATE_BAUDRATE_Baud76800Core16M = 20647936, /*!< 76800 baud (actual rate: 77044, 0.3 percent error), 16 MHz
                                                                  core frequency*/
  NRF_UARTE30_BAUDRATE_BAUDRATE_Baud115200Core16M = 30896128, /*!< 115200 baud (actual rate: 115284, 0.1 percent error), 16 MHz
                                                                   core frequency*/
  NRF_UARTE30_BAUDRATE_BAUDRATE_Baud230400Core16M = 62242816, /*!< 230400 baud (actual rate: 232249, 0.8 percent error), 16 MHz
                                                                   core frequency*/
  NRF_UARTE30_BAUDRATE_BAUDRATE_Baud250000Core16M = 67108864, /*!< 250000 baud (actual rate: 250406, 0.2 percent error), 16 MHz
                                                                   core frequency*/
  NRF_UARTE30_BAUDRATE_BAUDRATE_Baud460800Core16M = 122712064, /*!< 460800 baud (actual rate: 457880, -0.6 percent error), 16
                                                                    MHz core frequency*/
  NRF_UARTE30_BAUDRATE_BAUDRATE_Baud921600Core16M = 252641280, /*!< 921600 baud (actual rate: 942691, 2.3 percent error), 16 MHz
                                                                    core frequency*/
  NRF_UARTE30_BAUDRATE_BAUDRATE_Baud1000000Core16M = 268435456, /*!< 1000000 baud (actual rate: 1001624, 0.2 percent error), 16
                                                                     MHz core frequency*/
} NRF_UARTE30_BAUDRATE_BAUDRATE_ENUM_t;


#ifdef __cplusplus
}
#endif
#endif /* NRF7120_APPLICATION_PERIPHERALS_H */

