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
Stack_Size      EQU 2048
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
Heap_Size       EQU 2048
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
                DCD     SPU000_IRQHandler
                DCD     MPC000_IRQHandler
                DCD     0                         ; Reserved
                DCD     MVDMA_IRQHandler
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     CRACEN_IRQHandler
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     HSFLL_IRQHandler
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     SPU010_IRQHandler
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     WDT010_IRQHandler
                DCD     WDT011_IRQHandler
                DCD     TAMPC_IRQHandler
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
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
                DCD     GPIOTE1300_IRQHandler
                DCD     GPIOTE1301_IRQHandler
                DCD     GPIOTE1310_IRQHandler
                DCD     GPIOTE1311_IRQHandler
                DCD     GRTC0_IRQHandler
                DCD     GRTC1_IRQHandler
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     SPU100_IRQHandler
                DCD     MPC100_IRQHandler
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
                DCD     SPU110_IRQHandler
                DCD     MPC110_IRQHandler
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     EXMIF_IRQHandler
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     SPU120_IRQHandler
                DCD     MPC120_IRQHandler
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     CANPLL_IRQHandler
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     SPU121_IRQHandler
                DCD     IPCT1200_IRQHandler
                DCD     0                         ; Reserved
                DCD     I3C120_IRQHandler
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     CAN_IRQHandler
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     I3C121_IRQHandler
                DCD     0                         ; Reserved
                DCD     SPU122_IRQHandler
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
                DCD     SPU130_IRQHandler
                DCD     MPC130_IRQHandler
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     SPU131_IRQHandler
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
                DCD     SPU132_IRQHandler
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
                DCD     SPU133_IRQHandler
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
                DCD     SPU134_IRQHandler
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
                DCD     SPU135_IRQHandler
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
                DCD     SPU136_IRQHandler
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
                DCD     SPU137_IRQHandler
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

                EXPORT   SPU000_IRQHandler [WEAK]
                EXPORT   MPC000_IRQHandler [WEAK]
                EXPORT   MVDMA_IRQHandler [WEAK]
                EXPORT   CRACEN_IRQHandler [WEAK]
                EXPORT   HSFLL_IRQHandler [WEAK]
                EXPORT   SPU010_IRQHandler [WEAK]
                EXPORT   WDT010_IRQHandler [WEAK]
                EXPORT   WDT011_IRQHandler [WEAK]
                EXPORT   TAMPC_IRQHandler [WEAK]
                EXPORT   IPCT0_IRQHandler [WEAK]
                EXPORT   IPCT1_IRQHandler [WEAK]
                EXPORT   BELLBOARD0_IRQHandler [WEAK]
                EXPORT   BELLBOARD1_IRQHandler [WEAK]
                EXPORT   BELLBOARD2_IRQHandler [WEAK]
                EXPORT   BELLBOARD3_IRQHandler [WEAK]
                EXPORT   GPIOTE1300_IRQHandler [WEAK]
                EXPORT   GPIOTE1301_IRQHandler [WEAK]
                EXPORT   GPIOTE1310_IRQHandler [WEAK]
                EXPORT   GPIOTE1311_IRQHandler [WEAK]
                EXPORT   GRTC0_IRQHandler [WEAK]
                EXPORT   GRTC1_IRQHandler [WEAK]
                EXPORT   SPU100_IRQHandler [WEAK]
                EXPORT   MPC100_IRQHandler [WEAK]
                EXPORT   USBHS_IRQHandler [WEAK]
                EXPORT   SPU110_IRQHandler [WEAK]
                EXPORT   MPC110_IRQHandler [WEAK]
                EXPORT   EXMIF_IRQHandler [WEAK]
                EXPORT   SPU120_IRQHandler [WEAK]
                EXPORT   MPC120_IRQHandler [WEAK]
                EXPORT   CANPLL_IRQHandler [WEAK]
                EXPORT   SPU121_IRQHandler [WEAK]
                EXPORT   IPCT1200_IRQHandler [WEAK]
                EXPORT   I3C120_IRQHandler [WEAK]
                EXPORT   CAN_IRQHandler [WEAK]
                EXPORT   I3C121_IRQHandler [WEAK]
                EXPORT   SPU122_IRQHandler [WEAK]
                EXPORT   TIMER120_IRQHandler [WEAK]
                EXPORT   TIMER121_IRQHandler [WEAK]
                EXPORT   PWM120_IRQHandler [WEAK]
                EXPORT   SPIS120_IRQHandler [WEAK]
                EXPORT   SPIM120_IRQHandler [WEAK]
                EXPORT   SPIM121_IRQHandler [WEAK]
                EXPORT   TWIM120_IRQHandler [WEAK]
                EXPORT   SPU130_IRQHandler [WEAK]
                EXPORT   MPC130_IRQHandler [WEAK]
                EXPORT   SPU131_IRQHandler [WEAK]
                EXPORT   IPCT1300_IRQHandler [WEAK]
                EXPORT   RTC130_IRQHandler [WEAK]
                EXPORT   RTC131_IRQHandler [WEAK]
                EXPORT   WDT131_IRQHandler [WEAK]
                EXPORT   WDT132_IRQHandler [WEAK]
                EXPORT   EGU130_IRQHandler [WEAK]
                EXPORT   SPU132_IRQHandler [WEAK]
                EXPORT   SAADC_IRQHandler [WEAK]
                EXPORT   COMP_LPCOMP_IRQHandler [WEAK]
                EXPORT   TEMP_IRQHandler [WEAK]
                EXPORT   NFCT_IRQHandler [WEAK]
                EXPORT   SPU133_IRQHandler [WEAK]
                EXPORT   I2S130_IRQHandler [WEAK]
                EXPORT   PDM_IRQHandler [WEAK]
                EXPORT   QDEC130_IRQHandler [WEAK]
                EXPORT   QDEC131_IRQHandler [WEAK]
                EXPORT   SIMIF_IRQHandler [WEAK]
                EXPORT   I2S131_IRQHandler [WEAK]
                EXPORT   MIPIRFFE_IRQHandler [WEAK]
                EXPORT   SPU134_IRQHandler [WEAK]
                EXPORT   TIMER130_IRQHandler [WEAK]
                EXPORT   TIMER131_IRQHandler [WEAK]
                EXPORT   PWM130_IRQHandler [WEAK]
                EXPORT   SERIAL0_IRQHandler [WEAK]
                EXPORT   SERIAL1_IRQHandler [WEAK]
                EXPORT   SPU135_IRQHandler [WEAK]
                EXPORT   TIMER132_IRQHandler [WEAK]
                EXPORT   TIMER133_IRQHandler [WEAK]
                EXPORT   PWM131_IRQHandler [WEAK]
                EXPORT   SERIAL2_IRQHandler [WEAK]
                EXPORT   SERIAL3_IRQHandler [WEAK]
                EXPORT   SPU136_IRQHandler [WEAK]
                EXPORT   TIMER134_IRQHandler [WEAK]
                EXPORT   TIMER135_IRQHandler [WEAK]
                EXPORT   PWM132_IRQHandler [WEAK]
                EXPORT   SERIAL4_IRQHandler [WEAK]
                EXPORT   SERIAL5_IRQHandler [WEAK]
                EXPORT   SPU137_IRQHandler [WEAK]
                EXPORT   TIMER136_IRQHandler [WEAK]
                EXPORT   TIMER137_IRQHandler [WEAK]
                EXPORT   PWM133_IRQHandler [WEAK]
                EXPORT   SERIAL6_IRQHandler [WEAK]
                EXPORT   SERIAL7_IRQHandler [WEAK]
SPU000_IRQHandler
MPC000_IRQHandler
MVDMA_IRQHandler
CRACEN_IRQHandler
HSFLL_IRQHandler
SPU010_IRQHandler
WDT010_IRQHandler
WDT011_IRQHandler
TAMPC_IRQHandler
IPCT0_IRQHandler
IPCT1_IRQHandler
BELLBOARD0_IRQHandler
BELLBOARD1_IRQHandler
BELLBOARD2_IRQHandler
BELLBOARD3_IRQHandler
GPIOTE1300_IRQHandler
GPIOTE1301_IRQHandler
GPIOTE1310_IRQHandler
GPIOTE1311_IRQHandler
GRTC0_IRQHandler
GRTC1_IRQHandler
SPU100_IRQHandler
MPC100_IRQHandler
USBHS_IRQHandler
SPU110_IRQHandler
MPC110_IRQHandler
EXMIF_IRQHandler
SPU120_IRQHandler
MPC120_IRQHandler
CANPLL_IRQHandler
SPU121_IRQHandler
IPCT1200_IRQHandler
I3C120_IRQHandler
CAN_IRQHandler
I3C121_IRQHandler
SPU122_IRQHandler
TIMER120_IRQHandler
TIMER121_IRQHandler
PWM120_IRQHandler
SPIS120_IRQHandler
SPIM120_IRQHandler
SPIM121_IRQHandler
TWIM120_IRQHandler
SPU130_IRQHandler
MPC130_IRQHandler
SPU131_IRQHandler
IPCT1300_IRQHandler
RTC130_IRQHandler
RTC131_IRQHandler
WDT131_IRQHandler
WDT132_IRQHandler
EGU130_IRQHandler
SPU132_IRQHandler
SAADC_IRQHandler
COMP_LPCOMP_IRQHandler
TEMP_IRQHandler
NFCT_IRQHandler
SPU133_IRQHandler
I2S130_IRQHandler
PDM_IRQHandler
QDEC130_IRQHandler
QDEC131_IRQHandler
SIMIF_IRQHandler
I2S131_IRQHandler
MIPIRFFE_IRQHandler
SPU134_IRQHandler
TIMER130_IRQHandler
TIMER131_IRQHandler
PWM130_IRQHandler
SERIAL0_IRQHandler
SERIAL1_IRQHandler
SPU135_IRQHandler
TIMER132_IRQHandler
TIMER133_IRQHandler
PWM131_IRQHandler
SERIAL2_IRQHandler
SERIAL3_IRQHandler
SPU136_IRQHandler
TIMER134_IRQHandler
TIMER135_IRQHandler
PWM132_IRQHandler
SERIAL4_IRQHandler
SERIAL5_IRQHandler
SPU137_IRQHandler
TIMER136_IRQHandler
TIMER137_IRQHandler
PWM133_IRQHandler
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
