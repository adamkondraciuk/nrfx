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

#ifndef HALTIUM_CELLCORE_H
#define HALTIUM_CELLCORE_H

#ifdef __cplusplus
    extern "C" {
#endif


#ifdef NRF_CELLCORE                                  /*!< Processor information is domain local.                               */


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
  HSFLL_IRQn                             = 1,        /*!< 1 HSFLL                                                              */
  LRCCONF0_IRQn                          = 2,        /*!< 2 LRCCONF0                                                           */
  MPC_IRQn                               = 3,        /*!< 3 MPC                                                                */
  AXI_IRQn                               = 4,        /*!< 4 AXI                                                                */
  MVDMA_IRQn                             = 5,        /*!< 5 MVDMA                                                              */
  RAMC00_IRQn                            = 6,        /*!< 6 RAMC00                                                             */
  AESLTE_IRQn                            = 8,        /*!< 8 AESLTE                                                             */
  SNOW_IRQn                              = 9,        /*!< 9 SNOW                                                               */
  ZUC_IRQn                               = 10,       /*!< 10 ZUC                                                               */
  SPU1_IRQn                              = 16,       /*!< 16 SPU1                                                              */
  LRCCONF1_IRQn                          = 17,       /*!< 17 LRCCONF1                                                          */
  WDT0_IRQn                              = 21,       /*!< 21 WDT0                                                              */
  WDT1_IRQn                              = 22,       /*!< 22 WDT1                                                              */
  RTC_IRQn                               = 23,       /*!< 23 RTC                                                               */
  SPU2_IRQn                              = 32,       /*!< 32 SPU2                                                              */
  LRCCONF2_IRQn                          = 33,       /*!< 33 LRCCONF2                                                          */
  MCPLL_IRQn                             = 35,       /*!< 35 MCPLL                                                             */
  LFCLKCALIBMEAS_IRQn                    = 37,       /*!< 37 LFCLKCALIBMEAS                                                    */
  SPU3_IRQn                              = 48,       /*!< 48 SPU3                                                              */
  LRCCONF3_IRQn                          = 49,       /*!< 49 LRCCONF3                                                          */
  IPCT0_IRQn                             = 64,       /*!< 64 IPCT0                                                             */
  IPCT1_IRQn                             = 65,       /*!< 65 IPCT1                                                             */
  IPCT2_IRQn                             = 66,       /*!< 66 IPCT2                                                             */
  IPCT3_IRQn                             = 67,       /*!< 67 IPCT3                                                             */
  SYSTEMTIMER0_IRQn                      = 68,       /*!< 68 SYSTEMTIMER0                                                      */
  SYSTEMTIMER1_IRQn                      = 69,       /*!< 69 SYSTEMTIMER1                                                      */
  LTETIMER0_IRQn                         = 70,       /*!< 70 LTETIMER0                                                         */
  LTETIMER1_IRQn                         = 71,       /*!< 71 LTETIMER1                                                         */
  GNSSTIMER0_IRQn                        = 72,       /*!< 72 GNSSTIMER0                                                        */
  GNSSTIMER1_IRQn                        = 73,       /*!< 73 GNSSTIMER1                                                        */
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
#include "system_haltium_cellcore.h"                 /*!< haltium_cellcore System Library                                      */

#endif                                               /*!< NRF_CELLCORE                                                         */


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

#define NRF_CELLCORE_CACHE0DATA_S_BASE    0x04F00000UL
#define NRF_CELLCORE_CACHE0INFO_S_BASE    0x04F10000UL
#define NRF_CELLCORE_UICR_S_BASE          0x0FFFC000UL
#define NRF_CELLCORE_CACHE1DATA_S_BASE    0x24F00000UL
#define NRF_CELLCORE_CACHE1INFO_S_BASE    0x24F10000UL
#define NRF_CELLCORE_ETM_NS_BASE          0xE0041000UL
#define NRF_CELLCORE_CTI_NS_BASE          0xE0042000UL
#define NRF_CELLCORE_CPUC_S_BASE          0xE0080000UL
#define NRF_CELLCORE_CACHE0_S_BASE        0xE0082000UL
#define NRF_CELLCORE_CACHE1_S_BASE        0xE0083000UL
#define NRF_CELLCORE_SPU0_S_BASE          0x54000000UL
#define NRF_CELLCORE_HSFLL_S_BASE         0x54001000UL
#define NRF_CELLCORE_LRCCONF0_S_BASE      0x54002000UL
#define NRF_CELLCORE_MPC_S_BASE           0x54003000UL
#define NRF_CELLCORE_AXI_S_BASE           0x54004000UL
#define NRF_CELLCORE_MVDMA_NS_BASE        0x44005000UL
#define NRF_CELLCORE_MVDMA_S_BASE         0x54005000UL
#define NRF_CELLCORE_RAMC00_NS_BASE       0x44006000UL
#define NRF_CELLCORE_RAMC00_S_BASE        0x54006000UL
#define NRF_CELLCORE_AESLTE_NS_BASE       0x44008000UL
#define NRF_CELLCORE_AESLTE_S_BASE        0x54008000UL
#define NRF_CELLCORE_SNOW_NS_BASE         0x44009000UL
#define NRF_CELLCORE_SNOW_S_BASE          0x54009000UL
#define NRF_CELLCORE_ZUC_NS_BASE          0x4400A000UL
#define NRF_CELLCORE_ZUC_S_BASE           0x5400A000UL
#define NRF_CELLCORE_TRACEDELAYREG_NS_BASE 0x4400B000UL
#define NRF_CELLCORE_TRACEDELAYREG_S_BASE 0x5400B000UL
#define NRF_CELLCORE_PCGCS0_S_BASE        0x5400C000UL
#define NRF_CELLCORE_PCGCM0_S_BASE        0x5400D000UL
#define NRF_CELLCORE_SPU1_S_BASE          0x54010000UL
#define NRF_CELLCORE_LRCCONF1_S_BASE      0x54011000UL
#define NRF_CELLCORE_CPUCONF_NS_BASE      0x44012000UL
#define NRF_CELLCORE_CPUCONF_S_BASE       0x54012000UL
#define NRF_CELLCORE_MEMCONF_NS_BASE      0x44013000UL
#define NRF_CELLCORE_MEMCONF_S_BASE       0x54013000UL
#define NRF_CELLCORE_WDT0_NS_BASE         0x44015000UL
#define NRF_CELLCORE_WDT0_S_BASE          0x54015000UL
#define NRF_CELLCORE_WDT1_NS_BASE         0x44016000UL
#define NRF_CELLCORE_WDT1_S_BASE          0x54016000UL
#define NRF_CELLCORE_RTC_NS_BASE          0x44017000UL
#define NRF_CELLCORE_RTC_S_BASE           0x54017000UL
#define NRF_CELLCORE_PCGCS1_S_BASE        0x54018000UL
#define NRF_CELLCORE_PCGCM1_S_BASE        0x54019000UL
#define NRF_CELLCORE_SPU2_S_BASE          0x54020000UL
#define NRF_CELLCORE_LRCCONF2_S_BASE      0x54021000UL
#define NRF_CELLCORE_DPPIC0_NS_BASE       0x44022000UL
#define NRF_CELLCORE_DPPIC0_S_BASE        0x54022000UL
#define NRF_CELLCORE_MCPLL_NS_BASE        0x44023000UL
#define NRF_CELLCORE_MCPLL_S_BASE         0x54023000UL
#define NRF_CELLCORE_LFCLKCALIBMEAS_NS_BASE 0x44025000UL
#define NRF_CELLCORE_LFCLKCALIBMEAS_S_BASE 0x54025000UL
#define NRF_CELLCORE_TIMEREVENTSYNCH_NS_BASE 0x44026000UL
#define NRF_CELLCORE_TIMEREVENTSYNCH_S_BASE 0x54026000UL
#define NRF_CELLCORE_TIMEMARKMUX0_NS_BASE 0x44027000UL
#define NRF_CELLCORE_TIMEMARKMUX0_S_BASE  0x54027000UL
#define NRF_CELLCORE_PCGCS2_S_BASE        0x54028000UL
#define NRF_CELLCORE_PCGCM2_S_BASE        0x54029000UL
#define NRF_CELLCORE_SPU3_S_BASE          0x54030000UL
#define NRF_CELLCORE_LRCCONF3_S_BASE      0x54031000UL
#define NRF_CELLCORE_DPPIC1_NS_BASE       0x44032000UL
#define NRF_CELLCORE_DPPIC1_S_BASE        0x54032000UL
#define NRF_CELLCORE_TIMEMARKMUX1_NS_BASE 0x44034000UL
#define NRF_CELLCORE_TIMEMARKMUX1_S_BASE  0x54034000UL
#define NRF_CELLCORE_PCGCS3_S_BASE        0x54035000UL
#define NRF_CELLCORE_PCGCM3_S_BASE        0x54036000UL
#define NRF_CELLCORE_IPCT_NS_BASE         0x44014000UL
#define NRF_CELLCORE_IPCT_S_BASE          0x54014000UL
#define NRF_CELLCORE_SYSTEMTIMER_NS_BASE  0x44007000UL
#define NRF_CELLCORE_SYSTEMTIMER_S_BASE   0x54007000UL
#define NRF_CELLCORE_LTETIMER_NS_BASE     0x44024000UL
#define NRF_CELLCORE_LTETIMER_S_BASE      0x54024000UL
#define NRF_CELLCORE_GNSSTIMER_NS_BASE    0x44033000UL
#define NRF_CELLCORE_GNSSTIMER_S_BASE     0x54033000UL
#define NRF_CELLCORE_BELLBOARD_NS_BASE    0x4F09C000UL
#define NRF_CELLCORE_BELLBOARD_S_BASE     0x5F09C000UL

/* =========================================================================================================================== */
/* ================                                  Peripheral Declaration                                  ================ */
/* =========================================================================================================================== */

#define NRF_CELLCORE_CACHE0DATA_S         ((NRF_CACHEDATA_Type*)                NRF_CELLCORE_CACHE0DATA_S_BASE)
#define NRF_CELLCORE_CACHE0INFO_S         ((NRF_CACHEINFO_Type*)                NRF_CELLCORE_CACHE0INFO_S_BASE)
#define NRF_CELLCORE_UICR_S               ((NRF_UICR_Type*)                     NRF_CELLCORE_UICR_S_BASE)
#define NRF_CELLCORE_CACHE1DATA_S         ((NRF_CACHEDATA_Type*)                NRF_CELLCORE_CACHE1DATA_S_BASE)
#define NRF_CELLCORE_CACHE1INFO_S         ((NRF_CACHEINFO_Type*)                NRF_CELLCORE_CACHE1INFO_S_BASE)
#define NRF_CELLCORE_ETM_NS               ((NRF_ETM_Type*)                      NRF_CELLCORE_ETM_NS_BASE)
#define NRF_CELLCORE_CTI_NS               ((NRF_CTI_Type*)                      NRF_CELLCORE_CTI_NS_BASE)
#define NRF_CELLCORE_CPUC_S               ((NRF_CM33SS_Type*)                   NRF_CELLCORE_CPUC_S_BASE)
#define NRF_CELLCORE_CACHE0_S             ((NRF_CACHE_Type*)                    NRF_CELLCORE_CACHE0_S_BASE)
#define NRF_CELLCORE_CACHE1_S             ((NRF_CACHE_Type*)                    NRF_CELLCORE_CACHE1_S_BASE)
#define NRF_CELLCORE_SPU0_S               ((NRF_SPU_Type*)                      NRF_CELLCORE_SPU0_S_BASE)
#define NRF_CELLCORE_HSFLL_S              ((NRF_HSFLL_Type*)                    NRF_CELLCORE_HSFLL_S_BASE)
#define NRF_CELLCORE_LRCCONF0_S           ((NRF_LRCCONF_Type*)                  NRF_CELLCORE_LRCCONF0_S_BASE)
#define NRF_CELLCORE_MPC_S                ((NRF_MPC_Type*)                      NRF_CELLCORE_MPC_S_BASE)
#define NRF_CELLCORE_AXI_S                ((NRF_AXI_Type*)                      NRF_CELLCORE_AXI_S_BASE)
#define NRF_CELLCORE_MVDMA_NS             ((NRF_MVDMA_Type*)                    NRF_CELLCORE_MVDMA_NS_BASE)
#define NRF_CELLCORE_MVDMA_S              ((NRF_MVDMA_Type*)                    NRF_CELLCORE_MVDMA_S_BASE)
#define NRF_CELLCORE_RAMC00_NS            ((NRF_RAMC_Type*)                     NRF_CELLCORE_RAMC00_NS_BASE)
#define NRF_CELLCORE_RAMC00_S             ((NRF_RAMC_Type*)                     NRF_CELLCORE_RAMC00_S_BASE)
#define NRF_CELLCORE_AESLTE_NS            ((NRF_AESLTE_Type*)                   NRF_CELLCORE_AESLTE_NS_BASE)
#define NRF_CELLCORE_AESLTE_S             ((NRF_AESLTE_Type*)                   NRF_CELLCORE_AESLTE_S_BASE)
#define NRF_CELLCORE_SNOW_NS              ((NRF_SNOW_Type*)                     NRF_CELLCORE_SNOW_NS_BASE)
#define NRF_CELLCORE_SNOW_S               ((NRF_SNOW_Type*)                     NRF_CELLCORE_SNOW_S_BASE)
#define NRF_CELLCORE_ZUC_NS               ((NRF_ZUC_Type*)                      NRF_CELLCORE_ZUC_NS_BASE)
#define NRF_CELLCORE_ZUC_S                ((NRF_ZUC_Type*)                      NRF_CELLCORE_ZUC_S_BASE)
#define NRF_CELLCORE_TRACEDELAYREG_NS     ((NRF_TRACEDELAYREG_Type*)            NRF_CELLCORE_TRACEDELAYREG_NS_BASE)
#define NRF_CELLCORE_TRACEDELAYREG_S      ((NRF_TRACEDELAYREG_Type*)            NRF_CELLCORE_TRACEDELAYREG_S_BASE)
#define NRF_CELLCORE_PCGCS0_S             ((NRF_PCGCSLAVE_Type*)                NRF_CELLCORE_PCGCS0_S_BASE)
#define NRF_CELLCORE_PCGCM0_S             ((NRF_PCGCMASTER_Type*)               NRF_CELLCORE_PCGCM0_S_BASE)
#define NRF_CELLCORE_SPU1_S               ((NRF_SPU_Type*)                      NRF_CELLCORE_SPU1_S_BASE)
#define NRF_CELLCORE_LRCCONF1_S           ((NRF_LRCCONF_Type*)                  NRF_CELLCORE_LRCCONF1_S_BASE)
#define NRF_CELLCORE_CPUCONF_NS           ((NRF_CPUCONF_Type*)                  NRF_CELLCORE_CPUCONF_NS_BASE)
#define NRF_CELLCORE_CPUCONF_S            ((NRF_CPUCONF_Type*)                  NRF_CELLCORE_CPUCONF_S_BASE)
#define NRF_CELLCORE_MEMCONF_NS           ((NRF_MEMCONF_Type*)                  NRF_CELLCORE_MEMCONF_NS_BASE)
#define NRF_CELLCORE_MEMCONF_S            ((NRF_MEMCONF_Type*)                  NRF_CELLCORE_MEMCONF_S_BASE)
#define NRF_CELLCORE_WDT0_NS              ((NRF_WDT_Type*)                      NRF_CELLCORE_WDT0_NS_BASE)
#define NRF_CELLCORE_WDT0_S               ((NRF_WDT_Type*)                      NRF_CELLCORE_WDT0_S_BASE)
#define NRF_CELLCORE_WDT1_NS              ((NRF_WDT_Type*)                      NRF_CELLCORE_WDT1_NS_BASE)
#define NRF_CELLCORE_WDT1_S               ((NRF_WDT_Type*)                      NRF_CELLCORE_WDT1_S_BASE)
#define NRF_CELLCORE_RTC_NS               ((NRF_RTC_Type*)                      NRF_CELLCORE_RTC_NS_BASE)
#define NRF_CELLCORE_RTC_S                ((NRF_RTC_Type*)                      NRF_CELLCORE_RTC_S_BASE)
#define NRF_CELLCORE_PCGCS1_S             ((NRF_PCGCSLAVE_Type*)                NRF_CELLCORE_PCGCS1_S_BASE)
#define NRF_CELLCORE_PCGCM1_S             ((NRF_PCGCMASTER_Type*)               NRF_CELLCORE_PCGCM1_S_BASE)
#define NRF_CELLCORE_SPU2_S               ((NRF_SPU_Type*)                      NRF_CELLCORE_SPU2_S_BASE)
#define NRF_CELLCORE_LRCCONF2_S           ((NRF_LRCCONF_Type*)                  NRF_CELLCORE_LRCCONF2_S_BASE)
#define NRF_CELLCORE_DPPIC0_NS            ((NRF_DPPIC_Type*)                    NRF_CELLCORE_DPPIC0_NS_BASE)
#define NRF_CELLCORE_DPPIC0_S             ((NRF_DPPIC_Type*)                    NRF_CELLCORE_DPPIC0_S_BASE)
#define NRF_CELLCORE_MCPLL_NS             ((NRF_MCPLL_Type*)                    NRF_CELLCORE_MCPLL_NS_BASE)
#define NRF_CELLCORE_MCPLL_S              ((NRF_MCPLL_Type*)                    NRF_CELLCORE_MCPLL_S_BASE)
#define NRF_CELLCORE_LFCLKCALIBMEAS_NS    ((NRF_LFCLKCALIBMEAS_Type*)           NRF_CELLCORE_LFCLKCALIBMEAS_NS_BASE)
#define NRF_CELLCORE_LFCLKCALIBMEAS_S     ((NRF_LFCLKCALIBMEAS_Type*)           NRF_CELLCORE_LFCLKCALIBMEAS_S_BASE)
#define NRF_CELLCORE_TIMEREVENTSYNCH_NS   ((NRF_TIMEREVENTSYNCH_Type*)          NRF_CELLCORE_TIMEREVENTSYNCH_NS_BASE)
#define NRF_CELLCORE_TIMEREVENTSYNCH_S    ((NRF_TIMEREVENTSYNCH_Type*)          NRF_CELLCORE_TIMEREVENTSYNCH_S_BASE)
#define NRF_CELLCORE_TIMEMARKMUX0_NS      ((NRF_TIMEMARKMUX_Type*)              NRF_CELLCORE_TIMEMARKMUX0_NS_BASE)
#define NRF_CELLCORE_TIMEMARKMUX0_S       ((NRF_TIMEMARKMUX_Type*)              NRF_CELLCORE_TIMEMARKMUX0_S_BASE)
#define NRF_CELLCORE_PCGCS2_S             ((NRF_PCGCSLAVE_Type*)                NRF_CELLCORE_PCGCS2_S_BASE)
#define NRF_CELLCORE_PCGCM2_S             ((NRF_PCGCMASTER_Type*)               NRF_CELLCORE_PCGCM2_S_BASE)
#define NRF_CELLCORE_SPU3_S               ((NRF_SPU_Type*)                      NRF_CELLCORE_SPU3_S_BASE)
#define NRF_CELLCORE_LRCCONF3_S           ((NRF_LRCCONF_Type*)                  NRF_CELLCORE_LRCCONF3_S_BASE)
#define NRF_CELLCORE_DPPIC1_NS            ((NRF_DPPIC_Type*)                    NRF_CELLCORE_DPPIC1_NS_BASE)
#define NRF_CELLCORE_DPPIC1_S             ((NRF_DPPIC_Type*)                    NRF_CELLCORE_DPPIC1_S_BASE)
#define NRF_CELLCORE_TIMEMARKMUX1_NS      ((NRF_TIMEMARKMUX_Type*)              NRF_CELLCORE_TIMEMARKMUX1_NS_BASE)
#define NRF_CELLCORE_TIMEMARKMUX1_S       ((NRF_TIMEMARKMUX_Type*)              NRF_CELLCORE_TIMEMARKMUX1_S_BASE)
#define NRF_CELLCORE_PCGCS3_S             ((NRF_PCGCSLAVE_Type*)                NRF_CELLCORE_PCGCS3_S_BASE)
#define NRF_CELLCORE_PCGCM3_S             ((NRF_PCGCMASTER_Type*)               NRF_CELLCORE_PCGCM3_S_BASE)
#define NRF_CELLCORE_IPCT_NS              ((NRF_IPCT_Type*)                     NRF_CELLCORE_IPCT_NS_BASE)
#define NRF_CELLCORE_IPCT_S               ((NRF_IPCT_Type*)                     NRF_CELLCORE_IPCT_S_BASE)
#define NRF_CELLCORE_SYSTEMTIMER_NS       ((NRF_MODEMTIMER_Type*)               NRF_CELLCORE_SYSTEMTIMER_NS_BASE)
#define NRF_CELLCORE_SYSTEMTIMER_S        ((NRF_MODEMTIMER_Type*)               NRF_CELLCORE_SYSTEMTIMER_S_BASE)
#define NRF_CELLCORE_LTETIMER_NS          ((NRF_MODEMTIMER_Type*)               NRF_CELLCORE_LTETIMER_NS_BASE)
#define NRF_CELLCORE_LTETIMER_S           ((NRF_MODEMTIMER_Type*)               NRF_CELLCORE_LTETIMER_S_BASE)
#define NRF_CELLCORE_GNSSTIMER_NS         ((NRF_MODEMTIMER_Type*)               NRF_CELLCORE_GNSSTIMER_NS_BASE)
#define NRF_CELLCORE_GNSSTIMER_S          ((NRF_MODEMTIMER_Type*)               NRF_CELLCORE_GNSSTIMER_S_BASE)
#define NRF_CELLCORE_BELLBOARD_NS         ((NRF_BELLBOARD_Type*)                NRF_CELLCORE_BELLBOARD_NS_BASE)
#define NRF_CELLCORE_BELLBOARD_S          ((NRF_BELLBOARD_Type*)                NRF_CELLCORE_BELLBOARD_S_BASE)

/* =========================================================================================================================== */
/* ================                                    TrustZone Remapping                                    ================ */
/* =========================================================================================================================== */

#ifdef NRF_NONSECURE                                 /*!< Remap NRF_X_NS instances to NRF_X symbol for ease of use.            */
  #define NRF_CELLCORE_ETM                        NRF_CELLCORE_ETM_NS
  #define NRF_CELLCORE_CTI                        NRF_CELLCORE_CTI_NS
  #define NRF_CELLCORE_MVDMA                      NRF_CELLCORE_MVDMA_NS
  #define NRF_CELLCORE_RAMC00                     NRF_CELLCORE_RAMC00_NS
  #define NRF_CELLCORE_AESLTE                     NRF_CELLCORE_AESLTE_NS
  #define NRF_CELLCORE_SNOW                       NRF_CELLCORE_SNOW_NS
  #define NRF_CELLCORE_ZUC                        NRF_CELLCORE_ZUC_NS
  #define NRF_CELLCORE_TRACEDELAYREG              NRF_CELLCORE_TRACEDELAYREG_NS
  #define NRF_CELLCORE_CPUCONF                    NRF_CELLCORE_CPUCONF_NS
  #define NRF_CELLCORE_MEMCONF                    NRF_CELLCORE_MEMCONF_NS
  #define NRF_CELLCORE_WDT0                       NRF_CELLCORE_WDT0_NS
  #define NRF_CELLCORE_WDT1                       NRF_CELLCORE_WDT1_NS
  #define NRF_CELLCORE_RTC                        NRF_CELLCORE_RTC_NS
  #define NRF_CELLCORE_DPPIC0                     NRF_CELLCORE_DPPIC0_NS
  #define NRF_CELLCORE_MCPLL                      NRF_CELLCORE_MCPLL_NS
  #define NRF_CELLCORE_LFCLKCALIBMEAS             NRF_CELLCORE_LFCLKCALIBMEAS_NS
  #define NRF_CELLCORE_TIMEREVENTSYNCH            NRF_CELLCORE_TIMEREVENTSYNCH_NS
  #define NRF_CELLCORE_TIMEMARKMUX0               NRF_CELLCORE_TIMEMARKMUX0_NS
  #define NRF_CELLCORE_DPPIC1                     NRF_CELLCORE_DPPIC1_NS
  #define NRF_CELLCORE_TIMEMARKMUX1               NRF_CELLCORE_TIMEMARKMUX1_NS
  #define NRF_CELLCORE_IPCT                       NRF_CELLCORE_IPCT_NS
  #define NRF_CELLCORE_SYSTEMTIMER                NRF_CELLCORE_SYSTEMTIMER_NS
  #define NRF_CELLCORE_LTETIMER                   NRF_CELLCORE_LTETIMER_NS
  #define NRF_CELLCORE_GNSSTIMER                  NRF_CELLCORE_GNSSTIMER_NS
  #define NRF_CELLCORE_BELLBOARD                  NRF_CELLCORE_BELLBOARD_NS
#else                                                /*!< Remap NRF_X_S instances to NRF_X symbol for ease of use.             */
  #define NRF_CELLCORE_CACHE0DATA                 NRF_CELLCORE_CACHE0DATA_S
  #define NRF_CELLCORE_CACHE0INFO                 NRF_CELLCORE_CACHE0INFO_S
  #define NRF_CELLCORE_UICR                       NRF_CELLCORE_UICR_S
  #define NRF_CELLCORE_CACHE1DATA                 NRF_CELLCORE_CACHE1DATA_S
  #define NRF_CELLCORE_CACHE1INFO                 NRF_CELLCORE_CACHE1INFO_S
  #define NRF_CELLCORE_ETM                        NRF_CELLCORE_ETM_NS
  #define NRF_CELLCORE_CTI                        NRF_CELLCORE_CTI_NS
  #define NRF_CELLCORE_CPUC                       NRF_CELLCORE_CPUC_S
  #define NRF_CELLCORE_CACHE0                     NRF_CELLCORE_CACHE0_S
  #define NRF_CELLCORE_CACHE1                     NRF_CELLCORE_CACHE1_S
  #define NRF_CELLCORE_SPU0                       NRF_CELLCORE_SPU0_S
  #define NRF_CELLCORE_HSFLL                      NRF_CELLCORE_HSFLL_S
  #define NRF_CELLCORE_LRCCONF0                   NRF_CELLCORE_LRCCONF0_S
  #define NRF_CELLCORE_MPC                        NRF_CELLCORE_MPC_S
  #define NRF_CELLCORE_AXI                        NRF_CELLCORE_AXI_S
  #define NRF_CELLCORE_MVDMA                      NRF_CELLCORE_MVDMA_S
  #define NRF_CELLCORE_RAMC00                     NRF_CELLCORE_RAMC00_S
  #define NRF_CELLCORE_AESLTE                     NRF_CELLCORE_AESLTE_S
  #define NRF_CELLCORE_SNOW                       NRF_CELLCORE_SNOW_S
  #define NRF_CELLCORE_ZUC                        NRF_CELLCORE_ZUC_S
  #define NRF_CELLCORE_TRACEDELAYREG              NRF_CELLCORE_TRACEDELAYREG_S
  #define NRF_CELLCORE_PCGCS0                     NRF_CELLCORE_PCGCS0_S
  #define NRF_CELLCORE_PCGCM0                     NRF_CELLCORE_PCGCM0_S
  #define NRF_CELLCORE_SPU1                       NRF_CELLCORE_SPU1_S
  #define NRF_CELLCORE_LRCCONF1                   NRF_CELLCORE_LRCCONF1_S
  #define NRF_CELLCORE_CPUCONF                    NRF_CELLCORE_CPUCONF_S
  #define NRF_CELLCORE_MEMCONF                    NRF_CELLCORE_MEMCONF_S
  #define NRF_CELLCORE_WDT0                       NRF_CELLCORE_WDT0_S
  #define NRF_CELLCORE_WDT1                       NRF_CELLCORE_WDT1_S
  #define NRF_CELLCORE_RTC                        NRF_CELLCORE_RTC_S
  #define NRF_CELLCORE_PCGCS1                     NRF_CELLCORE_PCGCS1_S
  #define NRF_CELLCORE_PCGCM1                     NRF_CELLCORE_PCGCM1_S
  #define NRF_CELLCORE_SPU2                       NRF_CELLCORE_SPU2_S
  #define NRF_CELLCORE_LRCCONF2                   NRF_CELLCORE_LRCCONF2_S
  #define NRF_CELLCORE_DPPIC0                     NRF_CELLCORE_DPPIC0_S
  #define NRF_CELLCORE_MCPLL                      NRF_CELLCORE_MCPLL_S
  #define NRF_CELLCORE_LFCLKCALIBMEAS             NRF_CELLCORE_LFCLKCALIBMEAS_S
  #define NRF_CELLCORE_TIMEREVENTSYNCH            NRF_CELLCORE_TIMEREVENTSYNCH_S
  #define NRF_CELLCORE_TIMEMARKMUX0               NRF_CELLCORE_TIMEMARKMUX0_S
  #define NRF_CELLCORE_PCGCS2                     NRF_CELLCORE_PCGCS2_S
  #define NRF_CELLCORE_PCGCM2                     NRF_CELLCORE_PCGCM2_S
  #define NRF_CELLCORE_SPU3                       NRF_CELLCORE_SPU3_S
  #define NRF_CELLCORE_LRCCONF3                   NRF_CELLCORE_LRCCONF3_S
  #define NRF_CELLCORE_DPPIC1                     NRF_CELLCORE_DPPIC1_S
  #define NRF_CELLCORE_TIMEMARKMUX1               NRF_CELLCORE_TIMEMARKMUX1_S
  #define NRF_CELLCORE_PCGCS3                     NRF_CELLCORE_PCGCS3_S
  #define NRF_CELLCORE_PCGCM3                     NRF_CELLCORE_PCGCM3_S
  #define NRF_CELLCORE_IPCT                       NRF_CELLCORE_IPCT_S
  #define NRF_CELLCORE_SYSTEMTIMER                NRF_CELLCORE_SYSTEMTIMER_S
  #define NRF_CELLCORE_LTETIMER                   NRF_CELLCORE_LTETIMER_S
  #define NRF_CELLCORE_GNSSTIMER                  NRF_CELLCORE_GNSSTIMER_S
  #define NRF_CELLCORE_BELLBOARD                  NRF_CELLCORE_BELLBOARD_S
#endif                                               /*!<  NRF_NONSECURE                                                       */

/* =========================================================================================================================== */
/* ================                                  Local Domain Remapping                                  ================ */
/* =========================================================================================================================== */

#ifdef NRF_CELLCORE                                  /*!< Remap NRF_DOMAIN instances to NRF_X symbol for ease of use.          */
  #define NRF_CACHE0DATA                          NRF_CELLCORE_CACHE0DATA
  #define NRF_CACHE0INFO                          NRF_CELLCORE_CACHE0INFO
  #define NRF_UICR                                NRF_CELLCORE_UICR
  #define NRF_CACHE1DATA                          NRF_CELLCORE_CACHE1DATA
  #define NRF_CACHE1INFO                          NRF_CELLCORE_CACHE1INFO
  #define NRF_ETM                                 NRF_CELLCORE_ETM
  #define NRF_CTI                                 NRF_CELLCORE_CTI
  #define NRF_CPUC                                NRF_CELLCORE_CPUC
  #define NRF_CACHE0                              NRF_CELLCORE_CACHE0
  #define NRF_CACHE1                              NRF_CELLCORE_CACHE1
  #define NRF_SPU0                                NRF_CELLCORE_SPU0
  #define NRF_HSFLL                               NRF_CELLCORE_HSFLL
  #define NRF_LRCCONF0                            NRF_CELLCORE_LRCCONF0
  #define NRF_MPC                                 NRF_CELLCORE_MPC
  #define NRF_AXI                                 NRF_CELLCORE_AXI
  #define NRF_MVDMA                               NRF_CELLCORE_MVDMA
  #define NRF_RAMC00                              NRF_CELLCORE_RAMC00
  #define NRF_AESLTE                              NRF_CELLCORE_AESLTE
  #define NRF_SNOW                                NRF_CELLCORE_SNOW
  #define NRF_ZUC                                 NRF_CELLCORE_ZUC
  #define NRF_TRACEDELAYREG                       NRF_CELLCORE_TRACEDELAYREG
  #define NRF_PCGCS0                              NRF_CELLCORE_PCGCS0
  #define NRF_PCGCM0                              NRF_CELLCORE_PCGCM0
  #define NRF_SPU1                                NRF_CELLCORE_SPU1
  #define NRF_LRCCONF1                            NRF_CELLCORE_LRCCONF1
  #define NRF_CPUCONF                             NRF_CELLCORE_CPUCONF
  #define NRF_MEMCONF                             NRF_CELLCORE_MEMCONF
  #define NRF_WDT0                                NRF_CELLCORE_WDT0
  #define NRF_WDT1                                NRF_CELLCORE_WDT1
  #define NRF_RTC                                 NRF_CELLCORE_RTC
  #define NRF_PCGCS1                              NRF_CELLCORE_PCGCS1
  #define NRF_PCGCM1                              NRF_CELLCORE_PCGCM1
  #define NRF_SPU2                                NRF_CELLCORE_SPU2
  #define NRF_LRCCONF2                            NRF_CELLCORE_LRCCONF2
  #define NRF_DPPIC0                              NRF_CELLCORE_DPPIC0
  #define NRF_MCPLL                               NRF_CELLCORE_MCPLL
  #define NRF_LFCLKCALIBMEAS                      NRF_CELLCORE_LFCLKCALIBMEAS
  #define NRF_TIMEREVENTSYNCH                     NRF_CELLCORE_TIMEREVENTSYNCH
  #define NRF_TIMEMARKMUX0                        NRF_CELLCORE_TIMEMARKMUX0
  #define NRF_PCGCS2                              NRF_CELLCORE_PCGCS2
  #define NRF_PCGCM2                              NRF_CELLCORE_PCGCM2
  #define NRF_SPU3                                NRF_CELLCORE_SPU3
  #define NRF_LRCCONF3                            NRF_CELLCORE_LRCCONF3
  #define NRF_DPPIC1                              NRF_CELLCORE_DPPIC1
  #define NRF_TIMEMARKMUX1                        NRF_CELLCORE_TIMEMARKMUX1
  #define NRF_PCGCS3                              NRF_CELLCORE_PCGCS3
  #define NRF_PCGCM3                              NRF_CELLCORE_PCGCM3
  #define NRF_IPCT                                NRF_CELLCORE_IPCT
  #define NRF_SYSTEMTIMER                         NRF_CELLCORE_SYSTEMTIMER
  #define NRF_LTETIMER                            NRF_CELLCORE_LTETIMER
  #define NRF_GNSSTIMER                           NRF_CELLCORE_GNSSTIMER
  #define NRF_BELLBOARD                           NRF_CELLCORE_BELLBOARD
#endif                                               /*!< NRF_CELLCORE                                                         */

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
#endif /* HALTIUM_CELLCORE_H */

