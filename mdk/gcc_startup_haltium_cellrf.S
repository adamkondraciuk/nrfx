/*
 
Copyright (c) 2009-2021 ARM Limited. All rights reserved.

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

    .syntax unified
    .arch armv6-m

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
    .equ    Stack_Size, 7168
#endif
    .globl __StackTop
    .globl __StackLimit
__StackLimit:
    .space Stack_Size
    .size __StackLimit, . - __StackLimit
__StackTop:
    .size __StackTop, . - __StackTop

    .section .heap
    .align 3
#if defined(__STARTUP_CONFIG)
    .equ Heap_Size, __STARTUP_CONFIG_HEAP_SIZE
#elif defined(__HEAP_SIZE)
    .equ Heap_Size, __HEAP_SIZE
#else
    .equ Heap_Size, 7168
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

    .section .isr_vector, "ax"
    .align 2
    .globl __isr_vector
__isr_vector:
    .long   __StackTop                  /* Top of Stack */
    .long   Reset_Handler
    .long   NMI_Handler
    .long   HardFault_Handler
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   SVC_Handler
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   PendSV_Handler
    .long   SysTick_Handler

  /* External Interrupts */
    .long   TXDFE_IRQHandler
    .long   RAMCM0_RFTIMERTX_IRQHandler
    .long   EGUTX_RAMCDATA_IRQHandler
    .long   RAMCIPC_RXDFE0_IRQHandler
    .long   RXDFE1_IRQHandler
    .long   RFTIMERRX_IRQHandler
    .long   EGURX_IRQHandler
    .long   DSA2TX0_LRCCONF0_IRQHandler
    .long   DSA2TX1_HSFLL_IRQHandler
    .long   DSA2RX0_IRQHandler
    .long   DSA2RX1_MPC_IRQHandler
    .long   GPIOTE0_IRQHandler
    .long   SENSORADC_IRQHandler
    .long   RFTIMERSTC_IRQHandler
    .long   MIPIRFFE0_IRQHandler
    .long   MIPIRFFE1_IRQHandler
    .long   RFSERVICES_IRQHandler
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   RFCORESERVICES_IRQHandler
    .long   MVDMA_IRQHandler
    .long   0                           /*Reserved */
    .long   0                           /*Reserved */
    .long   BELLBOARD0_IRQHandler
    .long   BELLBOARD1_IRQHandler
    .long   BELLBOARD2_IRQHandler
    .long   BELLBOARD3_IRQHandler
    .long   IPCT0_IRQHandler
    .long   IPCT1_IRQHandler
    .long   IPCT2_IRQHandler
    .long   IPCT3_IRQHandler
    .long   IPCT4_IRQHandler

    .size __isr_vector, . - __isr_vector

/* Reset Handler */


    .text
    .thumb
    .thumb_func
    .align 1
    .globl Reset_Handler
    .type Reset_Handler, %function
Reset_Handler:


/* Loop to copy data from read only memory to RAM.
 * The ranges of copy from/to are specified by following symbols:
 *      __etext: LMA of start of the section to copy from. Usually end of text
 *      __data_start__: VMA of start of the section to copy to.
 *      __bss_start__: VMA of end of the section to copy to. Normally __data_end__ is used, but by using __bss_start__
 *                    the user can add their own initialized data section before BSS section with the INSERT AFTER command.
 *
 * All addresses must be aligned to 4 bytes boundary.
 */
#ifndef __STARTUP_SKIP_ETEXT
    ldr r1, =__etext
    ldr r2, =__data_start__
    ldr r3, =__bss_start__

    subs r3, r3, r2
    ble .L_loop1_done

.L_loop1:
    subs r3, r3, #4
    ldr r0, [r1,r3]
    str r0, [r2,r3]
    bgt .L_loop1

.L_loop1_done:
#endif

/* This part of work usually is done in C library startup code. Otherwise,
 * define __STARTUP_CLEAR_BSS to enable it in this startup. This section
 * clears the RAM where BSS data is located.
 *
 * The BSS section is specified by following symbols
 *    __bss_start__: start of the BSS section.
 *    __bss_end__: end of the BSS section.
 *
 * All addresses must be aligned to 4 bytes boundary.
 */
#ifdef __STARTUP_CLEAR_BSS
    ldr r1, =__bss_start__
    ldr r2, =__bss_end__

    movs r0, 0

    subs r2, r2, r1
    ble .L_loop3_done

.L_loop3:
    subs r2, r2, #4
    str r0, [r1, r2]
    bgt .L_loop3

.L_loop3_done:
#endif /* __STARTUP_CLEAR_BSS */

/* Execute SystemInit function. */
    bl SystemInit

/* Call _start function provided by libraries.
 * If those libraries are not accessible, define __START as your entry point.
 */
#ifndef __START
#define __START _start
#endif
    bl __START

    .pool
    .size   Reset_Handler,.-Reset_Handler

    .section ".text"


/* Dummy Exception Handlers (infinite loops which can be modified) */

    .weak   NMI_Handler
    .type   NMI_Handler, %function
NMI_Handler:
    b       .
    .size   NMI_Handler, . - NMI_Handler


    .weak   HardFault_Handler
    .type   HardFault_Handler, %function
HardFault_Handler:
    b       .
    .size   HardFault_Handler, . - HardFault_Handler


    .weak   SVC_Handler
    .type   SVC_Handler, %function
SVC_Handler:
    b       .
    .size   SVC_Handler, . - SVC_Handler


    .weak   PendSV_Handler
    .type   PendSV_Handler, %function
PendSV_Handler:
    b       .
    .size   PendSV_Handler, . - PendSV_Handler


    .weak   SysTick_Handler
    .type   SysTick_Handler, %function
SysTick_Handler:
    b       .
    .size   SysTick_Handler, . - SysTick_Handler


/* IRQ Handlers */

    .globl  Default_Handler
    .type   Default_Handler, %function
Default_Handler:
    b       .
    .size   Default_Handler, . - Default_Handler

    .macro  IRQ handler
    .weak   \handler
    .set    \handler, Default_Handler
    .endm

    IRQ  TXDFE_IRQHandler
    IRQ  RAMCM0_RFTIMERTX_IRQHandler
    IRQ  EGUTX_RAMCDATA_IRQHandler
    IRQ  RAMCIPC_RXDFE0_IRQHandler
    IRQ  RXDFE1_IRQHandler
    IRQ  RFTIMERRX_IRQHandler
    IRQ  EGURX_IRQHandler
    IRQ  DSA2TX0_LRCCONF0_IRQHandler
    IRQ  DSA2TX1_HSFLL_IRQHandler
    IRQ  DSA2RX0_IRQHandler
    IRQ  DSA2RX1_MPC_IRQHandler
    IRQ  GPIOTE0_IRQHandler
    IRQ  SENSORADC_IRQHandler
    IRQ  RFTIMERSTC_IRQHandler
    IRQ  MIPIRFFE0_IRQHandler
    IRQ  MIPIRFFE1_IRQHandler
    IRQ  RFSERVICES_IRQHandler
    IRQ  RFCORESERVICES_IRQHandler
    IRQ  MVDMA_IRQHandler
    IRQ  BELLBOARD0_IRQHandler
    IRQ  BELLBOARD1_IRQHandler
    IRQ  BELLBOARD2_IRQHandler
    IRQ  BELLBOARD3_IRQHandler
    IRQ  IPCT0_IRQHandler
    IRQ  IPCT1_IRQHandler
    IRQ  IPCT2_IRQHandler
    IRQ  IPCT3_IRQHandler
    IRQ  IPCT4_IRQHandler

  .end
