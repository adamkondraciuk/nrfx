/*

Copyright (c) 2010 - 2022, Nordic Semiconductor ASA

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

#ifndef MOONLIGHT_APPLICATION_H
#define MOONLIGHT_APPLICATION_H

#ifdef __cplusplus
    extern "C" {
#endif


#ifdef NRF_APPLICATION                               /*!< Processor information is domain local.                               */


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
  SecureFault_IRQn                       = -9,       /*!<  -9 Secure Fault Handler                                             */
  SVCall_IRQn                            = -5,       /*!<  -5 System Service Call via SVC instruction                          */
  DebugMonitor_IRQn                      = -4,       /*!<  -4 Debug Monitor                                                    */
  PendSV_IRQn                            = -2,       /*!<  -2 Pendable request for system service                              */
  SysTick_IRQn                           = -1,       /*!<  -1 System Tick Timer                                                */
/* ============================================== Processor Specific Interrupts ============================================== */
  SPU00_IRQn                             = 32,       /*!< 32 SPU00                                                             */
  MPC00_IRQn                             = 33,       /*!< 33 MPC00                                                             */
  AAR00_CCM00_IRQn                       = 38,       /*!< 38 AAR00_CCM00                                                       */
  ECB00_IRQn                             = 39,       /*!< 39 ECB00                                                             */
  CRACEN_IRQn                            = 40,       /*!< 40 CRACEN                                                            */
  SERIAL00_IRQn                          = 42,       /*!< 42 SERIAL00                                                          */
  VPR_IRQn                               = 44,       /*!< 44 VPR                                                               */
  SPU10_IRQn                             = 64,       /*!< 64 SPU10                                                             */
  TIMER10_IRQn                           = 69,       /*!< 69 TIMER10                                                           */
  RTC10_IRQn                             = 70,       /*!< 70 RTC10                                                             */
  EGU10_IRQn                             = 71,       /*!< 71 EGU10                                                             */
  AAR30_CCM30_IRQn                       = 72,       /*!< 72 AAR30_CCM30                                                       */
  ECB30_IRQn                             = 73,       /*!< 73 ECB30                                                             */
  RADIO_0_IRQn                           = 74,       /*!< 74 RADIO_0                                                           */
  RADIO_1_IRQn                           = 75,       /*!< 75 RADIO_1                                                           */
  GPIOTE20_0_IRQn                        = 104,      /*!< 104 GPIOTE20_0                                                       */
  GPIOTE20_1_IRQn                        = 105,      /*!< 105 GPIOTE20_1                                                       */
  GRTC_0_IRQn                            = 108,      /*!< 108 GRTC_0                                                           */
  GRTC_1_IRQn                            = 109,      /*!< 109 GRTC_1                                                           */
  GRTC_2_IRQn                            = 110,      /*!< 110 GRTC_2                                                           */
  SPU20_IRQn                             = 128,      /*!< 128 SPU20                                                            */
  SERIAL20_IRQn                          = 134,      /*!< 134 SERIAL20                                                         */
  SERIAL21_IRQn                          = 135,      /*!< 135 SERIAL21                                                         */
  SERIAL22_IRQn                          = 136,      /*!< 136 SERIAL22                                                         */
  EGU20_IRQn                             = 137,      /*!< 137 EGU20                                                            */
  TIMER20_IRQn                           = 138,      /*!< 138 TIMER20                                                          */
  TIMER21_IRQn                           = 139,      /*!< 139 TIMER21                                                          */
  TIMER22_IRQn                           = 140,      /*!< 140 TIMER22                                                          */
  TIMER23_IRQn                           = 141,      /*!< 141 TIMER23                                                          */
  TIMER24_IRQn                           = 142,      /*!< 142 TIMER24                                                          */
  PDM20_IRQn                             = 144,      /*!< 144 PDM20                                                            */
  PDM21_IRQn                             = 145,      /*!< 145 PDM21                                                            */
  PWM20_IRQn                             = 146,      /*!< 146 PWM20                                                            */
  PWM21_IRQn                             = 147,      /*!< 147 PWM21                                                            */
  PWM22_IRQn                             = 148,      /*!< 148 PWM22                                                            */
  SAADC_IRQn                             = 149,      /*!< 149 SAADC                                                            */
  NFCT_IRQn                              = 150,      /*!< 150 NFCT                                                             */
  TEMP_IRQn                              = 151,      /*!< 151 TEMP                                                             */
  TAMPC_IRQn                             = 155,      /*!< 155 TAMPC                                                            */
  I2S_IRQn                               = 156,      /*!< 156 I2S                                                              */
  QDEC20_IRQn                            = 160,      /*!< 160 QDEC20                                                           */
  QDEC21_IRQn                            = 161,      /*!< 161 QDEC21                                                           */
  SPU30_IRQn                             = 192,      /*!< 192 SPU30                                                            */
  SERIAL30_IRQn                          = 196,      /*!< 196 SERIAL30                                                         */
  RTC30_IRQn                             = 197,      /*!< 197 RTC30                                                            */
  COMP_IRQn                              = 198,      /*!< 198 COMP                                                             */
  LPCOMP_IRQn                            = 199,      /*!< 199 LPCOMP                                                           */
  WDT30_IRQn                             = 200,      /*!< 200 WDT30                                                            */
  WDT31_IRQn                             = 201,      /*!< 201 WDT31                                                            */
  GPIOTE30_0_IRQn                        = 203,      /*!< 203 GPIOTE30_0                                                       */
  GPIOTE30_1_IRQn                        = 204,      /*!< 204 GPIOTE30_1                                                       */
} IRQn_Type;


/* =========================================================================================================================== */
/* ================                           Processor and Core Peripheral Section                           ================ */
/* =========================================================================================================================== */

/* =========================== Configuration of the ARM Cortex-M33 Processor and Core Peripherals ============================ */
#define __CM33_REV                  r0p4             /*!< CM33 Core Revision                                                   */
#define __DSP_PRESENT                  1             /*!< DSP present or not                                                   */
#define __NVIC_PRIO_BITS               3             /*!< Number of Bits used for Priority Levels                              */
#define __VTOR_PRESENT                 1             /*!< CPU supports alternate Vector Table address                          */
#define __MPU_PRESENT                  1             /*!< MPU present                                                          */
#define __FPU_PRESENT                  1             /*!< FPU present                                                          */
#define __FPU_DP                       0             /*!< Double Precision FPU                                                 */
#define __Vendor_SysTickConfig         0             /*!< Vendor SysTick Config implementation is used                         */
#define __SAUREGION_PRESENT            0             /*!< SAU present                                                          */
#define __NUM_SAUREGIONS               0             /*!< Number of regions                                                    */

#include "core_cm33.h"                               /*!< ARM Cortex-M33 processor and core peripherals                        */
#include "system_nrf.h"                              /*!< moonlight_application System Library                                 */

#endif                                               /*!< NRF_APPLICATION                                                      */


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


/* =========================================================================================================================== */
/* ================                                  Peripheral Declaration                                  ================ */
/* =========================================================================================================================== */


/* =========================================================================================================================== */
/* ================                                    TrustZone Remapping                                    ================ */
/* =========================================================================================================================== */

#ifdef NRF_TRUSTZONE_NONSECURE                       /*!< Remap NRF_X_NS instances to NRF_X symbol for ease of use.            */
#else                                                /*!< Remap NRF_X_S instances to NRF_X symbol for ease of use.             */
#endif                                               /*!<  NRF_TRUSTZONE_NONSECURE                                             */

/* =========================================================================================================================== */
/* ================                                  Local Domain Remapping                                  ================ */
/* =========================================================================================================================== */

#ifdef NRF_APPLICATION                               /*!< Remap NRF_DOMAIN instances to NRF_X symbol for ease of use.          */
#endif                                               /*!< NRF_APPLICATION                                                      */

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
#endif /* MOONLIGHT_APPLICATION_H */

