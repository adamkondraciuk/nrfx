; Copyright (c) 2009-2024 ARM Limited. All rights reserved.
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

                IF :DEF: __STARTUP_CONFIG
#ifdef  __STARTUP_CONFIG
#include "startup_config.h"
#ifndef __STARTUP_CONFIG_STACK_ALIGNEMENT
#define __STARTUP_CONFIG_STACK_ALIGNEMENT 3
#endif
#endif
                ENDIF

                IF :DEF: __STARTUP_CONFIG
Stack_Size      EQU __STARTUP_CONFIG_STACK_SIZE
                ELIF :DEF: __STACK_SIZE
Stack_Size      EQU __STACK_SIZE
                ELSE
Stack_Size      EQU 7168
                ENDIF
                
                IF :DEF: __STARTUP_CONFIG
Stack_Align     EQU __STARTUP_CONFIG_STACK_ALIGNEMENT
                ELSE
Stack_Align     EQU 3
                ENDIF

                AREA    STACK, NOINIT, READWRITE, ALIGN=Stack_Align
Stack_Mem       SPACE   Stack_Size
__initial_sp

                IF :DEF: __STARTUP_CONFIG
Heap_Size       EQU __STARTUP_CONFIG_HEAP_SIZE
                ELIF :DEF: __HEAP_SIZE
Heap_Size       EQU __HEAP_SIZE
                ELSE
Heap_Size       EQU 7168
                ENDIF

                AREA    HEAP, NOINIT, READWRITE, ALIGN=3
__heap_base
Heap_Mem        SPACE   Heap_Size
__heap_limit

                PRESERVE8
                THUMB

; Vector Table Mapped to Address 0 at Reset

                AREA    RESET, DATA, READONLY
                EXPORT  __Vectors
                EXPORT  __Vectors_End
                EXPORT  __Vectors_Size

__Vectors       DCD     __initial_sp              ; Top of Stack
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
                DCD     EGUTX_IRQHandler
                DCD     RXDFE_0_IRQHandler
                DCD     RXDFE_1_IRQHandler
                DCD     EGURX_IRQHandler
                DCD     RXDFEGNSS_0_IRQHandler
                DCD     RXDFEGNSS_1_IRQHandler
                DCD     DSA2TX_0_IRQHandler
                DCD     DSA2TX_1_IRQHandler
                DCD     DSA2RX_0_IRQHandler
                DCD     DSA2RX_1_IRQHandler
                DCD     GPIOTE_0_IRQHandler
                DCD     SENSORADC_IRQHandler
                DCD     RFTIMERSTC_IRQHandler
                DCD     MIPIRFFE0_IRQHandler
                DCD     MIPIRFFE1_IRQHandler
                DCD     RFSERVICES_IRQHandler
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     RFCORESERVICES_IRQHandler
                DCD     MVDMA_IRQHandler
                DCD     GPIOTE131_IRQHandler
                DCD     MIPIRFFE_IRQHandler
                DCD     BELLBOARD_0_IRQHandler
                DCD     BELLBOARD_1_IRQHandler
                DCD     BELLBOARD_2_IRQHandler
                DCD     BELLBOARD_3_IRQHandler
                DCD     IPCT_0_IRQHandler
                DCD     IPCT_1_IRQHandler
                DCD     IPCT_2_IRQHandler
                DCD     IPCT_3_IRQHandler
                DCD     IPCT_4_IRQHandler
                DCD     IPCT_5_IRQHandler

__Vectors_End

__Vectors_Size  EQU     __Vectors_End - __Vectors

                AREA    |.text|, CODE, READONLY

; Reset Handler


Reset_Handler   PROC
                EXPORT  Reset_Handler             [WEAK]
                IMPORT  SystemInit
                IMPORT  __main


                LDR     R0, =SystemInit
                BLX     R0
                LDR     R0, =__main
                BX      R0
                ENDP

; Dummy Exception Handlers (infinite loops which can be modified)

NMI_Handler     PROC
                EXPORT  NMI_Handler               [WEAK]
                B       .
                ENDP
HardFault_Handler\
                PROC
                EXPORT  HardFault_Handler         [WEAK]
                B       .
                ENDP
SVC_Handler     PROC
                EXPORT  SVC_Handler               [WEAK]
                B       .
                ENDP
PendSV_Handler  PROC
                EXPORT  PendSV_Handler            [WEAK]
                B       .
                ENDP
SysTick_Handler PROC
                EXPORT  SysTick_Handler           [WEAK]
                B       .
                ENDP

Default_Handler PROC

                EXPORT   TXDFE_IRQHandler [WEAK]
                EXPORT   EGUTX_IRQHandler [WEAK]
                EXPORT   RXDFE_0_IRQHandler [WEAK]
                EXPORT   RXDFE_1_IRQHandler [WEAK]
                EXPORT   EGURX_IRQHandler [WEAK]
                EXPORT   RXDFEGNSS_0_IRQHandler [WEAK]
                EXPORT   RXDFEGNSS_1_IRQHandler [WEAK]
                EXPORT   DSA2TX_0_IRQHandler [WEAK]
                EXPORT   DSA2TX_1_IRQHandler [WEAK]
                EXPORT   DSA2RX_0_IRQHandler [WEAK]
                EXPORT   DSA2RX_1_IRQHandler [WEAK]
                EXPORT   GPIOTE_0_IRQHandler [WEAK]
                EXPORT   SENSORADC_IRQHandler [WEAK]
                EXPORT   RFTIMERSTC_IRQHandler [WEAK]
                EXPORT   MIPIRFFE0_IRQHandler [WEAK]
                EXPORT   MIPIRFFE1_IRQHandler [WEAK]
                EXPORT   RFSERVICES_IRQHandler [WEAK]
                EXPORT   RFCORESERVICES_IRQHandler [WEAK]
                EXPORT   MVDMA_IRQHandler [WEAK]
                EXPORT   GPIOTE131_IRQHandler [WEAK]
                EXPORT   MIPIRFFE_IRQHandler [WEAK]
                EXPORT   BELLBOARD_0_IRQHandler [WEAK]
                EXPORT   BELLBOARD_1_IRQHandler [WEAK]
                EXPORT   BELLBOARD_2_IRQHandler [WEAK]
                EXPORT   BELLBOARD_3_IRQHandler [WEAK]
                EXPORT   IPCT_0_IRQHandler [WEAK]
                EXPORT   IPCT_1_IRQHandler [WEAK]
                EXPORT   IPCT_2_IRQHandler [WEAK]
                EXPORT   IPCT_3_IRQHandler [WEAK]
                EXPORT   IPCT_4_IRQHandler [WEAK]
                EXPORT   IPCT_5_IRQHandler [WEAK]
TXDFE_IRQHandler
EGUTX_IRQHandler
RXDFE_0_IRQHandler
RXDFE_1_IRQHandler
EGURX_IRQHandler
RXDFEGNSS_0_IRQHandler
RXDFEGNSS_1_IRQHandler
DSA2TX_0_IRQHandler
DSA2TX_1_IRQHandler
DSA2RX_0_IRQHandler
DSA2RX_1_IRQHandler
GPIOTE_0_IRQHandler
SENSORADC_IRQHandler
RFTIMERSTC_IRQHandler
MIPIRFFE0_IRQHandler
MIPIRFFE1_IRQHandler
RFSERVICES_IRQHandler
RFCORESERVICES_IRQHandler
MVDMA_IRQHandler
GPIOTE131_IRQHandler
MIPIRFFE_IRQHandler
BELLBOARD_0_IRQHandler
BELLBOARD_1_IRQHandler
BELLBOARD_2_IRQHandler
BELLBOARD_3_IRQHandler
IPCT_0_IRQHandler
IPCT_1_IRQHandler
IPCT_2_IRQHandler
IPCT_3_IRQHandler
IPCT_4_IRQHandler
IPCT_5_IRQHandler
                B .
                ENDP
                ALIGN

; User Initial Stack & Heap

                IF      :DEF:__MICROLIB

                EXPORT  __initial_sp
                EXPORT  __heap_base
                EXPORT  __heap_limit

                ELSE

                IMPORT  __use_two_region_memory
                EXPORT  __user_initial_stackheap

__user_initial_stackheap PROC

                LDR     R0, = Heap_Mem
                LDR     R1, = (Stack_Mem + Stack_Size)
                LDR     R2, = (Heap_Mem + Heap_Size)
                LDR     R3, = Stack_Mem
                BX      LR
                ENDP

                ALIGN

                ENDIF

                END
