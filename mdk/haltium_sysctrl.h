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

#ifndef HALTIUM_SYSCTRL_H
#define HALTIUM_SYSCTRL_H

#ifdef __cplusplus
    extern "C" {
#endif


#ifdef NRF_SYSCTRL                                   /*!< Processor information is domain local.                               */


/* =========================================================================================================================== */
/* ================                                Interrupt Number Definition                                ================ */
/* =========================================================================================================================== */

typedef enum {
/* ===================================================== Core Interrupts ===================================================== */
  UserSoftware_IRQn                      = -16,      /*!< -16 User Software Interrupt                                          */
  SuperVisorSoftware_IRQn                = -15,      /*!< -15 Supervisor Software interrupt                                    */
  MachineSoftware_IRQn                   = -14,      /*!< -14 Machine Software Interrupt                                       */
  UserTimer_IRQn                         = -12,      /*!< -12 User Timer Interrupt                                             */
  SuperVisorTimer_IRQn                   = -11,      /*!< -11 Supervisor Timer interrupt                                       */
  MachineTimer_IRQn                      = -9,       /*!<  -9 Machine Timer Interrupt                                          */
  UserExternal_IRQn                      = -8,       /*!<  -8 User External (PLIC) Interrupt                                   */
  SuperVisorExternal_IRQn                = -7,       /*!<  -7 Supervisor External (PLIC) interrupt                             */
  MachineExternal_IRQn                   = -5,       /*!<  -5 Machine External (PLIC) Interrupt                                */
  CLICSoftware_IRQn                      = -4,       /*!<  -4 CLIC Software Interrupt                                          */
/* ============================================== Processor Specific Interrupts ============================================== */
  GPIOTE1300_IRQn                        = 104,      /*!< 104 GPIOTE1300                                                       */
  GPIOTE1301_IRQn                        = 105,      /*!< 105 GPIOTE1301                                                       */
  GPIOTE1310_IRQn                        = 106,      /*!< 106 GPIOTE1310                                                       */
  GPIOTE1311_IRQn                        = 107,      /*!< 107 GPIOTE1311                                                       */
  GRTC0_IRQn                             = 108,      /*!< 108 GRTC0                                                            */
  GRTC1_IRQn                             = 109,      /*!< 109 GRTC1                                                            */
  L2CACHE_IRQn                           = 130,      /*!< 130 L2CACHE                                                          */
  RAMC100_IRQn                           = 131,      /*!< 131 RAMC100                                                          */
  RAMC101_IRQn                           = 132,      /*!< 132 RAMC101                                                          */
  AXI100_IRQn                            = 133,      /*!< 133 AXI100                                                           */
  USBHS_IRQn                             = 134,      /*!< 134 USBHS                                                            */
  SHA3_IRQn                              = 136,      /*!< 136 SHA3                                                             */
  RAMC102_IRQn                           = 138,      /*!< 138 RAMC102                                                          */
  RAMC103_IRQn                           = 139,      /*!< 139 RAMC103                                                          */
  MRAMC110_IRQn                          = 146,      /*!< 146 MRAMC110                                                         */
  MRAMC111_IRQn                          = 147,      /*!< 147 MRAMC111                                                         */
  EXMEE_IRQn                             = 148,      /*!< 148 EXMEE                                                            */
  EXMIF_IRQn                             = 149,      /*!< 149 EXMIF                                                            */
  AXI110_IRQn                            = 150,      /*!< 150 AXI110                                                           */
  MVDMA_IRQn                             = 151,      /*!< 151 MVDMA                                                            */
  RAMC120_IRQn                           = 195,      /*!< 195 RAMC120                                                          */
  RAMC121_IRQn                           = 196,      /*!< 196 RAMC121                                                          */
  OTPC_IRQn                              = 197,      /*!< 197 OTPC                                                             */
  ROMC_IRQn                              = 198,      /*!< 198 ROMC                                                             */
  VPR_IRQn                               = 200,      /*!< 200 VPR                                                              */
  CANPLL_IRQn                            = 204,      /*!< 204 CANPLL                                                           */
  HSFLL_IRQn                             = 205,      /*!< 205 HSFLL                                                            */
  LRCCONF120_IRQn                        = 206,      /*!< 206 LRCCONF120                                                       */
  IPCT1200_IRQn                          = 209,      /*!< 209 IPCT1200                                                         */
  I3C120_IRQn                            = 211,      /*!< 211 I3C120                                                           */
  CAN_IRQn                               = 216,      /*!< 216 CAN                                                              */
  I3C121_IRQn                            = 222,      /*!< 222 I3C121                                                           */
  TIMER120_IRQn                          = 226,      /*!< 226 TIMER120                                                         */
  TIMER121_IRQn                          = 227,      /*!< 227 TIMER121                                                         */
  PWM120_IRQn                            = 228,      /*!< 228 PWM120                                                           */
  SPIS120_IRQn                           = 229,      /*!< 229 SPIS120                                                          */
  SPIM120_IRQn                           = 230,      /*!< 230 SPIM120                                                          */
  SPIM121_IRQn                           = 231,      /*!< 231 SPIM121                                                          */
  TWIM120_IRQn                           = 232,      /*!< 232 TWIM120                                                          */
  RAMC130_IRQn                           = 259,      /*!< 259 RAMC130                                                          */
  RAMC131_IRQn                           = 260,      /*!< 260 RAMC131                                                          */
  IPCT1300_IRQn                          = 289,      /*!< 289 IPCT1300                                                         */
  RTC130_IRQn                            = 296,      /*!< 296 RTC130                                                           */
  RTC131_IRQn                            = 297,      /*!< 297 RTC131                                                           */
  WDT130_IRQn                            = 298,      /*!< 298 WDT130                                                           */
  WDT131_IRQn                            = 299,      /*!< 299 WDT131                                                           */
  WDT132_IRQn                            = 300,      /*!< 300 WDT132                                                           */
  EGU130_IRQn                            = 301,      /*!< 301 EGU130                                                           */
  LRCCONF130_IRQn                        = 318,      /*!< 318 LRCCONF130                                                       */
  GRCCONF0_IRQn                          = 320,      /*!< 320 GRCCONF0                                                         */
  GRCCONF1_IRQn                          = 321,      /*!< 321 GRCCONF1                                                         */
#if !defined(RTL_DOMINOZ)
  GRCCONF2_IRQn                          = 322,      /*!< 322 GRCCONF2                                                         */
#endif
  PCRM_IRQn                              = 323,      /*!< 323 PCRM                                                             */
#if defined(RTL_DOMINOZ)
  RESETHUB_IRQn                          = 322,      /*!< 322 RESETHUB                                                         */
#else
  RESETHUB_IRQn                          = 329,      /*!< 329 RESETHUB                                                         */
#endif
  CLOCK_IRQn                             = 336,      /*!< 336 CLOCK                                                            */
  LFRC_IRQn                              = 337,      /*!< 337 LFRC                                                             */
  GGENERIC18_IRQn                        = 338,      /*!< 338 GGENERIC18                                                       */
  LFXO_IRQn                              = 339,      /*!< 339 LFXO                                                             */
  FLL16M_IRQn                            = 340,      /*!< 340 FLL16M                                                           */
  HFXO_IRQn                              = 341,      /*!< 341 HFXO                                                             */
  AUDIOPLL_IRQn                          = 343,      /*!< 343 AUDIOPLL                                                         */
  USBHSPLL_IRQn                          = 344,      /*!< 344 USBHSPLL                                                         */
  POWER_IRQn                             = 352,      /*!< 352 POWER                                                            */
  VREGAO1V8_IRQn                         = 354,      /*!< 354 VREGAO1V8                                                        */
  VREG1V0_IRQn                           = 355,      /*!< 355 VREG1V0                                                          */
  VREGAO0V8_IRQn                         = 356,      /*!< 356 VREGAO0V8                                                        */
  VREGVS0V8_IRQn                         = 357,      /*!< 357 VREGVS0V8                                                        */
  GGENERIC29_IRQn                        = 359,      /*!< 359 GGENERIC29                                                       */
  GGENERIC30_IRQn                        = 360,      /*!< 360 GGENERIC30                                                       */
  VREGMRAM130_IRQn                       = 361,      /*!< 361 VREGMRAM130                                                      */
  VREGMRAM131_IRQn                       = 362,      /*!< 362 VREGMRAM131                                                      */
  MBIAS_IRQn                             = 365,      /*!< 365 MBIAS                                                            */
  VDETAO1V8_IRQn                         = 368,      /*!< 368 VDETAO1V8                                                        */
  VDETAO0V8_IRQn                         = 369,      /*!< 369 VDETAO0V8                                                        */
  VDETVS0V8_IRQn                         = 370,      /*!< 370 VDETVS0V8                                                        */
  GGENERIC36_IRQn                        = 371,      /*!< 371 GGENERIC36                                                       */
  GGENERIC38_IRQn                        = 372,      /*!< 372 GGENERIC38                                                       */
  GGENERIC41_IRQn                        = 373,      /*!< 373 GGENERIC41                                                       */
  GGENERIC42_IRQn                        = 374,      /*!< 374 GGENERIC42                                                       */
  GGENERIC43_IRQn                        = 379,      /*!< 379 GGENERIC43                                                       */
  SAADC_IRQn                             = 386,      /*!< 386 SAADC                                                            */
  COMP_LPCOMP_IRQn                       = 387,      /*!< 387 COMP_LPCOMP                                                      */
  TEMP_IRQn                              = 388,      /*!< 388 TEMP                                                             */
  NFCT_IRQn                              = 389,      /*!< 389 NFCT                                                             */
  I2S130_IRQn                            = 402,      /*!< 402 I2S130                                                           */
  PDM_IRQn                               = 403,      /*!< 403 PDM                                                              */
  QDEC130_IRQn                           = 404,      /*!< 404 QDEC130                                                          */
  QDEC131_IRQn                           = 405,      /*!< 405 QDEC131                                                          */
  SIMIF_IRQn                             = 406,      /*!< 406 SIMIF                                                            */
  I2S131_IRQn                            = 407,      /*!< 407 I2S131                                                           */
  MIPIRFFE_IRQn                          = 408,      /*!< 408 MIPIRFFE                                                         */
  TIMER130_IRQn                          = 418,      /*!< 418 TIMER130                                                         */
  TIMER131_IRQn                          = 419,      /*!< 419 TIMER131                                                         */
  PWM130_IRQn                            = 420,      /*!< 420 PWM130                                                           */
  SERIAL0_IRQn                           = 421,      /*!< 421 SERIAL0                                                          */
  SERIAL1_IRQn                           = 422,      /*!< 422 SERIAL1                                                          */
  TIMER132_IRQn                          = 434,      /*!< 434 TIMER132                                                         */
  TIMER133_IRQn                          = 435,      /*!< 435 TIMER133                                                         */
  PWM131_IRQn                            = 436,      /*!< 436 PWM131                                                           */
  SERIAL2_IRQn                           = 437,      /*!< 437 SERIAL2                                                          */
  SERIAL3_IRQn                           = 438,      /*!< 438 SERIAL3                                                          */
  TIMER134_IRQn                          = 450,      /*!< 450 TIMER134                                                         */
  TIMER135_IRQn                          = 451,      /*!< 451 TIMER135                                                         */
  PWM132_IRQn                            = 452,      /*!< 452 PWM132                                                           */
  SERIAL4_IRQn                           = 453,      /*!< 453 SERIAL4                                                          */
  SERIAL5_IRQn                           = 454,      /*!< 454 SERIAL5                                                          */
  TIMER136_IRQn                          = 466,      /*!< 466 TIMER136                                                         */
  TIMER137_IRQn                          = 467,      /*!< 467 TIMER137                                                         */
  PWM133_IRQn                            = 468,      /*!< 468 PWM133                                                           */
  SERIAL6_IRQn                           = 469,      /*!< 469 SERIAL6                                                          */
  SERIAL7_IRQn                           = 470,      /*!< 470 SERIAL7                                                          */
} IRQn_Type;


/* =========================================================================================================================== */
/* ================                           Processor and Core Peripheral Section                           ================ */
/* =========================================================================================================================== */

/* ====================== Configuration of the Nordic Semiconductor VPR Processor and Core Peripherals ======================= */
#define __VPR_REV                    0.7             /*!< VPR Core Revision                                                    */
#define __DSP_PRESENT                  0             /*!< DSP present or not                                                   */
#define __CLIC_PRIO_BITS               3             /*!< Number of Bits used for Priority Levels                              */
#define __MTVT_PRESENT                 1             /*!< CPU supports alternate Vector Table address                          */
#define __MPU_PRESENT                  1             /*!< MPU present                                                          */
#define __FPU_PRESENT                  0             /*!< FPU present                                                          */
#define __FPU_DP                       0             /*!< Double Precision FPU                                                 */

#include "core_vpr.h"                                /*!< Nordic Semiconductor VPR processor and core peripherals              */
#include "system_haltium_sysctrl.h"                  /*!< haltium_sysctrl System Library                                       */

#endif                                               /*!< NRF_SYSCTRL                                                          */


/* ========================================= Start of section using anonymous unions ========================================= */

#include "compiler_abstraction.h"

#if defined (__CC_ARM)
  #pragma push
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

#define NRF_SYSCTRL_L2CACHEDATA_S_BASE    0x2F640000UL
#define NRF_SYSCTRL_L2CACHEINFO_S_BASE    0x2F680000UL
#define NRF_SYSCTRL_OICR_S_BASE           0x2F840000UL
#define NRF_SYSCTRL_SHA3CORE_S_BASE       0x5F089000UL
#define NRF_SYSCTRL_L2CACHE_S_BASE        0x5F082000UL
#define NRF_SYSCTRL_RAMC100_S_BASE        0x5F083000UL
#define NRF_SYSCTRL_RAMC101_S_BASE        0x5F084000UL
#define NRF_SYSCTRL_AXI100_S_BASE         0x5F085000UL
#define NRF_SYSCTRL_SHA3_S_BASE           0x5F088000UL
#define NRF_SYSCTRL_RAMC102_S_BASE        0x5F08A000UL
#define NRF_SYSCTRL_RAMC103_S_BASE        0x5F08B000UL
#define NRF_SYSCTRL_MRAMC110_S_BASE       0x5F092000UL
#define NRF_SYSCTRL_MRAMC111_S_BASE       0x5F093000UL
#define NRF_SYSCTRL_EXMEE_S_BASE          0x5F094000UL
#define NRF_SYSCTRL_AXI110_S_BASE         0x5F096000UL
#define NRF_SYSCTRL_MVDMA_S_BASE          0x5F097000UL
#define NRF_SYSCTRL_PPIB110_S_BASE        0x5F098000UL
#define NRF_SYSCTRL_AMBIX120_S_BASE       0x5F8C2000UL
#define NRF_SYSCTRL_RAMC120_S_BASE        0x5F8C3000UL
#define NRF_SYSCTRL_RAMC121_S_BASE        0x5F8C4000UL
#define NRF_SYSCTRL_OTPC_S_BASE           0x5F8C5000UL
#define NRF_SYSCTRL_ROMC_S_BASE           0x5F8C6000UL
#define NRF_SYSCTRL_MEMCONF120_S_BASE     0x5F8C7000UL
#define NRF_SYSCTRL_VPR_S_BASE            0x5F8C8000UL
#define NRF_SYSCTRL_HSFLL_S_BASE          0x5F8CD000UL
#define NRF_SYSCTRL_LRCCONF120_S_BASE     0x5F8CE000UL
#define NRF_SYSCTRL_PCGCM120_S_BASE       0x5F8CF000UL
#define NRF_SYSCTRL_PPIB120_S_BASE        0x5F8EE000UL
#define NRF_SYSCTRL_PPIB121_S_BASE        0x5F8EF000UL
#define NRF_SYSCTRL_AMBIX130_S_BASE       0x5F902000UL
#define NRF_SYSCTRL_RAMC130_S_BASE        0x5F903000UL
#define NRF_SYSCTRL_RAMC131_S_BASE        0x5F904000UL
#define NRF_SYSCTRL_MEMCONF130_S_BASE     0x5F905000UL
#define NRF_SYSCTRL_PCGCS130_S_BASE       0x5F90E000UL
#define NRF_SYSCTRL_PCGCM130_S_BASE       0x5F90F000UL
#define NRF_SYSCTRL_PPIB130_S_BASE        0x5F925000UL
#define NRF_SYSCTRL_PPIB131_S_BASE        0x5F926000UL
#define NRF_SYSCTRL_WDT130_S_BASE         0x5F92A000UL
#define NRF_SYSCTRL_PCGCS131_S_BASE       0x5F93C000UL
#define NRF_SYSCTRL_LRCCONF130_S_BASE     0x5F93E000UL
#define NRF_SYSCTRL_PCGCM131_S_BASE       0x5F93F000UL
#define NRF_SYSCTRL_GRCCONF_S_BASE        0x5F940000UL
#define NRF_SYSCTRL_PCRM_S_BASE           0x5F943000UL
#if defined(RTL_DOMINOZ)
#define NRF_SYSCTRL_RESETHUB_S_BASE       0x5F943000UL
#else
#define NRF_SYSCTRL_RESETHUB_S_BASE       0x5F949000UL
#endif
#define NRF_SYSCTRL_PCGCS132_S_BASE       0x5F94E000UL
#define NRF_SYSCTRL_PCGCM132_S_BASE       0x5F94F000UL
#define NRF_SYSCTRL_CLOCK_S_BASE          0x5F950000UL
#define NRF_SYSCTRL_LFRC_S_BASE           0x5F951000UL
#define NRF_SYSCTRL_GGENERIC18_S_BASE     0x5F952000UL
#define NRF_SYSCTRL_LFXO_S_BASE           0x5F953000UL
#define NRF_SYSCTRL_FLL16M_S_BASE         0x5F954000UL
#define NRF_SYSCTRL_HFXO_S_BASE           0x5F955000UL
#define NRF_SYSCTRL_AUDIOPLL_S_BASE       0x5F957000UL
#define NRF_SYSCTRL_USBHSPLL_S_BASE       0x5F958000UL
#define NRF_SYSCTRL_POWER_S_BASE          0x5F960000UL
#define NRF_SYSCTRL_VREGMAIN_S_BASE       0x5F961000UL
#define NRF_SYSCTRL_VREGAO1V8_S_BASE      0x5F962000UL
#define NRF_SYSCTRL_VREG1V0_S_BASE        0x5F963000UL
#define NRF_SYSCTRL_VREGAO0V8_S_BASE      0x5F964000UL
#define NRF_SYSCTRL_VREGVS0V8_S_BASE      0x5F965000UL
#define NRF_SYSCTRL_VREGSU_S_BASE         0x5F966000UL
#define NRF_SYSCTRL_GGENERIC29_S_BASE     0x5F967000UL
#define NRF_SYSCTRL_GGENERIC30_S_BASE     0x5F968000UL
#define NRF_SYSCTRL_VREGMRAM130_S_BASE    0x5F969000UL
#define NRF_SYSCTRL_VREGMRAM131_S_BASE    0x5F96A000UL
#define NRF_SYSCTRL_OSCRFR_S_BASE         0x5F96B000UL
#define NRF_SYSCTRL_SWEXT_S_BASE          0x5F96C000UL
#define NRF_SYSCTRL_MBIAS_S_BASE          0x5F96D000UL
#define NRF_SYSCTRL_VDETAO1V8_S_BASE      0x5F970000UL
#define NRF_SYSCTRL_VDETAO0V8_S_BASE      0x5F971000UL
#define NRF_SYSCTRL_VDETVS0V8_S_BASE      0x5F972000UL
#define NRF_SYSCTRL_GGENERIC36_S_BASE     0x5F973000UL
#define NRF_SYSCTRL_GGENERIC38_S_BASE     0x5F974000UL
#define NRF_SYSCTRL_GGENERIC41_S_BASE     0x5F975000UL
#define NRF_SYSCTRL_GGENERIC42_S_BASE     0x5F976000UL
#define NRF_SYSCTRL_GGENERIC43_S_BASE     0x5F97B000UL
#define NRF_SYSCTRL_PPIB132_S_BASE        0x5F98D000UL
#define NRF_SYSCTRL_PCGCS133_S_BASE       0x5F98E000UL
#define NRF_SYSCTRL_PCGCM133_S_BASE       0x5F98F000UL
#define NRF_SYSCTRL_PPIB133_S_BASE        0x5F99D000UL
#define NRF_SYSCTRL_PCGCS134_S_BASE       0x5F99E000UL
#define NRF_SYSCTRL_PCGCM134_S_BASE       0x5F99F000UL
#define NRF_SYSCTRL_PPIB134_S_BASE        0x5F9AD000UL
#define NRF_SYSCTRL_PCGCS135_S_BASE       0x5F9AE000UL
#define NRF_SYSCTRL_PCGCM135_S_BASE       0x5F9AF000UL
#define NRF_SYSCTRL_PPIB135_S_BASE        0x5F9BD000UL
#define NRF_SYSCTRL_PCGCS136_S_BASE       0x5F9BE000UL
#define NRF_SYSCTRL_PCGCM136_S_BASE       0x5F9BF000UL
#define NRF_SYSCTRL_PPIB136_S_BASE        0x5F9CD000UL
#define NRF_SYSCTRL_PCGCS137_S_BASE       0x5F9CE000UL
#define NRF_SYSCTRL_PCGCM137_S_BASE       0x5F9CF000UL
#define NRF_SYSCTRL_PPIB137_S_BASE        0x5F9DD000UL
#define NRF_SYSCTRL_PCGCS138_S_BASE       0x5F9DE000UL
#define NRF_SYSCTRL_PCGCM138_S_BASE       0x5F9DF000UL

/* =========================================================================================================================== */
/* ================                                  Peripheral Declaration                                  ================ */
/* =========================================================================================================================== */

#define NRF_SYSCTRL_L2CACHEDATA_S         ((NRF_CACHEDATA_Type*)                NRF_SYSCTRL_L2CACHEDATA_S_BASE)
#define NRF_SYSCTRL_L2CACHEINFO_S         ((NRF_CACHEINFO_Type*)                NRF_SYSCTRL_L2CACHEINFO_S_BASE)
#define NRF_SYSCTRL_OICR_S                ((NRF_OICR_Type*)                     NRF_SYSCTRL_OICR_S_BASE)
#define NRF_SYSCTRL_SHA3CORE_S            ((NRF_CRACENCORE_Type*)               NRF_SYSCTRL_SHA3CORE_S_BASE)
#define NRF_SYSCTRL_L2CACHE_S             ((NRF_CACHE_Type*)                    NRF_SYSCTRL_L2CACHE_S_BASE)
#define NRF_SYSCTRL_RAMC100_S             ((NRF_RAMC_Type*)                     NRF_SYSCTRL_RAMC100_S_BASE)
#define NRF_SYSCTRL_RAMC101_S             ((NRF_RAMC_Type*)                     NRF_SYSCTRL_RAMC101_S_BASE)
#define NRF_SYSCTRL_AXI100_S              ((NRF_AXI_Type*)                      NRF_SYSCTRL_AXI100_S_BASE)
#define NRF_SYSCTRL_SHA3_S                ((NRF_CRACEN_Type*)                   NRF_SYSCTRL_SHA3_S_BASE)
#define NRF_SYSCTRL_RAMC102_S             ((NRF_RAMC_Type*)                     NRF_SYSCTRL_RAMC102_S_BASE)
#define NRF_SYSCTRL_RAMC103_S             ((NRF_RAMC_Type*)                     NRF_SYSCTRL_RAMC103_S_BASE)
#define NRF_SYSCTRL_MRAMC110_S            ((NRF_MRAMC_Type*)                    NRF_SYSCTRL_MRAMC110_S_BASE)
#define NRF_SYSCTRL_MRAMC111_S            ((NRF_MRAMC_Type*)                    NRF_SYSCTRL_MRAMC111_S_BASE)
#define NRF_SYSCTRL_EXMEE_S               ((NRF_EXMEE_Type*)                    NRF_SYSCTRL_EXMEE_S_BASE)
#define NRF_SYSCTRL_AXI110_S              ((NRF_AXI_Type*)                      NRF_SYSCTRL_AXI110_S_BASE)
#define NRF_SYSCTRL_MVDMA_S               ((NRF_MVDMA_Type*)                    NRF_SYSCTRL_MVDMA_S_BASE)
#define NRF_SYSCTRL_PPIB110_S             ((NRF_PPIB_Type*)                     NRF_SYSCTRL_PPIB110_S_BASE)
#define NRF_SYSCTRL_AMBIX120_S            ((NRF_AMBIX_Type*)                    NRF_SYSCTRL_AMBIX120_S_BASE)
#define NRF_SYSCTRL_RAMC120_S             ((NRF_RAMC_Type*)                     NRF_SYSCTRL_RAMC120_S_BASE)
#define NRF_SYSCTRL_RAMC121_S             ((NRF_RAMC_Type*)                     NRF_SYSCTRL_RAMC121_S_BASE)
#define NRF_SYSCTRL_OTPC_S                ((NRF_OTPC_Type*)                     NRF_SYSCTRL_OTPC_S_BASE)
#define NRF_SYSCTRL_ROMC_S                ((NRF_ROMC_Type*)                     NRF_SYSCTRL_ROMC_S_BASE)
#define NRF_SYSCTRL_MEMCONF120_S          ((NRF_MEMCONF_Type*)                  NRF_SYSCTRL_MEMCONF120_S_BASE)
#define NRF_SYSCTRL_VPR_S                 ((NRF_VPR_Type*)                      NRF_SYSCTRL_VPR_S_BASE)
#define NRF_SYSCTRL_HSFLL_S               ((NRF_HSFLL_Type*)                    NRF_SYSCTRL_HSFLL_S_BASE)
#define NRF_SYSCTRL_LRCCONF120_S          ((NRF_LRCCONF_Type*)                  NRF_SYSCTRL_LRCCONF120_S_BASE)
#define NRF_SYSCTRL_PCGCM120_S            ((NRF_PCGCMASTER_Type*)               NRF_SYSCTRL_PCGCM120_S_BASE)
#define NRF_SYSCTRL_PPIB120_S             ((NRF_PPIB_Type*)                     NRF_SYSCTRL_PPIB120_S_BASE)
#define NRF_SYSCTRL_PPIB121_S             ((NRF_PPIB_Type*)                     NRF_SYSCTRL_PPIB121_S_BASE)
#define NRF_SYSCTRL_AMBIX130_S            ((NRF_AMBIX_Type*)                    NRF_SYSCTRL_AMBIX130_S_BASE)
#define NRF_SYSCTRL_RAMC130_S             ((NRF_RAMC_Type*)                     NRF_SYSCTRL_RAMC130_S_BASE)
#define NRF_SYSCTRL_RAMC131_S             ((NRF_RAMC_Type*)                     NRF_SYSCTRL_RAMC131_S_BASE)
#define NRF_SYSCTRL_MEMCONF130_S          ((NRF_MEMCONF_Type*)                  NRF_SYSCTRL_MEMCONF130_S_BASE)
#define NRF_SYSCTRL_PCGCS130_S            ((NRF_PCGCSLAVE_Type*)                NRF_SYSCTRL_PCGCS130_S_BASE)
#define NRF_SYSCTRL_PCGCM130_S            ((NRF_PCGCMASTER_Type*)               NRF_SYSCTRL_PCGCM130_S_BASE)
#define NRF_SYSCTRL_PPIB130_S             ((NRF_PPIB_Type*)                     NRF_SYSCTRL_PPIB130_S_BASE)
#define NRF_SYSCTRL_PPIB131_S             ((NRF_PPIB_Type*)                     NRF_SYSCTRL_PPIB131_S_BASE)
#define NRF_SYSCTRL_WDT130_S              ((NRF_WDT_Type*)                      NRF_SYSCTRL_WDT130_S_BASE)
#define NRF_SYSCTRL_PCGCS131_S            ((NRF_PCGCSLAVE_Type*)                NRF_SYSCTRL_PCGCS131_S_BASE)
#define NRF_SYSCTRL_LRCCONF130_S          ((NRF_LRCCONF_Type*)                  NRF_SYSCTRL_LRCCONF130_S_BASE)
#define NRF_SYSCTRL_PCGCM131_S            ((NRF_PCGCMASTER_Type*)               NRF_SYSCTRL_PCGCM131_S_BASE)
#define NRF_SYSCTRL_GRCCONF_S             ((NRF_GRCCONF_Type*)                  NRF_SYSCTRL_GRCCONF_S_BASE)
#define NRF_SYSCTRL_PCRM_S                ((NRF_PCRM_Type*)                     NRF_SYSCTRL_PCRM_S_BASE)
#define NRF_SYSCTRL_RESETHUB_S            ((NRF_RESETHUB_Type*)                 NRF_SYSCTRL_RESETHUB_S_BASE)
#define NRF_SYSCTRL_PCGCS132_S            ((NRF_PCGCSLAVE_Type*)                NRF_SYSCTRL_PCGCS132_S_BASE)
#define NRF_SYSCTRL_PCGCM132_S            ((NRF_PCGCMASTER_Type*)               NRF_SYSCTRL_PCGCM132_S_BASE)
#define NRF_SYSCTRL_CLOCK_S               ((NRF_CLOCK_Type*)                    NRF_SYSCTRL_CLOCK_S_BASE)
#define NRF_SYSCTRL_LFRC_S                ((NRF_LFRC_Type*)                     NRF_SYSCTRL_LFRC_S_BASE)
#define NRF_SYSCTRL_GGENERIC18_S          ((NRF_GENERIC_Type*)                  NRF_SYSCTRL_GGENERIC18_S_BASE)
#define NRF_SYSCTRL_LFXO_S                ((NRF_LFXO_Type*)                     NRF_SYSCTRL_LFXO_S_BASE)
#define NRF_SYSCTRL_FLL16M_S              ((NRF_FLL16M_Type*)                   NRF_SYSCTRL_FLL16M_S_BASE)
#define NRF_SYSCTRL_HFXO_S                ((NRF_HFXO_Type*)                     NRF_SYSCTRL_HFXO_S_BASE)
#define NRF_SYSCTRL_AUDIOPLL_S            ((NRF_AUXPLL_Type*)                   NRF_SYSCTRL_AUDIOPLL_S_BASE)
#define NRF_SYSCTRL_USBHSPLL_S            ((NRF_AUXPLL_Type*)                   NRF_SYSCTRL_USBHSPLL_S_BASE)
#define NRF_SYSCTRL_POWER_S               ((NRF_POWER_Type*)                    NRF_SYSCTRL_POWER_S_BASE)
#define NRF_SYSCTRL_VREGMAIN_S            ((NRF_VREGMAIN_Type*)                 NRF_SYSCTRL_VREGMAIN_S_BASE)
#define NRF_SYSCTRL_VREGAO1V8_S           ((NRF_VREGAO1V8_Type*)                NRF_SYSCTRL_VREGAO1V8_S_BASE)
#define NRF_SYSCTRL_VREG1V0_S             ((NRF_VREG1V0_Type*)                  NRF_SYSCTRL_VREG1V0_S_BASE)
#define NRF_SYSCTRL_VREGAO0V8_S           ((NRF_VREGAO0V8_Type*)                NRF_SYSCTRL_VREGAO0V8_S_BASE)
#define NRF_SYSCTRL_VREGVS0V8_S           ((NRF_VREGVS0V8_Type*)                NRF_SYSCTRL_VREGVS0V8_S_BASE)
#define NRF_SYSCTRL_VREGSU_S              ((NRF_VREGSU_Type*)                   NRF_SYSCTRL_VREGSU_S_BASE)
#define NRF_SYSCTRL_GGENERIC29_S          ((NRF_GENERIC_Type*)                  NRF_SYSCTRL_GGENERIC29_S_BASE)
#define NRF_SYSCTRL_GGENERIC30_S          ((NRF_GENERIC_Type*)                  NRF_SYSCTRL_GGENERIC30_S_BASE)
#define NRF_SYSCTRL_VREGMRAM130_S         ((NRF_VREGMRAM_Type*)                 NRF_SYSCTRL_VREGMRAM130_S_BASE)
#define NRF_SYSCTRL_VREGMRAM131_S         ((NRF_VREGMRAM_Type*)                 NRF_SYSCTRL_VREGMRAM131_S_BASE)
#define NRF_SYSCTRL_OSCRFR_S              ((NRF_OSCRFR_Type*)                   NRF_SYSCTRL_OSCRFR_S_BASE)
#define NRF_SYSCTRL_SWEXT_S               ((NRF_SWEXT_Type*)                    NRF_SYSCTRL_SWEXT_S_BASE)
#define NRF_SYSCTRL_MBIAS_S               ((NRF_MBIAS_Type*)                    NRF_SYSCTRL_MBIAS_S_BASE)
#define NRF_SYSCTRL_VDETAO1V8_S           ((NRF_VDETAO1V8_Type*)                NRF_SYSCTRL_VDETAO1V8_S_BASE)
#define NRF_SYSCTRL_VDETAO0V8_S           ((NRF_VDETAO0V8_Type*)                NRF_SYSCTRL_VDETAO0V8_S_BASE)
#define NRF_SYSCTRL_VDETVS0V8_S           ((NRF_VDETVS0V8_Type*)                NRF_SYSCTRL_VDETVS0V8_S_BASE)
#define NRF_SYSCTRL_GGENERIC36_S          ((NRF_GENERIC_Type*)                  NRF_SYSCTRL_GGENERIC36_S_BASE)
#define NRF_SYSCTRL_GGENERIC38_S          ((NRF_GENERIC_Type*)                  NRF_SYSCTRL_GGENERIC38_S_BASE)
#define NRF_SYSCTRL_GGENERIC41_S          ((NRF_GENERIC_Type*)                  NRF_SYSCTRL_GGENERIC41_S_BASE)
#define NRF_SYSCTRL_GGENERIC42_S          ((NRF_GENERIC_Type*)                  NRF_SYSCTRL_GGENERIC42_S_BASE)
#define NRF_SYSCTRL_GGENERIC43_S          ((NRF_GENERIC_Type*)                  NRF_SYSCTRL_GGENERIC43_S_BASE)
#define NRF_SYSCTRL_PPIB132_S             ((NRF_PPIB_Type*)                     NRF_SYSCTRL_PPIB132_S_BASE)
#define NRF_SYSCTRL_PCGCS133_S            ((NRF_PCGCSLAVE_Type*)                NRF_SYSCTRL_PCGCS133_S_BASE)
#define NRF_SYSCTRL_PCGCM133_S            ((NRF_PCGCMASTER_Type*)               NRF_SYSCTRL_PCGCM133_S_BASE)
#define NRF_SYSCTRL_PPIB133_S             ((NRF_PPIB_Type*)                     NRF_SYSCTRL_PPIB133_S_BASE)
#define NRF_SYSCTRL_PCGCS134_S            ((NRF_PCGCSLAVE_Type*)                NRF_SYSCTRL_PCGCS134_S_BASE)
#define NRF_SYSCTRL_PCGCM134_S            ((NRF_PCGCMASTER_Type*)               NRF_SYSCTRL_PCGCM134_S_BASE)
#define NRF_SYSCTRL_PPIB134_S             ((NRF_PPIB_Type*)                     NRF_SYSCTRL_PPIB134_S_BASE)
#define NRF_SYSCTRL_PCGCS135_S            ((NRF_PCGCSLAVE_Type*)                NRF_SYSCTRL_PCGCS135_S_BASE)
#define NRF_SYSCTRL_PCGCM135_S            ((NRF_PCGCMASTER_Type*)               NRF_SYSCTRL_PCGCM135_S_BASE)
#define NRF_SYSCTRL_PPIB135_S             ((NRF_PPIB_Type*)                     NRF_SYSCTRL_PPIB135_S_BASE)
#define NRF_SYSCTRL_PCGCS136_S            ((NRF_PCGCSLAVE_Type*)                NRF_SYSCTRL_PCGCS136_S_BASE)
#define NRF_SYSCTRL_PCGCM136_S            ((NRF_PCGCMASTER_Type*)               NRF_SYSCTRL_PCGCM136_S_BASE)
#define NRF_SYSCTRL_PPIB136_S             ((NRF_PPIB_Type*)                     NRF_SYSCTRL_PPIB136_S_BASE)
#define NRF_SYSCTRL_PCGCS137_S            ((NRF_PCGCSLAVE_Type*)                NRF_SYSCTRL_PCGCS137_S_BASE)
#define NRF_SYSCTRL_PCGCM137_S            ((NRF_PCGCMASTER_Type*)               NRF_SYSCTRL_PCGCM137_S_BASE)
#define NRF_SYSCTRL_PPIB137_S             ((NRF_PPIB_Type*)                     NRF_SYSCTRL_PPIB137_S_BASE)
#define NRF_SYSCTRL_PCGCS138_S            ((NRF_PCGCSLAVE_Type*)                NRF_SYSCTRL_PCGCS138_S_BASE)
#define NRF_SYSCTRL_PCGCM138_S            ((NRF_PCGCMASTER_Type*)               NRF_SYSCTRL_PCGCM138_S_BASE)

/* =========================================================================================================================== */
/* ================                                    TrustZone Remapping                                    ================ */
/* =========================================================================================================================== */

#ifdef NRF_NONSECURE                                 /*!< Remap NRF_X_NS instances to NRF_X symbol for ease of use.            */
#else                                                /*!< Remap NRF_X_S instances to NRF_X symbol for ease of use.             */
  #define NRF_SYSCTRL_L2CACHEDATA                 NRF_SYSCTRL_L2CACHEDATA_S
  #define NRF_SYSCTRL_L2CACHEINFO                 NRF_SYSCTRL_L2CACHEINFO_S
  #define NRF_SYSCTRL_OICR                        NRF_SYSCTRL_OICR_S
  #define NRF_SYSCTRL_SHA3CORE                    NRF_SYSCTRL_SHA3CORE_S
  #define NRF_SYSCTRL_L2CACHE                     NRF_SYSCTRL_L2CACHE_S
  #define NRF_SYSCTRL_RAMC100                     NRF_SYSCTRL_RAMC100_S
  #define NRF_SYSCTRL_RAMC101                     NRF_SYSCTRL_RAMC101_S
  #define NRF_SYSCTRL_AXI100                      NRF_SYSCTRL_AXI100_S
  #define NRF_SYSCTRL_SHA3                        NRF_SYSCTRL_SHA3_S
  #define NRF_SYSCTRL_RAMC102                     NRF_SYSCTRL_RAMC102_S
  #define NRF_SYSCTRL_RAMC103                     NRF_SYSCTRL_RAMC103_S
  #define NRF_SYSCTRL_MRAMC110                    NRF_SYSCTRL_MRAMC110_S
  #define NRF_SYSCTRL_MRAMC111                    NRF_SYSCTRL_MRAMC111_S
  #define NRF_SYSCTRL_EXMEE                       NRF_SYSCTRL_EXMEE_S
  #define NRF_SYSCTRL_AXI110                      NRF_SYSCTRL_AXI110_S
  #define NRF_SYSCTRL_MVDMA                       NRF_SYSCTRL_MVDMA_S
  #define NRF_SYSCTRL_PPIB110                     NRF_SYSCTRL_PPIB110_S
  #define NRF_SYSCTRL_AMBIX120                    NRF_SYSCTRL_AMBIX120_S
  #define NRF_SYSCTRL_RAMC120                     NRF_SYSCTRL_RAMC120_S
  #define NRF_SYSCTRL_RAMC121                     NRF_SYSCTRL_RAMC121_S
  #define NRF_SYSCTRL_OTPC                        NRF_SYSCTRL_OTPC_S
  #define NRF_SYSCTRL_ROMC                        NRF_SYSCTRL_ROMC_S
  #define NRF_SYSCTRL_MEMCONF120                  NRF_SYSCTRL_MEMCONF120_S
  #define NRF_SYSCTRL_VPR                         NRF_SYSCTRL_VPR_S
  #define NRF_SYSCTRL_HSFLL                       NRF_SYSCTRL_HSFLL_S
  #define NRF_SYSCTRL_LRCCONF120                  NRF_SYSCTRL_LRCCONF120_S
  #define NRF_SYSCTRL_PCGCM120                    NRF_SYSCTRL_PCGCM120_S
  #define NRF_SYSCTRL_PPIB120                     NRF_SYSCTRL_PPIB120_S
  #define NRF_SYSCTRL_PPIB121                     NRF_SYSCTRL_PPIB121_S
  #define NRF_SYSCTRL_AMBIX130                    NRF_SYSCTRL_AMBIX130_S
  #define NRF_SYSCTRL_RAMC130                     NRF_SYSCTRL_RAMC130_S
  #define NRF_SYSCTRL_RAMC131                     NRF_SYSCTRL_RAMC131_S
  #define NRF_SYSCTRL_MEMCONF130                  NRF_SYSCTRL_MEMCONF130_S
  #define NRF_SYSCTRL_PCGCS130                    NRF_SYSCTRL_PCGCS130_S
  #define NRF_SYSCTRL_PCGCM130                    NRF_SYSCTRL_PCGCM130_S
  #define NRF_SYSCTRL_PPIB130                     NRF_SYSCTRL_PPIB130_S
  #define NRF_SYSCTRL_PPIB131                     NRF_SYSCTRL_PPIB131_S
  #define NRF_SYSCTRL_WDT130                      NRF_SYSCTRL_WDT130_S
  #define NRF_SYSCTRL_PCGCS131                    NRF_SYSCTRL_PCGCS131_S
  #define NRF_SYSCTRL_LRCCONF130                  NRF_SYSCTRL_LRCCONF130_S
  #define NRF_SYSCTRL_PCGCM131                    NRF_SYSCTRL_PCGCM131_S
  #define NRF_SYSCTRL_GRCCONF                     NRF_SYSCTRL_GRCCONF_S
  #define NRF_SYSCTRL_PCRM                        NRF_SYSCTRL_PCRM_S
  #define NRF_SYSCTRL_RESETHUB                    NRF_SYSCTRL_RESETHUB_S
  #define NRF_SYSCTRL_PCGCS132                    NRF_SYSCTRL_PCGCS132_S
  #define NRF_SYSCTRL_PCGCM132                    NRF_SYSCTRL_PCGCM132_S
  #define NRF_SYSCTRL_CLOCK                       NRF_SYSCTRL_CLOCK_S
  #define NRF_SYSCTRL_LFRC                        NRF_SYSCTRL_LFRC_S
  #define NRF_SYSCTRL_GGENERIC18                  NRF_SYSCTRL_GGENERIC18_S
  #define NRF_SYSCTRL_LFXO                        NRF_SYSCTRL_LFXO_S
  #define NRF_SYSCTRL_FLL16M                      NRF_SYSCTRL_FLL16M_S
  #define NRF_SYSCTRL_HFXO                        NRF_SYSCTRL_HFXO_S
  #define NRF_SYSCTRL_AUDIOPLL                    NRF_SYSCTRL_AUDIOPLL_S
  #define NRF_SYSCTRL_USBHSPLL                    NRF_SYSCTRL_USBHSPLL_S
  #define NRF_SYSCTRL_POWER                       NRF_SYSCTRL_POWER_S
  #define NRF_SYSCTRL_VREGMAIN                    NRF_SYSCTRL_VREGMAIN_S
  #define NRF_SYSCTRL_VREGAO1V8                   NRF_SYSCTRL_VREGAO1V8_S
  #define NRF_SYSCTRL_VREG1V0                     NRF_SYSCTRL_VREG1V0_S
  #define NRF_SYSCTRL_VREGAO0V8                   NRF_SYSCTRL_VREGAO0V8_S
  #define NRF_SYSCTRL_VREGVS0V8                   NRF_SYSCTRL_VREGVS0V8_S
  #define NRF_SYSCTRL_VREGSU                      NRF_SYSCTRL_VREGSU_S
  #define NRF_SYSCTRL_GGENERIC29                  NRF_SYSCTRL_GGENERIC29_S
  #define NRF_SYSCTRL_GGENERIC30                  NRF_SYSCTRL_GGENERIC30_S
  #define NRF_SYSCTRL_VREGMRAM130                 NRF_SYSCTRL_VREGMRAM130_S
  #define NRF_SYSCTRL_VREGMRAM131                 NRF_SYSCTRL_VREGMRAM131_S
  #define NRF_SYSCTRL_OSCRFR                      NRF_SYSCTRL_OSCRFR_S
  #define NRF_SYSCTRL_SWEXT                       NRF_SYSCTRL_SWEXT_S
  #define NRF_SYSCTRL_MBIAS                       NRF_SYSCTRL_MBIAS_S
  #define NRF_SYSCTRL_VDETAO1V8                   NRF_SYSCTRL_VDETAO1V8_S
  #define NRF_SYSCTRL_VDETAO0V8                   NRF_SYSCTRL_VDETAO0V8_S
  #define NRF_SYSCTRL_VDETVS0V8                   NRF_SYSCTRL_VDETVS0V8_S
  #define NRF_SYSCTRL_GGENERIC36                  NRF_SYSCTRL_GGENERIC36_S
  #define NRF_SYSCTRL_GGENERIC38                  NRF_SYSCTRL_GGENERIC38_S
  #define NRF_SYSCTRL_GGENERIC41                  NRF_SYSCTRL_GGENERIC41_S
  #define NRF_SYSCTRL_GGENERIC42                  NRF_SYSCTRL_GGENERIC42_S
  #define NRF_SYSCTRL_GGENERIC43                  NRF_SYSCTRL_GGENERIC43_S
  #define NRF_SYSCTRL_PPIB132                     NRF_SYSCTRL_PPIB132_S
  #define NRF_SYSCTRL_PCGCS133                    NRF_SYSCTRL_PCGCS133_S
  #define NRF_SYSCTRL_PCGCM133                    NRF_SYSCTRL_PCGCM133_S
  #define NRF_SYSCTRL_PPIB133                     NRF_SYSCTRL_PPIB133_S
  #define NRF_SYSCTRL_PCGCS134                    NRF_SYSCTRL_PCGCS134_S
  #define NRF_SYSCTRL_PCGCM134                    NRF_SYSCTRL_PCGCM134_S
  #define NRF_SYSCTRL_PPIB134                     NRF_SYSCTRL_PPIB134_S
  #define NRF_SYSCTRL_PCGCS135                    NRF_SYSCTRL_PCGCS135_S
  #define NRF_SYSCTRL_PCGCM135                    NRF_SYSCTRL_PCGCM135_S
  #define NRF_SYSCTRL_PPIB135                     NRF_SYSCTRL_PPIB135_S
  #define NRF_SYSCTRL_PCGCS136                    NRF_SYSCTRL_PCGCS136_S
  #define NRF_SYSCTRL_PCGCM136                    NRF_SYSCTRL_PCGCM136_S
  #define NRF_SYSCTRL_PPIB136                     NRF_SYSCTRL_PPIB136_S
  #define NRF_SYSCTRL_PCGCS137                    NRF_SYSCTRL_PCGCS137_S
  #define NRF_SYSCTRL_PCGCM137                    NRF_SYSCTRL_PCGCM137_S
  #define NRF_SYSCTRL_PPIB137                     NRF_SYSCTRL_PPIB137_S
  #define NRF_SYSCTRL_PCGCS138                    NRF_SYSCTRL_PCGCS138_S
  #define NRF_SYSCTRL_PCGCM138                    NRF_SYSCTRL_PCGCM138_S
#endif                                               /*!<  NRF_NONSECURE                                                       */

/* =========================================================================================================================== */
/* ================                                  Local Domain Remapping                                  ================ */
/* =========================================================================================================================== */

#ifdef NRF_SYSCTRL                                   /*!< Remap NRF_DOMAIN instances to NRF_X symbol for ease of use.          */
  #define NRF_L2CACHEDATA                         NRF_SYSCTRL_L2CACHEDATA
  #define NRF_L2CACHEINFO                         NRF_SYSCTRL_L2CACHEINFO
  #define NRF_OICR                                NRF_SYSCTRL_OICR
  #define NRF_SHA3CORE                            NRF_SYSCTRL_SHA3CORE
  #define NRF_L2CACHE                             NRF_SYSCTRL_L2CACHE
  #define NRF_RAMC100                             NRF_SYSCTRL_RAMC100
  #define NRF_RAMC101                             NRF_SYSCTRL_RAMC101
  #define NRF_AXI100                              NRF_SYSCTRL_AXI100
  #define NRF_SHA3                                NRF_SYSCTRL_SHA3
  #define NRF_RAMC102                             NRF_SYSCTRL_RAMC102
  #define NRF_RAMC103                             NRF_SYSCTRL_RAMC103
  #define NRF_MRAMC110                            NRF_SYSCTRL_MRAMC110
  #define NRF_MRAMC111                            NRF_SYSCTRL_MRAMC111
  #define NRF_EXMEE                               NRF_SYSCTRL_EXMEE
  #define NRF_AXI110                              NRF_SYSCTRL_AXI110
  #define NRF_MVDMA                               NRF_SYSCTRL_MVDMA
  #define NRF_PPIB110                             NRF_SYSCTRL_PPIB110
  #define NRF_AMBIX120                            NRF_SYSCTRL_AMBIX120
  #define NRF_RAMC120                             NRF_SYSCTRL_RAMC120
  #define NRF_RAMC121                             NRF_SYSCTRL_RAMC121
  #define NRF_OTPC                                NRF_SYSCTRL_OTPC
  #define NRF_ROMC                                NRF_SYSCTRL_ROMC
  #define NRF_MEMCONF120                          NRF_SYSCTRL_MEMCONF120
  #define NRF_VPR                                 NRF_SYSCTRL_VPR
  #define NRF_HSFLL                               NRF_SYSCTRL_HSFLL
  #define NRF_LRCCONF120                          NRF_SYSCTRL_LRCCONF120
  #define NRF_PCGCM120                            NRF_SYSCTRL_PCGCM120
  #define NRF_PPIB120                             NRF_SYSCTRL_PPIB120
  #define NRF_PPIB121                             NRF_SYSCTRL_PPIB121
  #define NRF_AMBIX130                            NRF_SYSCTRL_AMBIX130
  #define NRF_RAMC130                             NRF_SYSCTRL_RAMC130
  #define NRF_RAMC131                             NRF_SYSCTRL_RAMC131
  #define NRF_MEMCONF130                          NRF_SYSCTRL_MEMCONF130
  #define NRF_PCGCS130                            NRF_SYSCTRL_PCGCS130
  #define NRF_PCGCM130                            NRF_SYSCTRL_PCGCM130
  #define NRF_PPIB130                             NRF_SYSCTRL_PPIB130
  #define NRF_PPIB131                             NRF_SYSCTRL_PPIB131
  #define NRF_WDT130                              NRF_SYSCTRL_WDT130
  #define NRF_PCGCS131                            NRF_SYSCTRL_PCGCS131
  #define NRF_LRCCONF130                          NRF_SYSCTRL_LRCCONF130
  #define NRF_PCGCM131                            NRF_SYSCTRL_PCGCM131
  #define NRF_GRCCONF                             NRF_SYSCTRL_GRCCONF
  #define NRF_PCRM                                NRF_SYSCTRL_PCRM
  #define NRF_RESETHUB                            NRF_SYSCTRL_RESETHUB
  #define NRF_PCGCS132                            NRF_SYSCTRL_PCGCS132
  #define NRF_PCGCM132                            NRF_SYSCTRL_PCGCM132
  #define NRF_CLOCK                               NRF_SYSCTRL_CLOCK
  #define NRF_LFRC                                NRF_SYSCTRL_LFRC
  #define NRF_GGENERIC18                          NRF_SYSCTRL_GGENERIC18
  #define NRF_LFXO                                NRF_SYSCTRL_LFXO
  #define NRF_FLL16M                              NRF_SYSCTRL_FLL16M
  #define NRF_HFXO                                NRF_SYSCTRL_HFXO
  #define NRF_AUDIOPLL                            NRF_SYSCTRL_AUDIOPLL
  #define NRF_USBHSPLL                            NRF_SYSCTRL_USBHSPLL
  #define NRF_POWER                               NRF_SYSCTRL_POWER
  #define NRF_VREGMAIN                            NRF_SYSCTRL_VREGMAIN
  #define NRF_VREGAO1V8                           NRF_SYSCTRL_VREGAO1V8
  #define NRF_VREG1V0                             NRF_SYSCTRL_VREG1V0
  #define NRF_VREGAO0V8                           NRF_SYSCTRL_VREGAO0V8
  #define NRF_VREGVS0V8                           NRF_SYSCTRL_VREGVS0V8
  #define NRF_VREGSU                              NRF_SYSCTRL_VREGSU
  #define NRF_GGENERIC29                          NRF_SYSCTRL_GGENERIC29
  #define NRF_GGENERIC30                          NRF_SYSCTRL_GGENERIC30
  #define NRF_VREGMRAM130                         NRF_SYSCTRL_VREGMRAM130
  #define NRF_VREGMRAM131                         NRF_SYSCTRL_VREGMRAM131
  #define NRF_OSCRFR                              NRF_SYSCTRL_OSCRFR
  #define NRF_SWEXT                               NRF_SYSCTRL_SWEXT
  #define NRF_MBIAS                               NRF_SYSCTRL_MBIAS
  #define NRF_VDETAO1V8                           NRF_SYSCTRL_VDETAO1V8
  #define NRF_VDETAO0V8                           NRF_SYSCTRL_VDETAO0V8
  #define NRF_VDETVS0V8                           NRF_SYSCTRL_VDETVS0V8
  #define NRF_GGENERIC36                          NRF_SYSCTRL_GGENERIC36
  #define NRF_GGENERIC38                          NRF_SYSCTRL_GGENERIC38
  #define NRF_GGENERIC41                          NRF_SYSCTRL_GGENERIC41
  #define NRF_GGENERIC42                          NRF_SYSCTRL_GGENERIC42
  #define NRF_GGENERIC43                          NRF_SYSCTRL_GGENERIC43
  #define NRF_PPIB132                             NRF_SYSCTRL_PPIB132
  #define NRF_PCGCS133                            NRF_SYSCTRL_PCGCS133
  #define NRF_PCGCM133                            NRF_SYSCTRL_PCGCM133
  #define NRF_PPIB133                             NRF_SYSCTRL_PPIB133
  #define NRF_PCGCS134                            NRF_SYSCTRL_PCGCS134
  #define NRF_PCGCM134                            NRF_SYSCTRL_PCGCM134
  #define NRF_PPIB134                             NRF_SYSCTRL_PPIB134
  #define NRF_PCGCS135                            NRF_SYSCTRL_PCGCS135
  #define NRF_PCGCM135                            NRF_SYSCTRL_PCGCM135
  #define NRF_PPIB135                             NRF_SYSCTRL_PPIB135
  #define NRF_PCGCS136                            NRF_SYSCTRL_PCGCS136
  #define NRF_PCGCM136                            NRF_SYSCTRL_PCGCM136
  #define NRF_PPIB136                             NRF_SYSCTRL_PPIB136
  #define NRF_PCGCS137                            NRF_SYSCTRL_PCGCS137
  #define NRF_PCGCM137                            NRF_SYSCTRL_PCGCM137
  #define NRF_PPIB137                             NRF_SYSCTRL_PPIB137
  #define NRF_PCGCS138                            NRF_SYSCTRL_PCGCS138
  #define NRF_PCGCM138                            NRF_SYSCTRL_PCGCM138
#endif                                               /*!< NRF_SYSCTRL                                                          */

/* ========================================== End of section using anonymous unions ========================================== */

#if defined (__CC_ARM)
  #pragma pop
#elif defined (__ICCARM__)
  /* leave anonymous unions enabled */
#elif defined(__ARMCC_VERSION) && (__ARMCC_VERSION >= 6010050)
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
#endif /* HALTIUM_SYSCTRL_H */

