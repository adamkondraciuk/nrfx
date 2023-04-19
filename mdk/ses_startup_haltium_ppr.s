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

  .section .init, "ax"
  .align 0


/************************************************************************************
 * Macros                                                                           *
 ************************************************************************************/

// Declare an exception handler with a weak definition
.macro EXC_HANDLER Name=
        // Insert vector in vector table
        .section .vectors, "ax"
        .word \Name
        // Insert dummy handler in init section
        .section .init.\Name, "ax"
        .weak \Name
        .balign 2
\Name:
        j .   // Endless loop
.endm

// Declare an interrupt handler with a weak definition
.macro ISR_HANDLER Name=
        // Insert vector in vector table
        .section .vectors, "ax"
        .word \Name
        // Insert dummy handler in init section
#if defined(__OPTIMIZATION_SMALL)
        .section .init, "ax"
        .weak \Name
        .thumb_set \Name,Dummy_Handler
#else
        .section .init.\Name, "ax"
        .weak \Name
        .balign 2
\Name:
        j .   // Endless loop
#endif
.endm

// Place a reserved vector in vector table
.macro ISR_RESERVED
        .section .vectors, "ax"
        .word 0
.endm

// Place a reserved vector in vector table
.macro ISR_RESERVED_DUMMY
        .section .vectors, "ax"
        .word Dummy_Handler
.endm

/************************************************************************************
 * Reset Handler Extensions                                                         *
 ************************************************************************************/

  .extern Reset_Handler
  .global nRFInitialize
  .extern afterInitialize

nRFInitialize:
    ret
 
 
/************************************************************************************
 * Vector Table                                                                     *
 ************************************************************************************/

  .section .vectors, "ax"
  .balign 64
  .global _vectors

_vectors:
  EXC_HANDLER   UserSoftware_Handler
  EXC_HANDLER   SuperVisorSoftware_Handler
  EXC_HANDLER   MachineSoftware_Handler
  ISR_RESERVED                           /*Reserved */
  EXC_HANDLER   UserTimer_Handler
  EXC_HANDLER   SuperVisorTimer_Handler
  ISR_RESERVED                           /*Reserved */
  EXC_HANDLER   MachineTimer_Handler
  EXC_HANDLER   UserExternal_Handler
  EXC_HANDLER   SuperVisorExternal_Handler
  ISR_RESERVED                           /*Reserved */
  EXC_HANDLER   MachineExternal_Handler
  EXC_HANDLER   CLICSoftware_Handler
  ISR_RESERVED                           /*Reserved */
  ISR_RESERVED                           /*Reserved */
  ISR_RESERVED                           /*Reserved */

/* External Interrupts */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_HANDLER   GPIOTE00_IRQHandler
  ISR_HANDLER   GPIOTE01_IRQHandler
  ISR_HANDLER   GPIOTE10_IRQHandler
  ISR_HANDLER   GPIOTE11_IRQHandler
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_HANDLER   USBHS_IRQHandler
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_HANDLER   GIPCT00_IRQHandler
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_HANDLER   I3C0_IRQHandler
  ISR_HANDLER   I3C1_IRQHandler
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_HANDLER   GTIMER0_IRQHandler
  ISR_HANDLER   GTIMER1_IRQHandler
  ISR_HANDLER   PWM0_IRQHandler
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_HANDLER   HSSPIM0_IRQHandler
  ISR_HANDLER   HSSPIM1_IRQHandler
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_HANDLER   VPR_IRQHandler
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_HANDLER   GIPCT10_IRQHandler
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_HANDLER   GRTC0_IRQHandler
  ISR_HANDLER   GRTC1_IRQHandler
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_HANDLER   GWDT1_IRQHandler
  ISR_HANDLER   GWDT2_IRQHandler
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_HANDLER   SAADC_IRQHandler
  ISR_HANDLER   COMP_LPCOMP_IRQHandler
  ISR_HANDLER   TEMP_IRQHandler
  ISR_HANDLER   NFCT_IRQHandler
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_HANDLER   I2S_IRQHandler
  ISR_HANDLER   PDM_IRQHandler
  ISR_HANDLER   QDEC0_IRQHandler
  ISR_HANDLER   QDEC1_IRQHandler
  ISR_HANDLER   SIMIF_IRQHandler
  ISR_HANDLER   GMIPIRFFE_IRQHandler
  ISR_HANDLER   TWIM8_IRQHandler
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_HANDLER   GTIMER2_IRQHandler
  ISR_HANDLER   GTIMER3_IRQHandler
  ISR_HANDLER   PWM1_IRQHandler
  ISR_HANDLER   SERIAL0_IRQHandler
  ISR_HANDLER   SERIAL1_IRQHandler
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_HANDLER   GTIMER4_IRQHandler
  ISR_HANDLER   GTIMER5_IRQHandler
  ISR_HANDLER   PWM2_IRQHandler
  ISR_HANDLER   SERIAL2_IRQHandler
  ISR_HANDLER   SERIAL3_IRQHandler
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_HANDLER   GTIMER6_IRQHandler
  ISR_HANDLER   GTIMER7_IRQHandler
  ISR_HANDLER   PWM3_IRQHandler
  ISR_HANDLER   SERIAL4_IRQHandler
  ISR_HANDLER   SERIAL5_IRQHandler
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_HANDLER   GTIMER8_IRQHandler
  ISR_HANDLER   GTIMER9_IRQHandler
  ISR_HANDLER   PWM4_IRQHandler
  ISR_HANDLER   SERIAL6_IRQHandler
  ISR_HANDLER   SERIAL7_IRQHandler
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
  ISR_RESERVED_DUMMY                           /*Reserved */
_vectors_end:

#ifdef VECTORS_IN_RAM
  .section .vectors_ram, "ax"
  .align 0
  .global _vectors_ram

_vectors_ram:
  .space _vectors_end - _vectors, 0
#endif

/*********************************************************************
*
*  Dummy handler to be used for reserved interrupt vectors
*  and weak implementation of interrupts.
*
*/
        .section .init.Dummy_Handler, "ax"
        .weak Dummy_Handler
        .balign 2
Dummy_Handler:
        j .   // Endless loop

