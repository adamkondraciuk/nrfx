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

#ifndef NRF7140_ML_H
#define NRF7140_ML_H

#ifdef __cplusplus
    extern "C" {
#endif


#ifdef NRF_ML

  #define NRF_DOMAIN                    NRF_DOMAIN_ML
  #define NRF_OWNER                     NRF_OWNER_APPLICATION

#endif                                               /*!< NRF_ML                                                               */


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

#define NRF_ML_MPC_BASE                   0x4A001000UL
#define NRF_ML_DPPR_BASE                  0x4A002000UL
#define NRF_ML_MVDMA_BASE                 0x4A003000UL
#define NRF_ML_AXONS_BASE                 0x4A004000UL
#define NRF_ML_CTI_BASE                   0x4A00B000UL
#define NRF_ML_PCGCS000_BASE              0x4A00C000UL
#define NRF_ML_HSFLL_BASE                 0x4A00D000UL
#define NRF_ML_LRCCONF000_BASE            0x4A00E000UL
#define NRF_ML_PCGCM000_BASE              0x4A00F000UL
#define NRF_ML_MEMCONF_BASE               0x4A011000UL
#define NRF_ML_IPCT_BASE                  0x4A012000UL
#define NRF_ML_WDT010_BASE                0x4A013000UL
#define NRF_ML_PCGCS010_BASE              0x4A01B000UL
#define NRF_ML_ABB_BASE                   0x4A01C000UL
#define NRF_ML_LRCCONF010_BASE            0x4A01E000UL
#define NRF_ML_PCGCM010_BASE              0x4A01F000UL
#define NRF_ML_BELLBOARD_BASE             0x4F09D000UL

/* =========================================================================================================================== */
/* ================                                  Peripheral Declaration                                  ================ */
/* =========================================================================================================================== */

#define NRF_ML_MPC                        ((NRF_MPC_Type*)                      NRF_ML_MPC_BASE)
#define NRF_ML_DPPR                       ((NRF_VPR_Type*)                      NRF_ML_DPPR_BASE)
#define NRF_ML_MVDMA                      ((NRF_MVDMA_Type*)                    NRF_ML_MVDMA_BASE)
#define NRF_ML_AXONS                      ((NRF_AXONS_Type*)                    NRF_ML_AXONS_BASE)
#define NRF_ML_CTI                        ((NRF_CTI_Type*)                      NRF_ML_CTI_BASE)
#define NRF_ML_PCGCS000                   ((NRF_PCGCSLAVE_Type*)                NRF_ML_PCGCS000_BASE)
#define NRF_ML_HSFLL                      ((NRF_HSFLL_Type*)                    NRF_ML_HSFLL_BASE)
#define NRF_ML_LRCCONF000                 ((NRF_LRCCONF_Type*)                  NRF_ML_LRCCONF000_BASE)
#define NRF_ML_PCGCM000                   ((NRF_PCGCMASTER_Type*)               NRF_ML_PCGCM000_BASE)
#define NRF_ML_MEMCONF                    ((NRF_MEMCONF_Type*)                  NRF_ML_MEMCONF_BASE)
#define NRF_ML_IPCT                       ((NRF_IPCT_Type*)                     NRF_ML_IPCT_BASE)
#define NRF_ML_WDT010                     ((NRF_WDT_Type*)                      NRF_ML_WDT010_BASE)
#define NRF_ML_PCGCS010                   ((NRF_PCGCSLAVE_Type*)                NRF_ML_PCGCS010_BASE)
#define NRF_ML_ABB                        ((NRF_ABB_Type*)                      NRF_ML_ABB_BASE)
#define NRF_ML_LRCCONF010                 ((NRF_LRCCONF_Type*)                  NRF_ML_LRCCONF010_BASE)
#define NRF_ML_PCGCM010                   ((NRF_PCGCMASTER_Type*)               NRF_ML_PCGCM010_BASE)
#define NRF_ML_BELLBOARD                  ((NRF_BELLBOARD_Type*)                NRF_ML_BELLBOARD_BASE)

/* =========================================================================================================================== */
/* ================                                  Local Domain Remapping                                  ================ */
/* =========================================================================================================================== */

#ifdef NRF_ML                                        /*!< Remap NRF_DOMAIN_X instances to NRF_X symbol for ease of use.        */
  #define NRF_MPC                                 NRF_ML_MPC
  #define NRF_DPPR                                NRF_ML_DPPR
  #define NRF_MVDMA                               NRF_ML_MVDMA
  #define NRF_AXONS                               NRF_ML_AXONS
  #define NRF_CTI                                 NRF_ML_CTI
  #define NRF_PCGCS000                            NRF_ML_PCGCS000
  #define NRF_HSFLL                               NRF_ML_HSFLL
  #define NRF_LRCCONF000                          NRF_ML_LRCCONF000
  #define NRF_PCGCM000                            NRF_ML_PCGCM000
  #define NRF_MEMCONF                             NRF_ML_MEMCONF
  #define NRF_IPCT                                NRF_ML_IPCT
  #define NRF_WDT010                              NRF_ML_WDT010
  #define NRF_PCGCS010                            NRF_ML_PCGCS010
  #define NRF_ABB                                 NRF_ML_ABB
  #define NRF_LRCCONF010                          NRF_ML_LRCCONF010
  #define NRF_PCGCM010                            NRF_ML_PCGCM010
  #define NRF_BELLBOARD                           NRF_ML_BELLBOARD
#endif                                               /*!< NRF_ML                                                               */

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
#endif /* NRF7140_ML_H */

