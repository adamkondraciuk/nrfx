/*

Copyright (c) 2010 - 2021, Nordic Semiconductor ASA

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

#ifndef __LILIUM_NETWORK_BITS_H
#define __LILIUM_NETWORK_BITS_H

/*lint ++flb "Enter library region" */

/* Peripheral: AAR */
/* Description: Accelerated Address Resolver */

/* Register: AAR_TASKS_START */
/* Description: Start resolving addresses based on IRKs specified in the IRK data structure */

/* Bit 0 : Start resolving addresses based on IRKs specified in the IRK data structure */
#define AAR_TASKS_START_TASKS_START_Pos (0UL) /*!< Position of TASKS_START field. */
#define AAR_TASKS_START_TASKS_START_Msk (0x1UL << AAR_TASKS_START_TASKS_START_Pos) /*!< Bit mask of TASKS_START field. */
#define AAR_TASKS_START_TASKS_START_Trigger (0x1UL) /*!< Trigger task */

/* Register: AAR_TASKS_STOP */
/* Description: Stop resolving addresses */

/* Bit 0 : Stop resolving addresses */
#define AAR_TASKS_STOP_TASKS_STOP_Pos (0UL) /*!< Position of TASKS_STOP field. */
#define AAR_TASKS_STOP_TASKS_STOP_Msk (0x1UL << AAR_TASKS_STOP_TASKS_STOP_Pos) /*!< Bit mask of TASKS_STOP field. */
#define AAR_TASKS_STOP_TASKS_STOP_Trigger (0x1UL) /*!< Trigger task */

/* Register: AAR_SUBSCRIBE_START */
/* Description: Subscribe configuration for task START */

/* Bit 31 :   */
#define AAR_SUBSCRIBE_START_EN_Pos (31UL) /*!< Position of EN field. */
#define AAR_SUBSCRIBE_START_EN_Msk (0x1UL << AAR_SUBSCRIBE_START_EN_Pos) /*!< Bit mask of EN field. */
#define AAR_SUBSCRIBE_START_EN_Disabled (0x0UL) /*!< Disable subscription */
#define AAR_SUBSCRIBE_START_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task START will subscribe to */
#define AAR_SUBSCRIBE_START_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define AAR_SUBSCRIBE_START_CHIDX_Msk (0xFFUL << AAR_SUBSCRIBE_START_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: AAR_SUBSCRIBE_STOP */
/* Description: Subscribe configuration for task STOP */

/* Bit 31 :   */
#define AAR_SUBSCRIBE_STOP_EN_Pos (31UL) /*!< Position of EN field. */
#define AAR_SUBSCRIBE_STOP_EN_Msk (0x1UL << AAR_SUBSCRIBE_STOP_EN_Pos) /*!< Bit mask of EN field. */
#define AAR_SUBSCRIBE_STOP_EN_Disabled (0x0UL) /*!< Disable subscription */
#define AAR_SUBSCRIBE_STOP_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task STOP will subscribe to */
#define AAR_SUBSCRIBE_STOP_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define AAR_SUBSCRIBE_STOP_CHIDX_Msk (0xFFUL << AAR_SUBSCRIBE_STOP_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: AAR_EVENTS_END */
/* Description: Address resolution procedure complete */

/* Bit 0 : Address resolution procedure complete */
#define AAR_EVENTS_END_EVENTS_END_Pos (0UL) /*!< Position of EVENTS_END field. */
#define AAR_EVENTS_END_EVENTS_END_Msk (0x1UL << AAR_EVENTS_END_EVENTS_END_Pos) /*!< Bit mask of EVENTS_END field. */
#define AAR_EVENTS_END_EVENTS_END_NotGenerated (0x0UL) /*!< Event not generated */
#define AAR_EVENTS_END_EVENTS_END_Generated (0x1UL) /*!< Event generated */

/* Register: AAR_EVENTS_RESOLVED */
/* Description: Address resolved */

/* Bit 0 : Address resolved */
#define AAR_EVENTS_RESOLVED_EVENTS_RESOLVED_Pos (0UL) /*!< Position of EVENTS_RESOLVED field. */
#define AAR_EVENTS_RESOLVED_EVENTS_RESOLVED_Msk (0x1UL << AAR_EVENTS_RESOLVED_EVENTS_RESOLVED_Pos) /*!< Bit mask of EVENTS_RESOLVED field. */
#define AAR_EVENTS_RESOLVED_EVENTS_RESOLVED_NotGenerated (0x0UL) /*!< Event not generated */
#define AAR_EVENTS_RESOLVED_EVENTS_RESOLVED_Generated (0x1UL) /*!< Event generated */

/* Register: AAR_EVENTS_NOTRESOLVED */
/* Description: Address not resolved */

/* Bit 0 : Address not resolved */
#define AAR_EVENTS_NOTRESOLVED_EVENTS_NOTRESOLVED_Pos (0UL) /*!< Position of EVENTS_NOTRESOLVED field. */
#define AAR_EVENTS_NOTRESOLVED_EVENTS_NOTRESOLVED_Msk (0x1UL << AAR_EVENTS_NOTRESOLVED_EVENTS_NOTRESOLVED_Pos) /*!< Bit mask of EVENTS_NOTRESOLVED field. */
#define AAR_EVENTS_NOTRESOLVED_EVENTS_NOTRESOLVED_NotGenerated (0x0UL) /*!< Event not generated */
#define AAR_EVENTS_NOTRESOLVED_EVENTS_NOTRESOLVED_Generated (0x1UL) /*!< Event generated */

/* Register: AAR_PUBLISH_END */
/* Description: Publish configuration for event END */

/* Bit 31 :   */
#define AAR_PUBLISH_END_EN_Pos (31UL) /*!< Position of EN field. */
#define AAR_PUBLISH_END_EN_Msk (0x1UL << AAR_PUBLISH_END_EN_Pos) /*!< Bit mask of EN field. */
#define AAR_PUBLISH_END_EN_Disabled (0x0UL) /*!< Disable publishing */
#define AAR_PUBLISH_END_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event END will publish to */
#define AAR_PUBLISH_END_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define AAR_PUBLISH_END_CHIDX_Msk (0xFFUL << AAR_PUBLISH_END_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: AAR_PUBLISH_RESOLVED */
/* Description: Publish configuration for event RESOLVED */

/* Bit 31 :   */
#define AAR_PUBLISH_RESOLVED_EN_Pos (31UL) /*!< Position of EN field. */
#define AAR_PUBLISH_RESOLVED_EN_Msk (0x1UL << AAR_PUBLISH_RESOLVED_EN_Pos) /*!< Bit mask of EN field. */
#define AAR_PUBLISH_RESOLVED_EN_Disabled (0x0UL) /*!< Disable publishing */
#define AAR_PUBLISH_RESOLVED_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event RESOLVED will publish to */
#define AAR_PUBLISH_RESOLVED_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define AAR_PUBLISH_RESOLVED_CHIDX_Msk (0xFFUL << AAR_PUBLISH_RESOLVED_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: AAR_PUBLISH_NOTRESOLVED */
/* Description: Publish configuration for event NOTRESOLVED */

/* Bit 31 :   */
#define AAR_PUBLISH_NOTRESOLVED_EN_Pos (31UL) /*!< Position of EN field. */
#define AAR_PUBLISH_NOTRESOLVED_EN_Msk (0x1UL << AAR_PUBLISH_NOTRESOLVED_EN_Pos) /*!< Bit mask of EN field. */
#define AAR_PUBLISH_NOTRESOLVED_EN_Disabled (0x0UL) /*!< Disable publishing */
#define AAR_PUBLISH_NOTRESOLVED_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event NOTRESOLVED will publish to */
#define AAR_PUBLISH_NOTRESOLVED_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define AAR_PUBLISH_NOTRESOLVED_CHIDX_Msk (0xFFUL << AAR_PUBLISH_NOTRESOLVED_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: AAR_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 2 : Enable or disable interrupt for event NOTRESOLVED */
#define AAR_INTEN_NOTRESOLVED_Pos (2UL) /*!< Position of NOTRESOLVED field. */
#define AAR_INTEN_NOTRESOLVED_Msk (0x1UL << AAR_INTEN_NOTRESOLVED_Pos) /*!< Bit mask of NOTRESOLVED field. */
#define AAR_INTEN_NOTRESOLVED_Disabled (0x0UL) /*!< Disable */
#define AAR_INTEN_NOTRESOLVED_Enabled (0x1UL) /*!< Enable */

/* Bit 1 : Enable or disable interrupt for event RESOLVED */
#define AAR_INTEN_RESOLVED_Pos (1UL) /*!< Position of RESOLVED field. */
#define AAR_INTEN_RESOLVED_Msk (0x1UL << AAR_INTEN_RESOLVED_Pos) /*!< Bit mask of RESOLVED field. */
#define AAR_INTEN_RESOLVED_Disabled (0x0UL) /*!< Disable */
#define AAR_INTEN_RESOLVED_Enabled (0x1UL) /*!< Enable */

/* Bit 0 : Enable or disable interrupt for event END */
#define AAR_INTEN_END_Pos (0UL) /*!< Position of END field. */
#define AAR_INTEN_END_Msk (0x1UL << AAR_INTEN_END_Pos) /*!< Bit mask of END field. */
#define AAR_INTEN_END_Disabled (0x0UL) /*!< Disable */
#define AAR_INTEN_END_Enabled (0x1UL) /*!< Enable */

/* Register: AAR_INTENSET */
/* Description: Enable interrupt */

/* Bit 2 : Write '1' to enable interrupt for event NOTRESOLVED */
#define AAR_INTENSET_NOTRESOLVED_Pos (2UL) /*!< Position of NOTRESOLVED field. */
#define AAR_INTENSET_NOTRESOLVED_Msk (0x1UL << AAR_INTENSET_NOTRESOLVED_Pos) /*!< Bit mask of NOTRESOLVED field. */
#define AAR_INTENSET_NOTRESOLVED_Disabled (0x0UL) /*!< Read: Disabled */
#define AAR_INTENSET_NOTRESOLVED_Enabled (0x1UL) /*!< Read: Enabled */
#define AAR_INTENSET_NOTRESOLVED_Set (0x1UL) /*!< Enable */

/* Bit 1 : Write '1' to enable interrupt for event RESOLVED */
#define AAR_INTENSET_RESOLVED_Pos (1UL) /*!< Position of RESOLVED field. */
#define AAR_INTENSET_RESOLVED_Msk (0x1UL << AAR_INTENSET_RESOLVED_Pos) /*!< Bit mask of RESOLVED field. */
#define AAR_INTENSET_RESOLVED_Disabled (0x0UL) /*!< Read: Disabled */
#define AAR_INTENSET_RESOLVED_Enabled (0x1UL) /*!< Read: Enabled */
#define AAR_INTENSET_RESOLVED_Set (0x1UL) /*!< Enable */

/* Bit 0 : Write '1' to enable interrupt for event END */
#define AAR_INTENSET_END_Pos (0UL) /*!< Position of END field. */
#define AAR_INTENSET_END_Msk (0x1UL << AAR_INTENSET_END_Pos) /*!< Bit mask of END field. */
#define AAR_INTENSET_END_Disabled (0x0UL) /*!< Read: Disabled */
#define AAR_INTENSET_END_Enabled (0x1UL) /*!< Read: Enabled */
#define AAR_INTENSET_END_Set (0x1UL) /*!< Enable */

/* Register: AAR_INTENCLR */
/* Description: Disable interrupt */

/* Bit 2 : Write '1' to disable interrupt for event NOTRESOLVED */
#define AAR_INTENCLR_NOTRESOLVED_Pos (2UL) /*!< Position of NOTRESOLVED field. */
#define AAR_INTENCLR_NOTRESOLVED_Msk (0x1UL << AAR_INTENCLR_NOTRESOLVED_Pos) /*!< Bit mask of NOTRESOLVED field. */
#define AAR_INTENCLR_NOTRESOLVED_Disabled (0x0UL) /*!< Read: Disabled */
#define AAR_INTENCLR_NOTRESOLVED_Enabled (0x1UL) /*!< Read: Enabled */
#define AAR_INTENCLR_NOTRESOLVED_Clear (0x1UL) /*!< Disable */

/* Bit 1 : Write '1' to disable interrupt for event RESOLVED */
#define AAR_INTENCLR_RESOLVED_Pos (1UL) /*!< Position of RESOLVED field. */
#define AAR_INTENCLR_RESOLVED_Msk (0x1UL << AAR_INTENCLR_RESOLVED_Pos) /*!< Bit mask of RESOLVED field. */
#define AAR_INTENCLR_RESOLVED_Disabled (0x0UL) /*!< Read: Disabled */
#define AAR_INTENCLR_RESOLVED_Enabled (0x1UL) /*!< Read: Enabled */
#define AAR_INTENCLR_RESOLVED_Clear (0x1UL) /*!< Disable */

/* Bit 0 : Write '1' to disable interrupt for event END */
#define AAR_INTENCLR_END_Pos (0UL) /*!< Position of END field. */
#define AAR_INTENCLR_END_Msk (0x1UL << AAR_INTENCLR_END_Pos) /*!< Bit mask of END field. */
#define AAR_INTENCLR_END_Disabled (0x0UL) /*!< Read: Disabled */
#define AAR_INTENCLR_END_Enabled (0x1UL) /*!< Read: Enabled */
#define AAR_INTENCLR_END_Clear (0x1UL) /*!< Disable */

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
#define AAR_ENABLE_ENABLE_Disabled (0x0UL) /*!< Disable */
#define AAR_ENABLE_ENABLE_Enabled (0x3UL) /*!< Enable */

/* Register: AAR_INPTR */
/* Description: Pointer to the AAR data structure */

/* Bits 31..0 : Pointer to the AAR data structure */
#define AAR_INPTR_INPTR_Pos (0UL) /*!< Position of INPTR field. */
#define AAR_INPTR_INPTR_Msk (0xFFFFFFFFUL << AAR_INPTR_INPTR_Pos) /*!< Bit mask of INPTR field. */


/* Peripheral: ANACONF */
/* Description: Analog Trim and Configuration Registers */

/* Register: ANACONF_CPUCTRL */
/* Description: Control signals for CPU */

/* Bit 2 : Sets dapDongleConnected going to the CPU subsystem to 0. This prevents accessing with debugger when CPU is sleeping */
#define ANACONF_CPUCTRL_DAPDONGLECONNECTEDN_Pos (2UL) /*!< Position of DAPDONGLECONNECTEDN field. */
#define ANACONF_CPUCTRL_DAPDONGLECONNECTEDN_Msk (0x1UL << ANACONF_CPUCTRL_DAPDONGLECONNECTEDN_Pos) /*!< Bit mask of DAPDONGLECONNECTEDN field. */

/* Bit 1 : Prevent the CPU From starting, still allows debugging to go through the CPU */
#define ANACONF_CPUCTRL_CPUWAIT_Pos (1UL) /*!< Position of CPUWAIT field. */
#define ANACONF_CPUCTRL_CPUWAIT_Msk (0x1UL << ANACONF_CPUCTRL_CPUWAIT_Pos) /*!< Bit mask of CPUWAIT field. */

/* Bit 0 : Block clock requests */
#define ANACONF_CPUCTRL_HOLD_Pos (0UL) /*!< Position of HOLD field. */
#define ANACONF_CPUCTRL_HOLD_Msk (0x1UL << ANACONF_CPUCTRL_HOLD_Pos) /*!< Bit mask of HOLD field. */

/* Register: ANACONF_RAMCONFIG */
/* Description: Trim for RAM */

/* Bits 6..5 : Margin Adjust: sense-amp timing and wordline pulse width */
#define ANACONF_RAMCONFIG_MA_SAWL_Pos (5UL) /*!< Position of MA_SAWL field. */
#define ANACONF_RAMCONFIG_MA_SAWL_Msk (0x3UL << ANACONF_RAMCONFIG_MA_SAWL_Pos) /*!< Bit mask of MA_SAWL field. */

/* Bits 4..3 : Margin Adjust: Wordline pulse width only */
#define ANACONF_RAMCONFIG_MA_WL_Pos (3UL) /*!< Position of MA_WL field. */
#define ANACONF_RAMCONFIG_MA_WL_Msk (0x3UL << ANACONF_RAMCONFIG_MA_WL_Pos) /*!< Bit mask of MA_WL field. */

/* Bits 2..1 : Margin Adjust: Write assist timings */
#define ANACONF_RAMCONFIG_MA_WRAS_Pos (1UL) /*!< Position of MA_WRAS field. */
#define ANACONF_RAMCONFIG_MA_WRAS_Msk (0x3UL << ANACONF_RAMCONFIG_MA_WRAS_Pos) /*!< Bit mask of MA_WRAS field. */

/* Bit 0 : Margin Adjust: Write assist function disabled */
#define ANACONF_RAMCONFIG_MA_WRASD_Pos (0UL) /*!< Position of MA_WRASD field. */
#define ANACONF_RAMCONFIG_MA_WRASD_Msk (0x1UL << ANACONF_RAMCONFIG_MA_WRASD_Pos) /*!< Bit mask of MA_WRASD field. */

/* Register: ANACONF_ANA_CONFIG_LATCH */
/* Description: Register for latching ANA_CONFIGn on digital island output. */

/* Bit 0 : 0: Transparent, 1: Locked */
#define ANACONF_ANA_CONFIG_LATCH_LOCK_Pos (0UL) /*!< Position of LOCK field. */
#define ANACONF_ANA_CONFIG_LATCH_LOCK_Msk (0x1UL << ANACONF_ANA_CONFIG_LATCH_LOCK_Pos) /*!< Bit mask of LOCK field. */

/* Register: ANACONF_ANA_CONFIG_HVBUCK_SIMO_0 */
/* Description: Control signals for additional analog modules (HVBUCK_SIMO_0) */

/* Bits 22..17 :   */
#define ANACONF_ANA_CONFIG_HVBUCK_SIMO_0_ATE_RET_Pos (17UL) /*!< Position of ATE_RET field. */
#define ANACONF_ANA_CONFIG_HVBUCK_SIMO_0_ATE_RET_Msk (0x3FUL << ANACONF_ANA_CONFIG_HVBUCK_SIMO_0_ATE_RET_Pos) /*!< Bit mask of ATE_RET field. */

/* Bit 16 :   */
#define ANACONF_ANA_CONFIG_HVBUCK_SIMO_0_CAL_EN_RET_Pos (16UL) /*!< Position of CAL_EN_RET field. */
#define ANACONF_ANA_CONFIG_HVBUCK_SIMO_0_CAL_EN_RET_Msk (0x1UL << ANACONF_ANA_CONFIG_HVBUCK_SIMO_0_CAL_EN_RET_Pos) /*!< Bit mask of CAL_EN_RET field. */

/* Bits 15..0 :   */
#define ANACONF_ANA_CONFIG_HVBUCK_SIMO_0_DTE_RET_Pos (0UL) /*!< Position of DTE_RET field. */
#define ANACONF_ANA_CONFIG_HVBUCK_SIMO_0_DTE_RET_Msk (0xFFFFUL << ANACONF_ANA_CONFIG_HVBUCK_SIMO_0_DTE_RET_Pos) /*!< Bit mask of DTE_RET field. */

/* Register: ANACONF_ANA_CONFIG_HVBUCK_SIMO_1 */
/* Description: Control signals for additional analog modules (HVBUCK_SIMO_1) */

/* Bits 24..9 :   */
#define ANACONF_ANA_CONFIG_HVBUCK_SIMO_1_CFG_RET_Pos (9UL) /*!< Position of CFG_RET field. */
#define ANACONF_ANA_CONFIG_HVBUCK_SIMO_1_CFG_RET_Msk (0xFFFFUL << ANACONF_ANA_CONFIG_HVBUCK_SIMO_1_CFG_RET_Pos) /*!< Bit mask of CFG_RET field. */

/* Bit 8 :   */
#define ANACONF_ANA_CONFIG_HVBUCK_SIMO_1_EN_CH1_AO_Pos (8UL) /*!< Position of EN_CH1_AO field. */
#define ANACONF_ANA_CONFIG_HVBUCK_SIMO_1_EN_CH1_AO_Msk (0x1UL << ANACONF_ANA_CONFIG_HVBUCK_SIMO_1_EN_CH1_AO_Pos) /*!< Bit mask of EN_CH1_AO field. */

/* Bit 7 :   */
#define ANACONF_ANA_CONFIG_HVBUCK_SIMO_1_EN_CH2_AO_Pos (7UL) /*!< Position of EN_CH2_AO field. */
#define ANACONF_ANA_CONFIG_HVBUCK_SIMO_1_EN_CH2_AO_Msk (0x1UL << ANACONF_ANA_CONFIG_HVBUCK_SIMO_1_EN_CH2_AO_Pos) /*!< Bit mask of EN_CH2_AO field. */

/* Bit 6 :   */
#define ANACONF_ANA_CONFIG_HVBUCK_SIMO_1_EN_CH3_AO_Pos (6UL) /*!< Position of EN_CH3_AO field. */
#define ANACONF_ANA_CONFIG_HVBUCK_SIMO_1_EN_CH3_AO_Msk (0x1UL << ANACONF_ANA_CONFIG_HVBUCK_SIMO_1_EN_CH3_AO_Pos) /*!< Bit mask of EN_CH3_AO field. */

/* Bits 5..0 :   */
#define ANACONF_ANA_CONFIG_HVBUCK_SIMO_1_FBCTRL_RET_Pos (0UL) /*!< Position of FBCTRL_RET field. */
#define ANACONF_ANA_CONFIG_HVBUCK_SIMO_1_FBCTRL_RET_Msk (0x3FUL << ANACONF_ANA_CONFIG_HVBUCK_SIMO_1_FBCTRL_RET_Pos) /*!< Bit mask of FBCTRL_RET field. */

/* Register: ANACONF_ANA_CONFIG_HVBUCK_SIMO_2 */
/* Description: Control signals for additional analog modules (HVBUCK_SIMO_2) */

/* Bits 26..25 :   */
#define ANACONF_ANA_CONFIG_HVBUCK_SIMO_2_HSILIM_PROG_RET_Pos (25UL) /*!< Position of HSILIM_PROG_RET field. */
#define ANACONF_ANA_CONFIG_HVBUCK_SIMO_2_HSILIM_PROG_RET_Msk (0x3UL << ANACONF_ANA_CONFIG_HVBUCK_SIMO_2_HSILIM_PROG_RET_Pos) /*!< Bit mask of HSILIM_PROG_RET field. */

/* Bits 24..22 :   */
#define ANACONF_ANA_CONFIG_HVBUCK_SIMO_2_HSILIM_TRIM_RET_Pos (22UL) /*!< Position of HSILIM_TRIM_RET field. */
#define ANACONF_ANA_CONFIG_HVBUCK_SIMO_2_HSILIM_TRIM_RET_Msk (0x7UL << ANACONF_ANA_CONFIG_HVBUCK_SIMO_2_HSILIM_TRIM_RET_Pos) /*!< Bit mask of HSILIM_TRIM_RET field. */

/* Bits 21..20 :   */
#define ANACONF_ANA_CONFIG_HVBUCK_SIMO_2_ICMP_TRIM_RET_Pos (20UL) /*!< Position of ICMP_TRIM_RET field. */
#define ANACONF_ANA_CONFIG_HVBUCK_SIMO_2_ICMP_TRIM_RET_Msk (0x3UL << ANACONF_ANA_CONFIG_HVBUCK_SIMO_2_ICMP_TRIM_RET_Pos) /*!< Bit mask of ICMP_TRIM_RET field. */

/* Bits 19..17 :   */
#define ANACONF_ANA_CONFIG_HVBUCK_SIMO_2_MBIAS_IBPP_TRIM_RET_Pos (17UL) /*!< Position of MBIAS_IBPP_TRIM_RET field. */
#define ANACONF_ANA_CONFIG_HVBUCK_SIMO_2_MBIAS_IBPP_TRIM_RET_Msk (0x7UL << ANACONF_ANA_CONFIG_HVBUCK_SIMO_2_MBIAS_IBPP_TRIM_RET_Pos) /*!< Bit mask of MBIAS_IBPP_TRIM_RET field. */

/* Bits 16..12 :   */
#define ANACONF_ANA_CONFIG_HVBUCK_SIMO_2_MBIAS_IBPSR_TRIM_RET_Pos (12UL) /*!< Position of MBIAS_IBPSR_TRIM_RET field. */
#define ANACONF_ANA_CONFIG_HVBUCK_SIMO_2_MBIAS_IBPSR_TRIM_RET_Msk (0x1FUL << ANACONF_ANA_CONFIG_HVBUCK_SIMO_2_MBIAS_IBPSR_TRIM_RET_Pos) /*!< Bit mask of MBIAS_IBPSR_TRIM_RET field. */

/* Bits 11..10 :   */
#define ANACONF_ANA_CONFIG_HVBUCK_SIMO_2_MODE_AO_Pos (10UL) /*!< Position of MODE_AO field. */
#define ANACONF_ANA_CONFIG_HVBUCK_SIMO_2_MODE_AO_Msk (0x3UL << ANACONF_ANA_CONFIG_HVBUCK_SIMO_2_MODE_AO_Pos) /*!< Bit mask of MODE_AO field. */

/* Bits 9..8 :   */
#define ANACONF_ANA_CONFIG_HVBUCK_SIMO_2_PWMPROG_RET_Pos (8UL) /*!< Position of PWMPROG_RET field. */
#define ANACONF_ANA_CONFIG_HVBUCK_SIMO_2_PWMPROG_RET_Msk (0x3UL << ANACONF_ANA_CONFIG_HVBUCK_SIMO_2_PWMPROG_RET_Pos) /*!< Bit mask of PWMPROG_RET field. */

/* Bit 7 :   */
#define ANACONF_ANA_CONFIG_HVBUCK_SIMO_2_PWRUP_AO_Pos (7UL) /*!< Position of PWRUP_AO field. */
#define ANACONF_ANA_CONFIG_HVBUCK_SIMO_2_PWRUP_AO_Msk (0x1UL << ANACONF_ANA_CONFIG_HVBUCK_SIMO_2_PWRUP_AO_Pos) /*!< Bit mask of PWRUP_AO field. */

/* Bits 6..3 :   */
#define ANACONF_ANA_CONFIG_HVBUCK_SIMO_2_TRIM_VDD1V0_HYST_RET_Pos (3UL) /*!< Position of TRIM_VDD1V0_HYST_RET field. */
#define ANACONF_ANA_CONFIG_HVBUCK_SIMO_2_TRIM_VDD1V0_HYST_RET_Msk (0xFUL << ANACONF_ANA_CONFIG_HVBUCK_SIMO_2_TRIM_VDD1V0_HYST_RET_Pos) /*!< Bit mask of TRIM_VDD1V0_HYST_RET field. */

/* Bits 2..0 :   */
#define ANACONF_ANA_CONFIG_HVBUCK_SIMO_2_TRIM_VDD1V0_PWM_RET_Pos (0UL) /*!< Position of TRIM_VDD1V0_PWM_RET field. */
#define ANACONF_ANA_CONFIG_HVBUCK_SIMO_2_TRIM_VDD1V0_PWM_RET_Msk (0x7UL << ANACONF_ANA_CONFIG_HVBUCK_SIMO_2_TRIM_VDD1V0_PWM_RET_Pos) /*!< Bit mask of TRIM_VDD1V0_PWM_RET field. */

/* Register: ANACONF_ANA_CONFIG_HVBUCK_SIMO_3 */
/* Description: Control signals for additional analog modules (HVBUCK_SIMO_3) */

/* Bits 31..28 :   */
#define ANACONF_ANA_CONFIG_HVBUCK_SIMO_3_TRIM_VDD1V8_HYST_RET_Pos (28UL) /*!< Position of TRIM_VDD1V8_HYST_RET field. */
#define ANACONF_ANA_CONFIG_HVBUCK_SIMO_3_TRIM_VDD1V8_HYST_RET_Msk (0xFUL << ANACONF_ANA_CONFIG_HVBUCK_SIMO_3_TRIM_VDD1V8_HYST_RET_Pos) /*!< Bit mask of TRIM_VDD1V8_HYST_RET field. */

/* Bits 27..25 :   */
#define ANACONF_ANA_CONFIG_HVBUCK_SIMO_3_TRIM_VDD1V8_PWM_RET_Pos (25UL) /*!< Position of TRIM_VDD1V8_PWM_RET field. */
#define ANACONF_ANA_CONFIG_HVBUCK_SIMO_3_TRIM_VDD1V8_PWM_RET_Msk (0x7UL << ANACONF_ANA_CONFIG_HVBUCK_SIMO_3_TRIM_VDD1V8_PWM_RET_Pos) /*!< Bit mask of TRIM_VDD1V8_PWM_RET field. */

/* Bits 24..21 :   */
#define ANACONF_ANA_CONFIG_HVBUCK_SIMO_3_VDD0V8_TRIM_HYST_RET_Pos (21UL) /*!< Position of VDD0V8_TRIM_HYST_RET field. */
#define ANACONF_ANA_CONFIG_HVBUCK_SIMO_3_VDD0V8_TRIM_HYST_RET_Msk (0xFUL << ANACONF_ANA_CONFIG_HVBUCK_SIMO_3_VDD0V8_TRIM_HYST_RET_Pos) /*!< Bit mask of VDD0V8_TRIM_HYST_RET field. */

/* Bits 20..18 :   */
#define ANACONF_ANA_CONFIG_HVBUCK_SIMO_3_VDD0V8_TRIM_PWM_RET_Pos (18UL) /*!< Position of VDD0V8_TRIM_PWM_RET field. */
#define ANACONF_ANA_CONFIG_HVBUCK_SIMO_3_VDD0V8_TRIM_PWM_RET_Msk (0x7UL << ANACONF_ANA_CONFIG_HVBUCK_SIMO_3_VDD0V8_TRIM_PWM_RET_Pos) /*!< Bit mask of VDD0V8_TRIM_PWM_RET field. */

/* Bits 17..12 :   */
#define ANACONF_ANA_CONFIG_HVBUCK_SIMO_3_VDD0V8_VOLT_RET_Pos (12UL) /*!< Position of VDD0V8_VOLT_RET field. */
#define ANACONF_ANA_CONFIG_HVBUCK_SIMO_3_VDD0V8_VOLT_RET_Msk (0x3FUL << ANACONF_ANA_CONFIG_HVBUCK_SIMO_3_VDD0V8_VOLT_RET_Pos) /*!< Bit mask of VDD0V8_VOLT_RET field. */

/* Bits 11..6 :   */
#define ANACONF_ANA_CONFIG_HVBUCK_SIMO_3_VOLT_HP_VDD1V0_RET_Pos (6UL) /*!< Position of VOLT_HP_VDD1V0_RET field. */
#define ANACONF_ANA_CONFIG_HVBUCK_SIMO_3_VOLT_HP_VDD1V0_RET_Msk (0x3FUL << ANACONF_ANA_CONFIG_HVBUCK_SIMO_3_VOLT_HP_VDD1V0_RET_Pos) /*!< Bit mask of VOLT_HP_VDD1V0_RET field. */

/* Bits 5..0 :   */
#define ANACONF_ANA_CONFIG_HVBUCK_SIMO_3_VOLT_LP_VDD1V0_RET_Pos (0UL) /*!< Position of VOLT_LP_VDD1V0_RET field. */
#define ANACONF_ANA_CONFIG_HVBUCK_SIMO_3_VOLT_LP_VDD1V0_RET_Msk (0x3FUL << ANACONF_ANA_CONFIG_HVBUCK_SIMO_3_VOLT_LP_VDD1V0_RET_Pos) /*!< Bit mask of VOLT_LP_VDD1V0_RET field. */

/* Register: ANACONF_ANA_CONFIG_HVBUCK_SIMO_4 */
/* Description: Control signals for additional analog modules (HVBUCK_SIMO_4) */

/* Bits 26..24 :   */
#define ANACONF_ANA_CONFIG_HVBUCK_SIMO_4_VOLT_LP_VDD1V8_RET_Pos (24UL) /*!< Position of VOLT_LP_VDD1V8_RET field. */
#define ANACONF_ANA_CONFIG_HVBUCK_SIMO_4_VOLT_LP_VDD1V8_RET_Msk (0x7UL << ANACONF_ANA_CONFIG_HVBUCK_SIMO_4_VOLT_LP_VDD1V8_RET_Pos) /*!< Bit mask of VOLT_LP_VDD1V8_RET field. */

/* Bits 23..21 :   */
#define ANACONF_ANA_CONFIG_HVBUCK_SIMO_4_VOLT_VDD1V8_RET_Pos (21UL) /*!< Position of VOLT_VDD1V8_RET field. */
#define ANACONF_ANA_CONFIG_HVBUCK_SIMO_4_VOLT_VDD1V8_RET_Msk (0x7UL << ANACONF_ANA_CONFIG_HVBUCK_SIMO_4_VOLT_VDD1V8_RET_Pos) /*!< Bit mask of VOLT_VDD1V8_RET field. */

/* Bits 20..17 :   */
#define ANACONF_ANA_CONFIG_HVBUCK_SIMO_4_ZCROSS_TRIM_RET_Pos (17UL) /*!< Position of ZCROSS_TRIM_RET field. */
#define ANACONF_ANA_CONFIG_HVBUCK_SIMO_4_ZCROSS_TRIM_RET_Msk (0xFUL << ANACONF_ANA_CONFIG_HVBUCK_SIMO_4_ZCROSS_TRIM_RET_Pos) /*!< Bit mask of ZCROSS_TRIM_RET field. */

/* Bit 16 :   */
#define ANACONF_ANA_CONFIG_HVBUCK_SIMO_4_RETAIN_AO_Pos (16UL) /*!< Position of RETAIN_AO field. */
#define ANACONF_ANA_CONFIG_HVBUCK_SIMO_4_RETAIN_AO_Msk (0x1UL << ANACONF_ANA_CONFIG_HVBUCK_SIMO_4_RETAIN_AO_Pos) /*!< Bit mask of RETAIN_AO field. */

/* Bits 15..0 :   */
#define ANACONF_ANA_CONFIG_HVBUCK_SIMO_4_TCFG_HVBUCK_SIMO_RET_Pos (0UL) /*!< Position of TCFG_HVBUCK_SIMO_RET field. */
#define ANACONF_ANA_CONFIG_HVBUCK_SIMO_4_TCFG_HVBUCK_SIMO_RET_Msk (0xFFFFUL << ANACONF_ANA_CONFIG_HVBUCK_SIMO_4_TCFG_HVBUCK_SIMO_RET_Pos) /*!< Bit mask of TCFG_HVBUCK_SIMO_RET field. */

/* Register: ANACONF_ANA_CONFIG_LDO_1V8_1V0_50MA_0 */
/* Description: Control signals for additional analog modules (LDO_1V8_1V0_50MA_0) */

/* Bits 11..9 :   */
#define ANACONF_ANA_CONFIG_LDO_1V8_1V0_50MA_0_ATE_RET_Pos (9UL) /*!< Position of ATE_RET field. */
#define ANACONF_ANA_CONFIG_LDO_1V8_1V0_50MA_0_ATE_RET_Msk (0x7UL << ANACONF_ANA_CONFIG_LDO_1V8_1V0_50MA_0_ATE_RET_Pos) /*!< Bit mask of ATE_RET field. */

/* Bit 8 :   */
#define ANACONF_ANA_CONFIG_LDO_1V8_1V0_50MA_0_CAL_EN_RET_Pos (8UL) /*!< Position of CAL_EN_RET field. */
#define ANACONF_ANA_CONFIG_LDO_1V8_1V0_50MA_0_CAL_EN_RET_Msk (0x1UL << ANACONF_ANA_CONFIG_LDO_1V8_1V0_50MA_0_CAL_EN_RET_Pos) /*!< Bit mask of CAL_EN_RET field. */

/* Bits 7..4 :   */
#define ANACONF_ANA_CONFIG_LDO_1V8_1V0_50MA_0_CFG_RET_Pos (4UL) /*!< Position of CFG_RET field. */
#define ANACONF_ANA_CONFIG_LDO_1V8_1V0_50MA_0_CFG_RET_Msk (0xFUL << ANACONF_ANA_CONFIG_LDO_1V8_1V0_50MA_0_CFG_RET_Pos) /*!< Bit mask of CFG_RET field. */

/* Bits 3..0 :   */
#define ANACONF_ANA_CONFIG_LDO_1V8_1V0_50MA_0_TRIM_HP_RET_Pos (0UL) /*!< Position of TRIM_HP_RET field. */
#define ANACONF_ANA_CONFIG_LDO_1V8_1V0_50MA_0_TRIM_HP_RET_Msk (0xFUL << ANACONF_ANA_CONFIG_LDO_1V8_1V0_50MA_0_TRIM_HP_RET_Pos) /*!< Bit mask of TRIM_HP_RET field. */

/* Register: ANACONF_ANA_CONFIG_LDO_1V8_1V0_50MA_1 */
/* Description: Control signals for additional analog modules (LDO_1V8_1V0_50MA_1) */

/* Bits 31..28 :   */
#define ANACONF_ANA_CONFIG_LDO_1V8_1V0_50MA_1_TRIM_LP_RET_Pos (28UL) /*!< Position of TRIM_LP_RET field. */
#define ANACONF_ANA_CONFIG_LDO_1V8_1V0_50MA_1_TRIM_LP_RET_Msk (0xFUL << ANACONF_ANA_CONFIG_LDO_1V8_1V0_50MA_1_TRIM_LP_RET_Pos) /*!< Bit mask of TRIM_LP_RET field. */

/* Bits 27..21 :   */
#define ANACONF_ANA_CONFIG_LDO_1V8_1V0_50MA_1_TRIM_VREF_RET_Pos (21UL) /*!< Position of TRIM_VREF_RET field. */
#define ANACONF_ANA_CONFIG_LDO_1V8_1V0_50MA_1_TRIM_VREF_RET_Msk (0x7FUL << ANACONF_ANA_CONFIG_LDO_1V8_1V0_50MA_1_TRIM_VREF_RET_Pos) /*!< Bit mask of TRIM_VREF_RET field. */

/* Bits 20..15 :   */
#define ANACONF_ANA_CONFIG_LDO_1V8_1V0_50MA_1_VOLT_HP_RET_Pos (15UL) /*!< Position of VOLT_HP_RET field. */
#define ANACONF_ANA_CONFIG_LDO_1V8_1V0_50MA_1_VOLT_HP_RET_Msk (0x3FUL << ANACONF_ANA_CONFIG_LDO_1V8_1V0_50MA_1_VOLT_HP_RET_Pos) /*!< Bit mask of VOLT_HP_RET field. */

/* Bits 14..9 :   */
#define ANACONF_ANA_CONFIG_LDO_1V8_1V0_50MA_1_VOLT_LP_RET_Pos (9UL) /*!< Position of VOLT_LP_RET field. */
#define ANACONF_ANA_CONFIG_LDO_1V8_1V0_50MA_1_VOLT_LP_RET_Msk (0x3FUL << ANACONF_ANA_CONFIG_LDO_1V8_1V0_50MA_1_VOLT_LP_RET_Pos) /*!< Bit mask of VOLT_LP_RET field. */

/* Bits 8..7 :   */
#define ANACONF_ANA_CONFIG_LDO_1V8_1V0_50MA_1_MODE_AO_Pos (7UL) /*!< Position of MODE_AO field. */
#define ANACONF_ANA_CONFIG_LDO_1V8_1V0_50MA_1_MODE_AO_Msk (0x3UL << ANACONF_ANA_CONFIG_LDO_1V8_1V0_50MA_1_MODE_AO_Pos) /*!< Bit mask of MODE_AO field. */

/* Bit 6 :   */
#define ANACONF_ANA_CONFIG_LDO_1V8_1V0_50MA_1_PWRUP_AO_Pos (6UL) /*!< Position of PWRUP_AO field. */
#define ANACONF_ANA_CONFIG_LDO_1V8_1V0_50MA_1_PWRUP_AO_Msk (0x1UL << ANACONF_ANA_CONFIG_LDO_1V8_1V0_50MA_1_PWRUP_AO_Pos) /*!< Bit mask of PWRUP_AO field. */

/* Bit 5 :   */
#define ANACONF_ANA_CONFIG_LDO_1V8_1V0_50MA_1_RETAIN_AO_Pos (5UL) /*!< Position of RETAIN_AO field. */
#define ANACONF_ANA_CONFIG_LDO_1V8_1V0_50MA_1_RETAIN_AO_Msk (0x1UL << ANACONF_ANA_CONFIG_LDO_1V8_1V0_50MA_1_RETAIN_AO_Pos) /*!< Bit mask of RETAIN_AO field. */

/* Bits 4..0 :   */
#define ANACONF_ANA_CONFIG_LDO_1V8_1V0_50MA_1_TCFG_RET_Pos (0UL) /*!< Position of TCFG_RET field. */
#define ANACONF_ANA_CONFIG_LDO_1V8_1V0_50MA_1_TCFG_RET_Msk (0x1FUL << ANACONF_ANA_CONFIG_LDO_1V8_1V0_50MA_1_TCFG_RET_Pos) /*!< Bit mask of TCFG_RET field. */

/* Register: ANACONF_ANA_P_NFC */
/* Description: Control signals for additional analog modules (P_NFC) */

/* Bit 31 :   */
#define ANACONF_ANA_P_NFC_EN_CLAMP1V6_AO_Pos (31UL) /*!< Position of EN_CLAMP1V6_AO field. */
#define ANACONF_ANA_P_NFC_EN_CLAMP1V6_AO_Msk (0x1UL << ANACONF_ANA_P_NFC_EN_CLAMP1V6_AO_Pos) /*!< Bit mask of EN_CLAMP1V6_AO field. */

/* Bit 30 :   */
#define ANACONF_ANA_P_NFC_EN_CLAMP2V6_AO_Pos (30UL) /*!< Position of EN_CLAMP2V6_AO field. */
#define ANACONF_ANA_P_NFC_EN_CLAMP2V6_AO_Msk (0x1UL << ANACONF_ANA_P_NFC_EN_CLAMP2V6_AO_Pos) /*!< Bit mask of EN_CLAMP2V6_AO field. */

/* Bit 29 :   */
#define ANACONF_ANA_P_NFC_PWRUP_AO_Pos (29UL) /*!< Position of PWRUP_AO field. */
#define ANACONF_ANA_P_NFC_PWRUP_AO_Msk (0x1UL << ANACONF_ANA_P_NFC_PWRUP_AO_Pos) /*!< Bit mask of PWRUP_AO field. */

/* Bits 28..1 :   */
#define ANACONF_ANA_P_NFC_CFG_RET_Pos (1UL) /*!< Position of CFG_RET field. */
#define ANACONF_ANA_P_NFC_CFG_RET_Msk (0xFFFFFFFUL << ANACONF_ANA_P_NFC_CFG_RET_Pos) /*!< Bit mask of CFG_RET field. */

/* Bit 0 :   */
#define ANACONF_ANA_P_NFC_RETAIN_AO_Pos (0UL) /*!< Position of RETAIN_AO field. */
#define ANACONF_ANA_P_NFC_RETAIN_AO_Msk (0x1UL << ANACONF_ANA_P_NFC_RETAIN_AO_Pos) /*!< Bit mask of RETAIN_AO field. */

/* Register: ANACONF_ANA_CONFIG_LDO_1V0_0V8_30MA_0 */
/* Description: Control signals for additional analog modules (LDO_1V0_0V8_30MA_0) */

/* Bits 29..27 :   */
#define ANACONF_ANA_CONFIG_LDO_1V0_0V8_30MA_0_ATB0CFG_RET_Pos (27UL) /*!< Position of ATB0CFG_RET field. */
#define ANACONF_ANA_CONFIG_LDO_1V0_0V8_30MA_0_ATB0CFG_RET_Msk (0x7UL << ANACONF_ANA_CONFIG_LDO_1V0_0V8_30MA_0_ATB0CFG_RET_Pos) /*!< Bit mask of ATB0CFG_RET field. */

/* Bits 26..24 :   */
#define ANACONF_ANA_CONFIG_LDO_1V0_0V8_30MA_0_ATB1CFG_RET_Pos (24UL) /*!< Position of ATB1CFG_RET field. */
#define ANACONF_ANA_CONFIG_LDO_1V0_0V8_30MA_0_ATB1CFG_RET_Msk (0x7UL << ANACONF_ANA_CONFIG_LDO_1V0_0V8_30MA_0_ATB1CFG_RET_Pos) /*!< Bit mask of ATB1CFG_RET field. */

/* Bit 23 :   */
#define ANACONF_ANA_CONFIG_LDO_1V0_0V8_30MA_0_CAL_EN_RET_Pos (23UL) /*!< Position of CAL_EN_RET field. */
#define ANACONF_ANA_CONFIG_LDO_1V0_0V8_30MA_0_CAL_EN_RET_Msk (0x1UL << ANACONF_ANA_CONFIG_LDO_1V0_0V8_30MA_0_CAL_EN_RET_Pos) /*!< Bit mask of CAL_EN_RET field. */

/* Bits 22..20 :   */
#define ANACONF_ANA_CONFIG_LDO_1V0_0V8_30MA_0_DTB0CFG_RET_Pos (20UL) /*!< Position of DTB0CFG_RET field. */
#define ANACONF_ANA_CONFIG_LDO_1V0_0V8_30MA_0_DTB0CFG_RET_Msk (0x7UL << ANACONF_ANA_CONFIG_LDO_1V0_0V8_30MA_0_DTB0CFG_RET_Pos) /*!< Bit mask of DTB0CFG_RET field. */

/* Bits 19..17 :   */
#define ANACONF_ANA_CONFIG_LDO_1V0_0V8_30MA_0_DTB1CFG_RET_Pos (17UL) /*!< Position of DTB1CFG_RET field. */
#define ANACONF_ANA_CONFIG_LDO_1V0_0V8_30MA_0_DTB1CFG_RET_Msk (0x7UL << ANACONF_ANA_CONFIG_LDO_1V0_0V8_30MA_0_DTB1CFG_RET_Pos) /*!< Bit mask of DTB1CFG_RET field. */

/* Bits 16..14 :   */
#define ANACONF_ANA_CONFIG_LDO_1V0_0V8_30MA_0_DTB2CFG_RET_Pos (14UL) /*!< Position of DTB2CFG_RET field. */
#define ANACONF_ANA_CONFIG_LDO_1V0_0V8_30MA_0_DTB2CFG_RET_Msk (0x7UL << ANACONF_ANA_CONFIG_LDO_1V0_0V8_30MA_0_DTB2CFG_RET_Pos) /*!< Bit mask of DTB2CFG_RET field. */

/* Bits 13..8 :   */
#define ANACONF_ANA_CONFIG_LDO_1V0_0V8_30MA_0_CFG_RET_Pos (8UL) /*!< Position of CFG_RET field. */
#define ANACONF_ANA_CONFIG_LDO_1V0_0V8_30MA_0_CFG_RET_Msk (0x3FUL << ANACONF_ANA_CONFIG_LDO_1V0_0V8_30MA_0_CFG_RET_Pos) /*!< Bit mask of CFG_RET field. */

/* Bits 7..4 :   */
#define ANACONF_ANA_CONFIG_LDO_1V0_0V8_30MA_0_TRIM_BPDET_RET_Pos (4UL) /*!< Position of TRIM_BPDET_RET field. */
#define ANACONF_ANA_CONFIG_LDO_1V0_0V8_30MA_0_TRIM_BPDET_RET_Msk (0xFUL << ANACONF_ANA_CONFIG_LDO_1V0_0V8_30MA_0_TRIM_BPDET_RET_Pos) /*!< Bit mask of TRIM_BPDET_RET field. */

/* Bits 3..0 :   */
#define ANACONF_ANA_CONFIG_LDO_1V0_0V8_30MA_0_TRIM_HP_RET_Pos (0UL) /*!< Position of TRIM_HP_RET field. */
#define ANACONF_ANA_CONFIG_LDO_1V0_0V8_30MA_0_TRIM_HP_RET_Msk (0xFUL << ANACONF_ANA_CONFIG_LDO_1V0_0V8_30MA_0_TRIM_HP_RET_Pos) /*!< Bit mask of TRIM_HP_RET field. */

/* Register: ANACONF_ANA_CONFIG_LDO_1V0_0V8_30MA_1 */
/* Description: Control signals for additional analog modules (LDO_1V0_0V8_30MA_1) */

/* Bits 28..22 :   */
#define ANACONF_ANA_CONFIG_LDO_1V0_0V8_30MA_1_TRIM_IBPSR_RET_Pos (22UL) /*!< Position of TRIM_IBPSR_RET field. */
#define ANACONF_ANA_CONFIG_LDO_1V0_0V8_30MA_1_TRIM_IBPSR_RET_Msk (0x7FUL << ANACONF_ANA_CONFIG_LDO_1V0_0V8_30MA_1_TRIM_IBPSR_RET_Pos) /*!< Bit mask of TRIM_IBPSR_RET field. */

/* Bits 21..18 :   */
#define ANACONF_ANA_CONFIG_LDO_1V0_0V8_30MA_1_TRIM_LP_RET_Pos (18UL) /*!< Position of TRIM_LP_RET field. */
#define ANACONF_ANA_CONFIG_LDO_1V0_0V8_30MA_1_TRIM_LP_RET_Msk (0xFUL << ANACONF_ANA_CONFIG_LDO_1V0_0V8_30MA_1_TRIM_LP_RET_Pos) /*!< Bit mask of TRIM_LP_RET field. */

/* Bits 17..16 :   */
#define ANACONF_ANA_CONFIG_LDO_1V0_0V8_30MA_1_TRIM_ULPR_RET_Pos (16UL) /*!< Position of TRIM_ULPR_RET field. */
#define ANACONF_ANA_CONFIG_LDO_1V0_0V8_30MA_1_TRIM_ULPR_RET_Msk (0x3UL << ANACONF_ANA_CONFIG_LDO_1V0_0V8_30MA_1_TRIM_ULPR_RET_Pos) /*!< Bit mask of TRIM_ULPR_RET field. */

/* Bits 15..13 :   */
#define ANACONF_ANA_CONFIG_LDO_1V0_0V8_30MA_1_VOLT_RET_Pos (13UL) /*!< Position of VOLT_RET field. */
#define ANACONF_ANA_CONFIG_LDO_1V0_0V8_30MA_1_VOLT_RET_Msk (0x7UL << ANACONF_ANA_CONFIG_LDO_1V0_0V8_30MA_1_VOLT_RET_Pos) /*!< Bit mask of VOLT_RET field. */

/* Bit 12 :   */
#define ANACONF_ANA_CONFIG_LDO_1V0_0V8_30MA_1_MODE_BP_AO_Pos (12UL) /*!< Position of MODE_BP_AO field. */
#define ANACONF_ANA_CONFIG_LDO_1V0_0V8_30MA_1_MODE_BP_AO_Msk (0x1UL << ANACONF_ANA_CONFIG_LDO_1V0_0V8_30MA_1_MODE_BP_AO_Pos) /*!< Bit mask of MODE_BP_AO field. */

/* Bit 11 :   */
#define ANACONF_ANA_CONFIG_LDO_1V0_0V8_30MA_1_MODE_LP_AO_Pos (11UL) /*!< Position of MODE_LP_AO field. */
#define ANACONF_ANA_CONFIG_LDO_1V0_0V8_30MA_1_MODE_LP_AO_Msk (0x1UL << ANACONF_ANA_CONFIG_LDO_1V0_0V8_30MA_1_MODE_LP_AO_Pos) /*!< Bit mask of MODE_LP_AO field. */

/* Bit 10 :   */
#define ANACONF_ANA_CONFIG_LDO_1V0_0V8_30MA_1_MODE_ULPR_AO_Pos (10UL) /*!< Position of MODE_ULPR_AO field. */
#define ANACONF_ANA_CONFIG_LDO_1V0_0V8_30MA_1_MODE_ULPR_AO_Msk (0x1UL << ANACONF_ANA_CONFIG_LDO_1V0_0V8_30MA_1_MODE_ULPR_AO_Pos) /*!< Bit mask of MODE_ULPR_AO field. */

/* Bit 9 :   */
#define ANACONF_ANA_CONFIG_LDO_1V0_0V8_30MA_1_PWRUP_AO_Pos (9UL) /*!< Position of PWRUP_AO field. */
#define ANACONF_ANA_CONFIG_LDO_1V0_0V8_30MA_1_PWRUP_AO_Msk (0x1UL << ANACONF_ANA_CONFIG_LDO_1V0_0V8_30MA_1_PWRUP_AO_Pos) /*!< Bit mask of PWRUP_AO field. */

/* Bit 8 :   */
#define ANACONF_ANA_CONFIG_LDO_1V0_0V8_30MA_1_RETAIN_AO_Pos (8UL) /*!< Position of RETAIN_AO field. */
#define ANACONF_ANA_CONFIG_LDO_1V0_0V8_30MA_1_RETAIN_AO_Msk (0x1UL << ANACONF_ANA_CONFIG_LDO_1V0_0V8_30MA_1_RETAIN_AO_Pos) /*!< Bit mask of RETAIN_AO field. */

/* Bits 7..0 :   */
#define ANACONF_ANA_CONFIG_LDO_1V0_0V8_30MA_1_TCFG_RET_Pos (0UL) /*!< Position of TCFG_RET field. */
#define ANACONF_ANA_CONFIG_LDO_1V0_0V8_30MA_1_TCFG_RET_Msk (0xFFUL << ANACONF_ANA_CONFIG_LDO_1V0_0V8_30MA_1_TCFG_RET_Pos) /*!< Bit mask of TCFG_RET field. */

/* Register: ANACONF_ANA_CONFIG_LDO_5V0_1V8_SU */
/* Description: Control signals for additional analog modules (LDO_5V0_1V8_SU) */

/* Bit 1 :   */
#define ANACONF_ANA_CONFIG_LDO_5V0_1V8_SU_ATE_LDO_SU_Pos (1UL) /*!< Position of ATE_LDO_SU field. */
#define ANACONF_ANA_CONFIG_LDO_5V0_1V8_SU_ATE_LDO_SU_Msk (0x1UL << ANACONF_ANA_CONFIG_LDO_5V0_1V8_SU_ATE_LDO_SU_Pos) /*!< Bit mask of ATE_LDO_SU field. */

/* Bit 0 :   */
#define ANACONF_ANA_CONFIG_LDO_5V0_1V8_SU_PWRUP_AO_Pos (0UL) /*!< Position of PWRUP_AO field. */
#define ANACONF_ANA_CONFIG_LDO_5V0_1V8_SU_PWRUP_AO_Msk (0x1UL << ANACONF_ANA_CONFIG_LDO_5V0_1V8_SU_PWRUP_AO_Pos) /*!< Bit mask of PWRUP_AO field. */

/* Register: ANACONF_ANA_CONFIG_LFRC32K */
/* Description: Control signals for additional analog modules (LFRC32K) */

/* Bit 14 :   */
#define ANACONF_ANA_CONFIG_LFRC32K_ATE_RET_Pos (14UL) /*!< Position of ATE_RET field. */
#define ANACONF_ANA_CONFIG_LFRC32K_ATE_RET_Msk (0x1UL << ANACONF_ANA_CONFIG_LFRC32K_ATE_RET_Pos) /*!< Bit mask of ATE_RET field. */

/* Bit 13 :   */
#define ANACONF_ANA_CONFIG_LFRC32K_CAL_RET_Pos (13UL) /*!< Position of CAL_RET field. */
#define ANACONF_ANA_CONFIG_LFRC32K_CAL_RET_Msk (0x1UL << ANACONF_ANA_CONFIG_LFRC32K_CAL_RET_Pos) /*!< Bit mask of CAL_RET field. */

/* Bits 12..9 :   */
#define ANACONF_ANA_CONFIG_LFRC32K_CFG_RET_Pos (9UL) /*!< Position of CFG_RET field. */
#define ANACONF_ANA_CONFIG_LFRC32K_CFG_RET_Msk (0xFUL << ANACONF_ANA_CONFIG_LFRC32K_CFG_RET_Pos) /*!< Bit mask of CFG_RET field. */

/* Bit 8 :   */
#define ANACONF_ANA_CONFIG_LFRC32K_SYNC_RET_Pos (8UL) /*!< Position of SYNC_RET field. */
#define ANACONF_ANA_CONFIG_LFRC32K_SYNC_RET_Msk (0x1UL << ANACONF_ANA_CONFIG_LFRC32K_SYNC_RET_Pos) /*!< Bit mask of SYNC_RET field. */

/* Bits 7..2 :   */
#define ANACONF_ANA_CONFIG_LFRC32K_TRIM_RET_Pos (2UL) /*!< Position of TRIM_RET field. */
#define ANACONF_ANA_CONFIG_LFRC32K_TRIM_RET_Msk (0x3FUL << ANACONF_ANA_CONFIG_LFRC32K_TRIM_RET_Pos) /*!< Bit mask of TRIM_RET field. */

/* Bit 1 :   */
#define ANACONF_ANA_CONFIG_LFRC32K_PWRUP_AO_Pos (1UL) /*!< Position of PWRUP_AO field. */
#define ANACONF_ANA_CONFIG_LFRC32K_PWRUP_AO_Msk (0x1UL << ANACONF_ANA_CONFIG_LFRC32K_PWRUP_AO_Pos) /*!< Bit mask of PWRUP_AO field. */

/* Bit 0 :   */
#define ANACONF_ANA_CONFIG_LFRC32K_RETAIN_AO_Pos (0UL) /*!< Position of RETAIN_AO field. */
#define ANACONF_ANA_CONFIG_LFRC32K_RETAIN_AO_Msk (0x1UL << ANACONF_ANA_CONFIG_LFRC32K_RETAIN_AO_Pos) /*!< Bit mask of RETAIN_AO field. */

/* Register: ANACONF_ANA_CONFIG_VDET_AO_1V8 */
/* Description: Control signals for additional analog modules (VDET_AO_1V8) */

/* Bits 31..29 :   */
#define ANACONF_ANA_CONFIG_VDET_AO_1V8_ATB0CFG_RET_Pos (29UL) /*!< Position of ATB0CFG_RET field. */
#define ANACONF_ANA_CONFIG_VDET_AO_1V8_ATB0CFG_RET_Msk (0x7UL << ANACONF_ANA_CONFIG_VDET_AO_1V8_ATB0CFG_RET_Pos) /*!< Bit mask of ATB0CFG_RET field. */

/* Bits 28..26 :   */
#define ANACONF_ANA_CONFIG_VDET_AO_1V8_ATB1CFG_RET_Pos (26UL) /*!< Position of ATB1CFG_RET field. */
#define ANACONF_ANA_CONFIG_VDET_AO_1V8_ATB1CFG_RET_Msk (0x7UL << ANACONF_ANA_CONFIG_VDET_AO_1V8_ATB1CFG_RET_Pos) /*!< Bit mask of ATB1CFG_RET field. */

/* Bits 25..23 :   */
#define ANACONF_ANA_CONFIG_VDET_AO_1V8_DTB0CFG_RET_Pos (23UL) /*!< Position of DTB0CFG_RET field. */
#define ANACONF_ANA_CONFIG_VDET_AO_1V8_DTB0CFG_RET_Msk (0x7UL << ANACONF_ANA_CONFIG_VDET_AO_1V8_DTB0CFG_RET_Pos) /*!< Bit mask of DTB0CFG_RET field. */

/* Bits 22..20 :   */
#define ANACONF_ANA_CONFIG_VDET_AO_1V8_DTB1CFG_RET_Pos (20UL) /*!< Position of DTB1CFG_RET field. */
#define ANACONF_ANA_CONFIG_VDET_AO_1V8_DTB1CFG_RET_Msk (0x7UL << ANACONF_ANA_CONFIG_VDET_AO_1V8_DTB1CFG_RET_Pos) /*!< Bit mask of DTB1CFG_RET field. */

/* Bit 19 :   */
#define ANACONF_ANA_CONFIG_VDET_AO_1V8_MODE_LP_AO_Pos (19UL) /*!< Position of MODE_LP_AO field. */
#define ANACONF_ANA_CONFIG_VDET_AO_1V8_MODE_LP_AO_Msk (0x1UL << ANACONF_ANA_CONFIG_VDET_AO_1V8_MODE_LP_AO_Pos) /*!< Bit mask of MODE_LP_AO field. */

/* Bit 18 :   */
#define ANACONF_ANA_CONFIG_VDET_AO_1V8_MODE_ULPR_AO_Pos (18UL) /*!< Position of MODE_ULPR_AO field. */
#define ANACONF_ANA_CONFIG_VDET_AO_1V8_MODE_ULPR_AO_Msk (0x1UL << ANACONF_ANA_CONFIG_VDET_AO_1V8_MODE_ULPR_AO_Pos) /*!< Bit mask of MODE_ULPR_AO field. */

/* Bit 17 :   */
#define ANACONF_ANA_CONFIG_VDET_AO_1V8_PWRUP_AO_Pos (17UL) /*!< Position of PWRUP_AO field. */
#define ANACONF_ANA_CONFIG_VDET_AO_1V8_PWRUP_AO_Msk (0x1UL << ANACONF_ANA_CONFIG_VDET_AO_1V8_PWRUP_AO_Pos) /*!< Bit mask of PWRUP_AO field. */

/* Bit 16 :   */
#define ANACONF_ANA_CONFIG_VDET_AO_1V8_RETAIN_AO_Pos (16UL) /*!< Position of RETAIN_AO field. */
#define ANACONF_ANA_CONFIG_VDET_AO_1V8_RETAIN_AO_Msk (0x1UL << ANACONF_ANA_CONFIG_VDET_AO_1V8_RETAIN_AO_Pos) /*!< Bit mask of RETAIN_AO field. */

/* Bits 15..9 :   */
#define ANACONF_ANA_CONFIG_VDET_AO_1V8_TCFG_RET_Pos (9UL) /*!< Position of TCFG_RET field. */
#define ANACONF_ANA_CONFIG_VDET_AO_1V8_TCFG_RET_Msk (0x7FUL << ANACONF_ANA_CONFIG_VDET_AO_1V8_TCFG_RET_Pos) /*!< Bit mask of TCFG_RET field. */

/* Bits 8..6 :   */
#define ANACONF_ANA_CONFIG_VDET_AO_1V8_BODH_TRIM_RET_Pos (6UL) /*!< Position of BODH_TRIM_RET field. */
#define ANACONF_ANA_CONFIG_VDET_AO_1V8_BODH_TRIM_RET_Msk (0x7UL << ANACONF_ANA_CONFIG_VDET_AO_1V8_BODH_TRIM_RET_Pos) /*!< Bit mask of BODH_TRIM_RET field. */

/* Bits 5..3 :   */
#define ANACONF_ANA_CONFIG_VDET_AO_1V8_BODL_TRIM_RET_Pos (3UL) /*!< Position of BODL_TRIM_RET field. */
#define ANACONF_ANA_CONFIG_VDET_AO_1V8_BODL_TRIM_RET_Msk (0x7UL << ANACONF_ANA_CONFIG_VDET_AO_1V8_BODL_TRIM_RET_Pos) /*!< Bit mask of BODL_TRIM_RET field. */

/* Bits 2..0 :   */
#define ANACONF_ANA_CONFIG_VDET_AO_1V8_CFG_RET_Pos (0UL) /*!< Position of CFG_RET field. */
#define ANACONF_ANA_CONFIG_VDET_AO_1V8_CFG_RET_Msk (0x7UL << ANACONF_ANA_CONFIG_VDET_AO_1V8_CFG_RET_Pos) /*!< Bit mask of CFG_RET field. */

/* Register: ANACONF_ANA_CONFIG_VDET_ARSTCTRL */
/* Description: Control signals for additional analog modules (VDET_ARSTCTRL) */

/* Bit 0 :   */
#define ANACONF_ANA_CONFIG_VDET_ARSTCTRL_TRIM_READY_AO_Pos (0UL) /*!< Position of TRIM_READY_AO field. */
#define ANACONF_ANA_CONFIG_VDET_ARSTCTRL_TRIM_READY_AO_Msk (0x1UL << ANACONF_ANA_CONFIG_VDET_ARSTCTRL_TRIM_READY_AO_Pos) /*!< Bit mask of TRIM_READY_AO field. */

/* Register: ANACONF_ANA_CONFIG_DCO16M_0 */
/* Description: Control signals for additional analog modules (DCO16M_0) */

/* Bits 21..19 :   */
#define ANACONF_ANA_CONFIG_DCO16M_0_ATB0CFG_RET_Pos (19UL) /*!< Position of ATB0CFG_RET field. */
#define ANACONF_ANA_CONFIG_DCO16M_0_ATB0CFG_RET_Msk (0x7UL << ANACONF_ANA_CONFIG_DCO16M_0_ATB0CFG_RET_Pos) /*!< Bit mask of ATB0CFG_RET field. */

/* Bits 18..16 :   */
#define ANACONF_ANA_CONFIG_DCO16M_0_ATB1CFG_RET_Pos (16UL) /*!< Position of ATB1CFG_RET field. */
#define ANACONF_ANA_CONFIG_DCO16M_0_ATB1CFG_RET_Msk (0x7UL << ANACONF_ANA_CONFIG_DCO16M_0_ATB1CFG_RET_Pos) /*!< Bit mask of ATB1CFG_RET field. */

/* Bits 15..14 :   */
#define ANACONF_ANA_CONFIG_DCO16M_0_CFG_RET_Pos (14UL) /*!< Position of CFG_RET field. */
#define ANACONF_ANA_CONFIG_DCO16M_0_CFG_RET_Msk (0x3UL << ANACONF_ANA_CONFIG_DCO16M_0_CFG_RET_Pos) /*!< Bit mask of CFG_RET field. */

/* Bit 13 :   */
#define ANACONF_ANA_CONFIG_DCO16M_0_SLEEP_AO_Pos (13UL) /*!< Position of SLEEP_AO field. */
#define ANACONF_ANA_CONFIG_DCO16M_0_SLEEP_AO_Msk (0x1UL << ANACONF_ANA_CONFIG_DCO16M_0_SLEEP_AO_Pos) /*!< Bit mask of SLEEP_AO field. */

/* Bits 12..8 :   */
#define ANACONF_ANA_CONFIG_DCO16M_0_TRIM_R_COARSE_RET_Pos (8UL) /*!< Position of TRIM_R_COARSE_RET field. */
#define ANACONF_ANA_CONFIG_DCO16M_0_TRIM_R_COARSE_RET_Msk (0x1FUL << ANACONF_ANA_CONFIG_DCO16M_0_TRIM_R_COARSE_RET_Pos) /*!< Bit mask of TRIM_R_COARSE_RET field. */

/* Bits 7..0 :   */
#define ANACONF_ANA_CONFIG_DCO16M_0_TRIM_R_FINE_RET_Pos (0UL) /*!< Position of TRIM_R_FINE_RET field. */
#define ANACONF_ANA_CONFIG_DCO16M_0_TRIM_R_FINE_RET_Msk (0xFFUL << ANACONF_ANA_CONFIG_DCO16M_0_TRIM_R_FINE_RET_Pos) /*!< Bit mask of TRIM_R_FINE_RET field. */

/* Register: ANACONF_ANA_CONFIG_DCO16M_1 */
/* Description: Control signals for additional analog modules (DCO16M_1) */

/* Bits 24..21 :   */
#define ANACONF_ANA_CONFIG_DCO16M_1_TRIM_TCOEF_RET_Pos (21UL) /*!< Position of TRIM_TCOEF_RET field. */
#define ANACONF_ANA_CONFIG_DCO16M_1_TRIM_TCOEF_RET_Msk (0xFUL << ANACONF_ANA_CONFIG_DCO16M_1_TRIM_TCOEF_RET_Pos) /*!< Bit mask of TRIM_TCOEF_RET field. */

/* Bits 20..16 :   */
#define ANACONF_ANA_CONFIG_DCO16M_1_TRIM_VSUP_RET_Pos (16UL) /*!< Position of TRIM_VSUP_RET field. */
#define ANACONF_ANA_CONFIG_DCO16M_1_TRIM_VSUP_RET_Msk (0x1FUL << ANACONF_ANA_CONFIG_DCO16M_1_TRIM_VSUP_RET_Pos) /*!< Bit mask of TRIM_VSUP_RET field. */

/* Bits 15..13 :   */
#define ANACONF_ANA_CONFIG_DCO16M_1_DTB0CFG_RET_Pos (13UL) /*!< Position of DTB0CFG_RET field. */
#define ANACONF_ANA_CONFIG_DCO16M_1_DTB0CFG_RET_Msk (0x7UL << ANACONF_ANA_CONFIG_DCO16M_1_DTB0CFG_RET_Pos) /*!< Bit mask of DTB0CFG_RET field. */

/* Bits 12..10 :   */
#define ANACONF_ANA_CONFIG_DCO16M_1_DTB1CFG_RET_Pos (10UL) /*!< Position of DTB1CFG_RET field. */
#define ANACONF_ANA_CONFIG_DCO16M_1_DTB1CFG_RET_Msk (0x7UL << ANACONF_ANA_CONFIG_DCO16M_1_DTB1CFG_RET_Pos) /*!< Bit mask of DTB1CFG_RET field. */

/* Bits 9..7 :   */
#define ANACONF_ANA_CONFIG_DCO16M_1_DTB2CFG_RET_Pos (7UL) /*!< Position of DTB2CFG_RET field. */
#define ANACONF_ANA_CONFIG_DCO16M_1_DTB2CFG_RET_Msk (0x7UL << ANACONF_ANA_CONFIG_DCO16M_1_DTB2CFG_RET_Pos) /*!< Bit mask of DTB2CFG_RET field. */

/* Bits 6..5 :   */
#define ANACONF_ANA_CONFIG_DCO16M_1_DTB3CFG_RET_Pos (5UL) /*!< Position of DTB3CFG_RET field. */
#define ANACONF_ANA_CONFIG_DCO16M_1_DTB3CFG_RET_Msk (0x3UL << ANACONF_ANA_CONFIG_DCO16M_1_DTB3CFG_RET_Pos) /*!< Bit mask of DTB3CFG_RET field. */

/* Bit 4 :   */
#define ANACONF_ANA_CONFIG_DCO16M_1_PWRUP_AO_Pos (4UL) /*!< Position of PWRUP_AO field. */
#define ANACONF_ANA_CONFIG_DCO16M_1_PWRUP_AO_Msk (0x1UL << ANACONF_ANA_CONFIG_DCO16M_1_PWRUP_AO_Pos) /*!< Bit mask of PWRUP_AO field. */

/* Bit 3 :   */
#define ANACONF_ANA_CONFIG_DCO16M_1_RETAIN_AO_Pos (3UL) /*!< Position of RETAIN_AO field. */
#define ANACONF_ANA_CONFIG_DCO16M_1_RETAIN_AO_Msk (0x1UL << ANACONF_ANA_CONFIG_DCO16M_1_RETAIN_AO_Pos) /*!< Bit mask of RETAIN_AO field. */

/* Bits 2..0 :   */
#define ANACONF_ANA_CONFIG_DCO16M_1_TCFG_RET_Pos (0UL) /*!< Position of TCFG_RET field. */
#define ANACONF_ANA_CONFIG_DCO16M_1_TCFG_RET_Msk (0x7UL << ANACONF_ANA_CONFIG_DCO16M_1_TCFG_RET_Pos) /*!< Bit mask of TCFG_RET field. */

/* Register: ANACONF_ANA_CONFIG_MBIAS */
/* Description: Control signals for additional analog modules (MBIAS) */

/* Bits 24..20 :   */
#define ANACONF_ANA_CONFIG_MBIAS_ATE_RET_Pos (20UL) /*!< Position of ATE_RET field. */
#define ANACONF_ANA_CONFIG_MBIAS_ATE_RET_Msk (0x1FUL << ANACONF_ANA_CONFIG_MBIAS_ATE_RET_Pos) /*!< Bit mask of ATE_RET field. */

/* Bits 19..15 :   */
#define ANACONF_ANA_CONFIG_MBIAS_CFG_RET_Pos (15UL) /*!< Position of CFG_RET field. */
#define ANACONF_ANA_CONFIG_MBIAS_CFG_RET_Msk (0x1FUL << ANACONF_ANA_CONFIG_MBIAS_CFG_RET_Pos) /*!< Bit mask of CFG_RET field. */

/* Bits 14..12 :   */
#define ANACONF_ANA_CONFIG_MBIAS_IBPP_TRIM_RET_Pos (12UL) /*!< Position of IBPP_TRIM_RET field. */
#define ANACONF_ANA_CONFIG_MBIAS_IBPP_TRIM_RET_Msk (0x7UL << ANACONF_ANA_CONFIG_MBIAS_IBPP_TRIM_RET_Pos) /*!< Bit mask of IBPP_TRIM_RET field. */

/* Bits 11..7 :   */
#define ANACONF_ANA_CONFIG_MBIAS_IBPSR_TRIM_RET_Pos (7UL) /*!< Position of IBPSR_TRIM_RET field. */
#define ANACONF_ANA_CONFIG_MBIAS_IBPSR_TRIM_RET_Msk (0x1FUL << ANACONF_ANA_CONFIG_MBIAS_IBPSR_TRIM_RET_Pos) /*!< Bit mask of IBPSR_TRIM_RET field. */

/* Bits 6..4 :   */
#define ANACONF_ANA_CONFIG_MBIAS_TC_TRIM_RET_Pos (4UL) /*!< Position of TC_TRIM_RET field. */
#define ANACONF_ANA_CONFIG_MBIAS_TC_TRIM_RET_Msk (0x7UL << ANACONF_ANA_CONFIG_MBIAS_TC_TRIM_RET_Pos) /*!< Bit mask of TC_TRIM_RET field. */

/* Bit 3 :   */
#define ANACONF_ANA_CONFIG_MBIAS_MODE_IBPSR_AO_Pos (3UL) /*!< Position of MODE_IBPSR_AO field. */
#define ANACONF_ANA_CONFIG_MBIAS_MODE_IBPSR_AO_Msk (0x1UL << ANACONF_ANA_CONFIG_MBIAS_MODE_IBPSR_AO_Pos) /*!< Bit mask of MODE_IBPSR_AO field. */

/* Bit 2 :   */
#define ANACONF_ANA_CONFIG_MBIAS_PWRUP_IBPP_AO_Pos (2UL) /*!< Position of PWRUP_IBPP_AO field. */
#define ANACONF_ANA_CONFIG_MBIAS_PWRUP_IBPP_AO_Msk (0x1UL << ANACONF_ANA_CONFIG_MBIAS_PWRUP_IBPP_AO_Pos) /*!< Bit mask of PWRUP_IBPP_AO field. */

/* Bit 1 :   */
#define ANACONF_ANA_CONFIG_MBIAS_PWRUP_IBPSR_AO_Pos (1UL) /*!< Position of PWRUP_IBPSR_AO field. */
#define ANACONF_ANA_CONFIG_MBIAS_PWRUP_IBPSR_AO_Msk (0x1UL << ANACONF_ANA_CONFIG_MBIAS_PWRUP_IBPSR_AO_Pos) /*!< Bit mask of PWRUP_IBPSR_AO field. */

/* Bit 0 :   */
#define ANACONF_ANA_CONFIG_MBIAS_RETAIN_AO_Pos (0UL) /*!< Position of RETAIN_AO field. */
#define ANACONF_ANA_CONFIG_MBIAS_RETAIN_AO_Msk (0x1UL << ANACONF_ANA_CONFIG_MBIAS_RETAIN_AO_Pos) /*!< Bit mask of RETAIN_AO field. */

/* Register: ANACONF_ANA_CONFIG_BIAS_OSC_RFR */
/* Description: Control signals for additional analog modules (BIAS_OSC_RFR) */

/* Bits 16..15 :   */
#define ANACONF_ANA_CONFIG_BIAS_OSC_RFR_ATE_RET_Pos (15UL) /*!< Position of ATE_RET field. */
#define ANACONF_ANA_CONFIG_BIAS_OSC_RFR_ATE_RET_Msk (0x3UL << ANACONF_ANA_CONFIG_BIAS_OSC_RFR_ATE_RET_Pos) /*!< Bit mask of ATE_RET field. */

/* Bit 14 :   */
#define ANACONF_ANA_CONFIG_BIAS_OSC_RFR_MODE_AO_Pos (14UL) /*!< Position of MODE_AO field. */
#define ANACONF_ANA_CONFIG_BIAS_OSC_RFR_MODE_AO_Msk (0x1UL << ANACONF_ANA_CONFIG_BIAS_OSC_RFR_MODE_AO_Pos) /*!< Bit mask of MODE_AO field. */

/* Bit 13 :   */
#define ANACONF_ANA_CONFIG_BIAS_OSC_RFR_OSC_RFR_DIG_AO_Pos (13UL) /*!< Position of OSC_RFR_DIG_AO field. */
#define ANACONF_ANA_CONFIG_BIAS_OSC_RFR_OSC_RFR_DIG_AO_Msk (0x1UL << ANACONF_ANA_CONFIG_BIAS_OSC_RFR_OSC_RFR_DIG_AO_Pos) /*!< Bit mask of OSC_RFR_DIG_AO field. */

/* Bits 12..10 :   */
#define ANACONF_ANA_CONFIG_BIAS_OSC_RFR_CFG_RET_Pos (10UL) /*!< Position of CFG_RET field. */
#define ANACONF_ANA_CONFIG_BIAS_OSC_RFR_CFG_RET_Msk (0x7UL << ANACONF_ANA_CONFIG_BIAS_OSC_RFR_CFG_RET_Pos) /*!< Bit mask of CFG_RET field. */

/* Bits 9..6 :   */
#define ANACONF_ANA_CONFIG_BIAS_OSC_RFR_TRIM_IBPSR_RET_Pos (6UL) /*!< Position of TRIM_IBPSR_RET field. */
#define ANACONF_ANA_CONFIG_BIAS_OSC_RFR_TRIM_IBPSR_RET_Msk (0xFUL << ANACONF_ANA_CONFIG_BIAS_OSC_RFR_TRIM_IBPSR_RET_Pos) /*!< Bit mask of TRIM_IBPSR_RET field. */

/* Bits 5..3 :   */
#define ANACONF_ANA_CONFIG_BIAS_OSC_RFR_TRIM_OSC_RET_Pos (3UL) /*!< Position of TRIM_OSC_RET field. */
#define ANACONF_ANA_CONFIG_BIAS_OSC_RFR_TRIM_OSC_RET_Msk (0x7UL << ANACONF_ANA_CONFIG_BIAS_OSC_RFR_TRIM_OSC_RET_Pos) /*!< Bit mask of TRIM_OSC_RET field. */

/* Bit 2 :   */
#define ANACONF_ANA_CONFIG_BIAS_OSC_RFR_PWRUP_AO_Pos (2UL) /*!< Position of PWRUP_AO field. */
#define ANACONF_ANA_CONFIG_BIAS_OSC_RFR_PWRUP_AO_Msk (0x1UL << ANACONF_ANA_CONFIG_BIAS_OSC_RFR_PWRUP_AO_Pos) /*!< Bit mask of PWRUP_AO field. */

/* Bit 1 :   */
#define ANACONF_ANA_CONFIG_BIAS_OSC_RFR_RETAIN_AO_Pos (1UL) /*!< Position of RETAIN_AO field. */
#define ANACONF_ANA_CONFIG_BIAS_OSC_RFR_RETAIN_AO_Msk (0x1UL << ANACONF_ANA_CONFIG_BIAS_OSC_RFR_RETAIN_AO_Pos) /*!< Bit mask of RETAIN_AO field. */

/* Bit 0 :   */
#define ANACONF_ANA_CONFIG_BIAS_OSC_RFR_TCFG_RET_Pos (0UL) /*!< Position of TCFG_RET field. */
#define ANACONF_ANA_CONFIG_BIAS_OSC_RFR_TCFG_RET_Msk (0x1UL << ANACONF_ANA_CONFIG_BIAS_OSC_RFR_TCFG_RET_Pos) /*!< Bit mask of TCFG_RET field. */

/* Register: ANACONF_ANA_CONFIG_LILIUM_PROTO3 */
/* Description: Control signals for additional analog modules (LILIUM_PROTO3) */

/* Bit 26 :   */
#define ANACONF_ANA_CONFIG_LILIUM_PROTO3_DIV_CLK16M_EN_Pos (26UL) /*!< Position of DIV_CLK16M_EN field. */
#define ANACONF_ANA_CONFIG_LILIUM_PROTO3_DIV_CLK16M_EN_Msk (0x1UL << ANACONF_ANA_CONFIG_LILIUM_PROTO3_DIV_CLK16M_EN_Pos) /*!< Bit mask of DIV_CLK16M_EN field. */

/* Bit 25 :   */
#define ANACONF_ANA_CONFIG_LILIUM_PROTO3_INPUT_CLK_SEL_CKSW16M_Pos (25UL) /*!< Position of INPUT_CLK_SEL_CKSW16M field. */
#define ANACONF_ANA_CONFIG_LILIUM_PROTO3_INPUT_CLK_SEL_CKSW16M_Msk (0x1UL << ANACONF_ANA_CONFIG_LILIUM_PROTO3_INPUT_CLK_SEL_CKSW16M_Pos) /*!< Bit mask of INPUT_CLK_SEL_CKSW16M field. */

/* Bit 24 :   */
#define ANACONF_ANA_CONFIG_LILIUM_PROTO3_GPIO_ANA_LFXO_EN_Pos (24UL) /*!< Position of GPIO_ANA_LFXO_EN field. */
#define ANACONF_ANA_CONFIG_LILIUM_PROTO3_GPIO_ANA_LFXO_EN_Msk (0x1UL << ANACONF_ANA_CONFIG_LILIUM_PROTO3_GPIO_ANA_LFXO_EN_Pos) /*!< Bit mask of GPIO_ANA_LFXO_EN field. */

/* Bits 23..22 :   */
#define ANACONF_ANA_CONFIG_LILIUM_PROTO3_SEL_PADC_RESAMPLING_Pos (22UL) /*!< Position of SEL_PADC_RESAMPLING field. */
#define ANACONF_ANA_CONFIG_LILIUM_PROTO3_SEL_PADC_RESAMPLING_Msk (0x3UL << ANACONF_ANA_CONFIG_LILIUM_PROTO3_SEL_PADC_RESAMPLING_Pos) /*!< Bit mask of SEL_PADC_RESAMPLING field. */

/* Bits 21..17 :   */
#define ANACONF_ANA_CONFIG_LILIUM_PROTO3_GPIO_OUT_SEL_Pos (17UL) /*!< Position of GPIO_OUT_SEL field. */
#define ANACONF_ANA_CONFIG_LILIUM_PROTO3_GPIO_OUT_SEL_Msk (0x1FUL << ANACONF_ANA_CONFIG_LILIUM_PROTO3_GPIO_OUT_SEL_Pos) /*!< Bit mask of GPIO_OUT_SEL field. */

/* Bits 16..15 :   */
#define ANACONF_ANA_CONFIG_LILIUM_PROTO3_CLK_400M_DIV_SEL_Pos (15UL) /*!< Position of CLK_400M_DIV_SEL field. */
#define ANACONF_ANA_CONFIG_LILIUM_PROTO3_CLK_400M_DIV_SEL_Msk (0x3UL << ANACONF_ANA_CONFIG_LILIUM_PROTO3_CLK_400M_DIV_SEL_Pos) /*!< Bit mask of CLK_400M_DIV_SEL field. */

/* Bit 14 :   */
#define ANACONF_ANA_CONFIG_LILIUM_PROTO3_SIMO_CLK32M_DIV_SEL_Pos (14UL) /*!< Position of SIMO_CLK32M_DIV_SEL field. */
#define ANACONF_ANA_CONFIG_LILIUM_PROTO3_SIMO_CLK32M_DIV_SEL_Msk (0x1UL << ANACONF_ANA_CONFIG_LILIUM_PROTO3_SIMO_CLK32M_DIV_SEL_Pos) /*!< Bit mask of SIMO_CLK32M_DIV_SEL field. */

/* Bit 13 :   */
#define ANACONF_ANA_CONFIG_LILIUM_PROTO3_SIMO_EXT_CLK_SEL_Pos (13UL) /*!< Position of SIMO_EXT_CLK_SEL field. */
#define ANACONF_ANA_CONFIG_LILIUM_PROTO3_SIMO_EXT_CLK_SEL_Msk (0x1UL << ANACONF_ANA_CONFIG_LILIUM_PROTO3_SIMO_EXT_CLK_SEL_Pos) /*!< Bit mask of SIMO_EXT_CLK_SEL field. */

/* Bits 12..10 :   */
#define ANACONF_ANA_CONFIG_LILIUM_PROTO3_CLK_OUT_SEL_Pos (10UL) /*!< Position of CLK_OUT_SEL field. */
#define ANACONF_ANA_CONFIG_LILIUM_PROTO3_CLK_OUT_SEL_Msk (0x7UL << ANACONF_ANA_CONFIG_LILIUM_PROTO3_CLK_OUT_SEL_Pos) /*!< Bit mask of CLK_OUT_SEL field. */

/* Bits 9..7 :   */
#define ANACONF_ANA_CONFIG_LILIUM_PROTO3_EN_ATB_Pos (7UL) /*!< Position of EN_ATB field. */
#define ANACONF_ANA_CONFIG_LILIUM_PROTO3_EN_ATB_Msk (0x7UL << ANACONF_ANA_CONFIG_LILIUM_PROTO3_EN_ATB_Pos) /*!< Bit mask of EN_ATB field. */

/* Bits 6..3 :   */
#define ANACONF_ANA_CONFIG_LILIUM_PROTO3_EN_WATB_Pos (3UL) /*!< Position of EN_WATB field. */
#define ANACONF_ANA_CONFIG_LILIUM_PROTO3_EN_WATB_Msk (0xFUL << ANACONF_ANA_CONFIG_LILIUM_PROTO3_EN_WATB_Pos) /*!< Bit mask of EN_WATB field. */

/* Bit 2 :   */
#define ANACONF_ANA_CONFIG_LILIUM_PROTO3_GPIO_ANA_PADC_EN_Pos (2UL) /*!< Position of GPIO_ANA_PADC_EN field. */
#define ANACONF_ANA_CONFIG_LILIUM_PROTO3_GPIO_ANA_PADC_EN_Msk (0x1UL << ANACONF_ANA_CONFIG_LILIUM_PROTO3_GPIO_ANA_PADC_EN_Pos) /*!< Bit mask of GPIO_ANA_PADC_EN field. */

/* Bit 1 :   */
#define ANACONF_ANA_CONFIG_LILIUM_PROTO3_GPIO_ANA_GPCMP_EN_Pos (1UL) /*!< Position of GPIO_ANA_GPCMP_EN field. */
#define ANACONF_ANA_CONFIG_LILIUM_PROTO3_GPIO_ANA_GPCMP_EN_Msk (0x1UL << ANACONF_ANA_CONFIG_LILIUM_PROTO3_GPIO_ANA_GPCMP_EN_Pos) /*!< Bit mask of GPIO_ANA_GPCMP_EN field. */

/* Bit 0 :   */
#define ANACONF_ANA_CONFIG_LILIUM_PROTO3_GPIO_ANA_MBIAS_EN_Pos (0UL) /*!< Position of GPIO_ANA_MBIAS_EN field. */
#define ANACONF_ANA_CONFIG_LILIUM_PROTO3_GPIO_ANA_MBIAS_EN_Msk (0x1UL << ANACONF_ANA_CONFIG_LILIUM_PROTO3_GPIO_ANA_MBIAS_EN_Pos) /*!< Bit mask of GPIO_ANA_MBIAS_EN field. */

/* Register: ANACONF_ANA_CONFIG_LILIUMPROTO3_TEST_CTRL_0V8 */
/* Description: Control signals for additional analog modules (LILIUMPROTO3_TEST_CTRL_0V8) */

/* Bit 29 :   */
#define ANACONF_ANA_CONFIG_LILIUMPROTO3_TEST_CTRL_0V8_EN_ATB2_Pos (29UL) /*!< Position of EN_ATB2 field. */
#define ANACONF_ANA_CONFIG_LILIUMPROTO3_TEST_CTRL_0V8_EN_ATB2_Msk (0x1UL << ANACONF_ANA_CONFIG_LILIUMPROTO3_TEST_CTRL_0V8_EN_ATB2_Pos) /*!< Bit mask of EN_ATB2 field. */

/* Bit 28 :   */
#define ANACONF_ANA_CONFIG_LILIUMPROTO3_TEST_CTRL_0V8_EN_ATB1_Pos (28UL) /*!< Position of EN_ATB1 field. */
#define ANACONF_ANA_CONFIG_LILIUMPROTO3_TEST_CTRL_0V8_EN_ATB1_Msk (0x1UL << ANACONF_ANA_CONFIG_LILIUMPROTO3_TEST_CTRL_0V8_EN_ATB1_Pos) /*!< Bit mask of EN_ATB1 field. */

/* Bit 27 :   */
#define ANACONF_ANA_CONFIG_LILIUMPROTO3_TEST_CTRL_0V8_EN_ATB0_Pos (27UL) /*!< Position of EN_ATB0 field. */
#define ANACONF_ANA_CONFIG_LILIUMPROTO3_TEST_CTRL_0V8_EN_ATB0_Msk (0x1UL << ANACONF_ANA_CONFIG_LILIUMPROTO3_TEST_CTRL_0V8_EN_ATB0_Pos) /*!< Bit mask of EN_ATB0 field. */

/* Bit 26 :   */
#define ANACONF_ANA_CONFIG_LILIUMPROTO3_TEST_CTRL_0V8_PWRUP_TOP_WRAPPER_AO_Pos (26UL) /*!< Position of PWRUP_TOP_WRAPPER_AO field. */
#define ANACONF_ANA_CONFIG_LILIUMPROTO3_TEST_CTRL_0V8_PWRUP_TOP_WRAPPER_AO_Msk (0x1UL << ANACONF_ANA_CONFIG_LILIUMPROTO3_TEST_CTRL_0V8_PWRUP_TOP_WRAPPER_AO_Pos) /*!< Bit mask of PWRUP_TOP_WRAPPER_AO field. */

/* Bits 25..5 : See anaip-gf22n_121 */
#define ANACONF_ANA_CONFIG_LILIUMPROTO3_TEST_CTRL_0V8_TEST_CTRL_Pos (5UL) /*!< Position of TEST_CTRL field. */
#define ANACONF_ANA_CONFIG_LILIUMPROTO3_TEST_CTRL_0V8_TEST_CTRL_Msk (0x1FFFFFUL << ANACONF_ANA_CONFIG_LILIUMPROTO3_TEST_CTRL_0V8_TEST_CTRL_Pos) /*!< Bit mask of TEST_CTRL field. */

/* Bit 4 :   */
#define ANACONF_ANA_CONFIG_LILIUMPROTO3_TEST_CTRL_0V8_ATE_ATBUF_AO_Pos (4UL) /*!< Position of ATE_ATBUF_AO field. */
#define ANACONF_ANA_CONFIG_LILIUMPROTO3_TEST_CTRL_0V8_ATE_ATBUF_AO_Msk (0x1UL << ANACONF_ANA_CONFIG_LILIUMPROTO3_TEST_CTRL_0V8_ATE_ATBUF_AO_Pos) /*!< Bit mask of ATE_ATBUF_AO field. */

/* Bit 3 :   */
#define ANACONF_ANA_CONFIG_LILIUMPROTO3_TEST_CTRL_0V8_ATE_ATCMP_AO_Pos (3UL) /*!< Position of ATE_ATCMP_AO field. */
#define ANACONF_ANA_CONFIG_LILIUMPROTO3_TEST_CTRL_0V8_ATE_ATCMP_AO_Msk (0x1UL << ANACONF_ANA_CONFIG_LILIUMPROTO3_TEST_CTRL_0V8_ATE_ATCMP_AO_Pos) /*!< Bit mask of ATE_ATCMP_AO field. */

/* Bits 2..1 :   */
#define ANACONF_ANA_CONFIG_LILIUMPROTO3_TEST_CTRL_0V8_HYST_AO_Pos (1UL) /*!< Position of HYST_AO field. */
#define ANACONF_ANA_CONFIG_LILIUMPROTO3_TEST_CTRL_0V8_HYST_AO_Msk (0x3UL << ANACONF_ANA_CONFIG_LILIUMPROTO3_TEST_CTRL_0V8_HYST_AO_Pos) /*!< Bit mask of HYST_AO field. */

/* Bit 0 :   */
#define ANACONF_ANA_CONFIG_LILIUMPROTO3_TEST_CTRL_0V8_PWRUP_ATLIB_TEST_AO_Pos (0UL) /*!< Position of PWRUP_ATLIB_TEST_AO field. */
#define ANACONF_ANA_CONFIG_LILIUMPROTO3_TEST_CTRL_0V8_PWRUP_ATLIB_TEST_AO_Msk (0x1UL << ANACONF_ANA_CONFIG_LILIUMPROTO3_TEST_CTRL_0V8_PWRUP_ATLIB_TEST_AO_Pos) /*!< Bit mask of PWRUP_ATLIB_TEST_AO field. */

/* Register: ANACONF_ANA_CONFIG_CKSW16M */
/* Description: Control signals for additional analog modules (CKSW16M) */

/* Bits 24..22 :   */
#define ANACONF_ANA_CONFIG_CKSW16M_ATE_RET_Pos (22UL) /*!< Position of ATE_RET field. */
#define ANACONF_ANA_CONFIG_CKSW16M_ATE_RET_Msk (0x7UL << ANACONF_ANA_CONFIG_CKSW16M_ATE_RET_Pos) /*!< Bit mask of ATE_RET field. */

/* Bits 21..20 :   */
#define ANACONF_ANA_CONFIG_CKSW16M_CFG_RET_Pos (20UL) /*!< Position of CFG_RET field. */
#define ANACONF_ANA_CONFIG_CKSW16M_CFG_RET_Msk (0x3UL << ANACONF_ANA_CONFIG_CKSW16M_CFG_RET_Pos) /*!< Bit mask of CFG_RET field. */

/* Bit 19 :   */
#define ANACONF_ANA_CONFIG_CKSW16M_CKSEL_RET_Pos (19UL) /*!< Position of CKSEL_RET field. */
#define ANACONF_ANA_CONFIG_CKSW16M_CKSEL_RET_Msk (0x1UL << ANACONF_ANA_CONFIG_CKSW16M_CKSEL_RET_Pos) /*!< Bit mask of CKSEL_RET field. */

/* Bits 18..15 :   */
#define ANACONF_ANA_CONFIG_CKSW16M_TRIM_DELAY_RET_Pos (15UL) /*!< Position of TRIM_DELAY_RET field. */
#define ANACONF_ANA_CONFIG_CKSW16M_TRIM_DELAY_RET_Msk (0xFUL << ANACONF_ANA_CONFIG_CKSW16M_TRIM_DELAY_RET_Pos) /*!< Bit mask of TRIM_DELAY_RET field. */

/* Bits 14..8 :   */
#define ANACONF_ANA_CONFIG_CKSW16M_TRIM_REF_RET_Pos (8UL) /*!< Position of TRIM_REF_RET field. */
#define ANACONF_ANA_CONFIG_CKSW16M_TRIM_REF_RET_Msk (0x7FUL << ANACONF_ANA_CONFIG_CKSW16M_TRIM_REF_RET_Pos) /*!< Bit mask of TRIM_REF_RET field. */

/* Bits 7..5 :   */
#define ANACONF_ANA_CONFIG_CKSW16M_DTE_RET_Pos (5UL) /*!< Position of DTE_RET field. */
#define ANACONF_ANA_CONFIG_CKSW16M_DTE_RET_Msk (0x7UL << ANACONF_ANA_CONFIG_CKSW16M_DTE_RET_Pos) /*!< Bit mask of DTE_RET field. */

/* Bit 4 :   */
#define ANACONF_ANA_CONFIG_CKSW16M_PWRUP_AO_Pos (4UL) /*!< Position of PWRUP_AO field. */
#define ANACONF_ANA_CONFIG_CKSW16M_PWRUP_AO_Msk (0x1UL << ANACONF_ANA_CONFIG_CKSW16M_PWRUP_AO_Pos) /*!< Bit mask of PWRUP_AO field. */

/* Bit 3 :   */
#define ANACONF_ANA_CONFIG_CKSW16M_RETAIN_AO_Pos (3UL) /*!< Position of RETAIN_AO field. */
#define ANACONF_ANA_CONFIG_CKSW16M_RETAIN_AO_Msk (0x1UL << ANACONF_ANA_CONFIG_CKSW16M_RETAIN_AO_Pos) /*!< Bit mask of RETAIN_AO field. */

/* Bits 2..0 :   */
#define ANACONF_ANA_CONFIG_CKSW16M_TCFG_RET_Pos (0UL) /*!< Position of TCFG_RET field. */
#define ANACONF_ANA_CONFIG_CKSW16M_TCFG_RET_Msk (0x7UL << ANACONF_ANA_CONFIG_CKSW16M_TCFG_RET_Pos) /*!< Bit mask of TCFG_RET field. */

/* Register: ANACONF_ANA_CONFIG_LFXO32K_0 */
/* Description: Control signals for additional analog modules (LFXO32K_0) */

/* Bits 3..0 :   */
#define ANACONF_ANA_CONFIG_LFXO32K_0_ATB0CFG_RET_Pos (0UL) /*!< Position of ATB0CFG_RET field. */
#define ANACONF_ANA_CONFIG_LFXO32K_0_ATB0CFG_RET_Msk (0xFUL << ANACONF_ANA_CONFIG_LFXO32K_0_ATB0CFG_RET_Pos) /*!< Bit mask of ATB0CFG_RET field. */

/* Register: ANACONF_ANA_CONFIG_LFXO32K_1 */
/* Description: Control signals for additional analog modules (LFXO32K_1) */

/* Bits 29..26 :   */
#define ANACONF_ANA_CONFIG_LFXO32K_1_ATB1CFG_RET_Pos (26UL) /*!< Position of ATB1CFG_RET field. */
#define ANACONF_ANA_CONFIG_LFXO32K_1_ATB1CFG_RET_Msk (0xFUL << ANACONF_ANA_CONFIG_LFXO32K_1_ATB1CFG_RET_Pos) /*!< Bit mask of ATB1CFG_RET field. */

/* Bits 25..22 :   */
#define ANACONF_ANA_CONFIG_LFXO32K_1_DTB0CFG_RET_Pos (22UL) /*!< Position of DTB0CFG_RET field. */
#define ANACONF_ANA_CONFIG_LFXO32K_1_DTB0CFG_RET_Msk (0xFUL << ANACONF_ANA_CONFIG_LFXO32K_1_DTB0CFG_RET_Pos) /*!< Bit mask of DTB0CFG_RET field. */

/* Bits 21..18 :   */
#define ANACONF_ANA_CONFIG_LFXO32K_1_DTB1CFG_RET_Pos (18UL) /*!< Position of DTB1CFG_RET field. */
#define ANACONF_ANA_CONFIG_LFXO32K_1_DTB1CFG_RET_Msk (0xFUL << ANACONF_ANA_CONFIG_LFXO32K_1_DTB1CFG_RET_Pos) /*!< Bit mask of DTB1CFG_RET field. */

/* Bits 17..14 :   */
#define ANACONF_ANA_CONFIG_LFXO32K_1_DTB2CFG_RET_Pos (14UL) /*!< Position of DTB2CFG_RET field. */
#define ANACONF_ANA_CONFIG_LFXO32K_1_DTB2CFG_RET_Msk (0xFUL << ANACONF_ANA_CONFIG_LFXO32K_1_DTB2CFG_RET_Pos) /*!< Bit mask of DTB2CFG_RET field. */

/* Bits 13..10 :   */
#define ANACONF_ANA_CONFIG_LFXO32K_1_BIAS_TRIM_RET_Pos (10UL) /*!< Position of BIAS_TRIM_RET field. */
#define ANACONF_ANA_CONFIG_LFXO32K_1_BIAS_TRIM_RET_Msk (0xFUL << ANACONF_ANA_CONFIG_LFXO32K_1_BIAS_TRIM_RET_Pos) /*!< Bit mask of BIAS_TRIM_RET field. */

/* Bits 9..5 :   */
#define ANACONF_ANA_CONFIG_LFXO32K_1_CLOAD_RET_Pos (5UL) /*!< Position of CLOAD_RET field. */
#define ANACONF_ANA_CONFIG_LFXO32K_1_CLOAD_RET_Msk (0x1FUL << ANACONF_ANA_CONFIG_LFXO32K_1_CLOAD_RET_Pos) /*!< Bit mask of CLOAD_RET field. */

/* Bit 4 :   */
#define ANACONF_ANA_CONFIG_LFXO32K_1_OSC_BYPASS_RET_Pos (4UL) /*!< Position of OSC_BYPASS_RET field. */
#define ANACONF_ANA_CONFIG_LFXO32K_1_OSC_BYPASS_RET_Msk (0x1UL << ANACONF_ANA_CONFIG_LFXO32K_1_OSC_BYPASS_RET_Pos) /*!< Bit mask of OSC_BYPASS_RET field. */

/* Bit 3 :   */
#define ANACONF_ANA_CONFIG_LFXO32K_1_OSC_MODE_RET_Pos (3UL) /*!< Position of OSC_MODE_RET field. */
#define ANACONF_ANA_CONFIG_LFXO32K_1_OSC_MODE_RET_Msk (0x1UL << ANACONF_ANA_CONFIG_LFXO32K_1_OSC_MODE_RET_Pos) /*!< Bit mask of OSC_MODE_RET field. */

/* Bits 2..1 :   */
#define ANACONF_ANA_CONFIG_LFXO32K_1_OUTSEL_RET_Pos (1UL) /*!< Position of OUTSEL_RET field. */
#define ANACONF_ANA_CONFIG_LFXO32K_1_OUTSEL_RET_Msk (0x3UL << ANACONF_ANA_CONFIG_LFXO32K_1_OUTSEL_RET_Pos) /*!< Bit mask of OUTSEL_RET field. */

/* Bit 0 :   */
#define ANACONF_ANA_CONFIG_LFXO32K_1_PD_EN_RET_Pos (0UL) /*!< Position of PD_EN_RET field. */
#define ANACONF_ANA_CONFIG_LFXO32K_1_PD_EN_RET_Msk (0x1UL << ANACONF_ANA_CONFIG_LFXO32K_1_PD_EN_RET_Pos) /*!< Bit mask of PD_EN_RET field. */

/* Register: ANACONF_ANA_CONFIG_LFXO32K_2 */
/* Description: Control signals for additional analog modules (LFXO32K_2) */

/* Bits 31..27 :   */
#define ANACONF_ANA_CONFIG_LFXO32K_2_PD_TRIM_LOWER_RET_Pos (27UL) /*!< Position of PD_TRIM_LOWER_RET field. */
#define ANACONF_ANA_CONFIG_LFXO32K_2_PD_TRIM_LOWER_RET_Msk (0x1FUL << ANACONF_ANA_CONFIG_LFXO32K_2_PD_TRIM_LOWER_RET_Pos) /*!< Bit mask of PD_TRIM_LOWER_RET field. */

/* Bits 26..22 :   */
#define ANACONF_ANA_CONFIG_LFXO32K_2_PD_TRIM_UPPER_RET_Pos (22UL) /*!< Position of PD_TRIM_UPPER_RET field. */
#define ANACONF_ANA_CONFIG_LFXO32K_2_PD_TRIM_UPPER_RET_Msk (0x1FUL << ANACONF_ANA_CONFIG_LFXO32K_2_PD_TRIM_UPPER_RET_Pos) /*!< Bit mask of PD_TRIM_UPPER_RET field. */

/* Bits 21..17 :   */
#define ANACONF_ANA_CONFIG_LFXO32K_2_PIERCE_IDAC_RET_Pos (17UL) /*!< Position of PIERCE_IDAC_RET field. */
#define ANACONF_ANA_CONFIG_LFXO32K_2_PIERCE_IDAC_RET_Msk (0x1FUL << ANACONF_ANA_CONFIG_LFXO32K_2_PIERCE_IDAC_RET_Pos) /*!< Bit mask of PIERCE_IDAC_RET field. */

/* Bit 16 :   */
#define ANACONF_ANA_CONFIG_LFXO32K_2_PIERCE_STARTUP_RET_Pos (16UL) /*!< Position of PIERCE_STARTUP_RET field. */
#define ANACONF_ANA_CONFIG_LFXO32K_2_PIERCE_STARTUP_RET_Msk (0x1UL << ANACONF_ANA_CONFIG_LFXO32K_2_PIERCE_STARTUP_RET_Pos) /*!< Bit mask of PIERCE_STARTUP_RET field. */

/* Bit 15 :   */
#define ANACONF_ANA_CONFIG_LFXO32K_2_PIXO_PWRUP_RET_Pos (15UL) /*!< Position of PIXO_PWRUP_RET field. */
#define ANACONF_ANA_CONFIG_LFXO32K_2_PIXO_PWRUP_RET_Msk (0x1UL << ANACONF_ANA_CONFIG_LFXO32K_2_PIXO_PWRUP_RET_Pos) /*!< Bit mask of PIXO_PWRUP_RET field. */

/* Bit 14 :   */
#define ANACONF_ANA_CONFIG_LFXO32K_2_PIXO_STARTUP_RET_Pos (14UL) /*!< Position of PIXO_STARTUP_RET field. */
#define ANACONF_ANA_CONFIG_LFXO32K_2_PIXO_STARTUP_RET_Msk (0x1UL << ANACONF_ANA_CONFIG_LFXO32K_2_PIXO_STARTUP_RET_Pos) /*!< Bit mask of PIXO_STARTUP_RET field. */

/* Bits 13..9 :   */
#define ANACONF_ANA_CONFIG_LFXO32K_2_PIXO_TRIM_RET_Pos (9UL) /*!< Position of PIXO_TRIM_RET field. */
#define ANACONF_ANA_CONFIG_LFXO32K_2_PIXO_TRIM_RET_Msk (0x1FUL << ANACONF_ANA_CONFIG_LFXO32K_2_PIXO_TRIM_RET_Pos) /*!< Bit mask of PIXO_TRIM_RET field. */

/* Bit 8 :   */
#define ANACONF_ANA_CONFIG_LFXO32K_2_S2S_HPMODE_RET_Pos (8UL) /*!< Position of S2S_HPMODE_RET field. */
#define ANACONF_ANA_CONFIG_LFXO32K_2_S2S_HPMODE_RET_Msk (0x1UL << ANACONF_ANA_CONFIG_LFXO32K_2_S2S_HPMODE_RET_Pos) /*!< Bit mask of S2S_HPMODE_RET field. */

/* Bits 7..5 :   */
#define ANACONF_ANA_CONFIG_LFXO32K_2_TRIM_RET_Pos (5UL) /*!< Position of TRIM_RET field. */
#define ANACONF_ANA_CONFIG_LFXO32K_2_TRIM_RET_Msk (0x7UL << ANACONF_ANA_CONFIG_LFXO32K_2_TRIM_RET_Pos) /*!< Bit mask of TRIM_RET field. */

/* Bit 4 :   */
#define ANACONF_ANA_CONFIG_LFXO32K_2_PWRUP_AO_Pos (4UL) /*!< Position of PWRUP_AO field. */
#define ANACONF_ANA_CONFIG_LFXO32K_2_PWRUP_AO_Msk (0x1UL << ANACONF_ANA_CONFIG_LFXO32K_2_PWRUP_AO_Pos) /*!< Bit mask of PWRUP_AO field. */

/* Bit 3 :   */
#define ANACONF_ANA_CONFIG_LFXO32K_2_RETAIN_AO_Pos (3UL) /*!< Position of RETAIN_AO field. */
#define ANACONF_ANA_CONFIG_LFXO32K_2_RETAIN_AO_Msk (0x1UL << ANACONF_ANA_CONFIG_LFXO32K_2_RETAIN_AO_Pos) /*!< Bit mask of RETAIN_AO field. */

/* Bits 2..0 :   */
#define ANACONF_ANA_CONFIG_LFXO32K_2_TCFG_RET_Pos (0UL) /*!< Position of TCFG_RET field. */
#define ANACONF_ANA_CONFIG_LFXO32K_2_TCFG_RET_Msk (0x7UL << ANACONF_ANA_CONFIG_LFXO32K_2_TCFG_RET_Pos) /*!< Bit mask of TCFG_RET field. */

/* Register: ANACONF_ANA_CONFIG_DCO400M_0 */
/* Description: Control signals for additional analog modules (DCO400M_0) */

/* Bits 7..5 :   */
#define ANACONF_ANA_CONFIG_DCO400M_0_ATB0CFG_RET_Pos (5UL) /*!< Position of ATB0CFG_RET field. */
#define ANACONF_ANA_CONFIG_DCO400M_0_ATB0CFG_RET_Msk (0x7UL << ANACONF_ANA_CONFIG_DCO400M_0_ATB0CFG_RET_Pos) /*!< Bit mask of ATB0CFG_RET field. */

/* Bits 4..2 :   */
#define ANACONF_ANA_CONFIG_DCO400M_0_ATB1CFG_RET_Pos (2UL) /*!< Position of ATB1CFG_RET field. */
#define ANACONF_ANA_CONFIG_DCO400M_0_ATB1CFG_RET_Msk (0x7UL << ANACONF_ANA_CONFIG_DCO400M_0_ATB1CFG_RET_Pos) /*!< Bit mask of ATB1CFG_RET field. */

/* Bits 1..0 :   */
#define ANACONF_ANA_CONFIG_DCO400M_0_CFG_RET_Pos (0UL) /*!< Position of CFG_RET field. */
#define ANACONF_ANA_CONFIG_DCO400M_0_CFG_RET_Msk (0x3UL << ANACONF_ANA_CONFIG_DCO400M_0_CFG_RET_Pos) /*!< Bit mask of CFG_RET field. */

/* Register: ANACONF_ANA_CONFIG_DCO400M_1 */
/* Description: Control signals for additional analog modules (DCO400M_1) */

/* Bit 31 :   */
#define ANACONF_ANA_CONFIG_DCO400M_1_SLEEP_AO_Pos (31UL) /*!< Position of SLEEP_AO field. */
#define ANACONF_ANA_CONFIG_DCO400M_1_SLEEP_AO_Msk (0x1UL << ANACONF_ANA_CONFIG_DCO400M_1_SLEEP_AO_Pos) /*!< Bit mask of SLEEP_AO field. */

/* Bits 30..21 :   */
#define ANACONF_ANA_CONFIG_DCO400M_1_TRIM_R_COARSE_RET_Pos (21UL) /*!< Position of TRIM_R_COARSE_RET field. */
#define ANACONF_ANA_CONFIG_DCO400M_1_TRIM_R_COARSE_RET_Msk (0x3FFUL << ANACONF_ANA_CONFIG_DCO400M_1_TRIM_R_COARSE_RET_Pos) /*!< Bit mask of TRIM_R_COARSE_RET field. */

/* Bits 20..10 :   */
#define ANACONF_ANA_CONFIG_DCO400M_1_TRIM_R_FINE_RET_Pos (10UL) /*!< Position of TRIM_R_FINE_RET field. */
#define ANACONF_ANA_CONFIG_DCO400M_1_TRIM_R_FINE_RET_Msk (0x7FFUL << ANACONF_ANA_CONFIG_DCO400M_1_TRIM_R_FINE_RET_Pos) /*!< Bit mask of TRIM_R_FINE_RET field. */

/* Bits 9..0 :   */
#define ANACONF_ANA_CONFIG_DCO400M_1_TRIM_SPARE_RET_Pos (0UL) /*!< Position of TRIM_SPARE_RET field. */
#define ANACONF_ANA_CONFIG_DCO400M_1_TRIM_SPARE_RET_Msk (0x3FFUL << ANACONF_ANA_CONFIG_DCO400M_1_TRIM_SPARE_RET_Pos) /*!< Bit mask of TRIM_SPARE_RET field. */

/* Register: ANACONF_ANA_CONFIG_DCO400M_2 */
/* Description: Control signals for additional analog modules (DCO400M_2) */

/* Bits 24..21 :   */
#define ANACONF_ANA_CONFIG_DCO400M_2_TRIM_TCOEF_RET_Pos (21UL) /*!< Position of TRIM_TCOEF_RET field. */
#define ANACONF_ANA_CONFIG_DCO400M_2_TRIM_TCOEF_RET_Msk (0xFUL << ANACONF_ANA_CONFIG_DCO400M_2_TRIM_TCOEF_RET_Pos) /*!< Bit mask of TRIM_TCOEF_RET field. */

/* Bits 20..16 :   */
#define ANACONF_ANA_CONFIG_DCO400M_2_TRIM_VSUP_RET_Pos (16UL) /*!< Position of TRIM_VSUP_RET field. */
#define ANACONF_ANA_CONFIG_DCO400M_2_TRIM_VSUP_RET_Msk (0x1FUL << ANACONF_ANA_CONFIG_DCO400M_2_TRIM_VSUP_RET_Pos) /*!< Bit mask of TRIM_VSUP_RET field. */

/* Bits 15..13 :   */
#define ANACONF_ANA_CONFIG_DCO400M_2_DTB0CFG_RET_Pos (13UL) /*!< Position of DTB0CFG_RET field. */
#define ANACONF_ANA_CONFIG_DCO400M_2_DTB0CFG_RET_Msk (0x7UL << ANACONF_ANA_CONFIG_DCO400M_2_DTB0CFG_RET_Pos) /*!< Bit mask of DTB0CFG_RET field. */

/* Bits 12..10 :   */
#define ANACONF_ANA_CONFIG_DCO400M_2_DTB1CFG_RET_Pos (10UL) /*!< Position of DTB1CFG_RET field. */
#define ANACONF_ANA_CONFIG_DCO400M_2_DTB1CFG_RET_Msk (0x7UL << ANACONF_ANA_CONFIG_DCO400M_2_DTB1CFG_RET_Pos) /*!< Bit mask of DTB1CFG_RET field. */

/* Bits 9..7 :   */
#define ANACONF_ANA_CONFIG_DCO400M_2_DTB2CFG_RET_Pos (7UL) /*!< Position of DTB2CFG_RET field. */
#define ANACONF_ANA_CONFIG_DCO400M_2_DTB2CFG_RET_Msk (0x7UL << ANACONF_ANA_CONFIG_DCO400M_2_DTB2CFG_RET_Pos) /*!< Bit mask of DTB2CFG_RET field. */

/* Bits 6..5 :   */
#define ANACONF_ANA_CONFIG_DCO400M_2_DTB3CFG_RET_Pos (5UL) /*!< Position of DTB3CFG_RET field. */
#define ANACONF_ANA_CONFIG_DCO400M_2_DTB3CFG_RET_Msk (0x3UL << ANACONF_ANA_CONFIG_DCO400M_2_DTB3CFG_RET_Pos) /*!< Bit mask of DTB3CFG_RET field. */

/* Bit 4 :   */
#define ANACONF_ANA_CONFIG_DCO400M_2_PWRUP_AO_Pos (4UL) /*!< Position of PWRUP_AO field. */
#define ANACONF_ANA_CONFIG_DCO400M_2_PWRUP_AO_Msk (0x1UL << ANACONF_ANA_CONFIG_DCO400M_2_PWRUP_AO_Pos) /*!< Bit mask of PWRUP_AO field. */

/* Bit 3 :   */
#define ANACONF_ANA_CONFIG_DCO400M_2_RETAIN_AO_Pos (3UL) /*!< Position of RETAIN_AO field. */
#define ANACONF_ANA_CONFIG_DCO400M_2_RETAIN_AO_Msk (0x1UL << ANACONF_ANA_CONFIG_DCO400M_2_RETAIN_AO_Pos) /*!< Bit mask of RETAIN_AO field. */

/* Bits 2..0 :   */
#define ANACONF_ANA_CONFIG_DCO400M_2_TCFG_RET_Pos (0UL) /*!< Position of TCFG_RET field. */
#define ANACONF_ANA_CONFIG_DCO400M_2_TCFG_RET_Msk (0x7UL << ANACONF_ANA_CONFIG_DCO400M_2_TCFG_RET_Pos) /*!< Bit mask of TCFG_RET field. */

/* Register: ANACONF_ANA_CONFIG_VDET_AO_0V8_0 */
/* Description: Control signals for additional analog modules (VDET_AO_0V8_0) */

/* Bits 15..13 :   */
#define ANACONF_ANA_CONFIG_VDET_AO_0V8_0_ATB0CFG_RET_Pos (13UL) /*!< Position of ATB0CFG_RET field. */
#define ANACONF_ANA_CONFIG_VDET_AO_0V8_0_ATB0CFG_RET_Msk (0x7UL << ANACONF_ANA_CONFIG_VDET_AO_0V8_0_ATB0CFG_RET_Pos) /*!< Bit mask of ATB0CFG_RET field. */

/* Bits 12..11 :   */
#define ANACONF_ANA_CONFIG_VDET_AO_0V8_0_ATB1CFG_RET_Pos (11UL) /*!< Position of ATB1CFG_RET field. */
#define ANACONF_ANA_CONFIG_VDET_AO_0V8_0_ATB1CFG_RET_Msk (0x3UL << ANACONF_ANA_CONFIG_VDET_AO_0V8_0_ATB1CFG_RET_Pos) /*!< Bit mask of ATB1CFG_RET field. */

/* Bits 10..7 :   */
#define ANACONF_ANA_CONFIG_VDET_AO_0V8_0_DTB0CFG_RET_Pos (7UL) /*!< Position of DTB0CFG_RET field. */
#define ANACONF_ANA_CONFIG_VDET_AO_0V8_0_DTB0CFG_RET_Msk (0xFUL << ANACONF_ANA_CONFIG_VDET_AO_0V8_0_DTB0CFG_RET_Pos) /*!< Bit mask of DTB0CFG_RET field. */

/* Bits 6..3 :   */
#define ANACONF_ANA_CONFIG_VDET_AO_0V8_0_DTB1CFG_RET_Pos (3UL) /*!< Position of DTB1CFG_RET field. */
#define ANACONF_ANA_CONFIG_VDET_AO_0V8_0_DTB1CFG_RET_Msk (0xFUL << ANACONF_ANA_CONFIG_VDET_AO_0V8_0_DTB1CFG_RET_Pos) /*!< Bit mask of DTB1CFG_RET field. */

/* Bit 2 :   */
#define ANACONF_ANA_CONFIG_VDET_AO_0V8_0_MODE_LP_AO_Pos (2UL) /*!< Position of MODE_LP_AO field. */
#define ANACONF_ANA_CONFIG_VDET_AO_0V8_0_MODE_LP_AO_Msk (0x1UL << ANACONF_ANA_CONFIG_VDET_AO_0V8_0_MODE_LP_AO_Pos) /*!< Bit mask of MODE_LP_AO field. */

/* Bit 1 :   */
#define ANACONF_ANA_CONFIG_VDET_AO_0V8_0_MODE_ULPR_AO_Pos (1UL) /*!< Position of MODE_ULPR_AO field. */
#define ANACONF_ANA_CONFIG_VDET_AO_0V8_0_MODE_ULPR_AO_Msk (0x1UL << ANACONF_ANA_CONFIG_VDET_AO_0V8_0_MODE_ULPR_AO_Pos) /*!< Bit mask of MODE_ULPR_AO field. */

/* Bit 0 :   */
#define ANACONF_ANA_CONFIG_VDET_AO_0V8_0_PWRUP_AO_Pos (0UL) /*!< Position of PWRUP_AO field. */
#define ANACONF_ANA_CONFIG_VDET_AO_0V8_0_PWRUP_AO_Msk (0x1UL << ANACONF_ANA_CONFIG_VDET_AO_0V8_0_PWRUP_AO_Pos) /*!< Bit mask of PWRUP_AO field. */

/* Register: ANACONF_ANA_CONFIG_VDET_AO_0V8_1 */
/* Description: Control signals for additional analog modules (VDET_AO_0V8_1) */

/* Bit 31 :   */
#define ANACONF_ANA_CONFIG_VDET_AO_0V8_1_RETAIN_AO_Pos (31UL) /*!< Position of RETAIN_AO field. */
#define ANACONF_ANA_CONFIG_VDET_AO_0V8_1_RETAIN_AO_Msk (0x1UL << ANACONF_ANA_CONFIG_VDET_AO_0V8_1_RETAIN_AO_Pos) /*!< Bit mask of RETAIN_AO field. */

/* Bits 30..23 :   */
#define ANACONF_ANA_CONFIG_VDET_AO_0V8_1_TCFG_RET_Pos (23UL) /*!< Position of TCFG_RET field. */
#define ANACONF_ANA_CONFIG_VDET_AO_0V8_1_TCFG_RET_Msk (0xFFUL << ANACONF_ANA_CONFIG_VDET_AO_0V8_1_TCFG_RET_Pos) /*!< Bit mask of TCFG_RET field. */

/* Bits 22..20 :   */
#define ANACONF_ANA_CONFIG_VDET_AO_0V8_1_BOD_TRIM_RET_Pos (20UL) /*!< Position of BOD_TRIM_RET field. */
#define ANACONF_ANA_CONFIG_VDET_AO_0V8_1_BOD_TRIM_RET_Msk (0x7UL << ANACONF_ANA_CONFIG_VDET_AO_0V8_1_BOD_TRIM_RET_Pos) /*!< Bit mask of BOD_TRIM_RET field. */

/* Bits 19..14 :   */
#define ANACONF_ANA_CONFIG_VDET_AO_0V8_1_BOD_VOLT_RET_Pos (14UL) /*!< Position of BOD_VOLT_RET field. */
#define ANACONF_ANA_CONFIG_VDET_AO_0V8_1_BOD_VOLT_RET_Msk (0x3FUL << ANACONF_ANA_CONFIG_VDET_AO_0V8_1_BOD_VOLT_RET_Pos) /*!< Bit mask of BOD_VOLT_RET field. */

/* Bits 13..11 :   */
#define ANACONF_ANA_CONFIG_VDET_AO_0V8_1_CFG_RET_Pos (11UL) /*!< Position of CFG_RET field. */
#define ANACONF_ANA_CONFIG_VDET_AO_0V8_1_CFG_RET_Msk (0x7UL << ANACONF_ANA_CONFIG_VDET_AO_0V8_1_CFG_RET_Pos) /*!< Bit mask of CFG_RET field. */

/* Bit 10 :   */
#define ANACONF_ANA_CONFIG_VDET_AO_0V8_1_PGD_CANCEL_AO_Pos (10UL) /*!< Position of PGD_CANCEL_AO field. */
#define ANACONF_ANA_CONFIG_VDET_AO_0V8_1_PGD_CANCEL_AO_Msk (0x1UL << ANACONF_ANA_CONFIG_VDET_AO_0V8_1_PGD_CANCEL_AO_Pos) /*!< Bit mask of PGD_CANCEL_AO field. */

/* Bit 9 :   */
#define ANACONF_ANA_CONFIG_VDET_AO_0V8_1_PGD_REQUEST_AO_Pos (9UL) /*!< Position of PGD_REQUEST_AO field. */
#define ANACONF_ANA_CONFIG_VDET_AO_0V8_1_PGD_REQUEST_AO_Msk (0x1UL << ANACONF_ANA_CONFIG_VDET_AO_0V8_1_PGD_REQUEST_AO_Pos) /*!< Bit mask of PGD_REQUEST_AO field. */

/* Bits 8..6 :   */
#define ANACONF_ANA_CONFIG_VDET_AO_0V8_1_PGD_TRIM_RET_Pos (6UL) /*!< Position of PGD_TRIM_RET field. */
#define ANACONF_ANA_CONFIG_VDET_AO_0V8_1_PGD_TRIM_RET_Msk (0x7UL << ANACONF_ANA_CONFIG_VDET_AO_0V8_1_PGD_TRIM_RET_Pos) /*!< Bit mask of PGD_TRIM_RET field. */

/* Bits 5..0 :   */
#define ANACONF_ANA_CONFIG_VDET_AO_0V8_1_PGD_VOLT_RET_Pos (0UL) /*!< Position of PGD_VOLT_RET field. */
#define ANACONF_ANA_CONFIG_VDET_AO_0V8_1_PGD_VOLT_RET_Msk (0x3FUL << ANACONF_ANA_CONFIG_VDET_AO_0V8_1_PGD_VOLT_RET_Pos) /*!< Bit mask of PGD_VOLT_RET field. */

/* Register: ANACONF_ANA_CONFIG_LDO_5V_1V8_100MA_0 */
/* Description: Control signals for additional analog modules (LDO_5V_1V8_100MA_0) */

/* Bits 2..0 :   */
#define ANACONF_ANA_CONFIG_LDO_5V_1V8_100MA_0_ATB0CFG_RET_Pos (0UL) /*!< Position of ATB0CFG_RET field. */
#define ANACONF_ANA_CONFIG_LDO_5V_1V8_100MA_0_ATB0CFG_RET_Msk (0x7UL << ANACONF_ANA_CONFIG_LDO_5V_1V8_100MA_0_ATB0CFG_RET_Pos) /*!< Bit mask of ATB0CFG_RET field. */

/* Register: ANACONF_ANA_CONFIG_LDO_5V_1V8_100MA_1 */
/* Description: Control signals for additional analog modules (LDO_5V_1V8_100MA_1) */

/* Bits 29..27 :   */
#define ANACONF_ANA_CONFIG_LDO_5V_1V8_100MA_1_ATB1CFG_RET_Pos (27UL) /*!< Position of ATB1CFG_RET field. */
#define ANACONF_ANA_CONFIG_LDO_5V_1V8_100MA_1_ATB1CFG_RET_Msk (0x7UL << ANACONF_ANA_CONFIG_LDO_5V_1V8_100MA_1_ATB1CFG_RET_Pos) /*!< Bit mask of ATB1CFG_RET field. */

/* Bits 26..24 :   */
#define ANACONF_ANA_CONFIG_LDO_5V_1V8_100MA_1_DTB0CFG_RET_Pos (24UL) /*!< Position of DTB0CFG_RET field. */
#define ANACONF_ANA_CONFIG_LDO_5V_1V8_100MA_1_DTB0CFG_RET_Msk (0x7UL << ANACONF_ANA_CONFIG_LDO_5V_1V8_100MA_1_DTB0CFG_RET_Pos) /*!< Bit mask of DTB0CFG_RET field. */

/* Bits 23..21 :   */
#define ANACONF_ANA_CONFIG_LDO_5V_1V8_100MA_1_DTB1CFG_RET_Pos (21UL) /*!< Position of DTB1CFG_RET field. */
#define ANACONF_ANA_CONFIG_LDO_5V_1V8_100MA_1_DTB1CFG_RET_Msk (0x7UL << ANACONF_ANA_CONFIG_LDO_5V_1V8_100MA_1_DTB1CFG_RET_Pos) /*!< Bit mask of DTB1CFG_RET field. */

/* Bits 20..18 :   */
#define ANACONF_ANA_CONFIG_LDO_5V_1V8_100MA_1_DTB2CFG_RET_Pos (18UL) /*!< Position of DTB2CFG_RET field. */
#define ANACONF_ANA_CONFIG_LDO_5V_1V8_100MA_1_DTB2CFG_RET_Msk (0x7UL << ANACONF_ANA_CONFIG_LDO_5V_1V8_100MA_1_DTB2CFG_RET_Pos) /*!< Bit mask of DTB2CFG_RET field. */

/* Bits 17..15 :   */
#define ANACONF_ANA_CONFIG_LDO_5V_1V8_100MA_1_DTB3CFG_RET_Pos (15UL) /*!< Position of DTB3CFG_RET field. */
#define ANACONF_ANA_CONFIG_LDO_5V_1V8_100MA_1_DTB3CFG_RET_Msk (0x7UL << ANACONF_ANA_CONFIG_LDO_5V_1V8_100MA_1_DTB3CFG_RET_Pos) /*!< Bit mask of DTB3CFG_RET field. */

/* Bits 14..7 :   */
#define ANACONF_ANA_CONFIG_LDO_5V_1V8_100MA_1_CFG_RET_Pos (7UL) /*!< Position of CFG_RET field. */
#define ANACONF_ANA_CONFIG_LDO_5V_1V8_100MA_1_CFG_RET_Msk (0xFFUL << ANACONF_ANA_CONFIG_LDO_5V_1V8_100MA_1_CFG_RET_Pos) /*!< Bit mask of CFG_RET field. */

/* Bits 6..0 :   */
#define ANACONF_ANA_CONFIG_LDO_5V_1V8_100MA_1_TRIM_BIAS_RET_Pos (0UL) /*!< Position of TRIM_BIAS_RET field. */
#define ANACONF_ANA_CONFIG_LDO_5V_1V8_100MA_1_TRIM_BIAS_RET_Msk (0x7FUL << ANACONF_ANA_CONFIG_LDO_5V_1V8_100MA_1_TRIM_BIAS_RET_Pos) /*!< Bit mask of TRIM_BIAS_RET field. */

/* Register: ANACONF_ANA_CONFIG_LDO_5V_1V8_100MA_2 */
/* Description: Control signals for additional analog modules (LDO_5V_1V8_100MA_2) */

/* Bits 26..25 :   */
#define ANACONF_ANA_CONFIG_LDO_5V_1V8_100MA_2_TRIM_LPD_RET_Pos (25UL) /*!< Position of TRIM_LPD_RET field. */
#define ANACONF_ANA_CONFIG_LDO_5V_1V8_100MA_2_TRIM_LPD_RET_Msk (0x3UL << ANACONF_ANA_CONFIG_LDO_5V_1V8_100MA_2_TRIM_LPD_RET_Pos) /*!< Bit mask of TRIM_LPD_RET field. */

/* Bits 24..22 :   */
#define ANACONF_ANA_CONFIG_LDO_5V_1V8_100MA_2_TRIM_LP_RET_Pos (22UL) /*!< Position of TRIM_LP_RET field. */
#define ANACONF_ANA_CONFIG_LDO_5V_1V8_100MA_2_TRIM_LP_RET_Msk (0x7UL << ANACONF_ANA_CONFIG_LDO_5V_1V8_100MA_2_TRIM_LP_RET_Pos) /*!< Bit mask of TRIM_LP_RET field. */

/* Bits 21..18 :   */
#define ANACONF_ANA_CONFIG_LDO_5V_1V8_100MA_2_TRIM_VREF_RET_Pos (18UL) /*!< Position of TRIM_VREF_RET field. */
#define ANACONF_ANA_CONFIG_LDO_5V_1V8_100MA_2_TRIM_VREF_RET_Msk (0xFUL << ANACONF_ANA_CONFIG_LDO_5V_1V8_100MA_2_TRIM_VREF_RET_Pos) /*!< Bit mask of TRIM_VREF_RET field. */

/* Bits 17..15 :   */
#define ANACONF_ANA_CONFIG_LDO_5V_1V8_100MA_2_VOLT_HP_RET_Pos (15UL) /*!< Position of VOLT_HP_RET field. */
#define ANACONF_ANA_CONFIG_LDO_5V_1V8_100MA_2_VOLT_HP_RET_Msk (0x7UL << ANACONF_ANA_CONFIG_LDO_5V_1V8_100MA_2_VOLT_HP_RET_Pos) /*!< Bit mask of VOLT_HP_RET field. */

/* Bits 14..12 :   */
#define ANACONF_ANA_CONFIG_LDO_5V_1V8_100MA_2_VOLT_LP_RET_Pos (12UL) /*!< Position of VOLT_LP_RET field. */
#define ANACONF_ANA_CONFIG_LDO_5V_1V8_100MA_2_VOLT_LP_RET_Msk (0x7UL << ANACONF_ANA_CONFIG_LDO_5V_1V8_100MA_2_VOLT_LP_RET_Pos) /*!< Bit mask of VOLT_LP_RET field. */

/* Bit 11 :   */
#define ANACONF_ANA_CONFIG_LDO_5V_1V8_100MA_2_MODE_LP_AO_Pos (11UL) /*!< Position of MODE_LP_AO field. */
#define ANACONF_ANA_CONFIG_LDO_5V_1V8_100MA_2_MODE_LP_AO_Msk (0x1UL << ANACONF_ANA_CONFIG_LDO_5V_1V8_100MA_2_MODE_LP_AO_Pos) /*!< Bit mask of MODE_LP_AO field. */

/* Bit 10 :   */
#define ANACONF_ANA_CONFIG_LDO_5V_1V8_100MA_2_MODE_ULP_AO_Pos (10UL) /*!< Position of MODE_ULP_AO field. */
#define ANACONF_ANA_CONFIG_LDO_5V_1V8_100MA_2_MODE_ULP_AO_Msk (0x1UL << ANACONF_ANA_CONFIG_LDO_5V_1V8_100MA_2_MODE_ULP_AO_Pos) /*!< Bit mask of MODE_ULP_AO field. */

/* Bit 9 :   */
#define ANACONF_ANA_CONFIG_LDO_5V_1V8_100MA_2_PWRUP_AO_Pos (9UL) /*!< Position of PWRUP_AO field. */
#define ANACONF_ANA_CONFIG_LDO_5V_1V8_100MA_2_PWRUP_AO_Msk (0x1UL << ANACONF_ANA_CONFIG_LDO_5V_1V8_100MA_2_PWRUP_AO_Pos) /*!< Bit mask of PWRUP_AO field. */

/* Bit 8 :   */
#define ANACONF_ANA_CONFIG_LDO_5V_1V8_100MA_2_RETAIN_AO_Pos (8UL) /*!< Position of RETAIN_AO field. */
#define ANACONF_ANA_CONFIG_LDO_5V_1V8_100MA_2_RETAIN_AO_Msk (0x1UL << ANACONF_ANA_CONFIG_LDO_5V_1V8_100MA_2_RETAIN_AO_Pos) /*!< Bit mask of RETAIN_AO field. */

/* Bits 7..0 :   */
#define ANACONF_ANA_CONFIG_LDO_5V_1V8_100MA_2_TCFG_RET_Pos (0UL) /*!< Position of TCFG_RET field. */
#define ANACONF_ANA_CONFIG_LDO_5V_1V8_100MA_2_TCFG_RET_Msk (0xFFUL << ANACONF_ANA_CONFIG_LDO_5V_1V8_100MA_2_TCFG_RET_Pos) /*!< Bit mask of TCFG_RET field. */

/* Register: ANACONF_ANA_CONFIG_LDO_1V8_0V8_50MA_0 */
/* Description: Control signals for additional analog modules (LDO_1V8_0V8_50MA_0) */

/* Bits 16..13 :   */
#define ANACONF_ANA_CONFIG_LDO_1V8_0V8_50MA_0_ATE_RET_Pos (13UL) /*!< Position of ATE_RET field. */
#define ANACONF_ANA_CONFIG_LDO_1V8_0V8_50MA_0_ATE_RET_Msk (0xFUL << ANACONF_ANA_CONFIG_LDO_1V8_0V8_50MA_0_ATE_RET_Pos) /*!< Bit mask of ATE_RET field. */

/* Bit 12 :   */
#define ANACONF_ANA_CONFIG_LDO_1V8_0V8_50MA_0_CAL_EN_RET_Pos (12UL) /*!< Position of CAL_EN_RET field. */
#define ANACONF_ANA_CONFIG_LDO_1V8_0V8_50MA_0_CAL_EN_RET_Msk (0x1UL << ANACONF_ANA_CONFIG_LDO_1V8_0V8_50MA_0_CAL_EN_RET_Pos) /*!< Bit mask of CAL_EN_RET field. */

/* Bits 11..9 :   */
#define ANACONF_ANA_CONFIG_LDO_1V8_0V8_50MA_0_DTE_RET_Pos (9UL) /*!< Position of DTE_RET field. */
#define ANACONF_ANA_CONFIG_LDO_1V8_0V8_50MA_0_DTE_RET_Msk (0x7UL << ANACONF_ANA_CONFIG_LDO_1V8_0V8_50MA_0_DTE_RET_Pos) /*!< Bit mask of DTE_RET field. */

/* Bits 8..5 :   */
#define ANACONF_ANA_CONFIG_LDO_1V8_0V8_50MA_0_CFG_RET_Pos (5UL) /*!< Position of CFG_RET field. */
#define ANACONF_ANA_CONFIG_LDO_1V8_0V8_50MA_0_CFG_RET_Msk (0xFUL << ANACONF_ANA_CONFIG_LDO_1V8_0V8_50MA_0_CFG_RET_Pos) /*!< Bit mask of CFG_RET field. */

/* Bit 4 :   */
#define ANACONF_ANA_CONFIG_LDO_1V8_0V8_50MA_0_SOFT_START_RET_Pos (4UL) /*!< Position of SOFT_START_RET field. */
#define ANACONF_ANA_CONFIG_LDO_1V8_0V8_50MA_0_SOFT_START_RET_Msk (0x1UL << ANACONF_ANA_CONFIG_LDO_1V8_0V8_50MA_0_SOFT_START_RET_Pos) /*!< Bit mask of SOFT_START_RET field. */

/* Bits 3..0 :   */
#define ANACONF_ANA_CONFIG_LDO_1V8_0V8_50MA_0_TRIM_HP_RET_Pos (0UL) /*!< Position of TRIM_HP_RET field. */
#define ANACONF_ANA_CONFIG_LDO_1V8_0V8_50MA_0_TRIM_HP_RET_Msk (0xFUL << ANACONF_ANA_CONFIG_LDO_1V8_0V8_50MA_0_TRIM_HP_RET_Pos) /*!< Bit mask of TRIM_HP_RET field. */

/* Register: ANACONF_ANA_CONFIG_LDO_1V8_0V8_50MA_1 */
/* Description: Control signals for additional analog modules (LDO_1V8_0V8_50MA_1) */

/* Bits 31..28 :   */
#define ANACONF_ANA_CONFIG_LDO_1V8_0V8_50MA_1_TRIM_LP_RET_Pos (28UL) /*!< Position of TRIM_LP_RET field. */
#define ANACONF_ANA_CONFIG_LDO_1V8_0V8_50MA_1_TRIM_LP_RET_Msk (0xFUL << ANACONF_ANA_CONFIG_LDO_1V8_0V8_50MA_1_TRIM_LP_RET_Pos) /*!< Bit mask of TRIM_LP_RET field. */

/* Bits 27..21 :   */
#define ANACONF_ANA_CONFIG_LDO_1V8_0V8_50MA_1_TRIM_VREF_RET_Pos (21UL) /*!< Position of TRIM_VREF_RET field. */
#define ANACONF_ANA_CONFIG_LDO_1V8_0V8_50MA_1_TRIM_VREF_RET_Msk (0x7FUL << ANACONF_ANA_CONFIG_LDO_1V8_0V8_50MA_1_TRIM_VREF_RET_Pos) /*!< Bit mask of TRIM_VREF_RET field. */

/* Bits 20..15 :   */
#define ANACONF_ANA_CONFIG_LDO_1V8_0V8_50MA_1_VOLT_HP_RET_Pos (15UL) /*!< Position of VOLT_HP_RET field. */
#define ANACONF_ANA_CONFIG_LDO_1V8_0V8_50MA_1_VOLT_HP_RET_Msk (0x3FUL << ANACONF_ANA_CONFIG_LDO_1V8_0V8_50MA_1_VOLT_HP_RET_Pos) /*!< Bit mask of VOLT_HP_RET field. */

/* Bits 14..9 :   */
#define ANACONF_ANA_CONFIG_LDO_1V8_0V8_50MA_1_VOLT_LP_RET_Pos (9UL) /*!< Position of VOLT_LP_RET field. */
#define ANACONF_ANA_CONFIG_LDO_1V8_0V8_50MA_1_VOLT_LP_RET_Msk (0x3FUL << ANACONF_ANA_CONFIG_LDO_1V8_0V8_50MA_1_VOLT_LP_RET_Pos) /*!< Bit mask of VOLT_LP_RET field. */

/* Bit 8 :   */
#define ANACONF_ANA_CONFIG_LDO_1V8_0V8_50MA_1_MODE_LP_AO_Pos (8UL) /*!< Position of MODE_LP_AO field. */
#define ANACONF_ANA_CONFIG_LDO_1V8_0V8_50MA_1_MODE_LP_AO_Msk (0x1UL << ANACONF_ANA_CONFIG_LDO_1V8_0V8_50MA_1_MODE_LP_AO_Pos) /*!< Bit mask of MODE_LP_AO field. */

/* Bit 7 :   */
#define ANACONF_ANA_CONFIG_LDO_1V8_0V8_50MA_1_MODE_ULP_AO_Pos (7UL) /*!< Position of MODE_ULP_AO field. */
#define ANACONF_ANA_CONFIG_LDO_1V8_0V8_50MA_1_MODE_ULP_AO_Msk (0x1UL << ANACONF_ANA_CONFIG_LDO_1V8_0V8_50MA_1_MODE_ULP_AO_Pos) /*!< Bit mask of MODE_ULP_AO field. */

/* Bit 6 :   */
#define ANACONF_ANA_CONFIG_LDO_1V8_0V8_50MA_1_PWRUP_AO_Pos (6UL) /*!< Position of PWRUP_AO field. */
#define ANACONF_ANA_CONFIG_LDO_1V8_0V8_50MA_1_PWRUP_AO_Msk (0x1UL << ANACONF_ANA_CONFIG_LDO_1V8_0V8_50MA_1_PWRUP_AO_Pos) /*!< Bit mask of PWRUP_AO field. */

/* Bit 5 :   */
#define ANACONF_ANA_CONFIG_LDO_1V8_0V8_50MA_1_RETAIN_AO_Pos (5UL) /*!< Position of RETAIN_AO field. */
#define ANACONF_ANA_CONFIG_LDO_1V8_0V8_50MA_1_RETAIN_AO_Msk (0x1UL << ANACONF_ANA_CONFIG_LDO_1V8_0V8_50MA_1_RETAIN_AO_Pos) /*!< Bit mask of RETAIN_AO field. */

/* Bits 4..0 :   */
#define ANACONF_ANA_CONFIG_LDO_1V8_0V8_50MA_1_TCFG_RET_Pos (0UL) /*!< Position of TCFG_RET field. */
#define ANACONF_ANA_CONFIG_LDO_1V8_0V8_50MA_1_TCFG_RET_Msk (0x1FUL << ANACONF_ANA_CONFIG_LDO_1V8_0V8_50MA_1_TCFG_RET_Pos) /*!< Bit mask of TCFG_RET field. */

/* Register: ANACONF_ANA_CONFIG_POWER_SWITCH_BLOB */
/* Description: Control signals for the PowerSwitchBlob and BILS module. For details on control of BILS refer to analog design description anaip_1017. */

/* Bit 16 :   */
#define ANACONF_ANA_CONFIG_POWER_SWITCH_BLOB_DTB1CFG_BILS_Pos (16UL) /*!< Position of DTB1CFG_BILS field. */
#define ANACONF_ANA_CONFIG_POWER_SWITCH_BLOB_DTB1CFG_BILS_Msk (0x1UL << ANACONF_ANA_CONFIG_POWER_SWITCH_BLOB_DTB1CFG_BILS_Pos) /*!< Bit mask of DTB1CFG_BILS field. */

/* Bit 15 :   */
#define ANACONF_ANA_CONFIG_POWER_SWITCH_BLOB_DTB0CFG_BILS_Pos (15UL) /*!< Position of DTB0CFG_BILS field. */
#define ANACONF_ANA_CONFIG_POWER_SWITCH_BLOB_DTB0CFG_BILS_Msk (0x1UL << ANACONF_ANA_CONFIG_POWER_SWITCH_BLOB_DTB0CFG_BILS_Pos) /*!< Bit mask of DTB0CFG_BILS field. */

/* Bit 14 :   */
#define ANACONF_ANA_CONFIG_POWER_SWITCH_BLOB_ATB1CFG_BILS_Pos (14UL) /*!< Position of ATB1CFG_BILS field. */
#define ANACONF_ANA_CONFIG_POWER_SWITCH_BLOB_ATB1CFG_BILS_Msk (0x1UL << ANACONF_ANA_CONFIG_POWER_SWITCH_BLOB_ATB1CFG_BILS_Pos) /*!< Bit mask of ATB1CFG_BILS field. */

/* Bit 13 :   */
#define ANACONF_ANA_CONFIG_POWER_SWITCH_BLOB_ATB0CFG_BILS_Pos (13UL) /*!< Position of ATB0CFG_BILS field. */
#define ANACONF_ANA_CONFIG_POWER_SWITCH_BLOB_ATB0CFG_BILS_Msk (0x1UL << ANACONF_ANA_CONFIG_POWER_SWITCH_BLOB_ATB0CFG_BILS_Pos) /*!< Bit mask of ATB0CFG_BILS field. */

/* Bit 12 :   */
#define ANACONF_ANA_CONFIG_POWER_SWITCH_BLOB_BILS_MEASMODET_Pos (12UL) /*!< Position of BILS_MEASMODET field. */
#define ANACONF_ANA_CONFIG_POWER_SWITCH_BLOB_BILS_MEASMODET_Msk (0x1UL << ANACONF_ANA_CONFIG_POWER_SWITCH_BLOB_BILS_MEASMODET_Pos) /*!< Bit mask of BILS_MEASMODET field. */

/* Bit 11 :   */
#define ANACONF_ANA_CONFIG_POWER_SWITCH_BLOB_BILS_OUTMODE_Pos (11UL) /*!< Position of BILS_OUTMODE field. */
#define ANACONF_ANA_CONFIG_POWER_SWITCH_BLOB_BILS_OUTMODE_Msk (0x1UL << ANACONF_ANA_CONFIG_POWER_SWITCH_BLOB_BILS_OUTMODE_Pos) /*!< Bit mask of BILS_OUTMODE field. */

/* Bit 10 :   */
#define ANACONF_ANA_CONFIG_POWER_SWITCH_BLOB_BILS_ENABLE_Pos (10UL) /*!< Position of BILS_ENABLE field. */
#define ANACONF_ANA_CONFIG_POWER_SWITCH_BLOB_BILS_ENABLE_Msk (0x1UL << ANACONF_ANA_CONFIG_POWER_SWITCH_BLOB_BILS_ENABLE_Pos) /*!< Bit mask of BILS_ENABLE field. */

/* Bit 9 :   */
#define ANACONF_ANA_CONFIG_POWER_SWITCH_BLOB_PWRUP_BILS_AO_Pos (9UL) /*!< Position of PWRUP_BILS_AO field. */
#define ANACONF_ANA_CONFIG_POWER_SWITCH_BLOB_PWRUP_BILS_AO_Msk (0x1UL << ANACONF_ANA_CONFIG_POWER_SWITCH_BLOB_PWRUP_BILS_AO_Pos) /*!< Bit mask of PWRUP_BILS_AO field. */

/* Bit 8 :   */
#define ANACONF_ANA_CONFIG_POWER_SWITCH_BLOB_SCAN_TEST_Pos (8UL) /*!< Position of SCAN_TEST field. */
#define ANACONF_ANA_CONFIG_POWER_SWITCH_BLOB_SCAN_TEST_Msk (0x1UL << ANACONF_ANA_CONFIG_POWER_SWITCH_BLOB_SCAN_TEST_Pos) /*!< Bit mask of SCAN_TEST field. */

/* Bits 7..4 :   */
#define ANACONF_ANA_CONFIG_POWER_SWITCH_BLOB_BLOB_DURATION_Pos (4UL) /*!< Position of BLOB_DURATION field. */
#define ANACONF_ANA_CONFIG_POWER_SWITCH_BLOB_BLOB_DURATION_Msk (0xFUL << ANACONF_ANA_CONFIG_POWER_SWITCH_BLOB_BLOB_DURATION_Pos) /*!< Bit mask of BLOB_DURATION field. */

/* Bit 3 :   */
#define ANACONF_ANA_CONFIG_POWER_SWITCH_BLOB_BLOB_START_SIGNAL_Pos (3UL) /*!< Position of BLOB_START_SIGNAL field. */
#define ANACONF_ANA_CONFIG_POWER_SWITCH_BLOB_BLOB_START_SIGNAL_Msk (0x1UL << ANACONF_ANA_CONFIG_POWER_SWITCH_BLOB_BLOB_START_SIGNAL_Pos) /*!< Bit mask of BLOB_START_SIGNAL field. */

/* Bit 1 :   */
#define ANACONF_ANA_CONFIG_POWER_SWITCH_BLOB_BLOB_ASYNC_RESET_Pos (1UL) /*!< Position of BLOB_ASYNC_RESET field. */
#define ANACONF_ANA_CONFIG_POWER_SWITCH_BLOB_BLOB_ASYNC_RESET_Msk (0x1UL << ANACONF_ANA_CONFIG_POWER_SWITCH_BLOB_BLOB_ASYNC_RESET_Pos) /*!< Bit mask of BLOB_ASYNC_RESET field. */

/* Bit 0 :   */
#define ANACONF_ANA_CONFIG_POWER_SWITCH_BLOB_BLOB_PWR_SWITCH_EN_Pos (0UL) /*!< Position of BLOB_PWR_SWITCH_EN field. */
#define ANACONF_ANA_CONFIG_POWER_SWITCH_BLOB_BLOB_PWR_SWITCH_EN_Msk (0x1UL << ANACONF_ANA_CONFIG_POWER_SWITCH_BLOB_BLOB_PWR_SWITCH_EN_Pos) /*!< Bit mask of BLOB_PWR_SWITCH_EN field. */

/* Register: ANACONF_ANA_CONFIG35 */
/* Description: Control signals for additional analog modules (35) */

/* Bits 31..0 : Outputs from digital */
#define ANACONF_ANA_CONFIG35_OUT_Pos (0UL) /*!< Position of OUT field. */
#define ANACONF_ANA_CONFIG35_OUT_Msk (0xFFFFFFFFUL << ANACONF_ANA_CONFIG35_OUT_Pos) /*!< Bit mask of OUT field. */

/* Register: ANACONF_ANA_CONFIG36 */
/* Description: Control signals for additional analog modules (36) */

/* Bits 31..0 : Outputs from digital */
#define ANACONF_ANA_CONFIG36_OUT_Pos (0UL) /*!< Position of OUT field. */
#define ANACONF_ANA_CONFIG36_OUT_Msk (0xFFFFFFFFUL << ANACONF_ANA_CONFIG36_OUT_Pos) /*!< Bit mask of OUT field. */

/* Register: ANACONF_ANA_CONFIG37 */
/* Description: Control signals for additional analog modules (37) */

/* Bits 31..0 : Outputs from digital */
#define ANACONF_ANA_CONFIG37_OUT_Pos (0UL) /*!< Position of OUT field. */
#define ANACONF_ANA_CONFIG37_OUT_Msk (0xFFFFFFFFUL << ANACONF_ANA_CONFIG37_OUT_Pos) /*!< Bit mask of OUT field. */

/* Register: ANACONF_ANA_CONFIG38 */
/* Description: Control signals for additional analog modules (38) */

/* Bits 31..0 : Outputs from digital */
#define ANACONF_ANA_CONFIG38_OUT_Pos (0UL) /*!< Position of OUT field. */
#define ANACONF_ANA_CONFIG38_OUT_Msk (0xFFFFFFFFUL << ANACONF_ANA_CONFIG38_OUT_Pos) /*!< Bit mask of OUT field. */

/* Register: ANACONF_ANA_CONFIG39 */
/* Description: Control signals for additional analog modules (39) */

/* Bits 31..0 : Outputs from digital */
#define ANACONF_ANA_CONFIG39_OUT_Pos (0UL) /*!< Position of OUT field. */
#define ANACONF_ANA_CONFIG39_OUT_Msk (0xFFFFFFFFUL << ANACONF_ANA_CONFIG39_OUT_Pos) /*!< Bit mask of OUT field. */

/* Register: ANACONF_BLOB_STATUS */
/* Description: Status signal from the PowerSwitchBlob */

/* Bit 0 : Checksum OK */
#define ANACONF_BLOB_STATUS_CHECK_OK_Pos (0UL) /*!< Position of CHECK_OK field. */
#define ANACONF_BLOB_STATUS_CHECK_OK_Msk (0x1UL << ANACONF_BLOB_STATUS_CHECK_OK_Pos) /*!< Bit mask of CHECK_OK field. */


/* Peripheral: CCM */
/* Description: AES CCM Mode Encryption */

/* Register: CCM_TASKS_START */
/* Description: Fetches AES Key and CCM Nonce from CONFIGPTR job list into the KEY and NONCE registers. Continues with the encryption/decryption. This operation will stop by itself when completed. */

/* Bit 0 : Fetches AES Key and CCM Nonce from CONFIGPTR job list into the KEY and NONCE registers. Continues with the encryption/decryption. This operation will stop by itself when completed. */
#define CCM_TASKS_START_TASKS_START_Pos (0UL) /*!< Position of TASKS_START field. */
#define CCM_TASKS_START_TASKS_START_Msk (0x1UL << CCM_TASKS_START_TASKS_START_Pos) /*!< Bit mask of TASKS_START field. */
#define CCM_TASKS_START_TASKS_START_Trigger (0x1UL) /*!< Trigger task */

/* Register: CCM_TASKS_STOP */
/* Description: Stop encryption/decryption */

/* Bit 0 : Stop encryption/decryption */
#define CCM_TASKS_STOP_TASKS_STOP_Pos (0UL) /*!< Position of TASKS_STOP field. */
#define CCM_TASKS_STOP_TASKS_STOP_Msk (0x1UL << CCM_TASKS_STOP_TASKS_STOP_Pos) /*!< Bit mask of TASKS_STOP field. */
#define CCM_TASKS_STOP_TASKS_STOP_Trigger (0x1UL) /*!< Trigger task */

/* Register: CCM_TASKS_RATEOVERRIDE */
/* Description: Override DATARATE setting in MODE register with the contents of the RATEOVERRIDE register for any ongoing encryption/decryption */

/* Bit 0 : Override DATARATE setting in MODE register with the contents of the RATEOVERRIDE register for any ongoing encryption/decryption */
#define CCM_TASKS_RATEOVERRIDE_TASKS_RATEOVERRIDE_Pos (0UL) /*!< Position of TASKS_RATEOVERRIDE field. */
#define CCM_TASKS_RATEOVERRIDE_TASKS_RATEOVERRIDE_Msk (0x1UL << CCM_TASKS_RATEOVERRIDE_TASKS_RATEOVERRIDE_Pos) /*!< Bit mask of TASKS_RATEOVERRIDE field. */
#define CCM_TASKS_RATEOVERRIDE_TASKS_RATEOVERRIDE_Trigger (0x1UL) /*!< Trigger task */

/* Register: CCM_SUBSCRIBE_START */
/* Description: Subscribe configuration for task START */

/* Bit 31 :   */
#define CCM_SUBSCRIBE_START_EN_Pos (31UL) /*!< Position of EN field. */
#define CCM_SUBSCRIBE_START_EN_Msk (0x1UL << CCM_SUBSCRIBE_START_EN_Pos) /*!< Bit mask of EN field. */
#define CCM_SUBSCRIBE_START_EN_Disabled (0x0UL) /*!< Disable subscription */
#define CCM_SUBSCRIBE_START_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task START will subscribe to */
#define CCM_SUBSCRIBE_START_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define CCM_SUBSCRIBE_START_CHIDX_Msk (0xFFUL << CCM_SUBSCRIBE_START_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: CCM_SUBSCRIBE_STOP */
/* Description: Subscribe configuration for task STOP */

/* Bit 31 :   */
#define CCM_SUBSCRIBE_STOP_EN_Pos (31UL) /*!< Position of EN field. */
#define CCM_SUBSCRIBE_STOP_EN_Msk (0x1UL << CCM_SUBSCRIBE_STOP_EN_Pos) /*!< Bit mask of EN field. */
#define CCM_SUBSCRIBE_STOP_EN_Disabled (0x0UL) /*!< Disable subscription */
#define CCM_SUBSCRIBE_STOP_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task STOP will subscribe to */
#define CCM_SUBSCRIBE_STOP_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define CCM_SUBSCRIBE_STOP_CHIDX_Msk (0xFFUL << CCM_SUBSCRIBE_STOP_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: CCM_SUBSCRIBE_RATEOVERRIDE */
/* Description: Subscribe configuration for task RATEOVERRIDE */

/* Bit 31 :   */
#define CCM_SUBSCRIBE_RATEOVERRIDE_EN_Pos (31UL) /*!< Position of EN field. */
#define CCM_SUBSCRIBE_RATEOVERRIDE_EN_Msk (0x1UL << CCM_SUBSCRIBE_RATEOVERRIDE_EN_Pos) /*!< Bit mask of EN field. */
#define CCM_SUBSCRIBE_RATEOVERRIDE_EN_Disabled (0x0UL) /*!< Disable subscription */
#define CCM_SUBSCRIBE_RATEOVERRIDE_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task RATEOVERRIDE will subscribe to */
#define CCM_SUBSCRIBE_RATEOVERRIDE_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define CCM_SUBSCRIBE_RATEOVERRIDE_CHIDX_Msk (0xFFUL << CCM_SUBSCRIBE_RATEOVERRIDE_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: CCM_EVENTS_ENDCONFIG */
/* Description: Configuration data has been loaded */

/* Bit 0 : Configuration data has been loaded */
#define CCM_EVENTS_ENDCONFIG_EVENTS_ENDCONFIG_Pos (0UL) /*!< Position of EVENTS_ENDCONFIG field. */
#define CCM_EVENTS_ENDCONFIG_EVENTS_ENDCONFIG_Msk (0x1UL << CCM_EVENTS_ENDCONFIG_EVENTS_ENDCONFIG_Pos) /*!< Bit mask of EVENTS_ENDCONFIG field. */
#define CCM_EVENTS_ENDCONFIG_EVENTS_ENDCONFIG_NotGenerated (0x0UL) /*!< Event not generated */
#define CCM_EVENTS_ENDCONFIG_EVENTS_ENDCONFIG_Generated (0x1UL) /*!< Event generated */

/* Register: CCM_EVENTS_END */
/* Description: Encrypt/decrypt complete */

/* Bit 0 : Encrypt/decrypt complete */
#define CCM_EVENTS_END_EVENTS_END_Pos (0UL) /*!< Position of EVENTS_END field. */
#define CCM_EVENTS_END_EVENTS_END_Msk (0x1UL << CCM_EVENTS_END_EVENTS_END_Pos) /*!< Bit mask of EVENTS_END field. */
#define CCM_EVENTS_END_EVENTS_END_NotGenerated (0x0UL) /*!< Event not generated */
#define CCM_EVENTS_END_EVENTS_END_Generated (0x1UL) /*!< Event generated */

/* Register: CCM_EVENTS_ERROR */
/* Description: CCM error event */

/* Bit 0 : CCM error event */
#define CCM_EVENTS_ERROR_EVENTS_ERROR_Pos (0UL) /*!< Position of EVENTS_ERROR field. */
#define CCM_EVENTS_ERROR_EVENTS_ERROR_Msk (0x1UL << CCM_EVENTS_ERROR_EVENTS_ERROR_Pos) /*!< Bit mask of EVENTS_ERROR field. */
#define CCM_EVENTS_ERROR_EVENTS_ERROR_NotGenerated (0x0UL) /*!< Event not generated */
#define CCM_EVENTS_ERROR_EVENTS_ERROR_Generated (0x1UL) /*!< Event generated */

/* Register: CCM_PUBLISH_ENDCONFIG */
/* Description: Publish configuration for event ENDCONFIG */

/* Bit 31 :   */
#define CCM_PUBLISH_ENDCONFIG_EN_Pos (31UL) /*!< Position of EN field. */
#define CCM_PUBLISH_ENDCONFIG_EN_Msk (0x1UL << CCM_PUBLISH_ENDCONFIG_EN_Pos) /*!< Bit mask of EN field. */
#define CCM_PUBLISH_ENDCONFIG_EN_Disabled (0x0UL) /*!< Disable publishing */
#define CCM_PUBLISH_ENDCONFIG_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event ENDCONFIG will publish to */
#define CCM_PUBLISH_ENDCONFIG_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define CCM_PUBLISH_ENDCONFIG_CHIDX_Msk (0xFFUL << CCM_PUBLISH_ENDCONFIG_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: CCM_PUBLISH_END */
/* Description: Publish configuration for event END */

/* Bit 31 :   */
#define CCM_PUBLISH_END_EN_Pos (31UL) /*!< Position of EN field. */
#define CCM_PUBLISH_END_EN_Msk (0x1UL << CCM_PUBLISH_END_EN_Pos) /*!< Bit mask of EN field. */
#define CCM_PUBLISH_END_EN_Disabled (0x0UL) /*!< Disable publishing */
#define CCM_PUBLISH_END_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event END will publish to */
#define CCM_PUBLISH_END_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define CCM_PUBLISH_END_CHIDX_Msk (0xFFUL << CCM_PUBLISH_END_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: CCM_PUBLISH_ERROR */
/* Description: Publish configuration for event ERROR */

/* Bit 31 :   */
#define CCM_PUBLISH_ERROR_EN_Pos (31UL) /*!< Position of EN field. */
#define CCM_PUBLISH_ERROR_EN_Msk (0x1UL << CCM_PUBLISH_ERROR_EN_Pos) /*!< Bit mask of EN field. */
#define CCM_PUBLISH_ERROR_EN_Disabled (0x0UL) /*!< Disable publishing */
#define CCM_PUBLISH_ERROR_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event ERROR will publish to */
#define CCM_PUBLISH_ERROR_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define CCM_PUBLISH_ERROR_CHIDX_Msk (0xFFUL << CCM_PUBLISH_ERROR_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: CCM_INTENSET */
/* Description: Enable interrupt */

/* Bit 2 : Write '1' to enable interrupt for event ERROR */
#define CCM_INTENSET_ERROR_Pos (2UL) /*!< Position of ERROR field. */
#define CCM_INTENSET_ERROR_Msk (0x1UL << CCM_INTENSET_ERROR_Pos) /*!< Bit mask of ERROR field. */
#define CCM_INTENSET_ERROR_Disabled (0x0UL) /*!< Read: Disabled */
#define CCM_INTENSET_ERROR_Enabled (0x1UL) /*!< Read: Enabled */
#define CCM_INTENSET_ERROR_Set (0x1UL) /*!< Enable */

/* Bit 1 : Write '1' to enable interrupt for event END */
#define CCM_INTENSET_END_Pos (1UL) /*!< Position of END field. */
#define CCM_INTENSET_END_Msk (0x1UL << CCM_INTENSET_END_Pos) /*!< Bit mask of END field. */
#define CCM_INTENSET_END_Disabled (0x0UL) /*!< Read: Disabled */
#define CCM_INTENSET_END_Enabled (0x1UL) /*!< Read: Enabled */
#define CCM_INTENSET_END_Set (0x1UL) /*!< Enable */

/* Bit 0 : Write '1' to enable interrupt for event ENDCONFIG */
#define CCM_INTENSET_ENDCONFIG_Pos (0UL) /*!< Position of ENDCONFIG field. */
#define CCM_INTENSET_ENDCONFIG_Msk (0x1UL << CCM_INTENSET_ENDCONFIG_Pos) /*!< Bit mask of ENDCONFIG field. */
#define CCM_INTENSET_ENDCONFIG_Disabled (0x0UL) /*!< Read: Disabled */
#define CCM_INTENSET_ENDCONFIG_Enabled (0x1UL) /*!< Read: Enabled */
#define CCM_INTENSET_ENDCONFIG_Set (0x1UL) /*!< Enable */

/* Register: CCM_INTENCLR */
/* Description: Disable interrupt */

/* Bit 2 : Write '1' to disable interrupt for event ERROR */
#define CCM_INTENCLR_ERROR_Pos (2UL) /*!< Position of ERROR field. */
#define CCM_INTENCLR_ERROR_Msk (0x1UL << CCM_INTENCLR_ERROR_Pos) /*!< Bit mask of ERROR field. */
#define CCM_INTENCLR_ERROR_Disabled (0x0UL) /*!< Read: Disabled */
#define CCM_INTENCLR_ERROR_Enabled (0x1UL) /*!< Read: Enabled */
#define CCM_INTENCLR_ERROR_Clear (0x1UL) /*!< Disable */

/* Bit 1 : Write '1' to disable interrupt for event END */
#define CCM_INTENCLR_END_Pos (1UL) /*!< Position of END field. */
#define CCM_INTENCLR_END_Msk (0x1UL << CCM_INTENCLR_END_Pos) /*!< Bit mask of END field. */
#define CCM_INTENCLR_END_Disabled (0x0UL) /*!< Read: Disabled */
#define CCM_INTENCLR_END_Enabled (0x1UL) /*!< Read: Enabled */
#define CCM_INTENCLR_END_Clear (0x1UL) /*!< Disable */

/* Bit 0 : Write '1' to disable interrupt for event ENDCONFIG */
#define CCM_INTENCLR_ENDCONFIG_Pos (0UL) /*!< Position of ENDCONFIG field. */
#define CCM_INTENCLR_ENDCONFIG_Msk (0x1UL << CCM_INTENCLR_ENDCONFIG_Pos) /*!< Bit mask of ENDCONFIG field. */
#define CCM_INTENCLR_ENDCONFIG_Disabled (0x0UL) /*!< Read: Disabled */
#define CCM_INTENCLR_ENDCONFIG_Enabled (0x1UL) /*!< Read: Enabled */
#define CCM_INTENCLR_ENDCONFIG_Clear (0x1UL) /*!< Disable */

/* Register: CCM_MACSTATUS */
/* Description: MAC check result */

/* Bit 0 : The result of the MAC check performed during the previous decryption operation */
#define CCM_MACSTATUS_MACSTATUS_Pos (0UL) /*!< Position of MACSTATUS field. */
#define CCM_MACSTATUS_MACSTATUS_Msk (0x1UL << CCM_MACSTATUS_MACSTATUS_Pos) /*!< Bit mask of MACSTATUS field. */
#define CCM_MACSTATUS_MACSTATUS_CheckFailed (0x0UL) /*!< MAC check failed */
#define CCM_MACSTATUS_MACSTATUS_CheckPassed (0x1UL) /*!< MAC check passed */

/* Register: CCM_ERRORSTATUS */
/* Description: Error status */

/* Bits 1..0 : Error status when the ERROR event is generated */
#define CCM_ERRORSTATUS_ERRORSTATUS_Pos (0UL) /*!< Position of ERRORSTATUS field. */
#define CCM_ERRORSTATUS_ERRORSTATUS_Msk (0x3UL << CCM_ERRORSTATUS_ERRORSTATUS_Pos) /*!< Bit mask of ERRORSTATUS field. */
#define CCM_ERRORSTATUS_ERRORSTATUS_NoError (0x0UL) /*!< No errors have occurred */
#define CCM_ERRORSTATUS_ERRORSTATUS_PrematureInptrEnd (0x1UL) /*!< End of INPTR job list before CCM data structure was read. */
#define CCM_ERRORSTATUS_ERRORSTATUS_PrematureOutptrEnd (0x2UL) /*!< End of OUTPTR job list before CCM data structure was read. */
#define CCM_ERRORSTATUS_ERRORSTATUS_EncryptionTooSlow (0x3UL) /*!< Encryption of the unencrypted CCM data structure did not complete in time. */

/* Register: CCM_ENABLE */
/* Description: Enable */

/* Bits 1..0 : Enable or disable CCM */
#define CCM_ENABLE_ENABLE_Pos (0UL) /*!< Position of ENABLE field. */
#define CCM_ENABLE_ENABLE_Msk (0x3UL << CCM_ENABLE_ENABLE_Pos) /*!< Bit mask of ENABLE field. */
#define CCM_ENABLE_ENABLE_Disabled (0x0UL) /*!< Disable */
#define CCM_ENABLE_ENABLE_Enabled (0x2UL) /*!< Enable */

/* Register: CCM_MODE */
/* Description: Operation mode */

/* Bits 26..24 : CCM MAC length (bytes) */
#define CCM_MODE_MACLEN_Pos (24UL) /*!< Position of MACLEN field. */
#define CCM_MODE_MACLEN_Msk (0x7UL << CCM_MODE_MACLEN_Pos) /*!< Bit mask of MACLEN field. */
#define CCM_MODE_MACLEN_M0 (0x0UL) /*!< M = 0 This is a special case for CCM* where encryption is required but not authentication */
#define CCM_MODE_MACLEN_M4 (0x1UL) /*!< M = 4 */
#define CCM_MODE_MACLEN_M6 (0x2UL) /*!< M = 6 */
#define CCM_MODE_MACLEN_M8 (0x3UL) /*!< M = 8 */
#define CCM_MODE_MACLEN_M10 (0x4UL) /*!< M = 10 */
#define CCM_MODE_MACLEN_M12 (0x5UL) /*!< M = 12 */
#define CCM_MODE_MACLEN_M14 (0x6UL) /*!< M = 14 */
#define CCM_MODE_MACLEN_M16 (0x7UL) /*!< M = 16 */

/* Bits 18..16 : Radio data rate that the CCM shall run synchronous with */
#define CCM_MODE_DATARATE_Pos (16UL) /*!< Position of DATARATE field. */
#define CCM_MODE_DATARATE_Msk (0x7UL << CCM_MODE_DATARATE_Pos) /*!< Bit mask of DATARATE field. */
#define CCM_MODE_DATARATE_125Kbit (0x0UL) /*!< 125 Kbps */
#define CCM_MODE_DATARATE_250Kbit (0x1UL) /*!< 250 Kbps */
#define CCM_MODE_DATARATE_500Kbps (0x2UL) /*!< 500 Kbps */
#define CCM_MODE_DATARATE_1Mbps (0x3UL) /*!< 1 Mbps */
#define CCM_MODE_DATARATE_2Mbit (0x4UL) /*!< 2 Mbps */
#define CCM_MODE_DATARATE_4Mbit (0x5UL) /*!< 4 Mbps */

/* Bits 9..8 : Protocol and packet format selection */
#define CCM_MODE_PROTOCOL_Pos (8UL) /*!< Position of PROTOCOL field. */
#define CCM_MODE_PROTOCOL_Msk (0x3UL << CCM_MODE_PROTOCOL_Pos) /*!< Bit mask of PROTOCOL field. */
#define CCM_MODE_PROTOCOL_Ble (0x0UL) /*!< Bluetooth Low Energy packet format */
#define CCM_MODE_PROTOCOL_Ieee802154 (0x1UL) /*!< 802.15.4 packet format */

/* Bits 1..0 : The mode of operation to be used. The settings in this register apply when the CRYPT task is triggered. */
#define CCM_MODE_MODE_Pos (0UL) /*!< Position of MODE field. */
#define CCM_MODE_MODE_Msk (0x3UL << CCM_MODE_MODE_Pos) /*!< Bit mask of MODE field. */
#define CCM_MODE_MODE_Encryption (0x0UL) /*!< AES CCM packet encryption mode */
#define CCM_MODE_MODE_Decryption (0x1UL) /*!< AES CCM packet decryption mode */
#define CCM_MODE_MODE_FastDecryption (0x2UL) /*!< AES fast decrypt mode. This mode will run CCM decryption as fast as possible, i.e. not locked to a radio data rate. This can be used when a packet has been completely received. */

/* Register: CCM_KEY_VALUE */
/* Description: Description collection: 128-bit AES key */

/* Bits 31..0 : AES 128-bit key value, bits (32*(i+1))-1 : (32*i) */
#define CCM_KEY_VALUE_VALUE_Pos (0UL) /*!< Position of VALUE field. */
#define CCM_KEY_VALUE_VALUE_Msk (0xFFFFFFFFUL << CCM_KEY_VALUE_VALUE_Pos) /*!< Bit mask of VALUE field. */

/* Register: CCM_NONCE_VALUE */
/* Description: Description collection: 13-byte NONCE vector Only the lower 13 bytes are used */

/* Bits 31..0 : NONCE value, bits (32*(i+1))-1 : (32*i) */
#define CCM_NONCE_VALUE_VALUE_Pos (0UL) /*!< Position of VALUE field. */
#define CCM_NONCE_VALUE_VALUE_Msk (0xFFFFFFFFUL << CCM_NONCE_VALUE_VALUE_Pos) /*!< Bit mask of VALUE field. */

/* Register: CCM_IN_PTR */
/* Description: Input pointer Points to a job list containing unencrypted CCM data structure in Encryption mode Points to a job list containing encrypted CCM data structure in Decryption mode */

/* Bits 31..0 : Input pointer */
#define CCM_IN_PTR_PTR_Pos (0UL) /*!< Position of PTR field. */
#define CCM_IN_PTR_PTR_Msk (0xFFFFFFFFUL << CCM_IN_PTR_PTR_Pos) /*!< Bit mask of PTR field. */

/* Register: CCM_IN_AMOUNT */
/* Description: Number of bytes read from the input data, not including the job list structure */

/* Bits 31..0 : Number of bytes read from the input data */
#define CCM_IN_AMOUNT_AMOUNT_Pos (0UL) /*!< Position of AMOUNT field. */
#define CCM_IN_AMOUNT_AMOUNT_Msk (0xFFFFFFFFUL << CCM_IN_AMOUNT_AMOUNT_Pos) /*!< Bit mask of AMOUNT field. */

/* Register: CCM_OUT_PTR */
/* Description: Output pointer Points to a job list containing encrypted CCM data structure in Encryption mode Points to a job list containing decrypted CCM data structure in Decryption mode */

/* Bits 31..0 : Output pointer */
#define CCM_OUT_PTR_PTR_Pos (0UL) /*!< Position of PTR field. */
#define CCM_OUT_PTR_PTR_Msk (0xFFFFFFFFUL << CCM_OUT_PTR_PTR_Pos) /*!< Bit mask of PTR field. */

/* Register: CCM_OUT_AMOUNT */
/* Description: Number of bytes available in the output data, not including the job list structure */

/* Bits 31..0 : Number of bytes available in the output data */
#define CCM_OUT_AMOUNT_AMOUNT_Pos (0UL) /*!< Position of AMOUNT field. */
#define CCM_OUT_AMOUNT_AMOUNT_Msk (0xFFFFFFFFUL << CCM_OUT_AMOUNT_AMOUNT_Pos) /*!< Bit mask of AMOUNT field. */

/* Register: CCM_RATEOVERRIDE */
/* Description: Data rate override setting. */

/* Bits 2..0 : Data rate override setting. */
#define CCM_RATEOVERRIDE_RATEOVERRIDE_Pos (0UL) /*!< Position of RATEOVERRIDE field. */
#define CCM_RATEOVERRIDE_RATEOVERRIDE_Msk (0x7UL << CCM_RATEOVERRIDE_RATEOVERRIDE_Pos) /*!< Bit mask of RATEOVERRIDE field. */
#define CCM_RATEOVERRIDE_RATEOVERRIDE_1Mbit (0x0UL) /*!< 1 Mbps */
#define CCM_RATEOVERRIDE_RATEOVERRIDE_2Mbit (0x1UL) /*!< 2 Mbps */
#define CCM_RATEOVERRIDE_RATEOVERRIDE_125Kbps (0x2UL) /*!< 125 Kbps */
#define CCM_RATEOVERRIDE_RATEOVERRIDE_500Kbps (0x3UL) /*!< 500 Kbps */
#define CCM_RATEOVERRIDE_RATEOVERRIDE_4Mbit (0x4UL) /*!< 4 Mbps */

/* Register: CCM_ADATAMASK */
/* Description: CCM adata mask. */

/* Bits 7..0 : CCM adata mask. The rationale for this is to support on-the-fly masking of BLE header, as per the Bluetooth Spec. */
#define CCM_ADATAMASK_ADATAMASK_Pos (0UL) /*!< Position of ADATAMASK field. */
#define CCM_ADATAMASK_ADATAMASK_Msk (0xFFUL << CCM_ADATAMASK_ADATAMASK_Pos) /*!< Bit mask of ADATAMASK field. */


/* Peripheral: COMP */
/* Description: Comparator */

/* Register: COMP_TASKS_START */
/* Description: Start comparator */

/* Bit 0 : Start comparator */
#define COMP_TASKS_START_TASKS_START_Pos (0UL) /*!< Position of TASKS_START field. */
#define COMP_TASKS_START_TASKS_START_Msk (0x1UL << COMP_TASKS_START_TASKS_START_Pos) /*!< Bit mask of TASKS_START field. */
#define COMP_TASKS_START_TASKS_START_Trigger (0x1UL) /*!< Trigger task */

/* Register: COMP_TASKS_STOP */
/* Description: Stop comparator */

/* Bit 0 : Stop comparator */
#define COMP_TASKS_STOP_TASKS_STOP_Pos (0UL) /*!< Position of TASKS_STOP field. */
#define COMP_TASKS_STOP_TASKS_STOP_Msk (0x1UL << COMP_TASKS_STOP_TASKS_STOP_Pos) /*!< Bit mask of TASKS_STOP field. */
#define COMP_TASKS_STOP_TASKS_STOP_Trigger (0x1UL) /*!< Trigger task */

/* Register: COMP_TASKS_SAMPLE */
/* Description: Sample comparator value */

/* Bit 0 : Sample comparator value */
#define COMP_TASKS_SAMPLE_TASKS_SAMPLE_Pos (0UL) /*!< Position of TASKS_SAMPLE field. */
#define COMP_TASKS_SAMPLE_TASKS_SAMPLE_Msk (0x1UL << COMP_TASKS_SAMPLE_TASKS_SAMPLE_Pos) /*!< Bit mask of TASKS_SAMPLE field. */
#define COMP_TASKS_SAMPLE_TASKS_SAMPLE_Trigger (0x1UL) /*!< Trigger task */

/* Register: COMP_SUBSCRIBE_START */
/* Description: Subscribe configuration for task START */

/* Bit 31 :   */
#define COMP_SUBSCRIBE_START_EN_Pos (31UL) /*!< Position of EN field. */
#define COMP_SUBSCRIBE_START_EN_Msk (0x1UL << COMP_SUBSCRIBE_START_EN_Pos) /*!< Bit mask of EN field. */
#define COMP_SUBSCRIBE_START_EN_Disabled (0x0UL) /*!< Disable subscription */
#define COMP_SUBSCRIBE_START_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task START will subscribe to */
#define COMP_SUBSCRIBE_START_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define COMP_SUBSCRIBE_START_CHIDX_Msk (0xFFUL << COMP_SUBSCRIBE_START_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: COMP_SUBSCRIBE_STOP */
/* Description: Subscribe configuration for task STOP */

/* Bit 31 :   */
#define COMP_SUBSCRIBE_STOP_EN_Pos (31UL) /*!< Position of EN field. */
#define COMP_SUBSCRIBE_STOP_EN_Msk (0x1UL << COMP_SUBSCRIBE_STOP_EN_Pos) /*!< Bit mask of EN field. */
#define COMP_SUBSCRIBE_STOP_EN_Disabled (0x0UL) /*!< Disable subscription */
#define COMP_SUBSCRIBE_STOP_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task STOP will subscribe to */
#define COMP_SUBSCRIBE_STOP_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define COMP_SUBSCRIBE_STOP_CHIDX_Msk (0xFFUL << COMP_SUBSCRIBE_STOP_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: COMP_SUBSCRIBE_SAMPLE */
/* Description: Subscribe configuration for task SAMPLE */

/* Bit 31 :   */
#define COMP_SUBSCRIBE_SAMPLE_EN_Pos (31UL) /*!< Position of EN field. */
#define COMP_SUBSCRIBE_SAMPLE_EN_Msk (0x1UL << COMP_SUBSCRIBE_SAMPLE_EN_Pos) /*!< Bit mask of EN field. */
#define COMP_SUBSCRIBE_SAMPLE_EN_Disabled (0x0UL) /*!< Disable subscription */
#define COMP_SUBSCRIBE_SAMPLE_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task SAMPLE will subscribe to */
#define COMP_SUBSCRIBE_SAMPLE_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define COMP_SUBSCRIBE_SAMPLE_CHIDX_Msk (0xFFUL << COMP_SUBSCRIBE_SAMPLE_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: COMP_EVENTS_READY */
/* Description: COMP is ready and output is valid */

/* Bit 0 : COMP is ready and output is valid */
#define COMP_EVENTS_READY_EVENTS_READY_Pos (0UL) /*!< Position of EVENTS_READY field. */
#define COMP_EVENTS_READY_EVENTS_READY_Msk (0x1UL << COMP_EVENTS_READY_EVENTS_READY_Pos) /*!< Bit mask of EVENTS_READY field. */
#define COMP_EVENTS_READY_EVENTS_READY_NotGenerated (0x0UL) /*!< Event not generated */
#define COMP_EVENTS_READY_EVENTS_READY_Generated (0x1UL) /*!< Event generated */

/* Register: COMP_EVENTS_DOWN */
/* Description: Downward crossing */

/* Bit 0 : Downward crossing */
#define COMP_EVENTS_DOWN_EVENTS_DOWN_Pos (0UL) /*!< Position of EVENTS_DOWN field. */
#define COMP_EVENTS_DOWN_EVENTS_DOWN_Msk (0x1UL << COMP_EVENTS_DOWN_EVENTS_DOWN_Pos) /*!< Bit mask of EVENTS_DOWN field. */
#define COMP_EVENTS_DOWN_EVENTS_DOWN_NotGenerated (0x0UL) /*!< Event not generated */
#define COMP_EVENTS_DOWN_EVENTS_DOWN_Generated (0x1UL) /*!< Event generated */

/* Register: COMP_EVENTS_UP */
/* Description: Upward crossing */

/* Bit 0 : Upward crossing */
#define COMP_EVENTS_UP_EVENTS_UP_Pos (0UL) /*!< Position of EVENTS_UP field. */
#define COMP_EVENTS_UP_EVENTS_UP_Msk (0x1UL << COMP_EVENTS_UP_EVENTS_UP_Pos) /*!< Bit mask of EVENTS_UP field. */
#define COMP_EVENTS_UP_EVENTS_UP_NotGenerated (0x0UL) /*!< Event not generated */
#define COMP_EVENTS_UP_EVENTS_UP_Generated (0x1UL) /*!< Event generated */

/* Register: COMP_EVENTS_CROSS */
/* Description: Downward or upward crossing */

/* Bit 0 : Downward or upward crossing */
#define COMP_EVENTS_CROSS_EVENTS_CROSS_Pos (0UL) /*!< Position of EVENTS_CROSS field. */
#define COMP_EVENTS_CROSS_EVENTS_CROSS_Msk (0x1UL << COMP_EVENTS_CROSS_EVENTS_CROSS_Pos) /*!< Bit mask of EVENTS_CROSS field. */
#define COMP_EVENTS_CROSS_EVENTS_CROSS_NotGenerated (0x0UL) /*!< Event not generated */
#define COMP_EVENTS_CROSS_EVENTS_CROSS_Generated (0x1UL) /*!< Event generated */

/* Register: COMP_PUBLISH_READY */
/* Description: Publish configuration for event READY */

/* Bit 31 :   */
#define COMP_PUBLISH_READY_EN_Pos (31UL) /*!< Position of EN field. */
#define COMP_PUBLISH_READY_EN_Msk (0x1UL << COMP_PUBLISH_READY_EN_Pos) /*!< Bit mask of EN field. */
#define COMP_PUBLISH_READY_EN_Disabled (0x0UL) /*!< Disable publishing */
#define COMP_PUBLISH_READY_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event READY will publish to */
#define COMP_PUBLISH_READY_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define COMP_PUBLISH_READY_CHIDX_Msk (0xFFUL << COMP_PUBLISH_READY_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: COMP_PUBLISH_DOWN */
/* Description: Publish configuration for event DOWN */

/* Bit 31 :   */
#define COMP_PUBLISH_DOWN_EN_Pos (31UL) /*!< Position of EN field. */
#define COMP_PUBLISH_DOWN_EN_Msk (0x1UL << COMP_PUBLISH_DOWN_EN_Pos) /*!< Bit mask of EN field. */
#define COMP_PUBLISH_DOWN_EN_Disabled (0x0UL) /*!< Disable publishing */
#define COMP_PUBLISH_DOWN_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event DOWN will publish to */
#define COMP_PUBLISH_DOWN_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define COMP_PUBLISH_DOWN_CHIDX_Msk (0xFFUL << COMP_PUBLISH_DOWN_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: COMP_PUBLISH_UP */
/* Description: Publish configuration for event UP */

/* Bit 31 :   */
#define COMP_PUBLISH_UP_EN_Pos (31UL) /*!< Position of EN field. */
#define COMP_PUBLISH_UP_EN_Msk (0x1UL << COMP_PUBLISH_UP_EN_Pos) /*!< Bit mask of EN field. */
#define COMP_PUBLISH_UP_EN_Disabled (0x0UL) /*!< Disable publishing */
#define COMP_PUBLISH_UP_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event UP will publish to */
#define COMP_PUBLISH_UP_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define COMP_PUBLISH_UP_CHIDX_Msk (0xFFUL << COMP_PUBLISH_UP_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: COMP_PUBLISH_CROSS */
/* Description: Publish configuration for event CROSS */

/* Bit 31 :   */
#define COMP_PUBLISH_CROSS_EN_Pos (31UL) /*!< Position of EN field. */
#define COMP_PUBLISH_CROSS_EN_Msk (0x1UL << COMP_PUBLISH_CROSS_EN_Pos) /*!< Bit mask of EN field. */
#define COMP_PUBLISH_CROSS_EN_Disabled (0x0UL) /*!< Disable publishing */
#define COMP_PUBLISH_CROSS_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event CROSS will publish to */
#define COMP_PUBLISH_CROSS_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define COMP_PUBLISH_CROSS_CHIDX_Msk (0xFFUL << COMP_PUBLISH_CROSS_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: COMP_SHORTS */
/* Description: Shortcuts between local events and tasks */

/* Bit 4 : Shortcut between event CROSS and task STOP */
#define COMP_SHORTS_CROSS_STOP_Pos (4UL) /*!< Position of CROSS_STOP field. */
#define COMP_SHORTS_CROSS_STOP_Msk (0x1UL << COMP_SHORTS_CROSS_STOP_Pos) /*!< Bit mask of CROSS_STOP field. */
#define COMP_SHORTS_CROSS_STOP_Disabled (0x0UL) /*!< Disable shortcut */
#define COMP_SHORTS_CROSS_STOP_Enabled (0x1UL) /*!< Enable shortcut */

/* Bit 3 : Shortcut between event UP and task STOP */
#define COMP_SHORTS_UP_STOP_Pos (3UL) /*!< Position of UP_STOP field. */
#define COMP_SHORTS_UP_STOP_Msk (0x1UL << COMP_SHORTS_UP_STOP_Pos) /*!< Bit mask of UP_STOP field. */
#define COMP_SHORTS_UP_STOP_Disabled (0x0UL) /*!< Disable shortcut */
#define COMP_SHORTS_UP_STOP_Enabled (0x1UL) /*!< Enable shortcut */

/* Bit 2 : Shortcut between event DOWN and task STOP */
#define COMP_SHORTS_DOWN_STOP_Pos (2UL) /*!< Position of DOWN_STOP field. */
#define COMP_SHORTS_DOWN_STOP_Msk (0x1UL << COMP_SHORTS_DOWN_STOP_Pos) /*!< Bit mask of DOWN_STOP field. */
#define COMP_SHORTS_DOWN_STOP_Disabled (0x0UL) /*!< Disable shortcut */
#define COMP_SHORTS_DOWN_STOP_Enabled (0x1UL) /*!< Enable shortcut */

/* Bit 1 : Shortcut between event READY and task STOP */
#define COMP_SHORTS_READY_STOP_Pos (1UL) /*!< Position of READY_STOP field. */
#define COMP_SHORTS_READY_STOP_Msk (0x1UL << COMP_SHORTS_READY_STOP_Pos) /*!< Bit mask of READY_STOP field. */
#define COMP_SHORTS_READY_STOP_Disabled (0x0UL) /*!< Disable shortcut */
#define COMP_SHORTS_READY_STOP_Enabled (0x1UL) /*!< Enable shortcut */

/* Bit 0 : Shortcut between event READY and task SAMPLE */
#define COMP_SHORTS_READY_SAMPLE_Pos (0UL) /*!< Position of READY_SAMPLE field. */
#define COMP_SHORTS_READY_SAMPLE_Msk (0x1UL << COMP_SHORTS_READY_SAMPLE_Pos) /*!< Bit mask of READY_SAMPLE field. */
#define COMP_SHORTS_READY_SAMPLE_Disabled (0x0UL) /*!< Disable shortcut */
#define COMP_SHORTS_READY_SAMPLE_Enabled (0x1UL) /*!< Enable shortcut */

/* Register: COMP_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 3 : Enable or disable interrupt for event CROSS */
#define COMP_INTEN_CROSS_Pos (3UL) /*!< Position of CROSS field. */
#define COMP_INTEN_CROSS_Msk (0x1UL << COMP_INTEN_CROSS_Pos) /*!< Bit mask of CROSS field. */
#define COMP_INTEN_CROSS_Disabled (0x0UL) /*!< Disable */
#define COMP_INTEN_CROSS_Enabled (0x1UL) /*!< Enable */

/* Bit 2 : Enable or disable interrupt for event UP */
#define COMP_INTEN_UP_Pos (2UL) /*!< Position of UP field. */
#define COMP_INTEN_UP_Msk (0x1UL << COMP_INTEN_UP_Pos) /*!< Bit mask of UP field. */
#define COMP_INTEN_UP_Disabled (0x0UL) /*!< Disable */
#define COMP_INTEN_UP_Enabled (0x1UL) /*!< Enable */

/* Bit 1 : Enable or disable interrupt for event DOWN */
#define COMP_INTEN_DOWN_Pos (1UL) /*!< Position of DOWN field. */
#define COMP_INTEN_DOWN_Msk (0x1UL << COMP_INTEN_DOWN_Pos) /*!< Bit mask of DOWN field. */
#define COMP_INTEN_DOWN_Disabled (0x0UL) /*!< Disable */
#define COMP_INTEN_DOWN_Enabled (0x1UL) /*!< Enable */

/* Bit 0 : Enable or disable interrupt for event READY */
#define COMP_INTEN_READY_Pos (0UL) /*!< Position of READY field. */
#define COMP_INTEN_READY_Msk (0x1UL << COMP_INTEN_READY_Pos) /*!< Bit mask of READY field. */
#define COMP_INTEN_READY_Disabled (0x0UL) /*!< Disable */
#define COMP_INTEN_READY_Enabled (0x1UL) /*!< Enable */

/* Register: COMP_INTENSET */
/* Description: Enable interrupt */

/* Bit 3 : Write '1' to enable interrupt for event CROSS */
#define COMP_INTENSET_CROSS_Pos (3UL) /*!< Position of CROSS field. */
#define COMP_INTENSET_CROSS_Msk (0x1UL << COMP_INTENSET_CROSS_Pos) /*!< Bit mask of CROSS field. */
#define COMP_INTENSET_CROSS_Disabled (0x0UL) /*!< Read: Disabled */
#define COMP_INTENSET_CROSS_Enabled (0x1UL) /*!< Read: Enabled */
#define COMP_INTENSET_CROSS_Set (0x1UL) /*!< Enable */

/* Bit 2 : Write '1' to enable interrupt for event UP */
#define COMP_INTENSET_UP_Pos (2UL) /*!< Position of UP field. */
#define COMP_INTENSET_UP_Msk (0x1UL << COMP_INTENSET_UP_Pos) /*!< Bit mask of UP field. */
#define COMP_INTENSET_UP_Disabled (0x0UL) /*!< Read: Disabled */
#define COMP_INTENSET_UP_Enabled (0x1UL) /*!< Read: Enabled */
#define COMP_INTENSET_UP_Set (0x1UL) /*!< Enable */

/* Bit 1 : Write '1' to enable interrupt for event DOWN */
#define COMP_INTENSET_DOWN_Pos (1UL) /*!< Position of DOWN field. */
#define COMP_INTENSET_DOWN_Msk (0x1UL << COMP_INTENSET_DOWN_Pos) /*!< Bit mask of DOWN field. */
#define COMP_INTENSET_DOWN_Disabled (0x0UL) /*!< Read: Disabled */
#define COMP_INTENSET_DOWN_Enabled (0x1UL) /*!< Read: Enabled */
#define COMP_INTENSET_DOWN_Set (0x1UL) /*!< Enable */

/* Bit 0 : Write '1' to enable interrupt for event READY */
#define COMP_INTENSET_READY_Pos (0UL) /*!< Position of READY field. */
#define COMP_INTENSET_READY_Msk (0x1UL << COMP_INTENSET_READY_Pos) /*!< Bit mask of READY field. */
#define COMP_INTENSET_READY_Disabled (0x0UL) /*!< Read: Disabled */
#define COMP_INTENSET_READY_Enabled (0x1UL) /*!< Read: Enabled */
#define COMP_INTENSET_READY_Set (0x1UL) /*!< Enable */

/* Register: COMP_INTENCLR */
/* Description: Disable interrupt */

/* Bit 3 : Write '1' to disable interrupt for event CROSS */
#define COMP_INTENCLR_CROSS_Pos (3UL) /*!< Position of CROSS field. */
#define COMP_INTENCLR_CROSS_Msk (0x1UL << COMP_INTENCLR_CROSS_Pos) /*!< Bit mask of CROSS field. */
#define COMP_INTENCLR_CROSS_Disabled (0x0UL) /*!< Read: Disabled */
#define COMP_INTENCLR_CROSS_Enabled (0x1UL) /*!< Read: Enabled */
#define COMP_INTENCLR_CROSS_Clear (0x1UL) /*!< Disable */

/* Bit 2 : Write '1' to disable interrupt for event UP */
#define COMP_INTENCLR_UP_Pos (2UL) /*!< Position of UP field. */
#define COMP_INTENCLR_UP_Msk (0x1UL << COMP_INTENCLR_UP_Pos) /*!< Bit mask of UP field. */
#define COMP_INTENCLR_UP_Disabled (0x0UL) /*!< Read: Disabled */
#define COMP_INTENCLR_UP_Enabled (0x1UL) /*!< Read: Enabled */
#define COMP_INTENCLR_UP_Clear (0x1UL) /*!< Disable */

/* Bit 1 : Write '1' to disable interrupt for event DOWN */
#define COMP_INTENCLR_DOWN_Pos (1UL) /*!< Position of DOWN field. */
#define COMP_INTENCLR_DOWN_Msk (0x1UL << COMP_INTENCLR_DOWN_Pos) /*!< Bit mask of DOWN field. */
#define COMP_INTENCLR_DOWN_Disabled (0x0UL) /*!< Read: Disabled */
#define COMP_INTENCLR_DOWN_Enabled (0x1UL) /*!< Read: Enabled */
#define COMP_INTENCLR_DOWN_Clear (0x1UL) /*!< Disable */

/* Bit 0 : Write '1' to disable interrupt for event READY */
#define COMP_INTENCLR_READY_Pos (0UL) /*!< Position of READY field. */
#define COMP_INTENCLR_READY_Msk (0x1UL << COMP_INTENCLR_READY_Pos) /*!< Bit mask of READY field. */
#define COMP_INTENCLR_READY_Disabled (0x0UL) /*!< Read: Disabled */
#define COMP_INTENCLR_READY_Enabled (0x1UL) /*!< Read: Enabled */
#define COMP_INTENCLR_READY_Clear (0x1UL) /*!< Disable */

/* Register: COMP_RESULT */
/* Description: Compare result */

/* Bit 0 : Result of last compare. Decision point SAMPLE task. */
#define COMP_RESULT_RESULT_Pos (0UL) /*!< Position of RESULT field. */
#define COMP_RESULT_RESULT_Msk (0x1UL << COMP_RESULT_RESULT_Pos) /*!< Bit mask of RESULT field. */
#define COMP_RESULT_RESULT_Below (0x0UL) /*!< Input voltage is below the threshold (VIN+ &lt; VIN-) */
#define COMP_RESULT_RESULT_Above (0x1UL) /*!< Input voltage is above the threshold (VIN+ &gt; VIN-) */

/* Register: COMP_BGREADY */
/* Description: COMP module is ready */

/* Bit 0 : Result of last compare. Decision point SAMPLE task. */
#define COMP_BGREADY_STATE_Pos (0UL) /*!< Position of STATE field. */
#define COMP_BGREADY_STATE_Msk (0x1UL << COMP_BGREADY_STATE_Pos) /*!< Bit mask of STATE field. */
#define COMP_BGREADY_STATE_NotReady (0x0UL) /*!< Module is not ready */
#define COMP_BGREADY_STATE_Ready (0x1UL) /*!< Module is ready */

/* Register: COMP_ENABLE */
/* Description: COMP enable */

/* Bits 1..0 : Enable or disable COMP */
#define COMP_ENABLE_ENABLE_Pos (0UL) /*!< Position of ENABLE field. */
#define COMP_ENABLE_ENABLE_Msk (0x3UL << COMP_ENABLE_ENABLE_Pos) /*!< Bit mask of ENABLE field. */
#define COMP_ENABLE_ENABLE_Disabled (0x0UL) /*!< Disable */
#define COMP_ENABLE_ENABLE_Enabled (0x2UL) /*!< Enable */

/* Register: COMP_PSEL */
/* Description: Pin select */

/* Bits 2..0 : Analog pin select */
#define COMP_PSEL_PSEL_Pos (0UL) /*!< Position of PSEL field. */
#define COMP_PSEL_PSEL_Msk (0x7UL << COMP_PSEL_PSEL_Pos) /*!< Bit mask of PSEL field. */
#define COMP_PSEL_PSEL_AnalogInput0 (0x0UL) /*!< AIN0 selected as analog input */
#define COMP_PSEL_PSEL_AnalogInput1 (0x1UL) /*!< AIN1 selected as analog input */
#define COMP_PSEL_PSEL_AnalogInput2 (0x2UL) /*!< AIN2 selected as analog input */
#define COMP_PSEL_PSEL_AnalogInput3 (0x3UL) /*!< AIN3 selected as analog input */
#define COMP_PSEL_PSEL_AnalogInput4 (0x4UL) /*!< AIN4 selected as analog input */
#define COMP_PSEL_PSEL_AnalogInput5 (0x5UL) /*!< AIN5 selected as analog input */
#define COMP_PSEL_PSEL_AnalogInput6 (0x6UL) /*!< AIN6 selected as analog input */
#define COMP_PSEL_PSEL_AnalogInput7 (0x7UL) /*!< AIN7 selected as analog input */

/* Register: COMP_REFSEL */
/* Description: Reference source select for single-ended mode */

/* Bits 2..0 : Reference select */
#define COMP_REFSEL_REFSEL_Pos (0UL) /*!< Position of REFSEL field. */
#define COMP_REFSEL_REFSEL_Msk (0x7UL << COMP_REFSEL_REFSEL_Pos) /*!< Bit mask of REFSEL field. */
#define COMP_REFSEL_REFSEL_Int1V2 (0x0UL) /*!< VREF = internal 1.2 V reference (AVDD_AO_1V8 &gt;= 1.7 V) */
#define COMP_REFSEL_REFSEL_Int1V8 (0x1UL) /*!< VREF = internal 1.8 V reference (VDD &gt;= VREF + 0.2 V) */
#define COMP_REFSEL_REFSEL_Int2V4 (0x2UL) /*!< VREF = internal 2.4 V reference (VDD &gt;= VREF + 0.2 V) */
#define COMP_REFSEL_REFSEL_AVDD_AO_1V8 (0x4UL) /*!< VREF = AVDD_AO_1V8 */
#define COMP_REFSEL_REFSEL_ARef (0x5UL) /*!< VREF = AREF */
#define COMP_REFSEL_REFSEL_Diff (0x7UL) /*!< VREF=Differential mode (power down built-in reference and disconnect resistor ladder) */

/* Register: COMP_EXTREFSEL */
/* Description: External reference select */

/* Bits 2..0 : External analog reference select */
#define COMP_EXTREFSEL_EXTREFSEL_Pos (0UL) /*!< Position of EXTREFSEL field. */
#define COMP_EXTREFSEL_EXTREFSEL_Msk (0x7UL << COMP_EXTREFSEL_EXTREFSEL_Pos) /*!< Bit mask of EXTREFSEL field. */
#define COMP_EXTREFSEL_EXTREFSEL_AnalogReference0 (0x0UL) /*!< Use AIN0 as external analog reference */
#define COMP_EXTREFSEL_EXTREFSEL_AnalogReference1 (0x1UL) /*!< Use AIN1 as external analog reference */
#define COMP_EXTREFSEL_EXTREFSEL_AnalogReference2 (0x2UL) /*!< Use AIN2 as external analog reference */
#define COMP_EXTREFSEL_EXTREFSEL_AnalogReference3 (0x3UL) /*!< Use AIN3 as external analog reference */
#define COMP_EXTREFSEL_EXTREFSEL_AnalogReference4 (0x4UL) /*!< Use AIN4 as external analog reference */
#define COMP_EXTREFSEL_EXTREFSEL_AnalogReference5 (0x5UL) /*!< Use AIN5 as external analog reference */
#define COMP_EXTREFSEL_EXTREFSEL_AnalogReference6 (0x6UL) /*!< Use AIN6 as external analog reference */
#define COMP_EXTREFSEL_EXTREFSEL_AnalogReference7 (0x7UL) /*!< Use AIN7 as external analog reference */

/* Register: COMP_REFTEMPC */
/* Description: Trim for temperature coefficient */

/* Bits 3..0 : Trim for temperature coefficient in 2's complement. Used to compensate between simulation and measurement */
#define COMP_REFTEMPC_REFTEMPC_Pos (0UL) /*!< Position of REFTEMPC field. */
#define COMP_REFTEMPC_REFTEMPC_Msk (0xFUL << COMP_REFTEMPC_REFTEMPC_Pos) /*!< Bit mask of REFTEMPC field. */

/* Register: COMP_BUFFER */
/* Description: Enable unity gain buffer */

/* Bit 0 : Enable unity gain buffer */
#define COMP_BUFFER_BUFFER_Pos (0UL) /*!< Position of BUFFER field. */
#define COMP_BUFFER_BUFFER_Msk (0x1UL << COMP_BUFFER_BUFFER_Pos) /*!< Bit mask of BUFFER field. */
#define COMP_BUFFER_BUFFER_Disable (0x0UL) /*!< VOUT is high impedance */
#define COMP_BUFFER_BUFFER_Enable (0x1UL) /*!< VOUT equals VIN */

/* Register: COMP_CTRL */
/* Description: Spare signals */

/* Bits 1..0 : Spare signals */
#define COMP_CTRL_CTRL_Pos (0UL) /*!< Position of CTRL field. */
#define COMP_CTRL_CTRL_Msk (0x3UL << COMP_CTRL_CTRL_Pos) /*!< Bit mask of CTRL field. */

/* Register: COMP_MUTESEL */
/* Description: Disconnect PSEL/EXTREFSEL */

/* Bit 1 : Disconnect EXTREFSEL even when COMP is powered */
#define COMP_MUTESEL_MUTEEXTREFSEL_Pos (1UL) /*!< Position of MUTEEXTREFSEL field. */
#define COMP_MUTESEL_MUTEEXTREFSEL_Msk (0x1UL << COMP_MUTESEL_MUTEEXTREFSEL_Pos) /*!< Bit mask of MUTEEXTREFSEL field. */
#define COMP_MUTESEL_MUTEEXTREFSEL_Default (0x0UL) /*!< EXTREFSEL is connected */
#define COMP_MUTESEL_MUTEEXTREFSEL_Disconnect (0x1UL) /*!< Disconnect EXTREFSEL */

/* Bit 0 : Disconnect PSEL even when COMP is powered */
#define COMP_MUTESEL_MUTEPSEL_Pos (0UL) /*!< Position of MUTEPSEL field. */
#define COMP_MUTESEL_MUTEPSEL_Msk (0x1UL << COMP_MUTESEL_MUTEPSEL_Pos) /*!< Bit mask of MUTEPSEL field. */
#define COMP_MUTESEL_MUTEPSEL_Default (0x0UL) /*!< PSEL is connected */
#define COMP_MUTESEL_MUTEPSEL_Disconnect (0x1UL) /*!< Disconnect PSEL */

/* Register: COMP_RETAIN */
/* Description: Retain signal */

/* Bit 0 : Retain signal */
#define COMP_RETAIN_RETAIN_Pos (0UL) /*!< Position of RETAIN field. */
#define COMP_RETAIN_RETAIN_Msk (0x1UL << COMP_RETAIN_RETAIN_Pos) /*!< Bit mask of RETAIN field. */
#define COMP_RETAIN_RETAIN_Disable (0x0UL) /*!< No retain */
#define COMP_RETAIN_RETAIN_Enable (0x1UL) /*!< Retain is active */

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
#define COMP_MODE_MAIN_SE (0x0UL) /*!< Single-ended mode */
#define COMP_MODE_MAIN_Diff (0x1UL) /*!< Differential mode */

/* Bit 0 : Speed and power modes */
#define COMP_MODE_SP_Pos (0UL) /*!< Position of SP field. */
#define COMP_MODE_SP_Msk (0x1UL << COMP_MODE_SP_Pos) /*!< Bit mask of SP field. */
#define COMP_MODE_SP_Low (0x0UL) /*!< Low-power mode */
#define COMP_MODE_SP_High (0x1UL) /*!< High-speed mode */

/* Register: COMP_HYST */
/* Description: Comparator hysteresis enable */

/* Bit 0 : Comparator hysteresis */
#define COMP_HYST_HYST_Pos (0UL) /*!< Position of HYST field. */
#define COMP_HYST_HYST_Msk (0x1UL << COMP_HYST_HYST_Pos) /*!< Bit mask of HYST field. */
#define COMP_HYST_HYST_NoHyst (0x0UL) /*!< Comparator hysteresis disabled */
#define COMP_HYST_HYST_Hyst40mV (0x1UL) /*!< Comparator hysteresis enabled */

/* Register: COMP_ISOURCE */
/* Description: Current source select on analog input */

/* Bits 1..0 : Current source select on analog input */
#define COMP_ISOURCE_ISOURCE_Pos (0UL) /*!< Position of ISOURCE field. */
#define COMP_ISOURCE_ISOURCE_Msk (0x3UL << COMP_ISOURCE_ISOURCE_Pos) /*!< Bit mask of ISOURCE field. */
#define COMP_ISOURCE_ISOURCE_Off (0x0UL) /*!< Current source disabled */
#define COMP_ISOURCE_ISOURCE_Ien2uA5 (0x1UL) /*!< Current source enabled (+/- 2.5 uA) */
#define COMP_ISOURCE_ISOURCE_Ien5uA (0x2UL) /*!< Current source enabled (+/- 5 uA) */
#define COMP_ISOURCE_ISOURCE_Ien10uA (0x3UL) /*!< Current source enabled (+/- 10 uA) */

/* Register: COMP_REFTRIM */
/* Description: Trim internal band gap reference */

/* Bits 4..0 : Trimming value in 2's complement */
#define COMP_REFTRIM_REFTRIM_Pos (0UL) /*!< Position of REFTRIM field. */
#define COMP_REFTRIM_REFTRIM_Msk (0x1FUL << COMP_REFTRIM_REFTRIM_Pos) /*!< Bit mask of REFTRIM field. */

/* Register: COMP_ATECOMP */
/* Description: Analog test bus control for comparator */

/* Bits 5..0 : Configure connection of comparator to analog test bus. See design description for coding */
#define COMP_ATECOMP_COMP_Pos (0UL) /*!< Position of COMP field. */
#define COMP_ATECOMP_COMP_Msk (0x3FUL << COMP_ATECOMP_COMP_Pos) /*!< Bit mask of COMP field. */


/* Peripheral: ECB */
/* Description: AES ECB Mode Encryption */

/* Register: ECB_TASKS_START */
/* Description: Start ECB block encrypt */

/* Bit 0 : Start ECB block encrypt */
#define ECB_TASKS_START_TASKS_START_Pos (0UL) /*!< Position of TASKS_START field. */
#define ECB_TASKS_START_TASKS_START_Msk (0x1UL << ECB_TASKS_START_TASKS_START_Pos) /*!< Bit mask of TASKS_START field. */
#define ECB_TASKS_START_TASKS_START_Trigger (0x1UL) /*!< Trigger task */

/* Register: ECB_TASKS_STOP */
/* Description: Abort a possible executing ECB operation */

/* Bit 0 : Abort a possible executing ECB operation */
#define ECB_TASKS_STOP_TASKS_STOP_Pos (0UL) /*!< Position of TASKS_STOP field. */
#define ECB_TASKS_STOP_TASKS_STOP_Msk (0x1UL << ECB_TASKS_STOP_TASKS_STOP_Pos) /*!< Bit mask of TASKS_STOP field. */
#define ECB_TASKS_STOP_TASKS_STOP_Trigger (0x1UL) /*!< Trigger task */

/* Register: ECB_SUBSCRIBE_START */
/* Description: Subscribe configuration for task START */

/* Bit 31 :   */
#define ECB_SUBSCRIBE_START_EN_Pos (31UL) /*!< Position of EN field. */
#define ECB_SUBSCRIBE_START_EN_Msk (0x1UL << ECB_SUBSCRIBE_START_EN_Pos) /*!< Bit mask of EN field. */
#define ECB_SUBSCRIBE_START_EN_Disabled (0x0UL) /*!< Disable subscription */
#define ECB_SUBSCRIBE_START_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task START will subscribe to */
#define ECB_SUBSCRIBE_START_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define ECB_SUBSCRIBE_START_CHIDX_Msk (0xFFUL << ECB_SUBSCRIBE_START_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: ECB_SUBSCRIBE_STOP */
/* Description: Subscribe configuration for task STOP */

/* Bit 31 :   */
#define ECB_SUBSCRIBE_STOP_EN_Pos (31UL) /*!< Position of EN field. */
#define ECB_SUBSCRIBE_STOP_EN_Msk (0x1UL << ECB_SUBSCRIBE_STOP_EN_Pos) /*!< Bit mask of EN field. */
#define ECB_SUBSCRIBE_STOP_EN_Disabled (0x0UL) /*!< Disable subscription */
#define ECB_SUBSCRIBE_STOP_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task STOP will subscribe to */
#define ECB_SUBSCRIBE_STOP_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define ECB_SUBSCRIBE_STOP_CHIDX_Msk (0xFFUL << ECB_SUBSCRIBE_STOP_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: ECB_EVENTS_END */
/* Description: ECB block encrypt complete */

/* Bit 0 : ECB block encrypt complete */
#define ECB_EVENTS_END_EVENTS_END_Pos (0UL) /*!< Position of EVENTS_END field. */
#define ECB_EVENTS_END_EVENTS_END_Msk (0x1UL << ECB_EVENTS_END_EVENTS_END_Pos) /*!< Bit mask of EVENTS_END field. */
#define ECB_EVENTS_END_EVENTS_END_NotGenerated (0x0UL) /*!< Event not generated */
#define ECB_EVENTS_END_EVENTS_END_Generated (0x1UL) /*!< Event generated */

/* Register: ECB_EVENTS_ERROR */
/* Description: ECB block encrypt aborted because of a STOP task or due to an error */

/* Bit 0 : ECB block encrypt aborted because of a STOP task or due to an error */
#define ECB_EVENTS_ERROR_EVENTS_ERROR_Pos (0UL) /*!< Position of EVENTS_ERROR field. */
#define ECB_EVENTS_ERROR_EVENTS_ERROR_Msk (0x1UL << ECB_EVENTS_ERROR_EVENTS_ERROR_Pos) /*!< Bit mask of EVENTS_ERROR field. */
#define ECB_EVENTS_ERROR_EVENTS_ERROR_NotGenerated (0x0UL) /*!< Event not generated */
#define ECB_EVENTS_ERROR_EVENTS_ERROR_Generated (0x1UL) /*!< Event generated */

/* Register: ECB_PUBLISH_END */
/* Description: Publish configuration for event END */

/* Bit 31 :   */
#define ECB_PUBLISH_END_EN_Pos (31UL) /*!< Position of EN field. */
#define ECB_PUBLISH_END_EN_Msk (0x1UL << ECB_PUBLISH_END_EN_Pos) /*!< Bit mask of EN field. */
#define ECB_PUBLISH_END_EN_Disabled (0x0UL) /*!< Disable publishing */
#define ECB_PUBLISH_END_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event END will publish to */
#define ECB_PUBLISH_END_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define ECB_PUBLISH_END_CHIDX_Msk (0xFFUL << ECB_PUBLISH_END_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: ECB_PUBLISH_ERROR */
/* Description: Publish configuration for event ERROR */

/* Bit 31 :   */
#define ECB_PUBLISH_ERROR_EN_Pos (31UL) /*!< Position of EN field. */
#define ECB_PUBLISH_ERROR_EN_Msk (0x1UL << ECB_PUBLISH_ERROR_EN_Pos) /*!< Bit mask of EN field. */
#define ECB_PUBLISH_ERROR_EN_Disabled (0x0UL) /*!< Disable publishing */
#define ECB_PUBLISH_ERROR_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event ERROR will publish to */
#define ECB_PUBLISH_ERROR_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define ECB_PUBLISH_ERROR_CHIDX_Msk (0xFFUL << ECB_PUBLISH_ERROR_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: ECB_INTENSET */
/* Description: Enable interrupt */

/* Bit 1 : Write '1' to enable interrupt for event ERROR */
#define ECB_INTENSET_ERROR_Pos (1UL) /*!< Position of ERROR field. */
#define ECB_INTENSET_ERROR_Msk (0x1UL << ECB_INTENSET_ERROR_Pos) /*!< Bit mask of ERROR field. */
#define ECB_INTENSET_ERROR_Disabled (0x0UL) /*!< Read: Disabled */
#define ECB_INTENSET_ERROR_Enabled (0x1UL) /*!< Read: Enabled */
#define ECB_INTENSET_ERROR_Set (0x1UL) /*!< Enable */

/* Bit 0 : Write '1' to enable interrupt for event END */
#define ECB_INTENSET_END_Pos (0UL) /*!< Position of END field. */
#define ECB_INTENSET_END_Msk (0x1UL << ECB_INTENSET_END_Pos) /*!< Bit mask of END field. */
#define ECB_INTENSET_END_Disabled (0x0UL) /*!< Read: Disabled */
#define ECB_INTENSET_END_Enabled (0x1UL) /*!< Read: Enabled */
#define ECB_INTENSET_END_Set (0x1UL) /*!< Enable */

/* Register: ECB_INTENCLR */
/* Description: Disable interrupt */

/* Bit 1 : Write '1' to disable interrupt for event ERROR */
#define ECB_INTENCLR_ERROR_Pos (1UL) /*!< Position of ERROR field. */
#define ECB_INTENCLR_ERROR_Msk (0x1UL << ECB_INTENCLR_ERROR_Pos) /*!< Bit mask of ERROR field. */
#define ECB_INTENCLR_ERROR_Disabled (0x0UL) /*!< Read: Disabled */
#define ECB_INTENCLR_ERROR_Enabled (0x1UL) /*!< Read: Enabled */
#define ECB_INTENCLR_ERROR_Clear (0x1UL) /*!< Disable */

/* Bit 0 : Write '1' to disable interrupt for event END */
#define ECB_INTENCLR_END_Pos (0UL) /*!< Position of END field. */
#define ECB_INTENCLR_END_Msk (0x1UL << ECB_INTENCLR_END_Pos) /*!< Bit mask of END field. */
#define ECB_INTENCLR_END_Disabled (0x0UL) /*!< Read: Disabled */
#define ECB_INTENCLR_END_Enabled (0x1UL) /*!< Read: Enabled */
#define ECB_INTENCLR_END_Clear (0x1UL) /*!< Disable */

/* Register: ECB_KEY_VALUE */
/* Description: Description collection: 128-bit AES key */

/* Bits 31..0 : AES 128-bit key value, bits (32*(i+1))-1 : (32*i) */
#define ECB_KEY_VALUE_VALUE_Pos (0UL) /*!< Position of VALUE field. */
#define ECB_KEY_VALUE_VALUE_Msk (0xFFFFFFFFUL << ECB_KEY_VALUE_VALUE_Pos) /*!< Bit mask of VALUE field. */

/* Register: ECB_IN_PTR */
/* Description: Input pointer */

/* Bits 31..0 : Points to a job list containing unencrypted ECB data structure */
#define ECB_IN_PTR_PTR_Pos (0UL) /*!< Position of PTR field. */
#define ECB_IN_PTR_PTR_Msk (0xFFFFFFFFUL << ECB_IN_PTR_PTR_Pos) /*!< Bit mask of PTR field. */

/* Register: ECB_IN_AMOUNT */
/* Description: Number of bytes read from the input data, not including the job list structure */

/* Bits 31..0 : Number of bytes read from the input data */
#define ECB_IN_AMOUNT_AMOUNT_Pos (0UL) /*!< Position of AMOUNT field. */
#define ECB_IN_AMOUNT_AMOUNT_Msk (0xFFFFFFFFUL << ECB_IN_AMOUNT_AMOUNT_Pos) /*!< Bit mask of AMOUNT field. */

/* Register: ECB_OUT_PTR */
/* Description: Output pointer Points to a job list containing encrypted ECB data structure */

/* Bits 31..0 : Output pointer */
#define ECB_OUT_PTR_PTR_Pos (0UL) /*!< Position of PTR field. */
#define ECB_OUT_PTR_PTR_Msk (0xFFFFFFFFUL << ECB_OUT_PTR_PTR_Pos) /*!< Bit mask of PTR field. */

/* Register: ECB_OUT_AMOUNT */
/* Description: Number of bytes available in the output data, not including the job list structure */

/* Bits 31..0 : Number of bytes available in the output data */
#define ECB_OUT_AMOUNT_AMOUNT_Pos (0UL) /*!< Position of AMOUNT field. */
#define ECB_OUT_AMOUNT_AMOUNT_Msk (0xFFFFFFFFUL << ECB_OUT_AMOUNT_AMOUNT_Pos) /*!< Bit mask of AMOUNT field. */


/* Peripheral: GPIOSTATIC */
/* Description: GPIO Static */

/* Register: GPIOSTATIC_LATCHCLRWAITCNT */
/* Description: Select the number of wait cycles inserted on the bus when a LATCH register is cleared. Note: this register is only accessible from secure code. */

/* Bits 1..0 : Select the number of wait cycles inserted on the bus when a LATCH register is cleared. */
#define GPIOSTATIC_LATCHCLRWAITCNT_LATCHCLRWAITCNT_Pos (0UL) /*!< Position of LATCHCLRWAITCNT field. */
#define GPIOSTATIC_LATCHCLRWAITCNT_LATCHCLRWAITCNT_Msk (0x3UL << GPIOSTATIC_LATCHCLRWAITCNT_LATCHCLRWAITCNT_Pos) /*!< Bit mask of LATCHCLRWAITCNT field. */

/* Register: GPIOSTATIC_FORCELDETECTLOWCNT */
/* Description: Select the number of cycles that LDETECT is forced low after clearing a LATCH register. Note: this register is only accessible from secure code. */

/* Bits 3..0 : Select the number of cycles that LDETECT is forced low after clearing a LATCH register. */
#define GPIOSTATIC_FORCELDETECTLOWCNT_FORCELDETECTLOWCNT_Pos (0UL) /*!< Position of FORCELDETECTLOWCNT field. */
#define GPIOSTATIC_FORCELDETECTLOWCNT_FORCELDETECTLOWCNT_Msk (0xFUL << GPIOSTATIC_FORCELDETECTLOWCNT_FORCELDETECTLOWCNT_Pos) /*!< Bit mask of FORCELDETECTLOWCNT field. */

/* Register: GPIOSTATIC_RESET */
/* Description: Reset all GPIO registers. Note: this register is only accessible from secure code. */

/* Bit 0 : Reset all GPIO registers. */
#define GPIOSTATIC_RESET_RESET_Pos (0UL) /*!< Position of RESET field. */
#define GPIOSTATIC_RESET_RESET_Msk (0x1UL << GPIOSTATIC_RESET_RESET_Pos) /*!< Bit mask of RESET field. */
#define GPIOSTATIC_RESET_RESET_NA (0x0UL) /*!< No effect */
#define GPIOSTATIC_RESET_RESET_RESET (0x1UL) /*!< Trigger reset */

/* Register: GPIOSTATIC_SENSECONFIGCHANGECNT */
/* Description: Selects the number of cycles before the SENSE configuration takes effect when it is changed. Setting this register lower than the reset value can lead to unwanted LATCH set
        when SENSE and INPUT fields (PIN_CNF) are changed simultaneously. Note: this register is only accessible from secure code. */

/* Bits 2..0 : Selects the number of cycles before the SENSE configuration takes effect when it is changed. */
#define GPIOSTATIC_SENSECONFIGCHANGECNT_SENSECONFIGCHANGECNT_Pos (0UL) /*!< Position of SENSECONFIGCHANGECNT field. */
#define GPIOSTATIC_SENSECONFIGCHANGECNT_SENSECONFIGCHANGECNT_Msk (0x7UL << GPIOSTATIC_SENSECONFIGCHANGECNT_SENSECONFIGCHANGECNT_Pos) /*!< Bit mask of SENSECONFIGCHANGECNT field. */


/* Peripheral: GPIO */
/* Description: GPIO Port */

/* Register: GPIO_OUT */
/* Description: Write GPIO port */

/* Bit 31 : Pin 31 */
#define GPIO_OUT_PIN31_Pos (31UL) /*!< Position of PIN31 field. */
#define GPIO_OUT_PIN31_Msk (0x1UL << GPIO_OUT_PIN31_Pos) /*!< Bit mask of PIN31 field. */
#define GPIO_OUT_PIN31_Low (0x0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN31_High (0x1UL) /*!< Pin driver is high */

/* Bit 30 : Pin 30 */
#define GPIO_OUT_PIN30_Pos (30UL) /*!< Position of PIN30 field. */
#define GPIO_OUT_PIN30_Msk (0x1UL << GPIO_OUT_PIN30_Pos) /*!< Bit mask of PIN30 field. */
#define GPIO_OUT_PIN30_Low (0x0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN30_High (0x1UL) /*!< Pin driver is high */

/* Bit 29 : Pin 29 */
#define GPIO_OUT_PIN29_Pos (29UL) /*!< Position of PIN29 field. */
#define GPIO_OUT_PIN29_Msk (0x1UL << GPIO_OUT_PIN29_Pos) /*!< Bit mask of PIN29 field. */
#define GPIO_OUT_PIN29_Low (0x0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN29_High (0x1UL) /*!< Pin driver is high */

/* Bit 28 : Pin 28 */
#define GPIO_OUT_PIN28_Pos (28UL) /*!< Position of PIN28 field. */
#define GPIO_OUT_PIN28_Msk (0x1UL << GPIO_OUT_PIN28_Pos) /*!< Bit mask of PIN28 field. */
#define GPIO_OUT_PIN28_Low (0x0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN28_High (0x1UL) /*!< Pin driver is high */

/* Bit 27 : Pin 27 */
#define GPIO_OUT_PIN27_Pos (27UL) /*!< Position of PIN27 field. */
#define GPIO_OUT_PIN27_Msk (0x1UL << GPIO_OUT_PIN27_Pos) /*!< Bit mask of PIN27 field. */
#define GPIO_OUT_PIN27_Low (0x0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN27_High (0x1UL) /*!< Pin driver is high */

/* Bit 26 : Pin 26 */
#define GPIO_OUT_PIN26_Pos (26UL) /*!< Position of PIN26 field. */
#define GPIO_OUT_PIN26_Msk (0x1UL << GPIO_OUT_PIN26_Pos) /*!< Bit mask of PIN26 field. */
#define GPIO_OUT_PIN26_Low (0x0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN26_High (0x1UL) /*!< Pin driver is high */

/* Bit 25 : Pin 25 */
#define GPIO_OUT_PIN25_Pos (25UL) /*!< Position of PIN25 field. */
#define GPIO_OUT_PIN25_Msk (0x1UL << GPIO_OUT_PIN25_Pos) /*!< Bit mask of PIN25 field. */
#define GPIO_OUT_PIN25_Low (0x0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN25_High (0x1UL) /*!< Pin driver is high */

/* Bit 24 : Pin 24 */
#define GPIO_OUT_PIN24_Pos (24UL) /*!< Position of PIN24 field. */
#define GPIO_OUT_PIN24_Msk (0x1UL << GPIO_OUT_PIN24_Pos) /*!< Bit mask of PIN24 field. */
#define GPIO_OUT_PIN24_Low (0x0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN24_High (0x1UL) /*!< Pin driver is high */

/* Bit 23 : Pin 23 */
#define GPIO_OUT_PIN23_Pos (23UL) /*!< Position of PIN23 field. */
#define GPIO_OUT_PIN23_Msk (0x1UL << GPIO_OUT_PIN23_Pos) /*!< Bit mask of PIN23 field. */
#define GPIO_OUT_PIN23_Low (0x0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN23_High (0x1UL) /*!< Pin driver is high */

/* Bit 22 : Pin 22 */
#define GPIO_OUT_PIN22_Pos (22UL) /*!< Position of PIN22 field. */
#define GPIO_OUT_PIN22_Msk (0x1UL << GPIO_OUT_PIN22_Pos) /*!< Bit mask of PIN22 field. */
#define GPIO_OUT_PIN22_Low (0x0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN22_High (0x1UL) /*!< Pin driver is high */

/* Bit 21 : Pin 21 */
#define GPIO_OUT_PIN21_Pos (21UL) /*!< Position of PIN21 field. */
#define GPIO_OUT_PIN21_Msk (0x1UL << GPIO_OUT_PIN21_Pos) /*!< Bit mask of PIN21 field. */
#define GPIO_OUT_PIN21_Low (0x0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN21_High (0x1UL) /*!< Pin driver is high */

/* Bit 20 : Pin 20 */
#define GPIO_OUT_PIN20_Pos (20UL) /*!< Position of PIN20 field. */
#define GPIO_OUT_PIN20_Msk (0x1UL << GPIO_OUT_PIN20_Pos) /*!< Bit mask of PIN20 field. */
#define GPIO_OUT_PIN20_Low (0x0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN20_High (0x1UL) /*!< Pin driver is high */

/* Bit 19 : Pin 19 */
#define GPIO_OUT_PIN19_Pos (19UL) /*!< Position of PIN19 field. */
#define GPIO_OUT_PIN19_Msk (0x1UL << GPIO_OUT_PIN19_Pos) /*!< Bit mask of PIN19 field. */
#define GPIO_OUT_PIN19_Low (0x0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN19_High (0x1UL) /*!< Pin driver is high */

/* Bit 18 : Pin 18 */
#define GPIO_OUT_PIN18_Pos (18UL) /*!< Position of PIN18 field. */
#define GPIO_OUT_PIN18_Msk (0x1UL << GPIO_OUT_PIN18_Pos) /*!< Bit mask of PIN18 field. */
#define GPIO_OUT_PIN18_Low (0x0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN18_High (0x1UL) /*!< Pin driver is high */

/* Bit 17 : Pin 17 */
#define GPIO_OUT_PIN17_Pos (17UL) /*!< Position of PIN17 field. */
#define GPIO_OUT_PIN17_Msk (0x1UL << GPIO_OUT_PIN17_Pos) /*!< Bit mask of PIN17 field. */
#define GPIO_OUT_PIN17_Low (0x0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN17_High (0x1UL) /*!< Pin driver is high */

/* Bit 16 : Pin 16 */
#define GPIO_OUT_PIN16_Pos (16UL) /*!< Position of PIN16 field. */
#define GPIO_OUT_PIN16_Msk (0x1UL << GPIO_OUT_PIN16_Pos) /*!< Bit mask of PIN16 field. */
#define GPIO_OUT_PIN16_Low (0x0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN16_High (0x1UL) /*!< Pin driver is high */

/* Bit 15 : Pin 15 */
#define GPIO_OUT_PIN15_Pos (15UL) /*!< Position of PIN15 field. */
#define GPIO_OUT_PIN15_Msk (0x1UL << GPIO_OUT_PIN15_Pos) /*!< Bit mask of PIN15 field. */
#define GPIO_OUT_PIN15_Low (0x0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN15_High (0x1UL) /*!< Pin driver is high */

/* Bit 14 : Pin 14 */
#define GPIO_OUT_PIN14_Pos (14UL) /*!< Position of PIN14 field. */
#define GPIO_OUT_PIN14_Msk (0x1UL << GPIO_OUT_PIN14_Pos) /*!< Bit mask of PIN14 field. */
#define GPIO_OUT_PIN14_Low (0x0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN14_High (0x1UL) /*!< Pin driver is high */

/* Bit 13 : Pin 13 */
#define GPIO_OUT_PIN13_Pos (13UL) /*!< Position of PIN13 field. */
#define GPIO_OUT_PIN13_Msk (0x1UL << GPIO_OUT_PIN13_Pos) /*!< Bit mask of PIN13 field. */
#define GPIO_OUT_PIN13_Low (0x0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN13_High (0x1UL) /*!< Pin driver is high */

/* Bit 12 : Pin 12 */
#define GPIO_OUT_PIN12_Pos (12UL) /*!< Position of PIN12 field. */
#define GPIO_OUT_PIN12_Msk (0x1UL << GPIO_OUT_PIN12_Pos) /*!< Bit mask of PIN12 field. */
#define GPIO_OUT_PIN12_Low (0x0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN12_High (0x1UL) /*!< Pin driver is high */

/* Bit 11 : Pin 11 */
#define GPIO_OUT_PIN11_Pos (11UL) /*!< Position of PIN11 field. */
#define GPIO_OUT_PIN11_Msk (0x1UL << GPIO_OUT_PIN11_Pos) /*!< Bit mask of PIN11 field. */
#define GPIO_OUT_PIN11_Low (0x0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN11_High (0x1UL) /*!< Pin driver is high */

/* Bit 10 : Pin 10 */
#define GPIO_OUT_PIN10_Pos (10UL) /*!< Position of PIN10 field. */
#define GPIO_OUT_PIN10_Msk (0x1UL << GPIO_OUT_PIN10_Pos) /*!< Bit mask of PIN10 field. */
#define GPIO_OUT_PIN10_Low (0x0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN10_High (0x1UL) /*!< Pin driver is high */

/* Bit 9 : Pin 9 */
#define GPIO_OUT_PIN9_Pos (9UL) /*!< Position of PIN9 field. */
#define GPIO_OUT_PIN9_Msk (0x1UL << GPIO_OUT_PIN9_Pos) /*!< Bit mask of PIN9 field. */
#define GPIO_OUT_PIN9_Low (0x0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN9_High (0x1UL) /*!< Pin driver is high */

/* Bit 8 : Pin 8 */
#define GPIO_OUT_PIN8_Pos (8UL) /*!< Position of PIN8 field. */
#define GPIO_OUT_PIN8_Msk (0x1UL << GPIO_OUT_PIN8_Pos) /*!< Bit mask of PIN8 field. */
#define GPIO_OUT_PIN8_Low (0x0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN8_High (0x1UL) /*!< Pin driver is high */

/* Bit 7 : Pin 7 */
#define GPIO_OUT_PIN7_Pos (7UL) /*!< Position of PIN7 field. */
#define GPIO_OUT_PIN7_Msk (0x1UL << GPIO_OUT_PIN7_Pos) /*!< Bit mask of PIN7 field. */
#define GPIO_OUT_PIN7_Low (0x0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN7_High (0x1UL) /*!< Pin driver is high */

/* Bit 6 : Pin 6 */
#define GPIO_OUT_PIN6_Pos (6UL) /*!< Position of PIN6 field. */
#define GPIO_OUT_PIN6_Msk (0x1UL << GPIO_OUT_PIN6_Pos) /*!< Bit mask of PIN6 field. */
#define GPIO_OUT_PIN6_Low (0x0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN6_High (0x1UL) /*!< Pin driver is high */

/* Bit 5 : Pin 5 */
#define GPIO_OUT_PIN5_Pos (5UL) /*!< Position of PIN5 field. */
#define GPIO_OUT_PIN5_Msk (0x1UL << GPIO_OUT_PIN5_Pos) /*!< Bit mask of PIN5 field. */
#define GPIO_OUT_PIN5_Low (0x0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN5_High (0x1UL) /*!< Pin driver is high */

/* Bit 4 : Pin 4 */
#define GPIO_OUT_PIN4_Pos (4UL) /*!< Position of PIN4 field. */
#define GPIO_OUT_PIN4_Msk (0x1UL << GPIO_OUT_PIN4_Pos) /*!< Bit mask of PIN4 field. */
#define GPIO_OUT_PIN4_Low (0x0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN4_High (0x1UL) /*!< Pin driver is high */

/* Bit 3 : Pin 3 */
#define GPIO_OUT_PIN3_Pos (3UL) /*!< Position of PIN3 field. */
#define GPIO_OUT_PIN3_Msk (0x1UL << GPIO_OUT_PIN3_Pos) /*!< Bit mask of PIN3 field. */
#define GPIO_OUT_PIN3_Low (0x0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN3_High (0x1UL) /*!< Pin driver is high */

/* Bit 2 : Pin 2 */
#define GPIO_OUT_PIN2_Pos (2UL) /*!< Position of PIN2 field. */
#define GPIO_OUT_PIN2_Msk (0x1UL << GPIO_OUT_PIN2_Pos) /*!< Bit mask of PIN2 field. */
#define GPIO_OUT_PIN2_Low (0x0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN2_High (0x1UL) /*!< Pin driver is high */

/* Bit 1 : Pin 1 */
#define GPIO_OUT_PIN1_Pos (1UL) /*!< Position of PIN1 field. */
#define GPIO_OUT_PIN1_Msk (0x1UL << GPIO_OUT_PIN1_Pos) /*!< Bit mask of PIN1 field. */
#define GPIO_OUT_PIN1_Low (0x0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN1_High (0x1UL) /*!< Pin driver is high */

/* Bit 0 : Pin 0 */
#define GPIO_OUT_PIN0_Pos (0UL) /*!< Position of PIN0 field. */
#define GPIO_OUT_PIN0_Msk (0x1UL << GPIO_OUT_PIN0_Pos) /*!< Bit mask of PIN0 field. */
#define GPIO_OUT_PIN0_Low (0x0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN0_High (0x1UL) /*!< Pin driver is high */

/* Register: GPIO_OUTSET */
/* Description: Set individual bits in GPIO port */

/* Bit 31 : Pin 31 */
#define GPIO_OUTSET_PIN31_Pos (31UL) /*!< Position of PIN31 field. */
#define GPIO_OUTSET_PIN31_Msk (0x1UL << GPIO_OUTSET_PIN31_Pos) /*!< Bit mask of PIN31 field. */
#define GPIO_OUTSET_PIN31_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN31_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN31_Set (0x1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 30 : Pin 30 */
#define GPIO_OUTSET_PIN30_Pos (30UL) /*!< Position of PIN30 field. */
#define GPIO_OUTSET_PIN30_Msk (0x1UL << GPIO_OUTSET_PIN30_Pos) /*!< Bit mask of PIN30 field. */
#define GPIO_OUTSET_PIN30_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN30_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN30_Set (0x1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 29 : Pin 29 */
#define GPIO_OUTSET_PIN29_Pos (29UL) /*!< Position of PIN29 field. */
#define GPIO_OUTSET_PIN29_Msk (0x1UL << GPIO_OUTSET_PIN29_Pos) /*!< Bit mask of PIN29 field. */
#define GPIO_OUTSET_PIN29_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN29_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN29_Set (0x1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 28 : Pin 28 */
#define GPIO_OUTSET_PIN28_Pos (28UL) /*!< Position of PIN28 field. */
#define GPIO_OUTSET_PIN28_Msk (0x1UL << GPIO_OUTSET_PIN28_Pos) /*!< Bit mask of PIN28 field. */
#define GPIO_OUTSET_PIN28_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN28_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN28_Set (0x1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 27 : Pin 27 */
#define GPIO_OUTSET_PIN27_Pos (27UL) /*!< Position of PIN27 field. */
#define GPIO_OUTSET_PIN27_Msk (0x1UL << GPIO_OUTSET_PIN27_Pos) /*!< Bit mask of PIN27 field. */
#define GPIO_OUTSET_PIN27_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN27_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN27_Set (0x1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 26 : Pin 26 */
#define GPIO_OUTSET_PIN26_Pos (26UL) /*!< Position of PIN26 field. */
#define GPIO_OUTSET_PIN26_Msk (0x1UL << GPIO_OUTSET_PIN26_Pos) /*!< Bit mask of PIN26 field. */
#define GPIO_OUTSET_PIN26_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN26_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN26_Set (0x1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 25 : Pin 25 */
#define GPIO_OUTSET_PIN25_Pos (25UL) /*!< Position of PIN25 field. */
#define GPIO_OUTSET_PIN25_Msk (0x1UL << GPIO_OUTSET_PIN25_Pos) /*!< Bit mask of PIN25 field. */
#define GPIO_OUTSET_PIN25_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN25_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN25_Set (0x1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 24 : Pin 24 */
#define GPIO_OUTSET_PIN24_Pos (24UL) /*!< Position of PIN24 field. */
#define GPIO_OUTSET_PIN24_Msk (0x1UL << GPIO_OUTSET_PIN24_Pos) /*!< Bit mask of PIN24 field. */
#define GPIO_OUTSET_PIN24_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN24_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN24_Set (0x1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 23 : Pin 23 */
#define GPIO_OUTSET_PIN23_Pos (23UL) /*!< Position of PIN23 field. */
#define GPIO_OUTSET_PIN23_Msk (0x1UL << GPIO_OUTSET_PIN23_Pos) /*!< Bit mask of PIN23 field. */
#define GPIO_OUTSET_PIN23_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN23_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN23_Set (0x1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 22 : Pin 22 */
#define GPIO_OUTSET_PIN22_Pos (22UL) /*!< Position of PIN22 field. */
#define GPIO_OUTSET_PIN22_Msk (0x1UL << GPIO_OUTSET_PIN22_Pos) /*!< Bit mask of PIN22 field. */
#define GPIO_OUTSET_PIN22_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN22_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN22_Set (0x1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 21 : Pin 21 */
#define GPIO_OUTSET_PIN21_Pos (21UL) /*!< Position of PIN21 field. */
#define GPIO_OUTSET_PIN21_Msk (0x1UL << GPIO_OUTSET_PIN21_Pos) /*!< Bit mask of PIN21 field. */
#define GPIO_OUTSET_PIN21_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN21_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN21_Set (0x1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 20 : Pin 20 */
#define GPIO_OUTSET_PIN20_Pos (20UL) /*!< Position of PIN20 field. */
#define GPIO_OUTSET_PIN20_Msk (0x1UL << GPIO_OUTSET_PIN20_Pos) /*!< Bit mask of PIN20 field. */
#define GPIO_OUTSET_PIN20_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN20_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN20_Set (0x1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 19 : Pin 19 */
#define GPIO_OUTSET_PIN19_Pos (19UL) /*!< Position of PIN19 field. */
#define GPIO_OUTSET_PIN19_Msk (0x1UL << GPIO_OUTSET_PIN19_Pos) /*!< Bit mask of PIN19 field. */
#define GPIO_OUTSET_PIN19_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN19_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN19_Set (0x1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 18 : Pin 18 */
#define GPIO_OUTSET_PIN18_Pos (18UL) /*!< Position of PIN18 field. */
#define GPIO_OUTSET_PIN18_Msk (0x1UL << GPIO_OUTSET_PIN18_Pos) /*!< Bit mask of PIN18 field. */
#define GPIO_OUTSET_PIN18_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN18_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN18_Set (0x1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 17 : Pin 17 */
#define GPIO_OUTSET_PIN17_Pos (17UL) /*!< Position of PIN17 field. */
#define GPIO_OUTSET_PIN17_Msk (0x1UL << GPIO_OUTSET_PIN17_Pos) /*!< Bit mask of PIN17 field. */
#define GPIO_OUTSET_PIN17_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN17_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN17_Set (0x1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 16 : Pin 16 */
#define GPIO_OUTSET_PIN16_Pos (16UL) /*!< Position of PIN16 field. */
#define GPIO_OUTSET_PIN16_Msk (0x1UL << GPIO_OUTSET_PIN16_Pos) /*!< Bit mask of PIN16 field. */
#define GPIO_OUTSET_PIN16_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN16_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN16_Set (0x1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 15 : Pin 15 */
#define GPIO_OUTSET_PIN15_Pos (15UL) /*!< Position of PIN15 field. */
#define GPIO_OUTSET_PIN15_Msk (0x1UL << GPIO_OUTSET_PIN15_Pos) /*!< Bit mask of PIN15 field. */
#define GPIO_OUTSET_PIN15_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN15_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN15_Set (0x1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 14 : Pin 14 */
#define GPIO_OUTSET_PIN14_Pos (14UL) /*!< Position of PIN14 field. */
#define GPIO_OUTSET_PIN14_Msk (0x1UL << GPIO_OUTSET_PIN14_Pos) /*!< Bit mask of PIN14 field. */
#define GPIO_OUTSET_PIN14_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN14_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN14_Set (0x1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 13 : Pin 13 */
#define GPIO_OUTSET_PIN13_Pos (13UL) /*!< Position of PIN13 field. */
#define GPIO_OUTSET_PIN13_Msk (0x1UL << GPIO_OUTSET_PIN13_Pos) /*!< Bit mask of PIN13 field. */
#define GPIO_OUTSET_PIN13_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN13_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN13_Set (0x1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 12 : Pin 12 */
#define GPIO_OUTSET_PIN12_Pos (12UL) /*!< Position of PIN12 field. */
#define GPIO_OUTSET_PIN12_Msk (0x1UL << GPIO_OUTSET_PIN12_Pos) /*!< Bit mask of PIN12 field. */
#define GPIO_OUTSET_PIN12_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN12_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN12_Set (0x1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 11 : Pin 11 */
#define GPIO_OUTSET_PIN11_Pos (11UL) /*!< Position of PIN11 field. */
#define GPIO_OUTSET_PIN11_Msk (0x1UL << GPIO_OUTSET_PIN11_Pos) /*!< Bit mask of PIN11 field. */
#define GPIO_OUTSET_PIN11_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN11_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN11_Set (0x1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 10 : Pin 10 */
#define GPIO_OUTSET_PIN10_Pos (10UL) /*!< Position of PIN10 field. */
#define GPIO_OUTSET_PIN10_Msk (0x1UL << GPIO_OUTSET_PIN10_Pos) /*!< Bit mask of PIN10 field. */
#define GPIO_OUTSET_PIN10_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN10_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN10_Set (0x1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 9 : Pin 9 */
#define GPIO_OUTSET_PIN9_Pos (9UL) /*!< Position of PIN9 field. */
#define GPIO_OUTSET_PIN9_Msk (0x1UL << GPIO_OUTSET_PIN9_Pos) /*!< Bit mask of PIN9 field. */
#define GPIO_OUTSET_PIN9_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN9_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN9_Set (0x1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 8 : Pin 8 */
#define GPIO_OUTSET_PIN8_Pos (8UL) /*!< Position of PIN8 field. */
#define GPIO_OUTSET_PIN8_Msk (0x1UL << GPIO_OUTSET_PIN8_Pos) /*!< Bit mask of PIN8 field. */
#define GPIO_OUTSET_PIN8_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN8_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN8_Set (0x1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 7 : Pin 7 */
#define GPIO_OUTSET_PIN7_Pos (7UL) /*!< Position of PIN7 field. */
#define GPIO_OUTSET_PIN7_Msk (0x1UL << GPIO_OUTSET_PIN7_Pos) /*!< Bit mask of PIN7 field. */
#define GPIO_OUTSET_PIN7_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN7_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN7_Set (0x1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 6 : Pin 6 */
#define GPIO_OUTSET_PIN6_Pos (6UL) /*!< Position of PIN6 field. */
#define GPIO_OUTSET_PIN6_Msk (0x1UL << GPIO_OUTSET_PIN6_Pos) /*!< Bit mask of PIN6 field. */
#define GPIO_OUTSET_PIN6_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN6_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN6_Set (0x1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 5 : Pin 5 */
#define GPIO_OUTSET_PIN5_Pos (5UL) /*!< Position of PIN5 field. */
#define GPIO_OUTSET_PIN5_Msk (0x1UL << GPIO_OUTSET_PIN5_Pos) /*!< Bit mask of PIN5 field. */
#define GPIO_OUTSET_PIN5_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN5_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN5_Set (0x1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 4 : Pin 4 */
#define GPIO_OUTSET_PIN4_Pos (4UL) /*!< Position of PIN4 field. */
#define GPIO_OUTSET_PIN4_Msk (0x1UL << GPIO_OUTSET_PIN4_Pos) /*!< Bit mask of PIN4 field. */
#define GPIO_OUTSET_PIN4_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN4_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN4_Set (0x1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 3 : Pin 3 */
#define GPIO_OUTSET_PIN3_Pos (3UL) /*!< Position of PIN3 field. */
#define GPIO_OUTSET_PIN3_Msk (0x1UL << GPIO_OUTSET_PIN3_Pos) /*!< Bit mask of PIN3 field. */
#define GPIO_OUTSET_PIN3_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN3_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN3_Set (0x1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 2 : Pin 2 */
#define GPIO_OUTSET_PIN2_Pos (2UL) /*!< Position of PIN2 field. */
#define GPIO_OUTSET_PIN2_Msk (0x1UL << GPIO_OUTSET_PIN2_Pos) /*!< Bit mask of PIN2 field. */
#define GPIO_OUTSET_PIN2_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN2_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN2_Set (0x1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 1 : Pin 1 */
#define GPIO_OUTSET_PIN1_Pos (1UL) /*!< Position of PIN1 field. */
#define GPIO_OUTSET_PIN1_Msk (0x1UL << GPIO_OUTSET_PIN1_Pos) /*!< Bit mask of PIN1 field. */
#define GPIO_OUTSET_PIN1_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN1_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN1_Set (0x1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 0 : Pin 0 */
#define GPIO_OUTSET_PIN0_Pos (0UL) /*!< Position of PIN0 field. */
#define GPIO_OUTSET_PIN0_Msk (0x1UL << GPIO_OUTSET_PIN0_Pos) /*!< Bit mask of PIN0 field. */
#define GPIO_OUTSET_PIN0_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN0_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN0_Set (0x1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Register: GPIO_OUTCLR */
/* Description: Clear individual bits in GPIO port */

/* Bit 31 : Pin 31 */
#define GPIO_OUTCLR_PIN31_Pos (31UL) /*!< Position of PIN31 field. */
#define GPIO_OUTCLR_PIN31_Msk (0x1UL << GPIO_OUTCLR_PIN31_Pos) /*!< Bit mask of PIN31 field. */
#define GPIO_OUTCLR_PIN31_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN31_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN31_Clear (0x1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 30 : Pin 30 */
#define GPIO_OUTCLR_PIN30_Pos (30UL) /*!< Position of PIN30 field. */
#define GPIO_OUTCLR_PIN30_Msk (0x1UL << GPIO_OUTCLR_PIN30_Pos) /*!< Bit mask of PIN30 field. */
#define GPIO_OUTCLR_PIN30_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN30_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN30_Clear (0x1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 29 : Pin 29 */
#define GPIO_OUTCLR_PIN29_Pos (29UL) /*!< Position of PIN29 field. */
#define GPIO_OUTCLR_PIN29_Msk (0x1UL << GPIO_OUTCLR_PIN29_Pos) /*!< Bit mask of PIN29 field. */
#define GPIO_OUTCLR_PIN29_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN29_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN29_Clear (0x1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 28 : Pin 28 */
#define GPIO_OUTCLR_PIN28_Pos (28UL) /*!< Position of PIN28 field. */
#define GPIO_OUTCLR_PIN28_Msk (0x1UL << GPIO_OUTCLR_PIN28_Pos) /*!< Bit mask of PIN28 field. */
#define GPIO_OUTCLR_PIN28_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN28_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN28_Clear (0x1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 27 : Pin 27 */
#define GPIO_OUTCLR_PIN27_Pos (27UL) /*!< Position of PIN27 field. */
#define GPIO_OUTCLR_PIN27_Msk (0x1UL << GPIO_OUTCLR_PIN27_Pos) /*!< Bit mask of PIN27 field. */
#define GPIO_OUTCLR_PIN27_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN27_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN27_Clear (0x1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 26 : Pin 26 */
#define GPIO_OUTCLR_PIN26_Pos (26UL) /*!< Position of PIN26 field. */
#define GPIO_OUTCLR_PIN26_Msk (0x1UL << GPIO_OUTCLR_PIN26_Pos) /*!< Bit mask of PIN26 field. */
#define GPIO_OUTCLR_PIN26_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN26_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN26_Clear (0x1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 25 : Pin 25 */
#define GPIO_OUTCLR_PIN25_Pos (25UL) /*!< Position of PIN25 field. */
#define GPIO_OUTCLR_PIN25_Msk (0x1UL << GPIO_OUTCLR_PIN25_Pos) /*!< Bit mask of PIN25 field. */
#define GPIO_OUTCLR_PIN25_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN25_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN25_Clear (0x1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 24 : Pin 24 */
#define GPIO_OUTCLR_PIN24_Pos (24UL) /*!< Position of PIN24 field. */
#define GPIO_OUTCLR_PIN24_Msk (0x1UL << GPIO_OUTCLR_PIN24_Pos) /*!< Bit mask of PIN24 field. */
#define GPIO_OUTCLR_PIN24_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN24_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN24_Clear (0x1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 23 : Pin 23 */
#define GPIO_OUTCLR_PIN23_Pos (23UL) /*!< Position of PIN23 field. */
#define GPIO_OUTCLR_PIN23_Msk (0x1UL << GPIO_OUTCLR_PIN23_Pos) /*!< Bit mask of PIN23 field. */
#define GPIO_OUTCLR_PIN23_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN23_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN23_Clear (0x1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 22 : Pin 22 */
#define GPIO_OUTCLR_PIN22_Pos (22UL) /*!< Position of PIN22 field. */
#define GPIO_OUTCLR_PIN22_Msk (0x1UL << GPIO_OUTCLR_PIN22_Pos) /*!< Bit mask of PIN22 field. */
#define GPIO_OUTCLR_PIN22_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN22_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN22_Clear (0x1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 21 : Pin 21 */
#define GPIO_OUTCLR_PIN21_Pos (21UL) /*!< Position of PIN21 field. */
#define GPIO_OUTCLR_PIN21_Msk (0x1UL << GPIO_OUTCLR_PIN21_Pos) /*!< Bit mask of PIN21 field. */
#define GPIO_OUTCLR_PIN21_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN21_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN21_Clear (0x1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 20 : Pin 20 */
#define GPIO_OUTCLR_PIN20_Pos (20UL) /*!< Position of PIN20 field. */
#define GPIO_OUTCLR_PIN20_Msk (0x1UL << GPIO_OUTCLR_PIN20_Pos) /*!< Bit mask of PIN20 field. */
#define GPIO_OUTCLR_PIN20_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN20_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN20_Clear (0x1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 19 : Pin 19 */
#define GPIO_OUTCLR_PIN19_Pos (19UL) /*!< Position of PIN19 field. */
#define GPIO_OUTCLR_PIN19_Msk (0x1UL << GPIO_OUTCLR_PIN19_Pos) /*!< Bit mask of PIN19 field. */
#define GPIO_OUTCLR_PIN19_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN19_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN19_Clear (0x1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 18 : Pin 18 */
#define GPIO_OUTCLR_PIN18_Pos (18UL) /*!< Position of PIN18 field. */
#define GPIO_OUTCLR_PIN18_Msk (0x1UL << GPIO_OUTCLR_PIN18_Pos) /*!< Bit mask of PIN18 field. */
#define GPIO_OUTCLR_PIN18_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN18_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN18_Clear (0x1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 17 : Pin 17 */
#define GPIO_OUTCLR_PIN17_Pos (17UL) /*!< Position of PIN17 field. */
#define GPIO_OUTCLR_PIN17_Msk (0x1UL << GPIO_OUTCLR_PIN17_Pos) /*!< Bit mask of PIN17 field. */
#define GPIO_OUTCLR_PIN17_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN17_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN17_Clear (0x1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 16 : Pin 16 */
#define GPIO_OUTCLR_PIN16_Pos (16UL) /*!< Position of PIN16 field. */
#define GPIO_OUTCLR_PIN16_Msk (0x1UL << GPIO_OUTCLR_PIN16_Pos) /*!< Bit mask of PIN16 field. */
#define GPIO_OUTCLR_PIN16_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN16_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN16_Clear (0x1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 15 : Pin 15 */
#define GPIO_OUTCLR_PIN15_Pos (15UL) /*!< Position of PIN15 field. */
#define GPIO_OUTCLR_PIN15_Msk (0x1UL << GPIO_OUTCLR_PIN15_Pos) /*!< Bit mask of PIN15 field. */
#define GPIO_OUTCLR_PIN15_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN15_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN15_Clear (0x1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 14 : Pin 14 */
#define GPIO_OUTCLR_PIN14_Pos (14UL) /*!< Position of PIN14 field. */
#define GPIO_OUTCLR_PIN14_Msk (0x1UL << GPIO_OUTCLR_PIN14_Pos) /*!< Bit mask of PIN14 field. */
#define GPIO_OUTCLR_PIN14_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN14_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN14_Clear (0x1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 13 : Pin 13 */
#define GPIO_OUTCLR_PIN13_Pos (13UL) /*!< Position of PIN13 field. */
#define GPIO_OUTCLR_PIN13_Msk (0x1UL << GPIO_OUTCLR_PIN13_Pos) /*!< Bit mask of PIN13 field. */
#define GPIO_OUTCLR_PIN13_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN13_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN13_Clear (0x1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 12 : Pin 12 */
#define GPIO_OUTCLR_PIN12_Pos (12UL) /*!< Position of PIN12 field. */
#define GPIO_OUTCLR_PIN12_Msk (0x1UL << GPIO_OUTCLR_PIN12_Pos) /*!< Bit mask of PIN12 field. */
#define GPIO_OUTCLR_PIN12_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN12_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN12_Clear (0x1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 11 : Pin 11 */
#define GPIO_OUTCLR_PIN11_Pos (11UL) /*!< Position of PIN11 field. */
#define GPIO_OUTCLR_PIN11_Msk (0x1UL << GPIO_OUTCLR_PIN11_Pos) /*!< Bit mask of PIN11 field. */
#define GPIO_OUTCLR_PIN11_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN11_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN11_Clear (0x1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 10 : Pin 10 */
#define GPIO_OUTCLR_PIN10_Pos (10UL) /*!< Position of PIN10 field. */
#define GPIO_OUTCLR_PIN10_Msk (0x1UL << GPIO_OUTCLR_PIN10_Pos) /*!< Bit mask of PIN10 field. */
#define GPIO_OUTCLR_PIN10_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN10_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN10_Clear (0x1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 9 : Pin 9 */
#define GPIO_OUTCLR_PIN9_Pos (9UL) /*!< Position of PIN9 field. */
#define GPIO_OUTCLR_PIN9_Msk (0x1UL << GPIO_OUTCLR_PIN9_Pos) /*!< Bit mask of PIN9 field. */
#define GPIO_OUTCLR_PIN9_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN9_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN9_Clear (0x1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 8 : Pin 8 */
#define GPIO_OUTCLR_PIN8_Pos (8UL) /*!< Position of PIN8 field. */
#define GPIO_OUTCLR_PIN8_Msk (0x1UL << GPIO_OUTCLR_PIN8_Pos) /*!< Bit mask of PIN8 field. */
#define GPIO_OUTCLR_PIN8_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN8_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN8_Clear (0x1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 7 : Pin 7 */
#define GPIO_OUTCLR_PIN7_Pos (7UL) /*!< Position of PIN7 field. */
#define GPIO_OUTCLR_PIN7_Msk (0x1UL << GPIO_OUTCLR_PIN7_Pos) /*!< Bit mask of PIN7 field. */
#define GPIO_OUTCLR_PIN7_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN7_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN7_Clear (0x1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 6 : Pin 6 */
#define GPIO_OUTCLR_PIN6_Pos (6UL) /*!< Position of PIN6 field. */
#define GPIO_OUTCLR_PIN6_Msk (0x1UL << GPIO_OUTCLR_PIN6_Pos) /*!< Bit mask of PIN6 field. */
#define GPIO_OUTCLR_PIN6_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN6_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN6_Clear (0x1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 5 : Pin 5 */
#define GPIO_OUTCLR_PIN5_Pos (5UL) /*!< Position of PIN5 field. */
#define GPIO_OUTCLR_PIN5_Msk (0x1UL << GPIO_OUTCLR_PIN5_Pos) /*!< Bit mask of PIN5 field. */
#define GPIO_OUTCLR_PIN5_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN5_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN5_Clear (0x1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 4 : Pin 4 */
#define GPIO_OUTCLR_PIN4_Pos (4UL) /*!< Position of PIN4 field. */
#define GPIO_OUTCLR_PIN4_Msk (0x1UL << GPIO_OUTCLR_PIN4_Pos) /*!< Bit mask of PIN4 field. */
#define GPIO_OUTCLR_PIN4_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN4_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN4_Clear (0x1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 3 : Pin 3 */
#define GPIO_OUTCLR_PIN3_Pos (3UL) /*!< Position of PIN3 field. */
#define GPIO_OUTCLR_PIN3_Msk (0x1UL << GPIO_OUTCLR_PIN3_Pos) /*!< Bit mask of PIN3 field. */
#define GPIO_OUTCLR_PIN3_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN3_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN3_Clear (0x1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 2 : Pin 2 */
#define GPIO_OUTCLR_PIN2_Pos (2UL) /*!< Position of PIN2 field. */
#define GPIO_OUTCLR_PIN2_Msk (0x1UL << GPIO_OUTCLR_PIN2_Pos) /*!< Bit mask of PIN2 field. */
#define GPIO_OUTCLR_PIN2_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN2_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN2_Clear (0x1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 1 : Pin 1 */
#define GPIO_OUTCLR_PIN1_Pos (1UL) /*!< Position of PIN1 field. */
#define GPIO_OUTCLR_PIN1_Msk (0x1UL << GPIO_OUTCLR_PIN1_Pos) /*!< Bit mask of PIN1 field. */
#define GPIO_OUTCLR_PIN1_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN1_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN1_Clear (0x1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 0 : Pin 0 */
#define GPIO_OUTCLR_PIN0_Pos (0UL) /*!< Position of PIN0 field. */
#define GPIO_OUTCLR_PIN0_Msk (0x1UL << GPIO_OUTCLR_PIN0_Pos) /*!< Bit mask of PIN0 field. */
#define GPIO_OUTCLR_PIN0_Low (0x0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN0_High (0x1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN0_Clear (0x1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Register: GPIO_IN */
/* Description: Read GPIO port */

/* Bit 31 : Pin 31 */
#define GPIO_IN_PIN31_Pos (31UL) /*!< Position of PIN31 field. */
#define GPIO_IN_PIN31_Msk (0x1UL << GPIO_IN_PIN31_Pos) /*!< Bit mask of PIN31 field. */
#define GPIO_IN_PIN31_Low (0x0UL) /*!< Pin input is low */
#define GPIO_IN_PIN31_High (0x1UL) /*!< Pin input is high */

/* Bit 30 : Pin 30 */
#define GPIO_IN_PIN30_Pos (30UL) /*!< Position of PIN30 field. */
#define GPIO_IN_PIN30_Msk (0x1UL << GPIO_IN_PIN30_Pos) /*!< Bit mask of PIN30 field. */
#define GPIO_IN_PIN30_Low (0x0UL) /*!< Pin input is low */
#define GPIO_IN_PIN30_High (0x1UL) /*!< Pin input is high */

/* Bit 29 : Pin 29 */
#define GPIO_IN_PIN29_Pos (29UL) /*!< Position of PIN29 field. */
#define GPIO_IN_PIN29_Msk (0x1UL << GPIO_IN_PIN29_Pos) /*!< Bit mask of PIN29 field. */
#define GPIO_IN_PIN29_Low (0x0UL) /*!< Pin input is low */
#define GPIO_IN_PIN29_High (0x1UL) /*!< Pin input is high */

/* Bit 28 : Pin 28 */
#define GPIO_IN_PIN28_Pos (28UL) /*!< Position of PIN28 field. */
#define GPIO_IN_PIN28_Msk (0x1UL << GPIO_IN_PIN28_Pos) /*!< Bit mask of PIN28 field. */
#define GPIO_IN_PIN28_Low (0x0UL) /*!< Pin input is low */
#define GPIO_IN_PIN28_High (0x1UL) /*!< Pin input is high */

/* Bit 27 : Pin 27 */
#define GPIO_IN_PIN27_Pos (27UL) /*!< Position of PIN27 field. */
#define GPIO_IN_PIN27_Msk (0x1UL << GPIO_IN_PIN27_Pos) /*!< Bit mask of PIN27 field. */
#define GPIO_IN_PIN27_Low (0x0UL) /*!< Pin input is low */
#define GPIO_IN_PIN27_High (0x1UL) /*!< Pin input is high */

/* Bit 26 : Pin 26 */
#define GPIO_IN_PIN26_Pos (26UL) /*!< Position of PIN26 field. */
#define GPIO_IN_PIN26_Msk (0x1UL << GPIO_IN_PIN26_Pos) /*!< Bit mask of PIN26 field. */
#define GPIO_IN_PIN26_Low (0x0UL) /*!< Pin input is low */
#define GPIO_IN_PIN26_High (0x1UL) /*!< Pin input is high */

/* Bit 25 : Pin 25 */
#define GPIO_IN_PIN25_Pos (25UL) /*!< Position of PIN25 field. */
#define GPIO_IN_PIN25_Msk (0x1UL << GPIO_IN_PIN25_Pos) /*!< Bit mask of PIN25 field. */
#define GPIO_IN_PIN25_Low (0x0UL) /*!< Pin input is low */
#define GPIO_IN_PIN25_High (0x1UL) /*!< Pin input is high */

/* Bit 24 : Pin 24 */
#define GPIO_IN_PIN24_Pos (24UL) /*!< Position of PIN24 field. */
#define GPIO_IN_PIN24_Msk (0x1UL << GPIO_IN_PIN24_Pos) /*!< Bit mask of PIN24 field. */
#define GPIO_IN_PIN24_Low (0x0UL) /*!< Pin input is low */
#define GPIO_IN_PIN24_High (0x1UL) /*!< Pin input is high */

/* Bit 23 : Pin 23 */
#define GPIO_IN_PIN23_Pos (23UL) /*!< Position of PIN23 field. */
#define GPIO_IN_PIN23_Msk (0x1UL << GPIO_IN_PIN23_Pos) /*!< Bit mask of PIN23 field. */
#define GPIO_IN_PIN23_Low (0x0UL) /*!< Pin input is low */
#define GPIO_IN_PIN23_High (0x1UL) /*!< Pin input is high */

/* Bit 22 : Pin 22 */
#define GPIO_IN_PIN22_Pos (22UL) /*!< Position of PIN22 field. */
#define GPIO_IN_PIN22_Msk (0x1UL << GPIO_IN_PIN22_Pos) /*!< Bit mask of PIN22 field. */
#define GPIO_IN_PIN22_Low (0x0UL) /*!< Pin input is low */
#define GPIO_IN_PIN22_High (0x1UL) /*!< Pin input is high */

/* Bit 21 : Pin 21 */
#define GPIO_IN_PIN21_Pos (21UL) /*!< Position of PIN21 field. */
#define GPIO_IN_PIN21_Msk (0x1UL << GPIO_IN_PIN21_Pos) /*!< Bit mask of PIN21 field. */
#define GPIO_IN_PIN21_Low (0x0UL) /*!< Pin input is low */
#define GPIO_IN_PIN21_High (0x1UL) /*!< Pin input is high */

/* Bit 20 : Pin 20 */
#define GPIO_IN_PIN20_Pos (20UL) /*!< Position of PIN20 field. */
#define GPIO_IN_PIN20_Msk (0x1UL << GPIO_IN_PIN20_Pos) /*!< Bit mask of PIN20 field. */
#define GPIO_IN_PIN20_Low (0x0UL) /*!< Pin input is low */
#define GPIO_IN_PIN20_High (0x1UL) /*!< Pin input is high */

/* Bit 19 : Pin 19 */
#define GPIO_IN_PIN19_Pos (19UL) /*!< Position of PIN19 field. */
#define GPIO_IN_PIN19_Msk (0x1UL << GPIO_IN_PIN19_Pos) /*!< Bit mask of PIN19 field. */
#define GPIO_IN_PIN19_Low (0x0UL) /*!< Pin input is low */
#define GPIO_IN_PIN19_High (0x1UL) /*!< Pin input is high */

/* Bit 18 : Pin 18 */
#define GPIO_IN_PIN18_Pos (18UL) /*!< Position of PIN18 field. */
#define GPIO_IN_PIN18_Msk (0x1UL << GPIO_IN_PIN18_Pos) /*!< Bit mask of PIN18 field. */
#define GPIO_IN_PIN18_Low (0x0UL) /*!< Pin input is low */
#define GPIO_IN_PIN18_High (0x1UL) /*!< Pin input is high */

/* Bit 17 : Pin 17 */
#define GPIO_IN_PIN17_Pos (17UL) /*!< Position of PIN17 field. */
#define GPIO_IN_PIN17_Msk (0x1UL << GPIO_IN_PIN17_Pos) /*!< Bit mask of PIN17 field. */
#define GPIO_IN_PIN17_Low (0x0UL) /*!< Pin input is low */
#define GPIO_IN_PIN17_High (0x1UL) /*!< Pin input is high */

/* Bit 16 : Pin 16 */
#define GPIO_IN_PIN16_Pos (16UL) /*!< Position of PIN16 field. */
#define GPIO_IN_PIN16_Msk (0x1UL << GPIO_IN_PIN16_Pos) /*!< Bit mask of PIN16 field. */
#define GPIO_IN_PIN16_Low (0x0UL) /*!< Pin input is low */
#define GPIO_IN_PIN16_High (0x1UL) /*!< Pin input is high */

/* Bit 15 : Pin 15 */
#define GPIO_IN_PIN15_Pos (15UL) /*!< Position of PIN15 field. */
#define GPIO_IN_PIN15_Msk (0x1UL << GPIO_IN_PIN15_Pos) /*!< Bit mask of PIN15 field. */
#define GPIO_IN_PIN15_Low (0x0UL) /*!< Pin input is low */
#define GPIO_IN_PIN15_High (0x1UL) /*!< Pin input is high */

/* Bit 14 : Pin 14 */
#define GPIO_IN_PIN14_Pos (14UL) /*!< Position of PIN14 field. */
#define GPIO_IN_PIN14_Msk (0x1UL << GPIO_IN_PIN14_Pos) /*!< Bit mask of PIN14 field. */
#define GPIO_IN_PIN14_Low (0x0UL) /*!< Pin input is low */
#define GPIO_IN_PIN14_High (0x1UL) /*!< Pin input is high */

/* Bit 13 : Pin 13 */
#define GPIO_IN_PIN13_Pos (13UL) /*!< Position of PIN13 field. */
#define GPIO_IN_PIN13_Msk (0x1UL << GPIO_IN_PIN13_Pos) /*!< Bit mask of PIN13 field. */
#define GPIO_IN_PIN13_Low (0x0UL) /*!< Pin input is low */
#define GPIO_IN_PIN13_High (0x1UL) /*!< Pin input is high */

/* Bit 12 : Pin 12 */
#define GPIO_IN_PIN12_Pos (12UL) /*!< Position of PIN12 field. */
#define GPIO_IN_PIN12_Msk (0x1UL << GPIO_IN_PIN12_Pos) /*!< Bit mask of PIN12 field. */
#define GPIO_IN_PIN12_Low (0x0UL) /*!< Pin input is low */
#define GPIO_IN_PIN12_High (0x1UL) /*!< Pin input is high */

/* Bit 11 : Pin 11 */
#define GPIO_IN_PIN11_Pos (11UL) /*!< Position of PIN11 field. */
#define GPIO_IN_PIN11_Msk (0x1UL << GPIO_IN_PIN11_Pos) /*!< Bit mask of PIN11 field. */
#define GPIO_IN_PIN11_Low (0x0UL) /*!< Pin input is low */
#define GPIO_IN_PIN11_High (0x1UL) /*!< Pin input is high */

/* Bit 10 : Pin 10 */
#define GPIO_IN_PIN10_Pos (10UL) /*!< Position of PIN10 field. */
#define GPIO_IN_PIN10_Msk (0x1UL << GPIO_IN_PIN10_Pos) /*!< Bit mask of PIN10 field. */
#define GPIO_IN_PIN10_Low (0x0UL) /*!< Pin input is low */
#define GPIO_IN_PIN10_High (0x1UL) /*!< Pin input is high */

/* Bit 9 : Pin 9 */
#define GPIO_IN_PIN9_Pos (9UL) /*!< Position of PIN9 field. */
#define GPIO_IN_PIN9_Msk (0x1UL << GPIO_IN_PIN9_Pos) /*!< Bit mask of PIN9 field. */
#define GPIO_IN_PIN9_Low (0x0UL) /*!< Pin input is low */
#define GPIO_IN_PIN9_High (0x1UL) /*!< Pin input is high */

/* Bit 8 : Pin 8 */
#define GPIO_IN_PIN8_Pos (8UL) /*!< Position of PIN8 field. */
#define GPIO_IN_PIN8_Msk (0x1UL << GPIO_IN_PIN8_Pos) /*!< Bit mask of PIN8 field. */
#define GPIO_IN_PIN8_Low (0x0UL) /*!< Pin input is low */
#define GPIO_IN_PIN8_High (0x1UL) /*!< Pin input is high */

/* Bit 7 : Pin 7 */
#define GPIO_IN_PIN7_Pos (7UL) /*!< Position of PIN7 field. */
#define GPIO_IN_PIN7_Msk (0x1UL << GPIO_IN_PIN7_Pos) /*!< Bit mask of PIN7 field. */
#define GPIO_IN_PIN7_Low (0x0UL) /*!< Pin input is low */
#define GPIO_IN_PIN7_High (0x1UL) /*!< Pin input is high */

/* Bit 6 : Pin 6 */
#define GPIO_IN_PIN6_Pos (6UL) /*!< Position of PIN6 field. */
#define GPIO_IN_PIN6_Msk (0x1UL << GPIO_IN_PIN6_Pos) /*!< Bit mask of PIN6 field. */
#define GPIO_IN_PIN6_Low (0x0UL) /*!< Pin input is low */
#define GPIO_IN_PIN6_High (0x1UL) /*!< Pin input is high */

/* Bit 5 : Pin 5 */
#define GPIO_IN_PIN5_Pos (5UL) /*!< Position of PIN5 field. */
#define GPIO_IN_PIN5_Msk (0x1UL << GPIO_IN_PIN5_Pos) /*!< Bit mask of PIN5 field. */
#define GPIO_IN_PIN5_Low (0x0UL) /*!< Pin input is low */
#define GPIO_IN_PIN5_High (0x1UL) /*!< Pin input is high */

/* Bit 4 : Pin 4 */
#define GPIO_IN_PIN4_Pos (4UL) /*!< Position of PIN4 field. */
#define GPIO_IN_PIN4_Msk (0x1UL << GPIO_IN_PIN4_Pos) /*!< Bit mask of PIN4 field. */
#define GPIO_IN_PIN4_Low (0x0UL) /*!< Pin input is low */
#define GPIO_IN_PIN4_High (0x1UL) /*!< Pin input is high */

/* Bit 3 : Pin 3 */
#define GPIO_IN_PIN3_Pos (3UL) /*!< Position of PIN3 field. */
#define GPIO_IN_PIN3_Msk (0x1UL << GPIO_IN_PIN3_Pos) /*!< Bit mask of PIN3 field. */
#define GPIO_IN_PIN3_Low (0x0UL) /*!< Pin input is low */
#define GPIO_IN_PIN3_High (0x1UL) /*!< Pin input is high */

/* Bit 2 : Pin 2 */
#define GPIO_IN_PIN2_Pos (2UL) /*!< Position of PIN2 field. */
#define GPIO_IN_PIN2_Msk (0x1UL << GPIO_IN_PIN2_Pos) /*!< Bit mask of PIN2 field. */
#define GPIO_IN_PIN2_Low (0x0UL) /*!< Pin input is low */
#define GPIO_IN_PIN2_High (0x1UL) /*!< Pin input is high */

/* Bit 1 : Pin 1 */
#define GPIO_IN_PIN1_Pos (1UL) /*!< Position of PIN1 field. */
#define GPIO_IN_PIN1_Msk (0x1UL << GPIO_IN_PIN1_Pos) /*!< Bit mask of PIN1 field. */
#define GPIO_IN_PIN1_Low (0x0UL) /*!< Pin input is low */
#define GPIO_IN_PIN1_High (0x1UL) /*!< Pin input is high */

/* Bit 0 : Pin 0 */
#define GPIO_IN_PIN0_Pos (0UL) /*!< Position of PIN0 field. */
#define GPIO_IN_PIN0_Msk (0x1UL << GPIO_IN_PIN0_Pos) /*!< Bit mask of PIN0 field. */
#define GPIO_IN_PIN0_Low (0x0UL) /*!< Pin input is low */
#define GPIO_IN_PIN0_High (0x1UL) /*!< Pin input is high */

/* Register: GPIO_DIR */
/* Description: Direction of GPIO pins */

/* Bit 31 : Pin 31 */
#define GPIO_DIR_PIN31_Pos (31UL) /*!< Position of PIN31 field. */
#define GPIO_DIR_PIN31_Msk (0x1UL << GPIO_DIR_PIN31_Pos) /*!< Bit mask of PIN31 field. */
#define GPIO_DIR_PIN31_Input (0x0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN31_Output (0x1UL) /*!< Pin set as output */

/* Bit 30 : Pin 30 */
#define GPIO_DIR_PIN30_Pos (30UL) /*!< Position of PIN30 field. */
#define GPIO_DIR_PIN30_Msk (0x1UL << GPIO_DIR_PIN30_Pos) /*!< Bit mask of PIN30 field. */
#define GPIO_DIR_PIN30_Input (0x0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN30_Output (0x1UL) /*!< Pin set as output */

/* Bit 29 : Pin 29 */
#define GPIO_DIR_PIN29_Pos (29UL) /*!< Position of PIN29 field. */
#define GPIO_DIR_PIN29_Msk (0x1UL << GPIO_DIR_PIN29_Pos) /*!< Bit mask of PIN29 field. */
#define GPIO_DIR_PIN29_Input (0x0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN29_Output (0x1UL) /*!< Pin set as output */

/* Bit 28 : Pin 28 */
#define GPIO_DIR_PIN28_Pos (28UL) /*!< Position of PIN28 field. */
#define GPIO_DIR_PIN28_Msk (0x1UL << GPIO_DIR_PIN28_Pos) /*!< Bit mask of PIN28 field. */
#define GPIO_DIR_PIN28_Input (0x0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN28_Output (0x1UL) /*!< Pin set as output */

/* Bit 27 : Pin 27 */
#define GPIO_DIR_PIN27_Pos (27UL) /*!< Position of PIN27 field. */
#define GPIO_DIR_PIN27_Msk (0x1UL << GPIO_DIR_PIN27_Pos) /*!< Bit mask of PIN27 field. */
#define GPIO_DIR_PIN27_Input (0x0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN27_Output (0x1UL) /*!< Pin set as output */

/* Bit 26 : Pin 26 */
#define GPIO_DIR_PIN26_Pos (26UL) /*!< Position of PIN26 field. */
#define GPIO_DIR_PIN26_Msk (0x1UL << GPIO_DIR_PIN26_Pos) /*!< Bit mask of PIN26 field. */
#define GPIO_DIR_PIN26_Input (0x0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN26_Output (0x1UL) /*!< Pin set as output */

/* Bit 25 : Pin 25 */
#define GPIO_DIR_PIN25_Pos (25UL) /*!< Position of PIN25 field. */
#define GPIO_DIR_PIN25_Msk (0x1UL << GPIO_DIR_PIN25_Pos) /*!< Bit mask of PIN25 field. */
#define GPIO_DIR_PIN25_Input (0x0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN25_Output (0x1UL) /*!< Pin set as output */

/* Bit 24 : Pin 24 */
#define GPIO_DIR_PIN24_Pos (24UL) /*!< Position of PIN24 field. */
#define GPIO_DIR_PIN24_Msk (0x1UL << GPIO_DIR_PIN24_Pos) /*!< Bit mask of PIN24 field. */
#define GPIO_DIR_PIN24_Input (0x0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN24_Output (0x1UL) /*!< Pin set as output */

/* Bit 23 : Pin 23 */
#define GPIO_DIR_PIN23_Pos (23UL) /*!< Position of PIN23 field. */
#define GPIO_DIR_PIN23_Msk (0x1UL << GPIO_DIR_PIN23_Pos) /*!< Bit mask of PIN23 field. */
#define GPIO_DIR_PIN23_Input (0x0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN23_Output (0x1UL) /*!< Pin set as output */

/* Bit 22 : Pin 22 */
#define GPIO_DIR_PIN22_Pos (22UL) /*!< Position of PIN22 field. */
#define GPIO_DIR_PIN22_Msk (0x1UL << GPIO_DIR_PIN22_Pos) /*!< Bit mask of PIN22 field. */
#define GPIO_DIR_PIN22_Input (0x0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN22_Output (0x1UL) /*!< Pin set as output */

/* Bit 21 : Pin 21 */
#define GPIO_DIR_PIN21_Pos (21UL) /*!< Position of PIN21 field. */
#define GPIO_DIR_PIN21_Msk (0x1UL << GPIO_DIR_PIN21_Pos) /*!< Bit mask of PIN21 field. */
#define GPIO_DIR_PIN21_Input (0x0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN21_Output (0x1UL) /*!< Pin set as output */

/* Bit 20 : Pin 20 */
#define GPIO_DIR_PIN20_Pos (20UL) /*!< Position of PIN20 field. */
#define GPIO_DIR_PIN20_Msk (0x1UL << GPIO_DIR_PIN20_Pos) /*!< Bit mask of PIN20 field. */
#define GPIO_DIR_PIN20_Input (0x0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN20_Output (0x1UL) /*!< Pin set as output */

/* Bit 19 : Pin 19 */
#define GPIO_DIR_PIN19_Pos (19UL) /*!< Position of PIN19 field. */
#define GPIO_DIR_PIN19_Msk (0x1UL << GPIO_DIR_PIN19_Pos) /*!< Bit mask of PIN19 field. */
#define GPIO_DIR_PIN19_Input (0x0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN19_Output (0x1UL) /*!< Pin set as output */

/* Bit 18 : Pin 18 */
#define GPIO_DIR_PIN18_Pos (18UL) /*!< Position of PIN18 field. */
#define GPIO_DIR_PIN18_Msk (0x1UL << GPIO_DIR_PIN18_Pos) /*!< Bit mask of PIN18 field. */
#define GPIO_DIR_PIN18_Input (0x0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN18_Output (0x1UL) /*!< Pin set as output */

/* Bit 17 : Pin 17 */
#define GPIO_DIR_PIN17_Pos (17UL) /*!< Position of PIN17 field. */
#define GPIO_DIR_PIN17_Msk (0x1UL << GPIO_DIR_PIN17_Pos) /*!< Bit mask of PIN17 field. */
#define GPIO_DIR_PIN17_Input (0x0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN17_Output (0x1UL) /*!< Pin set as output */

/* Bit 16 : Pin 16 */
#define GPIO_DIR_PIN16_Pos (16UL) /*!< Position of PIN16 field. */
#define GPIO_DIR_PIN16_Msk (0x1UL << GPIO_DIR_PIN16_Pos) /*!< Bit mask of PIN16 field. */
#define GPIO_DIR_PIN16_Input (0x0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN16_Output (0x1UL) /*!< Pin set as output */

/* Bit 15 : Pin 15 */
#define GPIO_DIR_PIN15_Pos (15UL) /*!< Position of PIN15 field. */
#define GPIO_DIR_PIN15_Msk (0x1UL << GPIO_DIR_PIN15_Pos) /*!< Bit mask of PIN15 field. */
#define GPIO_DIR_PIN15_Input (0x0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN15_Output (0x1UL) /*!< Pin set as output */

/* Bit 14 : Pin 14 */
#define GPIO_DIR_PIN14_Pos (14UL) /*!< Position of PIN14 field. */
#define GPIO_DIR_PIN14_Msk (0x1UL << GPIO_DIR_PIN14_Pos) /*!< Bit mask of PIN14 field. */
#define GPIO_DIR_PIN14_Input (0x0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN14_Output (0x1UL) /*!< Pin set as output */

/* Bit 13 : Pin 13 */
#define GPIO_DIR_PIN13_Pos (13UL) /*!< Position of PIN13 field. */
#define GPIO_DIR_PIN13_Msk (0x1UL << GPIO_DIR_PIN13_Pos) /*!< Bit mask of PIN13 field. */
#define GPIO_DIR_PIN13_Input (0x0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN13_Output (0x1UL) /*!< Pin set as output */

/* Bit 12 : Pin 12 */
#define GPIO_DIR_PIN12_Pos (12UL) /*!< Position of PIN12 field. */
#define GPIO_DIR_PIN12_Msk (0x1UL << GPIO_DIR_PIN12_Pos) /*!< Bit mask of PIN12 field. */
#define GPIO_DIR_PIN12_Input (0x0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN12_Output (0x1UL) /*!< Pin set as output */

/* Bit 11 : Pin 11 */
#define GPIO_DIR_PIN11_Pos (11UL) /*!< Position of PIN11 field. */
#define GPIO_DIR_PIN11_Msk (0x1UL << GPIO_DIR_PIN11_Pos) /*!< Bit mask of PIN11 field. */
#define GPIO_DIR_PIN11_Input (0x0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN11_Output (0x1UL) /*!< Pin set as output */

/* Bit 10 : Pin 10 */
#define GPIO_DIR_PIN10_Pos (10UL) /*!< Position of PIN10 field. */
#define GPIO_DIR_PIN10_Msk (0x1UL << GPIO_DIR_PIN10_Pos) /*!< Bit mask of PIN10 field. */
#define GPIO_DIR_PIN10_Input (0x0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN10_Output (0x1UL) /*!< Pin set as output */

/* Bit 9 : Pin 9 */
#define GPIO_DIR_PIN9_Pos (9UL) /*!< Position of PIN9 field. */
#define GPIO_DIR_PIN9_Msk (0x1UL << GPIO_DIR_PIN9_Pos) /*!< Bit mask of PIN9 field. */
#define GPIO_DIR_PIN9_Input (0x0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN9_Output (0x1UL) /*!< Pin set as output */

/* Bit 8 : Pin 8 */
#define GPIO_DIR_PIN8_Pos (8UL) /*!< Position of PIN8 field. */
#define GPIO_DIR_PIN8_Msk (0x1UL << GPIO_DIR_PIN8_Pos) /*!< Bit mask of PIN8 field. */
#define GPIO_DIR_PIN8_Input (0x0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN8_Output (0x1UL) /*!< Pin set as output */

/* Bit 7 : Pin 7 */
#define GPIO_DIR_PIN7_Pos (7UL) /*!< Position of PIN7 field. */
#define GPIO_DIR_PIN7_Msk (0x1UL << GPIO_DIR_PIN7_Pos) /*!< Bit mask of PIN7 field. */
#define GPIO_DIR_PIN7_Input (0x0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN7_Output (0x1UL) /*!< Pin set as output */

/* Bit 6 : Pin 6 */
#define GPIO_DIR_PIN6_Pos (6UL) /*!< Position of PIN6 field. */
#define GPIO_DIR_PIN6_Msk (0x1UL << GPIO_DIR_PIN6_Pos) /*!< Bit mask of PIN6 field. */
#define GPIO_DIR_PIN6_Input (0x0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN6_Output (0x1UL) /*!< Pin set as output */

/* Bit 5 : Pin 5 */
#define GPIO_DIR_PIN5_Pos (5UL) /*!< Position of PIN5 field. */
#define GPIO_DIR_PIN5_Msk (0x1UL << GPIO_DIR_PIN5_Pos) /*!< Bit mask of PIN5 field. */
#define GPIO_DIR_PIN5_Input (0x0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN5_Output (0x1UL) /*!< Pin set as output */

/* Bit 4 : Pin 4 */
#define GPIO_DIR_PIN4_Pos (4UL) /*!< Position of PIN4 field. */
#define GPIO_DIR_PIN4_Msk (0x1UL << GPIO_DIR_PIN4_Pos) /*!< Bit mask of PIN4 field. */
#define GPIO_DIR_PIN4_Input (0x0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN4_Output (0x1UL) /*!< Pin set as output */

/* Bit 3 : Pin 3 */
#define GPIO_DIR_PIN3_Pos (3UL) /*!< Position of PIN3 field. */
#define GPIO_DIR_PIN3_Msk (0x1UL << GPIO_DIR_PIN3_Pos) /*!< Bit mask of PIN3 field. */
#define GPIO_DIR_PIN3_Input (0x0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN3_Output (0x1UL) /*!< Pin set as output */

/* Bit 2 : Pin 2 */
#define GPIO_DIR_PIN2_Pos (2UL) /*!< Position of PIN2 field. */
#define GPIO_DIR_PIN2_Msk (0x1UL << GPIO_DIR_PIN2_Pos) /*!< Bit mask of PIN2 field. */
#define GPIO_DIR_PIN2_Input (0x0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN2_Output (0x1UL) /*!< Pin set as output */

/* Bit 1 : Pin 1 */
#define GPIO_DIR_PIN1_Pos (1UL) /*!< Position of PIN1 field. */
#define GPIO_DIR_PIN1_Msk (0x1UL << GPIO_DIR_PIN1_Pos) /*!< Bit mask of PIN1 field. */
#define GPIO_DIR_PIN1_Input (0x0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN1_Output (0x1UL) /*!< Pin set as output */

/* Bit 0 : Pin 0 */
#define GPIO_DIR_PIN0_Pos (0UL) /*!< Position of PIN0 field. */
#define GPIO_DIR_PIN0_Msk (0x1UL << GPIO_DIR_PIN0_Pos) /*!< Bit mask of PIN0 field. */
#define GPIO_DIR_PIN0_Input (0x0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN0_Output (0x1UL) /*!< Pin set as output */

/* Register: GPIO_DIRSET */
/* Description: DIR set register */

/* Bit 31 : Set as output pin 31 */
#define GPIO_DIRSET_PIN31_Pos (31UL) /*!< Position of PIN31 field. */
#define GPIO_DIRSET_PIN31_Msk (0x1UL << GPIO_DIRSET_PIN31_Pos) /*!< Bit mask of PIN31 field. */
#define GPIO_DIRSET_PIN31_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN31_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN31_Set (0x1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Bit 30 : Set as output pin 30 */
#define GPIO_DIRSET_PIN30_Pos (30UL) /*!< Position of PIN30 field. */
#define GPIO_DIRSET_PIN30_Msk (0x1UL << GPIO_DIRSET_PIN30_Pos) /*!< Bit mask of PIN30 field. */
#define GPIO_DIRSET_PIN30_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN30_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN30_Set (0x1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Bit 29 : Set as output pin 29 */
#define GPIO_DIRSET_PIN29_Pos (29UL) /*!< Position of PIN29 field. */
#define GPIO_DIRSET_PIN29_Msk (0x1UL << GPIO_DIRSET_PIN29_Pos) /*!< Bit mask of PIN29 field. */
#define GPIO_DIRSET_PIN29_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN29_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN29_Set (0x1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Bit 28 : Set as output pin 28 */
#define GPIO_DIRSET_PIN28_Pos (28UL) /*!< Position of PIN28 field. */
#define GPIO_DIRSET_PIN28_Msk (0x1UL << GPIO_DIRSET_PIN28_Pos) /*!< Bit mask of PIN28 field. */
#define GPIO_DIRSET_PIN28_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN28_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN28_Set (0x1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Bit 27 : Set as output pin 27 */
#define GPIO_DIRSET_PIN27_Pos (27UL) /*!< Position of PIN27 field. */
#define GPIO_DIRSET_PIN27_Msk (0x1UL << GPIO_DIRSET_PIN27_Pos) /*!< Bit mask of PIN27 field. */
#define GPIO_DIRSET_PIN27_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN27_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN27_Set (0x1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Bit 26 : Set as output pin 26 */
#define GPIO_DIRSET_PIN26_Pos (26UL) /*!< Position of PIN26 field. */
#define GPIO_DIRSET_PIN26_Msk (0x1UL << GPIO_DIRSET_PIN26_Pos) /*!< Bit mask of PIN26 field. */
#define GPIO_DIRSET_PIN26_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN26_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN26_Set (0x1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Bit 25 : Set as output pin 25 */
#define GPIO_DIRSET_PIN25_Pos (25UL) /*!< Position of PIN25 field. */
#define GPIO_DIRSET_PIN25_Msk (0x1UL << GPIO_DIRSET_PIN25_Pos) /*!< Bit mask of PIN25 field. */
#define GPIO_DIRSET_PIN25_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN25_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN25_Set (0x1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Bit 24 : Set as output pin 24 */
#define GPIO_DIRSET_PIN24_Pos (24UL) /*!< Position of PIN24 field. */
#define GPIO_DIRSET_PIN24_Msk (0x1UL << GPIO_DIRSET_PIN24_Pos) /*!< Bit mask of PIN24 field. */
#define GPIO_DIRSET_PIN24_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN24_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN24_Set (0x1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Bit 23 : Set as output pin 23 */
#define GPIO_DIRSET_PIN23_Pos (23UL) /*!< Position of PIN23 field. */
#define GPIO_DIRSET_PIN23_Msk (0x1UL << GPIO_DIRSET_PIN23_Pos) /*!< Bit mask of PIN23 field. */
#define GPIO_DIRSET_PIN23_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN23_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN23_Set (0x1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Bit 22 : Set as output pin 22 */
#define GPIO_DIRSET_PIN22_Pos (22UL) /*!< Position of PIN22 field. */
#define GPIO_DIRSET_PIN22_Msk (0x1UL << GPIO_DIRSET_PIN22_Pos) /*!< Bit mask of PIN22 field. */
#define GPIO_DIRSET_PIN22_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN22_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN22_Set (0x1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Bit 21 : Set as output pin 21 */
#define GPIO_DIRSET_PIN21_Pos (21UL) /*!< Position of PIN21 field. */
#define GPIO_DIRSET_PIN21_Msk (0x1UL << GPIO_DIRSET_PIN21_Pos) /*!< Bit mask of PIN21 field. */
#define GPIO_DIRSET_PIN21_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN21_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN21_Set (0x1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Bit 20 : Set as output pin 20 */
#define GPIO_DIRSET_PIN20_Pos (20UL) /*!< Position of PIN20 field. */
#define GPIO_DIRSET_PIN20_Msk (0x1UL << GPIO_DIRSET_PIN20_Pos) /*!< Bit mask of PIN20 field. */
#define GPIO_DIRSET_PIN20_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN20_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN20_Set (0x1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Bit 19 : Set as output pin 19 */
#define GPIO_DIRSET_PIN19_Pos (19UL) /*!< Position of PIN19 field. */
#define GPIO_DIRSET_PIN19_Msk (0x1UL << GPIO_DIRSET_PIN19_Pos) /*!< Bit mask of PIN19 field. */
#define GPIO_DIRSET_PIN19_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN19_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN19_Set (0x1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Bit 18 : Set as output pin 18 */
#define GPIO_DIRSET_PIN18_Pos (18UL) /*!< Position of PIN18 field. */
#define GPIO_DIRSET_PIN18_Msk (0x1UL << GPIO_DIRSET_PIN18_Pos) /*!< Bit mask of PIN18 field. */
#define GPIO_DIRSET_PIN18_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN18_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN18_Set (0x1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Bit 17 : Set as output pin 17 */
#define GPIO_DIRSET_PIN17_Pos (17UL) /*!< Position of PIN17 field. */
#define GPIO_DIRSET_PIN17_Msk (0x1UL << GPIO_DIRSET_PIN17_Pos) /*!< Bit mask of PIN17 field. */
#define GPIO_DIRSET_PIN17_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN17_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN17_Set (0x1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Bit 16 : Set as output pin 16 */
#define GPIO_DIRSET_PIN16_Pos (16UL) /*!< Position of PIN16 field. */
#define GPIO_DIRSET_PIN16_Msk (0x1UL << GPIO_DIRSET_PIN16_Pos) /*!< Bit mask of PIN16 field. */
#define GPIO_DIRSET_PIN16_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN16_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN16_Set (0x1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Bit 15 : Set as output pin 15 */
#define GPIO_DIRSET_PIN15_Pos (15UL) /*!< Position of PIN15 field. */
#define GPIO_DIRSET_PIN15_Msk (0x1UL << GPIO_DIRSET_PIN15_Pos) /*!< Bit mask of PIN15 field. */
#define GPIO_DIRSET_PIN15_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN15_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN15_Set (0x1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Bit 14 : Set as output pin 14 */
#define GPIO_DIRSET_PIN14_Pos (14UL) /*!< Position of PIN14 field. */
#define GPIO_DIRSET_PIN14_Msk (0x1UL << GPIO_DIRSET_PIN14_Pos) /*!< Bit mask of PIN14 field. */
#define GPIO_DIRSET_PIN14_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN14_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN14_Set (0x1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Bit 13 : Set as output pin 13 */
#define GPIO_DIRSET_PIN13_Pos (13UL) /*!< Position of PIN13 field. */
#define GPIO_DIRSET_PIN13_Msk (0x1UL << GPIO_DIRSET_PIN13_Pos) /*!< Bit mask of PIN13 field. */
#define GPIO_DIRSET_PIN13_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN13_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN13_Set (0x1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Bit 12 : Set as output pin 12 */
#define GPIO_DIRSET_PIN12_Pos (12UL) /*!< Position of PIN12 field. */
#define GPIO_DIRSET_PIN12_Msk (0x1UL << GPIO_DIRSET_PIN12_Pos) /*!< Bit mask of PIN12 field. */
#define GPIO_DIRSET_PIN12_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN12_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN12_Set (0x1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Bit 11 : Set as output pin 11 */
#define GPIO_DIRSET_PIN11_Pos (11UL) /*!< Position of PIN11 field. */
#define GPIO_DIRSET_PIN11_Msk (0x1UL << GPIO_DIRSET_PIN11_Pos) /*!< Bit mask of PIN11 field. */
#define GPIO_DIRSET_PIN11_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN11_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN11_Set (0x1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Bit 10 : Set as output pin 10 */
#define GPIO_DIRSET_PIN10_Pos (10UL) /*!< Position of PIN10 field. */
#define GPIO_DIRSET_PIN10_Msk (0x1UL << GPIO_DIRSET_PIN10_Pos) /*!< Bit mask of PIN10 field. */
#define GPIO_DIRSET_PIN10_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN10_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN10_Set (0x1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Bit 9 : Set as output pin 9 */
#define GPIO_DIRSET_PIN9_Pos (9UL) /*!< Position of PIN9 field. */
#define GPIO_DIRSET_PIN9_Msk (0x1UL << GPIO_DIRSET_PIN9_Pos) /*!< Bit mask of PIN9 field. */
#define GPIO_DIRSET_PIN9_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN9_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN9_Set (0x1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Bit 8 : Set as output pin 8 */
#define GPIO_DIRSET_PIN8_Pos (8UL) /*!< Position of PIN8 field. */
#define GPIO_DIRSET_PIN8_Msk (0x1UL << GPIO_DIRSET_PIN8_Pos) /*!< Bit mask of PIN8 field. */
#define GPIO_DIRSET_PIN8_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN8_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN8_Set (0x1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Bit 7 : Set as output pin 7 */
#define GPIO_DIRSET_PIN7_Pos (7UL) /*!< Position of PIN7 field. */
#define GPIO_DIRSET_PIN7_Msk (0x1UL << GPIO_DIRSET_PIN7_Pos) /*!< Bit mask of PIN7 field. */
#define GPIO_DIRSET_PIN7_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN7_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN7_Set (0x1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Bit 6 : Set as output pin 6 */
#define GPIO_DIRSET_PIN6_Pos (6UL) /*!< Position of PIN6 field. */
#define GPIO_DIRSET_PIN6_Msk (0x1UL << GPIO_DIRSET_PIN6_Pos) /*!< Bit mask of PIN6 field. */
#define GPIO_DIRSET_PIN6_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN6_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN6_Set (0x1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Bit 5 : Set as output pin 5 */
#define GPIO_DIRSET_PIN5_Pos (5UL) /*!< Position of PIN5 field. */
#define GPIO_DIRSET_PIN5_Msk (0x1UL << GPIO_DIRSET_PIN5_Pos) /*!< Bit mask of PIN5 field. */
#define GPIO_DIRSET_PIN5_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN5_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN5_Set (0x1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Bit 4 : Set as output pin 4 */
#define GPIO_DIRSET_PIN4_Pos (4UL) /*!< Position of PIN4 field. */
#define GPIO_DIRSET_PIN4_Msk (0x1UL << GPIO_DIRSET_PIN4_Pos) /*!< Bit mask of PIN4 field. */
#define GPIO_DIRSET_PIN4_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN4_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN4_Set (0x1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Bit 3 : Set as output pin 3 */
#define GPIO_DIRSET_PIN3_Pos (3UL) /*!< Position of PIN3 field. */
#define GPIO_DIRSET_PIN3_Msk (0x1UL << GPIO_DIRSET_PIN3_Pos) /*!< Bit mask of PIN3 field. */
#define GPIO_DIRSET_PIN3_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN3_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN3_Set (0x1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Bit 2 : Set as output pin 2 */
#define GPIO_DIRSET_PIN2_Pos (2UL) /*!< Position of PIN2 field. */
#define GPIO_DIRSET_PIN2_Msk (0x1UL << GPIO_DIRSET_PIN2_Pos) /*!< Bit mask of PIN2 field. */
#define GPIO_DIRSET_PIN2_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN2_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN2_Set (0x1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Bit 1 : Set as output pin 1 */
#define GPIO_DIRSET_PIN1_Pos (1UL) /*!< Position of PIN1 field. */
#define GPIO_DIRSET_PIN1_Msk (0x1UL << GPIO_DIRSET_PIN1_Pos) /*!< Bit mask of PIN1 field. */
#define GPIO_DIRSET_PIN1_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN1_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN1_Set (0x1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Bit 0 : Set as output pin 0 */
#define GPIO_DIRSET_PIN0_Pos (0UL) /*!< Position of PIN0 field. */
#define GPIO_DIRSET_PIN0_Msk (0x1UL << GPIO_DIRSET_PIN0_Pos) /*!< Bit mask of PIN0 field. */
#define GPIO_DIRSET_PIN0_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRSET_PIN0_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRSET_PIN0_Set (0x1UL) /*!< Write: writing a '1' sets pin to output; writing a '0' has no effect */

/* Register: GPIO_DIRCLR */
/* Description: DIR clear register */

/* Bit 31 : Set as input pin 31 */
#define GPIO_DIRCLR_PIN31_Pos (31UL) /*!< Position of PIN31 field. */
#define GPIO_DIRCLR_PIN31_Msk (0x1UL << GPIO_DIRCLR_PIN31_Pos) /*!< Bit mask of PIN31 field. */
#define GPIO_DIRCLR_PIN31_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN31_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN31_Clear (0x1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Bit 30 : Set as input pin 30 */
#define GPIO_DIRCLR_PIN30_Pos (30UL) /*!< Position of PIN30 field. */
#define GPIO_DIRCLR_PIN30_Msk (0x1UL << GPIO_DIRCLR_PIN30_Pos) /*!< Bit mask of PIN30 field. */
#define GPIO_DIRCLR_PIN30_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN30_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN30_Clear (0x1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Bit 29 : Set as input pin 29 */
#define GPIO_DIRCLR_PIN29_Pos (29UL) /*!< Position of PIN29 field. */
#define GPIO_DIRCLR_PIN29_Msk (0x1UL << GPIO_DIRCLR_PIN29_Pos) /*!< Bit mask of PIN29 field. */
#define GPIO_DIRCLR_PIN29_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN29_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN29_Clear (0x1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Bit 28 : Set as input pin 28 */
#define GPIO_DIRCLR_PIN28_Pos (28UL) /*!< Position of PIN28 field. */
#define GPIO_DIRCLR_PIN28_Msk (0x1UL << GPIO_DIRCLR_PIN28_Pos) /*!< Bit mask of PIN28 field. */
#define GPIO_DIRCLR_PIN28_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN28_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN28_Clear (0x1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Bit 27 : Set as input pin 27 */
#define GPIO_DIRCLR_PIN27_Pos (27UL) /*!< Position of PIN27 field. */
#define GPIO_DIRCLR_PIN27_Msk (0x1UL << GPIO_DIRCLR_PIN27_Pos) /*!< Bit mask of PIN27 field. */
#define GPIO_DIRCLR_PIN27_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN27_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN27_Clear (0x1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Bit 26 : Set as input pin 26 */
#define GPIO_DIRCLR_PIN26_Pos (26UL) /*!< Position of PIN26 field. */
#define GPIO_DIRCLR_PIN26_Msk (0x1UL << GPIO_DIRCLR_PIN26_Pos) /*!< Bit mask of PIN26 field. */
#define GPIO_DIRCLR_PIN26_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN26_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN26_Clear (0x1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Bit 25 : Set as input pin 25 */
#define GPIO_DIRCLR_PIN25_Pos (25UL) /*!< Position of PIN25 field. */
#define GPIO_DIRCLR_PIN25_Msk (0x1UL << GPIO_DIRCLR_PIN25_Pos) /*!< Bit mask of PIN25 field. */
#define GPIO_DIRCLR_PIN25_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN25_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN25_Clear (0x1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Bit 24 : Set as input pin 24 */
#define GPIO_DIRCLR_PIN24_Pos (24UL) /*!< Position of PIN24 field. */
#define GPIO_DIRCLR_PIN24_Msk (0x1UL << GPIO_DIRCLR_PIN24_Pos) /*!< Bit mask of PIN24 field. */
#define GPIO_DIRCLR_PIN24_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN24_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN24_Clear (0x1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Bit 23 : Set as input pin 23 */
#define GPIO_DIRCLR_PIN23_Pos (23UL) /*!< Position of PIN23 field. */
#define GPIO_DIRCLR_PIN23_Msk (0x1UL << GPIO_DIRCLR_PIN23_Pos) /*!< Bit mask of PIN23 field. */
#define GPIO_DIRCLR_PIN23_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN23_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN23_Clear (0x1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Bit 22 : Set as input pin 22 */
#define GPIO_DIRCLR_PIN22_Pos (22UL) /*!< Position of PIN22 field. */
#define GPIO_DIRCLR_PIN22_Msk (0x1UL << GPIO_DIRCLR_PIN22_Pos) /*!< Bit mask of PIN22 field. */
#define GPIO_DIRCLR_PIN22_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN22_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN22_Clear (0x1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Bit 21 : Set as input pin 21 */
#define GPIO_DIRCLR_PIN21_Pos (21UL) /*!< Position of PIN21 field. */
#define GPIO_DIRCLR_PIN21_Msk (0x1UL << GPIO_DIRCLR_PIN21_Pos) /*!< Bit mask of PIN21 field. */
#define GPIO_DIRCLR_PIN21_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN21_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN21_Clear (0x1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Bit 20 : Set as input pin 20 */
#define GPIO_DIRCLR_PIN20_Pos (20UL) /*!< Position of PIN20 field. */
#define GPIO_DIRCLR_PIN20_Msk (0x1UL << GPIO_DIRCLR_PIN20_Pos) /*!< Bit mask of PIN20 field. */
#define GPIO_DIRCLR_PIN20_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN20_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN20_Clear (0x1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Bit 19 : Set as input pin 19 */
#define GPIO_DIRCLR_PIN19_Pos (19UL) /*!< Position of PIN19 field. */
#define GPIO_DIRCLR_PIN19_Msk (0x1UL << GPIO_DIRCLR_PIN19_Pos) /*!< Bit mask of PIN19 field. */
#define GPIO_DIRCLR_PIN19_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN19_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN19_Clear (0x1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Bit 18 : Set as input pin 18 */
#define GPIO_DIRCLR_PIN18_Pos (18UL) /*!< Position of PIN18 field. */
#define GPIO_DIRCLR_PIN18_Msk (0x1UL << GPIO_DIRCLR_PIN18_Pos) /*!< Bit mask of PIN18 field. */
#define GPIO_DIRCLR_PIN18_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN18_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN18_Clear (0x1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Bit 17 : Set as input pin 17 */
#define GPIO_DIRCLR_PIN17_Pos (17UL) /*!< Position of PIN17 field. */
#define GPIO_DIRCLR_PIN17_Msk (0x1UL << GPIO_DIRCLR_PIN17_Pos) /*!< Bit mask of PIN17 field. */
#define GPIO_DIRCLR_PIN17_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN17_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN17_Clear (0x1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Bit 16 : Set as input pin 16 */
#define GPIO_DIRCLR_PIN16_Pos (16UL) /*!< Position of PIN16 field. */
#define GPIO_DIRCLR_PIN16_Msk (0x1UL << GPIO_DIRCLR_PIN16_Pos) /*!< Bit mask of PIN16 field. */
#define GPIO_DIRCLR_PIN16_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN16_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN16_Clear (0x1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Bit 15 : Set as input pin 15 */
#define GPIO_DIRCLR_PIN15_Pos (15UL) /*!< Position of PIN15 field. */
#define GPIO_DIRCLR_PIN15_Msk (0x1UL << GPIO_DIRCLR_PIN15_Pos) /*!< Bit mask of PIN15 field. */
#define GPIO_DIRCLR_PIN15_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN15_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN15_Clear (0x1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Bit 14 : Set as input pin 14 */
#define GPIO_DIRCLR_PIN14_Pos (14UL) /*!< Position of PIN14 field. */
#define GPIO_DIRCLR_PIN14_Msk (0x1UL << GPIO_DIRCLR_PIN14_Pos) /*!< Bit mask of PIN14 field. */
#define GPIO_DIRCLR_PIN14_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN14_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN14_Clear (0x1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Bit 13 : Set as input pin 13 */
#define GPIO_DIRCLR_PIN13_Pos (13UL) /*!< Position of PIN13 field. */
#define GPIO_DIRCLR_PIN13_Msk (0x1UL << GPIO_DIRCLR_PIN13_Pos) /*!< Bit mask of PIN13 field. */
#define GPIO_DIRCLR_PIN13_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN13_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN13_Clear (0x1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Bit 12 : Set as input pin 12 */
#define GPIO_DIRCLR_PIN12_Pos (12UL) /*!< Position of PIN12 field. */
#define GPIO_DIRCLR_PIN12_Msk (0x1UL << GPIO_DIRCLR_PIN12_Pos) /*!< Bit mask of PIN12 field. */
#define GPIO_DIRCLR_PIN12_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN12_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN12_Clear (0x1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Bit 11 : Set as input pin 11 */
#define GPIO_DIRCLR_PIN11_Pos (11UL) /*!< Position of PIN11 field. */
#define GPIO_DIRCLR_PIN11_Msk (0x1UL << GPIO_DIRCLR_PIN11_Pos) /*!< Bit mask of PIN11 field. */
#define GPIO_DIRCLR_PIN11_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN11_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN11_Clear (0x1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Bit 10 : Set as input pin 10 */
#define GPIO_DIRCLR_PIN10_Pos (10UL) /*!< Position of PIN10 field. */
#define GPIO_DIRCLR_PIN10_Msk (0x1UL << GPIO_DIRCLR_PIN10_Pos) /*!< Bit mask of PIN10 field. */
#define GPIO_DIRCLR_PIN10_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN10_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN10_Clear (0x1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Bit 9 : Set as input pin 9 */
#define GPIO_DIRCLR_PIN9_Pos (9UL) /*!< Position of PIN9 field. */
#define GPIO_DIRCLR_PIN9_Msk (0x1UL << GPIO_DIRCLR_PIN9_Pos) /*!< Bit mask of PIN9 field. */
#define GPIO_DIRCLR_PIN9_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN9_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN9_Clear (0x1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Bit 8 : Set as input pin 8 */
#define GPIO_DIRCLR_PIN8_Pos (8UL) /*!< Position of PIN8 field. */
#define GPIO_DIRCLR_PIN8_Msk (0x1UL << GPIO_DIRCLR_PIN8_Pos) /*!< Bit mask of PIN8 field. */
#define GPIO_DIRCLR_PIN8_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN8_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN8_Clear (0x1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Bit 7 : Set as input pin 7 */
#define GPIO_DIRCLR_PIN7_Pos (7UL) /*!< Position of PIN7 field. */
#define GPIO_DIRCLR_PIN7_Msk (0x1UL << GPIO_DIRCLR_PIN7_Pos) /*!< Bit mask of PIN7 field. */
#define GPIO_DIRCLR_PIN7_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN7_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN7_Clear (0x1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Bit 6 : Set as input pin 6 */
#define GPIO_DIRCLR_PIN6_Pos (6UL) /*!< Position of PIN6 field. */
#define GPIO_DIRCLR_PIN6_Msk (0x1UL << GPIO_DIRCLR_PIN6_Pos) /*!< Bit mask of PIN6 field. */
#define GPIO_DIRCLR_PIN6_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN6_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN6_Clear (0x1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Bit 5 : Set as input pin 5 */
#define GPIO_DIRCLR_PIN5_Pos (5UL) /*!< Position of PIN5 field. */
#define GPIO_DIRCLR_PIN5_Msk (0x1UL << GPIO_DIRCLR_PIN5_Pos) /*!< Bit mask of PIN5 field. */
#define GPIO_DIRCLR_PIN5_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN5_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN5_Clear (0x1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Bit 4 : Set as input pin 4 */
#define GPIO_DIRCLR_PIN4_Pos (4UL) /*!< Position of PIN4 field. */
#define GPIO_DIRCLR_PIN4_Msk (0x1UL << GPIO_DIRCLR_PIN4_Pos) /*!< Bit mask of PIN4 field. */
#define GPIO_DIRCLR_PIN4_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN4_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN4_Clear (0x1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Bit 3 : Set as input pin 3 */
#define GPIO_DIRCLR_PIN3_Pos (3UL) /*!< Position of PIN3 field. */
#define GPIO_DIRCLR_PIN3_Msk (0x1UL << GPIO_DIRCLR_PIN3_Pos) /*!< Bit mask of PIN3 field. */
#define GPIO_DIRCLR_PIN3_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN3_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN3_Clear (0x1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Bit 2 : Set as input pin 2 */
#define GPIO_DIRCLR_PIN2_Pos (2UL) /*!< Position of PIN2 field. */
#define GPIO_DIRCLR_PIN2_Msk (0x1UL << GPIO_DIRCLR_PIN2_Pos) /*!< Bit mask of PIN2 field. */
#define GPIO_DIRCLR_PIN2_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN2_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN2_Clear (0x1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Bit 1 : Set as input pin 1 */
#define GPIO_DIRCLR_PIN1_Pos (1UL) /*!< Position of PIN1 field. */
#define GPIO_DIRCLR_PIN1_Msk (0x1UL << GPIO_DIRCLR_PIN1_Pos) /*!< Bit mask of PIN1 field. */
#define GPIO_DIRCLR_PIN1_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN1_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN1_Clear (0x1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Bit 0 : Set as input pin 0 */
#define GPIO_DIRCLR_PIN0_Pos (0UL) /*!< Position of PIN0 field. */
#define GPIO_DIRCLR_PIN0_Msk (0x1UL << GPIO_DIRCLR_PIN0_Pos) /*!< Bit mask of PIN0 field. */
#define GPIO_DIRCLR_PIN0_Input (0x0UL) /*!< Read: pin set as input */
#define GPIO_DIRCLR_PIN0_Output (0x1UL) /*!< Read: pin set as output */
#define GPIO_DIRCLR_PIN0_Clear (0x1UL) /*!< Write: writing a '1' sets pin to input; writing a '0' has no effect */

/* Register: GPIO_LATCH */
/* Description: Latch register indicating what GPIO pins that have met the criteria set in the PIN_CNF[n].SENSE registers */

/* Bit 31 : Status on whether PIN31 has met criteria set in PIN_CNF31.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN31_Pos (31UL) /*!< Position of PIN31 field. */
#define GPIO_LATCH_PIN31_Msk (0x1UL << GPIO_LATCH_PIN31_Pos) /*!< Bit mask of PIN31 field. */
#define GPIO_LATCH_PIN31_NotLatched (0x0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN31_Latched (0x1UL) /*!< Criteria has been met */

/* Bit 30 : Status on whether PIN30 has met criteria set in PIN_CNF30.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN30_Pos (30UL) /*!< Position of PIN30 field. */
#define GPIO_LATCH_PIN30_Msk (0x1UL << GPIO_LATCH_PIN30_Pos) /*!< Bit mask of PIN30 field. */
#define GPIO_LATCH_PIN30_NotLatched (0x0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN30_Latched (0x1UL) /*!< Criteria has been met */

/* Bit 29 : Status on whether PIN29 has met criteria set in PIN_CNF29.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN29_Pos (29UL) /*!< Position of PIN29 field. */
#define GPIO_LATCH_PIN29_Msk (0x1UL << GPIO_LATCH_PIN29_Pos) /*!< Bit mask of PIN29 field. */
#define GPIO_LATCH_PIN29_NotLatched (0x0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN29_Latched (0x1UL) /*!< Criteria has been met */

/* Bit 28 : Status on whether PIN28 has met criteria set in PIN_CNF28.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN28_Pos (28UL) /*!< Position of PIN28 field. */
#define GPIO_LATCH_PIN28_Msk (0x1UL << GPIO_LATCH_PIN28_Pos) /*!< Bit mask of PIN28 field. */
#define GPIO_LATCH_PIN28_NotLatched (0x0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN28_Latched (0x1UL) /*!< Criteria has been met */

/* Bit 27 : Status on whether PIN27 has met criteria set in PIN_CNF27.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN27_Pos (27UL) /*!< Position of PIN27 field. */
#define GPIO_LATCH_PIN27_Msk (0x1UL << GPIO_LATCH_PIN27_Pos) /*!< Bit mask of PIN27 field. */
#define GPIO_LATCH_PIN27_NotLatched (0x0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN27_Latched (0x1UL) /*!< Criteria has been met */

/* Bit 26 : Status on whether PIN26 has met criteria set in PIN_CNF26.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN26_Pos (26UL) /*!< Position of PIN26 field. */
#define GPIO_LATCH_PIN26_Msk (0x1UL << GPIO_LATCH_PIN26_Pos) /*!< Bit mask of PIN26 field. */
#define GPIO_LATCH_PIN26_NotLatched (0x0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN26_Latched (0x1UL) /*!< Criteria has been met */

/* Bit 25 : Status on whether PIN25 has met criteria set in PIN_CNF25.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN25_Pos (25UL) /*!< Position of PIN25 field. */
#define GPIO_LATCH_PIN25_Msk (0x1UL << GPIO_LATCH_PIN25_Pos) /*!< Bit mask of PIN25 field. */
#define GPIO_LATCH_PIN25_NotLatched (0x0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN25_Latched (0x1UL) /*!< Criteria has been met */

/* Bit 24 : Status on whether PIN24 has met criteria set in PIN_CNF24.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN24_Pos (24UL) /*!< Position of PIN24 field. */
#define GPIO_LATCH_PIN24_Msk (0x1UL << GPIO_LATCH_PIN24_Pos) /*!< Bit mask of PIN24 field. */
#define GPIO_LATCH_PIN24_NotLatched (0x0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN24_Latched (0x1UL) /*!< Criteria has been met */

/* Bit 23 : Status on whether PIN23 has met criteria set in PIN_CNF23.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN23_Pos (23UL) /*!< Position of PIN23 field. */
#define GPIO_LATCH_PIN23_Msk (0x1UL << GPIO_LATCH_PIN23_Pos) /*!< Bit mask of PIN23 field. */
#define GPIO_LATCH_PIN23_NotLatched (0x0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN23_Latched (0x1UL) /*!< Criteria has been met */

/* Bit 22 : Status on whether PIN22 has met criteria set in PIN_CNF22.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN22_Pos (22UL) /*!< Position of PIN22 field. */
#define GPIO_LATCH_PIN22_Msk (0x1UL << GPIO_LATCH_PIN22_Pos) /*!< Bit mask of PIN22 field. */
#define GPIO_LATCH_PIN22_NotLatched (0x0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN22_Latched (0x1UL) /*!< Criteria has been met */

/* Bit 21 : Status on whether PIN21 has met criteria set in PIN_CNF21.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN21_Pos (21UL) /*!< Position of PIN21 field. */
#define GPIO_LATCH_PIN21_Msk (0x1UL << GPIO_LATCH_PIN21_Pos) /*!< Bit mask of PIN21 field. */
#define GPIO_LATCH_PIN21_NotLatched (0x0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN21_Latched (0x1UL) /*!< Criteria has been met */

/* Bit 20 : Status on whether PIN20 has met criteria set in PIN_CNF20.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN20_Pos (20UL) /*!< Position of PIN20 field. */
#define GPIO_LATCH_PIN20_Msk (0x1UL << GPIO_LATCH_PIN20_Pos) /*!< Bit mask of PIN20 field. */
#define GPIO_LATCH_PIN20_NotLatched (0x0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN20_Latched (0x1UL) /*!< Criteria has been met */

/* Bit 19 : Status on whether PIN19 has met criteria set in PIN_CNF19.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN19_Pos (19UL) /*!< Position of PIN19 field. */
#define GPIO_LATCH_PIN19_Msk (0x1UL << GPIO_LATCH_PIN19_Pos) /*!< Bit mask of PIN19 field. */
#define GPIO_LATCH_PIN19_NotLatched (0x0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN19_Latched (0x1UL) /*!< Criteria has been met */

/* Bit 18 : Status on whether PIN18 has met criteria set in PIN_CNF18.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN18_Pos (18UL) /*!< Position of PIN18 field. */
#define GPIO_LATCH_PIN18_Msk (0x1UL << GPIO_LATCH_PIN18_Pos) /*!< Bit mask of PIN18 field. */
#define GPIO_LATCH_PIN18_NotLatched (0x0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN18_Latched (0x1UL) /*!< Criteria has been met */

/* Bit 17 : Status on whether PIN17 has met criteria set in PIN_CNF17.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN17_Pos (17UL) /*!< Position of PIN17 field. */
#define GPIO_LATCH_PIN17_Msk (0x1UL << GPIO_LATCH_PIN17_Pos) /*!< Bit mask of PIN17 field. */
#define GPIO_LATCH_PIN17_NotLatched (0x0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN17_Latched (0x1UL) /*!< Criteria has been met */

/* Bit 16 : Status on whether PIN16 has met criteria set in PIN_CNF16.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN16_Pos (16UL) /*!< Position of PIN16 field. */
#define GPIO_LATCH_PIN16_Msk (0x1UL << GPIO_LATCH_PIN16_Pos) /*!< Bit mask of PIN16 field. */
#define GPIO_LATCH_PIN16_NotLatched (0x0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN16_Latched (0x1UL) /*!< Criteria has been met */

/* Bit 15 : Status on whether PIN15 has met criteria set in PIN_CNF15.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN15_Pos (15UL) /*!< Position of PIN15 field. */
#define GPIO_LATCH_PIN15_Msk (0x1UL << GPIO_LATCH_PIN15_Pos) /*!< Bit mask of PIN15 field. */
#define GPIO_LATCH_PIN15_NotLatched (0x0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN15_Latched (0x1UL) /*!< Criteria has been met */

/* Bit 14 : Status on whether PIN14 has met criteria set in PIN_CNF14.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN14_Pos (14UL) /*!< Position of PIN14 field. */
#define GPIO_LATCH_PIN14_Msk (0x1UL << GPIO_LATCH_PIN14_Pos) /*!< Bit mask of PIN14 field. */
#define GPIO_LATCH_PIN14_NotLatched (0x0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN14_Latched (0x1UL) /*!< Criteria has been met */

/* Bit 13 : Status on whether PIN13 has met criteria set in PIN_CNF13.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN13_Pos (13UL) /*!< Position of PIN13 field. */
#define GPIO_LATCH_PIN13_Msk (0x1UL << GPIO_LATCH_PIN13_Pos) /*!< Bit mask of PIN13 field. */
#define GPIO_LATCH_PIN13_NotLatched (0x0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN13_Latched (0x1UL) /*!< Criteria has been met */

/* Bit 12 : Status on whether PIN12 has met criteria set in PIN_CNF12.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN12_Pos (12UL) /*!< Position of PIN12 field. */
#define GPIO_LATCH_PIN12_Msk (0x1UL << GPIO_LATCH_PIN12_Pos) /*!< Bit mask of PIN12 field. */
#define GPIO_LATCH_PIN12_NotLatched (0x0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN12_Latched (0x1UL) /*!< Criteria has been met */

/* Bit 11 : Status on whether PIN11 has met criteria set in PIN_CNF11.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN11_Pos (11UL) /*!< Position of PIN11 field. */
#define GPIO_LATCH_PIN11_Msk (0x1UL << GPIO_LATCH_PIN11_Pos) /*!< Bit mask of PIN11 field. */
#define GPIO_LATCH_PIN11_NotLatched (0x0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN11_Latched (0x1UL) /*!< Criteria has been met */

/* Bit 10 : Status on whether PIN10 has met criteria set in PIN_CNF10.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN10_Pos (10UL) /*!< Position of PIN10 field. */
#define GPIO_LATCH_PIN10_Msk (0x1UL << GPIO_LATCH_PIN10_Pos) /*!< Bit mask of PIN10 field. */
#define GPIO_LATCH_PIN10_NotLatched (0x0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN10_Latched (0x1UL) /*!< Criteria has been met */

/* Bit 9 : Status on whether PIN9 has met criteria set in PIN_CNF9.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN9_Pos (9UL) /*!< Position of PIN9 field. */
#define GPIO_LATCH_PIN9_Msk (0x1UL << GPIO_LATCH_PIN9_Pos) /*!< Bit mask of PIN9 field. */
#define GPIO_LATCH_PIN9_NotLatched (0x0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN9_Latched (0x1UL) /*!< Criteria has been met */

/* Bit 8 : Status on whether PIN8 has met criteria set in PIN_CNF8.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN8_Pos (8UL) /*!< Position of PIN8 field. */
#define GPIO_LATCH_PIN8_Msk (0x1UL << GPIO_LATCH_PIN8_Pos) /*!< Bit mask of PIN8 field. */
#define GPIO_LATCH_PIN8_NotLatched (0x0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN8_Latched (0x1UL) /*!< Criteria has been met */

/* Bit 7 : Status on whether PIN7 has met criteria set in PIN_CNF7.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN7_Pos (7UL) /*!< Position of PIN7 field. */
#define GPIO_LATCH_PIN7_Msk (0x1UL << GPIO_LATCH_PIN7_Pos) /*!< Bit mask of PIN7 field. */
#define GPIO_LATCH_PIN7_NotLatched (0x0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN7_Latched (0x1UL) /*!< Criteria has been met */

/* Bit 6 : Status on whether PIN6 has met criteria set in PIN_CNF6.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN6_Pos (6UL) /*!< Position of PIN6 field. */
#define GPIO_LATCH_PIN6_Msk (0x1UL << GPIO_LATCH_PIN6_Pos) /*!< Bit mask of PIN6 field. */
#define GPIO_LATCH_PIN6_NotLatched (0x0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN6_Latched (0x1UL) /*!< Criteria has been met */

/* Bit 5 : Status on whether PIN5 has met criteria set in PIN_CNF5.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN5_Pos (5UL) /*!< Position of PIN5 field. */
#define GPIO_LATCH_PIN5_Msk (0x1UL << GPIO_LATCH_PIN5_Pos) /*!< Bit mask of PIN5 field. */
#define GPIO_LATCH_PIN5_NotLatched (0x0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN5_Latched (0x1UL) /*!< Criteria has been met */

/* Bit 4 : Status on whether PIN4 has met criteria set in PIN_CNF4.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN4_Pos (4UL) /*!< Position of PIN4 field. */
#define GPIO_LATCH_PIN4_Msk (0x1UL << GPIO_LATCH_PIN4_Pos) /*!< Bit mask of PIN4 field. */
#define GPIO_LATCH_PIN4_NotLatched (0x0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN4_Latched (0x1UL) /*!< Criteria has been met */

/* Bit 3 : Status on whether PIN3 has met criteria set in PIN_CNF3.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN3_Pos (3UL) /*!< Position of PIN3 field. */
#define GPIO_LATCH_PIN3_Msk (0x1UL << GPIO_LATCH_PIN3_Pos) /*!< Bit mask of PIN3 field. */
#define GPIO_LATCH_PIN3_NotLatched (0x0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN3_Latched (0x1UL) /*!< Criteria has been met */

/* Bit 2 : Status on whether PIN2 has met criteria set in PIN_CNF2.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN2_Pos (2UL) /*!< Position of PIN2 field. */
#define GPIO_LATCH_PIN2_Msk (0x1UL << GPIO_LATCH_PIN2_Pos) /*!< Bit mask of PIN2 field. */
#define GPIO_LATCH_PIN2_NotLatched (0x0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN2_Latched (0x1UL) /*!< Criteria has been met */

/* Bit 1 : Status on whether PIN1 has met criteria set in PIN_CNF1.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN1_Pos (1UL) /*!< Position of PIN1 field. */
#define GPIO_LATCH_PIN1_Msk (0x1UL << GPIO_LATCH_PIN1_Pos) /*!< Bit mask of PIN1 field. */
#define GPIO_LATCH_PIN1_NotLatched (0x0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN1_Latched (0x1UL) /*!< Criteria has been met */

/* Bit 0 : Status on whether PIN0 has met criteria set in PIN_CNF0.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN0_Pos (0UL) /*!< Position of PIN0 field. */
#define GPIO_LATCH_PIN0_Msk (0x1UL << GPIO_LATCH_PIN0_Pos) /*!< Bit mask of PIN0 field. */
#define GPIO_LATCH_PIN0_NotLatched (0x0UL) /*!< Criteria has not been met */
#define GPIO_LATCH_PIN0_Latched (0x1UL) /*!< Criteria has been met */

/* Register: GPIO_DETECTMODE */
/* Description: Select between default DETECT signal behavior and LDETECT mode (For non-secure pin only) */

/* Bit 0 : Select between default DETECT signal behavior and LDETECT mode */
#define GPIO_DETECTMODE_DETECTMODE_Pos (0UL) /*!< Position of DETECTMODE field. */
#define GPIO_DETECTMODE_DETECTMODE_Msk (0x1UL << GPIO_DETECTMODE_DETECTMODE_Pos) /*!< Bit mask of DETECTMODE field. */
#define GPIO_DETECTMODE_DETECTMODE_Default (0x0UL) /*!< DETECT directly connected to PIN DETECT signals */
#define GPIO_DETECTMODE_DETECTMODE_LDETECT (0x1UL) /*!< Use the latched LDETECT behavior */

/* Register: GPIO_DETECTMODE_SEC */
/* Description: Select between default DETECT signal behavior and LDETECT mode (For secure pin only) */

/* Bit 0 : Select between default DETECT signal behavior and LDETECT mode */
#define GPIO_DETECTMODE_SEC_DETECTMODE_Pos (0UL) /*!< Position of DETECTMODE field. */
#define GPIO_DETECTMODE_SEC_DETECTMODE_Msk (0x1UL << GPIO_DETECTMODE_SEC_DETECTMODE_Pos) /*!< Bit mask of DETECTMODE field. */
#define GPIO_DETECTMODE_SEC_DETECTMODE_Default (0x0UL) /*!< DETECT directly connected to PIN DETECT signals */
#define GPIO_DETECTMODE_SEC_DETECTMODE_LDETECT (0x1UL) /*!< Use the latched LDETECT behavior */

/* Register: GPIO_PIN_OUT */
/* Description: Description cluster: Pin n direct access output register */

/* Bit 0 : Direct access */
#define GPIO_PIN_OUT_OUT_Pos (0UL) /*!< Position of OUT field. */
#define GPIO_PIN_OUT_OUT_Msk (0x1UL << GPIO_PIN_OUT_OUT_Pos) /*!< Bit mask of OUT field. */

/* Register: GPIO_PIN_IN */
/* Description: Description cluster: Pin n direct access input register */

/* Bit 0 : Direct access */
#define GPIO_PIN_IN_IN_Pos (0UL) /*!< Position of IN field. */
#define GPIO_PIN_IN_IN_Msk (0x1UL << GPIO_PIN_IN_IN_Pos) /*!< Bit mask of IN field. */

/* Register: GPIO_PIN_CNF */
/* Description: Description collection: Configuration of GPIO pins */

/* Bits 30..28 : Select which MCU/Subsystem controls this pin Note: this field is only accessible from secure code. */
#define GPIO_PIN_CNF_MCUSEL_Pos (28UL) /*!< Position of MCUSEL field. */
#define GPIO_PIN_CNF_MCUSEL_Msk (0x7UL << GPIO_PIN_CNF_MCUSEL_Pos) /*!< Bit mask of MCUSEL field. */
#define GPIO_PIN_CNF_MCUSEL_AppMCU (0x0UL) /*!< Application MCU */
#define GPIO_PIN_CNF_MCUSEL_NetworkMCU (0x1UL) /*!< Network MCU */
#define GPIO_PIN_CNF_MCUSEL_Peripheral (0x3UL) /*!< Peripheral with dedicated pins */
#define GPIO_PIN_CNF_MCUSEL_TND (0x7UL) /*!< Trace and Debug Subsystem */

/* Bit 24 : Override of analog mux enable signals for pads with analog functionality */
#define GPIO_PIN_CNF_ANAEN_Pos (24UL) /*!< Position of ANAEN field. */
#define GPIO_PIN_CNF_ANAEN_Msk (0x1UL << GPIO_PIN_CNF_ANAEN_Pos) /*!< Bit mask of ANAEN field. */
#define GPIO_PIN_CNF_ANAEN_Disabled (0x0UL) /*!< Override of analog mux is disabled */
#define GPIO_PIN_CNF_ANAEN_AE0 (0x1UL) /*!< Enable analog signal 0 (analog test bus) */

/* Bits 17..16 : Pin sensing mechanism */
#define GPIO_PIN_CNF_SENSE_Pos (16UL) /*!< Position of SENSE field. */
#define GPIO_PIN_CNF_SENSE_Msk (0x3UL << GPIO_PIN_CNF_SENSE_Pos) /*!< Bit mask of SENSE field. */
#define GPIO_PIN_CNF_SENSE_Disabled (0x0UL) /*!< Disabled */
#define GPIO_PIN_CNF_SENSE_High (0x2UL) /*!< Sense for high level */
#define GPIO_PIN_CNF_SENSE_Low (0x3UL) /*!< Sense for low level */

/* Bits 11..8 : Drive configuration */
#define GPIO_PIN_CNF_DRIVE_Pos (8UL) /*!< Position of DRIVE field. */
#define GPIO_PIN_CNF_DRIVE_Msk (0xFUL << GPIO_PIN_CNF_DRIVE_Pos) /*!< Bit mask of DRIVE field. */
#define GPIO_PIN_CNF_DRIVE_S0S1 (0x0UL) /*!< Standard '0', standard '1' */
#define GPIO_PIN_CNF_DRIVE_H0S1 (0x1UL) /*!< High drive '0', standard '1' */
#define GPIO_PIN_CNF_DRIVE_S0H1 (0x2UL) /*!< Standard '0', high drive '1' */
#define GPIO_PIN_CNF_DRIVE_H0H1 (0x3UL) /*!< High drive '0', high 'drive '1'' */
#define GPIO_PIN_CNF_DRIVE_D0S1 (0x4UL) /*!< Disconnect '0', standard '1' (normally used for wired-or connections) */
#define GPIO_PIN_CNF_DRIVE_D0H1 (0x5UL) /*!< Disconnect '0', high drive '1' (normally used for wired-or connections) */
#define GPIO_PIN_CNF_DRIVE_S0D1 (0x6UL) /*!< Standard '0', disconnect '1' (normally used for wired-and connections) */
#define GPIO_PIN_CNF_DRIVE_H0D1 (0x7UL) /*!< High drive '0', disconnect '1' (normally used for wired-and connections) */
#define GPIO_PIN_CNF_DRIVE_E0S1 (0x9UL) /*!< Extra high drive '0', standard '1' */
#define GPIO_PIN_CNF_DRIVE_S0E1 (0xAUL) /*!< Standard '0', extra high drive '1' */
#define GPIO_PIN_CNF_DRIVE_E0E1 (0xBUL) /*!< Extra high drive '0', extra high drive '1' */
#define GPIO_PIN_CNF_DRIVE_D0E1 (0xDUL) /*!< Disconnect '0', extra high drive '1' (normally used for wired-or connections) */
#define GPIO_PIN_CNF_DRIVE_E0D1 (0xFUL) /*!< Extra high drive '0', disconnect '1' (normally used for wired-and connections) */

/* Bits 3..2 : Pull configuration */
#define GPIO_PIN_CNF_PULL_Pos (2UL) /*!< Position of PULL field. */
#define GPIO_PIN_CNF_PULL_Msk (0x3UL << GPIO_PIN_CNF_PULL_Pos) /*!< Bit mask of PULL field. */
#define GPIO_PIN_CNF_PULL_Disabled (0x0UL) /*!< No pull */
#define GPIO_PIN_CNF_PULL_Pulldown (0x1UL) /*!< Pull down on pin */
#define GPIO_PIN_CNF_PULL_Pullup (0x3UL) /*!< Pull up on pin */

/* Bit 1 : Connect or disconnect input buffer */
#define GPIO_PIN_CNF_INPUT_Pos (1UL) /*!< Position of INPUT field. */
#define GPIO_PIN_CNF_INPUT_Msk (0x1UL << GPIO_PIN_CNF_INPUT_Pos) /*!< Bit mask of INPUT field. */
#define GPIO_PIN_CNF_INPUT_Connect (0x0UL) /*!< Connect input buffer */
#define GPIO_PIN_CNF_INPUT_Disconnect (0x1UL) /*!< Disconnect input buffer */

/* Bit 0 : Pin direction. Same physical register as DIR register */
#define GPIO_PIN_CNF_DIR_Pos (0UL) /*!< Position of DIR field. */
#define GPIO_PIN_CNF_DIR_Msk (0x1UL << GPIO_PIN_CNF_DIR_Pos) /*!< Bit mask of DIR field. */
#define GPIO_PIN_CNF_DIR_Input (0x0UL) /*!< Configure pin as an input pin */
#define GPIO_PIN_CNF_DIR_Output (0x1UL) /*!< Configure pin as an output pin */


/* Peripheral: RADIO */
/* Description: 2.4 GHz radio */

/* Register: RADIO_TASKS_TXEN */
/* Description: Enable RADIO in TX mode */

/* Bit 0 : Enable RADIO in TX mode */
#define RADIO_TASKS_TXEN_TASKS_TXEN_Pos (0UL) /*!< Position of TASKS_TXEN field. */
#define RADIO_TASKS_TXEN_TASKS_TXEN_Msk (0x1UL << RADIO_TASKS_TXEN_TASKS_TXEN_Pos) /*!< Bit mask of TASKS_TXEN field. */
#define RADIO_TASKS_TXEN_TASKS_TXEN_Trigger (0x1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_RXEN */
/* Description: Enable RADIO in RX mode */

/* Bit 0 : Enable RADIO in RX mode */
#define RADIO_TASKS_RXEN_TASKS_RXEN_Pos (0UL) /*!< Position of TASKS_RXEN field. */
#define RADIO_TASKS_RXEN_TASKS_RXEN_Msk (0x1UL << RADIO_TASKS_RXEN_TASKS_RXEN_Pos) /*!< Bit mask of TASKS_RXEN field. */
#define RADIO_TASKS_RXEN_TASKS_RXEN_Trigger (0x1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_START */
/* Description: Start RADIO */

/* Bit 0 : Start RADIO */
#define RADIO_TASKS_START_TASKS_START_Pos (0UL) /*!< Position of TASKS_START field. */
#define RADIO_TASKS_START_TASKS_START_Msk (0x1UL << RADIO_TASKS_START_TASKS_START_Pos) /*!< Bit mask of TASKS_START field. */
#define RADIO_TASKS_START_TASKS_START_Trigger (0x1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_STOP */
/* Description: Stop RADIO */

/* Bit 0 : Stop RADIO */
#define RADIO_TASKS_STOP_TASKS_STOP_Pos (0UL) /*!< Position of TASKS_STOP field. */
#define RADIO_TASKS_STOP_TASKS_STOP_Msk (0x1UL << RADIO_TASKS_STOP_TASKS_STOP_Pos) /*!< Bit mask of TASKS_STOP field. */
#define RADIO_TASKS_STOP_TASKS_STOP_Trigger (0x1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_DISABLE */
/* Description: Disable RADIO */

/* Bit 0 : Disable RADIO */
#define RADIO_TASKS_DISABLE_TASKS_DISABLE_Pos (0UL) /*!< Position of TASKS_DISABLE field. */
#define RADIO_TASKS_DISABLE_TASKS_DISABLE_Msk (0x1UL << RADIO_TASKS_DISABLE_TASKS_DISABLE_Pos) /*!< Bit mask of TASKS_DISABLE field. */
#define RADIO_TASKS_DISABLE_TASKS_DISABLE_Trigger (0x1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_RSSISTART */
/* Description: Start the RSSI and take one single sample of the receive signal strength */

/* Bit 0 : Start the RSSI and take one single sample of the receive signal strength */
#define RADIO_TASKS_RSSISTART_TASKS_RSSISTART_Pos (0UL) /*!< Position of TASKS_RSSISTART field. */
#define RADIO_TASKS_RSSISTART_TASKS_RSSISTART_Msk (0x1UL << RADIO_TASKS_RSSISTART_TASKS_RSSISTART_Pos) /*!< Bit mask of TASKS_RSSISTART field. */
#define RADIO_TASKS_RSSISTART_TASKS_RSSISTART_Trigger (0x1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_BCSTART */
/* Description: Start the bit counter */

/* Bit 0 : Start the bit counter */
#define RADIO_TASKS_BCSTART_TASKS_BCSTART_Pos (0UL) /*!< Position of TASKS_BCSTART field. */
#define RADIO_TASKS_BCSTART_TASKS_BCSTART_Msk (0x1UL << RADIO_TASKS_BCSTART_TASKS_BCSTART_Pos) /*!< Bit mask of TASKS_BCSTART field. */
#define RADIO_TASKS_BCSTART_TASKS_BCSTART_Trigger (0x1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_BCSTOP */
/* Description: Stop the bit counter */

/* Bit 0 : Stop the bit counter */
#define RADIO_TASKS_BCSTOP_TASKS_BCSTOP_Pos (0UL) /*!< Position of TASKS_BCSTOP field. */
#define RADIO_TASKS_BCSTOP_TASKS_BCSTOP_Msk (0x1UL << RADIO_TASKS_BCSTOP_TASKS_BCSTOP_Pos) /*!< Bit mask of TASKS_BCSTOP field. */
#define RADIO_TASKS_BCSTOP_TASKS_BCSTOP_Trigger (0x1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_EDSTART */
/* Description: Start the energy detect measurement used in IEEE 802.15.4 mode */

/* Bit 0 : Start the energy detect measurement used in IEEE 802.15.4 mode */
#define RADIO_TASKS_EDSTART_TASKS_EDSTART_Pos (0UL) /*!< Position of TASKS_EDSTART field. */
#define RADIO_TASKS_EDSTART_TASKS_EDSTART_Msk (0x1UL << RADIO_TASKS_EDSTART_TASKS_EDSTART_Pos) /*!< Bit mask of TASKS_EDSTART field. */
#define RADIO_TASKS_EDSTART_TASKS_EDSTART_Trigger (0x1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_EDSTOP */
/* Description: Stop the energy detect measurement */

/* Bit 0 : Stop the energy detect measurement */
#define RADIO_TASKS_EDSTOP_TASKS_EDSTOP_Pos (0UL) /*!< Position of TASKS_EDSTOP field. */
#define RADIO_TASKS_EDSTOP_TASKS_EDSTOP_Msk (0x1UL << RADIO_TASKS_EDSTOP_TASKS_EDSTOP_Pos) /*!< Bit mask of TASKS_EDSTOP field. */
#define RADIO_TASKS_EDSTOP_TASKS_EDSTOP_Trigger (0x1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_CCASTART */
/* Description: Start the clear channel assessment used in IEEE 802.15.4 mode */

/* Bit 0 : Start the clear channel assessment used in IEEE 802.15.4 mode */
#define RADIO_TASKS_CCASTART_TASKS_CCASTART_Pos (0UL) /*!< Position of TASKS_CCASTART field. */
#define RADIO_TASKS_CCASTART_TASKS_CCASTART_Msk (0x1UL << RADIO_TASKS_CCASTART_TASKS_CCASTART_Pos) /*!< Bit mask of TASKS_CCASTART field. */
#define RADIO_TASKS_CCASTART_TASKS_CCASTART_Trigger (0x1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_CCASTOP */
/* Description: Stop the clear channel assessment */

/* Bit 0 : Stop the clear channel assessment */
#define RADIO_TASKS_CCASTOP_TASKS_CCASTOP_Pos (0UL) /*!< Position of TASKS_CCASTOP field. */
#define RADIO_TASKS_CCASTOP_TASKS_CCASTOP_Msk (0x1UL << RADIO_TASKS_CCASTOP_TASKS_CCASTOP_Pos) /*!< Bit mask of TASKS_CCASTOP field. */
#define RADIO_TASKS_CCASTOP_TASKS_CCASTOP_Trigger (0x1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_DFESTART */
/* Description: Start DFE operation */

/* Bit 0 : Start DFE operation */
#define RADIO_TASKS_DFESTART_TASKS_DFESTART_Pos (0UL) /*!< Position of TASKS_DFESTART field. */
#define RADIO_TASKS_DFESTART_TASKS_DFESTART_Msk (0x1UL << RADIO_TASKS_DFESTART_TASKS_DFESTART_Pos) /*!< Bit mask of TASKS_DFESTART field. */
#define RADIO_TASKS_DFESTART_TASKS_DFESTART_Trigger (0x1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_DFESTOP */
/* Description: Stop DFE operation */

/* Bit 0 : Stop DFE operation */
#define RADIO_TASKS_DFESTOP_TASKS_DFESTOP_Pos (0UL) /*!< Position of TASKS_DFESTOP field. */
#define RADIO_TASKS_DFESTOP_TASKS_DFESTOP_Msk (0x1UL << RADIO_TASKS_DFESTOP_TASKS_DFESTOP_Pos) /*!< Bit mask of TASKS_DFESTOP field. */
#define RADIO_TASKS_DFESTOP_TASKS_DFESTOP_Trigger (0x1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_ACQINJ0DMASTART */
/* Description: Start DMA transaction */

/* Bit 0 : Start DMA transaction */
#define RADIO_TASKS_ACQINJ0DMASTART_TASKS_ACQINJ0DMASTART_Pos (0UL) /*!< Position of TASKS_ACQINJ0DMASTART field. */
#define RADIO_TASKS_ACQINJ0DMASTART_TASKS_ACQINJ0DMASTART_Msk (0x1UL << RADIO_TASKS_ACQINJ0DMASTART_TASKS_ACQINJ0DMASTART_Pos) /*!< Bit mask of TASKS_ACQINJ0DMASTART field. */
#define RADIO_TASKS_ACQINJ0DMASTART_TASKS_ACQINJ0DMASTART_Trigger (0x1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_ACQINJ0DMASTOP */
/* Description: Stop ongoing DMA transaction */

/* Bit 0 : Stop ongoing DMA transaction */
#define RADIO_TASKS_ACQINJ0DMASTOP_TASKS_ACQINJ0DMASTOP_Pos (0UL) /*!< Position of TASKS_ACQINJ0DMASTOP field. */
#define RADIO_TASKS_ACQINJ0DMASTOP_TASKS_ACQINJ0DMASTOP_Msk (0x1UL << RADIO_TASKS_ACQINJ0DMASTOP_TASKS_ACQINJ0DMASTOP_Pos) /*!< Bit mask of TASKS_ACQINJ0DMASTOP field. */
#define RADIO_TASKS_ACQINJ0DMASTOP_TASKS_ACQINJ0DMASTOP_Trigger (0x1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_ACQINJ1DMASTART */
/* Description: Start DMA transaction */

/* Bit 0 : Start DMA transaction */
#define RADIO_TASKS_ACQINJ1DMASTART_TASKS_ACQINJ1DMASTART_Pos (0UL) /*!< Position of TASKS_ACQINJ1DMASTART field. */
#define RADIO_TASKS_ACQINJ1DMASTART_TASKS_ACQINJ1DMASTART_Msk (0x1UL << RADIO_TASKS_ACQINJ1DMASTART_TASKS_ACQINJ1DMASTART_Pos) /*!< Bit mask of TASKS_ACQINJ1DMASTART field. */
#define RADIO_TASKS_ACQINJ1DMASTART_TASKS_ACQINJ1DMASTART_Trigger (0x1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_ACQINJ1DMASTOP */
/* Description: Stop ongoing DMA transaction */

/* Bit 0 : Stop ongoing DMA transaction */
#define RADIO_TASKS_ACQINJ1DMASTOP_TASKS_ACQINJ1DMASTOP_Pos (0UL) /*!< Position of TASKS_ACQINJ1DMASTOP field. */
#define RADIO_TASKS_ACQINJ1DMASTOP_TASKS_ACQINJ1DMASTOP_Msk (0x1UL << RADIO_TASKS_ACQINJ1DMASTOP_TASKS_ACQINJ1DMASTOP_Pos) /*!< Bit mask of TASKS_ACQINJ1DMASTOP field. */
#define RADIO_TASKS_ACQINJ1DMASTOP_TASKS_ACQINJ1DMASTOP_Trigger (0x1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_CNTPSTART */
/* Description: Start packet counter */

/* Bit 0 : Start packet counter */
#define RADIO_TASKS_CNTPSTART_TASKS_CNTPSTART_Pos (0UL) /*!< Position of TASKS_CNTPSTART field. */
#define RADIO_TASKS_CNTPSTART_TASKS_CNTPSTART_Msk (0x1UL << RADIO_TASKS_CNTPSTART_TASKS_CNTPSTART_Pos) /*!< Bit mask of TASKS_CNTPSTART field. */
#define RADIO_TASKS_CNTPSTART_TASKS_CNTPSTART_Trigger (0x1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_CNTPSTOP */
/* Description: Stop packet counter */

/* Bit 0 : Stop packet counter */
#define RADIO_TASKS_CNTPSTOP_TASKS_CNTPSTOP_Pos (0UL) /*!< Position of TASKS_CNTPSTOP field. */
#define RADIO_TASKS_CNTPSTOP_TASKS_CNTPSTOP_Msk (0x1UL << RADIO_TASKS_CNTPSTOP_TASKS_CNTPSTOP_Pos) /*!< Bit mask of TASKS_CNTPSTOP field. */
#define RADIO_TASKS_CNTPSTOP_TASKS_CNTPSTOP_Trigger (0x1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_CNTPCLEAR */
/* Description: Clear packet counter */

/* Bit 0 : Clear packet counter */
#define RADIO_TASKS_CNTPCLEAR_TASKS_CNTPCLEAR_Pos (0UL) /*!< Position of TASKS_CNTPCLEAR field. */
#define RADIO_TASKS_CNTPCLEAR_TASKS_CNTPCLEAR_Msk (0x1UL << RADIO_TASKS_CNTPCLEAR_TASKS_CNTPCLEAR_Pos) /*!< Bit mask of TASKS_CNTPCLEAR field. */
#define RADIO_TASKS_CNTPCLEAR_TASKS_CNTPCLEAR_Trigger (0x1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_LOOPBACKEN */
/* Description: Enable RADIO in LOOPBACK mode */

/* Bit 0 : Enable RADIO in LOOPBACK mode */
#define RADIO_TASKS_LOOPBACKEN_TASKS_LOOPBACKEN_Pos (0UL) /*!< Position of TASKS_LOOPBACKEN field. */
#define RADIO_TASKS_LOOPBACKEN_TASKS_LOOPBACKEN_Msk (0x1UL << RADIO_TASKS_LOOPBACKEN_TASKS_LOOPBACKEN_Pos) /*!< Bit mask of TASKS_LOOPBACKEN field. */
#define RADIO_TASKS_LOOPBACKEN_TASKS_LOOPBACKEN_Trigger (0x1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_CALSTART */
/* Description: Start calibration */

/* Bit 0 : Start calibration */
#define RADIO_TASKS_CALSTART_TASKS_CALSTART_Pos (0UL) /*!< Position of TASKS_CALSTART field. */
#define RADIO_TASKS_CALSTART_TASKS_CALSTART_Msk (0x1UL << RADIO_TASKS_CALSTART_TASKS_CALSTART_Pos) /*!< Bit mask of TASKS_CALSTART field. */
#define RADIO_TASKS_CALSTART_TASKS_CALSTART_Trigger (0x1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_CALSTOP */
/* Description: Stop calibration */

/* Bit 0 : Stop calibration */
#define RADIO_TASKS_CALSTOP_TASKS_CALSTOP_Pos (0UL) /*!< Position of TASKS_CALSTOP field. */
#define RADIO_TASKS_CALSTOP_TASKS_CALSTOP_Msk (0x1UL << RADIO_TASKS_CALSTOP_TASKS_CALSTOP_Pos) /*!< Bit mask of TASKS_CALSTOP field. */
#define RADIO_TASKS_CALSTOP_TASKS_CALSTOP_Trigger (0x1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_PATESTSTART */
/* Description: Start PA test */

/* Bit 0 : Start PA test */
#define RADIO_TASKS_PATESTSTART_TASKS_PATESTSTART_Pos (0UL) /*!< Position of TASKS_PATESTSTART field. */
#define RADIO_TASKS_PATESTSTART_TASKS_PATESTSTART_Msk (0x1UL << RADIO_TASKS_PATESTSTART_TASKS_PATESTSTART_Pos) /*!< Bit mask of TASKS_PATESTSTART field. */
#define RADIO_TASKS_PATESTSTART_TASKS_PATESTSTART_Trigger (0x1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_PATESTSTOP */
/* Description: Stop PA test */

/* Bit 0 : Stop PA test */
#define RADIO_TASKS_PATESTSTOP_TASKS_PATESTSTOP_Pos (0UL) /*!< Position of TASKS_PATESTSTOP field. */
#define RADIO_TASKS_PATESTSTOP_TASKS_PATESTSTOP_Msk (0x1UL << RADIO_TASKS_PATESTSTOP_TASKS_PATESTSTOP_Pos) /*!< Bit mask of TASKS_PATESTSTOP field. */
#define RADIO_TASKS_PATESTSTOP_TASKS_PATESTSTOP_Trigger (0x1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_CHNOINCR */
/* Description: Update RADIO channel based on the current channel and increment it according to chNoIncrStep */

/* Bit 0 : Update RADIO channel based on the current channel and increment it according to chNoIncrStep */
#define RADIO_TASKS_CHNOINCR_TASKS_CHNOINCR_Pos (0UL) /*!< Position of TASKS_CHNOINCR field. */
#define RADIO_TASKS_CHNOINCR_TASKS_CHNOINCR_Msk (0x1UL << RADIO_TASKS_CHNOINCR_TASKS_CHNOINCR_Pos) /*!< Bit mask of TASKS_CHNOINCR field. */
#define RADIO_TASKS_CHNOINCR_TASKS_CHNOINCR_Trigger (0x1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_DMASTART */
/* Description: Start RADIO DMA transaction */

/* Bit 0 : Start RADIO DMA transaction */
#define RADIO_TASKS_DMASTART_TASKS_DMASTART_Pos (0UL) /*!< Position of TASKS_DMASTART field. */
#define RADIO_TASKS_DMASTART_TASKS_DMASTART_Msk (0x1UL << RADIO_TASKS_DMASTART_TASKS_DMASTART_Pos) /*!< Bit mask of TASKS_DMASTART field. */
#define RADIO_TASKS_DMASTART_TASKS_DMASTART_Trigger (0x1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_DMASTOP */
/* Description: Stop ongoing RADIO DMA transaction */

/* Bit 0 : Stop ongoing RADIO DMA transaction */
#define RADIO_TASKS_DMASTOP_TASKS_DMASTOP_Pos (0UL) /*!< Position of TASKS_DMASTOP field. */
#define RADIO_TASKS_DMASTOP_TASKS_DMASTOP_Msk (0x1UL << RADIO_TASKS_DMASTOP_TASKS_DMASTOP_Pos) /*!< Bit mask of TASKS_DMASTOP field. */
#define RADIO_TASKS_DMASTOP_TASKS_DMASTOP_Trigger (0x1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_DFEDMASTART */
/* Description: Start DFE DMA transaction */

/* Bit 0 : Start DFE DMA transaction */
#define RADIO_TASKS_DFEDMASTART_TASKS_DFEDMASTART_Pos (0UL) /*!< Position of TASKS_DFEDMASTART field. */
#define RADIO_TASKS_DFEDMASTART_TASKS_DFEDMASTART_Msk (0x1UL << RADIO_TASKS_DFEDMASTART_TASKS_DFEDMASTART_Pos) /*!< Bit mask of TASKS_DFEDMASTART field. */
#define RADIO_TASKS_DFEDMASTART_TASKS_DFEDMASTART_Trigger (0x1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_DFEDMASTOP */
/* Description: Stop ongoing DFE DMA transaction */

/* Bit 0 : Stop ongoing DFE DMA transaction */
#define RADIO_TASKS_DFEDMASTOP_TASKS_DFEDMASTOP_Pos (0UL) /*!< Position of TASKS_DFEDMASTOP field. */
#define RADIO_TASKS_DFEDMASTOP_TASKS_DFEDMASTOP_Msk (0x1UL << RADIO_TASKS_DFEDMASTOP_TASKS_DFEDMASTOP_Pos) /*!< Bit mask of TASKS_DFEDMASTOP field. */
#define RADIO_TASKS_DFEDMASTOP_TASKS_DFEDMASTOP_Trigger (0x1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_RELOADFREQ */
/* Description: Reload new frequency while radio PLL is active */

/* Bit 0 : Reload new frequency while radio PLL is active */
#define RADIO_TASKS_RELOADFREQ_TASKS_RELOADFREQ_Pos (0UL) /*!< Position of TASKS_RELOADFREQ field. */
#define RADIO_TASKS_RELOADFREQ_TASKS_RELOADFREQ_Msk (0x1UL << RADIO_TASKS_RELOADFREQ_TASKS_RELOADFREQ_Pos) /*!< Bit mask of TASKS_RELOADFREQ field. */
#define RADIO_TASKS_RELOADFREQ_TASKS_RELOADFREQ_Trigger (0x1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_GETNEXTDETECT */
/* Description: Pull the last item out of the detect FIFO */

/* Bit 0 : Pull the last item out of the detect FIFO */
#define RADIO_TASKS_GETNEXTDETECT_TASKS_GETNEXTDETECT_Pos (0UL) /*!< Position of TASKS_GETNEXTDETECT field. */
#define RADIO_TASKS_GETNEXTDETECT_TASKS_GETNEXTDETECT_Msk (0x1UL << RADIO_TASKS_GETNEXTDETECT_TASKS_GETNEXTDETECT_Pos) /*!< Bit mask of TASKS_GETNEXTDETECT field. */
#define RADIO_TASKS_GETNEXTDETECT_TASKS_GETNEXTDETECT_Trigger (0x1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_CLEARDETECTFIFO */
/* Description: Clear the detect FIFO */

/* Bit 0 : Clear the detect FIFO */
#define RADIO_TASKS_CLEARDETECTFIFO_TASKS_CLEARDETECTFIFO_Pos (0UL) /*!< Position of TASKS_CLEARDETECTFIFO field. */
#define RADIO_TASKS_CLEARDETECTFIFO_TASKS_CLEARDETECTFIFO_Msk (0x1UL << RADIO_TASKS_CLEARDETECTFIFO_TASKS_CLEARDETECTFIFO_Pos) /*!< Bit mask of TASKS_CLEARDETECTFIFO field. */
#define RADIO_TASKS_CLEARDETECTFIFO_TASKS_CLEARDETECTFIFO_Trigger (0x1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_RESETDEMODCTRL */
/* Description: Sets all things back to original state in RxDemodCtrl */

/* Bit 0 : Sets all things back to original state in RxDemodCtrl */
#define RADIO_TASKS_RESETDEMODCTRL_TASKS_RESETDEMODCTRL_Pos (0UL) /*!< Position of TASKS_RESETDEMODCTRL field. */
#define RADIO_TASKS_RESETDEMODCTRL_TASKS_RESETDEMODCTRL_Msk (0x1UL << RADIO_TASKS_RESETDEMODCTRL_TASKS_RESETDEMODCTRL_Pos) /*!< Bit mask of TASKS_RESETDEMODCTRL field. */
#define RADIO_TASKS_RESETDEMODCTRL_TASKS_RESETDEMODCTRL_Trigger (0x1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_DEMODCTRLSTARTTIMER */
/* Description: Start the built-in custom timer (when starting the timer, it always starts from 0) */

/* Bit 0 : Start the built-in custom timer (when starting the timer, it always starts from 0) */
#define RADIO_TASKS_DEMODCTRLSTARTTIMER_TASKS_DEMODCTRLSTARTTIMER_Pos (0UL) /*!< Position of TASKS_DEMODCTRLSTARTTIMER field. */
#define RADIO_TASKS_DEMODCTRLSTARTTIMER_TASKS_DEMODCTRLSTARTTIMER_Msk (0x1UL << RADIO_TASKS_DEMODCTRLSTARTTIMER_TASKS_DEMODCTRLSTARTTIMER_Pos) /*!< Bit mask of TASKS_DEMODCTRLSTARTTIMER field. */
#define RADIO_TASKS_DEMODCTRLSTARTTIMER_TASKS_DEMODCTRLSTARTTIMER_Trigger (0x1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_DEMODCTRLSTOPTIMER */
/* Description: Stop the built-in custom timer (when stopping the timer, it is always cleared afterwards) */

/* Bit 0 : Stop the built-in custom timer (when stopping the timer, it is always cleared afterwards) */
#define RADIO_TASKS_DEMODCTRLSTOPTIMER_TASKS_DEMODCTRLSTOPTIMER_Pos (0UL) /*!< Position of TASKS_DEMODCTRLSTOPTIMER field. */
#define RADIO_TASKS_DEMODCTRLSTOPTIMER_TASKS_DEMODCTRLSTOPTIMER_Msk (0x1UL << RADIO_TASKS_DEMODCTRLSTOPTIMER_TASKS_DEMODCTRLSTOPTIMER_Pos) /*!< Bit mask of TASKS_DEMODCTRLSTOPTIMER field. */
#define RADIO_TASKS_DEMODCTRLSTOPTIMER_TASKS_DEMODCTRLSTOPTIMER_Trigger (0x1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_DEMODCTRLCONDEN0 */
/* Description: Enable condition 0 (after this task has been triggered, the condition will trigger exactly once) */

/* Bit 0 : Enable condition 0 (after this task has been triggered, the condition will trigger exactly once) */
#define RADIO_TASKS_DEMODCTRLCONDEN0_TASKS_DEMODCTRLCONDEN0_Pos (0UL) /*!< Position of TASKS_DEMODCTRLCONDEN0 field. */
#define RADIO_TASKS_DEMODCTRLCONDEN0_TASKS_DEMODCTRLCONDEN0_Msk (0x1UL << RADIO_TASKS_DEMODCTRLCONDEN0_TASKS_DEMODCTRLCONDEN0_Pos) /*!< Bit mask of TASKS_DEMODCTRLCONDEN0 field. */
#define RADIO_TASKS_DEMODCTRLCONDEN0_TASKS_DEMODCTRLCONDEN0_Trigger (0x1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_DEMODCTRLCONDEN1 */
/* Description: Enable condition 1 (after this task has been triggered, the condition will trigger exactly once) */

/* Bit 0 : Enable condition 1 (after this task has been triggered, the condition will trigger exactly once) */
#define RADIO_TASKS_DEMODCTRLCONDEN1_TASKS_DEMODCTRLCONDEN1_Pos (0UL) /*!< Position of TASKS_DEMODCTRLCONDEN1 field. */
#define RADIO_TASKS_DEMODCTRLCONDEN1_TASKS_DEMODCTRLCONDEN1_Msk (0x1UL << RADIO_TASKS_DEMODCTRLCONDEN1_TASKS_DEMODCTRLCONDEN1_Pos) /*!< Bit mask of TASKS_DEMODCTRLCONDEN1 field. */
#define RADIO_TASKS_DEMODCTRLCONDEN1_TASKS_DEMODCTRLCONDEN1_Trigger (0x1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_DEMODCTRLCONDEN2 */
/* Description: Enable condition 2 (after this task has been triggered, the condition will trigger exactly once) */

/* Bit 0 : Enable condition 2 (after this task has been triggered, the condition will trigger exactly once) */
#define RADIO_TASKS_DEMODCTRLCONDEN2_TASKS_DEMODCTRLCONDEN2_Pos (0UL) /*!< Position of TASKS_DEMODCTRLCONDEN2 field. */
#define RADIO_TASKS_DEMODCTRLCONDEN2_TASKS_DEMODCTRLCONDEN2_Msk (0x1UL << RADIO_TASKS_DEMODCTRLCONDEN2_TASKS_DEMODCTRLCONDEN2_Pos) /*!< Bit mask of TASKS_DEMODCTRLCONDEN2 field. */
#define RADIO_TASKS_DEMODCTRLCONDEN2_TASKS_DEMODCTRLCONDEN2_Trigger (0x1UL) /*!< Trigger task */

/* Register: RADIO_SUBSCRIBE_TXEN */
/* Description: Subscribe configuration for task TXEN */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_TXEN_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_SUBSCRIBE_TXEN_EN_Msk (0x1UL << RADIO_SUBSCRIBE_TXEN_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_SUBSCRIBE_TXEN_EN_Disabled (0x0UL) /*!< Disable subscription */
#define RADIO_SUBSCRIBE_TXEN_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task TXEN will subscribe to */
#define RADIO_SUBSCRIBE_TXEN_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_SUBSCRIBE_TXEN_CHIDX_Msk (0xFFUL << RADIO_SUBSCRIBE_TXEN_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_SUBSCRIBE_RXEN */
/* Description: Subscribe configuration for task RXEN */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_RXEN_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_SUBSCRIBE_RXEN_EN_Msk (0x1UL << RADIO_SUBSCRIBE_RXEN_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_SUBSCRIBE_RXEN_EN_Disabled (0x0UL) /*!< Disable subscription */
#define RADIO_SUBSCRIBE_RXEN_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task RXEN will subscribe to */
#define RADIO_SUBSCRIBE_RXEN_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_SUBSCRIBE_RXEN_CHIDX_Msk (0xFFUL << RADIO_SUBSCRIBE_RXEN_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_SUBSCRIBE_START */
/* Description: Subscribe configuration for task START */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_START_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_SUBSCRIBE_START_EN_Msk (0x1UL << RADIO_SUBSCRIBE_START_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_SUBSCRIBE_START_EN_Disabled (0x0UL) /*!< Disable subscription */
#define RADIO_SUBSCRIBE_START_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task START will subscribe to */
#define RADIO_SUBSCRIBE_START_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_SUBSCRIBE_START_CHIDX_Msk (0xFFUL << RADIO_SUBSCRIBE_START_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_SUBSCRIBE_STOP */
/* Description: Subscribe configuration for task STOP */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_STOP_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_SUBSCRIBE_STOP_EN_Msk (0x1UL << RADIO_SUBSCRIBE_STOP_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_SUBSCRIBE_STOP_EN_Disabled (0x0UL) /*!< Disable subscription */
#define RADIO_SUBSCRIBE_STOP_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task STOP will subscribe to */
#define RADIO_SUBSCRIBE_STOP_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_SUBSCRIBE_STOP_CHIDX_Msk (0xFFUL << RADIO_SUBSCRIBE_STOP_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_SUBSCRIBE_DISABLE */
/* Description: Subscribe configuration for task DISABLE */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_DISABLE_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_SUBSCRIBE_DISABLE_EN_Msk (0x1UL << RADIO_SUBSCRIBE_DISABLE_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_SUBSCRIBE_DISABLE_EN_Disabled (0x0UL) /*!< Disable subscription */
#define RADIO_SUBSCRIBE_DISABLE_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task DISABLE will subscribe to */
#define RADIO_SUBSCRIBE_DISABLE_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_SUBSCRIBE_DISABLE_CHIDX_Msk (0xFFUL << RADIO_SUBSCRIBE_DISABLE_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_SUBSCRIBE_RSSISTART */
/* Description: Subscribe configuration for task RSSISTART */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_RSSISTART_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_SUBSCRIBE_RSSISTART_EN_Msk (0x1UL << RADIO_SUBSCRIBE_RSSISTART_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_SUBSCRIBE_RSSISTART_EN_Disabled (0x0UL) /*!< Disable subscription */
#define RADIO_SUBSCRIBE_RSSISTART_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task RSSISTART will subscribe to */
#define RADIO_SUBSCRIBE_RSSISTART_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_SUBSCRIBE_RSSISTART_CHIDX_Msk (0xFFUL << RADIO_SUBSCRIBE_RSSISTART_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_SUBSCRIBE_BCSTART */
/* Description: Subscribe configuration for task BCSTART */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_BCSTART_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_SUBSCRIBE_BCSTART_EN_Msk (0x1UL << RADIO_SUBSCRIBE_BCSTART_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_SUBSCRIBE_BCSTART_EN_Disabled (0x0UL) /*!< Disable subscription */
#define RADIO_SUBSCRIBE_BCSTART_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task BCSTART will subscribe to */
#define RADIO_SUBSCRIBE_BCSTART_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_SUBSCRIBE_BCSTART_CHIDX_Msk (0xFFUL << RADIO_SUBSCRIBE_BCSTART_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_SUBSCRIBE_BCSTOP */
/* Description: Subscribe configuration for task BCSTOP */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_BCSTOP_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_SUBSCRIBE_BCSTOP_EN_Msk (0x1UL << RADIO_SUBSCRIBE_BCSTOP_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_SUBSCRIBE_BCSTOP_EN_Disabled (0x0UL) /*!< Disable subscription */
#define RADIO_SUBSCRIBE_BCSTOP_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task BCSTOP will subscribe to */
#define RADIO_SUBSCRIBE_BCSTOP_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_SUBSCRIBE_BCSTOP_CHIDX_Msk (0xFFUL << RADIO_SUBSCRIBE_BCSTOP_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_SUBSCRIBE_EDSTART */
/* Description: Subscribe configuration for task EDSTART */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_EDSTART_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_SUBSCRIBE_EDSTART_EN_Msk (0x1UL << RADIO_SUBSCRIBE_EDSTART_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_SUBSCRIBE_EDSTART_EN_Disabled (0x0UL) /*!< Disable subscription */
#define RADIO_SUBSCRIBE_EDSTART_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task EDSTART will subscribe to */
#define RADIO_SUBSCRIBE_EDSTART_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_SUBSCRIBE_EDSTART_CHIDX_Msk (0xFFUL << RADIO_SUBSCRIBE_EDSTART_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_SUBSCRIBE_EDSTOP */
/* Description: Subscribe configuration for task EDSTOP */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_EDSTOP_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_SUBSCRIBE_EDSTOP_EN_Msk (0x1UL << RADIO_SUBSCRIBE_EDSTOP_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_SUBSCRIBE_EDSTOP_EN_Disabled (0x0UL) /*!< Disable subscription */
#define RADIO_SUBSCRIBE_EDSTOP_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task EDSTOP will subscribe to */
#define RADIO_SUBSCRIBE_EDSTOP_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_SUBSCRIBE_EDSTOP_CHIDX_Msk (0xFFUL << RADIO_SUBSCRIBE_EDSTOP_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_SUBSCRIBE_CCASTART */
/* Description: Subscribe configuration for task CCASTART */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_CCASTART_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_SUBSCRIBE_CCASTART_EN_Msk (0x1UL << RADIO_SUBSCRIBE_CCASTART_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_SUBSCRIBE_CCASTART_EN_Disabled (0x0UL) /*!< Disable subscription */
#define RADIO_SUBSCRIBE_CCASTART_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task CCASTART will subscribe to */
#define RADIO_SUBSCRIBE_CCASTART_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_SUBSCRIBE_CCASTART_CHIDX_Msk (0xFFUL << RADIO_SUBSCRIBE_CCASTART_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_SUBSCRIBE_CCASTOP */
/* Description: Subscribe configuration for task CCASTOP */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_CCASTOP_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_SUBSCRIBE_CCASTOP_EN_Msk (0x1UL << RADIO_SUBSCRIBE_CCASTOP_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_SUBSCRIBE_CCASTOP_EN_Disabled (0x0UL) /*!< Disable subscription */
#define RADIO_SUBSCRIBE_CCASTOP_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task CCASTOP will subscribe to */
#define RADIO_SUBSCRIBE_CCASTOP_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_SUBSCRIBE_CCASTOP_CHIDX_Msk (0xFFUL << RADIO_SUBSCRIBE_CCASTOP_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_SUBSCRIBE_DFESTART */
/* Description: Subscribe configuration for task DFESTART */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_DFESTART_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_SUBSCRIBE_DFESTART_EN_Msk (0x1UL << RADIO_SUBSCRIBE_DFESTART_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_SUBSCRIBE_DFESTART_EN_Disabled (0x0UL) /*!< Disable subscription */
#define RADIO_SUBSCRIBE_DFESTART_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task DFESTART will subscribe to */
#define RADIO_SUBSCRIBE_DFESTART_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_SUBSCRIBE_DFESTART_CHIDX_Msk (0xFFUL << RADIO_SUBSCRIBE_DFESTART_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_SUBSCRIBE_DFESTOP */
/* Description: Subscribe configuration for task DFESTOP */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_DFESTOP_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_SUBSCRIBE_DFESTOP_EN_Msk (0x1UL << RADIO_SUBSCRIBE_DFESTOP_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_SUBSCRIBE_DFESTOP_EN_Disabled (0x0UL) /*!< Disable subscription */
#define RADIO_SUBSCRIBE_DFESTOP_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task DFESTOP will subscribe to */
#define RADIO_SUBSCRIBE_DFESTOP_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_SUBSCRIBE_DFESTOP_CHIDX_Msk (0xFFUL << RADIO_SUBSCRIBE_DFESTOP_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_SUBSCRIBE_ACQINJ0DMASTART */
/* Description: Subscribe configuration for task ACQINJ0DMASTART */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_ACQINJ0DMASTART_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_SUBSCRIBE_ACQINJ0DMASTART_EN_Msk (0x1UL << RADIO_SUBSCRIBE_ACQINJ0DMASTART_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_SUBSCRIBE_ACQINJ0DMASTART_EN_Disabled (0x0UL) /*!< Disable subscription */
#define RADIO_SUBSCRIBE_ACQINJ0DMASTART_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task ACQINJ0DMASTART will subscribe to */
#define RADIO_SUBSCRIBE_ACQINJ0DMASTART_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_SUBSCRIBE_ACQINJ0DMASTART_CHIDX_Msk (0xFFUL << RADIO_SUBSCRIBE_ACQINJ0DMASTART_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_SUBSCRIBE_ACQINJ0DMASTOP */
/* Description: Subscribe configuration for task ACQINJ0DMASTOP */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_ACQINJ0DMASTOP_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_SUBSCRIBE_ACQINJ0DMASTOP_EN_Msk (0x1UL << RADIO_SUBSCRIBE_ACQINJ0DMASTOP_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_SUBSCRIBE_ACQINJ0DMASTOP_EN_Disabled (0x0UL) /*!< Disable subscription */
#define RADIO_SUBSCRIBE_ACQINJ0DMASTOP_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task ACQINJ0DMASTOP will subscribe to */
#define RADIO_SUBSCRIBE_ACQINJ0DMASTOP_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_SUBSCRIBE_ACQINJ0DMASTOP_CHIDX_Msk (0xFFUL << RADIO_SUBSCRIBE_ACQINJ0DMASTOP_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_SUBSCRIBE_ACQINJ1DMASTART */
/* Description: Subscribe configuration for task ACQINJ1DMASTART */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_ACQINJ1DMASTART_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_SUBSCRIBE_ACQINJ1DMASTART_EN_Msk (0x1UL << RADIO_SUBSCRIBE_ACQINJ1DMASTART_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_SUBSCRIBE_ACQINJ1DMASTART_EN_Disabled (0x0UL) /*!< Disable subscription */
#define RADIO_SUBSCRIBE_ACQINJ1DMASTART_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task ACQINJ1DMASTART will subscribe to */
#define RADIO_SUBSCRIBE_ACQINJ1DMASTART_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_SUBSCRIBE_ACQINJ1DMASTART_CHIDX_Msk (0xFFUL << RADIO_SUBSCRIBE_ACQINJ1DMASTART_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_SUBSCRIBE_ACQINJ1DMASTOP */
/* Description: Subscribe configuration for task ACQINJ1DMASTOP */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_ACQINJ1DMASTOP_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_SUBSCRIBE_ACQINJ1DMASTOP_EN_Msk (0x1UL << RADIO_SUBSCRIBE_ACQINJ1DMASTOP_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_SUBSCRIBE_ACQINJ1DMASTOP_EN_Disabled (0x0UL) /*!< Disable subscription */
#define RADIO_SUBSCRIBE_ACQINJ1DMASTOP_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task ACQINJ1DMASTOP will subscribe to */
#define RADIO_SUBSCRIBE_ACQINJ1DMASTOP_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_SUBSCRIBE_ACQINJ1DMASTOP_CHIDX_Msk (0xFFUL << RADIO_SUBSCRIBE_ACQINJ1DMASTOP_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_SUBSCRIBE_CNTPSTART */
/* Description: Subscribe configuration for task CNTPSTART */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_CNTPSTART_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_SUBSCRIBE_CNTPSTART_EN_Msk (0x1UL << RADIO_SUBSCRIBE_CNTPSTART_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_SUBSCRIBE_CNTPSTART_EN_Disabled (0x0UL) /*!< Disable subscription */
#define RADIO_SUBSCRIBE_CNTPSTART_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task CNTPSTART will subscribe to */
#define RADIO_SUBSCRIBE_CNTPSTART_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_SUBSCRIBE_CNTPSTART_CHIDX_Msk (0xFFUL << RADIO_SUBSCRIBE_CNTPSTART_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_SUBSCRIBE_CNTPSTOP */
/* Description: Subscribe configuration for task CNTPSTOP */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_CNTPSTOP_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_SUBSCRIBE_CNTPSTOP_EN_Msk (0x1UL << RADIO_SUBSCRIBE_CNTPSTOP_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_SUBSCRIBE_CNTPSTOP_EN_Disabled (0x0UL) /*!< Disable subscription */
#define RADIO_SUBSCRIBE_CNTPSTOP_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task CNTPSTOP will subscribe to */
#define RADIO_SUBSCRIBE_CNTPSTOP_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_SUBSCRIBE_CNTPSTOP_CHIDX_Msk (0xFFUL << RADIO_SUBSCRIBE_CNTPSTOP_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_SUBSCRIBE_CNTPCLEAR */
/* Description: Subscribe configuration for task CNTPCLEAR */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_CNTPCLEAR_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_SUBSCRIBE_CNTPCLEAR_EN_Msk (0x1UL << RADIO_SUBSCRIBE_CNTPCLEAR_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_SUBSCRIBE_CNTPCLEAR_EN_Disabled (0x0UL) /*!< Disable subscription */
#define RADIO_SUBSCRIBE_CNTPCLEAR_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task CNTPCLEAR will subscribe to */
#define RADIO_SUBSCRIBE_CNTPCLEAR_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_SUBSCRIBE_CNTPCLEAR_CHIDX_Msk (0xFFUL << RADIO_SUBSCRIBE_CNTPCLEAR_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_SUBSCRIBE_LOOPBACKEN */
/* Description: Subscribe configuration for task LOOPBACKEN */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_LOOPBACKEN_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_SUBSCRIBE_LOOPBACKEN_EN_Msk (0x1UL << RADIO_SUBSCRIBE_LOOPBACKEN_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_SUBSCRIBE_LOOPBACKEN_EN_Disabled (0x0UL) /*!< Disable subscription */
#define RADIO_SUBSCRIBE_LOOPBACKEN_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task LOOPBACKEN will subscribe to */
#define RADIO_SUBSCRIBE_LOOPBACKEN_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_SUBSCRIBE_LOOPBACKEN_CHIDX_Msk (0xFFUL << RADIO_SUBSCRIBE_LOOPBACKEN_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_SUBSCRIBE_CALSTART */
/* Description: Subscribe configuration for task CALSTART */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_CALSTART_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_SUBSCRIBE_CALSTART_EN_Msk (0x1UL << RADIO_SUBSCRIBE_CALSTART_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_SUBSCRIBE_CALSTART_EN_Disabled (0x0UL) /*!< Disable subscription */
#define RADIO_SUBSCRIBE_CALSTART_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task CALSTART will subscribe to */
#define RADIO_SUBSCRIBE_CALSTART_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_SUBSCRIBE_CALSTART_CHIDX_Msk (0xFFUL << RADIO_SUBSCRIBE_CALSTART_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_SUBSCRIBE_CALSTOP */
/* Description: Subscribe configuration for task CALSTOP */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_CALSTOP_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_SUBSCRIBE_CALSTOP_EN_Msk (0x1UL << RADIO_SUBSCRIBE_CALSTOP_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_SUBSCRIBE_CALSTOP_EN_Disabled (0x0UL) /*!< Disable subscription */
#define RADIO_SUBSCRIBE_CALSTOP_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task CALSTOP will subscribe to */
#define RADIO_SUBSCRIBE_CALSTOP_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_SUBSCRIBE_CALSTOP_CHIDX_Msk (0xFFUL << RADIO_SUBSCRIBE_CALSTOP_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_SUBSCRIBE_PATESTSTART */
/* Description: Subscribe configuration for task PATESTSTART */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_PATESTSTART_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_SUBSCRIBE_PATESTSTART_EN_Msk (0x1UL << RADIO_SUBSCRIBE_PATESTSTART_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_SUBSCRIBE_PATESTSTART_EN_Disabled (0x0UL) /*!< Disable subscription */
#define RADIO_SUBSCRIBE_PATESTSTART_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task PATESTSTART will subscribe to */
#define RADIO_SUBSCRIBE_PATESTSTART_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_SUBSCRIBE_PATESTSTART_CHIDX_Msk (0xFFUL << RADIO_SUBSCRIBE_PATESTSTART_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_SUBSCRIBE_PATESTSTOP */
/* Description: Subscribe configuration for task PATESTSTOP */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_PATESTSTOP_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_SUBSCRIBE_PATESTSTOP_EN_Msk (0x1UL << RADIO_SUBSCRIBE_PATESTSTOP_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_SUBSCRIBE_PATESTSTOP_EN_Disabled (0x0UL) /*!< Disable subscription */
#define RADIO_SUBSCRIBE_PATESTSTOP_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task PATESTSTOP will subscribe to */
#define RADIO_SUBSCRIBE_PATESTSTOP_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_SUBSCRIBE_PATESTSTOP_CHIDX_Msk (0xFFUL << RADIO_SUBSCRIBE_PATESTSTOP_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_SUBSCRIBE_CHNOINCR */
/* Description: Subscribe configuration for task CHNOINCR */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_CHNOINCR_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_SUBSCRIBE_CHNOINCR_EN_Msk (0x1UL << RADIO_SUBSCRIBE_CHNOINCR_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_SUBSCRIBE_CHNOINCR_EN_Disabled (0x0UL) /*!< Disable subscription */
#define RADIO_SUBSCRIBE_CHNOINCR_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task CHNOINCR will subscribe to */
#define RADIO_SUBSCRIBE_CHNOINCR_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_SUBSCRIBE_CHNOINCR_CHIDX_Msk (0xFFUL << RADIO_SUBSCRIBE_CHNOINCR_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_SUBSCRIBE_DMASTART */
/* Description: Subscribe configuration for task DMASTART */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_DMASTART_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_SUBSCRIBE_DMASTART_EN_Msk (0x1UL << RADIO_SUBSCRIBE_DMASTART_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_SUBSCRIBE_DMASTART_EN_Disabled (0x0UL) /*!< Disable subscription */
#define RADIO_SUBSCRIBE_DMASTART_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task DMASTART will subscribe to */
#define RADIO_SUBSCRIBE_DMASTART_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_SUBSCRIBE_DMASTART_CHIDX_Msk (0xFFUL << RADIO_SUBSCRIBE_DMASTART_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_SUBSCRIBE_DMASTOP */
/* Description: Subscribe configuration for task DMASTOP */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_DMASTOP_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_SUBSCRIBE_DMASTOP_EN_Msk (0x1UL << RADIO_SUBSCRIBE_DMASTOP_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_SUBSCRIBE_DMASTOP_EN_Disabled (0x0UL) /*!< Disable subscription */
#define RADIO_SUBSCRIBE_DMASTOP_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task DMASTOP will subscribe to */
#define RADIO_SUBSCRIBE_DMASTOP_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_SUBSCRIBE_DMASTOP_CHIDX_Msk (0xFFUL << RADIO_SUBSCRIBE_DMASTOP_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_SUBSCRIBE_DFEDMASTART */
/* Description: Subscribe configuration for task DFEDMASTART */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_DFEDMASTART_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_SUBSCRIBE_DFEDMASTART_EN_Msk (0x1UL << RADIO_SUBSCRIBE_DFEDMASTART_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_SUBSCRIBE_DFEDMASTART_EN_Disabled (0x0UL) /*!< Disable subscription */
#define RADIO_SUBSCRIBE_DFEDMASTART_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task DFEDMASTART will subscribe to */
#define RADIO_SUBSCRIBE_DFEDMASTART_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_SUBSCRIBE_DFEDMASTART_CHIDX_Msk (0xFFUL << RADIO_SUBSCRIBE_DFEDMASTART_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_SUBSCRIBE_DFEDMASTOP */
/* Description: Subscribe configuration for task DFEDMASTOP */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_DFEDMASTOP_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_SUBSCRIBE_DFEDMASTOP_EN_Msk (0x1UL << RADIO_SUBSCRIBE_DFEDMASTOP_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_SUBSCRIBE_DFEDMASTOP_EN_Disabled (0x0UL) /*!< Disable subscription */
#define RADIO_SUBSCRIBE_DFEDMASTOP_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task DFEDMASTOP will subscribe to */
#define RADIO_SUBSCRIBE_DFEDMASTOP_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_SUBSCRIBE_DFEDMASTOP_CHIDX_Msk (0xFFUL << RADIO_SUBSCRIBE_DFEDMASTOP_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_SUBSCRIBE_RELOADFREQ */
/* Description: Subscribe configuration for task RELOADFREQ */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_RELOADFREQ_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_SUBSCRIBE_RELOADFREQ_EN_Msk (0x1UL << RADIO_SUBSCRIBE_RELOADFREQ_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_SUBSCRIBE_RELOADFREQ_EN_Disabled (0x0UL) /*!< Disable subscription */
#define RADIO_SUBSCRIBE_RELOADFREQ_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task RELOADFREQ will subscribe to */
#define RADIO_SUBSCRIBE_RELOADFREQ_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_SUBSCRIBE_RELOADFREQ_CHIDX_Msk (0xFFUL << RADIO_SUBSCRIBE_RELOADFREQ_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_SUBSCRIBE_GETNEXTDETECT */
/* Description: Subscribe configuration for task GETNEXTDETECT */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_GETNEXTDETECT_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_SUBSCRIBE_GETNEXTDETECT_EN_Msk (0x1UL << RADIO_SUBSCRIBE_GETNEXTDETECT_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_SUBSCRIBE_GETNEXTDETECT_EN_Disabled (0x0UL) /*!< Disable subscription */
#define RADIO_SUBSCRIBE_GETNEXTDETECT_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task GETNEXTDETECT will subscribe to */
#define RADIO_SUBSCRIBE_GETNEXTDETECT_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_SUBSCRIBE_GETNEXTDETECT_CHIDX_Msk (0xFFUL << RADIO_SUBSCRIBE_GETNEXTDETECT_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_SUBSCRIBE_CLEARDETECTFIFO */
/* Description: Subscribe configuration for task CLEARDETECTFIFO */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_CLEARDETECTFIFO_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_SUBSCRIBE_CLEARDETECTFIFO_EN_Msk (0x1UL << RADIO_SUBSCRIBE_CLEARDETECTFIFO_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_SUBSCRIBE_CLEARDETECTFIFO_EN_Disabled (0x0UL) /*!< Disable subscription */
#define RADIO_SUBSCRIBE_CLEARDETECTFIFO_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task CLEARDETECTFIFO will subscribe to */
#define RADIO_SUBSCRIBE_CLEARDETECTFIFO_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_SUBSCRIBE_CLEARDETECTFIFO_CHIDX_Msk (0xFFUL << RADIO_SUBSCRIBE_CLEARDETECTFIFO_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_SUBSCRIBE_RESETDEMODCTRL */
/* Description: Subscribe configuration for task RESETDEMODCTRL */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_RESETDEMODCTRL_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_SUBSCRIBE_RESETDEMODCTRL_EN_Msk (0x1UL << RADIO_SUBSCRIBE_RESETDEMODCTRL_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_SUBSCRIBE_RESETDEMODCTRL_EN_Disabled (0x0UL) /*!< Disable subscription */
#define RADIO_SUBSCRIBE_RESETDEMODCTRL_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task RESETDEMODCTRL will subscribe to */
#define RADIO_SUBSCRIBE_RESETDEMODCTRL_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_SUBSCRIBE_RESETDEMODCTRL_CHIDX_Msk (0xFFUL << RADIO_SUBSCRIBE_RESETDEMODCTRL_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_SUBSCRIBE_DEMODCTRLSTARTTIMER */
/* Description: Subscribe configuration for task DEMODCTRLSTARTTIMER */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_DEMODCTRLSTARTTIMER_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_SUBSCRIBE_DEMODCTRLSTARTTIMER_EN_Msk (0x1UL << RADIO_SUBSCRIBE_DEMODCTRLSTARTTIMER_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_SUBSCRIBE_DEMODCTRLSTARTTIMER_EN_Disabled (0x0UL) /*!< Disable subscription */
#define RADIO_SUBSCRIBE_DEMODCTRLSTARTTIMER_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task DEMODCTRLSTARTTIMER will subscribe to */
#define RADIO_SUBSCRIBE_DEMODCTRLSTARTTIMER_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_SUBSCRIBE_DEMODCTRLSTARTTIMER_CHIDX_Msk (0xFFUL << RADIO_SUBSCRIBE_DEMODCTRLSTARTTIMER_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_SUBSCRIBE_DEMODCTRLSTOPTIMER */
/* Description: Subscribe configuration for task DEMODCTRLSTOPTIMER */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_DEMODCTRLSTOPTIMER_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_SUBSCRIBE_DEMODCTRLSTOPTIMER_EN_Msk (0x1UL << RADIO_SUBSCRIBE_DEMODCTRLSTOPTIMER_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_SUBSCRIBE_DEMODCTRLSTOPTIMER_EN_Disabled (0x0UL) /*!< Disable subscription */
#define RADIO_SUBSCRIBE_DEMODCTRLSTOPTIMER_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task DEMODCTRLSTOPTIMER will subscribe to */
#define RADIO_SUBSCRIBE_DEMODCTRLSTOPTIMER_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_SUBSCRIBE_DEMODCTRLSTOPTIMER_CHIDX_Msk (0xFFUL << RADIO_SUBSCRIBE_DEMODCTRLSTOPTIMER_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_SUBSCRIBE_DEMODCTRLCONDEN0 */
/* Description: Subscribe configuration for task DEMODCTRLCONDEN0 */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_DEMODCTRLCONDEN0_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_SUBSCRIBE_DEMODCTRLCONDEN0_EN_Msk (0x1UL << RADIO_SUBSCRIBE_DEMODCTRLCONDEN0_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_SUBSCRIBE_DEMODCTRLCONDEN0_EN_Disabled (0x0UL) /*!< Disable subscription */
#define RADIO_SUBSCRIBE_DEMODCTRLCONDEN0_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task DEMODCTRLCONDEN0 will subscribe to */
#define RADIO_SUBSCRIBE_DEMODCTRLCONDEN0_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_SUBSCRIBE_DEMODCTRLCONDEN0_CHIDX_Msk (0xFFUL << RADIO_SUBSCRIBE_DEMODCTRLCONDEN0_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_SUBSCRIBE_DEMODCTRLCONDEN1 */
/* Description: Subscribe configuration for task DEMODCTRLCONDEN1 */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_DEMODCTRLCONDEN1_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_SUBSCRIBE_DEMODCTRLCONDEN1_EN_Msk (0x1UL << RADIO_SUBSCRIBE_DEMODCTRLCONDEN1_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_SUBSCRIBE_DEMODCTRLCONDEN1_EN_Disabled (0x0UL) /*!< Disable subscription */
#define RADIO_SUBSCRIBE_DEMODCTRLCONDEN1_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task DEMODCTRLCONDEN1 will subscribe to */
#define RADIO_SUBSCRIBE_DEMODCTRLCONDEN1_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_SUBSCRIBE_DEMODCTRLCONDEN1_CHIDX_Msk (0xFFUL << RADIO_SUBSCRIBE_DEMODCTRLCONDEN1_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_SUBSCRIBE_DEMODCTRLCONDEN2 */
/* Description: Subscribe configuration for task DEMODCTRLCONDEN2 */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_DEMODCTRLCONDEN2_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_SUBSCRIBE_DEMODCTRLCONDEN2_EN_Msk (0x1UL << RADIO_SUBSCRIBE_DEMODCTRLCONDEN2_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_SUBSCRIBE_DEMODCTRLCONDEN2_EN_Disabled (0x0UL) /*!< Disable subscription */
#define RADIO_SUBSCRIBE_DEMODCTRLCONDEN2_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task DEMODCTRLCONDEN2 will subscribe to */
#define RADIO_SUBSCRIBE_DEMODCTRLCONDEN2_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_SUBSCRIBE_DEMODCTRLCONDEN2_CHIDX_Msk (0xFFUL << RADIO_SUBSCRIBE_DEMODCTRLCONDEN2_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_EVENTS_READY */
/* Description: RADIO has ramped up and is ready to be started */

/* Bit 0 : RADIO has ramped up and is ready to be started */
#define RADIO_EVENTS_READY_EVENTS_READY_Pos (0UL) /*!< Position of EVENTS_READY field. */
#define RADIO_EVENTS_READY_EVENTS_READY_Msk (0x1UL << RADIO_EVENTS_READY_EVENTS_READY_Pos) /*!< Bit mask of EVENTS_READY field. */
#define RADIO_EVENTS_READY_EVENTS_READY_NotGenerated (0x0UL) /*!< Event not generated */
#define RADIO_EVENTS_READY_EVENTS_READY_Generated (0x1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_TXREADY */
/* Description: RADIO has ramped up and is ready to be started TX path */

/* Bit 0 : RADIO has ramped up and is ready to be started TX path */
#define RADIO_EVENTS_TXREADY_EVENTS_TXREADY_Pos (0UL) /*!< Position of EVENTS_TXREADY field. */
#define RADIO_EVENTS_TXREADY_EVENTS_TXREADY_Msk (0x1UL << RADIO_EVENTS_TXREADY_EVENTS_TXREADY_Pos) /*!< Bit mask of EVENTS_TXREADY field. */
#define RADIO_EVENTS_TXREADY_EVENTS_TXREADY_NotGenerated (0x0UL) /*!< Event not generated */
#define RADIO_EVENTS_TXREADY_EVENTS_TXREADY_Generated (0x1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_RXREADY */
/* Description: RADIO has ramped up and is ready to be started RX path */

/* Bit 0 : RADIO has ramped up and is ready to be started RX path */
#define RADIO_EVENTS_RXREADY_EVENTS_RXREADY_Pos (0UL) /*!< Position of EVENTS_RXREADY field. */
#define RADIO_EVENTS_RXREADY_EVENTS_RXREADY_Msk (0x1UL << RADIO_EVENTS_RXREADY_EVENTS_RXREADY_Pos) /*!< Bit mask of EVENTS_RXREADY field. */
#define RADIO_EVENTS_RXREADY_EVENTS_RXREADY_NotGenerated (0x0UL) /*!< Event not generated */
#define RADIO_EVENTS_RXREADY_EVENTS_RXREADY_Generated (0x1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_ADDRESS */
/* Description: Address sent or received */

/* Bit 0 : Address sent or received */
#define RADIO_EVENTS_ADDRESS_EVENTS_ADDRESS_Pos (0UL) /*!< Position of EVENTS_ADDRESS field. */
#define RADIO_EVENTS_ADDRESS_EVENTS_ADDRESS_Msk (0x1UL << RADIO_EVENTS_ADDRESS_EVENTS_ADDRESS_Pos) /*!< Bit mask of EVENTS_ADDRESS field. */
#define RADIO_EVENTS_ADDRESS_EVENTS_ADDRESS_NotGenerated (0x0UL) /*!< Event not generated */
#define RADIO_EVENTS_ADDRESS_EVENTS_ADDRESS_Generated (0x1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_FRAMESTART */
/* Description: IEEE 802.15.4 length field received */

/* Bit 0 : IEEE 802.15.4 length field received */
#define RADIO_EVENTS_FRAMESTART_EVENTS_FRAMESTART_Pos (0UL) /*!< Position of EVENTS_FRAMESTART field. */
#define RADIO_EVENTS_FRAMESTART_EVENTS_FRAMESTART_Msk (0x1UL << RADIO_EVENTS_FRAMESTART_EVENTS_FRAMESTART_Pos) /*!< Bit mask of EVENTS_FRAMESTART field. */
#define RADIO_EVENTS_FRAMESTART_EVENTS_FRAMESTART_NotGenerated (0x0UL) /*!< Event not generated */
#define RADIO_EVENTS_FRAMESTART_EVENTS_FRAMESTART_Generated (0x1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_PAYLOAD */
/* Description: Packet payload sent or received */

/* Bit 0 : Packet payload sent or received */
#define RADIO_EVENTS_PAYLOAD_EVENTS_PAYLOAD_Pos (0UL) /*!< Position of EVENTS_PAYLOAD field. */
#define RADIO_EVENTS_PAYLOAD_EVENTS_PAYLOAD_Msk (0x1UL << RADIO_EVENTS_PAYLOAD_EVENTS_PAYLOAD_Pos) /*!< Bit mask of EVENTS_PAYLOAD field. */
#define RADIO_EVENTS_PAYLOAD_EVENTS_PAYLOAD_NotGenerated (0x0UL) /*!< Event not generated */
#define RADIO_EVENTS_PAYLOAD_EVENTS_PAYLOAD_Generated (0x1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_END */
/* Description: Packet sent or received */

/* Bit 0 : Packet sent or received */
#define RADIO_EVENTS_END_EVENTS_END_Pos (0UL) /*!< Position of EVENTS_END field. */
#define RADIO_EVENTS_END_EVENTS_END_Msk (0x1UL << RADIO_EVENTS_END_EVENTS_END_Pos) /*!< Bit mask of EVENTS_END field. */
#define RADIO_EVENTS_END_EVENTS_END_NotGenerated (0x0UL) /*!< Event not generated */
#define RADIO_EVENTS_END_EVENTS_END_Generated (0x1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_PHYEND */
/* Description: The last bit is sent on air or last bit is received */

/* Bit 0 : The last bit is sent on air or last bit is received */
#define RADIO_EVENTS_PHYEND_EVENTS_PHYEND_Pos (0UL) /*!< Position of EVENTS_PHYEND field. */
#define RADIO_EVENTS_PHYEND_EVENTS_PHYEND_Msk (0x1UL << RADIO_EVENTS_PHYEND_EVENTS_PHYEND_Pos) /*!< Bit mask of EVENTS_PHYEND field. */
#define RADIO_EVENTS_PHYEND_EVENTS_PHYEND_NotGenerated (0x0UL) /*!< Event not generated */
#define RADIO_EVENTS_PHYEND_EVENTS_PHYEND_Generated (0x1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_DISABLED */
/* Description: RADIO has been disabled */

/* Bit 0 : RADIO has been disabled */
#define RADIO_EVENTS_DISABLED_EVENTS_DISABLED_Pos (0UL) /*!< Position of EVENTS_DISABLED field. */
#define RADIO_EVENTS_DISABLED_EVENTS_DISABLED_Msk (0x1UL << RADIO_EVENTS_DISABLED_EVENTS_DISABLED_Pos) /*!< Bit mask of EVENTS_DISABLED field. */
#define RADIO_EVENTS_DISABLED_EVENTS_DISABLED_NotGenerated (0x0UL) /*!< Event not generated */
#define RADIO_EVENTS_DISABLED_EVENTS_DISABLED_Generated (0x1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_DEVMATCH */
/* Description: A device address match occurred on the last received packet */

/* Bit 0 : A device address match occurred on the last received packet */
#define RADIO_EVENTS_DEVMATCH_EVENTS_DEVMATCH_Pos (0UL) /*!< Position of EVENTS_DEVMATCH field. */
#define RADIO_EVENTS_DEVMATCH_EVENTS_DEVMATCH_Msk (0x1UL << RADIO_EVENTS_DEVMATCH_EVENTS_DEVMATCH_Pos) /*!< Bit mask of EVENTS_DEVMATCH field. */
#define RADIO_EVENTS_DEVMATCH_EVENTS_DEVMATCH_NotGenerated (0x0UL) /*!< Event not generated */
#define RADIO_EVENTS_DEVMATCH_EVENTS_DEVMATCH_Generated (0x1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_DEVMISS */
/* Description: No device address match occurred on the last received packet */

/* Bit 0 : No device address match occurred on the last received packet */
#define RADIO_EVENTS_DEVMISS_EVENTS_DEVMISS_Pos (0UL) /*!< Position of EVENTS_DEVMISS field. */
#define RADIO_EVENTS_DEVMISS_EVENTS_DEVMISS_Msk (0x1UL << RADIO_EVENTS_DEVMISS_EVENTS_DEVMISS_Pos) /*!< Bit mask of EVENTS_DEVMISS field. */
#define RADIO_EVENTS_DEVMISS_EVENTS_DEVMISS_NotGenerated (0x0UL) /*!< Event not generated */
#define RADIO_EVENTS_DEVMISS_EVENTS_DEVMISS_Generated (0x1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_CRCOK */
/* Description: Packet received with CRC ok */

/* Bit 0 : Packet received with CRC ok */
#define RADIO_EVENTS_CRCOK_EVENTS_CRCOK_Pos (0UL) /*!< Position of EVENTS_CRCOK field. */
#define RADIO_EVENTS_CRCOK_EVENTS_CRCOK_Msk (0x1UL << RADIO_EVENTS_CRCOK_EVENTS_CRCOK_Pos) /*!< Bit mask of EVENTS_CRCOK field. */
#define RADIO_EVENTS_CRCOK_EVENTS_CRCOK_NotGenerated (0x0UL) /*!< Event not generated */
#define RADIO_EVENTS_CRCOK_EVENTS_CRCOK_Generated (0x1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_CRCERROR */
/* Description: Packet received with CRC error */

/* Bit 0 : Packet received with CRC error */
#define RADIO_EVENTS_CRCERROR_EVENTS_CRCERROR_Pos (0UL) /*!< Position of EVENTS_CRCERROR field. */
#define RADIO_EVENTS_CRCERROR_EVENTS_CRCERROR_Msk (0x1UL << RADIO_EVENTS_CRCERROR_EVENTS_CRCERROR_Pos) /*!< Bit mask of EVENTS_CRCERROR field. */
#define RADIO_EVENTS_CRCERROR_EVENTS_CRCERROR_NotGenerated (0x0UL) /*!< Event not generated */
#define RADIO_EVENTS_CRCERROR_EVENTS_CRCERROR_Generated (0x1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_BCMATCH */
/* Description: Bit counter reached bit count value */

/* Bit 0 : Bit counter reached bit count value */
#define RADIO_EVENTS_BCMATCH_EVENTS_BCMATCH_Pos (0UL) /*!< Position of EVENTS_BCMATCH field. */
#define RADIO_EVENTS_BCMATCH_EVENTS_BCMATCH_Msk (0x1UL << RADIO_EVENTS_BCMATCH_EVENTS_BCMATCH_Pos) /*!< Bit mask of EVENTS_BCMATCH field. */
#define RADIO_EVENTS_BCMATCH_EVENTS_BCMATCH_NotGenerated (0x0UL) /*!< Event not generated */
#define RADIO_EVENTS_BCMATCH_EVENTS_BCMATCH_Generated (0x1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_EDEND */
/* Description: Sampling of energy detection complete (a new ED sample is ready for readout from the RADIO.EDSAMPLE register) */

/* Bit 0 : Sampling of energy detection complete (a new ED sample is ready for readout from the RADIO.EDSAMPLE register) */
#define RADIO_EVENTS_EDEND_EVENTS_EDEND_Pos (0UL) /*!< Position of EVENTS_EDEND field. */
#define RADIO_EVENTS_EDEND_EVENTS_EDEND_Msk (0x1UL << RADIO_EVENTS_EDEND_EVENTS_EDEND_Pos) /*!< Bit mask of EVENTS_EDEND field. */
#define RADIO_EVENTS_EDEND_EVENTS_EDEND_NotGenerated (0x0UL) /*!< Event not generated */
#define RADIO_EVENTS_EDEND_EVENTS_EDEND_Generated (0x1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_EDSTOPPED */
/* Description: The sampling of energy detection has stopped */

/* Bit 0 : The sampling of energy detection has stopped */
#define RADIO_EVENTS_EDSTOPPED_EVENTS_EDSTOPPED_Pos (0UL) /*!< Position of EVENTS_EDSTOPPED field. */
#define RADIO_EVENTS_EDSTOPPED_EVENTS_EDSTOPPED_Msk (0x1UL << RADIO_EVENTS_EDSTOPPED_EVENTS_EDSTOPPED_Pos) /*!< Bit mask of EVENTS_EDSTOPPED field. */
#define RADIO_EVENTS_EDSTOPPED_EVENTS_EDSTOPPED_NotGenerated (0x0UL) /*!< Event not generated */
#define RADIO_EVENTS_EDSTOPPED_EVENTS_EDSTOPPED_Generated (0x1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_CCAIDLE */
/* Description: Wireless medium in idle - clear to send */

/* Bit 0 : Wireless medium in idle - clear to send */
#define RADIO_EVENTS_CCAIDLE_EVENTS_CCAIDLE_Pos (0UL) /*!< Position of EVENTS_CCAIDLE field. */
#define RADIO_EVENTS_CCAIDLE_EVENTS_CCAIDLE_Msk (0x1UL << RADIO_EVENTS_CCAIDLE_EVENTS_CCAIDLE_Pos) /*!< Bit mask of EVENTS_CCAIDLE field. */
#define RADIO_EVENTS_CCAIDLE_EVENTS_CCAIDLE_NotGenerated (0x0UL) /*!< Event not generated */
#define RADIO_EVENTS_CCAIDLE_EVENTS_CCAIDLE_Generated (0x1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_CCABUSY */
/* Description: Wireless medium busy - do not send */

/* Bit 0 : Wireless medium busy - do not send */
#define RADIO_EVENTS_CCABUSY_EVENTS_CCABUSY_Pos (0UL) /*!< Position of EVENTS_CCABUSY field. */
#define RADIO_EVENTS_CCABUSY_EVENTS_CCABUSY_Msk (0x1UL << RADIO_EVENTS_CCABUSY_EVENTS_CCABUSY_Pos) /*!< Bit mask of EVENTS_CCABUSY field. */
#define RADIO_EVENTS_CCABUSY_EVENTS_CCABUSY_NotGenerated (0x0UL) /*!< Event not generated */
#define RADIO_EVENTS_CCABUSY_EVENTS_CCABUSY_Generated (0x1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_CCASTOPPED */
/* Description: The CCA has stopped */

/* Bit 0 : The CCA has stopped */
#define RADIO_EVENTS_CCASTOPPED_EVENTS_CCASTOPPED_Pos (0UL) /*!< Position of EVENTS_CCASTOPPED field. */
#define RADIO_EVENTS_CCASTOPPED_EVENTS_CCASTOPPED_Msk (0x1UL << RADIO_EVENTS_CCASTOPPED_EVENTS_CCASTOPPED_Pos) /*!< Bit mask of EVENTS_CCASTOPPED field. */
#define RADIO_EVENTS_CCASTOPPED_EVENTS_CCASTOPPED_NotGenerated (0x0UL) /*!< Event not generated */
#define RADIO_EVENTS_CCASTOPPED_EVENTS_CCASTOPPED_Generated (0x1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_RATEBOOST */
/* Description: Ble_LR CI field received, receive mode is changed from Ble_LR125Kbit to Ble_LR500Kbit */

/* Bit 0 : Ble_LR CI field received, receive mode is changed from Ble_LR125Kbit to Ble_LR500Kbit */
#define RADIO_EVENTS_RATEBOOST_EVENTS_RATEBOOST_Pos (0UL) /*!< Position of EVENTS_RATEBOOST field. */
#define RADIO_EVENTS_RATEBOOST_EVENTS_RATEBOOST_Msk (0x1UL << RADIO_EVENTS_RATEBOOST_EVENTS_RATEBOOST_Pos) /*!< Bit mask of EVENTS_RATEBOOST field. */
#define RADIO_EVENTS_RATEBOOST_EVENTS_RATEBOOST_NotGenerated (0x0UL) /*!< Event not generated */
#define RADIO_EVENTS_RATEBOOST_EVENTS_RATEBOOST_Generated (0x1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_MHRMATCH */
/* Description: MAC header match found */

/* Bit 0 : MAC header match found */
#define RADIO_EVENTS_MHRMATCH_EVENTS_MHRMATCH_Pos (0UL) /*!< Position of EVENTS_MHRMATCH field. */
#define RADIO_EVENTS_MHRMATCH_EVENTS_MHRMATCH_Msk (0x1UL << RADIO_EVENTS_MHRMATCH_EVENTS_MHRMATCH_Pos) /*!< Bit mask of EVENTS_MHRMATCH field. */
#define RADIO_EVENTS_MHRMATCH_EVENTS_MHRMATCH_NotGenerated (0x0UL) /*!< Event not generated */
#define RADIO_EVENTS_MHRMATCH_EVENTS_MHRMATCH_Generated (0x1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_SYNC */
/* Description: Initial sync detected */

/* Bit 0 : Initial sync detected */
#define RADIO_EVENTS_SYNC_EVENTS_SYNC_Pos (0UL) /*!< Position of EVENTS_SYNC field. */
#define RADIO_EVENTS_SYNC_EVENTS_SYNC_Msk (0x1UL << RADIO_EVENTS_SYNC_EVENTS_SYNC_Pos) /*!< Bit mask of EVENTS_SYNC field. */
#define RADIO_EVENTS_SYNC_EVENTS_SYNC_NotGenerated (0x0UL) /*!< Event not generated */
#define RADIO_EVENTS_SYNC_EVENTS_SYNC_Generated (0x1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_CTEPRESENT */
/* Description: CTEInfo byte is received */

/* Bit 0 : CTEInfo byte is received */
#define RADIO_EVENTS_CTEPRESENT_EVENTS_CTEPRESENT_Pos (0UL) /*!< Position of EVENTS_CTEPRESENT field. */
#define RADIO_EVENTS_CTEPRESENT_EVENTS_CTEPRESENT_Msk (0x1UL << RADIO_EVENTS_CTEPRESENT_EVENTS_CTEPRESENT_Pos) /*!< Bit mask of EVENTS_CTEPRESENT field. */
#define RADIO_EVENTS_CTEPRESENT_EVENTS_CTEPRESENT_NotGenerated (0x0UL) /*!< Event not generated */
#define RADIO_EVENTS_CTEPRESENT_EVENTS_CTEPRESENT_Generated (0x1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_CTEWARNING */
/* Description: CTEInfo byte received, but contain illegal CTETime or CTEType */

/* Bit 0 : CTEInfo byte received, but contain illegal CTETime or CTEType */
#define RADIO_EVENTS_CTEWARNING_EVENTS_CTEWARNING_Pos (0UL) /*!< Position of EVENTS_CTEWARNING field. */
#define RADIO_EVENTS_CTEWARNING_EVENTS_CTEWARNING_Msk (0x1UL << RADIO_EVENTS_CTEWARNING_EVENTS_CTEWARNING_Pos) /*!< Bit mask of EVENTS_CTEWARNING field. */
#define RADIO_EVENTS_CTEWARNING_EVENTS_CTEWARNING_NotGenerated (0x0UL) /*!< Event not generated */
#define RADIO_EVENTS_CTEWARNING_EVENTS_CTEWARNING_Generated (0x1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_DFEEND */
/* Description: DFE operation has ended */

/* Bit 0 : DFE operation has ended */
#define RADIO_EVENTS_DFEEND_EVENTS_DFEEND_Pos (0UL) /*!< Position of EVENTS_DFEEND field. */
#define RADIO_EVENTS_DFEEND_EVENTS_DFEEND_Msk (0x1UL << RADIO_EVENTS_DFEEND_EVENTS_DFEEND_Pos) /*!< Bit mask of EVENTS_DFEEND field. */
#define RADIO_EVENTS_DFEEND_EVENTS_DFEEND_NotGenerated (0x0UL) /*!< Event not generated */
#define RADIO_EVENTS_DFEEND_EVENTS_DFEEND_Generated (0x1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_MODEWRITTEN */
/* Description: Generated on write access to MODE register */

/* Bit 0 : Generated on write access to MODE register */
#define RADIO_EVENTS_MODEWRITTEN_EVENTS_MODEWRITTEN_Pos (0UL) /*!< Position of EVENTS_MODEWRITTEN field. */
#define RADIO_EVENTS_MODEWRITTEN_EVENTS_MODEWRITTEN_Msk (0x1UL << RADIO_EVENTS_MODEWRITTEN_EVENTS_MODEWRITTEN_Pos) /*!< Bit mask of EVENTS_MODEWRITTEN field. */
#define RADIO_EVENTS_MODEWRITTEN_EVENTS_MODEWRITTEN_NotGenerated (0x0UL) /*!< Event not generated */
#define RADIO_EVENTS_MODEWRITTEN_EVENTS_MODEWRITTEN_Generated (0x1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_MODEREADY */
/* Description: Generated immediately on write access to MODE register when MODEPROGENABLE==0, otherwise only manually triggered (SELECT_EVENTS_TRIGGERS=1) */

/* Bit 0 : Generated immediately on write access to MODE register when MODEPROGENABLE==0, otherwise only manually triggered (SELECT_EVENTS_TRIGGERS=1) */
#define RADIO_EVENTS_MODEREADY_EVENTS_MODEREADY_Pos (0UL) /*!< Position of EVENTS_MODEREADY field. */
#define RADIO_EVENTS_MODEREADY_EVENTS_MODEREADY_Msk (0x1UL << RADIO_EVENTS_MODEREADY_EVENTS_MODEREADY_Pos) /*!< Bit mask of EVENTS_MODEREADY field. */
#define RADIO_EVENTS_MODEREADY_EVENTS_MODEREADY_NotGenerated (0x0UL) /*!< Event not generated */
#define RADIO_EVENTS_MODEREADY_EVENTS_MODEREADY_Generated (0x1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_CTEEND */
/* Description: CTE end */

/* Bit 0 : CTE end */
#define RADIO_EVENTS_CTEEND_EVENTS_CTEEND_Pos (0UL) /*!< Position of EVENTS_CTEEND field. */
#define RADIO_EVENTS_CTEEND_EVENTS_CTEEND_Msk (0x1UL << RADIO_EVENTS_CTEEND_EVENTS_CTEEND_Pos) /*!< Bit mask of EVENTS_CTEEND field. */
#define RADIO_EVENTS_CTEEND_EVENTS_CTEEND_NotGenerated (0x0UL) /*!< Event not generated */
#define RADIO_EVENTS_CTEEND_EVENTS_CTEEND_Generated (0x1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_LBREADY */
/* Description: RADIO is ready in loopback mode and is able to transmit and receive data */

/* Bit 0 : RADIO is ready in loopback mode and is able to transmit and receive data */
#define RADIO_EVENTS_LBREADY_EVENTS_LBREADY_Pos (0UL) /*!< Position of EVENTS_LBREADY field. */
#define RADIO_EVENTS_LBREADY_EVENTS_LBREADY_Msk (0x1UL << RADIO_EVENTS_LBREADY_EVENTS_LBREADY_Pos) /*!< Bit mask of EVENTS_LBREADY field. */
#define RADIO_EVENTS_LBREADY_EVENTS_LBREADY_NotGenerated (0x0UL) /*!< Event not generated */
#define RADIO_EVENTS_LBREADY_EVENTS_LBREADY_Generated (0x1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_CALDONE */
/* Description: RADIO calibration is done */

/* Bit 0 : RADIO calibration is done */
#define RADIO_EVENTS_CALDONE_EVENTS_CALDONE_Pos (0UL) /*!< Position of EVENTS_CALDONE field. */
#define RADIO_EVENTS_CALDONE_EVENTS_CALDONE_Msk (0x1UL << RADIO_EVENTS_CALDONE_EVENTS_CALDONE_Pos) /*!< Bit mask of EVENTS_CALDONE field. */
#define RADIO_EVENTS_CALDONE_EVENTS_CALDONE_NotGenerated (0x0UL) /*!< Event not generated */
#define RADIO_EVENTS_CALDONE_EVENTS_CALDONE_Generated (0x1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_CHNOUPDATED */
/* Description: RADIO channel no. is updated */

/* Bit 0 : RADIO channel no. is updated */
#define RADIO_EVENTS_CHNOUPDATED_EVENTS_CHNOUPDATED_Pos (0UL) /*!< Position of EVENTS_CHNOUPDATED field. */
#define RADIO_EVENTS_CHNOUPDATED_EVENTS_CHNOUPDATED_Msk (0x1UL << RADIO_EVENTS_CHNOUPDATED_EVENTS_CHNOUPDATED_Pos) /*!< Bit mask of EVENTS_CHNOUPDATED field. */
#define RADIO_EVENTS_CHNOUPDATED_EVENTS_CHNOUPDATED_NotGenerated (0x0UL) /*!< Event not generated */
#define RADIO_EVENTS_CHNOUPDATED_EVENTS_CHNOUPDATED_Generated (0x1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_DBCTIMEOUT */
/* Description: DBC timeout to be able to resync */

/* Bit 0 : DBC timeout to be able to resync */
#define RADIO_EVENTS_DBCTIMEOUT_EVENTS_DBCTIMEOUT_Pos (0UL) /*!< Position of EVENTS_DBCTIMEOUT field. */
#define RADIO_EVENTS_DBCTIMEOUT_EVENTS_DBCTIMEOUT_Msk (0x1UL << RADIO_EVENTS_DBCTIMEOUT_EVENTS_DBCTIMEOUT_Pos) /*!< Bit mask of EVENTS_DBCTIMEOUT field. */
#define RADIO_EVENTS_DBCTIMEOUT_EVENTS_DBCTIMEOUT_NotGenerated (0x0UL) /*!< Event not generated */
#define RADIO_EVENTS_DBCTIMEOUT_EVENTS_DBCTIMEOUT_Generated (0x1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_TXTIMERMATCH */
/* Description: Tx timer match */

/* Bit 0 : Tx timer match */
#define RADIO_EVENTS_TXTIMERMATCH_EVENTS_TXTIMERMATCH_Pos (0UL) /*!< Position of EVENTS_TXTIMERMATCH field. */
#define RADIO_EVENTS_TXTIMERMATCH_EVENTS_TXTIMERMATCH_Msk (0x1UL << RADIO_EVENTS_TXTIMERMATCH_EVENTS_TXTIMERMATCH_Pos) /*!< Bit mask of EVENTS_TXTIMERMATCH field. */
#define RADIO_EVENTS_TXTIMERMATCH_EVENTS_TXTIMERMATCH_NotGenerated (0x0UL) /*!< Event not generated */
#define RADIO_EVENTS_TXTIMERMATCH_EVENTS_TXTIMERMATCH_Generated (0x1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_RXTIMERMATCH */
/* Description: Rx timer match */

/* Bit 0 : Rx timer match */
#define RADIO_EVENTS_RXTIMERMATCH_EVENTS_RXTIMERMATCH_Pos (0UL) /*!< Position of EVENTS_RXTIMERMATCH field. */
#define RADIO_EVENTS_RXTIMERMATCH_EVENTS_RXTIMERMATCH_Msk (0x1UL << RADIO_EVENTS_RXTIMERMATCH_EVENTS_RXTIMERMATCH_Pos) /*!< Bit mask of EVENTS_RXTIMERMATCH field. */
#define RADIO_EVENTS_RXTIMERMATCH_EVENTS_RXTIMERMATCH_NotGenerated (0x0UL) /*!< Event not generated */
#define RADIO_EVENTS_RXTIMERMATCH_EVENTS_RXTIMERMATCH_Generated (0x1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_RXDIGEN */
/* Description: RXDIGEN-signal was set high from the HW timing engine */

/* Bit 0 : RXDIGEN-signal was set high from the HW timing engine */
#define RADIO_EVENTS_RXDIGEN_EVENTS_RXDIGEN_Pos (0UL) /*!< Position of EVENTS_RXDIGEN field. */
#define RADIO_EVENTS_RXDIGEN_EVENTS_RXDIGEN_Msk (0x1UL << RADIO_EVENTS_RXDIGEN_EVENTS_RXDIGEN_Pos) /*!< Bit mask of EVENTS_RXDIGEN field. */
#define RADIO_EVENTS_RXDIGEN_EVENTS_RXDIGEN_NotGenerated (0x0UL) /*!< Event not generated */
#define RADIO_EVENTS_RXDIGEN_EVENTS_RXDIGEN_Generated (0x1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_RAWDETECT */
/* Description: The double correlator detected one peak */

/* Bit 0 : The double correlator detected one peak */
#define RADIO_EVENTS_RAWDETECT_EVENTS_RAWDETECT_Pos (0UL) /*!< Position of EVENTS_RAWDETECT field. */
#define RADIO_EVENTS_RAWDETECT_EVENTS_RAWDETECT_Msk (0x1UL << RADIO_EVENTS_RAWDETECT_EVENTS_RAWDETECT_Pos) /*!< Bit mask of EVENTS_RAWDETECT field. */
#define RADIO_EVENTS_RAWDETECT_EVENTS_RAWDETECT_NotGenerated (0x0UL) /*!< Event not generated */
#define RADIO_EVENTS_RAWDETECT_EVENTS_RAWDETECT_Generated (0x1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_DETECTFIFOFULL */
/* Description: The detect FIFO is full (this should not happen if the FIFO is sized well enough) */

/* Bit 0 : The detect FIFO is full (this should not happen if the FIFO is sized well enough) */
#define RADIO_EVENTS_DETECTFIFOFULL_EVENTS_DETECTFIFOFULL_Pos (0UL) /*!< Position of EVENTS_DETECTFIFOFULL field. */
#define RADIO_EVENTS_DETECTFIFOFULL_EVENTS_DETECTFIFOFULL_Msk (0x1UL << RADIO_EVENTS_DETECTFIFOFULL_EVENTS_DETECTFIFOFULL_Pos) /*!< Bit mask of EVENTS_DETECTFIFOFULL field. */
#define RADIO_EVENTS_DETECTFIFOFULL_EVENTS_DETECTFIFOFULL_NotGenerated (0x0UL) /*!< Event not generated */
#define RADIO_EVENTS_DETECTFIFOFULL_EVENTS_DETECTFIFOFULL_Generated (0x1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_TIMERWRAPS */
/* Description: Event triggering when the timer wraps around (this is useful if one wants to count longer than the HW timer allows) */

/* Bit 0 : Event triggering when the timer wraps around (this is useful if one wants to count longer than the HW timer allows) */
#define RADIO_EVENTS_TIMERWRAPS_EVENTS_TIMERWRAPS_Pos (0UL) /*!< Position of EVENTS_TIMERWRAPS field. */
#define RADIO_EVENTS_TIMERWRAPS_EVENTS_TIMERWRAPS_Msk (0x1UL << RADIO_EVENTS_TIMERWRAPS_EVENTS_TIMERWRAPS_Pos) /*!< Bit mask of EVENTS_TIMERWRAPS field. */
#define RADIO_EVENTS_TIMERWRAPS_EVENTS_TIMERWRAPS_NotGenerated (0x0UL) /*!< Event not generated */
#define RADIO_EVENTS_TIMERWRAPS_EVENTS_TIMERWRAPS_Generated (0x1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_STROBETIMETRACKUPDATED */
/* Description: New information from the symbol time tracker (see STROBETIMESTATUS) */

/* Bit 0 : New information from the symbol time tracker (see STROBETIMESTATUS) */
#define RADIO_EVENTS_STROBETIMETRACKUPDATED_EVENTS_STROBETIMETRACKUPDATED_Pos (0UL) /*!< Position of EVENTS_STROBETIMETRACKUPDATED field. */
#define RADIO_EVENTS_STROBETIMETRACKUPDATED_EVENTS_STROBETIMETRACKUPDATED_Msk (0x1UL << RADIO_EVENTS_STROBETIMETRACKUPDATED_EVENTS_STROBETIMETRACKUPDATED_Pos) /*!< Bit mask of EVENTS_STROBETIMETRACKUPDATED field. */
#define RADIO_EVENTS_STROBETIMETRACKUPDATED_EVENTS_STROBETIMETRACKUPDATED_NotGenerated (0x0UL) /*!< Event not generated */
#define RADIO_EVENTS_STROBETIMETRACKUPDATED_EVENTS_STROBETIMETRACKUPDATED_Generated (0x1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_DEMODCTRLCONDTRIGGERED0 */
/* Description: Condition 0 triggered and actions done */

/* Bit 0 : Condition 0 triggered and actions done */
#define RADIO_EVENTS_DEMODCTRLCONDTRIGGERED0_EVENTS_DEMODCTRLCONDTRIGGERED0_Pos (0UL) /*!< Position of EVENTS_DEMODCTRLCONDTRIGGERED0 field. */
#define RADIO_EVENTS_DEMODCTRLCONDTRIGGERED0_EVENTS_DEMODCTRLCONDTRIGGERED0_Msk (0x1UL << RADIO_EVENTS_DEMODCTRLCONDTRIGGERED0_EVENTS_DEMODCTRLCONDTRIGGERED0_Pos) /*!< Bit mask of EVENTS_DEMODCTRLCONDTRIGGERED0 field. */
#define RADIO_EVENTS_DEMODCTRLCONDTRIGGERED0_EVENTS_DEMODCTRLCONDTRIGGERED0_NotGenerated (0x0UL) /*!< Event not generated */
#define RADIO_EVENTS_DEMODCTRLCONDTRIGGERED0_EVENTS_DEMODCTRLCONDTRIGGERED0_Generated (0x1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_DEMODCTRLCONDTRIGGERED1 */
/* Description: Condition 1 triggered and actions done */

/* Bit 0 : Condition 1 triggered and actions done */
#define RADIO_EVENTS_DEMODCTRLCONDTRIGGERED1_EVENTS_DEMODCTRLCONDTRIGGERED1_Pos (0UL) /*!< Position of EVENTS_DEMODCTRLCONDTRIGGERED1 field. */
#define RADIO_EVENTS_DEMODCTRLCONDTRIGGERED1_EVENTS_DEMODCTRLCONDTRIGGERED1_Msk (0x1UL << RADIO_EVENTS_DEMODCTRLCONDTRIGGERED1_EVENTS_DEMODCTRLCONDTRIGGERED1_Pos) /*!< Bit mask of EVENTS_DEMODCTRLCONDTRIGGERED1 field. */
#define RADIO_EVENTS_DEMODCTRLCONDTRIGGERED1_EVENTS_DEMODCTRLCONDTRIGGERED1_NotGenerated (0x0UL) /*!< Event not generated */
#define RADIO_EVENTS_DEMODCTRLCONDTRIGGERED1_EVENTS_DEMODCTRLCONDTRIGGERED1_Generated (0x1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_DEMODCTRLCONDTRIGGERED2 */
/* Description: Condition 2 triggered and actions done */

/* Bit 0 : Condition 2 triggered and actions done */
#define RADIO_EVENTS_DEMODCTRLCONDTRIGGERED2_EVENTS_DEMODCTRLCONDTRIGGERED2_Pos (0UL) /*!< Position of EVENTS_DEMODCTRLCONDTRIGGERED2 field. */
#define RADIO_EVENTS_DEMODCTRLCONDTRIGGERED2_EVENTS_DEMODCTRLCONDTRIGGERED2_Msk (0x1UL << RADIO_EVENTS_DEMODCTRLCONDTRIGGERED2_EVENTS_DEMODCTRLCONDTRIGGERED2_Pos) /*!< Bit mask of EVENTS_DEMODCTRLCONDTRIGGERED2 field. */
#define RADIO_EVENTS_DEMODCTRLCONDTRIGGERED2_EVENTS_DEMODCTRLCONDTRIGGERED2_NotGenerated (0x0UL) /*!< Event not generated */
#define RADIO_EVENTS_DEMODCTRLCONDTRIGGERED2_EVENTS_DEMODCTRLCONDTRIGGERED2_Generated (0x1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_INTERCEPTEDTASK */
/* Description: A task has been intercepted (this event is non-interceptable) */

/* Bit 0 : A task has been intercepted (this event is non-interceptable) */
#define RADIO_EVENTS_INTERCEPTEDTASK_EVENTS_INTERCEPTEDTASK_Pos (0UL) /*!< Position of EVENTS_INTERCEPTEDTASK field. */
#define RADIO_EVENTS_INTERCEPTEDTASK_EVENTS_INTERCEPTEDTASK_Msk (0x1UL << RADIO_EVENTS_INTERCEPTEDTASK_EVENTS_INTERCEPTEDTASK_Pos) /*!< Bit mask of EVENTS_INTERCEPTEDTASK field. */
#define RADIO_EVENTS_INTERCEPTEDTASK_EVENTS_INTERCEPTEDTASK_NotGenerated (0x0UL) /*!< Event not generated */
#define RADIO_EVENTS_INTERCEPTEDTASK_EVENTS_INTERCEPTEDTASK_Generated (0x1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_INTERCEPTEDEVENT */
/* Description: An event has been intercepted (this event is non-interceptable) */

/* Bit 0 : An event has been intercepted (this event is non-interceptable) */
#define RADIO_EVENTS_INTERCEPTEDEVENT_EVENTS_INTERCEPTEDEVENT_Pos (0UL) /*!< Position of EVENTS_INTERCEPTEDEVENT field. */
#define RADIO_EVENTS_INTERCEPTEDEVENT_EVENTS_INTERCEPTEDEVENT_Msk (0x1UL << RADIO_EVENTS_INTERCEPTEDEVENT_EVENTS_INTERCEPTEDEVENT_Pos) /*!< Bit mask of EVENTS_INTERCEPTEDEVENT field. */
#define RADIO_EVENTS_INTERCEPTEDEVENT_EVENTS_INTERCEPTEDEVENT_NotGenerated (0x0UL) /*!< Event not generated */
#define RADIO_EVENTS_INTERCEPTEDEVENT_EVENTS_INTERCEPTEDEVENT_Generated (0x1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_ACQINJ0DMAEND */
/* Description: ACQINJ0 DMA end */

/* Bit 0 : ACQINJ0 DMA end */
#define RADIO_EVENTS_ACQINJ0DMAEND_EVENTS_ACQINJ0DMAEND_Pos (0UL) /*!< Position of EVENTS_ACQINJ0DMAEND field. */
#define RADIO_EVENTS_ACQINJ0DMAEND_EVENTS_ACQINJ0DMAEND_Msk (0x1UL << RADIO_EVENTS_ACQINJ0DMAEND_EVENTS_ACQINJ0DMAEND_Pos) /*!< Bit mask of EVENTS_ACQINJ0DMAEND field. */
#define RADIO_EVENTS_ACQINJ0DMAEND_EVENTS_ACQINJ0DMAEND_NotGenerated (0x0UL) /*!< Event not generated */
#define RADIO_EVENTS_ACQINJ0DMAEND_EVENTS_ACQINJ0DMAEND_Generated (0x1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_ACQINJ1DMAEND */
/* Description: ACQINJ1 DMA end */

/* Bit 0 : ACQINJ1 DMA end */
#define RADIO_EVENTS_ACQINJ1DMAEND_EVENTS_ACQINJ1DMAEND_Pos (0UL) /*!< Position of EVENTS_ACQINJ1DMAEND field. */
#define RADIO_EVENTS_ACQINJ1DMAEND_EVENTS_ACQINJ1DMAEND_Msk (0x1UL << RADIO_EVENTS_ACQINJ1DMAEND_EVENTS_ACQINJ1DMAEND_Pos) /*!< Bit mask of EVENTS_ACQINJ1DMAEND field. */
#define RADIO_EVENTS_ACQINJ1DMAEND_EVENTS_ACQINJ1DMAEND_NotGenerated (0x0UL) /*!< Event not generated */
#define RADIO_EVENTS_ACQINJ1DMAEND_EVENTS_ACQINJ1DMAEND_Generated (0x1UL) /*!< Event generated */

/* Register: RADIO_PUBLISH_READY */
/* Description: Publish configuration for event READY */

/* Bit 31 :   */
#define RADIO_PUBLISH_READY_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_PUBLISH_READY_EN_Msk (0x1UL << RADIO_PUBLISH_READY_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_PUBLISH_READY_EN_Disabled (0x0UL) /*!< Disable publishing */
#define RADIO_PUBLISH_READY_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event READY will publish to */
#define RADIO_PUBLISH_READY_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_PUBLISH_READY_CHIDX_Msk (0xFFUL << RADIO_PUBLISH_READY_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_PUBLISH_TXREADY */
/* Description: Publish configuration for event TXREADY */

/* Bit 31 :   */
#define RADIO_PUBLISH_TXREADY_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_PUBLISH_TXREADY_EN_Msk (0x1UL << RADIO_PUBLISH_TXREADY_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_PUBLISH_TXREADY_EN_Disabled (0x0UL) /*!< Disable publishing */
#define RADIO_PUBLISH_TXREADY_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event TXREADY will publish to */
#define RADIO_PUBLISH_TXREADY_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_PUBLISH_TXREADY_CHIDX_Msk (0xFFUL << RADIO_PUBLISH_TXREADY_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_PUBLISH_RXREADY */
/* Description: Publish configuration for event RXREADY */

/* Bit 31 :   */
#define RADIO_PUBLISH_RXREADY_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_PUBLISH_RXREADY_EN_Msk (0x1UL << RADIO_PUBLISH_RXREADY_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_PUBLISH_RXREADY_EN_Disabled (0x0UL) /*!< Disable publishing */
#define RADIO_PUBLISH_RXREADY_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event RXREADY will publish to */
#define RADIO_PUBLISH_RXREADY_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_PUBLISH_RXREADY_CHIDX_Msk (0xFFUL << RADIO_PUBLISH_RXREADY_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_PUBLISH_ADDRESS */
/* Description: Publish configuration for event ADDRESS */

/* Bit 31 :   */
#define RADIO_PUBLISH_ADDRESS_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_PUBLISH_ADDRESS_EN_Msk (0x1UL << RADIO_PUBLISH_ADDRESS_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_PUBLISH_ADDRESS_EN_Disabled (0x0UL) /*!< Disable publishing */
#define RADIO_PUBLISH_ADDRESS_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event ADDRESS will publish to */
#define RADIO_PUBLISH_ADDRESS_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_PUBLISH_ADDRESS_CHIDX_Msk (0xFFUL << RADIO_PUBLISH_ADDRESS_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_PUBLISH_FRAMESTART */
/* Description: Publish configuration for event FRAMESTART */

/* Bit 31 :   */
#define RADIO_PUBLISH_FRAMESTART_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_PUBLISH_FRAMESTART_EN_Msk (0x1UL << RADIO_PUBLISH_FRAMESTART_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_PUBLISH_FRAMESTART_EN_Disabled (0x0UL) /*!< Disable publishing */
#define RADIO_PUBLISH_FRAMESTART_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event FRAMESTART will publish to */
#define RADIO_PUBLISH_FRAMESTART_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_PUBLISH_FRAMESTART_CHIDX_Msk (0xFFUL << RADIO_PUBLISH_FRAMESTART_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_PUBLISH_PAYLOAD */
/* Description: Publish configuration for event PAYLOAD */

/* Bit 31 :   */
#define RADIO_PUBLISH_PAYLOAD_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_PUBLISH_PAYLOAD_EN_Msk (0x1UL << RADIO_PUBLISH_PAYLOAD_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_PUBLISH_PAYLOAD_EN_Disabled (0x0UL) /*!< Disable publishing */
#define RADIO_PUBLISH_PAYLOAD_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event PAYLOAD will publish to */
#define RADIO_PUBLISH_PAYLOAD_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_PUBLISH_PAYLOAD_CHIDX_Msk (0xFFUL << RADIO_PUBLISH_PAYLOAD_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_PUBLISH_END */
/* Description: Publish configuration for event END */

/* Bit 31 :   */
#define RADIO_PUBLISH_END_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_PUBLISH_END_EN_Msk (0x1UL << RADIO_PUBLISH_END_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_PUBLISH_END_EN_Disabled (0x0UL) /*!< Disable publishing */
#define RADIO_PUBLISH_END_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event END will publish to */
#define RADIO_PUBLISH_END_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_PUBLISH_END_CHIDX_Msk (0xFFUL << RADIO_PUBLISH_END_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_PUBLISH_PHYEND */
/* Description: Publish configuration for event PHYEND */

/* Bit 31 :   */
#define RADIO_PUBLISH_PHYEND_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_PUBLISH_PHYEND_EN_Msk (0x1UL << RADIO_PUBLISH_PHYEND_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_PUBLISH_PHYEND_EN_Disabled (0x0UL) /*!< Disable publishing */
#define RADIO_PUBLISH_PHYEND_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event PHYEND will publish to */
#define RADIO_PUBLISH_PHYEND_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_PUBLISH_PHYEND_CHIDX_Msk (0xFFUL << RADIO_PUBLISH_PHYEND_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_PUBLISH_DISABLED */
/* Description: Publish configuration for event DISABLED */

/* Bit 31 :   */
#define RADIO_PUBLISH_DISABLED_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_PUBLISH_DISABLED_EN_Msk (0x1UL << RADIO_PUBLISH_DISABLED_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_PUBLISH_DISABLED_EN_Disabled (0x0UL) /*!< Disable publishing */
#define RADIO_PUBLISH_DISABLED_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event DISABLED will publish to */
#define RADIO_PUBLISH_DISABLED_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_PUBLISH_DISABLED_CHIDX_Msk (0xFFUL << RADIO_PUBLISH_DISABLED_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_PUBLISH_DEVMATCH */
/* Description: Publish configuration for event DEVMATCH */

/* Bit 31 :   */
#define RADIO_PUBLISH_DEVMATCH_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_PUBLISH_DEVMATCH_EN_Msk (0x1UL << RADIO_PUBLISH_DEVMATCH_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_PUBLISH_DEVMATCH_EN_Disabled (0x0UL) /*!< Disable publishing */
#define RADIO_PUBLISH_DEVMATCH_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event DEVMATCH will publish to */
#define RADIO_PUBLISH_DEVMATCH_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_PUBLISH_DEVMATCH_CHIDX_Msk (0xFFUL << RADIO_PUBLISH_DEVMATCH_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_PUBLISH_DEVMISS */
/* Description: Publish configuration for event DEVMISS */

/* Bit 31 :   */
#define RADIO_PUBLISH_DEVMISS_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_PUBLISH_DEVMISS_EN_Msk (0x1UL << RADIO_PUBLISH_DEVMISS_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_PUBLISH_DEVMISS_EN_Disabled (0x0UL) /*!< Disable publishing */
#define RADIO_PUBLISH_DEVMISS_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event DEVMISS will publish to */
#define RADIO_PUBLISH_DEVMISS_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_PUBLISH_DEVMISS_CHIDX_Msk (0xFFUL << RADIO_PUBLISH_DEVMISS_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_PUBLISH_CRCOK */
/* Description: Publish configuration for event CRCOK */

/* Bit 31 :   */
#define RADIO_PUBLISH_CRCOK_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_PUBLISH_CRCOK_EN_Msk (0x1UL << RADIO_PUBLISH_CRCOK_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_PUBLISH_CRCOK_EN_Disabled (0x0UL) /*!< Disable publishing */
#define RADIO_PUBLISH_CRCOK_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event CRCOK will publish to */
#define RADIO_PUBLISH_CRCOK_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_PUBLISH_CRCOK_CHIDX_Msk (0xFFUL << RADIO_PUBLISH_CRCOK_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_PUBLISH_CRCERROR */
/* Description: Publish configuration for event CRCERROR */

/* Bit 31 :   */
#define RADIO_PUBLISH_CRCERROR_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_PUBLISH_CRCERROR_EN_Msk (0x1UL << RADIO_PUBLISH_CRCERROR_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_PUBLISH_CRCERROR_EN_Disabled (0x0UL) /*!< Disable publishing */
#define RADIO_PUBLISH_CRCERROR_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event CRCERROR will publish to */
#define RADIO_PUBLISH_CRCERROR_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_PUBLISH_CRCERROR_CHIDX_Msk (0xFFUL << RADIO_PUBLISH_CRCERROR_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_PUBLISH_BCMATCH */
/* Description: Publish configuration for event BCMATCH */

/* Bit 31 :   */
#define RADIO_PUBLISH_BCMATCH_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_PUBLISH_BCMATCH_EN_Msk (0x1UL << RADIO_PUBLISH_BCMATCH_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_PUBLISH_BCMATCH_EN_Disabled (0x0UL) /*!< Disable publishing */
#define RADIO_PUBLISH_BCMATCH_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event BCMATCH will publish to */
#define RADIO_PUBLISH_BCMATCH_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_PUBLISH_BCMATCH_CHIDX_Msk (0xFFUL << RADIO_PUBLISH_BCMATCH_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_PUBLISH_EDEND */
/* Description: Publish configuration for event EDEND */

/* Bit 31 :   */
#define RADIO_PUBLISH_EDEND_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_PUBLISH_EDEND_EN_Msk (0x1UL << RADIO_PUBLISH_EDEND_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_PUBLISH_EDEND_EN_Disabled (0x0UL) /*!< Disable publishing */
#define RADIO_PUBLISH_EDEND_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event EDEND will publish to */
#define RADIO_PUBLISH_EDEND_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_PUBLISH_EDEND_CHIDX_Msk (0xFFUL << RADIO_PUBLISH_EDEND_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_PUBLISH_EDSTOPPED */
/* Description: Publish configuration for event EDSTOPPED */

/* Bit 31 :   */
#define RADIO_PUBLISH_EDSTOPPED_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_PUBLISH_EDSTOPPED_EN_Msk (0x1UL << RADIO_PUBLISH_EDSTOPPED_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_PUBLISH_EDSTOPPED_EN_Disabled (0x0UL) /*!< Disable publishing */
#define RADIO_PUBLISH_EDSTOPPED_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event EDSTOPPED will publish to */
#define RADIO_PUBLISH_EDSTOPPED_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_PUBLISH_EDSTOPPED_CHIDX_Msk (0xFFUL << RADIO_PUBLISH_EDSTOPPED_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_PUBLISH_CCAIDLE */
/* Description: Publish configuration for event CCAIDLE */

/* Bit 31 :   */
#define RADIO_PUBLISH_CCAIDLE_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_PUBLISH_CCAIDLE_EN_Msk (0x1UL << RADIO_PUBLISH_CCAIDLE_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_PUBLISH_CCAIDLE_EN_Disabled (0x0UL) /*!< Disable publishing */
#define RADIO_PUBLISH_CCAIDLE_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event CCAIDLE will publish to */
#define RADIO_PUBLISH_CCAIDLE_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_PUBLISH_CCAIDLE_CHIDX_Msk (0xFFUL << RADIO_PUBLISH_CCAIDLE_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_PUBLISH_CCABUSY */
/* Description: Publish configuration for event CCABUSY */

/* Bit 31 :   */
#define RADIO_PUBLISH_CCABUSY_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_PUBLISH_CCABUSY_EN_Msk (0x1UL << RADIO_PUBLISH_CCABUSY_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_PUBLISH_CCABUSY_EN_Disabled (0x0UL) /*!< Disable publishing */
#define RADIO_PUBLISH_CCABUSY_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event CCABUSY will publish to */
#define RADIO_PUBLISH_CCABUSY_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_PUBLISH_CCABUSY_CHIDX_Msk (0xFFUL << RADIO_PUBLISH_CCABUSY_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_PUBLISH_CCASTOPPED */
/* Description: Publish configuration for event CCASTOPPED */

/* Bit 31 :   */
#define RADIO_PUBLISH_CCASTOPPED_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_PUBLISH_CCASTOPPED_EN_Msk (0x1UL << RADIO_PUBLISH_CCASTOPPED_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_PUBLISH_CCASTOPPED_EN_Disabled (0x0UL) /*!< Disable publishing */
#define RADIO_PUBLISH_CCASTOPPED_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event CCASTOPPED will publish to */
#define RADIO_PUBLISH_CCASTOPPED_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_PUBLISH_CCASTOPPED_CHIDX_Msk (0xFFUL << RADIO_PUBLISH_CCASTOPPED_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_PUBLISH_RATEBOOST */
/* Description: Publish configuration for event RATEBOOST */

/* Bit 31 :   */
#define RADIO_PUBLISH_RATEBOOST_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_PUBLISH_RATEBOOST_EN_Msk (0x1UL << RADIO_PUBLISH_RATEBOOST_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_PUBLISH_RATEBOOST_EN_Disabled (0x0UL) /*!< Disable publishing */
#define RADIO_PUBLISH_RATEBOOST_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event RATEBOOST will publish to */
#define RADIO_PUBLISH_RATEBOOST_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_PUBLISH_RATEBOOST_CHIDX_Msk (0xFFUL << RADIO_PUBLISH_RATEBOOST_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_PUBLISH_MHRMATCH */
/* Description: Publish configuration for event MHRMATCH */

/* Bit 31 :   */
#define RADIO_PUBLISH_MHRMATCH_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_PUBLISH_MHRMATCH_EN_Msk (0x1UL << RADIO_PUBLISH_MHRMATCH_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_PUBLISH_MHRMATCH_EN_Disabled (0x0UL) /*!< Disable publishing */
#define RADIO_PUBLISH_MHRMATCH_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event MHRMATCH will publish to */
#define RADIO_PUBLISH_MHRMATCH_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_PUBLISH_MHRMATCH_CHIDX_Msk (0xFFUL << RADIO_PUBLISH_MHRMATCH_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_PUBLISH_SYNC */
/* Description: Publish configuration for event SYNC */

/* Bit 31 :   */
#define RADIO_PUBLISH_SYNC_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_PUBLISH_SYNC_EN_Msk (0x1UL << RADIO_PUBLISH_SYNC_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_PUBLISH_SYNC_EN_Disabled (0x0UL) /*!< Disable publishing */
#define RADIO_PUBLISH_SYNC_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event SYNC will publish to */
#define RADIO_PUBLISH_SYNC_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_PUBLISH_SYNC_CHIDX_Msk (0xFFUL << RADIO_PUBLISH_SYNC_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_PUBLISH_CTEPRESENT */
/* Description: Publish configuration for event CTEPRESENT */

/* Bit 31 :   */
#define RADIO_PUBLISH_CTEPRESENT_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_PUBLISH_CTEPRESENT_EN_Msk (0x1UL << RADIO_PUBLISH_CTEPRESENT_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_PUBLISH_CTEPRESENT_EN_Disabled (0x0UL) /*!< Disable publishing */
#define RADIO_PUBLISH_CTEPRESENT_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event CTEPRESENT will publish to */
#define RADIO_PUBLISH_CTEPRESENT_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_PUBLISH_CTEPRESENT_CHIDX_Msk (0xFFUL << RADIO_PUBLISH_CTEPRESENT_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_PUBLISH_CTEWARNING */
/* Description: Publish configuration for event CTEWARNING */

/* Bit 31 :   */
#define RADIO_PUBLISH_CTEWARNING_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_PUBLISH_CTEWARNING_EN_Msk (0x1UL << RADIO_PUBLISH_CTEWARNING_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_PUBLISH_CTEWARNING_EN_Disabled (0x0UL) /*!< Disable publishing */
#define RADIO_PUBLISH_CTEWARNING_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event CTEWARNING will publish to */
#define RADIO_PUBLISH_CTEWARNING_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_PUBLISH_CTEWARNING_CHIDX_Msk (0xFFUL << RADIO_PUBLISH_CTEWARNING_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_PUBLISH_DFEEND */
/* Description: Publish configuration for event DFEEND */

/* Bit 31 :   */
#define RADIO_PUBLISH_DFEEND_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_PUBLISH_DFEEND_EN_Msk (0x1UL << RADIO_PUBLISH_DFEEND_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_PUBLISH_DFEEND_EN_Disabled (0x0UL) /*!< Disable publishing */
#define RADIO_PUBLISH_DFEEND_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event DFEEND will publish to */
#define RADIO_PUBLISH_DFEEND_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_PUBLISH_DFEEND_CHIDX_Msk (0xFFUL << RADIO_PUBLISH_DFEEND_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_PUBLISH_MODEWRITTEN */
/* Description: Publish configuration for event MODEWRITTEN */

/* Bit 31 :   */
#define RADIO_PUBLISH_MODEWRITTEN_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_PUBLISH_MODEWRITTEN_EN_Msk (0x1UL << RADIO_PUBLISH_MODEWRITTEN_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_PUBLISH_MODEWRITTEN_EN_Disabled (0x0UL) /*!< Disable publishing */
#define RADIO_PUBLISH_MODEWRITTEN_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event MODEWRITTEN will publish to */
#define RADIO_PUBLISH_MODEWRITTEN_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_PUBLISH_MODEWRITTEN_CHIDX_Msk (0xFFUL << RADIO_PUBLISH_MODEWRITTEN_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_PUBLISH_MODEREADY */
/* Description: Publish configuration for event MODEREADY */

/* Bit 31 :   */
#define RADIO_PUBLISH_MODEREADY_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_PUBLISH_MODEREADY_EN_Msk (0x1UL << RADIO_PUBLISH_MODEREADY_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_PUBLISH_MODEREADY_EN_Disabled (0x0UL) /*!< Disable publishing */
#define RADIO_PUBLISH_MODEREADY_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event MODEREADY will publish to */
#define RADIO_PUBLISH_MODEREADY_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_PUBLISH_MODEREADY_CHIDX_Msk (0xFFUL << RADIO_PUBLISH_MODEREADY_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_PUBLISH_CTEEND */
/* Description: Publish configuration for event CTEEND */

/* Bit 31 :   */
#define RADIO_PUBLISH_CTEEND_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_PUBLISH_CTEEND_EN_Msk (0x1UL << RADIO_PUBLISH_CTEEND_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_PUBLISH_CTEEND_EN_Disabled (0x0UL) /*!< Disable publishing */
#define RADIO_PUBLISH_CTEEND_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event CTEEND will publish to */
#define RADIO_PUBLISH_CTEEND_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_PUBLISH_CTEEND_CHIDX_Msk (0xFFUL << RADIO_PUBLISH_CTEEND_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_PUBLISH_LBREADY */
/* Description: Publish configuration for event LBREADY */

/* Bit 31 :   */
#define RADIO_PUBLISH_LBREADY_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_PUBLISH_LBREADY_EN_Msk (0x1UL << RADIO_PUBLISH_LBREADY_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_PUBLISH_LBREADY_EN_Disabled (0x0UL) /*!< Disable publishing */
#define RADIO_PUBLISH_LBREADY_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event LBREADY will publish to */
#define RADIO_PUBLISH_LBREADY_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_PUBLISH_LBREADY_CHIDX_Msk (0xFFUL << RADIO_PUBLISH_LBREADY_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_PUBLISH_CALDONE */
/* Description: Publish configuration for event CALDONE */

/* Bit 31 :   */
#define RADIO_PUBLISH_CALDONE_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_PUBLISH_CALDONE_EN_Msk (0x1UL << RADIO_PUBLISH_CALDONE_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_PUBLISH_CALDONE_EN_Disabled (0x0UL) /*!< Disable publishing */
#define RADIO_PUBLISH_CALDONE_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event CALDONE will publish to */
#define RADIO_PUBLISH_CALDONE_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_PUBLISH_CALDONE_CHIDX_Msk (0xFFUL << RADIO_PUBLISH_CALDONE_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_PUBLISH_CHNOUPDATED */
/* Description: Publish configuration for event CHNOUPDATED */

/* Bit 31 :   */
#define RADIO_PUBLISH_CHNOUPDATED_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_PUBLISH_CHNOUPDATED_EN_Msk (0x1UL << RADIO_PUBLISH_CHNOUPDATED_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_PUBLISH_CHNOUPDATED_EN_Disabled (0x0UL) /*!< Disable publishing */
#define RADIO_PUBLISH_CHNOUPDATED_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event CHNOUPDATED will publish to */
#define RADIO_PUBLISH_CHNOUPDATED_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_PUBLISH_CHNOUPDATED_CHIDX_Msk (0xFFUL << RADIO_PUBLISH_CHNOUPDATED_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_PUBLISH_DBCTIMEOUT */
/* Description: Publish configuration for event DBCTIMEOUT */

/* Bit 31 :   */
#define RADIO_PUBLISH_DBCTIMEOUT_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_PUBLISH_DBCTIMEOUT_EN_Msk (0x1UL << RADIO_PUBLISH_DBCTIMEOUT_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_PUBLISH_DBCTIMEOUT_EN_Disabled (0x0UL) /*!< Disable publishing */
#define RADIO_PUBLISH_DBCTIMEOUT_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event DBCTIMEOUT will publish to */
#define RADIO_PUBLISH_DBCTIMEOUT_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_PUBLISH_DBCTIMEOUT_CHIDX_Msk (0xFFUL << RADIO_PUBLISH_DBCTIMEOUT_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_PUBLISH_TXTIMERMATCH */
/* Description: Publish configuration for event TXTIMERMATCH */

/* Bit 31 :   */
#define RADIO_PUBLISH_TXTIMERMATCH_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_PUBLISH_TXTIMERMATCH_EN_Msk (0x1UL << RADIO_PUBLISH_TXTIMERMATCH_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_PUBLISH_TXTIMERMATCH_EN_Disabled (0x0UL) /*!< Disable publishing */
#define RADIO_PUBLISH_TXTIMERMATCH_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event TXTIMERMATCH will publish to */
#define RADIO_PUBLISH_TXTIMERMATCH_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_PUBLISH_TXTIMERMATCH_CHIDX_Msk (0xFFUL << RADIO_PUBLISH_TXTIMERMATCH_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_PUBLISH_RXTIMERMATCH */
/* Description: Publish configuration for event RXTIMERMATCH */

/* Bit 31 :   */
#define RADIO_PUBLISH_RXTIMERMATCH_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_PUBLISH_RXTIMERMATCH_EN_Msk (0x1UL << RADIO_PUBLISH_RXTIMERMATCH_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_PUBLISH_RXTIMERMATCH_EN_Disabled (0x0UL) /*!< Disable publishing */
#define RADIO_PUBLISH_RXTIMERMATCH_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event RXTIMERMATCH will publish to */
#define RADIO_PUBLISH_RXTIMERMATCH_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_PUBLISH_RXTIMERMATCH_CHIDX_Msk (0xFFUL << RADIO_PUBLISH_RXTIMERMATCH_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_PUBLISH_RXDIGEN */
/* Description: Publish configuration for event RXDIGEN */

/* Bit 31 :   */
#define RADIO_PUBLISH_RXDIGEN_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_PUBLISH_RXDIGEN_EN_Msk (0x1UL << RADIO_PUBLISH_RXDIGEN_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_PUBLISH_RXDIGEN_EN_Disabled (0x0UL) /*!< Disable publishing */
#define RADIO_PUBLISH_RXDIGEN_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event RXDIGEN will publish to */
#define RADIO_PUBLISH_RXDIGEN_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_PUBLISH_RXDIGEN_CHIDX_Msk (0xFFUL << RADIO_PUBLISH_RXDIGEN_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_PUBLISH_RAWDETECT */
/* Description: Publish configuration for event RAWDETECT */

/* Bit 31 :   */
#define RADIO_PUBLISH_RAWDETECT_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_PUBLISH_RAWDETECT_EN_Msk (0x1UL << RADIO_PUBLISH_RAWDETECT_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_PUBLISH_RAWDETECT_EN_Disabled (0x0UL) /*!< Disable publishing */
#define RADIO_PUBLISH_RAWDETECT_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event RAWDETECT will publish to */
#define RADIO_PUBLISH_RAWDETECT_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_PUBLISH_RAWDETECT_CHIDX_Msk (0xFFUL << RADIO_PUBLISH_RAWDETECT_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_PUBLISH_DETECTFIFOFULL */
/* Description: Publish configuration for event DETECTFIFOFULL */

/* Bit 31 :   */
#define RADIO_PUBLISH_DETECTFIFOFULL_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_PUBLISH_DETECTFIFOFULL_EN_Msk (0x1UL << RADIO_PUBLISH_DETECTFIFOFULL_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_PUBLISH_DETECTFIFOFULL_EN_Disabled (0x0UL) /*!< Disable publishing */
#define RADIO_PUBLISH_DETECTFIFOFULL_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event DETECTFIFOFULL will publish to */
#define RADIO_PUBLISH_DETECTFIFOFULL_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_PUBLISH_DETECTFIFOFULL_CHIDX_Msk (0xFFUL << RADIO_PUBLISH_DETECTFIFOFULL_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_PUBLISH_TIMERWRAPS */
/* Description: Publish configuration for event TIMERWRAPS */

/* Bit 31 :   */
#define RADIO_PUBLISH_TIMERWRAPS_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_PUBLISH_TIMERWRAPS_EN_Msk (0x1UL << RADIO_PUBLISH_TIMERWRAPS_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_PUBLISH_TIMERWRAPS_EN_Disabled (0x0UL) /*!< Disable publishing */
#define RADIO_PUBLISH_TIMERWRAPS_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event TIMERWRAPS will publish to */
#define RADIO_PUBLISH_TIMERWRAPS_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_PUBLISH_TIMERWRAPS_CHIDX_Msk (0xFFUL << RADIO_PUBLISH_TIMERWRAPS_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_PUBLISH_STROBETIMETRACKUPDATED */
/* Description: Publish configuration for event STROBETIMETRACKUPDATED */

/* Bit 31 :   */
#define RADIO_PUBLISH_STROBETIMETRACKUPDATED_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_PUBLISH_STROBETIMETRACKUPDATED_EN_Msk (0x1UL << RADIO_PUBLISH_STROBETIMETRACKUPDATED_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_PUBLISH_STROBETIMETRACKUPDATED_EN_Disabled (0x0UL) /*!< Disable publishing */
#define RADIO_PUBLISH_STROBETIMETRACKUPDATED_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event STROBETIMETRACKUPDATED will publish to */
#define RADIO_PUBLISH_STROBETIMETRACKUPDATED_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_PUBLISH_STROBETIMETRACKUPDATED_CHIDX_Msk (0xFFUL << RADIO_PUBLISH_STROBETIMETRACKUPDATED_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_PUBLISH_DEMODCTRLCONDTRIGGERED0 */
/* Description: Publish configuration for event DEMODCTRLCONDTRIGGERED0 */

/* Bit 31 :   */
#define RADIO_PUBLISH_DEMODCTRLCONDTRIGGERED0_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_PUBLISH_DEMODCTRLCONDTRIGGERED0_EN_Msk (0x1UL << RADIO_PUBLISH_DEMODCTRLCONDTRIGGERED0_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_PUBLISH_DEMODCTRLCONDTRIGGERED0_EN_Disabled (0x0UL) /*!< Disable publishing */
#define RADIO_PUBLISH_DEMODCTRLCONDTRIGGERED0_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event DEMODCTRLCONDTRIGGERED0 will publish to */
#define RADIO_PUBLISH_DEMODCTRLCONDTRIGGERED0_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_PUBLISH_DEMODCTRLCONDTRIGGERED0_CHIDX_Msk (0xFFUL << RADIO_PUBLISH_DEMODCTRLCONDTRIGGERED0_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_PUBLISH_DEMODCTRLCONDTRIGGERED1 */
/* Description: Publish configuration for event DEMODCTRLCONDTRIGGERED1 */

/* Bit 31 :   */
#define RADIO_PUBLISH_DEMODCTRLCONDTRIGGERED1_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_PUBLISH_DEMODCTRLCONDTRIGGERED1_EN_Msk (0x1UL << RADIO_PUBLISH_DEMODCTRLCONDTRIGGERED1_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_PUBLISH_DEMODCTRLCONDTRIGGERED1_EN_Disabled (0x0UL) /*!< Disable publishing */
#define RADIO_PUBLISH_DEMODCTRLCONDTRIGGERED1_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event DEMODCTRLCONDTRIGGERED1 will publish to */
#define RADIO_PUBLISH_DEMODCTRLCONDTRIGGERED1_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_PUBLISH_DEMODCTRLCONDTRIGGERED1_CHIDX_Msk (0xFFUL << RADIO_PUBLISH_DEMODCTRLCONDTRIGGERED1_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_PUBLISH_DEMODCTRLCONDTRIGGERED2 */
/* Description: Publish configuration for event DEMODCTRLCONDTRIGGERED2 */

/* Bit 31 :   */
#define RADIO_PUBLISH_DEMODCTRLCONDTRIGGERED2_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_PUBLISH_DEMODCTRLCONDTRIGGERED2_EN_Msk (0x1UL << RADIO_PUBLISH_DEMODCTRLCONDTRIGGERED2_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_PUBLISH_DEMODCTRLCONDTRIGGERED2_EN_Disabled (0x0UL) /*!< Disable publishing */
#define RADIO_PUBLISH_DEMODCTRLCONDTRIGGERED2_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event DEMODCTRLCONDTRIGGERED2 will publish to */
#define RADIO_PUBLISH_DEMODCTRLCONDTRIGGERED2_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_PUBLISH_DEMODCTRLCONDTRIGGERED2_CHIDX_Msk (0xFFUL << RADIO_PUBLISH_DEMODCTRLCONDTRIGGERED2_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_PUBLISH_INTERCEPTEDTASK */
/* Description: Publish configuration for event INTERCEPTEDTASK */

/* Bit 31 :   */
#define RADIO_PUBLISH_INTERCEPTEDTASK_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_PUBLISH_INTERCEPTEDTASK_EN_Msk (0x1UL << RADIO_PUBLISH_INTERCEPTEDTASK_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_PUBLISH_INTERCEPTEDTASK_EN_Disabled (0x0UL) /*!< Disable publishing */
#define RADIO_PUBLISH_INTERCEPTEDTASK_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event INTERCEPTEDTASK will publish to */
#define RADIO_PUBLISH_INTERCEPTEDTASK_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_PUBLISH_INTERCEPTEDTASK_CHIDX_Msk (0xFFUL << RADIO_PUBLISH_INTERCEPTEDTASK_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_PUBLISH_INTERCEPTEDEVENT */
/* Description: Publish configuration for event INTERCEPTEDEVENT */

/* Bit 31 :   */
#define RADIO_PUBLISH_INTERCEPTEDEVENT_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_PUBLISH_INTERCEPTEDEVENT_EN_Msk (0x1UL << RADIO_PUBLISH_INTERCEPTEDEVENT_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_PUBLISH_INTERCEPTEDEVENT_EN_Disabled (0x0UL) /*!< Disable publishing */
#define RADIO_PUBLISH_INTERCEPTEDEVENT_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event INTERCEPTEDEVENT will publish to */
#define RADIO_PUBLISH_INTERCEPTEDEVENT_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_PUBLISH_INTERCEPTEDEVENT_CHIDX_Msk (0xFFUL << RADIO_PUBLISH_INTERCEPTEDEVENT_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_PUBLISH_ACQINJ0DMAEND */
/* Description: Publish configuration for event ACQINJ0DMAEND */

/* Bit 31 :   */
#define RADIO_PUBLISH_ACQINJ0DMAEND_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_PUBLISH_ACQINJ0DMAEND_EN_Msk (0x1UL << RADIO_PUBLISH_ACQINJ0DMAEND_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_PUBLISH_ACQINJ0DMAEND_EN_Disabled (0x0UL) /*!< Disable publishing */
#define RADIO_PUBLISH_ACQINJ0DMAEND_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event ACQINJ0DMAEND will publish to */
#define RADIO_PUBLISH_ACQINJ0DMAEND_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_PUBLISH_ACQINJ0DMAEND_CHIDX_Msk (0xFFUL << RADIO_PUBLISH_ACQINJ0DMAEND_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_PUBLISH_ACQINJ1DMAEND */
/* Description: Publish configuration for event ACQINJ1DMAEND */

/* Bit 31 :   */
#define RADIO_PUBLISH_ACQINJ1DMAEND_EN_Pos (31UL) /*!< Position of EN field. */
#define RADIO_PUBLISH_ACQINJ1DMAEND_EN_Msk (0x1UL << RADIO_PUBLISH_ACQINJ1DMAEND_EN_Pos) /*!< Bit mask of EN field. */
#define RADIO_PUBLISH_ACQINJ1DMAEND_EN_Disabled (0x0UL) /*!< Disable publishing */
#define RADIO_PUBLISH_ACQINJ1DMAEND_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event ACQINJ1DMAEND will publish to */
#define RADIO_PUBLISH_ACQINJ1DMAEND_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RADIO_PUBLISH_ACQINJ1DMAEND_CHIDX_Msk (0xFFUL << RADIO_PUBLISH_ACQINJ1DMAEND_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RADIO_SHORTS */
/* Description: Shortcuts between local events and tasks */

/* Bit 26 : Shortcut between event CHNOUPDATED and task LOOPBACKEN */
#define RADIO_SHORTS_CHNOUPDATED_LOOPBACKEN_Pos (26UL) /*!< Position of CHNOUPDATED_LOOPBACKEN field. */
#define RADIO_SHORTS_CHNOUPDATED_LOOPBACKEN_Msk (0x1UL << RADIO_SHORTS_CHNOUPDATED_LOOPBACKEN_Pos) /*!< Bit mask of CHNOUPDATED_LOOPBACKEN field. */
#define RADIO_SHORTS_CHNOUPDATED_LOOPBACKEN_Disabled (0x0UL) /*!< Disable shortcut */
#define RADIO_SHORTS_CHNOUPDATED_LOOPBACKEN_Enabled (0x1UL) /*!< Enable shortcut */

/* Bit 25 : Shortcut between event CHNOUPDATED and task RXEN */
#define RADIO_SHORTS_CHNOUPDATED_RXEN_Pos (25UL) /*!< Position of CHNOUPDATED_RXEN field. */
#define RADIO_SHORTS_CHNOUPDATED_RXEN_Msk (0x1UL << RADIO_SHORTS_CHNOUPDATED_RXEN_Pos) /*!< Bit mask of CHNOUPDATED_RXEN field. */
#define RADIO_SHORTS_CHNOUPDATED_RXEN_Disabled (0x0UL) /*!< Disable shortcut */
#define RADIO_SHORTS_CHNOUPDATED_RXEN_Enabled (0x1UL) /*!< Enable shortcut */

/* Bit 24 : Shortcut between event CHNOUPDATED and task TXEN */
#define RADIO_SHORTS_CHNOUPDATED_TXEN_Pos (24UL) /*!< Position of CHNOUPDATED_TXEN field. */
#define RADIO_SHORTS_CHNOUPDATED_TXEN_Msk (0x1UL << RADIO_SHORTS_CHNOUPDATED_TXEN_Pos) /*!< Bit mask of CHNOUPDATED_TXEN field. */
#define RADIO_SHORTS_CHNOUPDATED_TXEN_Disabled (0x0UL) /*!< Disable shortcut */
#define RADIO_SHORTS_CHNOUPDATED_TXEN_Enabled (0x1UL) /*!< Enable shortcut */

/* Bit 23 : Shortcut between event DISABLED and task CHNOINCR */
#define RADIO_SHORTS_DISABLED_CHNOINCR_Pos (23UL) /*!< Position of DISABLED_CHNOINCR field. */
#define RADIO_SHORTS_DISABLED_CHNOINCR_Msk (0x1UL << RADIO_SHORTS_DISABLED_CHNOINCR_Pos) /*!< Bit mask of DISABLED_CHNOINCR field. */
#define RADIO_SHORTS_DISABLED_CHNOINCR_Disabled (0x0UL) /*!< Disable shortcut */
#define RADIO_SHORTS_DISABLED_CHNOINCR_Enabled (0x1UL) /*!< Enable shortcut */

/* Bit 22 : Shortcut between event DISABLED and task LOOPBACKEN */
#define RADIO_SHORTS_DISABLED_LOOPBACKEN_Pos (22UL) /*!< Position of DISABLED_LOOPBACKEN field. */
#define RADIO_SHORTS_DISABLED_LOOPBACKEN_Msk (0x1UL << RADIO_SHORTS_DISABLED_LOOPBACKEN_Pos) /*!< Bit mask of DISABLED_LOOPBACKEN field. */
#define RADIO_SHORTS_DISABLED_LOOPBACKEN_Disabled (0x0UL) /*!< Disable shortcut */
#define RADIO_SHORTS_DISABLED_LOOPBACKEN_Enabled (0x1UL) /*!< Enable shortcut */

/* Bit 21 : Shortcut between event DFEEND and task STOP */
#define RADIO_SHORTS_DFEEND_STOP_Pos (21UL) /*!< Position of DFEEND_STOP field. */
#define RADIO_SHORTS_DFEEND_STOP_Msk (0x1UL << RADIO_SHORTS_DFEEND_STOP_Pos) /*!< Bit mask of DFEEND_STOP field. */
#define RADIO_SHORTS_DFEEND_STOP_Disabled (0x0UL) /*!< Disable shortcut */
#define RADIO_SHORTS_DFEEND_STOP_Enabled (0x1UL) /*!< Enable shortcut */

/* Bit 20 : Shortcut between event PHYEND and task START */
#define RADIO_SHORTS_PHYEND_START_Pos (20UL) /*!< Position of PHYEND_START field. */
#define RADIO_SHORTS_PHYEND_START_Msk (0x1UL << RADIO_SHORTS_PHYEND_START_Pos) /*!< Bit mask of PHYEND_START field. */
#define RADIO_SHORTS_PHYEND_START_Disabled (0x0UL) /*!< Disable shortcut */
#define RADIO_SHORTS_PHYEND_START_Enabled (0x1UL) /*!< Enable shortcut */

/* Bit 19 : Shortcut between event PHYEND and task DISABLE */
#define RADIO_SHORTS_PHYEND_DISABLE_Pos (19UL) /*!< Position of PHYEND_DISABLE field. */
#define RADIO_SHORTS_PHYEND_DISABLE_Msk (0x1UL << RADIO_SHORTS_PHYEND_DISABLE_Pos) /*!< Bit mask of PHYEND_DISABLE field. */
#define RADIO_SHORTS_PHYEND_DISABLE_Disabled (0x0UL) /*!< Disable shortcut */
#define RADIO_SHORTS_PHYEND_DISABLE_Enabled (0x1UL) /*!< Enable shortcut */

/* Bit 18 : Shortcut between event RXREADY and task START */
#define RADIO_SHORTS_RXREADY_START_Pos (18UL) /*!< Position of RXREADY_START field. */
#define RADIO_SHORTS_RXREADY_START_Msk (0x1UL << RADIO_SHORTS_RXREADY_START_Pos) /*!< Bit mask of RXREADY_START field. */
#define RADIO_SHORTS_RXREADY_START_Disabled (0x0UL) /*!< Disable shortcut */
#define RADIO_SHORTS_RXREADY_START_Enabled (0x1UL) /*!< Enable shortcut */

/* Bit 17 : Shortcut between event TXREADY and task START */
#define RADIO_SHORTS_TXREADY_START_Pos (17UL) /*!< Position of TXREADY_START field. */
#define RADIO_SHORTS_TXREADY_START_Msk (0x1UL << RADIO_SHORTS_TXREADY_START_Pos) /*!< Bit mask of TXREADY_START field. */
#define RADIO_SHORTS_TXREADY_START_Disabled (0x0UL) /*!< Disable shortcut */
#define RADIO_SHORTS_TXREADY_START_Enabled (0x1UL) /*!< Enable shortcut */

/* Bit 16 : Shortcut between event CCAIDLE and task STOP */
#define RADIO_SHORTS_CCAIDLE_STOP_Pos (16UL) /*!< Position of CCAIDLE_STOP field. */
#define RADIO_SHORTS_CCAIDLE_STOP_Msk (0x1UL << RADIO_SHORTS_CCAIDLE_STOP_Pos) /*!< Bit mask of CCAIDLE_STOP field. */
#define RADIO_SHORTS_CCAIDLE_STOP_Disabled (0x0UL) /*!< Disable shortcut */
#define RADIO_SHORTS_CCAIDLE_STOP_Enabled (0x1UL) /*!< Enable shortcut */

/* Bit 15 : Shortcut between event EDEND and task DISABLE */
#define RADIO_SHORTS_EDEND_DISABLE_Pos (15UL) /*!< Position of EDEND_DISABLE field. */
#define RADIO_SHORTS_EDEND_DISABLE_Msk (0x1UL << RADIO_SHORTS_EDEND_DISABLE_Pos) /*!< Bit mask of EDEND_DISABLE field. */
#define RADIO_SHORTS_EDEND_DISABLE_Disabled (0x0UL) /*!< Disable shortcut */
#define RADIO_SHORTS_EDEND_DISABLE_Enabled (0x1UL) /*!< Enable shortcut */

/* Bit 14 : Shortcut between event READY and task EDSTART */
#define RADIO_SHORTS_READY_EDSTART_Pos (14UL) /*!< Position of READY_EDSTART field. */
#define RADIO_SHORTS_READY_EDSTART_Msk (0x1UL << RADIO_SHORTS_READY_EDSTART_Pos) /*!< Bit mask of READY_EDSTART field. */
#define RADIO_SHORTS_READY_EDSTART_Disabled (0x0UL) /*!< Disable shortcut */
#define RADIO_SHORTS_READY_EDSTART_Enabled (0x1UL) /*!< Enable shortcut */

/* Bit 13 : Shortcut between event FRAMESTART and task BCSTART */
#define RADIO_SHORTS_FRAMESTART_BCSTART_Pos (13UL) /*!< Position of FRAMESTART_BCSTART field. */
#define RADIO_SHORTS_FRAMESTART_BCSTART_Msk (0x1UL << RADIO_SHORTS_FRAMESTART_BCSTART_Pos) /*!< Bit mask of FRAMESTART_BCSTART field. */
#define RADIO_SHORTS_FRAMESTART_BCSTART_Disabled (0x0UL) /*!< Disable shortcut */
#define RADIO_SHORTS_FRAMESTART_BCSTART_Enabled (0x1UL) /*!< Enable shortcut */

/* Bit 12 : Shortcut between event CCABUSY and task DISABLE */
#define RADIO_SHORTS_CCABUSY_DISABLE_Pos (12UL) /*!< Position of CCABUSY_DISABLE field. */
#define RADIO_SHORTS_CCABUSY_DISABLE_Msk (0x1UL << RADIO_SHORTS_CCABUSY_DISABLE_Pos) /*!< Bit mask of CCABUSY_DISABLE field. */
#define RADIO_SHORTS_CCABUSY_DISABLE_Disabled (0x0UL) /*!< Disable shortcut */
#define RADIO_SHORTS_CCABUSY_DISABLE_Enabled (0x1UL) /*!< Enable shortcut */

/* Bit 11 : Shortcut between event CCAIDLE and task TXEN */
#define RADIO_SHORTS_CCAIDLE_TXEN_Pos (11UL) /*!< Position of CCAIDLE_TXEN field. */
#define RADIO_SHORTS_CCAIDLE_TXEN_Msk (0x1UL << RADIO_SHORTS_CCAIDLE_TXEN_Pos) /*!< Bit mask of CCAIDLE_TXEN field. */
#define RADIO_SHORTS_CCAIDLE_TXEN_Disabled (0x0UL) /*!< Disable shortcut */
#define RADIO_SHORTS_CCAIDLE_TXEN_Enabled (0x1UL) /*!< Enable shortcut */

/* Bit 10 : Shortcut between event RXREADY and task CCASTART */
#define RADIO_SHORTS_RXREADY_CCASTART_Pos (10UL) /*!< Position of RXREADY_CCASTART field. */
#define RADIO_SHORTS_RXREADY_CCASTART_Msk (0x1UL << RADIO_SHORTS_RXREADY_CCASTART_Pos) /*!< Bit mask of RXREADY_CCASTART field. */
#define RADIO_SHORTS_RXREADY_CCASTART_Disabled (0x0UL) /*!< Disable shortcut */
#define RADIO_SHORTS_RXREADY_CCASTART_Enabled (0x1UL) /*!< Enable shortcut */

/* Bit 9 : Shortcut between event CTEEND and task START */
#define RADIO_SHORTS_CTEEND_START_Pos (9UL) /*!< Position of CTEEND_START field. */
#define RADIO_SHORTS_CTEEND_START_Msk (0x1UL << RADIO_SHORTS_CTEEND_START_Pos) /*!< Bit mask of CTEEND_START field. */
#define RADIO_SHORTS_CTEEND_START_Disabled (0x0UL) /*!< Disable shortcut */
#define RADIO_SHORTS_CTEEND_START_Enabled (0x1UL) /*!< Enable shortcut */

/* Bit 8 : Shortcut between event CTEEND and task DISABLE */
#define RADIO_SHORTS_CTEEND_DISABLE_Pos (8UL) /*!< Position of CTEEND_DISABLE field. */
#define RADIO_SHORTS_CTEEND_DISABLE_Msk (0x1UL << RADIO_SHORTS_CTEEND_DISABLE_Pos) /*!< Bit mask of CTEEND_DISABLE field. */
#define RADIO_SHORTS_CTEEND_DISABLE_Disabled (0x0UL) /*!< Disable shortcut */
#define RADIO_SHORTS_CTEEND_DISABLE_Enabled (0x1UL) /*!< Enable shortcut */

/* Bit 6 : Shortcut between event ADDRESS and task BCSTART */
#define RADIO_SHORTS_ADDRESS_BCSTART_Pos (6UL) /*!< Position of ADDRESS_BCSTART field. */
#define RADIO_SHORTS_ADDRESS_BCSTART_Msk (0x1UL << RADIO_SHORTS_ADDRESS_BCSTART_Pos) /*!< Bit mask of ADDRESS_BCSTART field. */
#define RADIO_SHORTS_ADDRESS_BCSTART_Disabled (0x0UL) /*!< Disable shortcut */
#define RADIO_SHORTS_ADDRESS_BCSTART_Enabled (0x1UL) /*!< Enable shortcut */

/* Bit 5 : Shortcut between event END and task START */
#define RADIO_SHORTS_END_START_Pos (5UL) /*!< Position of END_START field. */
#define RADIO_SHORTS_END_START_Msk (0x1UL << RADIO_SHORTS_END_START_Pos) /*!< Bit mask of END_START field. */
#define RADIO_SHORTS_END_START_Disabled (0x0UL) /*!< Disable shortcut */
#define RADIO_SHORTS_END_START_Enabled (0x1UL) /*!< Enable shortcut */

/* Bit 4 : Shortcut between event ADDRESS and task RSSISTART */
#define RADIO_SHORTS_ADDRESS_RSSISTART_Pos (4UL) /*!< Position of ADDRESS_RSSISTART field. */
#define RADIO_SHORTS_ADDRESS_RSSISTART_Msk (0x1UL << RADIO_SHORTS_ADDRESS_RSSISTART_Pos) /*!< Bit mask of ADDRESS_RSSISTART field. */
#define RADIO_SHORTS_ADDRESS_RSSISTART_Disabled (0x0UL) /*!< Disable shortcut */
#define RADIO_SHORTS_ADDRESS_RSSISTART_Enabled (0x1UL) /*!< Enable shortcut */

/* Bit 3 : Shortcut between event DISABLED and task RXEN */
#define RADIO_SHORTS_DISABLED_RXEN_Pos (3UL) /*!< Position of DISABLED_RXEN field. */
#define RADIO_SHORTS_DISABLED_RXEN_Msk (0x1UL << RADIO_SHORTS_DISABLED_RXEN_Pos) /*!< Bit mask of DISABLED_RXEN field. */
#define RADIO_SHORTS_DISABLED_RXEN_Disabled (0x0UL) /*!< Disable shortcut */
#define RADIO_SHORTS_DISABLED_RXEN_Enabled (0x1UL) /*!< Enable shortcut */

/* Bit 2 : Shortcut between event DISABLED and task TXEN */
#define RADIO_SHORTS_DISABLED_TXEN_Pos (2UL) /*!< Position of DISABLED_TXEN field. */
#define RADIO_SHORTS_DISABLED_TXEN_Msk (0x1UL << RADIO_SHORTS_DISABLED_TXEN_Pos) /*!< Bit mask of DISABLED_TXEN field. */
#define RADIO_SHORTS_DISABLED_TXEN_Disabled (0x0UL) /*!< Disable shortcut */
#define RADIO_SHORTS_DISABLED_TXEN_Enabled (0x1UL) /*!< Enable shortcut */

/* Bit 1 : Shortcut between event END and task DISABLE */
#define RADIO_SHORTS_END_DISABLE_Pos (1UL) /*!< Position of END_DISABLE field. */
#define RADIO_SHORTS_END_DISABLE_Msk (0x1UL << RADIO_SHORTS_END_DISABLE_Pos) /*!< Bit mask of END_DISABLE field. */
#define RADIO_SHORTS_END_DISABLE_Disabled (0x0UL) /*!< Disable shortcut */
#define RADIO_SHORTS_END_DISABLE_Enabled (0x1UL) /*!< Enable shortcut */

/* Bit 0 : Shortcut between event READY and task START */
#define RADIO_SHORTS_READY_START_Pos (0UL) /*!< Position of READY_START field. */
#define RADIO_SHORTS_READY_START_Msk (0x1UL << RADIO_SHORTS_READY_START_Pos) /*!< Bit mask of READY_START field. */
#define RADIO_SHORTS_READY_START_Disabled (0x0UL) /*!< Disable shortcut */
#define RADIO_SHORTS_READY_START_Enabled (0x1UL) /*!< Enable shortcut */

/* Register: RADIO_INTEN00 */
/* Description: Enable or disable interrupt */

/* Bit 31 : Enable or disable interrupt for event CHNOUPDATED */
#define RADIO_INTEN00_CHNOUPDATED_Pos (31UL) /*!< Position of CHNOUPDATED field. */
#define RADIO_INTEN00_CHNOUPDATED_Msk (0x1UL << RADIO_INTEN00_CHNOUPDATED_Pos) /*!< Bit mask of CHNOUPDATED field. */
#define RADIO_INTEN00_CHNOUPDATED_Disabled (0x0UL) /*!< Disable */
#define RADIO_INTEN00_CHNOUPDATED_Enabled (0x1UL) /*!< Enable */

/* Bit 30 : Enable or disable interrupt for event CALDONE */
#define RADIO_INTEN00_CALDONE_Pos (30UL) /*!< Position of CALDONE field. */
#define RADIO_INTEN00_CALDONE_Msk (0x1UL << RADIO_INTEN00_CALDONE_Pos) /*!< Bit mask of CALDONE field. */
#define RADIO_INTEN00_CALDONE_Disabled (0x0UL) /*!< Disable */
#define RADIO_INTEN00_CALDONE_Enabled (0x1UL) /*!< Enable */

/* Bit 29 : Enable or disable interrupt for event LBREADY */
#define RADIO_INTEN00_LBREADY_Pos (29UL) /*!< Position of LBREADY field. */
#define RADIO_INTEN00_LBREADY_Msk (0x1UL << RADIO_INTEN00_LBREADY_Pos) /*!< Bit mask of LBREADY field. */
#define RADIO_INTEN00_LBREADY_Disabled (0x0UL) /*!< Disable */
#define RADIO_INTEN00_LBREADY_Enabled (0x1UL) /*!< Enable */

/* Bit 28 : Enable or disable interrupt for event CTEEND */
#define RADIO_INTEN00_CTEEND_Pos (28UL) /*!< Position of CTEEND field. */
#define RADIO_INTEN00_CTEEND_Msk (0x1UL << RADIO_INTEN00_CTEEND_Pos) /*!< Bit mask of CTEEND field. */
#define RADIO_INTEN00_CTEEND_Disabled (0x0UL) /*!< Disable */
#define RADIO_INTEN00_CTEEND_Enabled (0x1UL) /*!< Enable */

/* Bit 27 : Enable or disable interrupt for event MODEREADY */
#define RADIO_INTEN00_MODEREADY_Pos (27UL) /*!< Position of MODEREADY field. */
#define RADIO_INTEN00_MODEREADY_Msk (0x1UL << RADIO_INTEN00_MODEREADY_Pos) /*!< Bit mask of MODEREADY field. */
#define RADIO_INTEN00_MODEREADY_Disabled (0x0UL) /*!< Disable */
#define RADIO_INTEN00_MODEREADY_Enabled (0x1UL) /*!< Enable */

/* Bit 26 : Enable or disable interrupt for event MODEWRITTEN */
#define RADIO_INTEN00_MODEWRITTEN_Pos (26UL) /*!< Position of MODEWRITTEN field. */
#define RADIO_INTEN00_MODEWRITTEN_Msk (0x1UL << RADIO_INTEN00_MODEWRITTEN_Pos) /*!< Bit mask of MODEWRITTEN field. */
#define RADIO_INTEN00_MODEWRITTEN_Disabled (0x0UL) /*!< Disable */
#define RADIO_INTEN00_MODEWRITTEN_Enabled (0x1UL) /*!< Enable */

/* Bit 25 : Enable or disable interrupt for event DFEEND */
#define RADIO_INTEN00_DFEEND_Pos (25UL) /*!< Position of DFEEND field. */
#define RADIO_INTEN00_DFEEND_Msk (0x1UL << RADIO_INTEN00_DFEEND_Pos) /*!< Bit mask of DFEEND field. */
#define RADIO_INTEN00_DFEEND_Disabled (0x0UL) /*!< Disable */
#define RADIO_INTEN00_DFEEND_Enabled (0x1UL) /*!< Enable */

/* Bit 24 : Enable or disable interrupt for event CTEWARNING */
#define RADIO_INTEN00_CTEWARNING_Pos (24UL) /*!< Position of CTEWARNING field. */
#define RADIO_INTEN00_CTEWARNING_Msk (0x1UL << RADIO_INTEN00_CTEWARNING_Pos) /*!< Bit mask of CTEWARNING field. */
#define RADIO_INTEN00_CTEWARNING_Disabled (0x0UL) /*!< Disable */
#define RADIO_INTEN00_CTEWARNING_Enabled (0x1UL) /*!< Enable */

/* Bit 23 : Enable or disable interrupt for event CTEPRESENT */
#define RADIO_INTEN00_CTEPRESENT_Pos (23UL) /*!< Position of CTEPRESENT field. */
#define RADIO_INTEN00_CTEPRESENT_Msk (0x1UL << RADIO_INTEN00_CTEPRESENT_Pos) /*!< Bit mask of CTEPRESENT field. */
#define RADIO_INTEN00_CTEPRESENT_Disabled (0x0UL) /*!< Disable */
#define RADIO_INTEN00_CTEPRESENT_Enabled (0x1UL) /*!< Enable */

/* Bit 22 : Enable or disable interrupt for event SYNC */
#define RADIO_INTEN00_SYNC_Pos (22UL) /*!< Position of SYNC field. */
#define RADIO_INTEN00_SYNC_Msk (0x1UL << RADIO_INTEN00_SYNC_Pos) /*!< Bit mask of SYNC field. */
#define RADIO_INTEN00_SYNC_Disabled (0x0UL) /*!< Disable */
#define RADIO_INTEN00_SYNC_Enabled (0x1UL) /*!< Enable */

/* Bit 21 : Enable or disable interrupt for event MHRMATCH */
#define RADIO_INTEN00_MHRMATCH_Pos (21UL) /*!< Position of MHRMATCH field. */
#define RADIO_INTEN00_MHRMATCH_Msk (0x1UL << RADIO_INTEN00_MHRMATCH_Pos) /*!< Bit mask of MHRMATCH field. */
#define RADIO_INTEN00_MHRMATCH_Disabled (0x0UL) /*!< Disable */
#define RADIO_INTEN00_MHRMATCH_Enabled (0x1UL) /*!< Enable */

/* Bit 20 : Enable or disable interrupt for event RATEBOOST */
#define RADIO_INTEN00_RATEBOOST_Pos (20UL) /*!< Position of RATEBOOST field. */
#define RADIO_INTEN00_RATEBOOST_Msk (0x1UL << RADIO_INTEN00_RATEBOOST_Pos) /*!< Bit mask of RATEBOOST field. */
#define RADIO_INTEN00_RATEBOOST_Disabled (0x0UL) /*!< Disable */
#define RADIO_INTEN00_RATEBOOST_Enabled (0x1UL) /*!< Enable */

/* Bit 19 : Enable or disable interrupt for event CCASTOPPED */
#define RADIO_INTEN00_CCASTOPPED_Pos (19UL) /*!< Position of CCASTOPPED field. */
#define RADIO_INTEN00_CCASTOPPED_Msk (0x1UL << RADIO_INTEN00_CCASTOPPED_Pos) /*!< Bit mask of CCASTOPPED field. */
#define RADIO_INTEN00_CCASTOPPED_Disabled (0x0UL) /*!< Disable */
#define RADIO_INTEN00_CCASTOPPED_Enabled (0x1UL) /*!< Enable */

/* Bit 18 : Enable or disable interrupt for event CCABUSY */
#define RADIO_INTEN00_CCABUSY_Pos (18UL) /*!< Position of CCABUSY field. */
#define RADIO_INTEN00_CCABUSY_Msk (0x1UL << RADIO_INTEN00_CCABUSY_Pos) /*!< Bit mask of CCABUSY field. */
#define RADIO_INTEN00_CCABUSY_Disabled (0x0UL) /*!< Disable */
#define RADIO_INTEN00_CCABUSY_Enabled (0x1UL) /*!< Enable */

/* Bit 17 : Enable or disable interrupt for event CCAIDLE */
#define RADIO_INTEN00_CCAIDLE_Pos (17UL) /*!< Position of CCAIDLE field. */
#define RADIO_INTEN00_CCAIDLE_Msk (0x1UL << RADIO_INTEN00_CCAIDLE_Pos) /*!< Bit mask of CCAIDLE field. */
#define RADIO_INTEN00_CCAIDLE_Disabled (0x0UL) /*!< Disable */
#define RADIO_INTEN00_CCAIDLE_Enabled (0x1UL) /*!< Enable */

/* Bit 16 : Enable or disable interrupt for event EDSTOPPED */
#define RADIO_INTEN00_EDSTOPPED_Pos (16UL) /*!< Position of EDSTOPPED field. */
#define RADIO_INTEN00_EDSTOPPED_Msk (0x1UL << RADIO_INTEN00_EDSTOPPED_Pos) /*!< Bit mask of EDSTOPPED field. */
#define RADIO_INTEN00_EDSTOPPED_Disabled (0x0UL) /*!< Disable */
#define RADIO_INTEN00_EDSTOPPED_Enabled (0x1UL) /*!< Enable */

/* Bit 15 : Enable or disable interrupt for event EDEND */
#define RADIO_INTEN00_EDEND_Pos (15UL) /*!< Position of EDEND field. */
#define RADIO_INTEN00_EDEND_Msk (0x1UL << RADIO_INTEN00_EDEND_Pos) /*!< Bit mask of EDEND field. */
#define RADIO_INTEN00_EDEND_Disabled (0x0UL) /*!< Disable */
#define RADIO_INTEN00_EDEND_Enabled (0x1UL) /*!< Enable */

/* Bit 14 : Enable or disable interrupt for event BCMATCH */
#define RADIO_INTEN00_BCMATCH_Pos (14UL) /*!< Position of BCMATCH field. */
#define RADIO_INTEN00_BCMATCH_Msk (0x1UL << RADIO_INTEN00_BCMATCH_Pos) /*!< Bit mask of BCMATCH field. */
#define RADIO_INTEN00_BCMATCH_Disabled (0x0UL) /*!< Disable */
#define RADIO_INTEN00_BCMATCH_Enabled (0x1UL) /*!< Enable */

/* Bit 12 : Enable or disable interrupt for event CRCERROR */
#define RADIO_INTEN00_CRCERROR_Pos (12UL) /*!< Position of CRCERROR field. */
#define RADIO_INTEN00_CRCERROR_Msk (0x1UL << RADIO_INTEN00_CRCERROR_Pos) /*!< Bit mask of CRCERROR field. */
#define RADIO_INTEN00_CRCERROR_Disabled (0x0UL) /*!< Disable */
#define RADIO_INTEN00_CRCERROR_Enabled (0x1UL) /*!< Enable */

/* Bit 11 : Enable or disable interrupt for event CRCOK */
#define RADIO_INTEN00_CRCOK_Pos (11UL) /*!< Position of CRCOK field. */
#define RADIO_INTEN00_CRCOK_Msk (0x1UL << RADIO_INTEN00_CRCOK_Pos) /*!< Bit mask of CRCOK field. */
#define RADIO_INTEN00_CRCOK_Disabled (0x0UL) /*!< Disable */
#define RADIO_INTEN00_CRCOK_Enabled (0x1UL) /*!< Enable */

/* Bit 10 : Enable or disable interrupt for event DEVMISS */
#define RADIO_INTEN00_DEVMISS_Pos (10UL) /*!< Position of DEVMISS field. */
#define RADIO_INTEN00_DEVMISS_Msk (0x1UL << RADIO_INTEN00_DEVMISS_Pos) /*!< Bit mask of DEVMISS field. */
#define RADIO_INTEN00_DEVMISS_Disabled (0x0UL) /*!< Disable */
#define RADIO_INTEN00_DEVMISS_Enabled (0x1UL) /*!< Enable */

/* Bit 9 : Enable or disable interrupt for event DEVMATCH */
#define RADIO_INTEN00_DEVMATCH_Pos (9UL) /*!< Position of DEVMATCH field. */
#define RADIO_INTEN00_DEVMATCH_Msk (0x1UL << RADIO_INTEN00_DEVMATCH_Pos) /*!< Bit mask of DEVMATCH field. */
#define RADIO_INTEN00_DEVMATCH_Disabled (0x0UL) /*!< Disable */
#define RADIO_INTEN00_DEVMATCH_Enabled (0x1UL) /*!< Enable */

/* Bit 8 : Enable or disable interrupt for event DISABLED */
#define RADIO_INTEN00_DISABLED_Pos (8UL) /*!< Position of DISABLED field. */
#define RADIO_INTEN00_DISABLED_Msk (0x1UL << RADIO_INTEN00_DISABLED_Pos) /*!< Bit mask of DISABLED field. */
#define RADIO_INTEN00_DISABLED_Disabled (0x0UL) /*!< Disable */
#define RADIO_INTEN00_DISABLED_Enabled (0x1UL) /*!< Enable */

/* Bit 7 : Enable or disable interrupt for event PHYEND */
#define RADIO_INTEN00_PHYEND_Pos (7UL) /*!< Position of PHYEND field. */
#define RADIO_INTEN00_PHYEND_Msk (0x1UL << RADIO_INTEN00_PHYEND_Pos) /*!< Bit mask of PHYEND field. */
#define RADIO_INTEN00_PHYEND_Disabled (0x0UL) /*!< Disable */
#define RADIO_INTEN00_PHYEND_Enabled (0x1UL) /*!< Enable */

/* Bit 6 : Enable or disable interrupt for event END */
#define RADIO_INTEN00_END_Pos (6UL) /*!< Position of END field. */
#define RADIO_INTEN00_END_Msk (0x1UL << RADIO_INTEN00_END_Pos) /*!< Bit mask of END field. */
#define RADIO_INTEN00_END_Disabled (0x0UL) /*!< Disable */
#define RADIO_INTEN00_END_Enabled (0x1UL) /*!< Enable */

/* Bit 5 : Enable or disable interrupt for event PAYLOAD */
#define RADIO_INTEN00_PAYLOAD_Pos (5UL) /*!< Position of PAYLOAD field. */
#define RADIO_INTEN00_PAYLOAD_Msk (0x1UL << RADIO_INTEN00_PAYLOAD_Pos) /*!< Bit mask of PAYLOAD field. */
#define RADIO_INTEN00_PAYLOAD_Disabled (0x0UL) /*!< Disable */
#define RADIO_INTEN00_PAYLOAD_Enabled (0x1UL) /*!< Enable */

/* Bit 4 : Enable or disable interrupt for event FRAMESTART */
#define RADIO_INTEN00_FRAMESTART_Pos (4UL) /*!< Position of FRAMESTART field. */
#define RADIO_INTEN00_FRAMESTART_Msk (0x1UL << RADIO_INTEN00_FRAMESTART_Pos) /*!< Bit mask of FRAMESTART field. */
#define RADIO_INTEN00_FRAMESTART_Disabled (0x0UL) /*!< Disable */
#define RADIO_INTEN00_FRAMESTART_Enabled (0x1UL) /*!< Enable */

/* Bit 3 : Enable or disable interrupt for event ADDRESS */
#define RADIO_INTEN00_ADDRESS_Pos (3UL) /*!< Position of ADDRESS field. */
#define RADIO_INTEN00_ADDRESS_Msk (0x1UL << RADIO_INTEN00_ADDRESS_Pos) /*!< Bit mask of ADDRESS field. */
#define RADIO_INTEN00_ADDRESS_Disabled (0x0UL) /*!< Disable */
#define RADIO_INTEN00_ADDRESS_Enabled (0x1UL) /*!< Enable */

/* Bit 2 : Enable or disable interrupt for event RXREADY */
#define RADIO_INTEN00_RXREADY_Pos (2UL) /*!< Position of RXREADY field. */
#define RADIO_INTEN00_RXREADY_Msk (0x1UL << RADIO_INTEN00_RXREADY_Pos) /*!< Bit mask of RXREADY field. */
#define RADIO_INTEN00_RXREADY_Disabled (0x0UL) /*!< Disable */
#define RADIO_INTEN00_RXREADY_Enabled (0x1UL) /*!< Enable */

/* Bit 1 : Enable or disable interrupt for event TXREADY */
#define RADIO_INTEN00_TXREADY_Pos (1UL) /*!< Position of TXREADY field. */
#define RADIO_INTEN00_TXREADY_Msk (0x1UL << RADIO_INTEN00_TXREADY_Pos) /*!< Bit mask of TXREADY field. */
#define RADIO_INTEN00_TXREADY_Disabled (0x0UL) /*!< Disable */
#define RADIO_INTEN00_TXREADY_Enabled (0x1UL) /*!< Enable */

/* Bit 0 : Enable or disable interrupt for event READY */
#define RADIO_INTEN00_READY_Pos (0UL) /*!< Position of READY field. */
#define RADIO_INTEN00_READY_Msk (0x1UL << RADIO_INTEN00_READY_Pos) /*!< Bit mask of READY field. */
#define RADIO_INTEN00_READY_Disabled (0x0UL) /*!< Disable */
#define RADIO_INTEN00_READY_Enabled (0x1UL) /*!< Enable */

/* Register: RADIO_INTEN01 */
/* Description: Enable or disable interrupt */

/* Bit 17 : Enable or disable interrupt for event ACQINJ1DMAEND */
#define RADIO_INTEN01_ACQINJ1DMAEND_Pos (17UL) /*!< Position of ACQINJ1DMAEND field. */
#define RADIO_INTEN01_ACQINJ1DMAEND_Msk (0x1UL << RADIO_INTEN01_ACQINJ1DMAEND_Pos) /*!< Bit mask of ACQINJ1DMAEND field. */
#define RADIO_INTEN01_ACQINJ1DMAEND_Disabled (0x0UL) /*!< Disable */
#define RADIO_INTEN01_ACQINJ1DMAEND_Enabled (0x1UL) /*!< Enable */

/* Bit 16 : Enable or disable interrupt for event ACQINJ0DMAEND */
#define RADIO_INTEN01_ACQINJ0DMAEND_Pos (16UL) /*!< Position of ACQINJ0DMAEND field. */
#define RADIO_INTEN01_ACQINJ0DMAEND_Msk (0x1UL << RADIO_INTEN01_ACQINJ0DMAEND_Pos) /*!< Bit mask of ACQINJ0DMAEND field. */
#define RADIO_INTEN01_ACQINJ0DMAEND_Disabled (0x0UL) /*!< Disable */
#define RADIO_INTEN01_ACQINJ0DMAEND_Enabled (0x1UL) /*!< Enable */

/* Bit 13 : Enable or disable interrupt for event INTERCEPTEDEVENT */
#define RADIO_INTEN01_INTERCEPTEDEVENT_Pos (13UL) /*!< Position of INTERCEPTEDEVENT field. */
#define RADIO_INTEN01_INTERCEPTEDEVENT_Msk (0x1UL << RADIO_INTEN01_INTERCEPTEDEVENT_Pos) /*!< Bit mask of INTERCEPTEDEVENT field. */
#define RADIO_INTEN01_INTERCEPTEDEVENT_Disabled (0x0UL) /*!< Disable */
#define RADIO_INTEN01_INTERCEPTEDEVENT_Enabled (0x1UL) /*!< Enable */

/* Bit 12 : Enable or disable interrupt for event INTERCEPTEDTASK */
#define RADIO_INTEN01_INTERCEPTEDTASK_Pos (12UL) /*!< Position of INTERCEPTEDTASK field. */
#define RADIO_INTEN01_INTERCEPTEDTASK_Msk (0x1UL << RADIO_INTEN01_INTERCEPTEDTASK_Pos) /*!< Bit mask of INTERCEPTEDTASK field. */
#define RADIO_INTEN01_INTERCEPTEDTASK_Disabled (0x0UL) /*!< Disable */
#define RADIO_INTEN01_INTERCEPTEDTASK_Enabled (0x1UL) /*!< Enable */

/* Bit 11 : Enable or disable interrupt for event DEMODCTRLCONDTRIGGERED2 */
#define RADIO_INTEN01_DEMODCTRLCONDTRIGGERED2_Pos (11UL) /*!< Position of DEMODCTRLCONDTRIGGERED2 field. */
#define RADIO_INTEN01_DEMODCTRLCONDTRIGGERED2_Msk (0x1UL << RADIO_INTEN01_DEMODCTRLCONDTRIGGERED2_Pos) /*!< Bit mask of DEMODCTRLCONDTRIGGERED2 field. */
#define RADIO_INTEN01_DEMODCTRLCONDTRIGGERED2_Disabled (0x0UL) /*!< Disable */
#define RADIO_INTEN01_DEMODCTRLCONDTRIGGERED2_Enabled (0x1UL) /*!< Enable */

/* Bit 10 : Enable or disable interrupt for event DEMODCTRLCONDTRIGGERED1 */
#define RADIO_INTEN01_DEMODCTRLCONDTRIGGERED1_Pos (10UL) /*!< Position of DEMODCTRLCONDTRIGGERED1 field. */
#define RADIO_INTEN01_DEMODCTRLCONDTRIGGERED1_Msk (0x1UL << RADIO_INTEN01_DEMODCTRLCONDTRIGGERED1_Pos) /*!< Bit mask of DEMODCTRLCONDTRIGGERED1 field. */
#define RADIO_INTEN01_DEMODCTRLCONDTRIGGERED1_Disabled (0x0UL) /*!< Disable */
#define RADIO_INTEN01_DEMODCTRLCONDTRIGGERED1_Enabled (0x1UL) /*!< Enable */

/* Bit 9 : Enable or disable interrupt for event DEMODCTRLCONDTRIGGERED0 */
#define RADIO_INTEN01_DEMODCTRLCONDTRIGGERED0_Pos (9UL) /*!< Position of DEMODCTRLCONDTRIGGERED0 field. */
#define RADIO_INTEN01_DEMODCTRLCONDTRIGGERED0_Msk (0x1UL << RADIO_INTEN01_DEMODCTRLCONDTRIGGERED0_Pos) /*!< Bit mask of DEMODCTRLCONDTRIGGERED0 field. */
#define RADIO_INTEN01_DEMODCTRLCONDTRIGGERED0_Disabled (0x0UL) /*!< Disable */
#define RADIO_INTEN01_DEMODCTRLCONDTRIGGERED0_Enabled (0x1UL) /*!< Enable */

/* Bit 8 : Enable or disable interrupt for event STROBETIMETRACKUPDATED */
#define RADIO_INTEN01_STROBETIMETRACKUPDATED_Pos (8UL) /*!< Position of STROBETIMETRACKUPDATED field. */
#define RADIO_INTEN01_STROBETIMETRACKUPDATED_Msk (0x1UL << RADIO_INTEN01_STROBETIMETRACKUPDATED_Pos) /*!< Bit mask of STROBETIMETRACKUPDATED field. */
#define RADIO_INTEN01_STROBETIMETRACKUPDATED_Disabled (0x0UL) /*!< Disable */
#define RADIO_INTEN01_STROBETIMETRACKUPDATED_Enabled (0x1UL) /*!< Enable */

/* Bit 7 : Enable or disable interrupt for event TIMERWRAPS */
#define RADIO_INTEN01_TIMERWRAPS_Pos (7UL) /*!< Position of TIMERWRAPS field. */
#define RADIO_INTEN01_TIMERWRAPS_Msk (0x1UL << RADIO_INTEN01_TIMERWRAPS_Pos) /*!< Bit mask of TIMERWRAPS field. */
#define RADIO_INTEN01_TIMERWRAPS_Disabled (0x0UL) /*!< Disable */
#define RADIO_INTEN01_TIMERWRAPS_Enabled (0x1UL) /*!< Enable */

/* Bit 6 : Enable or disable interrupt for event DETECTFIFOFULL */
#define RADIO_INTEN01_DETECTFIFOFULL_Pos (6UL) /*!< Position of DETECTFIFOFULL field. */
#define RADIO_INTEN01_DETECTFIFOFULL_Msk (0x1UL << RADIO_INTEN01_DETECTFIFOFULL_Pos) /*!< Bit mask of DETECTFIFOFULL field. */
#define RADIO_INTEN01_DETECTFIFOFULL_Disabled (0x0UL) /*!< Disable */
#define RADIO_INTEN01_DETECTFIFOFULL_Enabled (0x1UL) /*!< Enable */

/* Bit 5 : Enable or disable interrupt for event RAWDETECT */
#define RADIO_INTEN01_RAWDETECT_Pos (5UL) /*!< Position of RAWDETECT field. */
#define RADIO_INTEN01_RAWDETECT_Msk (0x1UL << RADIO_INTEN01_RAWDETECT_Pos) /*!< Bit mask of RAWDETECT field. */
#define RADIO_INTEN01_RAWDETECT_Disabled (0x0UL) /*!< Disable */
#define RADIO_INTEN01_RAWDETECT_Enabled (0x1UL) /*!< Enable */

/* Bit 4 : Enable or disable interrupt for event RXDIGEN */
#define RADIO_INTEN01_RXDIGEN_Pos (4UL) /*!< Position of RXDIGEN field. */
#define RADIO_INTEN01_RXDIGEN_Msk (0x1UL << RADIO_INTEN01_RXDIGEN_Pos) /*!< Bit mask of RXDIGEN field. */
#define RADIO_INTEN01_RXDIGEN_Disabled (0x0UL) /*!< Disable */
#define RADIO_INTEN01_RXDIGEN_Enabled (0x1UL) /*!< Enable */

/* Bit 2 : Enable or disable interrupt for event RXTIMERMATCH */
#define RADIO_INTEN01_RXTIMERMATCH_Pos (2UL) /*!< Position of RXTIMERMATCH field. */
#define RADIO_INTEN01_RXTIMERMATCH_Msk (0x1UL << RADIO_INTEN01_RXTIMERMATCH_Pos) /*!< Bit mask of RXTIMERMATCH field. */
#define RADIO_INTEN01_RXTIMERMATCH_Disabled (0x0UL) /*!< Disable */
#define RADIO_INTEN01_RXTIMERMATCH_Enabled (0x1UL) /*!< Enable */

/* Bit 1 : Enable or disable interrupt for event TXTIMERMATCH */
#define RADIO_INTEN01_TXTIMERMATCH_Pos (1UL) /*!< Position of TXTIMERMATCH field. */
#define RADIO_INTEN01_TXTIMERMATCH_Msk (0x1UL << RADIO_INTEN01_TXTIMERMATCH_Pos) /*!< Bit mask of TXTIMERMATCH field. */
#define RADIO_INTEN01_TXTIMERMATCH_Disabled (0x0UL) /*!< Disable */
#define RADIO_INTEN01_TXTIMERMATCH_Enabled (0x1UL) /*!< Enable */

/* Bit 0 : Enable or disable interrupt for event DBCTIMEOUT */
#define RADIO_INTEN01_DBCTIMEOUT_Pos (0UL) /*!< Position of DBCTIMEOUT field. */
#define RADIO_INTEN01_DBCTIMEOUT_Msk (0x1UL << RADIO_INTEN01_DBCTIMEOUT_Pos) /*!< Bit mask of DBCTIMEOUT field. */
#define RADIO_INTEN01_DBCTIMEOUT_Disabled (0x0UL) /*!< Disable */
#define RADIO_INTEN01_DBCTIMEOUT_Enabled (0x1UL) /*!< Enable */

/* Register: RADIO_INTENSET00 */
/* Description: Enable interrupt */

/* Bit 31 : Write '1' to enable interrupt for event CHNOUPDATED */
#define RADIO_INTENSET00_CHNOUPDATED_Pos (31UL) /*!< Position of CHNOUPDATED field. */
#define RADIO_INTENSET00_CHNOUPDATED_Msk (0x1UL << RADIO_INTENSET00_CHNOUPDATED_Pos) /*!< Bit mask of CHNOUPDATED field. */
#define RADIO_INTENSET00_CHNOUPDATED_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET00_CHNOUPDATED_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET00_CHNOUPDATED_Set (0x1UL) /*!< Enable */

/* Bit 30 : Write '1' to enable interrupt for event CALDONE */
#define RADIO_INTENSET00_CALDONE_Pos (30UL) /*!< Position of CALDONE field. */
#define RADIO_INTENSET00_CALDONE_Msk (0x1UL << RADIO_INTENSET00_CALDONE_Pos) /*!< Bit mask of CALDONE field. */
#define RADIO_INTENSET00_CALDONE_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET00_CALDONE_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET00_CALDONE_Set (0x1UL) /*!< Enable */

/* Bit 29 : Write '1' to enable interrupt for event LBREADY */
#define RADIO_INTENSET00_LBREADY_Pos (29UL) /*!< Position of LBREADY field. */
#define RADIO_INTENSET00_LBREADY_Msk (0x1UL << RADIO_INTENSET00_LBREADY_Pos) /*!< Bit mask of LBREADY field. */
#define RADIO_INTENSET00_LBREADY_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET00_LBREADY_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET00_LBREADY_Set (0x1UL) /*!< Enable */

/* Bit 28 : Write '1' to enable interrupt for event CTEEND */
#define RADIO_INTENSET00_CTEEND_Pos (28UL) /*!< Position of CTEEND field. */
#define RADIO_INTENSET00_CTEEND_Msk (0x1UL << RADIO_INTENSET00_CTEEND_Pos) /*!< Bit mask of CTEEND field. */
#define RADIO_INTENSET00_CTEEND_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET00_CTEEND_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET00_CTEEND_Set (0x1UL) /*!< Enable */

/* Bit 27 : Write '1' to enable interrupt for event MODEREADY */
#define RADIO_INTENSET00_MODEREADY_Pos (27UL) /*!< Position of MODEREADY field. */
#define RADIO_INTENSET00_MODEREADY_Msk (0x1UL << RADIO_INTENSET00_MODEREADY_Pos) /*!< Bit mask of MODEREADY field. */
#define RADIO_INTENSET00_MODEREADY_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET00_MODEREADY_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET00_MODEREADY_Set (0x1UL) /*!< Enable */

/* Bit 26 : Write '1' to enable interrupt for event MODEWRITTEN */
#define RADIO_INTENSET00_MODEWRITTEN_Pos (26UL) /*!< Position of MODEWRITTEN field. */
#define RADIO_INTENSET00_MODEWRITTEN_Msk (0x1UL << RADIO_INTENSET00_MODEWRITTEN_Pos) /*!< Bit mask of MODEWRITTEN field. */
#define RADIO_INTENSET00_MODEWRITTEN_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET00_MODEWRITTEN_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET00_MODEWRITTEN_Set (0x1UL) /*!< Enable */

/* Bit 25 : Write '1' to enable interrupt for event DFEEND */
#define RADIO_INTENSET00_DFEEND_Pos (25UL) /*!< Position of DFEEND field. */
#define RADIO_INTENSET00_DFEEND_Msk (0x1UL << RADIO_INTENSET00_DFEEND_Pos) /*!< Bit mask of DFEEND field. */
#define RADIO_INTENSET00_DFEEND_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET00_DFEEND_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET00_DFEEND_Set (0x1UL) /*!< Enable */

/* Bit 24 : Write '1' to enable interrupt for event CTEWARNING */
#define RADIO_INTENSET00_CTEWARNING_Pos (24UL) /*!< Position of CTEWARNING field. */
#define RADIO_INTENSET00_CTEWARNING_Msk (0x1UL << RADIO_INTENSET00_CTEWARNING_Pos) /*!< Bit mask of CTEWARNING field. */
#define RADIO_INTENSET00_CTEWARNING_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET00_CTEWARNING_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET00_CTEWARNING_Set (0x1UL) /*!< Enable */

/* Bit 23 : Write '1' to enable interrupt for event CTEPRESENT */
#define RADIO_INTENSET00_CTEPRESENT_Pos (23UL) /*!< Position of CTEPRESENT field. */
#define RADIO_INTENSET00_CTEPRESENT_Msk (0x1UL << RADIO_INTENSET00_CTEPRESENT_Pos) /*!< Bit mask of CTEPRESENT field. */
#define RADIO_INTENSET00_CTEPRESENT_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET00_CTEPRESENT_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET00_CTEPRESENT_Set (0x1UL) /*!< Enable */

/* Bit 22 : Write '1' to enable interrupt for event SYNC */
#define RADIO_INTENSET00_SYNC_Pos (22UL) /*!< Position of SYNC field. */
#define RADIO_INTENSET00_SYNC_Msk (0x1UL << RADIO_INTENSET00_SYNC_Pos) /*!< Bit mask of SYNC field. */
#define RADIO_INTENSET00_SYNC_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET00_SYNC_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET00_SYNC_Set (0x1UL) /*!< Enable */

/* Bit 21 : Write '1' to enable interrupt for event MHRMATCH */
#define RADIO_INTENSET00_MHRMATCH_Pos (21UL) /*!< Position of MHRMATCH field. */
#define RADIO_INTENSET00_MHRMATCH_Msk (0x1UL << RADIO_INTENSET00_MHRMATCH_Pos) /*!< Bit mask of MHRMATCH field. */
#define RADIO_INTENSET00_MHRMATCH_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET00_MHRMATCH_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET00_MHRMATCH_Set (0x1UL) /*!< Enable */

/* Bit 20 : Write '1' to enable interrupt for event RATEBOOST */
#define RADIO_INTENSET00_RATEBOOST_Pos (20UL) /*!< Position of RATEBOOST field. */
#define RADIO_INTENSET00_RATEBOOST_Msk (0x1UL << RADIO_INTENSET00_RATEBOOST_Pos) /*!< Bit mask of RATEBOOST field. */
#define RADIO_INTENSET00_RATEBOOST_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET00_RATEBOOST_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET00_RATEBOOST_Set (0x1UL) /*!< Enable */

/* Bit 19 : Write '1' to enable interrupt for event CCASTOPPED */
#define RADIO_INTENSET00_CCASTOPPED_Pos (19UL) /*!< Position of CCASTOPPED field. */
#define RADIO_INTENSET00_CCASTOPPED_Msk (0x1UL << RADIO_INTENSET00_CCASTOPPED_Pos) /*!< Bit mask of CCASTOPPED field. */
#define RADIO_INTENSET00_CCASTOPPED_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET00_CCASTOPPED_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET00_CCASTOPPED_Set (0x1UL) /*!< Enable */

/* Bit 18 : Write '1' to enable interrupt for event CCABUSY */
#define RADIO_INTENSET00_CCABUSY_Pos (18UL) /*!< Position of CCABUSY field. */
#define RADIO_INTENSET00_CCABUSY_Msk (0x1UL << RADIO_INTENSET00_CCABUSY_Pos) /*!< Bit mask of CCABUSY field. */
#define RADIO_INTENSET00_CCABUSY_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET00_CCABUSY_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET00_CCABUSY_Set (0x1UL) /*!< Enable */

/* Bit 17 : Write '1' to enable interrupt for event CCAIDLE */
#define RADIO_INTENSET00_CCAIDLE_Pos (17UL) /*!< Position of CCAIDLE field. */
#define RADIO_INTENSET00_CCAIDLE_Msk (0x1UL << RADIO_INTENSET00_CCAIDLE_Pos) /*!< Bit mask of CCAIDLE field. */
#define RADIO_INTENSET00_CCAIDLE_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET00_CCAIDLE_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET00_CCAIDLE_Set (0x1UL) /*!< Enable */

/* Bit 16 : Write '1' to enable interrupt for event EDSTOPPED */
#define RADIO_INTENSET00_EDSTOPPED_Pos (16UL) /*!< Position of EDSTOPPED field. */
#define RADIO_INTENSET00_EDSTOPPED_Msk (0x1UL << RADIO_INTENSET00_EDSTOPPED_Pos) /*!< Bit mask of EDSTOPPED field. */
#define RADIO_INTENSET00_EDSTOPPED_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET00_EDSTOPPED_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET00_EDSTOPPED_Set (0x1UL) /*!< Enable */

/* Bit 15 : Write '1' to enable interrupt for event EDEND */
#define RADIO_INTENSET00_EDEND_Pos (15UL) /*!< Position of EDEND field. */
#define RADIO_INTENSET00_EDEND_Msk (0x1UL << RADIO_INTENSET00_EDEND_Pos) /*!< Bit mask of EDEND field. */
#define RADIO_INTENSET00_EDEND_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET00_EDEND_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET00_EDEND_Set (0x1UL) /*!< Enable */

/* Bit 14 : Write '1' to enable interrupt for event BCMATCH */
#define RADIO_INTENSET00_BCMATCH_Pos (14UL) /*!< Position of BCMATCH field. */
#define RADIO_INTENSET00_BCMATCH_Msk (0x1UL << RADIO_INTENSET00_BCMATCH_Pos) /*!< Bit mask of BCMATCH field. */
#define RADIO_INTENSET00_BCMATCH_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET00_BCMATCH_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET00_BCMATCH_Set (0x1UL) /*!< Enable */

/* Bit 12 : Write '1' to enable interrupt for event CRCERROR */
#define RADIO_INTENSET00_CRCERROR_Pos (12UL) /*!< Position of CRCERROR field. */
#define RADIO_INTENSET00_CRCERROR_Msk (0x1UL << RADIO_INTENSET00_CRCERROR_Pos) /*!< Bit mask of CRCERROR field. */
#define RADIO_INTENSET00_CRCERROR_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET00_CRCERROR_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET00_CRCERROR_Set (0x1UL) /*!< Enable */

/* Bit 11 : Write '1' to enable interrupt for event CRCOK */
#define RADIO_INTENSET00_CRCOK_Pos (11UL) /*!< Position of CRCOK field. */
#define RADIO_INTENSET00_CRCOK_Msk (0x1UL << RADIO_INTENSET00_CRCOK_Pos) /*!< Bit mask of CRCOK field. */
#define RADIO_INTENSET00_CRCOK_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET00_CRCOK_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET00_CRCOK_Set (0x1UL) /*!< Enable */

/* Bit 10 : Write '1' to enable interrupt for event DEVMISS */
#define RADIO_INTENSET00_DEVMISS_Pos (10UL) /*!< Position of DEVMISS field. */
#define RADIO_INTENSET00_DEVMISS_Msk (0x1UL << RADIO_INTENSET00_DEVMISS_Pos) /*!< Bit mask of DEVMISS field. */
#define RADIO_INTENSET00_DEVMISS_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET00_DEVMISS_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET00_DEVMISS_Set (0x1UL) /*!< Enable */

/* Bit 9 : Write '1' to enable interrupt for event DEVMATCH */
#define RADIO_INTENSET00_DEVMATCH_Pos (9UL) /*!< Position of DEVMATCH field. */
#define RADIO_INTENSET00_DEVMATCH_Msk (0x1UL << RADIO_INTENSET00_DEVMATCH_Pos) /*!< Bit mask of DEVMATCH field. */
#define RADIO_INTENSET00_DEVMATCH_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET00_DEVMATCH_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET00_DEVMATCH_Set (0x1UL) /*!< Enable */

/* Bit 8 : Write '1' to enable interrupt for event DISABLED */
#define RADIO_INTENSET00_DISABLED_Pos (8UL) /*!< Position of DISABLED field. */
#define RADIO_INTENSET00_DISABLED_Msk (0x1UL << RADIO_INTENSET00_DISABLED_Pos) /*!< Bit mask of DISABLED field. */
#define RADIO_INTENSET00_DISABLED_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET00_DISABLED_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET00_DISABLED_Set (0x1UL) /*!< Enable */

/* Bit 7 : Write '1' to enable interrupt for event PHYEND */
#define RADIO_INTENSET00_PHYEND_Pos (7UL) /*!< Position of PHYEND field. */
#define RADIO_INTENSET00_PHYEND_Msk (0x1UL << RADIO_INTENSET00_PHYEND_Pos) /*!< Bit mask of PHYEND field. */
#define RADIO_INTENSET00_PHYEND_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET00_PHYEND_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET00_PHYEND_Set (0x1UL) /*!< Enable */

/* Bit 6 : Write '1' to enable interrupt for event END */
#define RADIO_INTENSET00_END_Pos (6UL) /*!< Position of END field. */
#define RADIO_INTENSET00_END_Msk (0x1UL << RADIO_INTENSET00_END_Pos) /*!< Bit mask of END field. */
#define RADIO_INTENSET00_END_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET00_END_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET00_END_Set (0x1UL) /*!< Enable */

/* Bit 5 : Write '1' to enable interrupt for event PAYLOAD */
#define RADIO_INTENSET00_PAYLOAD_Pos (5UL) /*!< Position of PAYLOAD field. */
#define RADIO_INTENSET00_PAYLOAD_Msk (0x1UL << RADIO_INTENSET00_PAYLOAD_Pos) /*!< Bit mask of PAYLOAD field. */
#define RADIO_INTENSET00_PAYLOAD_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET00_PAYLOAD_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET00_PAYLOAD_Set (0x1UL) /*!< Enable */

/* Bit 4 : Write '1' to enable interrupt for event FRAMESTART */
#define RADIO_INTENSET00_FRAMESTART_Pos (4UL) /*!< Position of FRAMESTART field. */
#define RADIO_INTENSET00_FRAMESTART_Msk (0x1UL << RADIO_INTENSET00_FRAMESTART_Pos) /*!< Bit mask of FRAMESTART field. */
#define RADIO_INTENSET00_FRAMESTART_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET00_FRAMESTART_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET00_FRAMESTART_Set (0x1UL) /*!< Enable */

/* Bit 3 : Write '1' to enable interrupt for event ADDRESS */
#define RADIO_INTENSET00_ADDRESS_Pos (3UL) /*!< Position of ADDRESS field. */
#define RADIO_INTENSET00_ADDRESS_Msk (0x1UL << RADIO_INTENSET00_ADDRESS_Pos) /*!< Bit mask of ADDRESS field. */
#define RADIO_INTENSET00_ADDRESS_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET00_ADDRESS_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET00_ADDRESS_Set (0x1UL) /*!< Enable */

/* Bit 2 : Write '1' to enable interrupt for event RXREADY */
#define RADIO_INTENSET00_RXREADY_Pos (2UL) /*!< Position of RXREADY field. */
#define RADIO_INTENSET00_RXREADY_Msk (0x1UL << RADIO_INTENSET00_RXREADY_Pos) /*!< Bit mask of RXREADY field. */
#define RADIO_INTENSET00_RXREADY_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET00_RXREADY_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET00_RXREADY_Set (0x1UL) /*!< Enable */

/* Bit 1 : Write '1' to enable interrupt for event TXREADY */
#define RADIO_INTENSET00_TXREADY_Pos (1UL) /*!< Position of TXREADY field. */
#define RADIO_INTENSET00_TXREADY_Msk (0x1UL << RADIO_INTENSET00_TXREADY_Pos) /*!< Bit mask of TXREADY field. */
#define RADIO_INTENSET00_TXREADY_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET00_TXREADY_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET00_TXREADY_Set (0x1UL) /*!< Enable */

/* Bit 0 : Write '1' to enable interrupt for event READY */
#define RADIO_INTENSET00_READY_Pos (0UL) /*!< Position of READY field. */
#define RADIO_INTENSET00_READY_Msk (0x1UL << RADIO_INTENSET00_READY_Pos) /*!< Bit mask of READY field. */
#define RADIO_INTENSET00_READY_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET00_READY_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET00_READY_Set (0x1UL) /*!< Enable */

/* Register: RADIO_INTENSET01 */
/* Description: Enable interrupt */

/* Bit 17 : Write '1' to enable interrupt for event ACQINJ1DMAEND */
#define RADIO_INTENSET01_ACQINJ1DMAEND_Pos (17UL) /*!< Position of ACQINJ1DMAEND field. */
#define RADIO_INTENSET01_ACQINJ1DMAEND_Msk (0x1UL << RADIO_INTENSET01_ACQINJ1DMAEND_Pos) /*!< Bit mask of ACQINJ1DMAEND field. */
#define RADIO_INTENSET01_ACQINJ1DMAEND_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET01_ACQINJ1DMAEND_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET01_ACQINJ1DMAEND_Set (0x1UL) /*!< Enable */

/* Bit 16 : Write '1' to enable interrupt for event ACQINJ0DMAEND */
#define RADIO_INTENSET01_ACQINJ0DMAEND_Pos (16UL) /*!< Position of ACQINJ0DMAEND field. */
#define RADIO_INTENSET01_ACQINJ0DMAEND_Msk (0x1UL << RADIO_INTENSET01_ACQINJ0DMAEND_Pos) /*!< Bit mask of ACQINJ0DMAEND field. */
#define RADIO_INTENSET01_ACQINJ0DMAEND_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET01_ACQINJ0DMAEND_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET01_ACQINJ0DMAEND_Set (0x1UL) /*!< Enable */

/* Bit 13 : Write '1' to enable interrupt for event INTERCEPTEDEVENT */
#define RADIO_INTENSET01_INTERCEPTEDEVENT_Pos (13UL) /*!< Position of INTERCEPTEDEVENT field. */
#define RADIO_INTENSET01_INTERCEPTEDEVENT_Msk (0x1UL << RADIO_INTENSET01_INTERCEPTEDEVENT_Pos) /*!< Bit mask of INTERCEPTEDEVENT field. */
#define RADIO_INTENSET01_INTERCEPTEDEVENT_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET01_INTERCEPTEDEVENT_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET01_INTERCEPTEDEVENT_Set (0x1UL) /*!< Enable */

/* Bit 12 : Write '1' to enable interrupt for event INTERCEPTEDTASK */
#define RADIO_INTENSET01_INTERCEPTEDTASK_Pos (12UL) /*!< Position of INTERCEPTEDTASK field. */
#define RADIO_INTENSET01_INTERCEPTEDTASK_Msk (0x1UL << RADIO_INTENSET01_INTERCEPTEDTASK_Pos) /*!< Bit mask of INTERCEPTEDTASK field. */
#define RADIO_INTENSET01_INTERCEPTEDTASK_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET01_INTERCEPTEDTASK_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET01_INTERCEPTEDTASK_Set (0x1UL) /*!< Enable */

/* Bit 11 : Write '1' to enable interrupt for event DEMODCTRLCONDTRIGGERED2 */
#define RADIO_INTENSET01_DEMODCTRLCONDTRIGGERED2_Pos (11UL) /*!< Position of DEMODCTRLCONDTRIGGERED2 field. */
#define RADIO_INTENSET01_DEMODCTRLCONDTRIGGERED2_Msk (0x1UL << RADIO_INTENSET01_DEMODCTRLCONDTRIGGERED2_Pos) /*!< Bit mask of DEMODCTRLCONDTRIGGERED2 field. */
#define RADIO_INTENSET01_DEMODCTRLCONDTRIGGERED2_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET01_DEMODCTRLCONDTRIGGERED2_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET01_DEMODCTRLCONDTRIGGERED2_Set (0x1UL) /*!< Enable */

/* Bit 10 : Write '1' to enable interrupt for event DEMODCTRLCONDTRIGGERED1 */
#define RADIO_INTENSET01_DEMODCTRLCONDTRIGGERED1_Pos (10UL) /*!< Position of DEMODCTRLCONDTRIGGERED1 field. */
#define RADIO_INTENSET01_DEMODCTRLCONDTRIGGERED1_Msk (0x1UL << RADIO_INTENSET01_DEMODCTRLCONDTRIGGERED1_Pos) /*!< Bit mask of DEMODCTRLCONDTRIGGERED1 field. */
#define RADIO_INTENSET01_DEMODCTRLCONDTRIGGERED1_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET01_DEMODCTRLCONDTRIGGERED1_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET01_DEMODCTRLCONDTRIGGERED1_Set (0x1UL) /*!< Enable */

/* Bit 9 : Write '1' to enable interrupt for event DEMODCTRLCONDTRIGGERED0 */
#define RADIO_INTENSET01_DEMODCTRLCONDTRIGGERED0_Pos (9UL) /*!< Position of DEMODCTRLCONDTRIGGERED0 field. */
#define RADIO_INTENSET01_DEMODCTRLCONDTRIGGERED0_Msk (0x1UL << RADIO_INTENSET01_DEMODCTRLCONDTRIGGERED0_Pos) /*!< Bit mask of DEMODCTRLCONDTRIGGERED0 field. */
#define RADIO_INTENSET01_DEMODCTRLCONDTRIGGERED0_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET01_DEMODCTRLCONDTRIGGERED0_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET01_DEMODCTRLCONDTRIGGERED0_Set (0x1UL) /*!< Enable */

/* Bit 8 : Write '1' to enable interrupt for event STROBETIMETRACKUPDATED */
#define RADIO_INTENSET01_STROBETIMETRACKUPDATED_Pos (8UL) /*!< Position of STROBETIMETRACKUPDATED field. */
#define RADIO_INTENSET01_STROBETIMETRACKUPDATED_Msk (0x1UL << RADIO_INTENSET01_STROBETIMETRACKUPDATED_Pos) /*!< Bit mask of STROBETIMETRACKUPDATED field. */
#define RADIO_INTENSET01_STROBETIMETRACKUPDATED_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET01_STROBETIMETRACKUPDATED_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET01_STROBETIMETRACKUPDATED_Set (0x1UL) /*!< Enable */

/* Bit 7 : Write '1' to enable interrupt for event TIMERWRAPS */
#define RADIO_INTENSET01_TIMERWRAPS_Pos (7UL) /*!< Position of TIMERWRAPS field. */
#define RADIO_INTENSET01_TIMERWRAPS_Msk (0x1UL << RADIO_INTENSET01_TIMERWRAPS_Pos) /*!< Bit mask of TIMERWRAPS field. */
#define RADIO_INTENSET01_TIMERWRAPS_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET01_TIMERWRAPS_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET01_TIMERWRAPS_Set (0x1UL) /*!< Enable */

/* Bit 6 : Write '1' to enable interrupt for event DETECTFIFOFULL */
#define RADIO_INTENSET01_DETECTFIFOFULL_Pos (6UL) /*!< Position of DETECTFIFOFULL field. */
#define RADIO_INTENSET01_DETECTFIFOFULL_Msk (0x1UL << RADIO_INTENSET01_DETECTFIFOFULL_Pos) /*!< Bit mask of DETECTFIFOFULL field. */
#define RADIO_INTENSET01_DETECTFIFOFULL_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET01_DETECTFIFOFULL_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET01_DETECTFIFOFULL_Set (0x1UL) /*!< Enable */

/* Bit 5 : Write '1' to enable interrupt for event RAWDETECT */
#define RADIO_INTENSET01_RAWDETECT_Pos (5UL) /*!< Position of RAWDETECT field. */
#define RADIO_INTENSET01_RAWDETECT_Msk (0x1UL << RADIO_INTENSET01_RAWDETECT_Pos) /*!< Bit mask of RAWDETECT field. */
#define RADIO_INTENSET01_RAWDETECT_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET01_RAWDETECT_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET01_RAWDETECT_Set (0x1UL) /*!< Enable */

/* Bit 4 : Write '1' to enable interrupt for event RXDIGEN */
#define RADIO_INTENSET01_RXDIGEN_Pos (4UL) /*!< Position of RXDIGEN field. */
#define RADIO_INTENSET01_RXDIGEN_Msk (0x1UL << RADIO_INTENSET01_RXDIGEN_Pos) /*!< Bit mask of RXDIGEN field. */
#define RADIO_INTENSET01_RXDIGEN_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET01_RXDIGEN_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET01_RXDIGEN_Set (0x1UL) /*!< Enable */

/* Bit 2 : Write '1' to enable interrupt for event RXTIMERMATCH */
#define RADIO_INTENSET01_RXTIMERMATCH_Pos (2UL) /*!< Position of RXTIMERMATCH field. */
#define RADIO_INTENSET01_RXTIMERMATCH_Msk (0x1UL << RADIO_INTENSET01_RXTIMERMATCH_Pos) /*!< Bit mask of RXTIMERMATCH field. */
#define RADIO_INTENSET01_RXTIMERMATCH_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET01_RXTIMERMATCH_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET01_RXTIMERMATCH_Set (0x1UL) /*!< Enable */

/* Bit 1 : Write '1' to enable interrupt for event TXTIMERMATCH */
#define RADIO_INTENSET01_TXTIMERMATCH_Pos (1UL) /*!< Position of TXTIMERMATCH field. */
#define RADIO_INTENSET01_TXTIMERMATCH_Msk (0x1UL << RADIO_INTENSET01_TXTIMERMATCH_Pos) /*!< Bit mask of TXTIMERMATCH field. */
#define RADIO_INTENSET01_TXTIMERMATCH_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET01_TXTIMERMATCH_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET01_TXTIMERMATCH_Set (0x1UL) /*!< Enable */

/* Bit 0 : Write '1' to enable interrupt for event DBCTIMEOUT */
#define RADIO_INTENSET01_DBCTIMEOUT_Pos (0UL) /*!< Position of DBCTIMEOUT field. */
#define RADIO_INTENSET01_DBCTIMEOUT_Msk (0x1UL << RADIO_INTENSET01_DBCTIMEOUT_Pos) /*!< Bit mask of DBCTIMEOUT field. */
#define RADIO_INTENSET01_DBCTIMEOUT_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET01_DBCTIMEOUT_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET01_DBCTIMEOUT_Set (0x1UL) /*!< Enable */

/* Register: RADIO_INTENCLR00 */
/* Description: Disable interrupt */

/* Bit 31 : Write '1' to disable interrupt for event CHNOUPDATED */
#define RADIO_INTENCLR00_CHNOUPDATED_Pos (31UL) /*!< Position of CHNOUPDATED field. */
#define RADIO_INTENCLR00_CHNOUPDATED_Msk (0x1UL << RADIO_INTENCLR00_CHNOUPDATED_Pos) /*!< Bit mask of CHNOUPDATED field. */
#define RADIO_INTENCLR00_CHNOUPDATED_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR00_CHNOUPDATED_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR00_CHNOUPDATED_Clear (0x1UL) /*!< Disable */

/* Bit 30 : Write '1' to disable interrupt for event CALDONE */
#define RADIO_INTENCLR00_CALDONE_Pos (30UL) /*!< Position of CALDONE field. */
#define RADIO_INTENCLR00_CALDONE_Msk (0x1UL << RADIO_INTENCLR00_CALDONE_Pos) /*!< Bit mask of CALDONE field. */
#define RADIO_INTENCLR00_CALDONE_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR00_CALDONE_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR00_CALDONE_Clear (0x1UL) /*!< Disable */

/* Bit 29 : Write '1' to disable interrupt for event LBREADY */
#define RADIO_INTENCLR00_LBREADY_Pos (29UL) /*!< Position of LBREADY field. */
#define RADIO_INTENCLR00_LBREADY_Msk (0x1UL << RADIO_INTENCLR00_LBREADY_Pos) /*!< Bit mask of LBREADY field. */
#define RADIO_INTENCLR00_LBREADY_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR00_LBREADY_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR00_LBREADY_Clear (0x1UL) /*!< Disable */

/* Bit 28 : Write '1' to disable interrupt for event CTEEND */
#define RADIO_INTENCLR00_CTEEND_Pos (28UL) /*!< Position of CTEEND field. */
#define RADIO_INTENCLR00_CTEEND_Msk (0x1UL << RADIO_INTENCLR00_CTEEND_Pos) /*!< Bit mask of CTEEND field. */
#define RADIO_INTENCLR00_CTEEND_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR00_CTEEND_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR00_CTEEND_Clear (0x1UL) /*!< Disable */

/* Bit 27 : Write '1' to disable interrupt for event MODEREADY */
#define RADIO_INTENCLR00_MODEREADY_Pos (27UL) /*!< Position of MODEREADY field. */
#define RADIO_INTENCLR00_MODEREADY_Msk (0x1UL << RADIO_INTENCLR00_MODEREADY_Pos) /*!< Bit mask of MODEREADY field. */
#define RADIO_INTENCLR00_MODEREADY_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR00_MODEREADY_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR00_MODEREADY_Clear (0x1UL) /*!< Disable */

/* Bit 26 : Write '1' to disable interrupt for event MODEWRITTEN */
#define RADIO_INTENCLR00_MODEWRITTEN_Pos (26UL) /*!< Position of MODEWRITTEN field. */
#define RADIO_INTENCLR00_MODEWRITTEN_Msk (0x1UL << RADIO_INTENCLR00_MODEWRITTEN_Pos) /*!< Bit mask of MODEWRITTEN field. */
#define RADIO_INTENCLR00_MODEWRITTEN_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR00_MODEWRITTEN_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR00_MODEWRITTEN_Clear (0x1UL) /*!< Disable */

/* Bit 25 : Write '1' to disable interrupt for event DFEEND */
#define RADIO_INTENCLR00_DFEEND_Pos (25UL) /*!< Position of DFEEND field. */
#define RADIO_INTENCLR00_DFEEND_Msk (0x1UL << RADIO_INTENCLR00_DFEEND_Pos) /*!< Bit mask of DFEEND field. */
#define RADIO_INTENCLR00_DFEEND_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR00_DFEEND_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR00_DFEEND_Clear (0x1UL) /*!< Disable */

/* Bit 24 : Write '1' to disable interrupt for event CTEWARNING */
#define RADIO_INTENCLR00_CTEWARNING_Pos (24UL) /*!< Position of CTEWARNING field. */
#define RADIO_INTENCLR00_CTEWARNING_Msk (0x1UL << RADIO_INTENCLR00_CTEWARNING_Pos) /*!< Bit mask of CTEWARNING field. */
#define RADIO_INTENCLR00_CTEWARNING_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR00_CTEWARNING_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR00_CTEWARNING_Clear (0x1UL) /*!< Disable */

/* Bit 23 : Write '1' to disable interrupt for event CTEPRESENT */
#define RADIO_INTENCLR00_CTEPRESENT_Pos (23UL) /*!< Position of CTEPRESENT field. */
#define RADIO_INTENCLR00_CTEPRESENT_Msk (0x1UL << RADIO_INTENCLR00_CTEPRESENT_Pos) /*!< Bit mask of CTEPRESENT field. */
#define RADIO_INTENCLR00_CTEPRESENT_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR00_CTEPRESENT_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR00_CTEPRESENT_Clear (0x1UL) /*!< Disable */

/* Bit 22 : Write '1' to disable interrupt for event SYNC */
#define RADIO_INTENCLR00_SYNC_Pos (22UL) /*!< Position of SYNC field. */
#define RADIO_INTENCLR00_SYNC_Msk (0x1UL << RADIO_INTENCLR00_SYNC_Pos) /*!< Bit mask of SYNC field. */
#define RADIO_INTENCLR00_SYNC_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR00_SYNC_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR00_SYNC_Clear (0x1UL) /*!< Disable */

/* Bit 21 : Write '1' to disable interrupt for event MHRMATCH */
#define RADIO_INTENCLR00_MHRMATCH_Pos (21UL) /*!< Position of MHRMATCH field. */
#define RADIO_INTENCLR00_MHRMATCH_Msk (0x1UL << RADIO_INTENCLR00_MHRMATCH_Pos) /*!< Bit mask of MHRMATCH field. */
#define RADIO_INTENCLR00_MHRMATCH_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR00_MHRMATCH_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR00_MHRMATCH_Clear (0x1UL) /*!< Disable */

/* Bit 20 : Write '1' to disable interrupt for event RATEBOOST */
#define RADIO_INTENCLR00_RATEBOOST_Pos (20UL) /*!< Position of RATEBOOST field. */
#define RADIO_INTENCLR00_RATEBOOST_Msk (0x1UL << RADIO_INTENCLR00_RATEBOOST_Pos) /*!< Bit mask of RATEBOOST field. */
#define RADIO_INTENCLR00_RATEBOOST_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR00_RATEBOOST_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR00_RATEBOOST_Clear (0x1UL) /*!< Disable */

/* Bit 19 : Write '1' to disable interrupt for event CCASTOPPED */
#define RADIO_INTENCLR00_CCASTOPPED_Pos (19UL) /*!< Position of CCASTOPPED field. */
#define RADIO_INTENCLR00_CCASTOPPED_Msk (0x1UL << RADIO_INTENCLR00_CCASTOPPED_Pos) /*!< Bit mask of CCASTOPPED field. */
#define RADIO_INTENCLR00_CCASTOPPED_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR00_CCASTOPPED_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR00_CCASTOPPED_Clear (0x1UL) /*!< Disable */

/* Bit 18 : Write '1' to disable interrupt for event CCABUSY */
#define RADIO_INTENCLR00_CCABUSY_Pos (18UL) /*!< Position of CCABUSY field. */
#define RADIO_INTENCLR00_CCABUSY_Msk (0x1UL << RADIO_INTENCLR00_CCABUSY_Pos) /*!< Bit mask of CCABUSY field. */
#define RADIO_INTENCLR00_CCABUSY_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR00_CCABUSY_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR00_CCABUSY_Clear (0x1UL) /*!< Disable */

/* Bit 17 : Write '1' to disable interrupt for event CCAIDLE */
#define RADIO_INTENCLR00_CCAIDLE_Pos (17UL) /*!< Position of CCAIDLE field. */
#define RADIO_INTENCLR00_CCAIDLE_Msk (0x1UL << RADIO_INTENCLR00_CCAIDLE_Pos) /*!< Bit mask of CCAIDLE field. */
#define RADIO_INTENCLR00_CCAIDLE_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR00_CCAIDLE_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR00_CCAIDLE_Clear (0x1UL) /*!< Disable */

/* Bit 16 : Write '1' to disable interrupt for event EDSTOPPED */
#define RADIO_INTENCLR00_EDSTOPPED_Pos (16UL) /*!< Position of EDSTOPPED field. */
#define RADIO_INTENCLR00_EDSTOPPED_Msk (0x1UL << RADIO_INTENCLR00_EDSTOPPED_Pos) /*!< Bit mask of EDSTOPPED field. */
#define RADIO_INTENCLR00_EDSTOPPED_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR00_EDSTOPPED_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR00_EDSTOPPED_Clear (0x1UL) /*!< Disable */

/* Bit 15 : Write '1' to disable interrupt for event EDEND */
#define RADIO_INTENCLR00_EDEND_Pos (15UL) /*!< Position of EDEND field. */
#define RADIO_INTENCLR00_EDEND_Msk (0x1UL << RADIO_INTENCLR00_EDEND_Pos) /*!< Bit mask of EDEND field. */
#define RADIO_INTENCLR00_EDEND_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR00_EDEND_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR00_EDEND_Clear (0x1UL) /*!< Disable */

/* Bit 14 : Write '1' to disable interrupt for event BCMATCH */
#define RADIO_INTENCLR00_BCMATCH_Pos (14UL) /*!< Position of BCMATCH field. */
#define RADIO_INTENCLR00_BCMATCH_Msk (0x1UL << RADIO_INTENCLR00_BCMATCH_Pos) /*!< Bit mask of BCMATCH field. */
#define RADIO_INTENCLR00_BCMATCH_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR00_BCMATCH_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR00_BCMATCH_Clear (0x1UL) /*!< Disable */

/* Bit 12 : Write '1' to disable interrupt for event CRCERROR */
#define RADIO_INTENCLR00_CRCERROR_Pos (12UL) /*!< Position of CRCERROR field. */
#define RADIO_INTENCLR00_CRCERROR_Msk (0x1UL << RADIO_INTENCLR00_CRCERROR_Pos) /*!< Bit mask of CRCERROR field. */
#define RADIO_INTENCLR00_CRCERROR_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR00_CRCERROR_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR00_CRCERROR_Clear (0x1UL) /*!< Disable */

/* Bit 11 : Write '1' to disable interrupt for event CRCOK */
#define RADIO_INTENCLR00_CRCOK_Pos (11UL) /*!< Position of CRCOK field. */
#define RADIO_INTENCLR00_CRCOK_Msk (0x1UL << RADIO_INTENCLR00_CRCOK_Pos) /*!< Bit mask of CRCOK field. */
#define RADIO_INTENCLR00_CRCOK_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR00_CRCOK_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR00_CRCOK_Clear (0x1UL) /*!< Disable */

/* Bit 10 : Write '1' to disable interrupt for event DEVMISS */
#define RADIO_INTENCLR00_DEVMISS_Pos (10UL) /*!< Position of DEVMISS field. */
#define RADIO_INTENCLR00_DEVMISS_Msk (0x1UL << RADIO_INTENCLR00_DEVMISS_Pos) /*!< Bit mask of DEVMISS field. */
#define RADIO_INTENCLR00_DEVMISS_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR00_DEVMISS_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR00_DEVMISS_Clear (0x1UL) /*!< Disable */

/* Bit 9 : Write '1' to disable interrupt for event DEVMATCH */
#define RADIO_INTENCLR00_DEVMATCH_Pos (9UL) /*!< Position of DEVMATCH field. */
#define RADIO_INTENCLR00_DEVMATCH_Msk (0x1UL << RADIO_INTENCLR00_DEVMATCH_Pos) /*!< Bit mask of DEVMATCH field. */
#define RADIO_INTENCLR00_DEVMATCH_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR00_DEVMATCH_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR00_DEVMATCH_Clear (0x1UL) /*!< Disable */

/* Bit 8 : Write '1' to disable interrupt for event DISABLED */
#define RADIO_INTENCLR00_DISABLED_Pos (8UL) /*!< Position of DISABLED field. */
#define RADIO_INTENCLR00_DISABLED_Msk (0x1UL << RADIO_INTENCLR00_DISABLED_Pos) /*!< Bit mask of DISABLED field. */
#define RADIO_INTENCLR00_DISABLED_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR00_DISABLED_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR00_DISABLED_Clear (0x1UL) /*!< Disable */

/* Bit 7 : Write '1' to disable interrupt for event PHYEND */
#define RADIO_INTENCLR00_PHYEND_Pos (7UL) /*!< Position of PHYEND field. */
#define RADIO_INTENCLR00_PHYEND_Msk (0x1UL << RADIO_INTENCLR00_PHYEND_Pos) /*!< Bit mask of PHYEND field. */
#define RADIO_INTENCLR00_PHYEND_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR00_PHYEND_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR00_PHYEND_Clear (0x1UL) /*!< Disable */

/* Bit 6 : Write '1' to disable interrupt for event END */
#define RADIO_INTENCLR00_END_Pos (6UL) /*!< Position of END field. */
#define RADIO_INTENCLR00_END_Msk (0x1UL << RADIO_INTENCLR00_END_Pos) /*!< Bit mask of END field. */
#define RADIO_INTENCLR00_END_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR00_END_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR00_END_Clear (0x1UL) /*!< Disable */

/* Bit 5 : Write '1' to disable interrupt for event PAYLOAD */
#define RADIO_INTENCLR00_PAYLOAD_Pos (5UL) /*!< Position of PAYLOAD field. */
#define RADIO_INTENCLR00_PAYLOAD_Msk (0x1UL << RADIO_INTENCLR00_PAYLOAD_Pos) /*!< Bit mask of PAYLOAD field. */
#define RADIO_INTENCLR00_PAYLOAD_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR00_PAYLOAD_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR00_PAYLOAD_Clear (0x1UL) /*!< Disable */

/* Bit 4 : Write '1' to disable interrupt for event FRAMESTART */
#define RADIO_INTENCLR00_FRAMESTART_Pos (4UL) /*!< Position of FRAMESTART field. */
#define RADIO_INTENCLR00_FRAMESTART_Msk (0x1UL << RADIO_INTENCLR00_FRAMESTART_Pos) /*!< Bit mask of FRAMESTART field. */
#define RADIO_INTENCLR00_FRAMESTART_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR00_FRAMESTART_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR00_FRAMESTART_Clear (0x1UL) /*!< Disable */

/* Bit 3 : Write '1' to disable interrupt for event ADDRESS */
#define RADIO_INTENCLR00_ADDRESS_Pos (3UL) /*!< Position of ADDRESS field. */
#define RADIO_INTENCLR00_ADDRESS_Msk (0x1UL << RADIO_INTENCLR00_ADDRESS_Pos) /*!< Bit mask of ADDRESS field. */
#define RADIO_INTENCLR00_ADDRESS_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR00_ADDRESS_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR00_ADDRESS_Clear (0x1UL) /*!< Disable */

/* Bit 2 : Write '1' to disable interrupt for event RXREADY */
#define RADIO_INTENCLR00_RXREADY_Pos (2UL) /*!< Position of RXREADY field. */
#define RADIO_INTENCLR00_RXREADY_Msk (0x1UL << RADIO_INTENCLR00_RXREADY_Pos) /*!< Bit mask of RXREADY field. */
#define RADIO_INTENCLR00_RXREADY_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR00_RXREADY_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR00_RXREADY_Clear (0x1UL) /*!< Disable */

/* Bit 1 : Write '1' to disable interrupt for event TXREADY */
#define RADIO_INTENCLR00_TXREADY_Pos (1UL) /*!< Position of TXREADY field. */
#define RADIO_INTENCLR00_TXREADY_Msk (0x1UL << RADIO_INTENCLR00_TXREADY_Pos) /*!< Bit mask of TXREADY field. */
#define RADIO_INTENCLR00_TXREADY_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR00_TXREADY_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR00_TXREADY_Clear (0x1UL) /*!< Disable */

/* Bit 0 : Write '1' to disable interrupt for event READY */
#define RADIO_INTENCLR00_READY_Pos (0UL) /*!< Position of READY field. */
#define RADIO_INTENCLR00_READY_Msk (0x1UL << RADIO_INTENCLR00_READY_Pos) /*!< Bit mask of READY field. */
#define RADIO_INTENCLR00_READY_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR00_READY_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR00_READY_Clear (0x1UL) /*!< Disable */

/* Register: RADIO_INTENCLR01 */
/* Description: Disable interrupt */

/* Bit 17 : Write '1' to disable interrupt for event ACQINJ1DMAEND */
#define RADIO_INTENCLR01_ACQINJ1DMAEND_Pos (17UL) /*!< Position of ACQINJ1DMAEND field. */
#define RADIO_INTENCLR01_ACQINJ1DMAEND_Msk (0x1UL << RADIO_INTENCLR01_ACQINJ1DMAEND_Pos) /*!< Bit mask of ACQINJ1DMAEND field. */
#define RADIO_INTENCLR01_ACQINJ1DMAEND_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR01_ACQINJ1DMAEND_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR01_ACQINJ1DMAEND_Clear (0x1UL) /*!< Disable */

/* Bit 16 : Write '1' to disable interrupt for event ACQINJ0DMAEND */
#define RADIO_INTENCLR01_ACQINJ0DMAEND_Pos (16UL) /*!< Position of ACQINJ0DMAEND field. */
#define RADIO_INTENCLR01_ACQINJ0DMAEND_Msk (0x1UL << RADIO_INTENCLR01_ACQINJ0DMAEND_Pos) /*!< Bit mask of ACQINJ0DMAEND field. */
#define RADIO_INTENCLR01_ACQINJ0DMAEND_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR01_ACQINJ0DMAEND_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR01_ACQINJ0DMAEND_Clear (0x1UL) /*!< Disable */

/* Bit 13 : Write '1' to disable interrupt for event INTERCEPTEDEVENT */
#define RADIO_INTENCLR01_INTERCEPTEDEVENT_Pos (13UL) /*!< Position of INTERCEPTEDEVENT field. */
#define RADIO_INTENCLR01_INTERCEPTEDEVENT_Msk (0x1UL << RADIO_INTENCLR01_INTERCEPTEDEVENT_Pos) /*!< Bit mask of INTERCEPTEDEVENT field. */
#define RADIO_INTENCLR01_INTERCEPTEDEVENT_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR01_INTERCEPTEDEVENT_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR01_INTERCEPTEDEVENT_Clear (0x1UL) /*!< Disable */

/* Bit 12 : Write '1' to disable interrupt for event INTERCEPTEDTASK */
#define RADIO_INTENCLR01_INTERCEPTEDTASK_Pos (12UL) /*!< Position of INTERCEPTEDTASK field. */
#define RADIO_INTENCLR01_INTERCEPTEDTASK_Msk (0x1UL << RADIO_INTENCLR01_INTERCEPTEDTASK_Pos) /*!< Bit mask of INTERCEPTEDTASK field. */
#define RADIO_INTENCLR01_INTERCEPTEDTASK_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR01_INTERCEPTEDTASK_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR01_INTERCEPTEDTASK_Clear (0x1UL) /*!< Disable */

/* Bit 11 : Write '1' to disable interrupt for event DEMODCTRLCONDTRIGGERED2 */
#define RADIO_INTENCLR01_DEMODCTRLCONDTRIGGERED2_Pos (11UL) /*!< Position of DEMODCTRLCONDTRIGGERED2 field. */
#define RADIO_INTENCLR01_DEMODCTRLCONDTRIGGERED2_Msk (0x1UL << RADIO_INTENCLR01_DEMODCTRLCONDTRIGGERED2_Pos) /*!< Bit mask of DEMODCTRLCONDTRIGGERED2 field. */
#define RADIO_INTENCLR01_DEMODCTRLCONDTRIGGERED2_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR01_DEMODCTRLCONDTRIGGERED2_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR01_DEMODCTRLCONDTRIGGERED2_Clear (0x1UL) /*!< Disable */

/* Bit 10 : Write '1' to disable interrupt for event DEMODCTRLCONDTRIGGERED1 */
#define RADIO_INTENCLR01_DEMODCTRLCONDTRIGGERED1_Pos (10UL) /*!< Position of DEMODCTRLCONDTRIGGERED1 field. */
#define RADIO_INTENCLR01_DEMODCTRLCONDTRIGGERED1_Msk (0x1UL << RADIO_INTENCLR01_DEMODCTRLCONDTRIGGERED1_Pos) /*!< Bit mask of DEMODCTRLCONDTRIGGERED1 field. */
#define RADIO_INTENCLR01_DEMODCTRLCONDTRIGGERED1_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR01_DEMODCTRLCONDTRIGGERED1_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR01_DEMODCTRLCONDTRIGGERED1_Clear (0x1UL) /*!< Disable */

/* Bit 9 : Write '1' to disable interrupt for event DEMODCTRLCONDTRIGGERED0 */
#define RADIO_INTENCLR01_DEMODCTRLCONDTRIGGERED0_Pos (9UL) /*!< Position of DEMODCTRLCONDTRIGGERED0 field. */
#define RADIO_INTENCLR01_DEMODCTRLCONDTRIGGERED0_Msk (0x1UL << RADIO_INTENCLR01_DEMODCTRLCONDTRIGGERED0_Pos) /*!< Bit mask of DEMODCTRLCONDTRIGGERED0 field. */
#define RADIO_INTENCLR01_DEMODCTRLCONDTRIGGERED0_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR01_DEMODCTRLCONDTRIGGERED0_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR01_DEMODCTRLCONDTRIGGERED0_Clear (0x1UL) /*!< Disable */

/* Bit 8 : Write '1' to disable interrupt for event STROBETIMETRACKUPDATED */
#define RADIO_INTENCLR01_STROBETIMETRACKUPDATED_Pos (8UL) /*!< Position of STROBETIMETRACKUPDATED field. */
#define RADIO_INTENCLR01_STROBETIMETRACKUPDATED_Msk (0x1UL << RADIO_INTENCLR01_STROBETIMETRACKUPDATED_Pos) /*!< Bit mask of STROBETIMETRACKUPDATED field. */
#define RADIO_INTENCLR01_STROBETIMETRACKUPDATED_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR01_STROBETIMETRACKUPDATED_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR01_STROBETIMETRACKUPDATED_Clear (0x1UL) /*!< Disable */

/* Bit 7 : Write '1' to disable interrupt for event TIMERWRAPS */
#define RADIO_INTENCLR01_TIMERWRAPS_Pos (7UL) /*!< Position of TIMERWRAPS field. */
#define RADIO_INTENCLR01_TIMERWRAPS_Msk (0x1UL << RADIO_INTENCLR01_TIMERWRAPS_Pos) /*!< Bit mask of TIMERWRAPS field. */
#define RADIO_INTENCLR01_TIMERWRAPS_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR01_TIMERWRAPS_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR01_TIMERWRAPS_Clear (0x1UL) /*!< Disable */

/* Bit 6 : Write '1' to disable interrupt for event DETECTFIFOFULL */
#define RADIO_INTENCLR01_DETECTFIFOFULL_Pos (6UL) /*!< Position of DETECTFIFOFULL field. */
#define RADIO_INTENCLR01_DETECTFIFOFULL_Msk (0x1UL << RADIO_INTENCLR01_DETECTFIFOFULL_Pos) /*!< Bit mask of DETECTFIFOFULL field. */
#define RADIO_INTENCLR01_DETECTFIFOFULL_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR01_DETECTFIFOFULL_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR01_DETECTFIFOFULL_Clear (0x1UL) /*!< Disable */

/* Bit 5 : Write '1' to disable interrupt for event RAWDETECT */
#define RADIO_INTENCLR01_RAWDETECT_Pos (5UL) /*!< Position of RAWDETECT field. */
#define RADIO_INTENCLR01_RAWDETECT_Msk (0x1UL << RADIO_INTENCLR01_RAWDETECT_Pos) /*!< Bit mask of RAWDETECT field. */
#define RADIO_INTENCLR01_RAWDETECT_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR01_RAWDETECT_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR01_RAWDETECT_Clear (0x1UL) /*!< Disable */

/* Bit 4 : Write '1' to disable interrupt for event RXDIGEN */
#define RADIO_INTENCLR01_RXDIGEN_Pos (4UL) /*!< Position of RXDIGEN field. */
#define RADIO_INTENCLR01_RXDIGEN_Msk (0x1UL << RADIO_INTENCLR01_RXDIGEN_Pos) /*!< Bit mask of RXDIGEN field. */
#define RADIO_INTENCLR01_RXDIGEN_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR01_RXDIGEN_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR01_RXDIGEN_Clear (0x1UL) /*!< Disable */

/* Bit 2 : Write '1' to disable interrupt for event RXTIMERMATCH */
#define RADIO_INTENCLR01_RXTIMERMATCH_Pos (2UL) /*!< Position of RXTIMERMATCH field. */
#define RADIO_INTENCLR01_RXTIMERMATCH_Msk (0x1UL << RADIO_INTENCLR01_RXTIMERMATCH_Pos) /*!< Bit mask of RXTIMERMATCH field. */
#define RADIO_INTENCLR01_RXTIMERMATCH_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR01_RXTIMERMATCH_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR01_RXTIMERMATCH_Clear (0x1UL) /*!< Disable */

/* Bit 1 : Write '1' to disable interrupt for event TXTIMERMATCH */
#define RADIO_INTENCLR01_TXTIMERMATCH_Pos (1UL) /*!< Position of TXTIMERMATCH field. */
#define RADIO_INTENCLR01_TXTIMERMATCH_Msk (0x1UL << RADIO_INTENCLR01_TXTIMERMATCH_Pos) /*!< Bit mask of TXTIMERMATCH field. */
#define RADIO_INTENCLR01_TXTIMERMATCH_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR01_TXTIMERMATCH_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR01_TXTIMERMATCH_Clear (0x1UL) /*!< Disable */

/* Bit 0 : Write '1' to disable interrupt for event DBCTIMEOUT */
#define RADIO_INTENCLR01_DBCTIMEOUT_Pos (0UL) /*!< Position of DBCTIMEOUT field. */
#define RADIO_INTENCLR01_DBCTIMEOUT_Msk (0x1UL << RADIO_INTENCLR01_DBCTIMEOUT_Pos) /*!< Bit mask of DBCTIMEOUT field. */
#define RADIO_INTENCLR01_DBCTIMEOUT_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR01_DBCTIMEOUT_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR01_DBCTIMEOUT_Clear (0x1UL) /*!< Disable */

/* Register: RADIO_INTPEND00 */
/* Description: Pending interrupts */

/* Bit 31 : Read pending status of interrupt for event CHNOUPDATED */
#define RADIO_INTPEND00_CHNOUPDATED_Pos (31UL) /*!< Position of CHNOUPDATED field. */
#define RADIO_INTPEND00_CHNOUPDATED_Msk (0x1UL << RADIO_INTPEND00_CHNOUPDATED_Pos) /*!< Bit mask of CHNOUPDATED field. */
#define RADIO_INTPEND00_CHNOUPDATED_NotPending (0x0UL) /*!< Read: Not pending */
#define RADIO_INTPEND00_CHNOUPDATED_Pending (0x1UL) /*!< Read: Pending */

/* Bit 30 : Read pending status of interrupt for event CALDONE */
#define RADIO_INTPEND00_CALDONE_Pos (30UL) /*!< Position of CALDONE field. */
#define RADIO_INTPEND00_CALDONE_Msk (0x1UL << RADIO_INTPEND00_CALDONE_Pos) /*!< Bit mask of CALDONE field. */
#define RADIO_INTPEND00_CALDONE_NotPending (0x0UL) /*!< Read: Not pending */
#define RADIO_INTPEND00_CALDONE_Pending (0x1UL) /*!< Read: Pending */

/* Bit 29 : Read pending status of interrupt for event LBREADY */
#define RADIO_INTPEND00_LBREADY_Pos (29UL) /*!< Position of LBREADY field. */
#define RADIO_INTPEND00_LBREADY_Msk (0x1UL << RADIO_INTPEND00_LBREADY_Pos) /*!< Bit mask of LBREADY field. */
#define RADIO_INTPEND00_LBREADY_NotPending (0x0UL) /*!< Read: Not pending */
#define RADIO_INTPEND00_LBREADY_Pending (0x1UL) /*!< Read: Pending */

/* Bit 28 : Read pending status of interrupt for event CTEEND */
#define RADIO_INTPEND00_CTEEND_Pos (28UL) /*!< Position of CTEEND field. */
#define RADIO_INTPEND00_CTEEND_Msk (0x1UL << RADIO_INTPEND00_CTEEND_Pos) /*!< Bit mask of CTEEND field. */
#define RADIO_INTPEND00_CTEEND_NotPending (0x0UL) /*!< Read: Not pending */
#define RADIO_INTPEND00_CTEEND_Pending (0x1UL) /*!< Read: Pending */

/* Bit 27 : Read pending status of interrupt for event MODEREADY */
#define RADIO_INTPEND00_MODEREADY_Pos (27UL) /*!< Position of MODEREADY field. */
#define RADIO_INTPEND00_MODEREADY_Msk (0x1UL << RADIO_INTPEND00_MODEREADY_Pos) /*!< Bit mask of MODEREADY field. */
#define RADIO_INTPEND00_MODEREADY_NotPending (0x0UL) /*!< Read: Not pending */
#define RADIO_INTPEND00_MODEREADY_Pending (0x1UL) /*!< Read: Pending */

/* Bit 26 : Read pending status of interrupt for event MODEWRITTEN */
#define RADIO_INTPEND00_MODEWRITTEN_Pos (26UL) /*!< Position of MODEWRITTEN field. */
#define RADIO_INTPEND00_MODEWRITTEN_Msk (0x1UL << RADIO_INTPEND00_MODEWRITTEN_Pos) /*!< Bit mask of MODEWRITTEN field. */
#define RADIO_INTPEND00_MODEWRITTEN_NotPending (0x0UL) /*!< Read: Not pending */
#define RADIO_INTPEND00_MODEWRITTEN_Pending (0x1UL) /*!< Read: Pending */

/* Bit 25 : Read pending status of interrupt for event DFEEND */
#define RADIO_INTPEND00_DFEEND_Pos (25UL) /*!< Position of DFEEND field. */
#define RADIO_INTPEND00_DFEEND_Msk (0x1UL << RADIO_INTPEND00_DFEEND_Pos) /*!< Bit mask of DFEEND field. */
#define RADIO_INTPEND00_DFEEND_NotPending (0x0UL) /*!< Read: Not pending */
#define RADIO_INTPEND00_DFEEND_Pending (0x1UL) /*!< Read: Pending */

/* Bit 24 : Read pending status of interrupt for event CTEWARNING */
#define RADIO_INTPEND00_CTEWARNING_Pos (24UL) /*!< Position of CTEWARNING field. */
#define RADIO_INTPEND00_CTEWARNING_Msk (0x1UL << RADIO_INTPEND00_CTEWARNING_Pos) /*!< Bit mask of CTEWARNING field. */
#define RADIO_INTPEND00_CTEWARNING_NotPending (0x0UL) /*!< Read: Not pending */
#define RADIO_INTPEND00_CTEWARNING_Pending (0x1UL) /*!< Read: Pending */

/* Bit 23 : Read pending status of interrupt for event CTEPRESENT */
#define RADIO_INTPEND00_CTEPRESENT_Pos (23UL) /*!< Position of CTEPRESENT field. */
#define RADIO_INTPEND00_CTEPRESENT_Msk (0x1UL << RADIO_INTPEND00_CTEPRESENT_Pos) /*!< Bit mask of CTEPRESENT field. */
#define RADIO_INTPEND00_CTEPRESENT_NotPending (0x0UL) /*!< Read: Not pending */
#define RADIO_INTPEND00_CTEPRESENT_Pending (0x1UL) /*!< Read: Pending */

/* Bit 22 : Read pending status of interrupt for event SYNC */
#define RADIO_INTPEND00_SYNC_Pos (22UL) /*!< Position of SYNC field. */
#define RADIO_INTPEND00_SYNC_Msk (0x1UL << RADIO_INTPEND00_SYNC_Pos) /*!< Bit mask of SYNC field. */
#define RADIO_INTPEND00_SYNC_NotPending (0x0UL) /*!< Read: Not pending */
#define RADIO_INTPEND00_SYNC_Pending (0x1UL) /*!< Read: Pending */

/* Bit 21 : Read pending status of interrupt for event MHRMATCH */
#define RADIO_INTPEND00_MHRMATCH_Pos (21UL) /*!< Position of MHRMATCH field. */
#define RADIO_INTPEND00_MHRMATCH_Msk (0x1UL << RADIO_INTPEND00_MHRMATCH_Pos) /*!< Bit mask of MHRMATCH field. */
#define RADIO_INTPEND00_MHRMATCH_NotPending (0x0UL) /*!< Read: Not pending */
#define RADIO_INTPEND00_MHRMATCH_Pending (0x1UL) /*!< Read: Pending */

/* Bit 20 : Read pending status of interrupt for event RATEBOOST */
#define RADIO_INTPEND00_RATEBOOST_Pos (20UL) /*!< Position of RATEBOOST field. */
#define RADIO_INTPEND00_RATEBOOST_Msk (0x1UL << RADIO_INTPEND00_RATEBOOST_Pos) /*!< Bit mask of RATEBOOST field. */
#define RADIO_INTPEND00_RATEBOOST_NotPending (0x0UL) /*!< Read: Not pending */
#define RADIO_INTPEND00_RATEBOOST_Pending (0x1UL) /*!< Read: Pending */

/* Bit 19 : Read pending status of interrupt for event CCASTOPPED */
#define RADIO_INTPEND00_CCASTOPPED_Pos (19UL) /*!< Position of CCASTOPPED field. */
#define RADIO_INTPEND00_CCASTOPPED_Msk (0x1UL << RADIO_INTPEND00_CCASTOPPED_Pos) /*!< Bit mask of CCASTOPPED field. */
#define RADIO_INTPEND00_CCASTOPPED_NotPending (0x0UL) /*!< Read: Not pending */
#define RADIO_INTPEND00_CCASTOPPED_Pending (0x1UL) /*!< Read: Pending */

/* Bit 18 : Read pending status of interrupt for event CCABUSY */
#define RADIO_INTPEND00_CCABUSY_Pos (18UL) /*!< Position of CCABUSY field. */
#define RADIO_INTPEND00_CCABUSY_Msk (0x1UL << RADIO_INTPEND00_CCABUSY_Pos) /*!< Bit mask of CCABUSY field. */
#define RADIO_INTPEND00_CCABUSY_NotPending (0x0UL) /*!< Read: Not pending */
#define RADIO_INTPEND00_CCABUSY_Pending (0x1UL) /*!< Read: Pending */

/* Bit 17 : Read pending status of interrupt for event CCAIDLE */
#define RADIO_INTPEND00_CCAIDLE_Pos (17UL) /*!< Position of CCAIDLE field. */
#define RADIO_INTPEND00_CCAIDLE_Msk (0x1UL << RADIO_INTPEND00_CCAIDLE_Pos) /*!< Bit mask of CCAIDLE field. */
#define RADIO_INTPEND00_CCAIDLE_NotPending (0x0UL) /*!< Read: Not pending */
#define RADIO_INTPEND00_CCAIDLE_Pending (0x1UL) /*!< Read: Pending */

/* Bit 16 : Read pending status of interrupt for event EDSTOPPED */
#define RADIO_INTPEND00_EDSTOPPED_Pos (16UL) /*!< Position of EDSTOPPED field. */
#define RADIO_INTPEND00_EDSTOPPED_Msk (0x1UL << RADIO_INTPEND00_EDSTOPPED_Pos) /*!< Bit mask of EDSTOPPED field. */
#define RADIO_INTPEND00_EDSTOPPED_NotPending (0x0UL) /*!< Read: Not pending */
#define RADIO_INTPEND00_EDSTOPPED_Pending (0x1UL) /*!< Read: Pending */

/* Bit 15 : Read pending status of interrupt for event EDEND */
#define RADIO_INTPEND00_EDEND_Pos (15UL) /*!< Position of EDEND field. */
#define RADIO_INTPEND00_EDEND_Msk (0x1UL << RADIO_INTPEND00_EDEND_Pos) /*!< Bit mask of EDEND field. */
#define RADIO_INTPEND00_EDEND_NotPending (0x0UL) /*!< Read: Not pending */
#define RADIO_INTPEND00_EDEND_Pending (0x1UL) /*!< Read: Pending */

/* Bit 14 : Read pending status of interrupt for event BCMATCH */
#define RADIO_INTPEND00_BCMATCH_Pos (14UL) /*!< Position of BCMATCH field. */
#define RADIO_INTPEND00_BCMATCH_Msk (0x1UL << RADIO_INTPEND00_BCMATCH_Pos) /*!< Bit mask of BCMATCH field. */
#define RADIO_INTPEND00_BCMATCH_NotPending (0x0UL) /*!< Read: Not pending */
#define RADIO_INTPEND00_BCMATCH_Pending (0x1UL) /*!< Read: Pending */

/* Bit 12 : Read pending status of interrupt for event CRCERROR */
#define RADIO_INTPEND00_CRCERROR_Pos (12UL) /*!< Position of CRCERROR field. */
#define RADIO_INTPEND00_CRCERROR_Msk (0x1UL << RADIO_INTPEND00_CRCERROR_Pos) /*!< Bit mask of CRCERROR field. */
#define RADIO_INTPEND00_CRCERROR_NotPending (0x0UL) /*!< Read: Not pending */
#define RADIO_INTPEND00_CRCERROR_Pending (0x1UL) /*!< Read: Pending */

/* Bit 11 : Read pending status of interrupt for event CRCOK */
#define RADIO_INTPEND00_CRCOK_Pos (11UL) /*!< Position of CRCOK field. */
#define RADIO_INTPEND00_CRCOK_Msk (0x1UL << RADIO_INTPEND00_CRCOK_Pos) /*!< Bit mask of CRCOK field. */
#define RADIO_INTPEND00_CRCOK_NotPending (0x0UL) /*!< Read: Not pending */
#define RADIO_INTPEND00_CRCOK_Pending (0x1UL) /*!< Read: Pending */

/* Bit 10 : Read pending status of interrupt for event DEVMISS */
#define RADIO_INTPEND00_DEVMISS_Pos (10UL) /*!< Position of DEVMISS field. */
#define RADIO_INTPEND00_DEVMISS_Msk (0x1UL << RADIO_INTPEND00_DEVMISS_Pos) /*!< Bit mask of DEVMISS field. */
#define RADIO_INTPEND00_DEVMISS_NotPending (0x0UL) /*!< Read: Not pending */
#define RADIO_INTPEND00_DEVMISS_Pending (0x1UL) /*!< Read: Pending */

/* Bit 9 : Read pending status of interrupt for event DEVMATCH */
#define RADIO_INTPEND00_DEVMATCH_Pos (9UL) /*!< Position of DEVMATCH field. */
#define RADIO_INTPEND00_DEVMATCH_Msk (0x1UL << RADIO_INTPEND00_DEVMATCH_Pos) /*!< Bit mask of DEVMATCH field. */
#define RADIO_INTPEND00_DEVMATCH_NotPending (0x0UL) /*!< Read: Not pending */
#define RADIO_INTPEND00_DEVMATCH_Pending (0x1UL) /*!< Read: Pending */

/* Bit 8 : Read pending status of interrupt for event DISABLED */
#define RADIO_INTPEND00_DISABLED_Pos (8UL) /*!< Position of DISABLED field. */
#define RADIO_INTPEND00_DISABLED_Msk (0x1UL << RADIO_INTPEND00_DISABLED_Pos) /*!< Bit mask of DISABLED field. */
#define RADIO_INTPEND00_DISABLED_NotPending (0x0UL) /*!< Read: Not pending */
#define RADIO_INTPEND00_DISABLED_Pending (0x1UL) /*!< Read: Pending */

/* Bit 7 : Read pending status of interrupt for event PHYEND */
#define RADIO_INTPEND00_PHYEND_Pos (7UL) /*!< Position of PHYEND field. */
#define RADIO_INTPEND00_PHYEND_Msk (0x1UL << RADIO_INTPEND00_PHYEND_Pos) /*!< Bit mask of PHYEND field. */
#define RADIO_INTPEND00_PHYEND_NotPending (0x0UL) /*!< Read: Not pending */
#define RADIO_INTPEND00_PHYEND_Pending (0x1UL) /*!< Read: Pending */

/* Bit 6 : Read pending status of interrupt for event END */
#define RADIO_INTPEND00_END_Pos (6UL) /*!< Position of END field. */
#define RADIO_INTPEND00_END_Msk (0x1UL << RADIO_INTPEND00_END_Pos) /*!< Bit mask of END field. */
#define RADIO_INTPEND00_END_NotPending (0x0UL) /*!< Read: Not pending */
#define RADIO_INTPEND00_END_Pending (0x1UL) /*!< Read: Pending */

/* Bit 5 : Read pending status of interrupt for event PAYLOAD */
#define RADIO_INTPEND00_PAYLOAD_Pos (5UL) /*!< Position of PAYLOAD field. */
#define RADIO_INTPEND00_PAYLOAD_Msk (0x1UL << RADIO_INTPEND00_PAYLOAD_Pos) /*!< Bit mask of PAYLOAD field. */
#define RADIO_INTPEND00_PAYLOAD_NotPending (0x0UL) /*!< Read: Not pending */
#define RADIO_INTPEND00_PAYLOAD_Pending (0x1UL) /*!< Read: Pending */

/* Bit 4 : Read pending status of interrupt for event FRAMESTART */
#define RADIO_INTPEND00_FRAMESTART_Pos (4UL) /*!< Position of FRAMESTART field. */
#define RADIO_INTPEND00_FRAMESTART_Msk (0x1UL << RADIO_INTPEND00_FRAMESTART_Pos) /*!< Bit mask of FRAMESTART field. */
#define RADIO_INTPEND00_FRAMESTART_NotPending (0x0UL) /*!< Read: Not pending */
#define RADIO_INTPEND00_FRAMESTART_Pending (0x1UL) /*!< Read: Pending */

/* Bit 3 : Read pending status of interrupt for event ADDRESS */
#define RADIO_INTPEND00_ADDRESS_Pos (3UL) /*!< Position of ADDRESS field. */
#define RADIO_INTPEND00_ADDRESS_Msk (0x1UL << RADIO_INTPEND00_ADDRESS_Pos) /*!< Bit mask of ADDRESS field. */
#define RADIO_INTPEND00_ADDRESS_NotPending (0x0UL) /*!< Read: Not pending */
#define RADIO_INTPEND00_ADDRESS_Pending (0x1UL) /*!< Read: Pending */

/* Bit 2 : Read pending status of interrupt for event RXREADY */
#define RADIO_INTPEND00_RXREADY_Pos (2UL) /*!< Position of RXREADY field. */
#define RADIO_INTPEND00_RXREADY_Msk (0x1UL << RADIO_INTPEND00_RXREADY_Pos) /*!< Bit mask of RXREADY field. */
#define RADIO_INTPEND00_RXREADY_NotPending (0x0UL) /*!< Read: Not pending */
#define RADIO_INTPEND00_RXREADY_Pending (0x1UL) /*!< Read: Pending */

/* Bit 1 : Read pending status of interrupt for event TXREADY */
#define RADIO_INTPEND00_TXREADY_Pos (1UL) /*!< Position of TXREADY field. */
#define RADIO_INTPEND00_TXREADY_Msk (0x1UL << RADIO_INTPEND00_TXREADY_Pos) /*!< Bit mask of TXREADY field. */
#define RADIO_INTPEND00_TXREADY_NotPending (0x0UL) /*!< Read: Not pending */
#define RADIO_INTPEND00_TXREADY_Pending (0x1UL) /*!< Read: Pending */

/* Bit 0 : Read pending status of interrupt for event READY */
#define RADIO_INTPEND00_READY_Pos (0UL) /*!< Position of READY field. */
#define RADIO_INTPEND00_READY_Msk (0x1UL << RADIO_INTPEND00_READY_Pos) /*!< Bit mask of READY field. */
#define RADIO_INTPEND00_READY_NotPending (0x0UL) /*!< Read: Not pending */
#define RADIO_INTPEND00_READY_Pending (0x1UL) /*!< Read: Pending */

/* Register: RADIO_INTPEND01 */
/* Description: Pending interrupts */

/* Bit 17 : Read pending status of interrupt for event ACQINJ1DMAEND */
#define RADIO_INTPEND01_ACQINJ1DMAEND_Pos (17UL) /*!< Position of ACQINJ1DMAEND field. */
#define RADIO_INTPEND01_ACQINJ1DMAEND_Msk (0x1UL << RADIO_INTPEND01_ACQINJ1DMAEND_Pos) /*!< Bit mask of ACQINJ1DMAEND field. */
#define RADIO_INTPEND01_ACQINJ1DMAEND_NotPending (0x0UL) /*!< Read: Not pending */
#define RADIO_INTPEND01_ACQINJ1DMAEND_Pending (0x1UL) /*!< Read: Pending */

/* Bit 16 : Read pending status of interrupt for event ACQINJ0DMAEND */
#define RADIO_INTPEND01_ACQINJ0DMAEND_Pos (16UL) /*!< Position of ACQINJ0DMAEND field. */
#define RADIO_INTPEND01_ACQINJ0DMAEND_Msk (0x1UL << RADIO_INTPEND01_ACQINJ0DMAEND_Pos) /*!< Bit mask of ACQINJ0DMAEND field. */
#define RADIO_INTPEND01_ACQINJ0DMAEND_NotPending (0x0UL) /*!< Read: Not pending */
#define RADIO_INTPEND01_ACQINJ0DMAEND_Pending (0x1UL) /*!< Read: Pending */

/* Bit 13 : Read pending status of interrupt for event INTERCEPTEDEVENT */
#define RADIO_INTPEND01_INTERCEPTEDEVENT_Pos (13UL) /*!< Position of INTERCEPTEDEVENT field. */
#define RADIO_INTPEND01_INTERCEPTEDEVENT_Msk (0x1UL << RADIO_INTPEND01_INTERCEPTEDEVENT_Pos) /*!< Bit mask of INTERCEPTEDEVENT field. */
#define RADIO_INTPEND01_INTERCEPTEDEVENT_NotPending (0x0UL) /*!< Read: Not pending */
#define RADIO_INTPEND01_INTERCEPTEDEVENT_Pending (0x1UL) /*!< Read: Pending */

/* Bit 12 : Read pending status of interrupt for event INTERCEPTEDTASK */
#define RADIO_INTPEND01_INTERCEPTEDTASK_Pos (12UL) /*!< Position of INTERCEPTEDTASK field. */
#define RADIO_INTPEND01_INTERCEPTEDTASK_Msk (0x1UL << RADIO_INTPEND01_INTERCEPTEDTASK_Pos) /*!< Bit mask of INTERCEPTEDTASK field. */
#define RADIO_INTPEND01_INTERCEPTEDTASK_NotPending (0x0UL) /*!< Read: Not pending */
#define RADIO_INTPEND01_INTERCEPTEDTASK_Pending (0x1UL) /*!< Read: Pending */

/* Bit 11 : Read pending status of interrupt for event DEMODCTRLCONDTRIGGERED2 */
#define RADIO_INTPEND01_DEMODCTRLCONDTRIGGERED2_Pos (11UL) /*!< Position of DEMODCTRLCONDTRIGGERED2 field. */
#define RADIO_INTPEND01_DEMODCTRLCONDTRIGGERED2_Msk (0x1UL << RADIO_INTPEND01_DEMODCTRLCONDTRIGGERED2_Pos) /*!< Bit mask of DEMODCTRLCONDTRIGGERED2 field. */
#define RADIO_INTPEND01_DEMODCTRLCONDTRIGGERED2_NotPending (0x0UL) /*!< Read: Not pending */
#define RADIO_INTPEND01_DEMODCTRLCONDTRIGGERED2_Pending (0x1UL) /*!< Read: Pending */

/* Bit 10 : Read pending status of interrupt for event DEMODCTRLCONDTRIGGERED1 */
#define RADIO_INTPEND01_DEMODCTRLCONDTRIGGERED1_Pos (10UL) /*!< Position of DEMODCTRLCONDTRIGGERED1 field. */
#define RADIO_INTPEND01_DEMODCTRLCONDTRIGGERED1_Msk (0x1UL << RADIO_INTPEND01_DEMODCTRLCONDTRIGGERED1_Pos) /*!< Bit mask of DEMODCTRLCONDTRIGGERED1 field. */
#define RADIO_INTPEND01_DEMODCTRLCONDTRIGGERED1_NotPending (0x0UL) /*!< Read: Not pending */
#define RADIO_INTPEND01_DEMODCTRLCONDTRIGGERED1_Pending (0x1UL) /*!< Read: Pending */

/* Bit 9 : Read pending status of interrupt for event DEMODCTRLCONDTRIGGERED0 */
#define RADIO_INTPEND01_DEMODCTRLCONDTRIGGERED0_Pos (9UL) /*!< Position of DEMODCTRLCONDTRIGGERED0 field. */
#define RADIO_INTPEND01_DEMODCTRLCONDTRIGGERED0_Msk (0x1UL << RADIO_INTPEND01_DEMODCTRLCONDTRIGGERED0_Pos) /*!< Bit mask of DEMODCTRLCONDTRIGGERED0 field. */
#define RADIO_INTPEND01_DEMODCTRLCONDTRIGGERED0_NotPending (0x0UL) /*!< Read: Not pending */
#define RADIO_INTPEND01_DEMODCTRLCONDTRIGGERED0_Pending (0x1UL) /*!< Read: Pending */

/* Bit 8 : Read pending status of interrupt for event STROBETIMETRACKUPDATED */
#define RADIO_INTPEND01_STROBETIMETRACKUPDATED_Pos (8UL) /*!< Position of STROBETIMETRACKUPDATED field. */
#define RADIO_INTPEND01_STROBETIMETRACKUPDATED_Msk (0x1UL << RADIO_INTPEND01_STROBETIMETRACKUPDATED_Pos) /*!< Bit mask of STROBETIMETRACKUPDATED field. */
#define RADIO_INTPEND01_STROBETIMETRACKUPDATED_NotPending (0x0UL) /*!< Read: Not pending */
#define RADIO_INTPEND01_STROBETIMETRACKUPDATED_Pending (0x1UL) /*!< Read: Pending */

/* Bit 7 : Read pending status of interrupt for event TIMERWRAPS */
#define RADIO_INTPEND01_TIMERWRAPS_Pos (7UL) /*!< Position of TIMERWRAPS field. */
#define RADIO_INTPEND01_TIMERWRAPS_Msk (0x1UL << RADIO_INTPEND01_TIMERWRAPS_Pos) /*!< Bit mask of TIMERWRAPS field. */
#define RADIO_INTPEND01_TIMERWRAPS_NotPending (0x0UL) /*!< Read: Not pending */
#define RADIO_INTPEND01_TIMERWRAPS_Pending (0x1UL) /*!< Read: Pending */

/* Bit 6 : Read pending status of interrupt for event DETECTFIFOFULL */
#define RADIO_INTPEND01_DETECTFIFOFULL_Pos (6UL) /*!< Position of DETECTFIFOFULL field. */
#define RADIO_INTPEND01_DETECTFIFOFULL_Msk (0x1UL << RADIO_INTPEND01_DETECTFIFOFULL_Pos) /*!< Bit mask of DETECTFIFOFULL field. */
#define RADIO_INTPEND01_DETECTFIFOFULL_NotPending (0x0UL) /*!< Read: Not pending */
#define RADIO_INTPEND01_DETECTFIFOFULL_Pending (0x1UL) /*!< Read: Pending */

/* Bit 5 : Read pending status of interrupt for event RAWDETECT */
#define RADIO_INTPEND01_RAWDETECT_Pos (5UL) /*!< Position of RAWDETECT field. */
#define RADIO_INTPEND01_RAWDETECT_Msk (0x1UL << RADIO_INTPEND01_RAWDETECT_Pos) /*!< Bit mask of RAWDETECT field. */
#define RADIO_INTPEND01_RAWDETECT_NotPending (0x0UL) /*!< Read: Not pending */
#define RADIO_INTPEND01_RAWDETECT_Pending (0x1UL) /*!< Read: Pending */

/* Bit 4 : Read pending status of interrupt for event RXDIGEN */
#define RADIO_INTPEND01_RXDIGEN_Pos (4UL) /*!< Position of RXDIGEN field. */
#define RADIO_INTPEND01_RXDIGEN_Msk (0x1UL << RADIO_INTPEND01_RXDIGEN_Pos) /*!< Bit mask of RXDIGEN field. */
#define RADIO_INTPEND01_RXDIGEN_NotPending (0x0UL) /*!< Read: Not pending */
#define RADIO_INTPEND01_RXDIGEN_Pending (0x1UL) /*!< Read: Pending */

/* Bit 2 : Read pending status of interrupt for event RXTIMERMATCH */
#define RADIO_INTPEND01_RXTIMERMATCH_Pos (2UL) /*!< Position of RXTIMERMATCH field. */
#define RADIO_INTPEND01_RXTIMERMATCH_Msk (0x1UL << RADIO_INTPEND01_RXTIMERMATCH_Pos) /*!< Bit mask of RXTIMERMATCH field. */
#define RADIO_INTPEND01_RXTIMERMATCH_NotPending (0x0UL) /*!< Read: Not pending */
#define RADIO_INTPEND01_RXTIMERMATCH_Pending (0x1UL) /*!< Read: Pending */

/* Bit 1 : Read pending status of interrupt for event TXTIMERMATCH */
#define RADIO_INTPEND01_TXTIMERMATCH_Pos (1UL) /*!< Position of TXTIMERMATCH field. */
#define RADIO_INTPEND01_TXTIMERMATCH_Msk (0x1UL << RADIO_INTPEND01_TXTIMERMATCH_Pos) /*!< Bit mask of TXTIMERMATCH field. */
#define RADIO_INTPEND01_TXTIMERMATCH_NotPending (0x0UL) /*!< Read: Not pending */
#define RADIO_INTPEND01_TXTIMERMATCH_Pending (0x1UL) /*!< Read: Pending */

/* Bit 0 : Read pending status of interrupt for event DBCTIMEOUT */
#define RADIO_INTPEND01_DBCTIMEOUT_Pos (0UL) /*!< Position of DBCTIMEOUT field. */
#define RADIO_INTPEND01_DBCTIMEOUT_Msk (0x1UL << RADIO_INTPEND01_DBCTIMEOUT_Pos) /*!< Bit mask of DBCTIMEOUT field. */
#define RADIO_INTPEND01_DBCTIMEOUT_NotPending (0x0UL) /*!< Read: Not pending */
#define RADIO_INTPEND01_DBCTIMEOUT_Pending (0x1UL) /*!< Read: Pending */

/* Register: RADIO_INTEN10 */
/* Description: Enable or disable interrupt */

/* Bit 31 : Enable or disable interrupt for event CHNOUPDATED */
#define RADIO_INTEN10_CHNOUPDATED_Pos (31UL) /*!< Position of CHNOUPDATED field. */
#define RADIO_INTEN10_CHNOUPDATED_Msk (0x1UL << RADIO_INTEN10_CHNOUPDATED_Pos) /*!< Bit mask of CHNOUPDATED field. */
#define RADIO_INTEN10_CHNOUPDATED_Disabled (0x0UL) /*!< Disable */
#define RADIO_INTEN10_CHNOUPDATED_Enabled (0x1UL) /*!< Enable */

/* Bit 30 : Enable or disable interrupt for event CALDONE */
#define RADIO_INTEN10_CALDONE_Pos (30UL) /*!< Position of CALDONE field. */
#define RADIO_INTEN10_CALDONE_Msk (0x1UL << RADIO_INTEN10_CALDONE_Pos) /*!< Bit mask of CALDONE field. */
#define RADIO_INTEN10_CALDONE_Disabled (0x0UL) /*!< Disable */
#define RADIO_INTEN10_CALDONE_Enabled (0x1UL) /*!< Enable */

/* Bit 29 : Enable or disable interrupt for event LBREADY */
#define RADIO_INTEN10_LBREADY_Pos (29UL) /*!< Position of LBREADY field. */
#define RADIO_INTEN10_LBREADY_Msk (0x1UL << RADIO_INTEN10_LBREADY_Pos) /*!< Bit mask of LBREADY field. */
#define RADIO_INTEN10_LBREADY_Disabled (0x0UL) /*!< Disable */
#define RADIO_INTEN10_LBREADY_Enabled (0x1UL) /*!< Enable */

/* Bit 28 : Enable or disable interrupt for event CTEEND */
#define RADIO_INTEN10_CTEEND_Pos (28UL) /*!< Position of CTEEND field. */
#define RADIO_INTEN10_CTEEND_Msk (0x1UL << RADIO_INTEN10_CTEEND_Pos) /*!< Bit mask of CTEEND field. */
#define RADIO_INTEN10_CTEEND_Disabled (0x0UL) /*!< Disable */
#define RADIO_INTEN10_CTEEND_Enabled (0x1UL) /*!< Enable */

/* Bit 27 : Enable or disable interrupt for event MODEREADY */
#define RADIO_INTEN10_MODEREADY_Pos (27UL) /*!< Position of MODEREADY field. */
#define RADIO_INTEN10_MODEREADY_Msk (0x1UL << RADIO_INTEN10_MODEREADY_Pos) /*!< Bit mask of MODEREADY field. */
#define RADIO_INTEN10_MODEREADY_Disabled (0x0UL) /*!< Disable */
#define RADIO_INTEN10_MODEREADY_Enabled (0x1UL) /*!< Enable */

/* Bit 26 : Enable or disable interrupt for event MODEWRITTEN */
#define RADIO_INTEN10_MODEWRITTEN_Pos (26UL) /*!< Position of MODEWRITTEN field. */
#define RADIO_INTEN10_MODEWRITTEN_Msk (0x1UL << RADIO_INTEN10_MODEWRITTEN_Pos) /*!< Bit mask of MODEWRITTEN field. */
#define RADIO_INTEN10_MODEWRITTEN_Disabled (0x0UL) /*!< Disable */
#define RADIO_INTEN10_MODEWRITTEN_Enabled (0x1UL) /*!< Enable */

/* Bit 25 : Enable or disable interrupt for event DFEEND */
#define RADIO_INTEN10_DFEEND_Pos (25UL) /*!< Position of DFEEND field. */
#define RADIO_INTEN10_DFEEND_Msk (0x1UL << RADIO_INTEN10_DFEEND_Pos) /*!< Bit mask of DFEEND field. */
#define RADIO_INTEN10_DFEEND_Disabled (0x0UL) /*!< Disable */
#define RADIO_INTEN10_DFEEND_Enabled (0x1UL) /*!< Enable */

/* Bit 24 : Enable or disable interrupt for event CTEWARNING */
#define RADIO_INTEN10_CTEWARNING_Pos (24UL) /*!< Position of CTEWARNING field. */
#define RADIO_INTEN10_CTEWARNING_Msk (0x1UL << RADIO_INTEN10_CTEWARNING_Pos) /*!< Bit mask of CTEWARNING field. */
#define RADIO_INTEN10_CTEWARNING_Disabled (0x0UL) /*!< Disable */
#define RADIO_INTEN10_CTEWARNING_Enabled (0x1UL) /*!< Enable */

/* Bit 23 : Enable or disable interrupt for event CTEPRESENT */
#define RADIO_INTEN10_CTEPRESENT_Pos (23UL) /*!< Position of CTEPRESENT field. */
#define RADIO_INTEN10_CTEPRESENT_Msk (0x1UL << RADIO_INTEN10_CTEPRESENT_Pos) /*!< Bit mask of CTEPRESENT field. */
#define RADIO_INTEN10_CTEPRESENT_Disabled (0x0UL) /*!< Disable */
#define RADIO_INTEN10_CTEPRESENT_Enabled (0x1UL) /*!< Enable */

/* Bit 22 : Enable or disable interrupt for event SYNC */
#define RADIO_INTEN10_SYNC_Pos (22UL) /*!< Position of SYNC field. */
#define RADIO_INTEN10_SYNC_Msk (0x1UL << RADIO_INTEN10_SYNC_Pos) /*!< Bit mask of SYNC field. */
#define RADIO_INTEN10_SYNC_Disabled (0x0UL) /*!< Disable */
#define RADIO_INTEN10_SYNC_Enabled (0x1UL) /*!< Enable */

/* Bit 21 : Enable or disable interrupt for event MHRMATCH */
#define RADIO_INTEN10_MHRMATCH_Pos (21UL) /*!< Position of MHRMATCH field. */
#define RADIO_INTEN10_MHRMATCH_Msk (0x1UL << RADIO_INTEN10_MHRMATCH_Pos) /*!< Bit mask of MHRMATCH field. */
#define RADIO_INTEN10_MHRMATCH_Disabled (0x0UL) /*!< Disable */
#define RADIO_INTEN10_MHRMATCH_Enabled (0x1UL) /*!< Enable */

/* Bit 20 : Enable or disable interrupt for event RATEBOOST */
#define RADIO_INTEN10_RATEBOOST_Pos (20UL) /*!< Position of RATEBOOST field. */
#define RADIO_INTEN10_RATEBOOST_Msk (0x1UL << RADIO_INTEN10_RATEBOOST_Pos) /*!< Bit mask of RATEBOOST field. */
#define RADIO_INTEN10_RATEBOOST_Disabled (0x0UL) /*!< Disable */
#define RADIO_INTEN10_RATEBOOST_Enabled (0x1UL) /*!< Enable */

/* Bit 19 : Enable or disable interrupt for event CCASTOPPED */
#define RADIO_INTEN10_CCASTOPPED_Pos (19UL) /*!< Position of CCASTOPPED field. */
#define RADIO_INTEN10_CCASTOPPED_Msk (0x1UL << RADIO_INTEN10_CCASTOPPED_Pos) /*!< Bit mask of CCASTOPPED field. */
#define RADIO_INTEN10_CCASTOPPED_Disabled (0x0UL) /*!< Disable */
#define RADIO_INTEN10_CCASTOPPED_Enabled (0x1UL) /*!< Enable */

/* Bit 18 : Enable or disable interrupt for event CCABUSY */
#define RADIO_INTEN10_CCABUSY_Pos (18UL) /*!< Position of CCABUSY field. */
#define RADIO_INTEN10_CCABUSY_Msk (0x1UL << RADIO_INTEN10_CCABUSY_Pos) /*!< Bit mask of CCABUSY field. */
#define RADIO_INTEN10_CCABUSY_Disabled (0x0UL) /*!< Disable */
#define RADIO_INTEN10_CCABUSY_Enabled (0x1UL) /*!< Enable */

/* Bit 17 : Enable or disable interrupt for event CCAIDLE */
#define RADIO_INTEN10_CCAIDLE_Pos (17UL) /*!< Position of CCAIDLE field. */
#define RADIO_INTEN10_CCAIDLE_Msk (0x1UL << RADIO_INTEN10_CCAIDLE_Pos) /*!< Bit mask of CCAIDLE field. */
#define RADIO_INTEN10_CCAIDLE_Disabled (0x0UL) /*!< Disable */
#define RADIO_INTEN10_CCAIDLE_Enabled (0x1UL) /*!< Enable */

/* Bit 16 : Enable or disable interrupt for event EDSTOPPED */
#define RADIO_INTEN10_EDSTOPPED_Pos (16UL) /*!< Position of EDSTOPPED field. */
#define RADIO_INTEN10_EDSTOPPED_Msk (0x1UL << RADIO_INTEN10_EDSTOPPED_Pos) /*!< Bit mask of EDSTOPPED field. */
#define RADIO_INTEN10_EDSTOPPED_Disabled (0x0UL) /*!< Disable */
#define RADIO_INTEN10_EDSTOPPED_Enabled (0x1UL) /*!< Enable */

/* Bit 15 : Enable or disable interrupt for event EDEND */
#define RADIO_INTEN10_EDEND_Pos (15UL) /*!< Position of EDEND field. */
#define RADIO_INTEN10_EDEND_Msk (0x1UL << RADIO_INTEN10_EDEND_Pos) /*!< Bit mask of EDEND field. */
#define RADIO_INTEN10_EDEND_Disabled (0x0UL) /*!< Disable */
#define RADIO_INTEN10_EDEND_Enabled (0x1UL) /*!< Enable */

/* Bit 14 : Enable or disable interrupt for event BCMATCH */
#define RADIO_INTEN10_BCMATCH_Pos (14UL) /*!< Position of BCMATCH field. */
#define RADIO_INTEN10_BCMATCH_Msk (0x1UL << RADIO_INTEN10_BCMATCH_Pos) /*!< Bit mask of BCMATCH field. */
#define RADIO_INTEN10_BCMATCH_Disabled (0x0UL) /*!< Disable */
#define RADIO_INTEN10_BCMATCH_Enabled (0x1UL) /*!< Enable */

/* Bit 12 : Enable or disable interrupt for event CRCERROR */
#define RADIO_INTEN10_CRCERROR_Pos (12UL) /*!< Position of CRCERROR field. */
#define RADIO_INTEN10_CRCERROR_Msk (0x1UL << RADIO_INTEN10_CRCERROR_Pos) /*!< Bit mask of CRCERROR field. */
#define RADIO_INTEN10_CRCERROR_Disabled (0x0UL) /*!< Disable */
#define RADIO_INTEN10_CRCERROR_Enabled (0x1UL) /*!< Enable */

/* Bit 11 : Enable or disable interrupt for event CRCOK */
#define RADIO_INTEN10_CRCOK_Pos (11UL) /*!< Position of CRCOK field. */
#define RADIO_INTEN10_CRCOK_Msk (0x1UL << RADIO_INTEN10_CRCOK_Pos) /*!< Bit mask of CRCOK field. */
#define RADIO_INTEN10_CRCOK_Disabled (0x0UL) /*!< Disable */
#define RADIO_INTEN10_CRCOK_Enabled (0x1UL) /*!< Enable */

/* Bit 10 : Enable or disable interrupt for event DEVMISS */
#define RADIO_INTEN10_DEVMISS_Pos (10UL) /*!< Position of DEVMISS field. */
#define RADIO_INTEN10_DEVMISS_Msk (0x1UL << RADIO_INTEN10_DEVMISS_Pos) /*!< Bit mask of DEVMISS field. */
#define RADIO_INTEN10_DEVMISS_Disabled (0x0UL) /*!< Disable */
#define RADIO_INTEN10_DEVMISS_Enabled (0x1UL) /*!< Enable */

/* Bit 9 : Enable or disable interrupt for event DEVMATCH */
#define RADIO_INTEN10_DEVMATCH_Pos (9UL) /*!< Position of DEVMATCH field. */
#define RADIO_INTEN10_DEVMATCH_Msk (0x1UL << RADIO_INTEN10_DEVMATCH_Pos) /*!< Bit mask of DEVMATCH field. */
#define RADIO_INTEN10_DEVMATCH_Disabled (0x0UL) /*!< Disable */
#define RADIO_INTEN10_DEVMATCH_Enabled (0x1UL) /*!< Enable */

/* Bit 8 : Enable or disable interrupt for event DISABLED */
#define RADIO_INTEN10_DISABLED_Pos (8UL) /*!< Position of DISABLED field. */
#define RADIO_INTEN10_DISABLED_Msk (0x1UL << RADIO_INTEN10_DISABLED_Pos) /*!< Bit mask of DISABLED field. */
#define RADIO_INTEN10_DISABLED_Disabled (0x0UL) /*!< Disable */
#define RADIO_INTEN10_DISABLED_Enabled (0x1UL) /*!< Enable */

/* Bit 7 : Enable or disable interrupt for event PHYEND */
#define RADIO_INTEN10_PHYEND_Pos (7UL) /*!< Position of PHYEND field. */
#define RADIO_INTEN10_PHYEND_Msk (0x1UL << RADIO_INTEN10_PHYEND_Pos) /*!< Bit mask of PHYEND field. */
#define RADIO_INTEN10_PHYEND_Disabled (0x0UL) /*!< Disable */
#define RADIO_INTEN10_PHYEND_Enabled (0x1UL) /*!< Enable */

/* Bit 6 : Enable or disable interrupt for event END */
#define RADIO_INTEN10_END_Pos (6UL) /*!< Position of END field. */
#define RADIO_INTEN10_END_Msk (0x1UL << RADIO_INTEN10_END_Pos) /*!< Bit mask of END field. */
#define RADIO_INTEN10_END_Disabled (0x0UL) /*!< Disable */
#define RADIO_INTEN10_END_Enabled (0x1UL) /*!< Enable */

/* Bit 5 : Enable or disable interrupt for event PAYLOAD */
#define RADIO_INTEN10_PAYLOAD_Pos (5UL) /*!< Position of PAYLOAD field. */
#define RADIO_INTEN10_PAYLOAD_Msk (0x1UL << RADIO_INTEN10_PAYLOAD_Pos) /*!< Bit mask of PAYLOAD field. */
#define RADIO_INTEN10_PAYLOAD_Disabled (0x0UL) /*!< Disable */
#define RADIO_INTEN10_PAYLOAD_Enabled (0x1UL) /*!< Enable */

/* Bit 4 : Enable or disable interrupt for event FRAMESTART */
#define RADIO_INTEN10_FRAMESTART_Pos (4UL) /*!< Position of FRAMESTART field. */
#define RADIO_INTEN10_FRAMESTART_Msk (0x1UL << RADIO_INTEN10_FRAMESTART_Pos) /*!< Bit mask of FRAMESTART field. */
#define RADIO_INTEN10_FRAMESTART_Disabled (0x0UL) /*!< Disable */
#define RADIO_INTEN10_FRAMESTART_Enabled (0x1UL) /*!< Enable */

/* Bit 3 : Enable or disable interrupt for event ADDRESS */
#define RADIO_INTEN10_ADDRESS_Pos (3UL) /*!< Position of ADDRESS field. */
#define RADIO_INTEN10_ADDRESS_Msk (0x1UL << RADIO_INTEN10_ADDRESS_Pos) /*!< Bit mask of ADDRESS field. */
#define RADIO_INTEN10_ADDRESS_Disabled (0x0UL) /*!< Disable */
#define RADIO_INTEN10_ADDRESS_Enabled (0x1UL) /*!< Enable */

/* Bit 2 : Enable or disable interrupt for event RXREADY */
#define RADIO_INTEN10_RXREADY_Pos (2UL) /*!< Position of RXREADY field. */
#define RADIO_INTEN10_RXREADY_Msk (0x1UL << RADIO_INTEN10_RXREADY_Pos) /*!< Bit mask of RXREADY field. */
#define RADIO_INTEN10_RXREADY_Disabled (0x0UL) /*!< Disable */
#define RADIO_INTEN10_RXREADY_Enabled (0x1UL) /*!< Enable */

/* Bit 1 : Enable or disable interrupt for event TXREADY */
#define RADIO_INTEN10_TXREADY_Pos (1UL) /*!< Position of TXREADY field. */
#define RADIO_INTEN10_TXREADY_Msk (0x1UL << RADIO_INTEN10_TXREADY_Pos) /*!< Bit mask of TXREADY field. */
#define RADIO_INTEN10_TXREADY_Disabled (0x0UL) /*!< Disable */
#define RADIO_INTEN10_TXREADY_Enabled (0x1UL) /*!< Enable */

/* Bit 0 : Enable or disable interrupt for event READY */
#define RADIO_INTEN10_READY_Pos (0UL) /*!< Position of READY field. */
#define RADIO_INTEN10_READY_Msk (0x1UL << RADIO_INTEN10_READY_Pos) /*!< Bit mask of READY field. */
#define RADIO_INTEN10_READY_Disabled (0x0UL) /*!< Disable */
#define RADIO_INTEN10_READY_Enabled (0x1UL) /*!< Enable */

/* Register: RADIO_INTEN11 */
/* Description: Enable or disable interrupt */

/* Bit 17 : Enable or disable interrupt for event ACQINJ1DMAEND */
#define RADIO_INTEN11_ACQINJ1DMAEND_Pos (17UL) /*!< Position of ACQINJ1DMAEND field. */
#define RADIO_INTEN11_ACQINJ1DMAEND_Msk (0x1UL << RADIO_INTEN11_ACQINJ1DMAEND_Pos) /*!< Bit mask of ACQINJ1DMAEND field. */
#define RADIO_INTEN11_ACQINJ1DMAEND_Disabled (0x0UL) /*!< Disable */
#define RADIO_INTEN11_ACQINJ1DMAEND_Enabled (0x1UL) /*!< Enable */

/* Bit 16 : Enable or disable interrupt for event ACQINJ0DMAEND */
#define RADIO_INTEN11_ACQINJ0DMAEND_Pos (16UL) /*!< Position of ACQINJ0DMAEND field. */
#define RADIO_INTEN11_ACQINJ0DMAEND_Msk (0x1UL << RADIO_INTEN11_ACQINJ0DMAEND_Pos) /*!< Bit mask of ACQINJ0DMAEND field. */
#define RADIO_INTEN11_ACQINJ0DMAEND_Disabled (0x0UL) /*!< Disable */
#define RADIO_INTEN11_ACQINJ0DMAEND_Enabled (0x1UL) /*!< Enable */

/* Bit 13 : Enable or disable interrupt for event INTERCEPTEDEVENT */
#define RADIO_INTEN11_INTERCEPTEDEVENT_Pos (13UL) /*!< Position of INTERCEPTEDEVENT field. */
#define RADIO_INTEN11_INTERCEPTEDEVENT_Msk (0x1UL << RADIO_INTEN11_INTERCEPTEDEVENT_Pos) /*!< Bit mask of INTERCEPTEDEVENT field. */
#define RADIO_INTEN11_INTERCEPTEDEVENT_Disabled (0x0UL) /*!< Disable */
#define RADIO_INTEN11_INTERCEPTEDEVENT_Enabled (0x1UL) /*!< Enable */

/* Bit 12 : Enable or disable interrupt for event INTERCEPTEDTASK */
#define RADIO_INTEN11_INTERCEPTEDTASK_Pos (12UL) /*!< Position of INTERCEPTEDTASK field. */
#define RADIO_INTEN11_INTERCEPTEDTASK_Msk (0x1UL << RADIO_INTEN11_INTERCEPTEDTASK_Pos) /*!< Bit mask of INTERCEPTEDTASK field. */
#define RADIO_INTEN11_INTERCEPTEDTASK_Disabled (0x0UL) /*!< Disable */
#define RADIO_INTEN11_INTERCEPTEDTASK_Enabled (0x1UL) /*!< Enable */

/* Bit 11 : Enable or disable interrupt for event DEMODCTRLCONDTRIGGERED2 */
#define RADIO_INTEN11_DEMODCTRLCONDTRIGGERED2_Pos (11UL) /*!< Position of DEMODCTRLCONDTRIGGERED2 field. */
#define RADIO_INTEN11_DEMODCTRLCONDTRIGGERED2_Msk (0x1UL << RADIO_INTEN11_DEMODCTRLCONDTRIGGERED2_Pos) /*!< Bit mask of DEMODCTRLCONDTRIGGERED2 field. */
#define RADIO_INTEN11_DEMODCTRLCONDTRIGGERED2_Disabled (0x0UL) /*!< Disable */
#define RADIO_INTEN11_DEMODCTRLCONDTRIGGERED2_Enabled (0x1UL) /*!< Enable */

/* Bit 10 : Enable or disable interrupt for event DEMODCTRLCONDTRIGGERED1 */
#define RADIO_INTEN11_DEMODCTRLCONDTRIGGERED1_Pos (10UL) /*!< Position of DEMODCTRLCONDTRIGGERED1 field. */
#define RADIO_INTEN11_DEMODCTRLCONDTRIGGERED1_Msk (0x1UL << RADIO_INTEN11_DEMODCTRLCONDTRIGGERED1_Pos) /*!< Bit mask of DEMODCTRLCONDTRIGGERED1 field. */
#define RADIO_INTEN11_DEMODCTRLCONDTRIGGERED1_Disabled (0x0UL) /*!< Disable */
#define RADIO_INTEN11_DEMODCTRLCONDTRIGGERED1_Enabled (0x1UL) /*!< Enable */

/* Bit 9 : Enable or disable interrupt for event DEMODCTRLCONDTRIGGERED0 */
#define RADIO_INTEN11_DEMODCTRLCONDTRIGGERED0_Pos (9UL) /*!< Position of DEMODCTRLCONDTRIGGERED0 field. */
#define RADIO_INTEN11_DEMODCTRLCONDTRIGGERED0_Msk (0x1UL << RADIO_INTEN11_DEMODCTRLCONDTRIGGERED0_Pos) /*!< Bit mask of DEMODCTRLCONDTRIGGERED0 field. */
#define RADIO_INTEN11_DEMODCTRLCONDTRIGGERED0_Disabled (0x0UL) /*!< Disable */
#define RADIO_INTEN11_DEMODCTRLCONDTRIGGERED0_Enabled (0x1UL) /*!< Enable */

/* Bit 8 : Enable or disable interrupt for event STROBETIMETRACKUPDATED */
#define RADIO_INTEN11_STROBETIMETRACKUPDATED_Pos (8UL) /*!< Position of STROBETIMETRACKUPDATED field. */
#define RADIO_INTEN11_STROBETIMETRACKUPDATED_Msk (0x1UL << RADIO_INTEN11_STROBETIMETRACKUPDATED_Pos) /*!< Bit mask of STROBETIMETRACKUPDATED field. */
#define RADIO_INTEN11_STROBETIMETRACKUPDATED_Disabled (0x0UL) /*!< Disable */
#define RADIO_INTEN11_STROBETIMETRACKUPDATED_Enabled (0x1UL) /*!< Enable */

/* Bit 7 : Enable or disable interrupt for event TIMERWRAPS */
#define RADIO_INTEN11_TIMERWRAPS_Pos (7UL) /*!< Position of TIMERWRAPS field. */
#define RADIO_INTEN11_TIMERWRAPS_Msk (0x1UL << RADIO_INTEN11_TIMERWRAPS_Pos) /*!< Bit mask of TIMERWRAPS field. */
#define RADIO_INTEN11_TIMERWRAPS_Disabled (0x0UL) /*!< Disable */
#define RADIO_INTEN11_TIMERWRAPS_Enabled (0x1UL) /*!< Enable */

/* Bit 6 : Enable or disable interrupt for event DETECTFIFOFULL */
#define RADIO_INTEN11_DETECTFIFOFULL_Pos (6UL) /*!< Position of DETECTFIFOFULL field. */
#define RADIO_INTEN11_DETECTFIFOFULL_Msk (0x1UL << RADIO_INTEN11_DETECTFIFOFULL_Pos) /*!< Bit mask of DETECTFIFOFULL field. */
#define RADIO_INTEN11_DETECTFIFOFULL_Disabled (0x0UL) /*!< Disable */
#define RADIO_INTEN11_DETECTFIFOFULL_Enabled (0x1UL) /*!< Enable */

/* Bit 5 : Enable or disable interrupt for event RAWDETECT */
#define RADIO_INTEN11_RAWDETECT_Pos (5UL) /*!< Position of RAWDETECT field. */
#define RADIO_INTEN11_RAWDETECT_Msk (0x1UL << RADIO_INTEN11_RAWDETECT_Pos) /*!< Bit mask of RAWDETECT field. */
#define RADIO_INTEN11_RAWDETECT_Disabled (0x0UL) /*!< Disable */
#define RADIO_INTEN11_RAWDETECT_Enabled (0x1UL) /*!< Enable */

/* Bit 4 : Enable or disable interrupt for event RXDIGEN */
#define RADIO_INTEN11_RXDIGEN_Pos (4UL) /*!< Position of RXDIGEN field. */
#define RADIO_INTEN11_RXDIGEN_Msk (0x1UL << RADIO_INTEN11_RXDIGEN_Pos) /*!< Bit mask of RXDIGEN field. */
#define RADIO_INTEN11_RXDIGEN_Disabled (0x0UL) /*!< Disable */
#define RADIO_INTEN11_RXDIGEN_Enabled (0x1UL) /*!< Enable */

/* Bit 2 : Enable or disable interrupt for event RXTIMERMATCH */
#define RADIO_INTEN11_RXTIMERMATCH_Pos (2UL) /*!< Position of RXTIMERMATCH field. */
#define RADIO_INTEN11_RXTIMERMATCH_Msk (0x1UL << RADIO_INTEN11_RXTIMERMATCH_Pos) /*!< Bit mask of RXTIMERMATCH field. */
#define RADIO_INTEN11_RXTIMERMATCH_Disabled (0x0UL) /*!< Disable */
#define RADIO_INTEN11_RXTIMERMATCH_Enabled (0x1UL) /*!< Enable */

/* Bit 1 : Enable or disable interrupt for event TXTIMERMATCH */
#define RADIO_INTEN11_TXTIMERMATCH_Pos (1UL) /*!< Position of TXTIMERMATCH field. */
#define RADIO_INTEN11_TXTIMERMATCH_Msk (0x1UL << RADIO_INTEN11_TXTIMERMATCH_Pos) /*!< Bit mask of TXTIMERMATCH field. */
#define RADIO_INTEN11_TXTIMERMATCH_Disabled (0x0UL) /*!< Disable */
#define RADIO_INTEN11_TXTIMERMATCH_Enabled (0x1UL) /*!< Enable */

/* Bit 0 : Enable or disable interrupt for event DBCTIMEOUT */
#define RADIO_INTEN11_DBCTIMEOUT_Pos (0UL) /*!< Position of DBCTIMEOUT field. */
#define RADIO_INTEN11_DBCTIMEOUT_Msk (0x1UL << RADIO_INTEN11_DBCTIMEOUT_Pos) /*!< Bit mask of DBCTIMEOUT field. */
#define RADIO_INTEN11_DBCTIMEOUT_Disabled (0x0UL) /*!< Disable */
#define RADIO_INTEN11_DBCTIMEOUT_Enabled (0x1UL) /*!< Enable */

/* Register: RADIO_INTENSET10 */
/* Description: Enable interrupt */

/* Bit 31 : Write '1' to enable interrupt for event CHNOUPDATED */
#define RADIO_INTENSET10_CHNOUPDATED_Pos (31UL) /*!< Position of CHNOUPDATED field. */
#define RADIO_INTENSET10_CHNOUPDATED_Msk (0x1UL << RADIO_INTENSET10_CHNOUPDATED_Pos) /*!< Bit mask of CHNOUPDATED field. */
#define RADIO_INTENSET10_CHNOUPDATED_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET10_CHNOUPDATED_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET10_CHNOUPDATED_Set (0x1UL) /*!< Enable */

/* Bit 30 : Write '1' to enable interrupt for event CALDONE */
#define RADIO_INTENSET10_CALDONE_Pos (30UL) /*!< Position of CALDONE field. */
#define RADIO_INTENSET10_CALDONE_Msk (0x1UL << RADIO_INTENSET10_CALDONE_Pos) /*!< Bit mask of CALDONE field. */
#define RADIO_INTENSET10_CALDONE_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET10_CALDONE_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET10_CALDONE_Set (0x1UL) /*!< Enable */

/* Bit 29 : Write '1' to enable interrupt for event LBREADY */
#define RADIO_INTENSET10_LBREADY_Pos (29UL) /*!< Position of LBREADY field. */
#define RADIO_INTENSET10_LBREADY_Msk (0x1UL << RADIO_INTENSET10_LBREADY_Pos) /*!< Bit mask of LBREADY field. */
#define RADIO_INTENSET10_LBREADY_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET10_LBREADY_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET10_LBREADY_Set (0x1UL) /*!< Enable */

/* Bit 28 : Write '1' to enable interrupt for event CTEEND */
#define RADIO_INTENSET10_CTEEND_Pos (28UL) /*!< Position of CTEEND field. */
#define RADIO_INTENSET10_CTEEND_Msk (0x1UL << RADIO_INTENSET10_CTEEND_Pos) /*!< Bit mask of CTEEND field. */
#define RADIO_INTENSET10_CTEEND_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET10_CTEEND_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET10_CTEEND_Set (0x1UL) /*!< Enable */

/* Bit 27 : Write '1' to enable interrupt for event MODEREADY */
#define RADIO_INTENSET10_MODEREADY_Pos (27UL) /*!< Position of MODEREADY field. */
#define RADIO_INTENSET10_MODEREADY_Msk (0x1UL << RADIO_INTENSET10_MODEREADY_Pos) /*!< Bit mask of MODEREADY field. */
#define RADIO_INTENSET10_MODEREADY_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET10_MODEREADY_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET10_MODEREADY_Set (0x1UL) /*!< Enable */

/* Bit 26 : Write '1' to enable interrupt for event MODEWRITTEN */
#define RADIO_INTENSET10_MODEWRITTEN_Pos (26UL) /*!< Position of MODEWRITTEN field. */
#define RADIO_INTENSET10_MODEWRITTEN_Msk (0x1UL << RADIO_INTENSET10_MODEWRITTEN_Pos) /*!< Bit mask of MODEWRITTEN field. */
#define RADIO_INTENSET10_MODEWRITTEN_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET10_MODEWRITTEN_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET10_MODEWRITTEN_Set (0x1UL) /*!< Enable */

/* Bit 25 : Write '1' to enable interrupt for event DFEEND */
#define RADIO_INTENSET10_DFEEND_Pos (25UL) /*!< Position of DFEEND field. */
#define RADIO_INTENSET10_DFEEND_Msk (0x1UL << RADIO_INTENSET10_DFEEND_Pos) /*!< Bit mask of DFEEND field. */
#define RADIO_INTENSET10_DFEEND_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET10_DFEEND_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET10_DFEEND_Set (0x1UL) /*!< Enable */

/* Bit 24 : Write '1' to enable interrupt for event CTEWARNING */
#define RADIO_INTENSET10_CTEWARNING_Pos (24UL) /*!< Position of CTEWARNING field. */
#define RADIO_INTENSET10_CTEWARNING_Msk (0x1UL << RADIO_INTENSET10_CTEWARNING_Pos) /*!< Bit mask of CTEWARNING field. */
#define RADIO_INTENSET10_CTEWARNING_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET10_CTEWARNING_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET10_CTEWARNING_Set (0x1UL) /*!< Enable */

/* Bit 23 : Write '1' to enable interrupt for event CTEPRESENT */
#define RADIO_INTENSET10_CTEPRESENT_Pos (23UL) /*!< Position of CTEPRESENT field. */
#define RADIO_INTENSET10_CTEPRESENT_Msk (0x1UL << RADIO_INTENSET10_CTEPRESENT_Pos) /*!< Bit mask of CTEPRESENT field. */
#define RADIO_INTENSET10_CTEPRESENT_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET10_CTEPRESENT_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET10_CTEPRESENT_Set (0x1UL) /*!< Enable */

/* Bit 22 : Write '1' to enable interrupt for event SYNC */
#define RADIO_INTENSET10_SYNC_Pos (22UL) /*!< Position of SYNC field. */
#define RADIO_INTENSET10_SYNC_Msk (0x1UL << RADIO_INTENSET10_SYNC_Pos) /*!< Bit mask of SYNC field. */
#define RADIO_INTENSET10_SYNC_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET10_SYNC_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET10_SYNC_Set (0x1UL) /*!< Enable */

/* Bit 21 : Write '1' to enable interrupt for event MHRMATCH */
#define RADIO_INTENSET10_MHRMATCH_Pos (21UL) /*!< Position of MHRMATCH field. */
#define RADIO_INTENSET10_MHRMATCH_Msk (0x1UL << RADIO_INTENSET10_MHRMATCH_Pos) /*!< Bit mask of MHRMATCH field. */
#define RADIO_INTENSET10_MHRMATCH_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET10_MHRMATCH_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET10_MHRMATCH_Set (0x1UL) /*!< Enable */

/* Bit 20 : Write '1' to enable interrupt for event RATEBOOST */
#define RADIO_INTENSET10_RATEBOOST_Pos (20UL) /*!< Position of RATEBOOST field. */
#define RADIO_INTENSET10_RATEBOOST_Msk (0x1UL << RADIO_INTENSET10_RATEBOOST_Pos) /*!< Bit mask of RATEBOOST field. */
#define RADIO_INTENSET10_RATEBOOST_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET10_RATEBOOST_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET10_RATEBOOST_Set (0x1UL) /*!< Enable */

/* Bit 19 : Write '1' to enable interrupt for event CCASTOPPED */
#define RADIO_INTENSET10_CCASTOPPED_Pos (19UL) /*!< Position of CCASTOPPED field. */
#define RADIO_INTENSET10_CCASTOPPED_Msk (0x1UL << RADIO_INTENSET10_CCASTOPPED_Pos) /*!< Bit mask of CCASTOPPED field. */
#define RADIO_INTENSET10_CCASTOPPED_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET10_CCASTOPPED_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET10_CCASTOPPED_Set (0x1UL) /*!< Enable */

/* Bit 18 : Write '1' to enable interrupt for event CCABUSY */
#define RADIO_INTENSET10_CCABUSY_Pos (18UL) /*!< Position of CCABUSY field. */
#define RADIO_INTENSET10_CCABUSY_Msk (0x1UL << RADIO_INTENSET10_CCABUSY_Pos) /*!< Bit mask of CCABUSY field. */
#define RADIO_INTENSET10_CCABUSY_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET10_CCABUSY_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET10_CCABUSY_Set (0x1UL) /*!< Enable */

/* Bit 17 : Write '1' to enable interrupt for event CCAIDLE */
#define RADIO_INTENSET10_CCAIDLE_Pos (17UL) /*!< Position of CCAIDLE field. */
#define RADIO_INTENSET10_CCAIDLE_Msk (0x1UL << RADIO_INTENSET10_CCAIDLE_Pos) /*!< Bit mask of CCAIDLE field. */
#define RADIO_INTENSET10_CCAIDLE_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET10_CCAIDLE_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET10_CCAIDLE_Set (0x1UL) /*!< Enable */

/* Bit 16 : Write '1' to enable interrupt for event EDSTOPPED */
#define RADIO_INTENSET10_EDSTOPPED_Pos (16UL) /*!< Position of EDSTOPPED field. */
#define RADIO_INTENSET10_EDSTOPPED_Msk (0x1UL << RADIO_INTENSET10_EDSTOPPED_Pos) /*!< Bit mask of EDSTOPPED field. */
#define RADIO_INTENSET10_EDSTOPPED_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET10_EDSTOPPED_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET10_EDSTOPPED_Set (0x1UL) /*!< Enable */

/* Bit 15 : Write '1' to enable interrupt for event EDEND */
#define RADIO_INTENSET10_EDEND_Pos (15UL) /*!< Position of EDEND field. */
#define RADIO_INTENSET10_EDEND_Msk (0x1UL << RADIO_INTENSET10_EDEND_Pos) /*!< Bit mask of EDEND field. */
#define RADIO_INTENSET10_EDEND_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET10_EDEND_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET10_EDEND_Set (0x1UL) /*!< Enable */

/* Bit 14 : Write '1' to enable interrupt for event BCMATCH */
#define RADIO_INTENSET10_BCMATCH_Pos (14UL) /*!< Position of BCMATCH field. */
#define RADIO_INTENSET10_BCMATCH_Msk (0x1UL << RADIO_INTENSET10_BCMATCH_Pos) /*!< Bit mask of BCMATCH field. */
#define RADIO_INTENSET10_BCMATCH_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET10_BCMATCH_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET10_BCMATCH_Set (0x1UL) /*!< Enable */

/* Bit 12 : Write '1' to enable interrupt for event CRCERROR */
#define RADIO_INTENSET10_CRCERROR_Pos (12UL) /*!< Position of CRCERROR field. */
#define RADIO_INTENSET10_CRCERROR_Msk (0x1UL << RADIO_INTENSET10_CRCERROR_Pos) /*!< Bit mask of CRCERROR field. */
#define RADIO_INTENSET10_CRCERROR_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET10_CRCERROR_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET10_CRCERROR_Set (0x1UL) /*!< Enable */

/* Bit 11 : Write '1' to enable interrupt for event CRCOK */
#define RADIO_INTENSET10_CRCOK_Pos (11UL) /*!< Position of CRCOK field. */
#define RADIO_INTENSET10_CRCOK_Msk (0x1UL << RADIO_INTENSET10_CRCOK_Pos) /*!< Bit mask of CRCOK field. */
#define RADIO_INTENSET10_CRCOK_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET10_CRCOK_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET10_CRCOK_Set (0x1UL) /*!< Enable */

/* Bit 10 : Write '1' to enable interrupt for event DEVMISS */
#define RADIO_INTENSET10_DEVMISS_Pos (10UL) /*!< Position of DEVMISS field. */
#define RADIO_INTENSET10_DEVMISS_Msk (0x1UL << RADIO_INTENSET10_DEVMISS_Pos) /*!< Bit mask of DEVMISS field. */
#define RADIO_INTENSET10_DEVMISS_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET10_DEVMISS_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET10_DEVMISS_Set (0x1UL) /*!< Enable */

/* Bit 9 : Write '1' to enable interrupt for event DEVMATCH */
#define RADIO_INTENSET10_DEVMATCH_Pos (9UL) /*!< Position of DEVMATCH field. */
#define RADIO_INTENSET10_DEVMATCH_Msk (0x1UL << RADIO_INTENSET10_DEVMATCH_Pos) /*!< Bit mask of DEVMATCH field. */
#define RADIO_INTENSET10_DEVMATCH_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET10_DEVMATCH_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET10_DEVMATCH_Set (0x1UL) /*!< Enable */

/* Bit 8 : Write '1' to enable interrupt for event DISABLED */
#define RADIO_INTENSET10_DISABLED_Pos (8UL) /*!< Position of DISABLED field. */
#define RADIO_INTENSET10_DISABLED_Msk (0x1UL << RADIO_INTENSET10_DISABLED_Pos) /*!< Bit mask of DISABLED field. */
#define RADIO_INTENSET10_DISABLED_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET10_DISABLED_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET10_DISABLED_Set (0x1UL) /*!< Enable */

/* Bit 7 : Write '1' to enable interrupt for event PHYEND */
#define RADIO_INTENSET10_PHYEND_Pos (7UL) /*!< Position of PHYEND field. */
#define RADIO_INTENSET10_PHYEND_Msk (0x1UL << RADIO_INTENSET10_PHYEND_Pos) /*!< Bit mask of PHYEND field. */
#define RADIO_INTENSET10_PHYEND_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET10_PHYEND_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET10_PHYEND_Set (0x1UL) /*!< Enable */

/* Bit 6 : Write '1' to enable interrupt for event END */
#define RADIO_INTENSET10_END_Pos (6UL) /*!< Position of END field. */
#define RADIO_INTENSET10_END_Msk (0x1UL << RADIO_INTENSET10_END_Pos) /*!< Bit mask of END field. */
#define RADIO_INTENSET10_END_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET10_END_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET10_END_Set (0x1UL) /*!< Enable */

/* Bit 5 : Write '1' to enable interrupt for event PAYLOAD */
#define RADIO_INTENSET10_PAYLOAD_Pos (5UL) /*!< Position of PAYLOAD field. */
#define RADIO_INTENSET10_PAYLOAD_Msk (0x1UL << RADIO_INTENSET10_PAYLOAD_Pos) /*!< Bit mask of PAYLOAD field. */
#define RADIO_INTENSET10_PAYLOAD_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET10_PAYLOAD_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET10_PAYLOAD_Set (0x1UL) /*!< Enable */

/* Bit 4 : Write '1' to enable interrupt for event FRAMESTART */
#define RADIO_INTENSET10_FRAMESTART_Pos (4UL) /*!< Position of FRAMESTART field. */
#define RADIO_INTENSET10_FRAMESTART_Msk (0x1UL << RADIO_INTENSET10_FRAMESTART_Pos) /*!< Bit mask of FRAMESTART field. */
#define RADIO_INTENSET10_FRAMESTART_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET10_FRAMESTART_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET10_FRAMESTART_Set (0x1UL) /*!< Enable */

/* Bit 3 : Write '1' to enable interrupt for event ADDRESS */
#define RADIO_INTENSET10_ADDRESS_Pos (3UL) /*!< Position of ADDRESS field. */
#define RADIO_INTENSET10_ADDRESS_Msk (0x1UL << RADIO_INTENSET10_ADDRESS_Pos) /*!< Bit mask of ADDRESS field. */
#define RADIO_INTENSET10_ADDRESS_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET10_ADDRESS_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET10_ADDRESS_Set (0x1UL) /*!< Enable */

/* Bit 2 : Write '1' to enable interrupt for event RXREADY */
#define RADIO_INTENSET10_RXREADY_Pos (2UL) /*!< Position of RXREADY field. */
#define RADIO_INTENSET10_RXREADY_Msk (0x1UL << RADIO_INTENSET10_RXREADY_Pos) /*!< Bit mask of RXREADY field. */
#define RADIO_INTENSET10_RXREADY_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET10_RXREADY_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET10_RXREADY_Set (0x1UL) /*!< Enable */

/* Bit 1 : Write '1' to enable interrupt for event TXREADY */
#define RADIO_INTENSET10_TXREADY_Pos (1UL) /*!< Position of TXREADY field. */
#define RADIO_INTENSET10_TXREADY_Msk (0x1UL << RADIO_INTENSET10_TXREADY_Pos) /*!< Bit mask of TXREADY field. */
#define RADIO_INTENSET10_TXREADY_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET10_TXREADY_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET10_TXREADY_Set (0x1UL) /*!< Enable */

/* Bit 0 : Write '1' to enable interrupt for event READY */
#define RADIO_INTENSET10_READY_Pos (0UL) /*!< Position of READY field. */
#define RADIO_INTENSET10_READY_Msk (0x1UL << RADIO_INTENSET10_READY_Pos) /*!< Bit mask of READY field. */
#define RADIO_INTENSET10_READY_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET10_READY_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET10_READY_Set (0x1UL) /*!< Enable */

/* Register: RADIO_INTENSET11 */
/* Description: Enable interrupt */

/* Bit 17 : Write '1' to enable interrupt for event ACQINJ1DMAEND */
#define RADIO_INTENSET11_ACQINJ1DMAEND_Pos (17UL) /*!< Position of ACQINJ1DMAEND field. */
#define RADIO_INTENSET11_ACQINJ1DMAEND_Msk (0x1UL << RADIO_INTENSET11_ACQINJ1DMAEND_Pos) /*!< Bit mask of ACQINJ1DMAEND field. */
#define RADIO_INTENSET11_ACQINJ1DMAEND_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET11_ACQINJ1DMAEND_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET11_ACQINJ1DMAEND_Set (0x1UL) /*!< Enable */

/* Bit 16 : Write '1' to enable interrupt for event ACQINJ0DMAEND */
#define RADIO_INTENSET11_ACQINJ0DMAEND_Pos (16UL) /*!< Position of ACQINJ0DMAEND field. */
#define RADIO_INTENSET11_ACQINJ0DMAEND_Msk (0x1UL << RADIO_INTENSET11_ACQINJ0DMAEND_Pos) /*!< Bit mask of ACQINJ0DMAEND field. */
#define RADIO_INTENSET11_ACQINJ0DMAEND_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET11_ACQINJ0DMAEND_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET11_ACQINJ0DMAEND_Set (0x1UL) /*!< Enable */

/* Bit 13 : Write '1' to enable interrupt for event INTERCEPTEDEVENT */
#define RADIO_INTENSET11_INTERCEPTEDEVENT_Pos (13UL) /*!< Position of INTERCEPTEDEVENT field. */
#define RADIO_INTENSET11_INTERCEPTEDEVENT_Msk (0x1UL << RADIO_INTENSET11_INTERCEPTEDEVENT_Pos) /*!< Bit mask of INTERCEPTEDEVENT field. */
#define RADIO_INTENSET11_INTERCEPTEDEVENT_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET11_INTERCEPTEDEVENT_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET11_INTERCEPTEDEVENT_Set (0x1UL) /*!< Enable */

/* Bit 12 : Write '1' to enable interrupt for event INTERCEPTEDTASK */
#define RADIO_INTENSET11_INTERCEPTEDTASK_Pos (12UL) /*!< Position of INTERCEPTEDTASK field. */
#define RADIO_INTENSET11_INTERCEPTEDTASK_Msk (0x1UL << RADIO_INTENSET11_INTERCEPTEDTASK_Pos) /*!< Bit mask of INTERCEPTEDTASK field. */
#define RADIO_INTENSET11_INTERCEPTEDTASK_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET11_INTERCEPTEDTASK_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET11_INTERCEPTEDTASK_Set (0x1UL) /*!< Enable */

/* Bit 11 : Write '1' to enable interrupt for event DEMODCTRLCONDTRIGGERED2 */
#define RADIO_INTENSET11_DEMODCTRLCONDTRIGGERED2_Pos (11UL) /*!< Position of DEMODCTRLCONDTRIGGERED2 field. */
#define RADIO_INTENSET11_DEMODCTRLCONDTRIGGERED2_Msk (0x1UL << RADIO_INTENSET11_DEMODCTRLCONDTRIGGERED2_Pos) /*!< Bit mask of DEMODCTRLCONDTRIGGERED2 field. */
#define RADIO_INTENSET11_DEMODCTRLCONDTRIGGERED2_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET11_DEMODCTRLCONDTRIGGERED2_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET11_DEMODCTRLCONDTRIGGERED2_Set (0x1UL) /*!< Enable */

/* Bit 10 : Write '1' to enable interrupt for event DEMODCTRLCONDTRIGGERED1 */
#define RADIO_INTENSET11_DEMODCTRLCONDTRIGGERED1_Pos (10UL) /*!< Position of DEMODCTRLCONDTRIGGERED1 field. */
#define RADIO_INTENSET11_DEMODCTRLCONDTRIGGERED1_Msk (0x1UL << RADIO_INTENSET11_DEMODCTRLCONDTRIGGERED1_Pos) /*!< Bit mask of DEMODCTRLCONDTRIGGERED1 field. */
#define RADIO_INTENSET11_DEMODCTRLCONDTRIGGERED1_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET11_DEMODCTRLCONDTRIGGERED1_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET11_DEMODCTRLCONDTRIGGERED1_Set (0x1UL) /*!< Enable */

/* Bit 9 : Write '1' to enable interrupt for event DEMODCTRLCONDTRIGGERED0 */
#define RADIO_INTENSET11_DEMODCTRLCONDTRIGGERED0_Pos (9UL) /*!< Position of DEMODCTRLCONDTRIGGERED0 field. */
#define RADIO_INTENSET11_DEMODCTRLCONDTRIGGERED0_Msk (0x1UL << RADIO_INTENSET11_DEMODCTRLCONDTRIGGERED0_Pos) /*!< Bit mask of DEMODCTRLCONDTRIGGERED0 field. */
#define RADIO_INTENSET11_DEMODCTRLCONDTRIGGERED0_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET11_DEMODCTRLCONDTRIGGERED0_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET11_DEMODCTRLCONDTRIGGERED0_Set (0x1UL) /*!< Enable */

/* Bit 8 : Write '1' to enable interrupt for event STROBETIMETRACKUPDATED */
#define RADIO_INTENSET11_STROBETIMETRACKUPDATED_Pos (8UL) /*!< Position of STROBETIMETRACKUPDATED field. */
#define RADIO_INTENSET11_STROBETIMETRACKUPDATED_Msk (0x1UL << RADIO_INTENSET11_STROBETIMETRACKUPDATED_Pos) /*!< Bit mask of STROBETIMETRACKUPDATED field. */
#define RADIO_INTENSET11_STROBETIMETRACKUPDATED_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET11_STROBETIMETRACKUPDATED_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET11_STROBETIMETRACKUPDATED_Set (0x1UL) /*!< Enable */

/* Bit 7 : Write '1' to enable interrupt for event TIMERWRAPS */
#define RADIO_INTENSET11_TIMERWRAPS_Pos (7UL) /*!< Position of TIMERWRAPS field. */
#define RADIO_INTENSET11_TIMERWRAPS_Msk (0x1UL << RADIO_INTENSET11_TIMERWRAPS_Pos) /*!< Bit mask of TIMERWRAPS field. */
#define RADIO_INTENSET11_TIMERWRAPS_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET11_TIMERWRAPS_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET11_TIMERWRAPS_Set (0x1UL) /*!< Enable */

/* Bit 6 : Write '1' to enable interrupt for event DETECTFIFOFULL */
#define RADIO_INTENSET11_DETECTFIFOFULL_Pos (6UL) /*!< Position of DETECTFIFOFULL field. */
#define RADIO_INTENSET11_DETECTFIFOFULL_Msk (0x1UL << RADIO_INTENSET11_DETECTFIFOFULL_Pos) /*!< Bit mask of DETECTFIFOFULL field. */
#define RADIO_INTENSET11_DETECTFIFOFULL_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET11_DETECTFIFOFULL_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET11_DETECTFIFOFULL_Set (0x1UL) /*!< Enable */

/* Bit 5 : Write '1' to enable interrupt for event RAWDETECT */
#define RADIO_INTENSET11_RAWDETECT_Pos (5UL) /*!< Position of RAWDETECT field. */
#define RADIO_INTENSET11_RAWDETECT_Msk (0x1UL << RADIO_INTENSET11_RAWDETECT_Pos) /*!< Bit mask of RAWDETECT field. */
#define RADIO_INTENSET11_RAWDETECT_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET11_RAWDETECT_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET11_RAWDETECT_Set (0x1UL) /*!< Enable */

/* Bit 4 : Write '1' to enable interrupt for event RXDIGEN */
#define RADIO_INTENSET11_RXDIGEN_Pos (4UL) /*!< Position of RXDIGEN field. */
#define RADIO_INTENSET11_RXDIGEN_Msk (0x1UL << RADIO_INTENSET11_RXDIGEN_Pos) /*!< Bit mask of RXDIGEN field. */
#define RADIO_INTENSET11_RXDIGEN_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET11_RXDIGEN_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET11_RXDIGEN_Set (0x1UL) /*!< Enable */

/* Bit 2 : Write '1' to enable interrupt for event RXTIMERMATCH */
#define RADIO_INTENSET11_RXTIMERMATCH_Pos (2UL) /*!< Position of RXTIMERMATCH field. */
#define RADIO_INTENSET11_RXTIMERMATCH_Msk (0x1UL << RADIO_INTENSET11_RXTIMERMATCH_Pos) /*!< Bit mask of RXTIMERMATCH field. */
#define RADIO_INTENSET11_RXTIMERMATCH_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET11_RXTIMERMATCH_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET11_RXTIMERMATCH_Set (0x1UL) /*!< Enable */

/* Bit 1 : Write '1' to enable interrupt for event TXTIMERMATCH */
#define RADIO_INTENSET11_TXTIMERMATCH_Pos (1UL) /*!< Position of TXTIMERMATCH field. */
#define RADIO_INTENSET11_TXTIMERMATCH_Msk (0x1UL << RADIO_INTENSET11_TXTIMERMATCH_Pos) /*!< Bit mask of TXTIMERMATCH field. */
#define RADIO_INTENSET11_TXTIMERMATCH_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET11_TXTIMERMATCH_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET11_TXTIMERMATCH_Set (0x1UL) /*!< Enable */

/* Bit 0 : Write '1' to enable interrupt for event DBCTIMEOUT */
#define RADIO_INTENSET11_DBCTIMEOUT_Pos (0UL) /*!< Position of DBCTIMEOUT field. */
#define RADIO_INTENSET11_DBCTIMEOUT_Msk (0x1UL << RADIO_INTENSET11_DBCTIMEOUT_Pos) /*!< Bit mask of DBCTIMEOUT field. */
#define RADIO_INTENSET11_DBCTIMEOUT_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENSET11_DBCTIMEOUT_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENSET11_DBCTIMEOUT_Set (0x1UL) /*!< Enable */

/* Register: RADIO_INTENCLR10 */
/* Description: Disable interrupt */

/* Bit 31 : Write '1' to disable interrupt for event CHNOUPDATED */
#define RADIO_INTENCLR10_CHNOUPDATED_Pos (31UL) /*!< Position of CHNOUPDATED field. */
#define RADIO_INTENCLR10_CHNOUPDATED_Msk (0x1UL << RADIO_INTENCLR10_CHNOUPDATED_Pos) /*!< Bit mask of CHNOUPDATED field. */
#define RADIO_INTENCLR10_CHNOUPDATED_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR10_CHNOUPDATED_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR10_CHNOUPDATED_Clear (0x1UL) /*!< Disable */

/* Bit 30 : Write '1' to disable interrupt for event CALDONE */
#define RADIO_INTENCLR10_CALDONE_Pos (30UL) /*!< Position of CALDONE field. */
#define RADIO_INTENCLR10_CALDONE_Msk (0x1UL << RADIO_INTENCLR10_CALDONE_Pos) /*!< Bit mask of CALDONE field. */
#define RADIO_INTENCLR10_CALDONE_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR10_CALDONE_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR10_CALDONE_Clear (0x1UL) /*!< Disable */

/* Bit 29 : Write '1' to disable interrupt for event LBREADY */
#define RADIO_INTENCLR10_LBREADY_Pos (29UL) /*!< Position of LBREADY field. */
#define RADIO_INTENCLR10_LBREADY_Msk (0x1UL << RADIO_INTENCLR10_LBREADY_Pos) /*!< Bit mask of LBREADY field. */
#define RADIO_INTENCLR10_LBREADY_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR10_LBREADY_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR10_LBREADY_Clear (0x1UL) /*!< Disable */

/* Bit 28 : Write '1' to disable interrupt for event CTEEND */
#define RADIO_INTENCLR10_CTEEND_Pos (28UL) /*!< Position of CTEEND field. */
#define RADIO_INTENCLR10_CTEEND_Msk (0x1UL << RADIO_INTENCLR10_CTEEND_Pos) /*!< Bit mask of CTEEND field. */
#define RADIO_INTENCLR10_CTEEND_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR10_CTEEND_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR10_CTEEND_Clear (0x1UL) /*!< Disable */

/* Bit 27 : Write '1' to disable interrupt for event MODEREADY */
#define RADIO_INTENCLR10_MODEREADY_Pos (27UL) /*!< Position of MODEREADY field. */
#define RADIO_INTENCLR10_MODEREADY_Msk (0x1UL << RADIO_INTENCLR10_MODEREADY_Pos) /*!< Bit mask of MODEREADY field. */
#define RADIO_INTENCLR10_MODEREADY_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR10_MODEREADY_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR10_MODEREADY_Clear (0x1UL) /*!< Disable */

/* Bit 26 : Write '1' to disable interrupt for event MODEWRITTEN */
#define RADIO_INTENCLR10_MODEWRITTEN_Pos (26UL) /*!< Position of MODEWRITTEN field. */
#define RADIO_INTENCLR10_MODEWRITTEN_Msk (0x1UL << RADIO_INTENCLR10_MODEWRITTEN_Pos) /*!< Bit mask of MODEWRITTEN field. */
#define RADIO_INTENCLR10_MODEWRITTEN_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR10_MODEWRITTEN_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR10_MODEWRITTEN_Clear (0x1UL) /*!< Disable */

/* Bit 25 : Write '1' to disable interrupt for event DFEEND */
#define RADIO_INTENCLR10_DFEEND_Pos (25UL) /*!< Position of DFEEND field. */
#define RADIO_INTENCLR10_DFEEND_Msk (0x1UL << RADIO_INTENCLR10_DFEEND_Pos) /*!< Bit mask of DFEEND field. */
#define RADIO_INTENCLR10_DFEEND_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR10_DFEEND_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR10_DFEEND_Clear (0x1UL) /*!< Disable */

/* Bit 24 : Write '1' to disable interrupt for event CTEWARNING */
#define RADIO_INTENCLR10_CTEWARNING_Pos (24UL) /*!< Position of CTEWARNING field. */
#define RADIO_INTENCLR10_CTEWARNING_Msk (0x1UL << RADIO_INTENCLR10_CTEWARNING_Pos) /*!< Bit mask of CTEWARNING field. */
#define RADIO_INTENCLR10_CTEWARNING_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR10_CTEWARNING_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR10_CTEWARNING_Clear (0x1UL) /*!< Disable */

/* Bit 23 : Write '1' to disable interrupt for event CTEPRESENT */
#define RADIO_INTENCLR10_CTEPRESENT_Pos (23UL) /*!< Position of CTEPRESENT field. */
#define RADIO_INTENCLR10_CTEPRESENT_Msk (0x1UL << RADIO_INTENCLR10_CTEPRESENT_Pos) /*!< Bit mask of CTEPRESENT field. */
#define RADIO_INTENCLR10_CTEPRESENT_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR10_CTEPRESENT_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR10_CTEPRESENT_Clear (0x1UL) /*!< Disable */

/* Bit 22 : Write '1' to disable interrupt for event SYNC */
#define RADIO_INTENCLR10_SYNC_Pos (22UL) /*!< Position of SYNC field. */
#define RADIO_INTENCLR10_SYNC_Msk (0x1UL << RADIO_INTENCLR10_SYNC_Pos) /*!< Bit mask of SYNC field. */
#define RADIO_INTENCLR10_SYNC_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR10_SYNC_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR10_SYNC_Clear (0x1UL) /*!< Disable */

/* Bit 21 : Write '1' to disable interrupt for event MHRMATCH */
#define RADIO_INTENCLR10_MHRMATCH_Pos (21UL) /*!< Position of MHRMATCH field. */
#define RADIO_INTENCLR10_MHRMATCH_Msk (0x1UL << RADIO_INTENCLR10_MHRMATCH_Pos) /*!< Bit mask of MHRMATCH field. */
#define RADIO_INTENCLR10_MHRMATCH_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR10_MHRMATCH_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR10_MHRMATCH_Clear (0x1UL) /*!< Disable */

/* Bit 20 : Write '1' to disable interrupt for event RATEBOOST */
#define RADIO_INTENCLR10_RATEBOOST_Pos (20UL) /*!< Position of RATEBOOST field. */
#define RADIO_INTENCLR10_RATEBOOST_Msk (0x1UL << RADIO_INTENCLR10_RATEBOOST_Pos) /*!< Bit mask of RATEBOOST field. */
#define RADIO_INTENCLR10_RATEBOOST_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR10_RATEBOOST_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR10_RATEBOOST_Clear (0x1UL) /*!< Disable */

/* Bit 19 : Write '1' to disable interrupt for event CCASTOPPED */
#define RADIO_INTENCLR10_CCASTOPPED_Pos (19UL) /*!< Position of CCASTOPPED field. */
#define RADIO_INTENCLR10_CCASTOPPED_Msk (0x1UL << RADIO_INTENCLR10_CCASTOPPED_Pos) /*!< Bit mask of CCASTOPPED field. */
#define RADIO_INTENCLR10_CCASTOPPED_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR10_CCASTOPPED_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR10_CCASTOPPED_Clear (0x1UL) /*!< Disable */

/* Bit 18 : Write '1' to disable interrupt for event CCABUSY */
#define RADIO_INTENCLR10_CCABUSY_Pos (18UL) /*!< Position of CCABUSY field. */
#define RADIO_INTENCLR10_CCABUSY_Msk (0x1UL << RADIO_INTENCLR10_CCABUSY_Pos) /*!< Bit mask of CCABUSY field. */
#define RADIO_INTENCLR10_CCABUSY_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR10_CCABUSY_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR10_CCABUSY_Clear (0x1UL) /*!< Disable */

/* Bit 17 : Write '1' to disable interrupt for event CCAIDLE */
#define RADIO_INTENCLR10_CCAIDLE_Pos (17UL) /*!< Position of CCAIDLE field. */
#define RADIO_INTENCLR10_CCAIDLE_Msk (0x1UL << RADIO_INTENCLR10_CCAIDLE_Pos) /*!< Bit mask of CCAIDLE field. */
#define RADIO_INTENCLR10_CCAIDLE_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR10_CCAIDLE_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR10_CCAIDLE_Clear (0x1UL) /*!< Disable */

/* Bit 16 : Write '1' to disable interrupt for event EDSTOPPED */
#define RADIO_INTENCLR10_EDSTOPPED_Pos (16UL) /*!< Position of EDSTOPPED field. */
#define RADIO_INTENCLR10_EDSTOPPED_Msk (0x1UL << RADIO_INTENCLR10_EDSTOPPED_Pos) /*!< Bit mask of EDSTOPPED field. */
#define RADIO_INTENCLR10_EDSTOPPED_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR10_EDSTOPPED_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR10_EDSTOPPED_Clear (0x1UL) /*!< Disable */

/* Bit 15 : Write '1' to disable interrupt for event EDEND */
#define RADIO_INTENCLR10_EDEND_Pos (15UL) /*!< Position of EDEND field. */
#define RADIO_INTENCLR10_EDEND_Msk (0x1UL << RADIO_INTENCLR10_EDEND_Pos) /*!< Bit mask of EDEND field. */
#define RADIO_INTENCLR10_EDEND_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR10_EDEND_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR10_EDEND_Clear (0x1UL) /*!< Disable */

/* Bit 14 : Write '1' to disable interrupt for event BCMATCH */
#define RADIO_INTENCLR10_BCMATCH_Pos (14UL) /*!< Position of BCMATCH field. */
#define RADIO_INTENCLR10_BCMATCH_Msk (0x1UL << RADIO_INTENCLR10_BCMATCH_Pos) /*!< Bit mask of BCMATCH field. */
#define RADIO_INTENCLR10_BCMATCH_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR10_BCMATCH_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR10_BCMATCH_Clear (0x1UL) /*!< Disable */

/* Bit 12 : Write '1' to disable interrupt for event CRCERROR */
#define RADIO_INTENCLR10_CRCERROR_Pos (12UL) /*!< Position of CRCERROR field. */
#define RADIO_INTENCLR10_CRCERROR_Msk (0x1UL << RADIO_INTENCLR10_CRCERROR_Pos) /*!< Bit mask of CRCERROR field. */
#define RADIO_INTENCLR10_CRCERROR_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR10_CRCERROR_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR10_CRCERROR_Clear (0x1UL) /*!< Disable */

/* Bit 11 : Write '1' to disable interrupt for event CRCOK */
#define RADIO_INTENCLR10_CRCOK_Pos (11UL) /*!< Position of CRCOK field. */
#define RADIO_INTENCLR10_CRCOK_Msk (0x1UL << RADIO_INTENCLR10_CRCOK_Pos) /*!< Bit mask of CRCOK field. */
#define RADIO_INTENCLR10_CRCOK_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR10_CRCOK_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR10_CRCOK_Clear (0x1UL) /*!< Disable */

/* Bit 10 : Write '1' to disable interrupt for event DEVMISS */
#define RADIO_INTENCLR10_DEVMISS_Pos (10UL) /*!< Position of DEVMISS field. */
#define RADIO_INTENCLR10_DEVMISS_Msk (0x1UL << RADIO_INTENCLR10_DEVMISS_Pos) /*!< Bit mask of DEVMISS field. */
#define RADIO_INTENCLR10_DEVMISS_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR10_DEVMISS_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR10_DEVMISS_Clear (0x1UL) /*!< Disable */

/* Bit 9 : Write '1' to disable interrupt for event DEVMATCH */
#define RADIO_INTENCLR10_DEVMATCH_Pos (9UL) /*!< Position of DEVMATCH field. */
#define RADIO_INTENCLR10_DEVMATCH_Msk (0x1UL << RADIO_INTENCLR10_DEVMATCH_Pos) /*!< Bit mask of DEVMATCH field. */
#define RADIO_INTENCLR10_DEVMATCH_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR10_DEVMATCH_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR10_DEVMATCH_Clear (0x1UL) /*!< Disable */

/* Bit 8 : Write '1' to disable interrupt for event DISABLED */
#define RADIO_INTENCLR10_DISABLED_Pos (8UL) /*!< Position of DISABLED field. */
#define RADIO_INTENCLR10_DISABLED_Msk (0x1UL << RADIO_INTENCLR10_DISABLED_Pos) /*!< Bit mask of DISABLED field. */
#define RADIO_INTENCLR10_DISABLED_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR10_DISABLED_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR10_DISABLED_Clear (0x1UL) /*!< Disable */

/* Bit 7 : Write '1' to disable interrupt for event PHYEND */
#define RADIO_INTENCLR10_PHYEND_Pos (7UL) /*!< Position of PHYEND field. */
#define RADIO_INTENCLR10_PHYEND_Msk (0x1UL << RADIO_INTENCLR10_PHYEND_Pos) /*!< Bit mask of PHYEND field. */
#define RADIO_INTENCLR10_PHYEND_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR10_PHYEND_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR10_PHYEND_Clear (0x1UL) /*!< Disable */

/* Bit 6 : Write '1' to disable interrupt for event END */
#define RADIO_INTENCLR10_END_Pos (6UL) /*!< Position of END field. */
#define RADIO_INTENCLR10_END_Msk (0x1UL << RADIO_INTENCLR10_END_Pos) /*!< Bit mask of END field. */
#define RADIO_INTENCLR10_END_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR10_END_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR10_END_Clear (0x1UL) /*!< Disable */

/* Bit 5 : Write '1' to disable interrupt for event PAYLOAD */
#define RADIO_INTENCLR10_PAYLOAD_Pos (5UL) /*!< Position of PAYLOAD field. */
#define RADIO_INTENCLR10_PAYLOAD_Msk (0x1UL << RADIO_INTENCLR10_PAYLOAD_Pos) /*!< Bit mask of PAYLOAD field. */
#define RADIO_INTENCLR10_PAYLOAD_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR10_PAYLOAD_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR10_PAYLOAD_Clear (0x1UL) /*!< Disable */

/* Bit 4 : Write '1' to disable interrupt for event FRAMESTART */
#define RADIO_INTENCLR10_FRAMESTART_Pos (4UL) /*!< Position of FRAMESTART field. */
#define RADIO_INTENCLR10_FRAMESTART_Msk (0x1UL << RADIO_INTENCLR10_FRAMESTART_Pos) /*!< Bit mask of FRAMESTART field. */
#define RADIO_INTENCLR10_FRAMESTART_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR10_FRAMESTART_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR10_FRAMESTART_Clear (0x1UL) /*!< Disable */

/* Bit 3 : Write '1' to disable interrupt for event ADDRESS */
#define RADIO_INTENCLR10_ADDRESS_Pos (3UL) /*!< Position of ADDRESS field. */
#define RADIO_INTENCLR10_ADDRESS_Msk (0x1UL << RADIO_INTENCLR10_ADDRESS_Pos) /*!< Bit mask of ADDRESS field. */
#define RADIO_INTENCLR10_ADDRESS_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR10_ADDRESS_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR10_ADDRESS_Clear (0x1UL) /*!< Disable */

/* Bit 2 : Write '1' to disable interrupt for event RXREADY */
#define RADIO_INTENCLR10_RXREADY_Pos (2UL) /*!< Position of RXREADY field. */
#define RADIO_INTENCLR10_RXREADY_Msk (0x1UL << RADIO_INTENCLR10_RXREADY_Pos) /*!< Bit mask of RXREADY field. */
#define RADIO_INTENCLR10_RXREADY_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR10_RXREADY_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR10_RXREADY_Clear (0x1UL) /*!< Disable */

/* Bit 1 : Write '1' to disable interrupt for event TXREADY */
#define RADIO_INTENCLR10_TXREADY_Pos (1UL) /*!< Position of TXREADY field. */
#define RADIO_INTENCLR10_TXREADY_Msk (0x1UL << RADIO_INTENCLR10_TXREADY_Pos) /*!< Bit mask of TXREADY field. */
#define RADIO_INTENCLR10_TXREADY_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR10_TXREADY_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR10_TXREADY_Clear (0x1UL) /*!< Disable */

/* Bit 0 : Write '1' to disable interrupt for event READY */
#define RADIO_INTENCLR10_READY_Pos (0UL) /*!< Position of READY field. */
#define RADIO_INTENCLR10_READY_Msk (0x1UL << RADIO_INTENCLR10_READY_Pos) /*!< Bit mask of READY field. */
#define RADIO_INTENCLR10_READY_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR10_READY_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR10_READY_Clear (0x1UL) /*!< Disable */

/* Register: RADIO_INTENCLR11 */
/* Description: Disable interrupt */

/* Bit 17 : Write '1' to disable interrupt for event ACQINJ1DMAEND */
#define RADIO_INTENCLR11_ACQINJ1DMAEND_Pos (17UL) /*!< Position of ACQINJ1DMAEND field. */
#define RADIO_INTENCLR11_ACQINJ1DMAEND_Msk (0x1UL << RADIO_INTENCLR11_ACQINJ1DMAEND_Pos) /*!< Bit mask of ACQINJ1DMAEND field. */
#define RADIO_INTENCLR11_ACQINJ1DMAEND_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR11_ACQINJ1DMAEND_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR11_ACQINJ1DMAEND_Clear (0x1UL) /*!< Disable */

/* Bit 16 : Write '1' to disable interrupt for event ACQINJ0DMAEND */
#define RADIO_INTENCLR11_ACQINJ0DMAEND_Pos (16UL) /*!< Position of ACQINJ0DMAEND field. */
#define RADIO_INTENCLR11_ACQINJ0DMAEND_Msk (0x1UL << RADIO_INTENCLR11_ACQINJ0DMAEND_Pos) /*!< Bit mask of ACQINJ0DMAEND field. */
#define RADIO_INTENCLR11_ACQINJ0DMAEND_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR11_ACQINJ0DMAEND_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR11_ACQINJ0DMAEND_Clear (0x1UL) /*!< Disable */

/* Bit 13 : Write '1' to disable interrupt for event INTERCEPTEDEVENT */
#define RADIO_INTENCLR11_INTERCEPTEDEVENT_Pos (13UL) /*!< Position of INTERCEPTEDEVENT field. */
#define RADIO_INTENCLR11_INTERCEPTEDEVENT_Msk (0x1UL << RADIO_INTENCLR11_INTERCEPTEDEVENT_Pos) /*!< Bit mask of INTERCEPTEDEVENT field. */
#define RADIO_INTENCLR11_INTERCEPTEDEVENT_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR11_INTERCEPTEDEVENT_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR11_INTERCEPTEDEVENT_Clear (0x1UL) /*!< Disable */

/* Bit 12 : Write '1' to disable interrupt for event INTERCEPTEDTASK */
#define RADIO_INTENCLR11_INTERCEPTEDTASK_Pos (12UL) /*!< Position of INTERCEPTEDTASK field. */
#define RADIO_INTENCLR11_INTERCEPTEDTASK_Msk (0x1UL << RADIO_INTENCLR11_INTERCEPTEDTASK_Pos) /*!< Bit mask of INTERCEPTEDTASK field. */
#define RADIO_INTENCLR11_INTERCEPTEDTASK_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR11_INTERCEPTEDTASK_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR11_INTERCEPTEDTASK_Clear (0x1UL) /*!< Disable */

/* Bit 11 : Write '1' to disable interrupt for event DEMODCTRLCONDTRIGGERED2 */
#define RADIO_INTENCLR11_DEMODCTRLCONDTRIGGERED2_Pos (11UL) /*!< Position of DEMODCTRLCONDTRIGGERED2 field. */
#define RADIO_INTENCLR11_DEMODCTRLCONDTRIGGERED2_Msk (0x1UL << RADIO_INTENCLR11_DEMODCTRLCONDTRIGGERED2_Pos) /*!< Bit mask of DEMODCTRLCONDTRIGGERED2 field. */
#define RADIO_INTENCLR11_DEMODCTRLCONDTRIGGERED2_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR11_DEMODCTRLCONDTRIGGERED2_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR11_DEMODCTRLCONDTRIGGERED2_Clear (0x1UL) /*!< Disable */

/* Bit 10 : Write '1' to disable interrupt for event DEMODCTRLCONDTRIGGERED1 */
#define RADIO_INTENCLR11_DEMODCTRLCONDTRIGGERED1_Pos (10UL) /*!< Position of DEMODCTRLCONDTRIGGERED1 field. */
#define RADIO_INTENCLR11_DEMODCTRLCONDTRIGGERED1_Msk (0x1UL << RADIO_INTENCLR11_DEMODCTRLCONDTRIGGERED1_Pos) /*!< Bit mask of DEMODCTRLCONDTRIGGERED1 field. */
#define RADIO_INTENCLR11_DEMODCTRLCONDTRIGGERED1_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR11_DEMODCTRLCONDTRIGGERED1_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR11_DEMODCTRLCONDTRIGGERED1_Clear (0x1UL) /*!< Disable */

/* Bit 9 : Write '1' to disable interrupt for event DEMODCTRLCONDTRIGGERED0 */
#define RADIO_INTENCLR11_DEMODCTRLCONDTRIGGERED0_Pos (9UL) /*!< Position of DEMODCTRLCONDTRIGGERED0 field. */
#define RADIO_INTENCLR11_DEMODCTRLCONDTRIGGERED0_Msk (0x1UL << RADIO_INTENCLR11_DEMODCTRLCONDTRIGGERED0_Pos) /*!< Bit mask of DEMODCTRLCONDTRIGGERED0 field. */
#define RADIO_INTENCLR11_DEMODCTRLCONDTRIGGERED0_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR11_DEMODCTRLCONDTRIGGERED0_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR11_DEMODCTRLCONDTRIGGERED0_Clear (0x1UL) /*!< Disable */

/* Bit 8 : Write '1' to disable interrupt for event STROBETIMETRACKUPDATED */
#define RADIO_INTENCLR11_STROBETIMETRACKUPDATED_Pos (8UL) /*!< Position of STROBETIMETRACKUPDATED field. */
#define RADIO_INTENCLR11_STROBETIMETRACKUPDATED_Msk (0x1UL << RADIO_INTENCLR11_STROBETIMETRACKUPDATED_Pos) /*!< Bit mask of STROBETIMETRACKUPDATED field. */
#define RADIO_INTENCLR11_STROBETIMETRACKUPDATED_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR11_STROBETIMETRACKUPDATED_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR11_STROBETIMETRACKUPDATED_Clear (0x1UL) /*!< Disable */

/* Bit 7 : Write '1' to disable interrupt for event TIMERWRAPS */
#define RADIO_INTENCLR11_TIMERWRAPS_Pos (7UL) /*!< Position of TIMERWRAPS field. */
#define RADIO_INTENCLR11_TIMERWRAPS_Msk (0x1UL << RADIO_INTENCLR11_TIMERWRAPS_Pos) /*!< Bit mask of TIMERWRAPS field. */
#define RADIO_INTENCLR11_TIMERWRAPS_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR11_TIMERWRAPS_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR11_TIMERWRAPS_Clear (0x1UL) /*!< Disable */

/* Bit 6 : Write '1' to disable interrupt for event DETECTFIFOFULL */
#define RADIO_INTENCLR11_DETECTFIFOFULL_Pos (6UL) /*!< Position of DETECTFIFOFULL field. */
#define RADIO_INTENCLR11_DETECTFIFOFULL_Msk (0x1UL << RADIO_INTENCLR11_DETECTFIFOFULL_Pos) /*!< Bit mask of DETECTFIFOFULL field. */
#define RADIO_INTENCLR11_DETECTFIFOFULL_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR11_DETECTFIFOFULL_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR11_DETECTFIFOFULL_Clear (0x1UL) /*!< Disable */

/* Bit 5 : Write '1' to disable interrupt for event RAWDETECT */
#define RADIO_INTENCLR11_RAWDETECT_Pos (5UL) /*!< Position of RAWDETECT field. */
#define RADIO_INTENCLR11_RAWDETECT_Msk (0x1UL << RADIO_INTENCLR11_RAWDETECT_Pos) /*!< Bit mask of RAWDETECT field. */
#define RADIO_INTENCLR11_RAWDETECT_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR11_RAWDETECT_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR11_RAWDETECT_Clear (0x1UL) /*!< Disable */

/* Bit 4 : Write '1' to disable interrupt for event RXDIGEN */
#define RADIO_INTENCLR11_RXDIGEN_Pos (4UL) /*!< Position of RXDIGEN field. */
#define RADIO_INTENCLR11_RXDIGEN_Msk (0x1UL << RADIO_INTENCLR11_RXDIGEN_Pos) /*!< Bit mask of RXDIGEN field. */
#define RADIO_INTENCLR11_RXDIGEN_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR11_RXDIGEN_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR11_RXDIGEN_Clear (0x1UL) /*!< Disable */

/* Bit 2 : Write '1' to disable interrupt for event RXTIMERMATCH */
#define RADIO_INTENCLR11_RXTIMERMATCH_Pos (2UL) /*!< Position of RXTIMERMATCH field. */
#define RADIO_INTENCLR11_RXTIMERMATCH_Msk (0x1UL << RADIO_INTENCLR11_RXTIMERMATCH_Pos) /*!< Bit mask of RXTIMERMATCH field. */
#define RADIO_INTENCLR11_RXTIMERMATCH_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR11_RXTIMERMATCH_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR11_RXTIMERMATCH_Clear (0x1UL) /*!< Disable */

/* Bit 1 : Write '1' to disable interrupt for event TXTIMERMATCH */
#define RADIO_INTENCLR11_TXTIMERMATCH_Pos (1UL) /*!< Position of TXTIMERMATCH field. */
#define RADIO_INTENCLR11_TXTIMERMATCH_Msk (0x1UL << RADIO_INTENCLR11_TXTIMERMATCH_Pos) /*!< Bit mask of TXTIMERMATCH field. */
#define RADIO_INTENCLR11_TXTIMERMATCH_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR11_TXTIMERMATCH_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR11_TXTIMERMATCH_Clear (0x1UL) /*!< Disable */

/* Bit 0 : Write '1' to disable interrupt for event DBCTIMEOUT */
#define RADIO_INTENCLR11_DBCTIMEOUT_Pos (0UL) /*!< Position of DBCTIMEOUT field. */
#define RADIO_INTENCLR11_DBCTIMEOUT_Msk (0x1UL << RADIO_INTENCLR11_DBCTIMEOUT_Pos) /*!< Bit mask of DBCTIMEOUT field. */
#define RADIO_INTENCLR11_DBCTIMEOUT_Disabled (0x0UL) /*!< Read: Disabled */
#define RADIO_INTENCLR11_DBCTIMEOUT_Enabled (0x1UL) /*!< Read: Enabled */
#define RADIO_INTENCLR11_DBCTIMEOUT_Clear (0x1UL) /*!< Disable */

/* Register: RADIO_INTPEND10 */
/* Description: Pending interrupts */

/* Bit 31 : Read pending status of interrupt for event CHNOUPDATED */
#define RADIO_INTPEND10_CHNOUPDATED_Pos (31UL) /*!< Position of CHNOUPDATED field. */
#define RADIO_INTPEND10_CHNOUPDATED_Msk (0x1UL << RADIO_INTPEND10_CHNOUPDATED_Pos) /*!< Bit mask of CHNOUPDATED field. */
#define RADIO_INTPEND10_CHNOUPDATED_NotPending (0x0UL) /*!< Read: Not pending */
#define RADIO_INTPEND10_CHNOUPDATED_Pending (0x1UL) /*!< Read: Pending */

/* Bit 30 : Read pending status of interrupt for event CALDONE */
#define RADIO_INTPEND10_CALDONE_Pos (30UL) /*!< Position of CALDONE field. */
#define RADIO_INTPEND10_CALDONE_Msk (0x1UL << RADIO_INTPEND10_CALDONE_Pos) /*!< Bit mask of CALDONE field. */
#define RADIO_INTPEND10_CALDONE_NotPending (0x0UL) /*!< Read: Not pending */
#define RADIO_INTPEND10_CALDONE_Pending (0x1UL) /*!< Read: Pending */

/* Bit 29 : Read pending status of interrupt for event LBREADY */
#define RADIO_INTPEND10_LBREADY_Pos (29UL) /*!< Position of LBREADY field. */
#define RADIO_INTPEND10_LBREADY_Msk (0x1UL << RADIO_INTPEND10_LBREADY_Pos) /*!< Bit mask of LBREADY field. */
#define RADIO_INTPEND10_LBREADY_NotPending (0x0UL) /*!< Read: Not pending */
#define RADIO_INTPEND10_LBREADY_Pending (0x1UL) /*!< Read: Pending */

/* Bit 28 : Read pending status of interrupt for event CTEEND */
#define RADIO_INTPEND10_CTEEND_Pos (28UL) /*!< Position of CTEEND field. */
#define RADIO_INTPEND10_CTEEND_Msk (0x1UL << RADIO_INTPEND10_CTEEND_Pos) /*!< Bit mask of CTEEND field. */
#define RADIO_INTPEND10_CTEEND_NotPending (0x0UL) /*!< Read: Not pending */
#define RADIO_INTPEND10_CTEEND_Pending (0x1UL) /*!< Read: Pending */

/* Bit 27 : Read pending status of interrupt for event MODEREADY */
#define RADIO_INTPEND10_MODEREADY_Pos (27UL) /*!< Position of MODEREADY field. */
#define RADIO_INTPEND10_MODEREADY_Msk (0x1UL << RADIO_INTPEND10_MODEREADY_Pos) /*!< Bit mask of MODEREADY field. */
#define RADIO_INTPEND10_MODEREADY_NotPending (0x0UL) /*!< Read: Not pending */
#define RADIO_INTPEND10_MODEREADY_Pending (0x1UL) /*!< Read: Pending */

/* Bit 26 : Read pending status of interrupt for event MODEWRITTEN */
#define RADIO_INTPEND10_MODEWRITTEN_Pos (26UL) /*!< Position of MODEWRITTEN field. */
#define RADIO_INTPEND10_MODEWRITTEN_Msk (0x1UL << RADIO_INTPEND10_MODEWRITTEN_Pos) /*!< Bit mask of MODEWRITTEN field. */
#define RADIO_INTPEND10_MODEWRITTEN_NotPending (0x0UL) /*!< Read: Not pending */
#define RADIO_INTPEND10_MODEWRITTEN_Pending (0x1UL) /*!< Read: Pending */

/* Bit 25 : Read pending status of interrupt for event DFEEND */
#define RADIO_INTPEND10_DFEEND_Pos (25UL) /*!< Position of DFEEND field. */
#define RADIO_INTPEND10_DFEEND_Msk (0x1UL << RADIO_INTPEND10_DFEEND_Pos) /*!< Bit mask of DFEEND field. */
#define RADIO_INTPEND10_DFEEND_NotPending (0x0UL) /*!< Read: Not pending */
#define RADIO_INTPEND10_DFEEND_Pending (0x1UL) /*!< Read: Pending */

/* Bit 24 : Read pending status of interrupt for event CTEWARNING */
#define RADIO_INTPEND10_CTEWARNING_Pos (24UL) /*!< Position of CTEWARNING field. */
#define RADIO_INTPEND10_CTEWARNING_Msk (0x1UL << RADIO_INTPEND10_CTEWARNING_Pos) /*!< Bit mask of CTEWARNING field. */
#define RADIO_INTPEND10_CTEWARNING_NotPending (0x0UL) /*!< Read: Not pending */
#define RADIO_INTPEND10_CTEWARNING_Pending (0x1UL) /*!< Read: Pending */

/* Bit 23 : Read pending status of interrupt for event CTEPRESENT */
#define RADIO_INTPEND10_CTEPRESENT_Pos (23UL) /*!< Position of CTEPRESENT field. */
#define RADIO_INTPEND10_CTEPRESENT_Msk (0x1UL << RADIO_INTPEND10_CTEPRESENT_Pos) /*!< Bit mask of CTEPRESENT field. */
#define RADIO_INTPEND10_CTEPRESENT_NotPending (0x0UL) /*!< Read: Not pending */
#define RADIO_INTPEND10_CTEPRESENT_Pending (0x1UL) /*!< Read: Pending */

/* Bit 22 : Read pending status of interrupt for event SYNC */
#define RADIO_INTPEND10_SYNC_Pos (22UL) /*!< Position of SYNC field. */
#define RADIO_INTPEND10_SYNC_Msk (0x1UL << RADIO_INTPEND10_SYNC_Pos) /*!< Bit mask of SYNC field. */
#define RADIO_INTPEND10_SYNC_NotPending (0x0UL) /*!< Read: Not pending */
#define RADIO_INTPEND10_SYNC_Pending (0x1UL) /*!< Read: Pending */

/* Bit 21 : Read pending status of interrupt for event MHRMATCH */
#define RADIO_INTPEND10_MHRMATCH_Pos (21UL) /*!< Position of MHRMATCH field. */
#define RADIO_INTPEND10_MHRMATCH_Msk (0x1UL << RADIO_INTPEND10_MHRMATCH_Pos) /*!< Bit mask of MHRMATCH field. */
#define RADIO_INTPEND10_MHRMATCH_NotPending (0x0UL) /*!< Read: Not pending */
#define RADIO_INTPEND10_MHRMATCH_Pending (0x1UL) /*!< Read: Pending */

/* Bit 20 : Read pending status of interrupt for event RATEBOOST */
#define RADIO_INTPEND10_RATEBOOST_Pos (20UL) /*!< Position of RATEBOOST field. */
#define RADIO_INTPEND10_RATEBOOST_Msk (0x1UL << RADIO_INTPEND10_RATEBOOST_Pos) /*!< Bit mask of RATEBOOST field. */
#define RADIO_INTPEND10_RATEBOOST_NotPending (0x0UL) /*!< Read: Not pending */
#define RADIO_INTPEND10_RATEBOOST_Pending (0x1UL) /*!< Read: Pending */

/* Bit 19 : Read pending status of interrupt for event CCASTOPPED */
#define RADIO_INTPEND10_CCASTOPPED_Pos (19UL) /*!< Position of CCASTOPPED field. */
#define RADIO_INTPEND10_CCASTOPPED_Msk (0x1UL << RADIO_INTPEND10_CCASTOPPED_Pos) /*!< Bit mask of CCASTOPPED field. */
#define RADIO_INTPEND10_CCASTOPPED_NotPending (0x0UL) /*!< Read: Not pending */
#define RADIO_INTPEND10_CCASTOPPED_Pending (0x1UL) /*!< Read: Pending */

/* Bit 18 : Read pending status of interrupt for event CCABUSY */
#define RADIO_INTPEND10_CCABUSY_Pos (18UL) /*!< Position of CCABUSY field. */
#define RADIO_INTPEND10_CCABUSY_Msk (0x1UL << RADIO_INTPEND10_CCABUSY_Pos) /*!< Bit mask of CCABUSY field. */
#define RADIO_INTPEND10_CCABUSY_NotPending (0x0UL) /*!< Read: Not pending */
#define RADIO_INTPEND10_CCABUSY_Pending (0x1UL) /*!< Read: Pending */

/* Bit 17 : Read pending status of interrupt for event CCAIDLE */
#define RADIO_INTPEND10_CCAIDLE_Pos (17UL) /*!< Position of CCAIDLE field. */
#define RADIO_INTPEND10_CCAIDLE_Msk (0x1UL << RADIO_INTPEND10_CCAIDLE_Pos) /*!< Bit mask of CCAIDLE field. */
#define RADIO_INTPEND10_CCAIDLE_NotPending (0x0UL) /*!< Read: Not pending */
#define RADIO_INTPEND10_CCAIDLE_Pending (0x1UL) /*!< Read: Pending */

/* Bit 16 : Read pending status of interrupt for event EDSTOPPED */
#define RADIO_INTPEND10_EDSTOPPED_Pos (16UL) /*!< Position of EDSTOPPED field. */
#define RADIO_INTPEND10_EDSTOPPED_Msk (0x1UL << RADIO_INTPEND10_EDSTOPPED_Pos) /*!< Bit mask of EDSTOPPED field. */
#define RADIO_INTPEND10_EDSTOPPED_NotPending (0x0UL) /*!< Read: Not pending */
#define RADIO_INTPEND10_EDSTOPPED_Pending (0x1UL) /*!< Read: Pending */

/* Bit 15 : Read pending status of interrupt for event EDEND */
#define RADIO_INTPEND10_EDEND_Pos (15UL) /*!< Position of EDEND field. */
#define RADIO_INTPEND10_EDEND_Msk (0x1UL << RADIO_INTPEND10_EDEND_Pos) /*!< Bit mask of EDEND field. */
#define RADIO_INTPEND10_EDEND_NotPending (0x0UL) /*!< Read: Not pending */
#define RADIO_INTPEND10_EDEND_Pending (0x1UL) /*!< Read: Pending */

/* Bit 14 : Read pending status of interrupt for event BCMATCH */
#define RADIO_INTPEND10_BCMATCH_Pos (14UL) /*!< Position of BCMATCH field. */
#define RADIO_INTPEND10_BCMATCH_Msk (0x1UL << RADIO_INTPEND10_BCMATCH_Pos) /*!< Bit mask of BCMATCH field. */
#define RADIO_INTPEND10_BCMATCH_NotPending (0x0UL) /*!< Read: Not pending */
#define RADIO_INTPEND10_BCMATCH_Pending (0x1UL) /*!< Read: Pending */

/* Bit 12 : Read pending status of interrupt for event CRCERROR */
#define RADIO_INTPEND10_CRCERROR_Pos (12UL) /*!< Position of CRCERROR field. */
#define RADIO_INTPEND10_CRCERROR_Msk (0x1UL << RADIO_INTPEND10_CRCERROR_Pos) /*!< Bit mask of CRCERROR field. */
#define RADIO_INTPEND10_CRCERROR_NotPending (0x0UL) /*!< Read: Not pending */
#define RADIO_INTPEND10_CRCERROR_Pending (0x1UL) /*!< Read: Pending */

/* Bit 11 : Read pending status of interrupt for event CRCOK */
#define RADIO_INTPEND10_CRCOK_Pos (11UL) /*!< Position of CRCOK field. */
#define RADIO_INTPEND10_CRCOK_Msk (0x1UL << RADIO_INTPEND10_CRCOK_Pos) /*!< Bit mask of CRCOK field. */
#define RADIO_INTPEND10_CRCOK_NotPending (0x0UL) /*!< Read: Not pending */
#define RADIO_INTPEND10_CRCOK_Pending (0x1UL) /*!< Read: Pending */

/* Bit 10 : Read pending status of interrupt for event DEVMISS */
#define RADIO_INTPEND10_DEVMISS_Pos (10UL) /*!< Position of DEVMISS field. */
#define RADIO_INTPEND10_DEVMISS_Msk (0x1UL << RADIO_INTPEND10_DEVMISS_Pos) /*!< Bit mask of DEVMISS field. */
#define RADIO_INTPEND10_DEVMISS_NotPending (0x0UL) /*!< Read: Not pending */
#define RADIO_INTPEND10_DEVMISS_Pending (0x1UL) /*!< Read: Pending */

/* Bit 9 : Read pending status of interrupt for event DEVMATCH */
#define RADIO_INTPEND10_DEVMATCH_Pos (9UL) /*!< Position of DEVMATCH field. */
#define RADIO_INTPEND10_DEVMATCH_Msk (0x1UL << RADIO_INTPEND10_DEVMATCH_Pos) /*!< Bit mask of DEVMATCH field. */
#define RADIO_INTPEND10_DEVMATCH_NotPending (0x0UL) /*!< Read: Not pending */
#define RADIO_INTPEND10_DEVMATCH_Pending (0x1UL) /*!< Read: Pending */

/* Bit 8 : Read pending status of interrupt for event DISABLED */
#define RADIO_INTPEND10_DISABLED_Pos (8UL) /*!< Position of DISABLED field. */
#define RADIO_INTPEND10_DISABLED_Msk (0x1UL << RADIO_INTPEND10_DISABLED_Pos) /*!< Bit mask of DISABLED field. */
#define RADIO_INTPEND10_DISABLED_NotPending (0x0UL) /*!< Read: Not pending */
#define RADIO_INTPEND10_DISABLED_Pending (0x1UL) /*!< Read: Pending */

/* Bit 7 : Read pending status of interrupt for event PHYEND */
#define RADIO_INTPEND10_PHYEND_Pos (7UL) /*!< Position of PHYEND field. */
#define RADIO_INTPEND10_PHYEND_Msk (0x1UL << RADIO_INTPEND10_PHYEND_Pos) /*!< Bit mask of PHYEND field. */
#define RADIO_INTPEND10_PHYEND_NotPending (0x0UL) /*!< Read: Not pending */
#define RADIO_INTPEND10_PHYEND_Pending (0x1UL) /*!< Read: Pending */

/* Bit 6 : Read pending status of interrupt for event END */
#define RADIO_INTPEND10_END_Pos (6UL) /*!< Position of END field. */
#define RADIO_INTPEND10_END_Msk (0x1UL << RADIO_INTPEND10_END_Pos) /*!< Bit mask of END field. */
#define RADIO_INTPEND10_END_NotPending (0x0UL) /*!< Read: Not pending */
#define RADIO_INTPEND10_END_Pending (0x1UL) /*!< Read: Pending */

/* Bit 5 : Read pending status of interrupt for event PAYLOAD */
#define RADIO_INTPEND10_PAYLOAD_Pos (5UL) /*!< Position of PAYLOAD field. */
#define RADIO_INTPEND10_PAYLOAD_Msk (0x1UL << RADIO_INTPEND10_PAYLOAD_Pos) /*!< Bit mask of PAYLOAD field. */
#define RADIO_INTPEND10_PAYLOAD_NotPending (0x0UL) /*!< Read: Not pending */
#define RADIO_INTPEND10_PAYLOAD_Pending (0x1UL) /*!< Read: Pending */

/* Bit 4 : Read pending status of interrupt for event FRAMESTART */
#define RADIO_INTPEND10_FRAMESTART_Pos (4UL) /*!< Position of FRAMESTART field. */
#define RADIO_INTPEND10_FRAMESTART_Msk (0x1UL << RADIO_INTPEND10_FRAMESTART_Pos) /*!< Bit mask of FRAMESTART field. */
#define RADIO_INTPEND10_FRAMESTART_NotPending (0x0UL) /*!< Read: Not pending */
#define RADIO_INTPEND10_FRAMESTART_Pending (0x1UL) /*!< Read: Pending */

/* Bit 3 : Read pending status of interrupt for event ADDRESS */
#define RADIO_INTPEND10_ADDRESS_Pos (3UL) /*!< Position of ADDRESS field. */
#define RADIO_INTPEND10_ADDRESS_Msk (0x1UL << RADIO_INTPEND10_ADDRESS_Pos) /*!< Bit mask of ADDRESS field. */
#define RADIO_INTPEND10_ADDRESS_NotPending (0x0UL) /*!< Read: Not pending */
#define RADIO_INTPEND10_ADDRESS_Pending (0x1UL) /*!< Read: Pending */

/* Bit 2 : Read pending status of interrupt for event RXREADY */
#define RADIO_INTPEND10_RXREADY_Pos (2UL) /*!< Position of RXREADY field. */
#define RADIO_INTPEND10_RXREADY_Msk (0x1UL << RADIO_INTPEND10_RXREADY_Pos) /*!< Bit mask of RXREADY field. */
#define RADIO_INTPEND10_RXREADY_NotPending (0x0UL) /*!< Read: Not pending */
#define RADIO_INTPEND10_RXREADY_Pending (0x1UL) /*!< Read: Pending */

/* Bit 1 : Read pending status of interrupt for event TXREADY */
#define RADIO_INTPEND10_TXREADY_Pos (1UL) /*!< Position of TXREADY field. */
#define RADIO_INTPEND10_TXREADY_Msk (0x1UL << RADIO_INTPEND10_TXREADY_Pos) /*!< Bit mask of TXREADY field. */
#define RADIO_INTPEND10_TXREADY_NotPending (0x0UL) /*!< Read: Not pending */
#define RADIO_INTPEND10_TXREADY_Pending (0x1UL) /*!< Read: Pending */

/* Bit 0 : Read pending status of interrupt for event READY */
#define RADIO_INTPEND10_READY_Pos (0UL) /*!< Position of READY field. */
#define RADIO_INTPEND10_READY_Msk (0x1UL << RADIO_INTPEND10_READY_Pos) /*!< Bit mask of READY field. */
#define RADIO_INTPEND10_READY_NotPending (0x0UL) /*!< Read: Not pending */
#define RADIO_INTPEND10_READY_Pending (0x1UL) /*!< Read: Pending */

/* Register: RADIO_INTPEND11 */
/* Description: Pending interrupts */

/* Bit 17 : Read pending status of interrupt for event ACQINJ1DMAEND */
#define RADIO_INTPEND11_ACQINJ1DMAEND_Pos (17UL) /*!< Position of ACQINJ1DMAEND field. */
#define RADIO_INTPEND11_ACQINJ1DMAEND_Msk (0x1UL << RADIO_INTPEND11_ACQINJ1DMAEND_Pos) /*!< Bit mask of ACQINJ1DMAEND field. */
#define RADIO_INTPEND11_ACQINJ1DMAEND_NotPending (0x0UL) /*!< Read: Not pending */
#define RADIO_INTPEND11_ACQINJ1DMAEND_Pending (0x1UL) /*!< Read: Pending */

/* Bit 16 : Read pending status of interrupt for event ACQINJ0DMAEND */
#define RADIO_INTPEND11_ACQINJ0DMAEND_Pos (16UL) /*!< Position of ACQINJ0DMAEND field. */
#define RADIO_INTPEND11_ACQINJ0DMAEND_Msk (0x1UL << RADIO_INTPEND11_ACQINJ0DMAEND_Pos) /*!< Bit mask of ACQINJ0DMAEND field. */
#define RADIO_INTPEND11_ACQINJ0DMAEND_NotPending (0x0UL) /*!< Read: Not pending */
#define RADIO_INTPEND11_ACQINJ0DMAEND_Pending (0x1UL) /*!< Read: Pending */

/* Bit 13 : Read pending status of interrupt for event INTERCEPTEDEVENT */
#define RADIO_INTPEND11_INTERCEPTEDEVENT_Pos (13UL) /*!< Position of INTERCEPTEDEVENT field. */
#define RADIO_INTPEND11_INTERCEPTEDEVENT_Msk (0x1UL << RADIO_INTPEND11_INTERCEPTEDEVENT_Pos) /*!< Bit mask of INTERCEPTEDEVENT field. */
#define RADIO_INTPEND11_INTERCEPTEDEVENT_NotPending (0x0UL) /*!< Read: Not pending */
#define RADIO_INTPEND11_INTERCEPTEDEVENT_Pending (0x1UL) /*!< Read: Pending */

/* Bit 12 : Read pending status of interrupt for event INTERCEPTEDTASK */
#define RADIO_INTPEND11_INTERCEPTEDTASK_Pos (12UL) /*!< Position of INTERCEPTEDTASK field. */
#define RADIO_INTPEND11_INTERCEPTEDTASK_Msk (0x1UL << RADIO_INTPEND11_INTERCEPTEDTASK_Pos) /*!< Bit mask of INTERCEPTEDTASK field. */
#define RADIO_INTPEND11_INTERCEPTEDTASK_NotPending (0x0UL) /*!< Read: Not pending */
#define RADIO_INTPEND11_INTERCEPTEDTASK_Pending (0x1UL) /*!< Read: Pending */

/* Bit 11 : Read pending status of interrupt for event DEMODCTRLCONDTRIGGERED2 */
#define RADIO_INTPEND11_DEMODCTRLCONDTRIGGERED2_Pos (11UL) /*!< Position of DEMODCTRLCONDTRIGGERED2 field. */
#define RADIO_INTPEND11_DEMODCTRLCONDTRIGGERED2_Msk (0x1UL << RADIO_INTPEND11_DEMODCTRLCONDTRIGGERED2_Pos) /*!< Bit mask of DEMODCTRLCONDTRIGGERED2 field. */
#define RADIO_INTPEND11_DEMODCTRLCONDTRIGGERED2_NotPending (0x0UL) /*!< Read: Not pending */
#define RADIO_INTPEND11_DEMODCTRLCONDTRIGGERED2_Pending (0x1UL) /*!< Read: Pending */

/* Bit 10 : Read pending status of interrupt for event DEMODCTRLCONDTRIGGERED1 */
#define RADIO_INTPEND11_DEMODCTRLCONDTRIGGERED1_Pos (10UL) /*!< Position of DEMODCTRLCONDTRIGGERED1 field. */
#define RADIO_INTPEND11_DEMODCTRLCONDTRIGGERED1_Msk (0x1UL << RADIO_INTPEND11_DEMODCTRLCONDTRIGGERED1_Pos) /*!< Bit mask of DEMODCTRLCONDTRIGGERED1 field. */
#define RADIO_INTPEND11_DEMODCTRLCONDTRIGGERED1_NotPending (0x0UL) /*!< Read: Not pending */
#define RADIO_INTPEND11_DEMODCTRLCONDTRIGGERED1_Pending (0x1UL) /*!< Read: Pending */

/* Bit 9 : Read pending status of interrupt for event DEMODCTRLCONDTRIGGERED0 */
#define RADIO_INTPEND11_DEMODCTRLCONDTRIGGERED0_Pos (9UL) /*!< Position of DEMODCTRLCONDTRIGGERED0 field. */
#define RADIO_INTPEND11_DEMODCTRLCONDTRIGGERED0_Msk (0x1UL << RADIO_INTPEND11_DEMODCTRLCONDTRIGGERED0_Pos) /*!< Bit mask of DEMODCTRLCONDTRIGGERED0 field. */
#define RADIO_INTPEND11_DEMODCTRLCONDTRIGGERED0_NotPending (0x0UL) /*!< Read: Not pending */
#define RADIO_INTPEND11_DEMODCTRLCONDTRIGGERED0_Pending (0x1UL) /*!< Read: Pending */

/* Bit 8 : Read pending status of interrupt for event STROBETIMETRACKUPDATED */
#define RADIO_INTPEND11_STROBETIMETRACKUPDATED_Pos (8UL) /*!< Position of STROBETIMETRACKUPDATED field. */
#define RADIO_INTPEND11_STROBETIMETRACKUPDATED_Msk (0x1UL << RADIO_INTPEND11_STROBETIMETRACKUPDATED_Pos) /*!< Bit mask of STROBETIMETRACKUPDATED field. */
#define RADIO_INTPEND11_STROBETIMETRACKUPDATED_NotPending (0x0UL) /*!< Read: Not pending */
#define RADIO_INTPEND11_STROBETIMETRACKUPDATED_Pending (0x1UL) /*!< Read: Pending */

/* Bit 7 : Read pending status of interrupt for event TIMERWRAPS */
#define RADIO_INTPEND11_TIMERWRAPS_Pos (7UL) /*!< Position of TIMERWRAPS field. */
#define RADIO_INTPEND11_TIMERWRAPS_Msk (0x1UL << RADIO_INTPEND11_TIMERWRAPS_Pos) /*!< Bit mask of TIMERWRAPS field. */
#define RADIO_INTPEND11_TIMERWRAPS_NotPending (0x0UL) /*!< Read: Not pending */
#define RADIO_INTPEND11_TIMERWRAPS_Pending (0x1UL) /*!< Read: Pending */

/* Bit 6 : Read pending status of interrupt for event DETECTFIFOFULL */
#define RADIO_INTPEND11_DETECTFIFOFULL_Pos (6UL) /*!< Position of DETECTFIFOFULL field. */
#define RADIO_INTPEND11_DETECTFIFOFULL_Msk (0x1UL << RADIO_INTPEND11_DETECTFIFOFULL_Pos) /*!< Bit mask of DETECTFIFOFULL field. */
#define RADIO_INTPEND11_DETECTFIFOFULL_NotPending (0x0UL) /*!< Read: Not pending */
#define RADIO_INTPEND11_DETECTFIFOFULL_Pending (0x1UL) /*!< Read: Pending */

/* Bit 5 : Read pending status of interrupt for event RAWDETECT */
#define RADIO_INTPEND11_RAWDETECT_Pos (5UL) /*!< Position of RAWDETECT field. */
#define RADIO_INTPEND11_RAWDETECT_Msk (0x1UL << RADIO_INTPEND11_RAWDETECT_Pos) /*!< Bit mask of RAWDETECT field. */
#define RADIO_INTPEND11_RAWDETECT_NotPending (0x0UL) /*!< Read: Not pending */
#define RADIO_INTPEND11_RAWDETECT_Pending (0x1UL) /*!< Read: Pending */

/* Bit 4 : Read pending status of interrupt for event RXDIGEN */
#define RADIO_INTPEND11_RXDIGEN_Pos (4UL) /*!< Position of RXDIGEN field. */
#define RADIO_INTPEND11_RXDIGEN_Msk (0x1UL << RADIO_INTPEND11_RXDIGEN_Pos) /*!< Bit mask of RXDIGEN field. */
#define RADIO_INTPEND11_RXDIGEN_NotPending (0x0UL) /*!< Read: Not pending */
#define RADIO_INTPEND11_RXDIGEN_Pending (0x1UL) /*!< Read: Pending */

/* Bit 2 : Read pending status of interrupt for event RXTIMERMATCH */
#define RADIO_INTPEND11_RXTIMERMATCH_Pos (2UL) /*!< Position of RXTIMERMATCH field. */
#define RADIO_INTPEND11_RXTIMERMATCH_Msk (0x1UL << RADIO_INTPEND11_RXTIMERMATCH_Pos) /*!< Bit mask of RXTIMERMATCH field. */
#define RADIO_INTPEND11_RXTIMERMATCH_NotPending (0x0UL) /*!< Read: Not pending */
#define RADIO_INTPEND11_RXTIMERMATCH_Pending (0x1UL) /*!< Read: Pending */

/* Bit 1 : Read pending status of interrupt for event TXTIMERMATCH */
#define RADIO_INTPEND11_TXTIMERMATCH_Pos (1UL) /*!< Position of TXTIMERMATCH field. */
#define RADIO_INTPEND11_TXTIMERMATCH_Msk (0x1UL << RADIO_INTPEND11_TXTIMERMATCH_Pos) /*!< Bit mask of TXTIMERMATCH field. */
#define RADIO_INTPEND11_TXTIMERMATCH_NotPending (0x0UL) /*!< Read: Not pending */
#define RADIO_INTPEND11_TXTIMERMATCH_Pending (0x1UL) /*!< Read: Pending */

/* Bit 0 : Read pending status of interrupt for event DBCTIMEOUT */
#define RADIO_INTPEND11_DBCTIMEOUT_Pos (0UL) /*!< Position of DBCTIMEOUT field. */
#define RADIO_INTPEND11_DBCTIMEOUT_Msk (0x1UL << RADIO_INTPEND11_DBCTIMEOUT_Pos) /*!< Bit mask of DBCTIMEOUT field. */
#define RADIO_INTPEND11_DBCTIMEOUT_NotPending (0x0UL) /*!< Read: Not pending */
#define RADIO_INTPEND11_DBCTIMEOUT_Pending (0x1UL) /*!< Read: Pending */

/* Register: RADIO_MODE */
/* Description: Data rate and modulation */

/* Bits 3..0 : Radio data rate and modulation setting. The radio supports frequency-shift keying (FSK) modulation. */
#define RADIO_MODE_MODE_Pos (0UL) /*!< Position of MODE field. */
#define RADIO_MODE_MODE_Msk (0xFUL << RADIO_MODE_MODE_Pos) /*!< Bit mask of MODE field. */
#define RADIO_MODE_MODE_Nrf_1Mbit (0x0UL) /*!< 1 Mbps Nordic proprietary radio mode */
#define RADIO_MODE_MODE_Nrf_2Mbit (0x1UL) /*!< 2 Mbps Nordic proprietary radio mode */
#define RADIO_MODE_MODE_Nrf_250Kbit (0x2UL) /*!< Deprecated enumerator -  250 kbps Nordic proprietary radio mode */
#define RADIO_MODE_MODE_Ble_1Mbit (0x3UL) /*!< 1 Mbps BLE */
#define RADIO_MODE_MODE_Ble_2Mbit (0x4UL) /*!< 2 Mbps BLE */
#define RADIO_MODE_MODE_Ble_LR125Kbit (0x5UL) /*!< Long range 125 kbps TX, 125 kbps and 500 kbps RX */
#define RADIO_MODE_MODE_Ble_LR500Kbit (0x6UL) /*!< Long range 500 kbps TX, 125 kbps and 500 kbps RX */
#define RADIO_MODE_MODE_Nrf_4Mbit0_5 (0x9UL) /*!< 4 Mbps Nordic proprietary radio mode (BT=0.5/h=0.5) */
#define RADIO_MODE_MODE_Nrf_4Mbit0_25 (0xAUL) /*!< 4 Mbps Nordic proprietary radio mode (BT=0.5/h=0.25) */
#define RADIO_MODE_MODE_Ieee802154_250Kbit (0xFUL) /*!< IEEE 802.15.4-2006 250 kbps */

/* Register: RADIO_MODEINTERNAL */
/* Description: Internal mode setting, active only when MODEPROGENABLE==1 */

/* Bits 3..0 : Radio data rate and modulation setting. Same definition as MODE. */
#define RADIO_MODEINTERNAL_MODEINTERNAL_Pos (0UL) /*!< Position of MODEINTERNAL field. */
#define RADIO_MODEINTERNAL_MODEINTERNAL_Msk (0xFUL << RADIO_MODEINTERNAL_MODEINTERNAL_Pos) /*!< Bit mask of MODEINTERNAL field. */

/* Register: RADIO_MODEPROGENABLE */
/* Description: Switch that enables programmable modes */

/* Bit 0 : Enable manual triggering of MODEREADY event and activate MODEINTERNAL register (ie. MODEINTERNAL overrides MODE register) */
#define RADIO_MODEPROGENABLE_MODEPROGENABLE_Pos (0UL) /*!< Position of MODEPROGENABLE field. */
#define RADIO_MODEPROGENABLE_MODEPROGENABLE_Msk (0x1UL << RADIO_MODEPROGENABLE_MODEPROGENABLE_Pos) /*!< Bit mask of MODEPROGENABLE field. */

/* Register: RADIO_MODEDEPENDENTXPBTEST */
/* Description: Mode dependent XPB test register */

/* Bits 31..0 : 32 bits, only for testing mode dependency */
#define RADIO_MODEDEPENDENTXPBTEST_VAL_Pos (0UL) /*!< Position of VAL field. */
#define RADIO_MODEDEPENDENTXPBTEST_VAL_Msk (0xFFFFFFFFUL << RADIO_MODEDEPENDENTXPBTEST_VAL_Pos) /*!< Bit mask of VAL field. */

/* Register: RADIO_MODECNF */
/* Description: Radio mode configuration register */

/* Bit 6 : IQ RAM select */
#define RADIO_MODECNF_IQRAMSEL_Pos (6UL) /*!< Position of IQRAMSEL field. */
#define RADIO_MODECNF_IQRAMSEL_Msk (0x1UL << RADIO_MODECNF_IQRAMSEL_Pos) /*!< Bit mask of IQRAMSEL field. */
#define RADIO_MODECNF_IQRAMSEL_off (0x0UL) /*!< IQ RAM select off */
#define RADIO_MODECNF_IQRAMSEL_on (0x1UL) /*!< IQ RAM select on */

/* Bit 5 : Loopback from IQ modulator TODO: is it a good place? */
#define RADIO_MODECNF_IQMODLOOPBACK_Pos (5UL) /*!< Position of IQMODLOOPBACK field. */
#define RADIO_MODECNF_IQMODLOOPBACK_Msk (0x1UL << RADIO_MODECNF_IQMODLOOPBACK_Pos) /*!< Bit mask of IQMODLOOPBACK field. */
#define RADIO_MODECNF_IQMODLOOPBACK_Off (0x0UL) /*!< Digital loopback off */
#define RADIO_MODECNF_IQMODLOOPBACK_On (0x1UL) /*!< Digital loopback on */

/* Bits 4..3 : Default TX value. Specifies what the RADIO will transmit when it is not started, i.e.
          between:
          RADIO.EVENTS_READY and RADIO.TASKS_START
          RADIO.EVENTS_END and RADIO.TASKS_START
          RADIO.EVENTS_END and RADIO.EVENTS_DISABLED) */
#define RADIO_MODECNF_DTX_Pos (3UL) /*!< Position of DTX field. */
#define RADIO_MODECNF_DTX_Msk (0x3UL << RADIO_MODECNF_DTX_Pos) /*!< Bit mask of DTX field. */
#define RADIO_MODECNF_DTX_B1 (0x0UL) /*!< Transmit '1' */
#define RADIO_MODECNF_DTX_B0 (0x1UL) /*!< Transmit '0' */
#define RADIO_MODECNF_DTX_Center (0x2UL) /*!< Transmit center frequency
          When tuning the crystal for centre frequency, the RADIO must
          be set in DTX = Center mode to be able to achieve the expected
          accuracy. This is only a valid setting for Nrf_1Mbit, Nrf_2Mbit,
          Nrf_250kbit, Ble_1Mbit and Ble_2Mbit. */

/* Bit 2 : Sideband select */
#define RADIO_MODECNF_SSEL_Pos (2UL) /*!< Position of SSEL field. */
#define RADIO_MODECNF_SSEL_Msk (0x1UL << RADIO_MODECNF_SSEL_Pos) /*!< Bit mask of SSEL field. */
#define RADIO_MODECNF_SSEL_Low (0x0UL) /*!< Low-side LO */
#define RADIO_MODECNF_SSEL_High (0x1UL) /*!< High-side LO */

/* Bit 1 : Zero-IF mode */
#define RADIO_MODECNF_ZEROIF_Pos (1UL) /*!< Position of ZEROIF field. */
#define RADIO_MODECNF_ZEROIF_Msk (0x1UL << RADIO_MODECNF_ZEROIF_Pos) /*!< Bit mask of ZEROIF field. */
#define RADIO_MODECNF_ZEROIF_Default (0x0UL) /*!< Default mode (heterodyne) */
#define RADIO_MODECNF_ZEROIF_ZeroIF (0x1UL) /*!< Zero-IF mode */

/* Bit 0 : Demodulator mode override value */
#define RADIO_MODECNF_DEMODN_Pos (0UL) /*!< Position of DEMODN field. */
#define RADIO_MODECNF_DEMODN_Msk (0x1UL << RADIO_MODECNF_DEMODN_Pos) /*!< Bit mask of DEMODN field. */
#define RADIO_MODECNF_DEMODN_Standard (0x0UL) /*!< Standard demodulator mode */
#define RADIO_MODECNF_DEMODN_Hyper (0x1UL) /*!< Hyper demodulator mode */

/* Register: RADIO_MISC */
/* Description: Misc configuration collection (to be renamed when more bits are defined) */

/* Bit 2 : Override AGC gain setting during CTE (from QOVERRIDE10) */
#define RADIO_MISC_AGCFREEZEGAINENABLE_Pos (2UL) /*!< Position of AGCFREEZEGAINENABLE field. */
#define RADIO_MISC_AGCFREEZEGAINENABLE_Msk (0x1UL << RADIO_MISC_AGCFREEZEGAINENABLE_Pos) /*!< Bit mask of AGCFREEZEGAINENABLE field. */
#define RADIO_MISC_AGCFREEZEGAINENABLE_Adjust (0x0UL) /*!< AGC gain settings will keep adjusting during CTE */
#define RADIO_MISC_AGCFREEZEGAINENABLE_Freeze (0x1UL) /*!< AGC gain settings will freeze (not keep adjusting) during CTE */

/* Bit 1 :   */
#define RADIO_MISC_AGCFREEZEAFTERREF_Pos (1UL) /*!< Position of AGCFREEZEAFTERREF field. */
#define RADIO_MISC_AGCFREEZEAFTERREF_Msk (0x1UL << RADIO_MISC_AGCFREEZEAFTERREF_Pos) /*!< Bit mask of AGCFREEZEAFTERREF field. */
#define RADIO_MISC_AGCFREEZEAFTERREF_EntireCTE (0x0UL) /*!< Gain freeze will apply to whole CTE, */
#define RADIO_MISC_AGCFREEZEAFTERREF_AfterRefPeriod (0x1UL) /*!< Gain freeze will apply to only after reference period of CTE. */

/* Bit 0 :   */
#define RADIO_MISC_DISABLEADDRWINDOW_Pos (0UL) /*!< Position of DISABLEADDRWINDOW field. */
#define RADIO_MISC_DISABLEADDRWINDOW_Msk (0x1UL << RADIO_MISC_DISABLEADDRWINDOW_Pos) /*!< Bit mask of DISABLEADDRWINDOW field. */
#define RADIO_MISC_DISABLEADDRWINDOW_Enabled (0x0UL) /*!< Enable */
#define RADIO_MISC_DISABLEADDRWINDOW_Disabled (0x1UL) /*!< Disable */

/* Register: RADIO_STATE */
/* Description: Current radio state */

/* Bits 3..0 : Current radio state */
#define RADIO_STATE_STATE_Pos (0UL) /*!< Position of STATE field. */
#define RADIO_STATE_STATE_Msk (0xFUL << RADIO_STATE_STATE_Pos) /*!< Bit mask of STATE field. */
#define RADIO_STATE_STATE_Disabled (0x0UL) /*!< RADIO is in the Disabled state */
#define RADIO_STATE_STATE_RxRu (0x1UL) /*!< RADIO is in the RXRU state */
#define RADIO_STATE_STATE_RxIdle (0x2UL) /*!< RADIO is in the RXIDLE state */
#define RADIO_STATE_STATE_Rx (0x3UL) /*!< RADIO is in the RX state */
#define RADIO_STATE_STATE_RxDisable (0x4UL) /*!< RADIO is in the RXDISABLED state */
#define RADIO_STATE_STATE_TxRu (0x9UL) /*!< RADIO is in the TXRU state */
#define RADIO_STATE_STATE_TxIdle (0xAUL) /*!< RADIO is in the TXIDLE state */
#define RADIO_STATE_STATE_Tx (0xBUL) /*!< RADIO is in the TX state */
#define RADIO_STATE_STATE_TxDisable (0xCUL) /*!< RADIO is in the TXDISABLED state */

/* Register: RADIO_EDCTRL */
/* Description: IEEE 802.15.4 energy detect control TODO: review and maybe rename in IPS */

/* Bits 29..24 : IEEE 802.15.4 energy detect/cca period, 4us resolution */
#define RADIO_EDCTRL_EDPERIOD_Pos (24UL) /*!< Position of EDPERIOD field. */
#define RADIO_EDCTRL_EDPERIOD_Msk (0x3FUL << RADIO_EDCTRL_EDPERIOD_Pos) /*!< Bit mask of EDPERIOD field. */

/* Bits 20..0 : IEEE 802.15.4 energy detect loop count */
#define RADIO_EDCTRL_EDCNT_Pos (0UL) /*!< Position of EDCNT field. */
#define RADIO_EDCTRL_EDCNT_Msk (0x1FFFFFUL << RADIO_EDCTRL_EDCNT_Pos) /*!< Bit mask of EDCNT field. */

/* Register: RADIO_EDSAMPLE */
/* Description: IEEE 802.15.4 energy detect level */

/* Bits 7..0 : IEEE 802.15.4 energy detect level */
#define RADIO_EDSAMPLE_EDLVL_Pos (0UL) /*!< Position of EDLVL field. */
#define RADIO_EDSAMPLE_EDLVL_Msk (0xFFUL << RADIO_EDSAMPLE_EDLVL_Pos) /*!< Bit mask of EDLVL field. */

/* Register: RADIO_CCACTRL */
/* Description: IEEE 802.15.4 clear channel assessment control */

/* Bits 31..24 : Limit for occurances above CCACORRTHRES. When not equal to zero the corrolator based signal detect is enabled. */
#define RADIO_CCACTRL_CCACORRCNT_Pos (24UL) /*!< Position of CCACORRCNT field. */
#define RADIO_CCACTRL_CCACORRCNT_Msk (0xFFUL << RADIO_CCACTRL_CCACORRCNT_Pos) /*!< Bit mask of CCACORRCNT field. */

/* Bits 23..16 : CCA correlator busy threshold. Only relevant to CarrierMode, CarrierAndEdMode, and CarrierOrEdMode. */
#define RADIO_CCACTRL_CCACORRTHRES_Pos (16UL) /*!< Position of CCACORRTHRES field. */
#define RADIO_CCACTRL_CCACORRTHRES_Msk (0xFFUL << RADIO_CCACTRL_CCACORRTHRES_Pos) /*!< Bit mask of CCACORRTHRES field. */

/* Bits 15..8 : CCA energy busy threshold. Used in all the CCA modes except CarrierMode. */
#define RADIO_CCACTRL_CCAEDTHRES_Pos (8UL) /*!< Position of CCAEDTHRES field. */
#define RADIO_CCACTRL_CCAEDTHRES_Msk (0xFFUL << RADIO_CCACTRL_CCAEDTHRES_Pos) /*!< Bit mask of CCAEDTHRES field. */

/* Bits 2..0 : CCA mode of operation */
#define RADIO_CCACTRL_CCAMODE_Pos (0UL) /*!< Position of CCAMODE field. */
#define RADIO_CCACTRL_CCAMODE_Msk (0x7UL << RADIO_CCACTRL_CCAMODE_Pos) /*!< Bit mask of CCAMODE field. */
#define RADIO_CCACTRL_CCAMODE_EdMode (0x0UL) /*!< Energy above threshold */
#define RADIO_CCACTRL_CCAMODE_CarrierMode (0x1UL) /*!< Carrier seen */
#define RADIO_CCACTRL_CCAMODE_CarrierAndEdMode (0x2UL) /*!< Energy above threshold AND carrier seen */
#define RADIO_CCACTRL_CCAMODE_CarrierOrEdMode (0x3UL) /*!< Energy above threshold OR carrier seen */
#define RADIO_CCACTRL_CCAMODE_EdModeTest1 (0x4UL) /*!< Energy above threshold test mode that will abort when first ED measurement over threshold is seen. No averaging. */

/* Register: RADIO_DATAWHITEIV */
/* Description: Data whitening initial value TODO:move to FelisMAC */

/* Bits 5..0 :   */
#define RADIO_DATAWHITEIV_DATAWHITEIV_Pos (0UL) /*!< Position of DATAWHITEIV field. */
#define RADIO_DATAWHITEIV_DATAWHITEIV_Msk (0x3FUL << RADIO_DATAWHITEIV_DATAWHITEIV_Pos) /*!< Bit mask of DATAWHITEIV field. */

/* Register: RADIO_ACQINJ_CNF */
/* Description: Description collection: Data acquisition capture mode */

/* Bit 31 : Data acquisition or injection */
#define RADIO_ACQINJ_CNF_DIR_Pos (31UL) /*!< Position of DIR field. */
#define RADIO_ACQINJ_CNF_DIR_Msk (0x1UL << RADIO_ACQINJ_CNF_DIR_Pos) /*!< Bit mask of DIR field. */
#define RADIO_ACQINJ_CNF_DIR_Acq (0x0UL) /*!< Peripheral to memory */
#define RADIO_ACQINJ_CNF_DIR_Inj (0x1UL) /*!< Memory to peripheral */

/* Bits 10..8 : Data hijack mode (Do not select the same SRC for one than more DMAs. otherwise higher index takes over control.) */
#define RADIO_ACQINJ_CNF_INJMODE_Pos (8UL) /*!< Position of INJMODE field. */
#define RADIO_ACQINJ_CNF_INJMODE_Msk (0x7UL << RADIO_ACQINJ_CNF_INJMODE_Pos) /*!< Bit mask of INJMODE field. */
#define RADIO_ACQINJ_CNF_INJMODE_FeSrc (0x0UL) /*!< Pick up IQ samples from RAM as FrontEnd input (hijack ADC output) */
#define RADIO_ACQINJ_CNF_INJMODE_BbSrc (0x1UL) /*!< Pick up IQ samples from RAM as Radio BaseBand input */
#define RADIO_ACQINJ_CNF_INJMODE_TxSrc (0x2UL) /*!< Pick up Tx bits from RAM (skipping packet assembler as modulator input */
#define RADIO_ACQINJ_CNF_INJMODE_AdPllModSrc (0x6UL) /*!< Pick up arbitrary wave from RAM to ADPLL */

/* Bits 3..0 : Data acquisition capture mode */
#define RADIO_ACQINJ_CNF_ACQMODE_Pos (0UL) /*!< Position of ACQMODE field. */
#define RADIO_ACQINJ_CNF_ACQMODE_Msk (0xFUL << RADIO_ACQINJ_CNF_ACQMODE_Pos) /*!< Bit mask of ACQMODE field. */
#define RADIO_ACQINJ_CNF_ACQMODE_AdcIQ (0x0UL) /*!< Logging ADCI and ADCQ */
#define RADIO_ACQINJ_CNF_ACQMODE_AdcIQAndAgcGain (0x2UL) /*!< Logging ADCI, ADCQ and AGC gain settings */
#define RADIO_ACQINJ_CNF_ACQMODE_AgcGainAndPkd (0x3UL) /*!< Logging AGC gain settings and peak detector outputs */
#define RADIO_ACQINJ_CNF_ACQMODE_FeIQ (0x4UL) /*!< Logging FrontEnd sampleI and sampleQ */
#define RADIO_ACQINJ_CNF_ACQMODE_BbIQ (0x5UL) /*!< Logging BaseBand I and Q */
#define RADIO_ACQINJ_CNF_ACQMODE_BbStdOut (0x6UL) /*!< Logging BaseBand std demodulator outputs (original ones, not the delayed version) */
#define RADIO_ACQINJ_CNF_ACQMODE_BbHypOut (0x7UL) /*!< Logging BaseBand hyp demodulator outputs */
#define RADIO_ACQINJ_CNF_ACQMODE_BbStdHypMuxOut (0x8UL) /*!< Logging muxed demodulator outputs and flags */
#define RADIO_ACQINJ_CNF_ACQMODE_AdPllTrace (0xCUL) /*!< ADPLL tracing */

/* Register: RADIO_ACQINJDMA_ENABLE */
/* Description: Description cluster: Enable or disable data acquisition */

/* Bit 0 : Enable or disable data acquisition */
#define RADIO_ACQINJDMA_ENABLE_ENABLE_Pos (0UL) /*!< Position of ENABLE field. */
#define RADIO_ACQINJDMA_ENABLE_ENABLE_Msk (0x1UL << RADIO_ACQINJDMA_ENABLE_ENABLE_Pos) /*!< Bit mask of ENABLE field. */
#define RADIO_ACQINJDMA_ENABLE_ENABLE_Disabled (0x0UL) /*!< Data acquisition is disabled */
#define RADIO_ACQINJDMA_ENABLE_ENABLE_Enabled (0x1UL) /*!< Data acquisition is enabled */

/* Register: RADIO_ACQINJDMA_PTR */
/* Description: Description cluster: ACQ DMA pointer */

/* Bit 29 :   */
#define RADIO_ACQINJDMA_PTR_BASE_Pos (29UL) /*!< Position of BASE field. */
#define RADIO_ACQINJDMA_PTR_BASE_Msk (0x1UL << RADIO_ACQINJDMA_PTR_BASE_Pos) /*!< Bit mask of BASE field. */

/* Bits 15..0 :   */
#define RADIO_ACQINJDMA_PTR_OFFSET_Pos (0UL) /*!< Position of OFFSET field. */
#define RADIO_ACQINJDMA_PTR_OFFSET_Msk (0xFFFFUL << RADIO_ACQINJDMA_PTR_OFFSET_Pos) /*!< Bit mask of OFFSET field. */

/* Register: RADIO_ACQINJDMA_MAXCNT */
/* Description: Description cluster: Maximum number of 32-bit words to transfer */

/* Bits 13..0 : Maximum number of 32-bit words to transfer */
#define RADIO_ACQINJDMA_MAXCNT_MAXCNT_Pos (0UL) /*!< Position of MAXCNT field. */
#define RADIO_ACQINJDMA_MAXCNT_MAXCNT_Msk (0x3FFFUL << RADIO_ACQINJDMA_MAXCNT_MAXCNT_Pos) /*!< Bit mask of MAXCNT field. */

/* Register: RADIO_ACQINJDMA_AMOUNT */
/* Description: Description cluster: Number of 32-bit words transferred in the last transaction */

/* Bits 13..0 : Number of 32-bit words transferred in the last transaction */
#define RADIO_ACQINJDMA_AMOUNT_AMOUNT_Pos (0UL) /*!< Position of AMOUNT field. */
#define RADIO_ACQINJDMA_AMOUNT_AMOUNT_Msk (0x3FFFUL << RADIO_ACQINJDMA_AMOUNT_AMOUNT_Pos) /*!< Bit mask of AMOUNT field. */

/* Register: RADIO_TESTINTERFACE_TESTINTERFACE_LOCK */
/* Description: Security LOCK for test interface */

/* Bit 8 : Status bit indicating if write once register has been written to since last reset */
#define RADIO_TESTINTERFACE_TESTINTERFACE_LOCK_WRITTEN_Pos (8UL) /*!< Position of WRITTEN field. */
#define RADIO_TESTINTERFACE_TESTINTERFACE_LOCK_WRITTEN_Msk (0x1UL << RADIO_TESTINTERFACE_TESTINTERFACE_LOCK_WRITTEN_Pos) /*!< Bit mask of WRITTEN field. */
#define RADIO_TESTINTERFACE_TESTINTERFACE_LOCK_WRITTEN_Unwritten (0x0UL) /*!< Write once register has not been written to and can be overwritten. */
#define RADIO_TESTINTERFACE_TESTINTERFACE_LOCK_WRITTEN_Written (0x1UL) /*!< Write once register has been written to and cannot be overwritten unless reset. */

/* Bit 0 : Write once to permanently lock or unlock. */
#define RADIO_TESTINTERFACE_TESTINTERFACE_LOCK_LOCK_Pos (0UL) /*!< Position of LOCK field. */
#define RADIO_TESTINTERFACE_TESTINTERFACE_LOCK_LOCK_Msk (0x1UL << RADIO_TESTINTERFACE_TESTINTERFACE_LOCK_LOCK_Pos) /*!< Bit mask of LOCK field. */
#define RADIO_TESTINTERFACE_TESTINTERFACE_LOCK_LOCK_Unlock (0x0UL) /*!< Interface is unlocked and can be enabled. */
#define RADIO_TESTINTERFACE_TESTINTERFACE_LOCK_LOCK_Lock (0x1UL) /*!< Interface is locked and cannot be enabled. */

/* Register: RADIO_TESTINTERFACE_TESTINTERFACE_CONF */
/* Description: CONFIG for PSEL test interface */

/* Bit 8 : Sink select for Tx Data input. TX clock source is always SphynxSupport */
#define RADIO_TESTINTERFACE_TESTINTERFACE_CONF_TXDATASINK_Pos (8UL) /*!< Position of TXDATASINK field. */
#define RADIO_TESTINTERFACE_TESTINTERFACE_CONF_TXDATASINK_Msk (0x1UL << RADIO_TESTINTERFACE_TESTINTERFACE_CONF_TXDATASINK_Pos) /*!< Bit mask of TXDATASINK field. */
#define RADIO_TESTINTERFACE_TESTINTERFACE_CONF_TXDATASINK_FelisTx (0x0UL) /*!< TX data sink is FelisTx */
#define RADIO_TESTINTERFACE_TESTINTERFACE_CONF_TXDATASINK_SphynxSupport (0x1UL) /*!< TX data sink is SphynxSupport */

/* Bits 1..0 : Source select for Rx data GPIO output and Rx clock output. Can optionally output Tx data that is transmitted TX clock */
#define RADIO_TESTINTERFACE_TESTINTERFACE_CONF_RXDATASOURCE_Pos (0UL) /*!< Position of RXDATASOURCE field. */
#define RADIO_TESTINTERFACE_TESTINTERFACE_CONF_RXDATASOURCE_Msk (0x3UL << RADIO_TESTINTERFACE_TESTINTERFACE_CONF_RXDATASOURCE_Pos) /*!< Bit mask of RXDATASOURCE field. */
#define RADIO_TESTINTERFACE_TESTINTERFACE_CONF_RXDATASOURCE_Standard (0x0UL) /*!< Data and clock source is from standard demodulator */
#define RADIO_TESTINTERFACE_TESTINTERFACE_CONF_RXDATASOURCE_Hyper (0x1UL) /*!< Data and clock source is from hyper demodulator */
#define RADIO_TESTINTERFACE_TESTINTERFACE_CONF_RXDATASOURCE_FelisTx (0x2UL) /*!< Data source is Tx data to SphynxSupport. */
#define RADIO_TESTINTERFACE_TESTINTERFACE_CONF_RXDATASOURCE_MacTx (0x3UL) /*!< Data source is Tx data to FelisTx. */

/* Register: RADIO_TESTINTERFACE_DEBUGPSEL_IRQ */
/* Description: Pin select for RADIO irq */

/* Bit 31 : Connection */
#define RADIO_TESTINTERFACE_DEBUGPSEL_IRQ_CONNECT_Pos (31UL) /*!< Position of CONNECT field. */
#define RADIO_TESTINTERFACE_DEBUGPSEL_IRQ_CONNECT_Msk (0x1UL << RADIO_TESTINTERFACE_DEBUGPSEL_IRQ_CONNECT_Pos) /*!< Bit mask of CONNECT field. */
#define RADIO_TESTINTERFACE_DEBUGPSEL_IRQ_CONNECT_Connected (0x0UL) /*!< Connect */
#define RADIO_TESTINTERFACE_DEBUGPSEL_IRQ_CONNECT_Disconnected (0x1UL) /*!< Disconnect */

/* Bits 8..5 : Port number */
#define RADIO_TESTINTERFACE_DEBUGPSEL_IRQ_PORT_Pos (5UL) /*!< Position of PORT field. */
#define RADIO_TESTINTERFACE_DEBUGPSEL_IRQ_PORT_Msk (0xFUL << RADIO_TESTINTERFACE_DEBUGPSEL_IRQ_PORT_Pos) /*!< Bit mask of PORT field. */

/* Bits 4..0 : Pin number */
#define RADIO_TESTINTERFACE_DEBUGPSEL_IRQ_PIN_Pos (0UL) /*!< Position of PIN field. */
#define RADIO_TESTINTERFACE_DEBUGPSEL_IRQ_PIN_Msk (0x1FUL << RADIO_TESTINTERFACE_DEBUGPSEL_IRQ_PIN_Pos) /*!< Bit mask of PIN field. */

/* Register: RADIO_TESTINTERFACE_DEBUGPSEL_RXCLK */
/* Description: Pin select for RXCLK */

/* Bit 31 : Connection */
#define RADIO_TESTINTERFACE_DEBUGPSEL_RXCLK_CONNECT_Pos (31UL) /*!< Position of CONNECT field. */
#define RADIO_TESTINTERFACE_DEBUGPSEL_RXCLK_CONNECT_Msk (0x1UL << RADIO_TESTINTERFACE_DEBUGPSEL_RXCLK_CONNECT_Pos) /*!< Bit mask of CONNECT field. */
#define RADIO_TESTINTERFACE_DEBUGPSEL_RXCLK_CONNECT_Connected (0x0UL) /*!< Connect */
#define RADIO_TESTINTERFACE_DEBUGPSEL_RXCLK_CONNECT_Disconnected (0x1UL) /*!< Disconnect */

/* Bits 8..5 : Port number */
#define RADIO_TESTINTERFACE_DEBUGPSEL_RXCLK_PORT_Pos (5UL) /*!< Position of PORT field. */
#define RADIO_TESTINTERFACE_DEBUGPSEL_RXCLK_PORT_Msk (0xFUL << RADIO_TESTINTERFACE_DEBUGPSEL_RXCLK_PORT_Pos) /*!< Bit mask of PORT field. */

/* Bits 4..0 : Pin number */
#define RADIO_TESTINTERFACE_DEBUGPSEL_RXCLK_PIN_Pos (0UL) /*!< Position of PIN field. */
#define RADIO_TESTINTERFACE_DEBUGPSEL_RXCLK_PIN_Msk (0x1FUL << RADIO_TESTINTERFACE_DEBUGPSEL_RXCLK_PIN_Pos) /*!< Bit mask of PIN field. */

/* Register: RADIO_TESTINTERFACE_DEBUGPSEL_RXDATA */
/* Description: Pin select for RXDATA */

/* Bit 31 : Connection */
#define RADIO_TESTINTERFACE_DEBUGPSEL_RXDATA_CONNECT_Pos (31UL) /*!< Position of CONNECT field. */
#define RADIO_TESTINTERFACE_DEBUGPSEL_RXDATA_CONNECT_Msk (0x1UL << RADIO_TESTINTERFACE_DEBUGPSEL_RXDATA_CONNECT_Pos) /*!< Bit mask of CONNECT field. */
#define RADIO_TESTINTERFACE_DEBUGPSEL_RXDATA_CONNECT_Connected (0x0UL) /*!< Connect */
#define RADIO_TESTINTERFACE_DEBUGPSEL_RXDATA_CONNECT_Disconnected (0x1UL) /*!< Disconnect */

/* Bits 8..5 : Port number */
#define RADIO_TESTINTERFACE_DEBUGPSEL_RXDATA_PORT_Pos (5UL) /*!< Position of PORT field. */
#define RADIO_TESTINTERFACE_DEBUGPSEL_RXDATA_PORT_Msk (0xFUL << RADIO_TESTINTERFACE_DEBUGPSEL_RXDATA_PORT_Pos) /*!< Bit mask of PORT field. */

/* Bits 4..0 : Pin number */
#define RADIO_TESTINTERFACE_DEBUGPSEL_RXDATA_PIN_Pos (0UL) /*!< Position of PIN field. */
#define RADIO_TESTINTERFACE_DEBUGPSEL_RXDATA_PIN_Msk (0x1FUL << RADIO_TESTINTERFACE_DEBUGPSEL_RXDATA_PIN_Pos) /*!< Bit mask of PIN field. */

/* Register: RADIO_TESTINTERFACE_DEBUGPSEL_TXCLK */
/* Description: Pin select for RADIO clock (direct mode, base band debug. txCk and ckDataIn signals) */

/* Bit 31 : Connection */
#define RADIO_TESTINTERFACE_DEBUGPSEL_TXCLK_CONNECT_Pos (31UL) /*!< Position of CONNECT field. */
#define RADIO_TESTINTERFACE_DEBUGPSEL_TXCLK_CONNECT_Msk (0x1UL << RADIO_TESTINTERFACE_DEBUGPSEL_TXCLK_CONNECT_Pos) /*!< Bit mask of CONNECT field. */
#define RADIO_TESTINTERFACE_DEBUGPSEL_TXCLK_CONNECT_Connected (0x0UL) /*!< Connect */
#define RADIO_TESTINTERFACE_DEBUGPSEL_TXCLK_CONNECT_Disconnected (0x1UL) /*!< Disconnect */

/* Bits 8..5 : Port number */
#define RADIO_TESTINTERFACE_DEBUGPSEL_TXCLK_PORT_Pos (5UL) /*!< Position of PORT field. */
#define RADIO_TESTINTERFACE_DEBUGPSEL_TXCLK_PORT_Msk (0xFUL << RADIO_TESTINTERFACE_DEBUGPSEL_TXCLK_PORT_Pos) /*!< Bit mask of PORT field. */

/* Bits 4..0 : Pin number */
#define RADIO_TESTINTERFACE_DEBUGPSEL_TXCLK_PIN_Pos (0UL) /*!< Position of PIN field. */
#define RADIO_TESTINTERFACE_DEBUGPSEL_TXCLK_PIN_Msk (0x1FUL << RADIO_TESTINTERFACE_DEBUGPSEL_TXCLK_PIN_Pos) /*!< Bit mask of PIN field. */

/* Register: RADIO_TESTINTERFACE_DEBUGPSEL_TXDATA */
/* Description: Pin select for RADIO data (direct mode, base band debug. txRadioData and dataIn signals) */

/* Bit 31 : Connection */
#define RADIO_TESTINTERFACE_DEBUGPSEL_TXDATA_CONNECT_Pos (31UL) /*!< Position of CONNECT field. */
#define RADIO_TESTINTERFACE_DEBUGPSEL_TXDATA_CONNECT_Msk (0x1UL << RADIO_TESTINTERFACE_DEBUGPSEL_TXDATA_CONNECT_Pos) /*!< Bit mask of CONNECT field. */
#define RADIO_TESTINTERFACE_DEBUGPSEL_TXDATA_CONNECT_Connected (0x0UL) /*!< Connect */
#define RADIO_TESTINTERFACE_DEBUGPSEL_TXDATA_CONNECT_Disconnected (0x1UL) /*!< Disconnect */

/* Bits 8..5 : Port number */
#define RADIO_TESTINTERFACE_DEBUGPSEL_TXDATA_PORT_Pos (5UL) /*!< Position of PORT field. */
#define RADIO_TESTINTERFACE_DEBUGPSEL_TXDATA_PORT_Msk (0xFUL << RADIO_TESTINTERFACE_DEBUGPSEL_TXDATA_PORT_Pos) /*!< Bit mask of PORT field. */

/* Bits 4..0 : Pin number */
#define RADIO_TESTINTERFACE_DEBUGPSEL_TXDATA_PIN_Pos (0UL) /*!< Position of PIN field. */
#define RADIO_TESTINTERFACE_DEBUGPSEL_TXDATA_PIN_Msk (0x1FUL << RADIO_TESTINTERFACE_DEBUGPSEL_TXDATA_PIN_Pos) /*!< Bit mask of PIN field. */

/* Register: RADIO_GAINOUT */
/* Description: Gain readout (LNA_OUT_SPI for nrf52/53) */

/* Bits 15..12 :   */
#define RADIO_GAINOUT_AAFGAIN_Pos (12UL) /*!< Position of AAFGAIN field. */
#define RADIO_GAINOUT_AAFGAIN_Msk (0xFUL << RADIO_GAINOUT_AAFGAIN_Pos) /*!< Bit mask of AAFGAIN field. */

/* Bit 8 :   */
#define RADIO_GAINOUT_MIXGAIN_Pos (8UL) /*!< Position of MIXGAIN field. */
#define RADIO_GAINOUT_MIXGAIN_Msk (0x1UL << RADIO_GAINOUT_MIXGAIN_Pos) /*!< Bit mask of MIXGAIN field. */

/* Bits 1..0 :   */
#define RADIO_GAINOUT_LNAGAIN_Pos (0UL) /*!< Position of LNAGAIN field. */
#define RADIO_GAINOUT_LNAGAIN_Msk (0x3UL << RADIO_GAINOUT_LNAGAIN_Pos) /*!< Bit mask of LNAGAIN field. */

/* Register: RADIO_INTERCEPT_TASKS */
/* Description: Description collection: */

/* Bits 31..0 :   */
#define RADIO_INTERCEPT_TASKS_ONEBITPERTASK_Pos (0UL) /*!< Position of ONEBITPERTASK field. */
#define RADIO_INTERCEPT_TASKS_ONEBITPERTASK_Msk (0xFFFFFFFFUL << RADIO_INTERCEPT_TASKS_ONEBITPERTASK_Pos) /*!< Bit mask of ONEBITPERTASK field. */

/* Register: RADIO_INTERCEPT_EVENTS */
/* Description: Description collection: */

/* Bits 31..0 :   */
#define RADIO_INTERCEPT_EVENTS_ONEBITPEREVENT_Pos (0UL) /*!< Position of ONEBITPEREVENT field. */
#define RADIO_INTERCEPT_EVENTS_ONEBITPEREVENT_Msk (0xFFFFFFFFUL << RADIO_INTERCEPT_EVENTS_ONEBITPEREVENT_Pos) /*!< Bit mask of ONEBITPEREVENT field. */

/* Register: RADIO_INTERCEPT_CONFIG */
/* Description: Unspecified */

/* Bit 1 :   */
#define RADIO_INTERCEPT_CONFIG_STOPEVENTS_Pos (1UL) /*!< Position of STOPEVENTS field. */
#define RADIO_INTERCEPT_CONFIG_STOPEVENTS_Msk (0x1UL << RADIO_INTERCEPT_CONFIG_STOPEVENTS_Pos) /*!< Bit mask of STOPEVENTS field. */

/* Bit 0 :   */
#define RADIO_INTERCEPT_CONFIG_STOPTASKS_Pos (0UL) /*!< Position of STOPTASKS field. */
#define RADIO_INTERCEPT_CONFIG_STOPTASKS_Msk (0x1UL << RADIO_INTERCEPT_CONFIG_STOPTASKS_Pos) /*!< Bit mask of STOPTASKS field. */

/* Register: RADIO_SHORTCUTANA */
/* Description: Internal shortcuts for RADIO PHY */

/* Bit 7 : Internal shortcut */
#define RADIO_SHORTCUTANA_CALDONEDMASTART_Pos (7UL) /*!< Position of CALDONEDMASTART field. */
#define RADIO_SHORTCUTANA_CALDONEDMASTART_Msk (0x1UL << RADIO_SHORTCUTANA_CALDONEDMASTART_Pos) /*!< Bit mask of CALDONEDMASTART field. */

/* Bit 6 : Internal shortcut */
#define RADIO_SHORTCUTANA_CALDONEPATESTSTART_Pos (6UL) /*!< Position of CALDONEPATESTSTART field. */
#define RADIO_SHORTCUTANA_CALDONEPATESTSTART_Msk (0x1UL << RADIO_SHORTCUTANA_CALDONEPATESTSTART_Pos) /*!< Bit mask of CALDONEPATESTSTART field. */

/* Bit 5 : Internal shortcut */
#define RADIO_SHORTCUTANA_CALDONEDISABLE_Pos (5UL) /*!< Position of CALDONEDISABLE field. */
#define RADIO_SHORTCUTANA_CALDONEDISABLE_Msk (0x1UL << RADIO_SHORTCUTANA_CALDONEDISABLE_Pos) /*!< Bit mask of CALDONEDISABLE field. */

/* Bit 4 : Internal shortcut */
#define RADIO_SHORTCUTANA_LBREADYDMASTART_Pos (4UL) /*!< Position of LBREADYDMASTART field. */
#define RADIO_SHORTCUTANA_LBREADYDMASTART_Msk (0x1UL << RADIO_SHORTCUTANA_LBREADYDMASTART_Pos) /*!< Bit mask of LBREADYDMASTART field. */

/* Bit 3 : Internal shortcut */
#define RADIO_SHORTCUTANA_RXREADYDMASTART_Pos (3UL) /*!< Position of RXREADYDMASTART field. */
#define RADIO_SHORTCUTANA_RXREADYDMASTART_Msk (0x1UL << RADIO_SHORTCUTANA_RXREADYDMASTART_Pos) /*!< Bit mask of RXREADYDMASTART field. */

/* Bit 2 : Internal shortcut */
#define RADIO_SHORTCUTANA_LBREADYCALSTART_Pos (2UL) /*!< Position of LBREADYCALSTART field. */
#define RADIO_SHORTCUTANA_LBREADYCALSTART_Msk (0x1UL << RADIO_SHORTCUTANA_LBREADYCALSTART_Pos) /*!< Bit mask of LBREADYCALSTART field. */

/* Bit 1 : Internal shortcut */
#define RADIO_SHORTCUTANA_RXREADYCALSTART_Pos (1UL) /*!< Position of RXREADYCALSTART field. */
#define RADIO_SHORTCUTANA_RXREADYCALSTART_Msk (0x1UL << RADIO_SHORTCUTANA_RXREADYCALSTART_Pos) /*!< Bit mask of RXREADYCALSTART field. */

/* Bit 0 : Internal shortcut */
#define RADIO_SHORTCUTANA_TXREADYCALSTART_Pos (0UL) /*!< Position of TXREADYCALSTART field. */
#define RADIO_SHORTCUTANA_TXREADYCALSTART_Msk (0x1UL << RADIO_SHORTCUTANA_TXREADYCALSTART_Pos) /*!< Bit mask of TXREADYCALSTART field. */

/* Register: RADIO_MODESTANDALONE */
/* Description: Data rate and modulation when SPHYNX in standalone mode */

/* Bit 31 : 0: use radioMode/radioModeUpdate from port (controlled from top), 1: use radioMode/radioModeUpdate from registers in this IP */
#define RADIO_MODESTANDALONE_USERADIOMODEINT_Pos (31UL) /*!< Position of USERADIOMODEINT field. */
#define RADIO_MODESTANDALONE_USERADIOMODEINT_Msk (0x1UL << RADIO_MODESTANDALONE_USERADIOMODEINT_Pos) /*!< Bit mask of USERADIOMODEINT field. */

/* Bit 8 : 0: Default ramp-up time, compatible with 180nm radio. 1: Fast ramp-up. */
#define RADIO_MODESTANDALONE_TIMINGMODE_Pos (8UL) /*!< Position of TIMINGMODE field. */
#define RADIO_MODESTANDALONE_TIMINGMODE_Msk (0x1UL << RADIO_MODESTANDALONE_TIMINGMODE_Pos) /*!< Bit mask of TIMINGMODE field. */

/* Bits 7..0 : Internal radio mode consists of sSel, zeroIf, deModN and mode[3:0] */
#define RADIO_MODESTANDALONE_RADIOMODEINT_Pos (0UL) /*!< Position of RADIOMODEINT field. */
#define RADIO_MODESTANDALONE_RADIOMODEINT_Msk (0xFFUL << RADIO_MODESTANDALONE_RADIOMODEINT_Pos) /*!< Bit mask of RADIOMODEINT field. */

/* Register: RADIO_FREQUENCY */
/* Description: Frequency */

/* Bit 8 : Channel map selection. 0: Channel map between 2400 MHZ to 2500 MHz, Frequency = 2400 + FREQUENCY (MHz). 1: Channel map between 2360 MHZ to 2460 MHz, Frequency = 2360 + FREQUENCY (MHz). */
#define RADIO_FREQUENCY_MAP_Pos (8UL) /*!< Position of MAP field. */
#define RADIO_FREQUENCY_MAP_Msk (0x1UL << RADIO_FREQUENCY_MAP_Pos) /*!< Bit mask of MAP field. */

/* Bits 6..0 : Radio channel frequency. Frequency = 2400 + FREQUENCY (MHz). */
#define RADIO_FREQUENCY_FREQUENCY_Pos (0UL) /*!< Position of FREQUENCY field. */
#define RADIO_FREQUENCY_FREQUENCY_Msk (0x7FUL << RADIO_FREQUENCY_FREQUENCY_Pos) /*!< Bit mask of FREQUENCY field. */

/* Register: RADIO_FREQUENCYCONFIG */
/* Description: Configuration of frequency control */

/* Bit 31 : Set to high to buffer FREQUENCY register so that sub-modules in the MMI will only update next frequency config at TX_EN, RX_EN and LB_EN. Set to low if special test is needed for FS test. */
#define RADIO_FREQUENCYCONFIG_BUFFEREDFSCH_Pos (31UL) /*!< Position of BUFFEREDFSCH field. */
#define RADIO_FREQUENCYCONFIG_BUFFEREDFSCH_Msk (0x1UL << RADIO_FREQUENCYCONFIG_BUFFEREDFSCH_Pos) /*!< Bit mask of BUFFEREDFSCH field. */

/* Bits 5..0 : Radio channel incremental step unit */
#define RADIO_FREQUENCYCONFIG_FSCHNOINCRSTEP_Pos (0UL) /*!< Position of FSCHNOINCRSTEP field. */
#define RADIO_FREQUENCYCONFIG_FSCHNOINCRSTEP_Msk (0x3FUL << RADIO_FREQUENCYCONFIG_FSCHNOINCRSTEP_Pos) /*!< Bit mask of FSCHNOINCRSTEP field. */

/* Register: RADIO_TXPOWER */
/* Description: Output power */

/* Bits 7..0 : RADIO output power */
#define RADIO_TXPOWER_TXPOWER_Pos (0UL) /*!< Position of TXPOWER field. */
#define RADIO_TXPOWER_TXPOWER_Msk (0xFFUL << RADIO_TXPOWER_TXPOWER_Pos) /*!< Bit mask of TXPOWER field. */
#define RADIO_TXPOWER_TXPOWER_0dBm (0x00UL) /*!< 0 dBm */
#define RADIO_TXPOWER_TXPOWER_Pos1dBm (0x01UL) /*!< +1 dBm */
#define RADIO_TXPOWER_TXPOWER_Pos2dBm (0x02UL) /*!< +2 dBm */
#define RADIO_TXPOWER_TXPOWER_Pos3dBm (0x03UL) /*!< +3 dBm */
#define RADIO_TXPOWER_TXPOWER_Pos4dBm (0x04UL) /*!< +4 dBm */
#define RADIO_TXPOWER_TXPOWER_Pos5dBm (0x05UL) /*!< +5 dBm */
#define RADIO_TXPOWER_TXPOWER_Pos6dBm (0x06UL) /*!< +6 dBm */
#define RADIO_TXPOWER_TXPOWER_Pos7dBm (0x07UL) /*!< +7 dBm */
#define RADIO_TXPOWER_TXPOWER_Pos8dBm (0x08UL) /*!< +8 dBm */
#define RADIO_TXPOWER_TXPOWER_Pos9dBm (0x09UL) /*!< +9 dBm */
#define RADIO_TXPOWER_TXPOWER_Pos10dBm (0x0AUL) /*!< +10 dBm */
#define RADIO_TXPOWER_TXPOWER_Neg70dBm (0xBAUL) /*!< -70 dBm */
#define RADIO_TXPOWER_TXPOWER_Neg40dBm (0xD8UL) /*!< -40 dBm */
#define RADIO_TXPOWER_TXPOWER_Neg30dBm (0xE2UL) /*!< -30 dBm */
#define RADIO_TXPOWER_TXPOWER_Neg20dBm (0xECUL) /*!< -20 dBm */
#define RADIO_TXPOWER_TXPOWER_Neg16dBm (0xF0UL) /*!< -16 dBm */
#define RADIO_TXPOWER_TXPOWER_Neg12dBm (0xF4UL) /*!< -12 dBm */
#define RADIO_TXPOWER_TXPOWER_Neg8dBm (0xF8UL) /*!< -8 dBm */
#define RADIO_TXPOWER_TXPOWER_Neg4dBm (0xFCUL) /*!< -4 dBm */
#define RADIO_TXPOWER_TXPOWER_Neg2dBm (0xFEUL) /*!< -2 dBm */
#define RADIO_TXPOWER_TXPOWER_Neg1dBm (0xFFUL) /*!< -1 dBm */

/* Register: RADIO_TIFS */
/* Description: Interframe spacing in us */

/* Bits 9..0 : Interframe spacing in us. Interframe space is the time interval between two consecutive packets. It is defined as the time, in microseconds, from the end of the last bit of the previous packet to the start of the first bit of the subsequent packet. */
#define RADIO_TIFS_TIFS_Pos (0UL) /*!< Position of TIFS field. */
#define RADIO_TIFS_TIFS_Msk (0x3FFUL << RADIO_TIFS_TIFS_Pos) /*!< Bit mask of TIFS field. */

/* Register: RADIO_RSSISAMPLE */
/* Description: RSSI sample */

/* Bits 6..0 : RSSI sample result. The value of this register is read as a positive value while the actual received signal strength is a negative value. Actual received signal strength is therefore as follows: received signal strength = -A dBm. */
#define RADIO_RSSISAMPLE_RSSISAMPLE_Pos (0UL) /*!< Position of RSSISAMPLE field. */
#define RADIO_RSSISAMPLE_RSSISAMPLE_Msk (0x7FUL << RADIO_RSSISAMPLE_RSSISAMPLE_Pos) /*!< Bit mask of RSSISAMPLE field. */

/* Register: RADIO_EVENTCONFIG */
/* Description: Event configuration */

/* Bits 12..8 : Transition time from RXDISABLE state to DISABLED state Configurable time, in us, between RADIO.EVENTS_END and RADIO.EVENTS_DISABLED when using the shortcut between RADIO.EVENTS_END and RADIO.TASKS_DISABLE. The minimum time between RADIO.TASKS_DISABLE and RADIO.EVENTS_DISABLED is described in electrical parameters. The minimum time will be used if the configured time is set shorter than the minimum time. Depending on configuration setting the DISABLED event may experience some jitter, see electrical parameters for more information. (unit: 1us) */
#define RADIO_EVENTCONFIG_TRXDISABLE_Pos (8UL) /*!< Position of TRXDISABLE field. */
#define RADIO_EVENTCONFIG_TRXDISABLE_Msk (0x1FUL << RADIO_EVENTCONFIG_TRXDISABLE_Pos) /*!< Bit mask of TRXDISABLE field. */

/* Bits 4..0 : Transition time from TXDISABLE state to DISABLED state Configurable time, in us, between RADIO.EVENTS_END and RADIO.EVENTS_DISABLED when using the shortcut between RADIO.EVENTS_END and RADIO.TASKS_DISABLE. The minimum time between RADIO.TASKS_DISABLE and RADIO.EVENTS_DISABLED is described in the electrical parameters. The minimum time will be used if the configured time is set shorter than the minimum time. Depending on configuration setting the DISABLED event may experience some jitter, see electrical parameters for more information. Note: The RADIO shall be disabled as normal when DISABLE task is triggered, it is only the DISABLED event that can be delayed. Note: The TIFS mechanism shall not be affected by the value specified in this field. (unit: 1us) */
#define RADIO_EVENTCONFIG_TTXDISABLE_Pos (0UL) /*!< Position of TTXDISABLE field. */
#define RADIO_EVENTCONFIG_TTXDISABLE_Msk (0x1FUL << RADIO_EVENTCONFIG_TTXDISABLE_Pos) /*!< Bit mask of TTXDISABLE field. */

/* Register: RADIO_CALIBRATION_TARGET */
/* Description: Select target for calibration */

/* Bits 2..0 : Calibration target selection for calibration engine, 0: DC_CAL, 1: RC_CAL */
#define RADIO_CALIBRATION_TARGET_CALTARGET_Pos (0UL) /*!< Position of CALTARGET field. */
#define RADIO_CALIBRATION_TARGET_CALTARGET_Msk (0x7UL << RADIO_CALIBRATION_TARGET_CALTARGET_Pos) /*!< Bit mask of CALTARGET field. */

/* Register: RADIO_CALIBRATION_CONFIG */
/* Description: Configuration of manual calibration */

/* Bit 31 : 0: use hard-coded calibration timing, 1: use manual calibration timing above */
#define RADIO_CALIBRATION_CONFIG_CALMANUAL_Pos (31UL) /*!< Position of CALMANUAL field. */
#define RADIO_CALIBRATION_CONFIG_CALMANUAL_Msk (0x1UL << RADIO_CALIBRATION_CONFIG_CALMANUAL_Pos) /*!< Bit mask of CALMANUAL field. */

/* Bit 29 : 1: invert calCmp2 before it goes into calibration engine #2 */
#define RADIO_CALIBRATION_CONFIG_CALINVERTCMP2_Pos (29UL) /*!< Position of CALINVERTCMP2 field. */
#define RADIO_CALIBRATION_CONFIG_CALINVERTCMP2_Msk (0x1UL << RADIO_CALIBRATION_CONFIG_CALINVERTCMP2_Pos) /*!< Bit mask of CALINVERTCMP2 field. */

/* Bit 28 : 1: invert calCmp1 before it goes into calibration engine #1 */
#define RADIO_CALIBRATION_CONFIG_CALINVERTCMP1_Pos (28UL) /*!< Position of CALINVERTCMP1 field. */
#define RADIO_CALIBRATION_CONFIG_CALINVERTCMP1_Msk (0x1UL << RADIO_CALIBRATION_CONFIG_CALINVERTCMP1_Pos) /*!< Bit mask of CALINVERTCMP1 field. */

/* Bits 26..24 : Number of valid bits to be calibrated */
#define RADIO_CALIBRATION_CONFIG_CALBITS_Pos (24UL) /*!< Position of CALBITS field. */
#define RADIO_CALIBRATION_CONFIG_CALBITS_Msk (0x7UL << RADIO_CALIBRATION_CONFIG_CALBITS_Pos) /*!< Bit mask of CALBITS field. */

/* Bits 23..16 : Compare wait time */
#define RADIO_CALIBRATION_CONFIG_CALTCOMPARE_Pos (16UL) /*!< Position of CALTCOMPARE field. */
#define RADIO_CALIBRATION_CONFIG_CALTCOMPARE_Msk (0xFFUL << RADIO_CALIBRATION_CONFIG_CALTCOMPARE_Pos) /*!< Bit mask of CALTCOMPARE field. */

/* Bits 15..8 : Settle wait time */
#define RADIO_CALIBRATION_CONFIG_CALTSETTLE_Pos (8UL) /*!< Position of CALTSETTLE field. */
#define RADIO_CALIBRATION_CONFIG_CALTSETTLE_Msk (0xFFUL << RADIO_CALIBRATION_CONFIG_CALTSETTLE_Pos) /*!< Bit mask of CALTSETTLE field. */

/* Bits 7..0 : Startup wait time */
#define RADIO_CALIBRATION_CONFIG_CALTSTART_Pos (0UL) /*!< Position of CALTSTART field. */
#define RADIO_CALIBRATION_CONFIG_CALTSTART_Msk (0xFFUL << RADIO_CALIBRATION_CONFIG_CALTSTART_Pos) /*!< Bit mask of CALTSTART field. */

/* Register: RADIO_CALIBRATION_RESULT */
/* Description: Calibration result */

/* Bits 23..16 : Calibration result from DC offset calibration on channel Q */
#define RADIO_CALIBRATION_RESULT_RFMIXDCCALQ_Pos (16UL) /*!< Position of RFMIXDCCALQ field. */
#define RADIO_CALIBRATION_RESULT_RFMIXDCCALQ_Msk (0xFFUL << RADIO_CALIBRATION_RESULT_RFMIXDCCALQ_Pos) /*!< Bit mask of RFMIXDCCALQ field. */

/* Bits 15..8 : Calibration result from DC offset calibration on channel I */
#define RADIO_CALIBRATION_RESULT_RFMIXDCCALI_Pos (8UL) /*!< Position of RFMIXDCCALI field. */
#define RADIO_CALIBRATION_RESULT_RFMIXDCCALI_Msk (0xFFUL << RADIO_CALIBRATION_RESULT_RFMIXDCCALI_Pos) /*!< Bit mask of RFMIXDCCALI field. */

/* Bits 3..0 : Calibration result from RC calibration */
#define RADIO_CALIBRATION_RESULT_RCCALCODE_Pos (0UL) /*!< Position of RCCALCODE field. */
#define RADIO_CALIBRATION_RESULT_RCCALCODE_Msk (0xFUL << RADIO_CALIBRATION_RESULT_RCCALCODE_Pos) /*!< Bit mask of RCCALCODE field. */

/* Register: RADIO_SPHYNXANA_TEST */
/* Description: Control of analog and digital test bus output from Sphynx */

/* Bits 28..26 : Digital test enable for digital logic in analog macro */
#define RADIO_SPHYNXANA_TEST_SPHYNXDTEFS_Pos (26UL) /*!< Position of SPHYNXDTEFS field. */
#define RADIO_SPHYNXANA_TEST_SPHYNXDTEFS_Msk (0x7UL << RADIO_SPHYNXANA_TEST_SPHYNXDTEFS_Pos) /*!< Bit mask of SPHYNXDTEFS field. */

/* Bits 25..24 : Analog test enable for TX PWRCTRL */
#define RADIO_SPHYNXANA_TEST_SPHYNXATETXPWRCTRL_Pos (24UL) /*!< Position of SPHYNXATETXPWRCTRL field. */
#define RADIO_SPHYNXANA_TEST_SPHYNXATETXPWRCTRL_Msk (0x3UL << RADIO_SPHYNXANA_TEST_SPHYNXATETXPWRCTRL_Pos) /*!< Bit mask of SPHYNXATETXPWRCTRL field. */

/* Bits 22..19 : Analog test enable for RX TX */
#define RADIO_SPHYNXANA_TEST_SPHYNXATERXTX_Pos (19UL) /*!< Position of SPHYNXATERXTX field. */
#define RADIO_SPHYNXANA_TEST_SPHYNXATERXTX_Msk (0xFUL << RADIO_SPHYNXANA_TEST_SPHYNXATERXTX_Pos) /*!< Bit mask of SPHYNXATERXTX field. */

/* Bits 18..13 : Analog test enable for RX AAF */
#define RADIO_SPHYNXANA_TEST_SPHYNXATERXAAF_Pos (13UL) /*!< Position of SPHYNXATERXAAF field. */
#define RADIO_SPHYNXANA_TEST_SPHYNXATERXAAF_Msk (0x3FUL << RADIO_SPHYNXANA_TEST_SPHYNXATERXAAF_Pos) /*!< Bit mask of SPHYNXATERXAAF field. */

/* Bits 12..11 : Analog test enable for RX MIX */
#define RADIO_SPHYNXANA_TEST_SPHYNXATERXMIX_Pos (11UL) /*!< Position of SPHYNXATERXMIX field. */
#define RADIO_SPHYNXANA_TEST_SPHYNXATERXMIX_Msk (0x3UL << RADIO_SPHYNXANA_TEST_SPHYNXATERXMIX_Pos) /*!< Bit mask of SPHYNXATERXMIX field. */

/* Bits 10..4 : Analog test enable for FS */
#define RADIO_SPHYNXANA_TEST_SPHYNXATEFS_Pos (4UL) /*!< Position of SPHYNXATEFS field. */
#define RADIO_SPHYNXANA_TEST_SPHYNXATEFS_Msk (0x7FUL << RADIO_SPHYNXANA_TEST_SPHYNXATEFS_Pos) /*!< Bit mask of SPHYNXATEFS field. */

/* Bits 3..0 : Analog test enable for BIAS_FS */
#define RADIO_SPHYNXANA_TEST_SPHYNXATEBIASFS_Pos (0UL) /*!< Position of SPHYNXATEBIASFS field. */
#define RADIO_SPHYNXANA_TEST_SPHYNXATEBIASFS_Msk (0xFUL << RADIO_SPHYNXANA_TEST_SPHYNXATEBIASFS_Pos) /*!< Bit mask of SPHYNXATEBIASFS field. */

/* Register: RADIO_SPHYNXANA_FSCTRL0 */
/* Description: Control to frequency synthesizer of Sphynx */

/* Bit 31 : Resync at flip flop inside DTC */
#define RADIO_SPHYNXANA_FSCTRL0_SPHYNXFSDTCEDGEALIGN_Pos (31UL) /*!< Position of SPHYNXFSDTCEDGEALIGN field. */
#define RADIO_SPHYNXANA_FSCTRL0_SPHYNXFSDTCEDGEALIGN_Msk (0x1UL << RADIO_SPHYNXANA_FSCTRL0_SPHYNXFSDTCEDGEALIGN_Pos) /*!< Bit mask of SPHYNXFSDTCEDGEALIGN field. */

/* Bits 30..27 : 0: controls bleed current from supply, 1: bypasses DTC to send XO out directly */
#define RADIO_SPHYNXANA_FSCTRL0_SPHYNXFSDTCCTRL_Pos (27UL) /*!< Position of SPHYNXFSDTCCTRL field. */
#define RADIO_SPHYNXANA_FSCTRL0_SPHYNXFSDTCCTRL_Msk (0xFUL << RADIO_SPHYNXANA_FSCTRL0_SPHYNXFSDTCCTRL_Pos) /*!< Bit mask of SPHYNXFSDTCCTRL field. */

/* Bits 26..22 : Change back bias of NMOS in ROSC inside DIV2 */
#define RADIO_SPHYNXANA_FSCTRL0_SPHYNXFSDIV2OSC_Pos (22UL) /*!< Position of SPHYNXFSDIV2OSC field. */
#define RADIO_SPHYNXANA_FSCTRL0_SPHYNXFSDIV2OSC_Msk (0x1FUL << RADIO_SPHYNXANA_FSCTRL0_SPHYNXFSDIV2OSC_Pos) /*!< Bit mask of SPHYNXFSDIV2OSC field. */

/* Bits 21..19 : Spare, not used */
#define RADIO_SPHYNXANA_FSCTRL0_SPHYNXFSDIV2CTRL_Pos (19UL) /*!< Position of SPHYNXFSDIV2CTRL field. */
#define RADIO_SPHYNXANA_FSCTRL0_SPHYNXFSDIV2CTRL_Msk (0x7UL << RADIO_SPHYNXANA_FSCTRL0_SPHYNXFSDIV2CTRL_Pos) /*!< Bit mask of SPHYNXFSDIV2CTRL field. */

/* Bits 18..15 : Set common mode for DIV2 */
#define RADIO_SPHYNXANA_FSCTRL0_SPHYNXFSDIV2CM_Pos (15UL) /*!< Position of SPHYNXFSDIV2CM field. */
#define RADIO_SPHYNXANA_FSCTRL0_SPHYNXFSDIV2CM_Msk (0xFUL << RADIO_SPHYNXANA_FSCTRL0_SPHYNXFSDIV2CM_Pos) /*!< Bit mask of SPHYNXFSDIV2CM field. */

/* Bits 12..10 : FS swing calibration */
#define RADIO_SPHYNXANA_FSCTRL0_SPHYNXFSVCOSWREF_Pos (10UL) /*!< Position of SPHYNXFSVCOSWREF field. */
#define RADIO_SPHYNXANA_FSCTRL0_SPHYNXFSVCOSWREF_Msk (0x7UL << RADIO_SPHYNXANA_FSCTRL0_SPHYNXFSVCOSWREF_Pos) /*!< Bit mask of SPHYNXFSVCOSWREF field. */

/* Bits 9..6 : Spare, not used */
#define RADIO_SPHYNXANA_FSCTRL0_SPHYNXFSVCOCTRL_Pos (6UL) /*!< Position of SPHYNXFSVCOCTRL field. */
#define RADIO_SPHYNXANA_FSCTRL0_SPHYNXFSVCOCTRL_Msk (0xFUL << RADIO_SPHYNXANA_FSCTRL0_SPHYNXFSVCOCTRL_Pos) /*!< Bit mask of SPHYNXFSVCOCTRL field. */

/* Bits 5..0 : Bypass FS LDOs */
#define RADIO_SPHYNXANA_FSCTRL0_SPHYNXFSLDOBYPASS_Pos (0UL) /*!< Position of SPHYNXFSLDOBYPASS field. */
#define RADIO_SPHYNXANA_FSCTRL0_SPHYNXFSLDOBYPASS_Msk (0x3FUL << RADIO_SPHYNXANA_FSCTRL0_SPHYNXFSLDOBYPASS_Pos) /*!< Bit mask of SPHYNXFSLDOBYPASS field. */

/* Register: RADIO_SPHYNXANA_FSCTRL1 */
/* Description: Control to frequency synthesizer of Sphynx */

/* Bits 20..18 : Spare, not used */
#define RADIO_SPHYNXANA_FSCTRL1_SPHYNXFSTDCCTRL_Pos (18UL) /*!< Position of SPHYNXFSTDCCTRL field. */
#define RADIO_SPHYNXANA_FSCTRL1_SPHYNXFSTDCCTRL_Msk (0x7UL << RADIO_SPHYNXANA_FSCTRL1_SPHYNXFSTDCCTRL_Pos) /*!< Bit mask of SPHYNXFSTDCCTRL field. */

/* Bits 17..14 : Adjust voltage for back bias of injection switch */
#define RADIO_SPHYNXANA_FSCTRL1_SPHYNXFSDIV2ISW_Pos (14UL) /*!< Position of SPHYNXFSDIV2ISW field. */
#define RADIO_SPHYNXANA_FSCTRL1_SPHYNXFSDIV2ISW_Msk (0xFUL << RADIO_SPHYNXANA_FSCTRL1_SPHYNXFSDIV2ISW_Pos) /*!< Bit mask of SPHYNXFSDIV2ISW field. */

/* Bits 13..9 : DFT control/scan-in to AdPll. [4]: arstScan, [3]: scanTest, [2]: scanCk, [1]: scanEn, [0]: scanIn. */
#define RADIO_SPHYNXANA_FSCTRL1_SPHYNXFSSCANBUSIN_Pos (9UL) /*!< Position of SPHYNXFSSCANBUSIN field. */
#define RADIO_SPHYNXANA_FSCTRL1_SPHYNXFSSCANBUSIN_Msk (0x1FUL << RADIO_SPHYNXANA_FSCTRL1_SPHYNXFSSCANBUSIN_Pos) /*!< Bit mask of SPHYNXFSSCANBUSIN field. */

/* Bits 8..5 : For voltage tuning of reference */
#define RADIO_SPHYNXANA_FSCTRL1_SPHYNXFSREFVTTRIM_Pos (5UL) /*!< Position of SPHYNXFSREFVTTRIM field. */
#define RADIO_SPHYNXANA_FSCTRL1_SPHYNXFSREFVTTRIM_Msk (0xFUL << RADIO_SPHYNXANA_FSCTRL1_SPHYNXFSREFVTTRIM_Pos) /*!< Bit mask of SPHYNXFSREFVTTRIM field. */

/* Bits 4..0 : For current calibration */
#define RADIO_SPHYNXANA_FSCTRL1_SPHYNXFSREFIPPTRIM_Pos (0UL) /*!< Position of SPHYNXFSREFIPPTRIM field. */
#define RADIO_SPHYNXANA_FSCTRL1_SPHYNXFSREFIPPTRIM_Msk (0x1FUL << RADIO_SPHYNXANA_FSCTRL1_SPHYNXFSREFIPPTRIM_Pos) /*!< Bit mask of SPHYNXFSREFIPPTRIM field. */

/* Register: RADIO_SPHYNXANA_FSCTRL2 */
/* Description: Control to frequency synthesizer of Sphynx */

/* Bits 4..3 : SWAT_TRIM_0V8[4:3] (default is 2b'00) for IBPSR trimming */
#define RADIO_SPHYNXANA_FSCTRL2_SPHYNXSWATIBPSRTRIM_Pos (3UL) /*!< Position of SPHYNXSWATIBPSRTRIM field. */
#define RADIO_SPHYNXANA_FSCTRL2_SPHYNXSWATIBPSRTRIM_Msk (0x3UL << RADIO_SPHYNXANA_FSCTRL2_SPHYNXSWATIBPSRTRIM_Pos) /*!< Bit mask of SPHYNXSWATIBPSRTRIM field. */

/* Bits 2..0 : SWAT_TRIM_0V8[2:0] for SWAT_VREF trimming (default is 3b'000) */
#define RADIO_SPHYNXANA_FSCTRL2_SPHYNXSWATVREFTRIM_Pos (0UL) /*!< Position of SPHYNXSWATVREFTRIM field. */
#define RADIO_SPHYNXANA_FSCTRL2_SPHYNXSWATVREFTRIM_Msk (0x7UL << RADIO_SPHYNXANA_FSCTRL2_SPHYNXSWATVREFTRIM_Pos) /*!< Bit mask of SPHYNXSWATVREFTRIM field. */

/* Register: RADIO_SPHYNXANA_RXCTRL */
/* Description: Control to receiver of Sphynx */

/* Bit 22 : Reference voltage charge injection mode */
#define RADIO_SPHYNXANA_RXCTRL_SPHYNXADCCHRGINJ_Pos (22UL) /*!< Position of SPHYNXADCCHRGINJ field. */
#define RADIO_SPHYNXANA_RXCTRL_SPHYNXADCCHRGINJ_Msk (0x1UL << RADIO_SPHYNXANA_RXCTRL_SPHYNXADCCHRGINJ_Pos) /*!< Bit mask of SPHYNXADCCHRGINJ field. */

/* Bit 21 : Reference voltage ripple cancellation mode */
#define RADIO_SPHYNXANA_RXCTRL_SPHYNXADCRPLCANC_Pos (21UL) /*!< Position of SPHYNXADCRPLCANC field. */
#define RADIO_SPHYNXANA_RXCTRL_SPHYNXADCRPLCANC_Msk (0x1UL << RADIO_SPHYNXANA_RXCTRL_SPHYNXADCRPLCANC_Pos) /*!< Bit mask of SPHYNXADCRPLCANC field. */

/* Bit 20 : Calculation of ADC timing margin */
#define RADIO_SPHYNXANA_RXCTRL_SPHYNXADCTIMINGCALC_Pos (20UL) /*!< Position of SPHYNXADCTIMINGCALC field. */
#define RADIO_SPHYNXANA_RXCTRL_SPHYNXADCTIMINGCALC_Msk (0x1UL << RADIO_SPHYNXANA_RXCTRL_SPHYNXADCTIMINGCALC_Pos) /*!< Bit mask of SPHYNXADCTIMINGCALC field. */

/* Bit 19 : Enabling of offset calculation */
#define RADIO_SPHYNXANA_RXCTRL_SPHYNXADCOFFSETCALC_Pos (19UL) /*!< Position of SPHYNXADCOFFSETCALC field. */
#define RADIO_SPHYNXANA_RXCTRL_SPHYNXADCOFFSETCALC_Msk (0x1UL << RADIO_SPHYNXANA_RXCTRL_SPHYNXADCOFFSETCALC_Pos) /*!< Bit mask of SPHYNXADCOFFSETCALC field. */

/* Bit 18 : Trim bulks of LVT NFETs */
#define RADIO_SPHYNXANA_RXCTRL_SPHYNXADCVBULKTRIM_Pos (18UL) /*!< Position of SPHYNXADCVBULKTRIM field. */
#define RADIO_SPHYNXANA_RXCTRL_SPHYNXADCVBULKTRIM_Msk (0x1UL << RADIO_SPHYNXANA_RXCTRL_SPHYNXADCVBULKTRIM_Pos) /*!< Bit mask of SPHYNXADCVBULKTRIM field. */

/* Bits 17..15 : LNA current setting */
#define RADIO_SPHYNXANA_RXCTRL_SPHYNXLNACURR_Pos (15UL) /*!< Position of SPHYNXLNACURR field. */
#define RADIO_SPHYNXANA_RXCTRL_SPHYNXLNACURR_Msk (0x7UL << RADIO_SPHYNXANA_RXCTRL_SPHYNXLNACURR_Pos) /*!< Bit mask of SPHYNXLNACURR field. */

/* Bits 14..11 : LNA center frequency settings */
#define RADIO_SPHYNXANA_RXCTRL_SPHYNXLNACFREQ_Pos (11UL) /*!< Position of SPHYNXLNACFREQ field. */
#define RADIO_SPHYNXANA_RXCTRL_SPHYNXLNACFREQ_Msk (0xFUL << RADIO_SPHYNXANA_RXCTRL_SPHYNXLNACFREQ_Pos) /*!< Bit mask of SPHYNXLNACFREQ field. */

/* Bits 10..8 : VCM trim values for RX_AAF */
#define RADIO_SPHYNXANA_RXCTRL_SPHYNXRXAAFVCMTRIM_Pos (8UL) /*!< Position of SPHYNXRXAAFVCMTRIM field. */
#define RADIO_SPHYNXANA_RXCTRL_SPHYNXRXAAFVCMTRIM_Msk (0x7UL << RADIO_SPHYNXANA_RXCTRL_SPHYNXRXAAFVCMTRIM_Pos) /*!< Bit mask of SPHYNXRXAAFVCMTRIM field. */

/* Bits 7..4 : RC trim values for RX_AAF generated by RC_CAL */
#define RADIO_SPHYNXANA_RXCTRL_SPHYNXRXAAFRCTRIMM_Pos (4UL) /*!< Position of SPHYNXRXAAFRCTRIMM field. */
#define RADIO_SPHYNXANA_RXCTRL_SPHYNXRXAAFRCTRIMM_Msk (0xFUL << RADIO_SPHYNXANA_RXCTRL_SPHYNXRXAAFRCTRIMM_Pos) /*!< Bit mask of SPHYNXRXAAFRCTRIMM field. */

/* Bit 3 : 1: output from MIX_AMP is Q leading I, 0 output from MIX_AMP is I leading Q */
#define RADIO_SPHYNXANA_RXCTRL_SPHYNXRXMIXQLEADSI_Pos (3UL) /*!< Position of SPHYNXRXMIXQLEADSI field. */
#define RADIO_SPHYNXANA_RXCTRL_SPHYNXRXMIXQLEADSI_Msk (0x1UL << RADIO_SPHYNXANA_RXCTRL_SPHYNXRXMIXQLEADSI_Pos) /*!< Bit mask of SPHYNXRXMIXQLEADSI field. */

/* Bits 2..0 : Bypass Rx LDOs */
#define RADIO_SPHYNXANA_RXCTRL_SPHYNXBYPASSLDORX_Pos (0UL) /*!< Position of SPHYNXBYPASSLDORX field. */
#define RADIO_SPHYNXANA_RXCTRL_SPHYNXBYPASSLDORX_Msk (0x7UL << RADIO_SPHYNXANA_RXCTRL_SPHYNXBYPASSLDORX_Pos) /*!< Bit mask of SPHYNXBYPASSLDORX field. */

/* Register: RADIO_SPHYNXANA_TXCTRL */
/* Description: Control to transmitter of Sphynx */

/* Bits 23..16 : Radio Tx output power fine tune */
#define RADIO_SPHYNXANA_TXCTRL_SPHYNXTXPWRFINE_Pos (16UL) /*!< Position of SPHYNXTXPWRFINE field. */
#define RADIO_SPHYNXANA_TXCTRL_SPHYNXTXPWRFINE_Msk (0xFFUL << RADIO_SPHYNXANA_TXCTRL_SPHYNXTXPWRFINE_Pos) /*!< Bit mask of SPHYNXTXPWRFINE field. */

/* Bits 11..6 : Digital input signal for tapping the resistor-ladder to create reference voltage in accordance with the desired peak */
#define RADIO_SPHYNXANA_TXCTRL_SPHYNXTXPWRCTRLTUNE_Pos (6UL) /*!< Position of SPHYNXTXPWRCTRLTUNE field. */
#define RADIO_SPHYNXANA_TXCTRL_SPHYNXTXPWRCTRLTUNE_Msk (0x3FUL << RADIO_SPHYNXANA_TXCTRL_SPHYNXTXPWRCTRLTUNE_Pos) /*!< Bit mask of SPHYNXTXPWRCTRLTUNE field. */

/* Bits 5..3 : TX PA ramp up/down control */
#define RADIO_SPHYNXANA_TXCTRL_SPHYNXTXPASRAMP_Pos (3UL) /*!< Position of SPHYNXTXPASRAMP field. */
#define RADIO_SPHYNXANA_TXCTRL_SPHYNXTXPASRAMP_Msk (0x7UL << RADIO_SPHYNXANA_TXCTRL_SPHYNXTXPASRAMP_Pos) /*!< Bit mask of SPHYNXTXPASRAMP field. */

/* Bits 2..0 : Bypass Tx LDOs */
#define RADIO_SPHYNXANA_TXCTRL_SPHYNXBYPASSLDOTX_Pos (0UL) /*!< Position of SPHYNXBYPASSLDOTX field. */
#define RADIO_SPHYNXANA_TXCTRL_SPHYNXBYPASSLDOTX_Msk (0x7UL << RADIO_SPHYNXANA_TXCTRL_SPHYNXBYPASSLDOTX_Pos) /*!< Bit mask of SPHYNXBYPASSLDOTX field. */

/* Register: RADIO_SPHYNXANA_MODEDEPENDENT */
/* Description: Mode dependent register of Sphynx */

/* Bit 0 : Select Rx IF frequency. 0=1MHz (for 1Mbps), 1=2MHz (for 2Mbps, 4Mbps) */
#define RADIO_SPHYNXANA_MODEDEPENDENT_SPHYNXRXAAFFREQ_Pos (0UL) /*!< Position of SPHYNXRXAAFFREQ field. */
#define RADIO_SPHYNXANA_MODEDEPENDENT_SPHYNXRXAAFFREQ_Msk (0x1UL << RADIO_SPHYNXANA_MODEDEPENDENT_SPHYNXRXAAFFREQ_Pos) /*!< Bit mask of SPHYNXRXAAFFREQ field. */

/* Register: RADIO_SPHYNXANA_OVRRXTRIMCODE */
/* Description: Override trim codes to the receiver of Sphynx */

/* Bit 26 : For RXMIX_DCCAL_Q_0V8, 0: controlled by CalibrationEngine, 1: overridden by register */
#define RADIO_SPHYNXANA_OVRRXTRIMCODE_OVRENRFMIXDCCALQ_Pos (26UL) /*!< Position of OVRENRFMIXDCCALQ field. */
#define RADIO_SPHYNXANA_OVRRXTRIMCODE_OVRENRFMIXDCCALQ_Msk (0x1UL << RADIO_SPHYNXANA_OVRRXTRIMCODE_OVRENRFMIXDCCALQ_Pos) /*!< Bit mask of OVRENRFMIXDCCALQ field. */

/* Bit 25 : For RXMIX_DCCAL_I_0V8, 0: controlled by CalibrationEngine, 1: overridden by register */
#define RADIO_SPHYNXANA_OVRRXTRIMCODE_OVRENRFMIXDCCALI_Pos (25UL) /*!< Position of OVRENRFMIXDCCALI field. */
#define RADIO_SPHYNXANA_OVRRXTRIMCODE_OVRENRFMIXDCCALI_Msk (0x1UL << RADIO_SPHYNXANA_OVRRXTRIMCODE_OVRENRFMIXDCCALI_Pos) /*!< Bit mask of OVRENRFMIXDCCALI field. */

/* Bit 24 : For RCCAL_CODE_0V8, 0: controlled by CalibrationEngine, 1: overridden by register */
#define RADIO_SPHYNXANA_OVRRXTRIMCODE_OVRENRCCALCODE_Pos (24UL) /*!< Position of OVRENRCCALCODE field. */
#define RADIO_SPHYNXANA_OVRRXTRIMCODE_OVRENRCCALCODE_Msk (0x1UL << RADIO_SPHYNXANA_OVRRXTRIMCODE_OVRENRCCALCODE_Pos) /*!< Bit mask of OVRENRCCALCODE field. */

/* Bits 23..16 : Override values on RXMIX_DCCAL_Q_0V8 */
#define RADIO_SPHYNXANA_OVRRXTRIMCODE_OVRVALRFMIXDCCALQ_Pos (16UL) /*!< Position of OVRVALRFMIXDCCALQ field. */
#define RADIO_SPHYNXANA_OVRRXTRIMCODE_OVRVALRFMIXDCCALQ_Msk (0xFFUL << RADIO_SPHYNXANA_OVRRXTRIMCODE_OVRVALRFMIXDCCALQ_Pos) /*!< Bit mask of OVRVALRFMIXDCCALQ field. */

/* Bits 15..8 : Override values on RXMIX_DCCAL_I_0V8 */
#define RADIO_SPHYNXANA_OVRRXTRIMCODE_OVRVALRFMIXDCCALI_Pos (8UL) /*!< Position of OVRVALRFMIXDCCALI field. */
#define RADIO_SPHYNXANA_OVRRXTRIMCODE_OVRVALRFMIXDCCALI_Msk (0xFFUL << RADIO_SPHYNXANA_OVRRXTRIMCODE_OVRVALRFMIXDCCALI_Pos) /*!< Bit mask of OVRVALRFMIXDCCALI field. */

/* Bits 3..0 : Override values on RCCAL_CODE_0V8 */
#define RADIO_SPHYNXANA_OVRRXTRIMCODE_OVRVALRCCALCODE_Pos (0UL) /*!< Position of OVRVALRCCALCODE field. */
#define RADIO_SPHYNXANA_OVRRXTRIMCODE_OVRVALRCCALCODE_Msk (0xFUL << RADIO_SPHYNXANA_OVRRXTRIMCODE_OVRVALRCCALCODE_Pos) /*!< Bit mask of OVRVALRCCALCODE field. */

/* Register: RADIO_SPHYNXANA_STATUS */
/* Description: Readout raw status of signals output from Sphynx */

/* Bit 31 : DFT Scan-out from AdPll */
#define RADIO_SPHYNXANA_STATUS_SPHYNXFSSCANOUTAO_Pos (31UL) /*!< Position of SPHYNXFSSCANOUTAO field. */
#define RADIO_SPHYNXANA_STATUS_SPHYNXFSSCANOUTAO_Msk (0x1UL << RADIO_SPHYNXANA_STATUS_SPHYNXFSSCANOUTAO_Pos) /*!< Bit mask of SPHYNXFSSCANOUTAO field. */

/* Bits 26..25 : Raw peak detector output from RX_PKDET */
#define RADIO_SPHYNXANA_STATUS_SPHYNXRXPKDETAO_Pos (25UL) /*!< Position of SPHYNXRXPKDETAO field. */
#define RADIO_SPHYNXANA_STATUS_SPHYNXRXPKDETAO_Msk (0x3UL << RADIO_SPHYNXANA_STATUS_SPHYNXRXPKDETAO_Pos) /*!< Bit mask of SPHYNXRXPKDETAO field. */

/* Bit 24 : Raw comparator output of DC calibration from RX_AAF Q channel */
#define RADIO_SPHYNXANA_STATUS_SPHYNXAAFDCCALQAO_Pos (24UL) /*!< Position of SPHYNXAAFDCCALQAO field. */
#define RADIO_SPHYNXANA_STATUS_SPHYNXAAFDCCALQAO_Msk (0x1UL << RADIO_SPHYNXANA_STATUS_SPHYNXAAFDCCALQAO_Pos) /*!< Bit mask of SPHYNXAAFDCCALQAO field. */

/* Bit 23 : Raw comparator output of DC calibration from RX_AAF I channel */
#define RADIO_SPHYNXANA_STATUS_SPHYNXAAFDCCALIAO_Pos (23UL) /*!< Position of SPHYNXAAFDCCALIAO field. */
#define RADIO_SPHYNXANA_STATUS_SPHYNXAAFDCCALIAO_Msk (0x1UL << RADIO_SPHYNXANA_STATUS_SPHYNXAAFDCCALIAO_Pos) /*!< Bit mask of SPHYNXAAFDCCALIAO field. */

/* Bit 22 : Raw comparator output of RC calibration from RC_CAL */
#define RADIO_SPHYNXANA_STATUS_SPHYNXCALCMPRCCALAO_Pos (22UL) /*!< Position of SPHYNXCALCMPRCCALAO field. */
#define RADIO_SPHYNXANA_STATUS_SPHYNXCALCMPRCCALAO_Msk (0x1UL << RADIO_SPHYNXANA_STATUS_SPHYNXCALCMPRCCALAO_Pos) /*!< Bit mask of SPHYNXCALCMPRCCALAO field. */

/* Bits 21..11 : Raw ADC Q channel output from RX_SAR2 */
#define RADIO_SPHYNXANA_STATUS_SPHYNXADCBQAO_Pos (11UL) /*!< Position of SPHYNXADCBQAO field. */
#define RADIO_SPHYNXANA_STATUS_SPHYNXADCBQAO_Msk (0x7FFUL << RADIO_SPHYNXANA_STATUS_SPHYNXADCBQAO_Pos) /*!< Bit mask of SPHYNXADCBQAO field. */

/* Bits 10..0 : Raw ADC I channel output from RX_SAR2 */
#define RADIO_SPHYNXANA_STATUS_SPHYNXADCBIAO_Pos (0UL) /*!< Position of SPHYNXADCBIAO field. */
#define RADIO_SPHYNXANA_STATUS_SPHYNXADCBIAO_Msk (0x7FFUL << RADIO_SPHYNXANA_STATUS_SPHYNXADCBIAO_Pos) /*!< Bit mask of SPHYNXADCBIAO field. */

/* Register: RADIO_SPHYNXANA_OVRRXGAIN */
/* Description: Analog rx gain override */

/* Bits 31..24 : Override value for RXMIX_GAIN_0V8, each bit can be overriden individually */
#define RADIO_SPHYNXANA_OVRRXGAIN_SPHYNXRXMIXGAINOVRVAL_Pos (24UL) /*!< Position of SPHYNXRXMIXGAINOVRVAL field. */
#define RADIO_SPHYNXANA_OVRRXGAIN_SPHYNXRXMIXGAINOVRVAL_Msk (0xFFUL << RADIO_SPHYNXANA_OVRRXGAIN_SPHYNXRXMIXGAINOVRVAL_Pos) /*!< Bit mask of SPHYNXRXMIXGAINOVRVAL field. */

/* Bits 23..16 : Override enable for RXMIX_GAIN_0V8, each bit can be overriden individually */
#define RADIO_SPHYNXANA_OVRRXGAIN_SPHYNXRXMIXGAINOVREN_Pos (16UL) /*!< Position of SPHYNXRXMIXGAINOVREN field. */
#define RADIO_SPHYNXANA_OVRRXGAIN_SPHYNXRXMIXGAINOVREN_Msk (0xFFUL << RADIO_SPHYNXANA_OVRRXGAIN_SPHYNXRXMIXGAINOVREN_Pos) /*!< Bit mask of SPHYNXRXMIXGAINOVREN field. */

/* Bits 10..8 : Override value for LNA_GAIN_0V8, each bit can be overriden individually */
#define RADIO_SPHYNXANA_OVRRXGAIN_SPHYNXLNAGAINOVRVAL_Pos (8UL) /*!< Position of SPHYNXLNAGAINOVRVAL field. */
#define RADIO_SPHYNXANA_OVRRXGAIN_SPHYNXLNAGAINOVRVAL_Msk (0x7UL << RADIO_SPHYNXANA_OVRRXGAIN_SPHYNXLNAGAINOVRVAL_Pos) /*!< Bit mask of SPHYNXLNAGAINOVRVAL field. */

/* Bits 2..0 : Override enable for LNA_GAIN_0V8, each bit can be overriden individually */
#define RADIO_SPHYNXANA_OVRRXGAIN_SPHYNXLNAGAINOVREN_Pos (0UL) /*!< Position of SPHYNXLNAGAINOVREN field. */
#define RADIO_SPHYNXANA_OVRRXGAIN_SPHYNXLNAGAINOVREN_Msk (0x7UL << RADIO_SPHYNXANA_OVRRXGAIN_SPHYNXLNAGAINOVREN_Pos) /*!< Bit mask of SPHYNXLNAGAINOVREN field. */

/* Register: RADIO_TEXTAMP */
/* Description: Timing control of external RADIO amplifier (LNA/PA) */

/* Bit 31 : In legacy timing mode, pwrupExtPa can be powered on before starting to ramp up by setting this registers to 1 */
#define RADIO_TEXTAMP_PWRUPEXTPABEFORERAMPUP_Pos (31UL) /*!< Position of PWRUPEXTPABEFORERAMPUP field. */
#define RADIO_TEXTAMP_PWRUPEXTPABEFORERAMPUP_Msk (0x1UL << RADIO_TEXTAMP_PWRUPEXTPABEFORERAMPUP_Pos) /*!< Bit mask of PWRUPEXTPABEFORERAMPUP field. */
#define RADIO_TEXTAMP_PWRUPEXTPABEFORERAMPUP_AfterRampup (0x0UL) /*!< Power up external PA at (RADIO_rampup_start_time + TPWRUPEXTPA) */
#define RADIO_TEXTAMP_PWRUPEXTPABEFORERAMPUP_BeforeRampup (0x1UL) /*!< Power up external PA at (RADIO_rampup_start_time - TPWRUPEXTPA) */

/* Bit 30 : In legacy timing mode, pwrupExtLna can be powered on before starting to ramp up by setting this registers to 1 */
#define RADIO_TEXTAMP_PWRUPEXTLNABEFORERAMPUP_Pos (30UL) /*!< Position of PWRUPEXTLNABEFORERAMPUP field. */
#define RADIO_TEXTAMP_PWRUPEXTLNABEFORERAMPUP_Msk (0x1UL << RADIO_TEXTAMP_PWRUPEXTLNABEFORERAMPUP_Pos) /*!< Bit mask of PWRUPEXTLNABEFORERAMPUP field. */
#define RADIO_TEXTAMP_PWRUPEXTLNABEFORERAMPUP_AfterRampup (0x0UL) /*!< Power up external LNA at (RADIO_rampup_start_time + TPWRUPEXTLNA) */
#define RADIO_TEXTAMP_PWRUPEXTLNABEFORERAMPUP_BeforeRampup (0x1UL) /*!< Power up external LNA at (RADIO_rampup_start_time - TPWRUPEXTLNA) */

/* Bits 15..8 : Timing control of PwrupExtPa (unit: 0.25us) */
#define RADIO_TEXTAMP_TPWRUPEXTPA_Pos (8UL) /*!< Position of TPWRUPEXTPA field. */
#define RADIO_TEXTAMP_TPWRUPEXTPA_Msk (0xFFUL << RADIO_TEXTAMP_TPWRUPEXTPA_Pos) /*!< Bit mask of TPWRUPEXTPA field. */

/* Bits 7..0 : Timing control of PwrupExtLna (unit: 0.25us) */
#define RADIO_TEXTAMP_TPWRUPEXTLNA_Pos (0UL) /*!< Position of TPWRUPEXTLNA field. */
#define RADIO_TEXTAMP_TPWRUPEXTLNA_Msk (0xFFUL << RADIO_TEXTAMP_TPWRUPEXTLNA_Pos) /*!< Bit mask of TPWRUPEXTLNA field. */

/* Register: RADIO_TIMINGENGINE_TIMINGALL0 */
/* Description: Timing parameters for signals activated in both Rx and Tx mode */

/* Bits 31..24 : Timing control of pwrupRadio[1] (unit: 0.25us) */
#define RADIO_TIMINGENGINE_TIMINGALL0_TPWRUPRADIOBIT1_Pos (24UL) /*!< Position of TPWRUPRADIOBIT1 field. */
#define RADIO_TIMINGENGINE_TIMINGALL0_TPWRUPRADIOBIT1_Msk (0xFFUL << RADIO_TIMINGENGINE_TIMINGALL0_TPWRUPRADIOBIT1_Pos) /*!< Bit mask of TPWRUPRADIOBIT1 field. */

/* Bits 23..16 : Timing control of pwrupRadio[0] (unit: 0.25us) */
#define RADIO_TIMINGENGINE_TIMINGALL0_TPWRUPRADIOBIT0_Pos (16UL) /*!< Position of TPWRUPRADIOBIT0 field. */
#define RADIO_TIMINGENGINE_TIMINGALL0_TPWRUPRADIOBIT0_Msk (0xFFUL << RADIO_TIMINGENGINE_TIMINGALL0_TPWRUPRADIOBIT0_Pos) /*!< Bit mask of TPWRUPRADIOBIT0 field. */

/* Bits 15..8 : Timing control of retainRadio (unit: 0.25us) */
#define RADIO_TIMINGENGINE_TIMINGALL0_TRETAINRADIO_Pos (8UL) /*!< Position of TRETAINRADIO field. */
#define RADIO_TIMINGENGINE_TIMINGALL0_TRETAINRADIO_Msk (0xFFUL << RADIO_TIMINGENGINE_TIMINGALL0_TRETAINRADIO_Pos) /*!< Bit mask of TRETAINRADIO field. */

/* Bits 7..0 : Timing control of pllSettled (unit: 0.25us) */
#define RADIO_TIMINGENGINE_TIMINGALL0_TPLLSETTLED_Pos (0UL) /*!< Position of TPLLSETTLED field. */
#define RADIO_TIMINGENGINE_TIMINGALL0_TPLLSETTLED_Msk (0xFFUL << RADIO_TIMINGENGINE_TIMINGALL0_TPLLSETTLED_Pos) /*!< Bit mask of TPLLSETTLED field. */

/* Register: RADIO_TIMINGENGINE_TIMINGALL1 */
/* Description: Timing parameters for signals activated in both Rx and Tx mode */

/* Bits 23..16 : Timing control of PwrupFsRef[2] (unit: 0.25us) */
#define RADIO_TIMINGENGINE_TIMINGALL1_TPWRUPFSREFBIT2_Pos (16UL) /*!< Position of TPWRUPFSREFBIT2 field. */
#define RADIO_TIMINGENGINE_TIMINGALL1_TPWRUPFSREFBIT2_Msk (0xFFUL << RADIO_TIMINGENGINE_TIMINGALL1_TPWRUPFSREFBIT2_Pos) /*!< Bit mask of TPWRUPFSREFBIT2 field. */

/* Bits 15..8 : Timing control of PwrupFsRef[1] (unit: 0.25us) */
#define RADIO_TIMINGENGINE_TIMINGALL1_TPWRUPFSREFBIT1_Pos (8UL) /*!< Position of TPWRUPFSREFBIT1 field. */
#define RADIO_TIMINGENGINE_TIMINGALL1_TPWRUPFSREFBIT1_Msk (0xFFUL << RADIO_TIMINGENGINE_TIMINGALL1_TPWRUPFSREFBIT1_Pos) /*!< Bit mask of TPWRUPFSREFBIT1 field. */

/* Bits 7..0 : Timing control of PwrupFsRef[0] (unit: 0.25us) */
#define RADIO_TIMINGENGINE_TIMINGALL1_TPWRUPFSREFBIT0_Pos (0UL) /*!< Position of TPWRUPFSREFBIT0 field. */
#define RADIO_TIMINGENGINE_TIMINGALL1_TPWRUPFSREFBIT0_Msk (0xFFUL << RADIO_TIMINGENGINE_TIMINGALL1_TPWRUPFSREFBIT0_Pos) /*!< Bit mask of TPWRUPFSREFBIT0 field. */

/* Register: RADIO_TIMINGENGINE_TIMINGALL2 */
/* Description: Timing parameters for signals activated in both Rx and Tx mode */

/* Bits 31..24 : Timing control of PwrupFsLdoVco[1] (unit: 0.25us) */
#define RADIO_TIMINGENGINE_TIMINGALL2_TPWRUPFSLDOVCOBIT1_Pos (24UL) /*!< Position of TPWRUPFSLDOVCOBIT1 field. */
#define RADIO_TIMINGENGINE_TIMINGALL2_TPWRUPFSLDOVCOBIT1_Msk (0xFFUL << RADIO_TIMINGENGINE_TIMINGALL2_TPWRUPFSLDOVCOBIT1_Pos) /*!< Bit mask of TPWRUPFSLDOVCOBIT1 field. */

/* Bits 23..16 : Timing control of PwrupFsLdoVco[0] (unit: 0.25us) */
#define RADIO_TIMINGENGINE_TIMINGALL2_TPWRUPFSLDOVCOBIT0_Pos (16UL) /*!< Position of TPWRUPFSLDOVCOBIT0 field. */
#define RADIO_TIMINGENGINE_TIMINGALL2_TPWRUPFSLDOVCOBIT0_Msk (0xFFUL << RADIO_TIMINGENGINE_TIMINGALL2_TPWRUPFSLDOVCOBIT0_Pos) /*!< Bit mask of TPWRUPFSLDOVCOBIT0 field. */

/* Bits 15..8 : Timing control of RstFsLs[1] (unit: 0.25us) */
#define RADIO_TIMINGENGINE_TIMINGALL2_TRSTFSLSBIT1_Pos (8UL) /*!< Position of TRSTFSLSBIT1 field. */
#define RADIO_TIMINGENGINE_TIMINGALL2_TRSTFSLSBIT1_Msk (0xFFUL << RADIO_TIMINGENGINE_TIMINGALL2_TRSTFSLSBIT1_Pos) /*!< Bit mask of TRSTFSLSBIT1 field. */

/* Bits 7..0 : Timing control of RstFsLs[0] (unit: 0.25us) */
#define RADIO_TIMINGENGINE_TIMINGALL2_TRSTFSLSBIT0_Pos (0UL) /*!< Position of TRSTFSLSBIT0 field. */
#define RADIO_TIMINGENGINE_TIMINGALL2_TRSTFSLSBIT0_Msk (0xFFUL << RADIO_TIMINGENGINE_TIMINGALL2_TRSTFSLSBIT0_Pos) /*!< Bit mask of TRSTFSLSBIT0 field. */

/* Register: RADIO_TIMINGENGINE_TIMINGALL3 */
/* Description: Timing parameters for signals activated in both Rx and Tx mode */

/* Bits 31..24 : Timing control of PwrupFsLdoDig[1] (unit: 0.25us) */
#define RADIO_TIMINGENGINE_TIMINGALL3_TPWRUPFSLDODIGBIT1_Pos (24UL) /*!< Position of TPWRUPFSLDODIGBIT1 field. */
#define RADIO_TIMINGENGINE_TIMINGALL3_TPWRUPFSLDODIGBIT1_Msk (0xFFUL << RADIO_TIMINGENGINE_TIMINGALL3_TPWRUPFSLDODIGBIT1_Pos) /*!< Bit mask of TPWRUPFSLDODIGBIT1 field. */

/* Bits 23..16 : Timing control of PwrupFsLdoDig[0] (unit: 0.25us) */
#define RADIO_TIMINGENGINE_TIMINGALL3_TPWRUPFSLDODIGBIT0_Pos (16UL) /*!< Position of TPWRUPFSLDODIGBIT0 field. */
#define RADIO_TIMINGENGINE_TIMINGALL3_TPWRUPFSLDODIGBIT0_Msk (0xFFUL << RADIO_TIMINGENGINE_TIMINGALL3_TPWRUPFSLDODIGBIT0_Pos) /*!< Bit mask of TPWRUPFSLDODIGBIT0 field. */

/* Bits 15..8 : Timing control of PwrupFsLdoDtc[1] (unit: 0.25us) */
#define RADIO_TIMINGENGINE_TIMINGALL3_TPWRUPFSLDODTCBIT1_Pos (8UL) /*!< Position of TPWRUPFSLDODTCBIT1 field. */
#define RADIO_TIMINGENGINE_TIMINGALL3_TPWRUPFSLDODTCBIT1_Msk (0xFFUL << RADIO_TIMINGENGINE_TIMINGALL3_TPWRUPFSLDODTCBIT1_Pos) /*!< Bit mask of TPWRUPFSLDODTCBIT1 field. */

/* Bits 7..0 : Timing control of PwrupFsLdoDtc[0] (unit: 0.25us) */
#define RADIO_TIMINGENGINE_TIMINGALL3_TPWRUPFSLDODTCBIT0_Pos (0UL) /*!< Position of TPWRUPFSLDODTCBIT0 field. */
#define RADIO_TIMINGENGINE_TIMINGALL3_TPWRUPFSLDODTCBIT0_Msk (0xFFUL << RADIO_TIMINGENGINE_TIMINGALL3_TPWRUPFSLDODTCBIT0_Pos) /*!< Bit mask of TPWRUPFSLDODTCBIT0 field. */

/* Register: RADIO_TIMINGENGINE_TIMINGALL4 */
/* Description: Timing parameters for signals activated in both Rx and Tx mode */

/* Bits 31..24 : Timing control of PwrupFsLdoCnt[1] (unit: 0.25us) */
#define RADIO_TIMINGENGINE_TIMINGALL4_TPWRUPFSLDOCNTBIT1_Pos (24UL) /*!< Position of TPWRUPFSLDOCNTBIT1 field. */
#define RADIO_TIMINGENGINE_TIMINGALL4_TPWRUPFSLDOCNTBIT1_Msk (0xFFUL << RADIO_TIMINGENGINE_TIMINGALL4_TPWRUPFSLDOCNTBIT1_Pos) /*!< Bit mask of TPWRUPFSLDOCNTBIT1 field. */

/* Bits 23..16 : Timing control of PwrupFsLdoCnt[0] (unit: 0.25us) */
#define RADIO_TIMINGENGINE_TIMINGALL4_TPWRUPFSLDOCNTBIT0_Pos (16UL) /*!< Position of TPWRUPFSLDOCNTBIT0 field. */
#define RADIO_TIMINGENGINE_TIMINGALL4_TPWRUPFSLDOCNTBIT0_Msk (0xFFUL << RADIO_TIMINGENGINE_TIMINGALL4_TPWRUPFSLDOCNTBIT0_Pos) /*!< Bit mask of TPWRUPFSLDOCNTBIT0 field. */

/* Bits 15..8 : Timing control of PwrupFsLdoDiv[1] (unit: 0.25us) */
#define RADIO_TIMINGENGINE_TIMINGALL4_TPWRUPFSLDODIVBIT1_Pos (8UL) /*!< Position of TPWRUPFSLDODIVBIT1 field. */
#define RADIO_TIMINGENGINE_TIMINGALL4_TPWRUPFSLDODIVBIT1_Msk (0xFFUL << RADIO_TIMINGENGINE_TIMINGALL4_TPWRUPFSLDODIVBIT1_Pos) /*!< Bit mask of TPWRUPFSLDODIVBIT1 field. */

/* Bits 7..0 : Timing control of PwrupFsLdoDiv[0] (unit: 0.25us) */
#define RADIO_TIMINGENGINE_TIMINGALL4_TPWRUPFSLDODIVBIT0_Pos (0UL) /*!< Position of TPWRUPFSLDODIVBIT0 field. */
#define RADIO_TIMINGENGINE_TIMINGALL4_TPWRUPFSLDODIVBIT0_Msk (0xFFUL << RADIO_TIMINGENGINE_TIMINGALL4_TPWRUPFSLDODIVBIT0_Pos) /*!< Bit mask of TPWRUPFSLDODIVBIT0 field. */

/* Register: RADIO_TIMINGENGINE_TIMINGALL5 */
/* Description: Timing parameters for signals activated in both Rx and Tx mode */

/* Bits 31..24 : Timing control of FsStart (unit: 0.25us) */
#define RADIO_TIMINGENGINE_TIMINGALL5_TFSSTART_Pos (24UL) /*!< Position of TFSSTART field. */
#define RADIO_TIMINGENGINE_TIMINGALL5_TFSSTART_Msk (0xFFUL << RADIO_TIMINGENGINE_TIMINGALL5_TFSSTART_Pos) /*!< Bit mask of TFSSTART field. */

/* Bits 23..16 : Timing control of ArstFs (unit: 0.25us) */
#define RADIO_TIMINGENGINE_TIMINGALL5_TARSTFS_Pos (16UL) /*!< Position of TARSTFS field. */
#define RADIO_TIMINGENGINE_TIMINGALL5_TARSTFS_Msk (0xFFUL << RADIO_TIMINGENGINE_TIMINGALL5_TARSTFS_Pos) /*!< Bit mask of TARSTFS field. */

/* Bits 15..8 : Timing control of PwrupFsLdoTdc[1] (unit: 0.25us) */
#define RADIO_TIMINGENGINE_TIMINGALL5_TPWRUPFSLDOTDCBIT1_Pos (8UL) /*!< Position of TPWRUPFSLDOTDCBIT1 field. */
#define RADIO_TIMINGENGINE_TIMINGALL5_TPWRUPFSLDOTDCBIT1_Msk (0xFFUL << RADIO_TIMINGENGINE_TIMINGALL5_TPWRUPFSLDOTDCBIT1_Pos) /*!< Bit mask of TPWRUPFSLDOTDCBIT1 field. */

/* Bits 7..0 : Timing control of PwrupFsLdoTdc[0] (unit: 0.25us) */
#define RADIO_TIMINGENGINE_TIMINGALL5_TPWRUPFSLDOTDCBIT0_Pos (0UL) /*!< Position of TPWRUPFSLDOTDCBIT0 field. */
#define RADIO_TIMINGENGINE_TIMINGALL5_TPWRUPFSLDOTDCBIT0_Msk (0xFFUL << RADIO_TIMINGENGINE_TIMINGALL5_TPWRUPFSLDOTDCBIT0_Pos) /*!< Bit mask of TPWRUPFSLDOTDCBIT0 field. */

/* Register: RADIO_TIMINGENGINE_TIMINGALL6 */
/* Description: Timing parameters for signals activated in both Rx and Tx mode */

/* Bits 31..24 : Timing control of PwrupFsDiv2 (unit: 0.25us) */
#define RADIO_TIMINGENGINE_TIMINGALL6_TPWRUPFSDIV2_Pos (24UL) /*!< Position of TPWRUPFSDIV2 field. */
#define RADIO_TIMINGENGINE_TIMINGALL6_TPWRUPFSDIV2_Msk (0xFFUL << RADIO_TIMINGENGINE_TIMINGALL6_TPWRUPFSDIV2_Pos) /*!< Bit mask of TPWRUPFSDIV2 field. */

/* Bits 23..16 : Timing control of PwrupFsVco (unit: 0.25us) */
#define RADIO_TIMINGENGINE_TIMINGALL6_TPWRUPFSVCO_Pos (16UL) /*!< Position of TPWRUPFSVCO field. */
#define RADIO_TIMINGENGINE_TIMINGALL6_TPWRUPFSVCO_Msk (0xFFUL << RADIO_TIMINGENGINE_TIMINGALL6_TPWRUPFSVCO_Pos) /*!< Bit mask of TPWRUPFSVCO field. */

/* Bits 15..8 : Timing control of PwrupFsTdc (unit: 0.25us) */
#define RADIO_TIMINGENGINE_TIMINGALL6_TPWRUPFSTDC_Pos (8UL) /*!< Position of TPWRUPFSTDC field. */
#define RADIO_TIMINGENGINE_TIMINGALL6_TPWRUPFSTDC_Msk (0xFFUL << RADIO_TIMINGENGINE_TIMINGALL6_TPWRUPFSTDC_Pos) /*!< Bit mask of TPWRUPFSTDC field. */

/* Bits 7..0 : Timing control of PwrupFsDtc (unit: 0.25us) */
#define RADIO_TIMINGENGINE_TIMINGALL6_TPWRUPFSDTC_Pos (0UL) /*!< Position of TPWRUPFSDTC field. */
#define RADIO_TIMINGENGINE_TIMINGALL6_TPWRUPFSDTC_Msk (0xFFUL << RADIO_TIMINGENGINE_TIMINGALL6_TPWRUPFSDTC_Pos) /*!< Bit mask of TPWRUPFSDTC field. */

/* Register: RADIO_TIMINGENGINE_TIMINGALL7 */
/* Description: Timing parameters for signals activated in both Rx and Tx mode */

/* Bits 31..24 : Timing control of PwrupRxTxRef[2] (unit: 0.25us) */
#define RADIO_TIMINGENGINE_TIMINGALL7_TPWRUPRXTXREFBIT2_Pos (24UL) /*!< Position of TPWRUPRXTXREFBIT2 field. */
#define RADIO_TIMINGENGINE_TIMINGALL7_TPWRUPRXTXREFBIT2_Msk (0xFFUL << RADIO_TIMINGENGINE_TIMINGALL7_TPWRUPRXTXREFBIT2_Pos) /*!< Bit mask of TPWRUPRXTXREFBIT2 field. */

/* Bits 23..16 : Timing control of PwrupRxTxRef[1] (unit: 0.25us) */
#define RADIO_TIMINGENGINE_TIMINGALL7_TPWRUPRXTXREFBIT1_Pos (16UL) /*!< Position of TPWRUPRXTXREFBIT1 field. */
#define RADIO_TIMINGENGINE_TIMINGALL7_TPWRUPRXTXREFBIT1_Msk (0xFFUL << RADIO_TIMINGENGINE_TIMINGALL7_TPWRUPRXTXREFBIT1_Pos) /*!< Bit mask of TPWRUPRXTXREFBIT1 field. */

/* Bits 15..8 : Timing control of PwrupRxTxRef[0] (unit: 0.25us) */
#define RADIO_TIMINGENGINE_TIMINGALL7_TPWRUPRXTXREFBIT0_Pos (8UL) /*!< Position of TPWRUPRXTXREFBIT0 field. */
#define RADIO_TIMINGENGINE_TIMINGALL7_TPWRUPRXTXREFBIT0_Msk (0xFFUL << RADIO_TIMINGENGINE_TIMINGALL7_TPWRUPRXTXREFBIT0_Pos) /*!< Bit mask of TPWRUPRXTXREFBIT0 field. */

/* Bits 7..0 : Timing control of PwrupFsDiv2g4Counter (unit: 0.25us) */
#define RADIO_TIMINGENGINE_TIMINGALL7_TPWRUPFSDIV2G4COUNTER_Pos (0UL) /*!< Position of TPWRUPFSDIV2G4COUNTER field. */
#define RADIO_TIMINGENGINE_TIMINGALL7_TPWRUPFSDIV2G4COUNTER_Msk (0xFFUL << RADIO_TIMINGENGINE_TIMINGALL7_TPWRUPFSDIV2G4COUNTER_Pos) /*!< Bit mask of TPWRUPFSDIV2G4COUNTER field. */

/* Register: RADIO_TIMINGENGINE_TIMINGALL8 */
/* Description: Timing parameters for signals activated in both Rx and Tx mode */

/* Bits 7..0 : Timing control of RstFsLs[2] (unit: 0.25us) */
#define RADIO_TIMINGENGINE_TIMINGALL8_TRSTFSLSBIT2_Pos (0UL) /*!< Position of TRSTFSLSBIT2 field. */
#define RADIO_TIMINGENGINE_TIMINGALL8_TRSTFSLSBIT2_Msk (0xFFUL << RADIO_TIMINGENGINE_TIMINGALL8_TRSTFSLSBIT2_Pos) /*!< Bit mask of TRSTFSLSBIT2 field. */

/* Register: RADIO_TIMINGENGINE_MODEDEPENDENT */
/* Description: Mode dependent timing parameters */

/* Bits 31..24 : Timing control of DeltaPwrdnPa (unit: 0.25us) */
#define RADIO_TIMINGENGINE_MODEDEPENDENT_TDELTAPWRDNPA_Pos (24UL) /*!< Position of TDELTAPWRDNPA field. */
#define RADIO_TIMINGENGINE_MODEDEPENDENT_TDELTAPWRDNPA_Msk (0xFFUL << RADIO_TIMINGENGINE_MODEDEPENDENT_TDELTAPWRDNPA_Pos) /*!< Bit mask of TDELTAPWRDNPA field. */

/* Bits 23..16 : Timing control of DeltaPipe (unit: 0.25us) */
#define RADIO_TIMINGENGINE_MODEDEPENDENT_TDELTAPIPE_Pos (16UL) /*!< Position of TDELTAPIPE field. */
#define RADIO_TIMINGENGINE_MODEDEPENDENT_TDELTAPIPE_Msk (0xFFUL << RADIO_TIMINGENGINE_MODEDEPENDENT_TDELTAPIPE_Pos) /*!< Bit mask of TDELTAPIPE field. */

/* Bits 12..8 : Timing control of IfsDeltaPlus (unit: 0.25us) */
#define RADIO_TIMINGENGINE_MODEDEPENDENT_TIFSDELTAPLUS_Pos (8UL) /*!< Position of TIFSDELTAPLUS field. */
#define RADIO_TIMINGENGINE_MODEDEPENDENT_TIFSDELTAPLUS_Msk (0x1FUL << RADIO_TIMINGENGINE_MODEDEPENDENT_TIFSDELTAPLUS_Pos) /*!< Bit mask of TIFSDELTAPLUS field. */

/* Bits 7..0 : Timing control of IfsDelta (unit: 0.25us) */
#define RADIO_TIMINGENGINE_MODEDEPENDENT_TIFSDELTA_Pos (0UL) /*!< Position of TIFSDELTA field. */
#define RADIO_TIMINGENGINE_MODEDEPENDENT_TIFSDELTA_Msk (0xFFUL << RADIO_TIMINGENGINE_MODEDEPENDENT_TIFSDELTA_Pos) /*!< Bit mask of TIFSDELTA field. */

/* Register: RADIO_TIMINGENGINE_TIMINGRX0 */
/* Description: Timing parameters for signals activated in Rx mode */

/* Bits 31..24 : Timing control of PwrupRxLdo[1] (unit: 0.25us) */
#define RADIO_TIMINGENGINE_TIMINGRX0_TPWRUPRXLDOBIT1_Pos (24UL) /*!< Position of TPWRUPRXLDOBIT1 field. */
#define RADIO_TIMINGENGINE_TIMINGRX0_TPWRUPRXLDOBIT1_Msk (0xFFUL << RADIO_TIMINGENGINE_TIMINGRX0_TPWRUPRXLDOBIT1_Pos) /*!< Bit mask of TPWRUPRXLDOBIT1 field. */

/* Bits 23..16 : Timing control of PwrupRxLdo[0] (unit: 0.25us) */
#define RADIO_TIMINGENGINE_TIMINGRX0_TPWRUPRXLDOBIT0_Pos (16UL) /*!< Position of TPWRUPRXLDOBIT0 field. */
#define RADIO_TIMINGENGINE_TIMINGRX0_TPWRUPRXLDOBIT0_Msk (0xFFUL << RADIO_TIMINGENGINE_TIMINGRX0_TPWRUPRXLDOBIT0_Pos) /*!< Bit mask of TPWRUPRXLDOBIT0 field. */

/* Bits 15..8 : Timing control of RstRxLs[1] (unit: 0.25us) */
#define RADIO_TIMINGENGINE_TIMINGRX0_TRSTRXLSBIT1_Pos (8UL) /*!< Position of TRSTRXLSBIT1 field. */
#define RADIO_TIMINGENGINE_TIMINGRX0_TRSTRXLSBIT1_Msk (0xFFUL << RADIO_TIMINGENGINE_TIMINGRX0_TRSTRXLSBIT1_Pos) /*!< Bit mask of TRSTRXLSBIT1 field. */

/* Bits 7..0 : Timing control of RstRxLs[0] (unit: 0.25us) */
#define RADIO_TIMINGENGINE_TIMINGRX0_TRSTRXLSBIT0_Pos (0UL) /*!< Position of TRSTRXLSBIT0 field. */
#define RADIO_TIMINGENGINE_TIMINGRX0_TRSTRXLSBIT0_Msk (0xFFUL << RADIO_TIMINGENGINE_TIMINGRX0_TRSTRXLSBIT0_Pos) /*!< Bit mask of TRSTRXLSBIT0 field. */

/* Register: RADIO_TIMINGENGINE_TIMINGRX1 */
/* Description: Timing parameters for signals activated in Rx mode */

/* Bits 31..24 : Timing control of PwrupRxLdo[5] (unit: 0.25us) */
#define RADIO_TIMINGENGINE_TIMINGRX1_TPWRUPRXLDOBIT5_Pos (24UL) /*!< Position of TPWRUPRXLDOBIT5 field. */
#define RADIO_TIMINGENGINE_TIMINGRX1_TPWRUPRXLDOBIT5_Msk (0xFFUL << RADIO_TIMINGENGINE_TIMINGRX1_TPWRUPRXLDOBIT5_Pos) /*!< Bit mask of TPWRUPRXLDOBIT5 field. */

/* Bits 23..16 : Timing control of PwrupRxLdo[4] (unit: 0.25us) */
#define RADIO_TIMINGENGINE_TIMINGRX1_TPWRUPRXLDOBIT4_Pos (16UL) /*!< Position of TPWRUPRXLDOBIT4 field. */
#define RADIO_TIMINGENGINE_TIMINGRX1_TPWRUPRXLDOBIT4_Msk (0xFFUL << RADIO_TIMINGENGINE_TIMINGRX1_TPWRUPRXLDOBIT4_Pos) /*!< Bit mask of TPWRUPRXLDOBIT4 field. */

/* Bits 15..8 : Timing control of PwrupRxLdo[3] (unit: 0.25us) */
#define RADIO_TIMINGENGINE_TIMINGRX1_TPWRUPRXLDOBIT3_Pos (8UL) /*!< Position of TPWRUPRXLDOBIT3 field. */
#define RADIO_TIMINGENGINE_TIMINGRX1_TPWRUPRXLDOBIT3_Msk (0xFFUL << RADIO_TIMINGENGINE_TIMINGRX1_TPWRUPRXLDOBIT3_Pos) /*!< Bit mask of TPWRUPRXLDOBIT3 field. */

/* Bits 7..0 : Timing control of PwrupRxLdo[2] (unit: 0.25us) */
#define RADIO_TIMINGENGINE_TIMINGRX1_TPWRUPRXLDOBIT2_Pos (0UL) /*!< Position of TPWRUPRXLDOBIT2 field. */
#define RADIO_TIMINGENGINE_TIMINGRX1_TPWRUPRXLDOBIT2_Msk (0xFFUL << RADIO_TIMINGENGINE_TIMINGRX1_TPWRUPRXLDOBIT2_Pos) /*!< Bit mask of TPWRUPRXLDOBIT2 field. */

/* Register: RADIO_TIMINGENGINE_TIMINGRX2 */
/* Description: Timing parameters for signals activated in Rx mode */

/* Bits 31..24 : Timing control of PwrupRxAaf (unit: 0.25us) */
#define RADIO_TIMINGENGINE_TIMINGRX2_TPWRUPRXAAF_Pos (24UL) /*!< Position of TPWRUPRXAAF field. */
#define RADIO_TIMINGENGINE_TIMINGRX2_TPWRUPRXAAF_Msk (0xFFUL << RADIO_TIMINGENGINE_TIMINGRX2_TPWRUPRXAAF_Pos) /*!< Bit mask of TPWRUPRXAAF field. */

/* Bits 23..16 : Timing control of PwrupRx (unit: 0.25us) */
#define RADIO_TIMINGENGINE_TIMINGRX2_TPWRUPRX_Pos (16UL) /*!< Position of TPWRUPRX field. */
#define RADIO_TIMINGENGINE_TIMINGRX2_TPWRUPRX_Msk (0xFFUL << RADIO_TIMINGENGINE_TIMINGRX2_TPWRUPRX_Pos) /*!< Bit mask of TPWRUPRX field. */

/* Bits 15..8 : Timing control of PwrupRxMix (unit: 0.25us) */
#define RADIO_TIMINGENGINE_TIMINGRX2_TPWRUPRXMIX_Pos (8UL) /*!< Position of TPWRUPRXMIX field. */
#define RADIO_TIMINGENGINE_TIMINGRX2_TPWRUPRXMIX_Msk (0xFFUL << RADIO_TIMINGENGINE_TIMINGRX2_TPWRUPRXMIX_Pos) /*!< Bit mask of TPWRUPRXMIX field. */

/* Bits 7..0 : Timing control of PwrupRxLna (unit: 0.25us) */
#define RADIO_TIMINGENGINE_TIMINGRX2_TPWRUPRXLNA_Pos (0UL) /*!< Position of TPWRUPRXLNA field. */
#define RADIO_TIMINGENGINE_TIMINGRX2_TPWRUPRXLNA_Msk (0xFFUL << RADIO_TIMINGENGINE_TIMINGRX2_TPWRUPRXLNA_Pos) /*!< Bit mask of TPWRUPRXLNA field. */

/* Register: RADIO_TIMINGENGINE_TIMINGRX3 */
/* Description: Timing parameters for signals activated in Rx mode */

/* Bits 23..16 : Spare register. Power up peak detector is now tied with power up mixer. */
#define RADIO_TIMINGENGINE_TIMINGRX3_TPWRUPRXPKD_Pos (16UL) /*!< Position of TPWRUPRXPKD field. */
#define RADIO_TIMINGENGINE_TIMINGRX3_TPWRUPRXPKD_Msk (0xFFUL << RADIO_TIMINGENGINE_TIMINGRX3_TPWRUPRXPKD_Pos) /*!< Bit mask of TPWRUPRXPKD field. */

/* Bits 15..8 : Timing control of PwrupRxSar[1] (unit: 0.25us) */
#define RADIO_TIMINGENGINE_TIMINGRX3_TPWRUPRXSARBIT1_Pos (8UL) /*!< Position of TPWRUPRXSARBIT1 field. */
#define RADIO_TIMINGENGINE_TIMINGRX3_TPWRUPRXSARBIT1_Msk (0xFFUL << RADIO_TIMINGENGINE_TIMINGRX3_TPWRUPRXSARBIT1_Pos) /*!< Bit mask of TPWRUPRXSARBIT1 field. */

/* Bits 7..0 : Timing control of PwrupRxSar[0] (unit: 0.25us) */
#define RADIO_TIMINGENGINE_TIMINGRX3_TPWRUPRXSARBIT0_Pos (0UL) /*!< Position of TPWRUPRXSARBIT0 field. */
#define RADIO_TIMINGENGINE_TIMINGRX3_TPWRUPRXSARBIT0_Msk (0xFFUL << RADIO_TIMINGENGINE_TIMINGRX3_TPWRUPRXSARBIT0_Pos) /*!< Bit mask of TPWRUPRXSARBIT0 field. */

/* Register: RADIO_TIMINGENGINE_TIMINGRX4 */
/* Description: Timing parameters for signals activated in Rx mode */

/* Bits 31..24 : Timing control of RxDigEn (unit: 0.25us) */
#define RADIO_TIMINGENGINE_TIMINGRX4_TRXDIGEN_Pos (24UL) /*!< Position of TRXDIGEN field. */
#define RADIO_TIMINGENGINE_TIMINGRX4_TRXDIGEN_Msk (0xFFUL << RADIO_TIMINGENGINE_TIMINGRX4_TRXDIGEN_Pos) /*!< Bit mask of TRXDIGEN field. */

/* Bits 23..16 : Timing control of RxAgcEn (unit: 0.25us) */
#define RADIO_TIMINGENGINE_TIMINGRX4_TRXAGCEN_Pos (16UL) /*!< Position of TRXAGCEN field. */
#define RADIO_TIMINGENGINE_TIMINGRX4_TRXAGCEN_Msk (0xFFUL << RADIO_TIMINGENGINE_TIMINGRX4_TRXAGCEN_Pos) /*!< Bit mask of TRXAGCEN field. */

/* Bits 15..8 : Timing control of ArstAdcEnd (unit: 0.25us) */
#define RADIO_TIMINGENGINE_TIMINGRX4_TARSTADCEND_Pos (8UL) /*!< Position of TARSTADCEND field. */
#define RADIO_TIMINGENGINE_TIMINGRX4_TARSTADCEND_Msk (0xFFUL << RADIO_TIMINGENGINE_TIMINGRX4_TARSTADCEND_Pos) /*!< Bit mask of TARSTADCEND field. */

/* Bits 7..0 : Timing control of ArstAdc (unit: 0.25us) */
#define RADIO_TIMINGENGINE_TIMINGRX4_TARSTADC_Pos (0UL) /*!< Position of TARSTADC field. */
#define RADIO_TIMINGENGINE_TIMINGRX4_TARSTADC_Msk (0xFFUL << RADIO_TIMINGENGINE_TIMINGRX4_TARSTADC_Pos) /*!< Bit mask of TARSTADC field. */

/* Register: RADIO_TIMINGENGINE_TIMINGTX0 */
/* Description: Timing parameters for signals activated in Tx mode */

/* Bits 31..24 : Timing control of PwrupTxLdo[3] (unit: 0.25us) */
#define RADIO_TIMINGENGINE_TIMINGTX0_TPWRUPTXLDOBIT3_Pos (24UL) /*!< Position of TPWRUPTXLDOBIT3 field. */
#define RADIO_TIMINGENGINE_TIMINGTX0_TPWRUPTXLDOBIT3_Msk (0xFFUL << RADIO_TIMINGENGINE_TIMINGTX0_TPWRUPTXLDOBIT3_Pos) /*!< Bit mask of TPWRUPTXLDOBIT3 field. */

/* Bits 23..16 : Timing control of PwrupTxLdo[2] (unit: 0.25us) */
#define RADIO_TIMINGENGINE_TIMINGTX0_TPWRUPTXLDOBIT2_Pos (16UL) /*!< Position of TPWRUPTXLDOBIT2 field. */
#define RADIO_TIMINGENGINE_TIMINGTX0_TPWRUPTXLDOBIT2_Msk (0xFFUL << RADIO_TIMINGENGINE_TIMINGTX0_TPWRUPTXLDOBIT2_Pos) /*!< Bit mask of TPWRUPTXLDOBIT2 field. */

/* Bits 15..8 : Timing control of PwrupTxLdo[1] (unit: 0.25us) */
#define RADIO_TIMINGENGINE_TIMINGTX0_TPWRUPTXLDOBIT1_Pos (8UL) /*!< Position of TPWRUPTXLDOBIT1 field. */
#define RADIO_TIMINGENGINE_TIMINGTX0_TPWRUPTXLDOBIT1_Msk (0xFFUL << RADIO_TIMINGENGINE_TIMINGTX0_TPWRUPTXLDOBIT1_Pos) /*!< Bit mask of TPWRUPTXLDOBIT1 field. */

/* Bits 7..0 : Timing control of PwrupTxLdo[0] (unit: 0.25us) */
#define RADIO_TIMINGENGINE_TIMINGTX0_TPWRUPTXLDOBIT0_Pos (0UL) /*!< Position of TPWRUPTXLDOBIT0 field. */
#define RADIO_TIMINGENGINE_TIMINGTX0_TPWRUPTXLDOBIT0_Msk (0xFFUL << RADIO_TIMINGENGINE_TIMINGTX0_TPWRUPTXLDOBIT0_Pos) /*!< Bit mask of TPWRUPTXLDOBIT0 field. */

/* Register: RADIO_TIMINGENGINE_TIMINGTX1 */
/* Description: Timing parameters for signals activated in Tx mode */

/* Bits 31..24 : Timing control of PwrupTxPwrCtrl (unit: 0.25us) */
#define RADIO_TIMINGENGINE_TIMINGTX1_TPWRUPTXPWRCTRL_Pos (24UL) /*!< Position of TPWRUPTXPWRCTRL field. */
#define RADIO_TIMINGENGINE_TIMINGTX1_TPWRUPTXPWRCTRL_Msk (0xFFUL << RADIO_TIMINGENGINE_TIMINGTX1_TPWRUPTXPWRCTRL_Pos) /*!< Bit mask of TPWRUPTXPWRCTRL field. */

/* Bits 23..16 : Timing control of PwrupTx (unit: 0.25us) */
#define RADIO_TIMINGENGINE_TIMINGTX1_TPWRUPTX_Pos (16UL) /*!< Position of TPWRUPTX field. */
#define RADIO_TIMINGENGINE_TIMINGTX1_TPWRUPTX_Msk (0xFFUL << RADIO_TIMINGENGINE_TIMINGTX1_TPWRUPTX_Pos) /*!< Bit mask of TPWRUPTX field. */

/* Bits 15..8 : Timing control of PwrupTxLdo[5] (unit: 0.25us) */
#define RADIO_TIMINGENGINE_TIMINGTX1_TPWRUPTXLDOBIT5_Pos (8UL) /*!< Position of TPWRUPTXLDOBIT5 field. */
#define RADIO_TIMINGENGINE_TIMINGTX1_TPWRUPTXLDOBIT5_Msk (0xFFUL << RADIO_TIMINGENGINE_TIMINGTX1_TPWRUPTXLDOBIT5_Pos) /*!< Bit mask of TPWRUPTXLDOBIT5 field. */

/* Bits 7..0 : Timing control of PwrupTxLdo[4] (unit: 0.25us) */
#define RADIO_TIMINGENGINE_TIMINGTX1_TPWRUPTXLDOBIT4_Pos (0UL) /*!< Position of TPWRUPTXLDOBIT4 field. */
#define RADIO_TIMINGENGINE_TIMINGTX1_TPWRUPTXLDOBIT4_Msk (0xFFUL << RADIO_TIMINGENGINE_TIMINGTX1_TPWRUPTXLDOBIT4_Pos) /*!< Bit mask of TPWRUPTXLDOBIT4 field. */

/* Register: RADIO_TIMINGENGINE_TIMINGTX2 */
/* Description: Timing parameters for signals activated in Tx mode */

/* Bits 7..0 : Timing control of PwrupTxPa (unit: 0.25us) */
#define RADIO_TIMINGENGINE_TIMINGTX2_TPWRUPTXPA_Pos (0UL) /*!< Position of TPWRUPTXPA field. */
#define RADIO_TIMINGENGINE_TIMINGTX2_TPWRUPTXPA_Msk (0xFFUL << RADIO_TIMINGENGINE_TIMINGTX2_TPWRUPTXPA_Pos) /*!< Bit mask of TPWRUPTXPA field. */

/* Register: RADIO_TIMINGENGINE_CONFIG */
/* Description: Configuration of timing control */

/* Bits 17..8 : Additional delay to hold Tx/Rx turnaround (unit: 0.25us) */
#define RADIO_TIMINGENGINE_CONFIG_TRXTXTURNAROUNDHOLD_Pos (8UL) /*!< Position of TRXTXTURNAROUNDHOLD field. */
#define RADIO_TIMINGENGINE_CONFIG_TRXTXTURNAROUNDHOLD_Msk (0x3FFUL << RADIO_TIMINGENGINE_CONFIG_TRXTXTURNAROUNDHOLD_Pos) /*!< Bit mask of TRXTXTURNAROUNDHOLD field. */

/* Bits 7..0 : Reduced timing for on-the-fly switch on both Rx-&gt;Tx and Tx-&gt;Rx (unit: 0.25us) */
#define RADIO_TIMINGENGINE_CONFIG_TREDUCETRXSWITCH_Pos (0UL) /*!< Position of TREDUCETRXSWITCH field. */
#define RADIO_TIMINGENGINE_CONFIG_TREDUCETRXSWITCH_Msk (0xFFUL << RADIO_TIMINGENGINE_CONFIG_TREDUCETRXSWITCH_Pos) /*!< Bit mask of TREDUCETRXSWITCH field. */

/* Register: RADIO_TIMINGENGINE_OVRENALL */
/* Description: Enable or disable override of signals */

/* Bits 30..28 : Override enable of PwrupRxTxRef */
#define RADIO_TIMINGENGINE_OVRENALL_OVRENPWRUPRXTXREF_Pos (28UL) /*!< Position of OVRENPWRUPRXTXREF field. */
#define RADIO_TIMINGENGINE_OVRENALL_OVRENPWRUPRXTXREF_Msk (0x7UL << RADIO_TIMINGENGINE_OVRENALL_OVRENPWRUPRXTXREF_Pos) /*!< Bit mask of OVRENPWRUPRXTXREF field. */

/* Bit 27 : Override enable of FsStart */
#define RADIO_TIMINGENGINE_OVRENALL_OVRENFSSTART_Pos (27UL) /*!< Position of OVRENFSSTART field. */
#define RADIO_TIMINGENGINE_OVRENALL_OVRENFSSTART_Msk (0x1UL << RADIO_TIMINGENGINE_OVRENALL_OVRENFSSTART_Pos) /*!< Bit mask of OVRENFSSTART field. */

/* Bit 26 : Override enable of ArstFs */
#define RADIO_TIMINGENGINE_OVRENALL_OVRENARSTFS_Pos (26UL) /*!< Position of OVRENARSTFS field. */
#define RADIO_TIMINGENGINE_OVRENALL_OVRENARSTFS_Msk (0x1UL << RADIO_TIMINGENGINE_OVRENALL_OVRENARSTFS_Pos) /*!< Bit mask of OVRENARSTFS field. */

/* Bit 25 : Override enable of PwrupFsDiv2g4Counter */
#define RADIO_TIMINGENGINE_OVRENALL_OVRENPWRUPFSDIV2G4COUNTER_Pos (25UL) /*!< Position of OVRENPWRUPFSDIV2G4COUNTER field. */
#define RADIO_TIMINGENGINE_OVRENALL_OVRENPWRUPFSDIV2G4COUNTER_Msk (0x1UL << RADIO_TIMINGENGINE_OVRENALL_OVRENPWRUPFSDIV2G4COUNTER_Pos) /*!< Bit mask of OVRENPWRUPFSDIV2G4COUNTER field. */

/* Bit 24 : Override enable of PwrupFsDiv2 */
#define RADIO_TIMINGENGINE_OVRENALL_OVRENPWRUPFSDIV2_Pos (24UL) /*!< Position of OVRENPWRUPFSDIV2 field. */
#define RADIO_TIMINGENGINE_OVRENALL_OVRENPWRUPFSDIV2_Msk (0x1UL << RADIO_TIMINGENGINE_OVRENALL_OVRENPWRUPFSDIV2_Pos) /*!< Bit mask of OVRENPWRUPFSDIV2 field. */

/* Bit 23 : Override enable of PwrupFsVco */
#define RADIO_TIMINGENGINE_OVRENALL_OVRENPWRUPFSVCO_Pos (23UL) /*!< Position of OVRENPWRUPFSVCO field. */
#define RADIO_TIMINGENGINE_OVRENALL_OVRENPWRUPFSVCO_Msk (0x1UL << RADIO_TIMINGENGINE_OVRENALL_OVRENPWRUPFSVCO_Pos) /*!< Bit mask of OVRENPWRUPFSVCO field. */

/* Bit 22 : Override enable of PwrupFsTdc */
#define RADIO_TIMINGENGINE_OVRENALL_OVRENPWRUPFSTDC_Pos (22UL) /*!< Position of OVRENPWRUPFSTDC field. */
#define RADIO_TIMINGENGINE_OVRENALL_OVRENPWRUPFSTDC_Msk (0x1UL << RADIO_TIMINGENGINE_OVRENALL_OVRENPWRUPFSTDC_Pos) /*!< Bit mask of OVRENPWRUPFSTDC field. */

/* Bit 21 : Override enable of PwrupFsDtc */
#define RADIO_TIMINGENGINE_OVRENALL_OVRENPWRUPFSDTC_Pos (21UL) /*!< Position of OVRENPWRUPFSDTC field. */
#define RADIO_TIMINGENGINE_OVRENALL_OVRENPWRUPFSDTC_Msk (0x1UL << RADIO_TIMINGENGINE_OVRENALL_OVRENPWRUPFSDTC_Pos) /*!< Bit mask of OVRENPWRUPFSDTC field. */

/* Bits 20..19 : Override enable of PwrupFsLdoTdc */
#define RADIO_TIMINGENGINE_OVRENALL_OVRENPWRUPFSLDOTDC_Pos (19UL) /*!< Position of OVRENPWRUPFSLDOTDC field. */
#define RADIO_TIMINGENGINE_OVRENALL_OVRENPWRUPFSLDOTDC_Msk (0x3UL << RADIO_TIMINGENGINE_OVRENALL_OVRENPWRUPFSLDOTDC_Pos) /*!< Bit mask of OVRENPWRUPFSLDOTDC field. */

/* Bits 18..17 : Override enable of PwrupFsLdoCnt */
#define RADIO_TIMINGENGINE_OVRENALL_OVRENPWRUPFSLDOCNT_Pos (17UL) /*!< Position of OVRENPWRUPFSLDOCNT field. */
#define RADIO_TIMINGENGINE_OVRENALL_OVRENPWRUPFSLDOCNT_Msk (0x3UL << RADIO_TIMINGENGINE_OVRENALL_OVRENPWRUPFSLDOCNT_Pos) /*!< Bit mask of OVRENPWRUPFSLDOCNT field. */

/* Bits 16..15 : Override enable of PwrupFsLdoDiv */
#define RADIO_TIMINGENGINE_OVRENALL_OVRENPWRUPFSLDODIV_Pos (15UL) /*!< Position of OVRENPWRUPFSLDODIV field. */
#define RADIO_TIMINGENGINE_OVRENALL_OVRENPWRUPFSLDODIV_Msk (0x3UL << RADIO_TIMINGENGINE_OVRENALL_OVRENPWRUPFSLDODIV_Pos) /*!< Bit mask of OVRENPWRUPFSLDODIV field. */

/* Bits 14..13 : Override enable of PwrupFsLdoDig */
#define RADIO_TIMINGENGINE_OVRENALL_OVRENPWRUPFSLDODIG_Pos (13UL) /*!< Position of OVRENPWRUPFSLDODIG field. */
#define RADIO_TIMINGENGINE_OVRENALL_OVRENPWRUPFSLDODIG_Msk (0x3UL << RADIO_TIMINGENGINE_OVRENALL_OVRENPWRUPFSLDODIG_Pos) /*!< Bit mask of OVRENPWRUPFSLDODIG field. */

/* Bits 12..11 : Override enable of PwrupFsLdoDtc */
#define RADIO_TIMINGENGINE_OVRENALL_OVRENPWRUPFSLDODTC_Pos (11UL) /*!< Position of OVRENPWRUPFSLDODTC field. */
#define RADIO_TIMINGENGINE_OVRENALL_OVRENPWRUPFSLDODTC_Msk (0x3UL << RADIO_TIMINGENGINE_OVRENALL_OVRENPWRUPFSLDODTC_Pos) /*!< Bit mask of OVRENPWRUPFSLDODTC field. */

/* Bits 10..9 : Override enable of PwrupFsLdoVco */
#define RADIO_TIMINGENGINE_OVRENALL_OVRENPWRUPFSLDOVCO_Pos (9UL) /*!< Position of OVRENPWRUPFSLDOVCO field. */
#define RADIO_TIMINGENGINE_OVRENALL_OVRENPWRUPFSLDOVCO_Msk (0x3UL << RADIO_TIMINGENGINE_OVRENALL_OVRENPWRUPFSLDOVCO_Pos) /*!< Bit mask of OVRENPWRUPFSLDOVCO field. */

/* Bits 8..6 : Override enable of RstFsLs */
#define RADIO_TIMINGENGINE_OVRENALL_OVRENRSTFSLS_Pos (6UL) /*!< Position of OVRENRSTFSLS field. */
#define RADIO_TIMINGENGINE_OVRENALL_OVRENRSTFSLS_Msk (0x7UL << RADIO_TIMINGENGINE_OVRENALL_OVRENRSTFSLS_Pos) /*!< Bit mask of OVRENRSTFSLS field. */

/* Bits 5..3 : Override enable of PwrupFsRef */
#define RADIO_TIMINGENGINE_OVRENALL_OVRENPWRUPFSREF_Pos (3UL) /*!< Position of OVRENPWRUPFSREF field. */
#define RADIO_TIMINGENGINE_OVRENALL_OVRENPWRUPFSREF_Msk (0x7UL << RADIO_TIMINGENGINE_OVRENALL_OVRENPWRUPFSREF_Pos) /*!< Bit mask of OVRENPWRUPFSREF field. */

/* Bits 2..1 : Override enable of PwrupRadio */
#define RADIO_TIMINGENGINE_OVRENALL_OVRENPWRUPRADIO_Pos (1UL) /*!< Position of OVRENPWRUPRADIO field. */
#define RADIO_TIMINGENGINE_OVRENALL_OVRENPWRUPRADIO_Msk (0x3UL << RADIO_TIMINGENGINE_OVRENALL_OVRENPWRUPRADIO_Pos) /*!< Bit mask of OVRENPWRUPRADIO field. */

/* Bit 0 : Override enable of RetainRadio */
#define RADIO_TIMINGENGINE_OVRENALL_OVRENRETAINRADIO_Pos (0UL) /*!< Position of OVRENRETAINRADIO field. */
#define RADIO_TIMINGENGINE_OVRENALL_OVRENRETAINRADIO_Msk (0x1UL << RADIO_TIMINGENGINE_OVRENALL_OVRENRETAINRADIO_Pos) /*!< Bit mask of OVRENRETAINRADIO field. */

/* Register: RADIO_TIMINGENGINE_OVRENRXTX */
/* Description: Enable or disable override of signals */

/* Bit 30 : Override enable of PwrupRxLnaPdet */
#define RADIO_TIMINGENGINE_OVRENRXTX_OVRENPWRUPRXLNAPDET_Pos (30UL) /*!< Position of OVRENPWRUPRXLNAPDET field. */
#define RADIO_TIMINGENGINE_OVRENRXTX_OVRENPWRUPRXLNAPDET_Msk (0x1UL << RADIO_TIMINGENGINE_OVRENRXTX_OVRENPWRUPRXLNAPDET_Pos) /*!< Bit mask of OVRENPWRUPRXLNAPDET field. */

/* Bit 29 : Override enable of rxDigEn */
#define RADIO_TIMINGENGINE_OVRENRXTX_OVRENRXDIGEN_Pos (29UL) /*!< Position of OVRENRXDIGEN field. */
#define RADIO_TIMINGENGINE_OVRENRXTX_OVRENRXDIGEN_Msk (0x1UL << RADIO_TIMINGENGINE_OVRENRXTX_OVRENRXDIGEN_Pos) /*!< Bit mask of OVRENRXDIGEN field. */

/* Bit 28 : Override enable of rxAgcEn */
#define RADIO_TIMINGENGINE_OVRENRXTX_OVRENRXAGCEN_Pos (28UL) /*!< Position of OVRENRXAGCEN field. */
#define RADIO_TIMINGENGINE_OVRENRXTX_OVRENRXAGCEN_Msk (0x1UL << RADIO_TIMINGENGINE_OVRENRXTX_OVRENRXAGCEN_Pos) /*!< Bit mask of OVRENRXAGCEN field. */

/* Bit 27 : Override enable of setRxIf */
#define RADIO_TIMINGENGINE_OVRENRXTX_OVRENSETRXIF_Pos (27UL) /*!< Position of OVRENSETRXIF field. */
#define RADIO_TIMINGENGINE_OVRENRXTX_OVRENSETRXIF_Msk (0x1UL << RADIO_TIMINGENGINE_OVRENRXTX_OVRENSETRXIF_Pos) /*!< Bit mask of OVRENSETRXIF field. */

/* Bit 26 : Override enable of PwrupExtPa */
#define RADIO_TIMINGENGINE_OVRENRXTX_OVRENPWRUPEXTPA_Pos (26UL) /*!< Position of OVRENPWRUPEXTPA field. */
#define RADIO_TIMINGENGINE_OVRENRXTX_OVRENPWRUPEXTPA_Msk (0x1UL << RADIO_TIMINGENGINE_OVRENRXTX_OVRENPWRUPEXTPA_Pos) /*!< Bit mask of OVRENPWRUPEXTPA field. */

/* Bit 25 : Override enable of PwrupExtLna */
#define RADIO_TIMINGENGINE_OVRENRXTX_OVRENPWRUPEXTLNA_Pos (25UL) /*!< Position of OVRENPWRUPEXTLNA field. */
#define RADIO_TIMINGENGINE_OVRENRXTX_OVRENPWRUPEXTLNA_Msk (0x1UL << RADIO_TIMINGENGINE_OVRENRXTX_OVRENPWRUPEXTLNA_Pos) /*!< Bit mask of OVRENPWRUPEXTLNA field. */

/* Bit 24 : Override enable of PwrupTxPa */
#define RADIO_TIMINGENGINE_OVRENRXTX_OVRENPWRUPTXPA_Pos (24UL) /*!< Position of OVRENPWRUPTXPA field. */
#define RADIO_TIMINGENGINE_OVRENRXTX_OVRENPWRUPTXPA_Msk (0x1UL << RADIO_TIMINGENGINE_OVRENRXTX_OVRENPWRUPTXPA_Pos) /*!< Bit mask of OVRENPWRUPTXPA field. */

/* Bit 23 : Override enable of PwrupTxPwrCtrl */
#define RADIO_TIMINGENGINE_OVRENRXTX_OVRENPWRUPTXPWRCTRL_Pos (23UL) /*!< Position of OVRENPWRUPTXPWRCTRL field. */
#define RADIO_TIMINGENGINE_OVRENRXTX_OVRENPWRUPTXPWRCTRL_Msk (0x1UL << RADIO_TIMINGENGINE_OVRENRXTX_OVRENPWRUPTXPWRCTRL_Pos) /*!< Bit mask of OVRENPWRUPTXPWRCTRL field. */

/* Bit 22 : Override enable of PwrupTx */
#define RADIO_TIMINGENGINE_OVRENRXTX_OVRENPWRUPTX_Pos (22UL) /*!< Position of OVRENPWRUPTX field. */
#define RADIO_TIMINGENGINE_OVRENRXTX_OVRENPWRUPTX_Msk (0x1UL << RADIO_TIMINGENGINE_OVRENRXTX_OVRENPWRUPTX_Pos) /*!< Bit mask of OVRENPWRUPTX field. */

/* Bits 21..16 : Override enable of PwrupTxLdo */
#define RADIO_TIMINGENGINE_OVRENRXTX_OVRENPWRUPTXLDO_Pos (16UL) /*!< Position of OVRENPWRUPTXLDO field. */
#define RADIO_TIMINGENGINE_OVRENRXTX_OVRENPWRUPTXLDO_Msk (0x3FUL << RADIO_TIMINGENGINE_OVRENRXTX_OVRENPWRUPTXLDO_Pos) /*!< Bit mask of OVRENPWRUPTXLDO field. */

/* Bit 15 : Override enable of ArstAdc */
#define RADIO_TIMINGENGINE_OVRENRXTX_OVRENARSTADC_Pos (15UL) /*!< Position of OVRENARSTADC field. */
#define RADIO_TIMINGENGINE_OVRENRXTX_OVRENARSTADC_Msk (0x1UL << RADIO_TIMINGENGINE_OVRENRXTX_OVRENARSTADC_Pos) /*!< Bit mask of OVRENARSTADC field. */

/* Bit 14 : Override enable of PwrupRxPkd */
#define RADIO_TIMINGENGINE_OVRENRXTX_OVRENPWRUPRXPKD_Pos (14UL) /*!< Position of OVRENPWRUPRXPKD field. */
#define RADIO_TIMINGENGINE_OVRENRXTX_OVRENPWRUPRXPKD_Msk (0x1UL << RADIO_TIMINGENGINE_OVRENRXTX_OVRENPWRUPRXPKD_Pos) /*!< Bit mask of OVRENPWRUPRXPKD field. */

/* Bits 13..12 : Override enable of PwrupRxSar */
#define RADIO_TIMINGENGINE_OVRENRXTX_OVRENPWRUPRXSAR_Pos (12UL) /*!< Position of OVRENPWRUPRXSAR field. */
#define RADIO_TIMINGENGINE_OVRENRXTX_OVRENPWRUPRXSAR_Msk (0x3UL << RADIO_TIMINGENGINE_OVRENRXTX_OVRENPWRUPRXSAR_Pos) /*!< Bit mask of OVRENPWRUPRXSAR field. */

/* Bit 11 : Override enable of PwrupRxAaf */
#define RADIO_TIMINGENGINE_OVRENRXTX_OVRENPWRUPRXAAF_Pos (11UL) /*!< Position of OVRENPWRUPRXAAF field. */
#define RADIO_TIMINGENGINE_OVRENRXTX_OVRENPWRUPRXAAF_Msk (0x1UL << RADIO_TIMINGENGINE_OVRENRXTX_OVRENPWRUPRXAAF_Pos) /*!< Bit mask of OVRENPWRUPRXAAF field. */

/* Bit 10 : Override enable of PwrupRx */
#define RADIO_TIMINGENGINE_OVRENRXTX_OVRENPWRUPRX_Pos (10UL) /*!< Position of OVRENPWRUPRX field. */
#define RADIO_TIMINGENGINE_OVRENRXTX_OVRENPWRUPRX_Msk (0x1UL << RADIO_TIMINGENGINE_OVRENRXTX_OVRENPWRUPRX_Pos) /*!< Bit mask of OVRENPWRUPRX field. */

/* Bit 9 : Override enable of PwrupRxMix */
#define RADIO_TIMINGENGINE_OVRENRXTX_OVRENPWRUPRXMIX_Pos (9UL) /*!< Position of OVRENPWRUPRXMIX field. */
#define RADIO_TIMINGENGINE_OVRENRXTX_OVRENPWRUPRXMIX_Msk (0x1UL << RADIO_TIMINGENGINE_OVRENRXTX_OVRENPWRUPRXMIX_Pos) /*!< Bit mask of OVRENPWRUPRXMIX field. */

/* Bit 8 : Override enable of PwrupRxLna */
#define RADIO_TIMINGENGINE_OVRENRXTX_OVRENPWRUPRXLNA_Pos (8UL) /*!< Position of OVRENPWRUPRXLNA field. */
#define RADIO_TIMINGENGINE_OVRENRXTX_OVRENPWRUPRXLNA_Msk (0x1UL << RADIO_TIMINGENGINE_OVRENRXTX_OVRENPWRUPRXLNA_Pos) /*!< Bit mask of OVRENPWRUPRXLNA field. */

/* Bits 7..2 : Override enable of PwrupRxLdo */
#define RADIO_TIMINGENGINE_OVRENRXTX_OVRENPWRUPRXLDO_Pos (2UL) /*!< Position of OVRENPWRUPRXLDO field. */
#define RADIO_TIMINGENGINE_OVRENRXTX_OVRENPWRUPRXLDO_Msk (0x3FUL << RADIO_TIMINGENGINE_OVRENRXTX_OVRENPWRUPRXLDO_Pos) /*!< Bit mask of OVRENPWRUPRXLDO field. */

/* Bits 1..0 : Override enable of RstRxLs */
#define RADIO_TIMINGENGINE_OVRENRXTX_OVRENRSTRXLS_Pos (0UL) /*!< Position of OVRENRSTRXLS field. */
#define RADIO_TIMINGENGINE_OVRENRXTX_OVRENRSTRXLS_Msk (0x3UL << RADIO_TIMINGENGINE_OVRENRXTX_OVRENRSTRXLS_Pos) /*!< Bit mask of OVRENRSTRXLS field. */

/* Register: RADIO_TIMINGENGINE_OVRVALALL */
/* Description: Set override values on signals */

/* Bits 30..28 : Override value of PwrupRxTxRef */
#define RADIO_TIMINGENGINE_OVRVALALL_OVRVALPWRUPRXTXREF_Pos (28UL) /*!< Position of OVRVALPWRUPRXTXREF field. */
#define RADIO_TIMINGENGINE_OVRVALALL_OVRVALPWRUPRXTXREF_Msk (0x7UL << RADIO_TIMINGENGINE_OVRVALALL_OVRVALPWRUPRXTXREF_Pos) /*!< Bit mask of OVRVALPWRUPRXTXREF field. */

/* Bit 27 : Override value of FsStart */
#define RADIO_TIMINGENGINE_OVRVALALL_OVRVALFSSTART_Pos (27UL) /*!< Position of OVRVALFSSTART field. */
#define RADIO_TIMINGENGINE_OVRVALALL_OVRVALFSSTART_Msk (0x1UL << RADIO_TIMINGENGINE_OVRVALALL_OVRVALFSSTART_Pos) /*!< Bit mask of OVRVALFSSTART field. */

/* Bit 26 : Override value of ArstFs */
#define RADIO_TIMINGENGINE_OVRVALALL_OVRVALARSTFS_Pos (26UL) /*!< Position of OVRVALARSTFS field. */
#define RADIO_TIMINGENGINE_OVRVALALL_OVRVALARSTFS_Msk (0x1UL << RADIO_TIMINGENGINE_OVRVALALL_OVRVALARSTFS_Pos) /*!< Bit mask of OVRVALARSTFS field. */

/* Bit 25 : Override value of PwrupFsDiv2g4Counter */
#define RADIO_TIMINGENGINE_OVRVALALL_OVRVALPWRUPFSDIV2G4COUNTER_Pos (25UL) /*!< Position of OVRVALPWRUPFSDIV2G4COUNTER field. */
#define RADIO_TIMINGENGINE_OVRVALALL_OVRVALPWRUPFSDIV2G4COUNTER_Msk (0x1UL << RADIO_TIMINGENGINE_OVRVALALL_OVRVALPWRUPFSDIV2G4COUNTER_Pos) /*!< Bit mask of OVRVALPWRUPFSDIV2G4COUNTER field. */

/* Bit 24 : Override value of PwrupFsDiv2 */
#define RADIO_TIMINGENGINE_OVRVALALL_OVRVALPWRUPFSDIV2_Pos (24UL) /*!< Position of OVRVALPWRUPFSDIV2 field. */
#define RADIO_TIMINGENGINE_OVRVALALL_OVRVALPWRUPFSDIV2_Msk (0x1UL << RADIO_TIMINGENGINE_OVRVALALL_OVRVALPWRUPFSDIV2_Pos) /*!< Bit mask of OVRVALPWRUPFSDIV2 field. */

/* Bit 23 : Override value of PwrupFsVco */
#define RADIO_TIMINGENGINE_OVRVALALL_OVRVALPWRUPFSVCO_Pos (23UL) /*!< Position of OVRVALPWRUPFSVCO field. */
#define RADIO_TIMINGENGINE_OVRVALALL_OVRVALPWRUPFSVCO_Msk (0x1UL << RADIO_TIMINGENGINE_OVRVALALL_OVRVALPWRUPFSVCO_Pos) /*!< Bit mask of OVRVALPWRUPFSVCO field. */

/* Bit 22 : Override value of PwrupFsTdc */
#define RADIO_TIMINGENGINE_OVRVALALL_OVRVALPWRUPFSTDC_Pos (22UL) /*!< Position of OVRVALPWRUPFSTDC field. */
#define RADIO_TIMINGENGINE_OVRVALALL_OVRVALPWRUPFSTDC_Msk (0x1UL << RADIO_TIMINGENGINE_OVRVALALL_OVRVALPWRUPFSTDC_Pos) /*!< Bit mask of OVRVALPWRUPFSTDC field. */

/* Bit 21 : Override value of PwrupFsDtc */
#define RADIO_TIMINGENGINE_OVRVALALL_OVRVALPWRUPFSDTC_Pos (21UL) /*!< Position of OVRVALPWRUPFSDTC field. */
#define RADIO_TIMINGENGINE_OVRVALALL_OVRVALPWRUPFSDTC_Msk (0x1UL << RADIO_TIMINGENGINE_OVRVALALL_OVRVALPWRUPFSDTC_Pos) /*!< Bit mask of OVRVALPWRUPFSDTC field. */

/* Bits 20..19 : Override value of PwrupFsLdoTdc */
#define RADIO_TIMINGENGINE_OVRVALALL_OVRVALPWRUPFSLDOTDC_Pos (19UL) /*!< Position of OVRVALPWRUPFSLDOTDC field. */
#define RADIO_TIMINGENGINE_OVRVALALL_OVRVALPWRUPFSLDOTDC_Msk (0x3UL << RADIO_TIMINGENGINE_OVRVALALL_OVRVALPWRUPFSLDOTDC_Pos) /*!< Bit mask of OVRVALPWRUPFSLDOTDC field. */

/* Bits 18..17 : Override value of PwrupFsLdoCnt */
#define RADIO_TIMINGENGINE_OVRVALALL_OVRVALPWRUPFSLDOCNT_Pos (17UL) /*!< Position of OVRVALPWRUPFSLDOCNT field. */
#define RADIO_TIMINGENGINE_OVRVALALL_OVRVALPWRUPFSLDOCNT_Msk (0x3UL << RADIO_TIMINGENGINE_OVRVALALL_OVRVALPWRUPFSLDOCNT_Pos) /*!< Bit mask of OVRVALPWRUPFSLDOCNT field. */

/* Bits 16..15 : Override value of PwrupFsLdoDiv */
#define RADIO_TIMINGENGINE_OVRVALALL_OVRVALPWRUPFSLDODIV_Pos (15UL) /*!< Position of OVRVALPWRUPFSLDODIV field. */
#define RADIO_TIMINGENGINE_OVRVALALL_OVRVALPWRUPFSLDODIV_Msk (0x3UL << RADIO_TIMINGENGINE_OVRVALALL_OVRVALPWRUPFSLDODIV_Pos) /*!< Bit mask of OVRVALPWRUPFSLDODIV field. */

/* Bits 14..13 : Override value of PwrupFsLdoDig */
#define RADIO_TIMINGENGINE_OVRVALALL_OVRVALPWRUPFSLDODIG_Pos (13UL) /*!< Position of OVRVALPWRUPFSLDODIG field. */
#define RADIO_TIMINGENGINE_OVRVALALL_OVRVALPWRUPFSLDODIG_Msk (0x3UL << RADIO_TIMINGENGINE_OVRVALALL_OVRVALPWRUPFSLDODIG_Pos) /*!< Bit mask of OVRVALPWRUPFSLDODIG field. */

/* Bits 12..11 : Override value of PwrupFsLdoDtc */
#define RADIO_TIMINGENGINE_OVRVALALL_OVRVALPWRUPFSLDODTC_Pos (11UL) /*!< Position of OVRVALPWRUPFSLDODTC field. */
#define RADIO_TIMINGENGINE_OVRVALALL_OVRVALPWRUPFSLDODTC_Msk (0x3UL << RADIO_TIMINGENGINE_OVRVALALL_OVRVALPWRUPFSLDODTC_Pos) /*!< Bit mask of OVRVALPWRUPFSLDODTC field. */

/* Bits 10..9 : Override value of PwrupFsLdoVco */
#define RADIO_TIMINGENGINE_OVRVALALL_OVRVALPWRUPFSLDOVCO_Pos (9UL) /*!< Position of OVRVALPWRUPFSLDOVCO field. */
#define RADIO_TIMINGENGINE_OVRVALALL_OVRVALPWRUPFSLDOVCO_Msk (0x3UL << RADIO_TIMINGENGINE_OVRVALALL_OVRVALPWRUPFSLDOVCO_Pos) /*!< Bit mask of OVRVALPWRUPFSLDOVCO field. */

/* Bits 8..6 : Override value of RstFsLs */
#define RADIO_TIMINGENGINE_OVRVALALL_OVRVALRSTFSLS_Pos (6UL) /*!< Position of OVRVALRSTFSLS field. */
#define RADIO_TIMINGENGINE_OVRVALALL_OVRVALRSTFSLS_Msk (0x7UL << RADIO_TIMINGENGINE_OVRVALALL_OVRVALRSTFSLS_Pos) /*!< Bit mask of OVRVALRSTFSLS field. */

/* Bits 5..3 : Override value of PwrupFsRef */
#define RADIO_TIMINGENGINE_OVRVALALL_OVRVALPWRUPFSREF_Pos (3UL) /*!< Position of OVRVALPWRUPFSREF field. */
#define RADIO_TIMINGENGINE_OVRVALALL_OVRVALPWRUPFSREF_Msk (0x7UL << RADIO_TIMINGENGINE_OVRVALALL_OVRVALPWRUPFSREF_Pos) /*!< Bit mask of OVRVALPWRUPFSREF field. */

/* Bits 2..1 : Override value of PwrupRadio */
#define RADIO_TIMINGENGINE_OVRVALALL_OVRVALPWRUPRADIO_Pos (1UL) /*!< Position of OVRVALPWRUPRADIO field. */
#define RADIO_TIMINGENGINE_OVRVALALL_OVRVALPWRUPRADIO_Msk (0x3UL << RADIO_TIMINGENGINE_OVRVALALL_OVRVALPWRUPRADIO_Pos) /*!< Bit mask of OVRVALPWRUPRADIO field. */

/* Bit 0 : Override value of RetainRadio */
#define RADIO_TIMINGENGINE_OVRVALALL_OVRVALRETAINRADIO_Pos (0UL) /*!< Position of OVRVALRETAINRADIO field. */
#define RADIO_TIMINGENGINE_OVRVALALL_OVRVALRETAINRADIO_Msk (0x1UL << RADIO_TIMINGENGINE_OVRVALALL_OVRVALRETAINRADIO_Pos) /*!< Bit mask of OVRVALRETAINRADIO field. */

/* Register: RADIO_TIMINGENGINE_OVRVALRXTX */
/* Description: Set override values on signals */

/* Bit 30 : Override value of PwrupRxLnaPdet */
#define RADIO_TIMINGENGINE_OVRVALRXTX_OVRVALPWRUPRXLNAPDET_Pos (30UL) /*!< Position of OVRVALPWRUPRXLNAPDET field. */
#define RADIO_TIMINGENGINE_OVRVALRXTX_OVRVALPWRUPRXLNAPDET_Msk (0x1UL << RADIO_TIMINGENGINE_OVRVALRXTX_OVRVALPWRUPRXLNAPDET_Pos) /*!< Bit mask of OVRVALPWRUPRXLNAPDET field. */

/* Bit 29 : Override value of rxDigEn */
#define RADIO_TIMINGENGINE_OVRVALRXTX_OVRVALRXDIGEN_Pos (29UL) /*!< Position of OVRVALRXDIGEN field. */
#define RADIO_TIMINGENGINE_OVRVALRXTX_OVRVALRXDIGEN_Msk (0x1UL << RADIO_TIMINGENGINE_OVRVALRXTX_OVRVALRXDIGEN_Pos) /*!< Bit mask of OVRVALRXDIGEN field. */

/* Bit 28 : Override value of rxAgcEn */
#define RADIO_TIMINGENGINE_OVRVALRXTX_OVRVALRXAGCEN_Pos (28UL) /*!< Position of OVRVALRXAGCEN field. */
#define RADIO_TIMINGENGINE_OVRVALRXTX_OVRVALRXAGCEN_Msk (0x1UL << RADIO_TIMINGENGINE_OVRVALRXTX_OVRVALRXAGCEN_Pos) /*!< Bit mask of OVRVALRXAGCEN field. */

/* Bit 27 : Override value of setRxIf */
#define RADIO_TIMINGENGINE_OVRVALRXTX_OVRVALSETRXIF_Pos (27UL) /*!< Position of OVRVALSETRXIF field. */
#define RADIO_TIMINGENGINE_OVRVALRXTX_OVRVALSETRXIF_Msk (0x1UL << RADIO_TIMINGENGINE_OVRVALRXTX_OVRVALSETRXIF_Pos) /*!< Bit mask of OVRVALSETRXIF field. */

/* Bit 26 : Override value of PwrupExtPa */
#define RADIO_TIMINGENGINE_OVRVALRXTX_OVRVALPWRUPEXTPA_Pos (26UL) /*!< Position of OVRVALPWRUPEXTPA field. */
#define RADIO_TIMINGENGINE_OVRVALRXTX_OVRVALPWRUPEXTPA_Msk (0x1UL << RADIO_TIMINGENGINE_OVRVALRXTX_OVRVALPWRUPEXTPA_Pos) /*!< Bit mask of OVRVALPWRUPEXTPA field. */

/* Bit 25 : Override value of PwrupExtLna */
#define RADIO_TIMINGENGINE_OVRVALRXTX_OVRVALPWRUPEXTLNA_Pos (25UL) /*!< Position of OVRVALPWRUPEXTLNA field. */
#define RADIO_TIMINGENGINE_OVRVALRXTX_OVRVALPWRUPEXTLNA_Msk (0x1UL << RADIO_TIMINGENGINE_OVRVALRXTX_OVRVALPWRUPEXTLNA_Pos) /*!< Bit mask of OVRVALPWRUPEXTLNA field. */

/* Bit 24 : Override value of PwrupTxPa */
#define RADIO_TIMINGENGINE_OVRVALRXTX_OVRVALPWRUPTXPA_Pos (24UL) /*!< Position of OVRVALPWRUPTXPA field. */
#define RADIO_TIMINGENGINE_OVRVALRXTX_OVRVALPWRUPTXPA_Msk (0x1UL << RADIO_TIMINGENGINE_OVRVALRXTX_OVRVALPWRUPTXPA_Pos) /*!< Bit mask of OVRVALPWRUPTXPA field. */

/* Bit 23 : Override value of PwrupTxPwrCtrl */
#define RADIO_TIMINGENGINE_OVRVALRXTX_OVRVALPWRUPTXPWRCTRL_Pos (23UL) /*!< Position of OVRVALPWRUPTXPWRCTRL field. */
#define RADIO_TIMINGENGINE_OVRVALRXTX_OVRVALPWRUPTXPWRCTRL_Msk (0x1UL << RADIO_TIMINGENGINE_OVRVALRXTX_OVRVALPWRUPTXPWRCTRL_Pos) /*!< Bit mask of OVRVALPWRUPTXPWRCTRL field. */

/* Bit 22 : Override value of PwrupTx */
#define RADIO_TIMINGENGINE_OVRVALRXTX_OVRVALPWRUPTX_Pos (22UL) /*!< Position of OVRVALPWRUPTX field. */
#define RADIO_TIMINGENGINE_OVRVALRXTX_OVRVALPWRUPTX_Msk (0x1UL << RADIO_TIMINGENGINE_OVRVALRXTX_OVRVALPWRUPTX_Pos) /*!< Bit mask of OVRVALPWRUPTX field. */

/* Bits 21..16 : Override value of PwrupTxLdo */
#define RADIO_TIMINGENGINE_OVRVALRXTX_OVRVALPWRUPTXLDO_Pos (16UL) /*!< Position of OVRVALPWRUPTXLDO field. */
#define RADIO_TIMINGENGINE_OVRVALRXTX_OVRVALPWRUPTXLDO_Msk (0x3FUL << RADIO_TIMINGENGINE_OVRVALRXTX_OVRVALPWRUPTXLDO_Pos) /*!< Bit mask of OVRVALPWRUPTXLDO field. */

/* Bit 15 : Override value of ArstAdc */
#define RADIO_TIMINGENGINE_OVRVALRXTX_OVRVALARSTADC_Pos (15UL) /*!< Position of OVRVALARSTADC field. */
#define RADIO_TIMINGENGINE_OVRVALRXTX_OVRVALARSTADC_Msk (0x1UL << RADIO_TIMINGENGINE_OVRVALRXTX_OVRVALARSTADC_Pos) /*!< Bit mask of OVRVALARSTADC field. */

/* Bit 14 : Override value of PwrupRxPkd */
#define RADIO_TIMINGENGINE_OVRVALRXTX_OVRVALPWRUPRXPKD_Pos (14UL) /*!< Position of OVRVALPWRUPRXPKD field. */
#define RADIO_TIMINGENGINE_OVRVALRXTX_OVRVALPWRUPRXPKD_Msk (0x1UL << RADIO_TIMINGENGINE_OVRVALRXTX_OVRVALPWRUPRXPKD_Pos) /*!< Bit mask of OVRVALPWRUPRXPKD field. */

/* Bits 13..12 : Override value of PwrupRxSar */
#define RADIO_TIMINGENGINE_OVRVALRXTX_OVRVALPWRUPRXSAR_Pos (12UL) /*!< Position of OVRVALPWRUPRXSAR field. */
#define RADIO_TIMINGENGINE_OVRVALRXTX_OVRVALPWRUPRXSAR_Msk (0x3UL << RADIO_TIMINGENGINE_OVRVALRXTX_OVRVALPWRUPRXSAR_Pos) /*!< Bit mask of OVRVALPWRUPRXSAR field. */

/* Bit 11 : Override value of PwrupRxAaf */
#define RADIO_TIMINGENGINE_OVRVALRXTX_OVRVALPWRUPRXAAF_Pos (11UL) /*!< Position of OVRVALPWRUPRXAAF field. */
#define RADIO_TIMINGENGINE_OVRVALRXTX_OVRVALPWRUPRXAAF_Msk (0x1UL << RADIO_TIMINGENGINE_OVRVALRXTX_OVRVALPWRUPRXAAF_Pos) /*!< Bit mask of OVRVALPWRUPRXAAF field. */

/* Bit 10 : Override value of PwrupRx */
#define RADIO_TIMINGENGINE_OVRVALRXTX_OVRVALPWRUPRX_Pos (10UL) /*!< Position of OVRVALPWRUPRX field. */
#define RADIO_TIMINGENGINE_OVRVALRXTX_OVRVALPWRUPRX_Msk (0x1UL << RADIO_TIMINGENGINE_OVRVALRXTX_OVRVALPWRUPRX_Pos) /*!< Bit mask of OVRVALPWRUPRX field. */

/* Bit 9 : Override value of PwrupRxMix */
#define RADIO_TIMINGENGINE_OVRVALRXTX_OVRVALPWRUPRXMIX_Pos (9UL) /*!< Position of OVRVALPWRUPRXMIX field. */
#define RADIO_TIMINGENGINE_OVRVALRXTX_OVRVALPWRUPRXMIX_Msk (0x1UL << RADIO_TIMINGENGINE_OVRVALRXTX_OVRVALPWRUPRXMIX_Pos) /*!< Bit mask of OVRVALPWRUPRXMIX field. */

/* Bit 8 : Override value of PwrupRxLna */
#define RADIO_TIMINGENGINE_OVRVALRXTX_OVRVALPWRUPRXLNA_Pos (8UL) /*!< Position of OVRVALPWRUPRXLNA field. */
#define RADIO_TIMINGENGINE_OVRVALRXTX_OVRVALPWRUPRXLNA_Msk (0x1UL << RADIO_TIMINGENGINE_OVRVALRXTX_OVRVALPWRUPRXLNA_Pos) /*!< Bit mask of OVRVALPWRUPRXLNA field. */

/* Bits 7..2 : Override value of PwrupRxLdo */
#define RADIO_TIMINGENGINE_OVRVALRXTX_OVRVALPWRUPRXLDO_Pos (2UL) /*!< Position of OVRVALPWRUPRXLDO field. */
#define RADIO_TIMINGENGINE_OVRVALRXTX_OVRVALPWRUPRXLDO_Msk (0x3FUL << RADIO_TIMINGENGINE_OVRVALRXTX_OVRVALPWRUPRXLDO_Pos) /*!< Bit mask of OVRVALPWRUPRXLDO field. */

/* Bits 1..0 : Override value of RstRxLs */
#define RADIO_TIMINGENGINE_OVRVALRXTX_OVRVALRSTRXLS_Pos (0UL) /*!< Position of OVRVALRSTRXLS field. */
#define RADIO_TIMINGENGINE_OVRVALRXTX_OVRVALRSTRXLS_Msk (0x3UL << RADIO_TIMINGENGINE_OVRVALRXTX_OVRVALRSTRXLS_Pos) /*!< Bit mask of OVRVALRSTRXLS field. */

/* Register: RADIO_TIMINGENGINE_MODEDEPENDENT2 */
/* Description: Mode dependent timing controls */

/* Bit 8 : Turn off radio with regards to txDataValid in addition to radioEn */
#define RADIO_TIMINGENGINE_MODEDEPENDENT2_TURNOFFRADIOWRTTXDATAVALID_Pos (8UL) /*!< Position of TURNOFFRADIOWRTTXDATAVALID field. */
#define RADIO_TIMINGENGINE_MODEDEPENDENT2_TURNOFFRADIOWRTTXDATAVALID_Msk (0x1UL << RADIO_TIMINGENGINE_MODEDEPENDENT2_TURNOFFRADIOWRTTXDATAVALID_Pos) /*!< Bit mask of TURNOFFRADIOWRTTXDATAVALID field. */

/* Bits 4..0 : Additional offset in Rx mode, for Rx to be able to be ready earlier, which is required for 2Mbps */
#define RADIO_TIMINGENGINE_MODEDEPENDENT2_TTXRXTURNAROUNDDELTA_Pos (0UL) /*!< Position of TTXRXTURNAROUNDDELTA field. */
#define RADIO_TIMINGENGINE_MODEDEPENDENT2_TTXRXTURNAROUNDDELTA_Msk (0x1FUL << RADIO_TIMINGENGINE_MODEDEPENDENT2_TTXRXTURNAROUNDDELTA_Pos) /*!< Bit mask of TTXRXTURNAROUNDDELTA field. */

/* Register: RADIO_RXAGC_GAIN */
/* Description: Gain boundary settings and gain steps */

/* Bits 31..28 : gain step for decreasing IF gain */
#define RADIO_RXAGC_GAIN_AGCIFGAINSTEPDOWN_Pos (28UL) /*!< Position of AGCIFGAINSTEPDOWN field. */
#define RADIO_RXAGC_GAIN_AGCIFGAINSTEPDOWN_Msk (0xFUL << RADIO_RXAGC_GAIN_AGCIFGAINSTEPDOWN_Pos) /*!< Bit mask of AGCIFGAINSTEPDOWN field. */

/* Bits 27..24 : gain step for increasing IF gain */
#define RADIO_RXAGC_GAIN_AGCIFGAINSTEPUP_Pos (24UL) /*!< Position of AGCIFGAINSTEPUP field. */
#define RADIO_RXAGC_GAIN_AGCIFGAINSTEPUP_Msk (0xFUL << RADIO_RXAGC_GAIN_AGCIFGAINSTEPUP_Pos) /*!< Bit mask of AGCIFGAINSTEPUP field. */

/* Bits 23..20 : Minimum gain of IF gain */
#define RADIO_RXAGC_GAIN_AGCIFGAINMIN_Pos (20UL) /*!< Position of AGCIFGAINMIN field. */
#define RADIO_RXAGC_GAIN_AGCIFGAINMIN_Msk (0xFUL << RADIO_RXAGC_GAIN_AGCIFGAINMIN_Pos) /*!< Bit mask of AGCIFGAINMIN field. */

/* Bits 19..16 : Maximum gain of IF gain */
#define RADIO_RXAGC_GAIN_AGCIFGAINMAX_Pos (16UL) /*!< Position of AGCIFGAINMAX field. */
#define RADIO_RXAGC_GAIN_AGCIFGAINMAX_Msk (0xFUL << RADIO_RXAGC_GAIN_AGCIFGAINMAX_Pos) /*!< Bit mask of AGCIFGAINMAX field. */

/* Bits 15..12 : gain step for decreasing RF gain */
#define RADIO_RXAGC_GAIN_AGCRFGAINSTEPDOWN_Pos (12UL) /*!< Position of AGCRFGAINSTEPDOWN field. */
#define RADIO_RXAGC_GAIN_AGCRFGAINSTEPDOWN_Msk (0xFUL << RADIO_RXAGC_GAIN_AGCRFGAINSTEPDOWN_Pos) /*!< Bit mask of AGCRFGAINSTEPDOWN field. */

/* Bits 11..8 : gain step for increasing RF gain */
#define RADIO_RXAGC_GAIN_AGCRFGAINSTEPUP_Pos (8UL) /*!< Position of AGCRFGAINSTEPUP field. */
#define RADIO_RXAGC_GAIN_AGCRFGAINSTEPUP_Msk (0xFUL << RADIO_RXAGC_GAIN_AGCRFGAINSTEPUP_Pos) /*!< Bit mask of AGCRFGAINSTEPUP field. */

/* Bits 7..4 : Minimum gain of RF gain */
#define RADIO_RXAGC_GAIN_AGCRFGAINMIN_Pos (4UL) /*!< Position of AGCRFGAINMIN field. */
#define RADIO_RXAGC_GAIN_AGCRFGAINMIN_Msk (0xFUL << RADIO_RXAGC_GAIN_AGCRFGAINMIN_Pos) /*!< Bit mask of AGCRFGAINMIN field. */

/* Bits 3..0 : Maximum gain of RF gain */
#define RADIO_RXAGC_GAIN_AGCRFGAINMAX_Pos (0UL) /*!< Position of AGCRFGAINMAX field. */
#define RADIO_RXAGC_GAIN_AGCRFGAINMAX_Msk (0xFUL << RADIO_RXAGC_GAIN_AGCRFGAINMAX_Pos) /*!< Bit mask of AGCRFGAINMAX field. */

/* Register: RADIO_RXAGC_CONFIG */
/* Description: Configuration to adjust gain control loop */

/* Bit 31 : Gain reversion. 0: reduce IF gain before RF gain, 1: reduce RF gain before IF gain. */
#define RADIO_RXAGC_CONFIG_AGCENABLEGAINREVERT_Pos (31UL) /*!< Position of AGCENABLEGAINREVERT field. */
#define RADIO_RXAGC_CONFIG_AGCENABLEGAINREVERT_Msk (0x1UL << RADIO_RXAGC_CONFIG_AGCENABLEGAINREVERT_Pos) /*!< Bit mask of AGCENABLEGAINREVERT field. */

/* Bits 30..29 : Enable(1) or disable(0) functional testmode for AGC */
#define RADIO_RXAGC_CONFIG_AGCTOGGLE_Pos (29UL) /*!< Position of AGCTOGGLE field. */
#define RADIO_RXAGC_CONFIG_AGCTOGGLE_Msk (0x3UL << RADIO_RXAGC_CONFIG_AGCTOGGLE_Pos) /*!< Bit mask of AGCTOGGLE field. */

/* Bit 28 : 0: AGC takes control of all gains, 1: Control all gains (aafGain, mixGain, lnaGain) from registers */
#define RADIO_RXAGC_CONFIG_AGCOVERRIDEGAIN_Pos (28UL) /*!< Position of AGCOVERRIDEGAIN field. */
#define RADIO_RXAGC_CONFIG_AGCOVERRIDEGAIN_Msk (0x1UL << RADIO_RXAGC_CONFIG_AGCOVERRIDEGAIN_Pos) /*!< Bit mask of AGCOVERRIDEGAIN field. */

/* Bits 23..22 : Override value for lnaGain */
#define RADIO_RXAGC_CONFIG_AGCLNAOVERRIDE_Pos (22UL) /*!< Position of AGCLNAOVERRIDE field. */
#define RADIO_RXAGC_CONFIG_AGCLNAOVERRIDE_Msk (0x3UL << RADIO_RXAGC_CONFIG_AGCLNAOVERRIDE_Pos) /*!< Bit mask of AGCLNAOVERRIDE field. */

/* Bit 21 : Override value for mixGain */
#define RADIO_RXAGC_CONFIG_AGCMIXOVERRIDE_Pos (21UL) /*!< Position of AGCMIXOVERRIDE field. */
#define RADIO_RXAGC_CONFIG_AGCMIXOVERRIDE_Msk (0x1UL << RADIO_RXAGC_CONFIG_AGCMIXOVERRIDE_Pos) /*!< Bit mask of AGCMIXOVERRIDE field. */

/* Bits 20..17 : Override value for aafGain */
#define RADIO_RXAGC_CONFIG_AGCAAFOVERRIDE_Pos (17UL) /*!< Position of AGCAAFOVERRIDE field. */
#define RADIO_RXAGC_CONFIG_AGCAAFOVERRIDE_Msk (0xFUL << RADIO_RXAGC_CONFIG_AGCAAFOVERRIDE_Pos) /*!< Bit mask of AGCAAFOVERRIDE field. */

/* Bits 16..11 : The number of clock cycles between each adjustment of the gain while addressMatch is high */
#define RADIO_RXAGC_CONFIG_AGCWAITPACKET_Pos (11UL) /*!< Position of AGCWAITPACKET field. */
#define RADIO_RXAGC_CONFIG_AGCWAITPACKET_Msk (0x3FUL << RADIO_RXAGC_CONFIG_AGCWAITPACKET_Pos) /*!< Bit mask of AGCWAITPACKET field. */

/* Bits 10..5 : The number of clock cycles between each adjustment of the gain while addressMatch is low */
#define RADIO_RXAGC_CONFIG_AGCWAIT_Pos (5UL) /*!< Position of AGCWAIT field. */
#define RADIO_RXAGC_CONFIG_AGCWAIT_Msk (0x3FUL << RADIO_RXAGC_CONFIG_AGCWAIT_Pos) /*!< Bit mask of AGCWAIT field. */

/* Bits 4..1 : The number of clock cycles after the adjustment of gain that the reset signal to the RF peak detector is set high */
#define RADIO_RXAGC_CONFIG_AGCRFPKDETRESETCOUNT_Pos (1UL) /*!< Position of AGCRFPKDETRESETCOUNT field. */
#define RADIO_RXAGC_CONFIG_AGCRFPKDETRESETCOUNT_Msk (0xFUL << RADIO_RXAGC_CONFIG_AGCRFPKDETRESETCOUNT_Pos) /*!< Bit mask of AGCRFPKDETRESETCOUNT field. */

/* Bit 0 : Causes the RF gain to be decreased and the IF gain to be increased if the overall gain can be maintained */
#define RADIO_RXAGC_CONFIG_AGCENABLEGAINSWITCH_Pos (0UL) /*!< Position of AGCENABLEGAINSWITCH field. */
#define RADIO_RXAGC_CONFIG_AGCENABLEGAINSWITCH_Msk (0x1UL << RADIO_RXAGC_CONFIG_AGCENABLEGAINSWITCH_Pos) /*!< Bit mask of AGCENABLEGAINSWITCH field. */

/* Register: RADIO_RXAGC_CALIBRATION */
/* Description: Calibrate RSSI and Energy Detect values */

/* Bits 13..7 : 802154 Energy Detect calibration value */
#define RADIO_RXAGC_CALIBRATION_ED154CAL_Pos (7UL) /*!< Position of ED154CAL field. */
#define RADIO_RXAGC_CALIBRATION_ED154CAL_Msk (0x7FUL << RADIO_RXAGC_CALIBRATION_ED154CAL_Pos) /*!< Bit mask of ED154CAL field. */

/* Bits 6..0 : RSSI calibration value */
#define RADIO_RXAGC_CALIBRATION_RSSICAL_Pos (0UL) /*!< Position of RSSICAL field. */
#define RADIO_RXAGC_CALIBRATION_RSSICAL_Msk (0x7FUL << RADIO_RXAGC_CALIBRATION_RSSICAL_Pos) /*!< Bit mask of RSSICAL field. */

/* Register: RADIO_RXAGC_STATUS */
/* Description: Readout latest gain control status */

/* Bits 29..28 : BB peak detector output. Represent state[1:0] in RxAgc. */
#define RADIO_RXAGC_STATUS_BBPKDET_Pos (28UL) /*!< Position of BBPKDET field. */
#define RADIO_RXAGC_STATUS_BBPKDET_Msk (0x3UL << RADIO_RXAGC_STATUS_BBPKDET_Pos) /*!< Bit mask of BBPKDET field. */

/* Bits 27..26 : IF peak detector output. Represent state[3:2] in RxAgc. */
#define RADIO_RXAGC_STATUS_IFPKDET_Pos (26UL) /*!< Position of IFPKDET field. */
#define RADIO_RXAGC_STATUS_IFPKDET_Msk (0x3UL << RADIO_RXAGC_STATUS_IFPKDET_Pos) /*!< Bit mask of IFPKDET field. */

/* Bits 25..24 : RF peak detector output after sync. Represent state[5:4] in RxAgc. */
#define RADIO_RXAGC_STATUS_RFPKDET_Pos (24UL) /*!< Position of RFPKDET field. */
#define RADIO_RXAGC_STATUS_RFPKDET_Msk (0x3UL << RADIO_RXAGC_STATUS_RFPKDET_Pos) /*!< Bit mask of RFPKDET field. */

/* Bits 17..16 : Raw LNA gain status */
#define RADIO_RXAGC_STATUS_LNAGAIN_Pos (16UL) /*!< Position of LNAGAIN field. */
#define RADIO_RXAGC_STATUS_LNAGAIN_Msk (0x3UL << RADIO_RXAGC_STATUS_LNAGAIN_Pos) /*!< Bit mask of LNAGAIN field. */

/* Bit 12 : Raw mixer gain status */
#define RADIO_RXAGC_STATUS_MIXGAIN_Pos (12UL) /*!< Position of MIXGAIN field. */
#define RADIO_RXAGC_STATUS_MIXGAIN_Msk (0x1UL << RADIO_RXAGC_STATUS_MIXGAIN_Pos) /*!< Bit mask of MIXGAIN field. */

/* Bits 11..8 : Raw AAF gain status */
#define RADIO_RXAGC_STATUS_AAFGAIN_Pos (8UL) /*!< Position of AAFGAIN field. */
#define RADIO_RXAGC_STATUS_AAFGAIN_Msk (0xFUL << RADIO_RXAGC_STATUS_AAFGAIN_Pos) /*!< Bit mask of AAFGAIN field. */

/* Bits 6..0 : Raw status of received signal strength indicator, directly from RxAgc without buffering */
#define RADIO_RXAGC_STATUS_RSSI_Pos (0UL) /*!< Position of RSSI field. */
#define RADIO_RXAGC_STATUS_RSSI_Msk (0x7FUL << RADIO_RXAGC_STATUS_RSSI_Pos) /*!< Bit mask of RSSI field. */

/* Register: RADIO_RXIF_RXPEAKDETECT */
/* Description: Configuration of IF Rx peak detector */

/* Bits 29..24 : Constant output reduction step */
#define RADIO_RXIF_RXPEAKDETECT_DECAYSTEP_Pos (24UL) /*!< Position of DECAYSTEP field. */
#define RADIO_RXIF_RXPEAKDETECT_DECAYSTEP_Msk (0x3FUL << RADIO_RXIF_RXPEAKDETECT_DECAYSTEP_Pos) /*!< Bit mask of DECAYSTEP field. */

/* Bits 23..12 : Low threshold of IF peak detector. This valued is based on the 11-bits ADC of SPHYNX_ANA. */
#define RADIO_RXIF_RXPEAKDETECT_LOWTHRES_Pos (12UL) /*!< Position of LOWTHRES field. */
#define RADIO_RXIF_RXPEAKDETECT_LOWTHRES_Msk (0xFFFUL << RADIO_RXIF_RXPEAKDETECT_LOWTHRES_Pos) /*!< Bit mask of LOWTHRES field. */

/* Bits 11..0 : High threshold of IF peak detector. This valued is based on the 11-bits ADC of SPHYNX_ANA. */
#define RADIO_RXIF_RXPEAKDETECT_HIGHTHRES_Pos (0UL) /*!< Position of HIGHTHRES field. */
#define RADIO_RXIF_RXPEAKDETECT_HIGHTHRES_Msk (0xFFFUL << RADIO_RXIF_RXPEAKDETECT_HIGHTHRES_Pos) /*!< Bit mask of HIGHTHRES field. */

/* Register: RADIO_BITCONVERTER */
/* Description: Configuration of ADC output to digital front-end */

/* Bits 23..12 : ADC offset compensation of channel Q (signed) */
#define RADIO_BITCONVERTER_FINALCALOFFSETQ_Pos (12UL) /*!< Position of FINALCALOFFSETQ field. */
#define RADIO_BITCONVERTER_FINALCALOFFSETQ_Msk (0xFFFUL << RADIO_BITCONVERTER_FINALCALOFFSETQ_Pos) /*!< Bit mask of FINALCALOFFSETQ field. */

/* Bits 11..0 : ADC offset compensation of channel I (signed) */
#define RADIO_BITCONVERTER_FINALCALOFFSETI_Pos (0UL) /*!< Position of FINALCALOFFSETI field. */
#define RADIO_BITCONVERTER_FINALCALOFFSETI_Msk (0xFFFUL << RADIO_BITCONVERTER_FINALCALOFFSETI_Pos) /*!< Bit mask of FINALCALOFFSETI field. */

/* Register: RADIO_DATAACQVIADMA */
/* Description: Data acquisition settings. Only available when INCLUDE_DMA is set to 1 */

/* Bit 7 : Set high to enable data acquisition */
#define RADIO_DATAACQVIADMA_DATAACQENABLE_Pos (7UL) /*!< Position of DATAACQENABLE field. */
#define RADIO_DATAACQVIADMA_DATAACQENABLE_Msk (0x1UL << RADIO_DATAACQVIADMA_DATAACQENABLE_Pos) /*!< Bit mask of DATAACQENABLE field. */

/* Bits 1..0 : Which of 4 existing mode it is running (each mode correspond the a particular set of data to be logged) */
#define RADIO_DATAACQVIADMA_DATACAPTUREMODESELECT_Pos (0UL) /*!< Position of DATACAPTUREMODESELECT field. */
#define RADIO_DATAACQVIADMA_DATACAPTUREMODESELECT_Msk (0x3UL << RADIO_DATAACQVIADMA_DATACAPTUREMODESELECT_Pos) /*!< Bit mask of DATACAPTUREMODESELECT field. */

/* Register: RADIO_DEBUGRADIOPHY */
/* Description: Debug for radio PHY */

/* Bit 12 : 1: short RCCAL_CODE[3:0] to RX_AAF_RCTRIMM[3:0] */
#define RADIO_DEBUGRADIOPHY_SHORTRCCALCODETOAAFRCTRIM_Pos (12UL) /*!< Position of SHORTRCCALCODETOAAFRCTRIM field. */
#define RADIO_DEBUGRADIOPHY_SHORTRCCALCODETOAAFRCTRIM_Msk (0x1UL << RADIO_DEBUGRADIOPHY_SHORTRCCALCODETOAAFRCTRIM_Pos) /*!< Bit mask of SHORTRCCALCODETOAAFRCTRIM field. */

/* Bit 11 : 1: Invert the sign bit of calibration code for DC offset calibration(invert DCCAL[4]). This inverts both channel I and Q. */
#define RADIO_DEBUGRADIOPHY_RFMIXINVERTSIGNBIT_Pos (11UL) /*!< Position of RFMIXINVERTSIGNBIT field. */
#define RADIO_DEBUGRADIOPHY_RFMIXINVERTSIGNBIT_Msk (0x1UL << RADIO_DEBUGRADIOPHY_RFMIXINVERTSIGNBIT_Pos) /*!< Bit mask of RFMIXINVERTSIGNBIT field. */

/* Bit 10 : 0: output normal adcBinaryBQ, 1: tie adcBinaryBQ to zero */
#define RADIO_DEBUGRADIOPHY_TIEADCBQTOZERO_Pos (10UL) /*!< Position of TIEADCBQTOZERO field. */
#define RADIO_DEBUGRADIOPHY_TIEADCBQTOZERO_Msk (0x1UL << RADIO_DEBUGRADIOPHY_TIEADCBQTOZERO_Pos) /*!< Bit mask of TIEADCBQTOZERO field. */

/* Bit 9 : 0: output normal adcBinaryBI, 1: tie adcBinaryBI to zero */
#define RADIO_DEBUGRADIOPHY_TIEADCBITOZERO_Pos (9UL) /*!< Position of TIEADCBITOZERO field. */
#define RADIO_DEBUGRADIOPHY_TIEADCBITOZERO_Msk (0x1UL << RADIO_DEBUGRADIOPHY_TIEADCBITOZERO_Pos) /*!< Bit mask of TIEADCBITOZERO field. */

/* Bit 8 : Set to high to buffer TXPOWER so that sub-modules in the MMI will only update next tx power config at TX_EN, RX_EN and LB_EN. Set to low if special test is needed for Tx test. */
#define RADIO_DEBUGRADIOPHY_BUFFEREDTXPWR_Pos (8UL) /*!< Position of BUFFEREDTXPWR field. */
#define RADIO_DEBUGRADIOPHY_BUFFEREDTXPWR_Msk (0x1UL << RADIO_DEBUGRADIOPHY_BUFFEREDTXPWR_Pos) /*!< Bit mask of BUFFEREDTXPWR field. */

/* Bit 7 : Enable override of TX_PWR_0V8 */
#define RADIO_DEBUGRADIOPHY_OVRENTXPWR_Pos (7UL) /*!< Position of OVRENTXPWR field. */
#define RADIO_DEBUGRADIOPHY_OVRENTXPWR_Msk (0x1UL << RADIO_DEBUGRADIOPHY_OVRENTXPWR_Pos) /*!< Bit mask of OVRENTXPWR field. */

/* Bits 4..0 : Override value of TX_PWR_0V8 */
#define RADIO_DEBUGRADIOPHY_OVRVALTXPWR_Pos (0UL) /*!< Position of OVRVALTXPWR field. */
#define RADIO_DEBUGRADIOPHY_OVRVALTXPWR_Msk (0x1FUL << RADIO_DEBUGRADIOPHY_OVRVALTXPWR_Pos) /*!< Bit mask of OVRVALTXPWR field. */

/* Register: RADIO_ADPLLCOMMAND */
/* Description: Send or receive command directly to the AdPll digital island. Only write to this register when FSASYNCBUSBUSY returns 0 */

/* Bit 31 : When 1, a read transaction is initiated. When the event COMPLETETRANS is set, read back this register */
#define RADIO_ADPLLCOMMAND_READ_Pos (31UL) /*!< Position of READ field. */
#define RADIO_ADPLLCOMMAND_READ_Msk (0x1UL << RADIO_ADPLLCOMMAND_READ_Pos) /*!< Bit mask of READ field. */

/* Bits 27..0 : Controls the asynch interface, bits[27:16] are address, bits [15:0] are command/data field */
#define RADIO_ADPLLCOMMAND_ADPLLCOMMAND_Pos (0UL) /*!< Position of ADPLLCOMMAND field. */
#define RADIO_ADPLLCOMMAND_ADPLLCOMMAND_Msk (0xFFFFFFFUL << RADIO_ADPLLCOMMAND_ADPLLCOMMAND_Pos) /*!< Bit mask of ADPLLCOMMAND field. */

/* Register: RADIO_FSFREQFINETUNE */
/* Description: For finetuning the frequency */

/* Bits 12..0 : 2-complement number for fine-tuning the frequency in steps of 488.28 Hz */
#define RADIO_FSFREQFINETUNE_FSFREQFINETUNE_Pos (0UL) /*!< Position of FSFREQFINETUNE field. */
#define RADIO_FSFREQFINETUNE_FSFREQFINETUNE_Msk (0x1FFFUL << RADIO_FSFREQFINETUNE_FSFREQFINETUNE_Pos) /*!< Bit mask of FSFREQFINETUNE field. */

/* Register: RADIO_DEVIATION */
/* Description: Frequency deviation for modulation */

/* Bits 9..0 : Frequency deviation for modulation */
#define RADIO_DEVIATION_DEVIATION_Pos (0UL) /*!< Position of DEVIATION field. */
#define RADIO_DEVIATION_DEVIATION_Msk (0x3FFUL << RADIO_DEVIATION_DEVIATION_Pos) /*!< Bit mask of DEVIATION field. */

/* Register: RADIO_MODRATE */
/* Description: Select modulation rate */

/* Bits 2..0 : Select modulation rate */
#define RADIO_MODRATE_MODRATE_Pos (0UL) /*!< Position of MODRATE field. */
#define RADIO_MODRATE_MODRATE_Msk (0x7UL << RADIO_MODRATE_MODRATE_Pos) /*!< Bit mask of MODRATE field. */
#define RADIO_MODRATE_MODRATE_250k (0x0UL) /*!< 250 kbps */
#define RADIO_MODRATE_MODRATE_500k (0x1UL) /*!< 500 kbps */
#define RADIO_MODRATE_MODRATE_1M (0x2UL) /*!< 1 Mbps */
#define RADIO_MODRATE_MODRATE_2M (0x3UL) /*!< 2 Mbps */
#define RADIO_MODRATE_MODRATE_4M (0x4UL) /*!< 4 Mbps */

/* Register: RADIO_MODFILTERING */
/* Description: Select gaussian filtering mode */

/* Bits 2..0 : Select gaussian filtering mode */
#define RADIO_MODFILTERING_MODFILTERING_Pos (0UL) /*!< Position of MODFILTERING field. */
#define RADIO_MODFILTERING_MODFILTERING_Msk (0x7UL << RADIO_MODFILTERING_MODFILTERING_Pos) /*!< Bit mask of MODFILTERING field. */
#define RADIO_MODFILTERING_MODFILTERING_None (0x0UL) /*!< No filtering */
#define RADIO_MODFILTERING_MODFILTERING_1bt00 (0x1UL) /*!< Gfsk Bt=1.00 */
#define RADIO_MODFILTERING_MODFILTERING_0bt60 (0x2UL) /*!< Gfsk Bt=0.60 */
#define RADIO_MODFILTERING_MODFILTERING_2bt00 (0x3UL) /*!< Gfsk Bt=2.00 */

/* Register: RADIO_CUSTOMMODULATION */
/* Description: Enable reading from memory and passing data over to AdPll */

/* Bit 0 : Enable reading from memory and passing data over to AdPll */
#define RADIO_CUSTOMMODULATION_ENABLE_Pos (0UL) /*!< Position of ENABLE field. */
#define RADIO_CUSTOMMODULATION_ENABLE_Msk (0x1UL << RADIO_CUSTOMMODULATION_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Register: RADIO_FSCLOCKSELECT */
/* Description: Set the clock source for the AdPll digital island */

/* Bit 31 : Override enable for setting the clock switch. If 0, fsStart decides which clock to use. If 1, FSCLOCKSELECT.OVRVAL selects which clock to use */
#define RADIO_FSCLOCKSELECT_OVREN_Pos (31UL) /*!< Position of OVREN field. */
#define RADIO_FSCLOCKSELECT_OVREN_Msk (0x1UL << RADIO_FSCLOCKSELECT_OVREN_Pos) /*!< Bit mask of OVREN field. */

/* Bit 30 : Used instead of 'fsStart' if FSCLOCKSELECT.OVREN is set */
#define RADIO_FSCLOCKSELECT_OVRVAL_Pos (30UL) /*!< Position of OVRVAL field. */
#define RADIO_FSCLOCKSELECT_OVRVAL_Msk (0x1UL << RADIO_FSCLOCKSELECT_OVRVAL_Pos) /*!< Bit mask of OVRVAL field. */

/* Bit 8 : Force-stopping the clock internally in the AdPll island */
#define RADIO_FSCLOCKSELECT_STOP_Pos (8UL) /*!< Position of STOP field. */
#define RADIO_FSCLOCKSELECT_STOP_Msk (0x1UL << RADIO_FSCLOCKSELECT_STOP_Pos) /*!< Bit mask of STOP field. */

/* Bits 3..2 : Set the clock source for the AdPll digital island when fsStart is low */
#define RADIO_FSCLOCKSELECT_CORE_Pos (2UL) /*!< Position of CORE field. */
#define RADIO_FSCLOCKSELECT_CORE_Msk (0x3UL << RADIO_FSCLOCKSELECT_CORE_Pos) /*!< Bit mask of CORE field. */

/* Bits 1..0 : Set the clock source for the AdPll digital island when fsStart is high */
#define RADIO_FSCLOCKSELECT_INTERNAL_Pos (0UL) /*!< Position of INTERNAL field. */
#define RADIO_FSCLOCKSELECT_INTERNAL_Msk (0x3UL << RADIO_FSCLOCKSELECT_INTERNAL_Pos) /*!< Bit mask of INTERNAL field. */

/* Register: RADIO_FSUNITRIGCALVAL */
/* Description: Read the calibrated value for the universal trigger */

/* Bits 4..0 : Read the calibrated value for the universal trigger */
#define RADIO_FSUNITRIGCALVAL_FSUNITRIGCALVAL_Pos (0UL) /*!< Position of FSUNITRIGCALVAL field. */
#define RADIO_FSUNITRIGCALVAL_FSUNITRIGCALVAL_Msk (0x1FUL << RADIO_FSUNITRIGCALVAL_FSUNITRIGCALVAL_Pos) /*!< Bit mask of FSUNITRIGCALVAL field. */

/* Register: RADIO_FSUNITRIGMANUAL */
/* Description: Manual control of the uni trigger signals. Note that fsUniTriggerCalWord is controlled by writing to the separate register FSUNITRIGCALVAL */

/* Bits 13..8 : The fsUniTriggerCalSrc signal when using manual control */
#define RADIO_FSUNITRIGMANUAL_FSUNITRIGGERSRC_Pos (8UL) /*!< Position of FSUNITRIGGERSRC field. */
#define RADIO_FSUNITRIGMANUAL_FSUNITRIGGERSRC_Msk (0x3FUL << RADIO_FSUNITRIGMANUAL_FSUNITRIGGERSRC_Pos) /*!< Bit mask of FSUNITRIGGERSRC field. */

/* Bit 2 : The fsUniTriggerCalEn signal when using manual control */
#define RADIO_FSUNITRIGMANUAL_FSUNITRIGGERCALEN_Pos (2UL) /*!< Position of FSUNITRIGGERCALEN field. */
#define RADIO_FSUNITRIGMANUAL_FSUNITRIGGERCALEN_Msk (0x1UL << RADIO_FSUNITRIGMANUAL_FSUNITRIGGERCALEN_Pos) /*!< Bit mask of FSUNITRIGGERCALEN field. */

/* Bit 1 : The fsUniTrigger signal when using manual control */
#define RADIO_FSUNITRIGMANUAL_FSUNITRIGGER_Pos (1UL) /*!< Position of FSUNITRIGGER field. */
#define RADIO_FSUNITRIGMANUAL_FSUNITRIGGER_Msk (0x1UL << RADIO_FSUNITRIGMANUAL_FSUNITRIGGER_Pos) /*!< Bit mask of FSUNITRIGGER field. */

/* Bit 0 : Enable manual control */
#define RADIO_FSUNITRIGMANUAL_ENABLEMANUAL_Pos (0UL) /*!< Position of ENABLEMANUAL field. */
#define RADIO_FSUNITRIGMANUAL_ENABLEMANUAL_Msk (0x1UL << RADIO_FSUNITRIGMANUAL_ENABLEMANUAL_Pos) /*!< Bit mask of ENABLEMANUAL field. */

/* Register: RADIO_FSUNITRIGCALOUT */
/* Description: Read the signal directly from fsUniTriggerCalOut */

/* Bits 1..0 : Read the raw fsUniTriggerCalOut value */
#define RADIO_FSUNITRIGCALOUT_FSUNITRIGCALOUT_Pos (0UL) /*!< Position of FSUNITRIGCALOUT field. */
#define RADIO_FSUNITRIGCALOUT_FSUNITRIGCALOUT_Msk (0x3UL << RADIO_FSUNITRIGCALOUT_FSUNITRIGCALOUT_Pos) /*!< Bit mask of FSUNITRIGCALOUT field. */

/* Register: RADIO_FSASYNCBUSCONF */
/* Description: Some special settings for the asynchronous bus configuration */

/* Bit 3 : The bus scheduler will not wait for AdPll to say clockStarted */
#define RADIO_FSASYNCBUSCONF_IGNORECLOCKSTARTED_Pos (3UL) /*!< Position of IGNORECLOCKSTARTED field. */
#define RADIO_FSASYNCBUSCONF_IGNORECLOCKSTARTED_Msk (0x1UL << RADIO_FSASYNCBUSCONF_IGNORECLOCKSTARTED_Pos) /*!< Bit mask of IGNORECLOCKSTARTED field. */

/* Bit 2 : When 1, check the first transaction during sending auto. If errorenous stop the state machine */
#define RADIO_FSASYNCBUSCONF_CHECKSTATUSAUTO_Pos (2UL) /*!< Position of CHECKSTATUSAUTO field. */
#define RADIO_FSASYNCBUSCONF_CHECKSTATUSAUTO_Msk (0x1UL << RADIO_FSASYNCBUSCONF_CHECKSTATUSAUTO_Pos) /*!< Bit mask of CHECKSTATUSAUTO field. */

/* Bit 1 : Do not send settings at the beginning to AdPll */
#define RADIO_FSASYNCBUSCONF_DISABLEAUTOSETTING_Pos (1UL) /*!< Position of DISABLEAUTOSETTING field. */
#define RADIO_FSASYNCBUSCONF_DISABLEAUTOSETTING_Msk (0x1UL << RADIO_FSASYNCBUSCONF_DISABLEAUTOSETTING_Pos) /*!< Bit mask of DISABLEAUTOSETTING field. */

/* Bit 0 : When 1, every write transaction uses 8 x 32 MHz clock cycles instead of 4 x 32 MHz clock cycles. Confirmation is received whether the transaction was actually received by AdPll. */
#define RADIO_FSASYNCBUSCONF_CHECKSTATUS_Pos (0UL) /*!< Position of CHECKSTATUS field. */
#define RADIO_FSASYNCBUSCONF_CHECKSTATUS_Msk (0x1UL << RADIO_FSASYNCBUSCONF_CHECKSTATUS_Pos) /*!< Bit mask of CHECKSTATUS field. */

/* Register: RADIO_FSASYNCBUSBUSY */
/* Description: Status bit indicating whether the bus is currently busy or not */

/* Bit 0 : Whether the bus is currently busy or not */
#define RADIO_FSASYNCBUSBUSY_FSASYNCBUSBUSY_Pos (0UL) /*!< Position of FSASYNCBUSBUSY field. */
#define RADIO_FSASYNCBUSBUSY_FSASYNCBUSBUSY_Msk (0x1UL << RADIO_FSASYNCBUSBUSY_FSASYNCBUSBUSY_Pos) /*!< Bit mask of FSASYNCBUSBUSY field. */

/* Register: RADIO_ADPLLCOMPANIONBACKDOORS */
/* Description: This value is written to the AdPll when powering up the digital island */

/* Bits 9..8 : 0: no relock, 1: first gear of TRK, 2: back to ACQ, 3: back to full lock */
#define RADIO_ADPLLCOMPANIONBACKDOORS_RELOADFREQWILLTRIGGER_Pos (8UL) /*!< Position of RELOADFREQWILLTRIGGER field. */
#define RADIO_ADPLLCOMPANIONBACKDOORS_RELOADFREQWILLTRIGGER_Msk (0x3UL << RADIO_ADPLLCOMPANIONBACKDOORS_RELOADFREQWILLTRIGGER_Pos) /*!< Bit mask of RELOADFREQWILLTRIGGER field. */

/* Bits 5..4 : 0: no relock, 1: first gear of TRK, 2: back to ACQ, 3: back to full lock */
#define RADIO_ADPLLCOMPANIONBACKDOORS_ONTHEFLYWILLTRIGGER_Pos (4UL) /*!< Position of ONTHEFLYWILLTRIGGER field. */
#define RADIO_ADPLLCOMPANIONBACKDOORS_ONTHEFLYWILLTRIGGER_Msk (0x3UL << RADIO_ADPLLCOMPANIONBACKDOORS_ONTHEFLYWILLTRIGGER_Pos) /*!< Bit mask of ONTHEFLYWILLTRIGGER field. */

/* Bit 3 : Whether ck32MCore is active or not when OVRENCK32MCORE is set. See also description of OVRENCK32MCORE */
#define RADIO_ADPLLCOMPANIONBACKDOORS_OVRVALCK32MCORE_Pos (3UL) /*!< Position of OVRVALCK32MCORE field. */
#define RADIO_ADPLLCOMPANIONBACKDOORS_OVRVALCK32MCORE_Msk (0x1UL << RADIO_ADPLLCOMPANIONBACKDOORS_OVRVALCK32MCORE_Pos) /*!< Bit mask of OVRVALCK32MCORE field. */

/* Bit 2 : Make it possible to manually control whether ck32MCore is sent to the AdPll digital island. Needed to test complete clock silence in the AdPll island. It can also be used to enable the clock activity on the clock net even when the clock is not selected. */
#define RADIO_ADPLLCOMPANIONBACKDOORS_OVRENCK32MCORE_Pos (2UL) /*!< Position of OVRENCK32MCORE field. */
#define RADIO_ADPLLCOMPANIONBACKDOORS_OVRENCK32MCORE_Msk (0x1UL << RADIO_ADPLLCOMPANIONBACKDOORS_OVRENCK32MCORE_Pos) /*!< Bit mask of OVRENCK32MCORE field. */

/* Bit 1 : In normal operation we request clock when pwrupFsLdoDig0 is set. By setting this to 1, we will request clock even when pwrupFsLdoDig0. This may be useful for current measurements of FS_DIG */
#define RADIO_ADPLLCOMPANIONBACKDOORS_REQUESTCLOCKOVERRIDE_Pos (1UL) /*!< Position of REQUESTCLOCKOVERRIDE field. */
#define RADIO_ADPLLCOMPANIONBACKDOORS_REQUESTCLOCKOVERRIDE_Msk (0x1UL << RADIO_ADPLLCOMPANIONBACKDOORS_REQUESTCLOCKOVERRIDE_Pos) /*!< Bit mask of REQUESTCLOCKOVERRIDE field. */

/* Bit 0 : If 0, we flip the interpretation of the sSel signal (to work around a bug if we have managed to flip it somewhere in the design process) */
#define RADIO_ADPLLCOMPANIONBACKDOORS_FLIPSSEL_Pos (0UL) /*!< Position of FLIPSSEL field. */
#define RADIO_ADPLLCOMPANIONBACKDOORS_FLIPSSEL_Msk (0x1UL << RADIO_ADPLLCOMPANIONBACKDOORS_FLIPSSEL_Pos) /*!< Bit mask of FLIPSSEL field. */

/* Register: RADIO_EXPECTEDPVTTOTRATIO */
/* Description: This value is written to the AdPll when powering up the digital island */

/* Bit 31 : When 1, we do not transfer this word to AdPll at power up */
#define RADIO_EXPECTEDPVTTOTRATIO_DONOTTRANSFER_Pos (31UL) /*!< Position of DONOTTRANSFER field. */
#define RADIO_EXPECTEDPVTTOTRATIO_DONOTTRANSFER_Msk (0x1UL << RADIO_EXPECTEDPVTTOTRATIO_DONOTTRANSFER_Pos) /*!< Bit mask of DONOTTRANSFER field. */

/* Bits 8..0 : The ratio between PVT and the total cap ratio. Used for Estkmod, Estkdtc and TdcReadout */
#define RADIO_EXPECTEDPVTTOTRATIO_EXPECTEDPVTTOTRATIO_Pos (0UL) /*!< Position of EXPECTEDPVTTOTRATIO field. */
#define RADIO_EXPECTEDPVTTOTRATIO_EXPECTEDPVTTOTRATIO_Msk (0x1FFUL << RADIO_EXPECTEDPVTTOTRATIO_EXPECTEDPVTTOTRATIO_Pos) /*!< Bit mask of EXPECTEDPVTTOTRATIO field. */

/* Register: RADIO_ESTKDTCVAL */
/* Description: This value is written to the AdPll when powering up the digital island */

/* Bit 31 : When 1, we do not transfer this word to AdPll at power up */
#define RADIO_ESTKDTCVAL_DONOTTRANSFER_Pos (31UL) /*!< Position of DONOTTRANSFER field. */
#define RADIO_ESTKDTCVAL_DONOTTRANSFER_Msk (0x1UL << RADIO_ESTKDTCVAL_DONOTTRANSFER_Pos) /*!< Bit mask of DONOTTRANSFER field. */

/* Bits 11..0 : The estimated kDTV value in typical */
#define RADIO_ESTKDTCVAL_ESTKDTVAL_Pos (0UL) /*!< Position of ESTKDTVAL field. */
#define RADIO_ESTKDTCVAL_ESTKDTVAL_Msk (0xFFFUL << RADIO_ESTKDTCVAL_ESTKDTVAL_Pos) /*!< Bit mask of ESTKDTVAL field. */

/* Register: RADIO_TXINTERFACEHFGAIN */
/* Description: This value is written to the AdPll when powering up the digital island */

/* Bit 31 : When 1, we do not transfer this word to AdPll at power up */
#define RADIO_TXINTERFACEHFGAIN_DONOTTRANSFER_Pos (31UL) /*!< Position of DONOTTRANSFER field. */
#define RADIO_TXINTERFACEHFGAIN_DONOTTRANSFER_Msk (0x1UL << RADIO_TXINTERFACEHFGAIN_DONOTTRANSFER_Pos) /*!< Bit mask of DONOTTRANSFER field. */

/* Bits 9..0 : The gain for the HF path */
#define RADIO_TXINTERFACEHFGAIN_TXINTERFACEHFGAIN_Pos (0UL) /*!< Position of TXINTERFACEHFGAIN field. */
#define RADIO_TXINTERFACEHFGAIN_TXINTERFACEHFGAIN_Msk (0x3FFUL << RADIO_TXINTERFACEHFGAIN_TXINTERFACEHFGAIN_Pos) /*!< Bit mask of TXINTERFACEHFGAIN field. */

/* Register: RADIO_TRACING */
/* Description: Enable tracing from AdPll */

/* Bit 0 : Enable tracing from AdPll */
#define RADIO_TRACING_ENABLE_Pos (0UL) /*!< Position of ENABLE field. */
#define RADIO_TRACING_ENABLE_Msk (0x1UL << RADIO_TRACING_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Register: RADIO_IFFREQ */
/* Description: Select between two different IF frequencies */

/* Bit 0 : Select between two different IF frequencies */
#define RADIO_IFFREQ_HIGHIF_Pos (0UL) /*!< Position of HIGHIF field. */
#define RADIO_IFFREQ_HIGHIF_Msk (0x1UL << RADIO_IFFREQ_HIGHIF_Pos) /*!< Bit mask of HIGHIF field. */
#define RADIO_IFFREQ_HIGHIF_1MHz (0x0UL) /*!< 1 MHz IF */
#define RADIO_IFFREQ_HIGHIF_2MHz (0x1UL) /*!< 2 MHz IF */

/* Register: RADIO_ADPLLCOMPANIONSTATE */
/* Description: State in the AdPllCompanion state machines */

/* Bits 14..12 : The state of the universal trigger calibration routine */
#define RADIO_ADPLLCOMPANIONSTATE_UNITRIGCALSTATE_Pos (12UL) /*!< Position of UNITRIGCALSTATE field. */
#define RADIO_ADPLLCOMPANIONSTATE_UNITRIGCALSTATE_Msk (0x7UL << RADIO_ADPLLCOMPANIONSTATE_UNITRIGCALSTATE_Pos) /*!< Bit mask of UNITRIGCALSTATE field. */

/* Bits 9..8 : The state of the clock switching state machine */
#define RADIO_ADPLLCOMPANIONSTATE_CLOCKSWITCHSTATE_Pos (8UL) /*!< Position of CLOCKSWITCHSTATE field. */
#define RADIO_ADPLLCOMPANIONSTATE_CLOCKSWITCHSTATE_Msk (0x3UL << RADIO_ADPLLCOMPANIONSTATE_CLOCKSWITCHSTATE_Pos) /*!< Bit mask of CLOCKSWITCHSTATE field. */

/* Bits 5..4 : The state of the async bus master */
#define RADIO_ADPLLCOMPANIONSTATE_BUSMASTERSTATE_Pos (4UL) /*!< Position of BUSMASTERSTATE field. */
#define RADIO_ADPLLCOMPANIONSTATE_BUSMASTERSTATE_Msk (0x3UL << RADIO_ADPLLCOMPANIONSTATE_BUSMASTERSTATE_Pos) /*!< Bit mask of BUSMASTERSTATE field. */

/* Bits 2..0 : The state of the state machine which sends commands automatically at startup */
#define RADIO_ADPLLCOMPANIONSTATE_BUSSCHEDULERSTATE_Pos (0UL) /*!< Position of BUSSCHEDULERSTATE field. */
#define RADIO_ADPLLCOMPANIONSTATE_BUSSCHEDULERSTATE_Msk (0x7UL << RADIO_ADPLLCOMPANIONSTATE_BUSSCHEDULERSTATE_Pos) /*!< Bit mask of BUSSCHEDULERSTATE field. */

/* Register: RADIO_RELOADFREQINTERNAL */
/* Description: Non-official task: AdPll will reread the frequency input signal */

/* Bit 0 :   */
#define RADIO_RELOADFREQINTERNAL_TRIGGER_Pos (0UL) /*!< Position of TRIGGER field. */
#define RADIO_RELOADFREQINTERNAL_TRIGGER_Msk (0x1UL << RADIO_RELOADFREQINTERNAL_TRIGGER_Pos) /*!< Bit mask of TRIGGER field. */

/* Register: RADIO_UNITRIGCALSTART */
/* Description: Non-official task: Start automatic universal trigger calibration */

/* Bit 0 :   */
#define RADIO_UNITRIGCALSTART_TRIGGER_Pos (0UL) /*!< Position of TRIGGER field. */
#define RADIO_UNITRIGCALSTART_TRIGGER_Msk (0x1UL << RADIO_UNITRIGCALSTART_TRIGGER_Pos) /*!< Bit mask of TRIGGER field. */

/* Register: RADIO_FSSENDSETTINGS */
/* Description: Non-official task: Send the auto-settings to AdPll again. This also happens at every startup */

/* Bit 0 :   */
#define RADIO_FSSENDSETTINGS_TRIGGER_Pos (0UL) /*!< Position of TRIGGER field. */
#define RADIO_FSSENDSETTINGS_TRIGGER_Msk (0x1UL << RADIO_FSSENDSETTINGS_TRIGGER_Pos) /*!< Bit mask of TRIGGER field. */

/* Register: RADIO_UNITRIGCALDONE */
/* Description: Non-official event: Start automatic universal trigger calibration */

/* Bit 0 :   */
#define RADIO_UNITRIGCALDONE_VAL_Pos (0UL) /*!< Position of VAL field. */
#define RADIO_UNITRIGCALDONE_VAL_Msk (0x1UL << RADIO_UNITRIGCALDONE_VAL_Pos) /*!< Bit mask of VAL field. */

/* Register: RADIO_REJECTEDTRANS */
/* Description: Non-official event: The command written to AdPll was rejected because of an ongoing transaction */

/* Bit 0 :   */
#define RADIO_REJECTEDTRANS_VAL_Pos (0UL) /*!< Position of VAL field. */
#define RADIO_REJECTEDTRANS_VAL_Msk (0x1UL << RADIO_REJECTEDTRANS_VAL_Pos) /*!< Bit mask of VAL field. */

/* Register: RADIO_COMPLETETRANS */
/* Description: Non-official event: Completed a transaction to AdPll successfully (only when CHECKSTATUS is set) */

/* Bit 0 :   */
#define RADIO_COMPLETETRANS_VAL_Pos (0UL) /*!< Position of VAL field. */
#define RADIO_COMPLETETRANS_VAL_Msk (0x1UL << RADIO_COMPLETETRANS_VAL_Pos) /*!< Bit mask of VAL field. */

/* Register: RADIO_FAILEDTRANS */
/* Description: Non-official event: Did not successfully complete a transaction to AdPll. (only when CHECKSTATUS is set) */

/* Bit 0 :   */
#define RADIO_FAILEDTRANS_VAL_Pos (0UL) /*!< Position of VAL field. */
#define RADIO_FAILEDTRANS_VAL_Msk (0x1UL << RADIO_FAILEDTRANS_VAL_Pos) /*!< Bit mask of VAL field. */

/* Register: RADIO_ADPLLSTARTUPCOMMAND0 */
/* Description: This value is written to the AdPll when powering up the digital island */

/* Bit 31 : When 1, we do not transfer this word to AdPll at power up */
#define RADIO_ADPLLSTARTUPCOMMAND0_DONOTTRANSFER_Pos (31UL) /*!< Position of DONOTTRANSFER field. */
#define RADIO_ADPLLSTARTUPCOMMAND0_DONOTTRANSFER_Msk (0x1UL << RADIO_ADPLLSTARTUPCOMMAND0_DONOTTRANSFER_Pos) /*!< Bit mask of DONOTTRANSFER field. */

/* Bits 27..16 : The address of the digital island to write to */
#define RADIO_ADPLLSTARTUPCOMMAND0_ADDRESS_Pos (16UL) /*!< Position of ADDRESS field. */
#define RADIO_ADPLLSTARTUPCOMMAND0_ADDRESS_Msk (0xFFFUL << RADIO_ADPLLSTARTUPCOMMAND0_ADDRESS_Pos) /*!< Bit mask of ADDRESS field. */

/* Bits 15..0 : The value to be written the register in the digital island */
#define RADIO_ADPLLSTARTUPCOMMAND0_VALUE_Pos (0UL) /*!< Position of VALUE field. */
#define RADIO_ADPLLSTARTUPCOMMAND0_VALUE_Msk (0xFFFFUL << RADIO_ADPLLSTARTUPCOMMAND0_VALUE_Pos) /*!< Bit mask of VALUE field. */

/* Register: RADIO_ADPLLSTARTUPCOMMAND1 */
/* Description: This value is written to the AdPll when powering up the digital island */

/* Bit 31 : When 1, we do not transfer this word to AdPll at power up */
#define RADIO_ADPLLSTARTUPCOMMAND1_DONOTTRANSFER_Pos (31UL) /*!< Position of DONOTTRANSFER field. */
#define RADIO_ADPLLSTARTUPCOMMAND1_DONOTTRANSFER_Msk (0x1UL << RADIO_ADPLLSTARTUPCOMMAND1_DONOTTRANSFER_Pos) /*!< Bit mask of DONOTTRANSFER field. */

/* Bits 27..16 : The address of the digital island to write to */
#define RADIO_ADPLLSTARTUPCOMMAND1_ADDRESS_Pos (16UL) /*!< Position of ADDRESS field. */
#define RADIO_ADPLLSTARTUPCOMMAND1_ADDRESS_Msk (0xFFFUL << RADIO_ADPLLSTARTUPCOMMAND1_ADDRESS_Pos) /*!< Bit mask of ADDRESS field. */

/* Bits 15..0 : The value to be written the register in the digital island */
#define RADIO_ADPLLSTARTUPCOMMAND1_VALUE_Pos (0UL) /*!< Position of VALUE field. */
#define RADIO_ADPLLSTARTUPCOMMAND1_VALUE_Msk (0xFFFFUL << RADIO_ADPLLSTARTUPCOMMAND1_VALUE_Pos) /*!< Bit mask of VALUE field. */

/* Register: RADIO_ADPLLSTARTUPCOMMAND2 */
/* Description: This value is written to the AdPll when powering up the digital island */

/* Bit 31 : When 1, we do not transfer this word to AdPll at power up */
#define RADIO_ADPLLSTARTUPCOMMAND2_DONOTTRANSFER_Pos (31UL) /*!< Position of DONOTTRANSFER field. */
#define RADIO_ADPLLSTARTUPCOMMAND2_DONOTTRANSFER_Msk (0x1UL << RADIO_ADPLLSTARTUPCOMMAND2_DONOTTRANSFER_Pos) /*!< Bit mask of DONOTTRANSFER field. */

/* Bits 27..16 : The address of the digital island to write to */
#define RADIO_ADPLLSTARTUPCOMMAND2_ADDRESS_Pos (16UL) /*!< Position of ADDRESS field. */
#define RADIO_ADPLLSTARTUPCOMMAND2_ADDRESS_Msk (0xFFFUL << RADIO_ADPLLSTARTUPCOMMAND2_ADDRESS_Pos) /*!< Bit mask of ADDRESS field. */

/* Bits 15..0 : The value to be written the register in the digital island */
#define RADIO_ADPLLSTARTUPCOMMAND2_VALUE_Pos (0UL) /*!< Position of VALUE field. */
#define RADIO_ADPLLSTARTUPCOMMAND2_VALUE_Msk (0xFFFFUL << RADIO_ADPLLSTARTUPCOMMAND2_VALUE_Pos) /*!< Bit mask of VALUE field. */

/* Register: RADIO_ADPLLSTARTUPCOMMAND3 */
/* Description: This value is written to the AdPll when powering up the digital island */

/* Bit 31 : When 1, we do not transfer this word to AdPll at power up */
#define RADIO_ADPLLSTARTUPCOMMAND3_DONOTTRANSFER_Pos (31UL) /*!< Position of DONOTTRANSFER field. */
#define RADIO_ADPLLSTARTUPCOMMAND3_DONOTTRANSFER_Msk (0x1UL << RADIO_ADPLLSTARTUPCOMMAND3_DONOTTRANSFER_Pos) /*!< Bit mask of DONOTTRANSFER field. */

/* Bits 27..16 : The address of the digital island to write to */
#define RADIO_ADPLLSTARTUPCOMMAND3_ADDRESS_Pos (16UL) /*!< Position of ADDRESS field. */
#define RADIO_ADPLLSTARTUPCOMMAND3_ADDRESS_Msk (0xFFFUL << RADIO_ADPLLSTARTUPCOMMAND3_ADDRESS_Pos) /*!< Bit mask of ADDRESS field. */

/* Bits 15..0 : The value to be written the register in the digital island */
#define RADIO_ADPLLSTARTUPCOMMAND3_VALUE_Pos (0UL) /*!< Position of VALUE field. */
#define RADIO_ADPLLSTARTUPCOMMAND3_VALUE_Msk (0xFFFFUL << RADIO_ADPLLSTARTUPCOMMAND3_VALUE_Pos) /*!< Bit mask of VALUE field. */

/* Register: RADIO_ADPLLSTARTUPCOMMAND4 */
/* Description: This value is written to the AdPll when powering up the digital island */

/* Bit 31 : When 1, we do not transfer this word to AdPll at power up */
#define RADIO_ADPLLSTARTUPCOMMAND4_DONOTTRANSFER_Pos (31UL) /*!< Position of DONOTTRANSFER field. */
#define RADIO_ADPLLSTARTUPCOMMAND4_DONOTTRANSFER_Msk (0x1UL << RADIO_ADPLLSTARTUPCOMMAND4_DONOTTRANSFER_Pos) /*!< Bit mask of DONOTTRANSFER field. */

/* Bits 27..16 : The address of the digital island to write to */
#define RADIO_ADPLLSTARTUPCOMMAND4_ADDRESS_Pos (16UL) /*!< Position of ADDRESS field. */
#define RADIO_ADPLLSTARTUPCOMMAND4_ADDRESS_Msk (0xFFFUL << RADIO_ADPLLSTARTUPCOMMAND4_ADDRESS_Pos) /*!< Bit mask of ADDRESS field. */

/* Bits 15..0 : The value to be written the register in the digital island */
#define RADIO_ADPLLSTARTUPCOMMAND4_VALUE_Pos (0UL) /*!< Position of VALUE field. */
#define RADIO_ADPLLSTARTUPCOMMAND4_VALUE_Msk (0xFFFFUL << RADIO_ADPLLSTARTUPCOMMAND4_VALUE_Pos) /*!< Bit mask of VALUE field. */

/* Register: RADIO_ADPLLSTARTUPCOMMAND5 */
/* Description: This value is written to the AdPll when powering up the digital island */

/* Bit 31 : When 1, we do not transfer this word to AdPll at power up */
#define RADIO_ADPLLSTARTUPCOMMAND5_DONOTTRANSFER_Pos (31UL) /*!< Position of DONOTTRANSFER field. */
#define RADIO_ADPLLSTARTUPCOMMAND5_DONOTTRANSFER_Msk (0x1UL << RADIO_ADPLLSTARTUPCOMMAND5_DONOTTRANSFER_Pos) /*!< Bit mask of DONOTTRANSFER field. */

/* Bits 27..16 : The address of the digital island to write to */
#define RADIO_ADPLLSTARTUPCOMMAND5_ADDRESS_Pos (16UL) /*!< Position of ADDRESS field. */
#define RADIO_ADPLLSTARTUPCOMMAND5_ADDRESS_Msk (0xFFFUL << RADIO_ADPLLSTARTUPCOMMAND5_ADDRESS_Pos) /*!< Bit mask of ADDRESS field. */

/* Bits 15..0 : The value to be written the register in the digital island */
#define RADIO_ADPLLSTARTUPCOMMAND5_VALUE_Pos (0UL) /*!< Position of VALUE field. */
#define RADIO_ADPLLSTARTUPCOMMAND5_VALUE_Msk (0xFFFFUL << RADIO_ADPLLSTARTUPCOMMAND5_VALUE_Pos) /*!< Bit mask of VALUE field. */

/* Register: RADIO_ADPLLSTARTUPCOMMAND6 */
/* Description: This value is written to the AdPll when powering up the digital island */

/* Bit 31 : When 1, we do not transfer this word to AdPll at power up */
#define RADIO_ADPLLSTARTUPCOMMAND6_DONOTTRANSFER_Pos (31UL) /*!< Position of DONOTTRANSFER field. */
#define RADIO_ADPLLSTARTUPCOMMAND6_DONOTTRANSFER_Msk (0x1UL << RADIO_ADPLLSTARTUPCOMMAND6_DONOTTRANSFER_Pos) /*!< Bit mask of DONOTTRANSFER field. */

/* Bits 27..16 : The address of the digital island to write to */
#define RADIO_ADPLLSTARTUPCOMMAND6_ADDRESS_Pos (16UL) /*!< Position of ADDRESS field. */
#define RADIO_ADPLLSTARTUPCOMMAND6_ADDRESS_Msk (0xFFFUL << RADIO_ADPLLSTARTUPCOMMAND6_ADDRESS_Pos) /*!< Bit mask of ADDRESS field. */

/* Bits 15..0 : The value to be written the register in the digital island */
#define RADIO_ADPLLSTARTUPCOMMAND6_VALUE_Pos (0UL) /*!< Position of VALUE field. */
#define RADIO_ADPLLSTARTUPCOMMAND6_VALUE_Msk (0xFFFFUL << RADIO_ADPLLSTARTUPCOMMAND6_VALUE_Pos) /*!< Bit mask of VALUE field. */

/* Register: RADIO_ADPLLSTARTUPCOMMAND7 */
/* Description: This value is written to the AdPll when powering up the digital island */

/* Bit 31 : When 1, we do not transfer this word to AdPll at power up */
#define RADIO_ADPLLSTARTUPCOMMAND7_DONOTTRANSFER_Pos (31UL) /*!< Position of DONOTTRANSFER field. */
#define RADIO_ADPLLSTARTUPCOMMAND7_DONOTTRANSFER_Msk (0x1UL << RADIO_ADPLLSTARTUPCOMMAND7_DONOTTRANSFER_Pos) /*!< Bit mask of DONOTTRANSFER field. */

/* Bits 27..16 : The address of the digital island to write to */
#define RADIO_ADPLLSTARTUPCOMMAND7_ADDRESS_Pos (16UL) /*!< Position of ADDRESS field. */
#define RADIO_ADPLLSTARTUPCOMMAND7_ADDRESS_Msk (0xFFFUL << RADIO_ADPLLSTARTUPCOMMAND7_ADDRESS_Pos) /*!< Bit mask of ADDRESS field. */

/* Bits 15..0 : The value to be written the register in the digital island */
#define RADIO_ADPLLSTARTUPCOMMAND7_VALUE_Pos (0UL) /*!< Position of VALUE field. */
#define RADIO_ADPLLSTARTUPCOMMAND7_VALUE_Msk (0xFFFFUL << RADIO_ADPLLSTARTUPCOMMAND7_VALUE_Pos) /*!< Bit mask of VALUE field. */

/* Register: RADIO_ADPLLCOMPANIONINTEN */
/* Description: Unspecified */

/* Bits 3..0 : Interrupt enable register for events (unused since IRQ not connected) */
#define RADIO_ADPLLCOMPANIONINTEN_EVENTS_Pos (0UL) /*!< Position of EVENTS field. */
#define RADIO_ADPLLCOMPANIONINTEN_EVENTS_Msk (0xFUL << RADIO_ADPLLCOMPANIONINTEN_EVENTS_Pos) /*!< Bit mask of EVENTS field. */

/* Register: RADIO_ADPLLCOMPANIONINTENSET */
/* Description: Unspecified */

/* Bits 3..0 : Interrupt set register for events (unused since IRQ not connected) */
#define RADIO_ADPLLCOMPANIONINTENSET_EVENTS_Pos (0UL) /*!< Position of EVENTS field. */
#define RADIO_ADPLLCOMPANIONINTENSET_EVENTS_Msk (0xFUL << RADIO_ADPLLCOMPANIONINTENSET_EVENTS_Pos) /*!< Bit mask of EVENTS field. */

/* Register: RADIO_ADPLLCOMPANIONINTENCLR */
/* Description: Unspecified */

/* Bits 3..0 : Interrupt clear register for events (unused since IRQ not connected) */
#define RADIO_ADPLLCOMPANIONINTENCLR_EVENTS_Pos (0UL) /*!< Position of EVENTS field. */
#define RADIO_ADPLLCOMPANIONINTENCLR_EVENTS_Msk (0xFUL << RADIO_ADPLLCOMPANIONINTENCLR_EVENTS_Pos) /*!< Bit mask of EVENTS field. */

/* Register: RADIO_ADPLLCOMPANIONINTPEND */
/* Description: Unspecified */

/* Bits 3..0 :   */
#define RADIO_ADPLLCOMPANIONINTPEND_EVENTS_Pos (0UL) /*!< Position of EVENTS field. */
#define RADIO_ADPLLCOMPANIONINTPEND_EVENTS_Msk (0xFUL << RADIO_ADPLLCOMPANIONINTPEND_EVENTS_Pos) /*!< Bit mask of EVENTS field. */

/* Register: RADIO_MODECONF */
/* Description: Mode specific configuration regiser */

/* Bit 16 : Selects mixing frequency. Setting this register to 0 halves the mixing frequency. */
#define RADIO_MODECONF_HIGHIFMODE_Pos (16UL) /*!< Position of HIGHIFMODE field. */
#define RADIO_MODECONF_HIGHIFMODE_Msk (0x1UL << RADIO_MODECONF_HIGHIFMODE_Pos) /*!< Bit mask of HIGHIFMODE field. */

/* Bits 2..0 : Mode dependent saturation delay for different modes */
#define RADIO_MODECONF_SATDLY_Pos (0UL) /*!< Position of SATDLY field. */
#define RADIO_MODECONF_SATDLY_Msk (0x7UL << RADIO_MODECONF_SATDLY_Pos) /*!< Bit mask of SATDLY field. */

/* Register: RADIO_FESTATUS */
/* Description: Frontend readout register */

/* Bits 27..16 : Magnitude output from BB peak detector */
#define RADIO_FESTATUS_MAGNITUDE_Pos (16UL) /*!< Position of MAGNITUDE field. */
#define RADIO_FESTATUS_MAGNITUDE_Msk (0xFFFUL << RADIO_FESTATUS_MAGNITUDE_Pos) /*!< Bit mask of MAGNITUDE field. */

/* Bit 15 : High when IQCal search finished */
#define RADIO_FESTATUS_CALFIN_Pos (15UL) /*!< Position of CALFIN field. */
#define RADIO_FESTATUS_CALFIN_Msk (0x1UL << RADIO_FESTATUS_CALFIN_Pos) /*!< Bit mask of CALFIN field. */

/* Bits 12..8 : calAmp from IQCal */
#define RADIO_FESTATUS_CALAMP_Pos (8UL) /*!< Position of CALAMP field. */
#define RADIO_FESTATUS_CALAMP_Msk (0x1FUL << RADIO_FESTATUS_CALAMP_Pos) /*!< Bit mask of CALAMP field. */

/* Bits 4..0 : calPhi from IQCal */
#define RADIO_FESTATUS_CALPHI_Pos (0UL) /*!< Position of CALPHI field. */
#define RADIO_FESTATUS_CALPHI_Msk (0x1FUL << RADIO_FESTATUS_CALPHI_Pos) /*!< Bit mask of CALPHI field. */

/* Register: RADIO_FECONFIG */
/* Description: Config register */

/* Bit 28 : Invert I channel in case Q channel leads I */
#define RADIO_FECONFIG_INVERTI_Pos (28UL) /*!< Position of INVERTI field. */
#define RADIO_FECONFIG_INVERTI_Msk (0x1UL << RADIO_FECONFIG_INVERTI_Pos) /*!< Bit mask of INVERTI field. */

/* Bit 24 : Disable Q samples to save power */
#define RADIO_FECONFIG_QDISABLE_Pos (24UL) /*!< Position of QDISABLE field. */
#define RADIO_FECONFIG_QDISABLE_Msk (0x1UL << RADIO_FECONFIG_QDISABLE_Pos) /*!< Bit mask of QDISABLE field. */

/* Bits 19..16 : A constant scaling that overrides dynamic scaling behaviour in the IQ Scaler. Value != 0 enables constant scaling. */
#define RADIO_FECONFIG_SCALECONST_Pos (16UL) /*!< Position of SCALECONST field. */
#define RADIO_FECONFIG_SCALECONST_Msk (0xFUL << RADIO_FECONFIG_SCALECONST_Pos) /*!< Bit mask of SCALECONST field. */

/* Bits 13..8 : The number of clock cycles to wait before stepping down the internal memory for the scaling. The value 0 means that the decay feature is off. */
#define RADIO_FECONFIG_SCALERDECAY_Pos (8UL) /*!< Position of SCALERDECAY field. */
#define RADIO_FECONFIG_SCALERDECAY_Msk (0x3FUL << RADIO_FECONFIG_SCALERDECAY_Pos) /*!< Bit mask of SCALERDECAY field. */

/* Bits 7..0 : Alpha for IIR filter used in logMag calculation */
#define RADIO_FECONFIG_ALPHA_Pos (0UL) /*!< Position of ALPHA field. */
#define RADIO_FECONFIG_ALPHA_Msk (0xFFUL << RADIO_FECONFIG_ALPHA_Pos) /*!< Bit mask of ALPHA field. */

/* Register: RADIO_IQCALCONF */
/* Description: Gain and phase mismatch calibration control for I and Q */

/* Bit 31 : Run I and Q calibration procedure */
#define RADIO_IQCALCONF_RUN_Pos (31UL) /*!< Position of RUN field. */
#define RADIO_IQCALCONF_RUN_Msk (0x1UL << RADIO_IQCALCONF_RUN_Pos) /*!< Bit mask of RUN field. */
#define RADIO_IQCALCONF_RUN_Stored (0x0UL) /*!< Using stored values for calPhi and calAmp */
#define RADIO_IQCALCONF_RUN_Calib (0x1UL) /*!< Running calibration */

/* Bits 29..28 : IQCal search mode */
#define RADIO_IQCALCONF_MODE_Pos (28UL) /*!< Position of MODE field. */
#define RADIO_IQCALCONF_MODE_Msk (0x3UL << RADIO_IQCALCONF_MODE_Pos) /*!< Bit mask of MODE field. */
#define RADIO_IQCALCONF_MODE_Optimized (0x0UL) /*!< Optimized search algorithm. */
#define RADIO_IQCALCONF_MODE_Exhaustive (0x1UL) /*!< Exhaustive search. */
#define RADIO_IQCALCONF_MODE_Cancellation (0x2UL) /*!< Optimized search with cancellation. */

/* Bit 27 : Sign of calPhi value */
#define RADIO_IQCALCONF_CALPHISIGN_Pos (27UL) /*!< Position of CALPHISIGN field. */
#define RADIO_IQCALCONF_CALPHISIGN_Msk (0x1UL << RADIO_IQCALCONF_CALPHISIGN_Pos) /*!< Bit mask of CALPHISIGN field. */

/* Bits 20..16 : Stored calPhi value */
#define RADIO_IQCALCONF_CALPHI_Pos (16UL) /*!< Position of CALPHI field. */
#define RADIO_IQCALCONF_CALPHI_Msk (0x1FUL << RADIO_IQCALCONF_CALPHI_Pos) /*!< Bit mask of CALPHI field. */

/* Bits 12..8 : Stored calAmp value */
#define RADIO_IQCALCONF_CALAMP_Pos (8UL) /*!< Position of CALAMP field. */
#define RADIO_IQCALCONF_CALAMP_Msk (0x1FUL << RADIO_IQCALCONF_CALAMP_Pos) /*!< Bit mask of CALAMP field. */

/* Bits 7..0 : Settling time (in number of 16 MHz clock periods) for rssi input to stabilize */
#define RADIO_IQCALCONF_IQCALWAIT_Pos (0UL) /*!< Position of IQCALWAIT field. */
#define RADIO_IQCALCONF_IQCALWAIT_Msk (0xFFUL << RADIO_IQCALCONF_IQCALWAIT_Pos) /*!< Bit mask of IQCALWAIT field. */

/* Register: RADIO_BBPKDETCONF */
/* Description: Configuration for baseband peak detector */

/* Bits 29..24 : Constant output reduction step */
#define RADIO_BBPKDETCONF_DECAYSTEP_Pos (24UL) /*!< Position of DECAYSTEP field. */
#define RADIO_BBPKDETCONF_DECAYSTEP_Msk (0x3FUL << RADIO_BBPKDETCONF_DECAYSTEP_Pos) /*!< Bit mask of DECAYSTEP field. */

/* Bits 23..12 : Low threshold for peak detector */
#define RADIO_BBPKDETCONF_LOWTHRESH_Pos (12UL) /*!< Position of LOWTHRESH field. */
#define RADIO_BBPKDETCONF_LOWTHRESH_Msk (0xFFFUL << RADIO_BBPKDETCONF_LOWTHRESH_Pos) /*!< Bit mask of LOWTHRESH field. */

/* Bits 11..0 : High threshold for peak detector */
#define RADIO_BBPKDETCONF_HIGHTHRES_Pos (0UL) /*!< Position of HIGHTHRES field. */
#define RADIO_BBPKDETCONF_HIGHTHRES_Msk (0xFFFUL << RADIO_BBPKDETCONF_HIGHTHRES_Pos) /*!< Bit mask of HIGHTHRES field. */

/* Register: RADIO_DECFILTERS_OUTMAIN_CKSEL */
/* Description: Clock select register for the output outMain */

/* Bits 2..0 : Number of times to divide the base clock rate by 2. Exception: highest value gives BYPASS, ie. clock is disabled and data out is assigned directly from data in. */
#define RADIO_DECFILTERS_OUTMAIN_CKSEL_CKSEL_Pos (0UL) /*!< Position of CKSEL field. */
#define RADIO_DECFILTERS_OUTMAIN_CKSEL_CKSEL_Msk (0x7UL << RADIO_DECFILTERS_OUTMAIN_CKSEL_CKSEL_Pos) /*!< Bit mask of CKSEL field. */
#define RADIO_DECFILTERS_OUTMAIN_CKSEL_CKSEL_ClkSel32M (0x0UL) /*!< CKSEL_32M */
#define RADIO_DECFILTERS_OUTMAIN_CKSEL_CKSEL_ClkSel16M (0x1UL) /*!< CKSEL_16M */
#define RADIO_DECFILTERS_OUTMAIN_CKSEL_CKSEL_ClkSel8M (0x2UL) /*!< CKSEL_8M */
#define RADIO_DECFILTERS_OUTMAIN_CKSEL_CKSEL_ClkSel4M (0x3UL) /*!< CKSEL_4M */
#define RADIO_DECFILTERS_OUTMAIN_CKSEL_CKSEL_ClkSel2M (0x4UL) /*!< CKSEL_2M */
#define RADIO_DECFILTERS_OUTMAIN_CKSEL_CKSEL_ClkSel1M (0x5UL) /*!< CKSEL_1M */
#define RADIO_DECFILTERS_OUTMAIN_CKSEL_CKSEL_ClkSel500K (0x6UL) /*!< CKSEL_500K */
#define RADIO_DECFILTERS_OUTMAIN_CKSEL_CKSEL_ClkSelBypass (0x7UL) /*!< CKSEL_BYPASS */

/* Register: RADIO_DECFILTERS_DECFIR0_CKSEL */
/* Description: Clock select register for the PUnit decFIR0 of type IP_FIR */

/* Bits 2..0 : Number of times to divide the base clock rate by 2. Exception: highest value gives BYPASS, ie. clock is disabled and data out is assigned directly from data in. */
#define RADIO_DECFILTERS_DECFIR0_CKSEL_CKSEL_Pos (0UL) /*!< Position of CKSEL field. */
#define RADIO_DECFILTERS_DECFIR0_CKSEL_CKSEL_Msk (0x7UL << RADIO_DECFILTERS_DECFIR0_CKSEL_CKSEL_Pos) /*!< Bit mask of CKSEL field. */
#define RADIO_DECFILTERS_DECFIR0_CKSEL_CKSEL_ClkSel32M (0x0UL) /*!< CKSEL_32M */
#define RADIO_DECFILTERS_DECFIR0_CKSEL_CKSEL_ClkSel16M (0x1UL) /*!< CKSEL_16M */
#define RADIO_DECFILTERS_DECFIR0_CKSEL_CKSEL_ClkSel8M (0x2UL) /*!< CKSEL_8M */
#define RADIO_DECFILTERS_DECFIR0_CKSEL_CKSEL_ClkSel4M (0x3UL) /*!< CKSEL_4M */
#define RADIO_DECFILTERS_DECFIR0_CKSEL_CKSEL_ClkSel2M (0x4UL) /*!< CKSEL_2M */
#define RADIO_DECFILTERS_DECFIR0_CKSEL_CKSEL_ClkSel1M (0x5UL) /*!< CKSEL_1M */
#define RADIO_DECFILTERS_DECFIR0_CKSEL_CKSEL_ClkSel500K (0x6UL) /*!< CKSEL_500K */
#define RADIO_DECFILTERS_DECFIR0_CKSEL_CKSEL_ClkSelBypass (0x7UL) /*!< CKSEL_BYPASS */

/* Register: RADIO_DECFILTERS_DECFIR0_CONTROL */
/* Description: Control register for the PUnit decFIR0 of type IP_FIR */

/* Bits 1..0 : Tap-select: number of active taps minus 2 */
#define RADIO_DECFILTERS_DECFIR0_CONTROL_TAPSEL_Pos (0UL) /*!< Position of TAPSEL field. */
#define RADIO_DECFILTERS_DECFIR0_CONTROL_TAPSEL_Msk (0x3UL << RADIO_DECFILTERS_DECFIR0_CONTROL_TAPSEL_Pos) /*!< Bit mask of TAPSEL field. */

/* Register: RADIO_DECFILTERS_DECFIR0_COEFFS0 */
/* Description: Coefficient register 0 for the PUnit decFIR0 of type IP_FIR */

/* Bits 3..0 : Signed filter coefficient 0 */
#define RADIO_DECFILTERS_DECFIR0_COEFFS0_COEFF0_Pos (0UL) /*!< Position of COEFF0 field. */
#define RADIO_DECFILTERS_DECFIR0_COEFFS0_COEFF0_Msk (0xFUL << RADIO_DECFILTERS_DECFIR0_COEFFS0_COEFF0_Pos) /*!< Bit mask of COEFF0 field. */

/* Register: RADIO_DECFILTERS_DECFIR0_COEFFS1 */
/* Description: Coefficient register 1 for the PUnit decFIR0 of type IP_FIR */

/* Bits 3..0 : Signed filter coefficient 1 */
#define RADIO_DECFILTERS_DECFIR0_COEFFS1_COEFF1_Pos (0UL) /*!< Position of COEFF1 field. */
#define RADIO_DECFILTERS_DECFIR0_COEFFS1_COEFF1_Msk (0xFUL << RADIO_DECFILTERS_DECFIR0_COEFFS1_COEFF1_Pos) /*!< Bit mask of COEFF1 field. */

/* Register: RADIO_DECFILTERS_DECFIR0_COEFFS2 */
/* Description: Coefficient register 2 for the PUnit decFIR0 of type IP_FIR */

/* Bits 3..0 : Signed filter coefficient 2 */
#define RADIO_DECFILTERS_DECFIR0_COEFFS2_COEFF2_Pos (0UL) /*!< Position of COEFF2 field. */
#define RADIO_DECFILTERS_DECFIR0_COEFFS2_COEFF2_Msk (0xFUL << RADIO_DECFILTERS_DECFIR0_COEFFS2_COEFF2_Pos) /*!< Bit mask of COEFF2 field. */

/* Register: RADIO_DECFILTERS_DECFIR0_COEFFS3 */
/* Description: Coefficient register 3 for the PUnit decFIR0 of type IP_FIR */

/* Bits 3..0 : Signed filter coefficient 3 */
#define RADIO_DECFILTERS_DECFIR0_COEFFS3_COEFF3_Pos (0UL) /*!< Position of COEFF3 field. */
#define RADIO_DECFILTERS_DECFIR0_COEFFS3_COEFF3_Msk (0xFUL << RADIO_DECFILTERS_DECFIR0_COEFFS3_COEFF3_Pos) /*!< Bit mask of COEFF3 field. */

/* Register: RADIO_DECFILTERS_DECFIR1_CKSEL */
/* Description: Clock select register for the PUnit decFIR1 of type IP_FIR */

/* Bits 2..0 : Number of times to divide the base clock rate by 2. Exception: highest value gives BYPASS, ie. clock is disabled and data out is assigned directly from data in. */
#define RADIO_DECFILTERS_DECFIR1_CKSEL_CKSEL_Pos (0UL) /*!< Position of CKSEL field. */
#define RADIO_DECFILTERS_DECFIR1_CKSEL_CKSEL_Msk (0x7UL << RADIO_DECFILTERS_DECFIR1_CKSEL_CKSEL_Pos) /*!< Bit mask of CKSEL field. */
#define RADIO_DECFILTERS_DECFIR1_CKSEL_CKSEL_ClkSel32M (0x0UL) /*!< CKSEL_32M */
#define RADIO_DECFILTERS_DECFIR1_CKSEL_CKSEL_ClkSel16M (0x1UL) /*!< CKSEL_16M */
#define RADIO_DECFILTERS_DECFIR1_CKSEL_CKSEL_ClkSel8M (0x2UL) /*!< CKSEL_8M */
#define RADIO_DECFILTERS_DECFIR1_CKSEL_CKSEL_ClkSel4M (0x3UL) /*!< CKSEL_4M */
#define RADIO_DECFILTERS_DECFIR1_CKSEL_CKSEL_ClkSel2M (0x4UL) /*!< CKSEL_2M */
#define RADIO_DECFILTERS_DECFIR1_CKSEL_CKSEL_ClkSel1M (0x5UL) /*!< CKSEL_1M */
#define RADIO_DECFILTERS_DECFIR1_CKSEL_CKSEL_ClkSel500K (0x6UL) /*!< CKSEL_500K */
#define RADIO_DECFILTERS_DECFIR1_CKSEL_CKSEL_ClkSelBypass (0x7UL) /*!< CKSEL_BYPASS */

/* Register: RADIO_DECFILTERS_DECFIR1_CONTROL */
/* Description: Control register for the PUnit decFIR1 of type IP_FIR */

/* Bits 2..0 : Tap-select: number of active taps minus 2 */
#define RADIO_DECFILTERS_DECFIR1_CONTROL_TAPSEL_Pos (0UL) /*!< Position of TAPSEL field. */
#define RADIO_DECFILTERS_DECFIR1_CONTROL_TAPSEL_Msk (0x7UL << RADIO_DECFILTERS_DECFIR1_CONTROL_TAPSEL_Pos) /*!< Bit mask of TAPSEL field. */

/* Register: RADIO_DECFILTERS_DECFIR1_COEFFS0 */
/* Description: Coefficient register 0 for the PUnit decFIR1 of type IP_FIR */

/* Bits 5..0 : Signed filter coefficient 0 */
#define RADIO_DECFILTERS_DECFIR1_COEFFS0_COEFF0_Pos (0UL) /*!< Position of COEFF0 field. */
#define RADIO_DECFILTERS_DECFIR1_COEFFS0_COEFF0_Msk (0x3FUL << RADIO_DECFILTERS_DECFIR1_COEFFS0_COEFF0_Pos) /*!< Bit mask of COEFF0 field. */

/* Register: RADIO_DECFILTERS_DECFIR1_COEFFS1 */
/* Description: Coefficient register 1 for the PUnit decFIR1 of type IP_FIR */

/* Bits 5..0 : Signed filter coefficient 1 */
#define RADIO_DECFILTERS_DECFIR1_COEFFS1_COEFF1_Pos (0UL) /*!< Position of COEFF1 field. */
#define RADIO_DECFILTERS_DECFIR1_COEFFS1_COEFF1_Msk (0x3FUL << RADIO_DECFILTERS_DECFIR1_COEFFS1_COEFF1_Pos) /*!< Bit mask of COEFF1 field. */

/* Register: RADIO_DECFILTERS_DECFIR1_COEFFS2 */
/* Description: Coefficient register 2 for the PUnit decFIR1 of type IP_FIR */

/* Bits 5..0 : Signed filter coefficient 2 */
#define RADIO_DECFILTERS_DECFIR1_COEFFS2_COEFF2_Pos (0UL) /*!< Position of COEFF2 field. */
#define RADIO_DECFILTERS_DECFIR1_COEFFS2_COEFF2_Msk (0x3FUL << RADIO_DECFILTERS_DECFIR1_COEFFS2_COEFF2_Pos) /*!< Bit mask of COEFF2 field. */

/* Register: RADIO_DECFILTERS_DECFIR1_COEFFS3 */
/* Description: Coefficient register 3 for the PUnit decFIR1 of type IP_FIR */

/* Bits 5..0 : Signed filter coefficient 3 */
#define RADIO_DECFILTERS_DECFIR1_COEFFS3_COEFF3_Pos (0UL) /*!< Position of COEFF3 field. */
#define RADIO_DECFILTERS_DECFIR1_COEFFS3_COEFF3_Msk (0x3FUL << RADIO_DECFILTERS_DECFIR1_COEFFS3_COEFF3_Pos) /*!< Bit mask of COEFF3 field. */

/* Register: RADIO_DECFILTERS_DECFIR1_COEFFS4 */
/* Description: Coefficient register 4 for the PUnit decFIR1 of type IP_FIR */

/* Bits 5..0 : Signed filter coefficient 4 */
#define RADIO_DECFILTERS_DECFIR1_COEFFS4_COEFF4_Pos (0UL) /*!< Position of COEFF4 field. */
#define RADIO_DECFILTERS_DECFIR1_COEFFS4_COEFF4_Msk (0x3FUL << RADIO_DECFILTERS_DECFIR1_COEFFS4_COEFF4_Pos) /*!< Bit mask of COEFF4 field. */

/* Register: RADIO_DECFILTERS_DECFIR1_COEFFS5 */
/* Description: Coefficient register 5 for the PUnit decFIR1 of type IP_FIR */

/* Bits 5..0 : Signed filter coefficient 5 */
#define RADIO_DECFILTERS_DECFIR1_COEFFS5_COEFF5_Pos (0UL) /*!< Position of COEFF5 field. */
#define RADIO_DECFILTERS_DECFIR1_COEFFS5_COEFF5_Msk (0x3FUL << RADIO_DECFILTERS_DECFIR1_COEFFS5_COEFF5_Pos) /*!< Bit mask of COEFF5 field. */

/* Register: RADIO_DECFILTERS_DECFIR2_CKSEL */
/* Description: Clock select register for the PUnit decFIR2 of type IP_FIR */

/* Bits 2..0 : Number of times to divide the base clock rate by 2. Exception: highest value gives BYPASS, ie. clock is disabled and data out is assigned directly from data in. */
#define RADIO_DECFILTERS_DECFIR2_CKSEL_CKSEL_Pos (0UL) /*!< Position of CKSEL field. */
#define RADIO_DECFILTERS_DECFIR2_CKSEL_CKSEL_Msk (0x7UL << RADIO_DECFILTERS_DECFIR2_CKSEL_CKSEL_Pos) /*!< Bit mask of CKSEL field. */
#define RADIO_DECFILTERS_DECFIR2_CKSEL_CKSEL_ClkSel32M (0x0UL) /*!< CKSEL_32M */
#define RADIO_DECFILTERS_DECFIR2_CKSEL_CKSEL_ClkSel16M (0x1UL) /*!< CKSEL_16M */
#define RADIO_DECFILTERS_DECFIR2_CKSEL_CKSEL_ClkSel8M (0x2UL) /*!< CKSEL_8M */
#define RADIO_DECFILTERS_DECFIR2_CKSEL_CKSEL_ClkSel4M (0x3UL) /*!< CKSEL_4M */
#define RADIO_DECFILTERS_DECFIR2_CKSEL_CKSEL_ClkSel2M (0x4UL) /*!< CKSEL_2M */
#define RADIO_DECFILTERS_DECFIR2_CKSEL_CKSEL_ClkSel1M (0x5UL) /*!< CKSEL_1M */
#define RADIO_DECFILTERS_DECFIR2_CKSEL_CKSEL_ClkSel500K (0x6UL) /*!< CKSEL_500K */
#define RADIO_DECFILTERS_DECFIR2_CKSEL_CKSEL_ClkSelBypass (0x7UL) /*!< CKSEL_BYPASS */

/* Register: RADIO_DECFILTERS_DECFIR2_CONTROL */
/* Description: Control register for the PUnit decFIR2 of type IP_FIR */

/* Bits 2..0 : Tap-select: number of active taps minus 2 */
#define RADIO_DECFILTERS_DECFIR2_CONTROL_TAPSEL_Pos (0UL) /*!< Position of TAPSEL field. */
#define RADIO_DECFILTERS_DECFIR2_CONTROL_TAPSEL_Msk (0x7UL << RADIO_DECFILTERS_DECFIR2_CONTROL_TAPSEL_Pos) /*!< Bit mask of TAPSEL field. */

/* Register: RADIO_DECFILTERS_DECFIR2_COEFFS0 */
/* Description: Coefficient register 0 for the PUnit decFIR2 of type IP_FIR */

/* Bits 5..0 : Signed filter coefficient 0 */
#define RADIO_DECFILTERS_DECFIR2_COEFFS0_COEFF0_Pos (0UL) /*!< Position of COEFF0 field. */
#define RADIO_DECFILTERS_DECFIR2_COEFFS0_COEFF0_Msk (0x3FUL << RADIO_DECFILTERS_DECFIR2_COEFFS0_COEFF0_Pos) /*!< Bit mask of COEFF0 field. */

/* Register: RADIO_DECFILTERS_DECFIR2_COEFFS1 */
/* Description: Coefficient register 1 for the PUnit decFIR2 of type IP_FIR */

/* Bits 5..0 : Signed filter coefficient 1 */
#define RADIO_DECFILTERS_DECFIR2_COEFFS1_COEFF1_Pos (0UL) /*!< Position of COEFF1 field. */
#define RADIO_DECFILTERS_DECFIR2_COEFFS1_COEFF1_Msk (0x3FUL << RADIO_DECFILTERS_DECFIR2_COEFFS1_COEFF1_Pos) /*!< Bit mask of COEFF1 field. */

/* Register: RADIO_DECFILTERS_DECFIR2_COEFFS2 */
/* Description: Coefficient register 2 for the PUnit decFIR2 of type IP_FIR */

/* Bits 5..0 : Signed filter coefficient 2 */
#define RADIO_DECFILTERS_DECFIR2_COEFFS2_COEFF2_Pos (0UL) /*!< Position of COEFF2 field. */
#define RADIO_DECFILTERS_DECFIR2_COEFFS2_COEFF2_Msk (0x3FUL << RADIO_DECFILTERS_DECFIR2_COEFFS2_COEFF2_Pos) /*!< Bit mask of COEFF2 field. */

/* Register: RADIO_DECFILTERS_DECFIR2_COEFFS3 */
/* Description: Coefficient register 3 for the PUnit decFIR2 of type IP_FIR */

/* Bits 5..0 : Signed filter coefficient 3 */
#define RADIO_DECFILTERS_DECFIR2_COEFFS3_COEFF3_Pos (0UL) /*!< Position of COEFF3 field. */
#define RADIO_DECFILTERS_DECFIR2_COEFFS3_COEFF3_Msk (0x3FUL << RADIO_DECFILTERS_DECFIR2_COEFFS3_COEFF3_Pos) /*!< Bit mask of COEFF3 field. */

/* Register: RADIO_DECFILTERS_DECFIR2_COEFFS4 */
/* Description: Coefficient register 4 for the PUnit decFIR2 of type IP_FIR */

/* Bits 5..0 : Signed filter coefficient 4 */
#define RADIO_DECFILTERS_DECFIR2_COEFFS4_COEFF4_Pos (0UL) /*!< Position of COEFF4 field. */
#define RADIO_DECFILTERS_DECFIR2_COEFFS4_COEFF4_Msk (0x3FUL << RADIO_DECFILTERS_DECFIR2_COEFFS4_COEFF4_Pos) /*!< Bit mask of COEFF4 field. */

/* Register: RADIO_DECFILTERS_DECFIR2_COEFFS5 */
/* Description: Coefficient register 5 for the PUnit decFIR2 of type IP_FIR */

/* Bits 5..0 : Signed filter coefficient 5 */
#define RADIO_DECFILTERS_DECFIR2_COEFFS5_COEFF5_Pos (0UL) /*!< Position of COEFF5 field. */
#define RADIO_DECFILTERS_DECFIR2_COEFFS5_COEFF5_Msk (0x3FUL << RADIO_DECFILTERS_DECFIR2_COEFFS5_COEFF5_Pos) /*!< Bit mask of COEFF5 field. */

/* Register: RADIO_CHANNELFILTERS_OUTMAIN_CKSEL */
/* Description: Clock select register for the output outMain */

/* Bits 2..0 : Number of times to divide the base clock rate by 2. Exception: highest value gives BYPASS, ie. clock is disabled and data out is assigned directly from data in. */
#define RADIO_CHANNELFILTERS_OUTMAIN_CKSEL_CKSEL_Pos (0UL) /*!< Position of CKSEL field. */
#define RADIO_CHANNELFILTERS_OUTMAIN_CKSEL_CKSEL_Msk (0x7UL << RADIO_CHANNELFILTERS_OUTMAIN_CKSEL_CKSEL_Pos) /*!< Bit mask of CKSEL field. */
#define RADIO_CHANNELFILTERS_OUTMAIN_CKSEL_CKSEL_ClkSel32M (0x0UL) /*!< CKSEL_32M */
#define RADIO_CHANNELFILTERS_OUTMAIN_CKSEL_CKSEL_ClkSel16M (0x1UL) /*!< CKSEL_16M */
#define RADIO_CHANNELFILTERS_OUTMAIN_CKSEL_CKSEL_ClkSel8M (0x2UL) /*!< CKSEL_8M */
#define RADIO_CHANNELFILTERS_OUTMAIN_CKSEL_CKSEL_ClkSel4M (0x3UL) /*!< CKSEL_4M */
#define RADIO_CHANNELFILTERS_OUTMAIN_CKSEL_CKSEL_ClkSel2M (0x4UL) /*!< CKSEL_2M */
#define RADIO_CHANNELFILTERS_OUTMAIN_CKSEL_CKSEL_ClkSel1M (0x5UL) /*!< CKSEL_1M */
#define RADIO_CHANNELFILTERS_OUTMAIN_CKSEL_CKSEL_ClkSel500K (0x6UL) /*!< CKSEL_500K */
#define RADIO_CHANNELFILTERS_OUTMAIN_CKSEL_CKSEL_ClkSelBypass (0x7UL) /*!< CKSEL_BYPASS */

/* Register: RADIO_CHANNELFILTERS_OUTMAIN_SOURCE */
/* Description: Source select register for the output outMain */

/* Bits 3..0 : Data source select */
#define RADIO_CHANNELFILTERS_OUTMAIN_SOURCE_SOURCE_Pos (0UL) /*!< Position of SOURCE field. */
#define RADIO_CHANNELFILTERS_OUTMAIN_SOURCE_SOURCE_Msk (0xFUL << RADIO_CHANNELFILTERS_OUTMAIN_SOURCE_SOURCE_Pos) /*!< Bit mask of SOURCE field. */
#define RADIO_CHANNELFILTERS_OUTMAIN_SOURCE_SOURCE_SrcIIR0 (0x0UL) /*!< SRC_IIR0 (NOT LEGAL) */
#define RADIO_CHANNELFILTERS_OUTMAIN_SOURCE_SOURCE_SrcIIR1 (0x1UL) /*!< SRC_IIR1 (NOT LEGAL) */
#define RADIO_CHANNELFILTERS_OUTMAIN_SOURCE_SOURCE_SrcNotchIIR0 (0x2UL) /*!< SRC_NOTCHIIR0 (NOT LEGAL) */
#define RADIO_CHANNELFILTERS_OUTMAIN_SOURCE_SOURCE_SrcNotchIIR1 (0x3UL) /*!< SRC_NOTCHIIR1 */
#define RADIO_CHANNELFILTERS_OUTMAIN_SOURCE_SOURCE_SrcDecFIR (0x4UL) /*!< SRC_DECFIR */
#define RADIO_CHANNELFILTERS_OUTMAIN_SOURCE_SOURCE_SrcInMain (0xFUL) /*!< SRC_INMAIN (NOT LEGAL) */

/* Register: RADIO_CHANNELFILTERS_OUTPEAKDET_CKSEL */
/* Description: Clock select register for the output outPeakDet */

/* Bits 2..0 : Number of times to divide the base clock rate by 2. Exception: highest value gives BYPASS, ie. clock is disabled and data out is assigned directly from data in. */
#define RADIO_CHANNELFILTERS_OUTPEAKDET_CKSEL_CKSEL_Pos (0UL) /*!< Position of CKSEL field. */
#define RADIO_CHANNELFILTERS_OUTPEAKDET_CKSEL_CKSEL_Msk (0x7UL << RADIO_CHANNELFILTERS_OUTPEAKDET_CKSEL_CKSEL_Pos) /*!< Bit mask of CKSEL field. */
#define RADIO_CHANNELFILTERS_OUTPEAKDET_CKSEL_CKSEL_ClkSel32M (0x0UL) /*!< CKSEL_32M */
#define RADIO_CHANNELFILTERS_OUTPEAKDET_CKSEL_CKSEL_ClkSel16M (0x1UL) /*!< CKSEL_16M */
#define RADIO_CHANNELFILTERS_OUTPEAKDET_CKSEL_CKSEL_ClkSel8M (0x2UL) /*!< CKSEL_8M */
#define RADIO_CHANNELFILTERS_OUTPEAKDET_CKSEL_CKSEL_ClkSel4M (0x3UL) /*!< CKSEL_4M */
#define RADIO_CHANNELFILTERS_OUTPEAKDET_CKSEL_CKSEL_ClkSel2M (0x4UL) /*!< CKSEL_2M */
#define RADIO_CHANNELFILTERS_OUTPEAKDET_CKSEL_CKSEL_ClkSel1M (0x5UL) /*!< CKSEL_1M */
#define RADIO_CHANNELFILTERS_OUTPEAKDET_CKSEL_CKSEL_ClkSel500K (0x6UL) /*!< CKSEL_500K */
#define RADIO_CHANNELFILTERS_OUTPEAKDET_CKSEL_CKSEL_ClkSelBypass (0x7UL) /*!< CKSEL_BYPASS */

/* Register: RADIO_CHANNELFILTERS_OUTPEAKDET_SOURCE */
/* Description: Source select register for the output outPeakDet */

/* Bits 3..0 : Data source select */
#define RADIO_CHANNELFILTERS_OUTPEAKDET_SOURCE_SOURCE_Pos (0UL) /*!< Position of SOURCE field. */
#define RADIO_CHANNELFILTERS_OUTPEAKDET_SOURCE_SOURCE_Msk (0xFUL << RADIO_CHANNELFILTERS_OUTPEAKDET_SOURCE_SOURCE_Pos) /*!< Bit mask of SOURCE field. */
#define RADIO_CHANNELFILTERS_OUTPEAKDET_SOURCE_SOURCE_SrcIIR0 (0x0UL) /*!< SRC_IIR0 (NOT LEGAL) */
#define RADIO_CHANNELFILTERS_OUTPEAKDET_SOURCE_SOURCE_SrcIIR1 (0x1UL) /*!< SRC_IIR1 (NOT LEGAL) */
#define RADIO_CHANNELFILTERS_OUTPEAKDET_SOURCE_SOURCE_SrcNotchIIR0 (0x2UL) /*!< SRC_NOTCHIIR0 (NOT LEGAL) */
#define RADIO_CHANNELFILTERS_OUTPEAKDET_SOURCE_SOURCE_SrcNotchIIR1 (0x3UL) /*!< SRC_NOTCHIIR1 */
#define RADIO_CHANNELFILTERS_OUTPEAKDET_SOURCE_SOURCE_SrcDecFIR (0x4UL) /*!< SRC_DECFIR */
#define RADIO_CHANNELFILTERS_OUTPEAKDET_SOURCE_SOURCE_SrcInMain (0xFUL) /*!< SRC_INMAIN (NOT LEGAL) */

/* Register: RADIO_CHANNELFILTERS_IIR0_CKSEL */
/* Description: Clock select register for the PUnit IIR0 of type IP_IIR2 */

/* Bits 2..0 : Number of times to divide the base clock rate by 2. Exception: highest value gives BYPASS, ie. clock is disabled and data out is assigned directly from data in. */
#define RADIO_CHANNELFILTERS_IIR0_CKSEL_CKSEL_Pos (0UL) /*!< Position of CKSEL field. */
#define RADIO_CHANNELFILTERS_IIR0_CKSEL_CKSEL_Msk (0x7UL << RADIO_CHANNELFILTERS_IIR0_CKSEL_CKSEL_Pos) /*!< Bit mask of CKSEL field. */
#define RADIO_CHANNELFILTERS_IIR0_CKSEL_CKSEL_ClkSel32M (0x0UL) /*!< CKSEL_32M */
#define RADIO_CHANNELFILTERS_IIR0_CKSEL_CKSEL_ClkSel16M (0x1UL) /*!< CKSEL_16M */
#define RADIO_CHANNELFILTERS_IIR0_CKSEL_CKSEL_ClkSel8M (0x2UL) /*!< CKSEL_8M */
#define RADIO_CHANNELFILTERS_IIR0_CKSEL_CKSEL_ClkSel4M (0x3UL) /*!< CKSEL_4M */
#define RADIO_CHANNELFILTERS_IIR0_CKSEL_CKSEL_ClkSel2M (0x4UL) /*!< CKSEL_2M */
#define RADIO_CHANNELFILTERS_IIR0_CKSEL_CKSEL_ClkSel1M (0x5UL) /*!< CKSEL_1M */
#define RADIO_CHANNELFILTERS_IIR0_CKSEL_CKSEL_ClkSel500K (0x6UL) /*!< CKSEL_500K */
#define RADIO_CHANNELFILTERS_IIR0_CKSEL_CKSEL_ClkSelBypass (0x7UL) /*!< CKSEL_BYPASS */

/* Register: RADIO_CHANNELFILTERS_IIR0_STATUS */
/* Description: Status register for the PUnit IIR0 of type IP_IIR2 */

/* Bits 1..0 : Saturation status for I/Q (bit 0/1) component (bitwise write 1 to clear) */
#define RADIO_CHANNELFILTERS_IIR0_STATUS_IQSATURATION_Pos (0UL) /*!< Position of IQSATURATION field. */
#define RADIO_CHANNELFILTERS_IIR0_STATUS_IQSATURATION_Msk (0x3UL << RADIO_CHANNELFILTERS_IIR0_STATUS_IQSATURATION_Pos) /*!< Bit mask of IQSATURATION field. */

/* Register: RADIO_CHANNELFILTERS_IIR0_COEFFSB0 */
/* Description: Coefficient register B0 for the PUnit IIR0 of type IP_IIR2 */

/* Bits 11..0 : Signed filter coefficient B0 */
#define RADIO_CHANNELFILTERS_IIR0_COEFFSB0_COEFFB0_Pos (0UL) /*!< Position of COEFFB0 field. */
#define RADIO_CHANNELFILTERS_IIR0_COEFFSB0_COEFFB0_Msk (0xFFFUL << RADIO_CHANNELFILTERS_IIR0_COEFFSB0_COEFFB0_Pos) /*!< Bit mask of COEFFB0 field. */

/* Register: RADIO_CHANNELFILTERS_IIR0_COEFFSB1 */
/* Description: Coefficient register B1 for the PUnit IIR0 of type IP_IIR2 */

/* Bits 11..0 : Signed filter coefficient B1 */
#define RADIO_CHANNELFILTERS_IIR0_COEFFSB1_COEFFB1_Pos (0UL) /*!< Position of COEFFB1 field. */
#define RADIO_CHANNELFILTERS_IIR0_COEFFSB1_COEFFB1_Msk (0xFFFUL << RADIO_CHANNELFILTERS_IIR0_COEFFSB1_COEFFB1_Pos) /*!< Bit mask of COEFFB1 field. */

/* Register: RADIO_CHANNELFILTERS_IIR0_COEFFSB2 */
/* Description: Coefficient register B2 for the PUnit IIR0 of type IP_IIR2 */

/* Bits 11..0 : Signed filter coefficient B2 */
#define RADIO_CHANNELFILTERS_IIR0_COEFFSB2_COEFFB2_Pos (0UL) /*!< Position of COEFFB2 field. */
#define RADIO_CHANNELFILTERS_IIR0_COEFFSB2_COEFFB2_Msk (0xFFFUL << RADIO_CHANNELFILTERS_IIR0_COEFFSB2_COEFFB2_Pos) /*!< Bit mask of COEFFB2 field. */

/* Register: RADIO_CHANNELFILTERS_IIR0_COEFFSA1 */
/* Description: Coefficient register A1 for the PUnit IIR0 of type IP_IIR2 */

/* Bits 11..0 : Signed filter coefficient A1 */
#define RADIO_CHANNELFILTERS_IIR0_COEFFSA1_COEFFA1_Pos (0UL) /*!< Position of COEFFA1 field. */
#define RADIO_CHANNELFILTERS_IIR0_COEFFSA1_COEFFA1_Msk (0xFFFUL << RADIO_CHANNELFILTERS_IIR0_COEFFSA1_COEFFA1_Pos) /*!< Bit mask of COEFFA1 field. */

/* Register: RADIO_CHANNELFILTERS_IIR0_COEFFSA2 */
/* Description: Coefficient register A2 for the PUnit IIR0 of type IP_IIR2 */

/* Bits 11..0 : Signed filter coefficient A2 */
#define RADIO_CHANNELFILTERS_IIR0_COEFFSA2_COEFFA2_Pos (0UL) /*!< Position of COEFFA2 field. */
#define RADIO_CHANNELFILTERS_IIR0_COEFFSA2_COEFFA2_Msk (0xFFFUL << RADIO_CHANNELFILTERS_IIR0_COEFFSA2_COEFFA2_Pos) /*!< Bit mask of COEFFA2 field. */

/* Register: RADIO_CHANNELFILTERS_IIR1_CKSEL */
/* Description: Clock select register for the PUnit IIR1 of type IP_IIR2 */

/* Bits 2..0 : Number of times to divide the base clock rate by 2. Exception: highest value gives BYPASS, ie. clock is disabled and data out is assigned directly from data in. */
#define RADIO_CHANNELFILTERS_IIR1_CKSEL_CKSEL_Pos (0UL) /*!< Position of CKSEL field. */
#define RADIO_CHANNELFILTERS_IIR1_CKSEL_CKSEL_Msk (0x7UL << RADIO_CHANNELFILTERS_IIR1_CKSEL_CKSEL_Pos) /*!< Bit mask of CKSEL field. */
#define RADIO_CHANNELFILTERS_IIR1_CKSEL_CKSEL_ClkSel32M (0x0UL) /*!< CKSEL_32M */
#define RADIO_CHANNELFILTERS_IIR1_CKSEL_CKSEL_ClkSel16M (0x1UL) /*!< CKSEL_16M */
#define RADIO_CHANNELFILTERS_IIR1_CKSEL_CKSEL_ClkSel8M (0x2UL) /*!< CKSEL_8M */
#define RADIO_CHANNELFILTERS_IIR1_CKSEL_CKSEL_ClkSel4M (0x3UL) /*!< CKSEL_4M */
#define RADIO_CHANNELFILTERS_IIR1_CKSEL_CKSEL_ClkSel2M (0x4UL) /*!< CKSEL_2M */
#define RADIO_CHANNELFILTERS_IIR1_CKSEL_CKSEL_ClkSel1M (0x5UL) /*!< CKSEL_1M */
#define RADIO_CHANNELFILTERS_IIR1_CKSEL_CKSEL_ClkSel500K (0x6UL) /*!< CKSEL_500K */
#define RADIO_CHANNELFILTERS_IIR1_CKSEL_CKSEL_ClkSelBypass (0x7UL) /*!< CKSEL_BYPASS */

/* Register: RADIO_CHANNELFILTERS_IIR1_STATUS */
/* Description: Status register for the PUnit IIR1 of type IP_IIR2 */

/* Bits 1..0 : Saturation status for I/Q (bit 0/1) component (bitwise write 1 to clear) */
#define RADIO_CHANNELFILTERS_IIR1_STATUS_IQSATURATION_Pos (0UL) /*!< Position of IQSATURATION field. */
#define RADIO_CHANNELFILTERS_IIR1_STATUS_IQSATURATION_Msk (0x3UL << RADIO_CHANNELFILTERS_IIR1_STATUS_IQSATURATION_Pos) /*!< Bit mask of IQSATURATION field. */

/* Register: RADIO_CHANNELFILTERS_IIR1_COEFFSB0 */
/* Description: Coefficient register B0 for the PUnit IIR1 of type IP_IIR2 */

/* Bits 11..0 : Signed filter coefficient B0 */
#define RADIO_CHANNELFILTERS_IIR1_COEFFSB0_COEFFB0_Pos (0UL) /*!< Position of COEFFB0 field. */
#define RADIO_CHANNELFILTERS_IIR1_COEFFSB0_COEFFB0_Msk (0xFFFUL << RADIO_CHANNELFILTERS_IIR1_COEFFSB0_COEFFB0_Pos) /*!< Bit mask of COEFFB0 field. */

/* Register: RADIO_CHANNELFILTERS_IIR1_COEFFSB1 */
/* Description: Coefficient register B1 for the PUnit IIR1 of type IP_IIR2 */

/* Bits 11..0 : Signed filter coefficient B1 */
#define RADIO_CHANNELFILTERS_IIR1_COEFFSB1_COEFFB1_Pos (0UL) /*!< Position of COEFFB1 field. */
#define RADIO_CHANNELFILTERS_IIR1_COEFFSB1_COEFFB1_Msk (0xFFFUL << RADIO_CHANNELFILTERS_IIR1_COEFFSB1_COEFFB1_Pos) /*!< Bit mask of COEFFB1 field. */

/* Register: RADIO_CHANNELFILTERS_IIR1_COEFFSB2 */
/* Description: Coefficient register B2 for the PUnit IIR1 of type IP_IIR2 */

/* Bits 11..0 : Signed filter coefficient B2 */
#define RADIO_CHANNELFILTERS_IIR1_COEFFSB2_COEFFB2_Pos (0UL) /*!< Position of COEFFB2 field. */
#define RADIO_CHANNELFILTERS_IIR1_COEFFSB2_COEFFB2_Msk (0xFFFUL << RADIO_CHANNELFILTERS_IIR1_COEFFSB2_COEFFB2_Pos) /*!< Bit mask of COEFFB2 field. */

/* Register: RADIO_CHANNELFILTERS_IIR1_COEFFSA1 */
/* Description: Coefficient register A1 for the PUnit IIR1 of type IP_IIR2 */

/* Bits 11..0 : Signed filter coefficient A1 */
#define RADIO_CHANNELFILTERS_IIR1_COEFFSA1_COEFFA1_Pos (0UL) /*!< Position of COEFFA1 field. */
#define RADIO_CHANNELFILTERS_IIR1_COEFFSA1_COEFFA1_Msk (0xFFFUL << RADIO_CHANNELFILTERS_IIR1_COEFFSA1_COEFFA1_Pos) /*!< Bit mask of COEFFA1 field. */

/* Register: RADIO_CHANNELFILTERS_IIR1_COEFFSA2 */
/* Description: Coefficient register A2 for the PUnit IIR1 of type IP_IIR2 */

/* Bits 11..0 : Signed filter coefficient A2 */
#define RADIO_CHANNELFILTERS_IIR1_COEFFSA2_COEFFA2_Pos (0UL) /*!< Position of COEFFA2 field. */
#define RADIO_CHANNELFILTERS_IIR1_COEFFSA2_COEFFA2_Msk (0xFFFUL << RADIO_CHANNELFILTERS_IIR1_COEFFSA2_COEFFA2_Pos) /*!< Bit mask of COEFFA2 field. */

/* Register: RADIO_CHANNELFILTERS_NOTCHIIR0_CKSEL */
/* Description: Clock select register for the PUnit notchIIR0 of type IP_IIR2 */

/* Bits 2..0 : Number of times to divide the base clock rate by 2. Exception: highest value gives BYPASS, ie. clock is disabled and data out is assigned directly from data in. */
#define RADIO_CHANNELFILTERS_NOTCHIIR0_CKSEL_CKSEL_Pos (0UL) /*!< Position of CKSEL field. */
#define RADIO_CHANNELFILTERS_NOTCHIIR0_CKSEL_CKSEL_Msk (0x7UL << RADIO_CHANNELFILTERS_NOTCHIIR0_CKSEL_CKSEL_Pos) /*!< Bit mask of CKSEL field. */
#define RADIO_CHANNELFILTERS_NOTCHIIR0_CKSEL_CKSEL_ClkSel32M (0x0UL) /*!< CKSEL_32M */
#define RADIO_CHANNELFILTERS_NOTCHIIR0_CKSEL_CKSEL_ClkSel16M (0x1UL) /*!< CKSEL_16M */
#define RADIO_CHANNELFILTERS_NOTCHIIR0_CKSEL_CKSEL_ClkSel8M (0x2UL) /*!< CKSEL_8M */
#define RADIO_CHANNELFILTERS_NOTCHIIR0_CKSEL_CKSEL_ClkSel4M (0x3UL) /*!< CKSEL_4M */
#define RADIO_CHANNELFILTERS_NOTCHIIR0_CKSEL_CKSEL_ClkSel2M (0x4UL) /*!< CKSEL_2M */
#define RADIO_CHANNELFILTERS_NOTCHIIR0_CKSEL_CKSEL_ClkSel1M (0x5UL) /*!< CKSEL_1M */
#define RADIO_CHANNELFILTERS_NOTCHIIR0_CKSEL_CKSEL_ClkSel500K (0x6UL) /*!< CKSEL_500K */
#define RADIO_CHANNELFILTERS_NOTCHIIR0_CKSEL_CKSEL_ClkSelBypass (0x7UL) /*!< CKSEL_BYPASS */

/* Register: RADIO_CHANNELFILTERS_NOTCHIIR0_SOURCE */
/* Description: Source select register for the PUnit notchIIR0 of type IP_IIR2 */

/* Bits 3..0 : Data source select */
#define RADIO_CHANNELFILTERS_NOTCHIIR0_SOURCE_SOURCE_Pos (0UL) /*!< Position of SOURCE field. */
#define RADIO_CHANNELFILTERS_NOTCHIIR0_SOURCE_SOURCE_Msk (0xFUL << RADIO_CHANNELFILTERS_NOTCHIIR0_SOURCE_SOURCE_Pos) /*!< Bit mask of SOURCE field. */
#define RADIO_CHANNELFILTERS_NOTCHIIR0_SOURCE_SOURCE_SrcIIR0 (0x0UL) /*!< SRC_IIR0 (NOT LEGAL) */
#define RADIO_CHANNELFILTERS_NOTCHIIR0_SOURCE_SOURCE_SrcIIR1 (0x1UL) /*!< SRC_IIR1 */
#define RADIO_CHANNELFILTERS_NOTCHIIR0_SOURCE_SOURCE_SrcNotchIIR0 (0x2UL) /*!< SRC_NOTCHIIR0 (NOT LEGAL) */
#define RADIO_CHANNELFILTERS_NOTCHIIR0_SOURCE_SOURCE_SrcNotchIIR1 (0x3UL) /*!< SRC_NOTCHIIR1 (NOT LEGAL) */
#define RADIO_CHANNELFILTERS_NOTCHIIR0_SOURCE_SOURCE_SrcDecFIR (0x4UL) /*!< SRC_DECFIR */
#define RADIO_CHANNELFILTERS_NOTCHIIR0_SOURCE_SOURCE_SrcInMain (0xFUL) /*!< SRC_INMAIN (NOT LEGAL) */

/* Register: RADIO_CHANNELFILTERS_NOTCHIIR0_STATUS */
/* Description: Status register for the PUnit notchIIR0 of type IP_IIR2 */

/* Bits 1..0 : Saturation status for I/Q (bit 0/1) component (bitwise write 1 to clear) */
#define RADIO_CHANNELFILTERS_NOTCHIIR0_STATUS_IQSATURATION_Pos (0UL) /*!< Position of IQSATURATION field. */
#define RADIO_CHANNELFILTERS_NOTCHIIR0_STATUS_IQSATURATION_Msk (0x3UL << RADIO_CHANNELFILTERS_NOTCHIIR0_STATUS_IQSATURATION_Pos) /*!< Bit mask of IQSATURATION field. */

/* Register: RADIO_CHANNELFILTERS_NOTCHIIR0_COEFFSB0 */
/* Description: Coefficient register B0 for the PUnit notchIIR0 of type IP_IIR2 */

/* Bits 11..0 : Signed filter coefficient B0 */
#define RADIO_CHANNELFILTERS_NOTCHIIR0_COEFFSB0_COEFFB0_Pos (0UL) /*!< Position of COEFFB0 field. */
#define RADIO_CHANNELFILTERS_NOTCHIIR0_COEFFSB0_COEFFB0_Msk (0xFFFUL << RADIO_CHANNELFILTERS_NOTCHIIR0_COEFFSB0_COEFFB0_Pos) /*!< Bit mask of COEFFB0 field. */

/* Register: RADIO_CHANNELFILTERS_NOTCHIIR0_COEFFSB1 */
/* Description: Coefficient register B1 for the PUnit notchIIR0 of type IP_IIR2 */

/* Bits 11..0 : Signed filter coefficient B1 */
#define RADIO_CHANNELFILTERS_NOTCHIIR0_COEFFSB1_COEFFB1_Pos (0UL) /*!< Position of COEFFB1 field. */
#define RADIO_CHANNELFILTERS_NOTCHIIR0_COEFFSB1_COEFFB1_Msk (0xFFFUL << RADIO_CHANNELFILTERS_NOTCHIIR0_COEFFSB1_COEFFB1_Pos) /*!< Bit mask of COEFFB1 field. */

/* Register: RADIO_CHANNELFILTERS_NOTCHIIR0_COEFFSB2 */
/* Description: Coefficient register B2 for the PUnit notchIIR0 of type IP_IIR2 */

/* Bits 11..0 : Signed filter coefficient B2 */
#define RADIO_CHANNELFILTERS_NOTCHIIR0_COEFFSB2_COEFFB2_Pos (0UL) /*!< Position of COEFFB2 field. */
#define RADIO_CHANNELFILTERS_NOTCHIIR0_COEFFSB2_COEFFB2_Msk (0xFFFUL << RADIO_CHANNELFILTERS_NOTCHIIR0_COEFFSB2_COEFFB2_Pos) /*!< Bit mask of COEFFB2 field. */

/* Register: RADIO_CHANNELFILTERS_NOTCHIIR0_COEFFSA1 */
/* Description: Coefficient register A1 for the PUnit notchIIR0 of type IP_IIR2 */

/* Bits 11..0 : Signed filter coefficient A1 */
#define RADIO_CHANNELFILTERS_NOTCHIIR0_COEFFSA1_COEFFA1_Pos (0UL) /*!< Position of COEFFA1 field. */
#define RADIO_CHANNELFILTERS_NOTCHIIR0_COEFFSA1_COEFFA1_Msk (0xFFFUL << RADIO_CHANNELFILTERS_NOTCHIIR0_COEFFSA1_COEFFA1_Pos) /*!< Bit mask of COEFFA1 field. */

/* Register: RADIO_CHANNELFILTERS_NOTCHIIR0_COEFFSA2 */
/* Description: Coefficient register A2 for the PUnit notchIIR0 of type IP_IIR2 */

/* Bits 11..0 : Signed filter coefficient A2 */
#define RADIO_CHANNELFILTERS_NOTCHIIR0_COEFFSA2_COEFFA2_Pos (0UL) /*!< Position of COEFFA2 field. */
#define RADIO_CHANNELFILTERS_NOTCHIIR0_COEFFSA2_COEFFA2_Msk (0xFFFUL << RADIO_CHANNELFILTERS_NOTCHIIR0_COEFFSA2_COEFFA2_Pos) /*!< Bit mask of COEFFA2 field. */

/* Register: RADIO_CHANNELFILTERS_NOTCHIIR1_CKSEL */
/* Description: Clock select register for the PUnit notchIIR1 of type IP_IIR2 */

/* Bits 2..0 : Number of times to divide the base clock rate by 2. Exception: highest value gives BYPASS, ie. clock is disabled and data out is assigned directly from data in. */
#define RADIO_CHANNELFILTERS_NOTCHIIR1_CKSEL_CKSEL_Pos (0UL) /*!< Position of CKSEL field. */
#define RADIO_CHANNELFILTERS_NOTCHIIR1_CKSEL_CKSEL_Msk (0x7UL << RADIO_CHANNELFILTERS_NOTCHIIR1_CKSEL_CKSEL_Pos) /*!< Bit mask of CKSEL field. */
#define RADIO_CHANNELFILTERS_NOTCHIIR1_CKSEL_CKSEL_ClkSel32M (0x0UL) /*!< CKSEL_32M */
#define RADIO_CHANNELFILTERS_NOTCHIIR1_CKSEL_CKSEL_ClkSel16M (0x1UL) /*!< CKSEL_16M */
#define RADIO_CHANNELFILTERS_NOTCHIIR1_CKSEL_CKSEL_ClkSel8M (0x2UL) /*!< CKSEL_8M */
#define RADIO_CHANNELFILTERS_NOTCHIIR1_CKSEL_CKSEL_ClkSel4M (0x3UL) /*!< CKSEL_4M */
#define RADIO_CHANNELFILTERS_NOTCHIIR1_CKSEL_CKSEL_ClkSel2M (0x4UL) /*!< CKSEL_2M */
#define RADIO_CHANNELFILTERS_NOTCHIIR1_CKSEL_CKSEL_ClkSel1M (0x5UL) /*!< CKSEL_1M */
#define RADIO_CHANNELFILTERS_NOTCHIIR1_CKSEL_CKSEL_ClkSel500K (0x6UL) /*!< CKSEL_500K */
#define RADIO_CHANNELFILTERS_NOTCHIIR1_CKSEL_CKSEL_ClkSelBypass (0x7UL) /*!< CKSEL_BYPASS */

/* Register: RADIO_CHANNELFILTERS_NOTCHIIR1_STATUS */
/* Description: Status register for the PUnit notchIIR1 of type IP_IIR2 */

/* Bits 1..0 : Saturation status for I/Q (bit 0/1) component (bitwise write 1 to clear) */
#define RADIO_CHANNELFILTERS_NOTCHIIR1_STATUS_IQSATURATION_Pos (0UL) /*!< Position of IQSATURATION field. */
#define RADIO_CHANNELFILTERS_NOTCHIIR1_STATUS_IQSATURATION_Msk (0x3UL << RADIO_CHANNELFILTERS_NOTCHIIR1_STATUS_IQSATURATION_Pos) /*!< Bit mask of IQSATURATION field. */

/* Register: RADIO_CHANNELFILTERS_NOTCHIIR1_COEFFSB0 */
/* Description: Coefficient register B0 for the PUnit notchIIR1 of type IP_IIR2 */

/* Bits 11..0 : Signed filter coefficient B0 */
#define RADIO_CHANNELFILTERS_NOTCHIIR1_COEFFSB0_COEFFB0_Pos (0UL) /*!< Position of COEFFB0 field. */
#define RADIO_CHANNELFILTERS_NOTCHIIR1_COEFFSB0_COEFFB0_Msk (0xFFFUL << RADIO_CHANNELFILTERS_NOTCHIIR1_COEFFSB0_COEFFB0_Pos) /*!< Bit mask of COEFFB0 field. */

/* Register: RADIO_CHANNELFILTERS_NOTCHIIR1_COEFFSB1 */
/* Description: Coefficient register B1 for the PUnit notchIIR1 of type IP_IIR2 */

/* Bits 11..0 : Signed filter coefficient B1 */
#define RADIO_CHANNELFILTERS_NOTCHIIR1_COEFFSB1_COEFFB1_Pos (0UL) /*!< Position of COEFFB1 field. */
#define RADIO_CHANNELFILTERS_NOTCHIIR1_COEFFSB1_COEFFB1_Msk (0xFFFUL << RADIO_CHANNELFILTERS_NOTCHIIR1_COEFFSB1_COEFFB1_Pos) /*!< Bit mask of COEFFB1 field. */

/* Register: RADIO_CHANNELFILTERS_NOTCHIIR1_COEFFSB2 */
/* Description: Coefficient register B2 for the PUnit notchIIR1 of type IP_IIR2 */

/* Bits 11..0 : Signed filter coefficient B2 */
#define RADIO_CHANNELFILTERS_NOTCHIIR1_COEFFSB2_COEFFB2_Pos (0UL) /*!< Position of COEFFB2 field. */
#define RADIO_CHANNELFILTERS_NOTCHIIR1_COEFFSB2_COEFFB2_Msk (0xFFFUL << RADIO_CHANNELFILTERS_NOTCHIIR1_COEFFSB2_COEFFB2_Pos) /*!< Bit mask of COEFFB2 field. */

/* Register: RADIO_CHANNELFILTERS_NOTCHIIR1_COEFFSA1 */
/* Description: Coefficient register A1 for the PUnit notchIIR1 of type IP_IIR2 */

/* Bits 11..0 : Signed filter coefficient A1 */
#define RADIO_CHANNELFILTERS_NOTCHIIR1_COEFFSA1_COEFFA1_Pos (0UL) /*!< Position of COEFFA1 field. */
#define RADIO_CHANNELFILTERS_NOTCHIIR1_COEFFSA1_COEFFA1_Msk (0xFFFUL << RADIO_CHANNELFILTERS_NOTCHIIR1_COEFFSA1_COEFFA1_Pos) /*!< Bit mask of COEFFA1 field. */

/* Register: RADIO_CHANNELFILTERS_NOTCHIIR1_COEFFSA2 */
/* Description: Coefficient register A2 for the PUnit notchIIR1 of type IP_IIR2 */

/* Bits 11..0 : Signed filter coefficient A2 */
#define RADIO_CHANNELFILTERS_NOTCHIIR1_COEFFSA2_COEFFA2_Pos (0UL) /*!< Position of COEFFA2 field. */
#define RADIO_CHANNELFILTERS_NOTCHIIR1_COEFFSA2_COEFFA2_Msk (0xFFFUL << RADIO_CHANNELFILTERS_NOTCHIIR1_COEFFSA2_COEFFA2_Pos) /*!< Bit mask of COEFFA2 field. */

/* Register: RADIO_CHANNELFILTERS_DECFIR_CKSEL */
/* Description: Clock select register for the PUnit decFIR of type IP_FIR */

/* Bits 2..0 : Number of times to divide the base clock rate by 2. Exception: highest value gives BYPASS, ie. clock is disabled and data out is assigned directly from data in. */
#define RADIO_CHANNELFILTERS_DECFIR_CKSEL_CKSEL_Pos (0UL) /*!< Position of CKSEL field. */
#define RADIO_CHANNELFILTERS_DECFIR_CKSEL_CKSEL_Msk (0x7UL << RADIO_CHANNELFILTERS_DECFIR_CKSEL_CKSEL_Pos) /*!< Bit mask of CKSEL field. */
#define RADIO_CHANNELFILTERS_DECFIR_CKSEL_CKSEL_ClkSel32M (0x0UL) /*!< CKSEL_32M */
#define RADIO_CHANNELFILTERS_DECFIR_CKSEL_CKSEL_ClkSel16M (0x1UL) /*!< CKSEL_16M */
#define RADIO_CHANNELFILTERS_DECFIR_CKSEL_CKSEL_ClkSel8M (0x2UL) /*!< CKSEL_8M */
#define RADIO_CHANNELFILTERS_DECFIR_CKSEL_CKSEL_ClkSel4M (0x3UL) /*!< CKSEL_4M */
#define RADIO_CHANNELFILTERS_DECFIR_CKSEL_CKSEL_ClkSel2M (0x4UL) /*!< CKSEL_2M */
#define RADIO_CHANNELFILTERS_DECFIR_CKSEL_CKSEL_ClkSel1M (0x5UL) /*!< CKSEL_1M */
#define RADIO_CHANNELFILTERS_DECFIR_CKSEL_CKSEL_ClkSel500K (0x6UL) /*!< CKSEL_500K */
#define RADIO_CHANNELFILTERS_DECFIR_CKSEL_CKSEL_ClkSelBypass (0x7UL) /*!< CKSEL_BYPASS */

/* Register: RADIO_CHANNELFILTERS_DECFIR_SOURCE */
/* Description: Source select register for the PUnit decFIR of type IP_FIR */

/* Bits 3..0 : Data source select */
#define RADIO_CHANNELFILTERS_DECFIR_SOURCE_SOURCE_Pos (0UL) /*!< Position of SOURCE field. */
#define RADIO_CHANNELFILTERS_DECFIR_SOURCE_SOURCE_Msk (0xFUL << RADIO_CHANNELFILTERS_DECFIR_SOURCE_SOURCE_Pos) /*!< Bit mask of SOURCE field. */
#define RADIO_CHANNELFILTERS_DECFIR_SOURCE_SOURCE_SrcIIR0 (0x0UL) /*!< SRC_IIR0 (NOT LEGAL) */
#define RADIO_CHANNELFILTERS_DECFIR_SOURCE_SOURCE_SrcIIR1 (0x1UL) /*!< SRC_IIR1 */
#define RADIO_CHANNELFILTERS_DECFIR_SOURCE_SOURCE_SrcNotchIIR0 (0x2UL) /*!< SRC_NOTCHIIR0 (NOT LEGAL) */
#define RADIO_CHANNELFILTERS_DECFIR_SOURCE_SOURCE_SrcNotchIIR1 (0x3UL) /*!< SRC_NOTCHIIR1 */
#define RADIO_CHANNELFILTERS_DECFIR_SOURCE_SOURCE_SrcDecFIR (0x4UL) /*!< SRC_DECFIR (NOT LEGAL) */
#define RADIO_CHANNELFILTERS_DECFIR_SOURCE_SOURCE_SrcInMain (0xFUL) /*!< SRC_INMAIN (NOT LEGAL) */

/* Register: RADIO_CHANNELFILTERS_DECFIR_CONTROL */
/* Description: Control register for the PUnit decFIR of type IP_FIR */

/* Bits 2..0 : Tap-select: number of active taps minus 2 */
#define RADIO_CHANNELFILTERS_DECFIR_CONTROL_TAPSEL_Pos (0UL) /*!< Position of TAPSEL field. */
#define RADIO_CHANNELFILTERS_DECFIR_CONTROL_TAPSEL_Msk (0x7UL << RADIO_CHANNELFILTERS_DECFIR_CONTROL_TAPSEL_Pos) /*!< Bit mask of TAPSEL field. */

/* Register: RADIO_CHANNELFILTERS_DECFIR_COEFFS0 */
/* Description: Coefficient register 0 for the PUnit decFIR of type IP_FIR */

/* Bits 5..0 : Signed filter coefficient 0 */
#define RADIO_CHANNELFILTERS_DECFIR_COEFFS0_COEFF0_Pos (0UL) /*!< Position of COEFF0 field. */
#define RADIO_CHANNELFILTERS_DECFIR_COEFFS0_COEFF0_Msk (0x3FUL << RADIO_CHANNELFILTERS_DECFIR_COEFFS0_COEFF0_Pos) /*!< Bit mask of COEFF0 field. */

/* Register: RADIO_CHANNELFILTERS_DECFIR_COEFFS1 */
/* Description: Coefficient register 1 for the PUnit decFIR of type IP_FIR */

/* Bits 5..0 : Signed filter coefficient 1 */
#define RADIO_CHANNELFILTERS_DECFIR_COEFFS1_COEFF1_Pos (0UL) /*!< Position of COEFF1 field. */
#define RADIO_CHANNELFILTERS_DECFIR_COEFFS1_COEFF1_Msk (0x3FUL << RADIO_CHANNELFILTERS_DECFIR_COEFFS1_COEFF1_Pos) /*!< Bit mask of COEFF1 field. */

/* Register: RADIO_CHANNELFILTERS_DECFIR_COEFFS2 */
/* Description: Coefficient register 2 for the PUnit decFIR of type IP_FIR */

/* Bits 5..0 : Signed filter coefficient 2 */
#define RADIO_CHANNELFILTERS_DECFIR_COEFFS2_COEFF2_Pos (0UL) /*!< Position of COEFF2 field. */
#define RADIO_CHANNELFILTERS_DECFIR_COEFFS2_COEFF2_Msk (0x3FUL << RADIO_CHANNELFILTERS_DECFIR_COEFFS2_COEFF2_Pos) /*!< Bit mask of COEFF2 field. */

/* Register: RADIO_CHANNELFILTERS_DECFIR_COEFFS3 */
/* Description: Coefficient register 3 for the PUnit decFIR of type IP_FIR */

/* Bits 5..0 : Signed filter coefficient 3 */
#define RADIO_CHANNELFILTERS_DECFIR_COEFFS3_COEFF3_Pos (0UL) /*!< Position of COEFF3 field. */
#define RADIO_CHANNELFILTERS_DECFIR_COEFFS3_COEFF3_Msk (0x3FUL << RADIO_CHANNELFILTERS_DECFIR_COEFFS3_COEFF3_Pos) /*!< Bit mask of COEFF3 field. */

/* Register: RADIO_CHANNELFILTERS_DECFIR_COEFFS4 */
/* Description: Coefficient register 4 for the PUnit decFIR of type IP_FIR */

/* Bits 5..0 : Signed filter coefficient 4 */
#define RADIO_CHANNELFILTERS_DECFIR_COEFFS4_COEFF4_Pos (0UL) /*!< Position of COEFF4 field. */
#define RADIO_CHANNELFILTERS_DECFIR_COEFFS4_COEFF4_Msk (0x3FUL << RADIO_CHANNELFILTERS_DECFIR_COEFFS4_COEFF4_Pos) /*!< Bit mask of COEFF4 field. */

/* Register: RADIO_CHANNELFILTERS_DECFIR_COEFFS5 */
/* Description: Coefficient register 5 for the PUnit decFIR of type IP_FIR */

/* Bits 5..0 : Signed filter coefficient 5 */
#define RADIO_CHANNELFILTERS_DECFIR_COEFFS5_COEFF5_Pos (0UL) /*!< Position of COEFF5 field. */
#define RADIO_CHANNELFILTERS_DECFIR_COEFFS5_COEFF5_Msk (0x3FUL << RADIO_CHANNELFILTERS_DECFIR_COEFFS5_COEFF5_Pos) /*!< Bit mask of COEFF5 field. */

/* Register: RADIO_CFO_STAT */
/* Description: Carrier freq. offset estimate */

/* Bits 28..16 : Readout of last valid phase set in correlator (hypermode only) (signed) */
#define RADIO_CFO_STAT_PHASE_Pos (16UL) /*!< Position of PHASE field. */
#define RADIO_CFO_STAT_PHASE_Msk (0x1FFFUL << RADIO_CFO_STAT_PHASE_Pos) /*!< Bit mask of PHASE field. */

/* Bit 12 : 0: Standard mode was used last 1: Hypermode was last used */
#define RADIO_CFO_STAT_LASTDEMODACTIVE_Pos (12UL) /*!< Position of LASTDEMODACTIVE field. */
#define RADIO_CFO_STAT_LASTDEMODACTIVE_Msk (0x1UL << RADIO_CFO_STAT_LASTDEMODACTIVE_Pos) /*!< Bit mask of LASTDEMODACTIVE field. */

/* Bits 8..0 : Readout of last valid decision level set in BitSlicer (signed) */
#define RADIO_CFO_STAT_VALUE_Pos (0UL) /*!< Position of VALUE field. */
#define RADIO_CFO_STAT_VALUE_Msk (0x1FFUL << RADIO_CFO_STAT_VALUE_Pos) /*!< Bit mask of VALUE field. */

/* Register: RADIO_PBTEST */
/* Description: Test: PB calibration */

/* Bit 31 : if '1' enable override for VBGTRIM */
#define RADIO_PBTEST_OVRENVBGTRIM_Pos (31UL) /*!< Position of OVRENVBGTRIM field. */
#define RADIO_PBTEST_OVRENVBGTRIM_Msk (0x1UL << RADIO_PBTEST_OVRENVBGTRIM_Pos) /*!< Bit mask of OVRENVBGTRIM field. */

/* Bit 30 : if '1' enable override for PBIBPSTRIM */
#define RADIO_PBTEST_OVRENPBIBPSTRIM_Pos (30UL) /*!< Position of OVRENPBIBPSTRIM field. */
#define RADIO_PBTEST_OVRENPBIBPSTRIM_Msk (0x1UL << RADIO_PBTEST_OVRENPBIBPSTRIM_Pos) /*!< Bit mask of OVRENPBIBPSTRIM field. */

/* Bits 11..8 : Trim code for VBG to FS_VCOREG */
#define RADIO_PBTEST_VBGTRIM_Pos (8UL) /*!< Position of VBGTRIM field. */
#define RADIO_PBTEST_VBGTRIM_Msk (0xFUL << RADIO_PBTEST_VBGTRIM_Pos) /*!< Bit mask of VBGTRIM field. */

/* Bits 7..4 : Trim code for IBPS currents */
#define RADIO_PBTEST_PBIBPSTRIM_Pos (4UL) /*!< Position of PBIBPSTRIM field. */
#define RADIO_PBTEST_PBIBPSTRIM_Msk (0xFUL << RADIO_PBTEST_PBIBPSTRIM_Pos) /*!< Bit mask of PBIBPSTRIM field. */

/* Register: RADIO_DBCCOEFFS */
/* Description: Test and Debug: DBC coefficients override */

/* Bit 12 : Zero means coefficients only updated when needed (default), set to 1 coefficients are always updated when the radio is enabled. */
#define RADIO_DBCCOEFFS_OVRALWAYSUPDATE_Pos (12UL) /*!< Position of OVRALWAYSUPDATE field. */
#define RADIO_DBCCOEFFS_OVRALWAYSUPDATE_Msk (0x1UL << RADIO_DBCCOEFFS_OVRALWAYSUPDATE_Pos) /*!< Bit mask of OVRALWAYSUPDATE field. */

/* Bit 11 : paddrUpdateOvrVal */
#define RADIO_DBCCOEFFS_PADDRUPDATEOVRVAL_Pos (11UL) /*!< Position of PADDRUPDATEOVRVAL field. */
#define RADIO_DBCCOEFFS_PADDRUPDATEOVRVAL_Msk (0x1UL << RADIO_DBCCOEFFS_PADDRUPDATEOVRVAL_Pos) /*!< Bit mask of PADDRUPDATEOVRVAL field. */

/* Bit 10 : paddrUpdateOvrEn */
#define RADIO_DBCCOEFFS_PADDRUPDATEOVREN_Pos (10UL) /*!< Position of PADDRUPDATEOVREN field. */
#define RADIO_DBCCOEFFS_PADDRUPDATEOVREN_Msk (0x1UL << RADIO_DBCCOEFFS_PADDRUPDATEOVREN_Pos) /*!< Bit mask of PADDRUPDATEOVREN field. */

/* Register: RADIO_QOVERRIDE4 */
/* Description: Trim value override register 4 for nRF52 */

/* Bit 25 : Enable preamble filter */
#define RADIO_QOVERRIDE4_ENPREAMBFILT_Pos (25UL) /*!< Position of ENPREAMBFILT field. */
#define RADIO_QOVERRIDE4_ENPREAMBFILT_Msk (0x1UL << RADIO_QOVERRIDE4_ENPREAMBFILT_Pos) /*!< Bit mask of ENPREAMBFILT field. */

/* Bits 24..16 : Threshold for the preamble filter */
#define RADIO_QOVERRIDE4_PREAMBFILTTH_Pos (16UL) /*!< Position of PREAMBFILTTH field. */
#define RADIO_QOVERRIDE4_PREAMBFILTTH_Msk (0x1FFUL << RADIO_QOVERRIDE4_PREAMBFILTTH_Pos) /*!< Bit mask of PREAMBFILTTH field. */

/* Register: RADIO_QOVERRIDE5 */
/* Description: Trim value override register 5 for nRF52 */

/* Bits 18..16 : Override value for preambFiltMinStrLen */
#define RADIO_QOVERRIDE5_PREAMBFILTMINSTRLEN_Pos (16UL) /*!< Position of PREAMBFILTMINSTRLEN field. */
#define RADIO_QOVERRIDE5_PREAMBFILTMINSTRLEN_Msk (0x7UL << RADIO_QOVERRIDE5_PREAMBFILTMINSTRLEN_Pos) /*!< Bit mask of PREAMBFILTMINSTRLEN field. */

/* Bits 15..8 : Override value for bitSlicerSwingTh */
#define RADIO_QOVERRIDE5_BITSLICERSWINGTH_Pos (8UL) /*!< Position of BITSLICERSWINGTH field. */
#define RADIO_QOVERRIDE5_BITSLICERSWINGTH_Msk (0xFFUL << RADIO_QOVERRIDE5_BITSLICERSWINGTH_Pos) /*!< Bit mask of BITSLICERSWINGTH field. */

/* Bits 7..0 : Override value for preambFiltCycles */
#define RADIO_QOVERRIDE5_PREAMBFILTCYCLES_Pos (0UL) /*!< Position of PREAMBFILTCYCLES field. */
#define RADIO_QOVERRIDE5_PREAMBFILTCYCLES_Msk (0xFFUL << RADIO_QOVERRIDE5_PREAMBFILTCYCLES_Pos) /*!< Bit mask of PREAMBFILTCYCLES field. */

/* Register: RADIO_QOVERRIDE6 */
/* Description: Trim value override register 6 for nRF52 */

/* Bit 31 : Override value enable for DBCCORRTH and MFBSTRBOFFSET */
#define RADIO_QOVERRIDE6_DBCCORRTHEN_Pos (31UL) /*!< Position of DBCCORRTHEN field. */
#define RADIO_QOVERRIDE6_DBCCORRTHEN_Msk (0x1UL << RADIO_QOVERRIDE6_DBCCORRTHEN_Pos) /*!< Bit mask of DBCCORRTHEN field. */

/* Bit 30 : Enable checking of several correlator peaks in hypermode */
#define RADIO_QOVERRIDE6_ENCHECKMULTIPEAKS_Pos (30UL) /*!< Position of ENCHECKMULTIPEAKS field. */
#define RADIO_QOVERRIDE6_ENCHECKMULTIPEAKS_Msk (0x1UL << RADIO_QOVERRIDE6_ENCHECKMULTIPEAKS_Pos) /*!< Bit mask of ENCHECKMULTIPEAKS field. */

/* Bits 29..24 : Override value for correlator enable threshold */
#define RADIO_QOVERRIDE6_DBCENABLETH_Pos (24UL) /*!< Position of DBCENABLETH field. */
#define RADIO_QOVERRIDE6_DBCENABLETH_Msk (0x3FUL << RADIO_QOVERRIDE6_DBCENABLETH_Pos) /*!< Bit mask of DBCENABLETH field. */

/* Bits 23..16 : Override value for correlator timeout,in bit periods (hypermode) */
#define RADIO_QOVERRIDE6_DBCTIMEOUT_Pos (16UL) /*!< Position of DBCTIMEOUT field. */
#define RADIO_QOVERRIDE6_DBCTIMEOUT_Msk (0xFFUL << RADIO_QOVERRIDE6_DBCTIMEOUT_Pos) /*!< Bit mask of DBCTIMEOUT field. */

/* Bits 9..8 : Override value for dbcEnableSrc */
#define RADIO_QOVERRIDE6_DBCENABLESRC_Pos (8UL) /*!< Position of DBCENABLESRC field. */
#define RADIO_QOVERRIDE6_DBCENABLESRC_Msk (0x3UL << RADIO_QOVERRIDE6_DBCENABLESRC_Pos) /*!< Bit mask of DBCENABLESRC field. */
#define RADIO_QOVERRIDE6_DBCENABLESRC_AlwaysOn (0x0UL) /*!< Always on when not address match */
#define RADIO_QOVERRIDE6_DBCENABLESRC_BBLogMag (0x1UL) /*!< When bbLogMag is above a threshold */
#define RADIO_QOVERRIDE6_DBCENABLESRC_BitSlicerSwing (0x2UL) /*!< When a certain time has gone since the input to the bitslicer was above BITSLICERSWINGTH */
#define RADIO_QOVERRIDE6_DBCENABLESRC_Both (0x3UL) /*!< Both BBLogMag and BitSlicerSwing */

/* Register: RADIO_QOVERRIDE9 */
/* Description: Trim value override register 9 for nRF52 */

/* Bits 25..20 : Decay delay for the IQ scaler */
#define RADIO_QOVERRIDE9_SCALERDECAYDELAY_Pos (20UL) /*!< Position of SCALERDECAYDELAY field. */
#define RADIO_QOVERRIDE9_SCALERDECAYDELAY_Msk (0x3FUL << RADIO_QOVERRIDE9_SCALERDECAYDELAY_Pos) /*!< Bit mask of SCALERDECAYDELAY field. */

/* Bits 15..8 : Bit slicer swing time */
#define RADIO_QOVERRIDE9_BITSLICERSWINGTIME_Pos (8UL) /*!< Position of BITSLICERSWINGTIME field. */
#define RADIO_QOVERRIDE9_BITSLICERSWINGTIME_Msk (0xFFUL << RADIO_QOVERRIDE9_BITSLICERSWINGTIME_Pos) /*!< Bit mask of BITSLICERSWINGTIME field. */

/* Bit 2 : Override value for demodInvert (standard and hyper) */
#define RADIO_QOVERRIDE9_DEMODINVERT_Pos (2UL) /*!< Position of DEMODINVERT field. */
#define RADIO_QOVERRIDE9_DEMODINVERT_Msk (0x1UL << RADIO_QOVERRIDE9_DEMODINVERT_Pos) /*!< Bit mask of DEMODINVERT field. */

/* Bits 1..0 : Override value for psdDemodDelay (standard mode) */
#define RADIO_QOVERRIDE9_PSDDEMODDELAY_Pos (0UL) /*!< Position of PSDDEMODDELAY field. */
#define RADIO_QOVERRIDE9_PSDDEMODDELAY_Msk (0x3UL << RADIO_QOVERRIDE9_PSDDEMODDELAY_Pos) /*!< Bit mask of PSDDEMODDELAY field. */

/* Register: RADIO_QOVERRIDE12 */
/* Description: Trim value override register 12 for nRF52 */

/* Bits 27..16 : Override value for IfpkDetLowThres */
#define RADIO_QOVERRIDE12_IFPKDETLOWTHRES_Pos (16UL) /*!< Position of IFPKDETLOWTHRES field. */
#define RADIO_QOVERRIDE12_IFPKDETLOWTHRES_Msk (0xFFFUL << RADIO_QOVERRIDE12_IFPKDETLOWTHRES_Pos) /*!< Bit mask of IFPKDETLOWTHRES field. */

/* Bits 15..12 : Signed correction value for how much the saturation information is delayed from the input ADC samples to the samples being stored to RAM in direction finding operation */
#define RADIO_QOVERRIDE12_SATDELAYCORRECTION_Pos (12UL) /*!< Position of SATDELAYCORRECTION field. */
#define RADIO_QOVERRIDE12_SATDELAYCORRECTION_Msk (0xFUL << RADIO_QOVERRIDE12_SATDELAYCORRECTION_Pos) /*!< Bit mask of SATDELAYCORRECTION field. */

/* Bits 11..0 : Override value for IfpkDetHighThres */
#define RADIO_QOVERRIDE12_IFPKDETHIGHTHRES_Pos (0UL) /*!< Position of IFPKDETHIGHTHRES field. */
#define RADIO_QOVERRIDE12_IFPKDETHIGHTHRES_Msk (0xFFFUL << RADIO_QOVERRIDE12_IFPKDETHIGHTHRES_Pos) /*!< Bit mask of IFPKDETHIGHTHRES field. */

/* Register: RADIO_QOVERRIDE23 */
/* Description: Trim value override register 23 for nRF52 */

/* Bit 17 : Disable symbol tracking for IEEE 802.15.4 and BLE LR modes */
#define RADIO_QOVERRIDE23_DISABLESYMBOLTRACK_Pos (17UL) /*!< Position of DISABLESYMBOLTRACK field. */
#define RADIO_QOVERRIDE23_DISABLESYMBOLTRACK_Msk (0x1UL << RADIO_QOVERRIDE23_DISABLESYMBOLTRACK_Pos) /*!< Bit mask of DISABLESYMBOLTRACK field. */

/* Bit 16 : Keep standard demod in DSSS mode */
#define RADIO_QOVERRIDE23_KEEPSTDINDSSS_Pos (16UL) /*!< Position of KEEPSTDINDSSS field. */
#define RADIO_QOVERRIDE23_KEEPSTDINDSSS_Msk (0x1UL << RADIO_QOVERRIDE23_KEEPSTDINDSSS_Pos) /*!< Bit mask of KEEPSTDINDSSS field. */

/* Bits 15..8 : Required peak height required for a double correlator peak to be considered higher than previous ones. The register value will be multiplied by 25 to obtain the actual margin. The bitfield is NOT subject to the enable override at bit position 31, and will always be enabled for hypermode. */
#define RADIO_QOVERRIDE23_HIGHERTHANMARGINDBC_Pos (8UL) /*!< Position of HIGHERTHANMARGINDBC field. */
#define RADIO_QOVERRIDE23_HIGHERTHANMARGINDBC_Msk (0xFFUL << RADIO_QOVERRIDE23_HIGHERTHANMARGINDBC_Pos) /*!< Bit mask of HIGHERTHANMARGINDBC field. */

/* Bit 6 : Enable decision feedback for matched filter bank */
#define RADIO_QOVERRIDE23_ENABLEFEEDBACK_Pos (6UL) /*!< Position of ENABLEFEEDBACK field. */
#define RADIO_QOVERRIDE23_ENABLEFEEDBACK_Msk (0x1UL << RADIO_QOVERRIDE23_ENABLEFEEDBACK_Pos) /*!< Bit mask of ENABLEFEEDBACK field. */

/* Bit 5 : Override enable for CNPEAKMINTHR and CNABSMAXTHR in the CNRIPPLEWARNCFG register */
#define RADIO_QOVERRIDE23_OVRENCNRIPPLEWARNCFG_Pos (5UL) /*!< Position of OVRENCNRIPPLEWARNCFG field. */
#define RADIO_QOVERRIDE23_OVRENCNRIPPLEWARNCFG_Msk (0x1UL << RADIO_QOVERRIDE23_OVRENCNRIPPLEWARNCFG_Pos) /*!< Bit mask of OVRENCNRIPPLEWARNCFG field. */

/* Register: RADIO_STTCNFG_LR */
/* Description: Strobe time tracking configuration in long range mode */

/* Bits 15..8 : Strobe time tracking timeout in BLE LR mode */
#define RADIO_STTCNFG_LR_STTTIMEOUTLR_Pos (8UL) /*!< Position of STTTIMEOUTLR field. */
#define RADIO_STTCNFG_LR_STTTIMEOUTLR_Msk (0xFFUL << RADIO_STTCNFG_LR_STTTIMEOUTLR_Pos) /*!< Bit mask of STTTIMEOUTLR field. */

/* Bits 7..0 : Strobe time tracking error threshold in BLE LR mode */
#define RADIO_STTCNFG_LR_STTERRORTHLR_Pos (0UL) /*!< Position of STTERRORTHLR field. */
#define RADIO_STTCNFG_LR_STTERRORTHLR_Msk (0xFFUL << RADIO_STTCNFG_LR_STTERRORTHLR_Pos) /*!< Bit mask of STTERRORTHLR field. */

/* Register: RADIO_LELRMISC */
/* Description: Miscellaneous Controls for Long Range */

/* Bit 31 : Swap de-spreader */
#define RADIO_LELRMISC_LRDESPREADSWAP_Pos (31UL) /*!< Position of LRDESPREADSWAP field. */
#define RADIO_LELRMISC_LRDESPREADSWAP_Msk (0x1UL << RADIO_LELRMISC_LRDESPREADSWAP_Pos) /*!< Bit mask of LRDESPREADSWAP field. */

/* Bits 30..24 : Code Polynom 1 */
#define RADIO_LELRMISC_CODEPOLY1_Pos (24UL) /*!< Position of CODEPOLY1 field. */
#define RADIO_LELRMISC_CODEPOLY1_Msk (0x7FUL << RADIO_LELRMISC_CODEPOLY1_Pos) /*!< Bit mask of CODEPOLY1 field. */

/* Bits 22..16 : Code Polynom 0 */
#define RADIO_LELRMISC_CODEPOLY0_Pos (16UL) /*!< Position of CODEPOLY0 field. */
#define RADIO_LELRMISC_CODEPOLY0_Msk (0x7FUL << RADIO_LELRMISC_CODEPOLY0_Pos) /*!< Bit mask of CODEPOLY0 field. */

/* Bits 10..8 : The number of chip periods earlier which it is allowed to declare frameSync in DecodeLELong */
#define RADIO_LELRMISC_LELROFFADDRCHECK_Pos (8UL) /*!< Position of LELROFFADDRCHECK field. */
#define RADIO_LELRMISC_LELROFFADDRCHECK_Msk (0x7UL << RADIO_LELRMISC_LELROFFADDRCHECK_Pos) /*!< Bit mask of LELROFFADDRCHECK field. */

/* Bit 7 : Disable framesync timeout (early address match timeout) for BLE LR mode (hypermode). */
#define RADIO_LELRMISC_DISABLEFRAMESYNCLRTIMEOUT_Pos (7UL) /*!< Position of DISABLEFRAMESYNCLRTIMEOUT field. */
#define RADIO_LELRMISC_DISABLEFRAMESYNCLRTIMEOUT_Msk (0x1UL << RADIO_LELRMISC_DISABLEFRAMESYNCLRTIMEOUT_Pos) /*!< Bit mask of DISABLEFRAMESYNCLRTIMEOUT field. */

/* Bit 6 : Do not stop the clock to the Despreader in BLE LR 500 mode */
#define RADIO_LELRMISC_KEEPDESPREADONINBLELR500_Pos (6UL) /*!< Position of KEEPDESPREADONINBLELR500 field. */
#define RADIO_LELRMISC_KEEPDESPREADONINBLELR500_Msk (0x1UL << RADIO_LELRMISC_KEEPDESPREADONINBLELR500_Pos) /*!< Bit mask of KEEPDESPREADONINBLELR500 field. */

/* Bit 5 : Do not stop the clock to RxMFB in BLE LR 125 mode */
#define RADIO_LELRMISC_KEEPMFBONINBLELR125_Pos (5UL) /*!< Position of KEEPMFBONINBLELR125 field. */
#define RADIO_LELRMISC_KEEPMFBONINBLELR125_Msk (0x1UL << RADIO_LELRMISC_KEEPMFBONINBLELR125_Pos) /*!< Bit mask of KEEPMFBONINBLELR125 field. */

/* Bit 4 : Use Viterbi state zero when flushing out bits for BLE LR */
#define RADIO_LELRMISC_VITERBIUSESTATEZERO_Pos (4UL) /*!< Position of VITERBIUSESTATEZERO field. */
#define RADIO_LELRMISC_VITERBIUSESTATEZERO_Msk (0x1UL << RADIO_LELRMISC_VITERBIUSESTATEZERO_Pos) /*!< Bit mask of VITERBIUSESTATEZERO field. */

/* Bits 3..0 : Framer Receive Threshold */
#define RADIO_LELRMISC_LRFRAMERRTRSH_Pos (0UL) /*!< Position of LRFRAMERRTRSH field. */
#define RADIO_LELRMISC_LRFRAMERRTRSH_Msk (0xFUL << RADIO_LELRMISC_LRFRAMERRTRSH_Pos) /*!< Bit mask of LRFRAMERRTRSH field. */

/* Register: RADIO_DRIFTLR */
/* Description: Drift Controls in Long Range */

/* Bits 29..24 : Override value for driftLowTh, drift estimator (despreadLELLong) */
#define RADIO_DRIFTLR_DRIFTLOWTH125_Pos (24UL) /*!< Position of DRIFTLOWTH125 field. */
#define RADIO_DRIFTLR_DRIFTLOWTH125_Msk (0x3FUL << RADIO_DRIFTLR_DRIFTLOWTH125_Pos) /*!< Bit mask of DRIFTLOWTH125 field. */

/* Bits 16..8 : Override value for driftValidTh, drift estimator (despreadLELLong) */
#define RADIO_DRIFTLR_DRIFTVALIDTH125_Pos (8UL) /*!< Position of DRIFTVALIDTH125 field. */
#define RADIO_DRIFTLR_DRIFTVALIDTH125_Msk (0x1FFUL << RADIO_DRIFTLR_DRIFTVALIDTH125_Pos) /*!< Bit mask of DRIFTVALIDTH125 field. */

/* Bits 7..0 : Override value for IIR feedback , drift estimator (despreadLELLong) */
#define RADIO_DRIFTLR_DRIFTHALPHA125_Pos (0UL) /*!< Position of DRIFTHALPHA125 field. */
#define RADIO_DRIFTLR_DRIFTHALPHA125_Msk (0xFFUL << RADIO_DRIFTLR_DRIFTHALPHA125_Pos) /*!< Bit mask of DRIFTHALPHA125 field. */

/* Register: RADIO_QOVERRIDE25 */
/* Description: TODO */

/* Bit 30 : Override enable for MINPEAKCOUNTSTRICT */
#define RADIO_QOVERRIDE25_OVRENMINPEAKCOUNTSTRICT_Pos (30UL) /*!< Position of OVRENMINPEAKCOUNTSTRICT field. */
#define RADIO_QOVERRIDE25_OVRENMINPEAKCOUNTSTRICT_Msk (0x1UL << RADIO_QOVERRIDE25_OVRENMINPEAKCOUNTSTRICT_Pos) /*!< Bit mask of OVRENMINPEAKCOUNTSTRICT field. */

/* Bit 29 : Override enable for DBCCORRTHPREVREQUIR */
#define RADIO_QOVERRIDE25_OVRENDBCCORRTHPREVREQUIR_Pos (29UL) /*!< Position of OVRENDBCCORRTHPREVREQUIR field. */
#define RADIO_QOVERRIDE25_OVRENDBCCORRTHPREVREQUIR_Msk (0x1UL << RADIO_QOVERRIDE25_OVRENDBCCORRTHPREVREQUIR_Pos) /*!< Bit mask of OVRENDBCCORRTHPREVREQUIR field. */

/* Bit 28 : Override enable for DBCCORRTHSTRICT */
#define RADIO_QOVERRIDE25_OVRENDBCCORRTHSTRICT_Pos (28UL) /*!< Position of OVRENDBCCORRTHSTRICT field. */
#define RADIO_QOVERRIDE25_OVRENDBCCORRTHSTRICT_Msk (0x1UL << RADIO_QOVERRIDE25_OVRENDBCCORRTHSTRICT_Pos) /*!< Bit mask of OVRENDBCCORRTHSTRICT field. */

/* Bit 27 : DBC peak detector selection */
#define RADIO_QOVERRIDE25_DBCPEAKDETSEL_Pos (27UL) /*!< Position of DBCPEAKDETSEL field. */
#define RADIO_QOVERRIDE25_DBCPEAKDETSEL_Msk (0x1UL << RADIO_QOVERRIDE25_DBCPEAKDETSEL_Pos) /*!< Bit mask of DBCPEAKDETSEL field. */
#define RADIO_QOVERRIDE25_DBCPEAKDETSEL_Classic (0x0UL) /*!< Use classic peak detector (backward compatible behavior) */
#define RADIO_QOVERRIDE25_DBCPEAKDETSEL_Differential (0x1UL) /*!< Use differential peak detector */

/* Bits 18..16 : Min number of peaks to detect before resyncing to another preamble while already working on a previous preamble in BleLrx. */
#define RADIO_QOVERRIDE25_MINPEAKCOUNTSTRICT_Pos (16UL) /*!< Position of MINPEAKCOUNTSTRICT field. */
#define RADIO_QOVERRIDE25_MINPEAKCOUNTSTRICT_Msk (0x7UL << RADIO_QOVERRIDE25_MINPEAKCOUNTSTRICT_Pos) /*!< Bit mask of MINPEAKCOUNTSTRICT field. */

/* Bits 15..8 : Correlation threshold for double correlator used in BleLr mode to reject a later resync using DBCCORRTHSTRICT. */
#define RADIO_QOVERRIDE25_DBCCORRTHPREVREQUIR_Pos (8UL) /*!< Position of DBCCORRTHPREVREQUIR field. */
#define RADIO_QOVERRIDE25_DBCCORRTHPREVREQUIR_Msk (0xFFUL << RADIO_QOVERRIDE25_DBCCORRTHPREVREQUIR_Pos) /*!< Bit mask of DBCCORRTHPREVREQUIR field. */

/* Bits 7..0 : Correlation threshold for double correlator used in BleLr mode to resync to another preamble while already working on a previous preamble. */
#define RADIO_QOVERRIDE25_DBCCORRTHSTRICT_Pos (0UL) /*!< Position of DBCCORRTHSTRICT field. */
#define RADIO_QOVERRIDE25_DBCCORRTHSTRICT_Msk (0xFFUL << RADIO_QOVERRIDE25_DBCCORRTHSTRICT_Pos) /*!< Bit mask of DBCCORRTHSTRICT field. */

/* Register: RADIO_DBCPEAKDETTHR */
/* Description: Thresholds for each peak detector instance */

/* Bits 31..24 : Diff threshold 3 */
#define RADIO_DBCPEAKDETTHR_THR3_Pos (24UL) /*!< Position of THR3 field. */
#define RADIO_DBCPEAKDETTHR_THR3_Msk (0xFFUL << RADIO_DBCPEAKDETTHR_THR3_Pos) /*!< Bit mask of THR3 field. */

/* Bits 23..16 : Diff threshold 2 */
#define RADIO_DBCPEAKDETTHR_THR2_Pos (16UL) /*!< Position of THR2 field. */
#define RADIO_DBCPEAKDETTHR_THR2_Msk (0xFFUL << RADIO_DBCPEAKDETTHR_THR2_Pos) /*!< Bit mask of THR2 field. */

/* Bits 15..8 : Diff threshold 1 */
#define RADIO_DBCPEAKDETTHR_THR1_Pos (8UL) /*!< Position of THR1 field. */
#define RADIO_DBCPEAKDETTHR_THR1_Msk (0xFFUL << RADIO_DBCPEAKDETTHR_THR1_Pos) /*!< Bit mask of THR1 field. */

/* Bits 7..0 : Diff threshold 0 */
#define RADIO_DBCPEAKDETTHR_THR0_Pos (0UL) /*!< Position of THR0 field. */
#define RADIO_DBCPEAKDETTHR_THR0_Msk (0xFFUL << RADIO_DBCPEAKDETTHR_THR0_Pos) /*!< Bit mask of THR0 field. */

/* Register: RADIO_BITSLICERSTAT */
/* Description: Payload status */

/* Bits 27..16 : Number of received ones */
#define RADIO_BITSLICERSTAT_SUMMAX_Pos (16UL) /*!< Position of SUMMAX field. */
#define RADIO_BITSLICERSTAT_SUMMAX_Msk (0xFFFUL << RADIO_BITSLICERSTAT_SUMMAX_Pos) /*!< Bit mask of SUMMAX field. */

/* Bits 11..0 : Number of received zeros */
#define RADIO_BITSLICERSTAT_SUMMIN_Pos (0UL) /*!< Position of SUMMIN field. */
#define RADIO_BITSLICERSTAT_SUMMIN_Msk (0xFFFUL << RADIO_BITSLICERSTAT_SUMMIN_Pos) /*!< Bit mask of SUMMIN field. */

/* Register: RADIO_BBCTRL */
/* Description: Miscellaneous mode bits */

/* Bits 10..8 : Modulation index for RxDBCCoeffGen and RxMFB */
#define RADIO_BBCTRL_MODINDEX_Pos (8UL) /*!< Position of MODINDEX field. */
#define RADIO_BBCTRL_MODINDEX_Msk (0x7UL << RADIO_BBCTRL_MODINDEX_Pos) /*!< Bit mask of MODINDEX field. */
#define RADIO_BBCTRL_MODINDEX_0h25 (0x0UL) /*!< Modulation index h=0.25 */
#define RADIO_BBCTRL_MODINDEX_0h32 (0x1UL) /*!< Modulation index h=0.32 */
#define RADIO_BBCTRL_MODINDEX_0h5 (0x2UL) /*!< Modulation index h=0.5 */
#define RADIO_BBCTRL_MODINDEX_1h0 (0x3UL) /*!< Modulation index h=1.0 */
#define RADIO_BBCTRL_MODINDEX_2h0 (0x4UL) /*!< Modulation index h=2.0 */

/* Bits 6..4 : Decimation mode in PantherDemodFilt */
#define RADIO_BBCTRL_DEMODFILTMODE_Pos (4UL) /*!< Position of DEMODFILTMODE field. */
#define RADIO_BBCTRL_DEMODFILTMODE_Msk (0x7UL << RADIO_BBCTRL_DEMODFILTMODE_Pos) /*!< Bit mask of DEMODFILTMODE field. */
#define RADIO_BBCTRL_DEMODFILTMODE_2M (0x0UL) /*!< Decimation mode 2M */
#define RADIO_BBCTRL_DEMODFILTMODE_1M (0x1UL) /*!< Decimation mode 1M */
#define RADIO_BBCTRL_DEMODFILTMODE_250K (0x3UL) /*!< Decimation mode 250K */

/* Bit 1 : Enable 15.4 mode (enabling both 15.4 and long range is not legal) */
#define RADIO_BBCTRL_IEEE802154_Pos (1UL) /*!< Position of IEEE802154 field. */
#define RADIO_BBCTRL_IEEE802154_Msk (0x1UL << RADIO_BBCTRL_IEEE802154_Pos) /*!< Bit mask of IEEE802154 field. */
#define RADIO_BBCTRL_IEEE802154_Disable (0x0UL) /*!< IEEE802154_NO */
#define RADIO_BBCTRL_IEEE802154_Enable (0x1UL) /*!< IEEE802154_YES */

/* Bit 0 : Enable long range mode (enabling both 15.4 and long range is not legal) */
#define RADIO_BBCTRL_BLELONGRANGE_Pos (0UL) /*!< Position of BLELONGRANGE field. */
#define RADIO_BBCTRL_BLELONGRANGE_Msk (0x1UL << RADIO_BBCTRL_BLELONGRANGE_Pos) /*!< Bit mask of BLELONGRANGE field. */
#define RADIO_BBCTRL_BLELONGRANGE_Disable (0x0UL) /*!< BLELONGRANGE_NO */
#define RADIO_BBCTRL_BLELONGRANGE_Enable (0x1UL) /*!< BLELONGRANGE_YES */

/* Register: RADIO_DBCCORR */
/* Description: Thresholds for the double correlator */

/* Bits 31..24 : Override value for address match timeout, [in bit periods] (hypermode). 0 means no timeout. If BALEN is 3, the actual value of DBCADDRTIMEOUT will be the value written to this register minus 8. */
#define RADIO_DBCCORR_ADDRTIMEOUT_Pos (24UL) /*!< Position of ADDRTIMEOUT field. */
#define RADIO_DBCCORR_ADDRTIMEOUT_Msk (0xFFUL << RADIO_DBCCORR_ADDRTIMEOUT_Pos) /*!< Bit mask of ADDRTIMEOUT field. */

/* Bits 23..16 : Correlation threshold for double correlator used in BleLr mode to reject a later resync using DBCCORRTHSTRICT. Also applies for Ieee 802.15.4 mode */
#define RADIO_DBCCORR_PREVREQUIR_Pos (16UL) /*!< Position of PREVREQUIR field. */
#define RADIO_DBCCORR_PREVREQUIR_Msk (0xFFUL << RADIO_DBCCORR_PREVREQUIR_Pos) /*!< Bit mask of PREVREQUIR field. */

/* Bits 15..8 : Correlation threshold for double correlator used in BleLr mode to resync to another preamble while already working on a previous preamble. Also applies for Ieee 802.15.4 mode */
#define RADIO_DBCCORR_STRICT_Pos (8UL) /*!< Position of STRICT field. */
#define RADIO_DBCCORR_STRICT_Msk (0xFFUL << RADIO_DBCCORR_STRICT_Pos) /*!< Bit mask of STRICT field. */

/* Bits 7..0 : Correlation threshold for double correlator in normal operation */
#define RADIO_DBCCORR_TH_Pos (0UL) /*!< Position of TH field. */
#define RADIO_DBCCORR_TH_Msk (0xFFUL << RADIO_DBCCORR_TH_Pos) /*!< Bit mask of TH field. */

/* Register: RADIO_DSSS */
/* Description: DSSS synchronizer trim values */

/* Bit 25 : Enable strobe time averaging */
#define RADIO_DSSS_ENSTAVE_Pos (25UL) /*!< Position of ENSTAVE field. */
#define RADIO_DSSS_ENSTAVE_Msk (0x1UL << RADIO_DSSS_ENSTAVE_Pos) /*!< Bit mask of ENSTAVE field. */

/* Bit 24 : Enable CFO averaging */
#define RADIO_DSSS_ENCFOAVE_Pos (24UL) /*!< Position of ENCFOAVE field. */
#define RADIO_DSSS_ENCFOAVE_Msk (0x1UL << RADIO_DSSS_ENCFOAVE_Pos) /*!< Bit mask of ENCFOAVE field. */

/* Bits 18..16 : Min number of peaks to detect before resyncing to another preamble while already working on a previous preamble in BleLrx. Also applies for Ieee 802.15.4 mode */
#define RADIO_DSSS_MINPEAKCOUNTSTRICT_Pos (16UL) /*!< Position of MINPEAKCOUNTSTRICT field. */
#define RADIO_DSSS_MINPEAKCOUNTSTRICT_Msk (0x7UL << RADIO_DSSS_MINPEAKCOUNTSTRICT_Pos) /*!< Bit mask of MINPEAKCOUNTSTRICT field. */

/* Bits 10..8 : Override for dsssMinPeakCount */
#define RADIO_DSSS_MINPEAKCOUNT_Pos (8UL) /*!< Position of MINPEAKCOUNT field. */
#define RADIO_DSSS_MINPEAKCOUNT_Msk (0x7UL << RADIO_DSSS_MINPEAKCOUNT_Pos) /*!< Bit mask of MINPEAKCOUNT field. */

/* Bits 2..0 : Override for dsssPeakDistanceTolerance */
#define RADIO_DSSS_PEAKDISTTOL_Pos (0UL) /*!< Position of PEAKDISTTOL field. */
#define RADIO_DSSS_PEAKDISTTOL_Msk (0x7UL << RADIO_DSSS_PEAKDISTTOL_Pos) /*!< Bit mask of PEAKDISTTOL field. */

/* Register: RADIO_BSCONFIG */
/* Description: Bitslicer configuration */

/* Bit 15 : Override for bsYlevAlg */
#define RADIO_BSCONFIG_YLEVALG_Pos (15UL) /*!< Position of YLEVALG field. */
#define RADIO_BSCONFIG_YLEVALG_Msk (0x1UL << RADIO_BSCONFIG_YLEVALG_Pos) /*!< Bit mask of YLEVALG field. */

/* Bits 14..12 : Override for bsStrobeDelay */
#define RADIO_BSCONFIG_STROBEDELAY_Pos (12UL) /*!< Position of STROBEDELAY field. */
#define RADIO_BSCONFIG_STROBEDELAY_Msk (0x7UL << RADIO_BSCONFIG_STROBEDELAY_Pos) /*!< Bit mask of STROBEDELAY field. */

/* Bit 11 : Override for bsStrobeDataIn */
#define RADIO_BSCONFIG_STROBEDATAIN_Pos (11UL) /*!< Position of STROBEDATAIN field. */
#define RADIO_BSCONFIG_STROBEDATAIN_Msk (0x1UL << RADIO_BSCONFIG_STROBEDATAIN_Pos) /*!< Bit mask of STROBEDATAIN field. */

/* Bits 10..4 : Override for bsDataPeak2Peak */
#define RADIO_BSCONFIG_DATAPEAK2PEAK_Pos (4UL) /*!< Position of DATAPEAK2PEAK field. */
#define RADIO_BSCONFIG_DATAPEAK2PEAK_Msk (0x7FUL << RADIO_BSCONFIG_DATAPEAK2PEAK_Pos) /*!< Bit mask of DATAPEAK2PEAK field. */

/* Bit 3 : Override for bsEnableThresholdAdjust */
#define RADIO_BSCONFIG_ENABLETHRESHOLDADJUST_Pos (3UL) /*!< Position of ENABLETHRESHOLDADJUST field. */
#define RADIO_BSCONFIG_ENABLETHRESHOLDADJUST_Msk (0x1UL << RADIO_BSCONFIG_ENABLETHRESHOLDADJUST_Pos) /*!< Bit mask of ENABLETHRESHOLDADJUST field. */

/* Bit 2 : Override for bsDisablePreambleBlock */
#define RADIO_BSCONFIG_DISABLEPREAMBLEBLOCK_Pos (2UL) /*!< Position of DISABLEPREAMBLEBLOCK field. */
#define RADIO_BSCONFIG_DISABLEPREAMBLEBLOCK_Msk (0x1UL << RADIO_BSCONFIG_DISABLEPREAMBLEBLOCK_Pos) /*!< Bit mask of DISABLEPREAMBLEBLOCK field. */

/* Bits 1..0 : Override for bsBitLengthToleranse */
#define RADIO_BSCONFIG_BITLENGTHTOLERANSE_Pos (0UL) /*!< Position of BITLENGTHTOLERANSE field. */
#define RADIO_BSCONFIG_BITLENGTHTOLERANSE_Msk (0x3UL << RADIO_BSCONFIG_BITLENGTHTOLERANSE_Pos) /*!< Bit mask of BITLENGTHTOLERANSE field. */

/* Register: RADIO_MFB */
/* Description: Matched Filter Bank (MFB) configuration */

/* Bit 7 : Bypass majority vote */
#define RADIO_MFB_BYPASSMAJVOTE_Pos (7UL) /*!< Position of BYPASSMAJVOTE field. */
#define RADIO_MFB_BYPASSMAJVOTE_Msk (0x1UL << RADIO_MFB_BYPASSMAJVOTE_Pos) /*!< Bit mask of BYPASSMAJVOTE field. */
#define RADIO_MFB_BYPASSMAJVOTE_PASS (0x0UL) /*!< Majority vite */
#define RADIO_MFB_BYPASSMAJVOTE_BYPASS (0x1UL) /*!< Bypass through majority vote */

/* Bits 2..0 : Override value for strobe offset */
#define RADIO_MFB_STRBOFFSET_Pos (0UL) /*!< Position of STRBOFFSET field. */
#define RADIO_MFB_STRBOFFSET_Msk (0x7UL << RADIO_MFB_STRBOFFSET_Pos) /*!< Bit mask of STRBOFFSET field. */

/* Register: RADIO_DRIFT1 */
/* Description: Drift Estimator configuration */

/* Bit 24 : Enable saturation in drift calculator for all modes */
#define RADIO_DRIFT1_SATENABLEALWAYS_Pos (24UL) /*!< Position of SATENABLEALWAYS field. */
#define RADIO_DRIFT1_SATENABLEALWAYS_Msk (0x1UL << RADIO_DRIFT1_SATENABLEALWAYS_Pos) /*!< Bit mask of SATENABLEALWAYS field. */

/* Bits 16..8 : Override value for driftValidTh, drift estimator (hypermode) */
#define RADIO_DRIFT1_VALIDTH_Pos (8UL) /*!< Position of VALIDTH field. */
#define RADIO_DRIFT1_VALIDTH_Msk (0x1FFUL << RADIO_DRIFT1_VALIDTH_Pos) /*!< Bit mask of VALIDTH field. */

/* Bits 7..0 : Override value for IIR feedback , drift estimator (hypermode) */
#define RADIO_DRIFT1_ALPHA_Pos (0UL) /*!< Position of ALPHA field. */
#define RADIO_DRIFT1_ALPHA_Msk (0xFFUL << RADIO_DRIFT1_ALPHA_Pos) /*!< Bit mask of ALPHA field. */

/* Register: RADIO_DRIFT2 */
/* Description: Drift Estimator configuration */

/* Bits 28..20 : Override value for driftDelayTh, drift estimator (hypermode) */
#define RADIO_DRIFT2_DELAYTH_Pos (20UL) /*!< Position of DELAYTH field. */
#define RADIO_DRIFT2_DELAYTH_Msk (0x1FFUL << RADIO_DRIFT2_DELAYTH_Pos) /*!< Bit mask of DELAYTH field. */

/* Bits 19..16 : Override value for driftMaxDist, drift estimator (hypermode) */
#define RADIO_DRIFT2_MAXDIST_Pos (16UL) /*!< Position of MAXDIST field. */
#define RADIO_DRIFT2_MAXDIST_Msk (0xFUL << RADIO_DRIFT2_MAXDIST_Pos) /*!< Bit mask of MAXDIST field. */

/* Bits 8..0 : Override value for driftLowTh, drift estimator (hypermode) */
#define RADIO_DRIFT2_LOWTH_Pos (0UL) /*!< Position of LOWTH field. */
#define RADIO_DRIFT2_LOWTH_Msk (0x1FFUL << RADIO_DRIFT2_LOWTH_Pos) /*!< Bit mask of LOWTH field. */

/* Register: RADIO_CN */
/* Description: Configuration for the CNRIPPLEWARN functionality used for BLE LR. Configuration is only enabled when OVRENCNRIPPLEWARNCFG in OVERRIDE23 is set */

/* Bits 31..16 : maximum baseline value before the peak at the double correlator output. if the baseline value is above the threshold, the following peak will be ignored. this value is ignored when CNABSMAXTHR is set to 0x0000. */
#define RADIO_CN_ABSMAXTHR_Pos (16UL) /*!< Position of ABSMAXTHR field. */
#define RADIO_CN_ABSMAXTHR_Msk (0xFFFFUL << RADIO_CN_ABSMAXTHR_Pos) /*!< Bit mask of ABSMAXTHR field. */

/* Bits 15..0 : Required peak height compared to baseline level measured just before the peak at the double correlator output. If the peak height is below the threshold, it will be ignored. This feature is disabled when CNPEAKMINTHR is set to 0x0000. */
#define RADIO_CN_PEAKMINTHR_Pos (0UL) /*!< Position of PEAKMINTHR field. */
#define RADIO_CN_PEAKMINTHR_Msk (0xFFFFUL << RADIO_CN_PEAKMINTHR_Pos) /*!< Bit mask of PEAKMINTHR field. */

/* Register: RADIO_PEAK */
/* Description: Peak detector configuration */

/* Bit 1 : Allow dual distance between peaks */
#define RADIO_PEAK_ENADUALDISTANCE_Pos (1UL) /*!< Position of ENADUALDISTANCE field. */
#define RADIO_PEAK_ENADUALDISTANCE_Msk (0x1UL << RADIO_PEAK_ENADUALDISTANCE_Pos) /*!< Bit mask of ENADUALDISTANCE field. */

/* Bit 0 : Ignore peaks from DBC which look like sidelobes */
#define RADIO_PEAK_ENMAYBESIDELOBE_Pos (0UL) /*!< Position of ENMAYBESIDELOBE field. */
#define RADIO_PEAK_ENMAYBESIDELOBE_Msk (0x1UL << RADIO_PEAK_ENMAYBESIDELOBE_Pos) /*!< Bit mask of ENMAYBESIDELOBE field. */

/* Register: RADIO_STTCNFG */
/* Description: Strobe time tracking Configuration (Symbol Timing) */

/* Bits 23..16 : Strobe time tracking: adjustment timeout (min distance in symbolperiods between strobe adjustments in same direction) */
#define RADIO_STTCNFG_STTTIMEOUT_Pos (16UL) /*!< Position of STTTIMEOUT field. */
#define RADIO_STTCNFG_STTTIMEOUT_Msk (0xFFUL << RADIO_STTCNFG_STTTIMEOUT_Pos) /*!< Bit mask of STTTIMEOUT field. */

/* Bits 15..8 : Strobe time tracking: strobe time error threshold */
#define RADIO_STTCNFG_STTERRORTH_Pos (8UL) /*!< Position of STTERRORTH field. */
#define RADIO_STTCNFG_STTERRORTH_Msk (0xFFUL << RADIO_STTCNFG_STTERRORTH_Pos) /*!< Bit mask of STTERRORTH field. */

/* Bits 7..0 : Strobe time tracking: IIR filter alpha */
#define RADIO_STTCNFG_STTALPHA_Pos (0UL) /*!< Position of STTALPHA field. */
#define RADIO_STTCNFG_STTALPHA_Msk (0xFFUL << RADIO_STTCNFG_STTALPHA_Pos) /*!< Bit mask of STTALPHA field. */

/* Register: RADIO_BBCKSEL */
/* Description: Clock rates */

/* Bits 14..12 : Hyper demod clock rate 2 */
#define RADIO_BBCKSEL_DIVND4_Pos (12UL) /*!< Position of DIVND4 field. */
#define RADIO_BBCKSEL_DIVND4_Msk (0x7UL << RADIO_BBCKSEL_DIVND4_Pos) /*!< Bit mask of DIVND4 field. */
#define RADIO_BBCKSEL_DIVND4_32M (0x0UL) /*!< Select clock rate 32M */
#define RADIO_BBCKSEL_DIVND4_16M (0x1UL) /*!< Select clock rate 16M */
#define RADIO_BBCKSEL_DIVND4_8M (0x2UL) /*!< Select clock rate 8M */
#define RADIO_BBCKSEL_DIVND4_4M (0x3UL) /*!< Select clock rate 4M */
#define RADIO_BBCKSEL_DIVND4_2M (0x4UL) /*!< Select clock rate 2M */
#define RADIO_BBCKSEL_DIVND4_1M (0x5UL) /*!< Select clock rate 1M */
#define RADIO_BBCKSEL_DIVND4_500K (0x6UL) /*!< Select clock rate 500K */
#define RADIO_BBCKSEL_DIVND4_Disabled (0x7UL) /*!< Select clock OFF */

/* Bits 10..8 : Hyper demod clock rate 1 */
#define RADIO_BBCKSEL_DIVND3_Pos (8UL) /*!< Position of DIVND3 field. */
#define RADIO_BBCKSEL_DIVND3_Msk (0x7UL << RADIO_BBCKSEL_DIVND3_Pos) /*!< Bit mask of DIVND3 field. */
#define RADIO_BBCKSEL_DIVND3_32M (0x0UL) /*!< Select clock rate 32M */
#define RADIO_BBCKSEL_DIVND3_16M (0x1UL) /*!< Select clock rate 16M */
#define RADIO_BBCKSEL_DIVND3_8M (0x2UL) /*!< Select clock rate 8M */
#define RADIO_BBCKSEL_DIVND3_4M (0x3UL) /*!< Select clock rate 4M */
#define RADIO_BBCKSEL_DIVND3_2M (0x4UL) /*!< Select clock rate 2M */
#define RADIO_BBCKSEL_DIVND3_1M (0x5UL) /*!< Select clock rate 1M */
#define RADIO_BBCKSEL_DIVND3_500K (0x6UL) /*!< Select clock rate 500K */
#define RADIO_BBCKSEL_DIVND3_Disabled (0x7UL) /*!< Select clock OFF */

/* Bits 6..4 : Standard demod clock rate 2 */
#define RADIO_BBCKSEL_DIVND2_Pos (4UL) /*!< Position of DIVND2 field. */
#define RADIO_BBCKSEL_DIVND2_Msk (0x7UL << RADIO_BBCKSEL_DIVND2_Pos) /*!< Bit mask of DIVND2 field. */
#define RADIO_BBCKSEL_DIVND2_32M (0x0UL) /*!< Select clock rate 32M */
#define RADIO_BBCKSEL_DIVND2_16M (0x1UL) /*!< Select clock rate 16M */
#define RADIO_BBCKSEL_DIVND2_8M (0x2UL) /*!< Select clock rate 8M */
#define RADIO_BBCKSEL_DIVND2_4M (0x3UL) /*!< Select clock rate 4M */
#define RADIO_BBCKSEL_DIVND2_2M (0x4UL) /*!< Select clock rate 2M */
#define RADIO_BBCKSEL_DIVND2_1M (0x5UL) /*!< Select clock rate 1M */
#define RADIO_BBCKSEL_DIVND2_500K (0x6UL) /*!< Select clock rate 500K */
#define RADIO_BBCKSEL_DIVND2_Disabled (0x7UL) /*!< Select clock OFF */

/* Bits 2..0 : Standard demod clock rate 1 */
#define RADIO_BBCKSEL_DIVND1_Pos (0UL) /*!< Position of DIVND1 field. */
#define RADIO_BBCKSEL_DIVND1_Msk (0x7UL << RADIO_BBCKSEL_DIVND1_Pos) /*!< Bit mask of DIVND1 field. */
#define RADIO_BBCKSEL_DIVND1_32M (0x0UL) /*!< Select clock rate 32M */
#define RADIO_BBCKSEL_DIVND1_16M (0x1UL) /*!< Select clock rate 16M */
#define RADIO_BBCKSEL_DIVND1_8M (0x2UL) /*!< Select clock rate 8M */
#define RADIO_BBCKSEL_DIVND1_4M (0x3UL) /*!< Select clock rate 4M */
#define RADIO_BBCKSEL_DIVND1_2M (0x4UL) /*!< Select clock rate 2M */
#define RADIO_BBCKSEL_DIVND1_1M (0x5UL) /*!< Select clock rate 1M */
#define RADIO_BBCKSEL_DIVND1_500K (0x6UL) /*!< Select clock rate 500K */
#define RADIO_BBCKSEL_DIVND1_Disabled (0x7UL) /*!< Select clock OFF */

/* Register: RADIO_AUTOCORR */
/* Description: Autocorrelator configuration */

/* Bits 27..21 : Offset for comparing between current and historical AC magnitude */
#define RADIO_AUTOCORR_OFFS_Pos (21UL) /*!< Position of OFFS field. */
#define RADIO_AUTOCORR_OFFS_Msk (0x7FUL << RADIO_AUTOCORR_OFFS_Pos) /*!< Bit mask of OFFS field. */

/* Bits 20..17 : Gain factor for low pass filter used to smoothen autocorrelator output. Set to 0000 indicates to select Max filter instead of LPF. */
#define RADIO_AUTOCORR_ALPHA_Pos (17UL) /*!< Position of ALPHA field. */
#define RADIO_AUTOCORR_ALPHA_Msk (0xFUL << RADIO_AUTOCORR_ALPHA_Pos) /*!< Bit mask of ALPHA field. */

/* Bits 16..12 : A ratio to decay the autocorrelator ratio threshold when using adaptive threshold and a weak peak is found. */
#define RADIO_AUTOCORR_ADAPDE_Pos (12UL) /*!< Position of ADAPDE field. */
#define RADIO_AUTOCORR_ADAPDE_Msk (0x1FUL << RADIO_AUTOCORR_ADAPDE_Pos) /*!< Bit mask of ADAPDE field. */

/* Bits 11..7 : A ratio to update the autocorrelator ratio threshold when adaptive threshold is enabled and a strong peak is found. Fraction of highest correlator match historically seen. Setting of 0.8125 is default. */
#define RADIO_AUTOCORR_ADAPTH_Pos (7UL) /*!< Position of ADAPTH field. */
#define RADIO_AUTOCORR_ADAPTH_Msk (0x1FUL << RADIO_AUTOCORR_ADAPTH_Pos) /*!< Bit mask of ADAPTH field. */

/* Bits 6..2 : Default correlator threshold for deciding if valid correlator match is seen. Low setting of 0.10 is default. */
#define RADIO_AUTOCORR_TH_Pos (2UL) /*!< Position of TH field. */
#define RADIO_AUTOCORR_TH_Msk (0x1FUL << RADIO_AUTOCORR_TH_Pos) /*!< Bit mask of TH field. */

/* Bit 1 : Enable adaptive autocorrelator threshold settings based on historically observed correlator output values. */
#define RADIO_AUTOCORR_ADAPEN_Pos (1UL) /*!< Position of ADAPEN field. */
#define RADIO_AUTOCORR_ADAPEN_Msk (0x1UL << RADIO_AUTOCORR_ADAPEN_Pos) /*!< Bit mask of ADAPEN field. */

/* Bit 0 : Enable autocorrelator gating of peaks. */
#define RADIO_AUTOCORR_EN_Pos (0UL) /*!< Position of EN field. */
#define RADIO_AUTOCORR_EN_Msk (0x1UL << RADIO_AUTOCORR_EN_Pos) /*!< Bit mask of EN field. */

/* Register: RADIO_LRSYNC */
/* Description: LrSyncEngine configuration */

/* Bit 21 : Select between classic and MLSD based frame sync */
#define RADIO_LRSYNC_FSMODE_Pos (21UL) /*!< Position of FSMODE field. */
#define RADIO_LRSYNC_FSMODE_Msk (0x1UL << RADIO_LRSYNC_FSMODE_Pos) /*!< Bit mask of FSMODE field. */
#define RADIO_LRSYNC_FSMODE_Classic (0x0UL) /*!< classic mode */
#define RADIO_LRSYNC_FSMODE_Mlsd (0x1UL) /*!< MLSD mode */

/* Bits 20..19 : A toggle to tell when to start the trackers inside each LelrBlk125. */
#define RADIO_LRSYNC_POSSTARTTRACKER_Pos (19UL) /*!< Position of POSSTARTTRACKER field. */
#define RADIO_LRSYNC_POSSTARTTRACKER_Msk (0x3UL << RADIO_LRSYNC_POSSTARTTRACKER_Pos) /*!< Bit mask of POSSTARTTRACKER field. */
#define RADIO_LRSYNC_POSSTARTTRACKER_Disabled (0x0UL) /*!< disabled for all times */
#define RADIO_LRSYNC_POSSTARTTRACKER_EnabledAfterFec1 (0x1UL) /*!< enabled after FEC1 is decoded */
#define RADIO_LRSYNC_POSSTARTTRACKER_EnabledAfterFrameSync (0x2UL) /*!< enabled after frame sync is achieved */
#define RADIO_LRSYNC_POSSTARTTRACKER_EnabledAfterLelrBlk125 (0x3UL) /*!< enabled after LelrBlk125 is activated */

/* Bits 18..14 : A counter is used to reset the LelrBlk125 block that is active. It counts the number of outputs from DeSpreadLELong and compares it with this configured value to see whether a timeout event happens. The range is 32 to 60. Default value is 52. */
#define RADIO_LRSYNC_COUNTERLELRBLKTO_Pos (14UL) /*!< Position of COUNTERLELRBLKTO field. */
#define RADIO_LRSYNC_COUNTERLELRBLKTO_Msk (0x1FUL << RADIO_LRSYNC_COUNTERLELRBLKTO_Pos) /*!< Bit mask of COUNTERLELRBLKTO field. */

/* Bits 13..10 : When a strong peak event is triggered and the average peak strength is higher than the history stored in the block, the timeout counter is reduced by the number configured in this register. The default value is 7. */
#define RADIO_LRSYNC_COUNTERREDUCTION_Pos (10UL) /*!< Position of COUNTERREDUCTION field. */
#define RADIO_LRSYNC_COUNTERREDUCTION_Msk (0xFUL << RADIO_LRSYNC_COUNTERREDUCTION_Pos) /*!< Bit mask of COUNTERREDUCTION field. */

/* Bits 9..4 : A counter is used to indicate the time window of e-CAC check. It counts the number of outputs from DeSpreadLELong and compares it with this configured value to see whether e-CAC result is valid. */
#define RADIO_LRSYNC_COUNTERLELRBLKECAC_Pos (4UL) /*!< Position of COUNTERLELRBLKECAC field. */
#define RADIO_LRSYNC_COUNTERLELRBLKECAC_Msk (0x3FUL << RADIO_LRSYNC_COUNTERLELRBLKECAC_Pos) /*!< Bit mask of COUNTERLELRBLKECAC field. */

/* Bits 3..0 : Modifying how the multiple lr125Front modules are used when synchronizing. */
#define RADIO_LRSYNC_MODE_Pos (0UL) /*!< Position of MODE field. */
#define RADIO_LRSYNC_MODE_Msk (0xFUL << RADIO_LRSYNC_MODE_Pos) /*!< Bit mask of MODE field. */
#define RADIO_LRSYNC_MODE_AllFrontends (0x0UL) /*!< Use all the front ends */
#define RADIO_LRSYNC_MODE_OneFrontend (0x1UL) /*!< Use only one front end */

/* Register: RADIO_DBCORRADAP */
/* Description: Adaptive thresholds for double correlator. */

/* Bits 16..10 : Offset for comparing between current and historical DBC magnitude */
#define RADIO_DBCORRADAP_OFFS_Pos (10UL) /*!< Position of OFFS field. */
#define RADIO_DBCORRADAP_OFFS_Msk (0x7FUL << RADIO_DBCORRADAP_OFFS_Pos) /*!< Bit mask of OFFS field. */

/* Bits 9..5 : A ratio to decay the DBC ration threshold when using adaptive threshold and a weak peak is found. */
#define RADIO_DBCORRADAP_DE_Pos (5UL) /*!< Position of DE field. */
#define RADIO_DBCORRADAP_DE_Msk (0x1FUL << RADIO_DBCORRADAP_DE_Pos) /*!< Bit mask of DE field. */

/* Bits 4..0 : A ratio to update the DBC ratio threshold when adaptive threshold is enabled and a strong peak is found. Fraction of highest correlator match historically seen. Setting of 0.90625 is default. */
#define RADIO_DBCORRADAP_TH_Pos (0UL) /*!< Position of TH field. */
#define RADIO_DBCORRADAP_TH_Msk (0x1FUL << RADIO_DBCORRADAP_TH_Pos) /*!< Bit mask of TH field. */

/* Register: RADIO_QOVERRIDE26 */
/* Description: Override for selecting whether to use LrSyncEngine or the classic demodulator. */

/* Bit 0 : Select whether to use LrSyncEngine or the classic demodulator. */
#define RADIO_QOVERRIDE26_USELRSYNCENGINE_Pos (0UL) /*!< Position of USELRSYNCENGINE field. */
#define RADIO_QOVERRIDE26_USELRSYNCENGINE_Msk (0x1UL << RADIO_QOVERRIDE26_USELRSYNCENGINE_Pos) /*!< Bit mask of USELRSYNCENGINE field. */
#define RADIO_QOVERRIDE26_USELRSYNCENGINE_Classic (0x0UL) /*!< use classic demodulator */
#define RADIO_QOVERRIDE26_USELRSYNCENGINE_LrSyncEngine (0x1UL) /*!< Use LrSyncEngine demodulator */

/* Register: RADIO_TXCONFIG */
/* Description: Tx configuration */

/* Bit 29 : Enable Tx for BLE long range modes (Do not enable both Ieee802154_250Kbit and BLE long range) */
#define RADIO_TXCONFIG_BLELONGRANGE_Pos (29UL) /*!< Position of BLELONGRANGE field. */
#define RADIO_TXCONFIG_BLELONGRANGE_Msk (0x1UL << RADIO_TXCONFIG_BLELONGRANGE_Pos) /*!< Bit mask of BLELONGRANGE field. */
#define RADIO_TXCONFIG_BLELONGRANGE_Disabled (0x0UL) /*!< Disable Tx for BLE long range modes */
#define RADIO_TXCONFIG_BLELONGRANGE_Enabled (0x1UL) /*!< Enable Tx for BLE long range modes */

/* Bit 28 : Enable Tx for Ieee802154_250Kbit mode and long range modes (Do not enable both Ieee802154_250Kbit and long range) */
#define RADIO_TXCONFIG_IEEE802154_Pos (28UL) /*!< Position of IEEE802154 field. */
#define RADIO_TXCONFIG_IEEE802154_Msk (0x1UL << RADIO_TXCONFIG_IEEE802154_Pos) /*!< Bit mask of IEEE802154 field. */
#define RADIO_TXCONFIG_IEEE802154_Disabled (0x0UL) /*!< Disable Tx for Ieee802154_250Kbit mode */
#define RADIO_TXCONFIG_IEEE802154_Enabled (0x1UL) /*!< Enable Tx for Ieee802154_250Kbit mode */

/* Bits 27..25 : IQMOD modulation index */
#define RADIO_TXCONFIG_IQMODINDEX_Pos (25UL) /*!< Position of IQMODINDEX field. */
#define RADIO_TXCONFIG_IQMODINDEX_Msk (0x7UL << RADIO_TXCONFIG_IQMODINDEX_Pos) /*!< Bit mask of IQMODINDEX field. */
#define RADIO_TXCONFIG_IQMODINDEX_ModIndex0h25 (0x0UL) /*!< Modulation index = 0.25(Future) */
#define RADIO_TXCONFIG_IQMODINDEX_ModIndex0h32 (0x1UL) /*!< Modulation index = 0.32(Future) */
#define RADIO_TXCONFIG_IQMODINDEX_ModIndex0h5 (0x2UL) /*!< Modulation index = 0.5(Future) */
#define RADIO_TXCONFIG_IQMODINDEX_ModIndex1h0 (0x3UL) /*!< Modulation index = 1(Future) */
#define RADIO_TXCONFIG_IQMODINDEX_ModIndex2h0 (0x4UL) /*!< Modulation index = 2(Future) */

/* Bits 23..22 : IQMOD GFSK bandwidth */
#define RADIO_TXCONFIG_IQMODBT_Pos (22UL) /*!< Position of IQMODBT field. */
#define RADIO_TXCONFIG_IQMODBT_Msk (0x3UL << RADIO_TXCONFIG_IQMODBT_Pos) /*!< Bit mask of IQMODBT field. */
#define RADIO_TXCONFIG_IQMODBT_0BT55 (0x0UL) /*!< BT=0.55 */
#define RADIO_TXCONFIG_IQMODBT_0BT60 (0x1UL) /*!< BT=0.60 */

/* Bits 21..19 : IQMOD additional symbol mapping not set by MODE(Future) */
#define RADIO_TXCONFIG_IQMODSYMBOL_Pos (19UL) /*!< Position of IQMODSYMBOL field. */
#define RADIO_TXCONFIG_IQMODSYMBOL_Msk (0x7UL << RADIO_TXCONFIG_IQMODSYMBOL_Pos) /*!< Bit mask of IQMODSYMBOL field. */

/* Bit 18 : Enable IQ modulator */
#define RADIO_TXCONFIG_IQMODENABLE_Pos (18UL) /*!< Position of IQMODENABLE field. */
#define RADIO_TXCONFIG_IQMODENABLE_Msk (0x1UL << RADIO_TXCONFIG_IQMODENABLE_Pos) /*!< Bit mask of IQMODENABLE field. */

/* Bit 17 : Bypass MSK precoding */
#define RADIO_TXCONFIG_BYPASSPRECODE_Pos (17UL) /*!< Position of BYPASSPRECODE field. */
#define RADIO_TXCONFIG_BYPASSPRECODE_Msk (0x1UL << RADIO_TXCONFIG_BYPASSPRECODE_Pos) /*!< Bit mask of BYPASSPRECODE field. */

/* Bit 16 : Swap pattern mapping. Default 0, 0 is mapped to a 0011 sequence, 1 is mapped to a 1100 sequence. If swap bit is set, 1 is mapped to a 0011 sequence, 0 is mapped to a 1100 sequence. */
#define RADIO_TXCONFIG_LRSPREADSWAP_Pos (16UL) /*!< Position of LRSPREADSWAP field. */
#define RADIO_TXCONFIG_LRSPREADSWAP_Msk (0x1UL << RADIO_TXCONFIG_LRSPREADSWAP_Pos) /*!< Bit mask of LRSPREADSWAP field. */

/* Bits 14..8 : Code polynomial 1 */
#define RADIO_TXCONFIG_CODEPOLY1_Pos (8UL) /*!< Position of CODEPOLY1 field. */
#define RADIO_TXCONFIG_CODEPOLY1_Msk (0x7FUL << RADIO_TXCONFIG_CODEPOLY1_Pos) /*!< Bit mask of CODEPOLY1 field. */

/* Bits 6..0 : Code polynomial 0 */
#define RADIO_TXCONFIG_CODEPOLY0_Pos (0UL) /*!< Position of CODEPOLY0 field. */
#define RADIO_TXCONFIG_CODEPOLY0_Msk (0x7FUL << RADIO_TXCONFIG_CODEPOLY0_Pos) /*!< Bit mask of CODEPOLY0 field. */

/* Register: RADIO_DFEMODE */
/* Description: Whether to use Angle-of-Arrival (AOA) or Angle-of-Departure (AOD) */

/* Bits 1..0 : Direction finding operation mode */
#define RADIO_DFEMODE_DFEOPMODE_Pos (0UL) /*!< Position of DFEOPMODE field. */
#define RADIO_DFEMODE_DFEOPMODE_Msk (0x3UL << RADIO_DFEMODE_DFEOPMODE_Pos) /*!< Bit mask of DFEOPMODE field. */
#define RADIO_DFEMODE_DFEOPMODE_Disabled (0x0UL) /*!< Direction finding mode disabled */
#define RADIO_DFEMODE_DFEOPMODE_AoD (0x2UL) /*!< Direction finding mode set to AoD */
#define RADIO_DFEMODE_DFEOPMODE_AoA (0x3UL) /*!< Direction finding mode set to AoA */

/* Register: RADIO_DFESTATUS */
/* Description: DFE status information */

/* Bit 4 : Internal state of sampling state machine */
#define RADIO_DFESTATUS_SAMPLINGSTATE_Pos (4UL) /*!< Position of SAMPLINGSTATE field. */
#define RADIO_DFESTATUS_SAMPLINGSTATE_Msk (0x1UL << RADIO_DFESTATUS_SAMPLINGSTATE_Pos) /*!< Bit mask of SAMPLINGSTATE field. */
#define RADIO_DFESTATUS_SAMPLINGSTATE_Idle (0x0UL) /*!< Sampling state Idle */
#define RADIO_DFESTATUS_SAMPLINGSTATE_Sampling (0x1UL) /*!< Sampling state Sampling */

/* Bits 2..0 : Internal state of switching state machine */
#define RADIO_DFESTATUS_SWITCHINGSTATE_Pos (0UL) /*!< Position of SWITCHINGSTATE field. */
#define RADIO_DFESTATUS_SWITCHINGSTATE_Msk (0x7UL << RADIO_DFESTATUS_SWITCHINGSTATE_Pos) /*!< Bit mask of SWITCHINGSTATE field. */
#define RADIO_DFESTATUS_SWITCHINGSTATE_Idle (0x0UL) /*!< Switching state Idle */
#define RADIO_DFESTATUS_SWITCHINGSTATE_Offset (0x1UL) /*!< Switching state Offset */
#define RADIO_DFESTATUS_SWITCHINGSTATE_Guard (0x2UL) /*!< Switching state Guard */
#define RADIO_DFESTATUS_SWITCHINGSTATE_Ref (0x3UL) /*!< Switching state Ref */
#define RADIO_DFESTATUS_SWITCHINGSTATE_Switching (0x4UL) /*!< Switching state Switching */
#define RADIO_DFESTATUS_SWITCHINGSTATE_Ending (0x5UL) /*!< Switching state Ending */

/* Register: RADIO_DFECTRL1 */
/* Description: Various configuration for Direction finding */

/* Bits 27..24 : Gain will be lowered by the specified number of gain steps at the start of CTE */
#define RADIO_DFECTRL1_AGCBACKOFFGAIN_Pos (24UL) /*!< Position of AGCBACKOFFGAIN field. */
#define RADIO_DFECTRL1_AGCBACKOFFGAIN_Msk (0xFUL << RADIO_DFECTRL1_AGCBACKOFFGAIN_Pos) /*!< Bit mask of AGCBACKOFFGAIN field. */

/* Bits 23..20 : Repeat every antenna pattern N times. */
#define RADIO_DFECTRL1_REPEATPATTERN_Pos (20UL) /*!< Position of REPEATPATTERN field. */
#define RADIO_DFECTRL1_REPEATPATTERN_Msk (0xFUL << RADIO_DFECTRL1_REPEATPATTERN_Pos) /*!< Bit mask of REPEATPATTERN field. */
#define RADIO_DFECTRL1_REPEATPATTERN_NoRepeat (0x0UL) /*!< Do not repeat (1 time in total) */

/* Bits 18..16 : Interval between samples in the SWITCHING period when CTEINLINECTRLEN is 0 */
#define RADIO_DFECTRL1_TSAMPLESPACING_Pos (16UL) /*!< Position of TSAMPLESPACING field. */
#define RADIO_DFECTRL1_TSAMPLESPACING_Msk (0x7UL << RADIO_DFECTRL1_TSAMPLESPACING_Pos) /*!< Bit mask of TSAMPLESPACING field. */
#define RADIO_DFECTRL1_TSAMPLESPACING_4us (0x1UL) /*!< 4us */
#define RADIO_DFECTRL1_TSAMPLESPACING_2us (0x2UL) /*!< 2us */
#define RADIO_DFECTRL1_TSAMPLESPACING_1us (0x3UL) /*!< 1us */
#define RADIO_DFECTRL1_TSAMPLESPACING_500ns (0x4UL) /*!< 0.5us */
#define RADIO_DFECTRL1_TSAMPLESPACING_250ns (0x5UL) /*!< 0.25us */
#define RADIO_DFECTRL1_TSAMPLESPACING_125ns (0x6UL) /*!< 0.125us */

/* Bit 15 : Whether to sample I/Q or magnitude/phase */
#define RADIO_DFECTRL1_SAMPLETYPE_Pos (15UL) /*!< Position of SAMPLETYPE field. */
#define RADIO_DFECTRL1_SAMPLETYPE_Msk (0x1UL << RADIO_DFECTRL1_SAMPLETYPE_Pos) /*!< Bit mask of SAMPLETYPE field. */
#define RADIO_DFECTRL1_SAMPLETYPE_IQ (0x0UL) /*!< Complex samples in I and Q */
#define RADIO_DFECTRL1_SAMPLETYPE_MagPhase (0x1UL) /*!< Complex samples as magnitude and phase */

/* Bits 14..12 : Interval between samples in the REFERENCE period */
#define RADIO_DFECTRL1_TSAMPLESPACINGREF_Pos (12UL) /*!< Position of TSAMPLESPACINGREF field. */
#define RADIO_DFECTRL1_TSAMPLESPACINGREF_Msk (0x7UL << RADIO_DFECTRL1_TSAMPLESPACINGREF_Pos) /*!< Bit mask of TSAMPLESPACINGREF field. */
#define RADIO_DFECTRL1_TSAMPLESPACINGREF_8us (0x0UL) /*!< 8us */
#define RADIO_DFECTRL1_TSAMPLESPACINGREF_4us (0x1UL) /*!< 4us */
#define RADIO_DFECTRL1_TSAMPLESPACINGREF_2us (0x2UL) /*!< 2us */
#define RADIO_DFECTRL1_TSAMPLESPACINGREF_1us (0x3UL) /*!< 1us */
#define RADIO_DFECTRL1_TSAMPLESPACINGREF_500ns (0x4UL) /*!< 0.5us */
#define RADIO_DFECTRL1_TSAMPLESPACINGREF_250ns (0x5UL) /*!< 0.25us */
#define RADIO_DFECTRL1_TSAMPLESPACINGREF_125ns (0x6UL) /*!< 0.125us */

/* Bit 11 : Trigger AoA/AoD procedure using only task */
#define RADIO_DFECTRL1_TRIGGERWITHTASKONLY_Pos (11UL) /*!< Position of TRIGGERWITHTASKONLY field. */
#define RADIO_DFECTRL1_TRIGGERWITHTASKONLY_Msk (0x1UL << RADIO_DFECTRL1_TRIGGERWITHTASKONLY_Pos) /*!< Bit mask of TRIGGERWITHTASKONLY field. */
#define RADIO_DFECTRL1_TRIGGERWITHTASKONLY_Multiple (0x0UL) /*!< Trigger also with other signals */
#define RADIO_DFECTRL1_TRIGGERWITHTASKONLY_OnlyTask (0x1UL) /*!< Only allow triggering a procedure with TASKS_DFESTART */

/* Bits 10..8 : Interval between every time the antenna is changed in the SWITCHING state */
#define RADIO_DFECTRL1_TSWITCHSPACING_Pos (8UL) /*!< Position of TSWITCHSPACING field. */
#define RADIO_DFECTRL1_TSWITCHSPACING_Msk (0x7UL << RADIO_DFECTRL1_TSWITCHSPACING_Pos) /*!< Bit mask of TSWITCHSPACING field. */
#define RADIO_DFECTRL1_TSWITCHSPACING_8us (0x0UL) /*!< 8us */
#define RADIO_DFECTRL1_TSWITCHSPACING_4us (0x1UL) /*!< 4us */
#define RADIO_DFECTRL1_TSWITCHSPACING_2us (0x2UL) /*!< 2us */
#define RADIO_DFECTRL1_TSWITCHSPACING_1us (0x3UL) /*!< 1us */
#define RADIO_DFECTRL1_TSWITCHSPACING_500ns (0x4UL) /*!< 0.5us */
#define RADIO_DFECTRL1_TSWITCHSPACING_250ns (0x5UL) /*!< 0.25us */

/* Bit 7 : Add CTE extension and do antenna switching/sampling in this extension */
#define RADIO_DFECTRL1_DFEINEXTENSION_Pos (7UL) /*!< Position of DFEINEXTENSION field. */
#define RADIO_DFECTRL1_DFEINEXTENSION_Msk (0x1UL << RADIO_DFECTRL1_DFEINEXTENSION_Pos) /*!< Bit mask of DFEINEXTENSION field. */
#define RADIO_DFECTRL1_DFEINEXTENSION_Payload (0x0UL) /*!< Antenna switching/sampling is done in the packet payload */
#define RADIO_DFECTRL1_DFEINEXTENSION_CRC (0x1UL) /*!< AoA/AoD procedure triggered at end of CRC */

/* Bits 5..0 : Length of the AoA/AoD procedure in number of 8 us units */
#define RADIO_DFECTRL1_NUMBEROF8US_Pos (0UL) /*!< Position of NUMBEROF8US field. */
#define RADIO_DFECTRL1_NUMBEROF8US_Msk (0x3FUL << RADIO_DFECTRL1_NUMBEROF8US_Pos) /*!< Bit mask of NUMBEROF8US field. */

/* Register: RADIO_DFECTRL2 */
/* Description: Start offset for Direction finding */

/* Bits 27..16 : Signed value offset before starting sampling in number of 16M cycles relative to the beginning of the REFERENCE state - 12 us after switching start */
#define RADIO_DFECTRL2_TSAMPLEOFFSET_Pos (16UL) /*!< Position of TSAMPLEOFFSET field. */
#define RADIO_DFECTRL2_TSAMPLEOFFSET_Msk (0xFFFUL << RADIO_DFECTRL2_TSAMPLEOFFSET_Pos) /*!< Bit mask of TSAMPLEOFFSET field. */

/* Bits 12..0 : Signed value offset after the end of the CRC before starting switching in number of 16M cycles */
#define RADIO_DFECTRL2_TSWITCHOFFSET_Pos (0UL) /*!< Position of TSWITCHOFFSET field. */
#define RADIO_DFECTRL2_TSWITCHOFFSET_Msk (0x1FFFUL << RADIO_DFECTRL2_TSWITCHOFFSET_Pos) /*!< Bit mask of TSWITCHOFFSET field. */

/* Register: RADIO_DFECTRL3 */
/* Description: Various hacker/tuning configuration for Direction finding */

/* Bit 31 : Applies only when MIRRORSEQUENCE is set. Selects whether to repeat the end pattern (in both ends) or not */
#define RADIO_DFECTRL3_SHORTENMIRRORSEQUENCE_Pos (31UL) /*!< Position of SHORTENMIRRORSEQUENCE field. */
#define RADIO_DFECTRL3_SHORTENMIRRORSEQUENCE_Msk (0x1UL << RADIO_DFECTRL3_SHORTENMIRRORSEQUENCE_Pos) /*!< Bit mask of SHORTENMIRRORSEQUENCE field. */
#define RADIO_DFECTRL3_SHORTENMIRRORSEQUENCE_Disable (0x0UL) /*!< End patterns are repeated */
#define RADIO_DFECTRL3_SHORTENMIRRORSEQUENCE_Enable (0x1UL) /*!< End patterns are not repeated */

/* Bit 30 : When reaching the last antenna pattern, it repeats that pattern, and then goes back down again. */
#define RADIO_DFECTRL3_MIRRORSEQUENCE_Pos (30UL) /*!< Position of MIRRORSEQUENCE field. */
#define RADIO_DFECTRL3_MIRRORSEQUENCE_Msk (0x1UL << RADIO_DFECTRL3_MIRRORSEQUENCE_Pos) /*!< Bit mask of MIRRORSEQUENCE field. */
#define RADIO_DFECTRL3_MIRRORSEQUENCE_Disable (0x0UL) /*!< Do not mirror the sequence */
#define RADIO_DFECTRL3_MIRRORSEQUENCE_Enable (0x1UL) /*!< Mirror the sequence */

/* Bit 29 : Whether to have the ability to have separate sampling rate in the REFERENCE period vs the SWITCHING state */
#define RADIO_DFECTRL3_CHANGESAMPLERATE_Pos (29UL) /*!< Position of CHANGESAMPLERATE field. */
#define RADIO_DFECTRL3_CHANGESAMPLERATE_Msk (0x1UL << RADIO_DFECTRL3_CHANGESAMPLERATE_Pos) /*!< Bit mask of CHANGESAMPLERATE field. */
#define RADIO_DFECTRL3_CHANGESAMPLERATE_Same (0x0UL) /*!< Always use sample spacing given by TSAMPLESPACINGREF */
#define RADIO_DFECTRL3_CHANGESAMPLERATE_Change (0x1UL) /*!< Use TSAMPLESPACINGREF in the REFERENCE period, and TSAMPLESPACING or CTEINLINEAODRXMODExUS in the SWITCHING period */

/* Bits 28..24 : Length of REFERENCE period in number of microseconds, normally 8 */
#define RADIO_DFECTRL3_TREFPERIOD_Pos (24UL) /*!< Position of TREFPERIOD field. */
#define RADIO_DFECTRL3_TREFPERIOD_Msk (0x1FUL << RADIO_DFECTRL3_TREFPERIOD_Pos) /*!< Bit mask of TREFPERIOD field. */

/* Bits 23..20 : Length of GUARD period in number of microseconds, normally 4 */
#define RADIO_DFECTRL3_TGUARDPERIOD_Pos (20UL) /*!< Position of TGUARDPERIOD field. */
#define RADIO_DFECTRL3_TGUARDPERIOD_Msk (0xFUL << RADIO_DFECTRL3_TGUARDPERIOD_Pos) /*!< Bit mask of TGUARDPERIOD field. */

/* Bits 19..16 : Number of 4us periods to subtract from numberOf8us when calculating total number of samples to capture */
#define RADIO_DFECTRL3_COMP4USSAMPLING_Pos (16UL) /*!< Position of COMP4USSAMPLING field. */
#define RADIO_DFECTRL3_COMP4USSAMPLING_Msk (0xFUL << RADIO_DFECTRL3_COMP4USSAMPLING_Pos) /*!< Bit mask of COMP4USSAMPLING field. */

/* Bits 15..12 : Number of 4us periods to subtract from numberOf8us when calculating total number of antenna slots switches */
#define RADIO_DFECTRL3_COMP4USSWITCHING_Pos (12UL) /*!< Position of COMP4USSWITCHING field. */
#define RADIO_DFECTRL3_COMP4USSWITCHING_Msk (0xFUL << RADIO_DFECTRL3_COMP4USSWITCHING_Pos) /*!< Bit mask of COMP4USSWITCHING field. */

/* Bits 11..6 : Same as SPACINGBETWEEN when using CTEINLINECTRL and CTEType is 2 us slots */
#define RADIO_DFECTRL3_SPACINGBETWEEN2US_Pos (6UL) /*!< Position of SPACINGBETWEEN2US field. */
#define RADIO_DFECTRL3_SPACINGBETWEEN2US_Msk (0x3FUL << RADIO_DFECTRL3_SPACINGBETWEEN2US_Pos) /*!< Bit mask of SPACINGBETWEEN2US field. */

/* Bits 5..0 : Signed tuning value for the spacing between the last sample in the reference period and the first sample in the first sample slot */
#define RADIO_DFECTRL3_SPACINGBETWEEN_Pos (0UL) /*!< Position of SPACINGBETWEEN field. */
#define RADIO_DFECTRL3_SPACINGBETWEEN_Msk (0x3FUL << RADIO_DFECTRL3_SPACINGBETWEEN_Pos) /*!< Bit mask of SPACINGBETWEEN field. */

/* Register: RADIO_DFECTRL4 */
/* Description: Various hacker/tuning configuration for Direction finding */

/* Bits 31..20 : Maximum number of samples to capture */
#define RADIO_DFECTRL4_MAXTOTALSAMPLES_Pos (20UL) /*!< Position of MAXTOTALSAMPLES field. */
#define RADIO_DFECTRL4_MAXTOTALSAMPLES_Msk (0xFFFUL << RADIO_DFECTRL4_MAXTOTALSAMPLES_Pos) /*!< Bit mask of MAXTOTALSAMPLES field. */

/* Bit 19 : Start position of repeated part of switching pattern sequence */
#define RADIO_DFECTRL4_RETURNTOREFATEND_Pos (19UL) /*!< Position of RETURNTOREFATEND field. */
#define RADIO_DFECTRL4_RETURNTOREFATEND_Msk (0x1UL << RADIO_DFECTRL4_RETURNTOREFATEND_Pos) /*!< Bit mask of RETURNTOREFATEND field. */
#define RADIO_DFECTRL4_RETURNTOREFATEND_Disable (0x0UL) /*!< Return to SWITCHPATTERN[2] after reaching the end of the switching pattern sequence */
#define RADIO_DFECTRL4_RETURNTOREFATEND_Enable (0x1UL) /*!< Return to SWITCHPATTERN[1] after reaching the end of the switching pattern sequence */

/* Bits 18..8 : Maximum number of antenna slots */
#define RADIO_DFECTRL4_MAXTOTALSLOTS_Pos (8UL) /*!< Position of MAXTOTALSLOTS field. */
#define RADIO_DFECTRL4_MAXTOTALSLOTS_Msk (0x7FFUL << RADIO_DFECTRL4_MAXTOTALSLOTS_Pos) /*!< Bit mask of MAXTOTALSLOTS field. */

/* Bit 7 : Enable correlator before Direction Finding samples */
#define RADIO_DFECTRL4_DFECORREN_Pos (7UL) /*!< Position of DFECORREN field. */
#define RADIO_DFECTRL4_DFECORREN_Msk (0x1UL << RADIO_DFECTRL4_DFECORREN_Pos) /*!< Bit mask of DFECORREN field. */
#define RADIO_DFECTRL4_DFECORREN_Disable (0x0UL) /*!< Disable correlator */
#define RADIO_DFECTRL4_DFECORREN_Enable (0x1UL) /*!< Enable correlator */

/* Bit 6 : TSAMPLESPACING is ignored for the samples taken in the SWITCHING state TSAMPLESPACINGREF is still used for the first samples (REFERENCE period) */
#define RADIO_DFECTRL4_ONESAMPLEPERSLOT_Pos (6UL) /*!< Position of ONESAMPLEPERSLOT field. */
#define RADIO_DFECTRL4_ONESAMPLEPERSLOT_Msk (0x1UL << RADIO_DFECTRL4_ONESAMPLEPERSLOT_Pos) /*!< Bit mask of ONESAMPLEPERSLOT field. */

/* Bit 5 : Ignore that the UTxRxChain says that the packet has been received Continue running if more time to run */
#define RADIO_DFECTRL4_IGNOREENDOFPACKET_Pos (5UL) /*!< Position of IGNOREENDOFPACKET field. */
#define RADIO_DFECTRL4_IGNOREENDOFPACKET_Msk (0x1UL << RADIO_DFECTRL4_IGNOREENDOFPACKET_Pos) /*!< Bit mask of IGNOREENDOFPACKET field. */
#define RADIO_DFECTRL4_IGNOREENDOFPACKET_DoNotIgnore (0x0UL) /*!< Do not ignore the end of packet */
#define RADIO_DFECTRL4_IGNOREENDOFPACKET_Ignore (0x1UL) /*!< Ignore the end of packet */

/* Bit 4 : Insert reference antenna(SWITCHPATTERN[1]) between antenna switches, from SWITCHPATTERN[2] onwards */
#define RADIO_DFECTRL4_SWITCHBACKTOREF_Pos (4UL) /*!< Position of SWITCHBACKTOREF field. */
#define RADIO_DFECTRL4_SWITCHBACKTOREF_Msk (0x1UL << RADIO_DFECTRL4_SWITCHBACKTOREF_Pos) /*!< Bit mask of SWITCHBACKTOREF field. */
#define RADIO_DFECTRL4_SWITCHBACKTOREF_Disable (0x0UL) /*!< Do not insert reference antenna between switches */
#define RADIO_DFECTRL4_SWITCHBACKTOREF_Enable (0x1UL) /*!< Insert reference antenna between switches */

/* Bit 3 : Ignore the maximum number of samples and antenna slots specified with MAXTOTALSAMPLES and MAXTOTALSLOTS */
#define RADIO_DFECTRL4_IGNOREMAXSPEC_Pos (3UL) /*!< Position of IGNOREMAXSPEC field. */
#define RADIO_DFECTRL4_IGNOREMAXSPEC_Msk (0x1UL << RADIO_DFECTRL4_IGNOREMAXSPEC_Pos) /*!< Bit mask of IGNOREMAXSPEC field. */
#define RADIO_DFECTRL4_IGNOREMAXSPEC_DoNotIgnore (0x0UL) /*!< Use the max specs */
#define RADIO_DFECTRL4_IGNOREMAXSPEC_Ignore (0x1UL) /*!< Ignore the max specs */

/* Bit 2 : Ignore the length specification in numberOf8us */
#define RADIO_DFECTRL4_IGNORE8USLENGTH_Pos (2UL) /*!< Position of IGNORE8USLENGTH field. */
#define RADIO_DFECTRL4_IGNORE8USLENGTH_Msk (0x1UL << RADIO_DFECTRL4_IGNORE8USLENGTH_Pos) /*!< Bit mask of IGNORE8USLENGTH field. */
#define RADIO_DFECTRL4_IGNORE8USLENGTH_DoNotIgnore (0x0UL) /*!< Use the length specification */
#define RADIO_DFECTRL4_IGNORE8USLENGTH_Ignore (0x1UL) /*!< Ignore the length specification */

/* Bits 1..0 : Start point of TSAMPLEOFFSET sampling relative to which part in the switching state machine */
#define RADIO_DFECTRL4_SAMPLESTARTRELATIVETO_Pos (0UL) /*!< Position of SAMPLESTARTRELATIVETO field. */
#define RADIO_DFECTRL4_SAMPLESTARTRELATIVETO_Msk (0x3UL << RADIO_DFECTRL4_SAMPLESTARTRELATIVETO_Pos) /*!< Bit mask of SAMPLESTARTRELATIVETO field. */
#define RADIO_DFECTRL4_SAMPLESTARTRELATIVETO_Reference (0x0UL) /*!< At the start of the reference antenna period */
#define RADIO_DFECTRL4_SAMPLESTARTRELATIVETO_Switching (0x1UL) /*!< At the start of antenna switching after the reference antenna period */
#define RADIO_DFECTRL4_SAMPLESTARTRELATIVETO_Trigger (0x2UL) /*!< When it is triggered Either TASKS_DFESTART, address match or AoA/AoD procedure trigger source */
#define RADIO_DFECTRL4_SAMPLESTARTRELATIVETO_Guard (0x3UL) /*!< At the start of the GUARD period */

/* Register: RADIO_DFECTRL5 */
/* Description: Various hacker/tuning configuration for Direction finding */

/* Bits 28..24 : Tuning of the timing difference between the hypermode demodulator and the standard demodulator for the DFE start event, in 62.5 ns units */
#define RADIO_DFECTRL5_DFEOFFSETSTDHYP_Pos (24UL) /*!< Position of DFEOFFSETSTDHYP field. */
#define RADIO_DFECTRL5_DFEOFFSETSTDHYP_Msk (0x1FUL << RADIO_DFECTRL5_DFEOFFSETSTDHYP_Pos) /*!< Bit mask of DFEOFFSETSTDHYP field. */

/* Bit 18 : Selects whether saturation (being reported from the radio front-end) should be ignored in the beginning of the slot or not */
#define RADIO_DFECTRL5_NEVERIGNORESAT_Pos (18UL) /*!< Position of NEVERIGNORESAT field. */
#define RADIO_DFECTRL5_NEVERIGNORESAT_Msk (0x1UL << RADIO_DFECTRL5_NEVERIGNORESAT_Pos) /*!< Bit mask of NEVERIGNORESAT field. */
#define RADIO_DFECTRL5_NEVERIGNORESAT_IGNORE (0x0UL) /*!< Saturation being indicated from the front-end is ignored if it happens in the first 40 percent of the sample spacing after a sample was saved to RAM */
#define RADIO_DFECTRL5_NEVERIGNORESAT_NEVERIGNORE (0x1UL) /*!< Saturation is always reported in RAM if detected by the frontend */

/* Bits 17..16 : Set how input saturation will be present in the captured samples */
#define RADIO_DFECTRL5_SATURATIONMODE_Pos (16UL) /*!< Position of SATURATIONMODE field. */
#define RADIO_DFECTRL5_SATURATIONMODE_Msk (0x3UL << RADIO_DFECTRL5_SATURATIONMODE_Pos) /*!< Bit mask of SATURATIONMODE field. */
#define RADIO_DFECTRL5_SATURATIONMODE_OFF (0x0UL) /*!< No saturation is presented */
#define RADIO_DFECTRL5_SATURATIONMODE_SETMINVAL (0x1UL) /*!< Saturation is marked by setting both I and Q to -32768 (or mag/phase if SAMPLETYPE is 1) */
#define RADIO_DFECTRL5_SATURATIONMODE_SATURATIONBIT (0x2UL) /*!< Bit 15 of both the I and Q values indicates saturation. I and Q are hence only 15 bit values */

/* Register: RADIO_SWITCHPATTERN */
/* Description: GPIO patterns to be used for each antenna */

/* Bits 7..0 : Fill array of GPIO patterns for antenna control */
#define RADIO_SWITCHPATTERN_SWITCHPATTERN_Pos (0UL) /*!< Position of SWITCHPATTERN field. */
#define RADIO_SWITCHPATTERN_SWITCHPATTERN_Msk (0xFFUL << RADIO_SWITCHPATTERN_SWITCHPATTERN_Pos) /*!< Bit mask of SWITCHPATTERN field. */

/* Register: RADIO_CLEARPATTERN */
/* Description: Clear the GPIO pattern array for antenna control */

/* Bit 0 : Clear the GPIO pattern array for antenna control Behaves as a task register, but does not have PPI nor IRQ */
#define RADIO_CLEARPATTERN_CLEARPATTERN_Pos (0UL) /*!< Position of CLEARPATTERN field. */
#define RADIO_CLEARPATTERN_CLEARPATTERN_Msk (0x1UL << RADIO_CLEARPATTERN_CLEARPATTERN_Pos) /*!< Bit mask of CLEARPATTERN field. */

/* Register: RADIO_PSEL_DFEGPIO */
/* Description: Description collection: Pin select for DFE pin n */

/* Bit 31 : Connection */
#define RADIO_PSEL_DFEGPIO_CONNECT_Pos (31UL) /*!< Position of CONNECT field. */
#define RADIO_PSEL_DFEGPIO_CONNECT_Msk (0x1UL << RADIO_PSEL_DFEGPIO_CONNECT_Pos) /*!< Bit mask of CONNECT field. */
#define RADIO_PSEL_DFEGPIO_CONNECT_Connected (0x0UL) /*!< Connect */
#define RADIO_PSEL_DFEGPIO_CONNECT_Disconnected (0x1UL) /*!< Disconnect */

/* Bits 8..5 : Port number */
#define RADIO_PSEL_DFEGPIO_PORT_Pos (5UL) /*!< Position of PORT field. */
#define RADIO_PSEL_DFEGPIO_PORT_Msk (0xFUL << RADIO_PSEL_DFEGPIO_PORT_Pos) /*!< Bit mask of PORT field. */

/* Bits 4..0 : Pin number */
#define RADIO_PSEL_DFEGPIO_PIN_Pos (0UL) /*!< Position of PIN field. */
#define RADIO_PSEL_DFEGPIO_PIN_Msk (0x1FUL << RADIO_PSEL_DFEGPIO_PIN_Pos) /*!< Bit mask of PIN field. */

/* Register: RADIO_DFEPACKET_PTR */
/* Description: Data pointer */

/* Bit 29 :   */
#define RADIO_DFEPACKET_PTR_BASE_Pos (29UL) /*!< Position of BASE field. */
#define RADIO_DFEPACKET_PTR_BASE_Msk (0x1UL << RADIO_DFEPACKET_PTR_BASE_Pos) /*!< Bit mask of BASE field. */

/* Bits 15..0 : Data pointer */
#define RADIO_DFEPACKET_PTR_OFFSET_Pos (0UL) /*!< Position of OFFSET field. */
#define RADIO_DFEPACKET_PTR_OFFSET_Msk (0xFFFFUL << RADIO_DFEPACKET_PTR_OFFSET_Pos) /*!< Bit mask of OFFSET field. */

/* Register: RADIO_DFEPACKET_MAXCNT */
/* Description: Maximum number of buffer words to transfer */

/* Bits 13..0 : Maximum number of buffer words to transfer */
#define RADIO_DFEPACKET_MAXCNT_MAXCNT_Pos (0UL) /*!< Position of MAXCNT field. */
#define RADIO_DFEPACKET_MAXCNT_MAXCNT_Msk (0x3FFFUL << RADIO_DFEPACKET_MAXCNT_MAXCNT_Pos) /*!< Bit mask of MAXCNT field. */

/* Register: RADIO_DFEPACKET_AMOUNT */
/* Description: Number of samples transferred in the last transaction */

/* Bits 13..0 : Number of samples transferred in the last transaction */
#define RADIO_DFEPACKET_AMOUNT_AMOUNT_Pos (0UL) /*!< Position of AMOUNT field. */
#define RADIO_DFEPACKET_AMOUNT_AMOUNT_Msk (0x3FFFUL << RADIO_DFEPACKET_AMOUNT_AMOUNT_Pos) /*!< Bit mask of AMOUNT field. */

/* Register: RADIO_DFEPACKET_ENABLE */
/* Description: Unspecified */

/* Bit 0 :   */
#define RADIO_DFEPACKET_ENABLE_ENABLE_Pos (0UL) /*!< Position of ENABLE field. */
#define RADIO_DFEPACKET_ENABLE_ENABLE_Msk (0x1UL << RADIO_DFEPACKET_ENABLE_ENABLE_Pos) /*!< Bit mask of ENABLE field. */
#define RADIO_DFEPACKET_ENABLE_ENABLE_Enabled (0x0UL) /*!< Enable */
#define RADIO_DFEPACKET_ENABLE_ENABLE_Disabled (0x1UL) /*!< Disable */

/* Register: RADIO_DFEDMASTART */
/* Description: Manually start DmaChannelPeripheral for DFE */

/* Bit 0 : Manually start DmaChannelPeripheral for DFE */
#define RADIO_DFEDMASTART_DFEDMASTART_Pos (0UL) /*!< Position of DFEDMASTART field. */
#define RADIO_DFEDMASTART_DFEDMASTART_Msk (0x1UL << RADIO_DFEDMASTART_DFEDMASTART_Pos) /*!< Bit mask of DFEDMASTART field. */

/* Register: RADIO_DFEDMASTOP */
/* Description: Force stop DmaChannelPeripheral for DFE */

/* Bit 0 : Force stop DmaChannelPeripheral for DFE */
#define RADIO_DFEDMASTOP_DFEDMASTOP_Pos (0UL) /*!< Position of DFEDMASTOP field. */
#define RADIO_DFEDMASTOP_DFEDMASTOP_Msk (0x1UL << RADIO_DFEDMASTOP_DFEDMASTOP_Pos) /*!< Bit mask of DFEDMASTOP field. */

/* Register: RADIO_CNTPSTART */
/* Description: Start packet counter */

/* Bit 0 :   */
#define RADIO_CNTPSTART_TRIG_Pos (0UL) /*!< Position of TRIG field. */
#define RADIO_CNTPSTART_TRIG_Msk (0x1UL << RADIO_CNTPSTART_TRIG_Pos) /*!< Bit mask of TRIG field. */

/* Register: RADIO_CNTPSTOP */
/* Description: Stop packet counter */

/* Bit 0 :   */
#define RADIO_CNTPSTOP_TRIG_Pos (0UL) /*!< Position of TRIG field. */
#define RADIO_CNTPSTOP_TRIG_Msk (0x1UL << RADIO_CNTPSTOP_TRIG_Pos) /*!< Bit mask of TRIG field. */

/* Register: RADIO_CNTPCLEAR */
/* Description: Clear packet counter */

/* Bit 0 :   */
#define RADIO_CNTPCLEAR_TRIG_Pos (0UL) /*!< Position of TRIG field. */
#define RADIO_CNTPCLEAR_TRIG_Msk (0x1UL << RADIO_CNTPCLEAR_TRIG_Pos) /*!< Bit mask of TRIG field. */

/* Register: RADIO_CRCSTATUS */
/* Description: CRC status */

/* Bit 0 : CRC status of packet received */
#define RADIO_CRCSTATUS_CRCSTATUS_Pos (0UL) /*!< Position of CRCSTATUS field. */
#define RADIO_CRCSTATUS_CRCSTATUS_Msk (0x1UL << RADIO_CRCSTATUS_CRCSTATUS_Pos) /*!< Bit mask of CRCSTATUS field. */
#define RADIO_CRCSTATUS_CRCSTATUS_CRCError (0x0UL) /*!< Packet received with CRC error */
#define RADIO_CRCSTATUS_CRCSTATUS_CRCOk (0x1UL) /*!< Packet received with CRC ok */

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

/* Register: RADIO_PDUSTAT */
/* Description: Payload status */

/* Bits 2..1 : Status on what rate packet is received with in Long Range */
#define RADIO_PDUSTAT_CISTAT_Pos (1UL) /*!< Position of CISTAT field. */
#define RADIO_PDUSTAT_CISTAT_Msk (0x3UL << RADIO_PDUSTAT_CISTAT_Pos) /*!< Bit mask of CISTAT field. */
#define RADIO_PDUSTAT_CISTAT_LR125kbit (0x0UL) /*!< Frame is received at 125 kbps */
#define RADIO_PDUSTAT_CISTAT_LR500kbit (0x1UL) /*!< Frame is received at 500 kbps */

/* Bit 0 : Status on payload length vs. PCNF1.MAXLEN */
#define RADIO_PDUSTAT_PDUSTAT_Pos (0UL) /*!< Position of PDUSTAT field. */
#define RADIO_PDUSTAT_PDUSTAT_Msk (0x1UL << RADIO_PDUSTAT_PDUSTAT_Pos) /*!< Bit mask of PDUSTAT field. */
#define RADIO_PDUSTAT_PDUSTAT_LessThan (0x0UL) /*!< Payload less than PCNF1.MAXLEN */
#define RADIO_PDUSTAT_PDUSTAT_GreaterThan (0x1UL) /*!< Payload greater than PCNF1.MAXLEN */

/* Register: RADIO_PCNF0 */
/* Description: Packet configuration register 0 */

/* Bits 30..29 : Length of TERM field in Long Range operation */
#define RADIO_PCNF0_TERMLEN_Pos (29UL) /*!< Position of TERMLEN field. */
#define RADIO_PCNF0_TERMLEN_Msk (0x3UL << RADIO_PCNF0_TERMLEN_Pos) /*!< Bit mask of TERMLEN field. */

/* Bit 28 : Preamble pattern */
#define RADIO_PCNF0_PREAMPTRN_Pos (28UL) /*!< Position of PREAMPTRN field. */
#define RADIO_PCNF0_PREAMPTRN_Msk (0x1UL << RADIO_PCNF0_PREAMPTRN_Pos) /*!< Bit mask of PREAMPTRN field. */

/* Bit 26 : Indicates if LENGTH field contains CRC or not */
#define RADIO_PCNF0_CRCINC_Pos (26UL) /*!< Position of CRCINC field. */
#define RADIO_PCNF0_CRCINC_Msk (0x1UL << RADIO_PCNF0_CRCINC_Pos) /*!< Bit mask of CRCINC field. */
#define RADIO_PCNF0_CRCINC_Exclude (0x0UL) /*!< LENGTH does not contain CRC */
#define RADIO_PCNF0_CRCINC_Include (0x1UL) /*!< LENGTH includes CRC */

/* Bits 25..24 : Length of preamble on air. Decision point: TASKS_START task */
#define RADIO_PCNF0_PLEN_Pos (24UL) /*!< Position of PLEN field. */
#define RADIO_PCNF0_PLEN_Msk (0x3UL << RADIO_PCNF0_PLEN_Pos) /*!< Bit mask of PLEN field. */
#define RADIO_PCNF0_PLEN_8bit (0x0UL) /*!< 8-bit preamble */
#define RADIO_PCNF0_PLEN_16bit (0x1UL) /*!< 16-bit preamble */
#define RADIO_PCNF0_PLEN_32bitZero (0x2UL) /*!< 32-bit zero preamble - used for IEEE 802.15.4 */
#define RADIO_PCNF0_PLEN_LongRange (0x3UL) /*!< Preamble - used for BLE long range */

/* Bits 23..22 : Length of code indicator - long range */
#define RADIO_PCNF0_CILEN_Pos (22UL) /*!< Position of CILEN field. */
#define RADIO_PCNF0_CILEN_Msk (0x3UL << RADIO_PCNF0_CILEN_Pos) /*!< Bit mask of CILEN field. */

/* Bits 21..20 : Include or exclude S1 field in RAM */
#define RADIO_PCNF0_S1INCL_Pos (20UL) /*!< Position of S1INCL field. */
#define RADIO_PCNF0_S1INCL_Msk (0x3UL << RADIO_PCNF0_S1INCL_Pos) /*!< Bit mask of S1INCL field. */
#define RADIO_PCNF0_S1INCL_Automatic (0x0UL) /*!< Include S1 field in RAM only if S1LEN &gt; 0 */
#define RADIO_PCNF0_S1INCL_Include (0x1UL) /*!< Always include S1 field in RAM independent of S1LEN */

/* Bits 19..16 : Length on air of S1 field in number of bits. */
#define RADIO_PCNF0_S1LEN_Pos (16UL) /*!< Position of S1LEN field. */
#define RADIO_PCNF0_S1LEN_Msk (0xFUL << RADIO_PCNF0_S1LEN_Pos) /*!< Bit mask of S1LEN field. */

/* Bits 13..12 : Include or exclude S0 field in RAM */
#define RADIO_PCNF0_S0INCL_Pos (12UL) /*!< Position of S0INCL field. */
#define RADIO_PCNF0_S0INCL_Msk (0x3UL << RADIO_PCNF0_S0INCL_Pos) /*!< Bit mask of S0INCL field. */
#define RADIO_PCNF0_S0INCL_Automatic (0x0UL) /*!< Include S0 field only if S0LEN &gt; 0 */

/* Bit 8 : Length on air of S0 field in number of bytes. */
#define RADIO_PCNF0_S0LEN_Pos (8UL) /*!< Position of S0LEN field. */
#define RADIO_PCNF0_S0LEN_Msk (0x1UL << RADIO_PCNF0_S0LEN_Pos) /*!< Bit mask of S0LEN field. */

/* Bits 5..4 : Include or exclude LENGTH field in RAM */
#define RADIO_PCNF0_LENGTHINCL_Pos (4UL) /*!< Position of LENGTHINCL field. */
#define RADIO_PCNF0_LENGTHINCL_Msk (0x3UL << RADIO_PCNF0_LENGTHINCL_Pos) /*!< Bit mask of LENGTHINCL field. */
#define RADIO_PCNF0_LENGTHINCL_Automatic (0x0UL) /*!< Include LENGTH field in RAM only if LFLEN &gt; 0 */

/* Bits 3..0 : Length on air of LENGTH field in number of bits. */
#define RADIO_PCNF0_LFLEN_Pos (0UL) /*!< Position of LFLEN field. */
#define RADIO_PCNF0_LFLEN_Msk (0xFUL << RADIO_PCNF0_LFLEN_Pos) /*!< Bit mask of LFLEN field. */

/* Register: RADIO_PCNF0SEC */
/* Description: Packet configuration register 0 in concurrent receive mode in BLE LR */

/* Bits 30..29 : Length of TERM field in Long Range operation */
#define RADIO_PCNF0SEC_TERMLEN_Pos (29UL) /*!< Position of TERMLEN field. */
#define RADIO_PCNF0SEC_TERMLEN_Msk (0x3UL << RADIO_PCNF0SEC_TERMLEN_Pos) /*!< Bit mask of TERMLEN field. */

/* Bit 28 :   */
#define RADIO_PCNF0SEC_PPATTERN_Pos (28UL) /*!< Position of PPATTERN field. */
#define RADIO_PCNF0SEC_PPATTERN_Msk (0x1UL << RADIO_PCNF0SEC_PPATTERN_Pos) /*!< Bit mask of PPATTERN field. */

/* Bit 26 : Indicates if LENGTH field contains CRC or not */
#define RADIO_PCNF0SEC_CRCINC_Pos (26UL) /*!< Position of CRCINC field. */
#define RADIO_PCNF0SEC_CRCINC_Msk (0x1UL << RADIO_PCNF0SEC_CRCINC_Pos) /*!< Bit mask of CRCINC field. */
#define RADIO_PCNF0SEC_CRCINC_Exclude (0x0UL) /*!< LENGTH does not contain CRC */
#define RADIO_PCNF0SEC_CRCINC_Include (0x1UL) /*!< LENGTH includes CRC */

/* Bits 25..24 : Length of preamble on air. Decision point: TASKS_START task */
#define RADIO_PCNF0SEC_PLEN_Pos (24UL) /*!< Position of PLEN field. */
#define RADIO_PCNF0SEC_PLEN_Msk (0x3UL << RADIO_PCNF0SEC_PLEN_Pos) /*!< Bit mask of PLEN field. */
#define RADIO_PCNF0SEC_PLEN_8bit (0x0UL) /*!< 8-bit preamble */
#define RADIO_PCNF0SEC_PLEN_16bit (0x1UL) /*!< 16-bit preamble */
#define RADIO_PCNF0SEC_PLEN_32bitZero (0x2UL) /*!< 32-bit zero preamble - used for IEEE 802.15.4 */
#define RADIO_PCNF0SEC_PLEN_LongRange (0x3UL) /*!< Preamble - used for BLE long range */

/* Bits 23..22 : Length of code indicator - long range */
#define RADIO_PCNF0SEC_CILEN_Pos (22UL) /*!< Position of CILEN field. */
#define RADIO_PCNF0SEC_CILEN_Msk (0x3UL << RADIO_PCNF0SEC_CILEN_Pos) /*!< Bit mask of CILEN field. */

/* Bits 21..20 : Include or exclude S1 field in RAM */
#define RADIO_PCNF0SEC_S1INCL_Pos (20UL) /*!< Position of S1INCL field. */
#define RADIO_PCNF0SEC_S1INCL_Msk (0x3UL << RADIO_PCNF0SEC_S1INCL_Pos) /*!< Bit mask of S1INCL field. */
#define RADIO_PCNF0SEC_S1INCL_Automatic (0x0UL) /*!< Include S1 field in RAM only if S1LEN &gt; 0 */
#define RADIO_PCNF0SEC_S1INCL_Include (0x1UL) /*!< Always include S1 field in RAM independent of S1LEN */

/* Bits 19..16 : Length on air of S1 field in number of bits. */
#define RADIO_PCNF0SEC_S1LEN_Pos (16UL) /*!< Position of S1LEN field. */
#define RADIO_PCNF0SEC_S1LEN_Msk (0xFUL << RADIO_PCNF0SEC_S1LEN_Pos) /*!< Bit mask of S1LEN field. */

/* Bit 8 : Length on air of S0 field in number of bytes. */
#define RADIO_PCNF0SEC_S0LEN_Pos (8UL) /*!< Position of S0LEN field. */
#define RADIO_PCNF0SEC_S0LEN_Msk (0x1UL << RADIO_PCNF0SEC_S0LEN_Pos) /*!< Bit mask of S0LEN field. */

/* Bits 3..0 : Length on air of LENGTH field in number of bits. */
#define RADIO_PCNF0SEC_LFLEN_Pos (0UL) /*!< Position of LFLEN field. */
#define RADIO_PCNF0SEC_LFLEN_Msk (0xFUL << RADIO_PCNF0SEC_LFLEN_Pos) /*!< Bit mask of LFLEN field. */

/* Register: RADIO_PCNF1 */
/* Description: Packet configuration register 1 */

/* Bit 31 : Used to bypass PREAMBLE, ADDRESS, S0, LENGTH, S1 field and go straight to PAYLOAD state */
#define RADIO_PCNF1_TXFROMRAM_Pos (31UL) /*!< Position of TXFROMRAM field. */
#define RADIO_PCNF1_TXFROMRAM_Msk (0x1UL << RADIO_PCNF1_TXFROMRAM_Pos) /*!< Bit mask of TXFROMRAM field. */
#define RADIO_PCNF1_TXFROMRAM_Disabled (0x0UL) /*!< Disable */
#define RADIO_PCNF1_TXFROMRAM_Bypass (0x1UL) /*!< Bypass */

/* Bit 25 : Enable or disable packet whitening */
#define RADIO_PCNF1_WHITEEN_Pos (25UL) /*!< Position of WHITEEN field. */
#define RADIO_PCNF1_WHITEEN_Msk (0x1UL << RADIO_PCNF1_WHITEEN_Pos) /*!< Bit mask of WHITEEN field. */
#define RADIO_PCNF1_WHITEEN_Disabled (0x0UL) /*!< Disable */
#define RADIO_PCNF1_WHITEEN_Enabled (0x1UL) /*!< Enable */

/* Bit 24 : On-air endianness of packet, this applies to the S0, LENGTH, S1, and the PAYLOAD fields. */
#define RADIO_PCNF1_ENDIAN_Pos (24UL) /*!< Position of ENDIAN field. */
#define RADIO_PCNF1_ENDIAN_Msk (0x1UL << RADIO_PCNF1_ENDIAN_Pos) /*!< Bit mask of ENDIAN field. */
#define RADIO_PCNF1_ENDIAN_Little (0x0UL) /*!< Least significant bit on air first */
#define RADIO_PCNF1_ENDIAN_Big (0x1UL) /*!< Most significant bit on air first */

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

/* Bits 31..24 : Address prefix 3 */
#define RADIO_PREFIX0_AP3_Pos (24UL) /*!< Position of AP3 field. */
#define RADIO_PREFIX0_AP3_Msk (0xFFUL << RADIO_PREFIX0_AP3_Pos) /*!< Bit mask of AP3 field. */

/* Bits 23..16 : Address prefix 2 */
#define RADIO_PREFIX0_AP2_Pos (16UL) /*!< Position of AP2 field. */
#define RADIO_PREFIX0_AP2_Msk (0xFFUL << RADIO_PREFIX0_AP2_Pos) /*!< Bit mask of AP2 field. */

/* Bits 15..8 : Address prefix 1 */
#define RADIO_PREFIX0_AP1_Pos (8UL) /*!< Position of AP1 field. */
#define RADIO_PREFIX0_AP1_Msk (0xFFUL << RADIO_PREFIX0_AP1_Pos) /*!< Bit mask of AP1 field. */

/* Bits 7..0 : Address prefix 0 */
#define RADIO_PREFIX0_AP0_Pos (0UL) /*!< Position of AP0 field. */
#define RADIO_PREFIX0_AP0_Msk (0xFFUL << RADIO_PREFIX0_AP0_Pos) /*!< Bit mask of AP0 field. */

/* Register: RADIO_PREFIX1 */
/* Description: Prefixes bytes for logical addresses 4-7 */

/* Bits 31..24 : Address prefix 7 */
#define RADIO_PREFIX1_AP7_Pos (24UL) /*!< Position of AP7 field. */
#define RADIO_PREFIX1_AP7_Msk (0xFFUL << RADIO_PREFIX1_AP7_Pos) /*!< Bit mask of AP7 field. */

/* Bits 23..16 : Address prefix 6 */
#define RADIO_PREFIX1_AP6_Pos (16UL) /*!< Position of AP6 field. */
#define RADIO_PREFIX1_AP6_Msk (0xFFUL << RADIO_PREFIX1_AP6_Pos) /*!< Bit mask of AP6 field. */

/* Bits 15..8 : Address prefix 5 */
#define RADIO_PREFIX1_AP5_Pos (8UL) /*!< Position of AP5 field. */
#define RADIO_PREFIX1_AP5_Msk (0xFFUL << RADIO_PREFIX1_AP5_Pos) /*!< Bit mask of AP5 field. */

/* Bits 7..0 : Address prefix 4 */
#define RADIO_PREFIX1_AP4_Pos (0UL) /*!< Position of AP4 field. */
#define RADIO_PREFIX1_AP4_Msk (0xFFUL << RADIO_PREFIX1_AP4_Pos) /*!< Bit mask of AP4 field. */

/* Register: RADIO_TXADDRESS */
/* Description: Transmit address select */

/* Bits 2..0 : Transmit address select */
#define RADIO_TXADDRESS_TXADDRESS_Pos (0UL) /*!< Position of TXADDRESS field. */
#define RADIO_TXADDRESS_TXADDRESS_Msk (0x7UL << RADIO_TXADDRESS_TXADDRESS_Pos) /*!< Bit mask of TXADDRESS field. */

/* Register: RADIO_RXADDRESSES */
/* Description: Receive address select */

/* Bit 7 : Enable or disable reception on logical address 7 */
#define RADIO_RXADDRESSES_ADDR7_Pos (7UL) /*!< Position of ADDR7 field. */
#define RADIO_RXADDRESSES_ADDR7_Msk (0x1UL << RADIO_RXADDRESSES_ADDR7_Pos) /*!< Bit mask of ADDR7 field. */
#define RADIO_RXADDRESSES_ADDR7_Disabled (0x0UL) /*!< Disable */
#define RADIO_RXADDRESSES_ADDR7_Enabled (0x1UL) /*!< Enable */

/* Bit 6 : Enable or disable reception on logical address 6 */
#define RADIO_RXADDRESSES_ADDR6_Pos (6UL) /*!< Position of ADDR6 field. */
#define RADIO_RXADDRESSES_ADDR6_Msk (0x1UL << RADIO_RXADDRESSES_ADDR6_Pos) /*!< Bit mask of ADDR6 field. */
#define RADIO_RXADDRESSES_ADDR6_Disabled (0x0UL) /*!< Disable */
#define RADIO_RXADDRESSES_ADDR6_Enabled (0x1UL) /*!< Enable */

/* Bit 5 : Enable or disable reception on logical address 5 */
#define RADIO_RXADDRESSES_ADDR5_Pos (5UL) /*!< Position of ADDR5 field. */
#define RADIO_RXADDRESSES_ADDR5_Msk (0x1UL << RADIO_RXADDRESSES_ADDR5_Pos) /*!< Bit mask of ADDR5 field. */
#define RADIO_RXADDRESSES_ADDR5_Disabled (0x0UL) /*!< Disable */
#define RADIO_RXADDRESSES_ADDR5_Enabled (0x1UL) /*!< Enable */

/* Bit 4 : Enable or disable reception on logical address 4 */
#define RADIO_RXADDRESSES_ADDR4_Pos (4UL) /*!< Position of ADDR4 field. */
#define RADIO_RXADDRESSES_ADDR4_Msk (0x1UL << RADIO_RXADDRESSES_ADDR4_Pos) /*!< Bit mask of ADDR4 field. */
#define RADIO_RXADDRESSES_ADDR4_Disabled (0x0UL) /*!< Disable */
#define RADIO_RXADDRESSES_ADDR4_Enabled (0x1UL) /*!< Enable */

/* Bit 3 : Enable or disable reception on logical address 3 */
#define RADIO_RXADDRESSES_ADDR3_Pos (3UL) /*!< Position of ADDR3 field. */
#define RADIO_RXADDRESSES_ADDR3_Msk (0x1UL << RADIO_RXADDRESSES_ADDR3_Pos) /*!< Bit mask of ADDR3 field. */
#define RADIO_RXADDRESSES_ADDR3_Disabled (0x0UL) /*!< Disable */
#define RADIO_RXADDRESSES_ADDR3_Enabled (0x1UL) /*!< Enable */

/* Bit 2 : Enable or disable reception on logical address 2 */
#define RADIO_RXADDRESSES_ADDR2_Pos (2UL) /*!< Position of ADDR2 field. */
#define RADIO_RXADDRESSES_ADDR2_Msk (0x1UL << RADIO_RXADDRESSES_ADDR2_Pos) /*!< Bit mask of ADDR2 field. */
#define RADIO_RXADDRESSES_ADDR2_Disabled (0x0UL) /*!< Disable */
#define RADIO_RXADDRESSES_ADDR2_Enabled (0x1UL) /*!< Enable */

/* Bit 1 : Enable or disable reception on logical address 1 */
#define RADIO_RXADDRESSES_ADDR1_Pos (1UL) /*!< Position of ADDR1 field. */
#define RADIO_RXADDRESSES_ADDR1_Msk (0x1UL << RADIO_RXADDRESSES_ADDR1_Pos) /*!< Bit mask of ADDR1 field. */
#define RADIO_RXADDRESSES_ADDR1_Disabled (0x0UL) /*!< Disable */
#define RADIO_RXADDRESSES_ADDR1_Enabled (0x1UL) /*!< Enable */

/* Bit 0 : Enable or disable reception on logical address 0 */
#define RADIO_RXADDRESSES_ADDR0_Pos (0UL) /*!< Position of ADDR0 field. */
#define RADIO_RXADDRESSES_ADDR0_Msk (0x1UL << RADIO_RXADDRESSES_ADDR0_Pos) /*!< Bit mask of ADDR0 field. */
#define RADIO_RXADDRESSES_ADDR0_Disabled (0x0UL) /*!< Disable */
#define RADIO_RXADDRESSES_ADDR0_Enabled (0x1UL) /*!< Enable */

/* Register: RADIO_CRCCNF */
/* Description: CRC configuration */

/* Bits 9..8 : Include or exclude packet address field out of CRC calculation. */
#define RADIO_CRCCNF_SKIPADDR_Pos (8UL) /*!< Position of SKIPADDR field. */
#define RADIO_CRCCNF_SKIPADDR_Msk (0x3UL << RADIO_CRCCNF_SKIPADDR_Pos) /*!< Bit mask of SKIPADDR field. */
#define RADIO_CRCCNF_SKIPADDR_Include (0x0UL) /*!< CRC calculation includes address field */
#define RADIO_CRCCNF_SKIPADDR_Skip (0x1UL) /*!< CRC calculation does not include address field. The CRC calculation will start at the first byte after the address. */
#define RADIO_CRCCNF_SKIPADDR_Ieee802154 (0x2UL) /*!< CRC calculation as per 802.15.4 standard. Starting at first byte after length field. */

/* Bits 1..0 : CRC length in number of bytes. */
#define RADIO_CRCCNF_LEN_Pos (0UL) /*!< Position of LEN field. */
#define RADIO_CRCCNF_LEN_Msk (0x3UL << RADIO_CRCCNF_LEN_Pos) /*!< Bit mask of LEN field. */
#define RADIO_CRCCNF_LEN_Disabled (0x0UL) /*!< CRC length is zero and CRC calculation is disabled */
#define RADIO_CRCCNF_LEN_One (0x1UL) /*!< CRC length is one byte and CRC calculation is enabled */
#define RADIO_CRCCNF_LEN_Two (0x2UL) /*!< CRC length is two bytes and CRC calculation is enabled */
#define RADIO_CRCCNF_LEN_Three (0x3UL) /*!< CRC length is three bytes and CRC calculation is enabled */

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

/* Register: RADIO_DAB */
/* Description: Description collection: Device address base segment n */

/* Bits 31..0 : Device address base segment n */
#define RADIO_DAB_DAB_Pos (0UL) /*!< Position of DAB field. */
#define RADIO_DAB_DAB_Msk (0xFFFFFFFFUL << RADIO_DAB_DAB_Pos) /*!< Bit mask of DAB field. */

/* Register: RADIO_DAP */
/* Description: Description collection: Device address prefix n */

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
#define RADIO_DACNF_ENA7_Disabled (0x0UL) /*!< Disabled */
#define RADIO_DACNF_ENA7_Enabled (0x1UL) /*!< Enabled */

/* Bit 6 : Enable or disable device address matching using device address 6 */
#define RADIO_DACNF_ENA6_Pos (6UL) /*!< Position of ENA6 field. */
#define RADIO_DACNF_ENA6_Msk (0x1UL << RADIO_DACNF_ENA6_Pos) /*!< Bit mask of ENA6 field. */
#define RADIO_DACNF_ENA6_Disabled (0x0UL) /*!< Disabled */
#define RADIO_DACNF_ENA6_Enabled (0x1UL) /*!< Enabled */

/* Bit 5 : Enable or disable device address matching using device address 5 */
#define RADIO_DACNF_ENA5_Pos (5UL) /*!< Position of ENA5 field. */
#define RADIO_DACNF_ENA5_Msk (0x1UL << RADIO_DACNF_ENA5_Pos) /*!< Bit mask of ENA5 field. */
#define RADIO_DACNF_ENA5_Disabled (0x0UL) /*!< Disabled */
#define RADIO_DACNF_ENA5_Enabled (0x1UL) /*!< Enabled */

/* Bit 4 : Enable or disable device address matching using device address 4 */
#define RADIO_DACNF_ENA4_Pos (4UL) /*!< Position of ENA4 field. */
#define RADIO_DACNF_ENA4_Msk (0x1UL << RADIO_DACNF_ENA4_Pos) /*!< Bit mask of ENA4 field. */
#define RADIO_DACNF_ENA4_Disabled (0x0UL) /*!< Disabled */
#define RADIO_DACNF_ENA4_Enabled (0x1UL) /*!< Enabled */

/* Bit 3 : Enable or disable device address matching using device address 3 */
#define RADIO_DACNF_ENA3_Pos (3UL) /*!< Position of ENA3 field. */
#define RADIO_DACNF_ENA3_Msk (0x1UL << RADIO_DACNF_ENA3_Pos) /*!< Bit mask of ENA3 field. */
#define RADIO_DACNF_ENA3_Disabled (0x0UL) /*!< Disabled */
#define RADIO_DACNF_ENA3_Enabled (0x1UL) /*!< Enabled */

/* Bit 2 : Enable or disable device address matching using device address 2 */
#define RADIO_DACNF_ENA2_Pos (2UL) /*!< Position of ENA2 field. */
#define RADIO_DACNF_ENA2_Msk (0x1UL << RADIO_DACNF_ENA2_Pos) /*!< Bit mask of ENA2 field. */
#define RADIO_DACNF_ENA2_Disabled (0x0UL) /*!< Disabled */
#define RADIO_DACNF_ENA2_Enabled (0x1UL) /*!< Enabled */

/* Bit 1 : Enable or disable device address matching using device address 1 */
#define RADIO_DACNF_ENA1_Pos (1UL) /*!< Position of ENA1 field. */
#define RADIO_DACNF_ENA1_Msk (0x1UL << RADIO_DACNF_ENA1_Pos) /*!< Bit mask of ENA1 field. */
#define RADIO_DACNF_ENA1_Disabled (0x0UL) /*!< Disabled */
#define RADIO_DACNF_ENA1_Enabled (0x1UL) /*!< Enabled */

/* Bit 0 : Enable or disable device address matching using device address 0 */
#define RADIO_DACNF_ENA0_Pos (0UL) /*!< Position of ENA0 field. */
#define RADIO_DACNF_ENA0_Msk (0x1UL << RADIO_DACNF_ENA0_Pos) /*!< Bit mask of ENA0 field. */
#define RADIO_DACNF_ENA0_Disabled (0x0UL) /*!< Disabled */
#define RADIO_DACNF_ENA0_Enabled (0x1UL) /*!< Enabled */

/* Register: RADIO_BCC */
/* Description: Bit counter compare */

/* Bits 31..0 : Bit counter compare */
#define RADIO_BCC_BCC_Pos (0UL) /*!< Position of BCC field. */
#define RADIO_BCC_BCC_Msk (0xFFFFFFFFUL << RADIO_BCC_BCC_Pos) /*!< Bit mask of BCC field. */

/* Register: RADIO_AACHKOVERRIDE */
/* Description: Address Check Override */

/* Bits 26..24 : Number of preamble symbols before SFD to match, by default 2 symbols. */
#define RADIO_AACHKOVERRIDE_SYMSBEFORESFD_Pos (24UL) /*!< Position of SYMSBEFORESFD field. */
#define RADIO_AACHKOVERRIDE_SYMSBEFORESFD_Msk (0x7UL << RADIO_AACHKOVERRIDE_SYMSBEFORESFD_Pos) /*!< Bit mask of SYMSBEFORESFD field. */

/* Bit 22 : Enable every 4 bits SFD match for IEEE 802.15.4 */
#define RADIO_AACHKOVERRIDE_SFDMATCHENABLE_Pos (22UL) /*!< Position of SFDMATCHENABLE field. */
#define RADIO_AACHKOVERRIDE_SFDMATCHENABLE_Msk (0x1UL << RADIO_AACHKOVERRIDE_SFDMATCHENABLE_Pos) /*!< Bit mask of SFDMATCHENABLE field. */
#define RADIO_AACHKOVERRIDE_SFDMATCHENABLE_Disable (0x0UL) /*!< Disable */
#define RADIO_AACHKOVERRIDE_SFDMATCHENABLE_Enable (0x1UL) /*!< Enable */

/* Bit 21 : Enable timing accurate address match window in demodulator */
#define RADIO_AACHKOVERRIDE_PERFECTADDRWINDOW_Pos (21UL) /*!< Position of PERFECTADDRWINDOW field. */
#define RADIO_AACHKOVERRIDE_PERFECTADDRWINDOW_Msk (0x1UL << RADIO_AACHKOVERRIDE_PERFECTADDRWINDOW_Pos) /*!< Bit mask of PERFECTADDRWINDOW field. */
#define RADIO_AACHKOVERRIDE_PERFECTADDRWINDOW_DISABLE (0x0UL) /*!< The address window has some margin */
#define RADIO_AACHKOVERRIDE_PERFECTADDRWINDOW_ENABLE (0x1UL) /*!< The address window spans only one bit */

/* Bit 20 : Enable ignore std AA checker before shift register filled */
#define RADIO_AACHKOVERRIDE_ALLOWADDRMATCHEARLY_Pos (20UL) /*!< Position of ALLOWADDRMATCHEARLY field. */
#define RADIO_AACHKOVERRIDE_ALLOWADDRMATCHEARLY_Msk (0x1UL << RADIO_AACHKOVERRIDE_ALLOWADDRMATCHEARLY_Pos) /*!< Bit mask of ALLOWADDRMATCHEARLY field. */
#define RADIO_AACHKOVERRIDE_ALLOWADDRMATCHEARLY_ENABLE (0x0UL) /*!< Enable */
#define RADIO_AACHKOVERRIDE_ALLOWADDRMATCHEARLY_DISABLE (0x1UL) /*!< Disable */

/* Bit 19 : Disable std AA checker */
#define RADIO_AACHKOVERRIDE_DISABLE_Pos (19UL) /*!< Position of DISABLE field. */
#define RADIO_AACHKOVERRIDE_DISABLE_Msk (0x1UL << RADIO_AACHKOVERRIDE_DISABLE_Pos) /*!< Bit mask of DISABLE field. */
#define RADIO_AACHKOVERRIDE_DISABLE_ENABLE (0x0UL) /*!< Enable std AA checker */
#define RADIO_AACHKOVERRIDE_DISABLE_DISABLE (0x1UL) /*!< Disable std AA checker */

/* Bit 18 : Bypass majority vote */
#define RADIO_AACHKOVERRIDE_BYPASS_Pos (18UL) /*!< Position of BYPASS field. */
#define RADIO_AACHKOVERRIDE_BYPASS_Msk (0x1UL << RADIO_AACHKOVERRIDE_BYPASS_Pos) /*!< Bit mask of BYPASS field. */
#define RADIO_AACHKOVERRIDE_BYPASS_PASS (0x0UL) /*!< Majority vote */
#define RADIO_AACHKOVERRIDE_BYPASS_BYPASS (0x1UL) /*!< Bypass through majority vote */

/* Bit 17 : Enable AA bit 15 check */
#define RADIO_AACHKOVERRIDE_ENABLE_Pos (17UL) /*!< Position of ENABLE field. */
#define RADIO_AACHKOVERRIDE_ENABLE_Msk (0x1UL << RADIO_AACHKOVERRIDE_ENABLE_Pos) /*!< Bit mask of ENABLE field. */
#define RADIO_AACHKOVERRIDE_ENABLE_AA16to31 (0x0UL) /*!< Enable AA16..31 */
#define RADIO_AACHKOVERRIDE_ENABLE_AA15to31 (0x1UL) /*!< Enable AA15..31 */

/* Bits 9..0 : Defines maximum number of PDU bits to compare between Hyper and Std demodulator */
#define RADIO_AACHKOVERRIDE_ENDCOUNTHYPSTD_Pos (0UL) /*!< Position of ENDCOUNTHYPSTD field. */
#define RADIO_AACHKOVERRIDE_ENDCOUNTHYPSTD_Msk (0x3FFUL << RADIO_AACHKOVERRIDE_ENDCOUNTHYPSTD_Pos) /*!< Bit mask of ENDCOUNTHYPSTD field. */

/* Register: RADIO_PACKETCNTR1 */
/* Description: Unspecified */

/* Bits 15..0 : Packet counter value */
#define RADIO_PACKETCNTR1_COUNTER_Pos (0UL) /*!< Position of COUNTER field. */
#define RADIO_PACKETCNTR1_COUNTER_Msk (0xFFFFUL << RADIO_PACKETCNTR1_COUNTER_Pos) /*!< Bit mask of COUNTER field. */

/* Register: RADIO_PACKETCNTR2 */
/* Description: Unspecified */

/* Bits 31..16 : Packet counter value (number of packets with addressmatch ok) */
#define RADIO_PACKETCNTR2_NORMAL_Pos (16UL) /*!< Position of NORMAL field. */
#define RADIO_PACKETCNTR2_NORMAL_Msk (0xFFFFUL << RADIO_PACKETCNTR2_NORMAL_Pos) /*!< Bit mask of NORMAL field. */

/* Bits 15..0 : Number of detected correlator syncs */
#define RADIO_PACKETCNTR2_HYPER_Pos (0UL) /*!< Position of HYPER field. */
#define RADIO_PACKETCNTR2_HYPER_Msk (0xFFFFUL << RADIO_PACKETCNTR2_HYPER_Pos) /*!< Bit mask of HYPER field. */

/* Register: RADIO_CTESTATUS */
/* Description: CTEInfo parsed from received packet */

/* Bits 7..6 : CTEType parsed from packet */
#define RADIO_CTESTATUS_CTETYPE_Pos (6UL) /*!< Position of CTETYPE field. */
#define RADIO_CTESTATUS_CTETYPE_Msk (0x3UL << RADIO_CTESTATUS_CTETYPE_Pos) /*!< Bit mask of CTETYPE field. */

/* Bit 5 : RFU parsed from packet */
#define RADIO_CTESTATUS_RFU_Pos (5UL) /*!< Position of RFU field. */
#define RADIO_CTESTATUS_RFU_Msk (0x1UL << RADIO_CTESTATUS_RFU_Pos) /*!< Bit mask of RFU field. */

/* Bits 4..0 : CTETime parsed from packet */
#define RADIO_CTESTATUS_CTETIME_Pos (0UL) /*!< Position of CTETIME field. */
#define RADIO_CTESTATUS_CTETIME_Msk (0x1FUL << RADIO_CTESTATUS_CTETIME_Pos) /*!< Bit mask of CTETIME field. */

/* Register: RADIO_HYPSTDCHECKSTAT */
/* Description: Address Check Override */

/* Bit 24 : Valid flag bit */
#define RADIO_HYPSTDCHECKSTAT_VALID_Pos (24UL) /*!< Position of VALID field. */
#define RADIO_HYPSTDCHECKSTAT_VALID_Msk (0x1UL << RADIO_HYPSTDCHECKSTAT_VALID_Pos) /*!< Bit mask of VALID field. */

/* Bits 23..21 : Time distance #bit clock cycles from AAmatchHyp. */
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

/* Bits 15..0 : Hyper AA15:0 and Std AA15:0 differs */
#define RADIO_HYPSTDAADIFFVEC_DIFF_Pos (0UL) /*!< Position of DIFF field. */
#define RADIO_HYPSTDAADIFFVEC_DIFF_Msk (0xFFFFUL << RADIO_HYPSTDAADIFFVEC_DIFF_Pos) /*!< Bit mask of DIFF field. */

/* Register: RADIO_ADDRWINSIZE */
/* Description: Address match safe window size (the number of bits after detect is asserted, before starting to look for address match). Only valid when OVERRIDE22.DISABLEADDRWINDOW is '0'. */

/* Bits 28..24 : Number of bits after detect to start search address/SFD in ESB mode */
#define RADIO_ADDRWINSIZE_ESB_Pos (24UL) /*!< Position of ESB field. */
#define RADIO_ADDRWINSIZE_ESB_Msk (0x1FUL << RADIO_ADDRWINSIZE_ESB_Pos) /*!< Bit mask of ESB field. */

/* Bits 20..16 : Number of bits after detect to start search address/SFD in BLE_LR_125k/BLE_LR_500k mode */
#define RADIO_ADDRWINSIZE_LR_Pos (16UL) /*!< Position of LR field. */
#define RADIO_ADDRWINSIZE_LR_Msk (0x1FUL << RADIO_ADDRWINSIZE_LR_Pos) /*!< Bit mask of LR field. */

/* Bits 12..8 : Number of bits after detect to start search address/SFD in BLE mode */
#define RADIO_ADDRWINSIZE_BLE_Pos (8UL) /*!< Position of BLE field. */
#define RADIO_ADDRWINSIZE_BLE_Msk (0x1FUL << RADIO_ADDRWINSIZE_BLE_Pos) /*!< Bit mask of BLE field. */

/* Bits 4..0 : Number of bits after detect to start search address/SFD in IEEE 802.15.4 mode */
#define RADIO_ADDRWINSIZE_IEEE802154_Pos (0UL) /*!< Position of IEEE802154 field. */
#define RADIO_ADDRWINSIZE_IEEE802154_Msk (0x1FUL << RADIO_ADDRWINSIZE_IEEE802154_Pos) /*!< Bit mask of IEEE802154 field. */

/* Register: RADIO_MHRMATCHCONF */
/* Description: Search pattern configuration */

/* Bits 31..0 : Search pattern configuration */
#define RADIO_MHRMATCHCONF_MHRMATCHCONF_Pos (0UL) /*!< Position of MHRMATCHCONF field. */
#define RADIO_MHRMATCHCONF_MHRMATCHCONF_Msk (0xFFFFFFFFUL << RADIO_MHRMATCHCONF_MHRMATCHCONF_Pos) /*!< Bit mask of MHRMATCHCONF field. */

/* Register: RADIO_MHRMATCHMASK */
/* Description: Pattern mask */

/* Bits 31..0 : Pattern mask */
#define RADIO_MHRMATCHMASK_MHRMATCHMASK_Pos (0UL) /*!< Position of MHRMATCHMASK field. */
#define RADIO_MHRMATCHMASK_MHRMATCHMASK_Msk (0xFFFFFFFFUL << RADIO_MHRMATCHMASK_MHRMATCHMASK_Pos) /*!< Bit mask of MHRMATCHMASK field. */

/* Register: RADIO_SFD */
/* Description: IEEE 802.15.4 start of frame delimiter */

/* Bits 7..0 : IEEE 802.15.4 start of frame delimiter */
#define RADIO_SFD_SFD_Pos (0UL) /*!< Position of SFD field. */
#define RADIO_SFD_SFD_Msk (0xFFUL << RADIO_SFD_SFD_Pos) /*!< Bit mask of SFD field. */

/* Register: RADIO_CTEINLINECONF */
/* Description: Configuration for CTE inline mode */

/* Bits 31..24 : S0 bit mask to set which bit to match */
#define RADIO_CTEINLINECONF_S0MASK_Pos (24UL) /*!< Position of S0MASK field. */
#define RADIO_CTEINLINECONF_S0MASK_Msk (0xFFUL << RADIO_CTEINLINECONF_S0MASK_Pos) /*!< Bit mask of S0MASK field. */

/* Bits 23..16 : S0 bit pattern to match */
#define RADIO_CTEINLINECONF_S0CONF_Pos (16UL) /*!< Position of S0CONF field. */
#define RADIO_CTEINLINECONF_S0CONF_Msk (0xFFUL << RADIO_CTEINLINECONF_S0CONF_Pos) /*!< Bit mask of S0CONF field. */

/* Bits 15..13 : Spacing between samples for the samples in the SWITCHING period when CTEINLINEMODE is set */
#define RADIO_CTEINLINECONF_CTEINLINERXMODE2US_Pos (13UL) /*!< Position of CTEINLINERXMODE2US field. */
#define RADIO_CTEINLINECONF_CTEINLINERXMODE2US_Msk (0x7UL << RADIO_CTEINLINECONF_CTEINLINERXMODE2US_Pos) /*!< Bit mask of CTEINLINERXMODE2US field. */
#define RADIO_CTEINLINECONF_CTEINLINERXMODE2US_8us (0x0UL) /*!< 8us */
#define RADIO_CTEINLINECONF_CTEINLINERXMODE2US_4us (0x1UL) /*!< 4us */
#define RADIO_CTEINLINECONF_CTEINLINERXMODE2US_2us (0x2UL) /*!< 2us */
#define RADIO_CTEINLINECONF_CTEINLINERXMODE2US_1us (0x3UL) /*!< 1us */
#define RADIO_CTEINLINECONF_CTEINLINERXMODE2US_500ns (0x4UL) /*!< 0.5us */
#define RADIO_CTEINLINECONF_CTEINLINERXMODE2US_250ns (0x5UL) /*!< 0.25us */
#define RADIO_CTEINLINECONF_CTEINLINERXMODE2US_125ns (0x6UL) /*!< 0.125us */

/* Bits 12..10 : Spacing between samples for the samples in the SWITCHING period when CTEINLINEMODE is set */
#define RADIO_CTEINLINECONF_CTEINLINERXMODE1US_Pos (10UL) /*!< Position of CTEINLINERXMODE1US field. */
#define RADIO_CTEINLINECONF_CTEINLINERXMODE1US_Msk (0x7UL << RADIO_CTEINLINECONF_CTEINLINERXMODE1US_Pos) /*!< Bit mask of CTEINLINERXMODE1US field. */
#define RADIO_CTEINLINECONF_CTEINLINERXMODE1US_8us (0x0UL) /*!< 8us */
#define RADIO_CTEINLINECONF_CTEINLINERXMODE1US_4us (0x1UL) /*!< 4us */
#define RADIO_CTEINLINECONF_CTEINLINERXMODE1US_2us (0x2UL) /*!< 2us */
#define RADIO_CTEINLINECONF_CTEINLINERXMODE1US_1us (0x3UL) /*!< 1us */
#define RADIO_CTEINLINECONF_CTEINLINERXMODE1US_500ns (0x4UL) /*!< 0.5us */
#define RADIO_CTEINLINECONF_CTEINLINERXMODE1US_250ns (0x5UL) /*!< 0.25us */
#define RADIO_CTEINLINECONF_CTEINLINERXMODE1US_125ns (0x6UL) /*!< 0.125us */

/* Bits 7..6 : Max range of CTETime */
#define RADIO_CTEINLINECONF_CTETIMEVALIDRANGE_Pos (6UL) /*!< Position of CTETIMEVALIDRANGE field. */
#define RADIO_CTEINLINECONF_CTETIMEVALIDRANGE_Msk (0x3UL << RADIO_CTEINLINECONF_CTETIMEVALIDRANGE_Pos) /*!< Bit mask of CTETIMEVALIDRANGE field. */
#define RADIO_CTEINLINECONF_CTETIMEVALIDRANGE_20 (0x0UL) /*!< 20 in 8us unit (default) Set to 20 if parsed CTETime is larger han 20 */
#define RADIO_CTEINLINECONF_CTETIMEVALIDRANGE_31 (0x1UL) /*!< 31 in 8us unit */
#define RADIO_CTEINLINECONF_CTETIMEVALIDRANGE_63 (0x2UL) /*!< 63 in 8us unit */

/* Bit 5 : CTE is continuously output after CRC and only stopped by triggering TASKS_STOP. This is typically used together with the DFEEND to STOP short. AoA/AoD procedure duration is still controlled by DFECTRL1.NUMBEROF8S / CTETIME */
#define RADIO_CTEINLINECONF_CTEFORCEON_Pos (5UL) /*!< Position of CTEFORCEON field. */
#define RADIO_CTEINLINECONF_CTEFORCEON_Msk (0x1UL << RADIO_CTEINLINECONF_CTEFORCEON_Pos) /*!< Bit mask of CTEFORCEON field. */
#define RADIO_CTEINLINECONF_CTEFORCEON_No (0x0UL) /*!< CTE duration is automatically determined by DFECTRL1.NUMBEROF8US / CTETIME (only correct for 1Mbps and 2Mbps modes) */
#define RADIO_CTEINLINECONF_CTEFORCEON_Yes (0x1UL) /*!< CTE is continuously transmitted after CRC until TASKS_STOP */

/* Bit 4 : Sampling/switching if CRC is not OK */
#define RADIO_CTEINLINECONF_CTEERRORHANDLING_Pos (4UL) /*!< Position of CTEERRORHANDLING field. */
#define RADIO_CTEINLINECONF_CTEERRORHANDLING_Msk (0x1UL << RADIO_CTEINLINECONF_CTEERRORHANDLING_Pos) /*!< Bit mask of CTEERRORHANDLING field. */
#define RADIO_CTEINLINECONF_CTEERRORHANDLING_No (0x0UL) /*!< No sampling and antenna switching when CRC is not OK */
#define RADIO_CTEINLINECONF_CTEERRORHANDLING_Yes (0x1UL) /*!< Sampling and antenna switching also when CRC is not OK */

/* Bit 3 : CTEInfo is S1 byte or not */
#define RADIO_CTEINLINECONF_CTEINFOINS1_Pos (3UL) /*!< Position of CTEINFOINS1 field. */
#define RADIO_CTEINLINECONF_CTEINFOINS1_Msk (0x1UL << RADIO_CTEINLINECONF_CTEINFOINS1_Pos) /*!< Bit mask of CTEINFOINS1 field. */
#define RADIO_CTEINLINECONF_CTEINFOINS1_NotInS1 (0x0UL) /*!< CTEInfo is NOT in S1 byte (advertising PDU) */
#define RADIO_CTEINLINECONF_CTEINFOINS1_InS1 (0x1UL) /*!< CTEInfo is in S1 byte (data PDU) */

/* Bit 0 : Enable parsing of CTEInfo from received packet in BLE modes */
#define RADIO_CTEINLINECONF_CTEINLINECTRLEN_Pos (0UL) /*!< Position of CTEINLINECTRLEN field. */
#define RADIO_CTEINLINECONF_CTEINLINECTRLEN_Msk (0x1UL << RADIO_CTEINLINECONF_CTEINLINECTRLEN_Pos) /*!< Bit mask of CTEINLINECTRLEN field. */
#define RADIO_CTEINLINECONF_CTEINLINECTRLEN_Disabled (0x0UL) /*!< Parsing of CTEInfo is disabled */
#define RADIO_CTEINLINECONF_CTEINLINECTRLEN_Enabled (0x1UL) /*!< Parsing of CTEInfo is enabled */

/* Register: RADIO_DMASTART */
/* Description: Unspecified */

/* Bit 0 :   */
#define RADIO_DMASTART_TRIG_Pos (0UL) /*!< Position of TRIG field. */
#define RADIO_DMASTART_TRIG_Msk (0x1UL << RADIO_DMASTART_TRIG_Pos) /*!< Bit mask of TRIG field. */

/* Register: RADIO_DMASTOP */
/* Description: Unspecified */

/* Bit 0 :   */
#define RADIO_DMASTOP_TRIG_Pos (0UL) /*!< Position of TRIG field. */
#define RADIO_DMASTOP_TRIG_Msk (0x1UL << RADIO_DMASTOP_TRIG_Pos) /*!< Bit mask of TRIG field. */

/* Register: RADIO_DMAENABLE */
/* Description: Unspecified */

/* Bit 0 :   */
#define RADIO_DMAENABLE_ENABLE_Pos (0UL) /*!< Position of ENABLE field. */
#define RADIO_DMAENABLE_ENABLE_Msk (0x1UL << RADIO_DMAENABLE_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Register: RADIO_PACKETPTR */
/* Description: Unspecified */

/* Bit 29 :   */
#define RADIO_PACKETPTR_BASE_Pos (29UL) /*!< Position of BASE field. */
#define RADIO_PACKETPTR_BASE_Msk (0x1UL << RADIO_PACKETPTR_BASE_Pos) /*!< Bit mask of BASE field. */

/* Bits 15..0 :   */
#define RADIO_PACKETPTR_OFFSET_Pos (0UL) /*!< Position of OFFSET field. */
#define RADIO_PACKETPTR_OFFSET_Msk (0xFFFFUL << RADIO_PACKETPTR_OFFSET_Pos) /*!< Bit mask of OFFSET field. */

/* Register: RADIO_DMAAMOUNT */
/* Description: Unspecified */

/* Bits 8..0 :   */
#define RADIO_DMAAMOUNT_AMOUNT_Pos (0UL) /*!< Position of AMOUNT field. */
#define RADIO_DMAAMOUNT_AMOUNT_Msk (0x1FFUL << RADIO_DMAAMOUNT_AMOUNT_Pos) /*!< Bit mask of AMOUNT field. */

/* Register: RADIO_DMAMAXCNT */
/* Description: Unspecified */

/* Bits 8..0 :   */
#define RADIO_DMAMAXCNT_MAXCNT_Pos (0UL) /*!< Position of MAXCNT field. */
#define RADIO_DMAMAXCNT_MAXCNT_Msk (0x1FFUL << RADIO_DMAMAXCNT_MAXCNT_Pos) /*!< Bit mask of MAXCNT field. */

/* Register: RADIO_PENALTYTRIGPCP4_ZERO */
/* Description: Unspecified */

/* Bit 0 :   */
#define RADIO_PENALTYTRIGPCP4_ZERO_TRIG_Pos (0UL) /*!< Position of TRIG field. */
#define RADIO_PENALTYTRIGPCP4_ZERO_TRIG_Msk (0x1UL << RADIO_PENALTYTRIGPCP4_ZERO_TRIG_Pos) /*!< Bit mask of TRIG field. */

/* Register: RADIO_PENALTYTRIGPCP4_FULL */
/* Description: Unspecified */

/* Bit 0 :   */
#define RADIO_PENALTYTRIGPCP4_FULL_TRIG_Pos (0UL) /*!< Position of TRIG field. */
#define RADIO_PENALTYTRIGPCP4_FULL_TRIG_Msk (0x1UL << RADIO_PENALTYTRIGPCP4_FULL_TRIG_Pos) /*!< Bit mask of TRIG field. */

/* Register: RADIO_PENALTYTRIGPCP3_ZERO */
/* Description: Unspecified */

/* Bit 0 :   */
#define RADIO_PENALTYTRIGPCP3_ZERO_TRIG_Pos (0UL) /*!< Position of TRIG field. */
#define RADIO_PENALTYTRIGPCP3_ZERO_TRIG_Msk (0x1UL << RADIO_PENALTYTRIGPCP3_ZERO_TRIG_Pos) /*!< Bit mask of TRIG field. */

/* Register: RADIO_PENALTYTRIGPCP3_FULL */
/* Description: Unspecified */

/* Bit 0 :   */
#define RADIO_PENALTYTRIGPCP3_FULL_TRIG_Pos (0UL) /*!< Position of TRIG field. */
#define RADIO_PENALTYTRIGPCP3_FULL_TRIG_Msk (0x1UL << RADIO_PENALTYTRIGPCP3_FULL_TRIG_Pos) /*!< Bit mask of TRIG field. */

/* Register: RADIO_PENALTYTRIGPCP2_ZERO */
/* Description: Unspecified */

/* Bit 0 :   */
#define RADIO_PENALTYTRIGPCP2_ZERO_TRIG_Pos (0UL) /*!< Position of TRIG field. */
#define RADIO_PENALTYTRIGPCP2_ZERO_TRIG_Msk (0x1UL << RADIO_PENALTYTRIGPCP2_ZERO_TRIG_Pos) /*!< Bit mask of TRIG field. */

/* Register: RADIO_PENALTYTRIGPCP2_FULL */
/* Description: Unspecified */

/* Bit 0 :   */
#define RADIO_PENALTYTRIGPCP2_FULL_TRIG_Pos (0UL) /*!< Position of TRIG field. */
#define RADIO_PENALTYTRIGPCP2_FULL_TRIG_Msk (0x1UL << RADIO_PENALTYTRIGPCP2_FULL_TRIG_Pos) /*!< Bit mask of TRIG field. */

/* Register: RADIO_PENALTYTRIGPCP1_ZERO */
/* Description: Unspecified */

/* Bit 0 :   */
#define RADIO_PENALTYTRIGPCP1_ZERO_TRIG_Pos (0UL) /*!< Position of TRIG field. */
#define RADIO_PENALTYTRIGPCP1_ZERO_TRIG_Msk (0x1UL << RADIO_PENALTYTRIGPCP1_ZERO_TRIG_Pos) /*!< Bit mask of TRIG field. */

/* Register: RADIO_PENALTYTRIGPCP1_FULL */
/* Description: Unspecified */

/* Bit 0 :   */
#define RADIO_PENALTYTRIGPCP1_FULL_TRIG_Pos (0UL) /*!< Position of TRIG field. */
#define RADIO_PENALTYTRIGPCP1_FULL_TRIG_Msk (0x1UL << RADIO_PENALTYTRIGPCP1_FULL_TRIG_Pos) /*!< Bit mask of TRIG field. */

/* Register: RADIO_PENALTYTRIGPCP0_ZERO */
/* Description: Unspecified */

/* Bit 0 :   */
#define RADIO_PENALTYTRIGPCP0_ZERO_TRIG_Pos (0UL) /*!< Position of TRIG field. */
#define RADIO_PENALTYTRIGPCP0_ZERO_TRIG_Msk (0x1UL << RADIO_PENALTYTRIGPCP0_ZERO_TRIG_Pos) /*!< Bit mask of TRIG field. */

/* Register: RADIO_PENALTYTRIGPCP0_FULL */
/* Description: Unspecified */

/* Bit 0 :   */
#define RADIO_PENALTYTRIGPCP0_FULL_TRIG_Pos (0UL) /*!< Position of TRIG field. */
#define RADIO_PENALTYTRIGPCP0_FULL_TRIG_Msk (0x1UL << RADIO_PENALTYTRIGPCP0_FULL_TRIG_Pos) /*!< Bit mask of TRIG field. */

/* Register: RADIO_PENALTYREG_PCP0 */
/* Description: Unspecified */

/* Bits 31..0 :   */
#define RADIO_PENALTYREG_PCP0_VALUE_Pos (0UL) /*!< Position of VALUE field. */
#define RADIO_PENALTYREG_PCP0_VALUE_Msk (0xFFFFFFFFUL << RADIO_PENALTYREG_PCP0_VALUE_Pos) /*!< Bit mask of VALUE field. */

/* Register: RADIO_PENALTYREG_PCP */
/* Description: Description collection: */

/* Bits 31..0 :   */
#define RADIO_PENALTYREG_PCP_VALUE_Pos (0UL) /*!< Position of VALUE field. */
#define RADIO_PENALTYREG_PCP_VALUE_Msk (0xFFFFFFFFUL << RADIO_PENALTYREG_PCP_VALUE_Pos) /*!< Bit mask of VALUE field. */

/* Register: RADIO_AUTOCLOCKSOURCEREQ */
/* Description: Unspecified */

/* Bit 4 :   */
#define RADIO_AUTOCLOCKSOURCEREQ_PCP_4_Pos (4UL) /*!< Position of PCP_4 field. */
#define RADIO_AUTOCLOCKSOURCEREQ_PCP_4_Msk (0x1UL << RADIO_AUTOCLOCKSOURCEREQ_PCP_4_Pos) /*!< Bit mask of PCP_4 field. */
#define RADIO_AUTOCLOCKSOURCEREQ_PCP_4_On (0x0UL) /*!< Unspecified */
#define RADIO_AUTOCLOCKSOURCEREQ_PCP_4_Off (0x1UL) /*!< Unspecified */

/* Bit 3 :   */
#define RADIO_AUTOCLOCKSOURCEREQ_PCP_3_Pos (3UL) /*!< Position of PCP_3 field. */
#define RADIO_AUTOCLOCKSOURCEREQ_PCP_3_Msk (0x1UL << RADIO_AUTOCLOCKSOURCEREQ_PCP_3_Pos) /*!< Bit mask of PCP_3 field. */
#define RADIO_AUTOCLOCKSOURCEREQ_PCP_3_On (0x0UL) /*!< Unspecified */
#define RADIO_AUTOCLOCKSOURCEREQ_PCP_3_Off (0x1UL) /*!< Unspecified */

/* Bit 2 :   */
#define RADIO_AUTOCLOCKSOURCEREQ_PCP_2_Pos (2UL) /*!< Position of PCP_2 field. */
#define RADIO_AUTOCLOCKSOURCEREQ_PCP_2_Msk (0x1UL << RADIO_AUTOCLOCKSOURCEREQ_PCP_2_Pos) /*!< Bit mask of PCP_2 field. */
#define RADIO_AUTOCLOCKSOURCEREQ_PCP_2_On (0x0UL) /*!< Unspecified */
#define RADIO_AUTOCLOCKSOURCEREQ_PCP_2_Off (0x1UL) /*!< Unspecified */

/* Bit 1 :   */
#define RADIO_AUTOCLOCKSOURCEREQ_PCP_1_Pos (1UL) /*!< Position of PCP_1 field. */
#define RADIO_AUTOCLOCKSOURCEREQ_PCP_1_Msk (0x1UL << RADIO_AUTOCLOCKSOURCEREQ_PCP_1_Pos) /*!< Bit mask of PCP_1 field. */
#define RADIO_AUTOCLOCKSOURCEREQ_PCP_1_On (0x0UL) /*!< Unspecified */
#define RADIO_AUTOCLOCKSOURCEREQ_PCP_1_Off (0x1UL) /*!< Unspecified */

/* Bit 0 :   */
#define RADIO_AUTOCLOCKSOURCEREQ_PCP_0_Pos (0UL) /*!< Position of PCP_0 field. */
#define RADIO_AUTOCLOCKSOURCEREQ_PCP_0_Msk (0x1UL << RADIO_AUTOCLOCKSOURCEREQ_PCP_0_Pos) /*!< Bit mask of PCP_0 field. */
#define RADIO_AUTOCLOCKSOURCEREQ_PCP_0_On (0x0UL) /*!< Unspecified */
#define RADIO_AUTOCLOCKSOURCEREQ_PCP_0_Off (0x1UL) /*!< Unspecified */

/* Register: RADIO_FORCEOVERRIDE_PCP */
/* Description: Description collection: */

/* Bit 7 :   */
#define RADIO_FORCEOVERRIDE_PCP_DOFORCECLOCK_Pos (7UL) /*!< Position of DOFORCECLOCK field. */
#define RADIO_FORCEOVERRIDE_PCP_DOFORCECLOCK_Msk (0x1UL << RADIO_FORCEOVERRIDE_PCP_DOFORCECLOCK_Pos) /*!< Bit mask of DOFORCECLOCK field. */

/* Bit 1 :   */
#define RADIO_FORCEOVERRIDE_PCP_CLOCKFORCING_Pos (1UL) /*!< Position of CLOCKFORCING field. */
#define RADIO_FORCEOVERRIDE_PCP_CLOCKFORCING_Msk (0x1UL << RADIO_FORCEOVERRIDE_PCP_CLOCKFORCING_Pos) /*!< Bit mask of CLOCKFORCING field. */


/* Peripheral: SAADC */
/* Description: Analog to Digital Converter */

/* Register: SAADC_TASKS_START */
/* Description: Start the ADC and prepare the result buffer in RAM */

/* Bit 0 : Start the ADC and prepare the result buffer in RAM */
#define SAADC_TASKS_START_TASKS_START_Pos (0UL) /*!< Position of TASKS_START field. */
#define SAADC_TASKS_START_TASKS_START_Msk (0x1UL << SAADC_TASKS_START_TASKS_START_Pos) /*!< Bit mask of TASKS_START field. */
#define SAADC_TASKS_START_TASKS_START_Trigger (0x1UL) /*!< Trigger task */

/* Register: SAADC_TASKS_SAMPLE */
/* Description: Take one ADC sample, if scan is enabled all channels are sampled */

/* Bit 0 : Take one ADC sample, if scan is enabled all channels are sampled */
#define SAADC_TASKS_SAMPLE_TASKS_SAMPLE_Pos (0UL) /*!< Position of TASKS_SAMPLE field. */
#define SAADC_TASKS_SAMPLE_TASKS_SAMPLE_Msk (0x1UL << SAADC_TASKS_SAMPLE_TASKS_SAMPLE_Pos) /*!< Bit mask of TASKS_SAMPLE field. */
#define SAADC_TASKS_SAMPLE_TASKS_SAMPLE_Trigger (0x1UL) /*!< Trigger task */

/* Register: SAADC_TASKS_STOP */
/* Description: Stop the ADC and terminate any on-going conversion */

/* Bit 0 : Stop the ADC and terminate any on-going conversion */
#define SAADC_TASKS_STOP_TASKS_STOP_Pos (0UL) /*!< Position of TASKS_STOP field. */
#define SAADC_TASKS_STOP_TASKS_STOP_Msk (0x1UL << SAADC_TASKS_STOP_TASKS_STOP_Pos) /*!< Bit mask of TASKS_STOP field. */
#define SAADC_TASKS_STOP_TASKS_STOP_Trigger (0x1UL) /*!< Trigger task */

/* Register: SAADC_TASKS_CALIBRATEOFFSET */
/* Description: Starts offset auto-calibration */

/* Bit 0 : Starts offset auto-calibration */
#define SAADC_TASKS_CALIBRATEOFFSET_TASKS_CALIBRATEOFFSET_Pos (0UL) /*!< Position of TASKS_CALIBRATEOFFSET field. */
#define SAADC_TASKS_CALIBRATEOFFSET_TASKS_CALIBRATEOFFSET_Msk (0x1UL << SAADC_TASKS_CALIBRATEOFFSET_TASKS_CALIBRATEOFFSET_Pos) /*!< Bit mask of TASKS_CALIBRATEOFFSET field. */
#define SAADC_TASKS_CALIBRATEOFFSET_TASKS_CALIBRATEOFFSET_Trigger (0x1UL) /*!< Trigger task */

/* Register: SAADC_TASKS_CALIBRATEGAIN */
/* Description: Starts gain auto-calibration */

/* Bit 0 : Starts gain auto-calibration */
#define SAADC_TASKS_CALIBRATEGAIN_TASKS_CALIBRATEGAIN_Pos (0UL) /*!< Position of TASKS_CALIBRATEGAIN field. */
#define SAADC_TASKS_CALIBRATEGAIN_TASKS_CALIBRATEGAIN_Msk (0x1UL << SAADC_TASKS_CALIBRATEGAIN_TASKS_CALIBRATEGAIN_Pos) /*!< Bit mask of TASKS_CALIBRATEGAIN field. */
#define SAADC_TASKS_CALIBRATEGAIN_TASKS_CALIBRATEGAIN_Trigger (0x1UL) /*!< Trigger task */

/* Register: SAADC_SUBSCRIBE_START */
/* Description: Subscribe configuration for task START */

/* Bit 31 :   */
#define SAADC_SUBSCRIBE_START_EN_Pos (31UL) /*!< Position of EN field. */
#define SAADC_SUBSCRIBE_START_EN_Msk (0x1UL << SAADC_SUBSCRIBE_START_EN_Pos) /*!< Bit mask of EN field. */
#define SAADC_SUBSCRIBE_START_EN_Disabled (0x0UL) /*!< Disable subscription */
#define SAADC_SUBSCRIBE_START_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task START will subscribe to */
#define SAADC_SUBSCRIBE_START_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define SAADC_SUBSCRIBE_START_CHIDX_Msk (0xFFUL << SAADC_SUBSCRIBE_START_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: SAADC_SUBSCRIBE_SAMPLE */
/* Description: Subscribe configuration for task SAMPLE */

/* Bit 31 :   */
#define SAADC_SUBSCRIBE_SAMPLE_EN_Pos (31UL) /*!< Position of EN field. */
#define SAADC_SUBSCRIBE_SAMPLE_EN_Msk (0x1UL << SAADC_SUBSCRIBE_SAMPLE_EN_Pos) /*!< Bit mask of EN field. */
#define SAADC_SUBSCRIBE_SAMPLE_EN_Disabled (0x0UL) /*!< Disable subscription */
#define SAADC_SUBSCRIBE_SAMPLE_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task SAMPLE will subscribe to */
#define SAADC_SUBSCRIBE_SAMPLE_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define SAADC_SUBSCRIBE_SAMPLE_CHIDX_Msk (0xFFUL << SAADC_SUBSCRIBE_SAMPLE_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: SAADC_SUBSCRIBE_STOP */
/* Description: Subscribe configuration for task STOP */

/* Bit 31 :   */
#define SAADC_SUBSCRIBE_STOP_EN_Pos (31UL) /*!< Position of EN field. */
#define SAADC_SUBSCRIBE_STOP_EN_Msk (0x1UL << SAADC_SUBSCRIBE_STOP_EN_Pos) /*!< Bit mask of EN field. */
#define SAADC_SUBSCRIBE_STOP_EN_Disabled (0x0UL) /*!< Disable subscription */
#define SAADC_SUBSCRIBE_STOP_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task STOP will subscribe to */
#define SAADC_SUBSCRIBE_STOP_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define SAADC_SUBSCRIBE_STOP_CHIDX_Msk (0xFFUL << SAADC_SUBSCRIBE_STOP_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: SAADC_SUBSCRIBE_CALIBRATEOFFSET */
/* Description: Subscribe configuration for task CALIBRATEOFFSET */

/* Bit 31 :   */
#define SAADC_SUBSCRIBE_CALIBRATEOFFSET_EN_Pos (31UL) /*!< Position of EN field. */
#define SAADC_SUBSCRIBE_CALIBRATEOFFSET_EN_Msk (0x1UL << SAADC_SUBSCRIBE_CALIBRATEOFFSET_EN_Pos) /*!< Bit mask of EN field. */
#define SAADC_SUBSCRIBE_CALIBRATEOFFSET_EN_Disabled (0x0UL) /*!< Disable subscription */
#define SAADC_SUBSCRIBE_CALIBRATEOFFSET_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task CALIBRATEOFFSET will subscribe to */
#define SAADC_SUBSCRIBE_CALIBRATEOFFSET_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define SAADC_SUBSCRIBE_CALIBRATEOFFSET_CHIDX_Msk (0xFFUL << SAADC_SUBSCRIBE_CALIBRATEOFFSET_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: SAADC_SUBSCRIBE_CALIBRATEGAIN */
/* Description: Subscribe configuration for task CALIBRATEGAIN */

/* Bit 31 :   */
#define SAADC_SUBSCRIBE_CALIBRATEGAIN_EN_Pos (31UL) /*!< Position of EN field. */
#define SAADC_SUBSCRIBE_CALIBRATEGAIN_EN_Msk (0x1UL << SAADC_SUBSCRIBE_CALIBRATEGAIN_EN_Pos) /*!< Bit mask of EN field. */
#define SAADC_SUBSCRIBE_CALIBRATEGAIN_EN_Disabled (0x0UL) /*!< Disable subscription */
#define SAADC_SUBSCRIBE_CALIBRATEGAIN_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task CALIBRATEGAIN will subscribe to */
#define SAADC_SUBSCRIBE_CALIBRATEGAIN_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define SAADC_SUBSCRIBE_CALIBRATEGAIN_CHIDX_Msk (0xFFUL << SAADC_SUBSCRIBE_CALIBRATEGAIN_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: SAADC_EVENTS_STARTED */
/* Description: The ADC has started */

/* Bit 0 : The ADC has started */
#define SAADC_EVENTS_STARTED_EVENTS_STARTED_Pos (0UL) /*!< Position of EVENTS_STARTED field. */
#define SAADC_EVENTS_STARTED_EVENTS_STARTED_Msk (0x1UL << SAADC_EVENTS_STARTED_EVENTS_STARTED_Pos) /*!< Bit mask of EVENTS_STARTED field. */
#define SAADC_EVENTS_STARTED_EVENTS_STARTED_NotGenerated (0x0UL) /*!< Event not generated */
#define SAADC_EVENTS_STARTED_EVENTS_STARTED_Generated (0x1UL) /*!< Event generated */

/* Register: SAADC_EVENTS_END */
/* Description: The ADC has filled up the Result buffer */

/* Bit 0 : The ADC has filled up the Result buffer */
#define SAADC_EVENTS_END_EVENTS_END_Pos (0UL) /*!< Position of EVENTS_END field. */
#define SAADC_EVENTS_END_EVENTS_END_Msk (0x1UL << SAADC_EVENTS_END_EVENTS_END_Pos) /*!< Bit mask of EVENTS_END field. */
#define SAADC_EVENTS_END_EVENTS_END_NotGenerated (0x0UL) /*!< Event not generated */
#define SAADC_EVENTS_END_EVENTS_END_Generated (0x1UL) /*!< Event generated */

/* Register: SAADC_EVENTS_DONE */
/* Description: A conversion task has been completed. Depending on the mode, multiple conversions might be needed for a result to be transferred to RAM. */

/* Bit 0 : A conversion task has been completed. Depending on the mode, multiple conversions might be needed for a result to be transferred to RAM. */
#define SAADC_EVENTS_DONE_EVENTS_DONE_Pos (0UL) /*!< Position of EVENTS_DONE field. */
#define SAADC_EVENTS_DONE_EVENTS_DONE_Msk (0x1UL << SAADC_EVENTS_DONE_EVENTS_DONE_Pos) /*!< Bit mask of EVENTS_DONE field. */
#define SAADC_EVENTS_DONE_EVENTS_DONE_NotGenerated (0x0UL) /*!< Event not generated */
#define SAADC_EVENTS_DONE_EVENTS_DONE_Generated (0x1UL) /*!< Event generated */

/* Register: SAADC_EVENTS_RESULTDONE */
/* Description: A result is ready to get transferred to RAM. Result is available in REGRESULT register */

/* Bit 0 : A result is ready to get transferred to RAM. Result is available in REGRESULT register */
#define SAADC_EVENTS_RESULTDONE_EVENTS_RESULTDONE_Pos (0UL) /*!< Position of EVENTS_RESULTDONE field. */
#define SAADC_EVENTS_RESULTDONE_EVENTS_RESULTDONE_Msk (0x1UL << SAADC_EVENTS_RESULTDONE_EVENTS_RESULTDONE_Pos) /*!< Bit mask of EVENTS_RESULTDONE field. */
#define SAADC_EVENTS_RESULTDONE_EVENTS_RESULTDONE_NotGenerated (0x0UL) /*!< Event not generated */
#define SAADC_EVENTS_RESULTDONE_EVENTS_RESULTDONE_Generated (0x1UL) /*!< Event generated */

/* Register: SAADC_EVENTS_CALIBRATEDONE */
/* Description: Calibration is complete */

/* Bit 0 : Calibration is complete */
#define SAADC_EVENTS_CALIBRATEDONE_EVENTS_CALIBRATEDONE_Pos (0UL) /*!< Position of EVENTS_CALIBRATEDONE field. */
#define SAADC_EVENTS_CALIBRATEDONE_EVENTS_CALIBRATEDONE_Msk (0x1UL << SAADC_EVENTS_CALIBRATEDONE_EVENTS_CALIBRATEDONE_Pos) /*!< Bit mask of EVENTS_CALIBRATEDONE field. */
#define SAADC_EVENTS_CALIBRATEDONE_EVENTS_CALIBRATEDONE_NotGenerated (0x0UL) /*!< Event not generated */
#define SAADC_EVENTS_CALIBRATEDONE_EVENTS_CALIBRATEDONE_Generated (0x1UL) /*!< Event generated */

/* Register: SAADC_EVENTS_STOPPED */
/* Description: The ADC has stopped */

/* Bit 0 : The ADC has stopped */
#define SAADC_EVENTS_STOPPED_EVENTS_STOPPED_Pos (0UL) /*!< Position of EVENTS_STOPPED field. */
#define SAADC_EVENTS_STOPPED_EVENTS_STOPPED_Msk (0x1UL << SAADC_EVENTS_STOPPED_EVENTS_STOPPED_Pos) /*!< Bit mask of EVENTS_STOPPED field. */
#define SAADC_EVENTS_STOPPED_EVENTS_STOPPED_NotGenerated (0x0UL) /*!< Event not generated */
#define SAADC_EVENTS_STOPPED_EVENTS_STOPPED_Generated (0x1UL) /*!< Event generated */

/* Register: SAADC_EVENTS_CH_LIMITH */
/* Description: Description cluster: Last results is equal or above CH[n].LIMIT.HIGH */

/* Bit 0 : Last results is equal or above CH[n].LIMIT.HIGH */
#define SAADC_EVENTS_CH_LIMITH_LIMITH_Pos (0UL) /*!< Position of LIMITH field. */
#define SAADC_EVENTS_CH_LIMITH_LIMITH_Msk (0x1UL << SAADC_EVENTS_CH_LIMITH_LIMITH_Pos) /*!< Bit mask of LIMITH field. */
#define SAADC_EVENTS_CH_LIMITH_LIMITH_NotGenerated (0x0UL) /*!< Event not generated */
#define SAADC_EVENTS_CH_LIMITH_LIMITH_Generated (0x1UL) /*!< Event generated */

/* Register: SAADC_EVENTS_CH_LIMITL */
/* Description: Description cluster: Last results is equal or below CH[n].LIMIT.LOW */

/* Bit 0 : Last results is equal or below CH[n].LIMIT.LOW */
#define SAADC_EVENTS_CH_LIMITL_LIMITL_Pos (0UL) /*!< Position of LIMITL field. */
#define SAADC_EVENTS_CH_LIMITL_LIMITL_Msk (0x1UL << SAADC_EVENTS_CH_LIMITL_LIMITL_Pos) /*!< Bit mask of LIMITL field. */
#define SAADC_EVENTS_CH_LIMITL_LIMITL_NotGenerated (0x0UL) /*!< Event not generated */
#define SAADC_EVENTS_CH_LIMITL_LIMITL_Generated (0x1UL) /*!< Event generated */

/* Register: SAADC_EVENTS_AHBERROR */
/* Description: EasyDMA encountered AHB error. */

/* Bit 0 : EasyDMA encountered AHB error. */
#define SAADC_EVENTS_AHBERROR_EVENTS_AHBERROR_Pos (0UL) /*!< Position of EVENTS_AHBERROR field. */
#define SAADC_EVENTS_AHBERROR_EVENTS_AHBERROR_Msk (0x1UL << SAADC_EVENTS_AHBERROR_EVENTS_AHBERROR_Pos) /*!< Bit mask of EVENTS_AHBERROR field. */
#define SAADC_EVENTS_AHBERROR_EVENTS_AHBERROR_NotGenerated (0x0UL) /*!< Event not generated */
#define SAADC_EVENTS_AHBERROR_EVENTS_AHBERROR_Generated (0x1UL) /*!< Event generated */

/* Register: SAADC_PUBLISH_STARTED */
/* Description: Publish configuration for event STARTED */

/* Bit 31 :   */
#define SAADC_PUBLISH_STARTED_EN_Pos (31UL) /*!< Position of EN field. */
#define SAADC_PUBLISH_STARTED_EN_Msk (0x1UL << SAADC_PUBLISH_STARTED_EN_Pos) /*!< Bit mask of EN field. */
#define SAADC_PUBLISH_STARTED_EN_Disabled (0x0UL) /*!< Disable publishing */
#define SAADC_PUBLISH_STARTED_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event STARTED will publish to */
#define SAADC_PUBLISH_STARTED_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define SAADC_PUBLISH_STARTED_CHIDX_Msk (0xFFUL << SAADC_PUBLISH_STARTED_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: SAADC_PUBLISH_END */
/* Description: Publish configuration for event END */

/* Bit 31 :   */
#define SAADC_PUBLISH_END_EN_Pos (31UL) /*!< Position of EN field. */
#define SAADC_PUBLISH_END_EN_Msk (0x1UL << SAADC_PUBLISH_END_EN_Pos) /*!< Bit mask of EN field. */
#define SAADC_PUBLISH_END_EN_Disabled (0x0UL) /*!< Disable publishing */
#define SAADC_PUBLISH_END_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event END will publish to */
#define SAADC_PUBLISH_END_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define SAADC_PUBLISH_END_CHIDX_Msk (0xFFUL << SAADC_PUBLISH_END_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: SAADC_PUBLISH_DONE */
/* Description: Publish configuration for event DONE */

/* Bit 31 :   */
#define SAADC_PUBLISH_DONE_EN_Pos (31UL) /*!< Position of EN field. */
#define SAADC_PUBLISH_DONE_EN_Msk (0x1UL << SAADC_PUBLISH_DONE_EN_Pos) /*!< Bit mask of EN field. */
#define SAADC_PUBLISH_DONE_EN_Disabled (0x0UL) /*!< Disable publishing */
#define SAADC_PUBLISH_DONE_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event DONE will publish to */
#define SAADC_PUBLISH_DONE_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define SAADC_PUBLISH_DONE_CHIDX_Msk (0xFFUL << SAADC_PUBLISH_DONE_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: SAADC_PUBLISH_RESULTDONE */
/* Description: Publish configuration for event RESULTDONE */

/* Bit 31 :   */
#define SAADC_PUBLISH_RESULTDONE_EN_Pos (31UL) /*!< Position of EN field. */
#define SAADC_PUBLISH_RESULTDONE_EN_Msk (0x1UL << SAADC_PUBLISH_RESULTDONE_EN_Pos) /*!< Bit mask of EN field. */
#define SAADC_PUBLISH_RESULTDONE_EN_Disabled (0x0UL) /*!< Disable publishing */
#define SAADC_PUBLISH_RESULTDONE_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event RESULTDONE will publish to */
#define SAADC_PUBLISH_RESULTDONE_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define SAADC_PUBLISH_RESULTDONE_CHIDX_Msk (0xFFUL << SAADC_PUBLISH_RESULTDONE_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: SAADC_PUBLISH_CALIBRATEDONE */
/* Description: Publish configuration for event CALIBRATEDONE */

/* Bit 31 :   */
#define SAADC_PUBLISH_CALIBRATEDONE_EN_Pos (31UL) /*!< Position of EN field. */
#define SAADC_PUBLISH_CALIBRATEDONE_EN_Msk (0x1UL << SAADC_PUBLISH_CALIBRATEDONE_EN_Pos) /*!< Bit mask of EN field. */
#define SAADC_PUBLISH_CALIBRATEDONE_EN_Disabled (0x0UL) /*!< Disable publishing */
#define SAADC_PUBLISH_CALIBRATEDONE_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event CALIBRATEDONE will publish to */
#define SAADC_PUBLISH_CALIBRATEDONE_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define SAADC_PUBLISH_CALIBRATEDONE_CHIDX_Msk (0xFFUL << SAADC_PUBLISH_CALIBRATEDONE_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: SAADC_PUBLISH_STOPPED */
/* Description: Publish configuration for event STOPPED */

/* Bit 31 :   */
#define SAADC_PUBLISH_STOPPED_EN_Pos (31UL) /*!< Position of EN field. */
#define SAADC_PUBLISH_STOPPED_EN_Msk (0x1UL << SAADC_PUBLISH_STOPPED_EN_Pos) /*!< Bit mask of EN field. */
#define SAADC_PUBLISH_STOPPED_EN_Disabled (0x0UL) /*!< Disable publishing */
#define SAADC_PUBLISH_STOPPED_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event STOPPED will publish to */
#define SAADC_PUBLISH_STOPPED_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define SAADC_PUBLISH_STOPPED_CHIDX_Msk (0xFFUL << SAADC_PUBLISH_STOPPED_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: SAADC_PUBLISH_CH_LIMITH */
/* Description: Description cluster: Publish configuration for event CH[n].LIMITH */

/* Bit 31 :   */
#define SAADC_PUBLISH_CH_LIMITH_EN_Pos (31UL) /*!< Position of EN field. */
#define SAADC_PUBLISH_CH_LIMITH_EN_Msk (0x1UL << SAADC_PUBLISH_CH_LIMITH_EN_Pos) /*!< Bit mask of EN field. */
#define SAADC_PUBLISH_CH_LIMITH_EN_Disabled (0x0UL) /*!< Disable publishing */
#define SAADC_PUBLISH_CH_LIMITH_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event CH[n].LIMITH will publish to */
#define SAADC_PUBLISH_CH_LIMITH_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define SAADC_PUBLISH_CH_LIMITH_CHIDX_Msk (0xFFUL << SAADC_PUBLISH_CH_LIMITH_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: SAADC_PUBLISH_CH_LIMITL */
/* Description: Description cluster: Publish configuration for event CH[n].LIMITL */

/* Bit 31 :   */
#define SAADC_PUBLISH_CH_LIMITL_EN_Pos (31UL) /*!< Position of EN field. */
#define SAADC_PUBLISH_CH_LIMITL_EN_Msk (0x1UL << SAADC_PUBLISH_CH_LIMITL_EN_Pos) /*!< Bit mask of EN field. */
#define SAADC_PUBLISH_CH_LIMITL_EN_Disabled (0x0UL) /*!< Disable publishing */
#define SAADC_PUBLISH_CH_LIMITL_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event CH[n].LIMITL will publish to */
#define SAADC_PUBLISH_CH_LIMITL_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define SAADC_PUBLISH_CH_LIMITL_CHIDX_Msk (0xFFUL << SAADC_PUBLISH_CH_LIMITL_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: SAADC_PUBLISH_AHBERROR */
/* Description: Publish configuration for event AHBERROR */

/* Bit 31 :   */
#define SAADC_PUBLISH_AHBERROR_EN_Pos (31UL) /*!< Position of EN field. */
#define SAADC_PUBLISH_AHBERROR_EN_Msk (0x1UL << SAADC_PUBLISH_AHBERROR_EN_Pos) /*!< Bit mask of EN field. */
#define SAADC_PUBLISH_AHBERROR_EN_Disabled (0x0UL) /*!< Disable publishing */
#define SAADC_PUBLISH_AHBERROR_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event AHBERROR will publish to */
#define SAADC_PUBLISH_AHBERROR_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define SAADC_PUBLISH_AHBERROR_CHIDX_Msk (0xFFUL << SAADC_PUBLISH_AHBERROR_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: SAADC_SHORTS */
/* Description: Shortcuts between local events and tasks */

/* Bit 1 : Shortcut between event END and task START */
#define SAADC_SHORTS_END_START_Pos (1UL) /*!< Position of END_START field. */
#define SAADC_SHORTS_END_START_Msk (0x1UL << SAADC_SHORTS_END_START_Pos) /*!< Bit mask of END_START field. */
#define SAADC_SHORTS_END_START_Disabled (0x0UL) /*!< Disable shortcut */
#define SAADC_SHORTS_END_START_Enabled (0x1UL) /*!< Enable shortcut */

/* Bit 0 : Shortcut between event DONE and task SAMPLE */
#define SAADC_SHORTS_DONE_SAMPLE_Pos (0UL) /*!< Position of DONE_SAMPLE field. */
#define SAADC_SHORTS_DONE_SAMPLE_Msk (0x1UL << SAADC_SHORTS_DONE_SAMPLE_Pos) /*!< Bit mask of DONE_SAMPLE field. */
#define SAADC_SHORTS_DONE_SAMPLE_Disabled (0x0UL) /*!< Disable shortcut */
#define SAADC_SHORTS_DONE_SAMPLE_Enabled (0x1UL) /*!< Enable shortcut */

/* Register: SAADC_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 22 : Enable or disable interrupt for event AHBERROR */
#define SAADC_INTEN_AHBERROR_Pos (22UL) /*!< Position of AHBERROR field. */
#define SAADC_INTEN_AHBERROR_Msk (0x1UL << SAADC_INTEN_AHBERROR_Pos) /*!< Bit mask of AHBERROR field. */
#define SAADC_INTEN_AHBERROR_Disabled (0x0UL) /*!< Disable */
#define SAADC_INTEN_AHBERROR_Enabled (0x1UL) /*!< Enable */

/* Bit 21 : Enable or disable interrupt for event CH7LIMITL */
#define SAADC_INTEN_CH7LIMITL_Pos (21UL) /*!< Position of CH7LIMITL field. */
#define SAADC_INTEN_CH7LIMITL_Msk (0x1UL << SAADC_INTEN_CH7LIMITL_Pos) /*!< Bit mask of CH7LIMITL field. */
#define SAADC_INTEN_CH7LIMITL_Disabled (0x0UL) /*!< Disable */
#define SAADC_INTEN_CH7LIMITL_Enabled (0x1UL) /*!< Enable */

/* Bit 20 : Enable or disable interrupt for event CH7LIMITH */
#define SAADC_INTEN_CH7LIMITH_Pos (20UL) /*!< Position of CH7LIMITH field. */
#define SAADC_INTEN_CH7LIMITH_Msk (0x1UL << SAADC_INTEN_CH7LIMITH_Pos) /*!< Bit mask of CH7LIMITH field. */
#define SAADC_INTEN_CH7LIMITH_Disabled (0x0UL) /*!< Disable */
#define SAADC_INTEN_CH7LIMITH_Enabled (0x1UL) /*!< Enable */

/* Bit 19 : Enable or disable interrupt for event CH6LIMITL */
#define SAADC_INTEN_CH6LIMITL_Pos (19UL) /*!< Position of CH6LIMITL field. */
#define SAADC_INTEN_CH6LIMITL_Msk (0x1UL << SAADC_INTEN_CH6LIMITL_Pos) /*!< Bit mask of CH6LIMITL field. */
#define SAADC_INTEN_CH6LIMITL_Disabled (0x0UL) /*!< Disable */
#define SAADC_INTEN_CH6LIMITL_Enabled (0x1UL) /*!< Enable */

/* Bit 18 : Enable or disable interrupt for event CH6LIMITH */
#define SAADC_INTEN_CH6LIMITH_Pos (18UL) /*!< Position of CH6LIMITH field. */
#define SAADC_INTEN_CH6LIMITH_Msk (0x1UL << SAADC_INTEN_CH6LIMITH_Pos) /*!< Bit mask of CH6LIMITH field. */
#define SAADC_INTEN_CH6LIMITH_Disabled (0x0UL) /*!< Disable */
#define SAADC_INTEN_CH6LIMITH_Enabled (0x1UL) /*!< Enable */

/* Bit 17 : Enable or disable interrupt for event CH5LIMITL */
#define SAADC_INTEN_CH5LIMITL_Pos (17UL) /*!< Position of CH5LIMITL field. */
#define SAADC_INTEN_CH5LIMITL_Msk (0x1UL << SAADC_INTEN_CH5LIMITL_Pos) /*!< Bit mask of CH5LIMITL field. */
#define SAADC_INTEN_CH5LIMITL_Disabled (0x0UL) /*!< Disable */
#define SAADC_INTEN_CH5LIMITL_Enabled (0x1UL) /*!< Enable */

/* Bit 16 : Enable or disable interrupt for event CH5LIMITH */
#define SAADC_INTEN_CH5LIMITH_Pos (16UL) /*!< Position of CH5LIMITH field. */
#define SAADC_INTEN_CH5LIMITH_Msk (0x1UL << SAADC_INTEN_CH5LIMITH_Pos) /*!< Bit mask of CH5LIMITH field. */
#define SAADC_INTEN_CH5LIMITH_Disabled (0x0UL) /*!< Disable */
#define SAADC_INTEN_CH5LIMITH_Enabled (0x1UL) /*!< Enable */

/* Bit 15 : Enable or disable interrupt for event CH4LIMITL */
#define SAADC_INTEN_CH4LIMITL_Pos (15UL) /*!< Position of CH4LIMITL field. */
#define SAADC_INTEN_CH4LIMITL_Msk (0x1UL << SAADC_INTEN_CH4LIMITL_Pos) /*!< Bit mask of CH4LIMITL field. */
#define SAADC_INTEN_CH4LIMITL_Disabled (0x0UL) /*!< Disable */
#define SAADC_INTEN_CH4LIMITL_Enabled (0x1UL) /*!< Enable */

/* Bit 14 : Enable or disable interrupt for event CH4LIMITH */
#define SAADC_INTEN_CH4LIMITH_Pos (14UL) /*!< Position of CH4LIMITH field. */
#define SAADC_INTEN_CH4LIMITH_Msk (0x1UL << SAADC_INTEN_CH4LIMITH_Pos) /*!< Bit mask of CH4LIMITH field. */
#define SAADC_INTEN_CH4LIMITH_Disabled (0x0UL) /*!< Disable */
#define SAADC_INTEN_CH4LIMITH_Enabled (0x1UL) /*!< Enable */

/* Bit 13 : Enable or disable interrupt for event CH3LIMITL */
#define SAADC_INTEN_CH3LIMITL_Pos (13UL) /*!< Position of CH3LIMITL field. */
#define SAADC_INTEN_CH3LIMITL_Msk (0x1UL << SAADC_INTEN_CH3LIMITL_Pos) /*!< Bit mask of CH3LIMITL field. */
#define SAADC_INTEN_CH3LIMITL_Disabled (0x0UL) /*!< Disable */
#define SAADC_INTEN_CH3LIMITL_Enabled (0x1UL) /*!< Enable */

/* Bit 12 : Enable or disable interrupt for event CH3LIMITH */
#define SAADC_INTEN_CH3LIMITH_Pos (12UL) /*!< Position of CH3LIMITH field. */
#define SAADC_INTEN_CH3LIMITH_Msk (0x1UL << SAADC_INTEN_CH3LIMITH_Pos) /*!< Bit mask of CH3LIMITH field. */
#define SAADC_INTEN_CH3LIMITH_Disabled (0x0UL) /*!< Disable */
#define SAADC_INTEN_CH3LIMITH_Enabled (0x1UL) /*!< Enable */

/* Bit 11 : Enable or disable interrupt for event CH2LIMITL */
#define SAADC_INTEN_CH2LIMITL_Pos (11UL) /*!< Position of CH2LIMITL field. */
#define SAADC_INTEN_CH2LIMITL_Msk (0x1UL << SAADC_INTEN_CH2LIMITL_Pos) /*!< Bit mask of CH2LIMITL field. */
#define SAADC_INTEN_CH2LIMITL_Disabled (0x0UL) /*!< Disable */
#define SAADC_INTEN_CH2LIMITL_Enabled (0x1UL) /*!< Enable */

/* Bit 10 : Enable or disable interrupt for event CH2LIMITH */
#define SAADC_INTEN_CH2LIMITH_Pos (10UL) /*!< Position of CH2LIMITH field. */
#define SAADC_INTEN_CH2LIMITH_Msk (0x1UL << SAADC_INTEN_CH2LIMITH_Pos) /*!< Bit mask of CH2LIMITH field. */
#define SAADC_INTEN_CH2LIMITH_Disabled (0x0UL) /*!< Disable */
#define SAADC_INTEN_CH2LIMITH_Enabled (0x1UL) /*!< Enable */

/* Bit 9 : Enable or disable interrupt for event CH1LIMITL */
#define SAADC_INTEN_CH1LIMITL_Pos (9UL) /*!< Position of CH1LIMITL field. */
#define SAADC_INTEN_CH1LIMITL_Msk (0x1UL << SAADC_INTEN_CH1LIMITL_Pos) /*!< Bit mask of CH1LIMITL field. */
#define SAADC_INTEN_CH1LIMITL_Disabled (0x0UL) /*!< Disable */
#define SAADC_INTEN_CH1LIMITL_Enabled (0x1UL) /*!< Enable */

/* Bit 8 : Enable or disable interrupt for event CH1LIMITH */
#define SAADC_INTEN_CH1LIMITH_Pos (8UL) /*!< Position of CH1LIMITH field. */
#define SAADC_INTEN_CH1LIMITH_Msk (0x1UL << SAADC_INTEN_CH1LIMITH_Pos) /*!< Bit mask of CH1LIMITH field. */
#define SAADC_INTEN_CH1LIMITH_Disabled (0x0UL) /*!< Disable */
#define SAADC_INTEN_CH1LIMITH_Enabled (0x1UL) /*!< Enable */

/* Bit 7 : Enable or disable interrupt for event CH0LIMITL */
#define SAADC_INTEN_CH0LIMITL_Pos (7UL) /*!< Position of CH0LIMITL field. */
#define SAADC_INTEN_CH0LIMITL_Msk (0x1UL << SAADC_INTEN_CH0LIMITL_Pos) /*!< Bit mask of CH0LIMITL field. */
#define SAADC_INTEN_CH0LIMITL_Disabled (0x0UL) /*!< Disable */
#define SAADC_INTEN_CH0LIMITL_Enabled (0x1UL) /*!< Enable */

/* Bit 6 : Enable or disable interrupt for event CH0LIMITH */
#define SAADC_INTEN_CH0LIMITH_Pos (6UL) /*!< Position of CH0LIMITH field. */
#define SAADC_INTEN_CH0LIMITH_Msk (0x1UL << SAADC_INTEN_CH0LIMITH_Pos) /*!< Bit mask of CH0LIMITH field. */
#define SAADC_INTEN_CH0LIMITH_Disabled (0x0UL) /*!< Disable */
#define SAADC_INTEN_CH0LIMITH_Enabled (0x1UL) /*!< Enable */

/* Bit 5 : Enable or disable interrupt for event STOPPED */
#define SAADC_INTEN_STOPPED_Pos (5UL) /*!< Position of STOPPED field. */
#define SAADC_INTEN_STOPPED_Msk (0x1UL << SAADC_INTEN_STOPPED_Pos) /*!< Bit mask of STOPPED field. */
#define SAADC_INTEN_STOPPED_Disabled (0x0UL) /*!< Disable */
#define SAADC_INTEN_STOPPED_Enabled (0x1UL) /*!< Enable */

/* Bit 4 : Enable or disable interrupt for event CALIBRATEDONE */
#define SAADC_INTEN_CALIBRATEDONE_Pos (4UL) /*!< Position of CALIBRATEDONE field. */
#define SAADC_INTEN_CALIBRATEDONE_Msk (0x1UL << SAADC_INTEN_CALIBRATEDONE_Pos) /*!< Bit mask of CALIBRATEDONE field. */
#define SAADC_INTEN_CALIBRATEDONE_Disabled (0x0UL) /*!< Disable */
#define SAADC_INTEN_CALIBRATEDONE_Enabled (0x1UL) /*!< Enable */

/* Bit 3 : Enable or disable interrupt for event RESULTDONE */
#define SAADC_INTEN_RESULTDONE_Pos (3UL) /*!< Position of RESULTDONE field. */
#define SAADC_INTEN_RESULTDONE_Msk (0x1UL << SAADC_INTEN_RESULTDONE_Pos) /*!< Bit mask of RESULTDONE field. */
#define SAADC_INTEN_RESULTDONE_Disabled (0x0UL) /*!< Disable */
#define SAADC_INTEN_RESULTDONE_Enabled (0x1UL) /*!< Enable */

/* Bit 2 : Enable or disable interrupt for event DONE */
#define SAADC_INTEN_DONE_Pos (2UL) /*!< Position of DONE field. */
#define SAADC_INTEN_DONE_Msk (0x1UL << SAADC_INTEN_DONE_Pos) /*!< Bit mask of DONE field. */
#define SAADC_INTEN_DONE_Disabled (0x0UL) /*!< Disable */
#define SAADC_INTEN_DONE_Enabled (0x1UL) /*!< Enable */

/* Bit 1 : Enable or disable interrupt for event END */
#define SAADC_INTEN_END_Pos (1UL) /*!< Position of END field. */
#define SAADC_INTEN_END_Msk (0x1UL << SAADC_INTEN_END_Pos) /*!< Bit mask of END field. */
#define SAADC_INTEN_END_Disabled (0x0UL) /*!< Disable */
#define SAADC_INTEN_END_Enabled (0x1UL) /*!< Enable */

/* Bit 0 : Enable or disable interrupt for event STARTED */
#define SAADC_INTEN_STARTED_Pos (0UL) /*!< Position of STARTED field. */
#define SAADC_INTEN_STARTED_Msk (0x1UL << SAADC_INTEN_STARTED_Pos) /*!< Bit mask of STARTED field. */
#define SAADC_INTEN_STARTED_Disabled (0x0UL) /*!< Disable */
#define SAADC_INTEN_STARTED_Enabled (0x1UL) /*!< Enable */

/* Register: SAADC_INTENSET */
/* Description: Enable interrupt */

/* Bit 22 : Write '1' to enable interrupt for event AHBERROR */
#define SAADC_INTENSET_AHBERROR_Pos (22UL) /*!< Position of AHBERROR field. */
#define SAADC_INTENSET_AHBERROR_Msk (0x1UL << SAADC_INTENSET_AHBERROR_Pos) /*!< Bit mask of AHBERROR field. */
#define SAADC_INTENSET_AHBERROR_Disabled (0x0UL) /*!< Read: Disabled */
#define SAADC_INTENSET_AHBERROR_Enabled (0x1UL) /*!< Read: Enabled */
#define SAADC_INTENSET_AHBERROR_Set (0x1UL) /*!< Enable */

/* Bit 21 : Write '1' to enable interrupt for event CH7LIMITL */
#define SAADC_INTENSET_CH7LIMITL_Pos (21UL) /*!< Position of CH7LIMITL field. */
#define SAADC_INTENSET_CH7LIMITL_Msk (0x1UL << SAADC_INTENSET_CH7LIMITL_Pos) /*!< Bit mask of CH7LIMITL field. */
#define SAADC_INTENSET_CH7LIMITL_Disabled (0x0UL) /*!< Read: Disabled */
#define SAADC_INTENSET_CH7LIMITL_Enabled (0x1UL) /*!< Read: Enabled */
#define SAADC_INTENSET_CH7LIMITL_Set (0x1UL) /*!< Enable */

/* Bit 20 : Write '1' to enable interrupt for event CH7LIMITH */
#define SAADC_INTENSET_CH7LIMITH_Pos (20UL) /*!< Position of CH7LIMITH field. */
#define SAADC_INTENSET_CH7LIMITH_Msk (0x1UL << SAADC_INTENSET_CH7LIMITH_Pos) /*!< Bit mask of CH7LIMITH field. */
#define SAADC_INTENSET_CH7LIMITH_Disabled (0x0UL) /*!< Read: Disabled */
#define SAADC_INTENSET_CH7LIMITH_Enabled (0x1UL) /*!< Read: Enabled */
#define SAADC_INTENSET_CH7LIMITH_Set (0x1UL) /*!< Enable */

/* Bit 19 : Write '1' to enable interrupt for event CH6LIMITL */
#define SAADC_INTENSET_CH6LIMITL_Pos (19UL) /*!< Position of CH6LIMITL field. */
#define SAADC_INTENSET_CH6LIMITL_Msk (0x1UL << SAADC_INTENSET_CH6LIMITL_Pos) /*!< Bit mask of CH6LIMITL field. */
#define SAADC_INTENSET_CH6LIMITL_Disabled (0x0UL) /*!< Read: Disabled */
#define SAADC_INTENSET_CH6LIMITL_Enabled (0x1UL) /*!< Read: Enabled */
#define SAADC_INTENSET_CH6LIMITL_Set (0x1UL) /*!< Enable */

/* Bit 18 : Write '1' to enable interrupt for event CH6LIMITH */
#define SAADC_INTENSET_CH6LIMITH_Pos (18UL) /*!< Position of CH6LIMITH field. */
#define SAADC_INTENSET_CH6LIMITH_Msk (0x1UL << SAADC_INTENSET_CH6LIMITH_Pos) /*!< Bit mask of CH6LIMITH field. */
#define SAADC_INTENSET_CH6LIMITH_Disabled (0x0UL) /*!< Read: Disabled */
#define SAADC_INTENSET_CH6LIMITH_Enabled (0x1UL) /*!< Read: Enabled */
#define SAADC_INTENSET_CH6LIMITH_Set (0x1UL) /*!< Enable */

/* Bit 17 : Write '1' to enable interrupt for event CH5LIMITL */
#define SAADC_INTENSET_CH5LIMITL_Pos (17UL) /*!< Position of CH5LIMITL field. */
#define SAADC_INTENSET_CH5LIMITL_Msk (0x1UL << SAADC_INTENSET_CH5LIMITL_Pos) /*!< Bit mask of CH5LIMITL field. */
#define SAADC_INTENSET_CH5LIMITL_Disabled (0x0UL) /*!< Read: Disabled */
#define SAADC_INTENSET_CH5LIMITL_Enabled (0x1UL) /*!< Read: Enabled */
#define SAADC_INTENSET_CH5LIMITL_Set (0x1UL) /*!< Enable */

/* Bit 16 : Write '1' to enable interrupt for event CH5LIMITH */
#define SAADC_INTENSET_CH5LIMITH_Pos (16UL) /*!< Position of CH5LIMITH field. */
#define SAADC_INTENSET_CH5LIMITH_Msk (0x1UL << SAADC_INTENSET_CH5LIMITH_Pos) /*!< Bit mask of CH5LIMITH field. */
#define SAADC_INTENSET_CH5LIMITH_Disabled (0x0UL) /*!< Read: Disabled */
#define SAADC_INTENSET_CH5LIMITH_Enabled (0x1UL) /*!< Read: Enabled */
#define SAADC_INTENSET_CH5LIMITH_Set (0x1UL) /*!< Enable */

/* Bit 15 : Write '1' to enable interrupt for event CH4LIMITL */
#define SAADC_INTENSET_CH4LIMITL_Pos (15UL) /*!< Position of CH4LIMITL field. */
#define SAADC_INTENSET_CH4LIMITL_Msk (0x1UL << SAADC_INTENSET_CH4LIMITL_Pos) /*!< Bit mask of CH4LIMITL field. */
#define SAADC_INTENSET_CH4LIMITL_Disabled (0x0UL) /*!< Read: Disabled */
#define SAADC_INTENSET_CH4LIMITL_Enabled (0x1UL) /*!< Read: Enabled */
#define SAADC_INTENSET_CH4LIMITL_Set (0x1UL) /*!< Enable */

/* Bit 14 : Write '1' to enable interrupt for event CH4LIMITH */
#define SAADC_INTENSET_CH4LIMITH_Pos (14UL) /*!< Position of CH4LIMITH field. */
#define SAADC_INTENSET_CH4LIMITH_Msk (0x1UL << SAADC_INTENSET_CH4LIMITH_Pos) /*!< Bit mask of CH4LIMITH field. */
#define SAADC_INTENSET_CH4LIMITH_Disabled (0x0UL) /*!< Read: Disabled */
#define SAADC_INTENSET_CH4LIMITH_Enabled (0x1UL) /*!< Read: Enabled */
#define SAADC_INTENSET_CH4LIMITH_Set (0x1UL) /*!< Enable */

/* Bit 13 : Write '1' to enable interrupt for event CH3LIMITL */
#define SAADC_INTENSET_CH3LIMITL_Pos (13UL) /*!< Position of CH3LIMITL field. */
#define SAADC_INTENSET_CH3LIMITL_Msk (0x1UL << SAADC_INTENSET_CH3LIMITL_Pos) /*!< Bit mask of CH3LIMITL field. */
#define SAADC_INTENSET_CH3LIMITL_Disabled (0x0UL) /*!< Read: Disabled */
#define SAADC_INTENSET_CH3LIMITL_Enabled (0x1UL) /*!< Read: Enabled */
#define SAADC_INTENSET_CH3LIMITL_Set (0x1UL) /*!< Enable */

/* Bit 12 : Write '1' to enable interrupt for event CH3LIMITH */
#define SAADC_INTENSET_CH3LIMITH_Pos (12UL) /*!< Position of CH3LIMITH field. */
#define SAADC_INTENSET_CH3LIMITH_Msk (0x1UL << SAADC_INTENSET_CH3LIMITH_Pos) /*!< Bit mask of CH3LIMITH field. */
#define SAADC_INTENSET_CH3LIMITH_Disabled (0x0UL) /*!< Read: Disabled */
#define SAADC_INTENSET_CH3LIMITH_Enabled (0x1UL) /*!< Read: Enabled */
#define SAADC_INTENSET_CH3LIMITH_Set (0x1UL) /*!< Enable */

/* Bit 11 : Write '1' to enable interrupt for event CH2LIMITL */
#define SAADC_INTENSET_CH2LIMITL_Pos (11UL) /*!< Position of CH2LIMITL field. */
#define SAADC_INTENSET_CH2LIMITL_Msk (0x1UL << SAADC_INTENSET_CH2LIMITL_Pos) /*!< Bit mask of CH2LIMITL field. */
#define SAADC_INTENSET_CH2LIMITL_Disabled (0x0UL) /*!< Read: Disabled */
#define SAADC_INTENSET_CH2LIMITL_Enabled (0x1UL) /*!< Read: Enabled */
#define SAADC_INTENSET_CH2LIMITL_Set (0x1UL) /*!< Enable */

/* Bit 10 : Write '1' to enable interrupt for event CH2LIMITH */
#define SAADC_INTENSET_CH2LIMITH_Pos (10UL) /*!< Position of CH2LIMITH field. */
#define SAADC_INTENSET_CH2LIMITH_Msk (0x1UL << SAADC_INTENSET_CH2LIMITH_Pos) /*!< Bit mask of CH2LIMITH field. */
#define SAADC_INTENSET_CH2LIMITH_Disabled (0x0UL) /*!< Read: Disabled */
#define SAADC_INTENSET_CH2LIMITH_Enabled (0x1UL) /*!< Read: Enabled */
#define SAADC_INTENSET_CH2LIMITH_Set (0x1UL) /*!< Enable */

/* Bit 9 : Write '1' to enable interrupt for event CH1LIMITL */
#define SAADC_INTENSET_CH1LIMITL_Pos (9UL) /*!< Position of CH1LIMITL field. */
#define SAADC_INTENSET_CH1LIMITL_Msk (0x1UL << SAADC_INTENSET_CH1LIMITL_Pos) /*!< Bit mask of CH1LIMITL field. */
#define SAADC_INTENSET_CH1LIMITL_Disabled (0x0UL) /*!< Read: Disabled */
#define SAADC_INTENSET_CH1LIMITL_Enabled (0x1UL) /*!< Read: Enabled */
#define SAADC_INTENSET_CH1LIMITL_Set (0x1UL) /*!< Enable */

/* Bit 8 : Write '1' to enable interrupt for event CH1LIMITH */
#define SAADC_INTENSET_CH1LIMITH_Pos (8UL) /*!< Position of CH1LIMITH field. */
#define SAADC_INTENSET_CH1LIMITH_Msk (0x1UL << SAADC_INTENSET_CH1LIMITH_Pos) /*!< Bit mask of CH1LIMITH field. */
#define SAADC_INTENSET_CH1LIMITH_Disabled (0x0UL) /*!< Read: Disabled */
#define SAADC_INTENSET_CH1LIMITH_Enabled (0x1UL) /*!< Read: Enabled */
#define SAADC_INTENSET_CH1LIMITH_Set (0x1UL) /*!< Enable */

/* Bit 7 : Write '1' to enable interrupt for event CH0LIMITL */
#define SAADC_INTENSET_CH0LIMITL_Pos (7UL) /*!< Position of CH0LIMITL field. */
#define SAADC_INTENSET_CH0LIMITL_Msk (0x1UL << SAADC_INTENSET_CH0LIMITL_Pos) /*!< Bit mask of CH0LIMITL field. */
#define SAADC_INTENSET_CH0LIMITL_Disabled (0x0UL) /*!< Read: Disabled */
#define SAADC_INTENSET_CH0LIMITL_Enabled (0x1UL) /*!< Read: Enabled */
#define SAADC_INTENSET_CH0LIMITL_Set (0x1UL) /*!< Enable */

/* Bit 6 : Write '1' to enable interrupt for event CH0LIMITH */
#define SAADC_INTENSET_CH0LIMITH_Pos (6UL) /*!< Position of CH0LIMITH field. */
#define SAADC_INTENSET_CH0LIMITH_Msk (0x1UL << SAADC_INTENSET_CH0LIMITH_Pos) /*!< Bit mask of CH0LIMITH field. */
#define SAADC_INTENSET_CH0LIMITH_Disabled (0x0UL) /*!< Read: Disabled */
#define SAADC_INTENSET_CH0LIMITH_Enabled (0x1UL) /*!< Read: Enabled */
#define SAADC_INTENSET_CH0LIMITH_Set (0x1UL) /*!< Enable */

/* Bit 5 : Write '1' to enable interrupt for event STOPPED */
#define SAADC_INTENSET_STOPPED_Pos (5UL) /*!< Position of STOPPED field. */
#define SAADC_INTENSET_STOPPED_Msk (0x1UL << SAADC_INTENSET_STOPPED_Pos) /*!< Bit mask of STOPPED field. */
#define SAADC_INTENSET_STOPPED_Disabled (0x0UL) /*!< Read: Disabled */
#define SAADC_INTENSET_STOPPED_Enabled (0x1UL) /*!< Read: Enabled */
#define SAADC_INTENSET_STOPPED_Set (0x1UL) /*!< Enable */

/* Bit 4 : Write '1' to enable interrupt for event CALIBRATEDONE */
#define SAADC_INTENSET_CALIBRATEDONE_Pos (4UL) /*!< Position of CALIBRATEDONE field. */
#define SAADC_INTENSET_CALIBRATEDONE_Msk (0x1UL << SAADC_INTENSET_CALIBRATEDONE_Pos) /*!< Bit mask of CALIBRATEDONE field. */
#define SAADC_INTENSET_CALIBRATEDONE_Disabled (0x0UL) /*!< Read: Disabled */
#define SAADC_INTENSET_CALIBRATEDONE_Enabled (0x1UL) /*!< Read: Enabled */
#define SAADC_INTENSET_CALIBRATEDONE_Set (0x1UL) /*!< Enable */

/* Bit 3 : Write '1' to enable interrupt for event RESULTDONE */
#define SAADC_INTENSET_RESULTDONE_Pos (3UL) /*!< Position of RESULTDONE field. */
#define SAADC_INTENSET_RESULTDONE_Msk (0x1UL << SAADC_INTENSET_RESULTDONE_Pos) /*!< Bit mask of RESULTDONE field. */
#define SAADC_INTENSET_RESULTDONE_Disabled (0x0UL) /*!< Read: Disabled */
#define SAADC_INTENSET_RESULTDONE_Enabled (0x1UL) /*!< Read: Enabled */
#define SAADC_INTENSET_RESULTDONE_Set (0x1UL) /*!< Enable */

/* Bit 2 : Write '1' to enable interrupt for event DONE */
#define SAADC_INTENSET_DONE_Pos (2UL) /*!< Position of DONE field. */
#define SAADC_INTENSET_DONE_Msk (0x1UL << SAADC_INTENSET_DONE_Pos) /*!< Bit mask of DONE field. */
#define SAADC_INTENSET_DONE_Disabled (0x0UL) /*!< Read: Disabled */
#define SAADC_INTENSET_DONE_Enabled (0x1UL) /*!< Read: Enabled */
#define SAADC_INTENSET_DONE_Set (0x1UL) /*!< Enable */

/* Bit 1 : Write '1' to enable interrupt for event END */
#define SAADC_INTENSET_END_Pos (1UL) /*!< Position of END field. */
#define SAADC_INTENSET_END_Msk (0x1UL << SAADC_INTENSET_END_Pos) /*!< Bit mask of END field. */
#define SAADC_INTENSET_END_Disabled (0x0UL) /*!< Read: Disabled */
#define SAADC_INTENSET_END_Enabled (0x1UL) /*!< Read: Enabled */
#define SAADC_INTENSET_END_Set (0x1UL) /*!< Enable */

/* Bit 0 : Write '1' to enable interrupt for event STARTED */
#define SAADC_INTENSET_STARTED_Pos (0UL) /*!< Position of STARTED field. */
#define SAADC_INTENSET_STARTED_Msk (0x1UL << SAADC_INTENSET_STARTED_Pos) /*!< Bit mask of STARTED field. */
#define SAADC_INTENSET_STARTED_Disabled (0x0UL) /*!< Read: Disabled */
#define SAADC_INTENSET_STARTED_Enabled (0x1UL) /*!< Read: Enabled */
#define SAADC_INTENSET_STARTED_Set (0x1UL) /*!< Enable */

/* Register: SAADC_INTENCLR */
/* Description: Disable interrupt */

/* Bit 22 : Write '1' to disable interrupt for event AHBERROR */
#define SAADC_INTENCLR_AHBERROR_Pos (22UL) /*!< Position of AHBERROR field. */
#define SAADC_INTENCLR_AHBERROR_Msk (0x1UL << SAADC_INTENCLR_AHBERROR_Pos) /*!< Bit mask of AHBERROR field. */
#define SAADC_INTENCLR_AHBERROR_Disabled (0x0UL) /*!< Read: Disabled */
#define SAADC_INTENCLR_AHBERROR_Enabled (0x1UL) /*!< Read: Enabled */
#define SAADC_INTENCLR_AHBERROR_Clear (0x1UL) /*!< Disable */

/* Bit 21 : Write '1' to disable interrupt for event CH7LIMITL */
#define SAADC_INTENCLR_CH7LIMITL_Pos (21UL) /*!< Position of CH7LIMITL field. */
#define SAADC_INTENCLR_CH7LIMITL_Msk (0x1UL << SAADC_INTENCLR_CH7LIMITL_Pos) /*!< Bit mask of CH7LIMITL field. */
#define SAADC_INTENCLR_CH7LIMITL_Disabled (0x0UL) /*!< Read: Disabled */
#define SAADC_INTENCLR_CH7LIMITL_Enabled (0x1UL) /*!< Read: Enabled */
#define SAADC_INTENCLR_CH7LIMITL_Clear (0x1UL) /*!< Disable */

/* Bit 20 : Write '1' to disable interrupt for event CH7LIMITH */
#define SAADC_INTENCLR_CH7LIMITH_Pos (20UL) /*!< Position of CH7LIMITH field. */
#define SAADC_INTENCLR_CH7LIMITH_Msk (0x1UL << SAADC_INTENCLR_CH7LIMITH_Pos) /*!< Bit mask of CH7LIMITH field. */
#define SAADC_INTENCLR_CH7LIMITH_Disabled (0x0UL) /*!< Read: Disabled */
#define SAADC_INTENCLR_CH7LIMITH_Enabled (0x1UL) /*!< Read: Enabled */
#define SAADC_INTENCLR_CH7LIMITH_Clear (0x1UL) /*!< Disable */

/* Bit 19 : Write '1' to disable interrupt for event CH6LIMITL */
#define SAADC_INTENCLR_CH6LIMITL_Pos (19UL) /*!< Position of CH6LIMITL field. */
#define SAADC_INTENCLR_CH6LIMITL_Msk (0x1UL << SAADC_INTENCLR_CH6LIMITL_Pos) /*!< Bit mask of CH6LIMITL field. */
#define SAADC_INTENCLR_CH6LIMITL_Disabled (0x0UL) /*!< Read: Disabled */
#define SAADC_INTENCLR_CH6LIMITL_Enabled (0x1UL) /*!< Read: Enabled */
#define SAADC_INTENCLR_CH6LIMITL_Clear (0x1UL) /*!< Disable */

/* Bit 18 : Write '1' to disable interrupt for event CH6LIMITH */
#define SAADC_INTENCLR_CH6LIMITH_Pos (18UL) /*!< Position of CH6LIMITH field. */
#define SAADC_INTENCLR_CH6LIMITH_Msk (0x1UL << SAADC_INTENCLR_CH6LIMITH_Pos) /*!< Bit mask of CH6LIMITH field. */
#define SAADC_INTENCLR_CH6LIMITH_Disabled (0x0UL) /*!< Read: Disabled */
#define SAADC_INTENCLR_CH6LIMITH_Enabled (0x1UL) /*!< Read: Enabled */
#define SAADC_INTENCLR_CH6LIMITH_Clear (0x1UL) /*!< Disable */

/* Bit 17 : Write '1' to disable interrupt for event CH5LIMITL */
#define SAADC_INTENCLR_CH5LIMITL_Pos (17UL) /*!< Position of CH5LIMITL field. */
#define SAADC_INTENCLR_CH5LIMITL_Msk (0x1UL << SAADC_INTENCLR_CH5LIMITL_Pos) /*!< Bit mask of CH5LIMITL field. */
#define SAADC_INTENCLR_CH5LIMITL_Disabled (0x0UL) /*!< Read: Disabled */
#define SAADC_INTENCLR_CH5LIMITL_Enabled (0x1UL) /*!< Read: Enabled */
#define SAADC_INTENCLR_CH5LIMITL_Clear (0x1UL) /*!< Disable */

/* Bit 16 : Write '1' to disable interrupt for event CH5LIMITH */
#define SAADC_INTENCLR_CH5LIMITH_Pos (16UL) /*!< Position of CH5LIMITH field. */
#define SAADC_INTENCLR_CH5LIMITH_Msk (0x1UL << SAADC_INTENCLR_CH5LIMITH_Pos) /*!< Bit mask of CH5LIMITH field. */
#define SAADC_INTENCLR_CH5LIMITH_Disabled (0x0UL) /*!< Read: Disabled */
#define SAADC_INTENCLR_CH5LIMITH_Enabled (0x1UL) /*!< Read: Enabled */
#define SAADC_INTENCLR_CH5LIMITH_Clear (0x1UL) /*!< Disable */

/* Bit 15 : Write '1' to disable interrupt for event CH4LIMITL */
#define SAADC_INTENCLR_CH4LIMITL_Pos (15UL) /*!< Position of CH4LIMITL field. */
#define SAADC_INTENCLR_CH4LIMITL_Msk (0x1UL << SAADC_INTENCLR_CH4LIMITL_Pos) /*!< Bit mask of CH4LIMITL field. */
#define SAADC_INTENCLR_CH4LIMITL_Disabled (0x0UL) /*!< Read: Disabled */
#define SAADC_INTENCLR_CH4LIMITL_Enabled (0x1UL) /*!< Read: Enabled */
#define SAADC_INTENCLR_CH4LIMITL_Clear (0x1UL) /*!< Disable */

/* Bit 14 : Write '1' to disable interrupt for event CH4LIMITH */
#define SAADC_INTENCLR_CH4LIMITH_Pos (14UL) /*!< Position of CH4LIMITH field. */
#define SAADC_INTENCLR_CH4LIMITH_Msk (0x1UL << SAADC_INTENCLR_CH4LIMITH_Pos) /*!< Bit mask of CH4LIMITH field. */
#define SAADC_INTENCLR_CH4LIMITH_Disabled (0x0UL) /*!< Read: Disabled */
#define SAADC_INTENCLR_CH4LIMITH_Enabled (0x1UL) /*!< Read: Enabled */
#define SAADC_INTENCLR_CH4LIMITH_Clear (0x1UL) /*!< Disable */

/* Bit 13 : Write '1' to disable interrupt for event CH3LIMITL */
#define SAADC_INTENCLR_CH3LIMITL_Pos (13UL) /*!< Position of CH3LIMITL field. */
#define SAADC_INTENCLR_CH3LIMITL_Msk (0x1UL << SAADC_INTENCLR_CH3LIMITL_Pos) /*!< Bit mask of CH3LIMITL field. */
#define SAADC_INTENCLR_CH3LIMITL_Disabled (0x0UL) /*!< Read: Disabled */
#define SAADC_INTENCLR_CH3LIMITL_Enabled (0x1UL) /*!< Read: Enabled */
#define SAADC_INTENCLR_CH3LIMITL_Clear (0x1UL) /*!< Disable */

/* Bit 12 : Write '1' to disable interrupt for event CH3LIMITH */
#define SAADC_INTENCLR_CH3LIMITH_Pos (12UL) /*!< Position of CH3LIMITH field. */
#define SAADC_INTENCLR_CH3LIMITH_Msk (0x1UL << SAADC_INTENCLR_CH3LIMITH_Pos) /*!< Bit mask of CH3LIMITH field. */
#define SAADC_INTENCLR_CH3LIMITH_Disabled (0x0UL) /*!< Read: Disabled */
#define SAADC_INTENCLR_CH3LIMITH_Enabled (0x1UL) /*!< Read: Enabled */
#define SAADC_INTENCLR_CH3LIMITH_Clear (0x1UL) /*!< Disable */

/* Bit 11 : Write '1' to disable interrupt for event CH2LIMITL */
#define SAADC_INTENCLR_CH2LIMITL_Pos (11UL) /*!< Position of CH2LIMITL field. */
#define SAADC_INTENCLR_CH2LIMITL_Msk (0x1UL << SAADC_INTENCLR_CH2LIMITL_Pos) /*!< Bit mask of CH2LIMITL field. */
#define SAADC_INTENCLR_CH2LIMITL_Disabled (0x0UL) /*!< Read: Disabled */
#define SAADC_INTENCLR_CH2LIMITL_Enabled (0x1UL) /*!< Read: Enabled */
#define SAADC_INTENCLR_CH2LIMITL_Clear (0x1UL) /*!< Disable */

/* Bit 10 : Write '1' to disable interrupt for event CH2LIMITH */
#define SAADC_INTENCLR_CH2LIMITH_Pos (10UL) /*!< Position of CH2LIMITH field. */
#define SAADC_INTENCLR_CH2LIMITH_Msk (0x1UL << SAADC_INTENCLR_CH2LIMITH_Pos) /*!< Bit mask of CH2LIMITH field. */
#define SAADC_INTENCLR_CH2LIMITH_Disabled (0x0UL) /*!< Read: Disabled */
#define SAADC_INTENCLR_CH2LIMITH_Enabled (0x1UL) /*!< Read: Enabled */
#define SAADC_INTENCLR_CH2LIMITH_Clear (0x1UL) /*!< Disable */

/* Bit 9 : Write '1' to disable interrupt for event CH1LIMITL */
#define SAADC_INTENCLR_CH1LIMITL_Pos (9UL) /*!< Position of CH1LIMITL field. */
#define SAADC_INTENCLR_CH1LIMITL_Msk (0x1UL << SAADC_INTENCLR_CH1LIMITL_Pos) /*!< Bit mask of CH1LIMITL field. */
#define SAADC_INTENCLR_CH1LIMITL_Disabled (0x0UL) /*!< Read: Disabled */
#define SAADC_INTENCLR_CH1LIMITL_Enabled (0x1UL) /*!< Read: Enabled */
#define SAADC_INTENCLR_CH1LIMITL_Clear (0x1UL) /*!< Disable */

/* Bit 8 : Write '1' to disable interrupt for event CH1LIMITH */
#define SAADC_INTENCLR_CH1LIMITH_Pos (8UL) /*!< Position of CH1LIMITH field. */
#define SAADC_INTENCLR_CH1LIMITH_Msk (0x1UL << SAADC_INTENCLR_CH1LIMITH_Pos) /*!< Bit mask of CH1LIMITH field. */
#define SAADC_INTENCLR_CH1LIMITH_Disabled (0x0UL) /*!< Read: Disabled */
#define SAADC_INTENCLR_CH1LIMITH_Enabled (0x1UL) /*!< Read: Enabled */
#define SAADC_INTENCLR_CH1LIMITH_Clear (0x1UL) /*!< Disable */

/* Bit 7 : Write '1' to disable interrupt for event CH0LIMITL */
#define SAADC_INTENCLR_CH0LIMITL_Pos (7UL) /*!< Position of CH0LIMITL field. */
#define SAADC_INTENCLR_CH0LIMITL_Msk (0x1UL << SAADC_INTENCLR_CH0LIMITL_Pos) /*!< Bit mask of CH0LIMITL field. */
#define SAADC_INTENCLR_CH0LIMITL_Disabled (0x0UL) /*!< Read: Disabled */
#define SAADC_INTENCLR_CH0LIMITL_Enabled (0x1UL) /*!< Read: Enabled */
#define SAADC_INTENCLR_CH0LIMITL_Clear (0x1UL) /*!< Disable */

/* Bit 6 : Write '1' to disable interrupt for event CH0LIMITH */
#define SAADC_INTENCLR_CH0LIMITH_Pos (6UL) /*!< Position of CH0LIMITH field. */
#define SAADC_INTENCLR_CH0LIMITH_Msk (0x1UL << SAADC_INTENCLR_CH0LIMITH_Pos) /*!< Bit mask of CH0LIMITH field. */
#define SAADC_INTENCLR_CH0LIMITH_Disabled (0x0UL) /*!< Read: Disabled */
#define SAADC_INTENCLR_CH0LIMITH_Enabled (0x1UL) /*!< Read: Enabled */
#define SAADC_INTENCLR_CH0LIMITH_Clear (0x1UL) /*!< Disable */

/* Bit 5 : Write '1' to disable interrupt for event STOPPED */
#define SAADC_INTENCLR_STOPPED_Pos (5UL) /*!< Position of STOPPED field. */
#define SAADC_INTENCLR_STOPPED_Msk (0x1UL << SAADC_INTENCLR_STOPPED_Pos) /*!< Bit mask of STOPPED field. */
#define SAADC_INTENCLR_STOPPED_Disabled (0x0UL) /*!< Read: Disabled */
#define SAADC_INTENCLR_STOPPED_Enabled (0x1UL) /*!< Read: Enabled */
#define SAADC_INTENCLR_STOPPED_Clear (0x1UL) /*!< Disable */

/* Bit 4 : Write '1' to disable interrupt for event CALIBRATEDONE */
#define SAADC_INTENCLR_CALIBRATEDONE_Pos (4UL) /*!< Position of CALIBRATEDONE field. */
#define SAADC_INTENCLR_CALIBRATEDONE_Msk (0x1UL << SAADC_INTENCLR_CALIBRATEDONE_Pos) /*!< Bit mask of CALIBRATEDONE field. */
#define SAADC_INTENCLR_CALIBRATEDONE_Disabled (0x0UL) /*!< Read: Disabled */
#define SAADC_INTENCLR_CALIBRATEDONE_Enabled (0x1UL) /*!< Read: Enabled */
#define SAADC_INTENCLR_CALIBRATEDONE_Clear (0x1UL) /*!< Disable */

/* Bit 3 : Write '1' to disable interrupt for event RESULTDONE */
#define SAADC_INTENCLR_RESULTDONE_Pos (3UL) /*!< Position of RESULTDONE field. */
#define SAADC_INTENCLR_RESULTDONE_Msk (0x1UL << SAADC_INTENCLR_RESULTDONE_Pos) /*!< Bit mask of RESULTDONE field. */
#define SAADC_INTENCLR_RESULTDONE_Disabled (0x0UL) /*!< Read: Disabled */
#define SAADC_INTENCLR_RESULTDONE_Enabled (0x1UL) /*!< Read: Enabled */
#define SAADC_INTENCLR_RESULTDONE_Clear (0x1UL) /*!< Disable */

/* Bit 2 : Write '1' to disable interrupt for event DONE */
#define SAADC_INTENCLR_DONE_Pos (2UL) /*!< Position of DONE field. */
#define SAADC_INTENCLR_DONE_Msk (0x1UL << SAADC_INTENCLR_DONE_Pos) /*!< Bit mask of DONE field. */
#define SAADC_INTENCLR_DONE_Disabled (0x0UL) /*!< Read: Disabled */
#define SAADC_INTENCLR_DONE_Enabled (0x1UL) /*!< Read: Enabled */
#define SAADC_INTENCLR_DONE_Clear (0x1UL) /*!< Disable */

/* Bit 1 : Write '1' to disable interrupt for event END */
#define SAADC_INTENCLR_END_Pos (1UL) /*!< Position of END field. */
#define SAADC_INTENCLR_END_Msk (0x1UL << SAADC_INTENCLR_END_Pos) /*!< Bit mask of END field. */
#define SAADC_INTENCLR_END_Disabled (0x0UL) /*!< Read: Disabled */
#define SAADC_INTENCLR_END_Enabled (0x1UL) /*!< Read: Enabled */
#define SAADC_INTENCLR_END_Clear (0x1UL) /*!< Disable */

/* Bit 0 : Write '1' to disable interrupt for event STARTED */
#define SAADC_INTENCLR_STARTED_Pos (0UL) /*!< Position of STARTED field. */
#define SAADC_INTENCLR_STARTED_Msk (0x1UL << SAADC_INTENCLR_STARTED_Pos) /*!< Bit mask of STARTED field. */
#define SAADC_INTENCLR_STARTED_Disabled (0x0UL) /*!< Read: Disabled */
#define SAADC_INTENCLR_STARTED_Enabled (0x1UL) /*!< Read: Enabled */
#define SAADC_INTENCLR_STARTED_Clear (0x1UL) /*!< Disable */

/* Register: SAADC_STATUS */
/* Description: Status */

/* Bit 0 : Status */
#define SAADC_STATUS_STATUS_Pos (0UL) /*!< Position of STATUS field. */
#define SAADC_STATUS_STATUS_Msk (0x1UL << SAADC_STATUS_STATUS_Pos) /*!< Bit mask of STATUS field. */
#define SAADC_STATUS_STATUS_Ready (0x0UL) /*!< ADC is ready. No on-going conversion. */
#define SAADC_STATUS_STATUS_Busy (0x1UL) /*!< ADC is busy. Single conversion in progress. */

/* Register: SAADC_ENABLE */
/* Description: Enable or disable ADC */

/* Bit 0 : Enable or disable ADC */
#define SAADC_ENABLE_ENABLE_Pos (0UL) /*!< Position of ENABLE field. */
#define SAADC_ENABLE_ENABLE_Msk (0x1UL << SAADC_ENABLE_ENABLE_Pos) /*!< Bit mask of ENABLE field. */
#define SAADC_ENABLE_ENABLE_Disabled (0x0UL) /*!< Disable ADC */
#define SAADC_ENABLE_ENABLE_Enabled (0x1UL) /*!< Enable ADC */

/* Register: SAADC_CH_PSELP */
/* Description: Description cluster: Input positive pin selection for CH[n] */

/* Bits 4..0 : Analog positive input channel */
#define SAADC_CH_PSELP_PSELP_Pos (0UL) /*!< Position of PSELP field. */
#define SAADC_CH_PSELP_PSELP_Msk (0x1FUL << SAADC_CH_PSELP_PSELP_Pos) /*!< Bit mask of PSELP field. */
#define SAADC_CH_PSELP_PSELP_NC (0x00UL) /*!< Not connected */
#define SAADC_CH_PSELP_PSELP_AnalogInput0 (0x01UL) /*!< AIN0 */
#define SAADC_CH_PSELP_PSELP_AnalogInput1 (0x02UL) /*!< AIN1 */
#define SAADC_CH_PSELP_PSELP_AnalogInput2 (0x03UL) /*!< AIN2 */
#define SAADC_CH_PSELP_PSELP_AnalogInput3 (0x04UL) /*!< AIN3 */
#define SAADC_CH_PSELP_PSELP_AnalogInput4 (0x05UL) /*!< AIN4 */
#define SAADC_CH_PSELP_PSELP_AnalogInput5 (0x06UL) /*!< AIN5 */
#define SAADC_CH_PSELP_PSELP_AnalogInput6 (0x07UL) /*!< AIN6 */
#define SAADC_CH_PSELP_PSELP_AnalogInput7 (0x08UL) /*!< AIN7 */
#define SAADC_CH_PSELP_PSELP_ATB0 (0x09UL) /*!< ATB0 */
#define SAADC_CH_PSELP_PSELP_ATB1 (0x0AUL) /*!< ATB1 */
#define SAADC_CH_PSELP_PSELP_VDDTest0 (0x0BUL) /*!< Connected to VDD_AO_1V8 */
#define SAADC_CH_PSELP_PSELP_VDDTest1 (0x0CUL) /*!< Connected to VDD_AO_0V8 */
#define SAADC_CH_PSELP_PSELP_VDDTest2 (0x0DUL) /*!< Connected to VDD_IO_1V2 */
#define SAADC_CH_PSELP_PSELP_VDDTest3 (0x0EUL) /*!< Connected to VDD_1V0 */
#define SAADC_CH_PSELP_PSELP_AVSS (0x0FUL) /*!< AVSS */
#define SAADC_CH_PSELP_PSELP_SELREF (0x10UL) /*!< Selected reference, voltage determined by PADC_REFSEL */

/* Register: SAADC_CH_PSELN */
/* Description: Description cluster: Input negative pin selection for CH[n] */

/* Bits 4..0 : Analog negative input, enables differential channel */
#define SAADC_CH_PSELN_PSELN_Pos (0UL) /*!< Position of PSELN field. */
#define SAADC_CH_PSELN_PSELN_Msk (0x1FUL << SAADC_CH_PSELN_PSELN_Pos) /*!< Bit mask of PSELN field. */
#define SAADC_CH_PSELN_PSELN_NC (0x00UL) /*!< Not connected */
#define SAADC_CH_PSELN_PSELN_AnalogInput0 (0x01UL) /*!< AIN0 */
#define SAADC_CH_PSELN_PSELN_AnalogInput1 (0x02UL) /*!< AIN1 */
#define SAADC_CH_PSELN_PSELN_AnalogInput2 (0x03UL) /*!< AIN2 */
#define SAADC_CH_PSELN_PSELN_AnalogInput3 (0x04UL) /*!< AIN3 */
#define SAADC_CH_PSELN_PSELN_AnalogInput4 (0x05UL) /*!< AIN4 */
#define SAADC_CH_PSELN_PSELN_AnalogInput5 (0x06UL) /*!< AIN5 */
#define SAADC_CH_PSELN_PSELN_AnalogInput6 (0x07UL) /*!< AIN6 */
#define SAADC_CH_PSELN_PSELN_AnalogInput7 (0x08UL) /*!< AIN7 */
#define SAADC_CH_PSELN_PSELN_ATB0 (0x09UL) /*!< ATB0 */
#define SAADC_CH_PSELN_PSELN_ATB1 (0x0AUL) /*!< ATB1 */
#define SAADC_CH_PSELN_PSELN_VDDTest4 (0x0BUL) /*!< Reserved for VDD_PPA_1V6 (Halti only) */
#define SAADC_CH_PSELN_PSELN_VDDTest5 (0x0CUL) /*!< Reserved for VDD_IO_3V3 */
#define SAADC_CH_PSELN_PSELN_VDDTest6 (0x0DUL) /*!< Reserved for VDD_AO_5V0 */
#define SAADC_CH_PSELN_PSELN_VDDTest7 (0x0EUL) /*!< RFU */
#define SAADC_CH_PSELN_PSELN_AVSS (0x0FUL) /*!< AVSS */
#define SAADC_CH_PSELN_PSELN_SELREF (0x10UL) /*!< Selected reference, voltage determined by PADC_REFSEL */

/* Register: SAADC_CH_CONFIG */
/* Description: Description cluster: Input configuration for CH[n] */

/* Bits 30..28 : Conversion time. Resulting conversion time is ((TCONV+1) x 250 ns) */
#define SAADC_CH_CONFIG_TCONV_Pos (28UL) /*!< Position of TCONV field. */
#define SAADC_CH_CONFIG_TCONV_Msk (0x7UL << SAADC_CH_CONFIG_TCONV_Pos) /*!< Bit mask of TCONV field. */

/* Bits 24..16 : Acquisition time, the time the ADC uses to sample the input voltage. Resulting acquistion time is ((TACQ+1) x 125 ns) */
#define SAADC_CH_CONFIG_TACQ_Pos (16UL) /*!< Position of TACQ field. */
#define SAADC_CH_CONFIG_TACQ_Msk (0x1FFUL << SAADC_CH_CONFIG_TACQ_Pos) /*!< Bit mask of TACQ field. */

/* Bit 15 : Enable differential mode */
#define SAADC_CH_CONFIG_MODE_Pos (15UL) /*!< Position of MODE field. */
#define SAADC_CH_CONFIG_MODE_Msk (0x1UL << SAADC_CH_CONFIG_MODE_Pos) /*!< Bit mask of MODE field. */
#define SAADC_CH_CONFIG_MODE_SE (0x0UL) /*!< Single ended, PSELN will be ignored, negative input to ADC shorted to GND */
#define SAADC_CH_CONFIG_MODE_Diff (0x1UL) /*!< Differential */

/* Bits 13..12 : Reference control */
#define SAADC_CH_CONFIG_REFSEL_Pos (12UL) /*!< Position of REFSEL field. */
#define SAADC_CH_CONFIG_REFSEL_Msk (0x3UL << SAADC_CH_CONFIG_REFSEL_Pos) /*!< Bit mask of REFSEL field. */
#define SAADC_CH_CONFIG_REFSEL_Internal (0x0UL) /*!< Internal reference (1.024 V) */
#define SAADC_CH_CONFIG_REFSEL_External (0x1UL) /*!< External reference given at PADC_EXT_REF_1V2 */
#define SAADC_CH_CONFIG_REFSEL_IBPSR4UPADC (0x2UL) /*!< Reference generated by IBPSR_4U_PADC */

/* Bit 11 : Enable burst mode */
#define SAADC_CH_CONFIG_BURST_Pos (11UL) /*!< Position of BURST field. */
#define SAADC_CH_CONFIG_BURST_Msk (0x1UL << SAADC_CH_CONFIG_BURST_Pos) /*!< Bit mask of BURST field. */
#define SAADC_CH_CONFIG_BURST_Disabled (0x0UL) /*!< Burst mode is disabled (normal operation) */
#define SAADC_CH_CONFIG_BURST_Enabled (0x1UL) /*!< Burst mode is enabled. SAADC takes 2^OVERSAMPLE number of samples as fast as it can, and sends the average to Data RAM. */

/* Bits 10..8 : Gain control */
#define SAADC_CH_CONFIG_GAIN_Pos (8UL) /*!< Position of GAIN field. */
#define SAADC_CH_CONFIG_GAIN_Msk (0x7UL << SAADC_CH_CONFIG_GAIN_Pos) /*!< Bit mask of GAIN field. */
#define SAADC_CH_CONFIG_GAIN_Gain2_3 (0x0UL) /*!< 2/3 */
#define SAADC_CH_CONFIG_GAIN_Gain1 (0x1UL) /*!< 1 */
#define SAADC_CH_CONFIG_GAIN_Gain2 (0x2UL) /*!< 2 */
#define SAADC_CH_CONFIG_GAIN_Gain4 (0x3UL) /*!< 4 */

/* Bits 5..4 : Negative channel resistor control */
#define SAADC_CH_CONFIG_RESN_Pos (4UL) /*!< Position of RESN field. */
#define SAADC_CH_CONFIG_RESN_Msk (0x3UL << SAADC_CH_CONFIG_RESN_Pos) /*!< Bit mask of RESN field. */
#define SAADC_CH_CONFIG_RESN_Bypass (0x0UL) /*!< Bypass resistor ladder */
#define SAADC_CH_CONFIG_RESN_Pulldown (0x1UL) /*!< Pull-down to GND */
#define SAADC_CH_CONFIG_RESN_Pullup (0x2UL) /*!< Pull-up to VDD_AO_1V8 */
#define SAADC_CH_CONFIG_RESN_VDDAO1V8div2 (0x3UL) /*!< Set input at VDD_AO_1V8/2 */

/* Bits 1..0 : Positive channel resistor control */
#define SAADC_CH_CONFIG_RESP_Pos (0UL) /*!< Position of RESP field. */
#define SAADC_CH_CONFIG_RESP_Msk (0x3UL << SAADC_CH_CONFIG_RESP_Pos) /*!< Bit mask of RESP field. */
#define SAADC_CH_CONFIG_RESP_Bypass (0x0UL) /*!< Bypass resistor ladder */
#define SAADC_CH_CONFIG_RESP_Pulldown (0x1UL) /*!< Pull-down to GND */
#define SAADC_CH_CONFIG_RESP_Pullup (0x2UL) /*!< Pull-up to VDD_AO_1V8 */
#define SAADC_CH_CONFIG_RESP_VDDAO1V8div2 (0x3UL) /*!< Set input at VDD_AO_1V8/2 */

/* Register: SAADC_CH_LIMIT */
/* Description: Description cluster: High/low limits for event monitoring a channel */

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
#define SAADC_RESOLUTION_VAL_8bit (0x0UL) /*!< 8 bit */
#define SAADC_RESOLUTION_VAL_10bit (0x1UL) /*!< 10 bit */
#define SAADC_RESOLUTION_VAL_12bit (0x2UL) /*!< 12 bit */
#define SAADC_RESOLUTION_VAL_14bit (0x3UL) /*!< 14 bit */
#define SAADC_RESOLUTION_VAL_16bit (0x4UL) /*!< 16 bit */

/* Register: SAADC_OVERSAMPLE */
/* Description: Oversampling configuration. OVERSAMPLE should not be combined with SCAN. The RESOLUTION is applied before averaging, thus for high OVERSAMPLE a higher RESOLUTION should be used. */

/* Bits 3..0 : Oversample control */
#define SAADC_OVERSAMPLE_OVERSAMPLE_Pos (0UL) /*!< Position of OVERSAMPLE field. */
#define SAADC_OVERSAMPLE_OVERSAMPLE_Msk (0xFUL << SAADC_OVERSAMPLE_OVERSAMPLE_Pos) /*!< Bit mask of OVERSAMPLE field. */
#define SAADC_OVERSAMPLE_OVERSAMPLE_Bypass (0x0UL) /*!< Bypass oversampling */
#define SAADC_OVERSAMPLE_OVERSAMPLE_Over2x (0x1UL) /*!< Oversample 2x */
#define SAADC_OVERSAMPLE_OVERSAMPLE_Over4x (0x2UL) /*!< Oversample 4x */
#define SAADC_OVERSAMPLE_OVERSAMPLE_Over8x (0x3UL) /*!< Oversample 8x */
#define SAADC_OVERSAMPLE_OVERSAMPLE_Over16x (0x4UL) /*!< Oversample 16x */
#define SAADC_OVERSAMPLE_OVERSAMPLE_Over32x (0x5UL) /*!< Oversample 32x */
#define SAADC_OVERSAMPLE_OVERSAMPLE_Over64x (0x6UL) /*!< Oversample 64x */
#define SAADC_OVERSAMPLE_OVERSAMPLE_Over128x (0x7UL) /*!< Oversample 128x */
#define SAADC_OVERSAMPLE_OVERSAMPLE_Over256x (0x8UL) /*!< Oversample 256x */
#define SAADC_OVERSAMPLE_OVERSAMPLE_Over512x (0x9UL) /*!< Oversample 512x */
#define SAADC_OVERSAMPLE_OVERSAMPLE_Over1024x (0xAUL) /*!< Oversample 1024x */
#define SAADC_OVERSAMPLE_OVERSAMPLE_Over2048x (0xBUL) /*!< Oversample 2048x */
#define SAADC_OVERSAMPLE_OVERSAMPLE_Over4096x (0xCUL) /*!< Oversample 4096x */

/* Register: SAADC_SAMPLERATE */
/* Description: Controls normal or continuous sample rate */

/* Bit 12 : Select mode for sample rate control */
#define SAADC_SAMPLERATE_MODE_Pos (12UL) /*!< Position of MODE field. */
#define SAADC_SAMPLERATE_MODE_Msk (0x1UL << SAADC_SAMPLERATE_MODE_Pos) /*!< Bit mask of MODE field. */
#define SAADC_SAMPLERATE_MODE_Task (0x0UL) /*!< Rate is controlled from SAMPLE task */
#define SAADC_SAMPLERATE_MODE_Timers (0x1UL) /*!< Rate is controlled from local timer (use CC to control the rate) */

/* Bits 10..0 : Capture and compare value. Sample rate is 16 MHz/CC */
#define SAADC_SAMPLERATE_CC_Pos (0UL) /*!< Position of CC field. */
#define SAADC_SAMPLERATE_CC_Msk (0x7FFUL << SAADC_SAMPLERATE_CC_Pos) /*!< Bit mask of CC field. */

/* Register: SAADC_TESTBUS */
/* Description: Testbus control. See design description for coding. */

/* Bits 23..20 : Digital testbus control 1 */
#define SAADC_TESTBUS_DTB1_Pos (20UL) /*!< Position of DTB1 field. */
#define SAADC_TESTBUS_DTB1_Msk (0xFUL << SAADC_TESTBUS_DTB1_Pos) /*!< Bit mask of DTB1 field. */

/* Bits 19..16 : Digital testbus control 0 */
#define SAADC_TESTBUS_DTB0_Pos (16UL) /*!< Position of DTB0 field. */
#define SAADC_TESTBUS_DTB0_Msk (0xFUL << SAADC_TESTBUS_DTB0_Pos) /*!< Bit mask of DTB0 field. */

/* Bit 8 : Analog testbus control 2 */
#define SAADC_TESTBUS_ATB2_Pos (8UL) /*!< Position of ATB2 field. */
#define SAADC_TESTBUS_ATB2_Msk (0x1UL << SAADC_TESTBUS_ATB2_Pos) /*!< Bit mask of ATB2 field. */

/* Bits 7..4 : Analog testbus control 1 */
#define SAADC_TESTBUS_ATB1_Pos (4UL) /*!< Position of ATB1 field. */
#define SAADC_TESTBUS_ATB1_Msk (0xFUL << SAADC_TESTBUS_ATB1_Pos) /*!< Bit mask of ATB1 field. */

/* Bits 3..0 : Analog testbus control 0 */
#define SAADC_TESTBUS_ATB0_Pos (0UL) /*!< Position of ATB0 field. */
#define SAADC_TESTBUS_ATB0_Msk (0xFUL << SAADC_TESTBUS_ATB0_Pos) /*!< Bit mask of ATB0 field. */

/* Register: SAADC_RESULT_PTR */
/* Description: Data pointer */

/* Bits 31..0 : Data pointer */
#define SAADC_RESULT_PTR_PTR_Pos (0UL) /*!< Position of PTR field. */
#define SAADC_RESULT_PTR_PTR_Msk (0xFFFFFFFFUL << SAADC_RESULT_PTR_PTR_Pos) /*!< Bit mask of PTR field. */

/* Register: SAADC_RESULT_MAXCNT */
/* Description: Maximum number of buffer bytes to transfer */

/* Bits 14..0 : Maximum number of buffer bytes to transfer */
#define SAADC_RESULT_MAXCNT_MAXCNT_Pos (0UL) /*!< Position of MAXCNT field. */
#define SAADC_RESULT_MAXCNT_MAXCNT_Msk (0x7FFFUL << SAADC_RESULT_MAXCNT_MAXCNT_Pos) /*!< Bit mask of MAXCNT field. */

/* Register: SAADC_RESULT_AMOUNT */
/* Description: Number of buffer bytes transferred since last START */

/* Bits 14..0 : Number of buffer bytes transferred since last START. This register can be read after an END or STOPPED event. */
#define SAADC_RESULT_AMOUNT_AMOUNT_Pos (0UL) /*!< Position of AMOUNT field. */
#define SAADC_RESULT_AMOUNT_AMOUNT_Msk (0x7FFFUL << SAADC_RESULT_AMOUNT_AMOUNT_Pos) /*!< Bit mask of AMOUNT field. */

/* Register: SAADC_TESTCTRL */
/* Description: Control signals used during test of ADC */

/* Bits 29..28 : Power-up time */
#define SAADC_TESTCTRL_PWRUP_Pos (28UL) /*!< Position of PWRUP field. */
#define SAADC_TESTCTRL_PWRUP_Msk (0x3UL << SAADC_TESTCTRL_PWRUP_Pos) /*!< Bit mask of PWRUP field. */
#define SAADC_TESTCTRL_PWRUP_6us (0x0UL) /*!< 6 us */
#define SAADC_TESTCTRL_PWRUP_10us (0x1UL) /*!< 10 us */
#define SAADC_TESTCTRL_PWRUP_15us (0x2UL) /*!< 15 us */
#define SAADC_TESTCTRL_PWRUP_20us (0x3UL) /*!< 20 us */

/* Bit 24 : Will enable the input mux in the ADC, so the resistor strings can be connected even when the analog core is powered down. See design description for coding */
#define SAADC_TESTCTRL_ENINMUX_Pos (24UL) /*!< Position of ENINMUX field. */
#define SAADC_TESTCTRL_ENINMUX_Msk (0x1UL << SAADC_TESTCTRL_ENINMUX_Pos) /*!< Bit mask of ENINMUX field. */

/* Bits 16..12 : Test bus for ADC core. See design description for coding */
#define SAADC_TESTCTRL_TST_Pos (12UL) /*!< Position of TST field. */
#define SAADC_TESTCTRL_TST_Msk (0x1FUL << SAADC_TESTCTRL_TST_Pos) /*!< Bit mask of TST field. */

/* Bit 8 : Short input. Used to measure offset of ADC. See design description for coding */
#define SAADC_TESTCTRL_SHORT_Pos (8UL) /*!< Position of SHORT field. */
#define SAADC_TESTCTRL_SHORT_Msk (0x1UL << SAADC_TESTCTRL_SHORT_Pos) /*!< Bit mask of SHORT field. */

/* Bit 4 : Swap positive and negative input. See design description for coding */
#define SAADC_TESTCTRL_SWITCH_Pos (4UL) /*!< Position of SWITCH field. */
#define SAADC_TESTCTRL_SWITCH_Msk (0x1UL << SAADC_TESTCTRL_SWITCH_Pos) /*!< Bit mask of SWITCH field. */

/* Bits 3..0 : Current control. See design description for coding */
#define SAADC_TESTCTRL_ICTRL_Pos (0UL) /*!< Position of ICTRL field. */
#define SAADC_TESTCTRL_ICTRL_Msk (0xFUL << SAADC_TESTCTRL_ICTRL_Pos) /*!< Bit mask of ICTRL field. */

/* Register: SAADC_CALOFFSET */
/* Description: Calibration control for offset error */

/* Bits 5..0 : Sign-magnitude coding */
#define SAADC_CALOFFSET_CALOFFSET_Pos (0UL) /*!< Position of CALOFFSET field. */
#define SAADC_CALOFFSET_CALOFFSET_Msk (0x3FUL << SAADC_CALOFFSET_CALOFFSET_Pos) /*!< Bit mask of CALOFFSET field. */
#define SAADC_CALOFFSET_CALOFFSET_Default (0x00UL) /*!< Default setting */
#define SAADC_CALOFFSET_CALOFFSET_MaxPos (0x1FUL) /*!< Maximum positive offset */
#define SAADC_CALOFFSET_CALOFFSET_MaxNeg (0x20UL) /*!< maximum negative offset */

/* Register: SAADC_CALGAIN */
/* Description: Calibration control for gain error */

/* Bits 6..0 : Offset binary coding */
#define SAADC_CALGAIN_CALGAIN_Pos (0UL) /*!< Position of CALGAIN field. */
#define SAADC_CALGAIN_CALGAIN_Msk (0x7FUL << SAADC_CALGAIN_CALGAIN_Pos) /*!< Bit mask of CALGAIN field. */
#define SAADC_CALGAIN_CALGAIN_Default (0x00UL) /*!< Default gain, for +1/2 input (assume full-scale = +-1) the output will be 1024 */
#define SAADC_CALGAIN_CALGAIN_High (0x3FUL) /*!< High gain setting */
#define SAADC_CALGAIN_CALGAIN_Low (0x40UL) /*!< Low gain setting */

/* Register: SAADC_CALVREF */
/* Description: Calibration control for reference voltage */

/* Bits 6..0 : Offset binary coding */
#define SAADC_CALVREF_CALVREF_Pos (0UL) /*!< Position of CALVREF field. */
#define SAADC_CALVREF_CALVREF_Msk (0x7FUL << SAADC_CALVREF_CALVREF_Pos) /*!< Bit mask of CALVREF field. */
#define SAADC_CALVREF_CALVREF_Default (0x00UL) /*!< Default vref, in typical corner VREF=1.2V */
#define SAADC_CALVREF_CALVREF_High (0x3FUL) /*!< Low output code (high reference voltage) */
#define SAADC_CALVREF_CALVREF_Low (0x40UL) /*!< High output code (low reference voltage) */

/* Register: SAADC_CALIREF */
/* Description: Calibration control for reference current */

/* Bits 3..0 : Calibration control for reference current. See design description for coding */
#define SAADC_CALIREF_CALIREF_Pos (0UL) /*!< Position of CALIREF field. */
#define SAADC_CALIREF_CALIREF_Msk (0xFUL << SAADC_CALIREF_CALIREF_Pos) /*!< Bit mask of CALIREF field. */

/* Register: SAADC_CALVREFTC */
/* Description: Calibration code for reference temperature coefficient */

/* Bits 2..0 : Calibration code for reference temperature coefficient. See design description for coding */
#define SAADC_CALVREFTC_CALVREFTC_Pos (0UL) /*!< Position of CALVREFTC field. */
#define SAADC_CALVREFTC_CALVREFTC_Msk (0x7UL << SAADC_CALVREFTC_CALVREFTC_Pos) /*!< Bit mask of CALVREFTC field. */

/* Register: SAADC_NOISESHAPE */
/* Description: Enable noise shaping */

/* Bits 1..0 : Enable noise shaping */
#define SAADC_NOISESHAPE_NOISESHAPE_Pos (0UL) /*!< Position of NOISESHAPE field. */
#define SAADC_NOISESHAPE_NOISESHAPE_Msk (0x3UL << SAADC_NOISESHAPE_NOISESHAPE_Pos) /*!< Bit mask of NOISESHAPE field. */
#define SAADC_NOISESHAPE_NOISESHAPE_Disable (0x0UL) /*!< Oversampling based on accumulate and average. Used in high-speed mode (10-bit) */
#define SAADC_NOISESHAPE_NOISESHAPE_Enable (0x1UL) /*!< Oversampling based on noise shaping. Used in  high-accuracy modes (12-bit and 14-bit) */

/* Register: SAADC_EASYDMAMODE */
/* Description: Configure EasyDMA mode. */

/* Bit 0 : Enable low-power operation, or use low-latency */
#define SAADC_EASYDMAMODE_LPOP_Pos (0UL) /*!< Position of LPOP field. */
#define SAADC_EASYDMAMODE_LPOP_Msk (0x1UL << SAADC_EASYDMAMODE_LPOP_Pos) /*!< Bit mask of LPOP field. */
#define SAADC_EASYDMAMODE_LPOP_LowLat (0x0UL) /*!< Low-latency operation */
#define SAADC_EASYDMAMODE_LPOP_LowPower (0x1UL) /*!< Low-power operation */

/* Register: SAADC_TERMINATEONAHBERROR */
/* Description: Enable EasyDMA termination on AHB error */

/* Bit 0 : Enable termination on AHB error */
#define SAADC_TERMINATEONAHBERROR_ENABLE_Pos (0UL) /*!< Position of ENABLE field. */
#define SAADC_TERMINATEONAHBERROR_ENABLE_Msk (0x1UL << SAADC_TERMINATEONAHBERROR_ENABLE_Pos) /*!< Bit mask of ENABLE field. */
#define SAADC_TERMINATEONAHBERROR_ENABLE_Disabled (0x0UL) /*!< Termination on AHB error disabled */
#define SAADC_TERMINATEONAHBERROR_ENABLE_Enabled (0x1UL) /*!< Termination on AHB error enabled */

/* Register: SAADC_AHBERRORADDRESS */
/* Description: Address of the last AHB error transaction */

/* Bits 31..0 : Address */
#define SAADC_AHBERRORADDRESS_ADDRESS_Pos (0UL) /*!< Position of ADDRESS field. */
#define SAADC_AHBERRORADDRESS_ADDRESS_Msk (0xFFFFFFFFUL << SAADC_AHBERRORADDRESS_ADDRESS_Pos) /*!< Bit mask of ADDRESS field. */


/* Peripheral: TEMP */
/* Description: Temperature Sensor */

/* Register: TEMP_TASKS_START */
/* Description: Start temperature measurement */

/* Bit 0 : Start temperature measurement */
#define TEMP_TASKS_START_TASKS_START_Pos (0UL) /*!< Position of TASKS_START field. */
#define TEMP_TASKS_START_TASKS_START_Msk (0x1UL << TEMP_TASKS_START_TASKS_START_Pos) /*!< Bit mask of TASKS_START field. */
#define TEMP_TASKS_START_TASKS_START_Trigger (0x1UL) /*!< Trigger task */

/* Register: TEMP_TASKS_STOP */
/* Description: Stop temperature measurement */

/* Bit 0 : Stop temperature measurement */
#define TEMP_TASKS_STOP_TASKS_STOP_Pos (0UL) /*!< Position of TASKS_STOP field. */
#define TEMP_TASKS_STOP_TASKS_STOP_Msk (0x1UL << TEMP_TASKS_STOP_TASKS_STOP_Pos) /*!< Bit mask of TASKS_STOP field. */
#define TEMP_TASKS_STOP_TASKS_STOP_Trigger (0x1UL) /*!< Trigger task */

/* Register: TEMP_SUBSCRIBE_START */
/* Description: Subscribe configuration for task START */

/* Bit 31 :   */
#define TEMP_SUBSCRIBE_START_EN_Pos (31UL) /*!< Position of EN field. */
#define TEMP_SUBSCRIBE_START_EN_Msk (0x1UL << TEMP_SUBSCRIBE_START_EN_Pos) /*!< Bit mask of EN field. */
#define TEMP_SUBSCRIBE_START_EN_Disabled (0x0UL) /*!< Disable subscription */
#define TEMP_SUBSCRIBE_START_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task START will subscribe to */
#define TEMP_SUBSCRIBE_START_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define TEMP_SUBSCRIBE_START_CHIDX_Msk (0xFFUL << TEMP_SUBSCRIBE_START_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: TEMP_SUBSCRIBE_STOP */
/* Description: Subscribe configuration for task STOP */

/* Bit 31 :   */
#define TEMP_SUBSCRIBE_STOP_EN_Pos (31UL) /*!< Position of EN field. */
#define TEMP_SUBSCRIBE_STOP_EN_Msk (0x1UL << TEMP_SUBSCRIBE_STOP_EN_Pos) /*!< Bit mask of EN field. */
#define TEMP_SUBSCRIBE_STOP_EN_Disabled (0x0UL) /*!< Disable subscription */
#define TEMP_SUBSCRIBE_STOP_EN_Enabled (0x1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task STOP will subscribe to */
#define TEMP_SUBSCRIBE_STOP_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define TEMP_SUBSCRIBE_STOP_CHIDX_Msk (0xFFUL << TEMP_SUBSCRIBE_STOP_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: TEMP_EVENTS_DATARDY */
/* Description: Temperature measurement complete, data ready */

/* Bit 0 : Temperature measurement complete, data ready */
#define TEMP_EVENTS_DATARDY_EVENTS_DATARDY_Pos (0UL) /*!< Position of EVENTS_DATARDY field. */
#define TEMP_EVENTS_DATARDY_EVENTS_DATARDY_Msk (0x1UL << TEMP_EVENTS_DATARDY_EVENTS_DATARDY_Pos) /*!< Bit mask of EVENTS_DATARDY field. */
#define TEMP_EVENTS_DATARDY_EVENTS_DATARDY_NotGenerated (0x0UL) /*!< Event not generated */
#define TEMP_EVENTS_DATARDY_EVENTS_DATARDY_Generated (0x1UL) /*!< Event generated */

/* Register: TEMP_PUBLISH_DATARDY */
/* Description: Publish configuration for event DATARDY */

/* Bit 31 :   */
#define TEMP_PUBLISH_DATARDY_EN_Pos (31UL) /*!< Position of EN field. */
#define TEMP_PUBLISH_DATARDY_EN_Msk (0x1UL << TEMP_PUBLISH_DATARDY_EN_Pos) /*!< Bit mask of EN field. */
#define TEMP_PUBLISH_DATARDY_EN_Disabled (0x0UL) /*!< Disable publishing */
#define TEMP_PUBLISH_DATARDY_EN_Enabled (0x1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event DATARDY will publish to */
#define TEMP_PUBLISH_DATARDY_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define TEMP_PUBLISH_DATARDY_CHIDX_Msk (0xFFUL << TEMP_PUBLISH_DATARDY_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: TEMP_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 0 : Enable or disable interrupt for event DATARDY */
#define TEMP_INTEN_DATARDY_Pos (0UL) /*!< Position of DATARDY field. */
#define TEMP_INTEN_DATARDY_Msk (0x1UL << TEMP_INTEN_DATARDY_Pos) /*!< Bit mask of DATARDY field. */
#define TEMP_INTEN_DATARDY_Disabled (0x0UL) /*!< Disable */
#define TEMP_INTEN_DATARDY_Enabled (0x1UL) /*!< Enable */

/* Register: TEMP_INTENSET */
/* Description: Enable interrupt */

/* Bit 0 : Write '1' to enable interrupt for event DATARDY */
#define TEMP_INTENSET_DATARDY_Pos (0UL) /*!< Position of DATARDY field. */
#define TEMP_INTENSET_DATARDY_Msk (0x1UL << TEMP_INTENSET_DATARDY_Pos) /*!< Bit mask of DATARDY field. */
#define TEMP_INTENSET_DATARDY_Disabled (0x0UL) /*!< Read: Disabled */
#define TEMP_INTENSET_DATARDY_Enabled (0x1UL) /*!< Read: Enabled */
#define TEMP_INTENSET_DATARDY_Set (0x1UL) /*!< Enable */

/* Register: TEMP_INTENCLR */
/* Description: Disable interrupt */

/* Bit 0 : Write '1' to disable interrupt for event DATARDY */
#define TEMP_INTENCLR_DATARDY_Pos (0UL) /*!< Position of DATARDY field. */
#define TEMP_INTENCLR_DATARDY_Msk (0x1UL << TEMP_INTENCLR_DATARDY_Pos) /*!< Bit mask of DATARDY field. */
#define TEMP_INTENCLR_DATARDY_Disabled (0x0UL) /*!< Read: Disabled */
#define TEMP_INTENCLR_DATARDY_Enabled (0x1UL) /*!< Read: Enabled */
#define TEMP_INTENCLR_DATARDY_Clear (0x1UL) /*!< Disable */

/* Register: TEMP_ENABLE */
/* Description: Enable temperature sensor bias current */

/* Bit 0 : Enable temperature sensor bias current */
#define TEMP_ENABLE_ENABLE_Pos (0UL) /*!< Position of ENABLE field. */
#define TEMP_ENABLE_ENABLE_Msk (0x1UL << TEMP_ENABLE_ENABLE_Pos) /*!< Bit mask of ENABLE field. */
#define TEMP_ENABLE_ENABLE_Disabled (0x0UL) /*!< Bias is disabled */
#define TEMP_ENABLE_ENABLE_Enabled (0x1UL) /*!< Bias is enabled */

/* Register: TEMP_COUNTER */
/* Description: Prototype register containing counter values for timing */

/* Bits 25..16 : Number of cycles in measurement period */
#define TEMP_COUNTER_COUNT_Pos (16UL) /*!< Position of COUNT field. */
#define TEMP_COUNTER_COUNT_Msk (0x3FFUL << TEMP_COUNTER_COUNT_Pos) /*!< Bit mask of COUNT field. */

/* Bits 14..8 : Number of cycles for analog startup. Simultaneous to clock debouncing. */
#define TEMP_COUNTER_STARTUP_Pos (8UL) /*!< Position of STARTUP field. */
#define TEMP_COUNTER_STARTUP_Msk (0x7FUL << TEMP_COUNTER_STARTUP_Pos) /*!< Bit mask of STARTUP field. */

/* Bits 4..0 : Number of cycles for clock debouncing. Simultaneous to analog startup. Should be shorter that analog startup period */
#define TEMP_COUNTER_DEBOUNCE_Pos (0UL) /*!< Position of DEBOUNCE field. */
#define TEMP_COUNTER_DEBOUNCE_Msk (0x1FUL << TEMP_COUNTER_DEBOUNCE_Pos) /*!< Bit mask of DEBOUNCE field. */

/* Register: TEMP_TEMP */
/* Description: Temperature in degC (0.25deg steps) */

/* Bits 31..0 : Temperature in degC (0.25deg steps) */
#define TEMP_TEMP_TEMP_Pos (0UL) /*!< Position of TEMP field. */
#define TEMP_TEMP_TEMP_Msk (0xFFFFFFFFUL << TEMP_TEMP_TEMP_Pos) /*!< Bit mask of TEMP field. */

/* Register: TEMP_TEMPRAW */
/* Description: Counted oscillator pulses which is equivalent to temperature without calibration and linearization */

/* Bits 11..0 : Temperature in degC (0.25deg steps) */
#define TEMP_TEMPRAW_TEMP_Pos (0UL) /*!< Position of TEMP field. */
#define TEMP_TEMPRAW_TEMP_Msk (0xFFFUL << TEMP_TEMPRAW_TEMP_Pos) /*!< Bit mask of TEMP field. */

/* Register: TEMP_DATA */
/* Description: Data after dec and calib */

/* Bits 31..0 : Data after dec and calib. 12 bits sign extended to 32 bits */
#define TEMP_DATA_DATA_Pos (0UL) /*!< Position of DATA field. */
#define TEMP_DATA_DATA_Msk (0xFFFFFFFFUL << TEMP_DATA_DATA_Pos) /*!< Bit mask of DATA field. */

/* Register: TEMP_CALIB */
/* Description: Calibration value. */

/* Bits 9..0 : TBD */
#define TEMP_CALIB_CALIB_Pos (0UL) /*!< Position of CALIB field. */
#define TEMP_CALIB_CALIB_Msk (0x3FFUL << TEMP_CALIB_CALIB_Pos) /*!< Bit mask of CALIB field. */

/* Register: TEMP_TEMPSENSE_ANA_CONF */
/* Description: Analog test bus control */

/* Bit 8 : ANA power up override */
#define TEMP_TEMPSENSE_ANA_CONF_PWR_Pos (8UL) /*!< Position of PWR field. */
#define TEMP_TEMPSENSE_ANA_CONF_PWR_Msk (0x1UL << TEMP_TEMPSENSE_ANA_CONF_PWR_Pos) /*!< Bit mask of PWR field. */

/* Bits 1..0 : Analog test bus control */
#define TEMP_TEMPSENSE_ANA_CONF_ATE_Pos (0UL) /*!< Position of ATE field. */
#define TEMP_TEMPSENSE_ANA_CONF_ATE_Msk (0x3UL << TEMP_TEMPSENSE_ANA_CONF_ATE_Pos) /*!< Bit mask of ATE field. */

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

/* Register: TEMP_A6 */
/* Description: Slope of 7th piece wise linear function */

/* Bits 11..0 : Slope of 7th piece wise linear function */
#define TEMP_A6_A6_Pos (0UL) /*!< Position of A6 field. */
#define TEMP_A6_A6_Msk (0xFFFUL << TEMP_A6_A6_Pos) /*!< Bit mask of A6 field. */

/* Register: TEMP_B0 */
/* Description: y-intercept of 1st piece wise linear function */

/* Bits 11..0 : y-intercept of 1st piece wise linear function */
#define TEMP_B0_B0_Pos (0UL) /*!< Position of B0 field. */
#define TEMP_B0_B0_Msk (0xFFFUL << TEMP_B0_B0_Pos) /*!< Bit mask of B0 field. */

/* Register: TEMP_B1 */
/* Description: y-intercept of 2nd piece wise linear function */

/* Bits 11..0 : y-intercept of 2nd piece wise linear function */
#define TEMP_B1_B1_Pos (0UL) /*!< Position of B1 field. */
#define TEMP_B1_B1_Msk (0xFFFUL << TEMP_B1_B1_Pos) /*!< Bit mask of B1 field. */

/* Register: TEMP_B2 */
/* Description: y-intercept of 3rd piece wise linear function */

/* Bits 11..0 : y-intercept of 3rd piece wise linear function */
#define TEMP_B2_B2_Pos (0UL) /*!< Position of B2 field. */
#define TEMP_B2_B2_Msk (0xFFFUL << TEMP_B2_B2_Pos) /*!< Bit mask of B2 field. */

/* Register: TEMP_B3 */
/* Description: y-intercept of 4th piece wise linear function */

/* Bits 11..0 : y-intercept of 4th piece wise linear function */
#define TEMP_B3_B3_Pos (0UL) /*!< Position of B3 field. */
#define TEMP_B3_B3_Msk (0xFFFUL << TEMP_B3_B3_Pos) /*!< Bit mask of B3 field. */

/* Register: TEMP_B4 */
/* Description: y-intercept of 5th piece wise linear function */

/* Bits 11..0 : y-intercept of 5th piece wise linear function */
#define TEMP_B4_B4_Pos (0UL) /*!< Position of B4 field. */
#define TEMP_B4_B4_Msk (0xFFFUL << TEMP_B4_B4_Pos) /*!< Bit mask of B4 field. */

/* Register: TEMP_B5 */
/* Description: y-intercept of 6th piece wise linear function */

/* Bits 11..0 : y-intercept of 6th piece wise linear function */
#define TEMP_B5_B5_Pos (0UL) /*!< Position of B5 field. */
#define TEMP_B5_B5_Msk (0xFFFUL << TEMP_B5_B5_Pos) /*!< Bit mask of B5 field. */

/* Register: TEMP_B6 */
/* Description: y-intercept of 7th piece wise linear function */

/* Bits 11..0 : y-intercept of 7th piece wise linear function */
#define TEMP_B6_B6_Pos (0UL) /*!< Position of B6 field. */
#define TEMP_B6_B6_Msk (0xFFFUL << TEMP_B6_B6_Pos) /*!< Bit mask of B6 field. */

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

/* Register: TEMP_T5 */
/* Description: End point of 6th piece wise linear function */

/* Bits 7..0 : End point of 6th piece wise linear function */
#define TEMP_T5_T5_Pos (0UL) /*!< Position of T5 field. */
#define TEMP_T5_T5_Msk (0xFFUL << TEMP_T5_T5_Pos) /*!< Bit mask of T5 field. */


/*lint --flb "Leave library region" */
#endif
