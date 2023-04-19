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
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
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
        DCD     L2CACHE_IRQHandler
        DCD     GRAMC00_IRQHandler
        DCD     GRAMC01_IRQHandler
        DCD     AXI0_IRQHandler
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
        DCD     MRAMC00_IRQHandler
        DCD     MRAMC01_IRQHandler
        DCD     EXMEE_IRQHandler
        DCD     EXMIF_IRQHandler
        DCD     AXI1_IRQHandler
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
        DCD     0                         ; Reserved
        DCD     GRAMC10_IRQHandler
        DCD     GRAMC11_IRQHandler
        DCD     OTPC00_IRQHandler
        DCD     GROMC00_IRQHandler
        DCD     0                         ; Reserved
        DCD     VPR_IRQHandler
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     HSFLL_IRQHandler
        DCD     LRCCONF0_IRQHandler
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
        DCD     GRAMC20_IRQHandler
        DCD     GRAMC21_IRQHandler
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
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
        DCD     GWDT0_IRQHandler
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
        DCD     LRCCONF1_IRQHandler
        DCD     0                         ; Reserved
        DCD     GRTC_IRQHandler
        DCD     0                         ; Reserved
        DCD     GGENERIC13_IRQHandler
        DCD     RESETHUB_IRQHandler
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     GRCCONF_IRQHandler
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     CLOCK_IRQHandler
        DCD     LFRC_IRQHandler
        DCD     GGENERIC18_IRQHandler
        DCD     GGENERIC19_IRQHandler
        DCD     0                         ; Reserved
        DCD     GGENERIC20_IRQHandler
        DCD     0                         ; Reserved
        DCD     GGENERIC22_IRQHandler
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     POWER_IRQHandler
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     GGENERIC29_IRQHandler
        DCD     GGENERIC30_IRQHandler
        DCD     VREGMRAM00_IRQHandler
        DCD     VREGMRAM01_IRQHandler
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     MBIAS_IRQHandler
        DCD     VDETAO1V8_IRQHandler
        DCD     VDETAO0V8_IRQHandler
        DCD     VDETVS0V8_IRQHandler
        DCD     GGENERIC36_IRQHandler
        DCD     0                         ; Reserved
        DCD     GGENERIC38_IRQHandler
        DCD     GGENERIC39_IRQHandler
        DCD     GGENERIC40_IRQHandler
        DCD     GGENERIC41_IRQHandler
        DCD     GGENERIC42_IRQHandler
        DCD     GGENERIC43_IRQHandler
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

        PUBWEAK  GPIOTE00_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GPIOTE00_IRQHandler
        j .

        PUBWEAK  GPIOTE01_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GPIOTE01_IRQHandler
        j .

        PUBWEAK  GPIOTE10_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GPIOTE10_IRQHandler
        j .

        PUBWEAK  GPIOTE11_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GPIOTE11_IRQHandler
        j .

        PUBWEAK  L2CACHE_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
L2CACHE_IRQHandler
        j .

        PUBWEAK  GRAMC00_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GRAMC00_IRQHandler
        j .

        PUBWEAK  GRAMC01_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GRAMC01_IRQHandler
        j .

        PUBWEAK  AXI0_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
AXI0_IRQHandler
        j .

        PUBWEAK  USBHS_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
USBHS_IRQHandler
        j .

        PUBWEAK  SHA3_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
SHA3_IRQHandler
        j .

        PUBWEAK  MRAMC00_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
MRAMC00_IRQHandler
        j .

        PUBWEAK  MRAMC01_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
MRAMC01_IRQHandler
        j .

        PUBWEAK  EXMEE_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
EXMEE_IRQHandler
        j .

        PUBWEAK  EXMIF_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
EXMIF_IRQHandler
        j .

        PUBWEAK  AXI1_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
AXI1_IRQHandler
        j .

        PUBWEAK  MVDMA_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
MVDMA_IRQHandler
        j .

        PUBWEAK  GRAMC10_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GRAMC10_IRQHandler
        j .

        PUBWEAK  GRAMC11_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GRAMC11_IRQHandler
        j .

        PUBWEAK  OTPC00_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
OTPC00_IRQHandler
        j .

        PUBWEAK  GROMC00_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GROMC00_IRQHandler
        j .

        PUBWEAK  VPR_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VPR_IRQHandler
        j .

        PUBWEAK  HSFLL_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
HSFLL_IRQHandler
        j .

        PUBWEAK  LRCCONF0_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
LRCCONF0_IRQHandler
        j .

        PUBWEAK  GIPCT00_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GIPCT00_IRQHandler
        j .

        PUBWEAK  I3C0_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
I3C0_IRQHandler
        j .

        PUBWEAK  I3C1_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
I3C1_IRQHandler
        j .

        PUBWEAK  GTIMER0_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GTIMER0_IRQHandler
        j .

        PUBWEAK  GTIMER1_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GTIMER1_IRQHandler
        j .

        PUBWEAK  PWM0_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
PWM0_IRQHandler
        j .

        PUBWEAK  HSSPIM0_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
HSSPIM0_IRQHandler
        j .

        PUBWEAK  HSSPIM1_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
HSSPIM1_IRQHandler
        j .

        PUBWEAK  GRAMC20_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GRAMC20_IRQHandler
        j .

        PUBWEAK  GRAMC21_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GRAMC21_IRQHandler
        j .

        PUBWEAK  GIPCT10_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GIPCT10_IRQHandler
        j .

        PUBWEAK  GRTC0_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GRTC0_IRQHandler
        j .

        PUBWEAK  GRTC1_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GRTC1_IRQHandler
        j .

        PUBWEAK  GWDT0_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GWDT0_IRQHandler
        j .

        PUBWEAK  GWDT1_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GWDT1_IRQHandler
        j .

        PUBWEAK  GWDT2_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GWDT2_IRQHandler
        j .

        PUBWEAK  LRCCONF1_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
LRCCONF1_IRQHandler
        j .

        PUBWEAK  GRTC_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GRTC_IRQHandler
        j .

        PUBWEAK  GGENERIC13_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GGENERIC13_IRQHandler
        j .

        PUBWEAK  RESETHUB_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
RESETHUB_IRQHandler
        j .

        PUBWEAK  GRCCONF_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GRCCONF_IRQHandler
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

        PUBWEAK  GGENERIC19_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GGENERIC19_IRQHandler
        j .

        PUBWEAK  GGENERIC20_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GGENERIC20_IRQHandler
        j .

        PUBWEAK  GGENERIC22_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GGENERIC22_IRQHandler
        j .

        PUBWEAK  POWER_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
POWER_IRQHandler
        j .

        PUBWEAK  GGENERIC29_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GGENERIC29_IRQHandler
        j .

        PUBWEAK  GGENERIC30_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GGENERIC30_IRQHandler
        j .

        PUBWEAK  VREGMRAM00_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VREGMRAM00_IRQHandler
        j .

        PUBWEAK  VREGMRAM01_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VREGMRAM01_IRQHandler
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

        PUBWEAK  GGENERIC36_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GGENERIC36_IRQHandler
        j .

        PUBWEAK  GGENERIC38_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GGENERIC38_IRQHandler
        j .

        PUBWEAK  GGENERIC39_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GGENERIC39_IRQHandler
        j .

        PUBWEAK  GGENERIC40_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GGENERIC40_IRQHandler
        j .

        PUBWEAK  GGENERIC41_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GGENERIC41_IRQHandler
        j .

        PUBWEAK  GGENERIC42_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GGENERIC42_IRQHandler
        j .

        PUBWEAK  GGENERIC43_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GGENERIC43_IRQHandler
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

        PUBWEAK  I2S_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
I2S_IRQHandler
        j .

        PUBWEAK  PDM_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
PDM_IRQHandler
        j .

        PUBWEAK  QDEC0_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
QDEC0_IRQHandler
        j .

        PUBWEAK  QDEC1_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
QDEC1_IRQHandler
        j .

        PUBWEAK  SIMIF_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
SIMIF_IRQHandler
        j .

        PUBWEAK  GMIPIRFFE_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GMIPIRFFE_IRQHandler
        j .

        PUBWEAK  TWIM8_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
TWIM8_IRQHandler
        j .

        PUBWEAK  GTIMER2_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GTIMER2_IRQHandler
        j .

        PUBWEAK  GTIMER3_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GTIMER3_IRQHandler
        j .

        PUBWEAK  PWM1_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
PWM1_IRQHandler
        j .

        PUBWEAK  SERIAL0_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
SERIAL0_IRQHandler
        j .

        PUBWEAK  SERIAL1_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
SERIAL1_IRQHandler
        j .

        PUBWEAK  GTIMER4_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GTIMER4_IRQHandler
        j .

        PUBWEAK  GTIMER5_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GTIMER5_IRQHandler
        j .

        PUBWEAK  PWM2_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
PWM2_IRQHandler
        j .

        PUBWEAK  SERIAL2_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
SERIAL2_IRQHandler
        j .

        PUBWEAK  SERIAL3_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
SERIAL3_IRQHandler
        j .

        PUBWEAK  GTIMER6_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GTIMER6_IRQHandler
        j .

        PUBWEAK  GTIMER7_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GTIMER7_IRQHandler
        j .

        PUBWEAK  PWM3_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
PWM3_IRQHandler
        j .

        PUBWEAK  SERIAL4_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
SERIAL4_IRQHandler
        j .

        PUBWEAK  SERIAL5_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
SERIAL5_IRQHandler
        j .

        PUBWEAK  GTIMER8_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GTIMER8_IRQHandler
        j .

        PUBWEAK  GTIMER9_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GTIMER9_IRQHandler
        j .

        PUBWEAK  PWM4_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
PWM4_IRQHandler
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


