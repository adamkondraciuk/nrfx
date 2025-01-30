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

#ifndef NRF9220_CELLDSP_H
#define NRF9220_CELLDSP_H

#ifdef __cplusplus
    extern "C" {
#endif


#ifdef NRF_CELLDSP                                   /*!< Processor information is domain local.                               */


/* =========================================================================================================================== */
/* ================                                Interrupt Number Definition                                ================ */
/* =========================================================================================================================== */

typedef enum {
/* ===================================================== Core Interrupts ===================================================== */
/* ============================================== Processor Specific Interrupts ============================================== */
  MPC_IRQn                               = 2,        /*!< 2 MPC                                                                */
  MVDMA_IRQn                             = 3,        /*!< 3 MVDMA                                                              */
  LTEFE_0_IRQn                           = 10,       /*!< 10 LTEFE_0                                                           */
  LTEFE_1_IRQn                           = 11,       /*!< 11 LTEFE_1                                                           */
  LTEFE_2_IRQn                           = 12,       /*!< 12 LTEFE_2                                                           */
  LTEFE_3_VITERBI_0_IRQn                 = 13,       /*!< 13 LTEFE_3_VITERBI_0                                                 */
  LTEFE_4_VITERBI_1_IRQn                 = 14,       /*!< 14 LTEFE_4_VITERBI_1                                                 */
  DECTSYNC_0_LTEFE_5_VITERBI_2_IRQn      = 15,       /*!< 15 DECTSYNC_0_LTEFE_5_VITERBI_2                                      */
  DECTSYNC_1_LTEFE_6_VITERBI_3_IRQn      = 16,       /*!< 16 DECTSYNC_1_LTEFE_6_VITERBI_3                                      */
  DECTSYNC_2_LTEFE_7_IRQn                = 17,       /*!< 17 DECTSYNC_2_LTEFE_7                                                */
  DECTSYNC_3_LTEFE_8_IRQn                = 18,       /*!< 18 DECTSYNC_3_LTEFE_8                                                */
  DECTSYNC_4_IPCT_0_LTEFE_9_IRQn         = 19,       /*!< 19 DECTSYNC_4_IPCT_0_LTEFE_9                                         */
  DECTSYNC_5_IPCT_1_LTEFE_10_IRQn        = 20,       /*!< 20 DECTSYNC_5_IPCT_1_LTEFE_10                                        */
  IPCT_2_LTEFE_11_IRQn                   = 21,       /*!< 21 IPCT_2_LTEFE_11                                                   */
  LTEFE_12_IRQn                          = 22,       /*!< 22 LTEFE_12                                                          */
  LTEFE_13_IRQn                          = 23,       /*!< 23 LTEFE_13                                                          */
  LTEFE_14_IRQn                          = 24,       /*!< 24 LTEFE_14                                                          */
  LTEFE_15_IRQn                          = 25,       /*!< 25 LTEFE_15                                                          */
  WIFIBFE_0_IRQn                         = 41,       /*!< 41 WIFIBFE_0                                                         */
  WIFIBFE_1_IRQn                         = 42,       /*!< 42 WIFIBFE_1                                                         */
  WIFIBFE_2_IRQn                         = 43,       /*!< 43 WIFIBFE_2                                                         */
  WIFIBFE_3_IRQn                         = 44,       /*!< 44 WIFIBFE_3                                                         */
  WIFIBFE_4_IRQn                         = 45,       /*!< 45 WIFIBFE_4                                                         */
  WIFIBFE_5_IRQn                         = 46,       /*!< 46 WIFIBFE_5                                                         */
  BELLBOARD_0_IRQn                       = 96,       /*!< 96 BELLBOARD_0                                                       */
  BELLBOARD_1_IRQn                       = 97,       /*!< 97 BELLBOARD_1                                                       */
  BELLBOARD_2_IRQn                       = 98,       /*!< 98 BELLBOARD_2                                                       */
  BELLBOARD_3_IRQn                       = 99,       /*!< 99 BELLBOARD_3                                                       */
  GPIOTE130_0_IRQn                       = 104,      /*!< 104 GPIOTE130_0                                                      */
  GPIOTE130_1_IRQn                       = 105,      /*!< 105 GPIOTE130_1                                                      */
  GRTC_0_IRQn                            = 108,      /*!< 108 GRTC_0                                                           */
  GRTC_1_IRQn                            = 109,      /*!< 109 GRTC_1                                                           */
  MRAMC110_IRQn                          = 146,      /*!< 146 MRAMC110                                                         */
  MRAMC111_IRQn                          = 147,      /*!< 147 MRAMC111                                                         */
  OTPC_IRQn                              = 197,      /*!< 197 OTPC                                                             */
  VPR120_IRQn                            = 200,      /*!< 200 VPR120                                                           */
  IPCT120_0_IRQn                         = 209,      /*!< 209 IPCT120_0                                                        */
  VPR121_IRQn                            = 212,      /*!< 212 VPR121                                                           */
  TIMER120_IRQn                          = 226,      /*!< 226 TIMER120                                                         */
  SPIM120_SPIS120_UARTE120_IRQn          = 230,      /*!< 230 SPIM120_SPIS120_UARTE120                                         */
  VPR130_IRQn                            = 264,      /*!< 264 VPR130                                                           */
  AHBBUFFER_APP_IRQn                     = 266,      /*!< 266 AHBBUFFER_APP                                                    */
  AHBBUFFER_CELL_IRQn                    = 268,      /*!< 268 AHBBUFFER_CELL                                                   */
  IPCT130_0_IRQn                         = 289,      /*!< 289 IPCT130_0                                                        */
  RTC130_IRQn                            = 296,      /*!< 296 RTC130                                                           */
  WDT131_IRQn                            = 299,      /*!< 299 WDT131                                                           */
  WDT132_IRQn                            = 300,      /*!< 300 WDT132                                                           */
  EGU130_IRQn                            = 301,      /*!< 301 EGU130                                                           */
  RESETHUB_IRQn                          = 329,      /*!< 329 RESETHUB                                                         */
  AUDIOPLL_IRQn                          = 343,      /*!< 343 AUDIOPLL                                                         */
  AUDIOPLLPM_IRQn                        = 360,      /*!< 360 AUDIOPLLPM                                                       */
  SAADC_IRQn                             = 386,      /*!< 386 SAADC                                                            */
  TEMP_IRQn                              = 388,      /*!< 388 TEMP                                                             */
  NFCT_IRQn                              = 389,      /*!< 389 NFCT                                                             */
  PDM_IRQn                               = 403,      /*!< 403 PDM                                                              */
  SIMIF130_IRQn                          = 406,      /*!< 406 SIMIF130                                                         */
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
  SERIAL4_IRQn                           = 453,      /*!< 453 SERIAL4                                                          */
  SERIAL5_IRQn                           = 454,      /*!< 454 SERIAL5                                                          */
  SERIAL6_IRQn                           = 469,      /*!< 469 SERIAL6                                                          */
  SERIAL7_IRQn                           = 470,      /*!< 470 SERIAL7                                                          */
} IRQn_Type;

/* ==================================================== Interrupt Aliases ==================================================== */
#define LTEFE_3_3_IRQn                LTEFE_3_VITERBI_0_IRQn
#define LTEFE_3_3_IRQHandler          LTEFE_3_VITERBI_0_IRQHandler
#define VITERBI_0_IRQn                LTEFE_3_VITERBI_0_IRQn
#define VITERBI_0_IRQHandler          LTEFE_3_VITERBI_0_IRQHandler
#define LTEFE_4_4_IRQn                LTEFE_4_VITERBI_1_IRQn
#define LTEFE_4_4_IRQHandler          LTEFE_4_VITERBI_1_IRQHandler
#define VITERBI_1_IRQn                LTEFE_4_VITERBI_1_IRQn
#define VITERBI_1_IRQHandler          LTEFE_4_VITERBI_1_IRQHandler
#define DECTSYNC_0_IRQn               DECTSYNC_0_LTEFE_5_VITERBI_2_IRQn
#define DECTSYNC_0_IRQHandler         DECTSYNC_0_LTEFE_5_VITERBI_2_IRQHandler
#define LTEFE_5_5_IRQn                DECTSYNC_0_LTEFE_5_VITERBI_2_IRQn
#define LTEFE_5_5_IRQHandler          DECTSYNC_0_LTEFE_5_VITERBI_2_IRQHandler
#define VITERBI_2_IRQn                DECTSYNC_0_LTEFE_5_VITERBI_2_IRQn
#define VITERBI_2_IRQHandler          DECTSYNC_0_LTEFE_5_VITERBI_2_IRQHandler
#define DECTSYNC_1_IRQn               DECTSYNC_1_LTEFE_6_VITERBI_3_IRQn
#define DECTSYNC_1_IRQHandler         DECTSYNC_1_LTEFE_6_VITERBI_3_IRQHandler
#define LTEFE_6_6_IRQn                DECTSYNC_1_LTEFE_6_VITERBI_3_IRQn
#define LTEFE_6_6_IRQHandler          DECTSYNC_1_LTEFE_6_VITERBI_3_IRQHandler
#define VITERBI_3_IRQn                DECTSYNC_1_LTEFE_6_VITERBI_3_IRQn
#define VITERBI_3_IRQHandler          DECTSYNC_1_LTEFE_6_VITERBI_3_IRQHandler
#define DECTSYNC_2_IRQn               DECTSYNC_2_LTEFE_7_IRQn
#define DECTSYNC_2_IRQHandler         DECTSYNC_2_LTEFE_7_IRQHandler
#define LTEFE_7_7_IRQn                DECTSYNC_2_LTEFE_7_IRQn
#define LTEFE_7_7_IRQHandler          DECTSYNC_2_LTEFE_7_IRQHandler
#define DECTSYNC_3_IRQn               DECTSYNC_3_LTEFE_8_IRQn
#define DECTSYNC_3_IRQHandler         DECTSYNC_3_LTEFE_8_IRQHandler
#define LTEFE_8_8_IRQn                DECTSYNC_3_LTEFE_8_IRQn
#define LTEFE_8_8_IRQHandler          DECTSYNC_3_LTEFE_8_IRQHandler
#define DECTSYNC_4_IRQn               DECTSYNC_4_IPCT_0_LTEFE_9_IRQn
#define DECTSYNC_4_IRQHandler         DECTSYNC_4_IPCT_0_LTEFE_9_IRQHandler
#define IPCT_0_IRQn                   DECTSYNC_4_IPCT_0_LTEFE_9_IRQn
#define IPCT_0_IRQHandler             DECTSYNC_4_IPCT_0_LTEFE_9_IRQHandler
#define LTEFE_9_9_IRQn                DECTSYNC_4_IPCT_0_LTEFE_9_IRQn
#define LTEFE_9_9_IRQHandler          DECTSYNC_4_IPCT_0_LTEFE_9_IRQHandler
#define DECTSYNC_5_IRQn               DECTSYNC_5_IPCT_1_LTEFE_10_IRQn
#define DECTSYNC_5_IRQHandler         DECTSYNC_5_IPCT_1_LTEFE_10_IRQHandler
#define IPCT_1_IRQn                   DECTSYNC_5_IPCT_1_LTEFE_10_IRQn
#define IPCT_1_IRQHandler             DECTSYNC_5_IPCT_1_LTEFE_10_IRQHandler
#define LTEFE_10_10_IRQn              DECTSYNC_5_IPCT_1_LTEFE_10_IRQn
#define LTEFE_10_10_IRQHandler        DECTSYNC_5_IPCT_1_LTEFE_10_IRQHandler
#define IPCT_2_IRQn                   IPCT_2_LTEFE_11_IRQn
#define IPCT_2_IRQHandler             IPCT_2_LTEFE_11_IRQHandler
#define LTEFE_11_11_IRQn              IPCT_2_LTEFE_11_IRQn
#define LTEFE_11_11_IRQHandler        IPCT_2_LTEFE_11_IRQHandler
#define SPIM120_IRQn                  SPIM120_SPIS120_UARTE120_IRQn
#define SPIM120_IRQHandler            SPIM120_SPIS120_UARTE120_IRQHandler
#define SPIS120_IRQn                  SPIM120_SPIS120_UARTE120_IRQn
#define SPIS120_IRQHandler            SPIM120_SPIS120_UARTE120_IRQHandler
#define UARTE120_IRQn                 SPIM120_SPIS120_UARTE120_IRQn
#define UARTE120_IRQHandler           SPIM120_SPIS120_UARTE120_IRQHandler
#define SPIM130_IRQn                  SERIAL0_IRQn
#define SPIM130_IRQHandler            SERIAL0_IRQHandler
#define SPIS130_IRQn                  SERIAL0_IRQn
#define SPIS130_IRQHandler            SERIAL0_IRQHandler
#define TWIM130_IRQn                  SERIAL0_IRQn
#define TWIM130_IRQHandler            SERIAL0_IRQHandler
#define TWIS130_IRQn                  SERIAL0_IRQn
#define TWIS130_IRQHandler            SERIAL0_IRQHandler
#define UARTE130_IRQn                 SERIAL0_IRQn
#define UARTE130_IRQHandler           SERIAL0_IRQHandler
#define SPIM131_IRQn                  SERIAL1_IRQn
#define SPIM131_IRQHandler            SERIAL1_IRQHandler
#define SPIS131_IRQn                  SERIAL1_IRQn
#define SPIS131_IRQHandler            SERIAL1_IRQHandler
#define TWIM131_IRQn                  SERIAL1_IRQn
#define TWIM131_IRQHandler            SERIAL1_IRQHandler
#define TWIS131_IRQn                  SERIAL1_IRQn
#define TWIS131_IRQHandler            SERIAL1_IRQHandler
#define UARTE131_IRQn                 SERIAL1_IRQn
#define UARTE131_IRQHandler           SERIAL1_IRQHandler
#define SPIM132_IRQn                  SERIAL2_IRQn
#define SPIM132_IRQHandler            SERIAL2_IRQHandler
#define SPIS132_IRQn                  SERIAL2_IRQn
#define SPIS132_IRQHandler            SERIAL2_IRQHandler
#define TWIM132_IRQn                  SERIAL2_IRQn
#define TWIM132_IRQHandler            SERIAL2_IRQHandler
#define TWIS132_IRQn                  SERIAL2_IRQn
#define TWIS132_IRQHandler            SERIAL2_IRQHandler
#define UARTE132_IRQn                 SERIAL2_IRQn
#define UARTE132_IRQHandler           SERIAL2_IRQHandler
#define SPIM133_IRQn                  SERIAL3_IRQn
#define SPIM133_IRQHandler            SERIAL3_IRQHandler
#define SPIS133_IRQn                  SERIAL3_IRQn
#define SPIS133_IRQHandler            SERIAL3_IRQHandler
#define TWIM133_IRQn                  SERIAL3_IRQn
#define TWIM133_IRQHandler            SERIAL3_IRQHandler
#define TWIS133_IRQn                  SERIAL3_IRQn
#define TWIS133_IRQHandler            SERIAL3_IRQHandler
#define UARTE133_IRQn                 SERIAL3_IRQn
#define UARTE133_IRQHandler           SERIAL3_IRQHandler

/* =========================================================================================================================== */
/* ================                           Processor and Core Peripheral Section                           ================ */
/* =========================================================================================================================== */

/* ============================== Configuration of the CEVA XC5 Processor and Core Peripherals =============================== */
#define __XC5_REV               v1.1.0.F             /*!< XC5 Core Revision                                                    */
#define __DSP_PRESENT                  1             /*!< DSP present or not                                                   */
#define __MPU_PRESENT                  0             /*!< MPU present                                                          */
#define __FPU_PRESENT                  0             /*!< FPU present                                                          */
#define __FPU_DP                       0             /*!< Double Precision FPU                                                 */
#define __INTERRUPTS_MAX              55             /*!< Size of interrupt vector table                                       */

#include "system_nrf.h"                              /*!< nrf9220_celldsp System Library                                       */

#endif                                               /*!< NRF_CELLDSP                                                          */


#ifdef NRF_CELLDSP

  #define NRF_DOMAIN                    NRF_DOMAIN_CELLDSP
  #define NRF_PROCESSOR                 NRF_PROCESSOR_CELLDSP
  #define NRF_OWNER                     NRF_OWNER_CELL

#endif                                               /*!< NRF_CELLDSP                                                          */


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

#define NRF_CELLDSP_HSFLL_BASE            0x45000000UL
#define NRF_CELLDSP_LRCCONF0_BASE         0x45001000UL
#define NRF_CELLDSP_MPC_BASE              0x45002000UL
#define NRF_CELLDSP_MVDMA_BASE            0x45003000UL
#define NRF_CELLDSP_RAMC00_BASE           0x45004000UL
#define NRF_CELLDSP_RAMC10_BASE           0x45005000UL
#define NRF_CELLDSP_RAMC20_BASE           0x45006000UL
#define NRF_CELLDSP_PPIBUS_BASE           0x45007000UL
#define NRF_CELLDSP_DSPINTMAP_BASE        0x45008000UL
#define NRF_CELLDSP_TURBO1_BASE           0x45009000UL
#define NRF_CELLDSP_LTEFE_BASE            0x4500A000UL
#define NRF_CELLDSP_TURBO0_BASE           0x4500B000UL
#define NRF_CELLDSP_VITERBI_BASE          0x4500D000UL
#define NRF_CELLDSP_PPIB0_BASE            0x4500E000UL
#define NRF_CELLDSP_DECTSYNC_BASE         0x4500F000UL
#define NRF_CELLDSP_LRCCONF1_BASE         0x45010000UL
#define NRF_CELLDSP_CPUCONF_BASE          0x45011000UL
#define NRF_CELLDSP_MEMCONF_BASE          0x45012000UL
#define NRF_CELLDSP_IPCT_BASE             0x45013000UL
#define NRF_CELLDSP_DSPCTRL_BASE          0x45014000UL
#define NRF_CELLDSP_PCGCM0_BASE           0x45015000UL
#define NRF_CELLDSP_PPIB1_BASE            0x45016000UL
#define NRF_CELLDSP_CTI0_BASE             0x45020000UL
#define NRF_CELLDSP_DPPIC_BASE            0x45021000UL
#define NRF_CELLDSP_PCGCS0_BASE           0x45022000UL
#define NRF_CELLDSP_PCGCM1_BASE           0x45023000UL
#define NRF_CELLDSP_ETM_BASE              0x45025000UL
#define NRF_CELLDSP_CTI1_BASE             0x45026000UL
#define NRF_CELLDSP_TRACEDELAYREG_BASE    0x45027000UL
#define NRF_CELLDSP_WIFIBFE_BASE          0x45029000UL
#define NRF_CELLDSP_BELLBOARD_BASE        0x4F09D000UL

/* =========================================================================================================================== */
/* ================                                  Peripheral Declaration                                  ================ */
/* =========================================================================================================================== */

#define NRF_CELLDSP_HSFLL                 ((NRF_HSFLL_Type*)                    NRF_CELLDSP_HSFLL_BASE)
#define NRF_CELLDSP_LRCCONF0              ((NRF_LRCCONF_Type*)                  NRF_CELLDSP_LRCCONF0_BASE)
#define NRF_CELLDSP_MPC                   ((NRF_MPC_Type*)                      NRF_CELLDSP_MPC_BASE)
#define NRF_CELLDSP_MVDMA                 ((NRF_MVDMA_Type*)                    NRF_CELLDSP_MVDMA_BASE)
#define NRF_CELLDSP_RAMC00                ((NRF_RAMC_Type*)                     NRF_CELLDSP_RAMC00_BASE)
#define NRF_CELLDSP_RAMC10                ((NRF_RAMC_Type*)                     NRF_CELLDSP_RAMC10_BASE)
#define NRF_CELLDSP_RAMC20                ((NRF_RAMC_Type*)                     NRF_CELLDSP_RAMC20_BASE)
#define NRF_CELLDSP_PPIBUS                ((NRF_PPIBUS_Type*)                   NRF_CELLDSP_PPIBUS_BASE)
#define NRF_CELLDSP_DSPINTMAP             ((NRF_DSPINTMAP_Type*)                NRF_CELLDSP_DSPINTMAP_BASE)
#define NRF_CELLDSP_TURBO1                ((NRF_TURBO_Type*)                    NRF_CELLDSP_TURBO1_BASE)
#define NRF_CELLDSP_LTEFE                 ((NRF_LTEFE_Type*)                    NRF_CELLDSP_LTEFE_BASE)
#define NRF_CELLDSP_TURBO0                ((NRF_TURBO_Type*)                    NRF_CELLDSP_TURBO0_BASE)
#define NRF_CELLDSP_VITERBI               ((NRF_VITERBI_Type*)                  NRF_CELLDSP_VITERBI_BASE)
#define NRF_CELLDSP_PPIB0                 ((NRF_PPIB_Type*)                     NRF_CELLDSP_PPIB0_BASE)
#define NRF_CELLDSP_DECTSYNC              ((NRF_DECTSYNC_Type*)                 NRF_CELLDSP_DECTSYNC_BASE)
#define NRF_CELLDSP_LRCCONF1              ((NRF_LRCCONF_Type*)                  NRF_CELLDSP_LRCCONF1_BASE)
#define NRF_CELLDSP_CPUCONF               ((NRF_CPUCONF_Type*)                  NRF_CELLDSP_CPUCONF_BASE)
#define NRF_CELLDSP_MEMCONF               ((NRF_MEMCONF_Type*)                  NRF_CELLDSP_MEMCONF_BASE)
#define NRF_CELLDSP_IPCT                  ((NRF_IPCT_Type*)                     NRF_CELLDSP_IPCT_BASE)
#define NRF_CELLDSP_DSPCTRL               ((NRF_DSPCTRL_Type*)                  NRF_CELLDSP_DSPCTRL_BASE)
#define NRF_CELLDSP_PCGCM0                ((NRF_PCGCMASTER_Type*)               NRF_CELLDSP_PCGCM0_BASE)
#define NRF_CELLDSP_PPIB1                 ((NRF_PPIB_Type*)                     NRF_CELLDSP_PPIB1_BASE)
#define NRF_CELLDSP_CTI0                  ((NRF_CTI_Type*)                      NRF_CELLDSP_CTI0_BASE)
#define NRF_CELLDSP_DPPIC                 ((NRF_DPPIC_Type*)                    NRF_CELLDSP_DPPIC_BASE)
#define NRF_CELLDSP_PCGCS0                ((NRF_PCGCSLAVE_Type*)                NRF_CELLDSP_PCGCS0_BASE)
#define NRF_CELLDSP_PCGCM1                ((NRF_PCGCMASTER_Type*)               NRF_CELLDSP_PCGCM1_BASE)
#define NRF_CELLDSP_ETM                   ((NRF_ETM_Type*)                      NRF_CELLDSP_ETM_BASE)
#define NRF_CELLDSP_CTI1                  ((NRF_CTI_Type*)                      NRF_CELLDSP_CTI1_BASE)
#define NRF_CELLDSP_TRACEDELAYREG         ((NRF_TRACEDELAYREG_Type*)            NRF_CELLDSP_TRACEDELAYREG_BASE)
#define NRF_CELLDSP_WIFIBFE               ((NRF_POSFE_Type*)                    NRF_CELLDSP_WIFIBFE_BASE)
#define NRF_CELLDSP_BELLBOARD             ((NRF_BELLBOARD_Type*)                NRF_CELLDSP_BELLBOARD_BASE)

/* =========================================================================================================================== */
/* ================                                  Local Domain Remapping                                  ================ */
/* =========================================================================================================================== */

#ifdef NRF_CELLDSP                                   /*!< Remap NRF_DOMAIN_X instances to NRF_X symbol for ease of use.        */
  #define NRF_HSFLL                               NRF_CELLDSP_HSFLL
  #define NRF_LRCCONF0                            NRF_CELLDSP_LRCCONF0
  #define NRF_MPC                                 NRF_CELLDSP_MPC
  #define NRF_MVDMA                               NRF_CELLDSP_MVDMA
  #define NRF_RAMC00                              NRF_CELLDSP_RAMC00
  #define NRF_RAMC10                              NRF_CELLDSP_RAMC10
  #define NRF_RAMC20                              NRF_CELLDSP_RAMC20
  #define NRF_PPIBUS                              NRF_CELLDSP_PPIBUS
  #define NRF_DSPINTMAP                           NRF_CELLDSP_DSPINTMAP
  #define NRF_TURBO1                              NRF_CELLDSP_TURBO1
  #define NRF_LTEFE                               NRF_CELLDSP_LTEFE
  #define NRF_TURBO0                              NRF_CELLDSP_TURBO0
  #define NRF_VITERBI                             NRF_CELLDSP_VITERBI
  #define NRF_PPIB0                               NRF_CELLDSP_PPIB0
  #define NRF_DECTSYNC                            NRF_CELLDSP_DECTSYNC
  #define NRF_LRCCONF1                            NRF_CELLDSP_LRCCONF1
  #define NRF_CPUCONF                             NRF_CELLDSP_CPUCONF
  #define NRF_MEMCONF                             NRF_CELLDSP_MEMCONF
  #define NRF_IPCT                                NRF_CELLDSP_IPCT
  #define NRF_DSPCTRL                             NRF_CELLDSP_DSPCTRL
  #define NRF_PCGCM0                              NRF_CELLDSP_PCGCM0
  #define NRF_PPIB1                               NRF_CELLDSP_PPIB1
  #define NRF_CTI0                                NRF_CELLDSP_CTI0
  #define NRF_DPPIC                               NRF_CELLDSP_DPPIC
  #define NRF_PCGCS0                              NRF_CELLDSP_PCGCS0
  #define NRF_PCGCM1                              NRF_CELLDSP_PCGCM1
  #define NRF_ETM                                 NRF_CELLDSP_ETM
  #define NRF_CTI1                                NRF_CELLDSP_CTI1
  #define NRF_TRACEDELAYREG                       NRF_CELLDSP_TRACEDELAYREG
  #define NRF_WIFIBFE                             NRF_CELLDSP_WIFIBFE
  #define NRF_BELLBOARD                           NRF_CELLDSP_BELLBOARD
#endif                                               /*!< NRF_CELLDSP                                                          */

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
#endif /* NRF9220_CELLDSP_H */

