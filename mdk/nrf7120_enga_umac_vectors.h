/*
Copyright (c) 2010 - 2025, Nordic Semiconductor ASA

All rights reserved.

Redistribution and use in source and binary forms, with or without modification,
are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this
   list of conditions and the following disclaimer.

2. Redistributions in binary form, except as embedded into a Nordic
   Semiconductor ASA integrated circuit in a product or a software update for
   such product, must reproduce the above copyright notice, this list of
   conditions and the following disclaimer in the documentation and/or other
   materials provided with the distribution.

3. Neither the name of Nordic Semiconductor ASA nor the names of its
   contributors may be used to endorse or promote products derived from this
   software without specific prior written permission.

4. This software, with or without modification, must only be used with a
   Nordic Semiconductor ASA integrated circuit.

5. Any software provided in binary form under this license must not be reverse
   engineered, decompiled, modified and/or disassembled.

THIS SOFTWARE IS PROVIDED BY NORDIC SEMICONDUCTOR ASA "AS IS" AND ANY EXPRESS
OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
OF MERCHANTABILITY, NONINFRINGEMENT, AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL NORDIC SEMICONDUCTOR ASA OR CONTRIBUTORS BE
LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE
GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef NRF_DEVICE_VECTORS_H_
#define NRF_DEVICE_VECTORS_H_

/*---------------------------------------------------------------------------
  Exception / Interrupt Handler
 *---------------------------------------------------------------------------*/
/* Exceptions */
__WEAK void UserSoftware_Handler(void)
{
    while(1);
}

__WEAK void SuperVisorSoftware_Handler(void)
{
    while(1);
}

__WEAK void MachineSoftware_Handler(void)
{
    while(1);
}

__WEAK void UserTimer_Handler(void)
{
    while(1);
}

__WEAK void SuperVisorTimer_Handler(void)
{
    while(1);
}

__WEAK void MachineTimer_Handler(void)
{
    while(1);
}

__WEAK void UserExternal_Handler(void)
{
    while(1);
}

__WEAK void SuperVisorExternal_Handler(void)
{
    while(1);
}

__WEAK void MachineExternal_Handler(void)
{
    while(1);
}

__WEAK void CLICSoftware_Handler(void)
{
    while(1);
}

/* Device specific interrupt handlers */
 __HANDLER("Default_Handler") void VPRCLIC_16_IRQHandler                                       (void);
 __HANDLER("Default_Handler") void VPRCLIC_17_IRQHandler                                       (void);
 __HANDLER("Default_Handler") void VPRCLIC_18_IRQHandler                                       (void);
 __HANDLER("Default_Handler") void VPRCLIC_19_IRQHandler                                       (void);
 __HANDLER("Default_Handler") void VPRCLIC_20_IRQHandler                                       (void);
 __HANDLER("Default_Handler") void VPRCLIC_21_IRQHandler                                       (void);
 __HANDLER("Default_Handler") void VPRCLIC_22_IRQHandler                                       (void);
 __HANDLER("Default_Handler") void VPRCLIC_23_IRQHandler                                       (void);
 __HANDLER("Default_Handler") void RPU_0_IRQHandler                                            (void);
 __HANDLER("Default_Handler") void RPU_1_IRQHandler                                            (void);
 __HANDLER("Default_Handler") void RPU_2_IRQHandler                                            (void);
 __HANDLER("Default_Handler") void RPU_3_IRQHandler                                            (void);
 __HANDLER("Default_Handler") void RPU_EFS_0_IRQHandler                                        (void);
 __HANDLER("Default_Handler") void RPU_EFS_1_IRQHandler                                        (void);
 __HANDLER("Default_Handler") void LMAC_VPR_IRQHandler                                         (void);
 __HANDLER("Default_Handler") void MVDMA_IRQHandler                                            (void);
 __HANDLER("Default_Handler") void SERIAL00_IRQHandler                                         (void);
 __HANDLER("Default_Handler") void SERIAL01_IRQHandler                                         (void);
 __HANDLER("Default_Handler") void BELLBOARD_2_IRQHandler                                      (void);
 __HANDLER("Default_Handler") void BELLBOARD_3_IRQHandler                                      (void);
 __HANDLER("Default_Handler") void SERIAL20_IRQHandler                                         (void);
 __HANDLER("Default_Handler") void SERIAL21_IRQHandler                                         (void);
 __HANDLER("Default_Handler") void SERIAL22_IRQHandler                                         (void);
 __HANDLER("Default_Handler") void GRTC_5_IRQHandler                                           (void);
 __HANDLER("Default_Handler") void SERIAL23_IRQHandler                                         (void);
 __HANDLER("Default_Handler") void SERIAL24_IRQHandler                                         (void);
 __HANDLER("Default_Handler") void SERIAL30_IRQHandler                                         (void);

/*----------------------------------------------------------------------------
  Exception / Interrupt Vector table
 *----------------------------------------------------------------------------*/

#if defined(__GNUC__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpedantic"
#endif

__VECTOR_TABLE_ATTRIBUTE const VECTOR_TABLE_Type __VECTOR_TABLE[] = {
    (VECTOR_TABLE_Type)(__STACK_BASE),
/* Exceptions */
    UserSoftware_Handler,
    SuperVisorSoftware_Handler,
    MachineSoftware_Handler,
    0,
    UserTimer_Handler,
    SuperVisorTimer_Handler,
    0,
    MachineTimer_Handler,
    UserExternal_Handler,
    SuperVisorExternal_Handler,
    0,
    MachineExternal_Handler,
    CLICSoftware_Handler,
    0,
    0,
    0,
/* Device specific interrupt handlers */
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    VPRCLIC_16_IRQHandler,
    VPRCLIC_17_IRQHandler,
    VPRCLIC_18_IRQHandler,
    VPRCLIC_19_IRQHandler,
    VPRCLIC_20_IRQHandler,
    VPRCLIC_21_IRQHandler,
    VPRCLIC_22_IRQHandler,
    VPRCLIC_23_IRQHandler,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    RPU_0_IRQHandler,
    RPU_1_IRQHandler,
    RPU_2_IRQHandler,
    RPU_3_IRQHandler,
    RPU_EFS_0_IRQHandler,
    RPU_EFS_1_IRQHandler,
    0,
    0,
    LMAC_VPR_IRQHandler,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    MVDMA_IRQHandler,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    SERIAL00_IRQHandler,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    SERIAL01_IRQHandler,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    BELLBOARD_2_IRQHandler,
    BELLBOARD_3_IRQHandler,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    SERIAL20_IRQHandler,
    SERIAL21_IRQHandler,
    SERIAL22_IRQHandler,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    GRTC_5_IRQHandler,
    0,
    0,
    0,
    0,
    0,
    SERIAL23_IRQHandler,
    SERIAL24_IRQHandler,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    SERIAL30_IRQHandler,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
};

#if defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

/*----------------------------------------------------------------------------
  Exception / Interrupt Vector table
 *----------------------------------------------------------------------------*/

__STATIC_FORCEINLINE void NRFPreInit()
{
}


__attribute__((aligned(16), noreturn)) void Trap_Handler(void)
{
    __UNUSED uint32_t mcause = csr_read(CSR_MCAUSE);
    while(1);
}

__attribute__((used, section(".isr_return"), naked)) void isr_return(void)
{
    asm volatile ("mret");	
}

#endif
