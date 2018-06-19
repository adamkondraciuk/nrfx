/*

Copyright (c) 2010 - 2018, Nordic Semiconductor ASA

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

#ifndef __NRF52810_BITS_H
#define __NRF52810_BITS_H

/*lint ++flb "Enter library region" */

/* Peripheral: AAR */
/* Description: Accelerated Address Resolver */

/* Register: AAR_TASKS_START */
/* Description: Start resolving addresses based on IRKs specified in the IRK data structure */

/* Bit 0 :   */
#define AAR_TASKS_START_TASKS_START_Pos (0UL) /*!< Position of TASKS_START field. */
#define AAR_TASKS_START_TASKS_START_Msk (0x1UL << AAR_TASKS_START_TASKS_START_Pos) /*!< Bit mask of TASKS_START field. */

/* Register: AAR_TASKS_STOP */
/* Description: Stop resolving addresses */

/* Bit 0 :   */
#define AAR_TASKS_STOP_TASKS_STOP_Pos (0UL) /*!< Position of TASKS_STOP field. */
#define AAR_TASKS_STOP_TASKS_STOP_Msk (0x1UL << AAR_TASKS_STOP_TASKS_STOP_Pos) /*!< Bit mask of TASKS_STOP field. */

/* Register: AAR_EVENTS_END */
/* Description: Address resolution procedure complete */

/* Bit 0 :   */
#define AAR_EVENTS_END_EVENTS_END_Pos (0UL) /*!< Position of EVENTS_END field. */
#define AAR_EVENTS_END_EVENTS_END_Msk (0x1UL << AAR_EVENTS_END_EVENTS_END_Pos) /*!< Bit mask of EVENTS_END field. */

/* Register: AAR_EVENTS_RESOLVED */
/* Description: Address resolved */

/* Bit 0 :   */
#define AAR_EVENTS_RESOLVED_EVENTS_RESOLVED_Pos (0UL) /*!< Position of EVENTS_RESOLVED field. */
#define AAR_EVENTS_RESOLVED_EVENTS_RESOLVED_Msk (0x1UL << AAR_EVENTS_RESOLVED_EVENTS_RESOLVED_Pos) /*!< Bit mask of EVENTS_RESOLVED field. */

/* Register: AAR_EVENTS_NOTRESOLVED */
/* Description: Address not resolved */

/* Bit 0 :   */
#define AAR_EVENTS_NOTRESOLVED_EVENTS_NOTRESOLVED_Pos (0UL) /*!< Position of EVENTS_NOTRESOLVED field. */
#define AAR_EVENTS_NOTRESOLVED_EVENTS_NOTRESOLVED_Msk (0x1UL << AAR_EVENTS_NOTRESOLVED_EVENTS_NOTRESOLVED_Pos) /*!< Bit mask of EVENTS_NOTRESOLVED field. */

/* Register: AAR_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 2 : Enable or disable interrupt for NOTRESOLVED event */
#define AAR_INTEN_NOTRESOLVED_Pos (2UL) /*!< Position of NOTRESOLVED field. */
#define AAR_INTEN_NOTRESOLVED_Msk (0x1UL << AAR_INTEN_NOTRESOLVED_Pos) /*!< Bit mask of NOTRESOLVED field. */
#define AAR_INTEN_NOTRESOLVED_Disabled (0UL) /*!< Disable */
#define AAR_INTEN_NOTRESOLVED_Enabled (1UL) /*!< Enable */

/* Bit 1 : Enable or disable interrupt for RESOLVED event */
#define AAR_INTEN_RESOLVED_Pos (1UL) /*!< Position of RESOLVED field. */
#define AAR_INTEN_RESOLVED_Msk (0x1UL << AAR_INTEN_RESOLVED_Pos) /*!< Bit mask of RESOLVED field. */
#define AAR_INTEN_RESOLVED_Disabled (0UL) /*!< Disable */
#define AAR_INTEN_RESOLVED_Enabled (1UL) /*!< Enable */

/* Bit 0 : Enable or disable interrupt for END event */
#define AAR_INTEN_END_Pos (0UL) /*!< Position of END field. */
#define AAR_INTEN_END_Msk (0x1UL << AAR_INTEN_END_Pos) /*!< Bit mask of END field. */
#define AAR_INTEN_END_Disabled (0UL) /*!< Disable */
#define AAR_INTEN_END_Enabled (1UL) /*!< Enable */

/* Register: AAR_INTENSET */
/* Description: Enable interrupt */

/* Bit 2 : Write '1' to enable interrupt for NOTRESOLVED event */
#define AAR_INTENSET_NOTRESOLVED_Pos (2UL) /*!< Position of NOTRESOLVED field. */
#define AAR_INTENSET_NOTRESOLVED_Msk (0x1UL << AAR_INTENSET_NOTRESOLVED_Pos) /*!< Bit mask of NOTRESOLVED field. */
#define AAR_INTENSET_NOTRESOLVED_Disabled (0UL) /*!< Read: Disabled */
#define AAR_INTENSET_NOTRESOLVED_Enabled (1UL) /*!< Read: Enabled */
#define AAR_INTENSET_NOTRESOLVED_Set (1UL) /*!< Enable */

/* Bit 1 : Write '1' to enable interrupt for RESOLVED event */
#define AAR_INTENSET_RESOLVED_Pos (1UL) /*!< Position of RESOLVED field. */
#define AAR_INTENSET_RESOLVED_Msk (0x1UL << AAR_INTENSET_RESOLVED_Pos) /*!< Bit mask of RESOLVED field. */
#define AAR_INTENSET_RESOLVED_Disabled (0UL) /*!< Read: Disabled */
#define AAR_INTENSET_RESOLVED_Enabled (1UL) /*!< Read: Enabled */
#define AAR_INTENSET_RESOLVED_Set (1UL) /*!< Enable */

/* Bit 0 : Write '1' to enable interrupt for END event */
#define AAR_INTENSET_END_Pos (0UL) /*!< Position of END field. */
#define AAR_INTENSET_END_Msk (0x1UL << AAR_INTENSET_END_Pos) /*!< Bit mask of END field. */
#define AAR_INTENSET_END_Disabled (0UL) /*!< Read: Disabled */
#define AAR_INTENSET_END_Enabled (1UL) /*!< Read: Enabled */
#define AAR_INTENSET_END_Set (1UL) /*!< Enable */

/* Register: AAR_INTENCLR */
/* Description: Disable interrupt */

/* Bit 2 : Write '1' to disable interrupt for NOTRESOLVED event */
#define AAR_INTENCLR_NOTRESOLVED_Pos (2UL) /*!< Position of NOTRESOLVED field. */
#define AAR_INTENCLR_NOTRESOLVED_Msk (0x1UL << AAR_INTENCLR_NOTRESOLVED_Pos) /*!< Bit mask of NOTRESOLVED field. */
#define AAR_INTENCLR_NOTRESOLVED_Disabled (0UL) /*!< Read: Disabled */
#define AAR_INTENCLR_NOTRESOLVED_Enabled (1UL) /*!< Read: Enabled */
#define AAR_INTENCLR_NOTRESOLVED_Clear (1UL) /*!< Disable */

/* Bit 1 : Write '1' to disable interrupt for RESOLVED event */
#define AAR_INTENCLR_RESOLVED_Pos (1UL) /*!< Position of RESOLVED field. */
#define AAR_INTENCLR_RESOLVED_Msk (0x1UL << AAR_INTENCLR_RESOLVED_Pos) /*!< Bit mask of RESOLVED field. */
#define AAR_INTENCLR_RESOLVED_Disabled (0UL) /*!< Read: Disabled */
#define AAR_INTENCLR_RESOLVED_Enabled (1UL) /*!< Read: Enabled */
#define AAR_INTENCLR_RESOLVED_Clear (1UL) /*!< Disable */

/* Bit 0 : Write '1' to disable interrupt for END event */
#define AAR_INTENCLR_END_Pos (0UL) /*!< Position of END field. */
#define AAR_INTENCLR_END_Msk (0x1UL << AAR_INTENCLR_END_Pos) /*!< Bit mask of END field. */
#define AAR_INTENCLR_END_Disabled (0UL) /*!< Read: Disabled */
#define AAR_INTENCLR_END_Enabled (1UL) /*!< Read: Enabled */
#define AAR_INTENCLR_END_Clear (1UL) /*!< Disable */

/* Register: AAR_STATUS */
/* Description: Resolution status */

/* Bits 3..0 : The IRK that was used last time an address was resolved */
#define AAR_STATUS_STATUS_Pos (0UL) /*!< Position of STATUS field. */
#define AAR_STATUS_STATUS_Msk (0xFUL << AAR_STATUS_STATUS_Pos) /*!< Bit mask of STATUS field. */

/* Register: AAR_ENABLE */
/* Description: Enable AAR */

/* Bits 1..0 : Enable or disable AAR */
#define AAR_ENABLE_ENABLE_Pos (0UL) /*!< Position of ENABLE field. */
#define AAR_ENABLE_ENABLE_Msk (0x3UL << AAR_ENABLE_ENABLE_Pos) /*!< Bit mask of ENABLE field. */
#define AAR_ENABLE_ENABLE_Disabled (0UL) /*!< Disable */
#define AAR_ENABLE_ENABLE_Enabled (3UL) /*!< Enable */

/* Register: AAR_NIRK */
/* Description: Number of IRKs */

/* Bits 4..0 : Number of Identity root keys available in the IRK data structure */
#define AAR_NIRK_NIRK_Pos (0UL) /*!< Position of NIRK field. */
#define AAR_NIRK_NIRK_Msk (0x1FUL << AAR_NIRK_NIRK_Pos) /*!< Bit mask of NIRK field. */

/* Register: AAR_IRKPTR */
/* Description: Pointer to IRK data structure */

/* Bits 31..0 : Pointer to the IRK data structure */
#define AAR_IRKPTR_IRKPTR_Pos (0UL) /*!< Position of IRKPTR field. */
#define AAR_IRKPTR_IRKPTR_Msk (0xFFFFFFFFUL << AAR_IRKPTR_IRKPTR_Pos) /*!< Bit mask of IRKPTR field. */

/* Register: AAR_ADDRPTR */
/* Description: Pointer to the resolvable address */

/* Bits 31..0 : Pointer to the resolvable address (6-bytes) */
#define AAR_ADDRPTR_ADDRPTR_Pos (0UL) /*!< Position of ADDRPTR field. */
#define AAR_ADDRPTR_ADDRPTR_Msk (0xFFFFFFFFUL << AAR_ADDRPTR_ADDRPTR_Pos) /*!< Bit mask of ADDRPTR field. */

/* Register: AAR_SCRATCHPTR */
/* Description: Pointer to data area used for temporary storage */

/* Bits 31..0 : Pointer to a scratch data area used for temporary storage during resolution.A space of minimum 3 bytes must be reserved. */
#define AAR_SCRATCHPTR_SCRATCHPTR_Pos (0UL) /*!< Position of SCRATCHPTR field. */
#define AAR_SCRATCHPTR_SCRATCHPTR_Msk (0xFFFFFFFFUL << AAR_SCRATCHPTR_SCRATCHPTR_Pos) /*!< Bit mask of SCRATCHPTR field. */

/* Register: AAR_POWER */
/* Description: Peripheral power control */

/* Bit 0 : Peripheral power control. The peripheral and its registers will be reset to its initial state by switching the peripheral off and then back on again. All POWER registers in AAR, CCM and ECB must be disabled to see a reset of any of those functions. */
#define AAR_POWER_POWER_Pos (0UL) /*!< Position of POWER field. */
#define AAR_POWER_POWER_Msk (0x1UL << AAR_POWER_POWER_Pos) /*!< Bit mask of POWER field. */
#define AAR_POWER_POWER_Disabled (0UL) /*!< Peripheral is powered off */
#define AAR_POWER_POWER_Enabled (1UL) /*!< Peripheral is powered on */


/* Peripheral: AMLI */
/* Description: AHB Multi-Layer Interface */

/* Register: AMLI_RAMPRI_CPU */
/* Description: AHB bus master priority register for CPU */

/* Bit 2 : Priority register for RAM AHB slave 2 */
#define AMLI_RAMPRI_CPU_RAM2_Pos (2UL) /*!< Position of RAM2 field. */
#define AMLI_RAMPRI_CPU_RAM2_Msk (0x1UL << AMLI_RAMPRI_CPU_RAM2_Pos) /*!< Bit mask of RAM2 field. */
#define AMLI_RAMPRI_CPU_RAM2_Pri0 (0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_CPU_RAM2_Pri1 (1UL) /*!< Priority 1 */

/* Bit 1 : Priority register for RAM AHB slave 1 */
#define AMLI_RAMPRI_CPU_RAM1_Pos (1UL) /*!< Position of RAM1 field. */
#define AMLI_RAMPRI_CPU_RAM1_Msk (0x1UL << AMLI_RAMPRI_CPU_RAM1_Pos) /*!< Bit mask of RAM1 field. */
#define AMLI_RAMPRI_CPU_RAM1_Pri0 (0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_CPU_RAM1_Pri1 (1UL) /*!< Priority 1 */

/* Bit 0 : Priority register for RAM AHB slave 0 */
#define AMLI_RAMPRI_CPU_RAM0_Pos (0UL) /*!< Position of RAM0 field. */
#define AMLI_RAMPRI_CPU_RAM0_Msk (0x1UL << AMLI_RAMPRI_CPU_RAM0_Pos) /*!< Bit mask of RAM0 field. */
#define AMLI_RAMPRI_CPU_RAM0_Pri0 (0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_CPU_RAM0_Pri1 (1UL) /*!< Priority 1 */

/* Register: AMLI_RAMPRI_SPI */
/* Description: AHB bus master priority register for SPIM and SPIS */

/* Bit 2 : Priority register for RAM AHB slave 2 */
#define AMLI_RAMPRI_SPI_RAM2_Pos (2UL) /*!< Position of RAM2 field. */
#define AMLI_RAMPRI_SPI_RAM2_Msk (0x1UL << AMLI_RAMPRI_SPI_RAM2_Pos) /*!< Bit mask of RAM2 field. */
#define AMLI_RAMPRI_SPI_RAM2_Pri0 (0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_SPI_RAM2_Pri1 (1UL) /*!< Priority 1 */

/* Bit 1 : Priority register for RAM AHB slave 1 */
#define AMLI_RAMPRI_SPI_RAM1_Pos (1UL) /*!< Position of RAM1 field. */
#define AMLI_RAMPRI_SPI_RAM1_Msk (0x1UL << AMLI_RAMPRI_SPI_RAM1_Pos) /*!< Bit mask of RAM1 field. */
#define AMLI_RAMPRI_SPI_RAM1_Pri0 (0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_SPI_RAM1_Pri1 (1UL) /*!< Priority 1 */

/* Bit 0 : Priority register for RAM AHB slave 0 */
#define AMLI_RAMPRI_SPI_RAM0_Pos (0UL) /*!< Position of RAM0 field. */
#define AMLI_RAMPRI_SPI_RAM0_Msk (0x1UL << AMLI_RAMPRI_SPI_RAM0_Pos) /*!< Bit mask of RAM0 field. */
#define AMLI_RAMPRI_SPI_RAM0_Pri0 (0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_SPI_RAM0_Pri1 (1UL) /*!< Priority 1 */

/* Register: AMLI_RAMPRI_RADIO */
/* Description: AHB bus master priority register for RADIO */

/* Bit 2 : Priority register for RAM AHB slave 2 */
#define AMLI_RAMPRI_RADIO_RAM2_Pos (2UL) /*!< Position of RAM2 field. */
#define AMLI_RAMPRI_RADIO_RAM2_Msk (0x1UL << AMLI_RAMPRI_RADIO_RAM2_Pos) /*!< Bit mask of RAM2 field. */
#define AMLI_RAMPRI_RADIO_RAM2_Pri0 (0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_RADIO_RAM2_Pri1 (1UL) /*!< Priority 1 */

/* Bit 1 : Priority register for RAM AHB slave 1 */
#define AMLI_RAMPRI_RADIO_RAM1_Pos (1UL) /*!< Position of RAM1 field. */
#define AMLI_RAMPRI_RADIO_RAM1_Msk (0x1UL << AMLI_RAMPRI_RADIO_RAM1_Pos) /*!< Bit mask of RAM1 field. */
#define AMLI_RAMPRI_RADIO_RAM1_Pri0 (0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_RADIO_RAM1_Pri1 (1UL) /*!< Priority 1 */

/* Bit 0 : Priority register for RAM AHB slave 0 */
#define AMLI_RAMPRI_RADIO_RAM0_Pos (0UL) /*!< Position of RAM0 field. */
#define AMLI_RAMPRI_RADIO_RAM0_Msk (0x1UL << AMLI_RAMPRI_RADIO_RAM0_Pos) /*!< Bit mask of RAM0 field. */
#define AMLI_RAMPRI_RADIO_RAM0_Pri0 (0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_RADIO_RAM0_Pri1 (1UL) /*!< Priority 1 */

/* Register: AMLI_RAMPRI_ECB */
/* Description: AHB bus master priority register for ECB */

/* Bit 2 : Priority register for RAM AHB slave 2 */
#define AMLI_RAMPRI_ECB_RAM2_Pos (2UL) /*!< Position of RAM2 field. */
#define AMLI_RAMPRI_ECB_RAM2_Msk (0x1UL << AMLI_RAMPRI_ECB_RAM2_Pos) /*!< Bit mask of RAM2 field. */
#define AMLI_RAMPRI_ECB_RAM2_Pri0 (0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_ECB_RAM2_Pri1 (1UL) /*!< Priority 1 */

/* Bit 1 : Priority register for RAM AHB slave 1 */
#define AMLI_RAMPRI_ECB_RAM1_Pos (1UL) /*!< Position of RAM1 field. */
#define AMLI_RAMPRI_ECB_RAM1_Msk (0x1UL << AMLI_RAMPRI_ECB_RAM1_Pos) /*!< Bit mask of RAM1 field. */
#define AMLI_RAMPRI_ECB_RAM1_Pri0 (0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_ECB_RAM1_Pri1 (1UL) /*!< Priority 1 */

/* Bit 0 : Priority register for RAM AHB slave 0 */
#define AMLI_RAMPRI_ECB_RAM0_Pos (0UL) /*!< Position of RAM0 field. */
#define AMLI_RAMPRI_ECB_RAM0_Msk (0x1UL << AMLI_RAMPRI_ECB_RAM0_Pos) /*!< Bit mask of RAM0 field. */
#define AMLI_RAMPRI_ECB_RAM0_Pri0 (0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_ECB_RAM0_Pri1 (1UL) /*!< Priority 1 */

/* Register: AMLI_RAMPRI_CCM */
/* Description: AHB bus master priority register for CCM */

/* Bit 2 : Priority register for RAM AHB slave 2 */
#define AMLI_RAMPRI_CCM_RAM2_Pos (2UL) /*!< Position of RAM2 field. */
#define AMLI_RAMPRI_CCM_RAM2_Msk (0x1UL << AMLI_RAMPRI_CCM_RAM2_Pos) /*!< Bit mask of RAM2 field. */
#define AMLI_RAMPRI_CCM_RAM2_Pri0 (0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_CCM_RAM2_Pri1 (1UL) /*!< Priority 1 */

/* Bit 1 : Priority register for RAM AHB slave 1 */
#define AMLI_RAMPRI_CCM_RAM1_Pos (1UL) /*!< Position of RAM1 field. */
#define AMLI_RAMPRI_CCM_RAM1_Msk (0x1UL << AMLI_RAMPRI_CCM_RAM1_Pos) /*!< Bit mask of RAM1 field. */
#define AMLI_RAMPRI_CCM_RAM1_Pri0 (0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_CCM_RAM1_Pri1 (1UL) /*!< Priority 1 */

/* Bit 0 : Priority register for RAM AHB slave 0 */
#define AMLI_RAMPRI_CCM_RAM0_Pos (0UL) /*!< Position of RAM0 field. */
#define AMLI_RAMPRI_CCM_RAM0_Msk (0x1UL << AMLI_RAMPRI_CCM_RAM0_Pos) /*!< Bit mask of RAM0 field. */
#define AMLI_RAMPRI_CCM_RAM0_Pri0 (0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_CCM_RAM0_Pri1 (1UL) /*!< Priority 1 */

/* Register: AMLI_RAMPRI_AAR */
/* Description: AHB bus master priority register for AAR */

/* Bit 2 : Priority register for RAM AHB slave 2 */
#define AMLI_RAMPRI_AAR_RAM2_Pos (2UL) /*!< Position of RAM2 field. */
#define AMLI_RAMPRI_AAR_RAM2_Msk (0x1UL << AMLI_RAMPRI_AAR_RAM2_Pos) /*!< Bit mask of RAM2 field. */
#define AMLI_RAMPRI_AAR_RAM2_Pri0 (0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_AAR_RAM2_Pri1 (1UL) /*!< Priority 1 */

/* Bit 1 : Priority register for RAM AHB slave 1 */
#define AMLI_RAMPRI_AAR_RAM1_Pos (1UL) /*!< Position of RAM1 field. */
#define AMLI_RAMPRI_AAR_RAM1_Msk (0x1UL << AMLI_RAMPRI_AAR_RAM1_Pos) /*!< Bit mask of RAM1 field. */
#define AMLI_RAMPRI_AAR_RAM1_Pri0 (0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_AAR_RAM1_Pri1 (1UL) /*!< Priority 1 */

/* Bit 0 : Priority register for RAM AHB slave 0 */
#define AMLI_RAMPRI_AAR_RAM0_Pos (0UL) /*!< Position of RAM0 field. */
#define AMLI_RAMPRI_AAR_RAM0_Msk (0x1UL << AMLI_RAMPRI_AAR_RAM0_Pos) /*!< Bit mask of RAM0 field. */
#define AMLI_RAMPRI_AAR_RAM0_Pri0 (0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_AAR_RAM0_Pri1 (1UL) /*!< Priority 1 */

/* Register: AMLI_RAMPRI_UARTE */
/* Description: AHB bus master priority register for UARTE */

/* Bit 2 : Priority register for RAM AHB slave 2 */
#define AMLI_RAMPRI_UARTE_RAM2_Pos (2UL) /*!< Position of RAM2 field. */
#define AMLI_RAMPRI_UARTE_RAM2_Msk (0x1UL << AMLI_RAMPRI_UARTE_RAM2_Pos) /*!< Bit mask of RAM2 field. */
#define AMLI_RAMPRI_UARTE_RAM2_Pri0 (0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_UARTE_RAM2_Pri1 (1UL) /*!< Priority 1 */

/* Bit 1 : Priority register for RAM AHB slave 1 */
#define AMLI_RAMPRI_UARTE_RAM1_Pos (1UL) /*!< Position of RAM1 field. */
#define AMLI_RAMPRI_UARTE_RAM1_Msk (0x1UL << AMLI_RAMPRI_UARTE_RAM1_Pos) /*!< Bit mask of RAM1 field. */
#define AMLI_RAMPRI_UARTE_RAM1_Pri0 (0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_UARTE_RAM1_Pri1 (1UL) /*!< Priority 1 */

/* Bit 0 : Priority register for RAM AHB slave 0 */
#define AMLI_RAMPRI_UARTE_RAM0_Pos (0UL) /*!< Position of RAM0 field. */
#define AMLI_RAMPRI_UARTE_RAM0_Msk (0x1UL << AMLI_RAMPRI_UARTE_RAM0_Pos) /*!< Bit mask of RAM0 field. */
#define AMLI_RAMPRI_UARTE_RAM0_Pri0 (0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_UARTE_RAM0_Pri1 (1UL) /*!< Priority 1 */

/* Register: AMLI_RAMPRI_TWI */
/* Description: AHB bus master priority register for TWIM0 and TWIS0 */

/* Bit 2 : Priority register for RAM AHB slave 2 */
#define AMLI_RAMPRI_TWI_RAM2_Pos (2UL) /*!< Position of RAM2 field. */
#define AMLI_RAMPRI_TWI_RAM2_Msk (0x1UL << AMLI_RAMPRI_TWI_RAM2_Pos) /*!< Bit mask of RAM2 field. */
#define AMLI_RAMPRI_TWI_RAM2_Pri0 (0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_TWI_RAM2_Pri1 (1UL) /*!< Priority 1 */

/* Bit 1 : Priority register for RAM AHB slave 1 */
#define AMLI_RAMPRI_TWI_RAM1_Pos (1UL) /*!< Position of RAM1 field. */
#define AMLI_RAMPRI_TWI_RAM1_Msk (0x1UL << AMLI_RAMPRI_TWI_RAM1_Pos) /*!< Bit mask of RAM1 field. */
#define AMLI_RAMPRI_TWI_RAM1_Pri0 (0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_TWI_RAM1_Pri1 (1UL) /*!< Priority 1 */

/* Bit 0 : Priority register for RAM AHB slave 0 */
#define AMLI_RAMPRI_TWI_RAM0_Pos (0UL) /*!< Position of RAM0 field. */
#define AMLI_RAMPRI_TWI_RAM0_Msk (0x1UL << AMLI_RAMPRI_TWI_RAM0_Pos) /*!< Bit mask of RAM0 field. */
#define AMLI_RAMPRI_TWI_RAM0_Pri0 (0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_TWI_RAM0_Pri1 (1UL) /*!< Priority 1 */


/* Peripheral: BPROT */
/* Description: Block Protect */

/* Register: BPROT_CONFIG0 */
/* Description: Block protect configuration register 0 */

/* Bit 31 : Enable protection for region 31. Write '0' has no effect. */
#define BPROT_CONFIG0_REGION31_Pos (31UL) /*!< Position of REGION31 field. */
#define BPROT_CONFIG0_REGION31_Msk (0x1UL << BPROT_CONFIG0_REGION31_Pos) /*!< Bit mask of REGION31 field. */
#define BPROT_CONFIG0_REGION31_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG0_REGION31_Enabled (1UL) /*!< Protection enabled */

/* Bit 30 : Enable protection for region 30. Write '0' has no effect. */
#define BPROT_CONFIG0_REGION30_Pos (30UL) /*!< Position of REGION30 field. */
#define BPROT_CONFIG0_REGION30_Msk (0x1UL << BPROT_CONFIG0_REGION30_Pos) /*!< Bit mask of REGION30 field. */
#define BPROT_CONFIG0_REGION30_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG0_REGION30_Enabled (1UL) /*!< Protection enabled */

/* Bit 29 : Enable protection for region 29. Write '0' has no effect. */
#define BPROT_CONFIG0_REGION29_Pos (29UL) /*!< Position of REGION29 field. */
#define BPROT_CONFIG0_REGION29_Msk (0x1UL << BPROT_CONFIG0_REGION29_Pos) /*!< Bit mask of REGION29 field. */
#define BPROT_CONFIG0_REGION29_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG0_REGION29_Enabled (1UL) /*!< Protection enabled */

/* Bit 28 : Enable protection for region 28. Write '0' has no effect. */
#define BPROT_CONFIG0_REGION28_Pos (28UL) /*!< Position of REGION28 field. */
#define BPROT_CONFIG0_REGION28_Msk (0x1UL << BPROT_CONFIG0_REGION28_Pos) /*!< Bit mask of REGION28 field. */
#define BPROT_CONFIG0_REGION28_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG0_REGION28_Enabled (1UL) /*!< Protection enabled */

/* Bit 27 : Enable protection for region 27. Write '0' has no effect. */
#define BPROT_CONFIG0_REGION27_Pos (27UL) /*!< Position of REGION27 field. */
#define BPROT_CONFIG0_REGION27_Msk (0x1UL << BPROT_CONFIG0_REGION27_Pos) /*!< Bit mask of REGION27 field. */
#define BPROT_CONFIG0_REGION27_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG0_REGION27_Enabled (1UL) /*!< Protection enabled */

/* Bit 26 : Enable protection for region 26. Write '0' has no effect. */
#define BPROT_CONFIG0_REGION26_Pos (26UL) /*!< Position of REGION26 field. */
#define BPROT_CONFIG0_REGION26_Msk (0x1UL << BPROT_CONFIG0_REGION26_Pos) /*!< Bit mask of REGION26 field. */
#define BPROT_CONFIG0_REGION26_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG0_REGION26_Enabled (1UL) /*!< Protection enabled */

/* Bit 25 : Enable protection for region 25. Write '0' has no effect. */
#define BPROT_CONFIG0_REGION25_Pos (25UL) /*!< Position of REGION25 field. */
#define BPROT_CONFIG0_REGION25_Msk (0x1UL << BPROT_CONFIG0_REGION25_Pos) /*!< Bit mask of REGION25 field. */
#define BPROT_CONFIG0_REGION25_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG0_REGION25_Enabled (1UL) /*!< Protection enabled */

/* Bit 24 : Enable protection for region 24. Write '0' has no effect. */
#define BPROT_CONFIG0_REGION24_Pos (24UL) /*!< Position of REGION24 field. */
#define BPROT_CONFIG0_REGION24_Msk (0x1UL << BPROT_CONFIG0_REGION24_Pos) /*!< Bit mask of REGION24 field. */
#define BPROT_CONFIG0_REGION24_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG0_REGION24_Enabled (1UL) /*!< Protection enabled */

/* Bit 23 : Enable protection for region 23. Write '0' has no effect. */
#define BPROT_CONFIG0_REGION23_Pos (23UL) /*!< Position of REGION23 field. */
#define BPROT_CONFIG0_REGION23_Msk (0x1UL << BPROT_CONFIG0_REGION23_Pos) /*!< Bit mask of REGION23 field. */
#define BPROT_CONFIG0_REGION23_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG0_REGION23_Enabled (1UL) /*!< Protection enabled */

/* Bit 22 : Enable protection for region 22. Write '0' has no effect. */
#define BPROT_CONFIG0_REGION22_Pos (22UL) /*!< Position of REGION22 field. */
#define BPROT_CONFIG0_REGION22_Msk (0x1UL << BPROT_CONFIG0_REGION22_Pos) /*!< Bit mask of REGION22 field. */
#define BPROT_CONFIG0_REGION22_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG0_REGION22_Enabled (1UL) /*!< Protection enabled */

/* Bit 21 : Enable protection for region 21. Write '0' has no effect. */
#define BPROT_CONFIG0_REGION21_Pos (21UL) /*!< Position of REGION21 field. */
#define BPROT_CONFIG0_REGION21_Msk (0x1UL << BPROT_CONFIG0_REGION21_Pos) /*!< Bit mask of REGION21 field. */
#define BPROT_CONFIG0_REGION21_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG0_REGION21_Enabled (1UL) /*!< Protection enabled */

/* Bit 20 : Enable protection for region 20. Write '0' has no effect. */
#define BPROT_CONFIG0_REGION20_Pos (20UL) /*!< Position of REGION20 field. */
#define BPROT_CONFIG0_REGION20_Msk (0x1UL << BPROT_CONFIG0_REGION20_Pos) /*!< Bit mask of REGION20 field. */
#define BPROT_CONFIG0_REGION20_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG0_REGION20_Enabled (1UL) /*!< Protection enabled */

/* Bit 19 : Enable protection for region 19. Write '0' has no effect. */
#define BPROT_CONFIG0_REGION19_Pos (19UL) /*!< Position of REGION19 field. */
#define BPROT_CONFIG0_REGION19_Msk (0x1UL << BPROT_CONFIG0_REGION19_Pos) /*!< Bit mask of REGION19 field. */
#define BPROT_CONFIG0_REGION19_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG0_REGION19_Enabled (1UL) /*!< Protection enabled */

/* Bit 18 : Enable protection for region 18. Write '0' has no effect. */
#define BPROT_CONFIG0_REGION18_Pos (18UL) /*!< Position of REGION18 field. */
#define BPROT_CONFIG0_REGION18_Msk (0x1UL << BPROT_CONFIG0_REGION18_Pos) /*!< Bit mask of REGION18 field. */
#define BPROT_CONFIG0_REGION18_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG0_REGION18_Enabled (1UL) /*!< Protection enabled */

/* Bit 17 : Enable protection for region 17. Write '0' has no effect. */
#define BPROT_CONFIG0_REGION17_Pos (17UL) /*!< Position of REGION17 field. */
#define BPROT_CONFIG0_REGION17_Msk (0x1UL << BPROT_CONFIG0_REGION17_Pos) /*!< Bit mask of REGION17 field. */
#define BPROT_CONFIG0_REGION17_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG0_REGION17_Enabled (1UL) /*!< Protection enabled */

/* Bit 16 : Enable protection for region 16. Write '0' has no effect. */
#define BPROT_CONFIG0_REGION16_Pos (16UL) /*!< Position of REGION16 field. */
#define BPROT_CONFIG0_REGION16_Msk (0x1UL << BPROT_CONFIG0_REGION16_Pos) /*!< Bit mask of REGION16 field. */
#define BPROT_CONFIG0_REGION16_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG0_REGION16_Enabled (1UL) /*!< Protection enabled */

/* Bit 15 : Enable protection for region 15. Write '0' has no effect. */
#define BPROT_CONFIG0_REGION15_Pos (15UL) /*!< Position of REGION15 field. */
#define BPROT_CONFIG0_REGION15_Msk (0x1UL << BPROT_CONFIG0_REGION15_Pos) /*!< Bit mask of REGION15 field. */
#define BPROT_CONFIG0_REGION15_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG0_REGION15_Enabled (1UL) /*!< Protection enabled */

/* Bit 14 : Enable protection for region 14. Write '0' has no effect. */
#define BPROT_CONFIG0_REGION14_Pos (14UL) /*!< Position of REGION14 field. */
#define BPROT_CONFIG0_REGION14_Msk (0x1UL << BPROT_CONFIG0_REGION14_Pos) /*!< Bit mask of REGION14 field. */
#define BPROT_CONFIG0_REGION14_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG0_REGION14_Enabled (1UL) /*!< Protection enabled */

/* Bit 13 : Enable protection for region 13. Write '0' has no effect. */
#define BPROT_CONFIG0_REGION13_Pos (13UL) /*!< Position of REGION13 field. */
#define BPROT_CONFIG0_REGION13_Msk (0x1UL << BPROT_CONFIG0_REGION13_Pos) /*!< Bit mask of REGION13 field. */
#define BPROT_CONFIG0_REGION13_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG0_REGION13_Enabled (1UL) /*!< Protection enabled */

/* Bit 12 : Enable protection for region 12. Write '0' has no effect. */
#define BPROT_CONFIG0_REGION12_Pos (12UL) /*!< Position of REGION12 field. */
#define BPROT_CONFIG0_REGION12_Msk (0x1UL << BPROT_CONFIG0_REGION12_Pos) /*!< Bit mask of REGION12 field. */
#define BPROT_CONFIG0_REGION12_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG0_REGION12_Enabled (1UL) /*!< Protection enabled */

/* Bit 11 : Enable protection for region 11. Write '0' has no effect. */
#define BPROT_CONFIG0_REGION11_Pos (11UL) /*!< Position of REGION11 field. */
#define BPROT_CONFIG0_REGION11_Msk (0x1UL << BPROT_CONFIG0_REGION11_Pos) /*!< Bit mask of REGION11 field. */
#define BPROT_CONFIG0_REGION11_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG0_REGION11_Enabled (1UL) /*!< Protection enabled */

/* Bit 10 : Enable protection for region 10. Write '0' has no effect. */
#define BPROT_CONFIG0_REGION10_Pos (10UL) /*!< Position of REGION10 field. */
#define BPROT_CONFIG0_REGION10_Msk (0x1UL << BPROT_CONFIG0_REGION10_Pos) /*!< Bit mask of REGION10 field. */
#define BPROT_CONFIG0_REGION10_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG0_REGION10_Enabled (1UL) /*!< Protection enabled */

/* Bit 9 : Enable protection for region 9. Write '0' has no effect. */
#define BPROT_CONFIG0_REGION9_Pos (9UL) /*!< Position of REGION9 field. */
#define BPROT_CONFIG0_REGION9_Msk (0x1UL << BPROT_CONFIG0_REGION9_Pos) /*!< Bit mask of REGION9 field. */
#define BPROT_CONFIG0_REGION9_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG0_REGION9_Enabled (1UL) /*!< Protection enabled */

/* Bit 8 : Enable protection for region 8. Write '0' has no effect. */
#define BPROT_CONFIG0_REGION8_Pos (8UL) /*!< Position of REGION8 field. */
#define BPROT_CONFIG0_REGION8_Msk (0x1UL << BPROT_CONFIG0_REGION8_Pos) /*!< Bit mask of REGION8 field. */
#define BPROT_CONFIG0_REGION8_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG0_REGION8_Enabled (1UL) /*!< Protection enabled */

/* Bit 7 : Enable protection for region 7. Write '0' has no effect. */
#define BPROT_CONFIG0_REGION7_Pos (7UL) /*!< Position of REGION7 field. */
#define BPROT_CONFIG0_REGION7_Msk (0x1UL << BPROT_CONFIG0_REGION7_Pos) /*!< Bit mask of REGION7 field. */
#define BPROT_CONFIG0_REGION7_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG0_REGION7_Enabled (1UL) /*!< Protection enabled */

/* Bit 6 : Enable protection for region 6. Write '0' has no effect. */
#define BPROT_CONFIG0_REGION6_Pos (6UL) /*!< Position of REGION6 field. */
#define BPROT_CONFIG0_REGION6_Msk (0x1UL << BPROT_CONFIG0_REGION6_Pos) /*!< Bit mask of REGION6 field. */
#define BPROT_CONFIG0_REGION6_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG0_REGION6_Enabled (1UL) /*!< Protection enabled */

/* Bit 5 : Enable protection for region 5. Write '0' has no effect. */
#define BPROT_CONFIG0_REGION5_Pos (5UL) /*!< Position of REGION5 field. */
#define BPROT_CONFIG0_REGION5_Msk (0x1UL << BPROT_CONFIG0_REGION5_Pos) /*!< Bit mask of REGION5 field. */
#define BPROT_CONFIG0_REGION5_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG0_REGION5_Enabled (1UL) /*!< Protection enabled */

/* Bit 4 : Enable protection for region 4. Write '0' has no effect. */
#define BPROT_CONFIG0_REGION4_Pos (4UL) /*!< Position of REGION4 field. */
#define BPROT_CONFIG0_REGION4_Msk (0x1UL << BPROT_CONFIG0_REGION4_Pos) /*!< Bit mask of REGION4 field. */
#define BPROT_CONFIG0_REGION4_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG0_REGION4_Enabled (1UL) /*!< Protection enabled */

/* Bit 3 : Enable protection for region 3. Write '0' has no effect. */
#define BPROT_CONFIG0_REGION3_Pos (3UL) /*!< Position of REGION3 field. */
#define BPROT_CONFIG0_REGION3_Msk (0x1UL << BPROT_CONFIG0_REGION3_Pos) /*!< Bit mask of REGION3 field. */
#define BPROT_CONFIG0_REGION3_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG0_REGION3_Enabled (1UL) /*!< Protection enabled */

/* Bit 2 : Enable protection for region 2. Write '0' has no effect. */
#define BPROT_CONFIG0_REGION2_Pos (2UL) /*!< Position of REGION2 field. */
#define BPROT_CONFIG0_REGION2_Msk (0x1UL << BPROT_CONFIG0_REGION2_Pos) /*!< Bit mask of REGION2 field. */
#define BPROT_CONFIG0_REGION2_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG0_REGION2_Enabled (1UL) /*!< Protection enabled */

/* Bit 1 : Enable protection for region 1. Write '0' has no effect. */
#define BPROT_CONFIG0_REGION1_Pos (1UL) /*!< Position of REGION1 field. */
#define BPROT_CONFIG0_REGION1_Msk (0x1UL << BPROT_CONFIG0_REGION1_Pos) /*!< Bit mask of REGION1 field. */
#define BPROT_CONFIG0_REGION1_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG0_REGION1_Enabled (1UL) /*!< Protection enabled */

/* Bit 0 : Enable protection for region 0. Write '0' has no effect. */
#define BPROT_CONFIG0_REGION0_Pos (0UL) /*!< Position of REGION0 field. */
#define BPROT_CONFIG0_REGION0_Msk (0x1UL << BPROT_CONFIG0_REGION0_Pos) /*!< Bit mask of REGION0 field. */
#define BPROT_CONFIG0_REGION0_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG0_REGION0_Enabled (1UL) /*!< Protection enabled */

/* Register: BPROT_CONFIG1 */
/* Description: Block protect configuration register 1 */

/* Bit 15 : Enable protection for region 47. Write '0' has no effect. */
#define BPROT_CONFIG1_REGION47_Pos (15UL) /*!< Position of REGION47 field. */
#define BPROT_CONFIG1_REGION47_Msk (0x1UL << BPROT_CONFIG1_REGION47_Pos) /*!< Bit mask of REGION47 field. */
#define BPROT_CONFIG1_REGION47_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG1_REGION47_Enabled (1UL) /*!< Protection enabled */

/* Bit 14 : Enable protection for region 46. Write '0' has no effect. */
#define BPROT_CONFIG1_REGION46_Pos (14UL) /*!< Position of REGION46 field. */
#define BPROT_CONFIG1_REGION46_Msk (0x1UL << BPROT_CONFIG1_REGION46_Pos) /*!< Bit mask of REGION46 field. */
#define BPROT_CONFIG1_REGION46_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG1_REGION46_Enabled (1UL) /*!< Protection enabled */

/* Bit 13 : Enable protection for region 45. Write '0' has no effect. */
#define BPROT_CONFIG1_REGION45_Pos (13UL) /*!< Position of REGION45 field. */
#define BPROT_CONFIG1_REGION45_Msk (0x1UL << BPROT_CONFIG1_REGION45_Pos) /*!< Bit mask of REGION45 field. */
#define BPROT_CONFIG1_REGION45_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG1_REGION45_Enabled (1UL) /*!< Protection enabled */

/* Bit 12 : Enable protection for region 44. Write '0' has no effect. */
#define BPROT_CONFIG1_REGION44_Pos (12UL) /*!< Position of REGION44 field. */
#define BPROT_CONFIG1_REGION44_Msk (0x1UL << BPROT_CONFIG1_REGION44_Pos) /*!< Bit mask of REGION44 field. */
#define BPROT_CONFIG1_REGION44_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG1_REGION44_Enabled (1UL) /*!< Protection enabled */

/* Bit 11 : Enable protection for region 43. Write '0' has no effect. */
#define BPROT_CONFIG1_REGION43_Pos (11UL) /*!< Position of REGION43 field. */
#define BPROT_CONFIG1_REGION43_Msk (0x1UL << BPROT_CONFIG1_REGION43_Pos) /*!< Bit mask of REGION43 field. */
#define BPROT_CONFIG1_REGION43_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG1_REGION43_Enabled (1UL) /*!< Protection enabled */

/* Bit 10 : Enable protection for region 42. Write '0' has no effect. */
#define BPROT_CONFIG1_REGION42_Pos (10UL) /*!< Position of REGION42 field. */
#define BPROT_CONFIG1_REGION42_Msk (0x1UL << BPROT_CONFIG1_REGION42_Pos) /*!< Bit mask of REGION42 field. */
#define BPROT_CONFIG1_REGION42_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG1_REGION42_Enabled (1UL) /*!< Protection enabled */

/* Bit 9 : Enable protection for region 41. Write '0' has no effect. */
#define BPROT_CONFIG1_REGION41_Pos (9UL) /*!< Position of REGION41 field. */
#define BPROT_CONFIG1_REGION41_Msk (0x1UL << BPROT_CONFIG1_REGION41_Pos) /*!< Bit mask of REGION41 field. */
#define BPROT_CONFIG1_REGION41_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG1_REGION41_Enabled (1UL) /*!< Protection enabled */

/* Bit 8 : Enable protection for region 40. Write '0' has no effect. */
#define BPROT_CONFIG1_REGION40_Pos (8UL) /*!< Position of REGION40 field. */
#define BPROT_CONFIG1_REGION40_Msk (0x1UL << BPROT_CONFIG1_REGION40_Pos) /*!< Bit mask of REGION40 field. */
#define BPROT_CONFIG1_REGION40_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG1_REGION40_Enabled (1UL) /*!< Protection enabled */

/* Bit 7 : Enable protection for region 39. Write '0' has no effect. */
#define BPROT_CONFIG1_REGION39_Pos (7UL) /*!< Position of REGION39 field. */
#define BPROT_CONFIG1_REGION39_Msk (0x1UL << BPROT_CONFIG1_REGION39_Pos) /*!< Bit mask of REGION39 field. */
#define BPROT_CONFIG1_REGION39_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG1_REGION39_Enabled (1UL) /*!< Protection enabled */

/* Bit 6 : Enable protection for region 38. Write '0' has no effect. */
#define BPROT_CONFIG1_REGION38_Pos (6UL) /*!< Position of REGION38 field. */
#define BPROT_CONFIG1_REGION38_Msk (0x1UL << BPROT_CONFIG1_REGION38_Pos) /*!< Bit mask of REGION38 field. */
#define BPROT_CONFIG1_REGION38_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG1_REGION38_Enabled (1UL) /*!< Protection enabled */

/* Bit 5 : Enable protection for region 37. Write '0' has no effect. */
#define BPROT_CONFIG1_REGION37_Pos (5UL) /*!< Position of REGION37 field. */
#define BPROT_CONFIG1_REGION37_Msk (0x1UL << BPROT_CONFIG1_REGION37_Pos) /*!< Bit mask of REGION37 field. */
#define BPROT_CONFIG1_REGION37_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG1_REGION37_Enabled (1UL) /*!< Protection enabled */

/* Bit 4 : Enable protection for region 36. Write '0' has no effect. */
#define BPROT_CONFIG1_REGION36_Pos (4UL) /*!< Position of REGION36 field. */
#define BPROT_CONFIG1_REGION36_Msk (0x1UL << BPROT_CONFIG1_REGION36_Pos) /*!< Bit mask of REGION36 field. */
#define BPROT_CONFIG1_REGION36_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG1_REGION36_Enabled (1UL) /*!< Protection enabled */

/* Bit 3 : Enable protection for region 35. Write '0' has no effect. */
#define BPROT_CONFIG1_REGION35_Pos (3UL) /*!< Position of REGION35 field. */
#define BPROT_CONFIG1_REGION35_Msk (0x1UL << BPROT_CONFIG1_REGION35_Pos) /*!< Bit mask of REGION35 field. */
#define BPROT_CONFIG1_REGION35_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG1_REGION35_Enabled (1UL) /*!< Protection enabled */

/* Bit 2 : Enable protection for region 34. Write '0' has no effect. */
#define BPROT_CONFIG1_REGION34_Pos (2UL) /*!< Position of REGION34 field. */
#define BPROT_CONFIG1_REGION34_Msk (0x1UL << BPROT_CONFIG1_REGION34_Pos) /*!< Bit mask of REGION34 field. */
#define BPROT_CONFIG1_REGION34_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG1_REGION34_Enabled (1UL) /*!< Protection enabled */

/* Bit 1 : Enable protection for region 33. Write '0' has no effect. */
#define BPROT_CONFIG1_REGION33_Pos (1UL) /*!< Position of REGION33 field. */
#define BPROT_CONFIG1_REGION33_Msk (0x1UL << BPROT_CONFIG1_REGION33_Pos) /*!< Bit mask of REGION33 field. */
#define BPROT_CONFIG1_REGION33_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG1_REGION33_Enabled (1UL) /*!< Protection enabled */

/* Bit 0 : Enable protection for region 32. Write '0' has no effect. */
#define BPROT_CONFIG1_REGION32_Pos (0UL) /*!< Position of REGION32 field. */
#define BPROT_CONFIG1_REGION32_Msk (0x1UL << BPROT_CONFIG1_REGION32_Pos) /*!< Bit mask of REGION32 field. */
#define BPROT_CONFIG1_REGION32_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG1_REGION32_Enabled (1UL) /*!< Protection enabled */

/* Register: BPROT_DISABLEINDEBUG */
/* Description: Disable protection mechanism in debug mode */

/* Bit 0 : Disable the protection mechanism for NVM regions while in debug mode. This register will only disable the protection mechanism if the device is in debug mode. */
#define BPROT_DISABLEINDEBUG_DISABLEINDEBUG_Pos (0UL) /*!< Position of DISABLEINDEBUG field. */
#define BPROT_DISABLEINDEBUG_DISABLEINDEBUG_Msk (0x1UL << BPROT_DISABLEINDEBUG_DISABLEINDEBUG_Pos) /*!< Bit mask of DISABLEINDEBUG field. */
#define BPROT_DISABLEINDEBUG_DISABLEINDEBUG_Enabled (0UL) /*!< Enabled in debug */
#define BPROT_DISABLEINDEBUG_DISABLEINDEBUG_Disabled (1UL) /*!< Disabled in debug */


/* Peripheral: CCM */
/* Description: AES CCM Mode Encryption */

/* Register: CCM_TASKS_KSGEN */
/* Description: Start generation of key-stream. This operation will stop by itself when completed. */

/* Bit 0 :   */
#define CCM_TASKS_KSGEN_TASKS_KSGEN_Pos (0UL) /*!< Position of TASKS_KSGEN field. */
#define CCM_TASKS_KSGEN_TASKS_KSGEN_Msk (0x1UL << CCM_TASKS_KSGEN_TASKS_KSGEN_Pos) /*!< Bit mask of TASKS_KSGEN field. */

/* Register: CCM_TASKS_CRYPT */
/* Description: Start encryption/decryption. This operation will stop by itself when completed. */

/* Bit 0 :   */
#define CCM_TASKS_CRYPT_TASKS_CRYPT_Pos (0UL) /*!< Position of TASKS_CRYPT field. */
#define CCM_TASKS_CRYPT_TASKS_CRYPT_Msk (0x1UL << CCM_TASKS_CRYPT_TASKS_CRYPT_Pos) /*!< Bit mask of TASKS_CRYPT field. */

/* Register: CCM_TASKS_STOP */
/* Description: Stop encryption/decryption */

/* Bit 0 :   */
#define CCM_TASKS_STOP_TASKS_STOP_Pos (0UL) /*!< Position of TASKS_STOP field. */
#define CCM_TASKS_STOP_TASKS_STOP_Msk (0x1UL << CCM_TASKS_STOP_TASKS_STOP_Pos) /*!< Bit mask of TASKS_STOP field. */

/* Register: CCM_TASKS_RATEOVERRIDE */
/* Description: Override DATARATE setting in MODE register with the contents of the RATEOVERRIDE register for any ongoing encryption/decryption */

/* Bit 0 :   */
#define CCM_TASKS_RATEOVERRIDE_TASKS_RATEOVERRIDE_Pos (0UL) /*!< Position of TASKS_RATEOVERRIDE field. */
#define CCM_TASKS_RATEOVERRIDE_TASKS_RATEOVERRIDE_Msk (0x1UL << CCM_TASKS_RATEOVERRIDE_TASKS_RATEOVERRIDE_Pos) /*!< Bit mask of TASKS_RATEOVERRIDE field. */

/* Register: CCM_EVENTS_ENDKSGEN */
/* Description: Key-stream generation complete */

/* Bit 0 :   */
#define CCM_EVENTS_ENDKSGEN_EVENTS_ENDKSGEN_Pos (0UL) /*!< Position of EVENTS_ENDKSGEN field. */
#define CCM_EVENTS_ENDKSGEN_EVENTS_ENDKSGEN_Msk (0x1UL << CCM_EVENTS_ENDKSGEN_EVENTS_ENDKSGEN_Pos) /*!< Bit mask of EVENTS_ENDKSGEN field. */

/* Register: CCM_EVENTS_ENDCRYPT */
/* Description: Encrypt/decrypt complete */

/* Bit 0 :   */
#define CCM_EVENTS_ENDCRYPT_EVENTS_ENDCRYPT_Pos (0UL) /*!< Position of EVENTS_ENDCRYPT field. */
#define CCM_EVENTS_ENDCRYPT_EVENTS_ENDCRYPT_Msk (0x1UL << CCM_EVENTS_ENDCRYPT_EVENTS_ENDCRYPT_Pos) /*!< Bit mask of EVENTS_ENDCRYPT field. */

/* Register: CCM_EVENTS_ERROR */
/* Description: Deprecated register - CCM error event */

/* Bit 0 :   */
#define CCM_EVENTS_ERROR_EVENTS_ERROR_Pos (0UL) /*!< Position of EVENTS_ERROR field. */
#define CCM_EVENTS_ERROR_EVENTS_ERROR_Msk (0x1UL << CCM_EVENTS_ERROR_EVENTS_ERROR_Pos) /*!< Bit mask of EVENTS_ERROR field. */

/* Register: CCM_SHORTS */
/* Description: Shortcut register */

/* Bit 0 : Shortcut between ENDKSGEN event and CRYPT task */
#define CCM_SHORTS_ENDKSGEN_CRYPT_Pos (0UL) /*!< Position of ENDKSGEN_CRYPT field. */
#define CCM_SHORTS_ENDKSGEN_CRYPT_Msk (0x1UL << CCM_SHORTS_ENDKSGEN_CRYPT_Pos) /*!< Bit mask of ENDKSGEN_CRYPT field. */
#define CCM_SHORTS_ENDKSGEN_CRYPT_Disabled (0UL) /*!< Disable shortcut */
#define CCM_SHORTS_ENDKSGEN_CRYPT_Enabled (1UL) /*!< Enable shortcut */

/* Register: CCM_INTENSET */
/* Description: Enable interrupt */

/* Bit 2 : Write '1' to enable interrupt for ERROR event */
#define CCM_INTENSET_ERROR_Pos (2UL) /*!< Position of ERROR field. */
#define CCM_INTENSET_ERROR_Msk (0x1UL << CCM_INTENSET_ERROR_Pos) /*!< Bit mask of ERROR field. */
#define CCM_INTENSET_ERROR_Disabled (0UL) /*!< Read: Disabled */
#define CCM_INTENSET_ERROR_Enabled (1UL) /*!< Read: Enabled */
#define CCM_INTENSET_ERROR_Set (1UL) /*!< Enable */

/* Bit 1 : Write '1' to enable interrupt for ENDCRYPT event */
#define CCM_INTENSET_ENDCRYPT_Pos (1UL) /*!< Position of ENDCRYPT field. */
#define CCM_INTENSET_ENDCRYPT_Msk (0x1UL << CCM_INTENSET_ENDCRYPT_Pos) /*!< Bit mask of ENDCRYPT field. */
#define CCM_INTENSET_ENDCRYPT_Disabled (0UL) /*!< Read: Disabled */
#define CCM_INTENSET_ENDCRYPT_Enabled (1UL) /*!< Read: Enabled */
#define CCM_INTENSET_ENDCRYPT_Set (1UL) /*!< Enable */

/* Bit 0 : Write '1' to enable interrupt for ENDKSGEN event */
#define CCM_INTENSET_ENDKSGEN_Pos (0UL) /*!< Position of ENDKSGEN field. */
#define CCM_INTENSET_ENDKSGEN_Msk (0x1UL << CCM_INTENSET_ENDKSGEN_Pos) /*!< Bit mask of ENDKSGEN field. */
#define CCM_INTENSET_ENDKSGEN_Disabled (0UL) /*!< Read: Disabled */
#define CCM_INTENSET_ENDKSGEN_Enabled (1UL) /*!< Read: Enabled */
#define CCM_INTENSET_ENDKSGEN_Set (1UL) /*!< Enable */

/* Register: CCM_INTENCLR */
/* Description: Disable interrupt */

/* Bit 2 : Write '1' to disable interrupt for ERROR event */
#define CCM_INTENCLR_ERROR_Pos (2UL) /*!< Position of ERROR field. */
#define CCM_INTENCLR_ERROR_Msk (0x1UL << CCM_INTENCLR_ERROR_Pos) /*!< Bit mask of ERROR field. */
#define CCM_INTENCLR_ERROR_Disabled (0UL) /*!< Read: Disabled */
#define CCM_INTENCLR_ERROR_Enabled (1UL) /*!< Read: Enabled */
#define CCM_INTENCLR_ERROR_Clear (1UL) /*!< Disable */

/* Bit 1 : Write '1' to disable interrupt for ENDCRYPT event */
#define CCM_INTENCLR_ENDCRYPT_Pos (1UL) /*!< Position of ENDCRYPT field. */
#define CCM_INTENCLR_ENDCRYPT_Msk (0x1UL << CCM_INTENCLR_ENDCRYPT_Pos) /*!< Bit mask of ENDCRYPT field. */
#define CCM_INTENCLR_ENDCRYPT_Disabled (0UL) /*!< Read: Disabled */
#define CCM_INTENCLR_ENDCRYPT_Enabled (1UL) /*!< Read: Enabled */
#define CCM_INTENCLR_ENDCRYPT_Clear (1UL) /*!< Disable */

/* Bit 0 : Write '1' to disable interrupt for ENDKSGEN event */
#define CCM_INTENCLR_ENDKSGEN_Pos (0UL) /*!< Position of ENDKSGEN field. */
#define CCM_INTENCLR_ENDKSGEN_Msk (0x1UL << CCM_INTENCLR_ENDKSGEN_Pos) /*!< Bit mask of ENDKSGEN field. */
#define CCM_INTENCLR_ENDKSGEN_Disabled (0UL) /*!< Read: Disabled */
#define CCM_INTENCLR_ENDKSGEN_Enabled (1UL) /*!< Read: Enabled */
#define CCM_INTENCLR_ENDKSGEN_Clear (1UL) /*!< Disable */

/* Register: CCM_MICSTATUS */
/* Description: MIC check result */

/* Bit 0 : The result of the MIC check performed during the previous decryption operation */
#define CCM_MICSTATUS_MICSTATUS_Pos (0UL) /*!< Position of MICSTATUS field. */
#define CCM_MICSTATUS_MICSTATUS_Msk (0x1UL << CCM_MICSTATUS_MICSTATUS_Pos) /*!< Bit mask of MICSTATUS field. */
#define CCM_MICSTATUS_MICSTATUS_CheckFailed (0UL) /*!< MIC check failed */
#define CCM_MICSTATUS_MICSTATUS_CheckPassed (1UL) /*!< MIC check passed */

/* Register: CCM_ENABLE */
/* Description: Enable */

/* Bits 1..0 : Enable or disable CCM */
#define CCM_ENABLE_ENABLE_Pos (0UL) /*!< Position of ENABLE field. */
#define CCM_ENABLE_ENABLE_Msk (0x3UL << CCM_ENABLE_ENABLE_Pos) /*!< Bit mask of ENABLE field. */
#define CCM_ENABLE_ENABLE_Disabled (0UL) /*!< Disable */
#define CCM_ENABLE_ENABLE_Enabled (2UL) /*!< Enable */

/* Register: CCM_MODE */
/* Description: Operation mode */

/* Bit 24 : Packet length configuration */
#define CCM_MODE_LENGTH_Pos (24UL) /*!< Position of LENGTH field. */
#define CCM_MODE_LENGTH_Msk (0x1UL << CCM_MODE_LENGTH_Pos) /*!< Bit mask of LENGTH field. */
#define CCM_MODE_LENGTH_Default (0UL) /*!< Default length. Effective length of LENGTH field in encrypted/decrypted packet is 5 bits. A key-stream for packet payloads up to 27 bytes will be generated. */
#define CCM_MODE_LENGTH_Extended (1UL) /*!< Extended length. Effective length of LENGTH field in encrypted/decrypted packet is 8 bits. A key-stream for packet payloads up to MAXPACKETSIZE bytes will be generated. */

/* Bits 17..16 : Radio data rate that the CCM shall run synchronous with */
#define CCM_MODE_DATARATE_Pos (16UL) /*!< Position of DATARATE field. */
#define CCM_MODE_DATARATE_Msk (0x3UL << CCM_MODE_DATARATE_Pos) /*!< Bit mask of DATARATE field. */
#define CCM_MODE_DATARATE_1Mbit (0UL) /*!< 1 Mbps */
#define CCM_MODE_DATARATE_2Mbit (1UL) /*!< 2 Mbps */
#define CCM_MODE_DATARATE_125Kbps (2UL) /*!< 125 Kbps */
#define CCM_MODE_DATARATE_500Kbps (3UL) /*!< 500 Kbps */

/* Bits 1..0 : The mode of operation to be used. The settings in this register apply whenever either the KSGEN or CRYPT tasks are triggered. */
#define CCM_MODE_MODE_Pos (0UL) /*!< Position of MODE field. */
#define CCM_MODE_MODE_Msk (0x3UL << CCM_MODE_MODE_Pos) /*!< Bit mask of MODE field. */
#define CCM_MODE_MODE_Encryption (0UL) /*!< AES CCM packet encryption mode */
#define CCM_MODE_MODE_Decryption (1UL) /*!< AES CCM packet decryption mode */
#define CCM_MODE_MODE_FastDecryption (2UL) /*!< AES fast decrypt mode */

/* Register: CCM_CNFPTR */
/* Description: Pointer to data structure holding AES key and NONCE vector */

/* Bits 31..0 : Pointer to the data structure holding the AES key and the CCM NONCE vector (see Table 1 CCM data structure overview) */
#define CCM_CNFPTR_CNFPTR_Pos (0UL) /*!< Position of CNFPTR field. */
#define CCM_CNFPTR_CNFPTR_Msk (0xFFFFFFFFUL << CCM_CNFPTR_CNFPTR_Pos) /*!< Bit mask of CNFPTR field. */

/* Register: CCM_INPTR */
/* Description: Input pointer */

/* Bits 31..0 : Input pointer */
#define CCM_INPTR_INPTR_Pos (0UL) /*!< Position of INPTR field. */
#define CCM_INPTR_INPTR_Msk (0xFFFFFFFFUL << CCM_INPTR_INPTR_Pos) /*!< Bit mask of INPTR field. */

/* Register: CCM_OUTPTR */
/* Description: Output pointer */

/* Bits 31..0 : Output pointer */
#define CCM_OUTPTR_OUTPTR_Pos (0UL) /*!< Position of OUTPTR field. */
#define CCM_OUTPTR_OUTPTR_Msk (0xFFFFFFFFUL << CCM_OUTPTR_OUTPTR_Pos) /*!< Bit mask of OUTPTR field. */

/* Register: CCM_SCRATCHPTR */
/* Description: Pointer to data area used for temporary storage */

/* Bits 31..0 : Pointer to a scratch data area used for temporary storage during key-stream generation,
        MIC generation and encryption/decryption. */
#define CCM_SCRATCHPTR_SCRATCHPTR_Pos (0UL) /*!< Position of SCRATCHPTR field. */
#define CCM_SCRATCHPTR_SCRATCHPTR_Msk (0xFFFFFFFFUL << CCM_SCRATCHPTR_SCRATCHPTR_Pos) /*!< Bit mask of SCRATCHPTR field. */

/* Register: CCM_MAXPACKETSIZE */
/* Description: Length of key-stream generated when MODE.LENGTH = Extended. */

/* Bits 7..0 : Length of key-stream generated when MODE.LENGTH = Extended. This value must be greater or equal to the subsequent packet payload to be encrypted/decrypted. */
#define CCM_MAXPACKETSIZE_MAXPACKETSIZE_Pos (0UL) /*!< Position of MAXPACKETSIZE field. */
#define CCM_MAXPACKETSIZE_MAXPACKETSIZE_Msk (0xFFUL << CCM_MAXPACKETSIZE_MAXPACKETSIZE_Pos) /*!< Bit mask of MAXPACKETSIZE field. */

/* Register: CCM_RATEOVERRIDE */
/* Description: Data rate override setting. */

/* Bits 1..0 : Data rate override setting. */
#define CCM_RATEOVERRIDE_RATEOVERRIDE_Pos (0UL) /*!< Position of RATEOVERRIDE field. */
#define CCM_RATEOVERRIDE_RATEOVERRIDE_Msk (0x3UL << CCM_RATEOVERRIDE_RATEOVERRIDE_Pos) /*!< Bit mask of RATEOVERRIDE field. */
#define CCM_RATEOVERRIDE_RATEOVERRIDE_1Mbit (0UL) /*!< 1 Mbps */
#define CCM_RATEOVERRIDE_RATEOVERRIDE_2Mbit (1UL) /*!< 2 Mbps */
#define CCM_RATEOVERRIDE_RATEOVERRIDE_125Kbps (2UL) /*!< 125 Kbps */
#define CCM_RATEOVERRIDE_RATEOVERRIDE_500Kbps (3UL) /*!< 500 Kbps */

/* Register: CCM_POWER */
/* Description: Peripheral power control */

/* Bit 0 : Peripheral power control. The peripheral and its registers will be reset to its initial state by switching the peripheral off and then back on again. All POWER registers in AAR, CCM and ECB must be disabled to see a reset of any of those functions. */
#define CCM_POWER_POWER_Pos (0UL) /*!< Position of POWER field. */
#define CCM_POWER_POWER_Msk (0x1UL << CCM_POWER_POWER_Pos) /*!< Bit mask of POWER field. */
#define CCM_POWER_POWER_Disabled (0UL) /*!< Peripheral is powered off */
#define CCM_POWER_POWER_Enabled (1UL) /*!< Peripheral is powered on */


/* Peripheral: CLOCK */
/* Description: Clock control */

/* Register: CLOCK_TASKS_HFCLKSTART */
/* Description: Start HFCLK crystal oscillator */

/* Bit 0 :   */
#define CLOCK_TASKS_HFCLKSTART_TASKS_HFCLKSTART_Pos (0UL) /*!< Position of TASKS_HFCLKSTART field. */
#define CLOCK_TASKS_HFCLKSTART_TASKS_HFCLKSTART_Msk (0x1UL << CLOCK_TASKS_HFCLKSTART_TASKS_HFCLKSTART_Pos) /*!< Bit mask of TASKS_HFCLKSTART field. */

/* Register: CLOCK_TASKS_HFCLKSTOP */
/* Description: Stop HFCLK crystal oscillator */

/* Bit 0 :   */
#define CLOCK_TASKS_HFCLKSTOP_TASKS_HFCLKSTOP_Pos (0UL) /*!< Position of TASKS_HFCLKSTOP field. */
#define CLOCK_TASKS_HFCLKSTOP_TASKS_HFCLKSTOP_Msk (0x1UL << CLOCK_TASKS_HFCLKSTOP_TASKS_HFCLKSTOP_Pos) /*!< Bit mask of TASKS_HFCLKSTOP field. */

/* Register: CLOCK_TASKS_LFCLKSTART */
/* Description: Start LFCLK source */

/* Bit 0 :   */
#define CLOCK_TASKS_LFCLKSTART_TASKS_LFCLKSTART_Pos (0UL) /*!< Position of TASKS_LFCLKSTART field. */
#define CLOCK_TASKS_LFCLKSTART_TASKS_LFCLKSTART_Msk (0x1UL << CLOCK_TASKS_LFCLKSTART_TASKS_LFCLKSTART_Pos) /*!< Bit mask of TASKS_LFCLKSTART field. */

/* Register: CLOCK_TASKS_LFCLKSTOP */
/* Description: Stop LFCLK source */

/* Bit 0 :   */
#define CLOCK_TASKS_LFCLKSTOP_TASKS_LFCLKSTOP_Pos (0UL) /*!< Position of TASKS_LFCLKSTOP field. */
#define CLOCK_TASKS_LFCLKSTOP_TASKS_LFCLKSTOP_Msk (0x1UL << CLOCK_TASKS_LFCLKSTOP_TASKS_LFCLKSTOP_Pos) /*!< Bit mask of TASKS_LFCLKSTOP field. */

/* Register: CLOCK_TASKS_CAL */
/* Description: Start calibration of LFRC oscillator */

/* Bit 0 :   */
#define CLOCK_TASKS_CAL_TASKS_CAL_Pos (0UL) /*!< Position of TASKS_CAL field. */
#define CLOCK_TASKS_CAL_TASKS_CAL_Msk (0x1UL << CLOCK_TASKS_CAL_TASKS_CAL_Pos) /*!< Bit mask of TASKS_CAL field. */

/* Register: CLOCK_TASKS_CTSTART */
/* Description: Start calibration timer */

/* Bit 0 :   */
#define CLOCK_TASKS_CTSTART_TASKS_CTSTART_Pos (0UL) /*!< Position of TASKS_CTSTART field. */
#define CLOCK_TASKS_CTSTART_TASKS_CTSTART_Msk (0x1UL << CLOCK_TASKS_CTSTART_TASKS_CTSTART_Pos) /*!< Bit mask of TASKS_CTSTART field. */

/* Register: CLOCK_TASKS_CTSTOP */
/* Description: Stop calibration timer */

/* Bit 0 :   */
#define CLOCK_TASKS_CTSTOP_TASKS_CTSTOP_Pos (0UL) /*!< Position of TASKS_CTSTOP field. */
#define CLOCK_TASKS_CTSTOP_TASKS_CTSTOP_Msk (0x1UL << CLOCK_TASKS_CTSTOP_TASKS_CTSTOP_Pos) /*!< Bit mask of TASKS_CTSTOP field. */

/* Register: CLOCK_EVENTS_HFCLKSTARTED */
/* Description: HFCLK oscillator started */

/* Bit 0 :   */
#define CLOCK_EVENTS_HFCLKSTARTED_EVENTS_HFCLKSTARTED_Pos (0UL) /*!< Position of EVENTS_HFCLKSTARTED field. */
#define CLOCK_EVENTS_HFCLKSTARTED_EVENTS_HFCLKSTARTED_Msk (0x1UL << CLOCK_EVENTS_HFCLKSTARTED_EVENTS_HFCLKSTARTED_Pos) /*!< Bit mask of EVENTS_HFCLKSTARTED field. */

/* Register: CLOCK_EVENTS_LFCLKSTARTED */
/* Description: LFCLK started */

/* Bit 0 :   */
#define CLOCK_EVENTS_LFCLKSTARTED_EVENTS_LFCLKSTARTED_Pos (0UL) /*!< Position of EVENTS_LFCLKSTARTED field. */
#define CLOCK_EVENTS_LFCLKSTARTED_EVENTS_LFCLKSTARTED_Msk (0x1UL << CLOCK_EVENTS_LFCLKSTARTED_EVENTS_LFCLKSTARTED_Pos) /*!< Bit mask of EVENTS_LFCLKSTARTED field. */

/* Register: CLOCK_EVENTS_DONE */
/* Description: Calibration of LFCLK RC oscillator complete event */

/* Bit 0 :   */
#define CLOCK_EVENTS_DONE_EVENTS_DONE_Pos (0UL) /*!< Position of EVENTS_DONE field. */
#define CLOCK_EVENTS_DONE_EVENTS_DONE_Msk (0x1UL << CLOCK_EVENTS_DONE_EVENTS_DONE_Pos) /*!< Bit mask of EVENTS_DONE field. */

/* Register: CLOCK_EVENTS_CTTO */
/* Description: Calibration timer timeout */

/* Bit 0 :   */
#define CLOCK_EVENTS_CTTO_EVENTS_CTTO_Pos (0UL) /*!< Position of EVENTS_CTTO field. */
#define CLOCK_EVENTS_CTTO_EVENTS_CTTO_Msk (0x1UL << CLOCK_EVENTS_CTTO_EVENTS_CTTO_Pos) /*!< Bit mask of EVENTS_CTTO field. */

/* Register: CLOCK_INTENSET */
/* Description: Enable interrupt */

/* Bit 4 : Write '1' to enable interrupt for CTTO event */
#define CLOCK_INTENSET_CTTO_Pos (4UL) /*!< Position of CTTO field. */
#define CLOCK_INTENSET_CTTO_Msk (0x1UL << CLOCK_INTENSET_CTTO_Pos) /*!< Bit mask of CTTO field. */
#define CLOCK_INTENSET_CTTO_Disabled (0UL) /*!< Read: Disabled */
#define CLOCK_INTENSET_CTTO_Enabled (1UL) /*!< Read: Enabled */
#define CLOCK_INTENSET_CTTO_Set (1UL) /*!< Enable */

/* Bit 3 : Write '1' to enable interrupt for DONE event */
#define CLOCK_INTENSET_DONE_Pos (3UL) /*!< Position of DONE field. */
#define CLOCK_INTENSET_DONE_Msk (0x1UL << CLOCK_INTENSET_DONE_Pos) /*!< Bit mask of DONE field. */
#define CLOCK_INTENSET_DONE_Disabled (0UL) /*!< Read: Disabled */
#define CLOCK_INTENSET_DONE_Enabled (1UL) /*!< Read: Enabled */
#define CLOCK_INTENSET_DONE_Set (1UL) /*!< Enable */

/* Bit 1 : Write '1' to enable interrupt for LFCLKSTARTED event */
#define CLOCK_INTENSET_LFCLKSTARTED_Pos (1UL) /*!< Position of LFCLKSTARTED field. */
#define CLOCK_INTENSET_LFCLKSTARTED_Msk (0x1UL << CLOCK_INTENSET_LFCLKSTARTED_Pos) /*!< Bit mask of LFCLKSTARTED field. */
#define CLOCK_INTENSET_LFCLKSTARTED_Disabled (0UL) /*!< Read: Disabled */
#define CLOCK_INTENSET_LFCLKSTARTED_Enabled (1UL) /*!< Read: Enabled */
#define CLOCK_INTENSET_LFCLKSTARTED_Set (1UL) /*!< Enable */

/* Bit 0 : Write '1' to enable interrupt for HFCLKSTARTED event */
#define CLOCK_INTENSET_HFCLKSTARTED_Pos (0UL) /*!< Position of HFCLKSTARTED field. */
#define CLOCK_INTENSET_HFCLKSTARTED_Msk (0x1UL << CLOCK_INTENSET_HFCLKSTARTED_Pos) /*!< Bit mask of HFCLKSTARTED field. */
#define CLOCK_INTENSET_HFCLKSTARTED_Disabled (0UL) /*!< Read: Disabled */
#define CLOCK_INTENSET_HFCLKSTARTED_Enabled (1UL) /*!< Read: Enabled */
#define CLOCK_INTENSET_HFCLKSTARTED_Set (1UL) /*!< Enable */

/* Register: CLOCK_INTENCLR */
/* Description: Disable interrupt */

/* Bit 4 : Write '1' to disable interrupt for CTTO event */
#define CLOCK_INTENCLR_CTTO_Pos (4UL) /*!< Position of CTTO field. */
#define CLOCK_INTENCLR_CTTO_Msk (0x1UL << CLOCK_INTENCLR_CTTO_Pos) /*!< Bit mask of CTTO field. */
#define CLOCK_INTENCLR_CTTO_Disabled (0UL) /*!< Read: Disabled */
#define CLOCK_INTENCLR_CTTO_Enabled (1UL) /*!< Read: Enabled */
#define CLOCK_INTENCLR_CTTO_Clear (1UL) /*!< Disable */

/* Bit 3 : Write '1' to disable interrupt for DONE event */
#define CLOCK_INTENCLR_DONE_Pos (3UL) /*!< Position of DONE field. */
#define CLOCK_INTENCLR_DONE_Msk (0x1UL << CLOCK_INTENCLR_DONE_Pos) /*!< Bit mask of DONE field. */
#define CLOCK_INTENCLR_DONE_Disabled (0UL) /*!< Read: Disabled */
#define CLOCK_INTENCLR_DONE_Enabled (1UL) /*!< Read: Enabled */
#define CLOCK_INTENCLR_DONE_Clear (1UL) /*!< Disable */

/* Bit 1 : Write '1' to disable interrupt for LFCLKSTARTED event */
#define CLOCK_INTENCLR_LFCLKSTARTED_Pos (1UL) /*!< Position of LFCLKSTARTED field. */
#define CLOCK_INTENCLR_LFCLKSTARTED_Msk (0x1UL << CLOCK_INTENCLR_LFCLKSTARTED_Pos) /*!< Bit mask of LFCLKSTARTED field. */
#define CLOCK_INTENCLR_LFCLKSTARTED_Disabled (0UL) /*!< Read: Disabled */
#define CLOCK_INTENCLR_LFCLKSTARTED_Enabled (1UL) /*!< Read: Enabled */
#define CLOCK_INTENCLR_LFCLKSTARTED_Clear (1UL) /*!< Disable */

/* Bit 0 : Write '1' to disable interrupt for HFCLKSTARTED event */
#define CLOCK_INTENCLR_HFCLKSTARTED_Pos (0UL) /*!< Position of HFCLKSTARTED field. */
#define CLOCK_INTENCLR_HFCLKSTARTED_Msk (0x1UL << CLOCK_INTENCLR_HFCLKSTARTED_Pos) /*!< Bit mask of HFCLKSTARTED field. */
#define CLOCK_INTENCLR_HFCLKSTARTED_Disabled (0UL) /*!< Read: Disabled */
#define CLOCK_INTENCLR_HFCLKSTARTED_Enabled (1UL) /*!< Read: Enabled */
#define CLOCK_INTENCLR_HFCLKSTARTED_Clear (1UL) /*!< Disable */

/* Register: CLOCK_HFCLKRUN */
/* Description: Status indicating that HFCLKSTART task has been triggered */

/* Bit 0 : HFCLKSTART task triggered or not */
#define CLOCK_HFCLKRUN_STATUS_Pos (0UL) /*!< Position of STATUS field. */
#define CLOCK_HFCLKRUN_STATUS_Msk (0x1UL << CLOCK_HFCLKRUN_STATUS_Pos) /*!< Bit mask of STATUS field. */
#define CLOCK_HFCLKRUN_STATUS_NotTriggered (0UL) /*!< Task not triggered */
#define CLOCK_HFCLKRUN_STATUS_Triggered (1UL) /*!< Task triggered */

/* Register: CLOCK_HFCLKSTAT */
/* Description: HFCLK status */

/* Bit 16 : HFCLK state */
#define CLOCK_HFCLKSTAT_STATE_Pos (16UL) /*!< Position of STATE field. */
#define CLOCK_HFCLKSTAT_STATE_Msk (0x1UL << CLOCK_HFCLKSTAT_STATE_Pos) /*!< Bit mask of STATE field. */
#define CLOCK_HFCLKSTAT_STATE_NotRunning (0UL) /*!< HFCLK not running */
#define CLOCK_HFCLKSTAT_STATE_Running (1UL) /*!< HFCLK running */

/* Bit 0 : Source of HFCLK */
#define CLOCK_HFCLKSTAT_SRC_Pos (0UL) /*!< Position of SRC field. */
#define CLOCK_HFCLKSTAT_SRC_Msk (0x1UL << CLOCK_HFCLKSTAT_SRC_Pos) /*!< Bit mask of SRC field. */
#define CLOCK_HFCLKSTAT_SRC_RC (0UL) /*!< 64 MHz internal oscillator (HFINT) */
#define CLOCK_HFCLKSTAT_SRC_Xtal (1UL) /*!< 64 MHz crystal oscillator (HFXO) */

/* Register: CLOCK_HFCLKSRCCOPY */
/* Description: Copy of HFCLKSRC register, set when HFCLKSTART task was triggered */

/* Bits 31..0 : Copy of HFCLKSRC register, set when HFCLKSTART task was triggered */
#define CLOCK_HFCLKSRCCOPY_HFCLKSRCCOPY_Pos (0UL) /*!< Position of HFCLKSRCCOPY field. */
#define CLOCK_HFCLKSRCCOPY_HFCLKSRCCOPY_Msk (0xFFFFFFFFUL << CLOCK_HFCLKSRCCOPY_HFCLKSRCCOPY_Pos) /*!< Bit mask of HFCLKSRCCOPY field. */

/* Register: CLOCK_LFCLKRUN */
/* Description: Status indicating that LFCLKSTART task has been triggered */

/* Bit 0 : LFCLKSTART task triggered or not */
#define CLOCK_LFCLKRUN_STATUS_Pos (0UL) /*!< Position of STATUS field. */
#define CLOCK_LFCLKRUN_STATUS_Msk (0x1UL << CLOCK_LFCLKRUN_STATUS_Pos) /*!< Bit mask of STATUS field. */
#define CLOCK_LFCLKRUN_STATUS_NotTriggered (0UL) /*!< Task not triggered */
#define CLOCK_LFCLKRUN_STATUS_Triggered (1UL) /*!< Task triggered */

/* Register: CLOCK_LFCLKSTAT */
/* Description: LFCLK status */

/* Bit 16 : LFCLK state */
#define CLOCK_LFCLKSTAT_STATE_Pos (16UL) /*!< Position of STATE field. */
#define CLOCK_LFCLKSTAT_STATE_Msk (0x1UL << CLOCK_LFCLKSTAT_STATE_Pos) /*!< Bit mask of STATE field. */
#define CLOCK_LFCLKSTAT_STATE_NotRunning (0UL) /*!< LFCLK not running */
#define CLOCK_LFCLKSTAT_STATE_Running (1UL) /*!< LFCLK running */

/* Bits 1..0 : Source of LFCLK */
#define CLOCK_LFCLKSTAT_SRC_Pos (0UL) /*!< Position of SRC field. */
#define CLOCK_LFCLKSTAT_SRC_Msk (0x3UL << CLOCK_LFCLKSTAT_SRC_Pos) /*!< Bit mask of SRC field. */
#define CLOCK_LFCLKSTAT_SRC_RC (0UL) /*!< 32.768 kHz RC oscillator */
#define CLOCK_LFCLKSTAT_SRC_Xtal (1UL) /*!< 32.768 kHz crystal oscillator */
#define CLOCK_LFCLKSTAT_SRC_Synth (2UL) /*!< 32.768 kHz synthesized from HFCLK */

/* Register: CLOCK_LFCLKSRCCOPY */
/* Description: Copy of LFCLKSRC register, set when LFCLKSTART task was triggered */

/* Bits 1..0 : Clock source */
#define CLOCK_LFCLKSRCCOPY_SRC_Pos (0UL) /*!< Position of SRC field. */
#define CLOCK_LFCLKSRCCOPY_SRC_Msk (0x3UL << CLOCK_LFCLKSRCCOPY_SRC_Pos) /*!< Bit mask of SRC field. */
#define CLOCK_LFCLKSRCCOPY_SRC_RC (0UL) /*!< 32.768 kHz RC oscillator */
#define CLOCK_LFCLKSRCCOPY_SRC_Xtal (1UL) /*!< 32.768 kHz crystal oscillator */
#define CLOCK_LFCLKSRCCOPY_SRC_Synth (2UL) /*!< 32.768 kHz synthesized from HFCLK */

/* Register: CLOCK_RCOSC32KIFINE */
/* Description: Fine calibration read value for 32.768 kHz RC oscillator */

/* Bits 9..0 : Fine calibration read value for 32.768 kHz RC oscillator */
#define CLOCK_RCOSC32KIFINE_RCOSC32KIFINE_Pos (0UL) /*!< Position of RCOSC32KIFINE field. */
#define CLOCK_RCOSC32KIFINE_RCOSC32KIFINE_Msk (0x3FFUL << CLOCK_RCOSC32KIFINE_RCOSC32KIFINE_Pos) /*!< Bit mask of RCOSC32KIFINE field. */

/* Register: CLOCK_RCOSC32KICOARSE */
/* Description: Coarse calibration read value for 32.768 kHz RC oscillator */

/* Bits 5..0 : Coarse calibration read value for 32.768 kHz RC oscillator */
#define CLOCK_RCOSC32KICOARSE_RCOSC32KICOARSE_Pos (0UL) /*!< Position of RCOSC32KICOARSE field. */
#define CLOCK_RCOSC32KICOARSE_RCOSC32KICOARSE_Msk (0x3FUL << CLOCK_RCOSC32KICOARSE_RCOSC32KICOARSE_Pos) /*!< Bit mask of RCOSC32KICOARSE field. */

/* Register: CLOCK_HFCLKCURRFREQ */
/* Description: Current frequency */

/* Bits 7..0 : Current High frequency clock (HCLK) frequency */
#define CLOCK_HFCLKCURRFREQ_HFCLKCURRFREQ_Pos (0UL) /*!< Position of HFCLKCURRFREQ field. */
#define CLOCK_HFCLKCURRFREQ_HFCLKCURRFREQ_Msk (0xFFUL << CLOCK_HFCLKCURRFREQ_HFCLKCURRFREQ_Pos) /*!< Bit mask of HFCLKCURRFREQ field. */
#define CLOCK_HFCLKCURRFREQ_HFCLKCURRFREQ_Default (0UL) /*!< Default frequency 64 MHz */
#define CLOCK_HFCLKCURRFREQ_HFCLKCURRFREQ_64M (1UL) /*!< 64 MHz */
#define CLOCK_HFCLKCURRFREQ_HFCLKCURRFREQ_16M (2UL) /*!< 16 MHz */

/* Register: CLOCK_HFCLKSRC */
/* Description: Clock source for the HFCLK oscillator, and configuration of XTAL oscillator. This register shall only be written while no oscillation is present on XC1. Failing to do so may cause unexpected behaviour. */

/* Bit 20 : Enable or disable quick-start mode of HFCLK crystal oscillator */
#define CLOCK_HFCLKSRC_QSTRT_Pos (20UL) /*!< Position of QSTRT field. */
#define CLOCK_HFCLKSRC_QSTRT_Msk (0x1UL << CLOCK_HFCLKSRC_QSTRT_Pos) /*!< Bit mask of QSTRT field. */
#define CLOCK_HFCLKSRC_QSTRT_Disabled (0UL) /*!< Disable */
#define CLOCK_HFCLKSRC_QSTRT_Enabled (1UL) /*!< Enable */

/* Bit 16 : Enable or disable bypass of HFCLK crystal oscillator */
#define CLOCK_HFCLKSRC_BYPASS_Pos (16UL) /*!< Position of BYPASS field. */
#define CLOCK_HFCLKSRC_BYPASS_Msk (0x1UL << CLOCK_HFCLKSRC_BYPASS_Pos) /*!< Bit mask of BYPASS field. */
#define CLOCK_HFCLKSRC_BYPASS_Disabled (0UL) /*!< Disable */
#define CLOCK_HFCLKSRC_BYPASS_Enabled (1UL) /*!< Enable */

/* Bit 0 : Select which HFCLK source is started by the START task */
#define CLOCK_HFCLKSRC_SRC_Pos (0UL) /*!< Position of SRC field. */
#define CLOCK_HFCLKSRC_SRC_Msk (0x1UL << CLOCK_HFCLKSRC_SRC_Pos) /*!< Bit mask of SRC field. */
#define CLOCK_HFCLKSRC_SRC_RC (0UL) /*!< START starts HFINT oscillator */
#define CLOCK_HFCLKSRC_SRC_XTAL (1UL) /*!< START starts XTAL oscillator, using settings in BYPASS and QSTRT */

/* Register: CLOCK_LFCLKSRC */
/* Description: Clock source for the LFCLK */

/* Bit 17 : Enable or disable external source for LFCLK */
#define CLOCK_LFCLKSRC_EXTERNAL_Pos (17UL) /*!< Position of EXTERNAL field. */
#define CLOCK_LFCLKSRC_EXTERNAL_Msk (0x1UL << CLOCK_LFCLKSRC_EXTERNAL_Pos) /*!< Bit mask of EXTERNAL field. */
#define CLOCK_LFCLKSRC_EXTERNAL_Disabled (0UL) /*!< Disable external source (use with Xtal) */
#define CLOCK_LFCLKSRC_EXTERNAL_Enabled (1UL) /*!< Enable use of external source instead of Xtal (SRC needs to be set to Xtal) */

/* Bit 16 : Enable or disable bypass of LFCLK crystal oscillator with external clock source */
#define CLOCK_LFCLKSRC_BYPASS_Pos (16UL) /*!< Position of BYPASS field. */
#define CLOCK_LFCLKSRC_BYPASS_Msk (0x1UL << CLOCK_LFCLKSRC_BYPASS_Pos) /*!< Bit mask of BYPASS field. */
#define CLOCK_LFCLKSRC_BYPASS_Disabled (0UL) /*!< Disable (use with Xtal or low-swing external source) */
#define CLOCK_LFCLKSRC_BYPASS_Enabled (1UL) /*!< Enable (use with rail-to-rail external source) */

/* Bits 1..0 : Clock source */
#define CLOCK_LFCLKSRC_SRC_Pos (0UL) /*!< Position of SRC field. */
#define CLOCK_LFCLKSRC_SRC_Msk (0x3UL << CLOCK_LFCLKSRC_SRC_Pos) /*!< Bit mask of SRC field. */
#define CLOCK_LFCLKSRC_SRC_RC (0UL) /*!< 32.768 kHz RC oscillator */
#define CLOCK_LFCLKSRC_SRC_Xtal (1UL) /*!< 32.768 kHz crystal oscillator */
#define CLOCK_LFCLKSRC_SRC_Synth (2UL) /*!< 32.768 kHz synthesized from HFCLK */

/* Register: CLOCK_RCOSC32KICALTEST */
/* Description: 32.768 kHz RC oscillator calibration debug register */

/* Bit 1 : Disable calSync auto-calibration */
#define CLOCK_RCOSC32KICALTEST_CALSYNCDISABLE_Pos (1UL) /*!< Position of CALSYNCDISABLE field. */
#define CLOCK_RCOSC32KICALTEST_CALSYNCDISABLE_Msk (0x1UL << CLOCK_RCOSC32KICALTEST_CALSYNCDISABLE_Pos) /*!< Bit mask of CALSYNCDISABLE field. */
#define CLOCK_RCOSC32KICALTEST_CALSYNCDISABLE_Enabled (0UL) /*!< calSync auto-calibration enabled */
#define CLOCK_RCOSC32KICALTEST_CALSYNCDISABLE_Disabled (1UL) /*!< calSync auto-calibration disabled */

/* Bit 0 : Enable debug pins: calSync on P0.8 (input); ck32Ki on P0.12 (output); rcosc32KiCalib on P0.22 (output) */
#define CLOCK_RCOSC32KICALTEST_DEBUGPINSEN_Pos (0UL) /*!< Position of DEBUGPINSEN field. */
#define CLOCK_RCOSC32KICALTEST_DEBUGPINSEN_Msk (0x1UL << CLOCK_RCOSC32KICALTEST_DEBUGPINSEN_Pos) /*!< Bit mask of DEBUGPINSEN field. */
#define CLOCK_RCOSC32KICALTEST_DEBUGPINSEN_Disabled (0UL) /*!< Pins in normal operation */
#define CLOCK_RCOSC32KICALTEST_DEBUGPINSEN_Enabled (1UL) /*!< Pins mapped for debug */

/* Register: CLOCK_CTIV */
/* Description: Calibration timer interval */

/* Bits 6..0 : Calibration timer interval in multiple of 0.25 seconds. Range: 0.25 seconds to 31.75 seconds. */
#define CLOCK_CTIV_CTIV_Pos (0UL) /*!< Position of CTIV field. */
#define CLOCK_CTIV_CTIV_Msk (0x7FUL << CLOCK_CTIV_CTIV_Pos) /*!< Bit mask of CTIV field. */

/* Register: CLOCK_RCOSC32KICALLENGTH */
/* Description: 32kHz RC oscillator calibration length */

/* Bits 2..0 : 32kHz RC oscillator calibration length in number of cycles */
#define CLOCK_RCOSC32KICALLENGTH_RCOSC32KICALLENGTH_Pos (0UL) /*!< Position of RCOSC32KICALLENGTH field. */
#define CLOCK_RCOSC32KICALLENGTH_RCOSC32KICALLENGTH_Msk (0x7UL << CLOCK_RCOSC32KICALLENGTH_RCOSC32KICALLENGTH_Pos) /*!< Bit mask of RCOSC32KICALLENGTH field. */
#define CLOCK_RCOSC32KICALLENGTH_RCOSC32KICALLENGTH_N64 (0UL) /*!< 64 cycles */
#define CLOCK_RCOSC32KICALLENGTH_RCOSC32KICALLENGTH_N128 (1UL) /*!< 128 cycles */
#define CLOCK_RCOSC32KICALLENGTH_RCOSC32KICALLENGTH_N256 (2UL) /*!< 256 cycles */
#define CLOCK_RCOSC32KICALLENGTH_RCOSC32KICALLENGTH_N512 (3UL) /*!< 512 cycles */

/* Register: CLOCK_RCOSC32KICOARSEIN */
/* Description: RCOSC coarse calibration input */

/* Bits 5..0 : RCOSC coarse calibration input */
#define CLOCK_RCOSC32KICOARSEIN_RCOSC32KICOARSEIN_Pos (0UL) /*!< Position of RCOSC32KICOARSEIN field. */
#define CLOCK_RCOSC32KICOARSEIN_RCOSC32KICOARSEIN_Msk (0x3FUL << CLOCK_RCOSC32KICOARSEIN_RCOSC32KICOARSEIN_Pos) /*!< Bit mask of RCOSC32KICOARSEIN field. */

/* Register: CLOCK_RCOSC32KICIRC */
/* Description: Rotating current source for for 32.768 kHz RC oscillator */

/* Bit 0 : Enable or disable use of external rotating current source for 32.768 kHz RC oscillator */
#define CLOCK_RCOSC32KICIRC_RCS_Pos (0UL) /*!< Position of RCS field. */
#define CLOCK_RCOSC32KICIRC_RCS_Msk (0x1UL << CLOCK_RCOSC32KICIRC_RCS_Pos) /*!< Bit mask of RCS field. */
#define CLOCK_RCOSC32KICIRC_RCS_Disabled (0UL) /*!< Disable */
#define CLOCK_RCOSC32KICIRC_RCS_Enabled (1UL) /*!< Enable */

/* Register: CLOCK_HFCLKCTRL */
/* Description: High frequency clock configuration request */

/* Bits 7..0 : High frequency clock HCLK */
#define CLOCK_HFCLKCTRL_HCLK_Pos (0UL) /*!< Position of HCLK field. */
#define CLOCK_HFCLKCTRL_HCLK_Msk (0xFFUL << CLOCK_HFCLKCTRL_HCLK_Pos) /*!< Bit mask of HCLK field. */
#define CLOCK_HFCLKCTRL_HCLK_Default (0UL) /*!< Default frequency 64 MHz */
#define CLOCK_HFCLKCTRL_HCLK_64M (1UL) /*!< 64 MHz */
#define CLOCK_HFCLKCTRL_HCLK_16M (2UL) /*!< 16 MHz */

/* Register: CLOCK_GATE_CPU */
/* Description: CPU clock gating */

/* Bit 0 : Enable or disable clock gating of CPU clock in CPU sleep, i.e. WFI and WFE type sleep */
#define CLOCK_GATE_CPU_CPU_Pos (0UL) /*!< Position of CPU field. */
#define CLOCK_GATE_CPU_CPU_Msk (0x1UL << CLOCK_GATE_CPU_CPU_Pos) /*!< Bit mask of CPU field. */
#define CLOCK_GATE_CPU_CPU_Disabled (0UL) /*!< Disable */
#define CLOCK_GATE_CPU_CPU_Enabled (1UL) /*!< Enable */

/* Register: CLOCK_ATECLOCK */
/* Description: Analog test bus control for clock modules */

/* Bits 2..1 : Configure connection of PLL to analog test bus */
#define CLOCK_ATECLOCK_PLL_Pos (1UL) /*!< Position of PLL field. */
#define CLOCK_ATECLOCK_PLL_Msk (0x3UL << CLOCK_ATECLOCK_PLL_Pos) /*!< Bit mask of PLL field. */
#define CLOCK_ATECLOCK_PLL_Disconnected (0UL) /*!< Disconnect */
#define CLOCK_ATECLOCK_PLL_VC (1UL) /*!< Connect loop filter voltage to ATB0 */
#define CLOCK_ATECLOCK_PLL_Osc32MDiv (2UL) /*!< Connect 32 MHz divided clock to ATB1 */
#define CLOCK_ATECLOCK_PLL_Both (3UL) /*!< Connect both VC and Osc32MDiv */

/* Bit 0 : Connect or disconnect 32.768 kHz RC oscillator to analog test bus */
#define CLOCK_ATECLOCK_RCOSC32K_Pos (0UL) /*!< Position of RCOSC32K field. */
#define CLOCK_ATECLOCK_RCOSC32K_Msk (0x1UL << CLOCK_ATECLOCK_RCOSC32K_Pos) /*!< Bit mask of RCOSC32K field. */
#define CLOCK_ATECLOCK_RCOSC32K_Disconnected (0UL) /*!< Disconnect */
#define CLOCK_ATECLOCK_RCOSC32K_Connected (1UL) /*!< Connect internal regulator output to ATB0 */


/* Peripheral: COMP */
/* Description: Comparator */

/* Register: COMP_TASKS_START */
/* Description: Start comparator */

/* Bit 0 :   */
#define COMP_TASKS_START_TASKS_START_Pos (0UL) /*!< Position of TASKS_START field. */
#define COMP_TASKS_START_TASKS_START_Msk (0x1UL << COMP_TASKS_START_TASKS_START_Pos) /*!< Bit mask of TASKS_START field. */

/* Register: COMP_TASKS_STOP */
/* Description: Stop comparator */

/* Bit 0 :   */
#define COMP_TASKS_STOP_TASKS_STOP_Pos (0UL) /*!< Position of TASKS_STOP field. */
#define COMP_TASKS_STOP_TASKS_STOP_Msk (0x1UL << COMP_TASKS_STOP_TASKS_STOP_Pos) /*!< Bit mask of TASKS_STOP field. */

/* Register: COMP_TASKS_SAMPLE */
/* Description: Sample comparator value */

/* Bit 0 :   */
#define COMP_TASKS_SAMPLE_TASKS_SAMPLE_Pos (0UL) /*!< Position of TASKS_SAMPLE field. */
#define COMP_TASKS_SAMPLE_TASKS_SAMPLE_Msk (0x1UL << COMP_TASKS_SAMPLE_TASKS_SAMPLE_Pos) /*!< Bit mask of TASKS_SAMPLE field. */

/* Register: COMP_EVENTS_READY */
/* Description: COMP is ready and output is valid */

/* Bit 0 :   */
#define COMP_EVENTS_READY_EVENTS_READY_Pos (0UL) /*!< Position of EVENTS_READY field. */
#define COMP_EVENTS_READY_EVENTS_READY_Msk (0x1UL << COMP_EVENTS_READY_EVENTS_READY_Pos) /*!< Bit mask of EVENTS_READY field. */

/* Register: COMP_EVENTS_DOWN */
/* Description: Downward crossing */

/* Bit 0 :   */
#define COMP_EVENTS_DOWN_EVENTS_DOWN_Pos (0UL) /*!< Position of EVENTS_DOWN field. */
#define COMP_EVENTS_DOWN_EVENTS_DOWN_Msk (0x1UL << COMP_EVENTS_DOWN_EVENTS_DOWN_Pos) /*!< Bit mask of EVENTS_DOWN field. */

/* Register: COMP_EVENTS_UP */
/* Description: Upward crossing */

/* Bit 0 :   */
#define COMP_EVENTS_UP_EVENTS_UP_Pos (0UL) /*!< Position of EVENTS_UP field. */
#define COMP_EVENTS_UP_EVENTS_UP_Msk (0x1UL << COMP_EVENTS_UP_EVENTS_UP_Pos) /*!< Bit mask of EVENTS_UP field. */

/* Register: COMP_EVENTS_CROSS */
/* Description: Downward or upward crossing */

/* Bit 0 :   */
#define COMP_EVENTS_CROSS_EVENTS_CROSS_Pos (0UL) /*!< Position of EVENTS_CROSS field. */
#define COMP_EVENTS_CROSS_EVENTS_CROSS_Msk (0x1UL << COMP_EVENTS_CROSS_EVENTS_CROSS_Pos) /*!< Bit mask of EVENTS_CROSS field. */

/* Register: COMP_SHORTS */
/* Description: Shortcut register */

/* Bit 4 : Shortcut between CROSS event and STOP task */
#define COMP_SHORTS_CROSS_STOP_Pos (4UL) /*!< Position of CROSS_STOP field. */
#define COMP_SHORTS_CROSS_STOP_Msk (0x1UL << COMP_SHORTS_CROSS_STOP_Pos) /*!< Bit mask of CROSS_STOP field. */
#define COMP_SHORTS_CROSS_STOP_Disabled (0UL) /*!< Disable shortcut */
#define COMP_SHORTS_CROSS_STOP_Enabled (1UL) /*!< Enable shortcut */

/* Bit 3 : Shortcut between UP event and STOP task */
#define COMP_SHORTS_UP_STOP_Pos (3UL) /*!< Position of UP_STOP field. */
#define COMP_SHORTS_UP_STOP_Msk (0x1UL << COMP_SHORTS_UP_STOP_Pos) /*!< Bit mask of UP_STOP field. */
#define COMP_SHORTS_UP_STOP_Disabled (0UL) /*!< Disable shortcut */
#define COMP_SHORTS_UP_STOP_Enabled (1UL) /*!< Enable shortcut */

/* Bit 2 : Shortcut between DOWN event and STOP task */
#define COMP_SHORTS_DOWN_STOP_Pos (2UL) /*!< Position of DOWN_STOP field. */
#define COMP_SHORTS_DOWN_STOP_Msk (0x1UL << COMP_SHORTS_DOWN_STOP_Pos) /*!< Bit mask of DOWN_STOP field. */
#define COMP_SHORTS_DOWN_STOP_Disabled (0UL) /*!< Disable shortcut */
#define COMP_SHORTS_DOWN_STOP_Enabled (1UL) /*!< Enable shortcut */

/* Bit 1 : Shortcut between READY event and STOP task */
#define COMP_SHORTS_READY_STOP_Pos (1UL) /*!< Position of READY_STOP field. */
#define COMP_SHORTS_READY_STOP_Msk (0x1UL << COMP_SHORTS_READY_STOP_Pos) /*!< Bit mask of READY_STOP field. */
#define COMP_SHORTS_READY_STOP_Disabled (0UL) /*!< Disable shortcut */
#define COMP_SHORTS_READY_STOP_Enabled (1UL) /*!< Enable shortcut */

/* Bit 0 : Shortcut between READY event and SAMPLE task */
#define COMP_SHORTS_READY_SAMPLE_Pos (0UL) /*!< Position of READY_SAMPLE field. */
#define COMP_SHORTS_READY_SAMPLE_Msk (0x1UL << COMP_SHORTS_READY_SAMPLE_Pos) /*!< Bit mask of READY_SAMPLE field. */
#define COMP_SHORTS_READY_SAMPLE_Disabled (0UL) /*!< Disable shortcut */
#define COMP_SHORTS_READY_SAMPLE_Enabled (1UL) /*!< Enable shortcut */

/* Register: COMP_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 3 : Enable or disable interrupt for CROSS event */
#define COMP_INTEN_CROSS_Pos (3UL) /*!< Position of CROSS field. */
#define COMP_INTEN_CROSS_Msk (0x1UL << COMP_INTEN_CROSS_Pos) /*!< Bit mask of CROSS field. */
#define COMP_INTEN_CROSS_Disabled (0UL) /*!< Disable */
#define COMP_INTEN_CROSS_Enabled (1UL) /*!< Enable */

/* Bit 2 : Enable or disable interrupt for UP event */
#define COMP_INTEN_UP_Pos (2UL) /*!< Position of UP field. */
#define COMP_INTEN_UP_Msk (0x1UL << COMP_INTEN_UP_Pos) /*!< Bit mask of UP field. */
#define COMP_INTEN_UP_Disabled (0UL) /*!< Disable */
#define COMP_INTEN_UP_Enabled (1UL) /*!< Enable */

/* Bit 1 : Enable or disable interrupt for DOWN event */
#define COMP_INTEN_DOWN_Pos (1UL) /*!< Position of DOWN field. */
#define COMP_INTEN_DOWN_Msk (0x1UL << COMP_INTEN_DOWN_Pos) /*!< Bit mask of DOWN field. */
#define COMP_INTEN_DOWN_Disabled (0UL) /*!< Disable */
#define COMP_INTEN_DOWN_Enabled (1UL) /*!< Enable */

/* Bit 0 : Enable or disable interrupt for READY event */
#define COMP_INTEN_READY_Pos (0UL) /*!< Position of READY field. */
#define COMP_INTEN_READY_Msk (0x1UL << COMP_INTEN_READY_Pos) /*!< Bit mask of READY field. */
#define COMP_INTEN_READY_Disabled (0UL) /*!< Disable */
#define COMP_INTEN_READY_Enabled (1UL) /*!< Enable */

/* Register: COMP_INTENSET */
/* Description: Enable interrupt */

/* Bit 3 : Write '1' to enable interrupt for CROSS event */
#define COMP_INTENSET_CROSS_Pos (3UL) /*!< Position of CROSS field. */
#define COMP_INTENSET_CROSS_Msk (0x1UL << COMP_INTENSET_CROSS_Pos) /*!< Bit mask of CROSS field. */
#define COMP_INTENSET_CROSS_Disabled (0UL) /*!< Read: Disabled */
#define COMP_INTENSET_CROSS_Enabled (1UL) /*!< Read: Enabled */
#define COMP_INTENSET_CROSS_Set (1UL) /*!< Enable */

/* Bit 2 : Write '1' to enable interrupt for UP event */
#define COMP_INTENSET_UP_Pos (2UL) /*!< Position of UP field. */
#define COMP_INTENSET_UP_Msk (0x1UL << COMP_INTENSET_UP_Pos) /*!< Bit mask of UP field. */
#define COMP_INTENSET_UP_Disabled (0UL) /*!< Read: Disabled */
#define COMP_INTENSET_UP_Enabled (1UL) /*!< Read: Enabled */
#define COMP_INTENSET_UP_Set (1UL) /*!< Enable */

/* Bit 1 : Write '1' to enable interrupt for DOWN event */
#define COMP_INTENSET_DOWN_Pos (1UL) /*!< Position of DOWN field. */
#define COMP_INTENSET_DOWN_Msk (0x1UL << COMP_INTENSET_DOWN_Pos) /*!< Bit mask of DOWN field. */
#define COMP_INTENSET_DOWN_Disabled (0UL) /*!< Read: Disabled */
#define COMP_INTENSET_DOWN_Enabled (1UL) /*!< Read: Enabled */
#define COMP_INTENSET_DOWN_Set (1UL) /*!< Enable */

/* Bit 0 : Write '1' to enable interrupt for READY event */
#define COMP_INTENSET_READY_Pos (0UL) /*!< Position of READY field. */
#define COMP_INTENSET_READY_Msk (0x1UL << COMP_INTENSET_READY_Pos) /*!< Bit mask of READY field. */
#define COMP_INTENSET_READY_Disabled (0UL) /*!< Read: Disabled */
#define COMP_INTENSET_READY_Enabled (1UL) /*!< Read: Enabled */
#define COMP_INTENSET_READY_Set (1UL) /*!< Enable */

/* Register: COMP_INTENCLR */
/* Description: Disable interrupt */

/* Bit 3 : Write '1' to disable interrupt for CROSS event */
#define COMP_INTENCLR_CROSS_Pos (3UL) /*!< Position of CROSS field. */
#define COMP_INTENCLR_CROSS_Msk (0x1UL << COMP_INTENCLR_CROSS_Pos) /*!< Bit mask of CROSS field. */
#define COMP_INTENCLR_CROSS_Disabled (0UL) /*!< Read: Disabled */
#define COMP_INTENCLR_CROSS_Enabled (1UL) /*!< Read: Enabled */
#define COMP_INTENCLR_CROSS_Clear (1UL) /*!< Disable */

/* Bit 2 : Write '1' to disable interrupt for UP event */
#define COMP_INTENCLR_UP_Pos (2UL) /*!< Position of UP field. */
#define COMP_INTENCLR_UP_Msk (0x1UL << COMP_INTENCLR_UP_Pos) /*!< Bit mask of UP field. */
#define COMP_INTENCLR_UP_Disabled (0UL) /*!< Read: Disabled */
#define COMP_INTENCLR_UP_Enabled (1UL) /*!< Read: Enabled */
#define COMP_INTENCLR_UP_Clear (1UL) /*!< Disable */

/* Bit 1 : Write '1' to disable interrupt for DOWN event */
#define COMP_INTENCLR_DOWN_Pos (1UL) /*!< Position of DOWN field. */
#define COMP_INTENCLR_DOWN_Msk (0x1UL << COMP_INTENCLR_DOWN_Pos) /*!< Bit mask of DOWN field. */
#define COMP_INTENCLR_DOWN_Disabled (0UL) /*!< Read: Disabled */
#define COMP_INTENCLR_DOWN_Enabled (1UL) /*!< Read: Enabled */
#define COMP_INTENCLR_DOWN_Clear (1UL) /*!< Disable */

/* Bit 0 : Write '1' to disable interrupt for READY event */
#define COMP_INTENCLR_READY_Pos (0UL) /*!< Position of READY field. */
#define COMP_INTENCLR_READY_Msk (0x1UL << COMP_INTENCLR_READY_Pos) /*!< Bit mask of READY field. */
#define COMP_INTENCLR_READY_Disabled (0UL) /*!< Read: Disabled */
#define COMP_INTENCLR_READY_Enabled (1UL) /*!< Read: Enabled */
#define COMP_INTENCLR_READY_Clear (1UL) /*!< Disable */

/* Register: COMP_RESULT */
/* Description: Compare result */

/* Bit 0 : Result of last compare. Decision point SAMPLE task. */
#define COMP_RESULT_RESULT_Pos (0UL) /*!< Position of RESULT field. */
#define COMP_RESULT_RESULT_Msk (0x1UL << COMP_RESULT_RESULT_Pos) /*!< Bit mask of RESULT field. */
#define COMP_RESULT_RESULT_Below (0UL) /*!< Input voltage is below the threshold (VIN+ &lt; VIN-) */
#define COMP_RESULT_RESULT_Above (1UL) /*!< Input voltage is above the threshold (VIN+ &gt; VIN-) */

/* Register: COMP_BGREADY */
/* Description: COMP module is ready */

/* Bit 0 : Result of last compare. Decision point SAMPLE task. */
#define COMP_BGREADY_STATE_Pos (0UL) /*!< Position of STATE field. */
#define COMP_BGREADY_STATE_Msk (0x1UL << COMP_BGREADY_STATE_Pos) /*!< Bit mask of STATE field. */
#define COMP_BGREADY_STATE_NotReady (0UL) /*!< Module is not ready */
#define COMP_BGREADY_STATE_Ready (1UL) /*!< Module is ready */

/* Register: COMP_ENABLE */
/* Description: COMP enable */

/* Bits 1..0 : Enable or disable COMP */
#define COMP_ENABLE_ENABLE_Pos (0UL) /*!< Position of ENABLE field. */
#define COMP_ENABLE_ENABLE_Msk (0x3UL << COMP_ENABLE_ENABLE_Pos) /*!< Bit mask of ENABLE field. */
#define COMP_ENABLE_ENABLE_Disabled (0UL) /*!< Disable */
#define COMP_ENABLE_ENABLE_Enabled (2UL) /*!< Enable */

/* Register: COMP_PSEL */
/* Description: Pin select */

/* Bits 2..0 : Analog pin select */
#define COMP_PSEL_PSEL_Pos (0UL) /*!< Position of PSEL field. */
#define COMP_PSEL_PSEL_Msk (0x7UL << COMP_PSEL_PSEL_Pos) /*!< Bit mask of PSEL field. */
#define COMP_PSEL_PSEL_AnalogInput0 (0UL) /*!< AIN0 selected as analog input */
#define COMP_PSEL_PSEL_AnalogInput1 (1UL) /*!< AIN1 selected as analog input */
#define COMP_PSEL_PSEL_AnalogInput2 (2UL) /*!< AIN2 selected as analog input */
#define COMP_PSEL_PSEL_AnalogInput3 (3UL) /*!< AIN3 selected as analog input */
#define COMP_PSEL_PSEL_AnalogInput4 (4UL) /*!< AIN4 selected as analog input */
#define COMP_PSEL_PSEL_AnalogInput5 (5UL) /*!< AIN5 selected as analog input */
#define COMP_PSEL_PSEL_AnalogInput6 (6UL) /*!< AIN6 selected as analog input */
#define COMP_PSEL_PSEL_VddDiv2 (7UL) /*!< VDD/2 selected as analog input */

/* Register: COMP_REFSEL */
/* Description: Reference source select for single-ended mode */

/* Bits 2..0 : Reference select */
#define COMP_REFSEL_REFSEL_Pos (0UL) /*!< Position of REFSEL field. */
#define COMP_REFSEL_REFSEL_Msk (0x7UL << COMP_REFSEL_REFSEL_Pos) /*!< Bit mask of REFSEL field. */
#define COMP_REFSEL_REFSEL_Int1V2 (0UL) /*!< VREF = internal 1.2 V reference (VDD &gt;= 1.7 V) */
#define COMP_REFSEL_REFSEL_Int1V8 (1UL) /*!< VREF = internal 1.8 V reference (VDD &gt;= VREF + 0.2 V) */
#define COMP_REFSEL_REFSEL_Int2V4 (2UL) /*!< VREF = internal 2.4 V reference (VDD &gt;= VREF + 0.2 V) */
#define COMP_REFSEL_REFSEL_VDD (4UL) /*!< VREF = VDD */
#define COMP_REFSEL_REFSEL_ARef (5UL) /*!< VREF = AREF (VDD &gt;= VREF &gt;= AREFMIN) */

/* Register: COMP_EXTREFSEL */
/* Description: External reference select */

/* Bits 2..0 : External analog reference select */
#define COMP_EXTREFSEL_EXTREFSEL_Pos (0UL) /*!< Position of EXTREFSEL field. */
#define COMP_EXTREFSEL_EXTREFSEL_Msk (0x7UL << COMP_EXTREFSEL_EXTREFSEL_Pos) /*!< Bit mask of EXTREFSEL field. */
#define COMP_EXTREFSEL_EXTREFSEL_AnalogReference0 (0UL) /*!< Use AIN0 as external analog reference */
#define COMP_EXTREFSEL_EXTREFSEL_AnalogReference1 (1UL) /*!< Use AIN1 as external analog reference */
#define COMP_EXTREFSEL_EXTREFSEL_AnalogReference2 (2UL) /*!< Use AIN2 as external analog reference */
#define COMP_EXTREFSEL_EXTREFSEL_AnalogReference3 (3UL) /*!< Use AIN3 as external analog reference */
#define COMP_EXTREFSEL_EXTREFSEL_AnalogReference4 (4UL) /*!< Use AIN4 as external analog reference */
#define COMP_EXTREFSEL_EXTREFSEL_AnalogReference5 (5UL) /*!< Use AIN5 as external analog reference */
#define COMP_EXTREFSEL_EXTREFSEL_AnalogReference6 (6UL) /*!< Use AIN6 as external analog reference */
#define COMP_EXTREFSEL_EXTREFSEL_AnalogReference7 (7UL) /*!< Use AIN7 as external analog reference */

/* Register: COMP_TH */
/* Description: Threshold configuration for hysteresis unit */

/* Bits 13..8 : VUP = (THUP+1)/64*VREF */
#define COMP_TH_THUP_Pos (8UL) /*!< Position of THUP field. */
#define COMP_TH_THUP_Msk (0x3FUL << COMP_TH_THUP_Pos) /*!< Bit mask of THUP field. */

/* Bits 5..0 : VDOWN = (THDOWN+1)/64*VREF */
#define COMP_TH_THDOWN_Pos (0UL) /*!< Position of THDOWN field. */
#define COMP_TH_THDOWN_Msk (0x3FUL << COMP_TH_THDOWN_Pos) /*!< Bit mask of THDOWN field. */

/* Register: COMP_MODE */
/* Description: Mode configuration */

/* Bit 8 : Main operation modes */
#define COMP_MODE_MAIN_Pos (8UL) /*!< Position of MAIN field. */
#define COMP_MODE_MAIN_Msk (0x1UL << COMP_MODE_MAIN_Pos) /*!< Bit mask of MAIN field. */
#define COMP_MODE_MAIN_SE (0UL) /*!< Single-ended mode */
#define COMP_MODE_MAIN_Diff (1UL) /*!< Differential mode */

/* Bits 1..0 : Speed and power modes */
#define COMP_MODE_SP_Pos (0UL) /*!< Position of SP field. */
#define COMP_MODE_SP_Msk (0x3UL << COMP_MODE_SP_Pos) /*!< Bit mask of SP field. */
#define COMP_MODE_SP_Low (0UL) /*!< Low-power mode */
#define COMP_MODE_SP_Normal (1UL) /*!< Normal mode */
#define COMP_MODE_SP_High (2UL) /*!< High-speed mode */

/* Register: COMP_HYST */
/* Description: Comparator hysteresis enable */

/* Bit 0 : Comparator hysteresis */
#define COMP_HYST_HYST_Pos (0UL) /*!< Position of HYST field. */
#define COMP_HYST_HYST_Msk (0x1UL << COMP_HYST_HYST_Pos) /*!< Bit mask of HYST field. */
#define COMP_HYST_HYST_NoHyst (0UL) /*!< Comparator hysteresis disabled */
#define COMP_HYST_HYST_Hyst50mV (1UL) /*!< Comparator hysteresis enabled */

/* Register: COMP_ISOURCE */
/* Description: Current source select on analog input */

/* Bits 1..0 : Comparator hysteresis */
#define COMP_ISOURCE_ISOURCE_Pos (0UL) /*!< Position of ISOURCE field. */
#define COMP_ISOURCE_ISOURCE_Msk (0x3UL << COMP_ISOURCE_ISOURCE_Pos) /*!< Bit mask of ISOURCE field. */
#define COMP_ISOURCE_ISOURCE_Off (0UL) /*!< Current source disabled */
#define COMP_ISOURCE_ISOURCE_Ien2mA5 (1UL) /*!< Current source enabled (+/- 2.5 uA) */
#define COMP_ISOURCE_ISOURCE_Ien5mA (2UL) /*!< Current source enabled (+/- 5 uA) */
#define COMP_ISOURCE_ISOURCE_Ien10mA (3UL) /*!< Current source enabled (+/- 10 uA) */

/* Register: COMP_REFTRIM */
/* Description: Trim internal band gap reference, copied from FICR (COMPREFTRIM register) at reset */

/* Bits 4..0 : Trimming value */
#define COMP_REFTRIM_REFTRIM_Pos (0UL) /*!< Position of REFTRIM field. */
#define COMP_REFTRIM_REFTRIM_Msk (0x1FUL << COMP_REFTRIM_REFTRIM_Pos) /*!< Bit mask of REFTRIM field. */

/* Register: COMP_ATECOMP */
/* Description: Analog test bus control for comparator */

/* Bits 1..0 : Configure connection of comparator to analog test bus */
#define COMP_ATECOMP_COMP_Pos (0UL) /*!< Position of COMP field. */
#define COMP_ATECOMP_COMP_Msk (0x3UL << COMP_ATECOMP_COMP_Pos) /*!< Bit mask of COMP field. */
#define COMP_ATECOMP_COMP_Disconnected (0UL) /*!< Disconnect */
#define COMP_ATECOMP_COMP_VIN (1UL) /*!< Connect VIN+ to ATB0 and VIN- to ATB1 (VIN- only in differential mode) */
#define COMP_ATECOMP_COMP_VRef (2UL) /*!< Connect internal bandgap voltage to ATB0 */
#define COMP_ATECOMP_COMP_Future (3UL) /*!< Reserved for future use */

/* Register: COMP_POWER */
/* Description: Peripheral power control */

/* Bit 0 : Peripheral power control. The peripheral and its registers will be reset to its initial state by switching the peripheral off and then back on again. */
#define COMP_POWER_POWER_Pos (0UL) /*!< Position of POWER field. */
#define COMP_POWER_POWER_Msk (0x1UL << COMP_POWER_POWER_Pos) /*!< Bit mask of POWER field. */
#define COMP_POWER_POWER_Disabled (0UL) /*!< Peripheral is powered off */
#define COMP_POWER_POWER_Enabled (1UL) /*!< Peripheral is powered on */


/* Peripheral: ECB */
/* Description: AES ECB Mode Encryption */

/* Register: ECB_TASKS_STARTECB */
/* Description: Start ECB block encrypt */

/* Bit 0 :   */
#define ECB_TASKS_STARTECB_TASKS_STARTECB_Pos (0UL) /*!< Position of TASKS_STARTECB field. */
#define ECB_TASKS_STARTECB_TASKS_STARTECB_Msk (0x1UL << ECB_TASKS_STARTECB_TASKS_STARTECB_Pos) /*!< Bit mask of TASKS_STARTECB field. */

/* Register: ECB_TASKS_STOPECB */
/* Description: Abort a possible executing ECB operation */

/* Bit 0 :   */
#define ECB_TASKS_STOPECB_TASKS_STOPECB_Pos (0UL) /*!< Position of TASKS_STOPECB field. */
#define ECB_TASKS_STOPECB_TASKS_STOPECB_Msk (0x1UL << ECB_TASKS_STOPECB_TASKS_STOPECB_Pos) /*!< Bit mask of TASKS_STOPECB field. */

/* Register: ECB_EVENTS_ENDECB */
/* Description: ECB block encrypt complete */

/* Bit 0 :   */
#define ECB_EVENTS_ENDECB_EVENTS_ENDECB_Pos (0UL) /*!< Position of EVENTS_ENDECB field. */
#define ECB_EVENTS_ENDECB_EVENTS_ENDECB_Msk (0x1UL << ECB_EVENTS_ENDECB_EVENTS_ENDECB_Pos) /*!< Bit mask of EVENTS_ENDECB field. */

/* Register: ECB_EVENTS_ERRORECB */
/* Description: ECB block encrypt aborted because of a STOPECB task or due to an error */

/* Bit 0 :   */
#define ECB_EVENTS_ERRORECB_EVENTS_ERRORECB_Pos (0UL) /*!< Position of EVENTS_ERRORECB field. */
#define ECB_EVENTS_ERRORECB_EVENTS_ERRORECB_Msk (0x1UL << ECB_EVENTS_ERRORECB_EVENTS_ERRORECB_Pos) /*!< Bit mask of EVENTS_ERRORECB field. */

/* Register: ECB_INTENSET */
/* Description: Enable interrupt */

/* Bit 1 : Write '1' to enable interrupt for ERRORECB event */
#define ECB_INTENSET_ERRORECB_Pos (1UL) /*!< Position of ERRORECB field. */
#define ECB_INTENSET_ERRORECB_Msk (0x1UL << ECB_INTENSET_ERRORECB_Pos) /*!< Bit mask of ERRORECB field. */
#define ECB_INTENSET_ERRORECB_Disabled (0UL) /*!< Read: Disabled */
#define ECB_INTENSET_ERRORECB_Enabled (1UL) /*!< Read: Enabled */
#define ECB_INTENSET_ERRORECB_Set (1UL) /*!< Enable */

/* Bit 0 : Write '1' to enable interrupt for ENDECB event */
#define ECB_INTENSET_ENDECB_Pos (0UL) /*!< Position of ENDECB field. */
#define ECB_INTENSET_ENDECB_Msk (0x1UL << ECB_INTENSET_ENDECB_Pos) /*!< Bit mask of ENDECB field. */
#define ECB_INTENSET_ENDECB_Disabled (0UL) /*!< Read: Disabled */
#define ECB_INTENSET_ENDECB_Enabled (1UL) /*!< Read: Enabled */
#define ECB_INTENSET_ENDECB_Set (1UL) /*!< Enable */

/* Register: ECB_INTENCLR */
/* Description: Disable interrupt */

/* Bit 1 : Write '1' to disable interrupt for ERRORECB event */
#define ECB_INTENCLR_ERRORECB_Pos (1UL) /*!< Position of ERRORECB field. */
#define ECB_INTENCLR_ERRORECB_Msk (0x1UL << ECB_INTENCLR_ERRORECB_Pos) /*!< Bit mask of ERRORECB field. */
#define ECB_INTENCLR_ERRORECB_Disabled (0UL) /*!< Read: Disabled */
#define ECB_INTENCLR_ERRORECB_Enabled (1UL) /*!< Read: Enabled */
#define ECB_INTENCLR_ERRORECB_Clear (1UL) /*!< Disable */

/* Bit 0 : Write '1' to disable interrupt for ENDECB event */
#define ECB_INTENCLR_ENDECB_Pos (0UL) /*!< Position of ENDECB field. */
#define ECB_INTENCLR_ENDECB_Msk (0x1UL << ECB_INTENCLR_ENDECB_Pos) /*!< Bit mask of ENDECB field. */
#define ECB_INTENCLR_ENDECB_Disabled (0UL) /*!< Read: Disabled */
#define ECB_INTENCLR_ENDECB_Enabled (1UL) /*!< Read: Enabled */
#define ECB_INTENCLR_ENDECB_Clear (1UL) /*!< Disable */

/* Register: ECB_ECBDATAPTR */
/* Description: ECB block encrypt memory pointers */

/* Bits 31..0 : Pointer to the ECB data structure (see Table 1 ECB data structure overview) */
#define ECB_ECBDATAPTR_ECBDATAPTR_Pos (0UL) /*!< Position of ECBDATAPTR field. */
#define ECB_ECBDATAPTR_ECBDATAPTR_Msk (0xFFFFFFFFUL << ECB_ECBDATAPTR_ECBDATAPTR_Pos) /*!< Bit mask of ECBDATAPTR field. */

/* Register: ECB_POWER */
/* Description: Peripheral power control */

/* Bit 0 : Peripheral power control. The peripheral and its registers will be reset to its initial state by switching the peripheral off and then back on again. All POWER registers in AAR, CCM and ECB must be disabled to see a reset of any of those functions. */
#define ECB_POWER_POWER_Pos (0UL) /*!< Position of POWER field. */
#define ECB_POWER_POWER_Msk (0x1UL << ECB_POWER_POWER_Pos) /*!< Bit mask of POWER field. */
#define ECB_POWER_POWER_Disabled (0UL) /*!< Peripheral is powered off */
#define ECB_POWER_POWER_Enabled (1UL) /*!< Peripheral is powered on */


/* Peripheral: EGU */
/* Description: Event Generator Unit 0 */

/* Register: EGU_TASKS_TRIGGER */
/* Description: Description collection[n]: Trigger n for triggering the corresponding TRIGGERED[n] event */

/* Bit 0 :   */
#define EGU_TASKS_TRIGGER_TASKS_TRIGGER_Pos (0UL) /*!< Position of TASKS_TRIGGER field. */
#define EGU_TASKS_TRIGGER_TASKS_TRIGGER_Msk (0x1UL << EGU_TASKS_TRIGGER_TASKS_TRIGGER_Pos) /*!< Bit mask of TASKS_TRIGGER field. */

/* Register: EGU_EVENTS_TRIGGERED */
/* Description: Description collection[n]: Event number n generated by triggering the corresponding TRIGGER[n] task */

/* Bit 0 :   */
#define EGU_EVENTS_TRIGGERED_EVENTS_TRIGGERED_Pos (0UL) /*!< Position of EVENTS_TRIGGERED field. */
#define EGU_EVENTS_TRIGGERED_EVENTS_TRIGGERED_Msk (0x1UL << EGU_EVENTS_TRIGGERED_EVENTS_TRIGGERED_Pos) /*!< Bit mask of EVENTS_TRIGGERED field. */

/* Register: EGU_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 15 : Enable or disable interrupt for TRIGGERED[15] event */
#define EGU_INTEN_TRIGGERED15_Pos (15UL) /*!< Position of TRIGGERED15 field. */
#define EGU_INTEN_TRIGGERED15_Msk (0x1UL << EGU_INTEN_TRIGGERED15_Pos) /*!< Bit mask of TRIGGERED15 field. */
#define EGU_INTEN_TRIGGERED15_Disabled (0UL) /*!< Disable */
#define EGU_INTEN_TRIGGERED15_Enabled (1UL) /*!< Enable */

/* Bit 14 : Enable or disable interrupt for TRIGGERED[14] event */
#define EGU_INTEN_TRIGGERED14_Pos (14UL) /*!< Position of TRIGGERED14 field. */
#define EGU_INTEN_TRIGGERED14_Msk (0x1UL << EGU_INTEN_TRIGGERED14_Pos) /*!< Bit mask of TRIGGERED14 field. */
#define EGU_INTEN_TRIGGERED14_Disabled (0UL) /*!< Disable */
#define EGU_INTEN_TRIGGERED14_Enabled (1UL) /*!< Enable */

/* Bit 13 : Enable or disable interrupt for TRIGGERED[13] event */
#define EGU_INTEN_TRIGGERED13_Pos (13UL) /*!< Position of TRIGGERED13 field. */
#define EGU_INTEN_TRIGGERED13_Msk (0x1UL << EGU_INTEN_TRIGGERED13_Pos) /*!< Bit mask of TRIGGERED13 field. */
#define EGU_INTEN_TRIGGERED13_Disabled (0UL) /*!< Disable */
#define EGU_INTEN_TRIGGERED13_Enabled (1UL) /*!< Enable */

/* Bit 12 : Enable or disable interrupt for TRIGGERED[12] event */
#define EGU_INTEN_TRIGGERED12_Pos (12UL) /*!< Position of TRIGGERED12 field. */
#define EGU_INTEN_TRIGGERED12_Msk (0x1UL << EGU_INTEN_TRIGGERED12_Pos) /*!< Bit mask of TRIGGERED12 field. */
#define EGU_INTEN_TRIGGERED12_Disabled (0UL) /*!< Disable */
#define EGU_INTEN_TRIGGERED12_Enabled (1UL) /*!< Enable */

/* Bit 11 : Enable or disable interrupt for TRIGGERED[11] event */
#define EGU_INTEN_TRIGGERED11_Pos (11UL) /*!< Position of TRIGGERED11 field. */
#define EGU_INTEN_TRIGGERED11_Msk (0x1UL << EGU_INTEN_TRIGGERED11_Pos) /*!< Bit mask of TRIGGERED11 field. */
#define EGU_INTEN_TRIGGERED11_Disabled (0UL) /*!< Disable */
#define EGU_INTEN_TRIGGERED11_Enabled (1UL) /*!< Enable */

/* Bit 10 : Enable or disable interrupt for TRIGGERED[10] event */
#define EGU_INTEN_TRIGGERED10_Pos (10UL) /*!< Position of TRIGGERED10 field. */
#define EGU_INTEN_TRIGGERED10_Msk (0x1UL << EGU_INTEN_TRIGGERED10_Pos) /*!< Bit mask of TRIGGERED10 field. */
#define EGU_INTEN_TRIGGERED10_Disabled (0UL) /*!< Disable */
#define EGU_INTEN_TRIGGERED10_Enabled (1UL) /*!< Enable */

/* Bit 9 : Enable or disable interrupt for TRIGGERED[9] event */
#define EGU_INTEN_TRIGGERED9_Pos (9UL) /*!< Position of TRIGGERED9 field. */
#define EGU_INTEN_TRIGGERED9_Msk (0x1UL << EGU_INTEN_TRIGGERED9_Pos) /*!< Bit mask of TRIGGERED9 field. */
#define EGU_INTEN_TRIGGERED9_Disabled (0UL) /*!< Disable */
#define EGU_INTEN_TRIGGERED9_Enabled (1UL) /*!< Enable */

/* Bit 8 : Enable or disable interrupt for TRIGGERED[8] event */
#define EGU_INTEN_TRIGGERED8_Pos (8UL) /*!< Position of TRIGGERED8 field. */
#define EGU_INTEN_TRIGGERED8_Msk (0x1UL << EGU_INTEN_TRIGGERED8_Pos) /*!< Bit mask of TRIGGERED8 field. */
#define EGU_INTEN_TRIGGERED8_Disabled (0UL) /*!< Disable */
#define EGU_INTEN_TRIGGERED8_Enabled (1UL) /*!< Enable */

/* Bit 7 : Enable or disable interrupt for TRIGGERED[7] event */
#define EGU_INTEN_TRIGGERED7_Pos (7UL) /*!< Position of TRIGGERED7 field. */
#define EGU_INTEN_TRIGGERED7_Msk (0x1UL << EGU_INTEN_TRIGGERED7_Pos) /*!< Bit mask of TRIGGERED7 field. */
#define EGU_INTEN_TRIGGERED7_Disabled (0UL) /*!< Disable */
#define EGU_INTEN_TRIGGERED7_Enabled (1UL) /*!< Enable */

/* Bit 6 : Enable or disable interrupt for TRIGGERED[6] event */
#define EGU_INTEN_TRIGGERED6_Pos (6UL) /*!< Position of TRIGGERED6 field. */
#define EGU_INTEN_TRIGGERED6_Msk (0x1UL << EGU_INTEN_TRIGGERED6_Pos) /*!< Bit mask of TRIGGERED6 field. */
#define EGU_INTEN_TRIGGERED6_Disabled (0UL) /*!< Disable */
#define EGU_INTEN_TRIGGERED6_Enabled (1UL) /*!< Enable */

/* Bit 5 : Enable or disable interrupt for TRIGGERED[5] event */
#define EGU_INTEN_TRIGGERED5_Pos (5UL) /*!< Position of TRIGGERED5 field. */
#define EGU_INTEN_TRIGGERED5_Msk (0x1UL << EGU_INTEN_TRIGGERED5_Pos) /*!< Bit mask of TRIGGERED5 field. */
#define EGU_INTEN_TRIGGERED5_Disabled (0UL) /*!< Disable */
#define EGU_INTEN_TRIGGERED5_Enabled (1UL) /*!< Enable */

/* Bit 4 : Enable or disable interrupt for TRIGGERED[4] event */
#define EGU_INTEN_TRIGGERED4_Pos (4UL) /*!< Position of TRIGGERED4 field. */
#define EGU_INTEN_TRIGGERED4_Msk (0x1UL << EGU_INTEN_TRIGGERED4_Pos) /*!< Bit mask of TRIGGERED4 field. */
#define EGU_INTEN_TRIGGERED4_Disabled (0UL) /*!< Disable */
#define EGU_INTEN_TRIGGERED4_Enabled (1UL) /*!< Enable */

/* Bit 3 : Enable or disable interrupt for TRIGGERED[3] event */
#define EGU_INTEN_TRIGGERED3_Pos (3UL) /*!< Position of TRIGGERED3 field. */
#define EGU_INTEN_TRIGGERED3_Msk (0x1UL << EGU_INTEN_TRIGGERED3_Pos) /*!< Bit mask of TRIGGERED3 field. */
#define EGU_INTEN_TRIGGERED3_Disabled (0UL) /*!< Disable */
#define EGU_INTEN_TRIGGERED3_Enabled (1UL) /*!< Enable */

/* Bit 2 : Enable or disable interrupt for TRIGGERED[2] event */
#define EGU_INTEN_TRIGGERED2_Pos (2UL) /*!< Position of TRIGGERED2 field. */
#define EGU_INTEN_TRIGGERED2_Msk (0x1UL << EGU_INTEN_TRIGGERED2_Pos) /*!< Bit mask of TRIGGERED2 field. */
#define EGU_INTEN_TRIGGERED2_Disabled (0UL) /*!< Disable */
#define EGU_INTEN_TRIGGERED2_Enabled (1UL) /*!< Enable */

/* Bit 1 : Enable or disable interrupt for TRIGGERED[1] event */
#define EGU_INTEN_TRIGGERED1_Pos (1UL) /*!< Position of TRIGGERED1 field. */
#define EGU_INTEN_TRIGGERED1_Msk (0x1UL << EGU_INTEN_TRIGGERED1_Pos) /*!< Bit mask of TRIGGERED1 field. */
#define EGU_INTEN_TRIGGERED1_Disabled (0UL) /*!< Disable */
#define EGU_INTEN_TRIGGERED1_Enabled (1UL) /*!< Enable */

/* Bit 0 : Enable or disable interrupt for TRIGGERED[0] event */
#define EGU_INTEN_TRIGGERED0_Pos (0UL) /*!< Position of TRIGGERED0 field. */
#define EGU_INTEN_TRIGGERED0_Msk (0x1UL << EGU_INTEN_TRIGGERED0_Pos) /*!< Bit mask of TRIGGERED0 field. */
#define EGU_INTEN_TRIGGERED0_Disabled (0UL) /*!< Disable */
#define EGU_INTEN_TRIGGERED0_Enabled (1UL) /*!< Enable */

/* Register: EGU_INTENSET */
/* Description: Enable interrupt */

/* Bit 15 : Write '1' to enable interrupt for TRIGGERED[15] event */
#define EGU_INTENSET_TRIGGERED15_Pos (15UL) /*!< Position of TRIGGERED15 field. */
#define EGU_INTENSET_TRIGGERED15_Msk (0x1UL << EGU_INTENSET_TRIGGERED15_Pos) /*!< Bit mask of TRIGGERED15 field. */
#define EGU_INTENSET_TRIGGERED15_Disabled (0UL) /*!< Read: Disabled */
#define EGU_INTENSET_TRIGGERED15_Enabled (1UL) /*!< Read: Enabled */
#define EGU_INTENSET_TRIGGERED15_Set (1UL) /*!< Enable */

/* Bit 14 : Write '1' to enable interrupt for TRIGGERED[14] event */
#define EGU_INTENSET_TRIGGERED14_Pos (14UL) /*!< Position of TRIGGERED14 field. */
#define EGU_INTENSET_TRIGGERED14_Msk (0x1UL << EGU_INTENSET_TRIGGERED14_Pos) /*!< Bit mask of TRIGGERED14 field. */
#define EGU_INTENSET_TRIGGERED14_Disabled (0UL) /*!< Read: Disabled */
#define EGU_INTENSET_TRIGGERED14_Enabled (1UL) /*!< Read: Enabled */
#define EGU_INTENSET_TRIGGERED14_Set (1UL) /*!< Enable */

/* Bit 13 : Write '1' to enable interrupt for TRIGGERED[13] event */
#define EGU_INTENSET_TRIGGERED13_Pos (13UL) /*!< Position of TRIGGERED13 field. */
#define EGU_INTENSET_TRIGGERED13_Msk (0x1UL << EGU_INTENSET_TRIGGERED13_Pos) /*!< Bit mask of TRIGGERED13 field. */
#define EGU_INTENSET_TRIGGERED13_Disabled (0UL) /*!< Read: Disabled */
#define EGU_INTENSET_TRIGGERED13_Enabled (1UL) /*!< Read: Enabled */
#define EGU_INTENSET_TRIGGERED13_Set (1UL) /*!< Enable */

/* Bit 12 : Write '1' to enable interrupt for TRIGGERED[12] event */
#define EGU_INTENSET_TRIGGERED12_Pos (12UL) /*!< Position of TRIGGERED12 field. */
#define EGU_INTENSET_TRIGGERED12_Msk (0x1UL << EGU_INTENSET_TRIGGERED12_Pos) /*!< Bit mask of TRIGGERED12 field. */
#define EGU_INTENSET_TRIGGERED12_Disabled (0UL) /*!< Read: Disabled */
#define EGU_INTENSET_TRIGGERED12_Enabled (1UL) /*!< Read: Enabled */
#define EGU_INTENSET_TRIGGERED12_Set (1UL) /*!< Enable */

/* Bit 11 : Write '1' to enable interrupt for TRIGGERED[11] event */
#define EGU_INTENSET_TRIGGERED11_Pos (11UL) /*!< Position of TRIGGERED11 field. */
#define EGU_INTENSET_TRIGGERED11_Msk (0x1UL << EGU_INTENSET_TRIGGERED11_Pos) /*!< Bit mask of TRIGGERED11 field. */
#define EGU_INTENSET_TRIGGERED11_Disabled (0UL) /*!< Read: Disabled */
#define EGU_INTENSET_TRIGGERED11_Enabled (1UL) /*!< Read: Enabled */
#define EGU_INTENSET_TRIGGERED11_Set (1UL) /*!< Enable */

/* Bit 10 : Write '1' to enable interrupt for TRIGGERED[10] event */
#define EGU_INTENSET_TRIGGERED10_Pos (10UL) /*!< Position of TRIGGERED10 field. */
#define EGU_INTENSET_TRIGGERED10_Msk (0x1UL << EGU_INTENSET_TRIGGERED10_Pos) /*!< Bit mask of TRIGGERED10 field. */
#define EGU_INTENSET_TRIGGERED10_Disabled (0UL) /*!< Read: Disabled */
#define EGU_INTENSET_TRIGGERED10_Enabled (1UL) /*!< Read: Enabled */
#define EGU_INTENSET_TRIGGERED10_Set (1UL) /*!< Enable */

/* Bit 9 : Write '1' to enable interrupt for TRIGGERED[9] event */
#define EGU_INTENSET_TRIGGERED9_Pos (9UL) /*!< Position of TRIGGERED9 field. */
#define EGU_INTENSET_TRIGGERED9_Msk (0x1UL << EGU_INTENSET_TRIGGERED9_Pos) /*!< Bit mask of TRIGGERED9 field. */
#define EGU_INTENSET_TRIGGERED9_Disabled (0UL) /*!< Read: Disabled */
#define EGU_INTENSET_TRIGGERED9_Enabled (1UL) /*!< Read: Enabled */
#define EGU_INTENSET_TRIGGERED9_Set (1UL) /*!< Enable */

/* Bit 8 : Write '1' to enable interrupt for TRIGGERED[8] event */
#define EGU_INTENSET_TRIGGERED8_Pos (8UL) /*!< Position of TRIGGERED8 field. */
#define EGU_INTENSET_TRIGGERED8_Msk (0x1UL << EGU_INTENSET_TRIGGERED8_Pos) /*!< Bit mask of TRIGGERED8 field. */
#define EGU_INTENSET_TRIGGERED8_Disabled (0UL) /*!< Read: Disabled */
#define EGU_INTENSET_TRIGGERED8_Enabled (1UL) /*!< Read: Enabled */
#define EGU_INTENSET_TRIGGERED8_Set (1UL) /*!< Enable */

/* Bit 7 : Write '1' to enable interrupt for TRIGGERED[7] event */
#define EGU_INTENSET_TRIGGERED7_Pos (7UL) /*!< Position of TRIGGERED7 field. */
#define EGU_INTENSET_TRIGGERED7_Msk (0x1UL << EGU_INTENSET_TRIGGERED7_Pos) /*!< Bit mask of TRIGGERED7 field. */
#define EGU_INTENSET_TRIGGERED7_Disabled (0UL) /*!< Read: Disabled */
#define EGU_INTENSET_TRIGGERED7_Enabled (1UL) /*!< Read: Enabled */
#define EGU_INTENSET_TRIGGERED7_Set (1UL) /*!< Enable */

/* Bit 6 : Write '1' to enable interrupt for TRIGGERED[6] event */
#define EGU_INTENSET_TRIGGERED6_Pos (6UL) /*!< Position of TRIGGERED6 field. */
#define EGU_INTENSET_TRIGGERED6_Msk (0x1UL << EGU_INTENSET_TRIGGERED6_Pos) /*!< Bit mask of TRIGGERED6 field. */
#define EGU_INTENSET_TRIGGERED6_Disabled (0UL) /*!< Read: Disabled */
#define EGU_INTENSET_TRIGGERED6_Enabled (1UL) /*!< Read: Enabled */
#define EGU_INTENSET_TRIGGERED6_Set (1UL) /*!< Enable */

/* Bit 5 : Write '1' to enable interrupt for TRIGGERED[5] event */
#define EGU_INTENSET_TRIGGERED5_Pos (5UL) /*!< Position of TRIGGERED5 field. */
#define EGU_INTENSET_TRIGGERED5_Msk (0x1UL << EGU_INTENSET_TRIGGERED5_Pos) /*!< Bit mask of TRIGGERED5 field. */
#define EGU_INTENSET_TRIGGERED5_Disabled (0UL) /*!< Read: Disabled */
#define EGU_INTENSET_TRIGGERED5_Enabled (1UL) /*!< Read: Enabled */
#define EGU_INTENSET_TRIGGERED5_Set (1UL) /*!< Enable */

/* Bit 4 : Write '1' to enable interrupt for TRIGGERED[4] event */
#define EGU_INTENSET_TRIGGERED4_Pos (4UL) /*!< Position of TRIGGERED4 field. */
#define EGU_INTENSET_TRIGGERED4_Msk (0x1UL << EGU_INTENSET_TRIGGERED4_Pos) /*!< Bit mask of TRIGGERED4 field. */
#define EGU_INTENSET_TRIGGERED4_Disabled (0UL) /*!< Read: Disabled */
#define EGU_INTENSET_TRIGGERED4_Enabled (1UL) /*!< Read: Enabled */
#define EGU_INTENSET_TRIGGERED4_Set (1UL) /*!< Enable */

/* Bit 3 : Write '1' to enable interrupt for TRIGGERED[3] event */
#define EGU_INTENSET_TRIGGERED3_Pos (3UL) /*!< Position of TRIGGERED3 field. */
#define EGU_INTENSET_TRIGGERED3_Msk (0x1UL << EGU_INTENSET_TRIGGERED3_Pos) /*!< Bit mask of TRIGGERED3 field. */
#define EGU_INTENSET_TRIGGERED3_Disabled (0UL) /*!< Read: Disabled */
#define EGU_INTENSET_TRIGGERED3_Enabled (1UL) /*!< Read: Enabled */
#define EGU_INTENSET_TRIGGERED3_Set (1UL) /*!< Enable */

/* Bit 2 : Write '1' to enable interrupt for TRIGGERED[2] event */
#define EGU_INTENSET_TRIGGERED2_Pos (2UL) /*!< Position of TRIGGERED2 field. */
#define EGU_INTENSET_TRIGGERED2_Msk (0x1UL << EGU_INTENSET_TRIGGERED2_Pos) /*!< Bit mask of TRIGGERED2 field. */
#define EGU_INTENSET_TRIGGERED2_Disabled (0UL) /*!< Read: Disabled */
#define EGU_INTENSET_TRIGGERED2_Enabled (1UL) /*!< Read: Enabled */
#define EGU_INTENSET_TRIGGERED2_Set (1UL) /*!< Enable */

/* Bit 1 : Write '1' to enable interrupt for TRIGGERED[1] event */
#define EGU_INTENSET_TRIGGERED1_Pos (1UL) /*!< Position of TRIGGERED1 field. */
#define EGU_INTENSET_TRIGGERED1_Msk (0x1UL << EGU_INTENSET_TRIGGERED1_Pos) /*!< Bit mask of TRIGGERED1 field. */
#define EGU_INTENSET_TRIGGERED1_Disabled (0UL) /*!< Read: Disabled */
#define EGU_INTENSET_TRIGGERED1_Enabled (1UL) /*!< Read: Enabled */
#define EGU_INTENSET_TRIGGERED1_Set (1UL) /*!< Enable */

/* Bit 0 : Write '1' to enable interrupt for TRIGGERED[0] event */
#define EGU_INTENSET_TRIGGERED0_Pos (0UL) /*!< Position of TRIGGERED0 field. */
#define EGU_INTENSET_TRIGGERED0_Msk (0x1UL << EGU_INTENSET_TRIGGERED0_Pos) /*!< Bit mask of TRIGGERED0 field. */
#define EGU_INTENSET_TRIGGERED0_Disabled (0UL) /*!< Read: Disabled */
#define EGU_INTENSET_TRIGGERED0_Enabled (1UL) /*!< Read: Enabled */
#define EGU_INTENSET_TRIGGERED0_Set (1UL) /*!< Enable */

/* Register: EGU_INTENCLR */
/* Description: Disable interrupt */

/* Bit 15 : Write '1' to disable interrupt for TRIGGERED[15] event */
#define EGU_INTENCLR_TRIGGERED15_Pos (15UL) /*!< Position of TRIGGERED15 field. */
#define EGU_INTENCLR_TRIGGERED15_Msk (0x1UL << EGU_INTENCLR_TRIGGERED15_Pos) /*!< Bit mask of TRIGGERED15 field. */
#define EGU_INTENCLR_TRIGGERED15_Disabled (0UL) /*!< Read: Disabled */
#define EGU_INTENCLR_TRIGGERED15_Enabled (1UL) /*!< Read: Enabled */
#define EGU_INTENCLR_TRIGGERED15_Clear (1UL) /*!< Disable */

/* Bit 14 : Write '1' to disable interrupt for TRIGGERED[14] event */
#define EGU_INTENCLR_TRIGGERED14_Pos (14UL) /*!< Position of TRIGGERED14 field. */
#define EGU_INTENCLR_TRIGGERED14_Msk (0x1UL << EGU_INTENCLR_TRIGGERED14_Pos) /*!< Bit mask of TRIGGERED14 field. */
#define EGU_INTENCLR_TRIGGERED14_Disabled (0UL) /*!< Read: Disabled */
#define EGU_INTENCLR_TRIGGERED14_Enabled (1UL) /*!< Read: Enabled */
#define EGU_INTENCLR_TRIGGERED14_Clear (1UL) /*!< Disable */

/* Bit 13 : Write '1' to disable interrupt for TRIGGERED[13] event */
#define EGU_INTENCLR_TRIGGERED13_Pos (13UL) /*!< Position of TRIGGERED13 field. */
#define EGU_INTENCLR_TRIGGERED13_Msk (0x1UL << EGU_INTENCLR_TRIGGERED13_Pos) /*!< Bit mask of TRIGGERED13 field. */
#define EGU_INTENCLR_TRIGGERED13_Disabled (0UL) /*!< Read: Disabled */
#define EGU_INTENCLR_TRIGGERED13_Enabled (1UL) /*!< Read: Enabled */
#define EGU_INTENCLR_TRIGGERED13_Clear (1UL) /*!< Disable */

/* Bit 12 : Write '1' to disable interrupt for TRIGGERED[12] event */
#define EGU_INTENCLR_TRIGGERED12_Pos (12UL) /*!< Position of TRIGGERED12 field. */
#define EGU_INTENCLR_TRIGGERED12_Msk (0x1UL << EGU_INTENCLR_TRIGGERED12_Pos) /*!< Bit mask of TRIGGERED12 field. */
#define EGU_INTENCLR_TRIGGERED12_Disabled (0UL) /*!< Read: Disabled */
#define EGU_INTENCLR_TRIGGERED12_Enabled (1UL) /*!< Read: Enabled */
#define EGU_INTENCLR_TRIGGERED12_Clear (1UL) /*!< Disable */

/* Bit 11 : Write '1' to disable interrupt for TRIGGERED[11] event */
#define EGU_INTENCLR_TRIGGERED11_Pos (11UL) /*!< Position of TRIGGERED11 field. */
#define EGU_INTENCLR_TRIGGERED11_Msk (0x1UL << EGU_INTENCLR_TRIGGERED11_Pos) /*!< Bit mask of TRIGGERED11 field. */
#define EGU_INTENCLR_TRIGGERED11_Disabled (0UL) /*!< Read: Disabled */
#define EGU_INTENCLR_TRIGGERED11_Enabled (1UL) /*!< Read: Enabled */
#define EGU_INTENCLR_TRIGGERED11_Clear (1UL) /*!< Disable */

/* Bit 10 : Write '1' to disable interrupt for TRIGGERED[10] event */
#define EGU_INTENCLR_TRIGGERED10_Pos (10UL) /*!< Position of TRIGGERED10 field. */
#define EGU_INTENCLR_TRIGGERED10_Msk (0x1UL << EGU_INTENCLR_TRIGGERED10_Pos) /*!< Bit mask of TRIGGERED10 field. */
#define EGU_INTENCLR_TRIGGERED10_Disabled (0UL) /*!< Read: Disabled */
#define EGU_INTENCLR_TRIGGERED10_Enabled (1UL) /*!< Read: Enabled */
#define EGU_INTENCLR_TRIGGERED10_Clear (1UL) /*!< Disable */

/* Bit 9 : Write '1' to disable interrupt for TRIGGERED[9] event */
#define EGU_INTENCLR_TRIGGERED9_Pos (9UL) /*!< Position of TRIGGERED9 field. */
#define EGU_INTENCLR_TRIGGERED9_Msk (0x1UL << EGU_INTENCLR_TRIGGERED9_Pos) /*!< Bit mask of TRIGGERED9 field. */
#define EGU_INTENCLR_TRIGGERED9_Disabled (0UL) /*!< Read: Disabled */
#define EGU_INTENCLR_TRIGGERED9_Enabled (1UL) /*!< Read: Enabled */
#define EGU_INTENCLR_TRIGGERED9_Clear (1UL) /*!< Disable */

/* Bit 8 : Write '1' to disable interrupt for TRIGGERED[8] event */
#define EGU_INTENCLR_TRIGGERED8_Pos (8UL) /*!< Position of TRIGGERED8 field. */
#define EGU_INTENCLR_TRIGGERED8_Msk (0x1UL << EGU_INTENCLR_TRIGGERED8_Pos) /*!< Bit mask of TRIGGERED8 field. */
#define EGU_INTENCLR_TRIGGERED8_Disabled (0UL) /*!< Read: Disabled */
#define EGU_INTENCLR_TRIGGERED8_Enabled (1UL) /*!< Read: Enabled */
#define EGU_INTENCLR_TRIGGERED8_Clear (1UL) /*!< Disable */

/* Bit 7 : Write '1' to disable interrupt for TRIGGERED[7] event */
#define EGU_INTENCLR_TRIGGERED7_Pos (7UL) /*!< Position of TRIGGERED7 field. */
#define EGU_INTENCLR_TRIGGERED7_Msk (0x1UL << EGU_INTENCLR_TRIGGERED7_Pos) /*!< Bit mask of TRIGGERED7 field. */
#define EGU_INTENCLR_TRIGGERED7_Disabled (0UL) /*!< Read: Disabled */
#define EGU_INTENCLR_TRIGGERED7_Enabled (1UL) /*!< Read: Enabled */
#define EGU_INTENCLR_TRIGGERED7_Clear (1UL) /*!< Disable */

/* Bit 6 : Write '1' to disable interrupt for TRIGGERED[6] event */
#define EGU_INTENCLR_TRIGGERED6_Pos (6UL) /*!< Position of TRIGGERED6 field. */
#define EGU_INTENCLR_TRIGGERED6_Msk (0x1UL << EGU_INTENCLR_TRIGGERED6_Pos) /*!< Bit mask of TRIGGERED6 field. */
#define EGU_INTENCLR_TRIGGERED6_Disabled (0UL) /*!< Read: Disabled */
#define EGU_INTENCLR_TRIGGERED6_Enabled (1UL) /*!< Read: Enabled */
#define EGU_INTENCLR_TRIGGERED6_Clear (1UL) /*!< Disable */

/* Bit 5 : Write '1' to disable interrupt for TRIGGERED[5] event */
#define EGU_INTENCLR_TRIGGERED5_Pos (5UL) /*!< Position of TRIGGERED5 field. */
#define EGU_INTENCLR_TRIGGERED5_Msk (0x1UL << EGU_INTENCLR_TRIGGERED5_Pos) /*!< Bit mask of TRIGGERED5 field. */
#define EGU_INTENCLR_TRIGGERED5_Disabled (0UL) /*!< Read: Disabled */
#define EGU_INTENCLR_TRIGGERED5_Enabled (1UL) /*!< Read: Enabled */
#define EGU_INTENCLR_TRIGGERED5_Clear (1UL) /*!< Disable */

/* Bit 4 : Write '1' to disable interrupt for TRIGGERED[4] event */
#define EGU_INTENCLR_TRIGGERED4_Pos (4UL) /*!< Position of TRIGGERED4 field. */
#define EGU_INTENCLR_TRIGGERED4_Msk (0x1UL << EGU_INTENCLR_TRIGGERED4_Pos) /*!< Bit mask of TRIGGERED4 field. */
#define EGU_INTENCLR_TRIGGERED4_Disabled (0UL) /*!< Read: Disabled */
#define EGU_INTENCLR_TRIGGERED4_Enabled (1UL) /*!< Read: Enabled */
#define EGU_INTENCLR_TRIGGERED4_Clear (1UL) /*!< Disable */

/* Bit 3 : Write '1' to disable interrupt for TRIGGERED[3] event */
#define EGU_INTENCLR_TRIGGERED3_Pos (3UL) /*!< Position of TRIGGERED3 field. */
#define EGU_INTENCLR_TRIGGERED3_Msk (0x1UL << EGU_INTENCLR_TRIGGERED3_Pos) /*!< Bit mask of TRIGGERED3 field. */
#define EGU_INTENCLR_TRIGGERED3_Disabled (0UL) /*!< Read: Disabled */
#define EGU_INTENCLR_TRIGGERED3_Enabled (1UL) /*!< Read: Enabled */
#define EGU_INTENCLR_TRIGGERED3_Clear (1UL) /*!< Disable */

/* Bit 2 : Write '1' to disable interrupt for TRIGGERED[2] event */
#define EGU_INTENCLR_TRIGGERED2_Pos (2UL) /*!< Position of TRIGGERED2 field. */
#define EGU_INTENCLR_TRIGGERED2_Msk (0x1UL << EGU_INTENCLR_TRIGGERED2_Pos) /*!< Bit mask of TRIGGERED2 field. */
#define EGU_INTENCLR_TRIGGERED2_Disabled (0UL) /*!< Read: Disabled */
#define EGU_INTENCLR_TRIGGERED2_Enabled (1UL) /*!< Read: Enabled */
#define EGU_INTENCLR_TRIGGERED2_Clear (1UL) /*!< Disable */

/* Bit 1 : Write '1' to disable interrupt for TRIGGERED[1] event */
#define EGU_INTENCLR_TRIGGERED1_Pos (1UL) /*!< Position of TRIGGERED1 field. */
#define EGU_INTENCLR_TRIGGERED1_Msk (0x1UL << EGU_INTENCLR_TRIGGERED1_Pos) /*!< Bit mask of TRIGGERED1 field. */
#define EGU_INTENCLR_TRIGGERED1_Disabled (0UL) /*!< Read: Disabled */
#define EGU_INTENCLR_TRIGGERED1_Enabled (1UL) /*!< Read: Enabled */
#define EGU_INTENCLR_TRIGGERED1_Clear (1UL) /*!< Disable */

/* Bit 0 : Write '1' to disable interrupt for TRIGGERED[0] event */
#define EGU_INTENCLR_TRIGGERED0_Pos (0UL) /*!< Position of TRIGGERED0 field. */
#define EGU_INTENCLR_TRIGGERED0_Msk (0x1UL << EGU_INTENCLR_TRIGGERED0_Pos) /*!< Bit mask of TRIGGERED0 field. */
#define EGU_INTENCLR_TRIGGERED0_Disabled (0UL) /*!< Read: Disabled */
#define EGU_INTENCLR_TRIGGERED0_Enabled (1UL) /*!< Read: Enabled */
#define EGU_INTENCLR_TRIGGERED0_Clear (1UL) /*!< Disable */


/* Peripheral: FICR */
/* Description: Factory information configuration registers */

/* Register: FICR_CPTEST0 */
/* Description: Result from circuit probe test */

/* Bits 31..0 : Result from circuit probe test */
#define FICR_CPTEST0_CP1_Pos (0UL) /*!< Position of CP1 field. */
#define FICR_CPTEST0_CP1_Msk (0xFFFFFFFFUL << FICR_CPTEST0_CP1_Pos) /*!< Bit mask of CP1 field. */

/* Register: FICR_CPTEST00 */
/* Description: Result from circuit probe test */

/* Bits 31..0 : Result from circuit probe test */
#define FICR_CPTEST00_CP2_Pos (0UL) /*!< Position of CP2 field. */
#define FICR_CPTEST00_CP2_Msk (0xFFFFFFFFUL << FICR_CPTEST00_CP2_Pos) /*!< Bit mask of CP2 field. */

/* Register: FICR_CODEPAGESIZE */
/* Description: Code memory page size */

/* Bits 31..0 : Code memory page size */
#define FICR_CODEPAGESIZE_CODEPAGESIZE_Pos (0UL) /*!< Position of CODEPAGESIZE field. */
#define FICR_CODEPAGESIZE_CODEPAGESIZE_Msk (0xFFFFFFFFUL << FICR_CODEPAGESIZE_CODEPAGESIZE_Pos) /*!< Bit mask of CODEPAGESIZE field. */

/* Register: FICR_CODESIZE */
/* Description: Code memory size */

/* Bits 31..0 : Code memory size in number of pages */
#define FICR_CODESIZE_CODESIZE_Pos (0UL) /*!< Position of CODESIZE field. */
#define FICR_CODESIZE_CODESIZE_Msk (0xFFFFFFFFUL << FICR_CODESIZE_CODESIZE_Pos) /*!< Bit mask of CODESIZE field. */

/* Register: FICR_RBD */
/* Description: Royalty bearing device */

/* Bits 31..0 : Royalty bearing device or not */
#define FICR_RBD_RBD_Pos (0UL) /*!< Position of RBD field. */
#define FICR_RBD_RBD_Msk (0xFFFFFFFFUL << FICR_RBD_RBD_Pos) /*!< Bit mask of RBD field. */
#define FICR_RBD_RBD_NoRoyalty (0xFFFFFFFEUL) /*!< Device is not bearing a royalty */
#define FICR_RBD_RBD_Royalty (0xFFFFFFFFUL) /*!< Device is bearing a royalty */

/* Register: FICR_TESTSTATUS */
/* Description: Code memory test status. Will be set during production test. */

/* Bits 31..0 : Code memory test status. Will be set during production test. */
#define FICR_TESTSTATUS_TESTSTATUS_Pos (0UL) /*!< Position of TESTSTATUS field. */
#define FICR_TESTSTATUS_TESTSTATUS_Msk (0xFFFFFFFFUL << FICR_TESTSTATUS_TESTSTATUS_Pos) /*!< Bit mask of TESTSTATUS field. */

/* Register: FICR_DEVICETYPE */
/* Description: Device type */

/* Bits 31..0 : Device type */
#define FICR_DEVICETYPE_DEVICETYPE_Pos (0UL) /*!< Position of DEVICETYPE field. */
#define FICR_DEVICETYPE_DEVICETYPE_Msk (0xFFFFFFFFUL << FICR_DEVICETYPE_DEVICETYPE_Pos) /*!< Bit mask of DEVICETYPE field. */
#define FICR_DEVICETYPE_DEVICETYPE_Die (0x0000000UL) /*!< Device is a physical DIE */
#define FICR_DEVICETYPE_DEVICETYPE_FPGA (0xFFFFFFFFUL) /*!< Device is an FPGA */

/* Register: FICR_CONFIGID */
/* Description: Configuration identifier */

/* Bits 31..16 : Deprecated field -  Identification number for the FW that is pre-loaded into the chip */
#define FICR_CONFIGID_FWID_Pos (16UL) /*!< Position of FWID field. */
#define FICR_CONFIGID_FWID_Msk (0xFFFFUL << FICR_CONFIGID_FWID_Pos) /*!< Bit mask of FWID field. */

/* Bits 15..0 : Nordic proprietary. Subject to change without notice. */
#define FICR_CONFIGID_HWID_Pos (0UL) /*!< Position of HWID field. */
#define FICR_CONFIGID_HWID_Msk (0xFFFFUL << FICR_CONFIGID_HWID_Pos) /*!< Bit mask of HWID field. */

/* Register: FICR_DEVICEID */
/* Description: Description collection[n]: Device identifier */

/* Bits 31..0 : 64 bit unique device identifier */
#define FICR_DEVICEID_DEVICEID_Pos (0UL) /*!< Position of DEVICEID field. */
#define FICR_DEVICEID_DEVICEID_Msk (0xFFFFFFFFUL << FICR_DEVICEID_DEVICEID_Pos) /*!< Bit mask of DEVICEID field. */

/* Register: FICR_CPTEST1 */
/* Description: Result from circuit probe test */

/* Bits 31..24 : 4th ascii byte of lot ID character */
#define FICR_CPTEST1_LOTID4_Pos (24UL) /*!< Position of LOTID4 field. */
#define FICR_CPTEST1_LOTID4_Msk (0xFFUL << FICR_CPTEST1_LOTID4_Pos) /*!< Bit mask of LOTID4 field. */

/* Bits 23..16 : 3rd ascii byte of lot ID character */
#define FICR_CPTEST1_LOTID3_Pos (16UL) /*!< Position of LOTID3 field. */
#define FICR_CPTEST1_LOTID3_Msk (0xFFUL << FICR_CPTEST1_LOTID3_Pos) /*!< Bit mask of LOTID3 field. */

/* Bits 15..8 : 2nd ascii byte of lot ID character */
#define FICR_CPTEST1_LOTID2_Pos (8UL) /*!< Position of LOTID2 field. */
#define FICR_CPTEST1_LOTID2_Msk (0xFFUL << FICR_CPTEST1_LOTID2_Pos) /*!< Bit mask of LOTID2 field. */

/* Bits 7..0 : 1st ascii byte of lot ID character */
#define FICR_CPTEST1_LOTID1_Pos (0UL) /*!< Position of LOTID1 field. */
#define FICR_CPTEST1_LOTID1_Msk (0xFFUL << FICR_CPTEST1_LOTID1_Pos) /*!< Bit mask of LOTID1 field. */

/* Register: FICR_CPTEST2 */
/* Description: Result from circuit probe test */

/* Bits 31..24 : Device X-coordinate, always &gt;=0, offset so that the leftmost value on wafer is 0 */
#define FICR_CPTEST2_XCOORD_Pos (24UL) /*!< Position of XCOORD field. */
#define FICR_CPTEST2_XCOORD_Msk (0xFFUL << FICR_CPTEST2_XCOORD_Pos) /*!< Bit mask of XCOORD field. */

/* Bits 23..16 : Wafer number, 1 byte integer */
#define FICR_CPTEST2_WAFER_Pos (16UL) /*!< Position of WAFER field. */
#define FICR_CPTEST2_WAFER_Msk (0xFFUL << FICR_CPTEST2_WAFER_Pos) /*!< Bit mask of WAFER field. */

/* Bits 15..8 : 6th ascii byte of lot ID character */
#define FICR_CPTEST2_LOTID6_Pos (8UL) /*!< Position of LOTID6 field. */
#define FICR_CPTEST2_LOTID6_Msk (0xFFUL << FICR_CPTEST2_LOTID6_Pos) /*!< Bit mask of LOTID6 field. */

/* Bits 7..0 : 5th ascii byte of lot ID character */
#define FICR_CPTEST2_LOTID5_Pos (0UL) /*!< Position of LOTID5 field. */
#define FICR_CPTEST2_LOTID5_Msk (0xFFUL << FICR_CPTEST2_LOTID5_Pos) /*!< Bit mask of LOTID5 field. */

/* Register: FICR_CPTEST3 */
/* Description: Result from circuit probe test */

/* Bits 31..24 : Data retention (DR) flag */
#define FICR_CPTEST3_DR3_Pos (24UL) /*!< Position of DR3 field. */
#define FICR_CPTEST3_DR3_Msk (0xFFUL << FICR_CPTEST3_DR3_Pos) /*!< Bit mask of DR3 field. */

/* Bits 23..16 : Data retention (DR) flag */
#define FICR_CPTEST3_DR2_Pos (16UL) /*!< Position of DR2 field. */
#define FICR_CPTEST3_DR2_Msk (0xFFUL << FICR_CPTEST3_DR2_Pos) /*!< Bit mask of DR2 field. */

/* Bits 15..8 : Data retention (DR) flag */
#define FICR_CPTEST3_DR1_Pos (8UL) /*!< Position of DR1 field. */
#define FICR_CPTEST3_DR1_Msk (0xFFUL << FICR_CPTEST3_DR1_Pos) /*!< Bit mask of DR1 field. */

/* Bits 7..0 : Device Y-coordinate, always &gt;=0, offset so that the bottom value on wafer is 0 */
#define FICR_CPTEST3_YCOORD_Pos (0UL) /*!< Position of YCOORD field. */
#define FICR_CPTEST3_YCOORD_Msk (0xFFUL << FICR_CPTEST3_YCOORD_Pos) /*!< Bit mask of YCOORD field. */

/* Register: FICR_CPTEST4 */
/* Description: Result from circuit probe test */

/* Bits 7..0 : Data retention (DR) flag */
#define FICR_CPTEST4_DR4_Pos (0UL) /*!< Position of DR4 field. */
#define FICR_CPTEST4_DR4_Msk (0xFFUL << FICR_CPTEST4_DR4_Pos) /*!< Bit mask of DR4 field. */

/* Register: FICR_ER */
/* Description: Description collection[n]: Encryption root, word n */

/* Bits 31..0 : Encryption root, word n */
#define FICR_ER_ER_Pos (0UL) /*!< Position of ER field. */
#define FICR_ER_ER_Msk (0xFFFFFFFFUL << FICR_ER_ER_Pos) /*!< Bit mask of ER field. */

/* Register: FICR_IR */
/* Description: Description collection[n]: Identity root, word n */

/* Bits 31..0 : Identity root, word n */
#define FICR_IR_IR_Pos (0UL) /*!< Position of IR field. */
#define FICR_IR_IR_Msk (0xFFFFFFFFUL << FICR_IR_IR_Pos) /*!< Bit mask of IR field. */

/* Register: FICR_DEVICEADDRTYPE */
/* Description: Device address type */

/* Bit 0 : Device address type */
#define FICR_DEVICEADDRTYPE_DEVICEADDRTYPE_Pos (0UL) /*!< Position of DEVICEADDRTYPE field. */
#define FICR_DEVICEADDRTYPE_DEVICEADDRTYPE_Msk (0x1UL << FICR_DEVICEADDRTYPE_DEVICEADDRTYPE_Pos) /*!< Bit mask of DEVICEADDRTYPE field. */
#define FICR_DEVICEADDRTYPE_DEVICEADDRTYPE_Public (0UL) /*!< Public address */
#define FICR_DEVICEADDRTYPE_DEVICEADDRTYPE_Random (1UL) /*!< Random address */

/* Register: FICR_DEVICEADDR */
/* Description: Description collection[n]: Device address n */

/* Bits 31..0 : 48 bit device address */
#define FICR_DEVICEADDR_DEVICEADDR_Pos (0UL) /*!< Position of DEVICEADDR field. */
#define FICR_DEVICEADDR_DEVICEADDR_Msk (0xFFFFFFFFUL << FICR_DEVICEADDR_DEVICEADDR_Pos) /*!< Bit mask of DEVICEADDR field. */

/* Register: FICR_INFO_PART */
/* Description: Part code */

/* Bits 31..0 : Part code */
#define FICR_INFO_PART_PART_Pos (0UL) /*!< Position of PART field. */
#define FICR_INFO_PART_PART_Msk (0xFFFFFFFFUL << FICR_INFO_PART_PART_Pos) /*!< Bit mask of PART field. */
#define FICR_INFO_PART_PART_N52810 (0x52810UL) /*!< nRF52810 */
#define FICR_INFO_PART_PART_N52832 (0x52832UL) /*!< nRF52832 */
#define FICR_INFO_PART_PART_Unspecified (0xFFFFFFFFUL) /*!< Unspecified */

/* Register: FICR_INFO_VARIANT */
/* Description: Part variant, hardware version and production configuration */

/* Bits 31..0 : Part variant, hardware version and production configuration, encoded as ASCII */
#define FICR_INFO_VARIANT_VARIANT_Pos (0UL) /*!< Position of VARIANT field. */
#define FICR_INFO_VARIANT_VARIANT_Msk (0xFFFFFFFFUL << FICR_INFO_VARIANT_VARIANT_Pos) /*!< Bit mask of VARIANT field. */
#define FICR_INFO_VARIANT_VARIANT_AAA0 (0x41414130UL) /*!< AAA0 */
#define FICR_INFO_VARIANT_VARIANT_AAAA (0x41414141UL) /*!< AAAA */
#define FICR_INFO_VARIANT_VARIANT_AAB0 (0x41414230UL) /*!< AAB0 */
#define FICR_INFO_VARIANT_VARIANT_AABA (0x41414241UL) /*!< AABA */
#define FICR_INFO_VARIANT_VARIANT_AABB (0x41414242UL) /*!< AABB */
#define FICR_INFO_VARIANT_VARIANT_AAC0 (0x41414330UL) /*!< AAC0 */
#define FICR_INFO_VARIANT_VARIANT_AACA (0x41414341UL) /*!< AACA */
#define FICR_INFO_VARIANT_VARIANT_AACB (0x41414342UL) /*!< AACB */
#define FICR_INFO_VARIANT_VARIANT_Unspecified (0xFFFFFFFFUL) /*!< Unspecified */

/* Register: FICR_INFO_PACKAGE */
/* Description: Package option */

/* Bits 31..0 : Package option */
#define FICR_INFO_PACKAGE_PACKAGE_Pos (0UL) /*!< Position of PACKAGE field. */
#define FICR_INFO_PACKAGE_PACKAGE_Msk (0xFFFFFFFFUL << FICR_INFO_PACKAGE_PACKAGE_Pos) /*!< Bit mask of PACKAGE field. */
#define FICR_INFO_PACKAGE_PACKAGE_QF (0x2000UL) /*!< QFxx - 48-pin QFN */
#define FICR_INFO_PACKAGE_PACKAGE_CH (0x2001UL) /*!< CHxx - 7x8 WLCSP 56 balls */
#define FICR_INFO_PACKAGE_PACKAGE_CI (0x2002UL) /*!< CIxx - 7x8 WLCSP 56 balls */
#define FICR_INFO_PACKAGE_PACKAGE_QC (0x2003UL) /*!< QCxx - 32-pin QFN */
#define FICR_INFO_PACKAGE_PACKAGE_Unspecified (0xFFFFFFFFUL) /*!< Unspecified */

/* Register: FICR_INFO_RAM */
/* Description: RAM variant */

/* Bits 31..0 : RAM variant */
#define FICR_INFO_RAM_RAM_Pos (0UL) /*!< Position of RAM field. */
#define FICR_INFO_RAM_RAM_Msk (0xFFFFFFFFUL << FICR_INFO_RAM_RAM_Pos) /*!< Bit mask of RAM field. */
#define FICR_INFO_RAM_RAM_K16 (0x10UL) /*!< 16 kByte RAM */
#define FICR_INFO_RAM_RAM_K24 (0x18UL) /*!< 24 kByte RAM */
#define FICR_INFO_RAM_RAM_K32 (0x20UL) /*!< 32 kByte RAM */
#define FICR_INFO_RAM_RAM_K64 (0x40UL) /*!< 64 kByte RAM */
#define FICR_INFO_RAM_RAM_Unspecified (0xFFFFFFFFUL) /*!< Unspecified */

/* Register: FICR_INFO_FLASH */
/* Description: Flash variant */

/* Bits 31..0 : Flash variant */
#define FICR_INFO_FLASH_FLASH_Pos (0UL) /*!< Position of FLASH field. */
#define FICR_INFO_FLASH_FLASH_Msk (0xFFFFFFFFUL << FICR_INFO_FLASH_FLASH_Pos) /*!< Bit mask of FLASH field. */
#define FICR_INFO_FLASH_FLASH_K128 (0x80UL) /*!< 128 kByte flash */
#define FICR_INFO_FLASH_FLASH_K192 (0xC0UL) /*!< 192 kByte flash */
#define FICR_INFO_FLASH_FLASH_K256 (0x100UL) /*!< 256 kByte flash */
#define FICR_INFO_FLASH_FLASH_K512 (0x200UL) /*!< 512 kByte flash */
#define FICR_INFO_FLASH_FLASH_Unspecified (0xFFFFFFFFUL) /*!< Unspecified */

/* Register: FICR_OTP */
/* Description: Description collection[n]: One-time programmable register n */

/* Bits 31..0 : One-time programmable register */
#define FICR_OTP_OTP_Pos (0UL) /*!< Position of OTP field. */
#define FICR_OTP_OTP_Msk (0xFFFFFFFFUL << FICR_OTP_OTP_Pos) /*!< Bit mask of OTP field. */

/* Register: FICR_CPTEST5 */
/* Description: Result from circuit probe test, flash repair information */

/* Bits 31..0 : Flash repair information */
#define FICR_CPTEST5_CPTEST5_Pos (0UL) /*!< Position of CPTEST5 field. */
#define FICR_CPTEST5_CPTEST5_Msk (0xFFFFFFFFUL << FICR_CPTEST5_CPTEST5_Pos) /*!< Bit mask of CPTEST5 field. */

/* Register: FICR_CPTEST6 */
/* Description: Result from circuit probe test, flash repair information */

/* Bits 31..0 : Flash repair information */
#define FICR_CPTEST6_CPTEST6_Pos (0UL) /*!< Position of CPTEST6 field. */
#define FICR_CPTEST6_CPTEST6_Msk (0xFFFFFFFFUL << FICR_CPTEST6_CPTEST6_Pos) /*!< Bit mask of CPTEST6 field. */

/* Register: FICR_CPTEST7 */
/* Description: Result from circuit probe test, flash repair information */

/* Bits 31..0 : Flash repair information */
#define FICR_CPTEST7_CPTEST7_Pos (0UL) /*!< Position of CPTEST7 field. */
#define FICR_CPTEST7_CPTEST7_Msk (0xFFFFFFFFUL << FICR_CPTEST7_CPTEST7_Pos) /*!< Bit mask of CPTEST7 field. */

/* Register: FICR_CPTEST8 */
/* Description: Result from circuit probe test, flash repair information */

/* Bits 31..0 : Flash repair information */
#define FICR_CPTEST8_CPTEST8_Pos (0UL) /*!< Position of CPTEST8 field. */
#define FICR_CPTEST8_CPTEST8_Msk (0xFFFFFFFFUL << FICR_CPTEST8_CPTEST8_Pos) /*!< Bit mask of CPTEST8 field. */

/* Register: FICR_CHIPCONF00 */
/* Description: Miscellaneous analog configuration. Will be set during production test. */

/* Bits 31..28 : Radio current reference trim code (default value for RADIO-&gt;PB_TEST.PBIBPSTRIM) */
#define FICR_CHIPCONF00_RADIOCURTRIM_Pos (28UL) /*!< Position of RADIOCURTRIM field. */
#define FICR_CHIPCONF00_RADIOCURTRIM_Msk (0xFUL << FICR_CHIPCONF00_RADIOCURTRIM_Pos) /*!< Bit mask of RADIOCURTRIM field. */

/* Bits 26..24 : Radio bandgap reference trim code, used in FS_VCOREG regulator (default value for RADIO-&gt;PB_TEST.VBGTRIM) */
#define FICR_CHIPCONF00_RADIOBGTRIM_Pos (24UL) /*!< Position of RADIOBGTRIM field. */
#define FICR_CHIPCONF00_RADIOBGTRIM_Msk (0x7UL << FICR_CHIPCONF00_RADIOBGTRIM_Pos) /*!< Bit mask of RADIOBGTRIM field. */

/* Bits 22..19 : Bandgap reference trim code */
#define FICR_CHIPCONF00_BGREF_Pos (19UL) /*!< Position of BGREF field. */
#define FICR_CHIPCONF00_BGREF_Msk (0xFUL << FICR_CHIPCONF00_BGREF_Pos) /*!< Bit mask of BGREF field. */

/* Bits 18..13 : 32.768 kHz RC-oscillator trim code */
#define FICR_CHIPCONF00_RC32KITRIM_Pos (13UL) /*!< Position of RC32KITRIM field. */
#define FICR_CHIPCONF00_RC32KITRIM_Msk (0x3FUL << FICR_CHIPCONF00_RC32KITRIM_Pos) /*!< Bit mask of RC32KITRIM field. */

/* Bits 11..7 : HFCLK ring oscillator trim codes. Previous name: HFROSCTRIM. */
#define FICR_CHIPCONF00_PLL_CALIB_ROSC_Pos (7UL) /*!< Position of PLL_CALIB_ROSC field. */
#define FICR_CHIPCONF00_PLL_CALIB_ROSC_Msk (0x1FUL << FICR_CHIPCONF00_PLL_CALIB_ROSC_Pos) /*!< Bit mask of PLL_CALIB_ROSC field. */

/* Bit 3 : ULV (ultra low voltage) mode settings */
#define FICR_CHIPCONF00_ENULV_Pos (3UL) /*!< Position of ENULV field. */
#define FICR_CHIPCONF00_ENULV_Msk (0x1UL << FICR_CHIPCONF00_ENULV_Pos) /*!< Bit mask of ENULV field. */
#define FICR_CHIPCONF00_ENULV_0V75 (0UL) /*!< DVDD_0V9=0.75 V */
#define FICR_CHIPCONF00_ENULV_1V0 (1UL) /*!< DVDD_0V9=1.0 V */

/* Bit 2 : Enable clock gate in clock purifier. Should always be 1. */
#define FICR_CHIPCONF00_CKPUREEN_Pos (2UL) /*!< Position of CKPUREEN field. */
#define FICR_CHIPCONF00_CKPUREEN_Msk (0x1UL << FICR_CHIPCONF00_CKPUREEN_Pos) /*!< Bit mask of CKPUREEN field. */

/* Register: FICR_CHIPCONF01 */
/* Description: Miscellaneous analog configuration. Will be set during production test. */

/* Bits 31..22 : TEMP module calibration value (default value for TEMP-&gt;CALIB) */
#define FICR_CHIPCONF01_TEMPCALIB_Pos (22UL) /*!< Position of TEMPCALIB field. */
#define FICR_CHIPCONF01_TEMPCALIB_Msk (0x3FFUL << FICR_CHIPCONF01_TEMPCALIB_Pos) /*!< Bit mask of TEMPCALIB field. */

/* Bits 21..17 : bit [4:0] of DC/DC converter output level. V(out) = 1.14 V + 0.01 * DCDCOUTP. */
#define FICR_CHIPCONF01_DCDCOUTP_Pos (17UL) /*!< Position of DCDCOUTP field. */
#define FICR_CHIPCONF01_DCDCOUTP_Msk (0x1FUL << FICR_CHIPCONF01_DCDCOUTP_Pos) /*!< Bit mask of DCDCOUTP field. */

/* Bits 15..13 : 32kHz RC oscillator calibration length in number of cycles (default value for CLOCK-&gt;RCOSC32KICALLENGTH) */
#define FICR_CHIPCONF01_RCOSC32KICALLENGTH_Pos (13UL) /*!< Position of RCOSC32KICALLENGTH field. */
#define FICR_CHIPCONF01_RCOSC32KICALLENGTH_Msk (0x7UL << FICR_CHIPCONF01_RCOSC32KICALLENGTH_Pos) /*!< Bit mask of RCOSC32KICALLENGTH field. */
#define FICR_CHIPCONF01_RCOSC32KICALLENGTH_N64 (0UL) /*!< 64 cycles */
#define FICR_CHIPCONF01_RCOSC32KICALLENGTH_N128 (1UL) /*!< 128 cycles */
#define FICR_CHIPCONF01_RCOSC32KICALLENGTH_N256 (2UL) /*!< 256 cycles */
#define FICR_CHIPCONF01_RCOSC32KICALLENGTH_N512 (3UL) /*!< 512 cycles */

/* Bit 12 : Enable wait on ready upon accessing SRAM when turned on */
#define FICR_CHIPCONF01_SRAMWAITEN_Pos (12UL) /*!< Position of SRAMWAITEN field. */
#define FICR_CHIPCONF01_SRAMWAITEN_Msk (0x1UL << FICR_CHIPCONF01_SRAMWAITEN_Pos) /*!< Bit mask of SRAMWAITEN field. */

/* Bit 11 : Enable low power BOR. Active low. */
#define FICR_CHIPCONF01_LPBOR_N_Pos (11UL) /*!< Position of LPBOR_N field. */
#define FICR_CHIPCONF01_LPBOR_N_Msk (0x1UL << FICR_CHIPCONF01_LPBOR_N_Pos) /*!< Bit mask of LPBOR_N field. */

/* Bit 8 : Enable bypass mode for VREG0V9 (DVDD_0V9 connected to AVDD_1V3) */
#define FICR_CHIPCONF01_VREG0V9BYPASS_Pos (8UL) /*!< Position of VREG0V9BYPASS field. */
#define FICR_CHIPCONF01_VREG0V9BYPASS_Msk (0x1UL << FICR_CHIPCONF01_VREG0V9BYPASS_Pos) /*!< Bit mask of VREG0V9BYPASS field. */

/* Bits 7..4 : Calibrate VREG0V9 for refresh mode (VREG0V9_PROG_0V9). Typical voltage = 0.775 V + codeValue * 0.025 V. */
#define FICR_CHIPCONF01_VREG0V9REFRCAL_Pos (4UL) /*!< Position of VREG0V9REFRCAL field. */
#define FICR_CHIPCONF01_VREG0V9REFRCAL_Msk (0xFUL << FICR_CHIPCONF01_VREG0V9REFRCAL_Pos) /*!< Bit mask of VREG0V9REFRCAL field. */

/* Bits 3..0 : Calibrate VREG0V9 for normal mode (VREG0V9_PROG_0V9). Typical voltage = 0.775 V + codeValue * 0.025 V. */
#define FICR_CHIPCONF01_VREG0V9NORMCAL_Pos (0UL) /*!< Position of VREG0V9NORMCAL field. */
#define FICR_CHIPCONF01_VREG0V9NORMCAL_Msk (0xFUL << FICR_CHIPCONF01_VREG0V9NORMCAL_Pos) /*!< Bit mask of VREG0V9NORMCAL field. */

/* Register: FICR_CHIPCONF02 */
/* Description: Miscellaneous analog configuration. Will be set during production test. */

/* Bits 31..28 : Wait-states for I-Code flash access (HFCLOCK = 96 MHz). D-Code has one more wait-state. */
#define FICR_CHIPCONF02_WS96MHz_Pos (28UL) /*!< Position of WS96MHz field. */
#define FICR_CHIPCONF02_WS96MHz_Msk (0xFUL << FICR_CHIPCONF02_WS96MHz_Pos) /*!< Bit mask of WS96MHz field. */
#define FICR_CHIPCONF02_WS96MHz_1WS (1UL) /*!< 1 wait-state in total for I-Code (2 for D-Code) */
#define FICR_CHIPCONF02_WS96MHz_2WS (2UL) /*!< 2 wait-state in total for I-Code (3 for D-Code) */
#define FICR_CHIPCONF02_WS96MHz_3WS (3UL) /*!< 3 wait-state in total for I-Code (4 for D-Code) */
#define FICR_CHIPCONF02_WS96MHz_4WS (4UL) /*!< 4 wait-state in total for I-Code (5 for D-Code) */

/* Bits 27..24 : Wait-states for I-Code flash access (HFCLOCK = 64 MHz). D-Code has one more wait-state. */
#define FICR_CHIPCONF02_WS64MHz_Pos (24UL) /*!< Position of WS64MHz field. */
#define FICR_CHIPCONF02_WS64MHz_Msk (0xFUL << FICR_CHIPCONF02_WS64MHz_Pos) /*!< Bit mask of WS64MHz field. */
#define FICR_CHIPCONF02_WS64MHz_1WS (1UL) /*!< 1 wait-state in total for I-Code (2 for D-Code) */
#define FICR_CHIPCONF02_WS64MHz_2WS (2UL) /*!< 2 wait-state in total for I-Code (3 for D-Code) */
#define FICR_CHIPCONF02_WS64MHz_3WS (3UL) /*!< 3 wait-state in total for I-Code (4 for D-Code) */
#define FICR_CHIPCONF02_WS64MHz_4WS (4UL) /*!< 4 wait-state in total for I-Code (5 for D-Code) */

/* Bits 23..20 : Wait-states for I-Code flash access (HFCLOCK = 32 MHz). D-Code has one more wait-state. */
#define FICR_CHIPCONF02_WS32MHz_Pos (20UL) /*!< Position of WS32MHz field. */
#define FICR_CHIPCONF02_WS32MHz_Msk (0xFUL << FICR_CHIPCONF02_WS32MHz_Pos) /*!< Bit mask of WS32MHz field. */
#define FICR_CHIPCONF02_WS32MHz_1WS (1UL) /*!< 1 wait-state in total for I-Code (2 for D-Code) */
#define FICR_CHIPCONF02_WS32MHz_2WS (2UL) /*!< 2 wait-state in total for I-Code (3 for D-Code) */
#define FICR_CHIPCONF02_WS32MHz_3WS (3UL) /*!< 3 wait-state in total for I-Code (4 for D-Code) */
#define FICR_CHIPCONF02_WS32MHz_4WS (4UL) /*!< 4 wait-state in total for I-Code (5 for D-Code) */

/* Bits 19..16 : Wait-states for I-Code flash access (HFCLOCK = 16 MHz), D-Code has one more wait-state. */
#define FICR_CHIPCONF02_WS16MHz_Pos (16UL) /*!< Position of WS16MHz field. */
#define FICR_CHIPCONF02_WS16MHz_Msk (0xFUL << FICR_CHIPCONF02_WS16MHz_Pos) /*!< Bit mask of WS16MHz field. */
#define FICR_CHIPCONF02_WS16MHz_1WS (1UL) /*!< 1 wait-state in total for I-Code (2 for D-Code) */
#define FICR_CHIPCONF02_WS16MHz_2WS (2UL) /*!< 2 wait-state in total for I-Code (3 for D-Code) */
#define FICR_CHIPCONF02_WS16MHz_3WS (3UL) /*!< 3 wait-state in total for I-Code (4 for D-Code) */
#define FICR_CHIPCONF02_WS16MHz_4WS (4UL) /*!< 4 wait-state in total for I-Code (5 for D-Code) */

/* Bits 15..11 : Number of cycles before information configuration registers can be read */
#define FICR_CHIPCONF02_IFCREADDELAY_Pos (11UL) /*!< Position of IFCREADDELAY field. */
#define FICR_CHIPCONF02_IFCREADDELAY_Msk (0x1FUL << FICR_CHIPCONF02_IFCREADDELAY_Pos) /*!< Bit mask of IFCREADDELAY field. */

/* Bits 7..0 : Number of successful FLASHPWRUPn read cycles when powering up flash. After chip power up, the NVMC controller reads FLASHPWRUPn for 7 us. */
#define FICR_CHIPCONF02_FLASHPWRUPCNT_Pos (0UL) /*!< Position of FLASHPWRUPCNT field. */
#define FICR_CHIPCONF02_FLASHPWRUPCNT_Msk (0xFFUL << FICR_CHIPCONF02_FLASHPWRUPCNT_Pos) /*!< Bit mask of FLASHPWRUPCNT field. */

/* Register: FICR_CHIPCONF03 */
/* Description: SAADC and POWER related presets. Will be set during production test. */

/* Bits 30..24 : Sets the threshold value of power regulator (default value for POWER-&gt;PWRREGTHRESHOLD) */
#define FICR_CHIPCONF03_PWRREGTHRESHOLD_Pos (24UL) /*!< Position of PWRREGTHRESHOLD field. */
#define FICR_CHIPCONF03_PWRREGTHRESHOLD_Msk (0x7FUL << FICR_CHIPCONF03_PWRREGTHRESHOLD_Pos) /*!< Bit mask of PWRREGTHRESHOLD field. */

/* Bits 22..16 : SAADC VREF calibration value (default value for SAADC-&gt;CALVREF) */
#define FICR_CHIPCONF03_CALVREF_Pos (16UL) /*!< Position of CALVREF field. */
#define FICR_CHIPCONF03_CALVREF_Msk (0x7FUL << FICR_CHIPCONF03_CALVREF_Pos) /*!< Bit mask of CALVREF field. */

/* Bits 14..8 : SAADC gain calibration value (default value for SAADC-&gt;CALGAIN) */
#define FICR_CHIPCONF03_CALGAIN_Pos (8UL) /*!< Position of CALGAIN field. */
#define FICR_CHIPCONF03_CALGAIN_Msk (0x7FUL << FICR_CHIPCONF03_CALGAIN_Pos) /*!< Bit mask of CALGAIN field. */

/* Bits 5..0 : SAADC offset value (default value for SAADC-&gt;CALOFFSET) */
#define FICR_CHIPCONF03_CALOFFSET_Pos (0UL) /*!< Position of CALOFFSET field. */
#define FICR_CHIPCONF03_CALOFFSET_Msk (0x3FUL << FICR_CHIPCONF03_CALOFFSET_Pos) /*!< Bit mask of CALOFFSET field. */

/* Register: FICR_RADIOTRIM00 */
/* Description: Radio presets register */

/* Bits 30..28 : Trim value for DIV2_4 (default value for RADIO-&gt;FS_TRIM.FSDIVTUNE) */
#define FICR_RADIOTRIM00_FSDIVTUNE_Pos (28UL) /*!< Position of FSDIVTUNE field. */
#define FICR_RADIOTRIM00_FSDIVTUNE_Msk (0x7UL << FICR_RADIOTRIM00_FSDIVTUNE_Pos) /*!< Bit mask of FSDIVTUNE field. */

/* Bits 27..23 : Trim value for calamp programmable IandQ gain mismatch correction (default value for RADIO-&gt;QOVERRIDE14.CALAMP) */
#define FICR_RADIOTRIM00_CALAMP_Pos (23UL) /*!< Position of CALAMP field. */
#define FICR_RADIOTRIM00_CALAMP_Msk (0x1FUL << FICR_RADIOTRIM00_CALAMP_Pos) /*!< Bit mask of CALAMP field. */

/* Bits 22..18 : Trim value for calphi, programmable IandQ phase mismatch correction (default value for RADIO-&gt;QOVERRIDE14.CALPHI) */
#define FICR_RADIOTRIM00_CALPHI_Pos (18UL) /*!< Position of CALPHI field. */
#define FICR_RADIOTRIM00_CALPHI_Msk (0x1FUL << FICR_RADIOTRIM00_CALPHI_Pos) /*!< Bit mask of CALPHI field. */

/* Bits 17..11 : AAF/RFMIX dc calibration of Q channel (default value for RADIO-&gt;MISC_TEST1.RFMIXDCCALQ) */
#define FICR_RADIOTRIM00_RFMIXDCCALQ_Pos (11UL) /*!< Position of RFMIXDCCALQ field. */
#define FICR_RADIOTRIM00_RFMIXDCCALQ_Msk (0x7FUL << FICR_RADIOTRIM00_RFMIXDCCALQ_Pos) /*!< Bit mask of RFMIXDCCALQ field. */

/* Bits 10..4 : AAF/RFMIX dc calibration of I channel (default value for RADIO-&gt;MISC_TEST1.RFMIXDCCALI) */
#define FICR_RADIOTRIM00_RFMIXDCCALI_Pos (4UL) /*!< Position of RFMIXDCCALI field. */
#define FICR_RADIOTRIM00_RFMIXDCCALI_Msk (0x7FUL << FICR_RADIOTRIM00_RFMIXDCCALI_Pos) /*!< Bit mask of RFMIXDCCALI field. */

/* Bits 3..0 : Process compensation for RC time constant in RX_AAF filter (default value for RADIO-&gt;MISC_TRIM1.AAFRCTRIM) 0x0: minimum time constant (maximum cut-off frequency) 0xF: maximum time constant (minimum cut-off frequency) */
#define FICR_RADIOTRIM00_AAFRCTRIM_Pos (0UL) /*!< Position of AAFRCTRIM field. */
#define FICR_RADIOTRIM00_AAFRCTRIM_Msk (0xFUL << FICR_RADIOTRIM00_AAFRCTRIM_Pos) /*!< Bit mask of AAFRCTRIM field. */

/* Register: FICR_RADIOTRIM01 */
/* Description: Radio presets register */

/* Bits 18..16 : Change centre frequency of LNA LC tank (default value for RADIO-&gt;MISC_TRIM1.LNACFREQ) */
#define FICR_RADIOTRIM01_LNACFREQ_Pos (16UL) /*!< Position of LNACFREQ field. */
#define FICR_RADIOTRIM01_LNACFREQ_Msk (0x7UL << FICR_RADIOTRIM01_LNACFREQ_Pos) /*!< Bit mask of LNACFREQ field. */

/* Bits 6..0 : RSSI-offset trim code in dBm (2's complement value). RSSI offset value can be in the range from -64 to +63 dBm (default value for RADIO-&gt;RSSI_CONFIG.RSSICAL). */
#define FICR_RADIOTRIM01_RSSIOFFSET_Pos (0UL) /*!< Position of RSSIOFFSET field. */
#define FICR_RADIOTRIM01_RSSIOFFSET_Msk (0x7FUL << FICR_RADIOTRIM01_RSSIOFFSET_Pos) /*!< Bit mask of RSSIOFFSET field. */

/* Register: FICR_CHIPCONF07 */
/* Description: Miscellaneous analog configuration. Will be set during production test. */

/* Bits 3..0 : Trim value for RAM. */
#define FICR_CHIPCONF07_BTRIM_Pos (0UL) /*!< Position of BTRIM field. */
#define FICR_CHIPCONF07_BTRIM_Msk (0xFUL << FICR_CHIPCONF07_BTRIM_Pos) /*!< Bit mask of BTRIM field. */

/* Register: FICR_FLASHPWRUP0 */
/* Description: Power-up pattern for flash */

/* Bits 31..0 : Power-up pattern for flash */
#define FICR_FLASHPWRUP0_FLASHPWRUP0_Pos (0UL) /*!< Position of FLASHPWRUP0 field. */
#define FICR_FLASHPWRUP0_FLASHPWRUP0_Msk (0xFFFFFFFFUL << FICR_FLASHPWRUP0_FLASHPWRUP0_Pos) /*!< Bit mask of FLASHPWRUP0 field. */

/* Register: FICR_FLASHPWRUP1 */
/* Description: Power-up pattern for flash */

/* Bits 31..0 : Power-up pattern for flash */
#define FICR_FLASHPWRUP1_FLASHPWRUP1_Pos (0UL) /*!< Position of FLASHPWRUP1 field. */
#define FICR_FLASHPWRUP1_FLASHPWRUP1_Msk (0xFFFFFFFFUL << FICR_FLASHPWRUP1_FLASHPWRUP1_Pos) /*!< Bit mask of FLASHPWRUP1 field. */

/* Register: FICR_FLASHPWRUP2 */
/* Description: Power-up pattern for flash */

/* Bits 31..0 : Power-up pattern for flash */
#define FICR_FLASHPWRUP2_FLASHPWRUP2_Pos (0UL) /*!< Position of FLASHPWRUP2 field. */
#define FICR_FLASHPWRUP2_FLASHPWRUP2_Msk (0xFFFFFFFFUL << FICR_FLASHPWRUP2_FLASHPWRUP2_Pos) /*!< Bit mask of FLASHPWRUP2 field. */

/* Register: FICR_FLASHPWRUP3 */
/* Description: Power-up pattern for flash */

/* Bits 31..0 : Power-up pattern for flash */
#define FICR_FLASHPWRUP3_FLASHPWRUP3_Pos (0UL) /*!< Position of FLASHPWRUP3 field. */
#define FICR_FLASHPWRUP3_FLASHPWRUP3_Msk (0xFFFFFFFFUL << FICR_FLASHPWRUP3_FLASHPWRUP3_Pos) /*!< Bit mask of FLASHPWRUP3 field. */

/* Register: FICR_RCNFMODE */
/* Description: Description collection[n]: Mode specific RADIO configuration register for RADIO mode m=n */

/* Bits 15..8 : tDeltaPwrdnPa (default value for RADIO-&gt;QOVERRIDE21.TDELTAPWRDNPA) */
#define FICR_RCNFMODE_TDELTAPWRDNPA_Pos (8UL) /*!< Position of TDELTAPWRDNPA field. */
#define FICR_RCNFMODE_TDELTAPWRDNPA_Msk (0xFFUL << FICR_RCNFMODE_TDELTAPWRDNPA_Pos) /*!< Bit mask of TDELTAPWRDNPA field. */

/* Bits 5..0 : tIfsDelta (default value for RADIO-&gt;QOVERRIDE2.TIFSDELTA) */
#define FICR_RCNFMODE_TIFSDELTA_Pos (0UL) /*!< Position of TIFSDELTA field. */
#define FICR_RCNFMODE_TIFSDELTA_Msk (0x3FUL << FICR_RCNFMODE_TIFSDELTA_Pos) /*!< Bit mask of TIFSDELTA field. */

/* Register: FICR_RCNF */
/* Description: Mode independent RADIO configuration register */

/* Bits 30..24 : Adjust TX path modulation gain (default value for RADIO-&gt;FS_TEST.FSTXMODULATORGAIN 2 Mbit mode) */
#define FICR_RCNF_FSTXMODULATORGAIN2M_Pos (24UL) /*!< Position of FSTXMODULATORGAIN2M field. */
#define FICR_RCNF_FSTXMODULATORGAIN2M_Msk (0x7FUL << FICR_RCNF_FSTXMODULATORGAIN2M_Pos) /*!< Bit mask of FSTXMODULATORGAIN2M field. */

/* Bits 21..16 : External control of frequency deviation, value overrides calculated FS and TX multipliers, 0x00 for off (default value for RADIO-&gt;FS_TEST.FSDEVOVERRIDE) */
#define FICR_RCNF_FSDEVOVERRIDE_Pos (16UL) /*!< Position of FSDEVOVERRIDE field. */
#define FICR_RCNF_FSDEVOVERRIDE_Msk (0x3FUL << FICR_RCNF_FSDEVOVERRIDE_Pos) /*!< Bit mask of FSDEVOVERRIDE field. */

/* Bits 14..8 : Adjust TX path modulation gain (default value for RADIO-&gt;FS_TEST.FSTXMODULATORGAIN 1 Mbit mode) */
#define FICR_RCNF_FSTXMODULATORGAIN1M_Pos (8UL) /*!< Position of FSTXMODULATORGAIN1M field. */
#define FICR_RCNF_FSTXMODULATORGAIN1M_Msk (0x7FUL << FICR_RCNF_FSTXMODULATORGAIN1M_Pos) /*!< Bit mask of FSTXMODULATORGAIN1M field. */

/* Bits 3..0 : Programmable delay (default value for RADIO-&gt;FS_CONFIG.FSMODULATORDELAY) */
#define FICR_RCNF_FSMODULATORDELAY_Pos (0UL) /*!< Position of FSMODULATORDELAY field. */
#define FICR_RCNF_FSMODULATORDELAY_Msk (0xFUL << FICR_RCNF_FSMODULATORDELAY_Pos) /*!< Bit mask of FSMODULATORDELAY field. */

/* Register: FICR_CHIPCONF04 */
/* Description: Miscellaneous analog configuration. Will be set during production test. */

/* Bits 12..8 : Calibrate internal bandgap reference in COMP */
#define FICR_CHIPCONF04_COMPREFTRIM_Pos (8UL) /*!< Position of COMPREFTRIM field. */
#define FICR_CHIPCONF04_COMPREFTRIM_Msk (0x1FUL << FICR_CHIPCONF04_COMPREFTRIM_Pos) /*!< Bit mask of COMPREFTRIM field. */

/* Register: FICR_TEMP_A0 */
/* Description: Slope definition A0 */

/* Bits 11..0 : A (slope definition) register */
#define FICR_TEMP_A0_A_Pos (0UL) /*!< Position of A field. */
#define FICR_TEMP_A0_A_Msk (0xFFFUL << FICR_TEMP_A0_A_Pos) /*!< Bit mask of A field. */

/* Register: FICR_TEMP_A1 */
/* Description: Slope definition A1 */

/* Bits 11..0 : A (slope definition) register */
#define FICR_TEMP_A1_A_Pos (0UL) /*!< Position of A field. */
#define FICR_TEMP_A1_A_Msk (0xFFFUL << FICR_TEMP_A1_A_Pos) /*!< Bit mask of A field. */

/* Register: FICR_TEMP_A2 */
/* Description: Slope definition A2 */

/* Bits 11..0 : A (slope definition) register */
#define FICR_TEMP_A2_A_Pos (0UL) /*!< Position of A field. */
#define FICR_TEMP_A2_A_Msk (0xFFFUL << FICR_TEMP_A2_A_Pos) /*!< Bit mask of A field. */

/* Register: FICR_TEMP_A3 */
/* Description: Slope definition A3 */

/* Bits 11..0 : A (slope definition) register */
#define FICR_TEMP_A3_A_Pos (0UL) /*!< Position of A field. */
#define FICR_TEMP_A3_A_Msk (0xFFFUL << FICR_TEMP_A3_A_Pos) /*!< Bit mask of A field. */

/* Register: FICR_TEMP_A4 */
/* Description: Slope definition A4 */

/* Bits 11..0 : A (slope definition) register */
#define FICR_TEMP_A4_A_Pos (0UL) /*!< Position of A field. */
#define FICR_TEMP_A4_A_Msk (0xFFFUL << FICR_TEMP_A4_A_Pos) /*!< Bit mask of A field. */

/* Register: FICR_TEMP_A5 */
/* Description: Slope definition A5 */

/* Bits 11..0 : A (slope definition) register */
#define FICR_TEMP_A5_A_Pos (0UL) /*!< Position of A field. */
#define FICR_TEMP_A5_A_Msk (0xFFFUL << FICR_TEMP_A5_A_Pos) /*!< Bit mask of A field. */

/* Register: FICR_TEMP_B0 */
/* Description: Y-intercept B0 */

/* Bits 13..0 : B (y-intercept) */
#define FICR_TEMP_B0_B_Pos (0UL) /*!< Position of B field. */
#define FICR_TEMP_B0_B_Msk (0x3FFFUL << FICR_TEMP_B0_B_Pos) /*!< Bit mask of B field. */

/* Register: FICR_TEMP_B1 */
/* Description: Y-intercept B1 */

/* Bits 13..0 : B (y-intercept) */
#define FICR_TEMP_B1_B_Pos (0UL) /*!< Position of B field. */
#define FICR_TEMP_B1_B_Msk (0x3FFFUL << FICR_TEMP_B1_B_Pos) /*!< Bit mask of B field. */

/* Register: FICR_TEMP_B2 */
/* Description: Y-intercept B2 */

/* Bits 13..0 : B (y-intercept) */
#define FICR_TEMP_B2_B_Pos (0UL) /*!< Position of B field. */
#define FICR_TEMP_B2_B_Msk (0x3FFFUL << FICR_TEMP_B2_B_Pos) /*!< Bit mask of B field. */

/* Register: FICR_TEMP_B3 */
/* Description: Y-intercept B3 */

/* Bits 13..0 : B (y-intercept) */
#define FICR_TEMP_B3_B_Pos (0UL) /*!< Position of B field. */
#define FICR_TEMP_B3_B_Msk (0x3FFFUL << FICR_TEMP_B3_B_Pos) /*!< Bit mask of B field. */

/* Register: FICR_TEMP_B4 */
/* Description: Y-intercept B4 */

/* Bits 13..0 : B (y-intercept) */
#define FICR_TEMP_B4_B_Pos (0UL) /*!< Position of B field. */
#define FICR_TEMP_B4_B_Msk (0x3FFFUL << FICR_TEMP_B4_B_Pos) /*!< Bit mask of B field. */

/* Register: FICR_TEMP_B5 */
/* Description: Y-intercept B5 */

/* Bits 13..0 : B (y-intercept) */
#define FICR_TEMP_B5_B_Pos (0UL) /*!< Position of B field. */
#define FICR_TEMP_B5_B_Msk (0x3FFFUL << FICR_TEMP_B5_B_Pos) /*!< Bit mask of B field. */

/* Register: FICR_TEMP_T0 */
/* Description: Segment end T0 */

/* Bits 7..0 : T (segment end) register */
#define FICR_TEMP_T0_T_Pos (0UL) /*!< Position of T field. */
#define FICR_TEMP_T0_T_Msk (0xFFUL << FICR_TEMP_T0_T_Pos) /*!< Bit mask of T field. */

/* Register: FICR_TEMP_T1 */
/* Description: Segment end T1 */

/* Bits 7..0 : T (segment end) register */
#define FICR_TEMP_T1_T_Pos (0UL) /*!< Position of T field. */
#define FICR_TEMP_T1_T_Msk (0xFFUL << FICR_TEMP_T1_T_Pos) /*!< Bit mask of T field. */

/* Register: FICR_TEMP_T2 */
/* Description: Segment end T2 */

/* Bits 7..0 : T (segment end) register */
#define FICR_TEMP_T2_T_Pos (0UL) /*!< Position of T field. */
#define FICR_TEMP_T2_T_Msk (0xFFUL << FICR_TEMP_T2_T_Pos) /*!< Bit mask of T field. */

/* Register: FICR_TEMP_T3 */
/* Description: Segment end T3 */

/* Bits 7..0 : T (segment end) register */
#define FICR_TEMP_T3_T_Pos (0UL) /*!< Position of T field. */
#define FICR_TEMP_T3_T_Msk (0xFFUL << FICR_TEMP_T3_T_Pos) /*!< Bit mask of T field. */

/* Register: FICR_TEMP_T4 */
/* Description: Segment end T4 */

/* Bits 7..0 : T (segment end) register */
#define FICR_TEMP_T4_T_Pos (0UL) /*!< Position of T field. */
#define FICR_TEMP_T4_T_Msk (0xFFUL << FICR_TEMP_T4_T_Pos) /*!< Bit mask of T field. */


/* Peripheral: GPIOTE */
/* Description: GPIO Tasks and Events */

/* Register: GPIOTE_TASKS_OUT */
/* Description: Description collection[n]: Task for writing to pin specified in CONFIG[n].PSEL. Action on pin is configured in CONFIG[n].POLARITY. */

/* Bit 0 :   */
#define GPIOTE_TASKS_OUT_TASKS_OUT_Pos (0UL) /*!< Position of TASKS_OUT field. */
#define GPIOTE_TASKS_OUT_TASKS_OUT_Msk (0x1UL << GPIOTE_TASKS_OUT_TASKS_OUT_Pos) /*!< Bit mask of TASKS_OUT field. */

/* Register: GPIOTE_TASKS_SET */
/* Description: Description collection[n]: Task for writing to pin specified in CONFIG[n].PSEL. Action on pin is to set it high. */

/* Bit 0 :   */
#define GPIOTE_TASKS_SET_TASKS_SET_Pos (0UL) /*!< Position of TASKS_SET field. */
#define GPIOTE_TASKS_SET_TASKS_SET_Msk (0x1UL << GPIOTE_TASKS_SET_TASKS_SET_Pos) /*!< Bit mask of TASKS_SET field. */

/* Register: GPIOTE_TASKS_CLR */
/* Description: Description collection[n]: Task for writing to pin specified in CONFIG[n].PSEL. Action on pin is to set it low. */

/* Bit 0 :   */
#define GPIOTE_TASKS_CLR_TASKS_CLR_Pos (0UL) /*!< Position of TASKS_CLR field. */
#define GPIOTE_TASKS_CLR_TASKS_CLR_Msk (0x1UL << GPIOTE_TASKS_CLR_TASKS_CLR_Pos) /*!< Bit mask of TASKS_CLR field. */

/* Register: GPIOTE_EVENTS_IN */
/* Description: Description collection[n]: Event generated from pin specified in CONFIG[n].PSEL */

/* Bit 0 :   */
#define GPIOTE_EVENTS_IN_EVENTS_IN_Pos (0UL) /*!< Position of EVENTS_IN field. */
#define GPIOTE_EVENTS_IN_EVENTS_IN_Msk (0x1UL << GPIOTE_EVENTS_IN_EVENTS_IN_Pos) /*!< Bit mask of EVENTS_IN field. */

/* Register: GPIOTE_EVENTS_PORT */
/* Description: Event generated from multiple input GPIO pins with SENSE mechanism enabled */

/* Bit 0 :   */
#define GPIOTE_EVENTS_PORT_EVENTS_PORT_Pos (0UL) /*!< Position of EVENTS_PORT field. */
#define GPIOTE_EVENTS_PORT_EVENTS_PORT_Msk (0x1UL << GPIOTE_EVENTS_PORT_EVENTS_PORT_Pos) /*!< Bit mask of EVENTS_PORT field. */

/* Register: GPIOTE_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 31 : Enable or disable interrupt for PORT event */
#define GPIOTE_INTEN_PORT_Pos (31UL) /*!< Position of PORT field. */
#define GPIOTE_INTEN_PORT_Msk (0x1UL << GPIOTE_INTEN_PORT_Pos) /*!< Bit mask of PORT field. */
#define GPIOTE_INTEN_PORT_Disabled (0UL) /*!< Disable */
#define GPIOTE_INTEN_PORT_Enabled (1UL) /*!< Enable */

/* Bit 7 : Enable or disable interrupt for IN[7] event */
#define GPIOTE_INTEN_IN7_Pos (7UL) /*!< Position of IN7 field. */
#define GPIOTE_INTEN_IN7_Msk (0x1UL << GPIOTE_INTEN_IN7_Pos) /*!< Bit mask of IN7 field. */
#define GPIOTE_INTEN_IN7_Disabled (0UL) /*!< Disable */
#define GPIOTE_INTEN_IN7_Enabled (1UL) /*!< Enable */

/* Bit 6 : Enable or disable interrupt for IN[6] event */
#define GPIOTE_INTEN_IN6_Pos (6UL) /*!< Position of IN6 field. */
#define GPIOTE_INTEN_IN6_Msk (0x1UL << GPIOTE_INTEN_IN6_Pos) /*!< Bit mask of IN6 field. */
#define GPIOTE_INTEN_IN6_Disabled (0UL) /*!< Disable */
#define GPIOTE_INTEN_IN6_Enabled (1UL) /*!< Enable */

/* Bit 5 : Enable or disable interrupt for IN[5] event */
#define GPIOTE_INTEN_IN5_Pos (5UL) /*!< Position of IN5 field. */
#define GPIOTE_INTEN_IN5_Msk (0x1UL << GPIOTE_INTEN_IN5_Pos) /*!< Bit mask of IN5 field. */
#define GPIOTE_INTEN_IN5_Disabled (0UL) /*!< Disable */
#define GPIOTE_INTEN_IN5_Enabled (1UL) /*!< Enable */

/* Bit 4 : Enable or disable interrupt for IN[4] event */
#define GPIOTE_INTEN_IN4_Pos (4UL) /*!< Position of IN4 field. */
#define GPIOTE_INTEN_IN4_Msk (0x1UL << GPIOTE_INTEN_IN4_Pos) /*!< Bit mask of IN4 field. */
#define GPIOTE_INTEN_IN4_Disabled (0UL) /*!< Disable */
#define GPIOTE_INTEN_IN4_Enabled (1UL) /*!< Enable */

/* Bit 3 : Enable or disable interrupt for IN[3] event */
#define GPIOTE_INTEN_IN3_Pos (3UL) /*!< Position of IN3 field. */
#define GPIOTE_INTEN_IN3_Msk (0x1UL << GPIOTE_INTEN_IN3_Pos) /*!< Bit mask of IN3 field. */
#define GPIOTE_INTEN_IN3_Disabled (0UL) /*!< Disable */
#define GPIOTE_INTEN_IN3_Enabled (1UL) /*!< Enable */

/* Bit 2 : Enable or disable interrupt for IN[2] event */
#define GPIOTE_INTEN_IN2_Pos (2UL) /*!< Position of IN2 field. */
#define GPIOTE_INTEN_IN2_Msk (0x1UL << GPIOTE_INTEN_IN2_Pos) /*!< Bit mask of IN2 field. */
#define GPIOTE_INTEN_IN2_Disabled (0UL) /*!< Disable */
#define GPIOTE_INTEN_IN2_Enabled (1UL) /*!< Enable */

/* Bit 1 : Enable or disable interrupt for IN[1] event */
#define GPIOTE_INTEN_IN1_Pos (1UL) /*!< Position of IN1 field. */
#define GPIOTE_INTEN_IN1_Msk (0x1UL << GPIOTE_INTEN_IN1_Pos) /*!< Bit mask of IN1 field. */
#define GPIOTE_INTEN_IN1_Disabled (0UL) /*!< Disable */
#define GPIOTE_INTEN_IN1_Enabled (1UL) /*!< Enable */

/* Bit 0 : Enable or disable interrupt for IN[0] event */
#define GPIOTE_INTEN_IN0_Pos (0UL) /*!< Position of IN0 field. */
#define GPIOTE_INTEN_IN0_Msk (0x1UL << GPIOTE_INTEN_IN0_Pos) /*!< Bit mask of IN0 field. */
#define GPIOTE_INTEN_IN0_Disabled (0UL) /*!< Disable */
#define GPIOTE_INTEN_IN0_Enabled (1UL) /*!< Enable */

/* Register: GPIOTE_INTENSET */
/* Description: Enable interrupt */

/* Bit 31 : Write '1' to enable interrupt for PORT event */
#define GPIOTE_INTENSET_PORT_Pos (31UL) /*!< Position of PORT field. */
#define GPIOTE_INTENSET_PORT_Msk (0x1UL << GPIOTE_INTENSET_PORT_Pos) /*!< Bit mask of PORT field. */
#define GPIOTE_INTENSET_PORT_Disabled (0UL) /*!< Read: Disabled */
#define GPIOTE_INTENSET_PORT_Enabled (1UL) /*!< Read: Enabled */
#define GPIOTE_INTENSET_PORT_Set (1UL) /*!< Enable */

/* Bit 7 : Write '1' to enable interrupt for IN[7] event */
#define GPIOTE_INTENSET_IN7_Pos (7UL) /*!< Position of IN7 field. */
#define GPIOTE_INTENSET_IN7_Msk (0x1UL << GPIOTE_INTENSET_IN7_Pos) /*!< Bit mask of IN7 field. */
#define GPIOTE_INTENSET_IN7_Disabled (0UL) /*!< Read: Disabled */
#define GPIOTE_INTENSET_IN7_Enabled (1UL) /*!< Read: Enabled */
#define GPIOTE_INTENSET_IN7_Set (1UL) /*!< Enable */

/* Bit 6 : Write '1' to enable interrupt for IN[6] event */
#define GPIOTE_INTENSET_IN6_Pos (6UL) /*!< Position of IN6 field. */
#define GPIOTE_INTENSET_IN6_Msk (0x1UL << GPIOTE_INTENSET_IN6_Pos) /*!< Bit mask of IN6 field. */
#define GPIOTE_INTENSET_IN6_Disabled (0UL) /*!< Read: Disabled */
#define GPIOTE_INTENSET_IN6_Enabled (1UL) /*!< Read: Enabled */
#define GPIOTE_INTENSET_IN6_Set (1UL) /*!< Enable */

/* Bit 5 : Write '1' to enable interrupt for IN[5] event */
#define GPIOTE_INTENSET_IN5_Pos (5UL) /*!< Position of IN5 field. */
#define GPIOTE_INTENSET_IN5_Msk (0x1UL << GPIOTE_INTENSET_IN5_Pos) /*!< Bit mask of IN5 field. */
#define GPIOTE_INTENSET_IN5_Disabled (0UL) /*!< Read: Disabled */
#define GPIOTE_INTENSET_IN5_Enabled (1UL) /*!< Read: Enabled */
#define GPIOTE_INTENSET_IN5_Set (1UL) /*!< Enable */

/* Bit 4 : Write '1' to enable interrupt for IN[4] event */
#define GPIOTE_INTENSET_IN4_Pos (4UL) /*!< Position of IN4 field. */
#define GPIOTE_INTENSET_IN4_Msk (0x1UL << GPIOTE_INTENSET_IN4_Pos) /*!< Bit mask of IN4 field. */
#define GPIOTE_INTENSET_IN4_Disabled (0UL) /*!< Read: Disabled */
#define GPIOTE_INTENSET_IN4_Enabled (1UL) /*!< Read: Enabled */
#define GPIOTE_INTENSET_IN4_Set (1UL) /*!< Enable */

/* Bit 3 : Write '1' to enable interrupt for IN[3] event */
#define GPIOTE_INTENSET_IN3_Pos (3UL) /*!< Position of IN3 field. */
#define GPIOTE_INTENSET_IN3_Msk (0x1UL << GPIOTE_INTENSET_IN3_Pos) /*!< Bit mask of IN3 field. */
#define GPIOTE_INTENSET_IN3_Disabled (0UL) /*!< Read: Disabled */
#define GPIOTE_INTENSET_IN3_Enabled (1UL) /*!< Read: Enabled */
#define GPIOTE_INTENSET_IN3_Set (1UL) /*!< Enable */

/* Bit 2 : Write '1' to enable interrupt for IN[2] event */
#define GPIOTE_INTENSET_IN2_Pos (2UL) /*!< Position of IN2 field. */
#define GPIOTE_INTENSET_IN2_Msk (0x1UL << GPIOTE_INTENSET_IN2_Pos) /*!< Bit mask of IN2 field. */
#define GPIOTE_INTENSET_IN2_Disabled (0UL) /*!< Read: Disabled */
#define GPIOTE_INTENSET_IN2_Enabled (1UL) /*!< Read: Enabled */
#define GPIOTE_INTENSET_IN2_Set (1UL) /*!< Enable */

/* Bit 1 : Write '1' to enable interrupt for IN[1] event */
#define GPIOTE_INTENSET_IN1_Pos (1UL) /*!< Position of IN1 field. */
#define GPIOTE_INTENSET_IN1_Msk (0x1UL << GPIOTE_INTENSET_IN1_Pos) /*!< Bit mask of IN1 field. */
#define GPIOTE_INTENSET_IN1_Disabled (0UL) /*!< Read: Disabled */
#define GPIOTE_INTENSET_IN1_Enabled (1UL) /*!< Read: Enabled */
#define GPIOTE_INTENSET_IN1_Set (1UL) /*!< Enable */

/* Bit 0 : Write '1' to enable interrupt for IN[0] event */
#define GPIOTE_INTENSET_IN0_Pos (0UL) /*!< Position of IN0 field. */
#define GPIOTE_INTENSET_IN0_Msk (0x1UL << GPIOTE_INTENSET_IN0_Pos) /*!< Bit mask of IN0 field. */
#define GPIOTE_INTENSET_IN0_Disabled (0UL) /*!< Read: Disabled */
#define GPIOTE_INTENSET_IN0_Enabled (1UL) /*!< Read: Enabled */
#define GPIOTE_INTENSET_IN0_Set (1UL) /*!< Enable */

/* Register: GPIOTE_INTENCLR */
/* Description: Disable interrupt */

/* Bit 31 : Write '1' to disable interrupt for PORT event */
#define GPIOTE_INTENCLR_PORT_Pos (31UL) /*!< Position of PORT field. */
#define GPIOTE_INTENCLR_PORT_Msk (0x1UL << GPIOTE_INTENCLR_PORT_Pos) /*!< Bit mask of PORT field. */
#define GPIOTE_INTENCLR_PORT_Disabled (0UL) /*!< Read: Disabled */
#define GPIOTE_INTENCLR_PORT_Enabled (1UL) /*!< Read: Enabled */
#define GPIOTE_INTENCLR_PORT_Clear (1UL) /*!< Disable */

/* Bit 7 : Write '1' to disable interrupt for IN[7] event */
#define GPIOTE_INTENCLR_IN7_Pos (7UL) /*!< Position of IN7 field. */
#define GPIOTE_INTENCLR_IN7_Msk (0x1UL << GPIOTE_INTENCLR_IN7_Pos) /*!< Bit mask of IN7 field. */
#define GPIOTE_INTENCLR_IN7_Disabled (0UL) /*!< Read: Disabled */
#define GPIOTE_INTENCLR_IN7_Enabled (1UL) /*!< Read: Enabled */
#define GPIOTE_INTENCLR_IN7_Clear (1UL) /*!< Disable */

/* Bit 6 : Write '1' to disable interrupt for IN[6] event */
#define GPIOTE_INTENCLR_IN6_Pos (6UL) /*!< Position of IN6 field. */
#define GPIOTE_INTENCLR_IN6_Msk (0x1UL << GPIOTE_INTENCLR_IN6_Pos) /*!< Bit mask of IN6 field. */
#define GPIOTE_INTENCLR_IN6_Disabled (0UL) /*!< Read: Disabled */
#define GPIOTE_INTENCLR_IN6_Enabled (1UL) /*!< Read: Enabled */
#define GPIOTE_INTENCLR_IN6_Clear (1UL) /*!< Disable */

/* Bit 5 : Write '1' to disable interrupt for IN[5] event */
#define GPIOTE_INTENCLR_IN5_Pos (5UL) /*!< Position of IN5 field. */
#define GPIOTE_INTENCLR_IN5_Msk (0x1UL << GPIOTE_INTENCLR_IN5_Pos) /*!< Bit mask of IN5 field. */
#define GPIOTE_INTENCLR_IN5_Disabled (0UL) /*!< Read: Disabled */
#define GPIOTE_INTENCLR_IN5_Enabled (1UL) /*!< Read: Enabled */
#define GPIOTE_INTENCLR_IN5_Clear (1UL) /*!< Disable */

/* Bit 4 : Write '1' to disable interrupt for IN[4] event */
#define GPIOTE_INTENCLR_IN4_Pos (4UL) /*!< Position of IN4 field. */
#define GPIOTE_INTENCLR_IN4_Msk (0x1UL << GPIOTE_INTENCLR_IN4_Pos) /*!< Bit mask of IN4 field. */
#define GPIOTE_INTENCLR_IN4_Disabled (0UL) /*!< Read: Disabled */
#define GPIOTE_INTENCLR_IN4_Enabled (1UL) /*!< Read: Enabled */
#define GPIOTE_INTENCLR_IN4_Clear (1UL) /*!< Disable */

/* Bit 3 : Write '1' to disable interrupt for IN[3] event */
#define GPIOTE_INTENCLR_IN3_Pos (3UL) /*!< Position of IN3 field. */
#define GPIOTE_INTENCLR_IN3_Msk (0x1UL << GPIOTE_INTENCLR_IN3_Pos) /*!< Bit mask of IN3 field. */
#define GPIOTE_INTENCLR_IN3_Disabled (0UL) /*!< Read: Disabled */
#define GPIOTE_INTENCLR_IN3_Enabled (1UL) /*!< Read: Enabled */
#define GPIOTE_INTENCLR_IN3_Clear (1UL) /*!< Disable */

/* Bit 2 : Write '1' to disable interrupt for IN[2] event */
#define GPIOTE_INTENCLR_IN2_Pos (2UL) /*!< Position of IN2 field. */
#define GPIOTE_INTENCLR_IN2_Msk (0x1UL << GPIOTE_INTENCLR_IN2_Pos) /*!< Bit mask of IN2 field. */
#define GPIOTE_INTENCLR_IN2_Disabled (0UL) /*!< Read: Disabled */
#define GPIOTE_INTENCLR_IN2_Enabled (1UL) /*!< Read: Enabled */
#define GPIOTE_INTENCLR_IN2_Clear (1UL) /*!< Disable */

/* Bit 1 : Write '1' to disable interrupt for IN[1] event */
#define GPIOTE_INTENCLR_IN1_Pos (1UL) /*!< Position of IN1 field. */
#define GPIOTE_INTENCLR_IN1_Msk (0x1UL << GPIOTE_INTENCLR_IN1_Pos) /*!< Bit mask of IN1 field. */
#define GPIOTE_INTENCLR_IN1_Disabled (0UL) /*!< Read: Disabled */
#define GPIOTE_INTENCLR_IN1_Enabled (1UL) /*!< Read: Enabled */
#define GPIOTE_INTENCLR_IN1_Clear (1UL) /*!< Disable */

/* Bit 0 : Write '1' to disable interrupt for IN[0] event */
#define GPIOTE_INTENCLR_IN0_Pos (0UL) /*!< Position of IN0 field. */
#define GPIOTE_INTENCLR_IN0_Msk (0x1UL << GPIOTE_INTENCLR_IN0_Pos) /*!< Bit mask of IN0 field. */
#define GPIOTE_INTENCLR_IN0_Disabled (0UL) /*!< Read: Disabled */
#define GPIOTE_INTENCLR_IN0_Enabled (1UL) /*!< Read: Enabled */
#define GPIOTE_INTENCLR_IN0_Clear (1UL) /*!< Disable */

/* Register: GPIOTE_CONFIG */
/* Description: Description collection[n]: Configuration for OUT[n], SET[n] and CLR[n] tasks and IN[n] event */

/* Bit 20 : When in task mode: Initial value of the output when the GPIOTE channel is configured. When in event mode: No effect. */
#define GPIOTE_CONFIG_OUTINIT_Pos (20UL) /*!< Position of OUTINIT field. */
#define GPIOTE_CONFIG_OUTINIT_Msk (0x1UL << GPIOTE_CONFIG_OUTINIT_Pos) /*!< Bit mask of OUTINIT field. */
#define GPIOTE_CONFIG_OUTINIT_Low (0UL) /*!< Task mode: Initial value of pin before task triggering is low */
#define GPIOTE_CONFIG_OUTINIT_High (1UL) /*!< Task mode: Initial value of pin before task triggering is high */

/* Bits 17..16 : When In task mode: Operation to be performed on output when OUT[n] task is triggered. When In event mode: Operation on input that shall trigger IN[n] event. */
#define GPIOTE_CONFIG_POLARITY_Pos (16UL) /*!< Position of POLARITY field. */
#define GPIOTE_CONFIG_POLARITY_Msk (0x3UL << GPIOTE_CONFIG_POLARITY_Pos) /*!< Bit mask of POLARITY field. */
#define GPIOTE_CONFIG_POLARITY_None (0UL) /*!< Task mode: No effect on pin from OUT[n] task. Event mode: no IN[n] event generated on pin activity. */
#define GPIOTE_CONFIG_POLARITY_LoToHi (1UL) /*!< Task mode: Set pin from OUT[n] task. Event mode: Generate IN[n] event when rising edge on pin. */
#define GPIOTE_CONFIG_POLARITY_HiToLo (2UL) /*!< Task mode: Clear pin from OUT[n] task. Event mode: Generate IN[n] event when falling edge on pin. */
#define GPIOTE_CONFIG_POLARITY_Toggle (3UL) /*!< Task mode: Toggle pin from OUT[n]. Event mode: Generate IN[n] when any change on pin. */

/* Bits 12..8 : GPIO number associated with SET[n], CLR[n] and OUT[n] tasks and IN[n] event */
#define GPIOTE_CONFIG_PSEL_Pos (8UL) /*!< Position of PSEL field. */
#define GPIOTE_CONFIG_PSEL_Msk (0x1FUL << GPIOTE_CONFIG_PSEL_Pos) /*!< Bit mask of PSEL field. */

/* Bits 1..0 : Mode */
#define GPIOTE_CONFIG_MODE_Pos (0UL) /*!< Position of MODE field. */
#define GPIOTE_CONFIG_MODE_Msk (0x3UL << GPIOTE_CONFIG_MODE_Pos) /*!< Bit mask of MODE field. */
#define GPIOTE_CONFIG_MODE_Disabled (0UL) /*!< Disabled. Pin specified by PSEL will not be acquired by the GPIOTE module. */
#define GPIOTE_CONFIG_MODE_Event (1UL) /*!< Event mode */
#define GPIOTE_CONFIG_MODE_Task (3UL) /*!< Task mode */

/* Register: GPIOTE_DEBOUNCE */
/* Description: Description collection[n]: Debounce mode for GPIOTE channel n */

/* Bit 0 : Mode */
#define GPIOTE_DEBOUNCE_MODE_Pos (0UL) /*!< Position of MODE field. */
#define GPIOTE_DEBOUNCE_MODE_Msk (0x1UL << GPIOTE_DEBOUNCE_MODE_Pos) /*!< Bit mask of MODE field. */
#define GPIOTE_DEBOUNCE_MODE_Mode0 (0UL) /*!< Mode 0: nRF52 debounce method */
#define GPIOTE_DEBOUNCE_MODE_Mode1 (1UL) /*!< Mode 1: nRF51 legacy debounce method */

/* Register: GPIOTE_POWER */
/* Description: Peripheral power control */

/* Bit 0 : Peripheral power control. The peripheral and its registers will be reset to its initial state by switching the peripheral off and then back on again. */
#define GPIOTE_POWER_POWER_Pos (0UL) /*!< Position of POWER field. */
#define GPIOTE_POWER_POWER_Msk (0x1UL << GPIOTE_POWER_POWER_Pos) /*!< Bit mask of POWER field. */
#define GPIOTE_POWER_POWER_Disabled (0UL) /*!< Peripheral is powered off */
#define GPIOTE_POWER_POWER_Enabled (1UL) /*!< Peripheral is powered on */


/* Peripheral: NVMC */
/* Description: Non-volatile memory controller */

/* Register: NVMC_READY */
/* Description: Ready flag */

/* Bit 0 : NVMC is ready or busy */
#define NVMC_READY_READY_Pos (0UL) /*!< Position of READY field. */
#define NVMC_READY_READY_Msk (0x1UL << NVMC_READY_READY_Pos) /*!< Bit mask of READY field. */
#define NVMC_READY_READY_Busy (0UL) /*!< NVMC is busy (ongoing write or erase operation) */
#define NVMC_READY_READY_Ready (1UL) /*!< NVMC is ready */

/* Register: NVMC_CONFIG */
/* Description: Configuration register */

/* Bit 3 : Deprecated field -  OTP emulation mode */
#define NVMC_CONFIG_OTPEMU_Pos (3UL) /*!< Position of OTPEMU field. */
#define NVMC_CONFIG_OTPEMU_Msk (0x1UL << NVMC_CONFIG_OTPEMU_Pos) /*!< Bit mask of OTPEMU field. */
#define NVMC_CONFIG_OTPEMU_Disabled (0UL) /*!< OTP emulation disabled */
#define NVMC_CONFIG_OTPEMU_Enabled (1UL) /*!< OTP emulation enabled */

/* Bit 2 : Deprecated field -  Halt CPU until current write or erase is finished */
#define NVMC_CONFIG_PROGMODE_Pos (2UL) /*!< Position of PROGMODE field. */
#define NVMC_CONFIG_PROGMODE_Msk (0x1UL << NVMC_CONFIG_PROGMODE_Pos) /*!< Bit mask of PROGMODE field. */
#define NVMC_CONFIG_PROGMODE_Halt (0UL) /*!< Halt CPU */
#define NVMC_CONFIG_PROGMODE_NoHalt (1UL) /*!< Do not halt CPU */

/* Bits 1..0 : Program memory access mode. It is strongly recommended to activate erase and write modes only when they are actively used. */
#define NVMC_CONFIG_WEN_Pos (0UL) /*!< Position of WEN field. */
#define NVMC_CONFIG_WEN_Msk (0x3UL << NVMC_CONFIG_WEN_Pos) /*!< Bit mask of WEN field. */
#define NVMC_CONFIG_WEN_Ren (0UL) /*!< Read only access */
#define NVMC_CONFIG_WEN_Wen (1UL) /*!< Write enabled */
#define NVMC_CONFIG_WEN_Een (2UL) /*!< Erase enabled */

/* Register: NVMC_ERASEPAGE */
/* Description: Register for erasing a page in code area */

/* Bits 31..0 : Register for starting erase of a page in code area. */
#define NVMC_ERASEPAGE_ERASEPAGE_Pos (0UL) /*!< Position of ERASEPAGE field. */
#define NVMC_ERASEPAGE_ERASEPAGE_Msk (0xFFFFFFFFUL << NVMC_ERASEPAGE_ERASEPAGE_Pos) /*!< Bit mask of ERASEPAGE field. */

/* Register: NVMC_ERASEPCR1 */
/* Description: Deprecated register - Register for erasing a page in code area. Equivalent to ERASEPAGE. */

/* Bits 31..0 : Register for erasing a page in code area. Equivalent to ERASEPAGE. */
#define NVMC_ERASEPCR1_ERASEPCR1_Pos (0UL) /*!< Position of ERASEPCR1 field. */
#define NVMC_ERASEPCR1_ERASEPCR1_Msk (0xFFFFFFFFUL << NVMC_ERASEPCR1_ERASEPCR1_Pos) /*!< Bit mask of ERASEPCR1 field. */

/* Register: NVMC_ERASEALL */
/* Description: Register for erasing all non-volatile user memory */

/* Bit 0 : Erase all non-volatile memory including UICR registers. Note that the erase must be enabled using CONFIG.WEN before the non-volatile memory can be erased. */
#define NVMC_ERASEALL_ERASEALL_Pos (0UL) /*!< Position of ERASEALL field. */
#define NVMC_ERASEALL_ERASEALL_Msk (0x1UL << NVMC_ERASEALL_ERASEALL_Pos) /*!< Bit mask of ERASEALL field. */
#define NVMC_ERASEALL_ERASEALL_NoOperation (0UL) /*!< No operation */
#define NVMC_ERASEALL_ERASEALL_Erase (1UL) /*!< Start erase of chip */

/* Register: NVMC_ERASEPCR0 */
/* Description: Deprecated register - Register for erasing a page in code area. Equivalent to ERASEPAGE. */

/* Bits 31..0 : Register for starting erase of a page in code area. Equivalent to ERASEPAGE. */
#define NVMC_ERASEPCR0_ERASEPCR0_Pos (0UL) /*!< Position of ERASEPCR0 field. */
#define NVMC_ERASEPCR0_ERASEPCR0_Msk (0xFFFFFFFFUL << NVMC_ERASEPCR0_ERASEPCR0_Pos) /*!< Bit mask of ERASEPCR0 field. */

/* Register: NVMC_ERASEUICR */
/* Description: Register for erasing user information configuration registers */

/* Bit 0 : Register starting erase of all user information configuration registers. Note that the erase must be enabled using CONFIG.WEN before the UICR can be erased. */
#define NVMC_ERASEUICR_ERASEUICR_Pos (0UL) /*!< Position of ERASEUICR field. */
#define NVMC_ERASEUICR_ERASEUICR_Msk (0x1UL << NVMC_ERASEUICR_ERASEUICR_Pos) /*!< Bit mask of ERASEUICR field. */
#define NVMC_ERASEUICR_ERASEUICR_NoOperation (0UL) /*!< No operation */
#define NVMC_ERASEUICR_ERASEUICR_Erase (1UL) /*!< Start erase of UICR */

/* Register: NVMC_ERASEPAGEPARTIAL */
/* Description: Register for partial erase of a page in code area */

/* Bits 31..0 : Register for starting partial erase of a page in code area */
#define NVMC_ERASEPAGEPARTIAL_ERASEPAGEPARTIAL_Pos (0UL) /*!< Position of ERASEPAGEPARTIAL field. */
#define NVMC_ERASEPAGEPARTIAL_ERASEPAGEPARTIAL_Msk (0xFFFFFFFFUL << NVMC_ERASEPAGEPARTIAL_ERASEPAGEPARTIAL_Pos) /*!< Bit mask of ERASEPAGEPARTIAL field. */

/* Register: NVMC_ERASEPAGEPARTIALCFG */
/* Description: Register for partial erase configuration */

/* Bits 6..0 : Duration of the partial erase in milliseconds */
#define NVMC_ERASEPAGEPARTIALCFG_DURATION_Pos (0UL) /*!< Position of DURATION field. */
#define NVMC_ERASEPAGEPARTIALCFG_DURATION_Msk (0x7FUL << NVMC_ERASEPAGEPARTIALCFG_DURATION_Pos) /*!< Bit mask of DURATION field. */

/* Register: NVMC_WAITSTATENUM */
/* Description: Register to set the number of waitstate for flash access */

/* Bits 15..0 : Register to set the number of waitstate for the flash acces */
#define NVMC_WAITSTATENUM_WAITSTATENUM_Pos (0UL) /*!< Position of WAITSTATENUM field. */
#define NVMC_WAITSTATENUM_WAITSTATENUM_Msk (0xFFFFUL << NVMC_WAITSTATENUM_WAITSTATENUM_Pos) /*!< Bit mask of WAITSTATENUM field. */

/* Register: NVMC_TESTMODE */
/* Description: Register for entering the test mode. See the flash IP test documentation for more details. */

/* Bits 15..0 : Register for entering the test mode. See the flash IP test documentation for more details. This register does not return the same value as written. */
#define NVMC_TESTMODE_TESTMODE_Pos (0UL) /*!< Position of TESTMODE field. */
#define NVMC_TESTMODE_TESTMODE_Msk (0xFFFFUL << NVMC_TESTMODE_TESTMODE_Pos) /*!< Bit mask of TESTMODE field. */
#define NVMC_TESTMODE_TESTMODE_NORMAL (0UL) /*!< Read: Not in test mode */
#define NVMC_TESTMODE_TESTMODE_TESTMODE1 (1UL) /*!< Read: In test mode 1 */
#define NVMC_TESTMODE_TESTMODE_TESTMODE2 (2UL) /*!< Read: In test mode 2 */
#define NVMC_TESTMODE_TESTMODE_TESTMODE3 (4UL) /*!< Read: In test mode 3 */
#define NVMC_TESTMODE_TESTMODE_SetNORMAL (0UL) /*!< Write: Set the NORMAL mode */
#define NVMC_TESTMODE_TESTMODE_SetTESTMODE2 (0xABCDUL) /*!< Write: Set the test mode 2 */
#define NVMC_TESTMODE_TESTMODE_SetTESTMODE1 (0xBCDEUL) /*!< Write: Set the test mode 1 */
#define NVMC_TESTMODE_TESTMODE_SetTESTMODE3 (0xCDEFUL) /*!< Write: Set the test mode 3 */

/* Register: NVMC_LVEN */
/* Description: Low voltage read mode */

/* Bits 31..0 :   */
#define NVMC_LVEN_LVEN_Pos (0UL) /*!< Position of LVEN field. */
#define NVMC_LVEN_LVEN_Msk (0xFFFFFFFFUL << NVMC_LVEN_LVEN_Pos) /*!< Bit mask of LVEN field. */
#define NVMC_LVEN_LVEN_Disable (0UL) /*!< Disable low voltage read mode. */
#define NVMC_LVEN_LVEN_Enable (0x6005EA5EUL) /*!< Enable low voltage read mode. */

/* Register: NVMC_TESTMASSERASE */
/* Description: Self-timed mass-erase operation */

/* Bits 1..0 : Self-timed mass-erase operation */
#define NVMC_TESTMASSERASE_TESTMASSERASE_Pos (0UL) /*!< Position of TESTMASSERASE field. */
#define NVMC_TESTMASSERASE_TESTMASSERASE_Msk (0x3UL << NVMC_TESTMASSERASE_TESTMASSERASE_Pos) /*!< Bit mask of TESTMASSERASE field. */
#define NVMC_TESTMASSERASE_TESTMASSERASE_NOOPERATION0 (0UL) /*!< No operation */
#define NVMC_TESTMASSERASE_TESTMASSERASE_NOOPERATION1 (1UL) /*!< No operation */
#define NVMC_TESTMASSERASE_TESTMASSERASE_MAIN (2UL) /*!< Erase the main block only */
#define NVMC_TESTMASSERASE_TESTMASSERASE_EVERYTHING (3UL) /*!< Erase everything (all information pages and the main block) */

/* Register: NVMC_TESTERASEREFCELL */
/* Description: Self-timed erase reference cell operation */

/* Bit 0 : Self-timed erase reference cell operation */
#define NVMC_TESTERASEREFCELL_TESTERASEREFCELL_Pos (0UL) /*!< Position of TESTERASEREFCELL field. */
#define NVMC_TESTERASEREFCELL_TESTERASEREFCELL_Msk (0x1UL << NVMC_TESTERASEREFCELL_TESTERASEREFCELL_Pos) /*!< Bit mask of TESTERASEREFCELL field. */
#define NVMC_TESTERASEREFCELL_TESTERASEREFCELL_NOOPERATION (0UL) /*!< No operation */
#define NVMC_TESTERASEREFCELL_TESTERASEREFCELL_START (1UL) /*!< Start the erase reference cell operation */

/* Register: NVMC_TESTTC */
/* Description: Observe the TC output from the flash macro */

/* Bits 12..0 : TC output */
#define NVMC_TESTTC_TC_Pos (0UL) /*!< Position of TC field. */
#define NVMC_TESTTC_TC_Msk (0x1FFFUL << NVMC_TESTTC_TC_Pos) /*!< Bit mask of TC field. */

/* Register: NVMC_TESTDATA128 */
/* Description: Description collection[n]: Direct flash test data word n */

/* Bits 31..0 : Return data out from flash when reading. Set flash data in when writing. */
#define NVMC_TESTDATA128_TESTDATA_Pos (0UL) /*!< Position of TESTDATA field. */
#define NVMC_TESTDATA128_TESTDATA_Msk (0xFFFFFFFFUL << NVMC_TESTDATA128_TESTDATA_Pos) /*!< Bit mask of TESTDATA field. */

/* Register: NVMC_TESTDATA128INC */
/* Description: Description collection[n]: Direct flash test data word n. Post-increment TESTCONTROLADDR */

/* Bits 31..0 : Return data out from flash when reading. Use TESTDATA128[3:0] registers to set the compared data. Post-increment TESTCONTROLADDR. If TESTCONTROLLINES.SE is high, the read starts by pulsing the SE line low for Tnws. If TESTCONTROLLINES.SE is low, SE remains low for the whole access. */
#define NVMC_TESTDATA128INC_TESTDATA_Pos (0UL) /*!< Position of TESTDATA field. */
#define NVMC_TESTDATA128INC_TESTDATA_Msk (0xFFFFFFFFUL << NVMC_TESTDATA128INC_TESTDATA_Pos) /*!< Bit mask of TESTDATA field. */

/* Register: NVMC_TESTCMPINC */
/* Description: Read and compare last flash row to TESTDATA128 content. Post-increment TESTCONTROLADDR. */

/* Bit 1 : Read and compare last flash row (latched lines) to TESTDATA128 content. Post-increment TESTCONTROLADDR. If TESTCONTROLLINES.SE is high, the read starts by pulsing the SE line low for Tnws. If TESTCONTROLLINES.SE is low, SE remains low for the whole access. */
#define NVMC_TESTCMPINC_LATCHED_Pos (1UL) /*!< Position of LATCHED field. */
#define NVMC_TESTCMPINC_LATCHED_Msk (0x1UL << NVMC_TESTCMPINC_LATCHED_Pos) /*!< Bit mask of LATCHED field. */
#define NVMC_TESTCMPINC_LATCHED_Equal (0UL) /*!< Latched TESTDATA128 content and flash row read are equal */
#define NVMC_TESTCMPINC_LATCHED_NotEqual (1UL) /*!< Latched TESTDATA128 content and flash row read are different */

/* Bit 0 : Read and compare last flash row (direct lines) to TESTDATA128 content. Post-increment TESTCONTROLADDR. If TESTCONTROLLINES.SE is high, the read starts by pulsing the SE line low for Tnws. If TESTCONTROLLINES.SE is low, SE remains low for the whole access. */
#define NVMC_TESTCMPINC_DIRECT_Pos (0UL) /*!< Position of DIRECT field. */
#define NVMC_TESTCMPINC_DIRECT_Msk (0x1UL << NVMC_TESTCMPINC_DIRECT_Pos) /*!< Bit mask of DIRECT field. */
#define NVMC_TESTCMPINC_DIRECT_Equal (0UL) /*!< Direct TESTDATA128 content and flash row read are equal */
#define NVMC_TESTCMPINC_DIRECT_NotEqual (1UL) /*!< Direct TESTDATA128 content and flash row read are different */

/* Register: NVMC_TESTNCMPINC */
/* Description: Read and compare last flash row to complement of TESTDATA128 content. Post-increment TESTCONTROLADDR. */

/* Bit 1 : Read and compare last flash row (latched lines) to the complement of TESTDATA128 content (all bits inverted). Post-increment TESTCONTROLADDR. If TESTCONTROLLINES.SE is high, the read starts by pulsing the SE line low for Tnws. If TESTCONTROLLINES.SE is low, SE remains low for the whole access. */
#define NVMC_TESTNCMPINC_LATCHED_Pos (1UL) /*!< Position of LATCHED field. */
#define NVMC_TESTNCMPINC_LATCHED_Msk (0x1UL << NVMC_TESTNCMPINC_LATCHED_Pos) /*!< Bit mask of LATCHED field. */
#define NVMC_TESTNCMPINC_LATCHED_Complement (0UL) /*!< Latched TESTDATA128 content and flash row read are each other's complement */
#define NVMC_TESTNCMPINC_LATCHED_NotComplement (1UL) /*!< Latched TESTDATA128 content and flash row read are not each other's complement */

/* Bit 0 : Read and compare last flash row (direct lines) to the complement of TESTDATA128 content (all bits inverted). Post-increment TESTCONTROLADDR. If TESTCONTROLLINES.SE is high, the read starts by pulsing the SE line low for Tnws. If TESTCONTROLLINES.SE is low, SE remains low for the whole access. */
#define NVMC_TESTNCMPINC_DIRECT_Pos (0UL) /*!< Position of DIRECT field. */
#define NVMC_TESTNCMPINC_DIRECT_Msk (0x1UL << NVMC_TESTNCMPINC_DIRECT_Pos) /*!< Bit mask of DIRECT field. */
#define NVMC_TESTNCMPINC_DIRECT_Complement (0UL) /*!< Direct TESTDATA128 content and flash row read are each other's complement */
#define NVMC_TESTNCMPINC_DIRECT_NotComplement (1UL) /*!< Direct TESTDATA128 content and flash row read are not each other's complement */

/* Register: NVMC_TESTCONTROLLINES */
/* Description: Direct flash test, control lines. See the flash IP test documentation for more details. */

/* Bit 31 : Control the TMR signal */
#define NVMC_TESTCONTROLLINES_TMR_Pos (31UL) /*!< Position of TMR field. */
#define NVMC_TESTCONTROLLINES_TMR_Msk (0x1UL << NVMC_TESTCONTROLLINES_TMR_Pos) /*!< Bit mask of TMR field. */

/* Bit 30 : Control the NVSTR signal */
#define NVMC_TESTCONTROLLINES_NVSTR_Pos (30UL) /*!< Position of NVSTR field. */
#define NVMC_TESTCONTROLLINES_NVSTR_Msk (0x1UL << NVMC_TESTCONTROLLINES_NVSTR_Pos) /*!< Bit mask of NVSTR field. */

/* Bit 29 : Control the PROG signal */
#define NVMC_TESTCONTROLLINES_PROG_Pos (29UL) /*!< Position of PROG field. */
#define NVMC_TESTCONTROLLINES_PROG_Msk (0x1UL << NVMC_TESTCONTROLLINES_PROG_Pos) /*!< Bit mask of PROG field. */

/* Bit 28 : Control the MAS1 signal */
#define NVMC_TESTCONTROLLINES_MAS1_Pos (28UL) /*!< Position of MAS1 field. */
#define NVMC_TESTCONTROLLINES_MAS1_Msk (0x1UL << NVMC_TESTCONTROLLINES_MAS1_Pos) /*!< Bit mask of MAS1 field. */

/* Bit 27 : Control the ERASE signal */
#define NVMC_TESTCONTROLLINES_ERASE_Pos (27UL) /*!< Position of ERASE field. */
#define NVMC_TESTCONTROLLINES_ERASE_Msk (0x1UL << NVMC_TESTCONTROLLINES_ERASE_Pos) /*!< Bit mask of ERASE field. */

/* Bit 26 : Control the IFREN signal */
#define NVMC_TESTCONTROLLINES_IFREN_Pos (26UL) /*!< Position of IFREN field. */
#define NVMC_TESTCONTROLLINES_IFREN_Msk (0x1UL << NVMC_TESTCONTROLLINES_IFREN_Pos) /*!< Bit mask of IFREN field. */

/* Bit 25 : Control the SE signal. This signal is delayed by hardware by Tas, so that it can be written simultaneously to XE and YE */
#define NVMC_TESTCONTROLLINES_SE_Pos (25UL) /*!< Position of SE field. */
#define NVMC_TESTCONTROLLINES_SE_Msk (0x1UL << NVMC_TESTCONTROLLINES_SE_Pos) /*!< Bit mask of SE field. */

/* Bit 24 : Control the YE signal */
#define NVMC_TESTCONTROLLINES_YE_Pos (24UL) /*!< Position of YE field. */
#define NVMC_TESTCONTROLLINES_YE_Msk (0x1UL << NVMC_TESTCONTROLLINES_YE_Pos) /*!< Bit mask of YE field. */

/* Bit 23 : Control the XE signal */
#define NVMC_TESTCONTROLLINES_XE_Pos (23UL) /*!< Position of XE field. */
#define NVMC_TESTCONTROLLINES_XE_Msk (0x1UL << NVMC_TESTCONTROLLINES_XE_Pos) /*!< Bit mask of XE field. */

/* Bit 22 : Control the PV signal */
#define NVMC_TESTCONTROLLINES_PV_Pos (22UL) /*!< Position of PV field. */
#define NVMC_TESTCONTROLLINES_PV_Msk (0x1UL << NVMC_TESTCONTROLLINES_PV_Pos) /*!< Bit mask of PV field. */

/* Bit 21 : Control the EV signal */
#define NVMC_TESTCONTROLLINES_EV_Pos (21UL) /*!< Position of EV field. */
#define NVMC_TESTCONTROLLINES_EV_Msk (0x1UL << NVMC_TESTCONTROLLINES_EV_Pos) /*!< Bit mask of EV field. */

/* Bit 20 : Control the IFREN1 signal */
#define NVMC_TESTCONTROLLINES_IFREN1_Pos (20UL) /*!< Position of IFREN1 field. */
#define NVMC_TESTCONTROLLINES_IFREN1_Msk (0x1UL << NVMC_TESTCONTROLLINES_IFREN1_Pos) /*!< Bit mask of IFREN1 field. */

/* Bits 19..18 : Control the REDEN signal */
#define NVMC_TESTCONTROLLINES_REDEN_Pos (18UL) /*!< Position of REDEN field. */
#define NVMC_TESTCONTROLLINES_REDEN_Msk (0x3UL << NVMC_TESTCONTROLLINES_REDEN_Pos) /*!< Bit mask of REDEN field. */

/* Bit 17 : Control the PDM25 signal */
#define NVMC_TESTCONTROLLINES_PDM25_Pos (17UL) /*!< Position of PDM25 field. */
#define NVMC_TESTCONTROLLINES_PDM25_Msk (0x1UL << NVMC_TESTCONTROLLINES_PDM25_Pos) /*!< Bit mask of PDM25 field. */

/* Register: NVMC_TESTCONTROLADDR */
/* Description: Direct flash test control, address lines */

/* Bits 14..6 : Control the XADDR signal */
#define NVMC_TESTCONTROLADDR_XADDR_Pos (6UL) /*!< Position of XADDR field. */
#define NVMC_TESTCONTROLADDR_XADDR_Msk (0x1FFUL << NVMC_TESTCONTROLADDR_XADDR_Pos) /*!< Bit mask of XADDR field. */

/* Bits 5..0 : Control the YADDR signal */
#define NVMC_TESTCONTROLADDR_YADDR_Pos (0UL) /*!< Position of YADDR field. */
#define NVMC_TESTCONTROLADDR_YADDR_Msk (0x3FUL << NVMC_TESTCONTROLADDR_YADDR_Pos) /*!< Bit mask of YADDR field. */

/* Register: NVMC_TESTCOUNTERRELOAD */
/* Description: Counter reload value, used when counting from SE or YE rising edge to latching of data */

/* Bits 11..0 : Counter reload value in MCU bus cycles, used when counting from SE or YE rising edge to latching of data. Value of 0 has no effect (counter will not latch) */
#define NVMC_TESTCOUNTERRELOAD_RELOAD_Pos (0UL) /*!< Position of RELOAD field. */
#define NVMC_TESTCOUNTERRELOAD_RELOAD_Msk (0xFFFUL << NVMC_TESTCOUNTERRELOAD_RELOAD_Pos) /*!< Bit mask of RELOAD field. */

/* Register: NVMC_TESTCOUNTERRUNNING */
/* Description: Return the state of the counter (counting or not) */

/* Bit 0 : Return the state of the counter */
#define NVMC_TESTCOUNTERRUNNING_RUNNING_Pos (0UL) /*!< Position of RUNNING field. */
#define NVMC_TESTCOUNTERRUNNING_RUNNING_Msk (0x1UL << NVMC_TESTCOUNTERRUNNING_RUNNING_Pos) /*!< Bit mask of RUNNING field. */
#define NVMC_TESTCOUNTERRUNNING_RUNNING_NotRunning (0UL) /*!< Counter is not running */
#define NVMC_TESTCOUNTERRUNNING_RUNNING_Running (1UL) /*!< Counter is running */

/* Register: NVMC_TESTCONFIG */
/* Description: Mode of operation of the counter */

/* Bit 3 : Disable the address auto-increment or -decrement */
#define NVMC_TESTCONFIG_AUTOINCEN_Pos (3UL) /*!< Position of AUTOINCEN field. */
#define NVMC_TESTCONFIG_AUTOINCEN_Msk (0x1UL << NVMC_TESTCONFIG_AUTOINCEN_Pos) /*!< Bit mask of AUTOINCEN field. */
#define NVMC_TESTCONFIG_AUTOINCEN_Enable (0UL) /*!< Address auto-incrementing/decrementing is enabled */
#define NVMC_TESTCONFIG_AUTOINCEN_Disable (1UL) /*!< Address auto-incrementing/decrementing is disabled */

/* Bit 2 : Control the address auto-increment or -decrement */
#define NVMC_TESTCONFIG_AUTOINC_Pos (2UL) /*!< Position of AUTOINC field. */
#define NVMC_TESTCONFIG_AUTOINC_Msk (0x1UL << NVMC_TESTCONFIG_AUTOINC_Pos) /*!< Bit mask of AUTOINC field. */
#define NVMC_TESTCONFIG_AUTOINC_Increment (0UL) /*!< Address is auto-incrementing */
#define NVMC_TESTCONFIG_AUTOINC_Decrement (1UL) /*!< Address is auto-decrementing */

/* Bit 1 : Define the starting point of the counter */
#define NVMC_TESTCONFIG_START_Pos (1UL) /*!< Position of START field. */
#define NVMC_TESTCONFIG_START_Msk (0x1UL << NVMC_TESTCONFIG_START_Pos) /*!< Bit mask of START field. */
#define NVMC_TESTCONFIG_START_SE (0UL) /*!< Counter starts on SE rising edge */
#define NVMC_TESTCONFIG_START_YE (1UL) /*!< Counter starts on YE rising edge */

/* Bit 0 : Return the state of the counter */
#define NVMC_TESTCONFIG_ENABLE_Pos (0UL) /*!< Position of ENABLE field. */
#define NVMC_TESTCONFIG_ENABLE_Msk (0x1UL << NVMC_TESTCONFIG_ENABLE_Pos) /*!< Bit mask of ENABLE field. */
#define NVMC_TESTCONFIG_ENABLE_Disabled (0UL) /*!< Counter is disabled */
#define NVMC_TESTCONFIG_ENABLE_Enabled (1UL) /*!< Counter is enabled */

/* Register: NVMC_TESTTMVPPANAEN */
/* Description: Control analog signals for flash measurements */

/* Bit 4 : Enable the VPPDIV pad. Needs to be set when measuring VPPDIV on GPIO26 (P0.20), and when applying high-voltage on VPP pad. */
#define NVMC_TESTTMVPPANAEN_VPPDIVEN_Pos (4UL) /*!< Position of VPPDIVEN field. */
#define NVMC_TESTTMVPPANAEN_VPPDIVEN_Msk (0x1UL << NVMC_TESTTMVPPANAEN_VPPDIVEN_Pos) /*!< Bit mask of VPPDIVEN field. */
#define NVMC_TESTTMVPPANAEN_VPPDIVEN_Disabled (0UL) /*!< VPPDIV pad disabled */
#define NVMC_TESTTMVPPANAEN_VPPDIVEN_Enabled (1UL) /*!< VPPDIV pad enabled */

/* Bits 3..0 : Analog enable for TM measurement. Needs to be set when measuring TM[3:0] on P0.05, P0.04, P0.01 and P0.00. */
#define NVMC_TESTTMVPPANAEN_TMANAEN_Pos (0UL) /*!< Position of TMANAEN field. */
#define NVMC_TESTTMVPPANAEN_TMANAEN_Msk (0xFUL << NVMC_TESTTMVPPANAEN_TMANAEN_Pos) /*!< Bit mask of TMANAEN field. */
#define NVMC_TESTTMVPPANAEN_TMANAEN_Disabled (0x0UL) /*!< All pads disabled */
#define NVMC_TESTTMVPPANAEN_TMANAEN_Enabled (0xFUL) /*!< All pads enabled */

/* Register: NVMC_FORCEONNVM */
/* Description: Force on all NVM supplies. See also the internal section in the NVMC chapter. */

/* Bit 0 : Force on all NVM supplies. See also the internal section in the NVMC chapter. */
#define NVMC_FORCEONNVM_FORCEONNVM_Pos (0UL) /*!< Position of FORCEONNVM field. */
#define NVMC_FORCEONNVM_FORCEONNVM_Msk (0x1UL << NVMC_FORCEONNVM_FORCEONNVM_Pos) /*!< Bit mask of FORCEONNVM field. */
#define NVMC_FORCEONNVM_FORCEONNVM_DoNotForceOn (0UL) /*!< Do not force on NVM supply */
#define NVMC_FORCEONNVM_FORCEONNVM_ForceOn (1UL) /*!< Force on NVM supply */

/* Register: NVMC_FORCEOFFNVM */
/* Description: Force off NVM supply. See also the internal section in the NVMC chapter. */

/* Bits 31..8 : KEY */
#define NVMC_FORCEOFFNVM_KEY_Pos (8UL) /*!< Position of KEY field. */
#define NVMC_FORCEOFFNVM_KEY_Msk (0xFFFFFFUL << NVMC_FORCEOFFNVM_KEY_Pos) /*!< Bit mask of KEY field. */
#define NVMC_FORCEOFFNVM_KEY_EnableWrite (0xACCE55UL) /*!< Must be written in order to write to bits 0-7. Any other value will ignore writes to this register. Read as zero. */

/* Bit 1 : Force off NVM supply 1. See also the internal section in the NVMC chapter. */
#define NVMC_FORCEOFFNVM_FORCEOFFNVM1_Pos (1UL) /*!< Position of FORCEOFFNVM1 field. */
#define NVMC_FORCEOFFNVM_FORCEOFFNVM1_Msk (0x1UL << NVMC_FORCEOFFNVM_FORCEOFFNVM1_Pos) /*!< Bit mask of FORCEOFFNVM1 field. */
#define NVMC_FORCEOFFNVM_FORCEOFFNVM1_DoNotForceOff (0UL) /*!< Do not force off supply. */
#define NVMC_FORCEOFFNVM_FORCEOFFNVM1_ForceOff (1UL) /*!< Force off supply. */

/* Bit 0 : Force off NVM supply 0. See also the internal section in the NVMC chapter. */
#define NVMC_FORCEOFFNVM_FORCEOFFNVM0_Pos (0UL) /*!< Position of FORCEOFFNVM0 field. */
#define NVMC_FORCEOFFNVM_FORCEOFFNVM0_Msk (0x1UL << NVMC_FORCEOFFNVM_FORCEOFFNVM0_Pos) /*!< Bit mask of FORCEOFFNVM0 field. */
#define NVMC_FORCEOFFNVM_FORCEOFFNVM0_DoNotForceOff (0UL) /*!< Do not force off supply. */
#define NVMC_FORCEOFFNVM_FORCEOFFNVM0_ForceOff (1UL) /*!< Force off supply. */


/* Peripheral: GPIO */
/* Description: GPIO Port */

/* Register: GPIO_OUT */
/* Description: Write GPIO port */

/* Bit 31 : Pin 31 */
#define GPIO_OUT_PIN31_Pos (31UL) /*!< Position of PIN31 field. */
#define GPIO_OUT_PIN31_Msk (0x1UL << GPIO_OUT_PIN31_Pos) /*!< Bit mask of PIN31 field. */
#define GPIO_OUT_PIN31_Low (0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN31_High (1UL) /*!< Pin driver is high */

/* Bit 30 : Pin 30 */
#define GPIO_OUT_PIN30_Pos (30UL) /*!< Position of PIN30 field. */
#define GPIO_OUT_PIN30_Msk (0x1UL << GPIO_OUT_PIN30_Pos) /*!< Bit mask of PIN30 field. */
#define GPIO_OUT_PIN30_Low (0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN30_High (1UL) /*!< Pin driver is high */

/* Bit 29 : Pin 29 */
#define GPIO_OUT_PIN29_Pos (29UL) /*!< Position of PIN29 field. */
#define GPIO_OUT_PIN29_Msk (0x1UL << GPIO_OUT_PIN29_Pos) /*!< Bit mask of PIN29 field. */
#define GPIO_OUT_PIN29_Low (0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN29_High (1UL) /*!< Pin driver is high */

/* Bit 28 : Pin 28 */
#define GPIO_OUT_PIN28_Pos (28UL) /*!< Position of PIN28 field. */
#define GPIO_OUT_PIN28_Msk (0x1UL << GPIO_OUT_PIN28_Pos) /*!< Bit mask of PIN28 field. */
#define GPIO_OUT_PIN28_Low (0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN28_High (1UL) /*!< Pin driver is high */

/* Bit 27 : Pin 27 */
#define GPIO_OUT_PIN27_Pos (27UL) /*!< Position of PIN27 field. */
#define GPIO_OUT_PIN27_Msk (0x1UL << GPIO_OUT_PIN27_Pos) /*!< Bit mask of PIN27 field. */
#define GPIO_OUT_PIN27_Low (0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN27_High (1UL) /*!< Pin driver is high */

/* Bit 26 : Pin 26 */
#define GPIO_OUT_PIN26_Pos (26UL) /*!< Position of PIN26 field. */
#define GPIO_OUT_PIN26_Msk (0x1UL << GPIO_OUT_PIN26_Pos) /*!< Bit mask of PIN26 field. */
#define GPIO_OUT_PIN26_Low (0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN26_High (1UL) /*!< Pin driver is high */

/* Bit 25 : Pin 25 */
#define GPIO_OUT_PIN25_Pos (25UL) /*!< Position of PIN25 field. */
#define GPIO_OUT_PIN25_Msk (0x1UL << GPIO_OUT_PIN25_Pos) /*!< Bit mask of PIN25 field. */
#define GPIO_OUT_PIN25_Low (0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN25_High (1UL) /*!< Pin driver is high */

/* Bit 24 : Pin 24 */
#define GPIO_OUT_PIN24_Pos (24UL) /*!< Position of PIN24 field. */
#define GPIO_OUT_PIN24_Msk (0x1UL << GPIO_OUT_PIN24_Pos) /*!< Bit mask of PIN24 field. */
#define GPIO_OUT_PIN24_Low (0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN24_High (1UL) /*!< Pin driver is high */

/* Bit 23 : Pin 23 */
#define GPIO_OUT_PIN23_Pos (23UL) /*!< Position of PIN23 field. */
#define GPIO_OUT_PIN23_Msk (0x1UL << GPIO_OUT_PIN23_Pos) /*!< Bit mask of PIN23 field. */
#define GPIO_OUT_PIN23_Low (0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN23_High (1UL) /*!< Pin driver is high */

/* Bit 22 : Pin 22 */
#define GPIO_OUT_PIN22_Pos (22UL) /*!< Position of PIN22 field. */
#define GPIO_OUT_PIN22_Msk (0x1UL << GPIO_OUT_PIN22_Pos) /*!< Bit mask of PIN22 field. */
#define GPIO_OUT_PIN22_Low (0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN22_High (1UL) /*!< Pin driver is high */

/* Bit 21 : Pin 21 */
#define GPIO_OUT_PIN21_Pos (21UL) /*!< Position of PIN21 field. */
#define GPIO_OUT_PIN21_Msk (0x1UL << GPIO_OUT_PIN21_Pos) /*!< Bit mask of PIN21 field. */
#define GPIO_OUT_PIN21_Low (0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN21_High (1UL) /*!< Pin driver is high */

/* Bit 20 : Pin 20 */
#define GPIO_OUT_PIN20_Pos (20UL) /*!< Position of PIN20 field. */
#define GPIO_OUT_PIN20_Msk (0x1UL << GPIO_OUT_PIN20_Pos) /*!< Bit mask of PIN20 field. */
#define GPIO_OUT_PIN20_Low (0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN20_High (1UL) /*!< Pin driver is high */

/* Bit 19 : Pin 19 */
#define GPIO_OUT_PIN19_Pos (19UL) /*!< Position of PIN19 field. */
#define GPIO_OUT_PIN19_Msk (0x1UL << GPIO_OUT_PIN19_Pos) /*!< Bit mask of PIN19 field. */
#define GPIO_OUT_PIN19_Low (0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN19_High (1UL) /*!< Pin driver is high */

/* Bit 18 : Pin 18 */
#define GPIO_OUT_PIN18_Pos (18UL) /*!< Position of PIN18 field. */
#define GPIO_OUT_PIN18_Msk (0x1UL << GPIO_OUT_PIN18_Pos) /*!< Bit mask of PIN18 field. */
#define GPIO_OUT_PIN18_Low (0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN18_High (1UL) /*!< Pin driver is high */

/* Bit 17 : Pin 17 */
#define GPIO_OUT_PIN17_Pos (17UL) /*!< Position of PIN17 field. */
#define GPIO_OUT_PIN17_Msk (0x1UL << GPIO_OUT_PIN17_Pos) /*!< Bit mask of PIN17 field. */
#define GPIO_OUT_PIN17_Low (0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN17_High (1UL) /*!< Pin driver is high */

/* Bit 16 : Pin 16 */
#define GPIO_OUT_PIN16_Pos (16UL) /*!< Position of PIN16 field. */
#define GPIO_OUT_PIN16_Msk (0x1UL << GPIO_OUT_PIN16_Pos) /*!< Bit mask of PIN16 field. */
#define GPIO_OUT_PIN16_Low (0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN16_High (1UL) /*!< Pin driver is high */

/* Bit 15 : Pin 15 */
#define GPIO_OUT_PIN15_Pos (15UL) /*!< Position of PIN15 field. */
#define GPIO_OUT_PIN15_Msk (0x1UL << GPIO_OUT_PIN15_Pos) /*!< Bit mask of PIN15 field. */
#define GPIO_OUT_PIN15_Low (0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN15_High (1UL) /*!< Pin driver is high */

/* Bit 14 : Pin 14 */
#define GPIO_OUT_PIN14_Pos (14UL) /*!< Position of PIN14 field. */
#define GPIO_OUT_PIN14_Msk (0x1UL << GPIO_OUT_PIN14_Pos) /*!< Bit mask of PIN14 field. */
#define GPIO_OUT_PIN14_Low (0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN14_High (1UL) /*!< Pin driver is high */

/* Bit 13 : Pin 13 */
#define GPIO_OUT_PIN13_Pos (13UL) /*!< Position of PIN13 field. */
#define GPIO_OUT_PIN13_Msk (0x1UL << GPIO_OUT_PIN13_Pos) /*!< Bit mask of PIN13 field. */
#define GPIO_OUT_PIN13_Low (0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN13_High (1UL) /*!< Pin driver is high */

/* Bit 12 : Pin 12 */
#define GPIO_OUT_PIN12_Pos (12UL) /*!< Position of PIN12 field. */
#define GPIO_OUT_PIN12_Msk (0x1UL << GPIO_OUT_PIN12_Pos) /*!< Bit mask of PIN12 field. */
#define GPIO_OUT_PIN12_Low (0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN12_High (1UL) /*!< Pin driver is high */

/* Bit 11 : Pin 11 */
#define GPIO_OUT_PIN11_Pos (11UL) /*!< Position of PIN11 field. */
#define GPIO_OUT_PIN11_Msk (0x1UL << GPIO_OUT_PIN11_Pos) /*!< Bit mask of PIN11 field. */
#define GPIO_OUT_PIN11_Low (0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN11_High (1UL) /*!< Pin driver is high */

/* Bit 10 : Pin 10 */
#define GPIO_OUT_PIN10_Pos (10UL) /*!< Position of PIN10 field. */
#define GPIO_OUT_PIN10_Msk (0x1UL << GPIO_OUT_PIN10_Pos) /*!< Bit mask of PIN10 field. */
#define GPIO_OUT_PIN10_Low (0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN10_High (1UL) /*!< Pin driver is high */

/* Bit 9 : Pin 9 */
#define GPIO_OUT_PIN9_Pos (9UL) /*!< Position of PIN9 field. */
#define GPIO_OUT_PIN9_Msk (0x1UL << GPIO_OUT_PIN9_Pos) /*!< Bit mask of PIN9 field. */
#define GPIO_OUT_PIN9_Low (0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN9_High (1UL) /*!< Pin driver is high */

/* Bit 8 : Pin 8 */
#define GPIO_OUT_PIN8_Pos (8UL) /*!< Position of PIN8 field. */
#define GPIO_OUT_PIN8_Msk (0x1UL << GPIO_OUT_PIN8_Pos) /*!< Bit mask of PIN8 field. */
#define GPIO_OUT_PIN8_Low (0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN8_High (1UL) /*!< Pin driver is high */

/* Bit 7 : Pin 7 */
#define GPIO_OUT_PIN7_Pos (7UL) /*!< Position of PIN7 field. */
#define GPIO_OUT_PIN7_Msk (0x1UL << GPIO_OUT_PIN7_Pos) /*!< Bit mask of PIN7 field. */
#define GPIO_OUT_PIN7_Low (0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN7_High (1UL) /*!< Pin driver is high */

/* Bit 6 : Pin 6 */
#define GPIO_OUT_PIN6_Pos (6UL) /*!< Position of PIN6 field. */
#define GPIO_OUT_PIN6_Msk (0x1UL << GPIO_OUT_PIN6_Pos) /*!< Bit mask of PIN6 field. */
#define GPIO_OUT_PIN6_Low (0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN6_High (1UL) /*!< Pin driver is high */

/* Bit 5 : Pin 5 */
#define GPIO_OUT_PIN5_Pos (5UL) /*!< Position of PIN5 field. */
#define GPIO_OUT_PIN5_Msk (0x1UL << GPIO_OUT_PIN5_Pos) /*!< Bit mask of PIN5 field. */
#define GPIO_OUT_PIN5_Low (0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN5_High (1UL) /*!< Pin driver is high */

/* Bit 4 : Pin 4 */
#define GPIO_OUT_PIN4_Pos (4UL) /*!< Position of PIN4 field. */
#define GPIO_OUT_PIN4_Msk (0x1UL << GPIO_OUT_PIN4_Pos) /*!< Bit mask of PIN4 field. */
#define GPIO_OUT_PIN4_Low (0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN4_High (1UL) /*!< Pin driver is high */

/* Bit 3 : Pin 3 */
#define GPIO_OUT_PIN3_Pos (3UL) /*!< Position of PIN3 field. */
#define GPIO_OUT_PIN3_Msk (0x1UL << GPIO_OUT_PIN3_Pos) /*!< Bit mask of PIN3 field. */
#define GPIO_OUT_PIN3_Low (0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN3_High (1UL) /*!< Pin driver is high */

/* Bit 2 : Pin 2 */
#define GPIO_OUT_PIN2_Pos (2UL) /*!< Position of PIN2 field. */
#define GPIO_OUT_PIN2_Msk (0x1UL << GPIO_OUT_PIN2_Pos) /*!< Bit mask of PIN2 field. */
#define GPIO_OUT_PIN2_Low (0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN2_High (1UL) /*!< Pin driver is high */

/* Bit 1 : Pin 1 */
#define GPIO_OUT_PIN1_Pos (1UL) /*!< Position of PIN1 field. */
#define GPIO_OUT_PIN1_Msk (0x1UL << GPIO_OUT_PIN1_Pos) /*!< Bit mask of PIN1 field. */
#define GPIO_OUT_PIN1_Low (0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN1_High (1UL) /*!< Pin driver is high */

/* Bit 0 : Pin 0 */
#define GPIO_OUT_PIN0_Pos (0UL) /*!< Position of PIN0 field. */
#define GPIO_OUT_PIN0_Msk (0x1UL << GPIO_OUT_PIN0_Pos) /*!< Bit mask of PIN0 field. */
#define GPIO_OUT_PIN0_Low (0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN0_High (1UL) /*!< Pin driver is high */

/* Register: GPIO_OUTSET */
/* Description: Set individual bits in GPIO port */

/* Bit 31 : Pin 31 */
#define GPIO_OUTSET_PIN31_Pos (31UL) /*!< Position of PIN31 field. */
#define GPIO_OUTSET_PIN31_Msk (0x1UL << GPIO_OUTSET_PIN31_Pos) /*!< Bit mask of PIN31 field. */
#define GPIO_OUTSET_PIN31_Low (0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN31_High (1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN31_Set (1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 30 : Pin 30 */
#define GPIO_OUTSET_PIN30_Pos (30UL) /*!< Position of PIN30 field. */
#define GPIO_OUTSET_PIN30_Msk (0x1UL << GPIO_OUTSET_PIN30_Pos) /*!< Bit mask of PIN30 field. */
#define GPIO_OUTSET_PIN30_Low (0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN30_High (1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN30_Set (1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 29 : Pin 29 */
#define GPIO_OUTSET_PIN29_Pos (29UL) /*!< Position of PIN29 field. */
#define GPIO_OUTSET_PIN29_Msk (0x1UL << GPIO_OUTSET_PIN29_Pos) /*!< Bit mask of PIN29 field. */
#define GPIO_OUTSET_PIN29_Low (0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN29_High (1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN29_Set (1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 28 : Pin 28 */
#define GPIO_OUTSET_PIN28_Pos (28UL) /*!< Position of PIN28 field. */
#define GPIO_OUTSET_PIN28_Msk (0x1UL << GPIO_OUTSET_PIN28_Pos) /*!< Bit mask of PIN28 field. */
#define GPIO_OUTSET_PIN28_Low (0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN28_High (1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN28_Set (1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 27 : Pin 27 */
#define GPIO_OUTSET_PIN27_Pos (27UL) /*!< Position of PIN27 field. */
#define GPIO_OUTSET_PIN27_Msk (0x1UL << GPIO_OUTSET_PIN27_Pos) /*!< Bit mask of PIN27 field. */
#define GPIO_OUTSET_PIN27_Low (0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN27_High (1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN27_Set (1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 26 : Pin 26 */
#define GPIO_OUTSET_PIN26_Pos (26UL) /*!< Position of PIN26 field. */
#define GPIO_OUTSET_PIN26_Msk (0x1UL << GPIO_OUTSET_PIN26_Pos) /*!< Bit mask of PIN26 field. */
#define GPIO_OUTSET_PIN26_Low (0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN26_High (1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN26_Set (1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 25 : Pin 25 */
#define GPIO_OUTSET_PIN25_Pos (25UL) /*!< Position of PIN25 field. */
#define GPIO_OUTSET_PIN25_Msk (0x1UL << GPIO_OUTSET_PIN25_Pos) /*!< Bit mask of PIN25 field. */
#define GPIO_OUTSET_PIN25_Low (0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN25_High (1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN25_Set (1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 24 : Pin 24 */
#define GPIO_OUTSET_PIN24_Pos (24UL) /*!< Position of PIN24 field. */
#define GPIO_OUTSET_PIN24_Msk (0x1UL << GPIO_OUTSET_PIN24_Pos) /*!< Bit mask of PIN24 field. */
#define GPIO_OUTSET_PIN24_Low (0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN24_High (1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN24_Set (1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 23 : Pin 23 */
#define GPIO_OUTSET_PIN23_Pos (23UL) /*!< Position of PIN23 field. */
#define GPIO_OUTSET_PIN23_Msk (0x1UL << GPIO_OUTSET_PIN23_Pos) /*!< Bit mask of PIN23 field. */
#define GPIO_OUTSET_PIN23_Low (0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN23_High (1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN23_Set (1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 22 : Pin 22 */
#define GPIO_OUTSET_PIN22_Pos (22UL) /*!< Position of PIN22 field. */
#define GPIO_OUTSET_PIN22_Msk (0x1UL << GPIO_OUTSET_PIN22_Pos) /*!< Bit mask of PIN22 field. */
#define GPIO_OUTSET_PIN22_Low (0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN22_High (1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN22_Set (1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 21 : Pin 21 */
#define GPIO_OUTSET_PIN21_Pos (21UL) /*!< Position of PIN21 field. */
#define GPIO_OUTSET_PIN21_Msk (0x1UL << GPIO_OUTSET_PIN21_Pos) /*!< Bit mask of PIN21 field. */
#define GPIO_OUTSET_PIN21_Low (0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN21_High (1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN21_Set (1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 20 : Pin 20 */
#define GPIO_OUTSET_PIN20_Pos (20UL) /*!< Position of PIN20 field. */
#define GPIO_OUTSET_PIN20_Msk (0x1UL << GPIO_OUTSET_PIN20_Pos) /*!< Bit mask of PIN20 field. */
#define GPIO_OUTSET_PIN20_Low (0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN20_High (1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN20_Set (1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 19 : Pin 19 */
#define GPIO_OUTSET_PIN19_Pos (19UL) /*!< Position of PIN19 field. */
#define GPIO_OUTSET_PIN19_Msk (0x1UL << GPIO_OUTSET_PIN19_Pos) /*!< Bit mask of PIN19 field. */
#define GPIO_OUTSET_PIN19_Low (0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN19_High (1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN19_Set (1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 18 : Pin 18 */
#define GPIO_OUTSET_PIN18_Pos (18UL) /*!< Position of PIN18 field. */
#define GPIO_OUTSET_PIN18_Msk (0x1UL << GPIO_OUTSET_PIN18_Pos) /*!< Bit mask of PIN18 field. */
#define GPIO_OUTSET_PIN18_Low (0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN18_High (1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN18_Set (1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 17 : Pin 17 */
#define GPIO_OUTSET_PIN17_Pos (17UL) /*!< Position of PIN17 field. */
#define GPIO_OUTSET_PIN17_Msk (0x1UL << GPIO_OUTSET_PIN17_Pos) /*!< Bit mask of PIN17 field. */
#define GPIO_OUTSET_PIN17_Low (0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN17_High (1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN17_Set (1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 16 : Pin 16 */
#define GPIO_OUTSET_PIN16_Pos (16UL) /*!< Position of PIN16 field. */
#define GPIO_OUTSET_PIN16_Msk (0x1UL << GPIO_OUTSET_PIN16_Pos) /*!< Bit mask of PIN16 field. */
#define GPIO_OUTSET_PIN16_Low (0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN16_High (1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN16_Set (1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 15 : Pin 15 */
#define GPIO_OUTSET_PIN15_Pos (15UL) /*!< Position of PIN15 field. */
#define GPIO_OUTSET_PIN15_Msk (0x1UL << GPIO_OUTSET_PIN15_Pos) /*!< Bit mask of PIN15 field. */
#define GPIO_OUTSET_PIN15_Low (0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN15_High (1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN15_Set (1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 14 : Pin 14 */
#define GPIO_OUTSET_PIN14_Pos (14UL) /*!< Position of PIN14 field. */
#define GPIO_OUTSET_PIN14_Msk (0x1UL << GPIO_OUTSET_PIN14_Pos) /*!< Bit mask of PIN14 field. */
#define GPIO_OUTSET_PIN14_Low (0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN14_High (1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN14_Set (1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 13 : Pin 13 */
#define GPIO_OUTSET_PIN13_Pos (13UL) /*!< Position of PIN13 field. */
#define GPIO_OUTSET_PIN13_Msk (0x1UL << GPIO_OUTSET_PIN13_Pos) /*!< Bit mask of PIN13 field. */
#define GPIO_OUTSET_PIN13_Low (0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN13_High (1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN13_Set (1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 12 : Pin 12 */
#define GPIO_OUTSET_PIN12_Pos (12UL) /*!< Position of PIN12 field. */
#define GPIO_OUTSET_PIN12_Msk (0x1UL << GPIO_OUTSET_PIN12_Pos) /*!< Bit mask of PIN12 field. */
#define GPIO_OUTSET_PIN12_Low (0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN12_High (1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN12_Set (1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 11 : Pin 11 */
#define GPIO_OUTSET_PIN11_Pos (11UL) /*!< Position of PIN11 field. */
#define GPIO_OUTSET_PIN11_Msk (0x1UL << GPIO_OUTSET_PIN11_Pos) /*!< Bit mask of PIN11 field. */
#define GPIO_OUTSET_PIN11_Low (0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN11_High (1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN11_Set (1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 10 : Pin 10 */
#define GPIO_OUTSET_PIN10_Pos (10UL) /*!< Position of PIN10 field. */
#define GPIO_OUTSET_PIN10_Msk (0x1UL << GPIO_OUTSET_PIN10_Pos) /*!< Bit mask of PIN10 field. */
#define GPIO_OUTSET_PIN10_Low (0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN10_High (1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN10_Set (1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 9 : Pin 9 */
#define GPIO_OUTSET_PIN9_Pos (9UL) /*!< Position of PIN9 field. */
#define GPIO_OUTSET_PIN9_Msk (0x1UL << GPIO_OUTSET_PIN9_Pos) /*!< Bit mask of PIN9 field. */
#define GPIO_OUTSET_PIN9_Low (0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN9_High (1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN9_Set (1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 8 : Pin 8 */
#define GPIO_OUTSET_PIN8_Pos (8UL) /*!< Position of PIN8 field. */
#define GPIO_OUTSET_PIN8_Msk (0x1UL << GPIO_OUTSET_PIN8_Pos) /*!< Bit mask of PIN8 field. */
#define GPIO_OUTSET_PIN8_Low (0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN8_High (1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN8_Set (1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 7 : Pin 7 */
#define GPIO_OUTSET_PIN7_Pos (7UL) /*!< Position of PIN7 field. */
#define GPIO_OUTSET_PIN7_Msk (0x1UL << GPIO_OUTSET_PIN7_Pos) /*!< Bit mask of PIN7 field. */
#define GPIO_OUTSET_PIN7_Low (0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN7_High (1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN7_Set (1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 6 : Pin 6 */
#define GPIO_OUTSET_PIN6_Pos (6UL) /*!< Position of PIN6 field. */
#define GPIO_OUTSET_PIN6_Msk (0x1UL << GPIO_OUTSET_PIN6_Pos) /*!< Bit mask of PIN6 field. */
#define GPIO_OUTSET_PIN6_Low (0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN6_High (1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN6_Set (1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 5 : Pin 5 */
#define GPIO_OUTSET_PIN5_Pos (5UL) /*!< Position of PIN5 field. */
#define GPIO_OUTSET_PIN5_Msk (0x1UL << GPIO_OUTSET_PIN5_Pos) /*!< Bit mask of PIN5 field. */
#define GPIO_OUTSET_PIN5_Low (0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN5_High (1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN5_Set (1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 4 : Pin 4 */
#define GPIO_OUTSET_PIN4_Pos (4UL) /*!< Position of PIN4 field. */
#define GPIO_OUTSET_PIN4_Msk (0x1UL << GPIO_OUTSET_PIN4_Pos) /*!< Bit mask of PIN4 field. */
#define GPIO_OUTSET_PIN4_Low (0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN4_High (1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN4_Set (1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 3 : Pin 3 */
#define GPIO_OUTSET_PIN3_Pos (3UL) /*!< Position of PIN3 field. */
#define GPIO_OUTSET_PIN3_Msk (0x1UL << GPIO_OUTSET_PIN3_Pos) /*!< Bit mask of PIN3 field. */
#define GPIO_OUTSET_PIN3_Low (0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN3_High (1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN3_Set (1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 2 : Pin 2 */
#define GPIO_OUTSET_PIN2_Pos (2UL) /*!< Position of PIN2 field. */
#define GPIO_OUTSET_PIN2_Msk (0x1UL << GPIO_OUTSET_PIN2_Pos) /*!< Bit mask of PIN2 field. */
#define GPIO_OUTSET_PIN2_Low (0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN2_High (1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN2_Set (1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 1 : Pin 1 */
#define GPIO_OUTSET_PIN1_Pos (1UL) /*!< Position of PIN1 field. */
#define GPIO_OUTSET_PIN1_Msk (0x1UL << GPIO_OUTSET_PIN1_Pos) /*!< Bit mask of PIN1 field. */
#define GPIO_OUTSET_PIN1_Low (0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN1_High (1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN1_Set (1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 0 : Pin 0 */
#define GPIO_OUTSET_PIN0_Pos (0UL) /*!< Position of PIN0 field. */
#define GPIO_OUTSET_PIN0_Msk (0x1UL << GPIO_OUTSET_PIN0_Pos) /*!< Bit mask of PIN0 field. */
#define GPIO_OUTSET_PIN0_Low (0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN0_High (1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN0_Set (1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Register: GPIO_OUTCLR */
/* Description: Clear individual bits in GPIO port */

/* Bit 31 : Pin 31 */
#define GPIO_OUTCLR_PIN31_Pos (31UL) /*!< Position of PIN31 field. */
#define GPIO_OUTCLR_PIN31_Msk (0x1UL << GPIO_OUTCLR_PIN31_Pos) /*!< Bit mask of PIN31 field. */
#define GPIO_OUTCLR_PIN31_Low (0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN31_High (1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN31_Clear (1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 30 : Pin 30 */
#define GPIO_OUTCLR_PIN30_Pos (30UL) /*!< Position of PIN30 field. */
#define GPIO_OUTCLR_PIN30_Msk (0x1UL << GPIO_OUTCLR_PIN30_Pos) /*!< Bit mask of PIN30 field. */
#define GPIO_OUTCLR_PIN30_Low (0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN30_High (1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN30_Clear (1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 29 : Pin 29 */
#define GPIO_OUTCLR_PIN29_Pos (29UL) /*!< Position of PIN29 field. */
#define GPIO_OUTCLR_PIN29_Msk (0x1UL << GPIO_OUTCLR_PIN29_Pos) /*!< Bit mask of PIN29 field. */
#define GPIO_OUTCLR_PIN29_Low (0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN29_High (1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN29_Clear (1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 28 : Pin 28 */
#define GPIO_OUTCLR_PIN28_Pos (28UL) /*!< Position of PIN28 field. */
#define GPIO_OUTCLR_PIN28_Msk (0x1UL << GPIO_OUTCLR_PIN28_Pos) /*!< Bit mask of PIN28 field. */
#define GPIO_OUTCLR_PIN28_Low (0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN28_High (1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN28_Clear (1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 27 : Pin 27 */
#define GPIO_OUTCLR_PIN27_Pos (27UL) /*!< Position of PIN27 field. */
#define GPIO_OUTCLR_PIN27_Msk (0x1UL << GPIO_OUTCLR_PIN27_Pos) /*!< Bit mask of PIN27 field. */
#define GPIO_OUTCLR_PIN27_Low (0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN27_High (1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN27_Clear (1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 26 : Pin 26 */
#define GPIO_OUTCLR_PIN26_Pos (26UL) /*!< Position of PIN26 field. */
#define GPIO_OUTCLR_PIN26_Msk (0x1UL << GPIO_OUTCLR_PIN26_Pos) /*!< Bit mask of PIN26 field. */
#define GPIO_OUTCLR_PIN26_Low (0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN26_High (1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN26_Clear (1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 25 : Pin 25 */
#define GPIO_OUTCLR_PIN25_Pos (25UL) /*!< Position of PIN25 field. */
#define GPIO_OUTCLR_PIN25_Msk (0x1UL << GPIO_OUTCLR_PIN25_Pos) /*!< Bit mask of PIN25 field. */
#define GPIO_OUTCLR_PIN25_Low (0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN25_High (1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN25_Clear (1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 24 : Pin 24 */
#define GPIO_OUTCLR_PIN24_Pos (24UL) /*!< Position of PIN24 field. */
#define GPIO_OUTCLR_PIN24_Msk (0x1UL << GPIO_OUTCLR_PIN24_Pos) /*!< Bit mask of PIN24 field. */
#define GPIO_OUTCLR_PIN24_Low (0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN24_High (1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN24_Clear (1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 23 : Pin 23 */
#define GPIO_OUTCLR_PIN23_Pos (23UL) /*!< Position of PIN23 field. */
#define GPIO_OUTCLR_PIN23_Msk (0x1UL << GPIO_OUTCLR_PIN23_Pos) /*!< Bit mask of PIN23 field. */
#define GPIO_OUTCLR_PIN23_Low (0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN23_High (1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN23_Clear (1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 22 : Pin 22 */
#define GPIO_OUTCLR_PIN22_Pos (22UL) /*!< Position of PIN22 field. */
#define GPIO_OUTCLR_PIN22_Msk (0x1UL << GPIO_OUTCLR_PIN22_Pos) /*!< Bit mask of PIN22 field. */
#define GPIO_OUTCLR_PIN22_Low (0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN22_High (1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN22_Clear (1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 21 : Pin 21 */
#define GPIO_OUTCLR_PIN21_Pos (21UL) /*!< Position of PIN21 field. */
#define GPIO_OUTCLR_PIN21_Msk (0x1UL << GPIO_OUTCLR_PIN21_Pos) /*!< Bit mask of PIN21 field. */
#define GPIO_OUTCLR_PIN21_Low (0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN21_High (1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN21_Clear (1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 20 : Pin 20 */
#define GPIO_OUTCLR_PIN20_Pos (20UL) /*!< Position of PIN20 field. */
#define GPIO_OUTCLR_PIN20_Msk (0x1UL << GPIO_OUTCLR_PIN20_Pos) /*!< Bit mask of PIN20 field. */
#define GPIO_OUTCLR_PIN20_Low (0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN20_High (1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN20_Clear (1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 19 : Pin 19 */
#define GPIO_OUTCLR_PIN19_Pos (19UL) /*!< Position of PIN19 field. */
#define GPIO_OUTCLR_PIN19_Msk (0x1UL << GPIO_OUTCLR_PIN19_Pos) /*!< Bit mask of PIN19 field. */
#define GPIO_OUTCLR_PIN19_Low (0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN19_High (1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN19_Clear (1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 18 : Pin 18 */
#define GPIO_OUTCLR_PIN18_Pos (18UL) /*!< Position of PIN18 field. */
#define GPIO_OUTCLR_PIN18_Msk (0x1UL << GPIO_OUTCLR_PIN18_Pos) /*!< Bit mask of PIN18 field. */
#define GPIO_OUTCLR_PIN18_Low (0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN18_High (1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN18_Clear (1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 17 : Pin 17 */
#define GPIO_OUTCLR_PIN17_Pos (17UL) /*!< Position of PIN17 field. */
#define GPIO_OUTCLR_PIN17_Msk (0x1UL << GPIO_OUTCLR_PIN17_Pos) /*!< Bit mask of PIN17 field. */
#define GPIO_OUTCLR_PIN17_Low (0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN17_High (1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN17_Clear (1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 16 : Pin 16 */
#define GPIO_OUTCLR_PIN16_Pos (16UL) /*!< Position of PIN16 field. */
#define GPIO_OUTCLR_PIN16_Msk (0x1UL << GPIO_OUTCLR_PIN16_Pos) /*!< Bit mask of PIN16 field. */
#define GPIO_OUTCLR_PIN16_Low (0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN16_High (1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN16_Clear (1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 15 : Pin 15 */
#define GPIO_OUTCLR_PIN15_Pos (15UL) /*!< Position of PIN15 field. */
#define GPIO_OUTCLR_PIN15_Msk (0x1UL << GPIO_OUTCLR_PIN15_Pos) /*!< Bit mask of PIN15 field. */
#define GPIO_OUTCLR_PIN15_Low (0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN15_High (1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN15_Clear (1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 14 : Pin 14 */
#define GPIO_OUTCLR_PIN14_Pos (14UL) /*!< Position of PIN14 field. */
#define GPIO_OUTCLR_PIN14_Msk (0x1UL << GPIO_OUTCLR_PIN14_Pos) /*!< Bit mask of PIN14 field. */
#define GPIO_OUTCLR_PIN14_Low (0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN14_High (1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN14_Clear (1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 13 : Pin 13 */
#define GPIO_OUTCLR_PIN13_Pos (13UL) /*!< Position of PIN13 field. */
#define GPIO_OUTCLR_PIN13_Msk (0x1UL << GPIO_OUTCLR_PIN13_Pos) /*!< Bit mask of PIN13 field. */
#define GPIO_OUTCLR_PIN13_Low (0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN13_High (1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN13_Clear (1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 12 : Pin 12 */
#define GPIO_OUTCLR_PIN12_Pos (12UL) /*!< Position of PIN12 field. */
#define GPIO_OUTCLR_PIN12_Msk (0x1UL << GPIO_OUTCLR_PIN12_Pos) /*!< Bit mask of PIN12 field. */
#define GPIO_OUTCLR_PIN12_Low (0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN12_High (1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN12_Clear (1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 11 : Pin 11 */
#define GPIO_OUTCLR_PIN11_Pos (11UL) /*!< Position of PIN11 field. */
#define GPIO_OUTCLR_PIN11_Msk (0x1UL << GPIO_OUTCLR_PIN11_Pos) /*!< Bit mask of PIN11 field. */
#define GPIO_OUTCLR_PIN11_Low (0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN11_High (1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN11_Clear (1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 10 : Pin 10 */
#define GPIO_OUTCLR_PIN10_Pos (10UL) /*!< Position of PIN10 field. */
#define GPIO_OUTCLR_PIN10_Msk (0x1UL << GPIO_OUTCLR_PIN10_Pos) /*!< Bit mask of PIN10 field. */
#define GPIO_OUTCLR_PIN10_Low (0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN10_High (1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN10_Clear (1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 9 : Pin 9 */
#define GPIO_OUTCLR_PIN9_Pos (9UL) /*!< Position of PIN9 field. */
#define GPIO_OUTCLR_PIN9_Msk (0x1UL << GPIO_OUTCLR_PIN9_Pos) /*!< Bit mask of PIN9 field. */
#define GPIO_OUTCLR_PIN9_Low (0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN9_High (1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN9_Clear (1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 8 : Pin 8 */
#define GPIO_OUTCLR_PIN8_Pos (8UL) /*!< Position of PIN8 field. */
#define GPIO_OUTCLR_PIN8_Msk (0x1UL << GPIO_OUTCLR_PIN8_Pos) /*!< Bit mask of PIN8 field. */
#define GPIO_OUTCLR_PIN8_Low (0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN8_High (1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN8_Clear (1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 7 : Pin 7 */
#define GPIO_OUTCLR_PIN7_Pos (7UL) /*!< Position of PIN7 field. */
#define GPIO_OUTCLR_PIN7_Msk (0x1UL << GPIO_OUTCLR_PIN7_Pos) /*!< Bit mask of PIN7 field. */
#define GPIO_OUTCLR_PIN7_Low (0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN7_High (1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN7_Clear (1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 6 : Pin 6 */
#define GPIO_OUTCLR_PIN6_Pos (6UL) /*!< Position of PIN6 field. */
#define GPIO_OUTCLR_PIN6_Msk (0x1UL << GPIO_OUTCLR_PIN6_Pos) /*!< Bit mask of PIN6 field. */
#define GPIO_OUTCLR_PIN6_Low (0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN6_High (1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN6_Clear (1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 5 : Pin 5 */
#define GPIO_OUTCLR_PIN5_Pos (5UL) /*!< Position of PIN5 field. */
#define GPIO_OUTCLR_PIN5_Msk (0x1UL << GPIO_OUTCLR_PIN5_Pos) /*!< Bit mask of PIN5 field. */
#define GPIO_OUTCLR_PIN5_Low (0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN5_High (1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN5_Clear (1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 4 : Pin 4 */
#define GPIO_OUTCLR_PIN4_Pos (4UL) /*!< Position of PIN4 field. */
#define GPIO_OUTCLR_PIN4_Msk (0x1UL << GPIO_OUTCLR_PIN4_Pos) /*!< Bit mask of PIN4 field. */
#define GPIO_OUTCLR_PIN4_Low (0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN4_High (1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN4_Clear (1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 3 : Pin 3 */
#define GPIO_OUTCLR_PIN3_Pos (3UL) /*!< Position of PIN3 field. */
#define GPIO_OUTCLR_PIN3_Msk (0x1UL << GPIO_OUTCLR_PIN3_Pos) /*!< Bit mask of PIN3 field. */
#define GPIO_OUTCLR_PIN3_Low (0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN3_High (1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN3_Clear (1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 2 : Pin 2 */
#define GPIO_OUTCLR_PIN2_Pos (2UL) /*!< Position of PIN2 field. */
#define GPIO_OUTCLR_PIN2_Msk (0x1UL << GPIO_OUTCLR_PIN2_Pos) /*!< Bit mask of PIN2 field. */
#define GPIO_OUTCLR_PIN2_Low (0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN2_High (1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN2_Clear (1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 1 : Pin 1 */
#define GPIO_OUTCLR_PIN1_Pos (1UL) /*!< Position of PIN1 field. */
#define GPIO_OUTCLR_PIN1_Msk (0x1UL << GPIO_OUTCLR_PIN1_Pos) /*!< Bit mask of PIN1 field. */
#define GPIO_OUTCLR_PIN1_Low (0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN1_High (1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN1_Clear (1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 0 : Pin 0 */
#define GPIO_OUTCLR_PIN0_Pos (0UL) /*!< Position of PIN0 field. */
#define GPIO_OUTCLR_PIN0_Msk (0x1UL << GPIO_OUTCLR_PIN0_Pos) /*!< Bit mask of PIN0 field. */
#define GPIO_OUTCLR_PIN0_Low (0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN0_High (1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN0_Clear (1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Register: GPIO_IN */
/* Description: Read GPIO port */

/* Bit 31 : Pin 31 */
#define GPIO_IN_PIN31_Pos (31UL) /*!< Position of PIN31 field. */
#define GPIO_IN_PIN31_Msk (0x1UL << GPIO_IN_PIN31_Pos) /*!< Bit mask of PIN31 field. */
#define GPIO_IN_PIN31_Low (0UL) /*!< Pin input is low */
#define GPIO_IN_PIN31_High (1UL) /*!< Pin input is high */

/* Bit 30 : Pin 30 */
#define GPIO_IN_PIN30_Pos (30UL) /*!< Position of PIN30 field. */
#define GPIO_IN_PIN30_Msk (0x1UL << GPIO_IN_PIN30_Pos) /*!< Bit mask of PIN30 field. */
#define GPIO_IN_PIN30_Low (0UL) /*!< Pin input is low */
#define GPIO_IN_PIN30_High (1UL) /*!< Pin input is high */

/* Bit 29 : Pin 29 */
#define GPIO_IN_PIN29_Pos (29UL) /*!< Position of PIN29 field. */
#define GPIO_IN_PIN29_Msk (0x1UL << GPIO_IN_PIN29_Pos) /*!< Bit mask of PIN29 field. */
#define GPIO_IN_PIN29_Low (0UL) /*!< Pin input is low */
#define GPIO_IN_PIN29_High (1UL) /*!< Pin input is high */

/* Bit 28 : Pin 28 */
#define GPIO_IN_PIN28_Pos (28UL) /*!< Position of PIN28 field. */
#define GPIO_IN_PIN28_Msk (0x1UL << GPIO_IN_PIN28_Pos) /*!< Bit mask of PIN28 field. */
#define GPIO_IN_PIN28_Low (0UL) /*!< Pin input is low */
#define GPIO_IN_PIN28_High (1UL) /*!< Pin input is high */

/* Bit 27 : Pin 27 */
#define GPIO_IN_PIN27_Pos (27UL) /*!< Position of PIN27 field. */
#define GPIO_IN_PIN27_Msk (0x1UL << GPIO_IN_PIN27_Pos) /*!< Bit mask of PIN27 field. */
#define GPIO_IN_PIN27_Low (0UL) /*!< Pin input is low */
#define GPIO_IN_PIN27_High (1UL) /*!< Pin input is high */

/* Bit 26 : Pin 26 */
#define GPIO_IN_PIN26_Pos (26UL) /*!< Position of PIN26 field. */
#define GPIO_IN_PIN26_Msk (0x1UL << GPIO_IN_PIN26_Pos) /*!< Bit mask of PIN26 field. */
#define GPIO_IN_PIN26_Low (0UL) /*!< Pin input is low */
#define GPIO_IN_PIN26_High (1UL) /*!< Pin input is high */

/* Bit 25 : Pin 25 */
#define GPIO_IN_PIN25_Pos (25UL) /*!< Position of PIN25 field. */
#define GPIO_IN_PIN25_Msk (0x1UL << GPIO_IN_PIN25_Pos) /*!< Bit mask of PIN25 field. */
#define GPIO_IN_PIN25_Low (0UL) /*!< Pin input is low */
#define GPIO_IN_PIN25_High (1UL) /*!< Pin input is high */

/* Bit 24 : Pin 24 */
#define GPIO_IN_PIN24_Pos (24UL) /*!< Position of PIN24 field. */
#define GPIO_IN_PIN24_Msk (0x1UL << GPIO_IN_PIN24_Pos) /*!< Bit mask of PIN24 field. */
#define GPIO_IN_PIN24_Low (0UL) /*!< Pin input is low */
#define GPIO_IN_PIN24_High (1UL) /*!< Pin input is high */

/* Bit 23 : Pin 23 */
#define GPIO_IN_PIN23_Pos (23UL) /*!< Position of PIN23 field. */
#define GPIO_IN_PIN23_Msk (0x1UL << GPIO_IN_PIN23_Pos) /*!< Bit mask of PIN23 field. */
#define GPIO_IN_PIN23_Low (0UL) /*!< Pin input is low */
#define GPIO_IN_PIN23_High (1UL) /*!< Pin input is high */

/* Bit 22 : Pin 22 */
#define GPIO_IN_PIN22_Pos (22UL) /*!< Position of PIN22 field. */
#define GPIO_IN_PIN22_Msk (0x1UL << GPIO_IN_PIN22_Pos) /*!< Bit mask of PIN22 field. */
#define GPIO_IN_PIN22_Low (0UL) /*!< Pin input is low */
#define GPIO_IN_PIN22_High (1UL) /*!< Pin input is high */

/* Bit 21 : Pin 21 */
#define GPIO_IN_PIN21_Pos (21UL) /*!< Position of PIN21 field. */
#define GPIO_IN_PIN21_Msk (0x1UL << GPIO_IN_PIN21_Pos) /*!< Bit mask of PIN21 field. */
#define GPIO_IN_PIN21_Low (0UL) /*!< Pin input is low */
#define GPIO_IN_PIN21_High (1UL) /*!< Pin input is high */

/* Bit 20 : Pin 20 */
#define GPIO_IN_PIN20_Pos (20UL) /*!< Position of PIN20 field. */
#define GPIO_IN_PIN20_Msk (0x1UL << GPIO_IN_PIN20_Pos) /*!< Bit mask of PIN20 field. */
#define GPIO_IN_PIN20_Low (0UL) /*!< Pin input is low */
#define GPIO_IN_PIN20_High (1UL) /*!< Pin input is high */

/* Bit 19 : Pin 19 */
#define GPIO_IN_PIN19_Pos (19UL) /*!< Position of PIN19 field. */
#define GPIO_IN_PIN19_Msk (0x1UL << GPIO_IN_PIN19_Pos) /*!< Bit mask of PIN19 field. */
#define GPIO_IN_PIN19_Low (0UL) /*!< Pin input is low */
#define GPIO_IN_PIN19_High (1UL) /*!< Pin input is high */

/* Bit 18 : Pin 18 */
#define GPIO_IN_PIN18_Pos (18UL) /*!< Position of PIN18 field. */
#define GPIO_IN_PIN18_Msk (0x1UL << GPIO_IN_PIN18_Pos) /*!< Bit mask of PIN18 field. */
#define GPIO_IN_PIN18_Low (0UL) /*!< Pin input is low */
#define GPIO_IN_PIN18_High (1UL) /*!< Pin input is high */

/* Bit 17 : Pin 17 */
#define GPIO_IN_PIN17_Pos (17UL) /*!< Position of PIN17 field. */
#define GPIO_IN_PIN17_Msk (0x1UL << GPIO_IN_PIN17_Pos) /*!< Bit mask of PIN17 field. */
#define GPIO_IN_PIN17_Low (0UL) /*!< Pin input is low */
#define GPIO_IN_PIN17_High (1UL) /*!< Pin input is high */

/* Bit 16 : Pin 16 */
#define GPIO_IN_PIN16_Pos (16UL) /*!< Position of PIN16 field. */
#define GPIO_IN_PIN16_Msk (0x1UL << GPIO_IN_PIN16_Pos) /*!< Bit mask of PIN16 field. */
#define GPIO_IN_PIN16_Low (0UL) /*!< Pin input is low */
#define GPIO_IN_PIN16_High (1UL) /*!< Pin input is high */

/* Bit 15 : Pin 15 */
#define GPIO_IN_PIN15_Pos (15UL) /*!< Position of PIN15 field. */
#define GPIO_IN_PIN15_Msk (0x1UL << GPIO_IN_PIN15_Pos) /*!< Bit mask of PIN15 field. */
#define GPIO_IN_PIN15_Low (0UL) /*!< Pin input is low */
#define GPIO_IN_PIN15_High (1UL) /*!< Pin input is high */

/* Bit 14 : Pin 14 */
#define GPIO_IN_PIN14_Pos (14UL) /*!< Position of PIN14 field. */
#define GPIO_IN_PIN14_Msk (0x1UL << GPIO_IN_PIN14_Pos) /*!< Bit mask of PIN14 field. */
#define GPIO_IN_PIN14_Low (0UL) /*!< Pin input is low */
#define GPIO_IN_PIN14_High (1UL) /*!< Pin input is high */

/* Bit 13 : Pin 13 */
#define GPIO_IN_PIN13_Pos (13UL) /*!< Position of PIN13 field. */
#define GPIO_IN_PIN13_Msk (0x1UL << GPIO_IN_PIN13_Pos) /*!< Bit mask of PIN13 field. */
#define GPIO_IN_PIN13_Low (0UL) /*!< Pin input is low */
#define GPIO_IN_PIN13_High (1UL) /*!< Pin input is high */

/* Bit 12 : Pin 12 */
#define GPIO_IN_PIN12_Pos (12UL) /*!< Position of PIN12 field. */
#define GPIO_IN_PIN12_Msk (0x1UL << GPIO_IN_PIN12_Pos) /*!< Bit mask of PIN12 field. */
#define GPIO_IN_PIN12_Low (0UL) /*!< Pin input is low */
#define GPIO_IN_PIN12_High (1UL) /*!< Pin input is high */

/* Bit 11 : Pin 11 */
#define GPIO_IN_PIN11_Pos (11UL) /*!< Position of PIN11 field. */
#define GPIO_IN_PIN11_Msk (0x1UL << GPIO_IN_PIN11_Pos) /*!< Bit mask of PIN11 field. */
#define GPIO_IN_PIN11_Low (0UL) /*!< Pin input is low */
#define GPIO_IN_PIN11_High (1UL) /*!< Pin input is high */

/* Bit 10 : Pin 10 */
#define GPIO_IN_PIN10_Pos (10UL) /*!< Position of PIN10 field. */
#define GPIO_IN_PIN10_Msk (0x1UL << GPIO_IN_PIN10_Pos) /*!< Bit mask of PIN10 field. */
#define GPIO_IN_PIN10_Low (0UL) /*!< Pin input is low */
#define GPIO_IN_PIN10_High (1UL) /*!< Pin input is high */

/* Bit 9 : Pin 9 */
#define GPIO_IN_PIN9_Pos (9UL) /*!< Position of PIN9 field. */
#define GPIO_IN_PIN9_Msk (0x1UL << GPIO_IN_PIN9_Pos) /*!< Bit mask of PIN9 field. */
#define GPIO_IN_PIN9_Low (0UL) /*!< Pin input is low */
#define GPIO_IN_PIN9_High (1UL) /*!< Pin input is high */

/* Bit 8 : Pin 8 */
#define GPIO_IN_PIN8_Pos (8UL) /*!< Position of PIN8 field. */
#define GPIO_IN_PIN8_Msk (0x1UL << GPIO_IN_PIN8_Pos) /*!< Bit mask of PIN8 field. */
#define GPIO_IN_PIN8_Low (0UL) /*!< Pin input is low */
#define GPIO_IN_PIN8_High (1UL) /*!< Pin input is high */

/* Bit 7 : Pin 7 */
#define GPIO_IN_PIN7_Pos (7UL) /*!< Position of PIN7 field. */
#define GPIO_IN_PIN7_Msk (0x1UL << GPIO_IN_PIN7_Pos) /*!< Bit mask of PIN7 field. */
#define GPIO_IN_PIN7_Low (0UL) /*!< Pin input is low */
#define GPIO_IN_PIN7_High (1UL) /*!< Pin input is high */

/* Bit 6 : Pin 6 */
#define GPIO_IN_PIN6_Pos (6UL) /*!< Position of PIN6 field. */
#define GPIO_IN_PIN6_Msk (0x1UL << GPIO_IN_PIN6_Pos) /*!< Bit mask of PIN6 field. */
#define GPIO_IN_PIN6_Low (0UL) /*!< Pin input is low */
#define GPIO_IN_PIN6_High (1UL) /*!< Pin input is high */

/* Bit 5 : Pin 5 */
#define GPIO_IN_PIN5_Pos (5UL) /*!< Position of PIN5 field. */
#define GPIO_IN_PIN5_Msk (0x1UL << GPIO_IN_PIN5_Pos) /*!< Bit mask of PIN5 field. */
#define GPIO_IN_PIN5_Low (0UL) /*!< Pin input is low */
#define GPIO_IN_PIN5_High (1UL) /*!< Pin input is high */

/* Bit 4 : Pin 4 */
#define GPIO_IN_PIN4_Pos (4UL) /*!< Position of PIN4 field. */
#define GPIO_IN_PIN4_Msk (0x1UL << GPIO_IN_PIN4_Pos) /*!< Bit mask of PIN4 field. */
#define GPIO_IN_PIN4_Low (0UL) /*!< Pin input is low */
#define GPIO_IN_PIN4_High (1UL) /*!< Pin input is high */

/* Bit 3 : Pin 3 */
#define GPIO_IN_PIN3_Pos (3UL) /*!< Position of PIN3 field. */
#define GPIO_IN_PIN3_Msk (0x1UL << GPIO_IN_PIN3_Pos) /*!< Bit mask of PIN3 field. */
#define GPIO_IN_PIN3_Low (0UL) /*!< Pin input is low */
#define GPIO_IN_PIN3_High (1UL) /*!< Pin input is high */

/* Bit 2 : Pin 2 */
#define GPIO_IN_PIN2_Pos (2UL) /*!< Position of PIN2 field. */
#define GPIO_IN_PIN2_Msk (0x1UL << GPIO_IN_PIN2_Pos) /*!< Bit mask of PIN2 field. */
#define GPIO_IN_PIN2_Low (0UL) /*!< Pin input is low */
#define GPIO_IN_PIN2_High (1UL) /*!< Pin input is high */

/* Bit 1 : Pin 1 */
#define GPIO_IN_PIN1_Pos (1UL) /*!< Position of PIN1 field. */
#define GPIO_IN_PIN1_Msk (0x1UL << GPIO_IN_PIN1_Pos) /*!< Bit mask of PIN1 field. */
#define GPIO_IN_PIN1_Low (0UL) /*!< Pin input is low */
#define GPIO_IN_PIN1_High (1UL) /*!< Pin input is high */

/* Bit 0 : Pin 0 */
#define GPIO_IN_PIN0_Pos (0UL) /*!< Position of PIN0 field. */
#define GPIO_IN_PIN0_Msk (0x1UL << GPIO_IN_PIN0_Pos) /*!< Bit mask of PIN0 field. */
#define GPIO_IN_PIN0_Low (0UL) /*!< Pin input is low */
#define GPIO_IN_PIN0_High (1UL) /*!< Pin input is high */

/* Register: GPIO_DIR */
/* Description: Direction of GPIO pins */

/* Bit 31 : Pin 31 */
#define GPIO_DIR_PIN31_Pos (31UL) /*!< Position of PIN31 field. */
#define GPIO_DIR_PIN31_Msk (0x1UL << GPIO_DIR_PIN31_Pos) /*!< Bit mask of PIN31 field. */
#define GPIO_DIR_PIN31_Input (0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN31_Output (1UL) /*!< Pin set as output */

/* Bit 30 : Pin 30 */
#define GPIO_DIR_PIN30_Pos (30UL) /*!< Position of PIN30 field. */
#define GPIO_DIR_PIN30_Msk (0x1UL << GPIO_DIR_PIN30_Pos) /*!< Bit mask of PIN30 field. */
#define GPIO_DIR_PIN30_Input (0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN30_Output (1UL) /*!< Pin set as output */

/* Bit 29 : Pin 29 */
#define GPIO_DIR_PIN29_Pos (29UL) /*!< Position of PIN29 field. */
#define GPIO_DIR_PIN29_Msk (0x1UL << GPIO_DIR_PIN29_Pos) /*!< Bit mask of PIN29 field. */
#define GPIO_DIR_PIN29_Input (0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN29_Output (1UL) /*!< Pin set as output */

/* Bit 28 : Pin 28 */
#define GPIO_DIR_PIN28_Pos (28UL) /*!< Position of PIN28 field. */
#define GPIO_DIR_PIN28_Msk (0x1UL << GPIO_DIR_PIN28_Pos) /*!< Bit mask of PIN28 field. */
#define GPIO_DIR_PIN28_Input (0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN28_Output (1UL) /*!< Pin set as output */

/* Bit 27 : Pin 27 */
#define GPIO_DIR_PIN27_Pos (27UL) /*!< Position of PIN27 field. */
#define GPIO_DIR_PIN27_Msk (0x1UL << GPIO_DIR_PIN27_Pos) /*!< Bit mask of PIN27 field. */
#define GPIO_DIR_PIN27_Input (0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN27_Output (1UL) /*!< Pin set as output */

/* Bit 26 : Pin 26 */
#define GPIO_DIR_PIN26_Pos (26UL) /*!< Position of PIN26 field. */
#define GPIO_DIR_PIN26_Msk (0x1UL << GPIO_DIR_PIN26_Pos) /*!< Bit mask of PIN26 field. */
#define GPIO_DIR_PIN26_Input (0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN26_Output (1UL) /*!< Pin set as output */

/* Bit 25 : Pin 25 */
#define GPIO_DIR_PIN25_Pos (25UL) /*!< Position of PIN25 field. */
#define GPIO_DIR_PIN25_Msk (0x1UL << GPIO_DIR_PIN25_Pos) /*!< Bit mask of PIN25 field. */
#define GPIO_DIR_PIN25_Input (0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN25_Output (1UL) /*!< Pin set as output */

/* Bit 24 : Pin 24 */
#define GPIO_DIR_PIN24_Pos (24UL) /*!< Position of PIN24 field. */
#define GPIO_DIR_PIN24_Msk (0x1UL << GPIO_DIR_PIN24_Pos) /*!< Bit mask of PIN24 field. */
#define GPIO_DIR_PIN24_Input (0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN24_Output (1UL) /*!< Pin set as output */

/* Bit 23 : Pin 23 */
#define GPIO_DIR_PIN23_Pos (23UL) /*!< Position of PIN23 field. */
#define GPIO_DIR_PIN23_Msk (0x1UL << GPIO_DIR_PIN23_Pos) /*!< Bit mask of PIN23 field. */
#define GPIO_DIR_PIN23_Input (0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN23_Output (1UL) /*!< Pin set as output */

/* Bit 22 : Pin 22 */
#define GPIO_DIR_PIN22_Pos (22UL) /*!< Position of PIN22 field. */
#define GPIO_DIR_PIN22_Msk (0x1UL << GPIO_DIR_PIN22_Pos) /*!< Bit mask of PIN22 field. */
#define GPIO_DIR_PIN22_Input (0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN22_Output (1UL) /*!< Pin set as output */

/* Bit 21 : Pin 21 */
#define GPIO_DIR_PIN21_Pos (21UL) /*!< Position of PIN21 field. */
#define GPIO_DIR_PIN21_Msk (0x1UL << GPIO_DIR_PIN21_Pos) /*!< Bit mask of PIN21 field. */
#define GPIO_DIR_PIN21_Input (0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN21_Output (1UL) /*!< Pin set as output */

/* Bit 20 : Pin 20 */
#define GPIO_DIR_PIN20_Pos (20UL) /*!< Position of PIN20 field. */
#define GPIO_DIR_PIN20_Msk (0x1UL << GPIO_DIR_PIN20_Pos) /*!< Bit mask of PIN20 field. */
#define GPIO_DIR_PIN20_Input (0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN20_Output (1UL) /*!< Pin set as output */

/* Bit 19 : Pin 19 */
#define GPIO_DIR_PIN19_Pos (19UL) /*!< Position of PIN19 field. */
#define GPIO_DIR_PIN19_Msk (0x1UL << GPIO_DIR_PIN19_Pos) /*!< Bit mask of PIN19 field. */
#define GPIO_DIR_PIN19_Input (0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN19_Output (1UL) /*!< Pin set as output */

/* Bit 18 : Pin 18 */
#define GPIO_DIR_PIN18_Pos (18UL) /*!< Position of PIN18 field. */
#define GPIO_DIR_PIN18_Msk (0x1UL << GPIO_DIR_PIN18_Pos) /*!< Bit mask of PIN18 field. */
#define GPIO_DIR_PIN18_Input (0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN18_Output (1UL) /*!< Pin set as output */

/* Bit 17 : Pin 17 */
#define GPIO_DIR_PIN17_Pos (17UL) /*!< Position of PIN17 field. */
#define GPIO_DIR_PIN17_Msk (0x1UL << GPIO_DIR_PIN17_Pos) /*!< Bit mask of PIN17 field. */
#define GPIO_DIR_PIN17_Input (0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN17_Output (1UL) /*!< Pin set as output */

/* Bit 16 : Pin 16 */
#define GPIO_DIR_PIN16_Pos (16UL) /*!< Position of PIN16 field. */
#define GPIO_DIR_PIN16_Msk (0x1UL << GPIO_DIR_PIN16_Pos) /*!< Bit mask of PIN16 field. */
#define GPIO_DIR_PIN16_Input (0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN16_Output (1UL) /*!< Pin set as output */

/* Bit 15 : Pin 15 */
#define GPIO_DIR_PIN15_Pos (15UL) /*!< Position of PIN15 field. */
#define GPIO_DIR_PIN15_Msk (0x1UL << GPIO_DIR_PIN15_Pos) /*!< Bit mask of PIN15 field. */
#define GPIO_DIR_PIN15_Input (0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN15_Output (1UL) /*!< Pin set as output */

/* Bit 14 : Pin 14 */
#define GPIO_DIR_PIN14_Pos (14UL) /*!< Position of PIN14 field. */
#define GPIO_DIR_PIN14_Msk (0x1UL << GPIO_DIR_PIN14_Pos) /*!< Bit mask of PIN14 field. */
#define GPIO_DIR_PIN14_Input (0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN14_Output (1UL) /*!< Pin set as output */

/* Bit 13 : Pin 13 */
#define GPIO_DIR_PIN13_Pos (13UL) /*!< Position of PIN13 field. */
#define GPIO_DIR_PIN13_Msk (0x1UL << GPIO_DIR_PIN13_Pos) /*!< Bit mask of PIN13 field. */
#define GPIO_DIR_PIN13_Input (0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN13_Output (1UL) /*!< Pin set as output */

/* Bit 12 : Pin 12 */
#define GPIO_DIR_PIN12_Pos (12UL) /*!< Position of PIN12 field. */
#define GPIO_DIR_PIN12_Msk (0x1UL << GPIO_DIR_PIN12_Pos) /*!< Bit mask of PIN12 field. */
#define GPIO_DIR_PIN12_Input (0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN12_Output (1UL) /*!< Pin set as output */

/* Bit 11 : Pin 11 */
#define GPIO_DIR_PIN11_Pos (11UL) /*!< Position of PIN11 field. */
#define GPIO_DIR_PIN11_Msk (0x1UL << GPIO_DIR_PIN11_Pos) /*!< Bit mask of PIN11 field. */
#define GPIO_DIR_PIN11_Input (0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN11_Output (1UL) /*!< Pin set as output */

/* Bit 10 : Pin 10 */
#define GPIO_DIR_PIN10_Pos (10UL) /*!< Position of PIN10 field. */
#define GPIO_DIR_PIN10_Msk (0x1UL << GPIO_DIR_PIN10_Pos) /*!< Bit mask of PIN10 field. */
#define GPIO_DIR_PIN10_Input (0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN10_Output (1UL) /*!< Pin set as output */

/* Bit 9 : Pin 9 */
#define GPIO_DIR_PIN9_Pos (9UL) /*!< Position of PIN9 field. */
#define GPIO_DIR_PIN9_Msk (0x1UL << GPIO_DIR_PIN9_Pos) /*!< Bit mask of PIN9 field. */
#define GPIO_DIR_PIN9_Input (0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN9_Output (1UL) /*!< Pin set as output */

/* Bit 8 : Pin 8 */
#define GPIO_DIR_PIN8_Pos (8UL) /*!< Position of PIN8 field. */
#define GPIO_DIR_PIN8_Msk (0x1UL << GPIO_DIR_PIN8_Pos) /*!< Bit mask of PIN8 field. */
#define GPIO_DIR_PIN8_Input (0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN8_Output (1UL) /*!< Pin set as output */

/* Bit 7 : Pin 7 */
#define GPIO_DIR_PIN7_Pos (7UL) /*!< Position of PIN7 field. */
#define GPIO_DIR_PIN7_Msk (0x1UL << GPIO_DIR_PIN7_Pos) /*!< Bit mask of PIN7 field. */
#define GPIO_DIR_PIN7_Input (0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN7_Output (1UL) /*!< Pin set as output */

/* Bit 6 : Pin 6 */
#define GPIO_DIR_PIN6_Pos (6UL) /*!< Position of PIN6 field. */
#define GPIO_DIR_PIN6_Msk (0x1UL << GPIO_DIR_PIN6_Pos) /*!< Bit mask of PIN6 field. */
#define GPIO_DIR_PIN6_Input (0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN6_Output (1UL) /*!< Pin set as output */

/* Bit 5 : Pin 5 */
#define GPIO_DIR_PIN5_Pos (5UL) /*!< Position of PIN5 field. */
#define GPIO_DIR_PIN5_Msk (0x1UL << GPIO_DIR_PIN5_Pos) /*!< Bit mask of PIN5 field. */
#define GPIO_DIR_PIN5_Input (0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN5_Output (1UL) /*!< Pin set as output */

/* Bit 4 : Pin 4 */
#define GPIO_DIR_PIN4_Pos (4UL) /*!< Position of PIN4 field. */
#define GPIO_DIR_PIN4_Msk (0x1UL << GPIO_DIR_PIN4_Pos) /*!< Bit mask of PIN4 field. */
#define GPIO_DIR_PIN4_Input (0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN4_Output (1UL) /*!< Pin set as output */

/* Bit 3 : Pin 3 */
#define GPIO_DIR_PIN3_Pos (3UL) /*!< Position of PIN3 field. */
#define GPIO_DIR_PIN3_Msk (0x1UL << GPIO_DIR_PIN3_Pos) /*!< Bit mask of PIN3 field. */
#define GPIO_DIR_PIN3_Input (0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN3_Output (1UL) /*!< Pin set as output */

/* Bit 2 : Pin 2 */
#define GPIO_DIR_PIN2_Pos (2UL) /*!< Position of PIN2 field. */
#define GPIO_DIR_PIN2_Msk (0x1UL << GPIO_DIR_PIN2_Pos) /*!< Bit mask of PIN2 field. */
#define GPIO_DIR_PIN2_Input (0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN2_Output (1UL) /*!< Pin set as output */

/* Bit 1 : Pin 1 */
#define GPIO_DIR_PIN1_Pos (1UL) /*!< Position of PIN1 field. */
#define GPIO_DIR_PIN1_Msk (0x1UL << GPIO_DIR_PIN1_Pos) /*!< Bit mask of PIN1 field. */
#define GPIO_DIR_PIN1_Input (0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN1_Output (1UL) /*!< Pin set as output */

/* Bit 0 : Pin 0 */
#define GPIO_DIR_PIN0_Pos (0UL) /*!< Position of PIN0 field. */
#define GPIO_DIR_PIN0_Msk (0x1UL << GPIO_DIR_PIN0_Pos) /*!< Bit mask of PIN0 field. */
#define GPIO_DIR_PIN0_Input (0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN0_Output (1UL) /*!< Pin set as output */

/* Register: GPIO_DIRSET */
/* Description: DIR set register */

/* Bit 31 : Set as output pin 31 */
#define GPIO_DIRSET_PIN31_Pos (31UL) /*!< Position of PIN31 field. */
#define GPIO_DIRSET_PIN31_Msk (0x1UL << GPIO_DIRSET_PIN31_Pos) /*!< Bit mask of PIN31 field. */
#define GPIO_DIRSET_PIN31_Input (0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN31_Output (1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN31_Set (1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Bit 30 : Set as output pin 30 */
#define GPIO_DIRSET_PIN30_Pos (30UL) /*!< Position of PIN30 field. */
#define GPIO_DIRSET_PIN30_Msk (0x1UL << GPIO_DIRSET_PIN30_Pos) /*!< Bit mask of PIN30 field. */
#define GPIO_DIRSET_PIN30_Input (0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN30_Output (1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN30_Set (1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Bit 29 : Set as output pin 29 */
#define GPIO_DIRSET_PIN29_Pos (29UL) /*!< Position of PIN29 field. */
#define GPIO_DIRSET_PIN29_Msk (0x1UL << GPIO_DIRSET_PIN29_Pos) /*!< Bit mask of PIN29 field. */
#define GPIO_DIRSET_PIN29_Input (0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN29_Output (1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN29_Set (1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Bit 28 : Set as output pin 28 */
#define GPIO_DIRSET_PIN28_Pos (28UL) /*!< Position of PIN28 field. */
#define GPIO_DIRSET_PIN28_Msk (0x1UL << GPIO_DIRSET_PIN28_Pos) /*!< Bit mask of PIN28 field. */
#define GPIO_DIRSET_PIN28_Input (0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN28_Output (1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN28_Set (1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Bit 27 : Set as output pin 27 */
#define GPIO_DIRSET_PIN27_Pos (27UL) /*!< Position of PIN27 field. */
#define GPIO_DIRSET_PIN27_Msk (0x1UL << GPIO_DIRSET_PIN27_Pos) /*!< Bit mask of PIN27 field. */
#define GPIO_DIRSET_PIN27_Input (0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN27_Output (1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN27_Set (1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Bit 26 : Set as output pin 26 */
#define GPIO_DIRSET_PIN26_Pos (26UL) /*!< Position of PIN26 field. */
#define GPIO_DIRSET_PIN26_Msk (0x1UL << GPIO_DIRSET_PIN26_Pos) /*!< Bit mask of PIN26 field. */
#define GPIO_DIRSET_PIN26_Input (0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN26_Output (1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN26_Set (1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Bit 25 : Set as output pin 25 */
#define GPIO_DIRSET_PIN25_Pos (25UL) /*!< Position of PIN25 field. */
#define GPIO_DIRSET_PIN25_Msk (0x1UL << GPIO_DIRSET_PIN25_Pos) /*!< Bit mask of PIN25 field. */
#define GPIO_DIRSET_PIN25_Input (0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN25_Output (1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN25_Set (1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Bit 24 : Set as output pin 24 */
#define GPIO_DIRSET_PIN24_Pos (24UL) /*!< Position of PIN24 field. */
#define GPIO_DIRSET_PIN24_Msk (0x1UL << GPIO_DIRSET_PIN24_Pos) /*!< Bit mask of PIN24 field. */
#define GPIO_DIRSET_PIN24_Input (0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN24_Output (1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN24_Set (1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Bit 23 : Set as output pin 23 */
#define GPIO_DIRSET_PIN23_Pos (23UL) /*!< Position of PIN23 field. */
#define GPIO_DIRSET_PIN23_Msk (0x1UL << GPIO_DIRSET_PIN23_Pos) /*!< Bit mask of PIN23 field. */
#define GPIO_DIRSET_PIN23_Input (0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN23_Output (1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN23_Set (1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Bit 22 : Set as output pin 22 */
#define GPIO_DIRSET_PIN22_Pos (22UL) /*!< Position of PIN22 field. */
#define GPIO_DIRSET_PIN22_Msk (0x1UL << GPIO_DIRSET_PIN22_Pos) /*!< Bit mask of PIN22 field. */
#define GPIO_DIRSET_PIN22_Input (0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN22_Output (1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN22_Set (1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Bit 21 : Set as output pin 21 */
#define GPIO_DIRSET_PIN21_Pos (21UL) /*!< Position of PIN21 field. */
#define GPIO_DIRSET_PIN21_Msk (0x1UL << GPIO_DIRSET_PIN21_Pos) /*!< Bit mask of PIN21 field. */
#define GPIO_DIRSET_PIN21_Input (0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN21_Output (1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN21_Set (1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Bit 20 : Set as output pin 20 */
#define GPIO_DIRSET_PIN20_Pos (20UL) /*!< Position of PIN20 field. */
#define GPIO_DIRSET_PIN20_Msk (0x1UL << GPIO_DIRSET_PIN20_Pos) /*!< Bit mask of PIN20 field. */
#define GPIO_DIRSET_PIN20_Input (0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN20_Output (1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN20_Set (1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Bit 19 : Set as output pin 19 */
#define GPIO_DIRSET_PIN19_Pos (19UL) /*!< Position of PIN19 field. */
#define GPIO_DIRSET_PIN19_Msk (0x1UL << GPIO_DIRSET_PIN19_Pos) /*!< Bit mask of PIN19 field. */
#define GPIO_DIRSET_PIN19_Input (0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN19_Output (1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN19_Set (1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Bit 18 : Set as output pin 18 */
#define GPIO_DIRSET_PIN18_Pos (18UL) /*!< Position of PIN18 field. */
#define GPIO_DIRSET_PIN18_Msk (0x1UL << GPIO_DIRSET_PIN18_Pos) /*!< Bit mask of PIN18 field. */
#define GPIO_DIRSET_PIN18_Input (0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN18_Output (1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN18_Set (1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Bit 17 : Set as output pin 17 */
#define GPIO_DIRSET_PIN17_Pos (17UL) /*!< Position of PIN17 field. */
#define GPIO_DIRSET_PIN17_Msk (0x1UL << GPIO_DIRSET_PIN17_Pos) /*!< Bit mask of PIN17 field. */
#define GPIO_DIRSET_PIN17_Input (0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN17_Output (1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN17_Set (1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Bit 16 : Set as output pin 16 */
#define GPIO_DIRSET_PIN16_Pos (16UL) /*!< Position of PIN16 field. */
#define GPIO_DIRSET_PIN16_Msk (0x1UL << GPIO_DIRSET_PIN16_Pos) /*!< Bit mask of PIN16 field. */
#define GPIO_DIRSET_PIN16_Input (0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN16_Output (1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN16_Set (1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Bit 15 : Set as output pin 15 */
#define GPIO_DIRSET_PIN15_Pos (15UL) /*!< Position of PIN15 field. */
#define GPIO_DIRSET_PIN15_Msk (0x1UL << GPIO_DIRSET_PIN15_Pos) /*!< Bit mask of PIN15 field. */
#define GPIO_DIRSET_PIN15_Input (0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN15_Output (1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN15_Set (1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Bit 14 : Set as output pin 14 */
#define GPIO_DIRSET_PIN14_Pos (14UL) /*!< Position of PIN14 field. */
#define GPIO_DIRSET_PIN14_Msk (0x1UL << GPIO_DIRSET_PIN14_Pos) /*!< Bit mask of PIN14 field. */
#define GPIO_DIRSET_PIN14_Input (0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN14_Output (1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN14_Set (1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Bit 13 : Set as output pin 13 */
#define GPIO_DIRSET_PIN13_Pos (13UL) /*!< Position of PIN13 field. */
#define GPIO_DIRSET_PIN13_Msk (0x1UL << GPIO_DIRSET_PIN13_Pos) /*!< Bit mask of PIN13 field. */
#define GPIO_DIRSET_PIN13_Input (0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN13_Output (1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN13_Set (1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Bit 12 : Set as output pin 12 */
#define GPIO_DIRSET_PIN12_Pos (12UL) /*!< Position of PIN12 field. */
#define GPIO_DIRSET_PIN12_Msk (0x1UL << GPIO_DIRSET_PIN12_Pos) /*!< Bit mask of PIN12 field. */
#define GPIO_DIRSET_PIN12_Input (0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN12_Output (1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN12_Set (1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Bit 11 : Set as output pin 11 */
#define GPIO_DIRSET_PIN11_Pos (11UL) /*!< Position of PIN11 field. */
#define GPIO_DIRSET_PIN11_Msk (0x1UL << GPIO_DIRSET_PIN11_Pos) /*!< Bit mask of PIN11 field. */
#define GPIO_DIRSET_PIN11_Input (0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN11_Output (1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN11_Set (1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Bit 10 : Set as output pin 10 */
#define GPIO_DIRSET_PIN10_Pos (10UL) /*!< Position of PIN10 field. */
#define GPIO_DIRSET_PIN10_Msk (0x1UL << GPIO_DIRSET_PIN10_Pos) /*!< Bit mask of PIN10 field. */
#define GPIO_DIRSET_PIN10_Input (0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN10_Output (1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN10_Set (1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Bit 9 : Set as output pin 9 */
#define GPIO_DIRSET_PIN9_Pos (9UL) /*!< Position of PIN9 field. */
#define GPIO_DIRSET_PIN9_Msk (0x1UL << GPIO_DIRSET_PIN9_Pos) /*!< Bit mask of PIN9 field. */
#define GPIO_DIRSET_PIN9_Input (0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN9_Output (1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN9_Set (1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Bit 8 : Set as output pin 8 */
#define GPIO_DIRSET_PIN8_Pos (8UL) /*!< Position of PIN8 field. */
#define GPIO_DIRSET_PIN8_Msk (0x1UL << GPIO_DIRSET_PIN8_Pos) /*!< Bit mask of PIN8 field. */
#define GPIO_DIRSET_PIN8_Input (0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN8_Output (1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN8_Set (1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Bit 7 : Set as output pin 7 */
#define GPIO_DIRSET_PIN7_Pos (7UL) /*!< Position of PIN7 field. */
#define GPIO_DIRSET_PIN7_Msk (0x1UL << GPIO_DIRSET_PIN7_Pos) /*!< Bit mask of PIN7 field. */
#define GPIO_DIRSET_PIN7_Input (0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN7_Output (1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN7_Set (1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Bit 6 : Set as output pin 6 */
#define GPIO_DIRSET_PIN6_Pos (6UL) /*!< Position of PIN6 field. */
#define GPIO_DIRSET_PIN6_Msk (0x1UL << GPIO_DIRSET_PIN6_Pos) /*!< Bit mask of PIN6 field. */
#define GPIO_DIRSET_PIN6_Input (0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN6_Output (1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN6_Set (1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Bit 5 : Set as output pin 5 */
#define GPIO_DIRSET_PIN5_Pos (5UL) /*!< Position of PIN5 field. */
#define GPIO_DIRSET_PIN5_Msk (0x1UL << GPIO_DIRSET_PIN5_Pos) /*!< Bit mask of PIN5 field. */
#define GPIO_DIRSET_PIN5_Input (0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN5_Output (1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN5_Set (1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Bit 4 : Set as output pin 4 */
#define GPIO_DIRSET_PIN4_Pos (4UL) /*!< Position of PIN4 field. */
#define GPIO_DIRSET_PIN4_Msk (0x1UL << GPIO_DIRSET_PIN4_Pos) /*!< Bit mask of PIN4 field. */
#define GPIO_DIRSET_PIN4_Input (0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN4_Output (1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN4_Set (1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Bit 3 : Set as output pin 3 */
#define GPIO_DIRSET_PIN3_Pos (3UL) /*!< Position of PIN3 field. */
#define GPIO_DIRSET_PIN3_Msk (0x1UL << GPIO_DIRSET_PIN3_Pos) /*!< Bit mask of PIN3 field. */
#define GPIO_DIRSET_PIN3_Input (0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN3_Output (1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN3_Set (1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Bit 2 : Set as output pin 2 */
#define GPIO_DIRSET_PIN2_Pos (2UL) /*!< Position of PIN2 field. */
#define GPIO_DIRSET_PIN2_Msk (0x1UL << GPIO_DIRSET_PIN2_Pos) /*!< Bit mask of PIN2 field. */
#define GPIO_DIRSET_PIN2_Input (0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN2_Output (1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN2_Set (1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Bit 1 : Set as output pin 1 */
#define GPIO_DIRSET_PIN1_Pos (1UL) /*!< Position of PIN1 field. */
#define GPIO_DIRSET_PIN1_Msk (0x1UL << GPIO_DIRSET_PIN1_Pos) /*!< Bit mask of PIN1 field. */
#define GPIO_DIRSET_PIN1_Input (0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN1_Output (1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN1_Set (1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Bit 0 : Set as output pin 0 */
#define GPIO_DIRSET_PIN0_Pos (0UL) /*!< Position of PIN0 field. */
#define GPIO_DIRSET_PIN0_Msk (0x1UL << GPIO_DIRSET_PIN0_Pos) /*!< Bit mask of PIN0 field. */
#define GPIO_DIRSET_PIN0_Input (0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN0_Output (1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN0_Set (1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Register: GPIO_DIRCLR */
/* Description: DIR clear register */

/* Bit 31 : Set as input pin 31 */
#define GPIO_DIRCLR_PIN31_Pos (31UL) /*!< Position of PIN31 field. */
#define GPIO_DIRCLR_PIN31_Msk (0x1UL << GPIO_DIRCLR_PIN31_Pos) /*!< Bit mask of PIN31 field. */
#define GPIO_DIRCLR_PIN31_Input (0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN31_Output (1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN31_Clear (1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Bit 30 : Set as input pin 30 */
#define GPIO_DIRCLR_PIN30_Pos (30UL) /*!< Position of PIN30 field. */
#define GPIO_DIRCLR_PIN30_Msk (0x1UL << GPIO_DIRCLR_PIN30_Pos) /*!< Bit mask of PIN30 field. */
#define GPIO_DIRCLR_PIN30_Input (0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN30_Output (1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN30_Clear (1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Bit 29 : Set as input pin 29 */
#define GPIO_DIRCLR_PIN29_Pos (29UL) /*!< Position of PIN29 field. */
#define GPIO_DIRCLR_PIN29_Msk (0x1UL << GPIO_DIRCLR_PIN29_Pos) /*!< Bit mask of PIN29 field. */
#define GPIO_DIRCLR_PIN29_Input (0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN29_Output (1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN29_Clear (1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Bit 28 : Set as input pin 28 */
#define GPIO_DIRCLR_PIN28_Pos (28UL) /*!< Position of PIN28 field. */
#define GPIO_DIRCLR_PIN28_Msk (0x1UL << GPIO_DIRCLR_PIN28_Pos) /*!< Bit mask of PIN28 field. */
#define GPIO_DIRCLR_PIN28_Input (0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN28_Output (1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN28_Clear (1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Bit 27 : Set as input pin 27 */
#define GPIO_DIRCLR_PIN27_Pos (27UL) /*!< Position of PIN27 field. */
#define GPIO_DIRCLR_PIN27_Msk (0x1UL << GPIO_DIRCLR_PIN27_Pos) /*!< Bit mask of PIN27 field. */
#define GPIO_DIRCLR_PIN27_Input (0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN27_Output (1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN27_Clear (1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Bit 26 : Set as input pin 26 */
#define GPIO_DIRCLR_PIN26_Pos (26UL) /*!< Position of PIN26 field. */
#define GPIO_DIRCLR_PIN26_Msk (0x1UL << GPIO_DIRCLR_PIN26_Pos) /*!< Bit mask of PIN26 field. */
#define GPIO_DIRCLR_PIN26_Input (0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN26_Output (1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN26_Clear (1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Bit 25 : Set as input pin 25 */
#define GPIO_DIRCLR_PIN25_Pos (25UL) /*!< Position of PIN25 field. */
#define GPIO_DIRCLR_PIN25_Msk (0x1UL << GPIO_DIRCLR_PIN25_Pos) /*!< Bit mask of PIN25 field. */
#define GPIO_DIRCLR_PIN25_Input (0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN25_Output (1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN25_Clear (1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Bit 24 : Set as input pin 24 */
#define GPIO_DIRCLR_PIN24_Pos (24UL) /*!< Position of PIN24 field. */
#define GPIO_DIRCLR_PIN24_Msk (0x1UL << GPIO_DIRCLR_PIN24_Pos) /*!< Bit mask of PIN24 field. */
#define GPIO_DIRCLR_PIN24_Input (0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN24_Output (1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN24_Clear (1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Bit 23 : Set as input pin 23 */
#define GPIO_DIRCLR_PIN23_Pos (23UL) /*!< Position of PIN23 field. */
#define GPIO_DIRCLR_PIN23_Msk (0x1UL << GPIO_DIRCLR_PIN23_Pos) /*!< Bit mask of PIN23 field. */
#define GPIO_DIRCLR_PIN23_Input (0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN23_Output (1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN23_Clear (1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Bit 22 : Set as input pin 22 */
#define GPIO_DIRCLR_PIN22_Pos (22UL) /*!< Position of PIN22 field. */
#define GPIO_DIRCLR_PIN22_Msk (0x1UL << GPIO_DIRCLR_PIN22_Pos) /*!< Bit mask of PIN22 field. */
#define GPIO_DIRCLR_PIN22_Input (0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN22_Output (1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN22_Clear (1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Bit 21 : Set as input pin 21 */
#define GPIO_DIRCLR_PIN21_Pos (21UL) /*!< Position of PIN21 field. */
#define GPIO_DIRCLR_PIN21_Msk (0x1UL << GPIO_DIRCLR_PIN21_Pos) /*!< Bit mask of PIN21 field. */
#define GPIO_DIRCLR_PIN21_Input (0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN21_Output (1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN21_Clear (1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Bit 20 : Set as input pin 20 */
#define GPIO_DIRCLR_PIN20_Pos (20UL) /*!< Position of PIN20 field. */
#define GPIO_DIRCLR_PIN20_Msk (0x1UL << GPIO_DIRCLR_PIN20_Pos) /*!< Bit mask of PIN20 field. */
#define GPIO_DIRCLR_PIN20_Input (0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN20_Output (1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN20_Clear (1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Bit 19 : Set as input pin 19 */
#define GPIO_DIRCLR_PIN19_Pos (19UL) /*!< Position of PIN19 field. */
#define GPIO_DIRCLR_PIN19_Msk (0x1UL << GPIO_DIRCLR_PIN19_Pos) /*!< Bit mask of PIN19 field. */
#define GPIO_DIRCLR_PIN19_Input (0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN19_Output (1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN19_Clear (1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Bit 18 : Set as input pin 18 */
#define GPIO_DIRCLR_PIN18_Pos (18UL) /*!< Position of PIN18 field. */
#define GPIO_DIRCLR_PIN18_Msk (0x1UL << GPIO_DIRCLR_PIN18_Pos) /*!< Bit mask of PIN18 field. */
#define GPIO_DIRCLR_PIN18_Input (0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN18_Output (1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN18_Clear (1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Bit 17 : Set as input pin 17 */
#define GPIO_DIRCLR_PIN17_Pos (17UL) /*!< Position of PIN17 field. */
#define GPIO_DIRCLR_PIN17_Msk (0x1UL << GPIO_DIRCLR_PIN17_Pos) /*!< Bit mask of PIN17 field. */
#define GPIO_DIRCLR_PIN17_Input (0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN17_Output (1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN17_Clear (1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Bit 16 : Set as input pin 16 */
#define GPIO_DIRCLR_PIN16_Pos (16UL) /*!< Position of PIN16 field. */
#define GPIO_DIRCLR_PIN16_Msk (0x1UL << GPIO_DIRCLR_PIN16_Pos) /*!< Bit mask of PIN16 field. */
#define GPIO_DIRCLR_PIN16_Input (0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN16_Output (1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN16_Clear (1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Bit 15 : Set as input pin 15 */
#define GPIO_DIRCLR_PIN15_Pos (15UL) /*!< Position of PIN15 field. */
#define GPIO_DIRCLR_PIN15_Msk (0x1UL << GPIO_DIRCLR_PIN15_Pos) /*!< Bit mask of PIN15 field. */
#define GPIO_DIRCLR_PIN15_Input (0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN15_Output (1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN15_Clear (1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Bit 14 : Set as input pin 14 */
#define GPIO_DIRCLR_PIN14_Pos (14UL) /*!< Position of PIN14 field. */
#define GPIO_DIRCLR_PIN14_Msk (0x1UL << GPIO_DIRCLR_PIN14_Pos) /*!< Bit mask of PIN14 field. */
#define GPIO_DIRCLR_PIN14_Input (0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN14_Output (1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN14_Clear (1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Bit 13 : Set as input pin 13 */
#define GPIO_DIRCLR_PIN13_Pos (13UL) /*!< Position of PIN13 field. */
#define GPIO_DIRCLR_PIN13_Msk (0x1UL << GPIO_DIRCLR_PIN13_Pos) /*!< Bit mask of PIN13 field. */
#define GPIO_DIRCLR_PIN13_Input (0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN13_Output (1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN13_Clear (1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Bit 12 : Set as input pin 12 */
#define GPIO_DIRCLR_PIN12_Pos (12UL) /*!< Position of PIN12 field. */
#define GPIO_DIRCLR_PIN12_Msk (0x1UL << GPIO_DIRCLR_PIN12_Pos) /*!< Bit mask of PIN12 field. */
#define GPIO_DIRCLR_PIN12_Input (0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN12_Output (1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN12_Clear (1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Bit 11 : Set as input pin 11 */
#define GPIO_DIRCLR_PIN11_Pos (11UL) /*!< Position of PIN11 field. */
#define GPIO_DIRCLR_PIN11_Msk (0x1UL << GPIO_DIRCLR_PIN11_Pos) /*!< Bit mask of PIN11 field. */
#define GPIO_DIRCLR_PIN11_Input (0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN11_Output (1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN11_Clear (1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Bit 10 : Set as input pin 10 */
#define GPIO_DIRCLR_PIN10_Pos (10UL) /*!< Position of PIN10 field. */
#define GPIO_DIRCLR_PIN10_Msk (0x1UL << GPIO_DIRCLR_PIN10_Pos) /*!< Bit mask of PIN10 field. */
#define GPIO_DIRCLR_PIN10_Input (0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN10_Output (1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN10_Clear (1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Bit 9 : Set as input pin 9 */
#define GPIO_DIRCLR_PIN9_Pos (9UL) /*!< Position of PIN9 field. */
#define GPIO_DIRCLR_PIN9_Msk (0x1UL << GPIO_DIRCLR_PIN9_Pos) /*!< Bit mask of PIN9 field. */
#define GPIO_DIRCLR_PIN9_Input (0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN9_Output (1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN9_Clear (1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Bit 8 : Set as input pin 8 */
#define GPIO_DIRCLR_PIN8_Pos (8UL) /*!< Position of PIN8 field. */
#define GPIO_DIRCLR_PIN8_Msk (0x1UL << GPIO_DIRCLR_PIN8_Pos) /*!< Bit mask of PIN8 field. */
#define GPIO_DIRCLR_PIN8_Input (0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN8_Output (1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN8_Clear (1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Bit 7 : Set as input pin 7 */
#define GPIO_DIRCLR_PIN7_Pos (7UL) /*!< Position of PIN7 field. */
#define GPIO_DIRCLR_PIN7_Msk (0x1UL << GPIO_DIRCLR_PIN7_Pos) /*!< Bit mask of PIN7 field. */
#define GPIO_DIRCLR_PIN7_Input (0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN7_Output (1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN7_Clear (1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Bit 6 : Set as input pin 6 */
#define GPIO_DIRCLR_PIN6_Pos (6UL) /*!< Position of PIN6 field. */
#define GPIO_DIRCLR_PIN6_Msk (0x1UL << GPIO_DIRCLR_PIN6_Pos) /*!< Bit mask of PIN6 field. */
#define GPIO_DIRCLR_PIN6_Input (0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN6_Output (1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN6_Clear (1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Bit 5 : Set as input pin 5 */
#define GPIO_DIRCLR_PIN5_Pos (5UL) /*!< Position of PIN5 field. */
#define GPIO_DIRCLR_PIN5_Msk (0x1UL << GPIO_DIRCLR_PIN5_Pos) /*!< Bit mask of PIN5 field. */
#define GPIO_DIRCLR_PIN5_Input (0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN5_Output (1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN5_Clear (1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Bit 4 : Set as input pin 4 */
#define GPIO_DIRCLR_PIN4_Pos (4UL) /*!< Position of PIN4 field. */
#define GPIO_DIRCLR_PIN4_Msk (0x1UL << GPIO_DIRCLR_PIN4_Pos) /*!< Bit mask of PIN4 field. */
#define GPIO_DIRCLR_PIN4_Input (0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN4_Output (1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN4_Clear (1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Bit 3 : Set as input pin 3 */
#define GPIO_DIRCLR_PIN3_Pos (3UL) /*!< Position of PIN3 field. */
#define GPIO_DIRCLR_PIN3_Msk (0x1UL << GPIO_DIRCLR_PIN3_Pos) /*!< Bit mask of PIN3 field. */
#define GPIO_DIRCLR_PIN3_Input (0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN3_Output (1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN3_Clear (1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Bit 2 : Set as input pin 2 */
#define GPIO_DIRCLR_PIN2_Pos (2UL) /*!< Position of PIN2 field. */
#define GPIO_DIRCLR_PIN2_Msk (0x1UL << GPIO_DIRCLR_PIN2_Pos) /*!< Bit mask of PIN2 field. */
#define GPIO_DIRCLR_PIN2_Input (0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN2_Output (1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN2_Clear (1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Bit 1 : Set as input pin 1 */
#define GPIO_DIRCLR_PIN1_Pos (1UL) /*!< Position of PIN1 field. */
#define GPIO_DIRCLR_PIN1_Msk (0x1UL << GPIO_DIRCLR_PIN1_Pos) /*!< Bit mask of PIN1 field. */
#define GPIO_DIRCLR_PIN1_Input (0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN1_Output (1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN1_Clear (1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Bit 0 : Set as input pin 0 */
#define GPIO_DIRCLR_PIN0_Pos (0UL) /*!< Position of PIN0 field. */
#define GPIO_DIRCLR_PIN0_Msk (0x1UL << GPIO_DIRCLR_PIN0_Pos) /*!< Bit mask of PIN0 field. */
#define GPIO_DIRCLR_PIN0_Input (0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN0_Output (1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN0_Clear (1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Register: GPIO_LATCH */
/* Description: Latch register indicating what GPIO pins that have met the criteria set in the PIN_CNF[n].SENSE registers */

/* Bit 31 : Status on whether PIN31 has met criteria set in PIN_CNF31.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN31_Pos (31UL) /*!< Position of PIN31 field. */
#define GPIO_LATCH_PIN31_Msk (0x1UL << GPIO_LATCH_PIN31_Pos) /*!< Bit mask of PIN31 field. */
#define GPIO_LATCH_PIN31_NotLatched (0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN31_Latched (1UL) /*!< Criteria has been met */

/* Bit 30 : Status on whether PIN30 has met criteria set in PIN_CNF30.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN30_Pos (30UL) /*!< Position of PIN30 field. */
#define GPIO_LATCH_PIN30_Msk (0x1UL << GPIO_LATCH_PIN30_Pos) /*!< Bit mask of PIN30 field. */
#define GPIO_LATCH_PIN30_NotLatched (0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN30_Latched (1UL) /*!< Criteria has been met */

/* Bit 29 : Status on whether PIN29 has met criteria set in PIN_CNF29.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN29_Pos (29UL) /*!< Position of PIN29 field. */
#define GPIO_LATCH_PIN29_Msk (0x1UL << GPIO_LATCH_PIN29_Pos) /*!< Bit mask of PIN29 field. */
#define GPIO_LATCH_PIN29_NotLatched (0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN29_Latched (1UL) /*!< Criteria has been met */

/* Bit 28 : Status on whether PIN28 has met criteria set in PIN_CNF28.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN28_Pos (28UL) /*!< Position of PIN28 field. */
#define GPIO_LATCH_PIN28_Msk (0x1UL << GPIO_LATCH_PIN28_Pos) /*!< Bit mask of PIN28 field. */
#define GPIO_LATCH_PIN28_NotLatched (0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN28_Latched (1UL) /*!< Criteria has been met */

/* Bit 27 : Status on whether PIN27 has met criteria set in PIN_CNF27.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN27_Pos (27UL) /*!< Position of PIN27 field. */
#define GPIO_LATCH_PIN27_Msk (0x1UL << GPIO_LATCH_PIN27_Pos) /*!< Bit mask of PIN27 field. */
#define GPIO_LATCH_PIN27_NotLatched (0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN27_Latched (1UL) /*!< Criteria has been met */

/* Bit 26 : Status on whether PIN26 has met criteria set in PIN_CNF26.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN26_Pos (26UL) /*!< Position of PIN26 field. */
#define GPIO_LATCH_PIN26_Msk (0x1UL << GPIO_LATCH_PIN26_Pos) /*!< Bit mask of PIN26 field. */
#define GPIO_LATCH_PIN26_NotLatched (0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN26_Latched (1UL) /*!< Criteria has been met */

/* Bit 25 : Status on whether PIN25 has met criteria set in PIN_CNF25.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN25_Pos (25UL) /*!< Position of PIN25 field. */
#define GPIO_LATCH_PIN25_Msk (0x1UL << GPIO_LATCH_PIN25_Pos) /*!< Bit mask of PIN25 field. */
#define GPIO_LATCH_PIN25_NotLatched (0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN25_Latched (1UL) /*!< Criteria has been met */

/* Bit 24 : Status on whether PIN24 has met criteria set in PIN_CNF24.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN24_Pos (24UL) /*!< Position of PIN24 field. */
#define GPIO_LATCH_PIN24_Msk (0x1UL << GPIO_LATCH_PIN24_Pos) /*!< Bit mask of PIN24 field. */
#define GPIO_LATCH_PIN24_NotLatched (0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN24_Latched (1UL) /*!< Criteria has been met */

/* Bit 23 : Status on whether PIN23 has met criteria set in PIN_CNF23.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN23_Pos (23UL) /*!< Position of PIN23 field. */
#define GPIO_LATCH_PIN23_Msk (0x1UL << GPIO_LATCH_PIN23_Pos) /*!< Bit mask of PIN23 field. */
#define GPIO_LATCH_PIN23_NotLatched (0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN23_Latched (1UL) /*!< Criteria has been met */

/* Bit 22 : Status on whether PIN22 has met criteria set in PIN_CNF22.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN22_Pos (22UL) /*!< Position of PIN22 field. */
#define GPIO_LATCH_PIN22_Msk (0x1UL << GPIO_LATCH_PIN22_Pos) /*!< Bit mask of PIN22 field. */
#define GPIO_LATCH_PIN22_NotLatched (0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN22_Latched (1UL) /*!< Criteria has been met */

/* Bit 21 : Status on whether PIN21 has met criteria set in PIN_CNF21.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN21_Pos (21UL) /*!< Position of PIN21 field. */
#define GPIO_LATCH_PIN21_Msk (0x1UL << GPIO_LATCH_PIN21_Pos) /*!< Bit mask of PIN21 field. */
#define GPIO_LATCH_PIN21_NotLatched (0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN21_Latched (1UL) /*!< Criteria has been met */

/* Bit 20 : Status on whether PIN20 has met criteria set in PIN_CNF20.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN20_Pos (20UL) /*!< Position of PIN20 field. */
#define GPIO_LATCH_PIN20_Msk (0x1UL << GPIO_LATCH_PIN20_Pos) /*!< Bit mask of PIN20 field. */
#define GPIO_LATCH_PIN20_NotLatched (0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN20_Latched (1UL) /*!< Criteria has been met */

/* Bit 19 : Status on whether PIN19 has met criteria set in PIN_CNF19.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN19_Pos (19UL) /*!< Position of PIN19 field. */
#define GPIO_LATCH_PIN19_Msk (0x1UL << GPIO_LATCH_PIN19_Pos) /*!< Bit mask of PIN19 field. */
#define GPIO_LATCH_PIN19_NotLatched (0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN19_Latched (1UL) /*!< Criteria has been met */

/* Bit 18 : Status on whether PIN18 has met criteria set in PIN_CNF18.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN18_Pos (18UL) /*!< Position of PIN18 field. */
#define GPIO_LATCH_PIN18_Msk (0x1UL << GPIO_LATCH_PIN18_Pos) /*!< Bit mask of PIN18 field. */
#define GPIO_LATCH_PIN18_NotLatched (0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN18_Latched (1UL) /*!< Criteria has been met */

/* Bit 17 : Status on whether PIN17 has met criteria set in PIN_CNF17.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN17_Pos (17UL) /*!< Position of PIN17 field. */
#define GPIO_LATCH_PIN17_Msk (0x1UL << GPIO_LATCH_PIN17_Pos) /*!< Bit mask of PIN17 field. */
#define GPIO_LATCH_PIN17_NotLatched (0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN17_Latched (1UL) /*!< Criteria has been met */

/* Bit 16 : Status on whether PIN16 has met criteria set in PIN_CNF16.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN16_Pos (16UL) /*!< Position of PIN16 field. */
#define GPIO_LATCH_PIN16_Msk (0x1UL << GPIO_LATCH_PIN16_Pos) /*!< Bit mask of PIN16 field. */
#define GPIO_LATCH_PIN16_NotLatched (0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN16_Latched (1UL) /*!< Criteria has been met */

/* Bit 15 : Status on whether PIN15 has met criteria set in PIN_CNF15.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN15_Pos (15UL) /*!< Position of PIN15 field. */
#define GPIO_LATCH_PIN15_Msk (0x1UL << GPIO_LATCH_PIN15_Pos) /*!< Bit mask of PIN15 field. */
#define GPIO_LATCH_PIN15_NotLatched (0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN15_Latched (1UL) /*!< Criteria has been met */

/* Bit 14 : Status on whether PIN14 has met criteria set in PIN_CNF14.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN14_Pos (14UL) /*!< Position of PIN14 field. */
#define GPIO_LATCH_PIN14_Msk (0x1UL << GPIO_LATCH_PIN14_Pos) /*!< Bit mask of PIN14 field. */
#define GPIO_LATCH_PIN14_NotLatched (0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN14_Latched (1UL) /*!< Criteria has been met */

/* Bit 13 : Status on whether PIN13 has met criteria set in PIN_CNF13.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN13_Pos (13UL) /*!< Position of PIN13 field. */
#define GPIO_LATCH_PIN13_Msk (0x1UL << GPIO_LATCH_PIN13_Pos) /*!< Bit mask of PIN13 field. */
#define GPIO_LATCH_PIN13_NotLatched (0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN13_Latched (1UL) /*!< Criteria has been met */

/* Bit 12 : Status on whether PIN12 has met criteria set in PIN_CNF12.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN12_Pos (12UL) /*!< Position of PIN12 field. */
#define GPIO_LATCH_PIN12_Msk (0x1UL << GPIO_LATCH_PIN12_Pos) /*!< Bit mask of PIN12 field. */
#define GPIO_LATCH_PIN12_NotLatched (0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN12_Latched (1UL) /*!< Criteria has been met */

/* Bit 11 : Status on whether PIN11 has met criteria set in PIN_CNF11.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN11_Pos (11UL) /*!< Position of PIN11 field. */
#define GPIO_LATCH_PIN11_Msk (0x1UL << GPIO_LATCH_PIN11_Pos) /*!< Bit mask of PIN11 field. */
#define GPIO_LATCH_PIN11_NotLatched (0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN11_Latched (1UL) /*!< Criteria has been met */

/* Bit 10 : Status on whether PIN10 has met criteria set in PIN_CNF10.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN10_Pos (10UL) /*!< Position of PIN10 field. */
#define GPIO_LATCH_PIN10_Msk (0x1UL << GPIO_LATCH_PIN10_Pos) /*!< Bit mask of PIN10 field. */
#define GPIO_LATCH_PIN10_NotLatched (0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN10_Latched (1UL) /*!< Criteria has been met */

/* Bit 9 : Status on whether PIN9 has met criteria set in PIN_CNF9.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN9_Pos (9UL) /*!< Position of PIN9 field. */
#define GPIO_LATCH_PIN9_Msk (0x1UL << GPIO_LATCH_PIN9_Pos) /*!< Bit mask of PIN9 field. */
#define GPIO_LATCH_PIN9_NotLatched (0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN9_Latched (1UL) /*!< Criteria has been met */

/* Bit 8 : Status on whether PIN8 has met criteria set in PIN_CNF8.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN8_Pos (8UL) /*!< Position of PIN8 field. */
#define GPIO_LATCH_PIN8_Msk (0x1UL << GPIO_LATCH_PIN8_Pos) /*!< Bit mask of PIN8 field. */
#define GPIO_LATCH_PIN8_NotLatched (0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN8_Latched (1UL) /*!< Criteria has been met */

/* Bit 7 : Status on whether PIN7 has met criteria set in PIN_CNF7.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN7_Pos (7UL) /*!< Position of PIN7 field. */
#define GPIO_LATCH_PIN7_Msk (0x1UL << GPIO_LATCH_PIN7_Pos) /*!< Bit mask of PIN7 field. */
#define GPIO_LATCH_PIN7_NotLatched (0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN7_Latched (1UL) /*!< Criteria has been met */

/* Bit 6 : Status on whether PIN6 has met criteria set in PIN_CNF6.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN6_Pos (6UL) /*!< Position of PIN6 field. */
#define GPIO_LATCH_PIN6_Msk (0x1UL << GPIO_LATCH_PIN6_Pos) /*!< Bit mask of PIN6 field. */
#define GPIO_LATCH_PIN6_NotLatched (0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN6_Latched (1UL) /*!< Criteria has been met */

/* Bit 5 : Status on whether PIN5 has met criteria set in PIN_CNF5.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN5_Pos (5UL) /*!< Position of PIN5 field. */
#define GPIO_LATCH_PIN5_Msk (0x1UL << GPIO_LATCH_PIN5_Pos) /*!< Bit mask of PIN5 field. */
#define GPIO_LATCH_PIN5_NotLatched (0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN5_Latched (1UL) /*!< Criteria has been met */

/* Bit 4 : Status on whether PIN4 has met criteria set in PIN_CNF4.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN4_Pos (4UL) /*!< Position of PIN4 field. */
#define GPIO_LATCH_PIN4_Msk (0x1UL << GPIO_LATCH_PIN4_Pos) /*!< Bit mask of PIN4 field. */
#define GPIO_LATCH_PIN4_NotLatched (0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN4_Latched (1UL) /*!< Criteria has been met */

/* Bit 3 : Status on whether PIN3 has met criteria set in PIN_CNF3.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN3_Pos (3UL) /*!< Position of PIN3 field. */
#define GPIO_LATCH_PIN3_Msk (0x1UL << GPIO_LATCH_PIN3_Pos) /*!< Bit mask of PIN3 field. */
#define GPIO_LATCH_PIN3_NotLatched (0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN3_Latched (1UL) /*!< Criteria has been met */

/* Bit 2 : Status on whether PIN2 has met criteria set in PIN_CNF2.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN2_Pos (2UL) /*!< Position of PIN2 field. */
#define GPIO_LATCH_PIN2_Msk (0x1UL << GPIO_LATCH_PIN2_Pos) /*!< Bit mask of PIN2 field. */
#define GPIO_LATCH_PIN2_NotLatched (0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN2_Latched (1UL) /*!< Criteria has been met */

/* Bit 1 : Status on whether PIN1 has met criteria set in PIN_CNF1.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN1_Pos (1UL) /*!< Position of PIN1 field. */
#define GPIO_LATCH_PIN1_Msk (0x1UL << GPIO_LATCH_PIN1_Pos) /*!< Bit mask of PIN1 field. */
#define GPIO_LATCH_PIN1_NotLatched (0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN1_Latched (1UL) /*!< Criteria has been met */

/* Bit 0 : Status on whether PIN0 has met criteria set in PIN_CNF0.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN0_Pos (0UL) /*!< Position of PIN0 field. */
#define GPIO_LATCH_PIN0_Msk (0x1UL << GPIO_LATCH_PIN0_Pos) /*!< Bit mask of PIN0 field. */
#define GPIO_LATCH_PIN0_NotLatched (0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN0_Latched (1UL) /*!< Criteria has been met */

/* Register: GPIO_DETECTMODE */
/* Description: Select between default DETECT signal behaviour and LDETECT mode */

/* Bit 0 : Select between default DETECT signal behaviour and LDETECT mode */
#define GPIO_DETECTMODE_DETECTMODE_Pos (0UL) /*!< Position of DETECTMODE field. */
#define GPIO_DETECTMODE_DETECTMODE_Msk (0x1UL << GPIO_DETECTMODE_DETECTMODE_Pos) /*!< Bit mask of DETECTMODE field. */
#define GPIO_DETECTMODE_DETECTMODE_Default (0UL) /*!< DETECT directly connected to PIN DETECT signals */
#define GPIO_DETECTMODE_DETECTMODE_LDETECT (1UL) /*!< Use the latched LDETECT behaviour */

/* Register: GPIO_PIN_OUT */
/* Description: Description cluster[n]: Pin n direct access output register */

/* Bit 0 : Direct access */
#define GPIO_PIN_OUT_OUT_Pos (0UL) /*!< Position of OUT field. */
#define GPIO_PIN_OUT_OUT_Msk (0x1UL << GPIO_PIN_OUT_OUT_Pos) /*!< Bit mask of OUT field. */

/* Register: GPIO_PIN_IN */
/* Description: Description cluster[n]: Pin n direct access input register */

/* Bit 0 : Direct access */
#define GPIO_PIN_IN_IN_Pos (0UL) /*!< Position of IN field. */
#define GPIO_PIN_IN_IN_Msk (0x1UL << GPIO_PIN_IN_IN_Pos) /*!< Bit mask of IN field. */

/* Register: GPIO_PIN_CNF */
/* Description: Description collection[n]: Configuration of GPIO pins */

/* Bit 24 : Override of analog mux enable signals for pads with analog functionality */
#define GPIO_PIN_CNF_ANAEN_Pos (24UL) /*!< Position of ANAEN field. */
#define GPIO_PIN_CNF_ANAEN_Msk (0x1UL << GPIO_PIN_CNF_ANAEN_Pos) /*!< Bit mask of ANAEN field. */
#define GPIO_PIN_CNF_ANAEN_Disabled (0x0UL) /*!< Override of analog mux is disabled */
#define GPIO_PIN_CNF_ANAEN_AE0 (0x1UL) /*!< Enable analog signal 0 (analog test bus) */

/* Bits 17..16 : Pin sensing mechanism */
#define GPIO_PIN_CNF_SENSE_Pos (16UL) /*!< Position of SENSE field. */
#define GPIO_PIN_CNF_SENSE_Msk (0x3UL << GPIO_PIN_CNF_SENSE_Pos) /*!< Bit mask of SENSE field. */
#define GPIO_PIN_CNF_SENSE_Disabled (0UL) /*!< Disabled */
#define GPIO_PIN_CNF_SENSE_High (2UL) /*!< Sense for high level */
#define GPIO_PIN_CNF_SENSE_Low (3UL) /*!< Sense for low level */

/* Bits 10..8 : Drive configuration */
#define GPIO_PIN_CNF_DRIVE_Pos (8UL) /*!< Position of DRIVE field. */
#define GPIO_PIN_CNF_DRIVE_Msk (0x7UL << GPIO_PIN_CNF_DRIVE_Pos) /*!< Bit mask of DRIVE field. */
#define GPIO_PIN_CNF_DRIVE_S0S1 (0UL) /*!< Standard '0', standard '1' */
#define GPIO_PIN_CNF_DRIVE_H0S1 (1UL) /*!< High drive '0', standard '1' */
#define GPIO_PIN_CNF_DRIVE_S0H1 (2UL) /*!< Standard '0', high drive '1' */
#define GPIO_PIN_CNF_DRIVE_H0H1 (3UL) /*!< High drive '0', high 'drive '1'' */
#define GPIO_PIN_CNF_DRIVE_D0S1 (4UL) /*!< Disconnect '0' standard '1' (normally used for wired-or connections) */
#define GPIO_PIN_CNF_DRIVE_D0H1 (5UL) /*!< Disconnect '0', high drive '1' (normally used for wired-or connections) */
#define GPIO_PIN_CNF_DRIVE_S0D1 (6UL) /*!< Standard '0'. disconnect '1' (normally used for wired-and connections) */
#define GPIO_PIN_CNF_DRIVE_H0D1 (7UL) /*!< High drive '0', disconnect '1' (normally used for wired-and connections) */

/* Bits 3..2 : Pull configuration */
#define GPIO_PIN_CNF_PULL_Pos (2UL) /*!< Position of PULL field. */
#define GPIO_PIN_CNF_PULL_Msk (0x3UL << GPIO_PIN_CNF_PULL_Pos) /*!< Bit mask of PULL field. */
#define GPIO_PIN_CNF_PULL_Disabled (0UL) /*!< No pull */
#define GPIO_PIN_CNF_PULL_Pulldown (1UL) /*!< Pull down on pin */
#define GPIO_PIN_CNF_PULL_Pullup (3UL) /*!< Pull up on pin */

/* Bit 1 : Connect or disconnect input buffer */
#define GPIO_PIN_CNF_INPUT_Pos (1UL) /*!< Position of INPUT field. */
#define GPIO_PIN_CNF_INPUT_Msk (0x1UL << GPIO_PIN_CNF_INPUT_Pos) /*!< Bit mask of INPUT field. */
#define GPIO_PIN_CNF_INPUT_Connect (0UL) /*!< Connect input buffer */
#define GPIO_PIN_CNF_INPUT_Disconnect (1UL) /*!< Disconnect input buffer */

/* Bit 0 : Pin direction. Same physical register as DIR register */
#define GPIO_PIN_CNF_DIR_Pos (0UL) /*!< Position of DIR field. */
#define GPIO_PIN_CNF_DIR_Msk (0x1UL << GPIO_PIN_CNF_DIR_Pos) /*!< Bit mask of DIR field. */
#define GPIO_PIN_CNF_DIR_Input (0UL) /*!< Configure pin as an input pin */
#define GPIO_PIN_CNF_DIR_Output (1UL) /*!< Configure pin as an output pin */


/* Peripheral: PDM */
/* Description: Pulse Density Modulation (Digital Microphone) Interface */

/* Register: PDM_TASKS_START */
/* Description: Starts continuous PDM transfer */

/* Bit 0 :   */
#define PDM_TASKS_START_TASKS_START_Pos (0UL) /*!< Position of TASKS_START field. */
#define PDM_TASKS_START_TASKS_START_Msk (0x1UL << PDM_TASKS_START_TASKS_START_Pos) /*!< Bit mask of TASKS_START field. */

/* Register: PDM_TASKS_STOP */
/* Description: Stops PDM transfer */

/* Bit 0 :   */
#define PDM_TASKS_STOP_TASKS_STOP_Pos (0UL) /*!< Position of TASKS_STOP field. */
#define PDM_TASKS_STOP_TASKS_STOP_Msk (0x1UL << PDM_TASKS_STOP_TASKS_STOP_Pos) /*!< Bit mask of TASKS_STOP field. */

/* Register: PDM_EVENTS_STARTED */
/* Description: PDM transfer has started */

/* Bit 0 :   */
#define PDM_EVENTS_STARTED_EVENTS_STARTED_Pos (0UL) /*!< Position of EVENTS_STARTED field. */
#define PDM_EVENTS_STARTED_EVENTS_STARTED_Msk (0x1UL << PDM_EVENTS_STARTED_EVENTS_STARTED_Pos) /*!< Bit mask of EVENTS_STARTED field. */

/* Register: PDM_EVENTS_STOPPED */
/* Description: PDM transfer has finished */

/* Bit 0 :   */
#define PDM_EVENTS_STOPPED_EVENTS_STOPPED_Pos (0UL) /*!< Position of EVENTS_STOPPED field. */
#define PDM_EVENTS_STOPPED_EVENTS_STOPPED_Msk (0x1UL << PDM_EVENTS_STOPPED_EVENTS_STOPPED_Pos) /*!< Bit mask of EVENTS_STOPPED field. */

/* Register: PDM_EVENTS_END */
/* Description: The PDM has written the last sample specified by SAMPLE.MAXCNT (or the last sample after a STOP task has been received) to Data RAM */

/* Bit 0 :   */
#define PDM_EVENTS_END_EVENTS_END_Pos (0UL) /*!< Position of EVENTS_END field. */
#define PDM_EVENTS_END_EVENTS_END_Msk (0x1UL << PDM_EVENTS_END_EVENTS_END_Pos) /*!< Bit mask of EVENTS_END field. */

/* Register: PDM_EVENTS_OVERRUN */
/* Description: PDM samples lost due to DMA destination not available */

/* Bit 0 :   */
#define PDM_EVENTS_OVERRUN_EVENTS_OVERRUN_Pos (0UL) /*!< Position of EVENTS_OVERRUN field. */
#define PDM_EVENTS_OVERRUN_EVENTS_OVERRUN_Msk (0x1UL << PDM_EVENTS_OVERRUN_EVENTS_OVERRUN_Pos) /*!< Bit mask of EVENTS_OVERRUN field. */

/* Register: PDM_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 3 : Enable or disable interrupt for OVERRUN event */
#define PDM_INTEN_OVERRUN_Pos (3UL) /*!< Position of OVERRUN field. */
#define PDM_INTEN_OVERRUN_Msk (0x1UL << PDM_INTEN_OVERRUN_Pos) /*!< Bit mask of OVERRUN field. */
#define PDM_INTEN_OVERRUN_Disabled (0UL) /*!< Disable */
#define PDM_INTEN_OVERRUN_Enabled (1UL) /*!< Enable */

/* Bit 2 : Enable or disable interrupt for END event */
#define PDM_INTEN_END_Pos (2UL) /*!< Position of END field. */
#define PDM_INTEN_END_Msk (0x1UL << PDM_INTEN_END_Pos) /*!< Bit mask of END field. */
#define PDM_INTEN_END_Disabled (0UL) /*!< Disable */
#define PDM_INTEN_END_Enabled (1UL) /*!< Enable */

/* Bit 1 : Enable or disable interrupt for STOPPED event */
#define PDM_INTEN_STOPPED_Pos (1UL) /*!< Position of STOPPED field. */
#define PDM_INTEN_STOPPED_Msk (0x1UL << PDM_INTEN_STOPPED_Pos) /*!< Bit mask of STOPPED field. */
#define PDM_INTEN_STOPPED_Disabled (0UL) /*!< Disable */
#define PDM_INTEN_STOPPED_Enabled (1UL) /*!< Enable */

/* Bit 0 : Enable or disable interrupt for STARTED event */
#define PDM_INTEN_STARTED_Pos (0UL) /*!< Position of STARTED field. */
#define PDM_INTEN_STARTED_Msk (0x1UL << PDM_INTEN_STARTED_Pos) /*!< Bit mask of STARTED field. */
#define PDM_INTEN_STARTED_Disabled (0UL) /*!< Disable */
#define PDM_INTEN_STARTED_Enabled (1UL) /*!< Enable */

/* Register: PDM_INTENSET */
/* Description: Enable interrupt */

/* Bit 3 : Write '1' to enable interrupt for OVERRUN event */
#define PDM_INTENSET_OVERRUN_Pos (3UL) /*!< Position of OVERRUN field. */
#define PDM_INTENSET_OVERRUN_Msk (0x1UL << PDM_INTENSET_OVERRUN_Pos) /*!< Bit mask of OVERRUN field. */
#define PDM_INTENSET_OVERRUN_Disabled (0UL) /*!< Read: Disabled */
#define PDM_INTENSET_OVERRUN_Enabled (1UL) /*!< Read: Enabled */
#define PDM_INTENSET_OVERRUN_Set (1UL) /*!< Enable */

/* Bit 2 : Write '1' to enable interrupt for END event */
#define PDM_INTENSET_END_Pos (2UL) /*!< Position of END field. */
#define PDM_INTENSET_END_Msk (0x1UL << PDM_INTENSET_END_Pos) /*!< Bit mask of END field. */
#define PDM_INTENSET_END_Disabled (0UL) /*!< Read: Disabled */
#define PDM_INTENSET_END_Enabled (1UL) /*!< Read: Enabled */
#define PDM_INTENSET_END_Set (1UL) /*!< Enable */

/* Bit 1 : Write '1' to enable interrupt for STOPPED event */
#define PDM_INTENSET_STOPPED_Pos (1UL) /*!< Position of STOPPED field. */
#define PDM_INTENSET_STOPPED_Msk (0x1UL << PDM_INTENSET_STOPPED_Pos) /*!< Bit mask of STOPPED field. */
#define PDM_INTENSET_STOPPED_Disabled (0UL) /*!< Read: Disabled */
#define PDM_INTENSET_STOPPED_Enabled (1UL) /*!< Read: Enabled */
#define PDM_INTENSET_STOPPED_Set (1UL) /*!< Enable */

/* Bit 0 : Write '1' to enable interrupt for STARTED event */
#define PDM_INTENSET_STARTED_Pos (0UL) /*!< Position of STARTED field. */
#define PDM_INTENSET_STARTED_Msk (0x1UL << PDM_INTENSET_STARTED_Pos) /*!< Bit mask of STARTED field. */
#define PDM_INTENSET_STARTED_Disabled (0UL) /*!< Read: Disabled */
#define PDM_INTENSET_STARTED_Enabled (1UL) /*!< Read: Enabled */
#define PDM_INTENSET_STARTED_Set (1UL) /*!< Enable */

/* Register: PDM_INTENCLR */
/* Description: Disable interrupt */

/* Bit 3 : Write '1' to disable interrupt for OVERRUN event */
#define PDM_INTENCLR_OVERRUN_Pos (3UL) /*!< Position of OVERRUN field. */
#define PDM_INTENCLR_OVERRUN_Msk (0x1UL << PDM_INTENCLR_OVERRUN_Pos) /*!< Bit mask of OVERRUN field. */
#define PDM_INTENCLR_OVERRUN_Disabled (0UL) /*!< Read: Disabled */
#define PDM_INTENCLR_OVERRUN_Enabled (1UL) /*!< Read: Enabled */
#define PDM_INTENCLR_OVERRUN_Clear (1UL) /*!< Disable */

/* Bit 2 : Write '1' to disable interrupt for END event */
#define PDM_INTENCLR_END_Pos (2UL) /*!< Position of END field. */
#define PDM_INTENCLR_END_Msk (0x1UL << PDM_INTENCLR_END_Pos) /*!< Bit mask of END field. */
#define PDM_INTENCLR_END_Disabled (0UL) /*!< Read: Disabled */
#define PDM_INTENCLR_END_Enabled (1UL) /*!< Read: Enabled */
#define PDM_INTENCLR_END_Clear (1UL) /*!< Disable */

/* Bit 1 : Write '1' to disable interrupt for STOPPED event */
#define PDM_INTENCLR_STOPPED_Pos (1UL) /*!< Position of STOPPED field. */
#define PDM_INTENCLR_STOPPED_Msk (0x1UL << PDM_INTENCLR_STOPPED_Pos) /*!< Bit mask of STOPPED field. */
#define PDM_INTENCLR_STOPPED_Disabled (0UL) /*!< Read: Disabled */
#define PDM_INTENCLR_STOPPED_Enabled (1UL) /*!< Read: Enabled */
#define PDM_INTENCLR_STOPPED_Clear (1UL) /*!< Disable */

/* Bit 0 : Write '1' to disable interrupt for STARTED event */
#define PDM_INTENCLR_STARTED_Pos (0UL) /*!< Position of STARTED field. */
#define PDM_INTENCLR_STARTED_Msk (0x1UL << PDM_INTENCLR_STARTED_Pos) /*!< Bit mask of STARTED field. */
#define PDM_INTENCLR_STARTED_Disabled (0UL) /*!< Read: Disabled */
#define PDM_INTENCLR_STARTED_Enabled (1UL) /*!< Read: Enabled */
#define PDM_INTENCLR_STARTED_Clear (1UL) /*!< Disable */

/* Register: PDM_ENABLE */
/* Description: PDM module enable register */

/* Bit 0 : Enable or disable PDM module */
#define PDM_ENABLE_ENABLE_Pos (0UL) /*!< Position of ENABLE field. */
#define PDM_ENABLE_ENABLE_Msk (0x1UL << PDM_ENABLE_ENABLE_Pos) /*!< Bit mask of ENABLE field. */
#define PDM_ENABLE_ENABLE_Disabled (0UL) /*!< Disable */
#define PDM_ENABLE_ENABLE_Enabled (1UL) /*!< Enable */

/* Register: PDM_PDMCLKCTRL */
/* Description: PDM clock generator control */

/* Bits 31..0 : PDM_CLK frequency */
#define PDM_PDMCLKCTRL_FREQ_Pos (0UL) /*!< Position of FREQ field. */
#define PDM_PDMCLKCTRL_FREQ_Msk (0xFFFFFFFFUL << PDM_PDMCLKCTRL_FREQ_Pos) /*!< Bit mask of FREQ field. */
#define PDM_PDMCLKCTRL_FREQ_1000K (0x08000000UL) /*!< PDM_CLK = 32 MHz / 32 = 1.000 MHz */
#define PDM_PDMCLKCTRL_FREQ_Default (0x08400000UL) /*!< PDM_CLK = 32 MHz / 31 = 1.032 MHz Assumes a 20 bit Baud Rate Generator (BRG) dividing the 32 MHz clock. Output of BRG is connected to PDM_CLK, the filter source clock requires twice that rate, a frequency doubler is built in the module to provide 2.048 MHz, which implies a filter clockdiv ratio hardcoded at x2 to the IP. */
#define PDM_PDMCLKCTRL_FREQ_1067K (0x08800000UL) /*!< PDM_CLK = 32 MHz / 30 = 1.067 MHz */

/* Register: PDM_MODE */
/* Description: Defines the routing of the connected PDM microphones' signals */

/* Bit 1 : Defines on which PDM_CLK edge Left (or mono) is sampled */
#define PDM_MODE_EDGE_Pos (1UL) /*!< Position of EDGE field. */
#define PDM_MODE_EDGE_Msk (0x1UL << PDM_MODE_EDGE_Pos) /*!< Bit mask of EDGE field. */
#define PDM_MODE_EDGE_LeftFalling (0UL) /*!< Left (or mono) is sampled on falling edge of PDM_CLK */
#define PDM_MODE_EDGE_LeftRising (1UL) /*!< Left (or mono) is sampled on rising edge of PDM_CLK */

/* Bit 0 : Mono or stereo operation Mono also disables the gated clock to the right filter bank */
#define PDM_MODE_OPERATION_Pos (0UL) /*!< Position of OPERATION field. */
#define PDM_MODE_OPERATION_Msk (0x1UL << PDM_MODE_OPERATION_Pos) /*!< Bit mask of OPERATION field. */
#define PDM_MODE_OPERATION_Stereo (0UL) /*!< Sample and store one pair (Left + Right) of 16bit samples per RAM word R=[31:16]; L=[15:0] */
#define PDM_MODE_OPERATION_Mono (1UL) /*!< Sample and store two successive Left samples (16 bit each) per RAM word L1=[31:16]; L0=[15:0] */

/* Register: PDM_FDBYPASS */
/* Description: Bypass the frequency doubler in the PDM clock generation */

/* Bit 0 : Bypass the frequency doubler in the PDM clock generation, and revert to a simple divider structure. */
#define PDM_FDBYPASS_BYPASS_Pos (0UL) /*!< Position of BYPASS field. */
#define PDM_FDBYPASS_BYPASS_Msk (0x1UL << PDM_FDBYPASS_BYPASS_Pos) /*!< Bit mask of BYPASS field. */
#define PDM_FDBYPASS_BYPASS_DoublerActive (0UL) /*!< PDMCLKCTRL determines directly the PDM_CLK frequency. A doubler is used to provide twice that clock to the filters. This allows better accuracy on PDM_CLK. */
#define PDM_FDBYPASS_BYPASS_DividerActive (1UL) /*!< PDMCLKCTRL determines the clock provided to the filters, PDM_CLK is generated by dividing that clock by two. This results in less accuracy on PDM_CLK. */

/* Register: PDM_RXDLDATA */
/* Description: Left sample from filter output */

/* Bits 15..0 : Left sample from filter output */
#define PDM_RXDLDATA_RXDLDATA_Pos (0UL) /*!< Position of RXDLDATA field. */
#define PDM_RXDLDATA_RXDLDATA_Msk (0xFFFFUL << PDM_RXDLDATA_RXDLDATA_Pos) /*!< Bit mask of RXDLDATA field. */

/* Register: PDM_RXDRDATA */
/* Description: Right sample from filter output */

/* Bits 15..0 : Right sample from filter output */
#define PDM_RXDRDATA_RXDRDATA_Pos (0UL) /*!< Position of RXDRDATA field. */
#define PDM_RXDRDATA_RXDRDATA_Msk (0xFFFFUL << PDM_RXDRDATA_RXDRDATA_Pos) /*!< Bit mask of RXDRDATA field. */

/* Register: PDM_GAINL */
/* Description: Left output gain adjustment */

/* Bits 6..0 : Left output gain adjustment, in 0.5 dB steps, around the default module gain (see electrical parameters) 0x00    -20 dB gain adjust 0x01  -19.5 dB gain adjust (...) 0x27   -0.5 dB gain adjust 0x28      0 dB gain adjust 0x29   +0.5 dB gain adjust (...) 0x4F  +19.5 dB gain adjust 0x50    +20 dB gain adjust 0x51    +20 dB gain adjust 0x52    +20 dB gain adjust (...) */
#define PDM_GAINL_GAINL_Pos (0UL) /*!< Position of GAINL field. */
#define PDM_GAINL_GAINL_Msk (0x7FUL << PDM_GAINL_GAINL_Pos) /*!< Bit mask of GAINL field. */
#define PDM_GAINL_GAINL_MinGain (0x00UL) /*!< -20dB gain adjustment (minimum) */
#define PDM_GAINL_GAINL_DefaultGain (0x28UL) /*!< 0dB gain adjustment ('2500 RMS' requirement) */
#define PDM_GAINL_GAINL_MaxGain (0x50UL) /*!< +20dB gain adjustment (maximum) */

/* Register: PDM_GAINR */
/* Description: Right output gain adjustment */

/* Bits 7..0 : Right output gain adjustment, in 0.5 dB steps, around the default module gain (see electrical parameters) */
#define PDM_GAINR_GAINR_Pos (0UL) /*!< Position of GAINR field. */
#define PDM_GAINR_GAINR_Msk (0xFFUL << PDM_GAINR_GAINR_Pos) /*!< Bit mask of GAINR field. */
#define PDM_GAINR_GAINR_MinGain (0x00UL) /*!< -20dB gain adjustment (minimum) */
#define PDM_GAINR_GAINR_DefaultGain (0x28UL) /*!< 0dB gain adjustment ('2500 RMS' requirement) */
#define PDM_GAINR_GAINR_MaxGain (0x50UL) /*!< +20dB gain adjustment (maximum) */

/* Register: PDM_FILTER_HPPOLE */
/* Description: Settings for the high-pass filter */

/* Bits 3..0 : Settings for the high-pass filter -3dB gain pole, assuming filter source clock of 2.048 MHz */
#define PDM_FILTER_HPPOLE_HPPOLE_Pos (0UL) /*!< Position of HPPOLE field. */
#define PDM_FILTER_HPPOLE_HPPOLE_Msk (0xFUL << PDM_FILTER_HPPOLE_HPPOLE_Pos) /*!< Bit mask of HPPOLE field. */
#define PDM_FILTER_HPPOLE_HPPOLE_p134k (1UL) /*!< 134010 Hz */
#define PDM_FILTER_HPPOLE_HPPOLE_p73k (2UL) /*!< 73037 Hz */
#define PDM_FILTER_HPPOLE_HPPOLE_p38k (3UL) /*!< 38436 Hz */
#define PDM_FILTER_HPPOLE_HPPOLE_p19k (4UL) /*!< 19767 Hz */
#define PDM_FILTER_HPPOLE_HPPOLE_p10k (5UL) /*!< 10031 Hz */
#define PDM_FILTER_HPPOLE_HPPOLE_p5k (6UL) /*!< 5054 Hz */
#define PDM_FILTER_HPPOLE_HPPOLE_p2k5 (7UL) /*!< 2537 Hz */
#define PDM_FILTER_HPPOLE_HPPOLE_p1k2 (8UL) /*!< 1271 Hz */
#define PDM_FILTER_HPPOLE_HPPOLE_p640 (9UL) /*!< 636 Hz */
#define PDM_FILTER_HPPOLE_HPPOLE_p320 (10UL) /*!< 318 Hz */
#define PDM_FILTER_HPPOLE_HPPOLE_p160 (11UL) /*!< 159 Hz */
#define PDM_FILTER_HPPOLE_HPPOLE_p80 (12UL) /*!< 80 Hz */
#define PDM_FILTER_HPPOLE_HPPOLE_p40 (13UL) /*!< 40 Hz */
#define PDM_FILTER_HPPOLE_HPPOLE_p20 (14UL) /*!< 20 Hz */
#define PDM_FILTER_HPPOLE_HPPOLE_p10 (15UL) /*!< 10 Hz */

/* Register: PDM_FILTER_HPDISABLE */
/* Description: High pass filter disable */

/* Bit 0 : High pass filter disable */
#define PDM_FILTER_HPDISABLE_DISABLE_Pos (0UL) /*!< Position of DISABLE field. */
#define PDM_FILTER_HPDISABLE_DISABLE_Msk (0x1UL << PDM_FILTER_HPDISABLE_DISABLE_Pos) /*!< Bit mask of DISABLE field. */
#define PDM_FILTER_HPDISABLE_DISABLE_Enable (0UL) /*!< High pass filter enabled */
#define PDM_FILTER_HPDISABLE_DISABLE_Disable (1UL) /*!< High pass filter disabled */

/* Register: PDM_FILTER_SOFTMUTE */
/* Description: Soft mute function */

/* Bit 0 : Soft mute function */
#define PDM_FILTER_SOFTMUTE_ENABLE_Pos (0UL) /*!< Position of ENABLE field. */
#define PDM_FILTER_SOFTMUTE_ENABLE_Msk (0x1UL << PDM_FILTER_SOFTMUTE_ENABLE_Pos) /*!< Bit mask of ENABLE field. */
#define PDM_FILTER_SOFTMUTE_ENABLE_Disabled (0UL) /*!< Disable soft mute function */
#define PDM_FILTER_SOFTMUTE_ENABLE_Enabled (1UL) /*!< Enable soft mute function */

/* Register: PDM_FILTER_SOFTCYCLES */
/* Description: Soft mute settings */

/* Bits 2..0 : Soft mute settings: amount of cycles for transition */
#define PDM_FILTER_SOFTCYCLES_DISABLE_Pos (0UL) /*!< Position of DISABLE field. */
#define PDM_FILTER_SOFTCYCLES_DISABLE_Msk (0x7UL << PDM_FILTER_SOFTCYCLES_DISABLE_Pos) /*!< Bit mask of DISABLE field. */
#define PDM_FILTER_SOFTCYCLES_DISABLE_s16 (0UL) /*!< 16 filter source clock cycles */
#define PDM_FILTER_SOFTCYCLES_DISABLE_s32 (1UL) /*!< 32 filter source clock cycles */
#define PDM_FILTER_SOFTCYCLES_DISABLE_s48 (2UL) /*!< 48 filter source clock cycles */
#define PDM_FILTER_SOFTCYCLES_DISABLE_s64 (3UL) /*!< 64 filter source clock cycles */
#define PDM_FILTER_SOFTCYCLES_DISABLE_s80 (4UL) /*!< 80 filter source clock cycles */
#define PDM_FILTER_SOFTCYCLES_DISABLE_s96 (5UL) /*!< 96 filter source clock cycles */
#define PDM_FILTER_SOFTCYCLES_DISABLE_s112 (6UL) /*!< 112 filter source clock cycles */
#define PDM_FILTER_SOFTCYCLES_DISABLE_s128 (7UL) /*!< 128 filter source clock cycles */

/* Register: PDM_FILTER_SAMPLEDELAY */
/* Description: Input Data Sampling with Number of PDM_CLK Clock Cycle Delay */

/* Bit 0 : Input Data Sampling with Number of PDM_CLK Clock Cycle Delay */
#define PDM_FILTER_SAMPLEDELAY_DELAY_Pos (0UL) /*!< Position of DELAY field. */
#define PDM_FILTER_SAMPLEDELAY_DELAY_Msk (0x1UL << PDM_FILTER_SAMPLEDELAY_DELAY_Pos) /*!< Bit mask of DELAY field. */
#define PDM_FILTER_SAMPLEDELAY_DELAY_x2 (0UL) /*!< 2x cycles */
#define PDM_FILTER_SAMPLEDELAY_DELAY_x4 (1UL) /*!< 4x cycles */

/* Register: PDM_PHASE */
/* Description: Selection of delay on the clock line (to avoid potential setup&amp;hold timing violation on input data) */

/* Bits 3..0 : To avoid potential setup&amp;hold timing violation on input data, this register provides selection between 14 phase delay registers (15 taps), which each provide an additional 31.25ns delay of pdmClockToPad relative to pdmClockToFilter. */
#define PDM_PHASE_PHASE_Pos (0UL) /*!< Position of PHASE field. */
#define PDM_PHASE_PHASE_Msk (0xFUL << PDM_PHASE_PHASE_Pos) /*!< Bit mask of PHASE field. */

/* Register: PDM_PSEL_CLK */
/* Description: Pin number configuration for PDM CLK signal */

/* Bit 31 : Connection */
#define PDM_PSEL_CLK_CONNECT_Pos (31UL) /*!< Position of CONNECT field. */
#define PDM_PSEL_CLK_CONNECT_Msk (0x1UL << PDM_PSEL_CLK_CONNECT_Pos) /*!< Bit mask of CONNECT field. */
#define PDM_PSEL_CLK_CONNECT_Connected (0UL) /*!< Connect */
#define PDM_PSEL_CLK_CONNECT_Disconnected (1UL) /*!< Disconnect */

/* Bits 4..0 : Pin number */
#define PDM_PSEL_CLK_PIN_Pos (0UL) /*!< Position of PIN field. */
#define PDM_PSEL_CLK_PIN_Msk (0x1FUL << PDM_PSEL_CLK_PIN_Pos) /*!< Bit mask of PIN field. */

/* Register: PDM_PSEL_DIN */
/* Description: Pin number configuration for PDM DIN signal */

/* Bit 31 : Connection */
#define PDM_PSEL_DIN_CONNECT_Pos (31UL) /*!< Position of CONNECT field. */
#define PDM_PSEL_DIN_CONNECT_Msk (0x1UL << PDM_PSEL_DIN_CONNECT_Pos) /*!< Bit mask of CONNECT field. */
#define PDM_PSEL_DIN_CONNECT_Connected (0UL) /*!< Connect */
#define PDM_PSEL_DIN_CONNECT_Disconnected (1UL) /*!< Disconnect */

/* Bits 4..0 : Pin number */
#define PDM_PSEL_DIN_PIN_Pos (0UL) /*!< Position of PIN field. */
#define PDM_PSEL_DIN_PIN_Msk (0x1FUL << PDM_PSEL_DIN_PIN_Pos) /*!< Bit mask of PIN field. */

/* Register: PDM_TSEL */
/* Description: Trim value for ramTSEL[1:0] on the RamBist interface */

/* Bits 1..0 : Trim value for ramTSEL[1:0] on the RamBist interface */
#define PDM_TSEL_RAMTSEL_Pos (0UL) /*!< Position of RAMTSEL field. */
#define PDM_TSEL_RAMTSEL_Msk (0x3UL << PDM_TSEL_RAMTSEL_Pos) /*!< Bit mask of RAMTSEL field. */

/* Register: PDM_SAMPLE_PTR */
/* Description: RAM address pointer to write samples to with EasyDMA */

/* Bits 31..0 : Address to write PDM samples to over DMA */
#define PDM_SAMPLE_PTR_SAMPLEPTR_Pos (0UL) /*!< Position of SAMPLEPTR field. */
#define PDM_SAMPLE_PTR_SAMPLEPTR_Msk (0xFFFFFFFFUL << PDM_SAMPLE_PTR_SAMPLEPTR_Pos) /*!< Bit mask of SAMPLEPTR field. */

/* Register: PDM_SAMPLE_MAXCNT */
/* Description: Number of samples to allocate memory for in EasyDMA mode */

/* Bits 14..0 : Length of DMA RAM allocation in number of samples */
#define PDM_SAMPLE_MAXCNT_BUFFSIZE_Pos (0UL) /*!< Position of BUFFSIZE field. */
#define PDM_SAMPLE_MAXCNT_BUFFSIZE_Msk (0x7FFFUL << PDM_SAMPLE_MAXCNT_BUFFSIZE_Pos) /*!< Bit mask of BUFFSIZE field. */

/* Register: PDM_SAMPLE_AMOUNT */
/* Description: Number of samples transferred into Data RAM since last START task */

/* Bits 14..0 : Number of samples transferred into Data RAM since last START task */
#define PDM_SAMPLE_AMOUNT_AMOUNT_Pos (0UL) /*!< Position of AMOUNT field. */
#define PDM_SAMPLE_AMOUNT_AMOUNT_Msk (0x7FFFUL << PDM_SAMPLE_AMOUNT_AMOUNT_Pos) /*!< Bit mask of AMOUNT field. */

/* Register: PDM_POWER */
/* Description: Peripheral power control */

/* Bit 0 : Peripheral power control. The peripheral and its registers will be reset to its initial state by switching the peripheral off and then back on again. */
#define PDM_POWER_POWER_Pos (0UL) /*!< Position of POWER field. */
#define PDM_POWER_POWER_Msk (0x1UL << PDM_POWER_POWER_Pos) /*!< Bit mask of POWER field. */
#define PDM_POWER_POWER_Disabled (0UL) /*!< Peripheral is powered off */
#define PDM_POWER_POWER_Enabled (1UL) /*!< Peripheral is powered on */


/* Peripheral: POWER */
/* Description: Power control */

/* Register: POWER_TASKS_CONSTLAT */
/* Description: Enable constant latency mode */

/* Bit 0 :   */
#define POWER_TASKS_CONSTLAT_TASKS_CONSTLAT_Pos (0UL) /*!< Position of TASKS_CONSTLAT field. */
#define POWER_TASKS_CONSTLAT_TASKS_CONSTLAT_Msk (0x1UL << POWER_TASKS_CONSTLAT_TASKS_CONSTLAT_Pos) /*!< Bit mask of TASKS_CONSTLAT field. */

/* Register: POWER_TASKS_LOWPWR */
/* Description: Enable low power mode (variable latency) */

/* Bit 0 :   */
#define POWER_TASKS_LOWPWR_TASKS_LOWPWR_Pos (0UL) /*!< Position of TASKS_LOWPWR field. */
#define POWER_TASKS_LOWPWR_TASKS_LOWPWR_Msk (0x1UL << POWER_TASKS_LOWPWR_TASKS_LOWPWR_Pos) /*!< Bit mask of TASKS_LOWPWR field. */

/* Register: POWER_EVENTS_POFWARN */
/* Description: Power failure warning */

/* Bit 0 :   */
#define POWER_EVENTS_POFWARN_EVENTS_POFWARN_Pos (0UL) /*!< Position of EVENTS_POFWARN field. */
#define POWER_EVENTS_POFWARN_EVENTS_POFWARN_Msk (0x1UL << POWER_EVENTS_POFWARN_EVENTS_POFWARN_Pos) /*!< Bit mask of EVENTS_POFWARN field. */

/* Register: POWER_EVENTS_SLEEPENTER */
/* Description: CPU entered WFI/WFE sleep */

/* Bit 0 :   */
#define POWER_EVENTS_SLEEPENTER_EVENTS_SLEEPENTER_Pos (0UL) /*!< Position of EVENTS_SLEEPENTER field. */
#define POWER_EVENTS_SLEEPENTER_EVENTS_SLEEPENTER_Msk (0x1UL << POWER_EVENTS_SLEEPENTER_EVENTS_SLEEPENTER_Pos) /*!< Bit mask of EVENTS_SLEEPENTER field. */

/* Register: POWER_EVENTS_SLEEPEXIT */
/* Description: CPU exited WFI/WFE sleep */

/* Bit 0 :   */
#define POWER_EVENTS_SLEEPEXIT_EVENTS_SLEEPEXIT_Pos (0UL) /*!< Position of EVENTS_SLEEPEXIT field. */
#define POWER_EVENTS_SLEEPEXIT_EVENTS_SLEEPEXIT_Msk (0x1UL << POWER_EVENTS_SLEEPEXIT_EVENTS_SLEEPEXIT_Pos) /*!< Bit mask of EVENTS_SLEEPEXIT field. */

/* Register: POWER_INTENSET */
/* Description: Enable interrupt */

/* Bit 6 : Write '1' to enable interrupt for SLEEPEXIT event */
#define POWER_INTENSET_SLEEPEXIT_Pos (6UL) /*!< Position of SLEEPEXIT field. */
#define POWER_INTENSET_SLEEPEXIT_Msk (0x1UL << POWER_INTENSET_SLEEPEXIT_Pos) /*!< Bit mask of SLEEPEXIT field. */
#define POWER_INTENSET_SLEEPEXIT_Disabled (0UL) /*!< Read: Disabled */
#define POWER_INTENSET_SLEEPEXIT_Enabled (1UL) /*!< Read: Enabled */
#define POWER_INTENSET_SLEEPEXIT_Set (1UL) /*!< Enable */

/* Bit 5 : Write '1' to enable interrupt for SLEEPENTER event */
#define POWER_INTENSET_SLEEPENTER_Pos (5UL) /*!< Position of SLEEPENTER field. */
#define POWER_INTENSET_SLEEPENTER_Msk (0x1UL << POWER_INTENSET_SLEEPENTER_Pos) /*!< Bit mask of SLEEPENTER field. */
#define POWER_INTENSET_SLEEPENTER_Disabled (0UL) /*!< Read: Disabled */
#define POWER_INTENSET_SLEEPENTER_Enabled (1UL) /*!< Read: Enabled */
#define POWER_INTENSET_SLEEPENTER_Set (1UL) /*!< Enable */

/* Bit 2 : Write '1' to enable interrupt for POFWARN event */
#define POWER_INTENSET_POFWARN_Pos (2UL) /*!< Position of POFWARN field. */
#define POWER_INTENSET_POFWARN_Msk (0x1UL << POWER_INTENSET_POFWARN_Pos) /*!< Bit mask of POFWARN field. */
#define POWER_INTENSET_POFWARN_Disabled (0UL) /*!< Read: Disabled */
#define POWER_INTENSET_POFWARN_Enabled (1UL) /*!< Read: Enabled */
#define POWER_INTENSET_POFWARN_Set (1UL) /*!< Enable */

/* Register: POWER_INTENCLR */
/* Description: Disable interrupt */

/* Bit 6 : Write '1' to disable interrupt for SLEEPEXIT event */
#define POWER_INTENCLR_SLEEPEXIT_Pos (6UL) /*!< Position of SLEEPEXIT field. */
#define POWER_INTENCLR_SLEEPEXIT_Msk (0x1UL << POWER_INTENCLR_SLEEPEXIT_Pos) /*!< Bit mask of SLEEPEXIT field. */
#define POWER_INTENCLR_SLEEPEXIT_Disabled (0UL) /*!< Read: Disabled */
#define POWER_INTENCLR_SLEEPEXIT_Enabled (1UL) /*!< Read: Enabled */
#define POWER_INTENCLR_SLEEPEXIT_Clear (1UL) /*!< Disable */

/* Bit 5 : Write '1' to disable interrupt for SLEEPENTER event */
#define POWER_INTENCLR_SLEEPENTER_Pos (5UL) /*!< Position of SLEEPENTER field. */
#define POWER_INTENCLR_SLEEPENTER_Msk (0x1UL << POWER_INTENCLR_SLEEPENTER_Pos) /*!< Bit mask of SLEEPENTER field. */
#define POWER_INTENCLR_SLEEPENTER_Disabled (0UL) /*!< Read: Disabled */
#define POWER_INTENCLR_SLEEPENTER_Enabled (1UL) /*!< Read: Enabled */
#define POWER_INTENCLR_SLEEPENTER_Clear (1UL) /*!< Disable */

/* Bit 2 : Write '1' to disable interrupt for POFWARN event */
#define POWER_INTENCLR_POFWARN_Pos (2UL) /*!< Position of POFWARN field. */
#define POWER_INTENCLR_POFWARN_Msk (0x1UL << POWER_INTENCLR_POFWARN_Pos) /*!< Bit mask of POFWARN field. */
#define POWER_INTENCLR_POFWARN_Disabled (0UL) /*!< Read: Disabled */
#define POWER_INTENCLR_POFWARN_Enabled (1UL) /*!< Read: Enabled */
#define POWER_INTENCLR_POFWARN_Clear (1UL) /*!< Disable */

/* Register: POWER_RESETREAS */
/* Description: Reset reason */

/* Bit 18 : Reset due to wake up from System OFF mode when wakeup is triggered from entering into debug interface mode */
#define POWER_RESETREAS_DIF_Pos (18UL) /*!< Position of DIF field. */
#define POWER_RESETREAS_DIF_Msk (0x1UL << POWER_RESETREAS_DIF_Pos) /*!< Bit mask of DIF field. */
#define POWER_RESETREAS_DIF_NotDetected (0UL) /*!< Not detected */
#define POWER_RESETREAS_DIF_Detected (1UL) /*!< Detected */

/* Bit 16 : Reset due to wake up from System OFF mode when wakeup is triggered from DETECT signal from GPIO */
#define POWER_RESETREAS_OFF_Pos (16UL) /*!< Position of OFF field. */
#define POWER_RESETREAS_OFF_Msk (0x1UL << POWER_RESETREAS_OFF_Pos) /*!< Bit mask of OFF field. */
#define POWER_RESETREAS_OFF_NotDetected (0UL) /*!< Not detected */
#define POWER_RESETREAS_OFF_Detected (1UL) /*!< Detected */

/* Bit 3 : Reset from CPU lock-up detected */
#define POWER_RESETREAS_LOCKUP_Pos (3UL) /*!< Position of LOCKUP field. */
#define POWER_RESETREAS_LOCKUP_Msk (0x1UL << POWER_RESETREAS_LOCKUP_Pos) /*!< Bit mask of LOCKUP field. */
#define POWER_RESETREAS_LOCKUP_NotDetected (0UL) /*!< Not detected */
#define POWER_RESETREAS_LOCKUP_Detected (1UL) /*!< Detected */

/* Bit 2 : Reset from soft reset detected */
#define POWER_RESETREAS_SREQ_Pos (2UL) /*!< Position of SREQ field. */
#define POWER_RESETREAS_SREQ_Msk (0x1UL << POWER_RESETREAS_SREQ_Pos) /*!< Bit mask of SREQ field. */
#define POWER_RESETREAS_SREQ_NotDetected (0UL) /*!< Not detected */
#define POWER_RESETREAS_SREQ_Detected (1UL) /*!< Detected */

/* Bit 1 : Reset from watchdog detected */
#define POWER_RESETREAS_DOG_Pos (1UL) /*!< Position of DOG field. */
#define POWER_RESETREAS_DOG_Msk (0x1UL << POWER_RESETREAS_DOG_Pos) /*!< Bit mask of DOG field. */
#define POWER_RESETREAS_DOG_NotDetected (0UL) /*!< Not detected */
#define POWER_RESETREAS_DOG_Detected (1UL) /*!< Detected */

/* Bit 0 : Reset from pin-reset detected */
#define POWER_RESETREAS_RESETPIN_Pos (0UL) /*!< Position of RESETPIN field. */
#define POWER_RESETREAS_RESETPIN_Msk (0x1UL << POWER_RESETREAS_RESETPIN_Pos) /*!< Bit mask of RESETPIN field. */
#define POWER_RESETREAS_RESETPIN_NotDetected (0UL) /*!< Not detected */
#define POWER_RESETREAS_RESETPIN_Detected (1UL) /*!< Detected */

/* Register: POWER_PERRDY */
/* Description: Peripheral on/off status */

/* Bit 31 : Ready bit for PPI (will always be read as '1') */
#define POWER_PERRDY_PPI_Pos (31UL) /*!< Position of PPI field. */
#define POWER_PERRDY_PPI_Msk (0x1UL << POWER_PERRDY_PPI_Pos) /*!< Bit mask of PPI field. */

/* Bit 30 : Ready bit for NVMC (will always be read as '1') */
#define POWER_PERRDY_NVMC_Pos (30UL) /*!< Position of NVMC field. */
#define POWER_PERRDY_NVMC_Msk (0x1UL << POWER_PERRDY_NVMC_Pos) /*!< Bit mask of NVMC field. */

/* Bit 27 : Ready bit for TIMER4 */
#define POWER_PERRDY_TIMER4_Pos (27UL) /*!< Position of TIMER4 field. */
#define POWER_PERRDY_TIMER4_Msk (0x1UL << POWER_PERRDY_TIMER4_Pos) /*!< Bit mask of TIMER4 field. */

/* Bit 26 : Ready bit for TIMER3 */
#define POWER_PERRDY_TIMER3_Pos (26UL) /*!< Position of TIMER3 field. */
#define POWER_PERRDY_TIMER3_Msk (0x1UL << POWER_PERRDY_TIMER3_Pos) /*!< Bit mask of TIMER3 field. */

/* Bit 25 : Ready bit for EGU5 */
#define POWER_PERRDY_EGU5_Pos (25UL) /*!< Position of EGU5 field. */
#define POWER_PERRDY_EGU5_Msk (0x1UL << POWER_PERRDY_EGU5_Pos) /*!< Bit mask of EGU5 field. */

/* Bit 24 : Ready bit for EGU4 */
#define POWER_PERRDY_EGU4_Pos (24UL) /*!< Position of EGU4 field. */
#define POWER_PERRDY_EGU4_Msk (0x1UL << POWER_PERRDY_EGU4_Pos) /*!< Bit mask of EGU4 field. */

/* Bit 23 : Ready bit for EGU3 */
#define POWER_PERRDY_EGU3_Pos (23UL) /*!< Position of EGU3 field. */
#define POWER_PERRDY_EGU3_Msk (0x1UL << POWER_PERRDY_EGU3_Pos) /*!< Bit mask of EGU3 field. */

/* Bit 22 : Ready bit for EGU2 */
#define POWER_PERRDY_EGU2_Pos (22UL) /*!< Position of EGU2 field. */
#define POWER_PERRDY_EGU2_Msk (0x1UL << POWER_PERRDY_EGU2_Pos) /*!< Bit mask of EGU2 field. */

/* Bit 21 : Ready bit for EGU1 */
#define POWER_PERRDY_EGU1_Pos (21UL) /*!< Position of EGU1 field. */
#define POWER_PERRDY_EGU1_Msk (0x1UL << POWER_PERRDY_EGU1_Pos) /*!< Bit mask of EGU1 field. */

/* Bit 20 : Ready bit for EGU0 */
#define POWER_PERRDY_EGU0_Pos (20UL) /*!< Position of EGU0 field. */
#define POWER_PERRDY_EGU0_Msk (0x1UL << POWER_PERRDY_EGU0_Pos) /*!< Bit mask of EGU0 field. */

/* Bit 19 : Ready bit for COMP and LPCOMP */
#define POWER_PERRDY_COMP_LPCOMP_Pos (19UL) /*!< Position of COMP_LPCOMP field. */
#define POWER_PERRDY_COMP_LPCOMP_Msk (0x1UL << POWER_PERRDY_COMP_LPCOMP_Pos) /*!< Bit mask of COMP_LPCOMP field. */

/* Bit 18 : Ready bit for QDEC */
#define POWER_PERRDY_QDEC_Pos (18UL) /*!< Position of QDEC field. */
#define POWER_PERRDY_QDEC_Msk (0x1UL << POWER_PERRDY_QDEC_Pos) /*!< Bit mask of QDEC field. */

/* Bit 17 : Ready bit for RTC1 */
#define POWER_PERRDY_RTC1_Pos (17UL) /*!< Position of RTC1 field. */
#define POWER_PERRDY_RTC1_Msk (0x1UL << POWER_PERRDY_RTC1_Pos) /*!< Bit mask of RTC1 field. */

/* Bit 16 : Ready bit for WDT */
#define POWER_PERRDY_WDT_Pos (16UL) /*!< Position of WDT field. */
#define POWER_PERRDY_WDT_Msk (0x1UL << POWER_PERRDY_WDT_Pos) /*!< Bit mask of WDT field. */

/* Bit 15 : Ready bit for CCM and AAR */
#define POWER_PERRDY_CCM_AAR_Pos (15UL) /*!< Position of CCM_AAR field. */
#define POWER_PERRDY_CCM_AAR_Msk (0x1UL << POWER_PERRDY_CCM_AAR_Pos) /*!< Bit mask of CCM_AAR field. */

/* Bit 14 : Ready bit for ECB */
#define POWER_PERRDY_ECB_Pos (14UL) /*!< Position of ECB field. */
#define POWER_PERRDY_ECB_Msk (0x1UL << POWER_PERRDY_ECB_Pos) /*!< Bit mask of ECB field. */

/* Bit 13 : Ready bit for RNG */
#define POWER_PERRDY_RNG_Pos (13UL) /*!< Position of RNG field. */
#define POWER_PERRDY_RNG_Msk (0x1UL << POWER_PERRDY_RNG_Pos) /*!< Bit mask of RNG field. */

/* Bit 12 : Ready bit for TEMP */
#define POWER_PERRDY_TEMP_Pos (12UL) /*!< Position of TEMP field. */
#define POWER_PERRDY_TEMP_Msk (0x1UL << POWER_PERRDY_TEMP_Pos) /*!< Bit mask of TEMP field. */

/* Bit 11 : Ready bit for RTC0 */
#define POWER_PERRDY_RTC0_Pos (11UL) /*!< Position of RTC0 field. */
#define POWER_PERRDY_RTC0_Msk (0x1UL << POWER_PERRDY_RTC0_Pos) /*!< Bit mask of RTC0 field. */

/* Bit 10 : Ready bit for TIMER2 */
#define POWER_PERRDY_TIMER2_Pos (10UL) /*!< Position of TIMER2 field. */
#define POWER_PERRDY_TIMER2_Msk (0x1UL << POWER_PERRDY_TIMER2_Pos) /*!< Bit mask of TIMER2 field. */

/* Bit 9 : Ready bit for TIMER1 */
#define POWER_PERRDY_TIMER1_Pos (9UL) /*!< Position of TIMER1 field. */
#define POWER_PERRDY_TIMER1_Msk (0x1UL << POWER_PERRDY_TIMER1_Pos) /*!< Bit mask of TIMER1 field. */

/* Bit 8 : Ready bit for TIMER0 */
#define POWER_PERRDY_TIMER0_Pos (8UL) /*!< Position of TIMER0 field. */
#define POWER_PERRDY_TIMER0_Msk (0x1UL << POWER_PERRDY_TIMER0_Pos) /*!< Bit mask of TIMER0 field. */

/* Bit 7 : Ready bit for ADC */
#define POWER_PERRDY_ADC_Pos (7UL) /*!< Position of ADC field. */
#define POWER_PERRDY_ADC_Msk (0x1UL << POWER_PERRDY_ADC_Pos) /*!< Bit mask of ADC field. */

/* Bit 6 : Ready bit for GPIOTE */
#define POWER_PERRDY_GPIOTE_Pos (6UL) /*!< Position of GPIOTE field. */
#define POWER_PERRDY_GPIOTE_Msk (0x1UL << POWER_PERRDY_GPIOTE_Pos) /*!< Bit mask of GPIOTE field. */

/* Bit 4 : Ready bit for SPI1 and TWI1 */
#define POWER_PERRDY_SPI1_TWI1_Pos (4UL) /*!< Position of SPI1_TWI1 field. */
#define POWER_PERRDY_SPI1_TWI1_Msk (0x1UL << POWER_PERRDY_SPI1_TWI1_Pos) /*!< Bit mask of SPI1_TWI1 field. */

/* Bit 3 : Ready bit for SPI0 and TWI0 */
#define POWER_PERRDY_SPI0_TWI0_Pos (3UL) /*!< Position of SPI0_TWI0 field. */
#define POWER_PERRDY_SPI0_TWI0_Msk (0x1UL << POWER_PERRDY_SPI0_TWI0_Pos) /*!< Bit mask of SPI0_TWI0 field. */

/* Bit 2 : Ready bit for UART0 */
#define POWER_PERRDY_UART0_Pos (2UL) /*!< Position of UART0 field. */
#define POWER_PERRDY_UART0_Msk (0x1UL << POWER_PERRDY_UART0_Pos) /*!< Bit mask of UART0 field. */

/* Bit 1 : Ready bit for RADIO */
#define POWER_PERRDY_RADIO_Pos (1UL) /*!< Position of RADIO field. */
#define POWER_PERRDY_RADIO_Msk (0x1UL << POWER_PERRDY_RADIO_Pos) /*!< Bit mask of RADIO field. */

/* Bit 0 : Ready bit for POWER and CLOCK (will always be read as '1') */
#define POWER_PERRDY_POWER_CLOCK_Pos (0UL) /*!< Position of POWER_CLOCK field. */
#define POWER_PERRDY_POWER_CLOCK_Msk (0x1UL << POWER_PERRDY_POWER_CLOCK_Pos) /*!< Bit mask of POWER_CLOCK field. */

/* Register: POWER_PERRDY2 */
/* Description: Peripheral on/off status 2 */

/* Bit 3 : Ready bit for SPI2 */
#define POWER_PERRDY2_SPI2_Pos (3UL) /*!< Position of SPI2 field. */
#define POWER_PERRDY2_SPI2_Msk (0x1UL << POWER_PERRDY2_SPI2_Pos) /*!< Bit mask of SPI2 field. */

/* Register: POWER_SYSTEMOFF */
/* Description: System OFF register */

/* Bit 0 : Enable System OFF mode */
#define POWER_SYSTEMOFF_SYSTEMOFF_Pos (0UL) /*!< Position of SYSTEMOFF field. */
#define POWER_SYSTEMOFF_SYSTEMOFF_Msk (0x1UL << POWER_SYSTEMOFF_SYSTEMOFF_Pos) /*!< Bit mask of SYSTEMOFF field. */
#define POWER_SYSTEMOFF_SYSTEMOFF_Enter (1UL) /*!< Enable System OFF mode */

/* Register: POWER_PERPOWER */
/* Description: Peripheral power configuration */

/* Bit 31 : Peripheral power bit for PPI (always on, reads always as 0, write has no effect) */
#define POWER_PERPOWER_PPI_Pos (31UL) /*!< Position of PPI field. */
#define POWER_PERPOWER_PPI_Msk (0x1UL << POWER_PERPOWER_PPI_Pos) /*!< Bit mask of PPI field. */

/* Bit 30 : Peripheral power bit for NVMC (always on, reads always as 0, write has no effect) */
#define POWER_PERPOWER_NVMC_Pos (30UL) /*!< Position of NVMC field. */
#define POWER_PERPOWER_NVMC_Msk (0x1UL << POWER_PERPOWER_NVMC_Pos) /*!< Bit mask of NVMC field. */

/* Bit 27 : Peripheral power bit for TIMER4 */
#define POWER_PERPOWER_TIMER4_Pos (27UL) /*!< Position of TIMER4 field. */
#define POWER_PERPOWER_TIMER4_Msk (0x1UL << POWER_PERPOWER_TIMER4_Pos) /*!< Bit mask of TIMER4 field. */

/* Bit 26 : Peripheral power bit for TIMER3 */
#define POWER_PERPOWER_TIMER3_Pos (26UL) /*!< Position of TIMER3 field. */
#define POWER_PERPOWER_TIMER3_Msk (0x1UL << POWER_PERPOWER_TIMER3_Pos) /*!< Bit mask of TIMER3 field. */

/* Bit 25 : Peripheral power bit for EGU5 */
#define POWER_PERPOWER_EGU5_Pos (25UL) /*!< Position of EGU5 field. */
#define POWER_PERPOWER_EGU5_Msk (0x1UL << POWER_PERPOWER_EGU5_Pos) /*!< Bit mask of EGU5 field. */

/* Bit 24 : Peripheral power bit for EGU4 */
#define POWER_PERPOWER_EGU4_Pos (24UL) /*!< Position of EGU4 field. */
#define POWER_PERPOWER_EGU4_Msk (0x1UL << POWER_PERPOWER_EGU4_Pos) /*!< Bit mask of EGU4 field. */

/* Bit 23 : Peripheral power bit for EGU3 */
#define POWER_PERPOWER_EGU3_Pos (23UL) /*!< Position of EGU3 field. */
#define POWER_PERPOWER_EGU3_Msk (0x1UL << POWER_PERPOWER_EGU3_Pos) /*!< Bit mask of EGU3 field. */

/* Bit 22 : Peripheral power bit for EGU2 */
#define POWER_PERPOWER_EGU2_Pos (22UL) /*!< Position of EGU2 field. */
#define POWER_PERPOWER_EGU2_Msk (0x1UL << POWER_PERPOWER_EGU2_Pos) /*!< Bit mask of EGU2 field. */

/* Bit 21 : Peripheral power bit for EGU1 */
#define POWER_PERPOWER_EGU1_Pos (21UL) /*!< Position of EGU1 field. */
#define POWER_PERPOWER_EGU1_Msk (0x1UL << POWER_PERPOWER_EGU1_Pos) /*!< Bit mask of EGU1 field. */

/* Bit 20 : Peripheral power bit for EGU0 */
#define POWER_PERPOWER_EGU0_Pos (20UL) /*!< Position of EGU0 field. */
#define POWER_PERPOWER_EGU0_Msk (0x1UL << POWER_PERPOWER_EGU0_Pos) /*!< Bit mask of EGU0 field. */

/* Bit 19 : Peripheral power bit for COMP and LPCOMP */
#define POWER_PERPOWER_COMP_LPCOMP_Pos (19UL) /*!< Position of COMP_LPCOMP field. */
#define POWER_PERPOWER_COMP_LPCOMP_Msk (0x1UL << POWER_PERPOWER_COMP_LPCOMP_Pos) /*!< Bit mask of COMP_LPCOMP field. */

/* Bit 18 : Peripheral power bit for QDEC */
#define POWER_PERPOWER_QDEC_Pos (18UL) /*!< Position of QDEC field. */
#define POWER_PERPOWER_QDEC_Msk (0x1UL << POWER_PERPOWER_QDEC_Pos) /*!< Bit mask of QDEC field. */

/* Bit 17 : Peripheral power bit for RTC1 */
#define POWER_PERPOWER_RTC1_Pos (17UL) /*!< Position of RTC1 field. */
#define POWER_PERPOWER_RTC1_Msk (0x1UL << POWER_PERPOWER_RTC1_Pos) /*!< Bit mask of RTC1 field. */

/* Bit 16 : Peripheral power bit for WDT */
#define POWER_PERPOWER_WDT_Pos (16UL) /*!< Position of WDT field. */
#define POWER_PERPOWER_WDT_Msk (0x1UL << POWER_PERPOWER_WDT_Pos) /*!< Bit mask of WDT field. */

/* Bit 15 : Peripheral power bit for CCM and AAR */
#define POWER_PERPOWER_CCM_AAR_Pos (15UL) /*!< Position of CCM_AAR field. */
#define POWER_PERPOWER_CCM_AAR_Msk (0x1UL << POWER_PERPOWER_CCM_AAR_Pos) /*!< Bit mask of CCM_AAR field. */

/* Bit 14 : Peripheral power bit for ECB */
#define POWER_PERPOWER_ECB_Pos (14UL) /*!< Position of ECB field. */
#define POWER_PERPOWER_ECB_Msk (0x1UL << POWER_PERPOWER_ECB_Pos) /*!< Bit mask of ECB field. */

/* Bit 13 : Peripheral power bit for RNG */
#define POWER_PERPOWER_RNG_Pos (13UL) /*!< Position of RNG field. */
#define POWER_PERPOWER_RNG_Msk (0x1UL << POWER_PERPOWER_RNG_Pos) /*!< Bit mask of RNG field. */

/* Bit 12 : Peripheral power bit for TEMP */
#define POWER_PERPOWER_TEMP_Pos (12UL) /*!< Position of TEMP field. */
#define POWER_PERPOWER_TEMP_Msk (0x1UL << POWER_PERPOWER_TEMP_Pos) /*!< Bit mask of TEMP field. */

/* Bit 11 : Peripheral power bit for RTC0 */
#define POWER_PERPOWER_RTC0_Pos (11UL) /*!< Position of RTC0 field. */
#define POWER_PERPOWER_RTC0_Msk (0x1UL << POWER_PERPOWER_RTC0_Pos) /*!< Bit mask of RTC0 field. */

/* Bit 10 : Peripheral power bit for TIMER2 */
#define POWER_PERPOWER_TIMER2_Pos (10UL) /*!< Position of TIMER2 field. */
#define POWER_PERPOWER_TIMER2_Msk (0x1UL << POWER_PERPOWER_TIMER2_Pos) /*!< Bit mask of TIMER2 field. */

/* Bit 9 : Peripheral power bit for TIMER1 */
#define POWER_PERPOWER_TIMER1_Pos (9UL) /*!< Position of TIMER1 field. */
#define POWER_PERPOWER_TIMER1_Msk (0x1UL << POWER_PERPOWER_TIMER1_Pos) /*!< Bit mask of TIMER1 field. */

/* Bit 8 : Peripheral power bit for TIMER0 */
#define POWER_PERPOWER_TIMER0_Pos (8UL) /*!< Position of TIMER0 field. */
#define POWER_PERPOWER_TIMER0_Msk (0x1UL << POWER_PERPOWER_TIMER0_Pos) /*!< Bit mask of TIMER0 field. */

/* Bit 7 : Peripheral power bit for ADC */
#define POWER_PERPOWER_ADC_Pos (7UL) /*!< Position of ADC field. */
#define POWER_PERPOWER_ADC_Msk (0x1UL << POWER_PERPOWER_ADC_Pos) /*!< Bit mask of ADC field. */

/* Bit 6 : Peripheral power bit for GPIOTE */
#define POWER_PERPOWER_GPIOTE_Pos (6UL) /*!< Position of GPIOTE field. */
#define POWER_PERPOWER_GPIOTE_Msk (0x1UL << POWER_PERPOWER_GPIOTE_Pos) /*!< Bit mask of GPIOTE field. */

/* Bit 4 : Peripheral power bit for SPI1 and TWI1 */
#define POWER_PERPOWER_SPI1_TWI1_Pos (4UL) /*!< Position of SPI1_TWI1 field. */
#define POWER_PERPOWER_SPI1_TWI1_Msk (0x1UL << POWER_PERPOWER_SPI1_TWI1_Pos) /*!< Bit mask of SPI1_TWI1 field. */

/* Bit 3 : Peripheral power bit for SPI0 and TWI0 */
#define POWER_PERPOWER_SPI0_TWI0_Pos (3UL) /*!< Position of SPI0_TWI0 field. */
#define POWER_PERPOWER_SPI0_TWI0_Msk (0x1UL << POWER_PERPOWER_SPI0_TWI0_Pos) /*!< Bit mask of SPI0_TWI0 field. */

/* Bit 2 : Peripheral power bit for UART0 */
#define POWER_PERPOWER_UART0_Pos (2UL) /*!< Position of UART0 field. */
#define POWER_PERPOWER_UART0_Msk (0x1UL << POWER_PERPOWER_UART0_Pos) /*!< Bit mask of UART0 field. */

/* Bit 1 : Peripheral power bit for RADIO */
#define POWER_PERPOWER_RADIO_Pos (1UL) /*!< Position of RADIO field. */
#define POWER_PERPOWER_RADIO_Msk (0x1UL << POWER_PERPOWER_RADIO_Pos) /*!< Bit mask of RADIO field. */

/* Bit 0 : Peripheral power bit for POWER and CLOCK (always on, reads always as 0, write has no effect) */
#define POWER_PERPOWER_POWER_CLOCK_Pos (0UL) /*!< Position of POWER_CLOCK field. */
#define POWER_PERPOWER_POWER_CLOCK_Msk (0x1UL << POWER_PERPOWER_POWER_CLOCK_Pos) /*!< Bit mask of POWER_CLOCK field. */

/* Register: POWER_FORCEON1V2 */
/* Description: Force on 1.2 V regulator */

/* Bit 0 : Force on 1.2 V regulator */
#define POWER_FORCEON1V2_FORCEON1V2_Pos (0UL) /*!< Position of FORCEON1V2 field. */
#define POWER_FORCEON1V2_FORCEON1V2_Msk (0x1UL << POWER_FORCEON1V2_FORCEON1V2_Pos) /*!< Bit mask of FORCEON1V2 field. */
#define POWER_FORCEON1V2_FORCEON1V2_DoNotForceOn (0UL) /*!< Do not force on 1.2 V controller */
#define POWER_FORCEON1V2_FORCEON1V2_ForceOn (1UL) /*!< Force on 1.2 V controller */

/* Register: POWER_FORCEONNVM */
/* Description: Force on NVM. See also the internal section in the NVMC chapter. */

/* Bit 0 : Force on NVM controller. See also the internal section in the NVMC chapter. */
#define POWER_FORCEONNVM_FORCEONNVM_Pos (0UL) /*!< Position of FORCEONNVM field. */
#define POWER_FORCEONNVM_FORCEONNVM_Msk (0x1UL << POWER_FORCEONNVM_FORCEONNVM_Pos) /*!< Bit mask of FORCEONNVM field. */
#define POWER_FORCEONNVM_FORCEONNVM_DoNotForceOn (0UL) /*!< Do not force on NVM controller */
#define POWER_FORCEONNVM_FORCEONNVM_ForceOn (1UL) /*!< Force on NVM controller */

/* Register: POWER_POFCON */
/* Description: Power failure comparator configuration */

/* Bit 6 : Bypass power failure comparator hysteresis */
#define POWER_POFCON_HYSTDIS_Pos (6UL) /*!< Position of HYSTDIS field. */
#define POWER_POFCON_HYSTDIS_Msk (0x1UL << POWER_POFCON_HYSTDIS_Pos) /*!< Bit mask of HYSTDIS field. */
#define POWER_POFCON_HYSTDIS_Normal (0UL) /*!< Hysteresis active */
#define POWER_POFCON_HYSTDIS_NoHyst (1UL) /*!< Hysteresis disabled */

/* Bits 4..1 : Power failure comparator threshold setting */
#define POWER_POFCON_THRESHOLD_Pos (1UL) /*!< Position of THRESHOLD field. */
#define POWER_POFCON_THRESHOLD_Msk (0xFUL << POWER_POFCON_THRESHOLD_Pos) /*!< Bit mask of THRESHOLD field. */
#define POWER_POFCON_THRESHOLD_V17 (4UL) /*!< Set threshold to 1.7 V */
#define POWER_POFCON_THRESHOLD_V18 (5UL) /*!< Set threshold to 1.8 V */
#define POWER_POFCON_THRESHOLD_V19 (6UL) /*!< Set threshold to 1.9 V */
#define POWER_POFCON_THRESHOLD_V20 (7UL) /*!< Set threshold to 2.0 V */
#define POWER_POFCON_THRESHOLD_V21 (8UL) /*!< Set threshold to 2.1 V */
#define POWER_POFCON_THRESHOLD_V22 (9UL) /*!< Set threshold to 2.2 V */
#define POWER_POFCON_THRESHOLD_V23 (10UL) /*!< Set threshold to 2.3 V */
#define POWER_POFCON_THRESHOLD_V24 (11UL) /*!< Set threshold to 2.4 V */
#define POWER_POFCON_THRESHOLD_V25 (12UL) /*!< Set threshold to 2.5 V */
#define POWER_POFCON_THRESHOLD_V26 (13UL) /*!< Set threshold to 2.6 V */
#define POWER_POFCON_THRESHOLD_V27 (14UL) /*!< Set threshold to 2.7 V */
#define POWER_POFCON_THRESHOLD_V28 (15UL) /*!< Set threshold to 2.8 V */

/* Bit 0 : Enable or disable power failure comparator */
#define POWER_POFCON_POF_Pos (0UL) /*!< Position of POF field. */
#define POWER_POFCON_POF_Msk (0x1UL << POWER_POFCON_POF_Pos) /*!< Bit mask of POF field. */
#define POWER_POFCON_POF_Disabled (0UL) /*!< Disable */
#define POWER_POFCON_POF_Enabled (1UL) /*!< Enable */

/* Register: POWER_GPREGRET */
/* Description: General purpose retention register */

/* Bits 7..0 : General purpose retention register */
#define POWER_GPREGRET_GPREGRET_Pos (0UL) /*!< Position of GPREGRET field. */
#define POWER_GPREGRET_GPREGRET_Msk (0xFFUL << POWER_GPREGRET_GPREGRET_Pos) /*!< Bit mask of GPREGRET field. */

/* Register: POWER_GPREGRET2 */
/* Description: General purpose retention register */

/* Bits 7..0 : General purpose retention register */
#define POWER_GPREGRET2_GPREGRET_Pos (0UL) /*!< Position of GPREGRET field. */
#define POWER_GPREGRET2_GPREGRET_Msk (0xFFUL << POWER_GPREGRET2_GPREGRET_Pos) /*!< Bit mask of GPREGRET field. */

/* Register: POWER_FORCEOFFNVM */
/* Description: Force off NVM supply. See also the internal section in the NVMC chapter. */

/* Bits 31..0 : Force off NVM supply. See also the internal section in the NVMC chapter. */
#define POWER_FORCEOFFNVM_FORCEOFFNVM_Pos (0UL) /*!< Position of FORCEOFFNVM field. */
#define POWER_FORCEOFFNVM_FORCEOFFNVM_Msk (0xFFFFFFFFUL << POWER_FORCEOFFNVM_FORCEOFFNVM_Pos) /*!< Bit mask of FORCEOFFNVM field. */
#define POWER_FORCEOFFNVM_FORCEOFFNVM_DoNotForceOff (0UL) /*!< Read: Do not force off NVM supply. */
#define POWER_FORCEOFFNVM_FORCEOFFNVM_ForceOff (1UL) /*!< Read: Force off NVM supply. */
#define POWER_FORCEOFFNVM_FORCEOFFNVM_DisableForceOff (0UL) /*!< Write: Do not force off NVM supply. */
#define POWER_FORCEOFFNVM_FORCEOFFNVM_EnableForceOff (0xBADCA81EUL) /*!< Write: Force off NVM supply. */

/* Register: POWER_DCDCEN */
/* Description: DC/DC enable register */

/* Bit 0 : Enable or disable DC/DC converter */
#define POWER_DCDCEN_DCDCEN_Pos (0UL) /*!< Position of DCDCEN field. */
#define POWER_DCDCEN_DCDCEN_Msk (0x1UL << POWER_DCDCEN_DCDCEN_Pos) /*!< Bit mask of DCDCEN field. */
#define POWER_DCDCEN_DCDCEN_Disabled (0UL) /*!< Disable */
#define POWER_DCDCEN_DCDCEN_Enabled (1UL) /*!< Enable */

/* Register: POWER_PERPOWER2 */
/* Description: Peripheral power configuration 2 */

/* Bit 3 : Peripheral power bit for SPI2 */
#define POWER_PERPOWER2_SPI2_Pos (3UL) /*!< Position of SPI2 field. */
#define POWER_PERPOWER2_SPI2_Msk (0x1UL << POWER_PERPOWER2_SPI2_Pos) /*!< Bit mask of SPI2 field. */

/* Register: POWER_ATEPOWER */
/* Description: Analog test bus control for power modules */

/* Bit 8 : Connect or disconnect reference generator for flash to analog test bus */
#define POWER_ATEPOWER_VREF1V2_Pos (8UL) /*!< Position of VREF1V2 field. */
#define POWER_ATEPOWER_VREF1V2_Msk (0x1UL << POWER_ATEPOWER_VREF1V2_Pos) /*!< Bit mask of VREF1V2 field. */
#define POWER_ATEPOWER_VREF1V2_Disconnected (0UL) /*!< Disconnect */
#define POWER_ATEPOWER_VREF1V2_Connected (1UL) /*!< Connect 0.9 V downscaled reference voltage to ATB0 */

/* Bit 7 : Connect or disconnect 1.3 V LDO refresh controller to analog test bus */
#define POWER_ATEPOWER_REFRESH1V3_Pos (7UL) /*!< Position of REFRESH1V3 field. */
#define POWER_ATEPOWER_REFRESH1V3_Msk (0x1UL << POWER_ATEPOWER_REFRESH1V3_Pos) /*!< Bit mask of REFRESH1V3 field. */
#define POWER_ATEPOWER_REFRESH1V3_Disconnected (0UL) /*!< Disconnect */
#define POWER_ATEPOWER_REFRESH1V3_Connected (1UL) /*!< Connect sampled reference voltage to ATB0 and refresh signal to ATB1 */

/* Bits 6..5 : Configure connection of master bias generator to analog test bus */
#define POWER_ATEPOWER_MBIAS_Pos (5UL) /*!< Position of MBIAS field. */
#define POWER_ATEPOWER_MBIAS_Msk (0x3UL << POWER_ATEPOWER_MBIAS_Pos) /*!< Bit mask of MBIAS field. */
#define POWER_ATEPOWER_MBIAS_Disconnected (0UL) /*!< Disconnect */
#define POWER_ATEPOWER_MBIAS_VBG (1UL) /*!< Connect 0.9 V bandgap voltage to ATB0 */
#define POWER_ATEPOWER_MBIAS_IBPSR10U (2UL) /*!< Connect 10 uA IBPSR current to ATB1 */
#define POWER_ATEPOWER_MBIAS_Both (3UL) /*!< Connect both VBG to ATB0 and IBPSR10U to ATB1 */

/* Bit 4 : Connect or disconnect AVSS to analog test bus */
#define POWER_ATEPOWER_AVSS_Pos (4UL) /*!< Position of AVSS field. */
#define POWER_ATEPOWER_AVSS_Msk (0x1UL << POWER_ATEPOWER_AVSS_Pos) /*!< Bit mask of AVSS field. */
#define POWER_ATEPOWER_AVSS_Disconnected (0UL) /*!< Disconnect */
#define POWER_ATEPOWER_AVSS_Connected (1UL) /*!< Connect to ATB1 */

/* Bit 3 : Connect or disconnect DVDD_0V9 to analog test bus */
#define POWER_ATEPOWER_DVDD0V9_Pos (3UL) /*!< Position of DVDD0V9 field. */
#define POWER_ATEPOWER_DVDD0V9_Msk (0x1UL << POWER_ATEPOWER_DVDD0V9_Pos) /*!< Bit mask of DVDD0V9 field. */
#define POWER_ATEPOWER_DVDD0V9_Disconnected (0UL) /*!< Disconnect */
#define POWER_ATEPOWER_DVDD0V9_Connected (1UL) /*!< Connect to ATB0 */

/* Bit 2 : Connect or disconnect AVDD_1V3 to analog test bus */
#define POWER_ATEPOWER_AVDD1V3_Pos (2UL) /*!< Position of AVDD1V3 field. */
#define POWER_ATEPOWER_AVDD1V3_Msk (0x1UL << POWER_ATEPOWER_AVDD1V3_Pos) /*!< Bit mask of AVDD1V3 field. */
#define POWER_ATEPOWER_AVDD1V3_Disconnected (0UL) /*!< Disconnect */
#define POWER_ATEPOWER_AVDD1V3_Connected (1UL) /*!< Connect to ATB0 */

/* Bit 1 : Enable or disable overvoltage clamp on analog test bus */
#define POWER_ATEPOWER_OVCLAMP_Pos (1UL) /*!< Position of OVCLAMP field. */
#define POWER_ATEPOWER_OVCLAMP_Msk (0x1UL << POWER_ATEPOWER_OVCLAMP_Pos) /*!< Bit mask of OVCLAMP field. */
#define POWER_ATEPOWER_OVCLAMP_Disabled (0UL) /*!< Disable */
#define POWER_ATEPOWER_OVCLAMP_Enabled (1UL) /*!< Enable */

/* Bit 0 : Enable or disable power-down clamp on analog test bus */
#define POWER_ATEPOWER_PDCLAMP_Pos (0UL) /*!< Position of PDCLAMP field. */
#define POWER_ATEPOWER_PDCLAMP_Msk (0x1UL << POWER_ATEPOWER_PDCLAMP_Pos) /*!< Bit mask of PDCLAMP field. */
#define POWER_ATEPOWER_PDCLAMP_Disabled (0UL) /*!< Disable */
#define POWER_ATEPOWER_PDCLAMP_Enabled (1UL) /*!< Enable */

/* Register: POWER_RAM_POWER */
/* Description: Description cluster[n]: RAMn power control register. The RAM size will vary depending on product variant, and the RAMn register will only be present if the corresponding RAM AHB slave is present on the device. */

/* Bit 17 : Keep retention on RAM section S1 when RAM section is in OFF */
#define POWER_RAM_POWER_S1RETENTION_Pos (17UL) /*!< Position of S1RETENTION field. */
#define POWER_RAM_POWER_S1RETENTION_Msk (0x1UL << POWER_RAM_POWER_S1RETENTION_Pos) /*!< Bit mask of S1RETENTION field. */
#define POWER_RAM_POWER_S1RETENTION_Off (0UL) /*!< Off */
#define POWER_RAM_POWER_S1RETENTION_On (1UL) /*!< On */

/* Bit 16 : Keep retention on RAM section S0 when RAM section is in OFF */
#define POWER_RAM_POWER_S0RETENTION_Pos (16UL) /*!< Position of S0RETENTION field. */
#define POWER_RAM_POWER_S0RETENTION_Msk (0x1UL << POWER_RAM_POWER_S0RETENTION_Pos) /*!< Bit mask of S0RETENTION field. */
#define POWER_RAM_POWER_S0RETENTION_Off (0UL) /*!< Off */
#define POWER_RAM_POWER_S0RETENTION_On (1UL) /*!< On */

/* Bit 1 : Keep RAM section S1 ON or OFF in System ON mode. */
#define POWER_RAM_POWER_S1POWER_Pos (1UL) /*!< Position of S1POWER field. */
#define POWER_RAM_POWER_S1POWER_Msk (0x1UL << POWER_RAM_POWER_S1POWER_Pos) /*!< Bit mask of S1POWER field. */
#define POWER_RAM_POWER_S1POWER_Off (0UL) /*!< Off */
#define POWER_RAM_POWER_S1POWER_On (1UL) /*!< On */

/* Bit 0 : Keep RAM section S0 ON or OFF in System ON mode. */
#define POWER_RAM_POWER_S0POWER_Pos (0UL) /*!< Position of S0POWER field. */
#define POWER_RAM_POWER_S0POWER_Msk (0x1UL << POWER_RAM_POWER_S0POWER_Pos) /*!< Bit mask of S0POWER field. */
#define POWER_RAM_POWER_S0POWER_Off (0UL) /*!< Off */
#define POWER_RAM_POWER_S0POWER_On (1UL) /*!< On */

/* Register: POWER_RAM_POWERSET */
/* Description: Description cluster[n]: RAMn power control set register */

/* Bit 17 : Keep retention on RAM section S1 when RAM section is switched off */
#define POWER_RAM_POWERSET_S1RETENTION_Pos (17UL) /*!< Position of S1RETENTION field. */
#define POWER_RAM_POWERSET_S1RETENTION_Msk (0x1UL << POWER_RAM_POWERSET_S1RETENTION_Pos) /*!< Bit mask of S1RETENTION field. */
#define POWER_RAM_POWERSET_S1RETENTION_On (1UL) /*!< On */

/* Bit 16 : Keep retention on RAM section S0 when RAM section is switched off */
#define POWER_RAM_POWERSET_S0RETENTION_Pos (16UL) /*!< Position of S0RETENTION field. */
#define POWER_RAM_POWERSET_S0RETENTION_Msk (0x1UL << POWER_RAM_POWERSET_S0RETENTION_Pos) /*!< Bit mask of S0RETENTION field. */
#define POWER_RAM_POWERSET_S0RETENTION_On (1UL) /*!< On */

/* Bit 1 : Keep RAM section S1 of RAMn on or off in System ON mode */
#define POWER_RAM_POWERSET_S1POWER_Pos (1UL) /*!< Position of S1POWER field. */
#define POWER_RAM_POWERSET_S1POWER_Msk (0x1UL << POWER_RAM_POWERSET_S1POWER_Pos) /*!< Bit mask of S1POWER field. */
#define POWER_RAM_POWERSET_S1POWER_On (1UL) /*!< On */

/* Bit 0 : Keep RAM section S0 of RAMn on or off in System ON mode */
#define POWER_RAM_POWERSET_S0POWER_Pos (0UL) /*!< Position of S0POWER field. */
#define POWER_RAM_POWERSET_S0POWER_Msk (0x1UL << POWER_RAM_POWERSET_S0POWER_Pos) /*!< Bit mask of S0POWER field. */
#define POWER_RAM_POWERSET_S0POWER_On (1UL) /*!< On */

/* Register: POWER_RAM_POWERCLR */
/* Description: Description cluster[n]: RAMn power control clear register */

/* Bit 17 : Keep retention on RAM section S1 when RAM section is switched off */
#define POWER_RAM_POWERCLR_S1RETENTION_Pos (17UL) /*!< Position of S1RETENTION field. */
#define POWER_RAM_POWERCLR_S1RETENTION_Msk (0x1UL << POWER_RAM_POWERCLR_S1RETENTION_Pos) /*!< Bit mask of S1RETENTION field. */
#define POWER_RAM_POWERCLR_S1RETENTION_Off (1UL) /*!< Off */

/* Bit 16 : Keep retention on RAM section S0 when RAM section is switched off */
#define POWER_RAM_POWERCLR_S0RETENTION_Pos (16UL) /*!< Position of S0RETENTION field. */
#define POWER_RAM_POWERCLR_S0RETENTION_Msk (0x1UL << POWER_RAM_POWERCLR_S0RETENTION_Pos) /*!< Bit mask of S0RETENTION field. */
#define POWER_RAM_POWERCLR_S0RETENTION_Off (1UL) /*!< Off */

/* Bit 1 : Keep RAM section S1 of RAMn on or off in System ON mode */
#define POWER_RAM_POWERCLR_S1POWER_Pos (1UL) /*!< Position of S1POWER field. */
#define POWER_RAM_POWERCLR_S1POWER_Msk (0x1UL << POWER_RAM_POWERCLR_S1POWER_Pos) /*!< Bit mask of S1POWER field. */
#define POWER_RAM_POWERCLR_S1POWER_Off (1UL) /*!< Off */

/* Bit 0 : Keep RAM section S0 of RAMn on or off in System ON mode */
#define POWER_RAM_POWERCLR_S0POWER_Pos (0UL) /*!< Position of S0POWER field. */
#define POWER_RAM_POWERCLR_S0POWER_Msk (0x1UL << POWER_RAM_POWERCLR_S0POWER_Pos) /*!< Bit mask of S0POWER field. */
#define POWER_RAM_POWERCLR_S0POWER_Off (1UL) /*!< Off */

/* Register: POWER_DCDCFORCE */
/* Description: Force DC/DC power-up */

/* Bit 1 : Force on DCDC power up */
#define POWER_DCDCFORCE_FORCEON_Pos (1UL) /*!< Position of FORCEON field. */
#define POWER_DCDCFORCE_FORCEON_Msk (0x1UL << POWER_DCDCFORCE_FORCEON_Pos) /*!< Bit mask of FORCEON field. */
#define POWER_DCDCFORCE_FORCEON_NoForce (0UL) /*!< No force */
#define POWER_DCDCFORCE_FORCEON_Force (1UL) /*!< Force */

/* Bit 0 : Force off DCDC power up. */
#define POWER_DCDCFORCE_FORCEOFF_Pos (0UL) /*!< Position of FORCEOFF field. */
#define POWER_DCDCFORCE_FORCEOFF_Msk (0x1UL << POWER_DCDCFORCE_FORCEOFF_Pos) /*!< Bit mask of FORCEOFF field. */
#define POWER_DCDCFORCE_FORCEOFF_NoForce (0UL) /*!< No force */
#define POWER_DCDCFORCE_FORCEOFF_Force (1UL) /*!< Force */

/* Register: POWER_ENRBDREG */
/* Description: Enable RBD register in FICR */

/* Bit 0 : Enable or disable RBD register in FICR */
#define POWER_ENRBDREG_ENRBDREG_Pos (0UL) /*!< Position of ENRBDREG field. */
#define POWER_ENRBDREG_ENRBDREG_Msk (0x1UL << POWER_ENRBDREG_ENRBDREG_Pos) /*!< Bit mask of ENRBDREG field. */
#define POWER_ENRBDREG_ENRBDREG_Disabled (0UL) /*!< Disable */
#define POWER_ENRBDREG_ENRBDREG_Enabled (1UL) /*!< Enable */

/* Register: POWER_FORCEREGMODE */
/* Description: 7-bit backdoor register for manual selection of power mode */

/* Bits 6..0 : Force Regulator Mode to value */
#define POWER_FORCEREGMODE_FORCEREGMODE_Pos (0UL) /*!< Position of FORCEREGMODE field. */
#define POWER_FORCEREGMODE_FORCEREGMODE_Msk (0x7FUL << POWER_FORCEREGMODE_FORCEREGMODE_Pos) /*!< Bit mask of FORCEREGMODE field. */
#define POWER_FORCEREGMODE_FORCEREGMODE_Off1v3_LdoByP0v9 (0UL) /*!< Forceoff1v3 */
#define POWER_FORCEREGMODE_FORCEREGMODE_Ldo1v3Refr_Ulp0v9 (1UL) /*!< 1mA, 1mA 'ULP' */
#define POWER_FORCEREGMODE_FORCEREGMODE_DcDc1v3Refr_Ldo0v9 (2UL) /*!< 5mA, 5mA Only available when DCDCEN=1 */
#define POWER_FORCEREGMODE_FORCEREGMODE_DcDc1v3_LdoByP0v9 (3UL) /*!< 30mA, 10mA Only available when DCDCEN=1 VREG0V9 operates in bypass mode if VREG0V9BYPASS=1 */
#define POWER_FORCEREGMODE_FORCEREGMODE_Ldo1v3_LdoByP0v9 (4UL) /*!< 24mA, 10mA VREG0V9 operates in bypass mode if VREG0V9BYPASS=1 */

/* Register: POWER_ID_VREG_0V9_PROG_0 */
/* Description: Deprecated register - Pre-set 0v9 trim value 0. Note: The reset value comes from FICR-&gt;CHIPCONF01.VREG0V9BYPASS */

/* Bits 2..0 : Pre-set 0v9 trim value 0. Note: The reset value comes from FICR-&gt;CHIPCONF01.VREG0V9BYPASS */
#define POWER_ID_VREG_0V9_PROG_0_ID_VREG_0V9_PROG_0_Pos (0UL) /*!< Position of ID_VREG_0V9_PROG_0 field. */
#define POWER_ID_VREG_0V9_PROG_0_ID_VREG_0V9_PROG_0_Msk (0x7UL << POWER_ID_VREG_0V9_PROG_0_ID_VREG_0V9_PROG_0_Pos) /*!< Bit mask of ID_VREG_0V9_PROG_0 field. */

/* Register: POWER_ID_VREG_0V9_PROG_1 */
/* Description: Pre-set 0v9 trim value 1. Note: The reset value comes from FICR-&gt;CHIPCONF01.VREG0V9NORMCAL */

/* Bits 3..0 : Pre-set 0v9 trim value 1, used for all power modes except dcdc-refresh. Note: The reset value comes from FICR-&gt;CHIPCONF01.VREG0V9NORMCAL */
#define POWER_ID_VREG_0V9_PROG_1_ID_VREG_0V9_PROG_1_Pos (0UL) /*!< Position of ID_VREG_0V9_PROG_1 field. */
#define POWER_ID_VREG_0V9_PROG_1_ID_VREG_0V9_PROG_1_Msk (0xFUL << POWER_ID_VREG_0V9_PROG_1_ID_VREG_0V9_PROG_1_Pos) /*!< Bit mask of ID_VREG_0V9_PROG_1 field. */

/* Register: POWER_ID_VREG_0V9_PROG_2 */
/* Description: Pre-set 0v9 trim value 2. Note: The reset value comes from FICR-&gt;CHIPCONF01.VREG0V9REFRCAL */

/* Bits 3..0 : Pre-set 0v9 trim value 2, used when dcdc is enabled in refresh mode. Note: The reset value comes from FICR-&gt;CHIPCONF01.VREG0V9REFRCAL */
#define POWER_ID_VREG_0V9_PROG_2_ID_VREG_0V9_PROG_2_Pos (0UL) /*!< Position of ID_VREG_0V9_PROG_2 field. */
#define POWER_ID_VREG_0V9_PROG_2_ID_VREG_0V9_PROG_2_Msk (0xFUL << POWER_ID_VREG_0V9_PROG_2_ID_VREG_0V9_PROG_2_Pos) /*!< Bit mask of ID_VREG_0V9_PROG_2 field. */

/* Register: POWER_PWRREGTHRESHOLD */
/* Description: Set threshold value of power regulator */

/* Bits 6..0 : Sets the threshold value of power regulator. At reset, it gets overwritten with content from FICR (CHIPCONF03.PWRREGTHRESHOLD) */
#define POWER_PWRREGTHRESHOLD_PWRREGTHRESHOLD_Pos (0UL) /*!< Position of PWRREGTHRESHOLD field. */
#define POWER_PWRREGTHRESHOLD_PWRREGTHRESHOLD_Msk (0x7FUL << POWER_PWRREGTHRESHOLD_PWRREGTHRESHOLD_Pos) /*!< Bit mask of PWRREGTHRESHOLD field. */

/* Register: POWER_ENFORCEPWRREGMODE */
/* Description: Enable forcing of power mode in power regulator */

/* Bit 0 : Enable forcing of power mode in power regulator */
#define POWER_ENFORCEPWRREGMODE_ENFORCEPWRREGMODE_Pos (0UL) /*!< Position of ENFORCEPWRREGMODE field. */
#define POWER_ENFORCEPWRREGMODE_ENFORCEPWRREGMODE_Msk (0x1UL << POWER_ENFORCEPWRREGMODE_ENFORCEPWRREGMODE_Pos) /*!< Bit mask of ENFORCEPWRREGMODE field. */
#define POWER_ENFORCEPWRREGMODE_ENFORCEPWRREGMODE_Disabled (0UL) /*!< Pwr regulator forcing off */
#define POWER_ENFORCEPWRREGMODE_ENFORCEPWRREGMODE_Enabled (1UL) /*!< Pwr regulator mode forced to value given by FORCEREGMODE */

/* Register: POWER_IGNOREDAPCPWRREGMODE */
/* Description: Ignore DAPCP power mode */

/* Bit 0 : Ignore power request from debugger */
#define POWER_IGNOREDAPCPWRREGMODE_IGNOREDAPCPWRREGMODE_Pos (0UL) /*!< Position of IGNOREDAPCPWRREGMODE field. */
#define POWER_IGNOREDAPCPWRREGMODE_IGNOREDAPCPWRREGMODE_Msk (0x1UL << POWER_IGNOREDAPCPWRREGMODE_IGNOREDAPCPWRREGMODE_Pos) /*!< Bit mask of IGNOREDAPCPWRREGMODE field. */
#define POWER_IGNOREDAPCPWRREGMODE_IGNOREDAPCPWRREGMODE_DoNotIgnore (0UL) /*!< Do not ignore power request form debugger */
#define POWER_IGNOREDAPCPWRREGMODE_IGNOREDAPCPWRREGMODE_Ignore (1UL) /*!< Ignore power request from debugger */

/* Register: POWER_CURRENTPWRREGMODE */
/* Description: Current mode in the power regulator */

/* Bits 6..0 : Current mode in the power regulator */
#define POWER_CURRENTPWRREGMODE_CURRENTPWRREGMODE_Pos (0UL) /*!< Position of CURRENTPWRREGMODE field. */
#define POWER_CURRENTPWRREGMODE_CURRENTPWRREGMODE_Msk (0x7FUL << POWER_CURRENTPWRREGMODE_CURRENTPWRREGMODE_Pos) /*!< Bit mask of CURRENTPWRREGMODE field. */

/* Register: POWER_SRAMTRIM */
/* Description: Backdoor trim values for SRAM */

/* Bit 6 : Read/Write Margin Adjustment */
#define POWER_SRAMTRIM_RWM_Pos (6UL) /*!< Position of RWM field. */
#define POWER_SRAMTRIM_RWM_Msk (0x1UL << POWER_SRAMTRIM_RWM_Pos) /*!< Bit mask of RWM field. */
#define POWER_SRAMTRIM_RWM_Disabled (0UL) /*!< Disable */
#define POWER_SRAMTRIM_RWM_Enabled (1UL) /*!< Enable */

/* Bit 5 : Read Margin Adjustment */
#define POWER_SRAMTRIM_RM_Pos (5UL) /*!< Position of RM field. */
#define POWER_SRAMTRIM_RM_Msk (0x1UL << POWER_SRAMTRIM_RM_Pos) /*!< Bit mask of RM field. */
#define POWER_SRAMTRIM_RM_Disabled (0UL) /*!< Disable */
#define POWER_SRAMTRIM_RM_Enabled (1UL) /*!< Enable */

/* Bit 4 : Write Margin Adjustment */
#define POWER_SRAMTRIM_WM_Pos (4UL) /*!< Position of WM field. */
#define POWER_SRAMTRIM_WM_Msk (0x1UL << POWER_SRAMTRIM_WM_Pos) /*!< Bit mask of WM field. */
#define POWER_SRAMTRIM_WM_Disabled (0UL) /*!< Disable */
#define POWER_SRAMTRIM_WM_Enabled (1UL) /*!< Enable */

/* Bits 3..0 : Source Bias Trim Adjustment for retention */
#define POWER_SRAMTRIM_BTRIM_Pos (0UL) /*!< Position of BTRIM field. */
#define POWER_SRAMTRIM_BTRIM_Msk (0xFUL << POWER_SRAMTRIM_BTRIM_Pos) /*!< Bit mask of BTRIM field. */


/* Peripheral: PPI */
/* Description: Programmable Peripheral Interconnect */

/* Register: PPI_TASKS_CHG_EN */
/* Description: Description cluster[n]: Enable channel group n */

/* Bit 0 :   */
#define PPI_TASKS_CHG_EN_EN_Pos (0UL) /*!< Position of EN field. */
#define PPI_TASKS_CHG_EN_EN_Msk (0x1UL << PPI_TASKS_CHG_EN_EN_Pos) /*!< Bit mask of EN field. */

/* Register: PPI_TASKS_CHG_DIS */
/* Description: Description cluster[n]: Disable channel group n */

/* Bit 0 :   */
#define PPI_TASKS_CHG_DIS_DIS_Pos (0UL) /*!< Position of DIS field. */
#define PPI_TASKS_CHG_DIS_DIS_Msk (0x1UL << PPI_TASKS_CHG_DIS_DIS_Pos) /*!< Bit mask of DIS field. */

/* Register: PPI_CHEN */
/* Description: Channel enable register */

/* Bit 31 : Enable or disable channel 31 */
#define PPI_CHEN_CH31_Pos (31UL) /*!< Position of CH31 field. */
#define PPI_CHEN_CH31_Msk (0x1UL << PPI_CHEN_CH31_Pos) /*!< Bit mask of CH31 field. */
#define PPI_CHEN_CH31_Disabled (0UL) /*!< Disable channel */
#define PPI_CHEN_CH31_Enabled (1UL) /*!< Enable channel */

/* Bit 30 : Enable or disable channel 30 */
#define PPI_CHEN_CH30_Pos (30UL) /*!< Position of CH30 field. */
#define PPI_CHEN_CH30_Msk (0x1UL << PPI_CHEN_CH30_Pos) /*!< Bit mask of CH30 field. */
#define PPI_CHEN_CH30_Disabled (0UL) /*!< Disable channel */
#define PPI_CHEN_CH30_Enabled (1UL) /*!< Enable channel */

/* Bit 29 : Enable or disable channel 29 */
#define PPI_CHEN_CH29_Pos (29UL) /*!< Position of CH29 field. */
#define PPI_CHEN_CH29_Msk (0x1UL << PPI_CHEN_CH29_Pos) /*!< Bit mask of CH29 field. */
#define PPI_CHEN_CH29_Disabled (0UL) /*!< Disable channel */
#define PPI_CHEN_CH29_Enabled (1UL) /*!< Enable channel */

/* Bit 28 : Enable or disable channel 28 */
#define PPI_CHEN_CH28_Pos (28UL) /*!< Position of CH28 field. */
#define PPI_CHEN_CH28_Msk (0x1UL << PPI_CHEN_CH28_Pos) /*!< Bit mask of CH28 field. */
#define PPI_CHEN_CH28_Disabled (0UL) /*!< Disable channel */
#define PPI_CHEN_CH28_Enabled (1UL) /*!< Enable channel */

/* Bit 27 : Enable or disable channel 27 */
#define PPI_CHEN_CH27_Pos (27UL) /*!< Position of CH27 field. */
#define PPI_CHEN_CH27_Msk (0x1UL << PPI_CHEN_CH27_Pos) /*!< Bit mask of CH27 field. */
#define PPI_CHEN_CH27_Disabled (0UL) /*!< Disable channel */
#define PPI_CHEN_CH27_Enabled (1UL) /*!< Enable channel */

/* Bit 26 : Enable or disable channel 26 */
#define PPI_CHEN_CH26_Pos (26UL) /*!< Position of CH26 field. */
#define PPI_CHEN_CH26_Msk (0x1UL << PPI_CHEN_CH26_Pos) /*!< Bit mask of CH26 field. */
#define PPI_CHEN_CH26_Disabled (0UL) /*!< Disable channel */
#define PPI_CHEN_CH26_Enabled (1UL) /*!< Enable channel */

/* Bit 25 : Enable or disable channel 25 */
#define PPI_CHEN_CH25_Pos (25UL) /*!< Position of CH25 field. */
#define PPI_CHEN_CH25_Msk (0x1UL << PPI_CHEN_CH25_Pos) /*!< Bit mask of CH25 field. */
#define PPI_CHEN_CH25_Disabled (0UL) /*!< Disable channel */
#define PPI_CHEN_CH25_Enabled (1UL) /*!< Enable channel */

/* Bit 24 : Enable or disable channel 24 */
#define PPI_CHEN_CH24_Pos (24UL) /*!< Position of CH24 field. */
#define PPI_CHEN_CH24_Msk (0x1UL << PPI_CHEN_CH24_Pos) /*!< Bit mask of CH24 field. */
#define PPI_CHEN_CH24_Disabled (0UL) /*!< Disable channel */
#define PPI_CHEN_CH24_Enabled (1UL) /*!< Enable channel */

/* Bit 23 : Enable or disable channel 23 */
#define PPI_CHEN_CH23_Pos (23UL) /*!< Position of CH23 field. */
#define PPI_CHEN_CH23_Msk (0x1UL << PPI_CHEN_CH23_Pos) /*!< Bit mask of CH23 field. */
#define PPI_CHEN_CH23_Disabled (0UL) /*!< Disable channel */
#define PPI_CHEN_CH23_Enabled (1UL) /*!< Enable channel */

/* Bit 22 : Enable or disable channel 22 */
#define PPI_CHEN_CH22_Pos (22UL) /*!< Position of CH22 field. */
#define PPI_CHEN_CH22_Msk (0x1UL << PPI_CHEN_CH22_Pos) /*!< Bit mask of CH22 field. */
#define PPI_CHEN_CH22_Disabled (0UL) /*!< Disable channel */
#define PPI_CHEN_CH22_Enabled (1UL) /*!< Enable channel */

/* Bit 21 : Enable or disable channel 21 */
#define PPI_CHEN_CH21_Pos (21UL) /*!< Position of CH21 field. */
#define PPI_CHEN_CH21_Msk (0x1UL << PPI_CHEN_CH21_Pos) /*!< Bit mask of CH21 field. */
#define PPI_CHEN_CH21_Disabled (0UL) /*!< Disable channel */
#define PPI_CHEN_CH21_Enabled (1UL) /*!< Enable channel */

/* Bit 20 : Enable or disable channel 20 */
#define PPI_CHEN_CH20_Pos (20UL) /*!< Position of CH20 field. */
#define PPI_CHEN_CH20_Msk (0x1UL << PPI_CHEN_CH20_Pos) /*!< Bit mask of CH20 field. */
#define PPI_CHEN_CH20_Disabled (0UL) /*!< Disable channel */
#define PPI_CHEN_CH20_Enabled (1UL) /*!< Enable channel */

/* Bit 19 : Enable or disable channel 19 */
#define PPI_CHEN_CH19_Pos (19UL) /*!< Position of CH19 field. */
#define PPI_CHEN_CH19_Msk (0x1UL << PPI_CHEN_CH19_Pos) /*!< Bit mask of CH19 field. */
#define PPI_CHEN_CH19_Disabled (0UL) /*!< Disable channel */
#define PPI_CHEN_CH19_Enabled (1UL) /*!< Enable channel */

/* Bit 18 : Enable or disable channel 18 */
#define PPI_CHEN_CH18_Pos (18UL) /*!< Position of CH18 field. */
#define PPI_CHEN_CH18_Msk (0x1UL << PPI_CHEN_CH18_Pos) /*!< Bit mask of CH18 field. */
#define PPI_CHEN_CH18_Disabled (0UL) /*!< Disable channel */
#define PPI_CHEN_CH18_Enabled (1UL) /*!< Enable channel */

/* Bit 17 : Enable or disable channel 17 */
#define PPI_CHEN_CH17_Pos (17UL) /*!< Position of CH17 field. */
#define PPI_CHEN_CH17_Msk (0x1UL << PPI_CHEN_CH17_Pos) /*!< Bit mask of CH17 field. */
#define PPI_CHEN_CH17_Disabled (0UL) /*!< Disable channel */
#define PPI_CHEN_CH17_Enabled (1UL) /*!< Enable channel */

/* Bit 16 : Enable or disable channel 16 */
#define PPI_CHEN_CH16_Pos (16UL) /*!< Position of CH16 field. */
#define PPI_CHEN_CH16_Msk (0x1UL << PPI_CHEN_CH16_Pos) /*!< Bit mask of CH16 field. */
#define PPI_CHEN_CH16_Disabled (0UL) /*!< Disable channel */
#define PPI_CHEN_CH16_Enabled (1UL) /*!< Enable channel */

/* Bit 15 : Enable or disable channel 15 */
#define PPI_CHEN_CH15_Pos (15UL) /*!< Position of CH15 field. */
#define PPI_CHEN_CH15_Msk (0x1UL << PPI_CHEN_CH15_Pos) /*!< Bit mask of CH15 field. */
#define PPI_CHEN_CH15_Disabled (0UL) /*!< Disable channel */
#define PPI_CHEN_CH15_Enabled (1UL) /*!< Enable channel */

/* Bit 14 : Enable or disable channel 14 */
#define PPI_CHEN_CH14_Pos (14UL) /*!< Position of CH14 field. */
#define PPI_CHEN_CH14_Msk (0x1UL << PPI_CHEN_CH14_Pos) /*!< Bit mask of CH14 field. */
#define PPI_CHEN_CH14_Disabled (0UL) /*!< Disable channel */
#define PPI_CHEN_CH14_Enabled (1UL) /*!< Enable channel */

/* Bit 13 : Enable or disable channel 13 */
#define PPI_CHEN_CH13_Pos (13UL) /*!< Position of CH13 field. */
#define PPI_CHEN_CH13_Msk (0x1UL << PPI_CHEN_CH13_Pos) /*!< Bit mask of CH13 field. */
#define PPI_CHEN_CH13_Disabled (0UL) /*!< Disable channel */
#define PPI_CHEN_CH13_Enabled (1UL) /*!< Enable channel */

/* Bit 12 : Enable or disable channel 12 */
#define PPI_CHEN_CH12_Pos (12UL) /*!< Position of CH12 field. */
#define PPI_CHEN_CH12_Msk (0x1UL << PPI_CHEN_CH12_Pos) /*!< Bit mask of CH12 field. */
#define PPI_CHEN_CH12_Disabled (0UL) /*!< Disable channel */
#define PPI_CHEN_CH12_Enabled (1UL) /*!< Enable channel */

/* Bit 11 : Enable or disable channel 11 */
#define PPI_CHEN_CH11_Pos (11UL) /*!< Position of CH11 field. */
#define PPI_CHEN_CH11_Msk (0x1UL << PPI_CHEN_CH11_Pos) /*!< Bit mask of CH11 field. */
#define PPI_CHEN_CH11_Disabled (0UL) /*!< Disable channel */
#define PPI_CHEN_CH11_Enabled (1UL) /*!< Enable channel */

/* Bit 10 : Enable or disable channel 10 */
#define PPI_CHEN_CH10_Pos (10UL) /*!< Position of CH10 field. */
#define PPI_CHEN_CH10_Msk (0x1UL << PPI_CHEN_CH10_Pos) /*!< Bit mask of CH10 field. */
#define PPI_CHEN_CH10_Disabled (0UL) /*!< Disable channel */
#define PPI_CHEN_CH10_Enabled (1UL) /*!< Enable channel */

/* Bit 9 : Enable or disable channel 9 */
#define PPI_CHEN_CH9_Pos (9UL) /*!< Position of CH9 field. */
#define PPI_CHEN_CH9_Msk (0x1UL << PPI_CHEN_CH9_Pos) /*!< Bit mask of CH9 field. */
#define PPI_CHEN_CH9_Disabled (0UL) /*!< Disable channel */
#define PPI_CHEN_CH9_Enabled (1UL) /*!< Enable channel */

/* Bit 8 : Enable or disable channel 8 */
#define PPI_CHEN_CH8_Pos (8UL) /*!< Position of CH8 field. */
#define PPI_CHEN_CH8_Msk (0x1UL << PPI_CHEN_CH8_Pos) /*!< Bit mask of CH8 field. */
#define PPI_CHEN_CH8_Disabled (0UL) /*!< Disable channel */
#define PPI_CHEN_CH8_Enabled (1UL) /*!< Enable channel */

/* Bit 7 : Enable or disable channel 7 */
#define PPI_CHEN_CH7_Pos (7UL) /*!< Position of CH7 field. */
#define PPI_CHEN_CH7_Msk (0x1UL << PPI_CHEN_CH7_Pos) /*!< Bit mask of CH7 field. */
#define PPI_CHEN_CH7_Disabled (0UL) /*!< Disable channel */
#define PPI_CHEN_CH7_Enabled (1UL) /*!< Enable channel */

/* Bit 6 : Enable or disable channel 6 */
#define PPI_CHEN_CH6_Pos (6UL) /*!< Position of CH6 field. */
#define PPI_CHEN_CH6_Msk (0x1UL << PPI_CHEN_CH6_Pos) /*!< Bit mask of CH6 field. */
#define PPI_CHEN_CH6_Disabled (0UL) /*!< Disable channel */
#define PPI_CHEN_CH6_Enabled (1UL) /*!< Enable channel */

/* Bit 5 : Enable or disable channel 5 */
#define PPI_CHEN_CH5_Pos (5UL) /*!< Position of CH5 field. */
#define PPI_CHEN_CH5_Msk (0x1UL << PPI_CHEN_CH5_Pos) /*!< Bit mask of CH5 field. */
#define PPI_CHEN_CH5_Disabled (0UL) /*!< Disable channel */
#define PPI_CHEN_CH5_Enabled (1UL) /*!< Enable channel */

/* Bit 4 : Enable or disable channel 4 */
#define PPI_CHEN_CH4_Pos (4UL) /*!< Position of CH4 field. */
#define PPI_CHEN_CH4_Msk (0x1UL << PPI_CHEN_CH4_Pos) /*!< Bit mask of CH4 field. */
#define PPI_CHEN_CH4_Disabled (0UL) /*!< Disable channel */
#define PPI_CHEN_CH4_Enabled (1UL) /*!< Enable channel */

/* Bit 3 : Enable or disable channel 3 */
#define PPI_CHEN_CH3_Pos (3UL) /*!< Position of CH3 field. */
#define PPI_CHEN_CH3_Msk (0x1UL << PPI_CHEN_CH3_Pos) /*!< Bit mask of CH3 field. */
#define PPI_CHEN_CH3_Disabled (0UL) /*!< Disable channel */
#define PPI_CHEN_CH3_Enabled (1UL) /*!< Enable channel */

/* Bit 2 : Enable or disable channel 2 */
#define PPI_CHEN_CH2_Pos (2UL) /*!< Position of CH2 field. */
#define PPI_CHEN_CH2_Msk (0x1UL << PPI_CHEN_CH2_Pos) /*!< Bit mask of CH2 field. */
#define PPI_CHEN_CH2_Disabled (0UL) /*!< Disable channel */
#define PPI_CHEN_CH2_Enabled (1UL) /*!< Enable channel */

/* Bit 1 : Enable or disable channel 1 */
#define PPI_CHEN_CH1_Pos (1UL) /*!< Position of CH1 field. */
#define PPI_CHEN_CH1_Msk (0x1UL << PPI_CHEN_CH1_Pos) /*!< Bit mask of CH1 field. */
#define PPI_CHEN_CH1_Disabled (0UL) /*!< Disable channel */
#define PPI_CHEN_CH1_Enabled (1UL) /*!< Enable channel */

/* Bit 0 : Enable or disable channel 0 */
#define PPI_CHEN_CH0_Pos (0UL) /*!< Position of CH0 field. */
#define PPI_CHEN_CH0_Msk (0x1UL << PPI_CHEN_CH0_Pos) /*!< Bit mask of CH0 field. */
#define PPI_CHEN_CH0_Disabled (0UL) /*!< Disable channel */
#define PPI_CHEN_CH0_Enabled (1UL) /*!< Enable channel */

/* Register: PPI_CHENSET */
/* Description: Channel enable set register */

/* Bit 31 : Channel 31 enable set register.  Writing '0' has no effect */
#define PPI_CHENSET_CH31_Pos (31UL) /*!< Position of CH31 field. */
#define PPI_CHENSET_CH31_Msk (0x1UL << PPI_CHENSET_CH31_Pos) /*!< Bit mask of CH31 field. */
#define PPI_CHENSET_CH31_Disabled (0UL) /*!< Read: channel disabled */
#define PPI_CHENSET_CH31_Enabled (1UL) /*!< Read: channel enabled */
#define PPI_CHENSET_CH31_Set (1UL) /*!< Write: Enable channel */

/* Bit 30 : Channel 30 enable set register.  Writing '0' has no effect */
#define PPI_CHENSET_CH30_Pos (30UL) /*!< Position of CH30 field. */
#define PPI_CHENSET_CH30_Msk (0x1UL << PPI_CHENSET_CH30_Pos) /*!< Bit mask of CH30 field. */
#define PPI_CHENSET_CH30_Disabled (0UL) /*!< Read: channel disabled */
#define PPI_CHENSET_CH30_Enabled (1UL) /*!< Read: channel enabled */
#define PPI_CHENSET_CH30_Set (1UL) /*!< Write: Enable channel */

/* Bit 29 : Channel 29 enable set register.  Writing '0' has no effect */
#define PPI_CHENSET_CH29_Pos (29UL) /*!< Position of CH29 field. */
#define PPI_CHENSET_CH29_Msk (0x1UL << PPI_CHENSET_CH29_Pos) /*!< Bit mask of CH29 field. */
#define PPI_CHENSET_CH29_Disabled (0UL) /*!< Read: channel disabled */
#define PPI_CHENSET_CH29_Enabled (1UL) /*!< Read: channel enabled */
#define PPI_CHENSET_CH29_Set (1UL) /*!< Write: Enable channel */

/* Bit 28 : Channel 28 enable set register.  Writing '0' has no effect */
#define PPI_CHENSET_CH28_Pos (28UL) /*!< Position of CH28 field. */
#define PPI_CHENSET_CH28_Msk (0x1UL << PPI_CHENSET_CH28_Pos) /*!< Bit mask of CH28 field. */
#define PPI_CHENSET_CH28_Disabled (0UL) /*!< Read: channel disabled */
#define PPI_CHENSET_CH28_Enabled (1UL) /*!< Read: channel enabled */
#define PPI_CHENSET_CH28_Set (1UL) /*!< Write: Enable channel */

/* Bit 27 : Channel 27 enable set register.  Writing '0' has no effect */
#define PPI_CHENSET_CH27_Pos (27UL) /*!< Position of CH27 field. */
#define PPI_CHENSET_CH27_Msk (0x1UL << PPI_CHENSET_CH27_Pos) /*!< Bit mask of CH27 field. */
#define PPI_CHENSET_CH27_Disabled (0UL) /*!< Read: channel disabled */
#define PPI_CHENSET_CH27_Enabled (1UL) /*!< Read: channel enabled */
#define PPI_CHENSET_CH27_Set (1UL) /*!< Write: Enable channel */

/* Bit 26 : Channel 26 enable set register.  Writing '0' has no effect */
#define PPI_CHENSET_CH26_Pos (26UL) /*!< Position of CH26 field. */
#define PPI_CHENSET_CH26_Msk (0x1UL << PPI_CHENSET_CH26_Pos) /*!< Bit mask of CH26 field. */
#define PPI_CHENSET_CH26_Disabled (0UL) /*!< Read: channel disabled */
#define PPI_CHENSET_CH26_Enabled (1UL) /*!< Read: channel enabled */
#define PPI_CHENSET_CH26_Set (1UL) /*!< Write: Enable channel */

/* Bit 25 : Channel 25 enable set register.  Writing '0' has no effect */
#define PPI_CHENSET_CH25_Pos (25UL) /*!< Position of CH25 field. */
#define PPI_CHENSET_CH25_Msk (0x1UL << PPI_CHENSET_CH25_Pos) /*!< Bit mask of CH25 field. */
#define PPI_CHENSET_CH25_Disabled (0UL) /*!< Read: channel disabled */
#define PPI_CHENSET_CH25_Enabled (1UL) /*!< Read: channel enabled */
#define PPI_CHENSET_CH25_Set (1UL) /*!< Write: Enable channel */

/* Bit 24 : Channel 24 enable set register.  Writing '0' has no effect */
#define PPI_CHENSET_CH24_Pos (24UL) /*!< Position of CH24 field. */
#define PPI_CHENSET_CH24_Msk (0x1UL << PPI_CHENSET_CH24_Pos) /*!< Bit mask of CH24 field. */
#define PPI_CHENSET_CH24_Disabled (0UL) /*!< Read: channel disabled */
#define PPI_CHENSET_CH24_Enabled (1UL) /*!< Read: channel enabled */
#define PPI_CHENSET_CH24_Set (1UL) /*!< Write: Enable channel */

/* Bit 23 : Channel 23 enable set register.  Writing '0' has no effect */
#define PPI_CHENSET_CH23_Pos (23UL) /*!< Position of CH23 field. */
#define PPI_CHENSET_CH23_Msk (0x1UL << PPI_CHENSET_CH23_Pos) /*!< Bit mask of CH23 field. */
#define PPI_CHENSET_CH23_Disabled (0UL) /*!< Read: channel disabled */
#define PPI_CHENSET_CH23_Enabled (1UL) /*!< Read: channel enabled */
#define PPI_CHENSET_CH23_Set (1UL) /*!< Write: Enable channel */

/* Bit 22 : Channel 22 enable set register.  Writing '0' has no effect */
#define PPI_CHENSET_CH22_Pos (22UL) /*!< Position of CH22 field. */
#define PPI_CHENSET_CH22_Msk (0x1UL << PPI_CHENSET_CH22_Pos) /*!< Bit mask of CH22 field. */
#define PPI_CHENSET_CH22_Disabled (0UL) /*!< Read: channel disabled */
#define PPI_CHENSET_CH22_Enabled (1UL) /*!< Read: channel enabled */
#define PPI_CHENSET_CH22_Set (1UL) /*!< Write: Enable channel */

/* Bit 21 : Channel 21 enable set register.  Writing '0' has no effect */
#define PPI_CHENSET_CH21_Pos (21UL) /*!< Position of CH21 field. */
#define PPI_CHENSET_CH21_Msk (0x1UL << PPI_CHENSET_CH21_Pos) /*!< Bit mask of CH21 field. */
#define PPI_CHENSET_CH21_Disabled (0UL) /*!< Read: channel disabled */
#define PPI_CHENSET_CH21_Enabled (1UL) /*!< Read: channel enabled */
#define PPI_CHENSET_CH21_Set (1UL) /*!< Write: Enable channel */

/* Bit 20 : Channel 20 enable set register.  Writing '0' has no effect */
#define PPI_CHENSET_CH20_Pos (20UL) /*!< Position of CH20 field. */
#define PPI_CHENSET_CH20_Msk (0x1UL << PPI_CHENSET_CH20_Pos) /*!< Bit mask of CH20 field. */
#define PPI_CHENSET_CH20_Disabled (0UL) /*!< Read: channel disabled */
#define PPI_CHENSET_CH20_Enabled (1UL) /*!< Read: channel enabled */
#define PPI_CHENSET_CH20_Set (1UL) /*!< Write: Enable channel */

/* Bit 19 : Channel 19 enable set register.  Writing '0' has no effect */
#define PPI_CHENSET_CH19_Pos (19UL) /*!< Position of CH19 field. */
#define PPI_CHENSET_CH19_Msk (0x1UL << PPI_CHENSET_CH19_Pos) /*!< Bit mask of CH19 field. */
#define PPI_CHENSET_CH19_Disabled (0UL) /*!< Read: channel disabled */
#define PPI_CHENSET_CH19_Enabled (1UL) /*!< Read: channel enabled */
#define PPI_CHENSET_CH19_Set (1UL) /*!< Write: Enable channel */

/* Bit 18 : Channel 18 enable set register.  Writing '0' has no effect */
#define PPI_CHENSET_CH18_Pos (18UL) /*!< Position of CH18 field. */
#define PPI_CHENSET_CH18_Msk (0x1UL << PPI_CHENSET_CH18_Pos) /*!< Bit mask of CH18 field. */
#define PPI_CHENSET_CH18_Disabled (0UL) /*!< Read: channel disabled */
#define PPI_CHENSET_CH18_Enabled (1UL) /*!< Read: channel enabled */
#define PPI_CHENSET_CH18_Set (1UL) /*!< Write: Enable channel */

/* Bit 17 : Channel 17 enable set register.  Writing '0' has no effect */
#define PPI_CHENSET_CH17_Pos (17UL) /*!< Position of CH17 field. */
#define PPI_CHENSET_CH17_Msk (0x1UL << PPI_CHENSET_CH17_Pos) /*!< Bit mask of CH17 field. */
#define PPI_CHENSET_CH17_Disabled (0UL) /*!< Read: channel disabled */
#define PPI_CHENSET_CH17_Enabled (1UL) /*!< Read: channel enabled */
#define PPI_CHENSET_CH17_Set (1UL) /*!< Write: Enable channel */

/* Bit 16 : Channel 16 enable set register.  Writing '0' has no effect */
#define PPI_CHENSET_CH16_Pos (16UL) /*!< Position of CH16 field. */
#define PPI_CHENSET_CH16_Msk (0x1UL << PPI_CHENSET_CH16_Pos) /*!< Bit mask of CH16 field. */
#define PPI_CHENSET_CH16_Disabled (0UL) /*!< Read: channel disabled */
#define PPI_CHENSET_CH16_Enabled (1UL) /*!< Read: channel enabled */
#define PPI_CHENSET_CH16_Set (1UL) /*!< Write: Enable channel */

/* Bit 15 : Channel 15 enable set register.  Writing '0' has no effect */
#define PPI_CHENSET_CH15_Pos (15UL) /*!< Position of CH15 field. */
#define PPI_CHENSET_CH15_Msk (0x1UL << PPI_CHENSET_CH15_Pos) /*!< Bit mask of CH15 field. */
#define PPI_CHENSET_CH15_Disabled (0UL) /*!< Read: channel disabled */
#define PPI_CHENSET_CH15_Enabled (1UL) /*!< Read: channel enabled */
#define PPI_CHENSET_CH15_Set (1UL) /*!< Write: Enable channel */

/* Bit 14 : Channel 14 enable set register.  Writing '0' has no effect */
#define PPI_CHENSET_CH14_Pos (14UL) /*!< Position of CH14 field. */
#define PPI_CHENSET_CH14_Msk (0x1UL << PPI_CHENSET_CH14_Pos) /*!< Bit mask of CH14 field. */
#define PPI_CHENSET_CH14_Disabled (0UL) /*!< Read: channel disabled */
#define PPI_CHENSET_CH14_Enabled (1UL) /*!< Read: channel enabled */
#define PPI_CHENSET_CH14_Set (1UL) /*!< Write: Enable channel */

/* Bit 13 : Channel 13 enable set register.  Writing '0' has no effect */
#define PPI_CHENSET_CH13_Pos (13UL) /*!< Position of CH13 field. */
#define PPI_CHENSET_CH13_Msk (0x1UL << PPI_CHENSET_CH13_Pos) /*!< Bit mask of CH13 field. */
#define PPI_CHENSET_CH13_Disabled (0UL) /*!< Read: channel disabled */
#define PPI_CHENSET_CH13_Enabled (1UL) /*!< Read: channel enabled */
#define PPI_CHENSET_CH13_Set (1UL) /*!< Write: Enable channel */

/* Bit 12 : Channel 12 enable set register.  Writing '0' has no effect */
#define PPI_CHENSET_CH12_Pos (12UL) /*!< Position of CH12 field. */
#define PPI_CHENSET_CH12_Msk (0x1UL << PPI_CHENSET_CH12_Pos) /*!< Bit mask of CH12 field. */
#define PPI_CHENSET_CH12_Disabled (0UL) /*!< Read: channel disabled */
#define PPI_CHENSET_CH12_Enabled (1UL) /*!< Read: channel enabled */
#define PPI_CHENSET_CH12_Set (1UL) /*!< Write: Enable channel */

/* Bit 11 : Channel 11 enable set register.  Writing '0' has no effect */
#define PPI_CHENSET_CH11_Pos (11UL) /*!< Position of CH11 field. */
#define PPI_CHENSET_CH11_Msk (0x1UL << PPI_CHENSET_CH11_Pos) /*!< Bit mask of CH11 field. */
#define PPI_CHENSET_CH11_Disabled (0UL) /*!< Read: channel disabled */
#define PPI_CHENSET_CH11_Enabled (1UL) /*!< Read: channel enabled */
#define PPI_CHENSET_CH11_Set (1UL) /*!< Write: Enable channel */

/* Bit 10 : Channel 10 enable set register.  Writing '0' has no effect */
#define PPI_CHENSET_CH10_Pos (10UL) /*!< Position of CH10 field. */
#define PPI_CHENSET_CH10_Msk (0x1UL << PPI_CHENSET_CH10_Pos) /*!< Bit mask of CH10 field. */
#define PPI_CHENSET_CH10_Disabled (0UL) /*!< Read: channel disabled */
#define PPI_CHENSET_CH10_Enabled (1UL) /*!< Read: channel enabled */
#define PPI_CHENSET_CH10_Set (1UL) /*!< Write: Enable channel */

/* Bit 9 : Channel 9 enable set register.  Writing '0' has no effect */
#define PPI_CHENSET_CH9_Pos (9UL) /*!< Position of CH9 field. */
#define PPI_CHENSET_CH9_Msk (0x1UL << PPI_CHENSET_CH9_Pos) /*!< Bit mask of CH9 field. */
#define PPI_CHENSET_CH9_Disabled (0UL) /*!< Read: channel disabled */
#define PPI_CHENSET_CH9_Enabled (1UL) /*!< Read: channel enabled */
#define PPI_CHENSET_CH9_Set (1UL) /*!< Write: Enable channel */

/* Bit 8 : Channel 8 enable set register.  Writing '0' has no effect */
#define PPI_CHENSET_CH8_Pos (8UL) /*!< Position of CH8 field. */
#define PPI_CHENSET_CH8_Msk (0x1UL << PPI_CHENSET_CH8_Pos) /*!< Bit mask of CH8 field. */
#define PPI_CHENSET_CH8_Disabled (0UL) /*!< Read: channel disabled */
#define PPI_CHENSET_CH8_Enabled (1UL) /*!< Read: channel enabled */
#define PPI_CHENSET_CH8_Set (1UL) /*!< Write: Enable channel */

/* Bit 7 : Channel 7 enable set register.  Writing '0' has no effect */
#define PPI_CHENSET_CH7_Pos (7UL) /*!< Position of CH7 field. */
#define PPI_CHENSET_CH7_Msk (0x1UL << PPI_CHENSET_CH7_Pos) /*!< Bit mask of CH7 field. */
#define PPI_CHENSET_CH7_Disabled (0UL) /*!< Read: channel disabled */
#define PPI_CHENSET_CH7_Enabled (1UL) /*!< Read: channel enabled */
#define PPI_CHENSET_CH7_Set (1UL) /*!< Write: Enable channel */

/* Bit 6 : Channel 6 enable set register.  Writing '0' has no effect */
#define PPI_CHENSET_CH6_Pos (6UL) /*!< Position of CH6 field. */
#define PPI_CHENSET_CH6_Msk (0x1UL << PPI_CHENSET_CH6_Pos) /*!< Bit mask of CH6 field. */
#define PPI_CHENSET_CH6_Disabled (0UL) /*!< Read: channel disabled */
#define PPI_CHENSET_CH6_Enabled (1UL) /*!< Read: channel enabled */
#define PPI_CHENSET_CH6_Set (1UL) /*!< Write: Enable channel */

/* Bit 5 : Channel 5 enable set register.  Writing '0' has no effect */
#define PPI_CHENSET_CH5_Pos (5UL) /*!< Position of CH5 field. */
#define PPI_CHENSET_CH5_Msk (0x1UL << PPI_CHENSET_CH5_Pos) /*!< Bit mask of CH5 field. */
#define PPI_CHENSET_CH5_Disabled (0UL) /*!< Read: channel disabled */
#define PPI_CHENSET_CH5_Enabled (1UL) /*!< Read: channel enabled */
#define PPI_CHENSET_CH5_Set (1UL) /*!< Write: Enable channel */

/* Bit 4 : Channel 4 enable set register.  Writing '0' has no effect */
#define PPI_CHENSET_CH4_Pos (4UL) /*!< Position of CH4 field. */
#define PPI_CHENSET_CH4_Msk (0x1UL << PPI_CHENSET_CH4_Pos) /*!< Bit mask of CH4 field. */
#define PPI_CHENSET_CH4_Disabled (0UL) /*!< Read: channel disabled */
#define PPI_CHENSET_CH4_Enabled (1UL) /*!< Read: channel enabled */
#define PPI_CHENSET_CH4_Set (1UL) /*!< Write: Enable channel */

/* Bit 3 : Channel 3 enable set register.  Writing '0' has no effect */
#define PPI_CHENSET_CH3_Pos (3UL) /*!< Position of CH3 field. */
#define PPI_CHENSET_CH3_Msk (0x1UL << PPI_CHENSET_CH3_Pos) /*!< Bit mask of CH3 field. */
#define PPI_CHENSET_CH3_Disabled (0UL) /*!< Read: channel disabled */
#define PPI_CHENSET_CH3_Enabled (1UL) /*!< Read: channel enabled */
#define PPI_CHENSET_CH3_Set (1UL) /*!< Write: Enable channel */

/* Bit 2 : Channel 2 enable set register.  Writing '0' has no effect */
#define PPI_CHENSET_CH2_Pos (2UL) /*!< Position of CH2 field. */
#define PPI_CHENSET_CH2_Msk (0x1UL << PPI_CHENSET_CH2_Pos) /*!< Bit mask of CH2 field. */
#define PPI_CHENSET_CH2_Disabled (0UL) /*!< Read: channel disabled */
#define PPI_CHENSET_CH2_Enabled (1UL) /*!< Read: channel enabled */
#define PPI_CHENSET_CH2_Set (1UL) /*!< Write: Enable channel */

/* Bit 1 : Channel 1 enable set register.  Writing '0' has no effect */
#define PPI_CHENSET_CH1_Pos (1UL) /*!< Position of CH1 field. */
#define PPI_CHENSET_CH1_Msk (0x1UL << PPI_CHENSET_CH1_Pos) /*!< Bit mask of CH1 field. */
#define PPI_CHENSET_CH1_Disabled (0UL) /*!< Read: channel disabled */
#define PPI_CHENSET_CH1_Enabled (1UL) /*!< Read: channel enabled */
#define PPI_CHENSET_CH1_Set (1UL) /*!< Write: Enable channel */

/* Bit 0 : Channel 0 enable set register.  Writing '0' has no effect */
#define PPI_CHENSET_CH0_Pos (0UL) /*!< Position of CH0 field. */
#define PPI_CHENSET_CH0_Msk (0x1UL << PPI_CHENSET_CH0_Pos) /*!< Bit mask of CH0 field. */
#define PPI_CHENSET_CH0_Disabled (0UL) /*!< Read: channel disabled */
#define PPI_CHENSET_CH0_Enabled (1UL) /*!< Read: channel enabled */
#define PPI_CHENSET_CH0_Set (1UL) /*!< Write: Enable channel */

/* Register: PPI_CHENCLR */
/* Description: Channel enable clear register */

/* Bit 31 : Channel 31 enable clear register.  Writing '0' has no effect */
#define PPI_CHENCLR_CH31_Pos (31UL) /*!< Position of CH31 field. */
#define PPI_CHENCLR_CH31_Msk (0x1UL << PPI_CHENCLR_CH31_Pos) /*!< Bit mask of CH31 field. */
#define PPI_CHENCLR_CH31_Disabled (0UL) /*!< Read: channel disabled */
#define PPI_CHENCLR_CH31_Enabled (1UL) /*!< Read: channel enabled */
#define PPI_CHENCLR_CH31_Clear (1UL) /*!< Write: disable channel */

/* Bit 30 : Channel 30 enable clear register.  Writing '0' has no effect */
#define PPI_CHENCLR_CH30_Pos (30UL) /*!< Position of CH30 field. */
#define PPI_CHENCLR_CH30_Msk (0x1UL << PPI_CHENCLR_CH30_Pos) /*!< Bit mask of CH30 field. */
#define PPI_CHENCLR_CH30_Disabled (0UL) /*!< Read: channel disabled */
#define PPI_CHENCLR_CH30_Enabled (1UL) /*!< Read: channel enabled */
#define PPI_CHENCLR_CH30_Clear (1UL) /*!< Write: disable channel */

/* Bit 29 : Channel 29 enable clear register.  Writing '0' has no effect */
#define PPI_CHENCLR_CH29_Pos (29UL) /*!< Position of CH29 field. */
#define PPI_CHENCLR_CH29_Msk (0x1UL << PPI_CHENCLR_CH29_Pos) /*!< Bit mask of CH29 field. */
#define PPI_CHENCLR_CH29_Disabled (0UL) /*!< Read: channel disabled */
#define PPI_CHENCLR_CH29_Enabled (1UL) /*!< Read: channel enabled */
#define PPI_CHENCLR_CH29_Clear (1UL) /*!< Write: disable channel */

/* Bit 28 : Channel 28 enable clear register.  Writing '0' has no effect */
#define PPI_CHENCLR_CH28_Pos (28UL) /*!< Position of CH28 field. */
#define PPI_CHENCLR_CH28_Msk (0x1UL << PPI_CHENCLR_CH28_Pos) /*!< Bit mask of CH28 field. */
#define PPI_CHENCLR_CH28_Disabled (0UL) /*!< Read: channel disabled */
#define PPI_CHENCLR_CH28_Enabled (1UL) /*!< Read: channel enabled */
#define PPI_CHENCLR_CH28_Clear (1UL) /*!< Write: disable channel */

/* Bit 27 : Channel 27 enable clear register.  Writing '0' has no effect */
#define PPI_CHENCLR_CH27_Pos (27UL) /*!< Position of CH27 field. */
#define PPI_CHENCLR_CH27_Msk (0x1UL << PPI_CHENCLR_CH27_Pos) /*!< Bit mask of CH27 field. */
#define PPI_CHENCLR_CH27_Disabled (0UL) /*!< Read: channel disabled */
#define PPI_CHENCLR_CH27_Enabled (1UL) /*!< Read: channel enabled */
#define PPI_CHENCLR_CH27_Clear (1UL) /*!< Write: disable channel */

/* Bit 26 : Channel 26 enable clear register.  Writing '0' has no effect */
#define PPI_CHENCLR_CH26_Pos (26UL) /*!< Position of CH26 field. */
#define PPI_CHENCLR_CH26_Msk (0x1UL << PPI_CHENCLR_CH26_Pos) /*!< Bit mask of CH26 field. */
#define PPI_CHENCLR_CH26_Disabled (0UL) /*!< Read: channel disabled */
#define PPI_CHENCLR_CH26_Enabled (1UL) /*!< Read: channel enabled */
#define PPI_CHENCLR_CH26_Clear (1UL) /*!< Write: disable channel */

/* Bit 25 : Channel 25 enable clear register.  Writing '0' has no effect */
#define PPI_CHENCLR_CH25_Pos (25UL) /*!< Position of CH25 field. */
#define PPI_CHENCLR_CH25_Msk (0x1UL << PPI_CHENCLR_CH25_Pos) /*!< Bit mask of CH25 field. */
#define PPI_CHENCLR_CH25_Disabled (0UL) /*!< Read: channel disabled */
#define PPI_CHENCLR_CH25_Enabled (1UL) /*!< Read: channel enabled */
#define PPI_CHENCLR_CH25_Clear (1UL) /*!< Write: disable channel */

/* Bit 24 : Channel 24 enable clear register.  Writing '0' has no effect */
#define PPI_CHENCLR_CH24_Pos (24UL) /*!< Position of CH24 field. */
#define PPI_CHENCLR_CH24_Msk (0x1UL << PPI_CHENCLR_CH24_Pos) /*!< Bit mask of CH24 field. */
#define PPI_CHENCLR_CH24_Disabled (0UL) /*!< Read: channel disabled */
#define PPI_CHENCLR_CH24_Enabled (1UL) /*!< Read: channel enabled */
#define PPI_CHENCLR_CH24_Clear (1UL) /*!< Write: disable channel */

/* Bit 23 : Channel 23 enable clear register.  Writing '0' has no effect */
#define PPI_CHENCLR_CH23_Pos (23UL) /*!< Position of CH23 field. */
#define PPI_CHENCLR_CH23_Msk (0x1UL << PPI_CHENCLR_CH23_Pos) /*!< Bit mask of CH23 field. */
#define PPI_CHENCLR_CH23_Disabled (0UL) /*!< Read: channel disabled */
#define PPI_CHENCLR_CH23_Enabled (1UL) /*!< Read: channel enabled */
#define PPI_CHENCLR_CH23_Clear (1UL) /*!< Write: disable channel */

/* Bit 22 : Channel 22 enable clear register.  Writing '0' has no effect */
#define PPI_CHENCLR_CH22_Pos (22UL) /*!< Position of CH22 field. */
#define PPI_CHENCLR_CH22_Msk (0x1UL << PPI_CHENCLR_CH22_Pos) /*!< Bit mask of CH22 field. */
#define PPI_CHENCLR_CH22_Disabled (0UL) /*!< Read: channel disabled */
#define PPI_CHENCLR_CH22_Enabled (1UL) /*!< Read: channel enabled */
#define PPI_CHENCLR_CH22_Clear (1UL) /*!< Write: disable channel */

/* Bit 21 : Channel 21 enable clear register.  Writing '0' has no effect */
#define PPI_CHENCLR_CH21_Pos (21UL) /*!< Position of CH21 field. */
#define PPI_CHENCLR_CH21_Msk (0x1UL << PPI_CHENCLR_CH21_Pos) /*!< Bit mask of CH21 field. */
#define PPI_CHENCLR_CH21_Disabled (0UL) /*!< Read: channel disabled */
#define PPI_CHENCLR_CH21_Enabled (1UL) /*!< Read: channel enabled */
#define PPI_CHENCLR_CH21_Clear (1UL) /*!< Write: disable channel */

/* Bit 20 : Channel 20 enable clear register.  Writing '0' has no effect */
#define PPI_CHENCLR_CH20_Pos (20UL) /*!< Position of CH20 field. */
#define PPI_CHENCLR_CH20_Msk (0x1UL << PPI_CHENCLR_CH20_Pos) /*!< Bit mask of CH20 field. */
#define PPI_CHENCLR_CH20_Disabled (0UL) /*!< Read: channel disabled */
#define PPI_CHENCLR_CH20_Enabled (1UL) /*!< Read: channel enabled */
#define PPI_CHENCLR_CH20_Clear (1UL) /*!< Write: disable channel */

/* Bit 19 : Channel 19 enable clear register.  Writing '0' has no effect */
#define PPI_CHENCLR_CH19_Pos (19UL) /*!< Position of CH19 field. */
#define PPI_CHENCLR_CH19_Msk (0x1UL << PPI_CHENCLR_CH19_Pos) /*!< Bit mask of CH19 field. */
#define PPI_CHENCLR_CH19_Disabled (0UL) /*!< Read: channel disabled */
#define PPI_CHENCLR_CH19_Enabled (1UL) /*!< Read: channel enabled */
#define PPI_CHENCLR_CH19_Clear (1UL) /*!< Write: disable channel */

/* Bit 18 : Channel 18 enable clear register.  Writing '0' has no effect */
#define PPI_CHENCLR_CH18_Pos (18UL) /*!< Position of CH18 field. */
#define PPI_CHENCLR_CH18_Msk (0x1UL << PPI_CHENCLR_CH18_Pos) /*!< Bit mask of CH18 field. */
#define PPI_CHENCLR_CH18_Disabled (0UL) /*!< Read: channel disabled */
#define PPI_CHENCLR_CH18_Enabled (1UL) /*!< Read: channel enabled */
#define PPI_CHENCLR_CH18_Clear (1UL) /*!< Write: disable channel */

/* Bit 17 : Channel 17 enable clear register.  Writing '0' has no effect */
#define PPI_CHENCLR_CH17_Pos (17UL) /*!< Position of CH17 field. */
#define PPI_CHENCLR_CH17_Msk (0x1UL << PPI_CHENCLR_CH17_Pos) /*!< Bit mask of CH17 field. */
#define PPI_CHENCLR_CH17_Disabled (0UL) /*!< Read: channel disabled */
#define PPI_CHENCLR_CH17_Enabled (1UL) /*!< Read: channel enabled */
#define PPI_CHENCLR_CH17_Clear (1UL) /*!< Write: disable channel */

/* Bit 16 : Channel 16 enable clear register.  Writing '0' has no effect */
#define PPI_CHENCLR_CH16_Pos (16UL) /*!< Position of CH16 field. */
#define PPI_CHENCLR_CH16_Msk (0x1UL << PPI_CHENCLR_CH16_Pos) /*!< Bit mask of CH16 field. */
#define PPI_CHENCLR_CH16_Disabled (0UL) /*!< Read: channel disabled */
#define PPI_CHENCLR_CH16_Enabled (1UL) /*!< Read: channel enabled */
#define PPI_CHENCLR_CH16_Clear (1UL) /*!< Write: disable channel */

/* Bit 15 : Channel 15 enable clear register.  Writing '0' has no effect */
#define PPI_CHENCLR_CH15_Pos (15UL) /*!< Position of CH15 field. */
#define PPI_CHENCLR_CH15_Msk (0x1UL << PPI_CHENCLR_CH15_Pos) /*!< Bit mask of CH15 field. */
#define PPI_CHENCLR_CH15_Disabled (0UL) /*!< Read: channel disabled */
#define PPI_CHENCLR_CH15_Enabled (1UL) /*!< Read: channel enabled */
#define PPI_CHENCLR_CH15_Clear (1UL) /*!< Write: disable channel */

/* Bit 14 : Channel 14 enable clear register.  Writing '0' has no effect */
#define PPI_CHENCLR_CH14_Pos (14UL) /*!< Position of CH14 field. */
#define PPI_CHENCLR_CH14_Msk (0x1UL << PPI_CHENCLR_CH14_Pos) /*!< Bit mask of CH14 field. */
#define PPI_CHENCLR_CH14_Disabled (0UL) /*!< Read: channel disabled */
#define PPI_CHENCLR_CH14_Enabled (1UL) /*!< Read: channel enabled */
#define PPI_CHENCLR_CH14_Clear (1UL) /*!< Write: disable channel */

/* Bit 13 : Channel 13 enable clear register.  Writing '0' has no effect */
#define PPI_CHENCLR_CH13_Pos (13UL) /*!< Position of CH13 field. */
#define PPI_CHENCLR_CH13_Msk (0x1UL << PPI_CHENCLR_CH13_Pos) /*!< Bit mask of CH13 field. */
#define PPI_CHENCLR_CH13_Disabled (0UL) /*!< Read: channel disabled */
#define PPI_CHENCLR_CH13_Enabled (1UL) /*!< Read: channel enabled */
#define PPI_CHENCLR_CH13_Clear (1UL) /*!< Write: disable channel */

/* Bit 12 : Channel 12 enable clear register.  Writing '0' has no effect */
#define PPI_CHENCLR_CH12_Pos (12UL) /*!< Position of CH12 field. */
#define PPI_CHENCLR_CH12_Msk (0x1UL << PPI_CHENCLR_CH12_Pos) /*!< Bit mask of CH12 field. */
#define PPI_CHENCLR_CH12_Disabled (0UL) /*!< Read: channel disabled */
#define PPI_CHENCLR_CH12_Enabled (1UL) /*!< Read: channel enabled */
#define PPI_CHENCLR_CH12_Clear (1UL) /*!< Write: disable channel */

/* Bit 11 : Channel 11 enable clear register.  Writing '0' has no effect */
#define PPI_CHENCLR_CH11_Pos (11UL) /*!< Position of CH11 field. */
#define PPI_CHENCLR_CH11_Msk (0x1UL << PPI_CHENCLR_CH11_Pos) /*!< Bit mask of CH11 field. */
#define PPI_CHENCLR_CH11_Disabled (0UL) /*!< Read: channel disabled */
#define PPI_CHENCLR_CH11_Enabled (1UL) /*!< Read: channel enabled */
#define PPI_CHENCLR_CH11_Clear (1UL) /*!< Write: disable channel */

/* Bit 10 : Channel 10 enable clear register.  Writing '0' has no effect */
#define PPI_CHENCLR_CH10_Pos (10UL) /*!< Position of CH10 field. */
#define PPI_CHENCLR_CH10_Msk (0x1UL << PPI_CHENCLR_CH10_Pos) /*!< Bit mask of CH10 field. */
#define PPI_CHENCLR_CH10_Disabled (0UL) /*!< Read: channel disabled */
#define PPI_CHENCLR_CH10_Enabled (1UL) /*!< Read: channel enabled */
#define PPI_CHENCLR_CH10_Clear (1UL) /*!< Write: disable channel */

/* Bit 9 : Channel 9 enable clear register.  Writing '0' has no effect */
#define PPI_CHENCLR_CH9_Pos (9UL) /*!< Position of CH9 field. */
#define PPI_CHENCLR_CH9_Msk (0x1UL << PPI_CHENCLR_CH9_Pos) /*!< Bit mask of CH9 field. */
#define PPI_CHENCLR_CH9_Disabled (0UL) /*!< Read: channel disabled */
#define PPI_CHENCLR_CH9_Enabled (1UL) /*!< Read: channel enabled */
#define PPI_CHENCLR_CH9_Clear (1UL) /*!< Write: disable channel */

/* Bit 8 : Channel 8 enable clear register.  Writing '0' has no effect */
#define PPI_CHENCLR_CH8_Pos (8UL) /*!< Position of CH8 field. */
#define PPI_CHENCLR_CH8_Msk (0x1UL << PPI_CHENCLR_CH8_Pos) /*!< Bit mask of CH8 field. */
#define PPI_CHENCLR_CH8_Disabled (0UL) /*!< Read: channel disabled */
#define PPI_CHENCLR_CH8_Enabled (1UL) /*!< Read: channel enabled */
#define PPI_CHENCLR_CH8_Clear (1UL) /*!< Write: disable channel */

/* Bit 7 : Channel 7 enable clear register.  Writing '0' has no effect */
#define PPI_CHENCLR_CH7_Pos (7UL) /*!< Position of CH7 field. */
#define PPI_CHENCLR_CH7_Msk (0x1UL << PPI_CHENCLR_CH7_Pos) /*!< Bit mask of CH7 field. */
#define PPI_CHENCLR_CH7_Disabled (0UL) /*!< Read: channel disabled */
#define PPI_CHENCLR_CH7_Enabled (1UL) /*!< Read: channel enabled */
#define PPI_CHENCLR_CH7_Clear (1UL) /*!< Write: disable channel */

/* Bit 6 : Channel 6 enable clear register.  Writing '0' has no effect */
#define PPI_CHENCLR_CH6_Pos (6UL) /*!< Position of CH6 field. */
#define PPI_CHENCLR_CH6_Msk (0x1UL << PPI_CHENCLR_CH6_Pos) /*!< Bit mask of CH6 field. */
#define PPI_CHENCLR_CH6_Disabled (0UL) /*!< Read: channel disabled */
#define PPI_CHENCLR_CH6_Enabled (1UL) /*!< Read: channel enabled */
#define PPI_CHENCLR_CH6_Clear (1UL) /*!< Write: disable channel */

/* Bit 5 : Channel 5 enable clear register.  Writing '0' has no effect */
#define PPI_CHENCLR_CH5_Pos (5UL) /*!< Position of CH5 field. */
#define PPI_CHENCLR_CH5_Msk (0x1UL << PPI_CHENCLR_CH5_Pos) /*!< Bit mask of CH5 field. */
#define PPI_CHENCLR_CH5_Disabled (0UL) /*!< Read: channel disabled */
#define PPI_CHENCLR_CH5_Enabled (1UL) /*!< Read: channel enabled */
#define PPI_CHENCLR_CH5_Clear (1UL) /*!< Write: disable channel */

/* Bit 4 : Channel 4 enable clear register.  Writing '0' has no effect */
#define PPI_CHENCLR_CH4_Pos (4UL) /*!< Position of CH4 field. */
#define PPI_CHENCLR_CH4_Msk (0x1UL << PPI_CHENCLR_CH4_Pos) /*!< Bit mask of CH4 field. */
#define PPI_CHENCLR_CH4_Disabled (0UL) /*!< Read: channel disabled */
#define PPI_CHENCLR_CH4_Enabled (1UL) /*!< Read: channel enabled */
#define PPI_CHENCLR_CH4_Clear (1UL) /*!< Write: disable channel */

/* Bit 3 : Channel 3 enable clear register.  Writing '0' has no effect */
#define PPI_CHENCLR_CH3_Pos (3UL) /*!< Position of CH3 field. */
#define PPI_CHENCLR_CH3_Msk (0x1UL << PPI_CHENCLR_CH3_Pos) /*!< Bit mask of CH3 field. */
#define PPI_CHENCLR_CH3_Disabled (0UL) /*!< Read: channel disabled */
#define PPI_CHENCLR_CH3_Enabled (1UL) /*!< Read: channel enabled */
#define PPI_CHENCLR_CH3_Clear (1UL) /*!< Write: disable channel */

/* Bit 2 : Channel 2 enable clear register.  Writing '0' has no effect */
#define PPI_CHENCLR_CH2_Pos (2UL) /*!< Position of CH2 field. */
#define PPI_CHENCLR_CH2_Msk (0x1UL << PPI_CHENCLR_CH2_Pos) /*!< Bit mask of CH2 field. */
#define PPI_CHENCLR_CH2_Disabled (0UL) /*!< Read: channel disabled */
#define PPI_CHENCLR_CH2_Enabled (1UL) /*!< Read: channel enabled */
#define PPI_CHENCLR_CH2_Clear (1UL) /*!< Write: disable channel */

/* Bit 1 : Channel 1 enable clear register.  Writing '0' has no effect */
#define PPI_CHENCLR_CH1_Pos (1UL) /*!< Position of CH1 field. */
#define PPI_CHENCLR_CH1_Msk (0x1UL << PPI_CHENCLR_CH1_Pos) /*!< Bit mask of CH1 field. */
#define PPI_CHENCLR_CH1_Disabled (0UL) /*!< Read: channel disabled */
#define PPI_CHENCLR_CH1_Enabled (1UL) /*!< Read: channel enabled */
#define PPI_CHENCLR_CH1_Clear (1UL) /*!< Write: disable channel */

/* Bit 0 : Channel 0 enable clear register.  Writing '0' has no effect */
#define PPI_CHENCLR_CH0_Pos (0UL) /*!< Position of CH0 field. */
#define PPI_CHENCLR_CH0_Msk (0x1UL << PPI_CHENCLR_CH0_Pos) /*!< Bit mask of CH0 field. */
#define PPI_CHENCLR_CH0_Disabled (0UL) /*!< Read: channel disabled */
#define PPI_CHENCLR_CH0_Enabled (1UL) /*!< Read: channel enabled */
#define PPI_CHENCLR_CH0_Clear (1UL) /*!< Write: disable channel */

/* Register: PPI_CH_EEP */
/* Description: Description cluster[n]: Channel n event end-point */

/* Bits 31..0 : Pointer to event register. Accepts only addresses to registers from the Event group. */
#define PPI_CH_EEP_EEP_Pos (0UL) /*!< Position of EEP field. */
#define PPI_CH_EEP_EEP_Msk (0xFFFFFFFFUL << PPI_CH_EEP_EEP_Pos) /*!< Bit mask of EEP field. */

/* Register: PPI_CH_TEP */
/* Description: Description cluster[n]: Channel n task end-point */

/* Bits 31..0 : Pointer to task register. Accepts only addresses to registers from the Task group. */
#define PPI_CH_TEP_TEP_Pos (0UL) /*!< Position of TEP field. */
#define PPI_CH_TEP_TEP_Msk (0xFFFFFFFFUL << PPI_CH_TEP_TEP_Pos) /*!< Bit mask of TEP field. */

/* Register: PPI_CHG */
/* Description: Description collection[n]: Channel group n */

/* Bit 31 : Include or exclude channel 31 */
#define PPI_CHG_CH31_Pos (31UL) /*!< Position of CH31 field. */
#define PPI_CHG_CH31_Msk (0x1UL << PPI_CHG_CH31_Pos) /*!< Bit mask of CH31 field. */
#define PPI_CHG_CH31_Excluded (0UL) /*!< Exclude */
#define PPI_CHG_CH31_Included (1UL) /*!< Include */

/* Bit 30 : Include or exclude channel 30 */
#define PPI_CHG_CH30_Pos (30UL) /*!< Position of CH30 field. */
#define PPI_CHG_CH30_Msk (0x1UL << PPI_CHG_CH30_Pos) /*!< Bit mask of CH30 field. */
#define PPI_CHG_CH30_Excluded (0UL) /*!< Exclude */
#define PPI_CHG_CH30_Included (1UL) /*!< Include */

/* Bit 29 : Include or exclude channel 29 */
#define PPI_CHG_CH29_Pos (29UL) /*!< Position of CH29 field. */
#define PPI_CHG_CH29_Msk (0x1UL << PPI_CHG_CH29_Pos) /*!< Bit mask of CH29 field. */
#define PPI_CHG_CH29_Excluded (0UL) /*!< Exclude */
#define PPI_CHG_CH29_Included (1UL) /*!< Include */

/* Bit 28 : Include or exclude channel 28 */
#define PPI_CHG_CH28_Pos (28UL) /*!< Position of CH28 field. */
#define PPI_CHG_CH28_Msk (0x1UL << PPI_CHG_CH28_Pos) /*!< Bit mask of CH28 field. */
#define PPI_CHG_CH28_Excluded (0UL) /*!< Exclude */
#define PPI_CHG_CH28_Included (1UL) /*!< Include */

/* Bit 27 : Include or exclude channel 27 */
#define PPI_CHG_CH27_Pos (27UL) /*!< Position of CH27 field. */
#define PPI_CHG_CH27_Msk (0x1UL << PPI_CHG_CH27_Pos) /*!< Bit mask of CH27 field. */
#define PPI_CHG_CH27_Excluded (0UL) /*!< Exclude */
#define PPI_CHG_CH27_Included (1UL) /*!< Include */

/* Bit 26 : Include or exclude channel 26 */
#define PPI_CHG_CH26_Pos (26UL) /*!< Position of CH26 field. */
#define PPI_CHG_CH26_Msk (0x1UL << PPI_CHG_CH26_Pos) /*!< Bit mask of CH26 field. */
#define PPI_CHG_CH26_Excluded (0UL) /*!< Exclude */
#define PPI_CHG_CH26_Included (1UL) /*!< Include */

/* Bit 25 : Include or exclude channel 25 */
#define PPI_CHG_CH25_Pos (25UL) /*!< Position of CH25 field. */
#define PPI_CHG_CH25_Msk (0x1UL << PPI_CHG_CH25_Pos) /*!< Bit mask of CH25 field. */
#define PPI_CHG_CH25_Excluded (0UL) /*!< Exclude */
#define PPI_CHG_CH25_Included (1UL) /*!< Include */

/* Bit 24 : Include or exclude channel 24 */
#define PPI_CHG_CH24_Pos (24UL) /*!< Position of CH24 field. */
#define PPI_CHG_CH24_Msk (0x1UL << PPI_CHG_CH24_Pos) /*!< Bit mask of CH24 field. */
#define PPI_CHG_CH24_Excluded (0UL) /*!< Exclude */
#define PPI_CHG_CH24_Included (1UL) /*!< Include */

/* Bit 23 : Include or exclude channel 23 */
#define PPI_CHG_CH23_Pos (23UL) /*!< Position of CH23 field. */
#define PPI_CHG_CH23_Msk (0x1UL << PPI_CHG_CH23_Pos) /*!< Bit mask of CH23 field. */
#define PPI_CHG_CH23_Excluded (0UL) /*!< Exclude */
#define PPI_CHG_CH23_Included (1UL) /*!< Include */

/* Bit 22 : Include or exclude channel 22 */
#define PPI_CHG_CH22_Pos (22UL) /*!< Position of CH22 field. */
#define PPI_CHG_CH22_Msk (0x1UL << PPI_CHG_CH22_Pos) /*!< Bit mask of CH22 field. */
#define PPI_CHG_CH22_Excluded (0UL) /*!< Exclude */
#define PPI_CHG_CH22_Included (1UL) /*!< Include */

/* Bit 21 : Include or exclude channel 21 */
#define PPI_CHG_CH21_Pos (21UL) /*!< Position of CH21 field. */
#define PPI_CHG_CH21_Msk (0x1UL << PPI_CHG_CH21_Pos) /*!< Bit mask of CH21 field. */
#define PPI_CHG_CH21_Excluded (0UL) /*!< Exclude */
#define PPI_CHG_CH21_Included (1UL) /*!< Include */

/* Bit 20 : Include or exclude channel 20 */
#define PPI_CHG_CH20_Pos (20UL) /*!< Position of CH20 field. */
#define PPI_CHG_CH20_Msk (0x1UL << PPI_CHG_CH20_Pos) /*!< Bit mask of CH20 field. */
#define PPI_CHG_CH20_Excluded (0UL) /*!< Exclude */
#define PPI_CHG_CH20_Included (1UL) /*!< Include */

/* Bit 19 : Include or exclude channel 19 */
#define PPI_CHG_CH19_Pos (19UL) /*!< Position of CH19 field. */
#define PPI_CHG_CH19_Msk (0x1UL << PPI_CHG_CH19_Pos) /*!< Bit mask of CH19 field. */
#define PPI_CHG_CH19_Excluded (0UL) /*!< Exclude */
#define PPI_CHG_CH19_Included (1UL) /*!< Include */

/* Bit 18 : Include or exclude channel 18 */
#define PPI_CHG_CH18_Pos (18UL) /*!< Position of CH18 field. */
#define PPI_CHG_CH18_Msk (0x1UL << PPI_CHG_CH18_Pos) /*!< Bit mask of CH18 field. */
#define PPI_CHG_CH18_Excluded (0UL) /*!< Exclude */
#define PPI_CHG_CH18_Included (1UL) /*!< Include */

/* Bit 17 : Include or exclude channel 17 */
#define PPI_CHG_CH17_Pos (17UL) /*!< Position of CH17 field. */
#define PPI_CHG_CH17_Msk (0x1UL << PPI_CHG_CH17_Pos) /*!< Bit mask of CH17 field. */
#define PPI_CHG_CH17_Excluded (0UL) /*!< Exclude */
#define PPI_CHG_CH17_Included (1UL) /*!< Include */

/* Bit 16 : Include or exclude channel 16 */
#define PPI_CHG_CH16_Pos (16UL) /*!< Position of CH16 field. */
#define PPI_CHG_CH16_Msk (0x1UL << PPI_CHG_CH16_Pos) /*!< Bit mask of CH16 field. */
#define PPI_CHG_CH16_Excluded (0UL) /*!< Exclude */
#define PPI_CHG_CH16_Included (1UL) /*!< Include */

/* Bit 15 : Include or exclude channel 15 */
#define PPI_CHG_CH15_Pos (15UL) /*!< Position of CH15 field. */
#define PPI_CHG_CH15_Msk (0x1UL << PPI_CHG_CH15_Pos) /*!< Bit mask of CH15 field. */
#define PPI_CHG_CH15_Excluded (0UL) /*!< Exclude */
#define PPI_CHG_CH15_Included (1UL) /*!< Include */

/* Bit 14 : Include or exclude channel 14 */
#define PPI_CHG_CH14_Pos (14UL) /*!< Position of CH14 field. */
#define PPI_CHG_CH14_Msk (0x1UL << PPI_CHG_CH14_Pos) /*!< Bit mask of CH14 field. */
#define PPI_CHG_CH14_Excluded (0UL) /*!< Exclude */
#define PPI_CHG_CH14_Included (1UL) /*!< Include */

/* Bit 13 : Include or exclude channel 13 */
#define PPI_CHG_CH13_Pos (13UL) /*!< Position of CH13 field. */
#define PPI_CHG_CH13_Msk (0x1UL << PPI_CHG_CH13_Pos) /*!< Bit mask of CH13 field. */
#define PPI_CHG_CH13_Excluded (0UL) /*!< Exclude */
#define PPI_CHG_CH13_Included (1UL) /*!< Include */

/* Bit 12 : Include or exclude channel 12 */
#define PPI_CHG_CH12_Pos (12UL) /*!< Position of CH12 field. */
#define PPI_CHG_CH12_Msk (0x1UL << PPI_CHG_CH12_Pos) /*!< Bit mask of CH12 field. */
#define PPI_CHG_CH12_Excluded (0UL) /*!< Exclude */
#define PPI_CHG_CH12_Included (1UL) /*!< Include */

/* Bit 11 : Include or exclude channel 11 */
#define PPI_CHG_CH11_Pos (11UL) /*!< Position of CH11 field. */
#define PPI_CHG_CH11_Msk (0x1UL << PPI_CHG_CH11_Pos) /*!< Bit mask of CH11 field. */
#define PPI_CHG_CH11_Excluded (0UL) /*!< Exclude */
#define PPI_CHG_CH11_Included (1UL) /*!< Include */

/* Bit 10 : Include or exclude channel 10 */
#define PPI_CHG_CH10_Pos (10UL) /*!< Position of CH10 field. */
#define PPI_CHG_CH10_Msk (0x1UL << PPI_CHG_CH10_Pos) /*!< Bit mask of CH10 field. */
#define PPI_CHG_CH10_Excluded (0UL) /*!< Exclude */
#define PPI_CHG_CH10_Included (1UL) /*!< Include */

/* Bit 9 : Include or exclude channel 9 */
#define PPI_CHG_CH9_Pos (9UL) /*!< Position of CH9 field. */
#define PPI_CHG_CH9_Msk (0x1UL << PPI_CHG_CH9_Pos) /*!< Bit mask of CH9 field. */
#define PPI_CHG_CH9_Excluded (0UL) /*!< Exclude */
#define PPI_CHG_CH9_Included (1UL) /*!< Include */

/* Bit 8 : Include or exclude channel 8 */
#define PPI_CHG_CH8_Pos (8UL) /*!< Position of CH8 field. */
#define PPI_CHG_CH8_Msk (0x1UL << PPI_CHG_CH8_Pos) /*!< Bit mask of CH8 field. */
#define PPI_CHG_CH8_Excluded (0UL) /*!< Exclude */
#define PPI_CHG_CH8_Included (1UL) /*!< Include */

/* Bit 7 : Include or exclude channel 7 */
#define PPI_CHG_CH7_Pos (7UL) /*!< Position of CH7 field. */
#define PPI_CHG_CH7_Msk (0x1UL << PPI_CHG_CH7_Pos) /*!< Bit mask of CH7 field. */
#define PPI_CHG_CH7_Excluded (0UL) /*!< Exclude */
#define PPI_CHG_CH7_Included (1UL) /*!< Include */

/* Bit 6 : Include or exclude channel 6 */
#define PPI_CHG_CH6_Pos (6UL) /*!< Position of CH6 field. */
#define PPI_CHG_CH6_Msk (0x1UL << PPI_CHG_CH6_Pos) /*!< Bit mask of CH6 field. */
#define PPI_CHG_CH6_Excluded (0UL) /*!< Exclude */
#define PPI_CHG_CH6_Included (1UL) /*!< Include */

/* Bit 5 : Include or exclude channel 5 */
#define PPI_CHG_CH5_Pos (5UL) /*!< Position of CH5 field. */
#define PPI_CHG_CH5_Msk (0x1UL << PPI_CHG_CH5_Pos) /*!< Bit mask of CH5 field. */
#define PPI_CHG_CH5_Excluded (0UL) /*!< Exclude */
#define PPI_CHG_CH5_Included (1UL) /*!< Include */

/* Bit 4 : Include or exclude channel 4 */
#define PPI_CHG_CH4_Pos (4UL) /*!< Position of CH4 field. */
#define PPI_CHG_CH4_Msk (0x1UL << PPI_CHG_CH4_Pos) /*!< Bit mask of CH4 field. */
#define PPI_CHG_CH4_Excluded (0UL) /*!< Exclude */
#define PPI_CHG_CH4_Included (1UL) /*!< Include */

/* Bit 3 : Include or exclude channel 3 */
#define PPI_CHG_CH3_Pos (3UL) /*!< Position of CH3 field. */
#define PPI_CHG_CH3_Msk (0x1UL << PPI_CHG_CH3_Pos) /*!< Bit mask of CH3 field. */
#define PPI_CHG_CH3_Excluded (0UL) /*!< Exclude */
#define PPI_CHG_CH3_Included (1UL) /*!< Include */

/* Bit 2 : Include or exclude channel 2 */
#define PPI_CHG_CH2_Pos (2UL) /*!< Position of CH2 field. */
#define PPI_CHG_CH2_Msk (0x1UL << PPI_CHG_CH2_Pos) /*!< Bit mask of CH2 field. */
#define PPI_CHG_CH2_Excluded (0UL) /*!< Exclude */
#define PPI_CHG_CH2_Included (1UL) /*!< Include */

/* Bit 1 : Include or exclude channel 1 */
#define PPI_CHG_CH1_Pos (1UL) /*!< Position of CH1 field. */
#define PPI_CHG_CH1_Msk (0x1UL << PPI_CHG_CH1_Pos) /*!< Bit mask of CH1 field. */
#define PPI_CHG_CH1_Excluded (0UL) /*!< Exclude */
#define PPI_CHG_CH1_Included (1UL) /*!< Include */

/* Bit 0 : Include or exclude channel 0 */
#define PPI_CHG_CH0_Pos (0UL) /*!< Position of CH0 field. */
#define PPI_CHG_CH0_Msk (0x1UL << PPI_CHG_CH0_Pos) /*!< Bit mask of CH0 field. */
#define PPI_CHG_CH0_Excluded (0UL) /*!< Exclude */
#define PPI_CHG_CH0_Included (1UL) /*!< Include */

/* Register: PPI_FORK_TEP */
/* Description: Description cluster[n]: Channel n task end-point */

/* Bits 31..0 : Pointer to task register */
#define PPI_FORK_TEP_TEP_Pos (0UL) /*!< Position of TEP field. */
#define PPI_FORK_TEP_TEP_Msk (0xFFFFFFFFUL << PPI_FORK_TEP_TEP_Pos) /*!< Bit mask of TEP field. */


/* Peripheral: PWM */
/* Description: Pulse width modulation unit */

/* Register: PWM_TASKS_START */
/* Description: Starts PWM pulse generation with the last loaded values */

/* Bit 0 :   */
#define PWM_TASKS_START_TASKS_START_Pos (0UL) /*!< Position of TASKS_START field. */
#define PWM_TASKS_START_TASKS_START_Msk (0x1UL << PWM_TASKS_START_TASKS_START_Pos) /*!< Bit mask of TASKS_START field. */

/* Register: PWM_TASKS_STOP */
/* Description: Stops PWM pulse generation on all channels at the end of current PWM period, and stops sequence playback */

/* Bit 0 :   */
#define PWM_TASKS_STOP_TASKS_STOP_Pos (0UL) /*!< Position of TASKS_STOP field. */
#define PWM_TASKS_STOP_TASKS_STOP_Msk (0x1UL << PWM_TASKS_STOP_TASKS_STOP_Pos) /*!< Bit mask of TASKS_STOP field. */

/* Register: PWM_TASKS_SEQSTART */
/* Description: Description collection[n]: Loads the first PWM value on all enabled channels from sequence n, and starts playing that sequence at the rate defined in SEQ[n]REFRESH and/or DECODER.MODE. Causes PWM generation to start if not running. Triggering a SEQSTART[n] task while a sequence is already playing back will gracefully (i.e. glitch-free) abort that sequence at the earliest opportunity and start sequence n. */

/* Bit 0 :   */
#define PWM_TASKS_SEQSTART_TASKS_SEQSTART_Pos (0UL) /*!< Position of TASKS_SEQSTART field. */
#define PWM_TASKS_SEQSTART_TASKS_SEQSTART_Msk (0x1UL << PWM_TASKS_SEQSTART_TASKS_SEQSTART_Pos) /*!< Bit mask of TASKS_SEQSTART field. */

/* Register: PWM_TASKS_NEXTSTEP */
/* Description: Steps by one value in the current sequence on all enabled channels if DECODER.MODE=NextStep. Does not cause PWM generation to start if not running. */

/* Bit 0 :   */
#define PWM_TASKS_NEXTSTEP_TASKS_NEXTSTEP_Pos (0UL) /*!< Position of TASKS_NEXTSTEP field. */
#define PWM_TASKS_NEXTSTEP_TASKS_NEXTSTEP_Msk (0x1UL << PWM_TASKS_NEXTSTEP_TASKS_NEXTSTEP_Pos) /*!< Bit mask of TASKS_NEXTSTEP field. */

/* Register: PWM_TASKS_SEQABORT */
/* Description: (Gracefully) aborts the playback of the current sequence or the current end delay */

/* Bit 0 :   */
#define PWM_TASKS_SEQABORT_TASKS_SEQABORT_Pos (0UL) /*!< Position of TASKS_SEQABORT field. */
#define PWM_TASKS_SEQABORT_TASKS_SEQABORT_Msk (0x1UL << PWM_TASKS_SEQABORT_TASKS_SEQABORT_Pos) /*!< Bit mask of TASKS_SEQABORT field. */

/* Register: PWM_EVENTS_STARTED */
/* Description: Response to START task, emitted when the PWM pulse generation starts */

/* Bit 0 :   */
#define PWM_EVENTS_STARTED_EVENTS_STARTED_Pos (0UL) /*!< Position of EVENTS_STARTED field. */
#define PWM_EVENTS_STARTED_EVENTS_STARTED_Msk (0x1UL << PWM_EVENTS_STARTED_EVENTS_STARTED_Pos) /*!< Bit mask of EVENTS_STARTED field. */

/* Register: PWM_EVENTS_STOPPED */
/* Description: Response to STOP task, emitted when PWM pulses are no longer generated */

/* Bit 0 :   */
#define PWM_EVENTS_STOPPED_EVENTS_STOPPED_Pos (0UL) /*!< Position of EVENTS_STOPPED field. */
#define PWM_EVENTS_STOPPED_EVENTS_STOPPED_Msk (0x1UL << PWM_EVENTS_STOPPED_EVENTS_STOPPED_Pos) /*!< Bit mask of EVENTS_STOPPED field. */

/* Register: PWM_EVENTS_SEQSTARTED */
/* Description: Description collection[n]: First PWM period started on sequence n */

/* Bit 0 :   */
#define PWM_EVENTS_SEQSTARTED_EVENTS_SEQSTARTED_Pos (0UL) /*!< Position of EVENTS_SEQSTARTED field. */
#define PWM_EVENTS_SEQSTARTED_EVENTS_SEQSTARTED_Msk (0x1UL << PWM_EVENTS_SEQSTARTED_EVENTS_SEQSTARTED_Pos) /*!< Bit mask of EVENTS_SEQSTARTED field. */

/* Register: PWM_EVENTS_SEQEND */
/* Description: Description collection[n]: Emitted at end of every sequence n, when last value from RAM has been applied to wave counter */

/* Bit 0 :   */
#define PWM_EVENTS_SEQEND_EVENTS_SEQEND_Pos (0UL) /*!< Position of EVENTS_SEQEND field. */
#define PWM_EVENTS_SEQEND_EVENTS_SEQEND_Msk (0x1UL << PWM_EVENTS_SEQEND_EVENTS_SEQEND_Pos) /*!< Bit mask of EVENTS_SEQEND field. */

/* Register: PWM_EVENTS_PWMPERIODEND */
/* Description: Emitted at the end of each PWM period */

/* Bit 0 :   */
#define PWM_EVENTS_PWMPERIODEND_EVENTS_PWMPERIODEND_Pos (0UL) /*!< Position of EVENTS_PWMPERIODEND field. */
#define PWM_EVENTS_PWMPERIODEND_EVENTS_PWMPERIODEND_Msk (0x1UL << PWM_EVENTS_PWMPERIODEND_EVENTS_PWMPERIODEND_Pos) /*!< Bit mask of EVENTS_PWMPERIODEND field. */

/* Register: PWM_EVENTS_LOOPSDONE */
/* Description: Concatenated sequences have been played the amount of times defined in LOOP.CNT */

/* Bit 0 :   */
#define PWM_EVENTS_LOOPSDONE_EVENTS_LOOPSDONE_Pos (0UL) /*!< Position of EVENTS_LOOPSDONE field. */
#define PWM_EVENTS_LOOPSDONE_EVENTS_LOOPSDONE_Msk (0x1UL << PWM_EVENTS_LOOPSDONE_EVENTS_LOOPSDONE_Pos) /*!< Bit mask of EVENTS_LOOPSDONE field. */

/* Register: PWM_EVENTS_RAMUNDERFLOW */
/* Description: Emitted when retrieving from RAM does not complete in time for the PWM module */

/* Bit 0 :   */
#define PWM_EVENTS_RAMUNDERFLOW_EVENTS_RAMUNDERFLOW_Pos (0UL) /*!< Position of EVENTS_RAMUNDERFLOW field. */
#define PWM_EVENTS_RAMUNDERFLOW_EVENTS_RAMUNDERFLOW_Msk (0x1UL << PWM_EVENTS_RAMUNDERFLOW_EVENTS_RAMUNDERFLOW_Pos) /*!< Bit mask of EVENTS_RAMUNDERFLOW field. */

/* Register: PWM_EVENTS_DMAREADY */
/* Description: Description collection[n]: Emitted when EasyDMA has retrieved the .PTR and .CNT registers for sequence n (they can be prepared for the next sequence) */

/* Bit 0 :   */
#define PWM_EVENTS_DMAREADY_EVENTS_DMAREADY_Pos (0UL) /*!< Position of EVENTS_DMAREADY field. */
#define PWM_EVENTS_DMAREADY_EVENTS_DMAREADY_Msk (0x1UL << PWM_EVENTS_DMAREADY_EVENTS_DMAREADY_Pos) /*!< Bit mask of EVENTS_DMAREADY field. */

/* Register: PWM_EVENTS_DMAEND */
/* Description: Description collection[n]: Emitted when EasyDMA has completed retrieving the values of sequence n from RAM buffer */

/* Bit 0 :   */
#define PWM_EVENTS_DMAEND_EVENTS_DMAEND_Pos (0UL) /*!< Position of EVENTS_DMAEND field. */
#define PWM_EVENTS_DMAEND_EVENTS_DMAEND_Msk (0x1UL << PWM_EVENTS_DMAEND_EVENTS_DMAEND_Pos) /*!< Bit mask of EVENTS_DMAEND field. */

/* Register: PWM_SHORTS */
/* Description: Shortcut register */

/* Bit 5 : Shortcut between RAMUNDERFLOW event and STOP task */
#define PWM_SHORTS_RAMUNDERFLOW_STOP_Pos (5UL) /*!< Position of RAMUNDERFLOW_STOP field. */
#define PWM_SHORTS_RAMUNDERFLOW_STOP_Msk (0x1UL << PWM_SHORTS_RAMUNDERFLOW_STOP_Pos) /*!< Bit mask of RAMUNDERFLOW_STOP field. */
#define PWM_SHORTS_RAMUNDERFLOW_STOP_Disabled (0UL) /*!< Disable shortcut */
#define PWM_SHORTS_RAMUNDERFLOW_STOP_Enabled (1UL) /*!< Enable shortcut */

/* Bit 4 : Shortcut between LOOPSDONE event and STOP task */
#define PWM_SHORTS_LOOPSDONE_STOP_Pos (4UL) /*!< Position of LOOPSDONE_STOP field. */
#define PWM_SHORTS_LOOPSDONE_STOP_Msk (0x1UL << PWM_SHORTS_LOOPSDONE_STOP_Pos) /*!< Bit mask of LOOPSDONE_STOP field. */
#define PWM_SHORTS_LOOPSDONE_STOP_Disabled (0UL) /*!< Disable shortcut */
#define PWM_SHORTS_LOOPSDONE_STOP_Enabled (1UL) /*!< Enable shortcut */

/* Bit 3 : Shortcut between LOOPSDONE event and SEQSTART[1] task */
#define PWM_SHORTS_LOOPSDONE_SEQSTART1_Pos (3UL) /*!< Position of LOOPSDONE_SEQSTART1 field. */
#define PWM_SHORTS_LOOPSDONE_SEQSTART1_Msk (0x1UL << PWM_SHORTS_LOOPSDONE_SEQSTART1_Pos) /*!< Bit mask of LOOPSDONE_SEQSTART1 field. */
#define PWM_SHORTS_LOOPSDONE_SEQSTART1_Disabled (0UL) /*!< Disable shortcut */
#define PWM_SHORTS_LOOPSDONE_SEQSTART1_Enabled (1UL) /*!< Enable shortcut */

/* Bit 2 : Shortcut between LOOPSDONE event and SEQSTART[0] task */
#define PWM_SHORTS_LOOPSDONE_SEQSTART0_Pos (2UL) /*!< Position of LOOPSDONE_SEQSTART0 field. */
#define PWM_SHORTS_LOOPSDONE_SEQSTART0_Msk (0x1UL << PWM_SHORTS_LOOPSDONE_SEQSTART0_Pos) /*!< Bit mask of LOOPSDONE_SEQSTART0 field. */
#define PWM_SHORTS_LOOPSDONE_SEQSTART0_Disabled (0UL) /*!< Disable shortcut */
#define PWM_SHORTS_LOOPSDONE_SEQSTART0_Enabled (1UL) /*!< Enable shortcut */

/* Bit 1 : Shortcut between SEQEND[1] event and STOP task */
#define PWM_SHORTS_SEQEND1_STOP_Pos (1UL) /*!< Position of SEQEND1_STOP field. */
#define PWM_SHORTS_SEQEND1_STOP_Msk (0x1UL << PWM_SHORTS_SEQEND1_STOP_Pos) /*!< Bit mask of SEQEND1_STOP field. */
#define PWM_SHORTS_SEQEND1_STOP_Disabled (0UL) /*!< Disable shortcut */
#define PWM_SHORTS_SEQEND1_STOP_Enabled (1UL) /*!< Enable shortcut */

/* Bit 0 : Shortcut between SEQEND[0] event and STOP task */
#define PWM_SHORTS_SEQEND0_STOP_Pos (0UL) /*!< Position of SEQEND0_STOP field. */
#define PWM_SHORTS_SEQEND0_STOP_Msk (0x1UL << PWM_SHORTS_SEQEND0_STOP_Pos) /*!< Bit mask of SEQEND0_STOP field. */
#define PWM_SHORTS_SEQEND0_STOP_Disabled (0UL) /*!< Disable shortcut */
#define PWM_SHORTS_SEQEND0_STOP_Enabled (1UL) /*!< Enable shortcut */

/* Register: PWM_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 12 : Enable or disable interrupt for DMAEND[1] event */
#define PWM_INTEN_DMAEND1_Pos (12UL) /*!< Position of DMAEND1 field. */
#define PWM_INTEN_DMAEND1_Msk (0x1UL << PWM_INTEN_DMAEND1_Pos) /*!< Bit mask of DMAEND1 field. */
#define PWM_INTEN_DMAEND1_Disabled (0UL) /*!< Disable */
#define PWM_INTEN_DMAEND1_Enabled (1UL) /*!< Enable */

/* Bit 11 : Enable or disable interrupt for DMAEND[0] event */
#define PWM_INTEN_DMAEND0_Pos (11UL) /*!< Position of DMAEND0 field. */
#define PWM_INTEN_DMAEND0_Msk (0x1UL << PWM_INTEN_DMAEND0_Pos) /*!< Bit mask of DMAEND0 field. */
#define PWM_INTEN_DMAEND0_Disabled (0UL) /*!< Disable */
#define PWM_INTEN_DMAEND0_Enabled (1UL) /*!< Enable */

/* Bit 10 : Enable or disable interrupt for DMAREADY[1] event */
#define PWM_INTEN_DMAREADY1_Pos (10UL) /*!< Position of DMAREADY1 field. */
#define PWM_INTEN_DMAREADY1_Msk (0x1UL << PWM_INTEN_DMAREADY1_Pos) /*!< Bit mask of DMAREADY1 field. */
#define PWM_INTEN_DMAREADY1_Disabled (0UL) /*!< Disable */
#define PWM_INTEN_DMAREADY1_Enabled (1UL) /*!< Enable */

/* Bit 9 : Enable or disable interrupt for DMAREADY[0] event */
#define PWM_INTEN_DMAREADY0_Pos (9UL) /*!< Position of DMAREADY0 field. */
#define PWM_INTEN_DMAREADY0_Msk (0x1UL << PWM_INTEN_DMAREADY0_Pos) /*!< Bit mask of DMAREADY0 field. */
#define PWM_INTEN_DMAREADY0_Disabled (0UL) /*!< Disable */
#define PWM_INTEN_DMAREADY0_Enabled (1UL) /*!< Enable */

/* Bit 8 : Enable or disable interrupt for RAMUNDERFLOW event */
#define PWM_INTEN_RAMUNDERFLOW_Pos (8UL) /*!< Position of RAMUNDERFLOW field. */
#define PWM_INTEN_RAMUNDERFLOW_Msk (0x1UL << PWM_INTEN_RAMUNDERFLOW_Pos) /*!< Bit mask of RAMUNDERFLOW field. */
#define PWM_INTEN_RAMUNDERFLOW_Disabled (0UL) /*!< Disable */
#define PWM_INTEN_RAMUNDERFLOW_Enabled (1UL) /*!< Enable */

/* Bit 7 : Enable or disable interrupt for LOOPSDONE event */
#define PWM_INTEN_LOOPSDONE_Pos (7UL) /*!< Position of LOOPSDONE field. */
#define PWM_INTEN_LOOPSDONE_Msk (0x1UL << PWM_INTEN_LOOPSDONE_Pos) /*!< Bit mask of LOOPSDONE field. */
#define PWM_INTEN_LOOPSDONE_Disabled (0UL) /*!< Disable */
#define PWM_INTEN_LOOPSDONE_Enabled (1UL) /*!< Enable */

/* Bit 6 : Enable or disable interrupt for PWMPERIODEND event */
#define PWM_INTEN_PWMPERIODEND_Pos (6UL) /*!< Position of PWMPERIODEND field. */
#define PWM_INTEN_PWMPERIODEND_Msk (0x1UL << PWM_INTEN_PWMPERIODEND_Pos) /*!< Bit mask of PWMPERIODEND field. */
#define PWM_INTEN_PWMPERIODEND_Disabled (0UL) /*!< Disable */
#define PWM_INTEN_PWMPERIODEND_Enabled (1UL) /*!< Enable */

/* Bit 5 : Enable or disable interrupt for SEQEND[1] event */
#define PWM_INTEN_SEQEND1_Pos (5UL) /*!< Position of SEQEND1 field. */
#define PWM_INTEN_SEQEND1_Msk (0x1UL << PWM_INTEN_SEQEND1_Pos) /*!< Bit mask of SEQEND1 field. */
#define PWM_INTEN_SEQEND1_Disabled (0UL) /*!< Disable */
#define PWM_INTEN_SEQEND1_Enabled (1UL) /*!< Enable */

/* Bit 4 : Enable or disable interrupt for SEQEND[0] event */
#define PWM_INTEN_SEQEND0_Pos (4UL) /*!< Position of SEQEND0 field. */
#define PWM_INTEN_SEQEND0_Msk (0x1UL << PWM_INTEN_SEQEND0_Pos) /*!< Bit mask of SEQEND0 field. */
#define PWM_INTEN_SEQEND0_Disabled (0UL) /*!< Disable */
#define PWM_INTEN_SEQEND0_Enabled (1UL) /*!< Enable */

/* Bit 3 : Enable or disable interrupt for SEQSTARTED[1] event */
#define PWM_INTEN_SEQSTARTED1_Pos (3UL) /*!< Position of SEQSTARTED1 field. */
#define PWM_INTEN_SEQSTARTED1_Msk (0x1UL << PWM_INTEN_SEQSTARTED1_Pos) /*!< Bit mask of SEQSTARTED1 field. */
#define PWM_INTEN_SEQSTARTED1_Disabled (0UL) /*!< Disable */
#define PWM_INTEN_SEQSTARTED1_Enabled (1UL) /*!< Enable */

/* Bit 2 : Enable or disable interrupt for SEQSTARTED[0] event */
#define PWM_INTEN_SEQSTARTED0_Pos (2UL) /*!< Position of SEQSTARTED0 field. */
#define PWM_INTEN_SEQSTARTED0_Msk (0x1UL << PWM_INTEN_SEQSTARTED0_Pos) /*!< Bit mask of SEQSTARTED0 field. */
#define PWM_INTEN_SEQSTARTED0_Disabled (0UL) /*!< Disable */
#define PWM_INTEN_SEQSTARTED0_Enabled (1UL) /*!< Enable */

/* Bit 1 : Enable or disable interrupt for STOPPED event */
#define PWM_INTEN_STOPPED_Pos (1UL) /*!< Position of STOPPED field. */
#define PWM_INTEN_STOPPED_Msk (0x1UL << PWM_INTEN_STOPPED_Pos) /*!< Bit mask of STOPPED field. */
#define PWM_INTEN_STOPPED_Disabled (0UL) /*!< Disable */
#define PWM_INTEN_STOPPED_Enabled (1UL) /*!< Enable */

/* Bit 0 : Enable or disable interrupt for STARTED event */
#define PWM_INTEN_STARTED_Pos (0UL) /*!< Position of STARTED field. */
#define PWM_INTEN_STARTED_Msk (0x1UL << PWM_INTEN_STARTED_Pos) /*!< Bit mask of STARTED field. */
#define PWM_INTEN_STARTED_Disabled (0UL) /*!< Disable */
#define PWM_INTEN_STARTED_Enabled (1UL) /*!< Enable */

/* Register: PWM_INTENSET */
/* Description: Enable interrupt */

/* Bit 12 : Write '1' to enable interrupt for DMAEND[1] event */
#define PWM_INTENSET_DMAEND1_Pos (12UL) /*!< Position of DMAEND1 field. */
#define PWM_INTENSET_DMAEND1_Msk (0x1UL << PWM_INTENSET_DMAEND1_Pos) /*!< Bit mask of DMAEND1 field. */
#define PWM_INTENSET_DMAEND1_Disabled (0UL) /*!< Read: Disabled */
#define PWM_INTENSET_DMAEND1_Enabled (1UL) /*!< Read: Enabled */
#define PWM_INTENSET_DMAEND1_Set (1UL) /*!< Enable */

/* Bit 11 : Write '1' to enable interrupt for DMAEND[0] event */
#define PWM_INTENSET_DMAEND0_Pos (11UL) /*!< Position of DMAEND0 field. */
#define PWM_INTENSET_DMAEND0_Msk (0x1UL << PWM_INTENSET_DMAEND0_Pos) /*!< Bit mask of DMAEND0 field. */
#define PWM_INTENSET_DMAEND0_Disabled (0UL) /*!< Read: Disabled */
#define PWM_INTENSET_DMAEND0_Enabled (1UL) /*!< Read: Enabled */
#define PWM_INTENSET_DMAEND0_Set (1UL) /*!< Enable */

/* Bit 10 : Write '1' to enable interrupt for DMAREADY[1] event */
#define PWM_INTENSET_DMAREADY1_Pos (10UL) /*!< Position of DMAREADY1 field. */
#define PWM_INTENSET_DMAREADY1_Msk (0x1UL << PWM_INTENSET_DMAREADY1_Pos) /*!< Bit mask of DMAREADY1 field. */
#define PWM_INTENSET_DMAREADY1_Disabled (0UL) /*!< Read: Disabled */
#define PWM_INTENSET_DMAREADY1_Enabled (1UL) /*!< Read: Enabled */
#define PWM_INTENSET_DMAREADY1_Set (1UL) /*!< Enable */

/* Bit 9 : Write '1' to enable interrupt for DMAREADY[0] event */
#define PWM_INTENSET_DMAREADY0_Pos (9UL) /*!< Position of DMAREADY0 field. */
#define PWM_INTENSET_DMAREADY0_Msk (0x1UL << PWM_INTENSET_DMAREADY0_Pos) /*!< Bit mask of DMAREADY0 field. */
#define PWM_INTENSET_DMAREADY0_Disabled (0UL) /*!< Read: Disabled */
#define PWM_INTENSET_DMAREADY0_Enabled (1UL) /*!< Read: Enabled */
#define PWM_INTENSET_DMAREADY0_Set (1UL) /*!< Enable */

/* Bit 8 : Write '1' to enable interrupt for RAMUNDERFLOW event */
#define PWM_INTENSET_RAMUNDERFLOW_Pos (8UL) /*!< Position of RAMUNDERFLOW field. */
#define PWM_INTENSET_RAMUNDERFLOW_Msk (0x1UL << PWM_INTENSET_RAMUNDERFLOW_Pos) /*!< Bit mask of RAMUNDERFLOW field. */
#define PWM_INTENSET_RAMUNDERFLOW_Disabled (0UL) /*!< Read: Disabled */
#define PWM_INTENSET_RAMUNDERFLOW_Enabled (1UL) /*!< Read: Enabled */
#define PWM_INTENSET_RAMUNDERFLOW_Set (1UL) /*!< Enable */

/* Bit 7 : Write '1' to enable interrupt for LOOPSDONE event */
#define PWM_INTENSET_LOOPSDONE_Pos (7UL) /*!< Position of LOOPSDONE field. */
#define PWM_INTENSET_LOOPSDONE_Msk (0x1UL << PWM_INTENSET_LOOPSDONE_Pos) /*!< Bit mask of LOOPSDONE field. */
#define PWM_INTENSET_LOOPSDONE_Disabled (0UL) /*!< Read: Disabled */
#define PWM_INTENSET_LOOPSDONE_Enabled (1UL) /*!< Read: Enabled */
#define PWM_INTENSET_LOOPSDONE_Set (1UL) /*!< Enable */

/* Bit 6 : Write '1' to enable interrupt for PWMPERIODEND event */
#define PWM_INTENSET_PWMPERIODEND_Pos (6UL) /*!< Position of PWMPERIODEND field. */
#define PWM_INTENSET_PWMPERIODEND_Msk (0x1UL << PWM_INTENSET_PWMPERIODEND_Pos) /*!< Bit mask of PWMPERIODEND field. */
#define PWM_INTENSET_PWMPERIODEND_Disabled (0UL) /*!< Read: Disabled */
#define PWM_INTENSET_PWMPERIODEND_Enabled (1UL) /*!< Read: Enabled */
#define PWM_INTENSET_PWMPERIODEND_Set (1UL) /*!< Enable */

/* Bit 5 : Write '1' to enable interrupt for SEQEND[1] event */
#define PWM_INTENSET_SEQEND1_Pos (5UL) /*!< Position of SEQEND1 field. */
#define PWM_INTENSET_SEQEND1_Msk (0x1UL << PWM_INTENSET_SEQEND1_Pos) /*!< Bit mask of SEQEND1 field. */
#define PWM_INTENSET_SEQEND1_Disabled (0UL) /*!< Read: Disabled */
#define PWM_INTENSET_SEQEND1_Enabled (1UL) /*!< Read: Enabled */
#define PWM_INTENSET_SEQEND1_Set (1UL) /*!< Enable */

/* Bit 4 : Write '1' to enable interrupt for SEQEND[0] event */
#define PWM_INTENSET_SEQEND0_Pos (4UL) /*!< Position of SEQEND0 field. */
#define PWM_INTENSET_SEQEND0_Msk (0x1UL << PWM_INTENSET_SEQEND0_Pos) /*!< Bit mask of SEQEND0 field. */
#define PWM_INTENSET_SEQEND0_Disabled (0UL) /*!< Read: Disabled */
#define PWM_INTENSET_SEQEND0_Enabled (1UL) /*!< Read: Enabled */
#define PWM_INTENSET_SEQEND0_Set (1UL) /*!< Enable */

/* Bit 3 : Write '1' to enable interrupt for SEQSTARTED[1] event */
#define PWM_INTENSET_SEQSTARTED1_Pos (3UL) /*!< Position of SEQSTARTED1 field. */
#define PWM_INTENSET_SEQSTARTED1_Msk (0x1UL << PWM_INTENSET_SEQSTARTED1_Pos) /*!< Bit mask of SEQSTARTED1 field. */
#define PWM_INTENSET_SEQSTARTED1_Disabled (0UL) /*!< Read: Disabled */
#define PWM_INTENSET_SEQSTARTED1_Enabled (1UL) /*!< Read: Enabled */
#define PWM_INTENSET_SEQSTARTED1_Set (1UL) /*!< Enable */

/* Bit 2 : Write '1' to enable interrupt for SEQSTARTED[0] event */
#define PWM_INTENSET_SEQSTARTED0_Pos (2UL) /*!< Position of SEQSTARTED0 field. */
#define PWM_INTENSET_SEQSTARTED0_Msk (0x1UL << PWM_INTENSET_SEQSTARTED0_Pos) /*!< Bit mask of SEQSTARTED0 field. */
#define PWM_INTENSET_SEQSTARTED0_Disabled (0UL) /*!< Read: Disabled */
#define PWM_INTENSET_SEQSTARTED0_Enabled (1UL) /*!< Read: Enabled */
#define PWM_INTENSET_SEQSTARTED0_Set (1UL) /*!< Enable */

/* Bit 1 : Write '1' to enable interrupt for STOPPED event */
#define PWM_INTENSET_STOPPED_Pos (1UL) /*!< Position of STOPPED field. */
#define PWM_INTENSET_STOPPED_Msk (0x1UL << PWM_INTENSET_STOPPED_Pos) /*!< Bit mask of STOPPED field. */
#define PWM_INTENSET_STOPPED_Disabled (0UL) /*!< Read: Disabled */
#define PWM_INTENSET_STOPPED_Enabled (1UL) /*!< Read: Enabled */
#define PWM_INTENSET_STOPPED_Set (1UL) /*!< Enable */

/* Bit 0 : Write '1' to enable interrupt for STARTED event */
#define PWM_INTENSET_STARTED_Pos (0UL) /*!< Position of STARTED field. */
#define PWM_INTENSET_STARTED_Msk (0x1UL << PWM_INTENSET_STARTED_Pos) /*!< Bit mask of STARTED field. */
#define PWM_INTENSET_STARTED_Disabled (0UL) /*!< Read: Disabled */
#define PWM_INTENSET_STARTED_Enabled (1UL) /*!< Read: Enabled */
#define PWM_INTENSET_STARTED_Set (1UL) /*!< Enable */

/* Register: PWM_INTENCLR */
/* Description: Disable interrupt */

/* Bit 12 : Write '1' to disable interrupt for DMAEND[1] event */
#define PWM_INTENCLR_DMAEND1_Pos (12UL) /*!< Position of DMAEND1 field. */
#define PWM_INTENCLR_DMAEND1_Msk (0x1UL << PWM_INTENCLR_DMAEND1_Pos) /*!< Bit mask of DMAEND1 field. */
#define PWM_INTENCLR_DMAEND1_Disabled (0UL) /*!< Read: Disabled */
#define PWM_INTENCLR_DMAEND1_Enabled (1UL) /*!< Read: Enabled */
#define PWM_INTENCLR_DMAEND1_Clear (1UL) /*!< Disable */

/* Bit 11 : Write '1' to disable interrupt for DMAEND[0] event */
#define PWM_INTENCLR_DMAEND0_Pos (11UL) /*!< Position of DMAEND0 field. */
#define PWM_INTENCLR_DMAEND0_Msk (0x1UL << PWM_INTENCLR_DMAEND0_Pos) /*!< Bit mask of DMAEND0 field. */
#define PWM_INTENCLR_DMAEND0_Disabled (0UL) /*!< Read: Disabled */
#define PWM_INTENCLR_DMAEND0_Enabled (1UL) /*!< Read: Enabled */
#define PWM_INTENCLR_DMAEND0_Clear (1UL) /*!< Disable */

/* Bit 10 : Write '1' to disable interrupt for DMAREADY[1] event */
#define PWM_INTENCLR_DMAREADY1_Pos (10UL) /*!< Position of DMAREADY1 field. */
#define PWM_INTENCLR_DMAREADY1_Msk (0x1UL << PWM_INTENCLR_DMAREADY1_Pos) /*!< Bit mask of DMAREADY1 field. */
#define PWM_INTENCLR_DMAREADY1_Disabled (0UL) /*!< Read: Disabled */
#define PWM_INTENCLR_DMAREADY1_Enabled (1UL) /*!< Read: Enabled */
#define PWM_INTENCLR_DMAREADY1_Clear (1UL) /*!< Disable */

/* Bit 9 : Write '1' to disable interrupt for DMAREADY[0] event */
#define PWM_INTENCLR_DMAREADY0_Pos (9UL) /*!< Position of DMAREADY0 field. */
#define PWM_INTENCLR_DMAREADY0_Msk (0x1UL << PWM_INTENCLR_DMAREADY0_Pos) /*!< Bit mask of DMAREADY0 field. */
#define PWM_INTENCLR_DMAREADY0_Disabled (0UL) /*!< Read: Disabled */
#define PWM_INTENCLR_DMAREADY0_Enabled (1UL) /*!< Read: Enabled */
#define PWM_INTENCLR_DMAREADY0_Clear (1UL) /*!< Disable */

/* Bit 8 : Write '1' to disable interrupt for RAMUNDERFLOW event */
#define PWM_INTENCLR_RAMUNDERFLOW_Pos (8UL) /*!< Position of RAMUNDERFLOW field. */
#define PWM_INTENCLR_RAMUNDERFLOW_Msk (0x1UL << PWM_INTENCLR_RAMUNDERFLOW_Pos) /*!< Bit mask of RAMUNDERFLOW field. */
#define PWM_INTENCLR_RAMUNDERFLOW_Disabled (0UL) /*!< Read: Disabled */
#define PWM_INTENCLR_RAMUNDERFLOW_Enabled (1UL) /*!< Read: Enabled */
#define PWM_INTENCLR_RAMUNDERFLOW_Clear (1UL) /*!< Disable */

/* Bit 7 : Write '1' to disable interrupt for LOOPSDONE event */
#define PWM_INTENCLR_LOOPSDONE_Pos (7UL) /*!< Position of LOOPSDONE field. */
#define PWM_INTENCLR_LOOPSDONE_Msk (0x1UL << PWM_INTENCLR_LOOPSDONE_Pos) /*!< Bit mask of LOOPSDONE field. */
#define PWM_INTENCLR_LOOPSDONE_Disabled (0UL) /*!< Read: Disabled */
#define PWM_INTENCLR_LOOPSDONE_Enabled (1UL) /*!< Read: Enabled */
#define PWM_INTENCLR_LOOPSDONE_Clear (1UL) /*!< Disable */

/* Bit 6 : Write '1' to disable interrupt for PWMPERIODEND event */
#define PWM_INTENCLR_PWMPERIODEND_Pos (6UL) /*!< Position of PWMPERIODEND field. */
#define PWM_INTENCLR_PWMPERIODEND_Msk (0x1UL << PWM_INTENCLR_PWMPERIODEND_Pos) /*!< Bit mask of PWMPERIODEND field. */
#define PWM_INTENCLR_PWMPERIODEND_Disabled (0UL) /*!< Read: Disabled */
#define PWM_INTENCLR_PWMPERIODEND_Enabled (1UL) /*!< Read: Enabled */
#define PWM_INTENCLR_PWMPERIODEND_Clear (1UL) /*!< Disable */

/* Bit 5 : Write '1' to disable interrupt for SEQEND[1] event */
#define PWM_INTENCLR_SEQEND1_Pos (5UL) /*!< Position of SEQEND1 field. */
#define PWM_INTENCLR_SEQEND1_Msk (0x1UL << PWM_INTENCLR_SEQEND1_Pos) /*!< Bit mask of SEQEND1 field. */
#define PWM_INTENCLR_SEQEND1_Disabled (0UL) /*!< Read: Disabled */
#define PWM_INTENCLR_SEQEND1_Enabled (1UL) /*!< Read: Enabled */
#define PWM_INTENCLR_SEQEND1_Clear (1UL) /*!< Disable */

/* Bit 4 : Write '1' to disable interrupt for SEQEND[0] event */
#define PWM_INTENCLR_SEQEND0_Pos (4UL) /*!< Position of SEQEND0 field. */
#define PWM_INTENCLR_SEQEND0_Msk (0x1UL << PWM_INTENCLR_SEQEND0_Pos) /*!< Bit mask of SEQEND0 field. */
#define PWM_INTENCLR_SEQEND0_Disabled (0UL) /*!< Read: Disabled */
#define PWM_INTENCLR_SEQEND0_Enabled (1UL) /*!< Read: Enabled */
#define PWM_INTENCLR_SEQEND0_Clear (1UL) /*!< Disable */

/* Bit 3 : Write '1' to disable interrupt for SEQSTARTED[1] event */
#define PWM_INTENCLR_SEQSTARTED1_Pos (3UL) /*!< Position of SEQSTARTED1 field. */
#define PWM_INTENCLR_SEQSTARTED1_Msk (0x1UL << PWM_INTENCLR_SEQSTARTED1_Pos) /*!< Bit mask of SEQSTARTED1 field. */
#define PWM_INTENCLR_SEQSTARTED1_Disabled (0UL) /*!< Read: Disabled */
#define PWM_INTENCLR_SEQSTARTED1_Enabled (1UL) /*!< Read: Enabled */
#define PWM_INTENCLR_SEQSTARTED1_Clear (1UL) /*!< Disable */

/* Bit 2 : Write '1' to disable interrupt for SEQSTARTED[0] event */
#define PWM_INTENCLR_SEQSTARTED0_Pos (2UL) /*!< Position of SEQSTARTED0 field. */
#define PWM_INTENCLR_SEQSTARTED0_Msk (0x1UL << PWM_INTENCLR_SEQSTARTED0_Pos) /*!< Bit mask of SEQSTARTED0 field. */
#define PWM_INTENCLR_SEQSTARTED0_Disabled (0UL) /*!< Read: Disabled */
#define PWM_INTENCLR_SEQSTARTED0_Enabled (1UL) /*!< Read: Enabled */
#define PWM_INTENCLR_SEQSTARTED0_Clear (1UL) /*!< Disable */

/* Bit 1 : Write '1' to disable interrupt for STOPPED event */
#define PWM_INTENCLR_STOPPED_Pos (1UL) /*!< Position of STOPPED field. */
#define PWM_INTENCLR_STOPPED_Msk (0x1UL << PWM_INTENCLR_STOPPED_Pos) /*!< Bit mask of STOPPED field. */
#define PWM_INTENCLR_STOPPED_Disabled (0UL) /*!< Read: Disabled */
#define PWM_INTENCLR_STOPPED_Enabled (1UL) /*!< Read: Enabled */
#define PWM_INTENCLR_STOPPED_Clear (1UL) /*!< Disable */

/* Bit 0 : Write '1' to disable interrupt for STARTED event */
#define PWM_INTENCLR_STARTED_Pos (0UL) /*!< Position of STARTED field. */
#define PWM_INTENCLR_STARTED_Msk (0x1UL << PWM_INTENCLR_STARTED_Pos) /*!< Bit mask of STARTED field. */
#define PWM_INTENCLR_STARTED_Disabled (0UL) /*!< Read: Disabled */
#define PWM_INTENCLR_STARTED_Enabled (1UL) /*!< Read: Enabled */
#define PWM_INTENCLR_STARTED_Clear (1UL) /*!< Disable */

/* Register: PWM_ENABLE */
/* Description: PWM module enable register */

/* Bit 0 : Enable or disable PWM module */
#define PWM_ENABLE_ENABLE_Pos (0UL) /*!< Position of ENABLE field. */
#define PWM_ENABLE_ENABLE_Msk (0x1UL << PWM_ENABLE_ENABLE_Pos) /*!< Bit mask of ENABLE field. */
#define PWM_ENABLE_ENABLE_Disabled (0UL) /*!< Disabled */
#define PWM_ENABLE_ENABLE_Enabled (1UL) /*!< Enable */

/* Register: PWM_MODE */
/* Description: Selects operating mode of the wave counter */

/* Bit 0 : Selects up mode or up-and-down mode for the counter */
#define PWM_MODE_UPDOWN_Pos (0UL) /*!< Position of UPDOWN field. */
#define PWM_MODE_UPDOWN_Msk (0x1UL << PWM_MODE_UPDOWN_Pos) /*!< Bit mask of UPDOWN field. */
#define PWM_MODE_UPDOWN_Up (0UL) /*!< Up counter, edge-aligned PWM duty cycle */
#define PWM_MODE_UPDOWN_UpAndDown (1UL) /*!< Up and down counter, center-aligned PWM duty cycle */

/* Register: PWM_COUNTERTOP */
/* Description: Value up to which the pulse generator counter counts */

/* Bits 14..0 : Value up to which the pulse generator counter counts. This register is ignored when DECODER.MODE=WaveForm and only values from RAM are used. */
#define PWM_COUNTERTOP_COUNTERTOP_Pos (0UL) /*!< Position of COUNTERTOP field. */
#define PWM_COUNTERTOP_COUNTERTOP_Msk (0x7FFFUL << PWM_COUNTERTOP_COUNTERTOP_Pos) /*!< Bit mask of COUNTERTOP field. */

/* Register: PWM_PRESCALER */
/* Description: Configuration for PWM_CLK */

/* Bits 2..0 : Prescaler of PWM_CLK */
#define PWM_PRESCALER_PRESCALER_Pos (0UL) /*!< Position of PRESCALER field. */
#define PWM_PRESCALER_PRESCALER_Msk (0x7UL << PWM_PRESCALER_PRESCALER_Pos) /*!< Bit mask of PRESCALER field. */
#define PWM_PRESCALER_PRESCALER_DIV_1 (0UL) /*!< Divide by 1 (16 MHz) */
#define PWM_PRESCALER_PRESCALER_DIV_2 (1UL) /*!< Divide by 2 (8 MHz) */
#define PWM_PRESCALER_PRESCALER_DIV_4 (2UL) /*!< Divide by 4 (4 MHz) */
#define PWM_PRESCALER_PRESCALER_DIV_8 (3UL) /*!< Divide by 8 (2 MHz) */
#define PWM_PRESCALER_PRESCALER_DIV_16 (4UL) /*!< Divide by 16 (1 MHz) */
#define PWM_PRESCALER_PRESCALER_DIV_32 (5UL) /*!< Divide by 32 (500 kHz) */
#define PWM_PRESCALER_PRESCALER_DIV_64 (6UL) /*!< Divide by 64 (250 kHz) */
#define PWM_PRESCALER_PRESCALER_DIV_128 (7UL) /*!< Divide by 128 (125 kHz) */

/* Register: PWM_DECODER */
/* Description: Configuration of the decoder */

/* Bit 8 : Selects source for advancing the active sequence */
#define PWM_DECODER_MODE_Pos (8UL) /*!< Position of MODE field. */
#define PWM_DECODER_MODE_Msk (0x1UL << PWM_DECODER_MODE_Pos) /*!< Bit mask of MODE field. */
#define PWM_DECODER_MODE_RefreshCount (0UL) /*!< SEQ[n].REFRESH is used to determine loading internal compare registers */
#define PWM_DECODER_MODE_NextStep (1UL) /*!< NEXTSTEP task causes a new value to be loaded to internal compare registers */

/* Bits 1..0 : How a sequence is read from RAM and spread to the compare register */
#define PWM_DECODER_LOAD_Pos (0UL) /*!< Position of LOAD field. */
#define PWM_DECODER_LOAD_Msk (0x3UL << PWM_DECODER_LOAD_Pos) /*!< Bit mask of LOAD field. */
#define PWM_DECODER_LOAD_Common (0UL) /*!< 1st half word (16-bit) used in all PWM channels 0..3 */
#define PWM_DECODER_LOAD_Grouped (1UL) /*!< 1st half word (16-bit) used in channel 0..1; 2nd word in channel 2..3 */
#define PWM_DECODER_LOAD_Individual (2UL) /*!< 1st half word (16-bit) in ch.0; 2nd in ch.1; ...; 4th in ch.3 */
#define PWM_DECODER_LOAD_WaveForm (3UL) /*!< 1st half word (16-bit) in ch.0; 2nd in ch.1; ...; 4th in COUNTERTOP */

/* Register: PWM_LOOP */
/* Description: Number of playbacks of a loop */

/* Bits 15..0 : Number of playbacks of pattern cycles */
#define PWM_LOOP_CNT_Pos (0UL) /*!< Position of CNT field. */
#define PWM_LOOP_CNT_Msk (0xFFFFUL << PWM_LOOP_CNT_Pos) /*!< Bit mask of CNT field. */
#define PWM_LOOP_CNT_Disabled (0UL) /*!< Looping disabled (stop at the end of the sequence) */

/* Register: PWM_SEQ_PTR */
/* Description: Description cluster[n]: Beginning address in RAM of this sequence */

/* Bits 31..0 : Beginning address in RAM of this sequence */
#define PWM_SEQ_PTR_PTR_Pos (0UL) /*!< Position of PTR field. */
#define PWM_SEQ_PTR_PTR_Msk (0xFFFFFFFFUL << PWM_SEQ_PTR_PTR_Pos) /*!< Bit mask of PTR field. */

/* Register: PWM_SEQ_CNT */
/* Description: Description cluster[n]: Number of values (duty cycles) in this sequence */

/* Bits 14..0 : Number of values (duty cycles) in this sequence */
#define PWM_SEQ_CNT_CNT_Pos (0UL) /*!< Position of CNT field. */
#define PWM_SEQ_CNT_CNT_Msk (0x7FFFUL << PWM_SEQ_CNT_CNT_Pos) /*!< Bit mask of CNT field. */
#define PWM_SEQ_CNT_CNT_Disabled (0UL) /*!< Sequence is disabled, and shall not be started as it is empty */

/* Register: PWM_SEQ_REFRESH */
/* Description: Description cluster[n]: Number of additional PWM periods between samples loaded into compare register */

/* Bits 23..0 : Number of additional PWM periods between samples loaded into compare register (load every REFRESH.CNT+1 PWM periods) */
#define PWM_SEQ_REFRESH_CNT_Pos (0UL) /*!< Position of CNT field. */
#define PWM_SEQ_REFRESH_CNT_Msk (0xFFFFFFUL << PWM_SEQ_REFRESH_CNT_Pos) /*!< Bit mask of CNT field. */
#define PWM_SEQ_REFRESH_CNT_Continuous (0UL) /*!< Update every PWM period */

/* Register: PWM_SEQ_ENDDELAY */
/* Description: Description cluster[n]: Time added after the sequence */

/* Bits 23..0 : Time added after the sequence in PWM periods */
#define PWM_SEQ_ENDDELAY_CNT_Pos (0UL) /*!< Position of CNT field. */
#define PWM_SEQ_ENDDELAY_CNT_Msk (0xFFFFFFUL << PWM_SEQ_ENDDELAY_CNT_Pos) /*!< Bit mask of CNT field. */

/* Register: PWM_PSEL_OUT */
/* Description: Description collection[n]: Output pin select for PWM channel n */

/* Bit 31 : Connection */
#define PWM_PSEL_OUT_CONNECT_Pos (31UL) /*!< Position of CONNECT field. */
#define PWM_PSEL_OUT_CONNECT_Msk (0x1UL << PWM_PSEL_OUT_CONNECT_Pos) /*!< Bit mask of CONNECT field. */
#define PWM_PSEL_OUT_CONNECT_Connected (0UL) /*!< Connect */
#define PWM_PSEL_OUT_CONNECT_Disconnected (1UL) /*!< Disconnect */

/* Bits 4..0 : Pin number */
#define PWM_PSEL_OUT_PIN_Pos (0UL) /*!< Position of PIN field. */
#define PWM_PSEL_OUT_PIN_Msk (0x1FUL << PWM_PSEL_OUT_PIN_Pos) /*!< Bit mask of PIN field. */


/* Peripheral: QDEC */
/* Description: Quadrature Decoder */

/* Register: QDEC_TASKS_START */
/* Description: Task starting the quadrature decoder */

/* Bit 0 :   */
#define QDEC_TASKS_START_TASKS_START_Pos (0UL) /*!< Position of TASKS_START field. */
#define QDEC_TASKS_START_TASKS_START_Msk (0x1UL << QDEC_TASKS_START_TASKS_START_Pos) /*!< Bit mask of TASKS_START field. */

/* Register: QDEC_TASKS_STOP */
/* Description: Task stopping the quadrature decoder */

/* Bit 0 :   */
#define QDEC_TASKS_STOP_TASKS_STOP_Pos (0UL) /*!< Position of TASKS_STOP field. */
#define QDEC_TASKS_STOP_TASKS_STOP_Msk (0x1UL << QDEC_TASKS_STOP_TASKS_STOP_Pos) /*!< Bit mask of TASKS_STOP field. */

/* Register: QDEC_TASKS_READCLRACC */
/* Description: Read and clear ACC and ACCDBL */

/* Bit 0 :   */
#define QDEC_TASKS_READCLRACC_TASKS_READCLRACC_Pos (0UL) /*!< Position of TASKS_READCLRACC field. */
#define QDEC_TASKS_READCLRACC_TASKS_READCLRACC_Msk (0x1UL << QDEC_TASKS_READCLRACC_TASKS_READCLRACC_Pos) /*!< Bit mask of TASKS_READCLRACC field. */

/* Register: QDEC_TASKS_RDCLRACC */
/* Description: Read and clear ACC */

/* Bit 0 :   */
#define QDEC_TASKS_RDCLRACC_TASKS_RDCLRACC_Pos (0UL) /*!< Position of TASKS_RDCLRACC field. */
#define QDEC_TASKS_RDCLRACC_TASKS_RDCLRACC_Msk (0x1UL << QDEC_TASKS_RDCLRACC_TASKS_RDCLRACC_Pos) /*!< Bit mask of TASKS_RDCLRACC field. */

/* Register: QDEC_TASKS_RDCLRDBL */
/* Description: Read and clear ACCDBL */

/* Bit 0 :   */
#define QDEC_TASKS_RDCLRDBL_TASKS_RDCLRDBL_Pos (0UL) /*!< Position of TASKS_RDCLRDBL field. */
#define QDEC_TASKS_RDCLRDBL_TASKS_RDCLRDBL_Msk (0x1UL << QDEC_TASKS_RDCLRDBL_TASKS_RDCLRDBL_Pos) /*!< Bit mask of TASKS_RDCLRDBL field. */

/* Register: QDEC_EVENTS_SAMPLERDY */
/* Description: Event being generated for every new sample value written to the SAMPLE register */

/* Bit 0 :   */
#define QDEC_EVENTS_SAMPLERDY_EVENTS_SAMPLERDY_Pos (0UL) /*!< Position of EVENTS_SAMPLERDY field. */
#define QDEC_EVENTS_SAMPLERDY_EVENTS_SAMPLERDY_Msk (0x1UL << QDEC_EVENTS_SAMPLERDY_EVENTS_SAMPLERDY_Pos) /*!< Bit mask of EVENTS_SAMPLERDY field. */

/* Register: QDEC_EVENTS_REPORTRDY */
/* Description: Non-null report ready */

/* Bit 0 :   */
#define QDEC_EVENTS_REPORTRDY_EVENTS_REPORTRDY_Pos (0UL) /*!< Position of EVENTS_REPORTRDY field. */
#define QDEC_EVENTS_REPORTRDY_EVENTS_REPORTRDY_Msk (0x1UL << QDEC_EVENTS_REPORTRDY_EVENTS_REPORTRDY_Pos) /*!< Bit mask of EVENTS_REPORTRDY field. */

/* Register: QDEC_EVENTS_ACCOF */
/* Description: ACC or ACCDBL register overflow */

/* Bit 0 :   */
#define QDEC_EVENTS_ACCOF_EVENTS_ACCOF_Pos (0UL) /*!< Position of EVENTS_ACCOF field. */
#define QDEC_EVENTS_ACCOF_EVENTS_ACCOF_Msk (0x1UL << QDEC_EVENTS_ACCOF_EVENTS_ACCOF_Pos) /*!< Bit mask of EVENTS_ACCOF field. */

/* Register: QDEC_EVENTS_DBLRDY */
/* Description: Double displacement(s) detected */

/* Bit 0 :   */
#define QDEC_EVENTS_DBLRDY_EVENTS_DBLRDY_Pos (0UL) /*!< Position of EVENTS_DBLRDY field. */
#define QDEC_EVENTS_DBLRDY_EVENTS_DBLRDY_Msk (0x1UL << QDEC_EVENTS_DBLRDY_EVENTS_DBLRDY_Pos) /*!< Bit mask of EVENTS_DBLRDY field. */

/* Register: QDEC_EVENTS_STOPPED */
/* Description: QDEC has been stopped */

/* Bit 0 :   */
#define QDEC_EVENTS_STOPPED_EVENTS_STOPPED_Pos (0UL) /*!< Position of EVENTS_STOPPED field. */
#define QDEC_EVENTS_STOPPED_EVENTS_STOPPED_Msk (0x1UL << QDEC_EVENTS_STOPPED_EVENTS_STOPPED_Pos) /*!< Bit mask of EVENTS_STOPPED field. */

/* Register: QDEC_SHORTS */
/* Description: Shortcut register */

/* Bit 6 : Shortcut between SAMPLERDY event and READCLRACC task */
#define QDEC_SHORTS_SAMPLERDY_READCLRACC_Pos (6UL) /*!< Position of SAMPLERDY_READCLRACC field. */
#define QDEC_SHORTS_SAMPLERDY_READCLRACC_Msk (0x1UL << QDEC_SHORTS_SAMPLERDY_READCLRACC_Pos) /*!< Bit mask of SAMPLERDY_READCLRACC field. */
#define QDEC_SHORTS_SAMPLERDY_READCLRACC_Disabled (0UL) /*!< Disable shortcut */
#define QDEC_SHORTS_SAMPLERDY_READCLRACC_Enabled (1UL) /*!< Enable shortcut */

/* Bit 5 : Shortcut between DBLRDY event and STOP task */
#define QDEC_SHORTS_DBLRDY_STOP_Pos (5UL) /*!< Position of DBLRDY_STOP field. */
#define QDEC_SHORTS_DBLRDY_STOP_Msk (0x1UL << QDEC_SHORTS_DBLRDY_STOP_Pos) /*!< Bit mask of DBLRDY_STOP field. */
#define QDEC_SHORTS_DBLRDY_STOP_Disabled (0UL) /*!< Disable shortcut */
#define QDEC_SHORTS_DBLRDY_STOP_Enabled (1UL) /*!< Enable shortcut */

/* Bit 4 : Shortcut between DBLRDY event and RDCLRDBL task */
#define QDEC_SHORTS_DBLRDY_RDCLRDBL_Pos (4UL) /*!< Position of DBLRDY_RDCLRDBL field. */
#define QDEC_SHORTS_DBLRDY_RDCLRDBL_Msk (0x1UL << QDEC_SHORTS_DBLRDY_RDCLRDBL_Pos) /*!< Bit mask of DBLRDY_RDCLRDBL field. */
#define QDEC_SHORTS_DBLRDY_RDCLRDBL_Disabled (0UL) /*!< Disable shortcut */
#define QDEC_SHORTS_DBLRDY_RDCLRDBL_Enabled (1UL) /*!< Enable shortcut */

/* Bit 3 : Shortcut between REPORTRDY event and STOP task */
#define QDEC_SHORTS_REPORTRDY_STOP_Pos (3UL) /*!< Position of REPORTRDY_STOP field. */
#define QDEC_SHORTS_REPORTRDY_STOP_Msk (0x1UL << QDEC_SHORTS_REPORTRDY_STOP_Pos) /*!< Bit mask of REPORTRDY_STOP field. */
#define QDEC_SHORTS_REPORTRDY_STOP_Disabled (0UL) /*!< Disable shortcut */
#define QDEC_SHORTS_REPORTRDY_STOP_Enabled (1UL) /*!< Enable shortcut */

/* Bit 2 : Shortcut between REPORTRDY event and RDCLRACC task */
#define QDEC_SHORTS_REPORTRDY_RDCLRACC_Pos (2UL) /*!< Position of REPORTRDY_RDCLRACC field. */
#define QDEC_SHORTS_REPORTRDY_RDCLRACC_Msk (0x1UL << QDEC_SHORTS_REPORTRDY_RDCLRACC_Pos) /*!< Bit mask of REPORTRDY_RDCLRACC field. */
#define QDEC_SHORTS_REPORTRDY_RDCLRACC_Disabled (0UL) /*!< Disable shortcut */
#define QDEC_SHORTS_REPORTRDY_RDCLRACC_Enabled (1UL) /*!< Enable shortcut */

/* Bit 1 : Shortcut between SAMPLERDY event and STOP task */
#define QDEC_SHORTS_SAMPLERDY_STOP_Pos (1UL) /*!< Position of SAMPLERDY_STOP field. */
#define QDEC_SHORTS_SAMPLERDY_STOP_Msk (0x1UL << QDEC_SHORTS_SAMPLERDY_STOP_Pos) /*!< Bit mask of SAMPLERDY_STOP field. */
#define QDEC_SHORTS_SAMPLERDY_STOP_Disabled (0UL) /*!< Disable shortcut */
#define QDEC_SHORTS_SAMPLERDY_STOP_Enabled (1UL) /*!< Enable shortcut */

/* Bit 0 : Shortcut between REPORTRDY event and READCLRACC task */
#define QDEC_SHORTS_REPORTRDY_READCLRACC_Pos (0UL) /*!< Position of REPORTRDY_READCLRACC field. */
#define QDEC_SHORTS_REPORTRDY_READCLRACC_Msk (0x1UL << QDEC_SHORTS_REPORTRDY_READCLRACC_Pos) /*!< Bit mask of REPORTRDY_READCLRACC field. */
#define QDEC_SHORTS_REPORTRDY_READCLRACC_Disabled (0UL) /*!< Disable shortcut */
#define QDEC_SHORTS_REPORTRDY_READCLRACC_Enabled (1UL) /*!< Enable shortcut */

/* Register: QDEC_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 4 : Enable or disable interrupt for STOPPED event */
#define QDEC_INTEN_STOPPED_Pos (4UL) /*!< Position of STOPPED field. */
#define QDEC_INTEN_STOPPED_Msk (0x1UL << QDEC_INTEN_STOPPED_Pos) /*!< Bit mask of STOPPED field. */
#define QDEC_INTEN_STOPPED_Disabled (0UL) /*!< Disable */
#define QDEC_INTEN_STOPPED_Enabled (1UL) /*!< Enable */

/* Bit 3 : Enable or disable interrupt for DBLRDY event */
#define QDEC_INTEN_DBLRDY_Pos (3UL) /*!< Position of DBLRDY field. */
#define QDEC_INTEN_DBLRDY_Msk (0x1UL << QDEC_INTEN_DBLRDY_Pos) /*!< Bit mask of DBLRDY field. */
#define QDEC_INTEN_DBLRDY_Disabled (0UL) /*!< Disable */
#define QDEC_INTEN_DBLRDY_Enabled (1UL) /*!< Enable */

/* Bit 2 : Enable or disable interrupt for ACCOF event */
#define QDEC_INTEN_ACCOF_Pos (2UL) /*!< Position of ACCOF field. */
#define QDEC_INTEN_ACCOF_Msk (0x1UL << QDEC_INTEN_ACCOF_Pos) /*!< Bit mask of ACCOF field. */
#define QDEC_INTEN_ACCOF_Disabled (0UL) /*!< Disable */
#define QDEC_INTEN_ACCOF_Enabled (1UL) /*!< Enable */

/* Bit 1 : Enable or disable interrupt for REPORTRDY event */
#define QDEC_INTEN_REPORTRDY_Pos (1UL) /*!< Position of REPORTRDY field. */
#define QDEC_INTEN_REPORTRDY_Msk (0x1UL << QDEC_INTEN_REPORTRDY_Pos) /*!< Bit mask of REPORTRDY field. */
#define QDEC_INTEN_REPORTRDY_Disabled (0UL) /*!< Disable */
#define QDEC_INTEN_REPORTRDY_Enabled (1UL) /*!< Enable */

/* Bit 0 : Enable or disable interrupt for SAMPLERDY event */
#define QDEC_INTEN_SAMPLERDY_Pos (0UL) /*!< Position of SAMPLERDY field. */
#define QDEC_INTEN_SAMPLERDY_Msk (0x1UL << QDEC_INTEN_SAMPLERDY_Pos) /*!< Bit mask of SAMPLERDY field. */
#define QDEC_INTEN_SAMPLERDY_Disabled (0UL) /*!< Disable */
#define QDEC_INTEN_SAMPLERDY_Enabled (1UL) /*!< Enable */

/* Register: QDEC_INTENSET */
/* Description: Enable interrupt */

/* Bit 4 : Write '1' to enable interrupt for STOPPED event */
#define QDEC_INTENSET_STOPPED_Pos (4UL) /*!< Position of STOPPED field. */
#define QDEC_INTENSET_STOPPED_Msk (0x1UL << QDEC_INTENSET_STOPPED_Pos) /*!< Bit mask of STOPPED field. */
#define QDEC_INTENSET_STOPPED_Disabled (0UL) /*!< Read: Disabled */
#define QDEC_INTENSET_STOPPED_Enabled (1UL) /*!< Read: Enabled */
#define QDEC_INTENSET_STOPPED_Set (1UL) /*!< Enable */

/* Bit 3 : Write '1' to enable interrupt for DBLRDY event */
#define QDEC_INTENSET_DBLRDY_Pos (3UL) /*!< Position of DBLRDY field. */
#define QDEC_INTENSET_DBLRDY_Msk (0x1UL << QDEC_INTENSET_DBLRDY_Pos) /*!< Bit mask of DBLRDY field. */
#define QDEC_INTENSET_DBLRDY_Disabled (0UL) /*!< Read: Disabled */
#define QDEC_INTENSET_DBLRDY_Enabled (1UL) /*!< Read: Enabled */
#define QDEC_INTENSET_DBLRDY_Set (1UL) /*!< Enable */

/* Bit 2 : Write '1' to enable interrupt for ACCOF event */
#define QDEC_INTENSET_ACCOF_Pos (2UL) /*!< Position of ACCOF field. */
#define QDEC_INTENSET_ACCOF_Msk (0x1UL << QDEC_INTENSET_ACCOF_Pos) /*!< Bit mask of ACCOF field. */
#define QDEC_INTENSET_ACCOF_Disabled (0UL) /*!< Read: Disabled */
#define QDEC_INTENSET_ACCOF_Enabled (1UL) /*!< Read: Enabled */
#define QDEC_INTENSET_ACCOF_Set (1UL) /*!< Enable */

/* Bit 1 : Write '1' to enable interrupt for REPORTRDY event */
#define QDEC_INTENSET_REPORTRDY_Pos (1UL) /*!< Position of REPORTRDY field. */
#define QDEC_INTENSET_REPORTRDY_Msk (0x1UL << QDEC_INTENSET_REPORTRDY_Pos) /*!< Bit mask of REPORTRDY field. */
#define QDEC_INTENSET_REPORTRDY_Disabled (0UL) /*!< Read: Disabled */
#define QDEC_INTENSET_REPORTRDY_Enabled (1UL) /*!< Read: Enabled */
#define QDEC_INTENSET_REPORTRDY_Set (1UL) /*!< Enable */

/* Bit 0 : Write '1' to enable interrupt for SAMPLERDY event */
#define QDEC_INTENSET_SAMPLERDY_Pos (0UL) /*!< Position of SAMPLERDY field. */
#define QDEC_INTENSET_SAMPLERDY_Msk (0x1UL << QDEC_INTENSET_SAMPLERDY_Pos) /*!< Bit mask of SAMPLERDY field. */
#define QDEC_INTENSET_SAMPLERDY_Disabled (0UL) /*!< Read: Disabled */
#define QDEC_INTENSET_SAMPLERDY_Enabled (1UL) /*!< Read: Enabled */
#define QDEC_INTENSET_SAMPLERDY_Set (1UL) /*!< Enable */

/* Register: QDEC_INTENCLR */
/* Description: Disable interrupt */

/* Bit 4 : Write '1' to disable interrupt for STOPPED event */
#define QDEC_INTENCLR_STOPPED_Pos (4UL) /*!< Position of STOPPED field. */
#define QDEC_INTENCLR_STOPPED_Msk (0x1UL << QDEC_INTENCLR_STOPPED_Pos) /*!< Bit mask of STOPPED field. */
#define QDEC_INTENCLR_STOPPED_Disabled (0UL) /*!< Read: Disabled */
#define QDEC_INTENCLR_STOPPED_Enabled (1UL) /*!< Read: Enabled */
#define QDEC_INTENCLR_STOPPED_Clear (1UL) /*!< Disable */

/* Bit 3 : Write '1' to disable interrupt for DBLRDY event */
#define QDEC_INTENCLR_DBLRDY_Pos (3UL) /*!< Position of DBLRDY field. */
#define QDEC_INTENCLR_DBLRDY_Msk (0x1UL << QDEC_INTENCLR_DBLRDY_Pos) /*!< Bit mask of DBLRDY field. */
#define QDEC_INTENCLR_DBLRDY_Disabled (0UL) /*!< Read: Disabled */
#define QDEC_INTENCLR_DBLRDY_Enabled (1UL) /*!< Read: Enabled */
#define QDEC_INTENCLR_DBLRDY_Clear (1UL) /*!< Disable */

/* Bit 2 : Write '1' to disable interrupt for ACCOF event */
#define QDEC_INTENCLR_ACCOF_Pos (2UL) /*!< Position of ACCOF field. */
#define QDEC_INTENCLR_ACCOF_Msk (0x1UL << QDEC_INTENCLR_ACCOF_Pos) /*!< Bit mask of ACCOF field. */
#define QDEC_INTENCLR_ACCOF_Disabled (0UL) /*!< Read: Disabled */
#define QDEC_INTENCLR_ACCOF_Enabled (1UL) /*!< Read: Enabled */
#define QDEC_INTENCLR_ACCOF_Clear (1UL) /*!< Disable */

/* Bit 1 : Write '1' to disable interrupt for REPORTRDY event */
#define QDEC_INTENCLR_REPORTRDY_Pos (1UL) /*!< Position of REPORTRDY field. */
#define QDEC_INTENCLR_REPORTRDY_Msk (0x1UL << QDEC_INTENCLR_REPORTRDY_Pos) /*!< Bit mask of REPORTRDY field. */
#define QDEC_INTENCLR_REPORTRDY_Disabled (0UL) /*!< Read: Disabled */
#define QDEC_INTENCLR_REPORTRDY_Enabled (1UL) /*!< Read: Enabled */
#define QDEC_INTENCLR_REPORTRDY_Clear (1UL) /*!< Disable */

/* Bit 0 : Write '1' to disable interrupt for SAMPLERDY event */
#define QDEC_INTENCLR_SAMPLERDY_Pos (0UL) /*!< Position of SAMPLERDY field. */
#define QDEC_INTENCLR_SAMPLERDY_Msk (0x1UL << QDEC_INTENCLR_SAMPLERDY_Pos) /*!< Bit mask of SAMPLERDY field. */
#define QDEC_INTENCLR_SAMPLERDY_Disabled (0UL) /*!< Read: Disabled */
#define QDEC_INTENCLR_SAMPLERDY_Enabled (1UL) /*!< Read: Enabled */
#define QDEC_INTENCLR_SAMPLERDY_Clear (1UL) /*!< Disable */

/* Register: QDEC_ENABLE */
/* Description: Enable the quadrature decoder */

/* Bits 1..0 : Enable or disable the quadrature decoder */
#define QDEC_ENABLE_ENABLE_Pos (0UL) /*!< Position of ENABLE field. */
#define QDEC_ENABLE_ENABLE_Msk (0x3UL << QDEC_ENABLE_ENABLE_Pos) /*!< Bit mask of ENABLE field. */
#define QDEC_ENABLE_ENABLE_Disabled (0UL) /*!< Disable */
#define QDEC_ENABLE_ENABLE_Enabled (1UL) /*!< Enable */
#define QDEC_ENABLE_ENABLE_Rambo5 (2UL) /*!< Enable with Rambo5 support */

/* Register: QDEC_LEDPOL */
/* Description: LED output pin polarity */

/* Bit 0 : LED output pin polarity */
#define QDEC_LEDPOL_LEDPOL_Pos (0UL) /*!< Position of LEDPOL field. */
#define QDEC_LEDPOL_LEDPOL_Msk (0x1UL << QDEC_LEDPOL_LEDPOL_Pos) /*!< Bit mask of LEDPOL field. */
#define QDEC_LEDPOL_LEDPOL_ActiveLow (0UL) /*!< Led active on output pin low */
#define QDEC_LEDPOL_LEDPOL_ActiveHigh (1UL) /*!< Led active on output pin high */

/* Register: QDEC_SAMPLEPER */
/* Description: Sample period */

/* Bits 3..0 : Sample period. The SAMPLE register will be updated for every new sample */
#define QDEC_SAMPLEPER_SAMPLEPER_Pos (0UL) /*!< Position of SAMPLEPER field. */
#define QDEC_SAMPLEPER_SAMPLEPER_Msk (0xFUL << QDEC_SAMPLEPER_SAMPLEPER_Pos) /*!< Bit mask of SAMPLEPER field. */
#define QDEC_SAMPLEPER_SAMPLEPER_128us (0UL) /*!< 128 us */
#define QDEC_SAMPLEPER_SAMPLEPER_256us (1UL) /*!< 256 us */
#define QDEC_SAMPLEPER_SAMPLEPER_512us (2UL) /*!< 512 us */
#define QDEC_SAMPLEPER_SAMPLEPER_1024us (3UL) /*!< 1024 us */
#define QDEC_SAMPLEPER_SAMPLEPER_2048us (4UL) /*!< 2048 us */
#define QDEC_SAMPLEPER_SAMPLEPER_4096us (5UL) /*!< 4096 us */
#define QDEC_SAMPLEPER_SAMPLEPER_8192us (6UL) /*!< 8192 us */
#define QDEC_SAMPLEPER_SAMPLEPER_16384us (7UL) /*!< 16384 us */
#define QDEC_SAMPLEPER_SAMPLEPER_32ms (8UL) /*!< 32768 us */
#define QDEC_SAMPLEPER_SAMPLEPER_65ms (9UL) /*!< 65536 us */
#define QDEC_SAMPLEPER_SAMPLEPER_131ms (10UL) /*!< 131072 us */

/* Register: QDEC_SAMPLE */
/* Description: Motion sample value */

/* Bits 31..0 : Last motion sample */
#define QDEC_SAMPLE_SAMPLE_Pos (0UL) /*!< Position of SAMPLE field. */
#define QDEC_SAMPLE_SAMPLE_Msk (0xFFFFFFFFUL << QDEC_SAMPLE_SAMPLE_Pos) /*!< Bit mask of SAMPLE field. */

/* Register: QDEC_REPORTPER */
/* Description: Number of samples to be taken before REPORTRDY and DBLRDY events can be generated */

/* Bits 3..0 : Specifies the number of samples to be accumulated in the ACC register before the REPORTRDY and DBLRDY events can be generated */
#define QDEC_REPORTPER_REPORTPER_Pos (0UL) /*!< Position of REPORTPER field. */
#define QDEC_REPORTPER_REPORTPER_Msk (0xFUL << QDEC_REPORTPER_REPORTPER_Pos) /*!< Bit mask of REPORTPER field. */
#define QDEC_REPORTPER_REPORTPER_10Smpl (0UL) /*!< 10 samples / report */
#define QDEC_REPORTPER_REPORTPER_40Smpl (1UL) /*!< 40 samples / report */
#define QDEC_REPORTPER_REPORTPER_80Smpl (2UL) /*!< 80 samples / report */
#define QDEC_REPORTPER_REPORTPER_120Smpl (3UL) /*!< 120 samples / report */
#define QDEC_REPORTPER_REPORTPER_160Smpl (4UL) /*!< 160 samples / report */
#define QDEC_REPORTPER_REPORTPER_200Smpl (5UL) /*!< 200 samples / report */
#define QDEC_REPORTPER_REPORTPER_240Smpl (6UL) /*!< 240 samples / report */
#define QDEC_REPORTPER_REPORTPER_280Smpl (7UL) /*!< 280 samples / report */
#define QDEC_REPORTPER_REPORTPER_1Smpl (8UL) /*!< 1 sample / report */

/* Register: QDEC_ACC */
/* Description: Register accumulating the valid transitions */

/* Bits 31..0 : Register accumulating all valid samples (not double transition) read from the SAMPLE register */
#define QDEC_ACC_ACC_Pos (0UL) /*!< Position of ACC field. */
#define QDEC_ACC_ACC_Msk (0xFFFFFFFFUL << QDEC_ACC_ACC_Pos) /*!< Bit mask of ACC field. */

/* Register: QDEC_ACCREAD */
/* Description: Snapshot of the ACC register, updated by the READCLRACC or RDCLRACC task */

/* Bits 31..0 : Snapshot of the ACC register. */
#define QDEC_ACCREAD_ACCREAD_Pos (0UL) /*!< Position of ACCREAD field. */
#define QDEC_ACCREAD_ACCREAD_Msk (0xFFFFFFFFUL << QDEC_ACCREAD_ACCREAD_Pos) /*!< Bit mask of ACCREAD field. */

/* Register: QDEC_PSEL_LED */
/* Description: Pin select for LED signal */

/* Bit 31 : Connection */
#define QDEC_PSEL_LED_CONNECT_Pos (31UL) /*!< Position of CONNECT field. */
#define QDEC_PSEL_LED_CONNECT_Msk (0x1UL << QDEC_PSEL_LED_CONNECT_Pos) /*!< Bit mask of CONNECT field. */
#define QDEC_PSEL_LED_CONNECT_Connected (0UL) /*!< Connect */
#define QDEC_PSEL_LED_CONNECT_Disconnected (1UL) /*!< Disconnect */

/* Bits 4..0 : Pin number */
#define QDEC_PSEL_LED_PIN_Pos (0UL) /*!< Position of PIN field. */
#define QDEC_PSEL_LED_PIN_Msk (0x1FUL << QDEC_PSEL_LED_PIN_Pos) /*!< Bit mask of PIN field. */

/* Register: QDEC_PSEL_A */
/* Description: Pin select for A signal */

/* Bit 31 : Connection */
#define QDEC_PSEL_A_CONNECT_Pos (31UL) /*!< Position of CONNECT field. */
#define QDEC_PSEL_A_CONNECT_Msk (0x1UL << QDEC_PSEL_A_CONNECT_Pos) /*!< Bit mask of CONNECT field. */
#define QDEC_PSEL_A_CONNECT_Connected (0UL) /*!< Connect */
#define QDEC_PSEL_A_CONNECT_Disconnected (1UL) /*!< Disconnect */

/* Bits 4..0 : Pin number */
#define QDEC_PSEL_A_PIN_Pos (0UL) /*!< Position of PIN field. */
#define QDEC_PSEL_A_PIN_Msk (0x1FUL << QDEC_PSEL_A_PIN_Pos) /*!< Bit mask of PIN field. */

/* Register: QDEC_PSEL_B */
/* Description: Pin select for B signal */

/* Bit 31 : Connection */
#define QDEC_PSEL_B_CONNECT_Pos (31UL) /*!< Position of CONNECT field. */
#define QDEC_PSEL_B_CONNECT_Msk (0x1UL << QDEC_PSEL_B_CONNECT_Pos) /*!< Bit mask of CONNECT field. */
#define QDEC_PSEL_B_CONNECT_Connected (0UL) /*!< Connect */
#define QDEC_PSEL_B_CONNECT_Disconnected (1UL) /*!< Disconnect */

/* Bits 4..0 : Pin number */
#define QDEC_PSEL_B_PIN_Pos (0UL) /*!< Position of PIN field. */
#define QDEC_PSEL_B_PIN_Msk (0x1FUL << QDEC_PSEL_B_PIN_Pos) /*!< Bit mask of PIN field. */

/* Register: QDEC_DBFEN */
/* Description: Enable input debounce filters */

/* Bit 0 : Enable input debounce filters */
#define QDEC_DBFEN_DBFEN_Pos (0UL) /*!< Position of DBFEN field. */
#define QDEC_DBFEN_DBFEN_Msk (0x1UL << QDEC_DBFEN_DBFEN_Pos) /*!< Bit mask of DBFEN field. */
#define QDEC_DBFEN_DBFEN_Disabled (0UL) /*!< Debounce input filters disabled */
#define QDEC_DBFEN_DBFEN_Enabled (1UL) /*!< Debounce input filters enabled */

/* Register: QDEC_LEDPRE */
/* Description: Time period the LED is switched ON prior to sampling */

/* Bits 8..0 : Period in us the LED is switched on prior to sampling */
#define QDEC_LEDPRE_LEDPRE_Pos (0UL) /*!< Position of LEDPRE field. */
#define QDEC_LEDPRE_LEDPRE_Msk (0x1FFUL << QDEC_LEDPRE_LEDPRE_Pos) /*!< Bit mask of LEDPRE field. */

/* Register: QDEC_ACCDBL */
/* Description: Register accumulating the number of detected double transitions */

/* Bits 3..0 : Register accumulating the number of detected double or illegal transitions. ( SAMPLE = 2 ). */
#define QDEC_ACCDBL_ACCDBL_Pos (0UL) /*!< Position of ACCDBL field. */
#define QDEC_ACCDBL_ACCDBL_Msk (0xFUL << QDEC_ACCDBL_ACCDBL_Pos) /*!< Bit mask of ACCDBL field. */

/* Register: QDEC_ACCDBLREAD */
/* Description: Snapshot of the ACCDBL, updated by the READCLRACC or RDCLRDBL task */

/* Bits 3..0 : Snapshot of the ACCDBL register. This field is updated when the READCLRACC or RDCLRDBL task is triggered. */
#define QDEC_ACCDBLREAD_ACCDBLREAD_Pos (0UL) /*!< Position of ACCDBLREAD field. */
#define QDEC_ACCDBLREAD_ACCDBLREAD_Msk (0xFUL << QDEC_ACCDBLREAD_ACCDBLREAD_Pos) /*!< Bit mask of ACCDBLREAD field. */

/* Register: QDEC_POWER */
/* Description: Peripheral power control */

/* Bit 0 : Peripheral power control. The peripheral and its registers will be reset to its initial state by switching the peripheral off and then back on again. */
#define QDEC_POWER_POWER_Pos (0UL) /*!< Position of POWER field. */
#define QDEC_POWER_POWER_Msk (0x1UL << QDEC_POWER_POWER_Pos) /*!< Bit mask of POWER field. */
#define QDEC_POWER_POWER_Disabled (0UL) /*!< Peripheral is powered off */
#define QDEC_POWER_POWER_Enabled (1UL) /*!< Peripheral is powered on */


/* Peripheral: RADIO */
/* Description: 2.4 GHz Radio */

/* Register: RADIO_TASKS_TXEN */
/* Description: Enable RADIO in TX mode */

/* Bit 0 :   */
#define RADIO_TASKS_TXEN_TASKS_TXEN_Pos (0UL) /*!< Position of TASKS_TXEN field. */
#define RADIO_TASKS_TXEN_TASKS_TXEN_Msk (0x1UL << RADIO_TASKS_TXEN_TASKS_TXEN_Pos) /*!< Bit mask of TASKS_TXEN field. */

/* Register: RADIO_TASKS_RXEN */
/* Description: Enable RADIO in RX mode */

/* Bit 0 :   */
#define RADIO_TASKS_RXEN_TASKS_RXEN_Pos (0UL) /*!< Position of TASKS_RXEN field. */
#define RADIO_TASKS_RXEN_TASKS_RXEN_Msk (0x1UL << RADIO_TASKS_RXEN_TASKS_RXEN_Pos) /*!< Bit mask of TASKS_RXEN field. */

/* Register: RADIO_TASKS_START */
/* Description: Start RADIO */

/* Bit 0 :   */
#define RADIO_TASKS_START_TASKS_START_Pos (0UL) /*!< Position of TASKS_START field. */
#define RADIO_TASKS_START_TASKS_START_Msk (0x1UL << RADIO_TASKS_START_TASKS_START_Pos) /*!< Bit mask of TASKS_START field. */

/* Register: RADIO_TASKS_STOP */
/* Description: Stop RADIO */

/* Bit 0 :   */
#define RADIO_TASKS_STOP_TASKS_STOP_Pos (0UL) /*!< Position of TASKS_STOP field. */
#define RADIO_TASKS_STOP_TASKS_STOP_Msk (0x1UL << RADIO_TASKS_STOP_TASKS_STOP_Pos) /*!< Bit mask of TASKS_STOP field. */

/* Register: RADIO_TASKS_DISABLE */
/* Description: Disable RADIO */

/* Bit 0 :   */
#define RADIO_TASKS_DISABLE_TASKS_DISABLE_Pos (0UL) /*!< Position of TASKS_DISABLE field. */
#define RADIO_TASKS_DISABLE_TASKS_DISABLE_Msk (0x1UL << RADIO_TASKS_DISABLE_TASKS_DISABLE_Pos) /*!< Bit mask of TASKS_DISABLE field. */

/* Register: RADIO_TASKS_RSSISTART */
/* Description: Start the RSSI and take one single sample of the receive signal strength. */

/* Bit 0 :   */
#define RADIO_TASKS_RSSISTART_TASKS_RSSISTART_Pos (0UL) /*!< Position of TASKS_RSSISTART field. */
#define RADIO_TASKS_RSSISTART_TASKS_RSSISTART_Msk (0x1UL << RADIO_TASKS_RSSISTART_TASKS_RSSISTART_Pos) /*!< Bit mask of TASKS_RSSISTART field. */

/* Register: RADIO_TASKS_RSSISTOP */
/* Description: Stop the RSSI measurement */

/* Bit 0 :   */
#define RADIO_TASKS_RSSISTOP_TASKS_RSSISTOP_Pos (0UL) /*!< Position of TASKS_RSSISTOP field. */
#define RADIO_TASKS_RSSISTOP_TASKS_RSSISTOP_Msk (0x1UL << RADIO_TASKS_RSSISTOP_TASKS_RSSISTOP_Pos) /*!< Bit mask of TASKS_RSSISTOP field. */

/* Register: RADIO_TASKS_BCSTART */
/* Description: Start the bit counter */

/* Bit 0 :   */
#define RADIO_TASKS_BCSTART_TASKS_BCSTART_Pos (0UL) /*!< Position of TASKS_BCSTART field. */
#define RADIO_TASKS_BCSTART_TASKS_BCSTART_Msk (0x1UL << RADIO_TASKS_BCSTART_TASKS_BCSTART_Pos) /*!< Bit mask of TASKS_BCSTART field. */

/* Register: RADIO_TASKS_BCSTOP */
/* Description: Stop the bit counter */

/* Bit 0 :   */
#define RADIO_TASKS_BCSTOP_TASKS_BCSTOP_Pos (0UL) /*!< Position of TASKS_BCSTOP field. */
#define RADIO_TASKS_BCSTOP_TASKS_BCSTOP_Msk (0x1UL << RADIO_TASKS_BCSTOP_TASKS_BCSTOP_Pos) /*!< Bit mask of TASKS_BCSTOP field. */

/* Register: RADIO_TASKS_AAFRCCAL_START */
/* Description: Deprecated register - Start aafrc calib */

/* Bit 0 :   */
#define RADIO_TASKS_AAFRCCAL_START_TASKS_AAFRCCAL_START_Pos (0UL) /*!< Position of TASKS_AAFRCCAL_START field. */
#define RADIO_TASKS_AAFRCCAL_START_TASKS_AAFRCCAL_START_Msk (0x1UL << RADIO_TASKS_AAFRCCAL_START_TASKS_AAFRCCAL_START_Pos) /*!< Bit mask of TASKS_AAFRCCAL_START field. */

/* Register: RADIO_TASKS_AAFDCCAL_START */
/* Description: Start aafdc calib */

/* Bit 0 :   */
#define RADIO_TASKS_AAFDCCAL_START_TASKS_AAFDCCAL_START_Pos (0UL) /*!< Position of TASKS_AAFDCCAL_START field. */
#define RADIO_TASKS_AAFDCCAL_START_TASKS_AAFDCCAL_START_Msk (0x1UL << RADIO_TASKS_AAFDCCAL_START_TASKS_AAFDCCAL_START_Pos) /*!< Bit mask of TASKS_AAFDCCAL_START field. */

/* Register: RADIO_TASKS_CNTP_START */
/* Description: Start packet counter */

/* Bit 0 :   */
#define RADIO_TASKS_CNTP_START_TASKS_CNTP_START_Pos (0UL) /*!< Position of TASKS_CNTP_START field. */
#define RADIO_TASKS_CNTP_START_TASKS_CNTP_START_Msk (0x1UL << RADIO_TASKS_CNTP_START_TASKS_CNTP_START_Pos) /*!< Bit mask of TASKS_CNTP_START field. */

/* Register: RADIO_TASKS_CNTP_STOP */
/* Description: Stop packet counter */

/* Bit 0 :   */
#define RADIO_TASKS_CNTP_STOP_TASKS_CNTP_STOP_Pos (0UL) /*!< Position of TASKS_CNTP_STOP field. */
#define RADIO_TASKS_CNTP_STOP_TASKS_CNTP_STOP_Msk (0x1UL << RADIO_TASKS_CNTP_STOP_TASKS_CNTP_STOP_Pos) /*!< Bit mask of TASKS_CNTP_STOP field. */

/* Register: RADIO_TASKS_CNTP_CLEAR */
/* Description: Clear packet counter */

/* Bit 0 :   */
#define RADIO_TASKS_CNTP_CLEAR_TASKS_CNTP_CLEAR_Pos (0UL) /*!< Position of TASKS_CNTP_CLEAR field. */
#define RADIO_TASKS_CNTP_CLEAR_TASKS_CNTP_CLEAR_Msk (0x1UL << RADIO_TASKS_CNTP_CLEAR_TASKS_CNTP_CLEAR_Pos) /*!< Bit mask of TASKS_CNTP_CLEAR field. */

/* Register: RADIO_TASKS_PCGC_ZERO */
/* Description: Zero penalty */

/* Bit 0 :   */
#define RADIO_TASKS_PCGC_ZERO_TASKS_PCGC_ZERO_Pos (0UL) /*!< Position of TASKS_PCGC_ZERO field. */
#define RADIO_TASKS_PCGC_ZERO_TASKS_PCGC_ZERO_Msk (0x1UL << RADIO_TASKS_PCGC_ZERO_TASKS_PCGC_ZERO_Pos) /*!< Bit mask of TASKS_PCGC_ZERO field. */

/* Register: RADIO_TASKS_PCGC_FULL */
/* Description: Full penalty */

/* Bit 0 :   */
#define RADIO_TASKS_PCGC_FULL_TASKS_PCGC_FULL_Pos (0UL) /*!< Position of TASKS_PCGC_FULL field. */
#define RADIO_TASKS_PCGC_FULL_TASKS_PCGC_FULL_Msk (0x1UL << RADIO_TASKS_PCGC_FULL_TASKS_PCGC_FULL_Pos) /*!< Bit mask of TASKS_PCGC_FULL field. */

/* Register: RADIO_EVENTS_READY */
/* Description: RADIO has ramped up and is ready to be started */

/* Bit 0 :   */
#define RADIO_EVENTS_READY_EVENTS_READY_Pos (0UL) /*!< Position of EVENTS_READY field. */
#define RADIO_EVENTS_READY_EVENTS_READY_Msk (0x1UL << RADIO_EVENTS_READY_EVENTS_READY_Pos) /*!< Bit mask of EVENTS_READY field. */

/* Register: RADIO_EVENTS_ADDRESS */
/* Description: Address sent or received */

/* Bit 0 :   */
#define RADIO_EVENTS_ADDRESS_EVENTS_ADDRESS_Pos (0UL) /*!< Position of EVENTS_ADDRESS field. */
#define RADIO_EVENTS_ADDRESS_EVENTS_ADDRESS_Msk (0x1UL << RADIO_EVENTS_ADDRESS_EVENTS_ADDRESS_Pos) /*!< Bit mask of EVENTS_ADDRESS field. */

/* Register: RADIO_EVENTS_PAYLOAD */
/* Description: Packet payload sent or received */

/* Bit 0 :   */
#define RADIO_EVENTS_PAYLOAD_EVENTS_PAYLOAD_Pos (0UL) /*!< Position of EVENTS_PAYLOAD field. */
#define RADIO_EVENTS_PAYLOAD_EVENTS_PAYLOAD_Msk (0x1UL << RADIO_EVENTS_PAYLOAD_EVENTS_PAYLOAD_Pos) /*!< Bit mask of EVENTS_PAYLOAD field. */

/* Register: RADIO_EVENTS_END */
/* Description: Packet sent or received */

/* Bit 0 :   */
#define RADIO_EVENTS_END_EVENTS_END_Pos (0UL) /*!< Position of EVENTS_END field. */
#define RADIO_EVENTS_END_EVENTS_END_Msk (0x1UL << RADIO_EVENTS_END_EVENTS_END_Pos) /*!< Bit mask of EVENTS_END field. */

/* Register: RADIO_EVENTS_DISABLED */
/* Description: RADIO has been disabled */

/* Bit 0 :   */
#define RADIO_EVENTS_DISABLED_EVENTS_DISABLED_Pos (0UL) /*!< Position of EVENTS_DISABLED field. */
#define RADIO_EVENTS_DISABLED_EVENTS_DISABLED_Msk (0x1UL << RADIO_EVENTS_DISABLED_EVENTS_DISABLED_Pos) /*!< Bit mask of EVENTS_DISABLED field. */

/* Register: RADIO_EVENTS_DEVMATCH */
/* Description: A device address match occurred on the last received packet */

/* Bit 0 :   */
#define RADIO_EVENTS_DEVMATCH_EVENTS_DEVMATCH_Pos (0UL) /*!< Position of EVENTS_DEVMATCH field. */
#define RADIO_EVENTS_DEVMATCH_EVENTS_DEVMATCH_Msk (0x1UL << RADIO_EVENTS_DEVMATCH_EVENTS_DEVMATCH_Pos) /*!< Bit mask of EVENTS_DEVMATCH field. */

/* Register: RADIO_EVENTS_DEVMISS */
/* Description: No device address match occurred on the last received packet */

/* Bit 0 :   */
#define RADIO_EVENTS_DEVMISS_EVENTS_DEVMISS_Pos (0UL) /*!< Position of EVENTS_DEVMISS field. */
#define RADIO_EVENTS_DEVMISS_EVENTS_DEVMISS_Msk (0x1UL << RADIO_EVENTS_DEVMISS_EVENTS_DEVMISS_Pos) /*!< Bit mask of EVENTS_DEVMISS field. */

/* Register: RADIO_EVENTS_RSSIEND */
/* Description: Sampling of receive signal strength complete. */

/* Bit 0 :   */
#define RADIO_EVENTS_RSSIEND_EVENTS_RSSIEND_Pos (0UL) /*!< Position of EVENTS_RSSIEND field. */
#define RADIO_EVENTS_RSSIEND_EVENTS_RSSIEND_Msk (0x1UL << RADIO_EVENTS_RSSIEND_EVENTS_RSSIEND_Pos) /*!< Bit mask of EVENTS_RSSIEND field. */

/* Register: RADIO_EVENTS_BCMATCH */
/* Description: Bit counter reached bit count value. */

/* Bit 0 :   */
#define RADIO_EVENTS_BCMATCH_EVENTS_BCMATCH_Pos (0UL) /*!< Position of EVENTS_BCMATCH field. */
#define RADIO_EVENTS_BCMATCH_EVENTS_BCMATCH_Msk (0x1UL << RADIO_EVENTS_BCMATCH_EVENTS_BCMATCH_Pos) /*!< Bit mask of EVENTS_BCMATCH field. */

/* Register: RADIO_EVENTS_CRCOK */
/* Description: Packet received with CRC ok */

/* Bit 0 :   */
#define RADIO_EVENTS_CRCOK_EVENTS_CRCOK_Pos (0UL) /*!< Position of EVENTS_CRCOK field. */
#define RADIO_EVENTS_CRCOK_EVENTS_CRCOK_Msk (0x1UL << RADIO_EVENTS_CRCOK_EVENTS_CRCOK_Pos) /*!< Bit mask of EVENTS_CRCOK field. */

/* Register: RADIO_EVENTS_CRCERROR */
/* Description: Packet received with CRC error */

/* Bit 0 :   */
#define RADIO_EVENTS_CRCERROR_EVENTS_CRCERROR_Pos (0UL) /*!< Position of EVENTS_CRCERROR field. */
#define RADIO_EVENTS_CRCERROR_EVENTS_CRCERROR_Msk (0x1UL << RADIO_EVENTS_CRCERROR_EVENTS_CRCERROR_Pos) /*!< Bit mask of EVENTS_CRCERROR field. */

/* Register: RADIO_EVENTS_SYNC */
/* Description: Signal that correlator has detect */

/* Bit 0 :   */
#define RADIO_EVENTS_SYNC_EVENTS_SYNC_Pos (0UL) /*!< Position of EVENTS_SYNC field. */
#define RADIO_EVENTS_SYNC_EVENTS_SYNC_Msk (0x1UL << RADIO_EVENTS_SYNC_EVENTS_SYNC_Pos) /*!< Bit mask of EVENTS_SYNC field. */

/* Register: RADIO_SHORTS */
/* Description: Shortcut register */

/* Bit 10 : Shortcut between DFEEND event and START task */
#define RADIO_SHORTS_DFEEND_START_Pos (10UL) /*!< Position of DFEEND_START field. */
#define RADIO_SHORTS_DFEEND_START_Msk (0x1UL << RADIO_SHORTS_DFEEND_START_Pos) /*!< Bit mask of DFEEND_START field. */
#define RADIO_SHORTS_DFEEND_START_Disabled (0UL) /*!< Disable shortcut */
#define RADIO_SHORTS_DFEEND_START_Enabled (1UL) /*!< Enable shortcut */

/* Bit 9 : Shortcut between DFEEND event and DISABLE task */
#define RADIO_SHORTS_DFEEND_DISABLE_Pos (9UL) /*!< Position of DFEEND_DISABLE field. */
#define RADIO_SHORTS_DFEEND_DISABLE_Msk (0x1UL << RADIO_SHORTS_DFEEND_DISABLE_Pos) /*!< Bit mask of DFEEND_DISABLE field. */
#define RADIO_SHORTS_DFEEND_DISABLE_Disabled (0UL) /*!< Disable shortcut */
#define RADIO_SHORTS_DFEEND_DISABLE_Enabled (1UL) /*!< Enable shortcut */

/* Bit 8 : Shortcut between DISABLED event and RSSISTOP task */
#define RADIO_SHORTS_DISABLED_RSSISTOP_Pos (8UL) /*!< Position of DISABLED_RSSISTOP field. */
#define RADIO_SHORTS_DISABLED_RSSISTOP_Msk (0x1UL << RADIO_SHORTS_DISABLED_RSSISTOP_Pos) /*!< Bit mask of DISABLED_RSSISTOP field. */
#define RADIO_SHORTS_DISABLED_RSSISTOP_Disabled (0UL) /*!< Disable shortcut */
#define RADIO_SHORTS_DISABLED_RSSISTOP_Enabled (1UL) /*!< Enable shortcut */

/* Bit 6 : Shortcut between ADDRESS event and BCSTART task */
#define RADIO_SHORTS_ADDRESS_BCSTART_Pos (6UL) /*!< Position of ADDRESS_BCSTART field. */
#define RADIO_SHORTS_ADDRESS_BCSTART_Msk (0x1UL << RADIO_SHORTS_ADDRESS_BCSTART_Pos) /*!< Bit mask of ADDRESS_BCSTART field. */
#define RADIO_SHORTS_ADDRESS_BCSTART_Disabled (0UL) /*!< Disable shortcut */
#define RADIO_SHORTS_ADDRESS_BCSTART_Enabled (1UL) /*!< Enable shortcut */

/* Bit 5 : Shortcut between END event and START task */
#define RADIO_SHORTS_END_START_Pos (5UL) /*!< Position of END_START field. */
#define RADIO_SHORTS_END_START_Msk (0x1UL << RADIO_SHORTS_END_START_Pos) /*!< Bit mask of END_START field. */
#define RADIO_SHORTS_END_START_Disabled (0UL) /*!< Disable shortcut */
#define RADIO_SHORTS_END_START_Enabled (1UL) /*!< Enable shortcut */

/* Bit 4 : Shortcut between ADDRESS event and RSSISTART task */
#define RADIO_SHORTS_ADDRESS_RSSISTART_Pos (4UL) /*!< Position of ADDRESS_RSSISTART field. */
#define RADIO_SHORTS_ADDRESS_RSSISTART_Msk (0x1UL << RADIO_SHORTS_ADDRESS_RSSISTART_Pos) /*!< Bit mask of ADDRESS_RSSISTART field. */
#define RADIO_SHORTS_ADDRESS_RSSISTART_Disabled (0UL) /*!< Disable shortcut */
#define RADIO_SHORTS_ADDRESS_RSSISTART_Enabled (1UL) /*!< Enable shortcut */

/* Bit 3 : Shortcut between DISABLED event and RXEN task */
#define RADIO_SHORTS_DISABLED_RXEN_Pos (3UL) /*!< Position of DISABLED_RXEN field. */
#define RADIO_SHORTS_DISABLED_RXEN_Msk (0x1UL << RADIO_SHORTS_DISABLED_RXEN_Pos) /*!< Bit mask of DISABLED_RXEN field. */
#define RADIO_SHORTS_DISABLED_RXEN_Disabled (0UL) /*!< Disable shortcut */
#define RADIO_SHORTS_DISABLED_RXEN_Enabled (1UL) /*!< Enable shortcut */

/* Bit 2 : Shortcut between DISABLED event and TXEN task */
#define RADIO_SHORTS_DISABLED_TXEN_Pos (2UL) /*!< Position of DISABLED_TXEN field. */
#define RADIO_SHORTS_DISABLED_TXEN_Msk (0x1UL << RADIO_SHORTS_DISABLED_TXEN_Pos) /*!< Bit mask of DISABLED_TXEN field. */
#define RADIO_SHORTS_DISABLED_TXEN_Disabled (0UL) /*!< Disable shortcut */
#define RADIO_SHORTS_DISABLED_TXEN_Enabled (1UL) /*!< Enable shortcut */

/* Bit 1 : Shortcut between END event and DISABLE task */
#define RADIO_SHORTS_END_DISABLE_Pos (1UL) /*!< Position of END_DISABLE field. */
#define RADIO_SHORTS_END_DISABLE_Msk (0x1UL << RADIO_SHORTS_END_DISABLE_Pos) /*!< Bit mask of END_DISABLE field. */
#define RADIO_SHORTS_END_DISABLE_Disabled (0UL) /*!< Disable shortcut */
#define RADIO_SHORTS_END_DISABLE_Enabled (1UL) /*!< Enable shortcut */

/* Bit 0 : Shortcut between READY event and START task */
#define RADIO_SHORTS_READY_START_Pos (0UL) /*!< Position of READY_START field. */
#define RADIO_SHORTS_READY_START_Msk (0x1UL << RADIO_SHORTS_READY_START_Pos) /*!< Bit mask of READY_START field. */
#define RADIO_SHORTS_READY_START_Disabled (0UL) /*!< Disable shortcut */
#define RADIO_SHORTS_READY_START_Enabled (1UL) /*!< Enable shortcut */

/* Register: RADIO_INTENSET */
/* Description: Enable interrupt */

/* Bit 26 : Write '1' to enable interrupt for SYNC event */
#define RADIO_INTENSET_SYNC_Pos (26UL) /*!< Position of SYNC field. */
#define RADIO_INTENSET_SYNC_Msk (0x1UL << RADIO_INTENSET_SYNC_Pos) /*!< Bit mask of SYNC field. */
#define RADIO_INTENSET_SYNC_Disabled (0UL) /*!< Read: Disabled */
#define RADIO_INTENSET_SYNC_Enabled (1UL) /*!< Read: Enabled */
#define RADIO_INTENSET_SYNC_Set (1UL) /*!< Enable */

/* Bit 13 : Write '1' to enable interrupt for CRCERROR event */
#define RADIO_INTENSET_CRCERROR_Pos (13UL) /*!< Position of CRCERROR field. */
#define RADIO_INTENSET_CRCERROR_Msk (0x1UL << RADIO_INTENSET_CRCERROR_Pos) /*!< Bit mask of CRCERROR field. */
#define RADIO_INTENSET_CRCERROR_Disabled (0UL) /*!< Read: Disabled */
#define RADIO_INTENSET_CRCERROR_Enabled (1UL) /*!< Read: Enabled */
#define RADIO_INTENSET_CRCERROR_Set (1UL) /*!< Enable */

/* Bit 12 : Write '1' to enable interrupt for CRCOK event */
#define RADIO_INTENSET_CRCOK_Pos (12UL) /*!< Position of CRCOK field. */
#define RADIO_INTENSET_CRCOK_Msk (0x1UL << RADIO_INTENSET_CRCOK_Pos) /*!< Bit mask of CRCOK field. */
#define RADIO_INTENSET_CRCOK_Disabled (0UL) /*!< Read: Disabled */
#define RADIO_INTENSET_CRCOK_Enabled (1UL) /*!< Read: Enabled */
#define RADIO_INTENSET_CRCOK_Set (1UL) /*!< Enable */

/* Bit 10 : Write '1' to enable interrupt for BCMATCH event */
#define RADIO_INTENSET_BCMATCH_Pos (10UL) /*!< Position of BCMATCH field. */
#define RADIO_INTENSET_BCMATCH_Msk (0x1UL << RADIO_INTENSET_BCMATCH_Pos) /*!< Bit mask of BCMATCH field. */
#define RADIO_INTENSET_BCMATCH_Disabled (0UL) /*!< Read: Disabled */
#define RADIO_INTENSET_BCMATCH_Enabled (1UL) /*!< Read: Enabled */
#define RADIO_INTENSET_BCMATCH_Set (1UL) /*!< Enable */

/* Bit 7 : Write '1' to enable interrupt for RSSIEND event */
#define RADIO_INTENSET_RSSIEND_Pos (7UL) /*!< Position of RSSIEND field. */
#define RADIO_INTENSET_RSSIEND_Msk (0x1UL << RADIO_INTENSET_RSSIEND_Pos) /*!< Bit mask of RSSIEND field. */
#define RADIO_INTENSET_RSSIEND_Disabled (0UL) /*!< Read: Disabled */
#define RADIO_INTENSET_RSSIEND_Enabled (1UL) /*!< Read: Enabled */
#define RADIO_INTENSET_RSSIEND_Set (1UL) /*!< Enable */

/* Bit 6 : Write '1' to enable interrupt for DEVMISS event */
#define RADIO_INTENSET_DEVMISS_Pos (6UL) /*!< Position of DEVMISS field. */
#define RADIO_INTENSET_DEVMISS_Msk (0x1UL << RADIO_INTENSET_DEVMISS_Pos) /*!< Bit mask of DEVMISS field. */
#define RADIO_INTENSET_DEVMISS_Disabled (0UL) /*!< Read: Disabled */
#define RADIO_INTENSET_DEVMISS_Enabled (1UL) /*!< Read: Enabled */
#define RADIO_INTENSET_DEVMISS_Set (1UL) /*!< Enable */

/* Bit 5 : Write '1' to enable interrupt for DEVMATCH event */
#define RADIO_INTENSET_DEVMATCH_Pos (5UL) /*!< Position of DEVMATCH field. */
#define RADIO_INTENSET_DEVMATCH_Msk (0x1UL << RADIO_INTENSET_DEVMATCH_Pos) /*!< Bit mask of DEVMATCH field. */
#define RADIO_INTENSET_DEVMATCH_Disabled (0UL) /*!< Read: Disabled */
#define RADIO_INTENSET_DEVMATCH_Enabled (1UL) /*!< Read: Enabled */
#define RADIO_INTENSET_DEVMATCH_Set (1UL) /*!< Enable */

/* Bit 4 : Write '1' to enable interrupt for DISABLED event */
#define RADIO_INTENSET_DISABLED_Pos (4UL) /*!< Position of DISABLED field. */
#define RADIO_INTENSET_DISABLED_Msk (0x1UL << RADIO_INTENSET_DISABLED_Pos) /*!< Bit mask of DISABLED field. */
#define RADIO_INTENSET_DISABLED_Disabled (0UL) /*!< Read: Disabled */
#define RADIO_INTENSET_DISABLED_Enabled (1UL) /*!< Read: Enabled */
#define RADIO_INTENSET_DISABLED_Set (1UL) /*!< Enable */

/* Bit 3 : Write '1' to enable interrupt for END event */
#define RADIO_INTENSET_END_Pos (3UL) /*!< Position of END field. */
#define RADIO_INTENSET_END_Msk (0x1UL << RADIO_INTENSET_END_Pos) /*!< Bit mask of END field. */
#define RADIO_INTENSET_END_Disabled (0UL) /*!< Read: Disabled */
#define RADIO_INTENSET_END_Enabled (1UL) /*!< Read: Enabled */
#define RADIO_INTENSET_END_Set (1UL) /*!< Enable */

/* Bit 2 : Write '1' to enable interrupt for PAYLOAD event */
#define RADIO_INTENSET_PAYLOAD_Pos (2UL) /*!< Position of PAYLOAD field. */
#define RADIO_INTENSET_PAYLOAD_Msk (0x1UL << RADIO_INTENSET_PAYLOAD_Pos) /*!< Bit mask of PAYLOAD field. */
#define RADIO_INTENSET_PAYLOAD_Disabled (0UL) /*!< Read: Disabled */
#define RADIO_INTENSET_PAYLOAD_Enabled (1UL) /*!< Read: Enabled */
#define RADIO_INTENSET_PAYLOAD_Set (1UL) /*!< Enable */

/* Bit 1 : Write '1' to enable interrupt for ADDRESS event */
#define RADIO_INTENSET_ADDRESS_Pos (1UL) /*!< Position of ADDRESS field. */
#define RADIO_INTENSET_ADDRESS_Msk (0x1UL << RADIO_INTENSET_ADDRESS_Pos) /*!< Bit mask of ADDRESS field. */
#define RADIO_INTENSET_ADDRESS_Disabled (0UL) /*!< Read: Disabled */
#define RADIO_INTENSET_ADDRESS_Enabled (1UL) /*!< Read: Enabled */
#define RADIO_INTENSET_ADDRESS_Set (1UL) /*!< Enable */

/* Bit 0 : Write '1' to enable interrupt for READY event */
#define RADIO_INTENSET_READY_Pos (0UL) /*!< Position of READY field. */
#define RADIO_INTENSET_READY_Msk (0x1UL << RADIO_INTENSET_READY_Pos) /*!< Bit mask of READY field. */
#define RADIO_INTENSET_READY_Disabled (0UL) /*!< Read: Disabled */
#define RADIO_INTENSET_READY_Enabled (1UL) /*!< Read: Enabled */
#define RADIO_INTENSET_READY_Set (1UL) /*!< Enable */

/* Register: RADIO_INTENCLR */
/* Description: Disable interrupt */

/* Bit 26 : Write '1' to disable interrupt for SYNC event */
#define RADIO_INTENCLR_SYNC_Pos (26UL) /*!< Position of SYNC field. */
#define RADIO_INTENCLR_SYNC_Msk (0x1UL << RADIO_INTENCLR_SYNC_Pos) /*!< Bit mask of SYNC field. */
#define RADIO_INTENCLR_SYNC_Disabled (0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR_SYNC_Enabled (1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR_SYNC_Clear (1UL) /*!< Disable */

/* Bit 13 : Write '1' to disable interrupt for CRCERROR event */
#define RADIO_INTENCLR_CRCERROR_Pos (13UL) /*!< Position of CRCERROR field. */
#define RADIO_INTENCLR_CRCERROR_Msk (0x1UL << RADIO_INTENCLR_CRCERROR_Pos) /*!< Bit mask of CRCERROR field. */
#define RADIO_INTENCLR_CRCERROR_Disabled (0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR_CRCERROR_Enabled (1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR_CRCERROR_Clear (1UL) /*!< Disable */

/* Bit 12 : Write '1' to disable interrupt for CRCOK event */
#define RADIO_INTENCLR_CRCOK_Pos (12UL) /*!< Position of CRCOK field. */
#define RADIO_INTENCLR_CRCOK_Msk (0x1UL << RADIO_INTENCLR_CRCOK_Pos) /*!< Bit mask of CRCOK field. */
#define RADIO_INTENCLR_CRCOK_Disabled (0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR_CRCOK_Enabled (1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR_CRCOK_Clear (1UL) /*!< Disable */

/* Bit 10 : Write '1' to disable interrupt for BCMATCH event */
#define RADIO_INTENCLR_BCMATCH_Pos (10UL) /*!< Position of BCMATCH field. */
#define RADIO_INTENCLR_BCMATCH_Msk (0x1UL << RADIO_INTENCLR_BCMATCH_Pos) /*!< Bit mask of BCMATCH field. */
#define RADIO_INTENCLR_BCMATCH_Disabled (0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR_BCMATCH_Enabled (1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR_BCMATCH_Clear (1UL) /*!< Disable */

/* Bit 7 : Write '1' to disable interrupt for RSSIEND event */
#define RADIO_INTENCLR_RSSIEND_Pos (7UL) /*!< Position of RSSIEND field. */
#define RADIO_INTENCLR_RSSIEND_Msk (0x1UL << RADIO_INTENCLR_RSSIEND_Pos) /*!< Bit mask of RSSIEND field. */
#define RADIO_INTENCLR_RSSIEND_Disabled (0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR_RSSIEND_Enabled (1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR_RSSIEND_Clear (1UL) /*!< Disable */

/* Bit 6 : Write '1' to disable interrupt for DEVMISS event */
#define RADIO_INTENCLR_DEVMISS_Pos (6UL) /*!< Position of DEVMISS field. */
#define RADIO_INTENCLR_DEVMISS_Msk (0x1UL << RADIO_INTENCLR_DEVMISS_Pos) /*!< Bit mask of DEVMISS field. */
#define RADIO_INTENCLR_DEVMISS_Disabled (0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR_DEVMISS_Enabled (1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR_DEVMISS_Clear (1UL) /*!< Disable */

/* Bit 5 : Write '1' to disable interrupt for DEVMATCH event */
#define RADIO_INTENCLR_DEVMATCH_Pos (5UL) /*!< Position of DEVMATCH field. */
#define RADIO_INTENCLR_DEVMATCH_Msk (0x1UL << RADIO_INTENCLR_DEVMATCH_Pos) /*!< Bit mask of DEVMATCH field. */
#define RADIO_INTENCLR_DEVMATCH_Disabled (0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR_DEVMATCH_Enabled (1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR_DEVMATCH_Clear (1UL) /*!< Disable */

/* Bit 4 : Write '1' to disable interrupt for DISABLED event */
#define RADIO_INTENCLR_DISABLED_Pos (4UL) /*!< Position of DISABLED field. */
#define RADIO_INTENCLR_DISABLED_Msk (0x1UL << RADIO_INTENCLR_DISABLED_Pos) /*!< Bit mask of DISABLED field. */
#define RADIO_INTENCLR_DISABLED_Disabled (0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR_DISABLED_Enabled (1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR_DISABLED_Clear (1UL) /*!< Disable */

/* Bit 3 : Write '1' to disable interrupt for END event */
#define RADIO_INTENCLR_END_Pos (3UL) /*!< Position of END field. */
#define RADIO_INTENCLR_END_Msk (0x1UL << RADIO_INTENCLR_END_Pos) /*!< Bit mask of END field. */
#define RADIO_INTENCLR_END_Disabled (0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR_END_Enabled (1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR_END_Clear (1UL) /*!< Disable */

/* Bit 2 : Write '1' to disable interrupt for PAYLOAD event */
#define RADIO_INTENCLR_PAYLOAD_Pos (2UL) /*!< Position of PAYLOAD field. */
#define RADIO_INTENCLR_PAYLOAD_Msk (0x1UL << RADIO_INTENCLR_PAYLOAD_Pos) /*!< Bit mask of PAYLOAD field. */
#define RADIO_INTENCLR_PAYLOAD_Disabled (0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR_PAYLOAD_Enabled (1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR_PAYLOAD_Clear (1UL) /*!< Disable */

/* Bit 1 : Write '1' to disable interrupt for ADDRESS event */
#define RADIO_INTENCLR_ADDRESS_Pos (1UL) /*!< Position of ADDRESS field. */
#define RADIO_INTENCLR_ADDRESS_Msk (0x1UL << RADIO_INTENCLR_ADDRESS_Pos) /*!< Bit mask of ADDRESS field. */
#define RADIO_INTENCLR_ADDRESS_Disabled (0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR_ADDRESS_Enabled (1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR_ADDRESS_Clear (1UL) /*!< Disable */

/* Bit 0 : Write '1' to disable interrupt for READY event */
#define RADIO_INTENCLR_READY_Pos (0UL) /*!< Position of READY field. */
#define RADIO_INTENCLR_READY_Msk (0x1UL << RADIO_INTENCLR_READY_Pos) /*!< Bit mask of READY field. */
#define RADIO_INTENCLR_READY_Disabled (0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR_READY_Enabled (1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR_READY_Clear (1UL) /*!< Disable */

/* Register: RADIO_CRCSTATUS */
/* Description: CRC status */

/* Bit 0 : CRC status of packet received */
#define RADIO_CRCSTATUS_CRCSTATUS_Pos (0UL) /*!< Position of CRCSTATUS field. */
#define RADIO_CRCSTATUS_CRCSTATUS_Msk (0x1UL << RADIO_CRCSTATUS_CRCSTATUS_Pos) /*!< Bit mask of CRCSTATUS field. */
#define RADIO_CRCSTATUS_CRCSTATUS_CRCError (0UL) /*!< Packet received with CRC error */
#define RADIO_CRCSTATUS_CRCSTATUS_CRCOk (1UL) /*!< Packet received with CRC ok */

/* Register: RADIO_RXMATCH */
/* Description: Received address */

/* Bits 2..0 : Received address */
#define RADIO_RXMATCH_RXMATCH_Pos (0UL) /*!< Position of RXMATCH field. */
#define RADIO_RXMATCH_RXMATCH_Msk (0x7UL << RADIO_RXMATCH_RXMATCH_Pos) /*!< Bit mask of RXMATCH field. */

/* Register: RADIO_RXCRC */
/* Description: CRC field of previously received packet */

/* Bits 23..0 : CRC field of previously received packet */
#define RADIO_RXCRC_RXCRC_Pos (0UL) /*!< Position of RXCRC field. */
#define RADIO_RXCRC_RXCRC_Msk (0xFFFFFFUL << RADIO_RXCRC_RXCRC_Pos) /*!< Bit mask of RXCRC field. */

/* Register: RADIO_DAI */
/* Description: Device address match index */

/* Bits 2..0 : Device address match index */
#define RADIO_DAI_DAI_Pos (0UL) /*!< Position of DAI field. */
#define RADIO_DAI_DAI_Msk (0x7UL << RADIO_DAI_DAI_Pos) /*!< Bit mask of DAI field. */

/* Register: RADIO_PDU_STAT */
/* Description: Payload status */

/* Bit 0 : Status on payload length vs. RADIO.DMA_MAXLEN */
#define RADIO_PDU_STAT_PDU_STAT_Pos (0UL) /*!< Position of PDU_STAT field. */
#define RADIO_PDU_STAT_PDU_STAT_Msk (0x1UL << RADIO_PDU_STAT_PDU_STAT_Pos) /*!< Bit mask of PDU_STAT field. */
#define RADIO_PDU_STAT_PDU_STAT_LessThan (0UL) /*!< Payload less than RADIO.DMA_MAXLEN */
#define RADIO_PDU_STAT_PDU_STAT_GreaterThan (1UL) /*!< Payload greater than RADIO.DMA_MAXLEN */

/* Register: RADIO_DMA_STAT */
/* Description: DMA byte count */

/* Bits 7..0 : Number of bytes in previous DMA transfer. */
#define RADIO_DMA_STAT_DMA_STAT_Pos (0UL) /*!< Position of DMA_STAT field. */
#define RADIO_DMA_STAT_DMA_STAT_Msk (0xFFUL << RADIO_DMA_STAT_DMA_STAT_Pos) /*!< Bit mask of DMA_STAT field. */

/* Register: RADIO_CALIF_CAPSW */
/* Description: IF calibration related to AAFRCCAL */

/* Bits 5..0 : IF-filter calibration unit capacitor value output */
#define RADIO_CALIF_CAPSW_CALIF_CAPSW_Pos (0UL) /*!< Position of CALIF_CAPSW field. */
#define RADIO_CALIF_CAPSW_CALIF_CAPSW_Msk (0x3FUL << RADIO_CALIF_CAPSW_CALIF_CAPSW_Pos) /*!< Bit mask of CALIF_CAPSW field. */

/* Register: RADIO_PLL_CAL_VCO */
/* Description: PLL Calibration */

/* Bits 4..0 : Holds capacitance-setting for PLL after automatic setting has been performed. This value is updated at the end of the calibration interval. */
#define RADIO_PLL_CAL_VCO_PLL_CAL_VCO_Pos (0UL) /*!< Position of PLL_CAL_VCO field. */
#define RADIO_PLL_CAL_VCO_PLL_CAL_VCO_Msk (0x1FUL << RADIO_PLL_CAL_VCO_PLL_CAL_VCO_Pos) /*!< Bit mask of PLL_CAL_VCO field. */

/* Register: RADIO_LNB_OUT_SPI */
/* Description: Gain calibration */

/* Bits 11..8 :   */
#define RADIO_LNB_OUT_SPI_AAF_GAIN_Pos (8UL) /*!< Position of AAF_GAIN field. */
#define RADIO_LNB_OUT_SPI_AAF_GAIN_Msk (0xFUL << RADIO_LNB_OUT_SPI_AAF_GAIN_Pos) /*!< Bit mask of AAF_GAIN field. */

/* Bits 5..4 :   */
#define RADIO_LNB_OUT_SPI_MIX_GAIN_Pos (4UL) /*!< Position of MIX_GAIN field. */
#define RADIO_LNB_OUT_SPI_MIX_GAIN_Msk (0x3UL << RADIO_LNB_OUT_SPI_MIX_GAIN_Pos) /*!< Bit mask of MIX_GAIN field. */

/* Bits 2..0 : Readout of LNA gain setting. This is a function of received signal strength. */
#define RADIO_LNB_OUT_SPI_LNA_GAIN_Pos (0UL) /*!< Position of LNA_GAIN field. */
#define RADIO_LNB_OUT_SPI_LNA_GAIN_Msk (0x7UL << RADIO_LNB_OUT_SPI_LNA_GAIN_Pos) /*!< Bit mask of LNA_GAIN field. */

/* Register: RADIO_MISC_CAL_OUT1 */
/* Description: Misc cal readouts */

/* Bits 12..8 : Calibration value of 300 MHz ADC CLK generated by the CalibrationEngineCore when adcRingOscCalOverride = 0 */
#define RADIO_MISC_CAL_OUT1_CALSARRINGOSCSTATUS_Pos (8UL) /*!< Position of CALSARRINGOSCSTATUS field. */
#define RADIO_MISC_CAL_OUT1_CALSARRINGOSCSTATUS_Msk (0x1FUL << RADIO_MISC_CAL_OUT1_CALSARRINGOSCSTATUS_Pos) /*!< Bit mask of CALSARRINGOSCSTATUS field. */

/* Bits 4..2 : Calibration output of ring oscillator */
#define RADIO_MISC_CAL_OUT1_ADCCALCKC_Pos (2UL) /*!< Position of ADCCALCKC field. */
#define RADIO_MISC_CAL_OUT1_ADCCALCKC_Msk (0x7UL << RADIO_MISC_CAL_OUT1_ADCCALCKC_Pos) /*!< Bit mask of ADCCALCKC field. */
#define RADIO_MISC_CAL_OUT1_ADCCALCKC_CalCmp1V2 (0UL) /*!< CAL_CMP_1V2 */
#define RADIO_MISC_CAL_OUT1_ADCCALCKC_CkROscHigh1V2 (1UL) /*!< CK_ROSC_HIGH_1V2 */
#define RADIO_MISC_CAL_OUT1_ADCCALCKC_CkROscOn1V2 (2UL) /*!< CK_ROSC_ON_1V2 */

/* Bit 1 : High when AAF Q channel offset is positive : compare signal for calibration */
#define RADIO_MISC_CAL_OUT1_AAFDCCALQ_Pos (1UL) /*!< Position of AAFDCCALQ field. */
#define RADIO_MISC_CAL_OUT1_AAFDCCALQ_Msk (0x1UL << RADIO_MISC_CAL_OUT1_AAFDCCALQ_Pos) /*!< Bit mask of AAFDCCALQ field. */

/* Bit 0 : High when AAF I channel offset is positive : compare signal for calibration */
#define RADIO_MISC_CAL_OUT1_AAFDCCALI_Pos (0UL) /*!< Position of AAFDCCALI field. */
#define RADIO_MISC_CAL_OUT1_AAFDCCALI_Msk (0x1UL << RADIO_MISC_CAL_OUT1_AAFDCCALI_Pos) /*!< Bit mask of AAFDCCALI field. */

/* Register: RADIO_MISC_CAL_OUT2 */
/* Description: Misc cal readouts */

/* Bit 25 : ADC cal sign for Q */
#define RADIO_MISC_CAL_OUT2_ADCCALSIGNQSTATUS_Pos (25UL) /*!< Position of ADCCALSIGNQSTATUS field. */
#define RADIO_MISC_CAL_OUT2_ADCCALSIGNQSTATUS_Msk (0x1UL << RADIO_MISC_CAL_OUT2_ADCCALSIGNQSTATUS_Pos) /*!< Bit mask of ADCCALSIGNQSTATUS field. */

/* Bits 24..20 : ADC calibration current in 'Q' comparator. */
#define RADIO_MISC_CAL_OUT2_ADCCALCIQSTATUS_Pos (20UL) /*!< Position of ADCCALCIQSTATUS field. */
#define RADIO_MISC_CAL_OUT2_ADCCALCIQSTATUS_Msk (0x1FUL << RADIO_MISC_CAL_OUT2_ADCCALCIQSTATUS_Pos) /*!< Bit mask of ADCCALCIQSTATUS field. */

/* Bit 19 : AADC cal sign for I */
#define RADIO_MISC_CAL_OUT2_ADCCALSIGNISTATUS_Pos (19UL) /*!< Position of ADCCALSIGNISTATUS field. */
#define RADIO_MISC_CAL_OUT2_ADCCALSIGNISTATUS_Msk (0x1UL << RADIO_MISC_CAL_OUT2_ADCCALSIGNISTATUS_Pos) /*!< Bit mask of ADCCALSIGNISTATUS field. */

/* Bits 18..14 : ADC calibration current in 'I' comparator. */
#define RADIO_MISC_CAL_OUT2_ADCCALCIISTATUS_Pos (14UL) /*!< Position of ADCCALCIISTATUS field. */
#define RADIO_MISC_CAL_OUT2_ADCCALCIISTATUS_Msk (0x1FUL << RADIO_MISC_CAL_OUT2_ADCCALCIISTATUS_Pos) /*!< Bit mask of ADCCALCIISTATUS field. */

/* Bits 13..7 : dc calibration of I channel when aafCalOvrEn = 1 */
#define RADIO_MISC_CAL_OUT2_RFMIXDCCALISTATUS_Pos (7UL) /*!< Position of RFMIXDCCALISTATUS field. */
#define RADIO_MISC_CAL_OUT2_RFMIXDCCALISTATUS_Msk (0x7FUL << RADIO_MISC_CAL_OUT2_RFMIXDCCALISTATUS_Pos) /*!< Bit mask of RFMIXDCCALISTATUS field. */

/* Bits 6..0 : dc calibration of Q channel when aafCalOvrEn = 1 */
#define RADIO_MISC_CAL_OUT2_RFMIXDCCALQSTATUS_Pos (0UL) /*!< Position of RFMIXDCCALQSTATUS field. */
#define RADIO_MISC_CAL_OUT2_RFMIXDCCALQSTATUS_Msk (0x7FUL << RADIO_MISC_CAL_OUT2_RFMIXDCCALQSTATUS_Pos) /*!< Bit mask of RFMIXDCCALQSTATUS field. */

/* Register: RADIO_MISC_CAL_OUT3 */
/* Description: Misc cal readouts */

/* Bits 27..24 : Deprecated field -  Calibration value for AAF RC time constant */
#define RADIO_MISC_CAL_OUT3_AAFRCCALSTATUS_Pos (24UL) /*!< Position of AAFRCCALSTATUS field. */
#define RADIO_MISC_CAL_OUT3_AAFRCCALSTATUS_Msk (0xFUL << RADIO_MISC_CAL_OUT3_AAFRCCALSTATUS_Pos) /*!< Bit mask of AAFRCCALSTATUS field. */
#define RADIO_MISC_CAL_OUT3_AAFRCCALSTATUS_Low (0UL) /*!< lowest time constant */
#define RADIO_MISC_CAL_OUT3_AAFRCCALSTATUS_Normal (7UL) /*!< lnominal */
#define RADIO_MISC_CAL_OUT3_AAFRCCALSTATUS_High (15UL) /*!< highest time constant */

/* Register: RADIO_CFO_STAT */
/* Description: Carrier freq. offset estimate */

/* Bits 28..16 : Readout of last valid phase set in correlator (hypermode only) */
#define RADIO_CFO_STAT_PHASE_Pos (16UL) /*!< Position of PHASE field. */
#define RADIO_CFO_STAT_PHASE_Msk (0x1FFFUL << RADIO_CFO_STAT_PHASE_Pos) /*!< Bit mask of PHASE field. */

/* Bit 12 : 0: Standard mode was used last 1: Hypermode was last used */
#define RADIO_CFO_STAT_LASTDEMODACTIVE_Pos (12UL) /*!< Position of LASTDEMODACTIVE field. */
#define RADIO_CFO_STAT_LASTDEMODACTIVE_Msk (0x1UL << RADIO_CFO_STAT_LASTDEMODACTIVE_Pos) /*!< Bit mask of LASTDEMODACTIVE field. */

/* Bits 8..0 : Readout of last valid decision level set in BitSlicer */
#define RADIO_CFO_STAT_VALUE_Pos (0UL) /*!< Position of VALUE field. */
#define RADIO_CFO_STAT_VALUE_Msk (0x1FFUL << RADIO_CFO_STAT_VALUE_Pos) /*!< Bit mask of VALUE field. */

/* Register: RADIO_IQCAL_OUT */
/* Description: Test: IandQ gain/phase mismatch calibration values out */

/* Bit 12 : Mode last used */
#define RADIO_IQCAL_OUT_LASTDEMODACTIVE_Pos (12UL) /*!< Position of LASTDEMODACTIVE field. */
#define RADIO_IQCAL_OUT_LASTDEMODACTIVE_Msk (0x1UL << RADIO_IQCAL_OUT_LASTDEMODACTIVE_Pos) /*!< Bit mask of LASTDEMODACTIVE field. */
#define RADIO_IQCAL_OUT_LASTDEMODACTIVE_StandardMode (0UL) /*!< Standard mode last used */
#define RADIO_IQCAL_OUT_LASTDEMODACTIVE_HyperMode (1UL) /*!< Hyper mode last used */

/* Bit 11 : calibration succeed */
#define RADIO_IQCAL_OUT_CALOK_Pos (11UL) /*!< Position of CALOK field. */
#define RADIO_IQCAL_OUT_CALOK_Msk (0x1UL << RADIO_IQCAL_OUT_CALOK_Pos) /*!< Bit mask of CALOK field. */

/* Bit 10 : calibration finished */
#define RADIO_IQCAL_OUT_CALFIN_Pos (10UL) /*!< Position of CALFIN field. */
#define RADIO_IQCAL_OUT_CALFIN_Msk (0x1UL << RADIO_IQCAL_OUT_CALFIN_Pos) /*!< Bit mask of CALFIN field. */

/* Bits 9..5 : readout of IandQ gain calibration value */
#define RADIO_IQCAL_OUT_CALAMPOUT_Pos (5UL) /*!< Position of CALAMPOUT field. */
#define RADIO_IQCAL_OUT_CALAMPOUT_Msk (0x1FUL << RADIO_IQCAL_OUT_CALAMPOUT_Pos) /*!< Bit mask of CALAMPOUT field. */

/* Bits 4..0 : readout of IandQ phase calibration value */
#define RADIO_IQCAL_OUT_CALPHIOUT_Pos (0UL) /*!< Position of CALPHIOUT field. */
#define RADIO_IQCAL_OUT_CALPHIOUT_Msk (0x1FUL << RADIO_IQCAL_OUT_CALPHIOUT_Pos) /*!< Bit mask of CALPHIOUT field. */

/* Register: RADIO_PBCAL_OUT */
/* Description: Test: PB calibration values out */

/* Bit 4 : PBIAS ready flag (bias outputs stable) */
#define RADIO_PBCAL_OUT_PBREADY_Pos (4UL) /*!< Position of PBREADY field. */
#define RADIO_PBCAL_OUT_PBREADY_Msk (0x1UL << RADIO_PBCAL_OUT_PBREADY_Pos) /*!< Bit mask of PBREADY field. */

/* Register: RADIO_HYPSTDCHECKSTAT */
/* Description: Address Check Override */

/* Bit 24 : Valid flag bit */
#define RADIO_HYPSTDCHECKSTAT_VALID_Pos (24UL) /*!< Position of VALID field. */
#define RADIO_HYPSTDCHECKSTAT_VALID_Msk (0x1UL << RADIO_HYPSTDCHECKSTAT_VALID_Pos) /*!< Bit mask of VALID field. */

/* Bits 23..21 : Time distance bit clock cycles from AAmatchHyp. */
#define RADIO_HYPSTDCHECKSTAT_SPAM_Pos (21UL) /*!< Position of SPAM field. */
#define RADIO_HYPSTDCHECKSTAT_SPAM_Msk (0x7UL << RADIO_HYPSTDCHECKSTAT_SPAM_Pos) /*!< Bit mask of SPAM field. */

/* Bits 20..16 : Hamming distance between std demod AA15:0 and expected AA15:0. */
#define RADIO_HYPSTDCHECKSTAT_HAM_Pos (16UL) /*!< Position of HAM field. */
#define RADIO_HYPSTDCHECKSTAT_HAM_Msk (0x1FUL << RADIO_HYPSTDCHECKSTAT_HAM_Pos) /*!< Bit mask of HAM field. */

/* Bits 11..8 : Number of bits where Std and Hyper demodulator disagrees for maximum latency. */
#define RADIO_HYPSTDCHECKSTAT_PDUCHECK2_Pos (8UL) /*!< Position of PDUCHECK2 field. */
#define RADIO_HYPSTDCHECKSTAT_PDUCHECK2_Msk (0xFUL << RADIO_HYPSTDCHECKSTAT_PDUCHECK2_Pos) /*!< Bit mask of PDUCHECK2 field. */

/* Bits 7..4 : Number of bits where Std and Hyper demodulator disagrees for medium latency. */
#define RADIO_HYPSTDCHECKSTAT_PDUCHECK1_Pos (4UL) /*!< Position of PDUCHECK1 field. */
#define RADIO_HYPSTDCHECKSTAT_PDUCHECK1_Msk (0xFUL << RADIO_HYPSTDCHECKSTAT_PDUCHECK1_Pos) /*!< Bit mask of PDUCHECK1 field. */

/* Bits 3..0 : Number of bits where Std and Hyper demodulator disagrees for minimum latency. */
#define RADIO_HYPSTDCHECKSTAT_PDUCHECK0_Pos (0UL) /*!< Position of PDUCHECK0 field. */
#define RADIO_HYPSTDCHECKSTAT_PDUCHECK0_Msk (0xFUL << RADIO_HYPSTDCHECKSTAT_PDUCHECK0_Pos) /*!< Bit mask of PDUCHECK0 field. */

/* Register: RADIO_HYPSTDAADIFFVEC */
/* Description: Address Diff Vector */

/* Bits 15..0 : Hyper AA15:0 and Std AA15:0 differs. */
#define RADIO_HYPSTDAADIFFVEC_DIFF_Pos (0UL) /*!< Position of DIFF field. */
#define RADIO_HYPSTDAADIFFVEC_DIFF_Msk (0xFFFFUL << RADIO_HYPSTDAADIFFVEC_DIFF_Pos) /*!< Bit mask of DIFF field. */

/* Register: RADIO_PACKETPTR */
/* Description: Packet pointer */

/* Bits 31..0 : Packet pointer */
#define RADIO_PACKETPTR_PACKETPTR_Pos (0UL) /*!< Position of PACKETPTR field. */
#define RADIO_PACKETPTR_PACKETPTR_Msk (0xFFFFFFFFUL << RADIO_PACKETPTR_PACKETPTR_Pos) /*!< Bit mask of PACKETPTR field. */

/* Register: RADIO_FREQUENCY */
/* Description: Frequency */

/* Bit 8 : Channel map selection. */
#define RADIO_FREQUENCY_MAP_Pos (8UL) /*!< Position of MAP field. */
#define RADIO_FREQUENCY_MAP_Msk (0x1UL << RADIO_FREQUENCY_MAP_Pos) /*!< Bit mask of MAP field. */
#define RADIO_FREQUENCY_MAP_Default (0UL) /*!< Channel map between 2400 MHZ .. 2500 MHz */
#define RADIO_FREQUENCY_MAP_Low (1UL) /*!< Channel map between 2360 MHZ .. 2460 MHz */

/* Bits 6..0 : Radio channel frequency */
#define RADIO_FREQUENCY_FREQUENCY_Pos (0UL) /*!< Position of FREQUENCY field. */
#define RADIO_FREQUENCY_FREQUENCY_Msk (0x7FUL << RADIO_FREQUENCY_FREQUENCY_Pos) /*!< Bit mask of FREQUENCY field. */

/* Register: RADIO_TXPOWER */
/* Description: Output power */

/* Bits 7..0 : RADIO output power. */
#define RADIO_TXPOWER_TXPOWER_Pos (0UL) /*!< Position of TXPOWER field. */
#define RADIO_TXPOWER_TXPOWER_Msk (0xFFUL << RADIO_TXPOWER_TXPOWER_Pos) /*!< Bit mask of TXPOWER field. */
#define RADIO_TXPOWER_TXPOWER_0dBm (0x00UL) /*!< 0 dBm */
#define RADIO_TXPOWER_TXPOWER_Pos3dBm (0x03UL) /*!< +3 dBm */
#define RADIO_TXPOWER_TXPOWER_Pos4dBm (0x04UL) /*!< +4 dBm */
#define RADIO_TXPOWER_TXPOWER_Neg40dBm (0xD8UL) /*!< -40 dBm */
#define RADIO_TXPOWER_TXPOWER_Neg20dBm (0xECUL) /*!< -20 dBm */
#define RADIO_TXPOWER_TXPOWER_Neg16dBm (0xF0UL) /*!< -16 dBm */
#define RADIO_TXPOWER_TXPOWER_Neg12dBm (0xF4UL) /*!< -12 dBm */
#define RADIO_TXPOWER_TXPOWER_Neg8dBm (0xF8UL) /*!< -8 dBm */
#define RADIO_TXPOWER_TXPOWER_Neg4dBm (0xFCUL) /*!< -4 dBm */
#define RADIO_TXPOWER_TXPOWER_Neg30dBm (0xFFUL) /*!< Deprecated enumerator -  -40 dBm */

/* Register: RADIO_MODE */
/* Description: Data rate and modulation */

/* Bits 3..0 : Radio data rate and modulation setting. The radio supports Frequency-shift Keying (FSK) modulation. */
#define RADIO_MODE_MODE_Pos (0UL) /*!< Position of MODE field. */
#define RADIO_MODE_MODE_Msk (0xFUL << RADIO_MODE_MODE_Pos) /*!< Bit mask of MODE field. */
#define RADIO_MODE_MODE_Nrf_1Mbit (0UL) /*!< 1 Mbit/s Nordic proprietary radio mode */
#define RADIO_MODE_MODE_Nrf_2Mbit (1UL) /*!< 2 Mbit/s Nordic proprietary radio mode */
#define RADIO_MODE_MODE_Nrf_250Kbit (2UL) /*!< Deprecated enumerator -  250 kbit/s Nordic proprietary radio mode */
#define RADIO_MODE_MODE_Ble_1Mbit (3UL) /*!< 1 Mbit/s Bluetooth Low Energy */
#define RADIO_MODE_MODE_Ble_2Mbit (4UL) /*!< 2 Mbit/s Bluetooth Low Energy */

/* Register: RADIO_PCNF0 */
/* Description: Packet configuration register 0 */

/* Bit 24 : Length of preamble on air. Decision point: TASKS_START task */
#define RADIO_PCNF0_PLEN_Pos (24UL) /*!< Position of PLEN field. */
#define RADIO_PCNF0_PLEN_Msk (0x1UL << RADIO_PCNF0_PLEN_Pos) /*!< Bit mask of PLEN field. */
#define RADIO_PCNF0_PLEN_8bit (0UL) /*!< 8-bit preamble */
#define RADIO_PCNF0_PLEN_16bit (1UL) /*!< 16-bit preamble */

/* Bit 20 : Include or exclude S1 field in RAM */
#define RADIO_PCNF0_S1INCL_Pos (20UL) /*!< Position of S1INCL field. */
#define RADIO_PCNF0_S1INCL_Msk (0x1UL << RADIO_PCNF0_S1INCL_Pos) /*!< Bit mask of S1INCL field. */
#define RADIO_PCNF0_S1INCL_Automatic (0UL) /*!< Include S1 field in RAM only if S1LEN &gt; 0 */
#define RADIO_PCNF0_S1INCL_Include (1UL) /*!< Always include S1 field in RAM independent of S1LEN */

/* Bits 19..16 : Length on air of S1 field in number of bits. */
#define RADIO_PCNF0_S1LEN_Pos (16UL) /*!< Position of S1LEN field. */
#define RADIO_PCNF0_S1LEN_Msk (0xFUL << RADIO_PCNF0_S1LEN_Pos) /*!< Bit mask of S1LEN field. */

/* Bit 12 : Include or exclude S0 field in RAM */
#define RADIO_PCNF0_S0INCL_Pos (12UL) /*!< Position of S0INCL field. */
#define RADIO_PCNF0_S0INCL_Msk (0x1UL << RADIO_PCNF0_S0INCL_Pos) /*!< Bit mask of S0INCL field. */
#define RADIO_PCNF0_S0INCL_Automatic (0UL) /*!< Include S0 field only if S0LEN &gt; 0 */

/* Bit 8 : Length on air of S0 field in number of bytes. */
#define RADIO_PCNF0_S0LEN_Pos (8UL) /*!< Position of S0LEN field. */
#define RADIO_PCNF0_S0LEN_Msk (0x1UL << RADIO_PCNF0_S0LEN_Pos) /*!< Bit mask of S0LEN field. */

/* Bit 4 : Include or exclude LENGTH field in RAM */
#define RADIO_PCNF0_LENGTHINCL_Pos (4UL) /*!< Position of LENGTHINCL field. */
#define RADIO_PCNF0_LENGTHINCL_Msk (0x1UL << RADIO_PCNF0_LENGTHINCL_Pos) /*!< Bit mask of LENGTHINCL field. */
#define RADIO_PCNF0_LENGTHINCL_Automatic (0UL) /*!< Include LENGTH field in RAM only if LFLEN &gt; 0 */

/* Bits 3..0 : Length on air of LENGTH field in number of bits. */
#define RADIO_PCNF0_LFLEN_Pos (0UL) /*!< Position of LFLEN field. */
#define RADIO_PCNF0_LFLEN_Msk (0xFUL << RADIO_PCNF0_LFLEN_Pos) /*!< Bit mask of LFLEN field. */

/* Register: RADIO_PCNF1 */
/* Description: Packet configuration register 1 */

/* Bit 25 : Enable or disable packet whitening */
#define RADIO_PCNF1_WHITEEN_Pos (25UL) /*!< Position of WHITEEN field. */
#define RADIO_PCNF1_WHITEEN_Msk (0x1UL << RADIO_PCNF1_WHITEEN_Pos) /*!< Bit mask of WHITEEN field. */
#define RADIO_PCNF1_WHITEEN_Disabled (0UL) /*!< Disable */
#define RADIO_PCNF1_WHITEEN_Enabled (1UL) /*!< Enable */

/* Bit 24 : On air endianness of packet, this applies to the S0, LENGTH, S1 and the PAYLOAD fields. */
#define RADIO_PCNF1_ENDIAN_Pos (24UL) /*!< Position of ENDIAN field. */
#define RADIO_PCNF1_ENDIAN_Msk (0x1UL << RADIO_PCNF1_ENDIAN_Pos) /*!< Bit mask of ENDIAN field. */
#define RADIO_PCNF1_ENDIAN_Little (0UL) /*!< Least Significant bit on air first */
#define RADIO_PCNF1_ENDIAN_Big (1UL) /*!< Most significant bit on air first */

/* Bits 18..16 : Base address length in number of bytes */
#define RADIO_PCNF1_BALEN_Pos (16UL) /*!< Position of BALEN field. */
#define RADIO_PCNF1_BALEN_Msk (0x7UL << RADIO_PCNF1_BALEN_Pos) /*!< Bit mask of BALEN field. */

/* Bits 15..8 : Static length in number of bytes */
#define RADIO_PCNF1_STATLEN_Pos (8UL) /*!< Position of STATLEN field. */
#define RADIO_PCNF1_STATLEN_Msk (0xFFUL << RADIO_PCNF1_STATLEN_Pos) /*!< Bit mask of STATLEN field. */

/* Bits 7..0 : Maximum length of packet payload. If the packet payload is larger than MAXLEN, the radio will truncate the payload to MAXLEN. */
#define RADIO_PCNF1_MAXLEN_Pos (0UL) /*!< Position of MAXLEN field. */
#define RADIO_PCNF1_MAXLEN_Msk (0xFFUL << RADIO_PCNF1_MAXLEN_Pos) /*!< Bit mask of MAXLEN field. */

/* Register: RADIO_BASE0 */
/* Description: Base address 0 */

/* Bits 31..0 : Base address 0 */
#define RADIO_BASE0_BASE0_Pos (0UL) /*!< Position of BASE0 field. */
#define RADIO_BASE0_BASE0_Msk (0xFFFFFFFFUL << RADIO_BASE0_BASE0_Pos) /*!< Bit mask of BASE0 field. */

/* Register: RADIO_BASE1 */
/* Description: Base address 1 */

/* Bits 31..0 : Base address 1 */
#define RADIO_BASE1_BASE1_Pos (0UL) /*!< Position of BASE1 field. */
#define RADIO_BASE1_BASE1_Msk (0xFFFFFFFFUL << RADIO_BASE1_BASE1_Pos) /*!< Bit mask of BASE1 field. */

/* Register: RADIO_PREFIX0 */
/* Description: Prefixes bytes for logical addresses 0-3 */

/* Bits 31..24 : Address prefix 3. */
#define RADIO_PREFIX0_AP3_Pos (24UL) /*!< Position of AP3 field. */
#define RADIO_PREFIX0_AP3_Msk (0xFFUL << RADIO_PREFIX0_AP3_Pos) /*!< Bit mask of AP3 field. */

/* Bits 23..16 : Address prefix 2. */
#define RADIO_PREFIX0_AP2_Pos (16UL) /*!< Position of AP2 field. */
#define RADIO_PREFIX0_AP2_Msk (0xFFUL << RADIO_PREFIX0_AP2_Pos) /*!< Bit mask of AP2 field. */

/* Bits 15..8 : Address prefix 1. */
#define RADIO_PREFIX0_AP1_Pos (8UL) /*!< Position of AP1 field. */
#define RADIO_PREFIX0_AP1_Msk (0xFFUL << RADIO_PREFIX0_AP1_Pos) /*!< Bit mask of AP1 field. */

/* Bits 7..0 : Address prefix 0. */
#define RADIO_PREFIX0_AP0_Pos (0UL) /*!< Position of AP0 field. */
#define RADIO_PREFIX0_AP0_Msk (0xFFUL << RADIO_PREFIX0_AP0_Pos) /*!< Bit mask of AP0 field. */

/* Register: RADIO_PREFIX1 */
/* Description: Prefixes bytes for logical addresses 4-7 */

/* Bits 31..24 : Address prefix 7. */
#define RADIO_PREFIX1_AP7_Pos (24UL) /*!< Position of AP7 field. */
#define RADIO_PREFIX1_AP7_Msk (0xFFUL << RADIO_PREFIX1_AP7_Pos) /*!< Bit mask of AP7 field. */

/* Bits 23..16 : Address prefix 6. */
#define RADIO_PREFIX1_AP6_Pos (16UL) /*!< Position of AP6 field. */
#define RADIO_PREFIX1_AP6_Msk (0xFFUL << RADIO_PREFIX1_AP6_Pos) /*!< Bit mask of AP6 field. */

/* Bits 15..8 : Address prefix 5. */
#define RADIO_PREFIX1_AP5_Pos (8UL) /*!< Position of AP5 field. */
#define RADIO_PREFIX1_AP5_Msk (0xFFUL << RADIO_PREFIX1_AP5_Pos) /*!< Bit mask of AP5 field. */

/* Bits 7..0 : Address prefix 4. */
#define RADIO_PREFIX1_AP4_Pos (0UL) /*!< Position of AP4 field. */
#define RADIO_PREFIX1_AP4_Msk (0xFFUL << RADIO_PREFIX1_AP4_Pos) /*!< Bit mask of AP4 field. */

/* Register: RADIO_TXADDRESS */
/* Description: Transmit address select */

/* Bits 2..0 : Transmit address select */
#define RADIO_TXADDRESS_TXADDRESS_Pos (0UL) /*!< Position of TXADDRESS field. */
#define RADIO_TXADDRESS_TXADDRESS_Msk (0x7UL << RADIO_TXADDRESS_TXADDRESS_Pos) /*!< Bit mask of TXADDRESS field. */

/* Register: RADIO_RXADDRESSES */
/* Description: Receive address select */

/* Bit 16 : Hypermode settings */
#define RADIO_RXADDRESSES_HYPER_Pos (16UL) /*!< Position of HYPER field. */
#define RADIO_RXADDRESSES_HYPER_Msk (0x1UL << RADIO_RXADDRESSES_HYPER_Pos) /*!< Bit mask of HYPER field. */
#define RADIO_RXADDRESSES_HYPER_B0 (0UL) /*!< Use hypermode for address ADDR0 (base address 0 RADIO.BASE0) */
#define RADIO_RXADDRESSES_HYPER_B1 (1UL) /*!< From all of the enabled addresses among ADDR1 through ADDR7, the address ADDRn with the highest index number 'n' will use hypermode (base address 1 RADIO.BASE1) */

/* Bit 7 : Enable or disable reception on logical address 7. */
#define RADIO_RXADDRESSES_ADDR7_Pos (7UL) /*!< Position of ADDR7 field. */
#define RADIO_RXADDRESSES_ADDR7_Msk (0x1UL << RADIO_RXADDRESSES_ADDR7_Pos) /*!< Bit mask of ADDR7 field. */
#define RADIO_RXADDRESSES_ADDR7_Disabled (0UL) /*!< Disable */
#define RADIO_RXADDRESSES_ADDR7_Enabled (1UL) /*!< Enable */

/* Bit 6 : Enable or disable reception on logical address 6. */
#define RADIO_RXADDRESSES_ADDR6_Pos (6UL) /*!< Position of ADDR6 field. */
#define RADIO_RXADDRESSES_ADDR6_Msk (0x1UL << RADIO_RXADDRESSES_ADDR6_Pos) /*!< Bit mask of ADDR6 field. */
#define RADIO_RXADDRESSES_ADDR6_Disabled (0UL) /*!< Disable */
#define RADIO_RXADDRESSES_ADDR6_Enabled (1UL) /*!< Enable */

/* Bit 5 : Enable or disable reception on logical address 5. */
#define RADIO_RXADDRESSES_ADDR5_Pos (5UL) /*!< Position of ADDR5 field. */
#define RADIO_RXADDRESSES_ADDR5_Msk (0x1UL << RADIO_RXADDRESSES_ADDR5_Pos) /*!< Bit mask of ADDR5 field. */
#define RADIO_RXADDRESSES_ADDR5_Disabled (0UL) /*!< Disable */
#define RADIO_RXADDRESSES_ADDR5_Enabled (1UL) /*!< Enable */

/* Bit 4 : Enable or disable reception on logical address 4. */
#define RADIO_RXADDRESSES_ADDR4_Pos (4UL) /*!< Position of ADDR4 field. */
#define RADIO_RXADDRESSES_ADDR4_Msk (0x1UL << RADIO_RXADDRESSES_ADDR4_Pos) /*!< Bit mask of ADDR4 field. */
#define RADIO_RXADDRESSES_ADDR4_Disabled (0UL) /*!< Disable */
#define RADIO_RXADDRESSES_ADDR4_Enabled (1UL) /*!< Enable */

/* Bit 3 : Enable or disable reception on logical address 3. */
#define RADIO_RXADDRESSES_ADDR3_Pos (3UL) /*!< Position of ADDR3 field. */
#define RADIO_RXADDRESSES_ADDR3_Msk (0x1UL << RADIO_RXADDRESSES_ADDR3_Pos) /*!< Bit mask of ADDR3 field. */
#define RADIO_RXADDRESSES_ADDR3_Disabled (0UL) /*!< Disable */
#define RADIO_RXADDRESSES_ADDR3_Enabled (1UL) /*!< Enable */

/* Bit 2 : Enable or disable reception on logical address 2. */
#define RADIO_RXADDRESSES_ADDR2_Pos (2UL) /*!< Position of ADDR2 field. */
#define RADIO_RXADDRESSES_ADDR2_Msk (0x1UL << RADIO_RXADDRESSES_ADDR2_Pos) /*!< Bit mask of ADDR2 field. */
#define RADIO_RXADDRESSES_ADDR2_Disabled (0UL) /*!< Disable */
#define RADIO_RXADDRESSES_ADDR2_Enabled (1UL) /*!< Enable */

/* Bit 1 : Enable or disable reception on logical address 1. */
#define RADIO_RXADDRESSES_ADDR1_Pos (1UL) /*!< Position of ADDR1 field. */
#define RADIO_RXADDRESSES_ADDR1_Msk (0x1UL << RADIO_RXADDRESSES_ADDR1_Pos) /*!< Bit mask of ADDR1 field. */
#define RADIO_RXADDRESSES_ADDR1_Disabled (0UL) /*!< Disable */
#define RADIO_RXADDRESSES_ADDR1_Enabled (1UL) /*!< Enable */

/* Bit 0 : Enable or disable reception on logical address 0. */
#define RADIO_RXADDRESSES_ADDR0_Pos (0UL) /*!< Position of ADDR0 field. */
#define RADIO_RXADDRESSES_ADDR0_Msk (0x1UL << RADIO_RXADDRESSES_ADDR0_Pos) /*!< Bit mask of ADDR0 field. */
#define RADIO_RXADDRESSES_ADDR0_Disabled (0UL) /*!< Disable */
#define RADIO_RXADDRESSES_ADDR0_Enabled (1UL) /*!< Enable */

/* Register: RADIO_CRCCNF */
/* Description: CRC configuration */

/* Bit 8 : Include or exclude packet address field out of CRC calculation. */
#define RADIO_CRCCNF_SKIPADDR_Pos (8UL) /*!< Position of SKIPADDR field. */
#define RADIO_CRCCNF_SKIPADDR_Msk (0x1UL << RADIO_CRCCNF_SKIPADDR_Pos) /*!< Bit mask of SKIPADDR field. */
#define RADIO_CRCCNF_SKIPADDR_Include (0UL) /*!< CRC calculation includes address field */
#define RADIO_CRCCNF_SKIPADDR_Skip (1UL) /*!< CRC calculation does not include address field. The CRC calculation will start at the first byte after the address. */

/* Bits 1..0 : CRC length in number of bytes. */
#define RADIO_CRCCNF_LEN_Pos (0UL) /*!< Position of LEN field. */
#define RADIO_CRCCNF_LEN_Msk (0x3UL << RADIO_CRCCNF_LEN_Pos) /*!< Bit mask of LEN field. */
#define RADIO_CRCCNF_LEN_Disabled (0UL) /*!< CRC length is zero and CRC calculation is disabled */
#define RADIO_CRCCNF_LEN_One (1UL) /*!< CRC length is one byte and CRC calculation is enabled */
#define RADIO_CRCCNF_LEN_Two (2UL) /*!< CRC length is two bytes and CRC calculation is enabled */
#define RADIO_CRCCNF_LEN_Three (3UL) /*!< CRC length is three bytes and CRC calculation is enabled */

/* Register: RADIO_CRCPOLY */
/* Description: CRC polynomial */

/* Bits 23..0 : CRC polynomial */
#define RADIO_CRCPOLY_CRCPOLY_Pos (0UL) /*!< Position of CRCPOLY field. */
#define RADIO_CRCPOLY_CRCPOLY_Msk (0xFFFFFFUL << RADIO_CRCPOLY_CRCPOLY_Pos) /*!< Bit mask of CRCPOLY field. */

/* Register: RADIO_CRCINIT */
/* Description: CRC initial value */

/* Bits 23..0 : CRC initial value */
#define RADIO_CRCINIT_CRCINIT_Pos (0UL) /*!< Position of CRCINIT field. */
#define RADIO_CRCINIT_CRCINIT_Msk (0xFFFFFFUL << RADIO_CRCINIT_CRCINIT_Pos) /*!< Bit mask of CRCINIT field. */

/* Register: RADIO_TIFS */
/* Description: Inter Frame Spacing in us */

/* Bits 7..0 : Inter Frame Spacing in us */
#define RADIO_TIFS_TIFS_Pos (0UL) /*!< Position of TIFS field. */
#define RADIO_TIFS_TIFS_Msk (0xFFUL << RADIO_TIFS_TIFS_Pos) /*!< Bit mask of TIFS field. */

/* Register: RADIO_RSSISAMPLE */
/* Description: RSSI sample */

/* Bits 6..0 : RSSI sample */
#define RADIO_RSSISAMPLE_RSSISAMPLE_Pos (0UL) /*!< Position of RSSISAMPLE field. */
#define RADIO_RSSISAMPLE_RSSISAMPLE_Msk (0x7FUL << RADIO_RSSISAMPLE_RSSISAMPLE_Pos) /*!< Bit mask of RSSISAMPLE field. */

/* Register: RADIO_RSSI_CONFIG */
/* Description: RSSI resolution */

/* Bits 14..8 : RSSI calibration value */
#define RADIO_RSSI_CONFIG_RSSICAL_Pos (8UL) /*!< Position of RSSICAL field. */
#define RADIO_RSSI_CONFIG_RSSICAL_Msk (0x7FUL << RADIO_RSSI_CONFIG_RSSICAL_Pos) /*!< Bit mask of RSSICAL field. */

/* Register: RADIO_STATE */
/* Description: Current radio state */

/* Bits 3..0 : Current radio state */
#define RADIO_STATE_STATE_Pos (0UL) /*!< Position of STATE field. */
#define RADIO_STATE_STATE_Msk (0xFUL << RADIO_STATE_STATE_Pos) /*!< Bit mask of STATE field. */
#define RADIO_STATE_STATE_Disabled (0UL) /*!< RADIO is in the Disabled state */
#define RADIO_STATE_STATE_RxRu (1UL) /*!< RADIO is in the RXRU state */
#define RADIO_STATE_STATE_RxIdle (2UL) /*!< RADIO is in the RXIDLE state */
#define RADIO_STATE_STATE_Rx (3UL) /*!< RADIO is in the RX state */
#define RADIO_STATE_STATE_RxDisable (4UL) /*!< RADIO is in the RXDISABLED state */
#define RADIO_STATE_STATE_TxRu (9UL) /*!< RADIO is in the TXRU state */
#define RADIO_STATE_STATE_TxIdle (10UL) /*!< RADIO is in the TXIDLE state */
#define RADIO_STATE_STATE_Tx (11UL) /*!< RADIO is in the TX state */
#define RADIO_STATE_STATE_TxDisable (12UL) /*!< RADIO is in the TXDISABLED state */

/* Register: RADIO_DATAWHITEIV */
/* Description: Data whitening initial value */

/* Bits 6..0 : Data whitening initial value. Bit 6 is hard-wired to '1', writing '0' to it has no effect, and it will always be read back and used by the device as '1'. */
#define RADIO_DATAWHITEIV_DATAWHITEIV_Pos (0UL) /*!< Position of DATAWHITEIV field. */
#define RADIO_DATAWHITEIV_DATAWHITEIV_Msk (0x7FUL << RADIO_DATAWHITEIV_DATAWHITEIV_Pos) /*!< Bit mask of DATAWHITEIV field. */

/* Register: RADIO_DMA_MAXLEN */
/* Description: DMA max length */

/* Bits 8..0 : Maximum size of DMA transfer in number of bytes */
#define RADIO_DMA_MAXLEN_DMA_MAXLEN_Pos (0UL) /*!< Position of DMA_MAXLEN field. */
#define RADIO_DMA_MAXLEN_DMA_MAXLEN_Msk (0x1FFUL << RADIO_DMA_MAXLEN_DMA_MAXLEN_Pos) /*!< Bit mask of DMA_MAXLEN field. */

/* Register: RADIO_BCC */
/* Description: Bit counter compare */

/* Bits 31..0 : Bit counter compare */
#define RADIO_BCC_BCC_Pos (0UL) /*!< Position of BCC field. */
#define RADIO_BCC_BCC_Msk (0xFFFFFFFFUL << RADIO_BCC_BCC_Pos) /*!< Bit mask of BCC field. */

/* Register: RADIO_AACHKOVERRIDE */
/* Description: Address Check Override */

/* Bit 21 : Enable super tight address window for hyper mode */
#define RADIO_AACHKOVERRIDE_PERFECTADDRWINDOW_Pos (21UL) /*!< Position of PERFECTADDRWINDOW field. */
#define RADIO_AACHKOVERRIDE_PERFECTADDRWINDOW_Msk (0x1UL << RADIO_AACHKOVERRIDE_PERFECTADDRWINDOW_Pos) /*!< Bit mask of PERFECTADDRWINDOW field. */
#define RADIO_AACHKOVERRIDE_PERFECTADDRWINDOW_DISABLE (0UL) /*!< The address window has some margin */
#define RADIO_AACHKOVERRIDE_PERFECTADDRWINDOW_ENABLE (1UL) /*!< The address window spans only one bit */

/* Bit 20 : Allow address match from standard mode before buffer has been filled */
#define RADIO_AACHKOVERRIDE_ALLOWADDRMATCHEARLY_Pos (20UL) /*!< Position of ALLOWADDRMATCHEARLY field. */
#define RADIO_AACHKOVERRIDE_ALLOWADDRMATCHEARLY_Msk (0x1UL << RADIO_AACHKOVERRIDE_ALLOWADDRMATCHEARLY_Pos) /*!< Bit mask of ALLOWADDRMATCHEARLY field. */
#define RADIO_AACHKOVERRIDE_ALLOWADDRMATCHEARLY_DISABLE (0UL) /*!< Do not allow */
#define RADIO_AACHKOVERRIDE_ALLOWADDRMATCHEARLY_ENABLE (1UL) /*!< Allow */

/* Bit 19 : Disable std AA checker */
#define RADIO_AACHKOVERRIDE_DISABLE_Pos (19UL) /*!< Position of DISABLE field. */
#define RADIO_AACHKOVERRIDE_DISABLE_Msk (0x1UL << RADIO_AACHKOVERRIDE_DISABLE_Pos) /*!< Bit mask of DISABLE field. */
#define RADIO_AACHKOVERRIDE_DISABLE_ENABLE (0UL) /*!< Enable std AA checker */
#define RADIO_AACHKOVERRIDE_DISABLE_DISABLE (1UL) /*!< Disable std AA checker */

/* Bit 18 : Bypass majority vote */
#define RADIO_AACHKOVERRIDE_BYPASS_Pos (18UL) /*!< Position of BYPASS field. */
#define RADIO_AACHKOVERRIDE_BYPASS_Msk (0x1UL << RADIO_AACHKOVERRIDE_BYPASS_Pos) /*!< Bit mask of BYPASS field. */
#define RADIO_AACHKOVERRIDE_BYPASS_PASS (0UL) /*!< Pass through majority vote */
#define RADIO_AACHKOVERRIDE_BYPASS_BYPASS (1UL) /*!< Bypass through majority vote */

/* Bit 17 : Enable address match range */
#define RADIO_AACHKOVERRIDE_ENABLE_Pos (17UL) /*!< Position of ENABLE field. */
#define RADIO_AACHKOVERRIDE_ENABLE_Msk (0x1UL << RADIO_AACHKOVERRIDE_ENABLE_Pos) /*!< Bit mask of ENABLE field. */
#define RADIO_AACHKOVERRIDE_ENABLE_AA15_31 (0UL) /*!< Enable AA15..31 */
#define RADIO_AACHKOVERRIDE_ENABLE_AA14_31 (1UL) /*!< Enable AA14..31 */

/* Bit 16 : Select address match range */
#define RADIO_AACHKOVERRIDE_SELECT_Pos (16UL) /*!< Position of SELECT field. */
#define RADIO_AACHKOVERRIDE_SELECT_Msk (0x1UL << RADIO_AACHKOVERRIDE_SELECT_Pos) /*!< Bit mask of SELECT field. */
#define RADIO_AACHKOVERRIDE_SELECT_AA15_31 (0UL) /*!< Select AA15..31 */
#define RADIO_AACHKOVERRIDE_SELECT_AA14_31 (1UL) /*!< Select AA14..31 */

/* Bits 9..0 : Defines maximum number of PDU bits to compare between Hyper and Std demodulator. */
#define RADIO_AACHKOVERRIDE_ENDCOUNTHYPSTD_Pos (0UL) /*!< Position of ENDCOUNTHYPSTD field. */
#define RADIO_AACHKOVERRIDE_ENDCOUNTHYPSTD_Msk (0x3FFUL << RADIO_AACHKOVERRIDE_ENDCOUNTHYPSTD_Pos) /*!< Bit mask of ENDCOUNTHYPSTD field. */

/* Register: RADIO_PB_TEST */
/* Description: Test: PB calibration */

/* Bits 10..8 : Trim code for VBG to FS_VCOREG */
#define RADIO_PB_TEST_VBGTRIM_Pos (8UL) /*!< Position of VBGTRIM field. */
#define RADIO_PB_TEST_VBGTRIM_Msk (0x7UL << RADIO_PB_TEST_VBGTRIM_Pos) /*!< Bit mask of VBGTRIM field. */

/* Bits 7..4 : Trim code for IBPS currents */
#define RADIO_PB_TEST_PBIBPSTRIM_Pos (4UL) /*!< Position of PBIBPSTRIM field. */
#define RADIO_PB_TEST_PBIBPSTRIM_Msk (0xFUL << RADIO_PB_TEST_PBIBPSTRIM_Pos) /*!< Bit mask of PBIBPSTRIM field. */

/* Register: RADIO_PACKET_CNTR1 */
/* Description: Test: PER msrmnts */

/* Bits 31..16 : The number of times that the RxDCorr has been enabled */
#define RADIO_PACKET_CNTR1_CNTENDBC_Pos (16UL) /*!< Position of CNTENDBC field. */
#define RADIO_PACKET_CNTR1_CNTENDBC_Msk (0xFFFFUL << RADIO_PACKET_CNTR1_CNTENDBC_Pos) /*!< Bit mask of CNTENDBC field. */

/* Bits 15..0 : Packet counter value */
#define RADIO_PACKET_CNTR1_COUNTER_Pos (0UL) /*!< Position of COUNTER field. */
#define RADIO_PACKET_CNTR1_COUNTER_Msk (0xFFFFUL << RADIO_PACKET_CNTR1_COUNTER_Pos) /*!< Bit mask of COUNTER field. */

/* Register: RADIO_PACKET_CNTR2 */
/* Description: Test: PER msrmnts */

/* Bits 31..16 : Packet counter value (number of packets with addressmatch ok) */
#define RADIO_PACKET_CNTR2_NORMAL_Pos (16UL) /*!< Position of NORMAL field. */
#define RADIO_PACKET_CNTR2_NORMAL_Msk (0xFFFFUL << RADIO_PACKET_CNTR2_NORMAL_Pos) /*!< Bit mask of NORMAL field. */

/* Bits 15..0 : Packet counter value (number of packets detected (hypermode)) */
#define RADIO_PACKET_CNTR2_HYPER_Pos (0UL) /*!< Position of HYPER field. */
#define RADIO_PACKET_CNTR2_HYPER_Msk (0xFFFFUL << RADIO_PACKET_CNTR2_HYPER_Pos) /*!< Bit mask of HYPER field. */

/* Register: RADIO_IQCAL_TEST */
/* Description: Test: IandQ gain/phase mismatch calibration control */

/* Bits 15..8 : Settling time (in number of 16 MHz clock periods) for rssi input to stabilize */
#define RADIO_IQCAL_TEST_IQCALWAIT_Pos (8UL) /*!< Position of IQCALWAIT field. */
#define RADIO_IQCAL_TEST_IQCALWAIT_Msk (0xFFUL << RADIO_IQCAL_TEST_IQCALWAIT_Pos) /*!< Bit mask of IQCALWAIT field. */

/* Bits 2..1 : IQCal search mode */
#define RADIO_IQCAL_TEST_MODE_Pos (1UL) /*!< Position of MODE field. */
#define RADIO_IQCAL_TEST_MODE_Msk (0x3UL << RADIO_IQCAL_TEST_MODE_Pos) /*!< Bit mask of MODE field. */

/* Bit 0 : Run IanQ calibration procedure */
#define RADIO_IQCAL_TEST_RUN_Pos (0UL) /*!< Position of RUN field. */
#define RADIO_IQCAL_TEST_RUN_Msk (0x1UL << RADIO_IQCAL_TEST_RUN_Pos) /*!< Bit mask of RUN field. */

/* Register: RADIO_DBC_COEFFS */
/* Description: Test and Debug: DBC coefficients override */

/* Bit 11 : paddrUpdateOvrVal */
#define RADIO_DBC_COEFFS_PADDRUPDATEOVRVAL_Pos (11UL) /*!< Position of PADDRUPDATEOVRVAL field. */
#define RADIO_DBC_COEFFS_PADDRUPDATEOVRVAL_Msk (0x1UL << RADIO_DBC_COEFFS_PADDRUPDATEOVRVAL_Pos) /*!< Bit mask of PADDRUPDATEOVRVAL field. */

/* Bit 10 : paddrUpdateOvrEn */
#define RADIO_DBC_COEFFS_PADDRUPDATEOVREN_Pos (10UL) /*!< Position of PADDRUPDATEOVREN field. */
#define RADIO_DBC_COEFFS_PADDRUPDATEOVREN_Msk (0x1UL << RADIO_DBC_COEFFS_PADDRUPDATEOVREN_Pos) /*!< Bit mask of PADDRUPDATEOVREN field. */

/* Bit 9 : DBCCoeffResetWritePtr */
#define RADIO_DBC_COEFFS_DBCCOEFFRESETWRITEPTR_Pos (9UL) /*!< Position of DBCCOEFFRESETWRITEPTR field. */
#define RADIO_DBC_COEFFS_DBCCOEFFRESETWRITEPTR_Msk (0x1UL << RADIO_DBC_COEFFS_DBCCOEFFRESETWRITEPTR_Pos) /*!< Bit mask of DBCCOEFFRESETWRITEPTR field. */

/* Bit 8 : DBCCoeffDoNotWrite */
#define RADIO_DBC_COEFFS_DBCCOEFFDONOTWRITE_Pos (8UL) /*!< Position of DBCCOEFFDONOTWRITE field. */
#define RADIO_DBC_COEFFS_DBCCOEFFDONOTWRITE_Msk (0x1UL << RADIO_DBC_COEFFS_DBCCOEFFDONOTWRITE_Pos) /*!< Bit mask of DBCCOEFFDONOTWRITE field. */

/* Bits 7..0 : DBCCoeffData */
#define RADIO_DBC_COEFFS_DBCCOEFFDATA_Pos (0UL) /*!< Position of DBCCOEFFDATA field. */
#define RADIO_DBC_COEFFS_DBCCOEFFDATA_Msk (0xFFUL << RADIO_DBC_COEFFS_DBCCOEFFDATA_Pos) /*!< Bit mask of DBCCOEFFDATA field. */

/* Register: RADIO_FS_CONFIG */
/* Description: Fs config (ana+dig) */

/* Bits 28..24 : Override value for external control of VCO calibration, 0x00 for off */
#define RADIO_FS_CONFIG_FSVCOCAPOVRD_Pos (24UL) /*!< Position of FSVCOCAPOVRD field. */
#define RADIO_FS_CONFIG_FSVCOCAPOVRD_Msk (0x1FUL << RADIO_FS_CONFIG_FSVCOCAPOVRD_Pos) /*!< Bit mask of FSVCOCAPOVRD field. */

/* Bits 23..22 : Override modulator gain distribution (between analog/digital) */
#define RADIO_FS_CONFIG_FSVCOKMODOVRD_Pos (22UL) /*!< Position of FSVCOKMODOVRD field. */
#define RADIO_FS_CONFIG_FSVCOKMODOVRD_Msk (0x3UL << RADIO_FS_CONFIG_FSVCOKMODOVRD_Pos) /*!< Bit mask of FSVCOKMODOVRD field. */

/* Bits 21..18 : programmable delay */
#define RADIO_FS_CONFIG_FSMODULATORDELAY_Pos (18UL) /*!< Position of FSMODULATORDELAY field. */
#define RADIO_FS_CONFIG_FSMODULATORDELAY_Msk (0xFUL << RADIO_FS_CONFIG_FSMODULATORDELAY_Pos) /*!< Bit mask of FSMODULATORDELAY field. */

/* Bit 17 : '1': Unfiltered FSK transmission */
#define RADIO_FS_CONFIG_FSGFSKBYPASS_Pos (17UL) /*!< Position of FSGFSKBYPASS field. */
#define RADIO_FS_CONFIG_FSGFSKBYPASS_Msk (0x1UL << RADIO_FS_CONFIG_FSGFSKBYPASS_Pos) /*!< Bit mask of FSGFSKBYPASS field. */

/* Bit 16 : Adjust GFSK bandwidth. '1': 0.6, '0': 0.55 */
#define RADIO_FS_CONFIG_FSGFSKBT_Pos (16UL) /*!< Position of FSGFSKBT field. */
#define RADIO_FS_CONFIG_FSGFSKBT_Msk (0x1UL << RADIO_FS_CONFIG_FSGFSKBT_Pos) /*!< Bit mask of FSGFSKBT field. */

/* Bits 15..12 : Analog configuration register: Phase detector current */
#define RADIO_FS_CONFIG_FSPDCURR_Pos (12UL) /*!< Position of FSPDCURR field. */
#define RADIO_FS_CONFIG_FSPDCURR_Msk (0xFUL << RADIO_FS_CONFIG_FSPDCURR_Pos) /*!< Bit mask of FSPDCURR field. */

/* Bits 11..8 : Analog configuration register: VCO current */
#define RADIO_FS_CONFIG_FSVCOCURR_Pos (8UL) /*!< Position of FSVCOCURR field. */
#define RADIO_FS_CONFIG_FSVCOCURR_Msk (0xFUL << RADIO_FS_CONFIG_FSVCOCURR_Pos) /*!< Bit mask of FSVCOCURR field. */

/* Bit 5 : fsVcoShutup */
#define RADIO_FS_CONFIG_FSVCOSHUTUP_Pos (5UL) /*!< Position of FSVCOSHUTUP field. */
#define RADIO_FS_CONFIG_FSVCOSHUTUP_Msk (0x1UL << RADIO_FS_CONFIG_FSVCOSHUTUP_Pos) /*!< Bit mask of FSVCOSHUTUP field. */

/* Bits 4..3 : configuration register: Phase detector delay */
#define RADIO_FS_CONFIG_FSPDDLY_Pos (3UL) /*!< Position of FSPDDLY field. */
#define RADIO_FS_CONFIG_FSPDDLY_Msk (0x3UL << RADIO_FS_CONFIG_FSPDDLY_Pos) /*!< Bit mask of FSPDDLY field. */

/* Bit 2 : Shut off FS_PD by clamping the clocks */
#define RADIO_FS_CONFIG_FSPDCKDISABLE_Pos (2UL) /*!< Position of FSPDCKDISABLE field. */
#define RADIO_FS_CONFIG_FSPDCKDISABLE_Msk (0x1UL << RADIO_FS_CONFIG_FSPDCKDISABLE_Pos) /*!< Bit mask of FSPDCKDISABLE field. */

/* Bit 1 : Use 1v3 supply for FS_VCO power */
#define RADIO_FS_CONFIG_VCOVDD_Pos (1UL) /*!< Position of VCOVDD field. */
#define RADIO_FS_CONFIG_VCOVDD_Msk (0x1UL << RADIO_FS_CONFIG_VCOVDD_Pos) /*!< Bit mask of VCOVDD field. */

/* Bit 0 : Deprecated field -  Sideband select (1=upper/0=lower) */
#define RADIO_FS_CONFIG_SSEL_Pos (0UL) /*!< Position of SSEL field. */
#define RADIO_FS_CONFIG_SSEL_Msk (0x1UL << RADIO_FS_CONFIG_SSEL_Pos) /*!< Bit mask of SSEL field. */

/* Register: RADIO_FS_TEST */
/* Description: Fs misc test */

/* Bit 26 : 0 : 1 MHz. 1 : 2 MHz */
#define RADIO_FS_TEST_LOIFOVERRIDEFREQUENCY_Pos (26UL) /*!< Position of LOIFOVERRIDEFREQUENCY field. */
#define RADIO_FS_TEST_LOIFOVERRIDEFREQUENCY_Msk (0x1UL << RADIO_FS_TEST_LOIFOVERRIDEFREQUENCY_Pos) /*!< Bit mask of LOIFOVERRIDEFREQUENCY field. */

/* Bit 25 : 1 : Upper sideband of LO. 0 : Lower sideband of LO */
#define RADIO_FS_TEST_LOIFOVERRIDESIDEBAND_Pos (25UL) /*!< Position of LOIFOVERRIDESIDEBAND field. */
#define RADIO_FS_TEST_LOIFOVERRIDESIDEBAND_Msk (0x1UL << RADIO_FS_TEST_LOIFOVERRIDESIDEBAND_Pos) /*!< Bit mask of LOIFOVERRIDESIDEBAND field. */

/* Bit 24 : 1 : LO IF override is on. 0 : LO IF override is off */
#define RADIO_FS_TEST_LOIFOVERRIDEON_Pos (24UL) /*!< Position of LOIFOVERRIDEON field. */
#define RADIO_FS_TEST_LOIFOVERRIDEON_Msk (0x1UL << RADIO_FS_TEST_LOIFOVERRIDEON_Pos) /*!< Bit mask of LOIFOVERRIDEON field. */

/* Bits 21..16 : External control of frequency deviation, value overrides calculated FS and TX multipliers, 0x00 for off */
#define RADIO_FS_TEST_FSDEVOVERRIDE_Pos (16UL) /*!< Position of FSDEVOVERRIDE field. */
#define RADIO_FS_TEST_FSDEVOVERRIDE_Msk (0x3FUL << RADIO_FS_TEST_FSDEVOVERRIDE_Pos) /*!< Bit mask of FSDEVOVERRIDE field. */

/* Bits 14..8 : Adjust TX path modulation gain */
#define RADIO_FS_TEST_FSTXMODULATORGAIN_Pos (8UL) /*!< Position of FSTXMODULATORGAIN field. */
#define RADIO_FS_TEST_FSTXMODULATORGAIN_Msk (0x7FUL << RADIO_FS_TEST_FSTXMODULATORGAIN_Pos) /*!< Bit mask of FSTXMODULATORGAIN field. */

/* Bit 7 : 1: Disables TX path during LO modulation test. 0: Normal mode */
#define RADIO_FS_TEST_FSTESTMODULATOR_Pos (7UL) /*!< Position of FSTESTMODULATOR field. */
#define RADIO_FS_TEST_FSTESTMODULATOR_Msk (0x1UL << RADIO_FS_TEST_FSTESTMODULATOR_Pos) /*!< Bit mask of FSTESTMODULATOR field. */

/* Bit 6 : 1: Switch to single loop SDM in FsSDM */
#define RADIO_FS_TEST_FSTESTUSE2NDSDM_Pos (6UL) /*!< Position of FSTESTUSE2NDSDM field. */
#define RADIO_FS_TEST_FSTESTUSE2NDSDM_Msk (0x1UL << RADIO_FS_TEST_FSTESTUSE2NDSDM_Pos) /*!< Bit mask of FSTESTUSE2NDSDM field. */

/* Bit 5 : 1: Shutoff dither in FsSDM */
#define RADIO_FS_TEST_FSTESTFSDITHEROFF_Pos (5UL) /*!< Position of FSTESTFSDITHEROFF field. */
#define RADIO_FS_TEST_FSTESTFSDITHEROFF_Msk (0x1UL << RADIO_FS_TEST_FSTESTFSDITHEROFF_Pos) /*!< Bit mask of FSTESTFSDITHEROFF field. */

/* Bit 4 : 1: Shutoff dither in TxSDM */
#define RADIO_FS_TEST_FSTESTTXDITHEROFF_Pos (4UL) /*!< Position of FSTESTTXDITHEROFF field. */
#define RADIO_FS_TEST_FSTESTTXDITHEROFF_Msk (0x1UL << RADIO_FS_TEST_FSTESTTXDITHEROFF_Pos) /*!< Bit mask of FSTESTTXDITHEROFF field. */

/* Bits 3..0 : FS deviation scale factor gradient over channel no */
#define RADIO_FS_TEST_FSDEVCHANNELGRADIENT_Pos (0UL) /*!< Position of FSDEVCHANNELGRADIENT field. */
#define RADIO_FS_TEST_FSDEVCHANNELGRADIENT_Msk (0xFUL << RADIO_FS_TEST_FSDEVCHANNELGRADIENT_Pos) /*!< Bit mask of FSDEVCHANNELGRADIENT field. */

/* Register: RADIO_FS_TRIM */
/* Description: Fs misc trim */

/* Bits 23..16 : RF frequency adjustment (signed), LSB corresponds to 2 kHz, i.e. a range of +/-256 kHz */
#define RADIO_FS_TRIM_FSFINETUNE_Pos (16UL) /*!< Position of FSFINETUNE field. */
#define RADIO_FS_TRIM_FSFINETUNE_Msk (0xFFUL << RADIO_FS_TRIM_FSFINETUNE_Pos) /*!< Bit mask of FSFINETUNE field. */

/* Bit 14 : fsTestFsSdmShutoff. 1: Shutoff FsSDM, highest priority */
#define RADIO_FS_TRIM_FSTESTFSSDMSHUTOFF_Pos (14UL) /*!< Position of FSTESTFSSDMSHUTOFF field. */
#define RADIO_FS_TRIM_FSTESTFSSDMSHUTOFF_Msk (0x1UL << RADIO_FS_TRIM_FSTESTFSSDMSHUTOFF_Pos) /*!< Bit mask of FSTESTFSSDMSHUTOFF field. */

/* Bit 13 : fsTestTxSdmShutoff. 1: Shutoff TxSDM, e.g. for testing RX phase noise, highest priority */
#define RADIO_FS_TRIM_FSTESTTXSDMSHUTOFF_Pos (13UL) /*!< Position of FSTESTTXSDMSHUTOFF field. */
#define RADIO_FS_TRIM_FSTESTTXSDMSHUTOFF_Msk (0x1UL << RADIO_FS_TRIM_FSTESTTXSDMSHUTOFF_Pos) /*!< Bit mask of FSTESTTXSDMSHUTOFF field. */

/* Bit 12 : fsTxSdmCkSelect. 0: ck64MFs, 1: ck32M */
#define RADIO_FS_TRIM_FSTXSDMCKSELECT_Pos (12UL) /*!< Position of FSTXSDMCKSELECT field. */
#define RADIO_FS_TRIM_FSTXSDMCKSELECT_Msk (0x1UL << RADIO_FS_TRIM_FSTXSDMCKSELECT_Pos) /*!< Bit mask of FSTXSDMCKSELECT field. */

/* Bits 11..8 : Trim value for R in loop filter */
#define RADIO_FS_TRIM_RTRIM_Pos (8UL) /*!< Position of RTRIM field. */
#define RADIO_FS_TRIM_RTRIM_Msk (0xFUL << RADIO_FS_TRIM_RTRIM_Pos) /*!< Bit mask of RTRIM field. */

/* Bits 7..4 : Trim value for C in loop filter */
#define RADIO_FS_TRIM_CTRIM_Pos (4UL) /*!< Position of CTRIM field. */
#define RADIO_FS_TRIM_CTRIM_Msk (0xFUL << RADIO_FS_TRIM_CTRIM_Pos) /*!< Bit mask of CTRIM field. */

/* Bits 3..0 : Trim value for DIV2_4. */
#define RADIO_FS_TRIM_FSDIVTUNE_Pos (0UL) /*!< Position of FSDIVTUNE field. */
#define RADIO_FS_TRIM_FSDIVTUNE_Msk (0xFUL << RADIO_FS_TRIM_FSDIVTUNE_Pos) /*!< Bit mask of FSDIVTUNE field. */

/* Register: RADIO_MISC_TRIM1 */
/* Description: Misc Aaf/ADC trim related */

/* Bits 31..24 : Deprecated field -  Sets number of clock pulses in the SETTLE state (calEngineTsettle) */
#define RADIO_MISC_TRIM1_AAFRCCALTSETTLE_Pos (24UL) /*!< Position of AAFRCCALTSETTLE field. */
#define RADIO_MISC_TRIM1_AAFRCCALTSETTLE_Msk (0xFFUL << RADIO_MISC_TRIM1_AAFRCCALTSETTLE_Pos) /*!< Bit mask of AAFRCCALTSETTLE field. */

/* Bit 20 : LNACFREQ automatically set based on selected channel */
#define RADIO_MISC_TRIM1_LNACFREQAUTOEN_Pos (20UL) /*!< Position of LNACFREQAUTOEN field. */
#define RADIO_MISC_TRIM1_LNACFREQAUTOEN_Msk (0x1UL << RADIO_MISC_TRIM1_LNACFREQAUTOEN_Pos) /*!< Bit mask of LNACFREQAUTOEN field. */

/* Bit 19 : Enable high drive on RADIO_CK module */
#define RADIO_MISC_TRIM1_RADIOCKHIGHDRV_Pos (19UL) /*!< Position of RADIOCKHIGHDRV field. */
#define RADIO_MISC_TRIM1_RADIOCKHIGHDRV_Msk (0x1UL << RADIO_MISC_TRIM1_RADIOCKHIGHDRV_Pos) /*!< Bit mask of RADIOCKHIGHDRV field. */

/* Bits 18..16 : Change centre frequency of LNA LC tank */
#define RADIO_MISC_TRIM1_LNACFREQ_Pos (16UL) /*!< Position of LNACFREQ field. */
#define RADIO_MISC_TRIM1_LNACFREQ_Msk (0x7UL << RADIO_MISC_TRIM1_LNACFREQ_Pos) /*!< Bit mask of LNACFREQ field. */

/* Bits 12..8 : Calibration of 300 MHz ADC CLK */
#define RADIO_MISC_TRIM1_CALSARRINGOSCOVRVAL_Pos (8UL) /*!< Position of CALSARRINGOSCOVRVAL field. */
#define RADIO_MISC_TRIM1_CALSARRINGOSCOVRVAL_Msk (0x1FUL << RADIO_MISC_TRIM1_CALSARRINGOSCOVRVAL_Pos) /*!< Bit mask of CALSARRINGOSCOVRVAL field. */

/* Bits 7..4 : Process compensation for R and C */
#define RADIO_MISC_TRIM1_AAFRCTRIM_Pos (4UL) /*!< Position of AAFRCTRIM field. */
#define RADIO_MISC_TRIM1_AAFRCTRIM_Msk (0xFUL << RADIO_MISC_TRIM1_AAFRCTRIM_Pos) /*!< Bit mask of AAFRCTRIM field. */

/* Register: RADIO_MISC_TEST1 */
/* Description: Misc Aaf/ADC trim related */

/* Bit 21 : Enable DCCAL */
#define RADIO_MISC_TEST1_AAFENDCCAL_Pos (21UL) /*!< Position of AAFENDCCAL field. */
#define RADIO_MISC_TEST1_AAFENDCCAL_Msk (0x1UL << RADIO_MISC_TEST1_AAFENDCCAL_Pos) /*!< Bit mask of AAFENDCCAL field. */

/* Bit 20 : 0: override with values in PAR1 1: use values from CalibrationEngineCore */
#define RADIO_MISC_TEST1_AAFCALOVREN_Pos (20UL) /*!< Position of AAFCALOVREN field. */
#define RADIO_MISC_TEST1_AAFCALOVREN_Msk (0x1UL << RADIO_MISC_TEST1_AAFCALOVREN_Pos) /*!< Bit mask of AAFCALOVREN field. */

/* Bits 19..13 : AAF/RFMIX dc calibration of Q channel */
#define RADIO_MISC_TEST1_RFMIXDCCALQ_Pos (13UL) /*!< Position of RFMIXDCCALQ field. */
#define RADIO_MISC_TEST1_RFMIXDCCALQ_Msk (0x7FUL << RADIO_MISC_TEST1_RFMIXDCCALQ_Pos) /*!< Bit mask of RFMIXDCCALQ field. */

/* Bits 12..6 : AAF/RFMIX dc calibration of I channel */
#define RADIO_MISC_TEST1_RFMIXDCCALI_Pos (6UL) /*!< Position of RFMIXDCCALI field. */
#define RADIO_MISC_TEST1_RFMIXDCCALI_Msk (0x7FUL << RADIO_MISC_TEST1_RFMIXDCCALI_Pos) /*!< Bit mask of RFMIXDCCALI field. */

/* Bits 5..0 : adcTstSarch */
#define RADIO_MISC_TEST1_ADCTSTSARCH_Pos (0UL) /*!< Position of ADCTSTSARCH field. */
#define RADIO_MISC_TEST1_ADCTSTSARCH_Msk (0x3FUL << RADIO_MISC_TEST1_ADCTSTSARCH_Pos) /*!< Bit mask of ADCTSTSARCH field. */

/* Register: RADIO_MISC_TEST2 */
/* Description: Misc Aaf/ADC trim related */

/* Bit 16 : txModOvrEn */
#define RADIO_MISC_TEST2_TXMODOVREN_Pos (16UL) /*!< Position of TXMODOVREN field. */
#define RADIO_MISC_TEST2_TXMODOVREN_Msk (0x1UL << RADIO_MISC_TEST2_TXMODOVREN_Pos) /*!< Bit mask of TXMODOVREN field. */

/* Bits 15..14 : txModOvrVal */
#define RADIO_MISC_TEST2_TXMODOVRVAL_Pos (14UL) /*!< Position of TXMODOVRVAL field. */
#define RADIO_MISC_TEST2_TXMODOVRVAL_Msk (0x3UL << RADIO_MISC_TEST2_TXMODOVRVAL_Pos) /*!< Bit mask of TXMODOVRVAL field. */

/* Bit 13 : 1: override with values in SPI 0: use values from CalibrationEngineCore */
#define RADIO_MISC_TEST2_ADCRINGOSCCALOVREN_Pos (13UL) /*!< Position of ADCRINGOSCCALOVREN field. */
#define RADIO_MISC_TEST2_ADCRINGOSCCALOVREN_Msk (0x1UL << RADIO_MISC_TEST2_ADCRINGOSCCALOVREN_Pos) /*!< Bit mask of ADCRINGOSCCALOVREN field. */

/* Bit 12 : 1: override with values in SPI 0: use values from CalibrationEngineCore */
#define RADIO_MISC_TEST2_ADCOFFSETCALOVREN_Pos (12UL) /*!< Position of ADCOFFSETCALOVREN field. */
#define RADIO_MISC_TEST2_ADCOFFSETCALOVREN_Msk (0x1UL << RADIO_MISC_TEST2_ADCOFFSETCALOVREN_Pos) /*!< Bit mask of ADCOFFSETCALOVREN field. */

/* Bit 11 : ADC cal sign for Q */
#define RADIO_MISC_TEST2_ADCCALSIGNQ_Pos (11UL) /*!< Position of ADCCALSIGNQ field. */
#define RADIO_MISC_TEST2_ADCCALSIGNQ_Msk (0x1UL << RADIO_MISC_TEST2_ADCCALSIGNQ_Pos) /*!< Bit mask of ADCCALSIGNQ field. */

/* Bits 10..6 : ADC calibration current in 'Q' comparator. */
#define RADIO_MISC_TEST2_ADCCALCIQ_Pos (6UL) /*!< Position of ADCCALCIQ field. */
#define RADIO_MISC_TEST2_ADCCALCIQ_Msk (0x1FUL << RADIO_MISC_TEST2_ADCCALCIQ_Pos) /*!< Bit mask of ADCCALCIQ field. */

/* Bit 5 : ADC cal sign for I */
#define RADIO_MISC_TEST2_ADCCALSIGNI_Pos (5UL) /*!< Position of ADCCALSIGNI field. */
#define RADIO_MISC_TEST2_ADCCALSIGNI_Msk (0x1UL << RADIO_MISC_TEST2_ADCCALSIGNI_Pos) /*!< Bit mask of ADCCALSIGNI field. */

/* Bits 4..0 : ADC calibration current in 'I' comparator. */
#define RADIO_MISC_TEST2_ADCCALCII_Pos (0UL) /*!< Position of ADCCALCII field. */
#define RADIO_MISC_TEST2_ADCCALCII_Msk (0x1FUL << RADIO_MISC_TEST2_ADCCALCII_Pos) /*!< Bit mask of ADCCALCII field. */

/* Register: RADIO_RX_CONFIG */
/* Description: Misc RX config */

/* Bit 28 : if '1', the channel filter is slightly narrowed */
#define RADIO_RX_CONFIG_NARROWCHFILT_Pos (28UL) /*!< Position of NARROWCHFILT field. */
#define RADIO_RX_CONFIG_NARROWCHFILT_Msk (0x1UL << RADIO_RX_CONFIG_NARROWCHFILT_Pos) /*!< Bit mask of NARROWCHFILT field. */

/* Bit 24 : If '1', then the sign of the phase correction value in RxIQMix is inverted */
#define RADIO_RX_CONFIG_CALPHISIGN_Pos (24UL) /*!< Position of CALPHISIGN field. */
#define RADIO_RX_CONFIG_CALPHISIGN_Msk (0x1UL << RADIO_RX_CONFIG_CALPHISIGN_Pos) /*!< Bit mask of CALPHISIGN field. */

/* Bits 23..22 : adcVrefCtrl */
#define RADIO_RX_CONFIG_ADCVREFCTRL_Pos (22UL) /*!< Position of ADCVREFCTRL field. */
#define RADIO_RX_CONFIG_ADCVREFCTRL_Msk (0x3UL << RADIO_RX_CONFIG_ADCVREFCTRL_Pos) /*!< Bit mask of ADCVREFCTRL field. */

/* Bits 21..16 : adcCur */
#define RADIO_RX_CONFIG_ADCCUR_Pos (16UL) /*!< Position of ADCCUR field. */
#define RADIO_RX_CONFIG_ADCCUR_Msk (0x3FUL << RADIO_RX_CONFIG_ADCCUR_Pos) /*!< Bit mask of ADCCUR field. */

/* Bit 5 : Swap MIX_In and MIX_IP outputs if high (enables use of 'high side' mixing) */
#define RADIO_RX_CONFIG_RFMIXHIGHSIDE_Pos (5UL) /*!< Position of RFMIXHIGHSIDE field. */
#define RADIO_RX_CONFIG_RFMIXHIGHSIDE_Msk (0x1UL << RADIO_RX_CONFIG_RFMIXHIGHSIDE_Pos) /*!< Bit mask of RFMIXHIGHSIDE field. */

/* Bit 4 : Deprecated field -  1: ADC operates at half frequency */
#define RADIO_RX_CONFIG_ADCHALFSPEED_Pos (4UL) /*!< Position of ADCHALFSPEED field. */
#define RADIO_RX_CONFIG_ADCHALFSPEED_Msk (0x1UL << RADIO_RX_CONFIG_ADCHALFSPEED_Pos) /*!< Bit mask of ADCHALFSPEED field. */

/* Bit 1 : Deprecated field -  rxDisableQchan */
#define RADIO_RX_CONFIG_RXDISABLEQCHAN_Pos (1UL) /*!< Position of RXDISABLEQCHAN field. */
#define RADIO_RX_CONFIG_RXDISABLEQCHAN_Msk (0x1UL << RADIO_RX_CONFIG_RXDISABLEQCHAN_Pos) /*!< Bit mask of RXDISABLEQCHAN field. */

/* Bit 0 : Deprecated field -  Set to '1' if high-side LO */
#define RADIO_RX_CONFIG_TBD_Pos (0UL) /*!< Position of TBD field. */
#define RADIO_RX_CONFIG_TBD_Msk (0x1UL << RADIO_RX_CONFIG_TBD_Pos) /*!< Bit mask of TBD field. */

/* Register: RADIO_DAB */
/* Description: Description collection[n]: Device address base segment n */

/* Bits 31..0 : Device address base segment n */
#define RADIO_DAB_DAB_Pos (0UL) /*!< Position of DAB field. */
#define RADIO_DAB_DAB_Msk (0xFFFFFFFFUL << RADIO_DAB_DAB_Pos) /*!< Bit mask of DAB field. */

/* Register: RADIO_DAP */
/* Description: Description collection[n]: Device address prefix n */

/* Bits 15..0 : Device address prefix n */
#define RADIO_DAP_DAP_Pos (0UL) /*!< Position of DAP field. */
#define RADIO_DAP_DAP_Msk (0xFFFFUL << RADIO_DAP_DAP_Pos) /*!< Bit mask of DAP field. */

/* Register: RADIO_DACNF */
/* Description: Device address match configuration */

/* Bit 15 : TxAdd for device address 7 */
#define RADIO_DACNF_TXADD7_Pos (15UL) /*!< Position of TXADD7 field. */
#define RADIO_DACNF_TXADD7_Msk (0x1UL << RADIO_DACNF_TXADD7_Pos) /*!< Bit mask of TXADD7 field. */

/* Bit 14 : TxAdd for device address 6 */
#define RADIO_DACNF_TXADD6_Pos (14UL) /*!< Position of TXADD6 field. */
#define RADIO_DACNF_TXADD6_Msk (0x1UL << RADIO_DACNF_TXADD6_Pos) /*!< Bit mask of TXADD6 field. */

/* Bit 13 : TxAdd for device address 5 */
#define RADIO_DACNF_TXADD5_Pos (13UL) /*!< Position of TXADD5 field. */
#define RADIO_DACNF_TXADD5_Msk (0x1UL << RADIO_DACNF_TXADD5_Pos) /*!< Bit mask of TXADD5 field. */

/* Bit 12 : TxAdd for device address 4 */
#define RADIO_DACNF_TXADD4_Pos (12UL) /*!< Position of TXADD4 field. */
#define RADIO_DACNF_TXADD4_Msk (0x1UL << RADIO_DACNF_TXADD4_Pos) /*!< Bit mask of TXADD4 field. */

/* Bit 11 : TxAdd for device address 3 */
#define RADIO_DACNF_TXADD3_Pos (11UL) /*!< Position of TXADD3 field. */
#define RADIO_DACNF_TXADD3_Msk (0x1UL << RADIO_DACNF_TXADD3_Pos) /*!< Bit mask of TXADD3 field. */

/* Bit 10 : TxAdd for device address 2 */
#define RADIO_DACNF_TXADD2_Pos (10UL) /*!< Position of TXADD2 field. */
#define RADIO_DACNF_TXADD2_Msk (0x1UL << RADIO_DACNF_TXADD2_Pos) /*!< Bit mask of TXADD2 field. */

/* Bit 9 : TxAdd for device address 1 */
#define RADIO_DACNF_TXADD1_Pos (9UL) /*!< Position of TXADD1 field. */
#define RADIO_DACNF_TXADD1_Msk (0x1UL << RADIO_DACNF_TXADD1_Pos) /*!< Bit mask of TXADD1 field. */

/* Bit 8 : TxAdd for device address 0 */
#define RADIO_DACNF_TXADD0_Pos (8UL) /*!< Position of TXADD0 field. */
#define RADIO_DACNF_TXADD0_Msk (0x1UL << RADIO_DACNF_TXADD0_Pos) /*!< Bit mask of TXADD0 field. */

/* Bit 7 : Enable or disable device address matching using device address 7 */
#define RADIO_DACNF_ENA7_Pos (7UL) /*!< Position of ENA7 field. */
#define RADIO_DACNF_ENA7_Msk (0x1UL << RADIO_DACNF_ENA7_Pos) /*!< Bit mask of ENA7 field. */
#define RADIO_DACNF_ENA7_Disabled (0UL) /*!< Disabled */
#define RADIO_DACNF_ENA7_Enabled (1UL) /*!< Enabled */

/* Bit 6 : Enable or disable device address matching using device address 6 */
#define RADIO_DACNF_ENA6_Pos (6UL) /*!< Position of ENA6 field. */
#define RADIO_DACNF_ENA6_Msk (0x1UL << RADIO_DACNF_ENA6_Pos) /*!< Bit mask of ENA6 field. */
#define RADIO_DACNF_ENA6_Disabled (0UL) /*!< Disabled */
#define RADIO_DACNF_ENA6_Enabled (1UL) /*!< Enabled */

/* Bit 5 : Enable or disable device address matching using device address 5 */
#define RADIO_DACNF_ENA5_Pos (5UL) /*!< Position of ENA5 field. */
#define RADIO_DACNF_ENA5_Msk (0x1UL << RADIO_DACNF_ENA5_Pos) /*!< Bit mask of ENA5 field. */
#define RADIO_DACNF_ENA5_Disabled (0UL) /*!< Disabled */
#define RADIO_DACNF_ENA5_Enabled (1UL) /*!< Enabled */

/* Bit 4 : Enable or disable device address matching using device address 4 */
#define RADIO_DACNF_ENA4_Pos (4UL) /*!< Position of ENA4 field. */
#define RADIO_DACNF_ENA4_Msk (0x1UL << RADIO_DACNF_ENA4_Pos) /*!< Bit mask of ENA4 field. */
#define RADIO_DACNF_ENA4_Disabled (0UL) /*!< Disabled */
#define RADIO_DACNF_ENA4_Enabled (1UL) /*!< Enabled */

/* Bit 3 : Enable or disable device address matching using device address 3 */
#define RADIO_DACNF_ENA3_Pos (3UL) /*!< Position of ENA3 field. */
#define RADIO_DACNF_ENA3_Msk (0x1UL << RADIO_DACNF_ENA3_Pos) /*!< Bit mask of ENA3 field. */
#define RADIO_DACNF_ENA3_Disabled (0UL) /*!< Disabled */
#define RADIO_DACNF_ENA3_Enabled (1UL) /*!< Enabled */

/* Bit 2 : Enable or disable device address matching using device address 2 */
#define RADIO_DACNF_ENA2_Pos (2UL) /*!< Position of ENA2 field. */
#define RADIO_DACNF_ENA2_Msk (0x1UL << RADIO_DACNF_ENA2_Pos) /*!< Bit mask of ENA2 field. */
#define RADIO_DACNF_ENA2_Disabled (0UL) /*!< Disabled */
#define RADIO_DACNF_ENA2_Enabled (1UL) /*!< Enabled */

/* Bit 1 : Enable or disable device address matching using device address 1 */
#define RADIO_DACNF_ENA1_Pos (1UL) /*!< Position of ENA1 field. */
#define RADIO_DACNF_ENA1_Msk (0x1UL << RADIO_DACNF_ENA1_Pos) /*!< Bit mask of ENA1 field. */
#define RADIO_DACNF_ENA1_Disabled (0UL) /*!< Disabled */
#define RADIO_DACNF_ENA1_Enabled (1UL) /*!< Enabled */

/* Bit 0 : Enable or disable device address matching using device address 0 */
#define RADIO_DACNF_ENA0_Pos (0UL) /*!< Position of ENA0 field. */
#define RADIO_DACNF_ENA0_Msk (0x1UL << RADIO_DACNF_ENA0_Pos) /*!< Bit mask of ENA0 field. */
#define RADIO_DACNF_ENA0_Disabled (0UL) /*!< Disabled */
#define RADIO_DACNF_ENA0_Enabled (1UL) /*!< Enabled */

/* Register: RADIO_ADDRWINSIZE */
/* Description: Address match safe window size (the number of bits after detect is asserted, before starting to look for address match). Only valid when OVERRIDE22.DISABLEADDRWINDOW is '0' */

/* Bits 23..16 : Number of bits after detect to start search address/SFD in ESB mode */
#define RADIO_ADDRWINSIZE_ESB_Pos (16UL) /*!< Position of ESB field. */
#define RADIO_ADDRWINSIZE_ESB_Msk (0xFFUL << RADIO_ADDRWINSIZE_ESB_Pos) /*!< Bit mask of ESB field. */

/* Bits 15..8 : Number of bits after detect to start search address/SFD in BLE mode */
#define RADIO_ADDRWINSIZE_BLE_Pos (8UL) /*!< Position of BLE field. */
#define RADIO_ADDRWINSIZE_BLE_Msk (0xFFUL << RADIO_ADDRWINSIZE_BLE_Pos) /*!< Bit mask of BLE field. */

/* Register: RADIO_MODECNF0 */
/* Description: Radio mode configuration register 0 */

/* Bits 28..24 : Transition time from RXDISABLE state to DISABLED state */
#define RADIO_MODECNF0_RXDISABLETIME_Pos (24UL) /*!< Position of RXDISABLETIME field. */
#define RADIO_MODECNF0_RXDISABLETIME_Msk (0x1FUL << RADIO_MODECNF0_RXDISABLETIME_Pos) /*!< Bit mask of RXDISABLETIME field. */

/* Bits 20..16 : Transition time from TXDISABLE state to DISABLED state */
#define RADIO_MODECNF0_TXDISABLETIME_Pos (16UL) /*!< Position of TXDISABLETIME field. */
#define RADIO_MODECNF0_TXDISABLETIME_Msk (0x1FUL << RADIO_MODECNF0_TXDISABLETIME_Pos) /*!< Bit mask of TXDISABLETIME field. */

/* Bits 9..8 : Default TX value */
#define RADIO_MODECNF0_DTX_Pos (8UL) /*!< Position of DTX field. */
#define RADIO_MODECNF0_DTX_Msk (0x3UL << RADIO_MODECNF0_DTX_Pos) /*!< Bit mask of DTX field. */
#define RADIO_MODECNF0_DTX_B1 (0UL) /*!< Transmit '1' */
#define RADIO_MODECNF0_DTX_B0 (1UL) /*!< Transmit '0' */
#define RADIO_MODECNF0_DTX_Center (2UL) /*!< Transmit center frequency */

/* Bit 4 : Energy mode */
#define RADIO_MODECNF0_ECO_Pos (4UL) /*!< Position of ECO field. */
#define RADIO_MODECNF0_ECO_Msk (0x1UL << RADIO_MODECNF0_ECO_Pos) /*!< Bit mask of ECO field. */
#define RADIO_MODECNF0_ECO_Default (0UL) /*!< Default energy mode */
#define RADIO_MODECNF0_ECO_Eco (1UL) /*!< Eco (energy) mode */

/* Bit 0 : Radio ramp-up time */
#define RADIO_MODECNF0_RU_Pos (0UL) /*!< Position of RU field. */
#define RADIO_MODECNF0_RU_Msk (0x1UL << RADIO_MODECNF0_RU_Pos) /*!< Bit mask of RU field. */
#define RADIO_MODECNF0_RU_Default (0UL) /*!< Default ramp-up time (tRXEN), compatible with firmware written for nRF51 */
#define RADIO_MODECNF0_RU_Fast (1UL) /*!< Fast ramp-up (tRXEN,FAST), see electrical specification for more information */

/* Register: RADIO_MODECNF1 */
/* Description: Radio mode configuration register 1 */

/* Bit 8 : Sideband select */
#define RADIO_MODECNF1_SSEL_Pos (8UL) /*!< Position of SSEL field. */
#define RADIO_MODECNF1_SSEL_Msk (0x1UL << RADIO_MODECNF1_SSEL_Pos) /*!< Bit mask of SSEL field. */
#define RADIO_MODECNF1_SSEL_Low (0UL) /*!< Low-side LO */
#define RADIO_MODECNF1_SSEL_High (1UL) /*!< High-side LO */

/* Bit 0 : TBD */
#define RADIO_MODECNF1_ZEROIF_Pos (0UL) /*!< Position of ZEROIF field. */
#define RADIO_MODECNF1_ZEROIF_Msk (0x1UL << RADIO_MODECNF1_ZEROIF_Pos) /*!< Bit mask of ZEROIF field. */
#define RADIO_MODECNF1_ZEROIF_Default (0UL) /*!< Default mode (heterodyne) */
#define RADIO_MODECNF1_ZEROIF_ZeroIF (1UL) /*!< Zero-IF mode */

/* Register: RADIO_AGC_TOGGLE */
/* Description: Constant AGC Gain switching, Debug */

/* Bits 1..0 : Enable or disable functional testmode for AGC */
#define RADIO_AGC_TOGGLE_AGC_TOGGLE_Pos (0UL) /*!< Position of AGC_TOGGLE field. */
#define RADIO_AGC_TOGGLE_AGC_TOGGLE_Msk (0x3UL << RADIO_AGC_TOGGLE_AGC_TOGGLE_Pos) /*!< Bit mask of AGC_TOGGLE field. */
#define RADIO_AGC_TOGGLE_AGC_TOGGLE_Disabled (0UL) /*!< Disable */
#define RADIO_AGC_TOGGLE_AGC_TOGGLE_Enabled (1UL) /*!< Enable */

/* Register: RADIO_AGC_EN */
/* Description: AGC enable */

/* Bit 0 : Enable or disable AGC */
#define RADIO_AGC_EN_AGC_EN_Pos (0UL) /*!< Position of AGC_EN field. */
#define RADIO_AGC_EN_AGC_EN_Msk (0x1UL << RADIO_AGC_EN_AGC_EN_Pos) /*!< Bit mask of AGC_EN field. */
#define RADIO_AGC_EN_AGC_EN_Disabled (0UL) /*!< Disable */
#define RADIO_AGC_EN_AGC_EN_Enabled (1UL) /*!< Enable */

/* Register: RADIO_AGC_OVERRIDE */
/* Description: Gain setting */

/* Bits 11..8 : Override for Aaf gain */
#define RADIO_AGC_OVERRIDE_AGCAAFOVERRIDE_Pos (8UL) /*!< Position of AGCAAFOVERRIDE field. */
#define RADIO_AGC_OVERRIDE_AGCAAFOVERRIDE_Msk (0xFUL << RADIO_AGC_OVERRIDE_AGCAAFOVERRIDE_Pos) /*!< Bit mask of AGCAAFOVERRIDE field. */

/* Bits 5..4 : Override for Mix gain */
#define RADIO_AGC_OVERRIDE_AGCMIXOVERRIDE_Pos (4UL) /*!< Position of AGCMIXOVERRIDE field. */
#define RADIO_AGC_OVERRIDE_AGCMIXOVERRIDE_Msk (0x3UL << RADIO_AGC_OVERRIDE_AGCMIXOVERRIDE_Pos) /*!< Bit mask of AGCMIXOVERRIDE field. */

/* Bits 2..0 : Override for Lna gain */
#define RADIO_AGC_OVERRIDE_AGCLNAOVERRIDE_Pos (0UL) /*!< Position of AGCLNAOVERRIDE field. */
#define RADIO_AGC_OVERRIDE_AGCLNAOVERRIDE_Msk (0x7UL << RADIO_AGC_OVERRIDE_AGCLNAOVERRIDE_Pos) /*!< Bit mask of AGCLNAOVERRIDE field. */

/* Register: RADIO_QOVERRIDE0 */
/* Description: Trim value override register 0 for nRF52 */

/* Bits 23..16 : Override for tPWRUP_PB_0V9 */
#define RADIO_QOVERRIDE0_TPWRUP_PB_0V9_Pos (16UL) /*!< Position of TPWRUP_PB_0V9 field. */
#define RADIO_QOVERRIDE0_TPWRUP_PB_0V9_Msk (0xFFUL << RADIO_QOVERRIDE0_TPWRUP_PB_0V9_Pos) /*!< Bit mask of TPWRUP_PB_0V9 field. */

/* Bits 15..8 : Override for tPwrupTxPa */
#define RADIO_QOVERRIDE0_TPWRUPTXPA_Pos (8UL) /*!< Position of TPWRUPTXPA field. */
#define RADIO_QOVERRIDE0_TPWRUPTXPA_Msk (0xFFUL << RADIO_QOVERRIDE0_TPWRUPTXPA_Pos) /*!< Bit mask of TPWRUPTXPA field. */

/* Bits 7..0 : Override for tPwrupFs */
#define RADIO_QOVERRIDE0_TPWRUPFS_Pos (0UL) /*!< Position of TPWRUPFS field. */
#define RADIO_QOVERRIDE0_TPWRUPFS_Msk (0xFFUL << RADIO_QOVERRIDE0_TPWRUPFS_Pos) /*!< Bit mask of TPWRUPFS field. */

/* Register: RADIO_QOVERRIDE1 */
/* Description: Trim value override register 1 for nRF52 */

/* Bits 23..16 : Override for tPwrupTx */
#define RADIO_QOVERRIDE1_TPWRUPTX_Pos (16UL) /*!< Position of TPWRUPTX field. */
#define RADIO_QOVERRIDE1_TPWRUPTX_Msk (0xFFUL << RADIO_QOVERRIDE1_TPWRUPTX_Pos) /*!< Bit mask of TPWRUPTX field. */

/* Bits 15..8 : Override for tPwrupVreg */
#define RADIO_QOVERRIDE1_TPWRUPVREG_Pos (8UL) /*!< Position of TPWRUPVREG field. */
#define RADIO_QOVERRIDE1_TPWRUPVREG_Msk (0xFFUL << RADIO_QOVERRIDE1_TPWRUPVREG_Pos) /*!< Bit mask of TPWRUPVREG field. */

/* Register: RADIO_QOVERRIDE2 */
/* Description: Trim value override register 2 for nRF52 */

/* Bits 15..8 : Override for tPllSettled */
#define RADIO_QOVERRIDE2_TPLLSETTLED_Pos (8UL) /*!< Position of TPLLSETTLED field. */
#define RADIO_QOVERRIDE2_TPLLSETTLED_Msk (0xFFUL << RADIO_QOVERRIDE2_TPLLSETTLED_Pos) /*!< Bit mask of TPLLSETTLED field. */

/* Bits 5..0 : Override for tIfsDelta */
#define RADIO_QOVERRIDE2_TIFSDELTA_Pos (0UL) /*!< Position of TIFSDELTA field. */
#define RADIO_QOVERRIDE2_TIFSDELTA_Msk (0x3FUL << RADIO_QOVERRIDE2_TIFSDELTA_Pos) /*!< Bit mask of TIFSDELTA field. */

/* Register: RADIO_QOVERRIDE3 */
/* Description: Trim value override register 3 for nRF52 */

/* Bits 31..24 : Override for tRxDigEn */
#define RADIO_QOVERRIDE3_TRXDIGEN_Pos (24UL) /*!< Position of TRXDIGEN field. */
#define RADIO_QOVERRIDE3_TRXDIGEN_Msk (0xFFUL << RADIO_QOVERRIDE3_TRXDIGEN_Pos) /*!< Bit mask of TRXDIGEN field. */

/* Bits 15..8 : Override for tRxAgcEn */
#define RADIO_QOVERRIDE3_TRXAGCEN_Pos (8UL) /*!< Position of TRXAGCEN field. */
#define RADIO_QOVERRIDE3_TRXAGCEN_Msk (0xFFUL << RADIO_QOVERRIDE3_TRXAGCEN_Pos) /*!< Bit mask of TRXAGCEN field. */

/* Register: RADIO_QOVERRIDE4 */
/* Description: Trim value override register 4 for nRF52 */

/* Bit 31 : Enable or disable override of default trim values */
#define RADIO_QOVERRIDE4_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_QOVERRIDE4_ENABLE_Msk (0x1UL << RADIO_QOVERRIDE4_ENABLE_Pos) /*!< Bit mask of ENABLE field. */
#define RADIO_QOVERRIDE4_ENABLE_Disabled (0UL) /*!< Disable */
#define RADIO_QOVERRIDE4_ENABLE_Enabled (1UL) /*!< Enable */

/* Bit 15 : Override for bsYlevAlg */
#define RADIO_QOVERRIDE4_BSYLEVALG_Pos (15UL) /*!< Position of BSYLEVALG field. */
#define RADIO_QOVERRIDE4_BSYLEVALG_Msk (0x1UL << RADIO_QOVERRIDE4_BSYLEVALG_Pos) /*!< Bit mask of BSYLEVALG field. */

/* Bits 14..12 : Override for bsStrobeDelay */
#define RADIO_QOVERRIDE4_BSSTROBEDELAY_Pos (12UL) /*!< Position of BSSTROBEDELAY field. */
#define RADIO_QOVERRIDE4_BSSTROBEDELAY_Msk (0x7UL << RADIO_QOVERRIDE4_BSSTROBEDELAY_Pos) /*!< Bit mask of BSSTROBEDELAY field. */

/* Bit 11 : Override for bsStrobeDataIn */
#define RADIO_QOVERRIDE4_BSSTROBEDATAIN_Pos (11UL) /*!< Position of BSSTROBEDATAIN field. */
#define RADIO_QOVERRIDE4_BSSTROBEDATAIN_Msk (0x1UL << RADIO_QOVERRIDE4_BSSTROBEDATAIN_Pos) /*!< Bit mask of BSSTROBEDATAIN field. */

/* Bits 10..4 : Override for bsDataPeak2Peak */
#define RADIO_QOVERRIDE4_BSDATAPEAK2PEAK_Pos (4UL) /*!< Position of BSDATAPEAK2PEAK field. */
#define RADIO_QOVERRIDE4_BSDATAPEAK2PEAK_Msk (0x7FUL << RADIO_QOVERRIDE4_BSDATAPEAK2PEAK_Pos) /*!< Bit mask of BSDATAPEAK2PEAK field. */

/* Bit 3 : Override for bsEnableThresholdAdjust */
#define RADIO_QOVERRIDE4_BSENABLETHRESHOLDADJUST_Pos (3UL) /*!< Position of BSENABLETHRESHOLDADJUST field. */
#define RADIO_QOVERRIDE4_BSENABLETHRESHOLDADJUST_Msk (0x1UL << RADIO_QOVERRIDE4_BSENABLETHRESHOLDADJUST_Pos) /*!< Bit mask of BSENABLETHRESHOLDADJUST field. */

/* Bit 2 : Override for bsDisablePreambleBlock */
#define RADIO_QOVERRIDE4_BSDISABLEPREAMBLEBLOCK_Pos (2UL) /*!< Position of BSDISABLEPREAMBLEBLOCK field. */
#define RADIO_QOVERRIDE4_BSDISABLEPREAMBLEBLOCK_Msk (0x1UL << RADIO_QOVERRIDE4_BSDISABLEPREAMBLEBLOCK_Pos) /*!< Bit mask of BSDISABLEPREAMBLEBLOCK field. */

/* Bits 1..0 : Override for bsBitLengthToleranse */
#define RADIO_QOVERRIDE4_BSBITLENGTHTOLERANSE_Pos (0UL) /*!< Position of BSBITLENGTHTOLERANSE field. */
#define RADIO_QOVERRIDE4_BSBITLENGTHTOLERANSE_Msk (0x3UL << RADIO_QOVERRIDE4_BSBITLENGTHTOLERANSE_Pos) /*!< Bit mask of BSBITLENGTHTOLERANSE field. */

/* Register: RADIO_QOVERRIDE5 */
/* Description: Trim value override register 5 for nRF52 */

/* Bits 15..8 : Override value for bitSlicerSwingTh */
#define RADIO_QOVERRIDE5_BITSLICERSWINGTH_Pos (8UL) /*!< Position of BITSLICERSWINGTH field. */
#define RADIO_QOVERRIDE5_BITSLICERSWINGTH_Msk (0xFFUL << RADIO_QOVERRIDE5_BITSLICERSWINGTH_Pos) /*!< Bit mask of BITSLICERSWINGTH field. */

/* Register: RADIO_QOVERRIDE6 */
/* Description: Trim value override register 6 for nRF52 */

/* Bit 31 : Override value enable for correlation Threshold (hypermode) */
#define RADIO_QOVERRIDE6_DBCCORRTHEN_Pos (31UL) /*!< Position of DBCCORRTHEN field. */
#define RADIO_QOVERRIDE6_DBCCORRTHEN_Msk (0x1UL << RADIO_QOVERRIDE6_DBCCORRTHEN_Pos) /*!< Bit mask of DBCCORRTHEN field. */

/* Bits 29..24 : Override value for correlator enable threshold */
#define RADIO_QOVERRIDE6_DBCENABLETH_Pos (24UL) /*!< Position of DBCENABLETH field. */
#define RADIO_QOVERRIDE6_DBCENABLETH_Msk (0x3FUL << RADIO_QOVERRIDE6_DBCENABLETH_Pos) /*!< Bit mask of DBCENABLETH field. */

/* Bits 23..16 : Override value for correlator timeout,in bit periods (hypermode) */
#define RADIO_QOVERRIDE6_DBCTIMEOUT_Pos (16UL) /*!< Position of DBCTIMEOUT field. */
#define RADIO_QOVERRIDE6_DBCTIMEOUT_Msk (0xFFUL << RADIO_QOVERRIDE6_DBCTIMEOUT_Pos) /*!< Bit mask of DBCTIMEOUT field. */

/* Bits 14..12 : Override value for strobe offset (hypermode) */
#define RADIO_QOVERRIDE6_MFBSTRBOFFSET_Pos (12UL) /*!< Position of MFBSTRBOFFSET field. */
#define RADIO_QOVERRIDE6_MFBSTRBOFFSET_Msk (0x7UL << RADIO_QOVERRIDE6_MFBSTRBOFFSET_Pos) /*!< Bit mask of MFBSTRBOFFSET field. */

/* Bits 9..8 : Override value for dbcEnableSrc */
#define RADIO_QOVERRIDE6_DBCENABLESRC_Pos (8UL) /*!< Position of DBCENABLESRC field. */
#define RADIO_QOVERRIDE6_DBCENABLESRC_Msk (0x3UL << RADIO_QOVERRIDE6_DBCENABLESRC_Pos) /*!< Bit mask of DBCENABLESRC field. */

/* Bits 7..0 : Override value for correlation Threshold (hypermode) */
#define RADIO_QOVERRIDE6_DBCCORRTH_Pos (0UL) /*!< Position of DBCCORRTH field. */
#define RADIO_QOVERRIDE6_DBCCORRTH_Msk (0xFFUL << RADIO_QOVERRIDE6_DBCCORRTH_Pos) /*!< Bit mask of DBCCORRTH field. */

/* Register: RADIO_QOVERRIDE7 */
/* Description: Trim value override register 7 for nRF52 */

/* Bits 24..16 : Override value for driftValidTh, drift estimator (hypermode) */
#define RADIO_QOVERRIDE7_DRIFTVALIDTH_Pos (16UL) /*!< Position of DRIFTVALIDTH field. */
#define RADIO_QOVERRIDE7_DRIFTVALIDTH_Msk (0x1FFUL << RADIO_QOVERRIDE7_DRIFTVALIDTH_Pos) /*!< Bit mask of DRIFTVALIDTH field. */

/* Bits 13..8 : Override value for address match timeout, [in bit periods] (hypermode) */
#define RADIO_QOVERRIDE7_DBCADDRTIMEOUT_Pos (8UL) /*!< Position of DBCADDRTIMEOUT field. */
#define RADIO_QOVERRIDE7_DBCADDRTIMEOUT_Msk (0x3FUL << RADIO_QOVERRIDE7_DBCADDRTIMEOUT_Pos) /*!< Bit mask of DBCADDRTIMEOUT field. */

/* Bits 7..0 : Override value for IIR feedback , drift estimator (hypermode) */
#define RADIO_QOVERRIDE7_DRIFTALPHA_Pos (0UL) /*!< Position of DRIFTALPHA field. */
#define RADIO_QOVERRIDE7_DRIFTALPHA_Msk (0xFFUL << RADIO_QOVERRIDE7_DRIFTALPHA_Pos) /*!< Bit mask of DRIFTALPHA field. */

/* Register: RADIO_QOVERRIDE8 */
/* Description: Trim value override register 8 for nRF52 */

/* Bits 28..20 : Override value for driftDelayTh, drift estimator (hypermode) */
#define RADIO_QOVERRIDE8_DRIFTDELAYTH_Pos (20UL) /*!< Position of DRIFTDELAYTH field. */
#define RADIO_QOVERRIDE8_DRIFTDELAYTH_Msk (0x1FFUL << RADIO_QOVERRIDE8_DRIFTDELAYTH_Pos) /*!< Bit mask of DRIFTDELAYTH field. */

/* Bits 19..16 : Override value for driftMaxDist, drift estimator (hypermode) */
#define RADIO_QOVERRIDE8_DRIFTMAXDIST_Pos (16UL) /*!< Position of DRIFTMAXDIST field. */
#define RADIO_QOVERRIDE8_DRIFTMAXDIST_Msk (0xFUL << RADIO_QOVERRIDE8_DRIFTMAXDIST_Pos) /*!< Bit mask of DRIFTMAXDIST field. */

/* Bits 8..0 : Override value for driftLowTh, drift estimator (hypermode) */
#define RADIO_QOVERRIDE8_DRIFTLOWTH_Pos (0UL) /*!< Position of DRIFTLOWTH field. */
#define RADIO_QOVERRIDE8_DRIFTLOWTH_Msk (0x1FFUL << RADIO_QOVERRIDE8_DRIFTLOWTH_Pos) /*!< Bit mask of DRIFTLOWTH field. */

/* Register: RADIO_QOVERRIDE9 */
/* Description: Trim value override register 9 for nRF52 */

/* Bit 17 : modIndexOvrVal */
#define RADIO_QOVERRIDE9_MODINDEXOVRVAL_Pos (17UL) /*!< Position of MODINDEXOVRVAL field. */
#define RADIO_QOVERRIDE9_MODINDEXOVRVAL_Msk (0x1UL << RADIO_QOVERRIDE9_MODINDEXOVRVAL_Pos) /*!< Bit mask of MODINDEXOVRVAL field. */

/* Bit 16 : modIndexOvrEn */
#define RADIO_QOVERRIDE9_MODINDEXOVREN_Pos (16UL) /*!< Position of MODINDEXOVREN field. */
#define RADIO_QOVERRIDE9_MODINDEXOVREN_Msk (0x1UL << RADIO_QOVERRIDE9_MODINDEXOVREN_Pos) /*!< Bit mask of MODINDEXOVREN field. */

/* Bits 15..8 : Bit slicer swing time */
#define RADIO_QOVERRIDE9_BITSLICERSWINGTIME_Pos (8UL) /*!< Position of BITSLICERSWINGTIME field. */
#define RADIO_QOVERRIDE9_BITSLICERSWINGTIME_Msk (0xFFUL << RADIO_QOVERRIDE9_BITSLICERSWINGTIME_Pos) /*!< Bit mask of BITSLICERSWINGTIME field. */

/* Bit 2 : Override value for demodInvert (standard and hyper) */
#define RADIO_QOVERRIDE9_DEMODINVERT_Pos (2UL) /*!< Position of DEMODINVERT field. */
#define RADIO_QOVERRIDE9_DEMODINVERT_Msk (0x1UL << RADIO_QOVERRIDE9_DEMODINVERT_Pos) /*!< Bit mask of DEMODINVERT field. */

/* Bits 1..0 : Override value for psdDemodDelay (standard mode) */
#define RADIO_QOVERRIDE9_PSDDEMODDELAY_Pos (0UL) /*!< Position of PSDDEMODDELAY field. */
#define RADIO_QOVERRIDE9_PSDDEMODDELAY_Msk (0x3UL << RADIO_QOVERRIDE9_PSDDEMODDELAY_Pos) /*!< Bit mask of PSDDEMODDELAY field. */

/* Register: RADIO_QOVERRIDE10 */
/* Description: Trim value override register 10 for nRF52 */

/* Bits 31..28 : Override value for agcRFGainMin */
#define RADIO_QOVERRIDE10_AGCRFGAINMIN_Pos (28UL) /*!< Position of AGCRFGAINMIN field. */
#define RADIO_QOVERRIDE10_AGCRFGAINMIN_Msk (0xFUL << RADIO_QOVERRIDE10_AGCRFGAINMIN_Pos) /*!< Bit mask of AGCRFGAINMIN field. */

/* Bits 27..24 : Override value for agcRFGainMax */
#define RADIO_QOVERRIDE10_AGCRFGAINMAX_Pos (24UL) /*!< Position of AGCRFGAINMAX field. */
#define RADIO_QOVERRIDE10_AGCRFGAINMAX_Msk (0xFUL << RADIO_QOVERRIDE10_AGCRFGAINMAX_Pos) /*!< Bit mask of AGCRFGAINMAX field. */

/* Bit 20 : Override value for agcEnableGainSwitch */
#define RADIO_QOVERRIDE10_AGCENABLEGAINSWITCH_Pos (20UL) /*!< Position of AGCENABLEGAINSWITCH field. */
#define RADIO_QOVERRIDE10_AGCENABLEGAINSWITCH_Msk (0x1UL << RADIO_QOVERRIDE10_AGCENABLEGAINSWITCH_Pos) /*!< Bit mask of AGCENABLEGAINSWITCH field. */

/* Bits 17..12 : Override value for agcWaitPacket */
#define RADIO_QOVERRIDE10_AGCWAITPACKET_Pos (12UL) /*!< Position of AGCWAITPACKET field. */
#define RADIO_QOVERRIDE10_AGCWAITPACKET_Msk (0x3FUL << RADIO_QOVERRIDE10_AGCWAITPACKET_Pos) /*!< Bit mask of AGCWAITPACKET field. */

/* Bits 11..8 : Override value for agcRFpkDetResetCount */
#define RADIO_QOVERRIDE10_AGCRFPKDETRESETCOUNT_Pos (8UL) /*!< Position of AGCRFPKDETRESETCOUNT field. */
#define RADIO_QOVERRIDE10_AGCRFPKDETRESETCOUNT_Msk (0xFUL << RADIO_QOVERRIDE10_AGCRFPKDETRESETCOUNT_Pos) /*!< Bit mask of AGCRFPKDETRESETCOUNT field. */

/* Bits 5..0 : Override value for agcWait */
#define RADIO_QOVERRIDE10_AGCWAIT_Pos (0UL) /*!< Position of AGCWAIT field. */
#define RADIO_QOVERRIDE10_AGCWAIT_Msk (0x3FUL << RADIO_QOVERRIDE10_AGCWAIT_Pos) /*!< Bit mask of AGCWAIT field. */

/* Register: RADIO_QOVERRIDE11 */
/* Description: Trim value override register 11 for nRF52 */

/* Bits 31..24 : used in Rssi moving exponential averager */
#define RADIO_QOVERRIDE11_ALPHA_Pos (24UL) /*!< Position of ALPHA field. */
#define RADIO_QOVERRIDE11_ALPHA_Msk (0xFFUL << RADIO_QOVERRIDE11_ALPHA_Pos) /*!< Bit mask of ALPHA field. */

/* Bits 21..19 : Override value for aggIFgainStepDown */
#define RADIO_QOVERRIDE11_AGGIFGAINSTEPDOWN_Pos (19UL) /*!< Position of AGGIFGAINSTEPDOWN field. */
#define RADIO_QOVERRIDE11_AGGIFGAINSTEPDOWN_Msk (0x7UL << RADIO_QOVERRIDE11_AGGIFGAINSTEPDOWN_Pos) /*!< Bit mask of AGGIFGAINSTEPDOWN field. */

/* Bits 18..16 : Override value for aggIFgainStepUp */
#define RADIO_QOVERRIDE11_AGGIFGAINSTEPUP_Pos (16UL) /*!< Position of AGGIFGAINSTEPUP field. */
#define RADIO_QOVERRIDE11_AGGIFGAINSTEPUP_Msk (0x7UL << RADIO_QOVERRIDE11_AGGIFGAINSTEPUP_Pos) /*!< Bit mask of AGGIFGAINSTEPUP field. */

/* Bits 13..11 : Override value for agcIFgainMin */
#define RADIO_QOVERRIDE11_AGCIFGAINMIN_Pos (11UL) /*!< Position of AGCIFGAINMIN field. */
#define RADIO_QOVERRIDE11_AGCIFGAINMIN_Msk (0x7UL << RADIO_QOVERRIDE11_AGCIFGAINMIN_Pos) /*!< Bit mask of AGCIFGAINMIN field. */

/* Bits 10..8 : Override value for agcIFgainMax */
#define RADIO_QOVERRIDE11_AGCIFGAINMAX_Pos (8UL) /*!< Position of AGCIFGAINMAX field. */
#define RADIO_QOVERRIDE11_AGCIFGAINMAX_Msk (0x7UL << RADIO_QOVERRIDE11_AGCIFGAINMAX_Pos) /*!< Bit mask of AGCIFGAINMAX field. */

/* Bits 7..4 : Override value for agcRFgainStepDown */
#define RADIO_QOVERRIDE11_AGCRFGAINSTEPDOWN_Pos (4UL) /*!< Position of AGCRFGAINSTEPDOWN field. */
#define RADIO_QOVERRIDE11_AGCRFGAINSTEPDOWN_Msk (0xFUL << RADIO_QOVERRIDE11_AGCRFGAINSTEPDOWN_Pos) /*!< Bit mask of AGCRFGAINSTEPDOWN field. */

/* Bits 3..0 : Override value for agcRFgainStepUp */
#define RADIO_QOVERRIDE11_AGCRFGAINSTEPUP_Pos (0UL) /*!< Position of AGCRFGAINSTEPUP field. */
#define RADIO_QOVERRIDE11_AGCRFGAINSTEPUP_Msk (0xFUL << RADIO_QOVERRIDE11_AGCRFGAINSTEPUP_Pos) /*!< Bit mask of AGCRFGAINSTEPUP field. */

/* Register: RADIO_QOVERRIDE12 */
/* Description: Trim value override register 12 for nRF52 */

/* Bits 27..16 : Override value for IfpkDetLowThres */
#define RADIO_QOVERRIDE12_IFPKDETLOWTHRES_Pos (16UL) /*!< Position of IFPKDETLOWTHRES field. */
#define RADIO_QOVERRIDE12_IFPKDETLOWTHRES_Msk (0xFFFUL << RADIO_QOVERRIDE12_IFPKDETLOWTHRES_Pos) /*!< Bit mask of IFPKDETLOWTHRES field. */

/* Bits 11..0 : Override value for IfpkDetHighThres */
#define RADIO_QOVERRIDE12_IFPKDETHIGHTHRES_Pos (0UL) /*!< Position of IFPKDETHIGHTHRES field. */
#define RADIO_QOVERRIDE12_IFPKDETHIGHTHRES_Msk (0xFFFUL << RADIO_QOVERRIDE12_IFPKDETHIGHTHRES_Pos) /*!< Bit mask of IFPKDETHIGHTHRES field. */

/* Register: RADIO_QOVERRIDE13 */
/* Description: Trim value override register 13 for nRF52 */

/* Bits 27..16 : Override value for BbpkDetLowThres */
#define RADIO_QOVERRIDE13_BBPKDETLOWTHRES_Pos (16UL) /*!< Position of BBPKDETLOWTHRES field. */
#define RADIO_QOVERRIDE13_BBPKDETLOWTHRES_Msk (0xFFFUL << RADIO_QOVERRIDE13_BBPKDETLOWTHRES_Pos) /*!< Bit mask of BBPKDETLOWTHRES field. */

/* Bits 11..0 : Override value for BbpkDetHighThres */
#define RADIO_QOVERRIDE13_BBPKDETHIGHTHRES_Pos (0UL) /*!< Position of BBPKDETHIGHTHRES field. */
#define RADIO_QOVERRIDE13_BBPKDETHIGHTHRES_Msk (0xFFFUL << RADIO_QOVERRIDE13_BBPKDETHIGHTHRES_Pos) /*!< Bit mask of BBPKDETHIGHTHRES field. */

/* Register: RADIO_QOVERRIDE14 */
/* Description: Trim value override register 14 for nRF52 */

/* Bits 25..21 : Override value for calamp (programmable IandQ gain mismatch correction) */
#define RADIO_QOVERRIDE14_CALAMP_Pos (21UL) /*!< Position of CALAMP field. */
#define RADIO_QOVERRIDE14_CALAMP_Msk (0x1FUL << RADIO_QOVERRIDE14_CALAMP_Pos) /*!< Bit mask of CALAMP field. */

/* Bits 20..16 : Override value for calphi (programmable IandQ phase mismatch correction) */
#define RADIO_QOVERRIDE14_CALPHI_Pos (16UL) /*!< Position of CALPHI field. */
#define RADIO_QOVERRIDE14_CALPHI_Msk (0x1FUL << RADIO_QOVERRIDE14_CALPHI_Pos) /*!< Bit mask of CALPHI field. */

/* Bits 13..8 : Override value for BbpkDetDecayStep */
#define RADIO_QOVERRIDE14_BBPKDETDECAYSTEP_Pos (8UL) /*!< Position of BBPKDETDECAYSTEP field. */
#define RADIO_QOVERRIDE14_BBPKDETDECAYSTEP_Msk (0x3FUL << RADIO_QOVERRIDE14_BBPKDETDECAYSTEP_Pos) /*!< Bit mask of BBPKDETDECAYSTEP field. */

/* Bits 5..0 : Override value for IfpkDetDecayStep */
#define RADIO_QOVERRIDE14_IFPKDETDECAYSTEP_Pos (0UL) /*!< Position of IFPKDETDECAYSTEP field. */
#define RADIO_QOVERRIDE14_IFPKDETDECAYSTEP_Msk (0x3FUL << RADIO_QOVERRIDE14_IFPKDETDECAYSTEP_Pos) /*!< Bit mask of IFPKDETDECAYSTEP field. */

/* Register: RADIO_QOVERRIDE15 */
/* Description: Trim value override register 15 for nRF52 */

/* Bits 31..24 : Override value for tCalStart */
#define RADIO_QOVERRIDE15_TCALSTART_Pos (24UL) /*!< Position of TCALSTART field. */
#define RADIO_QOVERRIDE15_TCALSTART_Msk (0xFFUL << RADIO_QOVERRIDE15_TCALSTART_Pos) /*!< Bit mask of TCALSTART field. */

/* Bits 23..16 : Override value for tPwrupAdc */
#define RADIO_QOVERRIDE15_TPWRUPADC_Pos (16UL) /*!< Position of TPWRUPADC field. */
#define RADIO_QOVERRIDE15_TPWRUPADC_Msk (0xFFUL << RADIO_QOVERRIDE15_TPWRUPADC_Pos) /*!< Bit mask of TPWRUPADC field. */

/* Bits 15..8 : Override value for tFsStart */
#define RADIO_QOVERRIDE15_TFSSTART_Pos (8UL) /*!< Position of TFSSTART field. */
#define RADIO_QOVERRIDE15_TFSSTART_Msk (0xFFUL << RADIO_QOVERRIDE15_TFSSTART_Pos) /*!< Bit mask of TFSSTART field. */

/* Bits 7..0 : Override value for tArstFs */
#define RADIO_QOVERRIDE15_TARSTFS_Pos (0UL) /*!< Position of TARSTFS field. */
#define RADIO_QOVERRIDE15_TARSTFS_Msk (0xFFUL << RADIO_QOVERRIDE15_TARSTFS_Pos) /*!< Bit mask of TARSTFS field. */

/* Register: RADIO_QOVERRIDE16 */
/* Description: Trim value override register 16 for nRF52 */

/* Bits 31..24 : Override value for tPwrupPkd */
#define RADIO_QOVERRIDE16_TPWRUPPKD_Pos (24UL) /*!< Position of TPWRUPPKD field. */
#define RADIO_QOVERRIDE16_TPWRUPPKD_Msk (0xFFUL << RADIO_QOVERRIDE16_TPWRUPPKD_Pos) /*!< Bit mask of TPWRUPPKD field. */

/* Bits 23..16 : Override value for tPwrupLna */
#define RADIO_QOVERRIDE16_TPWRUPLNA_Pos (16UL) /*!< Position of TPWRUPLNA field. */
#define RADIO_QOVERRIDE16_TPWRUPLNA_Msk (0xFFUL << RADIO_QOVERRIDE16_TPWRUPLNA_Pos) /*!< Bit mask of TPWRUPLNA field. */

/* Bits 15..8 : Override value for tPwrupMix */
#define RADIO_QOVERRIDE16_TPWRUPMIX_Pos (8UL) /*!< Position of TPWRUPMIX field. */
#define RADIO_QOVERRIDE16_TPWRUPMIX_Msk (0xFFUL << RADIO_QOVERRIDE16_TPWRUPMIX_Pos) /*!< Bit mask of TPWRUPMIX field. */

/* Bits 7..0 : Override value for tPwrupAaf */
#define RADIO_QOVERRIDE16_TPWRUPAAF_Pos (0UL) /*!< Position of TPWRUPAAF field. */
#define RADIO_QOVERRIDE16_TPWRUPAAF_Msk (0xFFUL << RADIO_QOVERRIDE16_TPWRUPAAF_Pos) /*!< Bit mask of TPWRUPAAF field. */

/* Register: RADIO_QOVERRIDE17 */
/* Description: Trim value override register 17 for nRF52 */

/* Bits 31..24 : Override value for tPwrupTxDac */
#define RADIO_QOVERRIDE17_TPWRUPTXDAC_Pos (24UL) /*!< Position of TPWRUPTXDAC field. */
#define RADIO_QOVERRIDE17_TPWRUPTXDAC_Msk (0xFFUL << RADIO_QOVERRIDE17_TPWRUPTXDAC_Pos) /*!< Bit mask of TPWRUPTXDAC field. */

/* Bits 23..16 : Override value for tArstAdcEnd */
#define RADIO_QOVERRIDE17_TARSTADCEND_Pos (16UL) /*!< Position of TARSTADCEND field. */
#define RADIO_QOVERRIDE17_TARSTADCEND_Msk (0xFFUL << RADIO_QOVERRIDE17_TARSTADCEND_Pos) /*!< Bit mask of TARSTADCEND field. */

/* Bits 15..8 : Override value for tArstAdc */
#define RADIO_QOVERRIDE17_TARSTADC_Pos (8UL) /*!< Position of TARSTADC field. */
#define RADIO_QOVERRIDE17_TARSTADC_Msk (0xFFUL << RADIO_QOVERRIDE17_TARSTADC_Pos) /*!< Bit mask of TARSTADC field. */

/* Bits 7..0 : Override value for tRfMixEn */
#define RADIO_QOVERRIDE17_TRFMIXEN_Pos (0UL) /*!< Position of TRFMIXEN field. */
#define RADIO_QOVERRIDE17_TRFMIXEN_Msk (0xFFUL << RADIO_QOVERRIDE17_TRFMIXEN_Pos) /*!< Bit mask of TRFMIXEN field. */

/* Register: RADIO_QOVERRIDE18 */
/* Description: Trim value override register 18 for nRF52 */

/* Bits 31..30 : Override enable: ovrEnPwrupTxDac */
#define RADIO_QOVERRIDE18_OVRENPWRUPTXDAC_Pos (30UL) /*!< Position of OVRENPWRUPTXDAC field. */
#define RADIO_QOVERRIDE18_OVRENPWRUPTXDAC_Msk (0x3UL << RADIO_QOVERRIDE18_OVRENPWRUPTXDAC_Pos) /*!< Bit mask of OVRENPWRUPTXDAC field. */

/* Bit 29 : Override enable: ovrEnPwrupTxPa */
#define RADIO_QOVERRIDE18_OVRENPWRUPTXPA_Pos (29UL) /*!< Position of OVRENPWRUPTXPA field. */
#define RADIO_QOVERRIDE18_OVRENPWRUPTXPA_Msk (0x1UL << RADIO_QOVERRIDE18_OVRENPWRUPTXPA_Pos) /*!< Bit mask of OVRENPWRUPTXPA field. */

/* Bits 28..27 : Override enable: ovrEnPwrupTx */
#define RADIO_QOVERRIDE18_OVRENPWRUPTX_Pos (27UL) /*!< Position of OVRENPWRUPTX field. */
#define RADIO_QOVERRIDE18_OVRENPWRUPTX_Msk (0x3UL << RADIO_QOVERRIDE18_OVRENPWRUPTX_Pos) /*!< Bit mask of OVRENPWRUPTX field. */

/* Bit 26 : Override enable: ovrEnArstAdc */
#define RADIO_QOVERRIDE18_OVRENARSTADC_Pos (26UL) /*!< Position of OVRENARSTADC field. */
#define RADIO_QOVERRIDE18_OVRENARSTADC_Msk (0x1UL << RADIO_QOVERRIDE18_OVRENARSTADC_Pos) /*!< Bit mask of OVRENARSTADC field. */

/* Bit 25 : Override enable: ovrEnRfMixEn */
#define RADIO_QOVERRIDE18_OVRENRFMIXEN_Pos (25UL) /*!< Position of OVRENRFMIXEN field. */
#define RADIO_QOVERRIDE18_OVRENRFMIXEN_Msk (0x1UL << RADIO_QOVERRIDE18_OVRENRFMIXEN_Pos) /*!< Bit mask of OVRENRFMIXEN field. */

/* Bit 24 : Override enable: ovrEnPwrupPkd */
#define RADIO_QOVERRIDE18_OVRENPWRUPPKD_Pos (24UL) /*!< Position of OVRENPWRUPPKD field. */
#define RADIO_QOVERRIDE18_OVRENPWRUPPKD_Msk (0x1UL << RADIO_QOVERRIDE18_OVRENPWRUPPKD_Pos) /*!< Bit mask of OVRENPWRUPPKD field. */

/* Bits 23..22 : Override enable: ovrEnPwrupLna */
#define RADIO_QOVERRIDE18_OVRENPWRUPLNA_Pos (22UL) /*!< Position of OVRENPWRUPLNA field. */
#define RADIO_QOVERRIDE18_OVRENPWRUPLNA_Msk (0x3UL << RADIO_QOVERRIDE18_OVRENPWRUPLNA_Pos) /*!< Bit mask of OVRENPWRUPLNA field. */

/* Bits 21..20 : Override enable: ovrEnPwrupMix */
#define RADIO_QOVERRIDE18_OVRENPWRUPMIX_Pos (20UL) /*!< Position of OVRENPWRUPMIX field. */
#define RADIO_QOVERRIDE18_OVRENPWRUPMIX_Msk (0x3UL << RADIO_QOVERRIDE18_OVRENPWRUPMIX_Pos) /*!< Bit mask of OVRENPWRUPMIX field. */

/* Bits 19..18 : Override enable: ovrEnPwrupAaf */
#define RADIO_QOVERRIDE18_OVRENPWRUPAAF_Pos (18UL) /*!< Position of OVRENPWRUPAAF field. */
#define RADIO_QOVERRIDE18_OVRENPWRUPAAF_Msk (0x3UL << RADIO_QOVERRIDE18_OVRENPWRUPAAF_Pos) /*!< Bit mask of OVRENPWRUPAAF field. */

/* Bits 17..16 : Override enable: ovrEnPwrupAdc */
#define RADIO_QOVERRIDE18_OVRENPWRUPADC_Pos (16UL) /*!< Position of OVRENPWRUPADC field. */
#define RADIO_QOVERRIDE18_OVRENPWRUPADC_Msk (0x3UL << RADIO_QOVERRIDE18_OVRENPWRUPADC_Pos) /*!< Bit mask of OVRENPWRUPADC field. */

/* Bit 15 : Override enable: ovrEnPwrupPbias */
#define RADIO_QOVERRIDE18_OVRENPWRUPPBIAS_Pos (15UL) /*!< Position of OVRENPWRUPPBIAS field. */
#define RADIO_QOVERRIDE18_OVRENPWRUPPBIAS_Msk (0x1UL << RADIO_QOVERRIDE18_OVRENPWRUPPBIAS_Pos) /*!< Bit mask of OVRENPWRUPPBIAS field. */

/* Bits 14..13 : Override enable: ovrEnPwrupFs */
#define RADIO_QOVERRIDE18_OVRENPWRUPFS_Pos (13UL) /*!< Position of OVRENPWRUPFS field. */
#define RADIO_QOVERRIDE18_OVRENPWRUPFS_Msk (0x3UL << RADIO_QOVERRIDE18_OVRENPWRUPFS_Pos) /*!< Bit mask of OVRENPWRUPFS field. */

/* Bit 12 : Override enable: ovrEnFsStart */
#define RADIO_QOVERRIDE18_OVRENFSSTART_Pos (12UL) /*!< Position of OVRENFSSTART field. */
#define RADIO_QOVERRIDE18_OVRENFSSTART_Msk (0x1UL << RADIO_QOVERRIDE18_OVRENFSSTART_Pos) /*!< Bit mask of OVRENFSSTART field. */

/* Bit 11 : Override enable: ovrEnArstFs */
#define RADIO_QOVERRIDE18_OVRENARSTFS_Pos (11UL) /*!< Position of OVRENARSTFS field. */
#define RADIO_QOVERRIDE18_OVRENARSTFS_Msk (0x1UL << RADIO_QOVERRIDE18_OVRENARSTFS_Pos) /*!< Bit mask of OVRENARSTFS field. */

/* Bit 10 : Override enable: ovrEnRxDigEn */
#define RADIO_QOVERRIDE18_OVRENRXDIGEN_Pos (10UL) /*!< Position of OVRENRXDIGEN field. */
#define RADIO_QOVERRIDE18_OVRENRXDIGEN_Msk (0x1UL << RADIO_QOVERRIDE18_OVRENRXDIGEN_Pos) /*!< Bit mask of OVRENRXDIGEN field. */

/* Bit 9 : Override enable: ovrEnAdcCkEn */
#define RADIO_QOVERRIDE18_OVRENADCCKEN_Pos (9UL) /*!< Position of OVRENADCCKEN field. */
#define RADIO_QOVERRIDE18_OVRENADCCKEN_Msk (0x1UL << RADIO_QOVERRIDE18_OVRENADCCKEN_Pos) /*!< Bit mask of OVRENADCCKEN field. */

/* Bit 8 : Override enable: ovrEnFsCkEn */
#define RADIO_QOVERRIDE18_OVRENFSCKEN_Pos (8UL) /*!< Position of OVRENFSCKEN field. */
#define RADIO_QOVERRIDE18_OVRENFSCKEN_Msk (0x1UL << RADIO_QOVERRIDE18_OVRENFSCKEN_Pos) /*!< Bit mask of OVRENFSCKEN field. */

/* Register: RADIO_QOVERRIDE19 */
/* Description: Trim value override register 19 for nRF52 */

/* Bits 31..30 : Override value: ovrValPwrupTxDac */
#define RADIO_QOVERRIDE19_OVRVALPWRUPTXDAC_Pos (30UL) /*!< Position of OVRVALPWRUPTXDAC field. */
#define RADIO_QOVERRIDE19_OVRVALPWRUPTXDAC_Msk (0x3UL << RADIO_QOVERRIDE19_OVRVALPWRUPTXDAC_Pos) /*!< Bit mask of OVRVALPWRUPTXDAC field. */

/* Bit 29 : Override value: ovrValPwrupTxPa */
#define RADIO_QOVERRIDE19_OVRVALPWRUPTXPA_Pos (29UL) /*!< Position of OVRVALPWRUPTXPA field. */
#define RADIO_QOVERRIDE19_OVRVALPWRUPTXPA_Msk (0x1UL << RADIO_QOVERRIDE19_OVRVALPWRUPTXPA_Pos) /*!< Bit mask of OVRVALPWRUPTXPA field. */

/* Bits 28..27 : Override value: ovrValPwrupTx */
#define RADIO_QOVERRIDE19_OVRVALPWRUPTX_Pos (27UL) /*!< Position of OVRVALPWRUPTX field. */
#define RADIO_QOVERRIDE19_OVRVALPWRUPTX_Msk (0x3UL << RADIO_QOVERRIDE19_OVRVALPWRUPTX_Pos) /*!< Bit mask of OVRVALPWRUPTX field. */

/* Bit 26 : Override value: ovrValArstAdc */
#define RADIO_QOVERRIDE19_OVRVALARSTADC_Pos (26UL) /*!< Position of OVRVALARSTADC field. */
#define RADIO_QOVERRIDE19_OVRVALARSTADC_Msk (0x1UL << RADIO_QOVERRIDE19_OVRVALARSTADC_Pos) /*!< Bit mask of OVRVALARSTADC field. */

/* Bit 25 : Override value: ovrValRfMixEn */
#define RADIO_QOVERRIDE19_OVRVALRFMIXEN_Pos (25UL) /*!< Position of OVRVALRFMIXEN field. */
#define RADIO_QOVERRIDE19_OVRVALRFMIXEN_Msk (0x1UL << RADIO_QOVERRIDE19_OVRVALRFMIXEN_Pos) /*!< Bit mask of OVRVALRFMIXEN field. */

/* Bit 24 : Override value: ovrValPwrupPkd */
#define RADIO_QOVERRIDE19_OVRVALPWRUPPKD_Pos (24UL) /*!< Position of OVRVALPWRUPPKD field. */
#define RADIO_QOVERRIDE19_OVRVALPWRUPPKD_Msk (0x1UL << RADIO_QOVERRIDE19_OVRVALPWRUPPKD_Pos) /*!< Bit mask of OVRVALPWRUPPKD field. */

/* Bits 23..22 : Override value: ovrValPwrupLna */
#define RADIO_QOVERRIDE19_OVRVALPWRUPLNA_Pos (22UL) /*!< Position of OVRVALPWRUPLNA field. */
#define RADIO_QOVERRIDE19_OVRVALPWRUPLNA_Msk (0x3UL << RADIO_QOVERRIDE19_OVRVALPWRUPLNA_Pos) /*!< Bit mask of OVRVALPWRUPLNA field. */

/* Bits 21..20 : Override value: ovrValPwrupMix */
#define RADIO_QOVERRIDE19_OVRVALPWRUPMIX_Pos (20UL) /*!< Position of OVRVALPWRUPMIX field. */
#define RADIO_QOVERRIDE19_OVRVALPWRUPMIX_Msk (0x3UL << RADIO_QOVERRIDE19_OVRVALPWRUPMIX_Pos) /*!< Bit mask of OVRVALPWRUPMIX field. */

/* Bits 19..18 : Override value: ovrValPwrupAaf */
#define RADIO_QOVERRIDE19_OVRVALPWRUPAAF_Pos (18UL) /*!< Position of OVRVALPWRUPAAF field. */
#define RADIO_QOVERRIDE19_OVRVALPWRUPAAF_Msk (0x3UL << RADIO_QOVERRIDE19_OVRVALPWRUPAAF_Pos) /*!< Bit mask of OVRVALPWRUPAAF field. */

/* Bits 17..16 : Override value: ovrVlPwrupAdc */
#define RADIO_QOVERRIDE19_OVRVLPWRUPADC_Pos (16UL) /*!< Position of OVRVLPWRUPADC field. */
#define RADIO_QOVERRIDE19_OVRVLPWRUPADC_Msk (0x3UL << RADIO_QOVERRIDE19_OVRVLPWRUPADC_Pos) /*!< Bit mask of OVRVLPWRUPADC field. */

/* Bit 15 : Override value: ovrValPwrupPbias */
#define RADIO_QOVERRIDE19_OVRVALPWRUPPBIAS_Pos (15UL) /*!< Position of OVRVALPWRUPPBIAS field. */
#define RADIO_QOVERRIDE19_OVRVALPWRUPPBIAS_Msk (0x1UL << RADIO_QOVERRIDE19_OVRVALPWRUPPBIAS_Pos) /*!< Bit mask of OVRVALPWRUPPBIAS field. */

/* Bits 14..13 : Override value: ovrValPwrupFs */
#define RADIO_QOVERRIDE19_OVRVALPWRUPFS_Pos (13UL) /*!< Position of OVRVALPWRUPFS field. */
#define RADIO_QOVERRIDE19_OVRVALPWRUPFS_Msk (0x3UL << RADIO_QOVERRIDE19_OVRVALPWRUPFS_Pos) /*!< Bit mask of OVRVALPWRUPFS field. */

/* Bit 12 : Override value: ovrValFsStart */
#define RADIO_QOVERRIDE19_OVRVALFSSTART_Pos (12UL) /*!< Position of OVRVALFSSTART field. */
#define RADIO_QOVERRIDE19_OVRVALFSSTART_Msk (0x1UL << RADIO_QOVERRIDE19_OVRVALFSSTART_Pos) /*!< Bit mask of OVRVALFSSTART field. */

/* Bit 11 : Override value: ovrValArstFs */
#define RADIO_QOVERRIDE19_OVRVALARSTFS_Pos (11UL) /*!< Position of OVRVALARSTFS field. */
#define RADIO_QOVERRIDE19_OVRVALARSTFS_Msk (0x1UL << RADIO_QOVERRIDE19_OVRVALARSTFS_Pos) /*!< Bit mask of OVRVALARSTFS field. */

/* Bit 10 : Override value:  ovrValRxDigEn */
#define RADIO_QOVERRIDE19_OVRVALRXDIGEN_Pos (10UL) /*!< Position of OVRVALRXDIGEN field. */
#define RADIO_QOVERRIDE19_OVRVALRXDIGEN_Msk (0x1UL << RADIO_QOVERRIDE19_OVRVALRXDIGEN_Pos) /*!< Bit mask of OVRVALRXDIGEN field. */

/* Bit 9 : Override value: ovrValAdcCkEn */
#define RADIO_QOVERRIDE19_OVRVALADCCKEN_Pos (9UL) /*!< Position of OVRVALADCCKEN field. */
#define RADIO_QOVERRIDE19_OVRVALADCCKEN_Msk (0x1UL << RADIO_QOVERRIDE19_OVRVALADCCKEN_Pos) /*!< Bit mask of OVRVALADCCKEN field. */

/* Bit 8 : Override value: ovrValFsCkEn */
#define RADIO_QOVERRIDE19_OVRVALFSCKEN_Pos (8UL) /*!< Position of OVRVALFSCKEN field. */
#define RADIO_QOVERRIDE19_OVRVALFSCKEN_Msk (0x1UL << RADIO_QOVERRIDE19_OVRVALFSCKEN_Pos) /*!< Bit mask of OVRVALFSCKEN field. */

/* Bits 7..0 : Override value: tReduceTrxSwitch */
#define RADIO_QOVERRIDE19_TREDUCETRXSWITCH_Pos (0UL) /*!< Position of TREDUCETRXSWITCH field. */
#define RADIO_QOVERRIDE19_TREDUCETRXSWITCH_Msk (0xFFUL << RADIO_QOVERRIDE19_TREDUCETRXSWITCH_Pos) /*!< Bit mask of TREDUCETRXSWITCH field. */

/* Register: RADIO_QOVERRIDE20 */
/* Description: Trim value override register 20 for nRF52 */

/* Bit 31 : if '1' enable override for the parameters specified in this register */
#define RADIO_QOVERRIDE20_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_QOVERRIDE20_ENABLE_Msk (0x1UL << RADIO_QOVERRIDE20_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bits 10..8 : Set LNA current. For Energy, Normal, and Hyper mode */
#define RADIO_QOVERRIDE20_LNACURR_Pos (8UL) /*!< Position of LNACURR field. */
#define RADIO_QOVERRIDE20_LNACURR_Msk (0x7UL << RADIO_QOVERRIDE20_LNACURR_Pos) /*!< Bit mask of LNACURR field. */

/* Bit 2 : Enable extra AAF filter stage */
#define RADIO_QOVERRIDE20_AAFENSTAGE_Pos (2UL) /*!< Position of AAFENSTAGE field. */
#define RADIO_QOVERRIDE20_AAFENSTAGE_Msk (0x1UL << RADIO_QOVERRIDE20_AAFENSTAGE_Pos) /*!< Bit mask of AAFENSTAGE field. */

/* Bit 1 : IF frequency, 0=1MHz (for &lt; =1Mbps), 1=2MHz (for 2Mbps) */
#define RADIO_QOVERRIDE20_AAFFREQ_Pos (1UL) /*!< Position of AAFFREQ field. */
#define RADIO_QOVERRIDE20_AAFFREQ_Msk (0x1UL << RADIO_QOVERRIDE20_AAFFREQ_Pos) /*!< Bit mask of AAFFREQ field. */

/* Bit 0 : Demodulator mode override value. 1=hyper,0=standard */
#define RADIO_QOVERRIDE20_DEMOD_Pos (0UL) /*!< Position of DEMOD field. */
#define RADIO_QOVERRIDE20_DEMOD_Msk (0x1UL << RADIO_QOVERRIDE20_DEMOD_Pos) /*!< Bit mask of DEMOD field. */
#define RADIO_QOVERRIDE20_DEMOD_Standard (0UL) /*!< Hypermode disabled (override value) */
#define RADIO_QOVERRIDE20_DEMOD_Hyper (1UL) /*!< Hypermode enabled (override value) */

/* Register: RADIO_QOVERRIDE21 */
/* Description: Trim value override register 21 for nRF52 */

/* Bit 31 : Enable or disable override of default trim values */
#define RADIO_QOVERRIDE21_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_QOVERRIDE21_ENABLE_Msk (0x1UL << RADIO_QOVERRIDE21_ENABLE_Pos) /*!< Bit mask of ENABLE field. */
#define RADIO_QOVERRIDE21_ENABLE_Disabled (0UL) /*!< Disable */
#define RADIO_QOVERRIDE21_ENABLE_Enabled (1UL) /*!< Enable */

/* Bits 27..26 : Debug: Control of PA RAMP time, Up/ down */
#define RADIO_QOVERRIDE21_TXPASRAMP0V9_Pos (26UL) /*!< Position of TXPASRAMP0V9 field. */
#define RADIO_QOVERRIDE21_TXPASRAMP0V9_Msk (0x3UL << RADIO_QOVERRIDE21_TXPASRAMP0V9_Pos) /*!< Bit mask of TXPASRAMP0V9 field. */

/* Bit 24 : Override enable */
#define RADIO_QOVERRIDE21_TDELTAOVREN_Pos (24UL) /*!< Position of TDELTAOVREN field. */
#define RADIO_QOVERRIDE21_TDELTAOVREN_Msk (0x1UL << RADIO_QOVERRIDE21_TDELTAOVREN_Pos) /*!< Bit mask of TDELTAOVREN field. */

/* Bits 23..16 : Override for tDeltaTxSend (full resolution) */
#define RADIO_QOVERRIDE21_TDELTATXSEND_Pos (16UL) /*!< Position of TDELTATXSEND field. */
#define RADIO_QOVERRIDE21_TDELTATXSEND_Msk (0xFFUL << RADIO_QOVERRIDE21_TDELTATXSEND_Pos) /*!< Bit mask of TDELTATXSEND field. */

/* Bits 15..8 : Override for tDeltaPipe (full resolution) */
#define RADIO_QOVERRIDE21_TDELTAPIPE_Pos (8UL) /*!< Position of TDELTAPIPE field. */
#define RADIO_QOVERRIDE21_TDELTAPIPE_Msk (0xFFUL << RADIO_QOVERRIDE21_TDELTAPIPE_Pos) /*!< Bit mask of TDELTAPIPE field. */

/* Bits 7..0 : Override for tDeltaPwrdnPa (full resolution) */
#define RADIO_QOVERRIDE21_TDELTAPWRDNPA_Pos (0UL) /*!< Position of TDELTAPWRDNPA field. */
#define RADIO_QOVERRIDE21_TDELTAPWRDNPA_Msk (0xFFUL << RADIO_QOVERRIDE21_TDELTAPWRDNPA_Pos) /*!< Bit mask of TDELTAPWRDNPA field. */

/* Register: RADIO_QOVERRIDE22 */
/* Description: Trim value override register 22 for nRF52 */

/* Bit 31 : Enable or disable override of default trim values */
#define RADIO_QOVERRIDE22_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_QOVERRIDE22_ENABLE_Msk (0x1UL << RADIO_QOVERRIDE22_ENABLE_Pos) /*!< Bit mask of ENABLE field. */
#define RADIO_QOVERRIDE22_ENABLE_Disabled (0UL) /*!< Disable */
#define RADIO_QOVERRIDE22_ENABLE_Enabled (1UL) /*!< Enable */

/* Bits 25..16 : Additional delay to hold Tx/Rx turnaround, full resolution [250ns] */
#define RADIO_QOVERRIDE22_TRXTXTURNAROUNDHOLD_Pos (16UL) /*!< Position of TRXTXTURNAROUNDHOLD field. */
#define RADIO_QOVERRIDE22_TRXTXTURNAROUNDHOLD_Msk (0x3FFUL << RADIO_QOVERRIDE22_TRXTXTURNAROUNDHOLD_Pos) /*!< Bit mask of TRXTXTURNAROUNDHOLD field. */

/* Bit 8 : Disable or enable hypermode fix for ANT */
#define RADIO_QOVERRIDE22_DISABLEHYPERANT_Pos (8UL) /*!< Position of DISABLEHYPERANT field. */
#define RADIO_QOVERRIDE22_DISABLEHYPERANT_Msk (0x1UL << RADIO_QOVERRIDE22_DISABLEHYPERANT_Pos) /*!< Bit mask of DISABLEHYPERANT field. */
#define RADIO_QOVERRIDE22_DISABLEHYPERANT_Enabled (0UL) /*!< Enable */
#define RADIO_QOVERRIDE22_DISABLEHYPERANT_Disabled (1UL) /*!< Disable */

/* Bits 6..4 : Override for dsssMinPeakCount */
#define RADIO_QOVERRIDE22_DSSSMINPEAKCOUNT_Pos (4UL) /*!< Position of DSSSMINPEAKCOUNT field. */
#define RADIO_QOVERRIDE22_DSSSMINPEAKCOUNT_Msk (0x7UL << RADIO_QOVERRIDE22_DSSSMINPEAKCOUNT_Pos) /*!< Bit mask of DSSSMINPEAKCOUNT field. */

/* Bits 2..0 : Override for dsssPeakDistanceTolerance */
#define RADIO_QOVERRIDE22_DSSSPEAKDISTTOL_Pos (0UL) /*!< Position of DSSSPEAKDISTTOL field. */
#define RADIO_QOVERRIDE22_DSSSPEAKDISTTOL_Msk (0x7UL << RADIO_QOVERRIDE22_DSSSPEAKDISTTOL_Pos) /*!< Bit mask of DSSSPEAKDISTTOL field. */

/* Register: RADIO_DEBUGPSEL_CLOCK */
/* Description: Pin select for RADIO clock (direct mode, base band debug. Refer to digip_064 and digip_061, txCk and ckDataIn signals) */

/* Bit 31 : Connection */
#define RADIO_DEBUGPSEL_CLOCK_CONNECT_Pos (31UL) /*!< Position of CONNECT field. */
#define RADIO_DEBUGPSEL_CLOCK_CONNECT_Msk (0x1UL << RADIO_DEBUGPSEL_CLOCK_CONNECT_Pos) /*!< Bit mask of CONNECT field. */
#define RADIO_DEBUGPSEL_CLOCK_CONNECT_Connected (0UL) /*!< Connect */
#define RADIO_DEBUGPSEL_CLOCK_CONNECT_Disconnected (1UL) /*!< Disconnect */

/* Bits 9..8 : Port number */
#define RADIO_DEBUGPSEL_CLOCK_PORT_Pos (8UL) /*!< Position of PORT field. */
#define RADIO_DEBUGPSEL_CLOCK_PORT_Msk (0x3UL << RADIO_DEBUGPSEL_CLOCK_PORT_Pos) /*!< Bit mask of PORT field. */

/* Bits 4..0 : Pin number */
#define RADIO_DEBUGPSEL_CLOCK_PIN_Pos (0UL) /*!< Position of PIN field. */
#define RADIO_DEBUGPSEL_CLOCK_PIN_Msk (0x1FUL << RADIO_DEBUGPSEL_CLOCK_PIN_Pos) /*!< Bit mask of PIN field. */

/* Register: RADIO_DEBUGPSEL_DATA */
/* Description: Pin select for RADIO data (direct mode, base band debug. Refer to digip_064 and digip_061, txRadioData and dataIn signals) */

/* Bit 31 : Connection */
#define RADIO_DEBUGPSEL_DATA_CONNECT_Pos (31UL) /*!< Position of CONNECT field. */
#define RADIO_DEBUGPSEL_DATA_CONNECT_Msk (0x1UL << RADIO_DEBUGPSEL_DATA_CONNECT_Pos) /*!< Bit mask of CONNECT field. */
#define RADIO_DEBUGPSEL_DATA_CONNECT_Connected (0UL) /*!< Connect */
#define RADIO_DEBUGPSEL_DATA_CONNECT_Disconnected (1UL) /*!< Disconnect */

/* Bits 9..8 : Port number */
#define RADIO_DEBUGPSEL_DATA_PORT_Pos (8UL) /*!< Position of PORT field. */
#define RADIO_DEBUGPSEL_DATA_PORT_Msk (0x3UL << RADIO_DEBUGPSEL_DATA_PORT_Pos) /*!< Bit mask of PORT field. */

/* Bits 4..0 : Pin number */
#define RADIO_DEBUGPSEL_DATA_PIN_Pos (0UL) /*!< Position of PIN field. */
#define RADIO_DEBUGPSEL_DATA_PIN_Msk (0x1FUL << RADIO_DEBUGPSEL_DATA_PIN_Pos) /*!< Bit mask of PIN field. */

/* Register: RADIO_ATEPANTHER */
/* Description: Analog test bus control for Panther radio */

/* Bits 26..25 : atePb */
#define RADIO_ATEPANTHER_ATEPB_Pos (25UL) /*!< Position of ATEPB field. */
#define RADIO_ATEPANTHER_ATEPB_Msk (0x3UL << RADIO_ATEPANTHER_ATEPB_Pos) /*!< Bit mask of ATEPB field. */

/* Bits 21..16 : ateFs: Configuration register for automatic test bus */
#define RADIO_ATEPANTHER_ATEFS_Pos (16UL) /*!< Position of ATEFS field. */
#define RADIO_ATEPANTHER_ATEFS_Msk (0x3FUL << RADIO_ATEPANTHER_ATEFS_Pos) /*!< Bit mask of ATEFS field. */

/* Bits 13..8 : ateRxAaf: Enable RXAAF test mode when &gt;0 */
#define RADIO_ATEPANTHER_ATERXAAF_Pos (8UL) /*!< Position of ATERXAAF field. */
#define RADIO_ATEPANTHER_ATERXAAF_Msk (0x3FUL << RADIO_ATEPANTHER_ATERXAAF_Pos) /*!< Bit mask of ATERXAAF field. */

/* Bits 7..6 : ateAdc: Enable ADC test mode when &gt;0 */
#define RADIO_ATEPANTHER_ATEADC_Pos (6UL) /*!< Position of ATEADC field. */
#define RADIO_ATEPANTHER_ATEADC_Msk (0x3UL << RADIO_ATEPANTHER_ATEADC_Pos) /*!< Bit mask of ATEADC field. */

/* Bits 5..0 : ateRxMix: Enable RXMix test mode when &gt;0 */
#define RADIO_ATEPANTHER_ATERXMIX_Pos (0UL) /*!< Position of ATERXMIX field. */
#define RADIO_ATEPANTHER_ATERXMIX_Msk (0x3FUL << RADIO_ATEPANTHER_ATERXMIX_Pos) /*!< Bit mask of ATERXMIX field. */

/* Register: RADIO_ACQENABLE */
/* Description: Enable or disable data acquisition (refer to 4378_164) */

/* Bit 0 : Enable or disable data acquisition */
#define RADIO_ACQENABLE_ENABLE_Pos (0UL) /*!< Position of ENABLE field. */
#define RADIO_ACQENABLE_ENABLE_Msk (0x1UL << RADIO_ACQENABLE_ENABLE_Pos) /*!< Bit mask of ENABLE field. */
#define RADIO_ACQENABLE_ENABLE_Disabled (0UL) /*!< Data acquisition is disabled */
#define RADIO_ACQENABLE_ENABLE_Enabled (1UL) /*!< Data acquisition is enabled */

/* Register: RADIO_ACQDMA_PTR */
/* Description: EasyDMA pointer for Data acquisition (refer to 4378_164) */

/* Bits 31..0 : EasyDMA pointer for Data acquisition */
#define RADIO_ACQDMA_PTR_PTR_Pos (0UL) /*!< Position of PTR field. */
#define RADIO_ACQDMA_PTR_PTR_Msk (0xFFFFFFFFUL << RADIO_ACQDMA_PTR_PTR_Pos) /*!< Bit mask of PTR field. */

/* Register: RADIO_ACQDMA_MAXCNT */
/* Description: Maximum number of 32-bit words to transfer (refer to 4378_164) */

/* Bits 15..0 : Maximum number of 32-bit words to transfer. */
#define RADIO_ACQDMA_MAXCNT_MAXCNT_Pos (0UL) /*!< Position of MAXCNT field. */
#define RADIO_ACQDMA_MAXCNT_MAXCNT_Msk (0xFFFFUL << RADIO_ACQDMA_MAXCNT_MAXCNT_Pos) /*!< Bit mask of MAXCNT field. */

/* Register: RADIO_ACQDMA_AMOUNT */
/* Description: Number of 32-bit words transferred in the last transaction (refer to 4378_164) */

/* Bits 15..0 : Number of 32-bit words transferred in the last transaction */
#define RADIO_ACQDMA_AMOUNT_AMOUNT_Pos (0UL) /*!< Position of AMOUNT field. */
#define RADIO_ACQDMA_AMOUNT_AMOUNT_Msk (0xFFFFUL << RADIO_ACQDMA_AMOUNT_AMOUNT_Pos) /*!< Bit mask of AMOUNT field. */

/* Register: RADIO_ACQMODE */
/* Description: Data acquisition capture mode (refer to 4378_164) */

/* Bit 0 : Data acquisition capture mode */
#define RADIO_ACQMODE_ACQMODE_Pos (0UL) /*!< Position of ACQMODE field. */
#define RADIO_ACQMODE_ACQMODE_Msk (0x1UL << RADIO_ACQMODE_ACQMODE_Pos) /*!< Bit mask of ACQMODE field. */
#define RADIO_ACQMODE_ACQMODE_IANDQ (0UL) /*!< Logging ADCI and ADCQ */

/* Register: RADIO_ACQAHBCNF */
/* Description: Data acquisition EasyDMA AHB configuration register (refer to 4378_164) */

/* Bit 0 :   */
#define RADIO_ACQAHBCNF_ACQAHBCNF_Pos (0UL) /*!< Position of ACQAHBCNF field. */
#define RADIO_ACQAHBCNF_ACQAHBCNF_Msk (0x1UL << RADIO_ACQAHBCNF_ACQAHBCNF_Pos) /*!< Bit mask of ACQAHBCNF field. */
#define RADIO_ACQAHBCNF_ACQAHBCNF_UTXRX (0UL) /*!< The EasyDMA channel in the TX/RX chain is using the AHB bus */
#define RADIO_ACQAHBCNF_ACQAHBCNF_ACQ (1UL) /*!< The EasyDMA channel in the Data acquisition module is using the AHB bus */

/* Register: RADIO_PCGC_PENALTY */
/* Description: Power and clock */

/* Bit 0 : Power and clock */
#define RADIO_PCGC_PENALTY_PCGC_PENALTY_Pos (0UL) /*!< Position of PCGC_PENALTY field. */
#define RADIO_PCGC_PENALTY_PCGC_PENALTY_Msk (0x1UL << RADIO_PCGC_PENALTY_PCGC_PENALTY_Pos) /*!< Bit mask of PCGC_PENALTY field. */

/* Register: RADIO_PCGC_OVERRIDE */
/* Description: Power and clock */

/* Bit 0 : Power and clock */
#define RADIO_PCGC_OVERRIDE_PCGC_OVERRIDE_Pos (0UL) /*!< Position of PCGC_OVERRIDE field. */
#define RADIO_PCGC_OVERRIDE_PCGC_OVERRIDE_Msk (0x1UL << RADIO_PCGC_OVERRIDE_PCGC_OVERRIDE_Pos) /*!< Bit mask of PCGC_OVERRIDE field. */

/* Register: RADIO_PCGC_CLK_REQ */
/* Description: Power and clock */

/* Bit 0 : Power and clock */
#define RADIO_PCGC_CLK_REQ_PCGC_CLK_REQ_Pos (0UL) /*!< Position of PCGC_CLK_REQ field. */
#define RADIO_PCGC_CLK_REQ_PCGC_CLK_REQ_Msk (0x1UL << RADIO_PCGC_CLK_REQ_PCGC_CLK_REQ_Pos) /*!< Bit mask of PCGC_CLK_REQ field. */

/* Register: RADIO_PCGC_BACKDOOR */
/* Description: Power and clock */

/* Bit 0 : Power and clock */
#define RADIO_PCGC_BACKDOOR_PCGC_BACKDOOR_Pos (0UL) /*!< Position of PCGC_BACKDOOR field. */
#define RADIO_PCGC_BACKDOOR_PCGC_BACKDOOR_Msk (0x1UL << RADIO_PCGC_BACKDOOR_PCGC_BACKDOOR_Pos) /*!< Bit mask of PCGC_BACKDOOR field. */

/* Register: RADIO_PCGC_FORCEREG */
/* Description: Power and clock */

/* Bit 0 : Power and clock */
#define RADIO_PCGC_FORCEREG_PCGC_FORCEREG_Pos (0UL) /*!< Position of PCGC_FORCEREG field. */
#define RADIO_PCGC_FORCEREG_PCGC_FORCEREG_Msk (0x1UL << RADIO_PCGC_FORCEREG_PCGC_FORCEREG_Pos) /*!< Bit mask of PCGC_FORCEREG field. */

/* Register: RADIO_POWER */
/* Description: Peripheral power control */

/* Bit 0 : Peripheral power control. The peripheral and its registers will be reset to its initial state by switching the peripheral off and then back on again. */
#define RADIO_POWER_POWER_Pos (0UL) /*!< Position of POWER field. */
#define RADIO_POWER_POWER_Msk (0x1UL << RADIO_POWER_POWER_Pos) /*!< Bit mask of POWER field. */
#define RADIO_POWER_POWER_Disabled (0UL) /*!< Peripheral is powered off */
#define RADIO_POWER_POWER_Enabled (1UL) /*!< Peripheral is powered on */


/* Peripheral: RNG */
/* Description: Random Number Generator */

/* Register: RNG_TASKS_START */
/* Description: Task starting the random number generator */

/* Bit 0 :   */
#define RNG_TASKS_START_TASKS_START_Pos (0UL) /*!< Position of TASKS_START field. */
#define RNG_TASKS_START_TASKS_START_Msk (0x1UL << RNG_TASKS_START_TASKS_START_Pos) /*!< Bit mask of TASKS_START field. */

/* Register: RNG_TASKS_STOP */
/* Description: Task stopping the random number generator */

/* Bit 0 :   */
#define RNG_TASKS_STOP_TASKS_STOP_Pos (0UL) /*!< Position of TASKS_STOP field. */
#define RNG_TASKS_STOP_TASKS_STOP_Msk (0x1UL << RNG_TASKS_STOP_TASKS_STOP_Pos) /*!< Bit mask of TASKS_STOP field. */

/* Register: RNG_EVENTS_VALRDY */
/* Description: Event being generated for every new random number written to the VALUE register */

/* Bit 0 :   */
#define RNG_EVENTS_VALRDY_EVENTS_VALRDY_Pos (0UL) /*!< Position of EVENTS_VALRDY field. */
#define RNG_EVENTS_VALRDY_EVENTS_VALRDY_Msk (0x1UL << RNG_EVENTS_VALRDY_EVENTS_VALRDY_Pos) /*!< Bit mask of EVENTS_VALRDY field. */

/* Register: RNG_SHORTS */
/* Description: Shortcut register */

/* Bit 0 : Shortcut between VALRDY event and STOP task */
#define RNG_SHORTS_VALRDY_STOP_Pos (0UL) /*!< Position of VALRDY_STOP field. */
#define RNG_SHORTS_VALRDY_STOP_Msk (0x1UL << RNG_SHORTS_VALRDY_STOP_Pos) /*!< Bit mask of VALRDY_STOP field. */
#define RNG_SHORTS_VALRDY_STOP_Disabled (0UL) /*!< Disable shortcut */
#define RNG_SHORTS_VALRDY_STOP_Enabled (1UL) /*!< Enable shortcut */

/* Register: RNG_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 0 : Enable or disable interrupt for VALRDY event */
#define RNG_INTEN_VALRDY_Pos (0UL) /*!< Position of VALRDY field. */
#define RNG_INTEN_VALRDY_Msk (0x1UL << RNG_INTEN_VALRDY_Pos) /*!< Bit mask of VALRDY field. */
#define RNG_INTEN_VALRDY_Disabled (0UL) /*!< Disable */
#define RNG_INTEN_VALRDY_Enabled (1UL) /*!< Enable */

/* Register: RNG_INTENSET */
/* Description: Enable interrupt */

/* Bit 0 : Write '1' to enable interrupt for VALRDY event */
#define RNG_INTENSET_VALRDY_Pos (0UL) /*!< Position of VALRDY field. */
#define RNG_INTENSET_VALRDY_Msk (0x1UL << RNG_INTENSET_VALRDY_Pos) /*!< Bit mask of VALRDY field. */
#define RNG_INTENSET_VALRDY_Disabled (0UL) /*!< Read: Disabled */
#define RNG_INTENSET_VALRDY_Enabled (1UL) /*!< Read: Enabled */
#define RNG_INTENSET_VALRDY_Set (1UL) /*!< Enable */

/* Register: RNG_INTENCLR */
/* Description: Disable interrupt */

/* Bit 0 : Write '1' to disable interrupt for VALRDY event */
#define RNG_INTENCLR_VALRDY_Pos (0UL) /*!< Position of VALRDY field. */
#define RNG_INTENCLR_VALRDY_Msk (0x1UL << RNG_INTENCLR_VALRDY_Pos) /*!< Bit mask of VALRDY field. */
#define RNG_INTENCLR_VALRDY_Disabled (0UL) /*!< Read: Disabled */
#define RNG_INTENCLR_VALRDY_Enabled (1UL) /*!< Read: Enabled */
#define RNG_INTENCLR_VALRDY_Clear (1UL) /*!< Disable */

/* Register: RNG_CONFIG */
/* Description: Configuration register */

/* Bit 0 : Bias correction */
#define RNG_CONFIG_DERCEN_Pos (0UL) /*!< Position of DERCEN field. */
#define RNG_CONFIG_DERCEN_Msk (0x1UL << RNG_CONFIG_DERCEN_Pos) /*!< Bit mask of DERCEN field. */
#define RNG_CONFIG_DERCEN_Disabled (0UL) /*!< Disabled */
#define RNG_CONFIG_DERCEN_Enabled (1UL) /*!< Enabled */

/* Register: RNG_VALUE */
/* Description: Output random number */

/* Bits 7..0 : Generated random number */
#define RNG_VALUE_VALUE_Pos (0UL) /*!< Position of VALUE field. */
#define RNG_VALUE_VALUE_Msk (0xFFUL << RNG_VALUE_VALUE_Pos) /*!< Bit mask of VALUE field. */

/* Register: RNG_POWER */
/* Description: Peripheral power control */

/* Bit 0 : Peripheral power control. The peripheral and its registers will be reset to its initial state by switching the peripheral off and then back on again. */
#define RNG_POWER_POWER_Pos (0UL) /*!< Position of POWER field. */
#define RNG_POWER_POWER_Msk (0x1UL << RNG_POWER_POWER_Pos) /*!< Bit mask of POWER field. */
#define RNG_POWER_POWER_Disabled (0UL) /*!< Peripheral is powered off */
#define RNG_POWER_POWER_Enabled (1UL) /*!< Peripheral is powered on */


/* Peripheral: RTC */
/* Description: Real time counter 0 */

/* Register: RTC_TASKS_START */
/* Description: Start RTC COUNTER */

/* Bit 0 :   */
#define RTC_TASKS_START_TASKS_START_Pos (0UL) /*!< Position of TASKS_START field. */
#define RTC_TASKS_START_TASKS_START_Msk (0x1UL << RTC_TASKS_START_TASKS_START_Pos) /*!< Bit mask of TASKS_START field. */

/* Register: RTC_TASKS_STOP */
/* Description: Stop RTC COUNTER */

/* Bit 0 :   */
#define RTC_TASKS_STOP_TASKS_STOP_Pos (0UL) /*!< Position of TASKS_STOP field. */
#define RTC_TASKS_STOP_TASKS_STOP_Msk (0x1UL << RTC_TASKS_STOP_TASKS_STOP_Pos) /*!< Bit mask of TASKS_STOP field. */

/* Register: RTC_TASKS_CLEAR */
/* Description: Clear RTC COUNTER */

/* Bit 0 :   */
#define RTC_TASKS_CLEAR_TASKS_CLEAR_Pos (0UL) /*!< Position of TASKS_CLEAR field. */
#define RTC_TASKS_CLEAR_TASKS_CLEAR_Msk (0x1UL << RTC_TASKS_CLEAR_TASKS_CLEAR_Pos) /*!< Bit mask of TASKS_CLEAR field. */

/* Register: RTC_TASKS_TRIGOVRFLW */
/* Description: Set COUNTER to 0xFFFFF0 */

/* Bit 0 :   */
#define RTC_TASKS_TRIGOVRFLW_TASKS_TRIGOVRFLW_Pos (0UL) /*!< Position of TASKS_TRIGOVRFLW field. */
#define RTC_TASKS_TRIGOVRFLW_TASKS_TRIGOVRFLW_Msk (0x1UL << RTC_TASKS_TRIGOVRFLW_TASKS_TRIGOVRFLW_Pos) /*!< Bit mask of TASKS_TRIGOVRFLW field. */

/* Register: RTC_EVENTS_TICK */
/* Description: Event on COUNTER increment */

/* Bit 0 :   */
#define RTC_EVENTS_TICK_EVENTS_TICK_Pos (0UL) /*!< Position of EVENTS_TICK field. */
#define RTC_EVENTS_TICK_EVENTS_TICK_Msk (0x1UL << RTC_EVENTS_TICK_EVENTS_TICK_Pos) /*!< Bit mask of EVENTS_TICK field. */

/* Register: RTC_EVENTS_OVRFLW */
/* Description: Event on COUNTER overflow */

/* Bit 0 :   */
#define RTC_EVENTS_OVRFLW_EVENTS_OVRFLW_Pos (0UL) /*!< Position of EVENTS_OVRFLW field. */
#define RTC_EVENTS_OVRFLW_EVENTS_OVRFLW_Msk (0x1UL << RTC_EVENTS_OVRFLW_EVENTS_OVRFLW_Pos) /*!< Bit mask of EVENTS_OVRFLW field. */

/* Register: RTC_EVENTS_COMPARE */
/* Description: Description collection[n]: Compare event on CC[n] match */

/* Bit 0 :   */
#define RTC_EVENTS_COMPARE_EVENTS_COMPARE_Pos (0UL) /*!< Position of EVENTS_COMPARE field. */
#define RTC_EVENTS_COMPARE_EVENTS_COMPARE_Msk (0x1UL << RTC_EVENTS_COMPARE_EVENTS_COMPARE_Pos) /*!< Bit mask of EVENTS_COMPARE field. */

/* Register: RTC_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 19 : Enable or disable interrupt for COMPARE[3] event */
#define RTC_INTEN_COMPARE3_Pos (19UL) /*!< Position of COMPARE3 field. */
#define RTC_INTEN_COMPARE3_Msk (0x1UL << RTC_INTEN_COMPARE3_Pos) /*!< Bit mask of COMPARE3 field. */
#define RTC_INTEN_COMPARE3_Disabled (0UL) /*!< Disable */
#define RTC_INTEN_COMPARE3_Enabled (1UL) /*!< Enable */

/* Bit 18 : Enable or disable interrupt for COMPARE[2] event */
#define RTC_INTEN_COMPARE2_Pos (18UL) /*!< Position of COMPARE2 field. */
#define RTC_INTEN_COMPARE2_Msk (0x1UL << RTC_INTEN_COMPARE2_Pos) /*!< Bit mask of COMPARE2 field. */
#define RTC_INTEN_COMPARE2_Disabled (0UL) /*!< Disable */
#define RTC_INTEN_COMPARE2_Enabled (1UL) /*!< Enable */

/* Bit 17 : Enable or disable interrupt for COMPARE[1] event */
#define RTC_INTEN_COMPARE1_Pos (17UL) /*!< Position of COMPARE1 field. */
#define RTC_INTEN_COMPARE1_Msk (0x1UL << RTC_INTEN_COMPARE1_Pos) /*!< Bit mask of COMPARE1 field. */
#define RTC_INTEN_COMPARE1_Disabled (0UL) /*!< Disable */
#define RTC_INTEN_COMPARE1_Enabled (1UL) /*!< Enable */

/* Bit 16 : Enable or disable interrupt for COMPARE[0] event */
#define RTC_INTEN_COMPARE0_Pos (16UL) /*!< Position of COMPARE0 field. */
#define RTC_INTEN_COMPARE0_Msk (0x1UL << RTC_INTEN_COMPARE0_Pos) /*!< Bit mask of COMPARE0 field. */
#define RTC_INTEN_COMPARE0_Disabled (0UL) /*!< Disable */
#define RTC_INTEN_COMPARE0_Enabled (1UL) /*!< Enable */

/* Bit 1 : Enable or disable interrupt for OVRFLW event */
#define RTC_INTEN_OVRFLW_Pos (1UL) /*!< Position of OVRFLW field. */
#define RTC_INTEN_OVRFLW_Msk (0x1UL << RTC_INTEN_OVRFLW_Pos) /*!< Bit mask of OVRFLW field. */
#define RTC_INTEN_OVRFLW_Disabled (0UL) /*!< Disable */
#define RTC_INTEN_OVRFLW_Enabled (1UL) /*!< Enable */

/* Bit 0 : Enable or disable interrupt for TICK event */
#define RTC_INTEN_TICK_Pos (0UL) /*!< Position of TICK field. */
#define RTC_INTEN_TICK_Msk (0x1UL << RTC_INTEN_TICK_Pos) /*!< Bit mask of TICK field. */
#define RTC_INTEN_TICK_Disabled (0UL) /*!< Disable */
#define RTC_INTEN_TICK_Enabled (1UL) /*!< Enable */

/* Register: RTC_INTENSET */
/* Description: Enable interrupt */

/* Bit 19 : Write '1' to enable interrupt for COMPARE[3] event */
#define RTC_INTENSET_COMPARE3_Pos (19UL) /*!< Position of COMPARE3 field. */
#define RTC_INTENSET_COMPARE3_Msk (0x1UL << RTC_INTENSET_COMPARE3_Pos) /*!< Bit mask of COMPARE3 field. */
#define RTC_INTENSET_COMPARE3_Disabled (0UL) /*!< Read: Disabled */
#define RTC_INTENSET_COMPARE3_Enabled (1UL) /*!< Read: Enabled */
#define RTC_INTENSET_COMPARE3_Set (1UL) /*!< Enable */

/* Bit 18 : Write '1' to enable interrupt for COMPARE[2] event */
#define RTC_INTENSET_COMPARE2_Pos (18UL) /*!< Position of COMPARE2 field. */
#define RTC_INTENSET_COMPARE2_Msk (0x1UL << RTC_INTENSET_COMPARE2_Pos) /*!< Bit mask of COMPARE2 field. */
#define RTC_INTENSET_COMPARE2_Disabled (0UL) /*!< Read: Disabled */
#define RTC_INTENSET_COMPARE2_Enabled (1UL) /*!< Read: Enabled */
#define RTC_INTENSET_COMPARE2_Set (1UL) /*!< Enable */

/* Bit 17 : Write '1' to enable interrupt for COMPARE[1] event */
#define RTC_INTENSET_COMPARE1_Pos (17UL) /*!< Position of COMPARE1 field. */
#define RTC_INTENSET_COMPARE1_Msk (0x1UL << RTC_INTENSET_COMPARE1_Pos) /*!< Bit mask of COMPARE1 field. */
#define RTC_INTENSET_COMPARE1_Disabled (0UL) /*!< Read: Disabled */
#define RTC_INTENSET_COMPARE1_Enabled (1UL) /*!< Read: Enabled */
#define RTC_INTENSET_COMPARE1_Set (1UL) /*!< Enable */

/* Bit 16 : Write '1' to enable interrupt for COMPARE[0] event */
#define RTC_INTENSET_COMPARE0_Pos (16UL) /*!< Position of COMPARE0 field. */
#define RTC_INTENSET_COMPARE0_Msk (0x1UL << RTC_INTENSET_COMPARE0_Pos) /*!< Bit mask of COMPARE0 field. */
#define RTC_INTENSET_COMPARE0_Disabled (0UL) /*!< Read: Disabled */
#define RTC_INTENSET_COMPARE0_Enabled (1UL) /*!< Read: Enabled */
#define RTC_INTENSET_COMPARE0_Set (1UL) /*!< Enable */

/* Bit 1 : Write '1' to enable interrupt for OVRFLW event */
#define RTC_INTENSET_OVRFLW_Pos (1UL) /*!< Position of OVRFLW field. */
#define RTC_INTENSET_OVRFLW_Msk (0x1UL << RTC_INTENSET_OVRFLW_Pos) /*!< Bit mask of OVRFLW field. */
#define RTC_INTENSET_OVRFLW_Disabled (0UL) /*!< Read: Disabled */
#define RTC_INTENSET_OVRFLW_Enabled (1UL) /*!< Read: Enabled */
#define RTC_INTENSET_OVRFLW_Set (1UL) /*!< Enable */

/* Bit 0 : Write '1' to enable interrupt for TICK event */
#define RTC_INTENSET_TICK_Pos (0UL) /*!< Position of TICK field. */
#define RTC_INTENSET_TICK_Msk (0x1UL << RTC_INTENSET_TICK_Pos) /*!< Bit mask of TICK field. */
#define RTC_INTENSET_TICK_Disabled (0UL) /*!< Read: Disabled */
#define RTC_INTENSET_TICK_Enabled (1UL) /*!< Read: Enabled */
#define RTC_INTENSET_TICK_Set (1UL) /*!< Enable */

/* Register: RTC_INTENCLR */
/* Description: Disable interrupt */

/* Bit 19 : Write '1' to disable interrupt for COMPARE[3] event */
#define RTC_INTENCLR_COMPARE3_Pos (19UL) /*!< Position of COMPARE3 field. */
#define RTC_INTENCLR_COMPARE3_Msk (0x1UL << RTC_INTENCLR_COMPARE3_Pos) /*!< Bit mask of COMPARE3 field. */
#define RTC_INTENCLR_COMPARE3_Disabled (0UL) /*!< Read: Disabled */
#define RTC_INTENCLR_COMPARE3_Enabled (1UL) /*!< Read: Enabled */
#define RTC_INTENCLR_COMPARE3_Clear (1UL) /*!< Disable */

/* Bit 18 : Write '1' to disable interrupt for COMPARE[2] event */
#define RTC_INTENCLR_COMPARE2_Pos (18UL) /*!< Position of COMPARE2 field. */
#define RTC_INTENCLR_COMPARE2_Msk (0x1UL << RTC_INTENCLR_COMPARE2_Pos) /*!< Bit mask of COMPARE2 field. */
#define RTC_INTENCLR_COMPARE2_Disabled (0UL) /*!< Read: Disabled */
#define RTC_INTENCLR_COMPARE2_Enabled (1UL) /*!< Read: Enabled */
#define RTC_INTENCLR_COMPARE2_Clear (1UL) /*!< Disable */

/* Bit 17 : Write '1' to disable interrupt for COMPARE[1] event */
#define RTC_INTENCLR_COMPARE1_Pos (17UL) /*!< Position of COMPARE1 field. */
#define RTC_INTENCLR_COMPARE1_Msk (0x1UL << RTC_INTENCLR_COMPARE1_Pos) /*!< Bit mask of COMPARE1 field. */
#define RTC_INTENCLR_COMPARE1_Disabled (0UL) /*!< Read: Disabled */
#define RTC_INTENCLR_COMPARE1_Enabled (1UL) /*!< Read: Enabled */
#define RTC_INTENCLR_COMPARE1_Clear (1UL) /*!< Disable */

/* Bit 16 : Write '1' to disable interrupt for COMPARE[0] event */
#define RTC_INTENCLR_COMPARE0_Pos (16UL) /*!< Position of COMPARE0 field. */
#define RTC_INTENCLR_COMPARE0_Msk (0x1UL << RTC_INTENCLR_COMPARE0_Pos) /*!< Bit mask of COMPARE0 field. */
#define RTC_INTENCLR_COMPARE0_Disabled (0UL) /*!< Read: Disabled */
#define RTC_INTENCLR_COMPARE0_Enabled (1UL) /*!< Read: Enabled */
#define RTC_INTENCLR_COMPARE0_Clear (1UL) /*!< Disable */

/* Bit 1 : Write '1' to disable interrupt for OVRFLW event */
#define RTC_INTENCLR_OVRFLW_Pos (1UL) /*!< Position of OVRFLW field. */
#define RTC_INTENCLR_OVRFLW_Msk (0x1UL << RTC_INTENCLR_OVRFLW_Pos) /*!< Bit mask of OVRFLW field. */
#define RTC_INTENCLR_OVRFLW_Disabled (0UL) /*!< Read: Disabled */
#define RTC_INTENCLR_OVRFLW_Enabled (1UL) /*!< Read: Enabled */
#define RTC_INTENCLR_OVRFLW_Clear (1UL) /*!< Disable */

/* Bit 0 : Write '1' to disable interrupt for TICK event */
#define RTC_INTENCLR_TICK_Pos (0UL) /*!< Position of TICK field. */
#define RTC_INTENCLR_TICK_Msk (0x1UL << RTC_INTENCLR_TICK_Pos) /*!< Bit mask of TICK field. */
#define RTC_INTENCLR_TICK_Disabled (0UL) /*!< Read: Disabled */
#define RTC_INTENCLR_TICK_Enabled (1UL) /*!< Read: Enabled */
#define RTC_INTENCLR_TICK_Clear (1UL) /*!< Disable */

/* Register: RTC_EVTEN */
/* Description: Enable or disable event routing */

/* Bit 19 : Enable or disable event routing for COMPARE[3] event */
#define RTC_EVTEN_COMPARE3_Pos (19UL) /*!< Position of COMPARE3 field. */
#define RTC_EVTEN_COMPARE3_Msk (0x1UL << RTC_EVTEN_COMPARE3_Pos) /*!< Bit mask of COMPARE3 field. */
#define RTC_EVTEN_COMPARE3_Disabled (0UL) /*!< Disable */
#define RTC_EVTEN_COMPARE3_Enabled (1UL) /*!< Enable */

/* Bit 18 : Enable or disable event routing for COMPARE[2] event */
#define RTC_EVTEN_COMPARE2_Pos (18UL) /*!< Position of COMPARE2 field. */
#define RTC_EVTEN_COMPARE2_Msk (0x1UL << RTC_EVTEN_COMPARE2_Pos) /*!< Bit mask of COMPARE2 field. */
#define RTC_EVTEN_COMPARE2_Disabled (0UL) /*!< Disable */
#define RTC_EVTEN_COMPARE2_Enabled (1UL) /*!< Enable */

/* Bit 17 : Enable or disable event routing for COMPARE[1] event */
#define RTC_EVTEN_COMPARE1_Pos (17UL) /*!< Position of COMPARE1 field. */
#define RTC_EVTEN_COMPARE1_Msk (0x1UL << RTC_EVTEN_COMPARE1_Pos) /*!< Bit mask of COMPARE1 field. */
#define RTC_EVTEN_COMPARE1_Disabled (0UL) /*!< Disable */
#define RTC_EVTEN_COMPARE1_Enabled (1UL) /*!< Enable */

/* Bit 16 : Enable or disable event routing for COMPARE[0] event */
#define RTC_EVTEN_COMPARE0_Pos (16UL) /*!< Position of COMPARE0 field. */
#define RTC_EVTEN_COMPARE0_Msk (0x1UL << RTC_EVTEN_COMPARE0_Pos) /*!< Bit mask of COMPARE0 field. */
#define RTC_EVTEN_COMPARE0_Disabled (0UL) /*!< Disable */
#define RTC_EVTEN_COMPARE0_Enabled (1UL) /*!< Enable */

/* Bit 1 : Enable or disable event routing for OVRFLW event */
#define RTC_EVTEN_OVRFLW_Pos (1UL) /*!< Position of OVRFLW field. */
#define RTC_EVTEN_OVRFLW_Msk (0x1UL << RTC_EVTEN_OVRFLW_Pos) /*!< Bit mask of OVRFLW field. */
#define RTC_EVTEN_OVRFLW_Disabled (0UL) /*!< Disable */
#define RTC_EVTEN_OVRFLW_Enabled (1UL) /*!< Enable */

/* Bit 0 : Enable or disable event routing for TICK event */
#define RTC_EVTEN_TICK_Pos (0UL) /*!< Position of TICK field. */
#define RTC_EVTEN_TICK_Msk (0x1UL << RTC_EVTEN_TICK_Pos) /*!< Bit mask of TICK field. */
#define RTC_EVTEN_TICK_Disabled (0UL) /*!< Disable */
#define RTC_EVTEN_TICK_Enabled (1UL) /*!< Enable */

/* Register: RTC_EVTENSET */
/* Description: Enable event routing */

/* Bit 19 : Write '1' to enable event routing for COMPARE[3] event */
#define RTC_EVTENSET_COMPARE3_Pos (19UL) /*!< Position of COMPARE3 field. */
#define RTC_EVTENSET_COMPARE3_Msk (0x1UL << RTC_EVTENSET_COMPARE3_Pos) /*!< Bit mask of COMPARE3 field. */
#define RTC_EVTENSET_COMPARE3_Disabled (0UL) /*!< Read: Disabled */
#define RTC_EVTENSET_COMPARE3_Enabled (1UL) /*!< Read: Enabled */
#define RTC_EVTENSET_COMPARE3_Set (1UL) /*!< Enable */

/* Bit 18 : Write '1' to enable event routing for COMPARE[2] event */
#define RTC_EVTENSET_COMPARE2_Pos (18UL) /*!< Position of COMPARE2 field. */
#define RTC_EVTENSET_COMPARE2_Msk (0x1UL << RTC_EVTENSET_COMPARE2_Pos) /*!< Bit mask of COMPARE2 field. */
#define RTC_EVTENSET_COMPARE2_Disabled (0UL) /*!< Read: Disabled */
#define RTC_EVTENSET_COMPARE2_Enabled (1UL) /*!< Read: Enabled */
#define RTC_EVTENSET_COMPARE2_Set (1UL) /*!< Enable */

/* Bit 17 : Write '1' to enable event routing for COMPARE[1] event */
#define RTC_EVTENSET_COMPARE1_Pos (17UL) /*!< Position of COMPARE1 field. */
#define RTC_EVTENSET_COMPARE1_Msk (0x1UL << RTC_EVTENSET_COMPARE1_Pos) /*!< Bit mask of COMPARE1 field. */
#define RTC_EVTENSET_COMPARE1_Disabled (0UL) /*!< Read: Disabled */
#define RTC_EVTENSET_COMPARE1_Enabled (1UL) /*!< Read: Enabled */
#define RTC_EVTENSET_COMPARE1_Set (1UL) /*!< Enable */

/* Bit 16 : Write '1' to enable event routing for COMPARE[0] event */
#define RTC_EVTENSET_COMPARE0_Pos (16UL) /*!< Position of COMPARE0 field. */
#define RTC_EVTENSET_COMPARE0_Msk (0x1UL << RTC_EVTENSET_COMPARE0_Pos) /*!< Bit mask of COMPARE0 field. */
#define RTC_EVTENSET_COMPARE0_Disabled (0UL) /*!< Read: Disabled */
#define RTC_EVTENSET_COMPARE0_Enabled (1UL) /*!< Read: Enabled */
#define RTC_EVTENSET_COMPARE0_Set (1UL) /*!< Enable */

/* Bit 1 : Write '1' to enable event routing for OVRFLW event */
#define RTC_EVTENSET_OVRFLW_Pos (1UL) /*!< Position of OVRFLW field. */
#define RTC_EVTENSET_OVRFLW_Msk (0x1UL << RTC_EVTENSET_OVRFLW_Pos) /*!< Bit mask of OVRFLW field. */
#define RTC_EVTENSET_OVRFLW_Disabled (0UL) /*!< Read: Disabled */
#define RTC_EVTENSET_OVRFLW_Enabled (1UL) /*!< Read: Enabled */
#define RTC_EVTENSET_OVRFLW_Set (1UL) /*!< Enable */

/* Bit 0 : Write '1' to enable event routing for TICK event */
#define RTC_EVTENSET_TICK_Pos (0UL) /*!< Position of TICK field. */
#define RTC_EVTENSET_TICK_Msk (0x1UL << RTC_EVTENSET_TICK_Pos) /*!< Bit mask of TICK field. */
#define RTC_EVTENSET_TICK_Disabled (0UL) /*!< Read: Disabled */
#define RTC_EVTENSET_TICK_Enabled (1UL) /*!< Read: Enabled */
#define RTC_EVTENSET_TICK_Set (1UL) /*!< Enable */

/* Register: RTC_EVTENCLR */
/* Description: Disable event routing */

/* Bit 19 : Write '1' to disable event routing for COMPARE[3] event */
#define RTC_EVTENCLR_COMPARE3_Pos (19UL) /*!< Position of COMPARE3 field. */
#define RTC_EVTENCLR_COMPARE3_Msk (0x1UL << RTC_EVTENCLR_COMPARE3_Pos) /*!< Bit mask of COMPARE3 field. */
#define RTC_EVTENCLR_COMPARE3_Disabled (0UL) /*!< Read: Disabled */
#define RTC_EVTENCLR_COMPARE3_Enabled (1UL) /*!< Read: Enabled */
#define RTC_EVTENCLR_COMPARE3_Clear (1UL) /*!< Disable */

/* Bit 18 : Write '1' to disable event routing for COMPARE[2] event */
#define RTC_EVTENCLR_COMPARE2_Pos (18UL) /*!< Position of COMPARE2 field. */
#define RTC_EVTENCLR_COMPARE2_Msk (0x1UL << RTC_EVTENCLR_COMPARE2_Pos) /*!< Bit mask of COMPARE2 field. */
#define RTC_EVTENCLR_COMPARE2_Disabled (0UL) /*!< Read: Disabled */
#define RTC_EVTENCLR_COMPARE2_Enabled (1UL) /*!< Read: Enabled */
#define RTC_EVTENCLR_COMPARE2_Clear (1UL) /*!< Disable */

/* Bit 17 : Write '1' to disable event routing for COMPARE[1] event */
#define RTC_EVTENCLR_COMPARE1_Pos (17UL) /*!< Position of COMPARE1 field. */
#define RTC_EVTENCLR_COMPARE1_Msk (0x1UL << RTC_EVTENCLR_COMPARE1_Pos) /*!< Bit mask of COMPARE1 field. */
#define RTC_EVTENCLR_COMPARE1_Disabled (0UL) /*!< Read: Disabled */
#define RTC_EVTENCLR_COMPARE1_Enabled (1UL) /*!< Read: Enabled */
#define RTC_EVTENCLR_COMPARE1_Clear (1UL) /*!< Disable */

/* Bit 16 : Write '1' to disable event routing for COMPARE[0] event */
#define RTC_EVTENCLR_COMPARE0_Pos (16UL) /*!< Position of COMPARE0 field. */
#define RTC_EVTENCLR_COMPARE0_Msk (0x1UL << RTC_EVTENCLR_COMPARE0_Pos) /*!< Bit mask of COMPARE0 field. */
#define RTC_EVTENCLR_COMPARE0_Disabled (0UL) /*!< Read: Disabled */
#define RTC_EVTENCLR_COMPARE0_Enabled (1UL) /*!< Read: Enabled */
#define RTC_EVTENCLR_COMPARE0_Clear (1UL) /*!< Disable */

/* Bit 1 : Write '1' to disable event routing for OVRFLW event */
#define RTC_EVTENCLR_OVRFLW_Pos (1UL) /*!< Position of OVRFLW field. */
#define RTC_EVTENCLR_OVRFLW_Msk (0x1UL << RTC_EVTENCLR_OVRFLW_Pos) /*!< Bit mask of OVRFLW field. */
#define RTC_EVTENCLR_OVRFLW_Disabled (0UL) /*!< Read: Disabled */
#define RTC_EVTENCLR_OVRFLW_Enabled (1UL) /*!< Read: Enabled */
#define RTC_EVTENCLR_OVRFLW_Clear (1UL) /*!< Disable */

/* Bit 0 : Write '1' to disable event routing for TICK event */
#define RTC_EVTENCLR_TICK_Pos (0UL) /*!< Position of TICK field. */
#define RTC_EVTENCLR_TICK_Msk (0x1UL << RTC_EVTENCLR_TICK_Pos) /*!< Bit mask of TICK field. */
#define RTC_EVTENCLR_TICK_Disabled (0UL) /*!< Read: Disabled */
#define RTC_EVTENCLR_TICK_Enabled (1UL) /*!< Read: Enabled */
#define RTC_EVTENCLR_TICK_Clear (1UL) /*!< Disable */

/* Register: RTC_STATUS */
/* Description: RTC status */

/* Bit 0 : RTC status */
#define RTC_STATUS_STATUS_Pos (0UL) /*!< Position of STATUS field. */
#define RTC_STATUS_STATUS_Msk (0x1UL << RTC_STATUS_STATUS_Pos) /*!< Bit mask of STATUS field. */
#define RTC_STATUS_STATUS_Stopped (0UL) /*!< RTC is stopped */
#define RTC_STATUS_STATUS_Started (1UL) /*!< RTC is started */

/* Register: RTC_COUNTER */
/* Description: Current COUNTER value */

/* Bits 23..0 : Counter value */
#define RTC_COUNTER_COUNTER_Pos (0UL) /*!< Position of COUNTER field. */
#define RTC_COUNTER_COUNTER_Msk (0xFFFFFFUL << RTC_COUNTER_COUNTER_Pos) /*!< Bit mask of COUNTER field. */

/* Register: RTC_PRESCALER */
/* Description: 12 bit prescaler for COUNTER frequency (32768/(PRESCALER+1)).Must be written when RTC is stopped */

/* Bits 11..0 : Prescaler value */
#define RTC_PRESCALER_PRESCALER_Pos (0UL) /*!< Position of PRESCALER field. */
#define RTC_PRESCALER_PRESCALER_Msk (0xFFFUL << RTC_PRESCALER_PRESCALER_Pos) /*!< Bit mask of PRESCALER field. */

/* Register: RTC_CC */
/* Description: Description collection[n]: Compare register n */

/* Bits 23..0 : Compare value */
#define RTC_CC_COMPARE_Pos (0UL) /*!< Position of COMPARE field. */
#define RTC_CC_COMPARE_Msk (0xFFFFFFUL << RTC_CC_COMPARE_Pos) /*!< Bit mask of COMPARE field. */

/* Register: RTC_POWER */
/* Description: Peripheral power control */

/* Bit 0 : Peripheral power control. The peripheral and its registers will be reset to its initial state by switching the peripheral off and then back on again. */
#define RTC_POWER_POWER_Pos (0UL) /*!< Position of POWER field. */
#define RTC_POWER_POWER_Msk (0x1UL << RTC_POWER_POWER_Pos) /*!< Bit mask of POWER field. */
#define RTC_POWER_POWER_Disabled (0UL) /*!< Peripheral is powered off */
#define RTC_POWER_POWER_Enabled (1UL) /*!< Peripheral is powered on */


/* Peripheral: SAADC */
/* Description: Analog to Digital Converter */

/* Register: SAADC_TASKS_START */
/* Description: Start the ADC and prepare the result buffer in RAM */

/* Bit 0 :   */
#define SAADC_TASKS_START_TASKS_START_Pos (0UL) /*!< Position of TASKS_START field. */
#define SAADC_TASKS_START_TASKS_START_Msk (0x1UL << SAADC_TASKS_START_TASKS_START_Pos) /*!< Bit mask of TASKS_START field. */

/* Register: SAADC_TASKS_SAMPLE */
/* Description: Take one ADC sample, if scan is enabled all channels are sampled */

/* Bit 0 :   */
#define SAADC_TASKS_SAMPLE_TASKS_SAMPLE_Pos (0UL) /*!< Position of TASKS_SAMPLE field. */
#define SAADC_TASKS_SAMPLE_TASKS_SAMPLE_Msk (0x1UL << SAADC_TASKS_SAMPLE_TASKS_SAMPLE_Pos) /*!< Bit mask of TASKS_SAMPLE field. */

/* Register: SAADC_TASKS_STOP */
/* Description: Stop the ADC and terminate any on-going conversion */

/* Bit 0 :   */
#define SAADC_TASKS_STOP_TASKS_STOP_Pos (0UL) /*!< Position of TASKS_STOP field. */
#define SAADC_TASKS_STOP_TASKS_STOP_Msk (0x1UL << SAADC_TASKS_STOP_TASKS_STOP_Pos) /*!< Bit mask of TASKS_STOP field. */

/* Register: SAADC_TASKS_CALIBRATEOFFSET */
/* Description: Starts offset auto-calibration */

/* Bit 0 :   */
#define SAADC_TASKS_CALIBRATEOFFSET_TASKS_CALIBRATEOFFSET_Pos (0UL) /*!< Position of TASKS_CALIBRATEOFFSET field. */
#define SAADC_TASKS_CALIBRATEOFFSET_TASKS_CALIBRATEOFFSET_Msk (0x1UL << SAADC_TASKS_CALIBRATEOFFSET_TASKS_CALIBRATEOFFSET_Pos) /*!< Bit mask of TASKS_CALIBRATEOFFSET field. */

/* Register: SAADC_TASKS_CALIBRATEGAIN */
/* Description: Starts gain auto-calibration */

/* Bit 0 :   */
#define SAADC_TASKS_CALIBRATEGAIN_TASKS_CALIBRATEGAIN_Pos (0UL) /*!< Position of TASKS_CALIBRATEGAIN field. */
#define SAADC_TASKS_CALIBRATEGAIN_TASKS_CALIBRATEGAIN_Msk (0x1UL << SAADC_TASKS_CALIBRATEGAIN_TASKS_CALIBRATEGAIN_Pos) /*!< Bit mask of TASKS_CALIBRATEGAIN field. */

/* Register: SAADC_EVENTS_STARTED */
/* Description: The ADC has started */

/* Bit 0 :   */
#define SAADC_EVENTS_STARTED_EVENTS_STARTED_Pos (0UL) /*!< Position of EVENTS_STARTED field. */
#define SAADC_EVENTS_STARTED_EVENTS_STARTED_Msk (0x1UL << SAADC_EVENTS_STARTED_EVENTS_STARTED_Pos) /*!< Bit mask of EVENTS_STARTED field. */

/* Register: SAADC_EVENTS_END */
/* Description: The ADC has filled up the Result buffer */

/* Bit 0 :   */
#define SAADC_EVENTS_END_EVENTS_END_Pos (0UL) /*!< Position of EVENTS_END field. */
#define SAADC_EVENTS_END_EVENTS_END_Msk (0x1UL << SAADC_EVENTS_END_EVENTS_END_Pos) /*!< Bit mask of EVENTS_END field. */

/* Register: SAADC_EVENTS_DONE */
/* Description: A conversion task has been completed. Depending on the mode, multiple conversions might be needed for a result to be transferred to RAM. */

/* Bit 0 :   */
#define SAADC_EVENTS_DONE_EVENTS_DONE_Pos (0UL) /*!< Position of EVENTS_DONE field. */
#define SAADC_EVENTS_DONE_EVENTS_DONE_Msk (0x1UL << SAADC_EVENTS_DONE_EVENTS_DONE_Pos) /*!< Bit mask of EVENTS_DONE field. */

/* Register: SAADC_EVENTS_RESULTDONE */
/* Description: A result is ready to get transferred to RAM. Result is available in REGRESULT register */

/* Bit 0 :   */
#define SAADC_EVENTS_RESULTDONE_EVENTS_RESULTDONE_Pos (0UL) /*!< Position of EVENTS_RESULTDONE field. */
#define SAADC_EVENTS_RESULTDONE_EVENTS_RESULTDONE_Msk (0x1UL << SAADC_EVENTS_RESULTDONE_EVENTS_RESULTDONE_Pos) /*!< Bit mask of EVENTS_RESULTDONE field. */

/* Register: SAADC_EVENTS_CALIBRATEDONE */
/* Description: Calibration is complete */

/* Bit 0 :   */
#define SAADC_EVENTS_CALIBRATEDONE_EVENTS_CALIBRATEDONE_Pos (0UL) /*!< Position of EVENTS_CALIBRATEDONE field. */
#define SAADC_EVENTS_CALIBRATEDONE_EVENTS_CALIBRATEDONE_Msk (0x1UL << SAADC_EVENTS_CALIBRATEDONE_EVENTS_CALIBRATEDONE_Pos) /*!< Bit mask of EVENTS_CALIBRATEDONE field. */

/* Register: SAADC_EVENTS_STOPPED */
/* Description: The ADC has stopped */

/* Bit 0 :   */
#define SAADC_EVENTS_STOPPED_EVENTS_STOPPED_Pos (0UL) /*!< Position of EVENTS_STOPPED field. */
#define SAADC_EVENTS_STOPPED_EVENTS_STOPPED_Msk (0x1UL << SAADC_EVENTS_STOPPED_EVENTS_STOPPED_Pos) /*!< Bit mask of EVENTS_STOPPED field. */

/* Register: SAADC_EVENTS_CH_LIMITH */
/* Description: Description cluster[n]: Last results is equal or above CH[n].LIMIT.HIGH */

/* Bit 0 :   */
#define SAADC_EVENTS_CH_LIMITH_LIMITH_Pos (0UL) /*!< Position of LIMITH field. */
#define SAADC_EVENTS_CH_LIMITH_LIMITH_Msk (0x1UL << SAADC_EVENTS_CH_LIMITH_LIMITH_Pos) /*!< Bit mask of LIMITH field. */

/* Register: SAADC_EVENTS_CH_LIMITL */
/* Description: Description cluster[n]: Last results is equal or below CH[n].LIMIT.LOW */

/* Bit 0 :   */
#define SAADC_EVENTS_CH_LIMITL_LIMITL_Pos (0UL) /*!< Position of LIMITL field. */
#define SAADC_EVENTS_CH_LIMITL_LIMITL_Msk (0x1UL << SAADC_EVENTS_CH_LIMITL_LIMITL_Pos) /*!< Bit mask of LIMITL field. */

/* Register: SAADC_SHORTS */
/* Description: Shortcut register */

/* Bit 1 : Shortcut between END event and START task */
#define SAADC_SHORTS_END_START_Pos (1UL) /*!< Position of END_START field. */
#define SAADC_SHORTS_END_START_Msk (0x1UL << SAADC_SHORTS_END_START_Pos) /*!< Bit mask of END_START field. */
#define SAADC_SHORTS_END_START_Disabled (0UL) /*!< Disable shortcut */
#define SAADC_SHORTS_END_START_Enabled (1UL) /*!< Enable shortcut */

/* Bit 0 : Shortcut between DONE event and SAMPLE task */
#define SAADC_SHORTS_DONE_SAMPLE_Pos (0UL) /*!< Position of DONE_SAMPLE field. */
#define SAADC_SHORTS_DONE_SAMPLE_Msk (0x1UL << SAADC_SHORTS_DONE_SAMPLE_Pos) /*!< Bit mask of DONE_SAMPLE field. */
#define SAADC_SHORTS_DONE_SAMPLE_Disabled (0UL) /*!< Disable shortcut */
#define SAADC_SHORTS_DONE_SAMPLE_Enabled (1UL) /*!< Enable shortcut */

/* Register: SAADC_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 21 : Enable or disable interrupt for CH[7].LIMITL event */
#define SAADC_INTEN_CH7LIMITL_Pos (21UL) /*!< Position of CH7LIMITL field. */
#define SAADC_INTEN_CH7LIMITL_Msk (0x1UL << SAADC_INTEN_CH7LIMITL_Pos) /*!< Bit mask of CH7LIMITL field. */
#define SAADC_INTEN_CH7LIMITL_Disabled (0UL) /*!< Disable */
#define SAADC_INTEN_CH7LIMITL_Enabled (1UL) /*!< Enable */

/* Bit 20 : Enable or disable interrupt for CH[7].LIMITH event */
#define SAADC_INTEN_CH7LIMITH_Pos (20UL) /*!< Position of CH7LIMITH field. */
#define SAADC_INTEN_CH7LIMITH_Msk (0x1UL << SAADC_INTEN_CH7LIMITH_Pos) /*!< Bit mask of CH7LIMITH field. */
#define SAADC_INTEN_CH7LIMITH_Disabled (0UL) /*!< Disable */
#define SAADC_INTEN_CH7LIMITH_Enabled (1UL) /*!< Enable */

/* Bit 19 : Enable or disable interrupt for CH[6].LIMITL event */
#define SAADC_INTEN_CH6LIMITL_Pos (19UL) /*!< Position of CH6LIMITL field. */
#define SAADC_INTEN_CH6LIMITL_Msk (0x1UL << SAADC_INTEN_CH6LIMITL_Pos) /*!< Bit mask of CH6LIMITL field. */
#define SAADC_INTEN_CH6LIMITL_Disabled (0UL) /*!< Disable */
#define SAADC_INTEN_CH6LIMITL_Enabled (1UL) /*!< Enable */

/* Bit 18 : Enable or disable interrupt for CH[6].LIMITH event */
#define SAADC_INTEN_CH6LIMITH_Pos (18UL) /*!< Position of CH6LIMITH field. */
#define SAADC_INTEN_CH6LIMITH_Msk (0x1UL << SAADC_INTEN_CH6LIMITH_Pos) /*!< Bit mask of CH6LIMITH field. */
#define SAADC_INTEN_CH6LIMITH_Disabled (0UL) /*!< Disable */
#define SAADC_INTEN_CH6LIMITH_Enabled (1UL) /*!< Enable */

/* Bit 17 : Enable or disable interrupt for CH[5].LIMITL event */
#define SAADC_INTEN_CH5LIMITL_Pos (17UL) /*!< Position of CH5LIMITL field. */
#define SAADC_INTEN_CH5LIMITL_Msk (0x1UL << SAADC_INTEN_CH5LIMITL_Pos) /*!< Bit mask of CH5LIMITL field. */
#define SAADC_INTEN_CH5LIMITL_Disabled (0UL) /*!< Disable */
#define SAADC_INTEN_CH5LIMITL_Enabled (1UL) /*!< Enable */

/* Bit 16 : Enable or disable interrupt for CH[5].LIMITH event */
#define SAADC_INTEN_CH5LIMITH_Pos (16UL) /*!< Position of CH5LIMITH field. */
#define SAADC_INTEN_CH5LIMITH_Msk (0x1UL << SAADC_INTEN_CH5LIMITH_Pos) /*!< Bit mask of CH5LIMITH field. */
#define SAADC_INTEN_CH5LIMITH_Disabled (0UL) /*!< Disable */
#define SAADC_INTEN_CH5LIMITH_Enabled (1UL) /*!< Enable */

/* Bit 15 : Enable or disable interrupt for CH[4].LIMITL event */
#define SAADC_INTEN_CH4LIMITL_Pos (15UL) /*!< Position of CH4LIMITL field. */
#define SAADC_INTEN_CH4LIMITL_Msk (0x1UL << SAADC_INTEN_CH4LIMITL_Pos) /*!< Bit mask of CH4LIMITL field. */
#define SAADC_INTEN_CH4LIMITL_Disabled (0UL) /*!< Disable */
#define SAADC_INTEN_CH4LIMITL_Enabled (1UL) /*!< Enable */

/* Bit 14 : Enable or disable interrupt for CH[4].LIMITH event */
#define SAADC_INTEN_CH4LIMITH_Pos (14UL) /*!< Position of CH4LIMITH field. */
#define SAADC_INTEN_CH4LIMITH_Msk (0x1UL << SAADC_INTEN_CH4LIMITH_Pos) /*!< Bit mask of CH4LIMITH field. */
#define SAADC_INTEN_CH4LIMITH_Disabled (0UL) /*!< Disable */
#define SAADC_INTEN_CH4LIMITH_Enabled (1UL) /*!< Enable */

/* Bit 13 : Enable or disable interrupt for CH[3].LIMITL event */
#define SAADC_INTEN_CH3LIMITL_Pos (13UL) /*!< Position of CH3LIMITL field. */
#define SAADC_INTEN_CH3LIMITL_Msk (0x1UL << SAADC_INTEN_CH3LIMITL_Pos) /*!< Bit mask of CH3LIMITL field. */
#define SAADC_INTEN_CH3LIMITL_Disabled (0UL) /*!< Disable */
#define SAADC_INTEN_CH3LIMITL_Enabled (1UL) /*!< Enable */

/* Bit 12 : Enable or disable interrupt for CH[3].LIMITH event */
#define SAADC_INTEN_CH3LIMITH_Pos (12UL) /*!< Position of CH3LIMITH field. */
#define SAADC_INTEN_CH3LIMITH_Msk (0x1UL << SAADC_INTEN_CH3LIMITH_Pos) /*!< Bit mask of CH3LIMITH field. */
#define SAADC_INTEN_CH3LIMITH_Disabled (0UL) /*!< Disable */
#define SAADC_INTEN_CH3LIMITH_Enabled (1UL) /*!< Enable */

/* Bit 11 : Enable or disable interrupt for CH[2].LIMITL event */
#define SAADC_INTEN_CH2LIMITL_Pos (11UL) /*!< Position of CH2LIMITL field. */
#define SAADC_INTEN_CH2LIMITL_Msk (0x1UL << SAADC_INTEN_CH2LIMITL_Pos) /*!< Bit mask of CH2LIMITL field. */
#define SAADC_INTEN_CH2LIMITL_Disabled (0UL) /*!< Disable */
#define SAADC_INTEN_CH2LIMITL_Enabled (1UL) /*!< Enable */

/* Bit 10 : Enable or disable interrupt for CH[2].LIMITH event */
#define SAADC_INTEN_CH2LIMITH_Pos (10UL) /*!< Position of CH2LIMITH field. */
#define SAADC_INTEN_CH2LIMITH_Msk (0x1UL << SAADC_INTEN_CH2LIMITH_Pos) /*!< Bit mask of CH2LIMITH field. */
#define SAADC_INTEN_CH2LIMITH_Disabled (0UL) /*!< Disable */
#define SAADC_INTEN_CH2LIMITH_Enabled (1UL) /*!< Enable */

/* Bit 9 : Enable or disable interrupt for CH[1].LIMITL event */
#define SAADC_INTEN_CH1LIMITL_Pos (9UL) /*!< Position of CH1LIMITL field. */
#define SAADC_INTEN_CH1LIMITL_Msk (0x1UL << SAADC_INTEN_CH1LIMITL_Pos) /*!< Bit mask of CH1LIMITL field. */
#define SAADC_INTEN_CH1LIMITL_Disabled (0UL) /*!< Disable */
#define SAADC_INTEN_CH1LIMITL_Enabled (1UL) /*!< Enable */

/* Bit 8 : Enable or disable interrupt for CH[1].LIMITH event */
#define SAADC_INTEN_CH1LIMITH_Pos (8UL) /*!< Position of CH1LIMITH field. */
#define SAADC_INTEN_CH1LIMITH_Msk (0x1UL << SAADC_INTEN_CH1LIMITH_Pos) /*!< Bit mask of CH1LIMITH field. */
#define SAADC_INTEN_CH1LIMITH_Disabled (0UL) /*!< Disable */
#define SAADC_INTEN_CH1LIMITH_Enabled (1UL) /*!< Enable */

/* Bit 7 : Enable or disable interrupt for CH[0].LIMITL event */
#define SAADC_INTEN_CH0LIMITL_Pos (7UL) /*!< Position of CH0LIMITL field. */
#define SAADC_INTEN_CH0LIMITL_Msk (0x1UL << SAADC_INTEN_CH0LIMITL_Pos) /*!< Bit mask of CH0LIMITL field. */
#define SAADC_INTEN_CH0LIMITL_Disabled (0UL) /*!< Disable */
#define SAADC_INTEN_CH0LIMITL_Enabled (1UL) /*!< Enable */

/* Bit 6 : Enable or disable interrupt for CH[0].LIMITH event */
#define SAADC_INTEN_CH0LIMITH_Pos (6UL) /*!< Position of CH0LIMITH field. */
#define SAADC_INTEN_CH0LIMITH_Msk (0x1UL << SAADC_INTEN_CH0LIMITH_Pos) /*!< Bit mask of CH0LIMITH field. */
#define SAADC_INTEN_CH0LIMITH_Disabled (0UL) /*!< Disable */
#define SAADC_INTEN_CH0LIMITH_Enabled (1UL) /*!< Enable */

/* Bit 5 : Enable or disable interrupt for STOPPED event */
#define SAADC_INTEN_STOPPED_Pos (5UL) /*!< Position of STOPPED field. */
#define SAADC_INTEN_STOPPED_Msk (0x1UL << SAADC_INTEN_STOPPED_Pos) /*!< Bit mask of STOPPED field. */
#define SAADC_INTEN_STOPPED_Disabled (0UL) /*!< Disable */
#define SAADC_INTEN_STOPPED_Enabled (1UL) /*!< Enable */

/* Bit 4 : Enable or disable interrupt for CALIBRATEDONE event */
#define SAADC_INTEN_CALIBRATEDONE_Pos (4UL) /*!< Position of CALIBRATEDONE field. */
#define SAADC_INTEN_CALIBRATEDONE_Msk (0x1UL << SAADC_INTEN_CALIBRATEDONE_Pos) /*!< Bit mask of CALIBRATEDONE field. */
#define SAADC_INTEN_CALIBRATEDONE_Disabled (0UL) /*!< Disable */
#define SAADC_INTEN_CALIBRATEDONE_Enabled (1UL) /*!< Enable */

/* Bit 3 : Enable or disable interrupt for RESULTDONE event */
#define SAADC_INTEN_RESULTDONE_Pos (3UL) /*!< Position of RESULTDONE field. */
#define SAADC_INTEN_RESULTDONE_Msk (0x1UL << SAADC_INTEN_RESULTDONE_Pos) /*!< Bit mask of RESULTDONE field. */
#define SAADC_INTEN_RESULTDONE_Disabled (0UL) /*!< Disable */
#define SAADC_INTEN_RESULTDONE_Enabled (1UL) /*!< Enable */

/* Bit 2 : Enable or disable interrupt for DONE event */
#define SAADC_INTEN_DONE_Pos (2UL) /*!< Position of DONE field. */
#define SAADC_INTEN_DONE_Msk (0x1UL << SAADC_INTEN_DONE_Pos) /*!< Bit mask of DONE field. */
#define SAADC_INTEN_DONE_Disabled (0UL) /*!< Disable */
#define SAADC_INTEN_DONE_Enabled (1UL) /*!< Enable */

/* Bit 1 : Enable or disable interrupt for END event */
#define SAADC_INTEN_END_Pos (1UL) /*!< Position of END field. */
#define SAADC_INTEN_END_Msk (0x1UL << SAADC_INTEN_END_Pos) /*!< Bit mask of END field. */
#define SAADC_INTEN_END_Disabled (0UL) /*!< Disable */
#define SAADC_INTEN_END_Enabled (1UL) /*!< Enable */

/* Bit 0 : Enable or disable interrupt for STARTED event */
#define SAADC_INTEN_STARTED_Pos (0UL) /*!< Position of STARTED field. */
#define SAADC_INTEN_STARTED_Msk (0x1UL << SAADC_INTEN_STARTED_Pos) /*!< Bit mask of STARTED field. */
#define SAADC_INTEN_STARTED_Disabled (0UL) /*!< Disable */
#define SAADC_INTEN_STARTED_Enabled (1UL) /*!< Enable */

/* Register: SAADC_INTENSET */
/* Description: Enable interrupt */

/* Bit 21 : Write '1' to enable interrupt for CH[7].LIMITL event */
#define SAADC_INTENSET_CH7LIMITL_Pos (21UL) /*!< Position of CH7LIMITL field. */
#define SAADC_INTENSET_CH7LIMITL_Msk (0x1UL << SAADC_INTENSET_CH7LIMITL_Pos) /*!< Bit mask of CH7LIMITL field. */
#define SAADC_INTENSET_CH7LIMITL_Disabled (0UL) /*!< Read: Disabled */
#define SAADC_INTENSET_CH7LIMITL_Enabled (1UL) /*!< Read: Enabled */
#define SAADC_INTENSET_CH7LIMITL_Set (1UL) /*!< Enable */

/* Bit 20 : Write '1' to enable interrupt for CH[7].LIMITH event */
#define SAADC_INTENSET_CH7LIMITH_Pos (20UL) /*!< Position of CH7LIMITH field. */
#define SAADC_INTENSET_CH7LIMITH_Msk (0x1UL << SAADC_INTENSET_CH7LIMITH_Pos) /*!< Bit mask of CH7LIMITH field. */
#define SAADC_INTENSET_CH7LIMITH_Disabled (0UL) /*!< Read: Disabled */
#define SAADC_INTENSET_CH7LIMITH_Enabled (1UL) /*!< Read: Enabled */
#define SAADC_INTENSET_CH7LIMITH_Set (1UL) /*!< Enable */

/* Bit 19 : Write '1' to enable interrupt for CH[6].LIMITL event */
#define SAADC_INTENSET_CH6LIMITL_Pos (19UL) /*!< Position of CH6LIMITL field. */
#define SAADC_INTENSET_CH6LIMITL_Msk (0x1UL << SAADC_INTENSET_CH6LIMITL_Pos) /*!< Bit mask of CH6LIMITL field. */
#define SAADC_INTENSET_CH6LIMITL_Disabled (0UL) /*!< Read: Disabled */
#define SAADC_INTENSET_CH6LIMITL_Enabled (1UL) /*!< Read: Enabled */
#define SAADC_INTENSET_CH6LIMITL_Set (1UL) /*!< Enable */

/* Bit 18 : Write '1' to enable interrupt for CH[6].LIMITH event */
#define SAADC_INTENSET_CH6LIMITH_Pos (18UL) /*!< Position of CH6LIMITH field. */
#define SAADC_INTENSET_CH6LIMITH_Msk (0x1UL << SAADC_INTENSET_CH6LIMITH_Pos) /*!< Bit mask of CH6LIMITH field. */
#define SAADC_INTENSET_CH6LIMITH_Disabled (0UL) /*!< Read: Disabled */
#define SAADC_INTENSET_CH6LIMITH_Enabled (1UL) /*!< Read: Enabled */
#define SAADC_INTENSET_CH6LIMITH_Set (1UL) /*!< Enable */

/* Bit 17 : Write '1' to enable interrupt for CH[5].LIMITL event */
#define SAADC_INTENSET_CH5LIMITL_Pos (17UL) /*!< Position of CH5LIMITL field. */
#define SAADC_INTENSET_CH5LIMITL_Msk (0x1UL << SAADC_INTENSET_CH5LIMITL_Pos) /*!< Bit mask of CH5LIMITL field. */
#define SAADC_INTENSET_CH5LIMITL_Disabled (0UL) /*!< Read: Disabled */
#define SAADC_INTENSET_CH5LIMITL_Enabled (1UL) /*!< Read: Enabled */
#define SAADC_INTENSET_CH5LIMITL_Set (1UL) /*!< Enable */

/* Bit 16 : Write '1' to enable interrupt for CH[5].LIMITH event */
#define SAADC_INTENSET_CH5LIMITH_Pos (16UL) /*!< Position of CH5LIMITH field. */
#define SAADC_INTENSET_CH5LIMITH_Msk (0x1UL << SAADC_INTENSET_CH5LIMITH_Pos) /*!< Bit mask of CH5LIMITH field. */
#define SAADC_INTENSET_CH5LIMITH_Disabled (0UL) /*!< Read: Disabled */
#define SAADC_INTENSET_CH5LIMITH_Enabled (1UL) /*!< Read: Enabled */
#define SAADC_INTENSET_CH5LIMITH_Set (1UL) /*!< Enable */

/* Bit 15 : Write '1' to enable interrupt for CH[4].LIMITL event */
#define SAADC_INTENSET_CH4LIMITL_Pos (15UL) /*!< Position of CH4LIMITL field. */
#define SAADC_INTENSET_CH4LIMITL_Msk (0x1UL << SAADC_INTENSET_CH4LIMITL_Pos) /*!< Bit mask of CH4LIMITL field. */
#define SAADC_INTENSET_CH4LIMITL_Disabled (0UL) /*!< Read: Disabled */
#define SAADC_INTENSET_CH4LIMITL_Enabled (1UL) /*!< Read: Enabled */
#define SAADC_INTENSET_CH4LIMITL_Set (1UL) /*!< Enable */

/* Bit 14 : Write '1' to enable interrupt for CH[4].LIMITH event */
#define SAADC_INTENSET_CH4LIMITH_Pos (14UL) /*!< Position of CH4LIMITH field. */
#define SAADC_INTENSET_CH4LIMITH_Msk (0x1UL << SAADC_INTENSET_CH4LIMITH_Pos) /*!< Bit mask of CH4LIMITH field. */
#define SAADC_INTENSET_CH4LIMITH_Disabled (0UL) /*!< Read: Disabled */
#define SAADC_INTENSET_CH4LIMITH_Enabled (1UL) /*!< Read: Enabled */
#define SAADC_INTENSET_CH4LIMITH_Set (1UL) /*!< Enable */

/* Bit 13 : Write '1' to enable interrupt for CH[3].LIMITL event */
#define SAADC_INTENSET_CH3LIMITL_Pos (13UL) /*!< Position of CH3LIMITL field. */
#define SAADC_INTENSET_CH3LIMITL_Msk (0x1UL << SAADC_INTENSET_CH3LIMITL_Pos) /*!< Bit mask of CH3LIMITL field. */
#define SAADC_INTENSET_CH3LIMITL_Disabled (0UL) /*!< Read: Disabled */
#define SAADC_INTENSET_CH3LIMITL_Enabled (1UL) /*!< Read: Enabled */
#define SAADC_INTENSET_CH3LIMITL_Set (1UL) /*!< Enable */

/* Bit 12 : Write '1' to enable interrupt for CH[3].LIMITH event */
#define SAADC_INTENSET_CH3LIMITH_Pos (12UL) /*!< Position of CH3LIMITH field. */
#define SAADC_INTENSET_CH3LIMITH_Msk (0x1UL << SAADC_INTENSET_CH3LIMITH_Pos) /*!< Bit mask of CH3LIMITH field. */
#define SAADC_INTENSET_CH3LIMITH_Disabled (0UL) /*!< Read: Disabled */
#define SAADC_INTENSET_CH3LIMITH_Enabled (1UL) /*!< Read: Enabled */
#define SAADC_INTENSET_CH3LIMITH_Set (1UL) /*!< Enable */

/* Bit 11 : Write '1' to enable interrupt for CH[2].LIMITL event */
#define SAADC_INTENSET_CH2LIMITL_Pos (11UL) /*!< Position of CH2LIMITL field. */
#define SAADC_INTENSET_CH2LIMITL_Msk (0x1UL << SAADC_INTENSET_CH2LIMITL_Pos) /*!< Bit mask of CH2LIMITL field. */
#define SAADC_INTENSET_CH2LIMITL_Disabled (0UL) /*!< Read: Disabled */
#define SAADC_INTENSET_CH2LIMITL_Enabled (1UL) /*!< Read: Enabled */
#define SAADC_INTENSET_CH2LIMITL_Set (1UL) /*!< Enable */

/* Bit 10 : Write '1' to enable interrupt for CH[2].LIMITH event */
#define SAADC_INTENSET_CH2LIMITH_Pos (10UL) /*!< Position of CH2LIMITH field. */
#define SAADC_INTENSET_CH2LIMITH_Msk (0x1UL << SAADC_INTENSET_CH2LIMITH_Pos) /*!< Bit mask of CH2LIMITH field. */
#define SAADC_INTENSET_CH2LIMITH_Disabled (0UL) /*!< Read: Disabled */
#define SAADC_INTENSET_CH2LIMITH_Enabled (1UL) /*!< Read: Enabled */
#define SAADC_INTENSET_CH2LIMITH_Set (1UL) /*!< Enable */

/* Bit 9 : Write '1' to enable interrupt for CH[1].LIMITL event */
#define SAADC_INTENSET_CH1LIMITL_Pos (9UL) /*!< Position of CH1LIMITL field. */
#define SAADC_INTENSET_CH1LIMITL_Msk (0x1UL << SAADC_INTENSET_CH1LIMITL_Pos) /*!< Bit mask of CH1LIMITL field. */
#define SAADC_INTENSET_CH1LIMITL_Disabled (0UL) /*!< Read: Disabled */
#define SAADC_INTENSET_CH1LIMITL_Enabled (1UL) /*!< Read: Enabled */
#define SAADC_INTENSET_CH1LIMITL_Set (1UL) /*!< Enable */

/* Bit 8 : Write '1' to enable interrupt for CH[1].LIMITH event */
#define SAADC_INTENSET_CH1LIMITH_Pos (8UL) /*!< Position of CH1LIMITH field. */
#define SAADC_INTENSET_CH1LIMITH_Msk (0x1UL << SAADC_INTENSET_CH1LIMITH_Pos) /*!< Bit mask of CH1LIMITH field. */
#define SAADC_INTENSET_CH1LIMITH_Disabled (0UL) /*!< Read: Disabled */
#define SAADC_INTENSET_CH1LIMITH_Enabled (1UL) /*!< Read: Enabled */
#define SAADC_INTENSET_CH1LIMITH_Set (1UL) /*!< Enable */

/* Bit 7 : Write '1' to enable interrupt for CH[0].LIMITL event */
#define SAADC_INTENSET_CH0LIMITL_Pos (7UL) /*!< Position of CH0LIMITL field. */
#define SAADC_INTENSET_CH0LIMITL_Msk (0x1UL << SAADC_INTENSET_CH0LIMITL_Pos) /*!< Bit mask of CH0LIMITL field. */
#define SAADC_INTENSET_CH0LIMITL_Disabled (0UL) /*!< Read: Disabled */
#define SAADC_INTENSET_CH0LIMITL_Enabled (1UL) /*!< Read: Enabled */
#define SAADC_INTENSET_CH0LIMITL_Set (1UL) /*!< Enable */

/* Bit 6 : Write '1' to enable interrupt for CH[0].LIMITH event */
#define SAADC_INTENSET_CH0LIMITH_Pos (6UL) /*!< Position of CH0LIMITH field. */
#define SAADC_INTENSET_CH0LIMITH_Msk (0x1UL << SAADC_INTENSET_CH0LIMITH_Pos) /*!< Bit mask of CH0LIMITH field. */
#define SAADC_INTENSET_CH0LIMITH_Disabled (0UL) /*!< Read: Disabled */
#define SAADC_INTENSET_CH0LIMITH_Enabled (1UL) /*!< Read: Enabled */
#define SAADC_INTENSET_CH0LIMITH_Set (1UL) /*!< Enable */

/* Bit 5 : Write '1' to enable interrupt for STOPPED event */
#define SAADC_INTENSET_STOPPED_Pos (5UL) /*!< Position of STOPPED field. */
#define SAADC_INTENSET_STOPPED_Msk (0x1UL << SAADC_INTENSET_STOPPED_Pos) /*!< Bit mask of STOPPED field. */
#define SAADC_INTENSET_STOPPED_Disabled (0UL) /*!< Read: Disabled */
#define SAADC_INTENSET_STOPPED_Enabled (1UL) /*!< Read: Enabled */
#define SAADC_INTENSET_STOPPED_Set (1UL) /*!< Enable */

/* Bit 4 : Write '1' to enable interrupt for CALIBRATEDONE event */
#define SAADC_INTENSET_CALIBRATEDONE_Pos (4UL) /*!< Position of CALIBRATEDONE field. */
#define SAADC_INTENSET_CALIBRATEDONE_Msk (0x1UL << SAADC_INTENSET_CALIBRATEDONE_Pos) /*!< Bit mask of CALIBRATEDONE field. */
#define SAADC_INTENSET_CALIBRATEDONE_Disabled (0UL) /*!< Read: Disabled */
#define SAADC_INTENSET_CALIBRATEDONE_Enabled (1UL) /*!< Read: Enabled */
#define SAADC_INTENSET_CALIBRATEDONE_Set (1UL) /*!< Enable */

/* Bit 3 : Write '1' to enable interrupt for RESULTDONE event */
#define SAADC_INTENSET_RESULTDONE_Pos (3UL) /*!< Position of RESULTDONE field. */
#define SAADC_INTENSET_RESULTDONE_Msk (0x1UL << SAADC_INTENSET_RESULTDONE_Pos) /*!< Bit mask of RESULTDONE field. */
#define SAADC_INTENSET_RESULTDONE_Disabled (0UL) /*!< Read: Disabled */
#define SAADC_INTENSET_RESULTDONE_Enabled (1UL) /*!< Read: Enabled */
#define SAADC_INTENSET_RESULTDONE_Set (1UL) /*!< Enable */

/* Bit 2 : Write '1' to enable interrupt for DONE event */
#define SAADC_INTENSET_DONE_Pos (2UL) /*!< Position of DONE field. */
#define SAADC_INTENSET_DONE_Msk (0x1UL << SAADC_INTENSET_DONE_Pos) /*!< Bit mask of DONE field. */
#define SAADC_INTENSET_DONE_Disabled (0UL) /*!< Read: Disabled */
#define SAADC_INTENSET_DONE_Enabled (1UL) /*!< Read: Enabled */
#define SAADC_INTENSET_DONE_Set (1UL) /*!< Enable */

/* Bit 1 : Write '1' to enable interrupt for END event */
#define SAADC_INTENSET_END_Pos (1UL) /*!< Position of END field. */
#define SAADC_INTENSET_END_Msk (0x1UL << SAADC_INTENSET_END_Pos) /*!< Bit mask of END field. */
#define SAADC_INTENSET_END_Disabled (0UL) /*!< Read: Disabled */
#define SAADC_INTENSET_END_Enabled (1UL) /*!< Read: Enabled */
#define SAADC_INTENSET_END_Set (1UL) /*!< Enable */

/* Bit 0 : Write '1' to enable interrupt for STARTED event */
#define SAADC_INTENSET_STARTED_Pos (0UL) /*!< Position of STARTED field. */
#define SAADC_INTENSET_STARTED_Msk (0x1UL << SAADC_INTENSET_STARTED_Pos) /*!< Bit mask of STARTED field. */
#define SAADC_INTENSET_STARTED_Disabled (0UL) /*!< Read: Disabled */
#define SAADC_INTENSET_STARTED_Enabled (1UL) /*!< Read: Enabled */
#define SAADC_INTENSET_STARTED_Set (1UL) /*!< Enable */

/* Register: SAADC_INTENCLR */
/* Description: Disable interrupt */

/* Bit 21 : Write '1' to disable interrupt for CH[7].LIMITL event */
#define SAADC_INTENCLR_CH7LIMITL_Pos (21UL) /*!< Position of CH7LIMITL field. */
#define SAADC_INTENCLR_CH7LIMITL_Msk (0x1UL << SAADC_INTENCLR_CH7LIMITL_Pos) /*!< Bit mask of CH7LIMITL field. */
#define SAADC_INTENCLR_CH7LIMITL_Disabled (0UL) /*!< Read: Disabled */
#define SAADC_INTENCLR_CH7LIMITL_Enabled (1UL) /*!< Read: Enabled */
#define SAADC_INTENCLR_CH7LIMITL_Clear (1UL) /*!< Disable */

/* Bit 20 : Write '1' to disable interrupt for CH[7].LIMITH event */
#define SAADC_INTENCLR_CH7LIMITH_Pos (20UL) /*!< Position of CH7LIMITH field. */
#define SAADC_INTENCLR_CH7LIMITH_Msk (0x1UL << SAADC_INTENCLR_CH7LIMITH_Pos) /*!< Bit mask of CH7LIMITH field. */
#define SAADC_INTENCLR_CH7LIMITH_Disabled (0UL) /*!< Read: Disabled */
#define SAADC_INTENCLR_CH7LIMITH_Enabled (1UL) /*!< Read: Enabled */
#define SAADC_INTENCLR_CH7LIMITH_Clear (1UL) /*!< Disable */

/* Bit 19 : Write '1' to disable interrupt for CH[6].LIMITL event */
#define SAADC_INTENCLR_CH6LIMITL_Pos (19UL) /*!< Position of CH6LIMITL field. */
#define SAADC_INTENCLR_CH6LIMITL_Msk (0x1UL << SAADC_INTENCLR_CH6LIMITL_Pos) /*!< Bit mask of CH6LIMITL field. */
#define SAADC_INTENCLR_CH6LIMITL_Disabled (0UL) /*!< Read: Disabled */
#define SAADC_INTENCLR_CH6LIMITL_Enabled (1UL) /*!< Read: Enabled */
#define SAADC_INTENCLR_CH6LIMITL_Clear (1UL) /*!< Disable */

/* Bit 18 : Write '1' to disable interrupt for CH[6].LIMITH event */
#define SAADC_INTENCLR_CH6LIMITH_Pos (18UL) /*!< Position of CH6LIMITH field. */
#define SAADC_INTENCLR_CH6LIMITH_Msk (0x1UL << SAADC_INTENCLR_CH6LIMITH_Pos) /*!< Bit mask of CH6LIMITH field. */
#define SAADC_INTENCLR_CH6LIMITH_Disabled (0UL) /*!< Read: Disabled */
#define SAADC_INTENCLR_CH6LIMITH_Enabled (1UL) /*!< Read: Enabled */
#define SAADC_INTENCLR_CH6LIMITH_Clear (1UL) /*!< Disable */

/* Bit 17 : Write '1' to disable interrupt for CH[5].LIMITL event */
#define SAADC_INTENCLR_CH5LIMITL_Pos (17UL) /*!< Position of CH5LIMITL field. */
#define SAADC_INTENCLR_CH5LIMITL_Msk (0x1UL << SAADC_INTENCLR_CH5LIMITL_Pos) /*!< Bit mask of CH5LIMITL field. */
#define SAADC_INTENCLR_CH5LIMITL_Disabled (0UL) /*!< Read: Disabled */
#define SAADC_INTENCLR_CH5LIMITL_Enabled (1UL) /*!< Read: Enabled */
#define SAADC_INTENCLR_CH5LIMITL_Clear (1UL) /*!< Disable */

/* Bit 16 : Write '1' to disable interrupt for CH[5].LIMITH event */
#define SAADC_INTENCLR_CH5LIMITH_Pos (16UL) /*!< Position of CH5LIMITH field. */
#define SAADC_INTENCLR_CH5LIMITH_Msk (0x1UL << SAADC_INTENCLR_CH5LIMITH_Pos) /*!< Bit mask of CH5LIMITH field. */
#define SAADC_INTENCLR_CH5LIMITH_Disabled (0UL) /*!< Read: Disabled */
#define SAADC_INTENCLR_CH5LIMITH_Enabled (1UL) /*!< Read: Enabled */
#define SAADC_INTENCLR_CH5LIMITH_Clear (1UL) /*!< Disable */

/* Bit 15 : Write '1' to disable interrupt for CH[4].LIMITL event */
#define SAADC_INTENCLR_CH4LIMITL_Pos (15UL) /*!< Position of CH4LIMITL field. */
#define SAADC_INTENCLR_CH4LIMITL_Msk (0x1UL << SAADC_INTENCLR_CH4LIMITL_Pos) /*!< Bit mask of CH4LIMITL field. */
#define SAADC_INTENCLR_CH4LIMITL_Disabled (0UL) /*!< Read: Disabled */
#define SAADC_INTENCLR_CH4LIMITL_Enabled (1UL) /*!< Read: Enabled */
#define SAADC_INTENCLR_CH4LIMITL_Clear (1UL) /*!< Disable */

/* Bit 14 : Write '1' to disable interrupt for CH[4].LIMITH event */
#define SAADC_INTENCLR_CH4LIMITH_Pos (14UL) /*!< Position of CH4LIMITH field. */
#define SAADC_INTENCLR_CH4LIMITH_Msk (0x1UL << SAADC_INTENCLR_CH4LIMITH_Pos) /*!< Bit mask of CH4LIMITH field. */
#define SAADC_INTENCLR_CH4LIMITH_Disabled (0UL) /*!< Read: Disabled */
#define SAADC_INTENCLR_CH4LIMITH_Enabled (1UL) /*!< Read: Enabled */
#define SAADC_INTENCLR_CH4LIMITH_Clear (1UL) /*!< Disable */

/* Bit 13 : Write '1' to disable interrupt for CH[3].LIMITL event */
#define SAADC_INTENCLR_CH3LIMITL_Pos (13UL) /*!< Position of CH3LIMITL field. */
#define SAADC_INTENCLR_CH3LIMITL_Msk (0x1UL << SAADC_INTENCLR_CH3LIMITL_Pos) /*!< Bit mask of CH3LIMITL field. */
#define SAADC_INTENCLR_CH3LIMITL_Disabled (0UL) /*!< Read: Disabled */
#define SAADC_INTENCLR_CH3LIMITL_Enabled (1UL) /*!< Read: Enabled */
#define SAADC_INTENCLR_CH3LIMITL_Clear (1UL) /*!< Disable */

/* Bit 12 : Write '1' to disable interrupt for CH[3].LIMITH event */
#define SAADC_INTENCLR_CH3LIMITH_Pos (12UL) /*!< Position of CH3LIMITH field. */
#define SAADC_INTENCLR_CH3LIMITH_Msk (0x1UL << SAADC_INTENCLR_CH3LIMITH_Pos) /*!< Bit mask of CH3LIMITH field. */
#define SAADC_INTENCLR_CH3LIMITH_Disabled (0UL) /*!< Read: Disabled */
#define SAADC_INTENCLR_CH3LIMITH_Enabled (1UL) /*!< Read: Enabled */
#define SAADC_INTENCLR_CH3LIMITH_Clear (1UL) /*!< Disable */

/* Bit 11 : Write '1' to disable interrupt for CH[2].LIMITL event */
#define SAADC_INTENCLR_CH2LIMITL_Pos (11UL) /*!< Position of CH2LIMITL field. */
#define SAADC_INTENCLR_CH2LIMITL_Msk (0x1UL << SAADC_INTENCLR_CH2LIMITL_Pos) /*!< Bit mask of CH2LIMITL field. */
#define SAADC_INTENCLR_CH2LIMITL_Disabled (0UL) /*!< Read: Disabled */
#define SAADC_INTENCLR_CH2LIMITL_Enabled (1UL) /*!< Read: Enabled */
#define SAADC_INTENCLR_CH2LIMITL_Clear (1UL) /*!< Disable */

/* Bit 10 : Write '1' to disable interrupt for CH[2].LIMITH event */
#define SAADC_INTENCLR_CH2LIMITH_Pos (10UL) /*!< Position of CH2LIMITH field. */
#define SAADC_INTENCLR_CH2LIMITH_Msk (0x1UL << SAADC_INTENCLR_CH2LIMITH_Pos) /*!< Bit mask of CH2LIMITH field. */
#define SAADC_INTENCLR_CH2LIMITH_Disabled (0UL) /*!< Read: Disabled */
#define SAADC_INTENCLR_CH2LIMITH_Enabled (1UL) /*!< Read: Enabled */
#define SAADC_INTENCLR_CH2LIMITH_Clear (1UL) /*!< Disable */

/* Bit 9 : Write '1' to disable interrupt for CH[1].LIMITL event */
#define SAADC_INTENCLR_CH1LIMITL_Pos (9UL) /*!< Position of CH1LIMITL field. */
#define SAADC_INTENCLR_CH1LIMITL_Msk (0x1UL << SAADC_INTENCLR_CH1LIMITL_Pos) /*!< Bit mask of CH1LIMITL field. */
#define SAADC_INTENCLR_CH1LIMITL_Disabled (0UL) /*!< Read: Disabled */
#define SAADC_INTENCLR_CH1LIMITL_Enabled (1UL) /*!< Read: Enabled */
#define SAADC_INTENCLR_CH1LIMITL_Clear (1UL) /*!< Disable */

/* Bit 8 : Write '1' to disable interrupt for CH[1].LIMITH event */
#define SAADC_INTENCLR_CH1LIMITH_Pos (8UL) /*!< Position of CH1LIMITH field. */
#define SAADC_INTENCLR_CH1LIMITH_Msk (0x1UL << SAADC_INTENCLR_CH1LIMITH_Pos) /*!< Bit mask of CH1LIMITH field. */
#define SAADC_INTENCLR_CH1LIMITH_Disabled (0UL) /*!< Read: Disabled */
#define SAADC_INTENCLR_CH1LIMITH_Enabled (1UL) /*!< Read: Enabled */
#define SAADC_INTENCLR_CH1LIMITH_Clear (1UL) /*!< Disable */

/* Bit 7 : Write '1' to disable interrupt for CH[0].LIMITL event */
#define SAADC_INTENCLR_CH0LIMITL_Pos (7UL) /*!< Position of CH0LIMITL field. */
#define SAADC_INTENCLR_CH0LIMITL_Msk (0x1UL << SAADC_INTENCLR_CH0LIMITL_Pos) /*!< Bit mask of CH0LIMITL field. */
#define SAADC_INTENCLR_CH0LIMITL_Disabled (0UL) /*!< Read: Disabled */
#define SAADC_INTENCLR_CH0LIMITL_Enabled (1UL) /*!< Read: Enabled */
#define SAADC_INTENCLR_CH0LIMITL_Clear (1UL) /*!< Disable */

/* Bit 6 : Write '1' to disable interrupt for CH[0].LIMITH event */
#define SAADC_INTENCLR_CH0LIMITH_Pos (6UL) /*!< Position of CH0LIMITH field. */
#define SAADC_INTENCLR_CH0LIMITH_Msk (0x1UL << SAADC_INTENCLR_CH0LIMITH_Pos) /*!< Bit mask of CH0LIMITH field. */
#define SAADC_INTENCLR_CH0LIMITH_Disabled (0UL) /*!< Read: Disabled */
#define SAADC_INTENCLR_CH0LIMITH_Enabled (1UL) /*!< Read: Enabled */
#define SAADC_INTENCLR_CH0LIMITH_Clear (1UL) /*!< Disable */

/* Bit 5 : Write '1' to disable interrupt for STOPPED event */
#define SAADC_INTENCLR_STOPPED_Pos (5UL) /*!< Position of STOPPED field. */
#define SAADC_INTENCLR_STOPPED_Msk (0x1UL << SAADC_INTENCLR_STOPPED_Pos) /*!< Bit mask of STOPPED field. */
#define SAADC_INTENCLR_STOPPED_Disabled (0UL) /*!< Read: Disabled */
#define SAADC_INTENCLR_STOPPED_Enabled (1UL) /*!< Read: Enabled */
#define SAADC_INTENCLR_STOPPED_Clear (1UL) /*!< Disable */

/* Bit 4 : Write '1' to disable interrupt for CALIBRATEDONE event */
#define SAADC_INTENCLR_CALIBRATEDONE_Pos (4UL) /*!< Position of CALIBRATEDONE field. */
#define SAADC_INTENCLR_CALIBRATEDONE_Msk (0x1UL << SAADC_INTENCLR_CALIBRATEDONE_Pos) /*!< Bit mask of CALIBRATEDONE field. */
#define SAADC_INTENCLR_CALIBRATEDONE_Disabled (0UL) /*!< Read: Disabled */
#define SAADC_INTENCLR_CALIBRATEDONE_Enabled (1UL) /*!< Read: Enabled */
#define SAADC_INTENCLR_CALIBRATEDONE_Clear (1UL) /*!< Disable */

/* Bit 3 : Write '1' to disable interrupt for RESULTDONE event */
#define SAADC_INTENCLR_RESULTDONE_Pos (3UL) /*!< Position of RESULTDONE field. */
#define SAADC_INTENCLR_RESULTDONE_Msk (0x1UL << SAADC_INTENCLR_RESULTDONE_Pos) /*!< Bit mask of RESULTDONE field. */
#define SAADC_INTENCLR_RESULTDONE_Disabled (0UL) /*!< Read: Disabled */
#define SAADC_INTENCLR_RESULTDONE_Enabled (1UL) /*!< Read: Enabled */
#define SAADC_INTENCLR_RESULTDONE_Clear (1UL) /*!< Disable */

/* Bit 2 : Write '1' to disable interrupt for DONE event */
#define SAADC_INTENCLR_DONE_Pos (2UL) /*!< Position of DONE field. */
#define SAADC_INTENCLR_DONE_Msk (0x1UL << SAADC_INTENCLR_DONE_Pos) /*!< Bit mask of DONE field. */
#define SAADC_INTENCLR_DONE_Disabled (0UL) /*!< Read: Disabled */
#define SAADC_INTENCLR_DONE_Enabled (1UL) /*!< Read: Enabled */
#define SAADC_INTENCLR_DONE_Clear (1UL) /*!< Disable */

/* Bit 1 : Write '1' to disable interrupt for END event */
#define SAADC_INTENCLR_END_Pos (1UL) /*!< Position of END field. */
#define SAADC_INTENCLR_END_Msk (0x1UL << SAADC_INTENCLR_END_Pos) /*!< Bit mask of END field. */
#define SAADC_INTENCLR_END_Disabled (0UL) /*!< Read: Disabled */
#define SAADC_INTENCLR_END_Enabled (1UL) /*!< Read: Enabled */
#define SAADC_INTENCLR_END_Clear (1UL) /*!< Disable */

/* Bit 0 : Write '1' to disable interrupt for STARTED event */
#define SAADC_INTENCLR_STARTED_Pos (0UL) /*!< Position of STARTED field. */
#define SAADC_INTENCLR_STARTED_Msk (0x1UL << SAADC_INTENCLR_STARTED_Pos) /*!< Bit mask of STARTED field. */
#define SAADC_INTENCLR_STARTED_Disabled (0UL) /*!< Read: Disabled */
#define SAADC_INTENCLR_STARTED_Enabled (1UL) /*!< Read: Enabled */
#define SAADC_INTENCLR_STARTED_Clear (1UL) /*!< Disable */

/* Register: SAADC_STATUS */
/* Description: Status */

/* Bit 0 : Status */
#define SAADC_STATUS_STATUS_Pos (0UL) /*!< Position of STATUS field. */
#define SAADC_STATUS_STATUS_Msk (0x1UL << SAADC_STATUS_STATUS_Pos) /*!< Bit mask of STATUS field. */
#define SAADC_STATUS_STATUS_Ready (0UL) /*!< ADC is ready. No on-going conversion. */
#define SAADC_STATUS_STATUS_Busy (1UL) /*!< ADC is busy. Conversion in progress. */

/* Register: SAADC_ENABLE */
/* Description: Enable or disable ADC */

/* Bit 0 : Enable or disable ADC */
#define SAADC_ENABLE_ENABLE_Pos (0UL) /*!< Position of ENABLE field. */
#define SAADC_ENABLE_ENABLE_Msk (0x1UL << SAADC_ENABLE_ENABLE_Pos) /*!< Bit mask of ENABLE field. */
#define SAADC_ENABLE_ENABLE_Disabled (0UL) /*!< Disable ADC */
#define SAADC_ENABLE_ENABLE_Enabled (1UL) /*!< Enable ADC */

/* Register: SAADC_CH_PSELP */
/* Description: Description cluster[n]: Input positive pin selection for CH[n] */

/* Bits 4..0 : Analog positive input channel */
#define SAADC_CH_PSELP_PSELP_Pos (0UL) /*!< Position of PSELP field. */
#define SAADC_CH_PSELP_PSELP_Msk (0x1FUL << SAADC_CH_PSELP_PSELP_Pos) /*!< Bit mask of PSELP field. */
#define SAADC_CH_PSELP_PSELP_NC (0UL) /*!< Not connected */
#define SAADC_CH_PSELP_PSELP_AnalogInput0 (1UL) /*!< AIN0 */
#define SAADC_CH_PSELP_PSELP_AnalogInput1 (2UL) /*!< AIN1 */
#define SAADC_CH_PSELP_PSELP_AnalogInput2 (3UL) /*!< AIN2 */
#define SAADC_CH_PSELP_PSELP_AnalogInput3 (4UL) /*!< AIN3 */
#define SAADC_CH_PSELP_PSELP_AnalogInput4 (5UL) /*!< AIN4 */
#define SAADC_CH_PSELP_PSELP_AnalogInput5 (6UL) /*!< AIN5 */
#define SAADC_CH_PSELP_PSELP_AnalogInput6 (7UL) /*!< AIN6 */
#define SAADC_CH_PSELP_PSELP_AnalogInput7 (8UL) /*!< AIN7 */
#define SAADC_CH_PSELP_PSELP_VDD (9UL) /*!< VDD */
#define SAADC_CH_PSELP_PSELP_ATB0 (0xAUL) /*!< ATB0 */
#define SAADC_CH_PSELP_PSELP_ATB1 (0xBUL) /*!< ATB1 */
#define SAADC_CH_PSELP_PSELP_ATB2 (0xCUL) /*!< ATB2 */
#define SAADC_CH_PSELP_PSELP_ATB3 (0xDUL) /*!< ATB3 */
#define SAADC_CH_PSELP_PSELP_AVDD1V3 (0xEUL) /*!< AVDD1V3 */
#define SAADC_CH_PSELP_PSELP_DVDD0V9 (0xFUL) /*!< DVDD0V9 */
#define SAADC_CH_PSELP_PSELP_SELREF (0x10UL) /*!< Selected reference */

/* Register: SAADC_CH_PSELN */
/* Description: Description cluster[n]: Input negative pin selection for CH[n] */

/* Bits 4..0 : Analog negative input, enables differential channel */
#define SAADC_CH_PSELN_PSELN_Pos (0UL) /*!< Position of PSELN field. */
#define SAADC_CH_PSELN_PSELN_Msk (0x1FUL << SAADC_CH_PSELN_PSELN_Pos) /*!< Bit mask of PSELN field. */
#define SAADC_CH_PSELN_PSELN_NC (0UL) /*!< Not connected */
#define SAADC_CH_PSELN_PSELN_AnalogInput0 (1UL) /*!< AIN0 */
#define SAADC_CH_PSELN_PSELN_AnalogInput1 (2UL) /*!< AIN1 */
#define SAADC_CH_PSELN_PSELN_AnalogInput2 (3UL) /*!< AIN2 */
#define SAADC_CH_PSELN_PSELN_AnalogInput3 (4UL) /*!< AIN3 */
#define SAADC_CH_PSELN_PSELN_AnalogInput4 (5UL) /*!< AIN4 */
#define SAADC_CH_PSELN_PSELN_AnalogInput5 (6UL) /*!< AIN5 */
#define SAADC_CH_PSELN_PSELN_AnalogInput6 (7UL) /*!< AIN6 */
#define SAADC_CH_PSELN_PSELN_AnalogInput7 (8UL) /*!< AIN7 */
#define SAADC_CH_PSELN_PSELN_VDD (9UL) /*!< VDD */
#define SAADC_CH_PSELN_PSELN_ATB0 (0xAUL) /*!< ATB0 */
#define SAADC_CH_PSELN_PSELN_ATB1 (0xBUL) /*!< ATB1 */
#define SAADC_CH_PSELN_PSELN_ATB2 (0xCUL) /*!< ATB2 */
#define SAADC_CH_PSELN_PSELN_ATB3 (0xDUL) /*!< ATB3 */
#define SAADC_CH_PSELN_PSELN_AVDD1V3 (0xEUL) /*!< AVDD1V3 */
#define SAADC_CH_PSELN_PSELN_DVDD0V9 (0xFUL) /*!< DVDD0V9 */
#define SAADC_CH_PSELN_PSELN_SELREF (0x10UL) /*!< Selected reference */

/* Register: SAADC_CH_CONFIG */
/* Description: Description cluster[n]: Input configuration for CH[n] */

/* Bit 24 : Enable burst mode */
#define SAADC_CH_CONFIG_BURST_Pos (24UL) /*!< Position of BURST field. */
#define SAADC_CH_CONFIG_BURST_Msk (0x1UL << SAADC_CH_CONFIG_BURST_Pos) /*!< Bit mask of BURST field. */
#define SAADC_CH_CONFIG_BURST_Disabled (0UL) /*!< Burst mode is disabled (normal operation) */
#define SAADC_CH_CONFIG_BURST_Enabled (1UL) /*!< Burst mode is enabled. SAADC takes 2^OVERSAMPLE number of samples as fast as it can, and sends the average to Data RAM. */

/* Bit 20 : Enable differential mode */
#define SAADC_CH_CONFIG_MODE_Pos (20UL) /*!< Position of MODE field. */
#define SAADC_CH_CONFIG_MODE_Msk (0x1UL << SAADC_CH_CONFIG_MODE_Pos) /*!< Bit mask of MODE field. */
#define SAADC_CH_CONFIG_MODE_SE (0UL) /*!< Single ended, PSELN will be ignored, negative input to ADC shorted to GND */
#define SAADC_CH_CONFIG_MODE_Diff (1UL) /*!< Differential */

/* Bits 18..16 : Acquisition time, the time the ADC uses to sample the input voltage */
#define SAADC_CH_CONFIG_TACQ_Pos (16UL) /*!< Position of TACQ field. */
#define SAADC_CH_CONFIG_TACQ_Msk (0x7UL << SAADC_CH_CONFIG_TACQ_Pos) /*!< Bit mask of TACQ field. */
#define SAADC_CH_CONFIG_TACQ_3us (0UL) /*!< 3 us */
#define SAADC_CH_CONFIG_TACQ_5us (1UL) /*!< 5 us */
#define SAADC_CH_CONFIG_TACQ_10us (2UL) /*!< 10 us */
#define SAADC_CH_CONFIG_TACQ_15us (3UL) /*!< 15 us */
#define SAADC_CH_CONFIG_TACQ_20us (4UL) /*!< 20 us */
#define SAADC_CH_CONFIG_TACQ_40us (5UL) /*!< 40 us */
#define SAADC_CH_CONFIG_TACQ_1us (6UL) /*!< 1 us */
#define SAADC_CH_CONFIG_TACQ_2us (7UL) /*!< 2 us */

/* Bits 14..12 : Reference control */
#define SAADC_CH_CONFIG_REFSEL_Pos (12UL) /*!< Position of REFSEL field. */
#define SAADC_CH_CONFIG_REFSEL_Msk (0x7UL << SAADC_CH_CONFIG_REFSEL_Pos) /*!< Bit mask of REFSEL field. */
#define SAADC_CH_CONFIG_REFSEL_Internal (0UL) /*!< Internal reference (0.6 V) */
#define SAADC_CH_CONFIG_REFSEL_VDD1_4 (1UL) /*!< VDD/4 as reference */
#define SAADC_CH_CONFIG_REFSEL_PADCIN1_4 (2UL) /*!< PADC_IN/4 as reference */
#define SAADC_CH_CONFIG_REFSEL_ATB0 (3UL) /*!< ATB0 as reference */
#define SAADC_CH_CONFIG_REFSEL_ATB1 (4UL) /*!< ATB1 as reference */
#define SAADC_CH_CONFIG_REFSEL_MBIAS (5UL) /*!< MBIAS as reference */

/* Bits 10..8 : Gain control */
#define SAADC_CH_CONFIG_GAIN_Pos (8UL) /*!< Position of GAIN field. */
#define SAADC_CH_CONFIG_GAIN_Msk (0x7UL << SAADC_CH_CONFIG_GAIN_Pos) /*!< Bit mask of GAIN field. */
#define SAADC_CH_CONFIG_GAIN_Gain1_6 (0UL) /*!< 1/6 */
#define SAADC_CH_CONFIG_GAIN_Gain1_5 (1UL) /*!< 1/5 */
#define SAADC_CH_CONFIG_GAIN_Gain1_4 (2UL) /*!< 1/4 */
#define SAADC_CH_CONFIG_GAIN_Gain1_3 (3UL) /*!< 1/3 */
#define SAADC_CH_CONFIG_GAIN_Gain1_2 (4UL) /*!< 1/2 */
#define SAADC_CH_CONFIG_GAIN_Gain1 (5UL) /*!< 1 */
#define SAADC_CH_CONFIG_GAIN_Gain2 (6UL) /*!< 2 */
#define SAADC_CH_CONFIG_GAIN_Gain4 (7UL) /*!< 4 */

/* Bits 5..4 : Negative channel resistor control */
#define SAADC_CH_CONFIG_RESN_Pos (4UL) /*!< Position of RESN field. */
#define SAADC_CH_CONFIG_RESN_Msk (0x3UL << SAADC_CH_CONFIG_RESN_Pos) /*!< Bit mask of RESN field. */
#define SAADC_CH_CONFIG_RESN_Bypass (0UL) /*!< Bypass resistor ladder */
#define SAADC_CH_CONFIG_RESN_Pulldown (1UL) /*!< Pull-down to GND */
#define SAADC_CH_CONFIG_RESN_Pullup (2UL) /*!< Pull-up to VDD */
#define SAADC_CH_CONFIG_RESN_VDD1_2 (3UL) /*!< Set input at VDD/2 */

/* Bits 1..0 : Positive channel resistor control */
#define SAADC_CH_CONFIG_RESP_Pos (0UL) /*!< Position of RESP field. */
#define SAADC_CH_CONFIG_RESP_Msk (0x3UL << SAADC_CH_CONFIG_RESP_Pos) /*!< Bit mask of RESP field. */
#define SAADC_CH_CONFIG_RESP_Bypass (0UL) /*!< Bypass resistor ladder */
#define SAADC_CH_CONFIG_RESP_Pulldown (1UL) /*!< Pull-down to GND */
#define SAADC_CH_CONFIG_RESP_Pullup (2UL) /*!< Pull-up to VDD */
#define SAADC_CH_CONFIG_RESP_VDD1_2 (3UL) /*!< Set input at VDD/2 */

/* Register: SAADC_CH_LIMIT */
/* Description: Description cluster[n]: High/low limits for event monitoring a channel */

/* Bits 31..16 : High level limit */
#define SAADC_CH_LIMIT_HIGH_Pos (16UL) /*!< Position of HIGH field. */
#define SAADC_CH_LIMIT_HIGH_Msk (0xFFFFUL << SAADC_CH_LIMIT_HIGH_Pos) /*!< Bit mask of HIGH field. */

/* Bits 15..0 : Low level limit */
#define SAADC_CH_LIMIT_LOW_Pos (0UL) /*!< Position of LOW field. */
#define SAADC_CH_LIMIT_LOW_Msk (0xFFFFUL << SAADC_CH_LIMIT_LOW_Pos) /*!< Bit mask of LOW field. */

/* Register: SAADC_REGRESULT */
/* Description: Last conversion result */

/* Bits 31..0 : Result of the previous ADC conversion */
#define SAADC_REGRESULT_REGRESULT_Pos (0UL) /*!< Position of REGRESULT field. */
#define SAADC_REGRESULT_REGRESULT_Msk (0xFFFFFFFFUL << SAADC_REGRESULT_REGRESULT_Pos) /*!< Bit mask of REGRESULT field. */

/* Register: SAADC_RESOLUTION */
/* Description: Resolution configuration */

/* Bits 2..0 : Set the resolution */
#define SAADC_RESOLUTION_VAL_Pos (0UL) /*!< Position of VAL field. */
#define SAADC_RESOLUTION_VAL_Msk (0x7UL << SAADC_RESOLUTION_VAL_Pos) /*!< Bit mask of VAL field. */
#define SAADC_RESOLUTION_VAL_8bit (0UL) /*!< 8 bit */
#define SAADC_RESOLUTION_VAL_10bit (1UL) /*!< 10 bit */
#define SAADC_RESOLUTION_VAL_12bit (2UL) /*!< 12 bit */
#define SAADC_RESOLUTION_VAL_14bit (3UL) /*!< 14 bit */
#define SAADC_RESOLUTION_VAL_16bit (4UL) /*!< 16 bit */

/* Register: SAADC_OVERSAMPLE */
/* Description: Oversampling configuration. OVERSAMPLE should not be combined with SCAN. The RESOLUTION is applied before averaging, thus for high OVERSAMPLE a higher RESOLUTION should be used. */

/* Bits 3..0 : Oversample control */
#define SAADC_OVERSAMPLE_OVERSAMPLE_Pos (0UL) /*!< Position of OVERSAMPLE field. */
#define SAADC_OVERSAMPLE_OVERSAMPLE_Msk (0xFUL << SAADC_OVERSAMPLE_OVERSAMPLE_Pos) /*!< Bit mask of OVERSAMPLE field. */
#define SAADC_OVERSAMPLE_OVERSAMPLE_Bypass (0UL) /*!< Bypass oversampling */
#define SAADC_OVERSAMPLE_OVERSAMPLE_Over2x (1UL) /*!< Oversample 2x */
#define SAADC_OVERSAMPLE_OVERSAMPLE_Over4x (2UL) /*!< Oversample 4x */
#define SAADC_OVERSAMPLE_OVERSAMPLE_Over8x (3UL) /*!< Oversample 8x */
#define SAADC_OVERSAMPLE_OVERSAMPLE_Over16x (4UL) /*!< Oversample 16x */
#define SAADC_OVERSAMPLE_OVERSAMPLE_Over32x (5UL) /*!< Oversample 32x */
#define SAADC_OVERSAMPLE_OVERSAMPLE_Over64x (6UL) /*!< Oversample 64x */
#define SAADC_OVERSAMPLE_OVERSAMPLE_Over128x (7UL) /*!< Oversample 128x */
#define SAADC_OVERSAMPLE_OVERSAMPLE_Over256x (8UL) /*!< Oversample 256x */
#define SAADC_OVERSAMPLE_OVERSAMPLE_Over512x (9UL) /*!< Oversample 512x */
#define SAADC_OVERSAMPLE_OVERSAMPLE_Over1024x (10UL) /*!< Oversample 1024x */
#define SAADC_OVERSAMPLE_OVERSAMPLE_Over2048x (11UL) /*!< Oversample 2048x */
#define SAADC_OVERSAMPLE_OVERSAMPLE_Over4096x (12UL) /*!< Oversample 4096x */

/* Register: SAADC_SAMPLERATE */
/* Description: Controls normal or continuous sample rate */

/* Bit 12 : Select mode for sample rate control */
#define SAADC_SAMPLERATE_MODE_Pos (12UL) /*!< Position of MODE field. */
#define SAADC_SAMPLERATE_MODE_Msk (0x1UL << SAADC_SAMPLERATE_MODE_Pos) /*!< Bit mask of MODE field. */
#define SAADC_SAMPLERATE_MODE_Task (0UL) /*!< Rate is controlled from SAMPLE task */
#define SAADC_SAMPLERATE_MODE_Timers (1UL) /*!< Rate is controlled from local timer (use CC to control the rate) */

/* Bits 10..0 : Capture and compare value. Sample rate is 16 MHz/CC */
#define SAADC_SAMPLERATE_CC_Pos (0UL) /*!< Position of CC field. */
#define SAADC_SAMPLERATE_CC_Msk (0x7FFUL << SAADC_SAMPLERATE_CC_Pos) /*!< Bit mask of CC field. */

/* Register: SAADC_RESULT_PTR */
/* Description: Data pointer */

/* Bits 31..0 : Data pointer */
#define SAADC_RESULT_PTR_PTR_Pos (0UL) /*!< Position of PTR field. */
#define SAADC_RESULT_PTR_PTR_Msk (0xFFFFFFFFUL << SAADC_RESULT_PTR_PTR_Pos) /*!< Bit mask of PTR field. */

/* Register: SAADC_RESULT_MAXCNT */
/* Description: Maximum number of buffer words to transfer */

/* Bits 14..0 : Maximum number of buffer words to transfer */
#define SAADC_RESULT_MAXCNT_MAXCNT_Pos (0UL) /*!< Position of MAXCNT field. */
#define SAADC_RESULT_MAXCNT_MAXCNT_Msk (0x7FFFUL << SAADC_RESULT_MAXCNT_MAXCNT_Pos) /*!< Bit mask of MAXCNT field. */

/* Register: SAADC_RESULT_AMOUNT */
/* Description: Number of buffer words transferred since last START */

/* Bits 14..0 : Number of buffer words transferred since last START. This register can be read after an END or STOPPED event. */
#define SAADC_RESULT_AMOUNT_AMOUNT_Pos (0UL) /*!< Position of AMOUNT field. */
#define SAADC_RESULT_AMOUNT_AMOUNT_Msk (0x7FFFUL << SAADC_RESULT_AMOUNT_AMOUNT_Pos) /*!< Bit mask of AMOUNT field. */

/* Register: SAADC_TESTCTRL */
/* Description: Control signals used during test of ADC */

/* Bit 24 : Will enable the input mux in the ADC, so the resistor strings can be connected even when the analog core is powered down */
#define SAADC_TESTCTRL_ENINMUX_Pos (24UL) /*!< Position of ENINMUX field. */
#define SAADC_TESTCTRL_ENINMUX_Msk (0x1UL << SAADC_TESTCTRL_ENINMUX_Pos) /*!< Bit mask of ENINMUX field. */

/* Bits 21..20 : Analog testbus control */
#define SAADC_TESTCTRL_ATB_Pos (20UL) /*!< Position of ATB field. */
#define SAADC_TESTCTRL_ATB_Msk (0x3UL << SAADC_TESTCTRL_ATB_Pos) /*!< Bit mask of ATB field. */
#define SAADC_TESTCTRL_ATB_Disabled (0UL) /*!< ATB disabled */
#define SAADC_TESTCTRL_ATB_VREF (1UL) /*!< Internal reference on ATB0, buffered reference on ATB1 */

/* Bits 16..12 : Test bus for ADC core, see design description for coding */
#define SAADC_TESTCTRL_TST_Pos (12UL) /*!< Position of TST field. */
#define SAADC_TESTCTRL_TST_Msk (0x1FUL << SAADC_TESTCTRL_TST_Pos) /*!< Bit mask of TST field. */

/* Bit 8 : Short input. Used to measure offset of ADC. */
#define SAADC_TESTCTRL_SHORT_Pos (8UL) /*!< Position of SHORT field. */
#define SAADC_TESTCTRL_SHORT_Msk (0x1UL << SAADC_TESTCTRL_SHORT_Pos) /*!< Bit mask of SHORT field. */

/* Bit 4 : Swap positive and negative input */
#define SAADC_TESTCTRL_SWITCH_Pos (4UL) /*!< Position of SWITCH field. */
#define SAADC_TESTCTRL_SWITCH_Msk (0x1UL << SAADC_TESTCTRL_SWITCH_Pos) /*!< Bit mask of SWITCH field. */

/* Bits 1..0 : Current control, 0 = normal current, higher is higher current */
#define SAADC_TESTCTRL_ICTRL_Pos (0UL) /*!< Position of ICTRL field. */
#define SAADC_TESTCTRL_ICTRL_Msk (0x3UL << SAADC_TESTCTRL_ICTRL_Pos) /*!< Bit mask of ICTRL field. */

/* Register: SAADC_CALOFFSET */
/* Description: Calibration control for offset error */

/* Bits 5..0 : Sign-magnitude coding */
#define SAADC_CALOFFSET_CALOFFSET_Pos (0UL) /*!< Position of CALOFFSET field. */
#define SAADC_CALOFFSET_CALOFFSET_Msk (0x3FUL << SAADC_CALOFFSET_CALOFFSET_Pos) /*!< Bit mask of CALOFFSET field. */

/* Register: SAADC_CALGAIN */
/* Description: Calibration control for gain error */

/* Bits 6..0 : Offset binary coding */
#define SAADC_CALGAIN_CALGAIN_Pos (0UL) /*!< Position of CALGAIN field. */
#define SAADC_CALGAIN_CALGAIN_Msk (0x7FUL << SAADC_CALGAIN_CALGAIN_Pos) /*!< Bit mask of CALGAIN field. */

/* Register: SAADC_CALVREF */
/* Description: Calibration control for reference voltage */

/* Bits 6..0 : Offset binary coding */
#define SAADC_CALVREF_CALVREF_Pos (0UL) /*!< Position of CALVREF field. */
#define SAADC_CALVREF_CALVREF_Msk (0x7FUL << SAADC_CALVREF_CALVREF_Pos) /*!< Bit mask of CALVREF field. */

/* Register: SAADC_POWER */
/* Description: Peripheral power control */

/* Bit 0 : Peripheral power control. The peripheral and its registers will be reset to its initial state by switching the peripheral off and then back on again. */
#define SAADC_POWER_POWER_Pos (0UL) /*!< Position of POWER field. */
#define SAADC_POWER_POWER_Msk (0x1UL << SAADC_POWER_POWER_Pos) /*!< Bit mask of POWER field. */
#define SAADC_POWER_POWER_Disabled (0UL) /*!< Peripheral is powered off */
#define SAADC_POWER_POWER_Enabled (1UL) /*!< Peripheral is powered on */


/* Peripheral: SPIM */
/* Description: Serial Peripheral Interface Master with EasyDMA */

/* Register: SPIM_TASKS_START */
/* Description: Start SPI transaction */

/* Bit 0 :   */
#define SPIM_TASKS_START_TASKS_START_Pos (0UL) /*!< Position of TASKS_START field. */
#define SPIM_TASKS_START_TASKS_START_Msk (0x1UL << SPIM_TASKS_START_TASKS_START_Pos) /*!< Bit mask of TASKS_START field. */

/* Register: SPIM_TASKS_STOP */
/* Description: Stop SPI transaction */

/* Bit 0 :   */
#define SPIM_TASKS_STOP_TASKS_STOP_Pos (0UL) /*!< Position of TASKS_STOP field. */
#define SPIM_TASKS_STOP_TASKS_STOP_Msk (0x1UL << SPIM_TASKS_STOP_TASKS_STOP_Pos) /*!< Bit mask of TASKS_STOP field. */

/* Register: SPIM_TASKS_SUSPEND */
/* Description: Suspend SPI transaction */

/* Bit 0 :   */
#define SPIM_TASKS_SUSPEND_TASKS_SUSPEND_Pos (0UL) /*!< Position of TASKS_SUSPEND field. */
#define SPIM_TASKS_SUSPEND_TASKS_SUSPEND_Msk (0x1UL << SPIM_TASKS_SUSPEND_TASKS_SUSPEND_Pos) /*!< Bit mask of TASKS_SUSPEND field. */

/* Register: SPIM_TASKS_RESUME */
/* Description: Resume SPI transaction */

/* Bit 0 :   */
#define SPIM_TASKS_RESUME_TASKS_RESUME_Pos (0UL) /*!< Position of TASKS_RESUME field. */
#define SPIM_TASKS_RESUME_TASKS_RESUME_Msk (0x1UL << SPIM_TASKS_RESUME_TASKS_RESUME_Pos) /*!< Bit mask of TASKS_RESUME field. */

/* Register: SPIM_EVENTS_STOPPED */
/* Description: SPI transaction has stopped */

/* Bit 0 :   */
#define SPIM_EVENTS_STOPPED_EVENTS_STOPPED_Pos (0UL) /*!< Position of EVENTS_STOPPED field. */
#define SPIM_EVENTS_STOPPED_EVENTS_STOPPED_Msk (0x1UL << SPIM_EVENTS_STOPPED_EVENTS_STOPPED_Pos) /*!< Bit mask of EVENTS_STOPPED field. */

/* Register: SPIM_EVENTS_ENDRX */
/* Description: End of RXD buffer reached */

/* Bit 0 :   */
#define SPIM_EVENTS_ENDRX_EVENTS_ENDRX_Pos (0UL) /*!< Position of EVENTS_ENDRX field. */
#define SPIM_EVENTS_ENDRX_EVENTS_ENDRX_Msk (0x1UL << SPIM_EVENTS_ENDRX_EVENTS_ENDRX_Pos) /*!< Bit mask of EVENTS_ENDRX field. */

/* Register: SPIM_EVENTS_END */
/* Description: End of RXD buffer and TXD buffer reached */

/* Bit 0 :   */
#define SPIM_EVENTS_END_EVENTS_END_Pos (0UL) /*!< Position of EVENTS_END field. */
#define SPIM_EVENTS_END_EVENTS_END_Msk (0x1UL << SPIM_EVENTS_END_EVENTS_END_Pos) /*!< Bit mask of EVENTS_END field. */

/* Register: SPIM_EVENTS_ENDTX */
/* Description: End of TXD buffer reached */

/* Bit 0 :   */
#define SPIM_EVENTS_ENDTX_EVENTS_ENDTX_Pos (0UL) /*!< Position of EVENTS_ENDTX field. */
#define SPIM_EVENTS_ENDTX_EVENTS_ENDTX_Msk (0x1UL << SPIM_EVENTS_ENDTX_EVENTS_ENDTX_Pos) /*!< Bit mask of EVENTS_ENDTX field. */

/* Register: SPIM_EVENTS_STARTED */
/* Description: Transaction started */

/* Bit 0 :   */
#define SPIM_EVENTS_STARTED_EVENTS_STARTED_Pos (0UL) /*!< Position of EVENTS_STARTED field. */
#define SPIM_EVENTS_STARTED_EVENTS_STARTED_Msk (0x1UL << SPIM_EVENTS_STARTED_EVENTS_STARTED_Pos) /*!< Bit mask of EVENTS_STARTED field. */

/* Register: SPIM_SHORTS */
/* Description: Shortcut register */

/* Bit 17 : Shortcut between END event and START task */
#define SPIM_SHORTS_END_START_Pos (17UL) /*!< Position of END_START field. */
#define SPIM_SHORTS_END_START_Msk (0x1UL << SPIM_SHORTS_END_START_Pos) /*!< Bit mask of END_START field. */
#define SPIM_SHORTS_END_START_Disabled (0UL) /*!< Disable shortcut */
#define SPIM_SHORTS_END_START_Enabled (1UL) /*!< Enable shortcut */

/* Register: SPIM_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 19 : Enable or disable interrupt for STARTED event */
#define SPIM_INTEN_STARTED_Pos (19UL) /*!< Position of STARTED field. */
#define SPIM_INTEN_STARTED_Msk (0x1UL << SPIM_INTEN_STARTED_Pos) /*!< Bit mask of STARTED field. */
#define SPIM_INTEN_STARTED_Disabled (0UL) /*!< Disable */
#define SPIM_INTEN_STARTED_Enabled (1UL) /*!< Enable */

/* Bit 8 : Enable or disable interrupt for ENDTX event */
#define SPIM_INTEN_ENDTX_Pos (8UL) /*!< Position of ENDTX field. */
#define SPIM_INTEN_ENDTX_Msk (0x1UL << SPIM_INTEN_ENDTX_Pos) /*!< Bit mask of ENDTX field. */
#define SPIM_INTEN_ENDTX_Disabled (0UL) /*!< Disable */
#define SPIM_INTEN_ENDTX_Enabled (1UL) /*!< Enable */

/* Bit 6 : Enable or disable interrupt for END event */
#define SPIM_INTEN_END_Pos (6UL) /*!< Position of END field. */
#define SPIM_INTEN_END_Msk (0x1UL << SPIM_INTEN_END_Pos) /*!< Bit mask of END field. */
#define SPIM_INTEN_END_Disabled (0UL) /*!< Disable */
#define SPIM_INTEN_END_Enabled (1UL) /*!< Enable */

/* Bit 4 : Enable or disable interrupt for ENDRX event */
#define SPIM_INTEN_ENDRX_Pos (4UL) /*!< Position of ENDRX field. */
#define SPIM_INTEN_ENDRX_Msk (0x1UL << SPIM_INTEN_ENDRX_Pos) /*!< Bit mask of ENDRX field. */
#define SPIM_INTEN_ENDRX_Disabled (0UL) /*!< Disable */
#define SPIM_INTEN_ENDRX_Enabled (1UL) /*!< Enable */

/* Bit 1 : Enable or disable interrupt for STOPPED event */
#define SPIM_INTEN_STOPPED_Pos (1UL) /*!< Position of STOPPED field. */
#define SPIM_INTEN_STOPPED_Msk (0x1UL << SPIM_INTEN_STOPPED_Pos) /*!< Bit mask of STOPPED field. */
#define SPIM_INTEN_STOPPED_Disabled (0UL) /*!< Disable */
#define SPIM_INTEN_STOPPED_Enabled (1UL) /*!< Enable */

/* Register: SPIM_INTENSET */
/* Description: Enable interrupt */

/* Bit 19 : Write '1' to enable interrupt for STARTED event */
#define SPIM_INTENSET_STARTED_Pos (19UL) /*!< Position of STARTED field. */
#define SPIM_INTENSET_STARTED_Msk (0x1UL << SPIM_INTENSET_STARTED_Pos) /*!< Bit mask of STARTED field. */
#define SPIM_INTENSET_STARTED_Disabled (0UL) /*!< Read: Disabled */
#define SPIM_INTENSET_STARTED_Enabled (1UL) /*!< Read: Enabled */
#define SPIM_INTENSET_STARTED_Set (1UL) /*!< Enable */

/* Bit 8 : Write '1' to enable interrupt for ENDTX event */
#define SPIM_INTENSET_ENDTX_Pos (8UL) /*!< Position of ENDTX field. */
#define SPIM_INTENSET_ENDTX_Msk (0x1UL << SPIM_INTENSET_ENDTX_Pos) /*!< Bit mask of ENDTX field. */
#define SPIM_INTENSET_ENDTX_Disabled (0UL) /*!< Read: Disabled */
#define SPIM_INTENSET_ENDTX_Enabled (1UL) /*!< Read: Enabled */
#define SPIM_INTENSET_ENDTX_Set (1UL) /*!< Enable */

/* Bit 6 : Write '1' to enable interrupt for END event */
#define SPIM_INTENSET_END_Pos (6UL) /*!< Position of END field. */
#define SPIM_INTENSET_END_Msk (0x1UL << SPIM_INTENSET_END_Pos) /*!< Bit mask of END field. */
#define SPIM_INTENSET_END_Disabled (0UL) /*!< Read: Disabled */
#define SPIM_INTENSET_END_Enabled (1UL) /*!< Read: Enabled */
#define SPIM_INTENSET_END_Set (1UL) /*!< Enable */

/* Bit 4 : Write '1' to enable interrupt for ENDRX event */
#define SPIM_INTENSET_ENDRX_Pos (4UL) /*!< Position of ENDRX field. */
#define SPIM_INTENSET_ENDRX_Msk (0x1UL << SPIM_INTENSET_ENDRX_Pos) /*!< Bit mask of ENDRX field. */
#define SPIM_INTENSET_ENDRX_Disabled (0UL) /*!< Read: Disabled */
#define SPIM_INTENSET_ENDRX_Enabled (1UL) /*!< Read: Enabled */
#define SPIM_INTENSET_ENDRX_Set (1UL) /*!< Enable */

/* Bit 1 : Write '1' to enable interrupt for STOPPED event */
#define SPIM_INTENSET_STOPPED_Pos (1UL) /*!< Position of STOPPED field. */
#define SPIM_INTENSET_STOPPED_Msk (0x1UL << SPIM_INTENSET_STOPPED_Pos) /*!< Bit mask of STOPPED field. */
#define SPIM_INTENSET_STOPPED_Disabled (0UL) /*!< Read: Disabled */
#define SPIM_INTENSET_STOPPED_Enabled (1UL) /*!< Read: Enabled */
#define SPIM_INTENSET_STOPPED_Set (1UL) /*!< Enable */

/* Register: SPIM_INTENCLR */
/* Description: Disable interrupt */

/* Bit 19 : Write '1' to disable interrupt for STARTED event */
#define SPIM_INTENCLR_STARTED_Pos (19UL) /*!< Position of STARTED field. */
#define SPIM_INTENCLR_STARTED_Msk (0x1UL << SPIM_INTENCLR_STARTED_Pos) /*!< Bit mask of STARTED field. */
#define SPIM_INTENCLR_STARTED_Disabled (0UL) /*!< Read: Disabled */
#define SPIM_INTENCLR_STARTED_Enabled (1UL) /*!< Read: Enabled */
#define SPIM_INTENCLR_STARTED_Clear (1UL) /*!< Disable */

/* Bit 8 : Write '1' to disable interrupt for ENDTX event */
#define SPIM_INTENCLR_ENDTX_Pos (8UL) /*!< Position of ENDTX field. */
#define SPIM_INTENCLR_ENDTX_Msk (0x1UL << SPIM_INTENCLR_ENDTX_Pos) /*!< Bit mask of ENDTX field. */
#define SPIM_INTENCLR_ENDTX_Disabled (0UL) /*!< Read: Disabled */
#define SPIM_INTENCLR_ENDTX_Enabled (1UL) /*!< Read: Enabled */
#define SPIM_INTENCLR_ENDTX_Clear (1UL) /*!< Disable */

/* Bit 6 : Write '1' to disable interrupt for END event */
#define SPIM_INTENCLR_END_Pos (6UL) /*!< Position of END field. */
#define SPIM_INTENCLR_END_Msk (0x1UL << SPIM_INTENCLR_END_Pos) /*!< Bit mask of END field. */
#define SPIM_INTENCLR_END_Disabled (0UL) /*!< Read: Disabled */
#define SPIM_INTENCLR_END_Enabled (1UL) /*!< Read: Enabled */
#define SPIM_INTENCLR_END_Clear (1UL) /*!< Disable */

/* Bit 4 : Write '1' to disable interrupt for ENDRX event */
#define SPIM_INTENCLR_ENDRX_Pos (4UL) /*!< Position of ENDRX field. */
#define SPIM_INTENCLR_ENDRX_Msk (0x1UL << SPIM_INTENCLR_ENDRX_Pos) /*!< Bit mask of ENDRX field. */
#define SPIM_INTENCLR_ENDRX_Disabled (0UL) /*!< Read: Disabled */
#define SPIM_INTENCLR_ENDRX_Enabled (1UL) /*!< Read: Enabled */
#define SPIM_INTENCLR_ENDRX_Clear (1UL) /*!< Disable */

/* Bit 1 : Write '1' to disable interrupt for STOPPED event */
#define SPIM_INTENCLR_STOPPED_Pos (1UL) /*!< Position of STOPPED field. */
#define SPIM_INTENCLR_STOPPED_Msk (0x1UL << SPIM_INTENCLR_STOPPED_Pos) /*!< Bit mask of STOPPED field. */
#define SPIM_INTENCLR_STOPPED_Disabled (0UL) /*!< Read: Disabled */
#define SPIM_INTENCLR_STOPPED_Enabled (1UL) /*!< Read: Enabled */
#define SPIM_INTENCLR_STOPPED_Clear (1UL) /*!< Disable */

/* Register: SPIM_ENABLE */
/* Description: Enable SPIM */

/* Bits 3..0 : Enable or disable SPIM */
#define SPIM_ENABLE_ENABLE_Pos (0UL) /*!< Position of ENABLE field. */
#define SPIM_ENABLE_ENABLE_Msk (0xFUL << SPIM_ENABLE_ENABLE_Pos) /*!< Bit mask of ENABLE field. */
#define SPIM_ENABLE_ENABLE_Disabled (0UL) /*!< Disable SPIM */
#define SPIM_ENABLE_ENABLE_Enabled (7UL) /*!< Enable SPIM */

/* Register: SPIM_PSEL_SCK */
/* Description: Pin select for SCK */

/* Bit 31 : Connection */
#define SPIM_PSEL_SCK_CONNECT_Pos (31UL) /*!< Position of CONNECT field. */
#define SPIM_PSEL_SCK_CONNECT_Msk (0x1UL << SPIM_PSEL_SCK_CONNECT_Pos) /*!< Bit mask of CONNECT field. */
#define SPIM_PSEL_SCK_CONNECT_Connected (0UL) /*!< Connect */
#define SPIM_PSEL_SCK_CONNECT_Disconnected (1UL) /*!< Disconnect */

/* Bits 4..0 : Pin number */
#define SPIM_PSEL_SCK_PIN_Pos (0UL) /*!< Position of PIN field. */
#define SPIM_PSEL_SCK_PIN_Msk (0x1FUL << SPIM_PSEL_SCK_PIN_Pos) /*!< Bit mask of PIN field. */

/* Register: SPIM_PSEL_MOSI */
/* Description: Pin select for MOSI signal */

/* Bit 31 : Connection */
#define SPIM_PSEL_MOSI_CONNECT_Pos (31UL) /*!< Position of CONNECT field. */
#define SPIM_PSEL_MOSI_CONNECT_Msk (0x1UL << SPIM_PSEL_MOSI_CONNECT_Pos) /*!< Bit mask of CONNECT field. */
#define SPIM_PSEL_MOSI_CONNECT_Connected (0UL) /*!< Connect */
#define SPIM_PSEL_MOSI_CONNECT_Disconnected (1UL) /*!< Disconnect */

/* Bits 4..0 : Pin number */
#define SPIM_PSEL_MOSI_PIN_Pos (0UL) /*!< Position of PIN field. */
#define SPIM_PSEL_MOSI_PIN_Msk (0x1FUL << SPIM_PSEL_MOSI_PIN_Pos) /*!< Bit mask of PIN field. */

/* Register: SPIM_PSEL_MISO */
/* Description: Pin select for MISO signal */

/* Bit 31 : Connection */
#define SPIM_PSEL_MISO_CONNECT_Pos (31UL) /*!< Position of CONNECT field. */
#define SPIM_PSEL_MISO_CONNECT_Msk (0x1UL << SPIM_PSEL_MISO_CONNECT_Pos) /*!< Bit mask of CONNECT field. */
#define SPIM_PSEL_MISO_CONNECT_Connected (0UL) /*!< Connect */
#define SPIM_PSEL_MISO_CONNECT_Disconnected (1UL) /*!< Disconnect */

/* Bits 4..0 : Pin number */
#define SPIM_PSEL_MISO_PIN_Pos (0UL) /*!< Position of PIN field. */
#define SPIM_PSEL_MISO_PIN_Msk (0x1FUL << SPIM_PSEL_MISO_PIN_Pos) /*!< Bit mask of PIN field. */

/* Register: SPIM_RXDDATA */
/* Description: RXD register */

/* Bits 9..0 : RX data received. Double buffered. */
#define SPIM_RXDDATA_RXD_Pos (0UL) /*!< Position of RXD field. */
#define SPIM_RXDDATA_RXD_Msk (0x3FFUL << SPIM_RXDDATA_RXD_Pos) /*!< Bit mask of RXD field. */

/* Register: SPIM_TXDDATA */
/* Description: TXD register */

/* Bits 9..0 : TX data to send. Double buffered. */
#define SPIM_TXDDATA_TXD_Pos (0UL) /*!< Position of TXD field. */
#define SPIM_TXDDATA_TXD_Msk (0x3FFUL << SPIM_TXDDATA_TXD_Pos) /*!< Bit mask of TXD field. */

/* Register: SPIM_FREQUENCY */
/* Description: SPI frequency. Accuracy depends on the HFCLK source selected. */

/* Bits 31..0 : SPI master data rate */
#define SPIM_FREQUENCY_FREQUENCY_Pos (0UL) /*!< Position of FREQUENCY field. */
#define SPIM_FREQUENCY_FREQUENCY_Msk (0xFFFFFFFFUL << SPIM_FREQUENCY_FREQUENCY_Pos) /*!< Bit mask of FREQUENCY field. */
#define SPIM_FREQUENCY_FREQUENCY_K125 (0x02000000UL) /*!< 125 kbps */
#define SPIM_FREQUENCY_FREQUENCY_K250 (0x04000000UL) /*!< 250 kbps */
#define SPIM_FREQUENCY_FREQUENCY_K500 (0x08000000UL) /*!< 500 kbps */
#define SPIM_FREQUENCY_FREQUENCY_M1 (0x10000000UL) /*!< 1 Mbps */
#define SPIM_FREQUENCY_FREQUENCY_M2 (0x20000000UL) /*!< 2 Mbps */
#define SPIM_FREQUENCY_FREQUENCY_M4 (0x40000000UL) /*!< 4 Mbps */
#define SPIM_FREQUENCY_FREQUENCY_M8 (0x80000000UL) /*!< 8 Mbps */

/* Register: SPIM_RXD_PTR */
/* Description: Data pointer */

/* Bits 31..0 : Data pointer */
#define SPIM_RXD_PTR_PTR_Pos (0UL) /*!< Position of PTR field. */
#define SPIM_RXD_PTR_PTR_Msk (0xFFFFFFFFUL << SPIM_RXD_PTR_PTR_Pos) /*!< Bit mask of PTR field. */

/* Register: SPIM_RXD_MAXCNT */
/* Description: Maximum number of bytes in receive buffer */

/* Bits 9..0 : Maximum number of bytes in receive buffer */
#define SPIM_RXD_MAXCNT_MAXCNT_Pos (0UL) /*!< Position of MAXCNT field. */
#define SPIM_RXD_MAXCNT_MAXCNT_Msk (0x3FFUL << SPIM_RXD_MAXCNT_MAXCNT_Pos) /*!< Bit mask of MAXCNT field. */

/* Register: SPIM_RXD_AMOUNT */
/* Description: Number of bytes transferred in the last transaction */

/* Bits 9..0 : Number of bytes transferred in the last transaction */
#define SPIM_RXD_AMOUNT_AMOUNT_Pos (0UL) /*!< Position of AMOUNT field. */
#define SPIM_RXD_AMOUNT_AMOUNT_Msk (0x3FFUL << SPIM_RXD_AMOUNT_AMOUNT_Pos) /*!< Bit mask of AMOUNT field. */

/* Register: SPIM_RXD_LIST */
/* Description: EasyDMA list type */

/* Bits 2..0 : List type */
#define SPIM_RXD_LIST_LIST_Pos (0UL) /*!< Position of LIST field. */
#define SPIM_RXD_LIST_LIST_Msk (0x7UL << SPIM_RXD_LIST_LIST_Pos) /*!< Bit mask of LIST field. */
#define SPIM_RXD_LIST_LIST_Disabled (0UL) /*!< Disable EasyDMA list */
#define SPIM_RXD_LIST_LIST_ArrayList (1UL) /*!< Use array list */

/* Register: SPIM_TXD_PTR */
/* Description: Data pointer */

/* Bits 31..0 : Data pointer */
#define SPIM_TXD_PTR_PTR_Pos (0UL) /*!< Position of PTR field. */
#define SPIM_TXD_PTR_PTR_Msk (0xFFFFFFFFUL << SPIM_TXD_PTR_PTR_Pos) /*!< Bit mask of PTR field. */

/* Register: SPIM_TXD_MAXCNT */
/* Description: Maximum number of bytes in transmit buffer */

/* Bits 9..0 : Maximum number of bytes in transmit buffer */
#define SPIM_TXD_MAXCNT_MAXCNT_Pos (0UL) /*!< Position of MAXCNT field. */
#define SPIM_TXD_MAXCNT_MAXCNT_Msk (0x3FFUL << SPIM_TXD_MAXCNT_MAXCNT_Pos) /*!< Bit mask of MAXCNT field. */

/* Register: SPIM_TXD_AMOUNT */
/* Description: Number of bytes transferred in the last transaction */

/* Bits 9..0 : Number of bytes transferred in the last transaction */
#define SPIM_TXD_AMOUNT_AMOUNT_Pos (0UL) /*!< Position of AMOUNT field. */
#define SPIM_TXD_AMOUNT_AMOUNT_Msk (0x3FFUL << SPIM_TXD_AMOUNT_AMOUNT_Pos) /*!< Bit mask of AMOUNT field. */

/* Register: SPIM_TXD_LIST */
/* Description: EasyDMA list type */

/* Bits 2..0 : List type */
#define SPIM_TXD_LIST_LIST_Pos (0UL) /*!< Position of LIST field. */
#define SPIM_TXD_LIST_LIST_Msk (0x7UL << SPIM_TXD_LIST_LIST_Pos) /*!< Bit mask of LIST field. */
#define SPIM_TXD_LIST_LIST_Disabled (0UL) /*!< Disable EasyDMA list */
#define SPIM_TXD_LIST_LIST_ArrayList (1UL) /*!< Use array list */

/* Register: SPIM_CONFIG */
/* Description: Configuration register */

/* Bit 2 : Serial clock (SCK) polarity */
#define SPIM_CONFIG_CPOL_Pos (2UL) /*!< Position of CPOL field. */
#define SPIM_CONFIG_CPOL_Msk (0x1UL << SPIM_CONFIG_CPOL_Pos) /*!< Bit mask of CPOL field. */
#define SPIM_CONFIG_CPOL_ActiveHigh (0UL) /*!< Active high */
#define SPIM_CONFIG_CPOL_ActiveLow (1UL) /*!< Active low */

/* Bit 1 : Serial clock (SCK) phase */
#define SPIM_CONFIG_CPHA_Pos (1UL) /*!< Position of CPHA field. */
#define SPIM_CONFIG_CPHA_Msk (0x1UL << SPIM_CONFIG_CPHA_Pos) /*!< Bit mask of CPHA field. */
#define SPIM_CONFIG_CPHA_Leading (0UL) /*!< Sample on leading edge of clock, shift serial data on trailing edge */
#define SPIM_CONFIG_CPHA_Trailing (1UL) /*!< Sample on trailing edge of clock, shift serial data on leading edge */

/* Bit 0 : Bit order */
#define SPIM_CONFIG_ORDER_Pos (0UL) /*!< Position of ORDER field. */
#define SPIM_CONFIG_ORDER_Msk (0x1UL << SPIM_CONFIG_ORDER_Pos) /*!< Bit mask of ORDER field. */
#define SPIM_CONFIG_ORDER_MsbFirst (0UL) /*!< Most significant bit shifted out first */
#define SPIM_CONFIG_ORDER_LsbFirst (1UL) /*!< Least significant bit shifted out first */

/* Register: SPIM_ORC */
/* Description: Over-read character. Character clocked out in case and over-read of the TXD buffer. */

/* Bits 7..0 : Over-read character. Character clocked out in case and over-read of the TXD buffer. */
#define SPIM_ORC_ORC_Pos (0UL) /*!< Position of ORC field. */
#define SPIM_ORC_ORC_Msk (0xFFUL << SPIM_ORC_ORC_Pos) /*!< Bit mask of ORC field. */

/* Register: SPIM_POWER */
/* Description: Peripheral power control */

/* Bit 0 : Peripheral power control. The peripheral and its registers will be reset to its initial state by switching the peripheral off and then back on again. */
#define SPIM_POWER_POWER_Pos (0UL) /*!< Position of POWER field. */
#define SPIM_POWER_POWER_Msk (0x1UL << SPIM_POWER_POWER_Pos) /*!< Bit mask of POWER field. */
#define SPIM_POWER_POWER_Disabled (0UL) /*!< Peripheral is powered off */
#define SPIM_POWER_POWER_Enabled (1UL) /*!< Peripheral is powered on */


/* Peripheral: SPIS */
/* Description: SPI Slave */

/* Register: SPIS_TASKS_ACQUIRE */
/* Description: Acquire SPI semaphore */

/* Bit 0 :   */
#define SPIS_TASKS_ACQUIRE_TASKS_ACQUIRE_Pos (0UL) /*!< Position of TASKS_ACQUIRE field. */
#define SPIS_TASKS_ACQUIRE_TASKS_ACQUIRE_Msk (0x1UL << SPIS_TASKS_ACQUIRE_TASKS_ACQUIRE_Pos) /*!< Bit mask of TASKS_ACQUIRE field. */

/* Register: SPIS_TASKS_RELEASE */
/* Description: Release SPI semaphore, enabling the SPI slave to acquire it */

/* Bit 0 :   */
#define SPIS_TASKS_RELEASE_TASKS_RELEASE_Pos (0UL) /*!< Position of TASKS_RELEASE field. */
#define SPIS_TASKS_RELEASE_TASKS_RELEASE_Msk (0x1UL << SPIS_TASKS_RELEASE_TASKS_RELEASE_Pos) /*!< Bit mask of TASKS_RELEASE field. */

/* Register: SPIS_EVENTS_END */
/* Description: Granted transaction completed */

/* Bit 0 :   */
#define SPIS_EVENTS_END_EVENTS_END_Pos (0UL) /*!< Position of EVENTS_END field. */
#define SPIS_EVENTS_END_EVENTS_END_Msk (0x1UL << SPIS_EVENTS_END_EVENTS_END_Pos) /*!< Bit mask of EVENTS_END field. */

/* Register: SPIS_EVENTS_ENDRX */
/* Description: End of RXD buffer reached */

/* Bit 0 :   */
#define SPIS_EVENTS_ENDRX_EVENTS_ENDRX_Pos (0UL) /*!< Position of EVENTS_ENDRX field. */
#define SPIS_EVENTS_ENDRX_EVENTS_ENDRX_Msk (0x1UL << SPIS_EVENTS_ENDRX_EVENTS_ENDRX_Pos) /*!< Bit mask of EVENTS_ENDRX field. */

/* Register: SPIS_EVENTS_ACQUIRED */
/* Description: Semaphore acquired */

/* Bit 0 :   */
#define SPIS_EVENTS_ACQUIRED_EVENTS_ACQUIRED_Pos (0UL) /*!< Position of EVENTS_ACQUIRED field. */
#define SPIS_EVENTS_ACQUIRED_EVENTS_ACQUIRED_Msk (0x1UL << SPIS_EVENTS_ACQUIRED_EVENTS_ACQUIRED_Pos) /*!< Bit mask of EVENTS_ACQUIRED field. */

/* Register: SPIS_SHORTS */
/* Description: Shortcut register */

/* Bit 2 : Shortcut between END event and ACQUIRE task */
#define SPIS_SHORTS_END_ACQUIRE_Pos (2UL) /*!< Position of END_ACQUIRE field. */
#define SPIS_SHORTS_END_ACQUIRE_Msk (0x1UL << SPIS_SHORTS_END_ACQUIRE_Pos) /*!< Bit mask of END_ACQUIRE field. */
#define SPIS_SHORTS_END_ACQUIRE_Disabled (0UL) /*!< Disable shortcut */
#define SPIS_SHORTS_END_ACQUIRE_Enabled (1UL) /*!< Enable shortcut */

/* Register: SPIS_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 10 : Enable or disable interrupt for ACQUIRED event */
#define SPIS_INTEN_ACQUIRED_Pos (10UL) /*!< Position of ACQUIRED field. */
#define SPIS_INTEN_ACQUIRED_Msk (0x1UL << SPIS_INTEN_ACQUIRED_Pos) /*!< Bit mask of ACQUIRED field. */
#define SPIS_INTEN_ACQUIRED_Disabled (0UL) /*!< Disable */
#define SPIS_INTEN_ACQUIRED_Enabled (1UL) /*!< Enable */

/* Bit 4 : Enable or disable interrupt for ENDRX event */
#define SPIS_INTEN_ENDRX_Pos (4UL) /*!< Position of ENDRX field. */
#define SPIS_INTEN_ENDRX_Msk (0x1UL << SPIS_INTEN_ENDRX_Pos) /*!< Bit mask of ENDRX field. */
#define SPIS_INTEN_ENDRX_Disabled (0UL) /*!< Disable */
#define SPIS_INTEN_ENDRX_Enabled (1UL) /*!< Enable */

/* Bit 1 : Enable or disable interrupt for END event */
#define SPIS_INTEN_END_Pos (1UL) /*!< Position of END field. */
#define SPIS_INTEN_END_Msk (0x1UL << SPIS_INTEN_END_Pos) /*!< Bit mask of END field. */
#define SPIS_INTEN_END_Disabled (0UL) /*!< Disable */
#define SPIS_INTEN_END_Enabled (1UL) /*!< Enable */

/* Register: SPIS_INTENSET */
/* Description: Enable interrupt */

/* Bit 10 : Write '1' to enable interrupt for ACQUIRED event */
#define SPIS_INTENSET_ACQUIRED_Pos (10UL) /*!< Position of ACQUIRED field. */
#define SPIS_INTENSET_ACQUIRED_Msk (0x1UL << SPIS_INTENSET_ACQUIRED_Pos) /*!< Bit mask of ACQUIRED field. */
#define SPIS_INTENSET_ACQUIRED_Disabled (0UL) /*!< Read: Disabled */
#define SPIS_INTENSET_ACQUIRED_Enabled (1UL) /*!< Read: Enabled */
#define SPIS_INTENSET_ACQUIRED_Set (1UL) /*!< Enable */

/* Bit 4 : Write '1' to enable interrupt for ENDRX event */
#define SPIS_INTENSET_ENDRX_Pos (4UL) /*!< Position of ENDRX field. */
#define SPIS_INTENSET_ENDRX_Msk (0x1UL << SPIS_INTENSET_ENDRX_Pos) /*!< Bit mask of ENDRX field. */
#define SPIS_INTENSET_ENDRX_Disabled (0UL) /*!< Read: Disabled */
#define SPIS_INTENSET_ENDRX_Enabled (1UL) /*!< Read: Enabled */
#define SPIS_INTENSET_ENDRX_Set (1UL) /*!< Enable */

/* Bit 1 : Write '1' to enable interrupt for END event */
#define SPIS_INTENSET_END_Pos (1UL) /*!< Position of END field. */
#define SPIS_INTENSET_END_Msk (0x1UL << SPIS_INTENSET_END_Pos) /*!< Bit mask of END field. */
#define SPIS_INTENSET_END_Disabled (0UL) /*!< Read: Disabled */
#define SPIS_INTENSET_END_Enabled (1UL) /*!< Read: Enabled */
#define SPIS_INTENSET_END_Set (1UL) /*!< Enable */

/* Register: SPIS_INTENCLR */
/* Description: Disable interrupt */

/* Bit 10 : Write '1' to disable interrupt for ACQUIRED event */
#define SPIS_INTENCLR_ACQUIRED_Pos (10UL) /*!< Position of ACQUIRED field. */
#define SPIS_INTENCLR_ACQUIRED_Msk (0x1UL << SPIS_INTENCLR_ACQUIRED_Pos) /*!< Bit mask of ACQUIRED field. */
#define SPIS_INTENCLR_ACQUIRED_Disabled (0UL) /*!< Read: Disabled */
#define SPIS_INTENCLR_ACQUIRED_Enabled (1UL) /*!< Read: Enabled */
#define SPIS_INTENCLR_ACQUIRED_Clear (1UL) /*!< Disable */

/* Bit 4 : Write '1' to disable interrupt for ENDRX event */
#define SPIS_INTENCLR_ENDRX_Pos (4UL) /*!< Position of ENDRX field. */
#define SPIS_INTENCLR_ENDRX_Msk (0x1UL << SPIS_INTENCLR_ENDRX_Pos) /*!< Bit mask of ENDRX field. */
#define SPIS_INTENCLR_ENDRX_Disabled (0UL) /*!< Read: Disabled */
#define SPIS_INTENCLR_ENDRX_Enabled (1UL) /*!< Read: Enabled */
#define SPIS_INTENCLR_ENDRX_Clear (1UL) /*!< Disable */

/* Bit 1 : Write '1' to disable interrupt for END event */
#define SPIS_INTENCLR_END_Pos (1UL) /*!< Position of END field. */
#define SPIS_INTENCLR_END_Msk (0x1UL << SPIS_INTENCLR_END_Pos) /*!< Bit mask of END field. */
#define SPIS_INTENCLR_END_Disabled (0UL) /*!< Read: Disabled */
#define SPIS_INTENCLR_END_Enabled (1UL) /*!< Read: Enabled */
#define SPIS_INTENCLR_END_Clear (1UL) /*!< Disable */

/* Register: SPIS_SEMSTAT */
/* Description: Semaphore status register */

/* Bits 1..0 : Semaphore status */
#define SPIS_SEMSTAT_SEMSTAT_Pos (0UL) /*!< Position of SEMSTAT field. */
#define SPIS_SEMSTAT_SEMSTAT_Msk (0x3UL << SPIS_SEMSTAT_SEMSTAT_Pos) /*!< Bit mask of SEMSTAT field. */
#define SPIS_SEMSTAT_SEMSTAT_Free (0UL) /*!< Semaphore is free */
#define SPIS_SEMSTAT_SEMSTAT_CPU (1UL) /*!< Semaphore is assigned to CPU */
#define SPIS_SEMSTAT_SEMSTAT_SPIS (2UL) /*!< Semaphore is assigned to SPI slave */
#define SPIS_SEMSTAT_SEMSTAT_CPUPending (3UL) /*!< Semaphore is assigned to SPI but a handover to the CPU is pending */

/* Register: SPIS_STATUS */
/* Description: Status from last transaction */

/* Bit 1 : RX buffer overflow detected, and prevented */
#define SPIS_STATUS_OVERFLOW_Pos (1UL) /*!< Position of OVERFLOW field. */
#define SPIS_STATUS_OVERFLOW_Msk (0x1UL << SPIS_STATUS_OVERFLOW_Pos) /*!< Bit mask of OVERFLOW field. */
#define SPIS_STATUS_OVERFLOW_NotPresent (0UL) /*!< Read: error not present */
#define SPIS_STATUS_OVERFLOW_Present (1UL) /*!< Read: error present */
#define SPIS_STATUS_OVERFLOW_Clear (1UL) /*!< Write: clear error on writing '1' */

/* Bit 0 : TX buffer over-read detected, and prevented */
#define SPIS_STATUS_OVERREAD_Pos (0UL) /*!< Position of OVERREAD field. */
#define SPIS_STATUS_OVERREAD_Msk (0x1UL << SPIS_STATUS_OVERREAD_Pos) /*!< Bit mask of OVERREAD field. */
#define SPIS_STATUS_OVERREAD_NotPresent (0UL) /*!< Read: error not present */
#define SPIS_STATUS_OVERREAD_Present (1UL) /*!< Read: error present */
#define SPIS_STATUS_OVERREAD_Clear (1UL) /*!< Write: clear error on writing '1' */

/* Register: SPIS_ENABLE */
/* Description: Enable SPI slave */

/* Bits 3..0 : Enable or disable SPI slave */
#define SPIS_ENABLE_ENABLE_Pos (0UL) /*!< Position of ENABLE field. */
#define SPIS_ENABLE_ENABLE_Msk (0xFUL << SPIS_ENABLE_ENABLE_Pos) /*!< Bit mask of ENABLE field. */
#define SPIS_ENABLE_ENABLE_Disabled (0UL) /*!< Disable SPI slave */
#define SPIS_ENABLE_ENABLE_Enabled (2UL) /*!< Enable SPI slave */

/* Register: SPIS_PSEL_SCK */
/* Description: Pin select for SCK */

/* Bit 31 : Connection */
#define SPIS_PSEL_SCK_CONNECT_Pos (31UL) /*!< Position of CONNECT field. */
#define SPIS_PSEL_SCK_CONNECT_Msk (0x1UL << SPIS_PSEL_SCK_CONNECT_Pos) /*!< Bit mask of CONNECT field. */
#define SPIS_PSEL_SCK_CONNECT_Connected (0UL) /*!< Connect */
#define SPIS_PSEL_SCK_CONNECT_Disconnected (1UL) /*!< Disconnect */

/* Bits 4..0 : Pin number */
#define SPIS_PSEL_SCK_PIN_Pos (0UL) /*!< Position of PIN field. */
#define SPIS_PSEL_SCK_PIN_Msk (0x1FUL << SPIS_PSEL_SCK_PIN_Pos) /*!< Bit mask of PIN field. */

/* Register: SPIS_PSEL_MISO */
/* Description: Pin select for MISO signal */

/* Bit 31 : Connection */
#define SPIS_PSEL_MISO_CONNECT_Pos (31UL) /*!< Position of CONNECT field. */
#define SPIS_PSEL_MISO_CONNECT_Msk (0x1UL << SPIS_PSEL_MISO_CONNECT_Pos) /*!< Bit mask of CONNECT field. */
#define SPIS_PSEL_MISO_CONNECT_Connected (0UL) /*!< Connect */
#define SPIS_PSEL_MISO_CONNECT_Disconnected (1UL) /*!< Disconnect */

/* Bits 4..0 : Pin number */
#define SPIS_PSEL_MISO_PIN_Pos (0UL) /*!< Position of PIN field. */
#define SPIS_PSEL_MISO_PIN_Msk (0x1FUL << SPIS_PSEL_MISO_PIN_Pos) /*!< Bit mask of PIN field. */

/* Register: SPIS_PSEL_MOSI */
/* Description: Pin select for MOSI signal */

/* Bit 31 : Connection */
#define SPIS_PSEL_MOSI_CONNECT_Pos (31UL) /*!< Position of CONNECT field. */
#define SPIS_PSEL_MOSI_CONNECT_Msk (0x1UL << SPIS_PSEL_MOSI_CONNECT_Pos) /*!< Bit mask of CONNECT field. */
#define SPIS_PSEL_MOSI_CONNECT_Connected (0UL) /*!< Connect */
#define SPIS_PSEL_MOSI_CONNECT_Disconnected (1UL) /*!< Disconnect */

/* Bits 4..0 : Pin number */
#define SPIS_PSEL_MOSI_PIN_Pos (0UL) /*!< Position of PIN field. */
#define SPIS_PSEL_MOSI_PIN_Msk (0x1FUL << SPIS_PSEL_MOSI_PIN_Pos) /*!< Bit mask of PIN field. */

/* Register: SPIS_PSEL_CSN */
/* Description: Pin select for CSN signal */

/* Bit 31 : Connection */
#define SPIS_PSEL_CSN_CONNECT_Pos (31UL) /*!< Position of CONNECT field. */
#define SPIS_PSEL_CSN_CONNECT_Msk (0x1UL << SPIS_PSEL_CSN_CONNECT_Pos) /*!< Bit mask of CONNECT field. */
#define SPIS_PSEL_CSN_CONNECT_Connected (0UL) /*!< Connect */
#define SPIS_PSEL_CSN_CONNECT_Disconnected (1UL) /*!< Disconnect */

/* Bits 4..0 : Pin number */
#define SPIS_PSEL_CSN_PIN_Pos (0UL) /*!< Position of PIN field. */
#define SPIS_PSEL_CSN_PIN_Msk (0x1FUL << SPIS_PSEL_CSN_PIN_Pos) /*!< Bit mask of PIN field. */

/* Register: SPIS_RXD_PTR */
/* Description: RXD data pointer */

/* Bits 31..0 : RXD data pointer */
#define SPIS_RXD_PTR_PTR_Pos (0UL) /*!< Position of PTR field. */
#define SPIS_RXD_PTR_PTR_Msk (0xFFFFFFFFUL << SPIS_RXD_PTR_PTR_Pos) /*!< Bit mask of PTR field. */

/* Register: SPIS_RXD_MAXCNT */
/* Description: Maximum number of bytes in receive buffer */

/* Bits 9..0 : Maximum number of bytes in receive buffer */
#define SPIS_RXD_MAXCNT_MAXCNT_Pos (0UL) /*!< Position of MAXCNT field. */
#define SPIS_RXD_MAXCNT_MAXCNT_Msk (0x3FFUL << SPIS_RXD_MAXCNT_MAXCNT_Pos) /*!< Bit mask of MAXCNT field. */

/* Register: SPIS_RXD_AMOUNT */
/* Description: Number of bytes received in last granted transaction */

/* Bits 9..0 : Number of bytes received in the last granted transaction */
#define SPIS_RXD_AMOUNT_AMOUNT_Pos (0UL) /*!< Position of AMOUNT field. */
#define SPIS_RXD_AMOUNT_AMOUNT_Msk (0x3FFUL << SPIS_RXD_AMOUNT_AMOUNT_Pos) /*!< Bit mask of AMOUNT field. */

/* Register: SPIS_TXD_PTR */
/* Description: TXD data pointer */

/* Bits 31..0 : TXD data pointer */
#define SPIS_TXD_PTR_PTR_Pos (0UL) /*!< Position of PTR field. */
#define SPIS_TXD_PTR_PTR_Msk (0xFFFFFFFFUL << SPIS_TXD_PTR_PTR_Pos) /*!< Bit mask of PTR field. */

/* Register: SPIS_TXD_MAXCNT */
/* Description: Maximum number of bytes in transmit buffer */

/* Bits 9..0 : Maximum number of bytes in transmit buffer */
#define SPIS_TXD_MAXCNT_MAXCNT_Pos (0UL) /*!< Position of MAXCNT field. */
#define SPIS_TXD_MAXCNT_MAXCNT_Msk (0x3FFUL << SPIS_TXD_MAXCNT_MAXCNT_Pos) /*!< Bit mask of MAXCNT field. */

/* Register: SPIS_TXD_AMOUNT */
/* Description: Number of bytes transmitted in last granted transaction */

/* Bits 9..0 : Number of bytes transmitted in last granted transaction */
#define SPIS_TXD_AMOUNT_AMOUNT_Pos (0UL) /*!< Position of AMOUNT field. */
#define SPIS_TXD_AMOUNT_AMOUNT_Msk (0x3FFUL << SPIS_TXD_AMOUNT_AMOUNT_Pos) /*!< Bit mask of AMOUNT field. */

/* Register: SPIS_CONFIG */
/* Description: Configuration register */

/* Bit 2 : Serial clock (SCK) polarity */
#define SPIS_CONFIG_CPOL_Pos (2UL) /*!< Position of CPOL field. */
#define SPIS_CONFIG_CPOL_Msk (0x1UL << SPIS_CONFIG_CPOL_Pos) /*!< Bit mask of CPOL field. */
#define SPIS_CONFIG_CPOL_ActiveHigh (0UL) /*!< Active high */
#define SPIS_CONFIG_CPOL_ActiveLow (1UL) /*!< Active low */

/* Bit 1 : Serial clock (SCK) phase */
#define SPIS_CONFIG_CPHA_Pos (1UL) /*!< Position of CPHA field. */
#define SPIS_CONFIG_CPHA_Msk (0x1UL << SPIS_CONFIG_CPHA_Pos) /*!< Bit mask of CPHA field. */
#define SPIS_CONFIG_CPHA_Leading (0UL) /*!< Sample on leading edge of clock, shift serial data on trailing edge */
#define SPIS_CONFIG_CPHA_Trailing (1UL) /*!< Sample on trailing edge of clock, shift serial data on leading edge */

/* Bit 0 : Bit order */
#define SPIS_CONFIG_ORDER_Pos (0UL) /*!< Position of ORDER field. */
#define SPIS_CONFIG_ORDER_Msk (0x1UL << SPIS_CONFIG_ORDER_Pos) /*!< Bit mask of ORDER field. */
#define SPIS_CONFIG_ORDER_MsbFirst (0UL) /*!< Most significant bit shifted out first */
#define SPIS_CONFIG_ORDER_LsbFirst (1UL) /*!< Least significant bit shifted out first */

/* Register: SPIS_DEF */
/* Description: Default character. Character clocked out in case of an ignored transaction. */

/* Bits 7..0 : Default character. Character clocked out in case of an ignored transaction. */
#define SPIS_DEF_DEF_Pos (0UL) /*!< Position of DEF field. */
#define SPIS_DEF_DEF_Msk (0xFFUL << SPIS_DEF_DEF_Pos) /*!< Bit mask of DEF field. */

/* Register: SPIS_ORC */
/* Description: Over-read character */

/* Bits 7..0 : Over-read character. Character clocked out after an over-read of the transmit buffer. */
#define SPIS_ORC_ORC_Pos (0UL) /*!< Position of ORC field. */
#define SPIS_ORC_ORC_Msk (0xFFUL << SPIS_ORC_ORC_Pos) /*!< Bit mask of ORC field. */

/* Register: SPIS_POWER */
/* Description: Peripheral power control */

/* Bit 0 : Peripheral power control. The peripheral and its registers will be reset to its initial state by switching the peripheral off and then back on again. */
#define SPIS_POWER_POWER_Pos (0UL) /*!< Position of POWER field. */
#define SPIS_POWER_POWER_Msk (0x1UL << SPIS_POWER_POWER_Pos) /*!< Bit mask of POWER field. */
#define SPIS_POWER_POWER_Disabled (0UL) /*!< Peripheral is powered off */
#define SPIS_POWER_POWER_Enabled (1UL) /*!< Peripheral is powered on */


/* Peripheral: TEMP */
/* Description: Temperature Sensor */

/* Register: TEMP_TASKS_START */
/* Description: Start temperature measurement */

/* Bit 0 :   */
#define TEMP_TASKS_START_TASKS_START_Pos (0UL) /*!< Position of TASKS_START field. */
#define TEMP_TASKS_START_TASKS_START_Msk (0x1UL << TEMP_TASKS_START_TASKS_START_Pos) /*!< Bit mask of TASKS_START field. */

/* Register: TEMP_TASKS_STOP */
/* Description: Stop temperature measurement */

/* Bit 0 :   */
#define TEMP_TASKS_STOP_TASKS_STOP_Pos (0UL) /*!< Position of TASKS_STOP field. */
#define TEMP_TASKS_STOP_TASKS_STOP_Msk (0x1UL << TEMP_TASKS_STOP_TASKS_STOP_Pos) /*!< Bit mask of TASKS_STOP field. */

/* Register: TEMP_EVENTS_DATARDY */
/* Description: Temperature measurement complete, data ready */

/* Bit 0 :   */
#define TEMP_EVENTS_DATARDY_EVENTS_DATARDY_Pos (0UL) /*!< Position of EVENTS_DATARDY field. */
#define TEMP_EVENTS_DATARDY_EVENTS_DATARDY_Msk (0x1UL << TEMP_EVENTS_DATARDY_EVENTS_DATARDY_Pos) /*!< Bit mask of EVENTS_DATARDY field. */

/* Register: TEMP_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 0 : Enable or disable interrupt for DATARDY event */
#define TEMP_INTEN_DATARDY_Pos (0UL) /*!< Position of DATARDY field. */
#define TEMP_INTEN_DATARDY_Msk (0x1UL << TEMP_INTEN_DATARDY_Pos) /*!< Bit mask of DATARDY field. */
#define TEMP_INTEN_DATARDY_Disabled (0UL) /*!< Disable */
#define TEMP_INTEN_DATARDY_Enabled (1UL) /*!< Enable */

/* Register: TEMP_INTENSET */
/* Description: Enable interrupt */

/* Bit 0 : Write '1' to enable interrupt for DATARDY event */
#define TEMP_INTENSET_DATARDY_Pos (0UL) /*!< Position of DATARDY field. */
#define TEMP_INTENSET_DATARDY_Msk (0x1UL << TEMP_INTENSET_DATARDY_Pos) /*!< Bit mask of DATARDY field. */
#define TEMP_INTENSET_DATARDY_Disabled (0UL) /*!< Read: Disabled */
#define TEMP_INTENSET_DATARDY_Enabled (1UL) /*!< Read: Enabled */
#define TEMP_INTENSET_DATARDY_Set (1UL) /*!< Enable */

/* Register: TEMP_INTENCLR */
/* Description: Disable interrupt */

/* Bit 0 : Write '1' to disable interrupt for DATARDY event */
#define TEMP_INTENCLR_DATARDY_Pos (0UL) /*!< Position of DATARDY field. */
#define TEMP_INTENCLR_DATARDY_Msk (0x1UL << TEMP_INTENCLR_DATARDY_Pos) /*!< Bit mask of DATARDY field. */
#define TEMP_INTENCLR_DATARDY_Disabled (0UL) /*!< Read: Disabled */
#define TEMP_INTENCLR_DATARDY_Enabled (1UL) /*!< Read: Enabled */
#define TEMP_INTENCLR_DATARDY_Clear (1UL) /*!< Disable */

/* Register: TEMP_TEMP */
/* Description: Temperature in degC (0.25deg steps) */

/* Bits 31..0 : Temperature in degC (0.25deg steps) */
#define TEMP_TEMP_TEMP_Pos (0UL) /*!< Position of TEMP field. */
#define TEMP_TEMP_TEMP_Msk (0xFFFFFFFFUL << TEMP_TEMP_TEMP_Pos) /*!< Bit mask of TEMP field. */

/* Register: TEMP_DATA */
/* Description: Data after dec and calib */

/* Bits 12..0 : Data after dec and calib */
#define TEMP_DATA_DATA_Pos (0UL) /*!< Position of DATA field. */
#define TEMP_DATA_DATA_Msk (0x1FFFUL << TEMP_DATA_DATA_Pos) /*!< Bit mask of DATA field. */

/* Register: TEMP_CALIB */
/* Description: Calibration value. Reset value is taken from FICR-&gt;CHIPCONF01 bit 31:22 */

/* Bits 9..0 : TBD */
#define TEMP_CALIB_CALIB_Pos (0UL) /*!< Position of CALIB field. */
#define TEMP_CALIB_CALIB_Msk (0x3FFUL << TEMP_CALIB_CALIB_Pos) /*!< Bit mask of CALIB field. */

/* Register: TEMP_A0 */
/* Description: Slope of 1st piece wise linear function */

/* Bits 11..0 : Slope of 1st piece wise linear function */
#define TEMP_A0_A0_Pos (0UL) /*!< Position of A0 field. */
#define TEMP_A0_A0_Msk (0xFFFUL << TEMP_A0_A0_Pos) /*!< Bit mask of A0 field. */

/* Register: TEMP_A1 */
/* Description: Slope of 2nd piece wise linear function */

/* Bits 11..0 : Slope of 2nd piece wise linear function */
#define TEMP_A1_A1_Pos (0UL) /*!< Position of A1 field. */
#define TEMP_A1_A1_Msk (0xFFFUL << TEMP_A1_A1_Pos) /*!< Bit mask of A1 field. */

/* Register: TEMP_A2 */
/* Description: Slope of 3rd piece wise linear function */

/* Bits 11..0 : Slope of 3rd piece wise linear function */
#define TEMP_A2_A2_Pos (0UL) /*!< Position of A2 field. */
#define TEMP_A2_A2_Msk (0xFFFUL << TEMP_A2_A2_Pos) /*!< Bit mask of A2 field. */

/* Register: TEMP_A3 */
/* Description: Slope of 4th piece wise linear function */

/* Bits 11..0 : Slope of 4th piece wise linear function */
#define TEMP_A3_A3_Pos (0UL) /*!< Position of A3 field. */
#define TEMP_A3_A3_Msk (0xFFFUL << TEMP_A3_A3_Pos) /*!< Bit mask of A3 field. */

/* Register: TEMP_A4 */
/* Description: Slope of 5th piece wise linear function */

/* Bits 11..0 : Slope of 5th piece wise linear function */
#define TEMP_A4_A4_Pos (0UL) /*!< Position of A4 field. */
#define TEMP_A4_A4_Msk (0xFFFUL << TEMP_A4_A4_Pos) /*!< Bit mask of A4 field. */

/* Register: TEMP_A5 */
/* Description: Slope of 6th piece wise linear function */

/* Bits 11..0 : Slope of 6th piece wise linear function */
#define TEMP_A5_A5_Pos (0UL) /*!< Position of A5 field. */
#define TEMP_A5_A5_Msk (0xFFFUL << TEMP_A5_A5_Pos) /*!< Bit mask of A5 field. */

/* Register: TEMP_B0 */
/* Description: y-intercept of 1st piece wise linear function */

/* Bits 13..0 : y-intercept of 1st piece wise linear function */
#define TEMP_B0_B0_Pos (0UL) /*!< Position of B0 field. */
#define TEMP_B0_B0_Msk (0x3FFFUL << TEMP_B0_B0_Pos) /*!< Bit mask of B0 field. */

/* Register: TEMP_B1 */
/* Description: y-intercept of 2nd piece wise linear function */

/* Bits 13..0 : y-intercept of 2nd piece wise linear function */
#define TEMP_B1_B1_Pos (0UL) /*!< Position of B1 field. */
#define TEMP_B1_B1_Msk (0x3FFFUL << TEMP_B1_B1_Pos) /*!< Bit mask of B1 field. */

/* Register: TEMP_B2 */
/* Description: y-intercept of 3rd piece wise linear function */

/* Bits 13..0 : y-intercept of 3rd piece wise linear function */
#define TEMP_B2_B2_Pos (0UL) /*!< Position of B2 field. */
#define TEMP_B2_B2_Msk (0x3FFFUL << TEMP_B2_B2_Pos) /*!< Bit mask of B2 field. */

/* Register: TEMP_B3 */
/* Description: y-intercept of 4th piece wise linear function */

/* Bits 13..0 : y-intercept of 4th piece wise linear function */
#define TEMP_B3_B3_Pos (0UL) /*!< Position of B3 field. */
#define TEMP_B3_B3_Msk (0x3FFFUL << TEMP_B3_B3_Pos) /*!< Bit mask of B3 field. */

/* Register: TEMP_B4 */
/* Description: y-intercept of 5th piece wise linear function */

/* Bits 13..0 : y-intercept of 5th piece wise linear function */
#define TEMP_B4_B4_Pos (0UL) /*!< Position of B4 field. */
#define TEMP_B4_B4_Msk (0x3FFFUL << TEMP_B4_B4_Pos) /*!< Bit mask of B4 field. */

/* Register: TEMP_B5 */
/* Description: y-intercept of 6th piece wise linear function */

/* Bits 13..0 : y-intercept of 6th piece wise linear function */
#define TEMP_B5_B5_Pos (0UL) /*!< Position of B5 field. */
#define TEMP_B5_B5_Msk (0x3FFFUL << TEMP_B5_B5_Pos) /*!< Bit mask of B5 field. */

/* Register: TEMP_T0 */
/* Description: End point of 1st piece wise linear function */

/* Bits 7..0 : End point of 1st piece wise linear function */
#define TEMP_T0_T0_Pos (0UL) /*!< Position of T0 field. */
#define TEMP_T0_T0_Msk (0xFFUL << TEMP_T0_T0_Pos) /*!< Bit mask of T0 field. */

/* Register: TEMP_T1 */
/* Description: End point of 2nd piece wise linear function */

/* Bits 7..0 : End point of 2nd piece wise linear function */
#define TEMP_T1_T1_Pos (0UL) /*!< Position of T1 field. */
#define TEMP_T1_T1_Msk (0xFFUL << TEMP_T1_T1_Pos) /*!< Bit mask of T1 field. */

/* Register: TEMP_T2 */
/* Description: End point of 3rd piece wise linear function */

/* Bits 7..0 : End point of 3rd piece wise linear function */
#define TEMP_T2_T2_Pos (0UL) /*!< Position of T2 field. */
#define TEMP_T2_T2_Msk (0xFFUL << TEMP_T2_T2_Pos) /*!< Bit mask of T2 field. */

/* Register: TEMP_T3 */
/* Description: End point of 4th piece wise linear function */

/* Bits 7..0 : End point of 4th piece wise linear function */
#define TEMP_T3_T3_Pos (0UL) /*!< Position of T3 field. */
#define TEMP_T3_T3_Msk (0xFFUL << TEMP_T3_T3_Pos) /*!< Bit mask of T3 field. */

/* Register: TEMP_T4 */
/* Description: End point of 5th piece wise linear function */

/* Bits 7..0 : End point of 5th piece wise linear function */
#define TEMP_T4_T4_Pos (0UL) /*!< Position of T4 field. */
#define TEMP_T4_T4_Msk (0xFFUL << TEMP_T4_T4_Pos) /*!< Bit mask of T4 field. */

/* Register: TEMP_POWER */
/* Description: Peripheral power control */

/* Bit 0 : Peripheral power control. The peripheral and its registers will be reset to its initial state by switching the peripheral off and then back on again. */
#define TEMP_POWER_POWER_Pos (0UL) /*!< Position of POWER field. */
#define TEMP_POWER_POWER_Msk (0x1UL << TEMP_POWER_POWER_Pos) /*!< Bit mask of POWER field. */
#define TEMP_POWER_POWER_Disabled (0UL) /*!< Peripheral is powered off */
#define TEMP_POWER_POWER_Enabled (1UL) /*!< Peripheral is powered on */


/* Peripheral: TIMER */
/* Description: Timer/Counter 0 */

/* Register: TIMER_TASKS_START */
/* Description: Start Timer */

/* Bit 0 :   */
#define TIMER_TASKS_START_TASKS_START_Pos (0UL) /*!< Position of TASKS_START field. */
#define TIMER_TASKS_START_TASKS_START_Msk (0x1UL << TIMER_TASKS_START_TASKS_START_Pos) /*!< Bit mask of TASKS_START field. */

/* Register: TIMER_TASKS_STOP */
/* Description: Stop Timer */

/* Bit 0 :   */
#define TIMER_TASKS_STOP_TASKS_STOP_Pos (0UL) /*!< Position of TASKS_STOP field. */
#define TIMER_TASKS_STOP_TASKS_STOP_Msk (0x1UL << TIMER_TASKS_STOP_TASKS_STOP_Pos) /*!< Bit mask of TASKS_STOP field. */

/* Register: TIMER_TASKS_COUNT */
/* Description: Increment Timer (Counter mode only) */

/* Bit 0 :   */
#define TIMER_TASKS_COUNT_TASKS_COUNT_Pos (0UL) /*!< Position of TASKS_COUNT field. */
#define TIMER_TASKS_COUNT_TASKS_COUNT_Msk (0x1UL << TIMER_TASKS_COUNT_TASKS_COUNT_Pos) /*!< Bit mask of TASKS_COUNT field. */

/* Register: TIMER_TASKS_CLEAR */
/* Description: Clear time */

/* Bit 0 :   */
#define TIMER_TASKS_CLEAR_TASKS_CLEAR_Pos (0UL) /*!< Position of TASKS_CLEAR field. */
#define TIMER_TASKS_CLEAR_TASKS_CLEAR_Msk (0x1UL << TIMER_TASKS_CLEAR_TASKS_CLEAR_Pos) /*!< Bit mask of TASKS_CLEAR field. */

/* Register: TIMER_TASKS_SHUTDOWN */
/* Description: Deprecated register - Shut down timer */

/* Bit 0 :   */
#define TIMER_TASKS_SHUTDOWN_TASKS_SHUTDOWN_Pos (0UL) /*!< Position of TASKS_SHUTDOWN field. */
#define TIMER_TASKS_SHUTDOWN_TASKS_SHUTDOWN_Msk (0x1UL << TIMER_TASKS_SHUTDOWN_TASKS_SHUTDOWN_Pos) /*!< Bit mask of TASKS_SHUTDOWN field. */

/* Register: TIMER_TASKS_CAPTURE */
/* Description: Description collection[n]: Capture Timer value to CC[n] register */

/* Bit 0 :   */
#define TIMER_TASKS_CAPTURE_TASKS_CAPTURE_Pos (0UL) /*!< Position of TASKS_CAPTURE field. */
#define TIMER_TASKS_CAPTURE_TASKS_CAPTURE_Msk (0x1UL << TIMER_TASKS_CAPTURE_TASKS_CAPTURE_Pos) /*!< Bit mask of TASKS_CAPTURE field. */

/* Register: TIMER_EVENTS_COMPARE */
/* Description: Description collection[n]: Compare event on CC[n] match */

/* Bit 0 :   */
#define TIMER_EVENTS_COMPARE_EVENTS_COMPARE_Pos (0UL) /*!< Position of EVENTS_COMPARE field. */
#define TIMER_EVENTS_COMPARE_EVENTS_COMPARE_Msk (0x1UL << TIMER_EVENTS_COMPARE_EVENTS_COMPARE_Pos) /*!< Bit mask of EVENTS_COMPARE field. */

/* Register: TIMER_SHORTS */
/* Description: Shortcut register */

/* Bit 13 : Shortcut between COMPARE[5] event and STOP task */
#define TIMER_SHORTS_COMPARE5_STOP_Pos (13UL) /*!< Position of COMPARE5_STOP field. */
#define TIMER_SHORTS_COMPARE5_STOP_Msk (0x1UL << TIMER_SHORTS_COMPARE5_STOP_Pos) /*!< Bit mask of COMPARE5_STOP field. */
#define TIMER_SHORTS_COMPARE5_STOP_Disabled (0UL) /*!< Disable shortcut */
#define TIMER_SHORTS_COMPARE5_STOP_Enabled (1UL) /*!< Enable shortcut */

/* Bit 12 : Shortcut between COMPARE[4] event and STOP task */
#define TIMER_SHORTS_COMPARE4_STOP_Pos (12UL) /*!< Position of COMPARE4_STOP field. */
#define TIMER_SHORTS_COMPARE4_STOP_Msk (0x1UL << TIMER_SHORTS_COMPARE4_STOP_Pos) /*!< Bit mask of COMPARE4_STOP field. */
#define TIMER_SHORTS_COMPARE4_STOP_Disabled (0UL) /*!< Disable shortcut */
#define TIMER_SHORTS_COMPARE4_STOP_Enabled (1UL) /*!< Enable shortcut */

/* Bit 11 : Shortcut between COMPARE[3] event and STOP task */
#define TIMER_SHORTS_COMPARE3_STOP_Pos (11UL) /*!< Position of COMPARE3_STOP field. */
#define TIMER_SHORTS_COMPARE3_STOP_Msk (0x1UL << TIMER_SHORTS_COMPARE3_STOP_Pos) /*!< Bit mask of COMPARE3_STOP field. */
#define TIMER_SHORTS_COMPARE3_STOP_Disabled (0UL) /*!< Disable shortcut */
#define TIMER_SHORTS_COMPARE3_STOP_Enabled (1UL) /*!< Enable shortcut */

/* Bit 10 : Shortcut between COMPARE[2] event and STOP task */
#define TIMER_SHORTS_COMPARE2_STOP_Pos (10UL) /*!< Position of COMPARE2_STOP field. */
#define TIMER_SHORTS_COMPARE2_STOP_Msk (0x1UL << TIMER_SHORTS_COMPARE2_STOP_Pos) /*!< Bit mask of COMPARE2_STOP field. */
#define TIMER_SHORTS_COMPARE2_STOP_Disabled (0UL) /*!< Disable shortcut */
#define TIMER_SHORTS_COMPARE2_STOP_Enabled (1UL) /*!< Enable shortcut */

/* Bit 9 : Shortcut between COMPARE[1] event and STOP task */
#define TIMER_SHORTS_COMPARE1_STOP_Pos (9UL) /*!< Position of COMPARE1_STOP field. */
#define TIMER_SHORTS_COMPARE1_STOP_Msk (0x1UL << TIMER_SHORTS_COMPARE1_STOP_Pos) /*!< Bit mask of COMPARE1_STOP field. */
#define TIMER_SHORTS_COMPARE1_STOP_Disabled (0UL) /*!< Disable shortcut */
#define TIMER_SHORTS_COMPARE1_STOP_Enabled (1UL) /*!< Enable shortcut */

/* Bit 8 : Shortcut between COMPARE[0] event and STOP task */
#define TIMER_SHORTS_COMPARE0_STOP_Pos (8UL) /*!< Position of COMPARE0_STOP field. */
#define TIMER_SHORTS_COMPARE0_STOP_Msk (0x1UL << TIMER_SHORTS_COMPARE0_STOP_Pos) /*!< Bit mask of COMPARE0_STOP field. */
#define TIMER_SHORTS_COMPARE0_STOP_Disabled (0UL) /*!< Disable shortcut */
#define TIMER_SHORTS_COMPARE0_STOP_Enabled (1UL) /*!< Enable shortcut */

/* Bit 5 : Shortcut between COMPARE[5] event and CLEAR task */
#define TIMER_SHORTS_COMPARE5_CLEAR_Pos (5UL) /*!< Position of COMPARE5_CLEAR field. */
#define TIMER_SHORTS_COMPARE5_CLEAR_Msk (0x1UL << TIMER_SHORTS_COMPARE5_CLEAR_Pos) /*!< Bit mask of COMPARE5_CLEAR field. */
#define TIMER_SHORTS_COMPARE5_CLEAR_Disabled (0UL) /*!< Disable shortcut */
#define TIMER_SHORTS_COMPARE5_CLEAR_Enabled (1UL) /*!< Enable shortcut */

/* Bit 4 : Shortcut between COMPARE[4] event and CLEAR task */
#define TIMER_SHORTS_COMPARE4_CLEAR_Pos (4UL) /*!< Position of COMPARE4_CLEAR field. */
#define TIMER_SHORTS_COMPARE4_CLEAR_Msk (0x1UL << TIMER_SHORTS_COMPARE4_CLEAR_Pos) /*!< Bit mask of COMPARE4_CLEAR field. */
#define TIMER_SHORTS_COMPARE4_CLEAR_Disabled (0UL) /*!< Disable shortcut */
#define TIMER_SHORTS_COMPARE4_CLEAR_Enabled (1UL) /*!< Enable shortcut */

/* Bit 3 : Shortcut between COMPARE[3] event and CLEAR task */
#define TIMER_SHORTS_COMPARE3_CLEAR_Pos (3UL) /*!< Position of COMPARE3_CLEAR field. */
#define TIMER_SHORTS_COMPARE3_CLEAR_Msk (0x1UL << TIMER_SHORTS_COMPARE3_CLEAR_Pos) /*!< Bit mask of COMPARE3_CLEAR field. */
#define TIMER_SHORTS_COMPARE3_CLEAR_Disabled (0UL) /*!< Disable shortcut */
#define TIMER_SHORTS_COMPARE3_CLEAR_Enabled (1UL) /*!< Enable shortcut */

/* Bit 2 : Shortcut between COMPARE[2] event and CLEAR task */
#define TIMER_SHORTS_COMPARE2_CLEAR_Pos (2UL) /*!< Position of COMPARE2_CLEAR field. */
#define TIMER_SHORTS_COMPARE2_CLEAR_Msk (0x1UL << TIMER_SHORTS_COMPARE2_CLEAR_Pos) /*!< Bit mask of COMPARE2_CLEAR field. */
#define TIMER_SHORTS_COMPARE2_CLEAR_Disabled (0UL) /*!< Disable shortcut */
#define TIMER_SHORTS_COMPARE2_CLEAR_Enabled (1UL) /*!< Enable shortcut */

/* Bit 1 : Shortcut between COMPARE[1] event and CLEAR task */
#define TIMER_SHORTS_COMPARE1_CLEAR_Pos (1UL) /*!< Position of COMPARE1_CLEAR field. */
#define TIMER_SHORTS_COMPARE1_CLEAR_Msk (0x1UL << TIMER_SHORTS_COMPARE1_CLEAR_Pos) /*!< Bit mask of COMPARE1_CLEAR field. */
#define TIMER_SHORTS_COMPARE1_CLEAR_Disabled (0UL) /*!< Disable shortcut */
#define TIMER_SHORTS_COMPARE1_CLEAR_Enabled (1UL) /*!< Enable shortcut */

/* Bit 0 : Shortcut between COMPARE[0] event and CLEAR task */
#define TIMER_SHORTS_COMPARE0_CLEAR_Pos (0UL) /*!< Position of COMPARE0_CLEAR field. */
#define TIMER_SHORTS_COMPARE0_CLEAR_Msk (0x1UL << TIMER_SHORTS_COMPARE0_CLEAR_Pos) /*!< Bit mask of COMPARE0_CLEAR field. */
#define TIMER_SHORTS_COMPARE0_CLEAR_Disabled (0UL) /*!< Disable shortcut */
#define TIMER_SHORTS_COMPARE0_CLEAR_Enabled (1UL) /*!< Enable shortcut */

/* Register: TIMER_INTENSET */
/* Description: Enable interrupt */

/* Bit 21 : Write '1' to enable interrupt for COMPARE[5] event */
#define TIMER_INTENSET_COMPARE5_Pos (21UL) /*!< Position of COMPARE5 field. */
#define TIMER_INTENSET_COMPARE5_Msk (0x1UL << TIMER_INTENSET_COMPARE5_Pos) /*!< Bit mask of COMPARE5 field. */
#define TIMER_INTENSET_COMPARE5_Disabled (0UL) /*!< Read: Disabled */
#define TIMER_INTENSET_COMPARE5_Enabled (1UL) /*!< Read: Enabled */
#define TIMER_INTENSET_COMPARE5_Set (1UL) /*!< Enable */

/* Bit 20 : Write '1' to enable interrupt for COMPARE[4] event */
#define TIMER_INTENSET_COMPARE4_Pos (20UL) /*!< Position of COMPARE4 field. */
#define TIMER_INTENSET_COMPARE4_Msk (0x1UL << TIMER_INTENSET_COMPARE4_Pos) /*!< Bit mask of COMPARE4 field. */
#define TIMER_INTENSET_COMPARE4_Disabled (0UL) /*!< Read: Disabled */
#define TIMER_INTENSET_COMPARE4_Enabled (1UL) /*!< Read: Enabled */
#define TIMER_INTENSET_COMPARE4_Set (1UL) /*!< Enable */

/* Bit 19 : Write '1' to enable interrupt for COMPARE[3] event */
#define TIMER_INTENSET_COMPARE3_Pos (19UL) /*!< Position of COMPARE3 field. */
#define TIMER_INTENSET_COMPARE3_Msk (0x1UL << TIMER_INTENSET_COMPARE3_Pos) /*!< Bit mask of COMPARE3 field. */
#define TIMER_INTENSET_COMPARE3_Disabled (0UL) /*!< Read: Disabled */
#define TIMER_INTENSET_COMPARE3_Enabled (1UL) /*!< Read: Enabled */
#define TIMER_INTENSET_COMPARE3_Set (1UL) /*!< Enable */

/* Bit 18 : Write '1' to enable interrupt for COMPARE[2] event */
#define TIMER_INTENSET_COMPARE2_Pos (18UL) /*!< Position of COMPARE2 field. */
#define TIMER_INTENSET_COMPARE2_Msk (0x1UL << TIMER_INTENSET_COMPARE2_Pos) /*!< Bit mask of COMPARE2 field. */
#define TIMER_INTENSET_COMPARE2_Disabled (0UL) /*!< Read: Disabled */
#define TIMER_INTENSET_COMPARE2_Enabled (1UL) /*!< Read: Enabled */
#define TIMER_INTENSET_COMPARE2_Set (1UL) /*!< Enable */

/* Bit 17 : Write '1' to enable interrupt for COMPARE[1] event */
#define TIMER_INTENSET_COMPARE1_Pos (17UL) /*!< Position of COMPARE1 field. */
#define TIMER_INTENSET_COMPARE1_Msk (0x1UL << TIMER_INTENSET_COMPARE1_Pos) /*!< Bit mask of COMPARE1 field. */
#define TIMER_INTENSET_COMPARE1_Disabled (0UL) /*!< Read: Disabled */
#define TIMER_INTENSET_COMPARE1_Enabled (1UL) /*!< Read: Enabled */
#define TIMER_INTENSET_COMPARE1_Set (1UL) /*!< Enable */

/* Bit 16 : Write '1' to enable interrupt for COMPARE[0] event */
#define TIMER_INTENSET_COMPARE0_Pos (16UL) /*!< Position of COMPARE0 field. */
#define TIMER_INTENSET_COMPARE0_Msk (0x1UL << TIMER_INTENSET_COMPARE0_Pos) /*!< Bit mask of COMPARE0 field. */
#define TIMER_INTENSET_COMPARE0_Disabled (0UL) /*!< Read: Disabled */
#define TIMER_INTENSET_COMPARE0_Enabled (1UL) /*!< Read: Enabled */
#define TIMER_INTENSET_COMPARE0_Set (1UL) /*!< Enable */

/* Register: TIMER_INTENCLR */
/* Description: Disable interrupt */

/* Bit 21 : Write '1' to disable interrupt for COMPARE[5] event */
#define TIMER_INTENCLR_COMPARE5_Pos (21UL) /*!< Position of COMPARE5 field. */
#define TIMER_INTENCLR_COMPARE5_Msk (0x1UL << TIMER_INTENCLR_COMPARE5_Pos) /*!< Bit mask of COMPARE5 field. */
#define TIMER_INTENCLR_COMPARE5_Disabled (0UL) /*!< Read: Disabled */
#define TIMER_INTENCLR_COMPARE5_Enabled (1UL) /*!< Read: Enabled */
#define TIMER_INTENCLR_COMPARE5_Clear (1UL) /*!< Disable */

/* Bit 20 : Write '1' to disable interrupt for COMPARE[4] event */
#define TIMER_INTENCLR_COMPARE4_Pos (20UL) /*!< Position of COMPARE4 field. */
#define TIMER_INTENCLR_COMPARE4_Msk (0x1UL << TIMER_INTENCLR_COMPARE4_Pos) /*!< Bit mask of COMPARE4 field. */
#define TIMER_INTENCLR_COMPARE4_Disabled (0UL) /*!< Read: Disabled */
#define TIMER_INTENCLR_COMPARE4_Enabled (1UL) /*!< Read: Enabled */
#define TIMER_INTENCLR_COMPARE4_Clear (1UL) /*!< Disable */

/* Bit 19 : Write '1' to disable interrupt for COMPARE[3] event */
#define TIMER_INTENCLR_COMPARE3_Pos (19UL) /*!< Position of COMPARE3 field. */
#define TIMER_INTENCLR_COMPARE3_Msk (0x1UL << TIMER_INTENCLR_COMPARE3_Pos) /*!< Bit mask of COMPARE3 field. */
#define TIMER_INTENCLR_COMPARE3_Disabled (0UL) /*!< Read: Disabled */
#define TIMER_INTENCLR_COMPARE3_Enabled (1UL) /*!< Read: Enabled */
#define TIMER_INTENCLR_COMPARE3_Clear (1UL) /*!< Disable */

/* Bit 18 : Write '1' to disable interrupt for COMPARE[2] event */
#define TIMER_INTENCLR_COMPARE2_Pos (18UL) /*!< Position of COMPARE2 field. */
#define TIMER_INTENCLR_COMPARE2_Msk (0x1UL << TIMER_INTENCLR_COMPARE2_Pos) /*!< Bit mask of COMPARE2 field. */
#define TIMER_INTENCLR_COMPARE2_Disabled (0UL) /*!< Read: Disabled */
#define TIMER_INTENCLR_COMPARE2_Enabled (1UL) /*!< Read: Enabled */
#define TIMER_INTENCLR_COMPARE2_Clear (1UL) /*!< Disable */

/* Bit 17 : Write '1' to disable interrupt for COMPARE[1] event */
#define TIMER_INTENCLR_COMPARE1_Pos (17UL) /*!< Position of COMPARE1 field. */
#define TIMER_INTENCLR_COMPARE1_Msk (0x1UL << TIMER_INTENCLR_COMPARE1_Pos) /*!< Bit mask of COMPARE1 field. */
#define TIMER_INTENCLR_COMPARE1_Disabled (0UL) /*!< Read: Disabled */
#define TIMER_INTENCLR_COMPARE1_Enabled (1UL) /*!< Read: Enabled */
#define TIMER_INTENCLR_COMPARE1_Clear (1UL) /*!< Disable */

/* Bit 16 : Write '1' to disable interrupt for COMPARE[0] event */
#define TIMER_INTENCLR_COMPARE0_Pos (16UL) /*!< Position of COMPARE0 field. */
#define TIMER_INTENCLR_COMPARE0_Msk (0x1UL << TIMER_INTENCLR_COMPARE0_Pos) /*!< Bit mask of COMPARE0 field. */
#define TIMER_INTENCLR_COMPARE0_Disabled (0UL) /*!< Read: Disabled */
#define TIMER_INTENCLR_COMPARE0_Enabled (1UL) /*!< Read: Enabled */
#define TIMER_INTENCLR_COMPARE0_Clear (1UL) /*!< Disable */

/* Register: TIMER_MODE */
/* Description: Timer mode selection */

/* Bits 1..0 : Timer mode */
#define TIMER_MODE_MODE_Pos (0UL) /*!< Position of MODE field. */
#define TIMER_MODE_MODE_Msk (0x3UL << TIMER_MODE_MODE_Pos) /*!< Bit mask of MODE field. */
#define TIMER_MODE_MODE_Timer (0UL) /*!< Select Timer mode */
#define TIMER_MODE_MODE_Counter (1UL) /*!< Deprecated enumerator -  Select Counter mode */
#define TIMER_MODE_MODE_LowPowerCounter (2UL) /*!< Select Low Power Counter mode */

/* Register: TIMER_BITMODE */
/* Description: Configure the number of bits used by the TIMER */

/* Bits 1..0 : Timer bit width */
#define TIMER_BITMODE_BITMODE_Pos (0UL) /*!< Position of BITMODE field. */
#define TIMER_BITMODE_BITMODE_Msk (0x3UL << TIMER_BITMODE_BITMODE_Pos) /*!< Bit mask of BITMODE field. */
#define TIMER_BITMODE_BITMODE_16Bit (0UL) /*!< 16 bit timer bit width */
#define TIMER_BITMODE_BITMODE_08Bit (1UL) /*!< 8 bit timer bit width */
#define TIMER_BITMODE_BITMODE_24Bit (2UL) /*!< 24 bit timer bit width */
#define TIMER_BITMODE_BITMODE_32Bit (3UL) /*!< 32 bit timer bit width */

/* Register: TIMER_PRESCALER */
/* Description: Timer prescaler register */

/* Bits 3..0 : Prescaler value */
#define TIMER_PRESCALER_PRESCALER_Pos (0UL) /*!< Position of PRESCALER field. */
#define TIMER_PRESCALER_PRESCALER_Msk (0xFUL << TIMER_PRESCALER_PRESCALER_Pos) /*!< Bit mask of PRESCALER field. */

/* Register: TIMER_CC */
/* Description: Description collection[n]: Capture/Compare register n */

/* Bits 31..0 : Capture/Compare value */
#define TIMER_CC_CC_Pos (0UL) /*!< Position of CC field. */
#define TIMER_CC_CC_Msk (0xFFFFFFFFUL << TIMER_CC_CC_Pos) /*!< Bit mask of CC field. */

/* Register: TIMER_POWER */
/* Description: Peripheral power control */

/* Bit 0 : Peripheral power control. The peripheral and its registers will be reset to its initial state by switching the peripheral off and then back on again. */
#define TIMER_POWER_POWER_Pos (0UL) /*!< Position of POWER field. */
#define TIMER_POWER_POWER_Msk (0x1UL << TIMER_POWER_POWER_Pos) /*!< Bit mask of POWER field. */
#define TIMER_POWER_POWER_Disabled (0UL) /*!< Peripheral is powered off */
#define TIMER_POWER_POWER_Enabled (1UL) /*!< Peripheral is powered on */


/* Peripheral: TWIM */
/* Description: I2C compatible Two-Wire Master Interface with EasyDMA */

/* Register: TWIM_TASKS_STARTRX */
/* Description: Start TWI receive sequence */

/* Bit 0 :   */
#define TWIM_TASKS_STARTRX_TASKS_STARTRX_Pos (0UL) /*!< Position of TASKS_STARTRX field. */
#define TWIM_TASKS_STARTRX_TASKS_STARTRX_Msk (0x1UL << TWIM_TASKS_STARTRX_TASKS_STARTRX_Pos) /*!< Bit mask of TASKS_STARTRX field. */

/* Register: TWIM_TASKS_STARTTX */
/* Description: Start TWI transmit sequence */

/* Bit 0 :   */
#define TWIM_TASKS_STARTTX_TASKS_STARTTX_Pos (0UL) /*!< Position of TASKS_STARTTX field. */
#define TWIM_TASKS_STARTTX_TASKS_STARTTX_Msk (0x1UL << TWIM_TASKS_STARTTX_TASKS_STARTTX_Pos) /*!< Bit mask of TASKS_STARTTX field. */

/* Register: TWIM_TASKS_STOP */
/* Description: Stop TWI transaction. Must be issued while the TWI master is not suspended. */

/* Bit 0 :   */
#define TWIM_TASKS_STOP_TASKS_STOP_Pos (0UL) /*!< Position of TASKS_STOP field. */
#define TWIM_TASKS_STOP_TASKS_STOP_Msk (0x1UL << TWIM_TASKS_STOP_TASKS_STOP_Pos) /*!< Bit mask of TASKS_STOP field. */

/* Register: TWIM_TASKS_SUSPEND */
/* Description: Suspend TWI transaction */

/* Bit 0 :   */
#define TWIM_TASKS_SUSPEND_TASKS_SUSPEND_Pos (0UL) /*!< Position of TASKS_SUSPEND field. */
#define TWIM_TASKS_SUSPEND_TASKS_SUSPEND_Msk (0x1UL << TWIM_TASKS_SUSPEND_TASKS_SUSPEND_Pos) /*!< Bit mask of TASKS_SUSPEND field. */

/* Register: TWIM_TASKS_RESUME */
/* Description: Resume TWI transaction */

/* Bit 0 :   */
#define TWIM_TASKS_RESUME_TASKS_RESUME_Pos (0UL) /*!< Position of TASKS_RESUME field. */
#define TWIM_TASKS_RESUME_TASKS_RESUME_Msk (0x1UL << TWIM_TASKS_RESUME_TASKS_RESUME_Pos) /*!< Bit mask of TASKS_RESUME field. */

/* Register: TWIM_EVENTS_STOPPED */
/* Description: TWI stopped */

/* Bit 0 :   */
#define TWIM_EVENTS_STOPPED_EVENTS_STOPPED_Pos (0UL) /*!< Position of EVENTS_STOPPED field. */
#define TWIM_EVENTS_STOPPED_EVENTS_STOPPED_Msk (0x1UL << TWIM_EVENTS_STOPPED_EVENTS_STOPPED_Pos) /*!< Bit mask of EVENTS_STOPPED field. */

/* Register: TWIM_EVENTS_ENDRX */
/* Description: End of RXD buffer access by EasyDMA */

/* Bit 0 :   */
#define TWIM_EVENTS_ENDRX_EVENTS_ENDRX_Pos (0UL) /*!< Position of EVENTS_ENDRX field. */
#define TWIM_EVENTS_ENDRX_EVENTS_ENDRX_Msk (0x1UL << TWIM_EVENTS_ENDRX_EVENTS_ENDRX_Pos) /*!< Bit mask of EVENTS_ENDRX field. */

/* Register: TWIM_EVENTS_ENDTX */
/* Description: END of TXD buffer access by EasyDMA */

/* Bit 0 :   */
#define TWIM_EVENTS_ENDTX_EVENTS_ENDTX_Pos (0UL) /*!< Position of EVENTS_ENDTX field. */
#define TWIM_EVENTS_ENDTX_EVENTS_ENDTX_Msk (0x1UL << TWIM_EVENTS_ENDTX_EVENTS_ENDTX_Pos) /*!< Bit mask of EVENTS_ENDTX field. */

/* Register: TWIM_EVENTS_ERROR */
/* Description: TWI error */

/* Bit 0 :   */
#define TWIM_EVENTS_ERROR_EVENTS_ERROR_Pos (0UL) /*!< Position of EVENTS_ERROR field. */
#define TWIM_EVENTS_ERROR_EVENTS_ERROR_Msk (0x1UL << TWIM_EVENTS_ERROR_EVENTS_ERROR_Pos) /*!< Bit mask of EVENTS_ERROR field. */

/* Register: TWIM_EVENTS_BB */
/* Description: TWI byte boundary, generated before each byte that is sent or received */

/* Bit 0 :   */
#define TWIM_EVENTS_BB_EVENTS_BB_Pos (0UL) /*!< Position of EVENTS_BB field. */
#define TWIM_EVENTS_BB_EVENTS_BB_Msk (0x1UL << TWIM_EVENTS_BB_EVENTS_BB_Pos) /*!< Bit mask of EVENTS_BB field. */

/* Register: TWIM_EVENTS_SUSPENDED */
/* Description: Last byte has been sent out after the SUSPEND task has been issued, TWI traffic is now suspended. */

/* Bit 0 :   */
#define TWIM_EVENTS_SUSPENDED_EVENTS_SUSPENDED_Pos (0UL) /*!< Position of EVENTS_SUSPENDED field. */
#define TWIM_EVENTS_SUSPENDED_EVENTS_SUSPENDED_Msk (0x1UL << TWIM_EVENTS_SUSPENDED_EVENTS_SUSPENDED_Pos) /*!< Bit mask of EVENTS_SUSPENDED field. */

/* Register: TWIM_EVENTS_RXSTARTED */
/* Description: Receive sequence started */

/* Bit 0 :   */
#define TWIM_EVENTS_RXSTARTED_EVENTS_RXSTARTED_Pos (0UL) /*!< Position of EVENTS_RXSTARTED field. */
#define TWIM_EVENTS_RXSTARTED_EVENTS_RXSTARTED_Msk (0x1UL << TWIM_EVENTS_RXSTARTED_EVENTS_RXSTARTED_Pos) /*!< Bit mask of EVENTS_RXSTARTED field. */

/* Register: TWIM_EVENTS_TXSTARTED */
/* Description: Transmit sequence started */

/* Bit 0 :   */
#define TWIM_EVENTS_TXSTARTED_EVENTS_TXSTARTED_Pos (0UL) /*!< Position of EVENTS_TXSTARTED field. */
#define TWIM_EVENTS_TXSTARTED_EVENTS_TXSTARTED_Msk (0x1UL << TWIM_EVENTS_TXSTARTED_EVENTS_TXSTARTED_Pos) /*!< Bit mask of EVENTS_TXSTARTED field. */

/* Register: TWIM_EVENTS_LASTRX */
/* Description: Byte boundary, starting to receive the last byte */

/* Bit 0 :   */
#define TWIM_EVENTS_LASTRX_EVENTS_LASTRX_Pos (0UL) /*!< Position of EVENTS_LASTRX field. */
#define TWIM_EVENTS_LASTRX_EVENTS_LASTRX_Msk (0x1UL << TWIM_EVENTS_LASTRX_EVENTS_LASTRX_Pos) /*!< Bit mask of EVENTS_LASTRX field. */

/* Register: TWIM_EVENTS_LASTTX */
/* Description: Byte boundary, starting to transmit the last byte */

/* Bit 0 :   */
#define TWIM_EVENTS_LASTTX_EVENTS_LASTTX_Pos (0UL) /*!< Position of EVENTS_LASTTX field. */
#define TWIM_EVENTS_LASTTX_EVENTS_LASTTX_Msk (0x1UL << TWIM_EVENTS_LASTTX_EVENTS_LASTTX_Pos) /*!< Bit mask of EVENTS_LASTTX field. */

/* Register: TWIM_SHORTS */
/* Description: Shortcut register */

/* Bit 12 : Shortcut between LASTRX event and STOP task */
#define TWIM_SHORTS_LASTRX_STOP_Pos (12UL) /*!< Position of LASTRX_STOP field. */
#define TWIM_SHORTS_LASTRX_STOP_Msk (0x1UL << TWIM_SHORTS_LASTRX_STOP_Pos) /*!< Bit mask of LASTRX_STOP field. */
#define TWIM_SHORTS_LASTRX_STOP_Disabled (0UL) /*!< Disable shortcut */
#define TWIM_SHORTS_LASTRX_STOP_Enabled (1UL) /*!< Enable shortcut */

/* Bit 11 : Shortcut between LASTRX event and SUSPEND task */
#define TWIM_SHORTS_LASTRX_SUSPEND_Pos (11UL) /*!< Position of LASTRX_SUSPEND field. */
#define TWIM_SHORTS_LASTRX_SUSPEND_Msk (0x1UL << TWIM_SHORTS_LASTRX_SUSPEND_Pos) /*!< Bit mask of LASTRX_SUSPEND field. */
#define TWIM_SHORTS_LASTRX_SUSPEND_Disabled (0UL) /*!< Disable shortcut */
#define TWIM_SHORTS_LASTRX_SUSPEND_Enabled (1UL) /*!< Enable shortcut */

/* Bit 10 : Shortcut between LASTRX event and STARTTX task */
#define TWIM_SHORTS_LASTRX_STARTTX_Pos (10UL) /*!< Position of LASTRX_STARTTX field. */
#define TWIM_SHORTS_LASTRX_STARTTX_Msk (0x1UL << TWIM_SHORTS_LASTRX_STARTTX_Pos) /*!< Bit mask of LASTRX_STARTTX field. */
#define TWIM_SHORTS_LASTRX_STARTTX_Disabled (0UL) /*!< Disable shortcut */
#define TWIM_SHORTS_LASTRX_STARTTX_Enabled (1UL) /*!< Enable shortcut */

/* Bit 9 : Shortcut between LASTTX event and STOP task */
#define TWIM_SHORTS_LASTTX_STOP_Pos (9UL) /*!< Position of LASTTX_STOP field. */
#define TWIM_SHORTS_LASTTX_STOP_Msk (0x1UL << TWIM_SHORTS_LASTTX_STOP_Pos) /*!< Bit mask of LASTTX_STOP field. */
#define TWIM_SHORTS_LASTTX_STOP_Disabled (0UL) /*!< Disable shortcut */
#define TWIM_SHORTS_LASTTX_STOP_Enabled (1UL) /*!< Enable shortcut */

/* Bit 8 : Shortcut between LASTTX event and SUSPEND task */
#define TWIM_SHORTS_LASTTX_SUSPEND_Pos (8UL) /*!< Position of LASTTX_SUSPEND field. */
#define TWIM_SHORTS_LASTTX_SUSPEND_Msk (0x1UL << TWIM_SHORTS_LASTTX_SUSPEND_Pos) /*!< Bit mask of LASTTX_SUSPEND field. */
#define TWIM_SHORTS_LASTTX_SUSPEND_Disabled (0UL) /*!< Disable shortcut */
#define TWIM_SHORTS_LASTTX_SUSPEND_Enabled (1UL) /*!< Enable shortcut */

/* Bit 7 : Shortcut between LASTTX event and STARTRX task */
#define TWIM_SHORTS_LASTTX_STARTRX_Pos (7UL) /*!< Position of LASTTX_STARTRX field. */
#define TWIM_SHORTS_LASTTX_STARTRX_Msk (0x1UL << TWIM_SHORTS_LASTTX_STARTRX_Pos) /*!< Bit mask of LASTTX_STARTRX field. */
#define TWIM_SHORTS_LASTTX_STARTRX_Disabled (0UL) /*!< Disable shortcut */
#define TWIM_SHORTS_LASTTX_STARTRX_Enabled (1UL) /*!< Enable shortcut */

/* Register: TWIM_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 24 : Enable or disable interrupt for LASTTX event */
#define TWIM_INTEN_LASTTX_Pos (24UL) /*!< Position of LASTTX field. */
#define TWIM_INTEN_LASTTX_Msk (0x1UL << TWIM_INTEN_LASTTX_Pos) /*!< Bit mask of LASTTX field. */
#define TWIM_INTEN_LASTTX_Disabled (0UL) /*!< Disable */
#define TWIM_INTEN_LASTTX_Enabled (1UL) /*!< Enable */

/* Bit 23 : Enable or disable interrupt for LASTRX event */
#define TWIM_INTEN_LASTRX_Pos (23UL) /*!< Position of LASTRX field. */
#define TWIM_INTEN_LASTRX_Msk (0x1UL << TWIM_INTEN_LASTRX_Pos) /*!< Bit mask of LASTRX field. */
#define TWIM_INTEN_LASTRX_Disabled (0UL) /*!< Disable */
#define TWIM_INTEN_LASTRX_Enabled (1UL) /*!< Enable */

/* Bit 20 : Enable or disable interrupt for TXSTARTED event */
#define TWIM_INTEN_TXSTARTED_Pos (20UL) /*!< Position of TXSTARTED field. */
#define TWIM_INTEN_TXSTARTED_Msk (0x1UL << TWIM_INTEN_TXSTARTED_Pos) /*!< Bit mask of TXSTARTED field. */
#define TWIM_INTEN_TXSTARTED_Disabled (0UL) /*!< Disable */
#define TWIM_INTEN_TXSTARTED_Enabled (1UL) /*!< Enable */

/* Bit 19 : Enable or disable interrupt for RXSTARTED event */
#define TWIM_INTEN_RXSTARTED_Pos (19UL) /*!< Position of RXSTARTED field. */
#define TWIM_INTEN_RXSTARTED_Msk (0x1UL << TWIM_INTEN_RXSTARTED_Pos) /*!< Bit mask of RXSTARTED field. */
#define TWIM_INTEN_RXSTARTED_Disabled (0UL) /*!< Disable */
#define TWIM_INTEN_RXSTARTED_Enabled (1UL) /*!< Enable */

/* Bit 18 : Enable or disable interrupt for SUSPENDED event */
#define TWIM_INTEN_SUSPENDED_Pos (18UL) /*!< Position of SUSPENDED field. */
#define TWIM_INTEN_SUSPENDED_Msk (0x1UL << TWIM_INTEN_SUSPENDED_Pos) /*!< Bit mask of SUSPENDED field. */
#define TWIM_INTEN_SUSPENDED_Disabled (0UL) /*!< Disable */
#define TWIM_INTEN_SUSPENDED_Enabled (1UL) /*!< Enable */

/* Bit 14 : Enable or disable interrupt for BB event */
#define TWIM_INTEN_BB_Pos (14UL) /*!< Position of BB field. */
#define TWIM_INTEN_BB_Msk (0x1UL << TWIM_INTEN_BB_Pos) /*!< Bit mask of BB field. */
#define TWIM_INTEN_BB_Disabled (0UL) /*!< Disable */
#define TWIM_INTEN_BB_Enabled (1UL) /*!< Enable */

/* Bit 9 : Enable or disable interrupt for ERROR event */
#define TWIM_INTEN_ERROR_Pos (9UL) /*!< Position of ERROR field. */
#define TWIM_INTEN_ERROR_Msk (0x1UL << TWIM_INTEN_ERROR_Pos) /*!< Bit mask of ERROR field. */
#define TWIM_INTEN_ERROR_Disabled (0UL) /*!< Disable */
#define TWIM_INTEN_ERROR_Enabled (1UL) /*!< Enable */

/* Bit 8 : Enable or disable interrupt for ENDTX event */
#define TWIM_INTEN_ENDTX_Pos (8UL) /*!< Position of ENDTX field. */
#define TWIM_INTEN_ENDTX_Msk (0x1UL << TWIM_INTEN_ENDTX_Pos) /*!< Bit mask of ENDTX field. */
#define TWIM_INTEN_ENDTX_Disabled (0UL) /*!< Disable */
#define TWIM_INTEN_ENDTX_Enabled (1UL) /*!< Enable */

/* Bit 4 : Enable or disable interrupt for ENDRX event */
#define TWIM_INTEN_ENDRX_Pos (4UL) /*!< Position of ENDRX field. */
#define TWIM_INTEN_ENDRX_Msk (0x1UL << TWIM_INTEN_ENDRX_Pos) /*!< Bit mask of ENDRX field. */
#define TWIM_INTEN_ENDRX_Disabled (0UL) /*!< Disable */
#define TWIM_INTEN_ENDRX_Enabled (1UL) /*!< Enable */

/* Bit 1 : Enable or disable interrupt for STOPPED event */
#define TWIM_INTEN_STOPPED_Pos (1UL) /*!< Position of STOPPED field. */
#define TWIM_INTEN_STOPPED_Msk (0x1UL << TWIM_INTEN_STOPPED_Pos) /*!< Bit mask of STOPPED field. */
#define TWIM_INTEN_STOPPED_Disabled (0UL) /*!< Disable */
#define TWIM_INTEN_STOPPED_Enabled (1UL) /*!< Enable */

/* Register: TWIM_INTENSET */
/* Description: Enable interrupt */

/* Bit 24 : Write '1' to enable interrupt for LASTTX event */
#define TWIM_INTENSET_LASTTX_Pos (24UL) /*!< Position of LASTTX field. */
#define TWIM_INTENSET_LASTTX_Msk (0x1UL << TWIM_INTENSET_LASTTX_Pos) /*!< Bit mask of LASTTX field. */
#define TWIM_INTENSET_LASTTX_Disabled (0UL) /*!< Read: Disabled */
#define TWIM_INTENSET_LASTTX_Enabled (1UL) /*!< Read: Enabled */
#define TWIM_INTENSET_LASTTX_Set (1UL) /*!< Enable */

/* Bit 23 : Write '1' to enable interrupt for LASTRX event */
#define TWIM_INTENSET_LASTRX_Pos (23UL) /*!< Position of LASTRX field. */
#define TWIM_INTENSET_LASTRX_Msk (0x1UL << TWIM_INTENSET_LASTRX_Pos) /*!< Bit mask of LASTRX field. */
#define TWIM_INTENSET_LASTRX_Disabled (0UL) /*!< Read: Disabled */
#define TWIM_INTENSET_LASTRX_Enabled (1UL) /*!< Read: Enabled */
#define TWIM_INTENSET_LASTRX_Set (1UL) /*!< Enable */

/* Bit 20 : Write '1' to enable interrupt for TXSTARTED event */
#define TWIM_INTENSET_TXSTARTED_Pos (20UL) /*!< Position of TXSTARTED field. */
#define TWIM_INTENSET_TXSTARTED_Msk (0x1UL << TWIM_INTENSET_TXSTARTED_Pos) /*!< Bit mask of TXSTARTED field. */
#define TWIM_INTENSET_TXSTARTED_Disabled (0UL) /*!< Read: Disabled */
#define TWIM_INTENSET_TXSTARTED_Enabled (1UL) /*!< Read: Enabled */
#define TWIM_INTENSET_TXSTARTED_Set (1UL) /*!< Enable */

/* Bit 19 : Write '1' to enable interrupt for RXSTARTED event */
#define TWIM_INTENSET_RXSTARTED_Pos (19UL) /*!< Position of RXSTARTED field. */
#define TWIM_INTENSET_RXSTARTED_Msk (0x1UL << TWIM_INTENSET_RXSTARTED_Pos) /*!< Bit mask of RXSTARTED field. */
#define TWIM_INTENSET_RXSTARTED_Disabled (0UL) /*!< Read: Disabled */
#define TWIM_INTENSET_RXSTARTED_Enabled (1UL) /*!< Read: Enabled */
#define TWIM_INTENSET_RXSTARTED_Set (1UL) /*!< Enable */

/* Bit 18 : Write '1' to enable interrupt for SUSPENDED event */
#define TWIM_INTENSET_SUSPENDED_Pos (18UL) /*!< Position of SUSPENDED field. */
#define TWIM_INTENSET_SUSPENDED_Msk (0x1UL << TWIM_INTENSET_SUSPENDED_Pos) /*!< Bit mask of SUSPENDED field. */
#define TWIM_INTENSET_SUSPENDED_Disabled (0UL) /*!< Read: Disabled */
#define TWIM_INTENSET_SUSPENDED_Enabled (1UL) /*!< Read: Enabled */
#define TWIM_INTENSET_SUSPENDED_Set (1UL) /*!< Enable */

/* Bit 14 : Write '1' to enable interrupt for BB event */
#define TWIM_INTENSET_BB_Pos (14UL) /*!< Position of BB field. */
#define TWIM_INTENSET_BB_Msk (0x1UL << TWIM_INTENSET_BB_Pos) /*!< Bit mask of BB field. */
#define TWIM_INTENSET_BB_Disabled (0UL) /*!< Read: Disabled */
#define TWIM_INTENSET_BB_Enabled (1UL) /*!< Read: Enabled */
#define TWIM_INTENSET_BB_Set (1UL) /*!< Enable */

/* Bit 9 : Write '1' to enable interrupt for ERROR event */
#define TWIM_INTENSET_ERROR_Pos (9UL) /*!< Position of ERROR field. */
#define TWIM_INTENSET_ERROR_Msk (0x1UL << TWIM_INTENSET_ERROR_Pos) /*!< Bit mask of ERROR field. */
#define TWIM_INTENSET_ERROR_Disabled (0UL) /*!< Read: Disabled */
#define TWIM_INTENSET_ERROR_Enabled (1UL) /*!< Read: Enabled */
#define TWIM_INTENSET_ERROR_Set (1UL) /*!< Enable */

/* Bit 8 : Write '1' to enable interrupt for ENDTX event */
#define TWIM_INTENSET_ENDTX_Pos (8UL) /*!< Position of ENDTX field. */
#define TWIM_INTENSET_ENDTX_Msk (0x1UL << TWIM_INTENSET_ENDTX_Pos) /*!< Bit mask of ENDTX field. */
#define TWIM_INTENSET_ENDTX_Disabled (0UL) /*!< Read: Disabled */
#define TWIM_INTENSET_ENDTX_Enabled (1UL) /*!< Read: Enabled */
#define TWIM_INTENSET_ENDTX_Set (1UL) /*!< Enable */

/* Bit 4 : Write '1' to enable interrupt for ENDRX event */
#define TWIM_INTENSET_ENDRX_Pos (4UL) /*!< Position of ENDRX field. */
#define TWIM_INTENSET_ENDRX_Msk (0x1UL << TWIM_INTENSET_ENDRX_Pos) /*!< Bit mask of ENDRX field. */
#define TWIM_INTENSET_ENDRX_Disabled (0UL) /*!< Read: Disabled */
#define TWIM_INTENSET_ENDRX_Enabled (1UL) /*!< Read: Enabled */
#define TWIM_INTENSET_ENDRX_Set (1UL) /*!< Enable */

/* Bit 1 : Write '1' to enable interrupt for STOPPED event */
#define TWIM_INTENSET_STOPPED_Pos (1UL) /*!< Position of STOPPED field. */
#define TWIM_INTENSET_STOPPED_Msk (0x1UL << TWIM_INTENSET_STOPPED_Pos) /*!< Bit mask of STOPPED field. */
#define TWIM_INTENSET_STOPPED_Disabled (0UL) /*!< Read: Disabled */
#define TWIM_INTENSET_STOPPED_Enabled (1UL) /*!< Read: Enabled */
#define TWIM_INTENSET_STOPPED_Set (1UL) /*!< Enable */

/* Register: TWIM_INTENCLR */
/* Description: Disable interrupt */

/* Bit 24 : Write '1' to disable interrupt for LASTTX event */
#define TWIM_INTENCLR_LASTTX_Pos (24UL) /*!< Position of LASTTX field. */
#define TWIM_INTENCLR_LASTTX_Msk (0x1UL << TWIM_INTENCLR_LASTTX_Pos) /*!< Bit mask of LASTTX field. */
#define TWIM_INTENCLR_LASTTX_Disabled (0UL) /*!< Read: Disabled */
#define TWIM_INTENCLR_LASTTX_Enabled (1UL) /*!< Read: Enabled */
#define TWIM_INTENCLR_LASTTX_Clear (1UL) /*!< Disable */

/* Bit 23 : Write '1' to disable interrupt for LASTRX event */
#define TWIM_INTENCLR_LASTRX_Pos (23UL) /*!< Position of LASTRX field. */
#define TWIM_INTENCLR_LASTRX_Msk (0x1UL << TWIM_INTENCLR_LASTRX_Pos) /*!< Bit mask of LASTRX field. */
#define TWIM_INTENCLR_LASTRX_Disabled (0UL) /*!< Read: Disabled */
#define TWIM_INTENCLR_LASTRX_Enabled (1UL) /*!< Read: Enabled */
#define TWIM_INTENCLR_LASTRX_Clear (1UL) /*!< Disable */

/* Bit 20 : Write '1' to disable interrupt for TXSTARTED event */
#define TWIM_INTENCLR_TXSTARTED_Pos (20UL) /*!< Position of TXSTARTED field. */
#define TWIM_INTENCLR_TXSTARTED_Msk (0x1UL << TWIM_INTENCLR_TXSTARTED_Pos) /*!< Bit mask of TXSTARTED field. */
#define TWIM_INTENCLR_TXSTARTED_Disabled (0UL) /*!< Read: Disabled */
#define TWIM_INTENCLR_TXSTARTED_Enabled (1UL) /*!< Read: Enabled */
#define TWIM_INTENCLR_TXSTARTED_Clear (1UL) /*!< Disable */

/* Bit 19 : Write '1' to disable interrupt for RXSTARTED event */
#define TWIM_INTENCLR_RXSTARTED_Pos (19UL) /*!< Position of RXSTARTED field. */
#define TWIM_INTENCLR_RXSTARTED_Msk (0x1UL << TWIM_INTENCLR_RXSTARTED_Pos) /*!< Bit mask of RXSTARTED field. */
#define TWIM_INTENCLR_RXSTARTED_Disabled (0UL) /*!< Read: Disabled */
#define TWIM_INTENCLR_RXSTARTED_Enabled (1UL) /*!< Read: Enabled */
#define TWIM_INTENCLR_RXSTARTED_Clear (1UL) /*!< Disable */

/* Bit 18 : Write '1' to disable interrupt for SUSPENDED event */
#define TWIM_INTENCLR_SUSPENDED_Pos (18UL) /*!< Position of SUSPENDED field. */
#define TWIM_INTENCLR_SUSPENDED_Msk (0x1UL << TWIM_INTENCLR_SUSPENDED_Pos) /*!< Bit mask of SUSPENDED field. */
#define TWIM_INTENCLR_SUSPENDED_Disabled (0UL) /*!< Read: Disabled */
#define TWIM_INTENCLR_SUSPENDED_Enabled (1UL) /*!< Read: Enabled */
#define TWIM_INTENCLR_SUSPENDED_Clear (1UL) /*!< Disable */

/* Bit 14 : Write '1' to disable interrupt for BB event */
#define TWIM_INTENCLR_BB_Pos (14UL) /*!< Position of BB field. */
#define TWIM_INTENCLR_BB_Msk (0x1UL << TWIM_INTENCLR_BB_Pos) /*!< Bit mask of BB field. */
#define TWIM_INTENCLR_BB_Disabled (0UL) /*!< Read: Disabled */
#define TWIM_INTENCLR_BB_Enabled (1UL) /*!< Read: Enabled */
#define TWIM_INTENCLR_BB_Clear (1UL) /*!< Disable */

/* Bit 9 : Write '1' to disable interrupt for ERROR event */
#define TWIM_INTENCLR_ERROR_Pos (9UL) /*!< Position of ERROR field. */
#define TWIM_INTENCLR_ERROR_Msk (0x1UL << TWIM_INTENCLR_ERROR_Pos) /*!< Bit mask of ERROR field. */
#define TWIM_INTENCLR_ERROR_Disabled (0UL) /*!< Read: Disabled */
#define TWIM_INTENCLR_ERROR_Enabled (1UL) /*!< Read: Enabled */
#define TWIM_INTENCLR_ERROR_Clear (1UL) /*!< Disable */

/* Bit 8 : Write '1' to disable interrupt for ENDTX event */
#define TWIM_INTENCLR_ENDTX_Pos (8UL) /*!< Position of ENDTX field. */
#define TWIM_INTENCLR_ENDTX_Msk (0x1UL << TWIM_INTENCLR_ENDTX_Pos) /*!< Bit mask of ENDTX field. */
#define TWIM_INTENCLR_ENDTX_Disabled (0UL) /*!< Read: Disabled */
#define TWIM_INTENCLR_ENDTX_Enabled (1UL) /*!< Read: Enabled */
#define TWIM_INTENCLR_ENDTX_Clear (1UL) /*!< Disable */

/* Bit 4 : Write '1' to disable interrupt for ENDRX event */
#define TWIM_INTENCLR_ENDRX_Pos (4UL) /*!< Position of ENDRX field. */
#define TWIM_INTENCLR_ENDRX_Msk (0x1UL << TWIM_INTENCLR_ENDRX_Pos) /*!< Bit mask of ENDRX field. */
#define TWIM_INTENCLR_ENDRX_Disabled (0UL) /*!< Read: Disabled */
#define TWIM_INTENCLR_ENDRX_Enabled (1UL) /*!< Read: Enabled */
#define TWIM_INTENCLR_ENDRX_Clear (1UL) /*!< Disable */

/* Bit 1 : Write '1' to disable interrupt for STOPPED event */
#define TWIM_INTENCLR_STOPPED_Pos (1UL) /*!< Position of STOPPED field. */
#define TWIM_INTENCLR_STOPPED_Msk (0x1UL << TWIM_INTENCLR_STOPPED_Pos) /*!< Bit mask of STOPPED field. */
#define TWIM_INTENCLR_STOPPED_Disabled (0UL) /*!< Read: Disabled */
#define TWIM_INTENCLR_STOPPED_Enabled (1UL) /*!< Read: Enabled */
#define TWIM_INTENCLR_STOPPED_Clear (1UL) /*!< Disable */

/* Register: TWIM_ERRORSRC */
/* Description: Error source */

/* Bit 2 : NACK received after sending a data byte (write '1' to clear) */
#define TWIM_ERRORSRC_DNACK_Pos (2UL) /*!< Position of DNACK field. */
#define TWIM_ERRORSRC_DNACK_Msk (0x1UL << TWIM_ERRORSRC_DNACK_Pos) /*!< Bit mask of DNACK field. */
#define TWIM_ERRORSRC_DNACK_NotReceived (0UL) /*!< Error did not occur */
#define TWIM_ERRORSRC_DNACK_Received (1UL) /*!< Error occurred */

/* Bit 1 : NACK received after sending the address (write '1' to clear) */
#define TWIM_ERRORSRC_ANACK_Pos (1UL) /*!< Position of ANACK field. */
#define TWIM_ERRORSRC_ANACK_Msk (0x1UL << TWIM_ERRORSRC_ANACK_Pos) /*!< Bit mask of ANACK field. */
#define TWIM_ERRORSRC_ANACK_NotReceived (0UL) /*!< Error did not occur */
#define TWIM_ERRORSRC_ANACK_Received (1UL) /*!< Error occurred */

/* Bit 0 : Overrun error */
#define TWIM_ERRORSRC_OVERRUN_Pos (0UL) /*!< Position of OVERRUN field. */
#define TWIM_ERRORSRC_OVERRUN_Msk (0x1UL << TWIM_ERRORSRC_OVERRUN_Pos) /*!< Bit mask of OVERRUN field. */
#define TWIM_ERRORSRC_OVERRUN_NotReceived (0UL) /*!< Error did not occur */
#define TWIM_ERRORSRC_OVERRUN_Received (1UL) /*!< Error occurred */

/* Register: TWIM_ENABLE */
/* Description: Enable TWIM */

/* Bits 3..0 : Enable or disable TWIM */
#define TWIM_ENABLE_ENABLE_Pos (0UL) /*!< Position of ENABLE field. */
#define TWIM_ENABLE_ENABLE_Msk (0xFUL << TWIM_ENABLE_ENABLE_Pos) /*!< Bit mask of ENABLE field. */
#define TWIM_ENABLE_ENABLE_Disabled (0UL) /*!< Disable TWIM */
#define TWIM_ENABLE_ENABLE_Enabled (6UL) /*!< Enable TWIM */

/* Register: TWIM_PSEL_SCL */
/* Description: Pin select for SCL signal */

/* Bit 31 : Connection */
#define TWIM_PSEL_SCL_CONNECT_Pos (31UL) /*!< Position of CONNECT field. */
#define TWIM_PSEL_SCL_CONNECT_Msk (0x1UL << TWIM_PSEL_SCL_CONNECT_Pos) /*!< Bit mask of CONNECT field. */
#define TWIM_PSEL_SCL_CONNECT_Connected (0UL) /*!< Connect */
#define TWIM_PSEL_SCL_CONNECT_Disconnected (1UL) /*!< Disconnect */

/* Bits 4..0 : Pin number */
#define TWIM_PSEL_SCL_PIN_Pos (0UL) /*!< Position of PIN field. */
#define TWIM_PSEL_SCL_PIN_Msk (0x1FUL << TWIM_PSEL_SCL_PIN_Pos) /*!< Bit mask of PIN field. */

/* Register: TWIM_PSEL_SDA */
/* Description: Pin select for SDA signal */

/* Bit 31 : Connection */
#define TWIM_PSEL_SDA_CONNECT_Pos (31UL) /*!< Position of CONNECT field. */
#define TWIM_PSEL_SDA_CONNECT_Msk (0x1UL << TWIM_PSEL_SDA_CONNECT_Pos) /*!< Bit mask of CONNECT field. */
#define TWIM_PSEL_SDA_CONNECT_Connected (0UL) /*!< Connect */
#define TWIM_PSEL_SDA_CONNECT_Disconnected (1UL) /*!< Disconnect */

/* Bits 4..0 : Pin number */
#define TWIM_PSEL_SDA_PIN_Pos (0UL) /*!< Position of PIN field. */
#define TWIM_PSEL_SDA_PIN_Msk (0x1FUL << TWIM_PSEL_SDA_PIN_Pos) /*!< Bit mask of PIN field. */

/* Register: TWIM_FREQUENCY */
/* Description: TWI frequency. Accuracy depends on the HFCLK source selected. */

/* Bits 31..0 : TWI master clock frequency */
#define TWIM_FREQUENCY_FREQUENCY_Pos (0UL) /*!< Position of FREQUENCY field. */
#define TWIM_FREQUENCY_FREQUENCY_Msk (0xFFFFFFFFUL << TWIM_FREQUENCY_FREQUENCY_Pos) /*!< Bit mask of FREQUENCY field. */
#define TWIM_FREQUENCY_FREQUENCY_K100 (0x01980000UL) /*!< 100 kbps */
#define TWIM_FREQUENCY_FREQUENCY_K250 (0x04000000UL) /*!< 250 kbps */
#define TWIM_FREQUENCY_FREQUENCY_K400 (0x06400000UL) /*!< 400 kbps */

/* Register: TWIM_RXD_PTR */
/* Description: Data pointer */

/* Bits 31..0 : Data pointer */
#define TWIM_RXD_PTR_PTR_Pos (0UL) /*!< Position of PTR field. */
#define TWIM_RXD_PTR_PTR_Msk (0xFFFFFFFFUL << TWIM_RXD_PTR_PTR_Pos) /*!< Bit mask of PTR field. */

/* Register: TWIM_RXD_MAXCNT */
/* Description: Maximum number of bytes in receive buffer */

/* Bits 9..0 : Maximum number of bytes in receive buffer */
#define TWIM_RXD_MAXCNT_MAXCNT_Pos (0UL) /*!< Position of MAXCNT field. */
#define TWIM_RXD_MAXCNT_MAXCNT_Msk (0x3FFUL << TWIM_RXD_MAXCNT_MAXCNT_Pos) /*!< Bit mask of MAXCNT field. */

/* Register: TWIM_RXD_AMOUNT */
/* Description: Number of bytes transferred in the last transaction */

/* Bits 9..0 : Number of bytes transferred in the last transaction. In case of NACK error, includes the NACK'ed byte. */
#define TWIM_RXD_AMOUNT_AMOUNT_Pos (0UL) /*!< Position of AMOUNT field. */
#define TWIM_RXD_AMOUNT_AMOUNT_Msk (0x3FFUL << TWIM_RXD_AMOUNT_AMOUNT_Pos) /*!< Bit mask of AMOUNT field. */

/* Register: TWIM_RXD_LIST */
/* Description: EasyDMA list type */

/* Bits 2..0 : List type */
#define TWIM_RXD_LIST_LIST_Pos (0UL) /*!< Position of LIST field. */
#define TWIM_RXD_LIST_LIST_Msk (0x7UL << TWIM_RXD_LIST_LIST_Pos) /*!< Bit mask of LIST field. */
#define TWIM_RXD_LIST_LIST_Disabled (0UL) /*!< Disable EasyDMA list */
#define TWIM_RXD_LIST_LIST_ArrayList (1UL) /*!< Use array list */

/* Register: TWIM_TXD_PTR */
/* Description: Data pointer */

/* Bits 31..0 : Data pointer */
#define TWIM_TXD_PTR_PTR_Pos (0UL) /*!< Position of PTR field. */
#define TWIM_TXD_PTR_PTR_Msk (0xFFFFFFFFUL << TWIM_TXD_PTR_PTR_Pos) /*!< Bit mask of PTR field. */

/* Register: TWIM_TXD_MAXCNT */
/* Description: Maximum number of bytes in transmit buffer */

/* Bits 9..0 : Maximum number of bytes in transmit buffer */
#define TWIM_TXD_MAXCNT_MAXCNT_Pos (0UL) /*!< Position of MAXCNT field. */
#define TWIM_TXD_MAXCNT_MAXCNT_Msk (0x3FFUL << TWIM_TXD_MAXCNT_MAXCNT_Pos) /*!< Bit mask of MAXCNT field. */

/* Register: TWIM_TXD_AMOUNT */
/* Description: Number of bytes transferred in the last transaction */

/* Bits 9..0 : Number of bytes transferred in the last transaction. In case of NACK error, includes the NACK'ed byte. */
#define TWIM_TXD_AMOUNT_AMOUNT_Pos (0UL) /*!< Position of AMOUNT field. */
#define TWIM_TXD_AMOUNT_AMOUNT_Msk (0x3FFUL << TWIM_TXD_AMOUNT_AMOUNT_Pos) /*!< Bit mask of AMOUNT field. */

/* Register: TWIM_TXD_LIST */
/* Description: EasyDMA list type */

/* Bits 2..0 : List type */
#define TWIM_TXD_LIST_LIST_Pos (0UL) /*!< Position of LIST field. */
#define TWIM_TXD_LIST_LIST_Msk (0x7UL << TWIM_TXD_LIST_LIST_Pos) /*!< Bit mask of LIST field. */
#define TWIM_TXD_LIST_LIST_Disabled (0UL) /*!< Disable EasyDMA list */
#define TWIM_TXD_LIST_LIST_ArrayList (1UL) /*!< Use array list */

/* Register: TWIM_ADDRESS */
/* Description: Address used in the TWI transfer */

/* Bits 6..0 : Address used in the TWI transfer */
#define TWIM_ADDRESS_ADDRESS_Pos (0UL) /*!< Position of ADDRESS field. */
#define TWIM_ADDRESS_ADDRESS_Msk (0x7FUL << TWIM_ADDRESS_ADDRESS_Pos) /*!< Bit mask of ADDRESS field. */

/* Register: TWIM_POWER */
/* Description: Peripheral power control */

/* Bit 0 : Peripheral power control. The peripheral and its registers will be reset to its initial state by switching the peripheral off and then back on again. */
#define TWIM_POWER_POWER_Pos (0UL) /*!< Position of POWER field. */
#define TWIM_POWER_POWER_Msk (0x1UL << TWIM_POWER_POWER_Pos) /*!< Bit mask of POWER field. */
#define TWIM_POWER_POWER_Disabled (0UL) /*!< Peripheral is powered off */
#define TWIM_POWER_POWER_Enabled (1UL) /*!< Peripheral is powered on */


/* Peripheral: TWIS */
/* Description: I2C compatible Two-Wire Slave Interface with EasyDMA */

/* Register: TWIS_TASKS_STOP */
/* Description: Stop TWI transaction */

/* Bit 0 :   */
#define TWIS_TASKS_STOP_TASKS_STOP_Pos (0UL) /*!< Position of TASKS_STOP field. */
#define TWIS_TASKS_STOP_TASKS_STOP_Msk (0x1UL << TWIS_TASKS_STOP_TASKS_STOP_Pos) /*!< Bit mask of TASKS_STOP field. */

/* Register: TWIS_TASKS_SUSPEND */
/* Description: Suspend TWI transaction */

/* Bit 0 :   */
#define TWIS_TASKS_SUSPEND_TASKS_SUSPEND_Pos (0UL) /*!< Position of TASKS_SUSPEND field. */
#define TWIS_TASKS_SUSPEND_TASKS_SUSPEND_Msk (0x1UL << TWIS_TASKS_SUSPEND_TASKS_SUSPEND_Pos) /*!< Bit mask of TASKS_SUSPEND field. */

/* Register: TWIS_TASKS_RESUME */
/* Description: Resume TWI transaction */

/* Bit 0 :   */
#define TWIS_TASKS_RESUME_TASKS_RESUME_Pos (0UL) /*!< Position of TASKS_RESUME field. */
#define TWIS_TASKS_RESUME_TASKS_RESUME_Msk (0x1UL << TWIS_TASKS_RESUME_TASKS_RESUME_Pos) /*!< Bit mask of TASKS_RESUME field. */

/* Register: TWIS_TASKS_PREPARERX */
/* Description: Prepare the TWI slave to respond to a write command */

/* Bit 0 :   */
#define TWIS_TASKS_PREPARERX_TASKS_PREPARERX_Pos (0UL) /*!< Position of TASKS_PREPARERX field. */
#define TWIS_TASKS_PREPARERX_TASKS_PREPARERX_Msk (0x1UL << TWIS_TASKS_PREPARERX_TASKS_PREPARERX_Pos) /*!< Bit mask of TASKS_PREPARERX field. */

/* Register: TWIS_TASKS_PREPARETX */
/* Description: Prepare the TWI slave to respond to a read command */

/* Bit 0 :   */
#define TWIS_TASKS_PREPARETX_TASKS_PREPARETX_Pos (0UL) /*!< Position of TASKS_PREPARETX field. */
#define TWIS_TASKS_PREPARETX_TASKS_PREPARETX_Msk (0x1UL << TWIS_TASKS_PREPARETX_TASKS_PREPARETX_Pos) /*!< Bit mask of TASKS_PREPARETX field. */

/* Register: TWIS_EVENTS_STOPPED */
/* Description: TWI stopped */

/* Bit 0 :   */
#define TWIS_EVENTS_STOPPED_EVENTS_STOPPED_Pos (0UL) /*!< Position of EVENTS_STOPPED field. */
#define TWIS_EVENTS_STOPPED_EVENTS_STOPPED_Msk (0x1UL << TWIS_EVENTS_STOPPED_EVENTS_STOPPED_Pos) /*!< Bit mask of EVENTS_STOPPED field. */

/* Register: TWIS_EVENTS_ERROR */
/* Description: TWI error */

/* Bit 0 :   */
#define TWIS_EVENTS_ERROR_EVENTS_ERROR_Pos (0UL) /*!< Position of EVENTS_ERROR field. */
#define TWIS_EVENTS_ERROR_EVENTS_ERROR_Msk (0x1UL << TWIS_EVENTS_ERROR_EVENTS_ERROR_Pos) /*!< Bit mask of EVENTS_ERROR field. */

/* Register: TWIS_EVENTS_NACKTX */
/* Description: NACK on TX */

/* Bit 0 :   */
#define TWIS_EVENTS_NACKTX_EVENTS_NACKTX_Pos (0UL) /*!< Position of EVENTS_NACKTX field. */
#define TWIS_EVENTS_NACKTX_EVENTS_NACKTX_Msk (0x1UL << TWIS_EVENTS_NACKTX_EVENTS_NACKTX_Pos) /*!< Bit mask of EVENTS_NACKTX field. */

/* Register: TWIS_EVENTS_BB */
/* Description: TWI byte boundary, generated before each byte that is sent or received */

/* Bit 0 :   */
#define TWIS_EVENTS_BB_EVENTS_BB_Pos (0UL) /*!< Position of EVENTS_BB field. */
#define TWIS_EVENTS_BB_EVENTS_BB_Msk (0x1UL << TWIS_EVENTS_BB_EVENTS_BB_Pos) /*!< Bit mask of EVENTS_BB field. */

/* Register: TWIS_EVENTS_RXSTARTED */
/* Description: Receive sequence started */

/* Bit 0 :   */
#define TWIS_EVENTS_RXSTARTED_EVENTS_RXSTARTED_Pos (0UL) /*!< Position of EVENTS_RXSTARTED field. */
#define TWIS_EVENTS_RXSTARTED_EVENTS_RXSTARTED_Msk (0x1UL << TWIS_EVENTS_RXSTARTED_EVENTS_RXSTARTED_Pos) /*!< Bit mask of EVENTS_RXSTARTED field. */

/* Register: TWIS_EVENTS_TXSTARTED */
/* Description: Transmit sequence started */

/* Bit 0 :   */
#define TWIS_EVENTS_TXSTARTED_EVENTS_TXSTARTED_Pos (0UL) /*!< Position of EVENTS_TXSTARTED field. */
#define TWIS_EVENTS_TXSTARTED_EVENTS_TXSTARTED_Msk (0x1UL << TWIS_EVENTS_TXSTARTED_EVENTS_TXSTARTED_Pos) /*!< Bit mask of EVENTS_TXSTARTED field. */

/* Register: TWIS_EVENTS_WRITE */
/* Description: Write command received */

/* Bit 0 :   */
#define TWIS_EVENTS_WRITE_EVENTS_WRITE_Pos (0UL) /*!< Position of EVENTS_WRITE field. */
#define TWIS_EVENTS_WRITE_EVENTS_WRITE_Msk (0x1UL << TWIS_EVENTS_WRITE_EVENTS_WRITE_Pos) /*!< Bit mask of EVENTS_WRITE field. */

/* Register: TWIS_EVENTS_READ */
/* Description: Read command received */

/* Bit 0 :   */
#define TWIS_EVENTS_READ_EVENTS_READ_Pos (0UL) /*!< Position of EVENTS_READ field. */
#define TWIS_EVENTS_READ_EVENTS_READ_Msk (0x1UL << TWIS_EVENTS_READ_EVENTS_READ_Pos) /*!< Bit mask of EVENTS_READ field. */

/* Register: TWIS_EVENTS_CSSTARTED */
/* Description: TWI started stretching the clock */

/* Bit 0 :   */
#define TWIS_EVENTS_CSSTARTED_EVENTS_CSSTARTED_Pos (0UL) /*!< Position of EVENTS_CSSTARTED field. */
#define TWIS_EVENTS_CSSTARTED_EVENTS_CSSTARTED_Msk (0x1UL << TWIS_EVENTS_CSSTARTED_EVENTS_CSSTARTED_Pos) /*!< Bit mask of EVENTS_CSSTARTED field. */

/* Register: TWIS_EVENTS_CSSTOPPED */
/* Description: TWI stopped stretching the clock */

/* Bit 0 :   */
#define TWIS_EVENTS_CSSTOPPED_EVENTS_CSSTOPPED_Pos (0UL) /*!< Position of EVENTS_CSSTOPPED field. */
#define TWIS_EVENTS_CSSTOPPED_EVENTS_CSSTOPPED_Msk (0x1UL << TWIS_EVENTS_CSSTOPPED_EVENTS_CSSTOPPED_Pos) /*!< Bit mask of EVENTS_CSSTOPPED field. */

/* Register: TWIS_SHORTS */
/* Description: Shortcut register */

/* Bit 16 : Shortcut between READ event and PREPARETX task */
#define TWIS_SHORTS_READ_PREPARETX_Pos (16UL) /*!< Position of READ_PREPARETX field. */
#define TWIS_SHORTS_READ_PREPARETX_Msk (0x1UL << TWIS_SHORTS_READ_PREPARETX_Pos) /*!< Bit mask of READ_PREPARETX field. */
#define TWIS_SHORTS_READ_PREPARETX_Disabled (0UL) /*!< Disable shortcut */
#define TWIS_SHORTS_READ_PREPARETX_Enabled (1UL) /*!< Enable shortcut */

/* Bit 15 : Shortcut between WRITE event and PREPARERX task */
#define TWIS_SHORTS_WRITE_PREPARERX_Pos (15UL) /*!< Position of WRITE_PREPARERX field. */
#define TWIS_SHORTS_WRITE_PREPARERX_Msk (0x1UL << TWIS_SHORTS_WRITE_PREPARERX_Pos) /*!< Bit mask of WRITE_PREPARERX field. */
#define TWIS_SHORTS_WRITE_PREPARERX_Disabled (0UL) /*!< Disable shortcut */
#define TWIS_SHORTS_WRITE_PREPARERX_Enabled (1UL) /*!< Enable shortcut */

/* Bit 14 : Shortcut between READ event and SUSPEND task */
#define TWIS_SHORTS_READ_SUSPEND_Pos (14UL) /*!< Position of READ_SUSPEND field. */
#define TWIS_SHORTS_READ_SUSPEND_Msk (0x1UL << TWIS_SHORTS_READ_SUSPEND_Pos) /*!< Bit mask of READ_SUSPEND field. */
#define TWIS_SHORTS_READ_SUSPEND_Disabled (0UL) /*!< Disable shortcut */
#define TWIS_SHORTS_READ_SUSPEND_Enabled (1UL) /*!< Enable shortcut */

/* Bit 13 : Shortcut between WRITE event and SUSPEND task */
#define TWIS_SHORTS_WRITE_SUSPEND_Pos (13UL) /*!< Position of WRITE_SUSPEND field. */
#define TWIS_SHORTS_WRITE_SUSPEND_Msk (0x1UL << TWIS_SHORTS_WRITE_SUSPEND_Pos) /*!< Bit mask of WRITE_SUSPEND field. */
#define TWIS_SHORTS_WRITE_SUSPEND_Disabled (0UL) /*!< Disable shortcut */
#define TWIS_SHORTS_WRITE_SUSPEND_Enabled (1UL) /*!< Enable shortcut */

/* Register: TWIS_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 28 : Enable or disable interrupt for CSSTOPPED event */
#define TWIS_INTEN_CSSTOPPED_Pos (28UL) /*!< Position of CSSTOPPED field. */
#define TWIS_INTEN_CSSTOPPED_Msk (0x1UL << TWIS_INTEN_CSSTOPPED_Pos) /*!< Bit mask of CSSTOPPED field. */
#define TWIS_INTEN_CSSTOPPED_Disabled (0UL) /*!< Disable */
#define TWIS_INTEN_CSSTOPPED_Enabled (1UL) /*!< Enable */

/* Bit 27 : Enable or disable interrupt for CSSTARTED event */
#define TWIS_INTEN_CSSTARTED_Pos (27UL) /*!< Position of CSSTARTED field. */
#define TWIS_INTEN_CSSTARTED_Msk (0x1UL << TWIS_INTEN_CSSTARTED_Pos) /*!< Bit mask of CSSTARTED field. */
#define TWIS_INTEN_CSSTARTED_Disabled (0UL) /*!< Disable */
#define TWIS_INTEN_CSSTARTED_Enabled (1UL) /*!< Enable */

/* Bit 26 : Enable or disable interrupt for READ event */
#define TWIS_INTEN_READ_Pos (26UL) /*!< Position of READ field. */
#define TWIS_INTEN_READ_Msk (0x1UL << TWIS_INTEN_READ_Pos) /*!< Bit mask of READ field. */
#define TWIS_INTEN_READ_Disabled (0UL) /*!< Disable */
#define TWIS_INTEN_READ_Enabled (1UL) /*!< Enable */

/* Bit 25 : Enable or disable interrupt for WRITE event */
#define TWIS_INTEN_WRITE_Pos (25UL) /*!< Position of WRITE field. */
#define TWIS_INTEN_WRITE_Msk (0x1UL << TWIS_INTEN_WRITE_Pos) /*!< Bit mask of WRITE field. */
#define TWIS_INTEN_WRITE_Disabled (0UL) /*!< Disable */
#define TWIS_INTEN_WRITE_Enabled (1UL) /*!< Enable */

/* Bit 20 : Enable or disable interrupt for TXSTARTED event */
#define TWIS_INTEN_TXSTARTED_Pos (20UL) /*!< Position of TXSTARTED field. */
#define TWIS_INTEN_TXSTARTED_Msk (0x1UL << TWIS_INTEN_TXSTARTED_Pos) /*!< Bit mask of TXSTARTED field. */
#define TWIS_INTEN_TXSTARTED_Disabled (0UL) /*!< Disable */
#define TWIS_INTEN_TXSTARTED_Enabled (1UL) /*!< Enable */

/* Bit 19 : Enable or disable interrupt for RXSTARTED event */
#define TWIS_INTEN_RXSTARTED_Pos (19UL) /*!< Position of RXSTARTED field. */
#define TWIS_INTEN_RXSTARTED_Msk (0x1UL << TWIS_INTEN_RXSTARTED_Pos) /*!< Bit mask of RXSTARTED field. */
#define TWIS_INTEN_RXSTARTED_Disabled (0UL) /*!< Disable */
#define TWIS_INTEN_RXSTARTED_Enabled (1UL) /*!< Enable */

/* Bit 14 : Enable or disable interrupt for BB event */
#define TWIS_INTEN_BB_Pos (14UL) /*!< Position of BB field. */
#define TWIS_INTEN_BB_Msk (0x1UL << TWIS_INTEN_BB_Pos) /*!< Bit mask of BB field. */
#define TWIS_INTEN_BB_Disabled (0UL) /*!< Disable */
#define TWIS_INTEN_BB_Enabled (1UL) /*!< Enable */

/* Bit 13 : Enable or disable interrupt for NACKTX event */
#define TWIS_INTEN_NACKTX_Pos (13UL) /*!< Position of NACKTX field. */
#define TWIS_INTEN_NACKTX_Msk (0x1UL << TWIS_INTEN_NACKTX_Pos) /*!< Bit mask of NACKTX field. */
#define TWIS_INTEN_NACKTX_Disabled (0UL) /*!< Disable */
#define TWIS_INTEN_NACKTX_Enabled (1UL) /*!< Enable */

/* Bit 9 : Enable or disable interrupt for ERROR event */
#define TWIS_INTEN_ERROR_Pos (9UL) /*!< Position of ERROR field. */
#define TWIS_INTEN_ERROR_Msk (0x1UL << TWIS_INTEN_ERROR_Pos) /*!< Bit mask of ERROR field. */
#define TWIS_INTEN_ERROR_Disabled (0UL) /*!< Disable */
#define TWIS_INTEN_ERROR_Enabled (1UL) /*!< Enable */

/* Bit 1 : Enable or disable interrupt for STOPPED event */
#define TWIS_INTEN_STOPPED_Pos (1UL) /*!< Position of STOPPED field. */
#define TWIS_INTEN_STOPPED_Msk (0x1UL << TWIS_INTEN_STOPPED_Pos) /*!< Bit mask of STOPPED field. */
#define TWIS_INTEN_STOPPED_Disabled (0UL) /*!< Disable */
#define TWIS_INTEN_STOPPED_Enabled (1UL) /*!< Enable */

/* Register: TWIS_INTENSET */
/* Description: Enable interrupt */

/* Bit 28 : Write '1' to enable interrupt for CSSTOPPED event */
#define TWIS_INTENSET_CSSTOPPED_Pos (28UL) /*!< Position of CSSTOPPED field. */
#define TWIS_INTENSET_CSSTOPPED_Msk (0x1UL << TWIS_INTENSET_CSSTOPPED_Pos) /*!< Bit mask of CSSTOPPED field. */
#define TWIS_INTENSET_CSSTOPPED_Disabled (0UL) /*!< Read: Disabled */
#define TWIS_INTENSET_CSSTOPPED_Enabled (1UL) /*!< Read: Enabled */
#define TWIS_INTENSET_CSSTOPPED_Set (1UL) /*!< Enable */

/* Bit 27 : Write '1' to enable interrupt for CSSTARTED event */
#define TWIS_INTENSET_CSSTARTED_Pos (27UL) /*!< Position of CSSTARTED field. */
#define TWIS_INTENSET_CSSTARTED_Msk (0x1UL << TWIS_INTENSET_CSSTARTED_Pos) /*!< Bit mask of CSSTARTED field. */
#define TWIS_INTENSET_CSSTARTED_Disabled (0UL) /*!< Read: Disabled */
#define TWIS_INTENSET_CSSTARTED_Enabled (1UL) /*!< Read: Enabled */
#define TWIS_INTENSET_CSSTARTED_Set (1UL) /*!< Enable */

/* Bit 26 : Write '1' to enable interrupt for READ event */
#define TWIS_INTENSET_READ_Pos (26UL) /*!< Position of READ field. */
#define TWIS_INTENSET_READ_Msk (0x1UL << TWIS_INTENSET_READ_Pos) /*!< Bit mask of READ field. */
#define TWIS_INTENSET_READ_Disabled (0UL) /*!< Read: Disabled */
#define TWIS_INTENSET_READ_Enabled (1UL) /*!< Read: Enabled */
#define TWIS_INTENSET_READ_Set (1UL) /*!< Enable */

/* Bit 25 : Write '1' to enable interrupt for WRITE event */
#define TWIS_INTENSET_WRITE_Pos (25UL) /*!< Position of WRITE field. */
#define TWIS_INTENSET_WRITE_Msk (0x1UL << TWIS_INTENSET_WRITE_Pos) /*!< Bit mask of WRITE field. */
#define TWIS_INTENSET_WRITE_Disabled (0UL) /*!< Read: Disabled */
#define TWIS_INTENSET_WRITE_Enabled (1UL) /*!< Read: Enabled */
#define TWIS_INTENSET_WRITE_Set (1UL) /*!< Enable */

/* Bit 20 : Write '1' to enable interrupt for TXSTARTED event */
#define TWIS_INTENSET_TXSTARTED_Pos (20UL) /*!< Position of TXSTARTED field. */
#define TWIS_INTENSET_TXSTARTED_Msk (0x1UL << TWIS_INTENSET_TXSTARTED_Pos) /*!< Bit mask of TXSTARTED field. */
#define TWIS_INTENSET_TXSTARTED_Disabled (0UL) /*!< Read: Disabled */
#define TWIS_INTENSET_TXSTARTED_Enabled (1UL) /*!< Read: Enabled */
#define TWIS_INTENSET_TXSTARTED_Set (1UL) /*!< Enable */

/* Bit 19 : Write '1' to enable interrupt for RXSTARTED event */
#define TWIS_INTENSET_RXSTARTED_Pos (19UL) /*!< Position of RXSTARTED field. */
#define TWIS_INTENSET_RXSTARTED_Msk (0x1UL << TWIS_INTENSET_RXSTARTED_Pos) /*!< Bit mask of RXSTARTED field. */
#define TWIS_INTENSET_RXSTARTED_Disabled (0UL) /*!< Read: Disabled */
#define TWIS_INTENSET_RXSTARTED_Enabled (1UL) /*!< Read: Enabled */
#define TWIS_INTENSET_RXSTARTED_Set (1UL) /*!< Enable */

/* Bit 14 : Write '1' to enable interrupt for BB event */
#define TWIS_INTENSET_BB_Pos (14UL) /*!< Position of BB field. */
#define TWIS_INTENSET_BB_Msk (0x1UL << TWIS_INTENSET_BB_Pos) /*!< Bit mask of BB field. */
#define TWIS_INTENSET_BB_Disabled (0UL) /*!< Read: Disabled */
#define TWIS_INTENSET_BB_Enabled (1UL) /*!< Read: Enabled */
#define TWIS_INTENSET_BB_Set (1UL) /*!< Enable */

/* Bit 13 : Write '1' to enable interrupt for NACKTX event */
#define TWIS_INTENSET_NACKTX_Pos (13UL) /*!< Position of NACKTX field. */
#define TWIS_INTENSET_NACKTX_Msk (0x1UL << TWIS_INTENSET_NACKTX_Pos) /*!< Bit mask of NACKTX field. */
#define TWIS_INTENSET_NACKTX_Disabled (0UL) /*!< Read: Disabled */
#define TWIS_INTENSET_NACKTX_Enabled (1UL) /*!< Read: Enabled */
#define TWIS_INTENSET_NACKTX_Set (1UL) /*!< Enable */

/* Bit 9 : Write '1' to enable interrupt for ERROR event */
#define TWIS_INTENSET_ERROR_Pos (9UL) /*!< Position of ERROR field. */
#define TWIS_INTENSET_ERROR_Msk (0x1UL << TWIS_INTENSET_ERROR_Pos) /*!< Bit mask of ERROR field. */
#define TWIS_INTENSET_ERROR_Disabled (0UL) /*!< Read: Disabled */
#define TWIS_INTENSET_ERROR_Enabled (1UL) /*!< Read: Enabled */
#define TWIS_INTENSET_ERROR_Set (1UL) /*!< Enable */

/* Bit 1 : Write '1' to enable interrupt for STOPPED event */
#define TWIS_INTENSET_STOPPED_Pos (1UL) /*!< Position of STOPPED field. */
#define TWIS_INTENSET_STOPPED_Msk (0x1UL << TWIS_INTENSET_STOPPED_Pos) /*!< Bit mask of STOPPED field. */
#define TWIS_INTENSET_STOPPED_Disabled (0UL) /*!< Read: Disabled */
#define TWIS_INTENSET_STOPPED_Enabled (1UL) /*!< Read: Enabled */
#define TWIS_INTENSET_STOPPED_Set (1UL) /*!< Enable */

/* Register: TWIS_INTENCLR */
/* Description: Disable interrupt */

/* Bit 28 : Write '1' to disable interrupt for CSSTOPPED event */
#define TWIS_INTENCLR_CSSTOPPED_Pos (28UL) /*!< Position of CSSTOPPED field. */
#define TWIS_INTENCLR_CSSTOPPED_Msk (0x1UL << TWIS_INTENCLR_CSSTOPPED_Pos) /*!< Bit mask of CSSTOPPED field. */
#define TWIS_INTENCLR_CSSTOPPED_Disabled (0UL) /*!< Read: Disabled */
#define TWIS_INTENCLR_CSSTOPPED_Enabled (1UL) /*!< Read: Enabled */
#define TWIS_INTENCLR_CSSTOPPED_Clear (1UL) /*!< Disable */

/* Bit 27 : Write '1' to disable interrupt for CSSTARTED event */
#define TWIS_INTENCLR_CSSTARTED_Pos (27UL) /*!< Position of CSSTARTED field. */
#define TWIS_INTENCLR_CSSTARTED_Msk (0x1UL << TWIS_INTENCLR_CSSTARTED_Pos) /*!< Bit mask of CSSTARTED field. */
#define TWIS_INTENCLR_CSSTARTED_Disabled (0UL) /*!< Read: Disabled */
#define TWIS_INTENCLR_CSSTARTED_Enabled (1UL) /*!< Read: Enabled */
#define TWIS_INTENCLR_CSSTARTED_Clear (1UL) /*!< Disable */

/* Bit 26 : Write '1' to disable interrupt for READ event */
#define TWIS_INTENCLR_READ_Pos (26UL) /*!< Position of READ field. */
#define TWIS_INTENCLR_READ_Msk (0x1UL << TWIS_INTENCLR_READ_Pos) /*!< Bit mask of READ field. */
#define TWIS_INTENCLR_READ_Disabled (0UL) /*!< Read: Disabled */
#define TWIS_INTENCLR_READ_Enabled (1UL) /*!< Read: Enabled */
#define TWIS_INTENCLR_READ_Clear (1UL) /*!< Disable */

/* Bit 25 : Write '1' to disable interrupt for WRITE event */
#define TWIS_INTENCLR_WRITE_Pos (25UL) /*!< Position of WRITE field. */
#define TWIS_INTENCLR_WRITE_Msk (0x1UL << TWIS_INTENCLR_WRITE_Pos) /*!< Bit mask of WRITE field. */
#define TWIS_INTENCLR_WRITE_Disabled (0UL) /*!< Read: Disabled */
#define TWIS_INTENCLR_WRITE_Enabled (1UL) /*!< Read: Enabled */
#define TWIS_INTENCLR_WRITE_Clear (1UL) /*!< Disable */

/* Bit 20 : Write '1' to disable interrupt for TXSTARTED event */
#define TWIS_INTENCLR_TXSTARTED_Pos (20UL) /*!< Position of TXSTARTED field. */
#define TWIS_INTENCLR_TXSTARTED_Msk (0x1UL << TWIS_INTENCLR_TXSTARTED_Pos) /*!< Bit mask of TXSTARTED field. */
#define TWIS_INTENCLR_TXSTARTED_Disabled (0UL) /*!< Read: Disabled */
#define TWIS_INTENCLR_TXSTARTED_Enabled (1UL) /*!< Read: Enabled */
#define TWIS_INTENCLR_TXSTARTED_Clear (1UL) /*!< Disable */

/* Bit 19 : Write '1' to disable interrupt for RXSTARTED event */
#define TWIS_INTENCLR_RXSTARTED_Pos (19UL) /*!< Position of RXSTARTED field. */
#define TWIS_INTENCLR_RXSTARTED_Msk (0x1UL << TWIS_INTENCLR_RXSTARTED_Pos) /*!< Bit mask of RXSTARTED field. */
#define TWIS_INTENCLR_RXSTARTED_Disabled (0UL) /*!< Read: Disabled */
#define TWIS_INTENCLR_RXSTARTED_Enabled (1UL) /*!< Read: Enabled */
#define TWIS_INTENCLR_RXSTARTED_Clear (1UL) /*!< Disable */

/* Bit 14 : Write '1' to disable interrupt for BB event */
#define TWIS_INTENCLR_BB_Pos (14UL) /*!< Position of BB field. */
#define TWIS_INTENCLR_BB_Msk (0x1UL << TWIS_INTENCLR_BB_Pos) /*!< Bit mask of BB field. */
#define TWIS_INTENCLR_BB_Disabled (0UL) /*!< Read: Disabled */
#define TWIS_INTENCLR_BB_Enabled (1UL) /*!< Read: Enabled */
#define TWIS_INTENCLR_BB_Clear (1UL) /*!< Disable */

/* Bit 13 : Write '1' to disable interrupt for NACKTX event */
#define TWIS_INTENCLR_NACKTX_Pos (13UL) /*!< Position of NACKTX field. */
#define TWIS_INTENCLR_NACKTX_Msk (0x1UL << TWIS_INTENCLR_NACKTX_Pos) /*!< Bit mask of NACKTX field. */
#define TWIS_INTENCLR_NACKTX_Disabled (0UL) /*!< Read: Disabled */
#define TWIS_INTENCLR_NACKTX_Enabled (1UL) /*!< Read: Enabled */
#define TWIS_INTENCLR_NACKTX_Clear (1UL) /*!< Disable */

/* Bit 9 : Write '1' to disable interrupt for ERROR event */
#define TWIS_INTENCLR_ERROR_Pos (9UL) /*!< Position of ERROR field. */
#define TWIS_INTENCLR_ERROR_Msk (0x1UL << TWIS_INTENCLR_ERROR_Pos) /*!< Bit mask of ERROR field. */
#define TWIS_INTENCLR_ERROR_Disabled (0UL) /*!< Read: Disabled */
#define TWIS_INTENCLR_ERROR_Enabled (1UL) /*!< Read: Enabled */
#define TWIS_INTENCLR_ERROR_Clear (1UL) /*!< Disable */

/* Bit 1 : Write '1' to disable interrupt for STOPPED event */
#define TWIS_INTENCLR_STOPPED_Pos (1UL) /*!< Position of STOPPED field. */
#define TWIS_INTENCLR_STOPPED_Msk (0x1UL << TWIS_INTENCLR_STOPPED_Pos) /*!< Bit mask of STOPPED field. */
#define TWIS_INTENCLR_STOPPED_Disabled (0UL) /*!< Read: Disabled */
#define TWIS_INTENCLR_STOPPED_Enabled (1UL) /*!< Read: Enabled */
#define TWIS_INTENCLR_STOPPED_Clear (1UL) /*!< Disable */

/* Register: TWIS_ERRORSRC */
/* Description: Error source */

/* Bit 3 : TX buffer over-read detected, and prevented */
#define TWIS_ERRORSRC_OVERREAD_Pos (3UL) /*!< Position of OVERREAD field. */
#define TWIS_ERRORSRC_OVERREAD_Msk (0x1UL << TWIS_ERRORSRC_OVERREAD_Pos) /*!< Bit mask of OVERREAD field. */
#define TWIS_ERRORSRC_OVERREAD_NotDetected (0UL) /*!< Error did not occur */
#define TWIS_ERRORSRC_OVERREAD_Detected (1UL) /*!< Error occurred */

/* Bit 2 : NACK sent after receiving a data byte */
#define TWIS_ERRORSRC_DNACK_Pos (2UL) /*!< Position of DNACK field. */
#define TWIS_ERRORSRC_DNACK_Msk (0x1UL << TWIS_ERRORSRC_DNACK_Pos) /*!< Bit mask of DNACK field. */
#define TWIS_ERRORSRC_DNACK_NotReceived (0UL) /*!< Error did not occur */
#define TWIS_ERRORSRC_DNACK_Received (1UL) /*!< Error occurred */

/* Bit 0 : RX buffer overflow detected, and prevented */
#define TWIS_ERRORSRC_OVERFLOW_Pos (0UL) /*!< Position of OVERFLOW field. */
#define TWIS_ERRORSRC_OVERFLOW_Msk (0x1UL << TWIS_ERRORSRC_OVERFLOW_Pos) /*!< Bit mask of OVERFLOW field. */
#define TWIS_ERRORSRC_OVERFLOW_NotDetected (0UL) /*!< Error did not occur */
#define TWIS_ERRORSRC_OVERFLOW_Detected (1UL) /*!< Error occurred */

/* Register: TWIS_MATCH */
/* Description: Status register indicating which address had a match */

/* Bit 0 : Which of the addresses in {ADDRESS} matched the incoming address */
#define TWIS_MATCH_MATCH_Pos (0UL) /*!< Position of MATCH field. */
#define TWIS_MATCH_MATCH_Msk (0x1UL << TWIS_MATCH_MATCH_Pos) /*!< Bit mask of MATCH field. */

/* Register: TWIS_PINSTATUS */
/* Description: Returns state of signals reflecting the SDA and SCL line status. All fields will return a '0' if DEBUGENABLE is not Enabled. */

/* Bit 3 : State of SDAO register in dataHandler */
#define TWIS_PINSTATUS_SDAO_Pos (3UL) /*!< Position of SDAO field. */
#define TWIS_PINSTATUS_SDAO_Msk (0x1UL << TWIS_PINSTATUS_SDAO_Pos) /*!< Bit mask of SDAO field. */

/* Bit 2 : State of SCLO register in dataHandler */
#define TWIS_PINSTATUS_SCLO_Pos (2UL) /*!< Position of SCLO field. */
#define TWIS_PINSTATUS_SCLO_Msk (0x1UL << TWIS_PINSTATUS_SCLO_Pos) /*!< Bit mask of SCLO field. */

/* Bit 1 : State of SDA line, signal taken after the filer but without synchronizing to the 16 MHz clock */
#define TWIS_PINSTATUS_SDAIFILTERED_Pos (1UL) /*!< Position of SDAIFILTERED field. */
#define TWIS_PINSTATUS_SDAIFILTERED_Msk (0x1UL << TWIS_PINSTATUS_SDAIFILTERED_Pos) /*!< Bit mask of SDAIFILTERED field. */

/* Bit 0 : State of SCL line, signal taken after the filer but without synchronizing to the 16 MHz clock */
#define TWIS_PINSTATUS_SCLIFILTERED_Pos (0UL) /*!< Position of SCLIFILTERED field. */
#define TWIS_PINSTATUS_SCLIFILTERED_Msk (0x1UL << TWIS_PINSTATUS_SCLIFILTERED_Pos) /*!< Bit mask of SCLIFILTERED field. */

/* Register: TWIS_ENABLE */
/* Description: Enable TWIS */

/* Bits 3..0 : Enable or disable TWIS */
#define TWIS_ENABLE_ENABLE_Pos (0UL) /*!< Position of ENABLE field. */
#define TWIS_ENABLE_ENABLE_Msk (0xFUL << TWIS_ENABLE_ENABLE_Pos) /*!< Bit mask of ENABLE field. */
#define TWIS_ENABLE_ENABLE_Disabled (0UL) /*!< Disable TWIS */
#define TWIS_ENABLE_ENABLE_Enabled (9UL) /*!< Enable TWIS */

/* Register: TWIS_PSEL_SCL */
/* Description: Pin select for SCL signal */

/* Bit 31 : Connection */
#define TWIS_PSEL_SCL_CONNECT_Pos (31UL) /*!< Position of CONNECT field. */
#define TWIS_PSEL_SCL_CONNECT_Msk (0x1UL << TWIS_PSEL_SCL_CONNECT_Pos) /*!< Bit mask of CONNECT field. */
#define TWIS_PSEL_SCL_CONNECT_Connected (0UL) /*!< Connect */
#define TWIS_PSEL_SCL_CONNECT_Disconnected (1UL) /*!< Disconnect */

/* Bits 4..0 : Pin number */
#define TWIS_PSEL_SCL_PIN_Pos (0UL) /*!< Position of PIN field. */
#define TWIS_PSEL_SCL_PIN_Msk (0x1FUL << TWIS_PSEL_SCL_PIN_Pos) /*!< Bit mask of PIN field. */

/* Register: TWIS_PSEL_SDA */
/* Description: Pin select for SDA signal */

/* Bit 31 : Connection */
#define TWIS_PSEL_SDA_CONNECT_Pos (31UL) /*!< Position of CONNECT field. */
#define TWIS_PSEL_SDA_CONNECT_Msk (0x1UL << TWIS_PSEL_SDA_CONNECT_Pos) /*!< Bit mask of CONNECT field. */
#define TWIS_PSEL_SDA_CONNECT_Connected (0UL) /*!< Connect */
#define TWIS_PSEL_SDA_CONNECT_Disconnected (1UL) /*!< Disconnect */

/* Bits 4..0 : Pin number */
#define TWIS_PSEL_SDA_PIN_Pos (0UL) /*!< Position of PIN field. */
#define TWIS_PSEL_SDA_PIN_Msk (0x1FUL << TWIS_PSEL_SDA_PIN_Pos) /*!< Bit mask of PIN field. */

/* Register: TWIS_RXD_PTR */
/* Description: RXD Data pointer */

/* Bits 31..0 : RXD Data pointer */
#define TWIS_RXD_PTR_PTR_Pos (0UL) /*!< Position of PTR field. */
#define TWIS_RXD_PTR_PTR_Msk (0xFFFFFFFFUL << TWIS_RXD_PTR_PTR_Pos) /*!< Bit mask of PTR field. */

/* Register: TWIS_RXD_MAXCNT */
/* Description: Maximum number of bytes in RXD buffer */

/* Bits 9..0 : Maximum number of bytes in RXD buffer */
#define TWIS_RXD_MAXCNT_MAXCNT_Pos (0UL) /*!< Position of MAXCNT field. */
#define TWIS_RXD_MAXCNT_MAXCNT_Msk (0x3FFUL << TWIS_RXD_MAXCNT_MAXCNT_Pos) /*!< Bit mask of MAXCNT field. */

/* Register: TWIS_RXD_AMOUNT */
/* Description: Number of bytes transferred in the last RXD transaction */

/* Bits 9..0 : Number of bytes transferred in the last RXD transaction */
#define TWIS_RXD_AMOUNT_AMOUNT_Pos (0UL) /*!< Position of AMOUNT field. */
#define TWIS_RXD_AMOUNT_AMOUNT_Msk (0x3FFUL << TWIS_RXD_AMOUNT_AMOUNT_Pos) /*!< Bit mask of AMOUNT field. */

/* Register: TWIS_TXD_PTR */
/* Description: TXD Data pointer */

/* Bits 31..0 : TXD Data pointer */
#define TWIS_TXD_PTR_PTR_Pos (0UL) /*!< Position of PTR field. */
#define TWIS_TXD_PTR_PTR_Msk (0xFFFFFFFFUL << TWIS_TXD_PTR_PTR_Pos) /*!< Bit mask of PTR field. */

/* Register: TWIS_TXD_MAXCNT */
/* Description: Maximum number of bytes in TXD buffer */

/* Bits 9..0 : Maximum number of bytes in TXD buffer */
#define TWIS_TXD_MAXCNT_MAXCNT_Pos (0UL) /*!< Position of MAXCNT field. */
#define TWIS_TXD_MAXCNT_MAXCNT_Msk (0x3FFUL << TWIS_TXD_MAXCNT_MAXCNT_Pos) /*!< Bit mask of MAXCNT field. */

/* Register: TWIS_TXD_AMOUNT */
/* Description: Number of bytes transferred in the last TXD transaction */

/* Bits 9..0 : Number of bytes transferred in the last TXD transaction */
#define TWIS_TXD_AMOUNT_AMOUNT_Pos (0UL) /*!< Position of AMOUNT field. */
#define TWIS_TXD_AMOUNT_AMOUNT_Msk (0x3FFUL << TWIS_TXD_AMOUNT_AMOUNT_Pos) /*!< Bit mask of AMOUNT field. */

/* Register: TWIS_ADDRESS */
/* Description: Description collection[n]: TWI slave address n */

/* Bits 6..0 : TWI slave address */
#define TWIS_ADDRESS_ADDRESS_Pos (0UL) /*!< Position of ADDRESS field. */
#define TWIS_ADDRESS_ADDRESS_Msk (0x7FUL << TWIS_ADDRESS_ADDRESS_Pos) /*!< Bit mask of ADDRESS field. */

/* Register: TWIS_CONFIG */
/* Description: Configuration register for the address match mechanism */

/* Bit 1 : Enable or disable address matching on ADDRESS[1] */
#define TWIS_CONFIG_ADDRESS1_Pos (1UL) /*!< Position of ADDRESS1 field. */
#define TWIS_CONFIG_ADDRESS1_Msk (0x1UL << TWIS_CONFIG_ADDRESS1_Pos) /*!< Bit mask of ADDRESS1 field. */
#define TWIS_CONFIG_ADDRESS1_Disabled (0UL) /*!< Disabled */
#define TWIS_CONFIG_ADDRESS1_Enabled (1UL) /*!< Enabled */

/* Bit 0 : Enable or disable address matching on ADDRESS[0] */
#define TWIS_CONFIG_ADDRESS0_Pos (0UL) /*!< Position of ADDRESS0 field. */
#define TWIS_CONFIG_ADDRESS0_Msk (0x1UL << TWIS_CONFIG_ADDRESS0_Pos) /*!< Bit mask of ADDRESS0 field. */
#define TWIS_CONFIG_ADDRESS0_Disabled (0UL) /*!< Disabled */
#define TWIS_CONFIG_ADDRESS0_Enabled (1UL) /*!< Enabled */

/* Register: TWIS_INPUTMODE */
/* Description: Input mode */

/* Bits 1..0 : Input mode */
#define TWIS_INPUTMODE_INPUTMODE_Pos (0UL) /*!< Position of INPUTMODE field. */
#define TWIS_INPUTMODE_INPUTMODE_Msk (0x3UL << TWIS_INPUTMODE_INPUTMODE_Pos) /*!< Bit mask of INPUTMODE field. */
#define TWIS_INPUTMODE_INPUTMODE_Analog (0UL) /*!< Analog filtering */
#define TWIS_INPUTMODE_INPUTMODE_Digital (1UL) /*!< Digital filtering */
#define TWIS_INPUTMODE_INPUTMODE_Disabled (2UL) /*!< No filtering */

/* Register: TWIS_DEBUGENABLE */
/* Description: Enable TWIS debug features (PINSTATUS register) */

/* Bit 0 : Enable or disable TWIS */
#define TWIS_DEBUGENABLE_ENABLE_Pos (0UL) /*!< Position of ENABLE field. */
#define TWIS_DEBUGENABLE_ENABLE_Msk (0x1UL << TWIS_DEBUGENABLE_ENABLE_Pos) /*!< Bit mask of ENABLE field. */
#define TWIS_DEBUGENABLE_ENABLE_Disabled (0UL) /*!< Disable TWIS */
#define TWIS_DEBUGENABLE_ENABLE_Enabled (1UL) /*!< Enable TWIS debug features */

/* Register: TWIS_ORC */
/* Description: Over-read character. Character sent out in case of an over-read of the transmit buffer. */

/* Bits 7..0 : Over-read character. Character sent out in case of an over-read of the transmit buffer. */
#define TWIS_ORC_ORC_Pos (0UL) /*!< Position of ORC field. */
#define TWIS_ORC_ORC_Msk (0xFFUL << TWIS_ORC_ORC_Pos) /*!< Bit mask of ORC field. */

/* Register: TWIS_POWER */
/* Description: Peripheral power control */

/* Bit 0 : Peripheral power control. The peripheral and its registers will be reset to its initial state by switching the peripheral off and then back on again. */
#define TWIS_POWER_POWER_Pos (0UL) /*!< Position of POWER field. */
#define TWIS_POWER_POWER_Msk (0x1UL << TWIS_POWER_POWER_Pos) /*!< Bit mask of POWER field. */
#define TWIS_POWER_POWER_Disabled (0UL) /*!< Peripheral is powered off */
#define TWIS_POWER_POWER_Enabled (1UL) /*!< Peripheral is powered on */


/* Peripheral: UART */
/* Description: Universal Asynchronous Receiver/Transmitter */

/* Register: UART_TASKS_STARTRX */
/* Description: Start UART receiver */

/* Bit 0 :   */
#define UART_TASKS_STARTRX_TASKS_STARTRX_Pos (0UL) /*!< Position of TASKS_STARTRX field. */
#define UART_TASKS_STARTRX_TASKS_STARTRX_Msk (0x1UL << UART_TASKS_STARTRX_TASKS_STARTRX_Pos) /*!< Bit mask of TASKS_STARTRX field. */

/* Register: UART_TASKS_STOPRX */
/* Description: Stop UART receiver */

/* Bit 0 :   */
#define UART_TASKS_STOPRX_TASKS_STOPRX_Pos (0UL) /*!< Position of TASKS_STOPRX field. */
#define UART_TASKS_STOPRX_TASKS_STOPRX_Msk (0x1UL << UART_TASKS_STOPRX_TASKS_STOPRX_Pos) /*!< Bit mask of TASKS_STOPRX field. */

/* Register: UART_TASKS_STARTTX */
/* Description: Start UART transmitter */

/* Bit 0 :   */
#define UART_TASKS_STARTTX_TASKS_STARTTX_Pos (0UL) /*!< Position of TASKS_STARTTX field. */
#define UART_TASKS_STARTTX_TASKS_STARTTX_Msk (0x1UL << UART_TASKS_STARTTX_TASKS_STARTTX_Pos) /*!< Bit mask of TASKS_STARTTX field. */

/* Register: UART_TASKS_STOPTX */
/* Description: Stop UART transmitter */

/* Bit 0 :   */
#define UART_TASKS_STOPTX_TASKS_STOPTX_Pos (0UL) /*!< Position of TASKS_STOPTX field. */
#define UART_TASKS_STOPTX_TASKS_STOPTX_Msk (0x1UL << UART_TASKS_STOPTX_TASKS_STOPTX_Pos) /*!< Bit mask of TASKS_STOPTX field. */

/* Register: UART_TASKS_SUSPEND */
/* Description: Suspend UART */

/* Bit 0 :   */
#define UART_TASKS_SUSPEND_TASKS_SUSPEND_Pos (0UL) /*!< Position of TASKS_SUSPEND field. */
#define UART_TASKS_SUSPEND_TASKS_SUSPEND_Msk (0x1UL << UART_TASKS_SUSPEND_TASKS_SUSPEND_Pos) /*!< Bit mask of TASKS_SUSPEND field. */

/* Register: UART_EVENTS_CTS */
/* Description: CTS is activated (set low). Clear To Send. */

/* Bit 0 :   */
#define UART_EVENTS_CTS_EVENTS_CTS_Pos (0UL) /*!< Position of EVENTS_CTS field. */
#define UART_EVENTS_CTS_EVENTS_CTS_Msk (0x1UL << UART_EVENTS_CTS_EVENTS_CTS_Pos) /*!< Bit mask of EVENTS_CTS field. */

/* Register: UART_EVENTS_NCTS */
/* Description: CTS is deactivated (set high). Not Clear To Send. */

/* Bit 0 :   */
#define UART_EVENTS_NCTS_EVENTS_NCTS_Pos (0UL) /*!< Position of EVENTS_NCTS field. */
#define UART_EVENTS_NCTS_EVENTS_NCTS_Msk (0x1UL << UART_EVENTS_NCTS_EVENTS_NCTS_Pos) /*!< Bit mask of EVENTS_NCTS field. */

/* Register: UART_EVENTS_RXDRDY */
/* Description: Data received in RXD */

/* Bit 0 :   */
#define UART_EVENTS_RXDRDY_EVENTS_RXDRDY_Pos (0UL) /*!< Position of EVENTS_RXDRDY field. */
#define UART_EVENTS_RXDRDY_EVENTS_RXDRDY_Msk (0x1UL << UART_EVENTS_RXDRDY_EVENTS_RXDRDY_Pos) /*!< Bit mask of EVENTS_RXDRDY field. */

/* Register: UART_EVENTS_TXDRDY */
/* Description: Data sent from TXD */

/* Bit 0 :   */
#define UART_EVENTS_TXDRDY_EVENTS_TXDRDY_Pos (0UL) /*!< Position of EVENTS_TXDRDY field. */
#define UART_EVENTS_TXDRDY_EVENTS_TXDRDY_Msk (0x1UL << UART_EVENTS_TXDRDY_EVENTS_TXDRDY_Pos) /*!< Bit mask of EVENTS_TXDRDY field. */

/* Register: UART_EVENTS_ERROR */
/* Description: Error detected */

/* Bit 0 :   */
#define UART_EVENTS_ERROR_EVENTS_ERROR_Pos (0UL) /*!< Position of EVENTS_ERROR field. */
#define UART_EVENTS_ERROR_EVENTS_ERROR_Msk (0x1UL << UART_EVENTS_ERROR_EVENTS_ERROR_Pos) /*!< Bit mask of EVENTS_ERROR field. */

/* Register: UART_EVENTS_RXTO */
/* Description: Receiver timeout */

/* Bit 0 :   */
#define UART_EVENTS_RXTO_EVENTS_RXTO_Pos (0UL) /*!< Position of EVENTS_RXTO field. */
#define UART_EVENTS_RXTO_EVENTS_RXTO_Msk (0x1UL << UART_EVENTS_RXTO_EVENTS_RXTO_Pos) /*!< Bit mask of EVENTS_RXTO field. */

/* Register: UART_SHORTS */
/* Description: Shortcut register */

/* Bit 4 : Shortcut between NCTS event and STOPRX task */
#define UART_SHORTS_NCTS_STOPRX_Pos (4UL) /*!< Position of NCTS_STOPRX field. */
#define UART_SHORTS_NCTS_STOPRX_Msk (0x1UL << UART_SHORTS_NCTS_STOPRX_Pos) /*!< Bit mask of NCTS_STOPRX field. */
#define UART_SHORTS_NCTS_STOPRX_Disabled (0UL) /*!< Disable shortcut */
#define UART_SHORTS_NCTS_STOPRX_Enabled (1UL) /*!< Enable shortcut */

/* Bit 3 : Shortcut between CTS event and STARTRX task */
#define UART_SHORTS_CTS_STARTRX_Pos (3UL) /*!< Position of CTS_STARTRX field. */
#define UART_SHORTS_CTS_STARTRX_Msk (0x1UL << UART_SHORTS_CTS_STARTRX_Pos) /*!< Bit mask of CTS_STARTRX field. */
#define UART_SHORTS_CTS_STARTRX_Disabled (0UL) /*!< Disable shortcut */
#define UART_SHORTS_CTS_STARTRX_Enabled (1UL) /*!< Enable shortcut */

/* Register: UART_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 17 : Enable or disable interrupt for RXTO event */
#define UART_INTEN_RXTO_Pos (17UL) /*!< Position of RXTO field. */
#define UART_INTEN_RXTO_Msk (0x1UL << UART_INTEN_RXTO_Pos) /*!< Bit mask of RXTO field. */
#define UART_INTEN_RXTO_Disabled (0UL) /*!< Disable */
#define UART_INTEN_RXTO_Enabled (1UL) /*!< Enable */

/* Bit 9 : Enable or disable interrupt for ERROR event */
#define UART_INTEN_ERROR_Pos (9UL) /*!< Position of ERROR field. */
#define UART_INTEN_ERROR_Msk (0x1UL << UART_INTEN_ERROR_Pos) /*!< Bit mask of ERROR field. */
#define UART_INTEN_ERROR_Disabled (0UL) /*!< Disable */
#define UART_INTEN_ERROR_Enabled (1UL) /*!< Enable */

/* Bit 7 : Enable or disable interrupt for TXDRDY event */
#define UART_INTEN_TXDRDY_Pos (7UL) /*!< Position of TXDRDY field. */
#define UART_INTEN_TXDRDY_Msk (0x1UL << UART_INTEN_TXDRDY_Pos) /*!< Bit mask of TXDRDY field. */
#define UART_INTEN_TXDRDY_Disabled (0UL) /*!< Disable */
#define UART_INTEN_TXDRDY_Enabled (1UL) /*!< Enable */

/* Bit 2 : Enable or disable interrupt for RXDRDY event */
#define UART_INTEN_RXDRDY_Pos (2UL) /*!< Position of RXDRDY field. */
#define UART_INTEN_RXDRDY_Msk (0x1UL << UART_INTEN_RXDRDY_Pos) /*!< Bit mask of RXDRDY field. */
#define UART_INTEN_RXDRDY_Disabled (0UL) /*!< Disable */
#define UART_INTEN_RXDRDY_Enabled (1UL) /*!< Enable */

/* Bit 1 : Enable or disable interrupt for NCTS event */
#define UART_INTEN_NCTS_Pos (1UL) /*!< Position of NCTS field. */
#define UART_INTEN_NCTS_Msk (0x1UL << UART_INTEN_NCTS_Pos) /*!< Bit mask of NCTS field. */
#define UART_INTEN_NCTS_Disabled (0UL) /*!< Disable */
#define UART_INTEN_NCTS_Enabled (1UL) /*!< Enable */

/* Bit 0 : Enable or disable interrupt for CTS event */
#define UART_INTEN_CTS_Pos (0UL) /*!< Position of CTS field. */
#define UART_INTEN_CTS_Msk (0x1UL << UART_INTEN_CTS_Pos) /*!< Bit mask of CTS field. */
#define UART_INTEN_CTS_Disabled (0UL) /*!< Disable */
#define UART_INTEN_CTS_Enabled (1UL) /*!< Enable */

/* Register: UART_INTENSET */
/* Description: Enable interrupt */

/* Bit 17 : Write '1' to enable interrupt for RXTO event */
#define UART_INTENSET_RXTO_Pos (17UL) /*!< Position of RXTO field. */
#define UART_INTENSET_RXTO_Msk (0x1UL << UART_INTENSET_RXTO_Pos) /*!< Bit mask of RXTO field. */
#define UART_INTENSET_RXTO_Disabled (0UL) /*!< Read: Disabled */
#define UART_INTENSET_RXTO_Enabled (1UL) /*!< Read: Enabled */
#define UART_INTENSET_RXTO_Set (1UL) /*!< Enable */

/* Bit 9 : Write '1' to enable interrupt for ERROR event */
#define UART_INTENSET_ERROR_Pos (9UL) /*!< Position of ERROR field. */
#define UART_INTENSET_ERROR_Msk (0x1UL << UART_INTENSET_ERROR_Pos) /*!< Bit mask of ERROR field. */
#define UART_INTENSET_ERROR_Disabled (0UL) /*!< Read: Disabled */
#define UART_INTENSET_ERROR_Enabled (1UL) /*!< Read: Enabled */
#define UART_INTENSET_ERROR_Set (1UL) /*!< Enable */

/* Bit 7 : Write '1' to enable interrupt for TXDRDY event */
#define UART_INTENSET_TXDRDY_Pos (7UL) /*!< Position of TXDRDY field. */
#define UART_INTENSET_TXDRDY_Msk (0x1UL << UART_INTENSET_TXDRDY_Pos) /*!< Bit mask of TXDRDY field. */
#define UART_INTENSET_TXDRDY_Disabled (0UL) /*!< Read: Disabled */
#define UART_INTENSET_TXDRDY_Enabled (1UL) /*!< Read: Enabled */
#define UART_INTENSET_TXDRDY_Set (1UL) /*!< Enable */

/* Bit 2 : Write '1' to enable interrupt for RXDRDY event */
#define UART_INTENSET_RXDRDY_Pos (2UL) /*!< Position of RXDRDY field. */
#define UART_INTENSET_RXDRDY_Msk (0x1UL << UART_INTENSET_RXDRDY_Pos) /*!< Bit mask of RXDRDY field. */
#define UART_INTENSET_RXDRDY_Disabled (0UL) /*!< Read: Disabled */
#define UART_INTENSET_RXDRDY_Enabled (1UL) /*!< Read: Enabled */
#define UART_INTENSET_RXDRDY_Set (1UL) /*!< Enable */

/* Bit 1 : Write '1' to enable interrupt for NCTS event */
#define UART_INTENSET_NCTS_Pos (1UL) /*!< Position of NCTS field. */
#define UART_INTENSET_NCTS_Msk (0x1UL << UART_INTENSET_NCTS_Pos) /*!< Bit mask of NCTS field. */
#define UART_INTENSET_NCTS_Disabled (0UL) /*!< Read: Disabled */
#define UART_INTENSET_NCTS_Enabled (1UL) /*!< Read: Enabled */
#define UART_INTENSET_NCTS_Set (1UL) /*!< Enable */

/* Bit 0 : Write '1' to enable interrupt for CTS event */
#define UART_INTENSET_CTS_Pos (0UL) /*!< Position of CTS field. */
#define UART_INTENSET_CTS_Msk (0x1UL << UART_INTENSET_CTS_Pos) /*!< Bit mask of CTS field. */
#define UART_INTENSET_CTS_Disabled (0UL) /*!< Read: Disabled */
#define UART_INTENSET_CTS_Enabled (1UL) /*!< Read: Enabled */
#define UART_INTENSET_CTS_Set (1UL) /*!< Enable */

/* Register: UART_INTENCLR */
/* Description: Disable interrupt */

/* Bit 17 : Write '1' to disable interrupt for RXTO event */
#define UART_INTENCLR_RXTO_Pos (17UL) /*!< Position of RXTO field. */
#define UART_INTENCLR_RXTO_Msk (0x1UL << UART_INTENCLR_RXTO_Pos) /*!< Bit mask of RXTO field. */
#define UART_INTENCLR_RXTO_Disabled (0UL) /*!< Read: Disabled */
#define UART_INTENCLR_RXTO_Enabled (1UL) /*!< Read: Enabled */
#define UART_INTENCLR_RXTO_Clear (1UL) /*!< Disable */

/* Bit 9 : Write '1' to disable interrupt for ERROR event */
#define UART_INTENCLR_ERROR_Pos (9UL) /*!< Position of ERROR field. */
#define UART_INTENCLR_ERROR_Msk (0x1UL << UART_INTENCLR_ERROR_Pos) /*!< Bit mask of ERROR field. */
#define UART_INTENCLR_ERROR_Disabled (0UL) /*!< Read: Disabled */
#define UART_INTENCLR_ERROR_Enabled (1UL) /*!< Read: Enabled */
#define UART_INTENCLR_ERROR_Clear (1UL) /*!< Disable */

/* Bit 7 : Write '1' to disable interrupt for TXDRDY event */
#define UART_INTENCLR_TXDRDY_Pos (7UL) /*!< Position of TXDRDY field. */
#define UART_INTENCLR_TXDRDY_Msk (0x1UL << UART_INTENCLR_TXDRDY_Pos) /*!< Bit mask of TXDRDY field. */
#define UART_INTENCLR_TXDRDY_Disabled (0UL) /*!< Read: Disabled */
#define UART_INTENCLR_TXDRDY_Enabled (1UL) /*!< Read: Enabled */
#define UART_INTENCLR_TXDRDY_Clear (1UL) /*!< Disable */

/* Bit 2 : Write '1' to disable interrupt for RXDRDY event */
#define UART_INTENCLR_RXDRDY_Pos (2UL) /*!< Position of RXDRDY field. */
#define UART_INTENCLR_RXDRDY_Msk (0x1UL << UART_INTENCLR_RXDRDY_Pos) /*!< Bit mask of RXDRDY field. */
#define UART_INTENCLR_RXDRDY_Disabled (0UL) /*!< Read: Disabled */
#define UART_INTENCLR_RXDRDY_Enabled (1UL) /*!< Read: Enabled */
#define UART_INTENCLR_RXDRDY_Clear (1UL) /*!< Disable */

/* Bit 1 : Write '1' to disable interrupt for NCTS event */
#define UART_INTENCLR_NCTS_Pos (1UL) /*!< Position of NCTS field. */
#define UART_INTENCLR_NCTS_Msk (0x1UL << UART_INTENCLR_NCTS_Pos) /*!< Bit mask of NCTS field. */
#define UART_INTENCLR_NCTS_Disabled (0UL) /*!< Read: Disabled */
#define UART_INTENCLR_NCTS_Enabled (1UL) /*!< Read: Enabled */
#define UART_INTENCLR_NCTS_Clear (1UL) /*!< Disable */

/* Bit 0 : Write '1' to disable interrupt for CTS event */
#define UART_INTENCLR_CTS_Pos (0UL) /*!< Position of CTS field. */
#define UART_INTENCLR_CTS_Msk (0x1UL << UART_INTENCLR_CTS_Pos) /*!< Bit mask of CTS field. */
#define UART_INTENCLR_CTS_Disabled (0UL) /*!< Read: Disabled */
#define UART_INTENCLR_CTS_Enabled (1UL) /*!< Read: Enabled */
#define UART_INTENCLR_CTS_Clear (1UL) /*!< Disable */

/* Register: UART_ERRORSRC */
/* Description: Error source */

/* Bit 3 : Break condition */
#define UART_ERRORSRC_BREAK_Pos (3UL) /*!< Position of BREAK field. */
#define UART_ERRORSRC_BREAK_Msk (0x1UL << UART_ERRORSRC_BREAK_Pos) /*!< Bit mask of BREAK field. */
#define UART_ERRORSRC_BREAK_NotPresent (0UL) /*!< Read: error not present */
#define UART_ERRORSRC_BREAK_Present (1UL) /*!< Read: error present */

/* Bit 2 : Framing error occurred */
#define UART_ERRORSRC_FRAMING_Pos (2UL) /*!< Position of FRAMING field. */
#define UART_ERRORSRC_FRAMING_Msk (0x1UL << UART_ERRORSRC_FRAMING_Pos) /*!< Bit mask of FRAMING field. */
#define UART_ERRORSRC_FRAMING_NotPresent (0UL) /*!< Read: error not present */
#define UART_ERRORSRC_FRAMING_Present (1UL) /*!< Read: error present */

/* Bit 1 : Parity error */
#define UART_ERRORSRC_PARITY_Pos (1UL) /*!< Position of PARITY field. */
#define UART_ERRORSRC_PARITY_Msk (0x1UL << UART_ERRORSRC_PARITY_Pos) /*!< Bit mask of PARITY field. */
#define UART_ERRORSRC_PARITY_NotPresent (0UL) /*!< Read: error not present */
#define UART_ERRORSRC_PARITY_Present (1UL) /*!< Read: error present */

/* Bit 0 : Overrun error */
#define UART_ERRORSRC_OVERRUN_Pos (0UL) /*!< Position of OVERRUN field. */
#define UART_ERRORSRC_OVERRUN_Msk (0x1UL << UART_ERRORSRC_OVERRUN_Pos) /*!< Bit mask of OVERRUN field. */
#define UART_ERRORSRC_OVERRUN_NotPresent (0UL) /*!< Read: error not present */
#define UART_ERRORSRC_OVERRUN_Present (1UL) /*!< Read: error present */

/* Register: UART_ENABLE */
/* Description: Enable UART */

/* Bits 3..0 : Enable or disable UART */
#define UART_ENABLE_ENABLE_Pos (0UL) /*!< Position of ENABLE field. */
#define UART_ENABLE_ENABLE_Msk (0xFUL << UART_ENABLE_ENABLE_Pos) /*!< Bit mask of ENABLE field. */
#define UART_ENABLE_ENABLE_Disabled (0UL) /*!< Disable UART */
#define UART_ENABLE_ENABLE_Enabled (4UL) /*!< Enable UART */

/* Register: UART_PSEL_RTS */
/* Description: Pin select for RTS */

/* Bit 31 : Connection */
#define UART_PSEL_RTS_CONNECT_Pos (31UL) /*!< Position of CONNECT field. */
#define UART_PSEL_RTS_CONNECT_Msk (0x1UL << UART_PSEL_RTS_CONNECT_Pos) /*!< Bit mask of CONNECT field. */
#define UART_PSEL_RTS_CONNECT_Connected (0UL) /*!< Connect */
#define UART_PSEL_RTS_CONNECT_Disconnected (1UL) /*!< Disconnect */

/* Bits 4..0 : Pin number */
#define UART_PSEL_RTS_PIN_Pos (0UL) /*!< Position of PIN field. */
#define UART_PSEL_RTS_PIN_Msk (0x1FUL << UART_PSEL_RTS_PIN_Pos) /*!< Bit mask of PIN field. */

/* Register: UART_PSEL_TXD */
/* Description: Pin select for TXD */

/* Bit 31 : Connection */
#define UART_PSEL_TXD_CONNECT_Pos (31UL) /*!< Position of CONNECT field. */
#define UART_PSEL_TXD_CONNECT_Msk (0x1UL << UART_PSEL_TXD_CONNECT_Pos) /*!< Bit mask of CONNECT field. */
#define UART_PSEL_TXD_CONNECT_Connected (0UL) /*!< Connect */
#define UART_PSEL_TXD_CONNECT_Disconnected (1UL) /*!< Disconnect */

/* Bits 4..0 : Pin number */
#define UART_PSEL_TXD_PIN_Pos (0UL) /*!< Position of PIN field. */
#define UART_PSEL_TXD_PIN_Msk (0x1FUL << UART_PSEL_TXD_PIN_Pos) /*!< Bit mask of PIN field. */

/* Register: UART_PSEL_CTS */
/* Description: Pin select for CTS */

/* Bit 31 : Connection */
#define UART_PSEL_CTS_CONNECT_Pos (31UL) /*!< Position of CONNECT field. */
#define UART_PSEL_CTS_CONNECT_Msk (0x1UL << UART_PSEL_CTS_CONNECT_Pos) /*!< Bit mask of CONNECT field. */
#define UART_PSEL_CTS_CONNECT_Connected (0UL) /*!< Connect */
#define UART_PSEL_CTS_CONNECT_Disconnected (1UL) /*!< Disconnect */

/* Bits 4..0 : Pin number */
#define UART_PSEL_CTS_PIN_Pos (0UL) /*!< Position of PIN field. */
#define UART_PSEL_CTS_PIN_Msk (0x1FUL << UART_PSEL_CTS_PIN_Pos) /*!< Bit mask of PIN field. */

/* Register: UART_PSEL_RXD */
/* Description: Pin select for RXD */

/* Bit 31 : Connection */
#define UART_PSEL_RXD_CONNECT_Pos (31UL) /*!< Position of CONNECT field. */
#define UART_PSEL_RXD_CONNECT_Msk (0x1UL << UART_PSEL_RXD_CONNECT_Pos) /*!< Bit mask of CONNECT field. */
#define UART_PSEL_RXD_CONNECT_Connected (0UL) /*!< Connect */
#define UART_PSEL_RXD_CONNECT_Disconnected (1UL) /*!< Disconnect */

/* Bits 4..0 : Pin number */
#define UART_PSEL_RXD_PIN_Pos (0UL) /*!< Position of PIN field. */
#define UART_PSEL_RXD_PIN_Msk (0x1FUL << UART_PSEL_RXD_PIN_Pos) /*!< Bit mask of PIN field. */

/* Register: UART_RXD */
/* Description: RXD register */

/* Bits 7..0 : RX data received in previous transfers, double buffered */
#define UART_RXD_RXD_Pos (0UL) /*!< Position of RXD field. */
#define UART_RXD_RXD_Msk (0xFFUL << UART_RXD_RXD_Pos) /*!< Bit mask of RXD field. */

/* Register: UART_TXD */
/* Description: TXD register */

/* Bits 7..0 : TX data to be transferred */
#define UART_TXD_TXD_Pos (0UL) /*!< Position of TXD field. */
#define UART_TXD_TXD_Msk (0xFFUL << UART_TXD_TXD_Pos) /*!< Bit mask of TXD field. */

/* Register: UART_BAUDRATE */
/* Description: Baud rate. Accuracy depends on the HFCLK source selected. */

/* Bits 31..0 : Baud rate */
#define UART_BAUDRATE_BAUDRATE_Pos (0UL) /*!< Position of BAUDRATE field. */
#define UART_BAUDRATE_BAUDRATE_Msk (0xFFFFFFFFUL << UART_BAUDRATE_BAUDRATE_Pos) /*!< Bit mask of BAUDRATE field. */
#define UART_BAUDRATE_BAUDRATE_Baud1200 (0x0004F000UL) /*!< 1200 baud (actual rate: 1205) */
#define UART_BAUDRATE_BAUDRATE_Baud2400 (0x0009D000UL) /*!< 2400 baud (actual rate: 2396) */
#define UART_BAUDRATE_BAUDRATE_Baud4800 (0x0013B000UL) /*!< 4800 baud (actual rate: 4808) */
#define UART_BAUDRATE_BAUDRATE_Baud9600 (0x00275000UL) /*!< 9600 baud (actual rate: 9598) */
#define UART_BAUDRATE_BAUDRATE_Baud14400 (0x003B0000UL) /*!< 14400 baud (actual rate: 14414) */
#define UART_BAUDRATE_BAUDRATE_Baud19200 (0x004EA000UL) /*!< 19200 baud (actual rate: 19208) */
#define UART_BAUDRATE_BAUDRATE_Baud28800 (0x0075F000UL) /*!< 28800 baud (actual rate: 28829) */
#define UART_BAUDRATE_BAUDRATE_Baud31250 (0x00800000UL) /*!< 31250 baud */
#define UART_BAUDRATE_BAUDRATE_Baud38400 (0x009D5000UL) /*!< 38400 baud (actual rate: 38462) */
#define UART_BAUDRATE_BAUDRATE_Baud56000 (0x00E50000UL) /*!< 56000 baud (actual rate: 55944) */
#define UART_BAUDRATE_BAUDRATE_Baud57600 (0x00EBF000UL) /*!< 57600 baud (actual rate: 57762) */
#define UART_BAUDRATE_BAUDRATE_Baud76800 (0x013A9000UL) /*!< 76800 baud (actual rate: 76923) */
#define UART_BAUDRATE_BAUDRATE_Baud115200 (0x01D7E000UL) /*!< 115200 baud (actual rate: 115942) */
#define UART_BAUDRATE_BAUDRATE_Baud230400 (0x03AFB000UL) /*!< 230400 baud (actual rate: 231884) */
#define UART_BAUDRATE_BAUDRATE_Baud250000 (0x04000000UL) /*!< 250000 baud */
#define UART_BAUDRATE_BAUDRATE_Baud460800 (0x075F7000UL) /*!< 460800 baud (actual rate: 470588) */
#define UART_BAUDRATE_BAUDRATE_Baud921600 (0x0EBED000UL) /*!< 921600 baud (actual rate: 941176) */
#define UART_BAUDRATE_BAUDRATE_Baud1M (0x10000000UL) /*!< 1Mega baud */

/* Register: UART_CONFIG */
/* Description: Configuration of parity and hardware flow control */

/* Bits 3..1 : Parity */
#define UART_CONFIG_PARITY_Pos (1UL) /*!< Position of PARITY field. */
#define UART_CONFIG_PARITY_Msk (0x7UL << UART_CONFIG_PARITY_Pos) /*!< Bit mask of PARITY field. */
#define UART_CONFIG_PARITY_Excluded (0x0UL) /*!< Exclude parity bit */
#define UART_CONFIG_PARITY_Included (0x7UL) /*!< Include parity bit */

/* Bit 0 : Hardware flow control */
#define UART_CONFIG_HWFC_Pos (0UL) /*!< Position of HWFC field. */
#define UART_CONFIG_HWFC_Msk (0x1UL << UART_CONFIG_HWFC_Pos) /*!< Bit mask of HWFC field. */
#define UART_CONFIG_HWFC_Disabled (0UL) /*!< Disabled */
#define UART_CONFIG_HWFC_Enabled (1UL) /*!< Enabled */

/* Register: UART_POWER */
/* Description: Peripheral power control */

/* Bit 0 : Peripheral power control. The peripheral and its registers will be reset to its initial state by switching the peripheral off and then back on again. */
#define UART_POWER_POWER_Pos (0UL) /*!< Position of POWER field. */
#define UART_POWER_POWER_Msk (0x1UL << UART_POWER_POWER_Pos) /*!< Bit mask of POWER field. */
#define UART_POWER_POWER_Disabled (0UL) /*!< Peripheral is powered off */
#define UART_POWER_POWER_Enabled (1UL) /*!< Peripheral is powered on */


/* Peripheral: UARTE */
/* Description: UART with EasyDMA */

/* Register: UARTE_TASKS_STARTRX */
/* Description: Start UART receiver */

/* Bit 0 :   */
#define UARTE_TASKS_STARTRX_TASKS_STARTRX_Pos (0UL) /*!< Position of TASKS_STARTRX field. */
#define UARTE_TASKS_STARTRX_TASKS_STARTRX_Msk (0x1UL << UARTE_TASKS_STARTRX_TASKS_STARTRX_Pos) /*!< Bit mask of TASKS_STARTRX field. */

/* Register: UARTE_TASKS_STOPRX */
/* Description: Stop UART receiver */

/* Bit 0 :   */
#define UARTE_TASKS_STOPRX_TASKS_STOPRX_Pos (0UL) /*!< Position of TASKS_STOPRX field. */
#define UARTE_TASKS_STOPRX_TASKS_STOPRX_Msk (0x1UL << UARTE_TASKS_STOPRX_TASKS_STOPRX_Pos) /*!< Bit mask of TASKS_STOPRX field. */

/* Register: UARTE_TASKS_STARTTX */
/* Description: Start UART transmitter */

/* Bit 0 :   */
#define UARTE_TASKS_STARTTX_TASKS_STARTTX_Pos (0UL) /*!< Position of TASKS_STARTTX field. */
#define UARTE_TASKS_STARTTX_TASKS_STARTTX_Msk (0x1UL << UARTE_TASKS_STARTTX_TASKS_STARTTX_Pos) /*!< Bit mask of TASKS_STARTTX field. */

/* Register: UARTE_TASKS_STOPTX */
/* Description: Stop UART transmitter */

/* Bit 0 :   */
#define UARTE_TASKS_STOPTX_TASKS_STOPTX_Pos (0UL) /*!< Position of TASKS_STOPTX field. */
#define UARTE_TASKS_STOPTX_TASKS_STOPTX_Msk (0x1UL << UARTE_TASKS_STOPTX_TASKS_STOPTX_Pos) /*!< Bit mask of TASKS_STOPTX field. */

/* Register: UARTE_TASKS_SUSPEND */
/* Description: Suspend UART transaction */

/* Bit 0 :   */
#define UARTE_TASKS_SUSPEND_TASKS_SUSPEND_Pos (0UL) /*!< Position of TASKS_SUSPEND field. */
#define UARTE_TASKS_SUSPEND_TASKS_SUSPEND_Msk (0x1UL << UARTE_TASKS_SUSPEND_TASKS_SUSPEND_Pos) /*!< Bit mask of TASKS_SUSPEND field. */

/* Register: UARTE_TASKS_RESUME */
/* Description: Resume UART transaction */

/* Bit 0 :   */
#define UARTE_TASKS_RESUME_TASKS_RESUME_Pos (0UL) /*!< Position of TASKS_RESUME field. */
#define UARTE_TASKS_RESUME_TASKS_RESUME_Msk (0x1UL << UARTE_TASKS_RESUME_TASKS_RESUME_Pos) /*!< Bit mask of TASKS_RESUME field. */

/* Register: UARTE_TASKS_FLUSHRX */
/* Description: Flush RX FIFO into RX buffer */

/* Bit 0 :   */
#define UARTE_TASKS_FLUSHRX_TASKS_FLUSHRX_Pos (0UL) /*!< Position of TASKS_FLUSHRX field. */
#define UARTE_TASKS_FLUSHRX_TASKS_FLUSHRX_Msk (0x1UL << UARTE_TASKS_FLUSHRX_TASKS_FLUSHRX_Pos) /*!< Bit mask of TASKS_FLUSHRX field. */

/* Register: UARTE_EVENTS_CTS */
/* Description: CTS is activated (set low). Clear To Send. */

/* Bit 0 :   */
#define UARTE_EVENTS_CTS_EVENTS_CTS_Pos (0UL) /*!< Position of EVENTS_CTS field. */
#define UARTE_EVENTS_CTS_EVENTS_CTS_Msk (0x1UL << UARTE_EVENTS_CTS_EVENTS_CTS_Pos) /*!< Bit mask of EVENTS_CTS field. */

/* Register: UARTE_EVENTS_NCTS */
/* Description: CTS is deactivated (set high). Not Clear To Send. */

/* Bit 0 :   */
#define UARTE_EVENTS_NCTS_EVENTS_NCTS_Pos (0UL) /*!< Position of EVENTS_NCTS field. */
#define UARTE_EVENTS_NCTS_EVENTS_NCTS_Msk (0x1UL << UARTE_EVENTS_NCTS_EVENTS_NCTS_Pos) /*!< Bit mask of EVENTS_NCTS field. */

/* Register: UARTE_EVENTS_RXDRDY */
/* Description: Data received in RXD (but potentially not yet transferred to Data RAM) */

/* Bit 0 :   */
#define UARTE_EVENTS_RXDRDY_EVENTS_RXDRDY_Pos (0UL) /*!< Position of EVENTS_RXDRDY field. */
#define UARTE_EVENTS_RXDRDY_EVENTS_RXDRDY_Msk (0x1UL << UARTE_EVENTS_RXDRDY_EVENTS_RXDRDY_Pos) /*!< Bit mask of EVENTS_RXDRDY field. */

/* Register: UARTE_EVENTS_ENDRX */
/* Description: Receive buffer is filled up */

/* Bit 0 :   */
#define UARTE_EVENTS_ENDRX_EVENTS_ENDRX_Pos (0UL) /*!< Position of EVENTS_ENDRX field. */
#define UARTE_EVENTS_ENDRX_EVENTS_ENDRX_Msk (0x1UL << UARTE_EVENTS_ENDRX_EVENTS_ENDRX_Pos) /*!< Bit mask of EVENTS_ENDRX field. */

/* Register: UARTE_EVENTS_TXDRDY */
/* Description: Data sent from TXD */

/* Bit 0 :   */
#define UARTE_EVENTS_TXDRDY_EVENTS_TXDRDY_Pos (0UL) /*!< Position of EVENTS_TXDRDY field. */
#define UARTE_EVENTS_TXDRDY_EVENTS_TXDRDY_Msk (0x1UL << UARTE_EVENTS_TXDRDY_EVENTS_TXDRDY_Pos) /*!< Bit mask of EVENTS_TXDRDY field. */

/* Register: UARTE_EVENTS_ENDTX */
/* Description: Last TX byte transmitted */

/* Bit 0 :   */
#define UARTE_EVENTS_ENDTX_EVENTS_ENDTX_Pos (0UL) /*!< Position of EVENTS_ENDTX field. */
#define UARTE_EVENTS_ENDTX_EVENTS_ENDTX_Msk (0x1UL << UARTE_EVENTS_ENDTX_EVENTS_ENDTX_Pos) /*!< Bit mask of EVENTS_ENDTX field. */

/* Register: UARTE_EVENTS_ERROR */
/* Description: Error detected */

/* Bit 0 :   */
#define UARTE_EVENTS_ERROR_EVENTS_ERROR_Pos (0UL) /*!< Position of EVENTS_ERROR field. */
#define UARTE_EVENTS_ERROR_EVENTS_ERROR_Msk (0x1UL << UARTE_EVENTS_ERROR_EVENTS_ERROR_Pos) /*!< Bit mask of EVENTS_ERROR field. */

/* Register: UARTE_EVENTS_RXTO */
/* Description: Receiver timeout */

/* Bit 0 :   */
#define UARTE_EVENTS_RXTO_EVENTS_RXTO_Pos (0UL) /*!< Position of EVENTS_RXTO field. */
#define UARTE_EVENTS_RXTO_EVENTS_RXTO_Msk (0x1UL << UARTE_EVENTS_RXTO_EVENTS_RXTO_Pos) /*!< Bit mask of EVENTS_RXTO field. */

/* Register: UARTE_EVENTS_RXSTARTED */
/* Description: UART receiver has started */

/* Bit 0 :   */
#define UARTE_EVENTS_RXSTARTED_EVENTS_RXSTARTED_Pos (0UL) /*!< Position of EVENTS_RXSTARTED field. */
#define UARTE_EVENTS_RXSTARTED_EVENTS_RXSTARTED_Msk (0x1UL << UARTE_EVENTS_RXSTARTED_EVENTS_RXSTARTED_Pos) /*!< Bit mask of EVENTS_RXSTARTED field. */

/* Register: UARTE_EVENTS_TXSTARTED */
/* Description: UART transmitter has started */

/* Bit 0 :   */
#define UARTE_EVENTS_TXSTARTED_EVENTS_TXSTARTED_Pos (0UL) /*!< Position of EVENTS_TXSTARTED field. */
#define UARTE_EVENTS_TXSTARTED_EVENTS_TXSTARTED_Msk (0x1UL << UARTE_EVENTS_TXSTARTED_EVENTS_TXSTARTED_Pos) /*!< Bit mask of EVENTS_TXSTARTED field. */

/* Register: UARTE_EVENTS_RTS */
/* Description: RX FIFO has only room for four more bytes before it overflows */

/* Bit 0 :   */
#define UARTE_EVENTS_RTS_EVENTS_RTS_Pos (0UL) /*!< Position of EVENTS_RTS field. */
#define UARTE_EVENTS_RTS_EVENTS_RTS_Msk (0x1UL << UARTE_EVENTS_RTS_EVENTS_RTS_Pos) /*!< Bit mask of EVENTS_RTS field. */

/* Register: UARTE_EVENTS_TXSTOPPED */
/* Description: Transmitter stopped */

/* Bit 0 :   */
#define UARTE_EVENTS_TXSTOPPED_EVENTS_TXSTOPPED_Pos (0UL) /*!< Position of EVENTS_TXSTOPPED field. */
#define UARTE_EVENTS_TXSTOPPED_EVENTS_TXSTOPPED_Msk (0x1UL << UARTE_EVENTS_TXSTOPPED_EVENTS_TXSTOPPED_Pos) /*!< Bit mask of EVENTS_TXSTOPPED field. */

/* Register: UARTE_SHORTS */
/* Description: Shortcut register */

/* Bit 6 : Shortcut between ENDRX event and STOPRX task */
#define UARTE_SHORTS_ENDRX_STOPRX_Pos (6UL) /*!< Position of ENDRX_STOPRX field. */
#define UARTE_SHORTS_ENDRX_STOPRX_Msk (0x1UL << UARTE_SHORTS_ENDRX_STOPRX_Pos) /*!< Bit mask of ENDRX_STOPRX field. */
#define UARTE_SHORTS_ENDRX_STOPRX_Disabled (0UL) /*!< Disable shortcut */
#define UARTE_SHORTS_ENDRX_STOPRX_Enabled (1UL) /*!< Enable shortcut */

/* Bit 5 : Shortcut between ENDRX event and STARTRX task */
#define UARTE_SHORTS_ENDRX_STARTRX_Pos (5UL) /*!< Position of ENDRX_STARTRX field. */
#define UARTE_SHORTS_ENDRX_STARTRX_Msk (0x1UL << UARTE_SHORTS_ENDRX_STARTRX_Pos) /*!< Bit mask of ENDRX_STARTRX field. */
#define UARTE_SHORTS_ENDRX_STARTRX_Disabled (0UL) /*!< Disable shortcut */
#define UARTE_SHORTS_ENDRX_STARTRX_Enabled (1UL) /*!< Enable shortcut */

/* Bit 4 : Shortcut between NCTS event and STOPRX task */
#define UARTE_SHORTS_NCTS_STOPRX_Pos (4UL) /*!< Position of NCTS_STOPRX field. */
#define UARTE_SHORTS_NCTS_STOPRX_Msk (0x1UL << UARTE_SHORTS_NCTS_STOPRX_Pos) /*!< Bit mask of NCTS_STOPRX field. */
#define UARTE_SHORTS_NCTS_STOPRX_Disabled (0UL) /*!< Disable shortcut */
#define UARTE_SHORTS_NCTS_STOPRX_Enabled (1UL) /*!< Enable shortcut */

/* Bit 3 : Shortcut between CTS event and STARTRX task */
#define UARTE_SHORTS_CTS_STARTRX_Pos (3UL) /*!< Position of CTS_STARTRX field. */
#define UARTE_SHORTS_CTS_STARTRX_Msk (0x1UL << UARTE_SHORTS_CTS_STARTRX_Pos) /*!< Bit mask of CTS_STARTRX field. */
#define UARTE_SHORTS_CTS_STARTRX_Disabled (0UL) /*!< Disable shortcut */
#define UARTE_SHORTS_CTS_STARTRX_Enabled (1UL) /*!< Enable shortcut */

/* Register: UARTE_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 22 : Enable or disable interrupt for TXSTOPPED event */
#define UARTE_INTEN_TXSTOPPED_Pos (22UL) /*!< Position of TXSTOPPED field. */
#define UARTE_INTEN_TXSTOPPED_Msk (0x1UL << UARTE_INTEN_TXSTOPPED_Pos) /*!< Bit mask of TXSTOPPED field. */
#define UARTE_INTEN_TXSTOPPED_Disabled (0UL) /*!< Disable */
#define UARTE_INTEN_TXSTOPPED_Enabled (1UL) /*!< Enable */

/* Bit 21 : Enable or disable interrupt for RTS event */
#define UARTE_INTEN_RTS_Pos (21UL) /*!< Position of RTS field. */
#define UARTE_INTEN_RTS_Msk (0x1UL << UARTE_INTEN_RTS_Pos) /*!< Bit mask of RTS field. */
#define UARTE_INTEN_RTS_Disabled (0UL) /*!< Disable */
#define UARTE_INTEN_RTS_Enabled (1UL) /*!< Enable */

/* Bit 20 : Enable or disable interrupt for TXSTARTED event */
#define UARTE_INTEN_TXSTARTED_Pos (20UL) /*!< Position of TXSTARTED field. */
#define UARTE_INTEN_TXSTARTED_Msk (0x1UL << UARTE_INTEN_TXSTARTED_Pos) /*!< Bit mask of TXSTARTED field. */
#define UARTE_INTEN_TXSTARTED_Disabled (0UL) /*!< Disable */
#define UARTE_INTEN_TXSTARTED_Enabled (1UL) /*!< Enable */

/* Bit 19 : Enable or disable interrupt for RXSTARTED event */
#define UARTE_INTEN_RXSTARTED_Pos (19UL) /*!< Position of RXSTARTED field. */
#define UARTE_INTEN_RXSTARTED_Msk (0x1UL << UARTE_INTEN_RXSTARTED_Pos) /*!< Bit mask of RXSTARTED field. */
#define UARTE_INTEN_RXSTARTED_Disabled (0UL) /*!< Disable */
#define UARTE_INTEN_RXSTARTED_Enabled (1UL) /*!< Enable */

/* Bit 17 : Enable or disable interrupt for RXTO event */
#define UARTE_INTEN_RXTO_Pos (17UL) /*!< Position of RXTO field. */
#define UARTE_INTEN_RXTO_Msk (0x1UL << UARTE_INTEN_RXTO_Pos) /*!< Bit mask of RXTO field. */
#define UARTE_INTEN_RXTO_Disabled (0UL) /*!< Disable */
#define UARTE_INTEN_RXTO_Enabled (1UL) /*!< Enable */

/* Bit 9 : Enable or disable interrupt for ERROR event */
#define UARTE_INTEN_ERROR_Pos (9UL) /*!< Position of ERROR field. */
#define UARTE_INTEN_ERROR_Msk (0x1UL << UARTE_INTEN_ERROR_Pos) /*!< Bit mask of ERROR field. */
#define UARTE_INTEN_ERROR_Disabled (0UL) /*!< Disable */
#define UARTE_INTEN_ERROR_Enabled (1UL) /*!< Enable */

/* Bit 8 : Enable or disable interrupt for ENDTX event */
#define UARTE_INTEN_ENDTX_Pos (8UL) /*!< Position of ENDTX field. */
#define UARTE_INTEN_ENDTX_Msk (0x1UL << UARTE_INTEN_ENDTX_Pos) /*!< Bit mask of ENDTX field. */
#define UARTE_INTEN_ENDTX_Disabled (0UL) /*!< Disable */
#define UARTE_INTEN_ENDTX_Enabled (1UL) /*!< Enable */

/* Bit 7 : Enable or disable interrupt for TXDRDY event */
#define UARTE_INTEN_TXDRDY_Pos (7UL) /*!< Position of TXDRDY field. */
#define UARTE_INTEN_TXDRDY_Msk (0x1UL << UARTE_INTEN_TXDRDY_Pos) /*!< Bit mask of TXDRDY field. */
#define UARTE_INTEN_TXDRDY_Disabled (0UL) /*!< Disable */
#define UARTE_INTEN_TXDRDY_Enabled (1UL) /*!< Enable */

/* Bit 4 : Enable or disable interrupt for ENDRX event */
#define UARTE_INTEN_ENDRX_Pos (4UL) /*!< Position of ENDRX field. */
#define UARTE_INTEN_ENDRX_Msk (0x1UL << UARTE_INTEN_ENDRX_Pos) /*!< Bit mask of ENDRX field. */
#define UARTE_INTEN_ENDRX_Disabled (0UL) /*!< Disable */
#define UARTE_INTEN_ENDRX_Enabled (1UL) /*!< Enable */

/* Bit 2 : Enable or disable interrupt for RXDRDY event */
#define UARTE_INTEN_RXDRDY_Pos (2UL) /*!< Position of RXDRDY field. */
#define UARTE_INTEN_RXDRDY_Msk (0x1UL << UARTE_INTEN_RXDRDY_Pos) /*!< Bit mask of RXDRDY field. */
#define UARTE_INTEN_RXDRDY_Disabled (0UL) /*!< Disable */
#define UARTE_INTEN_RXDRDY_Enabled (1UL) /*!< Enable */

/* Bit 1 : Enable or disable interrupt for NCTS event */
#define UARTE_INTEN_NCTS_Pos (1UL) /*!< Position of NCTS field. */
#define UARTE_INTEN_NCTS_Msk (0x1UL << UARTE_INTEN_NCTS_Pos) /*!< Bit mask of NCTS field. */
#define UARTE_INTEN_NCTS_Disabled (0UL) /*!< Disable */
#define UARTE_INTEN_NCTS_Enabled (1UL) /*!< Enable */

/* Bit 0 : Enable or disable interrupt for CTS event */
#define UARTE_INTEN_CTS_Pos (0UL) /*!< Position of CTS field. */
#define UARTE_INTEN_CTS_Msk (0x1UL << UARTE_INTEN_CTS_Pos) /*!< Bit mask of CTS field. */
#define UARTE_INTEN_CTS_Disabled (0UL) /*!< Disable */
#define UARTE_INTEN_CTS_Enabled (1UL) /*!< Enable */

/* Register: UARTE_INTENSET */
/* Description: Enable interrupt */

/* Bit 22 : Write '1' to enable interrupt for TXSTOPPED event */
#define UARTE_INTENSET_TXSTOPPED_Pos (22UL) /*!< Position of TXSTOPPED field. */
#define UARTE_INTENSET_TXSTOPPED_Msk (0x1UL << UARTE_INTENSET_TXSTOPPED_Pos) /*!< Bit mask of TXSTOPPED field. */
#define UARTE_INTENSET_TXSTOPPED_Disabled (0UL) /*!< Read: Disabled */
#define UARTE_INTENSET_TXSTOPPED_Enabled (1UL) /*!< Read: Enabled */
#define UARTE_INTENSET_TXSTOPPED_Set (1UL) /*!< Enable */

/* Bit 21 : Write '1' to enable interrupt for RTS event */
#define UARTE_INTENSET_RTS_Pos (21UL) /*!< Position of RTS field. */
#define UARTE_INTENSET_RTS_Msk (0x1UL << UARTE_INTENSET_RTS_Pos) /*!< Bit mask of RTS field. */
#define UARTE_INTENSET_RTS_Disabled (0UL) /*!< Read: Disabled */
#define UARTE_INTENSET_RTS_Enabled (1UL) /*!< Read: Enabled */
#define UARTE_INTENSET_RTS_Set (1UL) /*!< Enable */

/* Bit 20 : Write '1' to enable interrupt for TXSTARTED event */
#define UARTE_INTENSET_TXSTARTED_Pos (20UL) /*!< Position of TXSTARTED field. */
#define UARTE_INTENSET_TXSTARTED_Msk (0x1UL << UARTE_INTENSET_TXSTARTED_Pos) /*!< Bit mask of TXSTARTED field. */
#define UARTE_INTENSET_TXSTARTED_Disabled (0UL) /*!< Read: Disabled */
#define UARTE_INTENSET_TXSTARTED_Enabled (1UL) /*!< Read: Enabled */
#define UARTE_INTENSET_TXSTARTED_Set (1UL) /*!< Enable */

/* Bit 19 : Write '1' to enable interrupt for RXSTARTED event */
#define UARTE_INTENSET_RXSTARTED_Pos (19UL) /*!< Position of RXSTARTED field. */
#define UARTE_INTENSET_RXSTARTED_Msk (0x1UL << UARTE_INTENSET_RXSTARTED_Pos) /*!< Bit mask of RXSTARTED field. */
#define UARTE_INTENSET_RXSTARTED_Disabled (0UL) /*!< Read: Disabled */
#define UARTE_INTENSET_RXSTARTED_Enabled (1UL) /*!< Read: Enabled */
#define UARTE_INTENSET_RXSTARTED_Set (1UL) /*!< Enable */

/* Bit 17 : Write '1' to enable interrupt for RXTO event */
#define UARTE_INTENSET_RXTO_Pos (17UL) /*!< Position of RXTO field. */
#define UARTE_INTENSET_RXTO_Msk (0x1UL << UARTE_INTENSET_RXTO_Pos) /*!< Bit mask of RXTO field. */
#define UARTE_INTENSET_RXTO_Disabled (0UL) /*!< Read: Disabled */
#define UARTE_INTENSET_RXTO_Enabled (1UL) /*!< Read: Enabled */
#define UARTE_INTENSET_RXTO_Set (1UL) /*!< Enable */

/* Bit 9 : Write '1' to enable interrupt for ERROR event */
#define UARTE_INTENSET_ERROR_Pos (9UL) /*!< Position of ERROR field. */
#define UARTE_INTENSET_ERROR_Msk (0x1UL << UARTE_INTENSET_ERROR_Pos) /*!< Bit mask of ERROR field. */
#define UARTE_INTENSET_ERROR_Disabled (0UL) /*!< Read: Disabled */
#define UARTE_INTENSET_ERROR_Enabled (1UL) /*!< Read: Enabled */
#define UARTE_INTENSET_ERROR_Set (1UL) /*!< Enable */

/* Bit 8 : Write '1' to enable interrupt for ENDTX event */
#define UARTE_INTENSET_ENDTX_Pos (8UL) /*!< Position of ENDTX field. */
#define UARTE_INTENSET_ENDTX_Msk (0x1UL << UARTE_INTENSET_ENDTX_Pos) /*!< Bit mask of ENDTX field. */
#define UARTE_INTENSET_ENDTX_Disabled (0UL) /*!< Read: Disabled */
#define UARTE_INTENSET_ENDTX_Enabled (1UL) /*!< Read: Enabled */
#define UARTE_INTENSET_ENDTX_Set (1UL) /*!< Enable */

/* Bit 7 : Write '1' to enable interrupt for TXDRDY event */
#define UARTE_INTENSET_TXDRDY_Pos (7UL) /*!< Position of TXDRDY field. */
#define UARTE_INTENSET_TXDRDY_Msk (0x1UL << UARTE_INTENSET_TXDRDY_Pos) /*!< Bit mask of TXDRDY field. */
#define UARTE_INTENSET_TXDRDY_Disabled (0UL) /*!< Read: Disabled */
#define UARTE_INTENSET_TXDRDY_Enabled (1UL) /*!< Read: Enabled */
#define UARTE_INTENSET_TXDRDY_Set (1UL) /*!< Enable */

/* Bit 4 : Write '1' to enable interrupt for ENDRX event */
#define UARTE_INTENSET_ENDRX_Pos (4UL) /*!< Position of ENDRX field. */
#define UARTE_INTENSET_ENDRX_Msk (0x1UL << UARTE_INTENSET_ENDRX_Pos) /*!< Bit mask of ENDRX field. */
#define UARTE_INTENSET_ENDRX_Disabled (0UL) /*!< Read: Disabled */
#define UARTE_INTENSET_ENDRX_Enabled (1UL) /*!< Read: Enabled */
#define UARTE_INTENSET_ENDRX_Set (1UL) /*!< Enable */

/* Bit 2 : Write '1' to enable interrupt for RXDRDY event */
#define UARTE_INTENSET_RXDRDY_Pos (2UL) /*!< Position of RXDRDY field. */
#define UARTE_INTENSET_RXDRDY_Msk (0x1UL << UARTE_INTENSET_RXDRDY_Pos) /*!< Bit mask of RXDRDY field. */
#define UARTE_INTENSET_RXDRDY_Disabled (0UL) /*!< Read: Disabled */
#define UARTE_INTENSET_RXDRDY_Enabled (1UL) /*!< Read: Enabled */
#define UARTE_INTENSET_RXDRDY_Set (1UL) /*!< Enable */

/* Bit 1 : Write '1' to enable interrupt for NCTS event */
#define UARTE_INTENSET_NCTS_Pos (1UL) /*!< Position of NCTS field. */
#define UARTE_INTENSET_NCTS_Msk (0x1UL << UARTE_INTENSET_NCTS_Pos) /*!< Bit mask of NCTS field. */
#define UARTE_INTENSET_NCTS_Disabled (0UL) /*!< Read: Disabled */
#define UARTE_INTENSET_NCTS_Enabled (1UL) /*!< Read: Enabled */
#define UARTE_INTENSET_NCTS_Set (1UL) /*!< Enable */

/* Bit 0 : Write '1' to enable interrupt for CTS event */
#define UARTE_INTENSET_CTS_Pos (0UL) /*!< Position of CTS field. */
#define UARTE_INTENSET_CTS_Msk (0x1UL << UARTE_INTENSET_CTS_Pos) /*!< Bit mask of CTS field. */
#define UARTE_INTENSET_CTS_Disabled (0UL) /*!< Read: Disabled */
#define UARTE_INTENSET_CTS_Enabled (1UL) /*!< Read: Enabled */
#define UARTE_INTENSET_CTS_Set (1UL) /*!< Enable */

/* Register: UARTE_INTENCLR */
/* Description: Disable interrupt */

/* Bit 22 : Write '1' to disable interrupt for TXSTOPPED event */
#define UARTE_INTENCLR_TXSTOPPED_Pos (22UL) /*!< Position of TXSTOPPED field. */
#define UARTE_INTENCLR_TXSTOPPED_Msk (0x1UL << UARTE_INTENCLR_TXSTOPPED_Pos) /*!< Bit mask of TXSTOPPED field. */
#define UARTE_INTENCLR_TXSTOPPED_Disabled (0UL) /*!< Read: Disabled */
#define UARTE_INTENCLR_TXSTOPPED_Enabled (1UL) /*!< Read: Enabled */
#define UARTE_INTENCLR_TXSTOPPED_Clear (1UL) /*!< Disable */

/* Bit 21 : Write '1' to disable interrupt for RTS event */
#define UARTE_INTENCLR_RTS_Pos (21UL) /*!< Position of RTS field. */
#define UARTE_INTENCLR_RTS_Msk (0x1UL << UARTE_INTENCLR_RTS_Pos) /*!< Bit mask of RTS field. */
#define UARTE_INTENCLR_RTS_Disabled (0UL) /*!< Read: Disabled */
#define UARTE_INTENCLR_RTS_Enabled (1UL) /*!< Read: Enabled */
#define UARTE_INTENCLR_RTS_Clear (1UL) /*!< Disable */

/* Bit 20 : Write '1' to disable interrupt for TXSTARTED event */
#define UARTE_INTENCLR_TXSTARTED_Pos (20UL) /*!< Position of TXSTARTED field. */
#define UARTE_INTENCLR_TXSTARTED_Msk (0x1UL << UARTE_INTENCLR_TXSTARTED_Pos) /*!< Bit mask of TXSTARTED field. */
#define UARTE_INTENCLR_TXSTARTED_Disabled (0UL) /*!< Read: Disabled */
#define UARTE_INTENCLR_TXSTARTED_Enabled (1UL) /*!< Read: Enabled */
#define UARTE_INTENCLR_TXSTARTED_Clear (1UL) /*!< Disable */

/* Bit 19 : Write '1' to disable interrupt for RXSTARTED event */
#define UARTE_INTENCLR_RXSTARTED_Pos (19UL) /*!< Position of RXSTARTED field. */
#define UARTE_INTENCLR_RXSTARTED_Msk (0x1UL << UARTE_INTENCLR_RXSTARTED_Pos) /*!< Bit mask of RXSTARTED field. */
#define UARTE_INTENCLR_RXSTARTED_Disabled (0UL) /*!< Read: Disabled */
#define UARTE_INTENCLR_RXSTARTED_Enabled (1UL) /*!< Read: Enabled */
#define UARTE_INTENCLR_RXSTARTED_Clear (1UL) /*!< Disable */

/* Bit 17 : Write '1' to disable interrupt for RXTO event */
#define UARTE_INTENCLR_RXTO_Pos (17UL) /*!< Position of RXTO field. */
#define UARTE_INTENCLR_RXTO_Msk (0x1UL << UARTE_INTENCLR_RXTO_Pos) /*!< Bit mask of RXTO field. */
#define UARTE_INTENCLR_RXTO_Disabled (0UL) /*!< Read: Disabled */
#define UARTE_INTENCLR_RXTO_Enabled (1UL) /*!< Read: Enabled */
#define UARTE_INTENCLR_RXTO_Clear (1UL) /*!< Disable */

/* Bit 9 : Write '1' to disable interrupt for ERROR event */
#define UARTE_INTENCLR_ERROR_Pos (9UL) /*!< Position of ERROR field. */
#define UARTE_INTENCLR_ERROR_Msk (0x1UL << UARTE_INTENCLR_ERROR_Pos) /*!< Bit mask of ERROR field. */
#define UARTE_INTENCLR_ERROR_Disabled (0UL) /*!< Read: Disabled */
#define UARTE_INTENCLR_ERROR_Enabled (1UL) /*!< Read: Enabled */
#define UARTE_INTENCLR_ERROR_Clear (1UL) /*!< Disable */

/* Bit 8 : Write '1' to disable interrupt for ENDTX event */
#define UARTE_INTENCLR_ENDTX_Pos (8UL) /*!< Position of ENDTX field. */
#define UARTE_INTENCLR_ENDTX_Msk (0x1UL << UARTE_INTENCLR_ENDTX_Pos) /*!< Bit mask of ENDTX field. */
#define UARTE_INTENCLR_ENDTX_Disabled (0UL) /*!< Read: Disabled */
#define UARTE_INTENCLR_ENDTX_Enabled (1UL) /*!< Read: Enabled */
#define UARTE_INTENCLR_ENDTX_Clear (1UL) /*!< Disable */

/* Bit 7 : Write '1' to disable interrupt for TXDRDY event */
#define UARTE_INTENCLR_TXDRDY_Pos (7UL) /*!< Position of TXDRDY field. */
#define UARTE_INTENCLR_TXDRDY_Msk (0x1UL << UARTE_INTENCLR_TXDRDY_Pos) /*!< Bit mask of TXDRDY field. */
#define UARTE_INTENCLR_TXDRDY_Disabled (0UL) /*!< Read: Disabled */
#define UARTE_INTENCLR_TXDRDY_Enabled (1UL) /*!< Read: Enabled */
#define UARTE_INTENCLR_TXDRDY_Clear (1UL) /*!< Disable */

/* Bit 4 : Write '1' to disable interrupt for ENDRX event */
#define UARTE_INTENCLR_ENDRX_Pos (4UL) /*!< Position of ENDRX field. */
#define UARTE_INTENCLR_ENDRX_Msk (0x1UL << UARTE_INTENCLR_ENDRX_Pos) /*!< Bit mask of ENDRX field. */
#define UARTE_INTENCLR_ENDRX_Disabled (0UL) /*!< Read: Disabled */
#define UARTE_INTENCLR_ENDRX_Enabled (1UL) /*!< Read: Enabled */
#define UARTE_INTENCLR_ENDRX_Clear (1UL) /*!< Disable */

/* Bit 2 : Write '1' to disable interrupt for RXDRDY event */
#define UARTE_INTENCLR_RXDRDY_Pos (2UL) /*!< Position of RXDRDY field. */
#define UARTE_INTENCLR_RXDRDY_Msk (0x1UL << UARTE_INTENCLR_RXDRDY_Pos) /*!< Bit mask of RXDRDY field. */
#define UARTE_INTENCLR_RXDRDY_Disabled (0UL) /*!< Read: Disabled */
#define UARTE_INTENCLR_RXDRDY_Enabled (1UL) /*!< Read: Enabled */
#define UARTE_INTENCLR_RXDRDY_Clear (1UL) /*!< Disable */

/* Bit 1 : Write '1' to disable interrupt for NCTS event */
#define UARTE_INTENCLR_NCTS_Pos (1UL) /*!< Position of NCTS field. */
#define UARTE_INTENCLR_NCTS_Msk (0x1UL << UARTE_INTENCLR_NCTS_Pos) /*!< Bit mask of NCTS field. */
#define UARTE_INTENCLR_NCTS_Disabled (0UL) /*!< Read: Disabled */
#define UARTE_INTENCLR_NCTS_Enabled (1UL) /*!< Read: Enabled */
#define UARTE_INTENCLR_NCTS_Clear (1UL) /*!< Disable */

/* Bit 0 : Write '1' to disable interrupt for CTS event */
#define UARTE_INTENCLR_CTS_Pos (0UL) /*!< Position of CTS field. */
#define UARTE_INTENCLR_CTS_Msk (0x1UL << UARTE_INTENCLR_CTS_Pos) /*!< Bit mask of CTS field. */
#define UARTE_INTENCLR_CTS_Disabled (0UL) /*!< Read: Disabled */
#define UARTE_INTENCLR_CTS_Enabled (1UL) /*!< Read: Enabled */
#define UARTE_INTENCLR_CTS_Clear (1UL) /*!< Disable */

/* Register: UARTE_ERRORSRC */
/* Description: Error source Note : this register is read / write one to clear. */

/* Bit 3 : Break condition */
#define UARTE_ERRORSRC_BREAK_Pos (3UL) /*!< Position of BREAK field. */
#define UARTE_ERRORSRC_BREAK_Msk (0x1UL << UARTE_ERRORSRC_BREAK_Pos) /*!< Bit mask of BREAK field. */
#define UARTE_ERRORSRC_BREAK_NotPresent (0UL) /*!< Read: error not present */
#define UARTE_ERRORSRC_BREAK_Present (1UL) /*!< Read: error present */

/* Bit 2 : Framing error occurred */
#define UARTE_ERRORSRC_FRAMING_Pos (2UL) /*!< Position of FRAMING field. */
#define UARTE_ERRORSRC_FRAMING_Msk (0x1UL << UARTE_ERRORSRC_FRAMING_Pos) /*!< Bit mask of FRAMING field. */
#define UARTE_ERRORSRC_FRAMING_NotPresent (0UL) /*!< Read: error not present */
#define UARTE_ERRORSRC_FRAMING_Present (1UL) /*!< Read: error present */

/* Bit 1 : Parity error */
#define UARTE_ERRORSRC_PARITY_Pos (1UL) /*!< Position of PARITY field. */
#define UARTE_ERRORSRC_PARITY_Msk (0x1UL << UARTE_ERRORSRC_PARITY_Pos) /*!< Bit mask of PARITY field. */
#define UARTE_ERRORSRC_PARITY_NotPresent (0UL) /*!< Read: error not present */
#define UARTE_ERRORSRC_PARITY_Present (1UL) /*!< Read: error present */

/* Bit 0 : Overrun error */
#define UARTE_ERRORSRC_OVERRUN_Pos (0UL) /*!< Position of OVERRUN field. */
#define UARTE_ERRORSRC_OVERRUN_Msk (0x1UL << UARTE_ERRORSRC_OVERRUN_Pos) /*!< Bit mask of OVERRUN field. */
#define UARTE_ERRORSRC_OVERRUN_NotPresent (0UL) /*!< Read: error not present */
#define UARTE_ERRORSRC_OVERRUN_Present (1UL) /*!< Read: error present */

/* Register: UARTE_ENABLE */
/* Description: Enable UART */

/* Bits 3..0 : Enable or disable UARTE */
#define UARTE_ENABLE_ENABLE_Pos (0UL) /*!< Position of ENABLE field. */
#define UARTE_ENABLE_ENABLE_Msk (0xFUL << UARTE_ENABLE_ENABLE_Pos) /*!< Bit mask of ENABLE field. */
#define UARTE_ENABLE_ENABLE_Disabled (0UL) /*!< Disable UARTE */
#define UARTE_ENABLE_ENABLE_Enabled (8UL) /*!< Enable UARTE */

/* Register: UARTE_PSEL_RTS */
/* Description: Pin select for RTS signal */

/* Bit 31 : Connection */
#define UARTE_PSEL_RTS_CONNECT_Pos (31UL) /*!< Position of CONNECT field. */
#define UARTE_PSEL_RTS_CONNECT_Msk (0x1UL << UARTE_PSEL_RTS_CONNECT_Pos) /*!< Bit mask of CONNECT field. */
#define UARTE_PSEL_RTS_CONNECT_Connected (0UL) /*!< Connect */
#define UARTE_PSEL_RTS_CONNECT_Disconnected (1UL) /*!< Disconnect */

/* Bits 4..0 : Pin number */
#define UARTE_PSEL_RTS_PIN_Pos (0UL) /*!< Position of PIN field. */
#define UARTE_PSEL_RTS_PIN_Msk (0x1FUL << UARTE_PSEL_RTS_PIN_Pos) /*!< Bit mask of PIN field. */

/* Register: UARTE_PSEL_TXD */
/* Description: Pin select for TXD signal */

/* Bit 31 : Connection */
#define UARTE_PSEL_TXD_CONNECT_Pos (31UL) /*!< Position of CONNECT field. */
#define UARTE_PSEL_TXD_CONNECT_Msk (0x1UL << UARTE_PSEL_TXD_CONNECT_Pos) /*!< Bit mask of CONNECT field. */
#define UARTE_PSEL_TXD_CONNECT_Connected (0UL) /*!< Connect */
#define UARTE_PSEL_TXD_CONNECT_Disconnected (1UL) /*!< Disconnect */

/* Bits 4..0 : Pin number */
#define UARTE_PSEL_TXD_PIN_Pos (0UL) /*!< Position of PIN field. */
#define UARTE_PSEL_TXD_PIN_Msk (0x1FUL << UARTE_PSEL_TXD_PIN_Pos) /*!< Bit mask of PIN field. */

/* Register: UARTE_PSEL_CTS */
/* Description: Pin select for CTS signal */

/* Bit 31 : Connection */
#define UARTE_PSEL_CTS_CONNECT_Pos (31UL) /*!< Position of CONNECT field. */
#define UARTE_PSEL_CTS_CONNECT_Msk (0x1UL << UARTE_PSEL_CTS_CONNECT_Pos) /*!< Bit mask of CONNECT field. */
#define UARTE_PSEL_CTS_CONNECT_Connected (0UL) /*!< Connect */
#define UARTE_PSEL_CTS_CONNECT_Disconnected (1UL) /*!< Disconnect */

/* Bits 4..0 : Pin number */
#define UARTE_PSEL_CTS_PIN_Pos (0UL) /*!< Position of PIN field. */
#define UARTE_PSEL_CTS_PIN_Msk (0x1FUL << UARTE_PSEL_CTS_PIN_Pos) /*!< Bit mask of PIN field. */

/* Register: UARTE_PSEL_RXD */
/* Description: Pin select for RXD signal */

/* Bit 31 : Connection */
#define UARTE_PSEL_RXD_CONNECT_Pos (31UL) /*!< Position of CONNECT field. */
#define UARTE_PSEL_RXD_CONNECT_Msk (0x1UL << UARTE_PSEL_RXD_CONNECT_Pos) /*!< Bit mask of CONNECT field. */
#define UARTE_PSEL_RXD_CONNECT_Connected (0UL) /*!< Connect */
#define UARTE_PSEL_RXD_CONNECT_Disconnected (1UL) /*!< Disconnect */

/* Bits 4..0 : Pin number */
#define UARTE_PSEL_RXD_PIN_Pos (0UL) /*!< Position of PIN field. */
#define UARTE_PSEL_RXD_PIN_Msk (0x1FUL << UARTE_PSEL_RXD_PIN_Pos) /*!< Bit mask of PIN field. */

/* Register: UARTE_BAUDRATE */
/* Description: Baud rate. Accuracy depends on the HFCLK source selected. */

/* Bits 31..0 : Baud rate */
#define UARTE_BAUDRATE_BAUDRATE_Pos (0UL) /*!< Position of BAUDRATE field. */
#define UARTE_BAUDRATE_BAUDRATE_Msk (0xFFFFFFFFUL << UARTE_BAUDRATE_BAUDRATE_Pos) /*!< Bit mask of BAUDRATE field. */
#define UARTE_BAUDRATE_BAUDRATE_Baud1200 (0x0004F000UL) /*!< 1200 baud (actual rate: 1205) */
#define UARTE_BAUDRATE_BAUDRATE_Baud2400 (0x0009D000UL) /*!< 2400 baud (actual rate: 2396) */
#define UARTE_BAUDRATE_BAUDRATE_Baud4800 (0x0013B000UL) /*!< 4800 baud (actual rate: 4808) */
#define UARTE_BAUDRATE_BAUDRATE_Baud9600 (0x00275000UL) /*!< 9600 baud (actual rate: 9598) */
#define UARTE_BAUDRATE_BAUDRATE_Baud14400 (0x003AF000UL) /*!< 14400 baud (actual rate: 14401) */
#define UARTE_BAUDRATE_BAUDRATE_Baud19200 (0x004EA000UL) /*!< 19200 baud (actual rate: 19208) */
#define UARTE_BAUDRATE_BAUDRATE_Baud28800 (0x0075C000UL) /*!< 28800 baud (actual rate: 28777) */
#define UARTE_BAUDRATE_BAUDRATE_Baud31250 (0x00800000UL) /*!< 31250 baud */
#define UARTE_BAUDRATE_BAUDRATE_Baud38400 (0x009D0000UL) /*!< 38400 baud (actual rate: 38369) */
#define UARTE_BAUDRATE_BAUDRATE_Baud56000 (0x00E50000UL) /*!< 56000 baud (actual rate: 55944) */
#define UARTE_BAUDRATE_BAUDRATE_Baud57600 (0x00EB0000UL) /*!< 57600 baud (actual rate: 57554) */
#define UARTE_BAUDRATE_BAUDRATE_Baud76800 (0x013A9000UL) /*!< 76800 baud (actual rate: 76923) */
#define UARTE_BAUDRATE_BAUDRATE_Baud115200 (0x01D60000UL) /*!< 115200 baud (actual rate: 115108) */
#define UARTE_BAUDRATE_BAUDRATE_Baud230400 (0x03B00000UL) /*!< 230400 baud (actual rate: 231884) */
#define UARTE_BAUDRATE_BAUDRATE_Baud250000 (0x04000000UL) /*!< 250000 baud */
#define UARTE_BAUDRATE_BAUDRATE_Baud460800 (0x07400000UL) /*!< 460800 baud (actual rate: 457143) */
#define UARTE_BAUDRATE_BAUDRATE_Baud921600 (0x0F000000UL) /*!< 921600 baud (actual rate: 941176) */
#define UARTE_BAUDRATE_BAUDRATE_Baud1M (0x10000000UL) /*!< 1Mega baud */

/* Register: UARTE_RXD_PTR */
/* Description: Data pointer */

/* Bits 31..0 : Data pointer */
#define UARTE_RXD_PTR_PTR_Pos (0UL) /*!< Position of PTR field. */
#define UARTE_RXD_PTR_PTR_Msk (0xFFFFFFFFUL << UARTE_RXD_PTR_PTR_Pos) /*!< Bit mask of PTR field. */

/* Register: UARTE_RXD_MAXCNT */
/* Description: Maximum number of bytes in receive buffer */

/* Bits 9..0 : Maximum number of bytes in receive buffer */
#define UARTE_RXD_MAXCNT_MAXCNT_Pos (0UL) /*!< Position of MAXCNT field. */
#define UARTE_RXD_MAXCNT_MAXCNT_Msk (0x3FFUL << UARTE_RXD_MAXCNT_MAXCNT_Pos) /*!< Bit mask of MAXCNT field. */

/* Register: UARTE_RXD_AMOUNT */
/* Description: Number of bytes transferred in the last transaction */

/* Bits 9..0 : Number of bytes transferred in the last transaction */
#define UARTE_RXD_AMOUNT_AMOUNT_Pos (0UL) /*!< Position of AMOUNT field. */
#define UARTE_RXD_AMOUNT_AMOUNT_Msk (0x3FFUL << UARTE_RXD_AMOUNT_AMOUNT_Pos) /*!< Bit mask of AMOUNT field. */

/* Register: UARTE_TXD_PTR */
/* Description: Data pointer */

/* Bits 31..0 : Data pointer */
#define UARTE_TXD_PTR_PTR_Pos (0UL) /*!< Position of PTR field. */
#define UARTE_TXD_PTR_PTR_Msk (0xFFFFFFFFUL << UARTE_TXD_PTR_PTR_Pos) /*!< Bit mask of PTR field. */

/* Register: UARTE_TXD_MAXCNT */
/* Description: Maximum number of bytes in transmit buffer */

/* Bits 9..0 : Maximum number of bytes in transmit buffer */
#define UARTE_TXD_MAXCNT_MAXCNT_Pos (0UL) /*!< Position of MAXCNT field. */
#define UARTE_TXD_MAXCNT_MAXCNT_Msk (0x3FFUL << UARTE_TXD_MAXCNT_MAXCNT_Pos) /*!< Bit mask of MAXCNT field. */

/* Register: UARTE_TXD_AMOUNT */
/* Description: Number of bytes transferred in the last transaction */

/* Bits 9..0 : Number of bytes transferred in the last transaction */
#define UARTE_TXD_AMOUNT_AMOUNT_Pos (0UL) /*!< Position of AMOUNT field. */
#define UARTE_TXD_AMOUNT_AMOUNT_Msk (0x3FFUL << UARTE_TXD_AMOUNT_AMOUNT_Pos) /*!< Bit mask of AMOUNT field. */

/* Register: UARTE_CONFIG */
/* Description: Configuration of parity and hardware flow control */

/* Bit 4 : Stop bits */
#define UARTE_CONFIG_STOP_Pos (4UL) /*!< Position of STOP field. */
#define UARTE_CONFIG_STOP_Msk (0x1UL << UARTE_CONFIG_STOP_Pos) /*!< Bit mask of STOP field. */
#define UARTE_CONFIG_STOP_One (0UL) /*!< One stop bit */
#define UARTE_CONFIG_STOP_Two (1UL) /*!< Two stop bits */

/* Bits 3..1 : Parity */
#define UARTE_CONFIG_PARITY_Pos (1UL) /*!< Position of PARITY field. */
#define UARTE_CONFIG_PARITY_Msk (0x7UL << UARTE_CONFIG_PARITY_Pos) /*!< Bit mask of PARITY field. */
#define UARTE_CONFIG_PARITY_Excluded (0x0UL) /*!< Exclude parity bit */
#define UARTE_CONFIG_PARITY_Included (0x7UL) /*!< Include even parity bit */

/* Bit 0 : Hardware flow control */
#define UARTE_CONFIG_HWFC_Pos (0UL) /*!< Position of HWFC field. */
#define UARTE_CONFIG_HWFC_Msk (0x1UL << UARTE_CONFIG_HWFC_Pos) /*!< Bit mask of HWFC field. */
#define UARTE_CONFIG_HWFC_Disabled (0UL) /*!< Disabled */
#define UARTE_CONFIG_HWFC_Enabled (1UL) /*!< Enabled */

/* Register: UARTE_POWER */
/* Description: Peripheral power control */

/* Bit 0 : Peripheral power control. The peripheral and its registers will be reset to its initial state by switching the peripheral off and then back on again. */
#define UARTE_POWER_POWER_Pos (0UL) /*!< Position of POWER field. */
#define UARTE_POWER_POWER_Msk (0x1UL << UARTE_POWER_POWER_Pos) /*!< Bit mask of POWER field. */
#define UARTE_POWER_POWER_Disabled (0UL) /*!< Peripheral is powered off */
#define UARTE_POWER_POWER_Enabled (1UL) /*!< Peripheral is powered on */


/* Peripheral: UICR */
/* Description: User information configuration registers */

/* Register: UICR_NRFFW */
/* Description: Description collection[n]: Reserved for Nordic firmware design */

/* Bits 31..0 : Reserved for Nordic firmware design */
#define UICR_NRFFW_NRFFW_Pos (0UL) /*!< Position of NRFFW field. */
#define UICR_NRFFW_NRFFW_Msk (0xFFFFFFFFUL << UICR_NRFFW_NRFFW_Pos) /*!< Bit mask of NRFFW field. */

/* Register: UICR_NRFHW */
/* Description: Description collection[n]: Reserved for Nordic hardware design */

/* Bits 31..0 : Reserved for Nordic hardware design */
#define UICR_NRFHW_NRFHW_Pos (0UL) /*!< Position of NRFHW field. */
#define UICR_NRFHW_NRFHW_Msk (0xFFFFFFFFUL << UICR_NRFHW_NRFHW_Pos) /*!< Bit mask of NRFHW field. */

/* Register: UICR_CUSTOMER */
/* Description: Description collection[n]: Reserved for customer */

/* Bits 31..0 : Reserved for customer */
#define UICR_CUSTOMER_CUSTOMER_Pos (0UL) /*!< Position of CUSTOMER field. */
#define UICR_CUSTOMER_CUSTOMER_Msk (0xFFFFFFFFUL << UICR_CUSTOMER_CUSTOMER_Pos) /*!< Bit mask of CUSTOMER field. */

/* Register: UICR_PSELRESET */
/* Description: Description collection[n]: Mapping of the nRESET function (see POWER chapter for details) */

/* Bit 31 : Connection */
#define UICR_PSELRESET_CONNECT_Pos (31UL) /*!< Position of CONNECT field. */
#define UICR_PSELRESET_CONNECT_Msk (0x1UL << UICR_PSELRESET_CONNECT_Pos) /*!< Bit mask of CONNECT field. */
#define UICR_PSELRESET_CONNECT_Connected (0UL) /*!< Connect */
#define UICR_PSELRESET_CONNECT_Disconnected (1UL) /*!< Disconnect */

/* Bits 5..0 : GPIO number P0.n onto which reset is exposed */
#define UICR_PSELRESET_PIN_Pos (0UL) /*!< Position of PIN field. */
#define UICR_PSELRESET_PIN_Msk (0x3FUL << UICR_PSELRESET_PIN_Pos) /*!< Bit mask of PIN field. */

/* Register: UICR_APPROTECT */
/* Description: Access port protection */

/* Bits 7..0 : Enable or disable access port protection. */
#define UICR_APPROTECT_PALL_Pos (0UL) /*!< Position of PALL field. */
#define UICR_APPROTECT_PALL_Msk (0xFFUL << UICR_APPROTECT_PALL_Pos) /*!< Bit mask of PALL field. */
#define UICR_APPROTECT_PALL_Enabled (0x00UL) /*!< Enable */
#define UICR_APPROTECT_PALL_Disabled (0xFFUL) /*!< Disable */


/* Peripheral: WDT */
/* Description: Watchdog Timer */

/* Register: WDT_TASKS_START */
/* Description: Start the watchdog */

/* Bit 0 :   */
#define WDT_TASKS_START_TASKS_START_Pos (0UL) /*!< Position of TASKS_START field. */
#define WDT_TASKS_START_TASKS_START_Msk (0x1UL << WDT_TASKS_START_TASKS_START_Pos) /*!< Bit mask of TASKS_START field. */

/* Register: WDT_TASKS_STOP */
/* Description: Stop the watchdog timer. Only available in timer mode. */

/* Bit 0 :   */
#define WDT_TASKS_STOP_TASKS_STOP_Pos (0UL) /*!< Position of TASKS_STOP field. */
#define WDT_TASKS_STOP_TASKS_STOP_Msk (0x1UL << WDT_TASKS_STOP_TASKS_STOP_Pos) /*!< Bit mask of TASKS_STOP field. */

/* Register: WDT_EVENTS_TIMEOUT */
/* Description: Watchdog timeout */

/* Bit 0 :   */
#define WDT_EVENTS_TIMEOUT_EVENTS_TIMEOUT_Pos (0UL) /*!< Position of EVENTS_TIMEOUT field. */
#define WDT_EVENTS_TIMEOUT_EVENTS_TIMEOUT_Msk (0x1UL << WDT_EVENTS_TIMEOUT_EVENTS_TIMEOUT_Pos) /*!< Bit mask of EVENTS_TIMEOUT field. */

/* Register: WDT_INTENSET */
/* Description: Enable interrupt */

/* Bit 0 : Write '1' to enable interrupt for TIMEOUT event */
#define WDT_INTENSET_TIMEOUT_Pos (0UL) /*!< Position of TIMEOUT field. */
#define WDT_INTENSET_TIMEOUT_Msk (0x1UL << WDT_INTENSET_TIMEOUT_Pos) /*!< Bit mask of TIMEOUT field. */
#define WDT_INTENSET_TIMEOUT_Disabled (0UL) /*!< Read: Disabled */
#define WDT_INTENSET_TIMEOUT_Enabled (1UL) /*!< Read: Enabled */
#define WDT_INTENSET_TIMEOUT_Set (1UL) /*!< Enable */

/* Register: WDT_INTENCLR */
/* Description: Disable interrupt */

/* Bit 0 : Write '1' to disable interrupt for TIMEOUT event */
#define WDT_INTENCLR_TIMEOUT_Pos (0UL) /*!< Position of TIMEOUT field. */
#define WDT_INTENCLR_TIMEOUT_Msk (0x1UL << WDT_INTENCLR_TIMEOUT_Pos) /*!< Bit mask of TIMEOUT field. */
#define WDT_INTENCLR_TIMEOUT_Disabled (0UL) /*!< Read: Disabled */
#define WDT_INTENCLR_TIMEOUT_Enabled (1UL) /*!< Read: Enabled */
#define WDT_INTENCLR_TIMEOUT_Clear (1UL) /*!< Disable */

/* Register: WDT_RUNSTATUS */
/* Description: Run status */

/* Bit 0 : Indicates whether or not the watchdog is running */
#define WDT_RUNSTATUS_RUNSTATUS_Pos (0UL) /*!< Position of RUNSTATUS field. */
#define WDT_RUNSTATUS_RUNSTATUS_Msk (0x1UL << WDT_RUNSTATUS_RUNSTATUS_Pos) /*!< Bit mask of RUNSTATUS field. */
#define WDT_RUNSTATUS_RUNSTATUS_NotRunning (0UL) /*!< Watchdog not running */
#define WDT_RUNSTATUS_RUNSTATUS_Running (1UL) /*!< Watchdog is running */

/* Register: WDT_REQSTATUS */
/* Description: Request status */

/* Bit 7 : Request status for RR[7] register */
#define WDT_REQSTATUS_RR7_Pos (7UL) /*!< Position of RR7 field. */
#define WDT_REQSTATUS_RR7_Msk (0x1UL << WDT_REQSTATUS_RR7_Pos) /*!< Bit mask of RR7 field. */
#define WDT_REQSTATUS_RR7_DisabledOrRequested (0UL) /*!< RR[7] register is not enabled, or are already requesting reload */
#define WDT_REQSTATUS_RR7_EnabledAndUnrequested (1UL) /*!< RR[7] register is enabled, and are not yet requesting reload */

/* Bit 6 : Request status for RR[6] register */
#define WDT_REQSTATUS_RR6_Pos (6UL) /*!< Position of RR6 field. */
#define WDT_REQSTATUS_RR6_Msk (0x1UL << WDT_REQSTATUS_RR6_Pos) /*!< Bit mask of RR6 field. */
#define WDT_REQSTATUS_RR6_DisabledOrRequested (0UL) /*!< RR[6] register is not enabled, or are already requesting reload */
#define WDT_REQSTATUS_RR6_EnabledAndUnrequested (1UL) /*!< RR[6] register is enabled, and are not yet requesting reload */

/* Bit 5 : Request status for RR[5] register */
#define WDT_REQSTATUS_RR5_Pos (5UL) /*!< Position of RR5 field. */
#define WDT_REQSTATUS_RR5_Msk (0x1UL << WDT_REQSTATUS_RR5_Pos) /*!< Bit mask of RR5 field. */
#define WDT_REQSTATUS_RR5_DisabledOrRequested (0UL) /*!< RR[5] register is not enabled, or are already requesting reload */
#define WDT_REQSTATUS_RR5_EnabledAndUnrequested (1UL) /*!< RR[5] register is enabled, and are not yet requesting reload */

/* Bit 4 : Request status for RR[4] register */
#define WDT_REQSTATUS_RR4_Pos (4UL) /*!< Position of RR4 field. */
#define WDT_REQSTATUS_RR4_Msk (0x1UL << WDT_REQSTATUS_RR4_Pos) /*!< Bit mask of RR4 field. */
#define WDT_REQSTATUS_RR4_DisabledOrRequested (0UL) /*!< RR[4] register is not enabled, or are already requesting reload */
#define WDT_REQSTATUS_RR4_EnabledAndUnrequested (1UL) /*!< RR[4] register is enabled, and are not yet requesting reload */

/* Bit 3 : Request status for RR[3] register */
#define WDT_REQSTATUS_RR3_Pos (3UL) /*!< Position of RR3 field. */
#define WDT_REQSTATUS_RR3_Msk (0x1UL << WDT_REQSTATUS_RR3_Pos) /*!< Bit mask of RR3 field. */
#define WDT_REQSTATUS_RR3_DisabledOrRequested (0UL) /*!< RR[3] register is not enabled, or are already requesting reload */
#define WDT_REQSTATUS_RR3_EnabledAndUnrequested (1UL) /*!< RR[3] register is enabled, and are not yet requesting reload */

/* Bit 2 : Request status for RR[2] register */
#define WDT_REQSTATUS_RR2_Pos (2UL) /*!< Position of RR2 field. */
#define WDT_REQSTATUS_RR2_Msk (0x1UL << WDT_REQSTATUS_RR2_Pos) /*!< Bit mask of RR2 field. */
#define WDT_REQSTATUS_RR2_DisabledOrRequested (0UL) /*!< RR[2] register is not enabled, or are already requesting reload */
#define WDT_REQSTATUS_RR2_EnabledAndUnrequested (1UL) /*!< RR[2] register is enabled, and are not yet requesting reload */

/* Bit 1 : Request status for RR[1] register */
#define WDT_REQSTATUS_RR1_Pos (1UL) /*!< Position of RR1 field. */
#define WDT_REQSTATUS_RR1_Msk (0x1UL << WDT_REQSTATUS_RR1_Pos) /*!< Bit mask of RR1 field. */
#define WDT_REQSTATUS_RR1_DisabledOrRequested (0UL) /*!< RR[1] register is not enabled, or are already requesting reload */
#define WDT_REQSTATUS_RR1_EnabledAndUnrequested (1UL) /*!< RR[1] register is enabled, and are not yet requesting reload */

/* Bit 0 : Request status for RR[0] register */
#define WDT_REQSTATUS_RR0_Pos (0UL) /*!< Position of RR0 field. */
#define WDT_REQSTATUS_RR0_Msk (0x1UL << WDT_REQSTATUS_RR0_Pos) /*!< Bit mask of RR0 field. */
#define WDT_REQSTATUS_RR0_DisabledOrRequested (0UL) /*!< RR[0] register is not enabled, or are already requesting reload */
#define WDT_REQSTATUS_RR0_EnabledAndUnrequested (1UL) /*!< RR[0] register is enabled, and are not yet requesting reload */

/* Register: WDT_RCNT */
/* Description: Reload count */

/* Bits 1..0 : Reload count, number of times the watchdog has been reloaded (kicked) */
#define WDT_RCNT_RCNT_Pos (0UL) /*!< Position of RCNT field. */
#define WDT_RCNT_RCNT_Msk (0x3UL << WDT_RCNT_RCNT_Pos) /*!< Bit mask of RCNT field. */

/* Register: WDT_CRV */
/* Description: Counter reload value */

/* Bits 31..0 : Counter reload value in number of cycles of the 32.768 kHz clock */
#define WDT_CRV_CRV_Pos (0UL) /*!< Position of CRV field. */
#define WDT_CRV_CRV_Msk (0xFFFFFFFFUL << WDT_CRV_CRV_Pos) /*!< Bit mask of CRV field. */

/* Register: WDT_RREN */
/* Description: Enable register for reload request registers */

/* Bit 7 : Enable or disable RR[7] register */
#define WDT_RREN_RR7_Pos (7UL) /*!< Position of RR7 field. */
#define WDT_RREN_RR7_Msk (0x1UL << WDT_RREN_RR7_Pos) /*!< Bit mask of RR7 field. */
#define WDT_RREN_RR7_Disabled (0UL) /*!< Disable RR[7] register */
#define WDT_RREN_RR7_Enabled (1UL) /*!< Enable RR[7] register */

/* Bit 6 : Enable or disable RR[6] register */
#define WDT_RREN_RR6_Pos (6UL) /*!< Position of RR6 field. */
#define WDT_RREN_RR6_Msk (0x1UL << WDT_RREN_RR6_Pos) /*!< Bit mask of RR6 field. */
#define WDT_RREN_RR6_Disabled (0UL) /*!< Disable RR[6] register */
#define WDT_RREN_RR6_Enabled (1UL) /*!< Enable RR[6] register */

/* Bit 5 : Enable or disable RR[5] register */
#define WDT_RREN_RR5_Pos (5UL) /*!< Position of RR5 field. */
#define WDT_RREN_RR5_Msk (0x1UL << WDT_RREN_RR5_Pos) /*!< Bit mask of RR5 field. */
#define WDT_RREN_RR5_Disabled (0UL) /*!< Disable RR[5] register */
#define WDT_RREN_RR5_Enabled (1UL) /*!< Enable RR[5] register */

/* Bit 4 : Enable or disable RR[4] register */
#define WDT_RREN_RR4_Pos (4UL) /*!< Position of RR4 field. */
#define WDT_RREN_RR4_Msk (0x1UL << WDT_RREN_RR4_Pos) /*!< Bit mask of RR4 field. */
#define WDT_RREN_RR4_Disabled (0UL) /*!< Disable RR[4] register */
#define WDT_RREN_RR4_Enabled (1UL) /*!< Enable RR[4] register */

/* Bit 3 : Enable or disable RR[3] register */
#define WDT_RREN_RR3_Pos (3UL) /*!< Position of RR3 field. */
#define WDT_RREN_RR3_Msk (0x1UL << WDT_RREN_RR3_Pos) /*!< Bit mask of RR3 field. */
#define WDT_RREN_RR3_Disabled (0UL) /*!< Disable RR[3] register */
#define WDT_RREN_RR3_Enabled (1UL) /*!< Enable RR[3] register */

/* Bit 2 : Enable or disable RR[2] register */
#define WDT_RREN_RR2_Pos (2UL) /*!< Position of RR2 field. */
#define WDT_RREN_RR2_Msk (0x1UL << WDT_RREN_RR2_Pos) /*!< Bit mask of RR2 field. */
#define WDT_RREN_RR2_Disabled (0UL) /*!< Disable RR[2] register */
#define WDT_RREN_RR2_Enabled (1UL) /*!< Enable RR[2] register */

/* Bit 1 : Enable or disable RR[1] register */
#define WDT_RREN_RR1_Pos (1UL) /*!< Position of RR1 field. */
#define WDT_RREN_RR1_Msk (0x1UL << WDT_RREN_RR1_Pos) /*!< Bit mask of RR1 field. */
#define WDT_RREN_RR1_Disabled (0UL) /*!< Disable RR[1] register */
#define WDT_RREN_RR1_Enabled (1UL) /*!< Enable RR[1] register */

/* Bit 0 : Enable or disable RR[0] register */
#define WDT_RREN_RR0_Pos (0UL) /*!< Position of RR0 field. */
#define WDT_RREN_RR0_Msk (0x1UL << WDT_RREN_RR0_Pos) /*!< Bit mask of RR0 field. */
#define WDT_RREN_RR0_Disabled (0UL) /*!< Disable RR[0] register */
#define WDT_RREN_RR0_Enabled (1UL) /*!< Enable RR[0] register */

/* Register: WDT_CONFIG */
/* Description: Configuration register */

/* Bit 5 : Enable or disable possibility to reload the watchdog counter between TIMEOUT and watchdog reset */
#define WDT_CONFIG_RELOAD_Pos (5UL) /*!< Position of RELOAD field. */
#define WDT_CONFIG_RELOAD_Msk (0x1UL << WDT_CONFIG_RELOAD_Pos) /*!< Bit mask of RELOAD field. */
#define WDT_CONFIG_RELOAD_Disabled (0UL) /*!< Disable */
#define WDT_CONFIG_RELOAD_Enabled (1UL) /*!< Enable */

/* Bit 4 : Watchdog operation mode */
#define WDT_CONFIG_MODE_Pos (4UL) /*!< Position of MODE field. */
#define WDT_CONFIG_MODE_Msk (0x1UL << WDT_CONFIG_MODE_Pos) /*!< Bit mask of MODE field. */
#define WDT_CONFIG_MODE_Watchdog (0UL) /*!< Use the watchdog timer as a watchdog */
#define WDT_CONFIG_MODE_Timer (1UL) /*!< Use the watchdog timer as a timer */

/* Bit 3 : Configure the watchdog to either be paused, or kept running, while the CPU is halted by the debugger */
#define WDT_CONFIG_HALT_Pos (3UL) /*!< Position of HALT field. */
#define WDT_CONFIG_HALT_Msk (0x1UL << WDT_CONFIG_HALT_Pos) /*!< Bit mask of HALT field. */
#define WDT_CONFIG_HALT_Pause (0UL) /*!< Pause watchdog while the CPU is halted by the debugger */
#define WDT_CONFIG_HALT_Run (1UL) /*!< Keep the watchdog running while the CPU is halted by the debugger */

/* Bit 1 : Enable or disable override of system OFF mode */
#define WDT_CONFIG_OFF_Pos (1UL) /*!< Position of OFF field. */
#define WDT_CONFIG_OFF_Msk (0x1UL << WDT_CONFIG_OFF_Pos) /*!< Bit mask of OFF field. */
#define WDT_CONFIG_OFF_Disabled (0UL) /*!< No impact on system OFF mode */
#define WDT_CONFIG_OFF_Enabled (1UL) /*!< Prevent system OFF mode when watchdog is running */

/* Bit 0 : Configure the watchdog to either be paused, or kept running, while the CPU is sleeping */
#define WDT_CONFIG_SLEEP_Pos (0UL) /*!< Position of SLEEP field. */
#define WDT_CONFIG_SLEEP_Msk (0x1UL << WDT_CONFIG_SLEEP_Pos) /*!< Bit mask of SLEEP field. */
#define WDT_CONFIG_SLEEP_Pause (0UL) /*!< Pause watchdog while the CPU is sleeping */
#define WDT_CONFIG_SLEEP_Run (1UL) /*!< Keep the watchdog running while the CPU is sleeping */

/* Register: WDT_RR */
/* Description: Description collection[n]: Reload request n */

/* Bits 31..0 : Reload request register */
#define WDT_RR_RR_Pos (0UL) /*!< Position of RR field. */
#define WDT_RR_RR_Msk (0xFFFFFFFFUL << WDT_RR_RR_Pos) /*!< Bit mask of RR field. */
#define WDT_RR_RR_Reload (0x6E524635UL) /*!< Value to request a reload of the watchdog timer */

/* Register: WDT_POWER */
/* Description: Peripheral power control */

/* Bit 0 : Peripheral power control. The peripheral and its registers will be reset to its initial state by switching the peripheral off and then back on again. */
#define WDT_POWER_POWER_Pos (0UL) /*!< Position of POWER field. */
#define WDT_POWER_POWER_Msk (0x1UL << WDT_POWER_POWER_Pos) /*!< Bit mask of POWER field. */
#define WDT_POWER_POWER_Disabled (0UL) /*!< Peripheral is powered off */
#define WDT_POWER_POWER_Enabled (1UL) /*!< Peripheral is powered on */


/*lint --flb "Leave library region" */
#endif
