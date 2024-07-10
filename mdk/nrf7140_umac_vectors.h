/*
Copyright (c) 2010 - 2024, Nordic Semiconductor ASA

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
 __HANDLER("Default_Handler") void VPRCLIC_0_IRQHandler                                        (void);
 __HANDLER("Default_Handler") void VPRCLIC_1_IRQHandler                                        (void);
 __HANDLER("Default_Handler") void VPRCLIC_2_IRQHandler                                        (void);
 __HANDLER("Default_Handler") void VPRCLIC_3_IRQHandler                                        (void);
 __HANDLER("Default_Handler") void VPRCLIC_4_IRQHandler                                        (void);
 __HANDLER("Default_Handler") void VPRCLIC_5_IRQHandler                                        (void);
 __HANDLER("Default_Handler") void VPRCLIC_6_IRQHandler                                        (void);
 __HANDLER("Default_Handler") void VPRCLIC_7_IRQHandler                                        (void);
 __HANDLER("Default_Handler") void VPRCLIC_8_IRQHandler                                        (void);
 __HANDLER("Default_Handler") void VPRTIM_IRQHandler                                           (void);
 __HANDLER("Default_Handler") void RPU_0_IRQHandler                                            (void);
 __HANDLER("Default_Handler") void RPU_1_IRQHandler                                            (void);
 __HANDLER("Default_Handler") void RPU_2_IRQHandler                                            (void);
 __HANDLER("Default_Handler") void RPU_3_IRQHandler                                            (void);
 __HANDLER("Default_Handler") void RPU_EFS_0_IRQHandler                                        (void);
 __HANDLER("Default_Handler") void RPU_EFS_1_IRQHandler                                        (void);
 __HANDLER("Default_Handler") void LMAC_VPR_IRQHandler                                         (void);
 __HANDLER("Default_Handler") void MVDMA_IRQHandler                                            (void);
 __HANDLER("Default_Handler") void IPCT_0_IRQHandler                                           (void);
 __HANDLER("Default_Handler") void IPCT_1_IRQHandler                                           (void);
 __HANDLER("Default_Handler") void IPCT_2_IRQHandler                                           (void);
 __HANDLER("Default_Handler") void BELLBOARD_WIFI_0_IRQHandler                                 (void);
 __HANDLER("Default_Handler") void BELLBOARD_WIFI_1_IRQHandler                                 (void);
 __HANDLER("Default_Handler") void BELLBOARD_WIFI_2_IRQHandler                                 (void);
 __HANDLER("Default_Handler") void BELLBOARD_WIFI_3_IRQHandler                                 (void);
 __HANDLER("Default_Handler") void GRTC_0_IRQHandler                                           (void);
 __HANDLER("Default_Handler") void UARTE120_IRQHandler                                         (void);
 __HANDLER("Default_Handler") void SERIAL0_IRQHandler                                          (void);
 __HANDLER("Default_Handler") void SERIAL1_IRQHandler                                          (void);
 __HANDLER("Default_Handler") void SERIAL2_IRQHandler                                          (void);
 __HANDLER("Default_Handler") void SERIAL3_IRQHandler                                          (void);
 __HANDLER("Default_Handler") void SERIAL4_IRQHandler                                          (void);
 __HANDLER("Default_Handler") void SERIAL5_IRQHandler                                          (void);
 __HANDLER("Default_Handler") void SERIAL6_IRQHandler                                          (void);
 __HANDLER("Default_Handler") void SERIAL7_IRQHandler                                          (void);

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
    VPRCLIC_0_IRQHandler,
    VPRCLIC_1_IRQHandler,
    VPRCLIC_2_IRQHandler,
    VPRCLIC_3_IRQHandler,
    VPRCLIC_4_IRQHandler,
    VPRCLIC_5_IRQHandler,
    VPRCLIC_6_IRQHandler,
    VPRCLIC_7_IRQHandler,
    VPRCLIC_8_IRQHandler,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    VPRTIM_IRQHandler,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
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
    IPCT_0_IRQHandler,
    IPCT_1_IRQHandler,
    IPCT_2_IRQHandler,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    BELLBOARD_WIFI_0_IRQHandler,
    BELLBOARD_WIFI_1_IRQHandler,
    BELLBOARD_WIFI_2_IRQHandler,
    BELLBOARD_WIFI_3_IRQHandler,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    GRTC_0_IRQHandler,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    UARTE120_IRQHandler,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    SERIAL0_IRQHandler,
    SERIAL1_IRQHandler,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    SERIAL2_IRQHandler,
    SERIAL3_IRQHandler,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    SERIAL4_IRQHandler,
    SERIAL5_IRQHandler,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    SERIAL6_IRQHandler,
    SERIAL7_IRQHandler,
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
