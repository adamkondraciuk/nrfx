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
void Reset_Handler                                               (void);
__WEAK void NMI_Handler(void)
{
    while(1);
}

__WEAK void HardFault_Handler(void)
{
    while(1);
}

__WEAK void MemoryManagement_Handler(void)
{
    while(1);
}

__WEAK void BusFault_Handler(void)
{
    while(1);
}

__WEAK void UsageFault_Handler(void)
{
    while(1);
}

__WEAK void SecureFault_Handler(void)
{
    while(1);
}

__WEAK void SVC_Handler(void)
{
    while(1);
}

__WEAK void DebugMon_Handler(void)
{
    while(1);
}

__WEAK void PendSV_Handler(void)
{
    while(1);
}

__WEAK void SysTick_Handler(void)
{
    while(1);
}

/* Device specific interrupt handlers */
 __HANDLER("Default_Handler") void SPU0_IRQHandler                                             (void);
 __HANDLER("Default_Handler") void MPC_IRQHandler                                              (void);
 __HANDLER("Default_Handler") void CPUC_IRQHandler                                             (void);
 __HANDLER("Default_Handler") void MVDMA_IRQHandler                                            (void);
 __HANDLER("Default_Handler") void AESLTE_IRQHandler                                           (void);
 __HANDLER("Default_Handler") void SNOW_IRQHandler                                             (void);
 __HANDLER("Default_Handler") void ZUC_IRQHandler                                              (void);
 __HANDLER("Default_Handler") void SACR_IRQHandler                                             (void);
 __HANDLER("Default_Handler") void SPU1_IRQHandler                                             (void);
 __HANDLER("Default_Handler") void WDT0_IRQHandler                                             (void);
 __HANDLER("Default_Handler") void WDT1_IRQHandler                                             (void);
 __HANDLER("Default_Handler") void RTC_IRQHandler                                              (void);
 __HANDLER("Default_Handler") void SPU2_IRQHandler                                             (void);
 __HANDLER("Default_Handler") void LFCLKCALIBMEAS_IRQHandler                                   (void);
 __HANDLER("Default_Handler") void SPU3_IRQHandler                                             (void);
 __HANDLER("Default_Handler") void MCPLL_IRQHandler                                            (void);
 __HANDLER("Default_Handler") void CTI_0_IRQHandler                                            (void);
 __HANDLER("Default_Handler") void CTI_1_IRQHandler                                            (void);
 __HANDLER("Default_Handler") void SYSTEMTIMER_0_IRQHandler                                    (void);
 __HANDLER("Default_Handler") void SYSTEMTIMER_1_IRQHandler                                    (void);
 __HANDLER("Default_Handler") void LTETIMER_0_IRQHandler                                       (void);
 __HANDLER("Default_Handler") void LTETIMER_1_IRQHandler                                       (void);
 __HANDLER("Default_Handler") void GNSSTIMER_0_IRQHandler                                      (void);
 __HANDLER("Default_Handler") void GNSSTIMER_1_IRQHandler                                      (void);
 __HANDLER("Default_Handler") void IPCT_0_IRQHandler                                           (void);
 __HANDLER("Default_Handler") void IPCT_1_IRQHandler                                           (void);
 __HANDLER("Default_Handler") void IPCT_2_IRQHandler                                           (void);
 __HANDLER("Default_Handler") void IPCT_3_IRQHandler                                           (void);
 __HANDLER("Default_Handler") void IPCT_4_IRQHandler                                           (void);
 __HANDLER("Default_Handler") void IPCT_5_IRQHandler                                           (void);
 __HANDLER("Default_Handler") void SWI0_IRQHandler                                             (void);
 __HANDLER("Default_Handler") void SWI1_IRQHandler                                             (void);
 __HANDLER("Default_Handler") void SWI2_IRQHandler                                             (void);
 __HANDLER("Default_Handler") void SWI3_IRQHandler                                             (void);
 __HANDLER("Default_Handler") void SWI4_IRQHandler                                             (void);
 __HANDLER("Default_Handler") void SWI5_IRQHandler                                             (void);
 __HANDLER("Default_Handler") void SWI6_IRQHandler                                             (void);
 __HANDLER("Default_Handler") void SWI7_IRQHandler                                             (void);
 __HANDLER("Default_Handler") void BELLBOARD_0_IRQHandler                                      (void);
 __HANDLER("Default_Handler") void BELLBOARD_1_IRQHandler                                      (void);
 __HANDLER("Default_Handler") void BELLBOARD_2_IRQHandler                                      (void);
 __HANDLER("Default_Handler") void BELLBOARD_3_IRQHandler                                      (void);
 __HANDLER("Default_Handler") void GPIOTE130_0_IRQHandler                                      (void);
 __HANDLER("Default_Handler") void GPIOTE130_1_IRQHandler                                      (void);
 __HANDLER("Default_Handler") void GRTC_0_IRQHandler                                           (void);
 __HANDLER("Default_Handler") void GRTC_1_IRQHandler                                           (void);
 __HANDLER("Default_Handler") void MRAMC110_IRQHandler                                         (void);
 __HANDLER("Default_Handler") void MRAMC111_IRQHandler                                         (void);
 __HANDLER("Default_Handler") void OTPC_IRQHandler                                             (void);
 __HANDLER("Default_Handler") void VPR120_IRQHandler                                           (void);
 __HANDLER("Default_Handler") void IPCT120_0_IRQHandler                                        (void);
 __HANDLER("Default_Handler") void VPR121_IRQHandler                                           (void);
 __HANDLER("Default_Handler") void TIMER120_IRQHandler                                         (void);
 __HANDLER("Default_Handler") void SPIM120_SPIS120_UARTE120_IRQHandler                         (void);
 __HANDLER("Default_Handler") void VPR130_IRQHandler                                           (void);
 __HANDLER("Default_Handler") void AHBBUFFER_APP_IRQHandler                                    (void);
 __HANDLER("Default_Handler") void AHBBUFFER_CELL_IRQHandler                                   (void);
 __HANDLER("Default_Handler") void IPCT130_0_IRQHandler                                        (void);
 __HANDLER("Default_Handler") void RTC130_IRQHandler                                           (void);
 __HANDLER("Default_Handler") void WDT131_IRQHandler                                           (void);
 __HANDLER("Default_Handler") void WDT132_IRQHandler                                           (void);
 __HANDLER("Default_Handler") void EGU130_IRQHandler                                           (void);
 __HANDLER("Default_Handler") void RESETHUB_IRQHandler                                         (void);
 __HANDLER("Default_Handler") void AUDIOPLL_IRQHandler                                         (void);
 __HANDLER("Default_Handler") void AUDIOPLLPM_IRQHandler                                       (void);
 __HANDLER("Default_Handler") void SAADC_IRQHandler                                            (void);
 __HANDLER("Default_Handler") void TEMP_IRQHandler                                             (void);
 __HANDLER("Default_Handler") void NFCT_IRQHandler                                             (void);
 __HANDLER("Default_Handler") void PDM_IRQHandler                                              (void);
 __HANDLER("Default_Handler") void SIMIF130_IRQHandler                                         (void);
 __HANDLER("Default_Handler") void MIPIRFFE_IRQHandler                                         (void);
 __HANDLER("Default_Handler") void TIMER130_IRQHandler                                         (void);
 __HANDLER("Default_Handler") void TIMER131_IRQHandler                                         (void);
 __HANDLER("Default_Handler") void PWM130_IRQHandler                                           (void);
 __HANDLER("Default_Handler") void SERIAL0_IRQHandler                                          (void);
 __HANDLER("Default_Handler") void SERIAL1_IRQHandler                                          (void);
 __HANDLER("Default_Handler") void TIMER132_IRQHandler                                         (void);
 __HANDLER("Default_Handler") void TIMER133_IRQHandler                                         (void);
 __HANDLER("Default_Handler") void PWM131_IRQHandler                                           (void);
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
    Reset_Handler,
    NMI_Handler,
    HardFault_Handler,
    MemoryManagement_Handler,
    BusFault_Handler,
    UsageFault_Handler,
    SecureFault_Handler,
    0,
    0,
    0,
    SVC_Handler,
    DebugMon_Handler,
    0,
    PendSV_Handler,
    SysTick_Handler,
/* Device specific interrupt handlers */
    SPU0_IRQHandler,
    0,
    0,
    MPC_IRQHandler,
    CPUC_IRQHandler,
    MVDMA_IRQHandler,
    0,
    0,
    AESLTE_IRQHandler,
    SNOW_IRQHandler,
    ZUC_IRQHandler,
    0,
    0,
    0,
    0,
    SACR_IRQHandler,
    SPU1_IRQHandler,
    0,
    0,
    0,
    0,
    WDT0_IRQHandler,
    WDT1_IRQHandler,
    RTC_IRQHandler,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    SPU2_IRQHandler,
    0,
    0,
    LFCLKCALIBMEAS_IRQHandler,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    SPU3_IRQHandler,
    0,
    0,
    0,
    0,
    MCPLL_IRQHandler,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    CTI_0_IRQHandler,
    CTI_1_IRQHandler,
    0,
    SYSTEMTIMER_0_IRQHandler,
    SYSTEMTIMER_1_IRQHandler,
    LTETIMER_0_IRQHandler,
    LTETIMER_1_IRQHandler,
    GNSSTIMER_0_IRQHandler,
    GNSSTIMER_1_IRQHandler,
    IPCT_0_IRQHandler,
    IPCT_1_IRQHandler,
    IPCT_2_IRQHandler,
    IPCT_3_IRQHandler,
    IPCT_4_IRQHandler,
    IPCT_5_IRQHandler,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    SWI0_IRQHandler,
    SWI1_IRQHandler,
    SWI2_IRQHandler,
    SWI3_IRQHandler,
    SWI4_IRQHandler,
    SWI5_IRQHandler,
    SWI6_IRQHandler,
    SWI7_IRQHandler,
    BELLBOARD_0_IRQHandler,
    BELLBOARD_1_IRQHandler,
    BELLBOARD_2_IRQHandler,
    BELLBOARD_3_IRQHandler,
    0,
    0,
    0,
    0,
    GPIOTE130_0_IRQHandler,
    GPIOTE130_1_IRQHandler,
    0,
    0,
    GRTC_0_IRQHandler,
    GRTC_1_IRQHandler,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    MRAMC110_IRQHandler,
    MRAMC111_IRQHandler,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    OTPC_IRQHandler,
    0,
    0,
    VPR120_IRQHandler,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    IPCT120_0_IRQHandler,
    0,
    0,
    VPR121_IRQHandler,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    TIMER120_IRQHandler,
    0,
    0,
    0,
    SPIM120_SPIS120_UARTE120_IRQHandler,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    VPR130_IRQHandler,
    0,
    AHBBUFFER_APP_IRQHandler,
    0,
    AHBBUFFER_CELL_IRQHandler,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    IPCT130_0_IRQHandler,
    0,
    0,
    0,
    0,
    0,
    0,
    RTC130_IRQHandler,
    0,
    0,
    WDT131_IRQHandler,
    WDT132_IRQHandler,
    EGU130_IRQHandler,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    RESETHUB_IRQHandler,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    AUDIOPLL_IRQHandler,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    AUDIOPLLPM_IRQHandler,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    SAADC_IRQHandler,
    0,
    TEMP_IRQHandler,
    NFCT_IRQHandler,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    PDM_IRQHandler,
    0,
    0,
    SIMIF130_IRQHandler,
    0,
    0,
    0,
    0,
    MIPIRFFE_IRQHandler,
    0,
    0,
    0,
    0,
    0,
    0,
    TIMER130_IRQHandler,
    TIMER131_IRQHandler,
    PWM130_IRQHandler,
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
    TIMER132_IRQHandler,
    TIMER133_IRQHandler,
    PWM131_IRQHandler,
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

#endif
