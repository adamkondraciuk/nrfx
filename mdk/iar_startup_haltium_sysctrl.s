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
        DCD     VPR0_0_IRQHandler
        DCD     VPR0_1_IRQHandler
        DCD     VPR0_2_IRQHandler
        DCD     VPR0_3_IRQHandler
        DCD     VPR0_4_IRQHandler
        DCD     VPR0_5_IRQHandler
        DCD     VPR0_6_IRQHandler
        DCD     VPR0_7_IRQHandler
        DCD     VPR0_8_IRQHandler
        DCD     VPR0_9_IRQHandler
        DCD     VPR0_10_IRQHandler
        DCD     VPR0_11_IRQHandler
        DCD     VPR0_12_IRQHandler
        DCD     VPR0_13_IRQHandler
        DCD     VPR0_14_IRQHandler
        DCD     VPR0_15_IRQHandler
        DCD     VPR0_16_IRQHandler
        DCD     VPR0_17_IRQHandler
        DCD     VPR0_18_IRQHandler
        DCD     VPR0_19_IRQHandler
        DCD     VPR0_20_IRQHandler
        DCD     VPR0_21_IRQHandler
        DCD     VPR0_22_IRQHandler
        DCD     VPR0_23_IRQHandler
        DCD     VPR0_24_IRQHandler
        DCD     VPR0_25_IRQHandler
        DCD     VPR0_26_IRQHandler
        DCD     VPR0_27_IRQHandler
        DCD     VPR0_28_IRQHandler
        DCD     VPR0_29_IRQHandler
        DCD     VPR0_30_IRQHandler
        DCD     VPR0_31_IRQHandler
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     GPIOTE130_0_IRQHandler
        DCD     GPIOTE130_1_IRQHandler
        DCD     GPIOTE131_0_IRQHandler
        DCD     GPIOTE1310_1_IRQHandler
        DCD     GRTC0_0_IRQHandler
        DCD     GRTC0_1_IRQHandler
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
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
        DCD     L2CACHE_IRQHandler
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     USBHS_IRQHandler
        DCD     0                         ; Reserved
        DCD     SHA3_IRQHandler
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
        DCD     EXMEE_IRQHandler
        DCD     EXMIF_IRQHandler
        DCD     0                         ; Reserved
        DCD     MVDMA_IRQHandler
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     CANPLL_CANPLLPM_IRQHandler
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
        DCD     IPCT120_IRQHandler
        DCD     0                         ; Reserved
        DCD     I3C120_IRQHandler
        DCD     VPR121_IRQHandler
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
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     TIMER120_IRQHandler
        DCD     TIMER121_IRQHandler
        DCD     PWM120_IRQHandler
        DCD     SPIS120_UARTE120_IRQHandler
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
        DCD     IPCT130_IRQHandler
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     RTC130_IRQHandler
        DCD     RTC131_IRQHandler
        DCD     WDT130_IRQHandler
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
        DCD     GRCCONF0_IRQHandler
        DCD     GRCCONF1_IRQHandler
        DCD     GRCCONF2_IRQHandler
        DCD     PCRM_IRQHandler
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
        DCD     CLOCK_IRQHandler
        DCD     LFRC_IRQHandler
        DCD     GGENERIC18_IRQHandler
        DCD     LFXO_IRQHandler
        DCD     FLL16M_IRQHandler
        DCD     HFXO_IRQHandler
        DCD     0                         ; Reserved
        DCD     AUDIOPLL_IRQHandler
        DCD     USBHSPLL_IRQHandler
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     POWER_IRQHandler
        DCD     VREGMAIN_IRQHandler
        DCD     VREGAO1V8_IRQHandler
        DCD     VREG1V0_IRQHandler
        DCD     VREGAO0V8_IRQHandler
        DCD     VREGVS0V8_IRQHandler
        DCD     0                         ; Reserved
        DCD     VREGUSB_IRQHandler
        DCD     AUDIOPLLPM_IRQHandler
        DCD     VREGMRAM130_IRQHandler
        DCD     VREGMRAM131_IRQHandler
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     MBIAS_IRQHandler
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     VDETAO1V8_IRQHandler
        DCD     VDETAO0V8_IRQHandler
        DCD     VDETVS0V8_IRQHandler
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     VDETAO5V0_IRQHandler
        DCD     VDET1V0_IRQHandler
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
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
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
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

        PUBWEAK  VPR0_0_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VPR0_0_IRQHandler
        j .

        PUBWEAK  VPR0_1_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VPR0_1_IRQHandler
        j .

        PUBWEAK  VPR0_2_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VPR0_2_IRQHandler
        j .

        PUBWEAK  VPR0_3_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VPR0_3_IRQHandler
        j .

        PUBWEAK  VPR0_4_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VPR0_4_IRQHandler
        j .

        PUBWEAK  VPR0_5_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VPR0_5_IRQHandler
        j .

        PUBWEAK  VPR0_6_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VPR0_6_IRQHandler
        j .

        PUBWEAK  VPR0_7_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VPR0_7_IRQHandler
        j .

        PUBWEAK  VPR0_8_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VPR0_8_IRQHandler
        j .

        PUBWEAK  VPR0_9_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VPR0_9_IRQHandler
        j .

        PUBWEAK  VPR0_10_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VPR0_10_IRQHandler
        j .

        PUBWEAK  VPR0_11_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VPR0_11_IRQHandler
        j .

        PUBWEAK  VPR0_12_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VPR0_12_IRQHandler
        j .

        PUBWEAK  VPR0_13_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VPR0_13_IRQHandler
        j .

        PUBWEAK  VPR0_14_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VPR0_14_IRQHandler
        j .

        PUBWEAK  VPR0_15_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VPR0_15_IRQHandler
        j .

        PUBWEAK  VPR0_16_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VPR0_16_IRQHandler
        j .

        PUBWEAK  VPR0_17_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VPR0_17_IRQHandler
        j .

        PUBWEAK  VPR0_18_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VPR0_18_IRQHandler
        j .

        PUBWEAK  VPR0_19_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VPR0_19_IRQHandler
        j .

        PUBWEAK  VPR0_20_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VPR0_20_IRQHandler
        j .

        PUBWEAK  VPR0_21_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VPR0_21_IRQHandler
        j .

        PUBWEAK  VPR0_22_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VPR0_22_IRQHandler
        j .

        PUBWEAK  VPR0_23_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VPR0_23_IRQHandler
        j .

        PUBWEAK  VPR0_24_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VPR0_24_IRQHandler
        j .

        PUBWEAK  VPR0_25_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VPR0_25_IRQHandler
        j .

        PUBWEAK  VPR0_26_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VPR0_26_IRQHandler
        j .

        PUBWEAK  VPR0_27_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VPR0_27_IRQHandler
        j .

        PUBWEAK  VPR0_28_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VPR0_28_IRQHandler
        j .

        PUBWEAK  VPR0_29_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VPR0_29_IRQHandler
        j .

        PUBWEAK  VPR0_30_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VPR0_30_IRQHandler
        j .

        PUBWEAK  VPR0_31_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VPR0_31_IRQHandler
        j .

        PUBWEAK  GPIOTE130_0_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GPIOTE130_0_IRQHandler
        j .

        PUBWEAK  GPIOTE130_1_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GPIOTE130_1_IRQHandler
        j .

        PUBWEAK  GPIOTE131_0_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GPIOTE131_0_IRQHandler
        j .

        PUBWEAK  GPIOTE1310_1_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GPIOTE1310_1_IRQHandler
        j .

        PUBWEAK  GRTC0_0_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GRTC0_0_IRQHandler
        j .

        PUBWEAK  GRTC0_1_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GRTC0_1_IRQHandler
        j .

        PUBWEAK  TBM_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
TBM_IRQHandler
        j .

        PUBWEAK  L2CACHE_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
L2CACHE_IRQHandler
        j .

        PUBWEAK  USBHS_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
USBHS_IRQHandler
        j .

        PUBWEAK  SHA3_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
SHA3_IRQHandler
        j .

        PUBWEAK  MRAMC110_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
MRAMC110_IRQHandler
        j .

        PUBWEAK  MRAMC111_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
MRAMC111_IRQHandler
        j .

        PUBWEAK  EXMEE_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
EXMEE_IRQHandler
        j .

        PUBWEAK  EXMIF_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
EXMIF_IRQHandler
        j .

        PUBWEAK  MVDMA_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
MVDMA_IRQHandler
        j .

        PUBWEAK  CANPLL_CANPLLPM_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
CANPLL_CANPLLPM_IRQHandler
        j .

        PUBWEAK  OTPC_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
OTPC_IRQHandler
        j .

        PUBWEAK  VPR120_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VPR120_IRQHandler
        j .

        PUBWEAK  IPCT120_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
IPCT120_IRQHandler
        j .

        PUBWEAK  I3C120_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
I3C120_IRQHandler
        j .

        PUBWEAK  VPR121_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VPR121_IRQHandler
        j .

        PUBWEAK  CAN_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
CAN_IRQHandler
        j .

        PUBWEAK  I3C121_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
I3C121_IRQHandler
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

        PUBWEAK  SPIS120_UARTE120_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
SPIS120_UARTE120_IRQHandler
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

        PUBWEAK  VPR130_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VPR130_IRQHandler
        j .

        PUBWEAK  IPCT130_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
IPCT130_IRQHandler
        j .

        PUBWEAK  RTC130_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
RTC130_IRQHandler
        j .

        PUBWEAK  RTC131_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
RTC131_IRQHandler
        j .

        PUBWEAK  WDT130_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
WDT130_IRQHandler
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

        PUBWEAK  GRCCONF0_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GRCCONF0_IRQHandler
        j .

        PUBWEAK  GRCCONF1_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GRCCONF1_IRQHandler
        j .

        PUBWEAK  GRCCONF2_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GRCCONF2_IRQHandler
        j .

        PUBWEAK  PCRM_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
PCRM_IRQHandler
        j .

        PUBWEAK  RESETHUB_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
RESETHUB_IRQHandler
        j .

        PUBWEAK  CLOCK_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
CLOCK_IRQHandler
        j .

        PUBWEAK  LFRC_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
LFRC_IRQHandler
        j .

        PUBWEAK  GGENERIC18_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GGENERIC18_IRQHandler
        j .

        PUBWEAK  LFXO_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
LFXO_IRQHandler
        j .

        PUBWEAK  FLL16M_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
FLL16M_IRQHandler
        j .

        PUBWEAK  HFXO_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
HFXO_IRQHandler
        j .

        PUBWEAK  AUDIOPLL_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
AUDIOPLL_IRQHandler
        j .

        PUBWEAK  USBHSPLL_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
USBHSPLL_IRQHandler
        j .

        PUBWEAK  POWER_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
POWER_IRQHandler
        j .

        PUBWEAK  VREGMAIN_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VREGMAIN_IRQHandler
        j .

        PUBWEAK  VREGAO1V8_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VREGAO1V8_IRQHandler
        j .

        PUBWEAK  VREG1V0_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VREG1V0_IRQHandler
        j .

        PUBWEAK  VREGAO0V8_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VREGAO0V8_IRQHandler
        j .

        PUBWEAK  VREGVS0V8_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VREGVS0V8_IRQHandler
        j .

        PUBWEAK  VREGUSB_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VREGUSB_IRQHandler
        j .

        PUBWEAK  AUDIOPLLPM_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
AUDIOPLLPM_IRQHandler
        j .

        PUBWEAK  VREGMRAM130_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VREGMRAM130_IRQHandler
        j .

        PUBWEAK  VREGMRAM131_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VREGMRAM131_IRQHandler
        j .

        PUBWEAK  MBIAS_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
MBIAS_IRQHandler
        j .

        PUBWEAK  VDETAO1V8_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VDETAO1V8_IRQHandler
        j .

        PUBWEAK  VDETAO0V8_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VDETAO0V8_IRQHandler
        j .

        PUBWEAK  VDETVS0V8_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VDETVS0V8_IRQHandler
        j .

        PUBWEAK  VDETAO5V0_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VDETAO5V0_IRQHandler
        j .

        PUBWEAK  VDET1V0_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VDET1V0_IRQHandler
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


