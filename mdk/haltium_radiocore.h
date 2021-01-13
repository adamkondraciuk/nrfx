/*

Copyright (c) 2010 - 2020, Nordic Semiconductor ASA

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

#ifndef HALTIUM_RADIOCORE_H
#define HALTIUM_RADIOCORE_H

#ifdef __cplusplus
    extern "C" {
#endif


#ifdef NRF_RADIOCORE                                 /*!< Processor information is domain local.                               */


/* =========================================================================================================================== */
/* ================                                Interrupt Number Definition                                ================ */
/* =========================================================================================================================== */

typedef enum {
/* ===================================================== Core Interrupts ===================================================== */
  Reset_IRQn                             = -15,      /*!< -15 Reset Vector, invoked on Power up and warm reset                 */
  NonMaskableInt_IRQn                    = -14,      /*!< -14 Non maskable Interrupt, cannot be stopped or preempted           */
  HardFault_IRQn                         = -13,      /*!< -13 Hard Fault, all classes of Fault                                 */
  MemoryManagement_IRQn                  = -12,      /*!< -12 Memory Management, MPU mismatch, including Access Violation and No
                                                          Match*/                                                                 
  BusFault_IRQn                          = -11,      /*!< -11 Bus Fault, Pre-Fetch-, Memory Access Fault, other address/memory
                                                          related Fault*/                                                         
  UsageFault_IRQn                        = -10,      /*!< -10 Usage Fault, i.e. Undef Instruction, Illegal State Transition    */
  SecureFault_IRQn                       = -9,       /*!<  -9 Secure Fault Handler                                             */
  SVCall_IRQn                            = -5,       /*!<  -5 System Service Call via SVC instruction                          */
  DebugMonitor_IRQn                      = -4,       /*!<  -4 Debug Monitor                                                    */
  PendSV_IRQn                            = -2,       /*!<  -2 Pendable request for system service                              */
  SysTick_IRQn                           = -1,       /*!<  -1 System Tick Timer                                                */
/* ============================================== Processor Specific Interrupts ============================================== */
  SPU0_IRQn                              = 0,        /*!< 0 SPU0                                                               */
  MPC_IRQn                               = 1,        /*!< 1 MPC                                                                */
  AXI_IRQn                               = 2,        /*!< 2 AXI                                                                */
  MVDMA_IRQn                             = 3,        /*!< 3 MVDMA                                                              */
  RAMC00_IRQn                            = 4,        /*!< 4 RAMC00                                                             */
  HSFLL_IRQn                             = 13,       /*!< 13 HSFLL                                                             */
  LRCCONF0_IRQn                          = 14,       /*!< 14 LRCCONF0                                                          */
  SPU1_IRQn                              = 16,       /*!< 16 SPU1                                                              */
  WDT0_IRQn                              = 19,       /*!< 19 WDT0                                                              */
  WDT1_IRQn                              = 20,       /*!< 20 WDT1                                                              */
  LRCCONF1_IRQn                          = 30,       /*!< 30 LRCCONF1                                                          */
  SPU2_IRQn                              = 32,       /*!< 32 SPU2                                                              */
  EGU_IRQn                               = 37,       /*!< 37 EGU                                                               */
  CCM_AAR_IRQn                           = 38,       /*!< 38 CCM_AAR                                                           */
  ECB_IRQn                               = 39,       /*!< 39 ECB                                                               */
  TIMER0_IRQn                            = 40,       /*!< 40 TIMER0                                                            */
  TIMER1_IRQn                            = 41,       /*!< 41 TIMER1                                                            */
  TIMER2_IRQn                            = 42,       /*!< 42 TIMER2                                                            */
  RTC_IRQn                               = 43,       /*!< 43 RTC                                                               */
  RADIO0_IRQn                            = 44,       /*!< 44 RADIO0                                                            */
  RADIO1_IRQn                            = 45,       /*!< 45 RADIO1                                                            */
  LRCCONF2_IRQn                          = 46,       /*!< 46 LRCCONF2                                                          */
  SPU3_IRQn                              = 48,       /*!< 48 SPU3                                                              */
  GENERIC10_IRQn                         = 51,       /*!< 51 GENERIC10                                                         */
  RAMC10_IRQn                            = 53,       /*!< 53 RAMC10                                                            */
  IPCT0_IRQn                             = 64,       /*!< 64 IPCT0                                                             */
  IPCT1_IRQn                             = 65,       /*!< 65 IPCT1                                                             */
  BELLBOARD0_IRQn                        = 96,       /*!< 96 BELLBOARD0                                                        */
  BELLBOARD1_IRQn                        = 97,       /*!< 97 BELLBOARD1                                                        */
  BELLBOARD2_IRQn                        = 98,       /*!< 98 BELLBOARD2                                                        */
  BELLBOARD3_IRQn                        = 99,       /*!< 99 BELLBOARD3                                                        */
  GPIOTE00_IRQn                          = 104,      /*!< 104 GPIOTE00                                                         */
  GPIOTE01_IRQn                          = 105,      /*!< 105 GPIOTE01                                                         */
  GPIOTE10_IRQn                          = 106,      /*!< 106 GPIOTE10                                                         */
  GPIOTE11_IRQn                          = 107,      /*!< 107 GPIOTE11                                                         */
  USBHS_IRQn                             = 134,      /*!< 134 USBHS                                                            */
  GIPCT00_IRQn                           = 209,      /*!< 209 GIPCT00                                                          */
  I3C0_IRQn                              = 211,      /*!< 211 I3C0                                                             */
  I3C1_IRQn                              = 212,      /*!< 212 I3C1                                                             */
  GTIMER0_IRQn                           = 226,      /*!< 226 GTIMER0                                                          */
  GTIMER1_IRQn                           = 227,      /*!< 227 GTIMER1                                                          */
  PWM0_IRQn                              = 228,      /*!< 228 PWM0                                                             */
  HSSPIM0_IRQn                           = 230,      /*!< 230 HSSPIM0                                                          */
  HSSPIM1_IRQn                           = 231,      /*!< 231 HSSPIM1                                                          */
  GIPCT10_IRQn                           = 289,      /*!< 289 GIPCT10                                                          */
  GRTC0_IRQn                             = 296,      /*!< 296 GRTC0                                                            */
  GRTC1_IRQn                             = 297,      /*!< 297 GRTC1                                                            */
  GWDT1_IRQn                             = 299,      /*!< 299 GWDT1                                                            */
  GWDT2_IRQn                             = 300,      /*!< 300 GWDT2                                                            */
  SAADC_IRQn                             = 386,      /*!< 386 SAADC                                                            */
  COMP_LPCOMP_IRQn                       = 387,      /*!< 387 COMP_LPCOMP                                                      */
  TEMP_IRQn                              = 388,      /*!< 388 TEMP                                                             */
  NFCT_IRQn                              = 389,      /*!< 389 NFCT                                                             */
  I2S_IRQn                               = 402,      /*!< 402 I2S                                                              */
  PDM_IRQn                               = 403,      /*!< 403 PDM                                                              */
  QDEC0_IRQn                             = 404,      /*!< 404 QDEC0                                                            */
  QDEC1_IRQn                             = 405,      /*!< 405 QDEC1                                                            */
  SIMIF_IRQn                             = 406,      /*!< 406 SIMIF                                                            */
  GMIPIRFFE_IRQn                         = 407,      /*!< 407 GMIPIRFFE                                                        */
  TWIM8_IRQn                             = 408,      /*!< 408 TWIM8                                                            */
  GTIMER2_IRQn                           = 418,      /*!< 418 GTIMER2                                                          */
  GTIMER3_IRQn                           = 419,      /*!< 419 GTIMER3                                                          */
  PWM1_IRQn                              = 420,      /*!< 420 PWM1                                                             */
  SERIAL0_IRQn                           = 421,      /*!< 421 SERIAL0                                                          */
  SERIAL1_IRQn                           = 422,      /*!< 422 SERIAL1                                                          */
  GTIMER4_IRQn                           = 434,      /*!< 434 GTIMER4                                                          */
  GTIMER5_IRQn                           = 435,      /*!< 435 GTIMER5                                                          */
  PWM2_IRQn                              = 436,      /*!< 436 PWM2                                                             */
  SERIAL2_IRQn                           = 437,      /*!< 437 SERIAL2                                                          */
  SERIAL3_IRQn                           = 438,      /*!< 438 SERIAL3                                                          */
  GTIMER6_IRQn                           = 450,      /*!< 450 GTIMER6                                                          */
  GTIMER7_IRQn                           = 451,      /*!< 451 GTIMER7                                                          */
  PWM3_IRQn                              = 452,      /*!< 452 PWM3                                                             */
  SERIAL4_IRQn                           = 453,      /*!< 453 SERIAL4                                                          */
  SERIAL5_IRQn                           = 454,      /*!< 454 SERIAL5                                                          */
  GTIMER8_IRQn                           = 466,      /*!< 466 GTIMER8                                                          */
  GTIMER9_IRQn                           = 467,      /*!< 467 GTIMER9                                                          */
  PWM4_IRQn                              = 468,      /*!< 468 PWM4                                                             */
  SERIAL6_IRQn                           = 469,      /*!< 469 SERIAL6                                                          */
  SERIAL7_IRQn                           = 470,      /*!< 470 SERIAL7                                                          */
} IRQn_Type;


/* =========================================================================================================================== */
/* ================                           Processor and Core Peripheral Section                           ================ */
/* =========================================================================================================================== */

/* =========================== Configuration of the ARM Cortex-M33 Processor and Core Peripherals ============================ */
#define __CM33_REV                  r0p4             /*!< CM33 Core Revision                                                   */
#define __DSP_PRESENT                  1             /*!< DSP present or not                                                   */
#define __NVIC_PRIO_BITS               3             /*!< Number of Bits used for Priority Levels                              */
#define __VTOR_PRESENT                 1             /*!< CPU supports alternate Vector Table address                          */
#define __MPU_PRESENT                  1             /*!< MPU present                                                          */
#define __FPU_PRESENT                  1             /*!< FPU present                                                          */
#define __FPU_DP                       0             /*!< Double Precision FPU                                                 */
#define __Vendor_SysTickConfig         0             /*!< Vendor SysTick Config implementation is used                         */
#define __SAU_REGION_PRESENT           0             /*!< SAU present                                                          */

#include "core_cm33.h"                               /*!< ARM Cortex-M33 processor and core peripherals                        */
#include "system_haltium_radiocore.h"                /*!< haltium_radiocore System Library                                     */

#endif                                               /*!< NRF_RADIOCORE                                                        */


/* ========================================= Start of section using anonymous unions ========================================= */

#if defined (__CC_ARM)
  #pragma anon_unions
#elif defined (__ICCARM__)
  #pragma language=extended
#elif defined(__ARMCC_VERSION) && (__ARMCC_VERSION >= 6010050)
  #pragma clang diagnostic push
  #pragma clang diagnostic ignored "-Wc11-extensions"
  #pragma clang diagnostic ignored "-Wreserved-id-macro"
  #pragma clang diagnostic ignored "-Wgnu-anonymous-struct"
  #pragma clang diagnostic ignored "-Wnested-anon-types"
#elif defined (__GNUC__)
  /* anonymous unions are enabled by default */
#elif defined (__TMS470__)
  /* anonymous unions are enabled by default */
#elif defined (__TASKING__)
  #pragma warning 586
#elif defined (__CSMC__)
  /* anonymous unions are enabled by default */
#elif defined (_CEVA)
  /* anonymous unions are enabled by default */
#else
  #warning Unsupported compiler type
#endif

/* =========================================================================================================================== */
/* ================                                  Peripheral Address Map                                  ================ */
/* =========================================================================================================================== */

#define NRF_RADIOCORE_CACHE0DATA_S_BASE   0x03F00000UL
#define NRF_RADIOCORE_CACHE0INFO_S_BASE   0x03F10000UL
#define NRF_RADIOCORE_UICR_S_BASE         0x0FFFA000UL
#define NRF_RADIOCORE_CACHE1DATA_S_BASE   0x23F00000UL
#define NRF_RADIOCORE_CACHE1INFO_S_BASE   0x23F10000UL
#define NRF_RADIOCORE_ETM_NS_BASE         0xE0041000UL
#define NRF_RADIOCORE_CTI_NS_BASE         0xE0042000UL
#define NRF_RADIOCORE_CPUC_S_BASE         0xE0080000UL
#define NRF_RADIOCORE_CACHE0_S_BASE       0xE0082000UL
#define NRF_RADIOCORE_CACHE1_S_BASE       0xE0083000UL
#define NRF_RADIOCORE_SPU0_S_BASE         0x53000000UL
#define NRF_RADIOCORE_MPC_S_BASE          0x53001000UL
#define NRF_RADIOCORE_AXI_S_BASE          0x53002000UL
#define NRF_RADIOCORE_MVDMA_NS_BASE       0x43003000UL
#define NRF_RADIOCORE_MVDMA_S_BASE        0x53003000UL
#define NRF_RADIOCORE_RAMC00_NS_BASE      0x43004000UL
#define NRF_RADIOCORE_RAMC00_S_BASE       0x53004000UL
#define NRF_RADIOCORE_PCGCS0_S_BASE       0x5300C000UL
#define NRF_RADIOCORE_HSFLL_S_BASE        0x5300D000UL
#define NRF_RADIOCORE_LRCCONF0_S_BASE     0x5300E000UL
#define NRF_RADIOCORE_PCGCM0_S_BASE       0x5300F000UL
#define NRF_RADIOCORE_SPU1_S_BASE         0x53010000UL
#define NRF_RADIOCORE_CPUCONF_NS_BASE     0x43011000UL
#define NRF_RADIOCORE_CPUCONF_S_BASE      0x53011000UL
#define NRF_RADIOCORE_MEMCONF_NS_BASE     0x43012000UL
#define NRF_RADIOCORE_MEMCONF_S_BASE      0x53012000UL
#define NRF_RADIOCORE_WDT0_NS_BASE        0x43013000UL
#define NRF_RADIOCORE_WDT0_S_BASE         0x53013000UL
#define NRF_RADIOCORE_WDT1_NS_BASE        0x43014000UL
#define NRF_RADIOCORE_WDT1_S_BASE         0x53014000UL
#define NRF_RADIOCORE_PCGCS1_S_BASE       0x5301D000UL
#define NRF_RADIOCORE_LRCCONF1_S_BASE     0x5301E000UL
#define NRF_RADIOCORE_PCGCM1_S_BASE       0x5301F000UL
#define NRF_RADIOCORE_SPU2_S_BASE         0x53020000UL
#define NRF_RADIOCORE_AMBIX0_S_BASE       0x53021000UL
#define NRF_RADIOCORE_DPPIC_NS_BASE       0x43022000UL
#define NRF_RADIOCORE_DPPIC_S_BASE        0x53022000UL
#define NRF_RADIOCORE_PPIB_NS_BASE        0x43023000UL
#define NRF_RADIOCORE_PPIB_S_BASE         0x53023000UL
#define NRF_RADIOCORE_EGU_NS_BASE         0x43025000UL
#define NRF_RADIOCORE_EGU_S_BASE          0x53025000UL
#define NRF_RADIOCORE_CCM_NS_BASE         0x43026000UL
#define NRF_RADIOCORE_AAR_NS_BASE         0x43026000UL
#define NRF_RADIOCORE_CCM_S_BASE          0x53026000UL
#define NRF_RADIOCORE_AAR_S_BASE          0x53026000UL
#define NRF_RADIOCORE_ECB_NS_BASE         0x43027000UL
#define NRF_RADIOCORE_ECB_S_BASE          0x53027000UL
#define NRF_RADIOCORE_TIMER0_NS_BASE      0x43028000UL
#define NRF_RADIOCORE_TIMER0_S_BASE       0x53028000UL
#define NRF_RADIOCORE_TIMER1_NS_BASE      0x43029000UL
#define NRF_RADIOCORE_TIMER1_S_BASE       0x53029000UL
#define NRF_RADIOCORE_TIMER2_NS_BASE      0x4302A000UL
#define NRF_RADIOCORE_TIMER2_S_BASE       0x5302A000UL
#define NRF_RADIOCORE_RTC_NS_BASE         0x4302B000UL
#define NRF_RADIOCORE_RTC_S_BASE          0x5302B000UL
#define NRF_RADIOCORE_RADIO_NS_BASE       0x4302C000UL
#define NRF_RADIOCORE_RADIO_S_BASE        0x5302C000UL
#define NRF_RADIOCORE_LRCCONF2_S_BASE     0x5302E000UL
#define NRF_RADIOCORE_PCGCM2_S_BASE       0x5302F000UL
#define NRF_RADIOCORE_SPU3_S_BASE         0x53030000UL
#define NRF_RADIOCORE_PPIBEXT_NS_BASE     0x43031000UL
#define NRF_RADIOCORE_PPIBEXT_S_BASE      0x53031000UL
#define NRF_RADIOCORE_GENERIC10_NS_BASE   0x53033000UL
#define NRF_RADIOCORE_GENERIC10_S_BASE    0x53033000UL
#define NRF_RADIOCORE_RAMC10_NS_BASE      0x43035000UL
#define NRF_RADIOCORE_RAMC10_S_BASE       0x53035000UL
#define NRF_RADIOCORE_PCGCS2_S_BASE       0x5303E000UL
#define NRF_RADIOCORE_PCGCM3_S_BASE       0x5303F000UL
#define NRF_RADIOCORE_IPCT_NS_BASE        0x43024000UL
#define NRF_RADIOCORE_IPCT_S_BASE         0x53024000UL
#define NRF_RADIOCORE_BELLBOARD_NS_BASE   0x4F09B000UL
#define NRF_RADIOCORE_BELLBOARD_S_BASE    0x5F09B000UL

/* =========================================================================================================================== */
/* ================                                  Peripheral Declaration                                  ================ */
/* =========================================================================================================================== */

#define NRF_RADIOCORE_CACHE0DATA_S        ((NRF_CACHEDATA_Type*)                NRF_RADIOCORE_CACHE0DATA_S_BASE)
#define NRF_RADIOCORE_CACHE0INFO_S        ((NRF_CACHEINFO_Type*)                NRF_RADIOCORE_CACHE0INFO_S_BASE)
#define NRF_RADIOCORE_UICR_S              ((NRF_UICR_Type*)                     NRF_RADIOCORE_UICR_S_BASE)
#define NRF_RADIOCORE_CACHE1DATA_S        ((NRF_CACHEDATA_Type*)                NRF_RADIOCORE_CACHE1DATA_S_BASE)
#define NRF_RADIOCORE_CACHE1INFO_S        ((NRF_CACHEINFO_Type*)                NRF_RADIOCORE_CACHE1INFO_S_BASE)
#define NRF_RADIOCORE_ETM_NS              ((NRF_ETM_Type*)                      NRF_RADIOCORE_ETM_NS_BASE)
#define NRF_RADIOCORE_CTI_NS              ((NRF_CTI_Type*)                      NRF_RADIOCORE_CTI_NS_BASE)
#define NRF_RADIOCORE_CPUC_S              ((NRF_CM33SS_Type*)                   NRF_RADIOCORE_CPUC_S_BASE)
#define NRF_RADIOCORE_CACHE0_S            ((NRF_CACHE_Type*)                    NRF_RADIOCORE_CACHE0_S_BASE)
#define NRF_RADIOCORE_CACHE1_S            ((NRF_CACHE_Type*)                    NRF_RADIOCORE_CACHE1_S_BASE)
#define NRF_RADIOCORE_SPU0_S              ((NRF_SPU_Type*)                      NRF_RADIOCORE_SPU0_S_BASE)
#define NRF_RADIOCORE_MPC_S               ((NRF_MPC_Type*)                      NRF_RADIOCORE_MPC_S_BASE)
#define NRF_RADIOCORE_AXI_S               ((NRF_AXI_Type*)                      NRF_RADIOCORE_AXI_S_BASE)
#define NRF_RADIOCORE_MVDMA_NS            ((NRF_MVDMA_Type*)                    NRF_RADIOCORE_MVDMA_NS_BASE)
#define NRF_RADIOCORE_MVDMA_S             ((NRF_MVDMA_Type*)                    NRF_RADIOCORE_MVDMA_S_BASE)
#define NRF_RADIOCORE_RAMC00_NS           ((NRF_RAMC_Type*)                     NRF_RADIOCORE_RAMC00_NS_BASE)
#define NRF_RADIOCORE_RAMC00_S            ((NRF_RAMC_Type*)                     NRF_RADIOCORE_RAMC00_S_BASE)
#define NRF_RADIOCORE_PCGCS0_S            ((NRF_PCGCSLAVE_Type*)                NRF_RADIOCORE_PCGCS0_S_BASE)
#define NRF_RADIOCORE_HSFLL_S             ((NRF_HSFLL_Type*)                    NRF_RADIOCORE_HSFLL_S_BASE)
#define NRF_RADIOCORE_LRCCONF0_S          ((NRF_LRCCONF_Type*)                  NRF_RADIOCORE_LRCCONF0_S_BASE)
#define NRF_RADIOCORE_PCGCM0_S            ((NRF_PCGCMASTER_Type*)               NRF_RADIOCORE_PCGCM0_S_BASE)
#define NRF_RADIOCORE_SPU1_S              ((NRF_SPU_Type*)                      NRF_RADIOCORE_SPU1_S_BASE)
#define NRF_RADIOCORE_CPUCONF_NS          ((NRF_CPUCONF_Type*)                  NRF_RADIOCORE_CPUCONF_NS_BASE)
#define NRF_RADIOCORE_CPUCONF_S           ((NRF_CPUCONF_Type*)                  NRF_RADIOCORE_CPUCONF_S_BASE)
#define NRF_RADIOCORE_MEMCONF_NS          ((NRF_MEMCONF_Type*)                  NRF_RADIOCORE_MEMCONF_NS_BASE)
#define NRF_RADIOCORE_MEMCONF_S           ((NRF_MEMCONF_Type*)                  NRF_RADIOCORE_MEMCONF_S_BASE)
#define NRF_RADIOCORE_WDT0_NS             ((NRF_WDT_Type*)                      NRF_RADIOCORE_WDT0_NS_BASE)
#define NRF_RADIOCORE_WDT0_S              ((NRF_WDT_Type*)                      NRF_RADIOCORE_WDT0_S_BASE)
#define NRF_RADIOCORE_WDT1_NS             ((NRF_WDT_Type*)                      NRF_RADIOCORE_WDT1_NS_BASE)
#define NRF_RADIOCORE_WDT1_S              ((NRF_WDT_Type*)                      NRF_RADIOCORE_WDT1_S_BASE)
#define NRF_RADIOCORE_PCGCS1_S            ((NRF_PCGCSLAVE_Type*)                NRF_RADIOCORE_PCGCS1_S_BASE)
#define NRF_RADIOCORE_LRCCONF1_S          ((NRF_LRCCONF_Type*)                  NRF_RADIOCORE_LRCCONF1_S_BASE)
#define NRF_RADIOCORE_PCGCM1_S            ((NRF_PCGCMASTER_Type*)               NRF_RADIOCORE_PCGCM1_S_BASE)
#define NRF_RADIOCORE_SPU2_S              ((NRF_SPU_Type*)                      NRF_RADIOCORE_SPU2_S_BASE)
#define NRF_RADIOCORE_AMBIX0_S            ((NRF_AMBIX_Type*)                    NRF_RADIOCORE_AMBIX0_S_BASE)
#define NRF_RADIOCORE_DPPIC_NS            ((NRF_DPPIC_Type*)                    NRF_RADIOCORE_DPPIC_NS_BASE)
#define NRF_RADIOCORE_DPPIC_S             ((NRF_DPPIC_Type*)                    NRF_RADIOCORE_DPPIC_S_BASE)
#define NRF_RADIOCORE_PPIB_NS             ((NRF_PPIB_Type*)                     NRF_RADIOCORE_PPIB_NS_BASE)
#define NRF_RADIOCORE_PPIB_S              ((NRF_PPIB_Type*)                     NRF_RADIOCORE_PPIB_S_BASE)
#define NRF_RADIOCORE_EGU_NS              ((NRF_EGU_Type*)                      NRF_RADIOCORE_EGU_NS_BASE)
#define NRF_RADIOCORE_EGU_S               ((NRF_EGU_Type*)                      NRF_RADIOCORE_EGU_S_BASE)
#define NRF_RADIOCORE_CCM_NS              ((NRF_CCM_Type*)                      NRF_RADIOCORE_CCM_NS_BASE)
#define NRF_RADIOCORE_AAR_NS              ((NRF_AAR_Type*)                      NRF_RADIOCORE_AAR_NS_BASE)
#define NRF_RADIOCORE_CCM_S               ((NRF_CCM_Type*)                      NRF_RADIOCORE_CCM_S_BASE)
#define NRF_RADIOCORE_AAR_S               ((NRF_AAR_Type*)                      NRF_RADIOCORE_AAR_S_BASE)
#define NRF_RADIOCORE_ECB_NS              ((NRF_ECB_Type*)                      NRF_RADIOCORE_ECB_NS_BASE)
#define NRF_RADIOCORE_ECB_S               ((NRF_ECB_Type*)                      NRF_RADIOCORE_ECB_S_BASE)
#define NRF_RADIOCORE_TIMER0_NS           ((NRF_TIMER_Type*)                    NRF_RADIOCORE_TIMER0_NS_BASE)
#define NRF_RADIOCORE_TIMER0_S            ((NRF_TIMER_Type*)                    NRF_RADIOCORE_TIMER0_S_BASE)
#define NRF_RADIOCORE_TIMER1_NS           ((NRF_TIMER_Type*)                    NRF_RADIOCORE_TIMER1_NS_BASE)
#define NRF_RADIOCORE_TIMER1_S            ((NRF_TIMER_Type*)                    NRF_RADIOCORE_TIMER1_S_BASE)
#define NRF_RADIOCORE_TIMER2_NS           ((NRF_TIMER_Type*)                    NRF_RADIOCORE_TIMER2_NS_BASE)
#define NRF_RADIOCORE_TIMER2_S            ((NRF_TIMER_Type*)                    NRF_RADIOCORE_TIMER2_S_BASE)
#define NRF_RADIOCORE_RTC_NS              ((NRF_RTC_Type*)                      NRF_RADIOCORE_RTC_NS_BASE)
#define NRF_RADIOCORE_RTC_S               ((NRF_RTC_Type*)                      NRF_RADIOCORE_RTC_S_BASE)
#define NRF_RADIOCORE_RADIO_NS            ((NRF_RADIO_Type*)                    NRF_RADIOCORE_RADIO_NS_BASE)
#define NRF_RADIOCORE_RADIO_S             ((NRF_RADIO_Type*)                    NRF_RADIOCORE_RADIO_S_BASE)
#define NRF_RADIOCORE_LRCCONF2_S          ((NRF_LRCCONF_Type*)                  NRF_RADIOCORE_LRCCONF2_S_BASE)
#define NRF_RADIOCORE_PCGCM2_S            ((NRF_PCGCMASTER_Type*)               NRF_RADIOCORE_PCGCM2_S_BASE)
#define NRF_RADIOCORE_SPU3_S              ((NRF_SPU_Type*)                      NRF_RADIOCORE_SPU3_S_BASE)
#define NRF_RADIOCORE_PPIBEXT_NS          ((NRF_PPIB_Type*)                     NRF_RADIOCORE_PPIBEXT_NS_BASE)
#define NRF_RADIOCORE_PPIBEXT_S           ((NRF_PPIB_Type*)                     NRF_RADIOCORE_PPIBEXT_S_BASE)
#define NRF_RADIOCORE_DPPIC_S             ((NRF_DPPIC_Type*)                    NRF_RADIOCORE_DPPIC_S_BASE)
#define NRF_RADIOCORE_GENERIC10_NS        ((NRF_GENERIC_Type*)                  NRF_RADIOCORE_GENERIC10_NS_BASE)
#define NRF_RADIOCORE_GENERIC10_S         ((NRF_GENERIC_Type*)                  NRF_RADIOCORE_GENERIC10_S_BASE)
#define NRF_RADIOCORE_RAMC10_NS           ((NRF_RAMC_Type*)                     NRF_RADIOCORE_RAMC10_NS_BASE)
#define NRF_RADIOCORE_RAMC10_S            ((NRF_RAMC_Type*)                     NRF_RADIOCORE_RAMC10_S_BASE)
#define NRF_RADIOCORE_PCGCS2_S            ((NRF_PCGCSLAVE_Type*)                NRF_RADIOCORE_PCGCS2_S_BASE)
#define NRF_RADIOCORE_PCGCM3_S            ((NRF_PCGCMASTER_Type*)               NRF_RADIOCORE_PCGCM3_S_BASE)
#define NRF_RADIOCORE_IPCT_NS             ((NRF_IPCT_Type*)                     NRF_RADIOCORE_IPCT_NS_BASE)
#define NRF_RADIOCORE_IPCT_S              ((NRF_IPCT_Type*)                     NRF_RADIOCORE_IPCT_S_BASE)
#define NRF_RADIOCORE_BELLBOARD_NS        ((NRF_BELLBOARD_Type*)                NRF_RADIOCORE_BELLBOARD_NS_BASE)
#define NRF_RADIOCORE_BELLBOARD_S         ((NRF_BELLBOARD_Type*)                NRF_RADIOCORE_BELLBOARD_S_BASE)

/* =========================================================================================================================== */
/* ================                                    TrustZone Remapping                                    ================ */
/* =========================================================================================================================== */

#ifdef NRF_NONSECURE                                 /*!< Remap NRF_X_NS instances to NRF_X symbol for ease of use.            */
  #define NRF_RADIOCORE_ETM                       NRF_RADIOCORE_ETM_NS
  #define NRF_RADIOCORE_CTI                       NRF_RADIOCORE_CTI_NS
  #define NRF_RADIOCORE_MVDMA                     NRF_RADIOCORE_MVDMA_NS
  #define NRF_RADIOCORE_RAMC00                    NRF_RADIOCORE_RAMC00_NS
  #define NRF_RADIOCORE_CPUCONF                   NRF_RADIOCORE_CPUCONF_NS
  #define NRF_RADIOCORE_MEMCONF                   NRF_RADIOCORE_MEMCONF_NS
  #define NRF_RADIOCORE_WDT0                      NRF_RADIOCORE_WDT0_NS
  #define NRF_RADIOCORE_WDT1                      NRF_RADIOCORE_WDT1_NS
  #define NRF_RADIOCORE_DPPIC                     NRF_RADIOCORE_DPPIC_NS
  #define NRF_RADIOCORE_PPIB                      NRF_RADIOCORE_PPIB_NS
  #define NRF_RADIOCORE_EGU                       NRF_RADIOCORE_EGU_NS
  #define NRF_RADIOCORE_CCM                       NRF_RADIOCORE_CCM_NS
  #define NRF_RADIOCORE_AAR                       NRF_RADIOCORE_AAR_NS
  #define NRF_RADIOCORE_ECB                       NRF_RADIOCORE_ECB_NS
  #define NRF_RADIOCORE_TIMER0                    NRF_RADIOCORE_TIMER0_NS
  #define NRF_RADIOCORE_TIMER1                    NRF_RADIOCORE_TIMER1_NS
  #define NRF_RADIOCORE_TIMER2                    NRF_RADIOCORE_TIMER2_NS
  #define NRF_RADIOCORE_RTC                       NRF_RADIOCORE_RTC_NS
  #define NRF_RADIOCORE_RADIO                     NRF_RADIOCORE_RADIO_NS
  #define NRF_RADIOCORE_PPIBEXT                   NRF_RADIOCORE_PPIBEXT_NS
  #define NRF_RADIOCORE_GENERIC10                 NRF_RADIOCORE_GENERIC10_NS
  #define NRF_RADIOCORE_RAMC10                    NRF_RADIOCORE_RAMC10_NS
  #define NRF_RADIOCORE_IPCT                      NRF_RADIOCORE_IPCT_NS
  #define NRF_RADIOCORE_BELLBOARD                 NRF_RADIOCORE_BELLBOARD_NS
#else                                                /*!< Remap NRF_X_S instances to NRF_X symbol for ease of use.             */
  #define NRF_RADIOCORE_CACHE0DATA                NRF_RADIOCORE_CACHE0DATA_S
  #define NRF_RADIOCORE_CACHE0INFO                NRF_RADIOCORE_CACHE0INFO_S
  #define NRF_RADIOCORE_UICR                      NRF_RADIOCORE_UICR_S
  #define NRF_RADIOCORE_CACHE1DATA                NRF_RADIOCORE_CACHE1DATA_S
  #define NRF_RADIOCORE_CACHE1INFO                NRF_RADIOCORE_CACHE1INFO_S
  #define NRF_RADIOCORE_ETM                       NRF_RADIOCORE_ETM_NS
  #define NRF_RADIOCORE_CTI                       NRF_RADIOCORE_CTI_NS
  #define NRF_RADIOCORE_CPUC                      NRF_RADIOCORE_CPUC_S
  #define NRF_RADIOCORE_CACHE0                    NRF_RADIOCORE_CACHE0_S
  #define NRF_RADIOCORE_CACHE1                    NRF_RADIOCORE_CACHE1_S
  #define NRF_RADIOCORE_SPU0                      NRF_RADIOCORE_SPU0_S
  #define NRF_RADIOCORE_MPC                       NRF_RADIOCORE_MPC_S
  #define NRF_RADIOCORE_AXI                       NRF_RADIOCORE_AXI_S
  #define NRF_RADIOCORE_MVDMA                     NRF_RADIOCORE_MVDMA_S
  #define NRF_RADIOCORE_RAMC00                    NRF_RADIOCORE_RAMC00_S
  #define NRF_RADIOCORE_PCGCS0                    NRF_RADIOCORE_PCGCS0_S
  #define NRF_RADIOCORE_HSFLL                     NRF_RADIOCORE_HSFLL_S
  #define NRF_RADIOCORE_LRCCONF0                  NRF_RADIOCORE_LRCCONF0_S
  #define NRF_RADIOCORE_PCGCM0                    NRF_RADIOCORE_PCGCM0_S
  #define NRF_RADIOCORE_SPU1                      NRF_RADIOCORE_SPU1_S
  #define NRF_RADIOCORE_CPUCONF                   NRF_RADIOCORE_CPUCONF_S
  #define NRF_RADIOCORE_MEMCONF                   NRF_RADIOCORE_MEMCONF_S
  #define NRF_RADIOCORE_WDT0                      NRF_RADIOCORE_WDT0_S
  #define NRF_RADIOCORE_WDT1                      NRF_RADIOCORE_WDT1_S
  #define NRF_RADIOCORE_PCGCS1                    NRF_RADIOCORE_PCGCS1_S
  #define NRF_RADIOCORE_LRCCONF1                  NRF_RADIOCORE_LRCCONF1_S
  #define NRF_RADIOCORE_PCGCM1                    NRF_RADIOCORE_PCGCM1_S
  #define NRF_RADIOCORE_SPU2                      NRF_RADIOCORE_SPU2_S
  #define NRF_RADIOCORE_AMBIX0                    NRF_RADIOCORE_AMBIX0_S
  #define NRF_RADIOCORE_DPPIC                     NRF_RADIOCORE_DPPIC_S
  #define NRF_RADIOCORE_PPIB                      NRF_RADIOCORE_PPIB_S
  #define NRF_RADIOCORE_EGU                       NRF_RADIOCORE_EGU_S
  #define NRF_RADIOCORE_CCM                       NRF_RADIOCORE_CCM_S
  #define NRF_RADIOCORE_AAR                       NRF_RADIOCORE_AAR_S
  #define NRF_RADIOCORE_ECB                       NRF_RADIOCORE_ECB_S
  #define NRF_RADIOCORE_TIMER0                    NRF_RADIOCORE_TIMER0_S
  #define NRF_RADIOCORE_TIMER1                    NRF_RADIOCORE_TIMER1_S
  #define NRF_RADIOCORE_TIMER2                    NRF_RADIOCORE_TIMER2_S
  #define NRF_RADIOCORE_RTC                       NRF_RADIOCORE_RTC_S
  #define NRF_RADIOCORE_RADIO                     NRF_RADIOCORE_RADIO_S
  #define NRF_RADIOCORE_LRCCONF2                  NRF_RADIOCORE_LRCCONF2_S
  #define NRF_RADIOCORE_PCGCM2                    NRF_RADIOCORE_PCGCM2_S
  #define NRF_RADIOCORE_SPU3                      NRF_RADIOCORE_SPU3_S
  #define NRF_RADIOCORE_PPIBEXT                   NRF_RADIOCORE_PPIBEXT_S
  #define NRF_RADIOCORE_DPPIC                     NRF_RADIOCORE_DPPIC_S
  #define NRF_RADIOCORE_GENERIC10                 NRF_RADIOCORE_GENERIC10_S
  #define NRF_RADIOCORE_RAMC10                    NRF_RADIOCORE_RAMC10_S
  #define NRF_RADIOCORE_PCGCS2                    NRF_RADIOCORE_PCGCS2_S
  #define NRF_RADIOCORE_PCGCM3                    NRF_RADIOCORE_PCGCM3_S
  #define NRF_RADIOCORE_IPCT                      NRF_RADIOCORE_IPCT_S
  #define NRF_RADIOCORE_BELLBOARD                 NRF_RADIOCORE_BELLBOARD_S
#endif                                               /*!<  NRF_NONSECURE                                                       */

/* =========================================================================================================================== */
/* ================                                  Local Domain Remapping                                  ================ */
/* =========================================================================================================================== */

#ifdef NRF_RADIOCORE                                 /*!< Remap NRF_DOMAIN instances to NRF_X symbol for ease of use.          */
  #define NRF_CACHE0DATA                          NRF_RADIOCORE_CACHE0DATA
  #define NRF_CACHE0INFO                          NRF_RADIOCORE_CACHE0INFO
  #define NRF_UICR                                NRF_RADIOCORE_UICR
  #define NRF_CACHE1DATA                          NRF_RADIOCORE_CACHE1DATA
  #define NRF_CACHE1INFO                          NRF_RADIOCORE_CACHE1INFO
  #define NRF_ETM                                 NRF_RADIOCORE_ETM
  #define NRF_CTI                                 NRF_RADIOCORE_CTI
  #define NRF_CPUC                                NRF_RADIOCORE_CPUC
  #define NRF_CACHE0                              NRF_RADIOCORE_CACHE0
  #define NRF_CACHE1                              NRF_RADIOCORE_CACHE1
  #define NRF_SPU0                                NRF_RADIOCORE_SPU0
  #define NRF_MPC                                 NRF_RADIOCORE_MPC
  #define NRF_AXI                                 NRF_RADIOCORE_AXI
  #define NRF_MVDMA                               NRF_RADIOCORE_MVDMA
  #define NRF_RAMC00                              NRF_RADIOCORE_RAMC00
  #define NRF_PCGCS0                              NRF_RADIOCORE_PCGCS0
  #define NRF_HSFLL                               NRF_RADIOCORE_HSFLL
  #define NRF_LRCCONF0                            NRF_RADIOCORE_LRCCONF0
  #define NRF_PCGCM0                              NRF_RADIOCORE_PCGCM0
  #define NRF_SPU1                                NRF_RADIOCORE_SPU1
  #define NRF_CPUCONF                             NRF_RADIOCORE_CPUCONF
  #define NRF_MEMCONF                             NRF_RADIOCORE_MEMCONF
  #define NRF_WDT0                                NRF_RADIOCORE_WDT0
  #define NRF_WDT1                                NRF_RADIOCORE_WDT1
  #define NRF_PCGCS1                              NRF_RADIOCORE_PCGCS1
  #define NRF_LRCCONF1                            NRF_RADIOCORE_LRCCONF1
  #define NRF_PCGCM1                              NRF_RADIOCORE_PCGCM1
  #define NRF_SPU2                                NRF_RADIOCORE_SPU2
  #define NRF_AMBIX0                              NRF_RADIOCORE_AMBIX0
  #define NRF_DPPIC                               NRF_RADIOCORE_DPPIC
  #define NRF_PPIB                                NRF_RADIOCORE_PPIB
  #define NRF_EGU                                 NRF_RADIOCORE_EGU
  #define NRF_CCM                                 NRF_RADIOCORE_CCM
  #define NRF_AAR                                 NRF_RADIOCORE_AAR
  #define NRF_ECB                                 NRF_RADIOCORE_ECB
  #define NRF_TIMER0                              NRF_RADIOCORE_TIMER0
  #define NRF_TIMER1                              NRF_RADIOCORE_TIMER1
  #define NRF_TIMER2                              NRF_RADIOCORE_TIMER2
  #define NRF_RTC                                 NRF_RADIOCORE_RTC
  #define NRF_RADIO                               NRF_RADIOCORE_RADIO
  #define NRF_LRCCONF2                            NRF_RADIOCORE_LRCCONF2
  #define NRF_PCGCM2                              NRF_RADIOCORE_PCGCM2
  #define NRF_SPU3                                NRF_RADIOCORE_SPU3
  #define NRF_PPIBEXT                             NRF_RADIOCORE_PPIBEXT
  #define NRF_DPPIC                               NRF_RADIOCORE_DPPIC
  #define NRF_GENERIC10                           NRF_RADIOCORE_GENERIC10
  #define NRF_RAMC10                              NRF_RADIOCORE_RAMC10
  #define NRF_PCGCS2                              NRF_RADIOCORE_PCGCS2
  #define NRF_PCGCM3                              NRF_RADIOCORE_PCGCM3
  #define NRF_IPCT                                NRF_RADIOCORE_IPCT
  #define NRF_BELLBOARD                           NRF_RADIOCORE_BELLBOARD
#endif                                               /*!< NRF_RADIOCORE                                                        */

/* ========================================== End of section using anonymous unions ========================================== */

#if defined (__CC_ARM)
  #pragma pop
#elif defined (__ICCARM__)
  /* leave anonymous unions enabled */
#elif (__ARMCC_VERSION >= 6010050)
  #pragma clang diagnostic pop
#elif defined (__GNUC__)
  /* anonymous unions are enabled by default */
#elif defined (__TMS470__)
  /* anonymous unions are enabled by default */
#elif defined (__TASKING__)
  #pragma warning restore
#elif defined (__CSMC__)
  /* anonymous unions are enabled by default */
#elif defined (_CEVA)
  /* anonymous unions are enabled by default */
#endif


#ifdef __cplusplus
}
#endif
#endif /* HALTIUM_RADIOCORE_H */

