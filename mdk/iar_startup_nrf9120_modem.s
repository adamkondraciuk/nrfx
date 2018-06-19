; Copyright (c) 2009-2018 ARM Limited. All rights reserved.
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
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     SVC_Handler
        DCD     DebugMon_Handler
        DCD     0                         ; Reserved
        DCD     PendSV_Handler
        DCD     SysTick_Handler

        ; External Interrupts
        DCD     0                         ; Reserved
        DCD     MWU_IRQHandler
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     MCPLL_IRQHandler
        DCD     0                         ; Reserved
        DCD     RCOSC32K_IRQHandler
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     CLOCK_POWER_IRQHandler
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     UARTE_IRQHandler
        DCD     TIMER1_IRQHandler
        DCD     TIMER11_IRQHandler
        DCD     RTC_IRQHandler
        DCD     LWDT_IRQHandler
        DCD     SWDT_IRQHandler
        DCD     RNG_IRQHandler
        DCD     SIMIF_IRQHandler
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     M2M0_IRQHandler
        DCD     M2M1_IRQHandler
        DCD     GPIOTE0_IRQHandler
        DCD     GPIOTE1_IRQHandler
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     GPIOTE2_IRQHandler
        DCD     0                         ; Reserved
        DCD     TEMP_IRQHandler
        DCD     0                         ; Reserved
        DCD     LFCLKCALIBMEAS_IRQHandler
        DCD     TWIM_IRQHandler
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     AESL2_IRQHandler
        DCD     SNOW_IRQHandler
        DCD     ZUC_IRQHandler
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     SHA_IRQHandler
        DCD     TLSAES_IRQHandler
        DCD     DESCIPHER_IRQHandler
        DCD     IPC_IRQHandler
        DCD     IPC1_IRQHandler
        DCD     IPC2_IRQHandler
        DCD     TIMER0_IRQHandler
        DCD     TIMER01_IRQHandler
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     KMU_IRQHandler
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
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

        PUBWEAK  MWU_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
MWU_IRQHandler
        B .

        PUBWEAK  MCPLL_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
MCPLL_IRQHandler
        B .

        PUBWEAK  RCOSC32K_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
RCOSC32K_IRQHandler
        B .

        PUBWEAK  CLOCK_POWER_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
CLOCK_POWER_IRQHandler
        B .

        PUBWEAK  UARTE_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
UARTE_IRQHandler
        B .

        PUBWEAK  TIMER1_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
TIMER1_IRQHandler
        B .

        PUBWEAK  TIMER11_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
TIMER11_IRQHandler
        B .

        PUBWEAK  RTC_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
RTC_IRQHandler
        B .

        PUBWEAK  LWDT_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
LWDT_IRQHandler
        B .

        PUBWEAK  SWDT_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
SWDT_IRQHandler
        B .

        PUBWEAK  RNG_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
RNG_IRQHandler
        B .

        PUBWEAK  SIMIF_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
SIMIF_IRQHandler
        B .

        PUBWEAK  M2M0_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
M2M0_IRQHandler
        B .

        PUBWEAK  M2M1_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
M2M1_IRQHandler
        B .

        PUBWEAK  GPIOTE0_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GPIOTE0_IRQHandler
        B .

        PUBWEAK  GPIOTE1_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GPIOTE1_IRQHandler
        B .

        PUBWEAK  GPIOTE2_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GPIOTE2_IRQHandler
        B .

        PUBWEAK  TEMP_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
TEMP_IRQHandler
        B .

        PUBWEAK  LFCLKCALIBMEAS_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
LFCLKCALIBMEAS_IRQHandler
        B .

        PUBWEAK  TWIM_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
TWIM_IRQHandler
        B .

        PUBWEAK  AESL2_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
AESL2_IRQHandler
        B .

        PUBWEAK  SNOW_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
SNOW_IRQHandler
        B .

        PUBWEAK  ZUC_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
ZUC_IRQHandler
        B .

        PUBWEAK  SHA_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
SHA_IRQHandler
        B .

        PUBWEAK  TLSAES_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
TLSAES_IRQHandler
        B .

        PUBWEAK  DESCIPHER_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
DESCIPHER_IRQHandler
        B .

        PUBWEAK  IPC_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
IPC_IRQHandler
        B .

        PUBWEAK  IPC1_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
IPC1_IRQHandler
        B .

        PUBWEAK  IPC2_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
IPC2_IRQHandler
        B .

        PUBWEAK  TIMER0_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
TIMER0_IRQHandler
        B .

        PUBWEAK  TIMER01_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
TIMER01_IRQHandler
        B .

        PUBWEAK  KMU_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
KMU_IRQHandler
        B .

        END


