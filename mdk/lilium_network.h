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

#ifndef LILIUM_NETWORK_H
#define LILIUM_NETWORK_H

#ifdef __cplusplus
    extern "C" {
#endif


#ifdef NRF_NETWORK                                   /*!< Processor information is domain local.                               */


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
  SVCall_IRQn                            = -5,       /*!<  -5 System Service Call via SVC instruction                          */
  DebugMonitor_IRQn                      = -4,       /*!<  -4 Debug Monitor                                                    */
  PendSV_IRQn                            = -2,       /*!<  -2 Pendable request for system service                              */
  SysTick_IRQn                           = -1,       /*!<  -1 System Tick Timer                                                */
/* ============================================== Processor Specific Interrupts ============================================== */
  RADIO0_IRQn                            = 8,        /*!< 8 RADIO0                                                             */
  RADIO1_IRQn                            = 9,        /*!< 9 RADIO1                                                             */
  ECB_IRQn                               = 13,       /*!< 13 ECB                                                               */
  AAR_CCM_IRQn                           = 14,       /*!< 14 AAR_CCM                                                           */
  TEMP_IRQn                              = 16,       /*!< 16 TEMP                                                              */
  COMP_IRQn                              = 26,       /*!< 26 COMP                                                              */
  SAADC_IRQn                             = 28,       /*!< 28 SAADC                                                             */
} IRQn_Type;


/* =========================================================================================================================== */
/* ================                           Processor and Core Peripheral Section                           ================ */
/* =========================================================================================================================== */

/* =========================== Configuration of the ARM Cortex-M33 Processor and Core Peripherals ============================ */
#define __CM33_REV                  r0p4             /*!< CM33 Core Revision                                                   */
#define __DSP_PRESENT                  0             /*!< DSP present or not                                                   */
#define __NVIC_PRIO_BITS               3             /*!< Number of Bits used for Priority Levels                              */
#define __VTOR_PRESENT                 1             /*!< CPU supports alternate Vector Table address                          */
#define __MPU_PRESENT                  1             /*!< MPU present                                                          */
#define __FPU_PRESENT                  0             /*!< FPU present                                                          */
#define __FPU_DP                       0             /*!< Double Precision FPU                                                 */
#define __Vendor_SysTickConfig         0             /*!< Vendor SysTick Config implementation is used                         */
#define __SAU_REGION_PRESENT           0             /*!< SAU present                                                          */

#include "core_cm33.h"                               /*!< ARM Cortex-M33 processor and core peripherals                        */
#include "system_lilium_network.h"                   /*!< lilium_network System Library                                        */

#endif                                               /*!< NRF_NETWORK                                                          */


/* ========================================= Start of section using anonymous unions ========================================= */

#include "compiler_abstraction.h"

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
#else
  #warning Unsupported compiler type
#endif

/* =========================================================================================================================== */
/* ================                                  Peripheral Address Map                                  ================ */
/* =========================================================================================================================== */

#define NRF_NETWORK_RADIO_BASE            0x41008000UL
#define NRF_NETWORK_ECB_BASE              0x4100D000UL
#define NRF_NETWORK_AAR_BASE              0x4100E000UL
#define NRF_NETWORK_CCM_BASE              0x4100E000UL
#define NRF_NETWORK_TEMP_BASE             0x41010000UL
#define NRF_NETWORK_ANACONF_BASE          0x41015000UL
#define NRF_NETWORK_COMP_BASE             0x4101A000UL
#define NRF_NETWORK_SAADC_BASE            0x4101C000UL
#define NRF_NETWORK_GPIOINTERNAL_BASE     0x418C0500UL
#define NRF_NETWORK_P0_BASE               0x418C0500UL

/* =========================================================================================================================== */
/* ================                                  Peripheral Declaration                                  ================ */
/* =========================================================================================================================== */

#define NRF_NETWORK_RADIO                 ((NRF_RADIO_Type*)                    NRF_NETWORK_RADIO_BASE)
#define NRF_NETWORK_ECB                   ((NRF_ECB_Type*)                      NRF_NETWORK_ECB_BASE)
#define NRF_NETWORK_AAR                   ((NRF_AAR_Type*)                      NRF_NETWORK_AAR_BASE)
#define NRF_NETWORK_CCM                   ((NRF_CCM_Type*)                      NRF_NETWORK_CCM_BASE)
#define NRF_NETWORK_TEMP                  ((NRF_TEMP_Type*)                     NRF_NETWORK_TEMP_BASE)
#define NRF_NETWORK_ANACONF               ((NRF_ANACONF_Type*)                  NRF_NETWORK_ANACONF_BASE)
#define NRF_NETWORK_COMP                  ((NRF_COMP_Type*)                     NRF_NETWORK_COMP_BASE)
#define NRF_NETWORK_SAADC                 ((NRF_SAADC_Type*)                    NRF_NETWORK_SAADC_BASE)
#define NRF_NETWORK_GPIOINTERNAL          ((NRF_GPIOSTATIC_Type*)               NRF_NETWORK_GPIOINTERNAL_BASE)
#define NRF_NETWORK_P0                    ((NRF_GPIO_Type*)                     NRF_NETWORK_P0_BASE)

/* =========================================================================================================================== */
/* ================                                  Local Domain Remapping                                  ================ */
/* =========================================================================================================================== */

#ifdef NRF_NETWORK                                   /*!< Remap NRF_DOMAIN instances to NRF_X symbol for ease of use.          */
  #define NRF_RADIO                               NRF_NETWORK_RADIO
  #define NRF_ECB                                 NRF_NETWORK_ECB
  #define NRF_AAR                                 NRF_NETWORK_AAR
  #define NRF_CCM                                 NRF_NETWORK_CCM
  #define NRF_TEMP                                NRF_NETWORK_TEMP
  #define NRF_ANACONF                             NRF_NETWORK_ANACONF
  #define NRF_COMP                                NRF_NETWORK_COMP
  #define NRF_SAADC                               NRF_NETWORK_SAADC
  #define NRF_GPIOINTERNAL                        NRF_NETWORK_GPIOINTERNAL
  #define NRF_P0                                  NRF_NETWORK_P0
#endif                                               /*!< NRF_NETWORK                                                          */

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
#endif /* LILIUM_NETWORK_H */

