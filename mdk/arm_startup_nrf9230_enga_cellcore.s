; Copyright (c) 2009-2023 ARM Limited. All rights reserved.
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
Stack_Size      EQU 32768
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
Heap_Size       EQU 32768
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
                DCD     MPC_IRQHandler
                DCD     0                         ; Reserved
                DCD     MVDMA_IRQHandler
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     AESLTE_IRQHandler
                DCD     SNOW_IRQHandler
                DCD     ZUC_IRQHandler
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     SPU1_IRQHandler
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     WDT0_IRQHandler
                DCD     WDT1_IRQHandler
                DCD     RTC_IRQHandler
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     SPU2_IRQHandler
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     LFCLKCALIBMEAS_IRQHandler
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     SPU3_IRQHandler
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     MCPLL_IRQHandler
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     SYSTEMTIMER_0_IRQHandler
                DCD     SYSTEMTIMER_1_IRQHandler
                DCD     LTETIMER_0_IRQHandler
                DCD     LTETIMER_1_IRQHandler
                DCD     GNSSTIMER_0_IRQHandler
                DCD     GNSSTIMER_1_IRQHandler
                DCD     IPCT_0_IRQHandler
                DCD     IPCT_1_IRQHandler
                DCD     IPCT_2_IRQHandler
                DCD     IPCT_3_IRQHandler
                DCD     IPCT_4_IRQHandler
                DCD     IPCT_5_IRQHandler
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     SWI0_IRQHandler
                DCD     SWI1_IRQHandler
                DCD     SWI2_IRQHandler
                DCD     SWI3_IRQHandler
                DCD     SWI4_IRQHandler
                DCD     SWI5_IRQHandler
                DCD     SWI6_IRQHandler
                DCD     SWI7_IRQHandler
                DCD     BELLBOARD_0_IRQHandler
                DCD     BELLBOARD_1_IRQHandler
                DCD     BELLBOARD_2_IRQHandler
                DCD     BELLBOARD_3_IRQHandler
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     GPIOTE130_0_IRQHandler
                DCD     GPIOTE130_1_IRQHandler
                DCD     GPIOTE131_0_IRQHandler
                DCD     GPIOTE131_1_IRQHandler
                DCD     GRTC_0_IRQHandler
                DCD     GRTC_1_IRQHandler
                DCD     GRTC_2_IRQHandler
                DCD     ISIM_MHU_0_IRQHandler
                DCD     ISIM_MHU_1_IRQHandler
                DCD     ISIM_SPU_IRQHandler
                DCD     ISIM_MPC_IRQHandler
                DCD     ISIM_CICTRL_IRQHandler
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     TBM_IRQHandler
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
                DCD     MRAMC110_IRQHandler
                DCD     MRAMC111_IRQHandler
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
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     OTPC_IRQHandler
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     VPR120_IRQHandler
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     IPCT120_0_IRQHandler
                DCD     0                         ; Reserved
                DCD     I3C120_IRQHandler
                DCD     VPR121_IRQHandler
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     CAN120_IRQHandler
                DCD     MVDMA120_IRQHandler
                DCD     0                         ; Reserved
                DCD     CAN121_IRQHandler
                DCD     MVDMA121_IRQHandler
                DCD     0                         ; Reserved
                DCD     I3C121_IRQHandler
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     TIMER120_IRQHandler
                DCD     TIMER121_IRQHandler
                DCD     PWM120_IRQHandler
                DCD     SPIS120_IRQHandler
                DCD     SPIM120_UARTE120_IRQHandler
                DCD     SPIM121_IRQHandler
                DCD     TWIM120_IRQHandler
                DCD     SACR_IRQHandler
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     VPR130_IRQHandler
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     IPCT130_0_IRQHandler
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
                DCD     RESETHUB_IRQHandler
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
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
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
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
                DCD     SIMIF130_IRQHandler
                DCD     I2S131_IRQHandler
                DCD     0                         ; Reserved
                DCD     0                         ; Reserved
                DCD     SIMIF131_IRQHandler
                DCD     MIPIRFFE_IRQHandler
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
                EXPORT   MPC_IRQHandler [WEAK]
                EXPORT   MVDMA_IRQHandler [WEAK]
                EXPORT   AESLTE_IRQHandler [WEAK]
                EXPORT   SNOW_IRQHandler [WEAK]
                EXPORT   ZUC_IRQHandler [WEAK]
                EXPORT   SPU1_IRQHandler [WEAK]
                EXPORT   WDT0_IRQHandler [WEAK]
                EXPORT   WDT1_IRQHandler [WEAK]
                EXPORT   RTC_IRQHandler [WEAK]
                EXPORT   SPU2_IRQHandler [WEAK]
                EXPORT   LFCLKCALIBMEAS_IRQHandler [WEAK]
                EXPORT   SPU3_IRQHandler [WEAK]
                EXPORT   MCPLL_IRQHandler [WEAK]
                EXPORT   SYSTEMTIMER_0_IRQHandler [WEAK]
                EXPORT   SYSTEMTIMER_1_IRQHandler [WEAK]
                EXPORT   LTETIMER_0_IRQHandler [WEAK]
                EXPORT   LTETIMER_1_IRQHandler [WEAK]
                EXPORT   GNSSTIMER_0_IRQHandler [WEAK]
                EXPORT   GNSSTIMER_1_IRQHandler [WEAK]
                EXPORT   IPCT_0_IRQHandler [WEAK]
                EXPORT   IPCT_1_IRQHandler [WEAK]
                EXPORT   IPCT_2_IRQHandler [WEAK]
                EXPORT   IPCT_3_IRQHandler [WEAK]
                EXPORT   IPCT_4_IRQHandler [WEAK]
                EXPORT   IPCT_5_IRQHandler [WEAK]
                EXPORT   SWI0_IRQHandler [WEAK]
                EXPORT   SWI1_IRQHandler [WEAK]
                EXPORT   SWI2_IRQHandler [WEAK]
                EXPORT   SWI3_IRQHandler [WEAK]
                EXPORT   SWI4_IRQHandler [WEAK]
                EXPORT   SWI5_IRQHandler [WEAK]
                EXPORT   SWI6_IRQHandler [WEAK]
                EXPORT   SWI7_IRQHandler [WEAK]
                EXPORT   BELLBOARD_0_IRQHandler [WEAK]
                EXPORT   BELLBOARD_1_IRQHandler [WEAK]
                EXPORT   BELLBOARD_2_IRQHandler [WEAK]
                EXPORT   BELLBOARD_3_IRQHandler [WEAK]
                EXPORT   GPIOTE130_0_IRQHandler [WEAK]
                EXPORT   GPIOTE130_1_IRQHandler [WEAK]
                EXPORT   GPIOTE131_0_IRQHandler [WEAK]
                EXPORT   GPIOTE131_1_IRQHandler [WEAK]
                EXPORT   GRTC_0_IRQHandler [WEAK]
                EXPORT   GRTC_1_IRQHandler [WEAK]
                EXPORT   GRTC_2_IRQHandler [WEAK]
                EXPORT   ISIM_MHU_0_IRQHandler [WEAK]
                EXPORT   ISIM_MHU_1_IRQHandler [WEAK]
                EXPORT   ISIM_SPU_IRQHandler [WEAK]
                EXPORT   ISIM_MPC_IRQHandler [WEAK]
                EXPORT   ISIM_CICTRL_IRQHandler [WEAK]
                EXPORT   TBM_IRQHandler [WEAK]
                EXPORT   USBHS_IRQHandler [WEAK]
                EXPORT   MRAMC110_IRQHandler [WEAK]
                EXPORT   MRAMC111_IRQHandler [WEAK]
                EXPORT   EXMIF_IRQHandler [WEAK]
                EXPORT   OTPC_IRQHandler [WEAK]
                EXPORT   VPR120_IRQHandler [WEAK]
                EXPORT   IPCT120_0_IRQHandler [WEAK]
                EXPORT   I3C120_IRQHandler [WEAK]
                EXPORT   VPR121_IRQHandler [WEAK]
                EXPORT   CAN120_IRQHandler [WEAK]
                EXPORT   MVDMA120_IRQHandler [WEAK]
                EXPORT   CAN121_IRQHandler [WEAK]
                EXPORT   MVDMA121_IRQHandler [WEAK]
                EXPORT   I3C121_IRQHandler [WEAK]
                EXPORT   TIMER120_IRQHandler [WEAK]
                EXPORT   TIMER121_IRQHandler [WEAK]
                EXPORT   PWM120_IRQHandler [WEAK]
                EXPORT   SPIS120_IRQHandler [WEAK]
                EXPORT   SPIM120_UARTE120_IRQHandler [WEAK]
                EXPORT   SPIM121_IRQHandler [WEAK]
                EXPORT   TWIM120_IRQHandler [WEAK]
                EXPORT   SACR_IRQHandler [WEAK]
                EXPORT   VPR130_IRQHandler [WEAK]
                EXPORT   IPCT130_0_IRQHandler [WEAK]
                EXPORT   RTC130_IRQHandler [WEAK]
                EXPORT   RTC131_IRQHandler [WEAK]
                EXPORT   WDT131_IRQHandler [WEAK]
                EXPORT   WDT132_IRQHandler [WEAK]
                EXPORT   EGU130_IRQHandler [WEAK]
                EXPORT   RESETHUB_IRQHandler [WEAK]
                EXPORT   SAADC_IRQHandler [WEAK]
                EXPORT   COMP_LPCOMP_IRQHandler [WEAK]
                EXPORT   TEMP_IRQHandler [WEAK]
                EXPORT   I2S130_IRQHandler [WEAK]
                EXPORT   PDM_IRQHandler [WEAK]
                EXPORT   QDEC130_IRQHandler [WEAK]
                EXPORT   QDEC131_IRQHandler [WEAK]
                EXPORT   SIMIF130_IRQHandler [WEAK]
                EXPORT   I2S131_IRQHandler [WEAK]
                EXPORT   SIMIF131_IRQHandler [WEAK]
                EXPORT   MIPIRFFE_IRQHandler [WEAK]
                EXPORT   TIMER130_IRQHandler [WEAK]
                EXPORT   TIMER131_IRQHandler [WEAK]
                EXPORT   PWM130_IRQHandler [WEAK]
                EXPORT   SERIAL0_IRQHandler [WEAK]
                EXPORT   SERIAL1_IRQHandler [WEAK]
                EXPORT   TIMER132_IRQHandler [WEAK]
                EXPORT   TIMER133_IRQHandler [WEAK]
                EXPORT   PWM131_IRQHandler [WEAK]
                EXPORT   SERIAL2_IRQHandler [WEAK]
                EXPORT   SERIAL3_IRQHandler [WEAK]
                EXPORT   TIMER134_IRQHandler [WEAK]
                EXPORT   TIMER135_IRQHandler [WEAK]
                EXPORT   PWM132_IRQHandler [WEAK]
                EXPORT   SERIAL4_IRQHandler [WEAK]
                EXPORT   SERIAL5_IRQHandler [WEAK]
                EXPORT   TIMER136_IRQHandler [WEAK]
                EXPORT   TIMER137_IRQHandler [WEAK]
                EXPORT   PWM133_IRQHandler [WEAK]
                EXPORT   SERIAL6_IRQHandler [WEAK]
                EXPORT   SERIAL7_IRQHandler [WEAK]
SPU0_IRQHandler
MPC_IRQHandler
MVDMA_IRQHandler
AESLTE_IRQHandler
SNOW_IRQHandler
ZUC_IRQHandler
SPU1_IRQHandler
WDT0_IRQHandler
WDT1_IRQHandler
RTC_IRQHandler
SPU2_IRQHandler
LFCLKCALIBMEAS_IRQHandler
SPU3_IRQHandler
MCPLL_IRQHandler
SYSTEMTIMER_0_IRQHandler
SYSTEMTIMER_1_IRQHandler
LTETIMER_0_IRQHandler
LTETIMER_1_IRQHandler
GNSSTIMER_0_IRQHandler
GNSSTIMER_1_IRQHandler
IPCT_0_IRQHandler
IPCT_1_IRQHandler
IPCT_2_IRQHandler
IPCT_3_IRQHandler
IPCT_4_IRQHandler
IPCT_5_IRQHandler
SWI0_IRQHandler
SWI1_IRQHandler
SWI2_IRQHandler
SWI3_IRQHandler
SWI4_IRQHandler
SWI5_IRQHandler
SWI6_IRQHandler
SWI7_IRQHandler
BELLBOARD_0_IRQHandler
BELLBOARD_1_IRQHandler
BELLBOARD_2_IRQHandler
BELLBOARD_3_IRQHandler
GPIOTE130_0_IRQHandler
GPIOTE130_1_IRQHandler
GPIOTE131_0_IRQHandler
GPIOTE131_1_IRQHandler
GRTC_0_IRQHandler
GRTC_1_IRQHandler
GRTC_2_IRQHandler
ISIM_MHU_0_IRQHandler
ISIM_MHU_1_IRQHandler
ISIM_SPU_IRQHandler
ISIM_MPC_IRQHandler
ISIM_CICTRL_IRQHandler
TBM_IRQHandler
USBHS_IRQHandler
MRAMC110_IRQHandler
MRAMC111_IRQHandler
EXMIF_IRQHandler
OTPC_IRQHandler
VPR120_IRQHandler
IPCT120_0_IRQHandler
I3C120_IRQHandler
VPR121_IRQHandler
CAN120_IRQHandler
MVDMA120_IRQHandler
CAN121_IRQHandler
MVDMA121_IRQHandler
I3C121_IRQHandler
TIMER120_IRQHandler
TIMER121_IRQHandler
PWM120_IRQHandler
SPIS120_IRQHandler
SPIM120_UARTE120_IRQHandler
SPIM121_IRQHandler
TWIM120_IRQHandler
SACR_IRQHandler
VPR130_IRQHandler
IPCT130_0_IRQHandler
RTC130_IRQHandler
RTC131_IRQHandler
WDT131_IRQHandler
WDT132_IRQHandler
EGU130_IRQHandler
RESETHUB_IRQHandler
SAADC_IRQHandler
COMP_LPCOMP_IRQHandler
TEMP_IRQHandler
I2S130_IRQHandler
PDM_IRQHandler
QDEC130_IRQHandler
QDEC131_IRQHandler
SIMIF130_IRQHandler
I2S131_IRQHandler
SIMIF131_IRQHandler
MIPIRFFE_IRQHandler
TIMER130_IRQHandler
TIMER131_IRQHandler
PWM130_IRQHandler
SERIAL0_IRQHandler
SERIAL1_IRQHandler
TIMER132_IRQHandler
TIMER133_IRQHandler
PWM131_IRQHandler
SERIAL2_IRQHandler
SERIAL3_IRQHandler
TIMER134_IRQHandler
TIMER135_IRQHandler
PWM132_IRQHandler
SERIAL4_IRQHandler
SERIAL5_IRQHandler
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
