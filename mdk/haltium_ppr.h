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

#ifndef HALTIUM_PPR_H
#define HALTIUM_PPR_H

#ifdef __cplusplus
    extern "C" {
#endif


#ifdef NRF_PPR                                       /*!< Processor information is domain local.                               */


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
  VPR_IRQn                               = 264,      /*!< 264 VPR                                                              */
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

/* ====================== Configuration of the Nordic Semiconductor VPR Processor and Core Peripherals ======================= */
#define __VPR_REV                    0.7             /*!< VPR Core Revision                                                    */
#define __DSP_PRESENT                  0             /*!< DSP present or not                                                   */
#define __CLIC_PRIO_BITS               3             /*!< Number of Bits used for Priority Levels                              */
#define __MTVT_PRESENT                 1             /*!< CPU supports alternate Vector Table address                          */
#define __MPU_PRESENT                  1             /*!< MPU present                                                          */
#define __FPU_PRESENT                  0             /*!< FPU present                                                          */
#define __FPU_DP                       0             /*!< Double Precision FPU                                                 */

#include "core_vpr.h"                                /*!< Nordic Semiconductor VPR processor and core peripherals              */
#include "system_haltium_ppr.h"                      /*!< haltium_ppr System Library                                           */

#endif                                               /*!< NRF_PPR                                                              */


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

#define NRF_PPR_VPR_NS_BASE               0x4F908000UL
#define NRF_PPR_VPR_S_BASE                0x5F908000UL

/* =========================================================================================================================== */
/* ================                                  Peripheral Declaration                                  ================ */
/* =========================================================================================================================== */

#define NRF_PPR_VPR_NS                    ((NRF_VPR_Type*)                      NRF_PPR_VPR_NS_BASE)
#define NRF_PPR_VPR_S                     ((NRF_VPR_Type*)                      NRF_PPR_VPR_S_BASE)

/* =========================================================================================================================== */
/* ================                                    TrustZone Remapping                                    ================ */
/* =========================================================================================================================== */

#ifdef NRF_NONSECURE                                 /*!< Remap NRF_X_NS instances to NRF_X symbol for ease of use.            */
  #define NRF_PPR_VPR                             NRF_PPR_VPR_NS
#else                                                /*!< Remap NRF_X_S instances to NRF_X symbol for ease of use.             */
  #define NRF_PPR_VPR                             NRF_PPR_VPR_S
#endif                                               /*!<  NRF_NONSECURE                                                       */

/* =========================================================================================================================== */
/* ================                                  Local Domain Remapping                                  ================ */
/* =========================================================================================================================== */

#ifdef NRF_PPR                                       /*!< Remap NRF_DOMAIN instances to NRF_X symbol for ease of use.          */
  #define NRF_VPR                                 NRF_PPR_VPR
#endif                                               /*!< NRF_PPR                                                              */

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
#endif /* HALTIUM_PPR_H */

