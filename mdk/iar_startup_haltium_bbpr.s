; Copyright (c) 2009-2021 ARM Limited. All rights reserved.
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
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
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
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     GPIOTE1300_IRQHandler
        DCD     GPIOTE1301_IRQHandler
        DCD     GPIOTE1310_IRQHandler
        DCD     GPIOTE1311_IRQHandler
        DCD     GRTC0_IRQHandler
        DCD     GRTC1_IRQHandler
        DCD     GRTC2_IRQHandler
        DCD     GRTC3_IRQHandler
        DCD     GRTC4_IRQHandler
        DCD     GRTC5_IRQHandler
        DCD     GRTC6_IRQHandler
        DCD     GRTC7_IRQHandler
        DCD     GRTC8_IRQHandler
        DCD     GRTC9_IRQHandler
        DCD     GRTC10_IRQHandler
        DCD     GRTC11_IRQHandler
        DCD     GRTC12_IRQHandler
        DCD     GRTC13_IRQHandler
        DCD     GRTC14_IRQHandler
        DCD     GRTC15_IRQHandler
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     USBHS_IRQHandler
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     IPCT1200_IRQHandler
        DCD     0                         ; Reserved
        DCD     I3C120_IRQHandler
        DCD     I3C121_IRQHandler
        DCD     CAN_IRQHandler
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     TIMER120_IRQHandler
        DCD     TIMER121_IRQHandler
        DCD     PWM120_IRQHandler
        DCD     SPIS120_IRQHandler
        DCD     SPIM120_IRQHandler
        DCD     SPIM121_IRQHandler
        DCD     TWIM120_IRQHandler
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     IPCT1300_IRQHandler
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     RTC130_IRQHandler
        DCD     RTC131_IRQHandler
        DCD     0                         ; Reserved
        DCD     WDT131_IRQHandler
        DCD     WDT132_IRQHandler
        DCD     EGU130_IRQHandler
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     SAADC_IRQHandler
        DCD     COMP_LPCOMP_IRQHandler
        DCD     TEMP_IRQHandler
        DCD     NFCT_IRQHandler
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     I2S130_IRQHandler
        DCD     PDM_IRQHandler
        DCD     QDEC130_IRQHandler
        DCD     QDEC131_IRQHandler
        DCD     SIMIF_IRQHandler
        DCD     I2S131_IRQHandler
        DCD     MIPIRFFE_IRQHandler
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     TIMER130_IRQHandler
        DCD     TIMER131_IRQHandler
        DCD     PWM130_IRQHandler
        DCD     SERIAL0_IRQHandler
        DCD     SERIAL1_IRQHandler
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     TIMER132_IRQHandler
        DCD     TIMER133_IRQHandler
        DCD     PWM131_IRQHandler
        DCD     SERIAL2_IRQHandler
        DCD     SERIAL3_IRQHandler
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     TIMER134_IRQHandler
        DCD     TIMER135_IRQHandler
        DCD     PWM132_IRQHandler
        DCD     SERIAL4_IRQHandler
        DCD     SERIAL5_IRQHandler
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     TIMER136_IRQHandler
        DCD     TIMER137_IRQHandler
        DCD     PWM133_IRQHandler
        DCD     SERIAL6_IRQHandler
        DCD     SERIAL7_IRQHandler
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

        PUBWEAK  VPR_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VPR_IRQHandler
        j .

        PUBWEAK  GPIOTE1300_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GPIOTE1300_IRQHandler
        j .

        PUBWEAK  GPIOTE1301_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GPIOTE1301_IRQHandler
        j .

        PUBWEAK  GPIOTE1310_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GPIOTE1310_IRQHandler
        j .

        PUBWEAK  GPIOTE1311_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GPIOTE1311_IRQHandler
        j .

        PUBWEAK  GRTC0_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GRTC0_IRQHandler
        j .

        PUBWEAK  GRTC1_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GRTC1_IRQHandler
        j .

        PUBWEAK  GRTC2_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GRTC2_IRQHandler
        j .

        PUBWEAK  GRTC3_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GRTC3_IRQHandler
        j .

        PUBWEAK  GRTC4_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GRTC4_IRQHandler
        j .

        PUBWEAK  GRTC5_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GRTC5_IRQHandler
        j .

        PUBWEAK  GRTC6_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GRTC6_IRQHandler
        j .

        PUBWEAK  GRTC7_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GRTC7_IRQHandler
        j .

        PUBWEAK  GRTC8_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GRTC8_IRQHandler
        j .

        PUBWEAK  GRTC9_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GRTC9_IRQHandler
        j .

        PUBWEAK  GRTC10_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GRTC10_IRQHandler
        j .

        PUBWEAK  GRTC11_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GRTC11_IRQHandler
        j .

        PUBWEAK  GRTC12_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GRTC12_IRQHandler
        j .

        PUBWEAK  GRTC13_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GRTC13_IRQHandler
        j .

        PUBWEAK  GRTC14_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GRTC14_IRQHandler
        j .

        PUBWEAK  GRTC15_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GRTC15_IRQHandler
        j .

        PUBWEAK  USBHS_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
USBHS_IRQHandler
        j .

        PUBWEAK  IPCT1200_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
IPCT1200_IRQHandler
        j .

        PUBWEAK  I3C120_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
I3C120_IRQHandler
        j .

        PUBWEAK  I3C121_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
I3C121_IRQHandler
        j .

        PUBWEAK  CAN_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
CAN_IRQHandler
        j .

        PUBWEAK  TIMER120_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
TIMER120_IRQHandler
        j .

        PUBWEAK  TIMER121_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
TIMER121_IRQHandler
        j .

        PUBWEAK  PWM120_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
PWM120_IRQHandler
        j .

        PUBWEAK  SPIS120_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
SPIS120_IRQHandler
        j .

        PUBWEAK  SPIM120_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
SPIM120_IRQHandler
        j .

        PUBWEAK  SPIM121_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
SPIM121_IRQHandler
        j .

        PUBWEAK  TWIM120_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
TWIM120_IRQHandler
        j .

        PUBWEAK  IPCT1300_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
IPCT1300_IRQHandler
        j .

        PUBWEAK  RTC130_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
RTC130_IRQHandler
        j .

        PUBWEAK  RTC131_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
RTC131_IRQHandler
        j .

        PUBWEAK  WDT131_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
WDT131_IRQHandler
        j .

        PUBWEAK  WDT132_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
WDT132_IRQHandler
        j .

        PUBWEAK  EGU130_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
EGU130_IRQHandler
        j .

        PUBWEAK  SAADC_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
SAADC_IRQHandler
        j .

        PUBWEAK  COMP_LPCOMP_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
COMP_LPCOMP_IRQHandler
        j .

        PUBWEAK  TEMP_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
TEMP_IRQHandler
        j .

        PUBWEAK  NFCT_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
NFCT_IRQHandler
        j .

        PUBWEAK  I2S130_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
I2S130_IRQHandler
        j .

        PUBWEAK  PDM_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
PDM_IRQHandler
        j .

        PUBWEAK  QDEC130_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
QDEC130_IRQHandler
        j .

        PUBWEAK  QDEC131_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
QDEC131_IRQHandler
        j .

        PUBWEAK  SIMIF_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
SIMIF_IRQHandler
        j .

        PUBWEAK  I2S131_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
I2S131_IRQHandler
        j .

        PUBWEAK  MIPIRFFE_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
MIPIRFFE_IRQHandler
        j .

        PUBWEAK  TIMER130_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
TIMER130_IRQHandler
        j .

        PUBWEAK  TIMER131_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
TIMER131_IRQHandler
        j .

        PUBWEAK  PWM130_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
PWM130_IRQHandler
        j .

        PUBWEAK  SERIAL0_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
SERIAL0_IRQHandler
        j .

        PUBWEAK  SERIAL1_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
SERIAL1_IRQHandler
        j .

        PUBWEAK  TIMER132_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
TIMER132_IRQHandler
        j .

        PUBWEAK  TIMER133_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
TIMER133_IRQHandler
        j .

        PUBWEAK  PWM131_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
PWM131_IRQHandler
        j .

        PUBWEAK  SERIAL2_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
SERIAL2_IRQHandler
        j .

        PUBWEAK  SERIAL3_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
SERIAL3_IRQHandler
        j .

        PUBWEAK  TIMER134_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
TIMER134_IRQHandler
        j .

        PUBWEAK  TIMER135_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
TIMER135_IRQHandler
        j .

        PUBWEAK  PWM132_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
PWM132_IRQHandler
        j .

        PUBWEAK  SERIAL4_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
SERIAL4_IRQHandler
        j .

        PUBWEAK  SERIAL5_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
SERIAL5_IRQHandler
        j .

        PUBWEAK  TIMER136_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
TIMER136_IRQHandler
        j .

        PUBWEAK  TIMER137_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
TIMER137_IRQHandler
        j .

        PUBWEAK  PWM133_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
PWM133_IRQHandler
        j .

        PUBWEAK  SERIAL6_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
SERIAL6_IRQHandler
        j .

        PUBWEAK  SERIAL7_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
SERIAL7_IRQHandler
        j .

        END


