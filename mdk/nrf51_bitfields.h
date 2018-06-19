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

#ifndef __NRF51_BITS_H
#define __NRF51_BITS_H

/*lint ++flb "Enter library region" */

/* Peripheral: AAR */
/* Description: Accelerated Address Resolver */

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

/* Bit 2 : Write '1' to Enable interrupt for NOTRESOLVED event */
#define AAR_INTENSET_NOTRESOLVED_Pos (2UL) /*!< Position of NOTRESOLVED field. */
#define AAR_INTENSET_NOTRESOLVED_Msk (0x1UL << AAR_INTENSET_NOTRESOLVED_Pos) /*!< Bit mask of NOTRESOLVED field. */
#define AAR_INTENSET_NOTRESOLVED_Disabled (0UL) /*!< Read: Disabled */
#define AAR_INTENSET_NOTRESOLVED_Enabled (1UL) /*!< Read: Enabled */
#define AAR_INTENSET_NOTRESOLVED_Set (1UL) /*!< Enable */

/* Bit 1 : Write '1' to Enable interrupt for RESOLVED event */
#define AAR_INTENSET_RESOLVED_Pos (1UL) /*!< Position of RESOLVED field. */
#define AAR_INTENSET_RESOLVED_Msk (0x1UL << AAR_INTENSET_RESOLVED_Pos) /*!< Bit mask of RESOLVED field. */
#define AAR_INTENSET_RESOLVED_Disabled (0UL) /*!< Read: Disabled */
#define AAR_INTENSET_RESOLVED_Enabled (1UL) /*!< Read: Enabled */
#define AAR_INTENSET_RESOLVED_Set (1UL) /*!< Enable */

/* Bit 0 : Write '1' to Enable interrupt for END event */
#define AAR_INTENSET_END_Pos (0UL) /*!< Position of END field. */
#define AAR_INTENSET_END_Msk (0x1UL << AAR_INTENSET_END_Pos) /*!< Bit mask of END field. */
#define AAR_INTENSET_END_Disabled (0UL) /*!< Read: Disabled */
#define AAR_INTENSET_END_Enabled (1UL) /*!< Read: Enabled */
#define AAR_INTENSET_END_Set (1UL) /*!< Enable */

/* Register: AAR_INTENCLR */
/* Description: Disable interrupt */

/* Bit 2 : Write '1' to Disable interrupt for NOTRESOLVED event */
#define AAR_INTENCLR_NOTRESOLVED_Pos (2UL) /*!< Position of NOTRESOLVED field. */
#define AAR_INTENCLR_NOTRESOLVED_Msk (0x1UL << AAR_INTENCLR_NOTRESOLVED_Pos) /*!< Bit mask of NOTRESOLVED field. */
#define AAR_INTENCLR_NOTRESOLVED_Disabled (0UL) /*!< Read: Disabled */
#define AAR_INTENCLR_NOTRESOLVED_Enabled (1UL) /*!< Read: Enabled */
#define AAR_INTENCLR_NOTRESOLVED_Clear (1UL) /*!< Disable */

/* Bit 1 : Write '1' to Disable interrupt for RESOLVED event */
#define AAR_INTENCLR_RESOLVED_Pos (1UL) /*!< Position of RESOLVED field. */
#define AAR_INTENCLR_RESOLVED_Msk (0x1UL << AAR_INTENCLR_RESOLVED_Pos) /*!< Bit mask of RESOLVED field. */
#define AAR_INTENCLR_RESOLVED_Disabled (0UL) /*!< Read: Disabled */
#define AAR_INTENCLR_RESOLVED_Enabled (1UL) /*!< Read: Enabled */
#define AAR_INTENCLR_RESOLVED_Clear (1UL) /*!< Disable */

/* Bit 0 : Write '1' to Disable interrupt for END event */
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


/* Peripheral: ADC */
/* Description: Analog to Digital Converter */

/* Register: ADC_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 0 : Enable or disable interrupt for END event */
#define ADC_INTEN_END_Pos (0UL) /*!< Position of END field. */
#define ADC_INTEN_END_Msk (0x1UL << ADC_INTEN_END_Pos) /*!< Bit mask of END field. */
#define ADC_INTEN_END_Disabled (0UL) /*!< Disable */
#define ADC_INTEN_END_Enabled (1UL) /*!< Enable */

/* Register: ADC_INTENSET */
/* Description: Enable interrupt */

/* Bit 0 : Write '1' to Enable interrupt for END event */
#define ADC_INTENSET_END_Pos (0UL) /*!< Position of END field. */
#define ADC_INTENSET_END_Msk (0x1UL << ADC_INTENSET_END_Pos) /*!< Bit mask of END field. */
#define ADC_INTENSET_END_Disabled (0UL) /*!< Read: Disabled */
#define ADC_INTENSET_END_Enabled (1UL) /*!< Read: Enabled */
#define ADC_INTENSET_END_Set (1UL) /*!< Enable */

/* Register: ADC_INTENCLR */
/* Description: Disable interrupt */

/* Bit 0 : Write '1' to Disable interrupt for END event */
#define ADC_INTENCLR_END_Pos (0UL) /*!< Position of END field. */
#define ADC_INTENCLR_END_Msk (0x1UL << ADC_INTENCLR_END_Pos) /*!< Bit mask of END field. */
#define ADC_INTENCLR_END_Disabled (0UL) /*!< Read: Disabled */
#define ADC_INTENCLR_END_Enabled (1UL) /*!< Read: Enabled */
#define ADC_INTENCLR_END_Clear (1UL) /*!< Disable */

/* Register: ADC_BUSY */
/* Description: ADC busy (conversion in progress) */

/* Bit 0 : ADC busy register */
#define ADC_BUSY_BUSY_Pos (0UL) /*!< Position of BUSY field. */
#define ADC_BUSY_BUSY_Msk (0x1UL << ADC_BUSY_BUSY_Pos) /*!< Bit mask of BUSY field. */
#define ADC_BUSY_BUSY_Ready (0UL) /*!< ADC is ready. No ongoing conversion. */
#define ADC_BUSY_BUSY_Busy (1UL) /*!< ADC is busy. Conversion in progress. */

/* Register: ADC_ENABLE */
/* Description: Enable ADC. When enabled, the ADC will acquire access to the analog input pins specified in the CONFIG register. */

/* Bits 1..0 : ADC enable */
#define ADC_ENABLE_ENABLE_Pos (0UL) /*!< Position of ENABLE field. */
#define ADC_ENABLE_ENABLE_Msk (0x3UL << ADC_ENABLE_ENABLE_Pos) /*!< Bit mask of ENABLE field. */
#define ADC_ENABLE_ENABLE_Disabled (0UL) /*!< ADC disabled */
#define ADC_ENABLE_ENABLE_Enabled (1UL) /*!< ADC enabled */

/* Register: ADC_CONFIG */
/* Description: ADC configuration */

/* Bits 17..16 : External reference pin selection */
#define ADC_CONFIG_EXTREFSEL_Pos (16UL) /*!< Position of EXTREFSEL field. */
#define ADC_CONFIG_EXTREFSEL_Msk (0x3UL << ADC_CONFIG_EXTREFSEL_Pos) /*!< Bit mask of EXTREFSEL field. */
#define ADC_CONFIG_EXTREFSEL_None (0UL) /*!< Analog reference inputs disabled */
#define ADC_CONFIG_EXTREFSEL_AnalogReference0 (1UL) /*!< Use AREF0 as analog reference */
#define ADC_CONFIG_EXTREFSEL_AnalogReference1 (2UL) /*!< Use AREF1 as analog reference */

/* Bits 15..8 : Select pin to be used as ADC input pin */
#define ADC_CONFIG_PSEL_Pos (8UL) /*!< Position of PSEL field. */
#define ADC_CONFIG_PSEL_Msk (0xFFUL << ADC_CONFIG_PSEL_Pos) /*!< Bit mask of PSEL field. */
#define ADC_CONFIG_PSEL_Disabled (0UL) /*!< Analog input pins disabled */
#define ADC_CONFIG_PSEL_AnalogInput0 (1UL) /*!< Use AIN0 as analog input */
#define ADC_CONFIG_PSEL_AnalogInput1 (2UL) /*!< Use AIN1 as analog input */
#define ADC_CONFIG_PSEL_AnalogInput2 (4UL) /*!< Use AIN2 as analog input */
#define ADC_CONFIG_PSEL_AnalogInput3 (8UL) /*!< Use AIN3 as analog input */
#define ADC_CONFIG_PSEL_AnalogInput4 (16UL) /*!< Use AIN4 as analog input */
#define ADC_CONFIG_PSEL_AnalogInput5 (32UL) /*!< Use AIN5 as analog input */
#define ADC_CONFIG_PSEL_AnalogInput6 (64UL) /*!< Use AIN6 as analog input */
#define ADC_CONFIG_PSEL_AnalogInput7 (128UL) /*!< Use AIN7 as analog input */

/* Bits 6..5 : ADC reference selection */
#define ADC_CONFIG_REFSEL_Pos (5UL) /*!< Position of REFSEL field. */
#define ADC_CONFIG_REFSEL_Msk (0x3UL << ADC_CONFIG_REFSEL_Pos) /*!< Bit mask of REFSEL field. */
#define ADC_CONFIG_REFSEL_VBG (0UL) /*!< Use internal 1.2 V band gap reference */
#define ADC_CONFIG_REFSEL_External (1UL) /*!< Use external reference specified by CONFIG. EXTREFSEL */
#define ADC_CONFIG_REFSEL_SupplyOneHalfPrescaling (2UL) /*!< Use VDD with 1/2 prescaling. (Only applicable when VDD is in the range 1.7 V - 2.6 V). */
#define ADC_CONFIG_REFSEL_SupplyOneThirdPrescaling (3UL) /*!< Use VDD with 1/3 prescaling. (Only applicable when VDD is in the range 2.5 V - 3.6 V). */

/* Bits 4..2 : ADC input selection */
#define ADC_CONFIG_INPSEL_Pos (2UL) /*!< Position of INPSEL field. */
#define ADC_CONFIG_INPSEL_Msk (0x7UL << ADC_CONFIG_INPSEL_Pos) /*!< Bit mask of INPSEL field. */
#define ADC_CONFIG_INPSEL_AnalogInputNoPrescaling (0UL) /*!< Analog input pin specified by CONFIG.PSEL with no prescaling */
#define ADC_CONFIG_INPSEL_AnalogInputTwoThirdsPrescaling (1UL) /*!< Analog input pin specified by CONFIG.PSEL with 2/3 prescaling */
#define ADC_CONFIG_INPSEL_AnalogInputOneThirdPrescaling (2UL) /*!< Analog input pin specified by CONFIG.PSEL with 1/3 prescaling */
#define ADC_CONFIG_INPSEL_SupplyTwoThirdsPrescaling (5UL) /*!< VDD with 2/3 prescaling */
#define ADC_CONFIG_INPSEL_SupplyOneThirdPrescaling (6UL) /*!< VDD with 1/3 prescaling */

/* Bits 1..0 : ADC resolution */
#define ADC_CONFIG_RES_Pos (0UL) /*!< Position of RES field. */
#define ADC_CONFIG_RES_Msk (0x3UL << ADC_CONFIG_RES_Pos) /*!< Bit mask of RES field. */
#define ADC_CONFIG_RES_8bit (0UL) /*!< 8 bit */
#define ADC_CONFIG_RES_9bit (1UL) /*!< 9 bit */
#define ADC_CONFIG_RES_10bit (2UL) /*!< 10 bit */

/* Register: ADC_RESULT */
/* Description: Result of the previous ADC conversion */

/* Bits 9..0 : Result of the previous ADC conversion */
#define ADC_RESULT_RESULT_Pos (0UL) /*!< Position of RESULT field. */
#define ADC_RESULT_RESULT_Msk (0x3FFUL << ADC_RESULT_RESULT_Pos) /*!< Bit mask of RESULT field. */

/* Register: ADC_POWER */
/* Description: Peripheral power control */

/* Bit 0 : Peripheral power control. The peripheral and its registers will be reset to its initial state by switching the peripheral off and then back on again. */
#define ADC_POWER_POWEER_Pos (0UL) /*!< Position of POWEER field. */
#define ADC_POWER_POWEER_Msk (0x1UL << ADC_POWER_POWEER_Pos) /*!< Bit mask of POWEER field. */
#define ADC_POWER_POWEER_Disabled (0UL) /*!< Peripheral is powered off */
#define ADC_POWER_POWEER_Enabled (1UL) /*!< Peripheral is powered on */


/* Peripheral: AMLI */
/* Description: AHB Multi-Layer Interface */

/* Register: AMLI_RAMPRI_CPU0 */
/* Description: AHB bus master priority register for CPU0 */

/* Bits 31..28 : Priority register for RAM AHB slave 7 */
#define AMLI_RAMPRI_CPU0_RAM7_Pos (28UL) /*!< Position of RAM7 field. */
#define AMLI_RAMPRI_CPU0_RAM7_Msk (0xFUL << AMLI_RAMPRI_CPU0_RAM7_Pos) /*!< Bit mask of RAM7 field. */
#define AMLI_RAMPRI_CPU0_RAM7_Pri0 (0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_CPU0_RAM7_Pri2 (2UL) /*!< Priority 2 */
#define AMLI_RAMPRI_CPU0_RAM7_Pri4 (4UL) /*!< Priority 4 */
#define AMLI_RAMPRI_CPU0_RAM7_Pri6 (6UL) /*!< Priority 6 */
#define AMLI_RAMPRI_CPU0_RAM7_Pri8 (8UL) /*!< Priority 8 */
#define AMLI_RAMPRI_CPU0_RAM7_Pri10 (10UL) /*!< Priority 10 */
#define AMLI_RAMPRI_CPU0_RAM7_Pri12 (12UL) /*!< Priority 12 */
#define AMLI_RAMPRI_CPU0_RAM7_Pri14 (14UL) /*!< Priority 14 */

/* Bits 27..24 : Priority register for RAM AHB slave 6 */
#define AMLI_RAMPRI_CPU0_RAM6_Pos (24UL) /*!< Position of RAM6 field. */
#define AMLI_RAMPRI_CPU0_RAM6_Msk (0xFUL << AMLI_RAMPRI_CPU0_RAM6_Pos) /*!< Bit mask of RAM6 field. */
#define AMLI_RAMPRI_CPU0_RAM6_Pri0 (0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_CPU0_RAM6_Pri2 (2UL) /*!< Priority 2 */
#define AMLI_RAMPRI_CPU0_RAM6_Pri4 (4UL) /*!< Priority 4 */
#define AMLI_RAMPRI_CPU0_RAM6_Pri6 (6UL) /*!< Priority 6 */
#define AMLI_RAMPRI_CPU0_RAM6_Pri8 (8UL) /*!< Priority 8 */
#define AMLI_RAMPRI_CPU0_RAM6_Pri10 (10UL) /*!< Priority 10 */
#define AMLI_RAMPRI_CPU0_RAM6_Pri12 (12UL) /*!< Priority 12 */
#define AMLI_RAMPRI_CPU0_RAM6_Pri14 (14UL) /*!< Priority 14 */

/* Bits 23..20 : Priority register for RAM AHB slave 5 */
#define AMLI_RAMPRI_CPU0_RAM5_Pos (20UL) /*!< Position of RAM5 field. */
#define AMLI_RAMPRI_CPU0_RAM5_Msk (0xFUL << AMLI_RAMPRI_CPU0_RAM5_Pos) /*!< Bit mask of RAM5 field. */
#define AMLI_RAMPRI_CPU0_RAM5_Pri0 (0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_CPU0_RAM5_Pri2 (2UL) /*!< Priority 2 */
#define AMLI_RAMPRI_CPU0_RAM5_Pri4 (4UL) /*!< Priority 4 */
#define AMLI_RAMPRI_CPU0_RAM5_Pri6 (6UL) /*!< Priority 6 */
#define AMLI_RAMPRI_CPU0_RAM5_Pri8 (8UL) /*!< Priority 8 */
#define AMLI_RAMPRI_CPU0_RAM5_Pri10 (10UL) /*!< Priority 10 */
#define AMLI_RAMPRI_CPU0_RAM5_Pri12 (12UL) /*!< Priority 12 */
#define AMLI_RAMPRI_CPU0_RAM5_Pri14 (14UL) /*!< Priority 14 */

/* Bits 19..16 : Priority register for RAM AHB slave 4 */
#define AMLI_RAMPRI_CPU0_RAM4_Pos (16UL) /*!< Position of RAM4 field. */
#define AMLI_RAMPRI_CPU0_RAM4_Msk (0xFUL << AMLI_RAMPRI_CPU0_RAM4_Pos) /*!< Bit mask of RAM4 field. */
#define AMLI_RAMPRI_CPU0_RAM4_Pri0 (0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_CPU0_RAM4_Pri2 (2UL) /*!< Priority 2 */
#define AMLI_RAMPRI_CPU0_RAM4_Pri4 (4UL) /*!< Priority 4 */
#define AMLI_RAMPRI_CPU0_RAM4_Pri6 (6UL) /*!< Priority 6 */
#define AMLI_RAMPRI_CPU0_RAM4_Pri8 (8UL) /*!< Priority 8 */
#define AMLI_RAMPRI_CPU0_RAM4_Pri10 (10UL) /*!< Priority 10 */
#define AMLI_RAMPRI_CPU0_RAM4_Pri12 (12UL) /*!< Priority 12 */
#define AMLI_RAMPRI_CPU0_RAM4_Pri14 (14UL) /*!< Priority 14 */

/* Bits 15..12 : Priority register for RAM AHB slave 3 */
#define AMLI_RAMPRI_CPU0_RAM3_Pos (12UL) /*!< Position of RAM3 field. */
#define AMLI_RAMPRI_CPU0_RAM3_Msk (0xFUL << AMLI_RAMPRI_CPU0_RAM3_Pos) /*!< Bit mask of RAM3 field. */
#define AMLI_RAMPRI_CPU0_RAM3_Pri0 (0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_CPU0_RAM3_Pri2 (2UL) /*!< Priority 2 */
#define AMLI_RAMPRI_CPU0_RAM3_Pri4 (4UL) /*!< Priority 4 */
#define AMLI_RAMPRI_CPU0_RAM3_Pri6 (6UL) /*!< Priority 6 */
#define AMLI_RAMPRI_CPU0_RAM3_Pri8 (8UL) /*!< Priority 8 */
#define AMLI_RAMPRI_CPU0_RAM3_Pri10 (10UL) /*!< Priority 10 */
#define AMLI_RAMPRI_CPU0_RAM3_Pri12 (12UL) /*!< Priority 12 */
#define AMLI_RAMPRI_CPU0_RAM3_Pri14 (14UL) /*!< Priority 14 */

/* Bits 11..8 : Priority register for RAM AHB slave 2 */
#define AMLI_RAMPRI_CPU0_RAM2_Pos (8UL) /*!< Position of RAM2 field. */
#define AMLI_RAMPRI_CPU0_RAM2_Msk (0xFUL << AMLI_RAMPRI_CPU0_RAM2_Pos) /*!< Bit mask of RAM2 field. */
#define AMLI_RAMPRI_CPU0_RAM2_Pri0 (0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_CPU0_RAM2_Pri2 (2UL) /*!< Priority 2 */
#define AMLI_RAMPRI_CPU0_RAM2_Pri4 (4UL) /*!< Priority 4 */
#define AMLI_RAMPRI_CPU0_RAM2_Pri6 (6UL) /*!< Priority 6 */
#define AMLI_RAMPRI_CPU0_RAM2_Pri8 (8UL) /*!< Priority 8 */
#define AMLI_RAMPRI_CPU0_RAM2_Pri10 (10UL) /*!< Priority 10 */
#define AMLI_RAMPRI_CPU0_RAM2_Pri12 (12UL) /*!< Priority 12 */
#define AMLI_RAMPRI_CPU0_RAM2_Pri14 (14UL) /*!< Priority 14 */

/* Bits 7..4 : Priority register for RAM AHB slave 1 */
#define AMLI_RAMPRI_CPU0_RAM1_Pos (4UL) /*!< Position of RAM1 field. */
#define AMLI_RAMPRI_CPU0_RAM1_Msk (0xFUL << AMLI_RAMPRI_CPU0_RAM1_Pos) /*!< Bit mask of RAM1 field. */
#define AMLI_RAMPRI_CPU0_RAM1_Pri0 (0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_CPU0_RAM1_Pri2 (2UL) /*!< Priority 2 */
#define AMLI_RAMPRI_CPU0_RAM1_Pri4 (4UL) /*!< Priority 4 */
#define AMLI_RAMPRI_CPU0_RAM1_Pri6 (6UL) /*!< Priority 6 */
#define AMLI_RAMPRI_CPU0_RAM1_Pri8 (8UL) /*!< Priority 8 */
#define AMLI_RAMPRI_CPU0_RAM1_Pri10 (10UL) /*!< Priority 10 */
#define AMLI_RAMPRI_CPU0_RAM1_Pri12 (12UL) /*!< Priority 12 */
#define AMLI_RAMPRI_CPU0_RAM1_Pri14 (14UL) /*!< Priority 14 */

/* Bits 3..0 : Priority register for RAM AHB slave 0 */
#define AMLI_RAMPRI_CPU0_RAM0_Pos (0UL) /*!< Position of RAM0 field. */
#define AMLI_RAMPRI_CPU0_RAM0_Msk (0xFUL << AMLI_RAMPRI_CPU0_RAM0_Pos) /*!< Bit mask of RAM0 field. */
#define AMLI_RAMPRI_CPU0_RAM0_Pri0 (0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_CPU0_RAM0_Pri2 (2UL) /*!< Priority 2 */
#define AMLI_RAMPRI_CPU0_RAM0_Pri4 (4UL) /*!< Priority 4 */
#define AMLI_RAMPRI_CPU0_RAM0_Pri6 (6UL) /*!< Priority 6 */
#define AMLI_RAMPRI_CPU0_RAM0_Pri8 (8UL) /*!< Priority 8 */
#define AMLI_RAMPRI_CPU0_RAM0_Pri10 (10UL) /*!< Priority 10 */
#define AMLI_RAMPRI_CPU0_RAM0_Pri12 (12UL) /*!< Priority 12 */
#define AMLI_RAMPRI_CPU0_RAM0_Pri14 (14UL) /*!< Priority 14 */

/* Register: AMLI_RAMPRI_SPIS1 */
/* Description: AHB bus master priority register for SPIM1, SPIS1, TWIM1 and TWIS1 */

/* Bits 31..28 : Priority register for RAM AHB slave 7 */
#define AMLI_RAMPRI_SPIS1_RAM7_Pos (28UL) /*!< Position of RAM7 field. */
#define AMLI_RAMPRI_SPIS1_RAM7_Msk (0xFUL << AMLI_RAMPRI_SPIS1_RAM7_Pos) /*!< Bit mask of RAM7 field. */
#define AMLI_RAMPRI_SPIS1_RAM7_Pri0 (0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_SPIS1_RAM7_Pri2 (2UL) /*!< Priority 2 */
#define AMLI_RAMPRI_SPIS1_RAM7_Pri4 (4UL) /*!< Priority 4 */
#define AMLI_RAMPRI_SPIS1_RAM7_Pri6 (6UL) /*!< Priority 6 */
#define AMLI_RAMPRI_SPIS1_RAM7_Pri8 (8UL) /*!< Priority 8 */
#define AMLI_RAMPRI_SPIS1_RAM7_Pri10 (10UL) /*!< Priority 10 */
#define AMLI_RAMPRI_SPIS1_RAM7_Pri12 (12UL) /*!< Priority 12 */
#define AMLI_RAMPRI_SPIS1_RAM7_Pri14 (14UL) /*!< Priority 14 */

/* Bits 27..24 : Priority register for RAM AHB slave 6 */
#define AMLI_RAMPRI_SPIS1_RAM6_Pos (24UL) /*!< Position of RAM6 field. */
#define AMLI_RAMPRI_SPIS1_RAM6_Msk (0xFUL << AMLI_RAMPRI_SPIS1_RAM6_Pos) /*!< Bit mask of RAM6 field. */
#define AMLI_RAMPRI_SPIS1_RAM6_Pri0 (0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_SPIS1_RAM6_Pri2 (2UL) /*!< Priority 2 */
#define AMLI_RAMPRI_SPIS1_RAM6_Pri4 (4UL) /*!< Priority 4 */
#define AMLI_RAMPRI_SPIS1_RAM6_Pri6 (6UL) /*!< Priority 6 */
#define AMLI_RAMPRI_SPIS1_RAM6_Pri8 (8UL) /*!< Priority 8 */
#define AMLI_RAMPRI_SPIS1_RAM6_Pri10 (10UL) /*!< Priority 10 */
#define AMLI_RAMPRI_SPIS1_RAM6_Pri12 (12UL) /*!< Priority 12 */
#define AMLI_RAMPRI_SPIS1_RAM6_Pri14 (14UL) /*!< Priority 14 */

/* Bits 23..20 : Priority register for RAM AHB slave 5 */
#define AMLI_RAMPRI_SPIS1_RAM5_Pos (20UL) /*!< Position of RAM5 field. */
#define AMLI_RAMPRI_SPIS1_RAM5_Msk (0xFUL << AMLI_RAMPRI_SPIS1_RAM5_Pos) /*!< Bit mask of RAM5 field. */
#define AMLI_RAMPRI_SPIS1_RAM5_Pri0 (0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_SPIS1_RAM5_Pri2 (2UL) /*!< Priority 2 */
#define AMLI_RAMPRI_SPIS1_RAM5_Pri4 (4UL) /*!< Priority 4 */
#define AMLI_RAMPRI_SPIS1_RAM5_Pri6 (6UL) /*!< Priority 6 */
#define AMLI_RAMPRI_SPIS1_RAM5_Pri8 (8UL) /*!< Priority 8 */
#define AMLI_RAMPRI_SPIS1_RAM5_Pri10 (10UL) /*!< Priority 10 */
#define AMLI_RAMPRI_SPIS1_RAM5_Pri12 (12UL) /*!< Priority 12 */
#define AMLI_RAMPRI_SPIS1_RAM5_Pri14 (14UL) /*!< Priority 14 */

/* Bits 19..16 : Priority register for RAM AHB slave 4 */
#define AMLI_RAMPRI_SPIS1_RAM4_Pos (16UL) /*!< Position of RAM4 field. */
#define AMLI_RAMPRI_SPIS1_RAM4_Msk (0xFUL << AMLI_RAMPRI_SPIS1_RAM4_Pos) /*!< Bit mask of RAM4 field. */
#define AMLI_RAMPRI_SPIS1_RAM4_Pri0 (0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_SPIS1_RAM4_Pri2 (2UL) /*!< Priority 2 */
#define AMLI_RAMPRI_SPIS1_RAM4_Pri4 (4UL) /*!< Priority 4 */
#define AMLI_RAMPRI_SPIS1_RAM4_Pri6 (6UL) /*!< Priority 6 */
#define AMLI_RAMPRI_SPIS1_RAM4_Pri8 (8UL) /*!< Priority 8 */
#define AMLI_RAMPRI_SPIS1_RAM4_Pri10 (10UL) /*!< Priority 10 */
#define AMLI_RAMPRI_SPIS1_RAM4_Pri12 (12UL) /*!< Priority 12 */
#define AMLI_RAMPRI_SPIS1_RAM4_Pri14 (14UL) /*!< Priority 14 */

/* Bits 15..12 : Priority register for RAM AHB slave 3 */
#define AMLI_RAMPRI_SPIS1_RAM3_Pos (12UL) /*!< Position of RAM3 field. */
#define AMLI_RAMPRI_SPIS1_RAM3_Msk (0xFUL << AMLI_RAMPRI_SPIS1_RAM3_Pos) /*!< Bit mask of RAM3 field. */
#define AMLI_RAMPRI_SPIS1_RAM3_Pri0 (0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_SPIS1_RAM3_Pri2 (2UL) /*!< Priority 2 */
#define AMLI_RAMPRI_SPIS1_RAM3_Pri4 (4UL) /*!< Priority 4 */
#define AMLI_RAMPRI_SPIS1_RAM3_Pri6 (6UL) /*!< Priority 6 */
#define AMLI_RAMPRI_SPIS1_RAM3_Pri8 (8UL) /*!< Priority 8 */
#define AMLI_RAMPRI_SPIS1_RAM3_Pri10 (10UL) /*!< Priority 10 */
#define AMLI_RAMPRI_SPIS1_RAM3_Pri12 (12UL) /*!< Priority 12 */
#define AMLI_RAMPRI_SPIS1_RAM3_Pri14 (14UL) /*!< Priority 14 */

/* Bits 11..8 : Priority register for RAM AHB slave 2 */
#define AMLI_RAMPRI_SPIS1_RAM2_Pos (8UL) /*!< Position of RAM2 field. */
#define AMLI_RAMPRI_SPIS1_RAM2_Msk (0xFUL << AMLI_RAMPRI_SPIS1_RAM2_Pos) /*!< Bit mask of RAM2 field. */
#define AMLI_RAMPRI_SPIS1_RAM2_Pri0 (0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_SPIS1_RAM2_Pri2 (2UL) /*!< Priority 2 */
#define AMLI_RAMPRI_SPIS1_RAM2_Pri4 (4UL) /*!< Priority 4 */
#define AMLI_RAMPRI_SPIS1_RAM2_Pri6 (6UL) /*!< Priority 6 */
#define AMLI_RAMPRI_SPIS1_RAM2_Pri8 (8UL) /*!< Priority 8 */
#define AMLI_RAMPRI_SPIS1_RAM2_Pri10 (10UL) /*!< Priority 10 */
#define AMLI_RAMPRI_SPIS1_RAM2_Pri12 (12UL) /*!< Priority 12 */
#define AMLI_RAMPRI_SPIS1_RAM2_Pri14 (14UL) /*!< Priority 14 */

/* Bits 7..4 : Priority register for RAM AHB slave 1 */
#define AMLI_RAMPRI_SPIS1_RAM1_Pos (4UL) /*!< Position of RAM1 field. */
#define AMLI_RAMPRI_SPIS1_RAM1_Msk (0xFUL << AMLI_RAMPRI_SPIS1_RAM1_Pos) /*!< Bit mask of RAM1 field. */
#define AMLI_RAMPRI_SPIS1_RAM1_Pri0 (0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_SPIS1_RAM1_Pri2 (2UL) /*!< Priority 2 */
#define AMLI_RAMPRI_SPIS1_RAM1_Pri4 (4UL) /*!< Priority 4 */
#define AMLI_RAMPRI_SPIS1_RAM1_Pri6 (6UL) /*!< Priority 6 */
#define AMLI_RAMPRI_SPIS1_RAM1_Pri8 (8UL) /*!< Priority 8 */
#define AMLI_RAMPRI_SPIS1_RAM1_Pri10 (10UL) /*!< Priority 10 */
#define AMLI_RAMPRI_SPIS1_RAM1_Pri12 (12UL) /*!< Priority 12 */
#define AMLI_RAMPRI_SPIS1_RAM1_Pri14 (14UL) /*!< Priority 14 */

/* Bits 3..0 : Priority register for RAM AHB slave 0 */
#define AMLI_RAMPRI_SPIS1_RAM0_Pos (0UL) /*!< Position of RAM0 field. */
#define AMLI_RAMPRI_SPIS1_RAM0_Msk (0xFUL << AMLI_RAMPRI_SPIS1_RAM0_Pos) /*!< Bit mask of RAM0 field. */
#define AMLI_RAMPRI_SPIS1_RAM0_Pri0 (0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_SPIS1_RAM0_Pri2 (2UL) /*!< Priority 2 */
#define AMLI_RAMPRI_SPIS1_RAM0_Pri4 (4UL) /*!< Priority 4 */
#define AMLI_RAMPRI_SPIS1_RAM0_Pri6 (6UL) /*!< Priority 6 */
#define AMLI_RAMPRI_SPIS1_RAM0_Pri8 (8UL) /*!< Priority 8 */
#define AMLI_RAMPRI_SPIS1_RAM0_Pri10 (10UL) /*!< Priority 10 */
#define AMLI_RAMPRI_SPIS1_RAM0_Pri12 (12UL) /*!< Priority 12 */
#define AMLI_RAMPRI_SPIS1_RAM0_Pri14 (14UL) /*!< Priority 14 */

/* Register: AMLI_RAMPRI_RADIO */
/* Description: AHB bus master priority register for RADIO */

/* Bits 31..28 : Priority register for RAM AHB slave 7 */
#define AMLI_RAMPRI_RADIO_RAM7_Pos (28UL) /*!< Position of RAM7 field. */
#define AMLI_RAMPRI_RADIO_RAM7_Msk (0xFUL << AMLI_RAMPRI_RADIO_RAM7_Pos) /*!< Bit mask of RAM7 field. */
#define AMLI_RAMPRI_RADIO_RAM7_Pri0 (0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_RADIO_RAM7_Pri2 (2UL) /*!< Priority 2 */
#define AMLI_RAMPRI_RADIO_RAM7_Pri4 (4UL) /*!< Priority 4 */
#define AMLI_RAMPRI_RADIO_RAM7_Pri6 (6UL) /*!< Priority 6 */
#define AMLI_RAMPRI_RADIO_RAM7_Pri8 (8UL) /*!< Priority 8 */
#define AMLI_RAMPRI_RADIO_RAM7_Pri10 (10UL) /*!< Priority 10 */
#define AMLI_RAMPRI_RADIO_RAM7_Pri12 (12UL) /*!< Priority 12 */
#define AMLI_RAMPRI_RADIO_RAM7_Pri14 (14UL) /*!< Priority 14 */

/* Bits 27..24 : Priority register for RAM AHB slave 6 */
#define AMLI_RAMPRI_RADIO_RAM6_Pos (24UL) /*!< Position of RAM6 field. */
#define AMLI_RAMPRI_RADIO_RAM6_Msk (0xFUL << AMLI_RAMPRI_RADIO_RAM6_Pos) /*!< Bit mask of RAM6 field. */
#define AMLI_RAMPRI_RADIO_RAM6_Pri0 (0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_RADIO_RAM6_Pri2 (2UL) /*!< Priority 2 */
#define AMLI_RAMPRI_RADIO_RAM6_Pri4 (4UL) /*!< Priority 4 */
#define AMLI_RAMPRI_RADIO_RAM6_Pri6 (6UL) /*!< Priority 6 */
#define AMLI_RAMPRI_RADIO_RAM6_Pri8 (8UL) /*!< Priority 8 */
#define AMLI_RAMPRI_RADIO_RAM6_Pri10 (10UL) /*!< Priority 10 */
#define AMLI_RAMPRI_RADIO_RAM6_Pri12 (12UL) /*!< Priority 12 */
#define AMLI_RAMPRI_RADIO_RAM6_Pri14 (14UL) /*!< Priority 14 */

/* Bits 23..20 : Priority register for RAM AHB slave 5 */
#define AMLI_RAMPRI_RADIO_RAM5_Pos (20UL) /*!< Position of RAM5 field. */
#define AMLI_RAMPRI_RADIO_RAM5_Msk (0xFUL << AMLI_RAMPRI_RADIO_RAM5_Pos) /*!< Bit mask of RAM5 field. */
#define AMLI_RAMPRI_RADIO_RAM5_Pri0 (0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_RADIO_RAM5_Pri2 (2UL) /*!< Priority 2 */
#define AMLI_RAMPRI_RADIO_RAM5_Pri4 (4UL) /*!< Priority 4 */
#define AMLI_RAMPRI_RADIO_RAM5_Pri6 (6UL) /*!< Priority 6 */
#define AMLI_RAMPRI_RADIO_RAM5_Pri8 (8UL) /*!< Priority 8 */
#define AMLI_RAMPRI_RADIO_RAM5_Pri10 (10UL) /*!< Priority 10 */
#define AMLI_RAMPRI_RADIO_RAM5_Pri12 (12UL) /*!< Priority 12 */
#define AMLI_RAMPRI_RADIO_RAM5_Pri14 (14UL) /*!< Priority 14 */

/* Bits 19..16 : Priority register for RAM AHB slave 4 */
#define AMLI_RAMPRI_RADIO_RAM4_Pos (16UL) /*!< Position of RAM4 field. */
#define AMLI_RAMPRI_RADIO_RAM4_Msk (0xFUL << AMLI_RAMPRI_RADIO_RAM4_Pos) /*!< Bit mask of RAM4 field. */
#define AMLI_RAMPRI_RADIO_RAM4_Pri0 (0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_RADIO_RAM4_Pri2 (2UL) /*!< Priority 2 */
#define AMLI_RAMPRI_RADIO_RAM4_Pri4 (4UL) /*!< Priority 4 */
#define AMLI_RAMPRI_RADIO_RAM4_Pri6 (6UL) /*!< Priority 6 */
#define AMLI_RAMPRI_RADIO_RAM4_Pri8 (8UL) /*!< Priority 8 */
#define AMLI_RAMPRI_RADIO_RAM4_Pri10 (10UL) /*!< Priority 10 */
#define AMLI_RAMPRI_RADIO_RAM4_Pri12 (12UL) /*!< Priority 12 */
#define AMLI_RAMPRI_RADIO_RAM4_Pri14 (14UL) /*!< Priority 14 */

/* Bits 15..12 : Priority register for RAM AHB slave 3 */
#define AMLI_RAMPRI_RADIO_RAM3_Pos (12UL) /*!< Position of RAM3 field. */
#define AMLI_RAMPRI_RADIO_RAM3_Msk (0xFUL << AMLI_RAMPRI_RADIO_RAM3_Pos) /*!< Bit mask of RAM3 field. */
#define AMLI_RAMPRI_RADIO_RAM3_Pri0 (0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_RADIO_RAM3_Pri2 (2UL) /*!< Priority 2 */
#define AMLI_RAMPRI_RADIO_RAM3_Pri4 (4UL) /*!< Priority 4 */
#define AMLI_RAMPRI_RADIO_RAM3_Pri6 (6UL) /*!< Priority 6 */
#define AMLI_RAMPRI_RADIO_RAM3_Pri8 (8UL) /*!< Priority 8 */
#define AMLI_RAMPRI_RADIO_RAM3_Pri10 (10UL) /*!< Priority 10 */
#define AMLI_RAMPRI_RADIO_RAM3_Pri12 (12UL) /*!< Priority 12 */
#define AMLI_RAMPRI_RADIO_RAM3_Pri14 (14UL) /*!< Priority 14 */

/* Bits 11..8 : Priority register for RAM AHB slave 2 */
#define AMLI_RAMPRI_RADIO_RAM2_Pos (8UL) /*!< Position of RAM2 field. */
#define AMLI_RAMPRI_RADIO_RAM2_Msk (0xFUL << AMLI_RAMPRI_RADIO_RAM2_Pos) /*!< Bit mask of RAM2 field. */
#define AMLI_RAMPRI_RADIO_RAM2_Pri0 (0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_RADIO_RAM2_Pri2 (2UL) /*!< Priority 2 */
#define AMLI_RAMPRI_RADIO_RAM2_Pri4 (4UL) /*!< Priority 4 */
#define AMLI_RAMPRI_RADIO_RAM2_Pri6 (6UL) /*!< Priority 6 */
#define AMLI_RAMPRI_RADIO_RAM2_Pri8 (8UL) /*!< Priority 8 */
#define AMLI_RAMPRI_RADIO_RAM2_Pri10 (10UL) /*!< Priority 10 */
#define AMLI_RAMPRI_RADIO_RAM2_Pri12 (12UL) /*!< Priority 12 */
#define AMLI_RAMPRI_RADIO_RAM2_Pri14 (14UL) /*!< Priority 14 */

/* Bits 7..4 : Priority register for RAM AHB slave 1 */
#define AMLI_RAMPRI_RADIO_RAM1_Pos (4UL) /*!< Position of RAM1 field. */
#define AMLI_RAMPRI_RADIO_RAM1_Msk (0xFUL << AMLI_RAMPRI_RADIO_RAM1_Pos) /*!< Bit mask of RAM1 field. */
#define AMLI_RAMPRI_RADIO_RAM1_Pri0 (0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_RADIO_RAM1_Pri2 (2UL) /*!< Priority 2 */
#define AMLI_RAMPRI_RADIO_RAM1_Pri4 (4UL) /*!< Priority 4 */
#define AMLI_RAMPRI_RADIO_RAM1_Pri6 (6UL) /*!< Priority 6 */
#define AMLI_RAMPRI_RADIO_RAM1_Pri8 (8UL) /*!< Priority 8 */
#define AMLI_RAMPRI_RADIO_RAM1_Pri10 (10UL) /*!< Priority 10 */
#define AMLI_RAMPRI_RADIO_RAM1_Pri12 (12UL) /*!< Priority 12 */
#define AMLI_RAMPRI_RADIO_RAM1_Pri14 (14UL) /*!< Priority 14 */

/* Bits 3..0 : Priority register for RAM AHB slave 0 */
#define AMLI_RAMPRI_RADIO_RAM0_Pos (0UL) /*!< Position of RAM0 field. */
#define AMLI_RAMPRI_RADIO_RAM0_Msk (0xFUL << AMLI_RAMPRI_RADIO_RAM0_Pos) /*!< Bit mask of RAM0 field. */
#define AMLI_RAMPRI_RADIO_RAM0_Pri0 (0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_RADIO_RAM0_Pri2 (2UL) /*!< Priority 2 */
#define AMLI_RAMPRI_RADIO_RAM0_Pri4 (4UL) /*!< Priority 4 */
#define AMLI_RAMPRI_RADIO_RAM0_Pri6 (6UL) /*!< Priority 6 */
#define AMLI_RAMPRI_RADIO_RAM0_Pri8 (8UL) /*!< Priority 8 */
#define AMLI_RAMPRI_RADIO_RAM0_Pri10 (10UL) /*!< Priority 10 */
#define AMLI_RAMPRI_RADIO_RAM0_Pri12 (12UL) /*!< Priority 12 */
#define AMLI_RAMPRI_RADIO_RAM0_Pri14 (14UL) /*!< Priority 14 */

/* Register: AMLI_RAMPRI_ECB */
/* Description: AHB bus master priority register for ECB */

/* Bits 31..28 : Priority register for RAM AHB slave 7 */
#define AMLI_RAMPRI_ECB_RAM7_Pos (28UL) /*!< Position of RAM7 field. */
#define AMLI_RAMPRI_ECB_RAM7_Msk (0xFUL << AMLI_RAMPRI_ECB_RAM7_Pos) /*!< Bit mask of RAM7 field. */
#define AMLI_RAMPRI_ECB_RAM7_Pri0 (0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_ECB_RAM7_Pri2 (2UL) /*!< Priority 2 */
#define AMLI_RAMPRI_ECB_RAM7_Pri4 (4UL) /*!< Priority 4 */
#define AMLI_RAMPRI_ECB_RAM7_Pri6 (6UL) /*!< Priority 6 */
#define AMLI_RAMPRI_ECB_RAM7_Pri8 (8UL) /*!< Priority 8 */
#define AMLI_RAMPRI_ECB_RAM7_Pri10 (10UL) /*!< Priority 10 */
#define AMLI_RAMPRI_ECB_RAM7_Pri12 (12UL) /*!< Priority 12 */
#define AMLI_RAMPRI_ECB_RAM7_Pri14 (14UL) /*!< Priority 14 */

/* Bits 27..24 : Priority register for RAM AHB slave 6 */
#define AMLI_RAMPRI_ECB_RAM6_Pos (24UL) /*!< Position of RAM6 field. */
#define AMLI_RAMPRI_ECB_RAM6_Msk (0xFUL << AMLI_RAMPRI_ECB_RAM6_Pos) /*!< Bit mask of RAM6 field. */
#define AMLI_RAMPRI_ECB_RAM6_Pri0 (0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_ECB_RAM6_Pri2 (2UL) /*!< Priority 2 */
#define AMLI_RAMPRI_ECB_RAM6_Pri4 (4UL) /*!< Priority 4 */
#define AMLI_RAMPRI_ECB_RAM6_Pri6 (6UL) /*!< Priority 6 */
#define AMLI_RAMPRI_ECB_RAM6_Pri8 (8UL) /*!< Priority 8 */
#define AMLI_RAMPRI_ECB_RAM6_Pri10 (10UL) /*!< Priority 10 */
#define AMLI_RAMPRI_ECB_RAM6_Pri12 (12UL) /*!< Priority 12 */
#define AMLI_RAMPRI_ECB_RAM6_Pri14 (14UL) /*!< Priority 14 */

/* Bits 23..20 : Priority register for RAM AHB slave 5 */
#define AMLI_RAMPRI_ECB_RAM5_Pos (20UL) /*!< Position of RAM5 field. */
#define AMLI_RAMPRI_ECB_RAM5_Msk (0xFUL << AMLI_RAMPRI_ECB_RAM5_Pos) /*!< Bit mask of RAM5 field. */
#define AMLI_RAMPRI_ECB_RAM5_Pri0 (0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_ECB_RAM5_Pri2 (2UL) /*!< Priority 2 */
#define AMLI_RAMPRI_ECB_RAM5_Pri4 (4UL) /*!< Priority 4 */
#define AMLI_RAMPRI_ECB_RAM5_Pri6 (6UL) /*!< Priority 6 */
#define AMLI_RAMPRI_ECB_RAM5_Pri8 (8UL) /*!< Priority 8 */
#define AMLI_RAMPRI_ECB_RAM5_Pri10 (10UL) /*!< Priority 10 */
#define AMLI_RAMPRI_ECB_RAM5_Pri12 (12UL) /*!< Priority 12 */
#define AMLI_RAMPRI_ECB_RAM5_Pri14 (14UL) /*!< Priority 14 */

/* Bits 19..16 : Priority register for RAM AHB slave 4 */
#define AMLI_RAMPRI_ECB_RAM4_Pos (16UL) /*!< Position of RAM4 field. */
#define AMLI_RAMPRI_ECB_RAM4_Msk (0xFUL << AMLI_RAMPRI_ECB_RAM4_Pos) /*!< Bit mask of RAM4 field. */
#define AMLI_RAMPRI_ECB_RAM4_Pri0 (0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_ECB_RAM4_Pri2 (2UL) /*!< Priority 2 */
#define AMLI_RAMPRI_ECB_RAM4_Pri4 (4UL) /*!< Priority 4 */
#define AMLI_RAMPRI_ECB_RAM4_Pri6 (6UL) /*!< Priority 6 */
#define AMLI_RAMPRI_ECB_RAM4_Pri8 (8UL) /*!< Priority 8 */
#define AMLI_RAMPRI_ECB_RAM4_Pri10 (10UL) /*!< Priority 10 */
#define AMLI_RAMPRI_ECB_RAM4_Pri12 (12UL) /*!< Priority 12 */
#define AMLI_RAMPRI_ECB_RAM4_Pri14 (14UL) /*!< Priority 14 */

/* Bits 15..12 : Priority register for RAM AHB slave 3 */
#define AMLI_RAMPRI_ECB_RAM3_Pos (12UL) /*!< Position of RAM3 field. */
#define AMLI_RAMPRI_ECB_RAM3_Msk (0xFUL << AMLI_RAMPRI_ECB_RAM3_Pos) /*!< Bit mask of RAM3 field. */
#define AMLI_RAMPRI_ECB_RAM3_Pri0 (0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_ECB_RAM3_Pri2 (2UL) /*!< Priority 2 */
#define AMLI_RAMPRI_ECB_RAM3_Pri4 (4UL) /*!< Priority 4 */
#define AMLI_RAMPRI_ECB_RAM3_Pri6 (6UL) /*!< Priority 6 */
#define AMLI_RAMPRI_ECB_RAM3_Pri8 (8UL) /*!< Priority 8 */
#define AMLI_RAMPRI_ECB_RAM3_Pri10 (10UL) /*!< Priority 10 */
#define AMLI_RAMPRI_ECB_RAM3_Pri12 (12UL) /*!< Priority 12 */
#define AMLI_RAMPRI_ECB_RAM3_Pri14 (14UL) /*!< Priority 14 */

/* Bits 11..8 : Priority register for RAM AHB slave 2 */
#define AMLI_RAMPRI_ECB_RAM2_Pos (8UL) /*!< Position of RAM2 field. */
#define AMLI_RAMPRI_ECB_RAM2_Msk (0xFUL << AMLI_RAMPRI_ECB_RAM2_Pos) /*!< Bit mask of RAM2 field. */
#define AMLI_RAMPRI_ECB_RAM2_Pri0 (0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_ECB_RAM2_Pri2 (2UL) /*!< Priority 2 */
#define AMLI_RAMPRI_ECB_RAM2_Pri4 (4UL) /*!< Priority 4 */
#define AMLI_RAMPRI_ECB_RAM2_Pri6 (6UL) /*!< Priority 6 */
#define AMLI_RAMPRI_ECB_RAM2_Pri8 (8UL) /*!< Priority 8 */
#define AMLI_RAMPRI_ECB_RAM2_Pri10 (10UL) /*!< Priority 10 */
#define AMLI_RAMPRI_ECB_RAM2_Pri12 (12UL) /*!< Priority 12 */
#define AMLI_RAMPRI_ECB_RAM2_Pri14 (14UL) /*!< Priority 14 */

/* Bits 7..4 : Priority register for RAM AHB slave 1 */
#define AMLI_RAMPRI_ECB_RAM1_Pos (4UL) /*!< Position of RAM1 field. */
#define AMLI_RAMPRI_ECB_RAM1_Msk (0xFUL << AMLI_RAMPRI_ECB_RAM1_Pos) /*!< Bit mask of RAM1 field. */
#define AMLI_RAMPRI_ECB_RAM1_Pri0 (0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_ECB_RAM1_Pri2 (2UL) /*!< Priority 2 */
#define AMLI_RAMPRI_ECB_RAM1_Pri4 (4UL) /*!< Priority 4 */
#define AMLI_RAMPRI_ECB_RAM1_Pri6 (6UL) /*!< Priority 6 */
#define AMLI_RAMPRI_ECB_RAM1_Pri8 (8UL) /*!< Priority 8 */
#define AMLI_RAMPRI_ECB_RAM1_Pri10 (10UL) /*!< Priority 10 */
#define AMLI_RAMPRI_ECB_RAM1_Pri12 (12UL) /*!< Priority 12 */
#define AMLI_RAMPRI_ECB_RAM1_Pri14 (14UL) /*!< Priority 14 */

/* Bits 3..0 : Priority register for RAM AHB slave 0 */
#define AMLI_RAMPRI_ECB_RAM0_Pos (0UL) /*!< Position of RAM0 field. */
#define AMLI_RAMPRI_ECB_RAM0_Msk (0xFUL << AMLI_RAMPRI_ECB_RAM0_Pos) /*!< Bit mask of RAM0 field. */
#define AMLI_RAMPRI_ECB_RAM0_Pri0 (0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_ECB_RAM0_Pri2 (2UL) /*!< Priority 2 */
#define AMLI_RAMPRI_ECB_RAM0_Pri4 (4UL) /*!< Priority 4 */
#define AMLI_RAMPRI_ECB_RAM0_Pri6 (6UL) /*!< Priority 6 */
#define AMLI_RAMPRI_ECB_RAM0_Pri8 (8UL) /*!< Priority 8 */
#define AMLI_RAMPRI_ECB_RAM0_Pri10 (10UL) /*!< Priority 10 */
#define AMLI_RAMPRI_ECB_RAM0_Pri12 (12UL) /*!< Priority 12 */
#define AMLI_RAMPRI_ECB_RAM0_Pri14 (14UL) /*!< Priority 14 */

/* Register: AMLI_RAMPRI_CCM */
/* Description: AHB bus master priority register for CCM */

/* Bits 31..28 : Priority register for RAM AHB slave 7 */
#define AMLI_RAMPRI_CCM_RAM7_Pos (28UL) /*!< Position of RAM7 field. */
#define AMLI_RAMPRI_CCM_RAM7_Msk (0xFUL << AMLI_RAMPRI_CCM_RAM7_Pos) /*!< Bit mask of RAM7 field. */
#define AMLI_RAMPRI_CCM_RAM7_Pri0 (0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_CCM_RAM7_Pri2 (2UL) /*!< Priority 2 */
#define AMLI_RAMPRI_CCM_RAM7_Pri4 (4UL) /*!< Priority 4 */
#define AMLI_RAMPRI_CCM_RAM7_Pri6 (6UL) /*!< Priority 6 */
#define AMLI_RAMPRI_CCM_RAM7_Pri8 (8UL) /*!< Priority 8 */
#define AMLI_RAMPRI_CCM_RAM7_Pri10 (10UL) /*!< Priority 10 */
#define AMLI_RAMPRI_CCM_RAM7_Pri12 (12UL) /*!< Priority 12 */
#define AMLI_RAMPRI_CCM_RAM7_Pri14 (14UL) /*!< Priority 14 */

/* Bits 27..24 : Priority register for RAM AHB slave 6 */
#define AMLI_RAMPRI_CCM_RAM6_Pos (24UL) /*!< Position of RAM6 field. */
#define AMLI_RAMPRI_CCM_RAM6_Msk (0xFUL << AMLI_RAMPRI_CCM_RAM6_Pos) /*!< Bit mask of RAM6 field. */
#define AMLI_RAMPRI_CCM_RAM6_Pri0 (0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_CCM_RAM6_Pri2 (2UL) /*!< Priority 2 */
#define AMLI_RAMPRI_CCM_RAM6_Pri4 (4UL) /*!< Priority 4 */
#define AMLI_RAMPRI_CCM_RAM6_Pri6 (6UL) /*!< Priority 6 */
#define AMLI_RAMPRI_CCM_RAM6_Pri8 (8UL) /*!< Priority 8 */
#define AMLI_RAMPRI_CCM_RAM6_Pri10 (10UL) /*!< Priority 10 */
#define AMLI_RAMPRI_CCM_RAM6_Pri12 (12UL) /*!< Priority 12 */
#define AMLI_RAMPRI_CCM_RAM6_Pri14 (14UL) /*!< Priority 14 */

/* Bits 23..20 : Priority register for RAM AHB slave 5 */
#define AMLI_RAMPRI_CCM_RAM5_Pos (20UL) /*!< Position of RAM5 field. */
#define AMLI_RAMPRI_CCM_RAM5_Msk (0xFUL << AMLI_RAMPRI_CCM_RAM5_Pos) /*!< Bit mask of RAM5 field. */
#define AMLI_RAMPRI_CCM_RAM5_Pri0 (0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_CCM_RAM5_Pri2 (2UL) /*!< Priority 2 */
#define AMLI_RAMPRI_CCM_RAM5_Pri4 (4UL) /*!< Priority 4 */
#define AMLI_RAMPRI_CCM_RAM5_Pri6 (6UL) /*!< Priority 6 */
#define AMLI_RAMPRI_CCM_RAM5_Pri8 (8UL) /*!< Priority 8 */
#define AMLI_RAMPRI_CCM_RAM5_Pri10 (10UL) /*!< Priority 10 */
#define AMLI_RAMPRI_CCM_RAM5_Pri12 (12UL) /*!< Priority 12 */
#define AMLI_RAMPRI_CCM_RAM5_Pri14 (14UL) /*!< Priority 14 */

/* Bits 19..16 : Priority register for RAM AHB slave 4 */
#define AMLI_RAMPRI_CCM_RAM4_Pos (16UL) /*!< Position of RAM4 field. */
#define AMLI_RAMPRI_CCM_RAM4_Msk (0xFUL << AMLI_RAMPRI_CCM_RAM4_Pos) /*!< Bit mask of RAM4 field. */
#define AMLI_RAMPRI_CCM_RAM4_Pri0 (0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_CCM_RAM4_Pri2 (2UL) /*!< Priority 2 */
#define AMLI_RAMPRI_CCM_RAM4_Pri4 (4UL) /*!< Priority 4 */
#define AMLI_RAMPRI_CCM_RAM4_Pri6 (6UL) /*!< Priority 6 */
#define AMLI_RAMPRI_CCM_RAM4_Pri8 (8UL) /*!< Priority 8 */
#define AMLI_RAMPRI_CCM_RAM4_Pri10 (10UL) /*!< Priority 10 */
#define AMLI_RAMPRI_CCM_RAM4_Pri12 (12UL) /*!< Priority 12 */
#define AMLI_RAMPRI_CCM_RAM4_Pri14 (14UL) /*!< Priority 14 */

/* Bits 15..12 : Priority register for RAM AHB slave 3 */
#define AMLI_RAMPRI_CCM_RAM3_Pos (12UL) /*!< Position of RAM3 field. */
#define AMLI_RAMPRI_CCM_RAM3_Msk (0xFUL << AMLI_RAMPRI_CCM_RAM3_Pos) /*!< Bit mask of RAM3 field. */
#define AMLI_RAMPRI_CCM_RAM3_Pri0 (0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_CCM_RAM3_Pri2 (2UL) /*!< Priority 2 */
#define AMLI_RAMPRI_CCM_RAM3_Pri4 (4UL) /*!< Priority 4 */
#define AMLI_RAMPRI_CCM_RAM3_Pri6 (6UL) /*!< Priority 6 */
#define AMLI_RAMPRI_CCM_RAM3_Pri8 (8UL) /*!< Priority 8 */
#define AMLI_RAMPRI_CCM_RAM3_Pri10 (10UL) /*!< Priority 10 */
#define AMLI_RAMPRI_CCM_RAM3_Pri12 (12UL) /*!< Priority 12 */
#define AMLI_RAMPRI_CCM_RAM3_Pri14 (14UL) /*!< Priority 14 */

/* Bits 11..8 : Priority register for RAM AHB slave 2 */
#define AMLI_RAMPRI_CCM_RAM2_Pos (8UL) /*!< Position of RAM2 field. */
#define AMLI_RAMPRI_CCM_RAM2_Msk (0xFUL << AMLI_RAMPRI_CCM_RAM2_Pos) /*!< Bit mask of RAM2 field. */
#define AMLI_RAMPRI_CCM_RAM2_Pri0 (0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_CCM_RAM2_Pri2 (2UL) /*!< Priority 2 */
#define AMLI_RAMPRI_CCM_RAM2_Pri4 (4UL) /*!< Priority 4 */
#define AMLI_RAMPRI_CCM_RAM2_Pri6 (6UL) /*!< Priority 6 */
#define AMLI_RAMPRI_CCM_RAM2_Pri8 (8UL) /*!< Priority 8 */
#define AMLI_RAMPRI_CCM_RAM2_Pri10 (10UL) /*!< Priority 10 */
#define AMLI_RAMPRI_CCM_RAM2_Pri12 (12UL) /*!< Priority 12 */
#define AMLI_RAMPRI_CCM_RAM2_Pri14 (14UL) /*!< Priority 14 */

/* Bits 7..4 : Priority register for RAM AHB slave 1 */
#define AMLI_RAMPRI_CCM_RAM1_Pos (4UL) /*!< Position of RAM1 field. */
#define AMLI_RAMPRI_CCM_RAM1_Msk (0xFUL << AMLI_RAMPRI_CCM_RAM1_Pos) /*!< Bit mask of RAM1 field. */
#define AMLI_RAMPRI_CCM_RAM1_Pri0 (0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_CCM_RAM1_Pri2 (2UL) /*!< Priority 2 */
#define AMLI_RAMPRI_CCM_RAM1_Pri4 (4UL) /*!< Priority 4 */
#define AMLI_RAMPRI_CCM_RAM1_Pri6 (6UL) /*!< Priority 6 */
#define AMLI_RAMPRI_CCM_RAM1_Pri8 (8UL) /*!< Priority 8 */
#define AMLI_RAMPRI_CCM_RAM1_Pri10 (10UL) /*!< Priority 10 */
#define AMLI_RAMPRI_CCM_RAM1_Pri12 (12UL) /*!< Priority 12 */
#define AMLI_RAMPRI_CCM_RAM1_Pri14 (14UL) /*!< Priority 14 */

/* Bits 3..0 : Priority register for RAM AHB slave 0 */
#define AMLI_RAMPRI_CCM_RAM0_Pos (0UL) /*!< Position of RAM0 field. */
#define AMLI_RAMPRI_CCM_RAM0_Msk (0xFUL << AMLI_RAMPRI_CCM_RAM0_Pos) /*!< Bit mask of RAM0 field. */
#define AMLI_RAMPRI_CCM_RAM0_Pri0 (0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_CCM_RAM0_Pri2 (2UL) /*!< Priority 2 */
#define AMLI_RAMPRI_CCM_RAM0_Pri4 (4UL) /*!< Priority 4 */
#define AMLI_RAMPRI_CCM_RAM0_Pri6 (6UL) /*!< Priority 6 */
#define AMLI_RAMPRI_CCM_RAM0_Pri8 (8UL) /*!< Priority 8 */
#define AMLI_RAMPRI_CCM_RAM0_Pri10 (10UL) /*!< Priority 10 */
#define AMLI_RAMPRI_CCM_RAM0_Pri12 (12UL) /*!< Priority 12 */
#define AMLI_RAMPRI_CCM_RAM0_Pri14 (14UL) /*!< Priority 14 */

/* Register: AMLI_RAMPRI_AAR */
/* Description: AHB bus master priority register for AAR */

/* Bits 31..28 : Priority register for RAM AHB slave 7 */
#define AMLI_RAMPRI_AAR_RAM7_Pos (28UL) /*!< Position of RAM7 field. */
#define AMLI_RAMPRI_AAR_RAM7_Msk (0xFUL << AMLI_RAMPRI_AAR_RAM7_Pos) /*!< Bit mask of RAM7 field. */
#define AMLI_RAMPRI_AAR_RAM7_Pri0 (0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_AAR_RAM7_Pri2 (2UL) /*!< Priority 2 */
#define AMLI_RAMPRI_AAR_RAM7_Pri4 (4UL) /*!< Priority 4 */
#define AMLI_RAMPRI_AAR_RAM7_Pri6 (6UL) /*!< Priority 6 */
#define AMLI_RAMPRI_AAR_RAM7_Pri8 (8UL) /*!< Priority 8 */
#define AMLI_RAMPRI_AAR_RAM7_Pri10 (10UL) /*!< Priority 10 */
#define AMLI_RAMPRI_AAR_RAM7_Pri12 (12UL) /*!< Priority 12 */
#define AMLI_RAMPRI_AAR_RAM7_Pri14 (14UL) /*!< Priority 14 */

/* Bits 27..24 : Priority register for RAM AHB slave 6 */
#define AMLI_RAMPRI_AAR_RAM6_Pos (24UL) /*!< Position of RAM6 field. */
#define AMLI_RAMPRI_AAR_RAM6_Msk (0xFUL << AMLI_RAMPRI_AAR_RAM6_Pos) /*!< Bit mask of RAM6 field. */
#define AMLI_RAMPRI_AAR_RAM6_Pri0 (0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_AAR_RAM6_Pri2 (2UL) /*!< Priority 2 */
#define AMLI_RAMPRI_AAR_RAM6_Pri4 (4UL) /*!< Priority 4 */
#define AMLI_RAMPRI_AAR_RAM6_Pri6 (6UL) /*!< Priority 6 */
#define AMLI_RAMPRI_AAR_RAM6_Pri8 (8UL) /*!< Priority 8 */
#define AMLI_RAMPRI_AAR_RAM6_Pri10 (10UL) /*!< Priority 10 */
#define AMLI_RAMPRI_AAR_RAM6_Pri12 (12UL) /*!< Priority 12 */
#define AMLI_RAMPRI_AAR_RAM6_Pri14 (14UL) /*!< Priority 14 */

/* Bits 23..20 : Priority register for RAM AHB slave 5 */
#define AMLI_RAMPRI_AAR_RAM5_Pos (20UL) /*!< Position of RAM5 field. */
#define AMLI_RAMPRI_AAR_RAM5_Msk (0xFUL << AMLI_RAMPRI_AAR_RAM5_Pos) /*!< Bit mask of RAM5 field. */
#define AMLI_RAMPRI_AAR_RAM5_Pri0 (0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_AAR_RAM5_Pri2 (2UL) /*!< Priority 2 */
#define AMLI_RAMPRI_AAR_RAM5_Pri4 (4UL) /*!< Priority 4 */
#define AMLI_RAMPRI_AAR_RAM5_Pri6 (6UL) /*!< Priority 6 */
#define AMLI_RAMPRI_AAR_RAM5_Pri8 (8UL) /*!< Priority 8 */
#define AMLI_RAMPRI_AAR_RAM5_Pri10 (10UL) /*!< Priority 10 */
#define AMLI_RAMPRI_AAR_RAM5_Pri12 (12UL) /*!< Priority 12 */
#define AMLI_RAMPRI_AAR_RAM5_Pri14 (14UL) /*!< Priority 14 */

/* Bits 19..16 : Priority register for RAM AHB slave 4 */
#define AMLI_RAMPRI_AAR_RAM4_Pos (16UL) /*!< Position of RAM4 field. */
#define AMLI_RAMPRI_AAR_RAM4_Msk (0xFUL << AMLI_RAMPRI_AAR_RAM4_Pos) /*!< Bit mask of RAM4 field. */
#define AMLI_RAMPRI_AAR_RAM4_Pri0 (0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_AAR_RAM4_Pri2 (2UL) /*!< Priority 2 */
#define AMLI_RAMPRI_AAR_RAM4_Pri4 (4UL) /*!< Priority 4 */
#define AMLI_RAMPRI_AAR_RAM4_Pri6 (6UL) /*!< Priority 6 */
#define AMLI_RAMPRI_AAR_RAM4_Pri8 (8UL) /*!< Priority 8 */
#define AMLI_RAMPRI_AAR_RAM4_Pri10 (10UL) /*!< Priority 10 */
#define AMLI_RAMPRI_AAR_RAM4_Pri12 (12UL) /*!< Priority 12 */
#define AMLI_RAMPRI_AAR_RAM4_Pri14 (14UL) /*!< Priority 14 */

/* Bits 15..12 : Priority register for RAM AHB slave 3 */
#define AMLI_RAMPRI_AAR_RAM3_Pos (12UL) /*!< Position of RAM3 field. */
#define AMLI_RAMPRI_AAR_RAM3_Msk (0xFUL << AMLI_RAMPRI_AAR_RAM3_Pos) /*!< Bit mask of RAM3 field. */
#define AMLI_RAMPRI_AAR_RAM3_Pri0 (0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_AAR_RAM3_Pri2 (2UL) /*!< Priority 2 */
#define AMLI_RAMPRI_AAR_RAM3_Pri4 (4UL) /*!< Priority 4 */
#define AMLI_RAMPRI_AAR_RAM3_Pri6 (6UL) /*!< Priority 6 */
#define AMLI_RAMPRI_AAR_RAM3_Pri8 (8UL) /*!< Priority 8 */
#define AMLI_RAMPRI_AAR_RAM3_Pri10 (10UL) /*!< Priority 10 */
#define AMLI_RAMPRI_AAR_RAM3_Pri12 (12UL) /*!< Priority 12 */
#define AMLI_RAMPRI_AAR_RAM3_Pri14 (14UL) /*!< Priority 14 */

/* Bits 11..8 : Priority register for RAM AHB slave 2 */
#define AMLI_RAMPRI_AAR_RAM2_Pos (8UL) /*!< Position of RAM2 field. */
#define AMLI_RAMPRI_AAR_RAM2_Msk (0xFUL << AMLI_RAMPRI_AAR_RAM2_Pos) /*!< Bit mask of RAM2 field. */
#define AMLI_RAMPRI_AAR_RAM2_Pri0 (0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_AAR_RAM2_Pri2 (2UL) /*!< Priority 2 */
#define AMLI_RAMPRI_AAR_RAM2_Pri4 (4UL) /*!< Priority 4 */
#define AMLI_RAMPRI_AAR_RAM2_Pri6 (6UL) /*!< Priority 6 */
#define AMLI_RAMPRI_AAR_RAM2_Pri8 (8UL) /*!< Priority 8 */
#define AMLI_RAMPRI_AAR_RAM2_Pri10 (10UL) /*!< Priority 10 */
#define AMLI_RAMPRI_AAR_RAM2_Pri12 (12UL) /*!< Priority 12 */
#define AMLI_RAMPRI_AAR_RAM2_Pri14 (14UL) /*!< Priority 14 */

/* Bits 7..4 : Priority register for RAM AHB slave 1 */
#define AMLI_RAMPRI_AAR_RAM1_Pos (4UL) /*!< Position of RAM1 field. */
#define AMLI_RAMPRI_AAR_RAM1_Msk (0xFUL << AMLI_RAMPRI_AAR_RAM1_Pos) /*!< Bit mask of RAM1 field. */
#define AMLI_RAMPRI_AAR_RAM1_Pri0 (0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_AAR_RAM1_Pri2 (2UL) /*!< Priority 2 */
#define AMLI_RAMPRI_AAR_RAM1_Pri4 (4UL) /*!< Priority 4 */
#define AMLI_RAMPRI_AAR_RAM1_Pri6 (6UL) /*!< Priority 6 */
#define AMLI_RAMPRI_AAR_RAM1_Pri8 (8UL) /*!< Priority 8 */
#define AMLI_RAMPRI_AAR_RAM1_Pri10 (10UL) /*!< Priority 10 */
#define AMLI_RAMPRI_AAR_RAM1_Pri12 (12UL) /*!< Priority 12 */
#define AMLI_RAMPRI_AAR_RAM1_Pri14 (14UL) /*!< Priority 14 */

/* Bits 3..0 : Priority register for RAM AHB slave 0 */
#define AMLI_RAMPRI_AAR_RAM0_Pos (0UL) /*!< Position of RAM0 field. */
#define AMLI_RAMPRI_AAR_RAM0_Msk (0xFUL << AMLI_RAMPRI_AAR_RAM0_Pos) /*!< Bit mask of RAM0 field. */
#define AMLI_RAMPRI_AAR_RAM0_Pri0 (0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_AAR_RAM0_Pri2 (2UL) /*!< Priority 2 */
#define AMLI_RAMPRI_AAR_RAM0_Pri4 (4UL) /*!< Priority 4 */
#define AMLI_RAMPRI_AAR_RAM0_Pri6 (6UL) /*!< Priority 6 */
#define AMLI_RAMPRI_AAR_RAM0_Pri8 (8UL) /*!< Priority 8 */
#define AMLI_RAMPRI_AAR_RAM0_Pri10 (10UL) /*!< Priority 10 */
#define AMLI_RAMPRI_AAR_RAM0_Pri12 (12UL) /*!< Priority 12 */
#define AMLI_RAMPRI_AAR_RAM0_Pri14 (14UL) /*!< Priority 14 */


/* Peripheral: CCM */
/* Description: AES CCM Mode Encryption */

/* Register: CCM_SHORTS */
/* Description: Shortcut register */

/* Bit 0 : Shortcut between ENDKSGEN event and CRYPT task */
#define CCM_SHORTS_ENDKSGEN_CRYPT_Pos (0UL) /*!< Position of ENDKSGEN_CRYPT field. */
#define CCM_SHORTS_ENDKSGEN_CRYPT_Msk (0x1UL << CCM_SHORTS_ENDKSGEN_CRYPT_Pos) /*!< Bit mask of ENDKSGEN_CRYPT field. */
#define CCM_SHORTS_ENDKSGEN_CRYPT_Disabled (0UL) /*!< Disable shortcut */
#define CCM_SHORTS_ENDKSGEN_CRYPT_Enabled (1UL) /*!< Enable shortcut */

/* Register: CCM_INTENSET */
/* Description: Enable interrupt */

/* Bit 2 : Write '1' to Enable interrupt for ERROR event */
#define CCM_INTENSET_ERROR_Pos (2UL) /*!< Position of ERROR field. */
#define CCM_INTENSET_ERROR_Msk (0x1UL << CCM_INTENSET_ERROR_Pos) /*!< Bit mask of ERROR field. */
#define CCM_INTENSET_ERROR_Disabled (0UL) /*!< Read: Disabled */
#define CCM_INTENSET_ERROR_Enabled (1UL) /*!< Read: Enabled */
#define CCM_INTENSET_ERROR_Set (1UL) /*!< Enable */

/* Bit 1 : Write '1' to Enable interrupt for ENDCRYPT event */
#define CCM_INTENSET_ENDCRYPT_Pos (1UL) /*!< Position of ENDCRYPT field. */
#define CCM_INTENSET_ENDCRYPT_Msk (0x1UL << CCM_INTENSET_ENDCRYPT_Pos) /*!< Bit mask of ENDCRYPT field. */
#define CCM_INTENSET_ENDCRYPT_Disabled (0UL) /*!< Read: Disabled */
#define CCM_INTENSET_ENDCRYPT_Enabled (1UL) /*!< Read: Enabled */
#define CCM_INTENSET_ENDCRYPT_Set (1UL) /*!< Enable */

/* Bit 0 : Write '1' to Enable interrupt for ENDKSGEN event */
#define CCM_INTENSET_ENDKSGEN_Pos (0UL) /*!< Position of ENDKSGEN field. */
#define CCM_INTENSET_ENDKSGEN_Msk (0x1UL << CCM_INTENSET_ENDKSGEN_Pos) /*!< Bit mask of ENDKSGEN field. */
#define CCM_INTENSET_ENDKSGEN_Disabled (0UL) /*!< Read: Disabled */
#define CCM_INTENSET_ENDKSGEN_Enabled (1UL) /*!< Read: Enabled */
#define CCM_INTENSET_ENDKSGEN_Set (1UL) /*!< Enable */

/* Register: CCM_INTENCLR */
/* Description: Disable interrupt */

/* Bit 2 : Write '1' to Disable interrupt for ERROR event */
#define CCM_INTENCLR_ERROR_Pos (2UL) /*!< Position of ERROR field. */
#define CCM_INTENCLR_ERROR_Msk (0x1UL << CCM_INTENCLR_ERROR_Pos) /*!< Bit mask of ERROR field. */
#define CCM_INTENCLR_ERROR_Disabled (0UL) /*!< Read: Disabled */
#define CCM_INTENCLR_ERROR_Enabled (1UL) /*!< Read: Enabled */
#define CCM_INTENCLR_ERROR_Clear (1UL) /*!< Disable */

/* Bit 1 : Write '1' to Disable interrupt for ENDCRYPT event */
#define CCM_INTENCLR_ENDCRYPT_Pos (1UL) /*!< Position of ENDCRYPT field. */
#define CCM_INTENCLR_ENDCRYPT_Msk (0x1UL << CCM_INTENCLR_ENDCRYPT_Pos) /*!< Bit mask of ENDCRYPT field. */
#define CCM_INTENCLR_ENDCRYPT_Disabled (0UL) /*!< Read: Disabled */
#define CCM_INTENCLR_ENDCRYPT_Enabled (1UL) /*!< Read: Enabled */
#define CCM_INTENCLR_ENDCRYPT_Clear (1UL) /*!< Disable */

/* Bit 0 : Write '1' to Disable interrupt for ENDKSGEN event */
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

/* Bits 1..0 : The mode of operation to be used */
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

/* Bits 31..0 : Pointer to a scratch data area used for temporary storage during key-stream generation, MIC generation and encryption/decryption. */
#define CCM_SCRATCHPTR_SCRATCHPTR_Pos (0UL) /*!< Position of SCRATCHPTR field. */
#define CCM_SCRATCHPTR_SCRATCHPTR_Msk (0xFFFFFFFFUL << CCM_SCRATCHPTR_SCRATCHPTR_Pos) /*!< Bit mask of SCRATCHPTR field. */

/* Register: CCM_POWER */
/* Description: Peripheral power control */

/* Bit 0 : Peripheral power control. The peripheral and its registers will be reset to its initial state by switching the peripheral off and then back on again. All POWER registers in AAR, CCM and ECB must be disabled to see a reset of any of those functions. */
#define CCM_POWER_POWER_Pos (0UL) /*!< Position of POWER field. */
#define CCM_POWER_POWER_Msk (0x1UL << CCM_POWER_POWER_Pos) /*!< Bit mask of POWER field. */
#define CCM_POWER_POWER_Disabled (0UL) /*!< Peripheral is powered off */
#define CCM_POWER_POWER_Enabled (1UL) /*!< Peripheral is powered on */


/* Peripheral: CLOCK */
/* Description: Clock control */

/* Register: CLOCK_INTENSET */
/* Description: Enable interrupt */

/* Bit 4 : Write '1' to Enable interrupt for CTTO event */
#define CLOCK_INTENSET_CTTO_Pos (4UL) /*!< Position of CTTO field. */
#define CLOCK_INTENSET_CTTO_Msk (0x1UL << CLOCK_INTENSET_CTTO_Pos) /*!< Bit mask of CTTO field. */
#define CLOCK_INTENSET_CTTO_Disabled (0UL) /*!< Read: Disabled */
#define CLOCK_INTENSET_CTTO_Enabled (1UL) /*!< Read: Enabled */
#define CLOCK_INTENSET_CTTO_Set (1UL) /*!< Enable */

/* Bit 3 : Write '1' to Enable interrupt for DONE event */
#define CLOCK_INTENSET_DONE_Pos (3UL) /*!< Position of DONE field. */
#define CLOCK_INTENSET_DONE_Msk (0x1UL << CLOCK_INTENSET_DONE_Pos) /*!< Bit mask of DONE field. */
#define CLOCK_INTENSET_DONE_Disabled (0UL) /*!< Read: Disabled */
#define CLOCK_INTENSET_DONE_Enabled (1UL) /*!< Read: Enabled */
#define CLOCK_INTENSET_DONE_Set (1UL) /*!< Enable */

/* Bit 1 : Write '1' to Enable interrupt for LFCLKSTARTED event */
#define CLOCK_INTENSET_LFCLKSTARTED_Pos (1UL) /*!< Position of LFCLKSTARTED field. */
#define CLOCK_INTENSET_LFCLKSTARTED_Msk (0x1UL << CLOCK_INTENSET_LFCLKSTARTED_Pos) /*!< Bit mask of LFCLKSTARTED field. */
#define CLOCK_INTENSET_LFCLKSTARTED_Disabled (0UL) /*!< Read: Disabled */
#define CLOCK_INTENSET_LFCLKSTARTED_Enabled (1UL) /*!< Read: Enabled */
#define CLOCK_INTENSET_LFCLKSTARTED_Set (1UL) /*!< Enable */

/* Bit 0 : Write '1' to Enable interrupt for HFCLKSTARTED event */
#define CLOCK_INTENSET_HFCLKSTARTED_Pos (0UL) /*!< Position of HFCLKSTARTED field. */
#define CLOCK_INTENSET_HFCLKSTARTED_Msk (0x1UL << CLOCK_INTENSET_HFCLKSTARTED_Pos) /*!< Bit mask of HFCLKSTARTED field. */
#define CLOCK_INTENSET_HFCLKSTARTED_Disabled (0UL) /*!< Read: Disabled */
#define CLOCK_INTENSET_HFCLKSTARTED_Enabled (1UL) /*!< Read: Enabled */
#define CLOCK_INTENSET_HFCLKSTARTED_Set (1UL) /*!< Enable */

/* Register: CLOCK_INTENCLR */
/* Description: Disable interrupt */

/* Bit 4 : Write '1' to Disable interrupt for CTTO event */
#define CLOCK_INTENCLR_CTTO_Pos (4UL) /*!< Position of CTTO field. */
#define CLOCK_INTENCLR_CTTO_Msk (0x1UL << CLOCK_INTENCLR_CTTO_Pos) /*!< Bit mask of CTTO field. */
#define CLOCK_INTENCLR_CTTO_Disabled (0UL) /*!< Read: Disabled */
#define CLOCK_INTENCLR_CTTO_Enabled (1UL) /*!< Read: Enabled */
#define CLOCK_INTENCLR_CTTO_Clear (1UL) /*!< Disable */

/* Bit 3 : Write '1' to Disable interrupt for DONE event */
#define CLOCK_INTENCLR_DONE_Pos (3UL) /*!< Position of DONE field. */
#define CLOCK_INTENCLR_DONE_Msk (0x1UL << CLOCK_INTENCLR_DONE_Pos) /*!< Bit mask of DONE field. */
#define CLOCK_INTENCLR_DONE_Disabled (0UL) /*!< Read: Disabled */
#define CLOCK_INTENCLR_DONE_Enabled (1UL) /*!< Read: Enabled */
#define CLOCK_INTENCLR_DONE_Clear (1UL) /*!< Disable */

/* Bit 1 : Write '1' to Disable interrupt for LFCLKSTARTED event */
#define CLOCK_INTENCLR_LFCLKSTARTED_Pos (1UL) /*!< Position of LFCLKSTARTED field. */
#define CLOCK_INTENCLR_LFCLKSTARTED_Msk (0x1UL << CLOCK_INTENCLR_LFCLKSTARTED_Pos) /*!< Bit mask of LFCLKSTARTED field. */
#define CLOCK_INTENCLR_LFCLKSTARTED_Disabled (0UL) /*!< Read: Disabled */
#define CLOCK_INTENCLR_LFCLKSTARTED_Enabled (1UL) /*!< Read: Enabled */
#define CLOCK_INTENCLR_LFCLKSTARTED_Clear (1UL) /*!< Disable */

/* Bit 0 : Write '1' to Disable interrupt for HFCLKSTARTED event */
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
#define CLOCK_HFCLKSTAT_SRC_RC (0UL) /*!< 16 MHz RC oscillator running and generating the HFCLK */
#define CLOCK_HFCLKSTAT_SRC_Xtal (1UL) /*!< 16 MHz HFCLK crystal oscillator running and generating the HFCLK */

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

/* Register: CLOCK_HFCLKSRC */
/* Description: Clock source for the HFCLK crystal oscillator. This register shall only be written while no oscillation is present on XC1. Failing to do so may cause unexpected behaviour. */

/* Bit 16 : Enable or disable bypass of HFCLK crystal oscillator */
#define CLOCK_HFCLKSRC_BYPASS_Pos (16UL) /*!< Position of BYPASS field. */
#define CLOCK_HFCLKSRC_BYPASS_Msk (0x1UL << CLOCK_HFCLKSRC_BYPASS_Pos) /*!< Bit mask of BYPASS field. */
#define CLOCK_HFCLKSRC_BYPASS_Disabled (0UL) /*!< Disable */
#define CLOCK_HFCLKSRC_BYPASS_Enabled (1UL) /*!< Enable */

/* Bit 0 : Enable or disable use of external clock source */
#define CLOCK_HFCLKSRC_SRC_Pos (0UL) /*!< Position of SRC field. */
#define CLOCK_HFCLKSRC_SRC_Msk (0x1UL << CLOCK_HFCLKSRC_SRC_Pos) /*!< Bit mask of SRC field. */
#define CLOCK_HFCLKSRC_SRC_Disabled (0UL) /*!< Disable */
#define CLOCK_HFCLKSRC_SRC_Enabled (1UL) /*!< Enable */

/* Register: CLOCK_LFCLKSRC */
/* Description: Clock source for the LFCLK */

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
/* Description: 32kHz RC oscillator calibration length (retained register, same reset behaviour as RESETREAS) */

/* Bits 2..0 : 32kHz RC oscillator calibration length in number of cycles */
#define CLOCK_RCOSC32KICALLENGTH_RCOSC32KICALLENGTH_Pos (0UL) /*!< Position of RCOSC32KICALLENGTH field. */
#define CLOCK_RCOSC32KICALLENGTH_RCOSC32KICALLENGTH_Msk (0x7UL << CLOCK_RCOSC32KICALLENGTH_RCOSC32KICALLENGTH_Pos) /*!< Bit mask of RCOSC32KICALLENGTH field. */
#define CLOCK_RCOSC32KICALLENGTH_RCOSC32KICALLENGTH_N256 (2UL) /*!< 256 cycles */
#define CLOCK_RCOSC32KICALLENGTH_RCOSC32KICALLENGTH_N512 (3UL) /*!< 512 cycles */
#define CLOCK_RCOSC32KICALLENGTH_RCOSC32KICALLENGTH_N1024 (4UL) /*!< 1024 cycles */
#define CLOCK_RCOSC32KICALLENGTH_RCOSC32KICALLENGTH_N2048 (5UL) /*!< 2048 cycles */

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

/* Register: CLOCK_XTALFREQ */
/* Description: Crystal frequency */

/* Bits 7..0 : Select nominal frequency of external crystal for HFCLK. This register has to match the actual crystal used in design to enable correct behaviour. */
#define CLOCK_XTALFREQ_XTALFREQ_Pos (0UL) /*!< Position of XTALFREQ field. */
#define CLOCK_XTALFREQ_XTALFREQ_Msk (0xFFUL << CLOCK_XTALFREQ_XTALFREQ_Pos) /*!< Bit mask of XTALFREQ field. */
#define CLOCK_XTALFREQ_XTALFREQ_32MHz (0x00UL) /*!< 32 MHz crystal is used */
#define CLOCK_XTALFREQ_XTALFREQ_16MHz (0xFFUL) /*!< 16 MHz crystal is used */

/* Register: CLOCK_GATE_CPU */
/* Description: CPU clock gating */

/* Bit 0 : Enable or disable clock gating of CPU clock in CPU sleep, i.e. WFI and WFE type sleep */
#define CLOCK_GATE_CPU_CPU_Pos (0UL) /*!< Position of CPU field. */
#define CLOCK_GATE_CPU_CPU_Msk (0x1UL << CLOCK_GATE_CPU_CPU_Pos) /*!< Bit mask of CPU field. */
#define CLOCK_GATE_CPU_CPU_Disabled (0UL) /*!< Disable */
#define CLOCK_GATE_CPU_CPU_Enabled (1UL) /*!< Enable */


/* Peripheral: ECB */
/* Description: AES ECB Mode Encryption */

/* Register: ECB_INTENSET */
/* Description: Enable interrupt */

/* Bit 1 : Write '1' to Enable interrupt for ERRORECB event */
#define ECB_INTENSET_ERRORECB_Pos (1UL) /*!< Position of ERRORECB field. */
#define ECB_INTENSET_ERRORECB_Msk (0x1UL << ECB_INTENSET_ERRORECB_Pos) /*!< Bit mask of ERRORECB field. */
#define ECB_INTENSET_ERRORECB_Disabled (0UL) /*!< Read: Disabled */
#define ECB_INTENSET_ERRORECB_Enabled (1UL) /*!< Read: Enabled */
#define ECB_INTENSET_ERRORECB_Set (1UL) /*!< Enable */

/* Bit 0 : Write '1' to Enable interrupt for ENDECB event */
#define ECB_INTENSET_ENDECB_Pos (0UL) /*!< Position of ENDECB field. */
#define ECB_INTENSET_ENDECB_Msk (0x1UL << ECB_INTENSET_ENDECB_Pos) /*!< Bit mask of ENDECB field. */
#define ECB_INTENSET_ENDECB_Disabled (0UL) /*!< Read: Disabled */
#define ECB_INTENSET_ENDECB_Enabled (1UL) /*!< Read: Enabled */
#define ECB_INTENSET_ENDECB_Set (1UL) /*!< Enable */

/* Register: ECB_INTENCLR */
/* Description: Disable interrupt */

/* Bit 1 : Write '1' to Disable interrupt for ERRORECB event */
#define ECB_INTENCLR_ERRORECB_Pos (1UL) /*!< Position of ERRORECB field. */
#define ECB_INTENCLR_ERRORECB_Msk (0x1UL << ECB_INTENCLR_ERRORECB_Pos) /*!< Bit mask of ERRORECB field. */
#define ECB_INTENCLR_ERRORECB_Disabled (0UL) /*!< Read: Disabled */
#define ECB_INTENCLR_ERRORECB_Enabled (1UL) /*!< Read: Enabled */
#define ECB_INTENCLR_ERRORECB_Clear (1UL) /*!< Disable */

/* Bit 0 : Write '1' to Disable interrupt for ENDECB event */
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


/* Peripheral: FICR */
/* Description: Factory Information Configuration Registers */

/* Register: FICR_CPTEST0 */
/* Description: Result from Circuit Probe test */

/* Bits 31..0 : Result from Circuit Probe test */
#define FICR_CPTEST0_CPTEST0_Pos (0UL) /*!< Position of CPTEST0 field. */
#define FICR_CPTEST0_CPTEST0_Msk (0xFFFFFFFFUL << FICR_CPTEST0_CPTEST0_Pos) /*!< Bit mask of CPTEST0 field. */

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

/* Register: FICR_ADC_ADJUST */
/* Description: ADC result adjustment parameters */

/* Bits 15..8 : Signed gain that can be applied to ADC result for increase accuracyAccurateResult=ADC.RESULT * (1024 + GAIN) / 1024 + OFFSET - 0.5 */
#define FICR_ADC_ADJUST_GAIN_Pos (8UL) /*!< Position of GAIN field. */
#define FICR_ADC_ADJUST_GAIN_Msk (0xFFUL << FICR_ADC_ADJUST_GAIN_Pos) /*!< Bit mask of GAIN field. */

/* Bits 7..0 : Signed offset that can be applied to ADC result for increase accuracy */
#define FICR_ADC_ADJUST_OFFSET_Pos (0UL) /*!< Position of OFFSET field. */
#define FICR_ADC_ADJUST_OFFSET_Msk (0xFFUL << FICR_ADC_ADJUST_OFFSET_Pos) /*!< Bit mask of OFFSET field. */

/* Register: FICR_CLENR0 */
/* Description: Deprecated register -  Length of Code region 0 in bytes */

/* Bits 31..0 : Length of code region 0 in bytes */
#define FICR_CLENR0_CLENR0_Pos (0UL) /*!< Position of CLENR0 field. */
#define FICR_CLENR0_CLENR0_Msk (0xFFFFFFFFUL << FICR_CLENR0_CLENR0_Pos) /*!< Bit mask of CLENR0 field. */

/* Register: FICR_PPFC */
/* Description: Deprecated register -  Pre-programmed factory Code present */

/* Bits 7..0 : Pre-programmed factory Code present or not */
#define FICR_PPFC_PPFC_Pos (0UL) /*!< Position of PPFC field. */
#define FICR_PPFC_PPFC_Msk (0xFFUL << FICR_PPFC_PPFC_Pos) /*!< Bit mask of PPFC field. */
#define FICR_PPFC_PPFC_Present (0x00UL) /*!< Present */
#define FICR_PPFC_PPFC_NotPresent (0xFFUL) /*!< Not present */

/* Register: FICR_MPUEN */
/* Description: Deprecated register -  Enable Memory Protection Unit (MPU). Will be set during production test. */

/* Bits 7..0 : Enable or disable Memory Protection Unit (MPU). Note that the MPU must be enabled for any read-back protection to apply. */
#define FICR_MPUEN_MPUEN_Pos (0UL) /*!< Position of MPUEN field. */
#define FICR_MPUEN_MPUEN_Msk (0xFFUL << FICR_MPUEN_MPUEN_Pos) /*!< Bit mask of MPUEN field. */
#define FICR_MPUEN_MPUEN_Enabled (0x00UL) /*!< Enable */
#define FICR_MPUEN_MPUEN_Disabled (0xFFUL) /*!< Disable */

/* Register: FICR_NUMRAMBLOCK */
/* Description: Number of individually controllable RAM blocks */

/* Bits 31..0 : Number of individually controllable RAM blocks */
#define FICR_NUMRAMBLOCK_NUMRAMBLOCK_Pos (0UL) /*!< Position of NUMRAMBLOCK field. */
#define FICR_NUMRAMBLOCK_NUMRAMBLOCK_Msk (0xFFFFFFFFUL << FICR_NUMRAMBLOCK_NUMRAMBLOCK_Pos) /*!< Bit mask of NUMRAMBLOCK field. */

/* Register: FICR_SIZERAMBLOCKS */
/* Description: RAM block size, in bytes */

/* Bits 31..0 : RAM block size, in bytes */
#define FICR_SIZERAMBLOCKS_SIZERAMBLOCKS_Pos (0UL) /*!< Position of SIZERAMBLOCKS field. */
#define FICR_SIZERAMBLOCKS_SIZERAMBLOCKS_Msk (0xFFFFFFFFUL << FICR_SIZERAMBLOCKS_SIZERAMBLOCKS_Pos) /*!< Bit mask of SIZERAMBLOCKS field. */

/* Register: FICR_SIZERAMBLOCK */
/* Description: Description collection[0]: Deprecated register -  Size of RAM block 0, in bytes */

/* Bits 31..0 : Size of RAM block n, in bytes */
#define FICR_SIZERAMBLOCK_SIZERAMBLOCK_Pos (0UL) /*!< Position of SIZERAMBLOCK field. */
#define FICR_SIZERAMBLOCK_SIZERAMBLOCK_Msk (0xFFFFFFFFUL << FICR_SIZERAMBLOCK_SIZERAMBLOCK_Pos) /*!< Bit mask of SIZERAMBLOCK field. */

/* Register: FICR_CHIPCONF0 */
/* Description: Miscellaneous analog configuration. Will be set during production test. */

/* Bits 31..28 : Radio current reference trim code */
#define FICR_CHIPCONF0_RADIOCURTRIM_Pos (28UL) /*!< Position of RADIOCURTRIM field. */
#define FICR_CHIPCONF0_RADIOCURTRIM_Msk (0xFUL << FICR_CHIPCONF0_RADIOCURTRIM_Pos) /*!< Bit mask of RADIOCURTRIM field. */

/* Bits 27..24 : Radio bandgap reference trim code */
#define FICR_CHIPCONF0_RADIOBGTRIM_Pos (24UL) /*!< Position of RADIOBGTRIM field. */
#define FICR_CHIPCONF0_RADIOBGTRIM_Msk (0xFUL << FICR_CHIPCONF0_RADIOBGTRIM_Pos) /*!< Bit mask of RADIOBGTRIM field. */

/* Bits 23..19 : Bandgap-reference trim code */
#define FICR_CHIPCONF0_BGREF_Pos (19UL) /*!< Position of BGREF field. */
#define FICR_CHIPCONF0_BGREF_Msk (0x1FUL << FICR_CHIPCONF0_BGREF_Pos) /*!< Bit mask of BGREF field. */

/* Bits 18..13 : 32.678 kHz RC-oscillator trim code */
#define FICR_CHIPCONF0_RC32KITRIM_Pos (13UL) /*!< Position of RC32KITRIM field. */
#define FICR_CHIPCONF0_RC32KITRIM_Msk (0x3FUL << FICR_CHIPCONF0_RC32KITRIM_Pos) /*!< Bit mask of RC32KITRIM field. */

/* Bits 11..7 : 16 MHz RC-oscillator trim codes */
#define FICR_CHIPCONF0_RC16MTRIM_Pos (7UL) /*!< Position of RC16MTRIM field. */
#define FICR_CHIPCONF0_RC16MTRIM_Msk (0x1FUL << FICR_CHIPCONF0_RC16MTRIM_Pos) /*!< Bit mask of RC16MTRIM field. */

/* Bits 6..4 : Package type */
#define FICR_CHIPCONF0_PACKAGE_Pos (4UL) /*!< Position of PACKAGE field. */
#define FICR_CHIPCONF0_PACKAGE_Msk (0x7UL << FICR_CHIPCONF0_PACKAGE_Pos) /*!< Bit mask of PACKAGE field. */
#define FICR_CHIPCONF0_PACKAGE_48PIN (0x0UL) /*!< 48 pins package is used for die */
#define FICR_CHIPCONF0_PACKAGE_40PIN (0x1UL) /*!< 40 pins package is used for die */
#define FICR_CHIPCONF0_PACKAGE_32PIN (0x2UL) /*!< 32 pins package is used for die */
#define FICR_CHIPCONF0_PACKAGE_24PIN (0x3UL) /*!< 24 pins package is used for die */

/* Bit 3 : ULV (Ultra Low Voltage) mode enabled. In this mode the internal digital voltage is lowered when 16 Mhz clock is not running. */
#define FICR_CHIPCONF0_ENULV_Pos (3UL) /*!< Position of ENULV field. */
#define FICR_CHIPCONF0_ENULV_Msk (0x1UL << FICR_CHIPCONF0_ENULV_Pos) /*!< Bit mask of ENULV field. */

/* Bit 1 : Deprecated field -  Block CSTEP command */
#define FICR_CHIPCONF0_BLOCKCSTEP_Pos (1UL) /*!< Position of BLOCKCSTEP field. */
#define FICR_CHIPCONF0_BLOCKCSTEP_Msk (0x1UL << FICR_CHIPCONF0_BLOCKCSTEP_Pos) /*!< Bit mask of BLOCKCSTEP field. */

/* Register: FICR_CHIPCONF1 */
/* Description: Miscellaneous analog configuration. Will be set during production test. */

/* Bits 31..22 : Temp sensor trim code. Used to calibrate the value measured value with from 0 to 255.75 C in steps of 0.25 C.Typical values are 0x298..0x2D0. */
#define FICR_CHIPCONF1_TEMPTRIM_Pos (22UL) /*!< Position of TEMPTRIM field. */
#define FICR_CHIPCONF1_TEMPTRIM_Msk (0x3FFUL << FICR_CHIPCONF1_TEMPTRIM_Pos) /*!< Bit mask of TEMPTRIM field. */

/* Bits 21..19 : DC/DC converter output level. V(out) = 1.8 V + 0.1 * DCDCOUTP. */
#define FICR_CHIPCONF1_DCDCOUTP_Pos (19UL) /*!< Position of DCDCOUTP field. */
#define FICR_CHIPCONF1_DCDCOUTP_Msk (0x7UL << FICR_CHIPCONF1_DCDCOUTP_Pos) /*!< Bit mask of DCDCOUTP field. */

/* Bit 18 : DC/DC converter frequency */
#define FICR_CHIPCONF1_DCDCFREQ_Pos (18UL) /*!< Position of DCDCFREQ field. */
#define FICR_CHIPCONF1_DCDCFREQ_Msk (0x1UL << FICR_CHIPCONF1_DCDCFREQ_Pos) /*!< Bit mask of DCDCFREQ field. */
#define FICR_CHIPCONF1_DCDCFREQ_16M (0UL) /*!< DC/DC converter is operating at 16 MHz */
#define FICR_CHIPCONF1_DCDCFREQ_8M (1UL) /*!< DC/DC converter is operating at 8 MHz */

/* Bit 17 : Deprecated field -  Enable DC/DC converter (when cleared). Active low. */
#define FICR_CHIPCONF1_DCDCEN_N_Pos (17UL) /*!< Position of DCDCEN_N field. */
#define FICR_CHIPCONF1_DCDCEN_N_Msk (0x1UL << FICR_CHIPCONF1_DCDCEN_N_Pos) /*!< Bit mask of DCDCEN_N field. */

/* Bit 13 : If cleared, RAM block 2 and RAM block 3 will be forced off independent of POWER-&gt;RAMONB setting */
#define FICR_CHIPCONF1_FORCEOFFRAM_Pos (13UL) /*!< Position of FORCEOFFRAM field. */
#define FICR_CHIPCONF1_FORCEOFFRAM_Msk (0x1UL << FICR_CHIPCONF1_FORCEOFFRAM_Pos) /*!< Bit mask of FORCEOFFRAM field. */

/* Bit 12 : Enable wait on ready upon accessing SRAM when turned on */
#define FICR_CHIPCONF1_SRAMWAITEN_Pos (12UL) /*!< Position of SRAMWAITEN field. */
#define FICR_CHIPCONF1_SRAMWAITEN_Msk (0x1UL << FICR_CHIPCONF1_SRAMWAITEN_Pos) /*!< Bit mask of SRAMWAITEN field. */

/* Bit 11 : Enable low power BOR. Active low. */
#define FICR_CHIPCONF1_LPBOR_N_Pos (11UL) /*!< Position of LPBOR_N field. */
#define FICR_CHIPCONF1_LPBOR_N_Msk (0x1UL << FICR_CHIPCONF1_LPBOR_N_Pos) /*!< Bit mask of LPBOR_N field. */

/* Bits 10..6 : RSSI gain trim code (2's complement value) (16). 1 RSSI gain trim code can be in the range from -16 to 15. */
#define FICR_CHIPCONF1_RSSIGAIN_Pos (6UL) /*!< Position of RSSIGAIN field. */
#define FICR_CHIPCONF1_RSSIGAIN_Msk (0x1FUL << FICR_CHIPCONF1_RSSIGAIN_Pos) /*!< Bit mask of RSSIGAIN field. */

/* Bits 5..0 : RSSI-offset trim code in dBm (2's complement value). RSSI offset value can be in the range from -32 to 31 dBm. */
#define FICR_CHIPCONF1_RSSIOFFSET_Pos (0UL) /*!< Position of RSSIOFFSET field. */
#define FICR_CHIPCONF1_RSSIOFFSET_Msk (0x3FUL << FICR_CHIPCONF1_RSSIOFFSET_Pos) /*!< Bit mask of RSSIOFFSET field. */

/* Register: FICR_CHIPCONF2 */
/* Description: Miscellaneous analog configuration. Will be set during production test. */

/* Bits 18..16 : 32kHz RC oscillator calibration length in number of cycles */
#define FICR_CHIPCONF2_RCOSC32KICALLENGTH_Pos (16UL) /*!< Position of RCOSC32KICALLENGTH field. */
#define FICR_CHIPCONF2_RCOSC32KICALLENGTH_Msk (0x7UL << FICR_CHIPCONF2_RCOSC32KICALLENGTH_Pos) /*!< Bit mask of RCOSC32KICALLENGTH field. */
#define FICR_CHIPCONF2_RCOSC32KICALLENGTH_N256 (2UL) /*!< 256 cycles */
#define FICR_CHIPCONF2_RCOSC32KICALLENGTH_N512 (3UL) /*!< 512 cycles */
#define FICR_CHIPCONF2_RCOSC32KICALLENGTH_N1024 (4UL) /*!< 1024 cycles */
#define FICR_CHIPCONF2_RCOSC32KICALLENGTH_N2048 (5UL) /*!< 2048 cycles */

/* Bits 15..11 : # cycles before Information Configuration Registers can be read */
#define FICR_CHIPCONF2_IFCREADDELAY_Pos (11UL) /*!< Position of IFCREADDELAY field. */
#define FICR_CHIPCONF2_IFCREADDELAY_Msk (0x1FUL << FICR_CHIPCONF2_IFCREADDELAY_Pos) /*!< Bit mask of IFCREADDELAY field. */

/* Bits 10..8 : Deprecated field -  ckClip delay cells, second path. Sets delay of falling edge of clock to NV Memory. */
#define FICR_CHIPCONF2_CKCLIPDELAY2_Pos (8UL) /*!< Position of CKCLIPDELAY2 field. */
#define FICR_CHIPCONF2_CKCLIPDELAY2_Msk (0x7UL << FICR_CHIPCONF2_CKCLIPDELAY2_Pos) /*!< Bit mask of CKCLIPDELAY2 field. */

/* Bits 7..5 : Deprecated field -  ckClip delay cells, first path. Sets delay of rising edge of clock to NV Memory. */
#define FICR_CHIPCONF2_CKCLIPDELAY1_Pos (5UL) /*!< Position of CKCLIPDELAY1 field. */
#define FICR_CHIPCONF2_CKCLIPDELAY1_Msk (0x7UL << FICR_CHIPCONF2_CKCLIPDELAY1_Pos) /*!< Bit mask of CKCLIPDELAY1 field. */

/* Bit 4 : Deprecated field -  ckClip cut or extend trim code */
#define FICR_CHIPCONF2_CKCLIPTRIMSEL_Pos (4UL) /*!< Position of CKCLIPTRIMSEL field. */
#define FICR_CHIPCONF2_CKCLIPTRIMSEL_Msk (0x1UL << FICR_CHIPCONF2_CKCLIPTRIMSEL_Pos) /*!< Bit mask of CKCLIPTRIMSEL field. */
#define FICR_CHIPCONF2_CKCLIPTRIMSEL_Cut (0UL) /*!< Cut high period of clock to NV memory */
#define FICR_CHIPCONF2_CKCLIPTRIMSEL_Extend (1UL) /*!< Extend high period of clock to NV memory */

/* Bits 3..0 : Reserved for charge pump trim code */
#define FICR_CHIPCONF2_CHPTRIM_Pos (0UL) /*!< Position of CHPTRIM field. */
#define FICR_CHIPCONF2_CHPTRIM_Msk (0xFUL << FICR_CHIPCONF2_CHPTRIM_Pos) /*!< Bit mask of CHPTRIM field. */

/* Register: FICR_DEVICETYPE */
/* Description: Device type */

/* Bits 31..0 : Device type */
#define FICR_DEVICETYPE_DEVICETYPE_Pos (0UL) /*!< Position of DEVICETYPE field. */
#define FICR_DEVICETYPE_DEVICETYPE_Msk (0xFFFFFFFFUL << FICR_DEVICETYPE_DEVICETYPE_Pos) /*!< Bit mask of DEVICETYPE field. */
#define FICR_DEVICETYPE_DEVICETYPE_Die (0x0000000UL) /*!< Device is an physical DIE */
#define FICR_DEVICETYPE_DEVICETYPE_FPGA (0xFFFFFFFFUL) /*!< Device is an FPGA */

/* Register: FICR_CONFIGID */
/* Description: Configuration identifier */

/* Bits 31..16 : Deprecated field -  Identification number for the FW that is pre-loaded into the chip */
#define FICR_CONFIGID_FWID_Pos (16UL) /*!< Position of FWID field. */
#define FICR_CONFIGID_FWID_Msk (0xFFFFUL << FICR_CONFIGID_FWID_Pos) /*!< Bit mask of FWID field. */

/* Bits 15..0 : Identification number for the HW */
#define FICR_CONFIGID_HWID_Pos (0UL) /*!< Position of HWID field. */
#define FICR_CONFIGID_HWID_Msk (0xFFFFUL << FICR_CONFIGID_HWID_Pos) /*!< Bit mask of HWID field. */

/* Register: FICR_DEVICEID */
/* Description: Description collection[0]:  Device identifier */

/* Bits 31..0 : 64 bit unique device identifier */
#define FICR_DEVICEID_DEVICEID_Pos (0UL) /*!< Position of DEVICEID field. */
#define FICR_DEVICEID_DEVICEID_Msk (0xFFFFFFFFUL << FICR_DEVICEID_DEVICEID_Pos) /*!< Bit mask of DEVICEID field. */

/* Register: FICR_CPTEST1 */
/* Description: Result from Circuit Probe test */

/* Bits 31..0 : Result from Circuit Probe test */
#define FICR_CPTEST1_CPTEST1_Pos (0UL) /*!< Position of CPTEST1 field. */
#define FICR_CPTEST1_CPTEST1_Msk (0xFFFFFFFFUL << FICR_CPTEST1_CPTEST1_Pos) /*!< Bit mask of CPTEST1 field. */

/* Register: FICR_CPTEST2 */
/* Description: Result from Circuit Probe test */

/* Bits 31..0 : Result from Circuit Probe test */
#define FICR_CPTEST2_CPTEST2_Pos (0UL) /*!< Position of CPTEST2 field. */
#define FICR_CPTEST2_CPTEST2_Msk (0xFFFFFFFFUL << FICR_CPTEST2_CPTEST2_Pos) /*!< Bit mask of CPTEST2 field. */

/* Register: FICR_CPTEST3 */
/* Description: Result from Circuit Probe test */

/* Bits 31..0 : Result from Circuit Probe test */
#define FICR_CPTEST3_CPTEST3_Pos (0UL) /*!< Position of CPTEST3 field. */
#define FICR_CPTEST3_CPTEST3_Msk (0xFFFFFFFFUL << FICR_CPTEST3_CPTEST3_Pos) /*!< Bit mask of CPTEST3 field. */

/* Register: FICR_CPTEST4 */
/* Description: Result from Circuit Probe test */

/* Bits 31..0 : Result from Circuit Probe test */
#define FICR_CPTEST4_CPTEST4_Pos (0UL) /*!< Position of CPTEST4 field. */
#define FICR_CPTEST4_CPTEST4_Msk (0xFFFFFFFFUL << FICR_CPTEST4_CPTEST4_Pos) /*!< Bit mask of CPTEST4 field. */

/* Register: FICR_ER */
/* Description: Description collection[0]:  Encryption Root, word 0 */

/* Bits 31..0 : Encryption Root, word n */
#define FICR_ER_ER_Pos (0UL) /*!< Position of ER field. */
#define FICR_ER_ER_Msk (0xFFFFFFFFUL << FICR_ER_ER_Pos) /*!< Bit mask of ER field. */

/* Register: FICR_IR */
/* Description: Description collection[0]:  Identity Root, word 0 */

/* Bits 31..0 : Identity Root, word n */
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
/* Description: Description collection[0]:  Device address 0 */

/* Bits 31..0 : 48 bit device address */
#define FICR_DEVICEADDR_DEVICEADDR_Pos (0UL) /*!< Position of DEVICEADDR field. */
#define FICR_DEVICEADDR_DEVICEADDR_Msk (0xFFFFFFFFUL << FICR_DEVICEADDR_DEVICEADDR_Pos) /*!< Bit mask of DEVICEADDR field. */

/* Register: FICR_OVERRIDEEN */
/* Description: Override enable */

/* Bit 3 : Override default values for BLE_1MBIT mode */
#define FICR_OVERRIDEEN_BLE_1MBIT_Pos (3UL) /*!< Position of BLE_1MBIT field. */
#define FICR_OVERRIDEEN_BLE_1MBIT_Msk (0x1UL << FICR_OVERRIDEEN_BLE_1MBIT_Pos) /*!< Bit mask of BLE_1MBIT field. */
#define FICR_OVERRIDEEN_BLE_1MBIT_Override (0UL) /*!< Override */
#define FICR_OVERRIDEEN_BLE_1MBIT_NotOverride (1UL) /*!< Do not override */

/* Bit 2 : Override default values for NRF_250KBIT mode */
#define FICR_OVERRIDEEN_NRF_250KBIT_Pos (2UL) /*!< Position of NRF_250KBIT field. */
#define FICR_OVERRIDEEN_NRF_250KBIT_Msk (0x1UL << FICR_OVERRIDEEN_NRF_250KBIT_Pos) /*!< Bit mask of NRF_250KBIT field. */
#define FICR_OVERRIDEEN_NRF_250KBIT_Override (0UL) /*!< Override */
#define FICR_OVERRIDEEN_NRF_250KBIT_NotOverride (1UL) /*!< Do not override */

/* Bit 1 : Override default values for NRF_2MBIT mode */
#define FICR_OVERRIDEEN_NRF_2MBIT_Pos (1UL) /*!< Position of NRF_2MBIT field. */
#define FICR_OVERRIDEEN_NRF_2MBIT_Msk (0x1UL << FICR_OVERRIDEEN_NRF_2MBIT_Pos) /*!< Bit mask of NRF_2MBIT field. */
#define FICR_OVERRIDEEN_NRF_2MBIT_Override (0UL) /*!< Override */
#define FICR_OVERRIDEEN_NRF_2MBIT_NotOverride (1UL) /*!< Do not override */

/* Bit 0 : Override default values for NRF_1MBIT mode */
#define FICR_OVERRIDEEN_NRF_1MBIT_Pos (0UL) /*!< Position of NRF_1MBIT field. */
#define FICR_OVERRIDEEN_NRF_1MBIT_Msk (0x1UL << FICR_OVERRIDEEN_NRF_1MBIT_Pos) /*!< Bit mask of NRF_1MBIT field. */
#define FICR_OVERRIDEEN_NRF_1MBIT_Override (0UL) /*!< Override */
#define FICR_OVERRIDEEN_NRF_1MBIT_NotOverride (1UL) /*!< Do not override */

/* Register: FICR_NRF_1MBIT */
/* Description: Description collection[0]:  Override value for NRF_1MBIT mode */

/* Bits 31..0 : Override values for 1Mbit proprietary mode */
#define FICR_NRF_1MBIT_OVERRIDE_Pos (0UL) /*!< Position of OVERRIDE field. */
#define FICR_NRF_1MBIT_OVERRIDE_Msk (0xFFFFFFFFUL << FICR_NRF_1MBIT_OVERRIDE_Pos) /*!< Bit mask of OVERRIDE field. */

/* Register: FICR_NRF_2MBIT */
/* Description: Description collection[0]:  Override value for NRF_2MBIT mode */

/* Bits 31..0 : Override value for 2Mbit proprietary mode */
#define FICR_NRF_2MBIT_NRF_2MBIT_Pos (0UL) /*!< Position of NRF_2MBIT field. */
#define FICR_NRF_2MBIT_NRF_2MBIT_Msk (0xFFFFFFFFUL << FICR_NRF_2MBIT_NRF_2MBIT_Pos) /*!< Bit mask of NRF_2MBIT field. */

/* Register: FICR_NRF_250KBIT */
/* Description: Description collection[0]:  Override value for NRF_250KBIT mode */

/* Bits 31..0 : Override values for 250 kbit proprietary mode */
#define FICR_NRF_250KBIT_NRF_250KBIT_Pos (0UL) /*!< Position of NRF_250KBIT field. */
#define FICR_NRF_250KBIT_NRF_250KBIT_Msk (0xFFFFFFFFUL << FICR_NRF_250KBIT_NRF_250KBIT_Pos) /*!< Bit mask of NRF_250KBIT field. */

/* Register: FICR_BLE_1MBIT */
/* Description: Description collection[0]:  Override value for BLE_1MBIT mode */

/* Bits 31..0 : Override value for 1 Mbit BLE mode */
#define FICR_BLE_1MBIT_OVERRIDE_Pos (0UL) /*!< Position of OVERRIDE field. */
#define FICR_BLE_1MBIT_OVERRIDE_Msk (0xFFFFFFFFUL << FICR_BLE_1MBIT_OVERRIDE_Pos) /*!< Bit mask of OVERRIDE field. */

/* Register: FICR_OTP */
/* Description: Description collection[0]:  One Time Programmable Register 0 */

/* Bits 31..0 : One Time Programmable Register */
#define FICR_OTP_OTP_Pos (0UL) /*!< Position of OTP field. */
#define FICR_OTP_OTP_Msk (0xFFFFFFFFUL << FICR_OTP_OTP_Pos) /*!< Bit mask of OTP field. */

/* Register: FICR_CPTEST5 */
/* Description: Result from Circuit Probe test, flash repair information */

/* Bits 31..0 : flash repair information */
#define FICR_CPTEST5_CPTEST5_Pos (0UL) /*!< Position of CPTEST5 field. */
#define FICR_CPTEST5_CPTEST5_Msk (0xFFFFFFFFUL << FICR_CPTEST5_CPTEST5_Pos) /*!< Bit mask of CPTEST5 field. */

/* Register: FICR_CPTEST6 */
/* Description: Result from Circuit Probe test, flash repair information */

/* Bits 31..0 : flash repair information */
#define FICR_CPTEST6_CPTEST6_Pos (0UL) /*!< Position of CPTEST6 field. */
#define FICR_CPTEST6_CPTEST6_Msk (0xFFFFFFFFUL << FICR_CPTEST6_CPTEST6_Pos) /*!< Bit mask of CPTEST6 field. */

/* Register: FICR_CPTEST7 */
/* Description: Result from Circuit Probe test, flash repair information */

/* Bits 31..0 : flash repair information */
#define FICR_CPTEST7_CPTEST7_Pos (0UL) /*!< Position of CPTEST7 field. */
#define FICR_CPTEST7_CPTEST7_Msk (0xFFFFFFFFUL << FICR_CPTEST7_CPTEST7_Pos) /*!< Bit mask of CPTEST7 field. */

/* Register: FICR_CPTEST8 */
/* Description: Result from Circuit Probe test, flash repair information */

/* Bits 31..0 : flash repair information */
#define FICR_CPTEST8_CPTEST8_Pos (0UL) /*!< Position of CPTEST8 field. */
#define FICR_CPTEST8_CPTEST8_Msk (0xFFFFFFFFUL << FICR_CPTEST8_CPTEST8_Pos) /*!< Bit mask of CPTEST8 field. */


/* Peripheral: GPIO */
/* Description: GPIO Port 0 */

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

/* Register: GPIO_PIN_OUT */
/* Description: Description cluster[0]:  Pin 0 direct access output register */

/* Bit 0 : Direct access */
#define GPIO_PIN_OUT_OUT_Pos (0UL) /*!< Position of OUT field. */
#define GPIO_PIN_OUT_OUT_Msk (0x1UL << GPIO_PIN_OUT_OUT_Pos) /*!< Bit mask of OUT field. */

/* Register: GPIO_PIN_IN */
/* Description: Description cluster[0]:  Pin 0 direct access input register */

/* Bit 0 : Direct access */
#define GPIO_PIN_IN_IN_Pos (0UL) /*!< Position of IN field. */
#define GPIO_PIN_IN_IN_Msk (0x1UL << GPIO_PIN_IN_IN_Pos) /*!< Bit mask of IN field. */

/* Register: GPIO_PIN_CNF */
/* Description: Description collection[0]:  Configuration of GPIO pins */

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
#define GPIO_PIN_CNF_DRIVE_D0S1 (4UL) /*!< Disconnect '0' standard '1' */
#define GPIO_PIN_CNF_DRIVE_D0H1 (5UL) /*!< Disconnect '0', high drive '1' */
#define GPIO_PIN_CNF_DRIVE_S0D1 (6UL) /*!< Standard '0'. disconnect '1' */
#define GPIO_PIN_CNF_DRIVE_H0D1 (7UL) /*!< High drive '0', disconnect '1' */

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

/* Bit 0 : Pin direction */
#define GPIO_PIN_CNF_DIR_Pos (0UL) /*!< Position of DIR field. */
#define GPIO_PIN_CNF_DIR_Msk (0x1UL << GPIO_PIN_CNF_DIR_Pos) /*!< Bit mask of DIR field. */
#define GPIO_PIN_CNF_DIR_Input (0UL) /*!< Configure pin as an input pin */
#define GPIO_PIN_CNF_DIR_Output (1UL) /*!< Configure pin as an output pin */


/* Peripheral: GPIOTE */
/* Description: GPIO Tasks and Events */

/* Register: GPIOTE_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 31 : Enable or disable interrupt for PORT event */
#define GPIOTE_INTEN_PORT_Pos (31UL) /*!< Position of PORT field. */
#define GPIOTE_INTEN_PORT_Msk (0x1UL << GPIOTE_INTEN_PORT_Pos) /*!< Bit mask of PORT field. */
#define GPIOTE_INTEN_PORT_Disabled (0UL) /*!< Disable */
#define GPIOTE_INTEN_PORT_Enabled (1UL) /*!< Enable */

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

/* Bit 31 : Write '1' to Enable interrupt for PORT event */
#define GPIOTE_INTENSET_PORT_Pos (31UL) /*!< Position of PORT field. */
#define GPIOTE_INTENSET_PORT_Msk (0x1UL << GPIOTE_INTENSET_PORT_Pos) /*!< Bit mask of PORT field. */
#define GPIOTE_INTENSET_PORT_Disabled (0UL) /*!< Read: Disabled */
#define GPIOTE_INTENSET_PORT_Enabled (1UL) /*!< Read: Enabled */
#define GPIOTE_INTENSET_PORT_Set (1UL) /*!< Enable */

/* Bit 3 : Write '1' to Enable interrupt for IN[3] event */
#define GPIOTE_INTENSET_IN3_Pos (3UL) /*!< Position of IN3 field. */
#define GPIOTE_INTENSET_IN3_Msk (0x1UL << GPIOTE_INTENSET_IN3_Pos) /*!< Bit mask of IN3 field. */
#define GPIOTE_INTENSET_IN3_Disabled (0UL) /*!< Read: Disabled */
#define GPIOTE_INTENSET_IN3_Enabled (1UL) /*!< Read: Enabled */
#define GPIOTE_INTENSET_IN3_Set (1UL) /*!< Enable */

/* Bit 2 : Write '1' to Enable interrupt for IN[2] event */
#define GPIOTE_INTENSET_IN2_Pos (2UL) /*!< Position of IN2 field. */
#define GPIOTE_INTENSET_IN2_Msk (0x1UL << GPIOTE_INTENSET_IN2_Pos) /*!< Bit mask of IN2 field. */
#define GPIOTE_INTENSET_IN2_Disabled (0UL) /*!< Read: Disabled */
#define GPIOTE_INTENSET_IN2_Enabled (1UL) /*!< Read: Enabled */
#define GPIOTE_INTENSET_IN2_Set (1UL) /*!< Enable */

/* Bit 1 : Write '1' to Enable interrupt for IN[1] event */
#define GPIOTE_INTENSET_IN1_Pos (1UL) /*!< Position of IN1 field. */
#define GPIOTE_INTENSET_IN1_Msk (0x1UL << GPIOTE_INTENSET_IN1_Pos) /*!< Bit mask of IN1 field. */
#define GPIOTE_INTENSET_IN1_Disabled (0UL) /*!< Read: Disabled */
#define GPIOTE_INTENSET_IN1_Enabled (1UL) /*!< Read: Enabled */
#define GPIOTE_INTENSET_IN1_Set (1UL) /*!< Enable */

/* Bit 0 : Write '1' to Enable interrupt for IN[0] event */
#define GPIOTE_INTENSET_IN0_Pos (0UL) /*!< Position of IN0 field. */
#define GPIOTE_INTENSET_IN0_Msk (0x1UL << GPIOTE_INTENSET_IN0_Pos) /*!< Bit mask of IN0 field. */
#define GPIOTE_INTENSET_IN0_Disabled (0UL) /*!< Read: Disabled */
#define GPIOTE_INTENSET_IN0_Enabled (1UL) /*!< Read: Enabled */
#define GPIOTE_INTENSET_IN0_Set (1UL) /*!< Enable */

/* Register: GPIOTE_INTENCLR */
/* Description: Disable interrupt */

/* Bit 31 : Write '1' to Disable interrupt for PORT event */
#define GPIOTE_INTENCLR_PORT_Pos (31UL) /*!< Position of PORT field. */
#define GPIOTE_INTENCLR_PORT_Msk (0x1UL << GPIOTE_INTENCLR_PORT_Pos) /*!< Bit mask of PORT field. */
#define GPIOTE_INTENCLR_PORT_Disabled (0UL) /*!< Read: Disabled */
#define GPIOTE_INTENCLR_PORT_Enabled (1UL) /*!< Read: Enabled */
#define GPIOTE_INTENCLR_PORT_Clear (1UL) /*!< Disable */

/* Bit 3 : Write '1' to Disable interrupt for IN[3] event */
#define GPIOTE_INTENCLR_IN3_Pos (3UL) /*!< Position of IN3 field. */
#define GPIOTE_INTENCLR_IN3_Msk (0x1UL << GPIOTE_INTENCLR_IN3_Pos) /*!< Bit mask of IN3 field. */
#define GPIOTE_INTENCLR_IN3_Disabled (0UL) /*!< Read: Disabled */
#define GPIOTE_INTENCLR_IN3_Enabled (1UL) /*!< Read: Enabled */
#define GPIOTE_INTENCLR_IN3_Clear (1UL) /*!< Disable */

/* Bit 2 : Write '1' to Disable interrupt for IN[2] event */
#define GPIOTE_INTENCLR_IN2_Pos (2UL) /*!< Position of IN2 field. */
#define GPIOTE_INTENCLR_IN2_Msk (0x1UL << GPIOTE_INTENCLR_IN2_Pos) /*!< Bit mask of IN2 field. */
#define GPIOTE_INTENCLR_IN2_Disabled (0UL) /*!< Read: Disabled */
#define GPIOTE_INTENCLR_IN2_Enabled (1UL) /*!< Read: Enabled */
#define GPIOTE_INTENCLR_IN2_Clear (1UL) /*!< Disable */

/* Bit 1 : Write '1' to Disable interrupt for IN[1] event */
#define GPIOTE_INTENCLR_IN1_Pos (1UL) /*!< Position of IN1 field. */
#define GPIOTE_INTENCLR_IN1_Msk (0x1UL << GPIOTE_INTENCLR_IN1_Pos) /*!< Bit mask of IN1 field. */
#define GPIOTE_INTENCLR_IN1_Disabled (0UL) /*!< Read: Disabled */
#define GPIOTE_INTENCLR_IN1_Enabled (1UL) /*!< Read: Enabled */
#define GPIOTE_INTENCLR_IN1_Clear (1UL) /*!< Disable */

/* Bit 0 : Write '1' to Disable interrupt for IN[0] event */
#define GPIOTE_INTENCLR_IN0_Pos (0UL) /*!< Position of IN0 field. */
#define GPIOTE_INTENCLR_IN0_Msk (0x1UL << GPIOTE_INTENCLR_IN0_Pos) /*!< Bit mask of IN0 field. */
#define GPIOTE_INTENCLR_IN0_Disabled (0UL) /*!< Read: Disabled */
#define GPIOTE_INTENCLR_IN0_Enabled (1UL) /*!< Read: Enabled */
#define GPIOTE_INTENCLR_IN0_Clear (1UL) /*!< Disable */

/* Register: GPIOTE_CONFIG */
/* Description: Description collection[0]:  Configuration for OUT[n] task and IN[n] event */

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

/* Bits 12..8 : Pin number associated with OUT[n] task and IN[n] event */
#define GPIOTE_CONFIG_PSEL_Pos (8UL) /*!< Position of PSEL field. */
#define GPIOTE_CONFIG_PSEL_Msk (0x1FUL << GPIOTE_CONFIG_PSEL_Pos) /*!< Bit mask of PSEL field. */

/* Bits 1..0 : Mode */
#define GPIOTE_CONFIG_MODE_Pos (0UL) /*!< Position of MODE field. */
#define GPIOTE_CONFIG_MODE_Msk (0x3UL << GPIOTE_CONFIG_MODE_Pos) /*!< Bit mask of MODE field. */
#define GPIOTE_CONFIG_MODE_Disabled (0UL) /*!< Disabled. Pin specified by PSEL will not be acquired by the GPIOTE module. */
#define GPIOTE_CONFIG_MODE_Event (1UL) /*!< Event mode */
#define GPIOTE_CONFIG_MODE_Task (3UL) /*!< Task mode */

/* Register: GPIOTE_POWER */
/* Description: Peripheral power control */

/* Bit 0 : Peripheral power control. The peripheral and its registers will be reset to its initial state by switching the peripheral off and then back on again. */
#define GPIOTE_POWER_POWER_Pos (0UL) /*!< Position of POWER field. */
#define GPIOTE_POWER_POWER_Msk (0x1UL << GPIOTE_POWER_POWER_Pos) /*!< Bit mask of POWER field. */
#define GPIOTE_POWER_POWER_Disabled (0UL) /*!< Peripheral is powered off */
#define GPIOTE_POWER_POWER_Enabled (1UL) /*!< Peripheral is powered on */


/* Peripheral: LPCOMP */
/* Description: Low Power Comparator */

/* Register: LPCOMP_SHORTS */
/* Description: Shortcut register */

/* Bit 4 : Shortcut between CROSS event and STOP task */
#define LPCOMP_SHORTS_CROSS_STOP_Pos (4UL) /*!< Position of CROSS_STOP field. */
#define LPCOMP_SHORTS_CROSS_STOP_Msk (0x1UL << LPCOMP_SHORTS_CROSS_STOP_Pos) /*!< Bit mask of CROSS_STOP field. */
#define LPCOMP_SHORTS_CROSS_STOP_Disabled (0UL) /*!< Disable shortcut */
#define LPCOMP_SHORTS_CROSS_STOP_Enabled (1UL) /*!< Enable shortcut */

/* Bit 3 : Shortcut between UP event and STOP task */
#define LPCOMP_SHORTS_UP_STOP_Pos (3UL) /*!< Position of UP_STOP field. */
#define LPCOMP_SHORTS_UP_STOP_Msk (0x1UL << LPCOMP_SHORTS_UP_STOP_Pos) /*!< Bit mask of UP_STOP field. */
#define LPCOMP_SHORTS_UP_STOP_Disabled (0UL) /*!< Disable shortcut */
#define LPCOMP_SHORTS_UP_STOP_Enabled (1UL) /*!< Enable shortcut */

/* Bit 2 : Shortcut between DOWN event and STOP task */
#define LPCOMP_SHORTS_DOWN_STOP_Pos (2UL) /*!< Position of DOWN_STOP field. */
#define LPCOMP_SHORTS_DOWN_STOP_Msk (0x1UL << LPCOMP_SHORTS_DOWN_STOP_Pos) /*!< Bit mask of DOWN_STOP field. */
#define LPCOMP_SHORTS_DOWN_STOP_Disabled (0UL) /*!< Disable shortcut */
#define LPCOMP_SHORTS_DOWN_STOP_Enabled (1UL) /*!< Enable shortcut */

/* Bit 1 : Shortcut between READY event and STOP task */
#define LPCOMP_SHORTS_READY_STOP_Pos (1UL) /*!< Position of READY_STOP field. */
#define LPCOMP_SHORTS_READY_STOP_Msk (0x1UL << LPCOMP_SHORTS_READY_STOP_Pos) /*!< Bit mask of READY_STOP field. */
#define LPCOMP_SHORTS_READY_STOP_Disabled (0UL) /*!< Disable shortcut */
#define LPCOMP_SHORTS_READY_STOP_Enabled (1UL) /*!< Enable shortcut */

/* Bit 0 : Shortcut between READY event and SAMPLE task */
#define LPCOMP_SHORTS_READY_SAMPLE_Pos (0UL) /*!< Position of READY_SAMPLE field. */
#define LPCOMP_SHORTS_READY_SAMPLE_Msk (0x1UL << LPCOMP_SHORTS_READY_SAMPLE_Pos) /*!< Bit mask of READY_SAMPLE field. */
#define LPCOMP_SHORTS_READY_SAMPLE_Disabled (0UL) /*!< Disable shortcut */
#define LPCOMP_SHORTS_READY_SAMPLE_Enabled (1UL) /*!< Enable shortcut */

/* Register: LPCOMP_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 3 : Enable or disable interrupt for CROSS event */
#define LPCOMP_INTEN_CROSS_Pos (3UL) /*!< Position of CROSS field. */
#define LPCOMP_INTEN_CROSS_Msk (0x1UL << LPCOMP_INTEN_CROSS_Pos) /*!< Bit mask of CROSS field. */
#define LPCOMP_INTEN_CROSS_Disabled (0UL) /*!< Disable */
#define LPCOMP_INTEN_CROSS_Enabled (1UL) /*!< Enable */

/* Bit 2 : Enable or disable interrupt for UP event */
#define LPCOMP_INTEN_UP_Pos (2UL) /*!< Position of UP field. */
#define LPCOMP_INTEN_UP_Msk (0x1UL << LPCOMP_INTEN_UP_Pos) /*!< Bit mask of UP field. */
#define LPCOMP_INTEN_UP_Disabled (0UL) /*!< Disable */
#define LPCOMP_INTEN_UP_Enabled (1UL) /*!< Enable */

/* Bit 1 : Enable or disable interrupt for DOWN event */
#define LPCOMP_INTEN_DOWN_Pos (1UL) /*!< Position of DOWN field. */
#define LPCOMP_INTEN_DOWN_Msk (0x1UL << LPCOMP_INTEN_DOWN_Pos) /*!< Bit mask of DOWN field. */
#define LPCOMP_INTEN_DOWN_Disabled (0UL) /*!< Disable */
#define LPCOMP_INTEN_DOWN_Enabled (1UL) /*!< Enable */

/* Bit 0 : Enable or disable interrupt for READY event */
#define LPCOMP_INTEN_READY_Pos (0UL) /*!< Position of READY field. */
#define LPCOMP_INTEN_READY_Msk (0x1UL << LPCOMP_INTEN_READY_Pos) /*!< Bit mask of READY field. */
#define LPCOMP_INTEN_READY_Disabled (0UL) /*!< Disable */
#define LPCOMP_INTEN_READY_Enabled (1UL) /*!< Enable */

/* Register: LPCOMP_INTENSET */
/* Description: Enable interrupt */

/* Bit 3 : Write '1' to Enable interrupt for CROSS event */
#define LPCOMP_INTENSET_CROSS_Pos (3UL) /*!< Position of CROSS field. */
#define LPCOMP_INTENSET_CROSS_Msk (0x1UL << LPCOMP_INTENSET_CROSS_Pos) /*!< Bit mask of CROSS field. */
#define LPCOMP_INTENSET_CROSS_Disabled (0UL) /*!< Read: Disabled */
#define LPCOMP_INTENSET_CROSS_Enabled (1UL) /*!< Read: Enabled */
#define LPCOMP_INTENSET_CROSS_Set (1UL) /*!< Enable */

/* Bit 2 : Write '1' to Enable interrupt for UP event */
#define LPCOMP_INTENSET_UP_Pos (2UL) /*!< Position of UP field. */
#define LPCOMP_INTENSET_UP_Msk (0x1UL << LPCOMP_INTENSET_UP_Pos) /*!< Bit mask of UP field. */
#define LPCOMP_INTENSET_UP_Disabled (0UL) /*!< Read: Disabled */
#define LPCOMP_INTENSET_UP_Enabled (1UL) /*!< Read: Enabled */
#define LPCOMP_INTENSET_UP_Set (1UL) /*!< Enable */

/* Bit 1 : Write '1' to Enable interrupt for DOWN event */
#define LPCOMP_INTENSET_DOWN_Pos (1UL) /*!< Position of DOWN field. */
#define LPCOMP_INTENSET_DOWN_Msk (0x1UL << LPCOMP_INTENSET_DOWN_Pos) /*!< Bit mask of DOWN field. */
#define LPCOMP_INTENSET_DOWN_Disabled (0UL) /*!< Read: Disabled */
#define LPCOMP_INTENSET_DOWN_Enabled (1UL) /*!< Read: Enabled */
#define LPCOMP_INTENSET_DOWN_Set (1UL) /*!< Enable */

/* Bit 0 : Write '1' to Enable interrupt for READY event */
#define LPCOMP_INTENSET_READY_Pos (0UL) /*!< Position of READY field. */
#define LPCOMP_INTENSET_READY_Msk (0x1UL << LPCOMP_INTENSET_READY_Pos) /*!< Bit mask of READY field. */
#define LPCOMP_INTENSET_READY_Disabled (0UL) /*!< Read: Disabled */
#define LPCOMP_INTENSET_READY_Enabled (1UL) /*!< Read: Enabled */
#define LPCOMP_INTENSET_READY_Set (1UL) /*!< Enable */

/* Register: LPCOMP_INTENCLR */
/* Description: Disable interrupt */

/* Bit 3 : Write '1' to Disable interrupt for CROSS event */
#define LPCOMP_INTENCLR_CROSS_Pos (3UL) /*!< Position of CROSS field. */
#define LPCOMP_INTENCLR_CROSS_Msk (0x1UL << LPCOMP_INTENCLR_CROSS_Pos) /*!< Bit mask of CROSS field. */
#define LPCOMP_INTENCLR_CROSS_Disabled (0UL) /*!< Read: Disabled */
#define LPCOMP_INTENCLR_CROSS_Enabled (1UL) /*!< Read: Enabled */
#define LPCOMP_INTENCLR_CROSS_Clear (1UL) /*!< Disable */

/* Bit 2 : Write '1' to Disable interrupt for UP event */
#define LPCOMP_INTENCLR_UP_Pos (2UL) /*!< Position of UP field. */
#define LPCOMP_INTENCLR_UP_Msk (0x1UL << LPCOMP_INTENCLR_UP_Pos) /*!< Bit mask of UP field. */
#define LPCOMP_INTENCLR_UP_Disabled (0UL) /*!< Read: Disabled */
#define LPCOMP_INTENCLR_UP_Enabled (1UL) /*!< Read: Enabled */
#define LPCOMP_INTENCLR_UP_Clear (1UL) /*!< Disable */

/* Bit 1 : Write '1' to Disable interrupt for DOWN event */
#define LPCOMP_INTENCLR_DOWN_Pos (1UL) /*!< Position of DOWN field. */
#define LPCOMP_INTENCLR_DOWN_Msk (0x1UL << LPCOMP_INTENCLR_DOWN_Pos) /*!< Bit mask of DOWN field. */
#define LPCOMP_INTENCLR_DOWN_Disabled (0UL) /*!< Read: Disabled */
#define LPCOMP_INTENCLR_DOWN_Enabled (1UL) /*!< Read: Enabled */
#define LPCOMP_INTENCLR_DOWN_Clear (1UL) /*!< Disable */

/* Bit 0 : Write '1' to Disable interrupt for READY event */
#define LPCOMP_INTENCLR_READY_Pos (0UL) /*!< Position of READY field. */
#define LPCOMP_INTENCLR_READY_Msk (0x1UL << LPCOMP_INTENCLR_READY_Pos) /*!< Bit mask of READY field. */
#define LPCOMP_INTENCLR_READY_Disabled (0UL) /*!< Read: Disabled */
#define LPCOMP_INTENCLR_READY_Enabled (1UL) /*!< Read: Enabled */
#define LPCOMP_INTENCLR_READY_Clear (1UL) /*!< Disable */

/* Register: LPCOMP_RESULT */
/* Description: Compare result */

/* Bit 0 : Result of last compare. Decision point SAMPLE task. */
#define LPCOMP_RESULT_RESULT_Pos (0UL) /*!< Position of RESULT field. */
#define LPCOMP_RESULT_RESULT_Msk (0x1UL << LPCOMP_RESULT_RESULT_Pos) /*!< Bit mask of RESULT field. */
#define LPCOMP_RESULT_RESULT_Below (0UL) /*!< Input voltage is below the reference threshold (VIN+ &lt; VIN-). */
#define LPCOMP_RESULT_RESULT_Above (1UL) /*!< Input voltage is above the reference threshold (VIN+ &gt; VIN-). */

/* Register: LPCOMP_ENABLE */
/* Description: Enable LPCOMP */

/* Bits 1..0 : Enable or disable LPCOMP */
#define LPCOMP_ENABLE_ENABLE_Pos (0UL) /*!< Position of ENABLE field. */
#define LPCOMP_ENABLE_ENABLE_Msk (0x3UL << LPCOMP_ENABLE_ENABLE_Pos) /*!< Bit mask of ENABLE field. */
#define LPCOMP_ENABLE_ENABLE_Disabled (0UL) /*!< Disable */
#define LPCOMP_ENABLE_ENABLE_Enabled (1UL) /*!< Enable */

/* Register: LPCOMP_PSEL */
/* Description: Input pin select */

/* Bits 2..0 : Analog pin select */
#define LPCOMP_PSEL_PSEL_Pos (0UL) /*!< Position of PSEL field. */
#define LPCOMP_PSEL_PSEL_Msk (0x7UL << LPCOMP_PSEL_PSEL_Pos) /*!< Bit mask of PSEL field. */
#define LPCOMP_PSEL_PSEL_AnalogInput0 (0UL) /*!< AIN0 selected as analog input */
#define LPCOMP_PSEL_PSEL_AnalogInput1 (1UL) /*!< AIN1 selected as analog input */
#define LPCOMP_PSEL_PSEL_AnalogInput2 (2UL) /*!< AIN2 selected as analog input */
#define LPCOMP_PSEL_PSEL_AnalogInput3 (3UL) /*!< AIN3 selected as analog input */
#define LPCOMP_PSEL_PSEL_AnalogInput4 (4UL) /*!< AIN4 selected as analog input */
#define LPCOMP_PSEL_PSEL_AnalogInput5 (5UL) /*!< AIN5 selected as analog input */
#define LPCOMP_PSEL_PSEL_AnalogInput6 (6UL) /*!< AIN6 selected as analog input */
#define LPCOMP_PSEL_PSEL_AnalogInput7 (7UL) /*!< AIN7 selected as analog input */

/* Register: LPCOMP_REFSEL */
/* Description: Reference select */

/* Bits 2..0 : Reference select */
#define LPCOMP_REFSEL_REFSEL_Pos (0UL) /*!< Position of REFSEL field. */
#define LPCOMP_REFSEL_REFSEL_Msk (0x7UL << LPCOMP_REFSEL_REFSEL_Pos) /*!< Bit mask of REFSEL field. */
#define LPCOMP_REFSEL_REFSEL_SupplyOneEighthPrescaling (0UL) /*!< VDD * 1/8 selected as reference */
#define LPCOMP_REFSEL_REFSEL_SupplyTwoEighthsPrescaling (1UL) /*!< VDD * 2/8 selected as reference */
#define LPCOMP_REFSEL_REFSEL_SupplyThreeEighthsPrescaling (2UL) /*!< VDD * 3/8 selected as reference */
#define LPCOMP_REFSEL_REFSEL_SupplyFourEighthsPrescaling (3UL) /*!< VDD * 4/8 selected as reference */
#define LPCOMP_REFSEL_REFSEL_SupplyFiveEighthsPrescaling (4UL) /*!< VDD * 5/8 selected as reference */
#define LPCOMP_REFSEL_REFSEL_SupplySixEighthsPrescaling (5UL) /*!< VDD * 6/8 selected as reference */
#define LPCOMP_REFSEL_REFSEL_SupplySevenEighthsPrescaling (6UL) /*!< VDD * 7/8 selected as reference */
#define LPCOMP_REFSEL_REFSEL_ARef (7UL) /*!< External analog reference selected */

/* Register: LPCOMP_EXTREFSEL */
/* Description: External reference select */

/* Bit 0 : External analog reference select */
#define LPCOMP_EXTREFSEL_EXTREFSEL_Pos (0UL) /*!< Position of EXTREFSEL field. */
#define LPCOMP_EXTREFSEL_EXTREFSEL_Msk (0x1UL << LPCOMP_EXTREFSEL_EXTREFSEL_Pos) /*!< Bit mask of EXTREFSEL field. */
#define LPCOMP_EXTREFSEL_EXTREFSEL_AnalogReference0 (0UL) /*!< Use AREF0 as external analog reference */
#define LPCOMP_EXTREFSEL_EXTREFSEL_AnalogReference1 (1UL) /*!< Use AREF1 as external analog reference */

/* Register: LPCOMP_ANADETECT */
/* Description: Analog detect configuration */

/* Bits 1..0 : Analog detect configuration */
#define LPCOMP_ANADETECT_ANADETECT_Pos (0UL) /*!< Position of ANADETECT field. */
#define LPCOMP_ANADETECT_ANADETECT_Msk (0x3UL << LPCOMP_ANADETECT_ANADETECT_Pos) /*!< Bit mask of ANADETECT field. */
#define LPCOMP_ANADETECT_ANADETECT_Cross (0UL) /*!< Generate ANADETECT on crossing, both upward crossing and downward crossing */
#define LPCOMP_ANADETECT_ANADETECT_Up (1UL) /*!< Generate ANADETECT on upward crossing only */
#define LPCOMP_ANADETECT_ANADETECT_Down (2UL) /*!< Generate ANADETECT on downward crossing only */

/* Register: LPCOMP_POWER */
/* Description: Peripheral power control */

/* Bit 0 : Peripheral power control. The peripheral and its registers will be reset to its initial state by switching the peripheral off and then back on again. */
#define LPCOMP_POWER_POWER_Pos (0UL) /*!< Position of POWER field. */
#define LPCOMP_POWER_POWER_Msk (0x1UL << LPCOMP_POWER_POWER_Pos) /*!< Bit mask of POWER field. */
#define LPCOMP_POWER_POWER_Disabled (0UL) /*!< Peripheral is powered off */
#define LPCOMP_POWER_POWER_Enabled (1UL) /*!< Peripheral is powered on */


/* Peripheral: MPU */
/* Description: Memory Protection Unit */

/* Register: MPU_PERR0 */
/* Description: Definition of peripherals in memory region 0 */

/* Bit 31 : Classify PPI as region 0 or region 1 peripheral */
#define MPU_PERR0_PPI_Pos (31UL) /*!< Position of PPI field. */
#define MPU_PERR0_PPI_Msk (0x1UL << MPU_PERR0_PPI_Pos) /*!< Bit mask of PPI field. */
#define MPU_PERR0_PPI_InRegion1 (0UL) /*!< Peripheral configured in region 1 */
#define MPU_PERR0_PPI_InRegion0 (1UL) /*!< Peripheral configured in region 0 */

/* Bit 30 : Classify NVMC as region 0 or region 1 peripheral */
#define MPU_PERR0_NVMC_Pos (30UL) /*!< Position of NVMC field. */
#define MPU_PERR0_NVMC_Msk (0x1UL << MPU_PERR0_NVMC_Pos) /*!< Bit mask of NVMC field. */
#define MPU_PERR0_NVMC_InRegion1 (0UL) /*!< Peripheral configured in region 1 */
#define MPU_PERR0_NVMC_InRegion0 (1UL) /*!< Peripheral configured in region 0 */

/* Bit 19 : Classify LPCOMP as region 0 or region 1 peripheral */
#define MPU_PERR0_LPCOMP_Pos (19UL) /*!< Position of LPCOMP field. */
#define MPU_PERR0_LPCOMP_Msk (0x1UL << MPU_PERR0_LPCOMP_Pos) /*!< Bit mask of LPCOMP field. */
#define MPU_PERR0_LPCOMP_InRegion1 (0UL) /*!< Peripheral configured in region 1 */
#define MPU_PERR0_LPCOMP_InRegion0 (1UL) /*!< Peripheral configured in region 0 */

/* Bit 18 : Classify QDEC as region 0 or region 1 peripheral */
#define MPU_PERR0_QDEC_Pos (18UL) /*!< Position of QDEC field. */
#define MPU_PERR0_QDEC_Msk (0x1UL << MPU_PERR0_QDEC_Pos) /*!< Bit mask of QDEC field. */
#define MPU_PERR0_QDEC_InRegion1 (0UL) /*!< Peripheral configured in region 1 */
#define MPU_PERR0_QDEC_InRegion0 (1UL) /*!< Peripheral configured in region 0 */

/* Bit 17 : Classify RTC1 as region 0 or region 1 peripheral */
#define MPU_PERR0_RTC1_Pos (17UL) /*!< Position of RTC1 field. */
#define MPU_PERR0_RTC1_Msk (0x1UL << MPU_PERR0_RTC1_Pos) /*!< Bit mask of RTC1 field. */
#define MPU_PERR0_RTC1_InRegion1 (0UL) /*!< Peripheral configured in region 1 */
#define MPU_PERR0_RTC1_InRegion0 (1UL) /*!< Peripheral configured in region 0 */

/* Bit 16 : Classify WDT as region 0 or region 1 peripheral */
#define MPU_PERR0_WDT_Pos (16UL) /*!< Position of WDT field. */
#define MPU_PERR0_WDT_Msk (0x1UL << MPU_PERR0_WDT_Pos) /*!< Bit mask of WDT field. */
#define MPU_PERR0_WDT_InRegion1 (0UL) /*!< Peripheral configured in region 1 */
#define MPU_PERR0_WDT_InRegion0 (1UL) /*!< Peripheral configured in region 0 */

/* Bit 15 : Classify CCM and ECB as region 0 or region 1 peripheral */
#define MPU_PERR0_CCM_AAR_Pos (15UL) /*!< Position of CCM_AAR field. */
#define MPU_PERR0_CCM_AAR_Msk (0x1UL << MPU_PERR0_CCM_AAR_Pos) /*!< Bit mask of CCM_AAR field. */
#define MPU_PERR0_CCM_AAR_InRegion1 (0UL) /*!< Peripheral configured in region 1 */
#define MPU_PERR0_CCM_AAR_InRegion0 (1UL) /*!< Peripheral configured in region 0 */

/* Bit 14 : Classify ECB as region 0 or region 1 peripheral */
#define MPU_PERR0_ECB_Pos (14UL) /*!< Position of ECB field. */
#define MPU_PERR0_ECB_Msk (0x1UL << MPU_PERR0_ECB_Pos) /*!< Bit mask of ECB field. */
#define MPU_PERR0_ECB_InRegion1 (0UL) /*!< Peripheral configured in region 1 */
#define MPU_PERR0_ECB_InRegion0 (1UL) /*!< Peripheral configured in region 0 */

/* Bit 13 : Classify RNG as region 0 or region 1 peripheral */
#define MPU_PERR0_RNG_Pos (13UL) /*!< Position of RNG field. */
#define MPU_PERR0_RNG_Msk (0x1UL << MPU_PERR0_RNG_Pos) /*!< Bit mask of RNG field. */
#define MPU_PERR0_RNG_InRegion1 (0UL) /*!< Peripheral configured in region 1 */
#define MPU_PERR0_RNG_InRegion0 (1UL) /*!< Peripheral configured in region 0 */

/* Bit 12 : Classify TEMP as region 0 or region 1 peripheral */
#define MPU_PERR0_TEMP_Pos (12UL) /*!< Position of TEMP field. */
#define MPU_PERR0_TEMP_Msk (0x1UL << MPU_PERR0_TEMP_Pos) /*!< Bit mask of TEMP field. */
#define MPU_PERR0_TEMP_InRegion1 (0UL) /*!< Peripheral configured in region 1 */
#define MPU_PERR0_TEMP_InRegion0 (1UL) /*!< Peripheral configured in region 0 */

/* Bit 11 : Classify RTC0 as region 0 or region 1 peripheral */
#define MPU_PERR0_RTC0_Pos (11UL) /*!< Position of RTC0 field. */
#define MPU_PERR0_RTC0_Msk (0x1UL << MPU_PERR0_RTC0_Pos) /*!< Bit mask of RTC0 field. */
#define MPU_PERR0_RTC0_InRegion1 (0UL) /*!< Peripheral configured in region 1 */
#define MPU_PERR0_RTC0_InRegion0 (1UL) /*!< Peripheral configured in region 0 */

/* Bit 10 : Classify TIMER2 as region 0 or region 1 peripheral */
#define MPU_PERR0_TIMER2_Pos (10UL) /*!< Position of TIMER2 field. */
#define MPU_PERR0_TIMER2_Msk (0x1UL << MPU_PERR0_TIMER2_Pos) /*!< Bit mask of TIMER2 field. */
#define MPU_PERR0_TIMER2_InRegion1 (0UL) /*!< Peripheral configured in region 1 */
#define MPU_PERR0_TIMER2_InRegion0 (1UL) /*!< Peripheral configured in region 0 */

/* Bit 9 : Classify TIMER1 as region 0 or region 1 peripheral */
#define MPU_PERR0_TIMER1_Pos (9UL) /*!< Position of TIMER1 field. */
#define MPU_PERR0_TIMER1_Msk (0x1UL << MPU_PERR0_TIMER1_Pos) /*!< Bit mask of TIMER1 field. */
#define MPU_PERR0_TIMER1_InRegion1 (0UL) /*!< Peripheral configured in region 1 */
#define MPU_PERR0_TIMER1_InRegion0 (1UL) /*!< Peripheral configured in region 0 */

/* Bit 8 : Classify TIMER0 as region 0 or region 1 peripheral */
#define MPU_PERR0_TIMER0_Pos (8UL) /*!< Position of TIMER0 field. */
#define MPU_PERR0_TIMER0_Msk (0x1UL << MPU_PERR0_TIMER0_Pos) /*!< Bit mask of TIMER0 field. */
#define MPU_PERR0_TIMER0_InRegion1 (0UL) /*!< Peripheral configured in region 1 */
#define MPU_PERR0_TIMER0_InRegion0 (1UL) /*!< Peripheral configured in region 0 */

/* Bit 7 : Classify ADC as region 0 or region 1 peripheral */
#define MPU_PERR0_ADC_Pos (7UL) /*!< Position of ADC field. */
#define MPU_PERR0_ADC_Msk (0x1UL << MPU_PERR0_ADC_Pos) /*!< Bit mask of ADC field. */
#define MPU_PERR0_ADC_InRegion1 (0UL) /*!< Peripheral configured in region 1 */
#define MPU_PERR0_ADC_InRegion0 (1UL) /*!< Peripheral configured in region 0 */

/* Bit 6 : Classify GPIOTE as region 0 or region 1 peripheral */
#define MPU_PERR0_GPIOTE_Pos (6UL) /*!< Position of GPIOTE field. */
#define MPU_PERR0_GPIOTE_Msk (0x1UL << MPU_PERR0_GPIOTE_Pos) /*!< Bit mask of GPIOTE field. */
#define MPU_PERR0_GPIOTE_InRegion1 (0UL) /*!< Peripheral configured in region 1 */
#define MPU_PERR0_GPIOTE_InRegion0 (1UL) /*!< Peripheral configured in region 0 */

/* Bit 4 : Classify SPI1 and TWI1 as region 0 or region 1 peripheral */
#define MPU_PERR0_SPI1_TWI1_Pos (4UL) /*!< Position of SPI1_TWI1 field. */
#define MPU_PERR0_SPI1_TWI1_Msk (0x1UL << MPU_PERR0_SPI1_TWI1_Pos) /*!< Bit mask of SPI1_TWI1 field. */
#define MPU_PERR0_SPI1_TWI1_InRegion1 (0UL) /*!< Peripheral configured in region 1 */
#define MPU_PERR0_SPI1_TWI1_InRegion0 (1UL) /*!< Peripheral configured in region 0 */

/* Bit 3 : Classify SPI0 and TWI0 as region 0 or region 1 peripheral */
#define MPU_PERR0_SPI0_TWI0_Pos (3UL) /*!< Position of SPI0_TWI0 field. */
#define MPU_PERR0_SPI0_TWI0_Msk (0x1UL << MPU_PERR0_SPI0_TWI0_Pos) /*!< Bit mask of SPI0_TWI0 field. */
#define MPU_PERR0_SPI0_TWI0_InRegion1 (0UL) /*!< Peripheral configured in region 1 */
#define MPU_PERR0_SPI0_TWI0_InRegion0 (1UL) /*!< Peripheral configured in region 0 */

/* Bit 2 : Classify UART0 as region 0 or region 1 peripheral */
#define MPU_PERR0_UART0_Pos (2UL) /*!< Position of UART0 field. */
#define MPU_PERR0_UART0_Msk (0x1UL << MPU_PERR0_UART0_Pos) /*!< Bit mask of UART0 field. */
#define MPU_PERR0_UART0_InRegion1 (0UL) /*!< Peripheral configured in region 1 */
#define MPU_PERR0_UART0_InRegion0 (1UL) /*!< Peripheral configured in region 0 */

/* Bit 1 : Classify RADIO as region 0 or region 1 peripheral */
#define MPU_PERR0_RADIO_Pos (1UL) /*!< Position of RADIO field. */
#define MPU_PERR0_RADIO_Msk (0x1UL << MPU_PERR0_RADIO_Pos) /*!< Bit mask of RADIO field. */
#define MPU_PERR0_RADIO_InRegion1 (0UL) /*!< Peripheral configured in region 1 */
#define MPU_PERR0_RADIO_InRegion0 (1UL) /*!< Peripheral configured in region 0 */

/* Bit 0 : Classify POWER and CLOCK, and all other peripherals with ID=0, as region 0 or region 1 peripheral */
#define MPU_PERR0_POWER_CLOCK_Pos (0UL) /*!< Position of POWER_CLOCK field. */
#define MPU_PERR0_POWER_CLOCK_Msk (0x1UL << MPU_PERR0_POWER_CLOCK_Pos) /*!< Bit mask of POWER_CLOCK field. */
#define MPU_PERR0_POWER_CLOCK_InRegion1 (0UL) /*!< Peripheral configured in region 1 */
#define MPU_PERR0_POWER_CLOCK_InRegion0 (1UL) /*!< Peripheral configured in region 0 */

/* Register: MPU_RLENR0 */
/* Description: Length of RAM region 0 */

/* Bits 31..0 : This register specifies the size of RAM region 0 */
#define MPU_RLENR0_RLENR0_Pos (0UL) /*!< Position of RLENR0 field. */
#define MPU_RLENR0_RLENR0_Msk (0xFFFFFFFFUL << MPU_RLENR0_RLENR0_Pos) /*!< Bit mask of RLENR0 field. */

/* Register: MPU_PROTENSET0 */
/* Description: Protection bit enable set register */

/* Bit 31 : Write '1': Protection enable bit for region 31. Write '0': no effect. */
#define MPU_PROTENSET0_PROTREG31_Pos (31UL) /*!< Position of PROTREG31 field. */
#define MPU_PROTENSET0_PROTREG31_Msk (0x1UL << MPU_PROTENSET0_PROTREG31_Pos) /*!< Bit mask of PROTREG31 field. */
#define MPU_PROTENSET0_PROTREG31_Disabled (0UL) /*!< Read: protection disabled */
#define MPU_PROTENSET0_PROTREG31_Enabled (1UL) /*!< Read: protection enabled */
#define MPU_PROTENSET0_PROTREG31_Set (1UL) /*!< Write: enables protection */

/* Bit 30 : Write '1': Protection enable bit for region 30. Write '0': no effect. */
#define MPU_PROTENSET0_PROTREG30_Pos (30UL) /*!< Position of PROTREG30 field. */
#define MPU_PROTENSET0_PROTREG30_Msk (0x1UL << MPU_PROTENSET0_PROTREG30_Pos) /*!< Bit mask of PROTREG30 field. */
#define MPU_PROTENSET0_PROTREG30_Disabled (0UL) /*!< Read: protection disabled */
#define MPU_PROTENSET0_PROTREG30_Enabled (1UL) /*!< Read: protection enabled */
#define MPU_PROTENSET0_PROTREG30_Set (1UL) /*!< Write: enables protection */

/* Bit 29 : Write '1': Protection enable bit for region 29. Write '0': no effect. */
#define MPU_PROTENSET0_PROTREG29_Pos (29UL) /*!< Position of PROTREG29 field. */
#define MPU_PROTENSET0_PROTREG29_Msk (0x1UL << MPU_PROTENSET0_PROTREG29_Pos) /*!< Bit mask of PROTREG29 field. */
#define MPU_PROTENSET0_PROTREG29_Disabled (0UL) /*!< Read: protection disabled */
#define MPU_PROTENSET0_PROTREG29_Enabled (1UL) /*!< Read: protection enabled */
#define MPU_PROTENSET0_PROTREG29_Set (1UL) /*!< Write: enables protection */

/* Bit 28 : Write '1': Protection enable bit for region 28. Write '0': no effect. */
#define MPU_PROTENSET0_PROTREG28_Pos (28UL) /*!< Position of PROTREG28 field. */
#define MPU_PROTENSET0_PROTREG28_Msk (0x1UL << MPU_PROTENSET0_PROTREG28_Pos) /*!< Bit mask of PROTREG28 field. */
#define MPU_PROTENSET0_PROTREG28_Disabled (0UL) /*!< Read: protection disabled */
#define MPU_PROTENSET0_PROTREG28_Enabled (1UL) /*!< Read: protection enabled */
#define MPU_PROTENSET0_PROTREG28_Set (1UL) /*!< Write: enables protection */

/* Bit 27 : Write '1': Protection enable bit for region 27. Write '0': no effect. */
#define MPU_PROTENSET0_PROTREG27_Pos (27UL) /*!< Position of PROTREG27 field. */
#define MPU_PROTENSET0_PROTREG27_Msk (0x1UL << MPU_PROTENSET0_PROTREG27_Pos) /*!< Bit mask of PROTREG27 field. */
#define MPU_PROTENSET0_PROTREG27_Disabled (0UL) /*!< Read: protection disabled */
#define MPU_PROTENSET0_PROTREG27_Enabled (1UL) /*!< Read: protection enabled */
#define MPU_PROTENSET0_PROTREG27_Set (1UL) /*!< Write: enables protection */

/* Bit 26 : Write '1': Protection enable bit for region 26. Write '0': no effect. */
#define MPU_PROTENSET0_PROTREG26_Pos (26UL) /*!< Position of PROTREG26 field. */
#define MPU_PROTENSET0_PROTREG26_Msk (0x1UL << MPU_PROTENSET0_PROTREG26_Pos) /*!< Bit mask of PROTREG26 field. */
#define MPU_PROTENSET0_PROTREG26_Disabled (0UL) /*!< Read: protection disabled */
#define MPU_PROTENSET0_PROTREG26_Enabled (1UL) /*!< Read: protection enabled */
#define MPU_PROTENSET0_PROTREG26_Set (1UL) /*!< Write: enables protection */

/* Bit 25 : Write '1': Protection enable bit for region 25. Write '0': no effect. */
#define MPU_PROTENSET0_PROTREG25_Pos (25UL) /*!< Position of PROTREG25 field. */
#define MPU_PROTENSET0_PROTREG25_Msk (0x1UL << MPU_PROTENSET0_PROTREG25_Pos) /*!< Bit mask of PROTREG25 field. */
#define MPU_PROTENSET0_PROTREG25_Disabled (0UL) /*!< Read: protection disabled */
#define MPU_PROTENSET0_PROTREG25_Enabled (1UL) /*!< Read: protection enabled */
#define MPU_PROTENSET0_PROTREG25_Set (1UL) /*!< Write: enables protection */

/* Bit 24 : Write '1': Protection enable bit for region 24. Write '0': no effect. */
#define MPU_PROTENSET0_PROTREG24_Pos (24UL) /*!< Position of PROTREG24 field. */
#define MPU_PROTENSET0_PROTREG24_Msk (0x1UL << MPU_PROTENSET0_PROTREG24_Pos) /*!< Bit mask of PROTREG24 field. */
#define MPU_PROTENSET0_PROTREG24_Disabled (0UL) /*!< Read: protection disabled */
#define MPU_PROTENSET0_PROTREG24_Enabled (1UL) /*!< Read: protection enabled */
#define MPU_PROTENSET0_PROTREG24_Set (1UL) /*!< Write: enables protection */

/* Bit 23 : Write '1': Protection enable bit for region 23. Write '0': no effect. */
#define MPU_PROTENSET0_PROTREG23_Pos (23UL) /*!< Position of PROTREG23 field. */
#define MPU_PROTENSET0_PROTREG23_Msk (0x1UL << MPU_PROTENSET0_PROTREG23_Pos) /*!< Bit mask of PROTREG23 field. */
#define MPU_PROTENSET0_PROTREG23_Disabled (0UL) /*!< Read: protection disabled */
#define MPU_PROTENSET0_PROTREG23_Enabled (1UL) /*!< Read: protection enabled */
#define MPU_PROTENSET0_PROTREG23_Set (1UL) /*!< Write: enables protection */

/* Bit 22 : Write '1': Protection enable bit for region 22. Write '0': no effect. */
#define MPU_PROTENSET0_PROTREG22_Pos (22UL) /*!< Position of PROTREG22 field. */
#define MPU_PROTENSET0_PROTREG22_Msk (0x1UL << MPU_PROTENSET0_PROTREG22_Pos) /*!< Bit mask of PROTREG22 field. */
#define MPU_PROTENSET0_PROTREG22_Disabled (0UL) /*!< Read: protection disabled */
#define MPU_PROTENSET0_PROTREG22_Enabled (1UL) /*!< Read: protection enabled */
#define MPU_PROTENSET0_PROTREG22_Set (1UL) /*!< Write: enables protection */

/* Bit 21 : Write '1': Protection enable bit for region 21. Write '0': no effect. */
#define MPU_PROTENSET0_PROTREG21_Pos (21UL) /*!< Position of PROTREG21 field. */
#define MPU_PROTENSET0_PROTREG21_Msk (0x1UL << MPU_PROTENSET0_PROTREG21_Pos) /*!< Bit mask of PROTREG21 field. */
#define MPU_PROTENSET0_PROTREG21_Disabled (0UL) /*!< Read: protection disabled */
#define MPU_PROTENSET0_PROTREG21_Enabled (1UL) /*!< Read: protection enabled */
#define MPU_PROTENSET0_PROTREG21_Set (1UL) /*!< Write: enables protection */

/* Bit 20 : Write '1': Protection enable bit for region 20. Write '0': no effect. */
#define MPU_PROTENSET0_PROTREG20_Pos (20UL) /*!< Position of PROTREG20 field. */
#define MPU_PROTENSET0_PROTREG20_Msk (0x1UL << MPU_PROTENSET0_PROTREG20_Pos) /*!< Bit mask of PROTREG20 field. */
#define MPU_PROTENSET0_PROTREG20_Disabled (0UL) /*!< Read: protection disabled */
#define MPU_PROTENSET0_PROTREG20_Enabled (1UL) /*!< Read: protection enabled */
#define MPU_PROTENSET0_PROTREG20_Set (1UL) /*!< Write: enables protection */

/* Bit 19 : Write '1': Protection enable bit for region 19. Write '0': no effect. */
#define MPU_PROTENSET0_PROTREG19_Pos (19UL) /*!< Position of PROTREG19 field. */
#define MPU_PROTENSET0_PROTREG19_Msk (0x1UL << MPU_PROTENSET0_PROTREG19_Pos) /*!< Bit mask of PROTREG19 field. */
#define MPU_PROTENSET0_PROTREG19_Disabled (0UL) /*!< Read: protection disabled */
#define MPU_PROTENSET0_PROTREG19_Enabled (1UL) /*!< Read: protection enabled */
#define MPU_PROTENSET0_PROTREG19_Set (1UL) /*!< Write: enables protection */

/* Bit 18 : Write '1': Protection enable bit for region 18. Write '0': no effect. */
#define MPU_PROTENSET0_PROTREG18_Pos (18UL) /*!< Position of PROTREG18 field. */
#define MPU_PROTENSET0_PROTREG18_Msk (0x1UL << MPU_PROTENSET0_PROTREG18_Pos) /*!< Bit mask of PROTREG18 field. */
#define MPU_PROTENSET0_PROTREG18_Disabled (0UL) /*!< Read: protection disabled */
#define MPU_PROTENSET0_PROTREG18_Enabled (1UL) /*!< Read: protection enabled */
#define MPU_PROTENSET0_PROTREG18_Set (1UL) /*!< Write: enables protection */

/* Bit 17 : Write '1': Protection enable bit for region 17. Write '0': no effect. */
#define MPU_PROTENSET0_PROTREG17_Pos (17UL) /*!< Position of PROTREG17 field. */
#define MPU_PROTENSET0_PROTREG17_Msk (0x1UL << MPU_PROTENSET0_PROTREG17_Pos) /*!< Bit mask of PROTREG17 field. */
#define MPU_PROTENSET0_PROTREG17_Disabled (0UL) /*!< Read: protection disabled */
#define MPU_PROTENSET0_PROTREG17_Enabled (1UL) /*!< Read: protection enabled */
#define MPU_PROTENSET0_PROTREG17_Set (1UL) /*!< Write: enables protection */

/* Bit 16 : Write '1': Protection enable bit for region 16. Write '0': no effect. */
#define MPU_PROTENSET0_PROTREG16_Pos (16UL) /*!< Position of PROTREG16 field. */
#define MPU_PROTENSET0_PROTREG16_Msk (0x1UL << MPU_PROTENSET0_PROTREG16_Pos) /*!< Bit mask of PROTREG16 field. */
#define MPU_PROTENSET0_PROTREG16_Disabled (0UL) /*!< Read: protection disabled */
#define MPU_PROTENSET0_PROTREG16_Enabled (1UL) /*!< Read: protection enabled */
#define MPU_PROTENSET0_PROTREG16_Set (1UL) /*!< Write: enables protection */

/* Bit 15 : Write '1': Protection enable bit for region 15. Write '0': no effect. */
#define MPU_PROTENSET0_PROTREG15_Pos (15UL) /*!< Position of PROTREG15 field. */
#define MPU_PROTENSET0_PROTREG15_Msk (0x1UL << MPU_PROTENSET0_PROTREG15_Pos) /*!< Bit mask of PROTREG15 field. */
#define MPU_PROTENSET0_PROTREG15_Disabled (0UL) /*!< Read: protection disabled */
#define MPU_PROTENSET0_PROTREG15_Enabled (1UL) /*!< Read: protection enabled */
#define MPU_PROTENSET0_PROTREG15_Set (1UL) /*!< Write: enables protection */

/* Bit 14 : Write '1': Protection enable bit for region 14. Write '0': no effect. */
#define MPU_PROTENSET0_PROTREG14_Pos (14UL) /*!< Position of PROTREG14 field. */
#define MPU_PROTENSET0_PROTREG14_Msk (0x1UL << MPU_PROTENSET0_PROTREG14_Pos) /*!< Bit mask of PROTREG14 field. */
#define MPU_PROTENSET0_PROTREG14_Disabled (0UL) /*!< Read: protection disabled */
#define MPU_PROTENSET0_PROTREG14_Enabled (1UL) /*!< Read: protection enabled */
#define MPU_PROTENSET0_PROTREG14_Set (1UL) /*!< Write: enables protection */

/* Bit 13 : Write '1': Protection enable bit for region 13. Write '0': no effect. */
#define MPU_PROTENSET0_PROTREG13_Pos (13UL) /*!< Position of PROTREG13 field. */
#define MPU_PROTENSET0_PROTREG13_Msk (0x1UL << MPU_PROTENSET0_PROTREG13_Pos) /*!< Bit mask of PROTREG13 field. */
#define MPU_PROTENSET0_PROTREG13_Disabled (0UL) /*!< Read: protection disabled */
#define MPU_PROTENSET0_PROTREG13_Enabled (1UL) /*!< Read: protection enabled */
#define MPU_PROTENSET0_PROTREG13_Set (1UL) /*!< Write: enables protection */

/* Bit 12 : Write '1': Protection enable bit for region 12. Write '0': no effect. */
#define MPU_PROTENSET0_PROTREG12_Pos (12UL) /*!< Position of PROTREG12 field. */
#define MPU_PROTENSET0_PROTREG12_Msk (0x1UL << MPU_PROTENSET0_PROTREG12_Pos) /*!< Bit mask of PROTREG12 field. */
#define MPU_PROTENSET0_PROTREG12_Disabled (0UL) /*!< Read: protection disabled */
#define MPU_PROTENSET0_PROTREG12_Enabled (1UL) /*!< Read: protection enabled */
#define MPU_PROTENSET0_PROTREG12_Set (1UL) /*!< Write: enables protection */

/* Bit 11 : Write '1': Protection enable bit for region 11. Write '0': no effect. */
#define MPU_PROTENSET0_PROTREG11_Pos (11UL) /*!< Position of PROTREG11 field. */
#define MPU_PROTENSET0_PROTREG11_Msk (0x1UL << MPU_PROTENSET0_PROTREG11_Pos) /*!< Bit mask of PROTREG11 field. */
#define MPU_PROTENSET0_PROTREG11_Disabled (0UL) /*!< Read: protection disabled */
#define MPU_PROTENSET0_PROTREG11_Enabled (1UL) /*!< Read: protection enabled */
#define MPU_PROTENSET0_PROTREG11_Set (1UL) /*!< Write: enables protection */

/* Bit 10 : Write '1': Protection enable bit for region 10. Write '0': no effect. */
#define MPU_PROTENSET0_PROTREG10_Pos (10UL) /*!< Position of PROTREG10 field. */
#define MPU_PROTENSET0_PROTREG10_Msk (0x1UL << MPU_PROTENSET0_PROTREG10_Pos) /*!< Bit mask of PROTREG10 field. */
#define MPU_PROTENSET0_PROTREG10_Disabled (0UL) /*!< Read: protection disabled */
#define MPU_PROTENSET0_PROTREG10_Enabled (1UL) /*!< Read: protection enabled */
#define MPU_PROTENSET0_PROTREG10_Set (1UL) /*!< Write: enables protection */

/* Bit 9 : Write '1': Protection enable bit for region 9. Write '0': no effect. */
#define MPU_PROTENSET0_PROTREG9_Pos (9UL) /*!< Position of PROTREG9 field. */
#define MPU_PROTENSET0_PROTREG9_Msk (0x1UL << MPU_PROTENSET0_PROTREG9_Pos) /*!< Bit mask of PROTREG9 field. */
#define MPU_PROTENSET0_PROTREG9_Disabled (0UL) /*!< Read: protection disabled */
#define MPU_PROTENSET0_PROTREG9_Enabled (1UL) /*!< Read: protection enabled */
#define MPU_PROTENSET0_PROTREG9_Set (1UL) /*!< Write: enables protection */

/* Bit 8 : Write '1': Protection enable bit for region 8. Write '0': no effect. */
#define MPU_PROTENSET0_PROTREG8_Pos (8UL) /*!< Position of PROTREG8 field. */
#define MPU_PROTENSET0_PROTREG8_Msk (0x1UL << MPU_PROTENSET0_PROTREG8_Pos) /*!< Bit mask of PROTREG8 field. */
#define MPU_PROTENSET0_PROTREG8_Disabled (0UL) /*!< Read: protection disabled */
#define MPU_PROTENSET0_PROTREG8_Enabled (1UL) /*!< Read: protection enabled */
#define MPU_PROTENSET0_PROTREG8_Set (1UL) /*!< Write: enables protection */

/* Bit 7 : Write '1': Protection enable bit for region 7. Write '0': no effect. */
#define MPU_PROTENSET0_PROTREG7_Pos (7UL) /*!< Position of PROTREG7 field. */
#define MPU_PROTENSET0_PROTREG7_Msk (0x1UL << MPU_PROTENSET0_PROTREG7_Pos) /*!< Bit mask of PROTREG7 field. */
#define MPU_PROTENSET0_PROTREG7_Disabled (0UL) /*!< Read: protection disabled */
#define MPU_PROTENSET0_PROTREG7_Enabled (1UL) /*!< Read: protection enabled */
#define MPU_PROTENSET0_PROTREG7_Set (1UL) /*!< Write: enables protection */

/* Bit 6 : Write '1': Protection enable bit for region 6. Write '0': no effect. */
#define MPU_PROTENSET0_PROTREG6_Pos (6UL) /*!< Position of PROTREG6 field. */
#define MPU_PROTENSET0_PROTREG6_Msk (0x1UL << MPU_PROTENSET0_PROTREG6_Pos) /*!< Bit mask of PROTREG6 field. */
#define MPU_PROTENSET0_PROTREG6_Disabled (0UL) /*!< Read: protection disabled */
#define MPU_PROTENSET0_PROTREG6_Enabled (1UL) /*!< Read: protection enabled */
#define MPU_PROTENSET0_PROTREG6_Set (1UL) /*!< Write: enables protection */

/* Bit 5 : Write '1': Protection enable bit for region 5. Write '0': no effect. */
#define MPU_PROTENSET0_PROTREG5_Pos (5UL) /*!< Position of PROTREG5 field. */
#define MPU_PROTENSET0_PROTREG5_Msk (0x1UL << MPU_PROTENSET0_PROTREG5_Pos) /*!< Bit mask of PROTREG5 field. */
#define MPU_PROTENSET0_PROTREG5_Disabled (0UL) /*!< Read: protection disabled */
#define MPU_PROTENSET0_PROTREG5_Enabled (1UL) /*!< Read: protection enabled */
#define MPU_PROTENSET0_PROTREG5_Set (1UL) /*!< Write: enables protection */

/* Bit 4 : Write '1': Protection enable bit for region 4. Write '0': no effect. */
#define MPU_PROTENSET0_PROTREG4_Pos (4UL) /*!< Position of PROTREG4 field. */
#define MPU_PROTENSET0_PROTREG4_Msk (0x1UL << MPU_PROTENSET0_PROTREG4_Pos) /*!< Bit mask of PROTREG4 field. */
#define MPU_PROTENSET0_PROTREG4_Disabled (0UL) /*!< Read: protection disabled */
#define MPU_PROTENSET0_PROTREG4_Enabled (1UL) /*!< Read: protection enabled */
#define MPU_PROTENSET0_PROTREG4_Set (1UL) /*!< Write: enables protection */

/* Bit 3 : Write '1': Protection enable bit for region 3. Write '0': no effect. */
#define MPU_PROTENSET0_PROTREG3_Pos (3UL) /*!< Position of PROTREG3 field. */
#define MPU_PROTENSET0_PROTREG3_Msk (0x1UL << MPU_PROTENSET0_PROTREG3_Pos) /*!< Bit mask of PROTREG3 field. */
#define MPU_PROTENSET0_PROTREG3_Disabled (0UL) /*!< Read: protection disabled */
#define MPU_PROTENSET0_PROTREG3_Enabled (1UL) /*!< Read: protection enabled */
#define MPU_PROTENSET0_PROTREG3_Set (1UL) /*!< Write: enables protection */

/* Bit 2 : Write '1': Protection enable bit for region 2. Write '0': no effect. */
#define MPU_PROTENSET0_PROTREG2_Pos (2UL) /*!< Position of PROTREG2 field. */
#define MPU_PROTENSET0_PROTREG2_Msk (0x1UL << MPU_PROTENSET0_PROTREG2_Pos) /*!< Bit mask of PROTREG2 field. */
#define MPU_PROTENSET0_PROTREG2_Disabled (0UL) /*!< Read: protection disabled */
#define MPU_PROTENSET0_PROTREG2_Enabled (1UL) /*!< Read: protection enabled */
#define MPU_PROTENSET0_PROTREG2_Set (1UL) /*!< Write: enables protection */

/* Bit 1 : Write '1': Protection enable bit for region 1. Write '0': no effect. */
#define MPU_PROTENSET0_PROTREG1_Pos (1UL) /*!< Position of PROTREG1 field. */
#define MPU_PROTENSET0_PROTREG1_Msk (0x1UL << MPU_PROTENSET0_PROTREG1_Pos) /*!< Bit mask of PROTREG1 field. */
#define MPU_PROTENSET0_PROTREG1_Disabled (0UL) /*!< Read: protection disabled */
#define MPU_PROTENSET0_PROTREG1_Enabled (1UL) /*!< Read: protection enabled */
#define MPU_PROTENSET0_PROTREG1_Set (1UL) /*!< Write: enables protection */

/* Bit 0 : Write '1': Protection enable bit for region 0. Write '0': no effect. */
#define MPU_PROTENSET0_PROTREG0_Pos (0UL) /*!< Position of PROTREG0 field. */
#define MPU_PROTENSET0_PROTREG0_Msk (0x1UL << MPU_PROTENSET0_PROTREG0_Pos) /*!< Bit mask of PROTREG0 field. */
#define MPU_PROTENSET0_PROTREG0_Disabled (0UL) /*!< Read: protection disabled */
#define MPU_PROTENSET0_PROTREG0_Enabled (1UL) /*!< Read: protection enabled */
#define MPU_PROTENSET0_PROTREG0_Set (1UL) /*!< Write: enables protection */

/* Register: MPU_PROTENSET1 */
/* Description: Protection bit enable set register */

/* Bit 31 : Write '1': Protection enable bit for region 63. Write '0': no effect. */
#define MPU_PROTENSET1_PROTREG63_Pos (31UL) /*!< Position of PROTREG63 field. */
#define MPU_PROTENSET1_PROTREG63_Msk (0x1UL << MPU_PROTENSET1_PROTREG63_Pos) /*!< Bit mask of PROTREG63 field. */
#define MPU_PROTENSET1_PROTREG63_Disabled (0UL) /*!< Read: protection disabled */
#define MPU_PROTENSET1_PROTREG63_Enabled (1UL) /*!< Read: protection enabled */
#define MPU_PROTENSET1_PROTREG63_Set (1UL) /*!< Write: enables protection */

/* Bit 30 : Write '1': Protection enable bit for region 62. Write '0': no effect. */
#define MPU_PROTENSET1_PROTREG62_Pos (30UL) /*!< Position of PROTREG62 field. */
#define MPU_PROTENSET1_PROTREG62_Msk (0x1UL << MPU_PROTENSET1_PROTREG62_Pos) /*!< Bit mask of PROTREG62 field. */
#define MPU_PROTENSET1_PROTREG62_Disabled (0UL) /*!< Read: protection disabled */
#define MPU_PROTENSET1_PROTREG62_Enabled (1UL) /*!< Read: protection enabled */
#define MPU_PROTENSET1_PROTREG62_Set (1UL) /*!< Write: enables protection */

/* Bit 29 : Write '1': Protection enable bit for region 61. Write '0': no effect. */
#define MPU_PROTENSET1_PROTREG61_Pos (29UL) /*!< Position of PROTREG61 field. */
#define MPU_PROTENSET1_PROTREG61_Msk (0x1UL << MPU_PROTENSET1_PROTREG61_Pos) /*!< Bit mask of PROTREG61 field. */
#define MPU_PROTENSET1_PROTREG61_Disabled (0UL) /*!< Read: protection disabled */
#define MPU_PROTENSET1_PROTREG61_Enabled (1UL) /*!< Read: protection enabled */
#define MPU_PROTENSET1_PROTREG61_Set (1UL) /*!< Write: enables protection */

/* Bit 28 : Write '1': Protection enable bit for region 60. Write '0': no effect. */
#define MPU_PROTENSET1_PROTREG60_Pos (28UL) /*!< Position of PROTREG60 field. */
#define MPU_PROTENSET1_PROTREG60_Msk (0x1UL << MPU_PROTENSET1_PROTREG60_Pos) /*!< Bit mask of PROTREG60 field. */
#define MPU_PROTENSET1_PROTREG60_Disabled (0UL) /*!< Read: protection disabled */
#define MPU_PROTENSET1_PROTREG60_Enabled (1UL) /*!< Read: protection enabled */
#define MPU_PROTENSET1_PROTREG60_Set (1UL) /*!< Write: enables protection */

/* Bit 27 : Write '1': Protection enable bit for region 59. Write '0': no effect. */
#define MPU_PROTENSET1_PROTREG59_Pos (27UL) /*!< Position of PROTREG59 field. */
#define MPU_PROTENSET1_PROTREG59_Msk (0x1UL << MPU_PROTENSET1_PROTREG59_Pos) /*!< Bit mask of PROTREG59 field. */
#define MPU_PROTENSET1_PROTREG59_Disabled (0UL) /*!< Read: protection disabled */
#define MPU_PROTENSET1_PROTREG59_Enabled (1UL) /*!< Read: protection enabled */
#define MPU_PROTENSET1_PROTREG59_Set (1UL) /*!< Write: enables protection */

/* Bit 26 : Write '1': Protection enable bit for region 58. Write '0': no effect. */
#define MPU_PROTENSET1_PROTREG58_Pos (26UL) /*!< Position of PROTREG58 field. */
#define MPU_PROTENSET1_PROTREG58_Msk (0x1UL << MPU_PROTENSET1_PROTREG58_Pos) /*!< Bit mask of PROTREG58 field. */
#define MPU_PROTENSET1_PROTREG58_Disabled (0UL) /*!< Read: protection disabled */
#define MPU_PROTENSET1_PROTREG58_Enabled (1UL) /*!< Read: protection enabled */
#define MPU_PROTENSET1_PROTREG58_Set (1UL) /*!< Write: enables protection */

/* Bit 25 : Write '1': Protection enable bit for region 57. Write '0': no effect. */
#define MPU_PROTENSET1_PROTREG57_Pos (25UL) /*!< Position of PROTREG57 field. */
#define MPU_PROTENSET1_PROTREG57_Msk (0x1UL << MPU_PROTENSET1_PROTREG57_Pos) /*!< Bit mask of PROTREG57 field. */
#define MPU_PROTENSET1_PROTREG57_Disabled (0UL) /*!< Read: protection disabled */
#define MPU_PROTENSET1_PROTREG57_Enabled (1UL) /*!< Read: protection enabled */
#define MPU_PROTENSET1_PROTREG57_Set (1UL) /*!< Write: enables protection */

/* Bit 24 : Write '1': Protection enable bit for region 56. Write '0': no effect. */
#define MPU_PROTENSET1_PROTREG56_Pos (24UL) /*!< Position of PROTREG56 field. */
#define MPU_PROTENSET1_PROTREG56_Msk (0x1UL << MPU_PROTENSET1_PROTREG56_Pos) /*!< Bit mask of PROTREG56 field. */
#define MPU_PROTENSET1_PROTREG56_Disabled (0UL) /*!< Read: protection disabled */
#define MPU_PROTENSET1_PROTREG56_Enabled (1UL) /*!< Read: protection enabled */
#define MPU_PROTENSET1_PROTREG56_Set (1UL) /*!< Write: enables protection */

/* Bit 23 : Write '1': Protection enable bit for region 55. Write '0': no effect. */
#define MPU_PROTENSET1_PROTREG55_Pos (23UL) /*!< Position of PROTREG55 field. */
#define MPU_PROTENSET1_PROTREG55_Msk (0x1UL << MPU_PROTENSET1_PROTREG55_Pos) /*!< Bit mask of PROTREG55 field. */
#define MPU_PROTENSET1_PROTREG55_Disabled (0UL) /*!< Read: protection disabled */
#define MPU_PROTENSET1_PROTREG55_Enabled (1UL) /*!< Read: protection enabled */
#define MPU_PROTENSET1_PROTREG55_Set (1UL) /*!< Write: enables protection */

/* Bit 22 : Write '1': Protection enable bit for region 54. Write '0': no effect. */
#define MPU_PROTENSET1_PROTREG54_Pos (22UL) /*!< Position of PROTREG54 field. */
#define MPU_PROTENSET1_PROTREG54_Msk (0x1UL << MPU_PROTENSET1_PROTREG54_Pos) /*!< Bit mask of PROTREG54 field. */
#define MPU_PROTENSET1_PROTREG54_Disabled (0UL) /*!< Read: protection disabled */
#define MPU_PROTENSET1_PROTREG54_Enabled (1UL) /*!< Read: protection enabled */
#define MPU_PROTENSET1_PROTREG54_Set (1UL) /*!< Write: enables protection */

/* Bit 21 : Write '1': Protection enable bit for region 53. Write '0': no effect. */
#define MPU_PROTENSET1_PROTREG53_Pos (21UL) /*!< Position of PROTREG53 field. */
#define MPU_PROTENSET1_PROTREG53_Msk (0x1UL << MPU_PROTENSET1_PROTREG53_Pos) /*!< Bit mask of PROTREG53 field. */
#define MPU_PROTENSET1_PROTREG53_Disabled (0UL) /*!< Read: protection disabled */
#define MPU_PROTENSET1_PROTREG53_Enabled (1UL) /*!< Read: protection enabled */
#define MPU_PROTENSET1_PROTREG53_Set (1UL) /*!< Write: enables protection */

/* Bit 20 : Write '1': Protection enable bit for region 52. Write '0': no effect. */
#define MPU_PROTENSET1_PROTREG52_Pos (20UL) /*!< Position of PROTREG52 field. */
#define MPU_PROTENSET1_PROTREG52_Msk (0x1UL << MPU_PROTENSET1_PROTREG52_Pos) /*!< Bit mask of PROTREG52 field. */
#define MPU_PROTENSET1_PROTREG52_Disabled (0UL) /*!< Read: protection disabled */
#define MPU_PROTENSET1_PROTREG52_Enabled (1UL) /*!< Read: protection enabled */
#define MPU_PROTENSET1_PROTREG52_Set (1UL) /*!< Write: enables protection */

/* Bit 19 : Write '1': Protection enable bit for region 51. Write '0': no effect. */
#define MPU_PROTENSET1_PROTREG51_Pos (19UL) /*!< Position of PROTREG51 field. */
#define MPU_PROTENSET1_PROTREG51_Msk (0x1UL << MPU_PROTENSET1_PROTREG51_Pos) /*!< Bit mask of PROTREG51 field. */
#define MPU_PROTENSET1_PROTREG51_Disabled (0UL) /*!< Read: protection disabled */
#define MPU_PROTENSET1_PROTREG51_Enabled (1UL) /*!< Read: protection enabled */
#define MPU_PROTENSET1_PROTREG51_Set (1UL) /*!< Write: enables protection */

/* Bit 18 : Write '1': Protection enable bit for region 50. Write '0': no effect. */
#define MPU_PROTENSET1_PROTREG50_Pos (18UL) /*!< Position of PROTREG50 field. */
#define MPU_PROTENSET1_PROTREG50_Msk (0x1UL << MPU_PROTENSET1_PROTREG50_Pos) /*!< Bit mask of PROTREG50 field. */
#define MPU_PROTENSET1_PROTREG50_Disabled (0UL) /*!< Read: protection disabled */
#define MPU_PROTENSET1_PROTREG50_Enabled (1UL) /*!< Read: protection enabled */
#define MPU_PROTENSET1_PROTREG50_Set (1UL) /*!< Write: enables protection */

/* Bit 17 : Write '1': Protection enable bit for region 49. Write '0': no effect. */
#define MPU_PROTENSET1_PROTREG49_Pos (17UL) /*!< Position of PROTREG49 field. */
#define MPU_PROTENSET1_PROTREG49_Msk (0x1UL << MPU_PROTENSET1_PROTREG49_Pos) /*!< Bit mask of PROTREG49 field. */
#define MPU_PROTENSET1_PROTREG49_Disabled (0UL) /*!< Read: protection disabled */
#define MPU_PROTENSET1_PROTREG49_Enabled (1UL) /*!< Read: protection enabled */
#define MPU_PROTENSET1_PROTREG49_Set (1UL) /*!< Write: enables protection */

/* Bit 16 : Write '1': Protection enable bit for region 48. Write '0': no effect. */
#define MPU_PROTENSET1_PROTREG48_Pos (16UL) /*!< Position of PROTREG48 field. */
#define MPU_PROTENSET1_PROTREG48_Msk (0x1UL << MPU_PROTENSET1_PROTREG48_Pos) /*!< Bit mask of PROTREG48 field. */
#define MPU_PROTENSET1_PROTREG48_Disabled (0UL) /*!< Read: protection disabled */
#define MPU_PROTENSET1_PROTREG48_Enabled (1UL) /*!< Read: protection enabled */
#define MPU_PROTENSET1_PROTREG48_Set (1UL) /*!< Write: enables protection */

/* Bit 15 : Write '1': Protection enable bit for region 47. Write '0': no effect. */
#define MPU_PROTENSET1_PROTREG47_Pos (15UL) /*!< Position of PROTREG47 field. */
#define MPU_PROTENSET1_PROTREG47_Msk (0x1UL << MPU_PROTENSET1_PROTREG47_Pos) /*!< Bit mask of PROTREG47 field. */
#define MPU_PROTENSET1_PROTREG47_Disabled (0UL) /*!< Read: protection disabled */
#define MPU_PROTENSET1_PROTREG47_Enabled (1UL) /*!< Read: protection enabled */
#define MPU_PROTENSET1_PROTREG47_Set (1UL) /*!< Write: enables protection */

/* Bit 14 : Write '1': Protection enable bit for region 46. Write '0': no effect. */
#define MPU_PROTENSET1_PROTREG46_Pos (14UL) /*!< Position of PROTREG46 field. */
#define MPU_PROTENSET1_PROTREG46_Msk (0x1UL << MPU_PROTENSET1_PROTREG46_Pos) /*!< Bit mask of PROTREG46 field. */
#define MPU_PROTENSET1_PROTREG46_Disabled (0UL) /*!< Read: protection disabled */
#define MPU_PROTENSET1_PROTREG46_Enabled (1UL) /*!< Read: protection enabled */
#define MPU_PROTENSET1_PROTREG46_Set (1UL) /*!< Write: enables protection */

/* Bit 13 : Write '1': Protection enable bit for region 45. Write '0': no effect. */
#define MPU_PROTENSET1_PROTREG45_Pos (13UL) /*!< Position of PROTREG45 field. */
#define MPU_PROTENSET1_PROTREG45_Msk (0x1UL << MPU_PROTENSET1_PROTREG45_Pos) /*!< Bit mask of PROTREG45 field. */
#define MPU_PROTENSET1_PROTREG45_Disabled (0UL) /*!< Read: protection disabled */
#define MPU_PROTENSET1_PROTREG45_Enabled (1UL) /*!< Read: protection enabled */
#define MPU_PROTENSET1_PROTREG45_Set (1UL) /*!< Write: enables protection */

/* Bit 12 : Write '1': Protection enable bit for region 44. Write '0': no effect. */
#define MPU_PROTENSET1_PROTREG44_Pos (12UL) /*!< Position of PROTREG44 field. */
#define MPU_PROTENSET1_PROTREG44_Msk (0x1UL << MPU_PROTENSET1_PROTREG44_Pos) /*!< Bit mask of PROTREG44 field. */
#define MPU_PROTENSET1_PROTREG44_Disabled (0UL) /*!< Read: protection disabled */
#define MPU_PROTENSET1_PROTREG44_Enabled (1UL) /*!< Read: protection enabled */
#define MPU_PROTENSET1_PROTREG44_Set (1UL) /*!< Write: enables protection */

/* Bit 11 : Write '1': Protection enable bit for region 43. Write '0': no effect. */
#define MPU_PROTENSET1_PROTREG43_Pos (11UL) /*!< Position of PROTREG43 field. */
#define MPU_PROTENSET1_PROTREG43_Msk (0x1UL << MPU_PROTENSET1_PROTREG43_Pos) /*!< Bit mask of PROTREG43 field. */
#define MPU_PROTENSET1_PROTREG43_Disabled (0UL) /*!< Read: protection disabled */
#define MPU_PROTENSET1_PROTREG43_Enabled (1UL) /*!< Read: protection enabled */
#define MPU_PROTENSET1_PROTREG43_Set (1UL) /*!< Write: enables protection */

/* Bit 10 : Write '1': Protection enable bit for region 42. Write '0': no effect. */
#define MPU_PROTENSET1_PROTREG42_Pos (10UL) /*!< Position of PROTREG42 field. */
#define MPU_PROTENSET1_PROTREG42_Msk (0x1UL << MPU_PROTENSET1_PROTREG42_Pos) /*!< Bit mask of PROTREG42 field. */
#define MPU_PROTENSET1_PROTREG42_Disabled (0UL) /*!< Read: protection disabled */
#define MPU_PROTENSET1_PROTREG42_Enabled (1UL) /*!< Read: protection enabled */
#define MPU_PROTENSET1_PROTREG42_Set (1UL) /*!< Write: enables protection */

/* Bit 9 : Write '1': Protection enable bit for region 41. Write '0': no effect. */
#define MPU_PROTENSET1_PROTREG41_Pos (9UL) /*!< Position of PROTREG41 field. */
#define MPU_PROTENSET1_PROTREG41_Msk (0x1UL << MPU_PROTENSET1_PROTREG41_Pos) /*!< Bit mask of PROTREG41 field. */
#define MPU_PROTENSET1_PROTREG41_Disabled (0UL) /*!< Read: protection disabled */
#define MPU_PROTENSET1_PROTREG41_Enabled (1UL) /*!< Read: protection enabled */
#define MPU_PROTENSET1_PROTREG41_Set (1UL) /*!< Write: enables protection */

/* Bit 8 : Write '1': Protection enable bit for region 40. Write '0': no effect. */
#define MPU_PROTENSET1_PROTREG40_Pos (8UL) /*!< Position of PROTREG40 field. */
#define MPU_PROTENSET1_PROTREG40_Msk (0x1UL << MPU_PROTENSET1_PROTREG40_Pos) /*!< Bit mask of PROTREG40 field. */
#define MPU_PROTENSET1_PROTREG40_Disabled (0UL) /*!< Read: protection disabled */
#define MPU_PROTENSET1_PROTREG40_Enabled (1UL) /*!< Read: protection enabled */
#define MPU_PROTENSET1_PROTREG40_Set (1UL) /*!< Write: enables protection */

/* Bit 7 : Write '1': Protection enable bit for region 39. Write '0': no effect. */
#define MPU_PROTENSET1_PROTREG39_Pos (7UL) /*!< Position of PROTREG39 field. */
#define MPU_PROTENSET1_PROTREG39_Msk (0x1UL << MPU_PROTENSET1_PROTREG39_Pos) /*!< Bit mask of PROTREG39 field. */
#define MPU_PROTENSET1_PROTREG39_Disabled (0UL) /*!< Read: protection disabled */
#define MPU_PROTENSET1_PROTREG39_Enabled (1UL) /*!< Read: protection enabled */
#define MPU_PROTENSET1_PROTREG39_Set (1UL) /*!< Write: enables protection */

/* Bit 6 : Write '1': Protection enable bit for region 38. Write '0': no effect. */
#define MPU_PROTENSET1_PROTREG38_Pos (6UL) /*!< Position of PROTREG38 field. */
#define MPU_PROTENSET1_PROTREG38_Msk (0x1UL << MPU_PROTENSET1_PROTREG38_Pos) /*!< Bit mask of PROTREG38 field. */
#define MPU_PROTENSET1_PROTREG38_Disabled (0UL) /*!< Read: protection disabled */
#define MPU_PROTENSET1_PROTREG38_Enabled (1UL) /*!< Read: protection enabled */
#define MPU_PROTENSET1_PROTREG38_Set (1UL) /*!< Write: enables protection */

/* Bit 5 : Write '1': Protection enable bit for region 37. Write '0': no effect. */
#define MPU_PROTENSET1_PROTREG37_Pos (5UL) /*!< Position of PROTREG37 field. */
#define MPU_PROTENSET1_PROTREG37_Msk (0x1UL << MPU_PROTENSET1_PROTREG37_Pos) /*!< Bit mask of PROTREG37 field. */
#define MPU_PROTENSET1_PROTREG37_Disabled (0UL) /*!< Read: protection disabled */
#define MPU_PROTENSET1_PROTREG37_Enabled (1UL) /*!< Read: protection enabled */
#define MPU_PROTENSET1_PROTREG37_Set (1UL) /*!< Write: enables protection */

/* Bit 4 : Write '1': Protection enable bit for region 36. Write '0': no effect. */
#define MPU_PROTENSET1_PROTREG36_Pos (4UL) /*!< Position of PROTREG36 field. */
#define MPU_PROTENSET1_PROTREG36_Msk (0x1UL << MPU_PROTENSET1_PROTREG36_Pos) /*!< Bit mask of PROTREG36 field. */
#define MPU_PROTENSET1_PROTREG36_Disabled (0UL) /*!< Read: protection disabled */
#define MPU_PROTENSET1_PROTREG36_Enabled (1UL) /*!< Read: protection enabled */
#define MPU_PROTENSET1_PROTREG36_Set (1UL) /*!< Write: enables protection */

/* Bit 3 : Write '1': Protection enable bit for region 35. Write '0': no effect. */
#define MPU_PROTENSET1_PROTREG35_Pos (3UL) /*!< Position of PROTREG35 field. */
#define MPU_PROTENSET1_PROTREG35_Msk (0x1UL << MPU_PROTENSET1_PROTREG35_Pos) /*!< Bit mask of PROTREG35 field. */
#define MPU_PROTENSET1_PROTREG35_Disabled (0UL) /*!< Read: protection disabled */
#define MPU_PROTENSET1_PROTREG35_Enabled (1UL) /*!< Read: protection enabled */
#define MPU_PROTENSET1_PROTREG35_Set (1UL) /*!< Write: enables protection */

/* Bit 2 : Write '1': Protection enable bit for region 34. Write '0': no effect. */
#define MPU_PROTENSET1_PROTREG34_Pos (2UL) /*!< Position of PROTREG34 field. */
#define MPU_PROTENSET1_PROTREG34_Msk (0x1UL << MPU_PROTENSET1_PROTREG34_Pos) /*!< Bit mask of PROTREG34 field. */
#define MPU_PROTENSET1_PROTREG34_Disabled (0UL) /*!< Read: protection disabled */
#define MPU_PROTENSET1_PROTREG34_Enabled (1UL) /*!< Read: protection enabled */
#define MPU_PROTENSET1_PROTREG34_Set (1UL) /*!< Write: enables protection */

/* Bit 1 : Write '1': Protection enable bit for region 33. Write '0': no effect. */
#define MPU_PROTENSET1_PROTREG33_Pos (1UL) /*!< Position of PROTREG33 field. */
#define MPU_PROTENSET1_PROTREG33_Msk (0x1UL << MPU_PROTENSET1_PROTREG33_Pos) /*!< Bit mask of PROTREG33 field. */
#define MPU_PROTENSET1_PROTREG33_Disabled (0UL) /*!< Read: protection disabled */
#define MPU_PROTENSET1_PROTREG33_Enabled (1UL) /*!< Read: protection enabled */
#define MPU_PROTENSET1_PROTREG33_Set (1UL) /*!< Write: enables protection */

/* Bit 0 : Write '1': Protection enable bit for region 32. Write '0': no effect. */
#define MPU_PROTENSET1_PROTREG32_Pos (0UL) /*!< Position of PROTREG32 field. */
#define MPU_PROTENSET1_PROTREG32_Msk (0x1UL << MPU_PROTENSET1_PROTREG32_Pos) /*!< Bit mask of PROTREG32 field. */
#define MPU_PROTENSET1_PROTREG32_Disabled (0UL) /*!< Read: protection disabled */
#define MPU_PROTENSET1_PROTREG32_Enabled (1UL) /*!< Read: protection enabled */
#define MPU_PROTENSET1_PROTREG32_Set (1UL) /*!< Write: enables protection */

/* Register: MPU_DISABLEINDEBUG */
/* Description: Disable protection mechanism in debug mode */

/* Bit 0 : Disable the protection mechanism for NVM regions while in debug mode. This register will only disable the protection mechanism if the device is in debug mode. */
#define MPU_DISABLEINDEBUG_DISABLEINDEBUG_Pos (0UL) /*!< Position of DISABLEINDEBUG field. */
#define MPU_DISABLEINDEBUG_DISABLEINDEBUG_Msk (0x1UL << MPU_DISABLEINDEBUG_DISABLEINDEBUG_Pos) /*!< Bit mask of DISABLEINDEBUG field. */
#define MPU_DISABLEINDEBUG_DISABLEINDEBUG_Enabled (0UL) /*!< Enable in debug */
#define MPU_DISABLEINDEBUG_DISABLEINDEBUG_Disabled (1UL) /*!< Disable in debug */

/* Register: MPU_PROTBLOCKSIZE */
/* Description: Protection block size */

/* Bits 1..0 : Protection block size */
#define MPU_PROTBLOCKSIZE_PROTBLOCKSIZE_Pos (0UL) /*!< Position of PROTBLOCKSIZE field. */
#define MPU_PROTBLOCKSIZE_PROTBLOCKSIZE_Msk (0x3UL << MPU_PROTBLOCKSIZE_PROTBLOCKSIZE_Pos) /*!< Bit mask of PROTBLOCKSIZE field. */
#define MPU_PROTBLOCKSIZE_PROTBLOCKSIZE_4k (0UL) /*!< 4 kByte protection block size */

/* Register: MPU_ENRBDREG */
/* Description: Enable RBD register in FICR */

/* Bit 0 : Enable or disable RBD register in FICR */
#define MPU_ENRBDREG_ENRBDREG_Pos (0UL) /*!< Position of ENRBDREG field. */
#define MPU_ENRBDREG_ENRBDREG_Msk (0x1UL << MPU_ENRBDREG_ENRBDREG_Pos) /*!< Bit mask of ENRBDREG field. */
#define MPU_ENRBDREG_ENRBDREG_Disabled (0UL) /*!< Disable */
#define MPU_ENRBDREG_ENRBDREG_Enabled (1UL) /*!< Enable */


/* Peripheral: NVMC */
/* Description: Non Volatile Memory Controller */

/* Register: NVMC_READY */
/* Description: Ready flag */

/* Bit 0 : NVMC is ready or busy */
#define NVMC_READY_READY_Pos (0UL) /*!< Position of READY field. */
#define NVMC_READY_READY_Msk (0x1UL << NVMC_READY_READY_Pos) /*!< Bit mask of READY field. */
#define NVMC_READY_READY_Busy (0UL) /*!< NVMC is busy (on-going write or erase operation) */
#define NVMC_READY_READY_Ready (1UL) /*!< NVMC is ready */

/* Register: NVMC_CONFIG */
/* Description: Configuration register */

/* Bit 3 : Deprecated field -  OTP Emulation mode */
#define NVMC_CONFIG_OTPEMU_Pos (3UL) /*!< Position of OTPEMU field. */
#define NVMC_CONFIG_OTPEMU_Msk (0x1UL << NVMC_CONFIG_OTPEMU_Pos) /*!< Bit mask of OTPEMU field. */
#define NVMC_CONFIG_OTPEMU_Disabled (0UL) /*!< OTP Emulation disabled */
#define NVMC_CONFIG_OTPEMU_Enabled (1UL) /*!< OTP Emulation enabled */

/* Bit 2 : Deprecated field -  Halt CPU until current write or erase command is finished */
#define NVMC_CONFIG_PROGMODE_Pos (2UL) /*!< Position of PROGMODE field. */
#define NVMC_CONFIG_PROGMODE_Msk (0x1UL << NVMC_CONFIG_PROGMODE_Pos) /*!< Bit mask of PROGMODE field. */
#define NVMC_CONFIG_PROGMODE_Halt (0UL) /*!< Halt CPU */
#define NVMC_CONFIG_PROGMODE_NoHalt (1UL) /*!< Do not halt CPU */

/* Bits 1..0 : Program memory access mode. It is strongly recommended to only activate erase and write modes when they are actively used. Enabling write or erase will invalidate the cache and keep it invalidated. */
#define NVMC_CONFIG_WEN_Pos (0UL) /*!< Position of WEN field. */
#define NVMC_CONFIG_WEN_Msk (0x3UL << NVMC_CONFIG_WEN_Pos) /*!< Bit mask of WEN field. */
#define NVMC_CONFIG_WEN_Ren (0UL) /*!< Read only access */
#define NVMC_CONFIG_WEN_Wen (1UL) /*!< Write Enabled */
#define NVMC_CONFIG_WEN_Een (2UL) /*!< Erase enabled */

/* Register: NVMC_ERASEPAGE */
/* Description: Register for erasing a page in Code area */

/* Bits 31..0 : Register for starting erase of a page in Code region 1 */
#define NVMC_ERASEPAGE_ERASEPAGE_Pos (0UL) /*!< Position of ERASEPAGE field. */
#define NVMC_ERASEPAGE_ERASEPAGE_Msk (0xFFFFFFFFUL << NVMC_ERASEPAGE_ERASEPAGE_Pos) /*!< Bit mask of ERASEPAGE field. */

/* Register: NVMC_ERASEPCR1 */
/* Description: Register for erasing a page in Code region 1. Equivalent to ERASEPAGE. */

/* Bits 31..0 : Register for erasing a page in Code region 1. Equivalent to ERASEPAGE. */
#define NVMC_ERASEPCR1_ERASEPCR1_Pos (0UL) /*!< Position of ERASEPCR1 field. */
#define NVMC_ERASEPCR1_ERASEPCR1_Msk (0xFFFFFFFFUL << NVMC_ERASEPCR1_ERASEPCR1_Pos) /*!< Bit mask of ERASEPCR1 field. */

/* Register: NVMC_ERASEALL */
/* Description: Register for erasing all non-volatile user memory */

/* Bit 0 : Erase all non-volatile memory including UICR registers. Note that code erase has to be enabled by CONFIG.EEN before the UICR can be erased. */
#define NVMC_ERASEALL_ERASEALL_Pos (0UL) /*!< Position of ERASEALL field. */
#define NVMC_ERASEALL_ERASEALL_Msk (0x1UL << NVMC_ERASEALL_ERASEALL_Pos) /*!< Bit mask of ERASEALL field. */
#define NVMC_ERASEALL_ERASEALL_NoOperation (0UL) /*!< No operation */
#define NVMC_ERASEALL_ERASEALL_Erase (1UL) /*!< Start chip erase */

/* Register: NVMC_ERASEPCR0 */
/* Description: Register for erasing a page in Code region 0 */

/* Bits 31..0 : Register for starting erase of a page in Code region 0 */
#define NVMC_ERASEPCR0_ERASEPCR0_Pos (0UL) /*!< Position of ERASEPCR0 field. */
#define NVMC_ERASEPCR0_ERASEPCR0_Msk (0xFFFFFFFFUL << NVMC_ERASEPCR0_ERASEPCR0_Pos) /*!< Bit mask of ERASEPCR0 field. */

/* Register: NVMC_ERASEUICR */
/* Description: Register for erasing User Information Configuration Registers */

/* Bit 0 : Register starting erase of all User Information Configuration Registers. Note that code erase has to be enabled by CONFIG.EEN before the UICR can be erased. */
#define NVMC_ERASEUICR_ERASEUICR_Pos (0UL) /*!< Position of ERASEUICR field. */
#define NVMC_ERASEUICR_ERASEUICR_Msk (0x1UL << NVMC_ERASEUICR_ERASEUICR_Pos) /*!< Bit mask of ERASEUICR field. */
#define NVMC_ERASEUICR_ERASEUICR_NoOperation (0UL) /*!< No operation */
#define NVMC_ERASEUICR_ERASEUICR_Erase (1UL) /*!< Start erase of UICR */

/* Register: NVMC_TESTMODE */
/* Description: Register for entering test mode. Refer to the flash IP test documentation for more details. */

/* Bits 15..0 : Register for entering test mode. Refer to the flash IP test documentation for more details. This register does not return the same value as written. */
#define NVMC_TESTMODE_TESTMODE_Pos (0UL) /*!< Position of TESTMODE field. */
#define NVMC_TESTMODE_TESTMODE_Msk (0xFFFFUL << NVMC_TESTMODE_TESTMODE_Pos) /*!< Bit mask of TESTMODE field. */
#define NVMC_TESTMODE_TESTMODE_NORMAL (0UL) /*!< Read: Not in test-mode. */
#define NVMC_TESTMODE_TESTMODE_TESTMODE1 (1UL) /*!< Read: In test-mode 1. */
#define NVMC_TESTMODE_TESTMODE_TESTMODE2 (2UL) /*!< Read: In test-mode 2. */
#define NVMC_TESTMODE_TESTMODE_TESTMODE3 (4UL) /*!< Read: In test-mode 3. */
#define NVMC_TESTMODE_TESTMODE_SetNORMAL (0UL) /*!< Write: Sets NORMAL mode. */
#define NVMC_TESTMODE_TESTMODE_SetTESTMODE2 (0xABCDUL) /*!< Write: Sets test-mode 2. */
#define NVMC_TESTMODE_TESTMODE_SetTESTMODE1 (0xBCDEUL) /*!< Write: Sets test-mode 1. */
#define NVMC_TESTMODE_TESTMODE_SetTESTMODE3 (0xCDEFUL) /*!< Write: Sets test-mode 3. */

/* Register: NVMC_TESTCONTROL */
/* Description: Direct flash test, control lines. Not used for XLR3LC (uses TESTCTRLLINES and TESTCTRLADDR instead) */

/* Bit 31 : (Do not use in XLR3LC) Control the TMR signal */
#define NVMC_TESTCONTROL_TMR_Pos (31UL) /*!< Position of TMR field. */
#define NVMC_TESTCONTROL_TMR_Msk (0x1UL << NVMC_TESTCONTROL_TMR_Pos) /*!< Bit mask of TMR field. */

/* Bit 30 : (Do not use in XLR3LC) Control the NVSTR signal */
#define NVMC_TESTCONTROL_NVSTR_Pos (30UL) /*!< Position of NVSTR field. */
#define NVMC_TESTCONTROL_NVSTR_Msk (0x1UL << NVMC_TESTCONTROL_NVSTR_Pos) /*!< Bit mask of NVSTR field. */

/* Bit 29 : (Do not use in XLR3LC) Control the PROG signal */
#define NVMC_TESTCONTROL_PROG_Pos (29UL) /*!< Position of PROG field. */
#define NVMC_TESTCONTROL_PROG_Msk (0x1UL << NVMC_TESTCONTROL_PROG_Pos) /*!< Bit mask of PROG field. */

/* Bit 28 : (Do not use in XLR3LC) Control the MAS1 signal */
#define NVMC_TESTCONTROL_MAS1_Pos (28UL) /*!< Position of MAS1 field. */
#define NVMC_TESTCONTROL_MAS1_Msk (0x1UL << NVMC_TESTCONTROL_MAS1_Pos) /*!< Bit mask of MAS1 field. */

/* Bit 27 : (Do not use in XLR3LC) Control the ERASE signal */
#define NVMC_TESTCONTROL_ERASE_Pos (27UL) /*!< Position of ERASE field. */
#define NVMC_TESTCONTROL_ERASE_Msk (0x1UL << NVMC_TESTCONTROL_ERASE_Pos) /*!< Bit mask of ERASE field. */

/* Bit 26 : (Do not use in XLR3LC) Control the IFREN signal */
#define NVMC_TESTCONTROL_IFREN_Pos (26UL) /*!< Position of IFREN field. */
#define NVMC_TESTCONTROL_IFREN_Msk (0x1UL << NVMC_TESTCONTROL_IFREN_Pos) /*!< Bit mask of IFREN field. */

/* Bit 25 : (Do not use in XLR3LC) Control the SE signal */
#define NVMC_TESTCONTROL_SE_Pos (25UL) /*!< Position of SE field. */
#define NVMC_TESTCONTROL_SE_Msk (0x1UL << NVMC_TESTCONTROL_SE_Pos) /*!< Bit mask of SE field. */

/* Bit 24 : (Do not use in XLR3LC) Control the YE signal */
#define NVMC_TESTCONTROL_YE_Pos (24UL) /*!< Position of YE field. */
#define NVMC_TESTCONTROL_YE_Msk (0x1UL << NVMC_TESTCONTROL_YE_Pos) /*!< Bit mask of YE field. */

/* Bit 23 : (Do not use in XLR3LC) Control the XE signal */
#define NVMC_TESTCONTROL_XE_Pos (23UL) /*!< Position of XE field. */
#define NVMC_TESTCONTROL_XE_Msk (0x1UL << NVMC_TESTCONTROL_XE_Pos) /*!< Bit mask of XE field. */

/* Bits 14..5 : (Do not use in XLR3LC) Control the XADDR signal */
#define NVMC_TESTCONTROL_XADDR_Pos (5UL) /*!< Position of XADDR field. */
#define NVMC_TESTCONTROL_XADDR_Msk (0x3FFUL << NVMC_TESTCONTROL_XADDR_Pos) /*!< Bit mask of XADDR field. */

/* Bits 4..0 : (Do not use in XLR3LC) Control the YADDR signal */
#define NVMC_TESTCONTROL_YADDR_Pos (0UL) /*!< Position of YADDR field. */
#define NVMC_TESTCONTROL_YADDR_Msk (0x1FUL << NVMC_TESTCONTROL_YADDR_Pos) /*!< Bit mask of YADDR field. */

/* Register: NVMC_TESTDATA */
/* Description: Direct flash test data */

/* Bits 31..0 : Returns data out from flash when reading. Sets flash data in when writing. XLR3LC only: used also for compare. In TESTMODE2: Flash/DOUT for read. Flash/DIN for write. DIN value also used for compare in TESTCMPINC and TESTNCMPINC. In TESTMODE1, DIN[0]=1 will do Flash Configuration with value 0xFF. This can be done before doing TESTMASSERASE. */
#define NVMC_TESTDATA_TESTDATA_Pos (0UL) /*!< Position of TESTDATA field. */
#define NVMC_TESTDATA_TESTDATA_Msk (0xFFFFFFFFUL << NVMC_TESTDATA_TESTDATA_Pos) /*!< Bit mask of TESTDATA field. */

/* Register: NVMC_TESTMASSERASE */
/* Description: Self-timed mass-erase operation */

/* Bits 2..0 : Self-timed mass-erase operation XLR3LC TESTMODE1 only. Any operation other than XLR3LC_EVERYTHING, XLR3LC_INFOMAIN and XLR3LC_MAIN will return data out from flash when reading, or set flash data in when writing. */
#define NVMC_TESTMASSERASE_TESTMASSERASE_Pos (0UL) /*!< Position of TESTMASSERASE field. */
#define NVMC_TESTMASSERASE_TESTMASSERASE_Msk (0x7UL << NVMC_TESTMASSERASE_TESTMASSERASE_Pos) /*!< Bit mask of TESTMASSERASE field. */
#define NVMC_TESTMASSERASE_TESTMASSERASE_NOOPERATION0 (0UL) /*!< No operation */
#define NVMC_TESTMASSERASE_TESTMASSERASE_NOOPERATION1 (1UL) /*!< No operation */
#define NVMC_TESTMASSERASE_TESTMASSERASE_MAIN (2UL) /*!< Erase only the main block XLR3LC TESTMODE1: erase only MainBlock and Redundancy sectors */
#define NVMC_TESTMASSERASE_TESTMASSERASE_EVERYTHING (3UL) /*!< Erase everything (all information pages and main block) XLR3LC TESTMODE1: erase both InfoPages, MainBlock and Redundancy sectors */
#define NVMC_TESTMASSERASE_TESTMASSERASE_XLR3LC_TOTAL (7UL) /*!< XLR3LC TESTMODE1 only: erase everything, both InfoPages, MainBlock, Redundancy sectors and NVR_CFG sector */

/* Register: NVMC_TESTERASEREFCELL */
/* Description: Self-timed erase reference cell operation. Not used in XLR3LC. */

/* Bit 0 : Self-timed erase reference cell operation. Not used in XLR3LC. */
#define NVMC_TESTERASEREFCELL_TESTERASEREFCELL_Pos (0UL) /*!< Position of TESTERASEREFCELL field. */
#define NVMC_TESTERASEREFCELL_TESTERASEREFCELL_Msk (0x1UL << NVMC_TESTERASEREFCELL_TESTERASEREFCELL_Pos) /*!< Bit mask of TESTERASEREFCELL field. */
#define NVMC_TESTERASEREFCELL_TESTERASEREFCELL_NOOPERATION (0UL) /*!< No operation */
#define NVMC_TESTERASEREFCELL_TESTERASEREFCELL_START (1UL) /*!< Start the erase reference cell operation */

/* Register: NVMC_TESTCMPINC */
/* Description: XLR3LC only: Reads and compares last flash data to TESTDATA content. Post-increments TESTCONTROLADDR. */

/* Bit 0 : XLR3LC only: Reads and compares last flash data (direct lines) to the complement of TESTDATA content (all bits inverted). Post-increments TESTCONTROLADDR. */
#define NVMC_TESTCMPINC_DIRECT_Pos (0UL) /*!< Position of DIRECT field. */
#define NVMC_TESTCMPINC_DIRECT_Msk (0x1UL << NVMC_TESTCMPINC_DIRECT_Pos) /*!< Bit mask of DIRECT field. */
#define NVMC_TESTCMPINC_DIRECT_Equal (0UL) /*!< Direct TESTDATA content and flash data are equal */
#define NVMC_TESTCMPINC_DIRECT_NotEqual (1UL) /*!< Direct TESTDATA content and flash data are different */

/* Register: NVMC_TESTNCMPINC */
/* Description: XLR3LC only: Reads and compares last flash data to complement of TESTDATA content. Post-increments TESTCONTROLADDR. */

/* Bit 0 : XLR3LC only: Reads and compares last flash data (direct lines) to the complement of TESTDATA content (all bits inverted). Post-increments TESTCONTROLADDR. */
#define NVMC_TESTNCMPINC_DIRECT_Pos (0UL) /*!< Position of DIRECT field. */
#define NVMC_TESTNCMPINC_DIRECT_Msk (0x1UL << NVMC_TESTNCMPINC_DIRECT_Pos) /*!< Bit mask of DIRECT field. */
#define NVMC_TESTNCMPINC_DIRECT_Complement (0UL) /*!< Direct TESTDATA content and flash row read are each-other's complement */
#define NVMC_TESTNCMPINC_DIRECT_NotComplement (1UL) /*!< Direct TESTDATA content and flash row read are not each-other's complement */

/* Register: NVMC_TESTCTRLLINESESF1 */
/* Description: XLR3LC with ESF1 flash IP only. Direct flash test, control lines. Refer to the flash IP test documentation (4402_042) for more details. */

/* Bit 18 : XLR3LC only: control the CLOCK pulse (CLOCK must be set as well) */
#define NVMC_TESTCTRLLINESESF1_CLOCK_P_Pos (18UL) /*!< Position of CLOCK_P field. */
#define NVMC_TESTCTRLLINESESF1_CLOCK_P_Msk (0x1UL << NVMC_TESTCTRLLINESESF1_CLOCK_P_Pos) /*!< Bit mask of CLOCK_P field. */

/* Bit 17 : XLR3LC only: control the TMEN signal */
#define NVMC_TESTCTRLLINESESF1_TMEN_Pos (17UL) /*!< Position of TMEN field. */
#define NVMC_TESTCTRLLINESESF1_TMEN_Msk (0x1UL << NVMC_TESTCTRLLINESESF1_TMEN_Pos) /*!< Bit mask of TMEN field. */

/* Bit 16 : XLR3LC only: control the inverted WEb signal */
#define NVMC_TESTCTRLLINESESF1_NWEB_Pos (16UL) /*!< Position of NWEB field. */
#define NVMC_TESTCTRLLINESESF1_NWEB_Msk (0x1UL << NVMC_TESTCTRLLINESESF1_NWEB_Pos) /*!< Bit mask of NWEB field. */

/* Bit 15 : XLR3LC only: control the PROG signal */
#define NVMC_TESTCTRLLINESESF1_PROG_Pos (15UL) /*!< Position of PROG field. */
#define NVMC_TESTCTRLLINESESF1_PROG_Msk (0x1UL << NVMC_TESTCTRLLINESESF1_PROG_Pos) /*!< Bit mask of PROG field. */

/* Bit 14 : XLR3LC only: control the CHIP signal */
#define NVMC_TESTCTRLLINESESF1_CHIP_Pos (14UL) /*!< Position of CHIP field. */
#define NVMC_TESTCTRLLINESESF1_CHIP_Msk (0x1UL << NVMC_TESTCTRLLINESESF1_CHIP_Pos) /*!< Bit mask of CHIP field. */

/* Bit 13 : XLR3LC only: control the ERASE signal */
#define NVMC_TESTCTRLLINESESF1_ERASE_Pos (13UL) /*!< Position of ERASE field. */
#define NVMC_TESTCTRLLINESESF1_ERASE_Msk (0x1UL << NVMC_TESTCTRLLINESESF1_ERASE_Pos) /*!< Bit mask of ERASE field. */

/* Bit 12 : XLR3LC only: control the NVR signal */
#define NVMC_TESTCTRLLINESESF1_NVR_Pos (12UL) /*!< Position of NVR field. */
#define NVMC_TESTCTRLLINESESF1_NVR_Msk (0x1UL << NVMC_TESTCTRLLINESESF1_NVR_Pos) /*!< Bit mask of NVR field. */

/* Bit 11 : XLR3LC only: control the RDEN signal */
#define NVMC_TESTCTRLLINESESF1_RDEN_Pos (11UL) /*!< Position of RDEN field. */
#define NVMC_TESTCTRLLINESESF1_RDEN_Msk (0x1UL << NVMC_TESTCTRLLINESESF1_RDEN_Pos) /*!< Bit mask of RDEN field. */

/* Bit 10 : XLR3LC only: control the PROG2 signal */
#define NVMC_TESTCTRLLINESESF1_PROG2_Pos (10UL) /*!< Position of PROG2 field. */
#define NVMC_TESTCTRLLINESESF1_PROG2_Msk (0x1UL << NVMC_TESTCTRLLINESESF1_PROG2_Pos) /*!< Bit mask of PROG2 field. */

/* Bit 9 : XLR3LC only: control the inverted CEb signal */
#define NVMC_TESTCTRLLINESESF1_NCEB_Pos (9UL) /*!< Position of NCEB field. */
#define NVMC_TESTCTRLLINESESF1_NCEB_Msk (0x1UL << NVMC_TESTCTRLLINESESF1_NCEB_Pos) /*!< Bit mask of NCEB field. */

/* Bit 8 : XLR3LC only: control the CLOCK signal */
#define NVMC_TESTCTRLLINESESF1_CLOCK_Pos (8UL) /*!< Position of CLOCK field. */
#define NVMC_TESTCTRLLINESESF1_CLOCK_Msk (0x1UL << NVMC_TESTCTRLLINESESF1_CLOCK_Pos) /*!< Bit mask of CLOCK field. */

/* Bit 7 : XLR3LC only: control the CONFEN signal */
#define NVMC_TESTCTRLLINESESF1_CONFEN_Pos (7UL) /*!< Position of CONFEN field. */
#define NVMC_TESTCTRLLINESESF1_CONFEN_Msk (0x1UL << NVMC_TESTCTRLLINESESF1_CONFEN_Pos) /*!< Bit mask of CONFEN field. */

/* Bit 6 : XLR3LC only: control the LCK_CFG signal */
#define NVMC_TESTCTRLLINESESF1_LCK_CFG_Pos (6UL) /*!< Position of LCK_CFG field. */
#define NVMC_TESTCTRLLINESESF1_LCK_CFG_Msk (0x1UL << NVMC_TESTCTRLLINESESF1_LCK_CFG_Pos) /*!< Bit mask of LCK_CFG field. */

/* Bit 5 : XLR3LC only: control the ARRDN[1] signal */
#define NVMC_TESTCTRLLINESESF1_ARRDN1_Pos (5UL) /*!< Position of ARRDN1 field. */
#define NVMC_TESTCTRLLINESESF1_ARRDN1_Msk (0x1UL << NVMC_TESTCTRLLINESESF1_ARRDN1_Pos) /*!< Bit mask of ARRDN1 field. */

/* Bit 4 : XLR3LC only: control the ARRDN[0] signal */
#define NVMC_TESTCTRLLINESESF1_ARRDN0_Pos (4UL) /*!< Position of ARRDN0 field. */
#define NVMC_TESTCTRLLINESESF1_ARRDN0_Msk (0x1UL << NVMC_TESTCTRLLINESESF1_ARRDN0_Pos) /*!< Bit mask of ARRDN0 field. */

/* Bit 3 : XLR3LC only: control the DPD signal */
#define NVMC_TESTCTRLLINESESF1_DPD_Pos (3UL) /*!< Position of DPD field. */
#define NVMC_TESTCTRLLINESESF1_DPD_Msk (0x1UL << NVMC_TESTCTRLLINESESF1_DPD_Pos) /*!< Bit mask of DPD field. */

/* Bit 2 : XLR3LC only: control the NVR_CFG signal */
#define NVMC_TESTCTRLLINESESF1_NVR_CFG_Pos (2UL) /*!< Position of NVR_CFG field. */
#define NVMC_TESTCTRLLINESESF1_NVR_CFG_Msk (0x1UL << NVMC_TESTCTRLLINESESF1_NVR_CFG_Pos) /*!< Bit mask of NVR_CFG field. */

/* Bit 1 : XLR3LC only: control the RECALL signal */
#define NVMC_TESTCTRLLINESESF1_RECALL_Pos (1UL) /*!< Position of RECALL field. */
#define NVMC_TESTCTRLLINESESF1_RECALL_Msk (0x1UL << NVMC_TESTCTRLLINESESF1_RECALL_Pos) /*!< Bit mask of RECALL field. */

/* Bit 0 : XLR3LC only: control the PORb signal */
#define NVMC_TESTCTRLLINESESF1_PORB_Pos (0UL) /*!< Position of PORB field. */
#define NVMC_TESTCTRLLINESESF1_PORB_Msk (0x1UL << NVMC_TESTCTRLLINESESF1_PORB_Pos) /*!< Bit mask of PORB field. */

/* Register: NVMC_TESTCTRLADDRESF1 */
/* Description: XLR3LC with ESF1 flash IP only. Direct flash test control, address lines */

/* Bits 15..6 : XLR3LC with ESF1 flash IP only: control the XADDR signal */
#define NVMC_TESTCTRLADDRESF1_XADDR_Pos (6UL) /*!< Position of XADDR field. */
#define NVMC_TESTCTRLADDRESF1_XADDR_Msk (0x3FFUL << NVMC_TESTCTRLADDRESF1_XADDR_Pos) /*!< Bit mask of XADDR field. */

/* Bits 5..0 : XLR3LC with ESF1 flash IP only: control the YADDR signal */
#define NVMC_TESTCTRLADDRESF1_YADDR_Pos (0UL) /*!< Position of YADDR field. */
#define NVMC_TESTCTRLADDRESF1_YADDR_Msk (0x3FUL << NVMC_TESTCTRLADDRESF1_YADDR_Pos) /*!< Bit mask of YADDR field. */


/* Peripheral: POWER */
/* Description: Power control */

/* Register: POWER_INTENSET */
/* Description: Enable interrupt */

/* Bit 2 : Write '1' to Enable interrupt for POFWARN event */
#define POWER_INTENSET_POFWARN_Pos (2UL) /*!< Position of POFWARN field. */
#define POWER_INTENSET_POFWARN_Msk (0x1UL << POWER_INTENSET_POFWARN_Pos) /*!< Bit mask of POFWARN field. */
#define POWER_INTENSET_POFWARN_Disabled (0UL) /*!< Read: Disabled */
#define POWER_INTENSET_POFWARN_Enabled (1UL) /*!< Read: Enabled */
#define POWER_INTENSET_POFWARN_Set (1UL) /*!< Enable */

/* Register: POWER_INTENCLR */
/* Description: Disable interrupt */

/* Bit 2 : Write '1' to Disable interrupt for POFWARN event */
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

/* Bit 17 : Reset due to wake up from System OFF mode when wakeup is triggered from ANADETECT signal from LPCOMP */
#define POWER_RESETREAS_LPCOMP_Pos (17UL) /*!< Position of LPCOMP field. */
#define POWER_RESETREAS_LPCOMP_Msk (0x1UL << POWER_RESETREAS_LPCOMP_Pos) /*!< Bit mask of LPCOMP field. */
#define POWER_RESETREAS_LPCOMP_NotDetected (0UL) /*!< Not detected */
#define POWER_RESETREAS_LPCOMP_Detected (1UL) /*!< Detected */

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

/* Bit 2 : Reset from AIRCR.SYSRESETREQ detected */
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

/* Bit 31 : Ready bit for PPI */
#define POWER_PERRDY_PPI_Pos (31UL) /*!< Position of PPI field. */
#define POWER_PERRDY_PPI_Msk (0x1UL << POWER_PERRDY_PPI_Pos) /*!< Bit mask of PPI field. */

/* Bit 30 : Ready bit for NVMC */
#define POWER_PERRDY_NVMC_Pos (30UL) /*!< Position of NVMC field. */
#define POWER_PERRDY_NVMC_Msk (0x1UL << POWER_PERRDY_NVMC_Pos) /*!< Bit mask of NVMC field. */

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

/* Bit 0 : Ready bit for POWER and CLOCK */
#define POWER_PERRDY_POWER_CLOCK_Pos (0UL) /*!< Position of POWER_CLOCK field. */
#define POWER_PERRDY_POWER_CLOCK_Msk (0x1UL << POWER_PERRDY_POWER_CLOCK_Pos) /*!< Bit mask of POWER_CLOCK field. */

/* Register: POWER_RAMSTATUS */
/* Description: RAM status register */

/* Bit 3 : RAM block 3 is on or off/powering up */
#define POWER_RAMSTATUS_RAMBLOCK3_Pos (3UL) /*!< Position of RAMBLOCK3 field. */
#define POWER_RAMSTATUS_RAMBLOCK3_Msk (0x1UL << POWER_RAMSTATUS_RAMBLOCK3_Pos) /*!< Bit mask of RAMBLOCK3 field. */
#define POWER_RAMSTATUS_RAMBLOCK3_Off (0UL) /*!< Off */
#define POWER_RAMSTATUS_RAMBLOCK3_On (1UL) /*!< On */

/* Bit 2 : RAM block 2 is on or off/powering up */
#define POWER_RAMSTATUS_RAMBLOCK2_Pos (2UL) /*!< Position of RAMBLOCK2 field. */
#define POWER_RAMSTATUS_RAMBLOCK2_Msk (0x1UL << POWER_RAMSTATUS_RAMBLOCK2_Pos) /*!< Bit mask of RAMBLOCK2 field. */
#define POWER_RAMSTATUS_RAMBLOCK2_Off (0UL) /*!< Off */
#define POWER_RAMSTATUS_RAMBLOCK2_On (1UL) /*!< On */

/* Bit 1 : RAM block 1 is on or off/powering up */
#define POWER_RAMSTATUS_RAMBLOCK1_Pos (1UL) /*!< Position of RAMBLOCK1 field. */
#define POWER_RAMSTATUS_RAMBLOCK1_Msk (0x1UL << POWER_RAMSTATUS_RAMBLOCK1_Pos) /*!< Bit mask of RAMBLOCK1 field. */
#define POWER_RAMSTATUS_RAMBLOCK1_Off (0UL) /*!< Off */
#define POWER_RAMSTATUS_RAMBLOCK1_On (1UL) /*!< On */

/* Bit 0 : RAM block 0 is on or off/powering up */
#define POWER_RAMSTATUS_RAMBLOCK0_Pos (0UL) /*!< Position of RAMBLOCK0 field. */
#define POWER_RAMSTATUS_RAMBLOCK0_Msk (0x1UL << POWER_RAMSTATUS_RAMBLOCK0_Pos) /*!< Bit mask of RAMBLOCK0 field. */
#define POWER_RAMSTATUS_RAMBLOCK0_Off (0UL) /*!< Off */
#define POWER_RAMSTATUS_RAMBLOCK0_On (1UL) /*!< On */

/* Register: POWER_SYSTEMOFF */
/* Description: System OFF register */

/* Bit 0 : Enable System OFF mode */
#define POWER_SYSTEMOFF_SYSTEMOFF_Pos (0UL) /*!< Position of SYSTEMOFF field. */
#define POWER_SYSTEMOFF_SYSTEMOFF_Msk (0x1UL << POWER_SYSTEMOFF_SYSTEMOFF_Pos) /*!< Bit mask of SYSTEMOFF field. */
#define POWER_SYSTEMOFF_SYSTEMOFF_Enter (1UL) /*!< Enable System OFF mode */

/* Register: POWER_PERPOWER */
/* Description: Peripheral power configuration */

/* Bit 31 : Peripheral power bit for PPI */
#define POWER_PERPOWER_PPI_Pos (31UL) /*!< Position of PPI field. */
#define POWER_PERPOWER_PPI_Msk (0x1UL << POWER_PERPOWER_PPI_Pos) /*!< Bit mask of PPI field. */

/* Bit 30 : Peripheral power bit for NVMC */
#define POWER_PERPOWER_NVMC_Pos (30UL) /*!< Position of NVMC field. */
#define POWER_PERPOWER_NVMC_Msk (0x1UL << POWER_PERPOWER_NVMC_Pos) /*!< Bit mask of NVMC field. */

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

/* Bit 0 : Peripheral power bit for POWER and CLOCK */
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

/* Bits 2..1 : Power failure comparator threshold setting */
#define POWER_POFCON_THRESHOLD_Pos (1UL) /*!< Position of THRESHOLD field. */
#define POWER_POFCON_THRESHOLD_Msk (0x3UL << POWER_POFCON_THRESHOLD_Pos) /*!< Bit mask of THRESHOLD field. */
#define POWER_POFCON_THRESHOLD_V21 (0UL) /*!< Set threshold to 2.1 V */
#define POWER_POFCON_THRESHOLD_V23 (1UL) /*!< Set threshold to 2.3 V */
#define POWER_POFCON_THRESHOLD_V25 (2UL) /*!< Set threshold to 2.5 V */
#define POWER_POFCON_THRESHOLD_V27 (3UL) /*!< Set threshold to 2.7 V */

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

/* Register: POWER_RAMON */
/* Description: RAM on/off register (this register is retained) */

/* Bit 17 : Keep retention on RAM block 1 when RAM block is switched off */
#define POWER_RAMON_OFFRAM1_Pos (17UL) /*!< Position of OFFRAM1 field. */
#define POWER_RAMON_OFFRAM1_Msk (0x1UL << POWER_RAMON_OFFRAM1_Pos) /*!< Bit mask of OFFRAM1 field. */
#define POWER_RAMON_OFFRAM1_RAM1Off (0UL) /*!< Off */
#define POWER_RAMON_OFFRAM1_RAM1On (1UL) /*!< On */

/* Bit 16 : Keep retention on RAM block 0 when RAM block is switched off */
#define POWER_RAMON_OFFRAM0_Pos (16UL) /*!< Position of OFFRAM0 field. */
#define POWER_RAMON_OFFRAM0_Msk (0x1UL << POWER_RAMON_OFFRAM0_Pos) /*!< Bit mask of OFFRAM0 field. */
#define POWER_RAMON_OFFRAM0_RAM0Off (0UL) /*!< Off */
#define POWER_RAMON_OFFRAM0_RAM0On (1UL) /*!< On */

/* Bit 1 : Keep RAM block 1 on or off in system ON Mode */
#define POWER_RAMON_ONRAM1_Pos (1UL) /*!< Position of ONRAM1 field. */
#define POWER_RAMON_ONRAM1_Msk (0x1UL << POWER_RAMON_ONRAM1_Pos) /*!< Bit mask of ONRAM1 field. */
#define POWER_RAMON_ONRAM1_RAM1Off (0UL) /*!< Off */
#define POWER_RAMON_ONRAM1_RAM1On (1UL) /*!< On */

/* Bit 0 : Keep RAM block 0 on or off in system ON Mode */
#define POWER_RAMON_ONRAM0_Pos (0UL) /*!< Position of ONRAM0 field. */
#define POWER_RAMON_ONRAM0_Msk (0x1UL << POWER_RAMON_ONRAM0_Pos) /*!< Bit mask of ONRAM0 field. */
#define POWER_RAMON_ONRAM0_RAM0Off (0UL) /*!< Off */
#define POWER_RAMON_ONRAM0_RAM0On (1UL) /*!< On */

/* Register: POWER_RESET */
/* Description: Reset configuration register */

/* Bit 0 : Enable or disable pin reset in debug interface mode, see the DIF peripheral chapter */
#define POWER_RESET_RESET_Pos (0UL) /*!< Position of RESET field. */
#define POWER_RESET_RESET_Msk (0x1UL << POWER_RESET_RESET_Pos) /*!< Bit mask of RESET field. */
#define POWER_RESET_RESET_Disabled (0UL) /*!< Disable */
#define POWER_RESET_RESET_Enabled (1UL) /*!< Enable */

/* Register: POWER_FORCEOFF1V7 */
/* Description: Force off 1.7 V regulator when the device is operating in low voltage mode. See also the internal section in the NVMC chapter. */

/* Bit 0 : Force off 1.7 V regulator. See also the internal section in the NVMC chapter. */
#define POWER_FORCEOFF1V7_FORCEOFF1V7_Pos (0UL) /*!< Position of FORCEOFF1V7 field. */
#define POWER_FORCEOFF1V7_FORCEOFF1V7_Msk (0x1UL << POWER_FORCEOFF1V7_FORCEOFF1V7_Pos) /*!< Bit mask of FORCEOFF1V7 field. */
#define POWER_FORCEOFF1V7_FORCEOFF1V7_DoNotForceOff (0UL) /*!< Do not force off 1.7 V controller */
#define POWER_FORCEOFF1V7_FORCEOFF1V7_ForceOff (1UL) /*!< Force off 1.7 V controller */

/* Register: POWER_RAMONB */
/* Description: RAM on/off register (this register is retained) */

/* Bit 17 : Keep retention on RAM block 3 when RAM block is switched off */
#define POWER_RAMONB_OFFRAM3_Pos (17UL) /*!< Position of OFFRAM3 field. */
#define POWER_RAMONB_OFFRAM3_Msk (0x1UL << POWER_RAMONB_OFFRAM3_Pos) /*!< Bit mask of OFFRAM3 field. */
#define POWER_RAMONB_OFFRAM3_RAM3Off (0UL) /*!< Off */
#define POWER_RAMONB_OFFRAM3_RAM3On (1UL) /*!< On */

/* Bit 16 : Keep retention on RAM block 2 when RAM block is switched off */
#define POWER_RAMONB_OFFRAM2_Pos (16UL) /*!< Position of OFFRAM2 field. */
#define POWER_RAMONB_OFFRAM2_Msk (0x1UL << POWER_RAMONB_OFFRAM2_Pos) /*!< Bit mask of OFFRAM2 field. */
#define POWER_RAMONB_OFFRAM2_RAM2Off (0UL) /*!< Off */
#define POWER_RAMONB_OFFRAM2_RAM2On (1UL) /*!< On */

/* Bit 1 : Keep RAM block 3 on or off in system ON Mode */
#define POWER_RAMONB_ONRAM3_Pos (1UL) /*!< Position of ONRAM3 field. */
#define POWER_RAMONB_ONRAM3_Msk (0x1UL << POWER_RAMONB_ONRAM3_Pos) /*!< Bit mask of ONRAM3 field. */
#define POWER_RAMONB_ONRAM3_RAM3Off (0UL) /*!< Off */
#define POWER_RAMONB_ONRAM3_RAM3On (1UL) /*!< On */

/* Bit 0 : Keep RAM block 2 on or off in system ON Mode */
#define POWER_RAMONB_ONRAM2_Pos (0UL) /*!< Position of ONRAM2 field. */
#define POWER_RAMONB_ONRAM2_Msk (0x1UL << POWER_RAMONB_ONRAM2_Pos) /*!< Bit mask of ONRAM2 field. */
#define POWER_RAMONB_ONRAM2_RAM2Off (0UL) /*!< Off */
#define POWER_RAMONB_ONRAM2_RAM2On (1UL) /*!< On */

/* Register: POWER_DCDCEN */
/* Description: DC/DC enable register */

/* Bit 0 : Enable or disable DC/DC converter */
#define POWER_DCDCEN_DCDCEN_Pos (0UL) /*!< Position of DCDCEN field. */
#define POWER_DCDCEN_DCDCEN_Msk (0x1UL << POWER_DCDCEN_DCDCEN_Pos) /*!< Bit mask of DCDCEN field. */
#define POWER_DCDCEN_DCDCEN_Disabled (0UL) /*!< Disable */
#define POWER_DCDCEN_DCDCEN_Enabled (1UL) /*!< Enable */

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

/* Register: POWER_PWRREGTHRESHOLD */
/* Description: Set threshold value of power regulator */

/* Bits 6..0 : Sets the threshold value of power regulator. */
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
#define POWER_IGNOREDAPCPWRREGMODE_IGNOREDAPCPWRREGMODE_Do not ignore (0UL) /*!< Do not ignore power request form debugger */
#define POWER_IGNOREDAPCPWRREGMODE_IGNOREDAPCPWRREGMODE_Ignore (1UL) /*!< Ignore power request from debugger */

/* Register: POWER_CURRENTPWRREGMODE */
/* Description: Current mode in the power regulator */

/* Bits 6..0 : Current mode in the power regulator */
#define POWER_CURRENTPWRREGMODE_CURRENTPWRREGMODE_Pos (0UL) /*!< Position of CURRENTPWRREGMODE field. */
#define POWER_CURRENTPWRREGMODE_CURRENTPWRREGMODE_Msk (0x7FUL << POWER_CURRENTPWRREGMODE_CURRENTPWRREGMODE_Pos) /*!< Bit mask of CURRENTPWRREGMODE field. */


/* Peripheral: PPI */
/* Description: Programmable Peripheral Interconnect */

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
/* Description: Description cluster[0]:  Channel 0 event end-point */

/* Bits 31..0 : Pointer to event register. Accepts only addresses to registers from the Event group. */
#define PPI_CH_EEP_EEP_Pos (0UL) /*!< Position of EEP field. */
#define PPI_CH_EEP_EEP_Msk (0xFFFFFFFFUL << PPI_CH_EEP_EEP_Pos) /*!< Bit mask of EEP field. */

/* Register: PPI_CH_TEP */
/* Description: Description cluster[0]:  Channel 0 task end-point */

/* Bits 31..0 : Pointer to task register. Accepts only addresses to registers from the Task group. */
#define PPI_CH_TEP_TEP_Pos (0UL) /*!< Position of TEP field. */
#define PPI_CH_TEP_TEP_Msk (0xFFFFFFFFUL << PPI_CH_TEP_TEP_Pos) /*!< Bit mask of TEP field. */

/* Register: PPI_CHG */
/* Description: Description collection[0]:  Channel group 0 */

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


/* Peripheral: QDEC */
/* Description: Quadrature Decoder */

/* Register: QDEC_SHORTS */
/* Description: Shortcut register */

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

/* Bit 2 : Write '1' to Enable interrupt for ACCOF event */
#define QDEC_INTENSET_ACCOF_Pos (2UL) /*!< Position of ACCOF field. */
#define QDEC_INTENSET_ACCOF_Msk (0x1UL << QDEC_INTENSET_ACCOF_Pos) /*!< Bit mask of ACCOF field. */
#define QDEC_INTENSET_ACCOF_Disabled (0UL) /*!< Read: Disabled */
#define QDEC_INTENSET_ACCOF_Enabled (1UL) /*!< Read: Enabled */
#define QDEC_INTENSET_ACCOF_Set (1UL) /*!< Enable */

/* Bit 1 : Write '1' to Enable interrupt for REPORTRDY event */
#define QDEC_INTENSET_REPORTRDY_Pos (1UL) /*!< Position of REPORTRDY field. */
#define QDEC_INTENSET_REPORTRDY_Msk (0x1UL << QDEC_INTENSET_REPORTRDY_Pos) /*!< Bit mask of REPORTRDY field. */
#define QDEC_INTENSET_REPORTRDY_Disabled (0UL) /*!< Read: Disabled */
#define QDEC_INTENSET_REPORTRDY_Enabled (1UL) /*!< Read: Enabled */
#define QDEC_INTENSET_REPORTRDY_Set (1UL) /*!< Enable */

/* Bit 0 : Write '1' to Enable interrupt for SAMPLERDY event */
#define QDEC_INTENSET_SAMPLERDY_Pos (0UL) /*!< Position of SAMPLERDY field. */
#define QDEC_INTENSET_SAMPLERDY_Msk (0x1UL << QDEC_INTENSET_SAMPLERDY_Pos) /*!< Bit mask of SAMPLERDY field. */
#define QDEC_INTENSET_SAMPLERDY_Disabled (0UL) /*!< Read: Disabled */
#define QDEC_INTENSET_SAMPLERDY_Enabled (1UL) /*!< Read: Enabled */
#define QDEC_INTENSET_SAMPLERDY_Set (1UL) /*!< Enable */

/* Register: QDEC_INTENCLR */
/* Description: Disable interrupt */

/* Bit 2 : Write '1' to Disable interrupt for ACCOF event */
#define QDEC_INTENCLR_ACCOF_Pos (2UL) /*!< Position of ACCOF field. */
#define QDEC_INTENCLR_ACCOF_Msk (0x1UL << QDEC_INTENCLR_ACCOF_Pos) /*!< Bit mask of ACCOF field. */
#define QDEC_INTENCLR_ACCOF_Disabled (0UL) /*!< Read: Disabled */
#define QDEC_INTENCLR_ACCOF_Enabled (1UL) /*!< Read: Enabled */
#define QDEC_INTENCLR_ACCOF_Clear (1UL) /*!< Disable */

/* Bit 1 : Write '1' to Disable interrupt for REPORTRDY event */
#define QDEC_INTENCLR_REPORTRDY_Pos (1UL) /*!< Position of REPORTRDY field. */
#define QDEC_INTENCLR_REPORTRDY_Msk (0x1UL << QDEC_INTENCLR_REPORTRDY_Pos) /*!< Bit mask of REPORTRDY field. */
#define QDEC_INTENCLR_REPORTRDY_Disabled (0UL) /*!< Read: Disabled */
#define QDEC_INTENCLR_REPORTRDY_Enabled (1UL) /*!< Read: Enabled */
#define QDEC_INTENCLR_REPORTRDY_Clear (1UL) /*!< Disable */

/* Bit 0 : Write '1' to Disable interrupt for SAMPLERDY event */
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

/* Bits 2..0 : Sample period. The SAMPLE register will be updated for every new sample */
#define QDEC_SAMPLEPER_SAMPLEPER_Pos (0UL) /*!< Position of SAMPLEPER field. */
#define QDEC_SAMPLEPER_SAMPLEPER_Msk (0x7UL << QDEC_SAMPLEPER_SAMPLEPER_Pos) /*!< Bit mask of SAMPLEPER field. */
#define QDEC_SAMPLEPER_SAMPLEPER_128us (0UL) /*!< 128 us */
#define QDEC_SAMPLEPER_SAMPLEPER_256us (1UL) /*!< 256 us */
#define QDEC_SAMPLEPER_SAMPLEPER_512us (2UL) /*!< 512 us */
#define QDEC_SAMPLEPER_SAMPLEPER_1024us (3UL) /*!< 1024 us */
#define QDEC_SAMPLEPER_SAMPLEPER_2048us (4UL) /*!< 2048 us */
#define QDEC_SAMPLEPER_SAMPLEPER_4096us (5UL) /*!< 4096 us */
#define QDEC_SAMPLEPER_SAMPLEPER_8192us (6UL) /*!< 8192 us */
#define QDEC_SAMPLEPER_SAMPLEPER_16384us (7UL) /*!< 16384 us */

/* Register: QDEC_SAMPLE */
/* Description: Motion sample value */

/* Bits 31..0 : Last motion sample */
#define QDEC_SAMPLE_SAMPLE_Pos (0UL) /*!< Position of SAMPLE field. */
#define QDEC_SAMPLE_SAMPLE_Msk (0xFFFFFFFFUL << QDEC_SAMPLE_SAMPLE_Pos) /*!< Bit mask of SAMPLE field. */

/* Register: QDEC_REPORTPER */
/* Description: Number of samples to be taken before a REPORTRDY event can be generated */

/* Bits 2..0 : Specifies the number of samples to be accumulated in the ACC register before the REPORTRDY event can be generated */
#define QDEC_REPORTPER_REPORTPER_Pos (0UL) /*!< Position of REPORTPER field. */
#define QDEC_REPORTPER_REPORTPER_Msk (0x7UL << QDEC_REPORTPER_REPORTPER_Pos) /*!< Bit mask of REPORTPER field. */
#define QDEC_REPORTPER_REPORTPER_10Smpl (0UL) /*!< 10 samples / report */
#define QDEC_REPORTPER_REPORTPER_40Smpl (1UL) /*!< 40 samples / report */
#define QDEC_REPORTPER_REPORTPER_80Smpl (2UL) /*!< 80 samples / report */
#define QDEC_REPORTPER_REPORTPER_120Smpl (3UL) /*!< 120 samples / report */
#define QDEC_REPORTPER_REPORTPER_160Smpl (4UL) /*!< 160 samples / report */
#define QDEC_REPORTPER_REPORTPER_200Smpl (5UL) /*!< 200 samples / report */
#define QDEC_REPORTPER_REPORTPER_240Smpl (6UL) /*!< 240 samples / report */
#define QDEC_REPORTPER_REPORTPER_280Smpl (7UL) /*!< 280 samples / report */

/* Register: QDEC_ACC */
/* Description: Register accumulating the valid transitions */

/* Bits 31..0 : Register accumulating all valid samples (not double transition) read from the SAMPLE register */
#define QDEC_ACC_ACC_Pos (0UL) /*!< Position of ACC field. */
#define QDEC_ACC_ACC_Msk (0xFFFFFFFFUL << QDEC_ACC_ACC_Pos) /*!< Bit mask of ACC field. */

/* Register: QDEC_ACCREAD */
/* Description: Snapshot of the ACC register, updated by the READCLRACC task */

/* Bits 31..0 : Snapshot of the ACC register. */
#define QDEC_ACCREAD_ACCREAD_Pos (0UL) /*!< Position of ACCREAD field. */
#define QDEC_ACCREAD_ACCREAD_Msk (0xFFFFFFFFUL << QDEC_ACCREAD_ACCREAD_Pos) /*!< Bit mask of ACCREAD field. */

/* Register: QDEC_PSELLED */
/* Description: GPIO pin number to be used as LED output */

/* Bits 31..0 : GPIO pin number to be used as LED output. Writing the value 0xFFFFFFFF will disable this output. */
#define QDEC_PSELLED_PSELLED_Pos (0UL) /*!< Position of PSELLED field. */
#define QDEC_PSELLED_PSELLED_Msk (0xFFFFFFFFUL << QDEC_PSELLED_PSELLED_Pos) /*!< Bit mask of PSELLED field. */

/* Register: QDEC_PSELA */
/* Description: GPIO pin number to be used as Phase A input */

/* Bits 31..0 : GPIO pin number to be used as Phase A input. Writing the value 0xFFFFFFFF will disable this input. */
#define QDEC_PSELA_PSELA_Pos (0UL) /*!< Position of PSELA field. */
#define QDEC_PSELA_PSELA_Msk (0xFFFFFFFFUL << QDEC_PSELA_PSELA_Pos) /*!< Bit mask of PSELA field. */
#define QDEC_PSELA_PSELA_Disconnected (0xFFFFFFFFUL) /*!< Disconnect */

/* Register: QDEC_PSELB */
/* Description: GPIO pin number to be used as Phase B input */

/* Bits 31..0 : GPIO pin number to be used as Phase B input. Writing the value 0xFFFFFFFF will disable this input. */
#define QDEC_PSELB_PSELB_Pos (0UL) /*!< Position of PSELB field. */
#define QDEC_PSELB_PSELB_Msk (0xFFFFFFFFUL << QDEC_PSELB_PSELB_Pos) /*!< Bit mask of PSELB field. */
#define QDEC_PSELB_PSELB_Disconnected (0xFFFFFFFFUL) /*!< Disconnect */

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
/* Description: Snapshot of the ACCDBL, updated by the READCLRACC task */

/* Bits 3..0 : Snapshot of the ACCDBL register. This field is updated when the READCLRACC task is triggered. */
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

/* Register: RADIO_SHORTS */
/* Description: Shortcut register */

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

/* Bit 10 : Write '1' to Enable interrupt for BCMATCH event */
#define RADIO_INTENSET_BCMATCH_Pos (10UL) /*!< Position of BCMATCH field. */
#define RADIO_INTENSET_BCMATCH_Msk (0x1UL << RADIO_INTENSET_BCMATCH_Pos) /*!< Bit mask of BCMATCH field. */
#define RADIO_INTENSET_BCMATCH_Disabled (0UL) /*!< Read: Disabled */
#define RADIO_INTENSET_BCMATCH_Enabled (1UL) /*!< Read: Enabled */
#define RADIO_INTENSET_BCMATCH_Set (1UL) /*!< Enable */

/* Bit 7 : Write '1' to Enable interrupt for RSSIEND event */
#define RADIO_INTENSET_RSSIEND_Pos (7UL) /*!< Position of RSSIEND field. */
#define RADIO_INTENSET_RSSIEND_Msk (0x1UL << RADIO_INTENSET_RSSIEND_Pos) /*!< Bit mask of RSSIEND field. */
#define RADIO_INTENSET_RSSIEND_Disabled (0UL) /*!< Read: Disabled */
#define RADIO_INTENSET_RSSIEND_Enabled (1UL) /*!< Read: Enabled */
#define RADIO_INTENSET_RSSIEND_Set (1UL) /*!< Enable */

/* Bit 6 : Write '1' to Enable interrupt for DEVMISS event */
#define RADIO_INTENSET_DEVMISS_Pos (6UL) /*!< Position of DEVMISS field. */
#define RADIO_INTENSET_DEVMISS_Msk (0x1UL << RADIO_INTENSET_DEVMISS_Pos) /*!< Bit mask of DEVMISS field. */
#define RADIO_INTENSET_DEVMISS_Disabled (0UL) /*!< Read: Disabled */
#define RADIO_INTENSET_DEVMISS_Enabled (1UL) /*!< Read: Enabled */
#define RADIO_INTENSET_DEVMISS_Set (1UL) /*!< Enable */

/* Bit 5 : Write '1' to Enable interrupt for DEVMATCH event */
#define RADIO_INTENSET_DEVMATCH_Pos (5UL) /*!< Position of DEVMATCH field. */
#define RADIO_INTENSET_DEVMATCH_Msk (0x1UL << RADIO_INTENSET_DEVMATCH_Pos) /*!< Bit mask of DEVMATCH field. */
#define RADIO_INTENSET_DEVMATCH_Disabled (0UL) /*!< Read: Disabled */
#define RADIO_INTENSET_DEVMATCH_Enabled (1UL) /*!< Read: Enabled */
#define RADIO_INTENSET_DEVMATCH_Set (1UL) /*!< Enable */

/* Bit 4 : Write '1' to Enable interrupt for DISABLED event */
#define RADIO_INTENSET_DISABLED_Pos (4UL) /*!< Position of DISABLED field. */
#define RADIO_INTENSET_DISABLED_Msk (0x1UL << RADIO_INTENSET_DISABLED_Pos) /*!< Bit mask of DISABLED field. */
#define RADIO_INTENSET_DISABLED_Disabled (0UL) /*!< Read: Disabled */
#define RADIO_INTENSET_DISABLED_Enabled (1UL) /*!< Read: Enabled */
#define RADIO_INTENSET_DISABLED_Set (1UL) /*!< Enable */

/* Bit 3 : Write '1' to Enable interrupt for END event */
#define RADIO_INTENSET_END_Pos (3UL) /*!< Position of END field. */
#define RADIO_INTENSET_END_Msk (0x1UL << RADIO_INTENSET_END_Pos) /*!< Bit mask of END field. */
#define RADIO_INTENSET_END_Disabled (0UL) /*!< Read: Disabled */
#define RADIO_INTENSET_END_Enabled (1UL) /*!< Read: Enabled */
#define RADIO_INTENSET_END_Set (1UL) /*!< Enable */

/* Bit 2 : Write '1' to Enable interrupt for PAYLOAD event */
#define RADIO_INTENSET_PAYLOAD_Pos (2UL) /*!< Position of PAYLOAD field. */
#define RADIO_INTENSET_PAYLOAD_Msk (0x1UL << RADIO_INTENSET_PAYLOAD_Pos) /*!< Bit mask of PAYLOAD field. */
#define RADIO_INTENSET_PAYLOAD_Disabled (0UL) /*!< Read: Disabled */
#define RADIO_INTENSET_PAYLOAD_Enabled (1UL) /*!< Read: Enabled */
#define RADIO_INTENSET_PAYLOAD_Set (1UL) /*!< Enable */

/* Bit 1 : Write '1' to Enable interrupt for ADDRESS event */
#define RADIO_INTENSET_ADDRESS_Pos (1UL) /*!< Position of ADDRESS field. */
#define RADIO_INTENSET_ADDRESS_Msk (0x1UL << RADIO_INTENSET_ADDRESS_Pos) /*!< Bit mask of ADDRESS field. */
#define RADIO_INTENSET_ADDRESS_Disabled (0UL) /*!< Read: Disabled */
#define RADIO_INTENSET_ADDRESS_Enabled (1UL) /*!< Read: Enabled */
#define RADIO_INTENSET_ADDRESS_Set (1UL) /*!< Enable */

/* Bit 0 : Write '1' to Enable interrupt for READY event */
#define RADIO_INTENSET_READY_Pos (0UL) /*!< Position of READY field. */
#define RADIO_INTENSET_READY_Msk (0x1UL << RADIO_INTENSET_READY_Pos) /*!< Bit mask of READY field. */
#define RADIO_INTENSET_READY_Disabled (0UL) /*!< Read: Disabled */
#define RADIO_INTENSET_READY_Enabled (1UL) /*!< Read: Enabled */
#define RADIO_INTENSET_READY_Set (1UL) /*!< Enable */

/* Register: RADIO_INTENCLR */
/* Description: Disable interrupt */

/* Bit 10 : Write '1' to Disable interrupt for BCMATCH event */
#define RADIO_INTENCLR_BCMATCH_Pos (10UL) /*!< Position of BCMATCH field. */
#define RADIO_INTENCLR_BCMATCH_Msk (0x1UL << RADIO_INTENCLR_BCMATCH_Pos) /*!< Bit mask of BCMATCH field. */
#define RADIO_INTENCLR_BCMATCH_Disabled (0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR_BCMATCH_Enabled (1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR_BCMATCH_Clear (1UL) /*!< Disable */

/* Bit 7 : Write '1' to Disable interrupt for RSSIEND event */
#define RADIO_INTENCLR_RSSIEND_Pos (7UL) /*!< Position of RSSIEND field. */
#define RADIO_INTENCLR_RSSIEND_Msk (0x1UL << RADIO_INTENCLR_RSSIEND_Pos) /*!< Bit mask of RSSIEND field. */
#define RADIO_INTENCLR_RSSIEND_Disabled (0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR_RSSIEND_Enabled (1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR_RSSIEND_Clear (1UL) /*!< Disable */

/* Bit 6 : Write '1' to Disable interrupt for DEVMISS event */
#define RADIO_INTENCLR_DEVMISS_Pos (6UL) /*!< Position of DEVMISS field. */
#define RADIO_INTENCLR_DEVMISS_Msk (0x1UL << RADIO_INTENCLR_DEVMISS_Pos) /*!< Bit mask of DEVMISS field. */
#define RADIO_INTENCLR_DEVMISS_Disabled (0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR_DEVMISS_Enabled (1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR_DEVMISS_Clear (1UL) /*!< Disable */

/* Bit 5 : Write '1' to Disable interrupt for DEVMATCH event */
#define RADIO_INTENCLR_DEVMATCH_Pos (5UL) /*!< Position of DEVMATCH field. */
#define RADIO_INTENCLR_DEVMATCH_Msk (0x1UL << RADIO_INTENCLR_DEVMATCH_Pos) /*!< Bit mask of DEVMATCH field. */
#define RADIO_INTENCLR_DEVMATCH_Disabled (0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR_DEVMATCH_Enabled (1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR_DEVMATCH_Clear (1UL) /*!< Disable */

/* Bit 4 : Write '1' to Disable interrupt for DISABLED event */
#define RADIO_INTENCLR_DISABLED_Pos (4UL) /*!< Position of DISABLED field. */
#define RADIO_INTENCLR_DISABLED_Msk (0x1UL << RADIO_INTENCLR_DISABLED_Pos) /*!< Bit mask of DISABLED field. */
#define RADIO_INTENCLR_DISABLED_Disabled (0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR_DISABLED_Enabled (1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR_DISABLED_Clear (1UL) /*!< Disable */

/* Bit 3 : Write '1' to Disable interrupt for END event */
#define RADIO_INTENCLR_END_Pos (3UL) /*!< Position of END field. */
#define RADIO_INTENCLR_END_Msk (0x1UL << RADIO_INTENCLR_END_Pos) /*!< Bit mask of END field. */
#define RADIO_INTENCLR_END_Disabled (0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR_END_Enabled (1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR_END_Clear (1UL) /*!< Disable */

/* Bit 2 : Write '1' to Disable interrupt for PAYLOAD event */
#define RADIO_INTENCLR_PAYLOAD_Pos (2UL) /*!< Position of PAYLOAD field. */
#define RADIO_INTENCLR_PAYLOAD_Msk (0x1UL << RADIO_INTENCLR_PAYLOAD_Pos) /*!< Bit mask of PAYLOAD field. */
#define RADIO_INTENCLR_PAYLOAD_Disabled (0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR_PAYLOAD_Enabled (1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR_PAYLOAD_Clear (1UL) /*!< Disable */

/* Bit 1 : Write '1' to Disable interrupt for ADDRESS event */
#define RADIO_INTENCLR_ADDRESS_Pos (1UL) /*!< Position of ADDRESS field. */
#define RADIO_INTENCLR_ADDRESS_Msk (0x1UL << RADIO_INTENCLR_ADDRESS_Pos) /*!< Bit mask of ADDRESS field. */
#define RADIO_INTENCLR_ADDRESS_Disabled (0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR_ADDRESS_Enabled (1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR_ADDRESS_Clear (1UL) /*!< Disable */

/* Bit 0 : Write '1' to Disable interrupt for READY event */
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

/* Register: RADIO_CD */
/* Description: Carrier detect */

/* Bit 0 : Carrier detect */
#define RADIO_CD_CD_Pos (0UL) /*!< Position of CD field. */
#define RADIO_CD_CD_Msk (0x1UL << RADIO_CD_CD_Pos) /*!< Bit mask of CD field. */

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

/* Bits 3..0 : Holds capacitance-setting for PLL after automatic setting has been performed. This value is updated at the end of the calibration interval. */
#define RADIO_PLL_CAL_VCO_PLL_CAL_VCO_Pos (0UL) /*!< Position of PLL_CAL_VCO field. */
#define RADIO_PLL_CAL_VCO_PLL_CAL_VCO_Msk (0xFUL << RADIO_PLL_CAL_VCO_PLL_CAL_VCO_Pos) /*!< Bit mask of PLL_CAL_VCO field. */

/* Register: RADIO_LNB_OUT_SPI */
/* Description: Gain calibration */

/* Bits 2..0 : Readout of LNA gain setting. This is a function of received signal strength. */
#define RADIO_LNB_OUT_SPI_LNB_OUT_SPI_Pos (0UL) /*!< Position of LNB_OUT_SPI field. */
#define RADIO_LNB_OUT_SPI_LNB_OUT_SPI_Msk (0x7UL << RADIO_LNB_OUT_SPI_LNB_OUT_SPI_Pos) /*!< Bit mask of LNB_OUT_SPI field. */

/* Register: RADIO_DFESTATUS */
/* Description: DFE status of packet received. */

/* Bit 0 : DFE status of packet received */
#define RADIO_DFESTATUS_DFESTATUS_Pos (0UL) /*!< Position of DFESTATUS field. */
#define RADIO_DFESTATUS_DFESTATUS_Msk (0x1UL << RADIO_DFESTATUS_DFESTATUS_Pos) /*!< Bit mask of DFESTATUS field. */
#define RADIO_DFESTATUS_DFESTATUS_DFEError (0UL) /*!< Packet received with DFE error */
#define RADIO_DFESTATUS_DFESTATUS_DFEOk (1UL) /*!< Packet received with DFE ok */

/* Register: RADIO_PACKETPTR */
/* Description: Packet pointer */

/* Bits 31..0 : Packet pointer */
#define RADIO_PACKETPTR_PACKETPTR_Pos (0UL) /*!< Position of PACKETPTR field. */
#define RADIO_PACKETPTR_PACKETPTR_Msk (0xFFFFFFFFUL << RADIO_PACKETPTR_PACKETPTR_Pos) /*!< Bit mask of PACKETPTR field. */

/* Register: RADIO_FREQUENCY */
/* Description: Frequency */

/* Bits 6..0 : Radio channel frequency */
#define RADIO_FREQUENCY_FREQUENCY_Pos (0UL) /*!< Position of FREQUENCY field. */
#define RADIO_FREQUENCY_FREQUENCY_Msk (0x7FUL << RADIO_FREQUENCY_FREQUENCY_Pos) /*!< Bit mask of FREQUENCY field. */

/* Register: RADIO_TXPOWER */
/* Description: Output power */

/* Bits 7..0 : RADIO output power. */
#define RADIO_TXPOWER_TXPOWER_Pos (0UL) /*!< Position of TXPOWER field. */
#define RADIO_TXPOWER_TXPOWER_Msk (0xFFUL << RADIO_TXPOWER_TXPOWER_Pos) /*!< Bit mask of TXPOWER field. */
#define RADIO_TXPOWER_TXPOWER_0dBm (0x00UL) /*!< 0 dBm */
#define RADIO_TXPOWER_TXPOWER_Pos4dBm (0x04UL) /*!< +4 dBm */
#define RADIO_TXPOWER_TXPOWER_Neg30dBm (0xD8UL) /*!< -30 dBm */
#define RADIO_TXPOWER_TXPOWER_Neg20dBm (0xECUL) /*!< -20 dBm */
#define RADIO_TXPOWER_TXPOWER_Neg16dBm (0xF0UL) /*!< -16 dBm */
#define RADIO_TXPOWER_TXPOWER_Neg12dBm (0xF4UL) /*!< -12 dBm */
#define RADIO_TXPOWER_TXPOWER_Neg8dBm (0xF8UL) /*!< -8 dBm */
#define RADIO_TXPOWER_TXPOWER_Neg4dBm (0xFCUL) /*!< -4 dBm */

/* Register: RADIO_MODE */
/* Description: Data rate and modulation */

/* Bits 1..0 : Radio data rate and modulation setting. The radio supports Frequency-shift Keying (FSK) modulation. */
#define RADIO_MODE_MODE_Pos (0UL) /*!< Position of MODE field. */
#define RADIO_MODE_MODE_Msk (0x3UL << RADIO_MODE_MODE_Pos) /*!< Bit mask of MODE field. */
#define RADIO_MODE_MODE_Nrf_1Mbit (0UL) /*!< 1 Mbit/s Nordic proprietary radio mode */
#define RADIO_MODE_MODE_Nrf_2Mbit (1UL) /*!< 2 Mbit/s Nordic proprietary radio mode */
#define RADIO_MODE_MODE_Nrf_250Kbit (2UL) /*!< 250 kbit/s Nordic proprietary radio mode */
#define RADIO_MODE_MODE_Ble_1Mbit (3UL) /*!< 1 Mbit/s Bluetooth Low Energy */

/* Register: RADIO_PCNF0 */
/* Description: Packet configuration register 0 */

/* Bits 19..16 : Length on air of S1 field in number of bits. */
#define RADIO_PCNF0_S1LEN_Pos (16UL) /*!< Position of S1LEN field. */
#define RADIO_PCNF0_S1LEN_Msk (0xFUL << RADIO_PCNF0_S1LEN_Pos) /*!< Bit mask of S1LEN field. */

/* Bit 8 : Length on air of S0 field in number of bytes. */
#define RADIO_PCNF0_S0LEN_Pos (8UL) /*!< Position of S0LEN field. */
#define RADIO_PCNF0_S0LEN_Msk (0x1UL << RADIO_PCNF0_S0LEN_Pos) /*!< Bit mask of S0LEN field. */

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

/* Register: RADIO_TEST */
/* Description: Test features enable register. */

/* Bit 1 : Enable or disable PLL lock. */
#define RADIO_TEST_PLLLOCK_Pos (1UL) /*!< Position of PLLLOCK field. */
#define RADIO_TEST_PLLLOCK_Msk (0x1UL << RADIO_TEST_PLLLOCK_Pos) /*!< Bit mask of PLLLOCK field. */
#define RADIO_TEST_PLLLOCK_Disabled (0UL) /*!< Disable */
#define RADIO_TEST_PLLLOCK_Enabled (1UL) /*!< Enable */

/* Bit 0 : Enable or disable constant carrier. */
#define RADIO_TEST_CONSTCARRIER_Pos (0UL) /*!< Position of CONSTCARRIER field. */
#define RADIO_TEST_CONSTCARRIER_Msk (0x1UL << RADIO_TEST_CONSTCARRIER_Pos) /*!< Bit mask of CONSTCARRIER field. */
#define RADIO_TEST_CONSTCARRIER_Disabled (0UL) /*!< Disable */
#define RADIO_TEST_CONSTCARRIER_Enabled (1UL) /*!< Enable */

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

/* Bits 7..0 : Maximum size of DMA transfer in number of bytes */
#define RADIO_DMA_MAXLEN_DMA_MAXLEN_Pos (0UL) /*!< Position of DMA_MAXLEN field. */
#define RADIO_DMA_MAXLEN_DMA_MAXLEN_Msk (0xFFUL << RADIO_DMA_MAXLEN_DMA_MAXLEN_Pos) /*!< Bit mask of DMA_MAXLEN field. */

/* Register: RADIO_BCC */
/* Description: Bit counter compare */

/* Bits 31..0 : Bit counter compare */
#define RADIO_BCC_BCC_Pos (0UL) /*!< Position of BCC field. */
#define RADIO_BCC_BCC_Msk (0xFFFFFFFFUL << RADIO_BCC_BCC_Pos) /*!< Bit mask of BCC field. */

/* Register: RADIO_DAB */
/* Description: Description collection[0]:  Device address base segment 0 */

/* Bits 31..0 : Device address base segment 0 */
#define RADIO_DAB_DAB_Pos (0UL) /*!< Position of DAB field. */
#define RADIO_DAB_DAB_Msk (0xFFFFFFFFUL << RADIO_DAB_DAB_Pos) /*!< Bit mask of DAB field. */

/* Register: RADIO_DAP */
/* Description: Description collection[0]:  Device address prefix 0 */

/* Bits 15..0 : Device address prefix 0 */
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

/* Register: RADIO_AUTO1V7 */
/* Description: Automatically switch on 1V7 when RADIO is active */

/* Bit 0 : Enable or disable force on 1V7 regulator when the RADIO is active */
#define RADIO_AUTO1V7_AUTO1V7_Pos (0UL) /*!< Position of AUTO1V7 field. */
#define RADIO_AUTO1V7_AUTO1V7_Msk (0x1UL << RADIO_AUTO1V7_AUTO1V7_Pos) /*!< Bit mask of AUTO1V7 field. */
#define RADIO_AUTO1V7_AUTO1V7_Disabled (0UL) /*!< Disable */
#define RADIO_AUTO1V7_AUTO1V7_Enabled (1UL) /*!< Enable */

/* Register: RADIO_PWRUP_CD */
/* Description: Power up carried detect */

/* Bit 0 : Enable or disable carrier detect */
#define RADIO_PWRUP_CD_PWRUP_CD_Pos (0UL) /*!< Position of PWRUP_CD field. */
#define RADIO_PWRUP_CD_PWRUP_CD_Msk (0x1UL << RADIO_PWRUP_CD_PWRUP_CD_Pos) /*!< Bit mask of PWRUP_CD field. */
#define RADIO_PWRUP_CD_PWRUP_CD_Disabled (0UL) /*!< Disable */
#define RADIO_PWRUP_CD_PWRUP_CD_Enabled (1UL) /*!< Enable */

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

/* Register: RADIO_CALIF_OVERRIDE */
/* Description: IF RC calibration override */

/* Bit 0 : Enable or disable auto calibration */
#define RADIO_CALIF_OVERRIDE_CALIF_OVERRIDE_Pos (0UL) /*!< Position of CALIF_OVERRIDE field. */
#define RADIO_CALIF_OVERRIDE_CALIF_OVERRIDE_Msk (0x1UL << RADIO_CALIF_OVERRIDE_CALIF_OVERRIDE_Pos) /*!< Bit mask of CALIF_OVERRIDE field. */
#define RADIO_CALIF_OVERRIDE_CALIF_OVERRIDE_Enabled (0UL) /*!< Enable */
#define RADIO_CALIF_OVERRIDE_CALIF_OVERRIDE_Disabled (1UL) /*!< Disable */

/* Register: RADIO_CALIF_SET_CAPSW */
/* Description: IF RC calibration */

/* Bits 5..0 : Calibration word for IF-filter when calibration is disabled */
#define RADIO_CALIF_SET_CAPSW_CALIF_SET_CAPSW_Pos (0UL) /*!< Position of CALIF_SET_CAPSW field. */
#define RADIO_CALIF_SET_CAPSW_CALIF_SET_CAPSW_Msk (0x3FUL << RADIO_CALIF_SET_CAPSW_CALIF_SET_CAPSW_Pos) /*!< Bit mask of CALIF_SET_CAPSW field. */

/* Register: RADIO_PLL_CAPCNF */
/* Description: PLL calibration */

/* Bits 3..0 : External VCO calibration from SPI. Set to 0x0 to enable auto-calibration of VCO. */
#define RADIO_PLL_CAPCNF_PLL_CAPCNF_Pos (0UL) /*!< Position of PLL_CAPCNF field. */
#define RADIO_PLL_CAPCNF_PLL_CAPCNF_Msk (0xFUL << RADIO_PLL_CAPCNF_PLL_CAPCNF_Pos) /*!< Bit mask of PLL_CAPCNF field. */

/* Register: RADIO_VCO_SHUTDOWN */
/* Description: VCO control */

/* Bit 0 : Enable or disable VCO */
#define RADIO_VCO_SHUTDOWN_VCO_SHUTDOWN_Pos (0UL) /*!< Position of VCO_SHUTDOWN field. */
#define RADIO_VCO_SHUTDOWN_VCO_SHUTDOWN_Msk (0x1UL << RADIO_VCO_SHUTDOWN_VCO_SHUTDOWN_Pos) /*!< Bit mask of VCO_SHUTDOWN field. */
#define RADIO_VCO_SHUTDOWN_VCO_SHUTDOWN_Enabled (0UL) /*!< Enable */
#define RADIO_VCO_SHUTDOWN_VCO_SHUTDOWN_Disabled (1UL) /*!< Disable */

/* Register: RADIO_PLL_OUT_CLOCK */
/* Description: PLL calibration */

/* Bit 0 : Test clock control */
#define RADIO_PLL_OUT_CLOCK_PLL_OUT_CLOCK_Pos (0UL) /*!< Position of PLL_OUT_CLOCK field. */
#define RADIO_PLL_OUT_CLOCK_PLL_OUT_CLOCK_Msk (0x1UL << RADIO_PLL_OUT_CLOCK_PLL_OUT_CLOCK_Pos) /*!< Bit mask of PLL_OUT_CLOCK field. */
#define RADIO_PLL_OUT_CLOCK_PLL_OUT_CLOCK_Inactive (0UL) /*!< Output clock is inactive */
#define RADIO_PLL_OUT_CLOCK_PLL_OUT_CLOCK_Active (1UL) /*!< Output clock is active */

/* Register: RADIO_OVERRIDE0 */
/* Description: Trim value override register 0 */

/* Bits 31..0 : Trim value override register 0 */
#define RADIO_OVERRIDE0_OVERRIDE0_Pos (0UL) /*!< Position of OVERRIDE0 field. */
#define RADIO_OVERRIDE0_OVERRIDE0_Msk (0xFFFFFFFFUL << RADIO_OVERRIDE0_OVERRIDE0_Pos) /*!< Bit mask of OVERRIDE0 field. */

/* Register: RADIO_OVERRIDE1 */
/* Description: Trim value override register 1 */

/* Bits 31..0 : Trim value override register 1 */
#define RADIO_OVERRIDE1_OVERRIDE1_Pos (0UL) /*!< Position of OVERRIDE1 field. */
#define RADIO_OVERRIDE1_OVERRIDE1_Msk (0xFFFFFFFFUL << RADIO_OVERRIDE1_OVERRIDE1_Pos) /*!< Bit mask of OVERRIDE1 field. */

/* Register: RADIO_OVERRIDE2 */
/* Description: Trim value override register 2 */

/* Bits 31..0 : Trim value override register 2 */
#define RADIO_OVERRIDE2_OVERRIDE2_Pos (0UL) /*!< Position of OVERRIDE2 field. */
#define RADIO_OVERRIDE2_OVERRIDE2_Msk (0xFFFFFFFFUL << RADIO_OVERRIDE2_OVERRIDE2_Pos) /*!< Bit mask of OVERRIDE2 field. */

/* Register: RADIO_OVERRIDE3 */
/* Description: Trim value override register 3 */

/* Bits 31..0 : Trim value override register 3 */
#define RADIO_OVERRIDE3_OVERRIDE3_Pos (0UL) /*!< Position of OVERRIDE3 field. */
#define RADIO_OVERRIDE3_OVERRIDE3_Msk (0xFFFFFFFFUL << RADIO_OVERRIDE3_OVERRIDE3_Pos) /*!< Bit mask of OVERRIDE3 field. */

/* Register: RADIO_OVERRIDE4 */
/* Description: Trim value override register 4 */

/* Bit 31 : Enable or disable override of default trim values */
#define RADIO_OVERRIDE4_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_OVERRIDE4_ENABLE_Msk (0x1UL << RADIO_OVERRIDE4_ENABLE_Pos) /*!< Bit mask of ENABLE field. */
#define RADIO_OVERRIDE4_ENABLE_Disabled (0UL) /*!< Disable */
#define RADIO_OVERRIDE4_ENABLE_Enabled (1UL) /*!< Enable */

/* Bits 27..0 : Trim value override register 4 */
#define RADIO_OVERRIDE4_OVERRIDE4_Pos (0UL) /*!< Position of OVERRIDE4 field. */
#define RADIO_OVERRIDE4_OVERRIDE4_Msk (0xFFFFFFFUL << RADIO_OVERRIDE4_OVERRIDE4_Pos) /*!< Bit mask of OVERRIDE4 field. */

/* Register: RADIO_LOVERRIDE0 */
/* Description: Trim value override register 0 for Loderunner */

/* Bits 31..24 : Override for tPllBoost */
#define RADIO_LOVERRIDE0_TPLLBOOST_Pos (24UL) /*!< Position of TPLLBOOST field. */
#define RADIO_LOVERRIDE0_TPLLBOOST_Msk (0xFFUL << RADIO_LOVERRIDE0_TPLLBOOST_Pos) /*!< Bit mask of TPLLBOOST field. */

/* Bits 23..16 : Override for tPwrupMbias */
#define RADIO_LOVERRIDE0_TPWERUPMBIAS_Pos (16UL) /*!< Position of TPWERUPMBIAS field. */
#define RADIO_LOVERRIDE0_TPWERUPMBIAS_Msk (0xFFUL << RADIO_LOVERRIDE0_TPWERUPMBIAS_Pos) /*!< Bit mask of TPWERUPMBIAS field. */

/* Bits 15..8 : Override for tPwrupPA */
#define RADIO_LOVERRIDE0_TPWERUPPA_Pos (8UL) /*!< Position of TPWERUPPA field. */
#define RADIO_LOVERRIDE0_TPWERUPPA_Msk (0xFFUL << RADIO_LOVERRIDE0_TPWERUPPA_Pos) /*!< Bit mask of TPWERUPPA field. */

/* Bits 7..0 : Override for tPwrupPll */
#define RADIO_LOVERRIDE0_TPWERUPPLL_Pos (0UL) /*!< Position of TPWERUPPLL field. */
#define RADIO_LOVERRIDE0_TPWERUPPLL_Msk (0xFFUL << RADIO_LOVERRIDE0_TPWERUPPLL_Pos) /*!< Bit mask of TPWERUPPLL field. */

/* Register: RADIO_LOVERRIDE1 */
/* Description: Trim value override register 1 for Loderunner */

/* Bits 31..24 : Override for tPwrupRx */
#define RADIO_LOVERRIDE1_TPWRUPRX_Pos (24UL) /*!< Position of TPWRUPRX field. */
#define RADIO_LOVERRIDE1_TPWRUPRX_Msk (0xFFUL << RADIO_LOVERRIDE1_TPWRUPRX_Pos) /*!< Bit mask of TPWRUPRX field. */

/* Bits 23..16 : Override for tPwrupTx */
#define RADIO_LOVERRIDE1_TPWRUPTX_Pos (16UL) /*!< Position of TPWRUPTX field. */
#define RADIO_LOVERRIDE1_TPWRUPTX_Msk (0xFFUL << RADIO_LOVERRIDE1_TPWRUPTX_Pos) /*!< Bit mask of TPWRUPTX field. */

/* Bits 15..8 : Override for tPwrupVreg */
#define RADIO_LOVERRIDE1_TPWRUPVREG_Pos (8UL) /*!< Position of TPWRUPVREG field. */
#define RADIO_LOVERRIDE1_TPWRUPVREG_Msk (0xFFUL << RADIO_LOVERRIDE1_TPWRUPVREG_Pos) /*!< Bit mask of TPWRUPVREG field. */

/* Bits 7..0 : Override for tPwrupVregPa */
#define RADIO_LOVERRIDE1_TPWRUPVREGPA_Pos (0UL) /*!< Position of TPWRUPVREGPA field. */
#define RADIO_LOVERRIDE1_TPWRUPVREGPA_Msk (0xFFUL << RADIO_LOVERRIDE1_TPWRUPVREGPA_Pos) /*!< Bit mask of TPWRUPVREGPA field. */

/* Register: RADIO_LOVERRIDE2 */
/* Description: Trim value override register 2 for Loderunner */

/* Bits 31..24 : Override for tArstCalif */
#define RADIO_LOVERRIDE2_TARSTCALIF_Pos (24UL) /*!< Position of TARSTCALIF field. */
#define RADIO_LOVERRIDE2_TARSTCALIF_Msk (0xFFUL << RADIO_LOVERRIDE2_TARSTCALIF_Pos) /*!< Bit mask of TARSTCALIF field. */

/* Bits 23..16 : Override for tRstPll */
#define RADIO_LOVERRIDE2_TRSTPLL_Pos (16UL) /*!< Position of TRSTPLL field. */
#define RADIO_LOVERRIDE2_TRSTPLL_Msk (0xFFUL << RADIO_LOVERRIDE2_TRSTPLL_Pos) /*!< Bit mask of TRSTPLL field. */

/* Bits 15..8 : Override for tPllSettled */
#define RADIO_LOVERRIDE2_TPLLSETTLED_Pos (8UL) /*!< Position of TPLLSETTLED field. */
#define RADIO_LOVERRIDE2_TPLLSETTLED_Msk (0xFFUL << RADIO_LOVERRIDE2_TPLLSETTLED_Pos) /*!< Bit mask of TPLLSETTLED field. */

/* Bits 3..0 : Override for tIfsDelta */
#define RADIO_LOVERRIDE2_TIFSDELTA_Pos (0UL) /*!< Position of TIFSDELTA field. */
#define RADIO_LOVERRIDE2_TIFSDELTA_Msk (0xFUL << RADIO_LOVERRIDE2_TIFSDELTA_Pos) /*!< Bit mask of TIFSDELTA field. */

/* Register: RADIO_LOVERRIDE3 */
/* Description: Trim value override register 3 for Loderunner */

/* Bit 25 : Override for ifMixHighCurrent */
#define RADIO_LOVERRIDE3_IFMIXHIGHCURRENT_Pos (25UL) /*!< Position of IFMIXHIGHCURRENT field. */
#define RADIO_LOVERRIDE3_IFMIXHIGHCURRENT_Msk (0x1UL << RADIO_LOVERRIDE3_IFMIXHIGHCURRENT_Pos) /*!< Bit mask of IFMIXHIGHCURRENT field. */

/* Bit 24 : Override for cdFiltEn */
#define RADIO_LOVERRIDE3_CDFILTEN_Pos (24UL) /*!< Position of CDFILTEN field. */
#define RADIO_LOVERRIDE3_CDFILTEN_Msk (0x1UL << RADIO_LOVERRIDE3_CDFILTEN_Pos) /*!< Bit mask of CDFILTEN field. */

/* Bits 23..21 : Override for cdTh */
#define RADIO_LOVERRIDE3_CDTH_Pos (21UL) /*!< Position of CDTH field. */
#define RADIO_LOVERRIDE3_CDTH_Msk (0x7UL << RADIO_LOVERRIDE3_CDTH_Pos) /*!< Bit mask of CDTH field. */

/* Bits 20..18 : Override for agcTh */
#define RADIO_LOVERRIDE3_AGCTH_Pos (18UL) /*!< Position of AGCTH field. */
#define RADIO_LOVERRIDE3_AGCTH_Msk (0x7UL << RADIO_LOVERRIDE3_AGCTH_Pos) /*!< Bit mask of AGCTH field. */

/* Bits 17..16 : Override for tDeltaTxSend */
#define RADIO_LOVERRIDE3_TDELTATXSEND_Pos (16UL) /*!< Position of TDELTATXSEND field. */
#define RADIO_LOVERRIDE3_TDELTATXSEND_Msk (0x3UL << RADIO_LOVERRIDE3_TDELTATXSEND_Pos) /*!< Bit mask of TDELTATXSEND field. */

/* Bits 15..8 : Override for tAgcRftEn */
#define RADIO_LOVERRIDE3_TAGCRFTEN_Pos (8UL) /*!< Position of TAGCRFTEN field. */
#define RADIO_LOVERRIDE3_TAGCRFTEN_Msk (0xFFUL << RADIO_LOVERRIDE3_TAGCRFTEN_Pos) /*!< Bit mask of TAGCRFTEN field. */

/* Bits 7..4 : Override for tDeltaPipe */
#define RADIO_LOVERRIDE3_TDELTAPIPE_Pos (4UL) /*!< Position of TDELTAPIPE field. */
#define RADIO_LOVERRIDE3_TDELTAPIPE_Msk (0xFUL << RADIO_LOVERRIDE3_TDELTAPIPE_Pos) /*!< Bit mask of TDELTAPIPE field. */

/* Bits 3..0 : Override for tDeltaPwrdnPa */
#define RADIO_LOVERRIDE3_TDELTAPWRDNPA_Pos (0UL) /*!< Position of TDELTAPWRDNPA field. */
#define RADIO_LOVERRIDE3_TDELTAPWRDNPA_Msk (0xFUL << RADIO_LOVERRIDE3_TDELTAPWRDNPA_Pos) /*!< Bit mask of TDELTAPWRDNPA field. */

/* Register: RADIO_LOVERRIDE4 */
/* Description: Trim value override register 4 for Loderunner */

/* Bit 31 : Enable or disable override of default trim values */
#define RADIO_LOVERRIDE4_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_LOVERRIDE4_ENABLE_Msk (0x1UL << RADIO_LOVERRIDE4_ENABLE_Pos) /*!< Bit mask of ENABLE field. */
#define RADIO_LOVERRIDE4_ENABLE_Disabled (0UL) /*!< Disable */
#define RADIO_LOVERRIDE4_ENABLE_Enabled (1UL) /*!< Enable */

/* Bits 27..24 : Override for califOffset */
#define RADIO_LOVERRIDE4_CALIFOFFSET_Pos (24UL) /*!< Position of CALIFOFFSET field. */
#define RADIO_LOVERRIDE4_CALIFOFFSET_Msk (0xFUL << RADIO_LOVERRIDE4_CALIFOFFSET_Pos) /*!< Bit mask of CALIFOFFSET field. */

/* Bits 23..22 : Override for pllModVar */
#define RADIO_LOVERRIDE4_PLLMODVAR_Pos (22UL) /*!< Position of PLLMODVAR field. */
#define RADIO_LOVERRIDE4_PLLMODVAR_Msk (0x3UL << RADIO_LOVERRIDE4_PLLMODVAR_Pos) /*!< Bit mask of PLLMODVAR field. */

/* Bits 21..18 : Override for pllDevCorrOffset */
#define RADIO_LOVERRIDE4_PLLDEVCORROFFSET_Pos (18UL) /*!< Position of PLLDEVCORROFFSET field. */
#define RADIO_LOVERRIDE4_PLLDEVCORROFFSET_Msk (0xFUL << RADIO_LOVERRIDE4_PLLDEVCORROFFSET_Pos) /*!< Bit mask of PLLDEVCORROFFSET field. */

/* Bit 17 : Override for pllCloseTxFeedback */
#define RADIO_LOVERRIDE4_PLLCLOSETXFEEDBACK_Pos (17UL) /*!< Position of PLLCLOSETXFEEDBACK field. */
#define RADIO_LOVERRIDE4_PLLCLOSETXFEEDBACK_Msk (0x1UL << RADIO_LOVERRIDE4_PLLCLOSETXFEEDBACK_Pos) /*!< Bit mask of PLLCLOSETXFEEDBACK field. */

/* Bit 16 : Override for selNewDFilt */
#define RADIO_LOVERRIDE4_SELNEWDFILT_Pos (16UL) /*!< Position of SELNEWDFILT field. */
#define RADIO_LOVERRIDE4_SELNEWDFILT_Msk (0x1UL << RADIO_LOVERRIDE4_SELNEWDFILT_Pos) /*!< Bit mask of SELNEWDFILT field. */

/* Bit 15 : Override for bsYlevAlg */
#define RADIO_LOVERRIDE4_BSYLEVALG_Pos (15UL) /*!< Position of BSYLEVALG field. */
#define RADIO_LOVERRIDE4_BSYLEVALG_Msk (0x1UL << RADIO_LOVERRIDE4_BSYLEVALG_Pos) /*!< Bit mask of BSYLEVALG field. */

/* Bits 14..12 : Override for bsStrobeDelay */
#define RADIO_LOVERRIDE4_BSSTROBEDELAY_Pos (12UL) /*!< Position of BSSTROBEDELAY field. */
#define RADIO_LOVERRIDE4_BSSTROBEDELAY_Msk (0x7UL << RADIO_LOVERRIDE4_BSSTROBEDELAY_Pos) /*!< Bit mask of BSSTROBEDELAY field. */

/* Bit 11 : Override for bsStrobeDataIn */
#define RADIO_LOVERRIDE4_BSSTROBEDATAIN_Pos (11UL) /*!< Position of BSSTROBEDATAIN field. */
#define RADIO_LOVERRIDE4_BSSTROBEDATAIN_Msk (0x1UL << RADIO_LOVERRIDE4_BSSTROBEDATAIN_Pos) /*!< Bit mask of BSSTROBEDATAIN field. */

/* Bits 10..4 : Override for bsDataPeak2Peak */
#define RADIO_LOVERRIDE4_BSDATAPEAK2PEAK_Pos (4UL) /*!< Position of BSDATAPEAK2PEAK field. */
#define RADIO_LOVERRIDE4_BSDATAPEAK2PEAK_Msk (0x7FUL << RADIO_LOVERRIDE4_BSDATAPEAK2PEAK_Pos) /*!< Bit mask of BSDATAPEAK2PEAK field. */

/* Bit 3 : Override for bsEnableThresholdAdjust */
#define RADIO_LOVERRIDE4_BSENABLETHRESHOLDADJUST_Pos (3UL) /*!< Position of BSENABLETHRESHOLDADJUST field. */
#define RADIO_LOVERRIDE4_BSENABLETHRESHOLDADJUST_Msk (0x1UL << RADIO_LOVERRIDE4_BSENABLETHRESHOLDADJUST_Pos) /*!< Bit mask of BSENABLETHRESHOLDADJUST field. */

/* Bit 2 : Override for bsDisablePreambleBlock */
#define RADIO_LOVERRIDE4_BSDISABLEPREAMBLEBLOCK_Pos (2UL) /*!< Position of BSDISABLEPREAMBLEBLOCK field. */
#define RADIO_LOVERRIDE4_BSDISABLEPREAMBLEBLOCK_Msk (0x1UL << RADIO_LOVERRIDE4_BSDISABLEPREAMBLEBLOCK_Pos) /*!< Bit mask of BSDISABLEPREAMBLEBLOCK field. */

/* Bits 1..0 : Override for bsBitLengthToleranse */
#define RADIO_LOVERRIDE4_BSBITLENGTHTOLERANSE_Pos (0UL) /*!< Position of BSBITLENGTHTOLERANSE field. */
#define RADIO_LOVERRIDE4_BSBITLENGTHTOLERANSE_Msk (0x3UL << RADIO_LOVERRIDE4_BSBITLENGTHTOLERANSE_Pos) /*!< Bit mask of BSBITLENGTHTOLERANSE field. */

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

/* Bit 0 : Write '1' to Enable interrupt for VALRDY event */
#define RNG_INTENSET_VALRDY_Pos (0UL) /*!< Position of VALRDY field. */
#define RNG_INTENSET_VALRDY_Msk (0x1UL << RNG_INTENSET_VALRDY_Pos) /*!< Bit mask of VALRDY field. */
#define RNG_INTENSET_VALRDY_Disabled (0UL) /*!< Read: Disabled */
#define RNG_INTENSET_VALRDY_Enabled (1UL) /*!< Read: Enabled */
#define RNG_INTENSET_VALRDY_Set (1UL) /*!< Enable */

/* Register: RNG_INTENCLR */
/* Description: Disable interrupt */

/* Bit 0 : Write '1' to Disable interrupt for VALRDY event */
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

/* Bit 19 : Write '1' to Enable interrupt for COMPARE[3] event */
#define RTC_INTENSET_COMPARE3_Pos (19UL) /*!< Position of COMPARE3 field. */
#define RTC_INTENSET_COMPARE3_Msk (0x1UL << RTC_INTENSET_COMPARE3_Pos) /*!< Bit mask of COMPARE3 field. */
#define RTC_INTENSET_COMPARE3_Disabled (0UL) /*!< Read: Disabled */
#define RTC_INTENSET_COMPARE3_Enabled (1UL) /*!< Read: Enabled */
#define RTC_INTENSET_COMPARE3_Set (1UL) /*!< Enable */

/* Bit 18 : Write '1' to Enable interrupt for COMPARE[2] event */
#define RTC_INTENSET_COMPARE2_Pos (18UL) /*!< Position of COMPARE2 field. */
#define RTC_INTENSET_COMPARE2_Msk (0x1UL << RTC_INTENSET_COMPARE2_Pos) /*!< Bit mask of COMPARE2 field. */
#define RTC_INTENSET_COMPARE2_Disabled (0UL) /*!< Read: Disabled */
#define RTC_INTENSET_COMPARE2_Enabled (1UL) /*!< Read: Enabled */
#define RTC_INTENSET_COMPARE2_Set (1UL) /*!< Enable */

/* Bit 17 : Write '1' to Enable interrupt for COMPARE[1] event */
#define RTC_INTENSET_COMPARE1_Pos (17UL) /*!< Position of COMPARE1 field. */
#define RTC_INTENSET_COMPARE1_Msk (0x1UL << RTC_INTENSET_COMPARE1_Pos) /*!< Bit mask of COMPARE1 field. */
#define RTC_INTENSET_COMPARE1_Disabled (0UL) /*!< Read: Disabled */
#define RTC_INTENSET_COMPARE1_Enabled (1UL) /*!< Read: Enabled */
#define RTC_INTENSET_COMPARE1_Set (1UL) /*!< Enable */

/* Bit 16 : Write '1' to Enable interrupt for COMPARE[0] event */
#define RTC_INTENSET_COMPARE0_Pos (16UL) /*!< Position of COMPARE0 field. */
#define RTC_INTENSET_COMPARE0_Msk (0x1UL << RTC_INTENSET_COMPARE0_Pos) /*!< Bit mask of COMPARE0 field. */
#define RTC_INTENSET_COMPARE0_Disabled (0UL) /*!< Read: Disabled */
#define RTC_INTENSET_COMPARE0_Enabled (1UL) /*!< Read: Enabled */
#define RTC_INTENSET_COMPARE0_Set (1UL) /*!< Enable */

/* Bit 1 : Write '1' to Enable interrupt for OVRFLW event */
#define RTC_INTENSET_OVRFLW_Pos (1UL) /*!< Position of OVRFLW field. */
#define RTC_INTENSET_OVRFLW_Msk (0x1UL << RTC_INTENSET_OVRFLW_Pos) /*!< Bit mask of OVRFLW field. */
#define RTC_INTENSET_OVRFLW_Disabled (0UL) /*!< Read: Disabled */
#define RTC_INTENSET_OVRFLW_Enabled (1UL) /*!< Read: Enabled */
#define RTC_INTENSET_OVRFLW_Set (1UL) /*!< Enable */

/* Bit 0 : Write '1' to Enable interrupt for TICK event */
#define RTC_INTENSET_TICK_Pos (0UL) /*!< Position of TICK field. */
#define RTC_INTENSET_TICK_Msk (0x1UL << RTC_INTENSET_TICK_Pos) /*!< Bit mask of TICK field. */
#define RTC_INTENSET_TICK_Disabled (0UL) /*!< Read: Disabled */
#define RTC_INTENSET_TICK_Enabled (1UL) /*!< Read: Enabled */
#define RTC_INTENSET_TICK_Set (1UL) /*!< Enable */

/* Register: RTC_INTENCLR */
/* Description: Disable interrupt */

/* Bit 19 : Write '1' to Disable interrupt for COMPARE[3] event */
#define RTC_INTENCLR_COMPARE3_Pos (19UL) /*!< Position of COMPARE3 field. */
#define RTC_INTENCLR_COMPARE3_Msk (0x1UL << RTC_INTENCLR_COMPARE3_Pos) /*!< Bit mask of COMPARE3 field. */
#define RTC_INTENCLR_COMPARE3_Disabled (0UL) /*!< Read: Disabled */
#define RTC_INTENCLR_COMPARE3_Enabled (1UL) /*!< Read: Enabled */
#define RTC_INTENCLR_COMPARE3_Clear (1UL) /*!< Disable */

/* Bit 18 : Write '1' to Disable interrupt for COMPARE[2] event */
#define RTC_INTENCLR_COMPARE2_Pos (18UL) /*!< Position of COMPARE2 field. */
#define RTC_INTENCLR_COMPARE2_Msk (0x1UL << RTC_INTENCLR_COMPARE2_Pos) /*!< Bit mask of COMPARE2 field. */
#define RTC_INTENCLR_COMPARE2_Disabled (0UL) /*!< Read: Disabled */
#define RTC_INTENCLR_COMPARE2_Enabled (1UL) /*!< Read: Enabled */
#define RTC_INTENCLR_COMPARE2_Clear (1UL) /*!< Disable */

/* Bit 17 : Write '1' to Disable interrupt for COMPARE[1] event */
#define RTC_INTENCLR_COMPARE1_Pos (17UL) /*!< Position of COMPARE1 field. */
#define RTC_INTENCLR_COMPARE1_Msk (0x1UL << RTC_INTENCLR_COMPARE1_Pos) /*!< Bit mask of COMPARE1 field. */
#define RTC_INTENCLR_COMPARE1_Disabled (0UL) /*!< Read: Disabled */
#define RTC_INTENCLR_COMPARE1_Enabled (1UL) /*!< Read: Enabled */
#define RTC_INTENCLR_COMPARE1_Clear (1UL) /*!< Disable */

/* Bit 16 : Write '1' to Disable interrupt for COMPARE[0] event */
#define RTC_INTENCLR_COMPARE0_Pos (16UL) /*!< Position of COMPARE0 field. */
#define RTC_INTENCLR_COMPARE0_Msk (0x1UL << RTC_INTENCLR_COMPARE0_Pos) /*!< Bit mask of COMPARE0 field. */
#define RTC_INTENCLR_COMPARE0_Disabled (0UL) /*!< Read: Disabled */
#define RTC_INTENCLR_COMPARE0_Enabled (1UL) /*!< Read: Enabled */
#define RTC_INTENCLR_COMPARE0_Clear (1UL) /*!< Disable */

/* Bit 1 : Write '1' to Disable interrupt for OVRFLW event */
#define RTC_INTENCLR_OVRFLW_Pos (1UL) /*!< Position of OVRFLW field. */
#define RTC_INTENCLR_OVRFLW_Msk (0x1UL << RTC_INTENCLR_OVRFLW_Pos) /*!< Bit mask of OVRFLW field. */
#define RTC_INTENCLR_OVRFLW_Disabled (0UL) /*!< Read: Disabled */
#define RTC_INTENCLR_OVRFLW_Enabled (1UL) /*!< Read: Enabled */
#define RTC_INTENCLR_OVRFLW_Clear (1UL) /*!< Disable */

/* Bit 0 : Write '1' to Disable interrupt for TICK event */
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

/* Bit 19 : Write '1' to Enable event routing for COMPARE[3] event */
#define RTC_EVTENSET_COMPARE3_Pos (19UL) /*!< Position of COMPARE3 field. */
#define RTC_EVTENSET_COMPARE3_Msk (0x1UL << RTC_EVTENSET_COMPARE3_Pos) /*!< Bit mask of COMPARE3 field. */
#define RTC_EVTENSET_COMPARE3_Disabled (0UL) /*!< Read: Disabled */
#define RTC_EVTENSET_COMPARE3_Enabled (1UL) /*!< Read: Enabled */
#define RTC_EVTENSET_COMPARE3_Set (1UL) /*!< Enable */

/* Bit 18 : Write '1' to Enable event routing for COMPARE[2] event */
#define RTC_EVTENSET_COMPARE2_Pos (18UL) /*!< Position of COMPARE2 field. */
#define RTC_EVTENSET_COMPARE2_Msk (0x1UL << RTC_EVTENSET_COMPARE2_Pos) /*!< Bit mask of COMPARE2 field. */
#define RTC_EVTENSET_COMPARE2_Disabled (0UL) /*!< Read: Disabled */
#define RTC_EVTENSET_COMPARE2_Enabled (1UL) /*!< Read: Enabled */
#define RTC_EVTENSET_COMPARE2_Set (1UL) /*!< Enable */

/* Bit 17 : Write '1' to Enable event routing for COMPARE[1] event */
#define RTC_EVTENSET_COMPARE1_Pos (17UL) /*!< Position of COMPARE1 field. */
#define RTC_EVTENSET_COMPARE1_Msk (0x1UL << RTC_EVTENSET_COMPARE1_Pos) /*!< Bit mask of COMPARE1 field. */
#define RTC_EVTENSET_COMPARE1_Disabled (0UL) /*!< Read: Disabled */
#define RTC_EVTENSET_COMPARE1_Enabled (1UL) /*!< Read: Enabled */
#define RTC_EVTENSET_COMPARE1_Set (1UL) /*!< Enable */

/* Bit 16 : Write '1' to Enable event routing for COMPARE[0] event */
#define RTC_EVTENSET_COMPARE0_Pos (16UL) /*!< Position of COMPARE0 field. */
#define RTC_EVTENSET_COMPARE0_Msk (0x1UL << RTC_EVTENSET_COMPARE0_Pos) /*!< Bit mask of COMPARE0 field. */
#define RTC_EVTENSET_COMPARE0_Disabled (0UL) /*!< Read: Disabled */
#define RTC_EVTENSET_COMPARE0_Enabled (1UL) /*!< Read: Enabled */
#define RTC_EVTENSET_COMPARE0_Set (1UL) /*!< Enable */

/* Bit 1 : Write '1' to Enable event routing for OVRFLW event */
#define RTC_EVTENSET_OVRFLW_Pos (1UL) /*!< Position of OVRFLW field. */
#define RTC_EVTENSET_OVRFLW_Msk (0x1UL << RTC_EVTENSET_OVRFLW_Pos) /*!< Bit mask of OVRFLW field. */
#define RTC_EVTENSET_OVRFLW_Disabled (0UL) /*!< Read: Disabled */
#define RTC_EVTENSET_OVRFLW_Enabled (1UL) /*!< Read: Enabled */
#define RTC_EVTENSET_OVRFLW_Set (1UL) /*!< Enable */

/* Bit 0 : Write '1' to Enable event routing for TICK event */
#define RTC_EVTENSET_TICK_Pos (0UL) /*!< Position of TICK field. */
#define RTC_EVTENSET_TICK_Msk (0x1UL << RTC_EVTENSET_TICK_Pos) /*!< Bit mask of TICK field. */
#define RTC_EVTENSET_TICK_Disabled (0UL) /*!< Read: Disabled */
#define RTC_EVTENSET_TICK_Enabled (1UL) /*!< Read: Enabled */
#define RTC_EVTENSET_TICK_Set (1UL) /*!< Enable */

/* Register: RTC_EVTENCLR */
/* Description: Disable event routing */

/* Bit 19 : Write '1' to Disable event routing for COMPARE[3] event */
#define RTC_EVTENCLR_COMPARE3_Pos (19UL) /*!< Position of COMPARE3 field. */
#define RTC_EVTENCLR_COMPARE3_Msk (0x1UL << RTC_EVTENCLR_COMPARE3_Pos) /*!< Bit mask of COMPARE3 field. */
#define RTC_EVTENCLR_COMPARE3_Disabled (0UL) /*!< Read: Disabled */
#define RTC_EVTENCLR_COMPARE3_Enabled (1UL) /*!< Read: Enabled */
#define RTC_EVTENCLR_COMPARE3_Clear (1UL) /*!< Disable */

/* Bit 18 : Write '1' to Disable event routing for COMPARE[2] event */
#define RTC_EVTENCLR_COMPARE2_Pos (18UL) /*!< Position of COMPARE2 field. */
#define RTC_EVTENCLR_COMPARE2_Msk (0x1UL << RTC_EVTENCLR_COMPARE2_Pos) /*!< Bit mask of COMPARE2 field. */
#define RTC_EVTENCLR_COMPARE2_Disabled (0UL) /*!< Read: Disabled */
#define RTC_EVTENCLR_COMPARE2_Enabled (1UL) /*!< Read: Enabled */
#define RTC_EVTENCLR_COMPARE2_Clear (1UL) /*!< Disable */

/* Bit 17 : Write '1' to Disable event routing for COMPARE[1] event */
#define RTC_EVTENCLR_COMPARE1_Pos (17UL) /*!< Position of COMPARE1 field. */
#define RTC_EVTENCLR_COMPARE1_Msk (0x1UL << RTC_EVTENCLR_COMPARE1_Pos) /*!< Bit mask of COMPARE1 field. */
#define RTC_EVTENCLR_COMPARE1_Disabled (0UL) /*!< Read: Disabled */
#define RTC_EVTENCLR_COMPARE1_Enabled (1UL) /*!< Read: Enabled */
#define RTC_EVTENCLR_COMPARE1_Clear (1UL) /*!< Disable */

/* Bit 16 : Write '1' to Disable event routing for COMPARE[0] event */
#define RTC_EVTENCLR_COMPARE0_Pos (16UL) /*!< Position of COMPARE0 field. */
#define RTC_EVTENCLR_COMPARE0_Msk (0x1UL << RTC_EVTENCLR_COMPARE0_Pos) /*!< Bit mask of COMPARE0 field. */
#define RTC_EVTENCLR_COMPARE0_Disabled (0UL) /*!< Read: Disabled */
#define RTC_EVTENCLR_COMPARE0_Enabled (1UL) /*!< Read: Enabled */
#define RTC_EVTENCLR_COMPARE0_Clear (1UL) /*!< Disable */

/* Bit 1 : Write '1' to Disable event routing for OVRFLW event */
#define RTC_EVTENCLR_OVRFLW_Pos (1UL) /*!< Position of OVRFLW field. */
#define RTC_EVTENCLR_OVRFLW_Msk (0x1UL << RTC_EVTENCLR_OVRFLW_Pos) /*!< Bit mask of OVRFLW field. */
#define RTC_EVTENCLR_OVRFLW_Disabled (0UL) /*!< Read: Disabled */
#define RTC_EVTENCLR_OVRFLW_Enabled (1UL) /*!< Read: Enabled */
#define RTC_EVTENCLR_OVRFLW_Clear (1UL) /*!< Disable */

/* Bit 0 : Write '1' to Disable event routing for TICK event */
#define RTC_EVTENCLR_TICK_Pos (0UL) /*!< Position of TICK field. */
#define RTC_EVTENCLR_TICK_Msk (0x1UL << RTC_EVTENCLR_TICK_Pos) /*!< Bit mask of TICK field. */
#define RTC_EVTENCLR_TICK_Disabled (0UL) /*!< Read: Disabled */
#define RTC_EVTENCLR_TICK_Enabled (1UL) /*!< Read: Enabled */
#define RTC_EVTENCLR_TICK_Clear (1UL) /*!< Disable */

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
/* Description: Description collection[0]:  Compare register 0 */

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


/* Peripheral: SPI */
/* Description: Serial Peripheral Interface 0 */

/* Register: SPI_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 2 : Enable or disable interrupt for READY event */
#define SPI_INTEN_READY_Pos (2UL) /*!< Position of READY field. */
#define SPI_INTEN_READY_Msk (0x1UL << SPI_INTEN_READY_Pos) /*!< Bit mask of READY field. */
#define SPI_INTEN_READY_Disabled (0UL) /*!< Disable */
#define SPI_INTEN_READY_Enabled (1UL) /*!< Enable */

/* Register: SPI_INTENSET */
/* Description: Enable interrupt */

/* Bit 2 : Write '1' to Enable interrupt for READY event */
#define SPI_INTENSET_READY_Pos (2UL) /*!< Position of READY field. */
#define SPI_INTENSET_READY_Msk (0x1UL << SPI_INTENSET_READY_Pos) /*!< Bit mask of READY field. */
#define SPI_INTENSET_READY_Disabled (0UL) /*!< Read: Disabled */
#define SPI_INTENSET_READY_Enabled (1UL) /*!< Read: Enabled */
#define SPI_INTENSET_READY_Set (1UL) /*!< Enable */

/* Register: SPI_INTENCLR */
/* Description: Disable interrupt */

/* Bit 2 : Write '1' to Disable interrupt for READY event */
#define SPI_INTENCLR_READY_Pos (2UL) /*!< Position of READY field. */
#define SPI_INTENCLR_READY_Msk (0x1UL << SPI_INTENCLR_READY_Pos) /*!< Bit mask of READY field. */
#define SPI_INTENCLR_READY_Disabled (0UL) /*!< Read: Disabled */
#define SPI_INTENCLR_READY_Enabled (1UL) /*!< Read: Enabled */
#define SPI_INTENCLR_READY_Clear (1UL) /*!< Disable */

/* Register: SPI_ENABLE */
/* Description: Enable SPI */

/* Bits 2..0 : Enable or disable SPI */
#define SPI_ENABLE_ENABLE_Pos (0UL) /*!< Position of ENABLE field. */
#define SPI_ENABLE_ENABLE_Msk (0x7UL << SPI_ENABLE_ENABLE_Pos) /*!< Bit mask of ENABLE field. */
#define SPI_ENABLE_ENABLE_Disabled (0UL) /*!< Disable SPI */
#define SPI_ENABLE_ENABLE_Enabled (1UL) /*!< Enable SPI */

/* Register: SPI_PSELSCK */
/* Description: Pin select for SCK */

/* Bits 31..0 : Pin number configuration for SPI SCK signal */
#define SPI_PSELSCK_PSELSCK_Pos (0UL) /*!< Position of PSELSCK field. */
#define SPI_PSELSCK_PSELSCK_Msk (0xFFFFFFFFUL << SPI_PSELSCK_PSELSCK_Pos) /*!< Bit mask of PSELSCK field. */
#define SPI_PSELSCK_PSELSCK_Disconnected (0xFFFFFFFFUL) /*!< Disconnect */

/* Register: SPI_PSELMOSI */
/* Description: Pin select for MOSI */

/* Bits 31..0 : Pin number configuration for SPI MOSI signal */
#define SPI_PSELMOSI_PSELMOSI_Pos (0UL) /*!< Position of PSELMOSI field. */
#define SPI_PSELMOSI_PSELMOSI_Msk (0xFFFFFFFFUL << SPI_PSELMOSI_PSELMOSI_Pos) /*!< Bit mask of PSELMOSI field. */
#define SPI_PSELMOSI_PSELMOSI_Disconnected (0xFFFFFFFFUL) /*!< Disconnect */

/* Register: SPI_PSELMISO */
/* Description: Pin select for MISO */

/* Bits 31..0 : Pin number configuration for SPI MISO signal */
#define SPI_PSELMISO_PSELMISO_Pos (0UL) /*!< Position of PSELMISO field. */
#define SPI_PSELMISO_PSELMISO_Msk (0xFFFFFFFFUL << SPI_PSELMISO_PSELMISO_Pos) /*!< Bit mask of PSELMISO field. */
#define SPI_PSELMISO_PSELMISO_Disconnected (0xFFFFFFFFUL) /*!< Disconnect */

/* Register: SPI_RXD */
/* Description: RXD register */

/* Bits 7..0 : RX data received. Double buffered */
#define SPI_RXD_RXD_Pos (0UL) /*!< Position of RXD field. */
#define SPI_RXD_RXD_Msk (0xFFUL << SPI_RXD_RXD_Pos) /*!< Bit mask of RXD field. */

/* Register: SPI_TXD */
/* Description: TXD register */

/* Bits 7..0 : TX data to send. Double buffered */
#define SPI_TXD_TXD_Pos (0UL) /*!< Position of TXD field. */
#define SPI_TXD_TXD_Msk (0xFFUL << SPI_TXD_TXD_Pos) /*!< Bit mask of TXD field. */

/* Register: SPI_FREQUENCY */
/* Description: SPI frequency */

/* Bits 31..0 : SPI master data rate */
#define SPI_FREQUENCY_FREQUENCY_Pos (0UL) /*!< Position of FREQUENCY field. */
#define SPI_FREQUENCY_FREQUENCY_Msk (0xFFFFFFFFUL << SPI_FREQUENCY_FREQUENCY_Pos) /*!< Bit mask of FREQUENCY field. */
#define SPI_FREQUENCY_FREQUENCY_K125 (0x02000000UL) /*!< 125 kbps */
#define SPI_FREQUENCY_FREQUENCY_K250 (0x04000000UL) /*!< 250 kbps */
#define SPI_FREQUENCY_FREQUENCY_K500 (0x08000000UL) /*!< 500 kbps */
#define SPI_FREQUENCY_FREQUENCY_M1 (0x10000000UL) /*!< 1 Mbps */
#define SPI_FREQUENCY_FREQUENCY_M2 (0x20000000UL) /*!< 2 Mbps */
#define SPI_FREQUENCY_FREQUENCY_M4 (0x40000000UL) /*!< 4 Mbps */
#define SPI_FREQUENCY_FREQUENCY_M8 (0x80000000UL) /*!< 8 Mbps */

/* Register: SPI_CONFIG */
/* Description: Configuration register */

/* Bit 2 : Serial clock (SCK) polarity */
#define SPI_CONFIG_CPOL_Pos (2UL) /*!< Position of CPOL field. */
#define SPI_CONFIG_CPOL_Msk (0x1UL << SPI_CONFIG_CPOL_Pos) /*!< Bit mask of CPOL field. */
#define SPI_CONFIG_CPOL_ActiveHigh (0UL) /*!< Active high */
#define SPI_CONFIG_CPOL_ActiveLow (1UL) /*!< Active low */

/* Bit 1 : Serial clock (SCK) phase */
#define SPI_CONFIG_CPHA_Pos (1UL) /*!< Position of CPHA field. */
#define SPI_CONFIG_CPHA_Msk (0x1UL << SPI_CONFIG_CPHA_Pos) /*!< Bit mask of CPHA field. */
#define SPI_CONFIG_CPHA_Leading (0UL) /*!< Sample on leading edge of clock, shift serial data on trailing edge */
#define SPI_CONFIG_CPHA_Trailing (1UL) /*!< Sample on trailing edge of clock, shift serial data on leading edge */

/* Bit 0 : Bit order */
#define SPI_CONFIG_ORDER_Pos (0UL) /*!< Position of ORDER field. */
#define SPI_CONFIG_ORDER_Msk (0x1UL << SPI_CONFIG_ORDER_Pos) /*!< Bit mask of ORDER field. */
#define SPI_CONFIG_ORDER_MsbFirst (0UL) /*!< Most significant bit shifted out first */
#define SPI_CONFIG_ORDER_LsbFirst (1UL) /*!< Least significant bit shifted out first */

/* Register: SPI_POWER */
/* Description: Peripheral power control */

/* Bit 0 : Peripheral power control. The peripheral and its registers will be reset to its initial state by switching the peripheral off and then back on again. */
#define SPI_POWER_POWER_Pos (0UL) /*!< Position of POWER field. */
#define SPI_POWER_POWER_Msk (0x1UL << SPI_POWER_POWER_Pos) /*!< Bit mask of POWER field. */
#define SPI_POWER_POWER_Disabled (0UL) /*!< Peripheral is powered off */
#define SPI_POWER_POWER_Enabled (1UL) /*!< Peripheral is powered on */


/* Peripheral: SPIM */
/* Description: Serial Peripheral Interface Master with EasyDMA 1 */

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

/* Bit 19 : Write '1' to Enable interrupt for STARTED event */
#define SPIM_INTENSET_STARTED_Pos (19UL) /*!< Position of STARTED field. */
#define SPIM_INTENSET_STARTED_Msk (0x1UL << SPIM_INTENSET_STARTED_Pos) /*!< Bit mask of STARTED field. */
#define SPIM_INTENSET_STARTED_Disabled (0UL) /*!< Read: Disabled */
#define SPIM_INTENSET_STARTED_Enabled (1UL) /*!< Read: Enabled */
#define SPIM_INTENSET_STARTED_Set (1UL) /*!< Enable */

/* Bit 8 : Write '1' to Enable interrupt for ENDTX event */
#define SPIM_INTENSET_ENDTX_Pos (8UL) /*!< Position of ENDTX field. */
#define SPIM_INTENSET_ENDTX_Msk (0x1UL << SPIM_INTENSET_ENDTX_Pos) /*!< Bit mask of ENDTX field. */
#define SPIM_INTENSET_ENDTX_Disabled (0UL) /*!< Read: Disabled */
#define SPIM_INTENSET_ENDTX_Enabled (1UL) /*!< Read: Enabled */
#define SPIM_INTENSET_ENDTX_Set (1UL) /*!< Enable */

/* Bit 4 : Write '1' to Enable interrupt for ENDRX event */
#define SPIM_INTENSET_ENDRX_Pos (4UL) /*!< Position of ENDRX field. */
#define SPIM_INTENSET_ENDRX_Msk (0x1UL << SPIM_INTENSET_ENDRX_Pos) /*!< Bit mask of ENDRX field. */
#define SPIM_INTENSET_ENDRX_Disabled (0UL) /*!< Read: Disabled */
#define SPIM_INTENSET_ENDRX_Enabled (1UL) /*!< Read: Enabled */
#define SPIM_INTENSET_ENDRX_Set (1UL) /*!< Enable */

/* Bit 1 : Write '1' to Enable interrupt for STOPPED event */
#define SPIM_INTENSET_STOPPED_Pos (1UL) /*!< Position of STOPPED field. */
#define SPIM_INTENSET_STOPPED_Msk (0x1UL << SPIM_INTENSET_STOPPED_Pos) /*!< Bit mask of STOPPED field. */
#define SPIM_INTENSET_STOPPED_Disabled (0UL) /*!< Read: Disabled */
#define SPIM_INTENSET_STOPPED_Enabled (1UL) /*!< Read: Enabled */
#define SPIM_INTENSET_STOPPED_Set (1UL) /*!< Enable */

/* Register: SPIM_INTENCLR */
/* Description: Disable interrupt */

/* Bit 19 : Write '1' to Disable interrupt for STARTED event */
#define SPIM_INTENCLR_STARTED_Pos (19UL) /*!< Position of STARTED field. */
#define SPIM_INTENCLR_STARTED_Msk (0x1UL << SPIM_INTENCLR_STARTED_Pos) /*!< Bit mask of STARTED field. */
#define SPIM_INTENCLR_STARTED_Disabled (0UL) /*!< Read: Disabled */
#define SPIM_INTENCLR_STARTED_Enabled (1UL) /*!< Read: Enabled */
#define SPIM_INTENCLR_STARTED_Clear (1UL) /*!< Disable */

/* Bit 8 : Write '1' to Disable interrupt for ENDTX event */
#define SPIM_INTENCLR_ENDTX_Pos (8UL) /*!< Position of ENDTX field. */
#define SPIM_INTENCLR_ENDTX_Msk (0x1UL << SPIM_INTENCLR_ENDTX_Pos) /*!< Bit mask of ENDTX field. */
#define SPIM_INTENCLR_ENDTX_Disabled (0UL) /*!< Read: Disabled */
#define SPIM_INTENCLR_ENDTX_Enabled (1UL) /*!< Read: Enabled */
#define SPIM_INTENCLR_ENDTX_Clear (1UL) /*!< Disable */

/* Bit 4 : Write '1' to Disable interrupt for ENDRX event */
#define SPIM_INTENCLR_ENDRX_Pos (4UL) /*!< Position of ENDRX field. */
#define SPIM_INTENCLR_ENDRX_Msk (0x1UL << SPIM_INTENCLR_ENDRX_Pos) /*!< Bit mask of ENDRX field. */
#define SPIM_INTENCLR_ENDRX_Disabled (0UL) /*!< Read: Disabled */
#define SPIM_INTENCLR_ENDRX_Enabled (1UL) /*!< Read: Enabled */
#define SPIM_INTENCLR_ENDRX_Clear (1UL) /*!< Disable */

/* Bit 1 : Write '1' to Disable interrupt for STOPPED event */
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

/* Bits 7..0 : RX data received. Double buffered. */
#define SPIM_RXDDATA_RXD_Pos (0UL) /*!< Position of RXD field. */
#define SPIM_RXDDATA_RXD_Msk (0xFFUL << SPIM_RXDDATA_RXD_Pos) /*!< Bit mask of RXD field. */

/* Register: SPIM_TXDDATA */
/* Description: TXD register */

/* Bits 7..0 : TX data to send. Double buffered. */
#define SPIM_TXDDATA_TXD_Pos (0UL) /*!< Position of TXD field. */
#define SPIM_TXDDATA_TXD_Msk (0xFFUL << SPIM_TXDDATA_TXD_Pos) /*!< Bit mask of TXD field. */

/* Register: SPIM_FREQUENCY */
/* Description: SPI frequency */

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

/* Bits 7..0 : Maximum number of bytes in receive buffer */
#define SPIM_RXD_MAXCNT_MAXCNT_Pos (0UL) /*!< Position of MAXCNT field. */
#define SPIM_RXD_MAXCNT_MAXCNT_Msk (0xFFUL << SPIM_RXD_MAXCNT_MAXCNT_Pos) /*!< Bit mask of MAXCNT field. */

/* Register: SPIM_RXD_AMOUNT */
/* Description: Number of bytes transferred in the last transaction */

/* Bits 7..0 : Number of bytes transferred in the last transaction */
#define SPIM_RXD_AMOUNT_AMOUNT_Pos (0UL) /*!< Position of AMOUNT field. */
#define SPIM_RXD_AMOUNT_AMOUNT_Msk (0xFFUL << SPIM_RXD_AMOUNT_AMOUNT_Pos) /*!< Bit mask of AMOUNT field. */

/* Register: SPIM_TXD_PTR */
/* Description: Data pointer */

/* Bits 31..0 : Data pointer */
#define SPIM_TXD_PTR_PTR_Pos (0UL) /*!< Position of PTR field. */
#define SPIM_TXD_PTR_PTR_Msk (0xFFFFFFFFUL << SPIM_TXD_PTR_PTR_Pos) /*!< Bit mask of PTR field. */

/* Register: SPIM_TXD_MAXCNT */
/* Description: Maximum number of bytes in transmit buffer */

/* Bits 7..0 : Maximum number of bytes in transmit buffer */
#define SPIM_TXD_MAXCNT_MAXCNT_Pos (0UL) /*!< Position of MAXCNT field. */
#define SPIM_TXD_MAXCNT_MAXCNT_Msk (0xFFUL << SPIM_TXD_MAXCNT_MAXCNT_Pos) /*!< Bit mask of MAXCNT field. */

/* Register: SPIM_TXD_AMOUNT */
/* Description: Number of bytes transferred in the last transaction */

/* Bits 7..0 : Number of bytes transferred in the last transaction */
#define SPIM_TXD_AMOUNT_AMOUNT_Pos (0UL) /*!< Position of AMOUNT field. */
#define SPIM_TXD_AMOUNT_AMOUNT_Msk (0xFFUL << SPIM_TXD_AMOUNT_AMOUNT_Pos) /*!< Bit mask of AMOUNT field. */

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
/* Description: SPI Slave 1 */

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

/* Bit 10 : Write '1' to Enable interrupt for ACQUIRED event */
#define SPIS_INTENSET_ACQUIRED_Pos (10UL) /*!< Position of ACQUIRED field. */
#define SPIS_INTENSET_ACQUIRED_Msk (0x1UL << SPIS_INTENSET_ACQUIRED_Pos) /*!< Bit mask of ACQUIRED field. */
#define SPIS_INTENSET_ACQUIRED_Disabled (0UL) /*!< Read: Disabled */
#define SPIS_INTENSET_ACQUIRED_Enabled (1UL) /*!< Read: Enabled */
#define SPIS_INTENSET_ACQUIRED_Set (1UL) /*!< Enable */

/* Bit 4 : Write '1' to Enable interrupt for ENDRX event */
#define SPIS_INTENSET_ENDRX_Pos (4UL) /*!< Position of ENDRX field. */
#define SPIS_INTENSET_ENDRX_Msk (0x1UL << SPIS_INTENSET_ENDRX_Pos) /*!< Bit mask of ENDRX field. */
#define SPIS_INTENSET_ENDRX_Disabled (0UL) /*!< Read: Disabled */
#define SPIS_INTENSET_ENDRX_Enabled (1UL) /*!< Read: Enabled */
#define SPIS_INTENSET_ENDRX_Set (1UL) /*!< Enable */

/* Bit 1 : Write '1' to Enable interrupt for END event */
#define SPIS_INTENSET_END_Pos (1UL) /*!< Position of END field. */
#define SPIS_INTENSET_END_Msk (0x1UL << SPIS_INTENSET_END_Pos) /*!< Bit mask of END field. */
#define SPIS_INTENSET_END_Disabled (0UL) /*!< Read: Disabled */
#define SPIS_INTENSET_END_Enabled (1UL) /*!< Read: Enabled */
#define SPIS_INTENSET_END_Set (1UL) /*!< Enable */

/* Register: SPIS_INTENCLR */
/* Description: Disable interrupt */

/* Bit 10 : Write '1' to Disable interrupt for ACQUIRED event */
#define SPIS_INTENCLR_ACQUIRED_Pos (10UL) /*!< Position of ACQUIRED field. */
#define SPIS_INTENCLR_ACQUIRED_Msk (0x1UL << SPIS_INTENCLR_ACQUIRED_Pos) /*!< Bit mask of ACQUIRED field. */
#define SPIS_INTENCLR_ACQUIRED_Disabled (0UL) /*!< Read: Disabled */
#define SPIS_INTENCLR_ACQUIRED_Enabled (1UL) /*!< Read: Enabled */
#define SPIS_INTENCLR_ACQUIRED_Clear (1UL) /*!< Disable */

/* Bit 4 : Write '1' to Disable interrupt for ENDRX event */
#define SPIS_INTENCLR_ENDRX_Pos (4UL) /*!< Position of ENDRX field. */
#define SPIS_INTENCLR_ENDRX_Msk (0x1UL << SPIS_INTENCLR_ENDRX_Pos) /*!< Bit mask of ENDRX field. */
#define SPIS_INTENCLR_ENDRX_Disabled (0UL) /*!< Read: Disabled */
#define SPIS_INTENCLR_ENDRX_Enabled (1UL) /*!< Read: Enabled */
#define SPIS_INTENCLR_ENDRX_Clear (1UL) /*!< Disable */

/* Bit 1 : Write '1' to Disable interrupt for END event */
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

/* Bits 2..0 : Enable or disable SPI slave */
#define SPIS_ENABLE_ENABLE_Pos (0UL) /*!< Position of ENABLE field. */
#define SPIS_ENABLE_ENABLE_Msk (0x7UL << SPIS_ENABLE_ENABLE_Pos) /*!< Bit mask of ENABLE field. */
#define SPIS_ENABLE_ENABLE_Disabled (0UL) /*!< Disable SPI slave */
#define SPIS_ENABLE_ENABLE_Enabled (2UL) /*!< Enable SPI slave */

/* Register: SPIS_PSELSCK */
/* Description: Pin select for SCK */

/* Bits 31..0 : Pin number configuration for SPI SCK signal */
#define SPIS_PSELSCK_PSELSCK_Pos (0UL) /*!< Position of PSELSCK field. */
#define SPIS_PSELSCK_PSELSCK_Msk (0xFFFFFFFFUL << SPIS_PSELSCK_PSELSCK_Pos) /*!< Bit mask of PSELSCK field. */
#define SPIS_PSELSCK_PSELSCK_Disconnected (0xFFFFFFFFUL) /*!< Disconnect */

/* Register: SPIS_PSELMISO */
/* Description: Pin select for MISO */

/* Bits 31..0 : Pin number configuration for SPI MISO signal */
#define SPIS_PSELMISO_PSELMISO_Pos (0UL) /*!< Position of PSELMISO field. */
#define SPIS_PSELMISO_PSELMISO_Msk (0xFFFFFFFFUL << SPIS_PSELMISO_PSELMISO_Pos) /*!< Bit mask of PSELMISO field. */
#define SPIS_PSELMISO_PSELMISO_Disconnected (0xFFFFFFFFUL) /*!< Disconnect */

/* Register: SPIS_PSELMOSI */
/* Description: Pin select for MOSI */

/* Bits 31..0 : Pin number configuration for SPI MOSI signal */
#define SPIS_PSELMOSI_PSELMOSI_Pos (0UL) /*!< Position of PSELMOSI field. */
#define SPIS_PSELMOSI_PSELMOSI_Msk (0xFFFFFFFFUL << SPIS_PSELMOSI_PSELMOSI_Pos) /*!< Bit mask of PSELMOSI field. */
#define SPIS_PSELMOSI_PSELMOSI_Disconnected (0xFFFFFFFFUL) /*!< Disconnect */

/* Register: SPIS_PSELCSN */
/* Description: Pin select for CSN */

/* Bits 31..0 : Pin number configuration for SPI CSN signal */
#define SPIS_PSELCSN_PSELCSN_Pos (0UL) /*!< Position of PSELCSN field. */
#define SPIS_PSELCSN_PSELCSN_Msk (0xFFFFFFFFUL << SPIS_PSELCSN_PSELCSN_Pos) /*!< Bit mask of PSELCSN field. */
#define SPIS_PSELCSN_PSELCSN_Disconnected (0xFFFFFFFFUL) /*!< Disconnect */

/* Register: SPIS_RXDPTR */
/* Description: RXD data pointer */

/* Bits 31..0 : RXD data pointer */
#define SPIS_RXDPTR_RXDPTR_Pos (0UL) /*!< Position of RXDPTR field. */
#define SPIS_RXDPTR_RXDPTR_Msk (0xFFFFFFFFUL << SPIS_RXDPTR_RXDPTR_Pos) /*!< Bit mask of RXDPTR field. */

/* Register: SPIS_MAXRX */
/* Description: Maximum number of bytes in receive buffer */

/* Bits 7..0 : Maximum number of bytes in receive buffer */
#define SPIS_MAXRX_MAXRX_Pos (0UL) /*!< Position of MAXRX field. */
#define SPIS_MAXRX_MAXRX_Msk (0xFFUL << SPIS_MAXRX_MAXRX_Pos) /*!< Bit mask of MAXRX field. */

/* Register: SPIS_AMOUNTRX */
/* Description: Number of bytes received in last granted transaction */

/* Bits 7..0 : Number of bytes received in the last granted transaction */
#define SPIS_AMOUNTRX_AMOUNTRX_Pos (0UL) /*!< Position of AMOUNTRX field. */
#define SPIS_AMOUNTRX_AMOUNTRX_Msk (0xFFUL << SPIS_AMOUNTRX_AMOUNTRX_Pos) /*!< Bit mask of AMOUNTRX field. */

/* Register: SPIS_TXDPTR */
/* Description: TXD data pointer */

/* Bits 31..0 : TXD data pointer */
#define SPIS_TXDPTR_TXDPTR_Pos (0UL) /*!< Position of TXDPTR field. */
#define SPIS_TXDPTR_TXDPTR_Msk (0xFFFFFFFFUL << SPIS_TXDPTR_TXDPTR_Pos) /*!< Bit mask of TXDPTR field. */

/* Register: SPIS_MAXTX */
/* Description: Maximum number of bytes in transmit buffer */

/* Bits 7..0 : Maximum number of bytes in transmit buffer */
#define SPIS_MAXTX_MAXTX_Pos (0UL) /*!< Position of MAXTX field. */
#define SPIS_MAXTX_MAXTX_Msk (0xFFUL << SPIS_MAXTX_MAXTX_Pos) /*!< Bit mask of MAXTX field. */

/* Register: SPIS_AMOUNTTX */
/* Description: Number of bytes transmitted in last granted transaction */

/* Bits 7..0 : Number of bytes transmitted in last granted transaction */
#define SPIS_AMOUNTTX_AMOUNTTX_Pos (0UL) /*!< Position of AMOUNTTX field. */
#define SPIS_AMOUNTTX_AMOUNTTX_Msk (0xFFUL << SPIS_AMOUNTTX_AMOUNTTX_Pos) /*!< Bit mask of AMOUNTTX field. */

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

/* Register: TEMP_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 0 : Enable or disable interrupt for DATARDY event */
#define TEMP_INTEN_DATARDY_Pos (0UL) /*!< Position of DATARDY field. */
#define TEMP_INTEN_DATARDY_Msk (0x1UL << TEMP_INTEN_DATARDY_Pos) /*!< Bit mask of DATARDY field. */
#define TEMP_INTEN_DATARDY_Disabled (0UL) /*!< Disable */
#define TEMP_INTEN_DATARDY_Enabled (1UL) /*!< Enable */

/* Register: TEMP_INTENSET */
/* Description: Enable interrupt */

/* Bit 0 : Write '1' to Enable interrupt for DATARDY event */
#define TEMP_INTENSET_DATARDY_Pos (0UL) /*!< Position of DATARDY field. */
#define TEMP_INTENSET_DATARDY_Msk (0x1UL << TEMP_INTENSET_DATARDY_Pos) /*!< Bit mask of DATARDY field. */
#define TEMP_INTENSET_DATARDY_Disabled (0UL) /*!< Read: Disabled */
#define TEMP_INTENSET_DATARDY_Enabled (1UL) /*!< Read: Enabled */
#define TEMP_INTENSET_DATARDY_Set (1UL) /*!< Enable */

/* Register: TEMP_INTENCLR */
/* Description: Disable interrupt */

/* Bit 0 : Write '1' to Disable interrupt for DATARDY event */
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

/* Register: TEMP_RAW */
/* Description: Raw data from temperature sensor */

/* Bits 11..0 : Raw data from temperature sensor */
#define TEMP_RAW_RAW_Pos (0UL) /*!< Position of RAW field. */
#define TEMP_RAW_RAW_Msk (0xFFFUL << TEMP_RAW_RAW_Pos) /*!< Bit mask of RAW field. */

/* Register: TEMP_POWER */
/* Description: Peripheral power control */

/* Bit 0 : Peripheral power control. The peripheral and its registers will be reset to its initial state by switching the peripheral off and then back on again. */
#define TEMP_POWER_POWER_Pos (0UL) /*!< Position of POWER field. */
#define TEMP_POWER_POWER_Msk (0x1UL << TEMP_POWER_POWER_Pos) /*!< Bit mask of POWER field. */
#define TEMP_POWER_POWER_Disabled (0UL) /*!< Peripheral is powered off */
#define TEMP_POWER_POWER_Enabled (1UL) /*!< Peripheral is powered on */


/* Peripheral: TIMER */
/* Description: Timer/Counter 0 */

/* Register: TIMER_SHORTS */
/* Description: Shortcut register */

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

/* Bit 19 : Write '1' to Enable interrupt for COMPARE[3] event */
#define TIMER_INTENSET_COMPARE3_Pos (19UL) /*!< Position of COMPARE3 field. */
#define TIMER_INTENSET_COMPARE3_Msk (0x1UL << TIMER_INTENSET_COMPARE3_Pos) /*!< Bit mask of COMPARE3 field. */
#define TIMER_INTENSET_COMPARE3_Disabled (0UL) /*!< Read: Disabled */
#define TIMER_INTENSET_COMPARE3_Enabled (1UL) /*!< Read: Enabled */
#define TIMER_INTENSET_COMPARE3_Set (1UL) /*!< Enable */

/* Bit 18 : Write '1' to Enable interrupt for COMPARE[2] event */
#define TIMER_INTENSET_COMPARE2_Pos (18UL) /*!< Position of COMPARE2 field. */
#define TIMER_INTENSET_COMPARE2_Msk (0x1UL << TIMER_INTENSET_COMPARE2_Pos) /*!< Bit mask of COMPARE2 field. */
#define TIMER_INTENSET_COMPARE2_Disabled (0UL) /*!< Read: Disabled */
#define TIMER_INTENSET_COMPARE2_Enabled (1UL) /*!< Read: Enabled */
#define TIMER_INTENSET_COMPARE2_Set (1UL) /*!< Enable */

/* Bit 17 : Write '1' to Enable interrupt for COMPARE[1] event */
#define TIMER_INTENSET_COMPARE1_Pos (17UL) /*!< Position of COMPARE1 field. */
#define TIMER_INTENSET_COMPARE1_Msk (0x1UL << TIMER_INTENSET_COMPARE1_Pos) /*!< Bit mask of COMPARE1 field. */
#define TIMER_INTENSET_COMPARE1_Disabled (0UL) /*!< Read: Disabled */
#define TIMER_INTENSET_COMPARE1_Enabled (1UL) /*!< Read: Enabled */
#define TIMER_INTENSET_COMPARE1_Set (1UL) /*!< Enable */

/* Bit 16 : Write '1' to Enable interrupt for COMPARE[0] event */
#define TIMER_INTENSET_COMPARE0_Pos (16UL) /*!< Position of COMPARE0 field. */
#define TIMER_INTENSET_COMPARE0_Msk (0x1UL << TIMER_INTENSET_COMPARE0_Pos) /*!< Bit mask of COMPARE0 field. */
#define TIMER_INTENSET_COMPARE0_Disabled (0UL) /*!< Read: Disabled */
#define TIMER_INTENSET_COMPARE0_Enabled (1UL) /*!< Read: Enabled */
#define TIMER_INTENSET_COMPARE0_Set (1UL) /*!< Enable */

/* Register: TIMER_INTENCLR */
/* Description: Disable interrupt */

/* Bit 19 : Write '1' to Disable interrupt for COMPARE[3] event */
#define TIMER_INTENCLR_COMPARE3_Pos (19UL) /*!< Position of COMPARE3 field. */
#define TIMER_INTENCLR_COMPARE3_Msk (0x1UL << TIMER_INTENCLR_COMPARE3_Pos) /*!< Bit mask of COMPARE3 field. */
#define TIMER_INTENCLR_COMPARE3_Disabled (0UL) /*!< Read: Disabled */
#define TIMER_INTENCLR_COMPARE3_Enabled (1UL) /*!< Read: Enabled */
#define TIMER_INTENCLR_COMPARE3_Clear (1UL) /*!< Disable */

/* Bit 18 : Write '1' to Disable interrupt for COMPARE[2] event */
#define TIMER_INTENCLR_COMPARE2_Pos (18UL) /*!< Position of COMPARE2 field. */
#define TIMER_INTENCLR_COMPARE2_Msk (0x1UL << TIMER_INTENCLR_COMPARE2_Pos) /*!< Bit mask of COMPARE2 field. */
#define TIMER_INTENCLR_COMPARE2_Disabled (0UL) /*!< Read: Disabled */
#define TIMER_INTENCLR_COMPARE2_Enabled (1UL) /*!< Read: Enabled */
#define TIMER_INTENCLR_COMPARE2_Clear (1UL) /*!< Disable */

/* Bit 17 : Write '1' to Disable interrupt for COMPARE[1] event */
#define TIMER_INTENCLR_COMPARE1_Pos (17UL) /*!< Position of COMPARE1 field. */
#define TIMER_INTENCLR_COMPARE1_Msk (0x1UL << TIMER_INTENCLR_COMPARE1_Pos) /*!< Bit mask of COMPARE1 field. */
#define TIMER_INTENCLR_COMPARE1_Disabled (0UL) /*!< Read: Disabled */
#define TIMER_INTENCLR_COMPARE1_Enabled (1UL) /*!< Read: Enabled */
#define TIMER_INTENCLR_COMPARE1_Clear (1UL) /*!< Disable */

/* Bit 16 : Write '1' to Disable interrupt for COMPARE[0] event */
#define TIMER_INTENCLR_COMPARE0_Pos (16UL) /*!< Position of COMPARE0 field. */
#define TIMER_INTENCLR_COMPARE0_Msk (0x1UL << TIMER_INTENCLR_COMPARE0_Pos) /*!< Bit mask of COMPARE0 field. */
#define TIMER_INTENCLR_COMPARE0_Disabled (0UL) /*!< Read: Disabled */
#define TIMER_INTENCLR_COMPARE0_Enabled (1UL) /*!< Read: Enabled */
#define TIMER_INTENCLR_COMPARE0_Clear (1UL) /*!< Disable */

/* Register: TIMER_MODE */
/* Description: Timer mode selection */

/* Bit 0 : Timer mode */
#define TIMER_MODE_MODE_Pos (0UL) /*!< Position of MODE field. */
#define TIMER_MODE_MODE_Msk (0x1UL << TIMER_MODE_MODE_Pos) /*!< Bit mask of MODE field. */
#define TIMER_MODE_MODE_Timer (0UL) /*!< Select Timer mode */
#define TIMER_MODE_MODE_Counter (1UL) /*!< Select Counter mode */

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
/* Description: Description collection[0]:  Capture/Compare register 0 */

/* Bits 31..0 : Capture/Compare value */
#define TIMER_CC_CC_Pos (0UL) /*!< Position of CC field. */
#define TIMER_CC_CC_Msk (0xFFFFFFFFUL << TIMER_CC_CC_Pos) /*!< Bit mask of CC field. */

/* Register: TIMER_FORCE1V2 */
/* Description: Backdoor to force 1V2 supply to this peripheral */

/* Bit 0 : Backdoor to force 1V2 supply to this peripheral (Used in FOPAN-73) */
#define TIMER_FORCE1V2_FORCE_Pos (0UL) /*!< Position of FORCE field. */
#define TIMER_FORCE1V2_FORCE_Msk (0x1UL << TIMER_FORCE1V2_FORCE_Pos) /*!< Bit mask of FORCE field. */
#define TIMER_FORCE1V2_FORCE_Automatic (0UL) /*!< Let PCGC handle the power supply */
#define TIMER_FORCE1V2_FORCE_ForceOn (1UL) /*!< Force 1V2 on */

/* Register: TIMER_POWER */
/* Description: Peripheral power control */

/* Bit 0 : Peripheral power control. The peripheral and its registers will be reset to its initial state by switching the peripheral off and then back on again. */
#define TIMER_POWER_POWER_Pos (0UL) /*!< Position of POWER field. */
#define TIMER_POWER_POWER_Msk (0x1UL << TIMER_POWER_POWER_Pos) /*!< Bit mask of POWER field. */
#define TIMER_POWER_POWER_Disabled (0UL) /*!< Peripheral is powered off */
#define TIMER_POWER_POWER_Enabled (1UL) /*!< Peripheral is powered on */


/* Peripheral: TWI */
/* Description: I2C compatible Two-Wire Interface 0 */

/* Register: TWI_SHORTS */
/* Description: Shortcut register */

/* Bit 1 : Shortcut between BB event and STOP task */
#define TWI_SHORTS_BB_STOP_Pos (1UL) /*!< Position of BB_STOP field. */
#define TWI_SHORTS_BB_STOP_Msk (0x1UL << TWI_SHORTS_BB_STOP_Pos) /*!< Bit mask of BB_STOP field. */
#define TWI_SHORTS_BB_STOP_Disabled (0UL) /*!< Disable shortcut */
#define TWI_SHORTS_BB_STOP_Enabled (1UL) /*!< Enable shortcut */

/* Bit 0 : Shortcut between BB event and SUSPEND task */
#define TWI_SHORTS_BB_SUSPEND_Pos (0UL) /*!< Position of BB_SUSPEND field. */
#define TWI_SHORTS_BB_SUSPEND_Msk (0x1UL << TWI_SHORTS_BB_SUSPEND_Pos) /*!< Bit mask of BB_SUSPEND field. */
#define TWI_SHORTS_BB_SUSPEND_Disabled (0UL) /*!< Disable shortcut */
#define TWI_SHORTS_BB_SUSPEND_Enabled (1UL) /*!< Enable shortcut */

/* Register: TWI_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 18 : Enable or disable interrupt for SUSPENDED event */
#define TWI_INTEN_SUSPENDED_Pos (18UL) /*!< Position of SUSPENDED field. */
#define TWI_INTEN_SUSPENDED_Msk (0x1UL << TWI_INTEN_SUSPENDED_Pos) /*!< Bit mask of SUSPENDED field. */
#define TWI_INTEN_SUSPENDED_Disabled (0UL) /*!< Disable */
#define TWI_INTEN_SUSPENDED_Enabled (1UL) /*!< Enable */

/* Bit 14 : Enable or disable interrupt for BB event */
#define TWI_INTEN_BB_Pos (14UL) /*!< Position of BB field. */
#define TWI_INTEN_BB_Msk (0x1UL << TWI_INTEN_BB_Pos) /*!< Bit mask of BB field. */
#define TWI_INTEN_BB_Disabled (0UL) /*!< Disable */
#define TWI_INTEN_BB_Enabled (1UL) /*!< Enable */

/* Bit 9 : Enable or disable interrupt for ERROR event */
#define TWI_INTEN_ERROR_Pos (9UL) /*!< Position of ERROR field. */
#define TWI_INTEN_ERROR_Msk (0x1UL << TWI_INTEN_ERROR_Pos) /*!< Bit mask of ERROR field. */
#define TWI_INTEN_ERROR_Disabled (0UL) /*!< Disable */
#define TWI_INTEN_ERROR_Enabled (1UL) /*!< Enable */

/* Bit 7 : Enable or disable interrupt for TXDSENT event */
#define TWI_INTEN_TXDSENT_Pos (7UL) /*!< Position of TXDSENT field. */
#define TWI_INTEN_TXDSENT_Msk (0x1UL << TWI_INTEN_TXDSENT_Pos) /*!< Bit mask of TXDSENT field. */
#define TWI_INTEN_TXDSENT_Disabled (0UL) /*!< Disable */
#define TWI_INTEN_TXDSENT_Enabled (1UL) /*!< Enable */

/* Bit 2 : Enable or disable interrupt for RXDREADY event */
#define TWI_INTEN_RXDREADY_Pos (2UL) /*!< Position of RXDREADY field. */
#define TWI_INTEN_RXDREADY_Msk (0x1UL << TWI_INTEN_RXDREADY_Pos) /*!< Bit mask of RXDREADY field. */
#define TWI_INTEN_RXDREADY_Disabled (0UL) /*!< Disable */
#define TWI_INTEN_RXDREADY_Enabled (1UL) /*!< Enable */

/* Bit 1 : Enable or disable interrupt for STOPPED event */
#define TWI_INTEN_STOPPED_Pos (1UL) /*!< Position of STOPPED field. */
#define TWI_INTEN_STOPPED_Msk (0x1UL << TWI_INTEN_STOPPED_Pos) /*!< Bit mask of STOPPED field. */
#define TWI_INTEN_STOPPED_Disabled (0UL) /*!< Disable */
#define TWI_INTEN_STOPPED_Enabled (1UL) /*!< Enable */

/* Register: TWI_INTENSET */
/* Description: Enable interrupt */

/* Bit 18 : Write '1' to Enable interrupt for SUSPENDED event */
#define TWI_INTENSET_SUSPENDED_Pos (18UL) /*!< Position of SUSPENDED field. */
#define TWI_INTENSET_SUSPENDED_Msk (0x1UL << TWI_INTENSET_SUSPENDED_Pos) /*!< Bit mask of SUSPENDED field. */
#define TWI_INTENSET_SUSPENDED_Disabled (0UL) /*!< Read: Disabled */
#define TWI_INTENSET_SUSPENDED_Enabled (1UL) /*!< Read: Enabled */
#define TWI_INTENSET_SUSPENDED_Set (1UL) /*!< Enable */

/* Bit 14 : Write '1' to Enable interrupt for BB event */
#define TWI_INTENSET_BB_Pos (14UL) /*!< Position of BB field. */
#define TWI_INTENSET_BB_Msk (0x1UL << TWI_INTENSET_BB_Pos) /*!< Bit mask of BB field. */
#define TWI_INTENSET_BB_Disabled (0UL) /*!< Read: Disabled */
#define TWI_INTENSET_BB_Enabled (1UL) /*!< Read: Enabled */
#define TWI_INTENSET_BB_Set (1UL) /*!< Enable */

/* Bit 9 : Write '1' to Enable interrupt for ERROR event */
#define TWI_INTENSET_ERROR_Pos (9UL) /*!< Position of ERROR field. */
#define TWI_INTENSET_ERROR_Msk (0x1UL << TWI_INTENSET_ERROR_Pos) /*!< Bit mask of ERROR field. */
#define TWI_INTENSET_ERROR_Disabled (0UL) /*!< Read: Disabled */
#define TWI_INTENSET_ERROR_Enabled (1UL) /*!< Read: Enabled */
#define TWI_INTENSET_ERROR_Set (1UL) /*!< Enable */

/* Bit 7 : Write '1' to Enable interrupt for TXDSENT event */
#define TWI_INTENSET_TXDSENT_Pos (7UL) /*!< Position of TXDSENT field. */
#define TWI_INTENSET_TXDSENT_Msk (0x1UL << TWI_INTENSET_TXDSENT_Pos) /*!< Bit mask of TXDSENT field. */
#define TWI_INTENSET_TXDSENT_Disabled (0UL) /*!< Read: Disabled */
#define TWI_INTENSET_TXDSENT_Enabled (1UL) /*!< Read: Enabled */
#define TWI_INTENSET_TXDSENT_Set (1UL) /*!< Enable */

/* Bit 2 : Write '1' to Enable interrupt for RXDREADY event */
#define TWI_INTENSET_RXDREADY_Pos (2UL) /*!< Position of RXDREADY field. */
#define TWI_INTENSET_RXDREADY_Msk (0x1UL << TWI_INTENSET_RXDREADY_Pos) /*!< Bit mask of RXDREADY field. */
#define TWI_INTENSET_RXDREADY_Disabled (0UL) /*!< Read: Disabled */
#define TWI_INTENSET_RXDREADY_Enabled (1UL) /*!< Read: Enabled */
#define TWI_INTENSET_RXDREADY_Set (1UL) /*!< Enable */

/* Bit 1 : Write '1' to Enable interrupt for STOPPED event */
#define TWI_INTENSET_STOPPED_Pos (1UL) /*!< Position of STOPPED field. */
#define TWI_INTENSET_STOPPED_Msk (0x1UL << TWI_INTENSET_STOPPED_Pos) /*!< Bit mask of STOPPED field. */
#define TWI_INTENSET_STOPPED_Disabled (0UL) /*!< Read: Disabled */
#define TWI_INTENSET_STOPPED_Enabled (1UL) /*!< Read: Enabled */
#define TWI_INTENSET_STOPPED_Set (1UL) /*!< Enable */

/* Register: TWI_INTENCLR */
/* Description: Disable interrupt */

/* Bit 18 : Write '1' to Disable interrupt for SUSPENDED event */
#define TWI_INTENCLR_SUSPENDED_Pos (18UL) /*!< Position of SUSPENDED field. */
#define TWI_INTENCLR_SUSPENDED_Msk (0x1UL << TWI_INTENCLR_SUSPENDED_Pos) /*!< Bit mask of SUSPENDED field. */
#define TWI_INTENCLR_SUSPENDED_Disabled (0UL) /*!< Read: Disabled */
#define TWI_INTENCLR_SUSPENDED_Enabled (1UL) /*!< Read: Enabled */
#define TWI_INTENCLR_SUSPENDED_Clear (1UL) /*!< Disable */

/* Bit 14 : Write '1' to Disable interrupt for BB event */
#define TWI_INTENCLR_BB_Pos (14UL) /*!< Position of BB field. */
#define TWI_INTENCLR_BB_Msk (0x1UL << TWI_INTENCLR_BB_Pos) /*!< Bit mask of BB field. */
#define TWI_INTENCLR_BB_Disabled (0UL) /*!< Read: Disabled */
#define TWI_INTENCLR_BB_Enabled (1UL) /*!< Read: Enabled */
#define TWI_INTENCLR_BB_Clear (1UL) /*!< Disable */

/* Bit 9 : Write '1' to Disable interrupt for ERROR event */
#define TWI_INTENCLR_ERROR_Pos (9UL) /*!< Position of ERROR field. */
#define TWI_INTENCLR_ERROR_Msk (0x1UL << TWI_INTENCLR_ERROR_Pos) /*!< Bit mask of ERROR field. */
#define TWI_INTENCLR_ERROR_Disabled (0UL) /*!< Read: Disabled */
#define TWI_INTENCLR_ERROR_Enabled (1UL) /*!< Read: Enabled */
#define TWI_INTENCLR_ERROR_Clear (1UL) /*!< Disable */

/* Bit 7 : Write '1' to Disable interrupt for TXDSENT event */
#define TWI_INTENCLR_TXDSENT_Pos (7UL) /*!< Position of TXDSENT field. */
#define TWI_INTENCLR_TXDSENT_Msk (0x1UL << TWI_INTENCLR_TXDSENT_Pos) /*!< Bit mask of TXDSENT field. */
#define TWI_INTENCLR_TXDSENT_Disabled (0UL) /*!< Read: Disabled */
#define TWI_INTENCLR_TXDSENT_Enabled (1UL) /*!< Read: Enabled */
#define TWI_INTENCLR_TXDSENT_Clear (1UL) /*!< Disable */

/* Bit 2 : Write '1' to Disable interrupt for RXDREADY event */
#define TWI_INTENCLR_RXDREADY_Pos (2UL) /*!< Position of RXDREADY field. */
#define TWI_INTENCLR_RXDREADY_Msk (0x1UL << TWI_INTENCLR_RXDREADY_Pos) /*!< Bit mask of RXDREADY field. */
#define TWI_INTENCLR_RXDREADY_Disabled (0UL) /*!< Read: Disabled */
#define TWI_INTENCLR_RXDREADY_Enabled (1UL) /*!< Read: Enabled */
#define TWI_INTENCLR_RXDREADY_Clear (1UL) /*!< Disable */

/* Bit 1 : Write '1' to Disable interrupt for STOPPED event */
#define TWI_INTENCLR_STOPPED_Pos (1UL) /*!< Position of STOPPED field. */
#define TWI_INTENCLR_STOPPED_Msk (0x1UL << TWI_INTENCLR_STOPPED_Pos) /*!< Bit mask of STOPPED field. */
#define TWI_INTENCLR_STOPPED_Disabled (0UL) /*!< Read: Disabled */
#define TWI_INTENCLR_STOPPED_Enabled (1UL) /*!< Read: Enabled */
#define TWI_INTENCLR_STOPPED_Clear (1UL) /*!< Disable */

/* Register: TWI_ERRORSRC */
/* Description: Error source */

/* Bit 2 : NACK received after sending a data byte (write '1' to clear) */
#define TWI_ERRORSRC_DNACK_Pos (2UL) /*!< Position of DNACK field. */
#define TWI_ERRORSRC_DNACK_Msk (0x1UL << TWI_ERRORSRC_DNACK_Pos) /*!< Bit mask of DNACK field. */
#define TWI_ERRORSRC_DNACK_NotPresent (0UL) /*!< Read: error not present */
#define TWI_ERRORSRC_DNACK_Present (1UL) /*!< Read: error present */
#define TWI_ERRORSRC_DNACK_Clear (1UL) /*!< Write: clear error on writing '1' */

/* Bit 1 : NACK received after sending the address (write '1' to clear) */
#define TWI_ERRORSRC_ANACK_Pos (1UL) /*!< Position of ANACK field. */
#define TWI_ERRORSRC_ANACK_Msk (0x1UL << TWI_ERRORSRC_ANACK_Pos) /*!< Bit mask of ANACK field. */
#define TWI_ERRORSRC_ANACK_NotPresent (0UL) /*!< Read: error not present */
#define TWI_ERRORSRC_ANACK_Present (1UL) /*!< Read: error present */
#define TWI_ERRORSRC_ANACK_Clear (1UL) /*!< Write: clear error on writing '1' */

/* Bit 0 : Overrun error */
#define TWI_ERRORSRC_OVERRUN_Pos (0UL) /*!< Position of OVERRUN field. */
#define TWI_ERRORSRC_OVERRUN_Msk (0x1UL << TWI_ERRORSRC_OVERRUN_Pos) /*!< Bit mask of OVERRUN field. */
#define TWI_ERRORSRC_OVERRUN_NotPresent (0UL) /*!< Read: no overrun occured */
#define TWI_ERRORSRC_OVERRUN_Present (1UL) /*!< Read: overrun occured */
#define TWI_ERRORSRC_OVERRUN_Clear (1UL) /*!< Write: clear error on writing '1' */

/* Register: TWI_ENABLE */
/* Description: Enable TWI */

/* Bits 2..0 : Enable or disable TWI */
#define TWI_ENABLE_ENABLE_Pos (0UL) /*!< Position of ENABLE field. */
#define TWI_ENABLE_ENABLE_Msk (0x7UL << TWI_ENABLE_ENABLE_Pos) /*!< Bit mask of ENABLE field. */
#define TWI_ENABLE_ENABLE_Disabled (0UL) /*!< Disable TWI */
#define TWI_ENABLE_ENABLE_Enabled (5UL) /*!< Enable TWI */

/* Register: TWI_PSELSCL */
/* Description: Pin select for SCL */

/* Bits 31..0 : Pin number configuration for TWI SCL signal */
#define TWI_PSELSCL_PSELSCL_Pos (0UL) /*!< Position of PSELSCL field. */
#define TWI_PSELSCL_PSELSCL_Msk (0xFFFFFFFFUL << TWI_PSELSCL_PSELSCL_Pos) /*!< Bit mask of PSELSCL field. */
#define TWI_PSELSCL_PSELSCL_Disconnected (0xFFFFFFFFUL) /*!< Disconnect */

/* Register: TWI_PSELSDA */
/* Description: Pin select for SDA */

/* Bits 31..0 : Pin number configuration for TWI SDA signal */
#define TWI_PSELSDA_PSELSDA_Pos (0UL) /*!< Position of PSELSDA field. */
#define TWI_PSELSDA_PSELSDA_Msk (0xFFFFFFFFUL << TWI_PSELSDA_PSELSDA_Pos) /*!< Bit mask of PSELSDA field. */
#define TWI_PSELSDA_PSELSDA_Disconnected (0xFFFFFFFFUL) /*!< Disconnect */

/* Register: TWI_RXD */
/* Description: RXD register */

/* Bits 7..0 : RXD register */
#define TWI_RXD_RXD_Pos (0UL) /*!< Position of RXD field. */
#define TWI_RXD_RXD_Msk (0xFFUL << TWI_RXD_RXD_Pos) /*!< Bit mask of RXD field. */

/* Register: TWI_TXD */
/* Description: TXD register */

/* Bits 7..0 : TXD register */
#define TWI_TXD_TXD_Pos (0UL) /*!< Position of TXD field. */
#define TWI_TXD_TXD_Msk (0xFFUL << TWI_TXD_TXD_Pos) /*!< Bit mask of TXD field. */

/* Register: TWI_FREQUENCY */
/* Description: TWI frequency */

/* Bits 31..0 : TWI master clock frequency */
#define TWI_FREQUENCY_FREQUENCY_Pos (0UL) /*!< Position of FREQUENCY field. */
#define TWI_FREQUENCY_FREQUENCY_Msk (0xFFFFFFFFUL << TWI_FREQUENCY_FREQUENCY_Pos) /*!< Bit mask of FREQUENCY field. */
#define TWI_FREQUENCY_FREQUENCY_K100 (0x01980000UL) /*!< 100 kbps */
#define TWI_FREQUENCY_FREQUENCY_K250 (0x04000000UL) /*!< 250 kbps */
#define TWI_FREQUENCY_FREQUENCY_K400 (0x06680000UL) /*!< 400 kbps (actual rate 410.256 kbps) */

/* Register: TWI_ADDRESS */
/* Description: Address used in the TWI transfer */

/* Bits 6..0 : Address used in the TWI transfer */
#define TWI_ADDRESS_ADDRESS_Pos (0UL) /*!< Position of ADDRESS field. */
#define TWI_ADDRESS_ADDRESS_Msk (0x7FUL << TWI_ADDRESS_ADDRESS_Pos) /*!< Bit mask of ADDRESS field. */

/* Register: TWI_POWER */
/* Description: Peripheral power control */

/* Bit 0 : Peripheral power control. The peripheral and its registers will be reset to its initial state by switching the peripheral off and then back on again. */
#define TWI_POWER_POWER_Pos (0UL) /*!< Position of POWER field. */
#define TWI_POWER_POWER_Msk (0x1UL << TWI_POWER_POWER_Pos) /*!< Bit mask of POWER field. */
#define TWI_POWER_POWER_Disabled (0UL) /*!< Peripheral is powered off */
#define TWI_POWER_POWER_Enabled (1UL) /*!< Peripheral is powered on */


/* Peripheral: UART */
/* Description: Universal Asynchronous Receiver/Transmitter */

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

/* Bit 17 : Write '1' to Enable interrupt for RXTO event */
#define UART_INTENSET_RXTO_Pos (17UL) /*!< Position of RXTO field. */
#define UART_INTENSET_RXTO_Msk (0x1UL << UART_INTENSET_RXTO_Pos) /*!< Bit mask of RXTO field. */
#define UART_INTENSET_RXTO_Disabled (0UL) /*!< Read: Disabled */
#define UART_INTENSET_RXTO_Enabled (1UL) /*!< Read: Enabled */
#define UART_INTENSET_RXTO_Set (1UL) /*!< Enable */

/* Bit 9 : Write '1' to Enable interrupt for ERROR event */
#define UART_INTENSET_ERROR_Pos (9UL) /*!< Position of ERROR field. */
#define UART_INTENSET_ERROR_Msk (0x1UL << UART_INTENSET_ERROR_Pos) /*!< Bit mask of ERROR field. */
#define UART_INTENSET_ERROR_Disabled (0UL) /*!< Read: Disabled */
#define UART_INTENSET_ERROR_Enabled (1UL) /*!< Read: Enabled */
#define UART_INTENSET_ERROR_Set (1UL) /*!< Enable */

/* Bit 7 : Write '1' to Enable interrupt for TXDRDY event */
#define UART_INTENSET_TXDRDY_Pos (7UL) /*!< Position of TXDRDY field. */
#define UART_INTENSET_TXDRDY_Msk (0x1UL << UART_INTENSET_TXDRDY_Pos) /*!< Bit mask of TXDRDY field. */
#define UART_INTENSET_TXDRDY_Disabled (0UL) /*!< Read: Disabled */
#define UART_INTENSET_TXDRDY_Enabled (1UL) /*!< Read: Enabled */
#define UART_INTENSET_TXDRDY_Set (1UL) /*!< Enable */

/* Bit 2 : Write '1' to Enable interrupt for RXDRDY event */
#define UART_INTENSET_RXDRDY_Pos (2UL) /*!< Position of RXDRDY field. */
#define UART_INTENSET_RXDRDY_Msk (0x1UL << UART_INTENSET_RXDRDY_Pos) /*!< Bit mask of RXDRDY field. */
#define UART_INTENSET_RXDRDY_Disabled (0UL) /*!< Read: Disabled */
#define UART_INTENSET_RXDRDY_Enabled (1UL) /*!< Read: Enabled */
#define UART_INTENSET_RXDRDY_Set (1UL) /*!< Enable */

/* Bit 1 : Write '1' to Enable interrupt for NCTS event */
#define UART_INTENSET_NCTS_Pos (1UL) /*!< Position of NCTS field. */
#define UART_INTENSET_NCTS_Msk (0x1UL << UART_INTENSET_NCTS_Pos) /*!< Bit mask of NCTS field. */
#define UART_INTENSET_NCTS_Disabled (0UL) /*!< Read: Disabled */
#define UART_INTENSET_NCTS_Enabled (1UL) /*!< Read: Enabled */
#define UART_INTENSET_NCTS_Set (1UL) /*!< Enable */

/* Bit 0 : Write '1' to Enable interrupt for CTS event */
#define UART_INTENSET_CTS_Pos (0UL) /*!< Position of CTS field. */
#define UART_INTENSET_CTS_Msk (0x1UL << UART_INTENSET_CTS_Pos) /*!< Bit mask of CTS field. */
#define UART_INTENSET_CTS_Disabled (0UL) /*!< Read: Disabled */
#define UART_INTENSET_CTS_Enabled (1UL) /*!< Read: Enabled */
#define UART_INTENSET_CTS_Set (1UL) /*!< Enable */

/* Register: UART_INTENCLR */
/* Description: Disable interrupt */

/* Bit 17 : Write '1' to Disable interrupt for RXTO event */
#define UART_INTENCLR_RXTO_Pos (17UL) /*!< Position of RXTO field. */
#define UART_INTENCLR_RXTO_Msk (0x1UL << UART_INTENCLR_RXTO_Pos) /*!< Bit mask of RXTO field. */
#define UART_INTENCLR_RXTO_Disabled (0UL) /*!< Read: Disabled */
#define UART_INTENCLR_RXTO_Enabled (1UL) /*!< Read: Enabled */
#define UART_INTENCLR_RXTO_Clear (1UL) /*!< Disable */

/* Bit 9 : Write '1' to Disable interrupt for ERROR event */
#define UART_INTENCLR_ERROR_Pos (9UL) /*!< Position of ERROR field. */
#define UART_INTENCLR_ERROR_Msk (0x1UL << UART_INTENCLR_ERROR_Pos) /*!< Bit mask of ERROR field. */
#define UART_INTENCLR_ERROR_Disabled (0UL) /*!< Read: Disabled */
#define UART_INTENCLR_ERROR_Enabled (1UL) /*!< Read: Enabled */
#define UART_INTENCLR_ERROR_Clear (1UL) /*!< Disable */

/* Bit 7 : Write '1' to Disable interrupt for TXDRDY event */
#define UART_INTENCLR_TXDRDY_Pos (7UL) /*!< Position of TXDRDY field. */
#define UART_INTENCLR_TXDRDY_Msk (0x1UL << UART_INTENCLR_TXDRDY_Pos) /*!< Bit mask of TXDRDY field. */
#define UART_INTENCLR_TXDRDY_Disabled (0UL) /*!< Read: Disabled */
#define UART_INTENCLR_TXDRDY_Enabled (1UL) /*!< Read: Enabled */
#define UART_INTENCLR_TXDRDY_Clear (1UL) /*!< Disable */

/* Bit 2 : Write '1' to Disable interrupt for RXDRDY event */
#define UART_INTENCLR_RXDRDY_Pos (2UL) /*!< Position of RXDRDY field. */
#define UART_INTENCLR_RXDRDY_Msk (0x1UL << UART_INTENCLR_RXDRDY_Pos) /*!< Bit mask of RXDRDY field. */
#define UART_INTENCLR_RXDRDY_Disabled (0UL) /*!< Read: Disabled */
#define UART_INTENCLR_RXDRDY_Enabled (1UL) /*!< Read: Enabled */
#define UART_INTENCLR_RXDRDY_Clear (1UL) /*!< Disable */

/* Bit 1 : Write '1' to Disable interrupt for NCTS event */
#define UART_INTENCLR_NCTS_Pos (1UL) /*!< Position of NCTS field. */
#define UART_INTENCLR_NCTS_Msk (0x1UL << UART_INTENCLR_NCTS_Pos) /*!< Bit mask of NCTS field. */
#define UART_INTENCLR_NCTS_Disabled (0UL) /*!< Read: Disabled */
#define UART_INTENCLR_NCTS_Enabled (1UL) /*!< Read: Enabled */
#define UART_INTENCLR_NCTS_Clear (1UL) /*!< Disable */

/* Bit 0 : Write '1' to Disable interrupt for CTS event */
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
#define UART_ERRORSRC_BREAK_Clear (1UL) /*!< Write: clear error on writing '1' */

/* Bit 2 : Framing error occurred */
#define UART_ERRORSRC_FRAMING_Pos (2UL) /*!< Position of FRAMING field. */
#define UART_ERRORSRC_FRAMING_Msk (0x1UL << UART_ERRORSRC_FRAMING_Pos) /*!< Bit mask of FRAMING field. */
#define UART_ERRORSRC_FRAMING_NotPresent (0UL) /*!< Read: error not present */
#define UART_ERRORSRC_FRAMING_Present (1UL) /*!< Read: error present */
#define UART_ERRORSRC_FRAMING_Clear (1UL) /*!< Write: clear error on writing '1' */

/* Bit 1 : Parity error */
#define UART_ERRORSRC_PARITY_Pos (1UL) /*!< Position of PARITY field. */
#define UART_ERRORSRC_PARITY_Msk (0x1UL << UART_ERRORSRC_PARITY_Pos) /*!< Bit mask of PARITY field. */
#define UART_ERRORSRC_PARITY_NotPresent (0UL) /*!< Read: error not present */
#define UART_ERRORSRC_PARITY_Present (1UL) /*!< Read: error present */
#define UART_ERRORSRC_PARITY_Clear (1UL) /*!< Write: clear error on writing '1' */

/* Bit 0 : Overrun error */
#define UART_ERRORSRC_OVERRUN_Pos (0UL) /*!< Position of OVERRUN field. */
#define UART_ERRORSRC_OVERRUN_Msk (0x1UL << UART_ERRORSRC_OVERRUN_Pos) /*!< Bit mask of OVERRUN field. */
#define UART_ERRORSRC_OVERRUN_NotPresent (0UL) /*!< Read: error not present */
#define UART_ERRORSRC_OVERRUN_Present (1UL) /*!< Read: error present */
#define UART_ERRORSRC_OVERRUN_Clear (1UL) /*!< Write: clear error on writing '1' */

/* Register: UART_ENABLE */
/* Description: Enable UART */

/* Bits 2..0 : Enable or disable UART */
#define UART_ENABLE_ENABLE_Pos (0UL) /*!< Position of ENABLE field. */
#define UART_ENABLE_ENABLE_Msk (0x7UL << UART_ENABLE_ENABLE_Pos) /*!< Bit mask of ENABLE field. */
#define UART_ENABLE_ENABLE_Disabled (0UL) /*!< Disable UART */
#define UART_ENABLE_ENABLE_Enabled (4UL) /*!< Enable UART */

/* Register: UART_PSELRTS */
/* Description: Pin select for RTS */

/* Bits 31..0 : Pin number configuration for UART RTS signal */
#define UART_PSELRTS_PSELRTS_Pos (0UL) /*!< Position of PSELRTS field. */
#define UART_PSELRTS_PSELRTS_Msk (0xFFFFFFFFUL << UART_PSELRTS_PSELRTS_Pos) /*!< Bit mask of PSELRTS field. */
#define UART_PSELRTS_PSELRTS_Disconnected (0xFFFFFFFFUL) /*!< Disconnect */

/* Register: UART_PSELTXD */
/* Description: Pin select for TXD */

/* Bits 31..0 : Pin number configuration for UART TXD signal */
#define UART_PSELTXD_PSELTXD_Pos (0UL) /*!< Position of PSELTXD field. */
#define UART_PSELTXD_PSELTXD_Msk (0xFFFFFFFFUL << UART_PSELTXD_PSELTXD_Pos) /*!< Bit mask of PSELTXD field. */
#define UART_PSELTXD_PSELTXD_Disconnected (0xFFFFFFFFUL) /*!< Disconnect */

/* Register: UART_PSELCTS */
/* Description: Pin select for CTS */

/* Bits 31..0 : Pin number configuration for UART CTS signal */
#define UART_PSELCTS_PSELCTS_Pos (0UL) /*!< Position of PSELCTS field. */
#define UART_PSELCTS_PSELCTS_Msk (0xFFFFFFFFUL << UART_PSELCTS_PSELCTS_Pos) /*!< Bit mask of PSELCTS field. */
#define UART_PSELCTS_PSELCTS_Disconnected (0xFFFFFFFFUL) /*!< Disconnect */

/* Register: UART_PSELRXD */
/* Description: Pin select for RXD */

/* Bits 31..0 : Pin number configuration for UART RXD signal */
#define UART_PSELRXD_PSELRXD_Pos (0UL) /*!< Position of PSELRXD field. */
#define UART_PSELRXD_PSELRXD_Msk (0xFFFFFFFFUL << UART_PSELRXD_PSELRXD_Pos) /*!< Bit mask of PSELRXD field. */
#define UART_PSELRXD_PSELRXD_Disconnected (0xFFFFFFFFUL) /*!< Disconnect */

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
/* Description: Baud rate */

/* Bits 31..0 : Baud-rate */
#define UART_BAUDRATE_BAUDRATE_Pos (0UL) /*!< Position of BAUDRATE field. */
#define UART_BAUDRATE_BAUDRATE_Msk (0xFFFFFFFFUL << UART_BAUDRATE_BAUDRATE_Pos) /*!< Bit mask of BAUDRATE field. */
#define UART_BAUDRATE_BAUDRATE_Baud1200 (0x0004F000UL) /*!< 1200 baud (actual rate: 1205) */
#define UART_BAUDRATE_BAUDRATE_Baud2400 (0x0009D000UL) /*!< 2400 baud (actual rate: 2396) */
#define UART_BAUDRATE_BAUDRATE_Baud4800 (0x0013B000UL) /*!< 4800 baud (actual rate: 4808) */
#define UART_BAUDRATE_BAUDRATE_Baud9600 (0x00275000UL) /*!< 9600 baud (actual rate: 9598) */
#define UART_BAUDRATE_BAUDRATE_Baud14400 (0x003B0000UL) /*!< 14400 baud (actual rate: 14414) */
#define UART_BAUDRATE_BAUDRATE_Baud19200 (0x004EA000UL) /*!< 19200 baud (actual rate: 19208) */
#define UART_BAUDRATE_BAUDRATE_Baud28800 (0x0075F000UL) /*!< 28800 baud (actual rate: 28829) */
#define UART_BAUDRATE_BAUDRATE_Baud31250  (0x00800000UL) /*!< 31250 baud (actual rate: 31250) */
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


/* Peripheral: UICR */
/* Description: User Information Configuration Registers */

/* Register: UICR_CLENR0 */
/* Description: Length of code region 0 */

/* Bits 31..0 : Length of code region 0 */
#define UICR_CLENR0_CLENR0_Pos (0UL) /*!< Position of CLENR0 field. */
#define UICR_CLENR0_CLENR0_Msk (0xFFFFFFFFUL << UICR_CLENR0_CLENR0_Pos) /*!< Bit mask of CLENR0 field. */

/* Register: UICR_RBPCONF */
/* Description: Read back protection configuration */

/* Bits 15..8 : Protect all. Enable or disable read-back protection of all code in device. */
#define UICR_RBPCONF_PALL_Pos (8UL) /*!< Position of PALL field. */
#define UICR_RBPCONF_PALL_Msk (0xFFUL << UICR_RBPCONF_PALL_Pos) /*!< Bit mask of PALL field. */
#define UICR_RBPCONF_PALL_Enabled (0x00UL) /*!< Enable */
#define UICR_RBPCONF_PALL_Disabled (0xFFUL) /*!< Disable */

/* Bits 7..0 : Protect region 0. Enable or disable read-back protection of code region 0. */
#define UICR_RBPCONF_PR0_Pos (0UL) /*!< Position of PR0 field. */
#define UICR_RBPCONF_PR0_Msk (0xFFUL << UICR_RBPCONF_PR0_Pos) /*!< Bit mask of PR0 field. */
#define UICR_RBPCONF_PR0_Enabled (0x00UL) /*!< Enable */
#define UICR_RBPCONF_PR0_Disabled (0xFFUL) /*!< Disable */

/* Register: UICR_XTALFREQ */
/* Description: Reset value for XTALFREQ in CLOCK, see CLOCK chapter */

/* Bits 7..0 : Reset value for XTALFREQ in CLOCK, see CLOCK chapter */
#define UICR_XTALFREQ_XTALFREQ_Pos (0UL) /*!< Position of XTALFREQ field. */
#define UICR_XTALFREQ_XTALFREQ_Msk (0xFFUL << UICR_XTALFREQ_XTALFREQ_Pos) /*!< Bit mask of XTALFREQ field. */
#define UICR_XTALFREQ_XTALFREQ_32MHz (0x00UL) /*!< 32 MHz crystal is used */
#define UICR_XTALFREQ_XTALFREQ_16MHz (0xFFUL) /*!< 16 MHz crystal is used */

/* Register: UICR_FWID */
/* Description: Firmware ID */

/* Bits 15..0 : Firmware ID */
#define UICR_FWID_FWID_Pos (0UL) /*!< Position of FWID field. */
#define UICR_FWID_FWID_Msk (0xFFFFUL << UICR_FWID_FWID_Pos) /*!< Bit mask of FWID field. */

/* Register: UICR_BOOTLOADERADDR */
/* Description: Bootloader address */

/* Bits 31..0 : Bootloader address */
#define UICR_BOOTLOADERADDR_BOOTLOADERADDR_Pos (0UL) /*!< Position of BOOTLOADERADDR field. */
#define UICR_BOOTLOADERADDR_BOOTLOADERADDR_Msk (0xFFFFFFFFUL << UICR_BOOTLOADERADDR_BOOTLOADERADDR_Pos) /*!< Bit mask of BOOTLOADERADDR field. */

/* Register: UICR_NRFFW */
/* Description: Description collection[0]:  Reserved for Nordic firmware design */

/* Bits 31..0 : Reserved for Nordic firmware design */
#define UICR_NRFFW_NRFFW_Pos (0UL) /*!< Position of NRFFW field. */
#define UICR_NRFFW_NRFFW_Msk (0xFFFFFFFFUL << UICR_NRFFW_NRFFW_Pos) /*!< Bit mask of NRFFW field. */

/* Register: UICR_NRFHW */
/* Description: Description collection[0]:  Reserved for Nordic hardware design */

/* Bits 31..0 : Reserved for Nordic hardware design */
#define UICR_NRFHW_NRFHW_Pos (0UL) /*!< Position of NRFHW field. */
#define UICR_NRFHW_NRFHW_Msk (0xFFFFFFFFUL << UICR_NRFHW_NRFHW_Pos) /*!< Bit mask of NRFHW field. */

/* Register: UICR_CUSTOMER */
/* Description: Description collection[0]:  Reserved for customer */

/* Bits 31..0 : Reserved for customer */
#define UICR_CUSTOMER_CUSTOMER_Pos (0UL) /*!< Position of CUSTOMER field. */
#define UICR_CUSTOMER_CUSTOMER_Msk (0xFFFFFFFFUL << UICR_CUSTOMER_CUSTOMER_Pos) /*!< Bit mask of CUSTOMER field. */


/* Peripheral: WDT */
/* Description: Watchdog Timer */

/* Register: WDT_INTENSET */
/* Description: Enable interrupt */

/* Bit 0 : Write '1' to Enable interrupt for TIMEOUT event */
#define WDT_INTENSET_TIMEOUT_Pos (0UL) /*!< Position of TIMEOUT field. */
#define WDT_INTENSET_TIMEOUT_Msk (0x1UL << WDT_INTENSET_TIMEOUT_Pos) /*!< Bit mask of TIMEOUT field. */
#define WDT_INTENSET_TIMEOUT_Disabled (0UL) /*!< Read: Disabled */
#define WDT_INTENSET_TIMEOUT_Enabled (1UL) /*!< Read: Enabled */
#define WDT_INTENSET_TIMEOUT_Set (1UL) /*!< Enable */

/* Register: WDT_INTENCLR */
/* Description: Disable interrupt */

/* Bit 0 : Write '1' to Disable interrupt for TIMEOUT event */
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
/* Description: Description collection[0]:  Reload request 0 */

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
