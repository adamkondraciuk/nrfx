; Copyright (c) 2009-2022 ARM Limited. All rights reserved.
; 
;     SPDX-License-Identifier: Apache-2.0
; 
; Licensed under the Apache License, Version 2.0 (the License); you may
; not use this file except in compliance with the License.
; You may obtain a copy of the License at
; 
;     www.apache.org/licenses/LICENSE-2.0
; 
; Unless required by applicable law or agreed to in writing, software
; distributed under the License is distributed on an AS IS BASIS, WITHOUT
; WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
; See the License for the specific language governing permissions and
; limitations under the License.
; 
; NOTICE: This file has been modified by Nordic Semiconductor ASA.

; The modules in this file are included in the libraries, and may be replaced
; by any user-defined modules that define the PUBLIC symbol _program_start or
; a user defined start symbol.
; To override the cstartup defined in the library, simply add your modified
; version to the workbench project.
;
; The vector table is normally located at address 0.
; When debugging in RAM, it can be located in RAM, aligned to at least 2^6.
; The name "__vector_table" has special meaning for C-SPY:
; it is where the SP start value is found, and the NVIC vector
; table register (VTOR) is initialized to this address if != 0.

        MODULE  ?cstartup

#if defined(__STARTUP_CONFIG)

        #include "startup_config.h"

        #ifndef __STARTUP_CONFIG_STACK_ALIGNEMENT
        #define __STARTUP_CONFIG_STACK_ALIGNEMENT 3
        #endif
        
        SECTION CSTACK:DATA:NOROOT(__STARTUP_CONFIG_STACK_ALIGNEMENT)
        DS8 __STARTUP_CONFIG_STACK_SIZE

        SECTION HEAP:DATA:NOROOT(3)
        DS8 __STARTUP_CONFIG_HEAP_SIZE

#else

        ;; Stack size default : Defined in *.icf (linker file). Can be modified inside EW.
        ;; Heap size default : Defined in *.icf (linker file). Can be modified inside EW.

        ;; Forward declaration of sections.
        SECTION CSTACK:DATA:NOROOT(3)

#endif


        SECTION .intvec:CODE:NOROOT(2)

        EXTERN  __iar_program_start
        EXTERN  SystemInit
        PUBLIC  __vector_table
        PUBLIC  __Vectors
        PUBLIC  __Vectors_End
        PUBLIC  __Vectors_Size

        DATA

        ALIGN 6 ;; Align to 64 byte boundary.
__vector_table
        DCD     sfe(CSTACK)
        DCD     UserSoftware_Handler
        DCD     SuperVisorSoftware_Handler
        DCD     MachineSoftware_Handler
        DCD     0                         ; Reserved
        DCD     UserTimer_Handler
        DCD     SuperVisorTimer_Handler
        DCD     0                         ; Reserved
        DCD     MachineTimer_Handler
        DCD     UserExternal_Handler
        DCD     SuperVisorExternal_Handler
        DCD     0                         ; Reserved
        DCD     MachineExternal_Handler
        DCD     CLICSoftware_Handler
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved

        ; External Interrupts
        DCD     VPR_0_IRQHandler
        DCD     VPR_1_IRQHandler
        DCD     VPR_2_IRQHandler
        DCD     VPR_3_IRQHandler
        DCD     VPR_4_IRQHandler
        DCD     VPR_5_IRQHandler
        DCD     VPR_6_IRQHandler
        DCD     VPR_7_IRQHandler
        DCD     VPR_8_IRQHandler
        DCD     VPR_9_IRQHandler
        DCD     VPR_10_IRQHandler
        DCD     VPR_11_IRQHandler
        DCD     VPR_12_IRQHandler
        DCD     VPR_13_IRQHandler
        DCD     VPR_14_IRQHandler
        DCD     VPR_15_IRQHandler
        DCD     VPR_16_IRQHandler
        DCD     VPR_17_IRQHandler
        DCD     VPR_18_IRQHandler
        DCD     VPR_19_IRQHandler
        DCD     VPR_20_IRQHandler
        DCD     VPR_21_IRQHandler
        DCD     VPR_22_IRQHandler
        DCD     VPR_23_IRQHandler
        DCD     VPR_24_IRQHandler
        DCD     VPR_25_IRQHandler
        DCD     VPR_26_IRQHandler
        DCD     VPR_27_IRQHandler
        DCD     VPR_28_IRQHandler
        DCD     VPR_29_IRQHandler
        DCD     VPR_30_IRQHandler
        DCD     VPR_31_IRQHandler
        DCD     SPU00_IRQHandler
        DCD     MPC00_IRQHandler
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     AAR00_CCM00_IRQHandler
        DCD     ECB00_IRQHandler
        DCD     CRACEN_IRQHandler
        DCD     0                         ; Reserved
        DCD     SERIAL00_IRQHandler
        DCD     0                         ; Reserved
        DCD     VPR_IRQHandler
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     SPU10_IRQHandler
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     TIMER10_IRQHandler
        DCD     RTC10_IRQHandler
        DCD     EGU10_IRQHandler
        DCD     AAR30_CCM30_IRQHandler
        DCD     ECB30_IRQHandler
        DCD     RADIO_0_IRQHandler
        DCD     RADIO_1_IRQHandler
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     GPIOTE20_0_IRQHandler
        DCD     GPIOTE20_1_IRQHandler
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     GRTC_0_IRQHandler
        DCD     GRTC_1_IRQHandler
        DCD     GRTC_2_IRQHandler
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     SPU20_IRQHandler
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     SERIAL20_IRQHandler
        DCD     SERIAL21_IRQHandler
        DCD     SERIAL22_IRQHandler
        DCD     EGU20_IRQHandler
        DCD     TIMER20_IRQHandler
        DCD     TIMER21_IRQHandler
        DCD     TIMER22_IRQHandler
        DCD     TIMER23_IRQHandler
        DCD     TIMER24_IRQHandler
        DCD     0                         ; Reserved
        DCD     PDM20_IRQHandler
        DCD     PDM21_IRQHandler
        DCD     PWM20_IRQHandler
        DCD     PWM21_IRQHandler
        DCD     PWM22_IRQHandler
        DCD     SAADC_IRQHandler
        DCD     NFCT_IRQHandler
        DCD     TEMP_IRQHandler
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     TAMPC_IRQHandler
        DCD     I2S_IRQHandler
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     QDEC20_IRQHandler
        DCD     QDEC21_IRQHandler
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     SPU30_IRQHandler
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     SERIAL30_IRQHandler
        DCD     RTC30_IRQHandler
        DCD     COMP_IRQHandler
        DCD     LPCOMP_IRQHandler
        DCD     WDT30_IRQHandler
        DCD     WDT31_IRQHandler
        DCD     0                         ; Reserved
        DCD     GPIOTE30_0_IRQHandler
        DCD     GPIOTE30_1_IRQHandler
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved

__Vectors_End
__Vectors                           EQU   __vector_table
__Vectors_Size                      EQU   __Vectors_End - __Vectors


; Default handlers.
        PUBWEAK Reset_Handler
        SECTION .text:CODE:REORDER:NOROOT(2)
Reset_Handler

    jal ra, SystemInit
    j __iar_program_start

        ; Dummy exception handlers


        PUBWEAK UserSoftware_Handler
        SECTION .text:CODE:REORDER:NOROOT(1)
UserSoftware_Handler
        j .

        PUBWEAK SuperVisorSoftware_Handler
        SECTION .text:CODE:REORDER:NOROOT(1)
SuperVisorSoftware_Handler
        j .

        PUBWEAK MachineSoftware_Handler
        SECTION .text:CODE:REORDER:NOROOT(1)
MachineSoftware_Handler
        j .

        PUBWEAK UserTimer_Handler
        SECTION .text:CODE:REORDER:NOROOT(1)
UserTimer_Handler
        j .

        PUBWEAK SuperVisorTimer_Handler
        SECTION .text:CODE:REORDER:NOROOT(1)
SuperVisorTimer_Handler
        j .

        PUBWEAK MachineTimer_Handler
        SECTION .text:CODE:REORDER:NOROOT(1)
MachineTimer_Handler
        j .

        PUBWEAK UserExternal_Handler
        SECTION .text:CODE:REORDER:NOROOT(1)
UserExternal_Handler
        j .

        PUBWEAK SuperVisorExternal_Handler
        SECTION .text:CODE:REORDER:NOROOT(1)
SuperVisorExternal_Handler
        j .

        PUBWEAK MachineExternal_Handler
        SECTION .text:CODE:REORDER:NOROOT(1)
MachineExternal_Handler
        j .

        PUBWEAK CLICSoftware_Handler
        SECTION .text:CODE:REORDER:NOROOT(1)
CLICSoftware_Handler
        j .


       ; Dummy interrupt handlers

        PUBWEAK  VPR_0_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VPR_0_IRQHandler
        j .

        PUBWEAK  VPR_1_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VPR_1_IRQHandler
        j .

        PUBWEAK  VPR_2_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VPR_2_IRQHandler
        j .

        PUBWEAK  VPR_3_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VPR_3_IRQHandler
        j .

        PUBWEAK  VPR_4_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VPR_4_IRQHandler
        j .

        PUBWEAK  VPR_5_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VPR_5_IRQHandler
        j .

        PUBWEAK  VPR_6_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VPR_6_IRQHandler
        j .

        PUBWEAK  VPR_7_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VPR_7_IRQHandler
        j .

        PUBWEAK  VPR_8_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VPR_8_IRQHandler
        j .

        PUBWEAK  VPR_9_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VPR_9_IRQHandler
        j .

        PUBWEAK  VPR_10_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VPR_10_IRQHandler
        j .

        PUBWEAK  VPR_11_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VPR_11_IRQHandler
        j .

        PUBWEAK  VPR_12_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VPR_12_IRQHandler
        j .

        PUBWEAK  VPR_13_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VPR_13_IRQHandler
        j .

        PUBWEAK  VPR_14_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VPR_14_IRQHandler
        j .

        PUBWEAK  VPR_15_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VPR_15_IRQHandler
        j .

        PUBWEAK  VPR_16_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VPR_16_IRQHandler
        j .

        PUBWEAK  VPR_17_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VPR_17_IRQHandler
        j .

        PUBWEAK  VPR_18_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VPR_18_IRQHandler
        j .

        PUBWEAK  VPR_19_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VPR_19_IRQHandler
        j .

        PUBWEAK  VPR_20_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VPR_20_IRQHandler
        j .

        PUBWEAK  VPR_21_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VPR_21_IRQHandler
        j .

        PUBWEAK  VPR_22_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VPR_22_IRQHandler
        j .

        PUBWEAK  VPR_23_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VPR_23_IRQHandler
        j .

        PUBWEAK  VPR_24_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VPR_24_IRQHandler
        j .

        PUBWEAK  VPR_25_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VPR_25_IRQHandler
        j .

        PUBWEAK  VPR_26_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VPR_26_IRQHandler
        j .

        PUBWEAK  VPR_27_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VPR_27_IRQHandler
        j .

        PUBWEAK  VPR_28_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VPR_28_IRQHandler
        j .

        PUBWEAK  VPR_29_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VPR_29_IRQHandler
        j .

        PUBWEAK  VPR_30_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VPR_30_IRQHandler
        j .

        PUBWEAK  VPR_31_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VPR_31_IRQHandler
        j .

        PUBWEAK  SPU00_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
SPU00_IRQHandler
        j .

        PUBWEAK  MPC00_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
MPC00_IRQHandler
        j .

        PUBWEAK  AAR00_CCM00_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
AAR00_CCM00_IRQHandler
        j .

        PUBWEAK  ECB00_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
ECB00_IRQHandler
        j .

        PUBWEAK  CRACEN_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
CRACEN_IRQHandler
        j .

        PUBWEAK  SERIAL00_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
SERIAL00_IRQHandler
        j .

        PUBWEAK  VPR_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VPR_IRQHandler
        j .

        PUBWEAK  SPU10_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
SPU10_IRQHandler
        j .

        PUBWEAK  TIMER10_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
TIMER10_IRQHandler
        j .

        PUBWEAK  RTC10_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
RTC10_IRQHandler
        j .

        PUBWEAK  EGU10_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
EGU10_IRQHandler
        j .

        PUBWEAK  AAR30_CCM30_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
AAR30_CCM30_IRQHandler
        j .

        PUBWEAK  ECB30_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
ECB30_IRQHandler
        j .

        PUBWEAK  RADIO_0_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
RADIO_0_IRQHandler
        j .

        PUBWEAK  RADIO_1_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
RADIO_1_IRQHandler
        j .

        PUBWEAK  GPIOTE20_0_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GPIOTE20_0_IRQHandler
        j .

        PUBWEAK  GPIOTE20_1_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GPIOTE20_1_IRQHandler
        j .

        PUBWEAK  GRTC_0_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GRTC_0_IRQHandler
        j .

        PUBWEAK  GRTC_1_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GRTC_1_IRQHandler
        j .

        PUBWEAK  GRTC_2_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GRTC_2_IRQHandler
        j .

        PUBWEAK  SPU20_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
SPU20_IRQHandler
        j .

        PUBWEAK  SERIAL20_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
SERIAL20_IRQHandler
        j .

        PUBWEAK  SERIAL21_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
SERIAL21_IRQHandler
        j .

        PUBWEAK  SERIAL22_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
SERIAL22_IRQHandler
        j .

        PUBWEAK  EGU20_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
EGU20_IRQHandler
        j .

        PUBWEAK  TIMER20_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
TIMER20_IRQHandler
        j .

        PUBWEAK  TIMER21_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
TIMER21_IRQHandler
        j .

        PUBWEAK  TIMER22_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
TIMER22_IRQHandler
        j .

        PUBWEAK  TIMER23_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
TIMER23_IRQHandler
        j .

        PUBWEAK  TIMER24_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
TIMER24_IRQHandler
        j .

        PUBWEAK  PDM20_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
PDM20_IRQHandler
        j .

        PUBWEAK  PDM21_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
PDM21_IRQHandler
        j .

        PUBWEAK  PWM20_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
PWM20_IRQHandler
        j .

        PUBWEAK  PWM21_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
PWM21_IRQHandler
        j .

        PUBWEAK  PWM22_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
PWM22_IRQHandler
        j .

        PUBWEAK  SAADC_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
SAADC_IRQHandler
        j .

        PUBWEAK  NFCT_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
NFCT_IRQHandler
        j .

        PUBWEAK  TEMP_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
TEMP_IRQHandler
        j .

        PUBWEAK  TAMPC_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
TAMPC_IRQHandler
        j .

        PUBWEAK  I2S_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
I2S_IRQHandler
        j .

        PUBWEAK  QDEC20_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
QDEC20_IRQHandler
        j .

        PUBWEAK  QDEC21_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
QDEC21_IRQHandler
        j .

        PUBWEAK  SPU30_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
SPU30_IRQHandler
        j .

        PUBWEAK  SERIAL30_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
SERIAL30_IRQHandler
        j .

        PUBWEAK  RTC30_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
RTC30_IRQHandler
        j .

        PUBWEAK  COMP_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
COMP_IRQHandler
        j .

        PUBWEAK  LPCOMP_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
LPCOMP_IRQHandler
        j .

        PUBWEAK  WDT30_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
WDT30_IRQHandler
        j .

        PUBWEAK  WDT31_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
WDT31_IRQHandler
        j .

        PUBWEAK  GPIOTE30_0_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GPIOTE30_0_IRQHandler
        j .

        PUBWEAK  GPIOTE30_1_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GPIOTE30_1_IRQHandler
        j .

        END


