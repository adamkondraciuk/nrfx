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
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     GRTC_0_IRQHandler
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     UARTE120_IRQHandler
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
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
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
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
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
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
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
        DCD     0                         ; Reserved
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

        PUBWEAK  GRTC_0_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
GRTC_0_IRQHandler
        j .

        PUBWEAK  UARTE120_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
UARTE120_IRQHandler
        j .

        PUBWEAK  SERIAL0_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
SERIAL0_IRQHandler
        j .

        PUBWEAK  SERIAL1_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
SERIAL1_IRQHandler
        j .

        PUBWEAK  SERIAL2_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
SERIAL2_IRQHandler
        j .

        PUBWEAK  SERIAL3_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
SERIAL3_IRQHandler
        j .

        PUBWEAK  SERIAL4_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
SERIAL4_IRQHandler
        j .

        PUBWEAK  SERIAL5_IRQHandler
        SECTION .text:CODE:REORDER:NOROOT(1)
SERIAL5_IRQHandler
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


