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

#ifndef NRF7120_UMAC_H
#define NRF7120_UMAC_H

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
  UMACCLIC_16_IRQn                       = 21,       /*!< 21 UMACCLIC_16                                                       */
  UMACCLIC_17_IRQn                       = 22,       /*!< 22 UMACCLIC_17                                                       */
  UMACCLIC_18_IRQn                       = 23,       /*!< 23 UMACCLIC_18                                                       */
  UMACCLIC_19_IRQn                       = 24,       /*!< 24 UMACCLIC_19                                                       */
  UMACCLIC_20_IRQn                       = 25,       /*!< 25 UMACCLIC_20                                                       */
  UMACCLIC_21_IRQn                       = 26,       /*!< 26 UMACCLIC_21                                                       */
  UMACCLIC_22_IRQn                       = 27,       /*!< 27 UMACCLIC_22                                                       */
  UMACCLIC_23_IRQn                       = 28,       /*!< 28 UMACCLIC_23                                                       */
  UMACCLIC_24_IRQn                       = 29,       /*!< 29 UMACCLIC_24                                                       */
  UMACCLIC_25_IRQn                       = 30,       /*!< 30 UMACCLIC_25                                                       */
  UMACCLIC_26_IRQn                       = 31,       /*!< 31 UMACCLIC_26                                                       */
  RPU_0_IRQn                             = 32,       /*!< 32 RPU_0                                                             */
  RPU_1_IRQn                             = 33,       /*!< 33 RPU_1                                                             */
  RPU_2_IRQn                             = 34,       /*!< 34 RPU_2                                                             */
  RPU_3_IRQn                             = 35,       /*!< 35 RPU_3                                                             */
  RPU_EFS_0_IRQn                         = 36,       /*!< 36 RPU_EFS_0                                                         */
  RPU_EFS_1_IRQn                         = 37,       /*!< 37 RPU_EFS_1                                                         */
  LMAC_VPR_IRQn                          = 40,       /*!< 40 LMAC_VPR                                                          */
  MVDMA_IRQn                             = 48,       /*!< 48 MVDMA                                                             */
  SERIAL00_IRQn                          = 77,       /*!< 77 SERIAL00                                                          */
  BELLBOARD_WIFI_2_IRQn                  = 118,      /*!< 118 BELLBOARD_WIFI_2                                                 */
  BELLBOARD_WIFI_3_IRQn                  = 119,      /*!< 119 BELLBOARD_WIFI_3                                                 */
  SERIAL20_IRQn                          = 198,      /*!< 198 SERIAL20                                                         */
  SERIAL21_IRQn                          = 199,      /*!< 199 SERIAL21                                                         */
  SERIAL22_IRQn                          = 200,      /*!< 200 SERIAL22                                                         */
  GRTC_5_IRQn                            = 231,      /*!< 231 GRTC_5                                                           */
  SERIAL23_IRQn                          = 237,      /*!< 237 SERIAL23                                                         */
  SERIAL24_IRQn                          = 238,      /*!< 238 SERIAL24                                                         */
  SERIAL30_IRQn                          = 260,      /*!< 260 SERIAL30                                                         */
} IRQn_Type;

/* ==================================================== Interrupt Aliases ==================================================== */
#define UARTE00_IRQn                  SERIAL00_IRQn
#define UARTE00_IRQHandler            SERIAL00_IRQHandler
#define UARTE20_IRQn                  SERIAL20_IRQn
#define UARTE20_IRQHandler            SERIAL20_IRQHandler
#define UARTE21_IRQn                  SERIAL21_IRQn
#define UARTE21_IRQHandler            SERIAL21_IRQHandler
#define UARTE22_IRQn                  SERIAL22_IRQn
#define UARTE22_IRQHandler            SERIAL22_IRQHandler
#define UARTE23_IRQn                  SERIAL23_IRQn
#define UARTE23_IRQHandler            SERIAL23_IRQHandler
#define UARTE24_IRQn                  SERIAL24_IRQn
#define UARTE24_IRQHandler            SERIAL24_IRQHandler
#define UARTE30_IRQn                  SERIAL30_IRQn
#define UARTE30_IRQHandler            SERIAL30_IRQHandler

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
#include "system_nrf.h"                              /*!< nrf7120_umac System Library                                          */

#endif                                               /*!< NRF_UMAC                                                             */


#ifdef NRF_UMAC

  #define NRF_DOMAIN                    NRF_DOMAIN_WIFICORE
  #define NRF_PROCESSOR                 NRF_PROCESSOR_UMAC
  #define NRF_OWNER                     NRF_OWNER_APPLICATION

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

#define NRF_UMAC_UMACCLIC_BASE            0xF0000000UL

/* =========================================================================================================================== */
/* ================                                  Peripheral Declaration                                  ================ */
/* =========================================================================================================================== */

#define NRF_UMAC_UMACCLIC                 ((NRF_CLIC_Type*)                     NRF_UMAC_UMACCLIC_BASE)

/* =========================================================================================================================== */
/* ================                                  Local Domain Remapping                                  ================ */
/* =========================================================================================================================== */

#ifdef NRF_UMAC                                      /*!< Remap NRF_DOMAIN_X instances to NRF_X symbol for ease of use.        */
  #define NRF_UMACCLIC                            NRF_UMAC_UMACCLIC
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
#endif /* NRF7120_UMAC_H */

