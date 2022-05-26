/*
 
Copyright (c) 2009-2022 ARM Limited. All rights reserved.

    SPDX-License-Identifier: Apache-2.0

Licensed under the Apache License, Version 2.0 (the License); you may
not use this file except in compliance with the License.
You may obtain a copy of the License at

    www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an AS IS BASIS, WITHOUT
WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.

NOTICE: This file has been modified by Nordic Semiconductor ASA.

*/

/*

This file was modified by Nordic Semiconductor to support RISC-V devices.

*/

/* ============================ *
 *     Stack configuration      *
 * ============================ */

#ifndef __ASSEMBLY__
    #define __ASSEMBLY__
#endif
#include "core_vpr.h"

#ifdef __STARTUP_CONFIG
#include "startup_config.h"
#ifndef __STARTUP_CONFIG_STACK_ALIGNEMENT
#define __STARTUP_CONFIG_STACK_ALIGNEMENT 3
#endif
#endif

    .section .stack
#if defined(__STARTUP_CONFIG)
    .align __STARTUP_CONFIG_STACK_ALIGNEMENT
    .equ    Stack_Size, __STARTUP_CONFIG_STACK_SIZE
#elif defined(__STACK_SIZE)
    .align 3
    .equ    Stack_Size, __STACK_SIZE
#else
    .align 3
    .equ    Stack_Size, 16384
#endif
    .globl __StackTop
    .globl __StackLimit
__StackLimit:
    .space Stack_Size
    .size __StackLimit, . - __StackLimit
__StackTop:
    .size __StackTop, . - __StackTop


/* ============================ *
 *      Heap configuration      *
 * ============================ */
    .section .heap
    .align 3
#if defined(__STARTUP_CONFIG)
    .equ Heap_Size, __STARTUP_CONFIG_HEAP_SIZE
#elif defined(__HEAP_SIZE)
    .equ Heap_Size, __HEAP_SIZE
#else
    .equ Heap_Size, 16384
#endif
    .globl __HeapBase
    .globl __HeapLimit
__HeapBase:
    .if Heap_Size
    .space Heap_Size
    .endif
    .size __HeapBase, . - __HeapBase
__HeapLimit:
    .size __HeapLimit, . - __HeapLimit

/* ============================ *
 *         Startup code         *
 * ============================ */
/* Reset Handler */


    .section .init, "ax"
    .align 1
    .globl Reset_Handler
    .type Reset_Handler, %function
Reset_Handler:
    .option push
    .option norelax
    la gp, __global_pointer$
    .option pop

#ifndef NO_STACK_INIT
    /* Initialise main stack */
    la sp, __StackTop
    add s0, sp, zero
#endif


#if !defined(NO_MTVT_CONFIG) && defined(__MTVT_PRESENT) && __MTVT_PRESENT
    /* Configure machine trap vector table register */
    la t0, __isr_vector
    csrw CSR_MTVT, t0

    /* Setup machine trap vector in CSR and clear cause register (hardfault exceptions) */
    .weak Trap_Handler
    la t0, Trap_Handler
    csrw CSR_MTVEC, t0
    csrw CSR_MCAUSE, x0
#endif

/* Loop to copy data from read only memory to RAM.
 * The ranges of copy from/to are specified by following symbols:
 *      __data_load_start: LMA of start of the section to copy from. Usually end of text
 *      __data_start: VMA of start of the section to copy to.
 *      __bss_start: VMA of end of the section to copy to. Normally __data_end is used, but by using __bss_start
 *                    the user can add their own initialized data section before BSS section with the INSERT AFTER command.
 *
 * All addresses must be aligned to 4 bytes boundary.
 */
#ifndef __STARTUP_SKIP_ETEXT
    la t0, __data_start
    la t1, __bss_start

    beq t0, t1, L_loop1_done

    la t2, __data_load_start

L_loop1:
    lw a0,0(t2)
    sw a0,0(t0)
    addi t0, t0, 4
    addi t2, t2, 4
    bne  t0, t1, L_loop1

L_loop1_done:
#endif

/* This part of work usually is done in C library startup code. Otherwise,
 * define __STARTUP_CLEAR_BSS to enable it in this startup. This section
 * clears the RAM where BSS data is located.
 *
 * The BSS section is specified by following symbols
 *    __bss_start: start of the BSS section.
 *    __bss_end:
 *    __sbss_start
 *    __sbss_end
 *    __tbss_start
 *    __tbss_end : end of the BSS section.
 *
 * All addresses must be aligned to 4 bytes boundary.
 */
#ifdef __STARTUP_CLEAR_BSS
    la t0, __bss_start
    la t1, __tbss_end
    beq t0, t1, L_loop3_done

L_loop3:
    sw   zero, 0(t0)
    addi t0, t0, 4
    bne  t0, t1, L_loop3

L_loop3_done:
#endif /* __STARTUP_CLEAR_BSS */

/* Execute SystemInit function. */
    jal SystemInit

/* Call _start function provided by libraries.
 * If those libraries are not accessible, define __START as your entry point.
 */
#ifndef __START
#define __START _start
#endif
    jal __START

    .size   Reset_Handler,.-Reset_Handler

/* ============================ *
 *  VPR interrupt return block  *
 * ============================ */
    .section .isr_return, "ax"
    .globl __isr_return
__isr_return:
    mret

/* ============================ *
 *  HardFault trap              *
 * ============================ */
.globl Trap_Handler
.type Trap_Handler, %function
.balign 8
Trap_Handler:
    j Trap_Handler

/* ============================ *
 *         Vector table         *
 * ============================ */
    .section .isr_vector, "ax"
    .balign 64
    .globl __isr_vector
__isr_vector:
    .long   UserSoftware_Handler
    .long   SuperVisorSoftware_Handler
    .long   MachineSoftware_Handler
    .long   0                           /*Reserved */
    .long   UserTimer_Handler
    .long   SuperVisorTimer_Handler
    .long   0                           /*Reserved */
    .long   MachineTimer_Handler
    .long   UserExternal_Handler
    .long   SuperVisorExternal_Handler
    .long   0                           /*Reserved */
    .long   MachineExternal_Handler
    .long   CLICSoftware_Handler
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */

  /* External Interrupts */
    .long   VPR_0_IRQHandler
    .long   VPR_1_IRQHandler
    .long   VPR_2_IRQHandler
    .long   VPR_3_IRQHandler
    .long   VPR_4_IRQHandler
    .long   VPR_5_IRQHandler
    .long   VPR_6_IRQHandler
    .long   VPR_7_IRQHandler
    .long   VPR_8_IRQHandler
    .long   VPR_9_IRQHandler
    .long   VPR_10_IRQHandler
    .long   VPR_11_IRQHandler
    .long   VPR_12_IRQHandler
    .long   VPR_13_IRQHandler
    .long   VPR_14_IRQHandler
    .long   VPR_15_IRQHandler
    .long   VPR_16_IRQHandler
    .long   VPR_17_IRQHandler
    .long   VPR_18_IRQHandler
    .long   VPR_19_IRQHandler
    .long   VPR_20_IRQHandler
    .long   VPR_21_IRQHandler
    .long   VPR_22_IRQHandler
    .long   VPR_23_IRQHandler
    .long   VPR_24_IRQHandler
    .long   VPR_25_IRQHandler
    .long   VPR_26_IRQHandler
    .long   VPR_27_IRQHandler
    .long   VPR_28_IRQHandler
    .long   VPR_29_IRQHandler
    .long   VPR_30_IRQHandler
    .long   VPR_31_IRQHandler
    .long   SPU00_IRQHandler
    .long   MPC00_IRQHandler
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   AAR00_CCM00_IRQHandler
    .long   ECB00_IRQHandler
    .long   CRACEN_IRQHandler
    .long   0                           /*Reserved */
    .long   SERIAL00_IRQHandler
    .long   0                           /*Reserved */
    .long   VPR_IRQHandler
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   SPU10_IRQHandler
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   TIMER10_IRQHandler
    .long   RTC10_IRQHandler
    .long   EGU10_IRQHandler
    .long   AAR30_CCM30_IRQHandler
    .long   ECB30_IRQHandler
    .long   RADIO_0_IRQHandler
    .long   RADIO_1_IRQHandler
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   GPIOTE20_0_IRQHandler
    .long   GPIOTE20_1_IRQHandler
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   GRTC_0_IRQHandler
    .long   GRTC_1_IRQHandler
    .long   GRTC_2_IRQHandler
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   SPU20_IRQHandler
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   SERIAL20_IRQHandler
    .long   SERIAL21_IRQHandler
    .long   SERIAL22_IRQHandler
    .long   EGU20_IRQHandler
    .long   TIMER20_IRQHandler
    .long   TIMER21_IRQHandler
    .long   TIMER22_IRQHandler
    .long   TIMER23_IRQHandler
    .long   TIMER24_IRQHandler
    .long   0                           /*Reserved */
    .long   PDM20_IRQHandler
    .long   PDM21_IRQHandler
    .long   PWM20_IRQHandler
    .long   PWM21_IRQHandler
    .long   PWM22_IRQHandler
    .long   SAADC_IRQHandler
    .long   NFCT_IRQHandler
    .long   TEMP_IRQHandler
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   TAMPC_IRQHandler
    .long   I2S_IRQHandler
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   QDEC20_IRQHandler
    .long   QDEC21_IRQHandler
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   SPU30_IRQHandler
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   SERIAL30_IRQHandler
    .long   RTC30_IRQHandler
    .long   COMP_IRQHandler
    .long   LPCOMP_IRQHandler
    .long   WDT30_IRQHandler
    .long   WDT31_IRQHandler
    .long   0                           /*Reserved */
    .long   GPIOTE30_0_IRQHandler
    .long   GPIOTE30_1_IRQHandler
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */

    .size __isr_vector, . - __isr_vector

.section .text

/* Dummy Exception Handlers (infinite loops which can be modified) */

    .weak   UserSoftware_Handler
    .type   UserSoftware_Handler, %function
UserSoftware_Handler:
    j       .
    .size   UserSoftware_Handler, . - UserSoftware_Handler


    .weak   SuperVisorSoftware_Handler
    .type   SuperVisorSoftware_Handler, %function
SuperVisorSoftware_Handler:
    j       .
    .size   SuperVisorSoftware_Handler, . - SuperVisorSoftware_Handler


    .weak   MachineSoftware_Handler
    .type   MachineSoftware_Handler, %function
MachineSoftware_Handler:
    j       .
    .size   MachineSoftware_Handler, . - MachineSoftware_Handler


    .weak   UserTimer_Handler
    .type   UserTimer_Handler, %function
UserTimer_Handler:
    j       .
    .size   UserTimer_Handler, . - UserTimer_Handler


    .weak   SuperVisorTimer_Handler
    .type   SuperVisorTimer_Handler, %function
SuperVisorTimer_Handler:
    j       .
    .size   SuperVisorTimer_Handler, . - SuperVisorTimer_Handler


    .weak   MachineTimer_Handler
    .type   MachineTimer_Handler, %function
MachineTimer_Handler:
    j       .
    .size   MachineTimer_Handler, . - MachineTimer_Handler


    .weak   UserExternal_Handler
    .type   UserExternal_Handler, %function
UserExternal_Handler:
    j       .
    .size   UserExternal_Handler, . - UserExternal_Handler


    .weak   SuperVisorExternal_Handler
    .type   SuperVisorExternal_Handler, %function
SuperVisorExternal_Handler:
    j       .
    .size   SuperVisorExternal_Handler, . - SuperVisorExternal_Handler


    .weak   MachineExternal_Handler
    .type   MachineExternal_Handler, %function
MachineExternal_Handler:
    j       .
    .size   MachineExternal_Handler, . - MachineExternal_Handler


    .weak   CLICSoftware_Handler
    .type   CLICSoftware_Handler, %function
CLICSoftware_Handler:
    j       .
    .size   CLICSoftware_Handler, . - CLICSoftware_Handler


/* IRQ Handlers */

    .globl  Default_Handler
    .type   Default_Handler, %function
Default_Handler:
    j       .
    .size   Default_Handler, . - Default_Handler

    .macro  IRQ handler
    .weak   \handler
    .set    \handler, Default_Handler
    .endm

    IRQ  VPR_0_IRQHandler
    IRQ  VPR_1_IRQHandler
    IRQ  VPR_2_IRQHandler
    IRQ  VPR_3_IRQHandler
    IRQ  VPR_4_IRQHandler
    IRQ  VPR_5_IRQHandler
    IRQ  VPR_6_IRQHandler
    IRQ  VPR_7_IRQHandler
    IRQ  VPR_8_IRQHandler
    IRQ  VPR_9_IRQHandler
    IRQ  VPR_10_IRQHandler
    IRQ  VPR_11_IRQHandler
    IRQ  VPR_12_IRQHandler
    IRQ  VPR_13_IRQHandler
    IRQ  VPR_14_IRQHandler
    IRQ  VPR_15_IRQHandler
    IRQ  VPR_16_IRQHandler
    IRQ  VPR_17_IRQHandler
    IRQ  VPR_18_IRQHandler
    IRQ  VPR_19_IRQHandler
    IRQ  VPR_20_IRQHandler
    IRQ  VPR_21_IRQHandler
    IRQ  VPR_22_IRQHandler
    IRQ  VPR_23_IRQHandler
    IRQ  VPR_24_IRQHandler
    IRQ  VPR_25_IRQHandler
    IRQ  VPR_26_IRQHandler
    IRQ  VPR_27_IRQHandler
    IRQ  VPR_28_IRQHandler
    IRQ  VPR_29_IRQHandler
    IRQ  VPR_30_IRQHandler
    IRQ  VPR_31_IRQHandler
    IRQ  SPU00_IRQHandler
    IRQ  MPC00_IRQHandler
    IRQ  AAR00_CCM00_IRQHandler
    IRQ  ECB00_IRQHandler
    IRQ  CRACEN_IRQHandler
    IRQ  SERIAL00_IRQHandler
    IRQ  VPR_IRQHandler
    IRQ  SPU10_IRQHandler
    IRQ  TIMER10_IRQHandler
    IRQ  RTC10_IRQHandler
    IRQ  EGU10_IRQHandler
    IRQ  AAR30_CCM30_IRQHandler
    IRQ  ECB30_IRQHandler
    IRQ  RADIO_0_IRQHandler
    IRQ  RADIO_1_IRQHandler
    IRQ  GPIOTE20_0_IRQHandler
    IRQ  GPIOTE20_1_IRQHandler
    IRQ  GRTC_0_IRQHandler
    IRQ  GRTC_1_IRQHandler
    IRQ  GRTC_2_IRQHandler
    IRQ  SPU20_IRQHandler
    IRQ  SERIAL20_IRQHandler
    IRQ  SERIAL21_IRQHandler
    IRQ  SERIAL22_IRQHandler
    IRQ  EGU20_IRQHandler
    IRQ  TIMER20_IRQHandler
    IRQ  TIMER21_IRQHandler
    IRQ  TIMER22_IRQHandler
    IRQ  TIMER23_IRQHandler
    IRQ  TIMER24_IRQHandler
    IRQ  PDM20_IRQHandler
    IRQ  PDM21_IRQHandler
    IRQ  PWM20_IRQHandler
    IRQ  PWM21_IRQHandler
    IRQ  PWM22_IRQHandler
    IRQ  SAADC_IRQHandler
    IRQ  NFCT_IRQHandler
    IRQ  TEMP_IRQHandler
    IRQ  TAMPC_IRQHandler
    IRQ  I2S_IRQHandler
    IRQ  QDEC20_IRQHandler
    IRQ  QDEC21_IRQHandler
    IRQ  SPU30_IRQHandler
    IRQ  SERIAL30_IRQHandler
    IRQ  RTC30_IRQHandler
    IRQ  COMP_IRQHandler
    IRQ  LPCOMP_IRQHandler
    IRQ  WDT30_IRQHandler
    IRQ  WDT31_IRQHandler
    IRQ  GPIOTE30_0_IRQHandler
    IRQ  GPIOTE30_1_IRQHandler

  .end
