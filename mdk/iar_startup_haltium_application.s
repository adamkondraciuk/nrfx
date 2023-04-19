; Copyright (c) 2009-2020 ARM Limited. All rights reserved.
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

__vector_table
        DCD     sfe(CSTACK)
        DCD     Reset_Handler
        DCD     NMI_Handler
        DCD     HardFault_Handler
        DCD     MemoryManagement_Handler
        DCD     BusFault_Handler
        DCD     UsageFault_Handler
        DCD     SecureFault_Handler
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     SVC_Handler
        DCD     DebugMon_Handler
        DCD     0                         ; Reserved
        DCD     PendSV_Handler
        DCD     SysTick_Handler

        ; External Interrupts
        DCD     SPU0_IRQHandler
        DCD     MPC_IRQHandler
        DCD     AXI_IRQHandler
        DCD     MVDMA_IRQHandler
        DCD     RAMC00_IRQHandler
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     ABB_IRQHandler
        DCD     HSFLL_IRQHandler
        DCD     LRCCONF0_IRQHandler
        DCD     0                         ; Reserved
        DCD     SPU1_IRQHandler
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     WDT0_IRQHandler
        DCD     WDT1_IRQHandler
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     LRCCONF1_IRQHandler
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     IPCT0_IRQHandler
        DCD     IPCT1_IRQHandler
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     BELLBOARD0_IRQHandler
        DCD     BELLBOARD1_IRQHandler
        DCD     BELLBOARD2_IRQHandler
        DCD     BELLBOARD3_IRQHandler
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     GPIOTE00_IRQHandler
        DCD     GPIOTE01_IRQHandler
        DCD     GPIOTE10_IRQHandler
        DCD     GPIOTE11_IRQHandler
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
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
        DCD     GIPCT00_IRQHandler
        DCD     0                         ; Reserved
        DCD     I3C0_IRQHandler
        DCD     I3C1_IRQHandler
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     GTIMER0_IRQHandler
        DCD     GTIMER1_IRQHandler
        DCD     PWM0_IRQHandler
        DCD     0                         ; Reserved
        DCD     HSSPIM0_IRQHandler
        DCD     HSSPIM1_IRQHandler
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     GIPCT10_IRQHandler
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     GRTC0_IRQHandler
        DCD     GRTC1_IRQHandler
        DCD     0                         ; Reserved
        DCD     GWDT1_IRQHandler
        DCD     GWDT2_IRQHandler
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
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
        DCD     I2S_IRQHandler
        DCD     PDM_IRQHandler
        DCD     QDEC0_IRQHandler
        DCD     QDEC1_IRQHandler
        DCD     SIMIF_IRQHandler
        DCD     GMIPIRFFE_IRQHandler
        DCD     TWIM8_IRQHandler
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     GTIMER2_IRQHandler
        DCD     GTIMER3_IRQHandler
        DCD     PWM1_IRQHandler
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
        DCD     GTIMER4_IRQHandler
        DCD     GTIMER5_IRQHandler
        DCD     PWM2_IRQHandler
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
        DCD     GTIMER6_IRQHandler
        DCD     GTIMER7_IRQHandler
        DCD     PWM3_IRQHandler
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
        DCD     GTIMER8_IRQHandler
        DCD     GTIMER9_IRQHandler
        DCD     PWM4_IRQHandler
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
        THUMB

        PUBWEAK Reset_Handler
        SECTION .text:CODE:REORDER:NOROOT(2)
Reset_Handler

        LDR     R0, =SystemInit
        BLX     R0
        LDR     R0, =__iar_program_start
        BX      R0

        ; Dummy exception handlers


        PUBWEAK NMI_Handler
        SECTION .text:CODE:REORDER:NOROOT(1)
NMI_Handler
        B .

        PUBWEAK HardFault_Handler
        SECTION .text:CODE:REORDER:NOROOT(1)
HardFault_Handler
        B .

        PUBWEAK MemoryManagement_Handler
        SECTION .text:CODE:REORDER:NOROOT(1)
MemoryManagement_Handler
        B .

        PUBWEAK BusFault_Handler
        SECTION .text:CODE:REORDER:NOROOT(1)
BusFault_Handler
        B .

        PUBWEAK UsageFault_Handler
        SECTION .text:CODE:REORDER:NOROOT(1)
UsageFault_Handler
        B .

        PUBWEAK SecureFault_Handler
        SECTION .text:CODE:REORDER:NOROOT(1)
SecureFault_Handler
        B .

        PUBWEAK SVC_Handler
        SECTION .text:CODE:REORDER:NOROOT(1)
SVC_Handler
        B .

        PUBWEAK DebugMon_Handler
        SECTION .text:CODE:REORDER:NOROOT(1)
DebugMon_Handler
        B .

        PUBWEAK PendSV_Handler
        SECTION .text:CODE:REORDER:NOROOT(1)
PendSV_Handler
        B .

        PUBWEAK SysTick_Handler
        SECTION .text:CODE:REORDER:NOROOT(1)
SysTick_Handler
        B .


       ; Dummy interrupt handlers

        PUBWEAK  SPU0_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
SPU0_IRQHandler
        B .

        PUBWEAK  MPC_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
MPC_IRQHandler
        B .

        PUBWEAK  AXI_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
AXI_IRQHandler
        B .

        PUBWEAK  MVDMA_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
MVDMA_IRQHandler
        B .

        PUBWEAK  RAMC00_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
RAMC00_IRQHandler
        B .

        PUBWEAK  ABB_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
ABB_IRQHandler
        B .

        PUBWEAK  HSFLL_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
HSFLL_IRQHandler
        B .

        PUBWEAK  LRCCONF0_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
LRCCONF0_IRQHandler
        B .

        PUBWEAK  SPU1_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
SPU1_IRQHandler
        B .

        PUBWEAK  WDT0_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
WDT0_IRQHandler
        B .

        PUBWEAK  WDT1_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
WDT1_IRQHandler
        B .

        PUBWEAK  LRCCONF1_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
LRCCONF1_IRQHandler
        B .

        PUBWEAK  IPCT0_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
IPCT0_IRQHandler
        B .

        PUBWEAK  IPCT1_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
IPCT1_IRQHandler
        B .

        PUBWEAK  BELLBOARD0_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
BELLBOARD0_IRQHandler
        B .

        PUBWEAK  BELLBOARD1_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
BELLBOARD1_IRQHandler
        B .

        PUBWEAK  BELLBOARD2_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
BELLBOARD2_IRQHandler
        B .

        PUBWEAK  BELLBOARD3_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
BELLBOARD3_IRQHandler
        B .

        PUBWEAK  GPIOTE00_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GPIOTE00_IRQHandler
        B .

        PUBWEAK  GPIOTE01_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GPIOTE01_IRQHandler
        B .

        PUBWEAK  GPIOTE10_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GPIOTE10_IRQHandler
        B .

        PUBWEAK  GPIOTE11_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GPIOTE11_IRQHandler
        B .

        PUBWEAK  USBHS_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
USBHS_IRQHandler
        B .

        PUBWEAK  GIPCT00_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GIPCT00_IRQHandler
        B .

        PUBWEAK  I3C0_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
I3C0_IRQHandler
        B .

        PUBWEAK  I3C1_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
I3C1_IRQHandler
        B .

        PUBWEAK  GTIMER0_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GTIMER0_IRQHandler
        B .

        PUBWEAK  GTIMER1_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GTIMER1_IRQHandler
        B .

        PUBWEAK  PWM0_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
PWM0_IRQHandler
        B .

        PUBWEAK  HSSPIM0_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
HSSPIM0_IRQHandler
        B .

        PUBWEAK  HSSPIM1_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
HSSPIM1_IRQHandler
        B .

        PUBWEAK  GIPCT10_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GIPCT10_IRQHandler
        B .

        PUBWEAK  GRTC0_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GRTC0_IRQHandler
        B .

        PUBWEAK  GRTC1_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GRTC1_IRQHandler
        B .

        PUBWEAK  GWDT1_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GWDT1_IRQHandler
        B .

        PUBWEAK  GWDT2_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GWDT2_IRQHandler
        B .

        PUBWEAK  SAADC_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
SAADC_IRQHandler
        B .

        PUBWEAK  COMP_LPCOMP_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
COMP_LPCOMP_IRQHandler
        B .

        PUBWEAK  TEMP_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
TEMP_IRQHandler
        B .

        PUBWEAK  NFCT_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
NFCT_IRQHandler
        B .

        PUBWEAK  I2S_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
I2S_IRQHandler
        B .

        PUBWEAK  PDM_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
PDM_IRQHandler
        B .

        PUBWEAK  QDEC0_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
QDEC0_IRQHandler
        B .

        PUBWEAK  QDEC1_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
QDEC1_IRQHandler
        B .

        PUBWEAK  SIMIF_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
SIMIF_IRQHandler
        B .

        PUBWEAK  GMIPIRFFE_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GMIPIRFFE_IRQHandler
        B .

        PUBWEAK  TWIM8_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
TWIM8_IRQHandler
        B .

        PUBWEAK  GTIMER2_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GTIMER2_IRQHandler
        B .

        PUBWEAK  GTIMER3_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GTIMER3_IRQHandler
        B .

        PUBWEAK  PWM1_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
PWM1_IRQHandler
        B .

        PUBWEAK  SERIAL0_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
SERIAL0_IRQHandler
        B .

        PUBWEAK  SERIAL1_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
SERIAL1_IRQHandler
        B .

        PUBWEAK  GTIMER4_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GTIMER4_IRQHandler
        B .

        PUBWEAK  GTIMER5_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GTIMER5_IRQHandler
        B .

        PUBWEAK  PWM2_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
PWM2_IRQHandler
        B .

        PUBWEAK  SERIAL2_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
SERIAL2_IRQHandler
        B .

        PUBWEAK  SERIAL3_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
SERIAL3_IRQHandler
        B .

        PUBWEAK  GTIMER6_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GTIMER6_IRQHandler
        B .

        PUBWEAK  GTIMER7_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GTIMER7_IRQHandler
        B .

        PUBWEAK  PWM3_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
PWM3_IRQHandler
        B .

        PUBWEAK  SERIAL4_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
SERIAL4_IRQHandler
        B .

        PUBWEAK  SERIAL5_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
SERIAL5_IRQHandler
        B .

        PUBWEAK  GTIMER8_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GTIMER8_IRQHandler
        B .

        PUBWEAK  GTIMER9_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GTIMER9_IRQHandler
        B .

        PUBWEAK  PWM4_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
PWM4_IRQHandler
        B .

        PUBWEAK  SERIAL6_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
SERIAL6_IRQHandler
        B .

        PUBWEAK  SERIAL7_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
SERIAL7_IRQHandler
        B .

        END


