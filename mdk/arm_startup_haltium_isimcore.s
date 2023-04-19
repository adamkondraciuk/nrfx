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
Stack_Size      EQU 24576
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
Heap_Size       EQU 24576
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
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     LRCCONF0_IRQHandler
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     SPU1_IRQHandler
                DCD     MPC_IRQHandler
                DCD     HSFLL_IRQHandler
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
                DCD     SPU2_IRQHandler
                DCD     GENERIC6_IRQHandler
                DCD     GENERIC7_IRQHandler
                DCD     GENERIC8_IRQHandler
                DCD     GENERIC9_IRQHandler
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
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
MemoryManagement_Handler\
                PROC
                EXPORT  MemoryManagement_Handler  [WEAK]
                B       .
                ENDP
BusFault_Handler\
                PROC
                EXPORT  BusFault_Handler          [WEAK]
                B       .
                ENDP
UsageFault_Handler\
                PROC
                EXPORT  UsageFault_Handler        [WEAK]
                B       .
                ENDP
SecureFault_Handler\
                PROC
                EXPORT  SecureFault_Handler       [WEAK]
                B       .
                ENDP
SVC_Handler     PROC
                EXPORT  SVC_Handler               [WEAK]
                B       .
                ENDP
DebugMon_Handler\
                PROC
                EXPORT  DebugMon_Handler          [WEAK]
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

                EXPORT   SPU0_IRQHandler [WEAK]
                EXPORT   LRCCONF0_IRQHandler [WEAK]
                EXPORT   SPU1_IRQHandler [WEAK]
                EXPORT   MPC_IRQHandler [WEAK]
                EXPORT   HSFLL_IRQHandler [WEAK]
                EXPORT   LRCCONF1_IRQHandler [WEAK]
                EXPORT   SPU2_IRQHandler [WEAK]
                EXPORT   GENERIC6_IRQHandler [WEAK]
                EXPORT   GENERIC7_IRQHandler [WEAK]
                EXPORT   GENERIC8_IRQHandler [WEAK]
                EXPORT   GENERIC9_IRQHandler [WEAK]
                EXPORT   GPIOTE00_IRQHandler [WEAK]
                EXPORT   GPIOTE01_IRQHandler [WEAK]
                EXPORT   GPIOTE10_IRQHandler [WEAK]
                EXPORT   GPIOTE11_IRQHandler [WEAK]
                EXPORT   USBHS_IRQHandler [WEAK]
                EXPORT   GIPCT00_IRQHandler [WEAK]
                EXPORT   I3C0_IRQHandler [WEAK]
                EXPORT   I3C1_IRQHandler [WEAK]
                EXPORT   GTIMER0_IRQHandler [WEAK]
                EXPORT   GTIMER1_IRQHandler [WEAK]
                EXPORT   PWM0_IRQHandler [WEAK]
                EXPORT   HSSPIM0_IRQHandler [WEAK]
                EXPORT   HSSPIM1_IRQHandler [WEAK]
                EXPORT   GIPCT10_IRQHandler [WEAK]
                EXPORT   GRTC0_IRQHandler [WEAK]
                EXPORT   GRTC1_IRQHandler [WEAK]
                EXPORT   GWDT1_IRQHandler [WEAK]
                EXPORT   GWDT2_IRQHandler [WEAK]
                EXPORT   SAADC_IRQHandler [WEAK]
                EXPORT   COMP_LPCOMP_IRQHandler [WEAK]
                EXPORT   TEMP_IRQHandler [WEAK]
                EXPORT   NFCT_IRQHandler [WEAK]
                EXPORT   I2S_IRQHandler [WEAK]
                EXPORT   PDM_IRQHandler [WEAK]
                EXPORT   QDEC0_IRQHandler [WEAK]
                EXPORT   QDEC1_IRQHandler [WEAK]
                EXPORT   SIMIF_IRQHandler [WEAK]
                EXPORT   GMIPIRFFE_IRQHandler [WEAK]
                EXPORT   TWIM8_IRQHandler [WEAK]
                EXPORT   GTIMER2_IRQHandler [WEAK]
                EXPORT   GTIMER3_IRQHandler [WEAK]
                EXPORT   PWM1_IRQHandler [WEAK]
                EXPORT   SERIAL0_IRQHandler [WEAK]
                EXPORT   SERIAL1_IRQHandler [WEAK]
                EXPORT   GTIMER4_IRQHandler [WEAK]
                EXPORT   GTIMER5_IRQHandler [WEAK]
                EXPORT   PWM2_IRQHandler [WEAK]
                EXPORT   SERIAL2_IRQHandler [WEAK]
                EXPORT   SERIAL3_IRQHandler [WEAK]
                EXPORT   GTIMER6_IRQHandler [WEAK]
                EXPORT   GTIMER7_IRQHandler [WEAK]
                EXPORT   PWM3_IRQHandler [WEAK]
                EXPORT   SERIAL4_IRQHandler [WEAK]
                EXPORT   SERIAL5_IRQHandler [WEAK]
                EXPORT   GTIMER8_IRQHandler [WEAK]
                EXPORT   GTIMER9_IRQHandler [WEAK]
                EXPORT   PWM4_IRQHandler [WEAK]
                EXPORT   SERIAL6_IRQHandler [WEAK]
                EXPORT   SERIAL7_IRQHandler [WEAK]
SPU0_IRQHandler
LRCCONF0_IRQHandler
SPU1_IRQHandler
MPC_IRQHandler
HSFLL_IRQHandler
LRCCONF1_IRQHandler
SPU2_IRQHandler
GENERIC6_IRQHandler
GENERIC7_IRQHandler
GENERIC8_IRQHandler
GENERIC9_IRQHandler
GPIOTE00_IRQHandler
GPIOTE01_IRQHandler
GPIOTE10_IRQHandler
GPIOTE11_IRQHandler
USBHS_IRQHandler
GIPCT00_IRQHandler
I3C0_IRQHandler
I3C1_IRQHandler
GTIMER0_IRQHandler
GTIMER1_IRQHandler
PWM0_IRQHandler
HSSPIM0_IRQHandler
HSSPIM1_IRQHandler
GIPCT10_IRQHandler
GRTC0_IRQHandler
GRTC1_IRQHandler
GWDT1_IRQHandler
GWDT2_IRQHandler
SAADC_IRQHandler
COMP_LPCOMP_IRQHandler
TEMP_IRQHandler
NFCT_IRQHandler
I2S_IRQHandler
PDM_IRQHandler
QDEC0_IRQHandler
QDEC1_IRQHandler
SIMIF_IRQHandler
GMIPIRFFE_IRQHandler
TWIM8_IRQHandler
GTIMER2_IRQHandler
GTIMER3_IRQHandler
PWM1_IRQHandler
SERIAL0_IRQHandler
SERIAL1_IRQHandler
GTIMER4_IRQHandler
GTIMER5_IRQHandler
PWM2_IRQHandler
SERIAL2_IRQHandler
SERIAL3_IRQHandler
GTIMER6_IRQHandler
GTIMER7_IRQHandler
PWM3_IRQHandler
SERIAL4_IRQHandler
SERIAL5_IRQHandler
GTIMER8_IRQHandler
GTIMER9_IRQHandler
PWM4_IRQHandler
SERIAL6_IRQHandler
SERIAL7_IRQHandler
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
