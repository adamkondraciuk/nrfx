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
        DCD     VPRCLIC_0_IRQHandler
        DCD     VPRCLIC_1_IRQHandler
        DCD     VPRCLIC_2_IRQHandler
        DCD     VPRCLIC_3_IRQHandler
        DCD     VPRCLIC_4_IRQHandler
        DCD     VPRCLIC_5_IRQHandler
        DCD     VPRCLIC_6_IRQHandler
        DCD     VPRCLIC_7_IRQHandler
        DCD     VPRCLIC_8_IRQHandler
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     VPRTIM_IRQHandler
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     RPU_0_IRQHandler
        DCD     RPU_1_IRQHandler
        DCD     RPU_2_IRQHandler
        DCD     RPU_3_IRQHandler
        DCD     RPU_EFS_0_IRQHandler
        DCD     RPU_EFS_1_IRQHandler
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     LMAC_VPR_IRQHandler
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
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
        DCD     IPCT_0_IRQHandler
        DCD     IPCT_1_IRQHandler
        DCD     IPCT_2_IRQHandler
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     BELLBOARD_WIFI_0_IRQHandler
        DCD     BELLBOARD_WIFI_1_IRQHandler
        DCD     BELLBOARD_WIFI_2_IRQHandler
        DCD     BELLBOARD_WIFI_3_IRQHandler
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     GPIOTE130_0_IRQHandler
        DCD     GPIOTE130_1_IRQHandler
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     GRTC_0_IRQHandler
        DCD     GRTC_1_IRQHandler
        DCD     GRTC_2_IRQHandler
        DCD     GSI_IRQHandler
        DCD     DISPC_0_IRQHandler
        DCD     DISPC_1_IRQHandler
        DCD     DISPC_2_IRQHandler
        DCD     GPU_IRQHandler
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
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
        DCD     QSPI120_IRQHandler
        DCD     CAN120_IRQHandler
        DCD     MVDMA120_IRQHandler
        DCD     0                         ; Reserved
        DCD     CAN121_IRQHandler
        DCD     MVDMA121_IRQHandler
        DCD     0                         ; Reserved
        DCD     I3C121_IRQHandler
        DCD     QSPI121_IRQHandler
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     TIMER120_IRQHandler
        DCD     TIMER121_IRQHandler
        DCD     PWM120_IRQHandler
        DCD     SPIS120_IRQHandler
        DCD     UARTE120_IRQHandler
        DCD     SPIM121_IRQHandler
        DCD     SPIM122_IRQHandler
        DCD     SPIM123_IRQHandler
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
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
        DCD     AUDIOPLL_IRQHandler
        DCD     USBHSPLL_IRQHandler
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     VREGUSB_IRQHandler
        DCD     AUDIOPLLPM_IRQHandler
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
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
        DCD     TDM130_IRQHandler
        DCD     0                         ; Reserved
        DCD     QDEC130_IRQHandler
        DCD     QDEC131_IRQHandler
        DCD     SIMIF130_IRQHandler
        DCD     TDM131_IRQHandler
        DCD     0                         ; Reserved
        DCD     TDM132_IRQHandler
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
        DCD     UARTE130_IRQHandler
        DCD     UARTE131_IRQHandler
        DCD     PDM130_IRQHandler
        DCD     0                         ; Reserved
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
        DCD     UARTE132_IRQHandler
        DCD     UARTE133_IRQHandler
        DCD     PDM131_IRQHandler
        DCD     0                         ; Reserved
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
        DCD     UARTE134_IRQHandler
        DCD     UARTE135_IRQHandler
        DCD     PDM132_IRQHandler
        DCD     0                         ; Reserved
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
        DCD     UARTE136_IRQHandler
        DCD     UARTE137_IRQHandler
        DCD     PDM133_IRQHandler
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

        PUBWEAK  VPRCLIC_0_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VPRCLIC_0_IRQHandler
        j .

        PUBWEAK  VPRCLIC_1_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VPRCLIC_1_IRQHandler
        j .

        PUBWEAK  VPRCLIC_2_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VPRCLIC_2_IRQHandler
        j .

        PUBWEAK  VPRCLIC_3_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VPRCLIC_3_IRQHandler
        j .

        PUBWEAK  VPRCLIC_4_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VPRCLIC_4_IRQHandler
        j .

        PUBWEAK  VPRCLIC_5_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VPRCLIC_5_IRQHandler
        j .

        PUBWEAK  VPRCLIC_6_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VPRCLIC_6_IRQHandler
        j .

        PUBWEAK  VPRCLIC_7_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VPRCLIC_7_IRQHandler
        j .

        PUBWEAK  VPRCLIC_8_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VPRCLIC_8_IRQHandler
        j .

        PUBWEAK  VPRTIM_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VPRTIM_IRQHandler
        j .

        PUBWEAK  RPU_0_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
RPU_0_IRQHandler
        j .

        PUBWEAK  RPU_1_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
RPU_1_IRQHandler
        j .

        PUBWEAK  RPU_2_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
RPU_2_IRQHandler
        j .

        PUBWEAK  RPU_3_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
RPU_3_IRQHandler
        j .

        PUBWEAK  RPU_EFS_0_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
RPU_EFS_0_IRQHandler
        j .

        PUBWEAK  RPU_EFS_1_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
RPU_EFS_1_IRQHandler
        j .

        PUBWEAK  LMAC_VPR_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
LMAC_VPR_IRQHandler
        j .

        PUBWEAK  MVDMA_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
MVDMA_IRQHandler
        j .

        PUBWEAK  IPCT_0_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
IPCT_0_IRQHandler
        j .

        PUBWEAK  IPCT_1_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
IPCT_1_IRQHandler
        j .

        PUBWEAK  IPCT_2_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
IPCT_2_IRQHandler
        j .

        PUBWEAK  BELLBOARD_WIFI_0_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
BELLBOARD_WIFI_0_IRQHandler
        j .

        PUBWEAK  BELLBOARD_WIFI_1_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
BELLBOARD_WIFI_1_IRQHandler
        j .

        PUBWEAK  BELLBOARD_WIFI_2_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
BELLBOARD_WIFI_2_IRQHandler
        j .

        PUBWEAK  BELLBOARD_WIFI_3_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
BELLBOARD_WIFI_3_IRQHandler
        j .

        PUBWEAK  GPIOTE130_0_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GPIOTE130_0_IRQHandler
        j .

        PUBWEAK  GPIOTE130_1_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GPIOTE130_1_IRQHandler
        j .

        PUBWEAK  GRTC_0_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GRTC_0_IRQHandler
        j .

        PUBWEAK  GRTC_1_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GRTC_1_IRQHandler
        j .

        PUBWEAK  GRTC_2_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GRTC_2_IRQHandler
        j .

        PUBWEAK  GSI_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GSI_IRQHandler
        j .

        PUBWEAK  DISPC_0_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
DISPC_0_IRQHandler
        j .

        PUBWEAK  DISPC_1_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
DISPC_1_IRQHandler
        j .

        PUBWEAK  DISPC_2_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
DISPC_2_IRQHandler
        j .

        PUBWEAK  GPU_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GPU_IRQHandler
        j .

        PUBWEAK  TBM_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
TBM_IRQHandler
        j .

        PUBWEAK  USBHS_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
USBHS_IRQHandler
        j .

        PUBWEAK  MRAMC110_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
MRAMC110_IRQHandler
        j .

        PUBWEAK  MRAMC111_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
MRAMC111_IRQHandler
        j .

        PUBWEAK  EXMIF_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
EXMIF_IRQHandler
        j .

        PUBWEAK  OTPC_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
OTPC_IRQHandler
        j .

        PUBWEAK  VPR120_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VPR120_IRQHandler
        j .

        PUBWEAK  IPCT120_0_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
IPCT120_0_IRQHandler
        j .

        PUBWEAK  I3C120_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
I3C120_IRQHandler
        j .

        PUBWEAK  VPR121_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VPR121_IRQHandler
        j .

        PUBWEAK  QSPI120_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
QSPI120_IRQHandler
        j .

        PUBWEAK  CAN120_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
CAN120_IRQHandler
        j .

        PUBWEAK  MVDMA120_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
MVDMA120_IRQHandler
        j .

        PUBWEAK  CAN121_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
CAN121_IRQHandler
        j .

        PUBWEAK  MVDMA121_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
MVDMA121_IRQHandler
        j .

        PUBWEAK  I3C121_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
I3C121_IRQHandler
        j .

        PUBWEAK  QSPI121_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
QSPI121_IRQHandler
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

        PUBWEAK  UARTE120_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
UARTE120_IRQHandler
        j .

        PUBWEAK  SPIM121_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
SPIM121_IRQHandler
        j .

        PUBWEAK  SPIM122_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
SPIM122_IRQHandler
        j .

        PUBWEAK  SPIM123_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
SPIM123_IRQHandler
        j .

        PUBWEAK  VPR130_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VPR130_IRQHandler
        j .

        PUBWEAK  IPCT130_0_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
IPCT130_0_IRQHandler
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

        PUBWEAK  RESETHUB_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
RESETHUB_IRQHandler
        j .

        PUBWEAK  AUDIOPLL_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
AUDIOPLL_IRQHandler
        j .

        PUBWEAK  USBHSPLL_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
USBHSPLL_IRQHandler
        j .

        PUBWEAK  VREGUSB_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
VREGUSB_IRQHandler
        j .

        PUBWEAK  AUDIOPLLPM_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
AUDIOPLLPM_IRQHandler
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

        PUBWEAK  TDM130_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
TDM130_IRQHandler
        j .

        PUBWEAK  QDEC130_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
QDEC130_IRQHandler
        j .

        PUBWEAK  QDEC131_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
QDEC131_IRQHandler
        j .

        PUBWEAK  SIMIF130_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
SIMIF130_IRQHandler
        j .

        PUBWEAK  TDM131_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
TDM131_IRQHandler
        j .

        PUBWEAK  TDM132_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
TDM132_IRQHandler
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

        PUBWEAK  UARTE130_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
UARTE130_IRQHandler
        j .

        PUBWEAK  UARTE131_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
UARTE131_IRQHandler
        j .

        PUBWEAK  PDM130_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
PDM130_IRQHandler
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

        PUBWEAK  UARTE132_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
UARTE132_IRQHandler
        j .

        PUBWEAK  UARTE133_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
UARTE133_IRQHandler
        j .

        PUBWEAK  PDM131_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
PDM131_IRQHandler
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

        PUBWEAK  UARTE134_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
UARTE134_IRQHandler
        j .

        PUBWEAK  UARTE135_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
UARTE135_IRQHandler
        j .

        PUBWEAK  PDM132_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
PDM132_IRQHandler
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

        PUBWEAK  UARTE136_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
UARTE136_IRQHandler
        j .

        PUBWEAK  UARTE137_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
UARTE137_IRQHandler
        j .

        PUBWEAK  PDM133_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
PDM133_IRQHandler
        j .

        END


