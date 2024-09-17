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

#ifndef NRF7120_WIFICORE_H
#define NRF7120_WIFICORE_H

#ifdef __cplusplus
    extern "C" {
#endif


#ifdef NRF_WIFICORE

  #define NRF_DOMAIN                    NRF_DOMAIN_WIFICORE
  #define NRF_OWNER                     NRF_OWNER_APPLICATION

#endif                                               /*!< NRF_WIFICORE                                                         */


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

#define NRF_WIFICORE_LMAC_VPR_BASE        0x48000000UL
#define NRF_WIFICORE_UMAC_VPR_BASE        0x48004000UL
#define NRF_WIFICORE_MVDMA_BASE           0x48008000UL
#define NRF_WIFICORE_PCGCS_RPUAXI_BASE    0x48009000UL
#define NRF_WIFICORE_LRCCONF_LRC0_BASE    0x4800B000UL
#define NRF_WIFICORE_PCGCM_LRC0_BASE      0x4800C000UL
#define NRF_WIFICORE_RPURFBUS_BASE        0x48020000UL
#define NRF_WIFICORE_RPUMAC_BASE          0x48080000UL
#define NRF_WIFICORE_RPUPHY_BASE          0x48080000UL
#define NRF_WIFICORE_RPUSYS_BASE          0x48080000UL
#define NRF_WIFICORE_RPUQM_BASE           0x480BE000UL
#define NRF_WIFICORE_RPUHPQM_BASE         0x480BF000UL

/* =========================================================================================================================== */
/* ================                                  Peripheral Declaration                                  ================ */
/* =========================================================================================================================== */

#define NRF_WIFICORE_LMAC_VPR             ((NRF_VPR_Type*)                      NRF_WIFICORE_LMAC_VPR_BASE)
#define NRF_WIFICORE_UMAC_VPR             ((NRF_VPR_Type*)                      NRF_WIFICORE_UMAC_VPR_BASE)
#define NRF_WIFICORE_MVDMA                ((NRF_MVDMA_Type*)                    NRF_WIFICORE_MVDMA_BASE)
#define NRF_WIFICORE_PCGCS_RPUAXI         ((NRF_PCGCSLAVE_Type*)                NRF_WIFICORE_PCGCS_RPUAXI_BASE)
#define NRF_WIFICORE_LRCCONF_LRC0         ((NRF_LRCCONF_Type*)                  NRF_WIFICORE_LRCCONF_LRC0_BASE)
#define NRF_WIFICORE_PCGCM_LRC0           ((NRF_PCGCMASTER_Type*)               NRF_WIFICORE_PCGCM_LRC0_BASE)
#define NRF_WIFICORE_RPURFBUS             ((NRF_RPURFBUS_Type*)                 NRF_WIFICORE_RPURFBUS_BASE)
#define NRF_WIFICORE_RPUMAC               ((NRF_WIFIMAC_Type*)                  NRF_WIFICORE_RPUMAC_BASE)
#define NRF_WIFICORE_RPUPHY               ((NRF_WIFIPHY_Type*)                  NRF_WIFICORE_RPUPHY_BASE)
#define NRF_WIFICORE_RPUSYS               ((NRF_RPUPBUS_Type*)                  NRF_WIFICORE_RPUSYS_BASE)
#define NRF_WIFICORE_RPUQM                ((NRF_RPUQM_Type*)                    NRF_WIFICORE_RPUQM_BASE)
#define NRF_WIFICORE_RPUHPQM              ((NRF_RPUHPQM_Type*)                  NRF_WIFICORE_RPUHPQM_BASE)

/* =========================================================================================================================== */
/* ================                                  Local Domain Remapping                                  ================ */
/* =========================================================================================================================== */

#ifdef NRF_WIFICORE                                  /*!< Remap NRF_DOMAIN_X instances to NRF_X symbol for ease of use.        */
  #define NRF_LMAC_VPR                            NRF_WIFICORE_LMAC_VPR
  #define NRF_UMAC_VPR                            NRF_WIFICORE_UMAC_VPR
  #define NRF_MVDMA                               NRF_WIFICORE_MVDMA
  #define NRF_PCGCS_RPUAXI                        NRF_WIFICORE_PCGCS_RPUAXI
  #define NRF_LRCCONF_LRC0                        NRF_WIFICORE_LRCCONF_LRC0
  #define NRF_PCGCM_LRC0                          NRF_WIFICORE_PCGCM_LRC0
  #define NRF_RPURFBUS                            NRF_WIFICORE_RPURFBUS
  #define NRF_RPUMAC                              NRF_WIFICORE_RPUMAC
  #define NRF_RPUPHY                              NRF_WIFICORE_RPUPHY
  #define NRF_RPUSYS                              NRF_WIFICORE_RPUSYS
  #define NRF_RPUQM                               NRF_WIFICORE_RPUQM
  #define NRF_RPUHPQM                             NRF_WIFICORE_RPUHPQM
#endif                                               /*!< NRF_WIFICORE                                                         */

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
#endif /* NRF7120_WIFICORE_H */

