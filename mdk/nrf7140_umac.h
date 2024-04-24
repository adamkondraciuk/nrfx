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

#ifndef NRF7140_UMAC_H
#define NRF7140_UMAC_H

#ifdef __cplusplus
    extern "C" {
#endif


#ifdef NRF_UMAC                                      /*!< Processor information is domain local.                               */


/* =========================================================================================================================== */
/* ================                                Interrupt Number Definition                                ================ */
/* =========================================================================================================================== */

typedef enum {
/* ===================================================== Core Interrupts ===================================================== */
/* ============================================== Processor Specific Interrupts ============================================== */
  VPRCLIC_0_IRQn                         = 0,        /*!< 0 VPRCLIC_0                                                          */
  VPRCLIC_1_IRQn                         = 1,        /*!< 1 VPRCLIC_1                                                          */
  VPRCLIC_2_IRQn                         = 2,        /*!< 2 VPRCLIC_2                                                          */
  VPRCLIC_3_IRQn                         = 3,        /*!< 3 VPRCLIC_3                                                          */
  VPRCLIC_4_IRQn                         = 4,        /*!< 4 VPRCLIC_4                                                          */
  VPRCLIC_5_IRQn                         = 5,        /*!< 5 VPRCLIC_5                                                          */
  VPRCLIC_6_IRQn                         = 6,        /*!< 6 VPRCLIC_6                                                          */
  VPRCLIC_7_IRQn                         = 7,        /*!< 7 VPRCLIC_7                                                          */
  VPRCLIC_8_IRQn                         = 8,        /*!< 8 VPRCLIC_8                                                          */
  VPRTIM_IRQn                            = 16,       /*!< 16 VPRTIM                                                            */
  RPU_0_IRQn                             = 32,       /*!< 32 RPU_0                                                             */
  RPU_1_IRQn                             = 33,       /*!< 33 RPU_1                                                             */
  RPU_2_IRQn                             = 34,       /*!< 34 RPU_2                                                             */
  RPU_3_IRQn                             = 35,       /*!< 35 RPU_3                                                             */
  RPU_EFS_0_IRQn                         = 36,       /*!< 36 RPU_EFS_0                                                         */
  RPU_EFS_1_IRQn                         = 37,       /*!< 37 RPU_EFS_1                                                         */
  LMAC_VPR_IRQn                          = 40,       /*!< 40 LMAC_VPR                                                          */
  MVDMA_IRQn                             = 48,       /*!< 48 MVDMA                                                             */
  IPCT_0_IRQn                            = 64,       /*!< 64 IPCT_0                                                            */
  IPCT_1_IRQn                            = 65,       /*!< 65 IPCT_1                                                            */
  IPCT_2_IRQn                            = 66,       /*!< 66 IPCT_2                                                            */
  BELLBOARD_WIFI_0_IRQn                  = 96,       /*!< 96 BELLBOARD_WIFI_0                                                  */
  BELLBOARD_WIFI_1_IRQn                  = 97,       /*!< 97 BELLBOARD_WIFI_1                                                  */
  BELLBOARD_WIFI_2_IRQn                  = 98,       /*!< 98 BELLBOARD_WIFI_2                                                  */
  BELLBOARD_WIFI_3_IRQn                  = 99,       /*!< 99 BELLBOARD_WIFI_3                                                  */
  GPIOTE130_0_IRQn                       = 104,      /*!< 104 GPIOTE130_0                                                      */
  GPIOTE130_1_IRQn                       = 105,      /*!< 105 GPIOTE130_1                                                      */
  GRTC_0_IRQn                            = 108,      /*!< 108 GRTC_0                                                           */
  GRTC_1_IRQn                            = 109,      /*!< 109 GRTC_1                                                           */
  GRTC_2_IRQn                            = 110,      /*!< 110 GRTC_2                                                           */
  GSI_IRQn                               = 111,      /*!< 111 GSI                                                              */
  DISPC_0_IRQn                           = 112,      /*!< 112 DISPC_0                                                          */
  DISPC_1_IRQn                           = 113,      /*!< 113 DISPC_1                                                          */
  DISPC_2_IRQn                           = 114,      /*!< 114 DISPC_2                                                          */
  GPU_IRQn                               = 115,      /*!< 115 GPU                                                              */
  TBM_IRQn                               = 127,      /*!< 127 TBM                                                              */
  USBHS_IRQn                             = 134,      /*!< 134 USBHS                                                            */
  MRAMC110_IRQn                          = 146,      /*!< 146 MRAMC110                                                         */
  MRAMC111_IRQn                          = 147,      /*!< 147 MRAMC111                                                         */
  EXMIF_IRQn                             = 149,      /*!< 149 EXMIF                                                            */
  OTPC_IRQn                              = 197,      /*!< 197 OTPC                                                             */
  VPR120_IRQn                            = 200,      /*!< 200 VPR120                                                           */
  IPCT120_0_IRQn                         = 209,      /*!< 209 IPCT120_0                                                        */
  I3C120_IRQn                            = 211,      /*!< 211 I3C120                                                           */
  VPR121_IRQn                            = 212,      /*!< 212 VPR121                                                           */
  QSPI120_IRQn                           = 215,      /*!< 215 QSPI120                                                          */
  CAN120_IRQn                            = 216,      /*!< 216 CAN120                                                           */
  MVDMA120_IRQn                          = 217,      /*!< 217 MVDMA120                                                         */
  CAN121_IRQn                            = 219,      /*!< 219 CAN121                                                           */
  MVDMA121_IRQn                          = 220,      /*!< 220 MVDMA121                                                         */
  I3C121_IRQn                            = 222,      /*!< 222 I3C121                                                           */
  QSPI121_IRQn                           = 223,      /*!< 223 QSPI121                                                          */
  TIMER120_IRQn                          = 226,      /*!< 226 TIMER120                                                         */
  TIMER121_IRQn                          = 227,      /*!< 227 TIMER121                                                         */
  PWM120_IRQn                            = 228,      /*!< 228 PWM120                                                           */
  SPIS120_IRQn                           = 229,      /*!< 229 SPIS120                                                          */
  UARTE120_IRQn                          = 230,      /*!< 230 UARTE120                                                         */
  SPIM121_IRQn                           = 231,      /*!< 231 SPIM121                                                          */
  SPIM122_IRQn                           = 232,      /*!< 232 SPIM122                                                          */
  SPIM123_IRQn                           = 233,      /*!< 233 SPIM123                                                          */
  VPR130_IRQn                            = 264,      /*!< 264 VPR130                                                           */
  IPCT130_0_IRQn                         = 289,      /*!< 289 IPCT130_0                                                        */
  RTC130_IRQn                            = 296,      /*!< 296 RTC130                                                           */
  RTC131_IRQn                            = 297,      /*!< 297 RTC131                                                           */
  WDT131_IRQn                            = 299,      /*!< 299 WDT131                                                           */
  WDT132_IRQn                            = 300,      /*!< 300 WDT132                                                           */
  EGU130_IRQn                            = 301,      /*!< 301 EGU130                                                           */
  RESETHUB_IRQn                          = 329,      /*!< 329 RESETHUB                                                         */
  AUDIOPLL_IRQn                          = 343,      /*!< 343 AUDIOPLL                                                         */
  USBHSPLL_IRQn                          = 344,      /*!< 344 USBHSPLL                                                         */
  VREGUSB_IRQn                           = 359,      /*!< 359 VREGUSB                                                          */
  AUDIOPLLPM_IRQn                        = 360,      /*!< 360 AUDIOPLLPM                                                       */
  SAADC_IRQn                             = 386,      /*!< 386 SAADC                                                            */
  COMP_LPCOMP_IRQn                       = 387,      /*!< 387 COMP_LPCOMP                                                      */
  TEMP_IRQn                              = 388,      /*!< 388 TEMP                                                             */
  NFCT_IRQn                              = 389,      /*!< 389 NFCT                                                             */
  TDM130_IRQn                            = 402,      /*!< 402 TDM130                                                           */
  QDEC130_IRQn                           = 404,      /*!< 404 QDEC130                                                          */
  QDEC131_IRQn                           = 405,      /*!< 405 QDEC131                                                          */
  SIMIF130_IRQn                          = 406,      /*!< 406 SIMIF130                                                         */
  TDM131_IRQn                            = 407,      /*!< 407 TDM131                                                           */
  TDM132_IRQn                            = 409,      /*!< 409 TDM132                                                           */
  TIMER130_IRQn                          = 418,      /*!< 418 TIMER130                                                         */
  TIMER131_IRQn                          = 419,      /*!< 419 TIMER131                                                         */
  PWM130_IRQn                            = 420,      /*!< 420 PWM130                                                           */
  UARTE130_IRQn                          = 421,      /*!< 421 UARTE130                                                         */
  UARTE131_IRQn                          = 422,      /*!< 422 UARTE131                                                         */
  PDM130_IRQn                            = 423,      /*!< 423 PDM130                                                           */
  TIMER132_IRQn                          = 434,      /*!< 434 TIMER132                                                         */
  TIMER133_IRQn                          = 435,      /*!< 435 TIMER133                                                         */
  PWM131_IRQn                            = 436,      /*!< 436 PWM131                                                           */
  UARTE132_IRQn                          = 437,      /*!< 437 UARTE132                                                         */
  UARTE133_IRQn                          = 438,      /*!< 438 UARTE133                                                         */
  PDM131_IRQn                            = 439,      /*!< 439 PDM131                                                           */
  TIMER134_IRQn                          = 450,      /*!< 450 TIMER134                                                         */
  TIMER135_IRQn                          = 451,      /*!< 451 TIMER135                                                         */
  PWM132_IRQn                            = 452,      /*!< 452 PWM132                                                           */
  UARTE134_IRQn                          = 453,      /*!< 453 UARTE134                                                         */
  UARTE135_IRQn                          = 454,      /*!< 454 UARTE135                                                         */
  PDM132_IRQn                            = 455,      /*!< 455 PDM132                                                           */
  TIMER136_IRQn                          = 466,      /*!< 466 TIMER136                                                         */
  TIMER137_IRQn                          = 467,      /*!< 467 TIMER137                                                         */
  PWM133_IRQn                            = 468,      /*!< 468 PWM133                                                           */
  UARTE136_IRQn                          = 469,      /*!< 469 UARTE136                                                         */
  UARTE137_IRQn                          = 470,      /*!< 470 UARTE137                                                         */
  PDM133_IRQn                            = 471,      /*!< 471 PDM133                                                           */
} IRQn_Type;

/* ==================================================== Interrupt Aliases ==================================================== */
#define GRTC_IRQn                     GRTC_0_IRQn
#define GRTC_IRQHandler               GRTC_0_IRQHandler
#define SPIM120_IRQn                  UARTE120_IRQn
#define SPIM120_IRQHandler            UARTE120_IRQHandler
#define UARTE120_IRQn                 UARTE120_IRQn
#define UARTE120_IRQHandler           UARTE120_IRQHandler
#define COMP_IRQn                     COMP_LPCOMP_IRQn
#define COMP_IRQHandler               COMP_LPCOMP_IRQHandler
#define LPCOMP_IRQn                   COMP_LPCOMP_IRQn
#define LPCOMP_IRQHandler             COMP_LPCOMP_IRQHandler
#define SERIAL0_IRQn                  UARTE130_IRQn
#define SERIAL0_IRQHandler            UARTE130_IRQHandler
#define SERIAL1_IRQn                  UARTE131_IRQn
#define SERIAL1_IRQHandler            UARTE131_IRQHandler
#define SERIAL2_IRQn                  UARTE132_IRQn
#define SERIAL2_IRQHandler            UARTE132_IRQHandler
#define SERIAL3_IRQn                  UARTE133_IRQn
#define SERIAL3_IRQHandler            UARTE133_IRQHandler
#define SERIAL4_IRQn                  UARTE134_IRQn
#define SERIAL4_IRQHandler            UARTE134_IRQHandler
#define SERIAL5_IRQn                  UARTE135_IRQn
#define SERIAL5_IRQHandler            UARTE135_IRQHandler
#define SERIAL6_IRQn                  UARTE136_IRQn
#define SERIAL6_IRQHandler            UARTE136_IRQHandler
#define SERIAL7_IRQn                  UARTE137_IRQn
#define SERIAL7_IRQHandler            UARTE137_IRQHandler

/* =========================================================================================================================== */
/* ================                           Processor and Core Peripheral Section                           ================ */
/* =========================================================================================================================== */

/* ====================== Configuration of the Nordic Semiconductor VPR Processor and Core Peripherals ======================= */
#define __VPR_REV                    1.4             /*!< VPR Core Revision                                                    */
#define __VPR_REV_MAJOR                1             /*!< VPR Core Major Revision                                              */
#define __VPR_REV_MINOR                4             /*!< VPR Core Minor Revision                                              */
#define __VPR_REV_PATCH                0             /*!< VPR Core Patch Revision                                              */
#define __DSP_PRESENT                  0             /*!< DSP present or not                                                   */
#define __CLIC_PRIO_BITS               3             /*!< Number of Bits used for Priority Levels                              */
#define __MTVT_PRESENT                 1             /*!< CPU supports alternate Vector Table address                          */
#define __MPU_PRESENT                  1             /*!< MPU present                                                          */
#define __FPU_PRESENT                  0             /*!< FPU present                                                          */
#define __FPU_DP                       0             /*!< Double Precision FPU                                                 */
#define __INTERRUPTS_MAX             480             /*!< Size of interrupt vector table                                       */

#define NRF_VPR     NRF_WIFICORE_VPRUMAC             /*!< VPR instance name                                                    */
#include "core_vpr.h"                                /*!< Nordic Semiconductor VPR processor and core peripherals              */
#include "system_nrf.h"                              /*!< nrf7140_umac System Library                                          */

#endif                                               /*!< NRF_UMAC                                                             */


#ifdef NRF_UMAC

  #define NRF_DOMAIN                    NRF_DOMAIN_WIFICORE
  #define NRF_PROCESSOR                 NRF_PROCESSOR_WIFIUMAC
  #define NRF_OWNER                     NRF_OWNER_WIFICORE

#endif                                               /*!< NRF_UMAC                                                             */


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
#else
  #warning Unsupported compiler type
#endif

/* =========================================================================================================================== */
/* ================                                  Peripheral Address Map                                  ================ */
/* =========================================================================================================================== */

#define NRF_UMAC_VPRCLIC_BASE             0xF0000000UL

/* =========================================================================================================================== */
/* ================                                  Peripheral Declaration                                  ================ */
/* =========================================================================================================================== */

#define NRF_UMAC_VPRCLIC                  ((NRF_CLIC_Type*)                     NRF_UMAC_VPRCLIC_BASE)

/* =========================================================================================================================== */
/* ================                                  Local Domain Remapping                                  ================ */
/* =========================================================================================================================== */

#ifdef NRF_UMAC                                      /*!< Remap NRF_DOMAIN_X instances to NRF_X symbol for ease of use.        */
  #define NRF_VPRCLIC                             NRF_UMAC_VPRCLIC
#endif                                               /*!< NRF_UMAC                                                             */

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
#endif


#ifdef __cplusplus
}
#endif
#endif /* NRF7140_UMAC_H */

