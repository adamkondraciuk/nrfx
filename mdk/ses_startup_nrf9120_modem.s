/***********************************************************************************
 *                           SEGGER Microcontroller GmbH                           *
 *                               The Embedded Experts                              *
 ***********************************************************************************
 *                                                                                 *
 *                   (c) 2014 - 2018 SEGGER Microcontroller GmbH                   *
 *                                                                                 *
 *                  www.segger.com     Support: support@segger.com                 *
 *                                                                                 *
 ***********************************************************************************
 *                                                                                 *
 *        All rights reserved.                                                     *
 *                                                                                 *
 *        Redistribution and use in source and binary forms, with or               *
 *        without modification, are permitted provided that the following          *
 *        conditions are met:                                                      *
 *                                                                                 *
 *        - Redistributions of source code must retain the above copyright         *
 *          notice, this list of conditions and the following disclaimer.          *
 *                                                                                 *
 *        - Neither the name of SEGGER Microcontroller GmbH                        *
 *          nor the names of its contributors may be used to endorse or            *
 *          promote products derived from this software without specific           *
 *          prior written permission.                                              *
 *                                                                                 *
 *        THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND                   *
 *        CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES,              *
 *        INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF                 *
 *        MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE                 *
 *        DISCLAIMED.                                                              *
 *        IN NO EVENT SHALL SEGGER Microcontroller GmbH BE LIABLE FOR              *
 *        ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR                 *
 *        CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT        *
 *        OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;          *
 *        OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF            *
 *        LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT                *
 *        (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE        *
 *        USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH         *
 *        DAMAGE.                                                                  *
 *                                                                                 *
 ***********************************************************************************/

/************************************************************************************
 *                         Preprocessor Definitions                                 *
 *                         ------------------------                                 *
 * VECTORS_IN_RAM                                                                   *
 *                                                                                  *
 *   If defined, an area of RAM will large enough to store the vector table         *
 *   will be reserved.                                                              *
 *                                                                                  *
 ************************************************************************************/

  .syntax unified
  .code 16

  .section .init, "ax"
  .align 0
  
/************************************************************************************
 * Default Exception Handlers                                                       *
 ************************************************************************************/


  .thumb_func
  .weak   NMI_Handler
NMI_Handler:
  b     .

  .thumb_func
  .weak   HardFault_Handler
HardFault_Handler:
  b     .

  .thumb_func
  .weak   MemoryManagement_Handler
MemoryManagement_Handler:
  b     .

  .thumb_func
  .weak   BusFault_Handler
BusFault_Handler:
  b     .

  .thumb_func
  .weak   UsageFault_Handler
UsageFault_Handler:
  b     .

  .thumb_func
  .weak   SVC_Handler
SVC_Handler:
  b     .

  .thumb_func
  .weak   DebugMon_Handler
DebugMon_Handler:
  b     .

  .thumb_func
  .weak   PendSV_Handler
PendSV_Handler:
  b     .

  .thumb_func
  .weak   SysTick_Handler
SysTick_Handler:
  b     .

  .thumb_func
  .weak   Dummy_Handler
Dummy_Handler:
  b     .

/************************************************************************************
 * Default Interrupt Handlers                                                       *
 ************************************************************************************/
 
.weak MWU_IRQHandler
.thumb_set MWU_IRQHandler, Dummy_Handler

.weak MCPLL_IRQHandler
.thumb_set MCPLL_IRQHandler, Dummy_Handler

.weak RCOSC32K_IRQHandler
.thumb_set RCOSC32K_IRQHandler, Dummy_Handler

.weak CLOCK_POWER_IRQHandler
.thumb_set CLOCK_POWER_IRQHandler, Dummy_Handler

.weak UARTE_IRQHandler
.thumb_set UARTE_IRQHandler, Dummy_Handler

.weak TIMER1_IRQHandler
.thumb_set TIMER1_IRQHandler, Dummy_Handler

.weak TIMER11_IRQHandler
.thumb_set TIMER11_IRQHandler, Dummy_Handler

.weak RTC_IRQHandler
.thumb_set RTC_IRQHandler, Dummy_Handler

.weak LWDT_IRQHandler
.thumb_set LWDT_IRQHandler, Dummy_Handler

.weak SWDT_IRQHandler
.thumb_set SWDT_IRQHandler, Dummy_Handler

.weak RNG_IRQHandler
.thumb_set RNG_IRQHandler, Dummy_Handler

.weak SIMIF_IRQHandler
.thumb_set SIMIF_IRQHandler, Dummy_Handler

.weak M2M0_IRQHandler
.thumb_set M2M0_IRQHandler, Dummy_Handler

.weak M2M1_IRQHandler
.thumb_set M2M1_IRQHandler, Dummy_Handler

.weak GPIOTE0_IRQHandler
.thumb_set GPIOTE0_IRQHandler, Dummy_Handler

.weak GPIOTE1_IRQHandler
.thumb_set GPIOTE1_IRQHandler, Dummy_Handler

.weak GPIOTE2_IRQHandler
.thumb_set GPIOTE2_IRQHandler, Dummy_Handler

.weak TEMP_IRQHandler
.thumb_set TEMP_IRQHandler, Dummy_Handler

.weak LFCLKCALIBMEAS_IRQHandler
.thumb_set LFCLKCALIBMEAS_IRQHandler, Dummy_Handler

.weak TWIM_IRQHandler
.thumb_set TWIM_IRQHandler, Dummy_Handler

.weak AESL2_IRQHandler
.thumb_set AESL2_IRQHandler, Dummy_Handler

.weak SNOW_IRQHandler
.thumb_set SNOW_IRQHandler, Dummy_Handler

.weak ZUC_IRQHandler
.thumb_set ZUC_IRQHandler, Dummy_Handler

.weak SHA_IRQHandler
.thumb_set SHA_IRQHandler, Dummy_Handler

.weak TLSAES_IRQHandler
.thumb_set TLSAES_IRQHandler, Dummy_Handler

.weak DESCIPHER_IRQHandler
.thumb_set DESCIPHER_IRQHandler, Dummy_Handler

.weak IPC_IRQHandler
.thumb_set IPC_IRQHandler, Dummy_Handler

.weak IPC1_IRQHandler
.thumb_set IPC1_IRQHandler, Dummy_Handler

.weak IPC2_IRQHandler
.thumb_set IPC2_IRQHandler, Dummy_Handler

.weak TIMER0_IRQHandler
.thumb_set TIMER0_IRQHandler, Dummy_Handler

.weak TIMER01_IRQHandler
.thumb_set TIMER01_IRQHandler, Dummy_Handler

.weak KMU_IRQHandler
.thumb_set KMU_IRQHandler, Dummy_Handler

/************************************************************************************
 * Reset Handler Extensions                                                         *
 ************************************************************************************/

  .extern Reset_Handler
  .global nRFInitialize

  .thumb_func
nRFInitialize:
  bx lr
 
 
/************************************************************************************
 * Vector Table                                                                     *
 ************************************************************************************/

  .section .vectors, "ax"
  .align 0
  .global _vectors
  .extern __stack_end__

_vectors:
  .word __stack_end__
  .word Reset_Handler
  .word NMI_Handler
  .word HardFault_Handler
  .word MemoryManagement_Handler
  .word BusFault_Handler
  .word UsageFault_Handler
  .word 0                           /*Reserved */
  .word 0                           /*Reserved */
  .word 0                           /*Reserved */
  .word 0                           /*Reserved */
  .word SVC_Handler
  .word DebugMon_Handler
  .word 0                           /*Reserved */
  .word PendSV_Handler
  .word SysTick_Handler

/* External Interrupts */
  .word   0                           /*Reserved */
  .word   MWU_IRQHandler
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   MCPLL_IRQHandler
  .word   0                           /*Reserved */
  .word   RCOSC32K_IRQHandler
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   CLOCK_POWER_IRQHandler
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   UARTE_IRQHandler
  .word   TIMER1_IRQHandler
  .word   TIMER11_IRQHandler
  .word   RTC_IRQHandler
  .word   LWDT_IRQHandler
  .word   SWDT_IRQHandler
  .word   RNG_IRQHandler
  .word   SIMIF_IRQHandler
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   M2M0_IRQHandler
  .word   M2M1_IRQHandler
  .word   GPIOTE0_IRQHandler
  .word   GPIOTE1_IRQHandler
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   GPIOTE2_IRQHandler
  .word   0                           /*Reserved */
  .word   TEMP_IRQHandler
  .word   0                           /*Reserved */
  .word   LFCLKCALIBMEAS_IRQHandler
  .word   TWIM_IRQHandler
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   AESL2_IRQHandler
  .word   SNOW_IRQHandler
  .word   ZUC_IRQHandler
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   SHA_IRQHandler
  .word   TLSAES_IRQHandler
  .word   DESCIPHER_IRQHandler
  .word   IPC_IRQHandler
  .word   IPC1_IRQHandler
  .word   IPC2_IRQHandler
  .word   TIMER0_IRQHandler
  .word   TIMER01_IRQHandler
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   KMU_IRQHandler
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
  .word   0                           /*Reserved */
_vectors_end:

#ifdef VECTORS_IN_RAM
  .section .vectors_ram, "ax"
  .align 0
  .global _vectors_ram

_vectors_ram:
  .space _vectors_end - _vectors, 0
#endif
