/*

Copyright (c) 2010 - 2020, Nordic Semiconductor ASA

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

#ifndef __NRF54LILIUM_NETWORK_BITS_H
#define __NRF54LILIUM_NETWORK_BITS_H

/*lint ++flb "Enter library region" */

/* Peripheral: AAR */
/* Description: Accelerated Address Resolver */

/* Register: AAR_TASKS_START */
/* Description: Start resolving addresses based on IRKs specified in the IRK data structure */

/* Bit 0 : Start resolving addresses based on IRKs specified in the IRK data structure */
#define AAR_TASKS_START_TASKS_START_Pos (0UL) /*!< Position of TASKS_START field. */
#define AAR_TASKS_START_TASKS_START_Msk (0x1UL << AAR_TASKS_START_TASKS_START_Pos) /*!< Bit mask of TASKS_START field. */
#define AAR_TASKS_START_TASKS_START_Trigger (1UL) /*!< Trigger task */

/* Register: AAR_TASKS_STOP */
/* Description: Stop resolving addresses */

/* Bit 0 : Stop resolving addresses */
#define AAR_TASKS_STOP_TASKS_STOP_Pos (0UL) /*!< Position of TASKS_STOP field. */
#define AAR_TASKS_STOP_TASKS_STOP_Msk (0x1UL << AAR_TASKS_STOP_TASKS_STOP_Pos) /*!< Bit mask of TASKS_STOP field. */
#define AAR_TASKS_STOP_TASKS_STOP_Trigger (1UL) /*!< Trigger task */

/* Register: AAR_SUBSCRIBE_START */
/* Description: Subscribe configuration for task START */

/* Bit 31 :   */
#define AAR_SUBSCRIBE_START_EN_Pos (31UL) /*!< Position of EN field. */
#define AAR_SUBSCRIBE_START_EN_Msk (0x1UL << AAR_SUBSCRIBE_START_EN_Pos) /*!< Bit mask of EN field. */
#define AAR_SUBSCRIBE_START_EN_Disabled (0UL) /*!< Disable subscription */
#define AAR_SUBSCRIBE_START_EN_Enabled (1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task START will subscribe to */
#define AAR_SUBSCRIBE_START_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define AAR_SUBSCRIBE_START_CHIDX_Msk (0xFFUL << AAR_SUBSCRIBE_START_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: AAR_SUBSCRIBE_STOP */
/* Description: Subscribe configuration for task STOP */

/* Bit 31 :   */
#define AAR_SUBSCRIBE_STOP_EN_Pos (31UL) /*!< Position of EN field. */
#define AAR_SUBSCRIBE_STOP_EN_Msk (0x1UL << AAR_SUBSCRIBE_STOP_EN_Pos) /*!< Bit mask of EN field. */
#define AAR_SUBSCRIBE_STOP_EN_Disabled (0UL) /*!< Disable subscription */
#define AAR_SUBSCRIBE_STOP_EN_Enabled (1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task STOP will subscribe to */
#define AAR_SUBSCRIBE_STOP_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define AAR_SUBSCRIBE_STOP_CHIDX_Msk (0xFFUL << AAR_SUBSCRIBE_STOP_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: AAR_EVENTS_END */
/* Description: Address resolution procedure complete */

/* Bit 0 : Address resolution procedure complete */
#define AAR_EVENTS_END_EVENTS_END_Pos (0UL) /*!< Position of EVENTS_END field. */
#define AAR_EVENTS_END_EVENTS_END_Msk (0x1UL << AAR_EVENTS_END_EVENTS_END_Pos) /*!< Bit mask of EVENTS_END field. */
#define AAR_EVENTS_END_EVENTS_END_NotGenerated (0UL) /*!< Event not generated */
#define AAR_EVENTS_END_EVENTS_END_Generated (1UL) /*!< Event generated */

/* Register: AAR_EVENTS_RESOLVED */
/* Description: Address resolved */

/* Bit 0 : Address resolved */
#define AAR_EVENTS_RESOLVED_EVENTS_RESOLVED_Pos (0UL) /*!< Position of EVENTS_RESOLVED field. */
#define AAR_EVENTS_RESOLVED_EVENTS_RESOLVED_Msk (0x1UL << AAR_EVENTS_RESOLVED_EVENTS_RESOLVED_Pos) /*!< Bit mask of EVENTS_RESOLVED field. */
#define AAR_EVENTS_RESOLVED_EVENTS_RESOLVED_NotGenerated (0UL) /*!< Event not generated */
#define AAR_EVENTS_RESOLVED_EVENTS_RESOLVED_Generated (1UL) /*!< Event generated */

/* Register: AAR_EVENTS_NOTRESOLVED */
/* Description: Address not resolved */

/* Bit 0 : Address not resolved */
#define AAR_EVENTS_NOTRESOLVED_EVENTS_NOTRESOLVED_Pos (0UL) /*!< Position of EVENTS_NOTRESOLVED field. */
#define AAR_EVENTS_NOTRESOLVED_EVENTS_NOTRESOLVED_Msk (0x1UL << AAR_EVENTS_NOTRESOLVED_EVENTS_NOTRESOLVED_Pos) /*!< Bit mask of EVENTS_NOTRESOLVED field. */
#define AAR_EVENTS_NOTRESOLVED_EVENTS_NOTRESOLVED_NotGenerated (0UL) /*!< Event not generated */
#define AAR_EVENTS_NOTRESOLVED_EVENTS_NOTRESOLVED_Generated (1UL) /*!< Event generated */

/* Register: AAR_PUBLISH_END */
/* Description: Publish configuration for event END */

/* Bit 31 :   */
#define AAR_PUBLISH_END_EN_Pos (31UL) /*!< Position of EN field. */
#define AAR_PUBLISH_END_EN_Msk (0x1UL << AAR_PUBLISH_END_EN_Pos) /*!< Bit mask of EN field. */
#define AAR_PUBLISH_END_EN_Disabled (0UL) /*!< Disable publishing */
#define AAR_PUBLISH_END_EN_Enabled (1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event END will publish to. */
#define AAR_PUBLISH_END_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define AAR_PUBLISH_END_CHIDX_Msk (0xFFUL << AAR_PUBLISH_END_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: AAR_PUBLISH_RESOLVED */
/* Description: Publish configuration for event RESOLVED */

/* Bit 31 :   */
#define AAR_PUBLISH_RESOLVED_EN_Pos (31UL) /*!< Position of EN field. */
#define AAR_PUBLISH_RESOLVED_EN_Msk (0x1UL << AAR_PUBLISH_RESOLVED_EN_Pos) /*!< Bit mask of EN field. */
#define AAR_PUBLISH_RESOLVED_EN_Disabled (0UL) /*!< Disable publishing */
#define AAR_PUBLISH_RESOLVED_EN_Enabled (1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event RESOLVED will publish to. */
#define AAR_PUBLISH_RESOLVED_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define AAR_PUBLISH_RESOLVED_CHIDX_Msk (0xFFUL << AAR_PUBLISH_RESOLVED_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: AAR_PUBLISH_NOTRESOLVED */
/* Description: Publish configuration for event NOTRESOLVED */

/* Bit 31 :   */
#define AAR_PUBLISH_NOTRESOLVED_EN_Pos (31UL) /*!< Position of EN field. */
#define AAR_PUBLISH_NOTRESOLVED_EN_Msk (0x1UL << AAR_PUBLISH_NOTRESOLVED_EN_Pos) /*!< Bit mask of EN field. */
#define AAR_PUBLISH_NOTRESOLVED_EN_Disabled (0UL) /*!< Disable publishing */
#define AAR_PUBLISH_NOTRESOLVED_EN_Enabled (1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event NOTRESOLVED will publish to. */
#define AAR_PUBLISH_NOTRESOLVED_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define AAR_PUBLISH_NOTRESOLVED_CHIDX_Msk (0xFFUL << AAR_PUBLISH_NOTRESOLVED_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: AAR_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 2 : Enable or disable interrupt for event NOTRESOLVED */
#define AAR_INTEN_NOTRESOLVED_Pos (2UL) /*!< Position of NOTRESOLVED field. */
#define AAR_INTEN_NOTRESOLVED_Msk (0x1UL << AAR_INTEN_NOTRESOLVED_Pos) /*!< Bit mask of NOTRESOLVED field. */
#define AAR_INTEN_NOTRESOLVED_Disabled (0UL) /*!< Disable */
#define AAR_INTEN_NOTRESOLVED_Enabled (1UL) /*!< Enable */

/* Bit 1 : Enable or disable interrupt for event RESOLVED */
#define AAR_INTEN_RESOLVED_Pos (1UL) /*!< Position of RESOLVED field. */
#define AAR_INTEN_RESOLVED_Msk (0x1UL << AAR_INTEN_RESOLVED_Pos) /*!< Bit mask of RESOLVED field. */
#define AAR_INTEN_RESOLVED_Disabled (0UL) /*!< Disable */
#define AAR_INTEN_RESOLVED_Enabled (1UL) /*!< Enable */

/* Bit 0 : Enable or disable interrupt for event END */
#define AAR_INTEN_END_Pos (0UL) /*!< Position of END field. */
#define AAR_INTEN_END_Msk (0x1UL << AAR_INTEN_END_Pos) /*!< Bit mask of END field. */
#define AAR_INTEN_END_Disabled (0UL) /*!< Disable */
#define AAR_INTEN_END_Enabled (1UL) /*!< Enable */

/* Register: AAR_INTENSET */
/* Description: Enable interrupt */

/* Bit 2 : Write '1' to enable interrupt for event NOTRESOLVED */
#define AAR_INTENSET_NOTRESOLVED_Pos (2UL) /*!< Position of NOTRESOLVED field. */
#define AAR_INTENSET_NOTRESOLVED_Msk (0x1UL << AAR_INTENSET_NOTRESOLVED_Pos) /*!< Bit mask of NOTRESOLVED field. */
#define AAR_INTENSET_NOTRESOLVED_Disabled (0UL) /*!< Read: Disabled */
#define AAR_INTENSET_NOTRESOLVED_Enabled (1UL) /*!< Read: Enabled */
#define AAR_INTENSET_NOTRESOLVED_Set (1UL) /*!< Enable */

/* Bit 1 : Write '1' to enable interrupt for event RESOLVED */
#define AAR_INTENSET_RESOLVED_Pos (1UL) /*!< Position of RESOLVED field. */
#define AAR_INTENSET_RESOLVED_Msk (0x1UL << AAR_INTENSET_RESOLVED_Pos) /*!< Bit mask of RESOLVED field. */
#define AAR_INTENSET_RESOLVED_Disabled (0UL) /*!< Read: Disabled */
#define AAR_INTENSET_RESOLVED_Enabled (1UL) /*!< Read: Enabled */
#define AAR_INTENSET_RESOLVED_Set (1UL) /*!< Enable */

/* Bit 0 : Write '1' to enable interrupt for event END */
#define AAR_INTENSET_END_Pos (0UL) /*!< Position of END field. */
#define AAR_INTENSET_END_Msk (0x1UL << AAR_INTENSET_END_Pos) /*!< Bit mask of END field. */
#define AAR_INTENSET_END_Disabled (0UL) /*!< Read: Disabled */
#define AAR_INTENSET_END_Enabled (1UL) /*!< Read: Enabled */
#define AAR_INTENSET_END_Set (1UL) /*!< Enable */

/* Register: AAR_INTENCLR */
/* Description: Disable interrupt */

/* Bit 2 : Write '1' to disable interrupt for event NOTRESOLVED */
#define AAR_INTENCLR_NOTRESOLVED_Pos (2UL) /*!< Position of NOTRESOLVED field. */
#define AAR_INTENCLR_NOTRESOLVED_Msk (0x1UL << AAR_INTENCLR_NOTRESOLVED_Pos) /*!< Bit mask of NOTRESOLVED field. */
#define AAR_INTENCLR_NOTRESOLVED_Disabled (0UL) /*!< Read: Disabled */
#define AAR_INTENCLR_NOTRESOLVED_Enabled (1UL) /*!< Read: Enabled */
#define AAR_INTENCLR_NOTRESOLVED_Clear (1UL) /*!< Disable */

/* Bit 1 : Write '1' to disable interrupt for event RESOLVED */
#define AAR_INTENCLR_RESOLVED_Pos (1UL) /*!< Position of RESOLVED field. */
#define AAR_INTENCLR_RESOLVED_Msk (0x1UL << AAR_INTENCLR_RESOLVED_Pos) /*!< Bit mask of RESOLVED field. */
#define AAR_INTENCLR_RESOLVED_Disabled (0UL) /*!< Read: Disabled */
#define AAR_INTENCLR_RESOLVED_Enabled (1UL) /*!< Read: Enabled */
#define AAR_INTENCLR_RESOLVED_Clear (1UL) /*!< Disable */

/* Bit 0 : Write '1' to disable interrupt for event END */
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

/* Register: AAR_INPTR */
/* Description: Pointer to the AAR data structure */

/* Bits 31..0 : Pointer to the AAR data structure */
#define AAR_INPTR_INPTR_Pos (0UL) /*!< Position of INPTR field. */
#define AAR_INPTR_INPTR_Msk (0xFFFFFFFFUL << AAR_INPTR_INPTR_Pos) /*!< Bit mask of INPTR field. */


/* Peripheral: CCM */
/* Description: AES CCM mode encryption */

/* Register: CCM_TASKS_CONFIG */
/* Description: Fetches AES Key and CCM Nonce from CONFIGPTR job list into the KEY and NONCE registers. */

/* Bit 0 : Fetches AES Key and CCM Nonce from CONFIGPTR job list into the KEY and NONCE registers. */
#define CCM_TASKS_CONFIG_TASKS_CONFIG_Pos (0UL) /*!< Position of TASKS_CONFIG field. */
#define CCM_TASKS_CONFIG_TASKS_CONFIG_Msk (0x1UL << CCM_TASKS_CONFIG_TASKS_CONFIG_Pos) /*!< Bit mask of TASKS_CONFIG field. */
#define CCM_TASKS_CONFIG_TASKS_CONFIG_Trigger (1UL) /*!< Trigger task */

/* Register: CCM_TASKS_CRYPT */
/* Description: Start encryption/decryption. This operation will stop by itself when completed. */

/* Bit 0 : Start encryption/decryption. This operation will stop by itself when completed. */
#define CCM_TASKS_CRYPT_TASKS_CRYPT_Pos (0UL) /*!< Position of TASKS_CRYPT field. */
#define CCM_TASKS_CRYPT_TASKS_CRYPT_Msk (0x1UL << CCM_TASKS_CRYPT_TASKS_CRYPT_Pos) /*!< Bit mask of TASKS_CRYPT field. */
#define CCM_TASKS_CRYPT_TASKS_CRYPT_Trigger (1UL) /*!< Trigger task */

/* Register: CCM_TASKS_STOP */
/* Description: Stop encryption/decryption */

/* Bit 0 : Stop encryption/decryption */
#define CCM_TASKS_STOP_TASKS_STOP_Pos (0UL) /*!< Position of TASKS_STOP field. */
#define CCM_TASKS_STOP_TASKS_STOP_Msk (0x1UL << CCM_TASKS_STOP_TASKS_STOP_Pos) /*!< Bit mask of TASKS_STOP field. */
#define CCM_TASKS_STOP_TASKS_STOP_Trigger (1UL) /*!< Trigger task */

/* Register: CCM_TASKS_RATEOVERRIDE */
/* Description: Override DATARATE setting in MODE register with the contents of the RATEOVERRIDE register for any ongoing encryption/decryption */

/* Bit 0 : Override DATARATE setting in MODE register with the contents of the RATEOVERRIDE register for any ongoing encryption/decryption */
#define CCM_TASKS_RATEOVERRIDE_TASKS_RATEOVERRIDE_Pos (0UL) /*!< Position of TASKS_RATEOVERRIDE field. */
#define CCM_TASKS_RATEOVERRIDE_TASKS_RATEOVERRIDE_Msk (0x1UL << CCM_TASKS_RATEOVERRIDE_TASKS_RATEOVERRIDE_Pos) /*!< Bit mask of TASKS_RATEOVERRIDE field. */
#define CCM_TASKS_RATEOVERRIDE_TASKS_RATEOVERRIDE_Trigger (1UL) /*!< Trigger task */

/* Register: CCM_TASKS_PROCESS */
/* Description: Fetches and processes one byte from INPTR in manual data rate mode */

/* Bit 0 : Fetches and processes one byte from INPTR in manual data rate mode */
#define CCM_TASKS_PROCESS_TASKS_PROCESS_Pos (0UL) /*!< Position of TASKS_PROCESS field. */
#define CCM_TASKS_PROCESS_TASKS_PROCESS_Msk (0x1UL << CCM_TASKS_PROCESS_TASKS_PROCESS_Pos) /*!< Bit mask of TASKS_PROCESS field. */
#define CCM_TASKS_PROCESS_TASKS_PROCESS_Trigger (1UL) /*!< Trigger task */

/* Register: CCM_SUBSCRIBE_CONFIG */
/* Description: Subscribe configuration for task CONFIG */

/* Bit 31 :   */
#define CCM_SUBSCRIBE_CONFIG_EN_Pos (31UL) /*!< Position of EN field. */
#define CCM_SUBSCRIBE_CONFIG_EN_Msk (0x1UL << CCM_SUBSCRIBE_CONFIG_EN_Pos) /*!< Bit mask of EN field. */
#define CCM_SUBSCRIBE_CONFIG_EN_Disabled (0UL) /*!< Disable subscription */
#define CCM_SUBSCRIBE_CONFIG_EN_Enabled (1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task CONFIG will subscribe to */
#define CCM_SUBSCRIBE_CONFIG_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define CCM_SUBSCRIBE_CONFIG_CHIDX_Msk (0xFFUL << CCM_SUBSCRIBE_CONFIG_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: CCM_SUBSCRIBE_CRYPT */
/* Description: Subscribe configuration for task CRYPT */

/* Bit 31 :   */
#define CCM_SUBSCRIBE_CRYPT_EN_Pos (31UL) /*!< Position of EN field. */
#define CCM_SUBSCRIBE_CRYPT_EN_Msk (0x1UL << CCM_SUBSCRIBE_CRYPT_EN_Pos) /*!< Bit mask of EN field. */
#define CCM_SUBSCRIBE_CRYPT_EN_Disabled (0UL) /*!< Disable subscription */
#define CCM_SUBSCRIBE_CRYPT_EN_Enabled (1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task CRYPT will subscribe to */
#define CCM_SUBSCRIBE_CRYPT_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define CCM_SUBSCRIBE_CRYPT_CHIDX_Msk (0xFFUL << CCM_SUBSCRIBE_CRYPT_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: CCM_SUBSCRIBE_STOP */
/* Description: Subscribe configuration for task STOP */

/* Bit 31 :   */
#define CCM_SUBSCRIBE_STOP_EN_Pos (31UL) /*!< Position of EN field. */
#define CCM_SUBSCRIBE_STOP_EN_Msk (0x1UL << CCM_SUBSCRIBE_STOP_EN_Pos) /*!< Bit mask of EN field. */
#define CCM_SUBSCRIBE_STOP_EN_Disabled (0UL) /*!< Disable subscription */
#define CCM_SUBSCRIBE_STOP_EN_Enabled (1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task STOP will subscribe to */
#define CCM_SUBSCRIBE_STOP_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define CCM_SUBSCRIBE_STOP_CHIDX_Msk (0xFFUL << CCM_SUBSCRIBE_STOP_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: CCM_SUBSCRIBE_RATEOVERRIDE */
/* Description: Subscribe configuration for task RATEOVERRIDE */

/* Bit 31 :   */
#define CCM_SUBSCRIBE_RATEOVERRIDE_EN_Pos (31UL) /*!< Position of EN field. */
#define CCM_SUBSCRIBE_RATEOVERRIDE_EN_Msk (0x1UL << CCM_SUBSCRIBE_RATEOVERRIDE_EN_Pos) /*!< Bit mask of EN field. */
#define CCM_SUBSCRIBE_RATEOVERRIDE_EN_Disabled (0UL) /*!< Disable subscription */
#define CCM_SUBSCRIBE_RATEOVERRIDE_EN_Enabled (1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task RATEOVERRIDE will subscribe to */
#define CCM_SUBSCRIBE_RATEOVERRIDE_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define CCM_SUBSCRIBE_RATEOVERRIDE_CHIDX_Msk (0xFFUL << CCM_SUBSCRIBE_RATEOVERRIDE_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: CCM_SUBSCRIBE_PROCESS */
/* Description: Subscribe configuration for task PROCESS */

/* Bit 31 :   */
#define CCM_SUBSCRIBE_PROCESS_EN_Pos (31UL) /*!< Position of EN field. */
#define CCM_SUBSCRIBE_PROCESS_EN_Msk (0x1UL << CCM_SUBSCRIBE_PROCESS_EN_Pos) /*!< Bit mask of EN field. */
#define CCM_SUBSCRIBE_PROCESS_EN_Disabled (0UL) /*!< Disable subscription */
#define CCM_SUBSCRIBE_PROCESS_EN_Enabled (1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task PROCESS will subscribe to */
#define CCM_SUBSCRIBE_PROCESS_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define CCM_SUBSCRIBE_PROCESS_CHIDX_Msk (0xFFUL << CCM_SUBSCRIBE_PROCESS_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: CCM_EVENTS_ENDCONFIG */
/* Description: Configuration data has been loaded */

/* Bit 0 : Configuration data has been loaded */
#define CCM_EVENTS_ENDCONFIG_EVENTS_ENDCONFIG_Pos (0UL) /*!< Position of EVENTS_ENDCONFIG field. */
#define CCM_EVENTS_ENDCONFIG_EVENTS_ENDCONFIG_Msk (0x1UL << CCM_EVENTS_ENDCONFIG_EVENTS_ENDCONFIG_Pos) /*!< Bit mask of EVENTS_ENDCONFIG field. */
#define CCM_EVENTS_ENDCONFIG_EVENTS_ENDCONFIG_NotGenerated (0UL) /*!< Event not generated */
#define CCM_EVENTS_ENDCONFIG_EVENTS_ENDCONFIG_Generated (1UL) /*!< Event generated */

/* Register: CCM_EVENTS_ENDCRYPT */
/* Description: Encrypt/decrypt complete */

/* Bit 0 : Encrypt/decrypt complete */
#define CCM_EVENTS_ENDCRYPT_EVENTS_ENDCRYPT_Pos (0UL) /*!< Position of EVENTS_ENDCRYPT field. */
#define CCM_EVENTS_ENDCRYPT_EVENTS_ENDCRYPT_Msk (0x1UL << CCM_EVENTS_ENDCRYPT_EVENTS_ENDCRYPT_Pos) /*!< Bit mask of EVENTS_ENDCRYPT field. */
#define CCM_EVENTS_ENDCRYPT_EVENTS_ENDCRYPT_NotGenerated (0UL) /*!< Event not generated */
#define CCM_EVENTS_ENDCRYPT_EVENTS_ENDCRYPT_Generated (1UL) /*!< Event generated */

/* Register: CCM_EVENTS_ERROR */
/* Description: CCM error event */

/* Bit 0 : CCM error event */
#define CCM_EVENTS_ERROR_EVENTS_ERROR_Pos (0UL) /*!< Position of EVENTS_ERROR field. */
#define CCM_EVENTS_ERROR_EVENTS_ERROR_Msk (0x1UL << CCM_EVENTS_ERROR_EVENTS_ERROR_Pos) /*!< Bit mask of EVENTS_ERROR field. */
#define CCM_EVENTS_ERROR_EVENTS_ERROR_NotGenerated (0UL) /*!< Event not generated */
#define CCM_EVENTS_ERROR_EVENTS_ERROR_Generated (1UL) /*!< Event generated */

/* Register: CCM_PUBLISH_ENDCONFIG */
/* Description: Publish configuration for event ENDCONFIG */

/* Bit 31 :   */
#define CCM_PUBLISH_ENDCONFIG_EN_Pos (31UL) /*!< Position of EN field. */
#define CCM_PUBLISH_ENDCONFIG_EN_Msk (0x1UL << CCM_PUBLISH_ENDCONFIG_EN_Pos) /*!< Bit mask of EN field. */
#define CCM_PUBLISH_ENDCONFIG_EN_Disabled (0UL) /*!< Disable publishing */
#define CCM_PUBLISH_ENDCONFIG_EN_Enabled (1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event ENDCONFIG will publish to. */
#define CCM_PUBLISH_ENDCONFIG_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define CCM_PUBLISH_ENDCONFIG_CHIDX_Msk (0xFFUL << CCM_PUBLISH_ENDCONFIG_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: CCM_PUBLISH_ENDCRYPT */
/* Description: Publish configuration for event ENDCRYPT */

/* Bit 31 :   */
#define CCM_PUBLISH_ENDCRYPT_EN_Pos (31UL) /*!< Position of EN field. */
#define CCM_PUBLISH_ENDCRYPT_EN_Msk (0x1UL << CCM_PUBLISH_ENDCRYPT_EN_Pos) /*!< Bit mask of EN field. */
#define CCM_PUBLISH_ENDCRYPT_EN_Disabled (0UL) /*!< Disable publishing */
#define CCM_PUBLISH_ENDCRYPT_EN_Enabled (1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event ENDCRYPT will publish to. */
#define CCM_PUBLISH_ENDCRYPT_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define CCM_PUBLISH_ENDCRYPT_CHIDX_Msk (0xFFUL << CCM_PUBLISH_ENDCRYPT_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: CCM_PUBLISH_ERROR */
/* Description: Publish configuration for event ERROR */

/* Bit 31 :   */
#define CCM_PUBLISH_ERROR_EN_Pos (31UL) /*!< Position of EN field. */
#define CCM_PUBLISH_ERROR_EN_Msk (0x1UL << CCM_PUBLISH_ERROR_EN_Pos) /*!< Bit mask of EN field. */
#define CCM_PUBLISH_ERROR_EN_Disabled (0UL) /*!< Disable publishing */
#define CCM_PUBLISH_ERROR_EN_Enabled (1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event ERROR will publish to. */
#define CCM_PUBLISH_ERROR_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define CCM_PUBLISH_ERROR_CHIDX_Msk (0xFFUL << CCM_PUBLISH_ERROR_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: CCM_SHORTS */
/* Description: Shortcuts between local events and tasks */

/* Bit 0 : Shortcut between event ENDCONFIG and task CRYPT */
#define CCM_SHORTS_ENDCONFIG_CRYPT_Pos (0UL) /*!< Position of ENDCONFIG_CRYPT field. */
#define CCM_SHORTS_ENDCONFIG_CRYPT_Msk (0x1UL << CCM_SHORTS_ENDCONFIG_CRYPT_Pos) /*!< Bit mask of ENDCONFIG_CRYPT field. */
#define CCM_SHORTS_ENDCONFIG_CRYPT_Disabled (0UL) /*!< Disable shortcut */
#define CCM_SHORTS_ENDCONFIG_CRYPT_Enabled (1UL) /*!< Enable shortcut */

/* Register: CCM_INTENSET */
/* Description: Enable interrupt */

/* Bit 2 : Write '1' to enable interrupt for event ERROR */
#define CCM_INTENSET_ERROR_Pos (2UL) /*!< Position of ERROR field. */
#define CCM_INTENSET_ERROR_Msk (0x1UL << CCM_INTENSET_ERROR_Pos) /*!< Bit mask of ERROR field. */
#define CCM_INTENSET_ERROR_Disabled (0UL) /*!< Read: Disabled */
#define CCM_INTENSET_ERROR_Enabled (1UL) /*!< Read: Enabled */
#define CCM_INTENSET_ERROR_Set (1UL) /*!< Enable */

/* Bit 1 : Write '1' to enable interrupt for event ENDCRYPT */
#define CCM_INTENSET_ENDCRYPT_Pos (1UL) /*!< Position of ENDCRYPT field. */
#define CCM_INTENSET_ENDCRYPT_Msk (0x1UL << CCM_INTENSET_ENDCRYPT_Pos) /*!< Bit mask of ENDCRYPT field. */
#define CCM_INTENSET_ENDCRYPT_Disabled (0UL) /*!< Read: Disabled */
#define CCM_INTENSET_ENDCRYPT_Enabled (1UL) /*!< Read: Enabled */
#define CCM_INTENSET_ENDCRYPT_Set (1UL) /*!< Enable */

/* Bit 0 : Write '1' to enable interrupt for event ENDCONFIG */
#define CCM_INTENSET_ENDCONFIG_Pos (0UL) /*!< Position of ENDCONFIG field. */
#define CCM_INTENSET_ENDCONFIG_Msk (0x1UL << CCM_INTENSET_ENDCONFIG_Pos) /*!< Bit mask of ENDCONFIG field. */
#define CCM_INTENSET_ENDCONFIG_Disabled (0UL) /*!< Read: Disabled */
#define CCM_INTENSET_ENDCONFIG_Enabled (1UL) /*!< Read: Enabled */
#define CCM_INTENSET_ENDCONFIG_Set (1UL) /*!< Enable */

/* Register: CCM_INTENCLR */
/* Description: Disable interrupt */

/* Bit 2 : Write '1' to disable interrupt for event ERROR */
#define CCM_INTENCLR_ERROR_Pos (2UL) /*!< Position of ERROR field. */
#define CCM_INTENCLR_ERROR_Msk (0x1UL << CCM_INTENCLR_ERROR_Pos) /*!< Bit mask of ERROR field. */
#define CCM_INTENCLR_ERROR_Disabled (0UL) /*!< Read: Disabled */
#define CCM_INTENCLR_ERROR_Enabled (1UL) /*!< Read: Enabled */
#define CCM_INTENCLR_ERROR_Clear (1UL) /*!< Disable */

/* Bit 1 : Write '1' to disable interrupt for event ENDCRYPT */
#define CCM_INTENCLR_ENDCRYPT_Pos (1UL) /*!< Position of ENDCRYPT field. */
#define CCM_INTENCLR_ENDCRYPT_Msk (0x1UL << CCM_INTENCLR_ENDCRYPT_Pos) /*!< Bit mask of ENDCRYPT field. */
#define CCM_INTENCLR_ENDCRYPT_Disabled (0UL) /*!< Read: Disabled */
#define CCM_INTENCLR_ENDCRYPT_Enabled (1UL) /*!< Read: Enabled */
#define CCM_INTENCLR_ENDCRYPT_Clear (1UL) /*!< Disable */

/* Bit 0 : Write '1' to disable interrupt for event ENDCONFIG */
#define CCM_INTENCLR_ENDCONFIG_Pos (0UL) /*!< Position of ENDCONFIG field. */
#define CCM_INTENCLR_ENDCONFIG_Msk (0x1UL << CCM_INTENCLR_ENDCONFIG_Pos) /*!< Bit mask of ENDCONFIG field. */
#define CCM_INTENCLR_ENDCONFIG_Disabled (0UL) /*!< Read: Disabled */
#define CCM_INTENCLR_ENDCONFIG_Enabled (1UL) /*!< Read: Enabled */
#define CCM_INTENCLR_ENDCONFIG_Clear (1UL) /*!< Disable */

/* Register: CCM_MACSTATUS */
/* Description: MAC check result */

/* Bit 0 : The result of the MAC check performed during the previous decryption operation */
#define CCM_MACSTATUS_MACSTATUS_Pos (0UL) /*!< Position of MACSTATUS field. */
#define CCM_MACSTATUS_MACSTATUS_Msk (0x1UL << CCM_MACSTATUS_MACSTATUS_Pos) /*!< Bit mask of MACSTATUS field. */
#define CCM_MACSTATUS_MACSTATUS_CheckFailed (0UL) /*!< MAC check failed */
#define CCM_MACSTATUS_MACSTATUS_CheckPassed (1UL) /*!< MAC check passed */

/* Register: CCM_ERRORSTATUS */
/* Description: Error status */

/* Bits 1..0 : Error status when the ERROR event is generated */
#define CCM_ERRORSTATUS_ERRORSTATUS_Pos (0UL) /*!< Position of ERRORSTATUS field. */
#define CCM_ERRORSTATUS_ERRORSTATUS_Msk (0x3UL << CCM_ERRORSTATUS_ERRORSTATUS_Pos) /*!< Bit mask of ERRORSTATUS field. */
#define CCM_ERRORSTATUS_ERRORSTATUS_NoError (0UL) /*!< No errors have occurred */
#define CCM_ERRORSTATUS_ERRORSTATUS_PrematureInptrEnd (1UL) /*!< End of INPTR job list before CCM data structure was read. */
#define CCM_ERRORSTATUS_ERRORSTATUS_PrematureOutptrEnd (2UL) /*!< End of OUTPTR job list before CCM data structure was read. */
#define CCM_ERRORSTATUS_ERRORSTATUS_EncryptionTooSlow (3UL) /*!< Encryption of the unencrypted CCM data structure did not complete in time. */

/* Register: CCM_ENABLE */
/* Description: Enable */

/* Bits 1..0 : Enable or disable CCM */
#define CCM_ENABLE_ENABLE_Pos (0UL) /*!< Position of ENABLE field. */
#define CCM_ENABLE_ENABLE_Msk (0x3UL << CCM_ENABLE_ENABLE_Pos) /*!< Bit mask of ENABLE field. */
#define CCM_ENABLE_ENABLE_Disabled (0UL) /*!< Disable */
#define CCM_ENABLE_ENABLE_Enabled (2UL) /*!< Enable */

/* Register: CCM_MODE */
/* Description: Operation mode */

/* Bits 26..24 : CCM MAC length (bytes) */
#define CCM_MODE_MACLEN_Pos (24UL) /*!< Position of MACLEN field. */
#define CCM_MODE_MACLEN_Msk (0x7UL << CCM_MODE_MACLEN_Pos) /*!< Bit mask of MACLEN field. */
#define CCM_MODE_MACLEN_M0 (0UL) /*!< M = 0 This is a special case for CCM* where encryption is required but not authentication */
#define CCM_MODE_MACLEN_M4 (1UL) /*!< M = 4 */
#define CCM_MODE_MACLEN_M6 (2UL) /*!< M = 6 */
#define CCM_MODE_MACLEN_M8 (3UL) /*!< M = 8 */
#define CCM_MODE_MACLEN_M10 (4UL) /*!< M = 10 */
#define CCM_MODE_MACLEN_M12 (5UL) /*!< M = 12 */
#define CCM_MODE_MACLEN_M14 (6UL) /*!< M = 14 */
#define CCM_MODE_MACLEN_M16 (7UL) /*!< M = 16 */

/* Bit 20 : When enabled, the INPTR data structure will process one byte each time the PROCESS task is triggered. This can be used to support various data rates for on-the-fly encryption/decryption modes. */
#define CCM_MODE_MANUALDATARATE_Pos (20UL) /*!< Position of MANUALDATARATE field. */
#define CCM_MODE_MANUALDATARATE_Msk (0x1UL << CCM_MODE_MANUALDATARATE_Pos) /*!< Bit mask of MANUALDATARATE field. */
#define CCM_MODE_MANUALDATARATE_Disable (0UL) /*!< Disable manual data rate */
#define CCM_MODE_MANUALDATARATE_Enable (1UL) /*!< Enable manual data rate */

/* Bits 18..16 : Radio data rate that the CCM shall run synchronous with */
#define CCM_MODE_DATARATE_Pos (16UL) /*!< Position of DATARATE field. */
#define CCM_MODE_DATARATE_Msk (0x7UL << CCM_MODE_DATARATE_Pos) /*!< Bit mask of DATARATE field. */
#define CCM_MODE_DATARATE_125Kbit (0UL) /*!< 125 Kbps */
#define CCM_MODE_DATARATE_250Kbit (1UL) /*!< 250 Kbps */
#define CCM_MODE_DATARATE_500Kbps (2UL) /*!< 500 Kbps */
#define CCM_MODE_DATARATE_1Mbps (3UL) /*!< 1 Mbps */
#define CCM_MODE_DATARATE_2Mbit (4UL) /*!< 2 Mbps */
#define CCM_MODE_DATARATE_4Mbit (5UL) /*!< 4 Mbps */

/* Bits 9..8 : Protocols that uses Crypto IP Due to the differences in BLE and 802.15.4 packets, HW needs to have a separation between them. */
#define CCM_MODE_PROTOCOL_Pos (8UL) /*!< Position of PROTOCOL field. */
#define CCM_MODE_PROTOCOL_Msk (0x3UL << CCM_MODE_PROTOCOL_Pos) /*!< Bit mask of PROTOCOL field. */
#define CCM_MODE_PROTOCOL_CCM_BLE (0UL) /*!< BLE packet format */
#define CCM_MODE_PROTOCOL_CCM_154 (1UL) /*!< 802.15.4 packet format */

/* Bits 1..0 : The mode of operation to be used. The settings in this register apply when the CRYPT task is triggered. */
#define CCM_MODE_MODE_Pos (0UL) /*!< Position of MODE field. */
#define CCM_MODE_MODE_Msk (0x3UL << CCM_MODE_MODE_Pos) /*!< Bit mask of MODE field. */
#define CCM_MODE_MODE_Encryption (0UL) /*!< AES CCM packet encryption mode */
#define CCM_MODE_MODE_Decryption (1UL) /*!< AES CCM packet decryption mode */
#define CCM_MODE_MODE_FastDecryption (2UL) /*!< AES fast decrypt mode. This mode will run CCM decryption as fast as possible, i.e. not locked to a radio data rate. This can be used when a packet has been completely received. */

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

/* Register: CCM_INPTR */
/* Description: Input pointer Points to a job list containing unencrypted CCM data structure in Encryption mode Points to a job list containing encrypted CCM data structure in Decryption mode */

/* Bits 31..0 : Input pointer */
#define CCM_INPTR_INPTR_Pos (0UL) /*!< Position of INPTR field. */
#define CCM_INPTR_INPTR_Msk (0xFFFFFFFFUL << CCM_INPTR_INPTR_Pos) /*!< Bit mask of INPTR field. */

/* Register: CCM_INAMOUNT */
/* Description: Number of bytes read from the input data, not including the job list structure */

/* Bits 31..0 : Number of bytes read from the input data */
#define CCM_INAMOUNT_INAMOUNT_Pos (0UL) /*!< Position of INAMOUNT field. */
#define CCM_INAMOUNT_INAMOUNT_Msk (0xFFFFFFFFUL << CCM_INAMOUNT_INAMOUNT_Pos) /*!< Bit mask of INAMOUNT field. */

/* Register: CCM_OUTPTR */
/* Description: Output pointer Points to a job list containing encrypted CCM data structure in Encryption mode Points to a job list containing decrypted CCM data structure in Decryption mode */

/* Bits 31..0 : Output pointer */
#define CCM_OUTPTR_OUTPTR_Pos (0UL) /*!< Position of OUTPTR field. */
#define CCM_OUTPTR_OUTPTR_Msk (0xFFFFFFFFUL << CCM_OUTPTR_OUTPTR_Pos) /*!< Bit mask of OUTPTR field. */

/* Register: CCM_OUTAMOUNT */
/* Description: Number of bytes available in the output data, not including the job list structure */

/* Bits 31..0 : Number of bytes available in the output data */
#define CCM_OUTAMOUNT_OUTAMOUNT_Pos (0UL) /*!< Position of OUTAMOUNT field. */
#define CCM_OUTAMOUNT_OUTAMOUNT_Msk (0xFFFFFFFFUL << CCM_OUTAMOUNT_OUTAMOUNT_Pos) /*!< Bit mask of OUTAMOUNT field. */

/* Register: CCM_RATEOVERRIDE */
/* Description: Data rate override setting. */

/* Bits 2..0 : Data rate override setting. */
#define CCM_RATEOVERRIDE_RATEOVERRIDE_Pos (0UL) /*!< Position of RATEOVERRIDE field. */
#define CCM_RATEOVERRIDE_RATEOVERRIDE_Msk (0x7UL << CCM_RATEOVERRIDE_RATEOVERRIDE_Pos) /*!< Bit mask of RATEOVERRIDE field. */
#define CCM_RATEOVERRIDE_RATEOVERRIDE_1Mbit (0UL) /*!< 1 Mbps */
#define CCM_RATEOVERRIDE_RATEOVERRIDE_2Mbit (1UL) /*!< 2 Mbps */
#define CCM_RATEOVERRIDE_RATEOVERRIDE_125Kbps (2UL) /*!< 125 Kbps */
#define CCM_RATEOVERRIDE_RATEOVERRIDE_500Kbps (3UL) /*!< 500 Kbps */
#define CCM_RATEOVERRIDE_RATEOVERRIDE_4Mbit (4UL) /*!< 4 Mbps */

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
#define COMP_TASKS_START_TASKS_START_Trigger (1UL) /*!< Trigger task */

/* Register: COMP_TASKS_STOP */
/* Description: Stop comparator */

/* Bit 0 : Stop comparator */
#define COMP_TASKS_STOP_TASKS_STOP_Pos (0UL) /*!< Position of TASKS_STOP field. */
#define COMP_TASKS_STOP_TASKS_STOP_Msk (0x1UL << COMP_TASKS_STOP_TASKS_STOP_Pos) /*!< Bit mask of TASKS_STOP field. */
#define COMP_TASKS_STOP_TASKS_STOP_Trigger (1UL) /*!< Trigger task */

/* Register: COMP_TASKS_SAMPLE */
/* Description: Sample comparator value */

/* Bit 0 : Sample comparator value */
#define COMP_TASKS_SAMPLE_TASKS_SAMPLE_Pos (0UL) /*!< Position of TASKS_SAMPLE field. */
#define COMP_TASKS_SAMPLE_TASKS_SAMPLE_Msk (0x1UL << COMP_TASKS_SAMPLE_TASKS_SAMPLE_Pos) /*!< Bit mask of TASKS_SAMPLE field. */
#define COMP_TASKS_SAMPLE_TASKS_SAMPLE_Trigger (1UL) /*!< Trigger task */

/* Register: COMP_SUBSCRIBE_START */
/* Description: Subscribe configuration for task START */

/* Bit 31 :   */
#define COMP_SUBSCRIBE_START_EN_Pos (31UL) /*!< Position of EN field. */
#define COMP_SUBSCRIBE_START_EN_Msk (0x1UL << COMP_SUBSCRIBE_START_EN_Pos) /*!< Bit mask of EN field. */
#define COMP_SUBSCRIBE_START_EN_Disabled (0UL) /*!< Disable subscription */
#define COMP_SUBSCRIBE_START_EN_Enabled (1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task START will subscribe to */
#define COMP_SUBSCRIBE_START_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define COMP_SUBSCRIBE_START_CHIDX_Msk (0xFFUL << COMP_SUBSCRIBE_START_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: COMP_SUBSCRIBE_STOP */
/* Description: Subscribe configuration for task STOP */

/* Bit 31 :   */
#define COMP_SUBSCRIBE_STOP_EN_Pos (31UL) /*!< Position of EN field. */
#define COMP_SUBSCRIBE_STOP_EN_Msk (0x1UL << COMP_SUBSCRIBE_STOP_EN_Pos) /*!< Bit mask of EN field. */
#define COMP_SUBSCRIBE_STOP_EN_Disabled (0UL) /*!< Disable subscription */
#define COMP_SUBSCRIBE_STOP_EN_Enabled (1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task STOP will subscribe to */
#define COMP_SUBSCRIBE_STOP_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define COMP_SUBSCRIBE_STOP_CHIDX_Msk (0xFFUL << COMP_SUBSCRIBE_STOP_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: COMP_SUBSCRIBE_SAMPLE */
/* Description: Subscribe configuration for task SAMPLE */

/* Bit 31 :   */
#define COMP_SUBSCRIBE_SAMPLE_EN_Pos (31UL) /*!< Position of EN field. */
#define COMP_SUBSCRIBE_SAMPLE_EN_Msk (0x1UL << COMP_SUBSCRIBE_SAMPLE_EN_Pos) /*!< Bit mask of EN field. */
#define COMP_SUBSCRIBE_SAMPLE_EN_Disabled (0UL) /*!< Disable subscription */
#define COMP_SUBSCRIBE_SAMPLE_EN_Enabled (1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task SAMPLE will subscribe to */
#define COMP_SUBSCRIBE_SAMPLE_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define COMP_SUBSCRIBE_SAMPLE_CHIDX_Msk (0xFFUL << COMP_SUBSCRIBE_SAMPLE_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: COMP_EVENTS_READY */
/* Description: COMP is ready and output is valid */

/* Bit 0 : COMP is ready and output is valid */
#define COMP_EVENTS_READY_EVENTS_READY_Pos (0UL) /*!< Position of EVENTS_READY field. */
#define COMP_EVENTS_READY_EVENTS_READY_Msk (0x1UL << COMP_EVENTS_READY_EVENTS_READY_Pos) /*!< Bit mask of EVENTS_READY field. */
#define COMP_EVENTS_READY_EVENTS_READY_NotGenerated (0UL) /*!< Event not generated */
#define COMP_EVENTS_READY_EVENTS_READY_Generated (1UL) /*!< Event generated */

/* Register: COMP_EVENTS_DOWN */
/* Description: Downward crossing */

/* Bit 0 : Downward crossing */
#define COMP_EVENTS_DOWN_EVENTS_DOWN_Pos (0UL) /*!< Position of EVENTS_DOWN field. */
#define COMP_EVENTS_DOWN_EVENTS_DOWN_Msk (0x1UL << COMP_EVENTS_DOWN_EVENTS_DOWN_Pos) /*!< Bit mask of EVENTS_DOWN field. */
#define COMP_EVENTS_DOWN_EVENTS_DOWN_NotGenerated (0UL) /*!< Event not generated */
#define COMP_EVENTS_DOWN_EVENTS_DOWN_Generated (1UL) /*!< Event generated */

/* Register: COMP_EVENTS_UP */
/* Description: Upward crossing */

/* Bit 0 : Upward crossing */
#define COMP_EVENTS_UP_EVENTS_UP_Pos (0UL) /*!< Position of EVENTS_UP field. */
#define COMP_EVENTS_UP_EVENTS_UP_Msk (0x1UL << COMP_EVENTS_UP_EVENTS_UP_Pos) /*!< Bit mask of EVENTS_UP field. */
#define COMP_EVENTS_UP_EVENTS_UP_NotGenerated (0UL) /*!< Event not generated */
#define COMP_EVENTS_UP_EVENTS_UP_Generated (1UL) /*!< Event generated */

/* Register: COMP_EVENTS_CROSS */
/* Description: Downward or upward crossing */

/* Bit 0 : Downward or upward crossing */
#define COMP_EVENTS_CROSS_EVENTS_CROSS_Pos (0UL) /*!< Position of EVENTS_CROSS field. */
#define COMP_EVENTS_CROSS_EVENTS_CROSS_Msk (0x1UL << COMP_EVENTS_CROSS_EVENTS_CROSS_Pos) /*!< Bit mask of EVENTS_CROSS field. */
#define COMP_EVENTS_CROSS_EVENTS_CROSS_NotGenerated (0UL) /*!< Event not generated */
#define COMP_EVENTS_CROSS_EVENTS_CROSS_Generated (1UL) /*!< Event generated */

/* Register: COMP_PUBLISH_READY */
/* Description: Publish configuration for event READY */

/* Bit 31 :   */
#define COMP_PUBLISH_READY_EN_Pos (31UL) /*!< Position of EN field. */
#define COMP_PUBLISH_READY_EN_Msk (0x1UL << COMP_PUBLISH_READY_EN_Pos) /*!< Bit mask of EN field. */
#define COMP_PUBLISH_READY_EN_Disabled (0UL) /*!< Disable publishing */
#define COMP_PUBLISH_READY_EN_Enabled (1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event READY will publish to. */
#define COMP_PUBLISH_READY_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define COMP_PUBLISH_READY_CHIDX_Msk (0xFFUL << COMP_PUBLISH_READY_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: COMP_PUBLISH_DOWN */
/* Description: Publish configuration for event DOWN */

/* Bit 31 :   */
#define COMP_PUBLISH_DOWN_EN_Pos (31UL) /*!< Position of EN field. */
#define COMP_PUBLISH_DOWN_EN_Msk (0x1UL << COMP_PUBLISH_DOWN_EN_Pos) /*!< Bit mask of EN field. */
#define COMP_PUBLISH_DOWN_EN_Disabled (0UL) /*!< Disable publishing */
#define COMP_PUBLISH_DOWN_EN_Enabled (1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event DOWN will publish to. */
#define COMP_PUBLISH_DOWN_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define COMP_PUBLISH_DOWN_CHIDX_Msk (0xFFUL << COMP_PUBLISH_DOWN_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: COMP_PUBLISH_UP */
/* Description: Publish configuration for event UP */

/* Bit 31 :   */
#define COMP_PUBLISH_UP_EN_Pos (31UL) /*!< Position of EN field. */
#define COMP_PUBLISH_UP_EN_Msk (0x1UL << COMP_PUBLISH_UP_EN_Pos) /*!< Bit mask of EN field. */
#define COMP_PUBLISH_UP_EN_Disabled (0UL) /*!< Disable publishing */
#define COMP_PUBLISH_UP_EN_Enabled (1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event UP will publish to. */
#define COMP_PUBLISH_UP_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define COMP_PUBLISH_UP_CHIDX_Msk (0xFFUL << COMP_PUBLISH_UP_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: COMP_PUBLISH_CROSS */
/* Description: Publish configuration for event CROSS */

/* Bit 31 :   */
#define COMP_PUBLISH_CROSS_EN_Pos (31UL) /*!< Position of EN field. */
#define COMP_PUBLISH_CROSS_EN_Msk (0x1UL << COMP_PUBLISH_CROSS_EN_Pos) /*!< Bit mask of EN field. */
#define COMP_PUBLISH_CROSS_EN_Disabled (0UL) /*!< Disable publishing */
#define COMP_PUBLISH_CROSS_EN_Enabled (1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event CROSS will publish to. */
#define COMP_PUBLISH_CROSS_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define COMP_PUBLISH_CROSS_CHIDX_Msk (0xFFUL << COMP_PUBLISH_CROSS_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: COMP_SHORTS */
/* Description: Shortcuts between local events and tasks */

/* Bit 4 : Shortcut between event CROSS and task STOP */
#define COMP_SHORTS_CROSS_STOP_Pos (4UL) /*!< Position of CROSS_STOP field. */
#define COMP_SHORTS_CROSS_STOP_Msk (0x1UL << COMP_SHORTS_CROSS_STOP_Pos) /*!< Bit mask of CROSS_STOP field. */
#define COMP_SHORTS_CROSS_STOP_Disabled (0UL) /*!< Disable shortcut */
#define COMP_SHORTS_CROSS_STOP_Enabled (1UL) /*!< Enable shortcut */

/* Bit 3 : Shortcut between event UP and task STOP */
#define COMP_SHORTS_UP_STOP_Pos (3UL) /*!< Position of UP_STOP field. */
#define COMP_SHORTS_UP_STOP_Msk (0x1UL << COMP_SHORTS_UP_STOP_Pos) /*!< Bit mask of UP_STOP field. */
#define COMP_SHORTS_UP_STOP_Disabled (0UL) /*!< Disable shortcut */
#define COMP_SHORTS_UP_STOP_Enabled (1UL) /*!< Enable shortcut */

/* Bit 2 : Shortcut between event DOWN and task STOP */
#define COMP_SHORTS_DOWN_STOP_Pos (2UL) /*!< Position of DOWN_STOP field. */
#define COMP_SHORTS_DOWN_STOP_Msk (0x1UL << COMP_SHORTS_DOWN_STOP_Pos) /*!< Bit mask of DOWN_STOP field. */
#define COMP_SHORTS_DOWN_STOP_Disabled (0UL) /*!< Disable shortcut */
#define COMP_SHORTS_DOWN_STOP_Enabled (1UL) /*!< Enable shortcut */

/* Bit 1 : Shortcut between event READY and task STOP */
#define COMP_SHORTS_READY_STOP_Pos (1UL) /*!< Position of READY_STOP field. */
#define COMP_SHORTS_READY_STOP_Msk (0x1UL << COMP_SHORTS_READY_STOP_Pos) /*!< Bit mask of READY_STOP field. */
#define COMP_SHORTS_READY_STOP_Disabled (0UL) /*!< Disable shortcut */
#define COMP_SHORTS_READY_STOP_Enabled (1UL) /*!< Enable shortcut */

/* Bit 0 : Shortcut between event READY and task SAMPLE */
#define COMP_SHORTS_READY_SAMPLE_Pos (0UL) /*!< Position of READY_SAMPLE field. */
#define COMP_SHORTS_READY_SAMPLE_Msk (0x1UL << COMP_SHORTS_READY_SAMPLE_Pos) /*!< Bit mask of READY_SAMPLE field. */
#define COMP_SHORTS_READY_SAMPLE_Disabled (0UL) /*!< Disable shortcut */
#define COMP_SHORTS_READY_SAMPLE_Enabled (1UL) /*!< Enable shortcut */

/* Register: COMP_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 3 : Enable or disable interrupt for event CROSS */
#define COMP_INTEN_CROSS_Pos (3UL) /*!< Position of CROSS field. */
#define COMP_INTEN_CROSS_Msk (0x1UL << COMP_INTEN_CROSS_Pos) /*!< Bit mask of CROSS field. */
#define COMP_INTEN_CROSS_Disabled (0UL) /*!< Disable */
#define COMP_INTEN_CROSS_Enabled (1UL) /*!< Enable */

/* Bit 2 : Enable or disable interrupt for event UP */
#define COMP_INTEN_UP_Pos (2UL) /*!< Position of UP field. */
#define COMP_INTEN_UP_Msk (0x1UL << COMP_INTEN_UP_Pos) /*!< Bit mask of UP field. */
#define COMP_INTEN_UP_Disabled (0UL) /*!< Disable */
#define COMP_INTEN_UP_Enabled (1UL) /*!< Enable */

/* Bit 1 : Enable or disable interrupt for event DOWN */
#define COMP_INTEN_DOWN_Pos (1UL) /*!< Position of DOWN field. */
#define COMP_INTEN_DOWN_Msk (0x1UL << COMP_INTEN_DOWN_Pos) /*!< Bit mask of DOWN field. */
#define COMP_INTEN_DOWN_Disabled (0UL) /*!< Disable */
#define COMP_INTEN_DOWN_Enabled (1UL) /*!< Enable */

/* Bit 0 : Enable or disable interrupt for event READY */
#define COMP_INTEN_READY_Pos (0UL) /*!< Position of READY field. */
#define COMP_INTEN_READY_Msk (0x1UL << COMP_INTEN_READY_Pos) /*!< Bit mask of READY field. */
#define COMP_INTEN_READY_Disabled (0UL) /*!< Disable */
#define COMP_INTEN_READY_Enabled (1UL) /*!< Enable */

/* Register: COMP_INTENSET */
/* Description: Enable interrupt */

/* Bit 3 : Write '1' to enable interrupt for event CROSS */
#define COMP_INTENSET_CROSS_Pos (3UL) /*!< Position of CROSS field. */
#define COMP_INTENSET_CROSS_Msk (0x1UL << COMP_INTENSET_CROSS_Pos) /*!< Bit mask of CROSS field. */
#define COMP_INTENSET_CROSS_Disabled (0UL) /*!< Read: Disabled */
#define COMP_INTENSET_CROSS_Enabled (1UL) /*!< Read: Enabled */
#define COMP_INTENSET_CROSS_Set (1UL) /*!< Enable */

/* Bit 2 : Write '1' to enable interrupt for event UP */
#define COMP_INTENSET_UP_Pos (2UL) /*!< Position of UP field. */
#define COMP_INTENSET_UP_Msk (0x1UL << COMP_INTENSET_UP_Pos) /*!< Bit mask of UP field. */
#define COMP_INTENSET_UP_Disabled (0UL) /*!< Read: Disabled */
#define COMP_INTENSET_UP_Enabled (1UL) /*!< Read: Enabled */
#define COMP_INTENSET_UP_Set (1UL) /*!< Enable */

/* Bit 1 : Write '1' to enable interrupt for event DOWN */
#define COMP_INTENSET_DOWN_Pos (1UL) /*!< Position of DOWN field. */
#define COMP_INTENSET_DOWN_Msk (0x1UL << COMP_INTENSET_DOWN_Pos) /*!< Bit mask of DOWN field. */
#define COMP_INTENSET_DOWN_Disabled (0UL) /*!< Read: Disabled */
#define COMP_INTENSET_DOWN_Enabled (1UL) /*!< Read: Enabled */
#define COMP_INTENSET_DOWN_Set (1UL) /*!< Enable */

/* Bit 0 : Write '1' to enable interrupt for event READY */
#define COMP_INTENSET_READY_Pos (0UL) /*!< Position of READY field. */
#define COMP_INTENSET_READY_Msk (0x1UL << COMP_INTENSET_READY_Pos) /*!< Bit mask of READY field. */
#define COMP_INTENSET_READY_Disabled (0UL) /*!< Read: Disabled */
#define COMP_INTENSET_READY_Enabled (1UL) /*!< Read: Enabled */
#define COMP_INTENSET_READY_Set (1UL) /*!< Enable */

/* Register: COMP_INTENCLR */
/* Description: Disable interrupt */

/* Bit 3 : Write '1' to disable interrupt for event CROSS */
#define COMP_INTENCLR_CROSS_Pos (3UL) /*!< Position of CROSS field. */
#define COMP_INTENCLR_CROSS_Msk (0x1UL << COMP_INTENCLR_CROSS_Pos) /*!< Bit mask of CROSS field. */
#define COMP_INTENCLR_CROSS_Disabled (0UL) /*!< Read: Disabled */
#define COMP_INTENCLR_CROSS_Enabled (1UL) /*!< Read: Enabled */
#define COMP_INTENCLR_CROSS_Clear (1UL) /*!< Disable */

/* Bit 2 : Write '1' to disable interrupt for event UP */
#define COMP_INTENCLR_UP_Pos (2UL) /*!< Position of UP field. */
#define COMP_INTENCLR_UP_Msk (0x1UL << COMP_INTENCLR_UP_Pos) /*!< Bit mask of UP field. */
#define COMP_INTENCLR_UP_Disabled (0UL) /*!< Read: Disabled */
#define COMP_INTENCLR_UP_Enabled (1UL) /*!< Read: Enabled */
#define COMP_INTENCLR_UP_Clear (1UL) /*!< Disable */

/* Bit 1 : Write '1' to disable interrupt for event DOWN */
#define COMP_INTENCLR_DOWN_Pos (1UL) /*!< Position of DOWN field. */
#define COMP_INTENCLR_DOWN_Msk (0x1UL << COMP_INTENCLR_DOWN_Pos) /*!< Bit mask of DOWN field. */
#define COMP_INTENCLR_DOWN_Disabled (0UL) /*!< Read: Disabled */
#define COMP_INTENCLR_DOWN_Enabled (1UL) /*!< Read: Enabled */
#define COMP_INTENCLR_DOWN_Clear (1UL) /*!< Disable */

/* Bit 0 : Write '1' to disable interrupt for event READY */
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
#define COMP_PSEL_PSEL_AnalogInput7 (7UL) /*!< AIN7 selected as analog input */

/* Register: COMP_REFSEL */
/* Description: Reference source select for single-ended mode */

/* Bits 2..0 : Reference select */
#define COMP_REFSEL_REFSEL_Pos (0UL) /*!< Position of REFSEL field. */
#define COMP_REFSEL_REFSEL_Msk (0x7UL << COMP_REFSEL_REFSEL_Pos) /*!< Bit mask of REFSEL field. */
#define COMP_REFSEL_REFSEL_Int1V2 (0UL) /*!< VREF = internal 1.2 V reference (AVDD_AO_1V8 &gt;= 1.7 V) */
#define COMP_REFSEL_REFSEL_Int1V8 (1UL) /*!< VREF = internal 1.8 V reference (VDD &gt;= VREF + 0.2 V) */
#define COMP_REFSEL_REFSEL_Int2V4 (2UL) /*!< VREF = internal 2.4 V reference (VDD &gt;= VREF + 0.2 V) */
#define COMP_REFSEL_REFSEL_AVDD_AO_1V8 (4UL) /*!< VREF = AVDD_AO_1V8 */
#define COMP_REFSEL_REFSEL_ARef (5UL) /*!< VREF = AREF */
#define COMP_REFSEL_REFSEL_Diff (7UL) /*!< VREF=Differential mode (power down built-in reference and disconnect resistor ladder) */

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
#define COMP_BUFFER_BUFFER_Disable (0UL) /*!< VOUT is high impedance */
#define COMP_BUFFER_BUFFER_Enable (1UL) /*!< VOUT equals VIN */

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
#define COMP_MUTESEL_MUTEEXTREFSEL_Default (0UL) /*!< EXTREFSEL is connected */
#define COMP_MUTESEL_MUTEEXTREFSEL_Disconnect (1UL) /*!< Disconnect EXTREFSEL */

/* Bit 0 : Disconnect PSEL even when COMP is powered */
#define COMP_MUTESEL_MUTEPSEL_Pos (0UL) /*!< Position of MUTEPSEL field. */
#define COMP_MUTESEL_MUTEPSEL_Msk (0x1UL << COMP_MUTESEL_MUTEPSEL_Pos) /*!< Bit mask of MUTEPSEL field. */
#define COMP_MUTESEL_MUTEPSEL_Default (0UL) /*!< PSEL is connected */
#define COMP_MUTESEL_MUTEPSEL_Disconnect (1UL) /*!< Disconnect PSEL */

/* Register: COMP_RETAIN */
/* Description: Retain signal */

/* Bit 0 : Retain signal */
#define COMP_RETAIN_RETAIN_Pos (0UL) /*!< Position of RETAIN field. */
#define COMP_RETAIN_RETAIN_Msk (0x1UL << COMP_RETAIN_RETAIN_Pos) /*!< Bit mask of RETAIN field. */
#define COMP_RETAIN_RETAIN_Disable (0UL) /*!< No retain */
#define COMP_RETAIN_RETAIN_Enable (1UL) /*!< Retain is active */

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

/* Bit 0 : Speed and power modes */
#define COMP_MODE_SP_Pos (0UL) /*!< Position of SP field. */
#define COMP_MODE_SP_Msk (0x1UL << COMP_MODE_SP_Pos) /*!< Bit mask of SP field. */
#define COMP_MODE_SP_Low (0UL) /*!< Low-power mode */
#define COMP_MODE_SP_High (1UL) /*!< High-speed mode */

/* Register: COMP_HYST */
/* Description: Comparator hysteresis enable */

/* Bit 0 : Comparator hysteresis */
#define COMP_HYST_HYST_Pos (0UL) /*!< Position of HYST field. */
#define COMP_HYST_HYST_Msk (0x1UL << COMP_HYST_HYST_Pos) /*!< Bit mask of HYST field. */
#define COMP_HYST_HYST_NoHyst (0UL) /*!< Comparator hysteresis disabled */
#define COMP_HYST_HYST_Hyst40mV (1UL) /*!< Comparator hysteresis enabled */

/* Register: COMP_ISOURCE */
/* Description: Current source select on analog input */

/* Bits 1..0 : Current source select on analog input */
#define COMP_ISOURCE_ISOURCE_Pos (0UL) /*!< Position of ISOURCE field. */
#define COMP_ISOURCE_ISOURCE_Msk (0x3UL << COMP_ISOURCE_ISOURCE_Pos) /*!< Bit mask of ISOURCE field. */
#define COMP_ISOURCE_ISOURCE_Off (0UL) /*!< Current source disabled */
#define COMP_ISOURCE_ISOURCE_Ien2uA5 (1UL) /*!< Current source enabled (+/- 2.5 uA) */
#define COMP_ISOURCE_ISOURCE_Ien5uA (2UL) /*!< Current source enabled (+/- 5 uA) */
#define COMP_ISOURCE_ISOURCE_Ien10uA (3UL) /*!< Current source enabled (+/- 10 uA) */

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

/* Register: ECB_TASKS_CONFIG */
/* Description: Fetches AES Key from CONFIGPTR job list into the KEY registers */

/* Bit 0 : Fetches AES Key from CONFIGPTR job list into the KEY registers */
#define ECB_TASKS_CONFIG_TASKS_CONFIG_Pos (0UL) /*!< Position of TASKS_CONFIG field. */
#define ECB_TASKS_CONFIG_TASKS_CONFIG_Msk (0x1UL << ECB_TASKS_CONFIG_TASKS_CONFIG_Pos) /*!< Bit mask of TASKS_CONFIG field. */
#define ECB_TASKS_CONFIG_TASKS_CONFIG_Trigger (1UL) /*!< Trigger task */

/* Register: ECB_TASKS_STARTECB */
/* Description: Start ECB block encrypt */

/* Bit 0 : Start ECB block encrypt */
#define ECB_TASKS_STARTECB_TASKS_STARTECB_Pos (0UL) /*!< Position of TASKS_STARTECB field. */
#define ECB_TASKS_STARTECB_TASKS_STARTECB_Msk (0x1UL << ECB_TASKS_STARTECB_TASKS_STARTECB_Pos) /*!< Bit mask of TASKS_STARTECB field. */
#define ECB_TASKS_STARTECB_TASKS_STARTECB_Trigger (1UL) /*!< Trigger task */

/* Register: ECB_TASKS_STOPECB */
/* Description: Abort a possible executing ECB operation */

/* Bit 0 : Abort a possible executing ECB operation */
#define ECB_TASKS_STOPECB_TASKS_STOPECB_Pos (0UL) /*!< Position of TASKS_STOPECB field. */
#define ECB_TASKS_STOPECB_TASKS_STOPECB_Msk (0x1UL << ECB_TASKS_STOPECB_TASKS_STOPECB_Pos) /*!< Bit mask of TASKS_STOPECB field. */
#define ECB_TASKS_STOPECB_TASKS_STOPECB_Trigger (1UL) /*!< Trigger task */

/* Register: ECB_SUBSCRIBE_CONFIG */
/* Description: Subscribe configuration for task CONFIG */

/* Bit 31 :   */
#define ECB_SUBSCRIBE_CONFIG_EN_Pos (31UL) /*!< Position of EN field. */
#define ECB_SUBSCRIBE_CONFIG_EN_Msk (0x1UL << ECB_SUBSCRIBE_CONFIG_EN_Pos) /*!< Bit mask of EN field. */
#define ECB_SUBSCRIBE_CONFIG_EN_Disabled (0UL) /*!< Disable subscription */
#define ECB_SUBSCRIBE_CONFIG_EN_Enabled (1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task CONFIG will subscribe to */
#define ECB_SUBSCRIBE_CONFIG_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define ECB_SUBSCRIBE_CONFIG_CHIDX_Msk (0xFFUL << ECB_SUBSCRIBE_CONFIG_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: ECB_SUBSCRIBE_STARTECB */
/* Description: Subscribe configuration for task STARTECB */

/* Bit 31 :   */
#define ECB_SUBSCRIBE_STARTECB_EN_Pos (31UL) /*!< Position of EN field. */
#define ECB_SUBSCRIBE_STARTECB_EN_Msk (0x1UL << ECB_SUBSCRIBE_STARTECB_EN_Pos) /*!< Bit mask of EN field. */
#define ECB_SUBSCRIBE_STARTECB_EN_Disabled (0UL) /*!< Disable subscription */
#define ECB_SUBSCRIBE_STARTECB_EN_Enabled (1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task STARTECB will subscribe to */
#define ECB_SUBSCRIBE_STARTECB_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define ECB_SUBSCRIBE_STARTECB_CHIDX_Msk (0xFFUL << ECB_SUBSCRIBE_STARTECB_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: ECB_SUBSCRIBE_STOPECB */
/* Description: Subscribe configuration for task STOPECB */

/* Bit 31 :   */
#define ECB_SUBSCRIBE_STOPECB_EN_Pos (31UL) /*!< Position of EN field. */
#define ECB_SUBSCRIBE_STOPECB_EN_Msk (0x1UL << ECB_SUBSCRIBE_STOPECB_EN_Pos) /*!< Bit mask of EN field. */
#define ECB_SUBSCRIBE_STOPECB_EN_Disabled (0UL) /*!< Disable subscription */
#define ECB_SUBSCRIBE_STOPECB_EN_Enabled (1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task STOPECB will subscribe to */
#define ECB_SUBSCRIBE_STOPECB_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define ECB_SUBSCRIBE_STOPECB_CHIDX_Msk (0xFFUL << ECB_SUBSCRIBE_STOPECB_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: ECB_EVENTS_ENDCONFIG */
/* Description: ECB block configuration complete */

/* Bit 0 : ECB block configuration complete */
#define ECB_EVENTS_ENDCONFIG_EVENTS_ENDCONFIG_Pos (0UL) /*!< Position of EVENTS_ENDCONFIG field. */
#define ECB_EVENTS_ENDCONFIG_EVENTS_ENDCONFIG_Msk (0x1UL << ECB_EVENTS_ENDCONFIG_EVENTS_ENDCONFIG_Pos) /*!< Bit mask of EVENTS_ENDCONFIG field. */
#define ECB_EVENTS_ENDCONFIG_EVENTS_ENDCONFIG_NotGenerated (0UL) /*!< Event not generated */
#define ECB_EVENTS_ENDCONFIG_EVENTS_ENDCONFIG_Generated (1UL) /*!< Event generated */

/* Register: ECB_EVENTS_ENDECB */
/* Description: ECB block encrypt complete */

/* Bit 0 : ECB block encrypt complete */
#define ECB_EVENTS_ENDECB_EVENTS_ENDECB_Pos (0UL) /*!< Position of EVENTS_ENDECB field. */
#define ECB_EVENTS_ENDECB_EVENTS_ENDECB_Msk (0x1UL << ECB_EVENTS_ENDECB_EVENTS_ENDECB_Pos) /*!< Bit mask of EVENTS_ENDECB field. */
#define ECB_EVENTS_ENDECB_EVENTS_ENDECB_NotGenerated (0UL) /*!< Event not generated */
#define ECB_EVENTS_ENDECB_EVENTS_ENDECB_Generated (1UL) /*!< Event generated */

/* Register: ECB_EVENTS_ERRORECB */
/* Description: ECB block encrypt aborted because of a STOPECB task or due to an error */

/* Bit 0 : ECB block encrypt aborted because of a STOPECB task or due to an error */
#define ECB_EVENTS_ERRORECB_EVENTS_ERRORECB_Pos (0UL) /*!< Position of EVENTS_ERRORECB field. */
#define ECB_EVENTS_ERRORECB_EVENTS_ERRORECB_Msk (0x1UL << ECB_EVENTS_ERRORECB_EVENTS_ERRORECB_Pos) /*!< Bit mask of EVENTS_ERRORECB field. */
#define ECB_EVENTS_ERRORECB_EVENTS_ERRORECB_NotGenerated (0UL) /*!< Event not generated */
#define ECB_EVENTS_ERRORECB_EVENTS_ERRORECB_Generated (1UL) /*!< Event generated */

/* Register: ECB_PUBLISH_ENDCONFIG */
/* Description: Publish configuration for event ENDCONFIG */

/* Bit 31 :   */
#define ECB_PUBLISH_ENDCONFIG_EN_Pos (31UL) /*!< Position of EN field. */
#define ECB_PUBLISH_ENDCONFIG_EN_Msk (0x1UL << ECB_PUBLISH_ENDCONFIG_EN_Pos) /*!< Bit mask of EN field. */
#define ECB_PUBLISH_ENDCONFIG_EN_Disabled (0UL) /*!< Disable publishing */
#define ECB_PUBLISH_ENDCONFIG_EN_Enabled (1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event ENDCONFIG will publish to. */
#define ECB_PUBLISH_ENDCONFIG_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define ECB_PUBLISH_ENDCONFIG_CHIDX_Msk (0xFFUL << ECB_PUBLISH_ENDCONFIG_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: ECB_PUBLISH_ENDECB */
/* Description: Publish configuration for event ENDECB */

/* Bit 31 :   */
#define ECB_PUBLISH_ENDECB_EN_Pos (31UL) /*!< Position of EN field. */
#define ECB_PUBLISH_ENDECB_EN_Msk (0x1UL << ECB_PUBLISH_ENDECB_EN_Pos) /*!< Bit mask of EN field. */
#define ECB_PUBLISH_ENDECB_EN_Disabled (0UL) /*!< Disable publishing */
#define ECB_PUBLISH_ENDECB_EN_Enabled (1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event ENDECB will publish to. */
#define ECB_PUBLISH_ENDECB_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define ECB_PUBLISH_ENDECB_CHIDX_Msk (0xFFUL << ECB_PUBLISH_ENDECB_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: ECB_PUBLISH_ERRORECB */
/* Description: Publish configuration for event ERRORECB */

/* Bit 31 :   */
#define ECB_PUBLISH_ERRORECB_EN_Pos (31UL) /*!< Position of EN field. */
#define ECB_PUBLISH_ERRORECB_EN_Msk (0x1UL << ECB_PUBLISH_ERRORECB_EN_Pos) /*!< Bit mask of EN field. */
#define ECB_PUBLISH_ERRORECB_EN_Disabled (0UL) /*!< Disable publishing */
#define ECB_PUBLISH_ERRORECB_EN_Enabled (1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event ERRORECB will publish to. */
#define ECB_PUBLISH_ERRORECB_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define ECB_PUBLISH_ERRORECB_CHIDX_Msk (0xFFUL << ECB_PUBLISH_ERRORECB_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: ECB_INTENSET */
/* Description: Enable interrupt */

/* Bit 2 : Write '1' to enable interrupt for event ERRORECB */
#define ECB_INTENSET_ERRORECB_Pos (2UL) /*!< Position of ERRORECB field. */
#define ECB_INTENSET_ERRORECB_Msk (0x1UL << ECB_INTENSET_ERRORECB_Pos) /*!< Bit mask of ERRORECB field. */
#define ECB_INTENSET_ERRORECB_Disabled (0UL) /*!< Read: Disabled */
#define ECB_INTENSET_ERRORECB_Enabled (1UL) /*!< Read: Enabled */
#define ECB_INTENSET_ERRORECB_Set (1UL) /*!< Enable */

/* Bit 1 : Write '1' to enable interrupt for event ENDECB */
#define ECB_INTENSET_ENDECB_Pos (1UL) /*!< Position of ENDECB field. */
#define ECB_INTENSET_ENDECB_Msk (0x1UL << ECB_INTENSET_ENDECB_Pos) /*!< Bit mask of ENDECB field. */
#define ECB_INTENSET_ENDECB_Disabled (0UL) /*!< Read: Disabled */
#define ECB_INTENSET_ENDECB_Enabled (1UL) /*!< Read: Enabled */
#define ECB_INTENSET_ENDECB_Set (1UL) /*!< Enable */

/* Bit 0 : Write '1' to enable interrupt for event ENDCONFIG */
#define ECB_INTENSET_ENDCONFIG_Pos (0UL) /*!< Position of ENDCONFIG field. */
#define ECB_INTENSET_ENDCONFIG_Msk (0x1UL << ECB_INTENSET_ENDCONFIG_Pos) /*!< Bit mask of ENDCONFIG field. */
#define ECB_INTENSET_ENDCONFIG_Disabled (0UL) /*!< Read: Disabled */
#define ECB_INTENSET_ENDCONFIG_Enabled (1UL) /*!< Read: Enabled */
#define ECB_INTENSET_ENDCONFIG_Set (1UL) /*!< Enable */

/* Register: ECB_INTENCLR */
/* Description: Disable interrupt */

/* Bit 2 : Write '1' to disable interrupt for event ERRORECB */
#define ECB_INTENCLR_ERRORECB_Pos (2UL) /*!< Position of ERRORECB field. */
#define ECB_INTENCLR_ERRORECB_Msk (0x1UL << ECB_INTENCLR_ERRORECB_Pos) /*!< Bit mask of ERRORECB field. */
#define ECB_INTENCLR_ERRORECB_Disabled (0UL) /*!< Read: Disabled */
#define ECB_INTENCLR_ERRORECB_Enabled (1UL) /*!< Read: Enabled */
#define ECB_INTENCLR_ERRORECB_Clear (1UL) /*!< Disable */

/* Bit 1 : Write '1' to disable interrupt for event ENDECB */
#define ECB_INTENCLR_ENDECB_Pos (1UL) /*!< Position of ENDECB field. */
#define ECB_INTENCLR_ENDECB_Msk (0x1UL << ECB_INTENCLR_ENDECB_Pos) /*!< Bit mask of ENDECB field. */
#define ECB_INTENCLR_ENDECB_Disabled (0UL) /*!< Read: Disabled */
#define ECB_INTENCLR_ENDECB_Enabled (1UL) /*!< Read: Enabled */
#define ECB_INTENCLR_ENDECB_Clear (1UL) /*!< Disable */

/* Bit 0 : Write '1' to disable interrupt for event ENDCONFIG */
#define ECB_INTENCLR_ENDCONFIG_Pos (0UL) /*!< Position of ENDCONFIG field. */
#define ECB_INTENCLR_ENDCONFIG_Msk (0x1UL << ECB_INTENCLR_ENDCONFIG_Pos) /*!< Bit mask of ENDCONFIG field. */
#define ECB_INTENCLR_ENDCONFIG_Disabled (0UL) /*!< Read: Disabled */
#define ECB_INTENCLR_ENDCONFIG_Enabled (1UL) /*!< Read: Enabled */
#define ECB_INTENCLR_ENDCONFIG_Clear (1UL) /*!< Disable */

/* Register: ECB_KEY_VALUE */
/* Description: Description collection: 128-bit AES key */

/* Bits 31..0 : AES 128-bit key value, bits (32*(i+1))-1 : (32*i) */
#define ECB_KEY_VALUE_VALUE_Pos (0UL) /*!< Position of VALUE field. */
#define ECB_KEY_VALUE_VALUE_Msk (0xFFFFFFFFUL << ECB_KEY_VALUE_VALUE_Pos) /*!< Bit mask of VALUE field. */

/* Register: ECB_INPTR */
/* Description: ECB input pointer */

/* Bits 31..0 : Points to a job list containing unencrypted ECB data structure */
#define ECB_INPTR_INPTR_Pos (0UL) /*!< Position of INPTR field. */
#define ECB_INPTR_INPTR_Msk (0xFFFFFFFFUL << ECB_INPTR_INPTR_Pos) /*!< Bit mask of INPTR field. */

/* Register: ECB_INPTRAMOUNT */
/* Description: Number of bytes read from the input data, not including the job list structure */

/* Bits 31..0 : Number of bytes read from the input data */
#define ECB_INPTRAMOUNT_INPTRAMOUNT_Pos (0UL) /*!< Position of INPTRAMOUNT field. */
#define ECB_INPTRAMOUNT_INPTRAMOUNT_Msk (0xFFFFFFFFUL << ECB_INPTRAMOUNT_INPTRAMOUNT_Pos) /*!< Bit mask of INPTRAMOUNT field. */

/* Register: ECB_OUTPTR */
/* Description: Output pointer Points to a job list containing encrypted ECB data structure */

/* Bits 31..0 : Output pointer */
#define ECB_OUTPTR_OUTPTR_Pos (0UL) /*!< Position of OUTPTR field. */
#define ECB_OUTPTR_OUTPTR_Msk (0xFFFFFFFFUL << ECB_OUTPTR_OUTPTR_Pos) /*!< Bit mask of OUTPTR field. */

/* Register: ECB_OUTPTRAMOUNT */
/* Description: Number of bytes available in the output data, not including the job list structure */

/* Bits 31..0 : Number of bytes available in the output data */
#define ECB_OUTPTRAMOUNT_OUTPTRAMOUNT_Pos (0UL) /*!< Position of OUTPTRAMOUNT field. */
#define ECB_OUTPTRAMOUNT_OUTPTRAMOUNT_Msk (0xFFFFFFFFUL << ECB_OUTPTRAMOUNT_OUTPTRAMOUNT_Pos) /*!< Bit mask of OUTPTRAMOUNT field. */


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
/* Description: Select between default DETECT signal behavior and LDETECT mode (For non-secure pin only) */

/* Bit 0 : Select between default DETECT signal behavior and LDETECT mode */
#define GPIO_DETECTMODE_DETECTMODE_Pos (0UL) /*!< Position of DETECTMODE field. */
#define GPIO_DETECTMODE_DETECTMODE_Msk (0x1UL << GPIO_DETECTMODE_DETECTMODE_Pos) /*!< Bit mask of DETECTMODE field. */
#define GPIO_DETECTMODE_DETECTMODE_Default (0UL) /*!< DETECT directly connected to PIN DETECT signals */
#define GPIO_DETECTMODE_DETECTMODE_LDETECT (1UL) /*!< Use the latched LDETECT behavior */

/* Register: GPIO_DETECTMODE_SEC */
/* Description: Select between default DETECT signal behavior and LDETECT mode (For secure pin only) */

/* Bit 0 : Select between default DETECT signal behavior and LDETECT mode */
#define GPIO_DETECTMODE_SEC_DETECTMODE_Pos (0UL) /*!< Position of DETECTMODE field. */
#define GPIO_DETECTMODE_SEC_DETECTMODE_Msk (0x1UL << GPIO_DETECTMODE_SEC_DETECTMODE_Pos) /*!< Bit mask of DETECTMODE field. */
#define GPIO_DETECTMODE_SEC_DETECTMODE_Default (0UL) /*!< DETECT directly connected to PIN DETECT signals */
#define GPIO_DETECTMODE_SEC_DETECTMODE_LDETECT (1UL) /*!< Use the latched LDETECT behavior */

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
#define GPIO_PIN_CNF_SENSE_Disabled (0UL) /*!< Disabled */
#define GPIO_PIN_CNF_SENSE_High (2UL) /*!< Sense for high level */
#define GPIO_PIN_CNF_SENSE_Low (3UL) /*!< Sense for low level */

/* Bits 11..8 : Drive configuration */
#define GPIO_PIN_CNF_DRIVE_Pos (8UL) /*!< Position of DRIVE field. */
#define GPIO_PIN_CNF_DRIVE_Msk (0xFUL << GPIO_PIN_CNF_DRIVE_Pos) /*!< Bit mask of DRIVE field. */
#define GPIO_PIN_CNF_DRIVE_S0S1 (0UL) /*!< Standard '0', standard '1' */
#define GPIO_PIN_CNF_DRIVE_H0S1 (1UL) /*!< High drive '0', standard '1' */
#define GPIO_PIN_CNF_DRIVE_S0H1 (2UL) /*!< Standard '0', high drive '1' */
#define GPIO_PIN_CNF_DRIVE_H0H1 (3UL) /*!< High drive '0', high 'drive '1'' */
#define GPIO_PIN_CNF_DRIVE_D0S1 (4UL) /*!< Disconnect '0', standard '1' (normally used for wired-or connections) */
#define GPIO_PIN_CNF_DRIVE_D0H1 (5UL) /*!< Disconnect '0', high drive '1' (normally used for wired-or connections) */
#define GPIO_PIN_CNF_DRIVE_S0D1 (6UL) /*!< Standard '0', disconnect '1' (normally used for wired-and connections) */
#define GPIO_PIN_CNF_DRIVE_H0D1 (7UL) /*!< High drive '0', disconnect '1' (normally used for wired-and connections) */
#define GPIO_PIN_CNF_DRIVE_E0S1 (9UL) /*!< Extra high drive '0', standard '1' */
#define GPIO_PIN_CNF_DRIVE_S0E1 (10UL) /*!< Standard '0', extra high drive '1' */
#define GPIO_PIN_CNF_DRIVE_E0E1 (11UL) /*!< Extra high drive '0', extra high drive '1' */
#define GPIO_PIN_CNF_DRIVE_D0E1 (13UL) /*!< Disconnect '0', extra high drive '1' (normally used for wired-or connections) */
#define GPIO_PIN_CNF_DRIVE_E0D1 (15UL) /*!< Extra high drive '0', disconnect '1' (normally used for wired-and connections) */

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


/* Peripheral: RADIO */
/* Description: 2.4 GHz radio 2.4 GHz radio */

/* Register: RADIO_TASKS_TXEN */
/* Description: Enable RADIO in TX mode */

/* Bit 0 : Enable RADIO in TX mode */
#define RADIO_TASKS_TXEN_TASKS_TXEN_Pos (0UL) /*!< Position of TASKS_TXEN field. */
#define RADIO_TASKS_TXEN_TASKS_TXEN_Msk (0x1UL << RADIO_TASKS_TXEN_TASKS_TXEN_Pos) /*!< Bit mask of TASKS_TXEN field. */
#define RADIO_TASKS_TXEN_TASKS_TXEN_Trigger (1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_RXEN */
/* Description: Enable RADIO in RX mode */

/* Bit 0 : Enable RADIO in RX mode */
#define RADIO_TASKS_RXEN_TASKS_RXEN_Pos (0UL) /*!< Position of TASKS_RXEN field. */
#define RADIO_TASKS_RXEN_TASKS_RXEN_Msk (0x1UL << RADIO_TASKS_RXEN_TASKS_RXEN_Pos) /*!< Bit mask of TASKS_RXEN field. */
#define RADIO_TASKS_RXEN_TASKS_RXEN_Trigger (1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_START */
/* Description: Start RADIO */

/* Bit 0 : Start RADIO */
#define RADIO_TASKS_START_TASKS_START_Pos (0UL) /*!< Position of TASKS_START field. */
#define RADIO_TASKS_START_TASKS_START_Msk (0x1UL << RADIO_TASKS_START_TASKS_START_Pos) /*!< Bit mask of TASKS_START field. */
#define RADIO_TASKS_START_TASKS_START_Trigger (1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_STOP */
/* Description: Stop RADIO */

/* Bit 0 : Stop RADIO */
#define RADIO_TASKS_STOP_TASKS_STOP_Pos (0UL) /*!< Position of TASKS_STOP field. */
#define RADIO_TASKS_STOP_TASKS_STOP_Msk (0x1UL << RADIO_TASKS_STOP_TASKS_STOP_Pos) /*!< Bit mask of TASKS_STOP field. */
#define RADIO_TASKS_STOP_TASKS_STOP_Trigger (1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_DISABLE */
/* Description: Disable RADIO */

/* Bit 0 : Disable RADIO */
#define RADIO_TASKS_DISABLE_TASKS_DISABLE_Pos (0UL) /*!< Position of TASKS_DISABLE field. */
#define RADIO_TASKS_DISABLE_TASKS_DISABLE_Msk (0x1UL << RADIO_TASKS_DISABLE_TASKS_DISABLE_Pos) /*!< Bit mask of TASKS_DISABLE field. */
#define RADIO_TASKS_DISABLE_TASKS_DISABLE_Trigger (1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_RSSISTART */
/* Description: Start the RSSI and take one single sample of the receive signal strength */

/* Bit 0 : Start the RSSI and take one single sample of the receive signal strength */
#define RADIO_TASKS_RSSISTART_TASKS_RSSISTART_Pos (0UL) /*!< Position of TASKS_RSSISTART field. */
#define RADIO_TASKS_RSSISTART_TASKS_RSSISTART_Msk (0x1UL << RADIO_TASKS_RSSISTART_TASKS_RSSISTART_Pos) /*!< Bit mask of TASKS_RSSISTART field. */
#define RADIO_TASKS_RSSISTART_TASKS_RSSISTART_Trigger (1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_BCSTART */
/* Description: Start the bit counter */

/* Bit 0 : Start the bit counter */
#define RADIO_TASKS_BCSTART_TASKS_BCSTART_Pos (0UL) /*!< Position of TASKS_BCSTART field. */
#define RADIO_TASKS_BCSTART_TASKS_BCSTART_Msk (0x1UL << RADIO_TASKS_BCSTART_TASKS_BCSTART_Pos) /*!< Bit mask of TASKS_BCSTART field. */
#define RADIO_TASKS_BCSTART_TASKS_BCSTART_Trigger (1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_BCSTOP */
/* Description: Stop the bit counter */

/* Bit 0 : Stop the bit counter */
#define RADIO_TASKS_BCSTOP_TASKS_BCSTOP_Pos (0UL) /*!< Position of TASKS_BCSTOP field. */
#define RADIO_TASKS_BCSTOP_TASKS_BCSTOP_Msk (0x1UL << RADIO_TASKS_BCSTOP_TASKS_BCSTOP_Pos) /*!< Bit mask of TASKS_BCSTOP field. */
#define RADIO_TASKS_BCSTOP_TASKS_BCSTOP_Trigger (1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_EDSTART */
/* Description: Start the energy detect measurement used in IEEE 802.15.4 mode */

/* Bit 0 : Start the energy detect measurement used in IEEE 802.15.4 mode */
#define RADIO_TASKS_EDSTART_TASKS_EDSTART_Pos (0UL) /*!< Position of TASKS_EDSTART field. */
#define RADIO_TASKS_EDSTART_TASKS_EDSTART_Msk (0x1UL << RADIO_TASKS_EDSTART_TASKS_EDSTART_Pos) /*!< Bit mask of TASKS_EDSTART field. */
#define RADIO_TASKS_EDSTART_TASKS_EDSTART_Trigger (1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_EDSTOP */
/* Description: Stop the energy detect measurement */

/* Bit 0 : Stop the energy detect measurement */
#define RADIO_TASKS_EDSTOP_TASKS_EDSTOP_Pos (0UL) /*!< Position of TASKS_EDSTOP field. */
#define RADIO_TASKS_EDSTOP_TASKS_EDSTOP_Msk (0x1UL << RADIO_TASKS_EDSTOP_TASKS_EDSTOP_Pos) /*!< Bit mask of TASKS_EDSTOP field. */
#define RADIO_TASKS_EDSTOP_TASKS_EDSTOP_Trigger (1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_CCASTART */
/* Description: Start the clear channel assessment used in IEEE 802.15.4 mode */

/* Bit 0 : Start the clear channel assessment used in IEEE 802.15.4 mode */
#define RADIO_TASKS_CCASTART_TASKS_CCASTART_Pos (0UL) /*!< Position of TASKS_CCASTART field. */
#define RADIO_TASKS_CCASTART_TASKS_CCASTART_Msk (0x1UL << RADIO_TASKS_CCASTART_TASKS_CCASTART_Pos) /*!< Bit mask of TASKS_CCASTART field. */
#define RADIO_TASKS_CCASTART_TASKS_CCASTART_Trigger (1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_CCASTOP */
/* Description: Stop the clear channel assessment */

/* Bit 0 : Stop the clear channel assessment */
#define RADIO_TASKS_CCASTOP_TASKS_CCASTOP_Pos (0UL) /*!< Position of TASKS_CCASTOP field. */
#define RADIO_TASKS_CCASTOP_TASKS_CCASTOP_Msk (0x1UL << RADIO_TASKS_CCASTOP_TASKS_CCASTOP_Pos) /*!< Bit mask of TASKS_CCASTOP field. */
#define RADIO_TASKS_CCASTOP_TASKS_CCASTOP_Trigger (1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_DFESTART */
/* Description: Start DFE operation */

/* Bit 0 : Start DFE operation */
#define RADIO_TASKS_DFESTART_TASKS_DFESTART_Pos (0UL) /*!< Position of TASKS_DFESTART field. */
#define RADIO_TASKS_DFESTART_TASKS_DFESTART_Msk (0x1UL << RADIO_TASKS_DFESTART_TASKS_DFESTART_Pos) /*!< Bit mask of TASKS_DFESTART field. */
#define RADIO_TASKS_DFESTART_TASKS_DFESTART_Trigger (1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_DFESTOP */
/* Description: Stop DFE operation */

/* Bit 0 : Stop DFE operation */
#define RADIO_TASKS_DFESTOP_TASKS_DFESTOP_Pos (0UL) /*!< Position of TASKS_DFESTOP field. */
#define RADIO_TASKS_DFESTOP_TASKS_DFESTOP_Msk (0x1UL << RADIO_TASKS_DFESTOP_TASKS_DFESTOP_Pos) /*!< Bit mask of TASKS_DFESTOP field. */
#define RADIO_TASKS_DFESTOP_TASKS_DFESTOP_Trigger (1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_ACQINJ0DMASTART */
/* Description: Start DMA transaction */

/* Bit 0 : Start DMA transaction */
#define RADIO_TASKS_ACQINJ0DMASTART_TASKS_ACQINJ0DMASTART_Pos (0UL) /*!< Position of TASKS_ACQINJ0DMASTART field. */
#define RADIO_TASKS_ACQINJ0DMASTART_TASKS_ACQINJ0DMASTART_Msk (0x1UL << RADIO_TASKS_ACQINJ0DMASTART_TASKS_ACQINJ0DMASTART_Pos) /*!< Bit mask of TASKS_ACQINJ0DMASTART field. */
#define RADIO_TASKS_ACQINJ0DMASTART_TASKS_ACQINJ0DMASTART_Trigger (1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_ACQINJ0DMASTOP */
/* Description: Stop ongoing DMA transaction */

/* Bit 0 : Stop ongoing DMA transaction */
#define RADIO_TASKS_ACQINJ0DMASTOP_TASKS_ACQINJ0DMASTOP_Pos (0UL) /*!< Position of TASKS_ACQINJ0DMASTOP field. */
#define RADIO_TASKS_ACQINJ0DMASTOP_TASKS_ACQINJ0DMASTOP_Msk (0x1UL << RADIO_TASKS_ACQINJ0DMASTOP_TASKS_ACQINJ0DMASTOP_Pos) /*!< Bit mask of TASKS_ACQINJ0DMASTOP field. */
#define RADIO_TASKS_ACQINJ0DMASTOP_TASKS_ACQINJ0DMASTOP_Trigger (1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_ACQINJ1DMASTART */
/* Description: Start DMA transaction */

/* Bit 0 : Start DMA transaction */
#define RADIO_TASKS_ACQINJ1DMASTART_TASKS_ACQINJ1DMASTART_Pos (0UL) /*!< Position of TASKS_ACQINJ1DMASTART field. */
#define RADIO_TASKS_ACQINJ1DMASTART_TASKS_ACQINJ1DMASTART_Msk (0x1UL << RADIO_TASKS_ACQINJ1DMASTART_TASKS_ACQINJ1DMASTART_Pos) /*!< Bit mask of TASKS_ACQINJ1DMASTART field. */
#define RADIO_TASKS_ACQINJ1DMASTART_TASKS_ACQINJ1DMASTART_Trigger (1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_ACQINJ1DMASTOP */
/* Description: Stop ongoing DMA transaction */

/* Bit 0 : Stop ongoing DMA transaction */
#define RADIO_TASKS_ACQINJ1DMASTOP_TASKS_ACQINJ1DMASTOP_Pos (0UL) /*!< Position of TASKS_ACQINJ1DMASTOP field. */
#define RADIO_TASKS_ACQINJ1DMASTOP_TASKS_ACQINJ1DMASTOP_Msk (0x1UL << RADIO_TASKS_ACQINJ1DMASTOP_TASKS_ACQINJ1DMASTOP_Pos) /*!< Bit mask of TASKS_ACQINJ1DMASTOP field. */
#define RADIO_TASKS_ACQINJ1DMASTOP_TASKS_ACQINJ1DMASTOP_Trigger (1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_CNTPSTART */
/* Description: Start packet counter */

/* Bit 0 : Start packet counter */
#define RADIO_TASKS_CNTPSTART_TASKS_CNTPSTART_Pos (0UL) /*!< Position of TASKS_CNTPSTART field. */
#define RADIO_TASKS_CNTPSTART_TASKS_CNTPSTART_Msk (0x1UL << RADIO_TASKS_CNTPSTART_TASKS_CNTPSTART_Pos) /*!< Bit mask of TASKS_CNTPSTART field. */
#define RADIO_TASKS_CNTPSTART_TASKS_CNTPSTART_Trigger (1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_CNTPSTOP */
/* Description: Stop packet counter */

/* Bit 0 : Stop packet counter */
#define RADIO_TASKS_CNTPSTOP_TASKS_CNTPSTOP_Pos (0UL) /*!< Position of TASKS_CNTPSTOP field. */
#define RADIO_TASKS_CNTPSTOP_TASKS_CNTPSTOP_Msk (0x1UL << RADIO_TASKS_CNTPSTOP_TASKS_CNTPSTOP_Pos) /*!< Bit mask of TASKS_CNTPSTOP field. */
#define RADIO_TASKS_CNTPSTOP_TASKS_CNTPSTOP_Trigger (1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_CNTPCLEAR */
/* Description: Clear packet counter */

/* Bit 0 : Clear packet counter */
#define RADIO_TASKS_CNTPCLEAR_TASKS_CNTPCLEAR_Pos (0UL) /*!< Position of TASKS_CNTPCLEAR field. */
#define RADIO_TASKS_CNTPCLEAR_TASKS_CNTPCLEAR_Msk (0x1UL << RADIO_TASKS_CNTPCLEAR_TASKS_CNTPCLEAR_Pos) /*!< Bit mask of TASKS_CNTPCLEAR field. */
#define RADIO_TASKS_CNTPCLEAR_TASKS_CNTPCLEAR_Trigger (1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_LOOPBACKEN */
/* Description: Enable RADIO in LOOPBACK mode */

/* Bit 0 : Enable RADIO in LOOPBACK mode */
#define RADIO_TASKS_LOOPBACKEN_TASKS_LOOPBACKEN_Pos (0UL) /*!< Position of TASKS_LOOPBACKEN field. */
#define RADIO_TASKS_LOOPBACKEN_TASKS_LOOPBACKEN_Msk (0x1UL << RADIO_TASKS_LOOPBACKEN_TASKS_LOOPBACKEN_Pos) /*!< Bit mask of TASKS_LOOPBACKEN field. */
#define RADIO_TASKS_LOOPBACKEN_TASKS_LOOPBACKEN_Trigger (1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_CALSTART */
/* Description: Start calibration */

/* Bit 0 : Start calibration */
#define RADIO_TASKS_CALSTART_TASKS_CALSTART_Pos (0UL) /*!< Position of TASKS_CALSTART field. */
#define RADIO_TASKS_CALSTART_TASKS_CALSTART_Msk (0x1UL << RADIO_TASKS_CALSTART_TASKS_CALSTART_Pos) /*!< Bit mask of TASKS_CALSTART field. */
#define RADIO_TASKS_CALSTART_TASKS_CALSTART_Trigger (1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_CALSTOP */
/* Description: Stop calibration */

/* Bit 0 : Stop calibration */
#define RADIO_TASKS_CALSTOP_TASKS_CALSTOP_Pos (0UL) /*!< Position of TASKS_CALSTOP field. */
#define RADIO_TASKS_CALSTOP_TASKS_CALSTOP_Msk (0x1UL << RADIO_TASKS_CALSTOP_TASKS_CALSTOP_Pos) /*!< Bit mask of TASKS_CALSTOP field. */
#define RADIO_TASKS_CALSTOP_TASKS_CALSTOP_Trigger (1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_PATESTSTART */
/* Description: Start PA test */

/* Bit 0 : Start PA test */
#define RADIO_TASKS_PATESTSTART_TASKS_PATESTSTART_Pos (0UL) /*!< Position of TASKS_PATESTSTART field. */
#define RADIO_TASKS_PATESTSTART_TASKS_PATESTSTART_Msk (0x1UL << RADIO_TASKS_PATESTSTART_TASKS_PATESTSTART_Pos) /*!< Bit mask of TASKS_PATESTSTART field. */
#define RADIO_TASKS_PATESTSTART_TASKS_PATESTSTART_Trigger (1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_PATESTSTOP */
/* Description: Stop PA test */

/* Bit 0 : Stop PA test */
#define RADIO_TASKS_PATESTSTOP_TASKS_PATESTSTOP_Pos (0UL) /*!< Position of TASKS_PATESTSTOP field. */
#define RADIO_TASKS_PATESTSTOP_TASKS_PATESTSTOP_Msk (0x1UL << RADIO_TASKS_PATESTSTOP_TASKS_PATESTSTOP_Pos) /*!< Bit mask of TASKS_PATESTSTOP field. */
#define RADIO_TASKS_PATESTSTOP_TASKS_PATESTSTOP_Trigger (1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_CHNOINCR */
/* Description: Update RADIO channel based on the current channel and increment it according to chNoIncrStep */

/* Bit 0 : Update RADIO channel based on the current channel and increment it according to chNoIncrStep */
#define RADIO_TASKS_CHNOINCR_TASKS_CHNOINCR_Pos (0UL) /*!< Position of TASKS_CHNOINCR field. */
#define RADIO_TASKS_CHNOINCR_TASKS_CHNOINCR_Msk (0x1UL << RADIO_TASKS_CHNOINCR_TASKS_CHNOINCR_Pos) /*!< Bit mask of TASKS_CHNOINCR field. */
#define RADIO_TASKS_CHNOINCR_TASKS_CHNOINCR_Trigger (1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_DMASTART */
/* Description: Start RADIO DMA transaction */

/* Bit 0 : Start RADIO DMA transaction */
#define RADIO_TASKS_DMASTART_TASKS_DMASTART_Pos (0UL) /*!< Position of TASKS_DMASTART field. */
#define RADIO_TASKS_DMASTART_TASKS_DMASTART_Msk (0x1UL << RADIO_TASKS_DMASTART_TASKS_DMASTART_Pos) /*!< Bit mask of TASKS_DMASTART field. */
#define RADIO_TASKS_DMASTART_TASKS_DMASTART_Trigger (1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_DMASTOP */
/* Description: Stop ongoing RADIO DMA transaction */

/* Bit 0 : Stop ongoing RADIO DMA transaction */
#define RADIO_TASKS_DMASTOP_TASKS_DMASTOP_Pos (0UL) /*!< Position of TASKS_DMASTOP field. */
#define RADIO_TASKS_DMASTOP_TASKS_DMASTOP_Msk (0x1UL << RADIO_TASKS_DMASTOP_TASKS_DMASTOP_Pos) /*!< Bit mask of TASKS_DMASTOP field. */
#define RADIO_TASKS_DMASTOP_TASKS_DMASTOP_Trigger (1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_DFEDMASTART */
/* Description: Start DFE DMA transaction */

/* Bit 0 : Start DFE DMA transaction */
#define RADIO_TASKS_DFEDMASTART_TASKS_DFEDMASTART_Pos (0UL) /*!< Position of TASKS_DFEDMASTART field. */
#define RADIO_TASKS_DFEDMASTART_TASKS_DFEDMASTART_Msk (0x1UL << RADIO_TASKS_DFEDMASTART_TASKS_DFEDMASTART_Pos) /*!< Bit mask of TASKS_DFEDMASTART field. */
#define RADIO_TASKS_DFEDMASTART_TASKS_DFEDMASTART_Trigger (1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_DFEDMASTOP */
/* Description: Stop ongoing DFE DMA transaction */

/* Bit 0 : Stop ongoing DFE DMA transaction */
#define RADIO_TASKS_DFEDMASTOP_TASKS_DFEDMASTOP_Pos (0UL) /*!< Position of TASKS_DFEDMASTOP field. */
#define RADIO_TASKS_DFEDMASTOP_TASKS_DFEDMASTOP_Msk (0x1UL << RADIO_TASKS_DFEDMASTOP_TASKS_DFEDMASTOP_Pos) /*!< Bit mask of TASKS_DFEDMASTOP field. */
#define RADIO_TASKS_DFEDMASTOP_TASKS_DFEDMASTOP_Trigger (1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_RESERVED_31 */
/* Description: UNUSED_31 */

/* Bit 0 : UNUSED_31 */
#define RADIO_TASKS_RESERVED_31_TASKS_RESERVED_31_Pos (0UL) /*!< Position of TASKS_RESERVED_31 field. */
#define RADIO_TASKS_RESERVED_31_TASKS_RESERVED_31_Msk (0x1UL << RADIO_TASKS_RESERVED_31_TASKS_RESERVED_31_Pos) /*!< Bit mask of TASKS_RESERVED_31 field. */
#define RADIO_TASKS_RESERVED_31_TASKS_RESERVED_31_Trigger (1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_GETNEXTDETECT */
/* Description: Pull the last item out of the detect FIFO */

/* Bit 0 : Pull the last item out of the detect FIFO */
#define RADIO_TASKS_GETNEXTDETECT_TASKS_GETNEXTDETECT_Pos (0UL) /*!< Position of TASKS_GETNEXTDETECT field. */
#define RADIO_TASKS_GETNEXTDETECT_TASKS_GETNEXTDETECT_Msk (0x1UL << RADIO_TASKS_GETNEXTDETECT_TASKS_GETNEXTDETECT_Pos) /*!< Bit mask of TASKS_GETNEXTDETECT field. */
#define RADIO_TASKS_GETNEXTDETECT_TASKS_GETNEXTDETECT_Trigger (1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_CLEARDETECTFIFO */
/* Description: Clear the detect FIFO */

/* Bit 0 : Clear the detect FIFO */
#define RADIO_TASKS_CLEARDETECTFIFO_TASKS_CLEARDETECTFIFO_Pos (0UL) /*!< Position of TASKS_CLEARDETECTFIFO field. */
#define RADIO_TASKS_CLEARDETECTFIFO_TASKS_CLEARDETECTFIFO_Msk (0x1UL << RADIO_TASKS_CLEARDETECTFIFO_TASKS_CLEARDETECTFIFO_Pos) /*!< Bit mask of TASKS_CLEARDETECTFIFO field. */
#define RADIO_TASKS_CLEARDETECTFIFO_TASKS_CLEARDETECTFIFO_Trigger (1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_RESETDEMODCTRL */
/* Description: Sets all things back to original state in RxDemodCtrl */

/* Bit 0 : Sets all things back to original state in RxDemodCtrl */
#define RADIO_TASKS_RESETDEMODCTRL_TASKS_RESETDEMODCTRL_Pos (0UL) /*!< Position of TASKS_RESETDEMODCTRL field. */
#define RADIO_TASKS_RESETDEMODCTRL_TASKS_RESETDEMODCTRL_Msk (0x1UL << RADIO_TASKS_RESETDEMODCTRL_TASKS_RESETDEMODCTRL_Pos) /*!< Bit mask of TASKS_RESETDEMODCTRL field. */
#define RADIO_TASKS_RESETDEMODCTRL_TASKS_RESETDEMODCTRL_Trigger (1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_DEMODCTRLSTARTTIMER */
/* Description: Start the built-in custom timer. When starting the timer, it always starts from 0 */

/* Bit 0 : Start the built-in custom timer. When starting the timer, it always starts from 0 */
#define RADIO_TASKS_DEMODCTRLSTARTTIMER_TASKS_DEMODCTRLSTARTTIMER_Pos (0UL) /*!< Position of TASKS_DEMODCTRLSTARTTIMER field. */
#define RADIO_TASKS_DEMODCTRLSTARTTIMER_TASKS_DEMODCTRLSTARTTIMER_Msk (0x1UL << RADIO_TASKS_DEMODCTRLSTARTTIMER_TASKS_DEMODCTRLSTARTTIMER_Pos) /*!< Bit mask of TASKS_DEMODCTRLSTARTTIMER field. */
#define RADIO_TASKS_DEMODCTRLSTARTTIMER_TASKS_DEMODCTRLSTARTTIMER_Trigger (1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_DEMODCTRLSTOPTIMER */
/* Description: Stop the built-in custom timer. When stopping the timer, it is always cleared afterwards */

/* Bit 0 : Stop the built-in custom timer. When stopping the timer, it is always cleared afterwards */
#define RADIO_TASKS_DEMODCTRLSTOPTIMER_TASKS_DEMODCTRLSTOPTIMER_Pos (0UL) /*!< Position of TASKS_DEMODCTRLSTOPTIMER field. */
#define RADIO_TASKS_DEMODCTRLSTOPTIMER_TASKS_DEMODCTRLSTOPTIMER_Msk (0x1UL << RADIO_TASKS_DEMODCTRLSTOPTIMER_TASKS_DEMODCTRLSTOPTIMER_Pos) /*!< Bit mask of TASKS_DEMODCTRLSTOPTIMER field. */
#define RADIO_TASKS_DEMODCTRLSTOPTIMER_TASKS_DEMODCTRLSTOPTIMER_Trigger (1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_DEMODCTRLCONDEN0 */
/* Description: Enable condition 0. After this task has been triggered, the condition will trigger exactly once */

/* Bit 0 : Enable condition 0. After this task has been triggered, the condition will trigger exactly once */
#define RADIO_TASKS_DEMODCTRLCONDEN0_TASKS_DEMODCTRLCONDEN0_Pos (0UL) /*!< Position of TASKS_DEMODCTRLCONDEN0 field. */
#define RADIO_TASKS_DEMODCTRLCONDEN0_TASKS_DEMODCTRLCONDEN0_Msk (0x1UL << RADIO_TASKS_DEMODCTRLCONDEN0_TASKS_DEMODCTRLCONDEN0_Pos) /*!< Bit mask of TASKS_DEMODCTRLCONDEN0 field. */
#define RADIO_TASKS_DEMODCTRLCONDEN0_TASKS_DEMODCTRLCONDEN0_Trigger (1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_DEMODCTRLCONDEN1 */
/* Description: Enable condition 1. After this task has been triggered, the condition will trigger exactly once */

/* Bit 0 : Enable condition 1. After this task has been triggered, the condition will trigger exactly once */
#define RADIO_TASKS_DEMODCTRLCONDEN1_TASKS_DEMODCTRLCONDEN1_Pos (0UL) /*!< Position of TASKS_DEMODCTRLCONDEN1 field. */
#define RADIO_TASKS_DEMODCTRLCONDEN1_TASKS_DEMODCTRLCONDEN1_Msk (0x1UL << RADIO_TASKS_DEMODCTRLCONDEN1_TASKS_DEMODCTRLCONDEN1_Pos) /*!< Bit mask of TASKS_DEMODCTRLCONDEN1 field. */
#define RADIO_TASKS_DEMODCTRLCONDEN1_TASKS_DEMODCTRLCONDEN1_Trigger (1UL) /*!< Trigger task */

/* Register: RADIO_TASKS_DEMODCTRLCONDEN2 */
/* Description: Enable condition 2. After this task has been triggered, the condition will trigger exactly once */

/* Bit 0 : Enable condition 2. After this task has been triggered, the condition will trigger exactly once */
#define RADIO_TASKS_DEMODCTRLCONDEN2_TASKS_DEMODCTRLCONDEN2_Pos (0UL) /*!< Position of TASKS_DEMODCTRLCONDEN2 field. */
#define RADIO_TASKS_DEMODCTRLCONDEN2_TASKS_DEMODCTRLCONDEN2_Msk (0x1UL << RADIO_TASKS_DEMODCTRLCONDEN2_TASKS_DEMODCTRLCONDEN2_Pos) /*!< Bit mask of TASKS_DEMODCTRLCONDEN2 field. */
#define RADIO_TASKS_DEMODCTRLCONDEN2_TASKS_DEMODCTRLCONDEN2_Trigger (1UL) /*!< Trigger task */

/* Register: RADIO_EVENTS_READY */
/* Description: RADIO has ramped up and is ready to be started */

/* Bit 0 : RADIO has ramped up and is ready to be started */
#define RADIO_EVENTS_READY_EVENTS_READY_Pos (0UL) /*!< Position of EVENTS_READY field. */
#define RADIO_EVENTS_READY_EVENTS_READY_Msk (0x1UL << RADIO_EVENTS_READY_EVENTS_READY_Pos) /*!< Bit mask of EVENTS_READY field. */
#define RADIO_EVENTS_READY_EVENTS_READY_NotGenerated (0UL) /*!< Event not generated */
#define RADIO_EVENTS_READY_EVENTS_READY_Generated (1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_TXREADY */
/* Description: RADIO has ramped up and is ready to be started TX path */

/* Bit 0 : RADIO has ramped up and is ready to be started TX path */
#define RADIO_EVENTS_TXREADY_EVENTS_TXREADY_Pos (0UL) /*!< Position of EVENTS_TXREADY field. */
#define RADIO_EVENTS_TXREADY_EVENTS_TXREADY_Msk (0x1UL << RADIO_EVENTS_TXREADY_EVENTS_TXREADY_Pos) /*!< Bit mask of EVENTS_TXREADY field. */
#define RADIO_EVENTS_TXREADY_EVENTS_TXREADY_NotGenerated (0UL) /*!< Event not generated */
#define RADIO_EVENTS_TXREADY_EVENTS_TXREADY_Generated (1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_RXREADY */
/* Description: RADIO has ramped up and is ready to be started RX path */

/* Bit 0 : RADIO has ramped up and is ready to be started RX path */
#define RADIO_EVENTS_RXREADY_EVENTS_RXREADY_Pos (0UL) /*!< Position of EVENTS_RXREADY field. */
#define RADIO_EVENTS_RXREADY_EVENTS_RXREADY_Msk (0x1UL << RADIO_EVENTS_RXREADY_EVENTS_RXREADY_Pos) /*!< Bit mask of EVENTS_RXREADY field. */
#define RADIO_EVENTS_RXREADY_EVENTS_RXREADY_NotGenerated (0UL) /*!< Event not generated */
#define RADIO_EVENTS_RXREADY_EVENTS_RXREADY_Generated (1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_ADDRESS */
/* Description: Address sent or received */

/* Bit 0 : Address sent or received */
#define RADIO_EVENTS_ADDRESS_EVENTS_ADDRESS_Pos (0UL) /*!< Position of EVENTS_ADDRESS field. */
#define RADIO_EVENTS_ADDRESS_EVENTS_ADDRESS_Msk (0x1UL << RADIO_EVENTS_ADDRESS_EVENTS_ADDRESS_Pos) /*!< Bit mask of EVENTS_ADDRESS field. */
#define RADIO_EVENTS_ADDRESS_EVENTS_ADDRESS_NotGenerated (0UL) /*!< Event not generated */
#define RADIO_EVENTS_ADDRESS_EVENTS_ADDRESS_Generated (1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_FRAMESTART */
/* Description: IEEE 802.15.4 length field received */

/* Bit 0 : IEEE 802.15.4 length field received */
#define RADIO_EVENTS_FRAMESTART_EVENTS_FRAMESTART_Pos (0UL) /*!< Position of EVENTS_FRAMESTART field. */
#define RADIO_EVENTS_FRAMESTART_EVENTS_FRAMESTART_Msk (0x1UL << RADIO_EVENTS_FRAMESTART_EVENTS_FRAMESTART_Pos) /*!< Bit mask of EVENTS_FRAMESTART field. */
#define RADIO_EVENTS_FRAMESTART_EVENTS_FRAMESTART_NotGenerated (0UL) /*!< Event not generated */
#define RADIO_EVENTS_FRAMESTART_EVENTS_FRAMESTART_Generated (1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_PAYLOAD */
/* Description: Packet payload sent or received */

/* Bit 0 : Packet payload sent or received */
#define RADIO_EVENTS_PAYLOAD_EVENTS_PAYLOAD_Pos (0UL) /*!< Position of EVENTS_PAYLOAD field. */
#define RADIO_EVENTS_PAYLOAD_EVENTS_PAYLOAD_Msk (0x1UL << RADIO_EVENTS_PAYLOAD_EVENTS_PAYLOAD_Pos) /*!< Bit mask of EVENTS_PAYLOAD field. */
#define RADIO_EVENTS_PAYLOAD_EVENTS_PAYLOAD_NotGenerated (0UL) /*!< Event not generated */
#define RADIO_EVENTS_PAYLOAD_EVENTS_PAYLOAD_Generated (1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_END */
/* Description: Packet sent or received */

/* Bit 0 : Packet sent or received */
#define RADIO_EVENTS_END_EVENTS_END_Pos (0UL) /*!< Position of EVENTS_END field. */
#define RADIO_EVENTS_END_EVENTS_END_Msk (0x1UL << RADIO_EVENTS_END_EVENTS_END_Pos) /*!< Bit mask of EVENTS_END field. */
#define RADIO_EVENTS_END_EVENTS_END_NotGenerated (0UL) /*!< Event not generated */
#define RADIO_EVENTS_END_EVENTS_END_Generated (1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_PHYEND */
/* Description: The last bit is sent on air or last bit is received */

/* Bit 0 : The last bit is sent on air or last bit is received */
#define RADIO_EVENTS_PHYEND_EVENTS_PHYEND_Pos (0UL) /*!< Position of EVENTS_PHYEND field. */
#define RADIO_EVENTS_PHYEND_EVENTS_PHYEND_Msk (0x1UL << RADIO_EVENTS_PHYEND_EVENTS_PHYEND_Pos) /*!< Bit mask of EVENTS_PHYEND field. */
#define RADIO_EVENTS_PHYEND_EVENTS_PHYEND_NotGenerated (0UL) /*!< Event not generated */
#define RADIO_EVENTS_PHYEND_EVENTS_PHYEND_Generated (1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_DISABLED */
/* Description: RADIO has been disabled */

/* Bit 0 : RADIO has been disabled */
#define RADIO_EVENTS_DISABLED_EVENTS_DISABLED_Pos (0UL) /*!< Position of EVENTS_DISABLED field. */
#define RADIO_EVENTS_DISABLED_EVENTS_DISABLED_Msk (0x1UL << RADIO_EVENTS_DISABLED_EVENTS_DISABLED_Pos) /*!< Bit mask of EVENTS_DISABLED field. */
#define RADIO_EVENTS_DISABLED_EVENTS_DISABLED_NotGenerated (0UL) /*!< Event not generated */
#define RADIO_EVENTS_DISABLED_EVENTS_DISABLED_Generated (1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_DEVMATCH */
/* Description: A device address match occurred on the last received packet */

/* Bit 0 : A device address match occurred on the last received packet */
#define RADIO_EVENTS_DEVMATCH_EVENTS_DEVMATCH_Pos (0UL) /*!< Position of EVENTS_DEVMATCH field. */
#define RADIO_EVENTS_DEVMATCH_EVENTS_DEVMATCH_Msk (0x1UL << RADIO_EVENTS_DEVMATCH_EVENTS_DEVMATCH_Pos) /*!< Bit mask of EVENTS_DEVMATCH field. */
#define RADIO_EVENTS_DEVMATCH_EVENTS_DEVMATCH_NotGenerated (0UL) /*!< Event not generated */
#define RADIO_EVENTS_DEVMATCH_EVENTS_DEVMATCH_Generated (1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_DEVMISS */
/* Description: No device address match occurred on the last received packet */

/* Bit 0 : No device address match occurred on the last received packet */
#define RADIO_EVENTS_DEVMISS_EVENTS_DEVMISS_Pos (0UL) /*!< Position of EVENTS_DEVMISS field. */
#define RADIO_EVENTS_DEVMISS_EVENTS_DEVMISS_Msk (0x1UL << RADIO_EVENTS_DEVMISS_EVENTS_DEVMISS_Pos) /*!< Bit mask of EVENTS_DEVMISS field. */
#define RADIO_EVENTS_DEVMISS_EVENTS_DEVMISS_NotGenerated (0UL) /*!< Event not generated */
#define RADIO_EVENTS_DEVMISS_EVENTS_DEVMISS_Generated (1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_CRCOK */
/* Description: Packet received with CRC ok */

/* Bit 0 : Packet received with CRC ok */
#define RADIO_EVENTS_CRCOK_EVENTS_CRCOK_Pos (0UL) /*!< Position of EVENTS_CRCOK field. */
#define RADIO_EVENTS_CRCOK_EVENTS_CRCOK_Msk (0x1UL << RADIO_EVENTS_CRCOK_EVENTS_CRCOK_Pos) /*!< Bit mask of EVENTS_CRCOK field. */
#define RADIO_EVENTS_CRCOK_EVENTS_CRCOK_NotGenerated (0UL) /*!< Event not generated */
#define RADIO_EVENTS_CRCOK_EVENTS_CRCOK_Generated (1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_CRCERROR */
/* Description: Packet received with CRC error */

/* Bit 0 : Packet received with CRC error */
#define RADIO_EVENTS_CRCERROR_EVENTS_CRCERROR_Pos (0UL) /*!< Position of EVENTS_CRCERROR field. */
#define RADIO_EVENTS_CRCERROR_EVENTS_CRCERROR_Msk (0x1UL << RADIO_EVENTS_CRCERROR_EVENTS_CRCERROR_Pos) /*!< Bit mask of EVENTS_CRCERROR field. */
#define RADIO_EVENTS_CRCERROR_EVENTS_CRCERROR_NotGenerated (0UL) /*!< Event not generated */
#define RADIO_EVENTS_CRCERROR_EVENTS_CRCERROR_Generated (1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_RESERVED_13 */
/* Description: UNUSED_13 */

/* Bit 0 : UNUSED_13 */
#define RADIO_EVENTS_RESERVED_13_EVENTS_RESERVED_13_Pos (0UL) /*!< Position of EVENTS_RESERVED_13 field. */
#define RADIO_EVENTS_RESERVED_13_EVENTS_RESERVED_13_Msk (0x1UL << RADIO_EVENTS_RESERVED_13_EVENTS_RESERVED_13_Pos) /*!< Bit mask of EVENTS_RESERVED_13 field. */
#define RADIO_EVENTS_RESERVED_13_EVENTS_RESERVED_13_NotGenerated (0UL) /*!< Event not generated */
#define RADIO_EVENTS_RESERVED_13_EVENTS_RESERVED_13_Generated (1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_BCMATCH */
/* Description: Bit counter reached bit count value */

/* Bit 0 : Bit counter reached bit count value */
#define RADIO_EVENTS_BCMATCH_EVENTS_BCMATCH_Pos (0UL) /*!< Position of EVENTS_BCMATCH field. */
#define RADIO_EVENTS_BCMATCH_EVENTS_BCMATCH_Msk (0x1UL << RADIO_EVENTS_BCMATCH_EVENTS_BCMATCH_Pos) /*!< Bit mask of EVENTS_BCMATCH field. */
#define RADIO_EVENTS_BCMATCH_EVENTS_BCMATCH_NotGenerated (0UL) /*!< Event not generated */
#define RADIO_EVENTS_BCMATCH_EVENTS_BCMATCH_Generated (1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_EDEND */
/* Description: Sampling of energy detection complete. A new ED sample is ready for readout from the RADIO.EDSAMPLE register. */

/* Bit 0 : Sampling of energy detection complete. A new ED sample is ready for readout from the RADIO.EDSAMPLE register. */
#define RADIO_EVENTS_EDEND_EVENTS_EDEND_Pos (0UL) /*!< Position of EVENTS_EDEND field. */
#define RADIO_EVENTS_EDEND_EVENTS_EDEND_Msk (0x1UL << RADIO_EVENTS_EDEND_EVENTS_EDEND_Pos) /*!< Bit mask of EVENTS_EDEND field. */
#define RADIO_EVENTS_EDEND_EVENTS_EDEND_NotGenerated (0UL) /*!< Event not generated */
#define RADIO_EVENTS_EDEND_EVENTS_EDEND_Generated (1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_EDSTOPPED */
/* Description: The sampling of energy detection has stopped */

/* Bit 0 : The sampling of energy detection has stopped */
#define RADIO_EVENTS_EDSTOPPED_EVENTS_EDSTOPPED_Pos (0UL) /*!< Position of EVENTS_EDSTOPPED field. */
#define RADIO_EVENTS_EDSTOPPED_EVENTS_EDSTOPPED_Msk (0x1UL << RADIO_EVENTS_EDSTOPPED_EVENTS_EDSTOPPED_Pos) /*!< Bit mask of EVENTS_EDSTOPPED field. */
#define RADIO_EVENTS_EDSTOPPED_EVENTS_EDSTOPPED_NotGenerated (0UL) /*!< Event not generated */
#define RADIO_EVENTS_EDSTOPPED_EVENTS_EDSTOPPED_Generated (1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_CCAIDLE */
/* Description: Wireless medium in idle - clear to send */

/* Bit 0 : Wireless medium in idle - clear to send */
#define RADIO_EVENTS_CCAIDLE_EVENTS_CCAIDLE_Pos (0UL) /*!< Position of EVENTS_CCAIDLE field. */
#define RADIO_EVENTS_CCAIDLE_EVENTS_CCAIDLE_Msk (0x1UL << RADIO_EVENTS_CCAIDLE_EVENTS_CCAIDLE_Pos) /*!< Bit mask of EVENTS_CCAIDLE field. */
#define RADIO_EVENTS_CCAIDLE_EVENTS_CCAIDLE_NotGenerated (0UL) /*!< Event not generated */
#define RADIO_EVENTS_CCAIDLE_EVENTS_CCAIDLE_Generated (1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_CCABUSY */
/* Description: Wireless medium busy - do not send */

/* Bit 0 : Wireless medium busy - do not send */
#define RADIO_EVENTS_CCABUSY_EVENTS_CCABUSY_Pos (0UL) /*!< Position of EVENTS_CCABUSY field. */
#define RADIO_EVENTS_CCABUSY_EVENTS_CCABUSY_Msk (0x1UL << RADIO_EVENTS_CCABUSY_EVENTS_CCABUSY_Pos) /*!< Bit mask of EVENTS_CCABUSY field. */
#define RADIO_EVENTS_CCABUSY_EVENTS_CCABUSY_NotGenerated (0UL) /*!< Event not generated */
#define RADIO_EVENTS_CCABUSY_EVENTS_CCABUSY_Generated (1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_CCASTOPPED */
/* Description: The CCA has stopped */

/* Bit 0 : The CCA has stopped */
#define RADIO_EVENTS_CCASTOPPED_EVENTS_CCASTOPPED_Pos (0UL) /*!< Position of EVENTS_CCASTOPPED field. */
#define RADIO_EVENTS_CCASTOPPED_EVENTS_CCASTOPPED_Msk (0x1UL << RADIO_EVENTS_CCASTOPPED_EVENTS_CCASTOPPED_Pos) /*!< Bit mask of EVENTS_CCASTOPPED field. */
#define RADIO_EVENTS_CCASTOPPED_EVENTS_CCASTOPPED_NotGenerated (0UL) /*!< Event not generated */
#define RADIO_EVENTS_CCASTOPPED_EVENTS_CCASTOPPED_Generated (1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_RATEBOOST */
/* Description: Ble_LR CI field received, receive mode is changed from Ble_LR125Kbit to Ble_LR500Kbit */

/* Bit 0 : Ble_LR CI field received, receive mode is changed from Ble_LR125Kbit to Ble_LR500Kbit */
#define RADIO_EVENTS_RATEBOOST_EVENTS_RATEBOOST_Pos (0UL) /*!< Position of EVENTS_RATEBOOST field. */
#define RADIO_EVENTS_RATEBOOST_EVENTS_RATEBOOST_Msk (0x1UL << RADIO_EVENTS_RATEBOOST_EVENTS_RATEBOOST_Pos) /*!< Bit mask of EVENTS_RATEBOOST field. */
#define RADIO_EVENTS_RATEBOOST_EVENTS_RATEBOOST_NotGenerated (0UL) /*!< Event not generated */
#define RADIO_EVENTS_RATEBOOST_EVENTS_RATEBOOST_Generated (1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_MHRMATCH */
/* Description: MAC header match found */

/* Bit 0 : MAC header match found */
#define RADIO_EVENTS_MHRMATCH_EVENTS_MHRMATCH_Pos (0UL) /*!< Position of EVENTS_MHRMATCH field. */
#define RADIO_EVENTS_MHRMATCH_EVENTS_MHRMATCH_Msk (0x1UL << RADIO_EVENTS_MHRMATCH_EVENTS_MHRMATCH_Pos) /*!< Bit mask of EVENTS_MHRMATCH field. */
#define RADIO_EVENTS_MHRMATCH_EVENTS_MHRMATCH_NotGenerated (0UL) /*!< Event not generated */
#define RADIO_EVENTS_MHRMATCH_EVENTS_MHRMATCH_Generated (1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_SYNC */
/* Description: Initial sync detected */

/* Bit 0 : Initial sync detected */
#define RADIO_EVENTS_SYNC_EVENTS_SYNC_Pos (0UL) /*!< Position of EVENTS_SYNC field. */
#define RADIO_EVENTS_SYNC_EVENTS_SYNC_Msk (0x1UL << RADIO_EVENTS_SYNC_EVENTS_SYNC_Pos) /*!< Bit mask of EVENTS_SYNC field. */
#define RADIO_EVENTS_SYNC_EVENTS_SYNC_NotGenerated (0UL) /*!< Event not generated */
#define RADIO_EVENTS_SYNC_EVENTS_SYNC_Generated (1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_CTEPRESENT */
/* Description: CTEInfo byte is received */

/* Bit 0 : CTEInfo byte is received */
#define RADIO_EVENTS_CTEPRESENT_EVENTS_CTEPRESENT_Pos (0UL) /*!< Position of EVENTS_CTEPRESENT field. */
#define RADIO_EVENTS_CTEPRESENT_EVENTS_CTEPRESENT_Msk (0x1UL << RADIO_EVENTS_CTEPRESENT_EVENTS_CTEPRESENT_Pos) /*!< Bit mask of EVENTS_CTEPRESENT field. */
#define RADIO_EVENTS_CTEPRESENT_EVENTS_CTEPRESENT_NotGenerated (0UL) /*!< Event not generated */
#define RADIO_EVENTS_CTEPRESENT_EVENTS_CTEPRESENT_Generated (1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_CTEWARNING */
/* Description: CTEInfo byte received, but contain illegal CTETime or CTEType. */

/* Bit 0 : CTEInfo byte received, but contain illegal CTETime or CTEType. */
#define RADIO_EVENTS_CTEWARNING_EVENTS_CTEWARNING_Pos (0UL) /*!< Position of EVENTS_CTEWARNING field. */
#define RADIO_EVENTS_CTEWARNING_EVENTS_CTEWARNING_Msk (0x1UL << RADIO_EVENTS_CTEWARNING_EVENTS_CTEWARNING_Pos) /*!< Bit mask of EVENTS_CTEWARNING field. */
#define RADIO_EVENTS_CTEWARNING_EVENTS_CTEWARNING_NotGenerated (0UL) /*!< Event not generated */
#define RADIO_EVENTS_CTEWARNING_EVENTS_CTEWARNING_Generated (1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_DFEEND */
/* Description: DFE operation has ended */

/* Bit 0 : DFE operation has ended */
#define RADIO_EVENTS_DFEEND_EVENTS_DFEEND_Pos (0UL) /*!< Position of EVENTS_DFEEND field. */
#define RADIO_EVENTS_DFEEND_EVENTS_DFEEND_Msk (0x1UL << RADIO_EVENTS_DFEEND_EVENTS_DFEEND_Pos) /*!< Bit mask of EVENTS_DFEEND field. */
#define RADIO_EVENTS_DFEEND_EVENTS_DFEEND_NotGenerated (0UL) /*!< Event not generated */
#define RADIO_EVENTS_DFEEND_EVENTS_DFEEND_Generated (1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_MODEWRITTEN */
/* Description: Generated on write access to MODE register */

/* Bit 0 : Generated on write access to MODE register */
#define RADIO_EVENTS_MODEWRITTEN_EVENTS_MODEWRITTEN_Pos (0UL) /*!< Position of EVENTS_MODEWRITTEN field. */
#define RADIO_EVENTS_MODEWRITTEN_EVENTS_MODEWRITTEN_Msk (0x1UL << RADIO_EVENTS_MODEWRITTEN_EVENTS_MODEWRITTEN_Pos) /*!< Bit mask of EVENTS_MODEWRITTEN field. */
#define RADIO_EVENTS_MODEWRITTEN_EVENTS_MODEWRITTEN_NotGenerated (0UL) /*!< Event not generated */
#define RADIO_EVENTS_MODEWRITTEN_EVENTS_MODEWRITTEN_Generated (1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_MODEREADY */
/* Description: Generated immediately on write access to MODE register when MODEPROGENABLE==0, otherwise only manually triggered (SELECT_EVENTS_TRIGGERS=1) */

/* Bit 0 : Generated immediately on write access to MODE register when MODEPROGENABLE==0, otherwise only manually triggered (SELECT_EVENTS_TRIGGERS=1) */
#define RADIO_EVENTS_MODEREADY_EVENTS_MODEREADY_Pos (0UL) /*!< Position of EVENTS_MODEREADY field. */
#define RADIO_EVENTS_MODEREADY_EVENTS_MODEREADY_Msk (0x1UL << RADIO_EVENTS_MODEREADY_EVENTS_MODEREADY_Pos) /*!< Bit mask of EVENTS_MODEREADY field. */
#define RADIO_EVENTS_MODEREADY_EVENTS_MODEREADY_NotGenerated (0UL) /*!< Event not generated */
#define RADIO_EVENTS_MODEREADY_EVENTS_MODEREADY_Generated (1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_CTEEND */
/* Description: CTE end */

/* Bit 0 : CTE end */
#define RADIO_EVENTS_CTEEND_EVENTS_CTEEND_Pos (0UL) /*!< Position of EVENTS_CTEEND field. */
#define RADIO_EVENTS_CTEEND_EVENTS_CTEEND_Msk (0x1UL << RADIO_EVENTS_CTEEND_EVENTS_CTEEND_Pos) /*!< Bit mask of EVENTS_CTEEND field. */
#define RADIO_EVENTS_CTEEND_EVENTS_CTEEND_NotGenerated (0UL) /*!< Event not generated */
#define RADIO_EVENTS_CTEEND_EVENTS_CTEEND_Generated (1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_LBREADY */
/* Description: RADIO is ready in loopback mode and is able to transmit and receive data */

/* Bit 0 : RADIO is ready in loopback mode and is able to transmit and receive data */
#define RADIO_EVENTS_LBREADY_EVENTS_LBREADY_Pos (0UL) /*!< Position of EVENTS_LBREADY field. */
#define RADIO_EVENTS_LBREADY_EVENTS_LBREADY_Msk (0x1UL << RADIO_EVENTS_LBREADY_EVENTS_LBREADY_Pos) /*!< Bit mask of EVENTS_LBREADY field. */
#define RADIO_EVENTS_LBREADY_EVENTS_LBREADY_NotGenerated (0UL) /*!< Event not generated */
#define RADIO_EVENTS_LBREADY_EVENTS_LBREADY_Generated (1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_CALDONE */
/* Description: RADIO calibration is done */

/* Bit 0 : RADIO calibration is done */
#define RADIO_EVENTS_CALDONE_EVENTS_CALDONE_Pos (0UL) /*!< Position of EVENTS_CALDONE field. */
#define RADIO_EVENTS_CALDONE_EVENTS_CALDONE_Msk (0x1UL << RADIO_EVENTS_CALDONE_EVENTS_CALDONE_Pos) /*!< Bit mask of EVENTS_CALDONE field. */
#define RADIO_EVENTS_CALDONE_EVENTS_CALDONE_NotGenerated (0UL) /*!< Event not generated */
#define RADIO_EVENTS_CALDONE_EVENTS_CALDONE_Generated (1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_CHNOUPDATED */
/* Description: RADIO channel no. is updated */

/* Bit 0 : RADIO channel no. is updated */
#define RADIO_EVENTS_CHNOUPDATED_EVENTS_CHNOUPDATED_Pos (0UL) /*!< Position of EVENTS_CHNOUPDATED field. */
#define RADIO_EVENTS_CHNOUPDATED_EVENTS_CHNOUPDATED_Msk (0x1UL << RADIO_EVENTS_CHNOUPDATED_EVENTS_CHNOUPDATED_Pos) /*!< Bit mask of EVENTS_CHNOUPDATED field. */
#define RADIO_EVENTS_CHNOUPDATED_EVENTS_CHNOUPDATED_NotGenerated (0UL) /*!< Event not generated */
#define RADIO_EVENTS_CHNOUPDATED_EVENTS_CHNOUPDATED_Generated (1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_DBCTIMEOUT */
/* Description: DBC timeout to be able to resync */

/* Bit 0 : DBC timeout to be able to resync */
#define RADIO_EVENTS_DBCTIMEOUT_EVENTS_DBCTIMEOUT_Pos (0UL) /*!< Position of EVENTS_DBCTIMEOUT field. */
#define RADIO_EVENTS_DBCTIMEOUT_EVENTS_DBCTIMEOUT_Msk (0x1UL << RADIO_EVENTS_DBCTIMEOUT_EVENTS_DBCTIMEOUT_Pos) /*!< Bit mask of EVENTS_DBCTIMEOUT field. */
#define RADIO_EVENTS_DBCTIMEOUT_EVENTS_DBCTIMEOUT_NotGenerated (0UL) /*!< Event not generated */
#define RADIO_EVENTS_DBCTIMEOUT_EVENTS_DBCTIMEOUT_Generated (1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_TXTIMERMATCH */
/* Description: Tx timer match */

/* Bit 0 : Tx timer match */
#define RADIO_EVENTS_TXTIMERMATCH_EVENTS_TXTIMERMATCH_Pos (0UL) /*!< Position of EVENTS_TXTIMERMATCH field. */
#define RADIO_EVENTS_TXTIMERMATCH_EVENTS_TXTIMERMATCH_Msk (0x1UL << RADIO_EVENTS_TXTIMERMATCH_EVENTS_TXTIMERMATCH_Pos) /*!< Bit mask of EVENTS_TXTIMERMATCH field. */
#define RADIO_EVENTS_TXTIMERMATCH_EVENTS_TXTIMERMATCH_NotGenerated (0UL) /*!< Event not generated */
#define RADIO_EVENTS_TXTIMERMATCH_EVENTS_TXTIMERMATCH_Generated (1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_RXTIMERMATCH */
/* Description: Rx timer match */

/* Bit 0 : Rx timer match */
#define RADIO_EVENTS_RXTIMERMATCH_EVENTS_RXTIMERMATCH_Pos (0UL) /*!< Position of EVENTS_RXTIMERMATCH field. */
#define RADIO_EVENTS_RXTIMERMATCH_EVENTS_RXTIMERMATCH_Msk (0x1UL << RADIO_EVENTS_RXTIMERMATCH_EVENTS_RXTIMERMATCH_Pos) /*!< Bit mask of EVENTS_RXTIMERMATCH field. */
#define RADIO_EVENTS_RXTIMERMATCH_EVENTS_RXTIMERMATCH_NotGenerated (0UL) /*!< Event not generated */
#define RADIO_EVENTS_RXTIMERMATCH_EVENTS_RXTIMERMATCH_Generated (1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_RESERVED_35 */
/* Description: UNUSED_35 */

/* Bit 0 : UNUSED_35 */
#define RADIO_EVENTS_RESERVED_35_EVENTS_RESERVED_35_Pos (0UL) /*!< Position of EVENTS_RESERVED_35 field. */
#define RADIO_EVENTS_RESERVED_35_EVENTS_RESERVED_35_Msk (0x1UL << RADIO_EVENTS_RESERVED_35_EVENTS_RESERVED_35_Pos) /*!< Bit mask of EVENTS_RESERVED_35 field. */
#define RADIO_EVENTS_RESERVED_35_EVENTS_RESERVED_35_NotGenerated (0UL) /*!< Event not generated */
#define RADIO_EVENTS_RESERVED_35_EVENTS_RESERVED_35_Generated (1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_RXDIGEN */
/* Description: RXDIGEN was set high from the HW timing engine */

/* Bit 0 : RXDIGEN was set high from the HW timing engine */
#define RADIO_EVENTS_RXDIGEN_EVENTS_RXDIGEN_Pos (0UL) /*!< Position of EVENTS_RXDIGEN field. */
#define RADIO_EVENTS_RXDIGEN_EVENTS_RXDIGEN_Msk (0x1UL << RADIO_EVENTS_RXDIGEN_EVENTS_RXDIGEN_Pos) /*!< Bit mask of EVENTS_RXDIGEN field. */
#define RADIO_EVENTS_RXDIGEN_EVENTS_RXDIGEN_NotGenerated (0UL) /*!< Event not generated */
#define RADIO_EVENTS_RXDIGEN_EVENTS_RXDIGEN_Generated (1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_RAWDETECT */
/* Description: The double correlator detected one peak */

/* Bit 0 : The double correlator detected one peak */
#define RADIO_EVENTS_RAWDETECT_EVENTS_RAWDETECT_Pos (0UL) /*!< Position of EVENTS_RAWDETECT field. */
#define RADIO_EVENTS_RAWDETECT_EVENTS_RAWDETECT_Msk (0x1UL << RADIO_EVENTS_RAWDETECT_EVENTS_RAWDETECT_Pos) /*!< Bit mask of EVENTS_RAWDETECT field. */
#define RADIO_EVENTS_RAWDETECT_EVENTS_RAWDETECT_NotGenerated (0UL) /*!< Event not generated */
#define RADIO_EVENTS_RAWDETECT_EVENTS_RAWDETECT_Generated (1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_DETECTFIFOFULL */
/* Description: The detect FIFO is full. This should not happen if the FIFO is sized well enough */

/* Bit 0 : The detect FIFO is full. This should not happen if the FIFO is sized well enough */
#define RADIO_EVENTS_DETECTFIFOFULL_EVENTS_DETECTFIFOFULL_Pos (0UL) /*!< Position of EVENTS_DETECTFIFOFULL field. */
#define RADIO_EVENTS_DETECTFIFOFULL_EVENTS_DETECTFIFOFULL_Msk (0x1UL << RADIO_EVENTS_DETECTFIFOFULL_EVENTS_DETECTFIFOFULL_Pos) /*!< Bit mask of EVENTS_DETECTFIFOFULL field. */
#define RADIO_EVENTS_DETECTFIFOFULL_EVENTS_DETECTFIFOFULL_NotGenerated (0UL) /*!< Event not generated */
#define RADIO_EVENTS_DETECTFIFOFULL_EVENTS_DETECTFIFOFULL_Generated (1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_TIMERWRAPS */
/* Description: Event triggering when the timer wraps around. This is useful if one wants to count longer than the HW timer allows */

/* Bit 0 : Event triggering when the timer wraps around. This is useful if one wants to count longer than the HW timer allows */
#define RADIO_EVENTS_TIMERWRAPS_EVENTS_TIMERWRAPS_Pos (0UL) /*!< Position of EVENTS_TIMERWRAPS field. */
#define RADIO_EVENTS_TIMERWRAPS_EVENTS_TIMERWRAPS_Msk (0x1UL << RADIO_EVENTS_TIMERWRAPS_EVENTS_TIMERWRAPS_Pos) /*!< Bit mask of EVENTS_TIMERWRAPS field. */
#define RADIO_EVENTS_TIMERWRAPS_EVENTS_TIMERWRAPS_NotGenerated (0UL) /*!< Event not generated */
#define RADIO_EVENTS_TIMERWRAPS_EVENTS_TIMERWRAPS_Generated (1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_STROBETIMETRACKUPDATED */
/* Description: New information from the symbol time tracker. See STROBETIMESTATUS */

/* Bit 0 : New information from the symbol time tracker. See STROBETIMESTATUS */
#define RADIO_EVENTS_STROBETIMETRACKUPDATED_EVENTS_STROBETIMETRACKUPDATED_Pos (0UL) /*!< Position of EVENTS_STROBETIMETRACKUPDATED field. */
#define RADIO_EVENTS_STROBETIMETRACKUPDATED_EVENTS_STROBETIMETRACKUPDATED_Msk (0x1UL << RADIO_EVENTS_STROBETIMETRACKUPDATED_EVENTS_STROBETIMETRACKUPDATED_Pos) /*!< Bit mask of EVENTS_STROBETIMETRACKUPDATED field. */
#define RADIO_EVENTS_STROBETIMETRACKUPDATED_EVENTS_STROBETIMETRACKUPDATED_NotGenerated (0UL) /*!< Event not generated */
#define RADIO_EVENTS_STROBETIMETRACKUPDATED_EVENTS_STROBETIMETRACKUPDATED_Generated (1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_DEMODCTRLCONDTRIGGERED0 */
/* Description: Condition 0 triggered and actions done */

/* Bit 0 : Condition 0 triggered and actions done */
#define RADIO_EVENTS_DEMODCTRLCONDTRIGGERED0_EVENTS_DEMODCTRLCONDTRIGGERED0_Pos (0UL) /*!< Position of EVENTS_DEMODCTRLCONDTRIGGERED0 field. */
#define RADIO_EVENTS_DEMODCTRLCONDTRIGGERED0_EVENTS_DEMODCTRLCONDTRIGGERED0_Msk (0x1UL << RADIO_EVENTS_DEMODCTRLCONDTRIGGERED0_EVENTS_DEMODCTRLCONDTRIGGERED0_Pos) /*!< Bit mask of EVENTS_DEMODCTRLCONDTRIGGERED0 field. */
#define RADIO_EVENTS_DEMODCTRLCONDTRIGGERED0_EVENTS_DEMODCTRLCONDTRIGGERED0_NotGenerated (0UL) /*!< Event not generated */
#define RADIO_EVENTS_DEMODCTRLCONDTRIGGERED0_EVENTS_DEMODCTRLCONDTRIGGERED0_Generated (1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_DEMODCTRLCONDTRIGGERED1 */
/* Description: Condition 1 triggered and actions done */

/* Bit 0 : Condition 1 triggered and actions done */
#define RADIO_EVENTS_DEMODCTRLCONDTRIGGERED1_EVENTS_DEMODCTRLCONDTRIGGERED1_Pos (0UL) /*!< Position of EVENTS_DEMODCTRLCONDTRIGGERED1 field. */
#define RADIO_EVENTS_DEMODCTRLCONDTRIGGERED1_EVENTS_DEMODCTRLCONDTRIGGERED1_Msk (0x1UL << RADIO_EVENTS_DEMODCTRLCONDTRIGGERED1_EVENTS_DEMODCTRLCONDTRIGGERED1_Pos) /*!< Bit mask of EVENTS_DEMODCTRLCONDTRIGGERED1 field. */
#define RADIO_EVENTS_DEMODCTRLCONDTRIGGERED1_EVENTS_DEMODCTRLCONDTRIGGERED1_NotGenerated (0UL) /*!< Event not generated */
#define RADIO_EVENTS_DEMODCTRLCONDTRIGGERED1_EVENTS_DEMODCTRLCONDTRIGGERED1_Generated (1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_DEMODCTRLCONDTRIGGERED2 */
/* Description: Condition 2 triggered and actions done */

/* Bit 0 : Condition 2 triggered and actions done */
#define RADIO_EVENTS_DEMODCTRLCONDTRIGGERED2_EVENTS_DEMODCTRLCONDTRIGGERED2_Pos (0UL) /*!< Position of EVENTS_DEMODCTRLCONDTRIGGERED2 field. */
#define RADIO_EVENTS_DEMODCTRLCONDTRIGGERED2_EVENTS_DEMODCTRLCONDTRIGGERED2_Msk (0x1UL << RADIO_EVENTS_DEMODCTRLCONDTRIGGERED2_EVENTS_DEMODCTRLCONDTRIGGERED2_Pos) /*!< Bit mask of EVENTS_DEMODCTRLCONDTRIGGERED2 field. */
#define RADIO_EVENTS_DEMODCTRLCONDTRIGGERED2_EVENTS_DEMODCTRLCONDTRIGGERED2_NotGenerated (0UL) /*!< Event not generated */
#define RADIO_EVENTS_DEMODCTRLCONDTRIGGERED2_EVENTS_DEMODCTRLCONDTRIGGERED2_Generated (1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_RESERVED_44 */
/* Description: UNUSED_44 */

/* Bit 0 : UNUSED_44 */
#define RADIO_EVENTS_RESERVED_44_EVENTS_RESERVED_44_Pos (0UL) /*!< Position of EVENTS_RESERVED_44 field. */
#define RADIO_EVENTS_RESERVED_44_EVENTS_RESERVED_44_Msk (0x1UL << RADIO_EVENTS_RESERVED_44_EVENTS_RESERVED_44_Pos) /*!< Bit mask of EVENTS_RESERVED_44 field. */
#define RADIO_EVENTS_RESERVED_44_EVENTS_RESERVED_44_NotGenerated (0UL) /*!< Event not generated */
#define RADIO_EVENTS_RESERVED_44_EVENTS_RESERVED_44_Generated (1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_RESERVED_45 */
/* Description: UNUSED_45 */

/* Bit 0 : UNUSED_45 */
#define RADIO_EVENTS_RESERVED_45_EVENTS_RESERVED_45_Pos (0UL) /*!< Position of EVENTS_RESERVED_45 field. */
#define RADIO_EVENTS_RESERVED_45_EVENTS_RESERVED_45_Msk (0x1UL << RADIO_EVENTS_RESERVED_45_EVENTS_RESERVED_45_Pos) /*!< Bit mask of EVENTS_RESERVED_45 field. */
#define RADIO_EVENTS_RESERVED_45_EVENTS_RESERVED_45_NotGenerated (0UL) /*!< Event not generated */
#define RADIO_EVENTS_RESERVED_45_EVENTS_RESERVED_45_Generated (1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_RESERVED_46 */
/* Description: UNUSED_46 */

/* Bit 0 : UNUSED_46 */
#define RADIO_EVENTS_RESERVED_46_EVENTS_RESERVED_46_Pos (0UL) /*!< Position of EVENTS_RESERVED_46 field. */
#define RADIO_EVENTS_RESERVED_46_EVENTS_RESERVED_46_Msk (0x1UL << RADIO_EVENTS_RESERVED_46_EVENTS_RESERVED_46_Pos) /*!< Bit mask of EVENTS_RESERVED_46 field. */
#define RADIO_EVENTS_RESERVED_46_EVENTS_RESERVED_46_NotGenerated (0UL) /*!< Event not generated */
#define RADIO_EVENTS_RESERVED_46_EVENTS_RESERVED_46_Generated (1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_RESERVED_47 */
/* Description: UNUSED_47 */

/* Bit 0 : UNUSED_47 */
#define RADIO_EVENTS_RESERVED_47_EVENTS_RESERVED_47_Pos (0UL) /*!< Position of EVENTS_RESERVED_47 field. */
#define RADIO_EVENTS_RESERVED_47_EVENTS_RESERVED_47_Msk (0x1UL << RADIO_EVENTS_RESERVED_47_EVENTS_RESERVED_47_Pos) /*!< Bit mask of EVENTS_RESERVED_47 field. */
#define RADIO_EVENTS_RESERVED_47_EVENTS_RESERVED_47_NotGenerated (0UL) /*!< Event not generated */
#define RADIO_EVENTS_RESERVED_47_EVENTS_RESERVED_47_Generated (1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_ACQINJ0DMAEND */
/* Description: ACQ DMA end */

/* Bit 0 : ACQ DMA end */
#define RADIO_EVENTS_ACQINJ0DMAEND_EVENTS_ACQINJ0DMAEND_Pos (0UL) /*!< Position of EVENTS_ACQINJ0DMAEND field. */
#define RADIO_EVENTS_ACQINJ0DMAEND_EVENTS_ACQINJ0DMAEND_Msk (0x1UL << RADIO_EVENTS_ACQINJ0DMAEND_EVENTS_ACQINJ0DMAEND_Pos) /*!< Bit mask of EVENTS_ACQINJ0DMAEND field. */
#define RADIO_EVENTS_ACQINJ0DMAEND_EVENTS_ACQINJ0DMAEND_NotGenerated (0UL) /*!< Event not generated */
#define RADIO_EVENTS_ACQINJ0DMAEND_EVENTS_ACQINJ0DMAEND_Generated (1UL) /*!< Event generated */

/* Register: RADIO_EVENTS_ACQINJ1DMAEND */
/* Description: INJ DMA end */

/* Bit 0 : INJ DMA end */
#define RADIO_EVENTS_ACQINJ1DMAEND_EVENTS_ACQINJ1DMAEND_Pos (0UL) /*!< Position of EVENTS_ACQINJ1DMAEND field. */
#define RADIO_EVENTS_ACQINJ1DMAEND_EVENTS_ACQINJ1DMAEND_Msk (0x1UL << RADIO_EVENTS_ACQINJ1DMAEND_EVENTS_ACQINJ1DMAEND_Pos) /*!< Bit mask of EVENTS_ACQINJ1DMAEND field. */
#define RADIO_EVENTS_ACQINJ1DMAEND_EVENTS_ACQINJ1DMAEND_NotGenerated (0UL) /*!< Event not generated */
#define RADIO_EVENTS_ACQINJ1DMAEND_EVENTS_ACQINJ1DMAEND_Generated (1UL) /*!< Event generated */

/* Register: RADIO_SHORTS */
/* Description: Shortcuts between local events and tasks */

/* Bit 26 : Shortcut between event CHNOUPDATED and task LOOPBACKEN */
#define RADIO_SHORTS_CHNOUPDATED_LOOPBACKEN_Pos (26UL) /*!< Position of CHNOUPDATED_LOOPBACKEN field. */
#define RADIO_SHORTS_CHNOUPDATED_LOOPBACKEN_Msk (0x1UL << RADIO_SHORTS_CHNOUPDATED_LOOPBACKEN_Pos) /*!< Bit mask of CHNOUPDATED_LOOPBACKEN field. */
#define RADIO_SHORTS_CHNOUPDATED_LOOPBACKEN_Disabled (0UL) /*!< Disable shortcut */
#define RADIO_SHORTS_CHNOUPDATED_LOOPBACKEN_Enabled (1UL) /*!< Enable shortcut */

/* Bit 25 : Shortcut between event CHNOUPDATED and task RXEN */
#define RADIO_SHORTS_CHNOUPDATED_RXEN_Pos (25UL) /*!< Position of CHNOUPDATED_RXEN field. */
#define RADIO_SHORTS_CHNOUPDATED_RXEN_Msk (0x1UL << RADIO_SHORTS_CHNOUPDATED_RXEN_Pos) /*!< Bit mask of CHNOUPDATED_RXEN field. */
#define RADIO_SHORTS_CHNOUPDATED_RXEN_Disabled (0UL) /*!< Disable shortcut */
#define RADIO_SHORTS_CHNOUPDATED_RXEN_Enabled (1UL) /*!< Enable shortcut */

/* Bit 24 : Shortcut between event CHNOUPDATED and task TXEN */
#define RADIO_SHORTS_CHNOUPDATED_TXEN_Pos (24UL) /*!< Position of CHNOUPDATED_TXEN field. */
#define RADIO_SHORTS_CHNOUPDATED_TXEN_Msk (0x1UL << RADIO_SHORTS_CHNOUPDATED_TXEN_Pos) /*!< Bit mask of CHNOUPDATED_TXEN field. */
#define RADIO_SHORTS_CHNOUPDATED_TXEN_Disabled (0UL) /*!< Disable shortcut */
#define RADIO_SHORTS_CHNOUPDATED_TXEN_Enabled (1UL) /*!< Enable shortcut */

/* Bit 23 : Shortcut between event DISABLED and task CHNOINCR */
#define RADIO_SHORTS_DISABLED_CHNOINCR_Pos (23UL) /*!< Position of DISABLED_CHNOINCR field. */
#define RADIO_SHORTS_DISABLED_CHNOINCR_Msk (0x1UL << RADIO_SHORTS_DISABLED_CHNOINCR_Pos) /*!< Bit mask of DISABLED_CHNOINCR field. */
#define RADIO_SHORTS_DISABLED_CHNOINCR_Disabled (0UL) /*!< Disable shortcut */
#define RADIO_SHORTS_DISABLED_CHNOINCR_Enabled (1UL) /*!< Enable shortcut */

/* Bit 22 : Shortcut between event DISABLED and task LOOPBACKEN */
#define RADIO_SHORTS_DISABLED_LOOPBACKEN_Pos (22UL) /*!< Position of DISABLED_LOOPBACKEN field. */
#define RADIO_SHORTS_DISABLED_LOOPBACKEN_Msk (0x1UL << RADIO_SHORTS_DISABLED_LOOPBACKEN_Pos) /*!< Bit mask of DISABLED_LOOPBACKEN field. */
#define RADIO_SHORTS_DISABLED_LOOPBACKEN_Disabled (0UL) /*!< Disable shortcut */
#define RADIO_SHORTS_DISABLED_LOOPBACKEN_Enabled (1UL) /*!< Enable shortcut */

/* Bit 21 : Shortcut between event DFEEND and task STOP */
#define RADIO_SHORTS_DFEEND_STOP_Pos (21UL) /*!< Position of DFEEND_STOP field. */
#define RADIO_SHORTS_DFEEND_STOP_Msk (0x1UL << RADIO_SHORTS_DFEEND_STOP_Pos) /*!< Bit mask of DFEEND_STOP field. */
#define RADIO_SHORTS_DFEEND_STOP_Disabled (0UL) /*!< Disable shortcut */
#define RADIO_SHORTS_DFEEND_STOP_Enabled (1UL) /*!< Enable shortcut */

/* Bit 20 : Shortcut between event PHYEND and task START */
#define RADIO_SHORTS_PHYEND_START_Pos (20UL) /*!< Position of PHYEND_START field. */
#define RADIO_SHORTS_PHYEND_START_Msk (0x1UL << RADIO_SHORTS_PHYEND_START_Pos) /*!< Bit mask of PHYEND_START field. */
#define RADIO_SHORTS_PHYEND_START_Disabled (0UL) /*!< Disable shortcut */
#define RADIO_SHORTS_PHYEND_START_Enabled (1UL) /*!< Enable shortcut */

/* Bit 19 : Shortcut between event PHYEND and task DISABLE */
#define RADIO_SHORTS_PHYEND_DISABLE_Pos (19UL) /*!< Position of PHYEND_DISABLE field. */
#define RADIO_SHORTS_PHYEND_DISABLE_Msk (0x1UL << RADIO_SHORTS_PHYEND_DISABLE_Pos) /*!< Bit mask of PHYEND_DISABLE field. */
#define RADIO_SHORTS_PHYEND_DISABLE_Disabled (0UL) /*!< Disable shortcut */
#define RADIO_SHORTS_PHYEND_DISABLE_Enabled (1UL) /*!< Enable shortcut */

/* Bit 18 : Shortcut between event RXREADY and task START */
#define RADIO_SHORTS_RXREADY_START_Pos (18UL) /*!< Position of RXREADY_START field. */
#define RADIO_SHORTS_RXREADY_START_Msk (0x1UL << RADIO_SHORTS_RXREADY_START_Pos) /*!< Bit mask of RXREADY_START field. */
#define RADIO_SHORTS_RXREADY_START_Disabled (0UL) /*!< Disable shortcut */
#define RADIO_SHORTS_RXREADY_START_Enabled (1UL) /*!< Enable shortcut */

/* Bit 17 : Shortcut between event TXREADY and task START */
#define RADIO_SHORTS_TXREADY_START_Pos (17UL) /*!< Position of TXREADY_START field. */
#define RADIO_SHORTS_TXREADY_START_Msk (0x1UL << RADIO_SHORTS_TXREADY_START_Pos) /*!< Bit mask of TXREADY_START field. */
#define RADIO_SHORTS_TXREADY_START_Disabled (0UL) /*!< Disable shortcut */
#define RADIO_SHORTS_TXREADY_START_Enabled (1UL) /*!< Enable shortcut */

/* Bit 16 : Shortcut between event CCAIDLE and task STOP */
#define RADIO_SHORTS_CCAIDLE_STOP_Pos (16UL) /*!< Position of CCAIDLE_STOP field. */
#define RADIO_SHORTS_CCAIDLE_STOP_Msk (0x1UL << RADIO_SHORTS_CCAIDLE_STOP_Pos) /*!< Bit mask of CCAIDLE_STOP field. */
#define RADIO_SHORTS_CCAIDLE_STOP_Disabled (0UL) /*!< Disable shortcut */
#define RADIO_SHORTS_CCAIDLE_STOP_Enabled (1UL) /*!< Enable shortcut */

/* Bit 15 : Shortcut between event EDEND and task DISABLE */
#define RADIO_SHORTS_EDEND_DISABLE_Pos (15UL) /*!< Position of EDEND_DISABLE field. */
#define RADIO_SHORTS_EDEND_DISABLE_Msk (0x1UL << RADIO_SHORTS_EDEND_DISABLE_Pos) /*!< Bit mask of EDEND_DISABLE field. */
#define RADIO_SHORTS_EDEND_DISABLE_Disabled (0UL) /*!< Disable shortcut */
#define RADIO_SHORTS_EDEND_DISABLE_Enabled (1UL) /*!< Enable shortcut */

/* Bit 14 : Shortcut between event READY and task EDSTART */
#define RADIO_SHORTS_READY_EDSTART_Pos (14UL) /*!< Position of READY_EDSTART field. */
#define RADIO_SHORTS_READY_EDSTART_Msk (0x1UL << RADIO_SHORTS_READY_EDSTART_Pos) /*!< Bit mask of READY_EDSTART field. */
#define RADIO_SHORTS_READY_EDSTART_Disabled (0UL) /*!< Disable shortcut */
#define RADIO_SHORTS_READY_EDSTART_Enabled (1UL) /*!< Enable shortcut */

/* Bit 13 : Shortcut between event FRAMESTART and task BCSTART */
#define RADIO_SHORTS_FRAMESTART_BCSTART_Pos (13UL) /*!< Position of FRAMESTART_BCSTART field. */
#define RADIO_SHORTS_FRAMESTART_BCSTART_Msk (0x1UL << RADIO_SHORTS_FRAMESTART_BCSTART_Pos) /*!< Bit mask of FRAMESTART_BCSTART field. */
#define RADIO_SHORTS_FRAMESTART_BCSTART_Disabled (0UL) /*!< Disable shortcut */
#define RADIO_SHORTS_FRAMESTART_BCSTART_Enabled (1UL) /*!< Enable shortcut */

/* Bit 12 : Shortcut between event CCABUSY and task DISABLE */
#define RADIO_SHORTS_CCABUSY_DISABLE_Pos (12UL) /*!< Position of CCABUSY_DISABLE field. */
#define RADIO_SHORTS_CCABUSY_DISABLE_Msk (0x1UL << RADIO_SHORTS_CCABUSY_DISABLE_Pos) /*!< Bit mask of CCABUSY_DISABLE field. */
#define RADIO_SHORTS_CCABUSY_DISABLE_Disabled (0UL) /*!< Disable shortcut */
#define RADIO_SHORTS_CCABUSY_DISABLE_Enabled (1UL) /*!< Enable shortcut */

/* Bit 11 : Shortcut between event CCAIDLE and task TXEN */
#define RADIO_SHORTS_CCAIDLE_TXEN_Pos (11UL) /*!< Position of CCAIDLE_TXEN field. */
#define RADIO_SHORTS_CCAIDLE_TXEN_Msk (0x1UL << RADIO_SHORTS_CCAIDLE_TXEN_Pos) /*!< Bit mask of CCAIDLE_TXEN field. */
#define RADIO_SHORTS_CCAIDLE_TXEN_Disabled (0UL) /*!< Disable shortcut */
#define RADIO_SHORTS_CCAIDLE_TXEN_Enabled (1UL) /*!< Enable shortcut */

/* Bit 10 : Shortcut between event RXREADY and task CCASTART */
#define RADIO_SHORTS_RXREADY_CCASTART_Pos (10UL) /*!< Position of RXREADY_CCASTART field. */
#define RADIO_SHORTS_RXREADY_CCASTART_Msk (0x1UL << RADIO_SHORTS_RXREADY_CCASTART_Pos) /*!< Bit mask of RXREADY_CCASTART field. */
#define RADIO_SHORTS_RXREADY_CCASTART_Disabled (0UL) /*!< Disable shortcut */
#define RADIO_SHORTS_RXREADY_CCASTART_Enabled (1UL) /*!< Enable shortcut */

/* Bit 9 : Shortcut between event CTEEND and task START */
#define RADIO_SHORTS_CTEEND_START_Pos (9UL) /*!< Position of CTEEND_START field. */
#define RADIO_SHORTS_CTEEND_START_Msk (0x1UL << RADIO_SHORTS_CTEEND_START_Pos) /*!< Bit mask of CTEEND_START field. */
#define RADIO_SHORTS_CTEEND_START_Disabled (0UL) /*!< Disable shortcut */
#define RADIO_SHORTS_CTEEND_START_Enabled (1UL) /*!< Enable shortcut */

/* Bit 8 : Shortcut between event CTEEND and task DISABLE */
#define RADIO_SHORTS_CTEEND_DISABLE_Pos (8UL) /*!< Position of CTEEND_DISABLE field. */
#define RADIO_SHORTS_CTEEND_DISABLE_Msk (0x1UL << RADIO_SHORTS_CTEEND_DISABLE_Pos) /*!< Bit mask of CTEEND_DISABLE field. */
#define RADIO_SHORTS_CTEEND_DISABLE_Disabled (0UL) /*!< Disable shortcut */
#define RADIO_SHORTS_CTEEND_DISABLE_Enabled (1UL) /*!< Enable shortcut */

/* Bit 6 : Shortcut between event ADDRESS and task BCSTART */
#define RADIO_SHORTS_ADDRESS_BCSTART_Pos (6UL) /*!< Position of ADDRESS_BCSTART field. */
#define RADIO_SHORTS_ADDRESS_BCSTART_Msk (0x1UL << RADIO_SHORTS_ADDRESS_BCSTART_Pos) /*!< Bit mask of ADDRESS_BCSTART field. */
#define RADIO_SHORTS_ADDRESS_BCSTART_Disabled (0UL) /*!< Disable shortcut */
#define RADIO_SHORTS_ADDRESS_BCSTART_Enabled (1UL) /*!< Enable shortcut */

/* Bit 5 : Shortcut between event END and task START */
#define RADIO_SHORTS_END_START_Pos (5UL) /*!< Position of END_START field. */
#define RADIO_SHORTS_END_START_Msk (0x1UL << RADIO_SHORTS_END_START_Pos) /*!< Bit mask of END_START field. */
#define RADIO_SHORTS_END_START_Disabled (0UL) /*!< Disable shortcut */
#define RADIO_SHORTS_END_START_Enabled (1UL) /*!< Enable shortcut */

/* Bit 4 : Shortcut between event ADDRESS and task RSSISTART */
#define RADIO_SHORTS_ADDRESS_RSSISTART_Pos (4UL) /*!< Position of ADDRESS_RSSISTART field. */
#define RADIO_SHORTS_ADDRESS_RSSISTART_Msk (0x1UL << RADIO_SHORTS_ADDRESS_RSSISTART_Pos) /*!< Bit mask of ADDRESS_RSSISTART field. */
#define RADIO_SHORTS_ADDRESS_RSSISTART_Disabled (0UL) /*!< Disable shortcut */
#define RADIO_SHORTS_ADDRESS_RSSISTART_Enabled (1UL) /*!< Enable shortcut */

/* Bit 3 : Shortcut between event DISABLED and task RXEN */
#define RADIO_SHORTS_DISABLED_RXEN_Pos (3UL) /*!< Position of DISABLED_RXEN field. */
#define RADIO_SHORTS_DISABLED_RXEN_Msk (0x1UL << RADIO_SHORTS_DISABLED_RXEN_Pos) /*!< Bit mask of DISABLED_RXEN field. */
#define RADIO_SHORTS_DISABLED_RXEN_Disabled (0UL) /*!< Disable shortcut */
#define RADIO_SHORTS_DISABLED_RXEN_Enabled (1UL) /*!< Enable shortcut */

/* Bit 2 : Shortcut between event DISABLED and task TXEN */
#define RADIO_SHORTS_DISABLED_TXEN_Pos (2UL) /*!< Position of DISABLED_TXEN field. */
#define RADIO_SHORTS_DISABLED_TXEN_Msk (0x1UL << RADIO_SHORTS_DISABLED_TXEN_Pos) /*!< Bit mask of DISABLED_TXEN field. */
#define RADIO_SHORTS_DISABLED_TXEN_Disabled (0UL) /*!< Disable shortcut */
#define RADIO_SHORTS_DISABLED_TXEN_Enabled (1UL) /*!< Enable shortcut */

/* Bit 1 : Shortcut between event END and task DISABLE */
#define RADIO_SHORTS_END_DISABLE_Pos (1UL) /*!< Position of END_DISABLE field. */
#define RADIO_SHORTS_END_DISABLE_Msk (0x1UL << RADIO_SHORTS_END_DISABLE_Pos) /*!< Bit mask of END_DISABLE field. */
#define RADIO_SHORTS_END_DISABLE_Disabled (0UL) /*!< Disable shortcut */
#define RADIO_SHORTS_END_DISABLE_Enabled (1UL) /*!< Enable shortcut */

/* Bit 0 : Shortcut between event READY and task START */
#define RADIO_SHORTS_READY_START_Pos (0UL) /*!< Position of READY_START field. */
#define RADIO_SHORTS_READY_START_Msk (0x1UL << RADIO_SHORTS_READY_START_Pos) /*!< Bit mask of READY_START field. */
#define RADIO_SHORTS_READY_START_Disabled (0UL) /*!< Disable shortcut */
#define RADIO_SHORTS_READY_START_Enabled (1UL) /*!< Enable shortcut */

/* Register: RADIO_INTEN00 */
/* Description: Enable or disable interrupt */

/* Bits 31..0 :   */
#define RADIO_INTEN00_INTEN00_Pos (0UL) /*!< Position of INTEN00 field. */
#define RADIO_INTEN00_INTEN00_Msk (0xFFFFFFFFUL << RADIO_INTEN00_INTEN00_Pos) /*!< Bit mask of INTEN00 field. */

/* Register: RADIO_INTEN01 */
/* Description: Enable or disable interrupt */

/* Bits 17..0 :   */
#define RADIO_INTEN01_INTEN01_Pos (0UL) /*!< Position of INTEN01 field. */
#define RADIO_INTEN01_INTEN01_Msk (0x3FFFFUL << RADIO_INTEN01_INTEN01_Pos) /*!< Bit mask of INTEN01 field. */

/* Register: RADIO_INTENSET00 */
/* Description: Enable interrupt */

/* Bits 31..0 :   */
#define RADIO_INTENSET00_INTENSET00_Pos (0UL) /*!< Position of INTENSET00 field. */
#define RADIO_INTENSET00_INTENSET00_Msk (0xFFFFFFFFUL << RADIO_INTENSET00_INTENSET00_Pos) /*!< Bit mask of INTENSET00 field. */

/* Register: RADIO_INTENSET01 */
/* Description: Enable interrupt */

/* Bits 17..0 :   */
#define RADIO_INTENSET01_INTENSET01_Pos (0UL) /*!< Position of INTENSET01 field. */
#define RADIO_INTENSET01_INTENSET01_Msk (0x3FFFFUL << RADIO_INTENSET01_INTENSET01_Pos) /*!< Bit mask of INTENSET01 field. */

/* Register: RADIO_INTENCLR00 */
/* Description: Disable interrupt */

/* Bits 31..0 :   */
#define RADIO_INTENCLR00_INTENCLR00_Pos (0UL) /*!< Position of INTENCLR00 field. */
#define RADIO_INTENCLR00_INTENCLR00_Msk (0xFFFFFFFFUL << RADIO_INTENCLR00_INTENCLR00_Pos) /*!< Bit mask of INTENCLR00 field. */

/* Register: RADIO_INTENCLR01 */
/* Description: Disable interrupt */

/* Bits 17..0 :   */
#define RADIO_INTENCLR01_INTENCLR01_Pos (0UL) /*!< Position of INTENCLR01 field. */
#define RADIO_INTENCLR01_INTENCLR01_Msk (0x3FFFFUL << RADIO_INTENCLR01_INTENCLR01_Pos) /*!< Bit mask of INTENCLR01 field. */

/* Register: RADIO_INTPEND00 */
/* Description: Pending interrupts */

/* Bits 31..0 :   */
#define RADIO_INTPEND00_INTPEND00_Pos (0UL) /*!< Position of INTPEND00 field. */
#define RADIO_INTPEND00_INTPEND00_Msk (0xFFFFFFFFUL << RADIO_INTPEND00_INTPEND00_Pos) /*!< Bit mask of INTPEND00 field. */

/* Register: RADIO_INTPEND01 */
/* Description: Pending interrupts */

/* Bits 17..0 :   */
#define RADIO_INTPEND01_INTPEND01_Pos (0UL) /*!< Position of INTPEND01 field. */
#define RADIO_INTPEND01_INTPEND01_Msk (0x3FFFFUL << RADIO_INTPEND01_INTPEND01_Pos) /*!< Bit mask of INTPEND01 field. */

/* Register: RADIO_INTEN10 */
/* Description: Enable or disable interrupt */

/* Bits 31..0 :   */
#define RADIO_INTEN10_INTEN10_Pos (0UL) /*!< Position of INTEN10 field. */
#define RADIO_INTEN10_INTEN10_Msk (0xFFFFFFFFUL << RADIO_INTEN10_INTEN10_Pos) /*!< Bit mask of INTEN10 field. */

/* Register: RADIO_INTEN11 */
/* Description: Enable or disable interrupt */

/* Bits 17..0 :   */
#define RADIO_INTEN11_INTEN11_Pos (0UL) /*!< Position of INTEN11 field. */
#define RADIO_INTEN11_INTEN11_Msk (0x3FFFFUL << RADIO_INTEN11_INTEN11_Pos) /*!< Bit mask of INTEN11 field. */

/* Register: RADIO_INTENSET10 */
/* Description: Enable interrupt */

/* Bits 31..0 :   */
#define RADIO_INTENSET10_INTENSET10_Pos (0UL) /*!< Position of INTENSET10 field. */
#define RADIO_INTENSET10_INTENSET10_Msk (0xFFFFFFFFUL << RADIO_INTENSET10_INTENSET10_Pos) /*!< Bit mask of INTENSET10 field. */

/* Register: RADIO_INTENSET11 */
/* Description: Enable interrupt */

/* Bits 17..0 :   */
#define RADIO_INTENSET11_INTENSET11_Pos (0UL) /*!< Position of INTENSET11 field. */
#define RADIO_INTENSET11_INTENSET11_Msk (0x3FFFFUL << RADIO_INTENSET11_INTENSET11_Pos) /*!< Bit mask of INTENSET11 field. */

/* Register: RADIO_INTENCLR10 */
/* Description: Disable interrupt */

/* Bits 31..0 :   */
#define RADIO_INTENCLR10_INTENCLR10_Pos (0UL) /*!< Position of INTENCLR10 field. */
#define RADIO_INTENCLR10_INTENCLR10_Msk (0xFFFFFFFFUL << RADIO_INTENCLR10_INTENCLR10_Pos) /*!< Bit mask of INTENCLR10 field. */

/* Register: RADIO_INTENCLR11 */
/* Description: Disable interrupt */

/* Bits 17..0 :   */
#define RADIO_INTENCLR11_INTENCLR11_Pos (0UL) /*!< Position of INTENCLR11 field. */
#define RADIO_INTENCLR11_INTENCLR11_Msk (0x3FFFFUL << RADIO_INTENCLR11_INTENCLR11_Pos) /*!< Bit mask of INTENCLR11 field. */

/* Register: RADIO_INTPEND10 */
/* Description: Pending interrupts */

/* Bits 31..0 :   */
#define RADIO_INTPEND10_INTPEND10_Pos (0UL) /*!< Position of INTPEND10 field. */
#define RADIO_INTPEND10_INTPEND10_Msk (0xFFFFFFFFUL << RADIO_INTPEND10_INTPEND10_Pos) /*!< Bit mask of INTPEND10 field. */

/* Register: RADIO_INTPEND11 */
/* Description: Pending interrupts */

/* Bits 17..0 :   */
#define RADIO_INTPEND11_INTPEND11_Pos (0UL) /*!< Position of INTPEND11 field. */
#define RADIO_INTPEND11_INTPEND11_Msk (0x3FFFFUL << RADIO_INTPEND11_INTPEND11_Pos) /*!< Bit mask of INTPEND11 field. */

/* Register: RADIO_MODE */
/* Description: Data rate and modulation */

/* Bits 3..0 : Radio data rate and modulation setting. The radio supports frequency-shift keying (FSK) modulation. */
#define RADIO_MODE_MODE_Pos (0UL) /*!< Position of MODE field. */
#define RADIO_MODE_MODE_Msk (0xFUL << RADIO_MODE_MODE_Pos) /*!< Bit mask of MODE field. */
#define RADIO_MODE_MODE_Nrf_1Mbit (0UL) /*!< 1 Mbps Nordic proprietary radio mode */
#define RADIO_MODE_MODE_Nrf_2Mbit (1UL) /*!< 2 Mbps Nordic proprietary radio mode */
#define RADIO_MODE_MODE_Nrf_250Kbit (2UL) /*!< Deprecated enumerator -  250 kbps Nordic proprietary radio mode */
#define RADIO_MODE_MODE_Ble_1Mbit (3UL) /*!< 1 Mbps BLE */
#define RADIO_MODE_MODE_Ble_2Mbit (4UL) /*!< 2 Mbps BLE */
#define RADIO_MODE_MODE_Ble_LR125Kbit (5UL) /*!< Long range 125 kbps TX, 125 kbps and 500 kbps RX */
#define RADIO_MODE_MODE_Ble_LR500Kbit (6UL) /*!< Long range 500 kbps TX, 125 kbps and 500 kbps RX */
#define RADIO_MODE_MODE_Nrf_4Mbit0_5 (9UL) /*!< 4 Mbps Nordic proprietary radio mode (BT=0.5/h=0.5) */
#define RADIO_MODE_MODE_Nrf_4Mbit0_25 (10UL) /*!< 4 Mbps Nordic proprietary radio mode (BT=0.5/h=0.25) */
#define RADIO_MODE_MODE_Ieee802154_250Kbit (15UL) /*!< IEEE 802.15.4-2006 250 kbps */

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

/* Register: RADIO_MODE_DEPENDENT_XPB_TEST_REGISTER */
/* Description: Mode dependent XPB test register */

/* Bits 31..0 : 32 bits, only for testing mode dependency */
#define RADIO_MODE_DEPENDENT_XPB_TEST_REGISTER_VAL_Pos (0UL) /*!< Position of VAL field. */
#define RADIO_MODE_DEPENDENT_XPB_TEST_REGISTER_VAL_Msk (0xFFFFFFFFUL << RADIO_MODE_DEPENDENT_XPB_TEST_REGISTER_VAL_Pos) /*!< Bit mask of VAL field. */

/* Register: RADIO_MODECNF */
/* Description: Radio mode configuration register */

/* Bit 6 : IQ RAM select */
#define RADIO_MODECNF_IQRAMSEL_Pos (6UL) /*!< Position of IQRAMSEL field. */
#define RADIO_MODECNF_IQRAMSEL_Msk (0x1UL << RADIO_MODECNF_IQRAMSEL_Pos) /*!< Bit mask of IQRAMSEL field. */
#define RADIO_MODECNF_IQRAMSEL_off (0UL) /*!< IQ RAM select off */
#define RADIO_MODECNF_IQRAMSEL_on (1UL) /*!< IQ RAM select on */

/* Bit 5 : Loopback from IQ modulator (TODO: is it a good place?) */
#define RADIO_MODECNF_IQMODLOOPBACK_Pos (5UL) /*!< Position of IQMODLOOPBACK field. */
#define RADIO_MODECNF_IQMODLOOPBACK_Msk (0x1UL << RADIO_MODECNF_IQMODLOOPBACK_Pos) /*!< Bit mask of IQMODLOOPBACK field. */
#define RADIO_MODECNF_IQMODLOOPBACK_Off (0UL) /*!< Digital loopback off */
#define RADIO_MODECNF_IQMODLOOPBACK_On (1UL) /*!< Digital loopback on */

/* Bits 4..3 : Default TX value. Specifies what the RADIO will transmit when it is not started, i.e.
          between:
          RADIO.EVENTS_READY and RADIO.TASKS_START
          RADIO.EVENTS_END and RADIO.TASKS_START
          RADIO.EVENTS_END and RADIO.EVENTS_DISABLED) */
#define RADIO_MODECNF_DTX_Pos (3UL) /*!< Position of DTX field. */
#define RADIO_MODECNF_DTX_Msk (0x3UL << RADIO_MODECNF_DTX_Pos) /*!< Bit mask of DTX field. */
#define RADIO_MODECNF_DTX_B1 (0UL) /*!< Transmit '1' */
#define RADIO_MODECNF_DTX_B0 (1UL) /*!< Transmit '0' */
#define RADIO_MODECNF_DTX_Center (2UL) /*!< Transmit center frequency
          When tuning the crystal for centre frequency, the RADIO must
          be set in DTX = Center mode to be able to achieve the expected
          accuracy. This is only a valid setting for Nrf_1Mbit, Nrf_2Mbit,
          Nrf_250kbit, Ble_1Mbit and Ble_2Mbit. */

/* Bit 2 : Sideband select */
#define RADIO_MODECNF_SSEL_Pos (2UL) /*!< Position of SSEL field. */
#define RADIO_MODECNF_SSEL_Msk (0x1UL << RADIO_MODECNF_SSEL_Pos) /*!< Bit mask of SSEL field. */
#define RADIO_MODECNF_SSEL_Low (0UL) /*!< Low-side LO */
#define RADIO_MODECNF_SSEL_High (1UL) /*!< High-side LO */

/* Bit 1 : Zero-IF mode */
#define RADIO_MODECNF_ZEROIF_Pos (1UL) /*!< Position of ZEROIF field. */
#define RADIO_MODECNF_ZEROIF_Msk (0x1UL << RADIO_MODECNF_ZEROIF_Pos) /*!< Bit mask of ZEROIF field. */
#define RADIO_MODECNF_ZEROIF_Default (0UL) /*!< Default mode (heterodyne) */
#define RADIO_MODECNF_ZEROIF_ZeroIF (1UL) /*!< Zero-IF mode */

/* Bit 0 : Demodulator mode override value */
#define RADIO_MODECNF_DEMODN_Pos (0UL) /*!< Position of DEMODN field. */
#define RADIO_MODECNF_DEMODN_Msk (0x1UL << RADIO_MODECNF_DEMODN_Pos) /*!< Bit mask of DEMODN field. */
#define RADIO_MODECNF_DEMODN_Hyper (0UL) /*!< Hyper demodulator mode */
#define RADIO_MODECNF_DEMODN_Standard (1UL) /*!< Standard demodulator mode */

/* Register: RADIO_MISC */
/* Description: Misc configuration collection (to be renamed when more bits are defined) */

/* Bit 2 : Override AGC gain setting during CTE (from QOVERRIDE10) */
#define RADIO_MISC_AGCFREEZEGAINENABLE_Pos (2UL) /*!< Position of AGCFREEZEGAINENABLE field. */
#define RADIO_MISC_AGCFREEZEGAINENABLE_Msk (0x1UL << RADIO_MISC_AGCFREEZEGAINENABLE_Pos) /*!< Bit mask of AGCFREEZEGAINENABLE field. */
#define RADIO_MISC_AGCFREEZEGAINENABLE_Adjust (0UL) /*!< AGC gain settings will keep adjusting during CTE */
#define RADIO_MISC_AGCFREEZEGAINENABLE_Freeze (1UL) /*!< AGC gain settings will freeze (not keep adjusting) during CTE */

/* Bit 1 :   */
#define RADIO_MISC_AGCFREEZEAFTERREF_Pos (1UL) /*!< Position of AGCFREEZEAFTERREF field. */
#define RADIO_MISC_AGCFREEZEAFTERREF_Msk (0x1UL << RADIO_MISC_AGCFREEZEAFTERREF_Pos) /*!< Bit mask of AGCFREEZEAFTERREF field. */
#define RADIO_MISC_AGCFREEZEAFTERREF_EntireCTE (0UL) /*!< Gain freeze will apply to whole CTE, */
#define RADIO_MISC_AGCFREEZEAFTERREF_AfterRefPeriod (1UL) /*!< Gain freeze will apply to only after reference period of CTE. */

/* Bit 0 :   */
#define RADIO_MISC_DISABLEADDRWINDOW_Pos (0UL) /*!< Position of DISABLEADDRWINDOW field. */
#define RADIO_MISC_DISABLEADDRWINDOW_Msk (0x1UL << RADIO_MISC_DISABLEADDRWINDOW_Pos) /*!< Bit mask of DISABLEADDRWINDOW field. */
#define RADIO_MISC_DISABLEADDRWINDOW_Enabled (0UL) /*!< Enable */
#define RADIO_MISC_DISABLEADDRWINDOW_Disabled (1UL) /*!< Disable */

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

/* Register: RADIO_EDCTRL */
/* Description: IEEE 802.15.4 energy detect control */

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
#define RADIO_CCACTRL_CCAMODE_EdMode (0UL) /*!< Energy above threshold */
#define RADIO_CCACTRL_CCAMODE_CarrierMode (1UL) /*!< Carrier seen */
#define RADIO_CCACTRL_CCAMODE_CarrierAndEdMode (2UL) /*!< Energy above threshold AND carrier seen */
#define RADIO_CCACTRL_CCAMODE_CarrierOrEdMode (3UL) /*!< Energy above threshold OR carrier seen */
#define RADIO_CCACTRL_CCAMODE_EdModeTest1 (4UL) /*!< Energy above threshold test mode that will abort when first ED measurement over threshold is seen. No averaging. */

/* Register: RADIO_DATAWHITEIV */
/* Description: Data whitening initial value */

/* Bits 5..0 :   */
#define RADIO_DATAWHITEIV_DATAWHITEIV_Pos (0UL) /*!< Position of DATAWHITEIV field. */
#define RADIO_DATAWHITEIV_DATAWHITEIV_Msk (0x3FUL << RADIO_DATAWHITEIV_DATAWHITEIV_Pos) /*!< Bit mask of DATAWHITEIV field. */

/* Register: RADIO_ACQINJCNF0 */
/* Description: Data acquisition capture mode */

/* Bit 31 : Data acquisition or injection */
#define RADIO_ACQINJCNF0_DIR_Pos (31UL) /*!< Position of DIR field. */
#define RADIO_ACQINJCNF0_DIR_Msk (0x1UL << RADIO_ACQINJCNF0_DIR_Pos) /*!< Bit mask of DIR field. */
#define RADIO_ACQINJCNF0_DIR_ACQ (0UL) /*!< Peripheral to memory */
#define RADIO_ACQINJCNF0_DIR_INJ (1UL) /*!< Memory to peripheral */

/* Bits 10..8 : Data hijack mode (Do not select the same SRC for one than more DMAs. otherwise higher index takes over control.) */
#define RADIO_ACQINJCNF0_INJMODE_Pos (8UL) /*!< Position of INJMODE field. */
#define RADIO_ACQINJCNF0_INJMODE_Msk (0x7UL << RADIO_ACQINJCNF0_INJMODE_Pos) /*!< Bit mask of INJMODE field. */
#define RADIO_ACQINJCNF0_INJMODE_FFSRC (0UL) /*!< Pick up IQ samples from RAM as FrontEnd input (hijack ADC output) */
#define RADIO_ACQINJCNF0_INJMODE_BBSRC (1UL) /*!< Pick up IQ samples from RAM as Radio BaseBand input */
#define RADIO_ACQINJCNF0_INJMODE_TXSRC (2UL) /*!< Pick up Tx bits from RAM (skipping packet assembler as modulator input */
#define RADIO_ACQINJCNF0_INJMODE_ADPLLMODSRC (6UL) /*!< Pick up arbitrary wave from RAM to ADPLL */

/* Bits 3..0 : Data acquisition capture mode */
#define RADIO_ACQINJCNF0_ACQMODE_Pos (0UL) /*!< Position of ACQMODE field. */
#define RADIO_ACQINJCNF0_ACQMODE_Msk (0xFUL << RADIO_ACQINJCNF0_ACQMODE_Pos) /*!< Bit mask of ACQMODE field. */
#define RADIO_ACQINJCNF0_ACQMODE_ADCIQ (0UL) /*!< Logging ADCI and ADCQ */
#define RADIO_ACQINJCNF0_ACQMODE_ADCIQANDAGCGAIN (2UL) /*!< Logging ADCI, ADCQ and AGC gain settings */
#define RADIO_ACQINJCNF0_ACQMODE_AGCGAINANDPKD (3UL) /*!< Logging AGC gain settings and peak detector outputs */
#define RADIO_ACQINJCNF0_ACQMODE_FEIQ (4UL) /*!< Logging FrontEnd sampleI and sampleQ */
#define RADIO_ACQINJCNF0_ACQMODE_BBIQ (5UL) /*!< Logging BaseBand I and Q */
#define RADIO_ACQINJCNF0_ACQMODE_BBSTDOUT (6UL) /*!< Logging BaseBand std demodulator outputs (original ones, not the delayed version) */
#define RADIO_ACQINJCNF0_ACQMODE_BBHYPOUT (7UL) /*!< Logging BaseBand hyp demodulator outputs */
#define RADIO_ACQINJCNF0_ACQMODE_BBSTDHYPMUXOUT (8UL) /*!< Logging muxed demodulator outputs and flags */
#define RADIO_ACQINJCNF0_ACQMODE_ADPLLTRACE (12UL) /*!< ADPLL tracing */

/* Register: RADIO_ACQINJCNF1 */
/* Description: Data acquisition capture mode */

/* Bit 31 : Data acquisition or injection */
#define RADIO_ACQINJCNF1_DIR_Pos (31UL) /*!< Position of DIR field. */
#define RADIO_ACQINJCNF1_DIR_Msk (0x1UL << RADIO_ACQINJCNF1_DIR_Pos) /*!< Bit mask of DIR field. */
#define RADIO_ACQINJCNF1_DIR_ACQ (0UL) /*!< Peripheral to memory */
#define RADIO_ACQINJCNF1_DIR_INJ (1UL) /*!< Memory to peripheral */

/* Bits 10..8 : Data hijack mode (Do not select the same SRC for one than more DMAs. otherwise higher index takes over control.) */
#define RADIO_ACQINJCNF1_INJMODE_Pos (8UL) /*!< Position of INJMODE field. */
#define RADIO_ACQINJCNF1_INJMODE_Msk (0x7UL << RADIO_ACQINJCNF1_INJMODE_Pos) /*!< Bit mask of INJMODE field. */
#define RADIO_ACQINJCNF1_INJMODE_FFSRC (0UL) /*!< Pick up IQ samples from RAM as FrontEnd input (hijack ADC output) */
#define RADIO_ACQINJCNF1_INJMODE_BBSRC (1UL) /*!< Pick up IQ samples from RAM as Radio BaseBand input */
#define RADIO_ACQINJCNF1_INJMODE_TXSRC (2UL) /*!< Pick up Tx bits from RAM (skipping packet assembler as modulator input */
#define RADIO_ACQINJCNF1_INJMODE_ADPLLMODSRC (6UL) /*!< Pick up arbitrary wave from RAM to ADPLL */

/* Bits 3..0 : Data acquisition capture mode */
#define RADIO_ACQINJCNF1_ACQMODE_Pos (0UL) /*!< Position of ACQMODE field. */
#define RADIO_ACQINJCNF1_ACQMODE_Msk (0xFUL << RADIO_ACQINJCNF1_ACQMODE_Pos) /*!< Bit mask of ACQMODE field. */
#define RADIO_ACQINJCNF1_ACQMODE_ADCIQ (0UL) /*!< Logging ADCI and ADCQ */
#define RADIO_ACQINJCNF1_ACQMODE_ADCIQANDAGCGAIN (2UL) /*!< Logging ADCI, ADCQ and AGC gain settings */
#define RADIO_ACQINJCNF1_ACQMODE_AGCGAINANDPKD (3UL) /*!< Logging AGC gain settings and peak detector outputs */
#define RADIO_ACQINJCNF1_ACQMODE_FEIQ (4UL) /*!< Logging FrontEnd sampleI and sampleQ */
#define RADIO_ACQINJCNF1_ACQMODE_BBIQ (5UL) /*!< Logging BaseBand I and Q */
#define RADIO_ACQINJCNF1_ACQMODE_BBSTDOUT (6UL) /*!< Logging BaseBand std demodulator outputs (original ones, not the delayed version) */
#define RADIO_ACQINJCNF1_ACQMODE_BBHYPOUT (7UL) /*!< Logging BaseBand hyp demodulator outputs */
#define RADIO_ACQINJCNF1_ACQMODE_BBSTDHYPMUXOUT (8UL) /*!< Logging muxed demodulator outputs and flags */
#define RADIO_ACQINJCNF1_ACQMODE_ADPLLTRACE (12UL) /*!< ADPLL tracing */

/* Register: RADIO_ACQINJDMA0_ENABLE */
/* Description: Enable or disable data acquisition */

/* Bit 0 : Enable or disable data acquisition */
#define RADIO_ACQINJDMA0_ENABLE_ACQINJDMA0_ENABLE_Pos (0UL) /*!< Position of ACQINJDMA0_ENABLE field. */
#define RADIO_ACQINJDMA0_ENABLE_ACQINJDMA0_ENABLE_Msk (0x1UL << RADIO_ACQINJDMA0_ENABLE_ACQINJDMA0_ENABLE_Pos) /*!< Bit mask of ACQINJDMA0_ENABLE field. */
#define RADIO_ACQINJDMA0_ENABLE_ACQINJDMA0_ENABLE_Disabled (0UL) /*!< Data acquisition is disabled */
#define RADIO_ACQINJDMA0_ENABLE_ACQINJDMA0_ENABLE_Enabled (1UL) /*!< Data acquisition is enabled */

/* Register: RADIO_ACQINJDMA0_PTR */
/* Description: ACQ DMA pointer */

/* Bit 29 :   */
#define RADIO_ACQINJDMA0_PTR_BASE_Pos (29UL) /*!< Position of BASE field. */
#define RADIO_ACQINJDMA0_PTR_BASE_Msk (0x1UL << RADIO_ACQINJDMA0_PTR_BASE_Pos) /*!< Bit mask of BASE field. */

/* Bits 15..0 :   */
#define RADIO_ACQINJDMA0_PTR_OFFSET_Pos (0UL) /*!< Position of OFFSET field. */
#define RADIO_ACQINJDMA0_PTR_OFFSET_Msk (0xFFFFUL << RADIO_ACQINJDMA0_PTR_OFFSET_Pos) /*!< Bit mask of OFFSET field. */

/* Register: RADIO_ACQINJDMA0_MAXCNT */
/* Description: Maximum number of 32-bit words to transfer */

/* Bits 13..0 : Maximum number of 32-bit words to transfer */
#define RADIO_ACQINJDMA0_MAXCNT_ACQINJDMA0_MAXCNT_Pos (0UL) /*!< Position of ACQINJDMA0_MAXCNT field. */
#define RADIO_ACQINJDMA0_MAXCNT_ACQINJDMA0_MAXCNT_Msk (0x3FFFUL << RADIO_ACQINJDMA0_MAXCNT_ACQINJDMA0_MAXCNT_Pos) /*!< Bit mask of ACQINJDMA0_MAXCNT field. */

/* Register: RADIO_ACQINJDMA0_AMOUNT */
/* Description: Number of 32-bit words transferred in the last transaction */

/* Bits 13..0 : Number of 32-bit words transferred in the last transaction */
#define RADIO_ACQINJDMA0_AMOUNT_ACQINJDMA0_AMOUNT_Pos (0UL) /*!< Position of ACQINJDMA0_AMOUNT field. */
#define RADIO_ACQINJDMA0_AMOUNT_ACQINJDMA0_AMOUNT_Msk (0x3FFFUL << RADIO_ACQINJDMA0_AMOUNT_ACQINJDMA0_AMOUNT_Pos) /*!< Bit mask of ACQINJDMA0_AMOUNT field. */

/* Register: RADIO_ACQINJDMA1_ENABLE */
/* Description: Enable or disable data store */

/* Bit 0 :   */
#define RADIO_ACQINJDMA1_ENABLE_ACQINJDMA1_ENABLE_Pos (0UL) /*!< Position of ACQINJDMA1_ENABLE field. */
#define RADIO_ACQINJDMA1_ENABLE_ACQINJDMA1_ENABLE_Msk (0x1UL << RADIO_ACQINJDMA1_ENABLE_ACQINJDMA1_ENABLE_Pos) /*!< Bit mask of ACQINJDMA1_ENABLE field. */
#define RADIO_ACQINJDMA1_ENABLE_ACQINJDMA1_ENABLE_Disabled (0UL) /*!< Data store is disabled */
#define RADIO_ACQINJDMA1_ENABLE_ACQINJDMA1_ENABLE_Enabled (1UL) /*!< Data store is enabled */

/* Register: RADIO_ACQINJDMA1_PTR */
/* Description: ACQ DMA pointer */

/* Bit 29 :   */
#define RADIO_ACQINJDMA1_PTR_BASE_Pos (29UL) /*!< Position of BASE field. */
#define RADIO_ACQINJDMA1_PTR_BASE_Msk (0x1UL << RADIO_ACQINJDMA1_PTR_BASE_Pos) /*!< Bit mask of BASE field. */

/* Bits 15..0 :   */
#define RADIO_ACQINJDMA1_PTR_OFFSET_Pos (0UL) /*!< Position of OFFSET field. */
#define RADIO_ACQINJDMA1_PTR_OFFSET_Msk (0xFFFFUL << RADIO_ACQINJDMA1_PTR_OFFSET_Pos) /*!< Bit mask of OFFSET field. */

/* Register: RADIO_ACQINJDMA1_MAXCNT */
/* Description: Maximum number of 32-bit words to transfer */

/* Bits 13..0 :   */
#define RADIO_ACQINJDMA1_MAXCNT_MAXCNT_Pos (0UL) /*!< Position of MAXCNT field. */
#define RADIO_ACQINJDMA1_MAXCNT_MAXCNT_Msk (0x3FFFUL << RADIO_ACQINJDMA1_MAXCNT_MAXCNT_Pos) /*!< Bit mask of MAXCNT field. */

/* Register: RADIO_ACQINJDMA1_AMOUNT */
/* Description: Number of 32-bit words transferred in the last transaction */

/* Bits 13..0 :   */
#define RADIO_ACQINJDMA1_AMOUNT_AMOUNT_Pos (0UL) /*!< Position of AMOUNT field. */
#define RADIO_ACQINJDMA1_AMOUNT_AMOUNT_Msk (0x3FFFUL << RADIO_ACQINJDMA1_AMOUNT_AMOUNT_Pos) /*!< Bit mask of AMOUNT field. */

/* Register: RADIO_DEBUGPSEL_CLOCK */
/* Description: Pin select for RADIO clock (direct mode, base band debug. txCk and ckDataIn signals) */

/* Bit 31 : Connection */
#define RADIO_DEBUGPSEL_CLOCK_CONNECT_Pos (31UL) /*!< Position of CONNECT field. */
#define RADIO_DEBUGPSEL_CLOCK_CONNECT_Msk (0x1UL << RADIO_DEBUGPSEL_CLOCK_CONNECT_Pos) /*!< Bit mask of CONNECT field. */
#define RADIO_DEBUGPSEL_CLOCK_CONNECT_Connected (0UL) /*!< Connect */
#define RADIO_DEBUGPSEL_CLOCK_CONNECT_Disconnected (1UL) /*!< Disconnect */

/* Bits 9..8 : Port number */
#define RADIO_DEBUGPSEL_CLOCK_PORT_Pos (8UL) /*!< Position of PORT field. */
#define RADIO_DEBUGPSEL_CLOCK_PORT_Msk (0x3UL << RADIO_DEBUGPSEL_CLOCK_PORT_Pos) /*!< Bit mask of PORT field. */

/* Bits 5..0 : Pin number */
#define RADIO_DEBUGPSEL_CLOCK_PIN_Pos (0UL) /*!< Position of PIN field. */
#define RADIO_DEBUGPSEL_CLOCK_PIN_Msk (0x3FUL << RADIO_DEBUGPSEL_CLOCK_PIN_Pos) /*!< Bit mask of PIN field. */

/* Register: RADIO_DEBUGPSEL_DATA */
/* Description: Pin select for RADIO data (direct mode, base band debug. txRadioData and dataIn signals) */

/* Bit 31 : Connection */
#define RADIO_DEBUGPSEL_DATA_CONNECT_Pos (31UL) /*!< Position of CONNECT field. */
#define RADIO_DEBUGPSEL_DATA_CONNECT_Msk (0x1UL << RADIO_DEBUGPSEL_DATA_CONNECT_Pos) /*!< Bit mask of CONNECT field. */
#define RADIO_DEBUGPSEL_DATA_CONNECT_Connected (0UL) /*!< Connect */
#define RADIO_DEBUGPSEL_DATA_CONNECT_Disconnected (1UL) /*!< Disconnect */

/* Bits 9..8 : Port number */
#define RADIO_DEBUGPSEL_DATA_PORT_Pos (8UL) /*!< Position of PORT field. */
#define RADIO_DEBUGPSEL_DATA_PORT_Msk (0x3UL << RADIO_DEBUGPSEL_DATA_PORT_Pos) /*!< Bit mask of PORT field. */

/* Bits 5..0 : Pin number */
#define RADIO_DEBUGPSEL_DATA_PIN_Pos (0UL) /*!< Position of PIN field. */
#define RADIO_DEBUGPSEL_DATA_PIN_Msk (0x3FUL << RADIO_DEBUGPSEL_DATA_PIN_Pos) /*!< Bit mask of PIN field. */

/* Register: RADIO_EXTPSEL_LNACTRL */
/* Description: Pin select for external LNA control */

/* Bit 31 : Connection */
#define RADIO_EXTPSEL_LNACTRL_CONNECT_Pos (31UL) /*!< Position of CONNECT field. */
#define RADIO_EXTPSEL_LNACTRL_CONNECT_Msk (0x1UL << RADIO_EXTPSEL_LNACTRL_CONNECT_Pos) /*!< Bit mask of CONNECT field. */
#define RADIO_EXTPSEL_LNACTRL_CONNECT_Connected (0UL) /*!< Connect */
#define RADIO_EXTPSEL_LNACTRL_CONNECT_Disconnected (1UL) /*!< Disconnect */

/* Bits 9..8 : Port number */
#define RADIO_EXTPSEL_LNACTRL_PORT_Pos (8UL) /*!< Position of PORT field. */
#define RADIO_EXTPSEL_LNACTRL_PORT_Msk (0x3UL << RADIO_EXTPSEL_LNACTRL_PORT_Pos) /*!< Bit mask of PORT field. */

/* Bits 5..0 : Pin number */
#define RADIO_EXTPSEL_LNACTRL_PIN_Pos (0UL) /*!< Position of PIN field. */
#define RADIO_EXTPSEL_LNACTRL_PIN_Msk (0x3FUL << RADIO_EXTPSEL_LNACTRL_PIN_Pos) /*!< Bit mask of PIN field. */

/* Register: RADIO_EXTPSEL_PACTRL */
/* Description: Pin select for external PA control */

/* Bit 31 : Connection */
#define RADIO_EXTPSEL_PACTRL_CONNECT_Pos (31UL) /*!< Position of CONNECT field. */
#define RADIO_EXTPSEL_PACTRL_CONNECT_Msk (0x1UL << RADIO_EXTPSEL_PACTRL_CONNECT_Pos) /*!< Bit mask of CONNECT field. */
#define RADIO_EXTPSEL_PACTRL_CONNECT_Connected (0UL) /*!< Connect */
#define RADIO_EXTPSEL_PACTRL_CONNECT_Disconnected (1UL) /*!< Disconnect */

/* Bits 9..8 : Port number */
#define RADIO_EXTPSEL_PACTRL_PORT_Pos (8UL) /*!< Position of PORT field. */
#define RADIO_EXTPSEL_PACTRL_PORT_Msk (0x3UL << RADIO_EXTPSEL_PACTRL_PORT_Pos) /*!< Bit mask of PORT field. */

/* Bits 5..0 : Pin number */
#define RADIO_EXTPSEL_PACTRL_PIN_Pos (0UL) /*!< Position of PIN field. */
#define RADIO_EXTPSEL_PACTRL_PIN_Msk (0x3FUL << RADIO_EXTPSEL_PACTRL_PIN_Pos) /*!< Bit mask of PIN field. */

/* Register: RADIO_GAIN_OUT */
/* Description: Gain readout (LNA_OUT_SPI for nrf52/53) */

/* Bits 15..12 :   */
#define RADIO_GAIN_OUT_AAF_GAIN_Pos (12UL) /*!< Position of AAF_GAIN field. */
#define RADIO_GAIN_OUT_AAF_GAIN_Msk (0xFUL << RADIO_GAIN_OUT_AAF_GAIN_Pos) /*!< Bit mask of AAF_GAIN field. */

/* Bit 8 :   */
#define RADIO_GAIN_OUT_MIXFILTBYPASS_Pos (8UL) /*!< Position of MIXFILTBYPASS field. */
#define RADIO_GAIN_OUT_MIXFILTBYPASS_Msk (0x1UL << RADIO_GAIN_OUT_MIXFILTBYPASS_Pos) /*!< Bit mask of MIXFILTBYPASS field. */

/* Bits 2..0 :   */
#define RADIO_GAIN_OUT_LNA_GAIN_Pos (0UL) /*!< Position of LNA_GAIN field. */
#define RADIO_GAIN_OUT_LNA_GAIN_Msk (0x7UL << RADIO_GAIN_OUT_LNA_GAIN_Pos) /*!< Bit mask of LNA_GAIN field. */

/* Register: RADIO_SHORTCUT_INTERNAL */
/* Description: TODO */

/* Bit 15 : Internal shortcut */
#define RADIO_SHORTCUT_INTERNAL_DmaEndRadioDisable_Pos (15UL) /*!< Position of DmaEndRadioDisable field. */
#define RADIO_SHORTCUT_INTERNAL_DmaEndRadioDisable_Msk (0x1UL << RADIO_SHORTCUT_INTERNAL_DmaEndRadioDisable_Pos) /*!< Bit mask of DmaEndRadioDisable field. */

/* Bit 14 : Internal shortcut */
#define RADIO_SHORTCUT_INTERNAL_RadioCalDoneDmaStart_Pos (14UL) /*!< Position of RadioCalDoneDmaStart field. */
#define RADIO_SHORTCUT_INTERNAL_RadioCalDoneDmaStart_Msk (0x1UL << RADIO_SHORTCUT_INTERNAL_RadioCalDoneDmaStart_Pos) /*!< Bit mask of RadioCalDoneDmaStart field. */

/* Bit 13 : Internal shortcut */
#define RADIO_SHORTCUT_INTERNAL_RadioCalDoneRadioPaTestStart_Pos (13UL) /*!< Position of RadioCalDoneRadioPaTestStart field. */
#define RADIO_SHORTCUT_INTERNAL_RadioCalDoneRadioPaTestStart_Msk (0x1UL << RADIO_SHORTCUT_INTERNAL_RadioCalDoneRadioPaTestStart_Pos) /*!< Bit mask of RadioCalDoneRadioPaTestStart field. */

/* Bit 12 : Internal shortcut */
#define RADIO_SHORTCUT_INTERNAL_RadioCalDoneRadioDisable_Pos (12UL) /*!< Position of RadioCalDoneRadioDisable field. */
#define RADIO_SHORTCUT_INTERNAL_RadioCalDoneRadioDisable_Msk (0x1UL << RADIO_SHORTCUT_INTERNAL_RadioCalDoneRadioDisable_Pos) /*!< Bit mask of RadioCalDoneRadioDisable field. */

/* Bit 11 : Internal shortcut */
#define RADIO_SHORTCUT_INTERNAL_RadioChNoUpdatedRadioLbEn_Pos (11UL) /*!< Position of RadioChNoUpdatedRadioLbEn field. */
#define RADIO_SHORTCUT_INTERNAL_RadioChNoUpdatedRadioLbEn_Msk (0x1UL << RADIO_SHORTCUT_INTERNAL_RadioChNoUpdatedRadioLbEn_Pos) /*!< Bit mask of RadioChNoUpdatedRadioLbEn field. */

/* Bit 10 : Internal shortcut */
#define RADIO_SHORTCUT_INTERNAL_RadioChNoUpdatedRadioRxEn_Pos (10UL) /*!< Position of RadioChNoUpdatedRadioRxEn field. */
#define RADIO_SHORTCUT_INTERNAL_RadioChNoUpdatedRadioRxEn_Msk (0x1UL << RADIO_SHORTCUT_INTERNAL_RadioChNoUpdatedRadioRxEn_Pos) /*!< Bit mask of RadioChNoUpdatedRadioRxEn field. */

/* Bit 9 : Internal shortcut */
#define RADIO_SHORTCUT_INTERNAL_RadioChNoUpdatedRadioTxEn_Pos (9UL) /*!< Position of RadioChNoUpdatedRadioTxEn field. */
#define RADIO_SHORTCUT_INTERNAL_RadioChNoUpdatedRadioTxEn_Msk (0x1UL << RADIO_SHORTCUT_INTERNAL_RadioChNoUpdatedRadioTxEn_Pos) /*!< Bit mask of RadioChNoUpdatedRadioTxEn field. */

/* Bit 8 : Internal shortcut */
#define RADIO_SHORTCUT_INTERNAL_RadioDisabledRadioChNoIncr_Pos (8UL) /*!< Position of RadioDisabledRadioChNoIncr field. */
#define RADIO_SHORTCUT_INTERNAL_RadioDisabledRadioChNoIncr_Msk (0x1UL << RADIO_SHORTCUT_INTERNAL_RadioDisabledRadioChNoIncr_Pos) /*!< Bit mask of RadioDisabledRadioChNoIncr field. */

/* Bit 7 : Internal shortcut */
#define RADIO_SHORTCUT_INTERNAL_RadioDisabledRadioLbEn_Pos (7UL) /*!< Position of RadioDisabledRadioLbEn field. */
#define RADIO_SHORTCUT_INTERNAL_RadioDisabledRadioLbEn_Msk (0x1UL << RADIO_SHORTCUT_INTERNAL_RadioDisabledRadioLbEn_Pos) /*!< Bit mask of RadioDisabledRadioLbEn field. */

/* Bit 6 : Internal shortcut */
#define RADIO_SHORTCUT_INTERNAL_RadioDisabledRadioRxEn_Pos (6UL) /*!< Position of RadioDisabledRadioRxEn field. */
#define RADIO_SHORTCUT_INTERNAL_RadioDisabledRadioRxEn_Msk (0x1UL << RADIO_SHORTCUT_INTERNAL_RadioDisabledRadioRxEn_Pos) /*!< Bit mask of RadioDisabledRadioRxEn field. */

/* Bit 5 : Internal shortcut */
#define RADIO_SHORTCUT_INTERNAL_RadioDisabledRadioTxEn_Pos (5UL) /*!< Position of RadioDisabledRadioTxEn field. */
#define RADIO_SHORTCUT_INTERNAL_RadioDisabledRadioTxEn_Msk (0x1UL << RADIO_SHORTCUT_INTERNAL_RadioDisabledRadioTxEn_Pos) /*!< Bit mask of RadioDisabledRadioTxEn field. */

/* Bit 4 : Internal shortcut */
#define RADIO_SHORTCUT_INTERNAL_RadioLbReadyDmaStart_Pos (4UL) /*!< Position of RadioLbReadyDmaStart field. */
#define RADIO_SHORTCUT_INTERNAL_RadioLbReadyDmaStart_Msk (0x1UL << RADIO_SHORTCUT_INTERNAL_RadioLbReadyDmaStart_Pos) /*!< Bit mask of RadioLbReadyDmaStart field. */

/* Bit 3 : Internal shortcut */
#define RADIO_SHORTCUT_INTERNAL_RadioRxReadyDmaStart_Pos (3UL) /*!< Position of RadioRxReadyDmaStart field. */
#define RADIO_SHORTCUT_INTERNAL_RadioRxReadyDmaStart_Msk (0x1UL << RADIO_SHORTCUT_INTERNAL_RadioRxReadyDmaStart_Pos) /*!< Bit mask of RadioRxReadyDmaStart field. */

/* Bit 2 : Internal shortcut */
#define RADIO_SHORTCUT_INTERNAL_RadioLbReadyRadioCalStart_Pos (2UL) /*!< Position of RadioLbReadyRadioCalStart field. */
#define RADIO_SHORTCUT_INTERNAL_RadioLbReadyRadioCalStart_Msk (0x1UL << RADIO_SHORTCUT_INTERNAL_RadioLbReadyRadioCalStart_Pos) /*!< Bit mask of RadioLbReadyRadioCalStart field. */

/* Bit 1 : Internal shortcut */
#define RADIO_SHORTCUT_INTERNAL_RadioRxReadyRadioCalStart_Pos (1UL) /*!< Position of RadioRxReadyRadioCalStart field. */
#define RADIO_SHORTCUT_INTERNAL_RadioRxReadyRadioCalStart_Msk (0x1UL << RADIO_SHORTCUT_INTERNAL_RadioRxReadyRadioCalStart_Pos) /*!< Bit mask of RadioRxReadyRadioCalStart field. */

/* Bit 0 : Internal shortcut */
#define RADIO_SHORTCUT_INTERNAL_RadioTxReadyRadioCalStart_Pos (0UL) /*!< Position of RadioTxReadyRadioCalStart field. */
#define RADIO_SHORTCUT_INTERNAL_RadioTxReadyRadioCalStart_Msk (0x1UL << RADIO_SHORTCUT_INTERNAL_RadioTxReadyRadioCalStart_Pos) /*!< Bit mask of RadioTxReadyRadioCalStart field. */

/* Register: RADIO_MODE_STAND_ALONE */
/* Description: TODO */

/* Bit 31 : 0: use radioMode/radioModeUpdate from port (controlled from top), 1: use radioMode/radioModeUpdate from registers in this IP */
#define RADIO_MODE_STAND_ALONE_UseRadioModeInt_Pos (31UL) /*!< Position of UseRadioModeInt field. */
#define RADIO_MODE_STAND_ALONE_UseRadioModeInt_Msk (0x1UL << RADIO_MODE_STAND_ALONE_UseRadioModeInt_Pos) /*!< Bit mask of UseRadioModeInt field. */

/* Bit 8 : 0: Default ramp-up time, compatible with 180nm radio. 1: Fast ramp-up. */
#define RADIO_MODE_STAND_ALONE_TimingMode_Pos (8UL) /*!< Position of TimingMode field. */
#define RADIO_MODE_STAND_ALONE_TimingMode_Msk (0x1UL << RADIO_MODE_STAND_ALONE_TimingMode_Pos) /*!< Bit mask of TimingMode field. */

/* Bits 7..0 : Internal radio mode consists of sSel, zeroIf, deModN and mode[3:0] */
#define RADIO_MODE_STAND_ALONE_RadioModeInt_Pos (0UL) /*!< Position of RadioModeInt field. */
#define RADIO_MODE_STAND_ALONE_RadioModeInt_Msk (0xFFUL << RADIO_MODE_STAND_ALONE_RadioModeInt_Pos) /*!< Bit mask of RadioModeInt field. */

/* Register: RADIO_FREQUENCY */
/* Description: Frequency */

/* Bit 8 : Channel map selection. 0: Channel map between 2400 MHZ .. 2500 MHz, Frequency = 2400 + FREQUENCY (MHz). 1: Channel map between 2400 MHZ .. 2500 MHz, Frequency = 2360 + FREQUENCY (MHz). */
#define RADIO_FREQUENCY_MAP_Pos (8UL) /*!< Position of MAP field. */
#define RADIO_FREQUENCY_MAP_Msk (0x1UL << RADIO_FREQUENCY_MAP_Pos) /*!< Bit mask of MAP field. */

/* Bits 6..0 : Radio channel frequency. Frequency = 2400 + FREQUENCY (MHz). */
#define RADIO_FREQUENCY_FREQUENCY_Pos (0UL) /*!< Position of FREQUENCY field. */
#define RADIO_FREQUENCY_FREQUENCY_Msk (0x7FUL << RADIO_FREQUENCY_FREQUENCY_Pos) /*!< Bit mask of FREQUENCY field. */

/* Register: RADIO_FREQUENCY_CONFIG */
/* Description: TODO */

/* Bit 31 : Set to high to buffer FREQUENCY register so that sub-modules in the MMI will only update next frequency config at TX_EN, RX_EN and LB_EN. Set to low if special test is needed for FS test. */
#define RADIO_FREQUENCY_CONFIG_BufferedFsCh_Pos (31UL) /*!< Position of BufferedFsCh field. */
#define RADIO_FREQUENCY_CONFIG_BufferedFsCh_Msk (0x1UL << RADIO_FREQUENCY_CONFIG_BufferedFsCh_Pos) /*!< Bit mask of BufferedFsCh field. */

/* Bits 5..0 : Radio channel incremental step unit. */
#define RADIO_FREQUENCY_CONFIG_FsChNoIncrStep_Pos (0UL) /*!< Position of FsChNoIncrStep field. */
#define RADIO_FREQUENCY_CONFIG_FsChNoIncrStep_Msk (0x3FUL << RADIO_FREQUENCY_CONFIG_FsChNoIncrStep_Pos) /*!< Bit mask of FsChNoIncrStep field. */

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
#define RADIO_TXPOWER_TXPOWER_Pos10dBm_2 (0x0BUL) /*!< +10 dBm */
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

/* Register: RADIO_SPHYNXSUPPORTEVENTS */
/* Description: TODO */

/* Bits 21..17 : Transition time from TXDISABLE state to DISABLED state. (unit: 1us) */
#define RADIO_SPHYNXSUPPORTEVENTS_TRxDisable_Pos (17UL) /*!< Position of TRxDisable field. */
#define RADIO_SPHYNXSUPPORTEVENTS_TRxDisable_Msk (0x1FUL << RADIO_SPHYNXSUPPORTEVENTS_TRxDisable_Pos) /*!< Bit mask of TRxDisable field. */

/* Bits 16..12 : Transition time from RXDISABLE state to DISABLED state. (unit: 1us) */
#define RADIO_SPHYNXSUPPORTEVENTS_TTxDisable_Pos (12UL) /*!< Position of TTxDisable field. */
#define RADIO_SPHYNXSUPPORTEVENTS_TTxDisable_Msk (0x1FUL << RADIO_SPHYNXSUPPORTEVENTS_TTxDisable_Pos) /*!< Bit mask of TTxDisable field. */

/* Register: RADIO_CALIBRATION_TARGET */
/* Description: TODO */

/* Bits 2..0 : Calibration target selection for calibration engine. 0: DC_CAL, 1: RC_CAL */
#define RADIO_CALIBRATION_TARGET_CalTarget_Pos (0UL) /*!< Position of CalTarget field. */
#define RADIO_CALIBRATION_TARGET_CalTarget_Msk (0x7UL << RADIO_CALIBRATION_TARGET_CalTarget_Pos) /*!< Bit mask of CalTarget field. */

/* Register: RADIO_CALIBRATION_CONFIG */
/* Description: TODO */

/* Bit 31 : 0: use hard-coded calibration timing, 1: use manual calibration timing above */
#define RADIO_CALIBRATION_CONFIG_CalManual_Pos (31UL) /*!< Position of CalManual field. */
#define RADIO_CALIBRATION_CONFIG_CalManual_Msk (0x1UL << RADIO_CALIBRATION_CONFIG_CalManual_Pos) /*!< Bit mask of CalManual field. */

/* Bit 29 : 1: invert calCmp2 before it goes into calibration engine #2 */
#define RADIO_CALIBRATION_CONFIG_CalInvertCmp2_Pos (29UL) /*!< Position of CalInvertCmp2 field. */
#define RADIO_CALIBRATION_CONFIG_CalInvertCmp2_Msk (0x1UL << RADIO_CALIBRATION_CONFIG_CalInvertCmp2_Pos) /*!< Bit mask of CalInvertCmp2 field. */

/* Bit 28 : 1: invert calCmp1 before it goes into calibration engine #1 */
#define RADIO_CALIBRATION_CONFIG_CalInvertCmp1_Pos (28UL) /*!< Position of CalInvertCmp1 field. */
#define RADIO_CALIBRATION_CONFIG_CalInvertCmp1_Msk (0x1UL << RADIO_CALIBRATION_CONFIG_CalInvertCmp1_Pos) /*!< Bit mask of CalInvertCmp1 field. */

/* Bits 26..24 : Number of valid bits to be calibrated */
#define RADIO_CALIBRATION_CONFIG_CalBits_Pos (24UL) /*!< Position of CalBits field. */
#define RADIO_CALIBRATION_CONFIG_CalBits_Msk (0x7UL << RADIO_CALIBRATION_CONFIG_CalBits_Pos) /*!< Bit mask of CalBits field. */

/* Bits 23..16 : Compare wait time */
#define RADIO_CALIBRATION_CONFIG_CalTcompare_Pos (16UL) /*!< Position of CalTcompare field. */
#define RADIO_CALIBRATION_CONFIG_CalTcompare_Msk (0xFFUL << RADIO_CALIBRATION_CONFIG_CalTcompare_Pos) /*!< Bit mask of CalTcompare field. */

/* Bits 15..8 : Settle wait time */
#define RADIO_CALIBRATION_CONFIG_CalTsettle_Pos (8UL) /*!< Position of CalTsettle field. */
#define RADIO_CALIBRATION_CONFIG_CalTsettle_Msk (0xFFUL << RADIO_CALIBRATION_CONFIG_CalTsettle_Pos) /*!< Bit mask of CalTsettle field. */

/* Bits 7..0 : Startup wait time */
#define RADIO_CALIBRATION_CONFIG_CalTstart_Pos (0UL) /*!< Position of CalTstart field. */
#define RADIO_CALIBRATION_CONFIG_CalTstart_Msk (0xFFUL << RADIO_CALIBRATION_CONFIG_CalTstart_Pos) /*!< Bit mask of CalTstart field. */

/* Register: RADIO_CALIBRATION_RESULT */
/* Description: TODO */

/* Bits 17..11 : Calibration result from DC offset calibration on channel Q */
#define RADIO_CALIBRATION_RESULT_RfMixDcCalQ_Pos (11UL) /*!< Position of RfMixDcCalQ field. */
#define RADIO_CALIBRATION_RESULT_RfMixDcCalQ_Msk (0x7FUL << RADIO_CALIBRATION_RESULT_RfMixDcCalQ_Pos) /*!< Bit mask of RfMixDcCalQ field. */

/* Bits 10..4 : Calibration result from DC offset calibration on channel I */
#define RADIO_CALIBRATION_RESULT_RfMixDcCalI_Pos (4UL) /*!< Position of RfMixDcCalI field. */
#define RADIO_CALIBRATION_RESULT_RfMixDcCalI_Msk (0x7FUL << RADIO_CALIBRATION_RESULT_RfMixDcCalI_Pos) /*!< Bit mask of RfMixDcCalI field. */

/* Bits 3..0 : Calibration result from RC calibration */
#define RADIO_CALIBRATION_RESULT_RcCalCode_Pos (0UL) /*!< Position of RcCalCode field. */
#define RADIO_CALIBRATION_RESULT_RcCalCode_Msk (0xFUL << RADIO_CALIBRATION_RESULT_RcCalCode_Pos) /*!< Bit mask of RcCalCode field. */

/* Register: RADIO_SPHYNXANA_TEST */
/* Description: TODO */

/* Bits 27..26 : Digital test enable for digital logic in analog macro */
#define RADIO_SPHYNXANA_TEST_SphynxDteFs_Pos (26UL) /*!< Position of SphynxDteFs field. */
#define RADIO_SPHYNXANA_TEST_SphynxDteFs_Msk (0x3UL << RADIO_SPHYNXANA_TEST_SphynxDteFs_Pos) /*!< Bit mask of SphynxDteFs field. */

/* Bits 25..24 : Analog test enable for TX PWRCTRL */
#define RADIO_SPHYNXANA_TEST_SphynxAteTxPwrctrl_Pos (24UL) /*!< Position of SphynxAteTxPwrctrl field. */
#define RADIO_SPHYNXANA_TEST_SphynxAteTxPwrctrl_Msk (0x3UL << RADIO_SPHYNXANA_TEST_SphynxAteTxPwrctrl_Pos) /*!< Bit mask of SphynxAteTxPwrctrl field. */

/* Bits 23..19 : Analog test enable for RX TX */
#define RADIO_SPHYNXANA_TEST_SphynxAteRxTx_Pos (19UL) /*!< Position of SphynxAteRxTx field. */
#define RADIO_SPHYNXANA_TEST_SphynxAteRxTx_Msk (0x1FUL << RADIO_SPHYNXANA_TEST_SphynxAteRxTx_Pos) /*!< Bit mask of SphynxAteRxTx field. */

/* Bits 18..13 : Analog test enable for RX AAF */
#define RADIO_SPHYNXANA_TEST_SphynxAteRxAaf_Pos (13UL) /*!< Position of SphynxAteRxAaf field. */
#define RADIO_SPHYNXANA_TEST_SphynxAteRxAaf_Msk (0x3FUL << RADIO_SPHYNXANA_TEST_SphynxAteRxAaf_Pos) /*!< Bit mask of SphynxAteRxAaf field. */

/* Bits 12..11 : Analog test enable for RX MIX */
#define RADIO_SPHYNXANA_TEST_SphynxAteRxmix_Pos (11UL) /*!< Position of SphynxAteRxmix field. */
#define RADIO_SPHYNXANA_TEST_SphynxAteRxmix_Msk (0x3UL << RADIO_SPHYNXANA_TEST_SphynxAteRxmix_Pos) /*!< Bit mask of SphynxAteRxmix field. */

/* Bits 10..4 : Analog test enable for FS */
#define RADIO_SPHYNXANA_TEST_SphynxAteFs_Pos (4UL) /*!< Position of SphynxAteFs field. */
#define RADIO_SPHYNXANA_TEST_SphynxAteFs_Msk (0x7FUL << RADIO_SPHYNXANA_TEST_SphynxAteFs_Pos) /*!< Bit mask of SphynxAteFs field. */

/* Bits 3..0 : Analog test enable for BIAS_FS */
#define RADIO_SPHYNXANA_TEST_SphynxAteBiasfs_Pos (0UL) /*!< Position of SphynxAteBiasfs field. */
#define RADIO_SPHYNXANA_TEST_SphynxAteBiasfs_Msk (0xFUL << RADIO_SPHYNXANA_TEST_SphynxAteBiasfs_Pos) /*!< Bit mask of SphynxAteBiasfs field. */

/* Register: RADIO_SPHYNXANA_FS_CTRL_0 */
/* Description: TODO */

/* Bit 29 : Resync at flip flop inside DTC */
#define RADIO_SPHYNXANA_FS_CTRL_0_SphynxFsDtcEdgeAlign_Pos (29UL) /*!< Position of SphynxFsDtcEdgeAlign field. */
#define RADIO_SPHYNXANA_FS_CTRL_0_SphynxFsDtcEdgeAlign_Msk (0x1UL << RADIO_SPHYNXANA_FS_CTRL_0_SphynxFsDtcEdgeAlign_Pos) /*!< Bit mask of SphynxFsDtcEdgeAlign field. */

/* Bits 28..27 : 0: controls bleed current from supply, 1: bypasses DTC to send XO out directly */
#define RADIO_SPHYNXANA_FS_CTRL_0_SphynxFsDtcCtrl_Pos (27UL) /*!< Position of SphynxFsDtcCtrl field. */
#define RADIO_SPHYNXANA_FS_CTRL_0_SphynxFsDtcCtrl_Msk (0x3UL << RADIO_SPHYNXANA_FS_CTRL_0_SphynxFsDtcCtrl_Pos) /*!< Bit mask of SphynxFsDtcCtrl field. */

/* Bits 26..22 : Change back bias of NMOS in ROSC inside DIV2 */
#define RADIO_SPHYNXANA_FS_CTRL_0_SphynxFsDiv2Osc_Pos (22UL) /*!< Position of SphynxFsDiv2Osc field. */
#define RADIO_SPHYNXANA_FS_CTRL_0_SphynxFsDiv2Osc_Msk (0x1FUL << RADIO_SPHYNXANA_FS_CTRL_0_SphynxFsDiv2Osc_Pos) /*!< Bit mask of SphynxFsDiv2Osc field. */

/* Bits 21..19 : Spare, not used */
#define RADIO_SPHYNXANA_FS_CTRL_0_SphynxFsDiv2Ctrl_Pos (19UL) /*!< Position of SphynxFsDiv2Ctrl field. */
#define RADIO_SPHYNXANA_FS_CTRL_0_SphynxFsDiv2Ctrl_Msk (0x7UL << RADIO_SPHYNXANA_FS_CTRL_0_SphynxFsDiv2Ctrl_Pos) /*!< Bit mask of SphynxFsDiv2Ctrl field. */

/* Bits 18..15 : Set common mode for DIV2 */
#define RADIO_SPHYNXANA_FS_CTRL_0_SphynxFsDiv2Cm_Pos (15UL) /*!< Position of SphynxFsDiv2Cm field. */
#define RADIO_SPHYNXANA_FS_CTRL_0_SphynxFsDiv2Cm_Msk (0xFUL << RADIO_SPHYNXANA_FS_CTRL_0_SphynxFsDiv2Cm_Pos) /*!< Bit mask of SphynxFsDiv2Cm field. */

/* Bits 12..10 : FS swing calibration */
#define RADIO_SPHYNXANA_FS_CTRL_0_SphynxFsvcoSwRef_Pos (10UL) /*!< Position of SphynxFsvcoSwRef field. */
#define RADIO_SPHYNXANA_FS_CTRL_0_SphynxFsvcoSwRef_Msk (0x7UL << RADIO_SPHYNXANA_FS_CTRL_0_SphynxFsvcoSwRef_Pos) /*!< Bit mask of SphynxFsvcoSwRef field. */

/* Bits 9..6 : Spare, not used */
#define RADIO_SPHYNXANA_FS_CTRL_0_SphynxFsvcoCtrl_Pos (6UL) /*!< Position of SphynxFsvcoCtrl field. */
#define RADIO_SPHYNXANA_FS_CTRL_0_SphynxFsvcoCtrl_Msk (0xFUL << RADIO_SPHYNXANA_FS_CTRL_0_SphynxFsvcoCtrl_Pos) /*!< Bit mask of SphynxFsvcoCtrl field. */

/* Bits 5..0 : Bypass FS LDOs */
#define RADIO_SPHYNXANA_FS_CTRL_0_SphynxFsldoBypass_Pos (0UL) /*!< Position of SphynxFsldoBypass field. */
#define RADIO_SPHYNXANA_FS_CTRL_0_SphynxFsldoBypass_Msk (0x3FUL << RADIO_SPHYNXANA_FS_CTRL_0_SphynxFsldoBypass_Pos) /*!< Bit mask of SphynxFsldoBypass field. */

/* Register: RADIO_SPHYNXANA_FS_CTRL_1 */
/* Description: TODO */

/* Bits 20..18 : Spare, not used */
#define RADIO_SPHYNXANA_FS_CTRL_1_SphynxFsTdcCtrl_Pos (18UL) /*!< Position of SphynxFsTdcCtrl field. */
#define RADIO_SPHYNXANA_FS_CTRL_1_SphynxFsTdcCtrl_Msk (0x7UL << RADIO_SPHYNXANA_FS_CTRL_1_SphynxFsTdcCtrl_Pos) /*!< Bit mask of SphynxFsTdcCtrl field. */

/* Bits 13..9 : DFT control/scan-in to AdPll. [4]: arstScan, [3]: scanTest, [2]: scanCk, [1]: scanEn, [0]: scanIn */
#define RADIO_SPHYNXANA_FS_CTRL_1_SphynxFsScanbusIn_Pos (9UL) /*!< Position of SphynxFsScanbusIn field. */
#define RADIO_SPHYNXANA_FS_CTRL_1_SphynxFsScanbusIn_Msk (0x1FUL << RADIO_SPHYNXANA_FS_CTRL_1_SphynxFsScanbusIn_Pos) /*!< Bit mask of SphynxFsScanbusIn field. */

/* Bits 8..5 : For voltage tuning of reference */
#define RADIO_SPHYNXANA_FS_CTRL_1_SphynxFsRefVttrim_Pos (5UL) /*!< Position of SphynxFsRefVttrim field. */
#define RADIO_SPHYNXANA_FS_CTRL_1_SphynxFsRefVttrim_Msk (0xFUL << RADIO_SPHYNXANA_FS_CTRL_1_SphynxFsRefVttrim_Pos) /*!< Bit mask of SphynxFsRefVttrim field. */

/* Bits 4..0 : For current calibration */
#define RADIO_SPHYNXANA_FS_CTRL_1_SphynxFsRefIpptrim_Pos (0UL) /*!< Position of SphynxFsRefIpptrim field. */
#define RADIO_SPHYNXANA_FS_CTRL_1_SphynxFsRefIpptrim_Msk (0x1FUL << RADIO_SPHYNXANA_FS_CTRL_1_SphynxFsRefIpptrim_Pos) /*!< Bit mask of SphynxFsRefIpptrim field. */

/* Register: RADIO_SPHYNXANA_FS_CTRL_2 */
/* Description: TODO */

/* Bits 4..0 : SWAT_TRIM_0V8[2:0] for SWAT_VREF trimming (default is 3b'000) and SWAT_TRIM_0V8[4:3] (default is 2b'00) for IBPSR trimming */
#define RADIO_SPHYNXANA_FS_CTRL_2_SphynxSwatTrim_Pos (0UL) /*!< Position of SphynxSwatTrim field. */
#define RADIO_SPHYNXANA_FS_CTRL_2_SphynxSwatTrim_Msk (0x1FUL << RADIO_SPHYNXANA_FS_CTRL_2_SphynxSwatTrim_Pos) /*!< Bit mask of SphynxSwatTrim field. */

/* Register: RADIO_SPHYNXANA_RX_CTRL */
/* Description: TODO */

/* Bit 20 : TODO */
#define RADIO_SPHYNXANA_RX_CTRL_SphynxAdcTimingCalc_Pos (20UL) /*!< Position of SphynxAdcTimingCalc field. */
#define RADIO_SPHYNXANA_RX_CTRL_SphynxAdcTimingCalc_Msk (0x1UL << RADIO_SPHYNXANA_RX_CTRL_SphynxAdcTimingCalc_Pos) /*!< Bit mask of SphynxAdcTimingCalc field. */

/* Bit 19 : TODO */
#define RADIO_SPHYNXANA_RX_CTRL_SphynxAdcOffsetCalc_Pos (19UL) /*!< Position of SphynxAdcOffsetCalc field. */
#define RADIO_SPHYNXANA_RX_CTRL_SphynxAdcOffsetCalc_Msk (0x1UL << RADIO_SPHYNXANA_RX_CTRL_SphynxAdcOffsetCalc_Pos) /*!< Bit mask of SphynxAdcOffsetCalc field. */

/* Bit 18 : TODO */
#define RADIO_SPHYNXANA_RX_CTRL_SphynxAdcVbulkTrim_Pos (18UL) /*!< Position of SphynxAdcVbulkTrim field. */
#define RADIO_SPHYNXANA_RX_CTRL_SphynxAdcVbulkTrim_Msk (0x1UL << RADIO_SPHYNXANA_RX_CTRL_SphynxAdcVbulkTrim_Pos) /*!< Bit mask of SphynxAdcVbulkTrim field. */

/* Bits 17..15 : TODO */
#define RADIO_SPHYNXANA_RX_CTRL_SphynxLnaCurr_Pos (15UL) /*!< Position of SphynxLnaCurr field. */
#define RADIO_SPHYNXANA_RX_CTRL_SphynxLnaCurr_Msk (0x7UL << RADIO_SPHYNXANA_RX_CTRL_SphynxLnaCurr_Pos) /*!< Bit mask of SphynxLnaCurr field. */

/* Bits 14..11 : TODO */
#define RADIO_SPHYNXANA_RX_CTRL_SphynxLnaCfreq_Pos (11UL) /*!< Position of SphynxLnaCfreq field. */
#define RADIO_SPHYNXANA_RX_CTRL_SphynxLnaCfreq_Msk (0xFUL << RADIO_SPHYNXANA_RX_CTRL_SphynxLnaCfreq_Pos) /*!< Bit mask of SphynxLnaCfreq field. */

/* Bits 10..8 : TODO */
#define RADIO_SPHYNXANA_RX_CTRL_SphynxRxAafVcmTrim_Pos (8UL) /*!< Position of SphynxRxAafVcmTrim field. */
#define RADIO_SPHYNXANA_RX_CTRL_SphynxRxAafVcmTrim_Msk (0x7UL << RADIO_SPHYNXANA_RX_CTRL_SphynxRxAafVcmTrim_Pos) /*!< Bit mask of SphynxRxAafVcmTrim field. */

/* Bits 7..4 : RC trim values for RX_AAF generated by RC_CAL */
#define RADIO_SPHYNXANA_RX_CTRL_SphynxRxAafRctrimm_Pos (4UL) /*!< Position of SphynxRxAafRctrimm field. */
#define RADIO_SPHYNXANA_RX_CTRL_SphynxRxAafRctrimm_Msk (0xFUL << RADIO_SPHYNXANA_RX_CTRL_SphynxRxAafRctrimm_Pos) /*!< Bit mask of SphynxRxAafRctrimm field. */

/* Bit 3 : 1: output from MIX_AMP is Q leading I, 0 output from MIX_AMP is I leading Q. */
#define RADIO_SPHYNXANA_RX_CTRL_SphynxRxmixQleadsi_Pos (3UL) /*!< Position of SphynxRxmixQleadsi field. */
#define RADIO_SPHYNXANA_RX_CTRL_SphynxRxmixQleadsi_Msk (0x1UL << RADIO_SPHYNXANA_RX_CTRL_SphynxRxmixQleadsi_Pos) /*!< Bit mask of SphynxRxmixQleadsi field. */

/* Bits 2..0 : Bypass Rx LDOs. */
#define RADIO_SPHYNXANA_RX_CTRL_SphynxBypassLdoRx_Pos (0UL) /*!< Position of SphynxBypassLdoRx field. */
#define RADIO_SPHYNXANA_RX_CTRL_SphynxBypassLdoRx_Msk (0x7UL << RADIO_SPHYNXANA_RX_CTRL_SphynxBypassLdoRx_Pos) /*!< Bit mask of SphynxBypassLdoRx field. */

/* Register: RADIO_SPHYNXANA_TX_CTRL */
/* Description: TODO */

/* Bits 14..12 : Radio Tx output power fine tune. */
#define RADIO_SPHYNXANA_TX_CTRL_SphynxTxPwrFine_Pos (12UL) /*!< Position of SphynxTxPwrFine field. */
#define RADIO_SPHYNXANA_TX_CTRL_SphynxTxPwrFine_Msk (0x7UL << RADIO_SPHYNXANA_TX_CTRL_SphynxTxPwrFine_Pos) /*!< Bit mask of SphynxTxPwrFine field. */

/* Bits 11..6 : TODO */
#define RADIO_SPHYNXANA_TX_CTRL_SphynxTxPwrctrlTune_Pos (6UL) /*!< Position of SphynxTxPwrctrlTune field. */
#define RADIO_SPHYNXANA_TX_CTRL_SphynxTxPwrctrlTune_Msk (0x3FUL << RADIO_SPHYNXANA_TX_CTRL_SphynxTxPwrctrlTune_Pos) /*!< Bit mask of SphynxTxPwrctrlTune field. */

/* Bits 5..3 : TX PA ramp up/down control. */
#define RADIO_SPHYNXANA_TX_CTRL_SphynxTxPaSramp_Pos (3UL) /*!< Position of SphynxTxPaSramp field. */
#define RADIO_SPHYNXANA_TX_CTRL_SphynxTxPaSramp_Msk (0x7UL << RADIO_SPHYNXANA_TX_CTRL_SphynxTxPaSramp_Pos) /*!< Bit mask of SphynxTxPaSramp field. */

/* Bits 2..0 : Bypass Tx LDOs. */
#define RADIO_SPHYNXANA_TX_CTRL_SphynxBypassLdoTx_Pos (0UL) /*!< Position of SphynxBypassLdoTx field. */
#define RADIO_SPHYNXANA_TX_CTRL_SphynxBypassLdoTx_Msk (0x7UL << RADIO_SPHYNXANA_TX_CTRL_SphynxBypassLdoTx_Pos) /*!< Bit mask of SphynxBypassLdoTx field. */

/* Register: RADIO_SPHYNXANA_MODE_DEPENDENT */
/* Description: TODO */

/* Bit 0 : Select Rx IF frequency. 0: 1Mbps, 1: 2Mbps(4Mbps) */
#define RADIO_SPHYNXANA_MODE_DEPENDENT_SphynxRxAafFreq_Pos (0UL) /*!< Position of SphynxRxAafFreq field. */
#define RADIO_SPHYNXANA_MODE_DEPENDENT_SphynxRxAafFreq_Msk (0x1UL << RADIO_SPHYNXANA_MODE_DEPENDENT_SphynxRxAafFreq_Pos) /*!< Bit mask of SphynxRxAafFreq field. */

/* Register: RADIO_SPHYNXANA_RX_TRIM_CODE */
/* Description: TODO */

/* Bit 23 : For RXMIX_DCCAL_Q_0V8, 0: controlled by CalibrationEngine, 1: overridden by register */
#define RADIO_SPHYNXANA_RX_TRIM_CODE_OvrEnRfMixDcCalQ_Pos (23UL) /*!< Position of OvrEnRfMixDcCalQ field. */
#define RADIO_SPHYNXANA_RX_TRIM_CODE_OvrEnRfMixDcCalQ_Msk (0x1UL << RADIO_SPHYNXANA_RX_TRIM_CODE_OvrEnRfMixDcCalQ_Pos) /*!< Bit mask of OvrEnRfMixDcCalQ field. */

/* Bits 22..16 : Override values on RXMIX_DCCAL_Q_0V8 */
#define RADIO_SPHYNXANA_RX_TRIM_CODE_OvrValRfMixDcCalQ_Pos (16UL) /*!< Position of OvrValRfMixDcCalQ field. */
#define RADIO_SPHYNXANA_RX_TRIM_CODE_OvrValRfMixDcCalQ_Msk (0x7FUL << RADIO_SPHYNXANA_RX_TRIM_CODE_OvrValRfMixDcCalQ_Pos) /*!< Bit mask of OvrValRfMixDcCalQ field. */

/* Bit 15 : For RXMIX_DCCAL_I_0V8, 0: controlled by CalibrationEngine, 1: overridden by register */
#define RADIO_SPHYNXANA_RX_TRIM_CODE_OvrEnRfMixDcCalI_Pos (15UL) /*!< Position of OvrEnRfMixDcCalI field. */
#define RADIO_SPHYNXANA_RX_TRIM_CODE_OvrEnRfMixDcCalI_Msk (0x1UL << RADIO_SPHYNXANA_RX_TRIM_CODE_OvrEnRfMixDcCalI_Pos) /*!< Bit mask of OvrEnRfMixDcCalI field. */

/* Bits 14..8 : Override values on RXMIX_DCCAL_I_0V8 */
#define RADIO_SPHYNXANA_RX_TRIM_CODE_OvrValRfMixDcCalI_Pos (8UL) /*!< Position of OvrValRfMixDcCalI field. */
#define RADIO_SPHYNXANA_RX_TRIM_CODE_OvrValRfMixDcCalI_Msk (0x7FUL << RADIO_SPHYNXANA_RX_TRIM_CODE_OvrValRfMixDcCalI_Pos) /*!< Bit mask of OvrValRfMixDcCalI field. */

/* Bit 7 : For RCCAL_CODE_0V8, 0: controlled by CalibrationEngine, 1: overridden by register */
#define RADIO_SPHYNXANA_RX_TRIM_CODE_OvrEnRcCalCode_Pos (7UL) /*!< Position of OvrEnRcCalCode field. */
#define RADIO_SPHYNXANA_RX_TRIM_CODE_OvrEnRcCalCode_Msk (0x1UL << RADIO_SPHYNXANA_RX_TRIM_CODE_OvrEnRcCalCode_Pos) /*!< Bit mask of OvrEnRcCalCode field. */

/* Bits 3..0 : Override values on RCCAL_CODE_0V8 */
#define RADIO_SPHYNXANA_RX_TRIM_CODE_OvrValRcCalCode_Pos (0UL) /*!< Position of OvrValRcCalCode field. */
#define RADIO_SPHYNXANA_RX_TRIM_CODE_OvrValRcCalCode_Msk (0xFUL << RADIO_SPHYNXANA_RX_TRIM_CODE_OvrValRcCalCode_Pos) /*!< Bit mask of OvrValRcCalCode field. */

/* Register: RADIO_SPHYNXANA_STATUS */
/* Description: TODO */

/* Bit 31 : DFT Scan-out from AdPll */
#define RADIO_SPHYNXANA_STATUS_SphynxFsScanOutAo_Pos (31UL) /*!< Position of SphynxFsScanOutAo field. */
#define RADIO_SPHYNXANA_STATUS_SphynxFsScanOutAo_Msk (0x1UL << RADIO_SPHYNXANA_STATUS_SphynxFsScanOutAo_Pos) /*!< Bit mask of SphynxFsScanOutAo field. */

/* Bits 26..25 : Raw peak detector output from RX_PKDET */
#define RADIO_SPHYNXANA_STATUS_SphynxRxPkdetAo_Pos (25UL) /*!< Position of SphynxRxPkdetAo field. */
#define RADIO_SPHYNXANA_STATUS_SphynxRxPkdetAo_Msk (0x3UL << RADIO_SPHYNXANA_STATUS_SphynxRxPkdetAo_Pos) /*!< Bit mask of SphynxRxPkdetAo field. */

/* Bit 24 : Raw comparator output of DC calibration from RX_AAF Q channel */
#define RADIO_SPHYNXANA_STATUS_SphynxAafDccalQAo_Pos (24UL) /*!< Position of SphynxAafDccalQAo field. */
#define RADIO_SPHYNXANA_STATUS_SphynxAafDccalQAo_Msk (0x1UL << RADIO_SPHYNXANA_STATUS_SphynxAafDccalQAo_Pos) /*!< Bit mask of SphynxAafDccalQAo field. */

/* Bit 23 : Raw comparator output of DC calibration from RX_AAF I channel */
#define RADIO_SPHYNXANA_STATUS_SphynxAafDccalIAo_Pos (23UL) /*!< Position of SphynxAafDccalIAo field. */
#define RADIO_SPHYNXANA_STATUS_SphynxAafDccalIAo_Msk (0x1UL << RADIO_SPHYNXANA_STATUS_SphynxAafDccalIAo_Pos) /*!< Bit mask of SphynxAafDccalIAo field. */

/* Bit 22 : Raw comparator output of RC calibration from RC_CAL */
#define RADIO_SPHYNXANA_STATUS_SphynxCalCmpRccalAo_Pos (22UL) /*!< Position of SphynxCalCmpRccalAo field. */
#define RADIO_SPHYNXANA_STATUS_SphynxCalCmpRccalAo_Msk (0x1UL << RADIO_SPHYNXANA_STATUS_SphynxCalCmpRccalAo_Pos) /*!< Bit mask of SphynxCalCmpRccalAo field. */

/* Bits 21..11 : Raw ADC Q channel output from RX_SAR2 */
#define RADIO_SPHYNXANA_STATUS_SphynxAdcBqAo_Pos (11UL) /*!< Position of SphynxAdcBqAo field. */
#define RADIO_SPHYNXANA_STATUS_SphynxAdcBqAo_Msk (0x7FFUL << RADIO_SPHYNXANA_STATUS_SphynxAdcBqAo_Pos) /*!< Bit mask of SphynxAdcBqAo field. */

/* Bits 10..0 : Raw ADC I channel output from RX_SAR2 */
#define RADIO_SPHYNXANA_STATUS_SphynxAdcBiAo_Pos (0UL) /*!< Position of SphynxAdcBiAo field. */
#define RADIO_SPHYNXANA_STATUS_SphynxAdcBiAo_Msk (0x7FFUL << RADIO_SPHYNXANA_STATUS_SphynxAdcBiAo_Pos) /*!< Bit mask of SphynxAdcBiAo field. */

/* Register: RADIO_TIMINGENGINE_GROUP_ALL_0 */
/* Description: TODO */

/* Bits 31..24 : (unit: 0.25us) Timing control of pwrupRadio[1] */
#define RADIO_TIMINGENGINE_GROUP_ALL_0_TPwrupRadio_Bit1_Pos (24UL) /*!< Position of TPwrupRadio_Bit1 field. */
#define RADIO_TIMINGENGINE_GROUP_ALL_0_TPwrupRadio_Bit1_Msk (0xFFUL << RADIO_TIMINGENGINE_GROUP_ALL_0_TPwrupRadio_Bit1_Pos) /*!< Bit mask of TPwrupRadio_Bit1 field. */

/* Bits 23..16 : (unit: 0.25us) Timing control of pwrupRadio[0] */
#define RADIO_TIMINGENGINE_GROUP_ALL_0_TPwrupRadio_Bit0_Pos (16UL) /*!< Position of TPwrupRadio_Bit0 field. */
#define RADIO_TIMINGENGINE_GROUP_ALL_0_TPwrupRadio_Bit0_Msk (0xFFUL << RADIO_TIMINGENGINE_GROUP_ALL_0_TPwrupRadio_Bit0_Pos) /*!< Bit mask of TPwrupRadio_Bit0 field. */

/* Bits 15..8 : (unit: 0.25us) Timing control of retainRadio */
#define RADIO_TIMINGENGINE_GROUP_ALL_0_TRetainRadio_Pos (8UL) /*!< Position of TRetainRadio field. */
#define RADIO_TIMINGENGINE_GROUP_ALL_0_TRetainRadio_Msk (0xFFUL << RADIO_TIMINGENGINE_GROUP_ALL_0_TRetainRadio_Pos) /*!< Bit mask of TRetainRadio field. */

/* Bits 7..0 : (unit: 0.25us) Timing control of pllSettled */
#define RADIO_TIMINGENGINE_GROUP_ALL_0_TPllSettled_Pos (0UL) /*!< Position of TPllSettled field. */
#define RADIO_TIMINGENGINE_GROUP_ALL_0_TPllSettled_Msk (0xFFUL << RADIO_TIMINGENGINE_GROUP_ALL_0_TPllSettled_Pos) /*!< Bit mask of TPllSettled field. */

/* Register: RADIO_TIMINGENGINE_GROUP_ALL_1 */
/* Description: TODO */

/* Bits 23..16 : (unit: 0.25us) Timing control of PwrupFsRef[2] */
#define RADIO_TIMINGENGINE_GROUP_ALL_1_TPwrupFsRef_Bit2_Pos (16UL) /*!< Position of TPwrupFsRef_Bit2 field. */
#define RADIO_TIMINGENGINE_GROUP_ALL_1_TPwrupFsRef_Bit2_Msk (0xFFUL << RADIO_TIMINGENGINE_GROUP_ALL_1_TPwrupFsRef_Bit2_Pos) /*!< Bit mask of TPwrupFsRef_Bit2 field. */

/* Bits 15..8 : (unit: 0.25us) Timing control of PwrupFsRef[1] */
#define RADIO_TIMINGENGINE_GROUP_ALL_1_TPwrupFsRef_Bit1_Pos (8UL) /*!< Position of TPwrupFsRef_Bit1 field. */
#define RADIO_TIMINGENGINE_GROUP_ALL_1_TPwrupFsRef_Bit1_Msk (0xFFUL << RADIO_TIMINGENGINE_GROUP_ALL_1_TPwrupFsRef_Bit1_Pos) /*!< Bit mask of TPwrupFsRef_Bit1 field. */

/* Bits 7..0 : (unit: 0.25us) Timing control of PwrupFsRef[0] */
#define RADIO_TIMINGENGINE_GROUP_ALL_1_TPwrupFsRef_Bit0_Pos (0UL) /*!< Position of TPwrupFsRef_Bit0 field. */
#define RADIO_TIMINGENGINE_GROUP_ALL_1_TPwrupFsRef_Bit0_Msk (0xFFUL << RADIO_TIMINGENGINE_GROUP_ALL_1_TPwrupFsRef_Bit0_Pos) /*!< Bit mask of TPwrupFsRef_Bit0 field. */

/* Register: RADIO_TIMINGENGINE_GROUP_ALL_2 */
/* Description: TODO */

/* Bits 31..24 : (unit: 0.25us) Timing control of PwrupFsLdoVco[1] */
#define RADIO_TIMINGENGINE_GROUP_ALL_2_TPwrupFsLdoVco_Bit1_Pos (24UL) /*!< Position of TPwrupFsLdoVco_Bit1 field. */
#define RADIO_TIMINGENGINE_GROUP_ALL_2_TPwrupFsLdoVco_Bit1_Msk (0xFFUL << RADIO_TIMINGENGINE_GROUP_ALL_2_TPwrupFsLdoVco_Bit1_Pos) /*!< Bit mask of TPwrupFsLdoVco_Bit1 field. */

/* Bits 23..16 : (unit: 0.25us) Timing control of PwrupFsLdoVco[0] */
#define RADIO_TIMINGENGINE_GROUP_ALL_2_TPwrupFsLdoVco_Bit0_Pos (16UL) /*!< Position of TPwrupFsLdoVco_Bit0 field. */
#define RADIO_TIMINGENGINE_GROUP_ALL_2_TPwrupFsLdoVco_Bit0_Msk (0xFFUL << RADIO_TIMINGENGINE_GROUP_ALL_2_TPwrupFsLdoVco_Bit0_Pos) /*!< Bit mask of TPwrupFsLdoVco_Bit0 field. */

/* Bits 15..8 : (unit: 0.25us) Timing control of RstFsLs[1] */
#define RADIO_TIMINGENGINE_GROUP_ALL_2_TRstFsLs_Bit1_Pos (8UL) /*!< Position of TRstFsLs_Bit1 field. */
#define RADIO_TIMINGENGINE_GROUP_ALL_2_TRstFsLs_Bit1_Msk (0xFFUL << RADIO_TIMINGENGINE_GROUP_ALL_2_TRstFsLs_Bit1_Pos) /*!< Bit mask of TRstFsLs_Bit1 field. */

/* Bits 7..0 : (unit: 0.25us) Timing control of RstFsLs[0] */
#define RADIO_TIMINGENGINE_GROUP_ALL_2_TRstFsLs_Bit0_Pos (0UL) /*!< Position of TRstFsLs_Bit0 field. */
#define RADIO_TIMINGENGINE_GROUP_ALL_2_TRstFsLs_Bit0_Msk (0xFFUL << RADIO_TIMINGENGINE_GROUP_ALL_2_TRstFsLs_Bit0_Pos) /*!< Bit mask of TRstFsLs_Bit0 field. */

/* Register: RADIO_TIMINGENGINE_GROUP_ALL_3 */
/* Description: TODO */

/* Bits 31..24 : (unit: 0.25us) Timing control of PwrupFsLdoDig[1] */
#define RADIO_TIMINGENGINE_GROUP_ALL_3_TPwrupFsLdoDig_Bit1_Pos (24UL) /*!< Position of TPwrupFsLdoDig_Bit1 field. */
#define RADIO_TIMINGENGINE_GROUP_ALL_3_TPwrupFsLdoDig_Bit1_Msk (0xFFUL << RADIO_TIMINGENGINE_GROUP_ALL_3_TPwrupFsLdoDig_Bit1_Pos) /*!< Bit mask of TPwrupFsLdoDig_Bit1 field. */

/* Bits 23..16 : (unit: 0.25us) Timing control of PwrupFsLdoDig[0] */
#define RADIO_TIMINGENGINE_GROUP_ALL_3_TPwrupFsLdoDig_Bit0_Pos (16UL) /*!< Position of TPwrupFsLdoDig_Bit0 field. */
#define RADIO_TIMINGENGINE_GROUP_ALL_3_TPwrupFsLdoDig_Bit0_Msk (0xFFUL << RADIO_TIMINGENGINE_GROUP_ALL_3_TPwrupFsLdoDig_Bit0_Pos) /*!< Bit mask of TPwrupFsLdoDig_Bit0 field. */

/* Bits 15..8 : (unit: 0.25us) Timing control of PwrupFsLdoDtc[1] */
#define RADIO_TIMINGENGINE_GROUP_ALL_3_TPwrupFsLdoDtc_Bit1_Pos (8UL) /*!< Position of TPwrupFsLdoDtc_Bit1 field. */
#define RADIO_TIMINGENGINE_GROUP_ALL_3_TPwrupFsLdoDtc_Bit1_Msk (0xFFUL << RADIO_TIMINGENGINE_GROUP_ALL_3_TPwrupFsLdoDtc_Bit1_Pos) /*!< Bit mask of TPwrupFsLdoDtc_Bit1 field. */

/* Bits 7..0 : (unit: 0.25us) Timing control of PwrupFsLdoDtc[0] */
#define RADIO_TIMINGENGINE_GROUP_ALL_3_TPwrupFsLdoDtc_Bit0_Pos (0UL) /*!< Position of TPwrupFsLdoDtc_Bit0 field. */
#define RADIO_TIMINGENGINE_GROUP_ALL_3_TPwrupFsLdoDtc_Bit0_Msk (0xFFUL << RADIO_TIMINGENGINE_GROUP_ALL_3_TPwrupFsLdoDtc_Bit0_Pos) /*!< Bit mask of TPwrupFsLdoDtc_Bit0 field. */

/* Register: RADIO_TIMINGENGINE_GROUP_ALL_4 */
/* Description: TODO */

/* Bits 31..24 : (unit: 0.25us) Timing control of PwrupFsLdoCnt[1] */
#define RADIO_TIMINGENGINE_GROUP_ALL_4_TPwrupFsLdoCnt_Bit1_Pos (24UL) /*!< Position of TPwrupFsLdoCnt_Bit1 field. */
#define RADIO_TIMINGENGINE_GROUP_ALL_4_TPwrupFsLdoCnt_Bit1_Msk (0xFFUL << RADIO_TIMINGENGINE_GROUP_ALL_4_TPwrupFsLdoCnt_Bit1_Pos) /*!< Bit mask of TPwrupFsLdoCnt_Bit1 field. */

/* Bits 23..16 : (unit: 0.25us) Timing control of PwrupFsLdoCnt[0] */
#define RADIO_TIMINGENGINE_GROUP_ALL_4_TPwrupFsLdoCnt_Bit0_Pos (16UL) /*!< Position of TPwrupFsLdoCnt_Bit0 field. */
#define RADIO_TIMINGENGINE_GROUP_ALL_4_TPwrupFsLdoCnt_Bit0_Msk (0xFFUL << RADIO_TIMINGENGINE_GROUP_ALL_4_TPwrupFsLdoCnt_Bit0_Pos) /*!< Bit mask of TPwrupFsLdoCnt_Bit0 field. */

/* Bits 15..8 : (unit: 0.25us) Timing control of PwrupFsLdoDiv[1] */
#define RADIO_TIMINGENGINE_GROUP_ALL_4_TPwrupFsLdoDiv_Bit1_Pos (8UL) /*!< Position of TPwrupFsLdoDiv_Bit1 field. */
#define RADIO_TIMINGENGINE_GROUP_ALL_4_TPwrupFsLdoDiv_Bit1_Msk (0xFFUL << RADIO_TIMINGENGINE_GROUP_ALL_4_TPwrupFsLdoDiv_Bit1_Pos) /*!< Bit mask of TPwrupFsLdoDiv_Bit1 field. */

/* Bits 7..0 : (unit: 0.25us) Timing control of PwrupFsLdoDiv[0] */
#define RADIO_TIMINGENGINE_GROUP_ALL_4_TPwrupFsLdoDiv_Bit0_Pos (0UL) /*!< Position of TPwrupFsLdoDiv_Bit0 field. */
#define RADIO_TIMINGENGINE_GROUP_ALL_4_TPwrupFsLdoDiv_Bit0_Msk (0xFFUL << RADIO_TIMINGENGINE_GROUP_ALL_4_TPwrupFsLdoDiv_Bit0_Pos) /*!< Bit mask of TPwrupFsLdoDiv_Bit0 field. */

/* Register: RADIO_TIMINGENGINE_GROUP_ALL_5 */
/* Description: TODO */

/* Bits 31..24 : (unit: 0.25us) Timing control of FsStart */
#define RADIO_TIMINGENGINE_GROUP_ALL_5_TFsStart_Pos (24UL) /*!< Position of TFsStart field. */
#define RADIO_TIMINGENGINE_GROUP_ALL_5_TFsStart_Msk (0xFFUL << RADIO_TIMINGENGINE_GROUP_ALL_5_TFsStart_Pos) /*!< Bit mask of TFsStart field. */

/* Bits 23..16 : (unit: 0.25us) Timing control of ArstFs */
#define RADIO_TIMINGENGINE_GROUP_ALL_5_TArstFs_Pos (16UL) /*!< Position of TArstFs field. */
#define RADIO_TIMINGENGINE_GROUP_ALL_5_TArstFs_Msk (0xFFUL << RADIO_TIMINGENGINE_GROUP_ALL_5_TArstFs_Pos) /*!< Bit mask of TArstFs field. */

/* Bits 15..8 : (unit: 0.25us) Timing control of PwrupFsLdoTdc[1] */
#define RADIO_TIMINGENGINE_GROUP_ALL_5_TPwrupFsLdoTdc_Bit1_Pos (8UL) /*!< Position of TPwrupFsLdoTdc_Bit1 field. */
#define RADIO_TIMINGENGINE_GROUP_ALL_5_TPwrupFsLdoTdc_Bit1_Msk (0xFFUL << RADIO_TIMINGENGINE_GROUP_ALL_5_TPwrupFsLdoTdc_Bit1_Pos) /*!< Bit mask of TPwrupFsLdoTdc_Bit1 field. */

/* Bits 7..0 : (unit: 0.25us) Timing control of PwrupFsLdoTdc[0] */
#define RADIO_TIMINGENGINE_GROUP_ALL_5_TPwrupFsLdoTdc_Bit0_Pos (0UL) /*!< Position of TPwrupFsLdoTdc_Bit0 field. */
#define RADIO_TIMINGENGINE_GROUP_ALL_5_TPwrupFsLdoTdc_Bit0_Msk (0xFFUL << RADIO_TIMINGENGINE_GROUP_ALL_5_TPwrupFsLdoTdc_Bit0_Pos) /*!< Bit mask of TPwrupFsLdoTdc_Bit0 field. */

/* Register: RADIO_TIMINGENGINE_GROUP_ALL_6 */
/* Description: TODO */

/* Bits 31..24 : (unit: 0.25us) Timing control of PwrupFsDiv2 */
#define RADIO_TIMINGENGINE_GROUP_ALL_6_TPwrupFsDiv2_Pos (24UL) /*!< Position of TPwrupFsDiv2 field. */
#define RADIO_TIMINGENGINE_GROUP_ALL_6_TPwrupFsDiv2_Msk (0xFFUL << RADIO_TIMINGENGINE_GROUP_ALL_6_TPwrupFsDiv2_Pos) /*!< Bit mask of TPwrupFsDiv2 field. */

/* Bits 23..16 : (unit: 0.25us) Timing control of PwrupFsVco */
#define RADIO_TIMINGENGINE_GROUP_ALL_6_TPwrupFsVco_Pos (16UL) /*!< Position of TPwrupFsVco field. */
#define RADIO_TIMINGENGINE_GROUP_ALL_6_TPwrupFsVco_Msk (0xFFUL << RADIO_TIMINGENGINE_GROUP_ALL_6_TPwrupFsVco_Pos) /*!< Bit mask of TPwrupFsVco field. */

/* Bits 15..8 : (unit: 0.25us) Timing control of PwrupFsTdc */
#define RADIO_TIMINGENGINE_GROUP_ALL_6_TPwrupFsTdc_Pos (8UL) /*!< Position of TPwrupFsTdc field. */
#define RADIO_TIMINGENGINE_GROUP_ALL_6_TPwrupFsTdc_Msk (0xFFUL << RADIO_TIMINGENGINE_GROUP_ALL_6_TPwrupFsTdc_Pos) /*!< Bit mask of TPwrupFsTdc field. */

/* Bits 7..0 : (unit: 0.25us) Timing control of PwrupFsDtc */
#define RADIO_TIMINGENGINE_GROUP_ALL_6_TPwrupFsDtc_Pos (0UL) /*!< Position of TPwrupFsDtc field. */
#define RADIO_TIMINGENGINE_GROUP_ALL_6_TPwrupFsDtc_Msk (0xFFUL << RADIO_TIMINGENGINE_GROUP_ALL_6_TPwrupFsDtc_Pos) /*!< Bit mask of TPwrupFsDtc field. */

/* Register: RADIO_TIMINGENGINE_GROUP_ALL_7 */
/* Description: TODO */

/* Bits 31..24 : (unit: 0.25us) Timing control of PwrupRxTxRef[2] */
#define RADIO_TIMINGENGINE_GROUP_ALL_7_TPwrupRxTxRef_Bit2_Pos (24UL) /*!< Position of TPwrupRxTxRef_Bit2 field. */
#define RADIO_TIMINGENGINE_GROUP_ALL_7_TPwrupRxTxRef_Bit2_Msk (0xFFUL << RADIO_TIMINGENGINE_GROUP_ALL_7_TPwrupRxTxRef_Bit2_Pos) /*!< Bit mask of TPwrupRxTxRef_Bit2 field. */

/* Bits 23..16 : (unit: 0.25us) Timing control of PwrupRxTxRef[1] */
#define RADIO_TIMINGENGINE_GROUP_ALL_7_TPwrupRxTxRef_Bit1_Pos (16UL) /*!< Position of TPwrupRxTxRef_Bit1 field. */
#define RADIO_TIMINGENGINE_GROUP_ALL_7_TPwrupRxTxRef_Bit1_Msk (0xFFUL << RADIO_TIMINGENGINE_GROUP_ALL_7_TPwrupRxTxRef_Bit1_Pos) /*!< Bit mask of TPwrupRxTxRef_Bit1 field. */

/* Bits 15..8 : (unit: 0.25us) Timing control of PwrupRxTxRef[0] */
#define RADIO_TIMINGENGINE_GROUP_ALL_7_TPwrupRxTxRef_Bit0_Pos (8UL) /*!< Position of TPwrupRxTxRef_Bit0 field. */
#define RADIO_TIMINGENGINE_GROUP_ALL_7_TPwrupRxTxRef_Bit0_Msk (0xFFUL << RADIO_TIMINGENGINE_GROUP_ALL_7_TPwrupRxTxRef_Bit0_Pos) /*!< Bit mask of TPwrupRxTxRef_Bit0 field. */

/* Bits 7..0 : (unit: 0.25us) Timing control of PwrupFsDiv2g4Counter */
#define RADIO_TIMINGENGINE_GROUP_ALL_7_TPwrupFsDiv2g4Counter_Pos (0UL) /*!< Position of TPwrupFsDiv2g4Counter field. */
#define RADIO_TIMINGENGINE_GROUP_ALL_7_TPwrupFsDiv2g4Counter_Msk (0xFFUL << RADIO_TIMINGENGINE_GROUP_ALL_7_TPwrupFsDiv2g4Counter_Pos) /*!< Bit mask of TPwrupFsDiv2g4Counter field. */

/* Register: RADIO_TIMINGENGINE_GROUP_ALL_8 */
/* Description: TODO */

/* Bits 7..0 : (unit: 0.25us) Timing control of RstFsLs[2] */
#define RADIO_TIMINGENGINE_GROUP_ALL_8_TRstFsLs_Bit2_Pos (0UL) /*!< Position of TRstFsLs_Bit2 field. */
#define RADIO_TIMINGENGINE_GROUP_ALL_8_TRstFsLs_Bit2_Msk (0xFFUL << RADIO_TIMINGENGINE_GROUP_ALL_8_TRstFsLs_Bit2_Pos) /*!< Bit mask of TRstFsLs_Bit2 field. */

/* Register: RADIO_TIMINGENGINE_MODE_DEPENDENT */
/* Description: TODO */

/* Bits 31..24 : (unit: 0.25us) Timing control of DeltaPwrdnPa */
#define RADIO_TIMINGENGINE_MODE_DEPENDENT_TDeltaPwrdnPa_Pos (24UL) /*!< Position of TDeltaPwrdnPa field. */
#define RADIO_TIMINGENGINE_MODE_DEPENDENT_TDeltaPwrdnPa_Msk (0xFFUL << RADIO_TIMINGENGINE_MODE_DEPENDENT_TDeltaPwrdnPa_Pos) /*!< Bit mask of TDeltaPwrdnPa field. */

/* Bits 23..16 : (unit: 0.25us) Timing control of DeltaPipe */
#define RADIO_TIMINGENGINE_MODE_DEPENDENT_TDeltaPipe_Pos (16UL) /*!< Position of TDeltaPipe field. */
#define RADIO_TIMINGENGINE_MODE_DEPENDENT_TDeltaPipe_Msk (0xFFUL << RADIO_TIMINGENGINE_MODE_DEPENDENT_TDeltaPipe_Pos) /*!< Bit mask of TDeltaPipe field. */

/* Bits 12..8 : (unit: 0.25us) Timing control of IfsDeltaPlus */
#define RADIO_TIMINGENGINE_MODE_DEPENDENT_TIfsDeltaPlus_Pos (8UL) /*!< Position of TIfsDeltaPlus field. */
#define RADIO_TIMINGENGINE_MODE_DEPENDENT_TIfsDeltaPlus_Msk (0x1FUL << RADIO_TIMINGENGINE_MODE_DEPENDENT_TIfsDeltaPlus_Pos) /*!< Bit mask of TIfsDeltaPlus field. */

/* Bits 7..0 : (unit: 0.25us) Timing control of IfsDelta */
#define RADIO_TIMINGENGINE_MODE_DEPENDENT_TIfsDelta_Pos (0UL) /*!< Position of TIfsDelta field. */
#define RADIO_TIMINGENGINE_MODE_DEPENDENT_TIfsDelta_Msk (0xFFUL << RADIO_TIMINGENGINE_MODE_DEPENDENT_TIfsDelta_Pos) /*!< Bit mask of TIfsDelta field. */

/* Register: RADIO_TIMINGENGINE_GROUP_RX_0 */
/* Description: TODO */

/* Bits 31..24 : (unit: 0.25us) Timing control of PwrupRxLdo[1] */
#define RADIO_TIMINGENGINE_GROUP_RX_0_TPwrupRxLdo_Bit1_Pos (24UL) /*!< Position of TPwrupRxLdo_Bit1 field. */
#define RADIO_TIMINGENGINE_GROUP_RX_0_TPwrupRxLdo_Bit1_Msk (0xFFUL << RADIO_TIMINGENGINE_GROUP_RX_0_TPwrupRxLdo_Bit1_Pos) /*!< Bit mask of TPwrupRxLdo_Bit1 field. */

/* Bits 23..16 : (unit: 0.25us) Timing control of PwrupRxLdo[0] */
#define RADIO_TIMINGENGINE_GROUP_RX_0_TPwrupRxLdo_Bit0_Pos (16UL) /*!< Position of TPwrupRxLdo_Bit0 field. */
#define RADIO_TIMINGENGINE_GROUP_RX_0_TPwrupRxLdo_Bit0_Msk (0xFFUL << RADIO_TIMINGENGINE_GROUP_RX_0_TPwrupRxLdo_Bit0_Pos) /*!< Bit mask of TPwrupRxLdo_Bit0 field. */

/* Bits 15..8 : (unit: 0.25us) Timing control of RstRxLs[1] */
#define RADIO_TIMINGENGINE_GROUP_RX_0_TRstRxLs_Bit1_Pos (8UL) /*!< Position of TRstRxLs_Bit1 field. */
#define RADIO_TIMINGENGINE_GROUP_RX_0_TRstRxLs_Bit1_Msk (0xFFUL << RADIO_TIMINGENGINE_GROUP_RX_0_TRstRxLs_Bit1_Pos) /*!< Bit mask of TRstRxLs_Bit1 field. */

/* Bits 7..0 : (unit: 0.25us) Timing control of RstRxLs[0] */
#define RADIO_TIMINGENGINE_GROUP_RX_0_TRstRxLs_Bit0_Pos (0UL) /*!< Position of TRstRxLs_Bit0 field. */
#define RADIO_TIMINGENGINE_GROUP_RX_0_TRstRxLs_Bit0_Msk (0xFFUL << RADIO_TIMINGENGINE_GROUP_RX_0_TRstRxLs_Bit0_Pos) /*!< Bit mask of TRstRxLs_Bit0 field. */

/* Register: RADIO_TIMINGENGINE_GROUP_RX_1 */
/* Description: TODO */

/* Bits 31..24 : (unit: 0.25us) Timing control of PwrupRxLdo[5] */
#define RADIO_TIMINGENGINE_GROUP_RX_1_TPwrupRxLdo_Bit5_Pos (24UL) /*!< Position of TPwrupRxLdo_Bit5 field. */
#define RADIO_TIMINGENGINE_GROUP_RX_1_TPwrupRxLdo_Bit5_Msk (0xFFUL << RADIO_TIMINGENGINE_GROUP_RX_1_TPwrupRxLdo_Bit5_Pos) /*!< Bit mask of TPwrupRxLdo_Bit5 field. */

/* Bits 23..16 : (unit: 0.25us) Timing control of PwrupRxLdo[4] */
#define RADIO_TIMINGENGINE_GROUP_RX_1_TPwrupRxLdo_Bit4_Pos (16UL) /*!< Position of TPwrupRxLdo_Bit4 field. */
#define RADIO_TIMINGENGINE_GROUP_RX_1_TPwrupRxLdo_Bit4_Msk (0xFFUL << RADIO_TIMINGENGINE_GROUP_RX_1_TPwrupRxLdo_Bit4_Pos) /*!< Bit mask of TPwrupRxLdo_Bit4 field. */

/* Bits 15..8 : (unit: 0.25us) Timing control of PwrupRxLdo[3] */
#define RADIO_TIMINGENGINE_GROUP_RX_1_TPwrupRxLdo_Bit3_Pos (8UL) /*!< Position of TPwrupRxLdo_Bit3 field. */
#define RADIO_TIMINGENGINE_GROUP_RX_1_TPwrupRxLdo_Bit3_Msk (0xFFUL << RADIO_TIMINGENGINE_GROUP_RX_1_TPwrupRxLdo_Bit3_Pos) /*!< Bit mask of TPwrupRxLdo_Bit3 field. */

/* Bits 7..0 : (unit: 0.25us) Timing control of PwrupRxLdo[2] */
#define RADIO_TIMINGENGINE_GROUP_RX_1_TPwrupRxLdo_Bit2_Pos (0UL) /*!< Position of TPwrupRxLdo_Bit2 field. */
#define RADIO_TIMINGENGINE_GROUP_RX_1_TPwrupRxLdo_Bit2_Msk (0xFFUL << RADIO_TIMINGENGINE_GROUP_RX_1_TPwrupRxLdo_Bit2_Pos) /*!< Bit mask of TPwrupRxLdo_Bit2 field. */

/* Register: RADIO_TIMINGENGINE_GROUP_RX_2 */
/* Description: TODO */

/* Bits 31..24 : (unit: 0.25us) Timing control of PwrupRxAaf */
#define RADIO_TIMINGENGINE_GROUP_RX_2_TPwrupRxAaf_Pos (24UL) /*!< Position of TPwrupRxAaf field. */
#define RADIO_TIMINGENGINE_GROUP_RX_2_TPwrupRxAaf_Msk (0xFFUL << RADIO_TIMINGENGINE_GROUP_RX_2_TPwrupRxAaf_Pos) /*!< Bit mask of TPwrupRxAaf field. */

/* Bits 23..16 : (unit: 0.25us) Timing control of PwrupRx */
#define RADIO_TIMINGENGINE_GROUP_RX_2_TPwrupRx_Pos (16UL) /*!< Position of TPwrupRx field. */
#define RADIO_TIMINGENGINE_GROUP_RX_2_TPwrupRx_Msk (0xFFUL << RADIO_TIMINGENGINE_GROUP_RX_2_TPwrupRx_Pos) /*!< Bit mask of TPwrupRx field. */

/* Bits 15..8 : (unit: 0.25us) Timing control of PwrupRxMix */
#define RADIO_TIMINGENGINE_GROUP_RX_2_TPwrupRxMix_Pos (8UL) /*!< Position of TPwrupRxMix field. */
#define RADIO_TIMINGENGINE_GROUP_RX_2_TPwrupRxMix_Msk (0xFFUL << RADIO_TIMINGENGINE_GROUP_RX_2_TPwrupRxMix_Pos) /*!< Bit mask of TPwrupRxMix field. */

/* Bits 7..0 : (unit: 0.25us) Timing control of PwrupRxLna */
#define RADIO_TIMINGENGINE_GROUP_RX_2_TPwrupRxLna_Pos (0UL) /*!< Position of TPwrupRxLna field. */
#define RADIO_TIMINGENGINE_GROUP_RX_2_TPwrupRxLna_Msk (0xFFUL << RADIO_TIMINGENGINE_GROUP_RX_2_TPwrupRxLna_Pos) /*!< Bit mask of TPwrupRxLna field. */

/* Register: RADIO_TIMINGENGINE_GROUP_RX_3 */
/* Description: TODO */

/* Bits 31..24 : (unit: 0.25us) Timing control of PwrupExtLna */
#define RADIO_TIMINGENGINE_GROUP_RX_3_TPwrupExtLna_Pos (24UL) /*!< Position of TPwrupExtLna field. */
#define RADIO_TIMINGENGINE_GROUP_RX_3_TPwrupExtLna_Msk (0xFFUL << RADIO_TIMINGENGINE_GROUP_RX_3_TPwrupExtLna_Pos) /*!< Bit mask of TPwrupExtLna field. */

/* Bits 23..16 : Spare register. Power up peak detector is now tied with power up mixer. */
#define RADIO_TIMINGENGINE_GROUP_RX_3_TPwrupRxPkd_Pos (16UL) /*!< Position of TPwrupRxPkd field. */
#define RADIO_TIMINGENGINE_GROUP_RX_3_TPwrupRxPkd_Msk (0xFFUL << RADIO_TIMINGENGINE_GROUP_RX_3_TPwrupRxPkd_Pos) /*!< Bit mask of TPwrupRxPkd field. */

/* Bits 15..8 : (unit: 0.25us) Timing control of PwrupRxSar[1] */
#define RADIO_TIMINGENGINE_GROUP_RX_3_TPwrupRxSar_Bit1_Pos (8UL) /*!< Position of TPwrupRxSar_Bit1 field. */
#define RADIO_TIMINGENGINE_GROUP_RX_3_TPwrupRxSar_Bit1_Msk (0xFFUL << RADIO_TIMINGENGINE_GROUP_RX_3_TPwrupRxSar_Bit1_Pos) /*!< Bit mask of TPwrupRxSar_Bit1 field. */

/* Bits 7..0 : (unit: 0.25us) Timing control of PwrupRxSar[0] */
#define RADIO_TIMINGENGINE_GROUP_RX_3_TPwrupRxSar_Bit0_Pos (0UL) /*!< Position of TPwrupRxSar_Bit0 field. */
#define RADIO_TIMINGENGINE_GROUP_RX_3_TPwrupRxSar_Bit0_Msk (0xFFUL << RADIO_TIMINGENGINE_GROUP_RX_3_TPwrupRxSar_Bit0_Pos) /*!< Bit mask of TPwrupRxSar_Bit0 field. */

/* Register: RADIO_TIMINGENGINE_GROUP_RX_4 */
/* Description: TODO */

/* Bits 31..24 : (unit: 0.25us) Timing control of RxDigEn */
#define RADIO_TIMINGENGINE_GROUP_RX_4_TRxDigEn_Pos (24UL) /*!< Position of TRxDigEn field. */
#define RADIO_TIMINGENGINE_GROUP_RX_4_TRxDigEn_Msk (0xFFUL << RADIO_TIMINGENGINE_GROUP_RX_4_TRxDigEn_Pos) /*!< Bit mask of TRxDigEn field. */

/* Bits 23..16 : (unit: 0.25us) Timing control of RxAgcEn */
#define RADIO_TIMINGENGINE_GROUP_RX_4_TRxAgcEn_Pos (16UL) /*!< Position of TRxAgcEn field. */
#define RADIO_TIMINGENGINE_GROUP_RX_4_TRxAgcEn_Msk (0xFFUL << RADIO_TIMINGENGINE_GROUP_RX_4_TRxAgcEn_Pos) /*!< Bit mask of TRxAgcEn field. */

/* Bits 15..8 : (unit: 0.25us) Timing control of ArstAdcEnd */
#define RADIO_TIMINGENGINE_GROUP_RX_4_TArstAdcEnd_Pos (8UL) /*!< Position of TArstAdcEnd field. */
#define RADIO_TIMINGENGINE_GROUP_RX_4_TArstAdcEnd_Msk (0xFFUL << RADIO_TIMINGENGINE_GROUP_RX_4_TArstAdcEnd_Pos) /*!< Bit mask of TArstAdcEnd field. */

/* Bits 7..0 : (unit: 0.25us) Timing control of ArstAdc */
#define RADIO_TIMINGENGINE_GROUP_RX_4_TArstAdc_Pos (0UL) /*!< Position of TArstAdc field. */
#define RADIO_TIMINGENGINE_GROUP_RX_4_TArstAdc_Msk (0xFFUL << RADIO_TIMINGENGINE_GROUP_RX_4_TArstAdc_Pos) /*!< Bit mask of TArstAdc field. */

/* Register: RADIO_TIMINGENGINE_GROUP_TX_0 */
/* Description: TODO */

/* Bits 31..24 : (unit: 0.25us) Timing control of PwrupTxLdo[3] */
#define RADIO_TIMINGENGINE_GROUP_TX_0_TPwrupTxLdo_Bit3_Pos (24UL) /*!< Position of TPwrupTxLdo_Bit3 field. */
#define RADIO_TIMINGENGINE_GROUP_TX_0_TPwrupTxLdo_Bit3_Msk (0xFFUL << RADIO_TIMINGENGINE_GROUP_TX_0_TPwrupTxLdo_Bit3_Pos) /*!< Bit mask of TPwrupTxLdo_Bit3 field. */

/* Bits 23..16 : (unit: 0.25us) Timing control of PwrupTxLdo[2] */
#define RADIO_TIMINGENGINE_GROUP_TX_0_TPwrupTxLdo_Bit2_Pos (16UL) /*!< Position of TPwrupTxLdo_Bit2 field. */
#define RADIO_TIMINGENGINE_GROUP_TX_0_TPwrupTxLdo_Bit2_Msk (0xFFUL << RADIO_TIMINGENGINE_GROUP_TX_0_TPwrupTxLdo_Bit2_Pos) /*!< Bit mask of TPwrupTxLdo_Bit2 field. */

/* Bits 15..8 : (unit: 0.25us) Timing control of PwrupTxLdo[1] */
#define RADIO_TIMINGENGINE_GROUP_TX_0_TPwrupTxLdo_Bit1_Pos (8UL) /*!< Position of TPwrupTxLdo_Bit1 field. */
#define RADIO_TIMINGENGINE_GROUP_TX_0_TPwrupTxLdo_Bit1_Msk (0xFFUL << RADIO_TIMINGENGINE_GROUP_TX_0_TPwrupTxLdo_Bit1_Pos) /*!< Bit mask of TPwrupTxLdo_Bit1 field. */

/* Bits 7..0 : (unit: 0.25us) Timing control of PwrupTxLdo[0] */
#define RADIO_TIMINGENGINE_GROUP_TX_0_TPwrupTxLdo_Bit0_Pos (0UL) /*!< Position of TPwrupTxLdo_Bit0 field. */
#define RADIO_TIMINGENGINE_GROUP_TX_0_TPwrupTxLdo_Bit0_Msk (0xFFUL << RADIO_TIMINGENGINE_GROUP_TX_0_TPwrupTxLdo_Bit0_Pos) /*!< Bit mask of TPwrupTxLdo_Bit0 field. */

/* Register: RADIO_TIMINGENGINE_GROUP_TX_1 */
/* Description: TODO */

/* Bits 31..24 : (unit: 0.25us) Timing control of PwrupTxPwrCtrl */
#define RADIO_TIMINGENGINE_GROUP_TX_1_TPwrupTxPwrCtrl_Pos (24UL) /*!< Position of TPwrupTxPwrCtrl field. */
#define RADIO_TIMINGENGINE_GROUP_TX_1_TPwrupTxPwrCtrl_Msk (0xFFUL << RADIO_TIMINGENGINE_GROUP_TX_1_TPwrupTxPwrCtrl_Pos) /*!< Bit mask of TPwrupTxPwrCtrl field. */

/* Bits 23..16 : (unit: 0.25us) Timing control of PwrupTx */
#define RADIO_TIMINGENGINE_GROUP_TX_1_TPwrupTx_Pos (16UL) /*!< Position of TPwrupTx field. */
#define RADIO_TIMINGENGINE_GROUP_TX_1_TPwrupTx_Msk (0xFFUL << RADIO_TIMINGENGINE_GROUP_TX_1_TPwrupTx_Pos) /*!< Bit mask of TPwrupTx field. */

/* Bits 15..8 : (unit: 0.25us) Timing control of PwrupTxLdo[5] */
#define RADIO_TIMINGENGINE_GROUP_TX_1_TPwrupTxLdo_Bit5_Pos (8UL) /*!< Position of TPwrupTxLdo_Bit5 field. */
#define RADIO_TIMINGENGINE_GROUP_TX_1_TPwrupTxLdo_Bit5_Msk (0xFFUL << RADIO_TIMINGENGINE_GROUP_TX_1_TPwrupTxLdo_Bit5_Pos) /*!< Bit mask of TPwrupTxLdo_Bit5 field. */

/* Bits 7..0 : (unit: 0.25us) Timing control of PwrupTxLdo[4] */
#define RADIO_TIMINGENGINE_GROUP_TX_1_TPwrupTxLdo_Bit4_Pos (0UL) /*!< Position of TPwrupTxLdo_Bit4 field. */
#define RADIO_TIMINGENGINE_GROUP_TX_1_TPwrupTxLdo_Bit4_Msk (0xFFUL << RADIO_TIMINGENGINE_GROUP_TX_1_TPwrupTxLdo_Bit4_Pos) /*!< Bit mask of TPwrupTxLdo_Bit4 field. */

/* Register: RADIO_TIMINGENGINE_GROUP_TX_2 */
/* Description: TODO */

/* Bits 15..8 : (unit: 0.25us) Timing control of PwrupExtPa */
#define RADIO_TIMINGENGINE_GROUP_TX_2_TPwrupExtPa_Pos (8UL) /*!< Position of TPwrupExtPa field. */
#define RADIO_TIMINGENGINE_GROUP_TX_2_TPwrupExtPa_Msk (0xFFUL << RADIO_TIMINGENGINE_GROUP_TX_2_TPwrupExtPa_Pos) /*!< Bit mask of TPwrupExtPa field. */

/* Bits 7..0 : (unit: 0.25us) Timing control of PwrupTxPa */
#define RADIO_TIMINGENGINE_GROUP_TX_2_TPwrupTxPa_Pos (0UL) /*!< Position of TPwrupTxPa field. */
#define RADIO_TIMINGENGINE_GROUP_TX_2_TPwrupTxPa_Msk (0xFFUL << RADIO_TIMINGENGINE_GROUP_TX_2_TPwrupTxPa_Pos) /*!< Bit mask of TPwrupTxPa field. */

/* Register: RADIO_TIMINGENGINE_CONFIG */
/* Description: TODO */

/* Bit 31 : In legacy timing mode, pwrupExtPa can be powered on before starting to ramp up by setting this registers to 1. */
#define RADIO_TIMINGENGINE_CONFIG_PwrupExtPaBeforeRampUp_Pos (31UL) /*!< Position of PwrupExtPaBeforeRampUp field. */
#define RADIO_TIMINGENGINE_CONFIG_PwrupExtPaBeforeRampUp_Msk (0x1UL << RADIO_TIMINGENGINE_CONFIG_PwrupExtPaBeforeRampUp_Pos) /*!< Bit mask of PwrupExtPaBeforeRampUp field. */

/* Bit 30 : In legacy timing mode, pwrupExtLna can be powered on before starting to ramp up by setting this registers to 1. */
#define RADIO_TIMINGENGINE_CONFIG_PwrupExtLnaBeforeRampUp_Pos (30UL) /*!< Position of PwrupExtLnaBeforeRampUp field. */
#define RADIO_TIMINGENGINE_CONFIG_PwrupExtLnaBeforeRampUp_Msk (0x1UL << RADIO_TIMINGENGINE_CONFIG_PwrupExtLnaBeforeRampUp_Pos) /*!< Bit mask of PwrupExtLnaBeforeRampUp field. */

/* Bits 17..8 : (unit: 0.25us) Additional delay to hold Tx/Rx turnaround */
#define RADIO_TIMINGENGINE_CONFIG_TrxTxTurnAroundHold_Pos (8UL) /*!< Position of TrxTxTurnAroundHold field. */
#define RADIO_TIMINGENGINE_CONFIG_TrxTxTurnAroundHold_Msk (0x3FFUL << RADIO_TIMINGENGINE_CONFIG_TrxTxTurnAroundHold_Pos) /*!< Bit mask of TrxTxTurnAroundHold field. */

/* Bits 7..0 : (unit: 0.25us) Reduced timing for on-the-fly switch on both Rx-&gt;Tx and Tx-&gt;Rx */
#define RADIO_TIMINGENGINE_CONFIG_TReduceTrxSwitch_Pos (0UL) /*!< Position of TReduceTrxSwitch field. */
#define RADIO_TIMINGENGINE_CONFIG_TReduceTrxSwitch_Msk (0xFFUL << RADIO_TIMINGENGINE_CONFIG_TReduceTrxSwitch_Pos) /*!< Bit mask of TReduceTrxSwitch field. */

/* Register: RADIO_TIMINGENGINE_OVR_EN_GROUP_ALL */
/* Description: TODO */

/* Bits 30..28 : Override enable of PwrupRxTxRef */
#define RADIO_TIMINGENGINE_OVR_EN_GROUP_ALL_OvrEnPwrupRxTxRef_Pos (28UL) /*!< Position of OvrEnPwrupRxTxRef field. */
#define RADIO_TIMINGENGINE_OVR_EN_GROUP_ALL_OvrEnPwrupRxTxRef_Msk (0x7UL << RADIO_TIMINGENGINE_OVR_EN_GROUP_ALL_OvrEnPwrupRxTxRef_Pos) /*!< Bit mask of OvrEnPwrupRxTxRef field. */

/* Bit 27 : Override enable of FsStart */
#define RADIO_TIMINGENGINE_OVR_EN_GROUP_ALL_OvrEnFsStart_Pos (27UL) /*!< Position of OvrEnFsStart field. */
#define RADIO_TIMINGENGINE_OVR_EN_GROUP_ALL_OvrEnFsStart_Msk (0x1UL << RADIO_TIMINGENGINE_OVR_EN_GROUP_ALL_OvrEnFsStart_Pos) /*!< Bit mask of OvrEnFsStart field. */

/* Bit 26 : Override enable of ArstFs */
#define RADIO_TIMINGENGINE_OVR_EN_GROUP_ALL_OvrEnArstFs_Pos (26UL) /*!< Position of OvrEnArstFs field. */
#define RADIO_TIMINGENGINE_OVR_EN_GROUP_ALL_OvrEnArstFs_Msk (0x1UL << RADIO_TIMINGENGINE_OVR_EN_GROUP_ALL_OvrEnArstFs_Pos) /*!< Bit mask of OvrEnArstFs field. */

/* Bit 25 : Override enable of PwrupFsDiv2g4Counter */
#define RADIO_TIMINGENGINE_OVR_EN_GROUP_ALL_OvrEnPwrupFsDiv2g4Counter_Pos (25UL) /*!< Position of OvrEnPwrupFsDiv2g4Counter field. */
#define RADIO_TIMINGENGINE_OVR_EN_GROUP_ALL_OvrEnPwrupFsDiv2g4Counter_Msk (0x1UL << RADIO_TIMINGENGINE_OVR_EN_GROUP_ALL_OvrEnPwrupFsDiv2g4Counter_Pos) /*!< Bit mask of OvrEnPwrupFsDiv2g4Counter field. */

/* Bit 24 : Override enable of PwrupFsDiv2 */
#define RADIO_TIMINGENGINE_OVR_EN_GROUP_ALL_OvrEnPwrupFsDiv2_Pos (24UL) /*!< Position of OvrEnPwrupFsDiv2 field. */
#define RADIO_TIMINGENGINE_OVR_EN_GROUP_ALL_OvrEnPwrupFsDiv2_Msk (0x1UL << RADIO_TIMINGENGINE_OVR_EN_GROUP_ALL_OvrEnPwrupFsDiv2_Pos) /*!< Bit mask of OvrEnPwrupFsDiv2 field. */

/* Bit 23 : Override enable of PwrupFsVco */
#define RADIO_TIMINGENGINE_OVR_EN_GROUP_ALL_OvrEnPwrupFsVco_Pos (23UL) /*!< Position of OvrEnPwrupFsVco field. */
#define RADIO_TIMINGENGINE_OVR_EN_GROUP_ALL_OvrEnPwrupFsVco_Msk (0x1UL << RADIO_TIMINGENGINE_OVR_EN_GROUP_ALL_OvrEnPwrupFsVco_Pos) /*!< Bit mask of OvrEnPwrupFsVco field. */

/* Bit 22 : Override enable of PwrupFsTdc */
#define RADIO_TIMINGENGINE_OVR_EN_GROUP_ALL_OvrEnPwrupFsTdc_Pos (22UL) /*!< Position of OvrEnPwrupFsTdc field. */
#define RADIO_TIMINGENGINE_OVR_EN_GROUP_ALL_OvrEnPwrupFsTdc_Msk (0x1UL << RADIO_TIMINGENGINE_OVR_EN_GROUP_ALL_OvrEnPwrupFsTdc_Pos) /*!< Bit mask of OvrEnPwrupFsTdc field. */

/* Bit 21 : Override enable of PwrupFsDtc */
#define RADIO_TIMINGENGINE_OVR_EN_GROUP_ALL_OvrEnPwrupFsDtc_Pos (21UL) /*!< Position of OvrEnPwrupFsDtc field. */
#define RADIO_TIMINGENGINE_OVR_EN_GROUP_ALL_OvrEnPwrupFsDtc_Msk (0x1UL << RADIO_TIMINGENGINE_OVR_EN_GROUP_ALL_OvrEnPwrupFsDtc_Pos) /*!< Bit mask of OvrEnPwrupFsDtc field. */

/* Bits 20..19 : Override enable of PwrupFsLdoTdc */
#define RADIO_TIMINGENGINE_OVR_EN_GROUP_ALL_OvrEnPwrupFsLdoTdc_Pos (19UL) /*!< Position of OvrEnPwrupFsLdoTdc field. */
#define RADIO_TIMINGENGINE_OVR_EN_GROUP_ALL_OvrEnPwrupFsLdoTdc_Msk (0x3UL << RADIO_TIMINGENGINE_OVR_EN_GROUP_ALL_OvrEnPwrupFsLdoTdc_Pos) /*!< Bit mask of OvrEnPwrupFsLdoTdc field. */

/* Bits 18..17 : Override enable of PwrupFsLdoCnt */
#define RADIO_TIMINGENGINE_OVR_EN_GROUP_ALL_OvrEnPwrupFsLdoCnt_Pos (17UL) /*!< Position of OvrEnPwrupFsLdoCnt field. */
#define RADIO_TIMINGENGINE_OVR_EN_GROUP_ALL_OvrEnPwrupFsLdoCnt_Msk (0x3UL << RADIO_TIMINGENGINE_OVR_EN_GROUP_ALL_OvrEnPwrupFsLdoCnt_Pos) /*!< Bit mask of OvrEnPwrupFsLdoCnt field. */

/* Bits 16..15 : Override enable of PwrupFsLdoDiv */
#define RADIO_TIMINGENGINE_OVR_EN_GROUP_ALL_OvrEnPwrupFsLdoDiv_Pos (15UL) /*!< Position of OvrEnPwrupFsLdoDiv field. */
#define RADIO_TIMINGENGINE_OVR_EN_GROUP_ALL_OvrEnPwrupFsLdoDiv_Msk (0x3UL << RADIO_TIMINGENGINE_OVR_EN_GROUP_ALL_OvrEnPwrupFsLdoDiv_Pos) /*!< Bit mask of OvrEnPwrupFsLdoDiv field. */

/* Bits 14..13 : Override enable of PwrupFsLdoDig */
#define RADIO_TIMINGENGINE_OVR_EN_GROUP_ALL_OvrEnPwrupFsLdoDig_Pos (13UL) /*!< Position of OvrEnPwrupFsLdoDig field. */
#define RADIO_TIMINGENGINE_OVR_EN_GROUP_ALL_OvrEnPwrupFsLdoDig_Msk (0x3UL << RADIO_TIMINGENGINE_OVR_EN_GROUP_ALL_OvrEnPwrupFsLdoDig_Pos) /*!< Bit mask of OvrEnPwrupFsLdoDig field. */

/* Bits 12..11 : Override enable of PwrupFsLdoDtc */
#define RADIO_TIMINGENGINE_OVR_EN_GROUP_ALL_OvrEnPwrupFsLdoDtc_Pos (11UL) /*!< Position of OvrEnPwrupFsLdoDtc field. */
#define RADIO_TIMINGENGINE_OVR_EN_GROUP_ALL_OvrEnPwrupFsLdoDtc_Msk (0x3UL << RADIO_TIMINGENGINE_OVR_EN_GROUP_ALL_OvrEnPwrupFsLdoDtc_Pos) /*!< Bit mask of OvrEnPwrupFsLdoDtc field. */

/* Bits 10..9 : Override enable of PwrupFsLdoVco */
#define RADIO_TIMINGENGINE_OVR_EN_GROUP_ALL_OvrEnPwrupFsLdoVco_Pos (9UL) /*!< Position of OvrEnPwrupFsLdoVco field. */
#define RADIO_TIMINGENGINE_OVR_EN_GROUP_ALL_OvrEnPwrupFsLdoVco_Msk (0x3UL << RADIO_TIMINGENGINE_OVR_EN_GROUP_ALL_OvrEnPwrupFsLdoVco_Pos) /*!< Bit mask of OvrEnPwrupFsLdoVco field. */

/* Bits 8..6 : Override enable of RstFsLs */
#define RADIO_TIMINGENGINE_OVR_EN_GROUP_ALL_OvrEnRstFsLs_Pos (6UL) /*!< Position of OvrEnRstFsLs field. */
#define RADIO_TIMINGENGINE_OVR_EN_GROUP_ALL_OvrEnRstFsLs_Msk (0x7UL << RADIO_TIMINGENGINE_OVR_EN_GROUP_ALL_OvrEnRstFsLs_Pos) /*!< Bit mask of OvrEnRstFsLs field. */

/* Bits 5..3 : Override enable of PwrupFsRef */
#define RADIO_TIMINGENGINE_OVR_EN_GROUP_ALL_OvrEnPwrupFsRef_Pos (3UL) /*!< Position of OvrEnPwrupFsRef field. */
#define RADIO_TIMINGENGINE_OVR_EN_GROUP_ALL_OvrEnPwrupFsRef_Msk (0x7UL << RADIO_TIMINGENGINE_OVR_EN_GROUP_ALL_OvrEnPwrupFsRef_Pos) /*!< Bit mask of OvrEnPwrupFsRef field. */

/* Bits 2..1 : Override enable of PwrupRadio */
#define RADIO_TIMINGENGINE_OVR_EN_GROUP_ALL_OvrEnPwrupRadio_Pos (1UL) /*!< Position of OvrEnPwrupRadio field. */
#define RADIO_TIMINGENGINE_OVR_EN_GROUP_ALL_OvrEnPwrupRadio_Msk (0x3UL << RADIO_TIMINGENGINE_OVR_EN_GROUP_ALL_OvrEnPwrupRadio_Pos) /*!< Bit mask of OvrEnPwrupRadio field. */

/* Bit 0 : Override enable of RetainRadio */
#define RADIO_TIMINGENGINE_OVR_EN_GROUP_ALL_OvrEnRetainRadio_Pos (0UL) /*!< Position of OvrEnRetainRadio field. */
#define RADIO_TIMINGENGINE_OVR_EN_GROUP_ALL_OvrEnRetainRadio_Msk (0x1UL << RADIO_TIMINGENGINE_OVR_EN_GROUP_ALL_OvrEnRetainRadio_Pos) /*!< Bit mask of OvrEnRetainRadio field. */

/* Register: RADIO_TIMINGENGINE_OVR_EN_GROUP_RXTX */
/* Description: TODO */

/* Bit 26 : Override enable of PwrupExtPa */
#define RADIO_TIMINGENGINE_OVR_EN_GROUP_RXTX_OvrEnPwrupExtPa_Pos (26UL) /*!< Position of OvrEnPwrupExtPa field. */
#define RADIO_TIMINGENGINE_OVR_EN_GROUP_RXTX_OvrEnPwrupExtPa_Msk (0x1UL << RADIO_TIMINGENGINE_OVR_EN_GROUP_RXTX_OvrEnPwrupExtPa_Pos) /*!< Bit mask of OvrEnPwrupExtPa field. */

/* Bit 25 : Override enable of PwrupExtLna */
#define RADIO_TIMINGENGINE_OVR_EN_GROUP_RXTX_OvrEnPwrupExtLna_Pos (25UL) /*!< Position of OvrEnPwrupExtLna field. */
#define RADIO_TIMINGENGINE_OVR_EN_GROUP_RXTX_OvrEnPwrupExtLna_Msk (0x1UL << RADIO_TIMINGENGINE_OVR_EN_GROUP_RXTX_OvrEnPwrupExtLna_Pos) /*!< Bit mask of OvrEnPwrupExtLna field. */

/* Bit 24 : Override enable of PwrupTxPa */
#define RADIO_TIMINGENGINE_OVR_EN_GROUP_RXTX_OvrEnPwrupTxPa_Pos (24UL) /*!< Position of OvrEnPwrupTxPa field. */
#define RADIO_TIMINGENGINE_OVR_EN_GROUP_RXTX_OvrEnPwrupTxPa_Msk (0x1UL << RADIO_TIMINGENGINE_OVR_EN_GROUP_RXTX_OvrEnPwrupTxPa_Pos) /*!< Bit mask of OvrEnPwrupTxPa field. */

/* Bit 23 : Override enable of PwrupTxPwrCtrl */
#define RADIO_TIMINGENGINE_OVR_EN_GROUP_RXTX_OvrEnPwrupTxPwrCtrl_Pos (23UL) /*!< Position of OvrEnPwrupTxPwrCtrl field. */
#define RADIO_TIMINGENGINE_OVR_EN_GROUP_RXTX_OvrEnPwrupTxPwrCtrl_Msk (0x1UL << RADIO_TIMINGENGINE_OVR_EN_GROUP_RXTX_OvrEnPwrupTxPwrCtrl_Pos) /*!< Bit mask of OvrEnPwrupTxPwrCtrl field. */

/* Bit 22 : Override enable of PwrupTx */
#define RADIO_TIMINGENGINE_OVR_EN_GROUP_RXTX_OvrEnPwrupTx_Pos (22UL) /*!< Position of OvrEnPwrupTx field. */
#define RADIO_TIMINGENGINE_OVR_EN_GROUP_RXTX_OvrEnPwrupTx_Msk (0x1UL << RADIO_TIMINGENGINE_OVR_EN_GROUP_RXTX_OvrEnPwrupTx_Pos) /*!< Bit mask of OvrEnPwrupTx field. */

/* Bits 21..16 : Override enable of PwrupTxLdo */
#define RADIO_TIMINGENGINE_OVR_EN_GROUP_RXTX_OvrEnPwrupTxLdo_Pos (16UL) /*!< Position of OvrEnPwrupTxLdo field. */
#define RADIO_TIMINGENGINE_OVR_EN_GROUP_RXTX_OvrEnPwrupTxLdo_Msk (0x3FUL << RADIO_TIMINGENGINE_OVR_EN_GROUP_RXTX_OvrEnPwrupTxLdo_Pos) /*!< Bit mask of OvrEnPwrupTxLdo field. */

/* Bit 15 : Override enable of ArstAdc */
#define RADIO_TIMINGENGINE_OVR_EN_GROUP_RXTX_OvrEnArstAdc_Pos (15UL) /*!< Position of OvrEnArstAdc field. */
#define RADIO_TIMINGENGINE_OVR_EN_GROUP_RXTX_OvrEnArstAdc_Msk (0x1UL << RADIO_TIMINGENGINE_OVR_EN_GROUP_RXTX_OvrEnArstAdc_Pos) /*!< Bit mask of OvrEnArstAdc field. */

/* Bit 14 : Override enable of PwrupRxPkd */
#define RADIO_TIMINGENGINE_OVR_EN_GROUP_RXTX_OvrEnPwrupRxPkd_Pos (14UL) /*!< Position of OvrEnPwrupRxPkd field. */
#define RADIO_TIMINGENGINE_OVR_EN_GROUP_RXTX_OvrEnPwrupRxPkd_Msk (0x1UL << RADIO_TIMINGENGINE_OVR_EN_GROUP_RXTX_OvrEnPwrupRxPkd_Pos) /*!< Bit mask of OvrEnPwrupRxPkd field. */

/* Bits 13..12 : Override enable of PwrupRxSar */
#define RADIO_TIMINGENGINE_OVR_EN_GROUP_RXTX_OvrEnPwrupRxSar_Pos (12UL) /*!< Position of OvrEnPwrupRxSar field. */
#define RADIO_TIMINGENGINE_OVR_EN_GROUP_RXTX_OvrEnPwrupRxSar_Msk (0x3UL << RADIO_TIMINGENGINE_OVR_EN_GROUP_RXTX_OvrEnPwrupRxSar_Pos) /*!< Bit mask of OvrEnPwrupRxSar field. */

/* Bit 11 : Override enable of PwrupRxAaf */
#define RADIO_TIMINGENGINE_OVR_EN_GROUP_RXTX_OvrEnPwrupRxAaf_Pos (11UL) /*!< Position of OvrEnPwrupRxAaf field. */
#define RADIO_TIMINGENGINE_OVR_EN_GROUP_RXTX_OvrEnPwrupRxAaf_Msk (0x1UL << RADIO_TIMINGENGINE_OVR_EN_GROUP_RXTX_OvrEnPwrupRxAaf_Pos) /*!< Bit mask of OvrEnPwrupRxAaf field. */

/* Bit 10 : Override enable of PwrupRx */
#define RADIO_TIMINGENGINE_OVR_EN_GROUP_RXTX_OvrEnPwrupRx_Pos (10UL) /*!< Position of OvrEnPwrupRx field. */
#define RADIO_TIMINGENGINE_OVR_EN_GROUP_RXTX_OvrEnPwrupRx_Msk (0x1UL << RADIO_TIMINGENGINE_OVR_EN_GROUP_RXTX_OvrEnPwrupRx_Pos) /*!< Bit mask of OvrEnPwrupRx field. */

/* Bit 9 : Override enable of PwrupRxMix */
#define RADIO_TIMINGENGINE_OVR_EN_GROUP_RXTX_OvrEnPwrupRxMix_Pos (9UL) /*!< Position of OvrEnPwrupRxMix field. */
#define RADIO_TIMINGENGINE_OVR_EN_GROUP_RXTX_OvrEnPwrupRxMix_Msk (0x1UL << RADIO_TIMINGENGINE_OVR_EN_GROUP_RXTX_OvrEnPwrupRxMix_Pos) /*!< Bit mask of OvrEnPwrupRxMix field. */

/* Bit 8 : Override enable of PwrupRxLna */
#define RADIO_TIMINGENGINE_OVR_EN_GROUP_RXTX_OvrEnPwrupRxLna_Pos (8UL) /*!< Position of OvrEnPwrupRxLna field. */
#define RADIO_TIMINGENGINE_OVR_EN_GROUP_RXTX_OvrEnPwrupRxLna_Msk (0x1UL << RADIO_TIMINGENGINE_OVR_EN_GROUP_RXTX_OvrEnPwrupRxLna_Pos) /*!< Bit mask of OvrEnPwrupRxLna field. */

/* Bits 7..2 : Override enable of PwrupRxLdo */
#define RADIO_TIMINGENGINE_OVR_EN_GROUP_RXTX_OvrEnPwrupRxLdo_Pos (2UL) /*!< Position of OvrEnPwrupRxLdo field. */
#define RADIO_TIMINGENGINE_OVR_EN_GROUP_RXTX_OvrEnPwrupRxLdo_Msk (0x3FUL << RADIO_TIMINGENGINE_OVR_EN_GROUP_RXTX_OvrEnPwrupRxLdo_Pos) /*!< Bit mask of OvrEnPwrupRxLdo field. */

/* Bits 1..0 : Override enable of RstRxLs */
#define RADIO_TIMINGENGINE_OVR_EN_GROUP_RXTX_OvrEnRstRxLs_Pos (0UL) /*!< Position of OvrEnRstRxLs field. */
#define RADIO_TIMINGENGINE_OVR_EN_GROUP_RXTX_OvrEnRstRxLs_Msk (0x3UL << RADIO_TIMINGENGINE_OVR_EN_GROUP_RXTX_OvrEnRstRxLs_Pos) /*!< Bit mask of OvrEnRstRxLs field. */

/* Register: RADIO_TIMINGENGINE_OVR_VAL_GROUP_ALL */
/* Description: TODO */

/* Bits 30..28 : Override value of PwrupRxTxRef */
#define RADIO_TIMINGENGINE_OVR_VAL_GROUP_ALL_OvrValPwrupRxTxRef_Pos (28UL) /*!< Position of OvrValPwrupRxTxRef field. */
#define RADIO_TIMINGENGINE_OVR_VAL_GROUP_ALL_OvrValPwrupRxTxRef_Msk (0x7UL << RADIO_TIMINGENGINE_OVR_VAL_GROUP_ALL_OvrValPwrupRxTxRef_Pos) /*!< Bit mask of OvrValPwrupRxTxRef field. */

/* Bit 27 : Override value of FsStart */
#define RADIO_TIMINGENGINE_OVR_VAL_GROUP_ALL_OvrValFsStart_Pos (27UL) /*!< Position of OvrValFsStart field. */
#define RADIO_TIMINGENGINE_OVR_VAL_GROUP_ALL_OvrValFsStart_Msk (0x1UL << RADIO_TIMINGENGINE_OVR_VAL_GROUP_ALL_OvrValFsStart_Pos) /*!< Bit mask of OvrValFsStart field. */

/* Bit 26 : Override value of ArstFs */
#define RADIO_TIMINGENGINE_OVR_VAL_GROUP_ALL_OvrValArstFs_Pos (26UL) /*!< Position of OvrValArstFs field. */
#define RADIO_TIMINGENGINE_OVR_VAL_GROUP_ALL_OvrValArstFs_Msk (0x1UL << RADIO_TIMINGENGINE_OVR_VAL_GROUP_ALL_OvrValArstFs_Pos) /*!< Bit mask of OvrValArstFs field. */

/* Bit 25 : Override value of PwrupFsDiv2g4Counter */
#define RADIO_TIMINGENGINE_OVR_VAL_GROUP_ALL_OvrValPwrupFsDiv2g4Counter_Pos (25UL) /*!< Position of OvrValPwrupFsDiv2g4Counter field. */
#define RADIO_TIMINGENGINE_OVR_VAL_GROUP_ALL_OvrValPwrupFsDiv2g4Counter_Msk (0x1UL << RADIO_TIMINGENGINE_OVR_VAL_GROUP_ALL_OvrValPwrupFsDiv2g4Counter_Pos) /*!< Bit mask of OvrValPwrupFsDiv2g4Counter field. */

/* Bit 24 : Override value of PwrupFsDiv2 */
#define RADIO_TIMINGENGINE_OVR_VAL_GROUP_ALL_OvrValPwrupFsDiv2_Pos (24UL) /*!< Position of OvrValPwrupFsDiv2 field. */
#define RADIO_TIMINGENGINE_OVR_VAL_GROUP_ALL_OvrValPwrupFsDiv2_Msk (0x1UL << RADIO_TIMINGENGINE_OVR_VAL_GROUP_ALL_OvrValPwrupFsDiv2_Pos) /*!< Bit mask of OvrValPwrupFsDiv2 field. */

/* Bit 23 : Override value of PwrupFsVco */
#define RADIO_TIMINGENGINE_OVR_VAL_GROUP_ALL_OvrValPwrupFsVco_Pos (23UL) /*!< Position of OvrValPwrupFsVco field. */
#define RADIO_TIMINGENGINE_OVR_VAL_GROUP_ALL_OvrValPwrupFsVco_Msk (0x1UL << RADIO_TIMINGENGINE_OVR_VAL_GROUP_ALL_OvrValPwrupFsVco_Pos) /*!< Bit mask of OvrValPwrupFsVco field. */

/* Bit 22 : Override value of PwrupFsTdc */
#define RADIO_TIMINGENGINE_OVR_VAL_GROUP_ALL_OvrValPwrupFsTdc_Pos (22UL) /*!< Position of OvrValPwrupFsTdc field. */
#define RADIO_TIMINGENGINE_OVR_VAL_GROUP_ALL_OvrValPwrupFsTdc_Msk (0x1UL << RADIO_TIMINGENGINE_OVR_VAL_GROUP_ALL_OvrValPwrupFsTdc_Pos) /*!< Bit mask of OvrValPwrupFsTdc field. */

/* Bit 21 : Override value of PwrupFsDtc */
#define RADIO_TIMINGENGINE_OVR_VAL_GROUP_ALL_OvrValPwrupFsDtc_Pos (21UL) /*!< Position of OvrValPwrupFsDtc field. */
#define RADIO_TIMINGENGINE_OVR_VAL_GROUP_ALL_OvrValPwrupFsDtc_Msk (0x1UL << RADIO_TIMINGENGINE_OVR_VAL_GROUP_ALL_OvrValPwrupFsDtc_Pos) /*!< Bit mask of OvrValPwrupFsDtc field. */

/* Bits 20..19 : Override value of PwrupFsLdoTdc */
#define RADIO_TIMINGENGINE_OVR_VAL_GROUP_ALL_OvrValPwrupFsLdoTdc_Pos (19UL) /*!< Position of OvrValPwrupFsLdoTdc field. */
#define RADIO_TIMINGENGINE_OVR_VAL_GROUP_ALL_OvrValPwrupFsLdoTdc_Msk (0x3UL << RADIO_TIMINGENGINE_OVR_VAL_GROUP_ALL_OvrValPwrupFsLdoTdc_Pos) /*!< Bit mask of OvrValPwrupFsLdoTdc field. */

/* Bits 18..17 : Override value of PwrupFsLdoCnt */
#define RADIO_TIMINGENGINE_OVR_VAL_GROUP_ALL_OvrValPwrupFsLdoCnt_Pos (17UL) /*!< Position of OvrValPwrupFsLdoCnt field. */
#define RADIO_TIMINGENGINE_OVR_VAL_GROUP_ALL_OvrValPwrupFsLdoCnt_Msk (0x3UL << RADIO_TIMINGENGINE_OVR_VAL_GROUP_ALL_OvrValPwrupFsLdoCnt_Pos) /*!< Bit mask of OvrValPwrupFsLdoCnt field. */

/* Bits 16..15 : Override value of PwrupFsLdoDiv */
#define RADIO_TIMINGENGINE_OVR_VAL_GROUP_ALL_OvrValPwrupFsLdoDiv_Pos (15UL) /*!< Position of OvrValPwrupFsLdoDiv field. */
#define RADIO_TIMINGENGINE_OVR_VAL_GROUP_ALL_OvrValPwrupFsLdoDiv_Msk (0x3UL << RADIO_TIMINGENGINE_OVR_VAL_GROUP_ALL_OvrValPwrupFsLdoDiv_Pos) /*!< Bit mask of OvrValPwrupFsLdoDiv field. */

/* Bits 14..13 : Override value of PwrupFsLdoDig */
#define RADIO_TIMINGENGINE_OVR_VAL_GROUP_ALL_OvrValPwrupFsLdoDig_Pos (13UL) /*!< Position of OvrValPwrupFsLdoDig field. */
#define RADIO_TIMINGENGINE_OVR_VAL_GROUP_ALL_OvrValPwrupFsLdoDig_Msk (0x3UL << RADIO_TIMINGENGINE_OVR_VAL_GROUP_ALL_OvrValPwrupFsLdoDig_Pos) /*!< Bit mask of OvrValPwrupFsLdoDig field. */

/* Bits 12..11 : Override value of PwrupFsLdoDtc */
#define RADIO_TIMINGENGINE_OVR_VAL_GROUP_ALL_OvrValPwrupFsLdoDtc_Pos (11UL) /*!< Position of OvrValPwrupFsLdoDtc field. */
#define RADIO_TIMINGENGINE_OVR_VAL_GROUP_ALL_OvrValPwrupFsLdoDtc_Msk (0x3UL << RADIO_TIMINGENGINE_OVR_VAL_GROUP_ALL_OvrValPwrupFsLdoDtc_Pos) /*!< Bit mask of OvrValPwrupFsLdoDtc field. */

/* Bits 10..9 : Override value of PwrupFsLdoVco */
#define RADIO_TIMINGENGINE_OVR_VAL_GROUP_ALL_OvrValPwrupFsLdoVco_Pos (9UL) /*!< Position of OvrValPwrupFsLdoVco field. */
#define RADIO_TIMINGENGINE_OVR_VAL_GROUP_ALL_OvrValPwrupFsLdoVco_Msk (0x3UL << RADIO_TIMINGENGINE_OVR_VAL_GROUP_ALL_OvrValPwrupFsLdoVco_Pos) /*!< Bit mask of OvrValPwrupFsLdoVco field. */

/* Bits 8..6 : Override value of RstFsLs */
#define RADIO_TIMINGENGINE_OVR_VAL_GROUP_ALL_OvrValRstFsLs_Pos (6UL) /*!< Position of OvrValRstFsLs field. */
#define RADIO_TIMINGENGINE_OVR_VAL_GROUP_ALL_OvrValRstFsLs_Msk (0x7UL << RADIO_TIMINGENGINE_OVR_VAL_GROUP_ALL_OvrValRstFsLs_Pos) /*!< Bit mask of OvrValRstFsLs field. */

/* Bits 5..3 : Override value of PwrupFsRef */
#define RADIO_TIMINGENGINE_OVR_VAL_GROUP_ALL_OvrValPwrupFsRef_Pos (3UL) /*!< Position of OvrValPwrupFsRef field. */
#define RADIO_TIMINGENGINE_OVR_VAL_GROUP_ALL_OvrValPwrupFsRef_Msk (0x7UL << RADIO_TIMINGENGINE_OVR_VAL_GROUP_ALL_OvrValPwrupFsRef_Pos) /*!< Bit mask of OvrValPwrupFsRef field. */

/* Bits 2..1 : Override value of PwrupRadio */
#define RADIO_TIMINGENGINE_OVR_VAL_GROUP_ALL_OvrValPwrupRadio_Pos (1UL) /*!< Position of OvrValPwrupRadio field. */
#define RADIO_TIMINGENGINE_OVR_VAL_GROUP_ALL_OvrValPwrupRadio_Msk (0x3UL << RADIO_TIMINGENGINE_OVR_VAL_GROUP_ALL_OvrValPwrupRadio_Pos) /*!< Bit mask of OvrValPwrupRadio field. */

/* Bit 0 : Override value of RetainRadio */
#define RADIO_TIMINGENGINE_OVR_VAL_GROUP_ALL_OvrValRetainRadio_Pos (0UL) /*!< Position of OvrValRetainRadio field. */
#define RADIO_TIMINGENGINE_OVR_VAL_GROUP_ALL_OvrValRetainRadio_Msk (0x1UL << RADIO_TIMINGENGINE_OVR_VAL_GROUP_ALL_OvrValRetainRadio_Pos) /*!< Bit mask of OvrValRetainRadio field. */

/* Register: RADIO_TIMINGENGINE_OVR_VAL_GROUP_RXTX */
/* Description: TODO */

/* Bit 26 : Override value of PwrupExtPa */
#define RADIO_TIMINGENGINE_OVR_VAL_GROUP_RXTX_OvrValPwrupExtPa_Pos (26UL) /*!< Position of OvrValPwrupExtPa field. */
#define RADIO_TIMINGENGINE_OVR_VAL_GROUP_RXTX_OvrValPwrupExtPa_Msk (0x1UL << RADIO_TIMINGENGINE_OVR_VAL_GROUP_RXTX_OvrValPwrupExtPa_Pos) /*!< Bit mask of OvrValPwrupExtPa field. */

/* Bit 25 : Override value of PwrupExtLna */
#define RADIO_TIMINGENGINE_OVR_VAL_GROUP_RXTX_OvrValPwrupExtLna_Pos (25UL) /*!< Position of OvrValPwrupExtLna field. */
#define RADIO_TIMINGENGINE_OVR_VAL_GROUP_RXTX_OvrValPwrupExtLna_Msk (0x1UL << RADIO_TIMINGENGINE_OVR_VAL_GROUP_RXTX_OvrValPwrupExtLna_Pos) /*!< Bit mask of OvrValPwrupExtLna field. */

/* Bit 24 : Override value of PwrupTxPa */
#define RADIO_TIMINGENGINE_OVR_VAL_GROUP_RXTX_OvrValPwrupTxPa_Pos (24UL) /*!< Position of OvrValPwrupTxPa field. */
#define RADIO_TIMINGENGINE_OVR_VAL_GROUP_RXTX_OvrValPwrupTxPa_Msk (0x1UL << RADIO_TIMINGENGINE_OVR_VAL_GROUP_RXTX_OvrValPwrupTxPa_Pos) /*!< Bit mask of OvrValPwrupTxPa field. */

/* Bit 23 : Override value of PwrupTxPwrCtrl */
#define RADIO_TIMINGENGINE_OVR_VAL_GROUP_RXTX_OvrValPwrupTxPwrCtrl_Pos (23UL) /*!< Position of OvrValPwrupTxPwrCtrl field. */
#define RADIO_TIMINGENGINE_OVR_VAL_GROUP_RXTX_OvrValPwrupTxPwrCtrl_Msk (0x1UL << RADIO_TIMINGENGINE_OVR_VAL_GROUP_RXTX_OvrValPwrupTxPwrCtrl_Pos) /*!< Bit mask of OvrValPwrupTxPwrCtrl field. */

/* Bit 22 : Override value of PwrupTx */
#define RADIO_TIMINGENGINE_OVR_VAL_GROUP_RXTX_OvrValPwrupTx_Pos (22UL) /*!< Position of OvrValPwrupTx field. */
#define RADIO_TIMINGENGINE_OVR_VAL_GROUP_RXTX_OvrValPwrupTx_Msk (0x1UL << RADIO_TIMINGENGINE_OVR_VAL_GROUP_RXTX_OvrValPwrupTx_Pos) /*!< Bit mask of OvrValPwrupTx field. */

/* Bits 21..16 : Override value of PwrupTxLdo */
#define RADIO_TIMINGENGINE_OVR_VAL_GROUP_RXTX_OvrValPwrupTxLdo_Pos (16UL) /*!< Position of OvrValPwrupTxLdo field. */
#define RADIO_TIMINGENGINE_OVR_VAL_GROUP_RXTX_OvrValPwrupTxLdo_Msk (0x3FUL << RADIO_TIMINGENGINE_OVR_VAL_GROUP_RXTX_OvrValPwrupTxLdo_Pos) /*!< Bit mask of OvrValPwrupTxLdo field. */

/* Bit 15 : Override value of ArstAdc */
#define RADIO_TIMINGENGINE_OVR_VAL_GROUP_RXTX_OvrValArstAdc_Pos (15UL) /*!< Position of OvrValArstAdc field. */
#define RADIO_TIMINGENGINE_OVR_VAL_GROUP_RXTX_OvrValArstAdc_Msk (0x1UL << RADIO_TIMINGENGINE_OVR_VAL_GROUP_RXTX_OvrValArstAdc_Pos) /*!< Bit mask of OvrValArstAdc field. */

/* Bit 14 : Override value of PwrupRxPkd */
#define RADIO_TIMINGENGINE_OVR_VAL_GROUP_RXTX_OvrValPwrupRxPkd_Pos (14UL) /*!< Position of OvrValPwrupRxPkd field. */
#define RADIO_TIMINGENGINE_OVR_VAL_GROUP_RXTX_OvrValPwrupRxPkd_Msk (0x1UL << RADIO_TIMINGENGINE_OVR_VAL_GROUP_RXTX_OvrValPwrupRxPkd_Pos) /*!< Bit mask of OvrValPwrupRxPkd field. */

/* Bits 13..12 : Override value of PwrupRxSar */
#define RADIO_TIMINGENGINE_OVR_VAL_GROUP_RXTX_OvrValPwrupRxSar_Pos (12UL) /*!< Position of OvrValPwrupRxSar field. */
#define RADIO_TIMINGENGINE_OVR_VAL_GROUP_RXTX_OvrValPwrupRxSar_Msk (0x3UL << RADIO_TIMINGENGINE_OVR_VAL_GROUP_RXTX_OvrValPwrupRxSar_Pos) /*!< Bit mask of OvrValPwrupRxSar field. */

/* Bit 11 : Override value of PwrupRxAaf */
#define RADIO_TIMINGENGINE_OVR_VAL_GROUP_RXTX_OvrValPwrupRxAaf_Pos (11UL) /*!< Position of OvrValPwrupRxAaf field. */
#define RADIO_TIMINGENGINE_OVR_VAL_GROUP_RXTX_OvrValPwrupRxAaf_Msk (0x1UL << RADIO_TIMINGENGINE_OVR_VAL_GROUP_RXTX_OvrValPwrupRxAaf_Pos) /*!< Bit mask of OvrValPwrupRxAaf field. */

/* Bit 10 : Override value of PwrupRx */
#define RADIO_TIMINGENGINE_OVR_VAL_GROUP_RXTX_OvrValPwrupRx_Pos (10UL) /*!< Position of OvrValPwrupRx field. */
#define RADIO_TIMINGENGINE_OVR_VAL_GROUP_RXTX_OvrValPwrupRx_Msk (0x1UL << RADIO_TIMINGENGINE_OVR_VAL_GROUP_RXTX_OvrValPwrupRx_Pos) /*!< Bit mask of OvrValPwrupRx field. */

/* Bit 9 : Override value of PwrupRxMix */
#define RADIO_TIMINGENGINE_OVR_VAL_GROUP_RXTX_OvrValPwrupRxMix_Pos (9UL) /*!< Position of OvrValPwrupRxMix field. */
#define RADIO_TIMINGENGINE_OVR_VAL_GROUP_RXTX_OvrValPwrupRxMix_Msk (0x1UL << RADIO_TIMINGENGINE_OVR_VAL_GROUP_RXTX_OvrValPwrupRxMix_Pos) /*!< Bit mask of OvrValPwrupRxMix field. */

/* Bit 8 : Override value of PwrupRxLna */
#define RADIO_TIMINGENGINE_OVR_VAL_GROUP_RXTX_OvrValPwrupRxLna_Pos (8UL) /*!< Position of OvrValPwrupRxLna field. */
#define RADIO_TIMINGENGINE_OVR_VAL_GROUP_RXTX_OvrValPwrupRxLna_Msk (0x1UL << RADIO_TIMINGENGINE_OVR_VAL_GROUP_RXTX_OvrValPwrupRxLna_Pos) /*!< Bit mask of OvrValPwrupRxLna field. */

/* Bits 7..2 : Override value of PwrupRxLdo */
#define RADIO_TIMINGENGINE_OVR_VAL_GROUP_RXTX_OvrValPwrupRxLdo_Pos (2UL) /*!< Position of OvrValPwrupRxLdo field. */
#define RADIO_TIMINGENGINE_OVR_VAL_GROUP_RXTX_OvrValPwrupRxLdo_Msk (0x3FUL << RADIO_TIMINGENGINE_OVR_VAL_GROUP_RXTX_OvrValPwrupRxLdo_Pos) /*!< Bit mask of OvrValPwrupRxLdo field. */

/* Bits 1..0 : Override value of RstRxLs */
#define RADIO_TIMINGENGINE_OVR_VAL_GROUP_RXTX_OvrValRstRxLs_Pos (0UL) /*!< Position of OvrValRstRxLs field. */
#define RADIO_TIMINGENGINE_OVR_VAL_GROUP_RXTX_OvrValRstRxLs_Msk (0x3UL << RADIO_TIMINGENGINE_OVR_VAL_GROUP_RXTX_OvrValRstRxLs_Pos) /*!< Bit mask of OvrValRstRxLs field. */

/* Register: RADIO_TIMINGENGINE_MODE_DEPENDENT_2 */
/* Description: TODO */

/* Bit 8 : Turn off radio w.r.t txDataValid in addition to radioEn */
#define RADIO_TIMINGENGINE_MODE_DEPENDENT_2_TurnOffRadioWrtTxDataValid_Pos (8UL) /*!< Position of TurnOffRadioWrtTxDataValid field. */
#define RADIO_TIMINGENGINE_MODE_DEPENDENT_2_TurnOffRadioWrtTxDataValid_Msk (0x1UL << RADIO_TIMINGENGINE_MODE_DEPENDENT_2_TurnOffRadioWrtTxDataValid_Pos) /*!< Bit mask of TurnOffRadioWrtTxDataValid field. */

/* Bits 4..0 : Additional offset in Rx mode, for Rx to be able to be ready earlier, which is required for 2Mbps. */
#define RADIO_TIMINGENGINE_MODE_DEPENDENT_2_TTxRxTurnAroundDelta_Pos (0UL) /*!< Position of TTxRxTurnAroundDelta field. */
#define RADIO_TIMINGENGINE_MODE_DEPENDENT_2_TTxRxTurnAroundDelta_Msk (0x1FUL << RADIO_TIMINGENGINE_MODE_DEPENDENT_2_TTxRxTurnAroundDelta_Pos) /*!< Bit mask of TTxRxTurnAroundDelta field. */

/* Register: RADIO_RXAGC_GAIN */
/* Description: TODO */

/* Bits 31..28 : gain step for decreasing IF gain */
#define RADIO_RXAGC_GAIN_AgcIFgainStepDown_Pos (28UL) /*!< Position of AgcIFgainStepDown field. */
#define RADIO_RXAGC_GAIN_AgcIFgainStepDown_Msk (0xFUL << RADIO_RXAGC_GAIN_AgcIFgainStepDown_Pos) /*!< Bit mask of AgcIFgainStepDown field. */

/* Bits 27..24 : gain step for increasing IF gain */
#define RADIO_RXAGC_GAIN_AgcIFgainStepUp_Pos (24UL) /*!< Position of AgcIFgainStepUp field. */
#define RADIO_RXAGC_GAIN_AgcIFgainStepUp_Msk (0xFUL << RADIO_RXAGC_GAIN_AgcIFgainStepUp_Pos) /*!< Bit mask of AgcIFgainStepUp field. */

/* Bits 23..20 : Minimum gain of IF gain */
#define RADIO_RXAGC_GAIN_AgcIFgainMin_Pos (20UL) /*!< Position of AgcIFgainMin field. */
#define RADIO_RXAGC_GAIN_AgcIFgainMin_Msk (0xFUL << RADIO_RXAGC_GAIN_AgcIFgainMin_Pos) /*!< Bit mask of AgcIFgainMin field. */

/* Bits 19..16 : Maximum gain of IF gain */
#define RADIO_RXAGC_GAIN_AgcIFgainMax_Pos (16UL) /*!< Position of AgcIFgainMax field. */
#define RADIO_RXAGC_GAIN_AgcIFgainMax_Msk (0xFUL << RADIO_RXAGC_GAIN_AgcIFgainMax_Pos) /*!< Bit mask of AgcIFgainMax field. */

/* Bits 15..12 : gain step for decreasing RF gain */
#define RADIO_RXAGC_GAIN_AgcRFgainStepDown_Pos (12UL) /*!< Position of AgcRFgainStepDown field. */
#define RADIO_RXAGC_GAIN_AgcRFgainStepDown_Msk (0xFUL << RADIO_RXAGC_GAIN_AgcRFgainStepDown_Pos) /*!< Bit mask of AgcRFgainStepDown field. */

/* Bits 11..8 : gain step for increasing RF gain */
#define RADIO_RXAGC_GAIN_AgcRFgainStepUp_Pos (8UL) /*!< Position of AgcRFgainStepUp field. */
#define RADIO_RXAGC_GAIN_AgcRFgainStepUp_Msk (0xFUL << RADIO_RXAGC_GAIN_AgcRFgainStepUp_Pos) /*!< Bit mask of AgcRFgainStepUp field. */

/* Bits 7..4 : Minimum gain of RF gain */
#define RADIO_RXAGC_GAIN_AgcRFgainMin_Pos (4UL) /*!< Position of AgcRFgainMin field. */
#define RADIO_RXAGC_GAIN_AgcRFgainMin_Msk (0xFUL << RADIO_RXAGC_GAIN_AgcRFgainMin_Pos) /*!< Bit mask of AgcRFgainMin field. */

/* Bits 3..0 : Maximum gain of RF gain */
#define RADIO_RXAGC_GAIN_AgcRFgainMax_Pos (0UL) /*!< Position of AgcRFgainMax field. */
#define RADIO_RXAGC_GAIN_AgcRFgainMax_Msk (0xFUL << RADIO_RXAGC_GAIN_AgcRFgainMax_Pos) /*!< Bit mask of AgcRFgainMax field. */

/* Register: RADIO_RXAGC_CONFIG */
/* Description: TODO */

/* Bits 30..29 : Enable(1) or disable(0) functional testmode for AGC */
#define RADIO_RXAGC_CONFIG_AgcToggle_Pos (29UL) /*!< Position of AgcToggle field. */
#define RADIO_RXAGC_CONFIG_AgcToggle_Msk (0x3UL << RADIO_RXAGC_CONFIG_AgcToggle_Pos) /*!< Bit mask of AgcToggle field. */

/* Bit 28 : 0: AGC takes control of RC-filter in passive mixer, 1: Control RC-filter in passive mixer from register */
#define RADIO_RXAGC_CONFIG_AgcMixFiltBypassOvrEn_Pos (28UL) /*!< Position of AgcMixFiltBypassOvrEn field. */
#define RADIO_RXAGC_CONFIG_AgcMixFiltBypassOvrEn_Msk (0x1UL << RADIO_RXAGC_CONFIG_AgcMixFiltBypassOvrEn_Pos) /*!< Bit mask of AgcMixFiltBypassOvrEn field. */

/* Bit 27 : 0: Enable RC-filter in passive mixer, 1: Bypass RC-filter in passive mixer */
#define RADIO_RXAGC_CONFIG_AgcMixFiltBypass_Pos (27UL) /*!< Position of AgcMixFiltBypass field. */
#define RADIO_RXAGC_CONFIG_AgcMixFiltBypass_Msk (0x1UL << RADIO_RXAGC_CONFIG_AgcMixFiltBypass_Pos) /*!< Bit mask of AgcMixFiltBypass field. */

/* Bit 26 : 0: AGC takes control of all gains, 1: Control all gains (aafGain, mixGain, lnaGain) from registers */
#define RADIO_RXAGC_CONFIG_AgcOverrideGain_Pos (26UL) /*!< Position of AgcOverrideGain field. */
#define RADIO_RXAGC_CONFIG_AgcOverrideGain_Msk (0x1UL << RADIO_RXAGC_CONFIG_AgcOverrideGain_Pos) /*!< Bit mask of AgcOverrideGain field. */

/* Bits 25..23 : Override value for lnaGain */
#define RADIO_RXAGC_CONFIG_AgcLnaOverride_Pos (23UL) /*!< Position of AgcLnaOverride field. */
#define RADIO_RXAGC_CONFIG_AgcLnaOverride_Msk (0x7UL << RADIO_RXAGC_CONFIG_AgcLnaOverride_Pos) /*!< Bit mask of AgcLnaOverride field. */

/* Bits 22..21 : Override value for mixGain */
#define RADIO_RXAGC_CONFIG_AgcMixOverride_Pos (21UL) /*!< Position of AgcMixOverride field. */
#define RADIO_RXAGC_CONFIG_AgcMixOverride_Msk (0x3UL << RADIO_RXAGC_CONFIG_AgcMixOverride_Pos) /*!< Bit mask of AgcMixOverride field. */

/* Bits 20..17 : Override value for aafGain */
#define RADIO_RXAGC_CONFIG_AgcAafOverride_Pos (17UL) /*!< Position of AgcAafOverride field. */
#define RADIO_RXAGC_CONFIG_AgcAafOverride_Msk (0xFUL << RADIO_RXAGC_CONFIG_AgcAafOverride_Pos) /*!< Bit mask of AgcAafOverride field. */

/* Bits 16..11 : The number of clock cycles between each adjustment of the gain while addressMatch is high */
#define RADIO_RXAGC_CONFIG_AgcWaitPacket_Pos (11UL) /*!< Position of AgcWaitPacket field. */
#define RADIO_RXAGC_CONFIG_AgcWaitPacket_Msk (0x3FUL << RADIO_RXAGC_CONFIG_AgcWaitPacket_Pos) /*!< Bit mask of AgcWaitPacket field. */

/* Bits 10..5 : The number of clock cycles between each adjustment of the gain while addressMatch is low */
#define RADIO_RXAGC_CONFIG_AgcWait_Pos (5UL) /*!< Position of AgcWait field. */
#define RADIO_RXAGC_CONFIG_AgcWait_Msk (0x3FUL << RADIO_RXAGC_CONFIG_AgcWait_Pos) /*!< Bit mask of AgcWait field. */

/* Bits 4..1 : The number of clock cycles after the adjustment of gain that the reset signal to the RF peak detector is set high */
#define RADIO_RXAGC_CONFIG_AgcRFpkDetResetCount_Pos (1UL) /*!< Position of AgcRFpkDetResetCount field. */
#define RADIO_RXAGC_CONFIG_AgcRFpkDetResetCount_Msk (0xFUL << RADIO_RXAGC_CONFIG_AgcRFpkDetResetCount_Pos) /*!< Bit mask of AgcRFpkDetResetCount field. */

/* Bit 0 : Causes the RF gain to be decreased and the IF gain to be increased if the overall gain can be maintained */
#define RADIO_RXAGC_CONFIG_AgcEnableGainSwitch_Pos (0UL) /*!< Position of AgcEnableGainSwitch field. */
#define RADIO_RXAGC_CONFIG_AgcEnableGainSwitch_Msk (0x1UL << RADIO_RXAGC_CONFIG_AgcEnableGainSwitch_Pos) /*!< Bit mask of AgcEnableGainSwitch field. */

/* Register: RADIO_RXAGC_RSSI */
/* Description: TODO */

/* Bits 13..7 : 802.15.4 Energy Detect calibration value */
#define RADIO_RXAGC_RSSI_Ed154Cal_Pos (7UL) /*!< Position of Ed154Cal field. */
#define RADIO_RXAGC_RSSI_Ed154Cal_Msk (0x7FUL << RADIO_RXAGC_RSSI_Ed154Cal_Pos) /*!< Bit mask of Ed154Cal field. */

/* Bits 6..0 : RSSI calibration value */
#define RADIO_RXAGC_RSSI_RssiCal_Pos (0UL) /*!< Position of RssiCal field. */
#define RADIO_RXAGC_RSSI_RssiCal_Msk (0x7FUL << RADIO_RXAGC_RSSI_RssiCal_Pos) /*!< Bit mask of RssiCal field. */

/* Register: RADIO_RXAGC_STATUS */
/* Description: TODO */

/* Bit 31 : MIX RC-filter status */
#define RADIO_RXAGC_STATUS_MixFiltBypass_Pos (31UL) /*!< Position of MixFiltBypass field. */
#define RADIO_RXAGC_STATUS_MixFiltBypass_Msk (0x1UL << RADIO_RXAGC_STATUS_MixFiltBypass_Pos) /*!< Bit mask of MixFiltBypass field. */

/* Bits 29..28 : BB peak detector output. Represent state[1:0] in RxAgc */
#define RADIO_RXAGC_STATUS_BbPkDet_Pos (28UL) /*!< Position of BbPkDet field. */
#define RADIO_RXAGC_STATUS_BbPkDet_Msk (0x3UL << RADIO_RXAGC_STATUS_BbPkDet_Pos) /*!< Bit mask of BbPkDet field. */

/* Bits 27..26 : IF peak detector output. Represent state[3:2] in RxAgc */
#define RADIO_RXAGC_STATUS_IfPkDet_Pos (26UL) /*!< Position of IfPkDet field. */
#define RADIO_RXAGC_STATUS_IfPkDet_Msk (0x3UL << RADIO_RXAGC_STATUS_IfPkDet_Pos) /*!< Bit mask of IfPkDet field. */

/* Bits 25..24 : RF peak detector output after sync. Represent state[5:4] in RxAgc */
#define RADIO_RXAGC_STATUS_RfPkDet_Pos (24UL) /*!< Position of RfPkDet field. */
#define RADIO_RXAGC_STATUS_RfPkDet_Msk (0x3UL << RADIO_RXAGC_STATUS_RfPkDet_Pos) /*!< Bit mask of RfPkDet field. */

/* Bits 16..14 : LNA gain status */
#define RADIO_RXAGC_STATUS_LnaGain_Pos (14UL) /*!< Position of LnaGain field. */
#define RADIO_RXAGC_STATUS_LnaGain_Msk (0x7UL << RADIO_RXAGC_STATUS_LnaGain_Pos) /*!< Bit mask of LnaGain field. */

/* Bits 13..12 : MIX gain status */
#define RADIO_RXAGC_STATUS_MixGain_Pos (12UL) /*!< Position of MixGain field. */
#define RADIO_RXAGC_STATUS_MixGain_Msk (0x3UL << RADIO_RXAGC_STATUS_MixGain_Pos) /*!< Bit mask of MixGain field. */

/* Bits 11..8 : AAF gain status */
#define RADIO_RXAGC_STATUS_AafGain_Pos (8UL) /*!< Position of AafGain field. */
#define RADIO_RXAGC_STATUS_AafGain_Msk (0xFUL << RADIO_RXAGC_STATUS_AafGain_Pos) /*!< Bit mask of AafGain field. */

/* Bits 6..0 : Received signal strength indicator */
#define RADIO_RXAGC_STATUS_Rssi_Pos (0UL) /*!< Position of Rssi field. */
#define RADIO_RXAGC_STATUS_Rssi_Msk (0x7FUL << RADIO_RXAGC_STATUS_Rssi_Pos) /*!< Bit mask of Rssi field. */

/* Register: RADIO_RXSATURATIONDETECT */
/* Description: TODO */

/* Bits 3..0 : combination of several PARs in PantherPar */
#define RADIO_RXSATURATIONDETECT_SatDelayCorrection_Pos (0UL) /*!< Position of SatDelayCorrection field. */
#define RADIO_RXSATURATIONDETECT_SatDelayCorrection_Msk (0xFUL << RADIO_RXSATURATIONDETECT_SatDelayCorrection_Pos) /*!< Bit mask of SatDelayCorrection field. */

/* Register: RADIO_RXPEAKDETECTOR_IF */
/* Description: TODO */

/* Bits 29..24 : TODO */
#define RADIO_RXPEAKDETECTOR_IF_DecayStep_Pos (24UL) /*!< Position of DecayStep field. */
#define RADIO_RXPEAKDETECTOR_IF_DecayStep_Msk (0x3FUL << RADIO_RXPEAKDETECTOR_IF_DecayStep_Pos) /*!< Bit mask of DecayStep field. */

/* Bits 23..12 : Low threshold of IF peak detector. This valued is based on the 11-bits ADC of SPHYNX_ANA */
#define RADIO_RXPEAKDETECTOR_IF_LowThres_Pos (12UL) /*!< Position of LowThres field. */
#define RADIO_RXPEAKDETECTOR_IF_LowThres_Msk (0xFFFUL << RADIO_RXPEAKDETECTOR_IF_LowThres_Pos) /*!< Bit mask of LowThres field. */

/* Bits 11..0 : High threshold of IF peak detector. This valued is based on the 11-bits ADC of SPHYNX_ANA */
#define RADIO_RXPEAKDETECTOR_IF_HighThres_Pos (0UL) /*!< Position of HighThres field. */
#define RADIO_RXPEAKDETECTOR_IF_HighThres_Msk (0xFFFUL << RADIO_RXPEAKDETECTOR_IF_HighThres_Pos) /*!< Bit mask of HighThres field. */

/* Register: RADIO_BITCONVERTER */
/* Description: TODO */

/* Bits 23..12 : ADC offset compensation of channel Q. (signed) */
#define RADIO_BITCONVERTER_FinalCalOffset_Q_Pos (12UL) /*!< Position of FinalCalOffset_Q field. */
#define RADIO_BITCONVERTER_FinalCalOffset_Q_Msk (0xFFFUL << RADIO_BITCONVERTER_FinalCalOffset_Q_Pos) /*!< Bit mask of FinalCalOffset_Q field. */

/* Bits 11..0 : ADC offset compensation of channel I. (signed) */
#define RADIO_BITCONVERTER_FinalCalOffset_I_Pos (0UL) /*!< Position of FinalCalOffset_I field. */
#define RADIO_BITCONVERTER_FinalCalOffset_I_Msk (0xFFFUL << RADIO_BITCONVERTER_FinalCalOffset_I_Pos) /*!< Bit mask of FinalCalOffset_I field. */

/* Register: RADIO_DATAACQVIADMA */
/* Description: TODO */

/* Bit 3 : used to be NrfModem port - dmaAhbCtrlTag, selection of DMA in radio. MUX(Panther/UTxRxChain) */
#define RADIO_DATAACQVIADMA_DmaAhbCtrlTag_Pos (3UL) /*!< Position of DmaAhbCtrlTag field. */
#define RADIO_DATAACQVIADMA_DmaAhbCtrlTag_Msk (0x1UL << RADIO_DATAACQVIADMA_DmaAhbCtrlTag_Pos) /*!< Bit mask of DmaAhbCtrlTag field. */

/* Bits 1..0 : Which of 4 existing mode it is running (each mode correspond the a particular set of data to be logged) */
#define RADIO_DATAACQVIADMA_DataCaptureModeSelect_Pos (0UL) /*!< Position of DataCaptureModeSelect field. */
#define RADIO_DATAACQVIADMA_DataCaptureModeSelect_Msk (0x3UL << RADIO_DATAACQVIADMA_DataCaptureModeSelect_Pos) /*!< Bit mask of DataCaptureModeSelect field. */

/* Register: RADIO_DEBUGRADIOPHY */
/* Description: TODO */

/* Bit 5 : 1: short RCCAL_CODE[3:0] to RX_AAF_RCTRIMM[3:0] */
#define RADIO_DEBUGRADIOPHY_ShortRcCalCodeToAafRcTrim_Pos (5UL) /*!< Position of ShortRcCalCodeToAafRcTrim field. */
#define RADIO_DEBUGRADIOPHY_ShortRcCalCodeToAafRcTrim_Msk (0x1UL << RADIO_DEBUGRADIOPHY_ShortRcCalCodeToAafRcTrim_Pos) /*!< Bit mask of ShortRcCalCodeToAafRcTrim field. */

/* Bit 4 : 1: Invert the sign bit of calibration code for DC offset calibration(invert DCCAL[4]). This inverts both channel I and Q. */
#define RADIO_DEBUGRADIOPHY_RfMixInvertSignBit_Pos (4UL) /*!< Position of RfMixInvertSignBit field. */
#define RADIO_DEBUGRADIOPHY_RfMixInvertSignBit_Msk (0x1UL << RADIO_DEBUGRADIOPHY_RfMixInvertSignBit_Pos) /*!< Bit mask of RfMixInvertSignBit field. */

/* Bit 3 : 0: output normal adcBinaryBQ, 1: tie adcBinaryBQ to zero */
#define RADIO_DEBUGRADIOPHY_TieAdcBQToZero_Pos (3UL) /*!< Position of TieAdcBQToZero field. */
#define RADIO_DEBUGRADIOPHY_TieAdcBQToZero_Msk (0x1UL << RADIO_DEBUGRADIOPHY_TieAdcBQToZero_Pos) /*!< Bit mask of TieAdcBQToZero field. */

/* Bit 2 : 0: output normal adcBinaryBI, 1: tie adcBinaryBI to zero */
#define RADIO_DEBUGRADIOPHY_TieAdcBIToZero_Pos (2UL) /*!< Position of TieAdcBIToZero field. */
#define RADIO_DEBUGRADIOPHY_TieAdcBIToZero_Msk (0x1UL << RADIO_DEBUGRADIOPHY_TieAdcBIToZero_Pos) /*!< Bit mask of TieAdcBIToZero field. */

/* Bit 1 : Set to high to buffer TXPOWER so that sub-modules in the MMI will only update next tx power config at TX_EN, RX_EN and LB_EN. Set to low if special test is needed for Tx test. */
#define RADIO_DEBUGRADIOPHY_BufferedTxPwr_Pos (1UL) /*!< Position of BufferedTxPwr field. */
#define RADIO_DEBUGRADIOPHY_BufferedTxPwr_Msk (0x1UL << RADIO_DEBUGRADIOPHY_BufferedTxPwr_Pos) /*!< Bit mask of BufferedTxPwr field. */

/* Bit 0 : 0: readout latched  gain values from RXAGC_STATUS, 1: readout raw gain values from RXAGC_STATUS */
#define RADIO_DEBUGRADIOPHY_ReadRawGainStatus_Pos (0UL) /*!< Position of ReadRawGainStatus field. */
#define RADIO_DEBUGRADIOPHY_ReadRawGainStatus_Msk (0x1UL << RADIO_DEBUGRADIOPHY_ReadRawGainStatus_Pos) /*!< Bit mask of ReadRawGainStatus field. */

/* Register: RADIO_MODECONF */
/* Description: IQCal status */

/* Bit 16 : temporary 4Mbps special case signal for mixer */
#define RADIO_MODECONF_REMOVE_ME_WHEN_4M_IF_EXISTS_Pos (16UL) /*!< Position of REMOVE_ME_WHEN_4M_IF_EXISTS field. */
#define RADIO_MODECONF_REMOVE_ME_WHEN_4M_IF_EXISTS_Msk (0x1UL << RADIO_MODECONF_REMOVE_ME_WHEN_4M_IF_EXISTS_Pos) /*!< Bit mask of REMOVE_ME_WHEN_4M_IF_EXISTS field. */

/* Bits 2..0 : Mode dependent register with saturation delay for different modes */
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
/* Description: Config for Mixer and Scaler */

/* Bits 13..8 : The number of clock cycles to wait before stepping down the internal memory for the scaling. The value 0 means that the decay feature is off. */
#define RADIO_FECONFIG_SCALERDECAY_Pos (8UL) /*!< Position of SCALERDECAY field. */
#define RADIO_FECONFIG_SCALERDECAY_Msk (0x3FUL << RADIO_FECONFIG_SCALERDECAY_Pos) /*!< Bit mask of SCALERDECAY field. */

/* Bit 0 : Disable Q samples to save power */
#define RADIO_FECONFIG_QDISABLE_Pos (0UL) /*!< Position of QDISABLE field. */
#define RADIO_FECONFIG_QDISABLE_Msk (0x1UL << RADIO_FECONFIG_QDISABLE_Pos) /*!< Bit mask of QDISABLE field. */

/* Register: RADIO_IQCALCONF */
/* Description: Gain and phase mismatch calibration control for I and Q */

/* Bit 31 : Run I and Q calibration procedure */
#define RADIO_IQCALCONF_RUN_Pos (31UL) /*!< Position of RUN field. */
#define RADIO_IQCALCONF_RUN_Msk (0x1UL << RADIO_IQCALCONF_RUN_Pos) /*!< Bit mask of RUN field. */
#define RADIO_IQCALCONF_RUN_Stored (0UL) /*!< Using stored values for calPhi and calAmp */
#define RADIO_IQCALCONF_RUN_Calib (1UL) /*!< Running calibration. */

/* Bits 29..28 : IQCal search mode */
#define RADIO_IQCALCONF_MODE_Pos (28UL) /*!< Position of MODE field. */
#define RADIO_IQCALCONF_MODE_Msk (0x3UL << RADIO_IQCALCONF_MODE_Pos) /*!< Bit mask of MODE field. */
#define RADIO_IQCALCONF_MODE_Optimized (0UL) /*!< Optimized search algorithm. */
#define RADIO_IQCALCONF_MODE_Exhaustive (1UL) /*!< Exhaustive search. */
#define RADIO_IQCALCONF_MODE_Cancellation (2UL) /*!< Optimized search with cancellation. */

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

/* Register: RADIO_LOGMAG */
/* Description: IQCal status */

/* Bits 15..8 : Alpha for IIR filter used in logMag calculation */
#define RADIO_LOGMAG_ALPHA_Pos (8UL) /*!< Position of ALPHA field. */
#define RADIO_LOGMAG_ALPHA_Msk (0xFFUL << RADIO_LOGMAG_ALPHA_Pos) /*!< Bit mask of ALPHA field. */

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

/* Register: RADIO_OUTMAIN_CKSEL_DECFIR */
/* Description: Clock select register for the output outMain */

/* Bits 2..0 : Number of times to divide the base clock rate by 2. Exception: highest value gives BYPASS, ie. clock is disabled and data out is assigned directly from data in. */
#define RADIO_OUTMAIN_CKSEL_DECFIR_CKSEL_Pos (0UL) /*!< Position of CKSEL field. */
#define RADIO_OUTMAIN_CKSEL_DECFIR_CKSEL_Msk (0x7UL << RADIO_OUTMAIN_CKSEL_DECFIR_CKSEL_Pos) /*!< Bit mask of CKSEL field. */
#define RADIO_OUTMAIN_CKSEL_DECFIR_CKSEL_ClkSel_32M (0UL) /*!< CKSEL_32M */
#define RADIO_OUTMAIN_CKSEL_DECFIR_CKSEL_ClkSel_16M (1UL) /*!< CKSEL_16M */
#define RADIO_OUTMAIN_CKSEL_DECFIR_CKSEL_ClkSel_8M (2UL) /*!< CKSEL_8M */
#define RADIO_OUTMAIN_CKSEL_DECFIR_CKSEL_ClkSel_4M (3UL) /*!< CKSEL_4M */
#define RADIO_OUTMAIN_CKSEL_DECFIR_CKSEL_ClkSel_2M (4UL) /*!< CKSEL_2M */
#define RADIO_OUTMAIN_CKSEL_DECFIR_CKSEL_ClkSel_1M (5UL) /*!< CKSEL_1M */
#define RADIO_OUTMAIN_CKSEL_DECFIR_CKSEL_ClkSel_500K (6UL) /*!< CKSEL_500K */
#define RADIO_OUTMAIN_CKSEL_DECFIR_CKSEL_ClkSel_Bypass (7UL) /*!< CKSEL_BYPASS */

/* Register: RADIO_DECFIR0_CKSEL */
/* Description: Clock select register for the PUnit decFIR0 of type IP_FIR */

/* Bits 2..0 : Number of times to divide the base clock rate by 2. Exception: highest value gives BYPASS, ie. clock is disabled and data out is assigned directly from data in. */
#define RADIO_DECFIR0_CKSEL_CKSEL_Pos (0UL) /*!< Position of CKSEL field. */
#define RADIO_DECFIR0_CKSEL_CKSEL_Msk (0x7UL << RADIO_DECFIR0_CKSEL_CKSEL_Pos) /*!< Bit mask of CKSEL field. */
#define RADIO_DECFIR0_CKSEL_CKSEL_ClkSel_32M (0UL) /*!< CKSEL_32M */
#define RADIO_DECFIR0_CKSEL_CKSEL_ClkSel_16M (1UL) /*!< CKSEL_16M */
#define RADIO_DECFIR0_CKSEL_CKSEL_ClkSel_8M (2UL) /*!< CKSEL_8M */
#define RADIO_DECFIR0_CKSEL_CKSEL_ClkSel_4M (3UL) /*!< CKSEL_4M */
#define RADIO_DECFIR0_CKSEL_CKSEL_ClkSel_2M (4UL) /*!< CKSEL_2M */
#define RADIO_DECFIR0_CKSEL_CKSEL_ClkSel_1M (5UL) /*!< CKSEL_1M */
#define RADIO_DECFIR0_CKSEL_CKSEL_ClkSel_500k (6UL) /*!< CKSEL_500K */
#define RADIO_DECFIR0_CKSEL_CKSEL_ClkSel_Bypass (7UL) /*!< CKSEL_BYPASS */

/* Register: RADIO_DECFIR0_CONTROL */
/* Description: Control register for the PUnit decFIR0 of type IP_FIR */

/* Bits 1..0 : Tap-select: number of active taps minus 2 */
#define RADIO_DECFIR0_CONTROL_TAPSEL_Pos (0UL) /*!< Position of TAPSEL field. */
#define RADIO_DECFIR0_CONTROL_TAPSEL_Msk (0x3UL << RADIO_DECFIR0_CONTROL_TAPSEL_Pos) /*!< Bit mask of TAPSEL field. */

/* Register: RADIO_DECFIR0_COEFFS_0 */
/* Description: Coefficient register 0 for the PUnit decFIR0 of type IP_FIR */

/* Bits 3..0 : Signed filter coefficient 0 */
#define RADIO_DECFIR0_COEFFS_0_COEFFS_0_Pos (0UL) /*!< Position of COEFFS_0 field. */
#define RADIO_DECFIR0_COEFFS_0_COEFFS_0_Msk (0xFUL << RADIO_DECFIR0_COEFFS_0_COEFFS_0_Pos) /*!< Bit mask of COEFFS_0 field. */

/* Register: RADIO_DECFIR0_COEFFS_1 */
/* Description: Coefficient register 1 for the PUnit decFIR0 of type IP_FIR */

/* Bits 3..0 : Signed filter coefficient 1 */
#define RADIO_DECFIR0_COEFFS_1_COEFFS_1_Pos (0UL) /*!< Position of COEFFS_1 field. */
#define RADIO_DECFIR0_COEFFS_1_COEFFS_1_Msk (0xFUL << RADIO_DECFIR0_COEFFS_1_COEFFS_1_Pos) /*!< Bit mask of COEFFS_1 field. */

/* Register: RADIO_DECFIR0_COEFFS_2 */
/* Description: Coefficient register 2 for the PUnit decFIR0 of type IP_FIR */

/* Bits 3..0 : Signed filter coefficient 2 */
#define RADIO_DECFIR0_COEFFS_2_COEFFS_2_Pos (0UL) /*!< Position of COEFFS_2 field. */
#define RADIO_DECFIR0_COEFFS_2_COEFFS_2_Msk (0xFUL << RADIO_DECFIR0_COEFFS_2_COEFFS_2_Pos) /*!< Bit mask of COEFFS_2 field. */

/* Register: RADIO_DECFIR0_COEFFS_3 */
/* Description: Coefficient register 3 for the PUnit decFIR0 of type IP_FIR */

/* Bits 3..0 : Signed filter coefficient 3 */
#define RADIO_DECFIR0_COEFFS_3_COEFFS_3_Pos (0UL) /*!< Position of COEFFS_3 field. */
#define RADIO_DECFIR0_COEFFS_3_COEFFS_3_Msk (0xFUL << RADIO_DECFIR0_COEFFS_3_COEFFS_3_Pos) /*!< Bit mask of COEFFS_3 field. */

/* Register: RADIO_DECFIR1_CKSEL */
/* Description: Clock select register for the PUnit decFIR1 of type IP_FIR */

/* Bits 2..0 : Number of times to divide the base clock rate by 2. Exception: highest value gives BYPASS, ie. clock is disabled and data out is assigned directly from data in. */
#define RADIO_DECFIR1_CKSEL_CKSEL_Pos (0UL) /*!< Position of CKSEL field. */
#define RADIO_DECFIR1_CKSEL_CKSEL_Msk (0x7UL << RADIO_DECFIR1_CKSEL_CKSEL_Pos) /*!< Bit mask of CKSEL field. */
#define RADIO_DECFIR1_CKSEL_CKSEL_ClkSel_32M (0UL) /*!< CKSEL_32M */
#define RADIO_DECFIR1_CKSEL_CKSEL_ClkSel_16M (1UL) /*!< CKSEL_16M */
#define RADIO_DECFIR1_CKSEL_CKSEL_ClkSel_8M (2UL) /*!< CKSEL_8M */
#define RADIO_DECFIR1_CKSEL_CKSEL_ClkSel_4M (3UL) /*!< CKSEL_4M */
#define RADIO_DECFIR1_CKSEL_CKSEL_ClkSel_2M (4UL) /*!< CKSEL_2M */
#define RADIO_DECFIR1_CKSEL_CKSEL_ClkSel_1M (5UL) /*!< CKSEL_1M */
#define RADIO_DECFIR1_CKSEL_CKSEL_ClkSel_500K (6UL) /*!< CKSEL_500K */
#define RADIO_DECFIR1_CKSEL_CKSEL_ClkSel_Bypass (7UL) /*!< CKSEL_BYPASS */

/* Register: RADIO_DECFIR1_CONTROL */
/* Description: Control register for the PUnit decFIR1 of type IP_FIR */

/* Bits 2..0 : Tap-select: number of active taps minus 2 */
#define RADIO_DECFIR1_CONTROL_TAPSEL_Pos (0UL) /*!< Position of TAPSEL field. */
#define RADIO_DECFIR1_CONTROL_TAPSEL_Msk (0x7UL << RADIO_DECFIR1_CONTROL_TAPSEL_Pos) /*!< Bit mask of TAPSEL field. */

/* Register: RADIO_DECFIR1_COEFFS_0 */
/* Description: Coefficient register 0 for the PUnit decFIR1 of type IP_FIR */

/* Bits 5..0 : Signed filter coefficient 0 */
#define RADIO_DECFIR1_COEFFS_0_COEFFS_0_Pos (0UL) /*!< Position of COEFFS_0 field. */
#define RADIO_DECFIR1_COEFFS_0_COEFFS_0_Msk (0x3FUL << RADIO_DECFIR1_COEFFS_0_COEFFS_0_Pos) /*!< Bit mask of COEFFS_0 field. */

/* Register: RADIO_DECFIR1_COEFFS_1 */
/* Description: Coefficient register 1 for the PUnit decFIR1 of type IP_FIR */

/* Bits 5..0 : Signed filter coefficient 1 */
#define RADIO_DECFIR1_COEFFS_1_COEFFS_1_Pos (0UL) /*!< Position of COEFFS_1 field. */
#define RADIO_DECFIR1_COEFFS_1_COEFFS_1_Msk (0x3FUL << RADIO_DECFIR1_COEFFS_1_COEFFS_1_Pos) /*!< Bit mask of COEFFS_1 field. */

/* Register: RADIO_DECFIR1_COEFFS_2 */
/* Description: Coefficient register 2 for the PUnit decFIR1 of type IP_FIR */

/* Bits 5..0 : Signed filter coefficient 2 */
#define RADIO_DECFIR1_COEFFS_2_COEFFS_2_Pos (0UL) /*!< Position of COEFFS_2 field. */
#define RADIO_DECFIR1_COEFFS_2_COEFFS_2_Msk (0x3FUL << RADIO_DECFIR1_COEFFS_2_COEFFS_2_Pos) /*!< Bit mask of COEFFS_2 field. */

/* Register: RADIO_DECFIR1_COEFFS_3 */
/* Description: Coefficient register 3 for the PUnit decFIR1 of type IP_FIR */

/* Bits 5..0 : Signed filter coefficient 3 */
#define RADIO_DECFIR1_COEFFS_3_COEFFS_3_Pos (0UL) /*!< Position of COEFFS_3 field. */
#define RADIO_DECFIR1_COEFFS_3_COEFFS_3_Msk (0x3FUL << RADIO_DECFIR1_COEFFS_3_COEFFS_3_Pos) /*!< Bit mask of COEFFS_3 field. */

/* Register: RADIO_DECFIR1_COEFFS_4 */
/* Description: Coefficient register 4 for the PUnit decFIR1 of type IP_FIR */

/* Bits 5..0 : Signed filter coefficient 4 */
#define RADIO_DECFIR1_COEFFS_4_COEFFS_4_Pos (0UL) /*!< Position of COEFFS_4 field. */
#define RADIO_DECFIR1_COEFFS_4_COEFFS_4_Msk (0x3FUL << RADIO_DECFIR1_COEFFS_4_COEFFS_4_Pos) /*!< Bit mask of COEFFS_4 field. */

/* Register: RADIO_DECFIR1_COEFFS_5 */
/* Description: Coefficient register 5 for the PUnit decFIR1 of type IP_FIR */

/* Bits 5..0 : Signed filter coefficient 5 */
#define RADIO_DECFIR1_COEFFS_5_COEFFS_5_Pos (0UL) /*!< Position of COEFFS_5 field. */
#define RADIO_DECFIR1_COEFFS_5_COEFFS_5_Msk (0x3FUL << RADIO_DECFIR1_COEFFS_5_COEFFS_5_Pos) /*!< Bit mask of COEFFS_5 field. */

/* Register: RADIO_DECFIR2_CKSEL */
/* Description: Clock select register for the PUnit decFIR2 of type IP_FIR */

/* Bits 2..0 : Number of times to divide the base clock rate by 2. Exception: highest value gives BYPASS, ie. clock is disabled and data out is assigned directly from data in. */
#define RADIO_DECFIR2_CKSEL_CKSEL_Pos (0UL) /*!< Position of CKSEL field. */
#define RADIO_DECFIR2_CKSEL_CKSEL_Msk (0x7UL << RADIO_DECFIR2_CKSEL_CKSEL_Pos) /*!< Bit mask of CKSEL field. */
#define RADIO_DECFIR2_CKSEL_CKSEL_ClkSel_32M (0UL) /*!< CKSEL_32M */
#define RADIO_DECFIR2_CKSEL_CKSEL_ClkSel_16M (1UL) /*!< CKSEL_16M */
#define RADIO_DECFIR2_CKSEL_CKSEL_ClkSel_8M (2UL) /*!< CKSEL_8M */
#define RADIO_DECFIR2_CKSEL_CKSEL_ClkSel_4M (3UL) /*!< CKSEL_4M */
#define RADIO_DECFIR2_CKSEL_CKSEL_ClkSel_2M (4UL) /*!< CKSEL_2M */
#define RADIO_DECFIR2_CKSEL_CKSEL_ClkSel_1M (5UL) /*!< CKSEL_1M */
#define RADIO_DECFIR2_CKSEL_CKSEL_ClkSel_500K (6UL) /*!< CKSEL_500K */
#define RADIO_DECFIR2_CKSEL_CKSEL_ClkSel_Bypass (7UL) /*!< CKSEL_BYPASS */

/* Register: RADIO_DECFIR2_CONTROL */
/* Description: Control register for the PUnit decFIR2 of type IP_FIR */

/* Bits 2..0 : Tap-select: number of active taps minus 2 */
#define RADIO_DECFIR2_CONTROL_TAPSEL_Pos (0UL) /*!< Position of TAPSEL field. */
#define RADIO_DECFIR2_CONTROL_TAPSEL_Msk (0x7UL << RADIO_DECFIR2_CONTROL_TAPSEL_Pos) /*!< Bit mask of TAPSEL field. */

/* Register: RADIO_DECFIR2_COEFFS_0 */
/* Description: Coefficient register 0 for the PUnit decFIR2 of type IP_FIR */

/* Bits 5..0 : Signed filter coefficient 0 */
#define RADIO_DECFIR2_COEFFS_0_COEFFS_0_Pos (0UL) /*!< Position of COEFFS_0 field. */
#define RADIO_DECFIR2_COEFFS_0_COEFFS_0_Msk (0x3FUL << RADIO_DECFIR2_COEFFS_0_COEFFS_0_Pos) /*!< Bit mask of COEFFS_0 field. */

/* Register: RADIO_DECFIR2_COEFFS_1 */
/* Description: Coefficient register 1 for the PUnit decFIR2 of type IP_FIR */

/* Bits 5..0 : Signed filter coefficient 1 */
#define RADIO_DECFIR2_COEFFS_1_COEFFS_1_Pos (0UL) /*!< Position of COEFFS_1 field. */
#define RADIO_DECFIR2_COEFFS_1_COEFFS_1_Msk (0x3FUL << RADIO_DECFIR2_COEFFS_1_COEFFS_1_Pos) /*!< Bit mask of COEFFS_1 field. */

/* Register: RADIO_DECFIR2_COEFFS_2 */
/* Description: Coefficient register 2 for the PUnit decFIR2 of type IP_FIR */

/* Bits 5..0 : Signed filter coefficient 2 */
#define RADIO_DECFIR2_COEFFS_2_COEFFS_2_Pos (0UL) /*!< Position of COEFFS_2 field. */
#define RADIO_DECFIR2_COEFFS_2_COEFFS_2_Msk (0x3FUL << RADIO_DECFIR2_COEFFS_2_COEFFS_2_Pos) /*!< Bit mask of COEFFS_2 field. */

/* Register: RADIO_DECFIR2_COEFFS_3 */
/* Description: Coefficient register 3 for the PUnit decFIR2 of type IP_FIR */

/* Bits 5..0 : Signed filter coefficient 3 */
#define RADIO_DECFIR2_COEFFS_3_COEFFS_3_Pos (0UL) /*!< Position of COEFFS_3 field. */
#define RADIO_DECFIR2_COEFFS_3_COEFFS_3_Msk (0x3FUL << RADIO_DECFIR2_COEFFS_3_COEFFS_3_Pos) /*!< Bit mask of COEFFS_3 field. */

/* Register: RADIO_DECFIR2_COEFFS_4 */
/* Description: Coefficient register 4 for the PUnit decFIR2 of type IP_FIR */

/* Bits 5..0 : Signed filter coefficient 4 */
#define RADIO_DECFIR2_COEFFS_4_COEFFS_4_Pos (0UL) /*!< Position of COEFFS_4 field. */
#define RADIO_DECFIR2_COEFFS_4_COEFFS_4_Msk (0x3FUL << RADIO_DECFIR2_COEFFS_4_COEFFS_4_Pos) /*!< Bit mask of COEFFS_4 field. */

/* Register: RADIO_DECFIR2_COEFFS_5 */
/* Description: Coefficient register 5 for the PUnit decFIR2 of type IP_FIR */

/* Bits 5..0 : Signed filter coefficient 5 */
#define RADIO_DECFIR2_COEFFS_5_COEFFS_5_Pos (0UL) /*!< Position of COEFFS_5 field. */
#define RADIO_DECFIR2_COEFFS_5_COEFFS_5_Msk (0x3FUL << RADIO_DECFIR2_COEFFS_5_COEFFS_5_Pos) /*!< Bit mask of COEFFS_5 field. */

/* Register: RADIO_OUTMAIN_CKSEL_IIR */
/* Description: Clock select register for the output outMain */

/* Bits 2..0 : Number of times to divide the base clock rate by 2. Exception: highest value gives BYPASS, ie. clock is disabled and data out is assigned directly from data in. */
#define RADIO_OUTMAIN_CKSEL_IIR_CKSEL_Pos (0UL) /*!< Position of CKSEL field. */
#define RADIO_OUTMAIN_CKSEL_IIR_CKSEL_Msk (0x7UL << RADIO_OUTMAIN_CKSEL_IIR_CKSEL_Pos) /*!< Bit mask of CKSEL field. */
#define RADIO_OUTMAIN_CKSEL_IIR_CKSEL_ClkSel_32M (0UL) /*!< CKSEL_32M */
#define RADIO_OUTMAIN_CKSEL_IIR_CKSEL_ClkSel_16M (1UL) /*!< CKSEL_16M */
#define RADIO_OUTMAIN_CKSEL_IIR_CKSEL_ClkSel_8M (2UL) /*!< CKSEL_8M */
#define RADIO_OUTMAIN_CKSEL_IIR_CKSEL_ClkSel_4M (3UL) /*!< CKSEL_4M */
#define RADIO_OUTMAIN_CKSEL_IIR_CKSEL_ClkSel_2M (4UL) /*!< CKSEL_2M */
#define RADIO_OUTMAIN_CKSEL_IIR_CKSEL_ClkSel_1M (5UL) /*!< CKSEL_1M */
#define RADIO_OUTMAIN_CKSEL_IIR_CKSEL_ClkSel_500K (6UL) /*!< CKSEL_500K */
#define RADIO_OUTMAIN_CKSEL_IIR_CKSEL_ClkSel_Bypass (7UL) /*!< CKSEL_BYPASS */

/* Register: RADIO_OUTMAIN_SOURCE */
/* Description: Source select register for the output outMain */

/* Bits 3..0 : Data source select */
#define RADIO_OUTMAIN_SOURCE_SOURCE_Pos (0UL) /*!< Position of SOURCE field. */
#define RADIO_OUTMAIN_SOURCE_SOURCE_Msk (0xFUL << RADIO_OUTMAIN_SOURCE_SOURCE_Pos) /*!< Bit mask of SOURCE field. */
#define RADIO_OUTMAIN_SOURCE_SOURCE_Src_IIR0 (0UL) /*!< SRC_IIR0 (NOT LEGAL) */
#define RADIO_OUTMAIN_SOURCE_SOURCE_Src_IIR1 (1UL) /*!< SRC_IIR1 (NOT LEGAL) */
#define RADIO_OUTMAIN_SOURCE_SOURCE_Src_NotChIIR0 (2UL) /*!< SRC_NOTCHIIR0 (NOT LEGAL) */
#define RADIO_OUTMAIN_SOURCE_SOURCE_Src_NotChIIR1 (3UL) /*!< SRC_NOTCHIIR1 */
#define RADIO_OUTMAIN_SOURCE_SOURCE_Src_DecFIR (4UL) /*!< SRC_DECFIR */
#define RADIO_OUTMAIN_SOURCE_SOURCE_Src_InMain (15UL) /*!< SRC_INMAIN (NOT LEGAL) */

/* Register: RADIO_OUTPEAKDET_CKSEL */
/* Description: Clock select register for the output outPeakDet */

/* Bits 2..0 : Number of times to divide the base clock rate by 2. Exception: highest value gives BYPASS, ie. clock is disabled and data out is assigned directly from data in. */
#define RADIO_OUTPEAKDET_CKSEL_CKSEL_Pos (0UL) /*!< Position of CKSEL field. */
#define RADIO_OUTPEAKDET_CKSEL_CKSEL_Msk (0x7UL << RADIO_OUTPEAKDET_CKSEL_CKSEL_Pos) /*!< Bit mask of CKSEL field. */
#define RADIO_OUTPEAKDET_CKSEL_CKSEL_ClkSel_32M (0UL) /*!< CKSEL_32M */
#define RADIO_OUTPEAKDET_CKSEL_CKSEL_ClkSel_16M (1UL) /*!< CKSEL_16M */
#define RADIO_OUTPEAKDET_CKSEL_CKSEL_ClkSel_8M (2UL) /*!< CKSEL_8M */
#define RADIO_OUTPEAKDET_CKSEL_CKSEL_ClkSel_4M (3UL) /*!< CKSEL_4M */
#define RADIO_OUTPEAKDET_CKSEL_CKSEL_ClkSel_2M (4UL) /*!< CKSEL_2M */
#define RADIO_OUTPEAKDET_CKSEL_CKSEL_ClkSel_1M (5UL) /*!< CKSEL_1M */
#define RADIO_OUTPEAKDET_CKSEL_CKSEL_ClkSel_500K (6UL) /*!< CKSEL_500K */
#define RADIO_OUTPEAKDET_CKSEL_CKSEL_ClkSel_Bypass (7UL) /*!< CKSEL_BYPASS */

/* Register: RADIO_OUTPEAKDET_SOURCE */
/* Description: Source select register for the output outPeakDet */

/* Bits 3..0 : Data source select */
#define RADIO_OUTPEAKDET_SOURCE_SOURCE_Pos (0UL) /*!< Position of SOURCE field. */
#define RADIO_OUTPEAKDET_SOURCE_SOURCE_Msk (0xFUL << RADIO_OUTPEAKDET_SOURCE_SOURCE_Pos) /*!< Bit mask of SOURCE field. */
#define RADIO_OUTPEAKDET_SOURCE_SOURCE_Src_IIR0 (0UL) /*!< SRC_IIR0 (NOT LEGAL) */
#define RADIO_OUTPEAKDET_SOURCE_SOURCE_Src_IIR1 (1UL) /*!< SRC_IIR1 (NOT LEGAL) */
#define RADIO_OUTPEAKDET_SOURCE_SOURCE_Src_NotChIIR0 (2UL) /*!< SRC_NOTCHIIR0 (NOT LEGAL) */
#define RADIO_OUTPEAKDET_SOURCE_SOURCE_Src_NotChIIR1 (3UL) /*!< SRC_NOTCHIIR1 */
#define RADIO_OUTPEAKDET_SOURCE_SOURCE_Src_DecFIR (4UL) /*!< SRC_DECFIR */
#define RADIO_OUTPEAKDET_SOURCE_SOURCE_Src_InMain (15UL) /*!< SRC_INMAIN (NOT LEGAL) */

/* Register: RADIO_IIR0_CKSEL */
/* Description: Clock select register for the PUnit IIR0 of type IP_IIR2 */

/* Bits 2..0 : Number of times to divide the base clock rate by 2. Exception: highest value gives BYPASS, ie. clock is disabled and data out is assigned directly from data in. */
#define RADIO_IIR0_CKSEL_CKSEL_Pos (0UL) /*!< Position of CKSEL field. */
#define RADIO_IIR0_CKSEL_CKSEL_Msk (0x7UL << RADIO_IIR0_CKSEL_CKSEL_Pos) /*!< Bit mask of CKSEL field. */
#define RADIO_IIR0_CKSEL_CKSEL_ClkSel_32M (0UL) /*!< CKSEL_32M */
#define RADIO_IIR0_CKSEL_CKSEL_ClkSel_16M (1UL) /*!< CKSEL_16M */
#define RADIO_IIR0_CKSEL_CKSEL_ClkSel_8M (2UL) /*!< CKSEL_8M */
#define RADIO_IIR0_CKSEL_CKSEL_ClkSel_4M (3UL) /*!< CKSEL_4M */
#define RADIO_IIR0_CKSEL_CKSEL_ClkSel_2M (4UL) /*!< CKSEL_2M */
#define RADIO_IIR0_CKSEL_CKSEL_ClkSel_1M (5UL) /*!< CKSEL_1M */
#define RADIO_IIR0_CKSEL_CKSEL_ClkSel_500K (6UL) /*!< CKSEL_500K */
#define RADIO_IIR0_CKSEL_CKSEL_ClkSel_Bypass (7UL) /*!< CKSEL_BYPASS */

/* Register: RADIO_IIR0_STATUS */
/* Description: Status register for the PUnit IIR0 of type IP_IIR2 */

/* Bits 1..0 : Saturation status for I/Q (bit 0/1) component (bitwise write 1 to clear) */
#define RADIO_IIR0_STATUS_SATURATION_IQ_Pos (0UL) /*!< Position of SATURATION_IQ field. */
#define RADIO_IIR0_STATUS_SATURATION_IQ_Msk (0x3UL << RADIO_IIR0_STATUS_SATURATION_IQ_Pos) /*!< Bit mask of SATURATION_IQ field. */

/* Register: RADIO_IIR0_COEFFS_B0 */
/* Description: Coefficient register B0 for the PUnit IIR0 of type IP_IIR2 */

/* Bits 9..0 : Signed filter coefficient B0 */
#define RADIO_IIR0_COEFFS_B0_COEFFS_B0_Pos (0UL) /*!< Position of COEFFS_B0 field. */
#define RADIO_IIR0_COEFFS_B0_COEFFS_B0_Msk (0x3FFUL << RADIO_IIR0_COEFFS_B0_COEFFS_B0_Pos) /*!< Bit mask of COEFFS_B0 field. */

/* Register: RADIO_IIR0_COEFFS_B1 */
/* Description: Coefficient register B1 for the PUnit IIR0 of type IP_IIR2 */

/* Bits 9..0 : Signed filter coefficient B1 */
#define RADIO_IIR0_COEFFS_B1_COEFFS_B1_Pos (0UL) /*!< Position of COEFFS_B1 field. */
#define RADIO_IIR0_COEFFS_B1_COEFFS_B1_Msk (0x3FFUL << RADIO_IIR0_COEFFS_B1_COEFFS_B1_Pos) /*!< Bit mask of COEFFS_B1 field. */

/* Register: RADIO_IIR0_COEFFS_B2 */
/* Description: Coefficient register B2 for the PUnit IIR0 of type IP_IIR2 */

/* Bits 9..0 : Signed filter coefficient B2 */
#define RADIO_IIR0_COEFFS_B2_COEFFS_B2_Pos (0UL) /*!< Position of COEFFS_B2 field. */
#define RADIO_IIR0_COEFFS_B2_COEFFS_B2_Msk (0x3FFUL << RADIO_IIR0_COEFFS_B2_COEFFS_B2_Pos) /*!< Bit mask of COEFFS_B2 field. */

/* Register: RADIO_IIR0_COEFFS_A1 */
/* Description: Coefficient register A1 for the PUnit IIR0 of type IP_IIR2 */

/* Bits 9..0 : Signed filter coefficient A1 */
#define RADIO_IIR0_COEFFS_A1_COEFFS_A1_Pos (0UL) /*!< Position of COEFFS_A1 field. */
#define RADIO_IIR0_COEFFS_A1_COEFFS_A1_Msk (0x3FFUL << RADIO_IIR0_COEFFS_A1_COEFFS_A1_Pos) /*!< Bit mask of COEFFS_A1 field. */

/* Register: RADIO_IIR0_COEFFS_A2 */
/* Description: Coefficient register A2 for the PUnit IIR0 of type IP_IIR2 */

/* Bits 9..0 : Signed filter coefficient A2 */
#define RADIO_IIR0_COEFFS_A2_COEFFS_A2_Pos (0UL) /*!< Position of COEFFS_A2 field. */
#define RADIO_IIR0_COEFFS_A2_COEFFS_A2_Msk (0x3FFUL << RADIO_IIR0_COEFFS_A2_COEFFS_A2_Pos) /*!< Bit mask of COEFFS_A2 field. */

/* Register: RADIO_IIR1_CKSEL */
/* Description: Clock select register for the PUnit IIR1 of type IP_IIR2 */

/* Bits 2..0 : Number of times to divide the base clock rate by 2. Exception: highest value gives BYPASS, ie. clock is disabled and data out is assigned directly from data in. */
#define RADIO_IIR1_CKSEL_CKSEL_Pos (0UL) /*!< Position of CKSEL field. */
#define RADIO_IIR1_CKSEL_CKSEL_Msk (0x7UL << RADIO_IIR1_CKSEL_CKSEL_Pos) /*!< Bit mask of CKSEL field. */
#define RADIO_IIR1_CKSEL_CKSEL_ClkSel_32M (0UL) /*!< CKSEL_32M */
#define RADIO_IIR1_CKSEL_CKSEL_ClkSel_16M (1UL) /*!< CKSEL_16M */
#define RADIO_IIR1_CKSEL_CKSEL_ClkSel_8M (2UL) /*!< CKSEL_8M */
#define RADIO_IIR1_CKSEL_CKSEL_ClkSel_4M (3UL) /*!< CKSEL_4M */
#define RADIO_IIR1_CKSEL_CKSEL_ClkSel_2M (4UL) /*!< CKSEL_2M */
#define RADIO_IIR1_CKSEL_CKSEL_ClkSel_1M (5UL) /*!< CKSEL_1M */
#define RADIO_IIR1_CKSEL_CKSEL_ClkSel_500K (6UL) /*!< CKSEL_500K */
#define RADIO_IIR1_CKSEL_CKSEL_ClkSel_Bypass (7UL) /*!< CKSEL_BYPASS */

/* Register: RADIO_IIR1_STATUS */
/* Description: Status register for the PUnit IIR1 of type IP_IIR2 */

/* Bits 1..0 : Saturation status for I/Q (bit 0/1) component (bitwise write 1 to clear) */
#define RADIO_IIR1_STATUS_SATURATION_IQ_Pos (0UL) /*!< Position of SATURATION_IQ field. */
#define RADIO_IIR1_STATUS_SATURATION_IQ_Msk (0x3UL << RADIO_IIR1_STATUS_SATURATION_IQ_Pos) /*!< Bit mask of SATURATION_IQ field. */

/* Register: RADIO_IIR1_COEFFS_B0 */
/* Description: Coefficient register B0 for the PUnit IIR1 of type IP_IIR2 */

/* Bits 8..0 : Signed filter coefficient B0 */
#define RADIO_IIR1_COEFFS_B0_COEFFS_B0_Pos (0UL) /*!< Position of COEFFS_B0 field. */
#define RADIO_IIR1_COEFFS_B0_COEFFS_B0_Msk (0x1FFUL << RADIO_IIR1_COEFFS_B0_COEFFS_B0_Pos) /*!< Bit mask of COEFFS_B0 field. */

/* Register: RADIO_IIR1_COEFFS_B1 */
/* Description: Coefficient register B1 for the PUnit IIR1 of type IP_IIR2 */

/* Bits 8..0 : Signed filter coefficient B1 */
#define RADIO_IIR1_COEFFS_B1_COEFFS_B1_Pos (0UL) /*!< Position of COEFFS_B1 field. */
#define RADIO_IIR1_COEFFS_B1_COEFFS_B1_Msk (0x1FFUL << RADIO_IIR1_COEFFS_B1_COEFFS_B1_Pos) /*!< Bit mask of COEFFS_B1 field. */

/* Register: RADIO_IIR1_COEFFS_B2 */
/* Description: Coefficient register B2 for the PUnit IIR1 of type IP_IIR2 */

/* Bits 8..0 : Signed filter coefficient B2 */
#define RADIO_IIR1_COEFFS_B2_COEFFS_B2_Pos (0UL) /*!< Position of COEFFS_B2 field. */
#define RADIO_IIR1_COEFFS_B2_COEFFS_B2_Msk (0x1FFUL << RADIO_IIR1_COEFFS_B2_COEFFS_B2_Pos) /*!< Bit mask of COEFFS_B2 field. */

/* Register: RADIO_IIR1_COEFFS_A1 */
/* Description: Coefficient register A1 for the PUnit IIR1 of type IP_IIR2 */

/* Bits 8..0 : Signed filter coefficient A1 */
#define RADIO_IIR1_COEFFS_A1_COEFFS_A1_Pos (0UL) /*!< Position of COEFFS_A1 field. */
#define RADIO_IIR1_COEFFS_A1_COEFFS_A1_Msk (0x1FFUL << RADIO_IIR1_COEFFS_A1_COEFFS_A1_Pos) /*!< Bit mask of COEFFS_A1 field. */

/* Register: RADIO_IIR1_COEFFS_A2 */
/* Description: Coefficient register A2 for the PUnit IIR1 of type IP_IIR2 */

/* Bits 8..0 : Signed filter coefficient A2 */
#define RADIO_IIR1_COEFFS_A2_COEFFS_A2_Pos (0UL) /*!< Position of COEFFS_A2 field. */
#define RADIO_IIR1_COEFFS_A2_COEFFS_A2_Msk (0x1FFUL << RADIO_IIR1_COEFFS_A2_COEFFS_A2_Pos) /*!< Bit mask of COEFFS_A2 field. */

/* Register: RADIO_NOTCHIIR0_CKSEL */
/* Description: Clock select register for the PUnit notchIIR0 of type IP_IIR2 */

/* Bits 2..0 : Number of times to divide the base clock rate by 2. Exception: highest value gives BYPASS, ie. clock is disabled and data out is assigned directly from data in. */
#define RADIO_NOTCHIIR0_CKSEL_CKSEL_Pos (0UL) /*!< Position of CKSEL field. */
#define RADIO_NOTCHIIR0_CKSEL_CKSEL_Msk (0x7UL << RADIO_NOTCHIIR0_CKSEL_CKSEL_Pos) /*!< Bit mask of CKSEL field. */
#define RADIO_NOTCHIIR0_CKSEL_CKSEL_ClkSel_32M (0UL) /*!< CKSEL_32M */
#define RADIO_NOTCHIIR0_CKSEL_CKSEL_ClkSel_16M (1UL) /*!< CKSEL_16M */
#define RADIO_NOTCHIIR0_CKSEL_CKSEL_ClkSel_8M (2UL) /*!< CKSEL_8M */
#define RADIO_NOTCHIIR0_CKSEL_CKSEL_ClkSel_4M (3UL) /*!< CKSEL_4M */
#define RADIO_NOTCHIIR0_CKSEL_CKSEL_ClkSel_2M (4UL) /*!< CKSEL_2M */
#define RADIO_NOTCHIIR0_CKSEL_CKSEL_ClkSel_1M (5UL) /*!< CKSEL_1M */
#define RADIO_NOTCHIIR0_CKSEL_CKSEL_ClkSel_500K (6UL) /*!< CKSEL_500K */
#define RADIO_NOTCHIIR0_CKSEL_CKSEL_ClkSel_Bypass (7UL) /*!< CKSEL_BYPASS */

/* Register: RADIO_NOTCHIIR0_SOURCE */
/* Description: Source select register for the PUnit notchIIR0 of type IP_IIR2 */

/* Bits 3..0 : Data source select */
#define RADIO_NOTCHIIR0_SOURCE_SOURCE_Pos (0UL) /*!< Position of SOURCE field. */
#define RADIO_NOTCHIIR0_SOURCE_SOURCE_Msk (0xFUL << RADIO_NOTCHIIR0_SOURCE_SOURCE_Pos) /*!< Bit mask of SOURCE field. */
#define RADIO_NOTCHIIR0_SOURCE_SOURCE_Src_IIR0 (0UL) /*!< SRC_IIR0 (NOT LEGAL) */
#define RADIO_NOTCHIIR0_SOURCE_SOURCE_Src_IIR1 (1UL) /*!< SRC_IIR1 (NOT LEGAL) */
#define RADIO_NOTCHIIR0_SOURCE_SOURCE_Src_NotChIIR0 (2UL) /*!< SRC_NOTCHIIR0 (NOT LEGAL) */
#define RADIO_NOTCHIIR0_SOURCE_SOURCE_Src_NotChIIR1 (3UL) /*!< SRC_NOTCHIIR1 */
#define RADIO_NOTCHIIR0_SOURCE_SOURCE_Src_DecFIR (4UL) /*!< SRC_DECFIR */
#define RADIO_NOTCHIIR0_SOURCE_SOURCE_Src_InMain (15UL) /*!< SRC_INMAIN (NOT LEGAL) */

/* Register: RADIO_NOTCHIIR0_STATUS */
/* Description: Status register for the PUnit notchIIR0 of type IP_IIR2 */

/* Bits 1..0 : Saturation status for I/Q (bit 0/1) component (bitwise write 1 to clear) */
#define RADIO_NOTCHIIR0_STATUS_SATURATION_IQ_Pos (0UL) /*!< Position of SATURATION_IQ field. */
#define RADIO_NOTCHIIR0_STATUS_SATURATION_IQ_Msk (0x3UL << RADIO_NOTCHIIR0_STATUS_SATURATION_IQ_Pos) /*!< Bit mask of SATURATION_IQ field. */

/* Register: RADIO_NOTCHIIR0_COEFFS_B0 */
/* Description: Coefficient register B0 for the PUnit notchIIR0 of type IP_IIR2 */

/* Bits 8..0 : Signed filter coefficient B0 */
#define RADIO_NOTCHIIR0_COEFFS_B0_COEFFS_B0_Pos (0UL) /*!< Position of COEFFS_B0 field. */
#define RADIO_NOTCHIIR0_COEFFS_B0_COEFFS_B0_Msk (0x1FFUL << RADIO_NOTCHIIR0_COEFFS_B0_COEFFS_B0_Pos) /*!< Bit mask of COEFFS_B0 field. */

/* Register: RADIO_NOTCHIIR0_COEFFS_B1 */
/* Description: Coefficient register B1 for the PUnit notchIIR0 of type IP_IIR2 */

/* Bits 8..0 : Signed filter coefficient B1 */
#define RADIO_NOTCHIIR0_COEFFS_B1_COEFFS_B1_Pos (0UL) /*!< Position of COEFFS_B1 field. */
#define RADIO_NOTCHIIR0_COEFFS_B1_COEFFS_B1_Msk (0x1FFUL << RADIO_NOTCHIIR0_COEFFS_B1_COEFFS_B1_Pos) /*!< Bit mask of COEFFS_B1 field. */

/* Register: RADIO_NOTCHIIR0_COEFFS_B2 */
/* Description: Coefficient register B2 for the PUnit notchIIR0 of type IP_IIR2 */

/* Bits 8..0 : Signed filter coefficient B2 */
#define RADIO_NOTCHIIR0_COEFFS_B2_COEFFS_B2_Pos (0UL) /*!< Position of COEFFS_B2 field. */
#define RADIO_NOTCHIIR0_COEFFS_B2_COEFFS_B2_Msk (0x1FFUL << RADIO_NOTCHIIR0_COEFFS_B2_COEFFS_B2_Pos) /*!< Bit mask of COEFFS_B2 field. */

/* Register: RADIO_NOTCHIIR0_COEFFS_A1 */
/* Description: Coefficient register A1 for the PUnit notchIIR0 of type IP_IIR2 */

/* Bits 8..0 : Signed filter coefficient A1 */
#define RADIO_NOTCHIIR0_COEFFS_A1_COEFFS_A1_Pos (0UL) /*!< Position of COEFFS_A1 field. */
#define RADIO_NOTCHIIR0_COEFFS_A1_COEFFS_A1_Msk (0x1FFUL << RADIO_NOTCHIIR0_COEFFS_A1_COEFFS_A1_Pos) /*!< Bit mask of COEFFS_A1 field. */

/* Register: RADIO_NOTCHIIR0_COEFFS_A2 */
/* Description: Coefficient register A2 for the PUnit notchIIR0 of type IP_IIR2 */

/* Bits 8..0 : Signed filter coefficient A2 */
#define RADIO_NOTCHIIR0_COEFFS_A2_COEFFS_A2_Pos (0UL) /*!< Position of COEFFS_A2 field. */
#define RADIO_NOTCHIIR0_COEFFS_A2_COEFFS_A2_Msk (0x1FFUL << RADIO_NOTCHIIR0_COEFFS_A2_COEFFS_A2_Pos) /*!< Bit mask of COEFFS_A2 field. */

/* Register: RADIO_NOTCHIIR1_CKSEL */
/* Description: Clock select register for the PUnit notchIIR1 of type IP_IIR2 */

/* Bits 2..0 : Number of times to divide the base clock rate by 2. Exception: highest value gives BYPASS, ie. clock is disabled and data out is assigned directly from data in. */
#define RADIO_NOTCHIIR1_CKSEL_CKSEL_Pos (0UL) /*!< Position of CKSEL field. */
#define RADIO_NOTCHIIR1_CKSEL_CKSEL_Msk (0x7UL << RADIO_NOTCHIIR1_CKSEL_CKSEL_Pos) /*!< Bit mask of CKSEL field. */
#define RADIO_NOTCHIIR1_CKSEL_CKSEL_ClkSel_32M (0UL) /*!< CKSEL_32M */
#define RADIO_NOTCHIIR1_CKSEL_CKSEL_ClkSel_16M (1UL) /*!< CKSEL_16M */
#define RADIO_NOTCHIIR1_CKSEL_CKSEL_ClkSel_8M (2UL) /*!< CKSEL_8M */
#define RADIO_NOTCHIIR1_CKSEL_CKSEL_ClkSel_4M (3UL) /*!< CKSEL_4M */
#define RADIO_NOTCHIIR1_CKSEL_CKSEL_ClkSel_2M (4UL) /*!< CKSEL_2M */
#define RADIO_NOTCHIIR1_CKSEL_CKSEL_ClkSel_1M (5UL) /*!< CKSEL_1M */
#define RADIO_NOTCHIIR1_CKSEL_CKSEL_ClkSel_500K (6UL) /*!< CKSEL_500K */
#define RADIO_NOTCHIIR1_CKSEL_CKSEL_ClkSel_Bypass (7UL) /*!< CKSEL_BYPASS */

/* Register: RADIO_NOTCHIIR1_STATUS */
/* Description: Status register for the PUnit notchIIR1 of type IP_IIR2 */

/* Bits 1..0 : Saturation status for I/Q (bit 0/1) component (bitwise write 1 to clear) */
#define RADIO_NOTCHIIR1_STATUS_SATURATION_IQ_Pos (0UL) /*!< Position of SATURATION_IQ field. */
#define RADIO_NOTCHIIR1_STATUS_SATURATION_IQ_Msk (0x3UL << RADIO_NOTCHIIR1_STATUS_SATURATION_IQ_Pos) /*!< Bit mask of SATURATION_IQ field. */

/* Register: RADIO_NOTCHIIR1_COEFFS_B0 */
/* Description: Coefficient register B0 for the PUnit notchIIR1 of type IP_IIR2 */

/* Bits 7..0 : Signed filter coefficient B0 */
#define RADIO_NOTCHIIR1_COEFFS_B0_COEFFS_B0_Pos (0UL) /*!< Position of COEFFS_B0 field. */
#define RADIO_NOTCHIIR1_COEFFS_B0_COEFFS_B0_Msk (0xFFUL << RADIO_NOTCHIIR1_COEFFS_B0_COEFFS_B0_Pos) /*!< Bit mask of COEFFS_B0 field. */

/* Register: RADIO_NOTCHIIR1_COEFFS_B1 */
/* Description: Coefficient register B1 for the PUnit notchIIR1 of type IP_IIR2 */

/* Bits 7..0 : Signed filter coefficient B1 */
#define RADIO_NOTCHIIR1_COEFFS_B1_COEFFS_B1_Pos (0UL) /*!< Position of COEFFS_B1 field. */
#define RADIO_NOTCHIIR1_COEFFS_B1_COEFFS_B1_Msk (0xFFUL << RADIO_NOTCHIIR1_COEFFS_B1_COEFFS_B1_Pos) /*!< Bit mask of COEFFS_B1 field. */

/* Register: RADIO_NOTCHIIR1_COEFFS_B2 */
/* Description: Coefficient register B2 for the PUnit notchIIR1 of type IP_IIR2 */

/* Bits 7..0 : Signed filter coefficient B2 */
#define RADIO_NOTCHIIR1_COEFFS_B2_COEFFS_B2_Pos (0UL) /*!< Position of COEFFS_B2 field. */
#define RADIO_NOTCHIIR1_COEFFS_B2_COEFFS_B2_Msk (0xFFUL << RADIO_NOTCHIIR1_COEFFS_B2_COEFFS_B2_Pos) /*!< Bit mask of COEFFS_B2 field. */

/* Register: RADIO_NOTCHIIR1_COEFFS_A1 */
/* Description: Coefficient register A1 for the PUnit notchIIR1 of type IP_IIR2 */

/* Bits 7..0 : Signed filter coefficient A1 */
#define RADIO_NOTCHIIR1_COEFFS_A1_COEFFS_A1_Pos (0UL) /*!< Position of COEFFS_A1 field. */
#define RADIO_NOTCHIIR1_COEFFS_A1_COEFFS_A1_Msk (0xFFUL << RADIO_NOTCHIIR1_COEFFS_A1_COEFFS_A1_Pos) /*!< Bit mask of COEFFS_A1 field. */

/* Register: RADIO_NOTCHIIR1_COEFFS_A2 */
/* Description: Coefficient register A2 for the PUnit notchIIR1 of type IP_IIR2 */

/* Bits 7..0 : Signed filter coefficient A2 */
#define RADIO_NOTCHIIR1_COEFFS_A2_COEFFS_A2_Pos (0UL) /*!< Position of COEFFS_A2 field. */
#define RADIO_NOTCHIIR1_COEFFS_A2_COEFFS_A2_Msk (0xFFUL << RADIO_NOTCHIIR1_COEFFS_A2_COEFFS_A2_Pos) /*!< Bit mask of COEFFS_A2 field. */

/* Register: RADIO_DECFIR_CKSEL */
/* Description: Clock select register for the PUnit decFIR of type IP_FIR */

/* Bits 2..0 : Number of times to divide the base clock rate by 2. Exception: highest value gives BYPASS, ie. clock is disabled and data out is assigned directly from data in. */
#define RADIO_DECFIR_CKSEL_CKSEL_Pos (0UL) /*!< Position of CKSEL field. */
#define RADIO_DECFIR_CKSEL_CKSEL_Msk (0x7UL << RADIO_DECFIR_CKSEL_CKSEL_Pos) /*!< Bit mask of CKSEL field. */
#define RADIO_DECFIR_CKSEL_CKSEL_ClkSel_32M (0UL) /*!< CKSEL_32M */
#define RADIO_DECFIR_CKSEL_CKSEL_ClkSel_16M (1UL) /*!< CKSEL_16M */
#define RADIO_DECFIR_CKSEL_CKSEL_ClkSel_8M (2UL) /*!< CKSEL_8M */
#define RADIO_DECFIR_CKSEL_CKSEL_ClkSel_4M (3UL) /*!< CKSEL_4M */
#define RADIO_DECFIR_CKSEL_CKSEL_ClkSel_2M (4UL) /*!< CKSEL_2M */
#define RADIO_DECFIR_CKSEL_CKSEL_ClkSel_1M (5UL) /*!< CKSEL_1M */
#define RADIO_DECFIR_CKSEL_CKSEL_ClkSel_500K (6UL) /*!< CKSEL_500K */
#define RADIO_DECFIR_CKSEL_CKSEL_ClkSel_Bypass (7UL) /*!< CKSEL_BYPASS */

/* Register: RADIO_DECFIR_SOURCE */
/* Description: Source select register for the PUnit decFIR of type IP_FIR */

/* Bits 3..0 : Data source select */
#define RADIO_DECFIR_SOURCE_SOURCE_Pos (0UL) /*!< Position of SOURCE field. */
#define RADIO_DECFIR_SOURCE_SOURCE_Msk (0xFUL << RADIO_DECFIR_SOURCE_SOURCE_Pos) /*!< Bit mask of SOURCE field. */
#define RADIO_DECFIR_SOURCE_SOURCE_Src_IIR0 (0UL) /*!< SRC_IIR0 (NOT LEGAL) */
#define RADIO_DECFIR_SOURCE_SOURCE_Src_IIR1 (1UL) /*!< SRC_IIR1 (NOT LEGAL) */
#define RADIO_DECFIR_SOURCE_SOURCE_Src_NotChIIR0 (2UL) /*!< SRC_NOTCHIIR0 (NOT LEGAL) */
#define RADIO_DECFIR_SOURCE_SOURCE_Src_NotChIIR1 (3UL) /*!< SRC_NOTCHIIR1 */
#define RADIO_DECFIR_SOURCE_SOURCE_Src_DecFIR (4UL) /*!< SRC_DECFIR */
#define RADIO_DECFIR_SOURCE_SOURCE_Src_InMain (15UL) /*!< SRC_INMAIN (NOT LEGAL) */

/* Register: RADIO_DECFIR_CONTROL */
/* Description: Control register for the PUnit decFIR of type IP_FIR */

/* Bits 2..0 : Tap-select: number of active taps minus 2 */
#define RADIO_DECFIR_CONTROL_TAPSEL_Pos (0UL) /*!< Position of TAPSEL field. */
#define RADIO_DECFIR_CONTROL_TAPSEL_Msk (0x7UL << RADIO_DECFIR_CONTROL_TAPSEL_Pos) /*!< Bit mask of TAPSEL field. */

/* Register: RADIO_DECFIR_COEFFS_0 */
/* Description: Coefficient register 0 for the PUnit decFIR of type IP_FIR */

/* Bits 5..0 : Signed filter coefficient 0 */
#define RADIO_DECFIR_COEFFS_0_COEFFS_0_Pos (0UL) /*!< Position of COEFFS_0 field. */
#define RADIO_DECFIR_COEFFS_0_COEFFS_0_Msk (0x3FUL << RADIO_DECFIR_COEFFS_0_COEFFS_0_Pos) /*!< Bit mask of COEFFS_0 field. */

/* Register: RADIO_DECFIR_COEFFS_1 */
/* Description: Coefficient register 1 for the PUnit decFIR of type IP_FIR */

/* Bits 5..0 : Signed filter coefficient 1 */
#define RADIO_DECFIR_COEFFS_1_COEFFS_1_Pos (0UL) /*!< Position of COEFFS_1 field. */
#define RADIO_DECFIR_COEFFS_1_COEFFS_1_Msk (0x3FUL << RADIO_DECFIR_COEFFS_1_COEFFS_1_Pos) /*!< Bit mask of COEFFS_1 field. */

/* Register: RADIO_DECFIR_COEFFS_2 */
/* Description: Coefficient register 2 for the PUnit decFIR of type IP_FIR */

/* Bits 5..0 : Signed filter coefficient 2 */
#define RADIO_DECFIR_COEFFS_2_COEFFS_2_Pos (0UL) /*!< Position of COEFFS_2 field. */
#define RADIO_DECFIR_COEFFS_2_COEFFS_2_Msk (0x3FUL << RADIO_DECFIR_COEFFS_2_COEFFS_2_Pos) /*!< Bit mask of COEFFS_2 field. */

/* Register: RADIO_DECFIR_COEFFS_3 */
/* Description: Coefficient register 3 for the PUnit decFIR of type IP_FIR */

/* Bits 5..0 : Signed filter coefficient 3 */
#define RADIO_DECFIR_COEFFS_3_COEFFS_3_Pos (0UL) /*!< Position of COEFFS_3 field. */
#define RADIO_DECFIR_COEFFS_3_COEFFS_3_Msk (0x3FUL << RADIO_DECFIR_COEFFS_3_COEFFS_3_Pos) /*!< Bit mask of COEFFS_3 field. */

/* Register: RADIO_DECFIR_COEFFS_4 */
/* Description: Coefficient register 4 for the PUnit decFIR of type IP_FIR */

/* Bits 5..0 : Signed filter coefficient 4 */
#define RADIO_DECFIR_COEFFS_4_COEFFS_4_Pos (0UL) /*!< Position of COEFFS_4 field. */
#define RADIO_DECFIR_COEFFS_4_COEFFS_4_Msk (0x3FUL << RADIO_DECFIR_COEFFS_4_COEFFS_4_Pos) /*!< Bit mask of COEFFS_4 field. */

/* Register: RADIO_DECFIR_COEFFS_5 */
/* Description: Coefficient register 5 for the PUnit decFIR of type IP_FIR */

/* Bits 5..0 : Signed filter coefficient 5 */
#define RADIO_DECFIR_COEFFS_5_COEFFS_5_Pos (0UL) /*!< Position of COEFFS_5 field. */
#define RADIO_DECFIR_COEFFS_5_COEFFS_5_Msk (0x3FUL << RADIO_DECFIR_COEFFS_5_COEFFS_5_Pos) /*!< Bit mask of COEFFS_5 field. */

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

/* Register: RADIO_PB_TEST */
/* Description: Test: PB calibration */

/* Bit 31 : if '1' enable override for VBGTRIM */
#define RADIO_PB_TEST_OVRENVBGTRIM_Pos (31UL) /*!< Position of OVRENVBGTRIM field. */
#define RADIO_PB_TEST_OVRENVBGTRIM_Msk (0x1UL << RADIO_PB_TEST_OVRENVBGTRIM_Pos) /*!< Bit mask of OVRENVBGTRIM field. */

/* Bit 30 : if '1' enable override for PBIBPSTRIM */
#define RADIO_PB_TEST_OVRENPBIBPSTRIM_Pos (30UL) /*!< Position of OVRENPBIBPSTRIM field. */
#define RADIO_PB_TEST_OVRENPBIBPSTRIM_Msk (0x1UL << RADIO_PB_TEST_OVRENPBIBPSTRIM_Pos) /*!< Bit mask of OVRENPBIBPSTRIM field. */

/* Bits 11..8 : Trim code for VBG to FS_VCOREG */
#define RADIO_PB_TEST_VBGTRIM_Pos (8UL) /*!< Position of VBGTRIM field. */
#define RADIO_PB_TEST_VBGTRIM_Msk (0xFUL << RADIO_PB_TEST_VBGTRIM_Pos) /*!< Bit mask of VBGTRIM field. */

/* Bits 7..4 : Trim code for IBPS currents */
#define RADIO_PB_TEST_PBIBPSTRIM_Pos (4UL) /*!< Position of PBIBPSTRIM field. */
#define RADIO_PB_TEST_PBIBPSTRIM_Msk (0xFUL << RADIO_PB_TEST_PBIBPSTRIM_Pos) /*!< Bit mask of PBIBPSTRIM field. */

/* Register: RADIO_DBC_COEFFS */
/* Description: Test and Debug: DBC coefficients override */

/* Bit 12 : Zero means coefficients only updated when needed (default), set to 1 coefficients are always updated when the radio is enabled. */
#define RADIO_DBC_COEFFS_OVRALWAYSUPDATE_Pos (12UL) /*!< Position of OVRALWAYSUPDATE field. */
#define RADIO_DBC_COEFFS_OVRALWAYSUPDATE_Msk (0x1UL << RADIO_DBC_COEFFS_OVRALWAYSUPDATE_Pos) /*!< Bit mask of OVRALWAYSUPDATE field. */

/* Bit 11 : paddrUpdateOvrVal */
#define RADIO_DBC_COEFFS_PADDRUPDATEOVRVAL_Pos (11UL) /*!< Position of PADDRUPDATEOVRVAL field. */
#define RADIO_DBC_COEFFS_PADDRUPDATEOVRVAL_Msk (0x1UL << RADIO_DBC_COEFFS_PADDRUPDATEOVRVAL_Pos) /*!< Bit mask of PADDRUPDATEOVRVAL field. */

/* Bit 10 : paddrUpdateOvrEn */
#define RADIO_DBC_COEFFS_PADDRUPDATEOVREN_Pos (10UL) /*!< Position of PADDRUPDATEOVREN field. */
#define RADIO_DBC_COEFFS_PADDRUPDATEOVREN_Msk (0x1UL << RADIO_DBC_COEFFS_PADDRUPDATEOVREN_Pos) /*!< Bit mask of PADDRUPDATEOVREN field. */

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
#define RADIO_QOVERRIDE6_DBCENABLESRC_AlwaysOn (0UL) /*!< Always on when not address match */
#define RADIO_QOVERRIDE6_DBCENABLESRC_BBLogMag (1UL) /*!< When bbLogMag is above a threshold */
#define RADIO_QOVERRIDE6_DBCENABLESRC_BitSlicerSwing (2UL) /*!< When a certain time has gone since the input to the bitslicer was above BITSLICERSWINGTH */
#define RADIO_QOVERRIDE6_DBCENABLESRC_Both (3UL) /*!< Both BBLogMag and BitSlicerSwing */

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

/* Register: RADIO_DRIFT_LR */
/* Description: Drift Controls in Long Range */

/* Bits 29..24 : Override value for driftLowTh, drift estimator (despreadLELLong) */
#define RADIO_DRIFT_LR_DRIFTLOWTH125_Pos (24UL) /*!< Position of DRIFTLOWTH125 field. */
#define RADIO_DRIFT_LR_DRIFTLOWTH125_Msk (0x3FUL << RADIO_DRIFT_LR_DRIFTLOWTH125_Pos) /*!< Bit mask of DRIFTLOWTH125 field. */

/* Bits 16..8 : Override value for driftValidTh, drift estimator (despreadLELLong) */
#define RADIO_DRIFT_LR_DRIFTVALIDTH125_Pos (8UL) /*!< Position of DRIFTVALIDTH125 field. */
#define RADIO_DRIFT_LR_DRIFTVALIDTH125_Msk (0x1FFUL << RADIO_DRIFT_LR_DRIFTVALIDTH125_Pos) /*!< Bit mask of DRIFTVALIDTH125 field. */

/* Bits 7..0 : Override value for IIR feedback , drift estimator (despreadLELLong) */
#define RADIO_DRIFT_LR_DRIFTHALPHA125_Pos (0UL) /*!< Position of DRIFTHALPHA125 field. */
#define RADIO_DRIFT_LR_DRIFTHALPHA125_Msk (0xFFUL << RADIO_DRIFT_LR_DRIFTHALPHA125_Pos) /*!< Bit mask of DRIFTHALPHA125 field. */

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
#define RADIO_QOVERRIDE25_DBCPEAKDETSEL_Classic (0UL) /*!< Use classic peak detector (backward compatible behavior) */
#define RADIO_QOVERRIDE25_DBCPEAKDETSEL_Differential (1UL) /*!< Use differential peak detector */

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

/* Register: RADIO_BITSLICER_STAT */
/* Description: Payload status */

/* Bits 27..16 : Number of received ones */
#define RADIO_BITSLICER_STAT_SUM_MAX_Pos (16UL) /*!< Position of SUM_MAX field. */
#define RADIO_BITSLICER_STAT_SUM_MAX_Msk (0xFFFUL << RADIO_BITSLICER_STAT_SUM_MAX_Pos) /*!< Bit mask of SUM_MAX field. */

/* Bits 11..0 : Number of received zeros */
#define RADIO_BITSLICER_STAT_SUM_MIN_Pos (0UL) /*!< Position of SUM_MIN field. */
#define RADIO_BITSLICER_STAT_SUM_MIN_Msk (0xFFFUL << RADIO_BITSLICER_STAT_SUM_MIN_Pos) /*!< Bit mask of SUM_MIN field. */

/* Register: RADIO_BBCTRL */
/* Description: Miscellaneous mode bits */

/* Bits 10..8 : Modulation index for RxDBCCoeffGen and RxMFB */
#define RADIO_BBCTRL_MODINDEX_Pos (8UL) /*!< Position of MODINDEX field. */
#define RADIO_BBCTRL_MODINDEX_Msk (0x7UL << RADIO_BBCTRL_MODINDEX_Pos) /*!< Bit mask of MODINDEX field. */
#define RADIO_BBCTRL_MODINDEX_ModIndex_0h25 (0UL) /*!< MODINDEX_0H25 */
#define RADIO_BBCTRL_MODINDEX_ModIndex_0h32 (1UL) /*!< MODINDEX_0H32 */
#define RADIO_BBCTRL_MODINDEX_ModIndex_0h5 (2UL) /*!< MODINDEX_0H5 */
#define RADIO_BBCTRL_MODINDEX_ModIndex_1h0 (3UL) /*!< MODINDEX_1H0 */
#define RADIO_BBCTRL_MODINDEX_ModIndex_2h0 (4UL) /*!< MODINDEX_2H0 */
#define RADIO_BBCTRL_MODINDEX_Reserved_5 (5UL) /*!< MODINDEX_RESERVED5 */
#define RADIO_BBCTRL_MODINDEX_Reserved_6 (6UL) /*!< MODINDEX_RESERVED6 */
#define RADIO_BBCTRL_MODINDEX_Reserved_7 (7UL) /*!< MODINDEX_RESERVED7 */

/* Bits 6..4 : Decimation mode in PantherDemodFilt */
#define RADIO_BBCTRL_DEMODFILTMODE_Pos (4UL) /*!< Position of DEMODFILTMODE field. */
#define RADIO_BBCTRL_DEMODFILTMODE_Msk (0x7UL << RADIO_BBCTRL_DEMODFILTMODE_Pos) /*!< Bit mask of DEMODFILTMODE field. */
#define RADIO_BBCTRL_DEMODFILTMODE_Decimation_2M (0UL) /*!< DEMODFILTMODE_2M */
#define RADIO_BBCTRL_DEMODFILTMODE_Decimation_1M (1UL) /*!< DEMODFILTMODE_1M */
#define RADIO_BBCTRL_DEMODFILTMODE_Reserved_2 (2UL) /*!< DEMODFILTMODE_RESERVED2 */
#define RADIO_BBCTRL_DEMODFILTMODE_Decimation_250K (3UL) /*!< DEMODFILTMODE_250K */
#define RADIO_BBCTRL_DEMODFILTMODE_Reserved_4 (4UL) /*!< DEMODFILTMODE_RESERVED4 */
#define RADIO_BBCTRL_DEMODFILTMODE_Reserved_5 (5UL) /*!< DEMODFILTMODE_RESERVED5 */
#define RADIO_BBCTRL_DEMODFILTMODE_Reserved_6 (6UL) /*!< DEMODFILTMODE_RESERVED6 */
#define RADIO_BBCTRL_DEMODFILTMODE_Reserved_7 (7UL) /*!< DEMODFILTMODE_RESERVED7 */

/* Bit 1 : Enable 15.4 mode (enabling both 15.4 and long range is not legal) */
#define RADIO_BBCTRL_IEEE802154_Pos (1UL) /*!< Position of IEEE802154 field. */
#define RADIO_BBCTRL_IEEE802154_Msk (0x1UL << RADIO_BBCTRL_IEEE802154_Pos) /*!< Bit mask of IEEE802154 field. */
#define RADIO_BBCTRL_IEEE802154_Disable (0UL) /*!< IEEE802154_NO */
#define RADIO_BBCTRL_IEEE802154_Enable (1UL) /*!< IEEE802154_YES */

/* Bit 0 : Enable long range mode (enabling both 15.4 and long range is not legal) */
#define RADIO_BBCTRL_BLELONGRANGE_Pos (0UL) /*!< Position of BLELONGRANGE field. */
#define RADIO_BBCTRL_BLELONGRANGE_Msk (0x1UL << RADIO_BBCTRL_BLELONGRANGE_Pos) /*!< Bit mask of BLELONGRANGE field. */
#define RADIO_BBCTRL_BLELONGRANGE_Disable (0UL) /*!< BLELONGRANGE_NO */
#define RADIO_BBCTRL_BLELONGRANGE_Enable (1UL) /*!< BLELONGRANGE_YES */

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
#define RADIO_MFB_BYPASSMAJVOTE_PASS (0UL) /*!< Majority vite */
#define RADIO_MFB_BYPASSMAJVOTE_BYPASS (1UL) /*!< Bypass through majority vote */

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
#define RADIO_BBCKSEL_DIVND4_ClkSel_32M (0UL) /*!< CKSEL_32M */
#define RADIO_BBCKSEL_DIVND4_ClkSel_16M (1UL) /*!< CKSEL_16M */
#define RADIO_BBCKSEL_DIVND4_ClkSel_8M (2UL) /*!< CKSEL_8M */
#define RADIO_BBCKSEL_DIVND4_ClkSel_4M (3UL) /*!< CKSEL_4M */
#define RADIO_BBCKSEL_DIVND4_ClkSel_2M (4UL) /*!< CKSEL_2M */
#define RADIO_BBCKSEL_DIVND4_ClkSel_1M (5UL) /*!< CKSEL_1M */
#define RADIO_BBCKSEL_DIVND4_ClkSel_500K (6UL) /*!< CKSEL_500K */
#define RADIO_BBCKSEL_DIVND4_Disabled (7UL) /*!< CKSEL_OFF */

/* Bits 10..8 : Hyper demod clock rate 1 */
#define RADIO_BBCKSEL_DIVND3_Pos (8UL) /*!< Position of DIVND3 field. */
#define RADIO_BBCKSEL_DIVND3_Msk (0x7UL << RADIO_BBCKSEL_DIVND3_Pos) /*!< Bit mask of DIVND3 field. */
#define RADIO_BBCKSEL_DIVND3_ClkSel_32M (0UL) /*!< CKSEL_32M */
#define RADIO_BBCKSEL_DIVND3_ClkSel_16M (1UL) /*!< CKSEL_16M */
#define RADIO_BBCKSEL_DIVND3_ClkSel_8M (2UL) /*!< CKSEL_8M */
#define RADIO_BBCKSEL_DIVND3_ClkSel_4M (3UL) /*!< CKSEL_4M */
#define RADIO_BBCKSEL_DIVND3_ClkSel_2M (4UL) /*!< CKSEL_2M */
#define RADIO_BBCKSEL_DIVND3_ClkSel_1M (5UL) /*!< CKSEL_1M */
#define RADIO_BBCKSEL_DIVND3_ClkSel_500K (6UL) /*!< CKSEL_500K */
#define RADIO_BBCKSEL_DIVND3_Disabled (7UL) /*!< CKSEL_OFF */

/* Bits 6..4 : Standard demod clock rate 2 */
#define RADIO_BBCKSEL_DIVND2_Pos (4UL) /*!< Position of DIVND2 field. */
#define RADIO_BBCKSEL_DIVND2_Msk (0x7UL << RADIO_BBCKSEL_DIVND2_Pos) /*!< Bit mask of DIVND2 field. */
#define RADIO_BBCKSEL_DIVND2_ClkSel_32M (0UL) /*!< CKSEL_32M */
#define RADIO_BBCKSEL_DIVND2_ClkSel_16M (1UL) /*!< CKSEL_16M */
#define RADIO_BBCKSEL_DIVND2_ClkSel_8M (2UL) /*!< CKSEL_8M */
#define RADIO_BBCKSEL_DIVND2_ClkSel_4M (3UL) /*!< CKSEL_4M */
#define RADIO_BBCKSEL_DIVND2_ClkSel_2M (4UL) /*!< CKSEL_2M */
#define RADIO_BBCKSEL_DIVND2_ClkSel_1M (5UL) /*!< CKSEL_1M */
#define RADIO_BBCKSEL_DIVND2_ClkSel_500K (6UL) /*!< CKSEL_500K */
#define RADIO_BBCKSEL_DIVND2_Disabled (7UL) /*!< CKSEL_OFF */

/* Bits 2..0 : Standard demod clock rate 1 */
#define RADIO_BBCKSEL_DIVND1_Pos (0UL) /*!< Position of DIVND1 field. */
#define RADIO_BBCKSEL_DIVND1_Msk (0x7UL << RADIO_BBCKSEL_DIVND1_Pos) /*!< Bit mask of DIVND1 field. */
#define RADIO_BBCKSEL_DIVND1_ClkSel_32M (0UL) /*!< CKSEL_32M */
#define RADIO_BBCKSEL_DIVND1_ClkSel_16M (1UL) /*!< CKSEL_16M */
#define RADIO_BBCKSEL_DIVND1_ClkSel_8M (2UL) /*!< CKSEL_8M */
#define RADIO_BBCKSEL_DIVND1_ClkSel_4M (3UL) /*!< CKSEL_4M */
#define RADIO_BBCKSEL_DIVND1_ClkSel_2M (4UL) /*!< CKSEL_2M */
#define RADIO_BBCKSEL_DIVND1_ClkSel_1M (5UL) /*!< CKSEL_1M */
#define RADIO_BBCKSEL_DIVND1_ClkSel_500K (6UL) /*!< CKSEL_500K */
#define RADIO_BBCKSEL_DIVND1_ClkSel_Disabled (7UL) /*!< CKSEL_OFF */

/* Register: RADIO_DFESTATUS */
/* Description: DFE status information */

/* Bit 4 : Internal state of sampling state machine */
#define RADIO_DFESTATUS_SAMPLINGSTATE_Pos (4UL) /*!< Position of SAMPLINGSTATE field. */
#define RADIO_DFESTATUS_SAMPLINGSTATE_Msk (0x1UL << RADIO_DFESTATUS_SAMPLINGSTATE_Pos) /*!< Bit mask of SAMPLINGSTATE field. */
#define RADIO_DFESTATUS_SAMPLINGSTATE_Idle (0UL) /*!< Sampling state Idle */
#define RADIO_DFESTATUS_SAMPLINGSTATE_Sampling (1UL) /*!< Sampling state Sampling */

/* Bits 2..0 : Internal state of switching state machine */
#define RADIO_DFESTATUS_SWITCHINGSTATE_Pos (0UL) /*!< Position of SWITCHINGSTATE field. */
#define RADIO_DFESTATUS_SWITCHINGSTATE_Msk (0x7UL << RADIO_DFESTATUS_SWITCHINGSTATE_Pos) /*!< Bit mask of SWITCHINGSTATE field. */
#define RADIO_DFESTATUS_SWITCHINGSTATE_Idle (0UL) /*!< Switching state Idle */
#define RADIO_DFESTATUS_SWITCHINGSTATE_Offset (1UL) /*!< Switching state Offset */
#define RADIO_DFESTATUS_SWITCHINGSTATE_Guard (2UL) /*!< Switching state Guard */
#define RADIO_DFESTATUS_SWITCHINGSTATE_Ref (3UL) /*!< Switching state Ref */
#define RADIO_DFESTATUS_SWITCHINGSTATE_Switching (4UL) /*!< Switching state Switching */
#define RADIO_DFESTATUS_SWITCHINGSTATE_Ending (5UL) /*!< Switching state Ending */

/* Register: RADIO_DFEMODE */
/* Description: Whether to use Angle-of-Arrival (AOA) or Angle-of-Departure (AOD) */

/* Bits 1..0 : Direction finding operation mode */
#define RADIO_DFEMODE_DFEOPMODE_Pos (0UL) /*!< Position of DFEOPMODE field. */
#define RADIO_DFEMODE_DFEOPMODE_Msk (0x3UL << RADIO_DFEMODE_DFEOPMODE_Pos) /*!< Bit mask of DFEOPMODE field. */
#define RADIO_DFEMODE_DFEOPMODE_Disabled (0UL) /*!< Direction finding mode disabled */
#define RADIO_DFEMODE_DFEOPMODE_AoD (2UL) /*!< Direction finding mode set to AoD */
#define RADIO_DFEMODE_DFEOPMODE_AoA (3UL) /*!< Direction finding mode set to AoA */

/* Register: RADIO_DFECTRL1 */
/* Description: Various configuration for Direction finding */

/* Bits 27..24 : Gain will be lowered by the specified number of gain steps at the start of CTE */
#define RADIO_DFECTRL1_AGCBACKOFFGAIN_Pos (24UL) /*!< Position of AGCBACKOFFGAIN field. */
#define RADIO_DFECTRL1_AGCBACKOFFGAIN_Msk (0xFUL << RADIO_DFECTRL1_AGCBACKOFFGAIN_Pos) /*!< Bit mask of AGCBACKOFFGAIN field. */

/* Bits 23..20 : Repeat every antenna pattern N times. */
#define RADIO_DFECTRL1_REPEATPATTERN_Pos (20UL) /*!< Position of REPEATPATTERN field. */
#define RADIO_DFECTRL1_REPEATPATTERN_Msk (0xFUL << RADIO_DFECTRL1_REPEATPATTERN_Pos) /*!< Bit mask of REPEATPATTERN field. */
#define RADIO_DFECTRL1_REPEATPATTERN_NO_REPEAT (0UL) /*!< Do not repeat (1 time in total) */

/* Bits 18..16 : Interval between samples in the SWITCHING period when CTEINLINECTRLEN is 0 */
#define RADIO_DFECTRL1_TSAMPLESPACING_Pos (16UL) /*!< Position of TSAMPLESPACING field. */
#define RADIO_DFECTRL1_TSAMPLESPACING_Msk (0x7UL << RADIO_DFECTRL1_TSAMPLESPACING_Pos) /*!< Bit mask of TSAMPLESPACING field. */
#define RADIO_DFECTRL1_TSAMPLESPACING_4us (1UL) /*!< 4us */
#define RADIO_DFECTRL1_TSAMPLESPACING_2us (2UL) /*!< 2us */
#define RADIO_DFECTRL1_TSAMPLESPACING_1us (3UL) /*!< 1us */
#define RADIO_DFECTRL1_TSAMPLESPACING_500ns (4UL) /*!< 0.5us */
#define RADIO_DFECTRL1_TSAMPLESPACING_250ns (5UL) /*!< 0.25us */
#define RADIO_DFECTRL1_TSAMPLESPACING_125ns (6UL) /*!< 0.125us */

/* Bit 15 : Whether to sample I/Q or magnitude/phase */
#define RADIO_DFECTRL1_SAMPLETYPE_Pos (15UL) /*!< Position of SAMPLETYPE field. */
#define RADIO_DFECTRL1_SAMPLETYPE_Msk (0x1UL << RADIO_DFECTRL1_SAMPLETYPE_Pos) /*!< Bit mask of SAMPLETYPE field. */
#define RADIO_DFECTRL1_SAMPLETYPE_IQ (0UL) /*!< Complex samples in I and Q */
#define RADIO_DFECTRL1_SAMPLETYPE_MagPhase (1UL) /*!< Complex samples as magnitude and phase */

/* Bits 14..12 : Interval between samples in the REFERENCE period */
#define RADIO_DFECTRL1_TSAMPLESPACINGREF_Pos (12UL) /*!< Position of TSAMPLESPACINGREF field. */
#define RADIO_DFECTRL1_TSAMPLESPACINGREF_Msk (0x7UL << RADIO_DFECTRL1_TSAMPLESPACINGREF_Pos) /*!< Bit mask of TSAMPLESPACINGREF field. */
#define RADIO_DFECTRL1_TSAMPLESPACINGREF_8us (0UL) /*!< 8us */
#define RADIO_DFECTRL1_TSAMPLESPACINGREF_4us (1UL) /*!< 4us */
#define RADIO_DFECTRL1_TSAMPLESPACINGREF_2us (2UL) /*!< 2us */
#define RADIO_DFECTRL1_TSAMPLESPACINGREF_1us (3UL) /*!< 1us */
#define RADIO_DFECTRL1_TSAMPLESPACINGREF_500ns (4UL) /*!< 0.5us */
#define RADIO_DFECTRL1_TSAMPLESPACINGREF_250ns (5UL) /*!< 0.25us */
#define RADIO_DFECTRL1_TSAMPLESPACINGREF_125ns (6UL) /*!< 0.125us */

/* Bit 11 : Trigger AoA/AoD procedure using only task */
#define RADIO_DFECTRL1_TRIGGERWITHTASKONLY_Pos (11UL) /*!< Position of TRIGGERWITHTASKONLY field. */
#define RADIO_DFECTRL1_TRIGGERWITHTASKONLY_Msk (0x1UL << RADIO_DFECTRL1_TRIGGERWITHTASKONLY_Pos) /*!< Bit mask of TRIGGERWITHTASKONLY field. */
#define RADIO_DFECTRL1_TRIGGERWITHTASKONLY_Multiple (0UL) /*!< Trigger also with other signals */
#define RADIO_DFECTRL1_TRIGGERWITHTASKONLY_OnlyTask (1UL) /*!< Only allow triggering a procedure with TASKS_DFESTART */

/* Bits 10..8 : Interval between every time the antenna is changed in the SWITCHING state */
#define RADIO_DFECTRL1_TSWITCHSPACING_Pos (8UL) /*!< Position of TSWITCHSPACING field. */
#define RADIO_DFECTRL1_TSWITCHSPACING_Msk (0x7UL << RADIO_DFECTRL1_TSWITCHSPACING_Pos) /*!< Bit mask of TSWITCHSPACING field. */
#define RADIO_DFECTRL1_TSWITCHSPACING_8us (0UL) /*!< 8us */
#define RADIO_DFECTRL1_TSWITCHSPACING_4us (1UL) /*!< 4us */
#define RADIO_DFECTRL1_TSWITCHSPACING_2us (2UL) /*!< 2us */
#define RADIO_DFECTRL1_TSWITCHSPACING_1us (3UL) /*!< 1us */
#define RADIO_DFECTRL1_TSWITCHSPACING_500ns (4UL) /*!< 0.5us */
#define RADIO_DFECTRL1_TSWITCHSPACING_250ns (5UL) /*!< 0.25us */

/* Bit 7 : Add CTE extension and do antenna switching/sampling in this extension */
#define RADIO_DFECTRL1_DFEINEXTENSION_Pos (7UL) /*!< Position of DFEINEXTENSION field. */
#define RADIO_DFECTRL1_DFEINEXTENSION_Msk (0x1UL << RADIO_DFECTRL1_DFEINEXTENSION_Pos) /*!< Bit mask of DFEINEXTENSION field. */
#define RADIO_DFECTRL1_DFEINEXTENSION_Payload (0UL) /*!< Antenna switching/sampling is done in the packet payload */
#define RADIO_DFECTRL1_DFEINEXTENSION_CRC (1UL) /*!< AoA/AoD procedure triggered at end of CRC */

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
#define RADIO_DFECTRL3_SHORTENMIRRORSEQUENCE_Disable (0UL) /*!< End patterns are repeated */
#define RADIO_DFECTRL3_SHORTENMIRRORSEQUENCE_Enable (1UL) /*!< End patterns are not repeated */

/* Bit 30 : When reaching the last antenna pattern, it repeats that pattern, and then goes back down again. */
#define RADIO_DFECTRL3_MIRRORSEQUENCE_Pos (30UL) /*!< Position of MIRRORSEQUENCE field. */
#define RADIO_DFECTRL3_MIRRORSEQUENCE_Msk (0x1UL << RADIO_DFECTRL3_MIRRORSEQUENCE_Pos) /*!< Bit mask of MIRRORSEQUENCE field. */
#define RADIO_DFECTRL3_MIRRORSEQUENCE_Disable (0UL) /*!< Do not mirror the sequence */
#define RADIO_DFECTRL3_MIRRORSEQUENCE_Enable (1UL) /*!< Mirror the sequence */

/* Bit 29 : Whether to have the ability to have separate sampling rate in the REFERENCE period vs the SWITCHING state */
#define RADIO_DFECTRL3_CHANGESAMPLERATE_Pos (29UL) /*!< Position of CHANGESAMPLERATE field. */
#define RADIO_DFECTRL3_CHANGESAMPLERATE_Msk (0x1UL << RADIO_DFECTRL3_CHANGESAMPLERATE_Pos) /*!< Bit mask of CHANGESAMPLERATE field. */
#define RADIO_DFECTRL3_CHANGESAMPLERATE_Same (0UL) /*!< Always use sample spacing given by TSAMPLESPACINGREF */
#define RADIO_DFECTRL3_CHANGESAMPLERATE_Change (1UL) /*!< Use TSAMPLESPACINGREF in the REFERENCE period, and TSAMPLESPACING or CTEINLINEAODRXMODExUS in the SWITCHING period */

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
#define RADIO_DFECTRL4_RETURNTOREFATEND_Disable (0UL) /*!< Return to SWITCHPATTERN[2] after reaching the end of the switching pattern sequence */
#define RADIO_DFECTRL4_RETURNTOREFATEND_Enable (1UL) /*!< Return to SWITCHPATTERN[1] after reaching the end of the switching pattern sequence */

/* Bits 18..8 : Maximum number of antenna slots */
#define RADIO_DFECTRL4_MAXTOTALSLOTS_Pos (8UL) /*!< Position of MAXTOTALSLOTS field. */
#define RADIO_DFECTRL4_MAXTOTALSLOTS_Msk (0x7FFUL << RADIO_DFECTRL4_MAXTOTALSLOTS_Pos) /*!< Bit mask of MAXTOTALSLOTS field. */

/* Bit 7 : Enable correlator before Direction Finding samples */
#define RADIO_DFECTRL4_DFECORREN_Pos (7UL) /*!< Position of DFECORREN field. */
#define RADIO_DFECTRL4_DFECORREN_Msk (0x1UL << RADIO_DFECTRL4_DFECORREN_Pos) /*!< Bit mask of DFECORREN field. */
#define RADIO_DFECTRL4_DFECORREN_Disable (0UL) /*!< Disable correlator */
#define RADIO_DFECTRL4_DFECORREN_Enable (1UL) /*!< Enable correlator */

/* Bit 6 : TSAMPLESPACING is ignored for the samples taken in the SWITCHING state TSAMPLESPACINGREF is still used for the first samples (REFERENCE period) */
#define RADIO_DFECTRL4_ONESAMPLEPERSLOT_Pos (6UL) /*!< Position of ONESAMPLEPERSLOT field. */
#define RADIO_DFECTRL4_ONESAMPLEPERSLOT_Msk (0x1UL << RADIO_DFECTRL4_ONESAMPLEPERSLOT_Pos) /*!< Bit mask of ONESAMPLEPERSLOT field. */

/* Bit 5 : Ignore that the UTxRxChain says that the packet has been received Continue running if more time to run */
#define RADIO_DFECTRL4_IGNOREENDOFPACKET_Pos (5UL) /*!< Position of IGNOREENDOFPACKET field. */
#define RADIO_DFECTRL4_IGNOREENDOFPACKET_Msk (0x1UL << RADIO_DFECTRL4_IGNOREENDOFPACKET_Pos) /*!< Bit mask of IGNOREENDOFPACKET field. */
#define RADIO_DFECTRL4_IGNOREENDOFPACKET_DoNotIgnore (0UL) /*!< Do not ignore the end of packet */
#define RADIO_DFECTRL4_IGNOREENDOFPACKET_Ignore (1UL) /*!< Ignore the end of packet */

/* Bit 4 : Insert reference antenna(SWITCHPATTERN[1]) between antenna switches, from SWITCHPATTERN[2] onwards */
#define RADIO_DFECTRL4_SWITCHBACKTOREF_Pos (4UL) /*!< Position of SWITCHBACKTOREF field. */
#define RADIO_DFECTRL4_SWITCHBACKTOREF_Msk (0x1UL << RADIO_DFECTRL4_SWITCHBACKTOREF_Pos) /*!< Bit mask of SWITCHBACKTOREF field. */
#define RADIO_DFECTRL4_SWITCHBACKTOREF_Disable (0UL) /*!< Do not insert reference antenna between switches */
#define RADIO_DFECTRL4_SWITCHBACKTOREF_Enable (1UL) /*!< Insert reference antenna between switches */

/* Bit 3 : Ignore the maximum number of samples and antenna slots specified with MAXTOTALSAMPLES and MAXTOTALSLOTS */
#define RADIO_DFECTRL4_IGNOREMAXSPEC_Pos (3UL) /*!< Position of IGNOREMAXSPEC field. */
#define RADIO_DFECTRL4_IGNOREMAXSPEC_Msk (0x1UL << RADIO_DFECTRL4_IGNOREMAXSPEC_Pos) /*!< Bit mask of IGNOREMAXSPEC field. */
#define RADIO_DFECTRL4_IGNOREMAXSPEC_DoNotIgnore (0UL) /*!< Use the max specs */
#define RADIO_DFECTRL4_IGNOREMAXSPEC_Ignore (1UL) /*!< Ignore the max specs */

/* Bit 2 : Ignore the length specification in numberOf8us */
#define RADIO_DFECTRL4_IGNORE8USLENGTH_Pos (2UL) /*!< Position of IGNORE8USLENGTH field. */
#define RADIO_DFECTRL4_IGNORE8USLENGTH_Msk (0x1UL << RADIO_DFECTRL4_IGNORE8USLENGTH_Pos) /*!< Bit mask of IGNORE8USLENGTH field. */
#define RADIO_DFECTRL4_IGNORE8USLENGTH_DoNotIgnore (0UL) /*!< Use the length specification */
#define RADIO_DFECTRL4_IGNORE8USLENGTH_Ignore (1UL) /*!< Ignore the length specification */

/* Bits 1..0 : Start point of TSAMPLEOFFSET sampling relative to which part in the switching state machine */
#define RADIO_DFECTRL4_SAMPLESTARTRELATIVETO_Pos (0UL) /*!< Position of SAMPLESTARTRELATIVETO field. */
#define RADIO_DFECTRL4_SAMPLESTARTRELATIVETO_Msk (0x3UL << RADIO_DFECTRL4_SAMPLESTARTRELATIVETO_Pos) /*!< Bit mask of SAMPLESTARTRELATIVETO field. */
#define RADIO_DFECTRL4_SAMPLESTARTRELATIVETO_Reference (0UL) /*!< At the start of the reference antenna period */
#define RADIO_DFECTRL4_SAMPLESTARTRELATIVETO_Switching (1UL) /*!< At the start of antenna switching after the reference antenna period */
#define RADIO_DFECTRL4_SAMPLESTARTRELATIVETO_Trigger (2UL) /*!< When it is triggered Either TASKS_DFESTART, address match or AoA/AoD procedure trigger source */
#define RADIO_DFECTRL4_SAMPLESTARTRELATIVETO_Guard (3UL) /*!< At the start of the GUARD period */

/* Register: RADIO_DFECTRL5 */
/* Description: Various hacker/tuning configuration for Direction finding */

/* Bits 28..24 : Tuning of the timing difference between the hypermode demodulator and the standard demodulator for the DFE start event, in 62.5 ns units */
#define RADIO_DFECTRL5_DFEOFFSETSTDHYP_Pos (24UL) /*!< Position of DFEOFFSETSTDHYP field. */
#define RADIO_DFECTRL5_DFEOFFSETSTDHYP_Msk (0x1FUL << RADIO_DFECTRL5_DFEOFFSETSTDHYP_Pos) /*!< Bit mask of DFEOFFSETSTDHYP field. */

/* Bit 18 : Selects whether saturation (being reported from the radio front-end) should be ignored in the beginning of the slot or not */
#define RADIO_DFECTRL5_NEVERIGNORESAT_Pos (18UL) /*!< Position of NEVERIGNORESAT field. */
#define RADIO_DFECTRL5_NEVERIGNORESAT_Msk (0x1UL << RADIO_DFECTRL5_NEVERIGNORESAT_Pos) /*!< Bit mask of NEVERIGNORESAT field. */
#define RADIO_DFECTRL5_NEVERIGNORESAT_IGNORE (0UL) /*!< Saturation being indicated from the front-end is ignored if it happens in the first 40 percent of the sample spacing after a sample was saved to RAM */
#define RADIO_DFECTRL5_NEVERIGNORESAT_NEVERIGNORE (1UL) /*!< Saturation is always reported in RAM if detected by the frontend */

/* Bits 17..16 : Set how input saturation will be present in the captured samples */
#define RADIO_DFECTRL5_SATURATIONMODE_Pos (16UL) /*!< Position of SATURATIONMODE field. */
#define RADIO_DFECTRL5_SATURATIONMODE_Msk (0x3UL << RADIO_DFECTRL5_SATURATIONMODE_Pos) /*!< Bit mask of SATURATIONMODE field. */
#define RADIO_DFECTRL5_SATURATIONMODE_OFF (0UL) /*!< No saturation is presented */
#define RADIO_DFECTRL5_SATURATIONMODE_SETMINVAL (1UL) /*!< Saturation is marked by setting both I and Q to -32768 (or mag/phase if SAMPLETYPE is 1) */
#define RADIO_DFECTRL5_SATURATIONMODE_SATURATIONBIT (2UL) /*!< Bit 15 of both the I and Q values indicates saturation. I and Q are hence only 15 bit values */

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

/* Register: RADIO_DFEGPIO */
/* Description: Description collection: Pin select for DFE pin n */

/* Bit 31 : Connection */
#define RADIO_DFEGPIO_CONNECT_Pos (31UL) /*!< Position of CONNECT field. */
#define RADIO_DFEGPIO_CONNECT_Msk (0x1UL << RADIO_DFEGPIO_CONNECT_Pos) /*!< Bit mask of CONNECT field. */
#define RADIO_DFEGPIO_CONNECT_Connected (0UL) /*!< Connect */
#define RADIO_DFEGPIO_CONNECT_Disconnected (1UL) /*!< Disconnect */

/* Bit 5 : Port number */
#define RADIO_DFEGPIO_PORT_Pos (5UL) /*!< Position of PORT field. */
#define RADIO_DFEGPIO_PORT_Msk (0x1UL << RADIO_DFEGPIO_PORT_Pos) /*!< Bit mask of PORT field. */

/* Bits 4..0 : Pin number */
#define RADIO_DFEGPIO_PIN_Pos (0UL) /*!< Position of PIN field. */
#define RADIO_DFEGPIO_PIN_Msk (0x1FUL << RADIO_DFEGPIO_PIN_Pos) /*!< Bit mask of PIN field. */

/* Register: RADIO_TASK_TRIG_START_DFE */
/* Description: Unspecified */

/* Bit 0 :   */
#define RADIO_TASK_TRIG_START_DFE_TASK_TRIG_START_DFE_Pos (0UL) /*!< Position of TASK_TRIG_START_DFE field. */
#define RADIO_TASK_TRIG_START_DFE_TASK_TRIG_START_DFE_Msk (0x1UL << RADIO_TASK_TRIG_START_DFE_TASK_TRIG_START_DFE_Pos) /*!< Bit mask of TASK_TRIG_START_DFE field. */

/* Register: RADIO_TASK_TRIG_STOP_DFE */
/* Description: Unspecified */

/* Bit 0 :   */
#define RADIO_TASK_TRIG_STOP_DFE_TASK_TRIG_STOP_DFE_Pos (0UL) /*!< Position of TASK_TRIG_STOP_DFE field. */
#define RADIO_TASK_TRIG_STOP_DFE_TASK_TRIG_STOP_DFE_Msk (0x1UL << RADIO_TASK_TRIG_STOP_DFE_TASK_TRIG_STOP_DFE_Pos) /*!< Bit mask of TASK_TRIG_STOP_DFE field. */

/* Register: RADIO_ENABLE_DFE */
/* Description: Unspecified */

/* Bit 0 :   */
#define RADIO_ENABLE_DFE_ENABLE_DFE_Pos (0UL) /*!< Position of ENABLE_DFE field. */
#define RADIO_ENABLE_DFE_ENABLE_DFE_Msk (0x1UL << RADIO_ENABLE_DFE_ENABLE_DFE_Pos) /*!< Bit mask of ENABLE_DFE field. */

/* Register: RADIO_PTRDFE */
/* Description: Data pointer */

/* Bit 29 :   */
#define RADIO_PTRDFE_BASE_Pos (29UL) /*!< Position of BASE field. */
#define RADIO_PTRDFE_BASE_Msk (0x1UL << RADIO_PTRDFE_BASE_Pos) /*!< Bit mask of BASE field. */

/* Bits 15..0 :   */
#define RADIO_PTRDFE_OFFSET_Pos (0UL) /*!< Position of OFFSET field. */
#define RADIO_PTRDFE_OFFSET_Msk (0xFFFFUL << RADIO_PTRDFE_OFFSET_Pos) /*!< Bit mask of OFFSET field. */

/* Register: RADIO_AMOUNTDFE */
/* Description: Number of samples transferred in the last transaction */

/* Bits 15..0 : Number of samples transferred in the last transaction */
#define RADIO_AMOUNTDFE_AMOUNTDFE_Pos (0UL) /*!< Position of AMOUNTDFE field. */
#define RADIO_AMOUNTDFE_AMOUNTDFE_Msk (0xFFFFUL << RADIO_AMOUNTDFE_AMOUNTDFE_Pos) /*!< Bit mask of AMOUNTDFE field. */

/* Register: RADIO_MAXCNTDFE */
/* Description: Maximum number of buffer words to transfer */

/* Bits 15..0 : Maximum number of buffer words to transfer */
#define RADIO_MAXCNTDFE_MAXCNTDFE_Pos (0UL) /*!< Position of MAXCNTDFE field. */
#define RADIO_MAXCNTDFE_MAXCNTDFE_Msk (0xFFFFUL << RADIO_MAXCNTDFE_MAXCNTDFE_Pos) /*!< Bit mask of MAXCNTDFE field. */

/* Register: RADIO_TASK_CNTSTART */
/* Description: Unspecified */

/* Bit 0 :   */
#define RADIO_TASK_CNTSTART_TASK_CNTSTART_Pos (0UL) /*!< Position of TASK_CNTSTART field. */
#define RADIO_TASK_CNTSTART_TASK_CNTSTART_Msk (0x1UL << RADIO_TASK_CNTSTART_TASK_CNTSTART_Pos) /*!< Bit mask of TASK_CNTSTART field. */

/* Register: RADIO_TASK_CNTSTOP */
/* Description: Unspecified */

/* Bit 0 :   */
#define RADIO_TASK_CNTSTOP_TASK_CNTSTOP_Pos (0UL) /*!< Position of TASK_CNTSTOP field. */
#define RADIO_TASK_CNTSTOP_TASK_CNTSTOP_Msk (0x1UL << RADIO_TASK_CNTSTOP_TASK_CNTSTOP_Pos) /*!< Bit mask of TASK_CNTSTOP field. */

/* Register: RADIO_TASK_CNTCLEAR */
/* Description: Unspecified */

/* Bit 0 :   */
#define RADIO_TASK_CNTCLEAR_TASK_CNTCLEAR_Pos (0UL) /*!< Position of TASK_CNTCLEAR field. */
#define RADIO_TASK_CNTCLEAR_TASK_CNTCLEAR_Msk (0x1UL << RADIO_TASK_CNTCLEAR_TASK_CNTCLEAR_Pos) /*!< Bit mask of TASK_CNTCLEAR field. */

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

/* Register: RADIO_PDUSTAT */
/* Description: Payload status */

/* Bits 2..1 : Status on what rate packet is received with in Long Range */
#define RADIO_PDUSTAT_CISTAT_Pos (1UL) /*!< Position of CISTAT field. */
#define RADIO_PDUSTAT_CISTAT_Msk (0x3UL << RADIO_PDUSTAT_CISTAT_Pos) /*!< Bit mask of CISTAT field. */
#define RADIO_PDUSTAT_CISTAT_LR125kbit (0UL) /*!< Frame is received at 125 kbps */
#define RADIO_PDUSTAT_CISTAT_LR500kbit (1UL) /*!< Frame is received at 500 kbps */

/* Bit 0 : Status on payload length vs. PCNF1.MAXLEN */
#define RADIO_PDUSTAT_PDUSTAT_Pos (0UL) /*!< Position of PDUSTAT field. */
#define RADIO_PDUSTAT_PDUSTAT_Msk (0x1UL << RADIO_PDUSTAT_PDUSTAT_Pos) /*!< Bit mask of PDUSTAT field. */
#define RADIO_PDUSTAT_PDUSTAT_LessThan (0UL) /*!< Payload less than PCNF1.MAXLEN */
#define RADIO_PDUSTAT_PDUSTAT_GreaterThan (1UL) /*!< Payload greater than PCNF1.MAXLEN */

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
#define RADIO_PCNF0_CRCINC_Exclude (0UL) /*!< LENGTH does not contain CRC */
#define RADIO_PCNF0_CRCINC_Include (1UL) /*!< LENGTH includes CRC */

/* Bits 25..24 : Length of preamble on air. Decision point: TASKS_START task */
#define RADIO_PCNF0_PLEN_Pos (24UL) /*!< Position of PLEN field. */
#define RADIO_PCNF0_PLEN_Msk (0x3UL << RADIO_PCNF0_PLEN_Pos) /*!< Bit mask of PLEN field. */
#define RADIO_PCNF0_PLEN_8bit (0UL) /*!< 8-bit preamble */
#define RADIO_PCNF0_PLEN_16bit (1UL) /*!< 16-bit preamble */
#define RADIO_PCNF0_PLEN_32bitZero (2UL) /*!< 32-bit zero preamble - used for IEEE 802.15.4 */
#define RADIO_PCNF0_PLEN_LongRange (3UL) /*!< Preamble - used for BLE long range */

/* Bits 23..22 : Length of code indicator - long range */
#define RADIO_PCNF0_CILEN_Pos (22UL) /*!< Position of CILEN field. */
#define RADIO_PCNF0_CILEN_Msk (0x3UL << RADIO_PCNF0_CILEN_Pos) /*!< Bit mask of CILEN field. */

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

/* Register: RADIO_PCNF0SEC */
/* Description: Unspecified */

/* Bits 30..29 :   */
#define RADIO_PCNF0SEC_FIELD8_Pos (29UL) /*!< Position of FIELD8 field. */
#define RADIO_PCNF0SEC_FIELD8_Msk (0x3UL << RADIO_PCNF0SEC_FIELD8_Pos) /*!< Bit mask of FIELD8 field. */

/* Bit 28 :   */
#define RADIO_PCNF0SEC_FIELD7_Pos (28UL) /*!< Position of FIELD7 field. */
#define RADIO_PCNF0SEC_FIELD7_Msk (0x1UL << RADIO_PCNF0SEC_FIELD7_Pos) /*!< Bit mask of FIELD7 field. */

/* Bit 26 :   */
#define RADIO_PCNF0SEC_FIELD6_Pos (26UL) /*!< Position of FIELD6 field. */
#define RADIO_PCNF0SEC_FIELD6_Msk (0x1UL << RADIO_PCNF0SEC_FIELD6_Pos) /*!< Bit mask of FIELD6 field. */

/* Bits 25..24 :   */
#define RADIO_PCNF0SEC_FIELD5_Pos (24UL) /*!< Position of FIELD5 field. */
#define RADIO_PCNF0SEC_FIELD5_Msk (0x3UL << RADIO_PCNF0SEC_FIELD5_Pos) /*!< Bit mask of FIELD5 field. */

/* Bits 23..22 :   */
#define RADIO_PCNF0SEC_FIELD4_Pos (22UL) /*!< Position of FIELD4 field. */
#define RADIO_PCNF0SEC_FIELD4_Msk (0x3UL << RADIO_PCNF0SEC_FIELD4_Pos) /*!< Bit mask of FIELD4 field. */

/* Bits 21..20 :   */
#define RADIO_PCNF0SEC_FIELD3_Pos (20UL) /*!< Position of FIELD3 field. */
#define RADIO_PCNF0SEC_FIELD3_Msk (0x3UL << RADIO_PCNF0SEC_FIELD3_Pos) /*!< Bit mask of FIELD3 field. */

/* Bits 19..16 :   */
#define RADIO_PCNF0SEC_FIELD2_Pos (16UL) /*!< Position of FIELD2 field. */
#define RADIO_PCNF0SEC_FIELD2_Msk (0xFUL << RADIO_PCNF0SEC_FIELD2_Pos) /*!< Bit mask of FIELD2 field. */

/* Bit 8 :   */
#define RADIO_PCNF0SEC_FIELD1_Pos (8UL) /*!< Position of FIELD1 field. */
#define RADIO_PCNF0SEC_FIELD1_Msk (0x1UL << RADIO_PCNF0SEC_FIELD1_Pos) /*!< Bit mask of FIELD1 field. */

/* Bits 3..0 :   */
#define RADIO_PCNF0SEC_FIELD0_Pos (0UL) /*!< Position of FIELD0 field. */
#define RADIO_PCNF0SEC_FIELD0_Msk (0xFUL << RADIO_PCNF0SEC_FIELD0_Pos) /*!< Bit mask of FIELD0 field. */

/* Register: RADIO_PCNF1 */
/* Description: Packet configuration register 1 */

/* Bit 31 : Used to bypass PREAMBLE, ADDRESS, S0, LENGTH, S1 field and go straight to PAYLOAD state */
#define RADIO_PCNF1_TXFROMRAM_Pos (31UL) /*!< Position of TXFROMRAM field. */
#define RADIO_PCNF1_TXFROMRAM_Msk (0x1UL << RADIO_PCNF1_TXFROMRAM_Pos) /*!< Bit mask of TXFROMRAM field. */
#define RADIO_PCNF1_TXFROMRAM_Disabled (0UL) /*!< Disable */
#define RADIO_PCNF1_TXFROMRAM_Bypass (1UL) /*!< Bypass */

/* Bit 25 : Enable or disable packet whitening */
#define RADIO_PCNF1_WHITEEN_Pos (25UL) /*!< Position of WHITEEN field. */
#define RADIO_PCNF1_WHITEEN_Msk (0x1UL << RADIO_PCNF1_WHITEEN_Pos) /*!< Bit mask of WHITEEN field. */
#define RADIO_PCNF1_WHITEEN_Disabled (0UL) /*!< Disable */
#define RADIO_PCNF1_WHITEEN_Enabled (1UL) /*!< Enable */

/* Bit 24 : On-air endianness of packet, this applies to the S0, LENGTH, S1, and the PAYLOAD fields. */
#define RADIO_PCNF1_ENDIAN_Pos (24UL) /*!< Position of ENDIAN field. */
#define RADIO_PCNF1_ENDIAN_Msk (0x1UL << RADIO_PCNF1_ENDIAN_Pos) /*!< Bit mask of ENDIAN field. */
#define RADIO_PCNF1_ENDIAN_Little (0UL) /*!< Least significant bit on air first */
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

/* Bits 9..8 : Include or exclude packet address field out of CRC calculation. */
#define RADIO_CRCCNF_SKIPADDR_Pos (8UL) /*!< Position of SKIPADDR field. */
#define RADIO_CRCCNF_SKIPADDR_Msk (0x3UL << RADIO_CRCCNF_SKIPADDR_Pos) /*!< Bit mask of SKIPADDR field. */
#define RADIO_CRCCNF_SKIPADDR_Include (0UL) /*!< CRC calculation includes address field */
#define RADIO_CRCCNF_SKIPADDR_Skip (1UL) /*!< CRC calculation does not include address field. The CRC calculation will start at the first byte after the address. */
#define RADIO_CRCCNF_SKIPADDR_Ieee802154 (2UL) /*!< CRC calculation as per 802.15.4 standard. Starting at first byte after length field. */

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

/* Register: RADIO_BCC */
/* Description: Bit counter compare */

/* Bits 31..0 : Bit counter compare */
#define RADIO_BCC_BCC_Pos (0UL) /*!< Position of BCC field. */
#define RADIO_BCC_BCC_Msk (0xFFFFFFFFUL << RADIO_BCC_BCC_Pos) /*!< Bit mask of BCC field. */

/* Register: RADIO_AACHKOVERRIDE_TODO_FIX_NAMING */
/* Description: Unspecified */

/* Bits 29..28 :   */
#define RADIO_AACHKOVERRIDE_TODO_FIX_NAMING_FIELD8_Pos (28UL) /*!< Position of FIELD8 field. */
#define RADIO_AACHKOVERRIDE_TODO_FIX_NAMING_FIELD8_Msk (0x3UL << RADIO_AACHKOVERRIDE_TODO_FIX_NAMING_FIELD8_Pos) /*!< Bit mask of FIELD8 field. */

/* Bits 26..24 :   */
#define RADIO_AACHKOVERRIDE_TODO_FIX_NAMING_FIELD7_Pos (24UL) /*!< Position of FIELD7 field. */
#define RADIO_AACHKOVERRIDE_TODO_FIX_NAMING_FIELD7_Msk (0x7UL << RADIO_AACHKOVERRIDE_TODO_FIX_NAMING_FIELD7_Pos) /*!< Bit mask of FIELD7 field. */

/* Bit 22 :   */
#define RADIO_AACHKOVERRIDE_TODO_FIX_NAMING_FIELD6_Pos (22UL) /*!< Position of FIELD6 field. */
#define RADIO_AACHKOVERRIDE_TODO_FIX_NAMING_FIELD6_Msk (0x1UL << RADIO_AACHKOVERRIDE_TODO_FIX_NAMING_FIELD6_Pos) /*!< Bit mask of FIELD6 field. */

/* Bit 21 :   */
#define RADIO_AACHKOVERRIDE_TODO_FIX_NAMING_FIELD5_Pos (21UL) /*!< Position of FIELD5 field. */
#define RADIO_AACHKOVERRIDE_TODO_FIX_NAMING_FIELD5_Msk (0x1UL << RADIO_AACHKOVERRIDE_TODO_FIX_NAMING_FIELD5_Pos) /*!< Bit mask of FIELD5 field. */

/* Bit 20 :   */
#define RADIO_AACHKOVERRIDE_TODO_FIX_NAMING_FIELD4_Pos (20UL) /*!< Position of FIELD4 field. */
#define RADIO_AACHKOVERRIDE_TODO_FIX_NAMING_FIELD4_Msk (0x1UL << RADIO_AACHKOVERRIDE_TODO_FIX_NAMING_FIELD4_Pos) /*!< Bit mask of FIELD4 field. */

/* Bit 19 :   */
#define RADIO_AACHKOVERRIDE_TODO_FIX_NAMING_FIELD3_Pos (19UL) /*!< Position of FIELD3 field. */
#define RADIO_AACHKOVERRIDE_TODO_FIX_NAMING_FIELD3_Msk (0x1UL << RADIO_AACHKOVERRIDE_TODO_FIX_NAMING_FIELD3_Pos) /*!< Bit mask of FIELD3 field. */

/* Bit 18 :   */
#define RADIO_AACHKOVERRIDE_TODO_FIX_NAMING_FIELD2_Pos (18UL) /*!< Position of FIELD2 field. */
#define RADIO_AACHKOVERRIDE_TODO_FIX_NAMING_FIELD2_Msk (0x1UL << RADIO_AACHKOVERRIDE_TODO_FIX_NAMING_FIELD2_Pos) /*!< Bit mask of FIELD2 field. */

/* Bit 17 :   */
#define RADIO_AACHKOVERRIDE_TODO_FIX_NAMING_FIELD1_Pos (17UL) /*!< Position of FIELD1 field. */
#define RADIO_AACHKOVERRIDE_TODO_FIX_NAMING_FIELD1_Msk (0x1UL << RADIO_AACHKOVERRIDE_TODO_FIX_NAMING_FIELD1_Pos) /*!< Bit mask of FIELD1 field. */

/* Bits 9..0 :   */
#define RADIO_AACHKOVERRIDE_TODO_FIX_NAMING_FIELD0_Pos (0UL) /*!< Position of FIELD0 field. */
#define RADIO_AACHKOVERRIDE_TODO_FIX_NAMING_FIELD0_Msk (0x3FFUL << RADIO_AACHKOVERRIDE_TODO_FIX_NAMING_FIELD0_Pos) /*!< Bit mask of FIELD0 field. */

/* Register: RADIO_PACKETCNTR1 */
/* Description: Unspecified */

/* Bits 15..0 :   */
#define RADIO_PACKETCNTR1_FIELD0_Pos (0UL) /*!< Position of FIELD0 field. */
#define RADIO_PACKETCNTR1_FIELD0_Msk (0xFFFFUL << RADIO_PACKETCNTR1_FIELD0_Pos) /*!< Bit mask of FIELD0 field. */

/* Register: RADIO_PACKETCNTR2 */
/* Description: Unspecified */

/* Bits 31..16 :   */
#define RADIO_PACKETCNTR2_FIELD1_Pos (16UL) /*!< Position of FIELD1 field. */
#define RADIO_PACKETCNTR2_FIELD1_Msk (0xFFFFUL << RADIO_PACKETCNTR2_FIELD1_Pos) /*!< Bit mask of FIELD1 field. */

/* Bits 15..0 :   */
#define RADIO_PACKETCNTR2_FIELD0_Pos (0UL) /*!< Position of FIELD0 field. */
#define RADIO_PACKETCNTR2_FIELD0_Msk (0xFFFFUL << RADIO_PACKETCNTR2_FIELD0_Pos) /*!< Bit mask of FIELD0 field. */

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

/* Register: RADIO_HYPSTDCHECKSTAT_TODO_FIX_NAMING */
/* Description: Unspecified */

/* Bits 24..16 :   */
#define RADIO_HYPSTDCHECKSTAT_TODO_FIX_NAMING_FIELD3_Pos (16UL) /*!< Position of FIELD3 field. */
#define RADIO_HYPSTDCHECKSTAT_TODO_FIX_NAMING_FIELD3_Msk (0x1FFUL << RADIO_HYPSTDCHECKSTAT_TODO_FIX_NAMING_FIELD3_Pos) /*!< Bit mask of FIELD3 field. */

/* Bits 11..8 :   */
#define RADIO_HYPSTDCHECKSTAT_TODO_FIX_NAMING_FIELD2_Pos (8UL) /*!< Position of FIELD2 field. */
#define RADIO_HYPSTDCHECKSTAT_TODO_FIX_NAMING_FIELD2_Msk (0xFUL << RADIO_HYPSTDCHECKSTAT_TODO_FIX_NAMING_FIELD2_Pos) /*!< Bit mask of FIELD2 field. */

/* Bits 7..4 :   */
#define RADIO_HYPSTDCHECKSTAT_TODO_FIX_NAMING_FIELD1_Pos (4UL) /*!< Position of FIELD1 field. */
#define RADIO_HYPSTDCHECKSTAT_TODO_FIX_NAMING_FIELD1_Msk (0xFUL << RADIO_HYPSTDCHECKSTAT_TODO_FIX_NAMING_FIELD1_Pos) /*!< Bit mask of FIELD1 field. */

/* Bits 3..0 :   */
#define RADIO_HYPSTDCHECKSTAT_TODO_FIX_NAMING_FIELD0_Pos (0UL) /*!< Position of FIELD0 field. */
#define RADIO_HYPSTDCHECKSTAT_TODO_FIX_NAMING_FIELD0_Msk (0xFUL << RADIO_HYPSTDCHECKSTAT_TODO_FIX_NAMING_FIELD0_Pos) /*!< Bit mask of FIELD0 field. */

/* Register: RADIO_HYPSTDAADIFFVEC_TODO_FIX_NAMING */
/* Description: Unspecified */

/* Bits 15..0 :   */
#define RADIO_HYPSTDAADIFFVEC_TODO_FIX_NAMING_FIELD0_Pos (0UL) /*!< Position of FIELD0 field. */
#define RADIO_HYPSTDAADIFFVEC_TODO_FIX_NAMING_FIELD0_Msk (0xFFFFUL << RADIO_HYPSTDAADIFFVEC_TODO_FIX_NAMING_FIELD0_Pos) /*!< Bit mask of FIELD0 field. */

/* Register: RADIO_ADDRSAFECONF */
/* Description: Unspecified */

/* Bits 28..24 :   */
#define RADIO_ADDRSAFECONF_FIELD3_Pos (24UL) /*!< Position of FIELD3 field. */
#define RADIO_ADDRSAFECONF_FIELD3_Msk (0x1FUL << RADIO_ADDRSAFECONF_FIELD3_Pos) /*!< Bit mask of FIELD3 field. */

/* Bits 20..16 :   */
#define RADIO_ADDRSAFECONF_FIELD2_Pos (16UL) /*!< Position of FIELD2 field. */
#define RADIO_ADDRSAFECONF_FIELD2_Msk (0x1FUL << RADIO_ADDRSAFECONF_FIELD2_Pos) /*!< Bit mask of FIELD2 field. */

/* Bits 12..8 :   */
#define RADIO_ADDRSAFECONF_FIELD1_Pos (8UL) /*!< Position of FIELD1 field. */
#define RADIO_ADDRSAFECONF_FIELD1_Msk (0x1FUL << RADIO_ADDRSAFECONF_FIELD1_Pos) /*!< Bit mask of FIELD1 field. */

/* Bits 4..0 :   */
#define RADIO_ADDRSAFECONF_FIELD0_Pos (0UL) /*!< Position of FIELD0 field. */
#define RADIO_ADDRSAFECONF_FIELD0_Msk (0x1FUL << RADIO_ADDRSAFECONF_FIELD0_Pos) /*!< Bit mask of FIELD0 field. */

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
#define RADIO_CTEINLINECONF_CTEINLINERXMODE2US_8us (0UL) /*!< 8us */
#define RADIO_CTEINLINECONF_CTEINLINERXMODE2US_4us (1UL) /*!< 4us */
#define RADIO_CTEINLINECONF_CTEINLINERXMODE2US_2us (2UL) /*!< 2us */
#define RADIO_CTEINLINECONF_CTEINLINERXMODE2US_1us (3UL) /*!< 1us */
#define RADIO_CTEINLINECONF_CTEINLINERXMODE2US_500ns (4UL) /*!< 0.5us */
#define RADIO_CTEINLINECONF_CTEINLINERXMODE2US_250ns (5UL) /*!< 0.25us */
#define RADIO_CTEINLINECONF_CTEINLINERXMODE2US_125ns (6UL) /*!< 0.125us */

/* Bits 12..10 : Spacing between samples for the samples in the SWITCHING period when CTEINLINEMODE is set */
#define RADIO_CTEINLINECONF_CTEINLINERXMODE1US_Pos (10UL) /*!< Position of CTEINLINERXMODE1US field. */
#define RADIO_CTEINLINECONF_CTEINLINERXMODE1US_Msk (0x7UL << RADIO_CTEINLINECONF_CTEINLINERXMODE1US_Pos) /*!< Bit mask of CTEINLINERXMODE1US field. */
#define RADIO_CTEINLINECONF_CTEINLINERXMODE1US_8us (0UL) /*!< 8us */
#define RADIO_CTEINLINECONF_CTEINLINERXMODE1US_4us (1UL) /*!< 4us */
#define RADIO_CTEINLINECONF_CTEINLINERXMODE1US_2us (2UL) /*!< 2us */
#define RADIO_CTEINLINECONF_CTEINLINERXMODE1US_1us (3UL) /*!< 1us */
#define RADIO_CTEINLINECONF_CTEINLINERXMODE1US_500ns (4UL) /*!< 0.5us */
#define RADIO_CTEINLINECONF_CTEINLINERXMODE1US_250ns (5UL) /*!< 0.25us */
#define RADIO_CTEINLINECONF_CTEINLINERXMODE1US_125ns (6UL) /*!< 0.125us */

/* Bits 7..6 : Max range of CTETime */
#define RADIO_CTEINLINECONF_CTETIMEVALIDRANGE_Pos (6UL) /*!< Position of CTETIMEVALIDRANGE field. */
#define RADIO_CTEINLINECONF_CTETIMEVALIDRANGE_Msk (0x3UL << RADIO_CTEINLINECONF_CTETIMEVALIDRANGE_Pos) /*!< Bit mask of CTETIMEVALIDRANGE field. */
#define RADIO_CTEINLINECONF_CTETIMEVALIDRANGE_20 (0UL) /*!< 20 in 8us unit (default) Set to 20 if parsed CTETime is larger han 20 */
#define RADIO_CTEINLINECONF_CTETIMEVALIDRANGE_31 (1UL) /*!< 31 in 8us unit */
#define RADIO_CTEINLINECONF_CTETIMEVALIDRANGE_63 (2UL) /*!< 63 in 8us unit */

/* Bit 5 : CTE is continuously output after CRC and only stopped by triggering TASKS_STOP. This is typically used together with the DFEEND to STOP short. AoA/AoD procedure duration is still controlled by DFECTRL1.NUMBEROF8S / CTETIME */
#define RADIO_CTEINLINECONF_CTEFORCEON_Pos (5UL) /*!< Position of CTEFORCEON field. */
#define RADIO_CTEINLINECONF_CTEFORCEON_Msk (0x1UL << RADIO_CTEINLINECONF_CTEFORCEON_Pos) /*!< Bit mask of CTEFORCEON field. */
#define RADIO_CTEINLINECONF_CTEFORCEON_No (0UL) /*!< CTE duration is automatically determined by DFECTRL1.NUMBEROF8US / CTETIME (only correct for 1Mbps and 2Mbps modes) */
#define RADIO_CTEINLINECONF_CTEFORCEON_Yes (1UL) /*!< CTE is continuously transmitted after CRC until TASKS_STOP */

/* Bit 4 : Sampling/switching if CRC is not OK */
#define RADIO_CTEINLINECONF_CTEERRORHANDLING_Pos (4UL) /*!< Position of CTEERRORHANDLING field. */
#define RADIO_CTEINLINECONF_CTEERRORHANDLING_Msk (0x1UL << RADIO_CTEINLINECONF_CTEERRORHANDLING_Pos) /*!< Bit mask of CTEERRORHANDLING field. */
#define RADIO_CTEINLINECONF_CTEERRORHANDLING_No (0UL) /*!< No sampling and antenna switching when CRC is not OK */
#define RADIO_CTEINLINECONF_CTEERRORHANDLING_Yes (1UL) /*!< Sampling and antenna switching also when CRC is not OK */

/* Bit 3 : CTEInfo is S1 byte or not */
#define RADIO_CTEINLINECONF_CTEINFOINS1_Pos (3UL) /*!< Position of CTEINFOINS1 field. */
#define RADIO_CTEINLINECONF_CTEINFOINS1_Msk (0x1UL << RADIO_CTEINLINECONF_CTEINFOINS1_Pos) /*!< Bit mask of CTEINFOINS1 field. */
#define RADIO_CTEINLINECONF_CTEINFOINS1_NotInS1 (0UL) /*!< CTEInfo is NOT in S1 byte (advertising PDU) */
#define RADIO_CTEINLINECONF_CTEINFOINS1_InS1 (1UL) /*!< CTEInfo is in S1 byte (data PDU) */

/* Bit 0 : Enable parsing of CTEInfo from received packet in BLE modes */
#define RADIO_CTEINLINECONF_CTEINLINECTRLEN_Pos (0UL) /*!< Position of CTEINLINECTRLEN field. */
#define RADIO_CTEINLINECONF_CTEINLINECTRLEN_Msk (0x1UL << RADIO_CTEINLINECONF_CTEINLINECTRLEN_Pos) /*!< Bit mask of CTEINLINECTRLEN field. */
#define RADIO_CTEINLINECONF_CTEINLINECTRLEN_Disabled (0UL) /*!< Parsing of CTEInfo is disabled */
#define RADIO_CTEINLINECONF_CTEINLINECTRLEN_Enabled (1UL) /*!< Parsing of CTEInfo is enabled */

/* Register: RADIO_TASK_TRIG_START_CHAIN */
/* Description: Unspecified */

/* Bit 0 :   */
#define RADIO_TASK_TRIG_START_CHAIN_TASK_TRIG_START_CHAIN_Pos (0UL) /*!< Position of TASK_TRIG_START_CHAIN field. */
#define RADIO_TASK_TRIG_START_CHAIN_TASK_TRIG_START_CHAIN_Msk (0x1UL << RADIO_TASK_TRIG_START_CHAIN_TASK_TRIG_START_CHAIN_Pos) /*!< Bit mask of TASK_TRIG_START_CHAIN field. */

/* Register: RADIO_TASK_TRIG_STOP_CHAIN */
/* Description: Unspecified */

/* Bit 0 :   */
#define RADIO_TASK_TRIG_STOP_CHAIN_TASK_TRIG_STOP_CHAIN_Pos (0UL) /*!< Position of TASK_TRIG_STOP_CHAIN field. */
#define RADIO_TASK_TRIG_STOP_CHAIN_TASK_TRIG_STOP_CHAIN_Msk (0x1UL << RADIO_TASK_TRIG_STOP_CHAIN_TASK_TRIG_STOP_CHAIN_Pos) /*!< Bit mask of TASK_TRIG_STOP_CHAIN field. */

/* Register: RADIO_ENABLE_CHAIN */
/* Description: Unspecified */

/* Bit 0 :   */
#define RADIO_ENABLE_CHAIN_ENABLE_CHAIN_Pos (0UL) /*!< Position of ENABLE_CHAIN field. */
#define RADIO_ENABLE_CHAIN_ENABLE_CHAIN_Msk (0x1UL << RADIO_ENABLE_CHAIN_ENABLE_CHAIN_Pos) /*!< Bit mask of ENABLE_CHAIN field. */

/* Register: RADIO_PACKETPTR */
/* Description: Packet pointer */

/* Bit 29 :   */
#define RADIO_PACKETPTR_BASE_Pos (29UL) /*!< Position of BASE field. */
#define RADIO_PACKETPTR_BASE_Msk (0x1UL << RADIO_PACKETPTR_BASE_Pos) /*!< Bit mask of BASE field. */

/* Bits 15..0 :   */
#define RADIO_PACKETPTR_OFFSET_Pos (0UL) /*!< Position of OFFSET field. */
#define RADIO_PACKETPTR_OFFSET_Msk (0xFFFFUL << RADIO_PACKETPTR_OFFSET_Pos) /*!< Bit mask of OFFSET field. */

/* Register: RADIO_AMOUNT_CHAIN */
/* Description: Unspecified */

/* Bit 0 :   */
#define RADIO_AMOUNT_CHAIN_AMOUNT_CHAIN_Pos (0UL) /*!< Position of AMOUNT_CHAIN field. */
#define RADIO_AMOUNT_CHAIN_AMOUNT_CHAIN_Msk (0x1UL << RADIO_AMOUNT_CHAIN_AMOUNT_CHAIN_Pos) /*!< Bit mask of AMOUNT_CHAIN field. */

/* Register: RADIO_MAXCNT_CHAIN */
/* Description: Unspecified */

/* Bit 0 :   */
#define RADIO_MAXCNT_CHAIN_MAXCNT_CHAIN_Pos (0UL) /*!< Position of MAXCNT_CHAIN field. */
#define RADIO_MAXCNT_CHAIN_MAXCNT_CHAIN_Msk (0x1UL << RADIO_MAXCNT_CHAIN_MAXCNT_CHAIN_Pos) /*!< Bit mask of MAXCNT_CHAIN field. */

/* Register: RADIO_TXCONFIG */
/* Description: Tx configuration- */

/* Bit 29 : Enable long range mode (Do not enable both IEEE802154 and BLELONGRANGE) */
#define RADIO_TXCONFIG_BLELONGRANGE_Pos (29UL) /*!< Position of BLELONGRANGE field. */
#define RADIO_TXCONFIG_BLELONGRANGE_Msk (0x1UL << RADIO_TXCONFIG_BLELONGRANGE_Pos) /*!< Bit mask of BLELONGRANGE field. */
#define RADIO_TXCONFIG_BLELONGRANGE_Disable (0UL) /*!< BLELONGRANGE_NO */
#define RADIO_TXCONFIG_BLELONGRANGE_Enable (1UL) /*!< BLELONGRANGE_YES */

/* Bit 28 : Enable 15.4 mode (Do not enable both IEEE802154 and BLELONGRANGE) */
#define RADIO_TXCONFIG_IEEE802154_Pos (28UL) /*!< Position of IEEE802154 field. */
#define RADIO_TXCONFIG_IEEE802154_Msk (0x1UL << RADIO_TXCONFIG_IEEE802154_Pos) /*!< Bit mask of IEEE802154 field. */
#define RADIO_TXCONFIG_IEEE802154_Disable (0UL) /*!< IEEE802154_NO */
#define RADIO_TXCONFIG_IEEE802154_Enable (1UL) /*!< IEEE802154_YES */

/* Bits 27..25 : IQMOD modulation index. */
#define RADIO_TXCONFIG_IQMODINDEX_Pos (25UL) /*!< Position of IQMODINDEX field. */
#define RADIO_TXCONFIG_IQMODINDEX_Msk (0x7UL << RADIO_TXCONFIG_IQMODINDEX_Pos) /*!< Bit mask of IQMODINDEX field. */
#define RADIO_TXCONFIG_IQMODINDEX_ModIndex_0h25 (0UL) /*!< MODINDEX_0H25 */
#define RADIO_TXCONFIG_IQMODINDEX_ModIndex_0h32 (1UL) /*!< MODINDEX_0H32 */
#define RADIO_TXCONFIG_IQMODINDEX_ModIndex_0h5 (2UL) /*!< MODINDEX_0H5 */
#define RADIO_TXCONFIG_IQMODINDEX_ModIndex_1h0 (3UL) /*!< MODINDEX_1H0 */
#define RADIO_TXCONFIG_IQMODINDEX_ModIndex_2h0 (4UL) /*!< MODINDEX_2H0 */
#define RADIO_TXCONFIG_IQMODINDEX_Reserved_5 (5UL) /*!< MODINDEX_RESERVED5 */
#define RADIO_TXCONFIG_IQMODINDEX_Reserved_6 (6UL) /*!< MODINDEX_RESERVED6 */
#define RADIO_TXCONFIG_IQMODINDEX_Reserved_7 (7UL) /*!< MODINDEX_RESERVED7 */

/* Bits 23..22 : IQMOD GFSK bandwidth. */
#define RADIO_TXCONFIG_IQMODBT_Pos (22UL) /*!< Position of IQMODBT field. */
#define RADIO_TXCONFIG_IQMODBT_Msk (0x3UL << RADIO_TXCONFIG_IQMODBT_Pos) /*!< Bit mask of IQMODBT field. */
#define RADIO_TXCONFIG_IQMODBT_0bt55 (0UL) /*!< 0bt55 */
#define RADIO_TXCONFIG_IQMODBT_0bt60 (1UL) /*!< 0bt60 */
#define RADIO_TXCONFIG_IQMODBT_Reserved_2 (2UL) /*!< MODBT_RESERVED2 */

/* Bits 21..19 : IQMOD additional symbol mapping not set by MODE. */
#define RADIO_TXCONFIG_IQMODSYMBOL_Pos (19UL) /*!< Position of IQMODSYMBOL field. */
#define RADIO_TXCONFIG_IQMODSYMBOL_Msk (0x7UL << RADIO_TXCONFIG_IQMODSYMBOL_Pos) /*!< Bit mask of IQMODSYMBOL field. */

/* Bit 18 : Enable IQ modulator. */
#define RADIO_TXCONFIG_IQMODENABLE_Pos (18UL) /*!< Position of IQMODENABLE field. */
#define RADIO_TXCONFIG_IQMODENABLE_Msk (0x1UL << RADIO_TXCONFIG_IQMODENABLE_Pos) /*!< Bit mask of IQMODENABLE field. */

/* Bit 17 : Bypass MSK precoding. */
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
#define RADIO_MODRATE_MODRATE_250k (0UL) /*!< 250 kbps */
#define RADIO_MODRATE_MODRATE_500k (1UL) /*!< 500 kbps */
#define RADIO_MODRATE_MODRATE_1M (2UL) /*!< 1 Mbps */
#define RADIO_MODRATE_MODRATE_2M (3UL) /*!< 2 Mbps */
#define RADIO_MODRATE_MODRATE_4M (4UL) /*!< 4 Mbps */

/* Register: RADIO_MODFILTERING */
/* Description: Select gaussian filtering mode */

/* Bits 1..0 : Select gaussian filtering mode */
#define RADIO_MODFILTERING_MODFILTERING_Pos (0UL) /*!< Position of MODFILTERING field. */
#define RADIO_MODFILTERING_MODFILTERING_Msk (0x3UL << RADIO_MODFILTERING_MODFILTERING_Pos) /*!< Bit mask of MODFILTERING field. */
#define RADIO_MODFILTERING_MODFILTERING_None (0UL) /*!< No filtering */
#define RADIO_MODFILTERING_MODFILTERING_0bt55 (1UL) /*!< Gfsk Bt=0.55 */
#define RADIO_MODFILTERING_MODFILTERING_0bt60 (2UL) /*!< Gfsk Bt=0.60 */

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
#define RADIO_FSASYNCBUSCONF_IGNORE_CLOCK_STARTED_Pos (3UL) /*!< Position of IGNORE_CLOCK_STARTED field. */
#define RADIO_FSASYNCBUSCONF_IGNORE_CLOCK_STARTED_Msk (0x1UL << RADIO_FSASYNCBUSCONF_IGNORE_CLOCK_STARTED_Pos) /*!< Bit mask of IGNORE_CLOCK_STARTED field. */

/* Bit 2 : When 1, check the first transaction during sending auto. If errorenous stop the state machine */
#define RADIO_FSASYNCBUSCONF_CHECKSTATUS_AUTO_Pos (2UL) /*!< Position of CHECKSTATUS_AUTO field. */
#define RADIO_FSASYNCBUSCONF_CHECKSTATUS_AUTO_Msk (0x1UL << RADIO_FSASYNCBUSCONF_CHECKSTATUS_AUTO_Pos) /*!< Bit mask of CHECKSTATUS_AUTO field. */

/* Bit 1 : Do not send settings at the beginning to AdPll */
#define RADIO_FSASYNCBUSCONF_DISABLE_AUTO_SETTING_Pos (1UL) /*!< Position of DISABLE_AUTO_SETTING field. */
#define RADIO_FSASYNCBUSCONF_DISABLE_AUTO_SETTING_Msk (0x1UL << RADIO_FSASYNCBUSCONF_DISABLE_AUTO_SETTING_Pos) /*!< Bit mask of DISABLE_AUTO_SETTING field. */

/* Bit 0 : When 1, every transaction uses 8 x 32 MHz clock cycles instead of 4 x 32 MHz clock cycles. Confirmation is received whether the transaction was actually received by AdPll. */
#define RADIO_FSASYNCBUSCONF_CHECKSTATUS_Pos (0UL) /*!< Position of CHECKSTATUS field. */
#define RADIO_FSASYNCBUSCONF_CHECKSTATUS_Msk (0x1UL << RADIO_FSASYNCBUSCONF_CHECKSTATUS_Pos) /*!< Bit mask of CHECKSTATUS field. */

/* Register: RADIO_FSASYNCBUSBUSY */
/* Description: Status bit indicating whether the bus is currently busy or not */

/* Bit 0 : Whether the bus is currently busy or not */
#define RADIO_FSASYNCBUSBUSY_FSASYNCBUSBUSY_Pos (0UL) /*!< Position of FSASYNCBUSBUSY field. */
#define RADIO_FSASYNCBUSBUSY_FSASYNCBUSBUSY_Msk (0x1UL << RADIO_FSASYNCBUSBUSY_FSASYNCBUSBUSY_Pos) /*!< Bit mask of FSASYNCBUSBUSY field. */

/* Register: RADIO_VARIOUS_BACKDOORS */
/* Description: This value is written to the AdPll when powering up the digital island */

/* Bits 9..8 : 0: no relock, 1: first gear of TRK, 2: back to ACQ, 3: back to full lock */
#define RADIO_VARIOUS_BACKDOORS_RELOAD_FREQ_WILL_TRIGGER_Pos (8UL) /*!< Position of RELOAD_FREQ_WILL_TRIGGER field. */
#define RADIO_VARIOUS_BACKDOORS_RELOAD_FREQ_WILL_TRIGGER_Msk (0x3UL << RADIO_VARIOUS_BACKDOORS_RELOAD_FREQ_WILL_TRIGGER_Pos) /*!< Bit mask of RELOAD_FREQ_WILL_TRIGGER field. */

/* Bits 5..4 : 0: no relock, 1: first gear of TRK, 2: back to ACQ, 3: back to full lock */
#define RADIO_VARIOUS_BACKDOORS_ON_THE_FLY_WILL_TRIGGER_Pos (4UL) /*!< Position of ON_THE_FLY_WILL_TRIGGER field. */
#define RADIO_VARIOUS_BACKDOORS_ON_THE_FLY_WILL_TRIGGER_Msk (0x3UL << RADIO_VARIOUS_BACKDOORS_ON_THE_FLY_WILL_TRIGGER_Pos) /*!< Bit mask of ON_THE_FLY_WILL_TRIGGER field. */

/* Bit 3 : Whether ck32MCore is active or not when OVR_EN_CK32MCORE is set. See also description of OVR_EN_CK32MCORE */
#define RADIO_VARIOUS_BACKDOORS_OVR_VAL_CK32MCORE_Pos (3UL) /*!< Position of OVR_VAL_CK32MCORE field. */
#define RADIO_VARIOUS_BACKDOORS_OVR_VAL_CK32MCORE_Msk (0x1UL << RADIO_VARIOUS_BACKDOORS_OVR_VAL_CK32MCORE_Pos) /*!< Bit mask of OVR_VAL_CK32MCORE field. */

/* Bit 2 : Make it possible to manually control whether ck32MCore is sent to the AdPll digital island. Needed to test complete clock silence in the AdPll island. It can also be used to enable the clock activity on the clock net even when the clock is not selected. */
#define RADIO_VARIOUS_BACKDOORS_OVR_EN_CK32MCORE_Pos (2UL) /*!< Position of OVR_EN_CK32MCORE field. */
#define RADIO_VARIOUS_BACKDOORS_OVR_EN_CK32MCORE_Msk (0x1UL << RADIO_VARIOUS_BACKDOORS_OVR_EN_CK32MCORE_Pos) /*!< Bit mask of OVR_EN_CK32MCORE field. */

/* Bit 1 : In normal operation we request clock when pwrupFsLdoDig0 is set. By setting this to 1, we will request clock even when pwrupFsLdoDig0. This may be useful for current measurements of FS_DIG */
#define RADIO_VARIOUS_BACKDOORS_REQUEST_CLOCK_OVERRIDE_Pos (1UL) /*!< Position of REQUEST_CLOCK_OVERRIDE field. */
#define RADIO_VARIOUS_BACKDOORS_REQUEST_CLOCK_OVERRIDE_Msk (0x1UL << RADIO_VARIOUS_BACKDOORS_REQUEST_CLOCK_OVERRIDE_Pos) /*!< Bit mask of REQUEST_CLOCK_OVERRIDE field. */

/* Bit 0 : If 0, we flip the interpretation of the sSel signal (to work around a bug if we have managed to flip it somewhere in the design process) */
#define RADIO_VARIOUS_BACKDOORS_FLIP_SSEL_Pos (0UL) /*!< Position of FLIP_SSEL field. */
#define RADIO_VARIOUS_BACKDOORS_FLIP_SSEL_Msk (0x1UL << RADIO_VARIOUS_BACKDOORS_FLIP_SSEL_Pos) /*!< Bit mask of FLIP_SSEL field. */

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
#define RADIO_IFFREQ_HIGHIF_1MHz (0UL) /*!< 1 MHz IF */
#define RADIO_IFFREQ_HIGHIF_2MHz (1UL) /*!< 2 MHz IF */

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

/* Register: RADIO_RELOADFREQ */
/* Description: Non-official task: AdPll will reread the frequency input signal */

/* Bit 0 :   */
#define RADIO_RELOADFREQ_TRIGGER_Pos (0UL) /*!< Position of TRIGGER field. */
#define RADIO_RELOADFREQ_TRIGGER_Msk (0x1UL << RADIO_RELOADFREQ_TRIGGER_Pos) /*!< Bit mask of TRIGGER field. */

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
/* Description: Non-official event: Completed a transaction to AdPll successfully ((only when CHECKSTATUS is set) */

/* Bit 0 :   */
#define RADIO_COMPLETETRANS_VAL_Pos (0UL) /*!< Position of VAL field. */
#define RADIO_COMPLETETRANS_VAL_Msk (0x1UL << RADIO_COMPLETETRANS_VAL_Pos) /*!< Bit mask of VAL field. */

/* Register: RADIO_FAILEDTRANS */
/* Description: Non-official event: Did not successfully complete a transaction to AdPll. (only when CHECKSTATUS is set) */

/* Bit 0 :   */
#define RADIO_FAILEDTRANS_VAL_Pos (0UL) /*!< Position of VAL field. */
#define RADIO_FAILEDTRANS_VAL_Msk (0x1UL << RADIO_FAILEDTRANS_VAL_Pos) /*!< Bit mask of VAL field. */

/* Register: RADIO_ADPLL_STARTUP_COMMAND0 */
/* Description: This value is written to the AdPll when powering up the digital island */

/* Bit 31 : When 1, we do not transfer this word to AdPll at power up */
#define RADIO_ADPLL_STARTUP_COMMAND0_DONOTTRANSFER_Pos (31UL) /*!< Position of DONOTTRANSFER field. */
#define RADIO_ADPLL_STARTUP_COMMAND0_DONOTTRANSFER_Msk (0x1UL << RADIO_ADPLL_STARTUP_COMMAND0_DONOTTRANSFER_Pos) /*!< Bit mask of DONOTTRANSFER field. */

/* Bits 27..16 : The address of the digital island to write to */
#define RADIO_ADPLL_STARTUP_COMMAND0_ADDRESS_Pos (16UL) /*!< Position of ADDRESS field. */
#define RADIO_ADPLL_STARTUP_COMMAND0_ADDRESS_Msk (0xFFFUL << RADIO_ADPLL_STARTUP_COMMAND0_ADDRESS_Pos) /*!< Bit mask of ADDRESS field. */

/* Bits 15..0 : The value to be written the register in the digital island */
#define RADIO_ADPLL_STARTUP_COMMAND0_VALUE_Pos (0UL) /*!< Position of VALUE field. */
#define RADIO_ADPLL_STARTUP_COMMAND0_VALUE_Msk (0xFFFFUL << RADIO_ADPLL_STARTUP_COMMAND0_VALUE_Pos) /*!< Bit mask of VALUE field. */

/* Register: RADIO_ADPLL_STARTUP_COMMAND1 */
/* Description: This value is written to the AdPll when powering up the digital island */

/* Bit 31 : When 1, we do not transfer this word to AdPll at power up */
#define RADIO_ADPLL_STARTUP_COMMAND1_DONOTTRANSFER_Pos (31UL) /*!< Position of DONOTTRANSFER field. */
#define RADIO_ADPLL_STARTUP_COMMAND1_DONOTTRANSFER_Msk (0x1UL << RADIO_ADPLL_STARTUP_COMMAND1_DONOTTRANSFER_Pos) /*!< Bit mask of DONOTTRANSFER field. */

/* Bits 27..16 : The address of the digital island to write to */
#define RADIO_ADPLL_STARTUP_COMMAND1_ADDRESS_Pos (16UL) /*!< Position of ADDRESS field. */
#define RADIO_ADPLL_STARTUP_COMMAND1_ADDRESS_Msk (0xFFFUL << RADIO_ADPLL_STARTUP_COMMAND1_ADDRESS_Pos) /*!< Bit mask of ADDRESS field. */

/* Bits 15..0 : The value to be written the register in the digital island */
#define RADIO_ADPLL_STARTUP_COMMAND1_VALUE_Pos (0UL) /*!< Position of VALUE field. */
#define RADIO_ADPLL_STARTUP_COMMAND1_VALUE_Msk (0xFFFFUL << RADIO_ADPLL_STARTUP_COMMAND1_VALUE_Pos) /*!< Bit mask of VALUE field. */

/* Register: RADIO_ADPLL_STARTUP_COMMAND2 */
/* Description: This value is written to the AdPll when powering up the digital island */

/* Bit 31 : When 1, we do not transfer this word to AdPll at power up */
#define RADIO_ADPLL_STARTUP_COMMAND2_DONOTTRANSFER_Pos (31UL) /*!< Position of DONOTTRANSFER field. */
#define RADIO_ADPLL_STARTUP_COMMAND2_DONOTTRANSFER_Msk (0x1UL << RADIO_ADPLL_STARTUP_COMMAND2_DONOTTRANSFER_Pos) /*!< Bit mask of DONOTTRANSFER field. */

/* Bits 27..16 : The address of the digital island to write to */
#define RADIO_ADPLL_STARTUP_COMMAND2_ADDRESS_Pos (16UL) /*!< Position of ADDRESS field. */
#define RADIO_ADPLL_STARTUP_COMMAND2_ADDRESS_Msk (0xFFFUL << RADIO_ADPLL_STARTUP_COMMAND2_ADDRESS_Pos) /*!< Bit mask of ADDRESS field. */

/* Bits 15..0 : The value to be written the register in the digital island */
#define RADIO_ADPLL_STARTUP_COMMAND2_VALUE_Pos (0UL) /*!< Position of VALUE field. */
#define RADIO_ADPLL_STARTUP_COMMAND2_VALUE_Msk (0xFFFFUL << RADIO_ADPLL_STARTUP_COMMAND2_VALUE_Pos) /*!< Bit mask of VALUE field. */

/* Register: RADIO_ADPLL_STARTUP_COMMAND3 */
/* Description: This value is written to the AdPll when powering up the digital island */

/* Bit 31 : When 1, we do not transfer this word to AdPll at power up */
#define RADIO_ADPLL_STARTUP_COMMAND3_DONOTTRANSFER_Pos (31UL) /*!< Position of DONOTTRANSFER field. */
#define RADIO_ADPLL_STARTUP_COMMAND3_DONOTTRANSFER_Msk (0x1UL << RADIO_ADPLL_STARTUP_COMMAND3_DONOTTRANSFER_Pos) /*!< Bit mask of DONOTTRANSFER field. */

/* Bits 27..16 : The address of the digital island to write to */
#define RADIO_ADPLL_STARTUP_COMMAND3_ADDRESS_Pos (16UL) /*!< Position of ADDRESS field. */
#define RADIO_ADPLL_STARTUP_COMMAND3_ADDRESS_Msk (0xFFFUL << RADIO_ADPLL_STARTUP_COMMAND3_ADDRESS_Pos) /*!< Bit mask of ADDRESS field. */

/* Bits 15..0 : The value to be written the register in the digital island */
#define RADIO_ADPLL_STARTUP_COMMAND3_VALUE_Pos (0UL) /*!< Position of VALUE field. */
#define RADIO_ADPLL_STARTUP_COMMAND3_VALUE_Msk (0xFFFFUL << RADIO_ADPLL_STARTUP_COMMAND3_VALUE_Pos) /*!< Bit mask of VALUE field. */

/* Register: RADIO_ADPLL_STARTUP_COMMAND4 */
/* Description: This value is written to the AdPll when powering up the digital island */

/* Bit 31 : When 1, we do not transfer this word to AdPll at power up */
#define RADIO_ADPLL_STARTUP_COMMAND4_DONOTTRANSFER_Pos (31UL) /*!< Position of DONOTTRANSFER field. */
#define RADIO_ADPLL_STARTUP_COMMAND4_DONOTTRANSFER_Msk (0x1UL << RADIO_ADPLL_STARTUP_COMMAND4_DONOTTRANSFER_Pos) /*!< Bit mask of DONOTTRANSFER field. */

/* Bits 27..16 : The address of the digital island to write to */
#define RADIO_ADPLL_STARTUP_COMMAND4_ADDRESS_Pos (16UL) /*!< Position of ADDRESS field. */
#define RADIO_ADPLL_STARTUP_COMMAND4_ADDRESS_Msk (0xFFFUL << RADIO_ADPLL_STARTUP_COMMAND4_ADDRESS_Pos) /*!< Bit mask of ADDRESS field. */

/* Bits 15..0 : The value to be written the register in the digital island */
#define RADIO_ADPLL_STARTUP_COMMAND4_VALUE_Pos (0UL) /*!< Position of VALUE field. */
#define RADIO_ADPLL_STARTUP_COMMAND4_VALUE_Msk (0xFFFFUL << RADIO_ADPLL_STARTUP_COMMAND4_VALUE_Pos) /*!< Bit mask of VALUE field. */

/* Register: RADIO_ADPLL_STARTUP_COMMAND5 */
/* Description: This value is written to the AdPll when powering up the digital island */

/* Bit 31 : When 1, we do not transfer this word to AdPll at power up */
#define RADIO_ADPLL_STARTUP_COMMAND5_DONOTTRANSFER_Pos (31UL) /*!< Position of DONOTTRANSFER field. */
#define RADIO_ADPLL_STARTUP_COMMAND5_DONOTTRANSFER_Msk (0x1UL << RADIO_ADPLL_STARTUP_COMMAND5_DONOTTRANSFER_Pos) /*!< Bit mask of DONOTTRANSFER field. */

/* Bits 27..16 : The address of the digital island to write to */
#define RADIO_ADPLL_STARTUP_COMMAND5_ADDRESS_Pos (16UL) /*!< Position of ADDRESS field. */
#define RADIO_ADPLL_STARTUP_COMMAND5_ADDRESS_Msk (0xFFFUL << RADIO_ADPLL_STARTUP_COMMAND5_ADDRESS_Pos) /*!< Bit mask of ADDRESS field. */

/* Bits 15..0 : The value to be written the register in the digital island */
#define RADIO_ADPLL_STARTUP_COMMAND5_VALUE_Pos (0UL) /*!< Position of VALUE field. */
#define RADIO_ADPLL_STARTUP_COMMAND5_VALUE_Msk (0xFFFFUL << RADIO_ADPLL_STARTUP_COMMAND5_VALUE_Pos) /*!< Bit mask of VALUE field. */

/* Register: RADIO_ADPLL_STARTUP_COMMAND6 */
/* Description: This value is written to the AdPll when powering up the digital island */

/* Bit 31 : When 1, we do not transfer this word to AdPll at power up */
#define RADIO_ADPLL_STARTUP_COMMAND6_DONOTTRANSFER_Pos (31UL) /*!< Position of DONOTTRANSFER field. */
#define RADIO_ADPLL_STARTUP_COMMAND6_DONOTTRANSFER_Msk (0x1UL << RADIO_ADPLL_STARTUP_COMMAND6_DONOTTRANSFER_Pos) /*!< Bit mask of DONOTTRANSFER field. */

/* Bits 27..16 : The address of the digital island to write to */
#define RADIO_ADPLL_STARTUP_COMMAND6_ADDRESS_Pos (16UL) /*!< Position of ADDRESS field. */
#define RADIO_ADPLL_STARTUP_COMMAND6_ADDRESS_Msk (0xFFFUL << RADIO_ADPLL_STARTUP_COMMAND6_ADDRESS_Pos) /*!< Bit mask of ADDRESS field. */

/* Bits 15..0 : The value to be written the register in the digital island */
#define RADIO_ADPLL_STARTUP_COMMAND6_VALUE_Pos (0UL) /*!< Position of VALUE field. */
#define RADIO_ADPLL_STARTUP_COMMAND6_VALUE_Msk (0xFFFFUL << RADIO_ADPLL_STARTUP_COMMAND6_VALUE_Pos) /*!< Bit mask of VALUE field. */

/* Register: RADIO_ADPLL_STARTUP_COMMAND7 */
/* Description: This value is written to the AdPll when powering up the digital island */

/* Bit 31 : When 1, we do not transfer this word to AdPll at power up */
#define RADIO_ADPLL_STARTUP_COMMAND7_DONOTTRANSFER_Pos (31UL) /*!< Position of DONOTTRANSFER field. */
#define RADIO_ADPLL_STARTUP_COMMAND7_DONOTTRANSFER_Msk (0x1UL << RADIO_ADPLL_STARTUP_COMMAND7_DONOTTRANSFER_Pos) /*!< Bit mask of DONOTTRANSFER field. */

/* Bits 27..16 : The address of the digital island to write to */
#define RADIO_ADPLL_STARTUP_COMMAND7_ADDRESS_Pos (16UL) /*!< Position of ADDRESS field. */
#define RADIO_ADPLL_STARTUP_COMMAND7_ADDRESS_Msk (0xFFFUL << RADIO_ADPLL_STARTUP_COMMAND7_ADDRESS_Pos) /*!< Bit mask of ADDRESS field. */

/* Bits 15..0 : The value to be written the register in the digital island */
#define RADIO_ADPLL_STARTUP_COMMAND7_VALUE_Pos (0UL) /*!< Position of VALUE field. */
#define RADIO_ADPLL_STARTUP_COMMAND7_VALUE_Msk (0xFFFFUL << RADIO_ADPLL_STARTUP_COMMAND7_VALUE_Pos) /*!< Bit mask of VALUE field. */

/* Register: RADIO_ADPLLCOMPANION_INTEN */
/* Description: Unspecified */

/* Bits 3..0 :   */
#define RADIO_ADPLLCOMPANION_INTEN_ADPLLCOMPANION_INTEN_Pos (0UL) /*!< Position of ADPLLCOMPANION_INTEN field. */
#define RADIO_ADPLLCOMPANION_INTEN_ADPLLCOMPANION_INTEN_Msk (0xFUL << RADIO_ADPLLCOMPANION_INTEN_ADPLLCOMPANION_INTEN_Pos) /*!< Bit mask of ADPLLCOMPANION_INTEN field. */

/* Register: RADIO_ADPLLCOMPANION_INTENSET */
/* Description: Unspecified */

/* Bits 3..0 :   */
#define RADIO_ADPLLCOMPANION_INTENSET_ADPLLCOMPANION_INTENSET_Pos (0UL) /*!< Position of ADPLLCOMPANION_INTENSET field. */
#define RADIO_ADPLLCOMPANION_INTENSET_ADPLLCOMPANION_INTENSET_Msk (0xFUL << RADIO_ADPLLCOMPANION_INTENSET_ADPLLCOMPANION_INTENSET_Pos) /*!< Bit mask of ADPLLCOMPANION_INTENSET field. */

/* Register: RADIO_ADPLLCOMPANION_INTENCLR */
/* Description: Unspecified */

/* Bits 3..0 :   */
#define RADIO_ADPLLCOMPANION_INTENCLR_ADPLLCOMPANION_INTENCLR_Pos (0UL) /*!< Position of ADPLLCOMPANION_INTENCLR field. */
#define RADIO_ADPLLCOMPANION_INTENCLR_ADPLLCOMPANION_INTENCLR_Msk (0xFUL << RADIO_ADPLLCOMPANION_INTENCLR_ADPLLCOMPANION_INTENCLR_Pos) /*!< Bit mask of ADPLLCOMPANION_INTENCLR field. */

/* Register: RADIO_ADPLLCOMPANION_INTPEND */
/* Description: Unspecified */

/* Bits 3..0 :   */
#define RADIO_ADPLLCOMPANION_INTPEND_ADPLLCOMPANION_INTPEND_Pos (0UL) /*!< Position of ADPLLCOMPANION_INTPEND field. */
#define RADIO_ADPLLCOMPANION_INTPEND_ADPLLCOMPANION_INTPEND_Msk (0xFUL << RADIO_ADPLLCOMPANION_INTPEND_ADPLLCOMPANION_INTPEND_Pos) /*!< Bit mask of ADPLLCOMPANION_INTPEND field. */

/* Register: RADIO_SUBSCRIBE_TXEN */
/* Description: Unspecified */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_TXEN_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_SUBSCRIBE_TXEN_ENABLE_Msk (0x1UL << RADIO_SUBSCRIBE_TXEN_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bits 7..0 :   */
#define RADIO_SUBSCRIBE_TXEN_TASK_Pos (0UL) /*!< Position of TASK field. */
#define RADIO_SUBSCRIBE_TXEN_TASK_Msk (0xFFUL << RADIO_SUBSCRIBE_TXEN_TASK_Pos) /*!< Bit mask of TASK field. */

/* Register: RADIO_SUBSCRIBE_RXEN */
/* Description: Unspecified */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_RXEN_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_SUBSCRIBE_RXEN_ENABLE_Msk (0x1UL << RADIO_SUBSCRIBE_RXEN_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bits 7..0 :   */
#define RADIO_SUBSCRIBE_RXEN_TASK_Pos (0UL) /*!< Position of TASK field. */
#define RADIO_SUBSCRIBE_RXEN_TASK_Msk (0xFFUL << RADIO_SUBSCRIBE_RXEN_TASK_Pos) /*!< Bit mask of TASK field. */

/* Register: RADIO_SUBSCRIBE_START */
/* Description: Unspecified */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_START_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_SUBSCRIBE_START_ENABLE_Msk (0x1UL << RADIO_SUBSCRIBE_START_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bits 7..0 :   */
#define RADIO_SUBSCRIBE_START_TASK_Pos (0UL) /*!< Position of TASK field. */
#define RADIO_SUBSCRIBE_START_TASK_Msk (0xFFUL << RADIO_SUBSCRIBE_START_TASK_Pos) /*!< Bit mask of TASK field. */

/* Register: RADIO_SUBSCRIBE_STOP */
/* Description: Unspecified */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_STOP_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_SUBSCRIBE_STOP_ENABLE_Msk (0x1UL << RADIO_SUBSCRIBE_STOP_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bits 7..0 :   */
#define RADIO_SUBSCRIBE_STOP_TASK_Pos (0UL) /*!< Position of TASK field. */
#define RADIO_SUBSCRIBE_STOP_TASK_Msk (0xFFUL << RADIO_SUBSCRIBE_STOP_TASK_Pos) /*!< Bit mask of TASK field. */

/* Register: RADIO_SUBSCRIBE_DISABLE */
/* Description: Unspecified */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_DISABLE_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_SUBSCRIBE_DISABLE_ENABLE_Msk (0x1UL << RADIO_SUBSCRIBE_DISABLE_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bits 7..0 :   */
#define RADIO_SUBSCRIBE_DISABLE_TASK_Pos (0UL) /*!< Position of TASK field. */
#define RADIO_SUBSCRIBE_DISABLE_TASK_Msk (0xFFUL << RADIO_SUBSCRIBE_DISABLE_TASK_Pos) /*!< Bit mask of TASK field. */

/* Register: RADIO_SUBSCRIBE_RSSISTART */
/* Description: Unspecified */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_RSSISTART_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_SUBSCRIBE_RSSISTART_ENABLE_Msk (0x1UL << RADIO_SUBSCRIBE_RSSISTART_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bits 7..0 :   */
#define RADIO_SUBSCRIBE_RSSISTART_TASK_Pos (0UL) /*!< Position of TASK field. */
#define RADIO_SUBSCRIBE_RSSISTART_TASK_Msk (0xFFUL << RADIO_SUBSCRIBE_RSSISTART_TASK_Pos) /*!< Bit mask of TASK field. */

/* Register: RADIO_SUBSCRIBE_BCSTART */
/* Description: Unspecified */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_BCSTART_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_SUBSCRIBE_BCSTART_ENABLE_Msk (0x1UL << RADIO_SUBSCRIBE_BCSTART_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bits 7..0 :   */
#define RADIO_SUBSCRIBE_BCSTART_TASK_Pos (0UL) /*!< Position of TASK field. */
#define RADIO_SUBSCRIBE_BCSTART_TASK_Msk (0xFFUL << RADIO_SUBSCRIBE_BCSTART_TASK_Pos) /*!< Bit mask of TASK field. */

/* Register: RADIO_SUBSCRIBE_BCSTOP */
/* Description: Unspecified */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_BCSTOP_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_SUBSCRIBE_BCSTOP_ENABLE_Msk (0x1UL << RADIO_SUBSCRIBE_BCSTOP_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bits 7..0 :   */
#define RADIO_SUBSCRIBE_BCSTOP_TASK_Pos (0UL) /*!< Position of TASK field. */
#define RADIO_SUBSCRIBE_BCSTOP_TASK_Msk (0xFFUL << RADIO_SUBSCRIBE_BCSTOP_TASK_Pos) /*!< Bit mask of TASK field. */

/* Register: RADIO_SUBSCRIBE_EDSTART */
/* Description: Unspecified */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_EDSTART_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_SUBSCRIBE_EDSTART_ENABLE_Msk (0x1UL << RADIO_SUBSCRIBE_EDSTART_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bits 7..0 :   */
#define RADIO_SUBSCRIBE_EDSTART_TASK_Pos (0UL) /*!< Position of TASK field. */
#define RADIO_SUBSCRIBE_EDSTART_TASK_Msk (0xFFUL << RADIO_SUBSCRIBE_EDSTART_TASK_Pos) /*!< Bit mask of TASK field. */

/* Register: RADIO_SUBSCRIBE_EDSTOP */
/* Description: Unspecified */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_EDSTOP_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_SUBSCRIBE_EDSTOP_ENABLE_Msk (0x1UL << RADIO_SUBSCRIBE_EDSTOP_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bits 7..0 :   */
#define RADIO_SUBSCRIBE_EDSTOP_TASK_Pos (0UL) /*!< Position of TASK field. */
#define RADIO_SUBSCRIBE_EDSTOP_TASK_Msk (0xFFUL << RADIO_SUBSCRIBE_EDSTOP_TASK_Pos) /*!< Bit mask of TASK field. */

/* Register: RADIO_SUBSCRIBE_CCASTART */
/* Description: Unspecified */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_CCASTART_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_SUBSCRIBE_CCASTART_ENABLE_Msk (0x1UL << RADIO_SUBSCRIBE_CCASTART_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bits 7..0 :   */
#define RADIO_SUBSCRIBE_CCASTART_TASK_Pos (0UL) /*!< Position of TASK field. */
#define RADIO_SUBSCRIBE_CCASTART_TASK_Msk (0xFFUL << RADIO_SUBSCRIBE_CCASTART_TASK_Pos) /*!< Bit mask of TASK field. */

/* Register: RADIO_SUBSCRIBE_CCASTOP */
/* Description: Unspecified */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_CCASTOP_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_SUBSCRIBE_CCASTOP_ENABLE_Msk (0x1UL << RADIO_SUBSCRIBE_CCASTOP_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bits 7..0 :   */
#define RADIO_SUBSCRIBE_CCASTOP_TASK_Pos (0UL) /*!< Position of TASK field. */
#define RADIO_SUBSCRIBE_CCASTOP_TASK_Msk (0xFFUL << RADIO_SUBSCRIBE_CCASTOP_TASK_Pos) /*!< Bit mask of TASK field. */

/* Register: RADIO_SUBSCRIBE_DFESTART */
/* Description: Unspecified */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_DFESTART_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_SUBSCRIBE_DFESTART_ENABLE_Msk (0x1UL << RADIO_SUBSCRIBE_DFESTART_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bits 7..0 :   */
#define RADIO_SUBSCRIBE_DFESTART_TASK_Pos (0UL) /*!< Position of TASK field. */
#define RADIO_SUBSCRIBE_DFESTART_TASK_Msk (0xFFUL << RADIO_SUBSCRIBE_DFESTART_TASK_Pos) /*!< Bit mask of TASK field. */

/* Register: RADIO_SUBSCRIBE_DFESTOP */
/* Description: Unspecified */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_DFESTOP_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_SUBSCRIBE_DFESTOP_ENABLE_Msk (0x1UL << RADIO_SUBSCRIBE_DFESTOP_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bits 7..0 :   */
#define RADIO_SUBSCRIBE_DFESTOP_TASK_Pos (0UL) /*!< Position of TASK field. */
#define RADIO_SUBSCRIBE_DFESTOP_TASK_Msk (0xFFUL << RADIO_SUBSCRIBE_DFESTOP_TASK_Pos) /*!< Bit mask of TASK field. */

/* Register: RADIO_SUBSCRIBE_ACQINJ0DMASTART */
/* Description: Unspecified */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_ACQINJ0DMASTART_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_SUBSCRIBE_ACQINJ0DMASTART_ENABLE_Msk (0x1UL << RADIO_SUBSCRIBE_ACQINJ0DMASTART_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bits 7..0 :   */
#define RADIO_SUBSCRIBE_ACQINJ0DMASTART_TASK_Pos (0UL) /*!< Position of TASK field. */
#define RADIO_SUBSCRIBE_ACQINJ0DMASTART_TASK_Msk (0xFFUL << RADIO_SUBSCRIBE_ACQINJ0DMASTART_TASK_Pos) /*!< Bit mask of TASK field. */

/* Register: RADIO_SUBSCRIBE_ACQINJ0DMASTOP */
/* Description: Unspecified */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_ACQINJ0DMASTOP_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_SUBSCRIBE_ACQINJ0DMASTOP_ENABLE_Msk (0x1UL << RADIO_SUBSCRIBE_ACQINJ0DMASTOP_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bits 7..0 :   */
#define RADIO_SUBSCRIBE_ACQINJ0DMASTOP_TASK_Pos (0UL) /*!< Position of TASK field. */
#define RADIO_SUBSCRIBE_ACQINJ0DMASTOP_TASK_Msk (0xFFUL << RADIO_SUBSCRIBE_ACQINJ0DMASTOP_TASK_Pos) /*!< Bit mask of TASK field. */

/* Register: RADIO_SUBSCRIBE_ACQINJ1DMASTART */
/* Description: Unspecified */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_ACQINJ1DMASTART_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_SUBSCRIBE_ACQINJ1DMASTART_ENABLE_Msk (0x1UL << RADIO_SUBSCRIBE_ACQINJ1DMASTART_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bits 7..0 :   */
#define RADIO_SUBSCRIBE_ACQINJ1DMASTART_TASK_Pos (0UL) /*!< Position of TASK field. */
#define RADIO_SUBSCRIBE_ACQINJ1DMASTART_TASK_Msk (0xFFUL << RADIO_SUBSCRIBE_ACQINJ1DMASTART_TASK_Pos) /*!< Bit mask of TASK field. */

/* Register: RADIO_SUBSCRIBE_ACQINJ1DMASTOP */
/* Description: Unspecified */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_ACQINJ1DMASTOP_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_SUBSCRIBE_ACQINJ1DMASTOP_ENABLE_Msk (0x1UL << RADIO_SUBSCRIBE_ACQINJ1DMASTOP_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bits 7..0 :   */
#define RADIO_SUBSCRIBE_ACQINJ1DMASTOP_TASK_Pos (0UL) /*!< Position of TASK field. */
#define RADIO_SUBSCRIBE_ACQINJ1DMASTOP_TASK_Msk (0xFFUL << RADIO_SUBSCRIBE_ACQINJ1DMASTOP_TASK_Pos) /*!< Bit mask of TASK field. */

/* Register: RADIO_SUBSCRIBE_CNTPSTART */
/* Description: Unspecified */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_CNTPSTART_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_SUBSCRIBE_CNTPSTART_ENABLE_Msk (0x1UL << RADIO_SUBSCRIBE_CNTPSTART_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bits 7..0 :   */
#define RADIO_SUBSCRIBE_CNTPSTART_TASK_Pos (0UL) /*!< Position of TASK field. */
#define RADIO_SUBSCRIBE_CNTPSTART_TASK_Msk (0xFFUL << RADIO_SUBSCRIBE_CNTPSTART_TASK_Pos) /*!< Bit mask of TASK field. */

/* Register: RADIO_SUBSCRIBE_CNTPSTOP */
/* Description: Unspecified */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_CNTPSTOP_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_SUBSCRIBE_CNTPSTOP_ENABLE_Msk (0x1UL << RADIO_SUBSCRIBE_CNTPSTOP_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bits 7..0 :   */
#define RADIO_SUBSCRIBE_CNTPSTOP_TASK_Pos (0UL) /*!< Position of TASK field. */
#define RADIO_SUBSCRIBE_CNTPSTOP_TASK_Msk (0xFFUL << RADIO_SUBSCRIBE_CNTPSTOP_TASK_Pos) /*!< Bit mask of TASK field. */

/* Register: RADIO_SUBSCRIBE_CNTPCLEAR */
/* Description: Unspecified */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_CNTPCLEAR_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_SUBSCRIBE_CNTPCLEAR_ENABLE_Msk (0x1UL << RADIO_SUBSCRIBE_CNTPCLEAR_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bits 7..0 :   */
#define RADIO_SUBSCRIBE_CNTPCLEAR_TASK_Pos (0UL) /*!< Position of TASK field. */
#define RADIO_SUBSCRIBE_CNTPCLEAR_TASK_Msk (0xFFUL << RADIO_SUBSCRIBE_CNTPCLEAR_TASK_Pos) /*!< Bit mask of TASK field. */

/* Register: RADIO_SUBSCRIBE_LOOPBACKEN */
/* Description: Unspecified */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_LOOPBACKEN_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_SUBSCRIBE_LOOPBACKEN_ENABLE_Msk (0x1UL << RADIO_SUBSCRIBE_LOOPBACKEN_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bits 7..0 :   */
#define RADIO_SUBSCRIBE_LOOPBACKEN_TASK_Pos (0UL) /*!< Position of TASK field. */
#define RADIO_SUBSCRIBE_LOOPBACKEN_TASK_Msk (0xFFUL << RADIO_SUBSCRIBE_LOOPBACKEN_TASK_Pos) /*!< Bit mask of TASK field. */

/* Register: RADIO_SUBSCRIBE_CALSTART */
/* Description: Unspecified */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_CALSTART_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_SUBSCRIBE_CALSTART_ENABLE_Msk (0x1UL << RADIO_SUBSCRIBE_CALSTART_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bits 7..0 :   */
#define RADIO_SUBSCRIBE_CALSTART_TASK_Pos (0UL) /*!< Position of TASK field. */
#define RADIO_SUBSCRIBE_CALSTART_TASK_Msk (0xFFUL << RADIO_SUBSCRIBE_CALSTART_TASK_Pos) /*!< Bit mask of TASK field. */

/* Register: RADIO_SUBSCRIBE_CALSTOP */
/* Description: Unspecified */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_CALSTOP_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_SUBSCRIBE_CALSTOP_ENABLE_Msk (0x1UL << RADIO_SUBSCRIBE_CALSTOP_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bits 7..0 :   */
#define RADIO_SUBSCRIBE_CALSTOP_TASK_Pos (0UL) /*!< Position of TASK field. */
#define RADIO_SUBSCRIBE_CALSTOP_TASK_Msk (0xFFUL << RADIO_SUBSCRIBE_CALSTOP_TASK_Pos) /*!< Bit mask of TASK field. */

/* Register: RADIO_SUBSCRIBE_PATESTSTART */
/* Description: Unspecified */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_PATESTSTART_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_SUBSCRIBE_PATESTSTART_ENABLE_Msk (0x1UL << RADIO_SUBSCRIBE_PATESTSTART_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bits 7..0 :   */
#define RADIO_SUBSCRIBE_PATESTSTART_TASK_Pos (0UL) /*!< Position of TASK field. */
#define RADIO_SUBSCRIBE_PATESTSTART_TASK_Msk (0xFFUL << RADIO_SUBSCRIBE_PATESTSTART_TASK_Pos) /*!< Bit mask of TASK field. */

/* Register: RADIO_SUBSCRIBE_PATESTSTOP */
/* Description: Unspecified */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_PATESTSTOP_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_SUBSCRIBE_PATESTSTOP_ENABLE_Msk (0x1UL << RADIO_SUBSCRIBE_PATESTSTOP_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bits 7..0 :   */
#define RADIO_SUBSCRIBE_PATESTSTOP_TASK_Pos (0UL) /*!< Position of TASK field. */
#define RADIO_SUBSCRIBE_PATESTSTOP_TASK_Msk (0xFFUL << RADIO_SUBSCRIBE_PATESTSTOP_TASK_Pos) /*!< Bit mask of TASK field. */

/* Register: RADIO_SUBSCRIBE_CHNOINCR */
/* Description: Unspecified */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_CHNOINCR_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_SUBSCRIBE_CHNOINCR_ENABLE_Msk (0x1UL << RADIO_SUBSCRIBE_CHNOINCR_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bits 7..0 :   */
#define RADIO_SUBSCRIBE_CHNOINCR_TASK_Pos (0UL) /*!< Position of TASK field. */
#define RADIO_SUBSCRIBE_CHNOINCR_TASK_Msk (0xFFUL << RADIO_SUBSCRIBE_CHNOINCR_TASK_Pos) /*!< Bit mask of TASK field. */

/* Register: RADIO_SUBSCRIBE_DMASTART */
/* Description: Unspecified */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_DMASTART_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_SUBSCRIBE_DMASTART_ENABLE_Msk (0x1UL << RADIO_SUBSCRIBE_DMASTART_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bits 7..0 :   */
#define RADIO_SUBSCRIBE_DMASTART_TASK_Pos (0UL) /*!< Position of TASK field. */
#define RADIO_SUBSCRIBE_DMASTART_TASK_Msk (0xFFUL << RADIO_SUBSCRIBE_DMASTART_TASK_Pos) /*!< Bit mask of TASK field. */

/* Register: RADIO_SUBSCRIBE_DMASTOP */
/* Description: Unspecified */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_DMASTOP_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_SUBSCRIBE_DMASTOP_ENABLE_Msk (0x1UL << RADIO_SUBSCRIBE_DMASTOP_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bits 7..0 :   */
#define RADIO_SUBSCRIBE_DMASTOP_TASK_Pos (0UL) /*!< Position of TASK field. */
#define RADIO_SUBSCRIBE_DMASTOP_TASK_Msk (0xFFUL << RADIO_SUBSCRIBE_DMASTOP_TASK_Pos) /*!< Bit mask of TASK field. */

/* Register: RADIO_SUBSCRIBE_DFEDMASTART */
/* Description: Unspecified */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_DFEDMASTART_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_SUBSCRIBE_DFEDMASTART_ENABLE_Msk (0x1UL << RADIO_SUBSCRIBE_DFEDMASTART_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bits 7..0 :   */
#define RADIO_SUBSCRIBE_DFEDMASTART_TASK_Pos (0UL) /*!< Position of TASK field. */
#define RADIO_SUBSCRIBE_DFEDMASTART_TASK_Msk (0xFFUL << RADIO_SUBSCRIBE_DFEDMASTART_TASK_Pos) /*!< Bit mask of TASK field. */

/* Register: RADIO_SUBSCRIBE_DFEDMASTOP */
/* Description: Unspecified */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_DFEDMASTOP_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_SUBSCRIBE_DFEDMASTOP_ENABLE_Msk (0x1UL << RADIO_SUBSCRIBE_DFEDMASTOP_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bits 7..0 :   */
#define RADIO_SUBSCRIBE_DFEDMASTOP_TASK_Pos (0UL) /*!< Position of TASK field. */
#define RADIO_SUBSCRIBE_DFEDMASTOP_TASK_Msk (0xFFUL << RADIO_SUBSCRIBE_DFEDMASTOP_TASK_Pos) /*!< Bit mask of TASK field. */

/* Register: RADIO_SUBSCRIBE_RESERVED31 */
/* Description: Unspecified */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_RESERVED31_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_SUBSCRIBE_RESERVED31_ENABLE_Msk (0x1UL << RADIO_SUBSCRIBE_RESERVED31_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bits 7..0 :   */
#define RADIO_SUBSCRIBE_RESERVED31_TASK_Pos (0UL) /*!< Position of TASK field. */
#define RADIO_SUBSCRIBE_RESERVED31_TASK_Msk (0xFFUL << RADIO_SUBSCRIBE_RESERVED31_TASK_Pos) /*!< Bit mask of TASK field. */

/* Register: RADIO_SUBSCRIBE_GETNEXTDETECT */
/* Description: Unspecified */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_GETNEXTDETECT_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_SUBSCRIBE_GETNEXTDETECT_ENABLE_Msk (0x1UL << RADIO_SUBSCRIBE_GETNEXTDETECT_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bits 7..0 :   */
#define RADIO_SUBSCRIBE_GETNEXTDETECT_TASK_Pos (0UL) /*!< Position of TASK field. */
#define RADIO_SUBSCRIBE_GETNEXTDETECT_TASK_Msk (0xFFUL << RADIO_SUBSCRIBE_GETNEXTDETECT_TASK_Pos) /*!< Bit mask of TASK field. */

/* Register: RADIO_SUBSCRIBE_CLEARDETECTFIFO */
/* Description: Unspecified */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_CLEARDETECTFIFO_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_SUBSCRIBE_CLEARDETECTFIFO_ENABLE_Msk (0x1UL << RADIO_SUBSCRIBE_CLEARDETECTFIFO_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bits 7..0 :   */
#define RADIO_SUBSCRIBE_CLEARDETECTFIFO_TASK_Pos (0UL) /*!< Position of TASK field. */
#define RADIO_SUBSCRIBE_CLEARDETECTFIFO_TASK_Msk (0xFFUL << RADIO_SUBSCRIBE_CLEARDETECTFIFO_TASK_Pos) /*!< Bit mask of TASK field. */

/* Register: RADIO_SUBSCRIBE_RESETDEMODCTRL */
/* Description: Unspecified */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_RESETDEMODCTRL_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_SUBSCRIBE_RESETDEMODCTRL_ENABLE_Msk (0x1UL << RADIO_SUBSCRIBE_RESETDEMODCTRL_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bits 7..0 :   */
#define RADIO_SUBSCRIBE_RESETDEMODCTRL_TASK_Pos (0UL) /*!< Position of TASK field. */
#define RADIO_SUBSCRIBE_RESETDEMODCTRL_TASK_Msk (0xFFUL << RADIO_SUBSCRIBE_RESETDEMODCTRL_TASK_Pos) /*!< Bit mask of TASK field. */

/* Register: RADIO_SUBSCRIBE_DEMODCTRLSTARTTIMER */
/* Description: Unspecified */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_DEMODCTRLSTARTTIMER_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_SUBSCRIBE_DEMODCTRLSTARTTIMER_ENABLE_Msk (0x1UL << RADIO_SUBSCRIBE_DEMODCTRLSTARTTIMER_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bits 7..0 :   */
#define RADIO_SUBSCRIBE_DEMODCTRLSTARTTIMER_TASK_Pos (0UL) /*!< Position of TASK field. */
#define RADIO_SUBSCRIBE_DEMODCTRLSTARTTIMER_TASK_Msk (0xFFUL << RADIO_SUBSCRIBE_DEMODCTRLSTARTTIMER_TASK_Pos) /*!< Bit mask of TASK field. */

/* Register: RADIO_SUBSCRIBE_DEMODCTRLSTOPTIMER */
/* Description: Unspecified */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_DEMODCTRLSTOPTIMER_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_SUBSCRIBE_DEMODCTRLSTOPTIMER_ENABLE_Msk (0x1UL << RADIO_SUBSCRIBE_DEMODCTRLSTOPTIMER_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bits 7..0 :   */
#define RADIO_SUBSCRIBE_DEMODCTRLSTOPTIMER_TASK_Pos (0UL) /*!< Position of TASK field. */
#define RADIO_SUBSCRIBE_DEMODCTRLSTOPTIMER_TASK_Msk (0xFFUL << RADIO_SUBSCRIBE_DEMODCTRLSTOPTIMER_TASK_Pos) /*!< Bit mask of TASK field. */

/* Register: RADIO_SUBSCRIBE_DEMODCTRLCONDEN0 */
/* Description: Unspecified */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_DEMODCTRLCONDEN0_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_SUBSCRIBE_DEMODCTRLCONDEN0_ENABLE_Msk (0x1UL << RADIO_SUBSCRIBE_DEMODCTRLCONDEN0_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bits 7..0 :   */
#define RADIO_SUBSCRIBE_DEMODCTRLCONDEN0_TASK_Pos (0UL) /*!< Position of TASK field. */
#define RADIO_SUBSCRIBE_DEMODCTRLCONDEN0_TASK_Msk (0xFFUL << RADIO_SUBSCRIBE_DEMODCTRLCONDEN0_TASK_Pos) /*!< Bit mask of TASK field. */

/* Register: RADIO_SUBSCRIBE_DEMODCTRLCONDEN1 */
/* Description: Unspecified */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_DEMODCTRLCONDEN1_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_SUBSCRIBE_DEMODCTRLCONDEN1_ENABLE_Msk (0x1UL << RADIO_SUBSCRIBE_DEMODCTRLCONDEN1_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bits 7..0 :   */
#define RADIO_SUBSCRIBE_DEMODCTRLCONDEN1_TASK_Pos (0UL) /*!< Position of TASK field. */
#define RADIO_SUBSCRIBE_DEMODCTRLCONDEN1_TASK_Msk (0xFFUL << RADIO_SUBSCRIBE_DEMODCTRLCONDEN1_TASK_Pos) /*!< Bit mask of TASK field. */

/* Register: RADIO_SUBSCRIBE_DEMODCTRLCONDEN2 */
/* Description: Unspecified */

/* Bit 31 :   */
#define RADIO_SUBSCRIBE_DEMODCTRLCONDEN2_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_SUBSCRIBE_DEMODCTRLCONDEN2_ENABLE_Msk (0x1UL << RADIO_SUBSCRIBE_DEMODCTRLCONDEN2_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bits 7..0 :   */
#define RADIO_SUBSCRIBE_DEMODCTRLCONDEN2_TASK_Pos (0UL) /*!< Position of TASK field. */
#define RADIO_SUBSCRIBE_DEMODCTRLCONDEN2_TASK_Msk (0xFFUL << RADIO_SUBSCRIBE_DEMODCTRLCONDEN2_TASK_Pos) /*!< Bit mask of TASK field. */

/* Register: RADIO_PUBLISH_READY */
/* Description: Unspecified */

/* Bit 31 :   */
#define RADIO_PUBLISH_READY_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_PUBLISH_READY_ENABLE_Msk (0x1UL << RADIO_PUBLISH_READY_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bits 7..0 :   */
#define RADIO_PUBLISH_READY_EVENT_Pos (0UL) /*!< Position of EVENT field. */
#define RADIO_PUBLISH_READY_EVENT_Msk (0xFFUL << RADIO_PUBLISH_READY_EVENT_Pos) /*!< Bit mask of EVENT field. */

/* Register: RADIO_PUBLISH_TXREADY */
/* Description: Unspecified */

/* Bit 31 :   */
#define RADIO_PUBLISH_TXREADY_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_PUBLISH_TXREADY_ENABLE_Msk (0x1UL << RADIO_PUBLISH_TXREADY_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bits 7..0 :   */
#define RADIO_PUBLISH_TXREADY_EVENT_Pos (0UL) /*!< Position of EVENT field. */
#define RADIO_PUBLISH_TXREADY_EVENT_Msk (0xFFUL << RADIO_PUBLISH_TXREADY_EVENT_Pos) /*!< Bit mask of EVENT field. */

/* Register: RADIO_PUBLISH_RXREADY */
/* Description: Unspecified */

/* Bit 31 :   */
#define RADIO_PUBLISH_RXREADY_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_PUBLISH_RXREADY_ENABLE_Msk (0x1UL << RADIO_PUBLISH_RXREADY_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bits 7..0 :   */
#define RADIO_PUBLISH_RXREADY_EVENT_Pos (0UL) /*!< Position of EVENT field. */
#define RADIO_PUBLISH_RXREADY_EVENT_Msk (0xFFUL << RADIO_PUBLISH_RXREADY_EVENT_Pos) /*!< Bit mask of EVENT field. */

/* Register: RADIO_PUBLISH_ADDRESS */
/* Description: Unspecified */

/* Bit 31 :   */
#define RADIO_PUBLISH_ADDRESS_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_PUBLISH_ADDRESS_ENABLE_Msk (0x1UL << RADIO_PUBLISH_ADDRESS_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bits 7..0 :   */
#define RADIO_PUBLISH_ADDRESS_EVENT_Pos (0UL) /*!< Position of EVENT field. */
#define RADIO_PUBLISH_ADDRESS_EVENT_Msk (0xFFUL << RADIO_PUBLISH_ADDRESS_EVENT_Pos) /*!< Bit mask of EVENT field. */

/* Register: RADIO_PUBLISH_FRAMESTART */
/* Description: Unspecified */

/* Bit 31 :   */
#define RADIO_PUBLISH_FRAMESTART_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_PUBLISH_FRAMESTART_ENABLE_Msk (0x1UL << RADIO_PUBLISH_FRAMESTART_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bits 7..0 :   */
#define RADIO_PUBLISH_FRAMESTART_EVENT_Pos (0UL) /*!< Position of EVENT field. */
#define RADIO_PUBLISH_FRAMESTART_EVENT_Msk (0xFFUL << RADIO_PUBLISH_FRAMESTART_EVENT_Pos) /*!< Bit mask of EVENT field. */

/* Register: RADIO_PUBLISH_PAYLOAD */
/* Description: Unspecified */

/* Bit 31 :   */
#define RADIO_PUBLISH_PAYLOAD_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_PUBLISH_PAYLOAD_ENABLE_Msk (0x1UL << RADIO_PUBLISH_PAYLOAD_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bits 7..0 :   */
#define RADIO_PUBLISH_PAYLOAD_EVENT_Pos (0UL) /*!< Position of EVENT field. */
#define RADIO_PUBLISH_PAYLOAD_EVENT_Msk (0xFFUL << RADIO_PUBLISH_PAYLOAD_EVENT_Pos) /*!< Bit mask of EVENT field. */

/* Register: RADIO_PUBLISH_END */
/* Description: Unspecified */

/* Bit 31 :   */
#define RADIO_PUBLISH_END_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_PUBLISH_END_ENABLE_Msk (0x1UL << RADIO_PUBLISH_END_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bits 7..0 :   */
#define RADIO_PUBLISH_END_EVENT_Pos (0UL) /*!< Position of EVENT field. */
#define RADIO_PUBLISH_END_EVENT_Msk (0xFFUL << RADIO_PUBLISH_END_EVENT_Pos) /*!< Bit mask of EVENT field. */

/* Register: RADIO_PUBLISH_PHYEND */
/* Description: Unspecified */

/* Bit 31 :   */
#define RADIO_PUBLISH_PHYEND_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_PUBLISH_PHYEND_ENABLE_Msk (0x1UL << RADIO_PUBLISH_PHYEND_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bits 7..0 :   */
#define RADIO_PUBLISH_PHYEND_EVENT_Pos (0UL) /*!< Position of EVENT field. */
#define RADIO_PUBLISH_PHYEND_EVENT_Msk (0xFFUL << RADIO_PUBLISH_PHYEND_EVENT_Pos) /*!< Bit mask of EVENT field. */

/* Register: RADIO_PUBLISH_DISABLED */
/* Description: Unspecified */

/* Bit 31 :   */
#define RADIO_PUBLISH_DISABLED_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_PUBLISH_DISABLED_ENABLE_Msk (0x1UL << RADIO_PUBLISH_DISABLED_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bits 7..0 :   */
#define RADIO_PUBLISH_DISABLED_EVENT_Pos (0UL) /*!< Position of EVENT field. */
#define RADIO_PUBLISH_DISABLED_EVENT_Msk (0xFFUL << RADIO_PUBLISH_DISABLED_EVENT_Pos) /*!< Bit mask of EVENT field. */

/* Register: RADIO_PUBLISH_DEVMATCH */
/* Description: Unspecified */

/* Bit 31 :   */
#define RADIO_PUBLISH_DEVMATCH_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_PUBLISH_DEVMATCH_ENABLE_Msk (0x1UL << RADIO_PUBLISH_DEVMATCH_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bits 7..0 :   */
#define RADIO_PUBLISH_DEVMATCH_EVENT_Pos (0UL) /*!< Position of EVENT field. */
#define RADIO_PUBLISH_DEVMATCH_EVENT_Msk (0xFFUL << RADIO_PUBLISH_DEVMATCH_EVENT_Pos) /*!< Bit mask of EVENT field. */

/* Register: RADIO_PUBLISH_DEVMISS */
/* Description: Unspecified */

/* Bit 31 :   */
#define RADIO_PUBLISH_DEVMISS_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_PUBLISH_DEVMISS_ENABLE_Msk (0x1UL << RADIO_PUBLISH_DEVMISS_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bits 7..0 :   */
#define RADIO_PUBLISH_DEVMISS_EVENT_Pos (0UL) /*!< Position of EVENT field. */
#define RADIO_PUBLISH_DEVMISS_EVENT_Msk (0xFFUL << RADIO_PUBLISH_DEVMISS_EVENT_Pos) /*!< Bit mask of EVENT field. */

/* Register: RADIO_PUBLISH_CRCOK */
/* Description: Unspecified */

/* Bit 31 :   */
#define RADIO_PUBLISH_CRCOK_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_PUBLISH_CRCOK_ENABLE_Msk (0x1UL << RADIO_PUBLISH_CRCOK_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bits 7..0 :   */
#define RADIO_PUBLISH_CRCOK_EVENT_Pos (0UL) /*!< Position of EVENT field. */
#define RADIO_PUBLISH_CRCOK_EVENT_Msk (0xFFUL << RADIO_PUBLISH_CRCOK_EVENT_Pos) /*!< Bit mask of EVENT field. */

/* Register: RADIO_PUBLISH_CRCERROR */
/* Description: Unspecified */

/* Bit 31 :   */
#define RADIO_PUBLISH_CRCERROR_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_PUBLISH_CRCERROR_ENABLE_Msk (0x1UL << RADIO_PUBLISH_CRCERROR_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bits 7..0 :   */
#define RADIO_PUBLISH_CRCERROR_EVENT_Pos (0UL) /*!< Position of EVENT field. */
#define RADIO_PUBLISH_CRCERROR_EVENT_Msk (0xFFUL << RADIO_PUBLISH_CRCERROR_EVENT_Pos) /*!< Bit mask of EVENT field. */

/* Register: RADIO_PUBLISH_RESERVED13 */
/* Description: Unspecified */

/* Bit 31 :   */
#define RADIO_PUBLISH_RESERVED13_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_PUBLISH_RESERVED13_ENABLE_Msk (0x1UL << RADIO_PUBLISH_RESERVED13_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bits 7..0 :   */
#define RADIO_PUBLISH_RESERVED13_EVENT_Pos (0UL) /*!< Position of EVENT field. */
#define RADIO_PUBLISH_RESERVED13_EVENT_Msk (0xFFUL << RADIO_PUBLISH_RESERVED13_EVENT_Pos) /*!< Bit mask of EVENT field. */

/* Register: RADIO_PUBLISH_BCMATCH */
/* Description: Unspecified */

/* Bit 31 :   */
#define RADIO_PUBLISH_BCMATCH_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_PUBLISH_BCMATCH_ENABLE_Msk (0x1UL << RADIO_PUBLISH_BCMATCH_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bits 7..0 :   */
#define RADIO_PUBLISH_BCMATCH_EVENT_Pos (0UL) /*!< Position of EVENT field. */
#define RADIO_PUBLISH_BCMATCH_EVENT_Msk (0xFFUL << RADIO_PUBLISH_BCMATCH_EVENT_Pos) /*!< Bit mask of EVENT field. */

/* Register: RADIO_PUBLISH_EDEND */
/* Description: Unspecified */

/* Bit 31 :   */
#define RADIO_PUBLISH_EDEND_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_PUBLISH_EDEND_ENABLE_Msk (0x1UL << RADIO_PUBLISH_EDEND_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bits 7..0 :   */
#define RADIO_PUBLISH_EDEND_EVENT_Pos (0UL) /*!< Position of EVENT field. */
#define RADIO_PUBLISH_EDEND_EVENT_Msk (0xFFUL << RADIO_PUBLISH_EDEND_EVENT_Pos) /*!< Bit mask of EVENT field. */

/* Register: RADIO_PUBLISH_EDSTOPPED */
/* Description: Unspecified */

/* Bit 31 :   */
#define RADIO_PUBLISH_EDSTOPPED_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_PUBLISH_EDSTOPPED_ENABLE_Msk (0x1UL << RADIO_PUBLISH_EDSTOPPED_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bits 7..0 :   */
#define RADIO_PUBLISH_EDSTOPPED_EVENT_Pos (0UL) /*!< Position of EVENT field. */
#define RADIO_PUBLISH_EDSTOPPED_EVENT_Msk (0xFFUL << RADIO_PUBLISH_EDSTOPPED_EVENT_Pos) /*!< Bit mask of EVENT field. */

/* Register: RADIO_PUBLISH_CCAIDLE */
/* Description: Unspecified */

/* Bit 31 :   */
#define RADIO_PUBLISH_CCAIDLE_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_PUBLISH_CCAIDLE_ENABLE_Msk (0x1UL << RADIO_PUBLISH_CCAIDLE_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bits 7..0 :   */
#define RADIO_PUBLISH_CCAIDLE_EVENT_Pos (0UL) /*!< Position of EVENT field. */
#define RADIO_PUBLISH_CCAIDLE_EVENT_Msk (0xFFUL << RADIO_PUBLISH_CCAIDLE_EVENT_Pos) /*!< Bit mask of EVENT field. */

/* Register: RADIO_PUBLISH_CCABUSY */
/* Description: Unspecified */

/* Bit 31 :   */
#define RADIO_PUBLISH_CCABUSY_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_PUBLISH_CCABUSY_ENABLE_Msk (0x1UL << RADIO_PUBLISH_CCABUSY_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bits 7..0 :   */
#define RADIO_PUBLISH_CCABUSY_EVENT_Pos (0UL) /*!< Position of EVENT field. */
#define RADIO_PUBLISH_CCABUSY_EVENT_Msk (0xFFUL << RADIO_PUBLISH_CCABUSY_EVENT_Pos) /*!< Bit mask of EVENT field. */

/* Register: RADIO_PUBLISH_CCASTOPPED */
/* Description: Unspecified */

/* Bit 31 :   */
#define RADIO_PUBLISH_CCASTOPPED_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_PUBLISH_CCASTOPPED_ENABLE_Msk (0x1UL << RADIO_PUBLISH_CCASTOPPED_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bits 7..0 :   */
#define RADIO_PUBLISH_CCASTOPPED_EVENT_Pos (0UL) /*!< Position of EVENT field. */
#define RADIO_PUBLISH_CCASTOPPED_EVENT_Msk (0xFFUL << RADIO_PUBLISH_CCASTOPPED_EVENT_Pos) /*!< Bit mask of EVENT field. */

/* Register: RADIO_PUBLISH_RATEBOOST */
/* Description: Unspecified */

/* Bit 31 :   */
#define RADIO_PUBLISH_RATEBOOST_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_PUBLISH_RATEBOOST_ENABLE_Msk (0x1UL << RADIO_PUBLISH_RATEBOOST_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bits 7..0 :   */
#define RADIO_PUBLISH_RATEBOOST_EVENT_Pos (0UL) /*!< Position of EVENT field. */
#define RADIO_PUBLISH_RATEBOOST_EVENT_Msk (0xFFUL << RADIO_PUBLISH_RATEBOOST_EVENT_Pos) /*!< Bit mask of EVENT field. */

/* Register: RADIO_PUBLISH_MHRMATCH */
/* Description: Unspecified */

/* Bit 31 :   */
#define RADIO_PUBLISH_MHRMATCH_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_PUBLISH_MHRMATCH_ENABLE_Msk (0x1UL << RADIO_PUBLISH_MHRMATCH_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bits 7..0 :   */
#define RADIO_PUBLISH_MHRMATCH_EVENT_Pos (0UL) /*!< Position of EVENT field. */
#define RADIO_PUBLISH_MHRMATCH_EVENT_Msk (0xFFUL << RADIO_PUBLISH_MHRMATCH_EVENT_Pos) /*!< Bit mask of EVENT field. */

/* Register: RADIO_PUBLISH_SYNC */
/* Description: Unspecified */

/* Bit 31 :   */
#define RADIO_PUBLISH_SYNC_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_PUBLISH_SYNC_ENABLE_Msk (0x1UL << RADIO_PUBLISH_SYNC_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bits 7..0 :   */
#define RADIO_PUBLISH_SYNC_EVENT_Pos (0UL) /*!< Position of EVENT field. */
#define RADIO_PUBLISH_SYNC_EVENT_Msk (0xFFUL << RADIO_PUBLISH_SYNC_EVENT_Pos) /*!< Bit mask of EVENT field. */

/* Register: RADIO_PUBLISH_CTEPRESENT */
/* Description: Unspecified */

/* Bit 31 :   */
#define RADIO_PUBLISH_CTEPRESENT_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_PUBLISH_CTEPRESENT_ENABLE_Msk (0x1UL << RADIO_PUBLISH_CTEPRESENT_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bits 7..0 :   */
#define RADIO_PUBLISH_CTEPRESENT_EVENT_Pos (0UL) /*!< Position of EVENT field. */
#define RADIO_PUBLISH_CTEPRESENT_EVENT_Msk (0xFFUL << RADIO_PUBLISH_CTEPRESENT_EVENT_Pos) /*!< Bit mask of EVENT field. */

/* Register: RADIO_PUBLISH_CTEWARNING */
/* Description: Unspecified */

/* Bit 31 :   */
#define RADIO_PUBLISH_CTEWARNING_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_PUBLISH_CTEWARNING_ENABLE_Msk (0x1UL << RADIO_PUBLISH_CTEWARNING_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bits 7..0 :   */
#define RADIO_PUBLISH_CTEWARNING_EVENT_Pos (0UL) /*!< Position of EVENT field. */
#define RADIO_PUBLISH_CTEWARNING_EVENT_Msk (0xFFUL << RADIO_PUBLISH_CTEWARNING_EVENT_Pos) /*!< Bit mask of EVENT field. */

/* Register: RADIO_PUBLISH_DFEEND */
/* Description: Unspecified */

/* Bit 31 :   */
#define RADIO_PUBLISH_DFEEND_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_PUBLISH_DFEEND_ENABLE_Msk (0x1UL << RADIO_PUBLISH_DFEEND_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bits 7..0 :   */
#define RADIO_PUBLISH_DFEEND_EVENT_Pos (0UL) /*!< Position of EVENT field. */
#define RADIO_PUBLISH_DFEEND_EVENT_Msk (0xFFUL << RADIO_PUBLISH_DFEEND_EVENT_Pos) /*!< Bit mask of EVENT field. */

/* Register: RADIO_PUBLISH_MODEWRITTEN */
/* Description: Unspecified */

/* Bit 31 :   */
#define RADIO_PUBLISH_MODEWRITTEN_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_PUBLISH_MODEWRITTEN_ENABLE_Msk (0x1UL << RADIO_PUBLISH_MODEWRITTEN_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bits 7..0 :   */
#define RADIO_PUBLISH_MODEWRITTEN_EVENT_Pos (0UL) /*!< Position of EVENT field. */
#define RADIO_PUBLISH_MODEWRITTEN_EVENT_Msk (0xFFUL << RADIO_PUBLISH_MODEWRITTEN_EVENT_Pos) /*!< Bit mask of EVENT field. */

/* Register: RADIO_PUBLISH_MODEREADY */
/* Description: Unspecified */

/* Bit 31 :   */
#define RADIO_PUBLISH_MODEREADY_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_PUBLISH_MODEREADY_ENABLE_Msk (0x1UL << RADIO_PUBLISH_MODEREADY_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bits 7..0 :   */
#define RADIO_PUBLISH_MODEREADY_EVENT_Pos (0UL) /*!< Position of EVENT field. */
#define RADIO_PUBLISH_MODEREADY_EVENT_Msk (0xFFUL << RADIO_PUBLISH_MODEREADY_EVENT_Pos) /*!< Bit mask of EVENT field. */

/* Register: RADIO_PUBLISH_CTEEND */
/* Description: Unspecified */

/* Bit 31 :   */
#define RADIO_PUBLISH_CTEEND_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_PUBLISH_CTEEND_ENABLE_Msk (0x1UL << RADIO_PUBLISH_CTEEND_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bits 7..0 :   */
#define RADIO_PUBLISH_CTEEND_EVENT_Pos (0UL) /*!< Position of EVENT field. */
#define RADIO_PUBLISH_CTEEND_EVENT_Msk (0xFFUL << RADIO_PUBLISH_CTEEND_EVENT_Pos) /*!< Bit mask of EVENT field. */

/* Register: RADIO_PUBLISH_LBREADY */
/* Description: Unspecified */

/* Bit 31 :   */
#define RADIO_PUBLISH_LBREADY_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_PUBLISH_LBREADY_ENABLE_Msk (0x1UL << RADIO_PUBLISH_LBREADY_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bits 7..0 :   */
#define RADIO_PUBLISH_LBREADY_EVENT_Pos (0UL) /*!< Position of EVENT field. */
#define RADIO_PUBLISH_LBREADY_EVENT_Msk (0xFFUL << RADIO_PUBLISH_LBREADY_EVENT_Pos) /*!< Bit mask of EVENT field. */

/* Register: RADIO_PUBLISH_CALDONE */
/* Description: Unspecified */

/* Bit 31 :   */
#define RADIO_PUBLISH_CALDONE_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_PUBLISH_CALDONE_ENABLE_Msk (0x1UL << RADIO_PUBLISH_CALDONE_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bits 7..0 :   */
#define RADIO_PUBLISH_CALDONE_EVENT_Pos (0UL) /*!< Position of EVENT field. */
#define RADIO_PUBLISH_CALDONE_EVENT_Msk (0xFFUL << RADIO_PUBLISH_CALDONE_EVENT_Pos) /*!< Bit mask of EVENT field. */

/* Register: RADIO_PUBLISH_CHNOUPDATED */
/* Description: Unspecified */

/* Bit 31 :   */
#define RADIO_PUBLISH_CHNOUPDATED_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_PUBLISH_CHNOUPDATED_ENABLE_Msk (0x1UL << RADIO_PUBLISH_CHNOUPDATED_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bits 7..0 :   */
#define RADIO_PUBLISH_CHNOUPDATED_EVENT_Pos (0UL) /*!< Position of EVENT field. */
#define RADIO_PUBLISH_CHNOUPDATED_EVENT_Msk (0xFFUL << RADIO_PUBLISH_CHNOUPDATED_EVENT_Pos) /*!< Bit mask of EVENT field. */

/* Register: RADIO_PUBLISH_DBCTIMEOUT */
/* Description: Unspecified */

/* Bit 31 :   */
#define RADIO_PUBLISH_DBCTIMEOUT_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_PUBLISH_DBCTIMEOUT_ENABLE_Msk (0x1UL << RADIO_PUBLISH_DBCTIMEOUT_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bits 7..0 :   */
#define RADIO_PUBLISH_DBCTIMEOUT_EVENT_Pos (0UL) /*!< Position of EVENT field. */
#define RADIO_PUBLISH_DBCTIMEOUT_EVENT_Msk (0xFFUL << RADIO_PUBLISH_DBCTIMEOUT_EVENT_Pos) /*!< Bit mask of EVENT field. */

/* Register: RADIO_PUBLISH_TXTIMERMATCH */
/* Description: Unspecified */

/* Bit 31 :   */
#define RADIO_PUBLISH_TXTIMERMATCH_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_PUBLISH_TXTIMERMATCH_ENABLE_Msk (0x1UL << RADIO_PUBLISH_TXTIMERMATCH_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bits 7..0 :   */
#define RADIO_PUBLISH_TXTIMERMATCH_EVENT_Pos (0UL) /*!< Position of EVENT field. */
#define RADIO_PUBLISH_TXTIMERMATCH_EVENT_Msk (0xFFUL << RADIO_PUBLISH_TXTIMERMATCH_EVENT_Pos) /*!< Bit mask of EVENT field. */

/* Register: RADIO_PUBLISH_RXTIMERMATCH */
/* Description: Unspecified */

/* Bit 31 :   */
#define RADIO_PUBLISH_RXTIMERMATCH_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_PUBLISH_RXTIMERMATCH_ENABLE_Msk (0x1UL << RADIO_PUBLISH_RXTIMERMATCH_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bits 7..0 :   */
#define RADIO_PUBLISH_RXTIMERMATCH_EVENT_Pos (0UL) /*!< Position of EVENT field. */
#define RADIO_PUBLISH_RXTIMERMATCH_EVENT_Msk (0xFFUL << RADIO_PUBLISH_RXTIMERMATCH_EVENT_Pos) /*!< Bit mask of EVENT field. */

/* Register: RADIO_PUBLISH_RESERVED35 */
/* Description: Unspecified */

/* Bit 31 :   */
#define RADIO_PUBLISH_RESERVED35_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_PUBLISH_RESERVED35_ENABLE_Msk (0x1UL << RADIO_PUBLISH_RESERVED35_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bits 7..0 :   */
#define RADIO_PUBLISH_RESERVED35_EVENT_Pos (0UL) /*!< Position of EVENT field. */
#define RADIO_PUBLISH_RESERVED35_EVENT_Msk (0xFFUL << RADIO_PUBLISH_RESERVED35_EVENT_Pos) /*!< Bit mask of EVENT field. */

/* Register: RADIO_PUBLISH_RXDIGEN */
/* Description: Unspecified */

/* Bit 31 :   */
#define RADIO_PUBLISH_RXDIGEN_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_PUBLISH_RXDIGEN_ENABLE_Msk (0x1UL << RADIO_PUBLISH_RXDIGEN_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bits 7..0 :   */
#define RADIO_PUBLISH_RXDIGEN_EVENT_Pos (0UL) /*!< Position of EVENT field. */
#define RADIO_PUBLISH_RXDIGEN_EVENT_Msk (0xFFUL << RADIO_PUBLISH_RXDIGEN_EVENT_Pos) /*!< Bit mask of EVENT field. */

/* Register: RADIO_PUBLISH_RAWDETECT */
/* Description: Unspecified */

/* Bit 31 :   */
#define RADIO_PUBLISH_RAWDETECT_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_PUBLISH_RAWDETECT_ENABLE_Msk (0x1UL << RADIO_PUBLISH_RAWDETECT_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bits 7..0 :   */
#define RADIO_PUBLISH_RAWDETECT_EVENT_Pos (0UL) /*!< Position of EVENT field. */
#define RADIO_PUBLISH_RAWDETECT_EVENT_Msk (0xFFUL << RADIO_PUBLISH_RAWDETECT_EVENT_Pos) /*!< Bit mask of EVENT field. */

/* Register: RADIO_PUBLISH_DETECTFIFOFULL */
/* Description: Unspecified */

/* Bit 31 :   */
#define RADIO_PUBLISH_DETECTFIFOFULL_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_PUBLISH_DETECTFIFOFULL_ENABLE_Msk (0x1UL << RADIO_PUBLISH_DETECTFIFOFULL_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bits 7..0 :   */
#define RADIO_PUBLISH_DETECTFIFOFULL_EVENT_Pos (0UL) /*!< Position of EVENT field. */
#define RADIO_PUBLISH_DETECTFIFOFULL_EVENT_Msk (0xFFUL << RADIO_PUBLISH_DETECTFIFOFULL_EVENT_Pos) /*!< Bit mask of EVENT field. */

/* Register: RADIO_PUBLISH_TIMERWRAPS */
/* Description: Unspecified */

/* Bit 31 :   */
#define RADIO_PUBLISH_TIMERWRAPS_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_PUBLISH_TIMERWRAPS_ENABLE_Msk (0x1UL << RADIO_PUBLISH_TIMERWRAPS_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bits 7..0 :   */
#define RADIO_PUBLISH_TIMERWRAPS_EVENT_Pos (0UL) /*!< Position of EVENT field. */
#define RADIO_PUBLISH_TIMERWRAPS_EVENT_Msk (0xFFUL << RADIO_PUBLISH_TIMERWRAPS_EVENT_Pos) /*!< Bit mask of EVENT field. */

/* Register: RADIO_PUBLISH_STROBETIMETRACKUPDATED */
/* Description: Unspecified */

/* Bit 31 :   */
#define RADIO_PUBLISH_STROBETIMETRACKUPDATED_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_PUBLISH_STROBETIMETRACKUPDATED_ENABLE_Msk (0x1UL << RADIO_PUBLISH_STROBETIMETRACKUPDATED_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bits 7..0 :   */
#define RADIO_PUBLISH_STROBETIMETRACKUPDATED_EVENT_Pos (0UL) /*!< Position of EVENT field. */
#define RADIO_PUBLISH_STROBETIMETRACKUPDATED_EVENT_Msk (0xFFUL << RADIO_PUBLISH_STROBETIMETRACKUPDATED_EVENT_Pos) /*!< Bit mask of EVENT field. */

/* Register: RADIO_PUBLISH_DEMODCTRLCONDTRIGGERED0 */
/* Description: Unspecified */

/* Bit 31 :   */
#define RADIO_PUBLISH_DEMODCTRLCONDTRIGGERED0_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_PUBLISH_DEMODCTRLCONDTRIGGERED0_ENABLE_Msk (0x1UL << RADIO_PUBLISH_DEMODCTRLCONDTRIGGERED0_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bits 7..0 :   */
#define RADIO_PUBLISH_DEMODCTRLCONDTRIGGERED0_EVENT_Pos (0UL) /*!< Position of EVENT field. */
#define RADIO_PUBLISH_DEMODCTRLCONDTRIGGERED0_EVENT_Msk (0xFFUL << RADIO_PUBLISH_DEMODCTRLCONDTRIGGERED0_EVENT_Pos) /*!< Bit mask of EVENT field. */

/* Register: RADIO_PUBLISH_DEMODCTRLCONDTRIGGERED1 */
/* Description: Unspecified */

/* Bit 31 :   */
#define RADIO_PUBLISH_DEMODCTRLCONDTRIGGERED1_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_PUBLISH_DEMODCTRLCONDTRIGGERED1_ENABLE_Msk (0x1UL << RADIO_PUBLISH_DEMODCTRLCONDTRIGGERED1_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bits 7..0 :   */
#define RADIO_PUBLISH_DEMODCTRLCONDTRIGGERED1_EVENT_Pos (0UL) /*!< Position of EVENT field. */
#define RADIO_PUBLISH_DEMODCTRLCONDTRIGGERED1_EVENT_Msk (0xFFUL << RADIO_PUBLISH_DEMODCTRLCONDTRIGGERED1_EVENT_Pos) /*!< Bit mask of EVENT field. */

/* Register: RADIO_PUBLISH_DEMODCTRLCONDTRIGGERED2 */
/* Description: Unspecified */

/* Bit 31 :   */
#define RADIO_PUBLISH_DEMODCTRLCONDTRIGGERED2_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_PUBLISH_DEMODCTRLCONDTRIGGERED2_ENABLE_Msk (0x1UL << RADIO_PUBLISH_DEMODCTRLCONDTRIGGERED2_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bits 7..0 :   */
#define RADIO_PUBLISH_DEMODCTRLCONDTRIGGERED2_EVENT_Pos (0UL) /*!< Position of EVENT field. */
#define RADIO_PUBLISH_DEMODCTRLCONDTRIGGERED2_EVENT_Msk (0xFFUL << RADIO_PUBLISH_DEMODCTRLCONDTRIGGERED2_EVENT_Pos) /*!< Bit mask of EVENT field. */

/* Register: RADIO_PUBLISH_RESERVED44 */
/* Description: Unspecified */

/* Bit 31 :   */
#define RADIO_PUBLISH_RESERVED44_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_PUBLISH_RESERVED44_ENABLE_Msk (0x1UL << RADIO_PUBLISH_RESERVED44_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bits 7..0 :   */
#define RADIO_PUBLISH_RESERVED44_EVENT_Pos (0UL) /*!< Position of EVENT field. */
#define RADIO_PUBLISH_RESERVED44_EVENT_Msk (0xFFUL << RADIO_PUBLISH_RESERVED44_EVENT_Pos) /*!< Bit mask of EVENT field. */

/* Register: RADIO_PUBLISH_RESERVED45 */
/* Description: Unspecified */

/* Bit 31 :   */
#define RADIO_PUBLISH_RESERVED45_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_PUBLISH_RESERVED45_ENABLE_Msk (0x1UL << RADIO_PUBLISH_RESERVED45_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bits 7..0 :   */
#define RADIO_PUBLISH_RESERVED45_EVENT_Pos (0UL) /*!< Position of EVENT field. */
#define RADIO_PUBLISH_RESERVED45_EVENT_Msk (0xFFUL << RADIO_PUBLISH_RESERVED45_EVENT_Pos) /*!< Bit mask of EVENT field. */

/* Register: RADIO_PUBLISH_RESERVED46 */
/* Description: Unspecified */

/* Bit 31 :   */
#define RADIO_PUBLISH_RESERVED46_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_PUBLISH_RESERVED46_ENABLE_Msk (0x1UL << RADIO_PUBLISH_RESERVED46_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bits 7..0 :   */
#define RADIO_PUBLISH_RESERVED46_EVENT_Pos (0UL) /*!< Position of EVENT field. */
#define RADIO_PUBLISH_RESERVED46_EVENT_Msk (0xFFUL << RADIO_PUBLISH_RESERVED46_EVENT_Pos) /*!< Bit mask of EVENT field. */

/* Register: RADIO_PUBLISH_RESERVED47 */
/* Description: Unspecified */

/* Bit 31 :   */
#define RADIO_PUBLISH_RESERVED47_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_PUBLISH_RESERVED47_ENABLE_Msk (0x1UL << RADIO_PUBLISH_RESERVED47_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bits 7..0 :   */
#define RADIO_PUBLISH_RESERVED47_EVENT_Pos (0UL) /*!< Position of EVENT field. */
#define RADIO_PUBLISH_RESERVED47_EVENT_Msk (0xFFUL << RADIO_PUBLISH_RESERVED47_EVENT_Pos) /*!< Bit mask of EVENT field. */

/* Register: RADIO_PUBLISH_ACQINJ0DMAEND */
/* Description: Unspecified */

/* Bit 31 :   */
#define RADIO_PUBLISH_ACQINJ0DMAEND_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_PUBLISH_ACQINJ0DMAEND_ENABLE_Msk (0x1UL << RADIO_PUBLISH_ACQINJ0DMAEND_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bits 7..0 :   */
#define RADIO_PUBLISH_ACQINJ0DMAEND_EVENT_Pos (0UL) /*!< Position of EVENT field. */
#define RADIO_PUBLISH_ACQINJ0DMAEND_EVENT_Msk (0xFFUL << RADIO_PUBLISH_ACQINJ0DMAEND_EVENT_Pos) /*!< Bit mask of EVENT field. */

/* Register: RADIO_PUBLISH_ACQINJ1DMAEND */
/* Description: Unspecified */

/* Bit 31 :   */
#define RADIO_PUBLISH_ACQINJ1DMAEND_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define RADIO_PUBLISH_ACQINJ1DMAEND_ENABLE_Msk (0x1UL << RADIO_PUBLISH_ACQINJ1DMAEND_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Bits 7..0 :   */
#define RADIO_PUBLISH_ACQINJ1DMAEND_EVENT_Pos (0UL) /*!< Position of EVENT field. */
#define RADIO_PUBLISH_ACQINJ1DMAEND_EVENT_Msk (0xFFUL << RADIO_PUBLISH_ACQINJ1DMAEND_EVENT_Pos) /*!< Bit mask of EVENT field. */

/* Register: RADIO_TASK_TRIG_ZERO_PENALTY_PCP_4 */
/* Description: Unspecified */

/* Bit 0 :   */
#define RADIO_TASK_TRIG_ZERO_PENALTY_PCP_4_TASK_TRIG_ZERO_PENALTY_PCP_4_Pos (0UL) /*!< Position of TASK_TRIG_ZERO_PENALTY_PCP_4 field. */
#define RADIO_TASK_TRIG_ZERO_PENALTY_PCP_4_TASK_TRIG_ZERO_PENALTY_PCP_4_Msk (0x1UL << RADIO_TASK_TRIG_ZERO_PENALTY_PCP_4_TASK_TRIG_ZERO_PENALTY_PCP_4_Pos) /*!< Bit mask of TASK_TRIG_ZERO_PENALTY_PCP_4 field. */

/* Register: RADIO_TASK_TRIG_FULL_PENALTY_PCP_4 */
/* Description: Unspecified */

/* Bit 0 :   */
#define RADIO_TASK_TRIG_FULL_PENALTY_PCP_4_TASK_TRIG_FULL_PENALTY_PCP_4_Pos (0UL) /*!< Position of TASK_TRIG_FULL_PENALTY_PCP_4 field. */
#define RADIO_TASK_TRIG_FULL_PENALTY_PCP_4_TASK_TRIG_FULL_PENALTY_PCP_4_Msk (0x1UL << RADIO_TASK_TRIG_FULL_PENALTY_PCP_4_TASK_TRIG_FULL_PENALTY_PCP_4_Pos) /*!< Bit mask of TASK_TRIG_FULL_PENALTY_PCP_4 field. */

/* Register: RADIO_TASK_TRIG_ZERO_PENALTY_PCP_3 */
/* Description: Unspecified */

/* Bit 0 :   */
#define RADIO_TASK_TRIG_ZERO_PENALTY_PCP_3_TASK_TRIG_ZERO_PENALTY_PCP_3_Pos (0UL) /*!< Position of TASK_TRIG_ZERO_PENALTY_PCP_3 field. */
#define RADIO_TASK_TRIG_ZERO_PENALTY_PCP_3_TASK_TRIG_ZERO_PENALTY_PCP_3_Msk (0x1UL << RADIO_TASK_TRIG_ZERO_PENALTY_PCP_3_TASK_TRIG_ZERO_PENALTY_PCP_3_Pos) /*!< Bit mask of TASK_TRIG_ZERO_PENALTY_PCP_3 field. */

/* Register: RADIO_TASK_TRIG_FULL_PENALTY_PCP_3 */
/* Description: Unspecified */

/* Bit 0 :   */
#define RADIO_TASK_TRIG_FULL_PENALTY_PCP_3_TASK_TRIG_FULL_PENALTY_PCP_3_Pos (0UL) /*!< Position of TASK_TRIG_FULL_PENALTY_PCP_3 field. */
#define RADIO_TASK_TRIG_FULL_PENALTY_PCP_3_TASK_TRIG_FULL_PENALTY_PCP_3_Msk (0x1UL << RADIO_TASK_TRIG_FULL_PENALTY_PCP_3_TASK_TRIG_FULL_PENALTY_PCP_3_Pos) /*!< Bit mask of TASK_TRIG_FULL_PENALTY_PCP_3 field. */

/* Register: RADIO_TASK_TRIG_ZERO_PENALTY_PCP_2 */
/* Description: Unspecified */

/* Bit 0 :   */
#define RADIO_TASK_TRIG_ZERO_PENALTY_PCP_2_TASK_TRIG_ZERO_PENALTY_PCP_2_Pos (0UL) /*!< Position of TASK_TRIG_ZERO_PENALTY_PCP_2 field. */
#define RADIO_TASK_TRIG_ZERO_PENALTY_PCP_2_TASK_TRIG_ZERO_PENALTY_PCP_2_Msk (0x1UL << RADIO_TASK_TRIG_ZERO_PENALTY_PCP_2_TASK_TRIG_ZERO_PENALTY_PCP_2_Pos) /*!< Bit mask of TASK_TRIG_ZERO_PENALTY_PCP_2 field. */

/* Register: RADIO_TASK_TRIG_FULL_PENALTY_PCP_2 */
/* Description: Unspecified */

/* Bit 0 :   */
#define RADIO_TASK_TRIG_FULL_PENALTY_PCP_2_TASK_TRIG_FULL_PENALTY_PCP_2_Pos (0UL) /*!< Position of TASK_TRIG_FULL_PENALTY_PCP_2 field. */
#define RADIO_TASK_TRIG_FULL_PENALTY_PCP_2_TASK_TRIG_FULL_PENALTY_PCP_2_Msk (0x1UL << RADIO_TASK_TRIG_FULL_PENALTY_PCP_2_TASK_TRIG_FULL_PENALTY_PCP_2_Pos) /*!< Bit mask of TASK_TRIG_FULL_PENALTY_PCP_2 field. */

/* Register: RADIO_TASK_TRIG_ZERO_PENALTY_PCP_1 */
/* Description: Unspecified */

/* Bit 0 :   */
#define RADIO_TASK_TRIG_ZERO_PENALTY_PCP_1_TASK_TRIG_ZERO_PENALTY_PCP_1_Pos (0UL) /*!< Position of TASK_TRIG_ZERO_PENALTY_PCP_1 field. */
#define RADIO_TASK_TRIG_ZERO_PENALTY_PCP_1_TASK_TRIG_ZERO_PENALTY_PCP_1_Msk (0x1UL << RADIO_TASK_TRIG_ZERO_PENALTY_PCP_1_TASK_TRIG_ZERO_PENALTY_PCP_1_Pos) /*!< Bit mask of TASK_TRIG_ZERO_PENALTY_PCP_1 field. */

/* Register: RADIO_TASK_TRIG_FULL_PENALTY_PCP_1 */
/* Description: Unspecified */

/* Bit 0 :   */
#define RADIO_TASK_TRIG_FULL_PENALTY_PCP_1_TASK_TRIG_FULL_PENALTY_PCP_1_Pos (0UL) /*!< Position of TASK_TRIG_FULL_PENALTY_PCP_1 field. */
#define RADIO_TASK_TRIG_FULL_PENALTY_PCP_1_TASK_TRIG_FULL_PENALTY_PCP_1_Msk (0x1UL << RADIO_TASK_TRIG_FULL_PENALTY_PCP_1_TASK_TRIG_FULL_PENALTY_PCP_1_Pos) /*!< Bit mask of TASK_TRIG_FULL_PENALTY_PCP_1 field. */

/* Register: RADIO_TASK_TRIG_ZERO_PENALTY_PCP_0 */
/* Description: Unspecified */

/* Bit 0 :   */
#define RADIO_TASK_TRIG_ZERO_PENALTY_PCP_0_TASK_TRIG_ZERO_PENALTY_PCP_0_Pos (0UL) /*!< Position of TASK_TRIG_ZERO_PENALTY_PCP_0 field. */
#define RADIO_TASK_TRIG_ZERO_PENALTY_PCP_0_TASK_TRIG_ZERO_PENALTY_PCP_0_Msk (0x1UL << RADIO_TASK_TRIG_ZERO_PENALTY_PCP_0_TASK_TRIG_ZERO_PENALTY_PCP_0_Pos) /*!< Bit mask of TASK_TRIG_ZERO_PENALTY_PCP_0 field. */

/* Register: RADIO_TASK_TRIG_FULL_PENALTY_PCP_0 */
/* Description: Unspecified */

/* Bit 0 :   */
#define RADIO_TASK_TRIG_FULL_PENALTY_PCP_0_TASK_TRIG_FULL_PENALTY_PCP_0_Pos (0UL) /*!< Position of TASK_TRIG_FULL_PENALTY_PCP_0 field. */
#define RADIO_TASK_TRIG_FULL_PENALTY_PCP_0_TASK_TRIG_FULL_PENALTY_PCP_0_Msk (0x1UL << RADIO_TASK_TRIG_FULL_PENALTY_PCP_0_TASK_TRIG_FULL_PENALTY_PCP_0_Pos) /*!< Bit mask of TASK_TRIG_FULL_PENALTY_PCP_0 field. */

/* Register: RADIO_PENALTY_RG_PCP_0 */
/* Description: Unspecified */

/* Bits 31..0 :   */
#define RADIO_PENALTY_RG_PCP_0_FIELD0_Pos (0UL) /*!< Position of FIELD0 field. */
#define RADIO_PENALTY_RG_PCP_0_FIELD0_Msk (0xFFFFFFFFUL << RADIO_PENALTY_RG_PCP_0_FIELD0_Pos) /*!< Bit mask of FIELD0 field. */

/* Register: RADIO_PENALTY_RG_PCP_1 */
/* Description: Unspecified */

/* Bits 31..0 :   */
#define RADIO_PENALTY_RG_PCP_1_FIELD0_Pos (0UL) /*!< Position of FIELD0 field. */
#define RADIO_PENALTY_RG_PCP_1_FIELD0_Msk (0xFFFFFFFFUL << RADIO_PENALTY_RG_PCP_1_FIELD0_Pos) /*!< Bit mask of FIELD0 field. */

/* Register: RADIO_PENALTY_RG_PCP_2 */
/* Description: Unspecified */

/* Bits 31..0 :   */
#define RADIO_PENALTY_RG_PCP_2_FIELD0_Pos (0UL) /*!< Position of FIELD0 field. */
#define RADIO_PENALTY_RG_PCP_2_FIELD0_Msk (0xFFFFFFFFUL << RADIO_PENALTY_RG_PCP_2_FIELD0_Pos) /*!< Bit mask of FIELD0 field. */

/* Register: RADIO_PENALTY_RG_PCP_3 */
/* Description: Unspecified */

/* Bits 31..0 :   */
#define RADIO_PENALTY_RG_PCP_3_FIELD0_Pos (0UL) /*!< Position of FIELD0 field. */
#define RADIO_PENALTY_RG_PCP_3_FIELD0_Msk (0xFFFFFFFFUL << RADIO_PENALTY_RG_PCP_3_FIELD0_Pos) /*!< Bit mask of FIELD0 field. */

/* Register: RADIO_PENALTY_RG_PCP_4 */
/* Description: Unspecified */

/* Bits 31..0 :   */
#define RADIO_PENALTY_RG_PCP_4_FIELD0_Pos (0UL) /*!< Position of FIELD0 field. */
#define RADIO_PENALTY_RG_PCP_4_FIELD0_Msk (0xFFFFFFFFUL << RADIO_PENALTY_RG_PCP_4_FIELD0_Pos) /*!< Bit mask of FIELD0 field. */

/* Register: RADIO_TURN_OFF_AUTO_CLOCKSOURCE_REQ */
/* Description: Unspecified */

/* Bits 4..0 :   */
#define RADIO_TURN_OFF_AUTO_CLOCKSOURCE_REQ_FIELD0_Pos (0UL) /*!< Position of FIELD0 field. */
#define RADIO_TURN_OFF_AUTO_CLOCKSOURCE_REQ_FIELD0_Msk (0x1FUL << RADIO_TURN_OFF_AUTO_CLOCKSOURCE_REQ_FIELD0_Pos) /*!< Bit mask of FIELD0 field. */

/* Register: RADIO_FORCE_OVERRIDE_PCP_0 */
/* Description: Unspecified */

/* Bit 7 :   */
#define RADIO_FORCE_OVERRIDE_PCP_0_FIELD1_Pos (7UL) /*!< Position of FIELD1 field. */
#define RADIO_FORCE_OVERRIDE_PCP_0_FIELD1_Msk (0x1UL << RADIO_FORCE_OVERRIDE_PCP_0_FIELD1_Pos) /*!< Bit mask of FIELD1 field. */

/* Bit 1 :   */
#define RADIO_FORCE_OVERRIDE_PCP_0_FIELD0_Pos (1UL) /*!< Position of FIELD0 field. */
#define RADIO_FORCE_OVERRIDE_PCP_0_FIELD0_Msk (0x1UL << RADIO_FORCE_OVERRIDE_PCP_0_FIELD0_Pos) /*!< Bit mask of FIELD0 field. */

/* Register: RADIO_FORCE_OVERRIDE_PCP_1 */
/* Description: Unspecified */

/* Bit 7 :   */
#define RADIO_FORCE_OVERRIDE_PCP_1_FIELD1_Pos (7UL) /*!< Position of FIELD1 field. */
#define RADIO_FORCE_OVERRIDE_PCP_1_FIELD1_Msk (0x1UL << RADIO_FORCE_OVERRIDE_PCP_1_FIELD1_Pos) /*!< Bit mask of FIELD1 field. */

/* Bit 1 :   */
#define RADIO_FORCE_OVERRIDE_PCP_1_FIELD0_Pos (1UL) /*!< Position of FIELD0 field. */
#define RADIO_FORCE_OVERRIDE_PCP_1_FIELD0_Msk (0x1UL << RADIO_FORCE_OVERRIDE_PCP_1_FIELD0_Pos) /*!< Bit mask of FIELD0 field. */

/* Register: RADIO_FORCE_OVERRIDE_PCP_2 */
/* Description: Unspecified */

/* Bit 7 :   */
#define RADIO_FORCE_OVERRIDE_PCP_2_FIELD1_Pos (7UL) /*!< Position of FIELD1 field. */
#define RADIO_FORCE_OVERRIDE_PCP_2_FIELD1_Msk (0x1UL << RADIO_FORCE_OVERRIDE_PCP_2_FIELD1_Pos) /*!< Bit mask of FIELD1 field. */

/* Bit 1 :   */
#define RADIO_FORCE_OVERRIDE_PCP_2_FIELD0_Pos (1UL) /*!< Position of FIELD0 field. */
#define RADIO_FORCE_OVERRIDE_PCP_2_FIELD0_Msk (0x1UL << RADIO_FORCE_OVERRIDE_PCP_2_FIELD0_Pos) /*!< Bit mask of FIELD0 field. */

/* Register: RADIO_FORCE_OVERRIDE_PCP_3 */
/* Description: Unspecified */

/* Bit 7 :   */
#define RADIO_FORCE_OVERRIDE_PCP_3_FIELD1_Pos (7UL) /*!< Position of FIELD1 field. */
#define RADIO_FORCE_OVERRIDE_PCP_3_FIELD1_Msk (0x1UL << RADIO_FORCE_OVERRIDE_PCP_3_FIELD1_Pos) /*!< Bit mask of FIELD1 field. */

/* Bit 1 :   */
#define RADIO_FORCE_OVERRIDE_PCP_3_FIELD0_Pos (1UL) /*!< Position of FIELD0 field. */
#define RADIO_FORCE_OVERRIDE_PCP_3_FIELD0_Msk (0x1UL << RADIO_FORCE_OVERRIDE_PCP_3_FIELD0_Pos) /*!< Bit mask of FIELD0 field. */

/* Register: RADIO_FORCE_OVERRIDE_PCP_4 */
/* Description: Unspecified */

/* Bit 7 :   */
#define RADIO_FORCE_OVERRIDE_PCP_4_FIELD1_Pos (7UL) /*!< Position of FIELD1 field. */
#define RADIO_FORCE_OVERRIDE_PCP_4_FIELD1_Msk (0x1UL << RADIO_FORCE_OVERRIDE_PCP_4_FIELD1_Pos) /*!< Bit mask of FIELD1 field. */

/* Bit 1 :   */
#define RADIO_FORCE_OVERRIDE_PCP_4_FIELD0_Pos (1UL) /*!< Position of FIELD0 field. */
#define RADIO_FORCE_OVERRIDE_PCP_4_FIELD0_Msk (0x1UL << RADIO_FORCE_OVERRIDE_PCP_4_FIELD0_Pos) /*!< Bit mask of FIELD0 field. */


/* Peripheral: SAADC */
/* Description: Analog to Digital Converter */

/* Register: SAADC_TASKS_START */
/* Description: Start the ADC and prepare the result buffer in RAM */

/* Bit 0 : Start the ADC and prepare the result buffer in RAM */
#define SAADC_TASKS_START_TASKS_START_Pos (0UL) /*!< Position of TASKS_START field. */
#define SAADC_TASKS_START_TASKS_START_Msk (0x1UL << SAADC_TASKS_START_TASKS_START_Pos) /*!< Bit mask of TASKS_START field. */
#define SAADC_TASKS_START_TASKS_START_Trigger (1UL) /*!< Trigger task */

/* Register: SAADC_TASKS_SAMPLE */
/* Description: Take one ADC sample, if scan is enabled all channels are sampled */

/* Bit 0 : Take one ADC sample, if scan is enabled all channels are sampled */
#define SAADC_TASKS_SAMPLE_TASKS_SAMPLE_Pos (0UL) /*!< Position of TASKS_SAMPLE field. */
#define SAADC_TASKS_SAMPLE_TASKS_SAMPLE_Msk (0x1UL << SAADC_TASKS_SAMPLE_TASKS_SAMPLE_Pos) /*!< Bit mask of TASKS_SAMPLE field. */
#define SAADC_TASKS_SAMPLE_TASKS_SAMPLE_Trigger (1UL) /*!< Trigger task */

/* Register: SAADC_TASKS_STOP */
/* Description: Stop the ADC and terminate any on-going conversion */

/* Bit 0 : Stop the ADC and terminate any on-going conversion */
#define SAADC_TASKS_STOP_TASKS_STOP_Pos (0UL) /*!< Position of TASKS_STOP field. */
#define SAADC_TASKS_STOP_TASKS_STOP_Msk (0x1UL << SAADC_TASKS_STOP_TASKS_STOP_Pos) /*!< Bit mask of TASKS_STOP field. */
#define SAADC_TASKS_STOP_TASKS_STOP_Trigger (1UL) /*!< Trigger task */

/* Register: SAADC_TASKS_CALIBRATEOFFSET */
/* Description: Starts offset auto-calibration */

/* Bit 0 : Starts offset auto-calibration */
#define SAADC_TASKS_CALIBRATEOFFSET_TASKS_CALIBRATEOFFSET_Pos (0UL) /*!< Position of TASKS_CALIBRATEOFFSET field. */
#define SAADC_TASKS_CALIBRATEOFFSET_TASKS_CALIBRATEOFFSET_Msk (0x1UL << SAADC_TASKS_CALIBRATEOFFSET_TASKS_CALIBRATEOFFSET_Pos) /*!< Bit mask of TASKS_CALIBRATEOFFSET field. */
#define SAADC_TASKS_CALIBRATEOFFSET_TASKS_CALIBRATEOFFSET_Trigger (1UL) /*!< Trigger task */

/* Register: SAADC_TASKS_CALIBRATEGAIN */
/* Description: Starts gain auto-calibration */

/* Bit 0 : Starts gain auto-calibration */
#define SAADC_TASKS_CALIBRATEGAIN_TASKS_CALIBRATEGAIN_Pos (0UL) /*!< Position of TASKS_CALIBRATEGAIN field. */
#define SAADC_TASKS_CALIBRATEGAIN_TASKS_CALIBRATEGAIN_Msk (0x1UL << SAADC_TASKS_CALIBRATEGAIN_TASKS_CALIBRATEGAIN_Pos) /*!< Bit mask of TASKS_CALIBRATEGAIN field. */
#define SAADC_TASKS_CALIBRATEGAIN_TASKS_CALIBRATEGAIN_Trigger (1UL) /*!< Trigger task */

/* Register: SAADC_SUBSCRIBE_START */
/* Description: Subscribe configuration for task START */

/* Bit 31 :   */
#define SAADC_SUBSCRIBE_START_EN_Pos (31UL) /*!< Position of EN field. */
#define SAADC_SUBSCRIBE_START_EN_Msk (0x1UL << SAADC_SUBSCRIBE_START_EN_Pos) /*!< Bit mask of EN field. */
#define SAADC_SUBSCRIBE_START_EN_Disabled (0UL) /*!< Disable subscription */
#define SAADC_SUBSCRIBE_START_EN_Enabled (1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task START will subscribe to */
#define SAADC_SUBSCRIBE_START_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define SAADC_SUBSCRIBE_START_CHIDX_Msk (0xFFUL << SAADC_SUBSCRIBE_START_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: SAADC_SUBSCRIBE_SAMPLE */
/* Description: Subscribe configuration for task SAMPLE */

/* Bit 31 :   */
#define SAADC_SUBSCRIBE_SAMPLE_EN_Pos (31UL) /*!< Position of EN field. */
#define SAADC_SUBSCRIBE_SAMPLE_EN_Msk (0x1UL << SAADC_SUBSCRIBE_SAMPLE_EN_Pos) /*!< Bit mask of EN field. */
#define SAADC_SUBSCRIBE_SAMPLE_EN_Disabled (0UL) /*!< Disable subscription */
#define SAADC_SUBSCRIBE_SAMPLE_EN_Enabled (1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task SAMPLE will subscribe to */
#define SAADC_SUBSCRIBE_SAMPLE_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define SAADC_SUBSCRIBE_SAMPLE_CHIDX_Msk (0xFFUL << SAADC_SUBSCRIBE_SAMPLE_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: SAADC_SUBSCRIBE_STOP */
/* Description: Subscribe configuration for task STOP */

/* Bit 31 :   */
#define SAADC_SUBSCRIBE_STOP_EN_Pos (31UL) /*!< Position of EN field. */
#define SAADC_SUBSCRIBE_STOP_EN_Msk (0x1UL << SAADC_SUBSCRIBE_STOP_EN_Pos) /*!< Bit mask of EN field. */
#define SAADC_SUBSCRIBE_STOP_EN_Disabled (0UL) /*!< Disable subscription */
#define SAADC_SUBSCRIBE_STOP_EN_Enabled (1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task STOP will subscribe to */
#define SAADC_SUBSCRIBE_STOP_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define SAADC_SUBSCRIBE_STOP_CHIDX_Msk (0xFFUL << SAADC_SUBSCRIBE_STOP_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: SAADC_SUBSCRIBE_CALIBRATEOFFSET */
/* Description: Subscribe configuration for task CALIBRATEOFFSET */

/* Bit 31 :   */
#define SAADC_SUBSCRIBE_CALIBRATEOFFSET_EN_Pos (31UL) /*!< Position of EN field. */
#define SAADC_SUBSCRIBE_CALIBRATEOFFSET_EN_Msk (0x1UL << SAADC_SUBSCRIBE_CALIBRATEOFFSET_EN_Pos) /*!< Bit mask of EN field. */
#define SAADC_SUBSCRIBE_CALIBRATEOFFSET_EN_Disabled (0UL) /*!< Disable subscription */
#define SAADC_SUBSCRIBE_CALIBRATEOFFSET_EN_Enabled (1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task CALIBRATEOFFSET will subscribe to */
#define SAADC_SUBSCRIBE_CALIBRATEOFFSET_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define SAADC_SUBSCRIBE_CALIBRATEOFFSET_CHIDX_Msk (0xFFUL << SAADC_SUBSCRIBE_CALIBRATEOFFSET_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: SAADC_SUBSCRIBE_CALIBRATEGAIN */
/* Description: Subscribe configuration for task CALIBRATEGAIN */

/* Bit 31 :   */
#define SAADC_SUBSCRIBE_CALIBRATEGAIN_EN_Pos (31UL) /*!< Position of EN field. */
#define SAADC_SUBSCRIBE_CALIBRATEGAIN_EN_Msk (0x1UL << SAADC_SUBSCRIBE_CALIBRATEGAIN_EN_Pos) /*!< Bit mask of EN field. */
#define SAADC_SUBSCRIBE_CALIBRATEGAIN_EN_Disabled (0UL) /*!< Disable subscription */
#define SAADC_SUBSCRIBE_CALIBRATEGAIN_EN_Enabled (1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task CALIBRATEGAIN will subscribe to */
#define SAADC_SUBSCRIBE_CALIBRATEGAIN_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define SAADC_SUBSCRIBE_CALIBRATEGAIN_CHIDX_Msk (0xFFUL << SAADC_SUBSCRIBE_CALIBRATEGAIN_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: SAADC_EVENTS_STARTED */
/* Description: The ADC has started */

/* Bit 0 : The ADC has started */
#define SAADC_EVENTS_STARTED_EVENTS_STARTED_Pos (0UL) /*!< Position of EVENTS_STARTED field. */
#define SAADC_EVENTS_STARTED_EVENTS_STARTED_Msk (0x1UL << SAADC_EVENTS_STARTED_EVENTS_STARTED_Pos) /*!< Bit mask of EVENTS_STARTED field. */
#define SAADC_EVENTS_STARTED_EVENTS_STARTED_NotGenerated (0UL) /*!< Event not generated */
#define SAADC_EVENTS_STARTED_EVENTS_STARTED_Generated (1UL) /*!< Event generated */

/* Register: SAADC_EVENTS_END */
/* Description: The ADC has filled up the Result buffer */

/* Bit 0 : The ADC has filled up the Result buffer */
#define SAADC_EVENTS_END_EVENTS_END_Pos (0UL) /*!< Position of EVENTS_END field. */
#define SAADC_EVENTS_END_EVENTS_END_Msk (0x1UL << SAADC_EVENTS_END_EVENTS_END_Pos) /*!< Bit mask of EVENTS_END field. */
#define SAADC_EVENTS_END_EVENTS_END_NotGenerated (0UL) /*!< Event not generated */
#define SAADC_EVENTS_END_EVENTS_END_Generated (1UL) /*!< Event generated */

/* Register: SAADC_EVENTS_DONE */
/* Description: A conversion task has been completed. Depending on the mode, multiple conversions might be needed for a result to be transferred to RAM. */

/* Bit 0 : A conversion task has been completed. Depending on the mode, multiple conversions might be needed for a result to be transferred to RAM. */
#define SAADC_EVENTS_DONE_EVENTS_DONE_Pos (0UL) /*!< Position of EVENTS_DONE field. */
#define SAADC_EVENTS_DONE_EVENTS_DONE_Msk (0x1UL << SAADC_EVENTS_DONE_EVENTS_DONE_Pos) /*!< Bit mask of EVENTS_DONE field. */
#define SAADC_EVENTS_DONE_EVENTS_DONE_NotGenerated (0UL) /*!< Event not generated */
#define SAADC_EVENTS_DONE_EVENTS_DONE_Generated (1UL) /*!< Event generated */

/* Register: SAADC_EVENTS_RESULTDONE */
/* Description: A result is ready to get transferred to RAM. Result is available in REGRESULT register */

/* Bit 0 : A result is ready to get transferred to RAM. Result is available in REGRESULT register */
#define SAADC_EVENTS_RESULTDONE_EVENTS_RESULTDONE_Pos (0UL) /*!< Position of EVENTS_RESULTDONE field. */
#define SAADC_EVENTS_RESULTDONE_EVENTS_RESULTDONE_Msk (0x1UL << SAADC_EVENTS_RESULTDONE_EVENTS_RESULTDONE_Pos) /*!< Bit mask of EVENTS_RESULTDONE field. */
#define SAADC_EVENTS_RESULTDONE_EVENTS_RESULTDONE_NotGenerated (0UL) /*!< Event not generated */
#define SAADC_EVENTS_RESULTDONE_EVENTS_RESULTDONE_Generated (1UL) /*!< Event generated */

/* Register: SAADC_EVENTS_CALIBRATEDONE */
/* Description: Calibration is complete */

/* Bit 0 : Calibration is complete */
#define SAADC_EVENTS_CALIBRATEDONE_EVENTS_CALIBRATEDONE_Pos (0UL) /*!< Position of EVENTS_CALIBRATEDONE field. */
#define SAADC_EVENTS_CALIBRATEDONE_EVENTS_CALIBRATEDONE_Msk (0x1UL << SAADC_EVENTS_CALIBRATEDONE_EVENTS_CALIBRATEDONE_Pos) /*!< Bit mask of EVENTS_CALIBRATEDONE field. */
#define SAADC_EVENTS_CALIBRATEDONE_EVENTS_CALIBRATEDONE_NotGenerated (0UL) /*!< Event not generated */
#define SAADC_EVENTS_CALIBRATEDONE_EVENTS_CALIBRATEDONE_Generated (1UL) /*!< Event generated */

/* Register: SAADC_EVENTS_STOPPED */
/* Description: The ADC has stopped */

/* Bit 0 : The ADC has stopped */
#define SAADC_EVENTS_STOPPED_EVENTS_STOPPED_Pos (0UL) /*!< Position of EVENTS_STOPPED field. */
#define SAADC_EVENTS_STOPPED_EVENTS_STOPPED_Msk (0x1UL << SAADC_EVENTS_STOPPED_EVENTS_STOPPED_Pos) /*!< Bit mask of EVENTS_STOPPED field. */
#define SAADC_EVENTS_STOPPED_EVENTS_STOPPED_NotGenerated (0UL) /*!< Event not generated */
#define SAADC_EVENTS_STOPPED_EVENTS_STOPPED_Generated (1UL) /*!< Event generated */

/* Register: SAADC_EVENTS_CH_LIMITH */
/* Description: Description cluster: Last results is equal or above CH[n].LIMIT.HIGH */

/* Bit 0 : Last results is equal or above CH[n].LIMIT.HIGH */
#define SAADC_EVENTS_CH_LIMITH_LIMITH_Pos (0UL) /*!< Position of LIMITH field. */
#define SAADC_EVENTS_CH_LIMITH_LIMITH_Msk (0x1UL << SAADC_EVENTS_CH_LIMITH_LIMITH_Pos) /*!< Bit mask of LIMITH field. */
#define SAADC_EVENTS_CH_LIMITH_LIMITH_NotGenerated (0UL) /*!< Event not generated */
#define SAADC_EVENTS_CH_LIMITH_LIMITH_Generated (1UL) /*!< Event generated */

/* Register: SAADC_EVENTS_CH_LIMITL */
/* Description: Description cluster: Last results is equal or below CH[n].LIMIT.LOW */

/* Bit 0 : Last results is equal or below CH[n].LIMIT.LOW */
#define SAADC_EVENTS_CH_LIMITL_LIMITL_Pos (0UL) /*!< Position of LIMITL field. */
#define SAADC_EVENTS_CH_LIMITL_LIMITL_Msk (0x1UL << SAADC_EVENTS_CH_LIMITL_LIMITL_Pos) /*!< Bit mask of LIMITL field. */
#define SAADC_EVENTS_CH_LIMITL_LIMITL_NotGenerated (0UL) /*!< Event not generated */
#define SAADC_EVENTS_CH_LIMITL_LIMITL_Generated (1UL) /*!< Event generated */

/* Register: SAADC_EVENTS_AHBERROR */
/* Description: EasyDMA encountered AHB error. */

/* Bit 0 : EasyDMA encountered AHB error. */
#define SAADC_EVENTS_AHBERROR_EVENTS_AHBERROR_Pos (0UL) /*!< Position of EVENTS_AHBERROR field. */
#define SAADC_EVENTS_AHBERROR_EVENTS_AHBERROR_Msk (0x1UL << SAADC_EVENTS_AHBERROR_EVENTS_AHBERROR_Pos) /*!< Bit mask of EVENTS_AHBERROR field. */
#define SAADC_EVENTS_AHBERROR_EVENTS_AHBERROR_NotGenerated (0UL) /*!< Event not generated */
#define SAADC_EVENTS_AHBERROR_EVENTS_AHBERROR_Generated (1UL) /*!< Event generated */

/* Register: SAADC_PUBLISH_STARTED */
/* Description: Publish configuration for event STARTED */

/* Bit 31 :   */
#define SAADC_PUBLISH_STARTED_EN_Pos (31UL) /*!< Position of EN field. */
#define SAADC_PUBLISH_STARTED_EN_Msk (0x1UL << SAADC_PUBLISH_STARTED_EN_Pos) /*!< Bit mask of EN field. */
#define SAADC_PUBLISH_STARTED_EN_Disabled (0UL) /*!< Disable publishing */
#define SAADC_PUBLISH_STARTED_EN_Enabled (1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event STARTED will publish to. */
#define SAADC_PUBLISH_STARTED_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define SAADC_PUBLISH_STARTED_CHIDX_Msk (0xFFUL << SAADC_PUBLISH_STARTED_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: SAADC_PUBLISH_END */
/* Description: Publish configuration for event END */

/* Bit 31 :   */
#define SAADC_PUBLISH_END_EN_Pos (31UL) /*!< Position of EN field. */
#define SAADC_PUBLISH_END_EN_Msk (0x1UL << SAADC_PUBLISH_END_EN_Pos) /*!< Bit mask of EN field. */
#define SAADC_PUBLISH_END_EN_Disabled (0UL) /*!< Disable publishing */
#define SAADC_PUBLISH_END_EN_Enabled (1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event END will publish to. */
#define SAADC_PUBLISH_END_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define SAADC_PUBLISH_END_CHIDX_Msk (0xFFUL << SAADC_PUBLISH_END_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: SAADC_PUBLISH_DONE */
/* Description: Publish configuration for event DONE */

/* Bit 31 :   */
#define SAADC_PUBLISH_DONE_EN_Pos (31UL) /*!< Position of EN field. */
#define SAADC_PUBLISH_DONE_EN_Msk (0x1UL << SAADC_PUBLISH_DONE_EN_Pos) /*!< Bit mask of EN field. */
#define SAADC_PUBLISH_DONE_EN_Disabled (0UL) /*!< Disable publishing */
#define SAADC_PUBLISH_DONE_EN_Enabled (1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event DONE will publish to. */
#define SAADC_PUBLISH_DONE_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define SAADC_PUBLISH_DONE_CHIDX_Msk (0xFFUL << SAADC_PUBLISH_DONE_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: SAADC_PUBLISH_RESULTDONE */
/* Description: Publish configuration for event RESULTDONE */

/* Bit 31 :   */
#define SAADC_PUBLISH_RESULTDONE_EN_Pos (31UL) /*!< Position of EN field. */
#define SAADC_PUBLISH_RESULTDONE_EN_Msk (0x1UL << SAADC_PUBLISH_RESULTDONE_EN_Pos) /*!< Bit mask of EN field. */
#define SAADC_PUBLISH_RESULTDONE_EN_Disabled (0UL) /*!< Disable publishing */
#define SAADC_PUBLISH_RESULTDONE_EN_Enabled (1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event RESULTDONE will publish to. */
#define SAADC_PUBLISH_RESULTDONE_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define SAADC_PUBLISH_RESULTDONE_CHIDX_Msk (0xFFUL << SAADC_PUBLISH_RESULTDONE_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: SAADC_PUBLISH_CALIBRATEDONE */
/* Description: Publish configuration for event CALIBRATEDONE */

/* Bit 31 :   */
#define SAADC_PUBLISH_CALIBRATEDONE_EN_Pos (31UL) /*!< Position of EN field. */
#define SAADC_PUBLISH_CALIBRATEDONE_EN_Msk (0x1UL << SAADC_PUBLISH_CALIBRATEDONE_EN_Pos) /*!< Bit mask of EN field. */
#define SAADC_PUBLISH_CALIBRATEDONE_EN_Disabled (0UL) /*!< Disable publishing */
#define SAADC_PUBLISH_CALIBRATEDONE_EN_Enabled (1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event CALIBRATEDONE will publish to. */
#define SAADC_PUBLISH_CALIBRATEDONE_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define SAADC_PUBLISH_CALIBRATEDONE_CHIDX_Msk (0xFFUL << SAADC_PUBLISH_CALIBRATEDONE_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: SAADC_PUBLISH_STOPPED */
/* Description: Publish configuration for event STOPPED */

/* Bit 31 :   */
#define SAADC_PUBLISH_STOPPED_EN_Pos (31UL) /*!< Position of EN field. */
#define SAADC_PUBLISH_STOPPED_EN_Msk (0x1UL << SAADC_PUBLISH_STOPPED_EN_Pos) /*!< Bit mask of EN field. */
#define SAADC_PUBLISH_STOPPED_EN_Disabled (0UL) /*!< Disable publishing */
#define SAADC_PUBLISH_STOPPED_EN_Enabled (1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event STOPPED will publish to. */
#define SAADC_PUBLISH_STOPPED_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define SAADC_PUBLISH_STOPPED_CHIDX_Msk (0xFFUL << SAADC_PUBLISH_STOPPED_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: SAADC_PUBLISH_CH_LIMITH */
/* Description: Description cluster: Publish configuration for event CH[n].LIMITH */

/* Bit 31 :   */
#define SAADC_PUBLISH_CH_LIMITH_EN_Pos (31UL) /*!< Position of EN field. */
#define SAADC_PUBLISH_CH_LIMITH_EN_Msk (0x1UL << SAADC_PUBLISH_CH_LIMITH_EN_Pos) /*!< Bit mask of EN field. */
#define SAADC_PUBLISH_CH_LIMITH_EN_Disabled (0UL) /*!< Disable publishing */
#define SAADC_PUBLISH_CH_LIMITH_EN_Enabled (1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event CH[n].LIMITH will publish to. */
#define SAADC_PUBLISH_CH_LIMITH_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define SAADC_PUBLISH_CH_LIMITH_CHIDX_Msk (0xFFUL << SAADC_PUBLISH_CH_LIMITH_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: SAADC_PUBLISH_CH_LIMITL */
/* Description: Description cluster: Publish configuration for event CH[n].LIMITL */

/* Bit 31 :   */
#define SAADC_PUBLISH_CH_LIMITL_EN_Pos (31UL) /*!< Position of EN field. */
#define SAADC_PUBLISH_CH_LIMITL_EN_Msk (0x1UL << SAADC_PUBLISH_CH_LIMITL_EN_Pos) /*!< Bit mask of EN field. */
#define SAADC_PUBLISH_CH_LIMITL_EN_Disabled (0UL) /*!< Disable publishing */
#define SAADC_PUBLISH_CH_LIMITL_EN_Enabled (1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event CH[n].LIMITL will publish to. */
#define SAADC_PUBLISH_CH_LIMITL_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define SAADC_PUBLISH_CH_LIMITL_CHIDX_Msk (0xFFUL << SAADC_PUBLISH_CH_LIMITL_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: SAADC_PUBLISH_AHBERROR */
/* Description: Publish configuration for event AHBERROR */

/* Bit 31 :   */
#define SAADC_PUBLISH_AHBERROR_EN_Pos (31UL) /*!< Position of EN field. */
#define SAADC_PUBLISH_AHBERROR_EN_Msk (0x1UL << SAADC_PUBLISH_AHBERROR_EN_Pos) /*!< Bit mask of EN field. */
#define SAADC_PUBLISH_AHBERROR_EN_Disabled (0UL) /*!< Disable publishing */
#define SAADC_PUBLISH_AHBERROR_EN_Enabled (1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event AHBERROR will publish to. */
#define SAADC_PUBLISH_AHBERROR_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define SAADC_PUBLISH_AHBERROR_CHIDX_Msk (0xFFUL << SAADC_PUBLISH_AHBERROR_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: SAADC_SHORTS */
/* Description: Shortcuts between local events and tasks */

/* Bit 1 : Shortcut between event END and task START */
#define SAADC_SHORTS_END_START_Pos (1UL) /*!< Position of END_START field. */
#define SAADC_SHORTS_END_START_Msk (0x1UL << SAADC_SHORTS_END_START_Pos) /*!< Bit mask of END_START field. */
#define SAADC_SHORTS_END_START_Disabled (0UL) /*!< Disable shortcut */
#define SAADC_SHORTS_END_START_Enabled (1UL) /*!< Enable shortcut */

/* Bit 0 : Shortcut between event DONE and task SAMPLE */
#define SAADC_SHORTS_DONE_SAMPLE_Pos (0UL) /*!< Position of DONE_SAMPLE field. */
#define SAADC_SHORTS_DONE_SAMPLE_Msk (0x1UL << SAADC_SHORTS_DONE_SAMPLE_Pos) /*!< Bit mask of DONE_SAMPLE field. */
#define SAADC_SHORTS_DONE_SAMPLE_Disabled (0UL) /*!< Disable shortcut */
#define SAADC_SHORTS_DONE_SAMPLE_Enabled (1UL) /*!< Enable shortcut */

/* Register: SAADC_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 22 : Enable or disable interrupt for event AHBERROR */
#define SAADC_INTEN_AHBERROR_Pos (22UL) /*!< Position of AHBERROR field. */
#define SAADC_INTEN_AHBERROR_Msk (0x1UL << SAADC_INTEN_AHBERROR_Pos) /*!< Bit mask of AHBERROR field. */
#define SAADC_INTEN_AHBERROR_Disabled (0UL) /*!< Disable */
#define SAADC_INTEN_AHBERROR_Enabled (1UL) /*!< Enable */

/* Bit 21 : Enable or disable interrupt for event CH7LIMITL */
#define SAADC_INTEN_CH7LIMITL_Pos (21UL) /*!< Position of CH7LIMITL field. */
#define SAADC_INTEN_CH7LIMITL_Msk (0x1UL << SAADC_INTEN_CH7LIMITL_Pos) /*!< Bit mask of CH7LIMITL field. */
#define SAADC_INTEN_CH7LIMITL_Disabled (0UL) /*!< Disable */
#define SAADC_INTEN_CH7LIMITL_Enabled (1UL) /*!< Enable */

/* Bit 20 : Enable or disable interrupt for event CH7LIMITH */
#define SAADC_INTEN_CH7LIMITH_Pos (20UL) /*!< Position of CH7LIMITH field. */
#define SAADC_INTEN_CH7LIMITH_Msk (0x1UL << SAADC_INTEN_CH7LIMITH_Pos) /*!< Bit mask of CH7LIMITH field. */
#define SAADC_INTEN_CH7LIMITH_Disabled (0UL) /*!< Disable */
#define SAADC_INTEN_CH7LIMITH_Enabled (1UL) /*!< Enable */

/* Bit 19 : Enable or disable interrupt for event CH6LIMITL */
#define SAADC_INTEN_CH6LIMITL_Pos (19UL) /*!< Position of CH6LIMITL field. */
#define SAADC_INTEN_CH6LIMITL_Msk (0x1UL << SAADC_INTEN_CH6LIMITL_Pos) /*!< Bit mask of CH6LIMITL field. */
#define SAADC_INTEN_CH6LIMITL_Disabled (0UL) /*!< Disable */
#define SAADC_INTEN_CH6LIMITL_Enabled (1UL) /*!< Enable */

/* Bit 18 : Enable or disable interrupt for event CH6LIMITH */
#define SAADC_INTEN_CH6LIMITH_Pos (18UL) /*!< Position of CH6LIMITH field. */
#define SAADC_INTEN_CH6LIMITH_Msk (0x1UL << SAADC_INTEN_CH6LIMITH_Pos) /*!< Bit mask of CH6LIMITH field. */
#define SAADC_INTEN_CH6LIMITH_Disabled (0UL) /*!< Disable */
#define SAADC_INTEN_CH6LIMITH_Enabled (1UL) /*!< Enable */

/* Bit 17 : Enable or disable interrupt for event CH5LIMITL */
#define SAADC_INTEN_CH5LIMITL_Pos (17UL) /*!< Position of CH5LIMITL field. */
#define SAADC_INTEN_CH5LIMITL_Msk (0x1UL << SAADC_INTEN_CH5LIMITL_Pos) /*!< Bit mask of CH5LIMITL field. */
#define SAADC_INTEN_CH5LIMITL_Disabled (0UL) /*!< Disable */
#define SAADC_INTEN_CH5LIMITL_Enabled (1UL) /*!< Enable */

/* Bit 16 : Enable or disable interrupt for event CH5LIMITH */
#define SAADC_INTEN_CH5LIMITH_Pos (16UL) /*!< Position of CH5LIMITH field. */
#define SAADC_INTEN_CH5LIMITH_Msk (0x1UL << SAADC_INTEN_CH5LIMITH_Pos) /*!< Bit mask of CH5LIMITH field. */
#define SAADC_INTEN_CH5LIMITH_Disabled (0UL) /*!< Disable */
#define SAADC_INTEN_CH5LIMITH_Enabled (1UL) /*!< Enable */

/* Bit 15 : Enable or disable interrupt for event CH4LIMITL */
#define SAADC_INTEN_CH4LIMITL_Pos (15UL) /*!< Position of CH4LIMITL field. */
#define SAADC_INTEN_CH4LIMITL_Msk (0x1UL << SAADC_INTEN_CH4LIMITL_Pos) /*!< Bit mask of CH4LIMITL field. */
#define SAADC_INTEN_CH4LIMITL_Disabled (0UL) /*!< Disable */
#define SAADC_INTEN_CH4LIMITL_Enabled (1UL) /*!< Enable */

/* Bit 14 : Enable or disable interrupt for event CH4LIMITH */
#define SAADC_INTEN_CH4LIMITH_Pos (14UL) /*!< Position of CH4LIMITH field. */
#define SAADC_INTEN_CH4LIMITH_Msk (0x1UL << SAADC_INTEN_CH4LIMITH_Pos) /*!< Bit mask of CH4LIMITH field. */
#define SAADC_INTEN_CH4LIMITH_Disabled (0UL) /*!< Disable */
#define SAADC_INTEN_CH4LIMITH_Enabled (1UL) /*!< Enable */

/* Bit 13 : Enable or disable interrupt for event CH3LIMITL */
#define SAADC_INTEN_CH3LIMITL_Pos (13UL) /*!< Position of CH3LIMITL field. */
#define SAADC_INTEN_CH3LIMITL_Msk (0x1UL << SAADC_INTEN_CH3LIMITL_Pos) /*!< Bit mask of CH3LIMITL field. */
#define SAADC_INTEN_CH3LIMITL_Disabled (0UL) /*!< Disable */
#define SAADC_INTEN_CH3LIMITL_Enabled (1UL) /*!< Enable */

/* Bit 12 : Enable or disable interrupt for event CH3LIMITH */
#define SAADC_INTEN_CH3LIMITH_Pos (12UL) /*!< Position of CH3LIMITH field. */
#define SAADC_INTEN_CH3LIMITH_Msk (0x1UL << SAADC_INTEN_CH3LIMITH_Pos) /*!< Bit mask of CH3LIMITH field. */
#define SAADC_INTEN_CH3LIMITH_Disabled (0UL) /*!< Disable */
#define SAADC_INTEN_CH3LIMITH_Enabled (1UL) /*!< Enable */

/* Bit 11 : Enable or disable interrupt for event CH2LIMITL */
#define SAADC_INTEN_CH2LIMITL_Pos (11UL) /*!< Position of CH2LIMITL field. */
#define SAADC_INTEN_CH2LIMITL_Msk (0x1UL << SAADC_INTEN_CH2LIMITL_Pos) /*!< Bit mask of CH2LIMITL field. */
#define SAADC_INTEN_CH2LIMITL_Disabled (0UL) /*!< Disable */
#define SAADC_INTEN_CH2LIMITL_Enabled (1UL) /*!< Enable */

/* Bit 10 : Enable or disable interrupt for event CH2LIMITH */
#define SAADC_INTEN_CH2LIMITH_Pos (10UL) /*!< Position of CH2LIMITH field. */
#define SAADC_INTEN_CH2LIMITH_Msk (0x1UL << SAADC_INTEN_CH2LIMITH_Pos) /*!< Bit mask of CH2LIMITH field. */
#define SAADC_INTEN_CH2LIMITH_Disabled (0UL) /*!< Disable */
#define SAADC_INTEN_CH2LIMITH_Enabled (1UL) /*!< Enable */

/* Bit 9 : Enable or disable interrupt for event CH1LIMITL */
#define SAADC_INTEN_CH1LIMITL_Pos (9UL) /*!< Position of CH1LIMITL field. */
#define SAADC_INTEN_CH1LIMITL_Msk (0x1UL << SAADC_INTEN_CH1LIMITL_Pos) /*!< Bit mask of CH1LIMITL field. */
#define SAADC_INTEN_CH1LIMITL_Disabled (0UL) /*!< Disable */
#define SAADC_INTEN_CH1LIMITL_Enabled (1UL) /*!< Enable */

/* Bit 8 : Enable or disable interrupt for event CH1LIMITH */
#define SAADC_INTEN_CH1LIMITH_Pos (8UL) /*!< Position of CH1LIMITH field. */
#define SAADC_INTEN_CH1LIMITH_Msk (0x1UL << SAADC_INTEN_CH1LIMITH_Pos) /*!< Bit mask of CH1LIMITH field. */
#define SAADC_INTEN_CH1LIMITH_Disabled (0UL) /*!< Disable */
#define SAADC_INTEN_CH1LIMITH_Enabled (1UL) /*!< Enable */

/* Bit 7 : Enable or disable interrupt for event CH0LIMITL */
#define SAADC_INTEN_CH0LIMITL_Pos (7UL) /*!< Position of CH0LIMITL field. */
#define SAADC_INTEN_CH0LIMITL_Msk (0x1UL << SAADC_INTEN_CH0LIMITL_Pos) /*!< Bit mask of CH0LIMITL field. */
#define SAADC_INTEN_CH0LIMITL_Disabled (0UL) /*!< Disable */
#define SAADC_INTEN_CH0LIMITL_Enabled (1UL) /*!< Enable */

/* Bit 6 : Enable or disable interrupt for event CH0LIMITH */
#define SAADC_INTEN_CH0LIMITH_Pos (6UL) /*!< Position of CH0LIMITH field. */
#define SAADC_INTEN_CH0LIMITH_Msk (0x1UL << SAADC_INTEN_CH0LIMITH_Pos) /*!< Bit mask of CH0LIMITH field. */
#define SAADC_INTEN_CH0LIMITH_Disabled (0UL) /*!< Disable */
#define SAADC_INTEN_CH0LIMITH_Enabled (1UL) /*!< Enable */

/* Bit 5 : Enable or disable interrupt for event STOPPED */
#define SAADC_INTEN_STOPPED_Pos (5UL) /*!< Position of STOPPED field. */
#define SAADC_INTEN_STOPPED_Msk (0x1UL << SAADC_INTEN_STOPPED_Pos) /*!< Bit mask of STOPPED field. */
#define SAADC_INTEN_STOPPED_Disabled (0UL) /*!< Disable */
#define SAADC_INTEN_STOPPED_Enabled (1UL) /*!< Enable */

/* Bit 4 : Enable or disable interrupt for event CALIBRATEDONE */
#define SAADC_INTEN_CALIBRATEDONE_Pos (4UL) /*!< Position of CALIBRATEDONE field. */
#define SAADC_INTEN_CALIBRATEDONE_Msk (0x1UL << SAADC_INTEN_CALIBRATEDONE_Pos) /*!< Bit mask of CALIBRATEDONE field. */
#define SAADC_INTEN_CALIBRATEDONE_Disabled (0UL) /*!< Disable */
#define SAADC_INTEN_CALIBRATEDONE_Enabled (1UL) /*!< Enable */

/* Bit 3 : Enable or disable interrupt for event RESULTDONE */
#define SAADC_INTEN_RESULTDONE_Pos (3UL) /*!< Position of RESULTDONE field. */
#define SAADC_INTEN_RESULTDONE_Msk (0x1UL << SAADC_INTEN_RESULTDONE_Pos) /*!< Bit mask of RESULTDONE field. */
#define SAADC_INTEN_RESULTDONE_Disabled (0UL) /*!< Disable */
#define SAADC_INTEN_RESULTDONE_Enabled (1UL) /*!< Enable */

/* Bit 2 : Enable or disable interrupt for event DONE */
#define SAADC_INTEN_DONE_Pos (2UL) /*!< Position of DONE field. */
#define SAADC_INTEN_DONE_Msk (0x1UL << SAADC_INTEN_DONE_Pos) /*!< Bit mask of DONE field. */
#define SAADC_INTEN_DONE_Disabled (0UL) /*!< Disable */
#define SAADC_INTEN_DONE_Enabled (1UL) /*!< Enable */

/* Bit 1 : Enable or disable interrupt for event END */
#define SAADC_INTEN_END_Pos (1UL) /*!< Position of END field. */
#define SAADC_INTEN_END_Msk (0x1UL << SAADC_INTEN_END_Pos) /*!< Bit mask of END field. */
#define SAADC_INTEN_END_Disabled (0UL) /*!< Disable */
#define SAADC_INTEN_END_Enabled (1UL) /*!< Enable */

/* Bit 0 : Enable or disable interrupt for event STARTED */
#define SAADC_INTEN_STARTED_Pos (0UL) /*!< Position of STARTED field. */
#define SAADC_INTEN_STARTED_Msk (0x1UL << SAADC_INTEN_STARTED_Pos) /*!< Bit mask of STARTED field. */
#define SAADC_INTEN_STARTED_Disabled (0UL) /*!< Disable */
#define SAADC_INTEN_STARTED_Enabled (1UL) /*!< Enable */

/* Register: SAADC_INTENSET */
/* Description: Enable interrupt */

/* Bit 22 : Write '1' to enable interrupt for event AHBERROR */
#define SAADC_INTENSET_AHBERROR_Pos (22UL) /*!< Position of AHBERROR field. */
#define SAADC_INTENSET_AHBERROR_Msk (0x1UL << SAADC_INTENSET_AHBERROR_Pos) /*!< Bit mask of AHBERROR field. */
#define SAADC_INTENSET_AHBERROR_Disabled (0UL) /*!< Read: Disabled */
#define SAADC_INTENSET_AHBERROR_Enabled (1UL) /*!< Read: Enabled */
#define SAADC_INTENSET_AHBERROR_Set (1UL) /*!< Enable */

/* Bit 21 : Write '1' to enable interrupt for event CH7LIMITL */
#define SAADC_INTENSET_CH7LIMITL_Pos (21UL) /*!< Position of CH7LIMITL field. */
#define SAADC_INTENSET_CH7LIMITL_Msk (0x1UL << SAADC_INTENSET_CH7LIMITL_Pos) /*!< Bit mask of CH7LIMITL field. */
#define SAADC_INTENSET_CH7LIMITL_Disabled (0UL) /*!< Read: Disabled */
#define SAADC_INTENSET_CH7LIMITL_Enabled (1UL) /*!< Read: Enabled */
#define SAADC_INTENSET_CH7LIMITL_Set (1UL) /*!< Enable */

/* Bit 20 : Write '1' to enable interrupt for event CH7LIMITH */
#define SAADC_INTENSET_CH7LIMITH_Pos (20UL) /*!< Position of CH7LIMITH field. */
#define SAADC_INTENSET_CH7LIMITH_Msk (0x1UL << SAADC_INTENSET_CH7LIMITH_Pos) /*!< Bit mask of CH7LIMITH field. */
#define SAADC_INTENSET_CH7LIMITH_Disabled (0UL) /*!< Read: Disabled */
#define SAADC_INTENSET_CH7LIMITH_Enabled (1UL) /*!< Read: Enabled */
#define SAADC_INTENSET_CH7LIMITH_Set (1UL) /*!< Enable */

/* Bit 19 : Write '1' to enable interrupt for event CH6LIMITL */
#define SAADC_INTENSET_CH6LIMITL_Pos (19UL) /*!< Position of CH6LIMITL field. */
#define SAADC_INTENSET_CH6LIMITL_Msk (0x1UL << SAADC_INTENSET_CH6LIMITL_Pos) /*!< Bit mask of CH6LIMITL field. */
#define SAADC_INTENSET_CH6LIMITL_Disabled (0UL) /*!< Read: Disabled */
#define SAADC_INTENSET_CH6LIMITL_Enabled (1UL) /*!< Read: Enabled */
#define SAADC_INTENSET_CH6LIMITL_Set (1UL) /*!< Enable */

/* Bit 18 : Write '1' to enable interrupt for event CH6LIMITH */
#define SAADC_INTENSET_CH6LIMITH_Pos (18UL) /*!< Position of CH6LIMITH field. */
#define SAADC_INTENSET_CH6LIMITH_Msk (0x1UL << SAADC_INTENSET_CH6LIMITH_Pos) /*!< Bit mask of CH6LIMITH field. */
#define SAADC_INTENSET_CH6LIMITH_Disabled (0UL) /*!< Read: Disabled */
#define SAADC_INTENSET_CH6LIMITH_Enabled (1UL) /*!< Read: Enabled */
#define SAADC_INTENSET_CH6LIMITH_Set (1UL) /*!< Enable */

/* Bit 17 : Write '1' to enable interrupt for event CH5LIMITL */
#define SAADC_INTENSET_CH5LIMITL_Pos (17UL) /*!< Position of CH5LIMITL field. */
#define SAADC_INTENSET_CH5LIMITL_Msk (0x1UL << SAADC_INTENSET_CH5LIMITL_Pos) /*!< Bit mask of CH5LIMITL field. */
#define SAADC_INTENSET_CH5LIMITL_Disabled (0UL) /*!< Read: Disabled */
#define SAADC_INTENSET_CH5LIMITL_Enabled (1UL) /*!< Read: Enabled */
#define SAADC_INTENSET_CH5LIMITL_Set (1UL) /*!< Enable */

/* Bit 16 : Write '1' to enable interrupt for event CH5LIMITH */
#define SAADC_INTENSET_CH5LIMITH_Pos (16UL) /*!< Position of CH5LIMITH field. */
#define SAADC_INTENSET_CH5LIMITH_Msk (0x1UL << SAADC_INTENSET_CH5LIMITH_Pos) /*!< Bit mask of CH5LIMITH field. */
#define SAADC_INTENSET_CH5LIMITH_Disabled (0UL) /*!< Read: Disabled */
#define SAADC_INTENSET_CH5LIMITH_Enabled (1UL) /*!< Read: Enabled */
#define SAADC_INTENSET_CH5LIMITH_Set (1UL) /*!< Enable */

/* Bit 15 : Write '1' to enable interrupt for event CH4LIMITL */
#define SAADC_INTENSET_CH4LIMITL_Pos (15UL) /*!< Position of CH4LIMITL field. */
#define SAADC_INTENSET_CH4LIMITL_Msk (0x1UL << SAADC_INTENSET_CH4LIMITL_Pos) /*!< Bit mask of CH4LIMITL field. */
#define SAADC_INTENSET_CH4LIMITL_Disabled (0UL) /*!< Read: Disabled */
#define SAADC_INTENSET_CH4LIMITL_Enabled (1UL) /*!< Read: Enabled */
#define SAADC_INTENSET_CH4LIMITL_Set (1UL) /*!< Enable */

/* Bit 14 : Write '1' to enable interrupt for event CH4LIMITH */
#define SAADC_INTENSET_CH4LIMITH_Pos (14UL) /*!< Position of CH4LIMITH field. */
#define SAADC_INTENSET_CH4LIMITH_Msk (0x1UL << SAADC_INTENSET_CH4LIMITH_Pos) /*!< Bit mask of CH4LIMITH field. */
#define SAADC_INTENSET_CH4LIMITH_Disabled (0UL) /*!< Read: Disabled */
#define SAADC_INTENSET_CH4LIMITH_Enabled (1UL) /*!< Read: Enabled */
#define SAADC_INTENSET_CH4LIMITH_Set (1UL) /*!< Enable */

/* Bit 13 : Write '1' to enable interrupt for event CH3LIMITL */
#define SAADC_INTENSET_CH3LIMITL_Pos (13UL) /*!< Position of CH3LIMITL field. */
#define SAADC_INTENSET_CH3LIMITL_Msk (0x1UL << SAADC_INTENSET_CH3LIMITL_Pos) /*!< Bit mask of CH3LIMITL field. */
#define SAADC_INTENSET_CH3LIMITL_Disabled (0UL) /*!< Read: Disabled */
#define SAADC_INTENSET_CH3LIMITL_Enabled (1UL) /*!< Read: Enabled */
#define SAADC_INTENSET_CH3LIMITL_Set (1UL) /*!< Enable */

/* Bit 12 : Write '1' to enable interrupt for event CH3LIMITH */
#define SAADC_INTENSET_CH3LIMITH_Pos (12UL) /*!< Position of CH3LIMITH field. */
#define SAADC_INTENSET_CH3LIMITH_Msk (0x1UL << SAADC_INTENSET_CH3LIMITH_Pos) /*!< Bit mask of CH3LIMITH field. */
#define SAADC_INTENSET_CH3LIMITH_Disabled (0UL) /*!< Read: Disabled */
#define SAADC_INTENSET_CH3LIMITH_Enabled (1UL) /*!< Read: Enabled */
#define SAADC_INTENSET_CH3LIMITH_Set (1UL) /*!< Enable */

/* Bit 11 : Write '1' to enable interrupt for event CH2LIMITL */
#define SAADC_INTENSET_CH2LIMITL_Pos (11UL) /*!< Position of CH2LIMITL field. */
#define SAADC_INTENSET_CH2LIMITL_Msk (0x1UL << SAADC_INTENSET_CH2LIMITL_Pos) /*!< Bit mask of CH2LIMITL field. */
#define SAADC_INTENSET_CH2LIMITL_Disabled (0UL) /*!< Read: Disabled */
#define SAADC_INTENSET_CH2LIMITL_Enabled (1UL) /*!< Read: Enabled */
#define SAADC_INTENSET_CH2LIMITL_Set (1UL) /*!< Enable */

/* Bit 10 : Write '1' to enable interrupt for event CH2LIMITH */
#define SAADC_INTENSET_CH2LIMITH_Pos (10UL) /*!< Position of CH2LIMITH field. */
#define SAADC_INTENSET_CH2LIMITH_Msk (0x1UL << SAADC_INTENSET_CH2LIMITH_Pos) /*!< Bit mask of CH2LIMITH field. */
#define SAADC_INTENSET_CH2LIMITH_Disabled (0UL) /*!< Read: Disabled */
#define SAADC_INTENSET_CH2LIMITH_Enabled (1UL) /*!< Read: Enabled */
#define SAADC_INTENSET_CH2LIMITH_Set (1UL) /*!< Enable */

/* Bit 9 : Write '1' to enable interrupt for event CH1LIMITL */
#define SAADC_INTENSET_CH1LIMITL_Pos (9UL) /*!< Position of CH1LIMITL field. */
#define SAADC_INTENSET_CH1LIMITL_Msk (0x1UL << SAADC_INTENSET_CH1LIMITL_Pos) /*!< Bit mask of CH1LIMITL field. */
#define SAADC_INTENSET_CH1LIMITL_Disabled (0UL) /*!< Read: Disabled */
#define SAADC_INTENSET_CH1LIMITL_Enabled (1UL) /*!< Read: Enabled */
#define SAADC_INTENSET_CH1LIMITL_Set (1UL) /*!< Enable */

/* Bit 8 : Write '1' to enable interrupt for event CH1LIMITH */
#define SAADC_INTENSET_CH1LIMITH_Pos (8UL) /*!< Position of CH1LIMITH field. */
#define SAADC_INTENSET_CH1LIMITH_Msk (0x1UL << SAADC_INTENSET_CH1LIMITH_Pos) /*!< Bit mask of CH1LIMITH field. */
#define SAADC_INTENSET_CH1LIMITH_Disabled (0UL) /*!< Read: Disabled */
#define SAADC_INTENSET_CH1LIMITH_Enabled (1UL) /*!< Read: Enabled */
#define SAADC_INTENSET_CH1LIMITH_Set (1UL) /*!< Enable */

/* Bit 7 : Write '1' to enable interrupt for event CH0LIMITL */
#define SAADC_INTENSET_CH0LIMITL_Pos (7UL) /*!< Position of CH0LIMITL field. */
#define SAADC_INTENSET_CH0LIMITL_Msk (0x1UL << SAADC_INTENSET_CH0LIMITL_Pos) /*!< Bit mask of CH0LIMITL field. */
#define SAADC_INTENSET_CH0LIMITL_Disabled (0UL) /*!< Read: Disabled */
#define SAADC_INTENSET_CH0LIMITL_Enabled (1UL) /*!< Read: Enabled */
#define SAADC_INTENSET_CH0LIMITL_Set (1UL) /*!< Enable */

/* Bit 6 : Write '1' to enable interrupt for event CH0LIMITH */
#define SAADC_INTENSET_CH0LIMITH_Pos (6UL) /*!< Position of CH0LIMITH field. */
#define SAADC_INTENSET_CH0LIMITH_Msk (0x1UL << SAADC_INTENSET_CH0LIMITH_Pos) /*!< Bit mask of CH0LIMITH field. */
#define SAADC_INTENSET_CH0LIMITH_Disabled (0UL) /*!< Read: Disabled */
#define SAADC_INTENSET_CH0LIMITH_Enabled (1UL) /*!< Read: Enabled */
#define SAADC_INTENSET_CH0LIMITH_Set (1UL) /*!< Enable */

/* Bit 5 : Write '1' to enable interrupt for event STOPPED */
#define SAADC_INTENSET_STOPPED_Pos (5UL) /*!< Position of STOPPED field. */
#define SAADC_INTENSET_STOPPED_Msk (0x1UL << SAADC_INTENSET_STOPPED_Pos) /*!< Bit mask of STOPPED field. */
#define SAADC_INTENSET_STOPPED_Disabled (0UL) /*!< Read: Disabled */
#define SAADC_INTENSET_STOPPED_Enabled (1UL) /*!< Read: Enabled */
#define SAADC_INTENSET_STOPPED_Set (1UL) /*!< Enable */

/* Bit 4 : Write '1' to enable interrupt for event CALIBRATEDONE */
#define SAADC_INTENSET_CALIBRATEDONE_Pos (4UL) /*!< Position of CALIBRATEDONE field. */
#define SAADC_INTENSET_CALIBRATEDONE_Msk (0x1UL << SAADC_INTENSET_CALIBRATEDONE_Pos) /*!< Bit mask of CALIBRATEDONE field. */
#define SAADC_INTENSET_CALIBRATEDONE_Disabled (0UL) /*!< Read: Disabled */
#define SAADC_INTENSET_CALIBRATEDONE_Enabled (1UL) /*!< Read: Enabled */
#define SAADC_INTENSET_CALIBRATEDONE_Set (1UL) /*!< Enable */

/* Bit 3 : Write '1' to enable interrupt for event RESULTDONE */
#define SAADC_INTENSET_RESULTDONE_Pos (3UL) /*!< Position of RESULTDONE field. */
#define SAADC_INTENSET_RESULTDONE_Msk (0x1UL << SAADC_INTENSET_RESULTDONE_Pos) /*!< Bit mask of RESULTDONE field. */
#define SAADC_INTENSET_RESULTDONE_Disabled (0UL) /*!< Read: Disabled */
#define SAADC_INTENSET_RESULTDONE_Enabled (1UL) /*!< Read: Enabled */
#define SAADC_INTENSET_RESULTDONE_Set (1UL) /*!< Enable */

/* Bit 2 : Write '1' to enable interrupt for event DONE */
#define SAADC_INTENSET_DONE_Pos (2UL) /*!< Position of DONE field. */
#define SAADC_INTENSET_DONE_Msk (0x1UL << SAADC_INTENSET_DONE_Pos) /*!< Bit mask of DONE field. */
#define SAADC_INTENSET_DONE_Disabled (0UL) /*!< Read: Disabled */
#define SAADC_INTENSET_DONE_Enabled (1UL) /*!< Read: Enabled */
#define SAADC_INTENSET_DONE_Set (1UL) /*!< Enable */

/* Bit 1 : Write '1' to enable interrupt for event END */
#define SAADC_INTENSET_END_Pos (1UL) /*!< Position of END field. */
#define SAADC_INTENSET_END_Msk (0x1UL << SAADC_INTENSET_END_Pos) /*!< Bit mask of END field. */
#define SAADC_INTENSET_END_Disabled (0UL) /*!< Read: Disabled */
#define SAADC_INTENSET_END_Enabled (1UL) /*!< Read: Enabled */
#define SAADC_INTENSET_END_Set (1UL) /*!< Enable */

/* Bit 0 : Write '1' to enable interrupt for event STARTED */
#define SAADC_INTENSET_STARTED_Pos (0UL) /*!< Position of STARTED field. */
#define SAADC_INTENSET_STARTED_Msk (0x1UL << SAADC_INTENSET_STARTED_Pos) /*!< Bit mask of STARTED field. */
#define SAADC_INTENSET_STARTED_Disabled (0UL) /*!< Read: Disabled */
#define SAADC_INTENSET_STARTED_Enabled (1UL) /*!< Read: Enabled */
#define SAADC_INTENSET_STARTED_Set (1UL) /*!< Enable */

/* Register: SAADC_INTENCLR */
/* Description: Disable interrupt */

/* Bit 22 : Write '1' to disable interrupt for event AHBERROR */
#define SAADC_INTENCLR_AHBERROR_Pos (22UL) /*!< Position of AHBERROR field. */
#define SAADC_INTENCLR_AHBERROR_Msk (0x1UL << SAADC_INTENCLR_AHBERROR_Pos) /*!< Bit mask of AHBERROR field. */
#define SAADC_INTENCLR_AHBERROR_Disabled (0UL) /*!< Read: Disabled */
#define SAADC_INTENCLR_AHBERROR_Enabled (1UL) /*!< Read: Enabled */
#define SAADC_INTENCLR_AHBERROR_Clear (1UL) /*!< Disable */

/* Bit 21 : Write '1' to disable interrupt for event CH7LIMITL */
#define SAADC_INTENCLR_CH7LIMITL_Pos (21UL) /*!< Position of CH7LIMITL field. */
#define SAADC_INTENCLR_CH7LIMITL_Msk (0x1UL << SAADC_INTENCLR_CH7LIMITL_Pos) /*!< Bit mask of CH7LIMITL field. */
#define SAADC_INTENCLR_CH7LIMITL_Disabled (0UL) /*!< Read: Disabled */
#define SAADC_INTENCLR_CH7LIMITL_Enabled (1UL) /*!< Read: Enabled */
#define SAADC_INTENCLR_CH7LIMITL_Clear (1UL) /*!< Disable */

/* Bit 20 : Write '1' to disable interrupt for event CH7LIMITH */
#define SAADC_INTENCLR_CH7LIMITH_Pos (20UL) /*!< Position of CH7LIMITH field. */
#define SAADC_INTENCLR_CH7LIMITH_Msk (0x1UL << SAADC_INTENCLR_CH7LIMITH_Pos) /*!< Bit mask of CH7LIMITH field. */
#define SAADC_INTENCLR_CH7LIMITH_Disabled (0UL) /*!< Read: Disabled */
#define SAADC_INTENCLR_CH7LIMITH_Enabled (1UL) /*!< Read: Enabled */
#define SAADC_INTENCLR_CH7LIMITH_Clear (1UL) /*!< Disable */

/* Bit 19 : Write '1' to disable interrupt for event CH6LIMITL */
#define SAADC_INTENCLR_CH6LIMITL_Pos (19UL) /*!< Position of CH6LIMITL field. */
#define SAADC_INTENCLR_CH6LIMITL_Msk (0x1UL << SAADC_INTENCLR_CH6LIMITL_Pos) /*!< Bit mask of CH6LIMITL field. */
#define SAADC_INTENCLR_CH6LIMITL_Disabled (0UL) /*!< Read: Disabled */
#define SAADC_INTENCLR_CH6LIMITL_Enabled (1UL) /*!< Read: Enabled */
#define SAADC_INTENCLR_CH6LIMITL_Clear (1UL) /*!< Disable */

/* Bit 18 : Write '1' to disable interrupt for event CH6LIMITH */
#define SAADC_INTENCLR_CH6LIMITH_Pos (18UL) /*!< Position of CH6LIMITH field. */
#define SAADC_INTENCLR_CH6LIMITH_Msk (0x1UL << SAADC_INTENCLR_CH6LIMITH_Pos) /*!< Bit mask of CH6LIMITH field. */
#define SAADC_INTENCLR_CH6LIMITH_Disabled (0UL) /*!< Read: Disabled */
#define SAADC_INTENCLR_CH6LIMITH_Enabled (1UL) /*!< Read: Enabled */
#define SAADC_INTENCLR_CH6LIMITH_Clear (1UL) /*!< Disable */

/* Bit 17 : Write '1' to disable interrupt for event CH5LIMITL */
#define SAADC_INTENCLR_CH5LIMITL_Pos (17UL) /*!< Position of CH5LIMITL field. */
#define SAADC_INTENCLR_CH5LIMITL_Msk (0x1UL << SAADC_INTENCLR_CH5LIMITL_Pos) /*!< Bit mask of CH5LIMITL field. */
#define SAADC_INTENCLR_CH5LIMITL_Disabled (0UL) /*!< Read: Disabled */
#define SAADC_INTENCLR_CH5LIMITL_Enabled (1UL) /*!< Read: Enabled */
#define SAADC_INTENCLR_CH5LIMITL_Clear (1UL) /*!< Disable */

/* Bit 16 : Write '1' to disable interrupt for event CH5LIMITH */
#define SAADC_INTENCLR_CH5LIMITH_Pos (16UL) /*!< Position of CH5LIMITH field. */
#define SAADC_INTENCLR_CH5LIMITH_Msk (0x1UL << SAADC_INTENCLR_CH5LIMITH_Pos) /*!< Bit mask of CH5LIMITH field. */
#define SAADC_INTENCLR_CH5LIMITH_Disabled (0UL) /*!< Read: Disabled */
#define SAADC_INTENCLR_CH5LIMITH_Enabled (1UL) /*!< Read: Enabled */
#define SAADC_INTENCLR_CH5LIMITH_Clear (1UL) /*!< Disable */

/* Bit 15 : Write '1' to disable interrupt for event CH4LIMITL */
#define SAADC_INTENCLR_CH4LIMITL_Pos (15UL) /*!< Position of CH4LIMITL field. */
#define SAADC_INTENCLR_CH4LIMITL_Msk (0x1UL << SAADC_INTENCLR_CH4LIMITL_Pos) /*!< Bit mask of CH4LIMITL field. */
#define SAADC_INTENCLR_CH4LIMITL_Disabled (0UL) /*!< Read: Disabled */
#define SAADC_INTENCLR_CH4LIMITL_Enabled (1UL) /*!< Read: Enabled */
#define SAADC_INTENCLR_CH4LIMITL_Clear (1UL) /*!< Disable */

/* Bit 14 : Write '1' to disable interrupt for event CH4LIMITH */
#define SAADC_INTENCLR_CH4LIMITH_Pos (14UL) /*!< Position of CH4LIMITH field. */
#define SAADC_INTENCLR_CH4LIMITH_Msk (0x1UL << SAADC_INTENCLR_CH4LIMITH_Pos) /*!< Bit mask of CH4LIMITH field. */
#define SAADC_INTENCLR_CH4LIMITH_Disabled (0UL) /*!< Read: Disabled */
#define SAADC_INTENCLR_CH4LIMITH_Enabled (1UL) /*!< Read: Enabled */
#define SAADC_INTENCLR_CH4LIMITH_Clear (1UL) /*!< Disable */

/* Bit 13 : Write '1' to disable interrupt for event CH3LIMITL */
#define SAADC_INTENCLR_CH3LIMITL_Pos (13UL) /*!< Position of CH3LIMITL field. */
#define SAADC_INTENCLR_CH3LIMITL_Msk (0x1UL << SAADC_INTENCLR_CH3LIMITL_Pos) /*!< Bit mask of CH3LIMITL field. */
#define SAADC_INTENCLR_CH3LIMITL_Disabled (0UL) /*!< Read: Disabled */
#define SAADC_INTENCLR_CH3LIMITL_Enabled (1UL) /*!< Read: Enabled */
#define SAADC_INTENCLR_CH3LIMITL_Clear (1UL) /*!< Disable */

/* Bit 12 : Write '1' to disable interrupt for event CH3LIMITH */
#define SAADC_INTENCLR_CH3LIMITH_Pos (12UL) /*!< Position of CH3LIMITH field. */
#define SAADC_INTENCLR_CH3LIMITH_Msk (0x1UL << SAADC_INTENCLR_CH3LIMITH_Pos) /*!< Bit mask of CH3LIMITH field. */
#define SAADC_INTENCLR_CH3LIMITH_Disabled (0UL) /*!< Read: Disabled */
#define SAADC_INTENCLR_CH3LIMITH_Enabled (1UL) /*!< Read: Enabled */
#define SAADC_INTENCLR_CH3LIMITH_Clear (1UL) /*!< Disable */

/* Bit 11 : Write '1' to disable interrupt for event CH2LIMITL */
#define SAADC_INTENCLR_CH2LIMITL_Pos (11UL) /*!< Position of CH2LIMITL field. */
#define SAADC_INTENCLR_CH2LIMITL_Msk (0x1UL << SAADC_INTENCLR_CH2LIMITL_Pos) /*!< Bit mask of CH2LIMITL field. */
#define SAADC_INTENCLR_CH2LIMITL_Disabled (0UL) /*!< Read: Disabled */
#define SAADC_INTENCLR_CH2LIMITL_Enabled (1UL) /*!< Read: Enabled */
#define SAADC_INTENCLR_CH2LIMITL_Clear (1UL) /*!< Disable */

/* Bit 10 : Write '1' to disable interrupt for event CH2LIMITH */
#define SAADC_INTENCLR_CH2LIMITH_Pos (10UL) /*!< Position of CH2LIMITH field. */
#define SAADC_INTENCLR_CH2LIMITH_Msk (0x1UL << SAADC_INTENCLR_CH2LIMITH_Pos) /*!< Bit mask of CH2LIMITH field. */
#define SAADC_INTENCLR_CH2LIMITH_Disabled (0UL) /*!< Read: Disabled */
#define SAADC_INTENCLR_CH2LIMITH_Enabled (1UL) /*!< Read: Enabled */
#define SAADC_INTENCLR_CH2LIMITH_Clear (1UL) /*!< Disable */

/* Bit 9 : Write '1' to disable interrupt for event CH1LIMITL */
#define SAADC_INTENCLR_CH1LIMITL_Pos (9UL) /*!< Position of CH1LIMITL field. */
#define SAADC_INTENCLR_CH1LIMITL_Msk (0x1UL << SAADC_INTENCLR_CH1LIMITL_Pos) /*!< Bit mask of CH1LIMITL field. */
#define SAADC_INTENCLR_CH1LIMITL_Disabled (0UL) /*!< Read: Disabled */
#define SAADC_INTENCLR_CH1LIMITL_Enabled (1UL) /*!< Read: Enabled */
#define SAADC_INTENCLR_CH1LIMITL_Clear (1UL) /*!< Disable */

/* Bit 8 : Write '1' to disable interrupt for event CH1LIMITH */
#define SAADC_INTENCLR_CH1LIMITH_Pos (8UL) /*!< Position of CH1LIMITH field. */
#define SAADC_INTENCLR_CH1LIMITH_Msk (0x1UL << SAADC_INTENCLR_CH1LIMITH_Pos) /*!< Bit mask of CH1LIMITH field. */
#define SAADC_INTENCLR_CH1LIMITH_Disabled (0UL) /*!< Read: Disabled */
#define SAADC_INTENCLR_CH1LIMITH_Enabled (1UL) /*!< Read: Enabled */
#define SAADC_INTENCLR_CH1LIMITH_Clear (1UL) /*!< Disable */

/* Bit 7 : Write '1' to disable interrupt for event CH0LIMITL */
#define SAADC_INTENCLR_CH0LIMITL_Pos (7UL) /*!< Position of CH0LIMITL field. */
#define SAADC_INTENCLR_CH0LIMITL_Msk (0x1UL << SAADC_INTENCLR_CH0LIMITL_Pos) /*!< Bit mask of CH0LIMITL field. */
#define SAADC_INTENCLR_CH0LIMITL_Disabled (0UL) /*!< Read: Disabled */
#define SAADC_INTENCLR_CH0LIMITL_Enabled (1UL) /*!< Read: Enabled */
#define SAADC_INTENCLR_CH0LIMITL_Clear (1UL) /*!< Disable */

/* Bit 6 : Write '1' to disable interrupt for event CH0LIMITH */
#define SAADC_INTENCLR_CH0LIMITH_Pos (6UL) /*!< Position of CH0LIMITH field. */
#define SAADC_INTENCLR_CH0LIMITH_Msk (0x1UL << SAADC_INTENCLR_CH0LIMITH_Pos) /*!< Bit mask of CH0LIMITH field. */
#define SAADC_INTENCLR_CH0LIMITH_Disabled (0UL) /*!< Read: Disabled */
#define SAADC_INTENCLR_CH0LIMITH_Enabled (1UL) /*!< Read: Enabled */
#define SAADC_INTENCLR_CH0LIMITH_Clear (1UL) /*!< Disable */

/* Bit 5 : Write '1' to disable interrupt for event STOPPED */
#define SAADC_INTENCLR_STOPPED_Pos (5UL) /*!< Position of STOPPED field. */
#define SAADC_INTENCLR_STOPPED_Msk (0x1UL << SAADC_INTENCLR_STOPPED_Pos) /*!< Bit mask of STOPPED field. */
#define SAADC_INTENCLR_STOPPED_Disabled (0UL) /*!< Read: Disabled */
#define SAADC_INTENCLR_STOPPED_Enabled (1UL) /*!< Read: Enabled */
#define SAADC_INTENCLR_STOPPED_Clear (1UL) /*!< Disable */

/* Bit 4 : Write '1' to disable interrupt for event CALIBRATEDONE */
#define SAADC_INTENCLR_CALIBRATEDONE_Pos (4UL) /*!< Position of CALIBRATEDONE field. */
#define SAADC_INTENCLR_CALIBRATEDONE_Msk (0x1UL << SAADC_INTENCLR_CALIBRATEDONE_Pos) /*!< Bit mask of CALIBRATEDONE field. */
#define SAADC_INTENCLR_CALIBRATEDONE_Disabled (0UL) /*!< Read: Disabled */
#define SAADC_INTENCLR_CALIBRATEDONE_Enabled (1UL) /*!< Read: Enabled */
#define SAADC_INTENCLR_CALIBRATEDONE_Clear (1UL) /*!< Disable */

/* Bit 3 : Write '1' to disable interrupt for event RESULTDONE */
#define SAADC_INTENCLR_RESULTDONE_Pos (3UL) /*!< Position of RESULTDONE field. */
#define SAADC_INTENCLR_RESULTDONE_Msk (0x1UL << SAADC_INTENCLR_RESULTDONE_Pos) /*!< Bit mask of RESULTDONE field. */
#define SAADC_INTENCLR_RESULTDONE_Disabled (0UL) /*!< Read: Disabled */
#define SAADC_INTENCLR_RESULTDONE_Enabled (1UL) /*!< Read: Enabled */
#define SAADC_INTENCLR_RESULTDONE_Clear (1UL) /*!< Disable */

/* Bit 2 : Write '1' to disable interrupt for event DONE */
#define SAADC_INTENCLR_DONE_Pos (2UL) /*!< Position of DONE field. */
#define SAADC_INTENCLR_DONE_Msk (0x1UL << SAADC_INTENCLR_DONE_Pos) /*!< Bit mask of DONE field. */
#define SAADC_INTENCLR_DONE_Disabled (0UL) /*!< Read: Disabled */
#define SAADC_INTENCLR_DONE_Enabled (1UL) /*!< Read: Enabled */
#define SAADC_INTENCLR_DONE_Clear (1UL) /*!< Disable */

/* Bit 1 : Write '1' to disable interrupt for event END */
#define SAADC_INTENCLR_END_Pos (1UL) /*!< Position of END field. */
#define SAADC_INTENCLR_END_Msk (0x1UL << SAADC_INTENCLR_END_Pos) /*!< Bit mask of END field. */
#define SAADC_INTENCLR_END_Disabled (0UL) /*!< Read: Disabled */
#define SAADC_INTENCLR_END_Enabled (1UL) /*!< Read: Enabled */
#define SAADC_INTENCLR_END_Clear (1UL) /*!< Disable */

/* Bit 0 : Write '1' to disable interrupt for event STARTED */
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
#define SAADC_STATUS_STATUS_Busy (1UL) /*!< ADC is busy. Single conversion in progress. */

/* Register: SAADC_ENABLE */
/* Description: Enable or disable ADC */

/* Bit 0 : Enable or disable ADC */
#define SAADC_ENABLE_ENABLE_Pos (0UL) /*!< Position of ENABLE field. */
#define SAADC_ENABLE_ENABLE_Msk (0x1UL << SAADC_ENABLE_ENABLE_Pos) /*!< Bit mask of ENABLE field. */
#define SAADC_ENABLE_ENABLE_Disabled (0UL) /*!< Disable ADC */
#define SAADC_ENABLE_ENABLE_Enabled (1UL) /*!< Enable ADC */

/* Register: SAADC_CH_PSELP */
/* Description: Description cluster: Input positive pin selection for CH[n] */

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
#define SAADC_CH_PSELP_PSELP_ATB0 (9UL) /*!< ATB0 */
#define SAADC_CH_PSELP_PSELP_ATB1 (0xAUL) /*!< ATB1 */
#define SAADC_CH_PSELP_PSELP_VDD_TEST0 (0xBUL) /*!< Connected to VDD_AO_1V8 */
#define SAADC_CH_PSELP_PSELP_VDD_TEST1 (0xCUL) /*!< Connected to VDD_AO_0V8 */
#define SAADC_CH_PSELP_PSELP_VDD_TEST2 (0xDUL) /*!< Connected to VDD_IO_1V2 */
#define SAADC_CH_PSELP_PSELP_VDD_TEST3 (0xEUL) /*!< Connected to VDD_1V0 */
#define SAADC_CH_PSELP_PSELP_AVSS (0xFUL) /*!< AVSS */
#define SAADC_CH_PSELP_PSELP_SELREF (0x10UL) /*!< Selected reference, voltage determined by PADC_REFSEL */

/* Register: SAADC_CH_PSELN */
/* Description: Description cluster: Input negative pin selection for CH[n] */

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
#define SAADC_CH_PSELN_PSELN_ATB0 (9UL) /*!< ATB0 */
#define SAADC_CH_PSELN_PSELN_ATB1 (0xAUL) /*!< ATB1 */
#define SAADC_CH_PSELN_PSELN_VVDD_TEST4 (0xBUL) /*!< Reserved for VDD_PPA_1V6 (Halti only) */
#define SAADC_CH_PSELN_PSELN_VDD_TEST5 (0xCUL) /*!< Reserved for VDD_IO_3V3 */
#define SAADC_CH_PSELN_PSELN_VDD_TEST6 (0xDUL) /*!< Reserved for VDD_AO_5V0 */
#define SAADC_CH_PSELN_PSELN_VDD_TEST7 (0xEUL) /*!< RFU */
#define SAADC_CH_PSELN_PSELN_AVSS (0xFUL) /*!< AVSS */
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
#define SAADC_CH_CONFIG_MODE_SE (0UL) /*!< Single ended, PSELN will be ignored, negative input to ADC shorted to GND */
#define SAADC_CH_CONFIG_MODE_Diff (1UL) /*!< Differential */

/* Bits 13..12 : Reference control */
#define SAADC_CH_CONFIG_REFSEL_Pos (12UL) /*!< Position of REFSEL field. */
#define SAADC_CH_CONFIG_REFSEL_Msk (0x3UL << SAADC_CH_CONFIG_REFSEL_Pos) /*!< Bit mask of REFSEL field. */
#define SAADC_CH_CONFIG_REFSEL_Internal (0UL) /*!< Internal reference (1.024 V) */
#define SAADC_CH_CONFIG_REFSEL_External (1UL) /*!< External reference given at PADC_EXT_REF_1V2 */
#define SAADC_CH_CONFIG_REFSEL_IBPSR_4U_PADC (2UL) /*!< Reference generated by IBPSR_4U_PADC */

/* Bit 11 : Enable burst mode */
#define SAADC_CH_CONFIG_BURST_Pos (11UL) /*!< Position of BURST field. */
#define SAADC_CH_CONFIG_BURST_Msk (0x1UL << SAADC_CH_CONFIG_BURST_Pos) /*!< Bit mask of BURST field. */
#define SAADC_CH_CONFIG_BURST_Disabled (0UL) /*!< Burst mode is disabled (normal operation) */
#define SAADC_CH_CONFIG_BURST_Enabled (1UL) /*!< Burst mode is enabled. SAADC takes 2^OVERSAMPLE number of samples as fast as it can, and sends the average to Data RAM. */

/* Bits 10..8 : Gain control */
#define SAADC_CH_CONFIG_GAIN_Pos (8UL) /*!< Position of GAIN field. */
#define SAADC_CH_CONFIG_GAIN_Msk (0x7UL << SAADC_CH_CONFIG_GAIN_Pos) /*!< Bit mask of GAIN field. */
#define SAADC_CH_CONFIG_GAIN_Gain2_3 (0UL) /*!< 2/3 */
#define SAADC_CH_CONFIG_GAIN_Gain1 (1UL) /*!< 1 */
#define SAADC_CH_CONFIG_GAIN_Gain2 (2UL) /*!< 2 */
#define SAADC_CH_CONFIG_GAIN_Gain4 (3UL) /*!< 4 */

/* Bits 5..4 : Negative channel resistor control */
#define SAADC_CH_CONFIG_RESN_Pos (4UL) /*!< Position of RESN field. */
#define SAADC_CH_CONFIG_RESN_Msk (0x3UL << SAADC_CH_CONFIG_RESN_Pos) /*!< Bit mask of RESN field. */
#define SAADC_CH_CONFIG_RESN_Bypass (0UL) /*!< Bypass resistor ladder */
#define SAADC_CH_CONFIG_RESN_Pulldown (1UL) /*!< Pull-down to GND */
#define SAADC_CH_CONFIG_RESN_Pullup (2UL) /*!< Pull-up to VDD_AO_1V8 */
#define SAADC_CH_CONFIG_RESN_VDD_AO_1V8_2 (3UL) /*!< Set input at VDD_AO_1V8/2 */

/* Bits 1..0 : Positive channel resistor control */
#define SAADC_CH_CONFIG_RESP_Pos (0UL) /*!< Position of RESP field. */
#define SAADC_CH_CONFIG_RESP_Msk (0x3UL << SAADC_CH_CONFIG_RESP_Pos) /*!< Bit mask of RESP field. */
#define SAADC_CH_CONFIG_RESP_Bypass (0UL) /*!< Bypass resistor ladder */
#define SAADC_CH_CONFIG_RESP_Pulldown (1UL) /*!< Pull-down to GND */
#define SAADC_CH_CONFIG_RESP_Pullup (2UL) /*!< Pull-up to VDD_AO_1V8 */
#define SAADC_CH_CONFIG_RESP_VDD_AO_1V8_2 (3UL) /*!< Set input at VDD_AO_1V8/2 */

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
#define SAADC_TESTCTRL_PWRUP_6us (0UL) /*!< 6 us */
#define SAADC_TESTCTRL_PWRUP_10us (1UL) /*!< 10 us */
#define SAADC_TESTCTRL_PWRUP_15us (2UL) /*!< 15 us */
#define SAADC_TESTCTRL_PWRUP_20us (3UL) /*!< 20 us */

/* Bit 24 : Will enable the input mux in the ADC, so the resistor strings can be connected even when the analog core is powered down. See design description for coding */
#define SAADC_TESTCTRL_ENINMUX_Pos (24UL) /*!< Position of ENINMUX field. */
#define SAADC_TESTCTRL_ENINMUX_Msk (0x1UL << SAADC_TESTCTRL_ENINMUX_Pos) /*!< Bit mask of ENINMUX field. */

/* Bits 23..20 : Analog testbus control. See design description for coding */
#define SAADC_TESTCTRL_ATB_Pos (20UL) /*!< Position of ATB field. */
#define SAADC_TESTCTRL_ATB_Msk (0xFUL << SAADC_TESTCTRL_ATB_Pos) /*!< Bit mask of ATB field. */

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
#define SAADC_CALOFFSET_CALOFFSET_Default (0UL) /*!< Default setting */
#define SAADC_CALOFFSET_CALOFFSET_MaxPos (0x1FUL) /*!< Maximum positive offset */
#define SAADC_CALOFFSET_CALOFFSET_MaxNeg (0x20UL) /*!< maximum negative offset */

/* Register: SAADC_CALGAIN */
/* Description: Calibration control for gain error */

/* Bits 6..0 : Offset binary coding */
#define SAADC_CALGAIN_CALGAIN_Pos (0UL) /*!< Position of CALGAIN field. */
#define SAADC_CALGAIN_CALGAIN_Msk (0x7FUL << SAADC_CALGAIN_CALGAIN_Pos) /*!< Bit mask of CALGAIN field. */
#define SAADC_CALGAIN_CALGAIN_Default (0UL) /*!< Default gain, for +1/2 input (assume full-scale = +-1) the output will be 1024 */
#define SAADC_CALGAIN_CALGAIN_High (0x3FUL) /*!< High gain setting */
#define SAADC_CALGAIN_CALGAIN_Low (0x40UL) /*!< Low gain setting */

/* Register: SAADC_CALVREF */
/* Description: Calibration control for reference voltage */

/* Bits 6..0 : Offset binary coding */
#define SAADC_CALVREF_CALVREF_Pos (0UL) /*!< Position of CALVREF field. */
#define SAADC_CALVREF_CALVREF_Msk (0x7FUL << SAADC_CALVREF_CALVREF_Pos) /*!< Bit mask of CALVREF field. */
#define SAADC_CALVREF_CALVREF_Default (0UL) /*!< Default vref, in typical corner VREF=1.2V */
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
#define SAADC_NOISESHAPE_NOISESHAPE_Disable (0UL) /*!< Oversampling based on accumulate and average. Used in high-speed mode (10-bit) */
#define SAADC_NOISESHAPE_NOISESHAPE_Enable (1UL) /*!< Oversampling based on noise shaping. Used in  high-accuracy modes (12-bit and 14-bit) */

/* Register: SAADC_EASYDMAMODE */
/* Description: Configure EasyDMA mode. */

/* Bit 0 : Enable low-power operation, or use low-latency */
#define SAADC_EASYDMAMODE_LPOP_Pos (0UL) /*!< Position of LPOP field. */
#define SAADC_EASYDMAMODE_LPOP_Msk (0x1UL << SAADC_EASYDMAMODE_LPOP_Pos) /*!< Bit mask of LPOP field. */
#define SAADC_EASYDMAMODE_LPOP_LowLat (0UL) /*!< Low-latency operation */
#define SAADC_EASYDMAMODE_LPOP_LowPower (1UL) /*!< Low-power operation */

/* Register: SAADC_TERMINATEONAHBERROR */
/* Description: Enable EasyDMA termination on AHB error */

/* Bit 0 : Enable termination on AHB error */
#define SAADC_TERMINATEONAHBERROR_ENABLE_Pos (0UL) /*!< Position of ENABLE field. */
#define SAADC_TERMINATEONAHBERROR_ENABLE_Msk (0x1UL << SAADC_TERMINATEONAHBERROR_ENABLE_Pos) /*!< Bit mask of ENABLE field. */
#define SAADC_TERMINATEONAHBERROR_ENABLE_Disabled (0UL) /*!< Termination on AHB error disabled */
#define SAADC_TERMINATEONAHBERROR_ENABLE_Enabled (1UL) /*!< Termination on AHB error enabled */

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
#define TEMP_TASKS_START_TASKS_START_Trigger (1UL) /*!< Trigger task */

/* Register: TEMP_TASKS_STOP */
/* Description: Stop temperature measurement */

/* Bit 0 : Stop temperature measurement */
#define TEMP_TASKS_STOP_TASKS_STOP_Pos (0UL) /*!< Position of TASKS_STOP field. */
#define TEMP_TASKS_STOP_TASKS_STOP_Msk (0x1UL << TEMP_TASKS_STOP_TASKS_STOP_Pos) /*!< Bit mask of TASKS_STOP field. */
#define TEMP_TASKS_STOP_TASKS_STOP_Trigger (1UL) /*!< Trigger task */

/* Register: TEMP_SUBSCRIBE_START */
/* Description: Subscribe configuration for task START */

/* Bit 31 :   */
#define TEMP_SUBSCRIBE_START_EN_Pos (31UL) /*!< Position of EN field. */
#define TEMP_SUBSCRIBE_START_EN_Msk (0x1UL << TEMP_SUBSCRIBE_START_EN_Pos) /*!< Bit mask of EN field. */
#define TEMP_SUBSCRIBE_START_EN_Disabled (0UL) /*!< Disable subscription */
#define TEMP_SUBSCRIBE_START_EN_Enabled (1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task START will subscribe to */
#define TEMP_SUBSCRIBE_START_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define TEMP_SUBSCRIBE_START_CHIDX_Msk (0xFFUL << TEMP_SUBSCRIBE_START_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: TEMP_SUBSCRIBE_STOP */
/* Description: Subscribe configuration for task STOP */

/* Bit 31 :   */
#define TEMP_SUBSCRIBE_STOP_EN_Pos (31UL) /*!< Position of EN field. */
#define TEMP_SUBSCRIBE_STOP_EN_Msk (0x1UL << TEMP_SUBSCRIBE_STOP_EN_Pos) /*!< Bit mask of EN field. */
#define TEMP_SUBSCRIBE_STOP_EN_Disabled (0UL) /*!< Disable subscription */
#define TEMP_SUBSCRIBE_STOP_EN_Enabled (1UL) /*!< Enable subscription */

/* Bits 7..0 : DPPI channel that task STOP will subscribe to */
#define TEMP_SUBSCRIBE_STOP_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define TEMP_SUBSCRIBE_STOP_CHIDX_Msk (0xFFUL << TEMP_SUBSCRIBE_STOP_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: TEMP_EVENTS_DATARDY */
/* Description: Temperature measurement complete, data ready */

/* Bit 0 : Temperature measurement complete, data ready */
#define TEMP_EVENTS_DATARDY_EVENTS_DATARDY_Pos (0UL) /*!< Position of EVENTS_DATARDY field. */
#define TEMP_EVENTS_DATARDY_EVENTS_DATARDY_Msk (0x1UL << TEMP_EVENTS_DATARDY_EVENTS_DATARDY_Pos) /*!< Bit mask of EVENTS_DATARDY field. */
#define TEMP_EVENTS_DATARDY_EVENTS_DATARDY_NotGenerated (0UL) /*!< Event not generated */
#define TEMP_EVENTS_DATARDY_EVENTS_DATARDY_Generated (1UL) /*!< Event generated */

/* Register: TEMP_PUBLISH_DATARDY */
/* Description: Publish configuration for event DATARDY */

/* Bit 31 :   */
#define TEMP_PUBLISH_DATARDY_EN_Pos (31UL) /*!< Position of EN field. */
#define TEMP_PUBLISH_DATARDY_EN_Msk (0x1UL << TEMP_PUBLISH_DATARDY_EN_Pos) /*!< Bit mask of EN field. */
#define TEMP_PUBLISH_DATARDY_EN_Disabled (0UL) /*!< Disable publishing */
#define TEMP_PUBLISH_DATARDY_EN_Enabled (1UL) /*!< Enable publishing */

/* Bits 7..0 : DPPI channel that event DATARDY will publish to. */
#define TEMP_PUBLISH_DATARDY_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define TEMP_PUBLISH_DATARDY_CHIDX_Msk (0xFFUL << TEMP_PUBLISH_DATARDY_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: TEMP_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 0 : Enable or disable interrupt for event DATARDY */
#define TEMP_INTEN_DATARDY_Pos (0UL) /*!< Position of DATARDY field. */
#define TEMP_INTEN_DATARDY_Msk (0x1UL << TEMP_INTEN_DATARDY_Pos) /*!< Bit mask of DATARDY field. */
#define TEMP_INTEN_DATARDY_Disabled (0UL) /*!< Disable */
#define TEMP_INTEN_DATARDY_Enabled (1UL) /*!< Enable */

/* Register: TEMP_INTENSET */
/* Description: Enable interrupt */

/* Bit 0 : Write '1' to enable interrupt for event DATARDY */
#define TEMP_INTENSET_DATARDY_Pos (0UL) /*!< Position of DATARDY field. */
#define TEMP_INTENSET_DATARDY_Msk (0x1UL << TEMP_INTENSET_DATARDY_Pos) /*!< Bit mask of DATARDY field. */
#define TEMP_INTENSET_DATARDY_Disabled (0UL) /*!< Read: Disabled */
#define TEMP_INTENSET_DATARDY_Enabled (1UL) /*!< Read: Enabled */
#define TEMP_INTENSET_DATARDY_Set (1UL) /*!< Enable */

/* Register: TEMP_INTENCLR */
/* Description: Disable interrupt */

/* Bit 0 : Write '1' to disable interrupt for event DATARDY */
#define TEMP_INTENCLR_DATARDY_Pos (0UL) /*!< Position of DATARDY field. */
#define TEMP_INTENCLR_DATARDY_Msk (0x1UL << TEMP_INTENCLR_DATARDY_Pos) /*!< Bit mask of DATARDY field. */
#define TEMP_INTENCLR_DATARDY_Disabled (0UL) /*!< Read: Disabled */
#define TEMP_INTENCLR_DATARDY_Enabled (1UL) /*!< Read: Enabled */
#define TEMP_INTENCLR_DATARDY_Clear (1UL) /*!< Disable */

/* Register: TEMP_ENABLE */
/* Description: Enable temperature sensor bias current */

/* Bit 0 : Enable temperature sensor bias current */
#define TEMP_ENABLE_ENABLE_Pos (0UL) /*!< Position of ENABLE field. */
#define TEMP_ENABLE_ENABLE_Msk (0x1UL << TEMP_ENABLE_ENABLE_Pos) /*!< Bit mask of ENABLE field. */
#define TEMP_ENABLE_ENABLE_Disabled (0UL) /*!< Bias is disabled */
#define TEMP_ENABLE_ENABLE_Enabled (1UL) /*!< Bias is enabled */

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
