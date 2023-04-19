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

#ifndef HALTIUM_BBPR_H
#define HALTIUM_BBPR_H

#ifdef __cplusplus
    extern "C" {
#endif


#ifdef NRF_BBPR                                      /*!< Processor information is domain local.                               */


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
  VPR_0_IRQn                             = 0,        /*!< 0 VPR0_0                                                             */
  VPR_1_IRQn                             = 1,        /*!< 1 VPR0_1                                                             */
  VPR_2_IRQn                             = 2,        /*!< 2 VPR0_2                                                             */
  VPR_3_IRQn                             = 3,        /*!< 3 VPR0_3                                                             */
  VPR_4_IRQn                             = 4,        /*!< 4 VPR0_4                                                             */
  VPR_5_IRQn                             = 5,        /*!< 5 VPR0_5                                                             */
  VPR_6_IRQn                             = 6,        /*!< 6 VPR0_6                                                             */
  VPR_7_IRQn                             = 7,        /*!< 7 VPR0_7                                                             */
  VPR_8_IRQn                             = 8,        /*!< 8 VPR0_8                                                             */
  VPR_9_IRQn                             = 9,        /*!< 9 VPR0_9                                                             */
  VPR_10_IRQn                            = 10,       /*!< 10 VPR0_10                                                           */
  VPR_11_IRQn                            = 11,       /*!< 11 VPR0_11                                                           */
  VPR_12_IRQn                            = 12,       /*!< 12 VPR0_12                                                           */
  VPR_13_IRQn                            = 13,       /*!< 13 VPR0_13                                                           */
  VPR_14_IRQn                            = 14,       /*!< 14 VPR0_14                                                           */
  VPR_15_IRQn                            = 15,       /*!< 15 VPR0_15                                                           */
  VPR_16_IRQn                            = 16,       /*!< 16 VPR0_16                                                           */
  VPR_17_IRQn                            = 17,       /*!< 17 VPR0_17                                                           */
  VPR_18_IRQn                            = 18,       /*!< 18 VPR0_18                                                           */
  VPR_19_IRQn                            = 19,       /*!< 19 VPR0_19                                                           */
  VPR_20_IRQn                            = 20,       /*!< 20 VPR0_20                                                           */
  VPR_21_IRQn                            = 21,       /*!< 21 VPR0_21                                                           */
  VPR_22_IRQn                            = 22,       /*!< 22 VPR0_22                                                           */
  VPR_23_IRQn                            = 23,       /*!< 23 VPR0_23                                                           */
  VPR_24_IRQn                            = 24,       /*!< 24 VPR0_24                                                           */
  VPR_25_IRQn                            = 25,       /*!< 25 VPR0_25                                                           */
  VPR_26_IRQn                            = 26,       /*!< 26 VPR0_26                                                           */
  VPR_27_IRQn                            = 27,       /*!< 27 VPR0_27                                                           */
  VPR_28_IRQn                            = 28,       /*!< 28 VPR0_28                                                           */
  VPR_29_IRQn                            = 29,       /*!< 29 VPR0_29                                                           */
  VPR_30_IRQn                            = 30,       /*!< 30 VPR0_30                                                           */
  VPR_31_IRQn                            = 31,       /*!< 31 VPR0_31                                                           */
  GPIOTE130_0_IRQn                       = 104,      /*!< 104 GPIOTE1300_0                                                     */
  GPIOTE130_1_IRQn                       = 105,      /*!< 105 GPIOTE1300_1                                                     */
  GPIOTE131_0_IRQn                       = 106,      /*!< 106 GPIOTE1310_0                                                     */
  GPIOTE131_1_IRQn                       = 107,      /*!< 107 GPIOTE1310_1                                                     */
  GRTC_0_IRQn                            = 108,      /*!< 108 GRTC0_0                                                          */
  GRTC_1_IRQn                            = 109,      /*!< 109 GRTC0_1                                                          */
  TBM_IRQn                               = 127,      /*!< 127 TBM                                                              */
  USBHS_IRQn                             = 134,      /*!< 134 USBHS                                                            */
  MRAMC110_IRQn                          = 146,      /*!< 146 MRAMC110                                                         */
  MRAMC111_IRQn                          = 147,      /*!< 147 MRAMC111                                                         */
  EXMIF_IRQn                             = 149,      /*!< 149 EXMIF                                                            */
  CANPLL_CANPLLPM_IRQn                   = 194,      /*!< 194 CANPLL_CANPLLPM                                                  */
  OTPC_IRQn                              = 197,      /*!< 197 OTPC                                                             */
  VPR120_IRQn                            = 200,      /*!< 200 VPR120                                                           */
  IPCT1200_IRQn                          = 209,      /*!< 209 IPCT1200                                                         */
  I3C120_IRQn                            = 211,      /*!< 211 I3C120                                                           */
  VPR121_IRQn                            = 212,      /*!< 212 VPR121                                                           */
  CAN_IRQn                               = 216,      /*!< 216 CAN                                                              */
  I3C121_IRQn                            = 222,      /*!< 222 I3C121                                                           */
  TIMER120_IRQn                          = 226,      /*!< 226 TIMER120                                                         */
  TIMER121_IRQn                          = 227,      /*!< 227 TIMER121                                                         */
  PWM120_IRQn                            = 228,      /*!< 228 PWM120                                                           */
  SPIS120_UARTE120_IRQn                  = 229,      /*!< 229 SPIS120_UARTE120                                                 */
  SPIM120_IRQn                           = 230,      /*!< 230 SPIM120                                                          */
  SPIM121_IRQn                           = 231,      /*!< 231 SPIM121                                                          */
  TWIM120_IRQn                           = 232,      /*!< 232 TWIM120                                                          */
  VPR130_IRQn                            = 264,      /*!< 264 VPR130                                                           */
  IPCT1300_IRQn                          = 289,      /*!< 289 IPCT1300                                                         */
  RTC130_IRQn                            = 296,      /*!< 296 RTC130                                                           */
  RTC131_IRQn                            = 297,      /*!< 297 RTC131                                                           */
  WDT131_IRQn                            = 299,      /*!< 299 WDT131                                                           */
  WDT132_IRQn                            = 300,      /*!< 300 WDT132                                                           */
  EGU130_IRQn                            = 301,      /*!< 301 EGU130                                                           */
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
  MIPIRFFE_IRQn                          = 411,      /*!< 411 MIPIRFFE                                                         */
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
#include "system_haltium_bbpr.h"                     /*!< haltium_bbpr System Library                                          */

#endif                                               /*!< NRF_BBPR                                                             */


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

#define NRF_BBPR_VPR_NS_BASE              0x43034000UL
#define NRF_BBPR_VPR_S_BASE               0x53034000UL

/* =========================================================================================================================== */
/* ================                                  Peripheral Declaration                                  ================ */
/* =========================================================================================================================== */

#define NRF_BBPR_VPR_NS                   ((NRF_CLIC_Type*)                     NRF_BBPR_VPR_NS_BASE)
#define NRF_BBPR_VPR_S                    ((NRF_CLIC_Type*)                     NRF_BBPR_VPR_S_BASE)

/* =========================================================================================================================== */
/* ================                                    TrustZone Remapping                                    ================ */
/* =========================================================================================================================== */

#ifdef NRF_TRUSTZONE_NONSECURE                       /*!< Remap NRF_X_NS instances to NRF_X symbol for ease of use.            */
  #define NRF_BBPR_VPR                            NRF_BBPR_VPR_NS
#else                                                /*!< Remap NRF_X_S instances to NRF_X symbol for ease of use.             */
  #define NRF_BBPR_VPR                            NRF_BBPR_VPR_S
#endif                                               /*!<  NRF_TRUSTZONE_NONSECURE                                             */

/* =========================================================================================================================== */
/* ================                                  Local Domain Remapping                                  ================ */
/* =========================================================================================================================== */

#ifdef NRF_BBPR                                      /*!< Remap NRF_DOMAIN instances to NRF_X symbol for ease of use.          */
  #define NRF_VPR                                 NRF_BBPR_VPR
#endif                                               /*!< NRF_BBPR                                                             */

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
#endif /* HALTIUM_BBPR_H */

