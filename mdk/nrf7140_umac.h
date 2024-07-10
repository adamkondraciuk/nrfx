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
  GRTC_0_IRQn                            = 108,      /*!< 108 GRTC_0                                                           */
  UARTE120_IRQn                          = 230,      /*!< 230 UARTE120                                                         */
  SERIAL0_IRQn                           = 421,      /*!< 421 SERIAL0                                                          */
  SERIAL1_IRQn                           = 422,      /*!< 422 SERIAL1                                                          */
  SERIAL2_IRQn                           = 437,      /*!< 437 SERIAL2                                                          */
  SERIAL3_IRQn                           = 438,      /*!< 438 SERIAL3                                                          */
  SERIAL4_IRQn                           = 453,      /*!< 453 SERIAL4                                                          */
  SERIAL5_IRQn                           = 454,      /*!< 454 SERIAL5                                                          */
  SERIAL6_IRQn                           = 469,      /*!< 469 SERIAL6                                                          */
  SERIAL7_IRQn                           = 470,      /*!< 470 SERIAL7                                                          */
} IRQn_Type;

/* ==================================================== Interrupt Aliases ==================================================== */
#define UARTE130_IRQn                 SERIAL0_IRQn
#define UARTE130_IRQHandler           SERIAL0_IRQHandler
#define UARTE131_IRQn                 SERIAL1_IRQn
#define UARTE131_IRQHandler           SERIAL1_IRQHandler
#define UARTE132_IRQn                 SERIAL2_IRQn
#define UARTE132_IRQHandler           SERIAL2_IRQHandler
#define UARTE133_IRQn                 SERIAL3_IRQn
#define UARTE133_IRQHandler           SERIAL3_IRQHandler
#define UARTE134_IRQn                 SERIAL4_IRQn
#define UARTE134_IRQHandler           SERIAL4_IRQHandler
#define UARTE135_IRQn                 SERIAL5_IRQn
#define UARTE135_IRQHandler           SERIAL5_IRQHandler
#define UARTE136_IRQn                 SERIAL6_IRQn
#define UARTE136_IRQHandler           SERIAL6_IRQHandler
#define UARTE137_IRQn                 SERIAL7_IRQn
#define UARTE137_IRQHandler           SERIAL7_IRQHandler

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

