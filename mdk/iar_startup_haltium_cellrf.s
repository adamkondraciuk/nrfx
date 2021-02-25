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

__vector_table
        DCD     sfe(CSTACK)
        DCD     Reset_Handler
        DCD     NMI_Handler
        DCD     HardFault_Handler
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     SVC_Handler
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     PendSV_Handler
        DCD     SysTick_Handler

        ; External Interrupts
        DCD     TXDFE_IRQHandler
        DCD     RAMCM0_RFTIMERTX_IRQHandler
        DCD     EGUTX_RAMCDATA_IRQHandler
        DCD     RAMCIPC_RXDFE0_IRQHandler
        DCD     RXDFE1_IRQHandler
        DCD     RFTIMERRX_IRQHandler
        DCD     EGURX_IRQHandler
        DCD     DSA2TX0_LRCCONF0_IRQHandler
        DCD     DSA2TX1_HSFLL_IRQHandler
        DCD     DSA2RX0_IRQHandler
        DCD     DSA2RX1_MPC_IRQHandler
        DCD     GPIOTE0_IRQHandler
        DCD     SENSORADC_IRQHandler
        DCD     RFTIMERSTC_IRQHandler
        DCD     MIPIRFFE0_IRQHandler
        DCD     MIPIRFFE1_IRQHandler
        DCD     RFSERVICES_IRQHandler
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     RFCORESERVICES_IRQHandler
        DCD     MVDMA_IRQHandler
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     BELLBOARD0_IRQHandler
        DCD     BELLBOARD1_IRQHandler
        DCD     BELLBOARD2_IRQHandler
        DCD     BELLBOARD3_IRQHandler
        DCD     IPCT0_IRQHandler
        DCD     IPCT1_IRQHandler
        DCD     IPCT2_IRQHandler
        DCD     IPCT3_IRQHandler
        DCD     IPCT4_IRQHandler

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

        PUBWEAK SVC_Handler
        SECTION .text:CODE:REORDER:NOROOT(1)
SVC_Handler
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

        PUBWEAK  TXDFE_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
TXDFE_IRQHandler
        B .

        PUBWEAK  RAMCM0_RFTIMERTX_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
RAMCM0_RFTIMERTX_IRQHandler
        B .

        PUBWEAK  EGUTX_RAMCDATA_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
EGUTX_RAMCDATA_IRQHandler
        B .

        PUBWEAK  RAMCIPC_RXDFE0_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
RAMCIPC_RXDFE0_IRQHandler
        B .

        PUBWEAK  RXDFE1_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
RXDFE1_IRQHandler
        B .

        PUBWEAK  RFTIMERRX_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
RFTIMERRX_IRQHandler
        B .

        PUBWEAK  EGURX_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
EGURX_IRQHandler
        B .

        PUBWEAK  DSA2TX0_LRCCONF0_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
DSA2TX0_LRCCONF0_IRQHandler
        B .

        PUBWEAK  DSA2TX1_HSFLL_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
DSA2TX1_HSFLL_IRQHandler
        B .

        PUBWEAK  DSA2RX0_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
DSA2RX0_IRQHandler
        B .

        PUBWEAK  DSA2RX1_MPC_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
DSA2RX1_MPC_IRQHandler
        B .

        PUBWEAK  GPIOTE0_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GPIOTE0_IRQHandler
        B .

        PUBWEAK  SENSORADC_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
SENSORADC_IRQHandler
        B .

        PUBWEAK  RFTIMERSTC_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
RFTIMERSTC_IRQHandler
        B .

        PUBWEAK  MIPIRFFE0_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
MIPIRFFE0_IRQHandler
        B .

        PUBWEAK  MIPIRFFE1_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
MIPIRFFE1_IRQHandler
        B .

        PUBWEAK  RFSERVICES_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
RFSERVICES_IRQHandler
        B .

        PUBWEAK  RFCORESERVICES_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
RFCORESERVICES_IRQHandler
        B .

        PUBWEAK  MVDMA_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
MVDMA_IRQHandler
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

        PUBWEAK  IPCT0_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
IPCT0_IRQHandler
        B .

        PUBWEAK  IPCT1_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
IPCT1_IRQHandler
        B .

        PUBWEAK  IPCT2_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
IPCT2_IRQHandler
        B .

        PUBWEAK  IPCT3_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
IPCT3_IRQHandler
        B .

        PUBWEAK  IPCT4_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
IPCT4_IRQHandler
        B .

        END


