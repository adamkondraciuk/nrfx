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

#ifndef __NRF9120_MLM1_MODEM_BITS_H
#define __NRF9120_MLM1_MODEM_BITS_H

/*lint ++flb "Enter library region" */

/* Peripheral: AESL2 */
/* Description: AES-128 HW accelerator for LTE L2 security and MAC */

/* Register: AESL2_TASKS_START_GATHER */
/* Description: Start input DMA */

/* Bit 0 : Start input DMA */
#define AESL2_TASKS_START_GATHER_TASKS_START_GATHER_Pos (0UL) /*!< Position of TASKS_START_GATHER field. */
#define AESL2_TASKS_START_GATHER_TASKS_START_GATHER_Msk (0x1UL << AESL2_TASKS_START_GATHER_TASKS_START_GATHER_Pos) /*!< Bit mask of TASKS_START_GATHER field. */
#define AESL2_TASKS_START_GATHER_TASKS_START_GATHER_Trigger (1UL) /*!< Trigger task */

/* Register: AESL2_TASKS_STOP_GATHER */
/* Description: Stop  input DMA */

/* Bit 0 : Stop  input DMA */
#define AESL2_TASKS_STOP_GATHER_TASKS_STOP_GATHER_Pos (0UL) /*!< Position of TASKS_STOP_GATHER field. */
#define AESL2_TASKS_STOP_GATHER_TASKS_STOP_GATHER_Msk (0x1UL << AESL2_TASKS_STOP_GATHER_TASKS_STOP_GATHER_Pos) /*!< Bit mask of TASKS_STOP_GATHER field. */
#define AESL2_TASKS_STOP_GATHER_TASKS_STOP_GATHER_Trigger (1UL) /*!< Trigger task */

/* Register: AESL2_TASKS_START_SCATTER */
/* Description: Start output DMA */

/* Bit 0 : Start output DMA */
#define AESL2_TASKS_START_SCATTER_TASKS_START_SCATTER_Pos (0UL) /*!< Position of TASKS_START_SCATTER field. */
#define AESL2_TASKS_START_SCATTER_TASKS_START_SCATTER_Msk (0x1UL << AESL2_TASKS_START_SCATTER_TASKS_START_SCATTER_Pos) /*!< Bit mask of TASKS_START_SCATTER field. */
#define AESL2_TASKS_START_SCATTER_TASKS_START_SCATTER_Trigger (1UL) /*!< Trigger task */

/* Register: AESL2_TASKS_STOP_SCATTER */
/* Description: Stop  output DMA */

/* Bit 0 : Stop  output DMA */
#define AESL2_TASKS_STOP_SCATTER_TASKS_STOP_SCATTER_Pos (0UL) /*!< Position of TASKS_STOP_SCATTER field. */
#define AESL2_TASKS_STOP_SCATTER_TASKS_STOP_SCATTER_Msk (0x1UL << AESL2_TASKS_STOP_SCATTER_TASKS_STOP_SCATTER_Pos) /*!< Bit mask of TASKS_STOP_SCATTER field. */
#define AESL2_TASKS_STOP_SCATTER_TASKS_STOP_SCATTER_Trigger (1UL) /*!< Trigger task */

/* Register: AESL2_TASKS_INITIALIZE_AES */
/* Description: New keys (and IV) ready to be used, reset keybytes, ivbytes */

/* Bit 0 : New keys (and IV) ready to be used, reset keybytes, ivbytes */
#define AESL2_TASKS_INITIALIZE_AES_TASKS_INITIALIZE_AES_Pos (0UL) /*!< Position of TASKS_INITIALIZE_AES field. */
#define AESL2_TASKS_INITIALIZE_AES_TASKS_INITIALIZE_AES_Msk (0x1UL << AESL2_TASKS_INITIALIZE_AES_TASKS_INITIALIZE_AES_Pos) /*!< Bit mask of TASKS_INITIALIZE_AES field. */
#define AESL2_TASKS_INITIALIZE_AES_TASKS_INITIALIZE_AES_Trigger (1UL) /*!< Trigger task */

/* Register: AESL2_TASKS_START_OPERATION */
/* Description: Start cipher / MAC calculation depending on MODE */

/* Bit 0 : Start cipher / MAC calculation depending on MODE */
#define AESL2_TASKS_START_OPERATION_TASKS_START_OPERATION_Pos (0UL) /*!< Position of TASKS_START_OPERATION field. */
#define AESL2_TASKS_START_OPERATION_TASKS_START_OPERATION_Msk (0x1UL << AESL2_TASKS_START_OPERATION_TASKS_START_OPERATION_Pos) /*!< Bit mask of TASKS_START_OPERATION field. */
#define AESL2_TASKS_START_OPERATION_TASKS_START_OPERATION_Trigger (1UL) /*!< Trigger task */

/* Register: AESL2_TASKS_FINALIZE_MAC */
/* Description: Finalize MAC calculation */

/* Bit 0 : Finalize MAC calculation */
#define AESL2_TASKS_FINALIZE_MAC_TASKS_FINALIZE_MAC_Pos (0UL) /*!< Position of TASKS_FINALIZE_MAC field. */
#define AESL2_TASKS_FINALIZE_MAC_TASKS_FINALIZE_MAC_Msk (0x1UL << AESL2_TASKS_FINALIZE_MAC_TASKS_FINALIZE_MAC_Pos) /*!< Bit mask of TASKS_FINALIZE_MAC field. */
#define AESL2_TASKS_FINALIZE_MAC_TASKS_FINALIZE_MAC_Trigger (1UL) /*!< Trigger task */

/* Register: AESL2_TASKS_RESET */
/* Description: Stop all transfers and crypto operations (initialize) */

/* Bit 0 : Stop all transfers and crypto operations (initialize) */
#define AESL2_TASKS_RESET_TASKS_RESET_Pos (0UL) /*!< Position of TASKS_RESET field. */
#define AESL2_TASKS_RESET_TASKS_RESET_Msk (0x1UL << AESL2_TASKS_RESET_TASKS_RESET_Pos) /*!< Bit mask of TASKS_RESET field. */
#define AESL2_TASKS_RESET_TASKS_RESET_Trigger (1UL) /*!< Trigger task */

/* Register: AESL2_TaskZeroPenalty_PCP_1 */
/* Description: TaskZeroPenalty register for PCP 1 */

/* Bit 0 :   */
#define AESL2_TaskZeroPenalty_PCP_1_ZERO_PENALTY_Pos (0UL) /*!< Position of ZERO_PENALTY field. */
#define AESL2_TaskZeroPenalty_PCP_1_ZERO_PENALTY_Msk (0x1UL << AESL2_TaskZeroPenalty_PCP_1_ZERO_PENALTY_Pos) /*!< Bit mask of ZERO_PENALTY field. */
#define AESL2_TaskZeroPenalty_PCP_1_ZERO_PENALTY_SET_ZERO_PENALTY (1UL) /*!< Set Zero Penalty */

/* Register: AESL2_TaskFullPenalty_PCP_1 */
/* Description: TaskFullPenalty register for PCP 1 */

/* Bit 0 :   */
#define AESL2_TaskFullPenalty_PCP_1_FULL_PENALTY_Pos (0UL) /*!< Position of FULL_PENALTY field. */
#define AESL2_TaskFullPenalty_PCP_1_FULL_PENALTY_Msk (0x1UL << AESL2_TaskFullPenalty_PCP_1_FULL_PENALTY_Pos) /*!< Bit mask of FULL_PENALTY field. */
#define AESL2_TaskFullPenalty_PCP_1_FULL_PENALTY_SET_FULL_PENALTY (1UL) /*!< Set Full Penalty */

/* Register: AESL2_TaskZeroPenalty_PCP_0 */
/* Description: TaskZeroPenalty register for PCP 0 */

/* Bit 0 :   */
#define AESL2_TaskZeroPenalty_PCP_0_ZERO_PENALTY_Pos (0UL) /*!< Position of ZERO_PENALTY field. */
#define AESL2_TaskZeroPenalty_PCP_0_ZERO_PENALTY_Msk (0x1UL << AESL2_TaskZeroPenalty_PCP_0_ZERO_PENALTY_Pos) /*!< Bit mask of ZERO_PENALTY field. */
#define AESL2_TaskZeroPenalty_PCP_0_ZERO_PENALTY_SET_ZERO_PENALTY (1UL) /*!< Set Zero Penalty */

/* Register: AESL2_TaskFullPenalty_PCP_0 */
/* Description: TaskFullPenalty register for PCP 0 */

/* Bit 0 :   */
#define AESL2_TaskFullPenalty_PCP_0_FULL_PENALTY_Pos (0UL) /*!< Position of FULL_PENALTY field. */
#define AESL2_TaskFullPenalty_PCP_0_FULL_PENALTY_Msk (0x1UL << AESL2_TaskFullPenalty_PCP_0_FULL_PENALTY_Pos) /*!< Bit mask of FULL_PENALTY field. */
#define AESL2_TaskFullPenalty_PCP_0_FULL_PENALTY_SET_FULL_PENALTY (1UL) /*!< Set Full Penalty */

/* Register: AESL2_EVENTS_GATHER_STARTED */
/* Description: Input DMA started */

/* Bit 0 : Input DMA started */
#define AESL2_EVENTS_GATHER_STARTED_EVENTS_GATHER_STARTED_Pos (0UL) /*!< Position of EVENTS_GATHER_STARTED field. */
#define AESL2_EVENTS_GATHER_STARTED_EVENTS_GATHER_STARTED_Msk (0x1UL << AESL2_EVENTS_GATHER_STARTED_EVENTS_GATHER_STARTED_Pos) /*!< Bit mask of EVENTS_GATHER_STARTED field. */
#define AESL2_EVENTS_GATHER_STARTED_EVENTS_GATHER_STARTED_NotGenerated (0UL) /*!< Event not generated */
#define AESL2_EVENTS_GATHER_STARTED_EVENTS_GATHER_STARTED_Generated (1UL) /*!< Event generated */

/* Register: AESL2_EVENTS_GATHER_DONE */
/* Description: Input DMA done */

/* Bit 0 : Input DMA done */
#define AESL2_EVENTS_GATHER_DONE_EVENTS_GATHER_DONE_Pos (0UL) /*!< Position of EVENTS_GATHER_DONE field. */
#define AESL2_EVENTS_GATHER_DONE_EVENTS_GATHER_DONE_Msk (0x1UL << AESL2_EVENTS_GATHER_DONE_EVENTS_GATHER_DONE_Pos) /*!< Bit mask of EVENTS_GATHER_DONE field. */
#define AESL2_EVENTS_GATHER_DONE_EVENTS_GATHER_DONE_NotGenerated (0UL) /*!< Event not generated */
#define AESL2_EVENTS_GATHER_DONE_EVENTS_GATHER_DONE_Generated (1UL) /*!< Event generated */

/* Register: AESL2_EVENTS_SCATTER_STARTED */
/* Description: Output DMA started */

/* Bit 0 : Output DMA started */
#define AESL2_EVENTS_SCATTER_STARTED_EVENTS_SCATTER_STARTED_Pos (0UL) /*!< Position of EVENTS_SCATTER_STARTED field. */
#define AESL2_EVENTS_SCATTER_STARTED_EVENTS_SCATTER_STARTED_Msk (0x1UL << AESL2_EVENTS_SCATTER_STARTED_EVENTS_SCATTER_STARTED_Pos) /*!< Bit mask of EVENTS_SCATTER_STARTED field. */
#define AESL2_EVENTS_SCATTER_STARTED_EVENTS_SCATTER_STARTED_NotGenerated (0UL) /*!< Event not generated */
#define AESL2_EVENTS_SCATTER_STARTED_EVENTS_SCATTER_STARTED_Generated (1UL) /*!< Event generated */

/* Register: AESL2_EVENTS_SCATTER_DONE */
/* Description: Output DMA done */

/* Bit 0 : Output DMA done */
#define AESL2_EVENTS_SCATTER_DONE_EVENTS_SCATTER_DONE_Pos (0UL) /*!< Position of EVENTS_SCATTER_DONE field. */
#define AESL2_EVENTS_SCATTER_DONE_EVENTS_SCATTER_DONE_Msk (0x1UL << AESL2_EVENTS_SCATTER_DONE_EVENTS_SCATTER_DONE_Pos) /*!< Bit mask of EVENTS_SCATTER_DONE field. */
#define AESL2_EVENTS_SCATTER_DONE_EVENTS_SCATTER_DONE_NotGenerated (0UL) /*!< Event not generated */
#define AESL2_EVENTS_SCATTER_DONE_EVENTS_SCATTER_DONE_Generated (1UL) /*!< Event generated */

/* Register: AESL2_EVENTS_IV_READY */
/* Description: IV received (ivbytes == 16) */

/* Bit 0 : IV received (ivbytes == 16) */
#define AESL2_EVENTS_IV_READY_EVENTS_IV_READY_Pos (0UL) /*!< Position of EVENTS_IV_READY field. */
#define AESL2_EVENTS_IV_READY_EVENTS_IV_READY_Msk (0x1UL << AESL2_EVENTS_IV_READY_EVENTS_IV_READY_Pos) /*!< Bit mask of EVENTS_IV_READY field. */
#define AESL2_EVENTS_IV_READY_EVENTS_IV_READY_NotGenerated (0UL) /*!< Event not generated */
#define AESL2_EVENTS_IV_READY_EVENTS_IV_READY_Generated (1UL) /*!< Event generated */

/* Register: AESL2_EVENTS_AES_INITIALIZED */
/* Description: New keys and IV taken into use */

/* Bit 0 : New keys and IV taken into use */
#define AESL2_EVENTS_AES_INITIALIZED_EVENTS_AES_INITIALIZED_Pos (0UL) /*!< Position of EVENTS_AES_INITIALIZED field. */
#define AESL2_EVENTS_AES_INITIALIZED_EVENTS_AES_INITIALIZED_Msk (0x1UL << AESL2_EVENTS_AES_INITIALIZED_EVENTS_AES_INITIALIZED_Pos) /*!< Bit mask of EVENTS_AES_INITIALIZED field. */
#define AESL2_EVENTS_AES_INITIALIZED_EVENTS_AES_INITIALIZED_NotGenerated (0UL) /*!< Event not generated */
#define AESL2_EVENTS_AES_INITIALIZED_EVENTS_AES_INITIALIZED_Generated (1UL) /*!< Event generated */

/* Register: AESL2_EVENTS_MESSAGE_READY */
/* Description: LENGTH == 0 */

/* Bit 0 : LENGTH == 0 */
#define AESL2_EVENTS_MESSAGE_READY_EVENTS_MESSAGE_READY_Pos (0UL) /*!< Position of EVENTS_MESSAGE_READY field. */
#define AESL2_EVENTS_MESSAGE_READY_EVENTS_MESSAGE_READY_Msk (0x1UL << AESL2_EVENTS_MESSAGE_READY_EVENTS_MESSAGE_READY_Pos) /*!< Bit mask of EVENTS_MESSAGE_READY field. */
#define AESL2_EVENTS_MESSAGE_READY_EVENTS_MESSAGE_READY_NotGenerated (0UL) /*!< Event not generated */
#define AESL2_EVENTS_MESSAGE_READY_EVENTS_MESSAGE_READY_Generated (1UL) /*!< Event generated */

/* Register: AESL2_EVENTS_MAC_READY */
/* Description: MAC calculated */

/* Bit 0 : MAC calculated */
#define AESL2_EVENTS_MAC_READY_EVENTS_MAC_READY_Pos (0UL) /*!< Position of EVENTS_MAC_READY field. */
#define AESL2_EVENTS_MAC_READY_EVENTS_MAC_READY_Msk (0x1UL << AESL2_EVENTS_MAC_READY_EVENTS_MAC_READY_Pos) /*!< Bit mask of EVENTS_MAC_READY field. */
#define AESL2_EVENTS_MAC_READY_EVENTS_MAC_READY_NotGenerated (0UL) /*!< Event not generated */
#define AESL2_EVENTS_MAC_READY_EVENTS_MAC_READY_Generated (1UL) /*!< Event generated */

/* Register: AESL2_EVENTS_RESETTED */
/* Description: Resetted (all transfers and crypto operations stopped) */

/* Bit 0 : Resetted (all transfers and crypto operations stopped) */
#define AESL2_EVENTS_RESETTED_EVENTS_RESETTED_Pos (0UL) /*!< Position of EVENTS_RESETTED field. */
#define AESL2_EVENTS_RESETTED_EVENTS_RESETTED_Msk (0x1UL << AESL2_EVENTS_RESETTED_EVENTS_RESETTED_Pos) /*!< Bit mask of EVENTS_RESETTED field. */
#define AESL2_EVENTS_RESETTED_EVENTS_RESETTED_NotGenerated (0UL) /*!< Event not generated */
#define AESL2_EVENTS_RESETTED_EVENTS_RESETTED_Generated (1UL) /*!< Event generated */

/* Register: AESL2_SHORTS */
/* Description: Shortcuts between local events and tasks */

/* Bit 3 : Shortcut between event MESSAGE_READY and task FINALIZE_MAC */
#define AESL2_SHORTS_MESSAGE_READY_FINALIZE_MAC_Pos (3UL) /*!< Position of MESSAGE_READY_FINALIZE_MAC field. */
#define AESL2_SHORTS_MESSAGE_READY_FINALIZE_MAC_Msk (0x1UL << AESL2_SHORTS_MESSAGE_READY_FINALIZE_MAC_Pos) /*!< Bit mask of MESSAGE_READY_FINALIZE_MAC field. */
#define AESL2_SHORTS_MESSAGE_READY_FINALIZE_MAC_Disabled (0UL) /*!< Disable shortcut */
#define AESL2_SHORTS_MESSAGE_READY_FINALIZE_MAC_Enabled (1UL) /*!< Enable shortcut */

/* Bit 2 : Shortcut between event AES_INITIALIZED and task START_OPERATION */
#define AESL2_SHORTS_AES_INITIALIZED_START_OPERATION_Pos (2UL) /*!< Position of AES_INITIALIZED_START_OPERATION field. */
#define AESL2_SHORTS_AES_INITIALIZED_START_OPERATION_Msk (0x1UL << AESL2_SHORTS_AES_INITIALIZED_START_OPERATION_Pos) /*!< Bit mask of AES_INITIALIZED_START_OPERATION field. */
#define AESL2_SHORTS_AES_INITIALIZED_START_OPERATION_Disabled (0UL) /*!< Disable shortcut */
#define AESL2_SHORTS_AES_INITIALIZED_START_OPERATION_Enabled (1UL) /*!< Enable shortcut */

/* Bit 1 : Shortcut between event IV_READY and task INITIALIZE_AES */
#define AESL2_SHORTS_IV_READY_INITIALIZE_AES_Pos (1UL) /*!< Position of IV_READY_INITIALIZE_AES field. */
#define AESL2_SHORTS_IV_READY_INITIALIZE_AES_Msk (0x1UL << AESL2_SHORTS_IV_READY_INITIALIZE_AES_Pos) /*!< Bit mask of IV_READY_INITIALIZE_AES field. */
#define AESL2_SHORTS_IV_READY_INITIALIZE_AES_Disabled (0UL) /*!< Disable shortcut */
#define AESL2_SHORTS_IV_READY_INITIALIZE_AES_Enabled (1UL) /*!< Enable shortcut */

/* Bit 0 : Shortcut between event GATHER_STARTED and task START_SCATTER */
#define AESL2_SHORTS_GATHER_STARTED_START_SCATTER_Pos (0UL) /*!< Position of GATHER_STARTED_START_SCATTER field. */
#define AESL2_SHORTS_GATHER_STARTED_START_SCATTER_Msk (0x1UL << AESL2_SHORTS_GATHER_STARTED_START_SCATTER_Pos) /*!< Bit mask of GATHER_STARTED_START_SCATTER field. */
#define AESL2_SHORTS_GATHER_STARTED_START_SCATTER_Disabled (0UL) /*!< Disable shortcut */
#define AESL2_SHORTS_GATHER_STARTED_START_SCATTER_Enabled (1UL) /*!< Enable shortcut */

/* Register: AESL2_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 8 : Enable or disable interrupt for event RESETTED */
#define AESL2_INTEN_RESETTED_Pos (8UL) /*!< Position of RESETTED field. */
#define AESL2_INTEN_RESETTED_Msk (0x1UL << AESL2_INTEN_RESETTED_Pos) /*!< Bit mask of RESETTED field. */
#define AESL2_INTEN_RESETTED_Disabled (0UL) /*!< Disable */
#define AESL2_INTEN_RESETTED_Enabled (1UL) /*!< Enable */

/* Bit 7 : Enable or disable interrupt for event MAC_READY */
#define AESL2_INTEN_MAC_READY_Pos (7UL) /*!< Position of MAC_READY field. */
#define AESL2_INTEN_MAC_READY_Msk (0x1UL << AESL2_INTEN_MAC_READY_Pos) /*!< Bit mask of MAC_READY field. */
#define AESL2_INTEN_MAC_READY_Disabled (0UL) /*!< Disable */
#define AESL2_INTEN_MAC_READY_Enabled (1UL) /*!< Enable */

/* Bit 6 : Enable or disable interrupt for event MESSAGE_READY */
#define AESL2_INTEN_MESSAGE_READY_Pos (6UL) /*!< Position of MESSAGE_READY field. */
#define AESL2_INTEN_MESSAGE_READY_Msk (0x1UL << AESL2_INTEN_MESSAGE_READY_Pos) /*!< Bit mask of MESSAGE_READY field. */
#define AESL2_INTEN_MESSAGE_READY_Disabled (0UL) /*!< Disable */
#define AESL2_INTEN_MESSAGE_READY_Enabled (1UL) /*!< Enable */

/* Bit 5 : Enable or disable interrupt for event AES_INITIALIZED */
#define AESL2_INTEN_AES_INITIALIZED_Pos (5UL) /*!< Position of AES_INITIALIZED field. */
#define AESL2_INTEN_AES_INITIALIZED_Msk (0x1UL << AESL2_INTEN_AES_INITIALIZED_Pos) /*!< Bit mask of AES_INITIALIZED field. */
#define AESL2_INTEN_AES_INITIALIZED_Disabled (0UL) /*!< Disable */
#define AESL2_INTEN_AES_INITIALIZED_Enabled (1UL) /*!< Enable */

/* Bit 4 : Enable or disable interrupt for event IV_READY */
#define AESL2_INTEN_IV_READY_Pos (4UL) /*!< Position of IV_READY field. */
#define AESL2_INTEN_IV_READY_Msk (0x1UL << AESL2_INTEN_IV_READY_Pos) /*!< Bit mask of IV_READY field. */
#define AESL2_INTEN_IV_READY_Disabled (0UL) /*!< Disable */
#define AESL2_INTEN_IV_READY_Enabled (1UL) /*!< Enable */

/* Bit 3 : Enable or disable interrupt for event SCATTER_DONE */
#define AESL2_INTEN_SCATTER_DONE_Pos (3UL) /*!< Position of SCATTER_DONE field. */
#define AESL2_INTEN_SCATTER_DONE_Msk (0x1UL << AESL2_INTEN_SCATTER_DONE_Pos) /*!< Bit mask of SCATTER_DONE field. */
#define AESL2_INTEN_SCATTER_DONE_Disabled (0UL) /*!< Disable */
#define AESL2_INTEN_SCATTER_DONE_Enabled (1UL) /*!< Enable */

/* Bit 2 : Enable or disable interrupt for event SCATTER_STARTED */
#define AESL2_INTEN_SCATTER_STARTED_Pos (2UL) /*!< Position of SCATTER_STARTED field. */
#define AESL2_INTEN_SCATTER_STARTED_Msk (0x1UL << AESL2_INTEN_SCATTER_STARTED_Pos) /*!< Bit mask of SCATTER_STARTED field. */
#define AESL2_INTEN_SCATTER_STARTED_Disabled (0UL) /*!< Disable */
#define AESL2_INTEN_SCATTER_STARTED_Enabled (1UL) /*!< Enable */

/* Bit 1 : Enable or disable interrupt for event GATHER_DONE */
#define AESL2_INTEN_GATHER_DONE_Pos (1UL) /*!< Position of GATHER_DONE field. */
#define AESL2_INTEN_GATHER_DONE_Msk (0x1UL << AESL2_INTEN_GATHER_DONE_Pos) /*!< Bit mask of GATHER_DONE field. */
#define AESL2_INTEN_GATHER_DONE_Disabled (0UL) /*!< Disable */
#define AESL2_INTEN_GATHER_DONE_Enabled (1UL) /*!< Enable */

/* Bit 0 : Enable or disable interrupt for event GATHER_STARTED */
#define AESL2_INTEN_GATHER_STARTED_Pos (0UL) /*!< Position of GATHER_STARTED field. */
#define AESL2_INTEN_GATHER_STARTED_Msk (0x1UL << AESL2_INTEN_GATHER_STARTED_Pos) /*!< Bit mask of GATHER_STARTED field. */
#define AESL2_INTEN_GATHER_STARTED_Disabled (0UL) /*!< Disable */
#define AESL2_INTEN_GATHER_STARTED_Enabled (1UL) /*!< Enable */

/* Register: AESL2_INTENSET */
/* Description: Enable interrupt */

/* Bit 8 : Write '1' to enable interrupt for event RESETTED */
#define AESL2_INTENSET_RESETTED_Pos (8UL) /*!< Position of RESETTED field. */
#define AESL2_INTENSET_RESETTED_Msk (0x1UL << AESL2_INTENSET_RESETTED_Pos) /*!< Bit mask of RESETTED field. */
#define AESL2_INTENSET_RESETTED_Disabled (0UL) /*!< Read: Disabled */
#define AESL2_INTENSET_RESETTED_Enabled (1UL) /*!< Read: Enabled */
#define AESL2_INTENSET_RESETTED_Set (1UL) /*!< Enable */

/* Bit 7 : Write '1' to enable interrupt for event MAC_READY */
#define AESL2_INTENSET_MAC_READY_Pos (7UL) /*!< Position of MAC_READY field. */
#define AESL2_INTENSET_MAC_READY_Msk (0x1UL << AESL2_INTENSET_MAC_READY_Pos) /*!< Bit mask of MAC_READY field. */
#define AESL2_INTENSET_MAC_READY_Disabled (0UL) /*!< Read: Disabled */
#define AESL2_INTENSET_MAC_READY_Enabled (1UL) /*!< Read: Enabled */
#define AESL2_INTENSET_MAC_READY_Set (1UL) /*!< Enable */

/* Bit 6 : Write '1' to enable interrupt for event MESSAGE_READY */
#define AESL2_INTENSET_MESSAGE_READY_Pos (6UL) /*!< Position of MESSAGE_READY field. */
#define AESL2_INTENSET_MESSAGE_READY_Msk (0x1UL << AESL2_INTENSET_MESSAGE_READY_Pos) /*!< Bit mask of MESSAGE_READY field. */
#define AESL2_INTENSET_MESSAGE_READY_Disabled (0UL) /*!< Read: Disabled */
#define AESL2_INTENSET_MESSAGE_READY_Enabled (1UL) /*!< Read: Enabled */
#define AESL2_INTENSET_MESSAGE_READY_Set (1UL) /*!< Enable */

/* Bit 5 : Write '1' to enable interrupt for event AES_INITIALIZED */
#define AESL2_INTENSET_AES_INITIALIZED_Pos (5UL) /*!< Position of AES_INITIALIZED field. */
#define AESL2_INTENSET_AES_INITIALIZED_Msk (0x1UL << AESL2_INTENSET_AES_INITIALIZED_Pos) /*!< Bit mask of AES_INITIALIZED field. */
#define AESL2_INTENSET_AES_INITIALIZED_Disabled (0UL) /*!< Read: Disabled */
#define AESL2_INTENSET_AES_INITIALIZED_Enabled (1UL) /*!< Read: Enabled */
#define AESL2_INTENSET_AES_INITIALIZED_Set (1UL) /*!< Enable */

/* Bit 4 : Write '1' to enable interrupt for event IV_READY */
#define AESL2_INTENSET_IV_READY_Pos (4UL) /*!< Position of IV_READY field. */
#define AESL2_INTENSET_IV_READY_Msk (0x1UL << AESL2_INTENSET_IV_READY_Pos) /*!< Bit mask of IV_READY field. */
#define AESL2_INTENSET_IV_READY_Disabled (0UL) /*!< Read: Disabled */
#define AESL2_INTENSET_IV_READY_Enabled (1UL) /*!< Read: Enabled */
#define AESL2_INTENSET_IV_READY_Set (1UL) /*!< Enable */

/* Bit 3 : Write '1' to enable interrupt for event SCATTER_DONE */
#define AESL2_INTENSET_SCATTER_DONE_Pos (3UL) /*!< Position of SCATTER_DONE field. */
#define AESL2_INTENSET_SCATTER_DONE_Msk (0x1UL << AESL2_INTENSET_SCATTER_DONE_Pos) /*!< Bit mask of SCATTER_DONE field. */
#define AESL2_INTENSET_SCATTER_DONE_Disabled (0UL) /*!< Read: Disabled */
#define AESL2_INTENSET_SCATTER_DONE_Enabled (1UL) /*!< Read: Enabled */
#define AESL2_INTENSET_SCATTER_DONE_Set (1UL) /*!< Enable */

/* Bit 2 : Write '1' to enable interrupt for event SCATTER_STARTED */
#define AESL2_INTENSET_SCATTER_STARTED_Pos (2UL) /*!< Position of SCATTER_STARTED field. */
#define AESL2_INTENSET_SCATTER_STARTED_Msk (0x1UL << AESL2_INTENSET_SCATTER_STARTED_Pos) /*!< Bit mask of SCATTER_STARTED field. */
#define AESL2_INTENSET_SCATTER_STARTED_Disabled (0UL) /*!< Read: Disabled */
#define AESL2_INTENSET_SCATTER_STARTED_Enabled (1UL) /*!< Read: Enabled */
#define AESL2_INTENSET_SCATTER_STARTED_Set (1UL) /*!< Enable */

/* Bit 1 : Write '1' to enable interrupt for event GATHER_DONE */
#define AESL2_INTENSET_GATHER_DONE_Pos (1UL) /*!< Position of GATHER_DONE field. */
#define AESL2_INTENSET_GATHER_DONE_Msk (0x1UL << AESL2_INTENSET_GATHER_DONE_Pos) /*!< Bit mask of GATHER_DONE field. */
#define AESL2_INTENSET_GATHER_DONE_Disabled (0UL) /*!< Read: Disabled */
#define AESL2_INTENSET_GATHER_DONE_Enabled (1UL) /*!< Read: Enabled */
#define AESL2_INTENSET_GATHER_DONE_Set (1UL) /*!< Enable */

/* Bit 0 : Write '1' to enable interrupt for event GATHER_STARTED */
#define AESL2_INTENSET_GATHER_STARTED_Pos (0UL) /*!< Position of GATHER_STARTED field. */
#define AESL2_INTENSET_GATHER_STARTED_Msk (0x1UL << AESL2_INTENSET_GATHER_STARTED_Pos) /*!< Bit mask of GATHER_STARTED field. */
#define AESL2_INTENSET_GATHER_STARTED_Disabled (0UL) /*!< Read: Disabled */
#define AESL2_INTENSET_GATHER_STARTED_Enabled (1UL) /*!< Read: Enabled */
#define AESL2_INTENSET_GATHER_STARTED_Set (1UL) /*!< Enable */

/* Register: AESL2_INTENCLR */
/* Description: Disable interrupt */

/* Bit 8 : Write '1' to disable interrupt for event RESETTED */
#define AESL2_INTENCLR_RESETTED_Pos (8UL) /*!< Position of RESETTED field. */
#define AESL2_INTENCLR_RESETTED_Msk (0x1UL << AESL2_INTENCLR_RESETTED_Pos) /*!< Bit mask of RESETTED field. */
#define AESL2_INTENCLR_RESETTED_Disabled (0UL) /*!< Read: Disabled */
#define AESL2_INTENCLR_RESETTED_Enabled (1UL) /*!< Read: Enabled */
#define AESL2_INTENCLR_RESETTED_Clear (1UL) /*!< Disable */

/* Bit 7 : Write '1' to disable interrupt for event MAC_READY */
#define AESL2_INTENCLR_MAC_READY_Pos (7UL) /*!< Position of MAC_READY field. */
#define AESL2_INTENCLR_MAC_READY_Msk (0x1UL << AESL2_INTENCLR_MAC_READY_Pos) /*!< Bit mask of MAC_READY field. */
#define AESL2_INTENCLR_MAC_READY_Disabled (0UL) /*!< Read: Disabled */
#define AESL2_INTENCLR_MAC_READY_Enabled (1UL) /*!< Read: Enabled */
#define AESL2_INTENCLR_MAC_READY_Clear (1UL) /*!< Disable */

/* Bit 6 : Write '1' to disable interrupt for event MESSAGE_READY */
#define AESL2_INTENCLR_MESSAGE_READY_Pos (6UL) /*!< Position of MESSAGE_READY field. */
#define AESL2_INTENCLR_MESSAGE_READY_Msk (0x1UL << AESL2_INTENCLR_MESSAGE_READY_Pos) /*!< Bit mask of MESSAGE_READY field. */
#define AESL2_INTENCLR_MESSAGE_READY_Disabled (0UL) /*!< Read: Disabled */
#define AESL2_INTENCLR_MESSAGE_READY_Enabled (1UL) /*!< Read: Enabled */
#define AESL2_INTENCLR_MESSAGE_READY_Clear (1UL) /*!< Disable */

/* Bit 5 : Write '1' to disable interrupt for event AES_INITIALIZED */
#define AESL2_INTENCLR_AES_INITIALIZED_Pos (5UL) /*!< Position of AES_INITIALIZED field. */
#define AESL2_INTENCLR_AES_INITIALIZED_Msk (0x1UL << AESL2_INTENCLR_AES_INITIALIZED_Pos) /*!< Bit mask of AES_INITIALIZED field. */
#define AESL2_INTENCLR_AES_INITIALIZED_Disabled (0UL) /*!< Read: Disabled */
#define AESL2_INTENCLR_AES_INITIALIZED_Enabled (1UL) /*!< Read: Enabled */
#define AESL2_INTENCLR_AES_INITIALIZED_Clear (1UL) /*!< Disable */

/* Bit 4 : Write '1' to disable interrupt for event IV_READY */
#define AESL2_INTENCLR_IV_READY_Pos (4UL) /*!< Position of IV_READY field. */
#define AESL2_INTENCLR_IV_READY_Msk (0x1UL << AESL2_INTENCLR_IV_READY_Pos) /*!< Bit mask of IV_READY field. */
#define AESL2_INTENCLR_IV_READY_Disabled (0UL) /*!< Read: Disabled */
#define AESL2_INTENCLR_IV_READY_Enabled (1UL) /*!< Read: Enabled */
#define AESL2_INTENCLR_IV_READY_Clear (1UL) /*!< Disable */

/* Bit 3 : Write '1' to disable interrupt for event SCATTER_DONE */
#define AESL2_INTENCLR_SCATTER_DONE_Pos (3UL) /*!< Position of SCATTER_DONE field. */
#define AESL2_INTENCLR_SCATTER_DONE_Msk (0x1UL << AESL2_INTENCLR_SCATTER_DONE_Pos) /*!< Bit mask of SCATTER_DONE field. */
#define AESL2_INTENCLR_SCATTER_DONE_Disabled (0UL) /*!< Read: Disabled */
#define AESL2_INTENCLR_SCATTER_DONE_Enabled (1UL) /*!< Read: Enabled */
#define AESL2_INTENCLR_SCATTER_DONE_Clear (1UL) /*!< Disable */

/* Bit 2 : Write '1' to disable interrupt for event SCATTER_STARTED */
#define AESL2_INTENCLR_SCATTER_STARTED_Pos (2UL) /*!< Position of SCATTER_STARTED field. */
#define AESL2_INTENCLR_SCATTER_STARTED_Msk (0x1UL << AESL2_INTENCLR_SCATTER_STARTED_Pos) /*!< Bit mask of SCATTER_STARTED field. */
#define AESL2_INTENCLR_SCATTER_STARTED_Disabled (0UL) /*!< Read: Disabled */
#define AESL2_INTENCLR_SCATTER_STARTED_Enabled (1UL) /*!< Read: Enabled */
#define AESL2_INTENCLR_SCATTER_STARTED_Clear (1UL) /*!< Disable */

/* Bit 1 : Write '1' to disable interrupt for event GATHER_DONE */
#define AESL2_INTENCLR_GATHER_DONE_Pos (1UL) /*!< Position of GATHER_DONE field. */
#define AESL2_INTENCLR_GATHER_DONE_Msk (0x1UL << AESL2_INTENCLR_GATHER_DONE_Pos) /*!< Bit mask of GATHER_DONE field. */
#define AESL2_INTENCLR_GATHER_DONE_Disabled (0UL) /*!< Read: Disabled */
#define AESL2_INTENCLR_GATHER_DONE_Enabled (1UL) /*!< Read: Enabled */
#define AESL2_INTENCLR_GATHER_DONE_Clear (1UL) /*!< Disable */

/* Bit 0 : Write '1' to disable interrupt for event GATHER_STARTED */
#define AESL2_INTENCLR_GATHER_STARTED_Pos (0UL) /*!< Position of GATHER_STARTED field. */
#define AESL2_INTENCLR_GATHER_STARTED_Msk (0x1UL << AESL2_INTENCLR_GATHER_STARTED_Pos) /*!< Bit mask of GATHER_STARTED field. */
#define AESL2_INTENCLR_GATHER_STARTED_Disabled (0UL) /*!< Read: Disabled */
#define AESL2_INTENCLR_GATHER_STARTED_Enabled (1UL) /*!< Read: Enabled */
#define AESL2_INTENCLR_GATHER_STARTED_Clear (1UL) /*!< Disable */

/* Register: AESL2_INTPEND */
/* Description: Pending interrupts */

/* Bit 8 : Read pending status of interrupt for event RESETTED */
#define AESL2_INTPEND_RESETTED_Pos (8UL) /*!< Position of RESETTED field. */
#define AESL2_INTPEND_RESETTED_Msk (0x1UL << AESL2_INTPEND_RESETTED_Pos) /*!< Bit mask of RESETTED field. */
#define AESL2_INTPEND_RESETTED_NotPending (0UL) /*!< Read: Not pending */
#define AESL2_INTPEND_RESETTED_Pending (1UL) /*!< Read: Pending */

/* Bit 7 : Read pending status of interrupt for event MAC_READY */
#define AESL2_INTPEND_MAC_READY_Pos (7UL) /*!< Position of MAC_READY field. */
#define AESL2_INTPEND_MAC_READY_Msk (0x1UL << AESL2_INTPEND_MAC_READY_Pos) /*!< Bit mask of MAC_READY field. */
#define AESL2_INTPEND_MAC_READY_NotPending (0UL) /*!< Read: Not pending */
#define AESL2_INTPEND_MAC_READY_Pending (1UL) /*!< Read: Pending */

/* Bit 6 : Read pending status of interrupt for event MESSAGE_READY */
#define AESL2_INTPEND_MESSAGE_READY_Pos (6UL) /*!< Position of MESSAGE_READY field. */
#define AESL2_INTPEND_MESSAGE_READY_Msk (0x1UL << AESL2_INTPEND_MESSAGE_READY_Pos) /*!< Bit mask of MESSAGE_READY field. */
#define AESL2_INTPEND_MESSAGE_READY_NotPending (0UL) /*!< Read: Not pending */
#define AESL2_INTPEND_MESSAGE_READY_Pending (1UL) /*!< Read: Pending */

/* Bit 5 : Read pending status of interrupt for event AES_INITIALIZED */
#define AESL2_INTPEND_AES_INITIALIZED_Pos (5UL) /*!< Position of AES_INITIALIZED field. */
#define AESL2_INTPEND_AES_INITIALIZED_Msk (0x1UL << AESL2_INTPEND_AES_INITIALIZED_Pos) /*!< Bit mask of AES_INITIALIZED field. */
#define AESL2_INTPEND_AES_INITIALIZED_NotPending (0UL) /*!< Read: Not pending */
#define AESL2_INTPEND_AES_INITIALIZED_Pending (1UL) /*!< Read: Pending */

/* Bit 4 : Read pending status of interrupt for event IV_READY */
#define AESL2_INTPEND_IV_READY_Pos (4UL) /*!< Position of IV_READY field. */
#define AESL2_INTPEND_IV_READY_Msk (0x1UL << AESL2_INTPEND_IV_READY_Pos) /*!< Bit mask of IV_READY field. */
#define AESL2_INTPEND_IV_READY_NotPending (0UL) /*!< Read: Not pending */
#define AESL2_INTPEND_IV_READY_Pending (1UL) /*!< Read: Pending */

/* Bit 3 : Read pending status of interrupt for event SCATTER_DONE */
#define AESL2_INTPEND_SCATTER_DONE_Pos (3UL) /*!< Position of SCATTER_DONE field. */
#define AESL2_INTPEND_SCATTER_DONE_Msk (0x1UL << AESL2_INTPEND_SCATTER_DONE_Pos) /*!< Bit mask of SCATTER_DONE field. */
#define AESL2_INTPEND_SCATTER_DONE_NotPending (0UL) /*!< Read: Not pending */
#define AESL2_INTPEND_SCATTER_DONE_Pending (1UL) /*!< Read: Pending */

/* Bit 2 : Read pending status of interrupt for event SCATTER_STARTED */
#define AESL2_INTPEND_SCATTER_STARTED_Pos (2UL) /*!< Position of SCATTER_STARTED field. */
#define AESL2_INTPEND_SCATTER_STARTED_Msk (0x1UL << AESL2_INTPEND_SCATTER_STARTED_Pos) /*!< Bit mask of SCATTER_STARTED field. */
#define AESL2_INTPEND_SCATTER_STARTED_NotPending (0UL) /*!< Read: Not pending */
#define AESL2_INTPEND_SCATTER_STARTED_Pending (1UL) /*!< Read: Pending */

/* Bit 1 : Read pending status of interrupt for event GATHER_DONE */
#define AESL2_INTPEND_GATHER_DONE_Pos (1UL) /*!< Position of GATHER_DONE field. */
#define AESL2_INTPEND_GATHER_DONE_Msk (0x1UL << AESL2_INTPEND_GATHER_DONE_Pos) /*!< Bit mask of GATHER_DONE field. */
#define AESL2_INTPEND_GATHER_DONE_NotPending (0UL) /*!< Read: Not pending */
#define AESL2_INTPEND_GATHER_DONE_Pending (1UL) /*!< Read: Pending */

/* Bit 0 : Read pending status of interrupt for event GATHER_STARTED */
#define AESL2_INTPEND_GATHER_STARTED_Pos (0UL) /*!< Position of GATHER_STARTED field. */
#define AESL2_INTPEND_GATHER_STARTED_Msk (0x1UL << AESL2_INTPEND_GATHER_STARTED_Pos) /*!< Bit mask of GATHER_STARTED field. */
#define AESL2_INTPEND_GATHER_STARTED_NotPending (0UL) /*!< Read: Not pending */
#define AESL2_INTPEND_GATHER_STARTED_Pending (1UL) /*!< Read: Pending */

/* Register: AESL2_LENGTH */
/* Description: Keystream length in bits (Cipher), message length in bits (MAC) */

/* Bits 31..0 : LENGTH */
#define AESL2_LENGTH_LENGTH_Pos (0UL) /*!< Position of LENGTH field. */
#define AESL2_LENGTH_LENGTH_Msk (0xFFFFFFFFUL << AESL2_LENGTH_LENGTH_Pos) /*!< Bit mask of LENGTH field. */

/* Register: AESL2_MODE */
/* Description: Mode: 0 == Cipher, 1 == MAC */

/* Bit 0 : MODE */
#define AESL2_MODE_MODE_Pos (0UL) /*!< Position of MODE field. */
#define AESL2_MODE_MODE_Msk (0x1UL << AESL2_MODE_MODE_Pos) /*!< Bit mask of MODE field. */
#define AESL2_MODE_MODE_Cipher (0UL) /*!< Ciphering mode */
#define AESL2_MODE_MODE_MAC (1UL) /*!< CMAC mode */

/* Register: AESL2_MAC */
/* Description: EIA2 MAC */

/* Bits 31..0 : MAC */
#define AESL2_MAC_MAC_Pos (0UL) /*!< Position of MAC field. */
#define AESL2_MAC_MAC_Msk (0xFFFFFFFFUL << AESL2_MAC_MAC_Pos) /*!< Bit mask of MAC field. */

/* Register: AESL2_INJOBPTR */
/* Description: Input job pointer */

/* Bits 31..0 : INJOBPTR */
#define AESL2_INJOBPTR_INJOBPTR_Pos (0UL) /*!< Position of INJOBPTR field. */
#define AESL2_INJOBPTR_INJOBPTR_Msk (0xFFFFFFFFUL << AESL2_INJOBPTR_INJOBPTR_Pos) /*!< Bit mask of INJOBPTR field. */

/* Register: AESL2_OUTJOBPTR */
/* Description: Output job pointer */

/* Bits 31..0 : OUTJOBPTR */
#define AESL2_OUTJOBPTR_OUTJOBPTR_Pos (0UL) /*!< Position of OUTJOBPTR field. */
#define AESL2_OUTJOBPTR_OUTJOBPTR_Msk (0xFFFFFFFFUL << AESL2_OUTJOBPTR_OUTJOBPTR_Pos) /*!< Bit mask of OUTJOBPTR field. */

/* Register: AESL2_PENALTY_REG */
/* Description: Description collection: Penalty register for PCP n */

/* Bits 1..0 : Penalty Level */
#define AESL2_PENALTY_REG_Penalty_Pos (0UL) /*!< Position of Penalty field. */
#define AESL2_PENALTY_REG_Penalty_Msk (0x3UL << AESL2_PENALTY_REG_Penalty_Pos) /*!< Bit mask of Penalty field. */
#define AESL2_PENALTY_REG_Penalty_Full (0UL) /*!< Auto 0) Full penalty) */
#define AESL2_PENALTY_REG_Penalty_Semi1 (1UL) /*!< (Auto 1)  Semi (power on, clock off) */
#define AESL2_PENALTY_REG_Penalty_Semi0 (2UL) /*!< (Auto 2) Semi (power on, clock core on, clock buffer off) */
#define AESL2_PENALTY_REG_Penalty_Zero (3UL) /*!< (Auto 3)  Zero penalty */

/* Register: AESL2_FORCE_OVERRIDE */
/* Description: Description collection: Force override register for PCP n */

/* Bit 15 :   */
#define AESL2_FORCE_OVERRIDE_DISABLE_Pos (15UL) /*!< Position of DISABLE field. */
#define AESL2_FORCE_OVERRIDE_DISABLE_Msk (0x1UL << AESL2_FORCE_OVERRIDE_DISABLE_Pos) /*!< Bit mask of DISABLE field. */
#define AESL2_FORCE_OVERRIDE_DISABLE_zero (0UL) /*!< all forcing disabled */
#define AESL2_FORCE_OVERRIDE_DISABLE_one (1UL) /*!< all forcing enabled */

/* Bit 9 :   */
#define AESL2_FORCE_OVERRIDE_PwrreqCore_Pos (9UL) /*!< Position of PwrreqCore field. */
#define AESL2_FORCE_OVERRIDE_PwrreqCore_Msk (0x1UL << AESL2_FORCE_OVERRIDE_PwrreqCore_Pos) /*!< Bit mask of PwrreqCore field. */
#define AESL2_FORCE_OVERRIDE_PwrreqCore_zero (0UL) /*!< powerRequest.core = 0 */
#define AESL2_FORCE_OVERRIDE_PwrreqCore_one (1UL) /*!< powerRequest.core = 1 */

/* Bit 8 :   */
#define AESL2_FORCE_OVERRIDE_PwrreqSW_Pos (8UL) /*!< Position of PwrreqSW field. */
#define AESL2_FORCE_OVERRIDE_PwrreqSW_Msk (0x1UL << AESL2_FORCE_OVERRIDE_PwrreqSW_Pos) /*!< Bit mask of PwrreqSW field. */
#define AESL2_FORCE_OVERRIDE_PwrreqSW_zero (0UL) /*!< powerRequest.switch = 0 */
#define AESL2_FORCE_OVERRIDE_PwrreqSW_one (1UL) /*!< powerRequest.switch = 1 */

/* Bit 7 :   */
#define AESL2_FORCE_OVERRIDE_PwrreqAll_Pos (7UL) /*!< Position of PwrreqAll field. */
#define AESL2_FORCE_OVERRIDE_PwrreqAll_Msk (0x1UL << AESL2_FORCE_OVERRIDE_PwrreqAll_Pos) /*!< Bit mask of PwrreqAll field. */
#define AESL2_FORCE_OVERRIDE_PwrreqAll_zero (0UL) /*!< All clock forcing  disabled */
#define AESL2_FORCE_OVERRIDE_PwrreqAll_one (1UL) /*!< All clock forcing  enabled */

/* Bit 3 :   */
#define AESL2_FORCE_OVERRIDE_ClkreqCore_Pos (3UL) /*!< Position of ClkreqCore field. */
#define AESL2_FORCE_OVERRIDE_ClkreqCore_Msk (0x1UL << AESL2_FORCE_OVERRIDE_ClkreqCore_Pos) /*!< Bit mask of ClkreqCore field. */
#define AESL2_FORCE_OVERRIDE_ClkreqCore_zero (0UL) /*!< clockRequest.core = 0 */
#define AESL2_FORCE_OVERRIDE_ClkreqCore_one (1UL) /*!< clockRequest.core = 1 */

/* Bit 2 :   */
#define AESL2_FORCE_OVERRIDE_ClkreqBuff_Pos (2UL) /*!< Position of ClkreqBuff field. */
#define AESL2_FORCE_OVERRIDE_ClkreqBuff_Msk (0x1UL << AESL2_FORCE_OVERRIDE_ClkreqBuff_Pos) /*!< Bit mask of ClkreqBuff field. */
#define AESL2_FORCE_OVERRIDE_ClkreqBuff_zero (0UL) /*!< clockRequest.buff = 0 */
#define AESL2_FORCE_OVERRIDE_ClkreqBuff_one (1UL) /*!< clockRequest.buff = 1 */

/* Bit 1 :   */
#define AESL2_FORCE_OVERRIDE_ClkreqAll_Pos (1UL) /*!< Position of ClkreqAll field. */
#define AESL2_FORCE_OVERRIDE_ClkreqAll_Msk (0x1UL << AESL2_FORCE_OVERRIDE_ClkreqAll_Pos) /*!< Bit mask of ClkreqAll field. */
#define AESL2_FORCE_OVERRIDE_ClkreqAll_zero (0UL) /*!< clockRequest.switch = 0 */
#define AESL2_FORCE_OVERRIDE_ClkreqAll_one (1UL) /*!< clockRequest.switch = 1 */

/* Bit 0 :   */
#define AESL2_FORCE_OVERRIDE_ChangeMeToo_Pos (0UL) /*!< Position of ChangeMeToo field. */
#define AESL2_FORCE_OVERRIDE_ChangeMeToo_Msk (0x1UL << AESL2_FORCE_OVERRIDE_ChangeMeToo_Pos) /*!< Bit mask of ChangeMeToo field. */
#define AESL2_FORCE_OVERRIDE_ChangeMeToo_zero (0UL) /*!< clockRequest.switch_a = 0 */
#define AESL2_FORCE_OVERRIDE_ChangeMeToo_one (1UL) /*!< clockRequest.switch_a = 1 */

/* Register: AESL2_TURN_OFF_AUTO_CLOCKSOURCE_REQ */
/* Description: Turn of the automatic clock request. */

/* Bit 1 :   */
#define AESL2_TURN_OFF_AUTO_CLOCKSOURCE_REQ_ClockStart1_Pos (1UL) /*!< Position of ClockStart1 field. */
#define AESL2_TURN_OFF_AUTO_CLOCKSOURCE_REQ_ClockStart1_Msk (0x1UL << AESL2_TURN_OFF_AUTO_CLOCKSOURCE_REQ_ClockStart1_Pos) /*!< Bit mask of ClockStart1 field. */
#define AESL2_TURN_OFF_AUTO_CLOCKSOURCE_REQ_ClockStart1_zero (0UL) /*!< normal clock start for PCP 1 */
#define AESL2_TURN_OFF_AUTO_CLOCKSOURCE_REQ_ClockStart1_one (1UL) /*!< turn off normal clock start for PCP 1 */

/* Bit 0 :   */
#define AESL2_TURN_OFF_AUTO_CLOCKSOURCE_REQ_ClockStart0_Pos (0UL) /*!< Position of ClockStart0 field. */
#define AESL2_TURN_OFF_AUTO_CLOCKSOURCE_REQ_ClockStart0_Msk (0x1UL << AESL2_TURN_OFF_AUTO_CLOCKSOURCE_REQ_ClockStart0_Pos) /*!< Bit mask of ClockStart0 field. */
#define AESL2_TURN_OFF_AUTO_CLOCKSOURCE_REQ_ClockStart0_zero (0UL) /*!< normal clock start for PCP 0 */
#define AESL2_TURN_OFF_AUTO_CLOCKSOURCE_REQ_ClockStart0_one (1UL) /*!< turn off normal clock start for PCP 0 */


/* Peripheral: AMLI */
/* Description: AHB Multi-Layer Interface */

/* Register: AMLI_RAMPRI_CPU */
/* Description: AHB bus master priority register for CPU */

/* Bits 27..24 : Priority register for RAM AHB slave 6 */
#define AMLI_RAMPRI_CPU_RAM6_Pos (24UL) /*!< Position of RAM6 field. */
#define AMLI_RAMPRI_CPU_RAM6_Msk (0xFUL << AMLI_RAMPRI_CPU_RAM6_Pos) /*!< Bit mask of RAM6 field. */
#define AMLI_RAMPRI_CPU_RAM6_Pri0 (0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_CPU_RAM6_Pri1 (1UL) /*!< Priority 1 */
#define AMLI_RAMPRI_CPU_RAM6_Pri2 (2UL) /*!< Priority 2 */
#define AMLI_RAMPRI_CPU_RAM6_Pri3 (3UL) /*!< Priority 3 */
#define AMLI_RAMPRI_CPU_RAM6_Pri4 (4UL) /*!< Priority 4 */
#define AMLI_RAMPRI_CPU_RAM6_Pri5 (5UL) /*!< Priority 5 */
#define AMLI_RAMPRI_CPU_RAM6_Pri6 (6UL) /*!< Priority 6 */
#define AMLI_RAMPRI_CPU_RAM6_Pri7 (7UL) /*!< Priority 7 */
#define AMLI_RAMPRI_CPU_RAM6_Pri8 (8UL) /*!< Priority 8 */
#define AMLI_RAMPRI_CPU_RAM6_Pri9 (9UL) /*!< Priority 9 */
#define AMLI_RAMPRI_CPU_RAM6_Pri10 (10UL) /*!< Priority 10 */
#define AMLI_RAMPRI_CPU_RAM6_Pri11 (11UL) /*!< Priority 11 */
#define AMLI_RAMPRI_CPU_RAM6_Pri12 (12UL) /*!< Priority 12 */
#define AMLI_RAMPRI_CPU_RAM6_Pri13 (13UL) /*!< Priority 13 */
#define AMLI_RAMPRI_CPU_RAM6_Pri14 (14UL) /*!< Priority 14 */
#define AMLI_RAMPRI_CPU_RAM6_Pri15 (15UL) /*!< Priority 15 */

/* Bits 23..20 : Priority register for RAM AHB slave 5 */
#define AMLI_RAMPRI_CPU_RAM5_Pos (20UL) /*!< Position of RAM5 field. */
#define AMLI_RAMPRI_CPU_RAM5_Msk (0xFUL << AMLI_RAMPRI_CPU_RAM5_Pos) /*!< Bit mask of RAM5 field. */
#define AMLI_RAMPRI_CPU_RAM5_Pri0 (0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_CPU_RAM5_Pri1 (1UL) /*!< Priority 1 */
#define AMLI_RAMPRI_CPU_RAM5_Pri2 (2UL) /*!< Priority 2 */
#define AMLI_RAMPRI_CPU_RAM5_Pri3 (3UL) /*!< Priority 3 */
#define AMLI_RAMPRI_CPU_RAM5_Pri4 (4UL) /*!< Priority 4 */
#define AMLI_RAMPRI_CPU_RAM5_Pri5 (5UL) /*!< Priority 5 */
#define AMLI_RAMPRI_CPU_RAM5_Pri6 (6UL) /*!< Priority 6 */
#define AMLI_RAMPRI_CPU_RAM5_Pri7 (7UL) /*!< Priority 7 */
#define AMLI_RAMPRI_CPU_RAM5_Pri8 (8UL) /*!< Priority 8 */
#define AMLI_RAMPRI_CPU_RAM5_Pri9 (9UL) /*!< Priority 9 */
#define AMLI_RAMPRI_CPU_RAM5_Pri10 (10UL) /*!< Priority 10 */
#define AMLI_RAMPRI_CPU_RAM5_Pri11 (11UL) /*!< Priority 11 */
#define AMLI_RAMPRI_CPU_RAM5_Pri12 (12UL) /*!< Priority 12 */
#define AMLI_RAMPRI_CPU_RAM5_Pri13 (13UL) /*!< Priority 13 */
#define AMLI_RAMPRI_CPU_RAM5_Pri14 (14UL) /*!< Priority 14 */
#define AMLI_RAMPRI_CPU_RAM5_Pri15 (15UL) /*!< Priority 15 */

/* Bits 19..16 : Priority register for RAM AHB slave 4 */
#define AMLI_RAMPRI_CPU_RAM4_Pos (16UL) /*!< Position of RAM4 field. */
#define AMLI_RAMPRI_CPU_RAM4_Msk (0xFUL << AMLI_RAMPRI_CPU_RAM4_Pos) /*!< Bit mask of RAM4 field. */
#define AMLI_RAMPRI_CPU_RAM4_Pri0 (0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_CPU_RAM4_Pri1 (1UL) /*!< Priority 1 */
#define AMLI_RAMPRI_CPU_RAM4_Pri2 (2UL) /*!< Priority 2 */
#define AMLI_RAMPRI_CPU_RAM4_Pri3 (3UL) /*!< Priority 3 */
#define AMLI_RAMPRI_CPU_RAM4_Pri4 (4UL) /*!< Priority 4 */
#define AMLI_RAMPRI_CPU_RAM4_Pri5 (5UL) /*!< Priority 5 */
#define AMLI_RAMPRI_CPU_RAM4_Pri6 (6UL) /*!< Priority 6 */
#define AMLI_RAMPRI_CPU_RAM4_Pri7 (7UL) /*!< Priority 7 */
#define AMLI_RAMPRI_CPU_RAM4_Pri8 (8UL) /*!< Priority 8 */
#define AMLI_RAMPRI_CPU_RAM4_Pri9 (9UL) /*!< Priority 9 */
#define AMLI_RAMPRI_CPU_RAM4_Pri10 (10UL) /*!< Priority 10 */
#define AMLI_RAMPRI_CPU_RAM4_Pri11 (11UL) /*!< Priority 11 */
#define AMLI_RAMPRI_CPU_RAM4_Pri12 (12UL) /*!< Priority 12 */
#define AMLI_RAMPRI_CPU_RAM4_Pri13 (13UL) /*!< Priority 13 */
#define AMLI_RAMPRI_CPU_RAM4_Pri14 (14UL) /*!< Priority 14 */
#define AMLI_RAMPRI_CPU_RAM4_Pri15 (15UL) /*!< Priority 15 */

/* Bits 15..12 : Priority register for RAM AHB slave 3 */
#define AMLI_RAMPRI_CPU_RAM3_Pos (12UL) /*!< Position of RAM3 field. */
#define AMLI_RAMPRI_CPU_RAM3_Msk (0xFUL << AMLI_RAMPRI_CPU_RAM3_Pos) /*!< Bit mask of RAM3 field. */
#define AMLI_RAMPRI_CPU_RAM3_Pri0 (0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_CPU_RAM3_Pri1 (1UL) /*!< Priority 1 */
#define AMLI_RAMPRI_CPU_RAM3_Pri2 (2UL) /*!< Priority 2 */
#define AMLI_RAMPRI_CPU_RAM3_Pri3 (3UL) /*!< Priority 3 */
#define AMLI_RAMPRI_CPU_RAM3_Pri4 (4UL) /*!< Priority 4 */
#define AMLI_RAMPRI_CPU_RAM3_Pri5 (5UL) /*!< Priority 5 */
#define AMLI_RAMPRI_CPU_RAM3_Pri6 (6UL) /*!< Priority 6 */
#define AMLI_RAMPRI_CPU_RAM3_Pri7 (7UL) /*!< Priority 7 */
#define AMLI_RAMPRI_CPU_RAM3_Pri8 (8UL) /*!< Priority 8 */
#define AMLI_RAMPRI_CPU_RAM3_Pri9 (9UL) /*!< Priority 9 */
#define AMLI_RAMPRI_CPU_RAM3_Pri10 (10UL) /*!< Priority 10 */
#define AMLI_RAMPRI_CPU_RAM3_Pri11 (11UL) /*!< Priority 11 */
#define AMLI_RAMPRI_CPU_RAM3_Pri12 (12UL) /*!< Priority 12 */
#define AMLI_RAMPRI_CPU_RAM3_Pri13 (13UL) /*!< Priority 13 */
#define AMLI_RAMPRI_CPU_RAM3_Pri14 (14UL) /*!< Priority 14 */
#define AMLI_RAMPRI_CPU_RAM3_Pri15 (15UL) /*!< Priority 15 */

/* Bits 11..8 : Priority register for RAM AHB slave 2 */
#define AMLI_RAMPRI_CPU_RAM2_Pos (8UL) /*!< Position of RAM2 field. */
#define AMLI_RAMPRI_CPU_RAM2_Msk (0xFUL << AMLI_RAMPRI_CPU_RAM2_Pos) /*!< Bit mask of RAM2 field. */
#define AMLI_RAMPRI_CPU_RAM2_Pri0 (0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_CPU_RAM2_Pri1 (1UL) /*!< Priority 1 */
#define AMLI_RAMPRI_CPU_RAM2_Pri2 (2UL) /*!< Priority 2 */
#define AMLI_RAMPRI_CPU_RAM2_Pri3 (3UL) /*!< Priority 3 */
#define AMLI_RAMPRI_CPU_RAM2_Pri4 (4UL) /*!< Priority 4 */
#define AMLI_RAMPRI_CPU_RAM2_Pri5 (5UL) /*!< Priority 5 */
#define AMLI_RAMPRI_CPU_RAM2_Pri6 (6UL) /*!< Priority 6 */
#define AMLI_RAMPRI_CPU_RAM2_Pri7 (7UL) /*!< Priority 7 */
#define AMLI_RAMPRI_CPU_RAM2_Pri8 (8UL) /*!< Priority 8 */
#define AMLI_RAMPRI_CPU_RAM2_Pri9 (9UL) /*!< Priority 9 */
#define AMLI_RAMPRI_CPU_RAM2_Pri10 (10UL) /*!< Priority 10 */
#define AMLI_RAMPRI_CPU_RAM2_Pri11 (11UL) /*!< Priority 11 */
#define AMLI_RAMPRI_CPU_RAM2_Pri12 (12UL) /*!< Priority 12 */
#define AMLI_RAMPRI_CPU_RAM2_Pri13 (13UL) /*!< Priority 13 */
#define AMLI_RAMPRI_CPU_RAM2_Pri14 (14UL) /*!< Priority 14 */
#define AMLI_RAMPRI_CPU_RAM2_Pri15 (15UL) /*!< Priority 15 */

/* Bits 7..4 : Priority register for RAM AHB slave 1 */
#define AMLI_RAMPRI_CPU_RAM1_Pos (4UL) /*!< Position of RAM1 field. */
#define AMLI_RAMPRI_CPU_RAM1_Msk (0xFUL << AMLI_RAMPRI_CPU_RAM1_Pos) /*!< Bit mask of RAM1 field. */
#define AMLI_RAMPRI_CPU_RAM1_Pri0 (0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_CPU_RAM1_Pri1 (1UL) /*!< Priority 1 */
#define AMLI_RAMPRI_CPU_RAM1_Pri2 (2UL) /*!< Priority 2 */
#define AMLI_RAMPRI_CPU_RAM1_Pri3 (3UL) /*!< Priority 3 */
#define AMLI_RAMPRI_CPU_RAM1_Pri4 (4UL) /*!< Priority 4 */
#define AMLI_RAMPRI_CPU_RAM1_Pri5 (5UL) /*!< Priority 5 */
#define AMLI_RAMPRI_CPU_RAM1_Pri6 (6UL) /*!< Priority 6 */
#define AMLI_RAMPRI_CPU_RAM1_Pri7 (7UL) /*!< Priority 7 */
#define AMLI_RAMPRI_CPU_RAM1_Pri8 (8UL) /*!< Priority 8 */
#define AMLI_RAMPRI_CPU_RAM1_Pri9 (9UL) /*!< Priority 9 */
#define AMLI_RAMPRI_CPU_RAM1_Pri10 (10UL) /*!< Priority 10 */
#define AMLI_RAMPRI_CPU_RAM1_Pri11 (11UL) /*!< Priority 11 */
#define AMLI_RAMPRI_CPU_RAM1_Pri12 (12UL) /*!< Priority 12 */
#define AMLI_RAMPRI_CPU_RAM1_Pri13 (13UL) /*!< Priority 13 */
#define AMLI_RAMPRI_CPU_RAM1_Pri14 (14UL) /*!< Priority 14 */
#define AMLI_RAMPRI_CPU_RAM1_Pri15 (15UL) /*!< Priority 15 */

/* Bits 3..0 : Priority register for RAM AHB slave 0 */
#define AMLI_RAMPRI_CPU_RAM0_Pos (0UL) /*!< Position of RAM0 field. */
#define AMLI_RAMPRI_CPU_RAM0_Msk (0xFUL << AMLI_RAMPRI_CPU_RAM0_Pos) /*!< Bit mask of RAM0 field. */
#define AMLI_RAMPRI_CPU_RAM0_Pri0 (0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_CPU_RAM0_Pri1 (1UL) /*!< Priority 1 */
#define AMLI_RAMPRI_CPU_RAM0_Pri2 (2UL) /*!< Priority 2 */
#define AMLI_RAMPRI_CPU_RAM0_Pri3 (3UL) /*!< Priority 3 */
#define AMLI_RAMPRI_CPU_RAM0_Pri4 (4UL) /*!< Priority 4 */
#define AMLI_RAMPRI_CPU_RAM0_Pri5 (5UL) /*!< Priority 5 */
#define AMLI_RAMPRI_CPU_RAM0_Pri6 (6UL) /*!< Priority 6 */
#define AMLI_RAMPRI_CPU_RAM0_Pri7 (7UL) /*!< Priority 7 */
#define AMLI_RAMPRI_CPU_RAM0_Pri8 (8UL) /*!< Priority 8 */
#define AMLI_RAMPRI_CPU_RAM0_Pri9 (9UL) /*!< Priority 9 */
#define AMLI_RAMPRI_CPU_RAM0_Pri10 (10UL) /*!< Priority 10 */
#define AMLI_RAMPRI_CPU_RAM0_Pri11 (11UL) /*!< Priority 11 */
#define AMLI_RAMPRI_CPU_RAM0_Pri12 (12UL) /*!< Priority 12 */
#define AMLI_RAMPRI_CPU_RAM0_Pri13 (13UL) /*!< Priority 13 */
#define AMLI_RAMPRI_CPU_RAM0_Pri14 (14UL) /*!< Priority 14 */
#define AMLI_RAMPRI_CPU_RAM0_Pri15 (15UL) /*!< Priority 15 */

/* Register: AMLI_RAMPRI_EXTRAM */
/* Description: Description collection: AHB bus master priority register for external RAM slave port (EXTRAMs) */

/* Bits 27..24 : Priority register for RAM AHB slave 6 */
#define AMLI_RAMPRI_EXTRAM_RAM6_Pos (24UL) /*!< Position of RAM6 field. */
#define AMLI_RAMPRI_EXTRAM_RAM6_Msk (0xFUL << AMLI_RAMPRI_EXTRAM_RAM6_Pos) /*!< Bit mask of RAM6 field. */
#define AMLI_RAMPRI_EXTRAM_RAM6_Pri0 (0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_EXTRAM_RAM6_Pri1 (1UL) /*!< Priority 1 */
#define AMLI_RAMPRI_EXTRAM_RAM6_Pri2 (2UL) /*!< Priority 2 */
#define AMLI_RAMPRI_EXTRAM_RAM6_Pri3 (3UL) /*!< Priority 3 */
#define AMLI_RAMPRI_EXTRAM_RAM6_Pri4 (4UL) /*!< Priority 4 */
#define AMLI_RAMPRI_EXTRAM_RAM6_Pri5 (5UL) /*!< Priority 5 */
#define AMLI_RAMPRI_EXTRAM_RAM6_Pri6 (6UL) /*!< Priority 6 */
#define AMLI_RAMPRI_EXTRAM_RAM6_Pri7 (7UL) /*!< Priority 7 */
#define AMLI_RAMPRI_EXTRAM_RAM6_Pri8 (8UL) /*!< Priority 8 */
#define AMLI_RAMPRI_EXTRAM_RAM6_Pri9 (9UL) /*!< Priority 9 */
#define AMLI_RAMPRI_EXTRAM_RAM6_Pri10 (10UL) /*!< Priority 10 */
#define AMLI_RAMPRI_EXTRAM_RAM6_Pri11 (11UL) /*!< Priority 11 */
#define AMLI_RAMPRI_EXTRAM_RAM6_Pri12 (12UL) /*!< Priority 12 */
#define AMLI_RAMPRI_EXTRAM_RAM6_Pri13 (13UL) /*!< Priority 13 */
#define AMLI_RAMPRI_EXTRAM_RAM6_Pri14 (14UL) /*!< Priority 14 */
#define AMLI_RAMPRI_EXTRAM_RAM6_Pri15 (15UL) /*!< Priority 15 */

/* Bits 23..20 : Priority register for RAM AHB slave 5 */
#define AMLI_RAMPRI_EXTRAM_RAM5_Pos (20UL) /*!< Position of RAM5 field. */
#define AMLI_RAMPRI_EXTRAM_RAM5_Msk (0xFUL << AMLI_RAMPRI_EXTRAM_RAM5_Pos) /*!< Bit mask of RAM5 field. */
#define AMLI_RAMPRI_EXTRAM_RAM5_Pri0 (0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_EXTRAM_RAM5_Pri1 (1UL) /*!< Priority 1 */
#define AMLI_RAMPRI_EXTRAM_RAM5_Pri2 (2UL) /*!< Priority 2 */
#define AMLI_RAMPRI_EXTRAM_RAM5_Pri3 (3UL) /*!< Priority 3 */
#define AMLI_RAMPRI_EXTRAM_RAM5_Pri4 (4UL) /*!< Priority 4 */
#define AMLI_RAMPRI_EXTRAM_RAM5_Pri5 (5UL) /*!< Priority 5 */
#define AMLI_RAMPRI_EXTRAM_RAM5_Pri6 (6UL) /*!< Priority 6 */
#define AMLI_RAMPRI_EXTRAM_RAM5_Pri7 (7UL) /*!< Priority 7 */
#define AMLI_RAMPRI_EXTRAM_RAM5_Pri8 (8UL) /*!< Priority 8 */
#define AMLI_RAMPRI_EXTRAM_RAM5_Pri9 (9UL) /*!< Priority 9 */
#define AMLI_RAMPRI_EXTRAM_RAM5_Pri10 (10UL) /*!< Priority 10 */
#define AMLI_RAMPRI_EXTRAM_RAM5_Pri11 (11UL) /*!< Priority 11 */
#define AMLI_RAMPRI_EXTRAM_RAM5_Pri12 (12UL) /*!< Priority 12 */
#define AMLI_RAMPRI_EXTRAM_RAM5_Pri13 (13UL) /*!< Priority 13 */
#define AMLI_RAMPRI_EXTRAM_RAM5_Pri14 (14UL) /*!< Priority 14 */
#define AMLI_RAMPRI_EXTRAM_RAM5_Pri15 (15UL) /*!< Priority 15 */

/* Bits 19..16 : Priority register for RAM AHB slave 4 */
#define AMLI_RAMPRI_EXTRAM_RAM4_Pos (16UL) /*!< Position of RAM4 field. */
#define AMLI_RAMPRI_EXTRAM_RAM4_Msk (0xFUL << AMLI_RAMPRI_EXTRAM_RAM4_Pos) /*!< Bit mask of RAM4 field. */
#define AMLI_RAMPRI_EXTRAM_RAM4_Pri0 (0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_EXTRAM_RAM4_Pri1 (1UL) /*!< Priority 1 */
#define AMLI_RAMPRI_EXTRAM_RAM4_Pri2 (2UL) /*!< Priority 2 */
#define AMLI_RAMPRI_EXTRAM_RAM4_Pri3 (3UL) /*!< Priority 3 */
#define AMLI_RAMPRI_EXTRAM_RAM4_Pri4 (4UL) /*!< Priority 4 */
#define AMLI_RAMPRI_EXTRAM_RAM4_Pri5 (5UL) /*!< Priority 5 */
#define AMLI_RAMPRI_EXTRAM_RAM4_Pri6 (6UL) /*!< Priority 6 */
#define AMLI_RAMPRI_EXTRAM_RAM4_Pri7 (7UL) /*!< Priority 7 */
#define AMLI_RAMPRI_EXTRAM_RAM4_Pri8 (8UL) /*!< Priority 8 */
#define AMLI_RAMPRI_EXTRAM_RAM4_Pri9 (9UL) /*!< Priority 9 */
#define AMLI_RAMPRI_EXTRAM_RAM4_Pri10 (10UL) /*!< Priority 10 */
#define AMLI_RAMPRI_EXTRAM_RAM4_Pri11 (11UL) /*!< Priority 11 */
#define AMLI_RAMPRI_EXTRAM_RAM4_Pri12 (12UL) /*!< Priority 12 */
#define AMLI_RAMPRI_EXTRAM_RAM4_Pri13 (13UL) /*!< Priority 13 */
#define AMLI_RAMPRI_EXTRAM_RAM4_Pri14 (14UL) /*!< Priority 14 */
#define AMLI_RAMPRI_EXTRAM_RAM4_Pri15 (15UL) /*!< Priority 15 */

/* Bits 15..12 : Priority register for RAM AHB slave 3 */
#define AMLI_RAMPRI_EXTRAM_RAM3_Pos (12UL) /*!< Position of RAM3 field. */
#define AMLI_RAMPRI_EXTRAM_RAM3_Msk (0xFUL << AMLI_RAMPRI_EXTRAM_RAM3_Pos) /*!< Bit mask of RAM3 field. */
#define AMLI_RAMPRI_EXTRAM_RAM3_Pri0 (0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_EXTRAM_RAM3_Pri1 (1UL) /*!< Priority 1 */
#define AMLI_RAMPRI_EXTRAM_RAM3_Pri2 (2UL) /*!< Priority 2 */
#define AMLI_RAMPRI_EXTRAM_RAM3_Pri3 (3UL) /*!< Priority 3 */
#define AMLI_RAMPRI_EXTRAM_RAM3_Pri4 (4UL) /*!< Priority 4 */
#define AMLI_RAMPRI_EXTRAM_RAM3_Pri5 (5UL) /*!< Priority 5 */
#define AMLI_RAMPRI_EXTRAM_RAM3_Pri6 (6UL) /*!< Priority 6 */
#define AMLI_RAMPRI_EXTRAM_RAM3_Pri7 (7UL) /*!< Priority 7 */
#define AMLI_RAMPRI_EXTRAM_RAM3_Pri8 (8UL) /*!< Priority 8 */
#define AMLI_RAMPRI_EXTRAM_RAM3_Pri9 (9UL) /*!< Priority 9 */
#define AMLI_RAMPRI_EXTRAM_RAM3_Pri10 (10UL) /*!< Priority 10 */
#define AMLI_RAMPRI_EXTRAM_RAM3_Pri11 (11UL) /*!< Priority 11 */
#define AMLI_RAMPRI_EXTRAM_RAM3_Pri12 (12UL) /*!< Priority 12 */
#define AMLI_RAMPRI_EXTRAM_RAM3_Pri13 (13UL) /*!< Priority 13 */
#define AMLI_RAMPRI_EXTRAM_RAM3_Pri14 (14UL) /*!< Priority 14 */
#define AMLI_RAMPRI_EXTRAM_RAM3_Pri15 (15UL) /*!< Priority 15 */

/* Bits 11..8 : Priority register for RAM AHB slave 2 */
#define AMLI_RAMPRI_EXTRAM_RAM2_Pos (8UL) /*!< Position of RAM2 field. */
#define AMLI_RAMPRI_EXTRAM_RAM2_Msk (0xFUL << AMLI_RAMPRI_EXTRAM_RAM2_Pos) /*!< Bit mask of RAM2 field. */
#define AMLI_RAMPRI_EXTRAM_RAM2_Pri0 (0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_EXTRAM_RAM2_Pri1 (1UL) /*!< Priority 1 */
#define AMLI_RAMPRI_EXTRAM_RAM2_Pri2 (2UL) /*!< Priority 2 */
#define AMLI_RAMPRI_EXTRAM_RAM2_Pri3 (3UL) /*!< Priority 3 */
#define AMLI_RAMPRI_EXTRAM_RAM2_Pri4 (4UL) /*!< Priority 4 */
#define AMLI_RAMPRI_EXTRAM_RAM2_Pri5 (5UL) /*!< Priority 5 */
#define AMLI_RAMPRI_EXTRAM_RAM2_Pri6 (6UL) /*!< Priority 6 */
#define AMLI_RAMPRI_EXTRAM_RAM2_Pri7 (7UL) /*!< Priority 7 */
#define AMLI_RAMPRI_EXTRAM_RAM2_Pri8 (8UL) /*!< Priority 8 */
#define AMLI_RAMPRI_EXTRAM_RAM2_Pri9 (9UL) /*!< Priority 9 */
#define AMLI_RAMPRI_EXTRAM_RAM2_Pri10 (10UL) /*!< Priority 10 */
#define AMLI_RAMPRI_EXTRAM_RAM2_Pri11 (11UL) /*!< Priority 11 */
#define AMLI_RAMPRI_EXTRAM_RAM2_Pri12 (12UL) /*!< Priority 12 */
#define AMLI_RAMPRI_EXTRAM_RAM2_Pri13 (13UL) /*!< Priority 13 */
#define AMLI_RAMPRI_EXTRAM_RAM2_Pri14 (14UL) /*!< Priority 14 */
#define AMLI_RAMPRI_EXTRAM_RAM2_Pri15 (15UL) /*!< Priority 15 */

/* Bits 7..4 : Priority register for RAM AHB slave 1 */
#define AMLI_RAMPRI_EXTRAM_RAM1_Pos (4UL) /*!< Position of RAM1 field. */
#define AMLI_RAMPRI_EXTRAM_RAM1_Msk (0xFUL << AMLI_RAMPRI_EXTRAM_RAM1_Pos) /*!< Bit mask of RAM1 field. */
#define AMLI_RAMPRI_EXTRAM_RAM1_Pri0 (0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_EXTRAM_RAM1_Pri1 (1UL) /*!< Priority 1 */
#define AMLI_RAMPRI_EXTRAM_RAM1_Pri2 (2UL) /*!< Priority 2 */
#define AMLI_RAMPRI_EXTRAM_RAM1_Pri3 (3UL) /*!< Priority 3 */
#define AMLI_RAMPRI_EXTRAM_RAM1_Pri4 (4UL) /*!< Priority 4 */
#define AMLI_RAMPRI_EXTRAM_RAM1_Pri5 (5UL) /*!< Priority 5 */
#define AMLI_RAMPRI_EXTRAM_RAM1_Pri6 (6UL) /*!< Priority 6 */
#define AMLI_RAMPRI_EXTRAM_RAM1_Pri7 (7UL) /*!< Priority 7 */
#define AMLI_RAMPRI_EXTRAM_RAM1_Pri8 (8UL) /*!< Priority 8 */
#define AMLI_RAMPRI_EXTRAM_RAM1_Pri9 (9UL) /*!< Priority 9 */
#define AMLI_RAMPRI_EXTRAM_RAM1_Pri10 (10UL) /*!< Priority 10 */
#define AMLI_RAMPRI_EXTRAM_RAM1_Pri11 (11UL) /*!< Priority 11 */
#define AMLI_RAMPRI_EXTRAM_RAM1_Pri12 (12UL) /*!< Priority 12 */
#define AMLI_RAMPRI_EXTRAM_RAM1_Pri13 (13UL) /*!< Priority 13 */
#define AMLI_RAMPRI_EXTRAM_RAM1_Pri14 (14UL) /*!< Priority 14 */
#define AMLI_RAMPRI_EXTRAM_RAM1_Pri15 (15UL) /*!< Priority 15 */

/* Bits 3..0 : Priority register for RAM AHB slave 0 */
#define AMLI_RAMPRI_EXTRAM_RAM0_Pos (0UL) /*!< Position of RAM0 field. */
#define AMLI_RAMPRI_EXTRAM_RAM0_Msk (0xFUL << AMLI_RAMPRI_EXTRAM_RAM0_Pos) /*!< Bit mask of RAM0 field. */
#define AMLI_RAMPRI_EXTRAM_RAM0_Pri0 (0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_EXTRAM_RAM0_Pri1 (1UL) /*!< Priority 1 */
#define AMLI_RAMPRI_EXTRAM_RAM0_Pri2 (2UL) /*!< Priority 2 */
#define AMLI_RAMPRI_EXTRAM_RAM0_Pri3 (3UL) /*!< Priority 3 */
#define AMLI_RAMPRI_EXTRAM_RAM0_Pri4 (4UL) /*!< Priority 4 */
#define AMLI_RAMPRI_EXTRAM_RAM0_Pri5 (5UL) /*!< Priority 5 */
#define AMLI_RAMPRI_EXTRAM_RAM0_Pri6 (6UL) /*!< Priority 6 */
#define AMLI_RAMPRI_EXTRAM_RAM0_Pri7 (7UL) /*!< Priority 7 */
#define AMLI_RAMPRI_EXTRAM_RAM0_Pri8 (8UL) /*!< Priority 8 */
#define AMLI_RAMPRI_EXTRAM_RAM0_Pri9 (9UL) /*!< Priority 9 */
#define AMLI_RAMPRI_EXTRAM_RAM0_Pri10 (10UL) /*!< Priority 10 */
#define AMLI_RAMPRI_EXTRAM_RAM0_Pri11 (11UL) /*!< Priority 11 */
#define AMLI_RAMPRI_EXTRAM_RAM0_Pri12 (12UL) /*!< Priority 12 */
#define AMLI_RAMPRI_EXTRAM_RAM0_Pri13 (13UL) /*!< Priority 13 */
#define AMLI_RAMPRI_EXTRAM_RAM0_Pri14 (14UL) /*!< Priority 14 */
#define AMLI_RAMPRI_EXTRAM_RAM0_Pri15 (15UL) /*!< Priority 15 */


/* Peripheral: BBDLL */
/* Description: Base Band  DLL */

/* Register: BBDLL_EVENTS_LOCKERROR */
/* Description: Error event, BBDLL no longer in lock */

/* Bit 0 : Error event, BBDLL no longer in lock */
#define BBDLL_EVENTS_LOCKERROR_EVENTS_LOCKERROR_Pos (0UL) /*!< Position of EVENTS_LOCKERROR field. */
#define BBDLL_EVENTS_LOCKERROR_EVENTS_LOCKERROR_Msk (0x1UL << BBDLL_EVENTS_LOCKERROR_EVENTS_LOCKERROR_Pos) /*!< Bit mask of EVENTS_LOCKERROR field. */
#define BBDLL_EVENTS_LOCKERROR_EVENTS_LOCKERROR_NotGenerated (0UL) /*!< Event not generated */
#define BBDLL_EVENTS_LOCKERROR_EVENTS_LOCKERROR_Generated (1UL) /*!< Event generated */

/* Register: BBDLL_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 0 : Enable or disable interrupt for event LOCKERROR */
#define BBDLL_INTEN_LOCKERROR_Pos (0UL) /*!< Position of LOCKERROR field. */
#define BBDLL_INTEN_LOCKERROR_Msk (0x1UL << BBDLL_INTEN_LOCKERROR_Pos) /*!< Bit mask of LOCKERROR field. */
#define BBDLL_INTEN_LOCKERROR_Disabled (0UL) /*!< Disable */
#define BBDLL_INTEN_LOCKERROR_Enabled (1UL) /*!< Enable */

/* Register: BBDLL_INTENSET */
/* Description: Enable interrupt */

/* Bit 0 : Write '1' to enable interrupt for event LOCKERROR */
#define BBDLL_INTENSET_LOCKERROR_Pos (0UL) /*!< Position of LOCKERROR field. */
#define BBDLL_INTENSET_LOCKERROR_Msk (0x1UL << BBDLL_INTENSET_LOCKERROR_Pos) /*!< Bit mask of LOCKERROR field. */
#define BBDLL_INTENSET_LOCKERROR_Disabled (0UL) /*!< Read: Disabled */
#define BBDLL_INTENSET_LOCKERROR_Enabled (1UL) /*!< Read: Enabled */
#define BBDLL_INTENSET_LOCKERROR_Set (1UL) /*!< Enable */

/* Register: BBDLL_INTENCLR */
/* Description: Disable interrupt */

/* Bit 0 : Write '1' to disable interrupt for event LOCKERROR */
#define BBDLL_INTENCLR_LOCKERROR_Pos (0UL) /*!< Position of LOCKERROR field. */
#define BBDLL_INTENCLR_LOCKERROR_Msk (0x1UL << BBDLL_INTENCLR_LOCKERROR_Pos) /*!< Bit mask of LOCKERROR field. */
#define BBDLL_INTENCLR_LOCKERROR_Disabled (0UL) /*!< Read: Disabled */
#define BBDLL_INTENCLR_LOCKERROR_Enabled (1UL) /*!< Read: Enabled */
#define BBDLL_INTENCLR_LOCKERROR_Clear (1UL) /*!< Disable */

/* Register: BBDLL_INTPEND */
/* Description: Pending interrupts */

/* Bit 0 : Read pending status of interrupt for event LOCKERROR */
#define BBDLL_INTPEND_LOCKERROR_Pos (0UL) /*!< Position of LOCKERROR field. */
#define BBDLL_INTPEND_LOCKERROR_Msk (0x1UL << BBDLL_INTPEND_LOCKERROR_Pos) /*!< Bit mask of LOCKERROR field. */
#define BBDLL_INTPEND_LOCKERROR_NotPending (0UL) /*!< Read: Not pending */
#define BBDLL_INTPEND_LOCKERROR_Pending (1UL) /*!< Read: Pending */

/* Register: BBDLL_INLOCK */
/* Description: BBDLL locked or not */

/* Bit 0 : BBDLL locked or not */
#define BBDLL_INLOCK_INLOCK_Pos (0UL) /*!< Position of INLOCK field. */
#define BBDLL_INLOCK_INLOCK_Msk (0x1UL << BBDLL_INLOCK_INLOCK_Pos) /*!< Bit mask of INLOCK field. */
#define BBDLL_INLOCK_INLOCK_NotInLock (0UL) /*!< BBDLL not locked */
#define BBDLL_INLOCK_INLOCK_InLock (1UL) /*!< BBDLL locked */

/* Register: BBDLL_OVERRIDE_FORCEINLOCK */
/* Description: Unspecified */

/* Bit 0 : Force BBDLL in lock */
#define BBDLL_OVERRIDE_FORCEINLOCK_FORCEINLOCK_Pos (0UL) /*!< Position of FORCEINLOCK field. */
#define BBDLL_OVERRIDE_FORCEINLOCK_FORCEINLOCK_Msk (0x1UL << BBDLL_OVERRIDE_FORCEINLOCK_FORCEINLOCK_Pos) /*!< Bit mask of FORCEINLOCK field. */
#define BBDLL_OVERRIDE_FORCEINLOCK_FORCEINLOCK_NoOverride (0UL) /*!< No override */
#define BBDLL_OVERRIDE_FORCEINLOCK_FORCEINLOCK_ForceLock (1UL) /*!< Force lock */

/* Register: BBDLL_TEST */
/* Description: Unspecified */

/* Bits 3..0 : ATE test bus control */
#define BBDLL_TEST_ATE_Pos (0UL) /*!< Position of ATE field. */
#define BBDLL_TEST_ATE_Msk (0xFUL << BBDLL_TEST_ATE_Pos) /*!< Bit mask of ATE field. */


/* Peripheral: BPROT */
/* Description: Block Protect */

/* Register: BPROT_DISABLEINDEBUG */
/* Description: Disable protection mechanism in debug mode */

/* Bit 0 : Disable the protection mechanism for NVM regions while in debug mode. This register will only disable the protection mechanism if the device is in debug mode. */
#define BPROT_DISABLEINDEBUG_DISABLEINDEBUG_Pos (0UL) /*!< Position of DISABLEINDEBUG field. */
#define BPROT_DISABLEINDEBUG_DISABLEINDEBUG_Msk (0x1UL << BPROT_DISABLEINDEBUG_DISABLEINDEBUG_Pos) /*!< Bit mask of DISABLEINDEBUG field. */
#define BPROT_DISABLEINDEBUG_DISABLEINDEBUG_Enabled (0UL) /*!< Enable in debug */
#define BPROT_DISABLEINDEBUG_DISABLEINDEBUG_Disabled (1UL) /*!< Disable in debug */

/* Register: BPROT_CONFIG0 */
/* Description: Block protect configuration register 0 */

/* Bit 31 : Enable protection for region 31. Write '0' has no effect. */
#define BPROT_CONFIG0_REGION31_Pos (31UL) /*!< Position of REGION31 field. */
#define BPROT_CONFIG0_REGION31_Msk (0x1UL << BPROT_CONFIG0_REGION31_Pos) /*!< Bit mask of REGION31 field. */
#define BPROT_CONFIG0_REGION31_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG0_REGION31_Enabled (1UL) /*!< Protection enable */

/* Bit 30 : Enable protection for region 30. Write '0' has no effect. */
#define BPROT_CONFIG0_REGION30_Pos (30UL) /*!< Position of REGION30 field. */
#define BPROT_CONFIG0_REGION30_Msk (0x1UL << BPROT_CONFIG0_REGION30_Pos) /*!< Bit mask of REGION30 field. */
#define BPROT_CONFIG0_REGION30_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG0_REGION30_Enabled (1UL) /*!< Protection enable */

/* Bit 29 : Enable protection for region 29. Write '0' has no effect. */
#define BPROT_CONFIG0_REGION29_Pos (29UL) /*!< Position of REGION29 field. */
#define BPROT_CONFIG0_REGION29_Msk (0x1UL << BPROT_CONFIG0_REGION29_Pos) /*!< Bit mask of REGION29 field. */
#define BPROT_CONFIG0_REGION29_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG0_REGION29_Enabled (1UL) /*!< Protection enable */

/* Bit 28 : Enable protection for region 28. Write '0' has no effect. */
#define BPROT_CONFIG0_REGION28_Pos (28UL) /*!< Position of REGION28 field. */
#define BPROT_CONFIG0_REGION28_Msk (0x1UL << BPROT_CONFIG0_REGION28_Pos) /*!< Bit mask of REGION28 field. */
#define BPROT_CONFIG0_REGION28_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG0_REGION28_Enabled (1UL) /*!< Protection enable */

/* Bit 27 : Enable protection for region 27. Write '0' has no effect. */
#define BPROT_CONFIG0_REGION27_Pos (27UL) /*!< Position of REGION27 field. */
#define BPROT_CONFIG0_REGION27_Msk (0x1UL << BPROT_CONFIG0_REGION27_Pos) /*!< Bit mask of REGION27 field. */
#define BPROT_CONFIG0_REGION27_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG0_REGION27_Enabled (1UL) /*!< Protection enable */

/* Bit 26 : Enable protection for region 26. Write '0' has no effect. */
#define BPROT_CONFIG0_REGION26_Pos (26UL) /*!< Position of REGION26 field. */
#define BPROT_CONFIG0_REGION26_Msk (0x1UL << BPROT_CONFIG0_REGION26_Pos) /*!< Bit mask of REGION26 field. */
#define BPROT_CONFIG0_REGION26_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG0_REGION26_Enabled (1UL) /*!< Protection enable */

/* Bit 25 : Enable protection for region 25. Write '0' has no effect. */
#define BPROT_CONFIG0_REGION25_Pos (25UL) /*!< Position of REGION25 field. */
#define BPROT_CONFIG0_REGION25_Msk (0x1UL << BPROT_CONFIG0_REGION25_Pos) /*!< Bit mask of REGION25 field. */
#define BPROT_CONFIG0_REGION25_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG0_REGION25_Enabled (1UL) /*!< Protection enable */

/* Bit 24 : Enable protection for region 24. Write '0' has no effect. */
#define BPROT_CONFIG0_REGION24_Pos (24UL) /*!< Position of REGION24 field. */
#define BPROT_CONFIG0_REGION24_Msk (0x1UL << BPROT_CONFIG0_REGION24_Pos) /*!< Bit mask of REGION24 field. */
#define BPROT_CONFIG0_REGION24_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG0_REGION24_Enabled (1UL) /*!< Protection enable */

/* Bit 23 : Enable protection for region 23. Write '0' has no effect. */
#define BPROT_CONFIG0_REGION23_Pos (23UL) /*!< Position of REGION23 field. */
#define BPROT_CONFIG0_REGION23_Msk (0x1UL << BPROT_CONFIG0_REGION23_Pos) /*!< Bit mask of REGION23 field. */
#define BPROT_CONFIG0_REGION23_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG0_REGION23_Enabled (1UL) /*!< Protection enable */

/* Bit 22 : Enable protection for region 22. Write '0' has no effect. */
#define BPROT_CONFIG0_REGION22_Pos (22UL) /*!< Position of REGION22 field. */
#define BPROT_CONFIG0_REGION22_Msk (0x1UL << BPROT_CONFIG0_REGION22_Pos) /*!< Bit mask of REGION22 field. */
#define BPROT_CONFIG0_REGION22_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG0_REGION22_Enabled (1UL) /*!< Protection enable */

/* Bit 21 : Enable protection for region 21. Write '0' has no effect. */
#define BPROT_CONFIG0_REGION21_Pos (21UL) /*!< Position of REGION21 field. */
#define BPROT_CONFIG0_REGION21_Msk (0x1UL << BPROT_CONFIG0_REGION21_Pos) /*!< Bit mask of REGION21 field. */
#define BPROT_CONFIG0_REGION21_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG0_REGION21_Enabled (1UL) /*!< Protection enable */

/* Bit 20 : Enable protection for region 20. Write '0' has no effect. */
#define BPROT_CONFIG0_REGION20_Pos (20UL) /*!< Position of REGION20 field. */
#define BPROT_CONFIG0_REGION20_Msk (0x1UL << BPROT_CONFIG0_REGION20_Pos) /*!< Bit mask of REGION20 field. */
#define BPROT_CONFIG0_REGION20_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG0_REGION20_Enabled (1UL) /*!< Protection enable */

/* Bit 19 : Enable protection for region 19. Write '0' has no effect. */
#define BPROT_CONFIG0_REGION19_Pos (19UL) /*!< Position of REGION19 field. */
#define BPROT_CONFIG0_REGION19_Msk (0x1UL << BPROT_CONFIG0_REGION19_Pos) /*!< Bit mask of REGION19 field. */
#define BPROT_CONFIG0_REGION19_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG0_REGION19_Enabled (1UL) /*!< Protection enable */

/* Bit 18 : Enable protection for region 18. Write '0' has no effect. */
#define BPROT_CONFIG0_REGION18_Pos (18UL) /*!< Position of REGION18 field. */
#define BPROT_CONFIG0_REGION18_Msk (0x1UL << BPROT_CONFIG0_REGION18_Pos) /*!< Bit mask of REGION18 field. */
#define BPROT_CONFIG0_REGION18_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG0_REGION18_Enabled (1UL) /*!< Protection enable */

/* Bit 17 : Enable protection for region 17. Write '0' has no effect. */
#define BPROT_CONFIG0_REGION17_Pos (17UL) /*!< Position of REGION17 field. */
#define BPROT_CONFIG0_REGION17_Msk (0x1UL << BPROT_CONFIG0_REGION17_Pos) /*!< Bit mask of REGION17 field. */
#define BPROT_CONFIG0_REGION17_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG0_REGION17_Enabled (1UL) /*!< Protection enable */

/* Bit 16 : Enable protection for region 16. Write '0' has no effect. */
#define BPROT_CONFIG0_REGION16_Pos (16UL) /*!< Position of REGION16 field. */
#define BPROT_CONFIG0_REGION16_Msk (0x1UL << BPROT_CONFIG0_REGION16_Pos) /*!< Bit mask of REGION16 field. */
#define BPROT_CONFIG0_REGION16_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG0_REGION16_Enabled (1UL) /*!< Protection enable */

/* Bit 15 : Enable protection for region 15. Write '0' has no effect. */
#define BPROT_CONFIG0_REGION15_Pos (15UL) /*!< Position of REGION15 field. */
#define BPROT_CONFIG0_REGION15_Msk (0x1UL << BPROT_CONFIG0_REGION15_Pos) /*!< Bit mask of REGION15 field. */
#define BPROT_CONFIG0_REGION15_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG0_REGION15_Enabled (1UL) /*!< Protection enable */

/* Bit 14 : Enable protection for region 14. Write '0' has no effect. */
#define BPROT_CONFIG0_REGION14_Pos (14UL) /*!< Position of REGION14 field. */
#define BPROT_CONFIG0_REGION14_Msk (0x1UL << BPROT_CONFIG0_REGION14_Pos) /*!< Bit mask of REGION14 field. */
#define BPROT_CONFIG0_REGION14_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG0_REGION14_Enabled (1UL) /*!< Protection enable */

/* Bit 13 : Enable protection for region 13. Write '0' has no effect. */
#define BPROT_CONFIG0_REGION13_Pos (13UL) /*!< Position of REGION13 field. */
#define BPROT_CONFIG0_REGION13_Msk (0x1UL << BPROT_CONFIG0_REGION13_Pos) /*!< Bit mask of REGION13 field. */
#define BPROT_CONFIG0_REGION13_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG0_REGION13_Enabled (1UL) /*!< Protection enable */

/* Bit 12 : Enable protection for region 12. Write '0' has no effect. */
#define BPROT_CONFIG0_REGION12_Pos (12UL) /*!< Position of REGION12 field. */
#define BPROT_CONFIG0_REGION12_Msk (0x1UL << BPROT_CONFIG0_REGION12_Pos) /*!< Bit mask of REGION12 field. */
#define BPROT_CONFIG0_REGION12_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG0_REGION12_Enabled (1UL) /*!< Protection enable */

/* Bit 11 : Enable protection for region 11. Write '0' has no effect. */
#define BPROT_CONFIG0_REGION11_Pos (11UL) /*!< Position of REGION11 field. */
#define BPROT_CONFIG0_REGION11_Msk (0x1UL << BPROT_CONFIG0_REGION11_Pos) /*!< Bit mask of REGION11 field. */
#define BPROT_CONFIG0_REGION11_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG0_REGION11_Enabled (1UL) /*!< Protection enable */

/* Bit 10 : Enable protection for region 10. Write '0' has no effect. */
#define BPROT_CONFIG0_REGION10_Pos (10UL) /*!< Position of REGION10 field. */
#define BPROT_CONFIG0_REGION10_Msk (0x1UL << BPROT_CONFIG0_REGION10_Pos) /*!< Bit mask of REGION10 field. */
#define BPROT_CONFIG0_REGION10_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG0_REGION10_Enabled (1UL) /*!< Protection enable */

/* Bit 9 : Enable protection for region 9. Write '0' has no effect. */
#define BPROT_CONFIG0_REGION9_Pos (9UL) /*!< Position of REGION9 field. */
#define BPROT_CONFIG0_REGION9_Msk (0x1UL << BPROT_CONFIG0_REGION9_Pos) /*!< Bit mask of REGION9 field. */
#define BPROT_CONFIG0_REGION9_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG0_REGION9_Enabled (1UL) /*!< Protection enable */

/* Bit 8 : Enable protection for region 8. Write '0' has no effect. */
#define BPROT_CONFIG0_REGION8_Pos (8UL) /*!< Position of REGION8 field. */
#define BPROT_CONFIG0_REGION8_Msk (0x1UL << BPROT_CONFIG0_REGION8_Pos) /*!< Bit mask of REGION8 field. */
#define BPROT_CONFIG0_REGION8_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG0_REGION8_Enabled (1UL) /*!< Protection enable */

/* Bit 7 : Enable protection for region 7. Write '0' has no effect. */
#define BPROT_CONFIG0_REGION7_Pos (7UL) /*!< Position of REGION7 field. */
#define BPROT_CONFIG0_REGION7_Msk (0x1UL << BPROT_CONFIG0_REGION7_Pos) /*!< Bit mask of REGION7 field. */
#define BPROT_CONFIG0_REGION7_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG0_REGION7_Enabled (1UL) /*!< Protection enable */

/* Bit 6 : Enable protection for region 6. Write '0' has no effect. */
#define BPROT_CONFIG0_REGION6_Pos (6UL) /*!< Position of REGION6 field. */
#define BPROT_CONFIG0_REGION6_Msk (0x1UL << BPROT_CONFIG0_REGION6_Pos) /*!< Bit mask of REGION6 field. */
#define BPROT_CONFIG0_REGION6_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG0_REGION6_Enabled (1UL) /*!< Protection enable */

/* Bit 5 : Enable protection for region 5. Write '0' has no effect. */
#define BPROT_CONFIG0_REGION5_Pos (5UL) /*!< Position of REGION5 field. */
#define BPROT_CONFIG0_REGION5_Msk (0x1UL << BPROT_CONFIG0_REGION5_Pos) /*!< Bit mask of REGION5 field. */
#define BPROT_CONFIG0_REGION5_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG0_REGION5_Enabled (1UL) /*!< Protection enable */

/* Bit 4 : Enable protection for region 4. Write '0' has no effect. */
#define BPROT_CONFIG0_REGION4_Pos (4UL) /*!< Position of REGION4 field. */
#define BPROT_CONFIG0_REGION4_Msk (0x1UL << BPROT_CONFIG0_REGION4_Pos) /*!< Bit mask of REGION4 field. */
#define BPROT_CONFIG0_REGION4_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG0_REGION4_Enabled (1UL) /*!< Protection enable */

/* Bit 3 : Enable protection for region 3. Write '0' has no effect. */
#define BPROT_CONFIG0_REGION3_Pos (3UL) /*!< Position of REGION3 field. */
#define BPROT_CONFIG0_REGION3_Msk (0x1UL << BPROT_CONFIG0_REGION3_Pos) /*!< Bit mask of REGION3 field. */
#define BPROT_CONFIG0_REGION3_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG0_REGION3_Enabled (1UL) /*!< Protection enable */

/* Bit 2 : Enable protection for region 2. Write '0' has no effect. */
#define BPROT_CONFIG0_REGION2_Pos (2UL) /*!< Position of REGION2 field. */
#define BPROT_CONFIG0_REGION2_Msk (0x1UL << BPROT_CONFIG0_REGION2_Pos) /*!< Bit mask of REGION2 field. */
#define BPROT_CONFIG0_REGION2_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG0_REGION2_Enabled (1UL) /*!< Protection enable */

/* Bit 1 : Enable protection for region 1. Write '0' has no effect. */
#define BPROT_CONFIG0_REGION1_Pos (1UL) /*!< Position of REGION1 field. */
#define BPROT_CONFIG0_REGION1_Msk (0x1UL << BPROT_CONFIG0_REGION1_Pos) /*!< Bit mask of REGION1 field. */
#define BPROT_CONFIG0_REGION1_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG0_REGION1_Enabled (1UL) /*!< Protection enable */

/* Bit 0 : Enable protection for region 0. Write '0' has no effect. */
#define BPROT_CONFIG0_REGION0_Pos (0UL) /*!< Position of REGION0 field. */
#define BPROT_CONFIG0_REGION0_Msk (0x1UL << BPROT_CONFIG0_REGION0_Pos) /*!< Bit mask of REGION0 field. */
#define BPROT_CONFIG0_REGION0_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG0_REGION0_Enabled (1UL) /*!< Protection enable */

/* Register: BPROT_CONFIG1 */
/* Description: Block protect configuration register 0 */

/* Bit 31 : Enable protection for region 63. Write '0' has no effect. */
#define BPROT_CONFIG1_REGION63_Pos (31UL) /*!< Position of REGION63 field. */
#define BPROT_CONFIG1_REGION63_Msk (0x1UL << BPROT_CONFIG1_REGION63_Pos) /*!< Bit mask of REGION63 field. */
#define BPROT_CONFIG1_REGION63_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG1_REGION63_Enabled (1UL) /*!< Protection enable */

/* Bit 30 : Enable protection for region 62. Write '0' has no effect. */
#define BPROT_CONFIG1_REGION62_Pos (30UL) /*!< Position of REGION62 field. */
#define BPROT_CONFIG1_REGION62_Msk (0x1UL << BPROT_CONFIG1_REGION62_Pos) /*!< Bit mask of REGION62 field. */
#define BPROT_CONFIG1_REGION62_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG1_REGION62_Enabled (1UL) /*!< Protection enable */

/* Bit 29 : Enable protection for region 61. Write '0' has no effect. */
#define BPROT_CONFIG1_REGION61_Pos (29UL) /*!< Position of REGION61 field. */
#define BPROT_CONFIG1_REGION61_Msk (0x1UL << BPROT_CONFIG1_REGION61_Pos) /*!< Bit mask of REGION61 field. */
#define BPROT_CONFIG1_REGION61_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG1_REGION61_Enabled (1UL) /*!< Protection enable */

/* Bit 28 : Enable protection for region 60. Write '0' has no effect. */
#define BPROT_CONFIG1_REGION60_Pos (28UL) /*!< Position of REGION60 field. */
#define BPROT_CONFIG1_REGION60_Msk (0x1UL << BPROT_CONFIG1_REGION60_Pos) /*!< Bit mask of REGION60 field. */
#define BPROT_CONFIG1_REGION60_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG1_REGION60_Enabled (1UL) /*!< Protection enable */

/* Bit 27 : Enable protection for region 59. Write '0' has no effect. */
#define BPROT_CONFIG1_REGION59_Pos (27UL) /*!< Position of REGION59 field. */
#define BPROT_CONFIG1_REGION59_Msk (0x1UL << BPROT_CONFIG1_REGION59_Pos) /*!< Bit mask of REGION59 field. */
#define BPROT_CONFIG1_REGION59_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG1_REGION59_Enabled (1UL) /*!< Protection enable */

/* Bit 26 : Enable protection for region 58. Write '0' has no effect. */
#define BPROT_CONFIG1_REGION58_Pos (26UL) /*!< Position of REGION58 field. */
#define BPROT_CONFIG1_REGION58_Msk (0x1UL << BPROT_CONFIG1_REGION58_Pos) /*!< Bit mask of REGION58 field. */
#define BPROT_CONFIG1_REGION58_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG1_REGION58_Enabled (1UL) /*!< Protection enable */

/* Bit 25 : Enable protection for region 57. Write '0' has no effect. */
#define BPROT_CONFIG1_REGION57_Pos (25UL) /*!< Position of REGION57 field. */
#define BPROT_CONFIG1_REGION57_Msk (0x1UL << BPROT_CONFIG1_REGION57_Pos) /*!< Bit mask of REGION57 field. */
#define BPROT_CONFIG1_REGION57_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG1_REGION57_Enabled (1UL) /*!< Protection enable */

/* Bit 24 : Enable protection for region 56. Write '0' has no effect. */
#define BPROT_CONFIG1_REGION56_Pos (24UL) /*!< Position of REGION56 field. */
#define BPROT_CONFIG1_REGION56_Msk (0x1UL << BPROT_CONFIG1_REGION56_Pos) /*!< Bit mask of REGION56 field. */
#define BPROT_CONFIG1_REGION56_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG1_REGION56_Enabled (1UL) /*!< Protection enable */

/* Bit 23 : Enable protection for region 55. Write '0' has no effect. */
#define BPROT_CONFIG1_REGION55_Pos (23UL) /*!< Position of REGION55 field. */
#define BPROT_CONFIG1_REGION55_Msk (0x1UL << BPROT_CONFIG1_REGION55_Pos) /*!< Bit mask of REGION55 field. */
#define BPROT_CONFIG1_REGION55_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG1_REGION55_Enabled (1UL) /*!< Protection enable */

/* Bit 22 : Enable protection for region 54. Write '0' has no effect. */
#define BPROT_CONFIG1_REGION54_Pos (22UL) /*!< Position of REGION54 field. */
#define BPROT_CONFIG1_REGION54_Msk (0x1UL << BPROT_CONFIG1_REGION54_Pos) /*!< Bit mask of REGION54 field. */
#define BPROT_CONFIG1_REGION54_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG1_REGION54_Enabled (1UL) /*!< Protection enable */

/* Bit 21 : Enable protection for region 53. Write '0' has no effect. */
#define BPROT_CONFIG1_REGION53_Pos (21UL) /*!< Position of REGION53 field. */
#define BPROT_CONFIG1_REGION53_Msk (0x1UL << BPROT_CONFIG1_REGION53_Pos) /*!< Bit mask of REGION53 field. */
#define BPROT_CONFIG1_REGION53_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG1_REGION53_Enabled (1UL) /*!< Protection enable */

/* Bit 20 : Enable protection for region 52. Write '0' has no effect. */
#define BPROT_CONFIG1_REGION52_Pos (20UL) /*!< Position of REGION52 field. */
#define BPROT_CONFIG1_REGION52_Msk (0x1UL << BPROT_CONFIG1_REGION52_Pos) /*!< Bit mask of REGION52 field. */
#define BPROT_CONFIG1_REGION52_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG1_REGION52_Enabled (1UL) /*!< Protection enable */

/* Bit 19 : Enable protection for region 51. Write '0' has no effect. */
#define BPROT_CONFIG1_REGION51_Pos (19UL) /*!< Position of REGION51 field. */
#define BPROT_CONFIG1_REGION51_Msk (0x1UL << BPROT_CONFIG1_REGION51_Pos) /*!< Bit mask of REGION51 field. */
#define BPROT_CONFIG1_REGION51_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG1_REGION51_Enabled (1UL) /*!< Protection enable */

/* Bit 18 : Enable protection for region 50. Write '0' has no effect. */
#define BPROT_CONFIG1_REGION50_Pos (18UL) /*!< Position of REGION50 field. */
#define BPROT_CONFIG1_REGION50_Msk (0x1UL << BPROT_CONFIG1_REGION50_Pos) /*!< Bit mask of REGION50 field. */
#define BPROT_CONFIG1_REGION50_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG1_REGION50_Enabled (1UL) /*!< Protection enable */

/* Bit 17 : Enable protection for region 49. Write '0' has no effect. */
#define BPROT_CONFIG1_REGION49_Pos (17UL) /*!< Position of REGION49 field. */
#define BPROT_CONFIG1_REGION49_Msk (0x1UL << BPROT_CONFIG1_REGION49_Pos) /*!< Bit mask of REGION49 field. */
#define BPROT_CONFIG1_REGION49_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG1_REGION49_Enabled (1UL) /*!< Protection enable */

/* Bit 16 : Enable protection for region 48. Write '0' has no effect. */
#define BPROT_CONFIG1_REGION48_Pos (16UL) /*!< Position of REGION48 field. */
#define BPROT_CONFIG1_REGION48_Msk (0x1UL << BPROT_CONFIG1_REGION48_Pos) /*!< Bit mask of REGION48 field. */
#define BPROT_CONFIG1_REGION48_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG1_REGION48_Enabled (1UL) /*!< Protection enable */

/* Bit 15 : Enable protection for region 47. Write '0' has no effect. */
#define BPROT_CONFIG1_REGION47_Pos (15UL) /*!< Position of REGION47 field. */
#define BPROT_CONFIG1_REGION47_Msk (0x1UL << BPROT_CONFIG1_REGION47_Pos) /*!< Bit mask of REGION47 field. */
#define BPROT_CONFIG1_REGION47_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG1_REGION47_Enabled (1UL) /*!< Protection enable */

/* Bit 14 : Enable protection for region 46. Write '0' has no effect. */
#define BPROT_CONFIG1_REGION46_Pos (14UL) /*!< Position of REGION46 field. */
#define BPROT_CONFIG1_REGION46_Msk (0x1UL << BPROT_CONFIG1_REGION46_Pos) /*!< Bit mask of REGION46 field. */
#define BPROT_CONFIG1_REGION46_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG1_REGION46_Enabled (1UL) /*!< Protection enable */

/* Bit 13 : Enable protection for region 45. Write '0' has no effect. */
#define BPROT_CONFIG1_REGION45_Pos (13UL) /*!< Position of REGION45 field. */
#define BPROT_CONFIG1_REGION45_Msk (0x1UL << BPROT_CONFIG1_REGION45_Pos) /*!< Bit mask of REGION45 field. */
#define BPROT_CONFIG1_REGION45_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG1_REGION45_Enabled (1UL) /*!< Protection enable */

/* Bit 12 : Enable protection for region 44. Write '0' has no effect. */
#define BPROT_CONFIG1_REGION44_Pos (12UL) /*!< Position of REGION44 field. */
#define BPROT_CONFIG1_REGION44_Msk (0x1UL << BPROT_CONFIG1_REGION44_Pos) /*!< Bit mask of REGION44 field. */
#define BPROT_CONFIG1_REGION44_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG1_REGION44_Enabled (1UL) /*!< Protection enable */

/* Bit 11 : Enable protection for region 43. Write '0' has no effect. */
#define BPROT_CONFIG1_REGION43_Pos (11UL) /*!< Position of REGION43 field. */
#define BPROT_CONFIG1_REGION43_Msk (0x1UL << BPROT_CONFIG1_REGION43_Pos) /*!< Bit mask of REGION43 field. */
#define BPROT_CONFIG1_REGION43_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG1_REGION43_Enabled (1UL) /*!< Protection enable */

/* Bit 10 : Enable protection for region 42. Write '0' has no effect. */
#define BPROT_CONFIG1_REGION42_Pos (10UL) /*!< Position of REGION42 field. */
#define BPROT_CONFIG1_REGION42_Msk (0x1UL << BPROT_CONFIG1_REGION42_Pos) /*!< Bit mask of REGION42 field. */
#define BPROT_CONFIG1_REGION42_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG1_REGION42_Enabled (1UL) /*!< Protection enable */

/* Bit 9 : Enable protection for region 41. Write '0' has no effect. */
#define BPROT_CONFIG1_REGION41_Pos (9UL) /*!< Position of REGION41 field. */
#define BPROT_CONFIG1_REGION41_Msk (0x1UL << BPROT_CONFIG1_REGION41_Pos) /*!< Bit mask of REGION41 field. */
#define BPROT_CONFIG1_REGION41_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG1_REGION41_Enabled (1UL) /*!< Protection enable */

/* Bit 8 : Enable protection for region 40. Write '0' has no effect. */
#define BPROT_CONFIG1_REGION40_Pos (8UL) /*!< Position of REGION40 field. */
#define BPROT_CONFIG1_REGION40_Msk (0x1UL << BPROT_CONFIG1_REGION40_Pos) /*!< Bit mask of REGION40 field. */
#define BPROT_CONFIG1_REGION40_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG1_REGION40_Enabled (1UL) /*!< Protection enable */

/* Bit 7 : Enable protection for region 39. Write '0' has no effect. */
#define BPROT_CONFIG1_REGION39_Pos (7UL) /*!< Position of REGION39 field. */
#define BPROT_CONFIG1_REGION39_Msk (0x1UL << BPROT_CONFIG1_REGION39_Pos) /*!< Bit mask of REGION39 field. */
#define BPROT_CONFIG1_REGION39_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG1_REGION39_Enabled (1UL) /*!< Protection enable */

/* Bit 6 : Enable protection for region 38. Write '0' has no effect. */
#define BPROT_CONFIG1_REGION38_Pos (6UL) /*!< Position of REGION38 field. */
#define BPROT_CONFIG1_REGION38_Msk (0x1UL << BPROT_CONFIG1_REGION38_Pos) /*!< Bit mask of REGION38 field. */
#define BPROT_CONFIG1_REGION38_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG1_REGION38_Enabled (1UL) /*!< Protection enable */

/* Bit 5 : Enable protection for region 37. Write '0' has no effect. */
#define BPROT_CONFIG1_REGION37_Pos (5UL) /*!< Position of REGION37 field. */
#define BPROT_CONFIG1_REGION37_Msk (0x1UL << BPROT_CONFIG1_REGION37_Pos) /*!< Bit mask of REGION37 field. */
#define BPROT_CONFIG1_REGION37_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG1_REGION37_Enabled (1UL) /*!< Protection enable */

/* Bit 4 : Enable protection for region 36. Write '0' has no effect. */
#define BPROT_CONFIG1_REGION36_Pos (4UL) /*!< Position of REGION36 field. */
#define BPROT_CONFIG1_REGION36_Msk (0x1UL << BPROT_CONFIG1_REGION36_Pos) /*!< Bit mask of REGION36 field. */
#define BPROT_CONFIG1_REGION36_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG1_REGION36_Enabled (1UL) /*!< Protection enable */

/* Bit 3 : Enable protection for region 35. Write '0' has no effect. */
#define BPROT_CONFIG1_REGION35_Pos (3UL) /*!< Position of REGION35 field. */
#define BPROT_CONFIG1_REGION35_Msk (0x1UL << BPROT_CONFIG1_REGION35_Pos) /*!< Bit mask of REGION35 field. */
#define BPROT_CONFIG1_REGION35_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG1_REGION35_Enabled (1UL) /*!< Protection enable */

/* Bit 2 : Enable protection for region 34. Write '0' has no effect. */
#define BPROT_CONFIG1_REGION34_Pos (2UL) /*!< Position of REGION34 field. */
#define BPROT_CONFIG1_REGION34_Msk (0x1UL << BPROT_CONFIG1_REGION34_Pos) /*!< Bit mask of REGION34 field. */
#define BPROT_CONFIG1_REGION34_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG1_REGION34_Enabled (1UL) /*!< Protection enable */

/* Bit 1 : Enable protection for region 33. Write '0' has no effect. */
#define BPROT_CONFIG1_REGION33_Pos (1UL) /*!< Position of REGION33 field. */
#define BPROT_CONFIG1_REGION33_Msk (0x1UL << BPROT_CONFIG1_REGION33_Pos) /*!< Bit mask of REGION33 field. */
#define BPROT_CONFIG1_REGION33_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG1_REGION33_Enabled (1UL) /*!< Protection enable */

/* Bit 0 : Enable protection for region 32. Write '0' has no effect. */
#define BPROT_CONFIG1_REGION32_Pos (0UL) /*!< Position of REGION32 field. */
#define BPROT_CONFIG1_REGION32_Msk (0x1UL << BPROT_CONFIG1_REGION32_Pos) /*!< Bit mask of REGION32 field. */
#define BPROT_CONFIG1_REGION32_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG1_REGION32_Enabled (1UL) /*!< Protection enable */

/* Register: BPROT_CONFIG2 */
/* Description: Block protect configuration register 0 */

/* Bit 31 : Enable protection for region 95. Write '0' has no effect. */
#define BPROT_CONFIG2_REGION95_Pos (31UL) /*!< Position of REGION95 field. */
#define BPROT_CONFIG2_REGION95_Msk (0x1UL << BPROT_CONFIG2_REGION95_Pos) /*!< Bit mask of REGION95 field. */
#define BPROT_CONFIG2_REGION95_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG2_REGION95_Enabled (1UL) /*!< Protection enable */

/* Bit 30 : Enable protection for region 94. Write '0' has no effect. */
#define BPROT_CONFIG2_REGION94_Pos (30UL) /*!< Position of REGION94 field. */
#define BPROT_CONFIG2_REGION94_Msk (0x1UL << BPROT_CONFIG2_REGION94_Pos) /*!< Bit mask of REGION94 field. */
#define BPROT_CONFIG2_REGION94_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG2_REGION94_Enabled (1UL) /*!< Protection enable */

/* Bit 29 : Enable protection for region 93. Write '0' has no effect. */
#define BPROT_CONFIG2_REGION93_Pos (29UL) /*!< Position of REGION93 field. */
#define BPROT_CONFIG2_REGION93_Msk (0x1UL << BPROT_CONFIG2_REGION93_Pos) /*!< Bit mask of REGION93 field. */
#define BPROT_CONFIG2_REGION93_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG2_REGION93_Enabled (1UL) /*!< Protection enable */

/* Bit 28 : Enable protection for region 92. Write '0' has no effect. */
#define BPROT_CONFIG2_REGION92_Pos (28UL) /*!< Position of REGION92 field. */
#define BPROT_CONFIG2_REGION92_Msk (0x1UL << BPROT_CONFIG2_REGION92_Pos) /*!< Bit mask of REGION92 field. */
#define BPROT_CONFIG2_REGION92_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG2_REGION92_Enabled (1UL) /*!< Protection enable */

/* Bit 27 : Enable protection for region 91. Write '0' has no effect. */
#define BPROT_CONFIG2_REGION91_Pos (27UL) /*!< Position of REGION91 field. */
#define BPROT_CONFIG2_REGION91_Msk (0x1UL << BPROT_CONFIG2_REGION91_Pos) /*!< Bit mask of REGION91 field. */
#define BPROT_CONFIG2_REGION91_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG2_REGION91_Enabled (1UL) /*!< Protection enable */

/* Bit 26 : Enable protection for region 90. Write '0' has no effect. */
#define BPROT_CONFIG2_REGION90_Pos (26UL) /*!< Position of REGION90 field. */
#define BPROT_CONFIG2_REGION90_Msk (0x1UL << BPROT_CONFIG2_REGION90_Pos) /*!< Bit mask of REGION90 field. */
#define BPROT_CONFIG2_REGION90_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG2_REGION90_Enabled (1UL) /*!< Protection enable */

/* Bit 25 : Enable protection for region 89. Write '0' has no effect. */
#define BPROT_CONFIG2_REGION89_Pos (25UL) /*!< Position of REGION89 field. */
#define BPROT_CONFIG2_REGION89_Msk (0x1UL << BPROT_CONFIG2_REGION89_Pos) /*!< Bit mask of REGION89 field. */
#define BPROT_CONFIG2_REGION89_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG2_REGION89_Enabled (1UL) /*!< Protection enable */

/* Bit 24 : Enable protection for region 88. Write '0' has no effect. */
#define BPROT_CONFIG2_REGION88_Pos (24UL) /*!< Position of REGION88 field. */
#define BPROT_CONFIG2_REGION88_Msk (0x1UL << BPROT_CONFIG2_REGION88_Pos) /*!< Bit mask of REGION88 field. */
#define BPROT_CONFIG2_REGION88_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG2_REGION88_Enabled (1UL) /*!< Protection enable */

/* Bit 23 : Enable protection for region 87. Write '0' has no effect. */
#define BPROT_CONFIG2_REGION87_Pos (23UL) /*!< Position of REGION87 field. */
#define BPROT_CONFIG2_REGION87_Msk (0x1UL << BPROT_CONFIG2_REGION87_Pos) /*!< Bit mask of REGION87 field. */
#define BPROT_CONFIG2_REGION87_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG2_REGION87_Enabled (1UL) /*!< Protection enable */

/* Bit 22 : Enable protection for region 86. Write '0' has no effect. */
#define BPROT_CONFIG2_REGION86_Pos (22UL) /*!< Position of REGION86 field. */
#define BPROT_CONFIG2_REGION86_Msk (0x1UL << BPROT_CONFIG2_REGION86_Pos) /*!< Bit mask of REGION86 field. */
#define BPROT_CONFIG2_REGION86_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG2_REGION86_Enabled (1UL) /*!< Protection enable */

/* Bit 21 : Enable protection for region 85. Write '0' has no effect. */
#define BPROT_CONFIG2_REGION85_Pos (21UL) /*!< Position of REGION85 field. */
#define BPROT_CONFIG2_REGION85_Msk (0x1UL << BPROT_CONFIG2_REGION85_Pos) /*!< Bit mask of REGION85 field. */
#define BPROT_CONFIG2_REGION85_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG2_REGION85_Enabled (1UL) /*!< Protection enable */

/* Bit 20 : Enable protection for region 84. Write '0' has no effect. */
#define BPROT_CONFIG2_REGION84_Pos (20UL) /*!< Position of REGION84 field. */
#define BPROT_CONFIG2_REGION84_Msk (0x1UL << BPROT_CONFIG2_REGION84_Pos) /*!< Bit mask of REGION84 field. */
#define BPROT_CONFIG2_REGION84_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG2_REGION84_Enabled (1UL) /*!< Protection enable */

/* Bit 19 : Enable protection for region 83. Write '0' has no effect. */
#define BPROT_CONFIG2_REGION83_Pos (19UL) /*!< Position of REGION83 field. */
#define BPROT_CONFIG2_REGION83_Msk (0x1UL << BPROT_CONFIG2_REGION83_Pos) /*!< Bit mask of REGION83 field. */
#define BPROT_CONFIG2_REGION83_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG2_REGION83_Enabled (1UL) /*!< Protection enable */

/* Bit 18 : Enable protection for region 82. Write '0' has no effect. */
#define BPROT_CONFIG2_REGION82_Pos (18UL) /*!< Position of REGION82 field. */
#define BPROT_CONFIG2_REGION82_Msk (0x1UL << BPROT_CONFIG2_REGION82_Pos) /*!< Bit mask of REGION82 field. */
#define BPROT_CONFIG2_REGION82_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG2_REGION82_Enabled (1UL) /*!< Protection enable */

/* Bit 17 : Enable protection for region 81. Write '0' has no effect. */
#define BPROT_CONFIG2_REGION81_Pos (17UL) /*!< Position of REGION81 field. */
#define BPROT_CONFIG2_REGION81_Msk (0x1UL << BPROT_CONFIG2_REGION81_Pos) /*!< Bit mask of REGION81 field. */
#define BPROT_CONFIG2_REGION81_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG2_REGION81_Enabled (1UL) /*!< Protection enable */

/* Bit 16 : Enable protection for region 80. Write '0' has no effect. */
#define BPROT_CONFIG2_REGION80_Pos (16UL) /*!< Position of REGION80 field. */
#define BPROT_CONFIG2_REGION80_Msk (0x1UL << BPROT_CONFIG2_REGION80_Pos) /*!< Bit mask of REGION80 field. */
#define BPROT_CONFIG2_REGION80_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG2_REGION80_Enabled (1UL) /*!< Protection enable */

/* Bit 15 : Enable protection for region 79. Write '0' has no effect. */
#define BPROT_CONFIG2_REGION79_Pos (15UL) /*!< Position of REGION79 field. */
#define BPROT_CONFIG2_REGION79_Msk (0x1UL << BPROT_CONFIG2_REGION79_Pos) /*!< Bit mask of REGION79 field. */
#define BPROT_CONFIG2_REGION79_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG2_REGION79_Enabled (1UL) /*!< Protection enable */

/* Bit 14 : Enable protection for region 78. Write '0' has no effect. */
#define BPROT_CONFIG2_REGION78_Pos (14UL) /*!< Position of REGION78 field. */
#define BPROT_CONFIG2_REGION78_Msk (0x1UL << BPROT_CONFIG2_REGION78_Pos) /*!< Bit mask of REGION78 field. */
#define BPROT_CONFIG2_REGION78_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG2_REGION78_Enabled (1UL) /*!< Protection enable */

/* Bit 13 : Enable protection for region 77. Write '0' has no effect. */
#define BPROT_CONFIG2_REGION77_Pos (13UL) /*!< Position of REGION77 field. */
#define BPROT_CONFIG2_REGION77_Msk (0x1UL << BPROT_CONFIG2_REGION77_Pos) /*!< Bit mask of REGION77 field. */
#define BPROT_CONFIG2_REGION77_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG2_REGION77_Enabled (1UL) /*!< Protection enable */

/* Bit 12 : Enable protection for region 76. Write '0' has no effect. */
#define BPROT_CONFIG2_REGION76_Pos (12UL) /*!< Position of REGION76 field. */
#define BPROT_CONFIG2_REGION76_Msk (0x1UL << BPROT_CONFIG2_REGION76_Pos) /*!< Bit mask of REGION76 field. */
#define BPROT_CONFIG2_REGION76_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG2_REGION76_Enabled (1UL) /*!< Protection enable */

/* Bit 11 : Enable protection for region 75. Write '0' has no effect. */
#define BPROT_CONFIG2_REGION75_Pos (11UL) /*!< Position of REGION75 field. */
#define BPROT_CONFIG2_REGION75_Msk (0x1UL << BPROT_CONFIG2_REGION75_Pos) /*!< Bit mask of REGION75 field. */
#define BPROT_CONFIG2_REGION75_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG2_REGION75_Enabled (1UL) /*!< Protection enable */

/* Bit 10 : Enable protection for region 74. Write '0' has no effect. */
#define BPROT_CONFIG2_REGION74_Pos (10UL) /*!< Position of REGION74 field. */
#define BPROT_CONFIG2_REGION74_Msk (0x1UL << BPROT_CONFIG2_REGION74_Pos) /*!< Bit mask of REGION74 field. */
#define BPROT_CONFIG2_REGION74_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG2_REGION74_Enabled (1UL) /*!< Protection enable */

/* Bit 9 : Enable protection for region 73. Write '0' has no effect. */
#define BPROT_CONFIG2_REGION73_Pos (9UL) /*!< Position of REGION73 field. */
#define BPROT_CONFIG2_REGION73_Msk (0x1UL << BPROT_CONFIG2_REGION73_Pos) /*!< Bit mask of REGION73 field. */
#define BPROT_CONFIG2_REGION73_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG2_REGION73_Enabled (1UL) /*!< Protection enable */

/* Bit 8 : Enable protection for region 72. Write '0' has no effect. */
#define BPROT_CONFIG2_REGION72_Pos (8UL) /*!< Position of REGION72 field. */
#define BPROT_CONFIG2_REGION72_Msk (0x1UL << BPROT_CONFIG2_REGION72_Pos) /*!< Bit mask of REGION72 field. */
#define BPROT_CONFIG2_REGION72_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG2_REGION72_Enabled (1UL) /*!< Protection enable */

/* Bit 7 : Enable protection for region 71. Write '0' has no effect. */
#define BPROT_CONFIG2_REGION71_Pos (7UL) /*!< Position of REGION71 field. */
#define BPROT_CONFIG2_REGION71_Msk (0x1UL << BPROT_CONFIG2_REGION71_Pos) /*!< Bit mask of REGION71 field. */
#define BPROT_CONFIG2_REGION71_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG2_REGION71_Enabled (1UL) /*!< Protection enable */

/* Bit 6 : Enable protection for region 70. Write '0' has no effect. */
#define BPROT_CONFIG2_REGION70_Pos (6UL) /*!< Position of REGION70 field. */
#define BPROT_CONFIG2_REGION70_Msk (0x1UL << BPROT_CONFIG2_REGION70_Pos) /*!< Bit mask of REGION70 field. */
#define BPROT_CONFIG2_REGION70_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG2_REGION70_Enabled (1UL) /*!< Protection enable */

/* Bit 5 : Enable protection for region 69. Write '0' has no effect. */
#define BPROT_CONFIG2_REGION69_Pos (5UL) /*!< Position of REGION69 field. */
#define BPROT_CONFIG2_REGION69_Msk (0x1UL << BPROT_CONFIG2_REGION69_Pos) /*!< Bit mask of REGION69 field. */
#define BPROT_CONFIG2_REGION69_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG2_REGION69_Enabled (1UL) /*!< Protection enable */

/* Bit 4 : Enable protection for region 68. Write '0' has no effect. */
#define BPROT_CONFIG2_REGION68_Pos (4UL) /*!< Position of REGION68 field. */
#define BPROT_CONFIG2_REGION68_Msk (0x1UL << BPROT_CONFIG2_REGION68_Pos) /*!< Bit mask of REGION68 field. */
#define BPROT_CONFIG2_REGION68_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG2_REGION68_Enabled (1UL) /*!< Protection enable */

/* Bit 3 : Enable protection for region 67. Write '0' has no effect. */
#define BPROT_CONFIG2_REGION67_Pos (3UL) /*!< Position of REGION67 field. */
#define BPROT_CONFIG2_REGION67_Msk (0x1UL << BPROT_CONFIG2_REGION67_Pos) /*!< Bit mask of REGION67 field. */
#define BPROT_CONFIG2_REGION67_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG2_REGION67_Enabled (1UL) /*!< Protection enable */

/* Bit 2 : Enable protection for region 66. Write '0' has no effect. */
#define BPROT_CONFIG2_REGION66_Pos (2UL) /*!< Position of REGION66 field. */
#define BPROT_CONFIG2_REGION66_Msk (0x1UL << BPROT_CONFIG2_REGION66_Pos) /*!< Bit mask of REGION66 field. */
#define BPROT_CONFIG2_REGION66_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG2_REGION66_Enabled (1UL) /*!< Protection enable */

/* Bit 1 : Enable protection for region 65. Write '0' has no effect. */
#define BPROT_CONFIG2_REGION65_Pos (1UL) /*!< Position of REGION65 field. */
#define BPROT_CONFIG2_REGION65_Msk (0x1UL << BPROT_CONFIG2_REGION65_Pos) /*!< Bit mask of REGION65 field. */
#define BPROT_CONFIG2_REGION65_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG2_REGION65_Enabled (1UL) /*!< Protection enable */

/* Bit 0 : Enable protection for region 64. Write '0' has no effect. */
#define BPROT_CONFIG2_REGION64_Pos (0UL) /*!< Position of REGION64 field. */
#define BPROT_CONFIG2_REGION64_Msk (0x1UL << BPROT_CONFIG2_REGION64_Pos) /*!< Bit mask of REGION64 field. */
#define BPROT_CONFIG2_REGION64_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG2_REGION64_Enabled (1UL) /*!< Protection enable */

/* Register: BPROT_CONFIG3 */
/* Description: Block protect configuration register 0 */

/* Bit 31 : Enable protection for region 127. Write '0' has no effect. */
#define BPROT_CONFIG3_REGION127_Pos (31UL) /*!< Position of REGION127 field. */
#define BPROT_CONFIG3_REGION127_Msk (0x1UL << BPROT_CONFIG3_REGION127_Pos) /*!< Bit mask of REGION127 field. */
#define BPROT_CONFIG3_REGION127_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG3_REGION127_Enabled (1UL) /*!< Protection enable */

/* Bit 30 : Enable protection for region 126. Write '0' has no effect. */
#define BPROT_CONFIG3_REGION126_Pos (30UL) /*!< Position of REGION126 field. */
#define BPROT_CONFIG3_REGION126_Msk (0x1UL << BPROT_CONFIG3_REGION126_Pos) /*!< Bit mask of REGION126 field. */
#define BPROT_CONFIG3_REGION126_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG3_REGION126_Enabled (1UL) /*!< Protection enable */

/* Bit 29 : Enable protection for region 125. Write '0' has no effect. */
#define BPROT_CONFIG3_REGION125_Pos (29UL) /*!< Position of REGION125 field. */
#define BPROT_CONFIG3_REGION125_Msk (0x1UL << BPROT_CONFIG3_REGION125_Pos) /*!< Bit mask of REGION125 field. */
#define BPROT_CONFIG3_REGION125_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG3_REGION125_Enabled (1UL) /*!< Protection enable */

/* Bit 28 : Enable protection for region 124. Write '0' has no effect. */
#define BPROT_CONFIG3_REGION124_Pos (28UL) /*!< Position of REGION124 field. */
#define BPROT_CONFIG3_REGION124_Msk (0x1UL << BPROT_CONFIG3_REGION124_Pos) /*!< Bit mask of REGION124 field. */
#define BPROT_CONFIG3_REGION124_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG3_REGION124_Enabled (1UL) /*!< Protection enable */

/* Bit 27 : Enable protection for region 123. Write '0' has no effect. */
#define BPROT_CONFIG3_REGION123_Pos (27UL) /*!< Position of REGION123 field. */
#define BPROT_CONFIG3_REGION123_Msk (0x1UL << BPROT_CONFIG3_REGION123_Pos) /*!< Bit mask of REGION123 field. */
#define BPROT_CONFIG3_REGION123_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG3_REGION123_Enabled (1UL) /*!< Protection enable */

/* Bit 26 : Enable protection for region 122. Write '0' has no effect. */
#define BPROT_CONFIG3_REGION122_Pos (26UL) /*!< Position of REGION122 field. */
#define BPROT_CONFIG3_REGION122_Msk (0x1UL << BPROT_CONFIG3_REGION122_Pos) /*!< Bit mask of REGION122 field. */
#define BPROT_CONFIG3_REGION122_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG3_REGION122_Enabled (1UL) /*!< Protection enable */

/* Bit 25 : Enable protection for region 121. Write '0' has no effect. */
#define BPROT_CONFIG3_REGION121_Pos (25UL) /*!< Position of REGION121 field. */
#define BPROT_CONFIG3_REGION121_Msk (0x1UL << BPROT_CONFIG3_REGION121_Pos) /*!< Bit mask of REGION121 field. */
#define BPROT_CONFIG3_REGION121_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG3_REGION121_Enabled (1UL) /*!< Protection enable */

/* Bit 24 : Enable protection for region 120. Write '0' has no effect. */
#define BPROT_CONFIG3_REGION120_Pos (24UL) /*!< Position of REGION120 field. */
#define BPROT_CONFIG3_REGION120_Msk (0x1UL << BPROT_CONFIG3_REGION120_Pos) /*!< Bit mask of REGION120 field. */
#define BPROT_CONFIG3_REGION120_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG3_REGION120_Enabled (1UL) /*!< Protection enable */

/* Bit 23 : Enable protection for region 119. Write '0' has no effect. */
#define BPROT_CONFIG3_REGION119_Pos (23UL) /*!< Position of REGION119 field. */
#define BPROT_CONFIG3_REGION119_Msk (0x1UL << BPROT_CONFIG3_REGION119_Pos) /*!< Bit mask of REGION119 field. */
#define BPROT_CONFIG3_REGION119_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG3_REGION119_Enabled (1UL) /*!< Protection enable */

/* Bit 22 : Enable protection for region 118. Write '0' has no effect. */
#define BPROT_CONFIG3_REGION118_Pos (22UL) /*!< Position of REGION118 field. */
#define BPROT_CONFIG3_REGION118_Msk (0x1UL << BPROT_CONFIG3_REGION118_Pos) /*!< Bit mask of REGION118 field. */
#define BPROT_CONFIG3_REGION118_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG3_REGION118_Enabled (1UL) /*!< Protection enable */

/* Bit 21 : Enable protection for region 117. Write '0' has no effect. */
#define BPROT_CONFIG3_REGION117_Pos (21UL) /*!< Position of REGION117 field. */
#define BPROT_CONFIG3_REGION117_Msk (0x1UL << BPROT_CONFIG3_REGION117_Pos) /*!< Bit mask of REGION117 field. */
#define BPROT_CONFIG3_REGION117_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG3_REGION117_Enabled (1UL) /*!< Protection enable */

/* Bit 20 : Enable protection for region 116. Write '0' has no effect. */
#define BPROT_CONFIG3_REGION116_Pos (20UL) /*!< Position of REGION116 field. */
#define BPROT_CONFIG3_REGION116_Msk (0x1UL << BPROT_CONFIG3_REGION116_Pos) /*!< Bit mask of REGION116 field. */
#define BPROT_CONFIG3_REGION116_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG3_REGION116_Enabled (1UL) /*!< Protection enable */

/* Bit 19 : Enable protection for region 115. Write '0' has no effect. */
#define BPROT_CONFIG3_REGION115_Pos (19UL) /*!< Position of REGION115 field. */
#define BPROT_CONFIG3_REGION115_Msk (0x1UL << BPROT_CONFIG3_REGION115_Pos) /*!< Bit mask of REGION115 field. */
#define BPROT_CONFIG3_REGION115_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG3_REGION115_Enabled (1UL) /*!< Protection enable */

/* Bit 18 : Enable protection for region 114. Write '0' has no effect. */
#define BPROT_CONFIG3_REGION114_Pos (18UL) /*!< Position of REGION114 field. */
#define BPROT_CONFIG3_REGION114_Msk (0x1UL << BPROT_CONFIG3_REGION114_Pos) /*!< Bit mask of REGION114 field. */
#define BPROT_CONFIG3_REGION114_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG3_REGION114_Enabled (1UL) /*!< Protection enable */

/* Bit 17 : Enable protection for region 113. Write '0' has no effect. */
#define BPROT_CONFIG3_REGION113_Pos (17UL) /*!< Position of REGION113 field. */
#define BPROT_CONFIG3_REGION113_Msk (0x1UL << BPROT_CONFIG3_REGION113_Pos) /*!< Bit mask of REGION113 field. */
#define BPROT_CONFIG3_REGION113_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG3_REGION113_Enabled (1UL) /*!< Protection enable */

/* Bit 16 : Enable protection for region 112. Write '0' has no effect. */
#define BPROT_CONFIG3_REGION112_Pos (16UL) /*!< Position of REGION112 field. */
#define BPROT_CONFIG3_REGION112_Msk (0x1UL << BPROT_CONFIG3_REGION112_Pos) /*!< Bit mask of REGION112 field. */
#define BPROT_CONFIG3_REGION112_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG3_REGION112_Enabled (1UL) /*!< Protection enable */

/* Bit 15 : Enable protection for region 111. Write '0' has no effect. */
#define BPROT_CONFIG3_REGION111_Pos (15UL) /*!< Position of REGION111 field. */
#define BPROT_CONFIG3_REGION111_Msk (0x1UL << BPROT_CONFIG3_REGION111_Pos) /*!< Bit mask of REGION111 field. */
#define BPROT_CONFIG3_REGION111_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG3_REGION111_Enabled (1UL) /*!< Protection enable */

/* Bit 14 : Enable protection for region 110. Write '0' has no effect. */
#define BPROT_CONFIG3_REGION110_Pos (14UL) /*!< Position of REGION110 field. */
#define BPROT_CONFIG3_REGION110_Msk (0x1UL << BPROT_CONFIG3_REGION110_Pos) /*!< Bit mask of REGION110 field. */
#define BPROT_CONFIG3_REGION110_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG3_REGION110_Enabled (1UL) /*!< Protection enable */

/* Bit 13 : Enable protection for region 109. Write '0' has no effect. */
#define BPROT_CONFIG3_REGION109_Pos (13UL) /*!< Position of REGION109 field. */
#define BPROT_CONFIG3_REGION109_Msk (0x1UL << BPROT_CONFIG3_REGION109_Pos) /*!< Bit mask of REGION109 field. */
#define BPROT_CONFIG3_REGION109_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG3_REGION109_Enabled (1UL) /*!< Protection enable */

/* Bit 12 : Enable protection for region 108. Write '0' has no effect. */
#define BPROT_CONFIG3_REGION108_Pos (12UL) /*!< Position of REGION108 field. */
#define BPROT_CONFIG3_REGION108_Msk (0x1UL << BPROT_CONFIG3_REGION108_Pos) /*!< Bit mask of REGION108 field. */
#define BPROT_CONFIG3_REGION108_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG3_REGION108_Enabled (1UL) /*!< Protection enable */

/* Bit 11 : Enable protection for region 107. Write '0' has no effect. */
#define BPROT_CONFIG3_REGION107_Pos (11UL) /*!< Position of REGION107 field. */
#define BPROT_CONFIG3_REGION107_Msk (0x1UL << BPROT_CONFIG3_REGION107_Pos) /*!< Bit mask of REGION107 field. */
#define BPROT_CONFIG3_REGION107_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG3_REGION107_Enabled (1UL) /*!< Protection enable */

/* Bit 10 : Enable protection for region 106. Write '0' has no effect. */
#define BPROT_CONFIG3_REGION106_Pos (10UL) /*!< Position of REGION106 field. */
#define BPROT_CONFIG3_REGION106_Msk (0x1UL << BPROT_CONFIG3_REGION106_Pos) /*!< Bit mask of REGION106 field. */
#define BPROT_CONFIG3_REGION106_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG3_REGION106_Enabled (1UL) /*!< Protection enable */

/* Bit 9 : Enable protection for region 105. Write '0' has no effect. */
#define BPROT_CONFIG3_REGION105_Pos (9UL) /*!< Position of REGION105 field. */
#define BPROT_CONFIG3_REGION105_Msk (0x1UL << BPROT_CONFIG3_REGION105_Pos) /*!< Bit mask of REGION105 field. */
#define BPROT_CONFIG3_REGION105_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG3_REGION105_Enabled (1UL) /*!< Protection enable */

/* Bit 8 : Enable protection for region 104. Write '0' has no effect. */
#define BPROT_CONFIG3_REGION104_Pos (8UL) /*!< Position of REGION104 field. */
#define BPROT_CONFIG3_REGION104_Msk (0x1UL << BPROT_CONFIG3_REGION104_Pos) /*!< Bit mask of REGION104 field. */
#define BPROT_CONFIG3_REGION104_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG3_REGION104_Enabled (1UL) /*!< Protection enable */

/* Bit 7 : Enable protection for region 103. Write '0' has no effect. */
#define BPROT_CONFIG3_REGION103_Pos (7UL) /*!< Position of REGION103 field. */
#define BPROT_CONFIG3_REGION103_Msk (0x1UL << BPROT_CONFIG3_REGION103_Pos) /*!< Bit mask of REGION103 field. */
#define BPROT_CONFIG3_REGION103_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG3_REGION103_Enabled (1UL) /*!< Protection enable */

/* Bit 6 : Enable protection for region 102. Write '0' has no effect. */
#define BPROT_CONFIG3_REGION102_Pos (6UL) /*!< Position of REGION102 field. */
#define BPROT_CONFIG3_REGION102_Msk (0x1UL << BPROT_CONFIG3_REGION102_Pos) /*!< Bit mask of REGION102 field. */
#define BPROT_CONFIG3_REGION102_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG3_REGION102_Enabled (1UL) /*!< Protection enable */

/* Bit 5 : Enable protection for region 101. Write '0' has no effect. */
#define BPROT_CONFIG3_REGION101_Pos (5UL) /*!< Position of REGION101 field. */
#define BPROT_CONFIG3_REGION101_Msk (0x1UL << BPROT_CONFIG3_REGION101_Pos) /*!< Bit mask of REGION101 field. */
#define BPROT_CONFIG3_REGION101_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG3_REGION101_Enabled (1UL) /*!< Protection enable */

/* Bit 4 : Enable protection for region 100. Write '0' has no effect. */
#define BPROT_CONFIG3_REGION100_Pos (4UL) /*!< Position of REGION100 field. */
#define BPROT_CONFIG3_REGION100_Msk (0x1UL << BPROT_CONFIG3_REGION100_Pos) /*!< Bit mask of REGION100 field. */
#define BPROT_CONFIG3_REGION100_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG3_REGION100_Enabled (1UL) /*!< Protection enable */

/* Bit 3 : Enable protection for region 99. Write '0' has no effect. */
#define BPROT_CONFIG3_REGION99_Pos (3UL) /*!< Position of REGION99 field. */
#define BPROT_CONFIG3_REGION99_Msk (0x1UL << BPROT_CONFIG3_REGION99_Pos) /*!< Bit mask of REGION99 field. */
#define BPROT_CONFIG3_REGION99_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG3_REGION99_Enabled (1UL) /*!< Protection enable */

/* Bit 2 : Enable protection for region 98. Write '0' has no effect. */
#define BPROT_CONFIG3_REGION98_Pos (2UL) /*!< Position of REGION98 field. */
#define BPROT_CONFIG3_REGION98_Msk (0x1UL << BPROT_CONFIG3_REGION98_Pos) /*!< Bit mask of REGION98 field. */
#define BPROT_CONFIG3_REGION98_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG3_REGION98_Enabled (1UL) /*!< Protection enable */

/* Bit 1 : Enable protection for region 97. Write '0' has no effect. */
#define BPROT_CONFIG3_REGION97_Pos (1UL) /*!< Position of REGION97 field. */
#define BPROT_CONFIG3_REGION97_Msk (0x1UL << BPROT_CONFIG3_REGION97_Pos) /*!< Bit mask of REGION97 field. */
#define BPROT_CONFIG3_REGION97_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG3_REGION97_Enabled (1UL) /*!< Protection enable */

/* Bit 0 : Enable protection for region 96. Write '0' has no effect. */
#define BPROT_CONFIG3_REGION96_Pos (0UL) /*!< Position of REGION96 field. */
#define BPROT_CONFIG3_REGION96_Msk (0x1UL << BPROT_CONFIG3_REGION96_Pos) /*!< Bit mask of REGION96 field. */
#define BPROT_CONFIG3_REGION96_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG3_REGION96_Enabled (1UL) /*!< Protection enable */

/* Register: BPROT_CONFIG4 */
/* Description: Block protect configuration register 0 */

/* Bit 31 : Enable protection for region 159. Write '0' has no effect. */
#define BPROT_CONFIG4_REGION159_Pos (31UL) /*!< Position of REGION159 field. */
#define BPROT_CONFIG4_REGION159_Msk (0x1UL << BPROT_CONFIG4_REGION159_Pos) /*!< Bit mask of REGION159 field. */
#define BPROT_CONFIG4_REGION159_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG4_REGION159_Enabled (1UL) /*!< Protection enable */

/* Bit 30 : Enable protection for region 158. Write '0' has no effect. */
#define BPROT_CONFIG4_REGION158_Pos (30UL) /*!< Position of REGION158 field. */
#define BPROT_CONFIG4_REGION158_Msk (0x1UL << BPROT_CONFIG4_REGION158_Pos) /*!< Bit mask of REGION158 field. */
#define BPROT_CONFIG4_REGION158_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG4_REGION158_Enabled (1UL) /*!< Protection enable */

/* Bit 29 : Enable protection for region 157. Write '0' has no effect. */
#define BPROT_CONFIG4_REGION157_Pos (29UL) /*!< Position of REGION157 field. */
#define BPROT_CONFIG4_REGION157_Msk (0x1UL << BPROT_CONFIG4_REGION157_Pos) /*!< Bit mask of REGION157 field. */
#define BPROT_CONFIG4_REGION157_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG4_REGION157_Enabled (1UL) /*!< Protection enable */

/* Bit 28 : Enable protection for region 156. Write '0' has no effect. */
#define BPROT_CONFIG4_REGION156_Pos (28UL) /*!< Position of REGION156 field. */
#define BPROT_CONFIG4_REGION156_Msk (0x1UL << BPROT_CONFIG4_REGION156_Pos) /*!< Bit mask of REGION156 field. */
#define BPROT_CONFIG4_REGION156_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG4_REGION156_Enabled (1UL) /*!< Protection enable */

/* Bit 27 : Enable protection for region 155. Write '0' has no effect. */
#define BPROT_CONFIG4_REGION155_Pos (27UL) /*!< Position of REGION155 field. */
#define BPROT_CONFIG4_REGION155_Msk (0x1UL << BPROT_CONFIG4_REGION155_Pos) /*!< Bit mask of REGION155 field. */
#define BPROT_CONFIG4_REGION155_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG4_REGION155_Enabled (1UL) /*!< Protection enable */

/* Bit 26 : Enable protection for region 154. Write '0' has no effect. */
#define BPROT_CONFIG4_REGION154_Pos (26UL) /*!< Position of REGION154 field. */
#define BPROT_CONFIG4_REGION154_Msk (0x1UL << BPROT_CONFIG4_REGION154_Pos) /*!< Bit mask of REGION154 field. */
#define BPROT_CONFIG4_REGION154_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG4_REGION154_Enabled (1UL) /*!< Protection enable */

/* Bit 25 : Enable protection for region 153. Write '0' has no effect. */
#define BPROT_CONFIG4_REGION153_Pos (25UL) /*!< Position of REGION153 field. */
#define BPROT_CONFIG4_REGION153_Msk (0x1UL << BPROT_CONFIG4_REGION153_Pos) /*!< Bit mask of REGION153 field. */
#define BPROT_CONFIG4_REGION153_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG4_REGION153_Enabled (1UL) /*!< Protection enable */

/* Bit 24 : Enable protection for region 152. Write '0' has no effect. */
#define BPROT_CONFIG4_REGION152_Pos (24UL) /*!< Position of REGION152 field. */
#define BPROT_CONFIG4_REGION152_Msk (0x1UL << BPROT_CONFIG4_REGION152_Pos) /*!< Bit mask of REGION152 field. */
#define BPROT_CONFIG4_REGION152_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG4_REGION152_Enabled (1UL) /*!< Protection enable */

/* Bit 23 : Enable protection for region 151. Write '0' has no effect. */
#define BPROT_CONFIG4_REGION151_Pos (23UL) /*!< Position of REGION151 field. */
#define BPROT_CONFIG4_REGION151_Msk (0x1UL << BPROT_CONFIG4_REGION151_Pos) /*!< Bit mask of REGION151 field. */
#define BPROT_CONFIG4_REGION151_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG4_REGION151_Enabled (1UL) /*!< Protection enable */

/* Bit 22 : Enable protection for region 150. Write '0' has no effect. */
#define BPROT_CONFIG4_REGION150_Pos (22UL) /*!< Position of REGION150 field. */
#define BPROT_CONFIG4_REGION150_Msk (0x1UL << BPROT_CONFIG4_REGION150_Pos) /*!< Bit mask of REGION150 field. */
#define BPROT_CONFIG4_REGION150_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG4_REGION150_Enabled (1UL) /*!< Protection enable */

/* Bit 21 : Enable protection for region 149. Write '0' has no effect. */
#define BPROT_CONFIG4_REGION149_Pos (21UL) /*!< Position of REGION149 field. */
#define BPROT_CONFIG4_REGION149_Msk (0x1UL << BPROT_CONFIG4_REGION149_Pos) /*!< Bit mask of REGION149 field. */
#define BPROT_CONFIG4_REGION149_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG4_REGION149_Enabled (1UL) /*!< Protection enable */

/* Bit 20 : Enable protection for region 148. Write '0' has no effect. */
#define BPROT_CONFIG4_REGION148_Pos (20UL) /*!< Position of REGION148 field. */
#define BPROT_CONFIG4_REGION148_Msk (0x1UL << BPROT_CONFIG4_REGION148_Pos) /*!< Bit mask of REGION148 field. */
#define BPROT_CONFIG4_REGION148_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG4_REGION148_Enabled (1UL) /*!< Protection enable */

/* Bit 19 : Enable protection for region 147. Write '0' has no effect. */
#define BPROT_CONFIG4_REGION147_Pos (19UL) /*!< Position of REGION147 field. */
#define BPROT_CONFIG4_REGION147_Msk (0x1UL << BPROT_CONFIG4_REGION147_Pos) /*!< Bit mask of REGION147 field. */
#define BPROT_CONFIG4_REGION147_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG4_REGION147_Enabled (1UL) /*!< Protection enable */

/* Bit 18 : Enable protection for region 146. Write '0' has no effect. */
#define BPROT_CONFIG4_REGION146_Pos (18UL) /*!< Position of REGION146 field. */
#define BPROT_CONFIG4_REGION146_Msk (0x1UL << BPROT_CONFIG4_REGION146_Pos) /*!< Bit mask of REGION146 field. */
#define BPROT_CONFIG4_REGION146_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG4_REGION146_Enabled (1UL) /*!< Protection enable */

/* Bit 17 : Enable protection for region 145. Write '0' has no effect. */
#define BPROT_CONFIG4_REGION145_Pos (17UL) /*!< Position of REGION145 field. */
#define BPROT_CONFIG4_REGION145_Msk (0x1UL << BPROT_CONFIG4_REGION145_Pos) /*!< Bit mask of REGION145 field. */
#define BPROT_CONFIG4_REGION145_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG4_REGION145_Enabled (1UL) /*!< Protection enable */

/* Bit 16 : Enable protection for region 144. Write '0' has no effect. */
#define BPROT_CONFIG4_REGION144_Pos (16UL) /*!< Position of REGION144 field. */
#define BPROT_CONFIG4_REGION144_Msk (0x1UL << BPROT_CONFIG4_REGION144_Pos) /*!< Bit mask of REGION144 field. */
#define BPROT_CONFIG4_REGION144_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG4_REGION144_Enabled (1UL) /*!< Protection enable */

/* Bit 15 : Enable protection for region 143. Write '0' has no effect. */
#define BPROT_CONFIG4_REGION143_Pos (15UL) /*!< Position of REGION143 field. */
#define BPROT_CONFIG4_REGION143_Msk (0x1UL << BPROT_CONFIG4_REGION143_Pos) /*!< Bit mask of REGION143 field. */
#define BPROT_CONFIG4_REGION143_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG4_REGION143_Enabled (1UL) /*!< Protection enable */

/* Bit 14 : Enable protection for region 142. Write '0' has no effect. */
#define BPROT_CONFIG4_REGION142_Pos (14UL) /*!< Position of REGION142 field. */
#define BPROT_CONFIG4_REGION142_Msk (0x1UL << BPROT_CONFIG4_REGION142_Pos) /*!< Bit mask of REGION142 field. */
#define BPROT_CONFIG4_REGION142_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG4_REGION142_Enabled (1UL) /*!< Protection enable */

/* Bit 13 : Enable protection for region 141. Write '0' has no effect. */
#define BPROT_CONFIG4_REGION141_Pos (13UL) /*!< Position of REGION141 field. */
#define BPROT_CONFIG4_REGION141_Msk (0x1UL << BPROT_CONFIG4_REGION141_Pos) /*!< Bit mask of REGION141 field. */
#define BPROT_CONFIG4_REGION141_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG4_REGION141_Enabled (1UL) /*!< Protection enable */

/* Bit 12 : Enable protection for region 140. Write '0' has no effect. */
#define BPROT_CONFIG4_REGION140_Pos (12UL) /*!< Position of REGION140 field. */
#define BPROT_CONFIG4_REGION140_Msk (0x1UL << BPROT_CONFIG4_REGION140_Pos) /*!< Bit mask of REGION140 field. */
#define BPROT_CONFIG4_REGION140_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG4_REGION140_Enabled (1UL) /*!< Protection enable */

/* Bit 11 : Enable protection for region 139. Write '0' has no effect. */
#define BPROT_CONFIG4_REGION139_Pos (11UL) /*!< Position of REGION139 field. */
#define BPROT_CONFIG4_REGION139_Msk (0x1UL << BPROT_CONFIG4_REGION139_Pos) /*!< Bit mask of REGION139 field. */
#define BPROT_CONFIG4_REGION139_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG4_REGION139_Enabled (1UL) /*!< Protection enable */

/* Bit 10 : Enable protection for region 138. Write '0' has no effect. */
#define BPROT_CONFIG4_REGION138_Pos (10UL) /*!< Position of REGION138 field. */
#define BPROT_CONFIG4_REGION138_Msk (0x1UL << BPROT_CONFIG4_REGION138_Pos) /*!< Bit mask of REGION138 field. */
#define BPROT_CONFIG4_REGION138_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG4_REGION138_Enabled (1UL) /*!< Protection enable */

/* Bit 9 : Enable protection for region 137. Write '0' has no effect. */
#define BPROT_CONFIG4_REGION137_Pos (9UL) /*!< Position of REGION137 field. */
#define BPROT_CONFIG4_REGION137_Msk (0x1UL << BPROT_CONFIG4_REGION137_Pos) /*!< Bit mask of REGION137 field. */
#define BPROT_CONFIG4_REGION137_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG4_REGION137_Enabled (1UL) /*!< Protection enable */

/* Bit 8 : Enable protection for region 136. Write '0' has no effect. */
#define BPROT_CONFIG4_REGION136_Pos (8UL) /*!< Position of REGION136 field. */
#define BPROT_CONFIG4_REGION136_Msk (0x1UL << BPROT_CONFIG4_REGION136_Pos) /*!< Bit mask of REGION136 field. */
#define BPROT_CONFIG4_REGION136_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG4_REGION136_Enabled (1UL) /*!< Protection enable */

/* Bit 7 : Enable protection for region 135. Write '0' has no effect. */
#define BPROT_CONFIG4_REGION135_Pos (7UL) /*!< Position of REGION135 field. */
#define BPROT_CONFIG4_REGION135_Msk (0x1UL << BPROT_CONFIG4_REGION135_Pos) /*!< Bit mask of REGION135 field. */
#define BPROT_CONFIG4_REGION135_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG4_REGION135_Enabled (1UL) /*!< Protection enable */

/* Bit 6 : Enable protection for region 134. Write '0' has no effect. */
#define BPROT_CONFIG4_REGION134_Pos (6UL) /*!< Position of REGION134 field. */
#define BPROT_CONFIG4_REGION134_Msk (0x1UL << BPROT_CONFIG4_REGION134_Pos) /*!< Bit mask of REGION134 field. */
#define BPROT_CONFIG4_REGION134_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG4_REGION134_Enabled (1UL) /*!< Protection enable */

/* Bit 5 : Enable protection for region 133. Write '0' has no effect. */
#define BPROT_CONFIG4_REGION133_Pos (5UL) /*!< Position of REGION133 field. */
#define BPROT_CONFIG4_REGION133_Msk (0x1UL << BPROT_CONFIG4_REGION133_Pos) /*!< Bit mask of REGION133 field. */
#define BPROT_CONFIG4_REGION133_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG4_REGION133_Enabled (1UL) /*!< Protection enable */

/* Bit 4 : Enable protection for region 132. Write '0' has no effect. */
#define BPROT_CONFIG4_REGION132_Pos (4UL) /*!< Position of REGION132 field. */
#define BPROT_CONFIG4_REGION132_Msk (0x1UL << BPROT_CONFIG4_REGION132_Pos) /*!< Bit mask of REGION132 field. */
#define BPROT_CONFIG4_REGION132_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG4_REGION132_Enabled (1UL) /*!< Protection enable */

/* Bit 3 : Enable protection for region 131. Write '0' has no effect. */
#define BPROT_CONFIG4_REGION131_Pos (3UL) /*!< Position of REGION131 field. */
#define BPROT_CONFIG4_REGION131_Msk (0x1UL << BPROT_CONFIG4_REGION131_Pos) /*!< Bit mask of REGION131 field. */
#define BPROT_CONFIG4_REGION131_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG4_REGION131_Enabled (1UL) /*!< Protection enable */

/* Bit 2 : Enable protection for region 130. Write '0' has no effect. */
#define BPROT_CONFIG4_REGION130_Pos (2UL) /*!< Position of REGION130 field. */
#define BPROT_CONFIG4_REGION130_Msk (0x1UL << BPROT_CONFIG4_REGION130_Pos) /*!< Bit mask of REGION130 field. */
#define BPROT_CONFIG4_REGION130_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG4_REGION130_Enabled (1UL) /*!< Protection enable */

/* Bit 1 : Enable protection for region 129. Write '0' has no effect. */
#define BPROT_CONFIG4_REGION129_Pos (1UL) /*!< Position of REGION129 field. */
#define BPROT_CONFIG4_REGION129_Msk (0x1UL << BPROT_CONFIG4_REGION129_Pos) /*!< Bit mask of REGION129 field. */
#define BPROT_CONFIG4_REGION129_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG4_REGION129_Enabled (1UL) /*!< Protection enable */

/* Bit 0 : Enable protection for region 128. Write '0' has no effect. */
#define BPROT_CONFIG4_REGION128_Pos (0UL) /*!< Position of REGION128 field. */
#define BPROT_CONFIG4_REGION128_Msk (0x1UL << BPROT_CONFIG4_REGION128_Pos) /*!< Bit mask of REGION128 field. */
#define BPROT_CONFIG4_REGION128_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG4_REGION128_Enabled (1UL) /*!< Protection enable */

/* Register: BPROT_CONFIG5 */
/* Description: Block protect configuration register 0 */

/* Bit 31 : Enable protection for region 191. Write '0' has no effect. */
#define BPROT_CONFIG5_REGION191_Pos (31UL) /*!< Position of REGION191 field. */
#define BPROT_CONFIG5_REGION191_Msk (0x1UL << BPROT_CONFIG5_REGION191_Pos) /*!< Bit mask of REGION191 field. */
#define BPROT_CONFIG5_REGION191_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG5_REGION191_Enabled (1UL) /*!< Protection enable */

/* Bit 30 : Enable protection for region 190. Write '0' has no effect. */
#define BPROT_CONFIG5_REGION190_Pos (30UL) /*!< Position of REGION190 field. */
#define BPROT_CONFIG5_REGION190_Msk (0x1UL << BPROT_CONFIG5_REGION190_Pos) /*!< Bit mask of REGION190 field. */
#define BPROT_CONFIG5_REGION190_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG5_REGION190_Enabled (1UL) /*!< Protection enable */

/* Bit 29 : Enable protection for region 189. Write '0' has no effect. */
#define BPROT_CONFIG5_REGION189_Pos (29UL) /*!< Position of REGION189 field. */
#define BPROT_CONFIG5_REGION189_Msk (0x1UL << BPROT_CONFIG5_REGION189_Pos) /*!< Bit mask of REGION189 field. */
#define BPROT_CONFIG5_REGION189_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG5_REGION189_Enabled (1UL) /*!< Protection enable */

/* Bit 28 : Enable protection for region 188. Write '0' has no effect. */
#define BPROT_CONFIG5_REGION188_Pos (28UL) /*!< Position of REGION188 field. */
#define BPROT_CONFIG5_REGION188_Msk (0x1UL << BPROT_CONFIG5_REGION188_Pos) /*!< Bit mask of REGION188 field. */
#define BPROT_CONFIG5_REGION188_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG5_REGION188_Enabled (1UL) /*!< Protection enable */

/* Bit 27 : Enable protection for region 187. Write '0' has no effect. */
#define BPROT_CONFIG5_REGION187_Pos (27UL) /*!< Position of REGION187 field. */
#define BPROT_CONFIG5_REGION187_Msk (0x1UL << BPROT_CONFIG5_REGION187_Pos) /*!< Bit mask of REGION187 field. */
#define BPROT_CONFIG5_REGION187_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG5_REGION187_Enabled (1UL) /*!< Protection enable */

/* Bit 26 : Enable protection for region 186. Write '0' has no effect. */
#define BPROT_CONFIG5_REGION186_Pos (26UL) /*!< Position of REGION186 field. */
#define BPROT_CONFIG5_REGION186_Msk (0x1UL << BPROT_CONFIG5_REGION186_Pos) /*!< Bit mask of REGION186 field. */
#define BPROT_CONFIG5_REGION186_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG5_REGION186_Enabled (1UL) /*!< Protection enable */

/* Bit 25 : Enable protection for region 185. Write '0' has no effect. */
#define BPROT_CONFIG5_REGION185_Pos (25UL) /*!< Position of REGION185 field. */
#define BPROT_CONFIG5_REGION185_Msk (0x1UL << BPROT_CONFIG5_REGION185_Pos) /*!< Bit mask of REGION185 field. */
#define BPROT_CONFIG5_REGION185_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG5_REGION185_Enabled (1UL) /*!< Protection enable */

/* Bit 24 : Enable protection for region 184. Write '0' has no effect. */
#define BPROT_CONFIG5_REGION184_Pos (24UL) /*!< Position of REGION184 field. */
#define BPROT_CONFIG5_REGION184_Msk (0x1UL << BPROT_CONFIG5_REGION184_Pos) /*!< Bit mask of REGION184 field. */
#define BPROT_CONFIG5_REGION184_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG5_REGION184_Enabled (1UL) /*!< Protection enable */

/* Bit 23 : Enable protection for region 183. Write '0' has no effect. */
#define BPROT_CONFIG5_REGION183_Pos (23UL) /*!< Position of REGION183 field. */
#define BPROT_CONFIG5_REGION183_Msk (0x1UL << BPROT_CONFIG5_REGION183_Pos) /*!< Bit mask of REGION183 field. */
#define BPROT_CONFIG5_REGION183_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG5_REGION183_Enabled (1UL) /*!< Protection enable */

/* Bit 22 : Enable protection for region 182. Write '0' has no effect. */
#define BPROT_CONFIG5_REGION182_Pos (22UL) /*!< Position of REGION182 field. */
#define BPROT_CONFIG5_REGION182_Msk (0x1UL << BPROT_CONFIG5_REGION182_Pos) /*!< Bit mask of REGION182 field. */
#define BPROT_CONFIG5_REGION182_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG5_REGION182_Enabled (1UL) /*!< Protection enable */

/* Bit 21 : Enable protection for region 181. Write '0' has no effect. */
#define BPROT_CONFIG5_REGION181_Pos (21UL) /*!< Position of REGION181 field. */
#define BPROT_CONFIG5_REGION181_Msk (0x1UL << BPROT_CONFIG5_REGION181_Pos) /*!< Bit mask of REGION181 field. */
#define BPROT_CONFIG5_REGION181_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG5_REGION181_Enabled (1UL) /*!< Protection enable */

/* Bit 20 : Enable protection for region 180. Write '0' has no effect. */
#define BPROT_CONFIG5_REGION180_Pos (20UL) /*!< Position of REGION180 field. */
#define BPROT_CONFIG5_REGION180_Msk (0x1UL << BPROT_CONFIG5_REGION180_Pos) /*!< Bit mask of REGION180 field. */
#define BPROT_CONFIG5_REGION180_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG5_REGION180_Enabled (1UL) /*!< Protection enable */

/* Bit 19 : Enable protection for region 179. Write '0' has no effect. */
#define BPROT_CONFIG5_REGION179_Pos (19UL) /*!< Position of REGION179 field. */
#define BPROT_CONFIG5_REGION179_Msk (0x1UL << BPROT_CONFIG5_REGION179_Pos) /*!< Bit mask of REGION179 field. */
#define BPROT_CONFIG5_REGION179_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG5_REGION179_Enabled (1UL) /*!< Protection enable */

/* Bit 18 : Enable protection for region 178. Write '0' has no effect. */
#define BPROT_CONFIG5_REGION178_Pos (18UL) /*!< Position of REGION178 field. */
#define BPROT_CONFIG5_REGION178_Msk (0x1UL << BPROT_CONFIG5_REGION178_Pos) /*!< Bit mask of REGION178 field. */
#define BPROT_CONFIG5_REGION178_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG5_REGION178_Enabled (1UL) /*!< Protection enable */

/* Bit 17 : Enable protection for region 177. Write '0' has no effect. */
#define BPROT_CONFIG5_REGION177_Pos (17UL) /*!< Position of REGION177 field. */
#define BPROT_CONFIG5_REGION177_Msk (0x1UL << BPROT_CONFIG5_REGION177_Pos) /*!< Bit mask of REGION177 field. */
#define BPROT_CONFIG5_REGION177_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG5_REGION177_Enabled (1UL) /*!< Protection enable */

/* Bit 16 : Enable protection for region 176. Write '0' has no effect. */
#define BPROT_CONFIG5_REGION176_Pos (16UL) /*!< Position of REGION176 field. */
#define BPROT_CONFIG5_REGION176_Msk (0x1UL << BPROT_CONFIG5_REGION176_Pos) /*!< Bit mask of REGION176 field. */
#define BPROT_CONFIG5_REGION176_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG5_REGION176_Enabled (1UL) /*!< Protection enable */

/* Bit 15 : Enable protection for region 175. Write '0' has no effect. */
#define BPROT_CONFIG5_REGION175_Pos (15UL) /*!< Position of REGION175 field. */
#define BPROT_CONFIG5_REGION175_Msk (0x1UL << BPROT_CONFIG5_REGION175_Pos) /*!< Bit mask of REGION175 field. */
#define BPROT_CONFIG5_REGION175_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG5_REGION175_Enabled (1UL) /*!< Protection enable */

/* Bit 14 : Enable protection for region 174. Write '0' has no effect. */
#define BPROT_CONFIG5_REGION174_Pos (14UL) /*!< Position of REGION174 field. */
#define BPROT_CONFIG5_REGION174_Msk (0x1UL << BPROT_CONFIG5_REGION174_Pos) /*!< Bit mask of REGION174 field. */
#define BPROT_CONFIG5_REGION174_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG5_REGION174_Enabled (1UL) /*!< Protection enable */

/* Bit 13 : Enable protection for region 173. Write '0' has no effect. */
#define BPROT_CONFIG5_REGION173_Pos (13UL) /*!< Position of REGION173 field. */
#define BPROT_CONFIG5_REGION173_Msk (0x1UL << BPROT_CONFIG5_REGION173_Pos) /*!< Bit mask of REGION173 field. */
#define BPROT_CONFIG5_REGION173_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG5_REGION173_Enabled (1UL) /*!< Protection enable */

/* Bit 12 : Enable protection for region 172. Write '0' has no effect. */
#define BPROT_CONFIG5_REGION172_Pos (12UL) /*!< Position of REGION172 field. */
#define BPROT_CONFIG5_REGION172_Msk (0x1UL << BPROT_CONFIG5_REGION172_Pos) /*!< Bit mask of REGION172 field. */
#define BPROT_CONFIG5_REGION172_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG5_REGION172_Enabled (1UL) /*!< Protection enable */

/* Bit 11 : Enable protection for region 171. Write '0' has no effect. */
#define BPROT_CONFIG5_REGION171_Pos (11UL) /*!< Position of REGION171 field. */
#define BPROT_CONFIG5_REGION171_Msk (0x1UL << BPROT_CONFIG5_REGION171_Pos) /*!< Bit mask of REGION171 field. */
#define BPROT_CONFIG5_REGION171_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG5_REGION171_Enabled (1UL) /*!< Protection enable */

/* Bit 10 : Enable protection for region 170. Write '0' has no effect. */
#define BPROT_CONFIG5_REGION170_Pos (10UL) /*!< Position of REGION170 field. */
#define BPROT_CONFIG5_REGION170_Msk (0x1UL << BPROT_CONFIG5_REGION170_Pos) /*!< Bit mask of REGION170 field. */
#define BPROT_CONFIG5_REGION170_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG5_REGION170_Enabled (1UL) /*!< Protection enable */

/* Bit 9 : Enable protection for region 169. Write '0' has no effect. */
#define BPROT_CONFIG5_REGION169_Pos (9UL) /*!< Position of REGION169 field. */
#define BPROT_CONFIG5_REGION169_Msk (0x1UL << BPROT_CONFIG5_REGION169_Pos) /*!< Bit mask of REGION169 field. */
#define BPROT_CONFIG5_REGION169_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG5_REGION169_Enabled (1UL) /*!< Protection enable */

/* Bit 8 : Enable protection for region 168. Write '0' has no effect. */
#define BPROT_CONFIG5_REGION168_Pos (8UL) /*!< Position of REGION168 field. */
#define BPROT_CONFIG5_REGION168_Msk (0x1UL << BPROT_CONFIG5_REGION168_Pos) /*!< Bit mask of REGION168 field. */
#define BPROT_CONFIG5_REGION168_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG5_REGION168_Enabled (1UL) /*!< Protection enable */

/* Bit 7 : Enable protection for region 167. Write '0' has no effect. */
#define BPROT_CONFIG5_REGION167_Pos (7UL) /*!< Position of REGION167 field. */
#define BPROT_CONFIG5_REGION167_Msk (0x1UL << BPROT_CONFIG5_REGION167_Pos) /*!< Bit mask of REGION167 field. */
#define BPROT_CONFIG5_REGION167_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG5_REGION167_Enabled (1UL) /*!< Protection enable */

/* Bit 6 : Enable protection for region 166. Write '0' has no effect. */
#define BPROT_CONFIG5_REGION166_Pos (6UL) /*!< Position of REGION166 field. */
#define BPROT_CONFIG5_REGION166_Msk (0x1UL << BPROT_CONFIG5_REGION166_Pos) /*!< Bit mask of REGION166 field. */
#define BPROT_CONFIG5_REGION166_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG5_REGION166_Enabled (1UL) /*!< Protection enable */

/* Bit 5 : Enable protection for region 165. Write '0' has no effect. */
#define BPROT_CONFIG5_REGION165_Pos (5UL) /*!< Position of REGION165 field. */
#define BPROT_CONFIG5_REGION165_Msk (0x1UL << BPROT_CONFIG5_REGION165_Pos) /*!< Bit mask of REGION165 field. */
#define BPROT_CONFIG5_REGION165_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG5_REGION165_Enabled (1UL) /*!< Protection enable */

/* Bit 4 : Enable protection for region 164. Write '0' has no effect. */
#define BPROT_CONFIG5_REGION164_Pos (4UL) /*!< Position of REGION164 field. */
#define BPROT_CONFIG5_REGION164_Msk (0x1UL << BPROT_CONFIG5_REGION164_Pos) /*!< Bit mask of REGION164 field. */
#define BPROT_CONFIG5_REGION164_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG5_REGION164_Enabled (1UL) /*!< Protection enable */

/* Bit 3 : Enable protection for region 163. Write '0' has no effect. */
#define BPROT_CONFIG5_REGION163_Pos (3UL) /*!< Position of REGION163 field. */
#define BPROT_CONFIG5_REGION163_Msk (0x1UL << BPROT_CONFIG5_REGION163_Pos) /*!< Bit mask of REGION163 field. */
#define BPROT_CONFIG5_REGION163_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG5_REGION163_Enabled (1UL) /*!< Protection enable */

/* Bit 2 : Enable protection for region 162. Write '0' has no effect. */
#define BPROT_CONFIG5_REGION162_Pos (2UL) /*!< Position of REGION162 field. */
#define BPROT_CONFIG5_REGION162_Msk (0x1UL << BPROT_CONFIG5_REGION162_Pos) /*!< Bit mask of REGION162 field. */
#define BPROT_CONFIG5_REGION162_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG5_REGION162_Enabled (1UL) /*!< Protection enable */

/* Bit 1 : Enable protection for region 161. Write '0' has no effect. */
#define BPROT_CONFIG5_REGION161_Pos (1UL) /*!< Position of REGION161 field. */
#define BPROT_CONFIG5_REGION161_Msk (0x1UL << BPROT_CONFIG5_REGION161_Pos) /*!< Bit mask of REGION161 field. */
#define BPROT_CONFIG5_REGION161_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG5_REGION161_Enabled (1UL) /*!< Protection enable */

/* Bit 0 : Enable protection for region 160. Write '0' has no effect. */
#define BPROT_CONFIG5_REGION160_Pos (0UL) /*!< Position of REGION160 field. */
#define BPROT_CONFIG5_REGION160_Msk (0x1UL << BPROT_CONFIG5_REGION160_Pos) /*!< Bit mask of REGION160 field. */
#define BPROT_CONFIG5_REGION160_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG5_REGION160_Enabled (1UL) /*!< Protection enable */

/* Register: BPROT_CONFIG6 */
/* Description: Block protect configuration register 0 */

/* Bit 31 : Enable protection for region 223. Write '0' has no effect. */
#define BPROT_CONFIG6_REGION223_Pos (31UL) /*!< Position of REGION223 field. */
#define BPROT_CONFIG6_REGION223_Msk (0x1UL << BPROT_CONFIG6_REGION223_Pos) /*!< Bit mask of REGION223 field. */
#define BPROT_CONFIG6_REGION223_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG6_REGION223_Enabled (1UL) /*!< Protection enable */

/* Bit 30 : Enable protection for region 222. Write '0' has no effect. */
#define BPROT_CONFIG6_REGION222_Pos (30UL) /*!< Position of REGION222 field. */
#define BPROT_CONFIG6_REGION222_Msk (0x1UL << BPROT_CONFIG6_REGION222_Pos) /*!< Bit mask of REGION222 field. */
#define BPROT_CONFIG6_REGION222_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG6_REGION222_Enabled (1UL) /*!< Protection enable */

/* Bit 29 : Enable protection for region 221. Write '0' has no effect. */
#define BPROT_CONFIG6_REGION221_Pos (29UL) /*!< Position of REGION221 field. */
#define BPROT_CONFIG6_REGION221_Msk (0x1UL << BPROT_CONFIG6_REGION221_Pos) /*!< Bit mask of REGION221 field. */
#define BPROT_CONFIG6_REGION221_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG6_REGION221_Enabled (1UL) /*!< Protection enable */

/* Bit 28 : Enable protection for region 220. Write '0' has no effect. */
#define BPROT_CONFIG6_REGION220_Pos (28UL) /*!< Position of REGION220 field. */
#define BPROT_CONFIG6_REGION220_Msk (0x1UL << BPROT_CONFIG6_REGION220_Pos) /*!< Bit mask of REGION220 field. */
#define BPROT_CONFIG6_REGION220_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG6_REGION220_Enabled (1UL) /*!< Protection enable */

/* Bit 27 : Enable protection for region 219. Write '0' has no effect. */
#define BPROT_CONFIG6_REGION219_Pos (27UL) /*!< Position of REGION219 field. */
#define BPROT_CONFIG6_REGION219_Msk (0x1UL << BPROT_CONFIG6_REGION219_Pos) /*!< Bit mask of REGION219 field. */
#define BPROT_CONFIG6_REGION219_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG6_REGION219_Enabled (1UL) /*!< Protection enable */

/* Bit 26 : Enable protection for region 218. Write '0' has no effect. */
#define BPROT_CONFIG6_REGION218_Pos (26UL) /*!< Position of REGION218 field. */
#define BPROT_CONFIG6_REGION218_Msk (0x1UL << BPROT_CONFIG6_REGION218_Pos) /*!< Bit mask of REGION218 field. */
#define BPROT_CONFIG6_REGION218_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG6_REGION218_Enabled (1UL) /*!< Protection enable */

/* Bit 25 : Enable protection for region 217. Write '0' has no effect. */
#define BPROT_CONFIG6_REGION217_Pos (25UL) /*!< Position of REGION217 field. */
#define BPROT_CONFIG6_REGION217_Msk (0x1UL << BPROT_CONFIG6_REGION217_Pos) /*!< Bit mask of REGION217 field. */
#define BPROT_CONFIG6_REGION217_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG6_REGION217_Enabled (1UL) /*!< Protection enable */

/* Bit 24 : Enable protection for region 216. Write '0' has no effect. */
#define BPROT_CONFIG6_REGION216_Pos (24UL) /*!< Position of REGION216 field. */
#define BPROT_CONFIG6_REGION216_Msk (0x1UL << BPROT_CONFIG6_REGION216_Pos) /*!< Bit mask of REGION216 field. */
#define BPROT_CONFIG6_REGION216_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG6_REGION216_Enabled (1UL) /*!< Protection enable */

/* Bit 23 : Enable protection for region 215. Write '0' has no effect. */
#define BPROT_CONFIG6_REGION215_Pos (23UL) /*!< Position of REGION215 field. */
#define BPROT_CONFIG6_REGION215_Msk (0x1UL << BPROT_CONFIG6_REGION215_Pos) /*!< Bit mask of REGION215 field. */
#define BPROT_CONFIG6_REGION215_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG6_REGION215_Enabled (1UL) /*!< Protection enable */

/* Bit 22 : Enable protection for region 214. Write '0' has no effect. */
#define BPROT_CONFIG6_REGION214_Pos (22UL) /*!< Position of REGION214 field. */
#define BPROT_CONFIG6_REGION214_Msk (0x1UL << BPROT_CONFIG6_REGION214_Pos) /*!< Bit mask of REGION214 field. */
#define BPROT_CONFIG6_REGION214_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG6_REGION214_Enabled (1UL) /*!< Protection enable */

/* Bit 21 : Enable protection for region 213. Write '0' has no effect. */
#define BPROT_CONFIG6_REGION213_Pos (21UL) /*!< Position of REGION213 field. */
#define BPROT_CONFIG6_REGION213_Msk (0x1UL << BPROT_CONFIG6_REGION213_Pos) /*!< Bit mask of REGION213 field. */
#define BPROT_CONFIG6_REGION213_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG6_REGION213_Enabled (1UL) /*!< Protection enable */

/* Bit 20 : Enable protection for region 212. Write '0' has no effect. */
#define BPROT_CONFIG6_REGION212_Pos (20UL) /*!< Position of REGION212 field. */
#define BPROT_CONFIG6_REGION212_Msk (0x1UL << BPROT_CONFIG6_REGION212_Pos) /*!< Bit mask of REGION212 field. */
#define BPROT_CONFIG6_REGION212_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG6_REGION212_Enabled (1UL) /*!< Protection enable */

/* Bit 19 : Enable protection for region 211. Write '0' has no effect. */
#define BPROT_CONFIG6_REGION211_Pos (19UL) /*!< Position of REGION211 field. */
#define BPROT_CONFIG6_REGION211_Msk (0x1UL << BPROT_CONFIG6_REGION211_Pos) /*!< Bit mask of REGION211 field. */
#define BPROT_CONFIG6_REGION211_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG6_REGION211_Enabled (1UL) /*!< Protection enable */

/* Bit 18 : Enable protection for region 210. Write '0' has no effect. */
#define BPROT_CONFIG6_REGION210_Pos (18UL) /*!< Position of REGION210 field. */
#define BPROT_CONFIG6_REGION210_Msk (0x1UL << BPROT_CONFIG6_REGION210_Pos) /*!< Bit mask of REGION210 field. */
#define BPROT_CONFIG6_REGION210_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG6_REGION210_Enabled (1UL) /*!< Protection enable */

/* Bit 17 : Enable protection for region 209. Write '0' has no effect. */
#define BPROT_CONFIG6_REGION209_Pos (17UL) /*!< Position of REGION209 field. */
#define BPROT_CONFIG6_REGION209_Msk (0x1UL << BPROT_CONFIG6_REGION209_Pos) /*!< Bit mask of REGION209 field. */
#define BPROT_CONFIG6_REGION209_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG6_REGION209_Enabled (1UL) /*!< Protection enable */

/* Bit 16 : Enable protection for region 208. Write '0' has no effect. */
#define BPROT_CONFIG6_REGION208_Pos (16UL) /*!< Position of REGION208 field. */
#define BPROT_CONFIG6_REGION208_Msk (0x1UL << BPROT_CONFIG6_REGION208_Pos) /*!< Bit mask of REGION208 field. */
#define BPROT_CONFIG6_REGION208_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG6_REGION208_Enabled (1UL) /*!< Protection enable */

/* Bit 15 : Enable protection for region 207. Write '0' has no effect. */
#define BPROT_CONFIG6_REGION207_Pos (15UL) /*!< Position of REGION207 field. */
#define BPROT_CONFIG6_REGION207_Msk (0x1UL << BPROT_CONFIG6_REGION207_Pos) /*!< Bit mask of REGION207 field. */
#define BPROT_CONFIG6_REGION207_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG6_REGION207_Enabled (1UL) /*!< Protection enable */

/* Bit 14 : Enable protection for region 206. Write '0' has no effect. */
#define BPROT_CONFIG6_REGION206_Pos (14UL) /*!< Position of REGION206 field. */
#define BPROT_CONFIG6_REGION206_Msk (0x1UL << BPROT_CONFIG6_REGION206_Pos) /*!< Bit mask of REGION206 field. */
#define BPROT_CONFIG6_REGION206_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG6_REGION206_Enabled (1UL) /*!< Protection enable */

/* Bit 13 : Enable protection for region 205. Write '0' has no effect. */
#define BPROT_CONFIG6_REGION205_Pos (13UL) /*!< Position of REGION205 field. */
#define BPROT_CONFIG6_REGION205_Msk (0x1UL << BPROT_CONFIG6_REGION205_Pos) /*!< Bit mask of REGION205 field. */
#define BPROT_CONFIG6_REGION205_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG6_REGION205_Enabled (1UL) /*!< Protection enable */

/* Bit 12 : Enable protection for region 204. Write '0' has no effect. */
#define BPROT_CONFIG6_REGION204_Pos (12UL) /*!< Position of REGION204 field. */
#define BPROT_CONFIG6_REGION204_Msk (0x1UL << BPROT_CONFIG6_REGION204_Pos) /*!< Bit mask of REGION204 field. */
#define BPROT_CONFIG6_REGION204_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG6_REGION204_Enabled (1UL) /*!< Protection enable */

/* Bit 11 : Enable protection for region 203. Write '0' has no effect. */
#define BPROT_CONFIG6_REGION203_Pos (11UL) /*!< Position of REGION203 field. */
#define BPROT_CONFIG6_REGION203_Msk (0x1UL << BPROT_CONFIG6_REGION203_Pos) /*!< Bit mask of REGION203 field. */
#define BPROT_CONFIG6_REGION203_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG6_REGION203_Enabled (1UL) /*!< Protection enable */

/* Bit 10 : Enable protection for region 202. Write '0' has no effect. */
#define BPROT_CONFIG6_REGION202_Pos (10UL) /*!< Position of REGION202 field. */
#define BPROT_CONFIG6_REGION202_Msk (0x1UL << BPROT_CONFIG6_REGION202_Pos) /*!< Bit mask of REGION202 field. */
#define BPROT_CONFIG6_REGION202_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG6_REGION202_Enabled (1UL) /*!< Protection enable */

/* Bit 9 : Enable protection for region 201. Write '0' has no effect. */
#define BPROT_CONFIG6_REGION201_Pos (9UL) /*!< Position of REGION201 field. */
#define BPROT_CONFIG6_REGION201_Msk (0x1UL << BPROT_CONFIG6_REGION201_Pos) /*!< Bit mask of REGION201 field. */
#define BPROT_CONFIG6_REGION201_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG6_REGION201_Enabled (1UL) /*!< Protection enable */

/* Bit 8 : Enable protection for region 200. Write '0' has no effect. */
#define BPROT_CONFIG6_REGION200_Pos (8UL) /*!< Position of REGION200 field. */
#define BPROT_CONFIG6_REGION200_Msk (0x1UL << BPROT_CONFIG6_REGION200_Pos) /*!< Bit mask of REGION200 field. */
#define BPROT_CONFIG6_REGION200_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG6_REGION200_Enabled (1UL) /*!< Protection enable */

/* Bit 7 : Enable protection for region 199. Write '0' has no effect. */
#define BPROT_CONFIG6_REGION199_Pos (7UL) /*!< Position of REGION199 field. */
#define BPROT_CONFIG6_REGION199_Msk (0x1UL << BPROT_CONFIG6_REGION199_Pos) /*!< Bit mask of REGION199 field. */
#define BPROT_CONFIG6_REGION199_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG6_REGION199_Enabled (1UL) /*!< Protection enable */

/* Bit 6 : Enable protection for region 198. Write '0' has no effect. */
#define BPROT_CONFIG6_REGION198_Pos (6UL) /*!< Position of REGION198 field. */
#define BPROT_CONFIG6_REGION198_Msk (0x1UL << BPROT_CONFIG6_REGION198_Pos) /*!< Bit mask of REGION198 field. */
#define BPROT_CONFIG6_REGION198_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG6_REGION198_Enabled (1UL) /*!< Protection enable */

/* Bit 5 : Enable protection for region 197. Write '0' has no effect. */
#define BPROT_CONFIG6_REGION197_Pos (5UL) /*!< Position of REGION197 field. */
#define BPROT_CONFIG6_REGION197_Msk (0x1UL << BPROT_CONFIG6_REGION197_Pos) /*!< Bit mask of REGION197 field. */
#define BPROT_CONFIG6_REGION197_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG6_REGION197_Enabled (1UL) /*!< Protection enable */

/* Bit 4 : Enable protection for region 196. Write '0' has no effect. */
#define BPROT_CONFIG6_REGION196_Pos (4UL) /*!< Position of REGION196 field. */
#define BPROT_CONFIG6_REGION196_Msk (0x1UL << BPROT_CONFIG6_REGION196_Pos) /*!< Bit mask of REGION196 field. */
#define BPROT_CONFIG6_REGION196_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG6_REGION196_Enabled (1UL) /*!< Protection enable */

/* Bit 3 : Enable protection for region 195. Write '0' has no effect. */
#define BPROT_CONFIG6_REGION195_Pos (3UL) /*!< Position of REGION195 field. */
#define BPROT_CONFIG6_REGION195_Msk (0x1UL << BPROT_CONFIG6_REGION195_Pos) /*!< Bit mask of REGION195 field. */
#define BPROT_CONFIG6_REGION195_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG6_REGION195_Enabled (1UL) /*!< Protection enable */

/* Bit 2 : Enable protection for region 194. Write '0' has no effect. */
#define BPROT_CONFIG6_REGION194_Pos (2UL) /*!< Position of REGION194 field. */
#define BPROT_CONFIG6_REGION194_Msk (0x1UL << BPROT_CONFIG6_REGION194_Pos) /*!< Bit mask of REGION194 field. */
#define BPROT_CONFIG6_REGION194_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG6_REGION194_Enabled (1UL) /*!< Protection enable */

/* Bit 1 : Enable protection for region 193. Write '0' has no effect. */
#define BPROT_CONFIG6_REGION193_Pos (1UL) /*!< Position of REGION193 field. */
#define BPROT_CONFIG6_REGION193_Msk (0x1UL << BPROT_CONFIG6_REGION193_Pos) /*!< Bit mask of REGION193 field. */
#define BPROT_CONFIG6_REGION193_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG6_REGION193_Enabled (1UL) /*!< Protection enable */

/* Bit 0 : Enable protection for region 192. Write '0' has no effect. */
#define BPROT_CONFIG6_REGION192_Pos (0UL) /*!< Position of REGION192 field. */
#define BPROT_CONFIG6_REGION192_Msk (0x1UL << BPROT_CONFIG6_REGION192_Pos) /*!< Bit mask of REGION192 field. */
#define BPROT_CONFIG6_REGION192_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG6_REGION192_Enabled (1UL) /*!< Protection enable */

/* Register: BPROT_CONFIG7 */
/* Description: Block protect configuration register 0 */

/* Bit 31 : Enable protection for region 255. Write '0' has no effect. */
#define BPROT_CONFIG7_REGION255_Pos (31UL) /*!< Position of REGION255 field. */
#define BPROT_CONFIG7_REGION255_Msk (0x1UL << BPROT_CONFIG7_REGION255_Pos) /*!< Bit mask of REGION255 field. */
#define BPROT_CONFIG7_REGION255_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG7_REGION255_Enabled (1UL) /*!< Protection enable */

/* Bit 30 : Enable protection for region 254. Write '0' has no effect. */
#define BPROT_CONFIG7_REGION254_Pos (30UL) /*!< Position of REGION254 field. */
#define BPROT_CONFIG7_REGION254_Msk (0x1UL << BPROT_CONFIG7_REGION254_Pos) /*!< Bit mask of REGION254 field. */
#define BPROT_CONFIG7_REGION254_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG7_REGION254_Enabled (1UL) /*!< Protection enable */

/* Bit 29 : Enable protection for region 253. Write '0' has no effect. */
#define BPROT_CONFIG7_REGION253_Pos (29UL) /*!< Position of REGION253 field. */
#define BPROT_CONFIG7_REGION253_Msk (0x1UL << BPROT_CONFIG7_REGION253_Pos) /*!< Bit mask of REGION253 field. */
#define BPROT_CONFIG7_REGION253_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG7_REGION253_Enabled (1UL) /*!< Protection enable */

/* Bit 28 : Enable protection for region 252. Write '0' has no effect. */
#define BPROT_CONFIG7_REGION252_Pos (28UL) /*!< Position of REGION252 field. */
#define BPROT_CONFIG7_REGION252_Msk (0x1UL << BPROT_CONFIG7_REGION252_Pos) /*!< Bit mask of REGION252 field. */
#define BPROT_CONFIG7_REGION252_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG7_REGION252_Enabled (1UL) /*!< Protection enable */

/* Bit 27 : Enable protection for region 251. Write '0' has no effect. */
#define BPROT_CONFIG7_REGION251_Pos (27UL) /*!< Position of REGION251 field. */
#define BPROT_CONFIG7_REGION251_Msk (0x1UL << BPROT_CONFIG7_REGION251_Pos) /*!< Bit mask of REGION251 field. */
#define BPROT_CONFIG7_REGION251_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG7_REGION251_Enabled (1UL) /*!< Protection enable */

/* Bit 26 : Enable protection for region 250. Write '0' has no effect. */
#define BPROT_CONFIG7_REGION250_Pos (26UL) /*!< Position of REGION250 field. */
#define BPROT_CONFIG7_REGION250_Msk (0x1UL << BPROT_CONFIG7_REGION250_Pos) /*!< Bit mask of REGION250 field. */
#define BPROT_CONFIG7_REGION250_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG7_REGION250_Enabled (1UL) /*!< Protection enable */

/* Bit 25 : Enable protection for region 249. Write '0' has no effect. */
#define BPROT_CONFIG7_REGION249_Pos (25UL) /*!< Position of REGION249 field. */
#define BPROT_CONFIG7_REGION249_Msk (0x1UL << BPROT_CONFIG7_REGION249_Pos) /*!< Bit mask of REGION249 field. */
#define BPROT_CONFIG7_REGION249_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG7_REGION249_Enabled (1UL) /*!< Protection enable */

/* Bit 24 : Enable protection for region 248. Write '0' has no effect. */
#define BPROT_CONFIG7_REGION248_Pos (24UL) /*!< Position of REGION248 field. */
#define BPROT_CONFIG7_REGION248_Msk (0x1UL << BPROT_CONFIG7_REGION248_Pos) /*!< Bit mask of REGION248 field. */
#define BPROT_CONFIG7_REGION248_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG7_REGION248_Enabled (1UL) /*!< Protection enable */

/* Bit 23 : Enable protection for region 247. Write '0' has no effect. */
#define BPROT_CONFIG7_REGION247_Pos (23UL) /*!< Position of REGION247 field. */
#define BPROT_CONFIG7_REGION247_Msk (0x1UL << BPROT_CONFIG7_REGION247_Pos) /*!< Bit mask of REGION247 field. */
#define BPROT_CONFIG7_REGION247_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG7_REGION247_Enabled (1UL) /*!< Protection enable */

/* Bit 22 : Enable protection for region 246. Write '0' has no effect. */
#define BPROT_CONFIG7_REGION246_Pos (22UL) /*!< Position of REGION246 field. */
#define BPROT_CONFIG7_REGION246_Msk (0x1UL << BPROT_CONFIG7_REGION246_Pos) /*!< Bit mask of REGION246 field. */
#define BPROT_CONFIG7_REGION246_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG7_REGION246_Enabled (1UL) /*!< Protection enable */

/* Bit 21 : Enable protection for region 245. Write '0' has no effect. */
#define BPROT_CONFIG7_REGION245_Pos (21UL) /*!< Position of REGION245 field. */
#define BPROT_CONFIG7_REGION245_Msk (0x1UL << BPROT_CONFIG7_REGION245_Pos) /*!< Bit mask of REGION245 field. */
#define BPROT_CONFIG7_REGION245_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG7_REGION245_Enabled (1UL) /*!< Protection enable */

/* Bit 20 : Enable protection for region 244. Write '0' has no effect. */
#define BPROT_CONFIG7_REGION244_Pos (20UL) /*!< Position of REGION244 field. */
#define BPROT_CONFIG7_REGION244_Msk (0x1UL << BPROT_CONFIG7_REGION244_Pos) /*!< Bit mask of REGION244 field. */
#define BPROT_CONFIG7_REGION244_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG7_REGION244_Enabled (1UL) /*!< Protection enable */

/* Bit 19 : Enable protection for region 243. Write '0' has no effect. */
#define BPROT_CONFIG7_REGION243_Pos (19UL) /*!< Position of REGION243 field. */
#define BPROT_CONFIG7_REGION243_Msk (0x1UL << BPROT_CONFIG7_REGION243_Pos) /*!< Bit mask of REGION243 field. */
#define BPROT_CONFIG7_REGION243_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG7_REGION243_Enabled (1UL) /*!< Protection enable */

/* Bit 18 : Enable protection for region 242. Write '0' has no effect. */
#define BPROT_CONFIG7_REGION242_Pos (18UL) /*!< Position of REGION242 field. */
#define BPROT_CONFIG7_REGION242_Msk (0x1UL << BPROT_CONFIG7_REGION242_Pos) /*!< Bit mask of REGION242 field. */
#define BPROT_CONFIG7_REGION242_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG7_REGION242_Enabled (1UL) /*!< Protection enable */

/* Bit 17 : Enable protection for region 241. Write '0' has no effect. */
#define BPROT_CONFIG7_REGION241_Pos (17UL) /*!< Position of REGION241 field. */
#define BPROT_CONFIG7_REGION241_Msk (0x1UL << BPROT_CONFIG7_REGION241_Pos) /*!< Bit mask of REGION241 field. */
#define BPROT_CONFIG7_REGION241_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG7_REGION241_Enabled (1UL) /*!< Protection enable */

/* Bit 16 : Enable protection for region 240. Write '0' has no effect. */
#define BPROT_CONFIG7_REGION240_Pos (16UL) /*!< Position of REGION240 field. */
#define BPROT_CONFIG7_REGION240_Msk (0x1UL << BPROT_CONFIG7_REGION240_Pos) /*!< Bit mask of REGION240 field. */
#define BPROT_CONFIG7_REGION240_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG7_REGION240_Enabled (1UL) /*!< Protection enable */

/* Bit 15 : Enable protection for region 239. Write '0' has no effect. */
#define BPROT_CONFIG7_REGION239_Pos (15UL) /*!< Position of REGION239 field. */
#define BPROT_CONFIG7_REGION239_Msk (0x1UL << BPROT_CONFIG7_REGION239_Pos) /*!< Bit mask of REGION239 field. */
#define BPROT_CONFIG7_REGION239_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG7_REGION239_Enabled (1UL) /*!< Protection enable */

/* Bit 14 : Enable protection for region 238. Write '0' has no effect. */
#define BPROT_CONFIG7_REGION238_Pos (14UL) /*!< Position of REGION238 field. */
#define BPROT_CONFIG7_REGION238_Msk (0x1UL << BPROT_CONFIG7_REGION238_Pos) /*!< Bit mask of REGION238 field. */
#define BPROT_CONFIG7_REGION238_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG7_REGION238_Enabled (1UL) /*!< Protection enable */

/* Bit 13 : Enable protection for region 237. Write '0' has no effect. */
#define BPROT_CONFIG7_REGION237_Pos (13UL) /*!< Position of REGION237 field. */
#define BPROT_CONFIG7_REGION237_Msk (0x1UL << BPROT_CONFIG7_REGION237_Pos) /*!< Bit mask of REGION237 field. */
#define BPROT_CONFIG7_REGION237_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG7_REGION237_Enabled (1UL) /*!< Protection enable */

/* Bit 12 : Enable protection for region 236. Write '0' has no effect. */
#define BPROT_CONFIG7_REGION236_Pos (12UL) /*!< Position of REGION236 field. */
#define BPROT_CONFIG7_REGION236_Msk (0x1UL << BPROT_CONFIG7_REGION236_Pos) /*!< Bit mask of REGION236 field. */
#define BPROT_CONFIG7_REGION236_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG7_REGION236_Enabled (1UL) /*!< Protection enable */

/* Bit 11 : Enable protection for region 235. Write '0' has no effect. */
#define BPROT_CONFIG7_REGION235_Pos (11UL) /*!< Position of REGION235 field. */
#define BPROT_CONFIG7_REGION235_Msk (0x1UL << BPROT_CONFIG7_REGION235_Pos) /*!< Bit mask of REGION235 field. */
#define BPROT_CONFIG7_REGION235_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG7_REGION235_Enabled (1UL) /*!< Protection enable */

/* Bit 10 : Enable protection for region 234. Write '0' has no effect. */
#define BPROT_CONFIG7_REGION234_Pos (10UL) /*!< Position of REGION234 field. */
#define BPROT_CONFIG7_REGION234_Msk (0x1UL << BPROT_CONFIG7_REGION234_Pos) /*!< Bit mask of REGION234 field. */
#define BPROT_CONFIG7_REGION234_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG7_REGION234_Enabled (1UL) /*!< Protection enable */

/* Bit 9 : Enable protection for region 233. Write '0' has no effect. */
#define BPROT_CONFIG7_REGION233_Pos (9UL) /*!< Position of REGION233 field. */
#define BPROT_CONFIG7_REGION233_Msk (0x1UL << BPROT_CONFIG7_REGION233_Pos) /*!< Bit mask of REGION233 field. */
#define BPROT_CONFIG7_REGION233_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG7_REGION233_Enabled (1UL) /*!< Protection enable */

/* Bit 8 : Enable protection for region 232. Write '0' has no effect. */
#define BPROT_CONFIG7_REGION232_Pos (8UL) /*!< Position of REGION232 field. */
#define BPROT_CONFIG7_REGION232_Msk (0x1UL << BPROT_CONFIG7_REGION232_Pos) /*!< Bit mask of REGION232 field. */
#define BPROT_CONFIG7_REGION232_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG7_REGION232_Enabled (1UL) /*!< Protection enable */

/* Bit 7 : Enable protection for region 231. Write '0' has no effect. */
#define BPROT_CONFIG7_REGION231_Pos (7UL) /*!< Position of REGION231 field. */
#define BPROT_CONFIG7_REGION231_Msk (0x1UL << BPROT_CONFIG7_REGION231_Pos) /*!< Bit mask of REGION231 field. */
#define BPROT_CONFIG7_REGION231_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG7_REGION231_Enabled (1UL) /*!< Protection enable */

/* Bit 6 : Enable protection for region 230. Write '0' has no effect. */
#define BPROT_CONFIG7_REGION230_Pos (6UL) /*!< Position of REGION230 field. */
#define BPROT_CONFIG7_REGION230_Msk (0x1UL << BPROT_CONFIG7_REGION230_Pos) /*!< Bit mask of REGION230 field. */
#define BPROT_CONFIG7_REGION230_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG7_REGION230_Enabled (1UL) /*!< Protection enable */

/* Bit 5 : Enable protection for region 229. Write '0' has no effect. */
#define BPROT_CONFIG7_REGION229_Pos (5UL) /*!< Position of REGION229 field. */
#define BPROT_CONFIG7_REGION229_Msk (0x1UL << BPROT_CONFIG7_REGION229_Pos) /*!< Bit mask of REGION229 field. */
#define BPROT_CONFIG7_REGION229_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG7_REGION229_Enabled (1UL) /*!< Protection enable */

/* Bit 4 : Enable protection for region 228. Write '0' has no effect. */
#define BPROT_CONFIG7_REGION228_Pos (4UL) /*!< Position of REGION228 field. */
#define BPROT_CONFIG7_REGION228_Msk (0x1UL << BPROT_CONFIG7_REGION228_Pos) /*!< Bit mask of REGION228 field. */
#define BPROT_CONFIG7_REGION228_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG7_REGION228_Enabled (1UL) /*!< Protection enable */

/* Bit 3 : Enable protection for region 227. Write '0' has no effect. */
#define BPROT_CONFIG7_REGION227_Pos (3UL) /*!< Position of REGION227 field. */
#define BPROT_CONFIG7_REGION227_Msk (0x1UL << BPROT_CONFIG7_REGION227_Pos) /*!< Bit mask of REGION227 field. */
#define BPROT_CONFIG7_REGION227_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG7_REGION227_Enabled (1UL) /*!< Protection enable */

/* Bit 2 : Enable protection for region 226. Write '0' has no effect. */
#define BPROT_CONFIG7_REGION226_Pos (2UL) /*!< Position of REGION226 field. */
#define BPROT_CONFIG7_REGION226_Msk (0x1UL << BPROT_CONFIG7_REGION226_Pos) /*!< Bit mask of REGION226 field. */
#define BPROT_CONFIG7_REGION226_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG7_REGION226_Enabled (1UL) /*!< Protection enable */

/* Bit 1 : Enable protection for region 225. Write '0' has no effect. */
#define BPROT_CONFIG7_REGION225_Pos (1UL) /*!< Position of REGION225 field. */
#define BPROT_CONFIG7_REGION225_Msk (0x1UL << BPROT_CONFIG7_REGION225_Pos) /*!< Bit mask of REGION225 field. */
#define BPROT_CONFIG7_REGION225_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG7_REGION225_Enabled (1UL) /*!< Protection enable */

/* Bit 0 : Enable protection for region 224. Write '0' has no effect. */
#define BPROT_CONFIG7_REGION224_Pos (0UL) /*!< Position of REGION224 field. */
#define BPROT_CONFIG7_REGION224_Msk (0x1UL << BPROT_CONFIG7_REGION224_Pos) /*!< Bit mask of REGION224 field. */
#define BPROT_CONFIG7_REGION224_Disabled (0UL) /*!< Protection disabled */
#define BPROT_CONFIG7_REGION224_Enabled (1UL) /*!< Protection enable */


/* Peripheral: DCLOCK */
/* Description: Clock Management */

/* Register: DCLOCK_TASKS_HFCLKSTART */
/* Description: Start HFCLK crystal oscillator */

/* Bit 0 : Start HFCLK crystal oscillator */
#define DCLOCK_TASKS_HFCLKSTART_TASKS_HFCLKSTART_Pos (0UL) /*!< Position of TASKS_HFCLKSTART field. */
#define DCLOCK_TASKS_HFCLKSTART_TASKS_HFCLKSTART_Msk (0x1UL << DCLOCK_TASKS_HFCLKSTART_TASKS_HFCLKSTART_Pos) /*!< Bit mask of TASKS_HFCLKSTART field. */
#define DCLOCK_TASKS_HFCLKSTART_TASKS_HFCLKSTART_Trigger (1UL) /*!< Trigger task */

/* Register: DCLOCK_TASKS_HFCLKSTOP */
/* Description: Stop HFCLK crystal oscillator */

/* Bit 0 : Stop HFCLK crystal oscillator */
#define DCLOCK_TASKS_HFCLKSTOP_TASKS_HFCLKSTOP_Pos (0UL) /*!< Position of TASKS_HFCLKSTOP field. */
#define DCLOCK_TASKS_HFCLKSTOP_TASKS_HFCLKSTOP_Msk (0x1UL << DCLOCK_TASKS_HFCLKSTOP_TASKS_HFCLKSTOP_Pos) /*!< Bit mask of TASKS_HFCLKSTOP field. */
#define DCLOCK_TASKS_HFCLKSTOP_TASKS_HFCLKSTOP_Trigger (1UL) /*!< Trigger task */

/* Register: DCLOCK_TASKS_LFCLKSTART */
/* Description: Start LFCLK source */

/* Bit 0 : Start LFCLK source */
#define DCLOCK_TASKS_LFCLKSTART_TASKS_LFCLKSTART_Pos (0UL) /*!< Position of TASKS_LFCLKSTART field. */
#define DCLOCK_TASKS_LFCLKSTART_TASKS_LFCLKSTART_Msk (0x1UL << DCLOCK_TASKS_LFCLKSTART_TASKS_LFCLKSTART_Pos) /*!< Bit mask of TASKS_LFCLKSTART field. */
#define DCLOCK_TASKS_LFCLKSTART_TASKS_LFCLKSTART_Trigger (1UL) /*!< Trigger task */

/* Register: DCLOCK_TASKS_LFCLKSTOP */
/* Description: Stop LFCLK source */

/* Bit 0 : Stop LFCLK source */
#define DCLOCK_TASKS_LFCLKSTOP_TASKS_LFCLKSTOP_Pos (0UL) /*!< Position of TASKS_LFCLKSTOP field. */
#define DCLOCK_TASKS_LFCLKSTOP_TASKS_LFCLKSTOP_Msk (0x1UL << DCLOCK_TASKS_LFCLKSTOP_TASKS_LFCLKSTOP_Pos) /*!< Bit mask of TASKS_LFCLKSTOP field. */
#define DCLOCK_TASKS_LFCLKSTOP_TASKS_LFCLKSTOP_Trigger (1UL) /*!< Trigger task */

/* Register: DCLOCK_EVENTS_HFCLKSTARTED */
/* Description: HFCLK oscillator started */

/* Bit 0 : HFCLK oscillator started */
#define DCLOCK_EVENTS_HFCLKSTARTED_EVENTS_HFCLKSTARTED_Pos (0UL) /*!< Position of EVENTS_HFCLKSTARTED field. */
#define DCLOCK_EVENTS_HFCLKSTARTED_EVENTS_HFCLKSTARTED_Msk (0x1UL << DCLOCK_EVENTS_HFCLKSTARTED_EVENTS_HFCLKSTARTED_Pos) /*!< Bit mask of EVENTS_HFCLKSTARTED field. */
#define DCLOCK_EVENTS_HFCLKSTARTED_EVENTS_HFCLKSTARTED_NotGenerated (0UL) /*!< Event not generated */
#define DCLOCK_EVENTS_HFCLKSTARTED_EVENTS_HFCLKSTARTED_Generated (1UL) /*!< Event generated */

/* Register: DCLOCK_EVENTS_LFCLKSTARTED */
/* Description: LFCLK started */

/* Bit 0 : LFCLK started */
#define DCLOCK_EVENTS_LFCLKSTARTED_EVENTS_LFCLKSTARTED_Pos (0UL) /*!< Position of EVENTS_LFCLKSTARTED field. */
#define DCLOCK_EVENTS_LFCLKSTARTED_EVENTS_LFCLKSTARTED_Msk (0x1UL << DCLOCK_EVENTS_LFCLKSTARTED_EVENTS_LFCLKSTARTED_Pos) /*!< Bit mask of EVENTS_LFCLKSTARTED field. */
#define DCLOCK_EVENTS_LFCLKSTARTED_EVENTS_LFCLKSTARTED_NotGenerated (0UL) /*!< Event not generated */
#define DCLOCK_EVENTS_LFCLKSTARTED_EVENTS_LFCLKSTARTED_Generated (1UL) /*!< Event generated */

/* Register: DCLOCK_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 1 : Enable or disable interrupt for event LFCLKSTARTED */
#define DCLOCK_INTEN_LFCLKSTARTED_Pos (1UL) /*!< Position of LFCLKSTARTED field. */
#define DCLOCK_INTEN_LFCLKSTARTED_Msk (0x1UL << DCLOCK_INTEN_LFCLKSTARTED_Pos) /*!< Bit mask of LFCLKSTARTED field. */
#define DCLOCK_INTEN_LFCLKSTARTED_Disabled (0UL) /*!< Disable */
#define DCLOCK_INTEN_LFCLKSTARTED_Enabled (1UL) /*!< Enable */

/* Bit 0 : Enable or disable interrupt for event HFCLKSTARTED */
#define DCLOCK_INTEN_HFCLKSTARTED_Pos (0UL) /*!< Position of HFCLKSTARTED field. */
#define DCLOCK_INTEN_HFCLKSTARTED_Msk (0x1UL << DCLOCK_INTEN_HFCLKSTARTED_Pos) /*!< Bit mask of HFCLKSTARTED field. */
#define DCLOCK_INTEN_HFCLKSTARTED_Disabled (0UL) /*!< Disable */
#define DCLOCK_INTEN_HFCLKSTARTED_Enabled (1UL) /*!< Enable */

/* Register: DCLOCK_INTENSET */
/* Description: Enable interrupt */

/* Bit 1 : Write '1' to enable interrupt for event LFCLKSTARTED */
#define DCLOCK_INTENSET_LFCLKSTARTED_Pos (1UL) /*!< Position of LFCLKSTARTED field. */
#define DCLOCK_INTENSET_LFCLKSTARTED_Msk (0x1UL << DCLOCK_INTENSET_LFCLKSTARTED_Pos) /*!< Bit mask of LFCLKSTARTED field. */
#define DCLOCK_INTENSET_LFCLKSTARTED_Disabled (0UL) /*!< Read: Disabled */
#define DCLOCK_INTENSET_LFCLKSTARTED_Enabled (1UL) /*!< Read: Enabled */
#define DCLOCK_INTENSET_LFCLKSTARTED_Set (1UL) /*!< Enable */

/* Bit 0 : Write '1' to enable interrupt for event HFCLKSTARTED */
#define DCLOCK_INTENSET_HFCLKSTARTED_Pos (0UL) /*!< Position of HFCLKSTARTED field. */
#define DCLOCK_INTENSET_HFCLKSTARTED_Msk (0x1UL << DCLOCK_INTENSET_HFCLKSTARTED_Pos) /*!< Bit mask of HFCLKSTARTED field. */
#define DCLOCK_INTENSET_HFCLKSTARTED_Disabled (0UL) /*!< Read: Disabled */
#define DCLOCK_INTENSET_HFCLKSTARTED_Enabled (1UL) /*!< Read: Enabled */
#define DCLOCK_INTENSET_HFCLKSTARTED_Set (1UL) /*!< Enable */

/* Register: DCLOCK_INTENCLR */
/* Description: Disable interrupt */

/* Bit 1 : Write '1' to disable interrupt for event LFCLKSTARTED */
#define DCLOCK_INTENCLR_LFCLKSTARTED_Pos (1UL) /*!< Position of LFCLKSTARTED field. */
#define DCLOCK_INTENCLR_LFCLKSTARTED_Msk (0x1UL << DCLOCK_INTENCLR_LFCLKSTARTED_Pos) /*!< Bit mask of LFCLKSTARTED field. */
#define DCLOCK_INTENCLR_LFCLKSTARTED_Disabled (0UL) /*!< Read: Disabled */
#define DCLOCK_INTENCLR_LFCLKSTARTED_Enabled (1UL) /*!< Read: Enabled */
#define DCLOCK_INTENCLR_LFCLKSTARTED_Clear (1UL) /*!< Disable */

/* Bit 0 : Write '1' to disable interrupt for event HFCLKSTARTED */
#define DCLOCK_INTENCLR_HFCLKSTARTED_Pos (0UL) /*!< Position of HFCLKSTARTED field. */
#define DCLOCK_INTENCLR_HFCLKSTARTED_Msk (0x1UL << DCLOCK_INTENCLR_HFCLKSTARTED_Pos) /*!< Bit mask of HFCLKSTARTED field. */
#define DCLOCK_INTENCLR_HFCLKSTARTED_Disabled (0UL) /*!< Read: Disabled */
#define DCLOCK_INTENCLR_HFCLKSTARTED_Enabled (1UL) /*!< Read: Enabled */
#define DCLOCK_INTENCLR_HFCLKSTARTED_Clear (1UL) /*!< Disable */

/* Register: DCLOCK_INTPEND */
/* Description: Pending interrupts */

/* Bit 1 : Read pending status of interrupt for event LFCLKSTARTED */
#define DCLOCK_INTPEND_LFCLKSTARTED_Pos (1UL) /*!< Position of LFCLKSTARTED field. */
#define DCLOCK_INTPEND_LFCLKSTARTED_Msk (0x1UL << DCLOCK_INTPEND_LFCLKSTARTED_Pos) /*!< Bit mask of LFCLKSTARTED field. */
#define DCLOCK_INTPEND_LFCLKSTARTED_NotPending (0UL) /*!< Read: Not pending */
#define DCLOCK_INTPEND_LFCLKSTARTED_Pending (1UL) /*!< Read: Pending */

/* Bit 0 : Read pending status of interrupt for event HFCLKSTARTED */
#define DCLOCK_INTPEND_HFCLKSTARTED_Pos (0UL) /*!< Position of HFCLKSTARTED field. */
#define DCLOCK_INTPEND_HFCLKSTARTED_Msk (0x1UL << DCLOCK_INTPEND_HFCLKSTARTED_Pos) /*!< Bit mask of HFCLKSTARTED field. */
#define DCLOCK_INTPEND_HFCLKSTARTED_NotPending (0UL) /*!< Read: Not pending */
#define DCLOCK_INTPEND_HFCLKSTARTED_Pending (1UL) /*!< Read: Pending */

/* Register: DCLOCK_HFCLKRUN */
/* Description: Status indicating that HFCLKSTART task has been triggered */

/* Bit 0 : HFCLKSTART task triggered or not */
#define DCLOCK_HFCLKRUN_STATUS_Pos (0UL) /*!< Position of STATUS field. */
#define DCLOCK_HFCLKRUN_STATUS_Msk (0x1UL << DCLOCK_HFCLKRUN_STATUS_Pos) /*!< Bit mask of STATUS field. */
#define DCLOCK_HFCLKRUN_STATUS_NotTriggered (0UL) /*!< Task not triggered */
#define DCLOCK_HFCLKRUN_STATUS_Triggered (1UL) /*!< Task triggered */

/* Register: DCLOCK_HFCLKSTAT */
/* Description: Which HFCLK source is running */

/* Bit 16 : HFCLK state */
#define DCLOCK_HFCLKSTAT_STATE_Pos (16UL) /*!< Position of STATE field. */
#define DCLOCK_HFCLKSTAT_STATE_Msk (0x1UL << DCLOCK_HFCLKSTAT_STATE_Pos) /*!< Bit mask of STATE field. */
#define DCLOCK_HFCLKSTAT_STATE_NotRunning (0UL) /*!< HFCLK not running */
#define DCLOCK_HFCLKSTAT_STATE_Running (1UL) /*!< HFCLK running */

/* Bit 0 : Active clock source */
#define DCLOCK_HFCLKSTAT_SRC_Pos (0UL) /*!< Position of SRC field. */
#define DCLOCK_HFCLKSTAT_SRC_Msk (0x1UL << DCLOCK_HFCLKSTAT_SRC_Pos) /*!< Bit mask of SRC field. */
#define DCLOCK_HFCLKSTAT_SRC_HFINT (0UL) /*!< HFCLK clock source: HFINT - 64 MHz on-chip oscillator */
#define DCLOCK_HFCLKSTAT_SRC_HFXO (1UL) /*!< HFCLK clock source: HFXO - 64 MHz clock derived from external 32 MHz crystal oscillator */

/* Register: DCLOCK_LFCLKRUN */
/* Description: Status indicating that LFCLKSTART task has been triggered */

/* Bit 0 : LFCLKSTART task triggered or not */
#define DCLOCK_LFCLKRUN_STATUS_Pos (0UL) /*!< Position of STATUS field. */
#define DCLOCK_LFCLKRUN_STATUS_Msk (0x1UL << DCLOCK_LFCLKRUN_STATUS_Pos) /*!< Bit mask of STATUS field. */
#define DCLOCK_LFCLKRUN_STATUS_NotTriggered (0UL) /*!< Task not triggered */
#define DCLOCK_LFCLKRUN_STATUS_Triggered (1UL) /*!< Task triggered */

/* Register: DCLOCK_LFCLKSTAT */
/* Description: Which LFCLK source is running */

/* Bit 16 : LFCLK state */
#define DCLOCK_LFCLKSTAT_STATE_Pos (16UL) /*!< Position of STATE field. */
#define DCLOCK_LFCLKSTAT_STATE_Msk (0x1UL << DCLOCK_LFCLKSTAT_STATE_Pos) /*!< Bit mask of STATE field. */
#define DCLOCK_LFCLKSTAT_STATE_NotRunning (0UL) /*!< LFCLK not running */
#define DCLOCK_LFCLKSTAT_STATE_Running (1UL) /*!< LFCLK running */

/* Bits 1..0 : Active clock source */
#define DCLOCK_LFCLKSTAT_SRC_Pos (0UL) /*!< Position of SRC field. */
#define DCLOCK_LFCLKSTAT_SRC_Msk (0x3UL << DCLOCK_LFCLKSTAT_SRC_Pos) /*!< Bit mask of SRC field. */
#define DCLOCK_LFCLKSTAT_SRC_LFULP (0UL) /*!< 32.768 kHz ultra low power RC oscillator */
#define DCLOCK_LFCLKSTAT_SRC_LFRC (1UL) /*!< 32.768 kHz RC oscillator */
#define DCLOCK_LFCLKSTAT_SRC_LFXO (2UL) /*!< 32.768 kHz crystal oscillator */
#define DCLOCK_LFCLKSTAT_SRC_LFSYNT (3UL) /*!< 32.768 kHz synthesized from HFCLK */

/* Register: DCLOCK_LFCLKSRCCOPY */
/* Description: Copy of LFCLKSRC register, set when LFCLKSTART task was triggered LFULP is not treat as a separate clock source on Alta MLM1, where default clock source (0) is LFRC. */

/* Bits 1..0 : Clock source */
#define DCLOCK_LFCLKSRCCOPY_SRC_Pos (0UL) /*!< Position of SRC field. */
#define DCLOCK_LFCLKSRCCOPY_SRC_Msk (0x3UL << DCLOCK_LFCLKSRCCOPY_SRC_Pos) /*!< Bit mask of SRC field. */
#define DCLOCK_LFCLKSRCCOPY_SRC_LFULP (0UL) /*!< 32.768 kHz ultra low power RC oscillator (default) */
#define DCLOCK_LFCLKSRCCOPY_SRC_LFRC (1UL) /*!< 32.768 kHz RC oscillator */
#define DCLOCK_LFCLKSRCCOPY_SRC_LFXO (2UL) /*!< 32.768 kHz crystal oscillator */
#define DCLOCK_LFCLKSRCCOPY_SRC_LFSYNT (3UL) /*!< 32.768 kHz synthesized from HFCLK */

/* Register: DCLOCK_HFCLKCURRFREQ */
/* Description: Current frequency of HFCLK */

/* Bits 7..0 : Current High frequency clock (HCLK) frequency */
#define DCLOCK_HFCLKCURRFREQ_HFCLKCURRFREQ_Pos (0UL) /*!< Position of HFCLKCURRFREQ field. */
#define DCLOCK_HFCLKCURRFREQ_HFCLKCURRFREQ_Msk (0xFFUL << DCLOCK_HFCLKCURRFREQ_HFCLKCURRFREQ_Pos) /*!< Bit mask of HFCLKCURRFREQ field. */
#define DCLOCK_HFCLKCURRFREQ_HFCLKCURRFREQ_default (0UL) /*!< Default frequency */

/* Register: DCLOCK_HFCLKSRC */
/* Description: Clock source for the HFCLK oscillator, and configuration of XTAL oscillator. This register shall only be written while no oscillation is present on XC1. Failing to do so may cause unexpected behaviour. */

/* Bit 0 : Select which HFCLK source is started by the START task */
#define DCLOCK_HFCLKSRC_SRC_Pos (0UL) /*!< Position of SRC field. */
#define DCLOCK_HFCLKSRC_SRC_Msk (0x1UL << DCLOCK_HFCLKSRC_SRC_Pos) /*!< Bit mask of SRC field. */
#define DCLOCK_HFCLKSRC_SRC_HFINT (0UL) /*!< HFCLKSTART task starts HFINT oscillator */
#define DCLOCK_HFCLKSRC_SRC_HFXO (1UL) /*!< HFCLKSTART task starts HFXO oscillator */

/* Register: DCLOCK_LFCLKSRC */
/* Description: Clock source for the LFCLK. LFCLKSTART task starts starts a clock source selected with this register. LFULP is not treat as a separate clock source on Alta MLM1, where default clock source (0) is LFRC. */

/* Bits 1..0 : Clock source */
#define DCLOCK_LFCLKSRC_SRC_Pos (0UL) /*!< Position of SRC field. */
#define DCLOCK_LFCLKSRC_SRC_Msk (0x3UL << DCLOCK_LFCLKSRC_SRC_Pos) /*!< Bit mask of SRC field. */
#define DCLOCK_LFCLKSRC_SRC_LFULP (0UL) /*!< 32.768 kHz ultra low power RC oscillator (default) */
#define DCLOCK_LFCLKSRC_SRC_LFRC (1UL) /*!< 32.768 kHz RC oscillator */
#define DCLOCK_LFCLKSRC_SRC_LFXO (2UL) /*!< 32.768 kHz crystal oscillator */
#define DCLOCK_LFCLKSRC_SRC_LFSYNT (3UL) /*!< 32.768 kHz synthesized from HFCLK */

/* Register: DCLOCK_HFCLKCTRL */
/* Description: HFCLK frequency configuration. */

/* Bits 7..0 : High frequency clock HCLK */
#define DCLOCK_HFCLKCTRL_HCLK_Pos (0UL) /*!< Position of HCLK field. */
#define DCLOCK_HFCLKCTRL_HCLK_Msk (0xFFUL << DCLOCK_HFCLKCTRL_HCLK_Pos) /*!< Bit mask of HCLK field. */
#define DCLOCK_HFCLKCTRL_HCLK_default (0UL) /*!< Default frequency */


/* Peripheral: DCNF */
/* Description: Domain Configuration Management */

/* Register: DCNF_CPUID */
/* Description: CPU number in the system */

/* Bits 7..0 : CPU number in the system */
#define DCNF_CPUID_CPUID_Pos (0UL) /*!< Position of CPUID field. */
#define DCNF_CPUID_CPUID_Msk (0xFFUL << DCNF_CPUID_CPUID_Pos) /*!< Bit mask of CPUID field. */

/* Register: DCNF_EXTPERI0_PROTECT */
/* Description: Description collection: Control access for  Master connected to AMLI master port EXTPERI[n] */

/* Bit 6 : Control access to slave  6 of master EXTPERI[n]. */
#define DCNF_EXTPERI0_PROTECT_SLAVE6_Pos (6UL) /*!< Position of SLAVE6 field. */
#define DCNF_EXTPERI0_PROTECT_SLAVE6_Msk (0x1UL << DCNF_EXTPERI0_PROTECT_SLAVE6_Pos) /*!< Bit mask of SLAVE6 field. */
#define DCNF_EXTPERI0_PROTECT_SLAVE6_Allowed (0UL) /*!< Access to slave is possible */
#define DCNF_EXTPERI0_PROTECT_SLAVE6_Blocked (1UL) /*!< Access to slave is blocked */

/* Bit 5 : Control access to slave  5 of master EXTPERI[n]. */
#define DCNF_EXTPERI0_PROTECT_SLAVE5_Pos (5UL) /*!< Position of SLAVE5 field. */
#define DCNF_EXTPERI0_PROTECT_SLAVE5_Msk (0x1UL << DCNF_EXTPERI0_PROTECT_SLAVE5_Pos) /*!< Bit mask of SLAVE5 field. */
#define DCNF_EXTPERI0_PROTECT_SLAVE5_Allowed (0UL) /*!< Access to slave is possible */
#define DCNF_EXTPERI0_PROTECT_SLAVE5_Blocked (1UL) /*!< Access to slave is blocked */

/* Bit 4 : Control access to slave  4 of master EXTPERI[n]. */
#define DCNF_EXTPERI0_PROTECT_SLAVE4_Pos (4UL) /*!< Position of SLAVE4 field. */
#define DCNF_EXTPERI0_PROTECT_SLAVE4_Msk (0x1UL << DCNF_EXTPERI0_PROTECT_SLAVE4_Pos) /*!< Bit mask of SLAVE4 field. */
#define DCNF_EXTPERI0_PROTECT_SLAVE4_Allowed (0UL) /*!< Access to slave is possible */
#define DCNF_EXTPERI0_PROTECT_SLAVE4_Blocked (1UL) /*!< Access to slave is blocked */

/* Bit 3 : Control access to slave  3 of master EXTPERI[n]. */
#define DCNF_EXTPERI0_PROTECT_SLAVE3_Pos (3UL) /*!< Position of SLAVE3 field. */
#define DCNF_EXTPERI0_PROTECT_SLAVE3_Msk (0x1UL << DCNF_EXTPERI0_PROTECT_SLAVE3_Pos) /*!< Bit mask of SLAVE3 field. */
#define DCNF_EXTPERI0_PROTECT_SLAVE3_Allowed (0UL) /*!< Access to slave is possible */
#define DCNF_EXTPERI0_PROTECT_SLAVE3_Blocked (1UL) /*!< Access to slave is blocked */

/* Bit 2 : Control access to slave  2 of master EXTPERI[n]. */
#define DCNF_EXTPERI0_PROTECT_SLAVE2_Pos (2UL) /*!< Position of SLAVE2 field. */
#define DCNF_EXTPERI0_PROTECT_SLAVE2_Msk (0x1UL << DCNF_EXTPERI0_PROTECT_SLAVE2_Pos) /*!< Bit mask of SLAVE2 field. */
#define DCNF_EXTPERI0_PROTECT_SLAVE2_Allowed (0UL) /*!< Access to slave is possible */
#define DCNF_EXTPERI0_PROTECT_SLAVE2_Blocked (1UL) /*!< Access to slave is blocked */

/* Bit 1 : Control access to slave  1 of master EXTPERI[n]. */
#define DCNF_EXTPERI0_PROTECT_SLAVE1_Pos (1UL) /*!< Position of SLAVE1 field. */
#define DCNF_EXTPERI0_PROTECT_SLAVE1_Msk (0x1UL << DCNF_EXTPERI0_PROTECT_SLAVE1_Pos) /*!< Bit mask of SLAVE1 field. */
#define DCNF_EXTPERI0_PROTECT_SLAVE1_Allowed (0UL) /*!< Access to slave is possible */
#define DCNF_EXTPERI0_PROTECT_SLAVE1_Blocked (1UL) /*!< Access to slave is blocked */

/* Bit 0 : Control access to slave  0 of master EXTPERI[n]. */
#define DCNF_EXTPERI0_PROTECT_SLAVE0_Pos (0UL) /*!< Position of SLAVE0 field. */
#define DCNF_EXTPERI0_PROTECT_SLAVE0_Msk (0x1UL << DCNF_EXTPERI0_PROTECT_SLAVE0_Pos) /*!< Bit mask of SLAVE0 field. */
#define DCNF_EXTPERI0_PROTECT_SLAVE0_Allowed (0UL) /*!< Access to slave is possible */
#define DCNF_EXTPERI0_PROTECT_SLAVE0_Blocked (1UL) /*!< Access to slave is blocked */

/* Register: DCNF_EXTRAM_PROTECT */
/* Description: Description collection: Control access from  Master connected to AMLI master port EXTRAM[n] */

/* Bit 7 : Control access to slave  7 of master EXTRAM[n]. */
#define DCNF_EXTRAM_PROTECT_SLAVE7_Pos (7UL) /*!< Position of SLAVE7 field. */
#define DCNF_EXTRAM_PROTECT_SLAVE7_Msk (0x1UL << DCNF_EXTRAM_PROTECT_SLAVE7_Pos) /*!< Bit mask of SLAVE7 field. */
#define DCNF_EXTRAM_PROTECT_SLAVE7_Allowed (0UL) /*!< Access to slave is possible */
#define DCNF_EXTRAM_PROTECT_SLAVE7_Blocked (1UL) /*!< Access to slave is blocked */

/* Bit 6 : Control access to slave  6 of master EXTRAM[n]. */
#define DCNF_EXTRAM_PROTECT_SLAVE6_Pos (6UL) /*!< Position of SLAVE6 field. */
#define DCNF_EXTRAM_PROTECT_SLAVE6_Msk (0x1UL << DCNF_EXTRAM_PROTECT_SLAVE6_Pos) /*!< Bit mask of SLAVE6 field. */
#define DCNF_EXTRAM_PROTECT_SLAVE6_Allowed (0UL) /*!< Access to slave is possible */
#define DCNF_EXTRAM_PROTECT_SLAVE6_Blocked (1UL) /*!< Access to slave is blocked */

/* Bit 5 : Control access to slave  5 of master EXTRAM[n]. */
#define DCNF_EXTRAM_PROTECT_SLAVE5_Pos (5UL) /*!< Position of SLAVE5 field. */
#define DCNF_EXTRAM_PROTECT_SLAVE5_Msk (0x1UL << DCNF_EXTRAM_PROTECT_SLAVE5_Pos) /*!< Bit mask of SLAVE5 field. */
#define DCNF_EXTRAM_PROTECT_SLAVE5_Allowed (0UL) /*!< Access to slave is possible */
#define DCNF_EXTRAM_PROTECT_SLAVE5_Blocked (1UL) /*!< Access to slave is blocked */

/* Bit 4 : Control access to slave  4 of master EXTRAM[n]. */
#define DCNF_EXTRAM_PROTECT_SLAVE4_Pos (4UL) /*!< Position of SLAVE4 field. */
#define DCNF_EXTRAM_PROTECT_SLAVE4_Msk (0x1UL << DCNF_EXTRAM_PROTECT_SLAVE4_Pos) /*!< Bit mask of SLAVE4 field. */
#define DCNF_EXTRAM_PROTECT_SLAVE4_Allowed (0UL) /*!< Access to slave is possible */
#define DCNF_EXTRAM_PROTECT_SLAVE4_Blocked (1UL) /*!< Access to slave is blocked */

/* Bit 3 : Control access to slave  3 of master EXTRAM[n]. */
#define DCNF_EXTRAM_PROTECT_SLAVE3_Pos (3UL) /*!< Position of SLAVE3 field. */
#define DCNF_EXTRAM_PROTECT_SLAVE3_Msk (0x1UL << DCNF_EXTRAM_PROTECT_SLAVE3_Pos) /*!< Bit mask of SLAVE3 field. */
#define DCNF_EXTRAM_PROTECT_SLAVE3_Allowed (0UL) /*!< Access to slave is possible */
#define DCNF_EXTRAM_PROTECT_SLAVE3_Blocked (1UL) /*!< Access to slave is blocked */

/* Bit 2 : Control access to slave  2 of master EXTRAM[n]. */
#define DCNF_EXTRAM_PROTECT_SLAVE2_Pos (2UL) /*!< Position of SLAVE2 field. */
#define DCNF_EXTRAM_PROTECT_SLAVE2_Msk (0x1UL << DCNF_EXTRAM_PROTECT_SLAVE2_Pos) /*!< Bit mask of SLAVE2 field. */
#define DCNF_EXTRAM_PROTECT_SLAVE2_Allowed (0UL) /*!< Access to slave is possible */
#define DCNF_EXTRAM_PROTECT_SLAVE2_Blocked (1UL) /*!< Access to slave is blocked */

/* Bit 1 : Control access to slave  1 of master EXTRAM[n]. */
#define DCNF_EXTRAM_PROTECT_SLAVE1_Pos (1UL) /*!< Position of SLAVE1 field. */
#define DCNF_EXTRAM_PROTECT_SLAVE1_Msk (0x1UL << DCNF_EXTRAM_PROTECT_SLAVE1_Pos) /*!< Bit mask of SLAVE1 field. */
#define DCNF_EXTRAM_PROTECT_SLAVE1_Allowed (0UL) /*!< Access to slave is possible */
#define DCNF_EXTRAM_PROTECT_SLAVE1_Blocked (1UL) /*!< Access to slave is blocked */

/* Bit 0 : Control access to slave  0 of master EXTRAM[n]. */
#define DCNF_EXTRAM_PROTECT_SLAVE0_Pos (0UL) /*!< Position of SLAVE0 field. */
#define DCNF_EXTRAM_PROTECT_SLAVE0_Msk (0x1UL << DCNF_EXTRAM_PROTECT_SLAVE0_Pos) /*!< Bit mask of SLAVE0 field. */
#define DCNF_EXTRAM_PROTECT_SLAVE0_Allowed (0UL) /*!< Access to slave is possible */
#define DCNF_EXTRAM_PROTECT_SLAVE0_Blocked (1UL) /*!< Access to slave is blocked */

/* Register: DCNF_EXTCODE_PROTECT */
/* Description: Description cluster: Control access from  Master connected to AMLI master port EXTCODE[n] */

/* Bit 2 : Control access to slave  2 of master EXTCODE[n]. */
#define DCNF_EXTCODE_PROTECT_SLAVE2_Pos (2UL) /*!< Position of SLAVE2 field. */
#define DCNF_EXTCODE_PROTECT_SLAVE2_Msk (0x1UL << DCNF_EXTCODE_PROTECT_SLAVE2_Pos) /*!< Bit mask of SLAVE2 field. */
#define DCNF_EXTCODE_PROTECT_SLAVE2_Allowed (0UL) /*!< Access to slave is possible */
#define DCNF_EXTCODE_PROTECT_SLAVE2_Blocked (1UL) /*!< Access to slave is blocked */

/* Bit 1 : Control access to slave  1 of master EXTCODE[n]. */
#define DCNF_EXTCODE_PROTECT_SLAVE1_Pos (1UL) /*!< Position of SLAVE1 field. */
#define DCNF_EXTCODE_PROTECT_SLAVE1_Msk (0x1UL << DCNF_EXTCODE_PROTECT_SLAVE1_Pos) /*!< Bit mask of SLAVE1 field. */
#define DCNF_EXTCODE_PROTECT_SLAVE1_Allowed (0UL) /*!< Access to slave is possible */
#define DCNF_EXTCODE_PROTECT_SLAVE1_Blocked (1UL) /*!< Access to slave is blocked */

/* Bit 0 : Control access to slave  0 of master EXTCODE[n]. */
#define DCNF_EXTCODE_PROTECT_SLAVE0_Pos (0UL) /*!< Position of SLAVE0 field. */
#define DCNF_EXTCODE_PROTECT_SLAVE0_Msk (0x1UL << DCNF_EXTCODE_PROTECT_SLAVE0_Pos) /*!< Bit mask of SLAVE0 field. */
#define DCNF_EXTCODE_PROTECT_SLAVE0_Allowed (0UL) /*!< Access to slave is possible */
#define DCNF_EXTCODE_PROTECT_SLAVE0_Blocked (1UL) /*!< Access to slave is blocked */


/* Peripheral: DES */
/* Description: DES HW Accelerator */

/* Register: DES_TASKS_START_GATHER */
/* Description: Start input DMA */

/* Bit 0 : Start input DMA */
#define DES_TASKS_START_GATHER_TASKS_START_GATHER_Pos (0UL) /*!< Position of TASKS_START_GATHER field. */
#define DES_TASKS_START_GATHER_TASKS_START_GATHER_Msk (0x1UL << DES_TASKS_START_GATHER_TASKS_START_GATHER_Pos) /*!< Bit mask of TASKS_START_GATHER field. */
#define DES_TASKS_START_GATHER_TASKS_START_GATHER_Trigger (1UL) /*!< Trigger task */

/* Register: DES_TASKS_STOP_GATHER */
/* Description: Stop  input DMA */

/* Bit 0 : Stop  input DMA */
#define DES_TASKS_STOP_GATHER_TASKS_STOP_GATHER_Pos (0UL) /*!< Position of TASKS_STOP_GATHER field. */
#define DES_TASKS_STOP_GATHER_TASKS_STOP_GATHER_Msk (0x1UL << DES_TASKS_STOP_GATHER_TASKS_STOP_GATHER_Pos) /*!< Bit mask of TASKS_STOP_GATHER field. */
#define DES_TASKS_STOP_GATHER_TASKS_STOP_GATHER_Trigger (1UL) /*!< Trigger task */

/* Register: DES_TASKS_START_SCATTER */
/* Description: Start output DMA */

/* Bit 0 : Start output DMA */
#define DES_TASKS_START_SCATTER_TASKS_START_SCATTER_Pos (0UL) /*!< Position of TASKS_START_SCATTER field. */
#define DES_TASKS_START_SCATTER_TASKS_START_SCATTER_Msk (0x1UL << DES_TASKS_START_SCATTER_TASKS_START_SCATTER_Pos) /*!< Bit mask of TASKS_START_SCATTER field. */
#define DES_TASKS_START_SCATTER_TASKS_START_SCATTER_Trigger (1UL) /*!< Trigger task */

/* Register: DES_TASKS_STOP_SCATTER */
/* Description: Stop  output DMA */

/* Bit 0 : Stop  output DMA */
#define DES_TASKS_STOP_SCATTER_TASKS_STOP_SCATTER_Pos (0UL) /*!< Position of TASKS_STOP_SCATTER field. */
#define DES_TASKS_STOP_SCATTER_TASKS_STOP_SCATTER_Msk (0x1UL << DES_TASKS_STOP_SCATTER_TASKS_STOP_SCATTER_Pos) /*!< Bit mask of TASKS_STOP_SCATTER field. */
#define DES_TASKS_STOP_SCATTER_TASKS_STOP_SCATTER_Trigger (1UL) /*!< Trigger task */

/* Register: DES_TASKS_INITIALIZE_DES */
/* Description: New keys (and IV) ready to be used, reset keybytes, ivbytes */

/* Bit 0 : New keys (and IV) ready to be used, reset keybytes, ivbytes */
#define DES_TASKS_INITIALIZE_DES_TASKS_INITIALIZE_DES_Pos (0UL) /*!< Position of TASKS_INITIALIZE_DES field. */
#define DES_TASKS_INITIALIZE_DES_TASKS_INITIALIZE_DES_Msk (0x1UL << DES_TASKS_INITIALIZE_DES_TASKS_INITIALIZE_DES_Pos) /*!< Bit mask of TASKS_INITIALIZE_DES field. */
#define DES_TASKS_INITIALIZE_DES_TASKS_INITIALIZE_DES_Trigger (1UL) /*!< Trigger task */

/* Register: DES_TASKS_FILL_DES_INPUT */
/* Description: Transfer 8 bytes of input from DMA to DES core */

/* Bit 0 : Transfer 8 bytes of input from DMA to DES core */
#define DES_TASKS_FILL_DES_INPUT_TASKS_FILL_DES_INPUT_Pos (0UL) /*!< Position of TASKS_FILL_DES_INPUT field. */
#define DES_TASKS_FILL_DES_INPUT_TASKS_FILL_DES_INPUT_Msk (0x1UL << DES_TASKS_FILL_DES_INPUT_TASKS_FILL_DES_INPUT_Pos) /*!< Bit mask of TASKS_FILL_DES_INPUT field. */
#define DES_TASKS_FILL_DES_INPUT_TASKS_FILL_DES_INPUT_Trigger (1UL) /*!< Trigger task */

/* Register: DES_TASKS_DES_ENCRYPT_1 */
/* Description: Starts DES encryption with keyset 1 ( input -&gt; output) */

/* Bit 0 : Starts DES encryption with keyset 1 ( input -&gt; output) */
#define DES_TASKS_DES_ENCRYPT_1_TASKS_DES_ENCRYPT_1_Pos (0UL) /*!< Position of TASKS_DES_ENCRYPT_1 field. */
#define DES_TASKS_DES_ENCRYPT_1_TASKS_DES_ENCRYPT_1_Msk (0x1UL << DES_TASKS_DES_ENCRYPT_1_TASKS_DES_ENCRYPT_1_Pos) /*!< Bit mask of TASKS_DES_ENCRYPT_1 field. */
#define DES_TASKS_DES_ENCRYPT_1_TASKS_DES_ENCRYPT_1_Trigger (1UL) /*!< Trigger task */

/* Register: DES_TASKS_DES_DECRYPT_1 */
/* Description: Starts DES decryption with keyset 1 ( input -&gt; output) */

/* Bit 0 : Starts DES decryption with keyset 1 ( input -&gt; output) */
#define DES_TASKS_DES_DECRYPT_1_TASKS_DES_DECRYPT_1_Pos (0UL) /*!< Position of TASKS_DES_DECRYPT_1 field. */
#define DES_TASKS_DES_DECRYPT_1_TASKS_DES_DECRYPT_1_Msk (0x1UL << DES_TASKS_DES_DECRYPT_1_TASKS_DES_DECRYPT_1_Pos) /*!< Bit mask of TASKS_DES_DECRYPT_1 field. */
#define DES_TASKS_DES_DECRYPT_1_TASKS_DES_DECRYPT_1_Trigger (1UL) /*!< Trigger task */

/* Register: DES_TASKS_DES_ENCRYPT_2 */
/* Description: Starts DES encryption with keyset 2 (output -&gt; output) */

/* Bit 0 : Starts DES encryption with keyset 2 (output -&gt; output) */
#define DES_TASKS_DES_ENCRYPT_2_TASKS_DES_ENCRYPT_2_Pos (0UL) /*!< Position of TASKS_DES_ENCRYPT_2 field. */
#define DES_TASKS_DES_ENCRYPT_2_TASKS_DES_ENCRYPT_2_Msk (0x1UL << DES_TASKS_DES_ENCRYPT_2_TASKS_DES_ENCRYPT_2_Pos) /*!< Bit mask of TASKS_DES_ENCRYPT_2 field. */
#define DES_TASKS_DES_ENCRYPT_2_TASKS_DES_ENCRYPT_2_Trigger (1UL) /*!< Trigger task */

/* Register: DES_TASKS_DES_DECRYPT_2 */
/* Description: Starts DES decryption with keyset 2 (output -&gt; output) */

/* Bit 0 : Starts DES decryption with keyset 2 (output -&gt; output) */
#define DES_TASKS_DES_DECRYPT_2_TASKS_DES_DECRYPT_2_Pos (0UL) /*!< Position of TASKS_DES_DECRYPT_2 field. */
#define DES_TASKS_DES_DECRYPT_2_TASKS_DES_DECRYPT_2_Msk (0x1UL << DES_TASKS_DES_DECRYPT_2_TASKS_DES_DECRYPT_2_Pos) /*!< Bit mask of TASKS_DES_DECRYPT_2 field. */
#define DES_TASKS_DES_DECRYPT_2_TASKS_DES_DECRYPT_2_Trigger (1UL) /*!< Trigger task */

/* Register: DES_TASKS_DES_ENCRYPT_3 */
/* Description: Starts DES encryption with keyset 3 (output -&gt; output) */

/* Bit 0 : Starts DES encryption with keyset 3 (output -&gt; output) */
#define DES_TASKS_DES_ENCRYPT_3_TASKS_DES_ENCRYPT_3_Pos (0UL) /*!< Position of TASKS_DES_ENCRYPT_3 field. */
#define DES_TASKS_DES_ENCRYPT_3_TASKS_DES_ENCRYPT_3_Msk (0x1UL << DES_TASKS_DES_ENCRYPT_3_TASKS_DES_ENCRYPT_3_Pos) /*!< Bit mask of TASKS_DES_ENCRYPT_3 field. */
#define DES_TASKS_DES_ENCRYPT_3_TASKS_DES_ENCRYPT_3_Trigger (1UL) /*!< Trigger task */

/* Register: DES_TASKS_DES_DECRYPT_3 */
/* Description: Starts DES decryption with keyset 3 (output -&gt; output) */

/* Bit 0 : Starts DES decryption with keyset 3 (output -&gt; output) */
#define DES_TASKS_DES_DECRYPT_3_TASKS_DES_DECRYPT_3_Pos (0UL) /*!< Position of TASKS_DES_DECRYPT_3 field. */
#define DES_TASKS_DES_DECRYPT_3_TASKS_DES_DECRYPT_3_Msk (0x1UL << DES_TASKS_DES_DECRYPT_3_TASKS_DES_DECRYPT_3_Pos) /*!< Bit mask of TASKS_DES_DECRYPT_3 field. */
#define DES_TASKS_DES_DECRYPT_3_TASKS_DES_DECRYPT_3_Trigger (1UL) /*!< Trigger task */

/* Register: DES_TASKS_DRAIN_DES_OUTPUT */
/* Description: Transfer 8 bytes of output from DES core to DMA */

/* Bit 0 : Transfer 8 bytes of output from DES core to DMA */
#define DES_TASKS_DRAIN_DES_OUTPUT_TASKS_DRAIN_DES_OUTPUT_Pos (0UL) /*!< Position of TASKS_DRAIN_DES_OUTPUT field. */
#define DES_TASKS_DRAIN_DES_OUTPUT_TASKS_DRAIN_DES_OUTPUT_Msk (0x1UL << DES_TASKS_DRAIN_DES_OUTPUT_TASKS_DRAIN_DES_OUTPUT_Pos) /*!< Bit mask of TASKS_DRAIN_DES_OUTPUT field. */
#define DES_TASKS_DRAIN_DES_OUTPUT_TASKS_DRAIN_DES_OUTPUT_Trigger (1UL) /*!< Trigger task */

/* Register: DES_TASKS_RESET */
/* Description: Stop all transfers and crypto operations (software reset) */

/* Bit 0 : Stop all transfers and crypto operations (software reset) */
#define DES_TASKS_RESET_TASKS_RESET_Pos (0UL) /*!< Position of TASKS_RESET field. */
#define DES_TASKS_RESET_TASKS_RESET_Msk (0x1UL << DES_TASKS_RESET_TASKS_RESET_Pos) /*!< Bit mask of TASKS_RESET field. */
#define DES_TASKS_RESET_TASKS_RESET_Trigger (1UL) /*!< Trigger task */

/* Register: DES_TASKZEROPENALTY_PCP_1 */
/* Description: TaskZeroPenalty register for PCP 1 */

/* Bit 0 :   */
#define DES_TASKZEROPENALTY_PCP_1_ZERO_PENALTY_Pos (0UL) /*!< Position of ZERO_PENALTY field. */
#define DES_TASKZEROPENALTY_PCP_1_ZERO_PENALTY_Msk (0x1UL << DES_TASKZEROPENALTY_PCP_1_ZERO_PENALTY_Pos) /*!< Bit mask of ZERO_PENALTY field. */
#define DES_TASKZEROPENALTY_PCP_1_ZERO_PENALTY_SET_ZERO_PENALTY (1UL) /*!< Set Zero Penalty */

/* Register: DES_TASKFULLPENALTY_PCP_1 */
/* Description: TaskFullPenalty register for PCP 1 */

/* Bit 0 :   */
#define DES_TASKFULLPENALTY_PCP_1_FULL_PENALTY_Pos (0UL) /*!< Position of FULL_PENALTY field. */
#define DES_TASKFULLPENALTY_PCP_1_FULL_PENALTY_Msk (0x1UL << DES_TASKFULLPENALTY_PCP_1_FULL_PENALTY_Pos) /*!< Bit mask of FULL_PENALTY field. */
#define DES_TASKFULLPENALTY_PCP_1_FULL_PENALTY_SET_FULL_PENALTY (1UL) /*!< Set Full Penalty */

/* Register: DES_TASKZEROPENALTY_PCP_0 */
/* Description: TaskZeroPenalty register for PCP 0 */

/* Bit 0 :   */
#define DES_TASKZEROPENALTY_PCP_0_ZERO_PENALTY_Pos (0UL) /*!< Position of ZERO_PENALTY field. */
#define DES_TASKZEROPENALTY_PCP_0_ZERO_PENALTY_Msk (0x1UL << DES_TASKZEROPENALTY_PCP_0_ZERO_PENALTY_Pos) /*!< Bit mask of ZERO_PENALTY field. */
#define DES_TASKZEROPENALTY_PCP_0_ZERO_PENALTY_SET_ZERO_PENALTY (1UL) /*!< Set Zero Penalty */

/* Register: DES_TASKFULLPENALTY_PCP_0 */
/* Description: TaskFullPenalty register for PCP 0 */

/* Bit 0 :   */
#define DES_TASKFULLPENALTY_PCP_0_FULL_PENALTY_Pos (0UL) /*!< Position of FULL_PENALTY field. */
#define DES_TASKFULLPENALTY_PCP_0_FULL_PENALTY_Msk (0x1UL << DES_TASKFULLPENALTY_PCP_0_FULL_PENALTY_Pos) /*!< Bit mask of FULL_PENALTY field. */
#define DES_TASKFULLPENALTY_PCP_0_FULL_PENALTY_SET_FULL_PENALTY (1UL) /*!< Set Full Penalty */

/* Register: DES_EVENTS_GATHER_STARTED */
/* Description: Input DMA started */

/* Bit 0 : Input DMA started */
#define DES_EVENTS_GATHER_STARTED_EVENTS_GATHER_STARTED_Pos (0UL) /*!< Position of EVENTS_GATHER_STARTED field. */
#define DES_EVENTS_GATHER_STARTED_EVENTS_GATHER_STARTED_Msk (0x1UL << DES_EVENTS_GATHER_STARTED_EVENTS_GATHER_STARTED_Pos) /*!< Bit mask of EVENTS_GATHER_STARTED field. */
#define DES_EVENTS_GATHER_STARTED_EVENTS_GATHER_STARTED_NotGenerated (0UL) /*!< Event not generated */
#define DES_EVENTS_GATHER_STARTED_EVENTS_GATHER_STARTED_Generated (1UL) /*!< Event generated */

/* Register: DES_EVENTS_GATHER_DONE */
/* Description: Input DMA done */

/* Bit 0 : Input DMA done */
#define DES_EVENTS_GATHER_DONE_EVENTS_GATHER_DONE_Pos (0UL) /*!< Position of EVENTS_GATHER_DONE field. */
#define DES_EVENTS_GATHER_DONE_EVENTS_GATHER_DONE_Msk (0x1UL << DES_EVENTS_GATHER_DONE_EVENTS_GATHER_DONE_Pos) /*!< Bit mask of EVENTS_GATHER_DONE field. */
#define DES_EVENTS_GATHER_DONE_EVENTS_GATHER_DONE_NotGenerated (0UL) /*!< Event not generated */
#define DES_EVENTS_GATHER_DONE_EVENTS_GATHER_DONE_Generated (1UL) /*!< Event generated */

/* Register: DES_EVENTS_SCATTER_STARTED */
/* Description: Output DMA started */

/* Bit 0 : Output DMA started */
#define DES_EVENTS_SCATTER_STARTED_EVENTS_SCATTER_STARTED_Pos (0UL) /*!< Position of EVENTS_SCATTER_STARTED field. */
#define DES_EVENTS_SCATTER_STARTED_EVENTS_SCATTER_STARTED_Msk (0x1UL << DES_EVENTS_SCATTER_STARTED_EVENTS_SCATTER_STARTED_Pos) /*!< Bit mask of EVENTS_SCATTER_STARTED field. */
#define DES_EVENTS_SCATTER_STARTED_EVENTS_SCATTER_STARTED_NotGenerated (0UL) /*!< Event not generated */
#define DES_EVENTS_SCATTER_STARTED_EVENTS_SCATTER_STARTED_Generated (1UL) /*!< Event generated */

/* Register: DES_EVENTS_SCATTER_DONE */
/* Description: Output DMA done */

/* Bit 0 : Output DMA done */
#define DES_EVENTS_SCATTER_DONE_EVENTS_SCATTER_DONE_Pos (0UL) /*!< Position of EVENTS_SCATTER_DONE field. */
#define DES_EVENTS_SCATTER_DONE_EVENTS_SCATTER_DONE_Msk (0x1UL << DES_EVENTS_SCATTER_DONE_EVENTS_SCATTER_DONE_Pos) /*!< Bit mask of EVENTS_SCATTER_DONE field. */
#define DES_EVENTS_SCATTER_DONE_EVENTS_SCATTER_DONE_NotGenerated (0UL) /*!< Event not generated */
#define DES_EVENTS_SCATTER_DONE_EVENTS_SCATTER_DONE_Generated (1UL) /*!< Event generated */

/* Register: DES_EVENTS_KEY_1_READY */
/* Description: Key #1 received (keybytes == 8) */

/* Bit 0 : Key #1 received (keybytes == 8) */
#define DES_EVENTS_KEY_1_READY_EVENTS_KEY_1_READY_Pos (0UL) /*!< Position of EVENTS_KEY_1_READY field. */
#define DES_EVENTS_KEY_1_READY_EVENTS_KEY_1_READY_Msk (0x1UL << DES_EVENTS_KEY_1_READY_EVENTS_KEY_1_READY_Pos) /*!< Bit mask of EVENTS_KEY_1_READY field. */
#define DES_EVENTS_KEY_1_READY_EVENTS_KEY_1_READY_NotGenerated (0UL) /*!< Event not generated */
#define DES_EVENTS_KEY_1_READY_EVENTS_KEY_1_READY_Generated (1UL) /*!< Event generated */

/* Register: DES_EVENTS_KEY_3_READY */
/* Description: Keys #1, #2 and #3 received (keybytes == 24) */

/* Bit 0 : Keys #1, #2 and #3 received (keybytes == 24) */
#define DES_EVENTS_KEY_3_READY_EVENTS_KEY_3_READY_Pos (0UL) /*!< Position of EVENTS_KEY_3_READY field. */
#define DES_EVENTS_KEY_3_READY_EVENTS_KEY_3_READY_Msk (0x1UL << DES_EVENTS_KEY_3_READY_EVENTS_KEY_3_READY_Pos) /*!< Bit mask of EVENTS_KEY_3_READY field. */
#define DES_EVENTS_KEY_3_READY_EVENTS_KEY_3_READY_NotGenerated (0UL) /*!< Event not generated */
#define DES_EVENTS_KEY_3_READY_EVENTS_KEY_3_READY_Generated (1UL) /*!< Event generated */

/* Register: DES_EVENTS_IV_READY */
/* Description: IV received (ivbytes == 8) */

/* Bit 0 : IV received (ivbytes == 8) */
#define DES_EVENTS_IV_READY_EVENTS_IV_READY_Pos (0UL) /*!< Position of EVENTS_IV_READY field. */
#define DES_EVENTS_IV_READY_EVENTS_IV_READY_Msk (0x1UL << DES_EVENTS_IV_READY_EVENTS_IV_READY_Pos) /*!< Bit mask of EVENTS_IV_READY field. */
#define DES_EVENTS_IV_READY_EVENTS_IV_READY_NotGenerated (0UL) /*!< Event not generated */
#define DES_EVENTS_IV_READY_EVENTS_IV_READY_Generated (1UL) /*!< Event generated */

/* Register: DES_EVENTS_DES_INITIALIZED */
/* Description: New keys (and IV) taken into use */

/* Bit 0 : New keys (and IV) taken into use */
#define DES_EVENTS_DES_INITIALIZED_EVENTS_DES_INITIALIZED_Pos (0UL) /*!< Position of EVENTS_DES_INITIALIZED field. */
#define DES_EVENTS_DES_INITIALIZED_EVENTS_DES_INITIALIZED_Msk (0x1UL << DES_EVENTS_DES_INITIALIZED_EVENTS_DES_INITIALIZED_Pos) /*!< Bit mask of EVENTS_DES_INITIALIZED field. */
#define DES_EVENTS_DES_INITIALIZED_EVENTS_DES_INITIALIZED_NotGenerated (0UL) /*!< Event not generated */
#define DES_EVENTS_DES_INITIALIZED_EVENTS_DES_INITIALIZED_Generated (1UL) /*!< Event generated */

/* Register: DES_EVENTS_DES_INPUT_FULL */
/* Description: 8 bytes of input stored to DES core */

/* Bit 0 : 8 bytes of input stored to DES core */
#define DES_EVENTS_DES_INPUT_FULL_EVENTS_DES_INPUT_FULL_Pos (0UL) /*!< Position of EVENTS_DES_INPUT_FULL field. */
#define DES_EVENTS_DES_INPUT_FULL_EVENTS_DES_INPUT_FULL_Msk (0x1UL << DES_EVENTS_DES_INPUT_FULL_EVENTS_DES_INPUT_FULL_Pos) /*!< Bit mask of EVENTS_DES_INPUT_FULL field. */
#define DES_EVENTS_DES_INPUT_FULL_EVENTS_DES_INPUT_FULL_NotGenerated (0UL) /*!< Event not generated */
#define DES_EVENTS_DES_INPUT_FULL_EVENTS_DES_INPUT_FULL_Generated (1UL) /*!< Event generated */

/* Register: DES_EVENTS_DES_DONE_1 */
/* Description: Action with key 1 ready */

/* Bit 0 : Action with key 1 ready */
#define DES_EVENTS_DES_DONE_1_EVENTS_DES_DONE_1_Pos (0UL) /*!< Position of EVENTS_DES_DONE_1 field. */
#define DES_EVENTS_DES_DONE_1_EVENTS_DES_DONE_1_Msk (0x1UL << DES_EVENTS_DES_DONE_1_EVENTS_DES_DONE_1_Pos) /*!< Bit mask of EVENTS_DES_DONE_1 field. */
#define DES_EVENTS_DES_DONE_1_EVENTS_DES_DONE_1_NotGenerated (0UL) /*!< Event not generated */
#define DES_EVENTS_DES_DONE_1_EVENTS_DES_DONE_1_Generated (1UL) /*!< Event generated */

/* Register: DES_EVENTS_DES_DONE_2 */
/* Description: Action with key 2 ready */

/* Bit 0 : Action with key 2 ready */
#define DES_EVENTS_DES_DONE_2_EVENTS_DES_DONE_2_Pos (0UL) /*!< Position of EVENTS_DES_DONE_2 field. */
#define DES_EVENTS_DES_DONE_2_EVENTS_DES_DONE_2_Msk (0x1UL << DES_EVENTS_DES_DONE_2_EVENTS_DES_DONE_2_Pos) /*!< Bit mask of EVENTS_DES_DONE_2 field. */
#define DES_EVENTS_DES_DONE_2_EVENTS_DES_DONE_2_NotGenerated (0UL) /*!< Event not generated */
#define DES_EVENTS_DES_DONE_2_EVENTS_DES_DONE_2_Generated (1UL) /*!< Event generated */

/* Register: DES_EVENTS_DES_DONE_3 */
/* Description: Action with key 3 ready */

/* Bit 0 : Action with key 3 ready */
#define DES_EVENTS_DES_DONE_3_EVENTS_DES_DONE_3_Pos (0UL) /*!< Position of EVENTS_DES_DONE_3 field. */
#define DES_EVENTS_DES_DONE_3_EVENTS_DES_DONE_3_Msk (0x1UL << DES_EVENTS_DES_DONE_3_EVENTS_DES_DONE_3_Pos) /*!< Bit mask of EVENTS_DES_DONE_3 field. */
#define DES_EVENTS_DES_DONE_3_EVENTS_DES_DONE_3_NotGenerated (0UL) /*!< Event not generated */
#define DES_EVENTS_DES_DONE_3_EVENTS_DES_DONE_3_Generated (1UL) /*!< Event generated */

/* Register: DES_EVENTS_DES_OUTPUT_EMPTY */
/* Description: 8 bytes of output read from DES core */

/* Bit 0 : 8 bytes of output read from DES core */
#define DES_EVENTS_DES_OUTPUT_EMPTY_EVENTS_DES_OUTPUT_EMPTY_Pos (0UL) /*!< Position of EVENTS_DES_OUTPUT_EMPTY field. */
#define DES_EVENTS_DES_OUTPUT_EMPTY_EVENTS_DES_OUTPUT_EMPTY_Msk (0x1UL << DES_EVENTS_DES_OUTPUT_EMPTY_EVENTS_DES_OUTPUT_EMPTY_Pos) /*!< Bit mask of EVENTS_DES_OUTPUT_EMPTY field. */
#define DES_EVENTS_DES_OUTPUT_EMPTY_EVENTS_DES_OUTPUT_EMPTY_NotGenerated (0UL) /*!< Event not generated */
#define DES_EVENTS_DES_OUTPUT_EMPTY_EVENTS_DES_OUTPUT_EMPTY_Generated (1UL) /*!< Event generated */

/* Register: DES_EVENTS_MESSAGE_READY */
/* Description: LENGTH == 0, message processed */

/* Bit 0 : LENGTH == 0, message processed */
#define DES_EVENTS_MESSAGE_READY_EVENTS_MESSAGE_READY_Pos (0UL) /*!< Position of EVENTS_MESSAGE_READY field. */
#define DES_EVENTS_MESSAGE_READY_EVENTS_MESSAGE_READY_Msk (0x1UL << DES_EVENTS_MESSAGE_READY_EVENTS_MESSAGE_READY_Pos) /*!< Bit mask of EVENTS_MESSAGE_READY field. */
#define DES_EVENTS_MESSAGE_READY_EVENTS_MESSAGE_READY_NotGenerated (0UL) /*!< Event not generated */
#define DES_EVENTS_MESSAGE_READY_EVENTS_MESSAGE_READY_Generated (1UL) /*!< Event generated */

/* Register: DES_EVENTS_RESETTED */
/* Description: Resetted (all transfers and crypto operations stopped) */

/* Bit 0 : Resetted (all transfers and crypto operations stopped) */
#define DES_EVENTS_RESETTED_EVENTS_RESETTED_Pos (0UL) /*!< Position of EVENTS_RESETTED field. */
#define DES_EVENTS_RESETTED_EVENTS_RESETTED_Msk (0x1UL << DES_EVENTS_RESETTED_EVENTS_RESETTED_Pos) /*!< Bit mask of EVENTS_RESETTED field. */
#define DES_EVENTS_RESETTED_EVENTS_RESETTED_NotGenerated (0UL) /*!< Event not generated */
#define DES_EVENTS_RESETTED_EVENTS_RESETTED_Generated (1UL) /*!< Event generated */

/* Register: DES_SHORTS */
/* Description: Shortcuts between local events and tasks */

/* Bit 13 : Shortcut between event DES_INITIALIZED and task FILL_DES_INPUT */
#define DES_SHORTS_DES_INITIALIZED_FILL_DES_INPUT_Pos (13UL) /*!< Position of DES_INITIALIZED_FILL_DES_INPUT field. */
#define DES_SHORTS_DES_INITIALIZED_FILL_DES_INPUT_Msk (0x1UL << DES_SHORTS_DES_INITIALIZED_FILL_DES_INPUT_Pos) /*!< Bit mask of DES_INITIALIZED_FILL_DES_INPUT field. */
#define DES_SHORTS_DES_INITIALIZED_FILL_DES_INPUT_Disabled (0UL) /*!< Disable shortcut */
#define DES_SHORTS_DES_INITIALIZED_FILL_DES_INPUT_Enabled (1UL) /*!< Enable shortcut */

/* Bit 12 : Shortcut between event KEY_3_READY and task INITIALIZE_DES */
#define DES_SHORTS_KEY_3_READY_INITIALIZE_DES_Pos (12UL) /*!< Position of KEY_3_READY_INITIALIZE_DES field. */
#define DES_SHORTS_KEY_3_READY_INITIALIZE_DES_Msk (0x1UL << DES_SHORTS_KEY_3_READY_INITIALIZE_DES_Pos) /*!< Bit mask of KEY_3_READY_INITIALIZE_DES field. */
#define DES_SHORTS_KEY_3_READY_INITIALIZE_DES_Disabled (0UL) /*!< Disable shortcut */
#define DES_SHORTS_KEY_3_READY_INITIALIZE_DES_Enabled (1UL) /*!< Enable shortcut */

/* Bit 11 : Shortcut between event KEY_1_READY and task INITIALIZE_DES */
#define DES_SHORTS_KEY_1_READY_INITIALIZE_DES_Pos (11UL) /*!< Position of KEY_1_READY_INITIALIZE_DES field. */
#define DES_SHORTS_KEY_1_READY_INITIALIZE_DES_Msk (0x1UL << DES_SHORTS_KEY_1_READY_INITIALIZE_DES_Pos) /*!< Bit mask of KEY_1_READY_INITIALIZE_DES field. */
#define DES_SHORTS_KEY_1_READY_INITIALIZE_DES_Disabled (0UL) /*!< Disable shortcut */
#define DES_SHORTS_KEY_1_READY_INITIALIZE_DES_Enabled (1UL) /*!< Enable shortcut */

/* Bit 10 : Shortcut between event IV_READY and task INITIALIZE_DES */
#define DES_SHORTS_IV_READY_INITIALIZE_DES_Pos (10UL) /*!< Position of IV_READY_INITIALIZE_DES field. */
#define DES_SHORTS_IV_READY_INITIALIZE_DES_Msk (0x1UL << DES_SHORTS_IV_READY_INITIALIZE_DES_Pos) /*!< Bit mask of IV_READY_INITIALIZE_DES field. */
#define DES_SHORTS_IV_READY_INITIALIZE_DES_Disabled (0UL) /*!< Disable shortcut */
#define DES_SHORTS_IV_READY_INITIALIZE_DES_Enabled (1UL) /*!< Enable shortcut */

/* Bit 9 : Shortcut between event GATHER_STARTED and task START_SCATTER */
#define DES_SHORTS_GATHER_STARTED_START_SCATTER_Pos (9UL) /*!< Position of GATHER_STARTED_START_SCATTER field. */
#define DES_SHORTS_GATHER_STARTED_START_SCATTER_Msk (0x1UL << DES_SHORTS_GATHER_STARTED_START_SCATTER_Pos) /*!< Bit mask of GATHER_STARTED_START_SCATTER field. */
#define DES_SHORTS_GATHER_STARTED_START_SCATTER_Disabled (0UL) /*!< Disable shortcut */
#define DES_SHORTS_GATHER_STARTED_START_SCATTER_Enabled (1UL) /*!< Enable shortcut */

/* Bit 8 : Shortcut between event DES_OUTPUT_EMPTY and task FILL_DES_INPUT */
#define DES_SHORTS_DES_OUTPUT_EMPTY_FILL_DES_INPUT_Pos (8UL) /*!< Position of DES_OUTPUT_EMPTY_FILL_DES_INPUT field. */
#define DES_SHORTS_DES_OUTPUT_EMPTY_FILL_DES_INPUT_Msk (0x1UL << DES_SHORTS_DES_OUTPUT_EMPTY_FILL_DES_INPUT_Pos) /*!< Bit mask of DES_OUTPUT_EMPTY_FILL_DES_INPUT field. */
#define DES_SHORTS_DES_OUTPUT_EMPTY_FILL_DES_INPUT_Disabled (0UL) /*!< Disable shortcut */
#define DES_SHORTS_DES_OUTPUT_EMPTY_FILL_DES_INPUT_Enabled (1UL) /*!< Enable shortcut */

/* Bit 7 : Shortcut between event DES_DONE_3 and task DRAIN_DES_OUTPUT */
#define DES_SHORTS_DES_DONE_3_DRAIN_DES_OUTPUT_Pos (7UL) /*!< Position of DES_DONE_3_DRAIN_DES_OUTPUT field. */
#define DES_SHORTS_DES_DONE_3_DRAIN_DES_OUTPUT_Msk (0x1UL << DES_SHORTS_DES_DONE_3_DRAIN_DES_OUTPUT_Pos) /*!< Bit mask of DES_DONE_3_DRAIN_DES_OUTPUT field. */
#define DES_SHORTS_DES_DONE_3_DRAIN_DES_OUTPUT_Disabled (0UL) /*!< Disable shortcut */
#define DES_SHORTS_DES_DONE_3_DRAIN_DES_OUTPUT_Enabled (1UL) /*!< Enable shortcut */

/* Bit 6 : Shortcut between event DES_DONE_2 and task DES_DECRYPT_3 */
#define DES_SHORTS_DES_DONE_2_DES_DECRYPT_3_Pos (6UL) /*!< Position of DES_DONE_2_DES_DECRYPT_3 field. */
#define DES_SHORTS_DES_DONE_2_DES_DECRYPT_3_Msk (0x1UL << DES_SHORTS_DES_DONE_2_DES_DECRYPT_3_Pos) /*!< Bit mask of DES_DONE_2_DES_DECRYPT_3 field. */
#define DES_SHORTS_DES_DONE_2_DES_DECRYPT_3_Disabled (0UL) /*!< Disable shortcut */
#define DES_SHORTS_DES_DONE_2_DES_DECRYPT_3_Enabled (1UL) /*!< Enable shortcut */

/* Bit 5 : Shortcut between event DES_DONE_2 and task DES_ENCRYPT_3 */
#define DES_SHORTS_DES_DONE_2_DES_ENCRYPT_3_Pos (5UL) /*!< Position of DES_DONE_2_DES_ENCRYPT_3 field. */
#define DES_SHORTS_DES_DONE_2_DES_ENCRYPT_3_Msk (0x1UL << DES_SHORTS_DES_DONE_2_DES_ENCRYPT_3_Pos) /*!< Bit mask of DES_DONE_2_DES_ENCRYPT_3 field. */
#define DES_SHORTS_DES_DONE_2_DES_ENCRYPT_3_Disabled (0UL) /*!< Disable shortcut */
#define DES_SHORTS_DES_DONE_2_DES_ENCRYPT_3_Enabled (1UL) /*!< Enable shortcut */

/* Bit 4 : Shortcut between event DES_DONE_1 and task DRAIN_DES_OUTPUT */
#define DES_SHORTS_DES_DONE_1_DRAIN_DES_OUTPUT_Pos (4UL) /*!< Position of DES_DONE_1_DRAIN_DES_OUTPUT field. */
#define DES_SHORTS_DES_DONE_1_DRAIN_DES_OUTPUT_Msk (0x1UL << DES_SHORTS_DES_DONE_1_DRAIN_DES_OUTPUT_Pos) /*!< Bit mask of DES_DONE_1_DRAIN_DES_OUTPUT field. */
#define DES_SHORTS_DES_DONE_1_DRAIN_DES_OUTPUT_Disabled (0UL) /*!< Disable shortcut */
#define DES_SHORTS_DES_DONE_1_DRAIN_DES_OUTPUT_Enabled (1UL) /*!< Enable shortcut */

/* Bit 3 : Shortcut between event DES_DONE_1 and task DES_DECRYPT_2 */
#define DES_SHORTS_DES_DONE_1_DES_DECRYPT_2_Pos (3UL) /*!< Position of DES_DONE_1_DES_DECRYPT_2 field. */
#define DES_SHORTS_DES_DONE_1_DES_DECRYPT_2_Msk (0x1UL << DES_SHORTS_DES_DONE_1_DES_DECRYPT_2_Pos) /*!< Bit mask of DES_DONE_1_DES_DECRYPT_2 field. */
#define DES_SHORTS_DES_DONE_1_DES_DECRYPT_2_Disabled (0UL) /*!< Disable shortcut */
#define DES_SHORTS_DES_DONE_1_DES_DECRYPT_2_Enabled (1UL) /*!< Enable shortcut */

/* Bit 2 : Shortcut between event DES_DONE_1 and task DES_ENCRYPT_2 */
#define DES_SHORTS_DES_DONE_1_DES_ENCRYPT_2_Pos (2UL) /*!< Position of DES_DONE_1_DES_ENCRYPT_2 field. */
#define DES_SHORTS_DES_DONE_1_DES_ENCRYPT_2_Msk (0x1UL << DES_SHORTS_DES_DONE_1_DES_ENCRYPT_2_Pos) /*!< Bit mask of DES_DONE_1_DES_ENCRYPT_2 field. */
#define DES_SHORTS_DES_DONE_1_DES_ENCRYPT_2_Disabled (0UL) /*!< Disable shortcut */
#define DES_SHORTS_DES_DONE_1_DES_ENCRYPT_2_Enabled (1UL) /*!< Enable shortcut */

/* Bit 1 : Shortcut between event DES_INPUT_FULL and task DES_DECRYPT_1 */
#define DES_SHORTS_DES_INPUT_FULL_DES_DECRYPT_1_Pos (1UL) /*!< Position of DES_INPUT_FULL_DES_DECRYPT_1 field. */
#define DES_SHORTS_DES_INPUT_FULL_DES_DECRYPT_1_Msk (0x1UL << DES_SHORTS_DES_INPUT_FULL_DES_DECRYPT_1_Pos) /*!< Bit mask of DES_INPUT_FULL_DES_DECRYPT_1 field. */
#define DES_SHORTS_DES_INPUT_FULL_DES_DECRYPT_1_Disabled (0UL) /*!< Disable shortcut */
#define DES_SHORTS_DES_INPUT_FULL_DES_DECRYPT_1_Enabled (1UL) /*!< Enable shortcut */

/* Bit 0 : Shortcut between event DES_INPUT_FULL and task DES_ENCRYPT_1 */
#define DES_SHORTS_DES_INPUT_FULL_DES_ENCRYPT_1_Pos (0UL) /*!< Position of DES_INPUT_FULL_DES_ENCRYPT_1 field. */
#define DES_SHORTS_DES_INPUT_FULL_DES_ENCRYPT_1_Msk (0x1UL << DES_SHORTS_DES_INPUT_FULL_DES_ENCRYPT_1_Pos) /*!< Bit mask of DES_INPUT_FULL_DES_ENCRYPT_1 field. */
#define DES_SHORTS_DES_INPUT_FULL_DES_ENCRYPT_1_Disabled (0UL) /*!< Disable shortcut */
#define DES_SHORTS_DES_INPUT_FULL_DES_ENCRYPT_1_Enabled (1UL) /*!< Enable shortcut */

/* Register: DES_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 14 : Enable or disable interrupt for event RESETTED */
#define DES_INTEN_RESETTED_Pos (14UL) /*!< Position of RESETTED field. */
#define DES_INTEN_RESETTED_Msk (0x1UL << DES_INTEN_RESETTED_Pos) /*!< Bit mask of RESETTED field. */
#define DES_INTEN_RESETTED_Disabled (0UL) /*!< Disable */
#define DES_INTEN_RESETTED_Enabled (1UL) /*!< Enable */

/* Bit 13 : Enable or disable interrupt for event MESSAGE_READY */
#define DES_INTEN_MESSAGE_READY_Pos (13UL) /*!< Position of MESSAGE_READY field. */
#define DES_INTEN_MESSAGE_READY_Msk (0x1UL << DES_INTEN_MESSAGE_READY_Pos) /*!< Bit mask of MESSAGE_READY field. */
#define DES_INTEN_MESSAGE_READY_Disabled (0UL) /*!< Disable */
#define DES_INTEN_MESSAGE_READY_Enabled (1UL) /*!< Enable */

/* Bit 12 : Enable or disable interrupt for event DES_OUTPUT_EMPTY */
#define DES_INTEN_DES_OUTPUT_EMPTY_Pos (12UL) /*!< Position of DES_OUTPUT_EMPTY field. */
#define DES_INTEN_DES_OUTPUT_EMPTY_Msk (0x1UL << DES_INTEN_DES_OUTPUT_EMPTY_Pos) /*!< Bit mask of DES_OUTPUT_EMPTY field. */
#define DES_INTEN_DES_OUTPUT_EMPTY_Disabled (0UL) /*!< Disable */
#define DES_INTEN_DES_OUTPUT_EMPTY_Enabled (1UL) /*!< Enable */

/* Bit 11 : Enable or disable interrupt for event DES_DONE_3 */
#define DES_INTEN_DES_DONE_3_Pos (11UL) /*!< Position of DES_DONE_3 field. */
#define DES_INTEN_DES_DONE_3_Msk (0x1UL << DES_INTEN_DES_DONE_3_Pos) /*!< Bit mask of DES_DONE_3 field. */
#define DES_INTEN_DES_DONE_3_Disabled (0UL) /*!< Disable */
#define DES_INTEN_DES_DONE_3_Enabled (1UL) /*!< Enable */

/* Bit 10 : Enable or disable interrupt for event DES_DONE_2 */
#define DES_INTEN_DES_DONE_2_Pos (10UL) /*!< Position of DES_DONE_2 field. */
#define DES_INTEN_DES_DONE_2_Msk (0x1UL << DES_INTEN_DES_DONE_2_Pos) /*!< Bit mask of DES_DONE_2 field. */
#define DES_INTEN_DES_DONE_2_Disabled (0UL) /*!< Disable */
#define DES_INTEN_DES_DONE_2_Enabled (1UL) /*!< Enable */

/* Bit 9 : Enable or disable interrupt for event DES_DONE_1 */
#define DES_INTEN_DES_DONE_1_Pos (9UL) /*!< Position of DES_DONE_1 field. */
#define DES_INTEN_DES_DONE_1_Msk (0x1UL << DES_INTEN_DES_DONE_1_Pos) /*!< Bit mask of DES_DONE_1 field. */
#define DES_INTEN_DES_DONE_1_Disabled (0UL) /*!< Disable */
#define DES_INTEN_DES_DONE_1_Enabled (1UL) /*!< Enable */

/* Bit 8 : Enable or disable interrupt for event DES_INPUT_FULL */
#define DES_INTEN_DES_INPUT_FULL_Pos (8UL) /*!< Position of DES_INPUT_FULL field. */
#define DES_INTEN_DES_INPUT_FULL_Msk (0x1UL << DES_INTEN_DES_INPUT_FULL_Pos) /*!< Bit mask of DES_INPUT_FULL field. */
#define DES_INTEN_DES_INPUT_FULL_Disabled (0UL) /*!< Disable */
#define DES_INTEN_DES_INPUT_FULL_Enabled (1UL) /*!< Enable */

/* Bit 7 : Enable or disable interrupt for event DES_INITIALIZED */
#define DES_INTEN_DES_INITIALIZED_Pos (7UL) /*!< Position of DES_INITIALIZED field. */
#define DES_INTEN_DES_INITIALIZED_Msk (0x1UL << DES_INTEN_DES_INITIALIZED_Pos) /*!< Bit mask of DES_INITIALIZED field. */
#define DES_INTEN_DES_INITIALIZED_Disabled (0UL) /*!< Disable */
#define DES_INTEN_DES_INITIALIZED_Enabled (1UL) /*!< Enable */

/* Bit 6 : Enable or disable interrupt for event IV_READY */
#define DES_INTEN_IV_READY_Pos (6UL) /*!< Position of IV_READY field. */
#define DES_INTEN_IV_READY_Msk (0x1UL << DES_INTEN_IV_READY_Pos) /*!< Bit mask of IV_READY field. */
#define DES_INTEN_IV_READY_Disabled (0UL) /*!< Disable */
#define DES_INTEN_IV_READY_Enabled (1UL) /*!< Enable */

/* Bit 5 : Enable or disable interrupt for event KEY_3_READY */
#define DES_INTEN_KEY_3_READY_Pos (5UL) /*!< Position of KEY_3_READY field. */
#define DES_INTEN_KEY_3_READY_Msk (0x1UL << DES_INTEN_KEY_3_READY_Pos) /*!< Bit mask of KEY_3_READY field. */
#define DES_INTEN_KEY_3_READY_Disabled (0UL) /*!< Disable */
#define DES_INTEN_KEY_3_READY_Enabled (1UL) /*!< Enable */

/* Bit 4 : Enable or disable interrupt for event KEY_1_READY */
#define DES_INTEN_KEY_1_READY_Pos (4UL) /*!< Position of KEY_1_READY field. */
#define DES_INTEN_KEY_1_READY_Msk (0x1UL << DES_INTEN_KEY_1_READY_Pos) /*!< Bit mask of KEY_1_READY field. */
#define DES_INTEN_KEY_1_READY_Disabled (0UL) /*!< Disable */
#define DES_INTEN_KEY_1_READY_Enabled (1UL) /*!< Enable */

/* Bit 3 : Enable or disable interrupt for event SCATTER_DONE */
#define DES_INTEN_SCATTER_DONE_Pos (3UL) /*!< Position of SCATTER_DONE field. */
#define DES_INTEN_SCATTER_DONE_Msk (0x1UL << DES_INTEN_SCATTER_DONE_Pos) /*!< Bit mask of SCATTER_DONE field. */
#define DES_INTEN_SCATTER_DONE_Disabled (0UL) /*!< Disable */
#define DES_INTEN_SCATTER_DONE_Enabled (1UL) /*!< Enable */

/* Bit 2 : Enable or disable interrupt for event SCATTER_STARTED */
#define DES_INTEN_SCATTER_STARTED_Pos (2UL) /*!< Position of SCATTER_STARTED field. */
#define DES_INTEN_SCATTER_STARTED_Msk (0x1UL << DES_INTEN_SCATTER_STARTED_Pos) /*!< Bit mask of SCATTER_STARTED field. */
#define DES_INTEN_SCATTER_STARTED_Disabled (0UL) /*!< Disable */
#define DES_INTEN_SCATTER_STARTED_Enabled (1UL) /*!< Enable */

/* Bit 1 : Enable or disable interrupt for event GATHER_DONE */
#define DES_INTEN_GATHER_DONE_Pos (1UL) /*!< Position of GATHER_DONE field. */
#define DES_INTEN_GATHER_DONE_Msk (0x1UL << DES_INTEN_GATHER_DONE_Pos) /*!< Bit mask of GATHER_DONE field. */
#define DES_INTEN_GATHER_DONE_Disabled (0UL) /*!< Disable */
#define DES_INTEN_GATHER_DONE_Enabled (1UL) /*!< Enable */

/* Bit 0 : Enable or disable interrupt for event GATHER_STARTED */
#define DES_INTEN_GATHER_STARTED_Pos (0UL) /*!< Position of GATHER_STARTED field. */
#define DES_INTEN_GATHER_STARTED_Msk (0x1UL << DES_INTEN_GATHER_STARTED_Pos) /*!< Bit mask of GATHER_STARTED field. */
#define DES_INTEN_GATHER_STARTED_Disabled (0UL) /*!< Disable */
#define DES_INTEN_GATHER_STARTED_Enabled (1UL) /*!< Enable */

/* Register: DES_INTENSET */
/* Description: Enable interrupt */

/* Bit 14 : Write '1' to enable interrupt for event RESETTED */
#define DES_INTENSET_RESETTED_Pos (14UL) /*!< Position of RESETTED field. */
#define DES_INTENSET_RESETTED_Msk (0x1UL << DES_INTENSET_RESETTED_Pos) /*!< Bit mask of RESETTED field. */
#define DES_INTENSET_RESETTED_Disabled (0UL) /*!< Read: Disabled */
#define DES_INTENSET_RESETTED_Enabled (1UL) /*!< Read: Enabled */
#define DES_INTENSET_RESETTED_Set (1UL) /*!< Enable */

/* Bit 13 : Write '1' to enable interrupt for event MESSAGE_READY */
#define DES_INTENSET_MESSAGE_READY_Pos (13UL) /*!< Position of MESSAGE_READY field. */
#define DES_INTENSET_MESSAGE_READY_Msk (0x1UL << DES_INTENSET_MESSAGE_READY_Pos) /*!< Bit mask of MESSAGE_READY field. */
#define DES_INTENSET_MESSAGE_READY_Disabled (0UL) /*!< Read: Disabled */
#define DES_INTENSET_MESSAGE_READY_Enabled (1UL) /*!< Read: Enabled */
#define DES_INTENSET_MESSAGE_READY_Set (1UL) /*!< Enable */

/* Bit 12 : Write '1' to enable interrupt for event DES_OUTPUT_EMPTY */
#define DES_INTENSET_DES_OUTPUT_EMPTY_Pos (12UL) /*!< Position of DES_OUTPUT_EMPTY field. */
#define DES_INTENSET_DES_OUTPUT_EMPTY_Msk (0x1UL << DES_INTENSET_DES_OUTPUT_EMPTY_Pos) /*!< Bit mask of DES_OUTPUT_EMPTY field. */
#define DES_INTENSET_DES_OUTPUT_EMPTY_Disabled (0UL) /*!< Read: Disabled */
#define DES_INTENSET_DES_OUTPUT_EMPTY_Enabled (1UL) /*!< Read: Enabled */
#define DES_INTENSET_DES_OUTPUT_EMPTY_Set (1UL) /*!< Enable */

/* Bit 11 : Write '1' to enable interrupt for event DES_DONE_3 */
#define DES_INTENSET_DES_DONE_3_Pos (11UL) /*!< Position of DES_DONE_3 field. */
#define DES_INTENSET_DES_DONE_3_Msk (0x1UL << DES_INTENSET_DES_DONE_3_Pos) /*!< Bit mask of DES_DONE_3 field. */
#define DES_INTENSET_DES_DONE_3_Disabled (0UL) /*!< Read: Disabled */
#define DES_INTENSET_DES_DONE_3_Enabled (1UL) /*!< Read: Enabled */
#define DES_INTENSET_DES_DONE_3_Set (1UL) /*!< Enable */

/* Bit 10 : Write '1' to enable interrupt for event DES_DONE_2 */
#define DES_INTENSET_DES_DONE_2_Pos (10UL) /*!< Position of DES_DONE_2 field. */
#define DES_INTENSET_DES_DONE_2_Msk (0x1UL << DES_INTENSET_DES_DONE_2_Pos) /*!< Bit mask of DES_DONE_2 field. */
#define DES_INTENSET_DES_DONE_2_Disabled (0UL) /*!< Read: Disabled */
#define DES_INTENSET_DES_DONE_2_Enabled (1UL) /*!< Read: Enabled */
#define DES_INTENSET_DES_DONE_2_Set (1UL) /*!< Enable */

/* Bit 9 : Write '1' to enable interrupt for event DES_DONE_1 */
#define DES_INTENSET_DES_DONE_1_Pos (9UL) /*!< Position of DES_DONE_1 field. */
#define DES_INTENSET_DES_DONE_1_Msk (0x1UL << DES_INTENSET_DES_DONE_1_Pos) /*!< Bit mask of DES_DONE_1 field. */
#define DES_INTENSET_DES_DONE_1_Disabled (0UL) /*!< Read: Disabled */
#define DES_INTENSET_DES_DONE_1_Enabled (1UL) /*!< Read: Enabled */
#define DES_INTENSET_DES_DONE_1_Set (1UL) /*!< Enable */

/* Bit 8 : Write '1' to enable interrupt for event DES_INPUT_FULL */
#define DES_INTENSET_DES_INPUT_FULL_Pos (8UL) /*!< Position of DES_INPUT_FULL field. */
#define DES_INTENSET_DES_INPUT_FULL_Msk (0x1UL << DES_INTENSET_DES_INPUT_FULL_Pos) /*!< Bit mask of DES_INPUT_FULL field. */
#define DES_INTENSET_DES_INPUT_FULL_Disabled (0UL) /*!< Read: Disabled */
#define DES_INTENSET_DES_INPUT_FULL_Enabled (1UL) /*!< Read: Enabled */
#define DES_INTENSET_DES_INPUT_FULL_Set (1UL) /*!< Enable */

/* Bit 7 : Write '1' to enable interrupt for event DES_INITIALIZED */
#define DES_INTENSET_DES_INITIALIZED_Pos (7UL) /*!< Position of DES_INITIALIZED field. */
#define DES_INTENSET_DES_INITIALIZED_Msk (0x1UL << DES_INTENSET_DES_INITIALIZED_Pos) /*!< Bit mask of DES_INITIALIZED field. */
#define DES_INTENSET_DES_INITIALIZED_Disabled (0UL) /*!< Read: Disabled */
#define DES_INTENSET_DES_INITIALIZED_Enabled (1UL) /*!< Read: Enabled */
#define DES_INTENSET_DES_INITIALIZED_Set (1UL) /*!< Enable */

/* Bit 6 : Write '1' to enable interrupt for event IV_READY */
#define DES_INTENSET_IV_READY_Pos (6UL) /*!< Position of IV_READY field. */
#define DES_INTENSET_IV_READY_Msk (0x1UL << DES_INTENSET_IV_READY_Pos) /*!< Bit mask of IV_READY field. */
#define DES_INTENSET_IV_READY_Disabled (0UL) /*!< Read: Disabled */
#define DES_INTENSET_IV_READY_Enabled (1UL) /*!< Read: Enabled */
#define DES_INTENSET_IV_READY_Set (1UL) /*!< Enable */

/* Bit 5 : Write '1' to enable interrupt for event KEY_3_READY */
#define DES_INTENSET_KEY_3_READY_Pos (5UL) /*!< Position of KEY_3_READY field. */
#define DES_INTENSET_KEY_3_READY_Msk (0x1UL << DES_INTENSET_KEY_3_READY_Pos) /*!< Bit mask of KEY_3_READY field. */
#define DES_INTENSET_KEY_3_READY_Disabled (0UL) /*!< Read: Disabled */
#define DES_INTENSET_KEY_3_READY_Enabled (1UL) /*!< Read: Enabled */
#define DES_INTENSET_KEY_3_READY_Set (1UL) /*!< Enable */

/* Bit 4 : Write '1' to enable interrupt for event KEY_1_READY */
#define DES_INTENSET_KEY_1_READY_Pos (4UL) /*!< Position of KEY_1_READY field. */
#define DES_INTENSET_KEY_1_READY_Msk (0x1UL << DES_INTENSET_KEY_1_READY_Pos) /*!< Bit mask of KEY_1_READY field. */
#define DES_INTENSET_KEY_1_READY_Disabled (0UL) /*!< Read: Disabled */
#define DES_INTENSET_KEY_1_READY_Enabled (1UL) /*!< Read: Enabled */
#define DES_INTENSET_KEY_1_READY_Set (1UL) /*!< Enable */

/* Bit 3 : Write '1' to enable interrupt for event SCATTER_DONE */
#define DES_INTENSET_SCATTER_DONE_Pos (3UL) /*!< Position of SCATTER_DONE field. */
#define DES_INTENSET_SCATTER_DONE_Msk (0x1UL << DES_INTENSET_SCATTER_DONE_Pos) /*!< Bit mask of SCATTER_DONE field. */
#define DES_INTENSET_SCATTER_DONE_Disabled (0UL) /*!< Read: Disabled */
#define DES_INTENSET_SCATTER_DONE_Enabled (1UL) /*!< Read: Enabled */
#define DES_INTENSET_SCATTER_DONE_Set (1UL) /*!< Enable */

/* Bit 2 : Write '1' to enable interrupt for event SCATTER_STARTED */
#define DES_INTENSET_SCATTER_STARTED_Pos (2UL) /*!< Position of SCATTER_STARTED field. */
#define DES_INTENSET_SCATTER_STARTED_Msk (0x1UL << DES_INTENSET_SCATTER_STARTED_Pos) /*!< Bit mask of SCATTER_STARTED field. */
#define DES_INTENSET_SCATTER_STARTED_Disabled (0UL) /*!< Read: Disabled */
#define DES_INTENSET_SCATTER_STARTED_Enabled (1UL) /*!< Read: Enabled */
#define DES_INTENSET_SCATTER_STARTED_Set (1UL) /*!< Enable */

/* Bit 1 : Write '1' to enable interrupt for event GATHER_DONE */
#define DES_INTENSET_GATHER_DONE_Pos (1UL) /*!< Position of GATHER_DONE field. */
#define DES_INTENSET_GATHER_DONE_Msk (0x1UL << DES_INTENSET_GATHER_DONE_Pos) /*!< Bit mask of GATHER_DONE field. */
#define DES_INTENSET_GATHER_DONE_Disabled (0UL) /*!< Read: Disabled */
#define DES_INTENSET_GATHER_DONE_Enabled (1UL) /*!< Read: Enabled */
#define DES_INTENSET_GATHER_DONE_Set (1UL) /*!< Enable */

/* Bit 0 : Write '1' to enable interrupt for event GATHER_STARTED */
#define DES_INTENSET_GATHER_STARTED_Pos (0UL) /*!< Position of GATHER_STARTED field. */
#define DES_INTENSET_GATHER_STARTED_Msk (0x1UL << DES_INTENSET_GATHER_STARTED_Pos) /*!< Bit mask of GATHER_STARTED field. */
#define DES_INTENSET_GATHER_STARTED_Disabled (0UL) /*!< Read: Disabled */
#define DES_INTENSET_GATHER_STARTED_Enabled (1UL) /*!< Read: Enabled */
#define DES_INTENSET_GATHER_STARTED_Set (1UL) /*!< Enable */

/* Register: DES_INTENCLR */
/* Description: Disable interrupt */

/* Bit 14 : Write '1' to disable interrupt for event RESETTED */
#define DES_INTENCLR_RESETTED_Pos (14UL) /*!< Position of RESETTED field. */
#define DES_INTENCLR_RESETTED_Msk (0x1UL << DES_INTENCLR_RESETTED_Pos) /*!< Bit mask of RESETTED field. */
#define DES_INTENCLR_RESETTED_Disabled (0UL) /*!< Read: Disabled */
#define DES_INTENCLR_RESETTED_Enabled (1UL) /*!< Read: Enabled */
#define DES_INTENCLR_RESETTED_Clear (1UL) /*!< Disable */

/* Bit 13 : Write '1' to disable interrupt for event MESSAGE_READY */
#define DES_INTENCLR_MESSAGE_READY_Pos (13UL) /*!< Position of MESSAGE_READY field. */
#define DES_INTENCLR_MESSAGE_READY_Msk (0x1UL << DES_INTENCLR_MESSAGE_READY_Pos) /*!< Bit mask of MESSAGE_READY field. */
#define DES_INTENCLR_MESSAGE_READY_Disabled (0UL) /*!< Read: Disabled */
#define DES_INTENCLR_MESSAGE_READY_Enabled (1UL) /*!< Read: Enabled */
#define DES_INTENCLR_MESSAGE_READY_Clear (1UL) /*!< Disable */

/* Bit 12 : Write '1' to disable interrupt for event DES_OUTPUT_EMPTY */
#define DES_INTENCLR_DES_OUTPUT_EMPTY_Pos (12UL) /*!< Position of DES_OUTPUT_EMPTY field. */
#define DES_INTENCLR_DES_OUTPUT_EMPTY_Msk (0x1UL << DES_INTENCLR_DES_OUTPUT_EMPTY_Pos) /*!< Bit mask of DES_OUTPUT_EMPTY field. */
#define DES_INTENCLR_DES_OUTPUT_EMPTY_Disabled (0UL) /*!< Read: Disabled */
#define DES_INTENCLR_DES_OUTPUT_EMPTY_Enabled (1UL) /*!< Read: Enabled */
#define DES_INTENCLR_DES_OUTPUT_EMPTY_Clear (1UL) /*!< Disable */

/* Bit 11 : Write '1' to disable interrupt for event DES_DONE_3 */
#define DES_INTENCLR_DES_DONE_3_Pos (11UL) /*!< Position of DES_DONE_3 field. */
#define DES_INTENCLR_DES_DONE_3_Msk (0x1UL << DES_INTENCLR_DES_DONE_3_Pos) /*!< Bit mask of DES_DONE_3 field. */
#define DES_INTENCLR_DES_DONE_3_Disabled (0UL) /*!< Read: Disabled */
#define DES_INTENCLR_DES_DONE_3_Enabled (1UL) /*!< Read: Enabled */
#define DES_INTENCLR_DES_DONE_3_Clear (1UL) /*!< Disable */

/* Bit 10 : Write '1' to disable interrupt for event DES_DONE_2 */
#define DES_INTENCLR_DES_DONE_2_Pos (10UL) /*!< Position of DES_DONE_2 field. */
#define DES_INTENCLR_DES_DONE_2_Msk (0x1UL << DES_INTENCLR_DES_DONE_2_Pos) /*!< Bit mask of DES_DONE_2 field. */
#define DES_INTENCLR_DES_DONE_2_Disabled (0UL) /*!< Read: Disabled */
#define DES_INTENCLR_DES_DONE_2_Enabled (1UL) /*!< Read: Enabled */
#define DES_INTENCLR_DES_DONE_2_Clear (1UL) /*!< Disable */

/* Bit 9 : Write '1' to disable interrupt for event DES_DONE_1 */
#define DES_INTENCLR_DES_DONE_1_Pos (9UL) /*!< Position of DES_DONE_1 field. */
#define DES_INTENCLR_DES_DONE_1_Msk (0x1UL << DES_INTENCLR_DES_DONE_1_Pos) /*!< Bit mask of DES_DONE_1 field. */
#define DES_INTENCLR_DES_DONE_1_Disabled (0UL) /*!< Read: Disabled */
#define DES_INTENCLR_DES_DONE_1_Enabled (1UL) /*!< Read: Enabled */
#define DES_INTENCLR_DES_DONE_1_Clear (1UL) /*!< Disable */

/* Bit 8 : Write '1' to disable interrupt for event DES_INPUT_FULL */
#define DES_INTENCLR_DES_INPUT_FULL_Pos (8UL) /*!< Position of DES_INPUT_FULL field. */
#define DES_INTENCLR_DES_INPUT_FULL_Msk (0x1UL << DES_INTENCLR_DES_INPUT_FULL_Pos) /*!< Bit mask of DES_INPUT_FULL field. */
#define DES_INTENCLR_DES_INPUT_FULL_Disabled (0UL) /*!< Read: Disabled */
#define DES_INTENCLR_DES_INPUT_FULL_Enabled (1UL) /*!< Read: Enabled */
#define DES_INTENCLR_DES_INPUT_FULL_Clear (1UL) /*!< Disable */

/* Bit 7 : Write '1' to disable interrupt for event DES_INITIALIZED */
#define DES_INTENCLR_DES_INITIALIZED_Pos (7UL) /*!< Position of DES_INITIALIZED field. */
#define DES_INTENCLR_DES_INITIALIZED_Msk (0x1UL << DES_INTENCLR_DES_INITIALIZED_Pos) /*!< Bit mask of DES_INITIALIZED field. */
#define DES_INTENCLR_DES_INITIALIZED_Disabled (0UL) /*!< Read: Disabled */
#define DES_INTENCLR_DES_INITIALIZED_Enabled (1UL) /*!< Read: Enabled */
#define DES_INTENCLR_DES_INITIALIZED_Clear (1UL) /*!< Disable */

/* Bit 6 : Write '1' to disable interrupt for event IV_READY */
#define DES_INTENCLR_IV_READY_Pos (6UL) /*!< Position of IV_READY field. */
#define DES_INTENCLR_IV_READY_Msk (0x1UL << DES_INTENCLR_IV_READY_Pos) /*!< Bit mask of IV_READY field. */
#define DES_INTENCLR_IV_READY_Disabled (0UL) /*!< Read: Disabled */
#define DES_INTENCLR_IV_READY_Enabled (1UL) /*!< Read: Enabled */
#define DES_INTENCLR_IV_READY_Clear (1UL) /*!< Disable */

/* Bit 5 : Write '1' to disable interrupt for event KEY_3_READY */
#define DES_INTENCLR_KEY_3_READY_Pos (5UL) /*!< Position of KEY_3_READY field. */
#define DES_INTENCLR_KEY_3_READY_Msk (0x1UL << DES_INTENCLR_KEY_3_READY_Pos) /*!< Bit mask of KEY_3_READY field. */
#define DES_INTENCLR_KEY_3_READY_Disabled (0UL) /*!< Read: Disabled */
#define DES_INTENCLR_KEY_3_READY_Enabled (1UL) /*!< Read: Enabled */
#define DES_INTENCLR_KEY_3_READY_Clear (1UL) /*!< Disable */

/* Bit 4 : Write '1' to disable interrupt for event KEY_1_READY */
#define DES_INTENCLR_KEY_1_READY_Pos (4UL) /*!< Position of KEY_1_READY field. */
#define DES_INTENCLR_KEY_1_READY_Msk (0x1UL << DES_INTENCLR_KEY_1_READY_Pos) /*!< Bit mask of KEY_1_READY field. */
#define DES_INTENCLR_KEY_1_READY_Disabled (0UL) /*!< Read: Disabled */
#define DES_INTENCLR_KEY_1_READY_Enabled (1UL) /*!< Read: Enabled */
#define DES_INTENCLR_KEY_1_READY_Clear (1UL) /*!< Disable */

/* Bit 3 : Write '1' to disable interrupt for event SCATTER_DONE */
#define DES_INTENCLR_SCATTER_DONE_Pos (3UL) /*!< Position of SCATTER_DONE field. */
#define DES_INTENCLR_SCATTER_DONE_Msk (0x1UL << DES_INTENCLR_SCATTER_DONE_Pos) /*!< Bit mask of SCATTER_DONE field. */
#define DES_INTENCLR_SCATTER_DONE_Disabled (0UL) /*!< Read: Disabled */
#define DES_INTENCLR_SCATTER_DONE_Enabled (1UL) /*!< Read: Enabled */
#define DES_INTENCLR_SCATTER_DONE_Clear (1UL) /*!< Disable */

/* Bit 2 : Write '1' to disable interrupt for event SCATTER_STARTED */
#define DES_INTENCLR_SCATTER_STARTED_Pos (2UL) /*!< Position of SCATTER_STARTED field. */
#define DES_INTENCLR_SCATTER_STARTED_Msk (0x1UL << DES_INTENCLR_SCATTER_STARTED_Pos) /*!< Bit mask of SCATTER_STARTED field. */
#define DES_INTENCLR_SCATTER_STARTED_Disabled (0UL) /*!< Read: Disabled */
#define DES_INTENCLR_SCATTER_STARTED_Enabled (1UL) /*!< Read: Enabled */
#define DES_INTENCLR_SCATTER_STARTED_Clear (1UL) /*!< Disable */

/* Bit 1 : Write '1' to disable interrupt for event GATHER_DONE */
#define DES_INTENCLR_GATHER_DONE_Pos (1UL) /*!< Position of GATHER_DONE field. */
#define DES_INTENCLR_GATHER_DONE_Msk (0x1UL << DES_INTENCLR_GATHER_DONE_Pos) /*!< Bit mask of GATHER_DONE field. */
#define DES_INTENCLR_GATHER_DONE_Disabled (0UL) /*!< Read: Disabled */
#define DES_INTENCLR_GATHER_DONE_Enabled (1UL) /*!< Read: Enabled */
#define DES_INTENCLR_GATHER_DONE_Clear (1UL) /*!< Disable */

/* Bit 0 : Write '1' to disable interrupt for event GATHER_STARTED */
#define DES_INTENCLR_GATHER_STARTED_Pos (0UL) /*!< Position of GATHER_STARTED field. */
#define DES_INTENCLR_GATHER_STARTED_Msk (0x1UL << DES_INTENCLR_GATHER_STARTED_Pos) /*!< Bit mask of GATHER_STARTED field. */
#define DES_INTENCLR_GATHER_STARTED_Disabled (0UL) /*!< Read: Disabled */
#define DES_INTENCLR_GATHER_STARTED_Enabled (1UL) /*!< Read: Enabled */
#define DES_INTENCLR_GATHER_STARTED_Clear (1UL) /*!< Disable */

/* Register: DES_INTPEND */
/* Description: Pending interrupts */

/* Bit 14 : Read pending status of interrupt for event RESETTED */
#define DES_INTPEND_RESETTED_Pos (14UL) /*!< Position of RESETTED field. */
#define DES_INTPEND_RESETTED_Msk (0x1UL << DES_INTPEND_RESETTED_Pos) /*!< Bit mask of RESETTED field. */
#define DES_INTPEND_RESETTED_NotPending (0UL) /*!< Read: Not pending */
#define DES_INTPEND_RESETTED_Pending (1UL) /*!< Read: Pending */

/* Bit 13 : Read pending status of interrupt for event MESSAGE_READY */
#define DES_INTPEND_MESSAGE_READY_Pos (13UL) /*!< Position of MESSAGE_READY field. */
#define DES_INTPEND_MESSAGE_READY_Msk (0x1UL << DES_INTPEND_MESSAGE_READY_Pos) /*!< Bit mask of MESSAGE_READY field. */
#define DES_INTPEND_MESSAGE_READY_NotPending (0UL) /*!< Read: Not pending */
#define DES_INTPEND_MESSAGE_READY_Pending (1UL) /*!< Read: Pending */

/* Bit 12 : Read pending status of interrupt for event DES_OUTPUT_EMPTY */
#define DES_INTPEND_DES_OUTPUT_EMPTY_Pos (12UL) /*!< Position of DES_OUTPUT_EMPTY field. */
#define DES_INTPEND_DES_OUTPUT_EMPTY_Msk (0x1UL << DES_INTPEND_DES_OUTPUT_EMPTY_Pos) /*!< Bit mask of DES_OUTPUT_EMPTY field. */
#define DES_INTPEND_DES_OUTPUT_EMPTY_NotPending (0UL) /*!< Read: Not pending */
#define DES_INTPEND_DES_OUTPUT_EMPTY_Pending (1UL) /*!< Read: Pending */

/* Bit 11 : Read pending status of interrupt for event DES_DONE_3 */
#define DES_INTPEND_DES_DONE_3_Pos (11UL) /*!< Position of DES_DONE_3 field. */
#define DES_INTPEND_DES_DONE_3_Msk (0x1UL << DES_INTPEND_DES_DONE_3_Pos) /*!< Bit mask of DES_DONE_3 field. */
#define DES_INTPEND_DES_DONE_3_NotPending (0UL) /*!< Read: Not pending */
#define DES_INTPEND_DES_DONE_3_Pending (1UL) /*!< Read: Pending */

/* Bit 10 : Read pending status of interrupt for event DES_DONE_2 */
#define DES_INTPEND_DES_DONE_2_Pos (10UL) /*!< Position of DES_DONE_2 field. */
#define DES_INTPEND_DES_DONE_2_Msk (0x1UL << DES_INTPEND_DES_DONE_2_Pos) /*!< Bit mask of DES_DONE_2 field. */
#define DES_INTPEND_DES_DONE_2_NotPending (0UL) /*!< Read: Not pending */
#define DES_INTPEND_DES_DONE_2_Pending (1UL) /*!< Read: Pending */

/* Bit 9 : Read pending status of interrupt for event DES_DONE_1 */
#define DES_INTPEND_DES_DONE_1_Pos (9UL) /*!< Position of DES_DONE_1 field. */
#define DES_INTPEND_DES_DONE_1_Msk (0x1UL << DES_INTPEND_DES_DONE_1_Pos) /*!< Bit mask of DES_DONE_1 field. */
#define DES_INTPEND_DES_DONE_1_NotPending (0UL) /*!< Read: Not pending */
#define DES_INTPEND_DES_DONE_1_Pending (1UL) /*!< Read: Pending */

/* Bit 8 : Read pending status of interrupt for event DES_INPUT_FULL */
#define DES_INTPEND_DES_INPUT_FULL_Pos (8UL) /*!< Position of DES_INPUT_FULL field. */
#define DES_INTPEND_DES_INPUT_FULL_Msk (0x1UL << DES_INTPEND_DES_INPUT_FULL_Pos) /*!< Bit mask of DES_INPUT_FULL field. */
#define DES_INTPEND_DES_INPUT_FULL_NotPending (0UL) /*!< Read: Not pending */
#define DES_INTPEND_DES_INPUT_FULL_Pending (1UL) /*!< Read: Pending */

/* Bit 7 : Read pending status of interrupt for event DES_INITIALIZED */
#define DES_INTPEND_DES_INITIALIZED_Pos (7UL) /*!< Position of DES_INITIALIZED field. */
#define DES_INTPEND_DES_INITIALIZED_Msk (0x1UL << DES_INTPEND_DES_INITIALIZED_Pos) /*!< Bit mask of DES_INITIALIZED field. */
#define DES_INTPEND_DES_INITIALIZED_NotPending (0UL) /*!< Read: Not pending */
#define DES_INTPEND_DES_INITIALIZED_Pending (1UL) /*!< Read: Pending */

/* Bit 6 : Read pending status of interrupt for event IV_READY */
#define DES_INTPEND_IV_READY_Pos (6UL) /*!< Position of IV_READY field. */
#define DES_INTPEND_IV_READY_Msk (0x1UL << DES_INTPEND_IV_READY_Pos) /*!< Bit mask of IV_READY field. */
#define DES_INTPEND_IV_READY_NotPending (0UL) /*!< Read: Not pending */
#define DES_INTPEND_IV_READY_Pending (1UL) /*!< Read: Pending */

/* Bit 5 : Read pending status of interrupt for event KEY_3_READY */
#define DES_INTPEND_KEY_3_READY_Pos (5UL) /*!< Position of KEY_3_READY field. */
#define DES_INTPEND_KEY_3_READY_Msk (0x1UL << DES_INTPEND_KEY_3_READY_Pos) /*!< Bit mask of KEY_3_READY field. */
#define DES_INTPEND_KEY_3_READY_NotPending (0UL) /*!< Read: Not pending */
#define DES_INTPEND_KEY_3_READY_Pending (1UL) /*!< Read: Pending */

/* Bit 4 : Read pending status of interrupt for event KEY_1_READY */
#define DES_INTPEND_KEY_1_READY_Pos (4UL) /*!< Position of KEY_1_READY field. */
#define DES_INTPEND_KEY_1_READY_Msk (0x1UL << DES_INTPEND_KEY_1_READY_Pos) /*!< Bit mask of KEY_1_READY field. */
#define DES_INTPEND_KEY_1_READY_NotPending (0UL) /*!< Read: Not pending */
#define DES_INTPEND_KEY_1_READY_Pending (1UL) /*!< Read: Pending */

/* Bit 3 : Read pending status of interrupt for event SCATTER_DONE */
#define DES_INTPEND_SCATTER_DONE_Pos (3UL) /*!< Position of SCATTER_DONE field. */
#define DES_INTPEND_SCATTER_DONE_Msk (0x1UL << DES_INTPEND_SCATTER_DONE_Pos) /*!< Bit mask of SCATTER_DONE field. */
#define DES_INTPEND_SCATTER_DONE_NotPending (0UL) /*!< Read: Not pending */
#define DES_INTPEND_SCATTER_DONE_Pending (1UL) /*!< Read: Pending */

/* Bit 2 : Read pending status of interrupt for event SCATTER_STARTED */
#define DES_INTPEND_SCATTER_STARTED_Pos (2UL) /*!< Position of SCATTER_STARTED field. */
#define DES_INTPEND_SCATTER_STARTED_Msk (0x1UL << DES_INTPEND_SCATTER_STARTED_Pos) /*!< Bit mask of SCATTER_STARTED field. */
#define DES_INTPEND_SCATTER_STARTED_NotPending (0UL) /*!< Read: Not pending */
#define DES_INTPEND_SCATTER_STARTED_Pending (1UL) /*!< Read: Pending */

/* Bit 1 : Read pending status of interrupt for event GATHER_DONE */
#define DES_INTPEND_GATHER_DONE_Pos (1UL) /*!< Position of GATHER_DONE field. */
#define DES_INTPEND_GATHER_DONE_Msk (0x1UL << DES_INTPEND_GATHER_DONE_Pos) /*!< Bit mask of GATHER_DONE field. */
#define DES_INTPEND_GATHER_DONE_NotPending (0UL) /*!< Read: Not pending */
#define DES_INTPEND_GATHER_DONE_Pending (1UL) /*!< Read: Pending */

/* Bit 0 : Read pending status of interrupt for event GATHER_STARTED */
#define DES_INTPEND_GATHER_STARTED_Pos (0UL) /*!< Position of GATHER_STARTED field. */
#define DES_INTPEND_GATHER_STARTED_Msk (0x1UL << DES_INTPEND_GATHER_STARTED_Pos) /*!< Bit mask of GATHER_STARTED field. */
#define DES_INTPEND_GATHER_STARTED_NotPending (0UL) /*!< Read: Not pending */
#define DES_INTPEND_GATHER_STARTED_Pending (1UL) /*!< Read: Pending */

/* Register: DES_LENGTH */
/* Description: Data length in bytes */

/* Bits 31..0 : Data length in bytes */
#define DES_LENGTH_LENGTH_Pos (0UL) /*!< Position of LENGTH field. */
#define DES_LENGTH_LENGTH_Msk (0xFFFFFFFFUL << DES_LENGTH_LENGTH_Pos) /*!< Bit mask of LENGTH field. */

/* Register: DES_MODE */
/* Description: Mode: 0 == ECB, 1 == CBC */

/* Bit 0 : Selects ECB or CBC block cipher mode */
#define DES_MODE_MODE_Pos (0UL) /*!< Position of MODE field. */
#define DES_MODE_MODE_Msk (0x1UL << DES_MODE_MODE_Pos) /*!< Bit mask of MODE field. */
#define DES_MODE_MODE_ECB (0UL) /*!< Electronic Codebook mode */
#define DES_MODE_MODE_CBC (1UL) /*!< Cipher Block Chaining mode */

/* Register: DES_ENABLE */
/* Description: Enable/disable block */

/* Bit 0 : Enable or disable DES module */
#define DES_ENABLE_ENABLE_Pos (0UL) /*!< Position of ENABLE field. */
#define DES_ENABLE_ENABLE_Msk (0x1UL << DES_ENABLE_ENABLE_Pos) /*!< Bit mask of ENABLE field. */
#define DES_ENABLE_ENABLE_Disabled (0UL) /*!< Disabled */
#define DES_ENABLE_ENABLE_Enabled (1UL) /*!< Enabled */

/* Register: DES_INJOBPTR */
/* Description: Input DMA job pointer register */

/* Bits 31..0 : Input DMA job pointer */
#define DES_INJOBPTR_INJOBPTR_Pos (0UL) /*!< Position of INJOBPTR field. */
#define DES_INJOBPTR_INJOBPTR_Msk (0xFFFFFFFFUL << DES_INJOBPTR_INJOBPTR_Pos) /*!< Bit mask of INJOBPTR field. */

/* Register: DES_OUTJOBPTR */
/* Description: Output DMA job pointer register */

/* Bits 31..0 : Output DMA job pointer */
#define DES_OUTJOBPTR_OUTJOBPTR_Pos (0UL) /*!< Position of OUTJOBPTR field. */
#define DES_OUTJOBPTR_OUTJOBPTR_Msk (0xFFFFFFFFUL << DES_OUTJOBPTR_OUTJOBPTR_Pos) /*!< Bit mask of OUTJOBPTR field. */

/* Register: DES_PENALTY_REG */
/* Description: Description collection: Penalty register for PCP n */

/* Bits 1..0 : Penalty Level */
#define DES_PENALTY_REG_PENALTY_Pos (0UL) /*!< Position of PENALTY field. */
#define DES_PENALTY_REG_PENALTY_Msk (0x3UL << DES_PENALTY_REG_PENALTY_Pos) /*!< Bit mask of PENALTY field. */
#define DES_PENALTY_REG_PENALTY_Full (0UL) /*!< Auto 0) Full penalty) */
#define DES_PENALTY_REG_PENALTY_Semi1 (1UL) /*!< (Auto 1)  Semi (power on, clock off) */
#define DES_PENALTY_REG_PENALTY_Semi0 (2UL) /*!< (Auto 2) Semi (power on, clock core on, clock buffer off) */
#define DES_PENALTY_REG_PENALTY_Zero (3UL) /*!< (Auto 3)  Zero penalty */

/* Register: DES_FORCE_OVERRIDE */
/* Description: Description collection: Force override register for PCP n */

/* Bit 15 :   */
#define DES_FORCE_OVERRIDE_DISABLE_Pos (15UL) /*!< Position of DISABLE field. */
#define DES_FORCE_OVERRIDE_DISABLE_Msk (0x1UL << DES_FORCE_OVERRIDE_DISABLE_Pos) /*!< Bit mask of DISABLE field. */
#define DES_FORCE_OVERRIDE_DISABLE_Zero (0UL) /*!< all forcing disabled */
#define DES_FORCE_OVERRIDE_DISABLE_One (1UL) /*!< all forcing enabled */

/* Bit 9 :   */
#define DES_FORCE_OVERRIDE_PWRREQ_CORE_Pos (9UL) /*!< Position of PWRREQ_CORE field. */
#define DES_FORCE_OVERRIDE_PWRREQ_CORE_Msk (0x1UL << DES_FORCE_OVERRIDE_PWRREQ_CORE_Pos) /*!< Bit mask of PWRREQ_CORE field. */
#define DES_FORCE_OVERRIDE_PWRREQ_CORE_Zero (0UL) /*!< powerRequest.core = 0 */
#define DES_FORCE_OVERRIDE_PWRREQ_CORE_One (1UL) /*!< powerRequest.core = 1 */

/* Bit 8 :   */
#define DES_FORCE_OVERRIDE_PWRREQ_SW_Pos (8UL) /*!< Position of PWRREQ_SW field. */
#define DES_FORCE_OVERRIDE_PWRREQ_SW_Msk (0x1UL << DES_FORCE_OVERRIDE_PWRREQ_SW_Pos) /*!< Bit mask of PWRREQ_SW field. */
#define DES_FORCE_OVERRIDE_PWRREQ_SW_Zero (0UL) /*!< powerRequest.switch = 0 */
#define DES_FORCE_OVERRIDE_PWRREQ_SW_One (1UL) /*!< powerRequest.switch = 1 */

/* Bit 7 :   */
#define DES_FORCE_OVERRIDE_PWRREQ_ALL_Pos (7UL) /*!< Position of PWRREQ_ALL field. */
#define DES_FORCE_OVERRIDE_PWRREQ_ALL_Msk (0x1UL << DES_FORCE_OVERRIDE_PWRREQ_ALL_Pos) /*!< Bit mask of PWRREQ_ALL field. */
#define DES_FORCE_OVERRIDE_PWRREQ_ALL_Zero (0UL) /*!< All clock forcing  disabled */
#define DES_FORCE_OVERRIDE_PWRREQ_ALL_One (1UL) /*!< All clock forcing  enabled */

/* Bit 3 :   */
#define DES_FORCE_OVERRIDE_CLKREQ_CORE_Pos (3UL) /*!< Position of CLKREQ_CORE field. */
#define DES_FORCE_OVERRIDE_CLKREQ_CORE_Msk (0x1UL << DES_FORCE_OVERRIDE_CLKREQ_CORE_Pos) /*!< Bit mask of CLKREQ_CORE field. */
#define DES_FORCE_OVERRIDE_CLKREQ_CORE_Zero (0UL) /*!< clockRequest.core = 0 */
#define DES_FORCE_OVERRIDE_CLKREQ_CORE_One (1UL) /*!< clockRequest.core = 1 */

/* Bit 2 :   */
#define DES_FORCE_OVERRIDE_CLKREQ_BUFF_Pos (2UL) /*!< Position of CLKREQ_BUFF field. */
#define DES_FORCE_OVERRIDE_CLKREQ_BUFF_Msk (0x1UL << DES_FORCE_OVERRIDE_CLKREQ_BUFF_Pos) /*!< Bit mask of CLKREQ_BUFF field. */
#define DES_FORCE_OVERRIDE_CLKREQ_BUFF_Zero (0UL) /*!< clockRequest.buff = 0 */
#define DES_FORCE_OVERRIDE_CLKREQ_BUFF_One (1UL) /*!< clockRequest.buff = 1 */

/* Bit 1 :   */
#define DES_FORCE_OVERRIDE_CLKREQ_ALL_Pos (1UL) /*!< Position of CLKREQ_ALL field. */
#define DES_FORCE_OVERRIDE_CLKREQ_ALL_Msk (0x1UL << DES_FORCE_OVERRIDE_CLKREQ_ALL_Pos) /*!< Bit mask of CLKREQ_ALL field. */
#define DES_FORCE_OVERRIDE_CLKREQ_ALL_Zero (0UL) /*!< clockRequest.switch = 0 */
#define DES_FORCE_OVERRIDE_CLKREQ_ALL_One (1UL) /*!< clockRequest.switch = 1 */

/* Bit 0 :   */
#define DES_FORCE_OVERRIDE_CHANGE_ME_TOO_Pos (0UL) /*!< Position of CHANGE_ME_TOO field. */
#define DES_FORCE_OVERRIDE_CHANGE_ME_TOO_Msk (0x1UL << DES_FORCE_OVERRIDE_CHANGE_ME_TOO_Pos) /*!< Bit mask of CHANGE_ME_TOO field. */
#define DES_FORCE_OVERRIDE_CHANGE_ME_TOO_Zero (0UL) /*!< clockRequest.switch_a = 0 */
#define DES_FORCE_OVERRIDE_CHANGE_ME_TOO_One (1UL) /*!< clockRequest.switch_a = 1 */

/* Register: DES_TURN_OFF_AUTO_CLOCKSOURCE_REQ */
/* Description: Turn of the automatic clock request. */

/* Bit 1 :   */
#define DES_TURN_OFF_AUTO_CLOCKSOURCE_REQ_CLOCK_START_1_Pos (1UL) /*!< Position of CLOCK_START_1 field. */
#define DES_TURN_OFF_AUTO_CLOCKSOURCE_REQ_CLOCK_START_1_Msk (0x1UL << DES_TURN_OFF_AUTO_CLOCKSOURCE_REQ_CLOCK_START_1_Pos) /*!< Bit mask of CLOCK_START_1 field. */
#define DES_TURN_OFF_AUTO_CLOCKSOURCE_REQ_CLOCK_START_1_Zero (0UL) /*!< normal clock start for PCP 1 */
#define DES_TURN_OFF_AUTO_CLOCKSOURCE_REQ_CLOCK_START_1_One (1UL) /*!< turn off normal clock start for PCP 1 */

/* Bit 0 :   */
#define DES_TURN_OFF_AUTO_CLOCKSOURCE_REQ_CLOCK_START_0_Pos (0UL) /*!< Position of CLOCK_START_0 field. */
#define DES_TURN_OFF_AUTO_CLOCKSOURCE_REQ_CLOCK_START_0_Msk (0x1UL << DES_TURN_OFF_AUTO_CLOCKSOURCE_REQ_CLOCK_START_0_Pos) /*!< Bit mask of CLOCK_START_0 field. */
#define DES_TURN_OFF_AUTO_CLOCKSOURCE_REQ_CLOCK_START_0_Zero (0UL) /*!< normal clock start for PCP 0 */
#define DES_TURN_OFF_AUTO_CLOCKSOURCE_REQ_CLOCK_START_0_One (1UL) /*!< turn off normal clock start for PCP 0 */


/* Peripheral: DPOWER */
/* Description: Power Control */

/* Register: DPOWER_TASKS_CONSTLAT */
/* Description: Enable constant latency mode. When going to sleep: CPU is clock gated, but regulators, oscillators and clock tree is kept on. */

/* Bit 0 : Enable constant latency mode. When going to sleep: CPU is clock gated, but regulators, oscillators and clock tree is kept on. */
#define DPOWER_TASKS_CONSTLAT_TASKS_CONSTLAT_Pos (0UL) /*!< Position of TASKS_CONSTLAT field. */
#define DPOWER_TASKS_CONSTLAT_TASKS_CONSTLAT_Msk (0x1UL << DPOWER_TASKS_CONSTLAT_TASKS_CONSTLAT_Pos) /*!< Bit mask of TASKS_CONSTLAT field. */
#define DPOWER_TASKS_CONSTLAT_TASKS_CONSTLAT_Trigger (1UL) /*!< Trigger task */

/* Register: DPOWER_TASKS_LOWPWR */
/* Description: Enable low power mode (variable latency) When going to sleep: Oscillators are switched off (if nothing else is requesting clocks). Regulators are switched off (if nothing else is requesting power). */

/* Bit 0 : Enable low power mode (variable latency) When going to sleep: Oscillators are switched off (if nothing else is requesting clocks). Regulators are switched off (if nothing else is requesting power). */
#define DPOWER_TASKS_LOWPWR_TASKS_LOWPWR_Pos (0UL) /*!< Position of TASKS_LOWPWR field. */
#define DPOWER_TASKS_LOWPWR_TASKS_LOWPWR_Msk (0x1UL << DPOWER_TASKS_LOWPWR_TASKS_LOWPWR_Pos) /*!< Bit mask of TASKS_LOWPWR field. */
#define DPOWER_TASKS_LOWPWR_TASKS_LOWPWR_Trigger (1UL) /*!< Trigger task */

/* Register: DPOWER_EVENTS_POFWARN */
/* Description: Power failure warning */

/* Bit 0 : Power failure warning */
#define DPOWER_EVENTS_POFWARN_EVENTS_POFWARN_Pos (0UL) /*!< Position of EVENTS_POFWARN field. */
#define DPOWER_EVENTS_POFWARN_EVENTS_POFWARN_Msk (0x1UL << DPOWER_EVENTS_POFWARN_EVENTS_POFWARN_Pos) /*!< Bit mask of EVENTS_POFWARN field. */
#define DPOWER_EVENTS_POFWARN_EVENTS_POFWARN_NotGenerated (0UL) /*!< Event not generated */
#define DPOWER_EVENTS_POFWARN_EVENTS_POFWARN_Generated (1UL) /*!< Event generated */

/* Register: DPOWER_EVENTS_SLEEPENTER */
/* Description: CPU entered WFI/WFE sleep */

/* Bit 0 : CPU entered WFI/WFE sleep */
#define DPOWER_EVENTS_SLEEPENTER_EVENTS_SLEEPENTER_Pos (0UL) /*!< Position of EVENTS_SLEEPENTER field. */
#define DPOWER_EVENTS_SLEEPENTER_EVENTS_SLEEPENTER_Msk (0x1UL << DPOWER_EVENTS_SLEEPENTER_EVENTS_SLEEPENTER_Pos) /*!< Bit mask of EVENTS_SLEEPENTER field. */
#define DPOWER_EVENTS_SLEEPENTER_EVENTS_SLEEPENTER_NotGenerated (0UL) /*!< Event not generated */
#define DPOWER_EVENTS_SLEEPENTER_EVENTS_SLEEPENTER_Generated (1UL) /*!< Event generated */

/* Register: DPOWER_EVENTS_SLEEPEXIT */
/* Description: CPU exited WFI/WFE sleep */

/* Bit 0 : CPU exited WFI/WFE sleep */
#define DPOWER_EVENTS_SLEEPEXIT_EVENTS_SLEEPEXIT_Pos (0UL) /*!< Position of EVENTS_SLEEPEXIT field. */
#define DPOWER_EVENTS_SLEEPEXIT_EVENTS_SLEEPEXIT_Msk (0x1UL << DPOWER_EVENTS_SLEEPEXIT_EVENTS_SLEEPEXIT_Pos) /*!< Bit mask of EVENTS_SLEEPEXIT field. */
#define DPOWER_EVENTS_SLEEPEXIT_EVENTS_SLEEPEXIT_NotGenerated (0UL) /*!< Event not generated */
#define DPOWER_EVENTS_SLEEPEXIT_EVENTS_SLEEPEXIT_Generated (1UL) /*!< Event generated */

/* Register: DPOWER_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 6 : Enable or disable interrupt for event SLEEPEXIT */
#define DPOWER_INTEN_SLEEPEXIT_Pos (6UL) /*!< Position of SLEEPEXIT field. */
#define DPOWER_INTEN_SLEEPEXIT_Msk (0x1UL << DPOWER_INTEN_SLEEPEXIT_Pos) /*!< Bit mask of SLEEPEXIT field. */
#define DPOWER_INTEN_SLEEPEXIT_Disabled (0UL) /*!< Disable */
#define DPOWER_INTEN_SLEEPEXIT_Enabled (1UL) /*!< Enable */

/* Bit 5 : Enable or disable interrupt for event SLEEPENTER */
#define DPOWER_INTEN_SLEEPENTER_Pos (5UL) /*!< Position of SLEEPENTER field. */
#define DPOWER_INTEN_SLEEPENTER_Msk (0x1UL << DPOWER_INTEN_SLEEPENTER_Pos) /*!< Bit mask of SLEEPENTER field. */
#define DPOWER_INTEN_SLEEPENTER_Disabled (0UL) /*!< Disable */
#define DPOWER_INTEN_SLEEPENTER_Enabled (1UL) /*!< Enable */

/* Bit 2 : Enable or disable interrupt for event POFWARN */
#define DPOWER_INTEN_POFWARN_Pos (2UL) /*!< Position of POFWARN field. */
#define DPOWER_INTEN_POFWARN_Msk (0x1UL << DPOWER_INTEN_POFWARN_Pos) /*!< Bit mask of POFWARN field. */
#define DPOWER_INTEN_POFWARN_Disabled (0UL) /*!< Disable */
#define DPOWER_INTEN_POFWARN_Enabled (1UL) /*!< Enable */

/* Register: DPOWER_INTENSET */
/* Description: Enable interrupt */

/* Bit 6 : Write '1' to enable interrupt for event SLEEPEXIT */
#define DPOWER_INTENSET_SLEEPEXIT_Pos (6UL) /*!< Position of SLEEPEXIT field. */
#define DPOWER_INTENSET_SLEEPEXIT_Msk (0x1UL << DPOWER_INTENSET_SLEEPEXIT_Pos) /*!< Bit mask of SLEEPEXIT field. */
#define DPOWER_INTENSET_SLEEPEXIT_Disabled (0UL) /*!< Read: Disabled */
#define DPOWER_INTENSET_SLEEPEXIT_Enabled (1UL) /*!< Read: Enabled */
#define DPOWER_INTENSET_SLEEPEXIT_Set (1UL) /*!< Enable */

/* Bit 5 : Write '1' to enable interrupt for event SLEEPENTER */
#define DPOWER_INTENSET_SLEEPENTER_Pos (5UL) /*!< Position of SLEEPENTER field. */
#define DPOWER_INTENSET_SLEEPENTER_Msk (0x1UL << DPOWER_INTENSET_SLEEPENTER_Pos) /*!< Bit mask of SLEEPENTER field. */
#define DPOWER_INTENSET_SLEEPENTER_Disabled (0UL) /*!< Read: Disabled */
#define DPOWER_INTENSET_SLEEPENTER_Enabled (1UL) /*!< Read: Enabled */
#define DPOWER_INTENSET_SLEEPENTER_Set (1UL) /*!< Enable */

/* Bit 2 : Write '1' to enable interrupt for event POFWARN */
#define DPOWER_INTENSET_POFWARN_Pos (2UL) /*!< Position of POFWARN field. */
#define DPOWER_INTENSET_POFWARN_Msk (0x1UL << DPOWER_INTENSET_POFWARN_Pos) /*!< Bit mask of POFWARN field. */
#define DPOWER_INTENSET_POFWARN_Disabled (0UL) /*!< Read: Disabled */
#define DPOWER_INTENSET_POFWARN_Enabled (1UL) /*!< Read: Enabled */
#define DPOWER_INTENSET_POFWARN_Set (1UL) /*!< Enable */

/* Register: DPOWER_INTENCLR */
/* Description: Disable interrupt */

/* Bit 6 : Write '1' to disable interrupt for event SLEEPEXIT */
#define DPOWER_INTENCLR_SLEEPEXIT_Pos (6UL) /*!< Position of SLEEPEXIT field. */
#define DPOWER_INTENCLR_SLEEPEXIT_Msk (0x1UL << DPOWER_INTENCLR_SLEEPEXIT_Pos) /*!< Bit mask of SLEEPEXIT field. */
#define DPOWER_INTENCLR_SLEEPEXIT_Disabled (0UL) /*!< Read: Disabled */
#define DPOWER_INTENCLR_SLEEPEXIT_Enabled (1UL) /*!< Read: Enabled */
#define DPOWER_INTENCLR_SLEEPEXIT_Clear (1UL) /*!< Disable */

/* Bit 5 : Write '1' to disable interrupt for event SLEEPENTER */
#define DPOWER_INTENCLR_SLEEPENTER_Pos (5UL) /*!< Position of SLEEPENTER field. */
#define DPOWER_INTENCLR_SLEEPENTER_Msk (0x1UL << DPOWER_INTENCLR_SLEEPENTER_Pos) /*!< Bit mask of SLEEPENTER field. */
#define DPOWER_INTENCLR_SLEEPENTER_Disabled (0UL) /*!< Read: Disabled */
#define DPOWER_INTENCLR_SLEEPENTER_Enabled (1UL) /*!< Read: Enabled */
#define DPOWER_INTENCLR_SLEEPENTER_Clear (1UL) /*!< Disable */

/* Bit 2 : Write '1' to disable interrupt for event POFWARN */
#define DPOWER_INTENCLR_POFWARN_Pos (2UL) /*!< Position of POFWARN field. */
#define DPOWER_INTENCLR_POFWARN_Msk (0x1UL << DPOWER_INTENCLR_POFWARN_Pos) /*!< Bit mask of POFWARN field. */
#define DPOWER_INTENCLR_POFWARN_Disabled (0UL) /*!< Read: Disabled */
#define DPOWER_INTENCLR_POFWARN_Enabled (1UL) /*!< Read: Enabled */
#define DPOWER_INTENCLR_POFWARN_Clear (1UL) /*!< Disable */

/* Register: DPOWER_RESETREAS */
/* Description: Reset reason */

/* Bit 22 : Force off reset from MCUMASTER detected */
#define DPOWER_RESETREAS_MFORCEOFF_Pos (22UL) /*!< Position of MFORCEOFF field. */
#define DPOWER_RESETREAS_MFORCEOFF_Msk (0x1UL << DPOWER_RESETREAS_MFORCEOFF_Pos) /*!< Bit mask of MFORCEOFF field. */
#define DPOWER_RESETREAS_MFORCEOFF_NotDetected (0UL) /*!< Not detected */
#define DPOWER_RESETREAS_MFORCEOFF_Detected (1UL) /*!< Detected */

/* Bit 21 : CPU reset from MCUMASTER detected */
#define DPOWER_RESETREAS_MRST_Pos (21UL) /*!< Position of MRST field. */
#define DPOWER_RESETREAS_MRST_Msk (0x1UL << DPOWER_RESETREAS_MRST_Pos) /*!< Bit mask of MRST field. */
#define DPOWER_RESETREAS_MRST_NotDetected (0UL) /*!< Not detected */
#define DPOWER_RESETREAS_MRST_Detected (1UL) /*!< Detected */

/* Bit 20 : Reset from secure control detected */
#define DPOWER_RESETREAS_SCTRL_Pos (20UL) /*!< Position of SCTRL field. */
#define DPOWER_RESETREAS_SCTRL_Msk (0x1UL << DPOWER_RESETREAS_SCTRL_Pos) /*!< Bit mask of SCTRL field. */
#define DPOWER_RESETREAS_SCTRL_NotDetected (0UL) /*!< Not detected */
#define DPOWER_RESETREAS_SCTRL_Detected (1UL) /*!< Detected */

/* Bit 19 : Reset from secure watchdog detected */
#define DPOWER_RESETREAS_SDOG_Pos (19UL) /*!< Position of SDOG field. */
#define DPOWER_RESETREAS_SDOG_Msk (0x1UL << DPOWER_RESETREAS_SDOG_Pos) /*!< Bit mask of SDOG field. */
#define DPOWER_RESETREAS_SDOG_NotDetected (0UL) /*!< Not detected */
#define DPOWER_RESETREAS_SDOG_Detected (1UL) /*!< Detected */

/* Bit 18 : Reset from local watchdog detected */
#define DPOWER_RESETREAS_LDOG_Pos (18UL) /*!< Position of LDOG field. */
#define DPOWER_RESETREAS_LDOG_Msk (0x1UL << DPOWER_RESETREAS_LDOG_Pos) /*!< Bit mask of LDOG field. */
#define DPOWER_RESETREAS_LDOG_NotDetected (0UL) /*!< Not detected */
#define DPOWER_RESETREAS_LDOG_Detected (1UL) /*!< Detected */

/* Bit 17 : Reset from CPU lock-up detected */
#define DPOWER_RESETREAS_LOCKUP_Pos (17UL) /*!< Position of LOCKUP field. */
#define DPOWER_RESETREAS_LOCKUP_Msk (0x1UL << DPOWER_RESETREAS_LOCKUP_Pos) /*!< Bit mask of LOCKUP field. */
#define DPOWER_RESETREAS_LOCKUP_NotDetected (0UL) /*!< Not detected */
#define DPOWER_RESETREAS_LOCKUP_Detected (1UL) /*!< Detected */

/* Bit 16 : Reset from AIRCR.SYSRESETREQ detected */
#define DPOWER_RESETREAS_SREQ_Pos (16UL) /*!< Position of SREQ field. */
#define DPOWER_RESETREAS_SREQ_Msk (0x1UL << DPOWER_RESETREAS_SREQ_Pos) /*!< Bit mask of SREQ field. */
#define DPOWER_RESETREAS_SREQ_NotDetected (0UL) /*!< Not detected */
#define DPOWER_RESETREAS_SREQ_Detected (1UL) /*!< Detected */

/* Bit 5 : Reset due to wake up from System OFF mode by NFC field detect */
#define DPOWER_RESETREAS_NFC_Pos (5UL) /*!< Position of NFC field. */
#define DPOWER_RESETREAS_NFC_Msk (0x1UL << DPOWER_RESETREAS_NFC_Pos) /*!< Bit mask of NFC field. */
#define DPOWER_RESETREAS_NFC_NotDetected (0UL) /*!< Not detected */
#define DPOWER_RESETREAS_NFC_Detected (1UL) /*!< Detected */

/* Bit 4 : Reset due to wake up from System OFF mode when wakeup is triggered from entering into debug interface mode */
#define DPOWER_RESETREAS_DIF_Pos (4UL) /*!< Position of DIF field. */
#define DPOWER_RESETREAS_DIF_Msk (0x1UL << DPOWER_RESETREAS_DIF_Pos) /*!< Bit mask of DIF field. */
#define DPOWER_RESETREAS_DIF_NotDetected (0UL) /*!< Not detected */
#define DPOWER_RESETREAS_DIF_Detected (1UL) /*!< Detected */

/* Bit 3 : Reset due to wake up from System OFF mode when wakeup is triggered from ANADETECT signal from LPCOMP */
#define DPOWER_RESETREAS_LPCOMP_Pos (3UL) /*!< Position of LPCOMP field. */
#define DPOWER_RESETREAS_LPCOMP_Msk (0x1UL << DPOWER_RESETREAS_LPCOMP_Pos) /*!< Bit mask of LPCOMP field. */
#define DPOWER_RESETREAS_LPCOMP_NotDetected (0UL) /*!< Not detected */
#define DPOWER_RESETREAS_LPCOMP_Detected (1UL) /*!< Detected */

/* Bit 2 : Reset due to wake up from System OFF mode when wakeup is triggered from DETECT signal from GPIO */
#define DPOWER_RESETREAS_OFF_Pos (2UL) /*!< Position of OFF field. */
#define DPOWER_RESETREAS_OFF_Msk (0x1UL << DPOWER_RESETREAS_OFF_Pos) /*!< Bit mask of OFF field. */
#define DPOWER_RESETREAS_OFF_NotDetected (0UL) /*!< Not detected */
#define DPOWER_RESETREAS_OFF_Detected (1UL) /*!< Detected */

/* Bit 1 : Reset from global watchdog detected */
#define DPOWER_RESETREAS_DOG_Pos (1UL) /*!< Position of DOG field. */
#define DPOWER_RESETREAS_DOG_Msk (0x1UL << DPOWER_RESETREAS_DOG_Pos) /*!< Bit mask of DOG field. */
#define DPOWER_RESETREAS_DOG_NotDetected (0UL) /*!< Not detected */
#define DPOWER_RESETREAS_DOG_Detected (1UL) /*!< Detected */

/* Bit 0 : Reset from pin-reset detected */
#define DPOWER_RESETREAS_RESETPIN_Pos (0UL) /*!< Position of RESETPIN field. */
#define DPOWER_RESETREAS_RESETPIN_Msk (0x1UL << DPOWER_RESETREAS_RESETPIN_Pos) /*!< Bit mask of RESETPIN field. */
#define DPOWER_RESETREAS_RESETPIN_NotDetected (0UL) /*!< Not detected */
#define DPOWER_RESETREAS_RESETPIN_Detected (1UL) /*!< Detected */

/* Register: DPOWER_SLEEPCNF */
/* Description: Sleep configuration */

/* Bit 0 : Sleep mode */
#define DPOWER_SLEEPCNF_SLEEPMODE_Pos (0UL) /*!< Position of SLEEPMODE field. */
#define DPOWER_SLEEPCNF_SLEEPMODE_Msk (0x1UL << DPOWER_SLEEPCNF_SLEEPMODE_Pos) /*!< Bit mask of SLEEPMODE field. */
#define DPOWER_SLEEPCNF_SLEEPMODE_LIGHTSLEEP (0UL) /*!< Light sleep FF retention mode will be used if available. Otherwise FFs are kept powered. */
#define DPOWER_SLEEPCNF_SLEEPMODE_DEEPSLEEP (1UL) /*!< Deep sleep (wake from reset) No FF retention (needs wake from reset). */

/* Register: DPOWER_GPREGRET */
/* Description: Description collection: General purpose retention register */

/* Bits 7..0 : General purpose retention register */
#define DPOWER_GPREGRET_GPREGRET_Pos (0UL) /*!< Position of GPREGRET field. */
#define DPOWER_GPREGRET_GPREGRET_Msk (0xFFUL << DPOWER_GPREGRET_GPREGRET_Pos) /*!< Bit mask of GPREGRET field. */

/* Register: DPOWER_DSP_RESET */
/* Description: Reset DSP subsystem */

/* Bit 0 : RESET */
#define DPOWER_DSP_RESET_RESET_Pos (0UL) /*!< Position of RESET field. */
#define DPOWER_DSP_RESET_RESET_Msk (0x1UL << DPOWER_DSP_RESET_RESET_Pos) /*!< Bit mask of RESET field. */
#define DPOWER_DSP_RESET_RESET_Release (0UL) /*!< Release CPU reset signal. */
#define DPOWER_DSP_RESET_RESET_Hold (1UL) /*!< Hold CPU reset signal. */

/* Register: DPOWER_DSP_FORCEOFF */
/* Description: Force off power and clock in DSP subsystem */

/* Bit 0 : RESET */
#define DPOWER_DSP_FORCEOFF_FORCEOFF_Pos (0UL) /*!< Position of FORCEOFF field. */
#define DPOWER_DSP_FORCEOFF_FORCEOFF_Msk (0x1UL << DPOWER_DSP_FORCEOFF_FORCEOFF_Pos) /*!< Bit mask of FORCEOFF field. */
#define DPOWER_DSP_FORCEOFF_FORCEOFF_Release (0UL) /*!< Release force off signal. */
#define DPOWER_DSP_FORCEOFF_FORCEOFF_Hold (1UL) /*!< Hold force off signal. */

/* Register: DPOWER_DSP_FORCEON */
/* Description: Force on power and clock in DSP subsystem */

/* Bit 0 : Forces on power and clock in DSP subsystem */
#define DPOWER_DSP_FORCEON_FORCEON_Pos (0UL) /*!< Position of FORCEON field. */
#define DPOWER_DSP_FORCEON_FORCEON_Msk (0x1UL << DPOWER_DSP_FORCEON_FORCEON_Pos) /*!< Bit mask of FORCEON field. */
#define DPOWER_DSP_FORCEON_FORCEON_Release (0UL) /*!< Release force on signal. */
#define DPOWER_DSP_FORCEON_FORCEON_Hold (1UL) /*!< Hold force on signal. */

/* Register: DPOWER_DSP_HALT */
/* Description: Halt DSP subsystem */

/* Bit 0 : Halt DSP subsystem */
#define DPOWER_DSP_HALT_HALT_Pos (0UL) /*!< Position of HALT field. */
#define DPOWER_DSP_HALT_HALT_Msk (0x1UL << DPOWER_DSP_HALT_HALT_Pos) /*!< Bit mask of HALT field. */
#define DPOWER_DSP_HALT_HALT_Release (0UL) /*!< Release halt signal. */
#define DPOWER_DSP_HALT_HALT_Hold (1UL) /*!< Hold halt signal. */

/* Register: DPOWER_LYNX_RESET */
/* Description: Reset Lynx RF subsystem */

/* Bit 0 : CPU soft reset */
#define DPOWER_LYNX_RESET_RESET_Pos (0UL) /*!< Position of RESET field. */
#define DPOWER_LYNX_RESET_RESET_Msk (0x1UL << DPOWER_LYNX_RESET_RESET_Pos) /*!< Bit mask of RESET field. */
#define DPOWER_LYNX_RESET_RESET_Release (0UL) /*!< Release CPU reset signal. */
#define DPOWER_LYNX_RESET_RESET_Hold (1UL) /*!< Hold CPU reset signal. */

/* Register: DPOWER_LYNX_FORCEOFF */
/* Description: Force off power and clock in Lynx RF subsystem */

/* Bit 0 : RESET */
#define DPOWER_LYNX_FORCEOFF_FORCEOFF_Pos (0UL) /*!< Position of FORCEOFF field. */
#define DPOWER_LYNX_FORCEOFF_FORCEOFF_Msk (0x1UL << DPOWER_LYNX_FORCEOFF_FORCEOFF_Pos) /*!< Bit mask of FORCEOFF field. */
#define DPOWER_LYNX_FORCEOFF_FORCEOFF_Release (0UL) /*!< Release force off signal. */
#define DPOWER_LYNX_FORCEOFF_FORCEOFF_Hold (1UL) /*!< Hold force off signal. */

/* Register: DPOWER_LYNX_FORCEON */
/* Description: Force on Lynx RF subsystem */

/* Bit 0 : Forces an power and clock DSP subsystem */
#define DPOWER_LYNX_FORCEON_FORCEON_Pos (0UL) /*!< Position of FORCEON field. */
#define DPOWER_LYNX_FORCEON_FORCEON_Msk (0x1UL << DPOWER_LYNX_FORCEON_FORCEON_Pos) /*!< Bit mask of FORCEON field. */
#define DPOWER_LYNX_FORCEON_FORCEON_Release (0UL) /*!< Release force on signal. */
#define DPOWER_LYNX_FORCEON_FORCEON_Hold (1UL) /*!< Hold force on signal. */


/* Peripheral: FICR */
/* Description: Factory Information Configuration Registers */

/* Register: FICR_TESTSTATUS */
/* Description: Code memory test status. Will be set during production test. */

/* Bits 31..0 : Code memory test status. Will be set during production test. */
#define FICR_TESTSTATUS_TESTSTATUS_Pos (0UL) /*!< Position of TESTSTATUS field. */
#define FICR_TESTSTATUS_TESTSTATUS_Msk (0xFFFFFFFFUL << FICR_TESTSTATUS_TESTSTATUS_Pos) /*!< Bit mask of TESTSTATUS field. */

/* Register: FICR_CPTEST0 */
/* Description: Result from Circuit Probe test */

/* Bits 31..0 : Result from Circuit Probe test */
#define FICR_CPTEST0_CP1_Pos (0UL) /*!< Position of CP1 field. */
#define FICR_CPTEST0_CP1_Msk (0xFFFFFFFFUL << FICR_CPTEST0_CP1_Pos) /*!< Bit mask of CP1 field. */

/* Register: FICR_CPTEST00 */
/* Description: Result from Circuit Probe test */

/* Bits 31..0 : Result from Circuit Probe test */
#define FICR_CPTEST00_CP2_Pos (0UL) /*!< Position of CP2 field. */
#define FICR_CPTEST00_CP2_Msk (0xFFFFFFFFUL << FICR_CPTEST00_CP2_Pos) /*!< Bit mask of CP2 field. */

/* Register: FICR_CPTEST1 */
/* Description: Result from Circuit Probe test */

/* Bits 31..24 : 4th ascii byte of Lot ID character */
#define FICR_CPTEST1_LOTID4_Pos (24UL) /*!< Position of LOTID4 field. */
#define FICR_CPTEST1_LOTID4_Msk (0xFFUL << FICR_CPTEST1_LOTID4_Pos) /*!< Bit mask of LOTID4 field. */

/* Bits 23..16 : 3rd ascii byte of Lot ID character */
#define FICR_CPTEST1_LOTID3_Pos (16UL) /*!< Position of LOTID3 field. */
#define FICR_CPTEST1_LOTID3_Msk (0xFFUL << FICR_CPTEST1_LOTID3_Pos) /*!< Bit mask of LOTID3 field. */

/* Bits 15..8 : 2nd ascii byte of Lot ID character */
#define FICR_CPTEST1_LOTID2_Pos (8UL) /*!< Position of LOTID2 field. */
#define FICR_CPTEST1_LOTID2_Msk (0xFFUL << FICR_CPTEST1_LOTID2_Pos) /*!< Bit mask of LOTID2 field. */

/* Bits 7..0 : 1st ascii byte of Lot ID character */
#define FICR_CPTEST1_LOTID1_Pos (0UL) /*!< Position of LOTID1 field. */
#define FICR_CPTEST1_LOTID1_Msk (0xFFUL << FICR_CPTEST1_LOTID1_Pos) /*!< Bit mask of LOTID1 field. */

/* Register: FICR_CPTEST2 */
/* Description: Result from Circuit Probe test */

/* Bits 31..24 : Device X-coordinate, always &gt;=0, offset so that the leftmost value on wafer is 0 */
#define FICR_CPTEST2_XCOORD_Pos (24UL) /*!< Position of XCOORD field. */
#define FICR_CPTEST2_XCOORD_Msk (0xFFUL << FICR_CPTEST2_XCOORD_Pos) /*!< Bit mask of XCOORD field. */

/* Bits 23..16 : Wafer number, 1 byte integer */
#define FICR_CPTEST2_WAFER_Pos (16UL) /*!< Position of WAFER field. */
#define FICR_CPTEST2_WAFER_Msk (0xFFUL << FICR_CPTEST2_WAFER_Pos) /*!< Bit mask of WAFER field. */

/* Bits 15..8 : 6th ascii byte of Lot ID character */
#define FICR_CPTEST2_LOTID6_Pos (8UL) /*!< Position of LOTID6 field. */
#define FICR_CPTEST2_LOTID6_Msk (0xFFUL << FICR_CPTEST2_LOTID6_Pos) /*!< Bit mask of LOTID6 field. */

/* Bits 7..0 : 5th ascii byte of Lot ID character */
#define FICR_CPTEST2_LOTID5_Pos (0UL) /*!< Position of LOTID5 field. */
#define FICR_CPTEST2_LOTID5_Msk (0xFFUL << FICR_CPTEST2_LOTID5_Pos) /*!< Bit mask of LOTID5 field. */

/* Register: FICR_CPTEST3 */
/* Description: Result from Circuit Probe test */

/* Bits 31..24 : Data Retention (DR) flag */
#define FICR_CPTEST3_DR3_Pos (24UL) /*!< Position of DR3 field. */
#define FICR_CPTEST3_DR3_Msk (0xFFUL << FICR_CPTEST3_DR3_Pos) /*!< Bit mask of DR3 field. */

/* Bits 23..16 : Data Retention (DR) flag */
#define FICR_CPTEST3_DR2_Pos (16UL) /*!< Position of DR2 field. */
#define FICR_CPTEST3_DR2_Msk (0xFFUL << FICR_CPTEST3_DR2_Pos) /*!< Bit mask of DR2 field. */

/* Bits 15..8 : Data Retention (DR) flag */
#define FICR_CPTEST3_DR1_Pos (8UL) /*!< Position of DR1 field. */
#define FICR_CPTEST3_DR1_Msk (0xFFUL << FICR_CPTEST3_DR1_Pos) /*!< Bit mask of DR1 field. */

/* Bits 7..0 : Device Y-coordinate, always &gt;=0, offset so that the bottom value on wafer is 0 */
#define FICR_CPTEST3_YCOORD_Pos (0UL) /*!< Position of YCOORD field. */
#define FICR_CPTEST3_YCOORD_Msk (0xFFUL << FICR_CPTEST3_YCOORD_Pos) /*!< Bit mask of YCOORD field. */

/* Register: FICR_CPTEST4 */
/* Description: Result from Circuit Probe test */

/* Bits 7..0 : Data Retention (DR) flag */
#define FICR_CPTEST4_DR4_Pos (0UL) /*!< Position of DR4 field. */
#define FICR_CPTEST4_DR4_Msk (0xFFUL << FICR_CPTEST4_DR4_Pos) /*!< Bit mask of DR4 field. */

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

/* Register: FICR_INFO_CONFIGID */
/* Description: Configuration identifier */

/* Bits 31..16 : Deprecated field -  Identification number for the FW that is pre-loaded into the chip */
#define FICR_INFO_CONFIGID_FWID_Pos (16UL) /*!< Position of FWID field. */
#define FICR_INFO_CONFIGID_FWID_Msk (0xFFFFUL << FICR_INFO_CONFIGID_FWID_Pos) /*!< Bit mask of FWID field. */

/* Bits 15..0 : Identification number for the HW */
#define FICR_INFO_CONFIGID_HWID_Pos (0UL) /*!< Position of HWID field. */
#define FICR_INFO_CONFIGID_HWID_Msk (0xFFFFUL << FICR_INFO_CONFIGID_HWID_Pos) /*!< Bit mask of HWID field. */

/* Register: FICR_INFO_DEVICEID */
/* Description: Description collection: Device identifier */

/* Bits 31..0 : 64 bit unique device identifier */
#define FICR_INFO_DEVICEID_DEVICEID_Pos (0UL) /*!< Position of DEVICEID field. */
#define FICR_INFO_DEVICEID_DEVICEID_Msk (0xFFFFFFFFUL << FICR_INFO_DEVICEID_DEVICEID_Pos) /*!< Bit mask of DEVICEID field. */

/* Register: FICR_INFO_PART */
/* Description: Part code */

/* Bits 31..0 : Part code */
#define FICR_INFO_PART_PART_Pos (0UL) /*!< Position of PART field. */
#define FICR_INFO_PART_PART_Msk (0xFFFFFFFFUL << FICR_INFO_PART_PART_Pos) /*!< Bit mask of PART field. */
#define FICR_INFO_PART_PART_Unspecified (0xFFFFFFFFUL) /*!< Unspecified */

/* Register: FICR_INFO_VARIANT */
/* Description: Part Variant, Hardware version and Production configuration */

/* Bits 31..0 : Part Variant, Hardware version and Production configuration, encoded as ASCII */
#define FICR_INFO_VARIANT_VARIANT_Pos (0UL) /*!< Position of VARIANT field. */
#define FICR_INFO_VARIANT_VARIANT_Msk (0xFFFFFFFFUL << FICR_INFO_VARIANT_VARIANT_Pos) /*!< Bit mask of VARIANT field. */
#define FICR_INFO_VARIANT_VARIANT_Unspecified (0xFFFFFFFFUL) /*!< Unspecified */

/* Register: FICR_INFO_PACKAGE */
/* Description: Package option */

/* Bits 31..0 : Package option */
#define FICR_INFO_PACKAGE_PACKAGE_Pos (0UL) /*!< Position of PACKAGE field. */
#define FICR_INFO_PACKAGE_PACKAGE_Msk (0xFFFFFFFFUL << FICR_INFO_PACKAGE_PACKAGE_Pos) /*!< Bit mask of PACKAGE field. */
#define FICR_INFO_PACKAGE_PACKAGE_Unspecified (0xFFFFFFFFUL) /*!< Unspecified */

/* Register: FICR_INFO_RAM */
/* Description: RAM variant */

/* Bits 31..0 : RAM variant */
#define FICR_INFO_RAM_RAM_Pos (0UL) /*!< Position of RAM field. */
#define FICR_INFO_RAM_RAM_Msk (0xFFFFFFFFUL << FICR_INFO_RAM_RAM_Pos) /*!< Bit mask of RAM field. */
#define FICR_INFO_RAM_RAM_Unspecified (0xFFFFFFFFUL) /*!< Unspecified */

/* Register: FICR_INFO_FLASH */
/* Description: Flash variant */

/* Bits 31..0 : Flash variant */
#define FICR_INFO_FLASH_FLASH_Pos (0UL) /*!< Position of FLASH field. */
#define FICR_INFO_FLASH_FLASH_Msk (0xFFFFFFFFUL << FICR_INFO_FLASH_FLASH_Pos) /*!< Bit mask of FLASH field. */
#define FICR_INFO_FLASH_FLASH_Unspecified (0xFFFFFFFFUL) /*!< Unspecified */

/* Register: FICR_INFO_CODEPAGESIZE */
/* Description: Code memory page size */

/* Bits 31..0 : Code memory page size */
#define FICR_INFO_CODEPAGESIZE_CODEPAGESIZE_Pos (0UL) /*!< Position of CODEPAGESIZE field. */
#define FICR_INFO_CODEPAGESIZE_CODEPAGESIZE_Msk (0xFFFFFFFFUL << FICR_INFO_CODEPAGESIZE_CODEPAGESIZE_Pos) /*!< Bit mask of CODEPAGESIZE field. */

/* Register: FICR_INFO_CODESIZE */
/* Description: Code memory size */

/* Bits 31..0 : Code memory size in number of pages */
#define FICR_INFO_CODESIZE_CODESIZE_Pos (0UL) /*!< Position of CODESIZE field. */
#define FICR_INFO_CODESIZE_CODESIZE_Msk (0xFFFFFFFFUL << FICR_INFO_CODESIZE_CODESIZE_Pos) /*!< Bit mask of CODESIZE field. */

/* Register: FICR_INFO_DEVICETYPE */
/* Description: Device type */

/* Bits 31..0 : Device type */
#define FICR_INFO_DEVICETYPE_DEVICETYPE_Pos (0UL) /*!< Position of DEVICETYPE field. */
#define FICR_INFO_DEVICETYPE_DEVICETYPE_Msk (0xFFFFFFFFUL << FICR_INFO_DEVICETYPE_DEVICETYPE_Pos) /*!< Bit mask of DEVICETYPE field. */
#define FICR_INFO_DEVICETYPE_DEVICETYPE_Die (0x0000000UL) /*!< Device is an physical DIE */
#define FICR_INFO_DEVICETYPE_DEVICETYPE_FPGA (0xFFFFFFFFUL) /*!< Device is an FPGA */

/* Register: FICR_CHIPCONF02 */
/* Description: Miscellaneous analog configuration. Will be set during production test. */

/* Bits 31..22 : TEMP module calibration value (default value for TEMP-&gt;CALIB) */
#define FICR_CHIPCONF02_TEMPCALIB_Pos (22UL) /*!< Position of TEMPCALIB field. */
#define FICR_CHIPCONF02_TEMPCALIB_Msk (0x3FFUL << FICR_CHIPCONF02_TEMPCALIB_Pos) /*!< Bit mask of TEMPCALIB field. */

/* Bits 19..16 : wait-states (excluding the cache controller) for I-Code flash access, D-Code has one more wait-state. */
#define FICR_CHIPCONF02_WS_Pos (16UL) /*!< Position of WS field. */
#define FICR_CHIPCONF02_WS_Msk (0xFUL << FICR_CHIPCONF02_WS_Pos) /*!< Bit mask of WS field. */
#define FICR_CHIPCONF02_WS_1WS (1UL) /*!< 1 wait-state in total for I-Code (2 for D-Code) */
#define FICR_CHIPCONF02_WS_2WS (2UL) /*!< 2 wait-state in total for I-Code (3 for D-Code) */
#define FICR_CHIPCONF02_WS_3WS (3UL) /*!< 3 wait-state in total for I-Code (4 for D-Code) */
#define FICR_CHIPCONF02_WS_4WS (4UL) /*!< 4 wait-state in total for I-Code (5 for D-Code) */
#define FICR_CHIPCONF02_WS_5WS (5UL) /*!< 5 wait-state in total for I-Code (6 for D-Code) */
#define FICR_CHIPCONF02_WS_6WS (6UL) /*!< 6 wait-state in total for I-Code (7 for D-Code) */
#define FICR_CHIPCONF02_WS_7WS (7UL) /*!< 7 wait-state in total for I-Code (8 for D-Code) */
#define FICR_CHIPCONF02_WS_8WS (8UL) /*!< 8 wait-state in total for I-Code (9 for D-Code) */
#define FICR_CHIPCONF02_WS_9WS (9UL) /*!< 9 wait-state in total for I-Code (10 for D-Code) */
#define FICR_CHIPCONF02_WS_10WS (10UL) /*!< 10 wait-state in total for I-Code (11 for D-Code) */
#define FICR_CHIPCONF02_WS_11WS (11UL) /*!< 11 wait-state in total for I-Code (12 for D-Code) */
#define FICR_CHIPCONF02_WS_12WS (12UL) /*!< 12 wait-state in total for I-Code (13 for D-Code) */
#define FICR_CHIPCONF02_WS_13WS (13UL) /*!< 13 wait-state in total for I-Code (14 for D-Code) */
#define FICR_CHIPCONF02_WS_14WS (14UL) /*!< 14 wait-state in total for I-Code (15 for D-Code) */
#define FICR_CHIPCONF02_WS_15WS (15UL) /*!< 15 wait-state in total for I-Code (16 for D-Code) */

/* Bits 15..11 : number of cycles before Information Configuration Registers can be read */
#define FICR_CHIPCONF02_IFCREADDELAY_Pos (11UL) /*!< Position of IFCREADDELAY field. */
#define FICR_CHIPCONF02_IFCREADDELAY_Msk (0x1FUL << FICR_CHIPCONF02_IFCREADDELAY_Pos) /*!< Bit mask of IFCREADDELAY field. */

/* Bits 7..0 : Number of successful FLASHPWRUPn read cycles when powering up flash. After chip power up, the NVMC controller reads FLASHPWRUPn for 7 us. */
#define FICR_CHIPCONF02_FLASHPWRUPCNT_Pos (0UL) /*!< Position of FLASHPWRUPCNT field. */
#define FICR_CHIPCONF02_FLASHPWRUPCNT_Msk (0xFFUL << FICR_CHIPCONF02_FLASHPWRUPCNT_Pos) /*!< Bit mask of FLASHPWRUPCNT field. */

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

/* Register: FICR_TRIMCNF_ADDR */
/* Description: Description cluster: Address */

/* Bits 31..0 : Address */
#define FICR_TRIMCNF_ADDR_Address_Pos (0UL) /*!< Position of Address field. */
#define FICR_TRIMCNF_ADDR_Address_Msk (0xFFFFFFFFUL << FICR_TRIMCNF_ADDR_Address_Pos) /*!< Bit mask of Address field. */

/* Register: FICR_TRIMCNF_DATA */
/* Description: Description cluster: Data */

/* Bits 31..0 : Data */
#define FICR_TRIMCNF_DATA_Data_Pos (0UL) /*!< Position of Data field. */
#define FICR_TRIMCNF_DATA_Data_Msk (0xFFFFFFFFUL << FICR_TRIMCNF_DATA_Data_Pos) /*!< Bit mask of Data field. */

/* Register: FICR_PRODTEST */
/* Description: Description collection: Production test control n */

/* Bits 31..0 : Production test control (majority vote done for each bit over all three fields to get the used value) */
#define FICR_PRODTEST_PRODTEST_Pos (0UL) /*!< Position of PRODTEST field. */
#define FICR_PRODTEST_PRODTEST_Msk (0xFFFFFFFFUL << FICR_PRODTEST_PRODTEST_Pos) /*!< Bit mask of PRODTEST field. */
#define FICR_PRODTEST_PRODTEST_Done (0xBB42319FUL) /*!< Production tests done */
#define FICR_PRODTEST_PRODTEST_NotDone (0xFFFFFFFFUL) /*!< Production tests not done, SoC is in Virgin mode (with any other value than 0xBB42319F) */

/* Register: FICR_BPROTINIT */
/* Description: BPROT initialization data */

/* Bits 31..0 : BPROT CONFIG0 initialization data, covering 32 lowest 4kbyte blocks of Flash */
#define FICR_BPROTINIT_BPROTINIT_Pos (0UL) /*!< Position of BPROTINIT field. */
#define FICR_BPROTINIT_BPROTINIT_Msk (0xFFFFFFFFUL << FICR_BPROTINIT_BPROTINIT_Pos) /*!< Bit mask of BPROTINIT field. */

/* Register: FICR_PUBLICID */
/* Description: Description collection: Public ID n */

/* Bits 31..0 : Public ID (32 bits of a 128 bit field) */
#define FICR_PUBLICID_PUBLICID_Pos (0UL) /*!< Position of PUBLICID field. */
#define FICR_PUBLICID_PUBLICID_Msk (0xFFFFFFFFUL << FICR_PUBLICID_PUBLICID_Pos) /*!< Bit mask of PUBLICID field. */

/* Register: FICR_IMEI */
/* Description: Description collection: IMEI n */

/* Bits 31..0 : IMEI in BCD decoded nibbles */
#define FICR_IMEI_IMEI_Pos (0UL) /*!< Position of IMEI field. */
#define FICR_IMEI_IMEI_Msk (0xFFFFFFFFUL << FICR_IMEI_IMEI_Pos) /*!< Bit mask of IMEI field. */

/* Register: FICR_MAC0 */
/* Description: Description collection: MAC0 n */

/* Bits 31..0 : MAC0 value */
#define FICR_MAC0_MAC0_Pos (0UL) /*!< Position of MAC0 field. */
#define FICR_MAC0_MAC0_Msk (0xFFFFFFFFUL << FICR_MAC0_MAC0_Pos) /*!< Bit mask of MAC0 field. */

/* Register: FICR_MAC1 */
/* Description: Description collection: MAC1 n */

/* Bits 31..0 : MAC1 value */
#define FICR_MAC1_MAC1_Pos (0UL) /*!< Position of MAC1 field. */
#define FICR_MAC1_MAC1_Msk (0xFFFFFFFFUL << FICR_MAC1_MAC1_Pos) /*!< Bit mask of MAC1 field. */

/* Register: FICR_MAC2 */
/* Description: Description collection: MAC2 n */

/* Bits 31..0 : MAC2 value */
#define FICR_MAC2_MAC2_Pos (0UL) /*!< Position of MAC2 field. */
#define FICR_MAC2_MAC2_Msk (0xFFFFFFFFUL << FICR_MAC2_MAC2_Pos) /*!< Bit mask of MAC2 field. */

/* Register: FICR_MAC3 */
/* Description: Description collection: MAC3 n */

/* Bits 31..0 : MAC3 value */
#define FICR_MAC3_MAC3_Pos (0UL) /*!< Position of MAC3 field. */
#define FICR_MAC3_MAC3_Msk (0xFFFFFFFFUL << FICR_MAC3_MAC3_Pos) /*!< Bit mask of MAC3 field. */

/* Register: FICR_DEVCONF */
/* Description: Description collection: Device configuration n */

/* Bits 31..0 : Device configuration data, contents defined in SW */
#define FICR_DEVCONF_DEVCONF_Pos (0UL) /*!< Position of DEVCONF field. */
#define FICR_DEVCONF_DEVCONF_Msk (0xFFFFFFFFUL << FICR_DEVCONF_DEVCONF_Pos) /*!< Bit mask of DEVCONF field. */

/* Register: FICR_DOWNGRADEPREV */
/* Description: Downgrade prevention control. Totally 128 bits within 256 bytes,
                located in groups of 8 bits per 128 bit word (distributed due to 
                Flash write count limit) */

/* Bits 7..0 : Downgrade prevention control bits */
#define FICR_DOWNGRADEPREV_DOWNGRADEPREV_Pos (0UL) /*!< Position of DOWNGRADEPREV field. */
#define FICR_DOWNGRADEPREV_DOWNGRADEPREV_Msk (0xFFUL << FICR_DOWNGRADEPREV_DOWNGRADEPREV_Pos) /*!< Bit mask of DOWNGRADEPREV field. */

/* Register: FICR_KEYREVOCATION */
/* Description: Key revocation control */

/* Bit 3 : Root key 3 (this key shall always be enabled, regardless of the value) */
#define FICR_KEYREVOCATION_KEY3_Pos (3UL) /*!< Position of KEY3 field. */
#define FICR_KEYREVOCATION_KEY3_Msk (0x1UL << FICR_KEYREVOCATION_KEY3_Pos) /*!< Bit mask of KEY3 field. */
#define FICR_KEYREVOCATION_KEY3_Disabled (0UL) /*!< Key disabled */
#define FICR_KEYREVOCATION_KEY3_Enabled (1UL) /*!< Key enabled */

/* Bit 2 : Root key 2 */
#define FICR_KEYREVOCATION_KEY2_Pos (2UL) /*!< Position of KEY2 field. */
#define FICR_KEYREVOCATION_KEY2_Msk (0x1UL << FICR_KEYREVOCATION_KEY2_Pos) /*!< Bit mask of KEY2 field. */
#define FICR_KEYREVOCATION_KEY2_Disabled (0UL) /*!< Key disabled */
#define FICR_KEYREVOCATION_KEY2_Enabled (1UL) /*!< Key enabled */

/* Bit 1 : Root key 1 */
#define FICR_KEYREVOCATION_KEY1_Pos (1UL) /*!< Position of KEY1 field. */
#define FICR_KEYREVOCATION_KEY1_Msk (0x1UL << FICR_KEYREVOCATION_KEY1_Pos) /*!< Bit mask of KEY1 field. */
#define FICR_KEYREVOCATION_KEY1_Disabled (0UL) /*!< Key disabled */
#define FICR_KEYREVOCATION_KEY1_Enabled (1UL) /*!< Key enabled */

/* Bit 0 : Root key 0 */
#define FICR_KEYREVOCATION_KEY0_Pos (0UL) /*!< Position of KEY0 field. */
#define FICR_KEYREVOCATION_KEY0_Msk (0x1UL << FICR_KEYREVOCATION_KEY0_Pos) /*!< Bit mask of KEY0 field. */
#define FICR_KEYREVOCATION_KEY0_Disabled (0UL) /*!< Key disabled */
#define FICR_KEYREVOCATION_KEY0_Enabled (1UL) /*!< Key enabled */

/* Register: FICR_LIFECYCLESTATE */
/* Description: Lifecycle state [7:0] */

/* Bit 7 : Secure Control reset request mask */
#define FICR_LIFECYCLESTATE_MASKRESETREQUEST_Pos (7UL) /*!< Position of MASKRESETREQUEST field. */
#define FICR_LIFECYCLESTATE_MASKRESETREQUEST_Msk (0x1UL << FICR_LIFECYCLESTATE_MASKRESETREQUEST_Pos) /*!< Bit mask of MASKRESETREQUEST field. */
#define FICR_LIFECYCLESTATE_MASKRESETREQUEST_Disabled (0UL) /*!< Reset request mask disabled */
#define FICR_LIFECYCLESTATE_MASKRESETREQUEST_Enabled (1UL) /*!< Reset request mask enabled */

/* Bits 3..0 : Lifecycle state */
#define FICR_LIFECYCLESTATE_LIFECYCLESTATE_Pos (0UL) /*!< Position of LIFECYCLESTATE field. */
#define FICR_LIFECYCLESTATE_LIFECYCLESTATE_Msk (0xFUL << FICR_LIFECYCLESTATE_LIFECYCLESTATE_Pos) /*!< Bit mask of LIFECYCLESTATE field. */
#define FICR_LIFECYCLESTATE_LIFECYCLESTATE_DIS (0x0UL) /*!< Disabled chip (Other bit combinations) */
#define FICR_LIFECYCLESTATE_LIFECYCLESTATE_FFR (0x4UL) /*!< Field failure return chip (b'01XX) */
#define FICR_LIFECYCLESTATE_LIFECYCLESTATE_RD (0xBUL) /*!< R&amp;D chip (b'1011) */
#define FICR_LIFECYCLESTATE_LIFECYCLESTATE_SEC (0xCUL) /*!< Secure chip (b'110X) */
#define FICR_LIFECYCLESTATE_LIFECYCLESTATE_MF (0xEUL) /*!< Manufactured chip (b'1110) */
#define FICR_LIFECYCLESTATE_LIFECYCLESTATE_VIR (0xFUL) /*!< Virgin chip (b'1111) */

/* Register: FICR_DEBUGCNTRL0 */
/* Description: Debug control bits [7:0] */

/* Bit 7 : DSP non-invasive debug control */
#define FICR_DEBUGCNTRL0_OTP_DSP_NIDEN_Pos (7UL) /*!< Position of OTP_DSP_NIDEN field. */
#define FICR_DEBUGCNTRL0_OTP_DSP_NIDEN_Msk (0x1UL << FICR_DEBUGCNTRL0_OTP_DSP_NIDEN_Pos) /*!< Bit mask of OTP_DSP_NIDEN field. */
#define FICR_DEBUGCNTRL0_OTP_DSP_NIDEN_Disabled (0UL) /*!< Debug disabled (DSP NIDEN=0) */
#define FICR_DEBUGCNTRL0_OTP_DSP_NIDEN_Enabled (1UL) /*!< Debug enabled (DSP NIDEN=1) */

/* Bit 6 : DSP invasive debug control */
#define FICR_DEBUGCNTRL0_OTP_DSP_DBGEN_Pos (6UL) /*!< Position of OTP_DSP_DBGEN field. */
#define FICR_DEBUGCNTRL0_OTP_DSP_DBGEN_Msk (0x1UL << FICR_DEBUGCNTRL0_OTP_DSP_DBGEN_Pos) /*!< Bit mask of OTP_DSP_DBGEN field. */
#define FICR_DEBUGCNTRL0_OTP_DSP_DBGEN_Disabled (0UL) /*!< Debug disabled (DSP DBGEN=0) */
#define FICR_DEBUGCNTRL0_OTP_DSP_DBGEN_Enabled (1UL) /*!< Debug enabled (DSP DBGEN=1) */

/* Bit 5 : M0 non-invasive debug control */
#define FICR_DEBUGCNTRL0_OTP_M0_NIDEN_Pos (5UL) /*!< Position of OTP_M0_NIDEN field. */
#define FICR_DEBUGCNTRL0_OTP_M0_NIDEN_Msk (0x1UL << FICR_DEBUGCNTRL0_OTP_M0_NIDEN_Pos) /*!< Bit mask of OTP_M0_NIDEN field. */
#define FICR_DEBUGCNTRL0_OTP_M0_NIDEN_Disabled (0UL) /*!< Debug disabled (M0 NIDEN=0) */
#define FICR_DEBUGCNTRL0_OTP_M0_NIDEN_Enabled (1UL) /*!< Debug enabled (M0 NIDEN=1) */

/* Bit 4 : M0 invasive debug control */
#define FICR_DEBUGCNTRL0_OTP_M0_DBGEN_Pos (4UL) /*!< Position of OTP_M0_DBGEN field. */
#define FICR_DEBUGCNTRL0_OTP_M0_DBGEN_Msk (0x1UL << FICR_DEBUGCNTRL0_OTP_M0_DBGEN_Pos) /*!< Bit mask of OTP_M0_DBGEN field. */
#define FICR_DEBUGCNTRL0_OTP_M0_DBGEN_Disabled (0UL) /*!< Debug disabled (M0 DBGEN=0) */
#define FICR_DEBUGCNTRL0_OTP_M0_DBGEN_Enabled (1UL) /*!< Debug enabled (M0 DBGEN=1) */

/* Bit 3 : M4 secure non-invasive debug control */
#define FICR_DEBUGCNTRL0_OTP_M4_SPNIDEN_Pos (3UL) /*!< Position of OTP_M4_SPNIDEN field. */
#define FICR_DEBUGCNTRL0_OTP_M4_SPNIDEN_Msk (0x1UL << FICR_DEBUGCNTRL0_OTP_M4_SPNIDEN_Pos) /*!< Bit mask of OTP_M4_SPNIDEN field. */
#define FICR_DEBUGCNTRL0_OTP_M4_SPNIDEN_Disabled (0UL) /*!< Secure debug disabled (M4 NIDEN=0 while M4 is in secure mode) */
#define FICR_DEBUGCNTRL0_OTP_M4_SPNIDEN_Enabled (1UL) /*!< Secure debug enabled (M4 NIDEN=1 while M4 is in secure mode) */

/* Bit 2 : M4 secure invasive debug control */
#define FICR_DEBUGCNTRL0_OTP_M4_SPIDEN_Pos (2UL) /*!< Position of OTP_M4_SPIDEN field. */
#define FICR_DEBUGCNTRL0_OTP_M4_SPIDEN_Msk (0x1UL << FICR_DEBUGCNTRL0_OTP_M4_SPIDEN_Pos) /*!< Bit mask of OTP_M4_SPIDEN field. */
#define FICR_DEBUGCNTRL0_OTP_M4_SPIDEN_Disabled (0UL) /*!< Secure debug disabled (M4 DBGEN=0 while M4 is in secure mode) */
#define FICR_DEBUGCNTRL0_OTP_M4_SPIDEN_Enabled (1UL) /*!< Secure debug enabled (M4 DBGEN=1 while M4 is in secure mode) */

/* Bit 1 : M4 non-invasive debug control */
#define FICR_DEBUGCNTRL0_OTP_M4_NIDEN_Pos (1UL) /*!< Position of OTP_M4_NIDEN field. */
#define FICR_DEBUGCNTRL0_OTP_M4_NIDEN_Msk (0x1UL << FICR_DEBUGCNTRL0_OTP_M4_NIDEN_Pos) /*!< Bit mask of OTP_M4_NIDEN field. */
#define FICR_DEBUGCNTRL0_OTP_M4_NIDEN_Disabled (0UL) /*!< Debug disabled (M4 NIDEN=0) */
#define FICR_DEBUGCNTRL0_OTP_M4_NIDEN_Enabled (1UL) /*!< Debug enabled (M4 NIDEN=1) */

/* Bit 0 : M4 invasive debug control */
#define FICR_DEBUGCNTRL0_OTP_M4_DBGEN_Pos (0UL) /*!< Position of OTP_M4_DBGEN field. */
#define FICR_DEBUGCNTRL0_OTP_M4_DBGEN_Msk (0x1UL << FICR_DEBUGCNTRL0_OTP_M4_DBGEN_Pos) /*!< Bit mask of OTP_M4_DBGEN field. */
#define FICR_DEBUGCNTRL0_OTP_M4_DBGEN_Disabled (0UL) /*!< Debug disabled (M4 DBGEN=0) */
#define FICR_DEBUGCNTRL0_OTP_M4_DBGEN_Enabled (1UL) /*!< Debug enabled (M4 DBGEN=1) */

/* Register: FICR_DEBUGCNTRL1 */
/* Description: Debug control bits [13:8] */

/* Bit 5 : M4F non-invasive debug control */
#define FICR_DEBUGCNTRL1_OTP_M4F_NIDEN_Pos (5UL) /*!< Position of OTP_M4F_NIDEN field. */
#define FICR_DEBUGCNTRL1_OTP_M4F_NIDEN_Msk (0x1UL << FICR_DEBUGCNTRL1_OTP_M4F_NIDEN_Pos) /*!< Bit mask of OTP_M4F_NIDEN field. */
#define FICR_DEBUGCNTRL1_OTP_M4F_NIDEN_Disabled (0UL) /*!< Debug disabled (M4F NIDEN=0) */
#define FICR_DEBUGCNTRL1_OTP_M4F_NIDEN_Enabled (1UL) /*!< Debug enabled (M4F NIDEN=1) */

/* Bit 4 : M4F invasive debug control */
#define FICR_DEBUGCNTRL1_OTP_M4F_DBGEN_Pos (4UL) /*!< Position of OTP_M4F_DBGEN field. */
#define FICR_DEBUGCNTRL1_OTP_M4F_DBGEN_Msk (0x1UL << FICR_DEBUGCNTRL1_OTP_M4F_DBGEN_Pos) /*!< Bit mask of OTP_M4F_DBGEN field. */
#define FICR_DEBUGCNTRL1_OTP_M4F_DBGEN_Disabled (0UL) /*!< Debug disabled (M4F DBGEN=0) */
#define FICR_DEBUGCNTRL1_OTP_M4F_DBGEN_Enabled (1UL) /*!< Debug enabled (M4F DBGEN=1) */

/* Bit 3 : Coresight secure non-invasive debug control */
#define FICR_DEBUGCNTRL1_OTP_CS_SPNIDEN_Pos (3UL) /*!< Position of OTP_CS_SPNIDEN field. */
#define FICR_DEBUGCNTRL1_OTP_CS_SPNIDEN_Msk (0x1UL << FICR_DEBUGCNTRL1_OTP_CS_SPNIDEN_Pos) /*!< Bit mask of OTP_CS_SPNIDEN field. */
#define FICR_DEBUGCNTRL1_OTP_CS_SPNIDEN_Disabled (0UL) /*!< Secure debug disabled (Coresight SPNIDEN=0) */
#define FICR_DEBUGCNTRL1_OTP_CS_SPNIDEN_Enabled (1UL) /*!< Secure debug enabled (Coresight SPNIDEN=1) */

/* Bit 2 : Coresight secure invasive debug control */
#define FICR_DEBUGCNTRL1_OTP_CS_SPIDEN_Pos (2UL) /*!< Position of OTP_CS_SPIDEN field. */
#define FICR_DEBUGCNTRL1_OTP_CS_SPIDEN_Msk (0x1UL << FICR_DEBUGCNTRL1_OTP_CS_SPIDEN_Pos) /*!< Bit mask of OTP_CS_SPIDEN field. */
#define FICR_DEBUGCNTRL1_OTP_CS_SPIDEN_Disabled (0UL) /*!< Secure debug disabled (Coresight SPIDEN=0) */
#define FICR_DEBUGCNTRL1_OTP_CS_SPIDEN_Enabled (1UL) /*!< Secure debug enabled (Coresight SPIDEN=1) */

/* Bit 1 : Coresight non-invasive debug control */
#define FICR_DEBUGCNTRL1_OTP_CS_NIDEN_Pos (1UL) /*!< Position of OTP_CS_NIDEN field. */
#define FICR_DEBUGCNTRL1_OTP_CS_NIDEN_Msk (0x1UL << FICR_DEBUGCNTRL1_OTP_CS_NIDEN_Pos) /*!< Bit mask of OTP_CS_NIDEN field. */
#define FICR_DEBUGCNTRL1_OTP_CS_NIDEN_Disabled (0UL) /*!< Debug disabled (Coresight NIDEN=0) */
#define FICR_DEBUGCNTRL1_OTP_CS_NIDEN_Enabled (1UL) /*!< Debug enabled (Coresight NIDEN=1) */

/* Bit 0 : Coresight invasive debug control */
#define FICR_DEBUGCNTRL1_OTP_CS_DBGEN_Pos (0UL) /*!< Position of OTP_CS_DBGEN field. */
#define FICR_DEBUGCNTRL1_OTP_CS_DBGEN_Msk (0x1UL << FICR_DEBUGCNTRL1_OTP_CS_DBGEN_Pos) /*!< Bit mask of OTP_CS_DBGEN field. */
#define FICR_DEBUGCNTRL1_OTP_CS_DBGEN_Disabled (0UL) /*!< Debug disabled (Coresight DBGEN=0) */
#define FICR_DEBUGCNTRL1_OTP_CS_DBGEN_Enabled (1UL) /*!< Debug enabled (Coresight DBGEN=1) */

/* Register: FICR_UNLOCKCODESTATE */
/* Description: SIM unlock code state for each lock level */

/* Bit 5 : State of master unlock code */
#define FICR_UNLOCKCODESTATE_MASTERCODESTATE_Pos (5UL) /*!< Position of MASTERCODESTATE field. */
#define FICR_UNLOCKCODESTATE_MASTERCODESTATE_Msk (0x1UL << FICR_UNLOCKCODESTATE_MASTERCODESTATE_Pos) /*!< Bit mask of MASTERCODESTATE field. */
#define FICR_UNLOCKCODESTATE_MASTERCODESTATE_Active (0UL) /*!< Unlock code activated */
#define FICR_UNLOCKCODESTATE_MASTERCODESTATE_NotActive (1UL) /*!< Unlock code not activated */

/* Bit 4 : State of SIM/USIM unlock code */
#define FICR_UNLOCKCODESTATE_PCKSTATE_Pos (4UL) /*!< Position of PCKSTATE field. */
#define FICR_UNLOCKCODESTATE_PCKSTATE_Msk (0x1UL << FICR_UNLOCKCODESTATE_PCKSTATE_Pos) /*!< Bit mask of PCKSTATE field. */
#define FICR_UNLOCKCODESTATE_PCKSTATE_Active (0UL) /*!< Unlock code activated */
#define FICR_UNLOCKCODESTATE_PCKSTATE_NotActive (1UL) /*!< Unlock code not activated */

/* Bit 3 : State of corporate unlock code */
#define FICR_UNLOCKCODESTATE_CCKSTATE_Pos (3UL) /*!< Position of CCKSTATE field. */
#define FICR_UNLOCKCODESTATE_CCKSTATE_Msk (0x1UL << FICR_UNLOCKCODESTATE_CCKSTATE_Pos) /*!< Bit mask of CCKSTATE field. */
#define FICR_UNLOCKCODESTATE_CCKSTATE_Active (0UL) /*!< Unlock code activated */
#define FICR_UNLOCKCODESTATE_CCKSTATE_NotActive (1UL) /*!< Unlock code not activated */

/* Bit 2 : State of service provider unlock code */
#define FICR_UNLOCKCODESTATE_SPCKSTATE_Pos (2UL) /*!< Position of SPCKSTATE field. */
#define FICR_UNLOCKCODESTATE_SPCKSTATE_Msk (0x1UL << FICR_UNLOCKCODESTATE_SPCKSTATE_Pos) /*!< Bit mask of SPCKSTATE field. */
#define FICR_UNLOCKCODESTATE_SPCKSTATE_Active (0UL) /*!< Unlock code activated */
#define FICR_UNLOCKCODESTATE_SPCKSTATE_NotActive (1UL) /*!< Unlock code not activated */

/* Bit 1 : State of network subset unlock code */
#define FICR_UNLOCKCODESTATE_NSCKSTATE_Pos (1UL) /*!< Position of NSCKSTATE field. */
#define FICR_UNLOCKCODESTATE_NSCKSTATE_Msk (0x1UL << FICR_UNLOCKCODESTATE_NSCKSTATE_Pos) /*!< Bit mask of NSCKSTATE field. */
#define FICR_UNLOCKCODESTATE_NSCKSTATE_Active (0UL) /*!< Unlock code activated */
#define FICR_UNLOCKCODESTATE_NSCKSTATE_NotActive (1UL) /*!< Unlock code not activated */

/* Bit 0 : State of network unlock code */
#define FICR_UNLOCKCODESTATE_NCKSTATE_Pos (0UL) /*!< Position of NCKSTATE field. */
#define FICR_UNLOCKCODESTATE_NCKSTATE_Msk (0x1UL << FICR_UNLOCKCODESTATE_NCKSTATE_Pos) /*!< Bit mask of NCKSTATE field. */
#define FICR_UNLOCKCODESTATE_NCKSTATE_Active (0UL) /*!< Unlock code activated */
#define FICR_UNLOCKCODESTATE_NCKSTATE_NotActive (1UL) /*!< Unlock code not activated */

/* Register: FICR_SIMLOCKDISABLE */
/* Description: SIM lock controls for each lock level. 
                Disabling removes lock permanently */

/* Bit 4 : SIM/USIM lock control */
#define FICR_SIMLOCKDISABLE_PCKDISABLING_Pos (4UL) /*!< Position of PCKDISABLING field. */
#define FICR_SIMLOCKDISABLE_PCKDISABLING_Msk (0x1UL << FICR_SIMLOCKDISABLE_PCKDISABLING_Pos) /*!< Bit mask of PCKDISABLING field. */
#define FICR_SIMLOCKDISABLE_PCKDISABLING_Disabled (0UL) /*!< Lock disabled */
#define FICR_SIMLOCKDISABLE_PCKDISABLING_NotDisabled (1UL) /*!< Lock not disabled */

/* Bit 3 : Corporate lock control */
#define FICR_SIMLOCKDISABLE_CCKDISABLING_Pos (3UL) /*!< Position of CCKDISABLING field. */
#define FICR_SIMLOCKDISABLE_CCKDISABLING_Msk (0x1UL << FICR_SIMLOCKDISABLE_CCKDISABLING_Pos) /*!< Bit mask of CCKDISABLING field. */
#define FICR_SIMLOCKDISABLE_CCKDISABLING_Disabled (0UL) /*!< Lock disabled */
#define FICR_SIMLOCKDISABLE_CCKDISABLING_NotDisabled (1UL) /*!< Lock not disabled */

/* Bit 2 : Service provider lock control */
#define FICR_SIMLOCKDISABLE_SPCKDISABLING_Pos (2UL) /*!< Position of SPCKDISABLING field. */
#define FICR_SIMLOCKDISABLE_SPCKDISABLING_Msk (0x1UL << FICR_SIMLOCKDISABLE_SPCKDISABLING_Pos) /*!< Bit mask of SPCKDISABLING field. */
#define FICR_SIMLOCKDISABLE_SPCKDISABLING_Disabled (0UL) /*!< Lock disabled */
#define FICR_SIMLOCKDISABLE_SPCKDISABLING_NotDisabled (1UL) /*!< Lock not disabled */

/* Bit 1 : Network subset lock control */
#define FICR_SIMLOCKDISABLE_NSCKDISABLING_Pos (1UL) /*!< Position of NSCKDISABLING field. */
#define FICR_SIMLOCKDISABLE_NSCKDISABLING_Msk (0x1UL << FICR_SIMLOCKDISABLE_NSCKDISABLING_Pos) /*!< Bit mask of NSCKDISABLING field. */
#define FICR_SIMLOCKDISABLE_NSCKDISABLING_Disabled (0UL) /*!< Lock disabled */
#define FICR_SIMLOCKDISABLE_NSCKDISABLING_NotDisabled (1UL) /*!< Lock not disabled */

/* Bit 0 : Network lock control */
#define FICR_SIMLOCKDISABLE_NCKDISABLING_Pos (0UL) /*!< Position of NCKDISABLING field. */
#define FICR_SIMLOCKDISABLE_NCKDISABLING_Msk (0x1UL << FICR_SIMLOCKDISABLE_NCKDISABLING_Pos) /*!< Bit mask of NCKDISABLING field. */
#define FICR_SIMLOCKDISABLE_NCKDISABLING_Disabled (0UL) /*!< Lock disabled */
#define FICR_SIMLOCKDISABLE_NCKDISABLING_NotDisabled (1UL) /*!< Lock not disabled */

/* Register: FICR_SECMASTERKEY */
/* Description: Description collection: Secure master key n */

/* Bits 31..0 : Unique secure master key, word n, readable only by HW */
#define FICR_SECMASTERKEY_SECMASTERKEY_Pos (0UL) /*!< Position of SECMASTERKEY field. */
#define FICR_SECMASTERKEY_SECMASTERKEY_Msk (0xFFFFFFFFUL << FICR_SECMASTERKEY_SECMASTERKEY_Pos) /*!< Bit mask of SECMASTERKEY field. */


/* Peripheral: GPIOTE */
/* Description: GPIO Tasks and Events 0 */

/* Register: GPIOTE_TASKS_OUT */
/* Description: Description collection: Task for writing to pin specified in CONFIG[n].PSEL. Action on pin is configured in CONFIG[n].POLARITY. */

/* Bit 0 : Task for writing to pin specified in CONFIG[n].PSEL. Action on pin is configured in CONFIG[n].POLARITY. */
#define GPIOTE_TASKS_OUT_TASKS_OUT_Pos (0UL) /*!< Position of TASKS_OUT field. */
#define GPIOTE_TASKS_OUT_TASKS_OUT_Msk (0x1UL << GPIOTE_TASKS_OUT_TASKS_OUT_Pos) /*!< Bit mask of TASKS_OUT field. */
#define GPIOTE_TASKS_OUT_TASKS_OUT_Trigger (1UL) /*!< Trigger task */

/* Register: GPIOTE_TASKS_SET */
/* Description: Description collection: Task for writing to pin specified in CONFIG[n].PSEL. Action on pin is to set it high. */

/* Bit 0 : Task for writing to pin specified in CONFIG[n].PSEL. Action on pin is to set it high. */
#define GPIOTE_TASKS_SET_TASKS_SET_Pos (0UL) /*!< Position of TASKS_SET field. */
#define GPIOTE_TASKS_SET_TASKS_SET_Msk (0x1UL << GPIOTE_TASKS_SET_TASKS_SET_Pos) /*!< Bit mask of TASKS_SET field. */
#define GPIOTE_TASKS_SET_TASKS_SET_Trigger (1UL) /*!< Trigger task */

/* Register: GPIOTE_TASKS_CLR */
/* Description: Description collection: Task for writing to pin specified in CONFIG[n].PSEL. Action on pin is to set it low. */

/* Bit 0 : Task for writing to pin specified in CONFIG[n].PSEL. Action on pin is to set it low. */
#define GPIOTE_TASKS_CLR_TASKS_CLR_Pos (0UL) /*!< Position of TASKS_CLR field. */
#define GPIOTE_TASKS_CLR_TASKS_CLR_Msk (0x1UL << GPIOTE_TASKS_CLR_TASKS_CLR_Pos) /*!< Bit mask of TASKS_CLR field. */
#define GPIOTE_TASKS_CLR_TASKS_CLR_Trigger (1UL) /*!< Trigger task */

/* Register: GPIOTE_SUBSCRIBE_OUT */
/* Description: Subscribe configuration for TASKS_OUT */

/* Bit 31 : Channel the TASKS_OUT will subscribe to. */
#define GPIOTE_SUBSCRIBE_OUT_EN_Pos (31UL) /*!< Position of EN field. */
#define GPIOTE_SUBSCRIBE_OUT_EN_Msk (0x1UL << GPIOTE_SUBSCRIBE_OUT_EN_Pos) /*!< Bit mask of EN field. */
#define GPIOTE_SUBSCRIBE_OUT_EN_Disabled (0UL) /*!< Disable subscription */
#define GPIOTE_SUBSCRIBE_OUT_EN_Enabled (1UL) /*!< Enable subscription */

/* Bit 0 : Channel the TASKS_OUT will subscribe to. */
#define GPIOTE_SUBSCRIBE_OUT_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define GPIOTE_SUBSCRIBE_OUT_CHIDX_Msk (0x1UL << GPIOTE_SUBSCRIBE_OUT_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: GPIOTE_SUBSCRIBE_SET */
/* Description: Subscribe configuration for TASKS_SET */

/* Bit 31 : Channel the TASKS_SET will subscribe to. */
#define GPIOTE_SUBSCRIBE_SET_EN_Pos (31UL) /*!< Position of EN field. */
#define GPIOTE_SUBSCRIBE_SET_EN_Msk (0x1UL << GPIOTE_SUBSCRIBE_SET_EN_Pos) /*!< Bit mask of EN field. */
#define GPIOTE_SUBSCRIBE_SET_EN_Disabled (0UL) /*!< Disable subscription */
#define GPIOTE_SUBSCRIBE_SET_EN_Enabled (1UL) /*!< Enable subscription */

/* Bit 0 : Channel the TASKS_SET will subscribe to. */
#define GPIOTE_SUBSCRIBE_SET_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define GPIOTE_SUBSCRIBE_SET_CHIDX_Msk (0x1UL << GPIOTE_SUBSCRIBE_SET_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: GPIOTE_SUBSCRIBE_CLR */
/* Description: Subscribe configuration for TASKS_CLR */

/* Bit 31 : Channel the TASKS_CLR will subscribe to. */
#define GPIOTE_SUBSCRIBE_CLR_EN_Pos (31UL) /*!< Position of EN field. */
#define GPIOTE_SUBSCRIBE_CLR_EN_Msk (0x1UL << GPIOTE_SUBSCRIBE_CLR_EN_Pos) /*!< Bit mask of EN field. */
#define GPIOTE_SUBSCRIBE_CLR_EN_Disabled (0UL) /*!< Disable subscription */
#define GPIOTE_SUBSCRIBE_CLR_EN_Enabled (1UL) /*!< Enable subscription */

/* Bit 0 : Channel the TASKS_CLR will subscribe to. */
#define GPIOTE_SUBSCRIBE_CLR_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define GPIOTE_SUBSCRIBE_CLR_CHIDX_Msk (0x1UL << GPIOTE_SUBSCRIBE_CLR_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: GPIOTE_EVENTS_IN */
/* Description: Description collection: Event generated from pin specified in CONFIG[n].PSEL */

/* Bit 0 : Event generated from pin specified in CONFIG[n].PSEL */
#define GPIOTE_EVENTS_IN_EVENTS_IN_Pos (0UL) /*!< Position of EVENTS_IN field. */
#define GPIOTE_EVENTS_IN_EVENTS_IN_Msk (0x1UL << GPIOTE_EVENTS_IN_EVENTS_IN_Pos) /*!< Bit mask of EVENTS_IN field. */
#define GPIOTE_EVENTS_IN_EVENTS_IN_NotGenerated (0UL) /*!< Event not generated */
#define GPIOTE_EVENTS_IN_EVENTS_IN_Generated (1UL) /*!< Event generated */

/* Register: GPIOTE_EVENTS_PORT */
/* Description: Event generated from multiple input GPIO pins with SENSE mechanism enabled */

/* Bit 0 : Event generated from multiple input GPIO pins with SENSE mechanism enabled */
#define GPIOTE_EVENTS_PORT_EVENTS_PORT_Pos (0UL) /*!< Position of EVENTS_PORT field. */
#define GPIOTE_EVENTS_PORT_EVENTS_PORT_Msk (0x1UL << GPIOTE_EVENTS_PORT_EVENTS_PORT_Pos) /*!< Bit mask of EVENTS_PORT field. */
#define GPIOTE_EVENTS_PORT_EVENTS_PORT_NotGenerated (0UL) /*!< Event not generated */
#define GPIOTE_EVENTS_PORT_EVENTS_PORT_Generated (1UL) /*!< Event generated */

/* Register: GPIOTE_PUBLISH_IN */
/* Description: Publish configuration for EVENTS_IN */

/* Bit 31 : Channel the EVENTS_TICK will subscribe to. */
#define GPIOTE_PUBLISH_IN_EN_Pos (31UL) /*!< Position of EN field. */
#define GPIOTE_PUBLISH_IN_EN_Msk (0x1UL << GPIOTE_PUBLISH_IN_EN_Pos) /*!< Bit mask of EN field. */
#define GPIOTE_PUBLISH_IN_EN_Disabled (0UL) /*!< Disable subscription */
#define GPIOTE_PUBLISH_IN_EN_Enabled (1UL) /*!< Enable subscription */

/* Bit 0 : Channel the EVENTS_IN will subscribe to. */
#define GPIOTE_PUBLISH_IN_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define GPIOTE_PUBLISH_IN_CHIDX_Msk (0x1UL << GPIOTE_PUBLISH_IN_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: GPIOTE_PUBLISH_PORT */
/* Description: Publish configuration for EVENTS_IN */

/* Bit 31 : Channel the EVENTS_TICK will subscribe to. */
#define GPIOTE_PUBLISH_PORT_EN_Pos (31UL) /*!< Position of EN field. */
#define GPIOTE_PUBLISH_PORT_EN_Msk (0x1UL << GPIOTE_PUBLISH_PORT_EN_Pos) /*!< Bit mask of EN field. */
#define GPIOTE_PUBLISH_PORT_EN_Disabled (0UL) /*!< Disable subscription */
#define GPIOTE_PUBLISH_PORT_EN_Enabled (1UL) /*!< Enable subscription */

/* Bit 0 : Channel the EVENTS_IN will subscribe to. */
#define GPIOTE_PUBLISH_PORT_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define GPIOTE_PUBLISH_PORT_CHIDX_Msk (0x1UL << GPIOTE_PUBLISH_PORT_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: GPIOTE_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 31 : Enable or disable interrupt for event PORT */
#define GPIOTE_INTEN_PORT_Pos (31UL) /*!< Position of PORT field. */
#define GPIOTE_INTEN_PORT_Msk (0x1UL << GPIOTE_INTEN_PORT_Pos) /*!< Bit mask of PORT field. */
#define GPIOTE_INTEN_PORT_Disabled (0UL) /*!< Disable */
#define GPIOTE_INTEN_PORT_Enabled (1UL) /*!< Enable */

/* Bit 0 : Enable or disable interrupt for event IN[0] */
#define GPIOTE_INTEN_IN0_Pos (0UL) /*!< Position of IN0 field. */
#define GPIOTE_INTEN_IN0_Msk (0x1UL << GPIOTE_INTEN_IN0_Pos) /*!< Bit mask of IN0 field. */
#define GPIOTE_INTEN_IN0_Disabled (0UL) /*!< Disable */
#define GPIOTE_INTEN_IN0_Enabled (1UL) /*!< Enable */

/* Register: GPIOTE_INTENSET */
/* Description: Enable interrupt */

/* Bit 31 : Write '1' to enable interrupt for event PORT */
#define GPIOTE_INTENSET_PORT_Pos (31UL) /*!< Position of PORT field. */
#define GPIOTE_INTENSET_PORT_Msk (0x1UL << GPIOTE_INTENSET_PORT_Pos) /*!< Bit mask of PORT field. */
#define GPIOTE_INTENSET_PORT_Disabled (0UL) /*!< Read: Disabled */
#define GPIOTE_INTENSET_PORT_Enabled (1UL) /*!< Read: Enabled */
#define GPIOTE_INTENSET_PORT_Set (1UL) /*!< Enable */

/* Bit 0 : Write '1' to enable interrupt for event IN[0] */
#define GPIOTE_INTENSET_IN0_Pos (0UL) /*!< Position of IN0 field. */
#define GPIOTE_INTENSET_IN0_Msk (0x1UL << GPIOTE_INTENSET_IN0_Pos) /*!< Bit mask of IN0 field. */
#define GPIOTE_INTENSET_IN0_Disabled (0UL) /*!< Read: Disabled */
#define GPIOTE_INTENSET_IN0_Enabled (1UL) /*!< Read: Enabled */
#define GPIOTE_INTENSET_IN0_Set (1UL) /*!< Enable */

/* Register: GPIOTE_INTENCLR */
/* Description: Disable interrupt */

/* Bit 31 : Write '1' to disable interrupt for event PORT */
#define GPIOTE_INTENCLR_PORT_Pos (31UL) /*!< Position of PORT field. */
#define GPIOTE_INTENCLR_PORT_Msk (0x1UL << GPIOTE_INTENCLR_PORT_Pos) /*!< Bit mask of PORT field. */
#define GPIOTE_INTENCLR_PORT_Disabled (0UL) /*!< Read: Disabled */
#define GPIOTE_INTENCLR_PORT_Enabled (1UL) /*!< Read: Enabled */
#define GPIOTE_INTENCLR_PORT_Clear (1UL) /*!< Disable */

/* Bit 0 : Write '1' to disable interrupt for event IN[0] */
#define GPIOTE_INTENCLR_IN0_Pos (0UL) /*!< Position of IN0 field. */
#define GPIOTE_INTENCLR_IN0_Msk (0x1UL << GPIOTE_INTENCLR_IN0_Pos) /*!< Bit mask of IN0 field. */
#define GPIOTE_INTENCLR_IN0_Disabled (0UL) /*!< Read: Disabled */
#define GPIOTE_INTENCLR_IN0_Enabled (1UL) /*!< Read: Enabled */
#define GPIOTE_INTENCLR_IN0_Clear (1UL) /*!< Disable */

/* Register: GPIOTE_CONFIG */
/* Description: Description collection: Configuration for OUT[n], SET[n] and CLR[n] tasks and IN[n] event */

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

/* Bits 14..13 : Port number */
#define GPIOTE_CONFIG_PORT_Pos (13UL) /*!< Position of PORT field. */
#define GPIOTE_CONFIG_PORT_Msk (0x3UL << GPIOTE_CONFIG_PORT_Pos) /*!< Bit mask of PORT field. */

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
/* Description: Description collection: Debounce mode for GPIOTE channel n */

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


/* Peripheral: IPC */
/* Description: Inter Processor Communication */

/* Register: IPC_TASKS_SEND */
/* Description: Description collection: Trigger events on channel enabled in SEND_CNF[n]. */

/* Bit 0 : Trigger events on channel enabled in SEND_CNF[n]. */
#define IPC_TASKS_SEND_TASKS_SEND_Pos (0UL) /*!< Position of TASKS_SEND field. */
#define IPC_TASKS_SEND_TASKS_SEND_Msk (0x1UL << IPC_TASKS_SEND_TASKS_SEND_Pos) /*!< Bit mask of TASKS_SEND field. */
#define IPC_TASKS_SEND_TASKS_SEND_Trigger (1UL) /*!< Trigger task */

/* Register: IPC_EVENTS_RECEIVE */
/* Description: Description collection: Event received on one or more of the enabled channels in RECEIVE_CNF[n]. */

/* Bit 0 : Event received on one or more of the enabled channels in RECEIVE_CNF[n]. */
#define IPC_EVENTS_RECEIVE_EVENTS_RECEIVE_Pos (0UL) /*!< Position of EVENTS_RECEIVE field. */
#define IPC_EVENTS_RECEIVE_EVENTS_RECEIVE_Msk (0x1UL << IPC_EVENTS_RECEIVE_EVENTS_RECEIVE_Pos) /*!< Bit mask of EVENTS_RECEIVE field. */
#define IPC_EVENTS_RECEIVE_EVENTS_RECEIVE_NotGenerated (0UL) /*!< Event not generated */
#define IPC_EVENTS_RECEIVE_EVENTS_RECEIVE_Generated (1UL) /*!< Event generated */

/* Register: IPC_INTEN0 */
/* Description: Enable or disable interrupt */

/* Bit 4 : Enable or disable interrupt for event RECEIVE[4] */
#define IPC_INTEN0_RECEIVE4_Pos (4UL) /*!< Position of RECEIVE4 field. */
#define IPC_INTEN0_RECEIVE4_Msk (0x1UL << IPC_INTEN0_RECEIVE4_Pos) /*!< Bit mask of RECEIVE4 field. */
#define IPC_INTEN0_RECEIVE4_Disabled (0UL) /*!< Disable */
#define IPC_INTEN0_RECEIVE4_Enabled (1UL) /*!< Enable */

/* Bit 3 : Enable or disable interrupt for event RECEIVE[3] */
#define IPC_INTEN0_RECEIVE3_Pos (3UL) /*!< Position of RECEIVE3 field. */
#define IPC_INTEN0_RECEIVE3_Msk (0x1UL << IPC_INTEN0_RECEIVE3_Pos) /*!< Bit mask of RECEIVE3 field. */
#define IPC_INTEN0_RECEIVE3_Disabled (0UL) /*!< Disable */
#define IPC_INTEN0_RECEIVE3_Enabled (1UL) /*!< Enable */

/* Bit 2 : Enable or disable interrupt for event RECEIVE[2] */
#define IPC_INTEN0_RECEIVE2_Pos (2UL) /*!< Position of RECEIVE2 field. */
#define IPC_INTEN0_RECEIVE2_Msk (0x1UL << IPC_INTEN0_RECEIVE2_Pos) /*!< Bit mask of RECEIVE2 field. */
#define IPC_INTEN0_RECEIVE2_Disabled (0UL) /*!< Disable */
#define IPC_INTEN0_RECEIVE2_Enabled (1UL) /*!< Enable */

/* Bit 1 : Enable or disable interrupt for event RECEIVE[1] */
#define IPC_INTEN0_RECEIVE1_Pos (1UL) /*!< Position of RECEIVE1 field. */
#define IPC_INTEN0_RECEIVE1_Msk (0x1UL << IPC_INTEN0_RECEIVE1_Pos) /*!< Bit mask of RECEIVE1 field. */
#define IPC_INTEN0_RECEIVE1_Disabled (0UL) /*!< Disable */
#define IPC_INTEN0_RECEIVE1_Enabled (1UL) /*!< Enable */

/* Bit 0 : Enable or disable interrupt for event RECEIVE[0] */
#define IPC_INTEN0_RECEIVE0_Pos (0UL) /*!< Position of RECEIVE0 field. */
#define IPC_INTEN0_RECEIVE0_Msk (0x1UL << IPC_INTEN0_RECEIVE0_Pos) /*!< Bit mask of RECEIVE0 field. */
#define IPC_INTEN0_RECEIVE0_Disabled (0UL) /*!< Disable */
#define IPC_INTEN0_RECEIVE0_Enabled (1UL) /*!< Enable */

/* Register: IPC_INTENSET0 */
/* Description: Enable interrupt */

/* Bit 4 : Write '1' to enable interrupt for event RECEIVE[4] */
#define IPC_INTENSET0_RECEIVE4_Pos (4UL) /*!< Position of RECEIVE4 field. */
#define IPC_INTENSET0_RECEIVE4_Msk (0x1UL << IPC_INTENSET0_RECEIVE4_Pos) /*!< Bit mask of RECEIVE4 field. */
#define IPC_INTENSET0_RECEIVE4_Disabled (0UL) /*!< Read: Disabled */
#define IPC_INTENSET0_RECEIVE4_Enabled (1UL) /*!< Read: Enabled */
#define IPC_INTENSET0_RECEIVE4_Set (1UL) /*!< Enable */

/* Bit 3 : Write '1' to enable interrupt for event RECEIVE[3] */
#define IPC_INTENSET0_RECEIVE3_Pos (3UL) /*!< Position of RECEIVE3 field. */
#define IPC_INTENSET0_RECEIVE3_Msk (0x1UL << IPC_INTENSET0_RECEIVE3_Pos) /*!< Bit mask of RECEIVE3 field. */
#define IPC_INTENSET0_RECEIVE3_Disabled (0UL) /*!< Read: Disabled */
#define IPC_INTENSET0_RECEIVE3_Enabled (1UL) /*!< Read: Enabled */
#define IPC_INTENSET0_RECEIVE3_Set (1UL) /*!< Enable */

/* Bit 2 : Write '1' to enable interrupt for event RECEIVE[2] */
#define IPC_INTENSET0_RECEIVE2_Pos (2UL) /*!< Position of RECEIVE2 field. */
#define IPC_INTENSET0_RECEIVE2_Msk (0x1UL << IPC_INTENSET0_RECEIVE2_Pos) /*!< Bit mask of RECEIVE2 field. */
#define IPC_INTENSET0_RECEIVE2_Disabled (0UL) /*!< Read: Disabled */
#define IPC_INTENSET0_RECEIVE2_Enabled (1UL) /*!< Read: Enabled */
#define IPC_INTENSET0_RECEIVE2_Set (1UL) /*!< Enable */

/* Bit 1 : Write '1' to enable interrupt for event RECEIVE[1] */
#define IPC_INTENSET0_RECEIVE1_Pos (1UL) /*!< Position of RECEIVE1 field. */
#define IPC_INTENSET0_RECEIVE1_Msk (0x1UL << IPC_INTENSET0_RECEIVE1_Pos) /*!< Bit mask of RECEIVE1 field. */
#define IPC_INTENSET0_RECEIVE1_Disabled (0UL) /*!< Read: Disabled */
#define IPC_INTENSET0_RECEIVE1_Enabled (1UL) /*!< Read: Enabled */
#define IPC_INTENSET0_RECEIVE1_Set (1UL) /*!< Enable */

/* Bit 0 : Write '1' to enable interrupt for event RECEIVE[0] */
#define IPC_INTENSET0_RECEIVE0_Pos (0UL) /*!< Position of RECEIVE0 field. */
#define IPC_INTENSET0_RECEIVE0_Msk (0x1UL << IPC_INTENSET0_RECEIVE0_Pos) /*!< Bit mask of RECEIVE0 field. */
#define IPC_INTENSET0_RECEIVE0_Disabled (0UL) /*!< Read: Disabled */
#define IPC_INTENSET0_RECEIVE0_Enabled (1UL) /*!< Read: Enabled */
#define IPC_INTENSET0_RECEIVE0_Set (1UL) /*!< Enable */

/* Register: IPC_INTENCLR0 */
/* Description: Disable interrupt */

/* Bit 4 : Write '1' to disable interrupt for event RECEIVE[4] */
#define IPC_INTENCLR0_RECEIVE4_Pos (4UL) /*!< Position of RECEIVE4 field. */
#define IPC_INTENCLR0_RECEIVE4_Msk (0x1UL << IPC_INTENCLR0_RECEIVE4_Pos) /*!< Bit mask of RECEIVE4 field. */
#define IPC_INTENCLR0_RECEIVE4_Disabled (0UL) /*!< Read: Disabled */
#define IPC_INTENCLR0_RECEIVE4_Enabled (1UL) /*!< Read: Enabled */
#define IPC_INTENCLR0_RECEIVE4_Clear (1UL) /*!< Disable */

/* Bit 3 : Write '1' to disable interrupt for event RECEIVE[3] */
#define IPC_INTENCLR0_RECEIVE3_Pos (3UL) /*!< Position of RECEIVE3 field. */
#define IPC_INTENCLR0_RECEIVE3_Msk (0x1UL << IPC_INTENCLR0_RECEIVE3_Pos) /*!< Bit mask of RECEIVE3 field. */
#define IPC_INTENCLR0_RECEIVE3_Disabled (0UL) /*!< Read: Disabled */
#define IPC_INTENCLR0_RECEIVE3_Enabled (1UL) /*!< Read: Enabled */
#define IPC_INTENCLR0_RECEIVE3_Clear (1UL) /*!< Disable */

/* Bit 2 : Write '1' to disable interrupt for event RECEIVE[2] */
#define IPC_INTENCLR0_RECEIVE2_Pos (2UL) /*!< Position of RECEIVE2 field. */
#define IPC_INTENCLR0_RECEIVE2_Msk (0x1UL << IPC_INTENCLR0_RECEIVE2_Pos) /*!< Bit mask of RECEIVE2 field. */
#define IPC_INTENCLR0_RECEIVE2_Disabled (0UL) /*!< Read: Disabled */
#define IPC_INTENCLR0_RECEIVE2_Enabled (1UL) /*!< Read: Enabled */
#define IPC_INTENCLR0_RECEIVE2_Clear (1UL) /*!< Disable */

/* Bit 1 : Write '1' to disable interrupt for event RECEIVE[1] */
#define IPC_INTENCLR0_RECEIVE1_Pos (1UL) /*!< Position of RECEIVE1 field. */
#define IPC_INTENCLR0_RECEIVE1_Msk (0x1UL << IPC_INTENCLR0_RECEIVE1_Pos) /*!< Bit mask of RECEIVE1 field. */
#define IPC_INTENCLR0_RECEIVE1_Disabled (0UL) /*!< Read: Disabled */
#define IPC_INTENCLR0_RECEIVE1_Enabled (1UL) /*!< Read: Enabled */
#define IPC_INTENCLR0_RECEIVE1_Clear (1UL) /*!< Disable */

/* Bit 0 : Write '1' to disable interrupt for event RECEIVE[0] */
#define IPC_INTENCLR0_RECEIVE0_Pos (0UL) /*!< Position of RECEIVE0 field. */
#define IPC_INTENCLR0_RECEIVE0_Msk (0x1UL << IPC_INTENCLR0_RECEIVE0_Pos) /*!< Bit mask of RECEIVE0 field. */
#define IPC_INTENCLR0_RECEIVE0_Disabled (0UL) /*!< Read: Disabled */
#define IPC_INTENCLR0_RECEIVE0_Enabled (1UL) /*!< Read: Enabled */
#define IPC_INTENCLR0_RECEIVE0_Clear (1UL) /*!< Disable */

/* Register: IPC_INTPEND0 */
/* Description: Pending interrupts */

/* Bit 4 : Read pending status of interrupt for event RECEIVE[4] */
#define IPC_INTPEND0_RECEIVE4_Pos (4UL) /*!< Position of RECEIVE4 field. */
#define IPC_INTPEND0_RECEIVE4_Msk (0x1UL << IPC_INTPEND0_RECEIVE4_Pos) /*!< Bit mask of RECEIVE4 field. */
#define IPC_INTPEND0_RECEIVE4_NotPending (0UL) /*!< Read: Not pending */
#define IPC_INTPEND0_RECEIVE4_Pending (1UL) /*!< Read: Pending */

/* Bit 3 : Read pending status of interrupt for event RECEIVE[3] */
#define IPC_INTPEND0_RECEIVE3_Pos (3UL) /*!< Position of RECEIVE3 field. */
#define IPC_INTPEND0_RECEIVE3_Msk (0x1UL << IPC_INTPEND0_RECEIVE3_Pos) /*!< Bit mask of RECEIVE3 field. */
#define IPC_INTPEND0_RECEIVE3_NotPending (0UL) /*!< Read: Not pending */
#define IPC_INTPEND0_RECEIVE3_Pending (1UL) /*!< Read: Pending */

/* Bit 2 : Read pending status of interrupt for event RECEIVE[2] */
#define IPC_INTPEND0_RECEIVE2_Pos (2UL) /*!< Position of RECEIVE2 field. */
#define IPC_INTPEND0_RECEIVE2_Msk (0x1UL << IPC_INTPEND0_RECEIVE2_Pos) /*!< Bit mask of RECEIVE2 field. */
#define IPC_INTPEND0_RECEIVE2_NotPending (0UL) /*!< Read: Not pending */
#define IPC_INTPEND0_RECEIVE2_Pending (1UL) /*!< Read: Pending */

/* Bit 1 : Read pending status of interrupt for event RECEIVE[1] */
#define IPC_INTPEND0_RECEIVE1_Pos (1UL) /*!< Position of RECEIVE1 field. */
#define IPC_INTPEND0_RECEIVE1_Msk (0x1UL << IPC_INTPEND0_RECEIVE1_Pos) /*!< Bit mask of RECEIVE1 field. */
#define IPC_INTPEND0_RECEIVE1_NotPending (0UL) /*!< Read: Not pending */
#define IPC_INTPEND0_RECEIVE1_Pending (1UL) /*!< Read: Pending */

/* Bit 0 : Read pending status of interrupt for event RECEIVE[0] */
#define IPC_INTPEND0_RECEIVE0_Pos (0UL) /*!< Position of RECEIVE0 field. */
#define IPC_INTPEND0_RECEIVE0_Msk (0x1UL << IPC_INTPEND0_RECEIVE0_Pos) /*!< Bit mask of RECEIVE0 field. */
#define IPC_INTPEND0_RECEIVE0_NotPending (0UL) /*!< Read: Not pending */
#define IPC_INTPEND0_RECEIVE0_Pending (1UL) /*!< Read: Pending */

/* Register: IPC_INTEN1 */
/* Description: Enable or disable interrupt */

/* Bit 4 : Enable or disable interrupt for event RECEIVE[4] */
#define IPC_INTEN1_RECEIVE4_Pos (4UL) /*!< Position of RECEIVE4 field. */
#define IPC_INTEN1_RECEIVE4_Msk (0x1UL << IPC_INTEN1_RECEIVE4_Pos) /*!< Bit mask of RECEIVE4 field. */
#define IPC_INTEN1_RECEIVE4_Disabled (0UL) /*!< Disable */
#define IPC_INTEN1_RECEIVE4_Enabled (1UL) /*!< Enable */

/* Bit 3 : Enable or disable interrupt for event RECEIVE[3] */
#define IPC_INTEN1_RECEIVE3_Pos (3UL) /*!< Position of RECEIVE3 field. */
#define IPC_INTEN1_RECEIVE3_Msk (0x1UL << IPC_INTEN1_RECEIVE3_Pos) /*!< Bit mask of RECEIVE3 field. */
#define IPC_INTEN1_RECEIVE3_Disabled (0UL) /*!< Disable */
#define IPC_INTEN1_RECEIVE3_Enabled (1UL) /*!< Enable */

/* Bit 2 : Enable or disable interrupt for event RECEIVE[2] */
#define IPC_INTEN1_RECEIVE2_Pos (2UL) /*!< Position of RECEIVE2 field. */
#define IPC_INTEN1_RECEIVE2_Msk (0x1UL << IPC_INTEN1_RECEIVE2_Pos) /*!< Bit mask of RECEIVE2 field. */
#define IPC_INTEN1_RECEIVE2_Disabled (0UL) /*!< Disable */
#define IPC_INTEN1_RECEIVE2_Enabled (1UL) /*!< Enable */

/* Bit 1 : Enable or disable interrupt for event RECEIVE[1] */
#define IPC_INTEN1_RECEIVE1_Pos (1UL) /*!< Position of RECEIVE1 field. */
#define IPC_INTEN1_RECEIVE1_Msk (0x1UL << IPC_INTEN1_RECEIVE1_Pos) /*!< Bit mask of RECEIVE1 field. */
#define IPC_INTEN1_RECEIVE1_Disabled (0UL) /*!< Disable */
#define IPC_INTEN1_RECEIVE1_Enabled (1UL) /*!< Enable */

/* Bit 0 : Enable or disable interrupt for event RECEIVE[0] */
#define IPC_INTEN1_RECEIVE0_Pos (0UL) /*!< Position of RECEIVE0 field. */
#define IPC_INTEN1_RECEIVE0_Msk (0x1UL << IPC_INTEN1_RECEIVE0_Pos) /*!< Bit mask of RECEIVE0 field. */
#define IPC_INTEN1_RECEIVE0_Disabled (0UL) /*!< Disable */
#define IPC_INTEN1_RECEIVE0_Enabled (1UL) /*!< Enable */

/* Register: IPC_INTENSET1 */
/* Description: Enable interrupt */

/* Bit 4 : Write '1' to enable interrupt for event RECEIVE[4] */
#define IPC_INTENSET1_RECEIVE4_Pos (4UL) /*!< Position of RECEIVE4 field. */
#define IPC_INTENSET1_RECEIVE4_Msk (0x1UL << IPC_INTENSET1_RECEIVE4_Pos) /*!< Bit mask of RECEIVE4 field. */
#define IPC_INTENSET1_RECEIVE4_Disabled (0UL) /*!< Read: Disabled */
#define IPC_INTENSET1_RECEIVE4_Enabled (1UL) /*!< Read: Enabled */
#define IPC_INTENSET1_RECEIVE4_Set (1UL) /*!< Enable */

/* Bit 3 : Write '1' to enable interrupt for event RECEIVE[3] */
#define IPC_INTENSET1_RECEIVE3_Pos (3UL) /*!< Position of RECEIVE3 field. */
#define IPC_INTENSET1_RECEIVE3_Msk (0x1UL << IPC_INTENSET1_RECEIVE3_Pos) /*!< Bit mask of RECEIVE3 field. */
#define IPC_INTENSET1_RECEIVE3_Disabled (0UL) /*!< Read: Disabled */
#define IPC_INTENSET1_RECEIVE3_Enabled (1UL) /*!< Read: Enabled */
#define IPC_INTENSET1_RECEIVE3_Set (1UL) /*!< Enable */

/* Bit 2 : Write '1' to enable interrupt for event RECEIVE[2] */
#define IPC_INTENSET1_RECEIVE2_Pos (2UL) /*!< Position of RECEIVE2 field. */
#define IPC_INTENSET1_RECEIVE2_Msk (0x1UL << IPC_INTENSET1_RECEIVE2_Pos) /*!< Bit mask of RECEIVE2 field. */
#define IPC_INTENSET1_RECEIVE2_Disabled (0UL) /*!< Read: Disabled */
#define IPC_INTENSET1_RECEIVE2_Enabled (1UL) /*!< Read: Enabled */
#define IPC_INTENSET1_RECEIVE2_Set (1UL) /*!< Enable */

/* Bit 1 : Write '1' to enable interrupt for event RECEIVE[1] */
#define IPC_INTENSET1_RECEIVE1_Pos (1UL) /*!< Position of RECEIVE1 field. */
#define IPC_INTENSET1_RECEIVE1_Msk (0x1UL << IPC_INTENSET1_RECEIVE1_Pos) /*!< Bit mask of RECEIVE1 field. */
#define IPC_INTENSET1_RECEIVE1_Disabled (0UL) /*!< Read: Disabled */
#define IPC_INTENSET1_RECEIVE1_Enabled (1UL) /*!< Read: Enabled */
#define IPC_INTENSET1_RECEIVE1_Set (1UL) /*!< Enable */

/* Bit 0 : Write '1' to enable interrupt for event RECEIVE[0] */
#define IPC_INTENSET1_RECEIVE0_Pos (0UL) /*!< Position of RECEIVE0 field. */
#define IPC_INTENSET1_RECEIVE0_Msk (0x1UL << IPC_INTENSET1_RECEIVE0_Pos) /*!< Bit mask of RECEIVE0 field. */
#define IPC_INTENSET1_RECEIVE0_Disabled (0UL) /*!< Read: Disabled */
#define IPC_INTENSET1_RECEIVE0_Enabled (1UL) /*!< Read: Enabled */
#define IPC_INTENSET1_RECEIVE0_Set (1UL) /*!< Enable */

/* Register: IPC_INTENCLR1 */
/* Description: Disable interrupt */

/* Bit 4 : Write '1' to disable interrupt for event RECEIVE[4] */
#define IPC_INTENCLR1_RECEIVE4_Pos (4UL) /*!< Position of RECEIVE4 field. */
#define IPC_INTENCLR1_RECEIVE4_Msk (0x1UL << IPC_INTENCLR1_RECEIVE4_Pos) /*!< Bit mask of RECEIVE4 field. */
#define IPC_INTENCLR1_RECEIVE4_Disabled (0UL) /*!< Read: Disabled */
#define IPC_INTENCLR1_RECEIVE4_Enabled (1UL) /*!< Read: Enabled */
#define IPC_INTENCLR1_RECEIVE4_Clear (1UL) /*!< Disable */

/* Bit 3 : Write '1' to disable interrupt for event RECEIVE[3] */
#define IPC_INTENCLR1_RECEIVE3_Pos (3UL) /*!< Position of RECEIVE3 field. */
#define IPC_INTENCLR1_RECEIVE3_Msk (0x1UL << IPC_INTENCLR1_RECEIVE3_Pos) /*!< Bit mask of RECEIVE3 field. */
#define IPC_INTENCLR1_RECEIVE3_Disabled (0UL) /*!< Read: Disabled */
#define IPC_INTENCLR1_RECEIVE3_Enabled (1UL) /*!< Read: Enabled */
#define IPC_INTENCLR1_RECEIVE3_Clear (1UL) /*!< Disable */

/* Bit 2 : Write '1' to disable interrupt for event RECEIVE[2] */
#define IPC_INTENCLR1_RECEIVE2_Pos (2UL) /*!< Position of RECEIVE2 field. */
#define IPC_INTENCLR1_RECEIVE2_Msk (0x1UL << IPC_INTENCLR1_RECEIVE2_Pos) /*!< Bit mask of RECEIVE2 field. */
#define IPC_INTENCLR1_RECEIVE2_Disabled (0UL) /*!< Read: Disabled */
#define IPC_INTENCLR1_RECEIVE2_Enabled (1UL) /*!< Read: Enabled */
#define IPC_INTENCLR1_RECEIVE2_Clear (1UL) /*!< Disable */

/* Bit 1 : Write '1' to disable interrupt for event RECEIVE[1] */
#define IPC_INTENCLR1_RECEIVE1_Pos (1UL) /*!< Position of RECEIVE1 field. */
#define IPC_INTENCLR1_RECEIVE1_Msk (0x1UL << IPC_INTENCLR1_RECEIVE1_Pos) /*!< Bit mask of RECEIVE1 field. */
#define IPC_INTENCLR1_RECEIVE1_Disabled (0UL) /*!< Read: Disabled */
#define IPC_INTENCLR1_RECEIVE1_Enabled (1UL) /*!< Read: Enabled */
#define IPC_INTENCLR1_RECEIVE1_Clear (1UL) /*!< Disable */

/* Bit 0 : Write '1' to disable interrupt for event RECEIVE[0] */
#define IPC_INTENCLR1_RECEIVE0_Pos (0UL) /*!< Position of RECEIVE0 field. */
#define IPC_INTENCLR1_RECEIVE0_Msk (0x1UL << IPC_INTENCLR1_RECEIVE0_Pos) /*!< Bit mask of RECEIVE0 field. */
#define IPC_INTENCLR1_RECEIVE0_Disabled (0UL) /*!< Read: Disabled */
#define IPC_INTENCLR1_RECEIVE0_Enabled (1UL) /*!< Read: Enabled */
#define IPC_INTENCLR1_RECEIVE0_Clear (1UL) /*!< Disable */

/* Register: IPC_INTPEND1 */
/* Description: Pending interrupts */

/* Bit 4 : Read pending status of interrupt for event RECEIVE[4] */
#define IPC_INTPEND1_RECEIVE4_Pos (4UL) /*!< Position of RECEIVE4 field. */
#define IPC_INTPEND1_RECEIVE4_Msk (0x1UL << IPC_INTPEND1_RECEIVE4_Pos) /*!< Bit mask of RECEIVE4 field. */
#define IPC_INTPEND1_RECEIVE4_NotPending (0UL) /*!< Read: Not pending */
#define IPC_INTPEND1_RECEIVE4_Pending (1UL) /*!< Read: Pending */

/* Bit 3 : Read pending status of interrupt for event RECEIVE[3] */
#define IPC_INTPEND1_RECEIVE3_Pos (3UL) /*!< Position of RECEIVE3 field. */
#define IPC_INTPEND1_RECEIVE3_Msk (0x1UL << IPC_INTPEND1_RECEIVE3_Pos) /*!< Bit mask of RECEIVE3 field. */
#define IPC_INTPEND1_RECEIVE3_NotPending (0UL) /*!< Read: Not pending */
#define IPC_INTPEND1_RECEIVE3_Pending (1UL) /*!< Read: Pending */

/* Bit 2 : Read pending status of interrupt for event RECEIVE[2] */
#define IPC_INTPEND1_RECEIVE2_Pos (2UL) /*!< Position of RECEIVE2 field. */
#define IPC_INTPEND1_RECEIVE2_Msk (0x1UL << IPC_INTPEND1_RECEIVE2_Pos) /*!< Bit mask of RECEIVE2 field. */
#define IPC_INTPEND1_RECEIVE2_NotPending (0UL) /*!< Read: Not pending */
#define IPC_INTPEND1_RECEIVE2_Pending (1UL) /*!< Read: Pending */

/* Bit 1 : Read pending status of interrupt for event RECEIVE[1] */
#define IPC_INTPEND1_RECEIVE1_Pos (1UL) /*!< Position of RECEIVE1 field. */
#define IPC_INTPEND1_RECEIVE1_Msk (0x1UL << IPC_INTPEND1_RECEIVE1_Pos) /*!< Bit mask of RECEIVE1 field. */
#define IPC_INTPEND1_RECEIVE1_NotPending (0UL) /*!< Read: Not pending */
#define IPC_INTPEND1_RECEIVE1_Pending (1UL) /*!< Read: Pending */

/* Bit 0 : Read pending status of interrupt for event RECEIVE[0] */
#define IPC_INTPEND1_RECEIVE0_Pos (0UL) /*!< Position of RECEIVE0 field. */
#define IPC_INTPEND1_RECEIVE0_Msk (0x1UL << IPC_INTPEND1_RECEIVE0_Pos) /*!< Bit mask of RECEIVE0 field. */
#define IPC_INTPEND1_RECEIVE0_NotPending (0UL) /*!< Read: Not pending */
#define IPC_INTPEND1_RECEIVE0_Pending (1UL) /*!< Read: Pending */

/* Register: IPC_INTEN2 */
/* Description: Enable or disable interrupt */

/* Bit 4 : Enable or disable interrupt for event RECEIVE[4] */
#define IPC_INTEN2_RECEIVE4_Pos (4UL) /*!< Position of RECEIVE4 field. */
#define IPC_INTEN2_RECEIVE4_Msk (0x1UL << IPC_INTEN2_RECEIVE4_Pos) /*!< Bit mask of RECEIVE4 field. */
#define IPC_INTEN2_RECEIVE4_Disabled (0UL) /*!< Disable */
#define IPC_INTEN2_RECEIVE4_Enabled (1UL) /*!< Enable */

/* Bit 3 : Enable or disable interrupt for event RECEIVE[3] */
#define IPC_INTEN2_RECEIVE3_Pos (3UL) /*!< Position of RECEIVE3 field. */
#define IPC_INTEN2_RECEIVE3_Msk (0x1UL << IPC_INTEN2_RECEIVE3_Pos) /*!< Bit mask of RECEIVE3 field. */
#define IPC_INTEN2_RECEIVE3_Disabled (0UL) /*!< Disable */
#define IPC_INTEN2_RECEIVE3_Enabled (1UL) /*!< Enable */

/* Bit 2 : Enable or disable interrupt for event RECEIVE[2] */
#define IPC_INTEN2_RECEIVE2_Pos (2UL) /*!< Position of RECEIVE2 field. */
#define IPC_INTEN2_RECEIVE2_Msk (0x1UL << IPC_INTEN2_RECEIVE2_Pos) /*!< Bit mask of RECEIVE2 field. */
#define IPC_INTEN2_RECEIVE2_Disabled (0UL) /*!< Disable */
#define IPC_INTEN2_RECEIVE2_Enabled (1UL) /*!< Enable */

/* Bit 1 : Enable or disable interrupt for event RECEIVE[1] */
#define IPC_INTEN2_RECEIVE1_Pos (1UL) /*!< Position of RECEIVE1 field. */
#define IPC_INTEN2_RECEIVE1_Msk (0x1UL << IPC_INTEN2_RECEIVE1_Pos) /*!< Bit mask of RECEIVE1 field. */
#define IPC_INTEN2_RECEIVE1_Disabled (0UL) /*!< Disable */
#define IPC_INTEN2_RECEIVE1_Enabled (1UL) /*!< Enable */

/* Bit 0 : Enable or disable interrupt for event RECEIVE[0] */
#define IPC_INTEN2_RECEIVE0_Pos (0UL) /*!< Position of RECEIVE0 field. */
#define IPC_INTEN2_RECEIVE0_Msk (0x1UL << IPC_INTEN2_RECEIVE0_Pos) /*!< Bit mask of RECEIVE0 field. */
#define IPC_INTEN2_RECEIVE0_Disabled (0UL) /*!< Disable */
#define IPC_INTEN2_RECEIVE0_Enabled (1UL) /*!< Enable */

/* Register: IPC_INTENSET2 */
/* Description: Enable interrupt */

/* Bit 4 : Write '1' to enable interrupt for event RECEIVE[4] */
#define IPC_INTENSET2_RECEIVE4_Pos (4UL) /*!< Position of RECEIVE4 field. */
#define IPC_INTENSET2_RECEIVE4_Msk (0x1UL << IPC_INTENSET2_RECEIVE4_Pos) /*!< Bit mask of RECEIVE4 field. */
#define IPC_INTENSET2_RECEIVE4_Disabled (0UL) /*!< Read: Disabled */
#define IPC_INTENSET2_RECEIVE4_Enabled (1UL) /*!< Read: Enabled */
#define IPC_INTENSET2_RECEIVE4_Set (1UL) /*!< Enable */

/* Bit 3 : Write '1' to enable interrupt for event RECEIVE[3] */
#define IPC_INTENSET2_RECEIVE3_Pos (3UL) /*!< Position of RECEIVE3 field. */
#define IPC_INTENSET2_RECEIVE3_Msk (0x1UL << IPC_INTENSET2_RECEIVE3_Pos) /*!< Bit mask of RECEIVE3 field. */
#define IPC_INTENSET2_RECEIVE3_Disabled (0UL) /*!< Read: Disabled */
#define IPC_INTENSET2_RECEIVE3_Enabled (1UL) /*!< Read: Enabled */
#define IPC_INTENSET2_RECEIVE3_Set (1UL) /*!< Enable */

/* Bit 2 : Write '1' to enable interrupt for event RECEIVE[2] */
#define IPC_INTENSET2_RECEIVE2_Pos (2UL) /*!< Position of RECEIVE2 field. */
#define IPC_INTENSET2_RECEIVE2_Msk (0x1UL << IPC_INTENSET2_RECEIVE2_Pos) /*!< Bit mask of RECEIVE2 field. */
#define IPC_INTENSET2_RECEIVE2_Disabled (0UL) /*!< Read: Disabled */
#define IPC_INTENSET2_RECEIVE2_Enabled (1UL) /*!< Read: Enabled */
#define IPC_INTENSET2_RECEIVE2_Set (1UL) /*!< Enable */

/* Bit 1 : Write '1' to enable interrupt for event RECEIVE[1] */
#define IPC_INTENSET2_RECEIVE1_Pos (1UL) /*!< Position of RECEIVE1 field. */
#define IPC_INTENSET2_RECEIVE1_Msk (0x1UL << IPC_INTENSET2_RECEIVE1_Pos) /*!< Bit mask of RECEIVE1 field. */
#define IPC_INTENSET2_RECEIVE1_Disabled (0UL) /*!< Read: Disabled */
#define IPC_INTENSET2_RECEIVE1_Enabled (1UL) /*!< Read: Enabled */
#define IPC_INTENSET2_RECEIVE1_Set (1UL) /*!< Enable */

/* Bit 0 : Write '1' to enable interrupt for event RECEIVE[0] */
#define IPC_INTENSET2_RECEIVE0_Pos (0UL) /*!< Position of RECEIVE0 field. */
#define IPC_INTENSET2_RECEIVE0_Msk (0x1UL << IPC_INTENSET2_RECEIVE0_Pos) /*!< Bit mask of RECEIVE0 field. */
#define IPC_INTENSET2_RECEIVE0_Disabled (0UL) /*!< Read: Disabled */
#define IPC_INTENSET2_RECEIVE0_Enabled (1UL) /*!< Read: Enabled */
#define IPC_INTENSET2_RECEIVE0_Set (1UL) /*!< Enable */

/* Register: IPC_INTENCLR2 */
/* Description: Disable interrupt */

/* Bit 4 : Write '1' to disable interrupt for event RECEIVE[4] */
#define IPC_INTENCLR2_RECEIVE4_Pos (4UL) /*!< Position of RECEIVE4 field. */
#define IPC_INTENCLR2_RECEIVE4_Msk (0x1UL << IPC_INTENCLR2_RECEIVE4_Pos) /*!< Bit mask of RECEIVE4 field. */
#define IPC_INTENCLR2_RECEIVE4_Disabled (0UL) /*!< Read: Disabled */
#define IPC_INTENCLR2_RECEIVE4_Enabled (1UL) /*!< Read: Enabled */
#define IPC_INTENCLR2_RECEIVE4_Clear (1UL) /*!< Disable */

/* Bit 3 : Write '1' to disable interrupt for event RECEIVE[3] */
#define IPC_INTENCLR2_RECEIVE3_Pos (3UL) /*!< Position of RECEIVE3 field. */
#define IPC_INTENCLR2_RECEIVE3_Msk (0x1UL << IPC_INTENCLR2_RECEIVE3_Pos) /*!< Bit mask of RECEIVE3 field. */
#define IPC_INTENCLR2_RECEIVE3_Disabled (0UL) /*!< Read: Disabled */
#define IPC_INTENCLR2_RECEIVE3_Enabled (1UL) /*!< Read: Enabled */
#define IPC_INTENCLR2_RECEIVE3_Clear (1UL) /*!< Disable */

/* Bit 2 : Write '1' to disable interrupt for event RECEIVE[2] */
#define IPC_INTENCLR2_RECEIVE2_Pos (2UL) /*!< Position of RECEIVE2 field. */
#define IPC_INTENCLR2_RECEIVE2_Msk (0x1UL << IPC_INTENCLR2_RECEIVE2_Pos) /*!< Bit mask of RECEIVE2 field. */
#define IPC_INTENCLR2_RECEIVE2_Disabled (0UL) /*!< Read: Disabled */
#define IPC_INTENCLR2_RECEIVE2_Enabled (1UL) /*!< Read: Enabled */
#define IPC_INTENCLR2_RECEIVE2_Clear (1UL) /*!< Disable */

/* Bit 1 : Write '1' to disable interrupt for event RECEIVE[1] */
#define IPC_INTENCLR2_RECEIVE1_Pos (1UL) /*!< Position of RECEIVE1 field. */
#define IPC_INTENCLR2_RECEIVE1_Msk (0x1UL << IPC_INTENCLR2_RECEIVE1_Pos) /*!< Bit mask of RECEIVE1 field. */
#define IPC_INTENCLR2_RECEIVE1_Disabled (0UL) /*!< Read: Disabled */
#define IPC_INTENCLR2_RECEIVE1_Enabled (1UL) /*!< Read: Enabled */
#define IPC_INTENCLR2_RECEIVE1_Clear (1UL) /*!< Disable */

/* Bit 0 : Write '1' to disable interrupt for event RECEIVE[0] */
#define IPC_INTENCLR2_RECEIVE0_Pos (0UL) /*!< Position of RECEIVE0 field. */
#define IPC_INTENCLR2_RECEIVE0_Msk (0x1UL << IPC_INTENCLR2_RECEIVE0_Pos) /*!< Bit mask of RECEIVE0 field. */
#define IPC_INTENCLR2_RECEIVE0_Disabled (0UL) /*!< Read: Disabled */
#define IPC_INTENCLR2_RECEIVE0_Enabled (1UL) /*!< Read: Enabled */
#define IPC_INTENCLR2_RECEIVE0_Clear (1UL) /*!< Disable */

/* Register: IPC_INTPEND2 */
/* Description: Pending interrupts */

/* Bit 4 : Read pending status of interrupt for event RECEIVE[4] */
#define IPC_INTPEND2_RECEIVE4_Pos (4UL) /*!< Position of RECEIVE4 field. */
#define IPC_INTPEND2_RECEIVE4_Msk (0x1UL << IPC_INTPEND2_RECEIVE4_Pos) /*!< Bit mask of RECEIVE4 field. */
#define IPC_INTPEND2_RECEIVE4_NotPending (0UL) /*!< Read: Not pending */
#define IPC_INTPEND2_RECEIVE4_Pending (1UL) /*!< Read: Pending */

/* Bit 3 : Read pending status of interrupt for event RECEIVE[3] */
#define IPC_INTPEND2_RECEIVE3_Pos (3UL) /*!< Position of RECEIVE3 field. */
#define IPC_INTPEND2_RECEIVE3_Msk (0x1UL << IPC_INTPEND2_RECEIVE3_Pos) /*!< Bit mask of RECEIVE3 field. */
#define IPC_INTPEND2_RECEIVE3_NotPending (0UL) /*!< Read: Not pending */
#define IPC_INTPEND2_RECEIVE3_Pending (1UL) /*!< Read: Pending */

/* Bit 2 : Read pending status of interrupt for event RECEIVE[2] */
#define IPC_INTPEND2_RECEIVE2_Pos (2UL) /*!< Position of RECEIVE2 field. */
#define IPC_INTPEND2_RECEIVE2_Msk (0x1UL << IPC_INTPEND2_RECEIVE2_Pos) /*!< Bit mask of RECEIVE2 field. */
#define IPC_INTPEND2_RECEIVE2_NotPending (0UL) /*!< Read: Not pending */
#define IPC_INTPEND2_RECEIVE2_Pending (1UL) /*!< Read: Pending */

/* Bit 1 : Read pending status of interrupt for event RECEIVE[1] */
#define IPC_INTPEND2_RECEIVE1_Pos (1UL) /*!< Position of RECEIVE1 field. */
#define IPC_INTPEND2_RECEIVE1_Msk (0x1UL << IPC_INTPEND2_RECEIVE1_Pos) /*!< Bit mask of RECEIVE1 field. */
#define IPC_INTPEND2_RECEIVE1_NotPending (0UL) /*!< Read: Not pending */
#define IPC_INTPEND2_RECEIVE1_Pending (1UL) /*!< Read: Pending */

/* Bit 0 : Read pending status of interrupt for event RECEIVE[0] */
#define IPC_INTPEND2_RECEIVE0_Pos (0UL) /*!< Position of RECEIVE0 field. */
#define IPC_INTPEND2_RECEIVE0_Msk (0x1UL << IPC_INTPEND2_RECEIVE0_Pos) /*!< Bit mask of RECEIVE0 field. */
#define IPC_INTPEND2_RECEIVE0_NotPending (0UL) /*!< Read: Not pending */
#define IPC_INTPEND2_RECEIVE0_Pending (1UL) /*!< Read: Pending */

/* Register: IPC_SEND_CNF */
/* Description: Description collection: Send event configuration for TASKS_SEND[n]. */

/* Bit 16 : Enable broadcasting on channel 16. */
#define IPC_SEND_CNF_CHEN16_Pos (16UL) /*!< Position of CHEN16 field. */
#define IPC_SEND_CNF_CHEN16_Msk (0x1UL << IPC_SEND_CNF_CHEN16_Pos) /*!< Bit mask of CHEN16 field. */
#define IPC_SEND_CNF_CHEN16_Disable (0UL) /*!< Disable broadcast. */
#define IPC_SEND_CNF_CHEN16_Enable (1UL) /*!< Enable broadcast. */

/* Bit 15 : Enable broadcasting on channel 15. */
#define IPC_SEND_CNF_CHEN15_Pos (15UL) /*!< Position of CHEN15 field. */
#define IPC_SEND_CNF_CHEN15_Msk (0x1UL << IPC_SEND_CNF_CHEN15_Pos) /*!< Bit mask of CHEN15 field. */
#define IPC_SEND_CNF_CHEN15_Disable (0UL) /*!< Disable broadcast. */
#define IPC_SEND_CNF_CHEN15_Enable (1UL) /*!< Enable broadcast. */

/* Bit 14 : Enable broadcasting on channel 14. */
#define IPC_SEND_CNF_CHEN14_Pos (14UL) /*!< Position of CHEN14 field. */
#define IPC_SEND_CNF_CHEN14_Msk (0x1UL << IPC_SEND_CNF_CHEN14_Pos) /*!< Bit mask of CHEN14 field. */
#define IPC_SEND_CNF_CHEN14_Disable (0UL) /*!< Disable broadcast. */
#define IPC_SEND_CNF_CHEN14_Enable (1UL) /*!< Enable broadcast. */

/* Bit 13 : Enable broadcasting on channel 13. */
#define IPC_SEND_CNF_CHEN13_Pos (13UL) /*!< Position of CHEN13 field. */
#define IPC_SEND_CNF_CHEN13_Msk (0x1UL << IPC_SEND_CNF_CHEN13_Pos) /*!< Bit mask of CHEN13 field. */
#define IPC_SEND_CNF_CHEN13_Disable (0UL) /*!< Disable broadcast. */
#define IPC_SEND_CNF_CHEN13_Enable (1UL) /*!< Enable broadcast. */

/* Bit 12 : Enable broadcasting on channel 12. */
#define IPC_SEND_CNF_CHEN12_Pos (12UL) /*!< Position of CHEN12 field. */
#define IPC_SEND_CNF_CHEN12_Msk (0x1UL << IPC_SEND_CNF_CHEN12_Pos) /*!< Bit mask of CHEN12 field. */
#define IPC_SEND_CNF_CHEN12_Disable (0UL) /*!< Disable broadcast. */
#define IPC_SEND_CNF_CHEN12_Enable (1UL) /*!< Enable broadcast. */

/* Bit 11 : Enable broadcasting on channel 11. */
#define IPC_SEND_CNF_CHEN11_Pos (11UL) /*!< Position of CHEN11 field. */
#define IPC_SEND_CNF_CHEN11_Msk (0x1UL << IPC_SEND_CNF_CHEN11_Pos) /*!< Bit mask of CHEN11 field. */
#define IPC_SEND_CNF_CHEN11_Disable (0UL) /*!< Disable broadcast. */
#define IPC_SEND_CNF_CHEN11_Enable (1UL) /*!< Enable broadcast. */

/* Bit 10 : Enable broadcasting on channel 10. */
#define IPC_SEND_CNF_CHEN10_Pos (10UL) /*!< Position of CHEN10 field. */
#define IPC_SEND_CNF_CHEN10_Msk (0x1UL << IPC_SEND_CNF_CHEN10_Pos) /*!< Bit mask of CHEN10 field. */
#define IPC_SEND_CNF_CHEN10_Disable (0UL) /*!< Disable broadcast. */
#define IPC_SEND_CNF_CHEN10_Enable (1UL) /*!< Enable broadcast. */

/* Bit 9 : Enable broadcasting on channel 9. */
#define IPC_SEND_CNF_CHEN9_Pos (9UL) /*!< Position of CHEN9 field. */
#define IPC_SEND_CNF_CHEN9_Msk (0x1UL << IPC_SEND_CNF_CHEN9_Pos) /*!< Bit mask of CHEN9 field. */
#define IPC_SEND_CNF_CHEN9_Disable (0UL) /*!< Disable broadcast. */
#define IPC_SEND_CNF_CHEN9_Enable (1UL) /*!< Enable broadcast. */

/* Bit 8 : Enable broadcasting on channel 8. */
#define IPC_SEND_CNF_CHEN8_Pos (8UL) /*!< Position of CHEN8 field. */
#define IPC_SEND_CNF_CHEN8_Msk (0x1UL << IPC_SEND_CNF_CHEN8_Pos) /*!< Bit mask of CHEN8 field. */
#define IPC_SEND_CNF_CHEN8_Disable (0UL) /*!< Disable broadcast. */
#define IPC_SEND_CNF_CHEN8_Enable (1UL) /*!< Enable broadcast. */

/* Bit 7 : Enable broadcasting on channel 7. */
#define IPC_SEND_CNF_CHEN7_Pos (7UL) /*!< Position of CHEN7 field. */
#define IPC_SEND_CNF_CHEN7_Msk (0x1UL << IPC_SEND_CNF_CHEN7_Pos) /*!< Bit mask of CHEN7 field. */
#define IPC_SEND_CNF_CHEN7_Disable (0UL) /*!< Disable broadcast. */
#define IPC_SEND_CNF_CHEN7_Enable (1UL) /*!< Enable broadcast. */

/* Bit 6 : Enable broadcasting on channel 6. */
#define IPC_SEND_CNF_CHEN6_Pos (6UL) /*!< Position of CHEN6 field. */
#define IPC_SEND_CNF_CHEN6_Msk (0x1UL << IPC_SEND_CNF_CHEN6_Pos) /*!< Bit mask of CHEN6 field. */
#define IPC_SEND_CNF_CHEN6_Disable (0UL) /*!< Disable broadcast. */
#define IPC_SEND_CNF_CHEN6_Enable (1UL) /*!< Enable broadcast. */

/* Bit 5 : Enable broadcasting on channel 5. */
#define IPC_SEND_CNF_CHEN5_Pos (5UL) /*!< Position of CHEN5 field. */
#define IPC_SEND_CNF_CHEN5_Msk (0x1UL << IPC_SEND_CNF_CHEN5_Pos) /*!< Bit mask of CHEN5 field. */
#define IPC_SEND_CNF_CHEN5_Disable (0UL) /*!< Disable broadcast. */
#define IPC_SEND_CNF_CHEN5_Enable (1UL) /*!< Enable broadcast. */

/* Bit 4 : Enable broadcasting on channel 4. */
#define IPC_SEND_CNF_CHEN4_Pos (4UL) /*!< Position of CHEN4 field. */
#define IPC_SEND_CNF_CHEN4_Msk (0x1UL << IPC_SEND_CNF_CHEN4_Pos) /*!< Bit mask of CHEN4 field. */
#define IPC_SEND_CNF_CHEN4_Disable (0UL) /*!< Disable broadcast. */
#define IPC_SEND_CNF_CHEN4_Enable (1UL) /*!< Enable broadcast. */

/* Bit 3 : Enable broadcasting on channel 3. */
#define IPC_SEND_CNF_CHEN3_Pos (3UL) /*!< Position of CHEN3 field. */
#define IPC_SEND_CNF_CHEN3_Msk (0x1UL << IPC_SEND_CNF_CHEN3_Pos) /*!< Bit mask of CHEN3 field. */
#define IPC_SEND_CNF_CHEN3_Disable (0UL) /*!< Disable broadcast. */
#define IPC_SEND_CNF_CHEN3_Enable (1UL) /*!< Enable broadcast. */

/* Bit 2 : Enable broadcasting on channel 2. */
#define IPC_SEND_CNF_CHEN2_Pos (2UL) /*!< Position of CHEN2 field. */
#define IPC_SEND_CNF_CHEN2_Msk (0x1UL << IPC_SEND_CNF_CHEN2_Pos) /*!< Bit mask of CHEN2 field. */
#define IPC_SEND_CNF_CHEN2_Disable (0UL) /*!< Disable broadcast. */
#define IPC_SEND_CNF_CHEN2_Enable (1UL) /*!< Enable broadcast. */

/* Bit 1 : Enable broadcasting on channel 1. */
#define IPC_SEND_CNF_CHEN1_Pos (1UL) /*!< Position of CHEN1 field. */
#define IPC_SEND_CNF_CHEN1_Msk (0x1UL << IPC_SEND_CNF_CHEN1_Pos) /*!< Bit mask of CHEN1 field. */
#define IPC_SEND_CNF_CHEN1_Disable (0UL) /*!< Disable broadcast. */
#define IPC_SEND_CNF_CHEN1_Enable (1UL) /*!< Enable broadcast. */

/* Bit 0 : Enable broadcasting on channel 0. */
#define IPC_SEND_CNF_CHEN0_Pos (0UL) /*!< Position of CHEN0 field. */
#define IPC_SEND_CNF_CHEN0_Msk (0x1UL << IPC_SEND_CNF_CHEN0_Pos) /*!< Bit mask of CHEN0 field. */
#define IPC_SEND_CNF_CHEN0_Disable (0UL) /*!< Disable broadcast. */
#define IPC_SEND_CNF_CHEN0_Enable (1UL) /*!< Enable broadcast. */

/* Register: IPC_RECEIVE_CNF */
/* Description: Description collection: Receive event configuration for EVENTS_RECEIVE[n]. */

/* Bit 16 : Enable subscription to channel 16. */
#define IPC_RECEIVE_CNF_CHEN16_Pos (16UL) /*!< Position of CHEN16 field. */
#define IPC_RECEIVE_CNF_CHEN16_Msk (0x1UL << IPC_RECEIVE_CNF_CHEN16_Pos) /*!< Bit mask of CHEN16 field. */
#define IPC_RECEIVE_CNF_CHEN16_Disable (0UL) /*!< Disable events. */
#define IPC_RECEIVE_CNF_CHEN16_Enable (1UL) /*!< Enable events. */

/* Bit 15 : Enable subscription to channel 15. */
#define IPC_RECEIVE_CNF_CHEN15_Pos (15UL) /*!< Position of CHEN15 field. */
#define IPC_RECEIVE_CNF_CHEN15_Msk (0x1UL << IPC_RECEIVE_CNF_CHEN15_Pos) /*!< Bit mask of CHEN15 field. */
#define IPC_RECEIVE_CNF_CHEN15_Disable (0UL) /*!< Disable events. */
#define IPC_RECEIVE_CNF_CHEN15_Enable (1UL) /*!< Enable events. */

/* Bit 14 : Enable subscription to channel 14. */
#define IPC_RECEIVE_CNF_CHEN14_Pos (14UL) /*!< Position of CHEN14 field. */
#define IPC_RECEIVE_CNF_CHEN14_Msk (0x1UL << IPC_RECEIVE_CNF_CHEN14_Pos) /*!< Bit mask of CHEN14 field. */
#define IPC_RECEIVE_CNF_CHEN14_Disable (0UL) /*!< Disable events. */
#define IPC_RECEIVE_CNF_CHEN14_Enable (1UL) /*!< Enable events. */

/* Bit 13 : Enable subscription to channel 13. */
#define IPC_RECEIVE_CNF_CHEN13_Pos (13UL) /*!< Position of CHEN13 field. */
#define IPC_RECEIVE_CNF_CHEN13_Msk (0x1UL << IPC_RECEIVE_CNF_CHEN13_Pos) /*!< Bit mask of CHEN13 field. */
#define IPC_RECEIVE_CNF_CHEN13_Disable (0UL) /*!< Disable events. */
#define IPC_RECEIVE_CNF_CHEN13_Enable (1UL) /*!< Enable events. */

/* Bit 12 : Enable subscription to channel 12. */
#define IPC_RECEIVE_CNF_CHEN12_Pos (12UL) /*!< Position of CHEN12 field. */
#define IPC_RECEIVE_CNF_CHEN12_Msk (0x1UL << IPC_RECEIVE_CNF_CHEN12_Pos) /*!< Bit mask of CHEN12 field. */
#define IPC_RECEIVE_CNF_CHEN12_Disable (0UL) /*!< Disable events. */
#define IPC_RECEIVE_CNF_CHEN12_Enable (1UL) /*!< Enable events. */

/* Bit 11 : Enable subscription to channel 11. */
#define IPC_RECEIVE_CNF_CHEN11_Pos (11UL) /*!< Position of CHEN11 field. */
#define IPC_RECEIVE_CNF_CHEN11_Msk (0x1UL << IPC_RECEIVE_CNF_CHEN11_Pos) /*!< Bit mask of CHEN11 field. */
#define IPC_RECEIVE_CNF_CHEN11_Disable (0UL) /*!< Disable events. */
#define IPC_RECEIVE_CNF_CHEN11_Enable (1UL) /*!< Enable events. */

/* Bit 10 : Enable subscription to channel 10. */
#define IPC_RECEIVE_CNF_CHEN10_Pos (10UL) /*!< Position of CHEN10 field. */
#define IPC_RECEIVE_CNF_CHEN10_Msk (0x1UL << IPC_RECEIVE_CNF_CHEN10_Pos) /*!< Bit mask of CHEN10 field. */
#define IPC_RECEIVE_CNF_CHEN10_Disable (0UL) /*!< Disable events. */
#define IPC_RECEIVE_CNF_CHEN10_Enable (1UL) /*!< Enable events. */

/* Bit 9 : Enable subscription to channel 9. */
#define IPC_RECEIVE_CNF_CHEN9_Pos (9UL) /*!< Position of CHEN9 field. */
#define IPC_RECEIVE_CNF_CHEN9_Msk (0x1UL << IPC_RECEIVE_CNF_CHEN9_Pos) /*!< Bit mask of CHEN9 field. */
#define IPC_RECEIVE_CNF_CHEN9_Disable (0UL) /*!< Disable events. */
#define IPC_RECEIVE_CNF_CHEN9_Enable (1UL) /*!< Enable events. */

/* Bit 8 : Enable subscription to channel 8. */
#define IPC_RECEIVE_CNF_CHEN8_Pos (8UL) /*!< Position of CHEN8 field. */
#define IPC_RECEIVE_CNF_CHEN8_Msk (0x1UL << IPC_RECEIVE_CNF_CHEN8_Pos) /*!< Bit mask of CHEN8 field. */
#define IPC_RECEIVE_CNF_CHEN8_Disable (0UL) /*!< Disable events. */
#define IPC_RECEIVE_CNF_CHEN8_Enable (1UL) /*!< Enable events. */

/* Bit 7 : Enable subscription to channel 7. */
#define IPC_RECEIVE_CNF_CHEN7_Pos (7UL) /*!< Position of CHEN7 field. */
#define IPC_RECEIVE_CNF_CHEN7_Msk (0x1UL << IPC_RECEIVE_CNF_CHEN7_Pos) /*!< Bit mask of CHEN7 field. */
#define IPC_RECEIVE_CNF_CHEN7_Disable (0UL) /*!< Disable events. */
#define IPC_RECEIVE_CNF_CHEN7_Enable (1UL) /*!< Enable events. */

/* Bit 6 : Enable subscription to channel 6. */
#define IPC_RECEIVE_CNF_CHEN6_Pos (6UL) /*!< Position of CHEN6 field. */
#define IPC_RECEIVE_CNF_CHEN6_Msk (0x1UL << IPC_RECEIVE_CNF_CHEN6_Pos) /*!< Bit mask of CHEN6 field. */
#define IPC_RECEIVE_CNF_CHEN6_Disable (0UL) /*!< Disable events. */
#define IPC_RECEIVE_CNF_CHEN6_Enable (1UL) /*!< Enable events. */

/* Bit 5 : Enable subscription to channel 5. */
#define IPC_RECEIVE_CNF_CHEN5_Pos (5UL) /*!< Position of CHEN5 field. */
#define IPC_RECEIVE_CNF_CHEN5_Msk (0x1UL << IPC_RECEIVE_CNF_CHEN5_Pos) /*!< Bit mask of CHEN5 field. */
#define IPC_RECEIVE_CNF_CHEN5_Disable (0UL) /*!< Disable events. */
#define IPC_RECEIVE_CNF_CHEN5_Enable (1UL) /*!< Enable events. */

/* Bit 4 : Enable subscription to channel 4. */
#define IPC_RECEIVE_CNF_CHEN4_Pos (4UL) /*!< Position of CHEN4 field. */
#define IPC_RECEIVE_CNF_CHEN4_Msk (0x1UL << IPC_RECEIVE_CNF_CHEN4_Pos) /*!< Bit mask of CHEN4 field. */
#define IPC_RECEIVE_CNF_CHEN4_Disable (0UL) /*!< Disable events. */
#define IPC_RECEIVE_CNF_CHEN4_Enable (1UL) /*!< Enable events. */

/* Bit 3 : Enable subscription to channel 3. */
#define IPC_RECEIVE_CNF_CHEN3_Pos (3UL) /*!< Position of CHEN3 field. */
#define IPC_RECEIVE_CNF_CHEN3_Msk (0x1UL << IPC_RECEIVE_CNF_CHEN3_Pos) /*!< Bit mask of CHEN3 field. */
#define IPC_RECEIVE_CNF_CHEN3_Disable (0UL) /*!< Disable events. */
#define IPC_RECEIVE_CNF_CHEN3_Enable (1UL) /*!< Enable events. */

/* Bit 2 : Enable subscription to channel 2. */
#define IPC_RECEIVE_CNF_CHEN2_Pos (2UL) /*!< Position of CHEN2 field. */
#define IPC_RECEIVE_CNF_CHEN2_Msk (0x1UL << IPC_RECEIVE_CNF_CHEN2_Pos) /*!< Bit mask of CHEN2 field. */
#define IPC_RECEIVE_CNF_CHEN2_Disable (0UL) /*!< Disable events. */
#define IPC_RECEIVE_CNF_CHEN2_Enable (1UL) /*!< Enable events. */

/* Bit 1 : Enable subscription to channel 1. */
#define IPC_RECEIVE_CNF_CHEN1_Pos (1UL) /*!< Position of CHEN1 field. */
#define IPC_RECEIVE_CNF_CHEN1_Msk (0x1UL << IPC_RECEIVE_CNF_CHEN1_Pos) /*!< Bit mask of CHEN1 field. */
#define IPC_RECEIVE_CNF_CHEN1_Disable (0UL) /*!< Disable events. */
#define IPC_RECEIVE_CNF_CHEN1_Enable (1UL) /*!< Enable events. */

/* Bit 0 : Enable subscription to channel 0. */
#define IPC_RECEIVE_CNF_CHEN0_Pos (0UL) /*!< Position of CHEN0 field. */
#define IPC_RECEIVE_CNF_CHEN0_Msk (0x1UL << IPC_RECEIVE_CNF_CHEN0_Pos) /*!< Bit mask of CHEN0 field. */
#define IPC_RECEIVE_CNF_CHEN0_Disable (0UL) /*!< Disable events. */
#define IPC_RECEIVE_CNF_CHEN0_Enable (1UL) /*!< Enable events. */

/* Register: IPC_GPMEM */
/* Description: Description collection: General purpose memory. */

/* Bits 31..0 : General purpose memory */
#define IPC_GPMEM_GPMEM_Pos (0UL) /*!< Position of GPMEM field. */
#define IPC_GPMEM_GPMEM_Msk (0xFFFFFFFFUL << IPC_GPMEM_GPMEM_Pos) /*!< Bit mask of GPMEM field. */


/* Peripheral: L2CIPHER */
/* Description: L2 Cipher Registers */

/* Register: L2CIPHER_TASKZEROPENALTY_PCP_1 */
/* Description: TaskZeroPenalty register for PCP 1 */

/* Bit 0 :   */
#define L2CIPHER_TASKZEROPENALTY_PCP_1_ZERO_PENALTY_Pos (0UL) /*!< Position of ZERO_PENALTY field. */
#define L2CIPHER_TASKZEROPENALTY_PCP_1_ZERO_PENALTY_Msk (0x1UL << L2CIPHER_TASKZEROPENALTY_PCP_1_ZERO_PENALTY_Pos) /*!< Bit mask of ZERO_PENALTY field. */
#define L2CIPHER_TASKZEROPENALTY_PCP_1_ZERO_PENALTY_SET_ZERO_PENALTY (1UL) /*!< Set Zero Penalty */

/* Register: L2CIPHER_TASKFULLPENALTY_PCP_1 */
/* Description: TaskFullPenalty register for PCP 1 */

/* Bit 0 :   */
#define L2CIPHER_TASKFULLPENALTY_PCP_1_FULL_PENALTY_Pos (0UL) /*!< Position of FULL_PENALTY field. */
#define L2CIPHER_TASKFULLPENALTY_PCP_1_FULL_PENALTY_Msk (0x1UL << L2CIPHER_TASKFULLPENALTY_PCP_1_FULL_PENALTY_Pos) /*!< Bit mask of FULL_PENALTY field. */
#define L2CIPHER_TASKFULLPENALTY_PCP_1_FULL_PENALTY_SET_FULL_PENALTY (1UL) /*!< Set Full Penalty */

/* Register: L2CIPHER_TASKZEROPENALTY_PCP_0 */
/* Description: TaskZeroPenalty register for PCP 0 */

/* Bit 0 :   */
#define L2CIPHER_TASKZEROPENALTY_PCP_0_ZERO_PENALTY_Pos (0UL) /*!< Position of ZERO_PENALTY field. */
#define L2CIPHER_TASKZEROPENALTY_PCP_0_ZERO_PENALTY_Msk (0x1UL << L2CIPHER_TASKZEROPENALTY_PCP_0_ZERO_PENALTY_Pos) /*!< Bit mask of ZERO_PENALTY field. */
#define L2CIPHER_TASKZEROPENALTY_PCP_0_ZERO_PENALTY_SET_ZERO_PENALTY (1UL) /*!< Set Zero Penalty */

/* Register: L2CIPHER_TASKFULLPENALTY_PCP_0 */
/* Description: TaskFullPenalty register for PCP 0 */

/* Bit 0 :   */
#define L2CIPHER_TASKFULLPENALTY_PCP_0_FULL_PENALTY_Pos (0UL) /*!< Position of FULL_PENALTY field. */
#define L2CIPHER_TASKFULLPENALTY_PCP_0_FULL_PENALTY_Msk (0x1UL << L2CIPHER_TASKFULLPENALTY_PCP_0_FULL_PENALTY_Pos) /*!< Bit mask of FULL_PENALTY field. */
#define L2CIPHER_TASKFULLPENALTY_PCP_0_FULL_PENALTY_SET_FULL_PENALTY (1UL) /*!< Set Full Penalty */

/* Register: L2CIPHER_PENALTY_REG */
/* Description: Description collection: Penalty register for PCP n */

/* Bits 1..0 : Penalty Level */
#define L2CIPHER_PENALTY_REG_Penalty_Pos (0UL) /*!< Position of Penalty field. */
#define L2CIPHER_PENALTY_REG_Penalty_Msk (0x3UL << L2CIPHER_PENALTY_REG_Penalty_Pos) /*!< Bit mask of Penalty field. */
#define L2CIPHER_PENALTY_REG_Penalty_Full (0UL) /*!< Auto 0) Full penalty) */
#define L2CIPHER_PENALTY_REG_Penalty_Semi1 (1UL) /*!< (Auto 1)  Semi (power on, clock off) */
#define L2CIPHER_PENALTY_REG_Penalty_Semi0 (2UL) /*!< (Auto 2) Semi (power on, clock core on, clock buffer off) */
#define L2CIPHER_PENALTY_REG_Penalty_Zero (3UL) /*!< (Auto 3)  Zero penalty */

/* Register: L2CIPHER_FORCE_OVERRIDE */
/* Description: Description collection: Force override register for PCP n */

/* Bit 15 :   */
#define L2CIPHER_FORCE_OVERRIDE_DISABLE_Pos (15UL) /*!< Position of DISABLE field. */
#define L2CIPHER_FORCE_OVERRIDE_DISABLE_Msk (0x1UL << L2CIPHER_FORCE_OVERRIDE_DISABLE_Pos) /*!< Bit mask of DISABLE field. */
#define L2CIPHER_FORCE_OVERRIDE_DISABLE_DISABLE (0UL) /*!< all forcing disabled */
#define L2CIPHER_FORCE_OVERRIDE_DISABLE_ENABLE (1UL) /*!< all forcing enabled */

/* Bit 9 :   */
#define L2CIPHER_FORCE_OVERRIDE_CORE_POWER_REQUEST_Pos (9UL) /*!< Position of CORE_POWER_REQUEST field. */
#define L2CIPHER_FORCE_OVERRIDE_CORE_POWER_REQUEST_Msk (0x1UL << L2CIPHER_FORCE_OVERRIDE_CORE_POWER_REQUEST_Pos) /*!< Bit mask of CORE_POWER_REQUEST field. */
#define L2CIPHER_FORCE_OVERRIDE_CORE_POWER_REQUEST_REQ0 (0UL) /*!< powerRequest.core = 0 */
#define L2CIPHER_FORCE_OVERRIDE_CORE_POWER_REQUEST_REQ1 (1UL) /*!< powerRequest.core = 1 */

/* Bit 8 :   */
#define L2CIPHER_FORCE_OVERRIDE_POWER_SWITCH_REQUEST_Pos (8UL) /*!< Position of POWER_SWITCH_REQUEST field. */
#define L2CIPHER_FORCE_OVERRIDE_POWER_SWITCH_REQUEST_Msk (0x1UL << L2CIPHER_FORCE_OVERRIDE_POWER_SWITCH_REQUEST_Pos) /*!< Bit mask of POWER_SWITCH_REQUEST field. */
#define L2CIPHER_FORCE_OVERRIDE_POWER_SWITCH_REQUEST_REQ0 (0UL) /*!< powerRequest.switch = 0 */
#define L2CIPHER_FORCE_OVERRIDE_POWER_SWITCH_REQUEST_REQ1 (1UL) /*!< powerRequest.switch = 1 */

/* Bit 7 :   */
#define L2CIPHER_FORCE_OVERRIDE_CLOCK_FORCING_Pos (7UL) /*!< Position of CLOCK_FORCING field. */
#define L2CIPHER_FORCE_OVERRIDE_CLOCK_FORCING_Msk (0x1UL << L2CIPHER_FORCE_OVERRIDE_CLOCK_FORCING_Pos) /*!< Bit mask of CLOCK_FORCING field. */
#define L2CIPHER_FORCE_OVERRIDE_CLOCK_FORCING_FORCE0 (0UL) /*!< All clock forcing  disabled */
#define L2CIPHER_FORCE_OVERRIDE_CLOCK_FORCING_FORCE1 (1UL) /*!< All clock forcing  enabled */

/* Bit 3 :   */
#define L2CIPHER_FORCE_OVERRIDE_CORE_CLOCK_REQUEST_Pos (3UL) /*!< Position of CORE_CLOCK_REQUEST field. */
#define L2CIPHER_FORCE_OVERRIDE_CORE_CLOCK_REQUEST_Msk (0x1UL << L2CIPHER_FORCE_OVERRIDE_CORE_CLOCK_REQUEST_Pos) /*!< Bit mask of CORE_CLOCK_REQUEST field. */
#define L2CIPHER_FORCE_OVERRIDE_CORE_CLOCK_REQUEST_REQ0 (0UL) /*!< clockRequest.core = 0 */
#define L2CIPHER_FORCE_OVERRIDE_CORE_CLOCK_REQUEST_REQ1 (1UL) /*!< clockRequest.core = 1 */

/* Bit 2 :   */
#define L2CIPHER_FORCE_OVERRIDE_CLOCK_BUFFER_REQUEST_Pos (2UL) /*!< Position of CLOCK_BUFFER_REQUEST field. */
#define L2CIPHER_FORCE_OVERRIDE_CLOCK_BUFFER_REQUEST_Msk (0x1UL << L2CIPHER_FORCE_OVERRIDE_CLOCK_BUFFER_REQUEST_Pos) /*!< Bit mask of CLOCK_BUFFER_REQUEST field. */
#define L2CIPHER_FORCE_OVERRIDE_CLOCK_BUFFER_REQUEST_REQ0 (0UL) /*!< clockRequest.buff = 0 */
#define L2CIPHER_FORCE_OVERRIDE_CLOCK_BUFFER_REQUEST_REQ1 (1UL) /*!< clockRequest.buff = 1 */

/* Bit 1 :   */
#define L2CIPHER_FORCE_OVERRIDE_CLOCK_SWITCH_REQUEST_Pos (1UL) /*!< Position of CLOCK_SWITCH_REQUEST field. */
#define L2CIPHER_FORCE_OVERRIDE_CLOCK_SWITCH_REQUEST_Msk (0x1UL << L2CIPHER_FORCE_OVERRIDE_CLOCK_SWITCH_REQUEST_Pos) /*!< Bit mask of CLOCK_SWITCH_REQUEST field. */
#define L2CIPHER_FORCE_OVERRIDE_CLOCK_SWITCH_REQUEST_REQ0 (0UL) /*!< clockRequest.switch = 0 */
#define L2CIPHER_FORCE_OVERRIDE_CLOCK_SWITCH_REQUEST_REQ1 (1UL) /*!< clockRequest.switch = 1 */

/* Bit 0 :   */
#define L2CIPHER_FORCE_OVERRIDE_CLOCK_SWITCH_REQUEST_A_Pos (0UL) /*!< Position of CLOCK_SWITCH_REQUEST_A field. */
#define L2CIPHER_FORCE_OVERRIDE_CLOCK_SWITCH_REQUEST_A_Msk (0x1UL << L2CIPHER_FORCE_OVERRIDE_CLOCK_SWITCH_REQUEST_A_Pos) /*!< Bit mask of CLOCK_SWITCH_REQUEST_A field. */
#define L2CIPHER_FORCE_OVERRIDE_CLOCK_SWITCH_REQUEST_A_REQ0 (0UL) /*!< clockRequest.switch_a = 0 */
#define L2CIPHER_FORCE_OVERRIDE_CLOCK_SWITCH_REQUEST_A_REQ1 (1UL) /*!< clockRequest.switch_a = 1 */

/* Register: L2CIPHER_TURN_OFF_AUTO_CLOCKSOURCE_REQ */
/* Description: Turn of the automatic clock request. */

/* Bit 1 :   */
#define L2CIPHER_TURN_OFF_AUTO_CLOCKSOURCE_REQ_CLOCK_START_PCP_1_Pos (1UL) /*!< Position of CLOCK_START_PCP_1 field. */
#define L2CIPHER_TURN_OFF_AUTO_CLOCKSOURCE_REQ_CLOCK_START_PCP_1_Msk (0x1UL << L2CIPHER_TURN_OFF_AUTO_CLOCKSOURCE_REQ_CLOCK_START_PCP_1_Pos) /*!< Bit mask of CLOCK_START_PCP_1 field. */
#define L2CIPHER_TURN_OFF_AUTO_CLOCKSOURCE_REQ_CLOCK_START_PCP_1_NORMAL_PCP_1 (0UL) /*!< normal clock start for PCP 1 */
#define L2CIPHER_TURN_OFF_AUTO_CLOCKSOURCE_REQ_CLOCK_START_PCP_1_OFF_PCP_1 (1UL) /*!< turn off normal clock start for PCP 1 */

/* Bit 0 :   */
#define L2CIPHER_TURN_OFF_AUTO_CLOCKSOURCE_REQ_CLOCK_START_PCP_0_Pos (0UL) /*!< Position of CLOCK_START_PCP_0 field. */
#define L2CIPHER_TURN_OFF_AUTO_CLOCKSOURCE_REQ_CLOCK_START_PCP_0_Msk (0x1UL << L2CIPHER_TURN_OFF_AUTO_CLOCKSOURCE_REQ_CLOCK_START_PCP_0_Pos) /*!< Bit mask of CLOCK_START_PCP_0 field. */
#define L2CIPHER_TURN_OFF_AUTO_CLOCKSOURCE_REQ_CLOCK_START_PCP_0_NORMAL_PCP_0 (0UL) /*!< normal clock start for PCP 0 */
#define L2CIPHER_TURN_OFF_AUTO_CLOCKSOURCE_REQ_CLOCK_START_PCP_0_OFF_PCP_0 (1UL) /*!< turn off normal clock start for PCP 0 */


/* Peripheral: WDT */
/* Description: Watchdog Timer 0 */

/* Register: WDT_TASKS_START */
/* Description: Start the watchdog */

/* Bit 0 : Start the watchdog */
#define WDT_TASKS_START_TASKS_START_Pos (0UL) /*!< Position of TASKS_START field. */
#define WDT_TASKS_START_TASKS_START_Msk (0x1UL << WDT_TASKS_START_TASKS_START_Pos) /*!< Bit mask of TASKS_START field. */
#define WDT_TASKS_START_TASKS_START_Trigger (1UL) /*!< Trigger task */

/* Register: WDT_TASKS_STOP */
/* Description: Stop the watchdog timer. Only available in timer mode. */

/* Bit 0 : Stop the watchdog timer. Only available in timer mode. */
#define WDT_TASKS_STOP_TASKS_STOP_Pos (0UL) /*!< Position of TASKS_STOP field. */
#define WDT_TASKS_STOP_TASKS_STOP_Msk (0x1UL << WDT_TASKS_STOP_TASKS_STOP_Pos) /*!< Bit mask of TASKS_STOP field. */
#define WDT_TASKS_STOP_TASKS_STOP_Trigger (1UL) /*!< Trigger task */

/* Register: WDT_EVENTS_TIMEOUT */
/* Description: Watchdog timeout */

/* Bit 0 : Watchdog timeout */
#define WDT_EVENTS_TIMEOUT_EVENTS_TIMEOUT_Pos (0UL) /*!< Position of EVENTS_TIMEOUT field. */
#define WDT_EVENTS_TIMEOUT_EVENTS_TIMEOUT_Msk (0x1UL << WDT_EVENTS_TIMEOUT_EVENTS_TIMEOUT_Pos) /*!< Bit mask of EVENTS_TIMEOUT field. */
#define WDT_EVENTS_TIMEOUT_EVENTS_TIMEOUT_NotGenerated (0UL) /*!< Event not generated */
#define WDT_EVENTS_TIMEOUT_EVENTS_TIMEOUT_Generated (1UL) /*!< Event generated */

/* Register: WDT_INTENSET */
/* Description: Enable interrupt */

/* Bit 0 : Write '1' to enable interrupt for event TIMEOUT */
#define WDT_INTENSET_TIMEOUT_Pos (0UL) /*!< Position of TIMEOUT field. */
#define WDT_INTENSET_TIMEOUT_Msk (0x1UL << WDT_INTENSET_TIMEOUT_Pos) /*!< Bit mask of TIMEOUT field. */
#define WDT_INTENSET_TIMEOUT_Disabled (0UL) /*!< Read: Disabled */
#define WDT_INTENSET_TIMEOUT_Enabled (1UL) /*!< Read: Enabled */
#define WDT_INTENSET_TIMEOUT_Set (1UL) /*!< Enable */

/* Register: WDT_INTENCLR */
/* Description: Disable interrupt */

/* Bit 0 : Write '1' to disable interrupt for event TIMEOUT */
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

/* Bit 8 : Configure the watchdog to either be paused, or kept running, while the EXTPAUSE signal is set */
#define WDT_CONFIG_EXTPAUSE_Pos (8UL) /*!< Position of EXTPAUSE field. */
#define WDT_CONFIG_EXTPAUSE_Msk (0x1UL << WDT_CONFIG_EXTPAUSE_Pos) /*!< Bit mask of EXTPAUSE field. */
#define WDT_CONFIG_EXTPAUSE_Pause (0UL) /*!< Pause watchdog while the EXTPAUSE signal is set */
#define WDT_CONFIG_EXTPAUSE_Run (1UL) /*!< Keep the watchdog running while EXTPAUSE signal is set */

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
/* Description: Description collection: Reload request n */

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


/* Peripheral: M2M */
/* Description: Memory to Memory DMA 0 */

/* Register: M2M_TASKS_START */
/* Description: Start DMA transfer */

/* Bit 0 : Start DMA transfer */
#define M2M_TASKS_START_TASKS_START_Pos (0UL) /*!< Position of TASKS_START field. */
#define M2M_TASKS_START_TASKS_START_Msk (0x1UL << M2M_TASKS_START_TASKS_START_Pos) /*!< Bit mask of TASKS_START field. */
#define M2M_TASKS_START_TASKS_START_Trigger (1UL) /*!< Trigger task */

/* Register: M2M_TASKS_STOP */
/* Description: Stop DMA transfer */

/* Bit 0 : Stop DMA transfer */
#define M2M_TASKS_STOP_TASKS_STOP_Pos (0UL) /*!< Position of TASKS_STOP field. */
#define M2M_TASKS_STOP_TASKS_STOP_Msk (0x1UL << M2M_TASKS_STOP_TASKS_STOP_Pos) /*!< Bit mask of TASKS_STOP field. */
#define M2M_TASKS_STOP_TASKS_STOP_Trigger (1UL) /*!< Trigger task */

/* Register: M2M_EVENTS_END */
/* Description: DMA transfer complete */

/* Bit 0 : DMA transfer complete */
#define M2M_EVENTS_END_EVENTS_END_Pos (0UL) /*!< Position of EVENTS_END field. */
#define M2M_EVENTS_END_EVENTS_END_Msk (0x1UL << M2M_EVENTS_END_EVENTS_END_Pos) /*!< Bit mask of EVENTS_END field. */
#define M2M_EVENTS_END_EVENTS_END_NotGenerated (0UL) /*!< Event not generated */
#define M2M_EVENTS_END_EVENTS_END_Generated (1UL) /*!< Event generated */

/* Register: M2M_EVENTS_STARTED */
/* Description: DMA transfer started */

/* Bit 0 : DMA transfer started */
#define M2M_EVENTS_STARTED_EVENTS_STARTED_Pos (0UL) /*!< Position of EVENTS_STARTED field. */
#define M2M_EVENTS_STARTED_EVENTS_STARTED_Msk (0x1UL << M2M_EVENTS_STARTED_EVENTS_STARTED_Pos) /*!< Bit mask of EVENTS_STARTED field. */
#define M2M_EVENTS_STARTED_EVENTS_STARTED_NotGenerated (0UL) /*!< Event not generated */
#define M2M_EVENTS_STARTED_EVENTS_STARTED_Generated (1UL) /*!< Event generated */

/* Register: M2M_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 1 : Enable or disable interrupt for event STARTED */
#define M2M_INTEN_STARTED_Pos (1UL) /*!< Position of STARTED field. */
#define M2M_INTEN_STARTED_Msk (0x1UL << M2M_INTEN_STARTED_Pos) /*!< Bit mask of STARTED field. */
#define M2M_INTEN_STARTED_Disabled (0UL) /*!< Disable */
#define M2M_INTEN_STARTED_Enabled (1UL) /*!< Enable */

/* Bit 0 : Enable or disable interrupt for event END */
#define M2M_INTEN_END_Pos (0UL) /*!< Position of END field. */
#define M2M_INTEN_END_Msk (0x1UL << M2M_INTEN_END_Pos) /*!< Bit mask of END field. */
#define M2M_INTEN_END_Disabled (0UL) /*!< Disable */
#define M2M_INTEN_END_Enabled (1UL) /*!< Enable */

/* Register: M2M_INTENSET */
/* Description: Enable interrupt */

/* Bit 1 : Write '1' to enable interrupt for event STARTED */
#define M2M_INTENSET_STARTED_Pos (1UL) /*!< Position of STARTED field. */
#define M2M_INTENSET_STARTED_Msk (0x1UL << M2M_INTENSET_STARTED_Pos) /*!< Bit mask of STARTED field. */
#define M2M_INTENSET_STARTED_Disabled (0UL) /*!< Read: Disabled */
#define M2M_INTENSET_STARTED_Enabled (1UL) /*!< Read: Enabled */
#define M2M_INTENSET_STARTED_Set (1UL) /*!< Enable */

/* Bit 0 : Write '1' to enable interrupt for event END */
#define M2M_INTENSET_END_Pos (0UL) /*!< Position of END field. */
#define M2M_INTENSET_END_Msk (0x1UL << M2M_INTENSET_END_Pos) /*!< Bit mask of END field. */
#define M2M_INTENSET_END_Disabled (0UL) /*!< Read: Disabled */
#define M2M_INTENSET_END_Enabled (1UL) /*!< Read: Enabled */
#define M2M_INTENSET_END_Set (1UL) /*!< Enable */

/* Register: M2M_INTENCLR */
/* Description: Disable interrupt */

/* Bit 1 : Write '1' to disable interrupt for event STARTED */
#define M2M_INTENCLR_STARTED_Pos (1UL) /*!< Position of STARTED field. */
#define M2M_INTENCLR_STARTED_Msk (0x1UL << M2M_INTENCLR_STARTED_Pos) /*!< Bit mask of STARTED field. */
#define M2M_INTENCLR_STARTED_Disabled (0UL) /*!< Read: Disabled */
#define M2M_INTENCLR_STARTED_Enabled (1UL) /*!< Read: Enabled */
#define M2M_INTENCLR_STARTED_Clear (1UL) /*!< Disable */

/* Bit 0 : Write '1' to disable interrupt for event END */
#define M2M_INTENCLR_END_Pos (0UL) /*!< Position of END field. */
#define M2M_INTENCLR_END_Msk (0x1UL << M2M_INTENCLR_END_Pos) /*!< Bit mask of END field. */
#define M2M_INTENCLR_END_Disabled (0UL) /*!< Read: Disabled */
#define M2M_INTENCLR_END_Enabled (1UL) /*!< Read: Enabled */
#define M2M_INTENCLR_END_Clear (1UL) /*!< Disable */

/* Register: M2M_INTPEND */
/* Description: Pending interrupts */

/* Bit 1 : Read pending status of interrupt for event STARTED */
#define M2M_INTPEND_STARTED_Pos (1UL) /*!< Position of STARTED field. */
#define M2M_INTPEND_STARTED_Msk (0x1UL << M2M_INTPEND_STARTED_Pos) /*!< Bit mask of STARTED field. */
#define M2M_INTPEND_STARTED_NotPending (0UL) /*!< Read: Not pending */
#define M2M_INTPEND_STARTED_Pending (1UL) /*!< Read: Pending */

/* Bit 0 : Read pending status of interrupt for event END */
#define M2M_INTPEND_END_Pos (0UL) /*!< Position of END field. */
#define M2M_INTPEND_END_Msk (0x1UL << M2M_INTPEND_END_Pos) /*!< Bit mask of END field. */
#define M2M_INTPEND_END_NotPending (0UL) /*!< Read: Not pending */
#define M2M_INTPEND_END_Pending (1UL) /*!< Read: Pending */

/* Register: M2M_IN_PTR */
/* Description: Data pointer */

/* Bits 31..0 : Data pointer */
#define M2M_IN_PTR_PTR_Pos (0UL) /*!< Position of PTR field. */
#define M2M_IN_PTR_PTR_Msk (0xFFFFFFFFUL << M2M_IN_PTR_PTR_Pos) /*!< Bit mask of PTR field. */

/* Register: M2M_IN_MAXCNT */
/* Description: Maximum number of bytes in input and output buffer */

/* Bits 7..0 : Maximum number of bytes in input and output buffer */
#define M2M_IN_MAXCNT_MAXCNT_Pos (0UL) /*!< Position of MAXCNT field. */
#define M2M_IN_MAXCNT_MAXCNT_Msk (0xFFUL << M2M_IN_MAXCNT_MAXCNT_Pos) /*!< Bit mask of MAXCNT field. */

/* Register: M2M_IN_AMOUNT */
/* Description: Number of bytes transferred in the last transaction */

/* Bits 7..0 : Number of bytes transferred in the last transaction */
#define M2M_IN_AMOUNT_AMOUNT_Pos (0UL) /*!< Position of AMOUNT field. */
#define M2M_IN_AMOUNT_AMOUNT_Msk (0xFFUL << M2M_IN_AMOUNT_AMOUNT_Pos) /*!< Bit mask of AMOUNT field. */

/* Register: M2M_IN_LIST */
/* Description: EasyDMA list type */

/* Bits 2..0 : List type */
#define M2M_IN_LIST_LIST_Pos (0UL) /*!< Position of LIST field. */
#define M2M_IN_LIST_LIST_Msk (0x7UL << M2M_IN_LIST_LIST_Pos) /*!< Bit mask of LIST field. */
#define M2M_IN_LIST_LIST_Disabled (0UL) /*!< Disable EasyDMA list */
#define M2M_IN_LIST_LIST_ArrayList (1UL) /*!< Use array list */

/* Register: M2M_OUT_PTR */
/* Description: Data pointer */

/* Bits 31..0 : Data pointer */
#define M2M_OUT_PTR_PTR_Pos (0UL) /*!< Position of PTR field. */
#define M2M_OUT_PTR_PTR_Msk (0xFFFFFFFFUL << M2M_OUT_PTR_PTR_Pos) /*!< Bit mask of PTR field. */

/* Register: M2M_OUT_AMOUNT */
/* Description: Number of bytes transferred in the last transaction */

/* Bits 7..0 : Number of bytes transferred in the last transaction */
#define M2M_OUT_AMOUNT_AMOUNT_Pos (0UL) /*!< Position of AMOUNT field. */
#define M2M_OUT_AMOUNT_AMOUNT_Msk (0xFFUL << M2M_OUT_AMOUNT_AMOUNT_Pos) /*!< Bit mask of AMOUNT field. */

/* Register: M2M_OUT_LIST */
/* Description: EasyDMA list type */

/* Bits 2..0 : List type */
#define M2M_OUT_LIST_LIST_Pos (0UL) /*!< Position of LIST field. */
#define M2M_OUT_LIST_LIST_Msk (0x7UL << M2M_OUT_LIST_LIST_Pos) /*!< Bit mask of LIST field. */
#define M2M_OUT_LIST_LIST_Disabled (0UL) /*!< Disable EasyDMA list */
#define M2M_OUT_LIST_LIST_ArrayList (1UL) /*!< Use array list */


/* Peripheral: MCPLL */
/* Description: Modem Clock PLL */

/* Register: MCPLL_TASKS_START */
/* Description: Start MCPLL */

/* Bit 0 : Start MCPLL */
#define MCPLL_TASKS_START_TASKS_START_Pos (0UL) /*!< Position of TASKS_START field. */
#define MCPLL_TASKS_START_TASKS_START_Msk (0x1UL << MCPLL_TASKS_START_TASKS_START_Pos) /*!< Bit mask of TASKS_START field. */
#define MCPLL_TASKS_START_TASKS_START_Trigger (1UL) /*!< Trigger task */

/* Register: MCPLL_TASKS_UPDATE */
/* Description: Update CONTROL.FRAC and CONTROL.INT values */

/* Bit 0 : Update CONTROL.FRAC and CONTROL.INT values */
#define MCPLL_TASKS_UPDATE_TASKS_UPDATE_Pos (0UL) /*!< Position of TASKS_UPDATE field. */
#define MCPLL_TASKS_UPDATE_TASKS_UPDATE_Msk (0x1UL << MCPLL_TASKS_UPDATE_TASKS_UPDATE_Pos) /*!< Bit mask of TASKS_UPDATE field. */
#define MCPLL_TASKS_UPDATE_TASKS_UPDATE_Trigger (1UL) /*!< Trigger task */

/* Register: MCPLL_TASKS_STOP */
/* Description: Stop MCPLL */

/* Bit 0 : Stop MCPLL */
#define MCPLL_TASKS_STOP_TASKS_STOP_Pos (0UL) /*!< Position of TASKS_STOP field. */
#define MCPLL_TASKS_STOP_TASKS_STOP_Msk (0x1UL << MCPLL_TASKS_STOP_TASKS_STOP_Pos) /*!< Bit mask of TASKS_STOP field. */
#define MCPLL_TASKS_STOP_TASKS_STOP_Trigger (1UL) /*!< Trigger task */

/* Register: MCPLL_EVENTS_STARTED */
/* Description: MCPLL started */

/* Bit 0 : MCPLL started */
#define MCPLL_EVENTS_STARTED_EVENTS_STARTED_Pos (0UL) /*!< Position of EVENTS_STARTED field. */
#define MCPLL_EVENTS_STARTED_EVENTS_STARTED_Msk (0x1UL << MCPLL_EVENTS_STARTED_EVENTS_STARTED_Pos) /*!< Bit mask of EVENTS_STARTED field. */
#define MCPLL_EVENTS_STARTED_EVENTS_STARTED_NotGenerated (0UL) /*!< Event not generated */
#define MCPLL_EVENTS_STARTED_EVENTS_STARTED_Generated (1UL) /*!< Event generated */

/* Register: MCPLL_EVENTS_LOCKERROR */
/* Description: Error event, MCPLL no longer in lock */

/* Bit 0 : Error event, MCPLL no longer in lock */
#define MCPLL_EVENTS_LOCKERROR_EVENTS_LOCKERROR_Pos (0UL) /*!< Position of EVENTS_LOCKERROR field. */
#define MCPLL_EVENTS_LOCKERROR_EVENTS_LOCKERROR_Msk (0x1UL << MCPLL_EVENTS_LOCKERROR_EVENTS_LOCKERROR_Pos) /*!< Bit mask of EVENTS_LOCKERROR field. */
#define MCPLL_EVENTS_LOCKERROR_EVENTS_LOCKERROR_NotGenerated (0UL) /*!< Event not generated */
#define MCPLL_EVENTS_LOCKERROR_EVENTS_LOCKERROR_Generated (1UL) /*!< Event generated */

/* Register: MCPLL_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 1 : Enable or disable interrupt for event LOCKERROR */
#define MCPLL_INTEN_LOCKERROR_Pos (1UL) /*!< Position of LOCKERROR field. */
#define MCPLL_INTEN_LOCKERROR_Msk (0x1UL << MCPLL_INTEN_LOCKERROR_Pos) /*!< Bit mask of LOCKERROR field. */
#define MCPLL_INTEN_LOCKERROR_Disabled (0UL) /*!< Disable */
#define MCPLL_INTEN_LOCKERROR_Enabled (1UL) /*!< Enable */

/* Bit 0 : Enable or disable interrupt for event STARTED */
#define MCPLL_INTEN_STARTED_Pos (0UL) /*!< Position of STARTED field. */
#define MCPLL_INTEN_STARTED_Msk (0x1UL << MCPLL_INTEN_STARTED_Pos) /*!< Bit mask of STARTED field. */
#define MCPLL_INTEN_STARTED_Disabled (0UL) /*!< Disable */
#define MCPLL_INTEN_STARTED_Enabled (1UL) /*!< Enable */

/* Register: MCPLL_INTENSET */
/* Description: Enable interrupt */

/* Bit 1 : Write '1' to enable interrupt for event LOCKERROR */
#define MCPLL_INTENSET_LOCKERROR_Pos (1UL) /*!< Position of LOCKERROR field. */
#define MCPLL_INTENSET_LOCKERROR_Msk (0x1UL << MCPLL_INTENSET_LOCKERROR_Pos) /*!< Bit mask of LOCKERROR field. */
#define MCPLL_INTENSET_LOCKERROR_Disabled (0UL) /*!< Read: Disabled */
#define MCPLL_INTENSET_LOCKERROR_Enabled (1UL) /*!< Read: Enabled */
#define MCPLL_INTENSET_LOCKERROR_Set (1UL) /*!< Enable */

/* Bit 0 : Write '1' to enable interrupt for event STARTED */
#define MCPLL_INTENSET_STARTED_Pos (0UL) /*!< Position of STARTED field. */
#define MCPLL_INTENSET_STARTED_Msk (0x1UL << MCPLL_INTENSET_STARTED_Pos) /*!< Bit mask of STARTED field. */
#define MCPLL_INTENSET_STARTED_Disabled (0UL) /*!< Read: Disabled */
#define MCPLL_INTENSET_STARTED_Enabled (1UL) /*!< Read: Enabled */
#define MCPLL_INTENSET_STARTED_Set (1UL) /*!< Enable */

/* Register: MCPLL_INTENCLR */
/* Description: Disable interrupt */

/* Bit 1 : Write '1' to disable interrupt for event LOCKERROR */
#define MCPLL_INTENCLR_LOCKERROR_Pos (1UL) /*!< Position of LOCKERROR field. */
#define MCPLL_INTENCLR_LOCKERROR_Msk (0x1UL << MCPLL_INTENCLR_LOCKERROR_Pos) /*!< Bit mask of LOCKERROR field. */
#define MCPLL_INTENCLR_LOCKERROR_Disabled (0UL) /*!< Read: Disabled */
#define MCPLL_INTENCLR_LOCKERROR_Enabled (1UL) /*!< Read: Enabled */
#define MCPLL_INTENCLR_LOCKERROR_Clear (1UL) /*!< Disable */

/* Bit 0 : Write '1' to disable interrupt for event STARTED */
#define MCPLL_INTENCLR_STARTED_Pos (0UL) /*!< Position of STARTED field. */
#define MCPLL_INTENCLR_STARTED_Msk (0x1UL << MCPLL_INTENCLR_STARTED_Pos) /*!< Bit mask of STARTED field. */
#define MCPLL_INTENCLR_STARTED_Disabled (0UL) /*!< Read: Disabled */
#define MCPLL_INTENCLR_STARTED_Enabled (1UL) /*!< Read: Enabled */
#define MCPLL_INTENCLR_STARTED_Clear (1UL) /*!< Disable */

/* Register: MCPLL_INTPEND */
/* Description: Pending interrupts */

/* Bit 1 : Read pending status of interrupt for event LOCKERROR */
#define MCPLL_INTPEND_LOCKERROR_Pos (1UL) /*!< Position of LOCKERROR field. */
#define MCPLL_INTPEND_LOCKERROR_Msk (0x1UL << MCPLL_INTPEND_LOCKERROR_Pos) /*!< Bit mask of LOCKERROR field. */
#define MCPLL_INTPEND_LOCKERROR_NotPending (0UL) /*!< Read: Not pending */
#define MCPLL_INTPEND_LOCKERROR_Pending (1UL) /*!< Read: Pending */

/* Bit 0 : Read pending status of interrupt for event STARTED */
#define MCPLL_INTPEND_STARTED_Pos (0UL) /*!< Position of STARTED field. */
#define MCPLL_INTPEND_STARTED_Msk (0x1UL << MCPLL_INTPEND_STARTED_Pos) /*!< Bit mask of STARTED field. */
#define MCPLL_INTPEND_STARTED_NotPending (0UL) /*!< Read: Not pending */
#define MCPLL_INTPEND_STARTED_Pending (1UL) /*!< Read: Pending */

/* Register: MCPLL_INLOCK */
/* Description: MCPLL locked or not */

/* Bit 0 : MCPLL locked or not */
#define MCPLL_INLOCK_INLOCK_Pos (0UL) /*!< Position of INLOCK field. */
#define MCPLL_INLOCK_INLOCK_Msk (0x1UL << MCPLL_INLOCK_INLOCK_Pos) /*!< Bit mask of INLOCK field. */
#define MCPLL_INLOCK_INLOCK_NotInLock (0UL) /*!< MCPLL not locked */
#define MCPLL_INLOCK_INLOCK_InLock (1UL) /*!< MCPLL locked */

/* Register: MCPLL_CONTROL_INT */
/* Description: Integer part of the control word. */

/* Bits 5..0 : Integer part of the control word */
#define MCPLL_CONTROL_INT_INT_Pos (0UL) /*!< Position of INT field. */
#define MCPLL_CONTROL_INT_INT_Msk (0x3FUL << MCPLL_CONTROL_INT_INT_Pos) /*!< Bit mask of INT field. */

/* Register: MCPLL_CONTROL_FRAC */
/* Description: Fractional part of the control word. */

/* Bits 22..0 : Fractional part of the control word */
#define MCPLL_CONTROL_FRAC_FRAC_Pos (0UL) /*!< Position of FRAC field. */
#define MCPLL_CONTROL_FRAC_FRAC_Msk (0x7FFFFFUL << MCPLL_CONTROL_FRAC_FRAC_Pos) /*!< Bit mask of FRAC field. */

/* Register: MCPLL_MA */
/* Description: Post division ratio for OUTA */

/* Bits 2..0 : Post division ratio for OUTA */
#define MCPLL_MA_MA_Pos (0UL) /*!< Position of MA field. */
#define MCPLL_MA_MA_Msk (0x7UL << MCPLL_MA_MA_Pos) /*!< Bit mask of MA field. */

/* Register: MCPLL_MB */
/* Description: Post division ratio for OUTB */

/* Bits 2..0 : Post division ratio for OUTB */
#define MCPLL_MB_MB_Pos (0UL) /*!< Position of MB field. */
#define MCPLL_MB_MB_Msk (0x7UL << MCPLL_MB_MB_Pos) /*!< Bit mask of MB field. */

/* Register: MCPLL_MC */
/* Description: Post division ratio for OUTC */

/* Bits 2..0 : Post division ratio for OUTC */
#define MCPLL_MC_MC_Pos (0UL) /*!< Position of MC field. */
#define MCPLL_MC_MC_Msk (0x7UL << MCPLL_MC_MC_Pos) /*!< Bit mask of MC field. */

/* Register: MCPLL_INTMODE */
/* Description: Integer mode */

/* Bit 0 : Integer mode */
#define MCPLL_INTMODE_INTMODE_Pos (0UL) /*!< Position of INTMODE field. */
#define MCPLL_INTMODE_INTMODE_Msk (0x1UL << MCPLL_INTMODE_INTMODE_Pos) /*!< Bit mask of INTMODE field. */
#define MCPLL_INTMODE_INTMODE_Fractional (0UL) /*!< Fractional mode */
#define MCPLL_INTMODE_INTMODE_Integer (1UL) /*!< Integer mode */

/* Register: MCPLL_FORCEINLOCK */
/* Description: Force MCPLL in lock */

/* Bits 1..0 : Force MCPLL in lock (value) */
#define MCPLL_FORCEINLOCK_FORCEINLOCK_Pos (0UL) /*!< Position of FORCEINLOCK field. */
#define MCPLL_FORCEINLOCK_FORCEINLOCK_Msk (0x3UL << MCPLL_FORCEINLOCK_FORCEINLOCK_Pos) /*!< Bit mask of FORCEINLOCK field. */

/* Register: MCPLL_RESET */
/* Description: Reset MCPLL */

/* Bit 0 : Software reset (ARSTSD) */
#define MCPLL_RESET_RESET_Pos (0UL) /*!< Position of RESET field. */
#define MCPLL_RESET_RESET_Msk (0x1UL << MCPLL_RESET_RESET_Pos) /*!< Bit mask of RESET field. */

/* Register: MCPLL_SPARE */
/* Description: Spare signals */

/* Bits 3..0 : Spare signals */
#define MCPLL_SPARE_SPARE_Pos (0UL) /*!< Position of SPARE field. */
#define MCPLL_SPARE_SPARE_Msk (0xFUL << MCPLL_SPARE_SPARE_Pos) /*!< Bit mask of SPARE field. */

/* Register: MCPLL_OVERRIDE_MCPLL */
/* Description: Override for MCPLL power switch */

/* Bit 31 : Enable override */
#define MCPLL_OVERRIDE_MCPLL_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define MCPLL_OVERRIDE_MCPLL_ENABLE_Msk (0x1UL << MCPLL_OVERRIDE_MCPLL_ENABLE_Pos) /*!< Bit mask of ENABLE field. */
#define MCPLL_OVERRIDE_MCPLL_ENABLE_NoOverride (0UL) /*!< No override enabled */
#define MCPLL_OVERRIDE_MCPLL_ENABLE_Override (1UL) /*!< Override enabled */

/* Bits 6..4 : Power switch resistance override value */
#define MCPLL_OVERRIDE_MCPLL_RESISTANCE_Pos (4UL) /*!< Position of RESISTANCE field. */
#define MCPLL_OVERRIDE_MCPLL_RESISTANCE_Msk (0x7UL << MCPLL_OVERRIDE_MCPLL_RESISTANCE_Pos) /*!< Bit mask of RESISTANCE field. */

/* Bits 1..0 : Power switch override value */
#define MCPLL_OVERRIDE_MCPLL_SWITCH_Pos (0UL) /*!< Position of SWITCH field. */
#define MCPLL_OVERRIDE_MCPLL_SWITCH_Msk (0x3UL << MCPLL_OVERRIDE_MCPLL_SWITCH_Pos) /*!< Bit mask of SWITCH field. */
#define MCPLL_OVERRIDE_MCPLL_SWITCH_OFF (0UL) /*!< Force power switch OFF */
#define MCPLL_OVERRIDE_MCPLL_SWITCH_ON (1UL) /*!< Force power switch ON */

/* Register: MCPLL_OVERRIDE_MCPLLBUF */
/* Description: Override for MCPLLBUF power switch */

/* Bit 31 : Enable override */
#define MCPLL_OVERRIDE_MCPLLBUF_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define MCPLL_OVERRIDE_MCPLLBUF_ENABLE_Msk (0x1UL << MCPLL_OVERRIDE_MCPLLBUF_ENABLE_Pos) /*!< Bit mask of ENABLE field. */
#define MCPLL_OVERRIDE_MCPLLBUF_ENABLE_NoOverride (0UL) /*!< No override enabled */
#define MCPLL_OVERRIDE_MCPLLBUF_ENABLE_Override (1UL) /*!< Override enabled */

/* Bits 6..4 : Power switch resistance override value */
#define MCPLL_OVERRIDE_MCPLLBUF_RESISTANCE_Pos (4UL) /*!< Position of RESISTANCE field. */
#define MCPLL_OVERRIDE_MCPLLBUF_RESISTANCE_Msk (0x7UL << MCPLL_OVERRIDE_MCPLLBUF_RESISTANCE_Pos) /*!< Bit mask of RESISTANCE field. */

/* Bits 1..0 : Power switch override value */
#define MCPLL_OVERRIDE_MCPLLBUF_SWITCH_Pos (0UL) /*!< Position of SWITCH field. */
#define MCPLL_OVERRIDE_MCPLLBUF_SWITCH_Msk (0x3UL << MCPLL_OVERRIDE_MCPLLBUF_SWITCH_Pos) /*!< Bit mask of SWITCH field. */
#define MCPLL_OVERRIDE_MCPLLBUF_SWITCH_OFF (0UL) /*!< Force power switch OFF */
#define MCPLL_OVERRIDE_MCPLLBUF_SWITCH_ON (1UL) /*!< Force power switch ON */

/* Register: MCPLL_OVERRIDE_PWRUP */
/* Description: Override for power up */

/* Bit 31 : Enable override */
#define MCPLL_OVERRIDE_PWRUP_ENABLE_Pos (31UL) /*!< Position of ENABLE field. */
#define MCPLL_OVERRIDE_PWRUP_ENABLE_Msk (0x1UL << MCPLL_OVERRIDE_PWRUP_ENABLE_Pos) /*!< Bit mask of ENABLE field. */
#define MCPLL_OVERRIDE_PWRUP_ENABLE_NoOverride (0UL) /*!< No override enabled */
#define MCPLL_OVERRIDE_PWRUP_ENABLE_Override (1UL) /*!< Override enabled */

/* Bit 0 : Override for PWRDUP_MCPLL */
#define MCPLL_OVERRIDE_PWRUP_MCPLLANA_Pos (0UL) /*!< Position of MCPLLANA field. */
#define MCPLL_OVERRIDE_PWRUP_MCPLLANA_Msk (0x1UL << MCPLL_OVERRIDE_PWRUP_MCPLLANA_Pos) /*!< Bit mask of MCPLLANA field. */
#define MCPLL_OVERRIDE_PWRUP_MCPLLANA_OFF (0UL) /*!< Force power off */
#define MCPLL_OVERRIDE_PWRUP_MCPLLANA_ON (1UL) /*!< Force power on */

/* Register: MCPLL_TEST */
/* Description: ATE test bus control */

/* Bits 3..0 : ATE test bus control */
#define MCPLL_TEST_ATE_Pos (0UL) /*!< Position of ATE field. */
#define MCPLL_TEST_ATE_Msk (0xFUL << MCPLL_TEST_ATE_Pos) /*!< Bit mask of ATE field. */


/* Peripheral: MODEMPERIPH */
/* Description: Modem peripheral registers */

/* Register: MODEMPERIPH_TASKZEROPENALTY_PCP_1 */
/* Description: TaskZeroPenalty register for PCP 1 */

/* Bit 0 :   */
#define MODEMPERIPH_TASKZEROPENALTY_PCP_1_ZERO_PENALTY_Pos (0UL) /*!< Position of ZERO_PENALTY field. */
#define MODEMPERIPH_TASKZEROPENALTY_PCP_1_ZERO_PENALTY_Msk (0x1UL << MODEMPERIPH_TASKZEROPENALTY_PCP_1_ZERO_PENALTY_Pos) /*!< Bit mask of ZERO_PENALTY field. */
#define MODEMPERIPH_TASKZEROPENALTY_PCP_1_ZERO_PENALTY_SET_ZERO_PENALTY (1UL) /*!< Set Zero Penalty */

/* Register: MODEMPERIPH_TASKFULLPENALTY_PCP_1 */
/* Description: TaskFullPenalty register for PCP 1 */

/* Bit 0 :   */
#define MODEMPERIPH_TASKFULLPENALTY_PCP_1_FULL_PENALTY_Pos (0UL) /*!< Position of FULL_PENALTY field. */
#define MODEMPERIPH_TASKFULLPENALTY_PCP_1_FULL_PENALTY_Msk (0x1UL << MODEMPERIPH_TASKFULLPENALTY_PCP_1_FULL_PENALTY_Pos) /*!< Bit mask of FULL_PENALTY field. */
#define MODEMPERIPH_TASKFULLPENALTY_PCP_1_FULL_PENALTY_SET_FULL_PENALTY (1UL) /*!< Set Full Penalty */

/* Register: MODEMPERIPH_TASKZEROPENALTY_PCP_0 */
/* Description: TaskZeroPenalty register for PCP 0 */

/* Bit 0 :   */
#define MODEMPERIPH_TASKZEROPENALTY_PCP_0_ZERO_PENALTY_Pos (0UL) /*!< Position of ZERO_PENALTY field. */
#define MODEMPERIPH_TASKZEROPENALTY_PCP_0_ZERO_PENALTY_Msk (0x1UL << MODEMPERIPH_TASKZEROPENALTY_PCP_0_ZERO_PENALTY_Pos) /*!< Bit mask of ZERO_PENALTY field. */
#define MODEMPERIPH_TASKZEROPENALTY_PCP_0_ZERO_PENALTY_SET_ZERO_PENALTY (1UL) /*!< Set Zero Penalty */

/* Register: MODEMPERIPH_TASKFULLPENALTY_PCP_0 */
/* Description: TaskFullPenalty register for PCP 0 */

/* Bit 0 :   */
#define MODEMPERIPH_TASKFULLPENALTY_PCP_0_FULL_PENALTY_Pos (0UL) /*!< Position of FULL_PENALTY field. */
#define MODEMPERIPH_TASKFULLPENALTY_PCP_0_FULL_PENALTY_Msk (0x1UL << MODEMPERIPH_TASKFULLPENALTY_PCP_0_FULL_PENALTY_Pos) /*!< Bit mask of FULL_PENALTY field. */
#define MODEMPERIPH_TASKFULLPENALTY_PCP_0_FULL_PENALTY_SET_FULL_PENALTY (1UL) /*!< Set Full Penalty */

/* Register: MODEMPERIPH_PENALTY_REG */
/* Description: Description collection: Penalty register for PCP n */

/* Bits 1..0 : Penalty Level */
#define MODEMPERIPH_PENALTY_REG_Penalty_Pos (0UL) /*!< Position of Penalty field. */
#define MODEMPERIPH_PENALTY_REG_Penalty_Msk (0x3UL << MODEMPERIPH_PENALTY_REG_Penalty_Pos) /*!< Bit mask of Penalty field. */
#define MODEMPERIPH_PENALTY_REG_Penalty_Full (0UL) /*!< Auto 0) Full penalty) */
#define MODEMPERIPH_PENALTY_REG_Penalty_Semi1 (1UL) /*!< (Auto 1)  Semi (power on, clock off) */
#define MODEMPERIPH_PENALTY_REG_Penalty_Semi0 (2UL) /*!< (Auto 2) Semi (power on, clock core on, clock buffer off) */
#define MODEMPERIPH_PENALTY_REG_Penalty_Zero (3UL) /*!< (Auto 3)  Zero penalty */

/* Register: MODEMPERIPH_FORCE_OVERRIDE */
/* Description: Description collection: Force override register for PCP n */

/* Bit 15 :   */
#define MODEMPERIPH_FORCE_OVERRIDE_DISABLE_Pos (15UL) /*!< Position of DISABLE field. */
#define MODEMPERIPH_FORCE_OVERRIDE_DISABLE_Msk (0x1UL << MODEMPERIPH_FORCE_OVERRIDE_DISABLE_Pos) /*!< Bit mask of DISABLE field. */
#define MODEMPERIPH_FORCE_OVERRIDE_DISABLE_DISABLE (0UL) /*!< all forcing disabled */
#define MODEMPERIPH_FORCE_OVERRIDE_DISABLE_ENABLE (1UL) /*!< all forcing enabled */

/* Bit 9 :   */
#define MODEMPERIPH_FORCE_OVERRIDE_CORE_POWER_REQUEST_Pos (9UL) /*!< Position of CORE_POWER_REQUEST field. */
#define MODEMPERIPH_FORCE_OVERRIDE_CORE_POWER_REQUEST_Msk (0x1UL << MODEMPERIPH_FORCE_OVERRIDE_CORE_POWER_REQUEST_Pos) /*!< Bit mask of CORE_POWER_REQUEST field. */
#define MODEMPERIPH_FORCE_OVERRIDE_CORE_POWER_REQUEST_REQ0 (0UL) /*!< powerRequest.core = 0 */
#define MODEMPERIPH_FORCE_OVERRIDE_CORE_POWER_REQUEST_REQ1 (1UL) /*!< powerRequest.core = 1 */

/* Bit 8 :   */
#define MODEMPERIPH_FORCE_OVERRIDE_POWER_SWITCH_REQUEST_Pos (8UL) /*!< Position of POWER_SWITCH_REQUEST field. */
#define MODEMPERIPH_FORCE_OVERRIDE_POWER_SWITCH_REQUEST_Msk (0x1UL << MODEMPERIPH_FORCE_OVERRIDE_POWER_SWITCH_REQUEST_Pos) /*!< Bit mask of POWER_SWITCH_REQUEST field. */
#define MODEMPERIPH_FORCE_OVERRIDE_POWER_SWITCH_REQUEST_REQ0 (0UL) /*!< powerRequest.switch = 0 */
#define MODEMPERIPH_FORCE_OVERRIDE_POWER_SWITCH_REQUEST_REQ1 (1UL) /*!< powerRequest.switch = 1 */

/* Bit 7 :   */
#define MODEMPERIPH_FORCE_OVERRIDE_CLOCK_FORCING_Pos (7UL) /*!< Position of CLOCK_FORCING field. */
#define MODEMPERIPH_FORCE_OVERRIDE_CLOCK_FORCING_Msk (0x1UL << MODEMPERIPH_FORCE_OVERRIDE_CLOCK_FORCING_Pos) /*!< Bit mask of CLOCK_FORCING field. */
#define MODEMPERIPH_FORCE_OVERRIDE_CLOCK_FORCING_FORCE0 (0UL) /*!< All clock forcing  disabled */
#define MODEMPERIPH_FORCE_OVERRIDE_CLOCK_FORCING_FORCE1 (1UL) /*!< All clock forcing  enabled */

/* Bit 3 :   */
#define MODEMPERIPH_FORCE_OVERRIDE_CORE_CLOCK_REQUEST_Pos (3UL) /*!< Position of CORE_CLOCK_REQUEST field. */
#define MODEMPERIPH_FORCE_OVERRIDE_CORE_CLOCK_REQUEST_Msk (0x1UL << MODEMPERIPH_FORCE_OVERRIDE_CORE_CLOCK_REQUEST_Pos) /*!< Bit mask of CORE_CLOCK_REQUEST field. */
#define MODEMPERIPH_FORCE_OVERRIDE_CORE_CLOCK_REQUEST_REQ0 (0UL) /*!< clockRequest.core = 0 */
#define MODEMPERIPH_FORCE_OVERRIDE_CORE_CLOCK_REQUEST_REQ1 (1UL) /*!< clockRequest.core = 1 */

/* Bit 2 :   */
#define MODEMPERIPH_FORCE_OVERRIDE_CLOCK_BUFFER_REQUEST_Pos (2UL) /*!< Position of CLOCK_BUFFER_REQUEST field. */
#define MODEMPERIPH_FORCE_OVERRIDE_CLOCK_BUFFER_REQUEST_Msk (0x1UL << MODEMPERIPH_FORCE_OVERRIDE_CLOCK_BUFFER_REQUEST_Pos) /*!< Bit mask of CLOCK_BUFFER_REQUEST field. */
#define MODEMPERIPH_FORCE_OVERRIDE_CLOCK_BUFFER_REQUEST_REQ0 (0UL) /*!< clockRequest.buff = 0 */
#define MODEMPERIPH_FORCE_OVERRIDE_CLOCK_BUFFER_REQUEST_REQ1 (1UL) /*!< clockRequest.buff = 1 */

/* Bit 1 :   */
#define MODEMPERIPH_FORCE_OVERRIDE_CLOCK_SWITCH_REQUEST_Pos (1UL) /*!< Position of CLOCK_SWITCH_REQUEST field. */
#define MODEMPERIPH_FORCE_OVERRIDE_CLOCK_SWITCH_REQUEST_Msk (0x1UL << MODEMPERIPH_FORCE_OVERRIDE_CLOCK_SWITCH_REQUEST_Pos) /*!< Bit mask of CLOCK_SWITCH_REQUEST field. */
#define MODEMPERIPH_FORCE_OVERRIDE_CLOCK_SWITCH_REQUEST_REQ0 (0UL) /*!< clockRequest.switch = 0 */
#define MODEMPERIPH_FORCE_OVERRIDE_CLOCK_SWITCH_REQUEST_REQ1 (1UL) /*!< clockRequest.switch = 1 */

/* Bit 0 :   */
#define MODEMPERIPH_FORCE_OVERRIDE_CLOCK_SWITCH_REQUEST_A_Pos (0UL) /*!< Position of CLOCK_SWITCH_REQUEST_A field. */
#define MODEMPERIPH_FORCE_OVERRIDE_CLOCK_SWITCH_REQUEST_A_Msk (0x1UL << MODEMPERIPH_FORCE_OVERRIDE_CLOCK_SWITCH_REQUEST_A_Pos) /*!< Bit mask of CLOCK_SWITCH_REQUEST_A field. */
#define MODEMPERIPH_FORCE_OVERRIDE_CLOCK_SWITCH_REQUEST_A_REQ0 (0UL) /*!< clockRequest.switch_a = 0 */
#define MODEMPERIPH_FORCE_OVERRIDE_CLOCK_SWITCH_REQUEST_A_REQ1 (1UL) /*!< clockRequest.switch_a = 1 */

/* Register: MODEMPERIPH_TURN_OFF_AUTO_CLOCKSOURCE_REQ */
/* Description: Turn of the automatic clock request. */

/* Bit 1 :   */
#define MODEMPERIPH_TURN_OFF_AUTO_CLOCKSOURCE_REQ_CLOCK_START_PCP_1_Pos (1UL) /*!< Position of CLOCK_START_PCP_1 field. */
#define MODEMPERIPH_TURN_OFF_AUTO_CLOCKSOURCE_REQ_CLOCK_START_PCP_1_Msk (0x1UL << MODEMPERIPH_TURN_OFF_AUTO_CLOCKSOURCE_REQ_CLOCK_START_PCP_1_Pos) /*!< Bit mask of CLOCK_START_PCP_1 field. */
#define MODEMPERIPH_TURN_OFF_AUTO_CLOCKSOURCE_REQ_CLOCK_START_PCP_1_NORMAL_PCP_1 (0UL) /*!< normal clock start for PCP 1 */
#define MODEMPERIPH_TURN_OFF_AUTO_CLOCKSOURCE_REQ_CLOCK_START_PCP_1_OFF_PCP_1 (1UL) /*!< turn off normal clock start for PCP 1 */

/* Bit 0 :   */
#define MODEMPERIPH_TURN_OFF_AUTO_CLOCKSOURCE_REQ_CLOCK_START_PCP_0_Pos (0UL) /*!< Position of CLOCK_START_PCP_0 field. */
#define MODEMPERIPH_TURN_OFF_AUTO_CLOCKSOURCE_REQ_CLOCK_START_PCP_0_Msk (0x1UL << MODEMPERIPH_TURN_OFF_AUTO_CLOCKSOURCE_REQ_CLOCK_START_PCP_0_Pos) /*!< Bit mask of CLOCK_START_PCP_0 field. */
#define MODEMPERIPH_TURN_OFF_AUTO_CLOCKSOURCE_REQ_CLOCK_START_PCP_0_NORMAL_PCP_0 (0UL) /*!< normal clock start for PCP 0 */
#define MODEMPERIPH_TURN_OFF_AUTO_CLOCKSOURCE_REQ_CLOCK_START_PCP_0_OFF_PCP_0 (1UL) /*!< turn off normal clock start for PCP 0 */


/* Peripheral: MODEMTIMER */
/* Description: Modem Timer/Counter 0 */

/* Register: MODEMTIMER_TASKS_START */
/* Description: Start Timer */

/* Bit 0 : Start Timer */
#define MODEMTIMER_TASKS_START_TASKS_START_Pos (0UL) /*!< Position of TASKS_START field. */
#define MODEMTIMER_TASKS_START_TASKS_START_Msk (0x1UL << MODEMTIMER_TASKS_START_TASKS_START_Pos) /*!< Bit mask of TASKS_START field. */
#define MODEMTIMER_TASKS_START_TASKS_START_Trigger (1UL) /*!< Trigger task */

/* Register: MODEMTIMER_TASKS_STOP */
/* Description: Stop Timer */

/* Bit 0 : Stop Timer */
#define MODEMTIMER_TASKS_STOP_TASKS_STOP_Pos (0UL) /*!< Position of TASKS_STOP field. */
#define MODEMTIMER_TASKS_STOP_TASKS_STOP_Msk (0x1UL << MODEMTIMER_TASKS_STOP_TASKS_STOP_Pos) /*!< Bit mask of TASKS_STOP field. */
#define MODEMTIMER_TASKS_STOP_TASKS_STOP_Trigger (1UL) /*!< Trigger task */

/* Register: MODEMTIMER_TASKS_CLEAR */
/* Description: Clear time */

/* Bit 0 : Clear time */
#define MODEMTIMER_TASKS_CLEAR_TASKS_CLEAR_Pos (0UL) /*!< Position of TASKS_CLEAR field. */
#define MODEMTIMER_TASKS_CLEAR_TASKS_CLEAR_Msk (0x1UL << MODEMTIMER_TASKS_CLEAR_TASKS_CLEAR_Pos) /*!< Bit mask of TASKS_CLEAR field. */
#define MODEMTIMER_TASKS_CLEAR_TASKS_CLEAR_Trigger (1UL) /*!< Trigger task */

/* Register: MODEMTIMER_TASKS_SHUTDOWN */
/* Description: Shut down timer */

/* Bit 0 : Shut down timer */
#define MODEMTIMER_TASKS_SHUTDOWN_TASKS_SHUTDOWN_Pos (0UL) /*!< Position of TASKS_SHUTDOWN field. */
#define MODEMTIMER_TASKS_SHUTDOWN_TASKS_SHUTDOWN_Msk (0x1UL << MODEMTIMER_TASKS_SHUTDOWN_TASKS_SHUTDOWN_Pos) /*!< Bit mask of TASKS_SHUTDOWN field. */
#define MODEMTIMER_TASKS_SHUTDOWN_TASKS_SHUTDOWN_Trigger (1UL) /*!< Trigger task */

/* Register: MODEMTIMER_TASKS_CAPTURE */
/* Description: Description collection: Capture Timer value to CC[n] register */

/* Bit 0 : Capture Timer value to CC[n] register */
#define MODEMTIMER_TASKS_CAPTURE_TASKS_CAPTURE_Pos (0UL) /*!< Position of TASKS_CAPTURE field. */
#define MODEMTIMER_TASKS_CAPTURE_TASKS_CAPTURE_Msk (0x1UL << MODEMTIMER_TASKS_CAPTURE_TASKS_CAPTURE_Pos) /*!< Bit mask of TASKS_CAPTURE field. */
#define MODEMTIMER_TASKS_CAPTURE_TASKS_CAPTURE_Trigger (1UL) /*!< Trigger task */

/* Register: MODEMTIMER_EVENTS_COMPARE */
/* Description: Description collection: Compare event on CC[n] match. */

/* Bit 0 : Compare event on CC[n] match. */
#define MODEMTIMER_EVENTS_COMPARE_EVENTS_COMPARE_Pos (0UL) /*!< Position of EVENTS_COMPARE field. */
#define MODEMTIMER_EVENTS_COMPARE_EVENTS_COMPARE_Msk (0x1UL << MODEMTIMER_EVENTS_COMPARE_EVENTS_COMPARE_Pos) /*!< Bit mask of EVENTS_COMPARE field. */
#define MODEMTIMER_EVENTS_COMPARE_EVENTS_COMPARE_NotGenerated (0UL) /*!< Event not generated */
#define MODEMTIMER_EVENTS_COMPARE_EVENTS_COMPARE_Generated (1UL) /*!< Event generated */

/* Register: MODEMTIMER_SHORTS */
/* Description: Shortcuts between local events and tasks */

/* Bit 15 : Shortcut between event COMPARE[7] and task STOP */
#define MODEMTIMER_SHORTS_COMPARE7_STOP_Pos (15UL) /*!< Position of COMPARE7_STOP field. */
#define MODEMTIMER_SHORTS_COMPARE7_STOP_Msk (0x1UL << MODEMTIMER_SHORTS_COMPARE7_STOP_Pos) /*!< Bit mask of COMPARE7_STOP field. */
#define MODEMTIMER_SHORTS_COMPARE7_STOP_Disabled (0UL) /*!< Disable shortcut */
#define MODEMTIMER_SHORTS_COMPARE7_STOP_Enabled (1UL) /*!< Enable shortcut */

/* Bit 14 : Shortcut between event COMPARE[6] and task STOP */
#define MODEMTIMER_SHORTS_COMPARE6_STOP_Pos (14UL) /*!< Position of COMPARE6_STOP field. */
#define MODEMTIMER_SHORTS_COMPARE6_STOP_Msk (0x1UL << MODEMTIMER_SHORTS_COMPARE6_STOP_Pos) /*!< Bit mask of COMPARE6_STOP field. */
#define MODEMTIMER_SHORTS_COMPARE6_STOP_Disabled (0UL) /*!< Disable shortcut */
#define MODEMTIMER_SHORTS_COMPARE6_STOP_Enabled (1UL) /*!< Enable shortcut */

/* Bit 13 : Shortcut between event COMPARE[5] and task STOP */
#define MODEMTIMER_SHORTS_COMPARE5_STOP_Pos (13UL) /*!< Position of COMPARE5_STOP field. */
#define MODEMTIMER_SHORTS_COMPARE5_STOP_Msk (0x1UL << MODEMTIMER_SHORTS_COMPARE5_STOP_Pos) /*!< Bit mask of COMPARE5_STOP field. */
#define MODEMTIMER_SHORTS_COMPARE5_STOP_Disabled (0UL) /*!< Disable shortcut */
#define MODEMTIMER_SHORTS_COMPARE5_STOP_Enabled (1UL) /*!< Enable shortcut */

/* Bit 12 : Shortcut between event COMPARE[4] and task STOP */
#define MODEMTIMER_SHORTS_COMPARE4_STOP_Pos (12UL) /*!< Position of COMPARE4_STOP field. */
#define MODEMTIMER_SHORTS_COMPARE4_STOP_Msk (0x1UL << MODEMTIMER_SHORTS_COMPARE4_STOP_Pos) /*!< Bit mask of COMPARE4_STOP field. */
#define MODEMTIMER_SHORTS_COMPARE4_STOP_Disabled (0UL) /*!< Disable shortcut */
#define MODEMTIMER_SHORTS_COMPARE4_STOP_Enabled (1UL) /*!< Enable shortcut */

/* Bit 11 : Shortcut between event COMPARE[3] and task STOP */
#define MODEMTIMER_SHORTS_COMPARE3_STOP_Pos (11UL) /*!< Position of COMPARE3_STOP field. */
#define MODEMTIMER_SHORTS_COMPARE3_STOP_Msk (0x1UL << MODEMTIMER_SHORTS_COMPARE3_STOP_Pos) /*!< Bit mask of COMPARE3_STOP field. */
#define MODEMTIMER_SHORTS_COMPARE3_STOP_Disabled (0UL) /*!< Disable shortcut */
#define MODEMTIMER_SHORTS_COMPARE3_STOP_Enabled (1UL) /*!< Enable shortcut */

/* Bit 10 : Shortcut between event COMPARE[2] and task STOP */
#define MODEMTIMER_SHORTS_COMPARE2_STOP_Pos (10UL) /*!< Position of COMPARE2_STOP field. */
#define MODEMTIMER_SHORTS_COMPARE2_STOP_Msk (0x1UL << MODEMTIMER_SHORTS_COMPARE2_STOP_Pos) /*!< Bit mask of COMPARE2_STOP field. */
#define MODEMTIMER_SHORTS_COMPARE2_STOP_Disabled (0UL) /*!< Disable shortcut */
#define MODEMTIMER_SHORTS_COMPARE2_STOP_Enabled (1UL) /*!< Enable shortcut */

/* Bit 9 : Shortcut between event COMPARE[1] and task STOP */
#define MODEMTIMER_SHORTS_COMPARE1_STOP_Pos (9UL) /*!< Position of COMPARE1_STOP field. */
#define MODEMTIMER_SHORTS_COMPARE1_STOP_Msk (0x1UL << MODEMTIMER_SHORTS_COMPARE1_STOP_Pos) /*!< Bit mask of COMPARE1_STOP field. */
#define MODEMTIMER_SHORTS_COMPARE1_STOP_Disabled (0UL) /*!< Disable shortcut */
#define MODEMTIMER_SHORTS_COMPARE1_STOP_Enabled (1UL) /*!< Enable shortcut */

/* Bit 8 : Shortcut between event COMPARE[0] and task STOP */
#define MODEMTIMER_SHORTS_COMPARE0_STOP_Pos (8UL) /*!< Position of COMPARE0_STOP field. */
#define MODEMTIMER_SHORTS_COMPARE0_STOP_Msk (0x1UL << MODEMTIMER_SHORTS_COMPARE0_STOP_Pos) /*!< Bit mask of COMPARE0_STOP field. */
#define MODEMTIMER_SHORTS_COMPARE0_STOP_Disabled (0UL) /*!< Disable shortcut */
#define MODEMTIMER_SHORTS_COMPARE0_STOP_Enabled (1UL) /*!< Enable shortcut */

/* Bit 7 : Shortcut between event COMPARE[7] and task CLEAR */
#define MODEMTIMER_SHORTS_COMPARE7_CLEAR_Pos (7UL) /*!< Position of COMPARE7_CLEAR field. */
#define MODEMTIMER_SHORTS_COMPARE7_CLEAR_Msk (0x1UL << MODEMTIMER_SHORTS_COMPARE7_CLEAR_Pos) /*!< Bit mask of COMPARE7_CLEAR field. */
#define MODEMTIMER_SHORTS_COMPARE7_CLEAR_Disabled (0UL) /*!< Disable shortcut */
#define MODEMTIMER_SHORTS_COMPARE7_CLEAR_Enabled (1UL) /*!< Enable shortcut */

/* Bit 6 : Shortcut between event COMPARE[6] and task CLEAR */
#define MODEMTIMER_SHORTS_COMPARE6_CLEAR_Pos (6UL) /*!< Position of COMPARE6_CLEAR field. */
#define MODEMTIMER_SHORTS_COMPARE6_CLEAR_Msk (0x1UL << MODEMTIMER_SHORTS_COMPARE6_CLEAR_Pos) /*!< Bit mask of COMPARE6_CLEAR field. */
#define MODEMTIMER_SHORTS_COMPARE6_CLEAR_Disabled (0UL) /*!< Disable shortcut */
#define MODEMTIMER_SHORTS_COMPARE6_CLEAR_Enabled (1UL) /*!< Enable shortcut */

/* Bit 5 : Shortcut between event COMPARE[5] and task CLEAR */
#define MODEMTIMER_SHORTS_COMPARE5_CLEAR_Pos (5UL) /*!< Position of COMPARE5_CLEAR field. */
#define MODEMTIMER_SHORTS_COMPARE5_CLEAR_Msk (0x1UL << MODEMTIMER_SHORTS_COMPARE5_CLEAR_Pos) /*!< Bit mask of COMPARE5_CLEAR field. */
#define MODEMTIMER_SHORTS_COMPARE5_CLEAR_Disabled (0UL) /*!< Disable shortcut */
#define MODEMTIMER_SHORTS_COMPARE5_CLEAR_Enabled (1UL) /*!< Enable shortcut */

/* Bit 4 : Shortcut between event COMPARE[4] and task CLEAR */
#define MODEMTIMER_SHORTS_COMPARE4_CLEAR_Pos (4UL) /*!< Position of COMPARE4_CLEAR field. */
#define MODEMTIMER_SHORTS_COMPARE4_CLEAR_Msk (0x1UL << MODEMTIMER_SHORTS_COMPARE4_CLEAR_Pos) /*!< Bit mask of COMPARE4_CLEAR field. */
#define MODEMTIMER_SHORTS_COMPARE4_CLEAR_Disabled (0UL) /*!< Disable shortcut */
#define MODEMTIMER_SHORTS_COMPARE4_CLEAR_Enabled (1UL) /*!< Enable shortcut */

/* Bit 3 : Shortcut between event COMPARE[3] and task CLEAR */
#define MODEMTIMER_SHORTS_COMPARE3_CLEAR_Pos (3UL) /*!< Position of COMPARE3_CLEAR field. */
#define MODEMTIMER_SHORTS_COMPARE3_CLEAR_Msk (0x1UL << MODEMTIMER_SHORTS_COMPARE3_CLEAR_Pos) /*!< Bit mask of COMPARE3_CLEAR field. */
#define MODEMTIMER_SHORTS_COMPARE3_CLEAR_Disabled (0UL) /*!< Disable shortcut */
#define MODEMTIMER_SHORTS_COMPARE3_CLEAR_Enabled (1UL) /*!< Enable shortcut */

/* Bit 2 : Shortcut between event COMPARE[2] and task CLEAR */
#define MODEMTIMER_SHORTS_COMPARE2_CLEAR_Pos (2UL) /*!< Position of COMPARE2_CLEAR field. */
#define MODEMTIMER_SHORTS_COMPARE2_CLEAR_Msk (0x1UL << MODEMTIMER_SHORTS_COMPARE2_CLEAR_Pos) /*!< Bit mask of COMPARE2_CLEAR field. */
#define MODEMTIMER_SHORTS_COMPARE2_CLEAR_Disabled (0UL) /*!< Disable shortcut */
#define MODEMTIMER_SHORTS_COMPARE2_CLEAR_Enabled (1UL) /*!< Enable shortcut */

/* Bit 1 : Shortcut between event COMPARE[1] and task CLEAR */
#define MODEMTIMER_SHORTS_COMPARE1_CLEAR_Pos (1UL) /*!< Position of COMPARE1_CLEAR field. */
#define MODEMTIMER_SHORTS_COMPARE1_CLEAR_Msk (0x1UL << MODEMTIMER_SHORTS_COMPARE1_CLEAR_Pos) /*!< Bit mask of COMPARE1_CLEAR field. */
#define MODEMTIMER_SHORTS_COMPARE1_CLEAR_Disabled (0UL) /*!< Disable shortcut */
#define MODEMTIMER_SHORTS_COMPARE1_CLEAR_Enabled (1UL) /*!< Enable shortcut */

/* Bit 0 : Shortcut between event COMPARE[0] and task CLEAR */
#define MODEMTIMER_SHORTS_COMPARE0_CLEAR_Pos (0UL) /*!< Position of COMPARE0_CLEAR field. */
#define MODEMTIMER_SHORTS_COMPARE0_CLEAR_Msk (0x1UL << MODEMTIMER_SHORTS_COMPARE0_CLEAR_Pos) /*!< Bit mask of COMPARE0_CLEAR field. */
#define MODEMTIMER_SHORTS_COMPARE0_CLEAR_Disabled (0UL) /*!< Disable shortcut */
#define MODEMTIMER_SHORTS_COMPARE0_CLEAR_Enabled (1UL) /*!< Enable shortcut */

/* Register: MODEMTIMER_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 7 : Enable or disable interrupt for event COMPARE[7] */
#define MODEMTIMER_INTEN_COMPARE7_Pos (7UL) /*!< Position of COMPARE7 field. */
#define MODEMTIMER_INTEN_COMPARE7_Msk (0x1UL << MODEMTIMER_INTEN_COMPARE7_Pos) /*!< Bit mask of COMPARE7 field. */
#define MODEMTIMER_INTEN_COMPARE7_Disabled (0UL) /*!< Disable */
#define MODEMTIMER_INTEN_COMPARE7_Enabled (1UL) /*!< Enable */

/* Bit 6 : Enable or disable interrupt for event COMPARE[6] */
#define MODEMTIMER_INTEN_COMPARE6_Pos (6UL) /*!< Position of COMPARE6 field. */
#define MODEMTIMER_INTEN_COMPARE6_Msk (0x1UL << MODEMTIMER_INTEN_COMPARE6_Pos) /*!< Bit mask of COMPARE6 field. */
#define MODEMTIMER_INTEN_COMPARE6_Disabled (0UL) /*!< Disable */
#define MODEMTIMER_INTEN_COMPARE6_Enabled (1UL) /*!< Enable */

/* Bit 5 : Enable or disable interrupt for event COMPARE[5] */
#define MODEMTIMER_INTEN_COMPARE5_Pos (5UL) /*!< Position of COMPARE5 field. */
#define MODEMTIMER_INTEN_COMPARE5_Msk (0x1UL << MODEMTIMER_INTEN_COMPARE5_Pos) /*!< Bit mask of COMPARE5 field. */
#define MODEMTIMER_INTEN_COMPARE5_Disabled (0UL) /*!< Disable */
#define MODEMTIMER_INTEN_COMPARE5_Enabled (1UL) /*!< Enable */

/* Bit 4 : Enable or disable interrupt for event COMPARE[4] */
#define MODEMTIMER_INTEN_COMPARE4_Pos (4UL) /*!< Position of COMPARE4 field. */
#define MODEMTIMER_INTEN_COMPARE4_Msk (0x1UL << MODEMTIMER_INTEN_COMPARE4_Pos) /*!< Bit mask of COMPARE4 field. */
#define MODEMTIMER_INTEN_COMPARE4_Disabled (0UL) /*!< Disable */
#define MODEMTIMER_INTEN_COMPARE4_Enabled (1UL) /*!< Enable */

/* Bit 3 : Enable or disable interrupt for event COMPARE[3] */
#define MODEMTIMER_INTEN_COMPARE3_Pos (3UL) /*!< Position of COMPARE3 field. */
#define MODEMTIMER_INTEN_COMPARE3_Msk (0x1UL << MODEMTIMER_INTEN_COMPARE3_Pos) /*!< Bit mask of COMPARE3 field. */
#define MODEMTIMER_INTEN_COMPARE3_Disabled (0UL) /*!< Disable */
#define MODEMTIMER_INTEN_COMPARE3_Enabled (1UL) /*!< Enable */

/* Bit 2 : Enable or disable interrupt for event COMPARE[2] */
#define MODEMTIMER_INTEN_COMPARE2_Pos (2UL) /*!< Position of COMPARE2 field. */
#define MODEMTIMER_INTEN_COMPARE2_Msk (0x1UL << MODEMTIMER_INTEN_COMPARE2_Pos) /*!< Bit mask of COMPARE2 field. */
#define MODEMTIMER_INTEN_COMPARE2_Disabled (0UL) /*!< Disable */
#define MODEMTIMER_INTEN_COMPARE2_Enabled (1UL) /*!< Enable */

/* Bit 1 : Enable or disable interrupt for event COMPARE[1] */
#define MODEMTIMER_INTEN_COMPARE1_Pos (1UL) /*!< Position of COMPARE1 field. */
#define MODEMTIMER_INTEN_COMPARE1_Msk (0x1UL << MODEMTIMER_INTEN_COMPARE1_Pos) /*!< Bit mask of COMPARE1 field. */
#define MODEMTIMER_INTEN_COMPARE1_Disabled (0UL) /*!< Disable */
#define MODEMTIMER_INTEN_COMPARE1_Enabled (1UL) /*!< Enable */

/* Bit 0 : Enable or disable interrupt for event COMPARE[0] */
#define MODEMTIMER_INTEN_COMPARE0_Pos (0UL) /*!< Position of COMPARE0 field. */
#define MODEMTIMER_INTEN_COMPARE0_Msk (0x1UL << MODEMTIMER_INTEN_COMPARE0_Pos) /*!< Bit mask of COMPARE0 field. */
#define MODEMTIMER_INTEN_COMPARE0_Disabled (0UL) /*!< Disable */
#define MODEMTIMER_INTEN_COMPARE0_Enabled (1UL) /*!< Enable */

/* Register: MODEMTIMER_INTENSET */
/* Description: Enable interrupt */

/* Bit 7 : Write '1' to enable interrupt for event COMPARE[7] */
#define MODEMTIMER_INTENSET_COMPARE7_Pos (7UL) /*!< Position of COMPARE7 field. */
#define MODEMTIMER_INTENSET_COMPARE7_Msk (0x1UL << MODEMTIMER_INTENSET_COMPARE7_Pos) /*!< Bit mask of COMPARE7 field. */
#define MODEMTIMER_INTENSET_COMPARE7_Disabled (0UL) /*!< Read: Disabled */
#define MODEMTIMER_INTENSET_COMPARE7_Enabled (1UL) /*!< Read: Enabled */
#define MODEMTIMER_INTENSET_COMPARE7_Set (1UL) /*!< Enable */

/* Bit 6 : Write '1' to enable interrupt for event COMPARE[6] */
#define MODEMTIMER_INTENSET_COMPARE6_Pos (6UL) /*!< Position of COMPARE6 field. */
#define MODEMTIMER_INTENSET_COMPARE6_Msk (0x1UL << MODEMTIMER_INTENSET_COMPARE6_Pos) /*!< Bit mask of COMPARE6 field. */
#define MODEMTIMER_INTENSET_COMPARE6_Disabled (0UL) /*!< Read: Disabled */
#define MODEMTIMER_INTENSET_COMPARE6_Enabled (1UL) /*!< Read: Enabled */
#define MODEMTIMER_INTENSET_COMPARE6_Set (1UL) /*!< Enable */

/* Bit 5 : Write '1' to enable interrupt for event COMPARE[5] */
#define MODEMTIMER_INTENSET_COMPARE5_Pos (5UL) /*!< Position of COMPARE5 field. */
#define MODEMTIMER_INTENSET_COMPARE5_Msk (0x1UL << MODEMTIMER_INTENSET_COMPARE5_Pos) /*!< Bit mask of COMPARE5 field. */
#define MODEMTIMER_INTENSET_COMPARE5_Disabled (0UL) /*!< Read: Disabled */
#define MODEMTIMER_INTENSET_COMPARE5_Enabled (1UL) /*!< Read: Enabled */
#define MODEMTIMER_INTENSET_COMPARE5_Set (1UL) /*!< Enable */

/* Bit 4 : Write '1' to enable interrupt for event COMPARE[4] */
#define MODEMTIMER_INTENSET_COMPARE4_Pos (4UL) /*!< Position of COMPARE4 field. */
#define MODEMTIMER_INTENSET_COMPARE4_Msk (0x1UL << MODEMTIMER_INTENSET_COMPARE4_Pos) /*!< Bit mask of COMPARE4 field. */
#define MODEMTIMER_INTENSET_COMPARE4_Disabled (0UL) /*!< Read: Disabled */
#define MODEMTIMER_INTENSET_COMPARE4_Enabled (1UL) /*!< Read: Enabled */
#define MODEMTIMER_INTENSET_COMPARE4_Set (1UL) /*!< Enable */

/* Bit 3 : Write '1' to enable interrupt for event COMPARE[3] */
#define MODEMTIMER_INTENSET_COMPARE3_Pos (3UL) /*!< Position of COMPARE3 field. */
#define MODEMTIMER_INTENSET_COMPARE3_Msk (0x1UL << MODEMTIMER_INTENSET_COMPARE3_Pos) /*!< Bit mask of COMPARE3 field. */
#define MODEMTIMER_INTENSET_COMPARE3_Disabled (0UL) /*!< Read: Disabled */
#define MODEMTIMER_INTENSET_COMPARE3_Enabled (1UL) /*!< Read: Enabled */
#define MODEMTIMER_INTENSET_COMPARE3_Set (1UL) /*!< Enable */

/* Bit 2 : Write '1' to enable interrupt for event COMPARE[2] */
#define MODEMTIMER_INTENSET_COMPARE2_Pos (2UL) /*!< Position of COMPARE2 field. */
#define MODEMTIMER_INTENSET_COMPARE2_Msk (0x1UL << MODEMTIMER_INTENSET_COMPARE2_Pos) /*!< Bit mask of COMPARE2 field. */
#define MODEMTIMER_INTENSET_COMPARE2_Disabled (0UL) /*!< Read: Disabled */
#define MODEMTIMER_INTENSET_COMPARE2_Enabled (1UL) /*!< Read: Enabled */
#define MODEMTIMER_INTENSET_COMPARE2_Set (1UL) /*!< Enable */

/* Bit 1 : Write '1' to enable interrupt for event COMPARE[1] */
#define MODEMTIMER_INTENSET_COMPARE1_Pos (1UL) /*!< Position of COMPARE1 field. */
#define MODEMTIMER_INTENSET_COMPARE1_Msk (0x1UL << MODEMTIMER_INTENSET_COMPARE1_Pos) /*!< Bit mask of COMPARE1 field. */
#define MODEMTIMER_INTENSET_COMPARE1_Disabled (0UL) /*!< Read: Disabled */
#define MODEMTIMER_INTENSET_COMPARE1_Enabled (1UL) /*!< Read: Enabled */
#define MODEMTIMER_INTENSET_COMPARE1_Set (1UL) /*!< Enable */

/* Bit 0 : Write '1' to enable interrupt for event COMPARE[0] */
#define MODEMTIMER_INTENSET_COMPARE0_Pos (0UL) /*!< Position of COMPARE0 field. */
#define MODEMTIMER_INTENSET_COMPARE0_Msk (0x1UL << MODEMTIMER_INTENSET_COMPARE0_Pos) /*!< Bit mask of COMPARE0 field. */
#define MODEMTIMER_INTENSET_COMPARE0_Disabled (0UL) /*!< Read: Disabled */
#define MODEMTIMER_INTENSET_COMPARE0_Enabled (1UL) /*!< Read: Enabled */
#define MODEMTIMER_INTENSET_COMPARE0_Set (1UL) /*!< Enable */

/* Register: MODEMTIMER_INTENCLR */
/* Description: Disable interrupt */

/* Bit 7 : Write '1' to disable interrupt for event COMPARE[7] */
#define MODEMTIMER_INTENCLR_COMPARE7_Pos (7UL) /*!< Position of COMPARE7 field. */
#define MODEMTIMER_INTENCLR_COMPARE7_Msk (0x1UL << MODEMTIMER_INTENCLR_COMPARE7_Pos) /*!< Bit mask of COMPARE7 field. */
#define MODEMTIMER_INTENCLR_COMPARE7_Disabled (0UL) /*!< Read: Disabled */
#define MODEMTIMER_INTENCLR_COMPARE7_Enabled (1UL) /*!< Read: Enabled */
#define MODEMTIMER_INTENCLR_COMPARE7_Clear (1UL) /*!< Disable */

/* Bit 6 : Write '1' to disable interrupt for event COMPARE[6] */
#define MODEMTIMER_INTENCLR_COMPARE6_Pos (6UL) /*!< Position of COMPARE6 field. */
#define MODEMTIMER_INTENCLR_COMPARE6_Msk (0x1UL << MODEMTIMER_INTENCLR_COMPARE6_Pos) /*!< Bit mask of COMPARE6 field. */
#define MODEMTIMER_INTENCLR_COMPARE6_Disabled (0UL) /*!< Read: Disabled */
#define MODEMTIMER_INTENCLR_COMPARE6_Enabled (1UL) /*!< Read: Enabled */
#define MODEMTIMER_INTENCLR_COMPARE6_Clear (1UL) /*!< Disable */

/* Bit 5 : Write '1' to disable interrupt for event COMPARE[5] */
#define MODEMTIMER_INTENCLR_COMPARE5_Pos (5UL) /*!< Position of COMPARE5 field. */
#define MODEMTIMER_INTENCLR_COMPARE5_Msk (0x1UL << MODEMTIMER_INTENCLR_COMPARE5_Pos) /*!< Bit mask of COMPARE5 field. */
#define MODEMTIMER_INTENCLR_COMPARE5_Disabled (0UL) /*!< Read: Disabled */
#define MODEMTIMER_INTENCLR_COMPARE5_Enabled (1UL) /*!< Read: Enabled */
#define MODEMTIMER_INTENCLR_COMPARE5_Clear (1UL) /*!< Disable */

/* Bit 4 : Write '1' to disable interrupt for event COMPARE[4] */
#define MODEMTIMER_INTENCLR_COMPARE4_Pos (4UL) /*!< Position of COMPARE4 field. */
#define MODEMTIMER_INTENCLR_COMPARE4_Msk (0x1UL << MODEMTIMER_INTENCLR_COMPARE4_Pos) /*!< Bit mask of COMPARE4 field. */
#define MODEMTIMER_INTENCLR_COMPARE4_Disabled (0UL) /*!< Read: Disabled */
#define MODEMTIMER_INTENCLR_COMPARE4_Enabled (1UL) /*!< Read: Enabled */
#define MODEMTIMER_INTENCLR_COMPARE4_Clear (1UL) /*!< Disable */

/* Bit 3 : Write '1' to disable interrupt for event COMPARE[3] */
#define MODEMTIMER_INTENCLR_COMPARE3_Pos (3UL) /*!< Position of COMPARE3 field. */
#define MODEMTIMER_INTENCLR_COMPARE3_Msk (0x1UL << MODEMTIMER_INTENCLR_COMPARE3_Pos) /*!< Bit mask of COMPARE3 field. */
#define MODEMTIMER_INTENCLR_COMPARE3_Disabled (0UL) /*!< Read: Disabled */
#define MODEMTIMER_INTENCLR_COMPARE3_Enabled (1UL) /*!< Read: Enabled */
#define MODEMTIMER_INTENCLR_COMPARE3_Clear (1UL) /*!< Disable */

/* Bit 2 : Write '1' to disable interrupt for event COMPARE[2] */
#define MODEMTIMER_INTENCLR_COMPARE2_Pos (2UL) /*!< Position of COMPARE2 field. */
#define MODEMTIMER_INTENCLR_COMPARE2_Msk (0x1UL << MODEMTIMER_INTENCLR_COMPARE2_Pos) /*!< Bit mask of COMPARE2 field. */
#define MODEMTIMER_INTENCLR_COMPARE2_Disabled (0UL) /*!< Read: Disabled */
#define MODEMTIMER_INTENCLR_COMPARE2_Enabled (1UL) /*!< Read: Enabled */
#define MODEMTIMER_INTENCLR_COMPARE2_Clear (1UL) /*!< Disable */

/* Bit 1 : Write '1' to disable interrupt for event COMPARE[1] */
#define MODEMTIMER_INTENCLR_COMPARE1_Pos (1UL) /*!< Position of COMPARE1 field. */
#define MODEMTIMER_INTENCLR_COMPARE1_Msk (0x1UL << MODEMTIMER_INTENCLR_COMPARE1_Pos) /*!< Bit mask of COMPARE1 field. */
#define MODEMTIMER_INTENCLR_COMPARE1_Disabled (0UL) /*!< Read: Disabled */
#define MODEMTIMER_INTENCLR_COMPARE1_Enabled (1UL) /*!< Read: Enabled */
#define MODEMTIMER_INTENCLR_COMPARE1_Clear (1UL) /*!< Disable */

/* Bit 0 : Write '1' to disable interrupt for event COMPARE[0] */
#define MODEMTIMER_INTENCLR_COMPARE0_Pos (0UL) /*!< Position of COMPARE0 field. */
#define MODEMTIMER_INTENCLR_COMPARE0_Msk (0x1UL << MODEMTIMER_INTENCLR_COMPARE0_Pos) /*!< Bit mask of COMPARE0 field. */
#define MODEMTIMER_INTENCLR_COMPARE0_Disabled (0UL) /*!< Read: Disabled */
#define MODEMTIMER_INTENCLR_COMPARE0_Enabled (1UL) /*!< Read: Enabled */
#define MODEMTIMER_INTENCLR_COMPARE0_Clear (1UL) /*!< Disable */

/* Register: MODEMTIMER_INTPEND */
/* Description: Pending interrupts */

/* Bit 7 : Read pending status of interrupt for event COMPARE[7] */
#define MODEMTIMER_INTPEND_COMPARE7_Pos (7UL) /*!< Position of COMPARE7 field. */
#define MODEMTIMER_INTPEND_COMPARE7_Msk (0x1UL << MODEMTIMER_INTPEND_COMPARE7_Pos) /*!< Bit mask of COMPARE7 field. */
#define MODEMTIMER_INTPEND_COMPARE7_NotPending (0UL) /*!< Read: Not pending */
#define MODEMTIMER_INTPEND_COMPARE7_Pending (1UL) /*!< Read: Pending */

/* Bit 6 : Read pending status of interrupt for event COMPARE[6] */
#define MODEMTIMER_INTPEND_COMPARE6_Pos (6UL) /*!< Position of COMPARE6 field. */
#define MODEMTIMER_INTPEND_COMPARE6_Msk (0x1UL << MODEMTIMER_INTPEND_COMPARE6_Pos) /*!< Bit mask of COMPARE6 field. */
#define MODEMTIMER_INTPEND_COMPARE6_NotPending (0UL) /*!< Read: Not pending */
#define MODEMTIMER_INTPEND_COMPARE6_Pending (1UL) /*!< Read: Pending */

/* Bit 5 : Read pending status of interrupt for event COMPARE[5] */
#define MODEMTIMER_INTPEND_COMPARE5_Pos (5UL) /*!< Position of COMPARE5 field. */
#define MODEMTIMER_INTPEND_COMPARE5_Msk (0x1UL << MODEMTIMER_INTPEND_COMPARE5_Pos) /*!< Bit mask of COMPARE5 field. */
#define MODEMTIMER_INTPEND_COMPARE5_NotPending (0UL) /*!< Read: Not pending */
#define MODEMTIMER_INTPEND_COMPARE5_Pending (1UL) /*!< Read: Pending */

/* Bit 4 : Read pending status of interrupt for event COMPARE[4] */
#define MODEMTIMER_INTPEND_COMPARE4_Pos (4UL) /*!< Position of COMPARE4 field. */
#define MODEMTIMER_INTPEND_COMPARE4_Msk (0x1UL << MODEMTIMER_INTPEND_COMPARE4_Pos) /*!< Bit mask of COMPARE4 field. */
#define MODEMTIMER_INTPEND_COMPARE4_NotPending (0UL) /*!< Read: Not pending */
#define MODEMTIMER_INTPEND_COMPARE4_Pending (1UL) /*!< Read: Pending */

/* Bit 3 : Read pending status of interrupt for event COMPARE[3] */
#define MODEMTIMER_INTPEND_COMPARE3_Pos (3UL) /*!< Position of COMPARE3 field. */
#define MODEMTIMER_INTPEND_COMPARE3_Msk (0x1UL << MODEMTIMER_INTPEND_COMPARE3_Pos) /*!< Bit mask of COMPARE3 field. */
#define MODEMTIMER_INTPEND_COMPARE3_NotPending (0UL) /*!< Read: Not pending */
#define MODEMTIMER_INTPEND_COMPARE3_Pending (1UL) /*!< Read: Pending */

/* Bit 2 : Read pending status of interrupt for event COMPARE[2] */
#define MODEMTIMER_INTPEND_COMPARE2_Pos (2UL) /*!< Position of COMPARE2 field. */
#define MODEMTIMER_INTPEND_COMPARE2_Msk (0x1UL << MODEMTIMER_INTPEND_COMPARE2_Pos) /*!< Bit mask of COMPARE2 field. */
#define MODEMTIMER_INTPEND_COMPARE2_NotPending (0UL) /*!< Read: Not pending */
#define MODEMTIMER_INTPEND_COMPARE2_Pending (1UL) /*!< Read: Pending */

/* Bit 1 : Read pending status of interrupt for event COMPARE[1] */
#define MODEMTIMER_INTPEND_COMPARE1_Pos (1UL) /*!< Position of COMPARE1 field. */
#define MODEMTIMER_INTPEND_COMPARE1_Msk (0x1UL << MODEMTIMER_INTPEND_COMPARE1_Pos) /*!< Bit mask of COMPARE1 field. */
#define MODEMTIMER_INTPEND_COMPARE1_NotPending (0UL) /*!< Read: Not pending */
#define MODEMTIMER_INTPEND_COMPARE1_Pending (1UL) /*!< Read: Pending */

/* Bit 0 : Read pending status of interrupt for event COMPARE[0] */
#define MODEMTIMER_INTPEND_COMPARE0_Pos (0UL) /*!< Position of COMPARE0 field. */
#define MODEMTIMER_INTPEND_COMPARE0_Msk (0x1UL << MODEMTIMER_INTPEND_COMPARE0_Pos) /*!< Bit mask of COMPARE0 field. */
#define MODEMTIMER_INTPEND_COMPARE0_NotPending (0UL) /*!< Read: Not pending */
#define MODEMTIMER_INTPEND_COMPARE0_Pending (1UL) /*!< Read: Pending */

/* Register: MODEMTIMER_RUNNING */
/* Description: Status of running timer */

/* Bits 1..0 : Current status */
#define MODEMTIMER_RUNNING_STATUS_Pos (0UL) /*!< Position of STATUS field. */
#define MODEMTIMER_RUNNING_STATUS_Msk (0x3UL << MODEMTIMER_RUNNING_STATUS_Pos) /*!< Bit mask of STATUS field. */
#define MODEMTIMER_RUNNING_STATUS_SHUTDOWN (0UL) /*!< Timer is powered off. */
#define MODEMTIMER_RUNNING_STATUS_RUNNING (1UL) /*!< Timer is actively running. */
#define MODEMTIMER_RUNNING_STATUS_STOPPED (2UL) /*!< Timer is stopped. */

/* Register: MODEMTIMER_CCLO0 */
/* Description: Capture/Compare register 0 - Low Word */

/* Bits 31..0 : Capture/Compare value Low Word */
#define MODEMTIMER_CCLO0_CCLO_Pos (0UL) /*!< Position of CCLO field. */
#define MODEMTIMER_CCLO0_CCLO_Msk (0xFFFFFFFFUL << MODEMTIMER_CCLO0_CCLO_Pos) /*!< Bit mask of CCLO field. */

/* Register: MODEMTIMER_CCHI0 */
/* Description: Capture/Compare register 0 - High Word */

/* Bits 31..0 : Capture/Compare value High Word */
#define MODEMTIMER_CCHI0_CCHI_Pos (0UL) /*!< Position of CCHI field. */
#define MODEMTIMER_CCHI0_CCHI_Msk (0xFFFFFFFFUL << MODEMTIMER_CCHI0_CCHI_Pos) /*!< Bit mask of CCHI field. */

/* Register: MODEMTIMER_CCLO1 */
/* Description: Capture/Compare register 1 - Low Word */

/* Bits 31..0 : Capture/Compare value Low Word */
#define MODEMTIMER_CCLO1_CCLO_Pos (0UL) /*!< Position of CCLO field. */
#define MODEMTIMER_CCLO1_CCLO_Msk (0xFFFFFFFFUL << MODEMTIMER_CCLO1_CCLO_Pos) /*!< Bit mask of CCLO field. */

/* Register: MODEMTIMER_CCHI1 */
/* Description: Capture/Compare register 1 - High Word */

/* Bits 31..0 : Capture/Compare value High Word */
#define MODEMTIMER_CCHI1_CCHI_Pos (0UL) /*!< Position of CCHI field. */
#define MODEMTIMER_CCHI1_CCHI_Msk (0xFFFFFFFFUL << MODEMTIMER_CCHI1_CCHI_Pos) /*!< Bit mask of CCHI field. */

/* Register: MODEMTIMER_CCLO2 */
/* Description: Capture/Compare register 2 - Low Word */

/* Bits 31..0 : Capture/Compare value Low Word */
#define MODEMTIMER_CCLO2_CCLO_Pos (0UL) /*!< Position of CCLO field. */
#define MODEMTIMER_CCLO2_CCLO_Msk (0xFFFFFFFFUL << MODEMTIMER_CCLO2_CCLO_Pos) /*!< Bit mask of CCLO field. */

/* Register: MODEMTIMER_CCHI2 */
/* Description: Capture/Compare register 2 - High Word */

/* Bits 31..0 : Capture/Compare value High Word */
#define MODEMTIMER_CCHI2_CCHI_Pos (0UL) /*!< Position of CCHI field. */
#define MODEMTIMER_CCHI2_CCHI_Msk (0xFFFFFFFFUL << MODEMTIMER_CCHI2_CCHI_Pos) /*!< Bit mask of CCHI field. */

/* Register: MODEMTIMER_CCLO3 */
/* Description: Capture/Compare register 3 - Low Word */

/* Bits 31..0 : Capture/Compare value Low Word */
#define MODEMTIMER_CCLO3_CCLO_Pos (0UL) /*!< Position of CCLO field. */
#define MODEMTIMER_CCLO3_CCLO_Msk (0xFFFFFFFFUL << MODEMTIMER_CCLO3_CCLO_Pos) /*!< Bit mask of CCLO field. */

/* Register: MODEMTIMER_CCHI3 */
/* Description: Capture/Compare register 3 - High Word */

/* Bits 31..0 : Capture/Compare value High Word */
#define MODEMTIMER_CCHI3_CCHI_Pos (0UL) /*!< Position of CCHI field. */
#define MODEMTIMER_CCHI3_CCHI_Msk (0xFFFFFFFFUL << MODEMTIMER_CCHI3_CCHI_Pos) /*!< Bit mask of CCHI field. */

/* Register: MODEMTIMER_CCLO4 */
/* Description: Capture/Compare register 4 - Low Word */

/* Bits 31..0 : Capture/Compare value Low Word */
#define MODEMTIMER_CCLO4_CCLO_Pos (0UL) /*!< Position of CCLO field. */
#define MODEMTIMER_CCLO4_CCLO_Msk (0xFFFFFFFFUL << MODEMTIMER_CCLO4_CCLO_Pos) /*!< Bit mask of CCLO field. */

/* Register: MODEMTIMER_CCHI4 */
/* Description: Capture/Compare register 4 - High Word */

/* Bits 31..0 : Capture/Compare value High Word */
#define MODEMTIMER_CCHI4_CCHI_Pos (0UL) /*!< Position of CCHI field. */
#define MODEMTIMER_CCHI4_CCHI_Msk (0xFFFFFFFFUL << MODEMTIMER_CCHI4_CCHI_Pos) /*!< Bit mask of CCHI field. */

/* Register: MODEMTIMER_CCLO5 */
/* Description: Capture/Compare register 5 - Low Word */

/* Bits 31..0 : Capture/Compare value Low Word */
#define MODEMTIMER_CCLO5_CCLO_Pos (0UL) /*!< Position of CCLO field. */
#define MODEMTIMER_CCLO5_CCLO_Msk (0xFFFFFFFFUL << MODEMTIMER_CCLO5_CCLO_Pos) /*!< Bit mask of CCLO field. */

/* Register: MODEMTIMER_CCHI5 */
/* Description: Capture/Compare register 5 - High Word */

/* Bits 31..0 : Capture/Compare value High Word */
#define MODEMTIMER_CCHI5_CCHI_Pos (0UL) /*!< Position of CCHI field. */
#define MODEMTIMER_CCHI5_CCHI_Msk (0xFFFFFFFFUL << MODEMTIMER_CCHI5_CCHI_Pos) /*!< Bit mask of CCHI field. */

/* Register: MODEMTIMER_CCLO6 */
/* Description: Capture/Compare register 6 - Low Word */

/* Bits 31..0 : Capture/Compare value Low Word */
#define MODEMTIMER_CCLO6_CCLO_Pos (0UL) /*!< Position of CCLO field. */
#define MODEMTIMER_CCLO6_CCLO_Msk (0xFFFFFFFFUL << MODEMTIMER_CCLO6_CCLO_Pos) /*!< Bit mask of CCLO field. */

/* Register: MODEMTIMER_CCHI6 */
/* Description: Capture/Compare register 6 - High Word */

/* Bits 31..0 : Capture/Compare value High Word */
#define MODEMTIMER_CCHI6_CCHI_Pos (0UL) /*!< Position of CCHI field. */
#define MODEMTIMER_CCHI6_CCHI_Msk (0xFFFFFFFFUL << MODEMTIMER_CCHI6_CCHI_Pos) /*!< Bit mask of CCHI field. */

/* Register: MODEMTIMER_CCLO7 */
/* Description: Capture/Compare register 7 - Low Word */

/* Bits 31..0 : Capture/Compare value Low Word */
#define MODEMTIMER_CCLO7_CCLO_Pos (0UL) /*!< Position of CCLO field. */
#define MODEMTIMER_CCLO7_CCLO_Msk (0xFFFFFFFFUL << MODEMTIMER_CCLO7_CCLO_Pos) /*!< Bit mask of CCLO field. */

/* Register: MODEMTIMER_CCHI7 */
/* Description: Capture/Compare register 7 - High Word */

/* Bits 31..0 : Capture/Compare value High Word */
#define MODEMTIMER_CCHI7_CCHI_Pos (0UL) /*!< Position of CCHI field. */
#define MODEMTIMER_CCHI7_CCHI_Msk (0xFFFFFFFFUL << MODEMTIMER_CCHI7_CCHI_Pos) /*!< Bit mask of CCHI field. */

/* Register: MODEMTIMER_COUNTLO */
/* Description: Internal Counter Value - Low Word */

/* Bits 31..0 : Internal Counter Value - Low Word */
#define MODEMTIMER_COUNTLO_COUNTLO_Pos (0UL) /*!< Position of COUNTLO field. */
#define MODEMTIMER_COUNTLO_COUNTLO_Msk (0xFFFFFFFFUL << MODEMTIMER_COUNTLO_COUNTLO_Pos) /*!< Bit mask of COUNTLO field. */

/* Register: MODEMTIMER_COUNTHI */
/* Description: Internal Counter Value - High Word */

/* Bits 31..0 : Internal Counter Value High Word */
#define MODEMTIMER_COUNTHI_COUNTHI_Pos (0UL) /*!< Position of COUNTHI field. */
#define MODEMTIMER_COUNTHI_COUNTHI_Msk (0xFFFFFFFFUL << MODEMTIMER_COUNTHI_COUNTHI_Pos) /*!< Bit mask of COUNTHI field. */

/* Register: MODEMTIMER_POWER */
/* Description: Peripheral power control */

/* Bit 0 : Peripheral power control. The peripheral and its registers will be reset to its initial state by switching the peripheral off and then back on again. */
#define MODEMTIMER_POWER_POWER_Pos (0UL) /*!< Position of POWER field. */
#define MODEMTIMER_POWER_POWER_Msk (0x1UL << MODEMTIMER_POWER_POWER_Pos) /*!< Bit mask of POWER field. */
#define MODEMTIMER_POWER_POWER_Disabled (0UL) /*!< Peripheral is powered off */
#define MODEMTIMER_POWER_POWER_Enabled (1UL) /*!< Peripheral is powered on */


/* Peripheral: MWU */
/* Description: Memory Watch Unit */

/* Register: MWU_EVENTS_REGION_WA */
/* Description: Description cluster: Write access to region n detected */

/* Bit 0 : Write access to region n detected */
#define MWU_EVENTS_REGION_WA_WA_Pos (0UL) /*!< Position of WA field. */
#define MWU_EVENTS_REGION_WA_WA_Msk (0x1UL << MWU_EVENTS_REGION_WA_WA_Pos) /*!< Bit mask of WA field. */
#define MWU_EVENTS_REGION_WA_WA_NotGenerated (0UL) /*!< Event not generated */
#define MWU_EVENTS_REGION_WA_WA_Generated (1UL) /*!< Event generated */

/* Register: MWU_EVENTS_REGION_RA */
/* Description: Description cluster: Read access to region n detected */

/* Bit 0 : Read access to region n detected */
#define MWU_EVENTS_REGION_RA_RA_Pos (0UL) /*!< Position of RA field. */
#define MWU_EVENTS_REGION_RA_RA_Msk (0x1UL << MWU_EVENTS_REGION_RA_RA_Pos) /*!< Bit mask of RA field. */
#define MWU_EVENTS_REGION_RA_RA_NotGenerated (0UL) /*!< Event not generated */
#define MWU_EVENTS_REGION_RA_RA_Generated (1UL) /*!< Event generated */

/* Register: MWU_EVENTS_PREGION_WA */
/* Description: Description cluster: Write access to peripheral region n detected */

/* Bit 0 : Write access to peripheral region n detected */
#define MWU_EVENTS_PREGION_WA_WA_Pos (0UL) /*!< Position of WA field. */
#define MWU_EVENTS_PREGION_WA_WA_Msk (0x1UL << MWU_EVENTS_PREGION_WA_WA_Pos) /*!< Bit mask of WA field. */
#define MWU_EVENTS_PREGION_WA_WA_NotGenerated (0UL) /*!< Event not generated */
#define MWU_EVENTS_PREGION_WA_WA_Generated (1UL) /*!< Event generated */

/* Register: MWU_EVENTS_PREGION_RA */
/* Description: Description cluster: Read access to peripheral region n detected */

/* Bit 0 : Read access to peripheral region n detected */
#define MWU_EVENTS_PREGION_RA_RA_Pos (0UL) /*!< Position of RA field. */
#define MWU_EVENTS_PREGION_RA_RA_Msk (0x1UL << MWU_EVENTS_PREGION_RA_RA_Pos) /*!< Bit mask of RA field. */
#define MWU_EVENTS_PREGION_RA_RA_NotGenerated (0UL) /*!< Event not generated */
#define MWU_EVENTS_PREGION_RA_RA_Generated (1UL) /*!< Event generated */

/* Register: MWU_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 27 : Enable or disable interrupt for event PREGION1RA */
#define MWU_INTEN_PREGION1RA_Pos (27UL) /*!< Position of PREGION1RA field. */
#define MWU_INTEN_PREGION1RA_Msk (0x1UL << MWU_INTEN_PREGION1RA_Pos) /*!< Bit mask of PREGION1RA field. */
#define MWU_INTEN_PREGION1RA_Disabled (0UL) /*!< Disable */
#define MWU_INTEN_PREGION1RA_Enabled (1UL) /*!< Enable */

/* Bit 26 : Enable or disable interrupt for event PREGION1WA */
#define MWU_INTEN_PREGION1WA_Pos (26UL) /*!< Position of PREGION1WA field. */
#define MWU_INTEN_PREGION1WA_Msk (0x1UL << MWU_INTEN_PREGION1WA_Pos) /*!< Bit mask of PREGION1WA field. */
#define MWU_INTEN_PREGION1WA_Disabled (0UL) /*!< Disable */
#define MWU_INTEN_PREGION1WA_Enabled (1UL) /*!< Enable */

/* Bit 25 : Enable or disable interrupt for event PREGION0RA */
#define MWU_INTEN_PREGION0RA_Pos (25UL) /*!< Position of PREGION0RA field. */
#define MWU_INTEN_PREGION0RA_Msk (0x1UL << MWU_INTEN_PREGION0RA_Pos) /*!< Bit mask of PREGION0RA field. */
#define MWU_INTEN_PREGION0RA_Disabled (0UL) /*!< Disable */
#define MWU_INTEN_PREGION0RA_Enabled (1UL) /*!< Enable */

/* Bit 24 : Enable or disable interrupt for event PREGION0WA */
#define MWU_INTEN_PREGION0WA_Pos (24UL) /*!< Position of PREGION0WA field. */
#define MWU_INTEN_PREGION0WA_Msk (0x1UL << MWU_INTEN_PREGION0WA_Pos) /*!< Bit mask of PREGION0WA field. */
#define MWU_INTEN_PREGION0WA_Disabled (0UL) /*!< Disable */
#define MWU_INTEN_PREGION0WA_Enabled (1UL) /*!< Enable */

/* Bit 7 : Enable or disable interrupt for event REGION3RA */
#define MWU_INTEN_REGION3RA_Pos (7UL) /*!< Position of REGION3RA field. */
#define MWU_INTEN_REGION3RA_Msk (0x1UL << MWU_INTEN_REGION3RA_Pos) /*!< Bit mask of REGION3RA field. */
#define MWU_INTEN_REGION3RA_Disabled (0UL) /*!< Disable */
#define MWU_INTEN_REGION3RA_Enabled (1UL) /*!< Enable */

/* Bit 6 : Enable or disable interrupt for event REGION3WA */
#define MWU_INTEN_REGION3WA_Pos (6UL) /*!< Position of REGION3WA field. */
#define MWU_INTEN_REGION3WA_Msk (0x1UL << MWU_INTEN_REGION3WA_Pos) /*!< Bit mask of REGION3WA field. */
#define MWU_INTEN_REGION3WA_Disabled (0UL) /*!< Disable */
#define MWU_INTEN_REGION3WA_Enabled (1UL) /*!< Enable */

/* Bit 5 : Enable or disable interrupt for event REGION2RA */
#define MWU_INTEN_REGION2RA_Pos (5UL) /*!< Position of REGION2RA field. */
#define MWU_INTEN_REGION2RA_Msk (0x1UL << MWU_INTEN_REGION2RA_Pos) /*!< Bit mask of REGION2RA field. */
#define MWU_INTEN_REGION2RA_Disabled (0UL) /*!< Disable */
#define MWU_INTEN_REGION2RA_Enabled (1UL) /*!< Enable */

/* Bit 4 : Enable or disable interrupt for event REGION2WA */
#define MWU_INTEN_REGION2WA_Pos (4UL) /*!< Position of REGION2WA field. */
#define MWU_INTEN_REGION2WA_Msk (0x1UL << MWU_INTEN_REGION2WA_Pos) /*!< Bit mask of REGION2WA field. */
#define MWU_INTEN_REGION2WA_Disabled (0UL) /*!< Disable */
#define MWU_INTEN_REGION2WA_Enabled (1UL) /*!< Enable */

/* Bit 3 : Enable or disable interrupt for event REGION1RA */
#define MWU_INTEN_REGION1RA_Pos (3UL) /*!< Position of REGION1RA field. */
#define MWU_INTEN_REGION1RA_Msk (0x1UL << MWU_INTEN_REGION1RA_Pos) /*!< Bit mask of REGION1RA field. */
#define MWU_INTEN_REGION1RA_Disabled (0UL) /*!< Disable */
#define MWU_INTEN_REGION1RA_Enabled (1UL) /*!< Enable */

/* Bit 2 : Enable or disable interrupt for event REGION1WA */
#define MWU_INTEN_REGION1WA_Pos (2UL) /*!< Position of REGION1WA field. */
#define MWU_INTEN_REGION1WA_Msk (0x1UL << MWU_INTEN_REGION1WA_Pos) /*!< Bit mask of REGION1WA field. */
#define MWU_INTEN_REGION1WA_Disabled (0UL) /*!< Disable */
#define MWU_INTEN_REGION1WA_Enabled (1UL) /*!< Enable */

/* Bit 1 : Enable or disable interrupt for event REGION0RA */
#define MWU_INTEN_REGION0RA_Pos (1UL) /*!< Position of REGION0RA field. */
#define MWU_INTEN_REGION0RA_Msk (0x1UL << MWU_INTEN_REGION0RA_Pos) /*!< Bit mask of REGION0RA field. */
#define MWU_INTEN_REGION0RA_Disabled (0UL) /*!< Disable */
#define MWU_INTEN_REGION0RA_Enabled (1UL) /*!< Enable */

/* Bit 0 : Enable or disable interrupt for event REGION0WA */
#define MWU_INTEN_REGION0WA_Pos (0UL) /*!< Position of REGION0WA field. */
#define MWU_INTEN_REGION0WA_Msk (0x1UL << MWU_INTEN_REGION0WA_Pos) /*!< Bit mask of REGION0WA field. */
#define MWU_INTEN_REGION0WA_Disabled (0UL) /*!< Disable */
#define MWU_INTEN_REGION0WA_Enabled (1UL) /*!< Enable */

/* Register: MWU_INTENSET */
/* Description: Enable interrupt */

/* Bit 27 : Write '1' to enable interrupt for event PREGION1RA */
#define MWU_INTENSET_PREGION1RA_Pos (27UL) /*!< Position of PREGION1RA field. */
#define MWU_INTENSET_PREGION1RA_Msk (0x1UL << MWU_INTENSET_PREGION1RA_Pos) /*!< Bit mask of PREGION1RA field. */
#define MWU_INTENSET_PREGION1RA_Disabled (0UL) /*!< Read: Disabled */
#define MWU_INTENSET_PREGION1RA_Enabled (1UL) /*!< Read: Enabled */
#define MWU_INTENSET_PREGION1RA_Set (1UL) /*!< Enable */

/* Bit 26 : Write '1' to enable interrupt for event PREGION1WA */
#define MWU_INTENSET_PREGION1WA_Pos (26UL) /*!< Position of PREGION1WA field. */
#define MWU_INTENSET_PREGION1WA_Msk (0x1UL << MWU_INTENSET_PREGION1WA_Pos) /*!< Bit mask of PREGION1WA field. */
#define MWU_INTENSET_PREGION1WA_Disabled (0UL) /*!< Read: Disabled */
#define MWU_INTENSET_PREGION1WA_Enabled (1UL) /*!< Read: Enabled */
#define MWU_INTENSET_PREGION1WA_Set (1UL) /*!< Enable */

/* Bit 25 : Write '1' to enable interrupt for event PREGION0RA */
#define MWU_INTENSET_PREGION0RA_Pos (25UL) /*!< Position of PREGION0RA field. */
#define MWU_INTENSET_PREGION0RA_Msk (0x1UL << MWU_INTENSET_PREGION0RA_Pos) /*!< Bit mask of PREGION0RA field. */
#define MWU_INTENSET_PREGION0RA_Disabled (0UL) /*!< Read: Disabled */
#define MWU_INTENSET_PREGION0RA_Enabled (1UL) /*!< Read: Enabled */
#define MWU_INTENSET_PREGION0RA_Set (1UL) /*!< Enable */

/* Bit 24 : Write '1' to enable interrupt for event PREGION0WA */
#define MWU_INTENSET_PREGION0WA_Pos (24UL) /*!< Position of PREGION0WA field. */
#define MWU_INTENSET_PREGION0WA_Msk (0x1UL << MWU_INTENSET_PREGION0WA_Pos) /*!< Bit mask of PREGION0WA field. */
#define MWU_INTENSET_PREGION0WA_Disabled (0UL) /*!< Read: Disabled */
#define MWU_INTENSET_PREGION0WA_Enabled (1UL) /*!< Read: Enabled */
#define MWU_INTENSET_PREGION0WA_Set (1UL) /*!< Enable */

/* Bit 7 : Write '1' to enable interrupt for event REGION3RA */
#define MWU_INTENSET_REGION3RA_Pos (7UL) /*!< Position of REGION3RA field. */
#define MWU_INTENSET_REGION3RA_Msk (0x1UL << MWU_INTENSET_REGION3RA_Pos) /*!< Bit mask of REGION3RA field. */
#define MWU_INTENSET_REGION3RA_Disabled (0UL) /*!< Read: Disabled */
#define MWU_INTENSET_REGION3RA_Enabled (1UL) /*!< Read: Enabled */
#define MWU_INTENSET_REGION3RA_Set (1UL) /*!< Enable */

/* Bit 6 : Write '1' to enable interrupt for event REGION3WA */
#define MWU_INTENSET_REGION3WA_Pos (6UL) /*!< Position of REGION3WA field. */
#define MWU_INTENSET_REGION3WA_Msk (0x1UL << MWU_INTENSET_REGION3WA_Pos) /*!< Bit mask of REGION3WA field. */
#define MWU_INTENSET_REGION3WA_Disabled (0UL) /*!< Read: Disabled */
#define MWU_INTENSET_REGION3WA_Enabled (1UL) /*!< Read: Enabled */
#define MWU_INTENSET_REGION3WA_Set (1UL) /*!< Enable */

/* Bit 5 : Write '1' to enable interrupt for event REGION2RA */
#define MWU_INTENSET_REGION2RA_Pos (5UL) /*!< Position of REGION2RA field. */
#define MWU_INTENSET_REGION2RA_Msk (0x1UL << MWU_INTENSET_REGION2RA_Pos) /*!< Bit mask of REGION2RA field. */
#define MWU_INTENSET_REGION2RA_Disabled (0UL) /*!< Read: Disabled */
#define MWU_INTENSET_REGION2RA_Enabled (1UL) /*!< Read: Enabled */
#define MWU_INTENSET_REGION2RA_Set (1UL) /*!< Enable */

/* Bit 4 : Write '1' to enable interrupt for event REGION2WA */
#define MWU_INTENSET_REGION2WA_Pos (4UL) /*!< Position of REGION2WA field. */
#define MWU_INTENSET_REGION2WA_Msk (0x1UL << MWU_INTENSET_REGION2WA_Pos) /*!< Bit mask of REGION2WA field. */
#define MWU_INTENSET_REGION2WA_Disabled (0UL) /*!< Read: Disabled */
#define MWU_INTENSET_REGION2WA_Enabled (1UL) /*!< Read: Enabled */
#define MWU_INTENSET_REGION2WA_Set (1UL) /*!< Enable */

/* Bit 3 : Write '1' to enable interrupt for event REGION1RA */
#define MWU_INTENSET_REGION1RA_Pos (3UL) /*!< Position of REGION1RA field. */
#define MWU_INTENSET_REGION1RA_Msk (0x1UL << MWU_INTENSET_REGION1RA_Pos) /*!< Bit mask of REGION1RA field. */
#define MWU_INTENSET_REGION1RA_Disabled (0UL) /*!< Read: Disabled */
#define MWU_INTENSET_REGION1RA_Enabled (1UL) /*!< Read: Enabled */
#define MWU_INTENSET_REGION1RA_Set (1UL) /*!< Enable */

/* Bit 2 : Write '1' to enable interrupt for event REGION1WA */
#define MWU_INTENSET_REGION1WA_Pos (2UL) /*!< Position of REGION1WA field. */
#define MWU_INTENSET_REGION1WA_Msk (0x1UL << MWU_INTENSET_REGION1WA_Pos) /*!< Bit mask of REGION1WA field. */
#define MWU_INTENSET_REGION1WA_Disabled (0UL) /*!< Read: Disabled */
#define MWU_INTENSET_REGION1WA_Enabled (1UL) /*!< Read: Enabled */
#define MWU_INTENSET_REGION1WA_Set (1UL) /*!< Enable */

/* Bit 1 : Write '1' to enable interrupt for event REGION0RA */
#define MWU_INTENSET_REGION0RA_Pos (1UL) /*!< Position of REGION0RA field. */
#define MWU_INTENSET_REGION0RA_Msk (0x1UL << MWU_INTENSET_REGION0RA_Pos) /*!< Bit mask of REGION0RA field. */
#define MWU_INTENSET_REGION0RA_Disabled (0UL) /*!< Read: Disabled */
#define MWU_INTENSET_REGION0RA_Enabled (1UL) /*!< Read: Enabled */
#define MWU_INTENSET_REGION0RA_Set (1UL) /*!< Enable */

/* Bit 0 : Write '1' to enable interrupt for event REGION0WA */
#define MWU_INTENSET_REGION0WA_Pos (0UL) /*!< Position of REGION0WA field. */
#define MWU_INTENSET_REGION0WA_Msk (0x1UL << MWU_INTENSET_REGION0WA_Pos) /*!< Bit mask of REGION0WA field. */
#define MWU_INTENSET_REGION0WA_Disabled (0UL) /*!< Read: Disabled */
#define MWU_INTENSET_REGION0WA_Enabled (1UL) /*!< Read: Enabled */
#define MWU_INTENSET_REGION0WA_Set (1UL) /*!< Enable */

/* Register: MWU_INTENCLR */
/* Description: Disable interrupt */

/* Bit 27 : Write '1' to disable interrupt for event PREGION1RA */
#define MWU_INTENCLR_PREGION1RA_Pos (27UL) /*!< Position of PREGION1RA field. */
#define MWU_INTENCLR_PREGION1RA_Msk (0x1UL << MWU_INTENCLR_PREGION1RA_Pos) /*!< Bit mask of PREGION1RA field. */
#define MWU_INTENCLR_PREGION1RA_Disabled (0UL) /*!< Read: Disabled */
#define MWU_INTENCLR_PREGION1RA_Enabled (1UL) /*!< Read: Enabled */
#define MWU_INTENCLR_PREGION1RA_Clear (1UL) /*!< Disable */

/* Bit 26 : Write '1' to disable interrupt for event PREGION1WA */
#define MWU_INTENCLR_PREGION1WA_Pos (26UL) /*!< Position of PREGION1WA field. */
#define MWU_INTENCLR_PREGION1WA_Msk (0x1UL << MWU_INTENCLR_PREGION1WA_Pos) /*!< Bit mask of PREGION1WA field. */
#define MWU_INTENCLR_PREGION1WA_Disabled (0UL) /*!< Read: Disabled */
#define MWU_INTENCLR_PREGION1WA_Enabled (1UL) /*!< Read: Enabled */
#define MWU_INTENCLR_PREGION1WA_Clear (1UL) /*!< Disable */

/* Bit 25 : Write '1' to disable interrupt for event PREGION0RA */
#define MWU_INTENCLR_PREGION0RA_Pos (25UL) /*!< Position of PREGION0RA field. */
#define MWU_INTENCLR_PREGION0RA_Msk (0x1UL << MWU_INTENCLR_PREGION0RA_Pos) /*!< Bit mask of PREGION0RA field. */
#define MWU_INTENCLR_PREGION0RA_Disabled (0UL) /*!< Read: Disabled */
#define MWU_INTENCLR_PREGION0RA_Enabled (1UL) /*!< Read: Enabled */
#define MWU_INTENCLR_PREGION0RA_Clear (1UL) /*!< Disable */

/* Bit 24 : Write '1' to disable interrupt for event PREGION0WA */
#define MWU_INTENCLR_PREGION0WA_Pos (24UL) /*!< Position of PREGION0WA field. */
#define MWU_INTENCLR_PREGION0WA_Msk (0x1UL << MWU_INTENCLR_PREGION0WA_Pos) /*!< Bit mask of PREGION0WA field. */
#define MWU_INTENCLR_PREGION0WA_Disabled (0UL) /*!< Read: Disabled */
#define MWU_INTENCLR_PREGION0WA_Enabled (1UL) /*!< Read: Enabled */
#define MWU_INTENCLR_PREGION0WA_Clear (1UL) /*!< Disable */

/* Bit 7 : Write '1' to disable interrupt for event REGION3RA */
#define MWU_INTENCLR_REGION3RA_Pos (7UL) /*!< Position of REGION3RA field. */
#define MWU_INTENCLR_REGION3RA_Msk (0x1UL << MWU_INTENCLR_REGION3RA_Pos) /*!< Bit mask of REGION3RA field. */
#define MWU_INTENCLR_REGION3RA_Disabled (0UL) /*!< Read: Disabled */
#define MWU_INTENCLR_REGION3RA_Enabled (1UL) /*!< Read: Enabled */
#define MWU_INTENCLR_REGION3RA_Clear (1UL) /*!< Disable */

/* Bit 6 : Write '1' to disable interrupt for event REGION3WA */
#define MWU_INTENCLR_REGION3WA_Pos (6UL) /*!< Position of REGION3WA field. */
#define MWU_INTENCLR_REGION3WA_Msk (0x1UL << MWU_INTENCLR_REGION3WA_Pos) /*!< Bit mask of REGION3WA field. */
#define MWU_INTENCLR_REGION3WA_Disabled (0UL) /*!< Read: Disabled */
#define MWU_INTENCLR_REGION3WA_Enabled (1UL) /*!< Read: Enabled */
#define MWU_INTENCLR_REGION3WA_Clear (1UL) /*!< Disable */

/* Bit 5 : Write '1' to disable interrupt for event REGION2RA */
#define MWU_INTENCLR_REGION2RA_Pos (5UL) /*!< Position of REGION2RA field. */
#define MWU_INTENCLR_REGION2RA_Msk (0x1UL << MWU_INTENCLR_REGION2RA_Pos) /*!< Bit mask of REGION2RA field. */
#define MWU_INTENCLR_REGION2RA_Disabled (0UL) /*!< Read: Disabled */
#define MWU_INTENCLR_REGION2RA_Enabled (1UL) /*!< Read: Enabled */
#define MWU_INTENCLR_REGION2RA_Clear (1UL) /*!< Disable */

/* Bit 4 : Write '1' to disable interrupt for event REGION2WA */
#define MWU_INTENCLR_REGION2WA_Pos (4UL) /*!< Position of REGION2WA field. */
#define MWU_INTENCLR_REGION2WA_Msk (0x1UL << MWU_INTENCLR_REGION2WA_Pos) /*!< Bit mask of REGION2WA field. */
#define MWU_INTENCLR_REGION2WA_Disabled (0UL) /*!< Read: Disabled */
#define MWU_INTENCLR_REGION2WA_Enabled (1UL) /*!< Read: Enabled */
#define MWU_INTENCLR_REGION2WA_Clear (1UL) /*!< Disable */

/* Bit 3 : Write '1' to disable interrupt for event REGION1RA */
#define MWU_INTENCLR_REGION1RA_Pos (3UL) /*!< Position of REGION1RA field. */
#define MWU_INTENCLR_REGION1RA_Msk (0x1UL << MWU_INTENCLR_REGION1RA_Pos) /*!< Bit mask of REGION1RA field. */
#define MWU_INTENCLR_REGION1RA_Disabled (0UL) /*!< Read: Disabled */
#define MWU_INTENCLR_REGION1RA_Enabled (1UL) /*!< Read: Enabled */
#define MWU_INTENCLR_REGION1RA_Clear (1UL) /*!< Disable */

/* Bit 2 : Write '1' to disable interrupt for event REGION1WA */
#define MWU_INTENCLR_REGION1WA_Pos (2UL) /*!< Position of REGION1WA field. */
#define MWU_INTENCLR_REGION1WA_Msk (0x1UL << MWU_INTENCLR_REGION1WA_Pos) /*!< Bit mask of REGION1WA field. */
#define MWU_INTENCLR_REGION1WA_Disabled (0UL) /*!< Read: Disabled */
#define MWU_INTENCLR_REGION1WA_Enabled (1UL) /*!< Read: Enabled */
#define MWU_INTENCLR_REGION1WA_Clear (1UL) /*!< Disable */

/* Bit 1 : Write '1' to disable interrupt for event REGION0RA */
#define MWU_INTENCLR_REGION0RA_Pos (1UL) /*!< Position of REGION0RA field. */
#define MWU_INTENCLR_REGION0RA_Msk (0x1UL << MWU_INTENCLR_REGION0RA_Pos) /*!< Bit mask of REGION0RA field. */
#define MWU_INTENCLR_REGION0RA_Disabled (0UL) /*!< Read: Disabled */
#define MWU_INTENCLR_REGION0RA_Enabled (1UL) /*!< Read: Enabled */
#define MWU_INTENCLR_REGION0RA_Clear (1UL) /*!< Disable */

/* Bit 0 : Write '1' to disable interrupt for event REGION0WA */
#define MWU_INTENCLR_REGION0WA_Pos (0UL) /*!< Position of REGION0WA field. */
#define MWU_INTENCLR_REGION0WA_Msk (0x1UL << MWU_INTENCLR_REGION0WA_Pos) /*!< Bit mask of REGION0WA field. */
#define MWU_INTENCLR_REGION0WA_Disabled (0UL) /*!< Read: Disabled */
#define MWU_INTENCLR_REGION0WA_Enabled (1UL) /*!< Read: Enabled */
#define MWU_INTENCLR_REGION0WA_Clear (1UL) /*!< Disable */

/* Register: MWU_NMIEN */
/* Description: Enable or disable interrupt */

/* Bit 27 : Enable or disable interrupt for event PREGION1RA */
#define MWU_NMIEN_PREGION1RA_Pos (27UL) /*!< Position of PREGION1RA field. */
#define MWU_NMIEN_PREGION1RA_Msk (0x1UL << MWU_NMIEN_PREGION1RA_Pos) /*!< Bit mask of PREGION1RA field. */
#define MWU_NMIEN_PREGION1RA_Disabled (0UL) /*!< Disable */
#define MWU_NMIEN_PREGION1RA_Enabled (1UL) /*!< Enable */

/* Bit 26 : Enable or disable interrupt for event PREGION1WA */
#define MWU_NMIEN_PREGION1WA_Pos (26UL) /*!< Position of PREGION1WA field. */
#define MWU_NMIEN_PREGION1WA_Msk (0x1UL << MWU_NMIEN_PREGION1WA_Pos) /*!< Bit mask of PREGION1WA field. */
#define MWU_NMIEN_PREGION1WA_Disabled (0UL) /*!< Disable */
#define MWU_NMIEN_PREGION1WA_Enabled (1UL) /*!< Enable */

/* Bit 25 : Enable or disable interrupt for event PREGION0RA */
#define MWU_NMIEN_PREGION0RA_Pos (25UL) /*!< Position of PREGION0RA field. */
#define MWU_NMIEN_PREGION0RA_Msk (0x1UL << MWU_NMIEN_PREGION0RA_Pos) /*!< Bit mask of PREGION0RA field. */
#define MWU_NMIEN_PREGION0RA_Disabled (0UL) /*!< Disable */
#define MWU_NMIEN_PREGION0RA_Enabled (1UL) /*!< Enable */

/* Bit 24 : Enable or disable interrupt for event PREGION0WA */
#define MWU_NMIEN_PREGION0WA_Pos (24UL) /*!< Position of PREGION0WA field. */
#define MWU_NMIEN_PREGION0WA_Msk (0x1UL << MWU_NMIEN_PREGION0WA_Pos) /*!< Bit mask of PREGION0WA field. */
#define MWU_NMIEN_PREGION0WA_Disabled (0UL) /*!< Disable */
#define MWU_NMIEN_PREGION0WA_Enabled (1UL) /*!< Enable */

/* Bit 7 : Enable or disable interrupt for event REGION3RA */
#define MWU_NMIEN_REGION3RA_Pos (7UL) /*!< Position of REGION3RA field. */
#define MWU_NMIEN_REGION3RA_Msk (0x1UL << MWU_NMIEN_REGION3RA_Pos) /*!< Bit mask of REGION3RA field. */
#define MWU_NMIEN_REGION3RA_Disabled (0UL) /*!< Disable */
#define MWU_NMIEN_REGION3RA_Enabled (1UL) /*!< Enable */

/* Bit 6 : Enable or disable interrupt for event REGION3WA */
#define MWU_NMIEN_REGION3WA_Pos (6UL) /*!< Position of REGION3WA field. */
#define MWU_NMIEN_REGION3WA_Msk (0x1UL << MWU_NMIEN_REGION3WA_Pos) /*!< Bit mask of REGION3WA field. */
#define MWU_NMIEN_REGION3WA_Disabled (0UL) /*!< Disable */
#define MWU_NMIEN_REGION3WA_Enabled (1UL) /*!< Enable */

/* Bit 5 : Enable or disable interrupt for event REGION2RA */
#define MWU_NMIEN_REGION2RA_Pos (5UL) /*!< Position of REGION2RA field. */
#define MWU_NMIEN_REGION2RA_Msk (0x1UL << MWU_NMIEN_REGION2RA_Pos) /*!< Bit mask of REGION2RA field. */
#define MWU_NMIEN_REGION2RA_Disabled (0UL) /*!< Disable */
#define MWU_NMIEN_REGION2RA_Enabled (1UL) /*!< Enable */

/* Bit 4 : Enable or disable interrupt for event REGION2WA */
#define MWU_NMIEN_REGION2WA_Pos (4UL) /*!< Position of REGION2WA field. */
#define MWU_NMIEN_REGION2WA_Msk (0x1UL << MWU_NMIEN_REGION2WA_Pos) /*!< Bit mask of REGION2WA field. */
#define MWU_NMIEN_REGION2WA_Disabled (0UL) /*!< Disable */
#define MWU_NMIEN_REGION2WA_Enabled (1UL) /*!< Enable */

/* Bit 3 : Enable or disable interrupt for event REGION1RA */
#define MWU_NMIEN_REGION1RA_Pos (3UL) /*!< Position of REGION1RA field. */
#define MWU_NMIEN_REGION1RA_Msk (0x1UL << MWU_NMIEN_REGION1RA_Pos) /*!< Bit mask of REGION1RA field. */
#define MWU_NMIEN_REGION1RA_Disabled (0UL) /*!< Disable */
#define MWU_NMIEN_REGION1RA_Enabled (1UL) /*!< Enable */

/* Bit 2 : Enable or disable interrupt for event REGION1WA */
#define MWU_NMIEN_REGION1WA_Pos (2UL) /*!< Position of REGION1WA field. */
#define MWU_NMIEN_REGION1WA_Msk (0x1UL << MWU_NMIEN_REGION1WA_Pos) /*!< Bit mask of REGION1WA field. */
#define MWU_NMIEN_REGION1WA_Disabled (0UL) /*!< Disable */
#define MWU_NMIEN_REGION1WA_Enabled (1UL) /*!< Enable */

/* Bit 1 : Enable or disable interrupt for event REGION0RA */
#define MWU_NMIEN_REGION0RA_Pos (1UL) /*!< Position of REGION0RA field. */
#define MWU_NMIEN_REGION0RA_Msk (0x1UL << MWU_NMIEN_REGION0RA_Pos) /*!< Bit mask of REGION0RA field. */
#define MWU_NMIEN_REGION0RA_Disabled (0UL) /*!< Disable */
#define MWU_NMIEN_REGION0RA_Enabled (1UL) /*!< Enable */

/* Bit 0 : Enable or disable interrupt for event REGION0WA */
#define MWU_NMIEN_REGION0WA_Pos (0UL) /*!< Position of REGION0WA field. */
#define MWU_NMIEN_REGION0WA_Msk (0x1UL << MWU_NMIEN_REGION0WA_Pos) /*!< Bit mask of REGION0WA field. */
#define MWU_NMIEN_REGION0WA_Disabled (0UL) /*!< Disable */
#define MWU_NMIEN_REGION0WA_Enabled (1UL) /*!< Enable */

/* Register: MWU_NMIENSET */
/* Description: Enable interrupt */

/* Bit 27 : Write '1' to enable interrupt for event PREGION1RA */
#define MWU_NMIENSET_PREGION1RA_Pos (27UL) /*!< Position of PREGION1RA field. */
#define MWU_NMIENSET_PREGION1RA_Msk (0x1UL << MWU_NMIENSET_PREGION1RA_Pos) /*!< Bit mask of PREGION1RA field. */
#define MWU_NMIENSET_PREGION1RA_Disabled (0UL) /*!< Read: Disabled */
#define MWU_NMIENSET_PREGION1RA_Enabled (1UL) /*!< Read: Enabled */
#define MWU_NMIENSET_PREGION1RA_Set (1UL) /*!< Enable */

/* Bit 26 : Write '1' to enable interrupt for event PREGION1WA */
#define MWU_NMIENSET_PREGION1WA_Pos (26UL) /*!< Position of PREGION1WA field. */
#define MWU_NMIENSET_PREGION1WA_Msk (0x1UL << MWU_NMIENSET_PREGION1WA_Pos) /*!< Bit mask of PREGION1WA field. */
#define MWU_NMIENSET_PREGION1WA_Disabled (0UL) /*!< Read: Disabled */
#define MWU_NMIENSET_PREGION1WA_Enabled (1UL) /*!< Read: Enabled */
#define MWU_NMIENSET_PREGION1WA_Set (1UL) /*!< Enable */

/* Bit 25 : Write '1' to enable interrupt for event PREGION0RA */
#define MWU_NMIENSET_PREGION0RA_Pos (25UL) /*!< Position of PREGION0RA field. */
#define MWU_NMIENSET_PREGION0RA_Msk (0x1UL << MWU_NMIENSET_PREGION0RA_Pos) /*!< Bit mask of PREGION0RA field. */
#define MWU_NMIENSET_PREGION0RA_Disabled (0UL) /*!< Read: Disabled */
#define MWU_NMIENSET_PREGION0RA_Enabled (1UL) /*!< Read: Enabled */
#define MWU_NMIENSET_PREGION0RA_Set (1UL) /*!< Enable */

/* Bit 24 : Write '1' to enable interrupt for event PREGION0WA */
#define MWU_NMIENSET_PREGION0WA_Pos (24UL) /*!< Position of PREGION0WA field. */
#define MWU_NMIENSET_PREGION0WA_Msk (0x1UL << MWU_NMIENSET_PREGION0WA_Pos) /*!< Bit mask of PREGION0WA field. */
#define MWU_NMIENSET_PREGION0WA_Disabled (0UL) /*!< Read: Disabled */
#define MWU_NMIENSET_PREGION0WA_Enabled (1UL) /*!< Read: Enabled */
#define MWU_NMIENSET_PREGION0WA_Set (1UL) /*!< Enable */

/* Bit 7 : Write '1' to enable interrupt for event REGION3RA */
#define MWU_NMIENSET_REGION3RA_Pos (7UL) /*!< Position of REGION3RA field. */
#define MWU_NMIENSET_REGION3RA_Msk (0x1UL << MWU_NMIENSET_REGION3RA_Pos) /*!< Bit mask of REGION3RA field. */
#define MWU_NMIENSET_REGION3RA_Disabled (0UL) /*!< Read: Disabled */
#define MWU_NMIENSET_REGION3RA_Enabled (1UL) /*!< Read: Enabled */
#define MWU_NMIENSET_REGION3RA_Set (1UL) /*!< Enable */

/* Bit 6 : Write '1' to enable interrupt for event REGION3WA */
#define MWU_NMIENSET_REGION3WA_Pos (6UL) /*!< Position of REGION3WA field. */
#define MWU_NMIENSET_REGION3WA_Msk (0x1UL << MWU_NMIENSET_REGION3WA_Pos) /*!< Bit mask of REGION3WA field. */
#define MWU_NMIENSET_REGION3WA_Disabled (0UL) /*!< Read: Disabled */
#define MWU_NMIENSET_REGION3WA_Enabled (1UL) /*!< Read: Enabled */
#define MWU_NMIENSET_REGION3WA_Set (1UL) /*!< Enable */

/* Bit 5 : Write '1' to enable interrupt for event REGION2RA */
#define MWU_NMIENSET_REGION2RA_Pos (5UL) /*!< Position of REGION2RA field. */
#define MWU_NMIENSET_REGION2RA_Msk (0x1UL << MWU_NMIENSET_REGION2RA_Pos) /*!< Bit mask of REGION2RA field. */
#define MWU_NMIENSET_REGION2RA_Disabled (0UL) /*!< Read: Disabled */
#define MWU_NMIENSET_REGION2RA_Enabled (1UL) /*!< Read: Enabled */
#define MWU_NMIENSET_REGION2RA_Set (1UL) /*!< Enable */

/* Bit 4 : Write '1' to enable interrupt for event REGION2WA */
#define MWU_NMIENSET_REGION2WA_Pos (4UL) /*!< Position of REGION2WA field. */
#define MWU_NMIENSET_REGION2WA_Msk (0x1UL << MWU_NMIENSET_REGION2WA_Pos) /*!< Bit mask of REGION2WA field. */
#define MWU_NMIENSET_REGION2WA_Disabled (0UL) /*!< Read: Disabled */
#define MWU_NMIENSET_REGION2WA_Enabled (1UL) /*!< Read: Enabled */
#define MWU_NMIENSET_REGION2WA_Set (1UL) /*!< Enable */

/* Bit 3 : Write '1' to enable interrupt for event REGION1RA */
#define MWU_NMIENSET_REGION1RA_Pos (3UL) /*!< Position of REGION1RA field. */
#define MWU_NMIENSET_REGION1RA_Msk (0x1UL << MWU_NMIENSET_REGION1RA_Pos) /*!< Bit mask of REGION1RA field. */
#define MWU_NMIENSET_REGION1RA_Disabled (0UL) /*!< Read: Disabled */
#define MWU_NMIENSET_REGION1RA_Enabled (1UL) /*!< Read: Enabled */
#define MWU_NMIENSET_REGION1RA_Set (1UL) /*!< Enable */

/* Bit 2 : Write '1' to enable interrupt for event REGION1WA */
#define MWU_NMIENSET_REGION1WA_Pos (2UL) /*!< Position of REGION1WA field. */
#define MWU_NMIENSET_REGION1WA_Msk (0x1UL << MWU_NMIENSET_REGION1WA_Pos) /*!< Bit mask of REGION1WA field. */
#define MWU_NMIENSET_REGION1WA_Disabled (0UL) /*!< Read: Disabled */
#define MWU_NMIENSET_REGION1WA_Enabled (1UL) /*!< Read: Enabled */
#define MWU_NMIENSET_REGION1WA_Set (1UL) /*!< Enable */

/* Bit 1 : Write '1' to enable interrupt for event REGION0RA */
#define MWU_NMIENSET_REGION0RA_Pos (1UL) /*!< Position of REGION0RA field. */
#define MWU_NMIENSET_REGION0RA_Msk (0x1UL << MWU_NMIENSET_REGION0RA_Pos) /*!< Bit mask of REGION0RA field. */
#define MWU_NMIENSET_REGION0RA_Disabled (0UL) /*!< Read: Disabled */
#define MWU_NMIENSET_REGION0RA_Enabled (1UL) /*!< Read: Enabled */
#define MWU_NMIENSET_REGION0RA_Set (1UL) /*!< Enable */

/* Bit 0 : Write '1' to enable interrupt for event REGION0WA */
#define MWU_NMIENSET_REGION0WA_Pos (0UL) /*!< Position of REGION0WA field. */
#define MWU_NMIENSET_REGION0WA_Msk (0x1UL << MWU_NMIENSET_REGION0WA_Pos) /*!< Bit mask of REGION0WA field. */
#define MWU_NMIENSET_REGION0WA_Disabled (0UL) /*!< Read: Disabled */
#define MWU_NMIENSET_REGION0WA_Enabled (1UL) /*!< Read: Enabled */
#define MWU_NMIENSET_REGION0WA_Set (1UL) /*!< Enable */

/* Register: MWU_NMIENCLR */
/* Description: Disable interrupt */

/* Bit 27 : Write '1' to disable interrupt for event PREGION1RA */
#define MWU_NMIENCLR_PREGION1RA_Pos (27UL) /*!< Position of PREGION1RA field. */
#define MWU_NMIENCLR_PREGION1RA_Msk (0x1UL << MWU_NMIENCLR_PREGION1RA_Pos) /*!< Bit mask of PREGION1RA field. */
#define MWU_NMIENCLR_PREGION1RA_Disabled (0UL) /*!< Read: Disabled */
#define MWU_NMIENCLR_PREGION1RA_Enabled (1UL) /*!< Read: Enabled */
#define MWU_NMIENCLR_PREGION1RA_Clear (1UL) /*!< Disable */

/* Bit 26 : Write '1' to disable interrupt for event PREGION1WA */
#define MWU_NMIENCLR_PREGION1WA_Pos (26UL) /*!< Position of PREGION1WA field. */
#define MWU_NMIENCLR_PREGION1WA_Msk (0x1UL << MWU_NMIENCLR_PREGION1WA_Pos) /*!< Bit mask of PREGION1WA field. */
#define MWU_NMIENCLR_PREGION1WA_Disabled (0UL) /*!< Read: Disabled */
#define MWU_NMIENCLR_PREGION1WA_Enabled (1UL) /*!< Read: Enabled */
#define MWU_NMIENCLR_PREGION1WA_Clear (1UL) /*!< Disable */

/* Bit 25 : Write '1' to disable interrupt for event PREGION0RA */
#define MWU_NMIENCLR_PREGION0RA_Pos (25UL) /*!< Position of PREGION0RA field. */
#define MWU_NMIENCLR_PREGION0RA_Msk (0x1UL << MWU_NMIENCLR_PREGION0RA_Pos) /*!< Bit mask of PREGION0RA field. */
#define MWU_NMIENCLR_PREGION0RA_Disabled (0UL) /*!< Read: Disabled */
#define MWU_NMIENCLR_PREGION0RA_Enabled (1UL) /*!< Read: Enabled */
#define MWU_NMIENCLR_PREGION0RA_Clear (1UL) /*!< Disable */

/* Bit 24 : Write '1' to disable interrupt for event PREGION0WA */
#define MWU_NMIENCLR_PREGION0WA_Pos (24UL) /*!< Position of PREGION0WA field. */
#define MWU_NMIENCLR_PREGION0WA_Msk (0x1UL << MWU_NMIENCLR_PREGION0WA_Pos) /*!< Bit mask of PREGION0WA field. */
#define MWU_NMIENCLR_PREGION0WA_Disabled (0UL) /*!< Read: Disabled */
#define MWU_NMIENCLR_PREGION0WA_Enabled (1UL) /*!< Read: Enabled */
#define MWU_NMIENCLR_PREGION0WA_Clear (1UL) /*!< Disable */

/* Bit 7 : Write '1' to disable interrupt for event REGION3RA */
#define MWU_NMIENCLR_REGION3RA_Pos (7UL) /*!< Position of REGION3RA field. */
#define MWU_NMIENCLR_REGION3RA_Msk (0x1UL << MWU_NMIENCLR_REGION3RA_Pos) /*!< Bit mask of REGION3RA field. */
#define MWU_NMIENCLR_REGION3RA_Disabled (0UL) /*!< Read: Disabled */
#define MWU_NMIENCLR_REGION3RA_Enabled (1UL) /*!< Read: Enabled */
#define MWU_NMIENCLR_REGION3RA_Clear (1UL) /*!< Disable */

/* Bit 6 : Write '1' to disable interrupt for event REGION3WA */
#define MWU_NMIENCLR_REGION3WA_Pos (6UL) /*!< Position of REGION3WA field. */
#define MWU_NMIENCLR_REGION3WA_Msk (0x1UL << MWU_NMIENCLR_REGION3WA_Pos) /*!< Bit mask of REGION3WA field. */
#define MWU_NMIENCLR_REGION3WA_Disabled (0UL) /*!< Read: Disabled */
#define MWU_NMIENCLR_REGION3WA_Enabled (1UL) /*!< Read: Enabled */
#define MWU_NMIENCLR_REGION3WA_Clear (1UL) /*!< Disable */

/* Bit 5 : Write '1' to disable interrupt for event REGION2RA */
#define MWU_NMIENCLR_REGION2RA_Pos (5UL) /*!< Position of REGION2RA field. */
#define MWU_NMIENCLR_REGION2RA_Msk (0x1UL << MWU_NMIENCLR_REGION2RA_Pos) /*!< Bit mask of REGION2RA field. */
#define MWU_NMIENCLR_REGION2RA_Disabled (0UL) /*!< Read: Disabled */
#define MWU_NMIENCLR_REGION2RA_Enabled (1UL) /*!< Read: Enabled */
#define MWU_NMIENCLR_REGION2RA_Clear (1UL) /*!< Disable */

/* Bit 4 : Write '1' to disable interrupt for event REGION2WA */
#define MWU_NMIENCLR_REGION2WA_Pos (4UL) /*!< Position of REGION2WA field. */
#define MWU_NMIENCLR_REGION2WA_Msk (0x1UL << MWU_NMIENCLR_REGION2WA_Pos) /*!< Bit mask of REGION2WA field. */
#define MWU_NMIENCLR_REGION2WA_Disabled (0UL) /*!< Read: Disabled */
#define MWU_NMIENCLR_REGION2WA_Enabled (1UL) /*!< Read: Enabled */
#define MWU_NMIENCLR_REGION2WA_Clear (1UL) /*!< Disable */

/* Bit 3 : Write '1' to disable interrupt for event REGION1RA */
#define MWU_NMIENCLR_REGION1RA_Pos (3UL) /*!< Position of REGION1RA field. */
#define MWU_NMIENCLR_REGION1RA_Msk (0x1UL << MWU_NMIENCLR_REGION1RA_Pos) /*!< Bit mask of REGION1RA field. */
#define MWU_NMIENCLR_REGION1RA_Disabled (0UL) /*!< Read: Disabled */
#define MWU_NMIENCLR_REGION1RA_Enabled (1UL) /*!< Read: Enabled */
#define MWU_NMIENCLR_REGION1RA_Clear (1UL) /*!< Disable */

/* Bit 2 : Write '1' to disable interrupt for event REGION1WA */
#define MWU_NMIENCLR_REGION1WA_Pos (2UL) /*!< Position of REGION1WA field. */
#define MWU_NMIENCLR_REGION1WA_Msk (0x1UL << MWU_NMIENCLR_REGION1WA_Pos) /*!< Bit mask of REGION1WA field. */
#define MWU_NMIENCLR_REGION1WA_Disabled (0UL) /*!< Read: Disabled */
#define MWU_NMIENCLR_REGION1WA_Enabled (1UL) /*!< Read: Enabled */
#define MWU_NMIENCLR_REGION1WA_Clear (1UL) /*!< Disable */

/* Bit 1 : Write '1' to disable interrupt for event REGION0RA */
#define MWU_NMIENCLR_REGION0RA_Pos (1UL) /*!< Position of REGION0RA field. */
#define MWU_NMIENCLR_REGION0RA_Msk (0x1UL << MWU_NMIENCLR_REGION0RA_Pos) /*!< Bit mask of REGION0RA field. */
#define MWU_NMIENCLR_REGION0RA_Disabled (0UL) /*!< Read: Disabled */
#define MWU_NMIENCLR_REGION0RA_Enabled (1UL) /*!< Read: Enabled */
#define MWU_NMIENCLR_REGION0RA_Clear (1UL) /*!< Disable */

/* Bit 0 : Write '1' to disable interrupt for event REGION0WA */
#define MWU_NMIENCLR_REGION0WA_Pos (0UL) /*!< Position of REGION0WA field. */
#define MWU_NMIENCLR_REGION0WA_Msk (0x1UL << MWU_NMIENCLR_REGION0WA_Pos) /*!< Bit mask of REGION0WA field. */
#define MWU_NMIENCLR_REGION0WA_Disabled (0UL) /*!< Read: Disabled */
#define MWU_NMIENCLR_REGION0WA_Enabled (1UL) /*!< Read: Enabled */
#define MWU_NMIENCLR_REGION0WA_Clear (1UL) /*!< Disable */

/* Register: MWU_PERREGION_SUBSTATWA */
/* Description: Description cluster: Source of event/interrupt in region n, write access detected while corresponding subregion was enabled for watching */

/* Bit 31 : Subregion 31 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATWA_SR31_Pos (31UL) /*!< Position of SR31 field. */
#define MWU_PERREGION_SUBSTATWA_SR31_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR31_Pos) /*!< Bit mask of SR31 field. */
#define MWU_PERREGION_SUBSTATWA_SR31_NoAccess (0UL) /*!< No write access occurred in this subregion */
#define MWU_PERREGION_SUBSTATWA_SR31_Access (1UL) /*!< Write access(es) occurred in this subregion */

/* Bit 30 : Subregion 30 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATWA_SR30_Pos (30UL) /*!< Position of SR30 field. */
#define MWU_PERREGION_SUBSTATWA_SR30_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR30_Pos) /*!< Bit mask of SR30 field. */
#define MWU_PERREGION_SUBSTATWA_SR30_NoAccess (0UL) /*!< No write access occurred in this subregion */
#define MWU_PERREGION_SUBSTATWA_SR30_Access (1UL) /*!< Write access(es) occurred in this subregion */

/* Bit 29 : Subregion 29 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATWA_SR29_Pos (29UL) /*!< Position of SR29 field. */
#define MWU_PERREGION_SUBSTATWA_SR29_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR29_Pos) /*!< Bit mask of SR29 field. */
#define MWU_PERREGION_SUBSTATWA_SR29_NoAccess (0UL) /*!< No write access occurred in this subregion */
#define MWU_PERREGION_SUBSTATWA_SR29_Access (1UL) /*!< Write access(es) occurred in this subregion */

/* Bit 28 : Subregion 28 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATWA_SR28_Pos (28UL) /*!< Position of SR28 field. */
#define MWU_PERREGION_SUBSTATWA_SR28_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR28_Pos) /*!< Bit mask of SR28 field. */
#define MWU_PERREGION_SUBSTATWA_SR28_NoAccess (0UL) /*!< No write access occurred in this subregion */
#define MWU_PERREGION_SUBSTATWA_SR28_Access (1UL) /*!< Write access(es) occurred in this subregion */

/* Bit 27 : Subregion 27 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATWA_SR27_Pos (27UL) /*!< Position of SR27 field. */
#define MWU_PERREGION_SUBSTATWA_SR27_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR27_Pos) /*!< Bit mask of SR27 field. */
#define MWU_PERREGION_SUBSTATWA_SR27_NoAccess (0UL) /*!< No write access occurred in this subregion */
#define MWU_PERREGION_SUBSTATWA_SR27_Access (1UL) /*!< Write access(es) occurred in this subregion */

/* Bit 26 : Subregion 26 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATWA_SR26_Pos (26UL) /*!< Position of SR26 field. */
#define MWU_PERREGION_SUBSTATWA_SR26_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR26_Pos) /*!< Bit mask of SR26 field. */
#define MWU_PERREGION_SUBSTATWA_SR26_NoAccess (0UL) /*!< No write access occurred in this subregion */
#define MWU_PERREGION_SUBSTATWA_SR26_Access (1UL) /*!< Write access(es) occurred in this subregion */

/* Bit 25 : Subregion 25 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATWA_SR25_Pos (25UL) /*!< Position of SR25 field. */
#define MWU_PERREGION_SUBSTATWA_SR25_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR25_Pos) /*!< Bit mask of SR25 field. */
#define MWU_PERREGION_SUBSTATWA_SR25_NoAccess (0UL) /*!< No write access occurred in this subregion */
#define MWU_PERREGION_SUBSTATWA_SR25_Access (1UL) /*!< Write access(es) occurred in this subregion */

/* Bit 24 : Subregion 24 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATWA_SR24_Pos (24UL) /*!< Position of SR24 field. */
#define MWU_PERREGION_SUBSTATWA_SR24_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR24_Pos) /*!< Bit mask of SR24 field. */
#define MWU_PERREGION_SUBSTATWA_SR24_NoAccess (0UL) /*!< No write access occurred in this subregion */
#define MWU_PERREGION_SUBSTATWA_SR24_Access (1UL) /*!< Write access(es) occurred in this subregion */

/* Bit 23 : Subregion 23 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATWA_SR23_Pos (23UL) /*!< Position of SR23 field. */
#define MWU_PERREGION_SUBSTATWA_SR23_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR23_Pos) /*!< Bit mask of SR23 field. */
#define MWU_PERREGION_SUBSTATWA_SR23_NoAccess (0UL) /*!< No write access occurred in this subregion */
#define MWU_PERREGION_SUBSTATWA_SR23_Access (1UL) /*!< Write access(es) occurred in this subregion */

/* Bit 22 : Subregion 22 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATWA_SR22_Pos (22UL) /*!< Position of SR22 field. */
#define MWU_PERREGION_SUBSTATWA_SR22_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR22_Pos) /*!< Bit mask of SR22 field. */
#define MWU_PERREGION_SUBSTATWA_SR22_NoAccess (0UL) /*!< No write access occurred in this subregion */
#define MWU_PERREGION_SUBSTATWA_SR22_Access (1UL) /*!< Write access(es) occurred in this subregion */

/* Bit 21 : Subregion 21 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATWA_SR21_Pos (21UL) /*!< Position of SR21 field. */
#define MWU_PERREGION_SUBSTATWA_SR21_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR21_Pos) /*!< Bit mask of SR21 field. */
#define MWU_PERREGION_SUBSTATWA_SR21_NoAccess (0UL) /*!< No write access occurred in this subregion */
#define MWU_PERREGION_SUBSTATWA_SR21_Access (1UL) /*!< Write access(es) occurred in this subregion */

/* Bit 20 : Subregion 20 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATWA_SR20_Pos (20UL) /*!< Position of SR20 field. */
#define MWU_PERREGION_SUBSTATWA_SR20_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR20_Pos) /*!< Bit mask of SR20 field. */
#define MWU_PERREGION_SUBSTATWA_SR20_NoAccess (0UL) /*!< No write access occurred in this subregion */
#define MWU_PERREGION_SUBSTATWA_SR20_Access (1UL) /*!< Write access(es) occurred in this subregion */

/* Bit 19 : Subregion 19 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATWA_SR19_Pos (19UL) /*!< Position of SR19 field. */
#define MWU_PERREGION_SUBSTATWA_SR19_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR19_Pos) /*!< Bit mask of SR19 field. */
#define MWU_PERREGION_SUBSTATWA_SR19_NoAccess (0UL) /*!< No write access occurred in this subregion */
#define MWU_PERREGION_SUBSTATWA_SR19_Access (1UL) /*!< Write access(es) occurred in this subregion */

/* Bit 18 : Subregion 18 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATWA_SR18_Pos (18UL) /*!< Position of SR18 field. */
#define MWU_PERREGION_SUBSTATWA_SR18_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR18_Pos) /*!< Bit mask of SR18 field. */
#define MWU_PERREGION_SUBSTATWA_SR18_NoAccess (0UL) /*!< No write access occurred in this subregion */
#define MWU_PERREGION_SUBSTATWA_SR18_Access (1UL) /*!< Write access(es) occurred in this subregion */

/* Bit 17 : Subregion 17 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATWA_SR17_Pos (17UL) /*!< Position of SR17 field. */
#define MWU_PERREGION_SUBSTATWA_SR17_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR17_Pos) /*!< Bit mask of SR17 field. */
#define MWU_PERREGION_SUBSTATWA_SR17_NoAccess (0UL) /*!< No write access occurred in this subregion */
#define MWU_PERREGION_SUBSTATWA_SR17_Access (1UL) /*!< Write access(es) occurred in this subregion */

/* Bit 16 : Subregion 16 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATWA_SR16_Pos (16UL) /*!< Position of SR16 field. */
#define MWU_PERREGION_SUBSTATWA_SR16_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR16_Pos) /*!< Bit mask of SR16 field. */
#define MWU_PERREGION_SUBSTATWA_SR16_NoAccess (0UL) /*!< No write access occurred in this subregion */
#define MWU_PERREGION_SUBSTATWA_SR16_Access (1UL) /*!< Write access(es) occurred in this subregion */

/* Bit 15 : Subregion 15 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATWA_SR15_Pos (15UL) /*!< Position of SR15 field. */
#define MWU_PERREGION_SUBSTATWA_SR15_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR15_Pos) /*!< Bit mask of SR15 field. */
#define MWU_PERREGION_SUBSTATWA_SR15_NoAccess (0UL) /*!< No write access occurred in this subregion */
#define MWU_PERREGION_SUBSTATWA_SR15_Access (1UL) /*!< Write access(es) occurred in this subregion */

/* Bit 14 : Subregion 14 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATWA_SR14_Pos (14UL) /*!< Position of SR14 field. */
#define MWU_PERREGION_SUBSTATWA_SR14_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR14_Pos) /*!< Bit mask of SR14 field. */
#define MWU_PERREGION_SUBSTATWA_SR14_NoAccess (0UL) /*!< No write access occurred in this subregion */
#define MWU_PERREGION_SUBSTATWA_SR14_Access (1UL) /*!< Write access(es) occurred in this subregion */

/* Bit 13 : Subregion 13 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATWA_SR13_Pos (13UL) /*!< Position of SR13 field. */
#define MWU_PERREGION_SUBSTATWA_SR13_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR13_Pos) /*!< Bit mask of SR13 field. */
#define MWU_PERREGION_SUBSTATWA_SR13_NoAccess (0UL) /*!< No write access occurred in this subregion */
#define MWU_PERREGION_SUBSTATWA_SR13_Access (1UL) /*!< Write access(es) occurred in this subregion */

/* Bit 12 : Subregion 12 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATWA_SR12_Pos (12UL) /*!< Position of SR12 field. */
#define MWU_PERREGION_SUBSTATWA_SR12_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR12_Pos) /*!< Bit mask of SR12 field. */
#define MWU_PERREGION_SUBSTATWA_SR12_NoAccess (0UL) /*!< No write access occurred in this subregion */
#define MWU_PERREGION_SUBSTATWA_SR12_Access (1UL) /*!< Write access(es) occurred in this subregion */

/* Bit 11 : Subregion 11 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATWA_SR11_Pos (11UL) /*!< Position of SR11 field. */
#define MWU_PERREGION_SUBSTATWA_SR11_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR11_Pos) /*!< Bit mask of SR11 field. */
#define MWU_PERREGION_SUBSTATWA_SR11_NoAccess (0UL) /*!< No write access occurred in this subregion */
#define MWU_PERREGION_SUBSTATWA_SR11_Access (1UL) /*!< Write access(es) occurred in this subregion */

/* Bit 10 : Subregion 10 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATWA_SR10_Pos (10UL) /*!< Position of SR10 field. */
#define MWU_PERREGION_SUBSTATWA_SR10_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR10_Pos) /*!< Bit mask of SR10 field. */
#define MWU_PERREGION_SUBSTATWA_SR10_NoAccess (0UL) /*!< No write access occurred in this subregion */
#define MWU_PERREGION_SUBSTATWA_SR10_Access (1UL) /*!< Write access(es) occurred in this subregion */

/* Bit 9 : Subregion 9 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATWA_SR9_Pos (9UL) /*!< Position of SR9 field. */
#define MWU_PERREGION_SUBSTATWA_SR9_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR9_Pos) /*!< Bit mask of SR9 field. */
#define MWU_PERREGION_SUBSTATWA_SR9_NoAccess (0UL) /*!< No write access occurred in this subregion */
#define MWU_PERREGION_SUBSTATWA_SR9_Access (1UL) /*!< Write access(es) occurred in this subregion */

/* Bit 8 : Subregion 8 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATWA_SR8_Pos (8UL) /*!< Position of SR8 field. */
#define MWU_PERREGION_SUBSTATWA_SR8_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR8_Pos) /*!< Bit mask of SR8 field. */
#define MWU_PERREGION_SUBSTATWA_SR8_NoAccess (0UL) /*!< No write access occurred in this subregion */
#define MWU_PERREGION_SUBSTATWA_SR8_Access (1UL) /*!< Write access(es) occurred in this subregion */

/* Bit 7 : Subregion 7 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATWA_SR7_Pos (7UL) /*!< Position of SR7 field. */
#define MWU_PERREGION_SUBSTATWA_SR7_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR7_Pos) /*!< Bit mask of SR7 field. */
#define MWU_PERREGION_SUBSTATWA_SR7_NoAccess (0UL) /*!< No write access occurred in this subregion */
#define MWU_PERREGION_SUBSTATWA_SR7_Access (1UL) /*!< Write access(es) occurred in this subregion */

/* Bit 6 : Subregion 6 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATWA_SR6_Pos (6UL) /*!< Position of SR6 field. */
#define MWU_PERREGION_SUBSTATWA_SR6_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR6_Pos) /*!< Bit mask of SR6 field. */
#define MWU_PERREGION_SUBSTATWA_SR6_NoAccess (0UL) /*!< No write access occurred in this subregion */
#define MWU_PERREGION_SUBSTATWA_SR6_Access (1UL) /*!< Write access(es) occurred in this subregion */

/* Bit 5 : Subregion 5 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATWA_SR5_Pos (5UL) /*!< Position of SR5 field. */
#define MWU_PERREGION_SUBSTATWA_SR5_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR5_Pos) /*!< Bit mask of SR5 field. */
#define MWU_PERREGION_SUBSTATWA_SR5_NoAccess (0UL) /*!< No write access occurred in this subregion */
#define MWU_PERREGION_SUBSTATWA_SR5_Access (1UL) /*!< Write access(es) occurred in this subregion */

/* Bit 4 : Subregion 4 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATWA_SR4_Pos (4UL) /*!< Position of SR4 field. */
#define MWU_PERREGION_SUBSTATWA_SR4_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR4_Pos) /*!< Bit mask of SR4 field. */
#define MWU_PERREGION_SUBSTATWA_SR4_NoAccess (0UL) /*!< No write access occurred in this subregion */
#define MWU_PERREGION_SUBSTATWA_SR4_Access (1UL) /*!< Write access(es) occurred in this subregion */

/* Bit 3 : Subregion 3 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATWA_SR3_Pos (3UL) /*!< Position of SR3 field. */
#define MWU_PERREGION_SUBSTATWA_SR3_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR3_Pos) /*!< Bit mask of SR3 field. */
#define MWU_PERREGION_SUBSTATWA_SR3_NoAccess (0UL) /*!< No write access occurred in this subregion */
#define MWU_PERREGION_SUBSTATWA_SR3_Access (1UL) /*!< Write access(es) occurred in this subregion */

/* Bit 2 : Subregion 2 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATWA_SR2_Pos (2UL) /*!< Position of SR2 field. */
#define MWU_PERREGION_SUBSTATWA_SR2_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR2_Pos) /*!< Bit mask of SR2 field. */
#define MWU_PERREGION_SUBSTATWA_SR2_NoAccess (0UL) /*!< No write access occurred in this subregion */
#define MWU_PERREGION_SUBSTATWA_SR2_Access (1UL) /*!< Write access(es) occurred in this subregion */

/* Bit 1 : Subregion 1 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATWA_SR1_Pos (1UL) /*!< Position of SR1 field. */
#define MWU_PERREGION_SUBSTATWA_SR1_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR1_Pos) /*!< Bit mask of SR1 field. */
#define MWU_PERREGION_SUBSTATWA_SR1_NoAccess (0UL) /*!< No write access occurred in this subregion */
#define MWU_PERREGION_SUBSTATWA_SR1_Access (1UL) /*!< Write access(es) occurred in this subregion */

/* Bit 0 : Subregion 0 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATWA_SR0_Pos (0UL) /*!< Position of SR0 field. */
#define MWU_PERREGION_SUBSTATWA_SR0_Msk (0x1UL << MWU_PERREGION_SUBSTATWA_SR0_Pos) /*!< Bit mask of SR0 field. */
#define MWU_PERREGION_SUBSTATWA_SR0_NoAccess (0UL) /*!< No write access occurred in this subregion */
#define MWU_PERREGION_SUBSTATWA_SR0_Access (1UL) /*!< Write access(es) occurred in this subregion */

/* Register: MWU_PERREGION_SUBSTATRA */
/* Description: Description cluster: Source of event/interrupt in region n, read access detected while corresponding subregion was enabled for watching */

/* Bit 31 : Subregion 31 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATRA_SR31_Pos (31UL) /*!< Position of SR31 field. */
#define MWU_PERREGION_SUBSTATRA_SR31_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR31_Pos) /*!< Bit mask of SR31 field. */
#define MWU_PERREGION_SUBSTATRA_SR31_NoAccess (0UL) /*!< No read access occurred in this subregion */
#define MWU_PERREGION_SUBSTATRA_SR31_Access (1UL) /*!< Read access(es) occurred in this subregion */

/* Bit 30 : Subregion 30 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATRA_SR30_Pos (30UL) /*!< Position of SR30 field. */
#define MWU_PERREGION_SUBSTATRA_SR30_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR30_Pos) /*!< Bit mask of SR30 field. */
#define MWU_PERREGION_SUBSTATRA_SR30_NoAccess (0UL) /*!< No read access occurred in this subregion */
#define MWU_PERREGION_SUBSTATRA_SR30_Access (1UL) /*!< Read access(es) occurred in this subregion */

/* Bit 29 : Subregion 29 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATRA_SR29_Pos (29UL) /*!< Position of SR29 field. */
#define MWU_PERREGION_SUBSTATRA_SR29_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR29_Pos) /*!< Bit mask of SR29 field. */
#define MWU_PERREGION_SUBSTATRA_SR29_NoAccess (0UL) /*!< No read access occurred in this subregion */
#define MWU_PERREGION_SUBSTATRA_SR29_Access (1UL) /*!< Read access(es) occurred in this subregion */

/* Bit 28 : Subregion 28 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATRA_SR28_Pos (28UL) /*!< Position of SR28 field. */
#define MWU_PERREGION_SUBSTATRA_SR28_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR28_Pos) /*!< Bit mask of SR28 field. */
#define MWU_PERREGION_SUBSTATRA_SR28_NoAccess (0UL) /*!< No read access occurred in this subregion */
#define MWU_PERREGION_SUBSTATRA_SR28_Access (1UL) /*!< Read access(es) occurred in this subregion */

/* Bit 27 : Subregion 27 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATRA_SR27_Pos (27UL) /*!< Position of SR27 field. */
#define MWU_PERREGION_SUBSTATRA_SR27_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR27_Pos) /*!< Bit mask of SR27 field. */
#define MWU_PERREGION_SUBSTATRA_SR27_NoAccess (0UL) /*!< No read access occurred in this subregion */
#define MWU_PERREGION_SUBSTATRA_SR27_Access (1UL) /*!< Read access(es) occurred in this subregion */

/* Bit 26 : Subregion 26 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATRA_SR26_Pos (26UL) /*!< Position of SR26 field. */
#define MWU_PERREGION_SUBSTATRA_SR26_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR26_Pos) /*!< Bit mask of SR26 field. */
#define MWU_PERREGION_SUBSTATRA_SR26_NoAccess (0UL) /*!< No read access occurred in this subregion */
#define MWU_PERREGION_SUBSTATRA_SR26_Access (1UL) /*!< Read access(es) occurred in this subregion */

/* Bit 25 : Subregion 25 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATRA_SR25_Pos (25UL) /*!< Position of SR25 field. */
#define MWU_PERREGION_SUBSTATRA_SR25_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR25_Pos) /*!< Bit mask of SR25 field. */
#define MWU_PERREGION_SUBSTATRA_SR25_NoAccess (0UL) /*!< No read access occurred in this subregion */
#define MWU_PERREGION_SUBSTATRA_SR25_Access (1UL) /*!< Read access(es) occurred in this subregion */

/* Bit 24 : Subregion 24 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATRA_SR24_Pos (24UL) /*!< Position of SR24 field. */
#define MWU_PERREGION_SUBSTATRA_SR24_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR24_Pos) /*!< Bit mask of SR24 field. */
#define MWU_PERREGION_SUBSTATRA_SR24_NoAccess (0UL) /*!< No read access occurred in this subregion */
#define MWU_PERREGION_SUBSTATRA_SR24_Access (1UL) /*!< Read access(es) occurred in this subregion */

/* Bit 23 : Subregion 23 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATRA_SR23_Pos (23UL) /*!< Position of SR23 field. */
#define MWU_PERREGION_SUBSTATRA_SR23_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR23_Pos) /*!< Bit mask of SR23 field. */
#define MWU_PERREGION_SUBSTATRA_SR23_NoAccess (0UL) /*!< No read access occurred in this subregion */
#define MWU_PERREGION_SUBSTATRA_SR23_Access (1UL) /*!< Read access(es) occurred in this subregion */

/* Bit 22 : Subregion 22 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATRA_SR22_Pos (22UL) /*!< Position of SR22 field. */
#define MWU_PERREGION_SUBSTATRA_SR22_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR22_Pos) /*!< Bit mask of SR22 field. */
#define MWU_PERREGION_SUBSTATRA_SR22_NoAccess (0UL) /*!< No read access occurred in this subregion */
#define MWU_PERREGION_SUBSTATRA_SR22_Access (1UL) /*!< Read access(es) occurred in this subregion */

/* Bit 21 : Subregion 21 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATRA_SR21_Pos (21UL) /*!< Position of SR21 field. */
#define MWU_PERREGION_SUBSTATRA_SR21_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR21_Pos) /*!< Bit mask of SR21 field. */
#define MWU_PERREGION_SUBSTATRA_SR21_NoAccess (0UL) /*!< No read access occurred in this subregion */
#define MWU_PERREGION_SUBSTATRA_SR21_Access (1UL) /*!< Read access(es) occurred in this subregion */

/* Bit 20 : Subregion 20 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATRA_SR20_Pos (20UL) /*!< Position of SR20 field. */
#define MWU_PERREGION_SUBSTATRA_SR20_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR20_Pos) /*!< Bit mask of SR20 field. */
#define MWU_PERREGION_SUBSTATRA_SR20_NoAccess (0UL) /*!< No read access occurred in this subregion */
#define MWU_PERREGION_SUBSTATRA_SR20_Access (1UL) /*!< Read access(es) occurred in this subregion */

/* Bit 19 : Subregion 19 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATRA_SR19_Pos (19UL) /*!< Position of SR19 field. */
#define MWU_PERREGION_SUBSTATRA_SR19_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR19_Pos) /*!< Bit mask of SR19 field. */
#define MWU_PERREGION_SUBSTATRA_SR19_NoAccess (0UL) /*!< No read access occurred in this subregion */
#define MWU_PERREGION_SUBSTATRA_SR19_Access (1UL) /*!< Read access(es) occurred in this subregion */

/* Bit 18 : Subregion 18 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATRA_SR18_Pos (18UL) /*!< Position of SR18 field. */
#define MWU_PERREGION_SUBSTATRA_SR18_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR18_Pos) /*!< Bit mask of SR18 field. */
#define MWU_PERREGION_SUBSTATRA_SR18_NoAccess (0UL) /*!< No read access occurred in this subregion */
#define MWU_PERREGION_SUBSTATRA_SR18_Access (1UL) /*!< Read access(es) occurred in this subregion */

/* Bit 17 : Subregion 17 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATRA_SR17_Pos (17UL) /*!< Position of SR17 field. */
#define MWU_PERREGION_SUBSTATRA_SR17_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR17_Pos) /*!< Bit mask of SR17 field. */
#define MWU_PERREGION_SUBSTATRA_SR17_NoAccess (0UL) /*!< No read access occurred in this subregion */
#define MWU_PERREGION_SUBSTATRA_SR17_Access (1UL) /*!< Read access(es) occurred in this subregion */

/* Bit 16 : Subregion 16 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATRA_SR16_Pos (16UL) /*!< Position of SR16 field. */
#define MWU_PERREGION_SUBSTATRA_SR16_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR16_Pos) /*!< Bit mask of SR16 field. */
#define MWU_PERREGION_SUBSTATRA_SR16_NoAccess (0UL) /*!< No read access occurred in this subregion */
#define MWU_PERREGION_SUBSTATRA_SR16_Access (1UL) /*!< Read access(es) occurred in this subregion */

/* Bit 15 : Subregion 15 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATRA_SR15_Pos (15UL) /*!< Position of SR15 field. */
#define MWU_PERREGION_SUBSTATRA_SR15_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR15_Pos) /*!< Bit mask of SR15 field. */
#define MWU_PERREGION_SUBSTATRA_SR15_NoAccess (0UL) /*!< No read access occurred in this subregion */
#define MWU_PERREGION_SUBSTATRA_SR15_Access (1UL) /*!< Read access(es) occurred in this subregion */

/* Bit 14 : Subregion 14 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATRA_SR14_Pos (14UL) /*!< Position of SR14 field. */
#define MWU_PERREGION_SUBSTATRA_SR14_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR14_Pos) /*!< Bit mask of SR14 field. */
#define MWU_PERREGION_SUBSTATRA_SR14_NoAccess (0UL) /*!< No read access occurred in this subregion */
#define MWU_PERREGION_SUBSTATRA_SR14_Access (1UL) /*!< Read access(es) occurred in this subregion */

/* Bit 13 : Subregion 13 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATRA_SR13_Pos (13UL) /*!< Position of SR13 field. */
#define MWU_PERREGION_SUBSTATRA_SR13_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR13_Pos) /*!< Bit mask of SR13 field. */
#define MWU_PERREGION_SUBSTATRA_SR13_NoAccess (0UL) /*!< No read access occurred in this subregion */
#define MWU_PERREGION_SUBSTATRA_SR13_Access (1UL) /*!< Read access(es) occurred in this subregion */

/* Bit 12 : Subregion 12 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATRA_SR12_Pos (12UL) /*!< Position of SR12 field. */
#define MWU_PERREGION_SUBSTATRA_SR12_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR12_Pos) /*!< Bit mask of SR12 field. */
#define MWU_PERREGION_SUBSTATRA_SR12_NoAccess (0UL) /*!< No read access occurred in this subregion */
#define MWU_PERREGION_SUBSTATRA_SR12_Access (1UL) /*!< Read access(es) occurred in this subregion */

/* Bit 11 : Subregion 11 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATRA_SR11_Pos (11UL) /*!< Position of SR11 field. */
#define MWU_PERREGION_SUBSTATRA_SR11_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR11_Pos) /*!< Bit mask of SR11 field. */
#define MWU_PERREGION_SUBSTATRA_SR11_NoAccess (0UL) /*!< No read access occurred in this subregion */
#define MWU_PERREGION_SUBSTATRA_SR11_Access (1UL) /*!< Read access(es) occurred in this subregion */

/* Bit 10 : Subregion 10 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATRA_SR10_Pos (10UL) /*!< Position of SR10 field. */
#define MWU_PERREGION_SUBSTATRA_SR10_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR10_Pos) /*!< Bit mask of SR10 field. */
#define MWU_PERREGION_SUBSTATRA_SR10_NoAccess (0UL) /*!< No read access occurred in this subregion */
#define MWU_PERREGION_SUBSTATRA_SR10_Access (1UL) /*!< Read access(es) occurred in this subregion */

/* Bit 9 : Subregion 9 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATRA_SR9_Pos (9UL) /*!< Position of SR9 field. */
#define MWU_PERREGION_SUBSTATRA_SR9_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR9_Pos) /*!< Bit mask of SR9 field. */
#define MWU_PERREGION_SUBSTATRA_SR9_NoAccess (0UL) /*!< No read access occurred in this subregion */
#define MWU_PERREGION_SUBSTATRA_SR9_Access (1UL) /*!< Read access(es) occurred in this subregion */

/* Bit 8 : Subregion 8 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATRA_SR8_Pos (8UL) /*!< Position of SR8 field. */
#define MWU_PERREGION_SUBSTATRA_SR8_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR8_Pos) /*!< Bit mask of SR8 field. */
#define MWU_PERREGION_SUBSTATRA_SR8_NoAccess (0UL) /*!< No read access occurred in this subregion */
#define MWU_PERREGION_SUBSTATRA_SR8_Access (1UL) /*!< Read access(es) occurred in this subregion */

/* Bit 7 : Subregion 7 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATRA_SR7_Pos (7UL) /*!< Position of SR7 field. */
#define MWU_PERREGION_SUBSTATRA_SR7_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR7_Pos) /*!< Bit mask of SR7 field. */
#define MWU_PERREGION_SUBSTATRA_SR7_NoAccess (0UL) /*!< No read access occurred in this subregion */
#define MWU_PERREGION_SUBSTATRA_SR7_Access (1UL) /*!< Read access(es) occurred in this subregion */

/* Bit 6 : Subregion 6 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATRA_SR6_Pos (6UL) /*!< Position of SR6 field. */
#define MWU_PERREGION_SUBSTATRA_SR6_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR6_Pos) /*!< Bit mask of SR6 field. */
#define MWU_PERREGION_SUBSTATRA_SR6_NoAccess (0UL) /*!< No read access occurred in this subregion */
#define MWU_PERREGION_SUBSTATRA_SR6_Access (1UL) /*!< Read access(es) occurred in this subregion */

/* Bit 5 : Subregion 5 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATRA_SR5_Pos (5UL) /*!< Position of SR5 field. */
#define MWU_PERREGION_SUBSTATRA_SR5_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR5_Pos) /*!< Bit mask of SR5 field. */
#define MWU_PERREGION_SUBSTATRA_SR5_NoAccess (0UL) /*!< No read access occurred in this subregion */
#define MWU_PERREGION_SUBSTATRA_SR5_Access (1UL) /*!< Read access(es) occurred in this subregion */

/* Bit 4 : Subregion 4 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATRA_SR4_Pos (4UL) /*!< Position of SR4 field. */
#define MWU_PERREGION_SUBSTATRA_SR4_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR4_Pos) /*!< Bit mask of SR4 field. */
#define MWU_PERREGION_SUBSTATRA_SR4_NoAccess (0UL) /*!< No read access occurred in this subregion */
#define MWU_PERREGION_SUBSTATRA_SR4_Access (1UL) /*!< Read access(es) occurred in this subregion */

/* Bit 3 : Subregion 3 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATRA_SR3_Pos (3UL) /*!< Position of SR3 field. */
#define MWU_PERREGION_SUBSTATRA_SR3_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR3_Pos) /*!< Bit mask of SR3 field. */
#define MWU_PERREGION_SUBSTATRA_SR3_NoAccess (0UL) /*!< No read access occurred in this subregion */
#define MWU_PERREGION_SUBSTATRA_SR3_Access (1UL) /*!< Read access(es) occurred in this subregion */

/* Bit 2 : Subregion 2 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATRA_SR2_Pos (2UL) /*!< Position of SR2 field. */
#define MWU_PERREGION_SUBSTATRA_SR2_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR2_Pos) /*!< Bit mask of SR2 field. */
#define MWU_PERREGION_SUBSTATRA_SR2_NoAccess (0UL) /*!< No read access occurred in this subregion */
#define MWU_PERREGION_SUBSTATRA_SR2_Access (1UL) /*!< Read access(es) occurred in this subregion */

/* Bit 1 : Subregion 1 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATRA_SR1_Pos (1UL) /*!< Position of SR1 field. */
#define MWU_PERREGION_SUBSTATRA_SR1_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR1_Pos) /*!< Bit mask of SR1 field. */
#define MWU_PERREGION_SUBSTATRA_SR1_NoAccess (0UL) /*!< No read access occurred in this subregion */
#define MWU_PERREGION_SUBSTATRA_SR1_Access (1UL) /*!< Read access(es) occurred in this subregion */

/* Bit 0 : Subregion 0 in region n (write '1' to clear) */
#define MWU_PERREGION_SUBSTATRA_SR0_Pos (0UL) /*!< Position of SR0 field. */
#define MWU_PERREGION_SUBSTATRA_SR0_Msk (0x1UL << MWU_PERREGION_SUBSTATRA_SR0_Pos) /*!< Bit mask of SR0 field. */
#define MWU_PERREGION_SUBSTATRA_SR0_NoAccess (0UL) /*!< No read access occurred in this subregion */
#define MWU_PERREGION_SUBSTATRA_SR0_Access (1UL) /*!< Read access(es) occurred in this subregion */

/* Register: MWU_REGIONEN */
/* Description: Enable/disable regions watch */

/* Bit 27 : Enable/disable read access watch in PREGION[1] */
#define MWU_REGIONEN_PRGN1RA_Pos (27UL) /*!< Position of PRGN1RA field. */
#define MWU_REGIONEN_PRGN1RA_Msk (0x1UL << MWU_REGIONEN_PRGN1RA_Pos) /*!< Bit mask of PRGN1RA field. */
#define MWU_REGIONEN_PRGN1RA_Disable (0UL) /*!< Disable read access watch in this PREGION */
#define MWU_REGIONEN_PRGN1RA_Enable (1UL) /*!< Enable read access watch in this PREGION */

/* Bit 26 : Enable/disable write access watch in PREGION[1] */
#define MWU_REGIONEN_PRGN1WA_Pos (26UL) /*!< Position of PRGN1WA field. */
#define MWU_REGIONEN_PRGN1WA_Msk (0x1UL << MWU_REGIONEN_PRGN1WA_Pos) /*!< Bit mask of PRGN1WA field. */
#define MWU_REGIONEN_PRGN1WA_Disable (0UL) /*!< Disable write access watch in this PREGION */
#define MWU_REGIONEN_PRGN1WA_Enable (1UL) /*!< Enable write access watch in this PREGION */

/* Bit 25 : Enable/disable read access watch in PREGION[0] */
#define MWU_REGIONEN_PRGN0RA_Pos (25UL) /*!< Position of PRGN0RA field. */
#define MWU_REGIONEN_PRGN0RA_Msk (0x1UL << MWU_REGIONEN_PRGN0RA_Pos) /*!< Bit mask of PRGN0RA field. */
#define MWU_REGIONEN_PRGN0RA_Disable (0UL) /*!< Disable read access watch in this PREGION */
#define MWU_REGIONEN_PRGN0RA_Enable (1UL) /*!< Enable read access watch in this PREGION */

/* Bit 24 : Enable/disable write access watch in PREGION[0] */
#define MWU_REGIONEN_PRGN0WA_Pos (24UL) /*!< Position of PRGN0WA field. */
#define MWU_REGIONEN_PRGN0WA_Msk (0x1UL << MWU_REGIONEN_PRGN0WA_Pos) /*!< Bit mask of PRGN0WA field. */
#define MWU_REGIONEN_PRGN0WA_Disable (0UL) /*!< Disable write access watch in this PREGION */
#define MWU_REGIONEN_PRGN0WA_Enable (1UL) /*!< Enable write access watch in this PREGION */

/* Bit 7 : Enable/disable read access watch in region[3] */
#define MWU_REGIONEN_RGN3RA_Pos (7UL) /*!< Position of RGN3RA field. */
#define MWU_REGIONEN_RGN3RA_Msk (0x1UL << MWU_REGIONEN_RGN3RA_Pos) /*!< Bit mask of RGN3RA field. */
#define MWU_REGIONEN_RGN3RA_Disable (0UL) /*!< Disable read access watch in this region */
#define MWU_REGIONEN_RGN3RA_Enable (1UL) /*!< Enable read access watch in this region */

/* Bit 6 : Enable/disable write access watch in region[3] */
#define MWU_REGIONEN_RGN3WA_Pos (6UL) /*!< Position of RGN3WA field. */
#define MWU_REGIONEN_RGN3WA_Msk (0x1UL << MWU_REGIONEN_RGN3WA_Pos) /*!< Bit mask of RGN3WA field. */
#define MWU_REGIONEN_RGN3WA_Disable (0UL) /*!< Disable write access watch in this region */
#define MWU_REGIONEN_RGN3WA_Enable (1UL) /*!< Enable write access watch in this region */

/* Bit 5 : Enable/disable read access watch in region[2] */
#define MWU_REGIONEN_RGN2RA_Pos (5UL) /*!< Position of RGN2RA field. */
#define MWU_REGIONEN_RGN2RA_Msk (0x1UL << MWU_REGIONEN_RGN2RA_Pos) /*!< Bit mask of RGN2RA field. */
#define MWU_REGIONEN_RGN2RA_Disable (0UL) /*!< Disable read access watch in this region */
#define MWU_REGIONEN_RGN2RA_Enable (1UL) /*!< Enable read access watch in this region */

/* Bit 4 : Enable/disable write access watch in region[2] */
#define MWU_REGIONEN_RGN2WA_Pos (4UL) /*!< Position of RGN2WA field. */
#define MWU_REGIONEN_RGN2WA_Msk (0x1UL << MWU_REGIONEN_RGN2WA_Pos) /*!< Bit mask of RGN2WA field. */
#define MWU_REGIONEN_RGN2WA_Disable (0UL) /*!< Disable write access watch in this region */
#define MWU_REGIONEN_RGN2WA_Enable (1UL) /*!< Enable write access watch in this region */

/* Bit 3 : Enable/disable read access watch in region[1] */
#define MWU_REGIONEN_RGN1RA_Pos (3UL) /*!< Position of RGN1RA field. */
#define MWU_REGIONEN_RGN1RA_Msk (0x1UL << MWU_REGIONEN_RGN1RA_Pos) /*!< Bit mask of RGN1RA field. */
#define MWU_REGIONEN_RGN1RA_Disable (0UL) /*!< Disable read access watch in this region */
#define MWU_REGIONEN_RGN1RA_Enable (1UL) /*!< Enable read access watch in this region */

/* Bit 2 : Enable/disable write access watch in region[1] */
#define MWU_REGIONEN_RGN1WA_Pos (2UL) /*!< Position of RGN1WA field. */
#define MWU_REGIONEN_RGN1WA_Msk (0x1UL << MWU_REGIONEN_RGN1WA_Pos) /*!< Bit mask of RGN1WA field. */
#define MWU_REGIONEN_RGN1WA_Disable (0UL) /*!< Disable write access watch in this region */
#define MWU_REGIONEN_RGN1WA_Enable (1UL) /*!< Enable write access watch in this region */

/* Bit 1 : Enable/disable read access watch in region[0] */
#define MWU_REGIONEN_RGN0RA_Pos (1UL) /*!< Position of RGN0RA field. */
#define MWU_REGIONEN_RGN0RA_Msk (0x1UL << MWU_REGIONEN_RGN0RA_Pos) /*!< Bit mask of RGN0RA field. */
#define MWU_REGIONEN_RGN0RA_Disable (0UL) /*!< Disable read access watch in this region */
#define MWU_REGIONEN_RGN0RA_Enable (1UL) /*!< Enable read access watch in this region */

/* Bit 0 : Enable/disable write access watch in region[0] */
#define MWU_REGIONEN_RGN0WA_Pos (0UL) /*!< Position of RGN0WA field. */
#define MWU_REGIONEN_RGN0WA_Msk (0x1UL << MWU_REGIONEN_RGN0WA_Pos) /*!< Bit mask of RGN0WA field. */
#define MWU_REGIONEN_RGN0WA_Disable (0UL) /*!< Disable write access watch in this region */
#define MWU_REGIONEN_RGN0WA_Enable (1UL) /*!< Enable write access watch in this region */

/* Register: MWU_REGIONENSET */
/* Description: Enable regions watch */

/* Bit 27 : Enable read access watch in PREGION[1] */
#define MWU_REGIONENSET_PRGN1RA_Pos (27UL) /*!< Position of PRGN1RA field. */
#define MWU_REGIONENSET_PRGN1RA_Msk (0x1UL << MWU_REGIONENSET_PRGN1RA_Pos) /*!< Bit mask of PRGN1RA field. */
#define MWU_REGIONENSET_PRGN1RA_Disabled (0UL) /*!< Read access watch in this PREGION is disabled */
#define MWU_REGIONENSET_PRGN1RA_Enabled (1UL) /*!< Read access watch in this PREGION is enabled */
#define MWU_REGIONENSET_PRGN1RA_Set (1UL) /*!< Enable read access watch in this PREGION */

/* Bit 26 : Enable write access watch in PREGION[1] */
#define MWU_REGIONENSET_PRGN1WA_Pos (26UL) /*!< Position of PRGN1WA field. */
#define MWU_REGIONENSET_PRGN1WA_Msk (0x1UL << MWU_REGIONENSET_PRGN1WA_Pos) /*!< Bit mask of PRGN1WA field. */
#define MWU_REGIONENSET_PRGN1WA_Disabled (0UL) /*!< Write access watch in this PREGION is disabled */
#define MWU_REGIONENSET_PRGN1WA_Enabled (1UL) /*!< Write access watch in this PREGION is enabled */
#define MWU_REGIONENSET_PRGN1WA_Set (1UL) /*!< Enable write access watch in this PREGION */

/* Bit 25 : Enable read access watch in PREGION[0] */
#define MWU_REGIONENSET_PRGN0RA_Pos (25UL) /*!< Position of PRGN0RA field. */
#define MWU_REGIONENSET_PRGN0RA_Msk (0x1UL << MWU_REGIONENSET_PRGN0RA_Pos) /*!< Bit mask of PRGN0RA field. */
#define MWU_REGIONENSET_PRGN0RA_Disabled (0UL) /*!< Read access watch in this PREGION is disabled */
#define MWU_REGIONENSET_PRGN0RA_Enabled (1UL) /*!< Read access watch in this PREGION is enabled */
#define MWU_REGIONENSET_PRGN0RA_Set (1UL) /*!< Enable read access watch in this PREGION */

/* Bit 24 : Enable write access watch in PREGION[0] */
#define MWU_REGIONENSET_PRGN0WA_Pos (24UL) /*!< Position of PRGN0WA field. */
#define MWU_REGIONENSET_PRGN0WA_Msk (0x1UL << MWU_REGIONENSET_PRGN0WA_Pos) /*!< Bit mask of PRGN0WA field. */
#define MWU_REGIONENSET_PRGN0WA_Disabled (0UL) /*!< Write access watch in this PREGION is disabled */
#define MWU_REGIONENSET_PRGN0WA_Enabled (1UL) /*!< Write access watch in this PREGION is enabled */
#define MWU_REGIONENSET_PRGN0WA_Set (1UL) /*!< Enable write access watch in this PREGION */

/* Bit 7 : Enable read access watch in region[3] */
#define MWU_REGIONENSET_RGN3RA_Pos (7UL) /*!< Position of RGN3RA field. */
#define MWU_REGIONENSET_RGN3RA_Msk (0x1UL << MWU_REGIONENSET_RGN3RA_Pos) /*!< Bit mask of RGN3RA field. */
#define MWU_REGIONENSET_RGN3RA_Disabled (0UL) /*!< Read access watch in this region is disabled */
#define MWU_REGIONENSET_RGN3RA_Enabled (1UL) /*!< Read access watch in this region is enabled */
#define MWU_REGIONENSET_RGN3RA_Set (1UL) /*!< Enable read access watch in this region */

/* Bit 6 : Enable write access watch in region[3] */
#define MWU_REGIONENSET_RGN3WA_Pos (6UL) /*!< Position of RGN3WA field. */
#define MWU_REGIONENSET_RGN3WA_Msk (0x1UL << MWU_REGIONENSET_RGN3WA_Pos) /*!< Bit mask of RGN3WA field. */
#define MWU_REGIONENSET_RGN3WA_Disabled (0UL) /*!< Write access watch in this region is disabled */
#define MWU_REGIONENSET_RGN3WA_Enabled (1UL) /*!< Write access watch in this region is enabled */
#define MWU_REGIONENSET_RGN3WA_Set (1UL) /*!< Enable write access watch in this region */

/* Bit 5 : Enable read access watch in region[2] */
#define MWU_REGIONENSET_RGN2RA_Pos (5UL) /*!< Position of RGN2RA field. */
#define MWU_REGIONENSET_RGN2RA_Msk (0x1UL << MWU_REGIONENSET_RGN2RA_Pos) /*!< Bit mask of RGN2RA field. */
#define MWU_REGIONENSET_RGN2RA_Disabled (0UL) /*!< Read access watch in this region is disabled */
#define MWU_REGIONENSET_RGN2RA_Enabled (1UL) /*!< Read access watch in this region is enabled */
#define MWU_REGIONENSET_RGN2RA_Set (1UL) /*!< Enable read access watch in this region */

/* Bit 4 : Enable write access watch in region[2] */
#define MWU_REGIONENSET_RGN2WA_Pos (4UL) /*!< Position of RGN2WA field. */
#define MWU_REGIONENSET_RGN2WA_Msk (0x1UL << MWU_REGIONENSET_RGN2WA_Pos) /*!< Bit mask of RGN2WA field. */
#define MWU_REGIONENSET_RGN2WA_Disabled (0UL) /*!< Write access watch in this region is disabled */
#define MWU_REGIONENSET_RGN2WA_Enabled (1UL) /*!< Write access watch in this region is enabled */
#define MWU_REGIONENSET_RGN2WA_Set (1UL) /*!< Enable write access watch in this region */

/* Bit 3 : Enable read access watch in region[1] */
#define MWU_REGIONENSET_RGN1RA_Pos (3UL) /*!< Position of RGN1RA field. */
#define MWU_REGIONENSET_RGN1RA_Msk (0x1UL << MWU_REGIONENSET_RGN1RA_Pos) /*!< Bit mask of RGN1RA field. */
#define MWU_REGIONENSET_RGN1RA_Disabled (0UL) /*!< Read access watch in this region is disabled */
#define MWU_REGIONENSET_RGN1RA_Enabled (1UL) /*!< Read access watch in this region is enabled */
#define MWU_REGIONENSET_RGN1RA_Set (1UL) /*!< Enable read access watch in this region */

/* Bit 2 : Enable write access watch in region[1] */
#define MWU_REGIONENSET_RGN1WA_Pos (2UL) /*!< Position of RGN1WA field. */
#define MWU_REGIONENSET_RGN1WA_Msk (0x1UL << MWU_REGIONENSET_RGN1WA_Pos) /*!< Bit mask of RGN1WA field. */
#define MWU_REGIONENSET_RGN1WA_Disabled (0UL) /*!< Write access watch in this region is disabled */
#define MWU_REGIONENSET_RGN1WA_Enabled (1UL) /*!< Write access watch in this region is enabled */
#define MWU_REGIONENSET_RGN1WA_Set (1UL) /*!< Enable write access watch in this region */

/* Bit 1 : Enable read access watch in region[0] */
#define MWU_REGIONENSET_RGN0RA_Pos (1UL) /*!< Position of RGN0RA field. */
#define MWU_REGIONENSET_RGN0RA_Msk (0x1UL << MWU_REGIONENSET_RGN0RA_Pos) /*!< Bit mask of RGN0RA field. */
#define MWU_REGIONENSET_RGN0RA_Disabled (0UL) /*!< Read access watch in this region is disabled */
#define MWU_REGIONENSET_RGN0RA_Enabled (1UL) /*!< Read access watch in this region is enabled */
#define MWU_REGIONENSET_RGN0RA_Set (1UL) /*!< Enable read access watch in this region */

/* Bit 0 : Enable write access watch in region[0] */
#define MWU_REGIONENSET_RGN0WA_Pos (0UL) /*!< Position of RGN0WA field. */
#define MWU_REGIONENSET_RGN0WA_Msk (0x1UL << MWU_REGIONENSET_RGN0WA_Pos) /*!< Bit mask of RGN0WA field. */
#define MWU_REGIONENSET_RGN0WA_Disabled (0UL) /*!< Write access watch in this region is disabled */
#define MWU_REGIONENSET_RGN0WA_Enabled (1UL) /*!< Write access watch in this region is enabled */
#define MWU_REGIONENSET_RGN0WA_Set (1UL) /*!< Enable write access watch in this region */

/* Register: MWU_REGIONENCLR */
/* Description: Disable regions watch */

/* Bit 27 : Disable read access watch in PREGION[1] */
#define MWU_REGIONENCLR_PRGN1RA_Pos (27UL) /*!< Position of PRGN1RA field. */
#define MWU_REGIONENCLR_PRGN1RA_Msk (0x1UL << MWU_REGIONENCLR_PRGN1RA_Pos) /*!< Bit mask of PRGN1RA field. */
#define MWU_REGIONENCLR_PRGN1RA_Disabled (0UL) /*!< Read access watch in this PREGION is disabled */
#define MWU_REGIONENCLR_PRGN1RA_Enabled (1UL) /*!< Read access watch in this PREGION is enabled */
#define MWU_REGIONENCLR_PRGN1RA_Clear (1UL) /*!< Disable read access watch in this PREGION */

/* Bit 26 : Disable write access watch in PREGION[1] */
#define MWU_REGIONENCLR_PRGN1WA_Pos (26UL) /*!< Position of PRGN1WA field. */
#define MWU_REGIONENCLR_PRGN1WA_Msk (0x1UL << MWU_REGIONENCLR_PRGN1WA_Pos) /*!< Bit mask of PRGN1WA field. */
#define MWU_REGIONENCLR_PRGN1WA_Disabled (0UL) /*!< Write access watch in this PREGION is disabled */
#define MWU_REGIONENCLR_PRGN1WA_Enabled (1UL) /*!< Write access watch in this PREGION is enabled */
#define MWU_REGIONENCLR_PRGN1WA_Clear (1UL) /*!< Disable write access watch in this PREGION */

/* Bit 25 : Disable read access watch in PREGION[0] */
#define MWU_REGIONENCLR_PRGN0RA_Pos (25UL) /*!< Position of PRGN0RA field. */
#define MWU_REGIONENCLR_PRGN0RA_Msk (0x1UL << MWU_REGIONENCLR_PRGN0RA_Pos) /*!< Bit mask of PRGN0RA field. */
#define MWU_REGIONENCLR_PRGN0RA_Disabled (0UL) /*!< Read access watch in this PREGION is disabled */
#define MWU_REGIONENCLR_PRGN0RA_Enabled (1UL) /*!< Read access watch in this PREGION is enabled */
#define MWU_REGIONENCLR_PRGN0RA_Clear (1UL) /*!< Disable read access watch in this PREGION */

/* Bit 24 : Disable write access watch in PREGION[0] */
#define MWU_REGIONENCLR_PRGN0WA_Pos (24UL) /*!< Position of PRGN0WA field. */
#define MWU_REGIONENCLR_PRGN0WA_Msk (0x1UL << MWU_REGIONENCLR_PRGN0WA_Pos) /*!< Bit mask of PRGN0WA field. */
#define MWU_REGIONENCLR_PRGN0WA_Disabled (0UL) /*!< Write access watch in this PREGION is disabled */
#define MWU_REGIONENCLR_PRGN0WA_Enabled (1UL) /*!< Write access watch in this PREGION is enabled */
#define MWU_REGIONENCLR_PRGN0WA_Clear (1UL) /*!< Disable write access watch in this PREGION */

/* Bit 7 : Disable read access watch in region[3] */
#define MWU_REGIONENCLR_RGN3RA_Pos (7UL) /*!< Position of RGN3RA field. */
#define MWU_REGIONENCLR_RGN3RA_Msk (0x1UL << MWU_REGIONENCLR_RGN3RA_Pos) /*!< Bit mask of RGN3RA field. */
#define MWU_REGIONENCLR_RGN3RA_Disabled (0UL) /*!< Read access watch in this region is disabled */
#define MWU_REGIONENCLR_RGN3RA_Enabled (1UL) /*!< Read access watch in this region is enabled */
#define MWU_REGIONENCLR_RGN3RA_Clear (1UL) /*!< Disable read access watch in this region */

/* Bit 6 : Disable write access watch in region[3] */
#define MWU_REGIONENCLR_RGN3WA_Pos (6UL) /*!< Position of RGN3WA field. */
#define MWU_REGIONENCLR_RGN3WA_Msk (0x1UL << MWU_REGIONENCLR_RGN3WA_Pos) /*!< Bit mask of RGN3WA field. */
#define MWU_REGIONENCLR_RGN3WA_Disabled (0UL) /*!< Write access watch in this region is disabled */
#define MWU_REGIONENCLR_RGN3WA_Enabled (1UL) /*!< Write access watch in this region is enabled */
#define MWU_REGIONENCLR_RGN3WA_Clear (1UL) /*!< Disable write access watch in this region */

/* Bit 5 : Disable read access watch in region[2] */
#define MWU_REGIONENCLR_RGN2RA_Pos (5UL) /*!< Position of RGN2RA field. */
#define MWU_REGIONENCLR_RGN2RA_Msk (0x1UL << MWU_REGIONENCLR_RGN2RA_Pos) /*!< Bit mask of RGN2RA field. */
#define MWU_REGIONENCLR_RGN2RA_Disabled (0UL) /*!< Read access watch in this region is disabled */
#define MWU_REGIONENCLR_RGN2RA_Enabled (1UL) /*!< Read access watch in this region is enabled */
#define MWU_REGIONENCLR_RGN2RA_Clear (1UL) /*!< Disable read access watch in this region */

/* Bit 4 : Disable write access watch in region[2] */
#define MWU_REGIONENCLR_RGN2WA_Pos (4UL) /*!< Position of RGN2WA field. */
#define MWU_REGIONENCLR_RGN2WA_Msk (0x1UL << MWU_REGIONENCLR_RGN2WA_Pos) /*!< Bit mask of RGN2WA field. */
#define MWU_REGIONENCLR_RGN2WA_Disabled (0UL) /*!< Write access watch in this region is disabled */
#define MWU_REGIONENCLR_RGN2WA_Enabled (1UL) /*!< Write access watch in this region is enabled */
#define MWU_REGIONENCLR_RGN2WA_Clear (1UL) /*!< Disable write access watch in this region */

/* Bit 3 : Disable read access watch in region[1] */
#define MWU_REGIONENCLR_RGN1RA_Pos (3UL) /*!< Position of RGN1RA field. */
#define MWU_REGIONENCLR_RGN1RA_Msk (0x1UL << MWU_REGIONENCLR_RGN1RA_Pos) /*!< Bit mask of RGN1RA field. */
#define MWU_REGIONENCLR_RGN1RA_Disabled (0UL) /*!< Read access watch in this region is disabled */
#define MWU_REGIONENCLR_RGN1RA_Enabled (1UL) /*!< Read access watch in this region is enabled */
#define MWU_REGIONENCLR_RGN1RA_Clear (1UL) /*!< Disable read access watch in this region */

/* Bit 2 : Disable write access watch in region[1] */
#define MWU_REGIONENCLR_RGN1WA_Pos (2UL) /*!< Position of RGN1WA field. */
#define MWU_REGIONENCLR_RGN1WA_Msk (0x1UL << MWU_REGIONENCLR_RGN1WA_Pos) /*!< Bit mask of RGN1WA field. */
#define MWU_REGIONENCLR_RGN1WA_Disabled (0UL) /*!< Write access watch in this region is disabled */
#define MWU_REGIONENCLR_RGN1WA_Enabled (1UL) /*!< Write access watch in this region is enabled */
#define MWU_REGIONENCLR_RGN1WA_Clear (1UL) /*!< Disable write access watch in this region */

/* Bit 1 : Disable read access watch in region[0] */
#define MWU_REGIONENCLR_RGN0RA_Pos (1UL) /*!< Position of RGN0RA field. */
#define MWU_REGIONENCLR_RGN0RA_Msk (0x1UL << MWU_REGIONENCLR_RGN0RA_Pos) /*!< Bit mask of RGN0RA field. */
#define MWU_REGIONENCLR_RGN0RA_Disabled (0UL) /*!< Read access watch in this region is disabled */
#define MWU_REGIONENCLR_RGN0RA_Enabled (1UL) /*!< Read access watch in this region is enabled */
#define MWU_REGIONENCLR_RGN0RA_Clear (1UL) /*!< Disable read access watch in this region */

/* Bit 0 : Disable write access watch in region[0] */
#define MWU_REGIONENCLR_RGN0WA_Pos (0UL) /*!< Position of RGN0WA field. */
#define MWU_REGIONENCLR_RGN0WA_Msk (0x1UL << MWU_REGIONENCLR_RGN0WA_Pos) /*!< Bit mask of RGN0WA field. */
#define MWU_REGIONENCLR_RGN0WA_Disabled (0UL) /*!< Write access watch in this region is disabled */
#define MWU_REGIONENCLR_RGN0WA_Enabled (1UL) /*!< Write access watch in this region is enabled */
#define MWU_REGIONENCLR_RGN0WA_Clear (1UL) /*!< Disable write access watch in this region */

/* Register: MWU_REGION_START */
/* Description: Description cluster: Start address for region n */

/* Bits 31..0 : Start address for region */
#define MWU_REGION_START_START_Pos (0UL) /*!< Position of START field. */
#define MWU_REGION_START_START_Msk (0xFFFFFFFFUL << MWU_REGION_START_START_Pos) /*!< Bit mask of START field. */

/* Register: MWU_REGION_END */
/* Description: Description cluster: End address of region n */

/* Bits 31..0 : End address of region. */
#define MWU_REGION_END_END_Pos (0UL) /*!< Position of END field. */
#define MWU_REGION_END_END_Msk (0xFFFFFFFFUL << MWU_REGION_END_END_Pos) /*!< Bit mask of END field. */

/* Register: MWU_PREGION_START */
/* Description: Description cluster: Reserved for future use */

/* Bits 31..0 : Reserved for future use */
#define MWU_PREGION_START_START_Pos (0UL) /*!< Position of START field. */
#define MWU_PREGION_START_START_Msk (0xFFFFFFFFUL << MWU_PREGION_START_START_Pos) /*!< Bit mask of START field. */

/* Register: MWU_PREGION_END */
/* Description: Description cluster: Reserved for future use */

/* Bits 31..0 : Reserved for future use */
#define MWU_PREGION_END_END_Pos (0UL) /*!< Position of END field. */
#define MWU_PREGION_END_END_Msk (0xFFFFFFFFUL << MWU_PREGION_END_END_Pos) /*!< Bit mask of END field. */

/* Register: MWU_PREGION_SUBS */
/* Description: Description cluster: Subregions of region n */

/* Bit 31 : Include or exclude subregion 31 in region */
#define MWU_PREGION_SUBS_SR31_Pos (31UL) /*!< Position of SR31 field. */
#define MWU_PREGION_SUBS_SR31_Msk (0x1UL << MWU_PREGION_SUBS_SR31_Pos) /*!< Bit mask of SR31 field. */
#define MWU_PREGION_SUBS_SR31_Exclude (0UL) /*!< Exclude */
#define MWU_PREGION_SUBS_SR31_Include (1UL) /*!< Include */

/* Bit 30 : Include or exclude subregion 30 in region */
#define MWU_PREGION_SUBS_SR30_Pos (30UL) /*!< Position of SR30 field. */
#define MWU_PREGION_SUBS_SR30_Msk (0x1UL << MWU_PREGION_SUBS_SR30_Pos) /*!< Bit mask of SR30 field. */
#define MWU_PREGION_SUBS_SR30_Exclude (0UL) /*!< Exclude */
#define MWU_PREGION_SUBS_SR30_Include (1UL) /*!< Include */

/* Bit 29 : Include or exclude subregion 29 in region */
#define MWU_PREGION_SUBS_SR29_Pos (29UL) /*!< Position of SR29 field. */
#define MWU_PREGION_SUBS_SR29_Msk (0x1UL << MWU_PREGION_SUBS_SR29_Pos) /*!< Bit mask of SR29 field. */
#define MWU_PREGION_SUBS_SR29_Exclude (0UL) /*!< Exclude */
#define MWU_PREGION_SUBS_SR29_Include (1UL) /*!< Include */

/* Bit 28 : Include or exclude subregion 28 in region */
#define MWU_PREGION_SUBS_SR28_Pos (28UL) /*!< Position of SR28 field. */
#define MWU_PREGION_SUBS_SR28_Msk (0x1UL << MWU_PREGION_SUBS_SR28_Pos) /*!< Bit mask of SR28 field. */
#define MWU_PREGION_SUBS_SR28_Exclude (0UL) /*!< Exclude */
#define MWU_PREGION_SUBS_SR28_Include (1UL) /*!< Include */

/* Bit 27 : Include or exclude subregion 27 in region */
#define MWU_PREGION_SUBS_SR27_Pos (27UL) /*!< Position of SR27 field. */
#define MWU_PREGION_SUBS_SR27_Msk (0x1UL << MWU_PREGION_SUBS_SR27_Pos) /*!< Bit mask of SR27 field. */
#define MWU_PREGION_SUBS_SR27_Exclude (0UL) /*!< Exclude */
#define MWU_PREGION_SUBS_SR27_Include (1UL) /*!< Include */

/* Bit 26 : Include or exclude subregion 26 in region */
#define MWU_PREGION_SUBS_SR26_Pos (26UL) /*!< Position of SR26 field. */
#define MWU_PREGION_SUBS_SR26_Msk (0x1UL << MWU_PREGION_SUBS_SR26_Pos) /*!< Bit mask of SR26 field. */
#define MWU_PREGION_SUBS_SR26_Exclude (0UL) /*!< Exclude */
#define MWU_PREGION_SUBS_SR26_Include (1UL) /*!< Include */

/* Bit 25 : Include or exclude subregion 25 in region */
#define MWU_PREGION_SUBS_SR25_Pos (25UL) /*!< Position of SR25 field. */
#define MWU_PREGION_SUBS_SR25_Msk (0x1UL << MWU_PREGION_SUBS_SR25_Pos) /*!< Bit mask of SR25 field. */
#define MWU_PREGION_SUBS_SR25_Exclude (0UL) /*!< Exclude */
#define MWU_PREGION_SUBS_SR25_Include (1UL) /*!< Include */

/* Bit 24 : Include or exclude subregion 24 in region */
#define MWU_PREGION_SUBS_SR24_Pos (24UL) /*!< Position of SR24 field. */
#define MWU_PREGION_SUBS_SR24_Msk (0x1UL << MWU_PREGION_SUBS_SR24_Pos) /*!< Bit mask of SR24 field. */
#define MWU_PREGION_SUBS_SR24_Exclude (0UL) /*!< Exclude */
#define MWU_PREGION_SUBS_SR24_Include (1UL) /*!< Include */

/* Bit 23 : Include or exclude subregion 23 in region */
#define MWU_PREGION_SUBS_SR23_Pos (23UL) /*!< Position of SR23 field. */
#define MWU_PREGION_SUBS_SR23_Msk (0x1UL << MWU_PREGION_SUBS_SR23_Pos) /*!< Bit mask of SR23 field. */
#define MWU_PREGION_SUBS_SR23_Exclude (0UL) /*!< Exclude */
#define MWU_PREGION_SUBS_SR23_Include (1UL) /*!< Include */

/* Bit 22 : Include or exclude subregion 22 in region */
#define MWU_PREGION_SUBS_SR22_Pos (22UL) /*!< Position of SR22 field. */
#define MWU_PREGION_SUBS_SR22_Msk (0x1UL << MWU_PREGION_SUBS_SR22_Pos) /*!< Bit mask of SR22 field. */
#define MWU_PREGION_SUBS_SR22_Exclude (0UL) /*!< Exclude */
#define MWU_PREGION_SUBS_SR22_Include (1UL) /*!< Include */

/* Bit 21 : Include or exclude subregion 21 in region */
#define MWU_PREGION_SUBS_SR21_Pos (21UL) /*!< Position of SR21 field. */
#define MWU_PREGION_SUBS_SR21_Msk (0x1UL << MWU_PREGION_SUBS_SR21_Pos) /*!< Bit mask of SR21 field. */
#define MWU_PREGION_SUBS_SR21_Exclude (0UL) /*!< Exclude */
#define MWU_PREGION_SUBS_SR21_Include (1UL) /*!< Include */

/* Bit 20 : Include or exclude subregion 20 in region */
#define MWU_PREGION_SUBS_SR20_Pos (20UL) /*!< Position of SR20 field. */
#define MWU_PREGION_SUBS_SR20_Msk (0x1UL << MWU_PREGION_SUBS_SR20_Pos) /*!< Bit mask of SR20 field. */
#define MWU_PREGION_SUBS_SR20_Exclude (0UL) /*!< Exclude */
#define MWU_PREGION_SUBS_SR20_Include (1UL) /*!< Include */

/* Bit 19 : Include or exclude subregion 19 in region */
#define MWU_PREGION_SUBS_SR19_Pos (19UL) /*!< Position of SR19 field. */
#define MWU_PREGION_SUBS_SR19_Msk (0x1UL << MWU_PREGION_SUBS_SR19_Pos) /*!< Bit mask of SR19 field. */
#define MWU_PREGION_SUBS_SR19_Exclude (0UL) /*!< Exclude */
#define MWU_PREGION_SUBS_SR19_Include (1UL) /*!< Include */

/* Bit 18 : Include or exclude subregion 18 in region */
#define MWU_PREGION_SUBS_SR18_Pos (18UL) /*!< Position of SR18 field. */
#define MWU_PREGION_SUBS_SR18_Msk (0x1UL << MWU_PREGION_SUBS_SR18_Pos) /*!< Bit mask of SR18 field. */
#define MWU_PREGION_SUBS_SR18_Exclude (0UL) /*!< Exclude */
#define MWU_PREGION_SUBS_SR18_Include (1UL) /*!< Include */

/* Bit 17 : Include or exclude subregion 17 in region */
#define MWU_PREGION_SUBS_SR17_Pos (17UL) /*!< Position of SR17 field. */
#define MWU_PREGION_SUBS_SR17_Msk (0x1UL << MWU_PREGION_SUBS_SR17_Pos) /*!< Bit mask of SR17 field. */
#define MWU_PREGION_SUBS_SR17_Exclude (0UL) /*!< Exclude */
#define MWU_PREGION_SUBS_SR17_Include (1UL) /*!< Include */

/* Bit 16 : Include or exclude subregion 16 in region */
#define MWU_PREGION_SUBS_SR16_Pos (16UL) /*!< Position of SR16 field. */
#define MWU_PREGION_SUBS_SR16_Msk (0x1UL << MWU_PREGION_SUBS_SR16_Pos) /*!< Bit mask of SR16 field. */
#define MWU_PREGION_SUBS_SR16_Exclude (0UL) /*!< Exclude */
#define MWU_PREGION_SUBS_SR16_Include (1UL) /*!< Include */

/* Bit 15 : Include or exclude subregion 15 in region */
#define MWU_PREGION_SUBS_SR15_Pos (15UL) /*!< Position of SR15 field. */
#define MWU_PREGION_SUBS_SR15_Msk (0x1UL << MWU_PREGION_SUBS_SR15_Pos) /*!< Bit mask of SR15 field. */
#define MWU_PREGION_SUBS_SR15_Exclude (0UL) /*!< Exclude */
#define MWU_PREGION_SUBS_SR15_Include (1UL) /*!< Include */

/* Bit 14 : Include or exclude subregion 14 in region */
#define MWU_PREGION_SUBS_SR14_Pos (14UL) /*!< Position of SR14 field. */
#define MWU_PREGION_SUBS_SR14_Msk (0x1UL << MWU_PREGION_SUBS_SR14_Pos) /*!< Bit mask of SR14 field. */
#define MWU_PREGION_SUBS_SR14_Exclude (0UL) /*!< Exclude */
#define MWU_PREGION_SUBS_SR14_Include (1UL) /*!< Include */

/* Bit 13 : Include or exclude subregion 13 in region */
#define MWU_PREGION_SUBS_SR13_Pos (13UL) /*!< Position of SR13 field. */
#define MWU_PREGION_SUBS_SR13_Msk (0x1UL << MWU_PREGION_SUBS_SR13_Pos) /*!< Bit mask of SR13 field. */
#define MWU_PREGION_SUBS_SR13_Exclude (0UL) /*!< Exclude */
#define MWU_PREGION_SUBS_SR13_Include (1UL) /*!< Include */

/* Bit 12 : Include or exclude subregion 12 in region */
#define MWU_PREGION_SUBS_SR12_Pos (12UL) /*!< Position of SR12 field. */
#define MWU_PREGION_SUBS_SR12_Msk (0x1UL << MWU_PREGION_SUBS_SR12_Pos) /*!< Bit mask of SR12 field. */
#define MWU_PREGION_SUBS_SR12_Exclude (0UL) /*!< Exclude */
#define MWU_PREGION_SUBS_SR12_Include (1UL) /*!< Include */

/* Bit 11 : Include or exclude subregion 11 in region */
#define MWU_PREGION_SUBS_SR11_Pos (11UL) /*!< Position of SR11 field. */
#define MWU_PREGION_SUBS_SR11_Msk (0x1UL << MWU_PREGION_SUBS_SR11_Pos) /*!< Bit mask of SR11 field. */
#define MWU_PREGION_SUBS_SR11_Exclude (0UL) /*!< Exclude */
#define MWU_PREGION_SUBS_SR11_Include (1UL) /*!< Include */

/* Bit 10 : Include or exclude subregion 10 in region */
#define MWU_PREGION_SUBS_SR10_Pos (10UL) /*!< Position of SR10 field. */
#define MWU_PREGION_SUBS_SR10_Msk (0x1UL << MWU_PREGION_SUBS_SR10_Pos) /*!< Bit mask of SR10 field. */
#define MWU_PREGION_SUBS_SR10_Exclude (0UL) /*!< Exclude */
#define MWU_PREGION_SUBS_SR10_Include (1UL) /*!< Include */

/* Bit 9 : Include or exclude subregion 9 in region */
#define MWU_PREGION_SUBS_SR9_Pos (9UL) /*!< Position of SR9 field. */
#define MWU_PREGION_SUBS_SR9_Msk (0x1UL << MWU_PREGION_SUBS_SR9_Pos) /*!< Bit mask of SR9 field. */
#define MWU_PREGION_SUBS_SR9_Exclude (0UL) /*!< Exclude */
#define MWU_PREGION_SUBS_SR9_Include (1UL) /*!< Include */

/* Bit 8 : Include or exclude subregion 8 in region */
#define MWU_PREGION_SUBS_SR8_Pos (8UL) /*!< Position of SR8 field. */
#define MWU_PREGION_SUBS_SR8_Msk (0x1UL << MWU_PREGION_SUBS_SR8_Pos) /*!< Bit mask of SR8 field. */
#define MWU_PREGION_SUBS_SR8_Exclude (0UL) /*!< Exclude */
#define MWU_PREGION_SUBS_SR8_Include (1UL) /*!< Include */

/* Bit 7 : Include or exclude subregion 7 in region */
#define MWU_PREGION_SUBS_SR7_Pos (7UL) /*!< Position of SR7 field. */
#define MWU_PREGION_SUBS_SR7_Msk (0x1UL << MWU_PREGION_SUBS_SR7_Pos) /*!< Bit mask of SR7 field. */
#define MWU_PREGION_SUBS_SR7_Exclude (0UL) /*!< Exclude */
#define MWU_PREGION_SUBS_SR7_Include (1UL) /*!< Include */

/* Bit 6 : Include or exclude subregion 6 in region */
#define MWU_PREGION_SUBS_SR6_Pos (6UL) /*!< Position of SR6 field. */
#define MWU_PREGION_SUBS_SR6_Msk (0x1UL << MWU_PREGION_SUBS_SR6_Pos) /*!< Bit mask of SR6 field. */
#define MWU_PREGION_SUBS_SR6_Exclude (0UL) /*!< Exclude */
#define MWU_PREGION_SUBS_SR6_Include (1UL) /*!< Include */

/* Bit 5 : Include or exclude subregion 5 in region */
#define MWU_PREGION_SUBS_SR5_Pos (5UL) /*!< Position of SR5 field. */
#define MWU_PREGION_SUBS_SR5_Msk (0x1UL << MWU_PREGION_SUBS_SR5_Pos) /*!< Bit mask of SR5 field. */
#define MWU_PREGION_SUBS_SR5_Exclude (0UL) /*!< Exclude */
#define MWU_PREGION_SUBS_SR5_Include (1UL) /*!< Include */

/* Bit 4 : Include or exclude subregion 4 in region */
#define MWU_PREGION_SUBS_SR4_Pos (4UL) /*!< Position of SR4 field. */
#define MWU_PREGION_SUBS_SR4_Msk (0x1UL << MWU_PREGION_SUBS_SR4_Pos) /*!< Bit mask of SR4 field. */
#define MWU_PREGION_SUBS_SR4_Exclude (0UL) /*!< Exclude */
#define MWU_PREGION_SUBS_SR4_Include (1UL) /*!< Include */

/* Bit 3 : Include or exclude subregion 3 in region */
#define MWU_PREGION_SUBS_SR3_Pos (3UL) /*!< Position of SR3 field. */
#define MWU_PREGION_SUBS_SR3_Msk (0x1UL << MWU_PREGION_SUBS_SR3_Pos) /*!< Bit mask of SR3 field. */
#define MWU_PREGION_SUBS_SR3_Exclude (0UL) /*!< Exclude */
#define MWU_PREGION_SUBS_SR3_Include (1UL) /*!< Include */

/* Bit 2 : Include or exclude subregion 2 in region */
#define MWU_PREGION_SUBS_SR2_Pos (2UL) /*!< Position of SR2 field. */
#define MWU_PREGION_SUBS_SR2_Msk (0x1UL << MWU_PREGION_SUBS_SR2_Pos) /*!< Bit mask of SR2 field. */
#define MWU_PREGION_SUBS_SR2_Exclude (0UL) /*!< Exclude */
#define MWU_PREGION_SUBS_SR2_Include (1UL) /*!< Include */

/* Bit 1 : Include or exclude subregion 1 in region */
#define MWU_PREGION_SUBS_SR1_Pos (1UL) /*!< Position of SR1 field. */
#define MWU_PREGION_SUBS_SR1_Msk (0x1UL << MWU_PREGION_SUBS_SR1_Pos) /*!< Bit mask of SR1 field. */
#define MWU_PREGION_SUBS_SR1_Exclude (0UL) /*!< Exclude */
#define MWU_PREGION_SUBS_SR1_Include (1UL) /*!< Include */

/* Bit 0 : Include or exclude subregion 0 in region */
#define MWU_PREGION_SUBS_SR0_Pos (0UL) /*!< Position of SR0 field. */
#define MWU_PREGION_SUBS_SR0_Msk (0x1UL << MWU_PREGION_SUBS_SR0_Pos) /*!< Bit mask of SR0 field. */
#define MWU_PREGION_SUBS_SR0_Exclude (0UL) /*!< Exclude */
#define MWU_PREGION_SUBS_SR0_Include (1UL) /*!< Include */


/* Peripheral: NVMC */
/* Description: Non Volatile Memory Controller */

/* Register: NVMC_READY */
/* Description: Ready flag */

/* Bit 0 : NVMC is ready or busy */
#define NVMC_READY_READY_Pos (0UL) /*!< Position of READY field. */
#define NVMC_READY_READY_Msk (0x1UL << NVMC_READY_READY_Pos) /*!< Bit mask of READY field. */
#define NVMC_READY_READY_Busy (0UL) /*!< NVMC is busy (on-going write or erase operation) */
#define NVMC_READY_READY_Ready (1UL) /*!< NVMC is ready */

/* Register: NVMC_VERIFYFAILED */
/* Description: Flag to signal that a flash erase or write operation has failed */

/* Bit 0 : Indicates if an erase or write operation has failed. This bit will then remain set until next reset, even if successful writes or erases occur after a failing one. */
#define NVMC_VERIFYFAILED_FAILED_Pos (0UL) /*!< Position of FAILED field. */
#define NVMC_VERIFYFAILED_FAILED_Msk (0x1UL << NVMC_VERIFYFAILED_FAILED_Pos) /*!< Bit mask of FAILED field. */
#define NVMC_VERIFYFAILED_FAILED_OK (0UL) /*!< No erase or write operation has failed since last reset */
#define NVMC_VERIFYFAILED_FAILED_Failed (1UL) /*!< At least one erase or write operation has failed */

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

/* Bits 31..0 : Register for starting erase of a page in Code area */
#define NVMC_ERASEPAGE_ERASEPAGE_Pos (0UL) /*!< Position of ERASEPAGE field. */
#define NVMC_ERASEPAGE_ERASEPAGE_Msk (0xFFFFFFFFUL << NVMC_ERASEPAGE_ERASEPAGE_Pos) /*!< Bit mask of ERASEPAGE field. */

/* Register: NVMC_ERASEPCR1 */
/* Description: Deprecated register - Register for erasing a page in Code area. Equivalent to ERASEPAGE. */

/* Bits 31..0 : Register for erasing a page in Code area. Equivalent to ERASEPAGE. */
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
/* Description: Deprecated register - Register for erasing a page in Code area. Equivalent to ERASEPAGE. */

/* Bits 31..0 : Register for starting erase of a page in Code area. Equivalent to ERASEPAGE. */
#define NVMC_ERASEPCR0_ERASEPCR0_Pos (0UL) /*!< Position of ERASEPCR0 field. */
#define NVMC_ERASEPCR0_ERASEPCR0_Msk (0xFFFFFFFFUL << NVMC_ERASEPCR0_ERASEPCR0_Pos) /*!< Bit mask of ERASEPCR0 field. */

/* Register: NVMC_ERASEUICR */
/* Description: Register for erasing User Information Configuration Registers */

/* Bit 0 : Register starting erase of all User Information Configuration Registers. Note that code erase has to be enabled by CONFIG.EEN before the UICR can be erased. */
#define NVMC_ERASEUICR_ERASEUICR_Pos (0UL) /*!< Position of ERASEUICR field. */
#define NVMC_ERASEUICR_ERASEUICR_Msk (0x1UL << NVMC_ERASEUICR_ERASEUICR_Pos) /*!< Bit mask of ERASEUICR field. */
#define NVMC_ERASEUICR_ERASEUICR_NoOperation (0UL) /*!< No operation */
#define NVMC_ERASEUICR_ERASEUICR_Erase (1UL) /*!< Start erase of UICR */

/* Register: NVMC_ICACHECNF */
/* Description: I-Code cache configuration register. */

/* Bit 8 : Cache profiling enable */
#define NVMC_ICACHECNF_CACHEPROFEN_Pos (8UL) /*!< Position of CACHEPROFEN field. */
#define NVMC_ICACHECNF_CACHEPROFEN_Msk (0x1UL << NVMC_ICACHECNF_CACHEPROFEN_Pos) /*!< Bit mask of CACHEPROFEN field. */
#define NVMC_ICACHECNF_CACHEPROFEN_Disabled (0UL) /*!< Disable cache profiling */
#define NVMC_ICACHECNF_CACHEPROFEN_Enabled (1UL) /*!< Enable cache profiling */

/* Bit 0 : Cache enable */
#define NVMC_ICACHECNF_CACHEEN_Pos (0UL) /*!< Position of CACHEEN field. */
#define NVMC_ICACHECNF_CACHEEN_Msk (0x1UL << NVMC_ICACHECNF_CACHEEN_Pos) /*!< Bit mask of CACHEEN field. */
#define NVMC_ICACHECNF_CACHEEN_Disabled (0UL) /*!< Disable cache. Invalidates all cache entries. */
#define NVMC_ICACHECNF_CACHEEN_Enabled (1UL) /*!< Enable cache */

/* Register: NVMC_IHIT */
/* Description: I-Code cache hit counter. */

/* Bits 31..0 : Number of cache hits */
#define NVMC_IHIT_HITS_Pos (0UL) /*!< Position of HITS field. */
#define NVMC_IHIT_HITS_Msk (0xFFFFFFFFUL << NVMC_IHIT_HITS_Pos) /*!< Bit mask of HITS field. */

/* Register: NVMC_IMISS */
/* Description: I-Code cache miss counter. */

/* Bits 31..0 : Number of cache misses */
#define NVMC_IMISS_MISSES_Pos (0UL) /*!< Position of MISSES field. */
#define NVMC_IMISS_MISSES_Msk (0xFFFFFFFFUL << NVMC_IMISS_MISSES_Pos) /*!< Bit mask of MISSES field. */

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

/* Register: NVMC_TESTMASSERASE */
/* Description: Self-timed mass-erase operation */

/* Bits 1..0 : Self-timed mass-erase operation */
#define NVMC_TESTMASSERASE_TESTMASSERASE_Pos (0UL) /*!< Position of TESTMASSERASE field. */
#define NVMC_TESTMASSERASE_TESTMASSERASE_Msk (0x3UL << NVMC_TESTMASSERASE_TESTMASSERASE_Pos) /*!< Bit mask of TESTMASSERASE field. */
#define NVMC_TESTMASSERASE_TESTMASSERASE_NOOPERATION0 (0UL) /*!< No operation */
#define NVMC_TESTMASSERASE_TESTMASSERASE_NOOPERATION1 (1UL) /*!< No operation */
#define NVMC_TESTMASSERASE_TESTMASSERASE_MAIN (2UL) /*!< Erase only the main block */
#define NVMC_TESTMASSERASE_TESTMASSERASE_EVERYTHING (3UL) /*!< Erase everything (all information pages and main block) */

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
/* Description: Description collection: Direct flash test data word n */

/* Bits 31..0 : Returns data out from flash when reading. Sets flash data in when writing. */
#define NVMC_TESTDATA128_TESTDATA_Pos (0UL) /*!< Position of TESTDATA field. */
#define NVMC_TESTDATA128_TESTDATA_Msk (0xFFFFFFFFUL << NVMC_TESTDATA128_TESTDATA_Pos) /*!< Bit mask of TESTDATA field. */

/* Register: NVMC_TESTDATA128INC */
/* Description: Description collection: Direct flash test data word n. Post-increments TESTCONTROLADDR */

/* Bits 31..0 : Returns data out from flash when reading. Use TESTDATA128[3:0] registers to set the compared data. Post-increments TESTCONTROLADDR. If TESTCONTROLLINES.SE is high, the read starts by pulsing the SE line low for Tnws. If TESTCONTROLLINES.SE is low, SE remains low for the whole access. */
#define NVMC_TESTDATA128INC_TESTDATA_Pos (0UL) /*!< Position of TESTDATA field. */
#define NVMC_TESTDATA128INC_TESTDATA_Msk (0xFFFFFFFFUL << NVMC_TESTDATA128INC_TESTDATA_Pos) /*!< Bit mask of TESTDATA field. */

/* Register: NVMC_TESTCMPINC */
/* Description: Reads and compares last flash row to TESTDATA128 content. Post-increments TESTCONTROLADDR. */

/* Bit 1 : Reads and compares last flash row (latched lines) to TESTDATA128 content. Post-increments TESTCONTROLADDR. If TESTCONTROLLINES.SE is high, the read starts by pulsing the SE line low for Tnws. If TESTCONTROLLINES.SE is low, SE remains low for the whole access. */
#define NVMC_TESTCMPINC_LATCHED_Pos (1UL) /*!< Position of LATCHED field. */
#define NVMC_TESTCMPINC_LATCHED_Msk (0x1UL << NVMC_TESTCMPINC_LATCHED_Pos) /*!< Bit mask of LATCHED field. */
#define NVMC_TESTCMPINC_LATCHED_Equal (0UL) /*!< Latched TESTDATA128 content and flash row read are equal */
#define NVMC_TESTCMPINC_LATCHED_NotEqual (1UL) /*!< Latched TESTDATA128 content and flash row read are different */

/* Bit 0 : Reads and compares last flash row (direct lines) to TESTDATA128 content. Post-increments TESTCONTROLADDR. If TESTCONTROLLINES.SE is high, the read starts by pulsing the SE line low for Tnws. If TESTCONTROLLINES.SE is low, SE remains low for the whole access. */
#define NVMC_TESTCMPINC_DIRECT_Pos (0UL) /*!< Position of DIRECT field. */
#define NVMC_TESTCMPINC_DIRECT_Msk (0x1UL << NVMC_TESTCMPINC_DIRECT_Pos) /*!< Bit mask of DIRECT field. */
#define NVMC_TESTCMPINC_DIRECT_Equal (0UL) /*!< Direct TESTDATA128 content and flash row read are equal */
#define NVMC_TESTCMPINC_DIRECT_NotEqual (1UL) /*!< Direct TESTDATA128 content and flash row read are different */

/* Register: NVMC_TESTNCMPINC */
/* Description: Reads and compares last flash row to complement of TESTDATA128 content. Post-increments TESTCONTROLADDR. */

/* Bit 1 : Reads and compares last flash row (latched lines) to the complement of TESTDATA128 content (all bits inverted). Post-increments TESTCONTROLADDR. If TESTCONTROLLINES.SE is high, the read starts by pulsing the SE line low for Tnws. If TESTCONTROLLINES.SE is low, SE remains low for the whole access. */
#define NVMC_TESTNCMPINC_LATCHED_Pos (1UL) /*!< Position of LATCHED field. */
#define NVMC_TESTNCMPINC_LATCHED_Msk (0x1UL << NVMC_TESTNCMPINC_LATCHED_Pos) /*!< Bit mask of LATCHED field. */
#define NVMC_TESTNCMPINC_LATCHED_Complement (0UL) /*!< Latched TESTDATA128 content and flash row read are each-other's complement */
#define NVMC_TESTNCMPINC_LATCHED_NotComplement (1UL) /*!< Latched TESTDATA128 content and flash row read are not each-other's complement */

/* Bit 0 : Reads and compares last flash row (direct lines) to the complement of TESTDATA128 content (all bits inverted). Post-increments TESTCONTROLADDR. If TESTCONTROLLINES.SE is high, the read starts by pulsing the SE line low for Tnws. If TESTCONTROLLINES.SE is low, SE remains low for the whole access. */
#define NVMC_TESTNCMPINC_DIRECT_Pos (0UL) /*!< Position of DIRECT field. */
#define NVMC_TESTNCMPINC_DIRECT_Msk (0x1UL << NVMC_TESTNCMPINC_DIRECT_Pos) /*!< Bit mask of DIRECT field. */
#define NVMC_TESTNCMPINC_DIRECT_Complement (0UL) /*!< Direct TESTDATA128 content and flash row read are each-other's complement */
#define NVMC_TESTNCMPINC_DIRECT_NotComplement (1UL) /*!< Direct TESTDATA128 content and flash row read are not each-other's complement */

/* Register: NVMC_TESTCONTROLLINES */
/* Description: Direct flash test, control lines. Refer to the flash IP test documentation for more details. */

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

/* Bits 14..5 : Control the XADDR signal */
#define NVMC_TESTCONTROLADDR_XADDR_Pos (5UL) /*!< Position of XADDR field. */
#define NVMC_TESTCONTROLADDR_XADDR_Msk (0x3FFUL << NVMC_TESTCONTROLADDR_XADDR_Pos) /*!< Bit mask of XADDR field. */

/* Bits 4..0 : Control the YADDR signal */
#define NVMC_TESTCONTROLADDR_YADDR_Pos (0UL) /*!< Position of YADDR field. */
#define NVMC_TESTCONTROLADDR_YADDR_Msk (0x1FUL << NVMC_TESTCONTROLADDR_YADDR_Pos) /*!< Bit mask of YADDR field. */

/* Register: NVMC_TESTCOUNTERRELOAD */
/* Description: Counter reload value, used when counting from SE or YE rising edge to latching of data */

/* Bits 11..0 : Counter reload value, in MCU bus cycles, used when counting from SE or YE rising edge to latching of data. Value of 0 has no effect (counter will not latch) */
#define NVMC_TESTCOUNTERRELOAD_RELOAD_Pos (0UL) /*!< Position of RELOAD field. */
#define NVMC_TESTCOUNTERRELOAD_RELOAD_Msk (0xFFFUL << NVMC_TESTCOUNTERRELOAD_RELOAD_Pos) /*!< Bit mask of RELOAD field. */

/* Register: NVMC_TESTCOUNTERRUNNING */
/* Description: Returns the state (counting or not) of the counter */

/* Bit 0 : Returns the state of the counter */
#define NVMC_TESTCOUNTERRUNNING_RUNNING_Pos (0UL) /*!< Position of RUNNING field. */
#define NVMC_TESTCOUNTERRUNNING_RUNNING_Msk (0x1UL << NVMC_TESTCOUNTERRUNNING_RUNNING_Pos) /*!< Bit mask of RUNNING field. */
#define NVMC_TESTCOUNTERRUNNING_RUNNING_NotRunning (0UL) /*!< Counter is not running */
#define NVMC_TESTCOUNTERRUNNING_RUNNING_Running (1UL) /*!< Counter is running */

/* Register: NVMC_TESTCONFIG */
/* Description: Mode of operation of the counter */

/* Bit 3 : Disables the address auto-increment or -decrement */
#define NVMC_TESTCONFIG_AUTOINCEN_Pos (3UL) /*!< Position of AUTOINCEN field. */
#define NVMC_TESTCONFIG_AUTOINCEN_Msk (0x1UL << NVMC_TESTCONFIG_AUTOINCEN_Pos) /*!< Bit mask of AUTOINCEN field. */
#define NVMC_TESTCONFIG_AUTOINCEN_Enable (0UL) /*!< Address auto-incrementing/decrementing is enabled */
#define NVMC_TESTCONFIG_AUTOINCEN_Disable (1UL) /*!< Address auto-incrementing/decrementing is disabled */

/* Bit 2 : Controls the address auto-increment or -decrement */
#define NVMC_TESTCONFIG_AUTOINC_Pos (2UL) /*!< Position of AUTOINC field. */
#define NVMC_TESTCONFIG_AUTOINC_Msk (0x1UL << NVMC_TESTCONFIG_AUTOINC_Pos) /*!< Bit mask of AUTOINC field. */
#define NVMC_TESTCONFIG_AUTOINC_Increment (0UL) /*!< Address is auto-incrementing */
#define NVMC_TESTCONFIG_AUTOINC_Decrement (1UL) /*!< Address is auto-decrementing */

/* Bit 1 : Defines the starting point of the counter */
#define NVMC_TESTCONFIG_START_Pos (1UL) /*!< Position of START field. */
#define NVMC_TESTCONFIG_START_Msk (0x1UL << NVMC_TESTCONFIG_START_Pos) /*!< Bit mask of START field. */
#define NVMC_TESTCONFIG_START_SE (0UL) /*!< Counter starts on SE rising edge */
#define NVMC_TESTCONFIG_START_YE (1UL) /*!< Counter starts on YE rising edge */

/* Bit 0 : Returns the state of the counter */
#define NVMC_TESTCONFIG_ENABLE_Pos (0UL) /*!< Position of ENABLE field. */
#define NVMC_TESTCONFIG_ENABLE_Msk (0x1UL << NVMC_TESTCONFIG_ENABLE_Pos) /*!< Bit mask of ENABLE field. */
#define NVMC_TESTCONFIG_ENABLE_Disabled (0UL) /*!< Counter is disabled */
#define NVMC_TESTCONFIG_ENABLE_Enabled (1UL) /*!< Counter is enabled */

/* Register: NVMC_TESTTMVPPANAEN */
/* Description: Controls analog signals for flash measurements */

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

/* Register: NVMC_TESTTC_2 */
/* Description: Observe the TC output from the flash. Flash macro 2. */

/* Bits 12..0 : TC output */
#define NVMC_TESTTC_2_TC_Pos (0UL) /*!< Position of TC field. */
#define NVMC_TESTTC_2_TC_Msk (0x1FFFUL << NVMC_TESTTC_2_TC_Pos) /*!< Bit mask of TC field. */

/* Register: NVMC_TESTDATA128_2 */
/* Description: Description collection: Direct flash test data word n. Flash macro 2. */

/* Bits 31..0 : Returns data out from flash when reading. Sets flash data in when writing. */
#define NVMC_TESTDATA128_2_TESTDATA_Pos (0UL) /*!< Position of TESTDATA field. */
#define NVMC_TESTDATA128_2_TESTDATA_Msk (0xFFFFFFFFUL << NVMC_TESTDATA128_2_TESTDATA_Pos) /*!< Bit mask of TESTDATA field. */

/* Register: NVMC_TESTDATA128INC_2 */
/* Description: Description collection: Direct flash test data word n. Post-increments TESTCONTROLADDR. Flash macro 2. */

/* Bits 31..0 : Returns data out from flash when reading. Use TESTDATA128[3:0] registers to set the compared data. Post-increments TESTCONTROLADDR. If TESTCONTROLLINES.SE is high, the read starts by pulsing the SE line low for Tnws. If TESTCONTROLLINES.SE is low, SE remains low for the whole access. */
#define NVMC_TESTDATA128INC_2_TESTDATA_Pos (0UL) /*!< Position of TESTDATA field. */
#define NVMC_TESTDATA128INC_2_TESTDATA_Msk (0xFFFFFFFFUL << NVMC_TESTDATA128INC_2_TESTDATA_Pos) /*!< Bit mask of TESTDATA field. */

/* Register: NVMC_TESTCMPINC_2 */
/* Description: Reads and compares last flash row to TESTDATA128 content. Post-increments TESTCONTROLADDR. Flash macro 2. */

/* Bit 1 : Reads and compares last flash row (latched lines) to TESTDATA128 content. Post-increments TESTCONTROLADDR. If TESTCONTROLLINES.SE is high, the read starts by pulsing the SE line low for Tnws. If TESTCONTROLLINES.SE is low, SE remains low for the whole access. */
#define NVMC_TESTCMPINC_2_LATCHED_Pos (1UL) /*!< Position of LATCHED field. */
#define NVMC_TESTCMPINC_2_LATCHED_Msk (0x1UL << NVMC_TESTCMPINC_2_LATCHED_Pos) /*!< Bit mask of LATCHED field. */
#define NVMC_TESTCMPINC_2_LATCHED_Equal (0UL) /*!< Latched TESTDATA128 content and flash row read are equal */
#define NVMC_TESTCMPINC_2_LATCHED_NotEqual (1UL) /*!< Latched TESTDATA128 content and flash row read are different */

/* Bit 0 : Reads and compares last flash row (direct lines) to TESTDATA128 content. Post-increments TESTCONTROLADDR. If TESTCONTROLLINES.SE is high, the read starts by pulsing the SE line low for Tnws. If TESTCONTROLLINES.SE is low, SE remains low for the whole access. */
#define NVMC_TESTCMPINC_2_DIRECT_Pos (0UL) /*!< Position of DIRECT field. */
#define NVMC_TESTCMPINC_2_DIRECT_Msk (0x1UL << NVMC_TESTCMPINC_2_DIRECT_Pos) /*!< Bit mask of DIRECT field. */
#define NVMC_TESTCMPINC_2_DIRECT_Equal (0UL) /*!< Direct TESTDATA128 content and flash row read are equal */
#define NVMC_TESTCMPINC_2_DIRECT_NotEqual (1UL) /*!< Direct TESTDATA128 content and flash row read are different */

/* Register: NVMC_TESTNCMPINC_2 */
/* Description: Reads and compares last flash row to complement of TESTDATA128 content. Post-increments TESTCONTROLADDR. Flash macro 2. */

/* Bit 1 : Reads and compares last flash row (latched lines) to the complement of TESTDATA128 content (all bits inverted). Post-increments TESTCONTROLADDR. If TESTCONTROLLINES.SE is high, the read starts by pulsing the SE line low for Tnws. If TESTCONTROLLINES.SE is low, SE remains low for the whole access. */
#define NVMC_TESTNCMPINC_2_LATCHED_Pos (1UL) /*!< Position of LATCHED field. */
#define NVMC_TESTNCMPINC_2_LATCHED_Msk (0x1UL << NVMC_TESTNCMPINC_2_LATCHED_Pos) /*!< Bit mask of LATCHED field. */
#define NVMC_TESTNCMPINC_2_LATCHED_Complement (0UL) /*!< Latched TESTDATA128 content and flash row read are each-other's complement */
#define NVMC_TESTNCMPINC_2_LATCHED_NotComplement (1UL) /*!< Latched TESTDATA128 content and flash row read are not each-other's complement */

/* Bit 0 : Reads and compares last flash row (direct lines) to the complement of TESTDATA128 content (all bits inverted). Post-increments TESTCONTROLADDR. If TESTCONTROLLINES.SE is high, the read starts by pulsing the SE line low for Tnws. If TESTCONTROLLINES.SE is low, SE remains low for the whole access. */
#define NVMC_TESTNCMPINC_2_DIRECT_Pos (0UL) /*!< Position of DIRECT field. */
#define NVMC_TESTNCMPINC_2_DIRECT_Msk (0x1UL << NVMC_TESTNCMPINC_2_DIRECT_Pos) /*!< Bit mask of DIRECT field. */
#define NVMC_TESTNCMPINC_2_DIRECT_Complement (0UL) /*!< Direct TESTDATA128 content and flash row read are each-other's complement */
#define NVMC_TESTNCMPINC_2_DIRECT_NotComplement (1UL) /*!< Direct TESTDATA128 content and flash row read are not each-other's complement */

/* Register: NVMC_TESTCONTROLLINES_2 */
/* Description: Direct flash test, control lines. Refer to the flash IP test documentation for more details. Flash macro 2. */

/* Bit 31 : Control the TMR signal */
#define NVMC_TESTCONTROLLINES_2_TMR_Pos (31UL) /*!< Position of TMR field. */
#define NVMC_TESTCONTROLLINES_2_TMR_Msk (0x1UL << NVMC_TESTCONTROLLINES_2_TMR_Pos) /*!< Bit mask of TMR field. */

/* Bit 30 : Control the NVSTR signal */
#define NVMC_TESTCONTROLLINES_2_NVSTR_Pos (30UL) /*!< Position of NVSTR field. */
#define NVMC_TESTCONTROLLINES_2_NVSTR_Msk (0x1UL << NVMC_TESTCONTROLLINES_2_NVSTR_Pos) /*!< Bit mask of NVSTR field. */

/* Bit 29 : Control the PROG signal */
#define NVMC_TESTCONTROLLINES_2_PROG_Pos (29UL) /*!< Position of PROG field. */
#define NVMC_TESTCONTROLLINES_2_PROG_Msk (0x1UL << NVMC_TESTCONTROLLINES_2_PROG_Pos) /*!< Bit mask of PROG field. */

/* Bit 28 : Control the MAS1 signal */
#define NVMC_TESTCONTROLLINES_2_MAS1_Pos (28UL) /*!< Position of MAS1 field. */
#define NVMC_TESTCONTROLLINES_2_MAS1_Msk (0x1UL << NVMC_TESTCONTROLLINES_2_MAS1_Pos) /*!< Bit mask of MAS1 field. */

/* Bit 27 : Control the ERASE signal */
#define NVMC_TESTCONTROLLINES_2_ERASE_Pos (27UL) /*!< Position of ERASE field. */
#define NVMC_TESTCONTROLLINES_2_ERASE_Msk (0x1UL << NVMC_TESTCONTROLLINES_2_ERASE_Pos) /*!< Bit mask of ERASE field. */

/* Bit 26 : Control the IFREN signal */
#define NVMC_TESTCONTROLLINES_2_IFREN_Pos (26UL) /*!< Position of IFREN field. */
#define NVMC_TESTCONTROLLINES_2_IFREN_Msk (0x1UL << NVMC_TESTCONTROLLINES_2_IFREN_Pos) /*!< Bit mask of IFREN field. */

/* Bit 25 : Control the SE signal. This signal is delayed by hardware by Tas, so that it can be written simultaneously to XE and YE */
#define NVMC_TESTCONTROLLINES_2_SE_Pos (25UL) /*!< Position of SE field. */
#define NVMC_TESTCONTROLLINES_2_SE_Msk (0x1UL << NVMC_TESTCONTROLLINES_2_SE_Pos) /*!< Bit mask of SE field. */

/* Bit 24 : Control the YE signal */
#define NVMC_TESTCONTROLLINES_2_YE_Pos (24UL) /*!< Position of YE field. */
#define NVMC_TESTCONTROLLINES_2_YE_Msk (0x1UL << NVMC_TESTCONTROLLINES_2_YE_Pos) /*!< Bit mask of YE field. */

/* Bit 23 : Control the XE signal */
#define NVMC_TESTCONTROLLINES_2_XE_Pos (23UL) /*!< Position of XE field. */
#define NVMC_TESTCONTROLLINES_2_XE_Msk (0x1UL << NVMC_TESTCONTROLLINES_2_XE_Pos) /*!< Bit mask of XE field. */

/* Bit 22 : Control the PV signal */
#define NVMC_TESTCONTROLLINES_2_PV_Pos (22UL) /*!< Position of PV field. */
#define NVMC_TESTCONTROLLINES_2_PV_Msk (0x1UL << NVMC_TESTCONTROLLINES_2_PV_Pos) /*!< Bit mask of PV field. */

/* Bit 21 : Control the EV signal */
#define NVMC_TESTCONTROLLINES_2_EV_Pos (21UL) /*!< Position of EV field. */
#define NVMC_TESTCONTROLLINES_2_EV_Msk (0x1UL << NVMC_TESTCONTROLLINES_2_EV_Pos) /*!< Bit mask of EV field. */

/* Bit 20 : Control the IFREN1 signal */
#define NVMC_TESTCONTROLLINES_2_IFREN1_Pos (20UL) /*!< Position of IFREN1 field. */
#define NVMC_TESTCONTROLLINES_2_IFREN1_Msk (0x1UL << NVMC_TESTCONTROLLINES_2_IFREN1_Pos) /*!< Bit mask of IFREN1 field. */

/* Bits 19..18 : Control the REDEN signal */
#define NVMC_TESTCONTROLLINES_2_REDEN_Pos (18UL) /*!< Position of REDEN field. */
#define NVMC_TESTCONTROLLINES_2_REDEN_Msk (0x3UL << NVMC_TESTCONTROLLINES_2_REDEN_Pos) /*!< Bit mask of REDEN field. */

/* Bit 17 : Control the PDM25 signal */
#define NVMC_TESTCONTROLLINES_2_PDM25_Pos (17UL) /*!< Position of PDM25 field. */
#define NVMC_TESTCONTROLLINES_2_PDM25_Msk (0x1UL << NVMC_TESTCONTROLLINES_2_PDM25_Pos) /*!< Bit mask of PDM25 field. */

/* Register: NVMC_TESTCONTROLADDR_2 */
/* Description: Direct flash test control, address lines. Flash macro 2. */

/* Bits 14..5 : Control the XADDR signal */
#define NVMC_TESTCONTROLADDR_2_XADDR_Pos (5UL) /*!< Position of XADDR field. */
#define NVMC_TESTCONTROLADDR_2_XADDR_Msk (0x3FFUL << NVMC_TESTCONTROLADDR_2_XADDR_Pos) /*!< Bit mask of XADDR field. */

/* Bits 4..0 : Control the YADDR signal */
#define NVMC_TESTCONTROLADDR_2_YADDR_Pos (0UL) /*!< Position of YADDR field. */
#define NVMC_TESTCONTROLADDR_2_YADDR_Msk (0x1FUL << NVMC_TESTCONTROLADDR_2_YADDR_Pos) /*!< Bit mask of YADDR field. */

/* Register: NVMC_TESTCOUNTERRELOAD_2 */
/* Description: Counter reload value, used when counting from SE or YE rising edge to latching of data. Flash macro 2. */

/* Bits 11..0 : Counter reload value, in MCU bus cycles, used when counting from SE or YE rising edge to latching of data. Value of 0 has no effect (counter will not latch) */
#define NVMC_TESTCOUNTERRELOAD_2_RELOAD_Pos (0UL) /*!< Position of RELOAD field. */
#define NVMC_TESTCOUNTERRELOAD_2_RELOAD_Msk (0xFFFUL << NVMC_TESTCOUNTERRELOAD_2_RELOAD_Pos) /*!< Bit mask of RELOAD field. */

/* Register: NVMC_TESTCOUNTERRUNNING_2 */
/* Description: Returns the state (counting or not) of the counter. Flash macro 2. */

/* Bit 0 : Returns the state of the counter */
#define NVMC_TESTCOUNTERRUNNING_2_RUNNING_Pos (0UL) /*!< Position of RUNNING field. */
#define NVMC_TESTCOUNTERRUNNING_2_RUNNING_Msk (0x1UL << NVMC_TESTCOUNTERRUNNING_2_RUNNING_Pos) /*!< Bit mask of RUNNING field. */
#define NVMC_TESTCOUNTERRUNNING_2_RUNNING_NotRunning (0UL) /*!< Counter is not running */
#define NVMC_TESTCOUNTERRUNNING_2_RUNNING_Running (1UL) /*!< Counter is running */

/* Register: NVMC_TESTCONFIG_2 */
/* Description: Mode of operation of the counter. Flash macro 2. */

/* Bit 3 : Disables the address auto-increment or -decrement */
#define NVMC_TESTCONFIG_2_AUTOINCEN_Pos (3UL) /*!< Position of AUTOINCEN field. */
#define NVMC_TESTCONFIG_2_AUTOINCEN_Msk (0x1UL << NVMC_TESTCONFIG_2_AUTOINCEN_Pos) /*!< Bit mask of AUTOINCEN field. */
#define NVMC_TESTCONFIG_2_AUTOINCEN_Enable (0UL) /*!< Address auto-incrementing/decrementing is enabled */
#define NVMC_TESTCONFIG_2_AUTOINCEN_Disable (1UL) /*!< Address auto-incrementing/decrementing is disabled */

/* Bit 2 : Controls the address auto-increment or -decrement */
#define NVMC_TESTCONFIG_2_AUTOINC_Pos (2UL) /*!< Position of AUTOINC field. */
#define NVMC_TESTCONFIG_2_AUTOINC_Msk (0x1UL << NVMC_TESTCONFIG_2_AUTOINC_Pos) /*!< Bit mask of AUTOINC field. */
#define NVMC_TESTCONFIG_2_AUTOINC_Increment (0UL) /*!< Address is auto-incrementing */
#define NVMC_TESTCONFIG_2_AUTOINC_Decrement (1UL) /*!< Address is auto-decrementing */

/* Bit 1 : Defines the starting point of the counter */
#define NVMC_TESTCONFIG_2_START_Pos (1UL) /*!< Position of START field. */
#define NVMC_TESTCONFIG_2_START_Msk (0x1UL << NVMC_TESTCONFIG_2_START_Pos) /*!< Bit mask of START field. */
#define NVMC_TESTCONFIG_2_START_SE (0UL) /*!< Counter starts on SE rising edge */
#define NVMC_TESTCONFIG_2_START_YE (1UL) /*!< Counter starts on YE rising edge */

/* Bit 0 : Returns the state of the counter */
#define NVMC_TESTCONFIG_2_ENABLE_Pos (0UL) /*!< Position of ENABLE field. */
#define NVMC_TESTCONFIG_2_ENABLE_Msk (0x1UL << NVMC_TESTCONFIG_2_ENABLE_Pos) /*!< Bit mask of ENABLE field. */
#define NVMC_TESTCONFIG_2_ENABLE_Disabled (0UL) /*!< Counter is disabled */
#define NVMC_TESTCONFIG_2_ENABLE_Enabled (1UL) /*!< Counter is enabled */

/* Register: NVMC_TESTTMVPPANAEN_2 */
/* Description: Controls analog signals for flash measurements. Flash macro 2. */

/* Bit 4 : Enable the VPPDIV pad. Needs to be set when measuring VPPDIV on GPIO26 (P0.20), and when applying high-voltage on VPP pad. */
#define NVMC_TESTTMVPPANAEN_2_VPPDIVEN_Pos (4UL) /*!< Position of VPPDIVEN field. */
#define NVMC_TESTTMVPPANAEN_2_VPPDIVEN_Msk (0x1UL << NVMC_TESTTMVPPANAEN_2_VPPDIVEN_Pos) /*!< Bit mask of VPPDIVEN field. */
#define NVMC_TESTTMVPPANAEN_2_VPPDIVEN_Disabled (0UL) /*!< VPPDIV pad disabled */
#define NVMC_TESTTMVPPANAEN_2_VPPDIVEN_Enabled (1UL) /*!< VPPDIV pad enabled */

/* Bits 3..0 : Analog enable for TM measurement. Needs to be set when measuring TM[3:0] on P0.05, P0.04, P0.01 and P0.00. */
#define NVMC_TESTTMVPPANAEN_2_TMANAEN_Pos (0UL) /*!< Position of TMANAEN field. */
#define NVMC_TESTTMVPPANAEN_2_TMANAEN_Msk (0xFUL << NVMC_TESTTMVPPANAEN_2_TMANAEN_Pos) /*!< Bit mask of TMANAEN field. */
#define NVMC_TESTTMVPPANAEN_2_TMANAEN_Disabled (0x0UL) /*!< All pads disabled */
#define NVMC_TESTTMVPPANAEN_2_TMANAEN_Enabled (0xFUL) /*!< All pads enabled */

/* Register: NVMC_FORCEONNVM */
/* Description: Force on NVM. See also the internal section in the NVMC chapter. */

/* Bit 0 : Force on NVM controller. See also the internal section in the NVMC chapter. */
#define NVMC_FORCEONNVM_FORCEONNVM_Pos (0UL) /*!< Position of FORCEONNVM field. */
#define NVMC_FORCEONNVM_FORCEONNVM_Msk (0x1UL << NVMC_FORCEONNVM_FORCEONNVM_Pos) /*!< Bit mask of FORCEONNVM field. */
#define NVMC_FORCEONNVM_FORCEONNVM_DoNotForceOn (0UL) /*!< Do not force on NVM controller */
#define NVMC_FORCEONNVM_FORCEONNVM_ForceOn (1UL) /*!< Force on NVM controller */


/* Peripheral: GPIO */
/* Description: GPIO Port */

/* Register: GPIO_OUT */
/* Description: Write GPIO port */

/* Bit 3 : P0.3 pin */
#define GPIO_OUT_PIN3_Pos (3UL) /*!< Position of PIN3 field. */
#define GPIO_OUT_PIN3_Msk (0x1UL << GPIO_OUT_PIN3_Pos) /*!< Bit mask of PIN3 field. */
#define GPIO_OUT_PIN3_Low (0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN3_High (1UL) /*!< Pin driver is high */

/* Bit 2 : P0.2 pin */
#define GPIO_OUT_PIN2_Pos (2UL) /*!< Position of PIN2 field. */
#define GPIO_OUT_PIN2_Msk (0x1UL << GPIO_OUT_PIN2_Pos) /*!< Bit mask of PIN2 field. */
#define GPIO_OUT_PIN2_Low (0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN2_High (1UL) /*!< Pin driver is high */

/* Bit 1 : P0.1 pin */
#define GPIO_OUT_PIN1_Pos (1UL) /*!< Position of PIN1 field. */
#define GPIO_OUT_PIN1_Msk (0x1UL << GPIO_OUT_PIN1_Pos) /*!< Bit mask of PIN1 field. */
#define GPIO_OUT_PIN1_Low (0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN1_High (1UL) /*!< Pin driver is high */

/* Bit 0 : P0.0 pin */
#define GPIO_OUT_PIN0_Pos (0UL) /*!< Position of PIN0 field. */
#define GPIO_OUT_PIN0_Msk (0x1UL << GPIO_OUT_PIN0_Pos) /*!< Bit mask of PIN0 field. */
#define GPIO_OUT_PIN0_Low (0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN0_High (1UL) /*!< Pin driver is high */

/* Register: GPIO_OUTSET */
/* Description: Set individual bits in GPIO port */

/* Bit 3 : P0.3 pin */
#define GPIO_OUTSET_PIN3_Pos (3UL) /*!< Position of PIN3 field. */
#define GPIO_OUTSET_PIN3_Msk (0x1UL << GPIO_OUTSET_PIN3_Pos) /*!< Bit mask of PIN3 field. */
#define GPIO_OUTSET_PIN3_Low (0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN3_High (1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN3_Set (1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 2 : P0.2 pin */
#define GPIO_OUTSET_PIN2_Pos (2UL) /*!< Position of PIN2 field. */
#define GPIO_OUTSET_PIN2_Msk (0x1UL << GPIO_OUTSET_PIN2_Pos) /*!< Bit mask of PIN2 field. */
#define GPIO_OUTSET_PIN2_Low (0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN2_High (1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN2_Set (1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 1 : P0.1 pin */
#define GPIO_OUTSET_PIN1_Pos (1UL) /*!< Position of PIN1 field. */
#define GPIO_OUTSET_PIN1_Msk (0x1UL << GPIO_OUTSET_PIN1_Pos) /*!< Bit mask of PIN1 field. */
#define GPIO_OUTSET_PIN1_Low (0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN1_High (1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN1_Set (1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 0 : P0.0 pin */
#define GPIO_OUTSET_PIN0_Pos (0UL) /*!< Position of PIN0 field. */
#define GPIO_OUTSET_PIN0_Msk (0x1UL << GPIO_OUTSET_PIN0_Pos) /*!< Bit mask of PIN0 field. */
#define GPIO_OUTSET_PIN0_Low (0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN0_High (1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN0_Set (1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Register: GPIO_OUTCLR */
/* Description: Clear individual bits in GPIO port */

/* Bit 3 : P0.3 pin */
#define GPIO_OUTCLR_PIN3_Pos (3UL) /*!< Position of PIN3 field. */
#define GPIO_OUTCLR_PIN3_Msk (0x1UL << GPIO_OUTCLR_PIN3_Pos) /*!< Bit mask of PIN3 field. */
#define GPIO_OUTCLR_PIN3_Low (0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN3_High (1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN3_Clear (1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 2 : P0.2 pin */
#define GPIO_OUTCLR_PIN2_Pos (2UL) /*!< Position of PIN2 field. */
#define GPIO_OUTCLR_PIN2_Msk (0x1UL << GPIO_OUTCLR_PIN2_Pos) /*!< Bit mask of PIN2 field. */
#define GPIO_OUTCLR_PIN2_Low (0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN2_High (1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN2_Clear (1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 1 : P0.1 pin */
#define GPIO_OUTCLR_PIN1_Pos (1UL) /*!< Position of PIN1 field. */
#define GPIO_OUTCLR_PIN1_Msk (0x1UL << GPIO_OUTCLR_PIN1_Pos) /*!< Bit mask of PIN1 field. */
#define GPIO_OUTCLR_PIN1_Low (0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN1_High (1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN1_Clear (1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 0 : P0.0 pin */
#define GPIO_OUTCLR_PIN0_Pos (0UL) /*!< Position of PIN0 field. */
#define GPIO_OUTCLR_PIN0_Msk (0x1UL << GPIO_OUTCLR_PIN0_Pos) /*!< Bit mask of PIN0 field. */
#define GPIO_OUTCLR_PIN0_Low (0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN0_High (1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN0_Clear (1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Register: GPIO_IN */
/* Description: Read GPIO port */

/* Bit 3 : P0.3 pin */
#define GPIO_IN_PIN3_Pos (3UL) /*!< Position of PIN3 field. */
#define GPIO_IN_PIN3_Msk (0x1UL << GPIO_IN_PIN3_Pos) /*!< Bit mask of PIN3 field. */
#define GPIO_IN_PIN3_Low (0UL) /*!< Pin input is low */
#define GPIO_IN_PIN3_High (1UL) /*!< Pin input is high */

/* Bit 2 : P0.2 pin */
#define GPIO_IN_PIN2_Pos (2UL) /*!< Position of PIN2 field. */
#define GPIO_IN_PIN2_Msk (0x1UL << GPIO_IN_PIN2_Pos) /*!< Bit mask of PIN2 field. */
#define GPIO_IN_PIN2_Low (0UL) /*!< Pin input is low */
#define GPIO_IN_PIN2_High (1UL) /*!< Pin input is high */

/* Bit 1 : P0.1 pin */
#define GPIO_IN_PIN1_Pos (1UL) /*!< Position of PIN1 field. */
#define GPIO_IN_PIN1_Msk (0x1UL << GPIO_IN_PIN1_Pos) /*!< Bit mask of PIN1 field. */
#define GPIO_IN_PIN1_Low (0UL) /*!< Pin input is low */
#define GPIO_IN_PIN1_High (1UL) /*!< Pin input is high */

/* Bit 0 : P0.0 pin */
#define GPIO_IN_PIN0_Pos (0UL) /*!< Position of PIN0 field. */
#define GPIO_IN_PIN0_Msk (0x1UL << GPIO_IN_PIN0_Pos) /*!< Bit mask of PIN0 field. */
#define GPIO_IN_PIN0_Low (0UL) /*!< Pin input is low */
#define GPIO_IN_PIN0_High (1UL) /*!< Pin input is high */

/* Register: GPIO_DIR */
/* Description: Direction of GPIO pins */

/* Bit 3 : P0.3 pin */
#define GPIO_DIR_PIN3_Pos (3UL) /*!< Position of PIN3 field. */
#define GPIO_DIR_PIN3_Msk (0x1UL << GPIO_DIR_PIN3_Pos) /*!< Bit mask of PIN3 field. */
#define GPIO_DIR_PIN3_Input (0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN3_Output (1UL) /*!< Pin set as output */

/* Bit 2 : P0.2 pin */
#define GPIO_DIR_PIN2_Pos (2UL) /*!< Position of PIN2 field. */
#define GPIO_DIR_PIN2_Msk (0x1UL << GPIO_DIR_PIN2_Pos) /*!< Bit mask of PIN2 field. */
#define GPIO_DIR_PIN2_Input (0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN2_Output (1UL) /*!< Pin set as output */

/* Bit 1 : P0.1 pin */
#define GPIO_DIR_PIN1_Pos (1UL) /*!< Position of PIN1 field. */
#define GPIO_DIR_PIN1_Msk (0x1UL << GPIO_DIR_PIN1_Pos) /*!< Bit mask of PIN1 field. */
#define GPIO_DIR_PIN1_Input (0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN1_Output (1UL) /*!< Pin set as output */

/* Bit 0 : P0.0 pin */
#define GPIO_DIR_PIN0_Pos (0UL) /*!< Position of PIN0 field. */
#define GPIO_DIR_PIN0_Msk (0x1UL << GPIO_DIR_PIN0_Pos) /*!< Bit mask of PIN0 field. */
#define GPIO_DIR_PIN0_Input (0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN0_Output (1UL) /*!< Pin set as output */

/* Register: GPIO_DIRSET */
/* Description: DIR set register */

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


/* Peripheral: RCOSC32K */
/* Description: 32.768 kHz RC oscillator */

/* Register: RCOSC32K_TASKS_CAL */
/* Description: Start calibration of LFRC or LFULP oscillator */

/* Bit 0 : Start calibration of LFRC or LFULP oscillator */
#define RCOSC32K_TASKS_CAL_TASKS_CAL_Pos (0UL) /*!< Position of TASKS_CAL field. */
#define RCOSC32K_TASKS_CAL_TASKS_CAL_Msk (0x1UL << RCOSC32K_TASKS_CAL_TASKS_CAL_Pos) /*!< Bit mask of TASKS_CAL field. */
#define RCOSC32K_TASKS_CAL_TASKS_CAL_Trigger (1UL) /*!< Trigger task */

/* Register: RCOSC32K_TASKS_CTSTART */
/* Description: Start calibration timer */

/* Bit 0 : Start calibration timer */
#define RCOSC32K_TASKS_CTSTART_TASKS_CTSTART_Pos (0UL) /*!< Position of TASKS_CTSTART field. */
#define RCOSC32K_TASKS_CTSTART_TASKS_CTSTART_Msk (0x1UL << RCOSC32K_TASKS_CTSTART_TASKS_CTSTART_Pos) /*!< Bit mask of TASKS_CTSTART field. */
#define RCOSC32K_TASKS_CTSTART_TASKS_CTSTART_Trigger (1UL) /*!< Trigger task */

/* Register: RCOSC32K_TASKS_CTSTOP */
/* Description: Stop calibration timer */

/* Bit 0 : Stop calibration timer */
#define RCOSC32K_TASKS_CTSTOP_TASKS_CTSTOP_Pos (0UL) /*!< Position of TASKS_CTSTOP field. */
#define RCOSC32K_TASKS_CTSTOP_TASKS_CTSTOP_Msk (0x1UL << RCOSC32K_TASKS_CTSTOP_TASKS_CTSTOP_Pos) /*!< Bit mask of TASKS_CTSTOP field. */
#define RCOSC32K_TASKS_CTSTOP_TASKS_CTSTOP_Trigger (1UL) /*!< Trigger task */

/* Register: RCOSC32K_EVENTS_DONE */
/* Description: Calibration of LFCLK RC oscillator complete event */

/* Bit 0 : Calibration of LFCLK RC oscillator complete event */
#define RCOSC32K_EVENTS_DONE_EVENTS_DONE_Pos (0UL) /*!< Position of EVENTS_DONE field. */
#define RCOSC32K_EVENTS_DONE_EVENTS_DONE_Msk (0x1UL << RCOSC32K_EVENTS_DONE_EVENTS_DONE_Pos) /*!< Bit mask of EVENTS_DONE field. */
#define RCOSC32K_EVENTS_DONE_EVENTS_DONE_NotGenerated (0UL) /*!< Event not generated */
#define RCOSC32K_EVENTS_DONE_EVENTS_DONE_Generated (1UL) /*!< Event generated */

/* Register: RCOSC32K_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 3 : Enable or disable interrupt for event DONE */
#define RCOSC32K_INTEN_DONE_Pos (3UL) /*!< Position of DONE field. */
#define RCOSC32K_INTEN_DONE_Msk (0x1UL << RCOSC32K_INTEN_DONE_Pos) /*!< Bit mask of DONE field. */
#define RCOSC32K_INTEN_DONE_Disabled (0UL) /*!< Disable */
#define RCOSC32K_INTEN_DONE_Enabled (1UL) /*!< Enable */

/* Register: RCOSC32K_INTENSET */
/* Description: Enable interrupt */

/* Bit 3 : Write '1' to enable interrupt for event DONE */
#define RCOSC32K_INTENSET_DONE_Pos (3UL) /*!< Position of DONE field. */
#define RCOSC32K_INTENSET_DONE_Msk (0x1UL << RCOSC32K_INTENSET_DONE_Pos) /*!< Bit mask of DONE field. */
#define RCOSC32K_INTENSET_DONE_Disabled (0UL) /*!< Read: Disabled */
#define RCOSC32K_INTENSET_DONE_Enabled (1UL) /*!< Read: Enabled */
#define RCOSC32K_INTENSET_DONE_Set (1UL) /*!< Enable */

/* Register: RCOSC32K_INTENCLR */
/* Description: Disable interrupt */

/* Bit 3 : Write '1' to disable interrupt for event DONE */
#define RCOSC32K_INTENCLR_DONE_Pos (3UL) /*!< Position of DONE field. */
#define RCOSC32K_INTENCLR_DONE_Msk (0x1UL << RCOSC32K_INTENCLR_DONE_Pos) /*!< Bit mask of DONE field. */
#define RCOSC32K_INTENCLR_DONE_Disabled (0UL) /*!< Read: Disabled */
#define RCOSC32K_INTENCLR_DONE_Enabled (1UL) /*!< Read: Enabled */
#define RCOSC32K_INTENCLR_DONE_Clear (1UL) /*!< Disable */

/* Register: RCOSC32K_INTPEND */
/* Description: Pending interrupts */

/* Bit 3 : Read pending status of interrupt for event DONE */
#define RCOSC32K_INTPEND_DONE_Pos (3UL) /*!< Position of DONE field. */
#define RCOSC32K_INTPEND_DONE_Msk (0x1UL << RCOSC32K_INTPEND_DONE_Pos) /*!< Bit mask of DONE field. */
#define RCOSC32K_INTPEND_DONE_NotPending (0UL) /*!< Read: Not pending */
#define RCOSC32K_INTPEND_DONE_Pending (1UL) /*!< Read: Pending */

/* Register: RCOSC32K_RCOSC32KIFINE */
/* Description: Fine calibration read value for 32.768 kHz RC oscillator (retained register, same reset behaviour as RESETREAS) */

/* Bits 9..0 : Fine calibration read value for 32.768 kHz RC oscillator */
#define RCOSC32K_RCOSC32KIFINE_RCOSC32KIFINE_Pos (0UL) /*!< Position of RCOSC32KIFINE field. */
#define RCOSC32K_RCOSC32KIFINE_RCOSC32KIFINE_Msk (0x3FFUL << RCOSC32K_RCOSC32KIFINE_RCOSC32KIFINE_Pos) /*!< Bit mask of RCOSC32KIFINE field. */

/* Register: RCOSC32K_RCOSC32KICOARSE */
/* Description: Coarse calibration read value for 32.768 kHz RC oscillator (Retained register, same reset behaviour as RESETREAS) */

/* Bits 5..0 : Coarse calibration read value for 32.768 kHz RC oscillator */
#define RCOSC32K_RCOSC32KICOARSE_RCOSC32KICOARSE_Pos (0UL) /*!< Position of RCOSC32KICOARSE field. */
#define RCOSC32K_RCOSC32KICOARSE_RCOSC32KICOARSE_Msk (0x3FUL << RCOSC32K_RCOSC32KICOARSE_RCOSC32KICOARSE_Pos) /*!< Bit mask of RCOSC32KICOARSE field. */

/* Register: RCOSC32K_RCOSC32KICALTEST */
/* Description: 32.768 kHz RC oscillator calibration debug register (retained register, same reset behaviour as RESETREAS) */

/* Bit 1 : Disable calSync auto-calibration */
#define RCOSC32K_RCOSC32KICALTEST_CALSYNCDISABLE_Pos (1UL) /*!< Position of CALSYNCDISABLE field. */
#define RCOSC32K_RCOSC32KICALTEST_CALSYNCDISABLE_Msk (0x1UL << RCOSC32K_RCOSC32KICALTEST_CALSYNCDISABLE_Pos) /*!< Bit mask of CALSYNCDISABLE field. */
#define RCOSC32K_RCOSC32KICALTEST_CALSYNCDISABLE_Enabled (0UL) /*!< calSync auto-calibration enabled */
#define RCOSC32K_RCOSC32KICALTEST_CALSYNCDISABLE_Disabled (1UL) /*!< calSync auto-calibration disabled */

/* Bit 0 : Enable debug pins: calSync on P0.8 (input); ck32Ki on P0.13 (output); rcosc32KiCalib on P0.19 (output) */
#define RCOSC32K_RCOSC32KICALTEST_DEBUGPINSEN_Pos (0UL) /*!< Position of DEBUGPINSEN field. */
#define RCOSC32K_RCOSC32KICALTEST_DEBUGPINSEN_Msk (0x1UL << RCOSC32K_RCOSC32KICALTEST_DEBUGPINSEN_Pos) /*!< Bit mask of DEBUGPINSEN field. */
#define RCOSC32K_RCOSC32KICALTEST_DEBUGPINSEN_Disabled (0UL) /*!< Pins in normal operation */
#define RCOSC32K_RCOSC32KICALTEST_DEBUGPINSEN_Enabled (1UL) /*!< Pins mapped for debug */

/* Register: RCOSC32K_CTIV */
/* Description: Calibration timer interval (retained register, same reset behaviour as RESETREAS) */

/* Bits 6..0 : Calibration timer interval in multiple of 0.25 seconds. Range: 0.25 seconds to 31.75 seconds. */
#define RCOSC32K_CTIV_CTIV_Pos (0UL) /*!< Position of CTIV field. */
#define RCOSC32K_CTIV_CTIV_Msk (0x7FUL << RCOSC32K_CTIV_CTIV_Pos) /*!< Bit mask of CTIV field. */

/* Register: RCOSC32K_RCOSC32KICALLENGTH */
/* Description: 32kHz RC oscillator calibration length (retained register, same reset behaviour as RESETREAS) */

/* Bits 2..0 : 32kHz RC oscillator calibration length in number of cycles */
#define RCOSC32K_RCOSC32KICALLENGTH_RCOSC32KICALLENGTH_Pos (0UL) /*!< Position of RCOSC32KICALLENGTH field. */
#define RCOSC32K_RCOSC32KICALLENGTH_RCOSC32KICALLENGTH_Msk (0x7UL << RCOSC32K_RCOSC32KICALLENGTH_RCOSC32KICALLENGTH_Pos) /*!< Bit mask of RCOSC32KICALLENGTH field. */
#define RCOSC32K_RCOSC32KICALLENGTH_RCOSC32KICALLENGTH_N64 (0UL) /*!< 64 cycles */
#define RCOSC32K_RCOSC32KICALLENGTH_RCOSC32KICALLENGTH_N128 (1UL) /*!< 128 cycles */
#define RCOSC32K_RCOSC32KICALLENGTH_RCOSC32KICALLENGTH_N256 (2UL) /*!< 256 cycles */
#define RCOSC32K_RCOSC32KICALLENGTH_RCOSC32KICALLENGTH_N512 (3UL) /*!< 512 cycles */

/* Register: RCOSC32K_RCOSC32KICOARSEIN */
/* Description: RCOSC coarse calibration input (retained register, same reset behaviour as RESETREAS) */

/* Bits 5..0 : RCOSC coarse calibration input */
#define RCOSC32K_RCOSC32KICOARSEIN_RCOSC32KICOARSEIN_Pos (0UL) /*!< Position of RCOSC32KICOARSEIN field. */
#define RCOSC32K_RCOSC32KICOARSEIN_RCOSC32KICOARSEIN_Msk (0x3FUL << RCOSC32K_RCOSC32KICOARSEIN_RCOSC32KICOARSEIN_Pos) /*!< Bit mask of RCOSC32KICOARSEIN field. */

/* Register: RCOSC32K_RCOSC32KICIRC */
/* Description: Rotating current source for for 32.768 kHz RC oscillator (retained register, same reset behaviour as RESETREAS) */

/* Bit 0 : Enable or disable use of external rotating current source for 32.768 kHz RC oscillator */
#define RCOSC32K_RCOSC32KICIRC_RCS_Pos (0UL) /*!< Position of RCS field. */
#define RCOSC32K_RCOSC32KICIRC_RCS_Msk (0x1UL << RCOSC32K_RCOSC32KICIRC_RCS_Pos) /*!< Bit mask of RCS field. */
#define RCOSC32K_RCOSC32KICIRC_RCS_Disabled (0UL) /*!< Disable */
#define RCOSC32K_RCOSC32KICIRC_RCS_Enabled (1UL) /*!< Enable */

/* Register: RCOSC32K_ATECLOCK */
/* Description: Analog test bus control for clock modules */

/* Bit 0 : Connect or disconnect 32.768 kHz RC oscillator to analog test bus */
#define RCOSC32K_ATECLOCK_RCOSC32K_Pos (0UL) /*!< Position of RCOSC32K field. */
#define RCOSC32K_ATECLOCK_RCOSC32K_Msk (0x1UL << RCOSC32K_ATECLOCK_RCOSC32K_Pos) /*!< Bit mask of RCOSC32K field. */
#define RCOSC32K_ATECLOCK_RCOSC32K_Disconnected (0UL) /*!< Disconnect */
#define RCOSC32K_ATECLOCK_RCOSC32K_Connected (1UL) /*!< Connect internal regulator output to ATB0 */

/* Register: RCOSC32K_LFULP32KICIRC */
/* Description: Rotating current source for 32.768 kHz ULP RC oscillator */

/* Bit 0 : Enable or disable use of external rotating current source for 32.768 kHz ULP RC oscillator */
#define RCOSC32K_LFULP32KICIRC_RCS_Pos (0UL) /*!< Position of RCS field. */
#define RCOSC32K_LFULP32KICIRC_RCS_Msk (0x1UL << RCOSC32K_LFULP32KICIRC_RCS_Pos) /*!< Bit mask of RCS field. */
#define RCOSC32K_LFULP32KICIRC_RCS_Disabled (0UL) /*!< Disable */
#define RCOSC32K_LFULP32KICIRC_RCS_Enabled (1UL) /*!< Enable */

/* Register: RCOSC32K_LFULP32KICALLENGTH */
/* Description: 32kHz LFULP RC oscillator calibration length */

/* Bits 2..0 : 32kHz ULP RC oscillator calibration length in number of cycles */
#define RCOSC32K_LFULP32KICALLENGTH_LFULP32KICALLENGTH_Pos (0UL) /*!< Position of LFULP32KICALLENGTH field. */
#define RCOSC32K_LFULP32KICALLENGTH_LFULP32KICALLENGTH_Msk (0x7UL << RCOSC32K_LFULP32KICALLENGTH_LFULP32KICALLENGTH_Pos) /*!< Bit mask of LFULP32KICALLENGTH field. */
#define RCOSC32K_LFULP32KICALLENGTH_LFULP32KICALLENGTH_N64 (0UL) /*!< 64 cycles */
#define RCOSC32K_LFULP32KICALLENGTH_LFULP32KICALLENGTH_N128 (1UL) /*!< 128 cycles */
#define RCOSC32K_LFULP32KICALLENGTH_LFULP32KICALLENGTH_N256 (2UL) /*!< 256 cycles */
#define RCOSC32K_LFULP32KICALLENGTH_LFULP32KICALLENGTH_N512 (3UL) /*!< 512 cycles */

/* Register: RCOSC32K_LFULP32KICOARSE */
/* Description: Coarse calibration read value for 32.768 kHz ULP RC oscillator */

/* Bits 5..0 : Coarse calibration read value for 32.768 kHz ULP RC oscillator */
#define RCOSC32K_LFULP32KICOARSE_LFULP32KICOARSE_Pos (0UL) /*!< Position of LFULP32KICOARSE field. */
#define RCOSC32K_LFULP32KICOARSE_LFULP32KICOARSE_Msk (0x3FUL << RCOSC32K_LFULP32KICOARSE_LFULP32KICOARSE_Pos) /*!< Bit mask of LFULP32KICOARSE field. */


/* Peripheral: RNG */
/* Description: Random Number Generator */

/* Register: RNG_TASKS_START */
/* Description: Task starting the random number generator */

/* Bit 0 : Task starting the random number generator */
#define RNG_TASKS_START_TASKS_START_Pos (0UL) /*!< Position of TASKS_START field. */
#define RNG_TASKS_START_TASKS_START_Msk (0x1UL << RNG_TASKS_START_TASKS_START_Pos) /*!< Bit mask of TASKS_START field. */
#define RNG_TASKS_START_TASKS_START_Trigger (1UL) /*!< Trigger task */

/* Register: RNG_TASKS_STOP */
/* Description: Task stopping the random number generator */

/* Bit 0 : Task stopping the random number generator */
#define RNG_TASKS_STOP_TASKS_STOP_Pos (0UL) /*!< Position of TASKS_STOP field. */
#define RNG_TASKS_STOP_TASKS_STOP_Msk (0x1UL << RNG_TASKS_STOP_TASKS_STOP_Pos) /*!< Bit mask of TASKS_STOP field. */
#define RNG_TASKS_STOP_TASKS_STOP_Trigger (1UL) /*!< Trigger task */

/* Register: RNG_EVENTS_VALRDY */
/* Description: Event being generated for every new random number written to the VALUE register */

/* Bit 0 : Event being generated for every new random number written to the VALUE register */
#define RNG_EVENTS_VALRDY_EVENTS_VALRDY_Pos (0UL) /*!< Position of EVENTS_VALRDY field. */
#define RNG_EVENTS_VALRDY_EVENTS_VALRDY_Msk (0x1UL << RNG_EVENTS_VALRDY_EVENTS_VALRDY_Pos) /*!< Bit mask of EVENTS_VALRDY field. */
#define RNG_EVENTS_VALRDY_EVENTS_VALRDY_NotGenerated (0UL) /*!< Event not generated */
#define RNG_EVENTS_VALRDY_EVENTS_VALRDY_Generated (1UL) /*!< Event generated */

/* Register: RNG_SHORTS */
/* Description: Shortcuts between local events and tasks */

/* Bit 0 : Shortcut between event VALRDY and task STOP */
#define RNG_SHORTS_VALRDY_STOP_Pos (0UL) /*!< Position of VALRDY_STOP field. */
#define RNG_SHORTS_VALRDY_STOP_Msk (0x1UL << RNG_SHORTS_VALRDY_STOP_Pos) /*!< Bit mask of VALRDY_STOP field. */
#define RNG_SHORTS_VALRDY_STOP_Disabled (0UL) /*!< Disable shortcut */
#define RNG_SHORTS_VALRDY_STOP_Enabled (1UL) /*!< Enable shortcut */

/* Register: RNG_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 0 : Enable or disable interrupt for event VALRDY */
#define RNG_INTEN_VALRDY_Pos (0UL) /*!< Position of VALRDY field. */
#define RNG_INTEN_VALRDY_Msk (0x1UL << RNG_INTEN_VALRDY_Pos) /*!< Bit mask of VALRDY field. */
#define RNG_INTEN_VALRDY_Disabled (0UL) /*!< Disable */
#define RNG_INTEN_VALRDY_Enabled (1UL) /*!< Enable */

/* Register: RNG_INTENSET */
/* Description: Enable interrupt */

/* Bit 0 : Write '1' to enable interrupt for event VALRDY */
#define RNG_INTENSET_VALRDY_Pos (0UL) /*!< Position of VALRDY field. */
#define RNG_INTENSET_VALRDY_Msk (0x1UL << RNG_INTENSET_VALRDY_Pos) /*!< Bit mask of VALRDY field. */
#define RNG_INTENSET_VALRDY_Disabled (0UL) /*!< Read: Disabled */
#define RNG_INTENSET_VALRDY_Enabled (1UL) /*!< Read: Enabled */
#define RNG_INTENSET_VALRDY_Set (1UL) /*!< Enable */

/* Register: RNG_INTENCLR */
/* Description: Disable interrupt */

/* Bit 0 : Write '1' to disable interrupt for event VALRDY */
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
/* Description: Real time counter */

/* Register: RTC_TASKS_START */
/* Description: Start RTC COUNTER */

/* Bit 0 : Start RTC COUNTER */
#define RTC_TASKS_START_TASKS_START_Pos (0UL) /*!< Position of TASKS_START field. */
#define RTC_TASKS_START_TASKS_START_Msk (0x1UL << RTC_TASKS_START_TASKS_START_Pos) /*!< Bit mask of TASKS_START field. */
#define RTC_TASKS_START_TASKS_START_Trigger (1UL) /*!< Trigger task */

/* Register: RTC_TASKS_STOP */
/* Description: Stop RTC COUNTER */

/* Bit 0 : Stop RTC COUNTER */
#define RTC_TASKS_STOP_TASKS_STOP_Pos (0UL) /*!< Position of TASKS_STOP field. */
#define RTC_TASKS_STOP_TASKS_STOP_Msk (0x1UL << RTC_TASKS_STOP_TASKS_STOP_Pos) /*!< Bit mask of TASKS_STOP field. */
#define RTC_TASKS_STOP_TASKS_STOP_Trigger (1UL) /*!< Trigger task */

/* Register: RTC_TASKS_CLEAR */
/* Description: Clear RTC COUNTER */

/* Bit 0 : Clear RTC COUNTER */
#define RTC_TASKS_CLEAR_TASKS_CLEAR_Pos (0UL) /*!< Position of TASKS_CLEAR field. */
#define RTC_TASKS_CLEAR_TASKS_CLEAR_Msk (0x1UL << RTC_TASKS_CLEAR_TASKS_CLEAR_Pos) /*!< Bit mask of TASKS_CLEAR field. */
#define RTC_TASKS_CLEAR_TASKS_CLEAR_Trigger (1UL) /*!< Trigger task */

/* Register: RTC_TASKS_TRIGOVRFLW */
/* Description: Set COUNTER to 0xFFFFF0 */

/* Bit 0 : Set COUNTER to 0xFFFFF0 */
#define RTC_TASKS_TRIGOVRFLW_TASKS_TRIGOVRFLW_Pos (0UL) /*!< Position of TASKS_TRIGOVRFLW field. */
#define RTC_TASKS_TRIGOVRFLW_TASKS_TRIGOVRFLW_Msk (0x1UL << RTC_TASKS_TRIGOVRFLW_TASKS_TRIGOVRFLW_Pos) /*!< Bit mask of TASKS_TRIGOVRFLW field. */
#define RTC_TASKS_TRIGOVRFLW_TASKS_TRIGOVRFLW_Trigger (1UL) /*!< Trigger task */

/* Register: RTC_SUBSCRIBE_START */
/* Description: Subscribe configuration for TASKS_START */

/* Bit 31 : Channel the TASKS_START will subscribe to. */
#define RTC_SUBSCRIBE_START_EN_Pos (31UL) /*!< Position of EN field. */
#define RTC_SUBSCRIBE_START_EN_Msk (0x1UL << RTC_SUBSCRIBE_START_EN_Pos) /*!< Bit mask of EN field. */
#define RTC_SUBSCRIBE_START_EN_Disabled (0UL) /*!< Disable subscription */
#define RTC_SUBSCRIBE_START_EN_Enabled (1UL) /*!< Enable subscription */

/* Bits 4..0 : Channel the TASKS_START will subscribe to. */
#define RTC_SUBSCRIBE_START_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RTC_SUBSCRIBE_START_CHIDX_Msk (0x1FUL << RTC_SUBSCRIBE_START_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RTC_SUBSCRIBE_STOP */
/* Description: Subscribe configuration for TASKS_STOP */

/* Bit 31 : Channel the TASKS_STOP will subscribe to. */
#define RTC_SUBSCRIBE_STOP_EN_Pos (31UL) /*!< Position of EN field. */
#define RTC_SUBSCRIBE_STOP_EN_Msk (0x1UL << RTC_SUBSCRIBE_STOP_EN_Pos) /*!< Bit mask of EN field. */
#define RTC_SUBSCRIBE_STOP_EN_Disabled (0UL) /*!< Disable subscription */
#define RTC_SUBSCRIBE_STOP_EN_Enabled (1UL) /*!< Enable subscription */

/* Bits 4..0 : Channel the TASKS_STOP will subscribe to. */
#define RTC_SUBSCRIBE_STOP_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RTC_SUBSCRIBE_STOP_CHIDX_Msk (0x1FUL << RTC_SUBSCRIBE_STOP_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RTC_SUBSCRIBE_CLEAR */
/* Description: Subscribe configuration for TASKS_CLEAR */

/* Bit 31 : Channel the TASKS_CLEAR will subscribe to. */
#define RTC_SUBSCRIBE_CLEAR_EN_Pos (31UL) /*!< Position of EN field. */
#define RTC_SUBSCRIBE_CLEAR_EN_Msk (0x1UL << RTC_SUBSCRIBE_CLEAR_EN_Pos) /*!< Bit mask of EN field. */
#define RTC_SUBSCRIBE_CLEAR_EN_Disabled (0UL) /*!< Disable subscription */
#define RTC_SUBSCRIBE_CLEAR_EN_Enabled (1UL) /*!< Enable subscription */

/* Bits 4..0 : Channel the TASKS_CLEAR will subscribe to. */
#define RTC_SUBSCRIBE_CLEAR_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RTC_SUBSCRIBE_CLEAR_CHIDX_Msk (0x1FUL << RTC_SUBSCRIBE_CLEAR_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RTC_SUBSCRIBE_TRIGOVRFLW */
/* Description: Subscribe configuration for TASKS_TRIGOVRFLW */

/* Bit 31 : Channel the TASKS_TRIGOVRFLW will subscribe to. */
#define RTC_SUBSCRIBE_TRIGOVRFLW_EN_Pos (31UL) /*!< Position of EN field. */
#define RTC_SUBSCRIBE_TRIGOVRFLW_EN_Msk (0x1UL << RTC_SUBSCRIBE_TRIGOVRFLW_EN_Pos) /*!< Bit mask of EN field. */
#define RTC_SUBSCRIBE_TRIGOVRFLW_EN_Disabled (0UL) /*!< Disable subscription */
#define RTC_SUBSCRIBE_TRIGOVRFLW_EN_Enabled (1UL) /*!< Enable subscription */

/* Bits 4..0 : Channel the TASKS_TRIGOVRFLW will subscribe to. */
#define RTC_SUBSCRIBE_TRIGOVRFLW_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RTC_SUBSCRIBE_TRIGOVRFLW_CHIDX_Msk (0x1FUL << RTC_SUBSCRIBE_TRIGOVRFLW_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RTC_EVENTS_TICK */
/* Description: Event on COUNTER increment */

/* Bit 0 : Event on COUNTER increment */
#define RTC_EVENTS_TICK_EVENTS_TICK_Pos (0UL) /*!< Position of EVENTS_TICK field. */
#define RTC_EVENTS_TICK_EVENTS_TICK_Msk (0x1UL << RTC_EVENTS_TICK_EVENTS_TICK_Pos) /*!< Bit mask of EVENTS_TICK field. */
#define RTC_EVENTS_TICK_EVENTS_TICK_NotGenerated (0UL) /*!< Event not generated */
#define RTC_EVENTS_TICK_EVENTS_TICK_Generated (1UL) /*!< Event generated */

/* Register: RTC_EVENTS_OVRFLW */
/* Description: Event on COUNTER overflow */

/* Bit 0 : Event on COUNTER overflow */
#define RTC_EVENTS_OVRFLW_EVENTS_OVRFLW_Pos (0UL) /*!< Position of EVENTS_OVRFLW field. */
#define RTC_EVENTS_OVRFLW_EVENTS_OVRFLW_Msk (0x1UL << RTC_EVENTS_OVRFLW_EVENTS_OVRFLW_Pos) /*!< Bit mask of EVENTS_OVRFLW field. */
#define RTC_EVENTS_OVRFLW_EVENTS_OVRFLW_NotGenerated (0UL) /*!< Event not generated */
#define RTC_EVENTS_OVRFLW_EVENTS_OVRFLW_Generated (1UL) /*!< Event generated */

/* Register: RTC_EVENTS_COMPARE */
/* Description: Description collection: Compare event on CC[n] match */

/* Bit 0 : Compare event on CC[n] match */
#define RTC_EVENTS_COMPARE_EVENTS_COMPARE_Pos (0UL) /*!< Position of EVENTS_COMPARE field. */
#define RTC_EVENTS_COMPARE_EVENTS_COMPARE_Msk (0x1UL << RTC_EVENTS_COMPARE_EVENTS_COMPARE_Pos) /*!< Bit mask of EVENTS_COMPARE field. */
#define RTC_EVENTS_COMPARE_EVENTS_COMPARE_NotGenerated (0UL) /*!< Event not generated */
#define RTC_EVENTS_COMPARE_EVENTS_COMPARE_Generated (1UL) /*!< Event generated */

/* Register: RTC_PUBLISH_TICK */
/* Description: Publish configuration for EVENTS_TICK */

/* Bit 31 : Channel the EVENTS_TICK will subscribe to. */
#define RTC_PUBLISH_TICK_EN_Pos (31UL) /*!< Position of EN field. */
#define RTC_PUBLISH_TICK_EN_Msk (0x1UL << RTC_PUBLISH_TICK_EN_Pos) /*!< Bit mask of EN field. */
#define RTC_PUBLISH_TICK_EN_Disabled (0UL) /*!< Disable subscription */
#define RTC_PUBLISH_TICK_EN_Enabled (1UL) /*!< Enable subscription */

/* Bits 4..0 : Channel the EVENTS_TICK will subscribe to. */
#define RTC_PUBLISH_TICK_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RTC_PUBLISH_TICK_CHIDX_Msk (0x1FUL << RTC_PUBLISH_TICK_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RTC_PUBLISH_OVRFLW */
/* Description: Publish configuration for EVENTS_OVRFLW */

/* Bit 31 : Channel the EVENTS_OVRFLW will subscribe to. */
#define RTC_PUBLISH_OVRFLW_EN_Pos (31UL) /*!< Position of EN field. */
#define RTC_PUBLISH_OVRFLW_EN_Msk (0x1UL << RTC_PUBLISH_OVRFLW_EN_Pos) /*!< Bit mask of EN field. */
#define RTC_PUBLISH_OVRFLW_EN_Disabled (0UL) /*!< Disable subscription */
#define RTC_PUBLISH_OVRFLW_EN_Enabled (1UL) /*!< Enable subscription */

/* Bits 4..0 : Channel the EVENTS_OVRFLW will subscribe to. */
#define RTC_PUBLISH_OVRFLW_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RTC_PUBLISH_OVRFLW_CHIDX_Msk (0x1FUL << RTC_PUBLISH_OVRFLW_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RTC_PUBLISH_COMPARE */
/* Description: Description collection: Publish configuration for EVENTS_COMPARE */

/* Bit 31 : Channel the EVENTS_COMPARE[n] will subscribe to. */
#define RTC_PUBLISH_COMPARE_EN_Pos (31UL) /*!< Position of EN field. */
#define RTC_PUBLISH_COMPARE_EN_Msk (0x1UL << RTC_PUBLISH_COMPARE_EN_Pos) /*!< Bit mask of EN field. */
#define RTC_PUBLISH_COMPARE_EN_Disabled (0UL) /*!< Disable subscription */
#define RTC_PUBLISH_COMPARE_EN_Enabled (1UL) /*!< Enable subscription */

/* Bits 4..0 : Channel the EVENTS_COMPARE[n] will subscribe to. */
#define RTC_PUBLISH_COMPARE_CHIDX_Pos (0UL) /*!< Position of CHIDX field. */
#define RTC_PUBLISH_COMPARE_CHIDX_Msk (0x1FUL << RTC_PUBLISH_COMPARE_CHIDX_Pos) /*!< Bit mask of CHIDX field. */

/* Register: RTC_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 19 : Enable or disable interrupt for event COMPARE[3] */
#define RTC_INTEN_COMPARE3_Pos (19UL) /*!< Position of COMPARE3 field. */
#define RTC_INTEN_COMPARE3_Msk (0x1UL << RTC_INTEN_COMPARE3_Pos) /*!< Bit mask of COMPARE3 field. */
#define RTC_INTEN_COMPARE3_Disabled (0UL) /*!< Disable */
#define RTC_INTEN_COMPARE3_Enabled (1UL) /*!< Enable */

/* Bit 18 : Enable or disable interrupt for event COMPARE[2] */
#define RTC_INTEN_COMPARE2_Pos (18UL) /*!< Position of COMPARE2 field. */
#define RTC_INTEN_COMPARE2_Msk (0x1UL << RTC_INTEN_COMPARE2_Pos) /*!< Bit mask of COMPARE2 field. */
#define RTC_INTEN_COMPARE2_Disabled (0UL) /*!< Disable */
#define RTC_INTEN_COMPARE2_Enabled (1UL) /*!< Enable */

/* Bit 17 : Enable or disable interrupt for event COMPARE[1] */
#define RTC_INTEN_COMPARE1_Pos (17UL) /*!< Position of COMPARE1 field. */
#define RTC_INTEN_COMPARE1_Msk (0x1UL << RTC_INTEN_COMPARE1_Pos) /*!< Bit mask of COMPARE1 field. */
#define RTC_INTEN_COMPARE1_Disabled (0UL) /*!< Disable */
#define RTC_INTEN_COMPARE1_Enabled (1UL) /*!< Enable */

/* Bit 16 : Enable or disable interrupt for event COMPARE[0] */
#define RTC_INTEN_COMPARE0_Pos (16UL) /*!< Position of COMPARE0 field. */
#define RTC_INTEN_COMPARE0_Msk (0x1UL << RTC_INTEN_COMPARE0_Pos) /*!< Bit mask of COMPARE0 field. */
#define RTC_INTEN_COMPARE0_Disabled (0UL) /*!< Disable */
#define RTC_INTEN_COMPARE0_Enabled (1UL) /*!< Enable */

/* Bit 1 : Enable or disable interrupt for event OVRFLW */
#define RTC_INTEN_OVRFLW_Pos (1UL) /*!< Position of OVRFLW field. */
#define RTC_INTEN_OVRFLW_Msk (0x1UL << RTC_INTEN_OVRFLW_Pos) /*!< Bit mask of OVRFLW field. */
#define RTC_INTEN_OVRFLW_Disabled (0UL) /*!< Disable */
#define RTC_INTEN_OVRFLW_Enabled (1UL) /*!< Enable */

/* Bit 0 : Enable or disable interrupt for event TICK */
#define RTC_INTEN_TICK_Pos (0UL) /*!< Position of TICK field. */
#define RTC_INTEN_TICK_Msk (0x1UL << RTC_INTEN_TICK_Pos) /*!< Bit mask of TICK field. */
#define RTC_INTEN_TICK_Disabled (0UL) /*!< Disable */
#define RTC_INTEN_TICK_Enabled (1UL) /*!< Enable */

/* Register: RTC_INTENSET */
/* Description: Enable interrupt */

/* Bit 19 : Write '1' to enable interrupt for event COMPARE[3] */
#define RTC_INTENSET_COMPARE3_Pos (19UL) /*!< Position of COMPARE3 field. */
#define RTC_INTENSET_COMPARE3_Msk (0x1UL << RTC_INTENSET_COMPARE3_Pos) /*!< Bit mask of COMPARE3 field. */
#define RTC_INTENSET_COMPARE3_Disabled (0UL) /*!< Read: Disabled */
#define RTC_INTENSET_COMPARE3_Enabled (1UL) /*!< Read: Enabled */
#define RTC_INTENSET_COMPARE3_Set (1UL) /*!< Enable */

/* Bit 18 : Write '1' to enable interrupt for event COMPARE[2] */
#define RTC_INTENSET_COMPARE2_Pos (18UL) /*!< Position of COMPARE2 field. */
#define RTC_INTENSET_COMPARE2_Msk (0x1UL << RTC_INTENSET_COMPARE2_Pos) /*!< Bit mask of COMPARE2 field. */
#define RTC_INTENSET_COMPARE2_Disabled (0UL) /*!< Read: Disabled */
#define RTC_INTENSET_COMPARE2_Enabled (1UL) /*!< Read: Enabled */
#define RTC_INTENSET_COMPARE2_Set (1UL) /*!< Enable */

/* Bit 17 : Write '1' to enable interrupt for event COMPARE[1] */
#define RTC_INTENSET_COMPARE1_Pos (17UL) /*!< Position of COMPARE1 field. */
#define RTC_INTENSET_COMPARE1_Msk (0x1UL << RTC_INTENSET_COMPARE1_Pos) /*!< Bit mask of COMPARE1 field. */
#define RTC_INTENSET_COMPARE1_Disabled (0UL) /*!< Read: Disabled */
#define RTC_INTENSET_COMPARE1_Enabled (1UL) /*!< Read: Enabled */
#define RTC_INTENSET_COMPARE1_Set (1UL) /*!< Enable */

/* Bit 16 : Write '1' to enable interrupt for event COMPARE[0] */
#define RTC_INTENSET_COMPARE0_Pos (16UL) /*!< Position of COMPARE0 field. */
#define RTC_INTENSET_COMPARE0_Msk (0x1UL << RTC_INTENSET_COMPARE0_Pos) /*!< Bit mask of COMPARE0 field. */
#define RTC_INTENSET_COMPARE0_Disabled (0UL) /*!< Read: Disabled */
#define RTC_INTENSET_COMPARE0_Enabled (1UL) /*!< Read: Enabled */
#define RTC_INTENSET_COMPARE0_Set (1UL) /*!< Enable */

/* Bit 1 : Write '1' to enable interrupt for event OVRFLW */
#define RTC_INTENSET_OVRFLW_Pos (1UL) /*!< Position of OVRFLW field. */
#define RTC_INTENSET_OVRFLW_Msk (0x1UL << RTC_INTENSET_OVRFLW_Pos) /*!< Bit mask of OVRFLW field. */
#define RTC_INTENSET_OVRFLW_Disabled (0UL) /*!< Read: Disabled */
#define RTC_INTENSET_OVRFLW_Enabled (1UL) /*!< Read: Enabled */
#define RTC_INTENSET_OVRFLW_Set (1UL) /*!< Enable */

/* Bit 0 : Write '1' to enable interrupt for event TICK */
#define RTC_INTENSET_TICK_Pos (0UL) /*!< Position of TICK field. */
#define RTC_INTENSET_TICK_Msk (0x1UL << RTC_INTENSET_TICK_Pos) /*!< Bit mask of TICK field. */
#define RTC_INTENSET_TICK_Disabled (0UL) /*!< Read: Disabled */
#define RTC_INTENSET_TICK_Enabled (1UL) /*!< Read: Enabled */
#define RTC_INTENSET_TICK_Set (1UL) /*!< Enable */

/* Register: RTC_INTENCLR */
/* Description: Disable interrupt */

/* Bit 19 : Write '1' to disable interrupt for event COMPARE[3] */
#define RTC_INTENCLR_COMPARE3_Pos (19UL) /*!< Position of COMPARE3 field. */
#define RTC_INTENCLR_COMPARE3_Msk (0x1UL << RTC_INTENCLR_COMPARE3_Pos) /*!< Bit mask of COMPARE3 field. */
#define RTC_INTENCLR_COMPARE3_Disabled (0UL) /*!< Read: Disabled */
#define RTC_INTENCLR_COMPARE3_Enabled (1UL) /*!< Read: Enabled */
#define RTC_INTENCLR_COMPARE3_Clear (1UL) /*!< Disable */

/* Bit 18 : Write '1' to disable interrupt for event COMPARE[2] */
#define RTC_INTENCLR_COMPARE2_Pos (18UL) /*!< Position of COMPARE2 field. */
#define RTC_INTENCLR_COMPARE2_Msk (0x1UL << RTC_INTENCLR_COMPARE2_Pos) /*!< Bit mask of COMPARE2 field. */
#define RTC_INTENCLR_COMPARE2_Disabled (0UL) /*!< Read: Disabled */
#define RTC_INTENCLR_COMPARE2_Enabled (1UL) /*!< Read: Enabled */
#define RTC_INTENCLR_COMPARE2_Clear (1UL) /*!< Disable */

/* Bit 17 : Write '1' to disable interrupt for event COMPARE[1] */
#define RTC_INTENCLR_COMPARE1_Pos (17UL) /*!< Position of COMPARE1 field. */
#define RTC_INTENCLR_COMPARE1_Msk (0x1UL << RTC_INTENCLR_COMPARE1_Pos) /*!< Bit mask of COMPARE1 field. */
#define RTC_INTENCLR_COMPARE1_Disabled (0UL) /*!< Read: Disabled */
#define RTC_INTENCLR_COMPARE1_Enabled (1UL) /*!< Read: Enabled */
#define RTC_INTENCLR_COMPARE1_Clear (1UL) /*!< Disable */

/* Bit 16 : Write '1' to disable interrupt for event COMPARE[0] */
#define RTC_INTENCLR_COMPARE0_Pos (16UL) /*!< Position of COMPARE0 field. */
#define RTC_INTENCLR_COMPARE0_Msk (0x1UL << RTC_INTENCLR_COMPARE0_Pos) /*!< Bit mask of COMPARE0 field. */
#define RTC_INTENCLR_COMPARE0_Disabled (0UL) /*!< Read: Disabled */
#define RTC_INTENCLR_COMPARE0_Enabled (1UL) /*!< Read: Enabled */
#define RTC_INTENCLR_COMPARE0_Clear (1UL) /*!< Disable */

/* Bit 1 : Write '1' to disable interrupt for event OVRFLW */
#define RTC_INTENCLR_OVRFLW_Pos (1UL) /*!< Position of OVRFLW field. */
#define RTC_INTENCLR_OVRFLW_Msk (0x1UL << RTC_INTENCLR_OVRFLW_Pos) /*!< Bit mask of OVRFLW field. */
#define RTC_INTENCLR_OVRFLW_Disabled (0UL) /*!< Read: Disabled */
#define RTC_INTENCLR_OVRFLW_Enabled (1UL) /*!< Read: Enabled */
#define RTC_INTENCLR_OVRFLW_Clear (1UL) /*!< Disable */

/* Bit 0 : Write '1' to disable interrupt for event TICK */
#define RTC_INTENCLR_TICK_Pos (0UL) /*!< Position of TICK field. */
#define RTC_INTENCLR_TICK_Msk (0x1UL << RTC_INTENCLR_TICK_Pos) /*!< Bit mask of TICK field. */
#define RTC_INTENCLR_TICK_Disabled (0UL) /*!< Read: Disabled */
#define RTC_INTENCLR_TICK_Enabled (1UL) /*!< Read: Enabled */
#define RTC_INTENCLR_TICK_Clear (1UL) /*!< Disable */

/* Register: RTC_EVTEN */
/* Description: Enable or disable event routing */

/* Bit 19 : Enable or disable event routing for event COMPARE[3] */
#define RTC_EVTEN_COMPARE3_Pos (19UL) /*!< Position of COMPARE3 field. */
#define RTC_EVTEN_COMPARE3_Msk (0x1UL << RTC_EVTEN_COMPARE3_Pos) /*!< Bit mask of COMPARE3 field. */
#define RTC_EVTEN_COMPARE3_Disabled (0UL) /*!< Disable */
#define RTC_EVTEN_COMPARE3_Enabled (1UL) /*!< Disable */

/* Bit 18 : Enable or disable event routing for event COMPARE[2] */
#define RTC_EVTEN_COMPARE2_Pos (18UL) /*!< Position of COMPARE2 field. */
#define RTC_EVTEN_COMPARE2_Msk (0x1UL << RTC_EVTEN_COMPARE2_Pos) /*!< Bit mask of COMPARE2 field. */
#define RTC_EVTEN_COMPARE2_Disabled (0UL) /*!< Disable */
#define RTC_EVTEN_COMPARE2_Enabled (1UL) /*!< Disable */

/* Bit 17 : Enable or disable event routing for event COMPARE[1] */
#define RTC_EVTEN_COMPARE1_Pos (17UL) /*!< Position of COMPARE1 field. */
#define RTC_EVTEN_COMPARE1_Msk (0x1UL << RTC_EVTEN_COMPARE1_Pos) /*!< Bit mask of COMPARE1 field. */
#define RTC_EVTEN_COMPARE1_Disabled (0UL) /*!< Disable */
#define RTC_EVTEN_COMPARE1_Enabled (1UL) /*!< Disable */

/* Bit 16 : Enable or disable event routing for event COMPARE[0] */
#define RTC_EVTEN_COMPARE0_Pos (16UL) /*!< Position of COMPARE0 field. */
#define RTC_EVTEN_COMPARE0_Msk (0x1UL << RTC_EVTEN_COMPARE0_Pos) /*!< Bit mask of COMPARE0 field. */
#define RTC_EVTEN_COMPARE0_Disabled (0UL) /*!< Disable */
#define RTC_EVTEN_COMPARE0_Enabled (1UL) /*!< Disable */

/* Bit 1 : Enable or disable event routing for event OVRFLW */
#define RTC_EVTEN_OVRFLW_Pos (1UL) /*!< Position of OVRFLW field. */
#define RTC_EVTEN_OVRFLW_Msk (0x1UL << RTC_EVTEN_OVRFLW_Pos) /*!< Bit mask of OVRFLW field. */
#define RTC_EVTEN_OVRFLW_Disabled (0UL) /*!< Disable */
#define RTC_EVTEN_OVRFLW_Enabled (1UL) /*!< Disable */

/* Bit 0 : Enable or disable event routing for event TICK */
#define RTC_EVTEN_TICK_Pos (0UL) /*!< Position of TICK field. */
#define RTC_EVTEN_TICK_Msk (0x1UL << RTC_EVTEN_TICK_Pos) /*!< Bit mask of TICK field. */
#define RTC_EVTEN_TICK_Disabled (0UL) /*!< Disable */
#define RTC_EVTEN_TICK_Enabled (1UL) /*!< Disable */

/* Register: RTC_EVTENSET */
/* Description: Enable event routing */

/* Bit 19 : Write '1' to enable event routing for event COMPARE[3] */
#define RTC_EVTENSET_COMPARE3_Pos (19UL) /*!< Position of COMPARE3 field. */
#define RTC_EVTENSET_COMPARE3_Msk (0x1UL << RTC_EVTENSET_COMPARE3_Pos) /*!< Bit mask of COMPARE3 field. */
#define RTC_EVTENSET_COMPARE3_Disabled (0UL) /*!< Read: Disabled */
#define RTC_EVTENSET_COMPARE3_Enabled (1UL) /*!< Read: Enabled */
#define RTC_EVTENSET_COMPARE3_Set (1UL) /*!< Enable */

/* Bit 18 : Write '1' to enable event routing for event COMPARE[2] */
#define RTC_EVTENSET_COMPARE2_Pos (18UL) /*!< Position of COMPARE2 field. */
#define RTC_EVTENSET_COMPARE2_Msk (0x1UL << RTC_EVTENSET_COMPARE2_Pos) /*!< Bit mask of COMPARE2 field. */
#define RTC_EVTENSET_COMPARE2_Disabled (0UL) /*!< Read: Disabled */
#define RTC_EVTENSET_COMPARE2_Enabled (1UL) /*!< Read: Enabled */
#define RTC_EVTENSET_COMPARE2_Set (1UL) /*!< Enable */

/* Bit 17 : Write '1' to enable event routing for event COMPARE[1] */
#define RTC_EVTENSET_COMPARE1_Pos (17UL) /*!< Position of COMPARE1 field. */
#define RTC_EVTENSET_COMPARE1_Msk (0x1UL << RTC_EVTENSET_COMPARE1_Pos) /*!< Bit mask of COMPARE1 field. */
#define RTC_EVTENSET_COMPARE1_Disabled (0UL) /*!< Read: Disabled */
#define RTC_EVTENSET_COMPARE1_Enabled (1UL) /*!< Read: Enabled */
#define RTC_EVTENSET_COMPARE1_Set (1UL) /*!< Enable */

/* Bit 16 : Write '1' to enable event routing for event COMPARE[0] */
#define RTC_EVTENSET_COMPARE0_Pos (16UL) /*!< Position of COMPARE0 field. */
#define RTC_EVTENSET_COMPARE0_Msk (0x1UL << RTC_EVTENSET_COMPARE0_Pos) /*!< Bit mask of COMPARE0 field. */
#define RTC_EVTENSET_COMPARE0_Disabled (0UL) /*!< Read: Disabled */
#define RTC_EVTENSET_COMPARE0_Enabled (1UL) /*!< Read: Enabled */
#define RTC_EVTENSET_COMPARE0_Set (1UL) /*!< Enable */

/* Bit 1 : Write '1' to enable event routing for event OVRFLW */
#define RTC_EVTENSET_OVRFLW_Pos (1UL) /*!< Position of OVRFLW field. */
#define RTC_EVTENSET_OVRFLW_Msk (0x1UL << RTC_EVTENSET_OVRFLW_Pos) /*!< Bit mask of OVRFLW field. */
#define RTC_EVTENSET_OVRFLW_Disabled (0UL) /*!< Read: Disabled */
#define RTC_EVTENSET_OVRFLW_Enabled (1UL) /*!< Read: Enabled */
#define RTC_EVTENSET_OVRFLW_Set (1UL) /*!< Enable */

/* Bit 0 : Write '1' to enable event routing for event TICK */
#define RTC_EVTENSET_TICK_Pos (0UL) /*!< Position of TICK field. */
#define RTC_EVTENSET_TICK_Msk (0x1UL << RTC_EVTENSET_TICK_Pos) /*!< Bit mask of TICK field. */
#define RTC_EVTENSET_TICK_Disabled (0UL) /*!< Read: Disabled */
#define RTC_EVTENSET_TICK_Enabled (1UL) /*!< Read: Enabled */
#define RTC_EVTENSET_TICK_Set (1UL) /*!< Enable */

/* Register: RTC_EVTENCLR */
/* Description: Disable event routing */

/* Bit 19 : Write '1' to disable event routing for event COMPARE[3] */
#define RTC_EVTENCLR_COMPARE3_Pos (19UL) /*!< Position of COMPARE3 field. */
#define RTC_EVTENCLR_COMPARE3_Msk (0x1UL << RTC_EVTENCLR_COMPARE3_Pos) /*!< Bit mask of COMPARE3 field. */
#define RTC_EVTENCLR_COMPARE3_Disabled (0UL) /*!< Read: Disabled */
#define RTC_EVTENCLR_COMPARE3_Enabled (1UL) /*!< Read: Enabled */
#define RTC_EVTENCLR_COMPARE3_Clear (1UL) /*!< Disable */

/* Bit 18 : Write '1' to disable event routing for event COMPARE[2] */
#define RTC_EVTENCLR_COMPARE2_Pos (18UL) /*!< Position of COMPARE2 field. */
#define RTC_EVTENCLR_COMPARE2_Msk (0x1UL << RTC_EVTENCLR_COMPARE2_Pos) /*!< Bit mask of COMPARE2 field. */
#define RTC_EVTENCLR_COMPARE2_Disabled (0UL) /*!< Read: Disabled */
#define RTC_EVTENCLR_COMPARE2_Enabled (1UL) /*!< Read: Enabled */
#define RTC_EVTENCLR_COMPARE2_Clear (1UL) /*!< Disable */

/* Bit 17 : Write '1' to disable event routing for event COMPARE[1] */
#define RTC_EVTENCLR_COMPARE1_Pos (17UL) /*!< Position of COMPARE1 field. */
#define RTC_EVTENCLR_COMPARE1_Msk (0x1UL << RTC_EVTENCLR_COMPARE1_Pos) /*!< Bit mask of COMPARE1 field. */
#define RTC_EVTENCLR_COMPARE1_Disabled (0UL) /*!< Read: Disabled */
#define RTC_EVTENCLR_COMPARE1_Enabled (1UL) /*!< Read: Enabled */
#define RTC_EVTENCLR_COMPARE1_Clear (1UL) /*!< Disable */

/* Bit 16 : Write '1' to disable event routing for event COMPARE[0] */
#define RTC_EVTENCLR_COMPARE0_Pos (16UL) /*!< Position of COMPARE0 field. */
#define RTC_EVTENCLR_COMPARE0_Msk (0x1UL << RTC_EVTENCLR_COMPARE0_Pos) /*!< Bit mask of COMPARE0 field. */
#define RTC_EVTENCLR_COMPARE0_Disabled (0UL) /*!< Read: Disabled */
#define RTC_EVTENCLR_COMPARE0_Enabled (1UL) /*!< Read: Enabled */
#define RTC_EVTENCLR_COMPARE0_Clear (1UL) /*!< Disable */

/* Bit 1 : Write '1' to disable event routing for event OVRFLW */
#define RTC_EVTENCLR_OVRFLW_Pos (1UL) /*!< Position of OVRFLW field. */
#define RTC_EVTENCLR_OVRFLW_Msk (0x1UL << RTC_EVTENCLR_OVRFLW_Pos) /*!< Bit mask of OVRFLW field. */
#define RTC_EVTENCLR_OVRFLW_Disabled (0UL) /*!< Read: Disabled */
#define RTC_EVTENCLR_OVRFLW_Enabled (1UL) /*!< Read: Enabled */
#define RTC_EVTENCLR_OVRFLW_Clear (1UL) /*!< Disable */

/* Bit 0 : Write '1' to disable event routing for event TICK */
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

/* Bits 31..0 : Counter value */
#define RTC_COUNTER_COUNTER_Pos (0UL) /*!< Position of COUNTER field. */
#define RTC_COUNTER_COUNTER_Msk (0xFFFFFFFFUL << RTC_COUNTER_COUNTER_Pos) /*!< Bit mask of COUNTER field. */

/* Register: RTC_PRESCALER */
/* Description: 12 bit prescaler for COUNTER frequency (32768/(PRESCALER+1)).Must be written when RTC is stopped */

/* Bits 11..0 : Prescaler value */
#define RTC_PRESCALER_PRESCALER_Pos (0UL) /*!< Position of PRESCALER field. */
#define RTC_PRESCALER_PRESCALER_Msk (0xFFFUL << RTC_PRESCALER_PRESCALER_Pos) /*!< Bit mask of PRESCALER field. */

/* Register: RTC_CC */
/* Description: Description collection: Compare register n */

/* Bits 31..0 : Compare value */
#define RTC_CC_COMPARE_Pos (0UL) /*!< Position of COMPARE field. */
#define RTC_CC_COMPARE_Msk (0xFFFFFFFFUL << RTC_CC_COMPARE_Pos) /*!< Bit mask of COMPARE field. */

/* Register: RTC_POWER */
/* Description: Peripheral power control */

/* Bit 0 : Peripheral power control. The peripheral and its registers will be reset to its initial state by switching the peripheral off and then back on again. */
#define RTC_POWER_POWER_Pos (0UL) /*!< Position of POWER field. */
#define RTC_POWER_POWER_Msk (0x1UL << RTC_POWER_POWER_Pos) /*!< Bit mask of POWER field. */
#define RTC_POWER_POWER_Disabled (0UL) /*!< Peripheral is powered off */
#define RTC_POWER_POWER_Enabled (1UL) /*!< Peripheral is powered on */


/* Peripheral: SECURECONTROL */
/* Description: Secure Control */

/* Register: SECURECONTROL_OTPTOPADDR */
/* Description: Top address of the OTP area. Address must be divisible by four */

/* Bits 31..0 : Top address of the OTP area.  This register type is WRITE ONCE. */
#define SECURECONTROL_OTPTOPADDR_OTPTOPADDR_Pos (0UL) /*!< Position of OTPTOPADDR field. */
#define SECURECONTROL_OTPTOPADDR_OTPTOPADDR_Msk (0xFFFFFFFFUL << SECURECONTROL_OTPTOPADDR_OTPTOPADDR_Pos) /*!< Bit mask of OTPTOPADDR field. */

/* Register: SECURECONTROL_SECUREEXIT */
/* Description: Writing to this register will enable secure exit. */

/* Bits 15..0 : Writing to this register will enable secure exit. */
#define SECURECONTROL_SECUREEXIT_SECUREEXIT_Pos (0UL) /*!< Position of SECUREEXIT field. */
#define SECURECONTROL_SECUREEXIT_SECUREEXIT_Msk (0xFFFFUL << SECURECONTROL_SECUREEXIT_SECUREEXIT_Pos) /*!< Bit mask of SECUREEXIT field. */
#define SECURECONTROL_SECUREEXIT_SECUREEXIT_SECUREEXIT (0UL) /*!< Secure Exit disabled. Secure Exit enabled. */

/* Register: SECURECONTROL_SNOOPENABLE */
/* Description: Enable SecureEntry snooping. */

/* Bit 0 : Enable SecureEntry snooping. */
#define SECURECONTROL_SNOOPENABLE_SNOOPENABLE_Pos (0UL) /*!< Position of SNOOPENABLE field. */
#define SECURECONTROL_SNOOPENABLE_SNOOPENABLE_Msk (0x1UL << SECURECONTROL_SNOOPENABLE_SNOOPENABLE_Pos) /*!< Bit mask of SNOOPENABLE field. */
#define SECURECONTROL_SNOOPENABLE_SNOOPENABLE_Disabled (0UL) /*!< Secure Entry sequence snooping disabled. */
#define SECURECONTROL_SNOOPENABLE_SNOOPENABLE_Enabled (1UL) /*!< Secure Entry sequence snooping enabled. */

/* Register: SECURECONTROL_SECWRENABLERANGE */
/* Description: FICR Wr enable range. */

/* Bits 31..0 : FICR Wr enable range. */
#define SECURECONTROL_SECWRENABLERANGE_SECWREABLERANGE_Pos (0UL) /*!< Position of SECWREABLERANGE field. */
#define SECURECONTROL_SECWRENABLERANGE_SECWREABLERANGE_Msk (0xFFFFFFFFUL << SECURECONTROL_SECWRENABLERANGE_SECWREABLERANGE_Pos) /*!< Bit mask of SECWREABLERANGE field. */

/* Register: SECURECONTROL_AESDMAPROMOTION */
/* Description: AES DMA promoted as a secure device. */

/* Bit 0 : AES DMA promotion as a secure device. */
#define SECURECONTROL_AESDMAPROMOTION_AESDMAPROMOTION_Pos (0UL) /*!< Position of AESDMAPROMOTION field. */
#define SECURECONTROL_AESDMAPROMOTION_AESDMAPROMOTION_Msk (0x1UL << SECURECONTROL_AESDMAPROMOTION_AESDMAPROMOTION_Pos) /*!< Bit mask of AESDMAPROMOTION field. */
#define SECURECONTROL_AESDMAPROMOTION_AESDMAPROMOTION_Nonsecure (0UL) /*!< AES DMA is a nonsecure device. */
#define SECURECONTROL_AESDMAPROMOTION_AESDMAPROMOTION_Secure (1UL) /*!< AES DMA is a secure device. */

/* Register: SECURECONTROL_SHADMAPROMOTION */
/* Description: SHA DMA promoted as a secure device. */

/* Bit 0 : SHA DMA promotion as a secure device. */
#define SECURECONTROL_SHADMAPROMOTION_SHADMAPROMOTION_Pos (0UL) /*!< Position of SHADMAPROMOTION field. */
#define SECURECONTROL_SHADMAPROMOTION_SHADMAPROMOTION_Msk (0x1UL << SECURECONTROL_SHADMAPROMOTION_SHADMAPROMOTION_Pos) /*!< Bit mask of SHADMAPROMOTION field. */
#define SECURECONTROL_SHADMAPROMOTION_SHADMAPROMOTION_Nonsecure (0UL) /*!< AES DMA is a nonsecure device. */
#define SECURECONTROL_SHADMAPROMOTION_SHADMAPROMOTION_Secure (1UL) /*!< AES DMA is a secure device. */

/* Register: SECURECONTROL_SECUREWATCHDOGPAUSE */
/* Description: Secure watchdog pause control. */

/* Bit 0 : Secure watchdog pause control. */
#define SECURECONTROL_SECUREWATCHDOGPAUSE_SECUREWDPAUSE_Pos (0UL) /*!< Position of SECUREWDPAUSE field. */
#define SECURECONTROL_SECUREWATCHDOGPAUSE_SECUREWDPAUSE_Msk (0x1UL << SECURECONTROL_SECUREWATCHDOGPAUSE_SECUREWDPAUSE_Pos) /*!< Bit mask of SECUREWDPAUSE field. */
#define SECURECONTROL_SECUREWATCHDOGPAUSE_SECUREWDPAUSE_Running (0UL) /*!< Secure WD running. */
#define SECURECONTROL_SECUREWATCHDOGPAUSE_SECUREWDPAUSE_Paused (1UL) /*!< Secure WD paused. */


/* Peripheral: SHA */
/* Description: SHA-1/SHA-256 */

/* Register: SHA_TASKS_START_GATHER */
/* Description: Start input DMA. */

/* Bit 0 : Start input DMA. */
#define SHA_TASKS_START_GATHER_TASKS_START_GATHER_Pos (0UL) /*!< Position of TASKS_START_GATHER field. */
#define SHA_TASKS_START_GATHER_TASKS_START_GATHER_Msk (0x1UL << SHA_TASKS_START_GATHER_TASKS_START_GATHER_Pos) /*!< Bit mask of TASKS_START_GATHER field. */
#define SHA_TASKS_START_GATHER_TASKS_START_GATHER_Trigger (1UL) /*!< Trigger task */

/* Register: SHA_TASKS_STOP_GATHER */
/* Description: Stop input DMA. */

/* Bit 0 : Stop input DMA. */
#define SHA_TASKS_STOP_GATHER_TASKS_STOP_GATHER_Pos (0UL) /*!< Position of TASKS_STOP_GATHER field. */
#define SHA_TASKS_STOP_GATHER_TASKS_STOP_GATHER_Msk (0x1UL << SHA_TASKS_STOP_GATHER_TASKS_STOP_GATHER_Pos) /*!< Bit mask of TASKS_STOP_GATHER field. */
#define SHA_TASKS_STOP_GATHER_TASKS_STOP_GATHER_Trigger (1UL) /*!< Trigger task */

/* Register: SHA_TASKS_START_OPERATION */
/* Description: Start SHA-x operation depending on mode (start accepting data). */

/* Bit 0 : Start SHA-x operation depending on mode (start accepting data). */
#define SHA_TASKS_START_OPERATION_TASKS_START_OPERATION_Pos (0UL) /*!< Position of TASKS_START_OPERATION field. */
#define SHA_TASKS_START_OPERATION_TASKS_START_OPERATION_Msk (0x1UL << SHA_TASKS_START_OPERATION_TASKS_START_OPERATION_Pos) /*!< Bit mask of TASKS_START_OPERATION field. */
#define SHA_TASKS_START_OPERATION_TASKS_START_OPERATION_Trigger (1UL) /*!< Trigger task */

/* Register: SHA_TASKS_FINALIZE */
/* Description: Finalize SHA calculation. */

/* Bit 0 : Finalize SHA calculation. */
#define SHA_TASKS_FINALIZE_TASKS_FINALIZE_Pos (0UL) /*!< Position of TASKS_FINALIZE field. */
#define SHA_TASKS_FINALIZE_TASKS_FINALIZE_Msk (0x1UL << SHA_TASKS_FINALIZE_TASKS_FINALIZE_Pos) /*!< Bit mask of TASKS_FINALIZE field. */
#define SHA_TASKS_FINALIZE_TASKS_FINALIZE_Trigger (1UL) /*!< Trigger task */

/* Register: SHA_TASKS_RESET */
/* Description: Stop all transfers and crypto operations (initialize). */

/* Bit 0 : Stop all transfers and crypto operations (initialize). */
#define SHA_TASKS_RESET_TASKS_RESET_Pos (0UL) /*!< Position of TASKS_RESET field. */
#define SHA_TASKS_RESET_TASKS_RESET_Msk (0x1UL << SHA_TASKS_RESET_TASKS_RESET_Pos) /*!< Bit mask of TASKS_RESET field. */
#define SHA_TASKS_RESET_TASKS_RESET_Trigger (1UL) /*!< Trigger task */

/* Register: SHA_EVENTS_GATHER_STARTED */
/* Description: Input DMA started. */

/* Bit 0 : Input DMA started. */
#define SHA_EVENTS_GATHER_STARTED_EVENTS_GATHER_STARTED_Pos (0UL) /*!< Position of EVENTS_GATHER_STARTED field. */
#define SHA_EVENTS_GATHER_STARTED_EVENTS_GATHER_STARTED_Msk (0x1UL << SHA_EVENTS_GATHER_STARTED_EVENTS_GATHER_STARTED_Pos) /*!< Bit mask of EVENTS_GATHER_STARTED field. */
#define SHA_EVENTS_GATHER_STARTED_EVENTS_GATHER_STARTED_NotGenerated (0UL) /*!< Event not generated */
#define SHA_EVENTS_GATHER_STARTED_EVENTS_GATHER_STARTED_Generated (1UL) /*!< Event generated */

/* Register: SHA_EVENTS_GATHER_DONE */
/* Description: Input DMA done. */

/* Bit 0 : Input DMA done. */
#define SHA_EVENTS_GATHER_DONE_EVENTS_GATHER_DONE_Pos (0UL) /*!< Position of EVENTS_GATHER_DONE field. */
#define SHA_EVENTS_GATHER_DONE_EVENTS_GATHER_DONE_Msk (0x1UL << SHA_EVENTS_GATHER_DONE_EVENTS_GATHER_DONE_Pos) /*!< Bit mask of EVENTS_GATHER_DONE field. */
#define SHA_EVENTS_GATHER_DONE_EVENTS_GATHER_DONE_NotGenerated (0UL) /*!< Event not generated */
#define SHA_EVENTS_GATHER_DONE_EVENTS_GATHER_DONE_Generated (1UL) /*!< Event generated */

/* Register: SHA_EVENTS_Unused */
/* Description: Unused */

/* Bit 0 : Unused */
#define SHA_EVENTS_Unused_EVENTS_Unused_Pos (0UL) /*!< Position of EVENTS_Unused field. */
#define SHA_EVENTS_Unused_EVENTS_Unused_Msk (0x1UL << SHA_EVENTS_Unused_EVENTS_Unused_Pos) /*!< Bit mask of EVENTS_Unused field. */
#define SHA_EVENTS_Unused_EVENTS_Unused_NotGenerated (0UL) /*!< Event not generated */
#define SHA_EVENTS_Unused_EVENTS_Unused_Generated (1UL) /*!< Event generated */

/* Register: SHA_EVENTS_MESSAGE_READY */
/* Description: LENGTH == 0. */

/* Bit 0 : LENGTH == 0. */
#define SHA_EVENTS_MESSAGE_READY_EVENTS_MESSAGE_READY_Pos (0UL) /*!< Position of EVENTS_MESSAGE_READY field. */
#define SHA_EVENTS_MESSAGE_READY_EVENTS_MESSAGE_READY_Msk (0x1UL << SHA_EVENTS_MESSAGE_READY_EVENTS_MESSAGE_READY_Pos) /*!< Bit mask of EVENTS_MESSAGE_READY field. */
#define SHA_EVENTS_MESSAGE_READY_EVENTS_MESSAGE_READY_NotGenerated (0UL) /*!< Event not generated */
#define SHA_EVENTS_MESSAGE_READY_EVENTS_MESSAGE_READY_Generated (1UL) /*!< Event generated */

/* Register: SHA_EVENTS_SHA_READY */
/* Description: SHA calculated. */

/* Bit 0 : SHA calculated. */
#define SHA_EVENTS_SHA_READY_EVENTS_SHA_READY_Pos (0UL) /*!< Position of EVENTS_SHA_READY field. */
#define SHA_EVENTS_SHA_READY_EVENTS_SHA_READY_Msk (0x1UL << SHA_EVENTS_SHA_READY_EVENTS_SHA_READY_Pos) /*!< Bit mask of EVENTS_SHA_READY field. */
#define SHA_EVENTS_SHA_READY_EVENTS_SHA_READY_NotGenerated (0UL) /*!< Event not generated */
#define SHA_EVENTS_SHA_READY_EVENTS_SHA_READY_Generated (1UL) /*!< Event generated */

/* Register: SHA_EVENTS_RESETTED */
/* Description: Resetted (all transfers and crypto operations stopped). */

/* Bit 0 : Resetted (all transfers and crypto operations stopped). */
#define SHA_EVENTS_RESETTED_EVENTS_RESETTED_Pos (0UL) /*!< Position of EVENTS_RESETTED field. */
#define SHA_EVENTS_RESETTED_EVENTS_RESETTED_Msk (0x1UL << SHA_EVENTS_RESETTED_EVENTS_RESETTED_Pos) /*!< Bit mask of EVENTS_RESETTED field. */
#define SHA_EVENTS_RESETTED_EVENTS_RESETTED_NotGenerated (0UL) /*!< Event not generated */
#define SHA_EVENTS_RESETTED_EVENTS_RESETTED_Generated (1UL) /*!< Event generated */

/* Register: SHA_SHORTS */
/* Description: Shortcuts between local events and tasks */

/* Bit 1 : Shortcut between event GATHER_DONE and task FINALIZE */
#define SHA_SHORTS_GATHER_DONE_FINALIZE_Pos (1UL) /*!< Position of GATHER_DONE_FINALIZE field. */
#define SHA_SHORTS_GATHER_DONE_FINALIZE_Msk (0x1UL << SHA_SHORTS_GATHER_DONE_FINALIZE_Pos) /*!< Bit mask of GATHER_DONE_FINALIZE field. */
#define SHA_SHORTS_GATHER_DONE_FINALIZE_Disabled (0UL) /*!< Disable shortcut */
#define SHA_SHORTS_GATHER_DONE_FINALIZE_Enabled (1UL) /*!< Enable shortcut */

/* Bit 0 : Shortcut between event GATHER_STARTED and task START_OPERATION */
#define SHA_SHORTS_GATHER_STARTED_START_OPERATION_Pos (0UL) /*!< Position of GATHER_STARTED_START_OPERATION field. */
#define SHA_SHORTS_GATHER_STARTED_START_OPERATION_Msk (0x1UL << SHA_SHORTS_GATHER_STARTED_START_OPERATION_Pos) /*!< Bit mask of GATHER_STARTED_START_OPERATION field. */
#define SHA_SHORTS_GATHER_STARTED_START_OPERATION_Disabled (0UL) /*!< Disable shortcut */
#define SHA_SHORTS_GATHER_STARTED_START_OPERATION_Enabled (1UL) /*!< Enable shortcut */

/* Register: SHA_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 5 : Enable or disable interrupt for event RESETTED */
#define SHA_INTEN_RESETTED_Pos (5UL) /*!< Position of RESETTED field. */
#define SHA_INTEN_RESETTED_Msk (0x1UL << SHA_INTEN_RESETTED_Pos) /*!< Bit mask of RESETTED field. */
#define SHA_INTEN_RESETTED_Disabled (0UL) /*!< Disable */
#define SHA_INTEN_RESETTED_Enabled (1UL) /*!< Enable */

/* Bit 4 : Enable or disable interrupt for event SHA_READY */
#define SHA_INTEN_SHA_READY_Pos (4UL) /*!< Position of SHA_READY field. */
#define SHA_INTEN_SHA_READY_Msk (0x1UL << SHA_INTEN_SHA_READY_Pos) /*!< Bit mask of SHA_READY field. */
#define SHA_INTEN_SHA_READY_Disabled (0UL) /*!< Disable */
#define SHA_INTEN_SHA_READY_Enabled (1UL) /*!< Enable */

/* Bit 3 : Enable or disable interrupt for event MESSAGE_READY */
#define SHA_INTEN_MESSAGE_READY_Pos (3UL) /*!< Position of MESSAGE_READY field. */
#define SHA_INTEN_MESSAGE_READY_Msk (0x1UL << SHA_INTEN_MESSAGE_READY_Pos) /*!< Bit mask of MESSAGE_READY field. */
#define SHA_INTEN_MESSAGE_READY_Disabled (0UL) /*!< Disable */
#define SHA_INTEN_MESSAGE_READY_Enabled (1UL) /*!< Enable */

/* Bit 2 : Enable or disable interrupt for event Unused */
#define SHA_INTEN_Unused_Pos (2UL) /*!< Position of Unused field. */
#define SHA_INTEN_Unused_Msk (0x1UL << SHA_INTEN_Unused_Pos) /*!< Bit mask of Unused field. */
#define SHA_INTEN_Unused_Disabled (0UL) /*!< Disable */
#define SHA_INTEN_Unused_Enabled (1UL) /*!< Enable */

/* Bit 1 : Enable or disable interrupt for event GATHER_DONE */
#define SHA_INTEN_GATHER_DONE_Pos (1UL) /*!< Position of GATHER_DONE field. */
#define SHA_INTEN_GATHER_DONE_Msk (0x1UL << SHA_INTEN_GATHER_DONE_Pos) /*!< Bit mask of GATHER_DONE field. */
#define SHA_INTEN_GATHER_DONE_Disabled (0UL) /*!< Disable */
#define SHA_INTEN_GATHER_DONE_Enabled (1UL) /*!< Enable */

/* Bit 0 : Enable or disable interrupt for event GATHER_STARTED */
#define SHA_INTEN_GATHER_STARTED_Pos (0UL) /*!< Position of GATHER_STARTED field. */
#define SHA_INTEN_GATHER_STARTED_Msk (0x1UL << SHA_INTEN_GATHER_STARTED_Pos) /*!< Bit mask of GATHER_STARTED field. */
#define SHA_INTEN_GATHER_STARTED_Disabled (0UL) /*!< Disable */
#define SHA_INTEN_GATHER_STARTED_Enabled (1UL) /*!< Enable */

/* Register: SHA_INTENSET */
/* Description: Enable interrupt */

/* Bit 5 : Write '1' to enable interrupt for event RESETTED */
#define SHA_INTENSET_RESETTED_Pos (5UL) /*!< Position of RESETTED field. */
#define SHA_INTENSET_RESETTED_Msk (0x1UL << SHA_INTENSET_RESETTED_Pos) /*!< Bit mask of RESETTED field. */
#define SHA_INTENSET_RESETTED_Disabled (0UL) /*!< Read: Disabled */
#define SHA_INTENSET_RESETTED_Enabled (1UL) /*!< Read: Enabled */
#define SHA_INTENSET_RESETTED_Set (1UL) /*!< Enable */

/* Bit 4 : Write '1' to enable interrupt for event SHA_READY */
#define SHA_INTENSET_SHA_READY_Pos (4UL) /*!< Position of SHA_READY field. */
#define SHA_INTENSET_SHA_READY_Msk (0x1UL << SHA_INTENSET_SHA_READY_Pos) /*!< Bit mask of SHA_READY field. */
#define SHA_INTENSET_SHA_READY_Disabled (0UL) /*!< Read: Disabled */
#define SHA_INTENSET_SHA_READY_Enabled (1UL) /*!< Read: Enabled */
#define SHA_INTENSET_SHA_READY_Set (1UL) /*!< Enable */

/* Bit 3 : Write '1' to enable interrupt for event MESSAGE_READY */
#define SHA_INTENSET_MESSAGE_READY_Pos (3UL) /*!< Position of MESSAGE_READY field. */
#define SHA_INTENSET_MESSAGE_READY_Msk (0x1UL << SHA_INTENSET_MESSAGE_READY_Pos) /*!< Bit mask of MESSAGE_READY field. */
#define SHA_INTENSET_MESSAGE_READY_Disabled (0UL) /*!< Read: Disabled */
#define SHA_INTENSET_MESSAGE_READY_Enabled (1UL) /*!< Read: Enabled */
#define SHA_INTENSET_MESSAGE_READY_Set (1UL) /*!< Enable */

/* Bit 2 : Write '1' to enable interrupt for event Unused */
#define SHA_INTENSET_Unused_Pos (2UL) /*!< Position of Unused field. */
#define SHA_INTENSET_Unused_Msk (0x1UL << SHA_INTENSET_Unused_Pos) /*!< Bit mask of Unused field. */
#define SHA_INTENSET_Unused_Disabled (0UL) /*!< Read: Disabled */
#define SHA_INTENSET_Unused_Enabled (1UL) /*!< Read: Enabled */
#define SHA_INTENSET_Unused_Set (1UL) /*!< Enable */

/* Bit 1 : Write '1' to enable interrupt for event GATHER_DONE */
#define SHA_INTENSET_GATHER_DONE_Pos (1UL) /*!< Position of GATHER_DONE field. */
#define SHA_INTENSET_GATHER_DONE_Msk (0x1UL << SHA_INTENSET_GATHER_DONE_Pos) /*!< Bit mask of GATHER_DONE field. */
#define SHA_INTENSET_GATHER_DONE_Disabled (0UL) /*!< Read: Disabled */
#define SHA_INTENSET_GATHER_DONE_Enabled (1UL) /*!< Read: Enabled */
#define SHA_INTENSET_GATHER_DONE_Set (1UL) /*!< Enable */

/* Bit 0 : Write '1' to enable interrupt for event GATHER_STARTED */
#define SHA_INTENSET_GATHER_STARTED_Pos (0UL) /*!< Position of GATHER_STARTED field. */
#define SHA_INTENSET_GATHER_STARTED_Msk (0x1UL << SHA_INTENSET_GATHER_STARTED_Pos) /*!< Bit mask of GATHER_STARTED field. */
#define SHA_INTENSET_GATHER_STARTED_Disabled (0UL) /*!< Read: Disabled */
#define SHA_INTENSET_GATHER_STARTED_Enabled (1UL) /*!< Read: Enabled */
#define SHA_INTENSET_GATHER_STARTED_Set (1UL) /*!< Enable */

/* Register: SHA_INTENCLR */
/* Description: Disable interrupt */

/* Bit 5 : Write '1' to disable interrupt for event RESETTED */
#define SHA_INTENCLR_RESETTED_Pos (5UL) /*!< Position of RESETTED field. */
#define SHA_INTENCLR_RESETTED_Msk (0x1UL << SHA_INTENCLR_RESETTED_Pos) /*!< Bit mask of RESETTED field. */
#define SHA_INTENCLR_RESETTED_Disabled (0UL) /*!< Read: Disabled */
#define SHA_INTENCLR_RESETTED_Enabled (1UL) /*!< Read: Enabled */
#define SHA_INTENCLR_RESETTED_Clear (1UL) /*!< Disable */

/* Bit 4 : Write '1' to disable interrupt for event SHA_READY */
#define SHA_INTENCLR_SHA_READY_Pos (4UL) /*!< Position of SHA_READY field. */
#define SHA_INTENCLR_SHA_READY_Msk (0x1UL << SHA_INTENCLR_SHA_READY_Pos) /*!< Bit mask of SHA_READY field. */
#define SHA_INTENCLR_SHA_READY_Disabled (0UL) /*!< Read: Disabled */
#define SHA_INTENCLR_SHA_READY_Enabled (1UL) /*!< Read: Enabled */
#define SHA_INTENCLR_SHA_READY_Clear (1UL) /*!< Disable */

/* Bit 3 : Write '1' to disable interrupt for event MESSAGE_READY */
#define SHA_INTENCLR_MESSAGE_READY_Pos (3UL) /*!< Position of MESSAGE_READY field. */
#define SHA_INTENCLR_MESSAGE_READY_Msk (0x1UL << SHA_INTENCLR_MESSAGE_READY_Pos) /*!< Bit mask of MESSAGE_READY field. */
#define SHA_INTENCLR_MESSAGE_READY_Disabled (0UL) /*!< Read: Disabled */
#define SHA_INTENCLR_MESSAGE_READY_Enabled (1UL) /*!< Read: Enabled */
#define SHA_INTENCLR_MESSAGE_READY_Clear (1UL) /*!< Disable */

/* Bit 2 : Write '1' to disable interrupt for event Unused */
#define SHA_INTENCLR_Unused_Pos (2UL) /*!< Position of Unused field. */
#define SHA_INTENCLR_Unused_Msk (0x1UL << SHA_INTENCLR_Unused_Pos) /*!< Bit mask of Unused field. */
#define SHA_INTENCLR_Unused_Disabled (0UL) /*!< Read: Disabled */
#define SHA_INTENCLR_Unused_Enabled (1UL) /*!< Read: Enabled */
#define SHA_INTENCLR_Unused_Clear (1UL) /*!< Disable */

/* Bit 1 : Write '1' to disable interrupt for event GATHER_DONE */
#define SHA_INTENCLR_GATHER_DONE_Pos (1UL) /*!< Position of GATHER_DONE field. */
#define SHA_INTENCLR_GATHER_DONE_Msk (0x1UL << SHA_INTENCLR_GATHER_DONE_Pos) /*!< Bit mask of GATHER_DONE field. */
#define SHA_INTENCLR_GATHER_DONE_Disabled (0UL) /*!< Read: Disabled */
#define SHA_INTENCLR_GATHER_DONE_Enabled (1UL) /*!< Read: Enabled */
#define SHA_INTENCLR_GATHER_DONE_Clear (1UL) /*!< Disable */

/* Bit 0 : Write '1' to disable interrupt for event GATHER_STARTED */
#define SHA_INTENCLR_GATHER_STARTED_Pos (0UL) /*!< Position of GATHER_STARTED field. */
#define SHA_INTENCLR_GATHER_STARTED_Msk (0x1UL << SHA_INTENCLR_GATHER_STARTED_Pos) /*!< Bit mask of GATHER_STARTED field. */
#define SHA_INTENCLR_GATHER_STARTED_Disabled (0UL) /*!< Read: Disabled */
#define SHA_INTENCLR_GATHER_STARTED_Enabled (1UL) /*!< Read: Enabled */
#define SHA_INTENCLR_GATHER_STARTED_Clear (1UL) /*!< Disable */

/* Register: SHA_LENGTH */
/* Description: Message length in bits. */

/* Bits 31..0 : Message length in bits. */
#define SHA_LENGTH_LENGTH_Pos (0UL) /*!< Position of LENGTH field. */
#define SHA_LENGTH_LENGTH_Msk (0xFFFFFFFFUL << SHA_LENGTH_LENGTH_Pos) /*!< Bit mask of LENGTH field. */

/* Register: SHA_MODE */
/* Description: Configuration. */

/* Bits 1..0 : MODE SELECTION */
#define SHA_MODE_MODE_Pos (0UL) /*!< Position of MODE field. */
#define SHA_MODE_MODE_Msk (0x3UL << SHA_MODE_MODE_Pos) /*!< Bit mask of MODE field. */
#define SHA_MODE_MODE_SHA_1 (0UL) /*!< SHA-1 mode */
#define SHA_MODE_MODE_SHA_256 (2UL) /*!< SHA-256 mode */

/* Register: SHA_H7 */
/* Description: Final result H7 (SHA-256), H4 (SHA-1). Updated after every 512bit block calculated. */

/* Bits 31..0 : Data7 */
#define SHA_H7_Data_Pos (0UL) /*!< Position of Data field. */
#define SHA_H7_Data_Msk (0xFFFFFFFFUL << SHA_H7_Data_Pos) /*!< Bit mask of Data field. */

/* Register: SHA_H6 */
/* Description: Final result H6 (SHA-256), H3 (SHA-1). Updated after every 512bit block calculated. */

/* Bits 31..0 : Data6 */
#define SHA_H6_Data_Pos (0UL) /*!< Position of Data field. */
#define SHA_H6_Data_Msk (0xFFFFFFFFUL << SHA_H6_Data_Pos) /*!< Bit mask of Data field. */

/* Register: SHA_H5 */
/* Description: Final result H5 (SHA-256), H2 (SHA-1). Updated after every 512bit block calculated. */

/* Bits 31..0 : Data5 */
#define SHA_H5_Data_Pos (0UL) /*!< Position of Data field. */
#define SHA_H5_Data_Msk (0xFFFFFFFFUL << SHA_H5_Data_Pos) /*!< Bit mask of Data field. */

/* Register: SHA_H4 */
/* Description: Final result H4 (SHA-256), H1 (SHA-1). Updated after every 512bit block calculated. */

/* Bits 31..0 : Data4 */
#define SHA_H4_Data_Pos (0UL) /*!< Position of Data field. */
#define SHA_H4_Data_Msk (0xFFFFFFFFUL << SHA_H4_Data_Pos) /*!< Bit mask of Data field. */

/* Register: SHA_H3 */
/* Description: Final result H3 (SHA-256), H0 (SHA-1). Updated after every 512bit block calculated. */

/* Bits 31..0 : Data3 */
#define SHA_H3_Data_Pos (0UL) /*!< Position of Data field. */
#define SHA_H3_Data_Msk (0xFFFFFFFFUL << SHA_H3_Data_Pos) /*!< Bit mask of Data field. */

/* Register: SHA_H2 */
/* Description: Final result H2 (SHA-256). Updated after every 512bit block calculated. */

/* Bits 31..0 : Data2 */
#define SHA_H2_Data_Pos (0UL) /*!< Position of Data field. */
#define SHA_H2_Data_Msk (0xFFFFFFFFUL << SHA_H2_Data_Pos) /*!< Bit mask of Data field. */

/* Register: SHA_H1 */
/* Description: Final result H1 (SHA-256). Updated after every 512bit block calculated. */

/* Bits 31..0 : Data1 */
#define SHA_H1_Data_Pos (0UL) /*!< Position of Data field. */
#define SHA_H1_Data_Msk (0xFFFFFFFFUL << SHA_H1_Data_Pos) /*!< Bit mask of Data field. */

/* Register: SHA_H0 */
/* Description: Final result H0 (SHA-256). Updated after every 512bit block calculated.. */

/* Bits 31..0 : Data0 */
#define SHA_H0_Data_Pos (0UL) /*!< Position of Data field. */
#define SHA_H0_Data_Msk (0xFFFFFFFFUL << SHA_H0_Data_Pos) /*!< Bit mask of Data field. */

/* Register: SHA_H7_R */
/* Description: Final result H7_R (SHA-256), H4_R (SHA-1) in reversed byte order. Updated after every 512bit block calculated. */

/* Bits 31..0 : Data7 */
#define SHA_H7_R_Data_Pos (0UL) /*!< Position of Data field. */
#define SHA_H7_R_Data_Msk (0xFFFFFFFFUL << SHA_H7_R_Data_Pos) /*!< Bit mask of Data field. */

/* Register: SHA_H6_R */
/* Description: Final result H6_R (SHA-256), H3_R (SHA-1) in reversed byte order. Updated after every 512bit block calculated. */

/* Bits 31..0 : Data6 */
#define SHA_H6_R_Data_Pos (0UL) /*!< Position of Data field. */
#define SHA_H6_R_Data_Msk (0xFFFFFFFFUL << SHA_H6_R_Data_Pos) /*!< Bit mask of Data field. */

/* Register: SHA_H5_R */
/* Description: Final result H5_R (SHA-256), H2_R (SHA-1) in reversed byte order. Updated after every 512bit block calculated. */

/* Bits 31..0 : Data5 */
#define SHA_H5_R_Data_Pos (0UL) /*!< Position of Data field. */
#define SHA_H5_R_Data_Msk (0xFFFFFFFFUL << SHA_H5_R_Data_Pos) /*!< Bit mask of Data field. */

/* Register: SHA_H4_R */
/* Description: Final result H4_R (SHA-256), H1_R (SHA-1) in reversed byte order. Updated after every 512bit block calculated. */

/* Bits 31..0 : Data4 */
#define SHA_H4_R_Data_Pos (0UL) /*!< Position of Data field. */
#define SHA_H4_R_Data_Msk (0xFFFFFFFFUL << SHA_H4_R_Data_Pos) /*!< Bit mask of Data field. */

/* Register: SHA_H3_R */
/* Description: Final result H3_R (SHA-256), H0_R (SHA-1) in reversed byte order. Updated after every 512bit block calculated. */

/* Bits 31..0 : Data3 */
#define SHA_H3_R_Data_Pos (0UL) /*!< Position of Data field. */
#define SHA_H3_R_Data_Msk (0xFFFFFFFFUL << SHA_H3_R_Data_Pos) /*!< Bit mask of Data field. */

/* Register: SHA_H2_R */
/* Description: Final result H2_R (SHA-256) in reversed byte order. Updated after every 512bit block calculated. */

/* Bits 31..0 : Data2 */
#define SHA_H2_R_Data_Pos (0UL) /*!< Position of Data field. */
#define SHA_H2_R_Data_Msk (0xFFFFFFFFUL << SHA_H2_R_Data_Pos) /*!< Bit mask of Data field. */

/* Register: SHA_H1_R */
/* Description: Final result H1_R (SHA-256) in reversed byte order. Updated after every 512bit block calculated. */

/* Bits 31..0 : Data1 */
#define SHA_H1_R_Data_Pos (0UL) /*!< Position of Data field. */
#define SHA_H1_R_Data_Msk (0xFFFFFFFFUL << SHA_H1_R_Data_Pos) /*!< Bit mask of Data field. */

/* Register: SHA_H0_R */
/* Description: Final result H0_R (SHA-256) in reversed byte order. Updated after every 512bit block calculated.. */

/* Bits 31..0 : Data0 */
#define SHA_H0_R_Data_Pos (0UL) /*!< Position of Data field. */
#define SHA_H0_R_Data_Msk (0xFFFFFFFFUL << SHA_H0_R_Data_Pos) /*!< Bit mask of Data field. */

/* Register: SHA_INJOBPTR */
/* Description: Input job pointer. */

/* Bits 31..0 : Input job pointer. */
#define SHA_INJOBPTR_INJOBPTR_Pos (0UL) /*!< Position of INJOBPTR field. */
#define SHA_INJOBPTR_INJOBPTR_Msk (0xFFFFFFFFUL << SHA_INJOBPTR_INJOBPTR_Pos) /*!< Bit mask of INJOBPTR field. */

/* Register: SHA_INJOBINDEX */
/* Description: Current input job index. */

/* Bits 31..0 : Current input job index. */
#define SHA_INJOBINDEX_INJOBINDEX_Pos (0UL) /*!< Position of INJOBINDEX field. */
#define SHA_INJOBINDEX_INJOBINDEX_Msk (0xFFFFFFFFUL << SHA_INJOBINDEX_INJOBINDEX_Pos) /*!< Bit mask of INJOBINDEX field. */

/* Register: SHA_INBYTECOUNT */
/* Description: Bytes transferred in current job. */

/* Bits 31..0 : Bytes transferred in current job. */
#define SHA_INBYTECOUNT_INBYTECOUNT_Pos (0UL) /*!< Position of INBYTECOUNT field. */
#define SHA_INBYTECOUNT_INBYTECOUNT_Msk (0xFFFFFFFFUL << SHA_INBYTECOUNT_INBYTECOUNT_Pos) /*!< Bit mask of INBYTECOUNT field. */


/* Peripheral: SIMIF */
/* Description: SIM card interface */

/* Register: SIMIF_TASKS_DMASTARTRX */
/* Description: start DMA transfer from SIM card to memory */

/* Bit 0 : start DMA transfer from SIM card to memory */
#define SIMIF_TASKS_DMASTARTRX_TASKS_DMASTARTRX_Pos (0UL) /*!< Position of TASKS_DMASTARTRX field. */
#define SIMIF_TASKS_DMASTARTRX_TASKS_DMASTARTRX_Msk (0x1UL << SIMIF_TASKS_DMASTARTRX_TASKS_DMASTARTRX_Pos) /*!< Bit mask of TASKS_DMASTARTRX field. */
#define SIMIF_TASKS_DMASTARTRX_TASKS_DMASTARTRX_Trigger (1UL) /*!< Trigger task */

/* Register: SIMIF_TASKS_DMASTOPRX */
/* Description: stop DMA transfer from SIM card to memory */

/* Bit 0 : stop DMA transfer from SIM card to memory */
#define SIMIF_TASKS_DMASTOPRX_TASKS_DMASTOPRX_Pos (0UL) /*!< Position of TASKS_DMASTOPRX field. */
#define SIMIF_TASKS_DMASTOPRX_TASKS_DMASTOPRX_Msk (0x1UL << SIMIF_TASKS_DMASTOPRX_TASKS_DMASTOPRX_Pos) /*!< Bit mask of TASKS_DMASTOPRX field. */
#define SIMIF_TASKS_DMASTOPRX_TASKS_DMASTOPRX_Trigger (1UL) /*!< Trigger task */

/* Register: SIMIF_TASKS_DMASTARTTX */
/* Description: start DMA transfer from memory  to SIM card */

/* Bit 0 : start DMA transfer from memory  to SIM card */
#define SIMIF_TASKS_DMASTARTTX_TASKS_DMASTARTTX_Pos (0UL) /*!< Position of TASKS_DMASTARTTX field. */
#define SIMIF_TASKS_DMASTARTTX_TASKS_DMASTARTTX_Msk (0x1UL << SIMIF_TASKS_DMASTARTTX_TASKS_DMASTARTTX_Pos) /*!< Bit mask of TASKS_DMASTARTTX field. */
#define SIMIF_TASKS_DMASTARTTX_TASKS_DMASTARTTX_Trigger (1UL) /*!< Trigger task */

/* Register: SIMIF_TASKS_DMASTOPTX */
/* Description: start DMA transfer from memory  to SIM card */

/* Bit 0 : start DMA transfer from memory  to SIM card */
#define SIMIF_TASKS_DMASTOPTX_TASKS_DMASTOPTX_Pos (0UL) /*!< Position of TASKS_DMASTOPTX field. */
#define SIMIF_TASKS_DMASTOPTX_TASKS_DMASTOPTX_Msk (0x1UL << SIMIF_TASKS_DMASTOPTX_TASKS_DMASTOPTX_Pos) /*!< Bit mask of TASKS_DMASTOPTX field. */
#define SIMIF_TASKS_DMASTOPTX_TASKS_DMASTOPTX_Trigger (1UL) /*!< Trigger task */

/* Register: SIMIF_TASKS_RSTSET */
/* Description: Set SIM card reset signal */

/* Bit 0 : Set SIM card reset signal */
#define SIMIF_TASKS_RSTSET_TASKS_RSTSET_Pos (0UL) /*!< Position of TASKS_RSTSET field. */
#define SIMIF_TASKS_RSTSET_TASKS_RSTSET_Msk (0x1UL << SIMIF_TASKS_RSTSET_TASKS_RSTSET_Pos) /*!< Bit mask of TASKS_RSTSET field. */
#define SIMIF_TASKS_RSTSET_TASKS_RSTSET_Trigger (1UL) /*!< Trigger task */

/* Register: SIMIF_TASKS_RSTCLEAR */
/* Description: Clear SIM card reset signal */

/* Bit 0 : Clear SIM card reset signal */
#define SIMIF_TASKS_RSTCLEAR_TASKS_RSTCLEAR_Pos (0UL) /*!< Position of TASKS_RSTCLEAR field. */
#define SIMIF_TASKS_RSTCLEAR_TASKS_RSTCLEAR_Msk (0x1UL << SIMIF_TASKS_RSTCLEAR_TASKS_RSTCLEAR_Pos) /*!< Bit mask of TASKS_RSTCLEAR field. */
#define SIMIF_TASKS_RSTCLEAR_TASKS_RSTCLEAR_Trigger (1UL) /*!< Trigger task */

/* Register: SIMIF_TASKS_RESET */
/* Description: Reset everything */

/* Bit 0 : Reset everything */
#define SIMIF_TASKS_RESET_TASKS_RESET_Pos (0UL) /*!< Position of TASKS_RESET field. */
#define SIMIF_TASKS_RESET_TASKS_RESET_Msk (0x1UL << SIMIF_TASKS_RESET_TASKS_RESET_Pos) /*!< Bit mask of TASKS_RESET field. */
#define SIMIF_TASKS_RESET_TASKS_RESET_Trigger (1UL) /*!< Trigger task */

/* Register: SIMIF_TASKS_UARTRX */
/* Description: Start Uart for Rx access */

/* Bit 0 : Start Uart for Rx access */
#define SIMIF_TASKS_UARTRX_TASKS_UARTRX_Pos (0UL) /*!< Position of TASKS_UARTRX field. */
#define SIMIF_TASKS_UARTRX_TASKS_UARTRX_Msk (0x1UL << SIMIF_TASKS_UARTRX_TASKS_UARTRX_Pos) /*!< Bit mask of TASKS_UARTRX field. */
#define SIMIF_TASKS_UARTRX_TASKS_UARTRX_Trigger (1UL) /*!< Trigger task */

/* Register: SIMIF_TASKS_UARTTX */
/* Description: Start Uart for Tx access */

/* Bit 0 : Start Uart for Tx access */
#define SIMIF_TASKS_UARTTX_TASKS_UARTTX_Pos (0UL) /*!< Position of TASKS_UARTTX field. */
#define SIMIF_TASKS_UARTTX_TASKS_UARTTX_Msk (0x1UL << SIMIF_TASKS_UARTTX_TASKS_UARTTX_Pos) /*!< Bit mask of TASKS_UARTTX field. */
#define SIMIF_TASKS_UARTTX_TASKS_UARTTX_Trigger (1UL) /*!< Trigger task */

/* Register: SIMIF_TASKS_STARTWRITEFROMREG */
/* Description: Start write from tx data reg to  SIM card */

/* Bit 0 : Start write from tx data reg to  SIM card */
#define SIMIF_TASKS_STARTWRITEFROMREG_TASKS_STARTWRITEFROMREG_Pos (0UL) /*!< Position of TASKS_STARTWRITEFROMREG field. */
#define SIMIF_TASKS_STARTWRITEFROMREG_TASKS_STARTWRITEFROMREG_Msk (0x1UL << SIMIF_TASKS_STARTWRITEFROMREG_TASKS_STARTWRITEFROMREG_Pos) /*!< Bit mask of TASKS_STARTWRITEFROMREG field. */
#define SIMIF_TASKS_STARTWRITEFROMREG_TASKS_STARTWRITEFROMREG_Trigger (1UL) /*!< Trigger task */

/* Register: SIMIF_TASKS_STARTREADTOREG */
/* Description: Start read to tx data reg from  SIM card */

/* Bit 0 : Start read to tx data reg from  SIM card */
#define SIMIF_TASKS_STARTREADTOREG_TASKS_STARTREADTOREG_Pos (0UL) /*!< Position of TASKS_STARTREADTOREG field. */
#define SIMIF_TASKS_STARTREADTOREG_TASKS_STARTREADTOREG_Msk (0x1UL << SIMIF_TASKS_STARTREADTOREG_TASKS_STARTREADTOREG_Pos) /*!< Bit mask of TASKS_STARTREADTOREG field. */
#define SIMIF_TASKS_STARTREADTOREG_TASKS_STARTREADTOREG_Trigger (1UL) /*!< Trigger task */

/* Register: SIMIF_TASKS_PROTOCOLT0SET */
/* Description: Start using protocol T0 */

/* Bit 0 : Start using protocol T0 */
#define SIMIF_TASKS_PROTOCOLT0SET_TASKS_PROTOCOLT0SET_Pos (0UL) /*!< Position of TASKS_PROTOCOLT0SET field. */
#define SIMIF_TASKS_PROTOCOLT0SET_TASKS_PROTOCOLT0SET_Msk (0x1UL << SIMIF_TASKS_PROTOCOLT0SET_TASKS_PROTOCOLT0SET_Pos) /*!< Bit mask of TASKS_PROTOCOLT0SET field. */
#define SIMIF_TASKS_PROTOCOLT0SET_TASKS_PROTOCOLT0SET_Trigger (1UL) /*!< Trigger task */

/* Register: SIMIF_TASKS_PROTOCOLT1SET */
/* Description: Start using protocol T1 */

/* Bit 0 : Start using protocol T1 */
#define SIMIF_TASKS_PROTOCOLT1SET_TASKS_PROTOCOLT1SET_Pos (0UL) /*!< Position of TASKS_PROTOCOLT1SET field. */
#define SIMIF_TASKS_PROTOCOLT1SET_TASKS_PROTOCOLT1SET_Msk (0x1UL << SIMIF_TASKS_PROTOCOLT1SET_TASKS_PROTOCOLT1SET_Pos) /*!< Bit mask of TASKS_PROTOCOLT1SET field. */
#define SIMIF_TASKS_PROTOCOLT1SET_TASKS_PROTOCOLT1SET_Trigger (1UL) /*!< Trigger task */

/* Register: SIMIF_TASKS_PROTOCOLNONSET */
/* Description: Start using protocol none */

/* Bit 0 : Start using protocol none */
#define SIMIF_TASKS_PROTOCOLNONSET_TASKS_PROTOCOLNONSET_Pos (0UL) /*!< Position of TASKS_PROTOCOLNONSET field. */
#define SIMIF_TASKS_PROTOCOLNONSET_TASKS_PROTOCOLNONSET_Msk (0x1UL << SIMIF_TASKS_PROTOCOLNONSET_TASKS_PROTOCOLNONSET_Pos) /*!< Bit mask of TASKS_PROTOCOLNONSET field. */
#define SIMIF_TASKS_PROTOCOLNONSET_TASKS_PROTOCOLNONSET_Trigger (1UL) /*!< Trigger task */

/* Register: SIMIF_EVENTS_DMA_RX_STARTED */
/* Description: DMA Rx  operation started */

/* Bit 0 : DMA Rx  operation started */
#define SIMIF_EVENTS_DMA_RX_STARTED_EVENTS_DMA_RX_STARTED_Pos (0UL) /*!< Position of EVENTS_DMA_RX_STARTED field. */
#define SIMIF_EVENTS_DMA_RX_STARTED_EVENTS_DMA_RX_STARTED_Msk (0x1UL << SIMIF_EVENTS_DMA_RX_STARTED_EVENTS_DMA_RX_STARTED_Pos) /*!< Bit mask of EVENTS_DMA_RX_STARTED field. */
#define SIMIF_EVENTS_DMA_RX_STARTED_EVENTS_DMA_RX_STARTED_NotGenerated (0UL) /*!< Event not generated */
#define SIMIF_EVENTS_DMA_RX_STARTED_EVENTS_DMA_RX_STARTED_Generated (1UL) /*!< Event generated */

/* Register: SIMIF_EVENTS_DMA_RX_DONE */
/* Description: DMA Tx  operation finished */

/* Bit 0 : DMA Tx  operation finished */
#define SIMIF_EVENTS_DMA_RX_DONE_EVENTS_DMA_RX_DONE_Pos (0UL) /*!< Position of EVENTS_DMA_RX_DONE field. */
#define SIMIF_EVENTS_DMA_RX_DONE_EVENTS_DMA_RX_DONE_Msk (0x1UL << SIMIF_EVENTS_DMA_RX_DONE_EVENTS_DMA_RX_DONE_Pos) /*!< Bit mask of EVENTS_DMA_RX_DONE field. */
#define SIMIF_EVENTS_DMA_RX_DONE_EVENTS_DMA_RX_DONE_NotGenerated (0UL) /*!< Event not generated */
#define SIMIF_EVENTS_DMA_RX_DONE_EVENTS_DMA_RX_DONE_Generated (1UL) /*!< Event generated */

/* Register: SIMIF_EVENTS_DMA_TX_STARTED */
/* Description: DMA Tx operation started */

/* Bit 0 : DMA Tx operation started */
#define SIMIF_EVENTS_DMA_TX_STARTED_EVENTS_DMA_TX_STARTED_Pos (0UL) /*!< Position of EVENTS_DMA_TX_STARTED field. */
#define SIMIF_EVENTS_DMA_TX_STARTED_EVENTS_DMA_TX_STARTED_Msk (0x1UL << SIMIF_EVENTS_DMA_TX_STARTED_EVENTS_DMA_TX_STARTED_Pos) /*!< Bit mask of EVENTS_DMA_TX_STARTED field. */
#define SIMIF_EVENTS_DMA_TX_STARTED_EVENTS_DMA_TX_STARTED_NotGenerated (0UL) /*!< Event not generated */
#define SIMIF_EVENTS_DMA_TX_STARTED_EVENTS_DMA_TX_STARTED_Generated (1UL) /*!< Event generated */

/* Register: SIMIF_EVENTS_DMA_TX_DONE */
/* Description: DMA Tx operation finished */

/* Bit 0 : DMA Tx operation finished */
#define SIMIF_EVENTS_DMA_TX_DONE_EVENTS_DMA_TX_DONE_Pos (0UL) /*!< Position of EVENTS_DMA_TX_DONE field. */
#define SIMIF_EVENTS_DMA_TX_DONE_EVENTS_DMA_TX_DONE_Msk (0x1UL << SIMIF_EVENTS_DMA_TX_DONE_EVENTS_DMA_TX_DONE_Pos) /*!< Bit mask of EVENTS_DMA_TX_DONE field. */
#define SIMIF_EVENTS_DMA_TX_DONE_EVENTS_DMA_TX_DONE_NotGenerated (0UL) /*!< Event not generated */
#define SIMIF_EVENTS_DMA_TX_DONE_EVENTS_DMA_TX_DONE_Generated (1UL) /*!< Event generated */

/* Register: SIMIF_EVENTS_INVALID_CONVENTION */
/* Description: ATR.TS convention not recognized */

/* Bit 0 : ATR.TS convention not recognized */
#define SIMIF_EVENTS_INVALID_CONVENTION_EVENTS_INVALID_CONVENTION_Pos (0UL) /*!< Position of EVENTS_INVALID_CONVENTION field. */
#define SIMIF_EVENTS_INVALID_CONVENTION_EVENTS_INVALID_CONVENTION_Msk (0x1UL << SIMIF_EVENTS_INVALID_CONVENTION_EVENTS_INVALID_CONVENTION_Pos) /*!< Bit mask of EVENTS_INVALID_CONVENTION field. */
#define SIMIF_EVENTS_INVALID_CONVENTION_EVENTS_INVALID_CONVENTION_NotGenerated (0UL) /*!< Event not generated */
#define SIMIF_EVENTS_INVALID_CONVENTION_EVENTS_INVALID_CONVENTION_Generated (1UL) /*!< Event generated */

/* Register: SIMIF_EVENTS_PARITY_ERROR */
/* Description: Rx byte parity error */

/* Bit 0 : Rx byte parity error */
#define SIMIF_EVENTS_PARITY_ERROR_EVENTS_PARITY_ERROR_Pos (0UL) /*!< Position of EVENTS_PARITY_ERROR field. */
#define SIMIF_EVENTS_PARITY_ERROR_EVENTS_PARITY_ERROR_Msk (0x1UL << SIMIF_EVENTS_PARITY_ERROR_EVENTS_PARITY_ERROR_Pos) /*!< Bit mask of EVENTS_PARITY_ERROR field. */
#define SIMIF_EVENTS_PARITY_ERROR_EVENTS_PARITY_ERROR_NotGenerated (0UL) /*!< Event not generated */
#define SIMIF_EVENTS_PARITY_ERROR_EVENTS_PARITY_ERROR_Generated (1UL) /*!< Event generated */

/* Register: SIMIF_EVENTS_ATR_TIMEOUT */
/* Description: No ATR between 400 and 40000 sim clock cycles */

/* Bit 0 : No ATR between 400 and 40000 sim clock cycles */
#define SIMIF_EVENTS_ATR_TIMEOUT_EVENTS_ATR_TIMEOUT_Pos (0UL) /*!< Position of EVENTS_ATR_TIMEOUT field. */
#define SIMIF_EVENTS_ATR_TIMEOUT_EVENTS_ATR_TIMEOUT_Msk (0x1UL << SIMIF_EVENTS_ATR_TIMEOUT_EVENTS_ATR_TIMEOUT_Pos) /*!< Bit mask of EVENTS_ATR_TIMEOUT field. */
#define SIMIF_EVENTS_ATR_TIMEOUT_EVENTS_ATR_TIMEOUT_NotGenerated (0UL) /*!< Event not generated */
#define SIMIF_EVENTS_ATR_TIMEOUT_EVENTS_ATR_TIMEOUT_Generated (1UL) /*!< Event generated */

/* Register: SIMIF_EVENTS_CW_TIMEOUT */
/* Description: T=1 character wait timeout */

/* Bit 0 : T=1 character wait timeout */
#define SIMIF_EVENTS_CW_TIMEOUT_EVENTS_CW_TIMEOUT_Pos (0UL) /*!< Position of EVENTS_CW_TIMEOUT field. */
#define SIMIF_EVENTS_CW_TIMEOUT_EVENTS_CW_TIMEOUT_Msk (0x1UL << SIMIF_EVENTS_CW_TIMEOUT_EVENTS_CW_TIMEOUT_Pos) /*!< Bit mask of EVENTS_CW_TIMEOUT field. */
#define SIMIF_EVENTS_CW_TIMEOUT_EVENTS_CW_TIMEOUT_NotGenerated (0UL) /*!< Event not generated */
#define SIMIF_EVENTS_CW_TIMEOUT_EVENTS_CW_TIMEOUT_Generated (1UL) /*!< Event generated */

/* Register: SIMIF_EVENTS_BW_TIMEOUT */
/* Description: Block Wait timeout */

/* Bit 0 : Block Wait timeout */
#define SIMIF_EVENTS_BW_TIMEOUT_EVENTS_BW_TIMEOUT_Pos (0UL) /*!< Position of EVENTS_BW_TIMEOUT field. */
#define SIMIF_EVENTS_BW_TIMEOUT_EVENTS_BW_TIMEOUT_Msk (0x1UL << SIMIF_EVENTS_BW_TIMEOUT_EVENTS_BW_TIMEOUT_Pos) /*!< Bit mask of EVENTS_BW_TIMEOUT field. */
#define SIMIF_EVENTS_BW_TIMEOUT_EVENTS_BW_TIMEOUT_NotGenerated (0UL) /*!< Event not generated */
#define SIMIF_EVENTS_BW_TIMEOUT_EVENTS_BW_TIMEOUT_Generated (1UL) /*!< Event generated */

/* Register: SIMIF_EVENTS_SW1SW2 */
/* Description: SW1 and SW2 bytes  received */

/* Bit 0 : SW1 and SW2 bytes  received */
#define SIMIF_EVENTS_SW1SW2_EVENTS_SW1SW2_Pos (0UL) /*!< Position of EVENTS_SW1SW2 field. */
#define SIMIF_EVENTS_SW1SW2_EVENTS_SW1SW2_Msk (0x1UL << SIMIF_EVENTS_SW1SW2_EVENTS_SW1SW2_Pos) /*!< Bit mask of EVENTS_SW1SW2 field. */
#define SIMIF_EVENTS_SW1SW2_EVENTS_SW1SW2_NotGenerated (0UL) /*!< Event not generated */
#define SIMIF_EVENTS_SW1SW2_EVENTS_SW1SW2_Generated (1UL) /*!< Event generated */

/* Register: SIMIF_EVENTS_RESET */
/* Description: Everything reset */

/* Bit 0 : Everything reset */
#define SIMIF_EVENTS_RESET_EVENTS_RESET_Pos (0UL) /*!< Position of EVENTS_RESET field. */
#define SIMIF_EVENTS_RESET_EVENTS_RESET_Msk (0x1UL << SIMIF_EVENTS_RESET_EVENTS_RESET_Pos) /*!< Bit mask of EVENTS_RESET field. */
#define SIMIF_EVENTS_RESET_EVENTS_RESET_NotGenerated (0UL) /*!< Event not generated */
#define SIMIF_EVENTS_RESET_EVENTS_RESET_Generated (1UL) /*!< Event generated */

/* Register: SIMIF_EVENTS_INS */
/* Description: T=0 procedure byte  INS received */

/* Bit 0 : T=0 procedure byte  INS received */
#define SIMIF_EVENTS_INS_EVENTS_INS_Pos (0UL) /*!< Position of EVENTS_INS field. */
#define SIMIF_EVENTS_INS_EVENTS_INS_Msk (0x1UL << SIMIF_EVENTS_INS_EVENTS_INS_Pos) /*!< Bit mask of EVENTS_INS field. */
#define SIMIF_EVENTS_INS_EVENTS_INS_NotGenerated (0UL) /*!< Event not generated */
#define SIMIF_EVENTS_INS_EVENTS_INS_Generated (1UL) /*!< Event generated */

/* Register: SIMIF_EVENTS_NINS */
/* Description: T=0 procedure byte  !INS received */

/* Bit 0 : T=0 procedure byte  !INS received */
#define SIMIF_EVENTS_NINS_EVENTS_NINS_Pos (0UL) /*!< Position of EVENTS_NINS field. */
#define SIMIF_EVENTS_NINS_EVENTS_NINS_Msk (0x1UL << SIMIF_EVENTS_NINS_EVENTS_NINS_Pos) /*!< Bit mask of EVENTS_NINS field. */
#define SIMIF_EVENTS_NINS_EVENTS_NINS_NotGenerated (0UL) /*!< Event not generated */
#define SIMIF_EVENTS_NINS_EVENTS_NINS_Generated (1UL) /*!< Event generated */

/* Register: SIMIF_EVENTS_ERROR */
/* Description: Error response */

/* Bit 0 : Error response */
#define SIMIF_EVENTS_ERROR_EVENTS_ERROR_Pos (0UL) /*!< Position of EVENTS_ERROR field. */
#define SIMIF_EVENTS_ERROR_EVENTS_ERROR_Msk (0x1UL << SIMIF_EVENTS_ERROR_EVENTS_ERROR_Pos) /*!< Bit mask of EVENTS_ERROR field. */
#define SIMIF_EVENTS_ERROR_EVENTS_ERROR_NotGenerated (0UL) /*!< Event not generated */
#define SIMIF_EVENTS_ERROR_EVENTS_ERROR_Generated (1UL) /*!< Event generated */

/* Register: SIMIF_EVENTS_READY_TX */
/* Description: Byte sent after START_WRITE_FROM_REG */

/* Bit 0 : Byte sent after START_WRITE_FROM_REG */
#define SIMIF_EVENTS_READY_TX_EVENTS_READY_TX_Pos (0UL) /*!< Position of EVENTS_READY_TX field. */
#define SIMIF_EVENTS_READY_TX_EVENTS_READY_TX_Msk (0x1UL << SIMIF_EVENTS_READY_TX_EVENTS_READY_TX_Pos) /*!< Bit mask of EVENTS_READY_TX field. */
#define SIMIF_EVENTS_READY_TX_EVENTS_READY_TX_NotGenerated (0UL) /*!< Event not generated */
#define SIMIF_EVENTS_READY_TX_EVENTS_READY_TX_Generated (1UL) /*!< Event generated */

/* Register: SIMIF_EVENTS_RX_DATA_READY */
/* Description: Byte received after START_READ_TO_REG */

/* Bit 0 : Byte received after START_READ_TO_REG */
#define SIMIF_EVENTS_RX_DATA_READY_EVENTS_RX_DATA_READY_Pos (0UL) /*!< Position of EVENTS_RX_DATA_READY field. */
#define SIMIF_EVENTS_RX_DATA_READY_EVENTS_RX_DATA_READY_Msk (0x1UL << SIMIF_EVENTS_RX_DATA_READY_EVENTS_RX_DATA_READY_Pos) /*!< Bit mask of EVENTS_RX_DATA_READY field. */
#define SIMIF_EVENTS_RX_DATA_READY_EVENTS_RX_DATA_READY_NotGenerated (0UL) /*!< Event not generated */
#define SIMIF_EVENTS_RX_DATA_READY_EVENTS_RX_DATA_READY_Generated (1UL) /*!< Event generated */

/* Register: SIMIF_EVENTS_T1_RX_OVERRUN */
/* Description: Unexpected bytes received after DMA RX[0...N], SW1SW2 in T=1 */

/* Bit 0 : Unexpected bytes received after DMA RX[0...N], SW1SW2 in T=1 */
#define SIMIF_EVENTS_T1_RX_OVERRUN_EVENTS_T1_RX_OVERRUN_Pos (0UL) /*!< Position of EVENTS_T1_RX_OVERRUN field. */
#define SIMIF_EVENTS_T1_RX_OVERRUN_EVENTS_T1_RX_OVERRUN_Msk (0x1UL << SIMIF_EVENTS_T1_RX_OVERRUN_EVENTS_T1_RX_OVERRUN_Pos) /*!< Bit mask of EVENTS_T1_RX_OVERRUN field. */
#define SIMIF_EVENTS_T1_RX_OVERRUN_EVENTS_T1_RX_OVERRUN_NotGenerated (0UL) /*!< Event not generated */
#define SIMIF_EVENTS_T1_RX_OVERRUN_EVENTS_T1_RX_OVERRUN_Generated (1UL) /*!< Event generated */

/* Register: SIMIF_EVENTS_T1_TX_ABORTED */
/* Description: T=1 card responded with S(ABORT request) */

/* Bit 0 : T=1 card responded with S(ABORT request) */
#define SIMIF_EVENTS_T1_TX_ABORTED_EVENTS_T1_TX_ABORTED_Pos (0UL) /*!< Position of EVENTS_T1_TX_ABORTED field. */
#define SIMIF_EVENTS_T1_TX_ABORTED_EVENTS_T1_TX_ABORTED_Msk (0x1UL << SIMIF_EVENTS_T1_TX_ABORTED_EVENTS_T1_TX_ABORTED_Pos) /*!< Bit mask of EVENTS_T1_TX_ABORTED field. */
#define SIMIF_EVENTS_T1_TX_ABORTED_EVENTS_T1_TX_ABORTED_NotGenerated (0UL) /*!< Event not generated */
#define SIMIF_EVENTS_T1_TX_ABORTED_EVENTS_T1_TX_ABORTED_Generated (1UL) /*!< Event generated */

/* Register: SIMIF_EVENTS_T1_NON_I_BLOCK */
/* Description: T=1 unrecognized (S or R) block (with correct LRC) stored in RX_DATA */

/* Bit 0 : T=1 unrecognized (S or R) block (with correct LRC) stored in RX_DATA */
#define SIMIF_EVENTS_T1_NON_I_BLOCK_EVENTS_T1_NON_I_BLOCK_Pos (0UL) /*!< Position of EVENTS_T1_NON_I_BLOCK field. */
#define SIMIF_EVENTS_T1_NON_I_BLOCK_EVENTS_T1_NON_I_BLOCK_Msk (0x1UL << SIMIF_EVENTS_T1_NON_I_BLOCK_EVENTS_T1_NON_I_BLOCK_Pos) /*!< Bit mask of EVENTS_T1_NON_I_BLOCK field. */
#define SIMIF_EVENTS_T1_NON_I_BLOCK_EVENTS_T1_NON_I_BLOCK_NotGenerated (0UL) /*!< Event not generated */
#define SIMIF_EVENTS_T1_NON_I_BLOCK_EVENTS_T1_NON_I_BLOCK_Generated (1UL) /*!< Event generated */

/* Register: SIMIF_EVENTS_T1_LEN_ERROR */
/* Description: T=1 LEN = 255 */

/* Bit 0 : T=1 LEN = 255 */
#define SIMIF_EVENTS_T1_LEN_ERROR_EVENTS_T1_LEN_ERROR_Pos (0UL) /*!< Position of EVENTS_T1_LEN_ERROR field. */
#define SIMIF_EVENTS_T1_LEN_ERROR_EVENTS_T1_LEN_ERROR_Msk (0x1UL << SIMIF_EVENTS_T1_LEN_ERROR_EVENTS_T1_LEN_ERROR_Pos) /*!< Bit mask of EVENTS_T1_LEN_ERROR field. */
#define SIMIF_EVENTS_T1_LEN_ERROR_EVENTS_T1_LEN_ERROR_NotGenerated (0UL) /*!< Event not generated */
#define SIMIF_EVENTS_T1_LEN_ERROR_EVENTS_T1_LEN_ERROR_Generated (1UL) /*!< Event generated */

/* Register: SIMIF_EVENTS_EDC_ERROR */
/* Description: T=1 EDC error */

/* Bit 0 : T=1 EDC error */
#define SIMIF_EVENTS_EDC_ERROR_EVENTS_EDC_ERROR_Pos (0UL) /*!< Position of EVENTS_EDC_ERROR field. */
#define SIMIF_EVENTS_EDC_ERROR_EVENTS_EDC_ERROR_Msk (0x1UL << SIMIF_EVENTS_EDC_ERROR_EVENTS_EDC_ERROR_Pos) /*!< Bit mask of EVENTS_EDC_ERROR field. */
#define SIMIF_EVENTS_EDC_ERROR_EVENTS_EDC_ERROR_NotGenerated (0UL) /*!< Event not generated */
#define SIMIF_EVENTS_EDC_ERROR_EVENTS_EDC_ERROR_Generated (1UL) /*!< Event generated */

/* Register: SIMIF_EVENTS_NAD_ERROR */
/* Description: T=1 NAD error */

/* Bit 0 : T=1 NAD error */
#define SIMIF_EVENTS_NAD_ERROR_EVENTS_NAD_ERROR_Pos (0UL) /*!< Position of EVENTS_NAD_ERROR field. */
#define SIMIF_EVENTS_NAD_ERROR_EVENTS_NAD_ERROR_Msk (0x1UL << SIMIF_EVENTS_NAD_ERROR_EVENTS_NAD_ERROR_Pos) /*!< Bit mask of EVENTS_NAD_ERROR field. */
#define SIMIF_EVENTS_NAD_ERROR_EVENTS_NAD_ERROR_NotGenerated (0UL) /*!< Event not generated */
#define SIMIF_EVENTS_NAD_ERROR_EVENTS_NAD_ERROR_Generated (1UL) /*!< Event generated */

/* Register: SIMIF_EVENTS_EVENTS_ERROR_COUNT_MAX */
/* Description: number of unsuccessful rx or tx operations equals max value */

/* Bit 0 : number of unsuccessful rx or tx operations equals max value */
#define SIMIF_EVENTS_EVENTS_ERROR_COUNT_MAX_EVENTS_EVENTS_ERROR_COUNT_MAX_Pos (0UL) /*!< Position of EVENTS_EVENTS_ERROR_COUNT_MAX field. */
#define SIMIF_EVENTS_EVENTS_ERROR_COUNT_MAX_EVENTS_EVENTS_ERROR_COUNT_MAX_Msk (0x1UL << SIMIF_EVENTS_EVENTS_ERROR_COUNT_MAX_EVENTS_EVENTS_ERROR_COUNT_MAX_Pos) /*!< Bit mask of EVENTS_EVENTS_ERROR_COUNT_MAX field. */
#define SIMIF_EVENTS_EVENTS_ERROR_COUNT_MAX_EVENTS_EVENTS_ERROR_COUNT_MAX_NotGenerated (0UL) /*!< Event not generated */
#define SIMIF_EVENTS_EVENTS_ERROR_COUNT_MAX_EVENTS_EVENTS_ERROR_COUNT_MAX_Generated (1UL) /*!< Event generated */

/* Register: SIMIF_EVENTS_EVENTS_T1_RX_MORE */
/* Description: More bit high in PCB of Rx T=1 I block */

/* Bit 0 : More bit high in PCB of Rx T=1 I block */
#define SIMIF_EVENTS_EVENTS_T1_RX_MORE_EVENTS_EVENTS_T1_RX_MORE_Pos (0UL) /*!< Position of EVENTS_EVENTS_T1_RX_MORE field. */
#define SIMIF_EVENTS_EVENTS_T1_RX_MORE_EVENTS_EVENTS_T1_RX_MORE_Msk (0x1UL << SIMIF_EVENTS_EVENTS_T1_RX_MORE_EVENTS_EVENTS_T1_RX_MORE_Pos) /*!< Bit mask of EVENTS_EVENTS_T1_RX_MORE field. */
#define SIMIF_EVENTS_EVENTS_T1_RX_MORE_EVENTS_EVENTS_T1_RX_MORE_NotGenerated (0UL) /*!< Event not generated */
#define SIMIF_EVENTS_EVENTS_T1_RX_MORE_EVENTS_EVENTS_T1_RX_MORE_Generated (1UL) /*!< Event generated */

/* Register: SIMIF_SHORTS */
/* Description: Shortcuts between local events and tasks */

/* Bit 4 : Shortcut between event DMA_TX_DONE and task PROTOCOLNONSET */
#define SIMIF_SHORTS_DMA_TX_DONE_PROTOCOLNONSET_Pos (4UL) /*!< Position of DMA_TX_DONE_PROTOCOLNONSET field. */
#define SIMIF_SHORTS_DMA_TX_DONE_PROTOCOLNONSET_Msk (0x1UL << SIMIF_SHORTS_DMA_TX_DONE_PROTOCOLNONSET_Pos) /*!< Bit mask of DMA_TX_DONE_PROTOCOLNONSET field. */
#define SIMIF_SHORTS_DMA_TX_DONE_PROTOCOLNONSET_Disabled (0UL) /*!< Disable shortcut */
#define SIMIF_SHORTS_DMA_TX_DONE_PROTOCOLNONSET_Enabled (1UL) /*!< Enable shortcut */

/* Bit 3 : Shortcut between event DMA_TX_DONE and task PROTOCOLT1SET */
#define SIMIF_SHORTS_DMA_TX_DONE_PROTOCOLT1SET_Pos (3UL) /*!< Position of DMA_TX_DONE_PROTOCOLT1SET field. */
#define SIMIF_SHORTS_DMA_TX_DONE_PROTOCOLT1SET_Msk (0x1UL << SIMIF_SHORTS_DMA_TX_DONE_PROTOCOLT1SET_Pos) /*!< Bit mask of DMA_TX_DONE_PROTOCOLT1SET field. */
#define SIMIF_SHORTS_DMA_TX_DONE_PROTOCOLT1SET_Disabled (0UL) /*!< Disable shortcut */
#define SIMIF_SHORTS_DMA_TX_DONE_PROTOCOLT1SET_Enabled (1UL) /*!< Enable shortcut */

/* Bit 2 : Shortcut between event DMA_TX_DONE and task PROTOCOLT0SET */
#define SIMIF_SHORTS_DMA_TX_DONE_PROTOCOLT0SET_Pos (2UL) /*!< Position of DMA_TX_DONE_PROTOCOLT0SET field. */
#define SIMIF_SHORTS_DMA_TX_DONE_PROTOCOLT0SET_Msk (0x1UL << SIMIF_SHORTS_DMA_TX_DONE_PROTOCOLT0SET_Pos) /*!< Bit mask of DMA_TX_DONE_PROTOCOLT0SET field. */
#define SIMIF_SHORTS_DMA_TX_DONE_PROTOCOLT0SET_Disabled (0UL) /*!< Disable shortcut */
#define SIMIF_SHORTS_DMA_TX_DONE_PROTOCOLT0SET_Enabled (1UL) /*!< Enable shortcut */

/* Bit 1 : Shortcut between event DMA_TX_DONE and task UARTRX */
#define SIMIF_SHORTS_DMA_TX_DONE_UARTRX_Pos (1UL) /*!< Position of DMA_TX_DONE_UARTRX field. */
#define SIMIF_SHORTS_DMA_TX_DONE_UARTRX_Msk (0x1UL << SIMIF_SHORTS_DMA_TX_DONE_UARTRX_Pos) /*!< Bit mask of DMA_TX_DONE_UARTRX field. */
#define SIMIF_SHORTS_DMA_TX_DONE_UARTRX_Disabled (0UL) /*!< Disable shortcut */
#define SIMIF_SHORTS_DMA_TX_DONE_UARTRX_Enabled (1UL) /*!< Enable shortcut */

/* Bit 0 : Shortcut between event DMA_TX_DONE and task DMASTARTRX */
#define SIMIF_SHORTS_DMA_TX_DONE_DMASTARTRX_Pos (0UL) /*!< Position of DMA_TX_DONE_DMASTARTRX field. */
#define SIMIF_SHORTS_DMA_TX_DONE_DMASTARTRX_Msk (0x1UL << SIMIF_SHORTS_DMA_TX_DONE_DMASTARTRX_Pos) /*!< Bit mask of DMA_TX_DONE_DMASTARTRX field. */
#define SIMIF_SHORTS_DMA_TX_DONE_DMASTARTRX_Disabled (0UL) /*!< Disable shortcut */
#define SIMIF_SHORTS_DMA_TX_DONE_DMASTARTRX_Enabled (1UL) /*!< Enable shortcut */

/* Register: SIMIF_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 23 : Enable or disable interrupt for event T1_RX_MORE */
#define SIMIF_INTEN_T1_RX_MORE_Pos (23UL) /*!< Position of T1_RX_MORE field. */
#define SIMIF_INTEN_T1_RX_MORE_Msk (0x1UL << SIMIF_INTEN_T1_RX_MORE_Pos) /*!< Bit mask of T1_RX_MORE field. */
#define SIMIF_INTEN_T1_RX_MORE_Disabled (0UL) /*!< Disable */
#define SIMIF_INTEN_T1_RX_MORE_Enabled (1UL) /*!< Enable */

/* Bit 22 : Enable or disable interrupt for event ERROR_COUNT_MAX */
#define SIMIF_INTEN_ERROR_COUNT_MAX_Pos (22UL) /*!< Position of ERROR_COUNT_MAX field. */
#define SIMIF_INTEN_ERROR_COUNT_MAX_Msk (0x1UL << SIMIF_INTEN_ERROR_COUNT_MAX_Pos) /*!< Bit mask of ERROR_COUNT_MAX field. */
#define SIMIF_INTEN_ERROR_COUNT_MAX_Disabled (0UL) /*!< Disable */
#define SIMIF_INTEN_ERROR_COUNT_MAX_Enabled (1UL) /*!< Enable */

/* Bit 21 : Enable or disable interrupt for event NAD_ERROR */
#define SIMIF_INTEN_NAD_ERROR_Pos (21UL) /*!< Position of NAD_ERROR field. */
#define SIMIF_INTEN_NAD_ERROR_Msk (0x1UL << SIMIF_INTEN_NAD_ERROR_Pos) /*!< Bit mask of NAD_ERROR field. */
#define SIMIF_INTEN_NAD_ERROR_Disabled (0UL) /*!< Disable */
#define SIMIF_INTEN_NAD_ERROR_Enabled (1UL) /*!< Enable */

/* Bit 20 : Enable or disable interrupt for event EDC_ERROR */
#define SIMIF_INTEN_EDC_ERROR_Pos (20UL) /*!< Position of EDC_ERROR field. */
#define SIMIF_INTEN_EDC_ERROR_Msk (0x1UL << SIMIF_INTEN_EDC_ERROR_Pos) /*!< Bit mask of EDC_ERROR field. */
#define SIMIF_INTEN_EDC_ERROR_Disabled (0UL) /*!< Disable */
#define SIMIF_INTEN_EDC_ERROR_Enabled (1UL) /*!< Enable */

/* Bit 19 : Enable or disable interrupt for event T1_LEN_ERROR */
#define SIMIF_INTEN_T1_LEN_ERROR_Pos (19UL) /*!< Position of T1_LEN_ERROR field. */
#define SIMIF_INTEN_T1_LEN_ERROR_Msk (0x1UL << SIMIF_INTEN_T1_LEN_ERROR_Pos) /*!< Bit mask of T1_LEN_ERROR field. */
#define SIMIF_INTEN_T1_LEN_ERROR_Disabled (0UL) /*!< Disable */
#define SIMIF_INTEN_T1_LEN_ERROR_Enabled (1UL) /*!< Enable */

/* Bit 18 : Enable or disable interrupt for event T1_NON_I_BLOCK */
#define SIMIF_INTEN_T1_NON_I_BLOCK_Pos (18UL) /*!< Position of T1_NON_I_BLOCK field. */
#define SIMIF_INTEN_T1_NON_I_BLOCK_Msk (0x1UL << SIMIF_INTEN_T1_NON_I_BLOCK_Pos) /*!< Bit mask of T1_NON_I_BLOCK field. */
#define SIMIF_INTEN_T1_NON_I_BLOCK_Disabled (0UL) /*!< Disable */
#define SIMIF_INTEN_T1_NON_I_BLOCK_Enabled (1UL) /*!< Enable */

/* Bit 17 : Enable or disable interrupt for event T1_TX_ABORTED */
#define SIMIF_INTEN_T1_TX_ABORTED_Pos (17UL) /*!< Position of T1_TX_ABORTED field. */
#define SIMIF_INTEN_T1_TX_ABORTED_Msk (0x1UL << SIMIF_INTEN_T1_TX_ABORTED_Pos) /*!< Bit mask of T1_TX_ABORTED field. */
#define SIMIF_INTEN_T1_TX_ABORTED_Disabled (0UL) /*!< Disable */
#define SIMIF_INTEN_T1_TX_ABORTED_Enabled (1UL) /*!< Enable */

/* Bit 16 : Enable or disable interrupt for event T1_RX_OVERRUN */
#define SIMIF_INTEN_T1_RX_OVERRUN_Pos (16UL) /*!< Position of T1_RX_OVERRUN field. */
#define SIMIF_INTEN_T1_RX_OVERRUN_Msk (0x1UL << SIMIF_INTEN_T1_RX_OVERRUN_Pos) /*!< Bit mask of T1_RX_OVERRUN field. */
#define SIMIF_INTEN_T1_RX_OVERRUN_Disabled (0UL) /*!< Disable */
#define SIMIF_INTEN_T1_RX_OVERRUN_Enabled (1UL) /*!< Enable */

/* Bit 15 : Enable or disable interrupt for event RX_DATA_READY */
#define SIMIF_INTEN_RX_DATA_READY_Pos (15UL) /*!< Position of RX_DATA_READY field. */
#define SIMIF_INTEN_RX_DATA_READY_Msk (0x1UL << SIMIF_INTEN_RX_DATA_READY_Pos) /*!< Bit mask of RX_DATA_READY field. */
#define SIMIF_INTEN_RX_DATA_READY_Disabled (0UL) /*!< Disable */
#define SIMIF_INTEN_RX_DATA_READY_Enabled (1UL) /*!< Enable */

/* Bit 14 : Enable or disable interrupt for event READY_TX */
#define SIMIF_INTEN_READY_TX_Pos (14UL) /*!< Position of READY_TX field. */
#define SIMIF_INTEN_READY_TX_Msk (0x1UL << SIMIF_INTEN_READY_TX_Pos) /*!< Bit mask of READY_TX field. */
#define SIMIF_INTEN_READY_TX_Disabled (0UL) /*!< Disable */
#define SIMIF_INTEN_READY_TX_Enabled (1UL) /*!< Enable */

/* Bit 13 : Enable or disable interrupt for event ERROR */
#define SIMIF_INTEN_ERROR_Pos (13UL) /*!< Position of ERROR field. */
#define SIMIF_INTEN_ERROR_Msk (0x1UL << SIMIF_INTEN_ERROR_Pos) /*!< Bit mask of ERROR field. */
#define SIMIF_INTEN_ERROR_Disabled (0UL) /*!< Disable */
#define SIMIF_INTEN_ERROR_Enabled (1UL) /*!< Enable */

/* Bit 12 : Enable or disable interrupt for event NINS */
#define SIMIF_INTEN_NINS_Pos (12UL) /*!< Position of NINS field. */
#define SIMIF_INTEN_NINS_Msk (0x1UL << SIMIF_INTEN_NINS_Pos) /*!< Bit mask of NINS field. */
#define SIMIF_INTEN_NINS_Disabled (0UL) /*!< Disable */
#define SIMIF_INTEN_NINS_Enabled (1UL) /*!< Enable */

/* Bit 11 : Enable or disable interrupt for event INS */
#define SIMIF_INTEN_INS_Pos (11UL) /*!< Position of INS field. */
#define SIMIF_INTEN_INS_Msk (0x1UL << SIMIF_INTEN_INS_Pos) /*!< Bit mask of INS field. */
#define SIMIF_INTEN_INS_Disabled (0UL) /*!< Disable */
#define SIMIF_INTEN_INS_Enabled (1UL) /*!< Enable */

/* Bit 10 : Enable or disable interrupt for event RESET */
#define SIMIF_INTEN_RESET_Pos (10UL) /*!< Position of RESET field. */
#define SIMIF_INTEN_RESET_Msk (0x1UL << SIMIF_INTEN_RESET_Pos) /*!< Bit mask of RESET field. */
#define SIMIF_INTEN_RESET_Disabled (0UL) /*!< Disable */
#define SIMIF_INTEN_RESET_Enabled (1UL) /*!< Enable */

/* Bit 9 : Enable or disable interrupt for event SW1SW2 */
#define SIMIF_INTEN_SW1SW2_Pos (9UL) /*!< Position of SW1SW2 field. */
#define SIMIF_INTEN_SW1SW2_Msk (0x1UL << SIMIF_INTEN_SW1SW2_Pos) /*!< Bit mask of SW1SW2 field. */
#define SIMIF_INTEN_SW1SW2_Disabled (0UL) /*!< Disable */
#define SIMIF_INTEN_SW1SW2_Enabled (1UL) /*!< Enable */

/* Bit 8 : Enable or disable interrupt for event BW_TIMEOUT */
#define SIMIF_INTEN_BW_TIMEOUT_Pos (8UL) /*!< Position of BW_TIMEOUT field. */
#define SIMIF_INTEN_BW_TIMEOUT_Msk (0x1UL << SIMIF_INTEN_BW_TIMEOUT_Pos) /*!< Bit mask of BW_TIMEOUT field. */
#define SIMIF_INTEN_BW_TIMEOUT_Disabled (0UL) /*!< Disable */
#define SIMIF_INTEN_BW_TIMEOUT_Enabled (1UL) /*!< Enable */

/* Bit 7 : Enable or disable interrupt for event CW_TIMEOUT */
#define SIMIF_INTEN_CW_TIMEOUT_Pos (7UL) /*!< Position of CW_TIMEOUT field. */
#define SIMIF_INTEN_CW_TIMEOUT_Msk (0x1UL << SIMIF_INTEN_CW_TIMEOUT_Pos) /*!< Bit mask of CW_TIMEOUT field. */
#define SIMIF_INTEN_CW_TIMEOUT_Disabled (0UL) /*!< Disable */
#define SIMIF_INTEN_CW_TIMEOUT_Enabled (1UL) /*!< Enable */

/* Bit 6 : Enable or disable interrupt for event ATR_TIMEOUT */
#define SIMIF_INTEN_ATR_TIMEOUT_Pos (6UL) /*!< Position of ATR_TIMEOUT field. */
#define SIMIF_INTEN_ATR_TIMEOUT_Msk (0x1UL << SIMIF_INTEN_ATR_TIMEOUT_Pos) /*!< Bit mask of ATR_TIMEOUT field. */
#define SIMIF_INTEN_ATR_TIMEOUT_Disabled (0UL) /*!< Disable */
#define SIMIF_INTEN_ATR_TIMEOUT_Enabled (1UL) /*!< Enable */

/* Bit 5 : Enable or disable interrupt for event PARITY_ERROR */
#define SIMIF_INTEN_PARITY_ERROR_Pos (5UL) /*!< Position of PARITY_ERROR field. */
#define SIMIF_INTEN_PARITY_ERROR_Msk (0x1UL << SIMIF_INTEN_PARITY_ERROR_Pos) /*!< Bit mask of PARITY_ERROR field. */
#define SIMIF_INTEN_PARITY_ERROR_Disabled (0UL) /*!< Disable */
#define SIMIF_INTEN_PARITY_ERROR_Enabled (1UL) /*!< Enable */

/* Bit 4 : Enable or disable interrupt for event INVALID_CONVENTION */
#define SIMIF_INTEN_INVALID_CONVENTION_Pos (4UL) /*!< Position of INVALID_CONVENTION field. */
#define SIMIF_INTEN_INVALID_CONVENTION_Msk (0x1UL << SIMIF_INTEN_INVALID_CONVENTION_Pos) /*!< Bit mask of INVALID_CONVENTION field. */
#define SIMIF_INTEN_INVALID_CONVENTION_Disabled (0UL) /*!< Disable */
#define SIMIF_INTEN_INVALID_CONVENTION_Enabled (1UL) /*!< Enable */

/* Bit 3 : Enable or disable interrupt for event DMA_TX_DONE */
#define SIMIF_INTEN_DMA_TX_DONE_Pos (3UL) /*!< Position of DMA_TX_DONE field. */
#define SIMIF_INTEN_DMA_TX_DONE_Msk (0x1UL << SIMIF_INTEN_DMA_TX_DONE_Pos) /*!< Bit mask of DMA_TX_DONE field. */
#define SIMIF_INTEN_DMA_TX_DONE_Disabled (0UL) /*!< Disable */
#define SIMIF_INTEN_DMA_TX_DONE_Enabled (1UL) /*!< Enable */

/* Bit 2 : Enable or disable interrupt for event DMA_TX_STARTED */
#define SIMIF_INTEN_DMA_TX_STARTED_Pos (2UL) /*!< Position of DMA_TX_STARTED field. */
#define SIMIF_INTEN_DMA_TX_STARTED_Msk (0x1UL << SIMIF_INTEN_DMA_TX_STARTED_Pos) /*!< Bit mask of DMA_TX_STARTED field. */
#define SIMIF_INTEN_DMA_TX_STARTED_Disabled (0UL) /*!< Disable */
#define SIMIF_INTEN_DMA_TX_STARTED_Enabled (1UL) /*!< Enable */

/* Bit 1 : Enable or disable interrupt for event DMA_RX_DONE */
#define SIMIF_INTEN_DMA_RX_DONE_Pos (1UL) /*!< Position of DMA_RX_DONE field. */
#define SIMIF_INTEN_DMA_RX_DONE_Msk (0x1UL << SIMIF_INTEN_DMA_RX_DONE_Pos) /*!< Bit mask of DMA_RX_DONE field. */
#define SIMIF_INTEN_DMA_RX_DONE_Disabled (0UL) /*!< Disable */
#define SIMIF_INTEN_DMA_RX_DONE_Enabled (1UL) /*!< Enable */

/* Bit 0 : Enable or disable interrupt for event DMA_RX_STARTED */
#define SIMIF_INTEN_DMA_RX_STARTED_Pos (0UL) /*!< Position of DMA_RX_STARTED field. */
#define SIMIF_INTEN_DMA_RX_STARTED_Msk (0x1UL << SIMIF_INTEN_DMA_RX_STARTED_Pos) /*!< Bit mask of DMA_RX_STARTED field. */
#define SIMIF_INTEN_DMA_RX_STARTED_Disabled (0UL) /*!< Disable */
#define SIMIF_INTEN_DMA_RX_STARTED_Enabled (1UL) /*!< Enable */

/* Register: SIMIF_INTENSET */
/* Description: Enable interrupt */

/* Bit 23 : Write '1' to enable interrupt for event T1_RX_MORE */
#define SIMIF_INTENSET_T1_RX_MORE_Pos (23UL) /*!< Position of T1_RX_MORE field. */
#define SIMIF_INTENSET_T1_RX_MORE_Msk (0x1UL << SIMIF_INTENSET_T1_RX_MORE_Pos) /*!< Bit mask of T1_RX_MORE field. */
#define SIMIF_INTENSET_T1_RX_MORE_Disabled (0UL) /*!< Read: Disabled */
#define SIMIF_INTENSET_T1_RX_MORE_Enabled (1UL) /*!< Read: Enabled */
#define SIMIF_INTENSET_T1_RX_MORE_Set (1UL) /*!< Enable */

/* Bit 22 : Write '1' to enable interrupt for event ERROR_COUNT_MAX */
#define SIMIF_INTENSET_ERROR_COUNT_MAX_Pos (22UL) /*!< Position of ERROR_COUNT_MAX field. */
#define SIMIF_INTENSET_ERROR_COUNT_MAX_Msk (0x1UL << SIMIF_INTENSET_ERROR_COUNT_MAX_Pos) /*!< Bit mask of ERROR_COUNT_MAX field. */
#define SIMIF_INTENSET_ERROR_COUNT_MAX_Disabled (0UL) /*!< Read: Disabled */
#define SIMIF_INTENSET_ERROR_COUNT_MAX_Enabled (1UL) /*!< Read: Enabled */
#define SIMIF_INTENSET_ERROR_COUNT_MAX_Set (1UL) /*!< Enable */

/* Bit 21 : Write '1' to enable interrupt for event NAD_ERROR */
#define SIMIF_INTENSET_NAD_ERROR_Pos (21UL) /*!< Position of NAD_ERROR field. */
#define SIMIF_INTENSET_NAD_ERROR_Msk (0x1UL << SIMIF_INTENSET_NAD_ERROR_Pos) /*!< Bit mask of NAD_ERROR field. */
#define SIMIF_INTENSET_NAD_ERROR_Disabled (0UL) /*!< Read: Disabled */
#define SIMIF_INTENSET_NAD_ERROR_Enabled (1UL) /*!< Read: Enabled */
#define SIMIF_INTENSET_NAD_ERROR_Set (1UL) /*!< Enable */

/* Bit 20 : Write '1' to enable interrupt for event EDC_ERROR */
#define SIMIF_INTENSET_EDC_ERROR_Pos (20UL) /*!< Position of EDC_ERROR field. */
#define SIMIF_INTENSET_EDC_ERROR_Msk (0x1UL << SIMIF_INTENSET_EDC_ERROR_Pos) /*!< Bit mask of EDC_ERROR field. */
#define SIMIF_INTENSET_EDC_ERROR_Disabled (0UL) /*!< Read: Disabled */
#define SIMIF_INTENSET_EDC_ERROR_Enabled (1UL) /*!< Read: Enabled */
#define SIMIF_INTENSET_EDC_ERROR_Set (1UL) /*!< Enable */

/* Bit 19 : Write '1' to enable interrupt for event T1_LEN_ERROR */
#define SIMIF_INTENSET_T1_LEN_ERROR_Pos (19UL) /*!< Position of T1_LEN_ERROR field. */
#define SIMIF_INTENSET_T1_LEN_ERROR_Msk (0x1UL << SIMIF_INTENSET_T1_LEN_ERROR_Pos) /*!< Bit mask of T1_LEN_ERROR field. */
#define SIMIF_INTENSET_T1_LEN_ERROR_Disabled (0UL) /*!< Read: Disabled */
#define SIMIF_INTENSET_T1_LEN_ERROR_Enabled (1UL) /*!< Read: Enabled */
#define SIMIF_INTENSET_T1_LEN_ERROR_Set (1UL) /*!< Enable */

/* Bit 18 : Write '1' to enable interrupt for event T1_NON_I_BLOCK */
#define SIMIF_INTENSET_T1_NON_I_BLOCK_Pos (18UL) /*!< Position of T1_NON_I_BLOCK field. */
#define SIMIF_INTENSET_T1_NON_I_BLOCK_Msk (0x1UL << SIMIF_INTENSET_T1_NON_I_BLOCK_Pos) /*!< Bit mask of T1_NON_I_BLOCK field. */
#define SIMIF_INTENSET_T1_NON_I_BLOCK_Disabled (0UL) /*!< Read: Disabled */
#define SIMIF_INTENSET_T1_NON_I_BLOCK_Enabled (1UL) /*!< Read: Enabled */
#define SIMIF_INTENSET_T1_NON_I_BLOCK_Set (1UL) /*!< Enable */

/* Bit 17 : Write '1' to enable interrupt for event T1_TX_ABORTED */
#define SIMIF_INTENSET_T1_TX_ABORTED_Pos (17UL) /*!< Position of T1_TX_ABORTED field. */
#define SIMIF_INTENSET_T1_TX_ABORTED_Msk (0x1UL << SIMIF_INTENSET_T1_TX_ABORTED_Pos) /*!< Bit mask of T1_TX_ABORTED field. */
#define SIMIF_INTENSET_T1_TX_ABORTED_Disabled (0UL) /*!< Read: Disabled */
#define SIMIF_INTENSET_T1_TX_ABORTED_Enabled (1UL) /*!< Read: Enabled */
#define SIMIF_INTENSET_T1_TX_ABORTED_Set (1UL) /*!< Enable */

/* Bit 16 : Write '1' to enable interrupt for event T1_RX_OVERRUN */
#define SIMIF_INTENSET_T1_RX_OVERRUN_Pos (16UL) /*!< Position of T1_RX_OVERRUN field. */
#define SIMIF_INTENSET_T1_RX_OVERRUN_Msk (0x1UL << SIMIF_INTENSET_T1_RX_OVERRUN_Pos) /*!< Bit mask of T1_RX_OVERRUN field. */
#define SIMIF_INTENSET_T1_RX_OVERRUN_Disabled (0UL) /*!< Read: Disabled */
#define SIMIF_INTENSET_T1_RX_OVERRUN_Enabled (1UL) /*!< Read: Enabled */
#define SIMIF_INTENSET_T1_RX_OVERRUN_Set (1UL) /*!< Enable */

/* Bit 15 : Write '1' to enable interrupt for event RX_DATA_READY */
#define SIMIF_INTENSET_RX_DATA_READY_Pos (15UL) /*!< Position of RX_DATA_READY field. */
#define SIMIF_INTENSET_RX_DATA_READY_Msk (0x1UL << SIMIF_INTENSET_RX_DATA_READY_Pos) /*!< Bit mask of RX_DATA_READY field. */
#define SIMIF_INTENSET_RX_DATA_READY_Disabled (0UL) /*!< Read: Disabled */
#define SIMIF_INTENSET_RX_DATA_READY_Enabled (1UL) /*!< Read: Enabled */
#define SIMIF_INTENSET_RX_DATA_READY_Set (1UL) /*!< Enable */

/* Bit 14 : Write '1' to enable interrupt for event READY_TX */
#define SIMIF_INTENSET_READY_TX_Pos (14UL) /*!< Position of READY_TX field. */
#define SIMIF_INTENSET_READY_TX_Msk (0x1UL << SIMIF_INTENSET_READY_TX_Pos) /*!< Bit mask of READY_TX field. */
#define SIMIF_INTENSET_READY_TX_Disabled (0UL) /*!< Read: Disabled */
#define SIMIF_INTENSET_READY_TX_Enabled (1UL) /*!< Read: Enabled */
#define SIMIF_INTENSET_READY_TX_Set (1UL) /*!< Enable */

/* Bit 13 : Write '1' to enable interrupt for event ERROR */
#define SIMIF_INTENSET_ERROR_Pos (13UL) /*!< Position of ERROR field. */
#define SIMIF_INTENSET_ERROR_Msk (0x1UL << SIMIF_INTENSET_ERROR_Pos) /*!< Bit mask of ERROR field. */
#define SIMIF_INTENSET_ERROR_Disabled (0UL) /*!< Read: Disabled */
#define SIMIF_INTENSET_ERROR_Enabled (1UL) /*!< Read: Enabled */
#define SIMIF_INTENSET_ERROR_Set (1UL) /*!< Enable */

/* Bit 12 : Write '1' to enable interrupt for event NINS */
#define SIMIF_INTENSET_NINS_Pos (12UL) /*!< Position of NINS field. */
#define SIMIF_INTENSET_NINS_Msk (0x1UL << SIMIF_INTENSET_NINS_Pos) /*!< Bit mask of NINS field. */
#define SIMIF_INTENSET_NINS_Disabled (0UL) /*!< Read: Disabled */
#define SIMIF_INTENSET_NINS_Enabled (1UL) /*!< Read: Enabled */
#define SIMIF_INTENSET_NINS_Set (1UL) /*!< Enable */

/* Bit 11 : Write '1' to enable interrupt for event INS */
#define SIMIF_INTENSET_INS_Pos (11UL) /*!< Position of INS field. */
#define SIMIF_INTENSET_INS_Msk (0x1UL << SIMIF_INTENSET_INS_Pos) /*!< Bit mask of INS field. */
#define SIMIF_INTENSET_INS_Disabled (0UL) /*!< Read: Disabled */
#define SIMIF_INTENSET_INS_Enabled (1UL) /*!< Read: Enabled */
#define SIMIF_INTENSET_INS_Set (1UL) /*!< Enable */

/* Bit 10 : Write '1' to enable interrupt for event RESET */
#define SIMIF_INTENSET_RESET_Pos (10UL) /*!< Position of RESET field. */
#define SIMIF_INTENSET_RESET_Msk (0x1UL << SIMIF_INTENSET_RESET_Pos) /*!< Bit mask of RESET field. */
#define SIMIF_INTENSET_RESET_Disabled (0UL) /*!< Read: Disabled */
#define SIMIF_INTENSET_RESET_Enabled (1UL) /*!< Read: Enabled */
#define SIMIF_INTENSET_RESET_Set (1UL) /*!< Enable */

/* Bit 9 : Write '1' to enable interrupt for event SW1SW2 */
#define SIMIF_INTENSET_SW1SW2_Pos (9UL) /*!< Position of SW1SW2 field. */
#define SIMIF_INTENSET_SW1SW2_Msk (0x1UL << SIMIF_INTENSET_SW1SW2_Pos) /*!< Bit mask of SW1SW2 field. */
#define SIMIF_INTENSET_SW1SW2_Disabled (0UL) /*!< Read: Disabled */
#define SIMIF_INTENSET_SW1SW2_Enabled (1UL) /*!< Read: Enabled */
#define SIMIF_INTENSET_SW1SW2_Set (1UL) /*!< Enable */

/* Bit 8 : Write '1' to enable interrupt for event BW_TIMEOUT */
#define SIMIF_INTENSET_BW_TIMEOUT_Pos (8UL) /*!< Position of BW_TIMEOUT field. */
#define SIMIF_INTENSET_BW_TIMEOUT_Msk (0x1UL << SIMIF_INTENSET_BW_TIMEOUT_Pos) /*!< Bit mask of BW_TIMEOUT field. */
#define SIMIF_INTENSET_BW_TIMEOUT_Disabled (0UL) /*!< Read: Disabled */
#define SIMIF_INTENSET_BW_TIMEOUT_Enabled (1UL) /*!< Read: Enabled */
#define SIMIF_INTENSET_BW_TIMEOUT_Set (1UL) /*!< Enable */

/* Bit 7 : Write '1' to enable interrupt for event CW_TIMEOUT */
#define SIMIF_INTENSET_CW_TIMEOUT_Pos (7UL) /*!< Position of CW_TIMEOUT field. */
#define SIMIF_INTENSET_CW_TIMEOUT_Msk (0x1UL << SIMIF_INTENSET_CW_TIMEOUT_Pos) /*!< Bit mask of CW_TIMEOUT field. */
#define SIMIF_INTENSET_CW_TIMEOUT_Disabled (0UL) /*!< Read: Disabled */
#define SIMIF_INTENSET_CW_TIMEOUT_Enabled (1UL) /*!< Read: Enabled */
#define SIMIF_INTENSET_CW_TIMEOUT_Set (1UL) /*!< Enable */

/* Bit 6 : Write '1' to enable interrupt for event ATR_TIMEOUT */
#define SIMIF_INTENSET_ATR_TIMEOUT_Pos (6UL) /*!< Position of ATR_TIMEOUT field. */
#define SIMIF_INTENSET_ATR_TIMEOUT_Msk (0x1UL << SIMIF_INTENSET_ATR_TIMEOUT_Pos) /*!< Bit mask of ATR_TIMEOUT field. */
#define SIMIF_INTENSET_ATR_TIMEOUT_Disabled (0UL) /*!< Read: Disabled */
#define SIMIF_INTENSET_ATR_TIMEOUT_Enabled (1UL) /*!< Read: Enabled */
#define SIMIF_INTENSET_ATR_TIMEOUT_Set (1UL) /*!< Enable */

/* Bit 5 : Write '1' to enable interrupt for event PARITY_ERROR */
#define SIMIF_INTENSET_PARITY_ERROR_Pos (5UL) /*!< Position of PARITY_ERROR field. */
#define SIMIF_INTENSET_PARITY_ERROR_Msk (0x1UL << SIMIF_INTENSET_PARITY_ERROR_Pos) /*!< Bit mask of PARITY_ERROR field. */
#define SIMIF_INTENSET_PARITY_ERROR_Disabled (0UL) /*!< Read: Disabled */
#define SIMIF_INTENSET_PARITY_ERROR_Enabled (1UL) /*!< Read: Enabled */
#define SIMIF_INTENSET_PARITY_ERROR_Set (1UL) /*!< Enable */

/* Bit 4 : Write '1' to enable interrupt for event INVALID_CONVENTION */
#define SIMIF_INTENSET_INVALID_CONVENTION_Pos (4UL) /*!< Position of INVALID_CONVENTION field. */
#define SIMIF_INTENSET_INVALID_CONVENTION_Msk (0x1UL << SIMIF_INTENSET_INVALID_CONVENTION_Pos) /*!< Bit mask of INVALID_CONVENTION field. */
#define SIMIF_INTENSET_INVALID_CONVENTION_Disabled (0UL) /*!< Read: Disabled */
#define SIMIF_INTENSET_INVALID_CONVENTION_Enabled (1UL) /*!< Read: Enabled */
#define SIMIF_INTENSET_INVALID_CONVENTION_Set (1UL) /*!< Enable */

/* Bit 3 : Write '1' to enable interrupt for event DMA_TX_DONE */
#define SIMIF_INTENSET_DMA_TX_DONE_Pos (3UL) /*!< Position of DMA_TX_DONE field. */
#define SIMIF_INTENSET_DMA_TX_DONE_Msk (0x1UL << SIMIF_INTENSET_DMA_TX_DONE_Pos) /*!< Bit mask of DMA_TX_DONE field. */
#define SIMIF_INTENSET_DMA_TX_DONE_Disabled (0UL) /*!< Read: Disabled */
#define SIMIF_INTENSET_DMA_TX_DONE_Enabled (1UL) /*!< Read: Enabled */
#define SIMIF_INTENSET_DMA_TX_DONE_Set (1UL) /*!< Enable */

/* Bit 2 : Write '1' to enable interrupt for event DMA_TX_STARTED */
#define SIMIF_INTENSET_DMA_TX_STARTED_Pos (2UL) /*!< Position of DMA_TX_STARTED field. */
#define SIMIF_INTENSET_DMA_TX_STARTED_Msk (0x1UL << SIMIF_INTENSET_DMA_TX_STARTED_Pos) /*!< Bit mask of DMA_TX_STARTED field. */
#define SIMIF_INTENSET_DMA_TX_STARTED_Disabled (0UL) /*!< Read: Disabled */
#define SIMIF_INTENSET_DMA_TX_STARTED_Enabled (1UL) /*!< Read: Enabled */
#define SIMIF_INTENSET_DMA_TX_STARTED_Set (1UL) /*!< Enable */

/* Bit 1 : Write '1' to enable interrupt for event DMA_RX_DONE */
#define SIMIF_INTENSET_DMA_RX_DONE_Pos (1UL) /*!< Position of DMA_RX_DONE field. */
#define SIMIF_INTENSET_DMA_RX_DONE_Msk (0x1UL << SIMIF_INTENSET_DMA_RX_DONE_Pos) /*!< Bit mask of DMA_RX_DONE field. */
#define SIMIF_INTENSET_DMA_RX_DONE_Disabled (0UL) /*!< Read: Disabled */
#define SIMIF_INTENSET_DMA_RX_DONE_Enabled (1UL) /*!< Read: Enabled */
#define SIMIF_INTENSET_DMA_RX_DONE_Set (1UL) /*!< Enable */

/* Bit 0 : Write '1' to enable interrupt for event DMA_RX_STARTED */
#define SIMIF_INTENSET_DMA_RX_STARTED_Pos (0UL) /*!< Position of DMA_RX_STARTED field. */
#define SIMIF_INTENSET_DMA_RX_STARTED_Msk (0x1UL << SIMIF_INTENSET_DMA_RX_STARTED_Pos) /*!< Bit mask of DMA_RX_STARTED field. */
#define SIMIF_INTENSET_DMA_RX_STARTED_Disabled (0UL) /*!< Read: Disabled */
#define SIMIF_INTENSET_DMA_RX_STARTED_Enabled (1UL) /*!< Read: Enabled */
#define SIMIF_INTENSET_DMA_RX_STARTED_Set (1UL) /*!< Enable */

/* Register: SIMIF_INTENCLR */
/* Description: Disable interrupt */

/* Bit 23 : Write '1' to disable interrupt for event T1_RX_MORE */
#define SIMIF_INTENCLR_T1_RX_MORE_Pos (23UL) /*!< Position of T1_RX_MORE field. */
#define SIMIF_INTENCLR_T1_RX_MORE_Msk (0x1UL << SIMIF_INTENCLR_T1_RX_MORE_Pos) /*!< Bit mask of T1_RX_MORE field. */
#define SIMIF_INTENCLR_T1_RX_MORE_Disabled (0UL) /*!< Read: Disabled */
#define SIMIF_INTENCLR_T1_RX_MORE_Enabled (1UL) /*!< Read: Enabled */
#define SIMIF_INTENCLR_T1_RX_MORE_Clear (1UL) /*!< Disable */

/* Bit 22 : Write '1' to disable interrupt for event ERROR_COUNT_MAX */
#define SIMIF_INTENCLR_ERROR_COUNT_MAX_Pos (22UL) /*!< Position of ERROR_COUNT_MAX field. */
#define SIMIF_INTENCLR_ERROR_COUNT_MAX_Msk (0x1UL << SIMIF_INTENCLR_ERROR_COUNT_MAX_Pos) /*!< Bit mask of ERROR_COUNT_MAX field. */
#define SIMIF_INTENCLR_ERROR_COUNT_MAX_Disabled (0UL) /*!< Read: Disabled */
#define SIMIF_INTENCLR_ERROR_COUNT_MAX_Enabled (1UL) /*!< Read: Enabled */
#define SIMIF_INTENCLR_ERROR_COUNT_MAX_Clear (1UL) /*!< Disable */

/* Bit 21 : Write '1' to disable interrupt for event NAD_ERROR */
#define SIMIF_INTENCLR_NAD_ERROR_Pos (21UL) /*!< Position of NAD_ERROR field. */
#define SIMIF_INTENCLR_NAD_ERROR_Msk (0x1UL << SIMIF_INTENCLR_NAD_ERROR_Pos) /*!< Bit mask of NAD_ERROR field. */
#define SIMIF_INTENCLR_NAD_ERROR_Disabled (0UL) /*!< Read: Disabled */
#define SIMIF_INTENCLR_NAD_ERROR_Enabled (1UL) /*!< Read: Enabled */
#define SIMIF_INTENCLR_NAD_ERROR_Clear (1UL) /*!< Disable */

/* Bit 20 : Write '1' to disable interrupt for event EDC_ERROR */
#define SIMIF_INTENCLR_EDC_ERROR_Pos (20UL) /*!< Position of EDC_ERROR field. */
#define SIMIF_INTENCLR_EDC_ERROR_Msk (0x1UL << SIMIF_INTENCLR_EDC_ERROR_Pos) /*!< Bit mask of EDC_ERROR field. */
#define SIMIF_INTENCLR_EDC_ERROR_Disabled (0UL) /*!< Read: Disabled */
#define SIMIF_INTENCLR_EDC_ERROR_Enabled (1UL) /*!< Read: Enabled */
#define SIMIF_INTENCLR_EDC_ERROR_Clear (1UL) /*!< Disable */

/* Bit 19 : Write '1' to disable interrupt for event T1_LEN_ERROR */
#define SIMIF_INTENCLR_T1_LEN_ERROR_Pos (19UL) /*!< Position of T1_LEN_ERROR field. */
#define SIMIF_INTENCLR_T1_LEN_ERROR_Msk (0x1UL << SIMIF_INTENCLR_T1_LEN_ERROR_Pos) /*!< Bit mask of T1_LEN_ERROR field. */
#define SIMIF_INTENCLR_T1_LEN_ERROR_Disabled (0UL) /*!< Read: Disabled */
#define SIMIF_INTENCLR_T1_LEN_ERROR_Enabled (1UL) /*!< Read: Enabled */
#define SIMIF_INTENCLR_T1_LEN_ERROR_Clear (1UL) /*!< Disable */

/* Bit 18 : Write '1' to disable interrupt for event T1_NON_I_BLOCK */
#define SIMIF_INTENCLR_T1_NON_I_BLOCK_Pos (18UL) /*!< Position of T1_NON_I_BLOCK field. */
#define SIMIF_INTENCLR_T1_NON_I_BLOCK_Msk (0x1UL << SIMIF_INTENCLR_T1_NON_I_BLOCK_Pos) /*!< Bit mask of T1_NON_I_BLOCK field. */
#define SIMIF_INTENCLR_T1_NON_I_BLOCK_Disabled (0UL) /*!< Read: Disabled */
#define SIMIF_INTENCLR_T1_NON_I_BLOCK_Enabled (1UL) /*!< Read: Enabled */
#define SIMIF_INTENCLR_T1_NON_I_BLOCK_Clear (1UL) /*!< Disable */

/* Bit 17 : Write '1' to disable interrupt for event T1_TX_ABORTED */
#define SIMIF_INTENCLR_T1_TX_ABORTED_Pos (17UL) /*!< Position of T1_TX_ABORTED field. */
#define SIMIF_INTENCLR_T1_TX_ABORTED_Msk (0x1UL << SIMIF_INTENCLR_T1_TX_ABORTED_Pos) /*!< Bit mask of T1_TX_ABORTED field. */
#define SIMIF_INTENCLR_T1_TX_ABORTED_Disabled (0UL) /*!< Read: Disabled */
#define SIMIF_INTENCLR_T1_TX_ABORTED_Enabled (1UL) /*!< Read: Enabled */
#define SIMIF_INTENCLR_T1_TX_ABORTED_Clear (1UL) /*!< Disable */

/* Bit 16 : Write '1' to disable interrupt for event T1_RX_OVERRUN */
#define SIMIF_INTENCLR_T1_RX_OVERRUN_Pos (16UL) /*!< Position of T1_RX_OVERRUN field. */
#define SIMIF_INTENCLR_T1_RX_OVERRUN_Msk (0x1UL << SIMIF_INTENCLR_T1_RX_OVERRUN_Pos) /*!< Bit mask of T1_RX_OVERRUN field. */
#define SIMIF_INTENCLR_T1_RX_OVERRUN_Disabled (0UL) /*!< Read: Disabled */
#define SIMIF_INTENCLR_T1_RX_OVERRUN_Enabled (1UL) /*!< Read: Enabled */
#define SIMIF_INTENCLR_T1_RX_OVERRUN_Clear (1UL) /*!< Disable */

/* Bit 15 : Write '1' to disable interrupt for event RX_DATA_READY */
#define SIMIF_INTENCLR_RX_DATA_READY_Pos (15UL) /*!< Position of RX_DATA_READY field. */
#define SIMIF_INTENCLR_RX_DATA_READY_Msk (0x1UL << SIMIF_INTENCLR_RX_DATA_READY_Pos) /*!< Bit mask of RX_DATA_READY field. */
#define SIMIF_INTENCLR_RX_DATA_READY_Disabled (0UL) /*!< Read: Disabled */
#define SIMIF_INTENCLR_RX_DATA_READY_Enabled (1UL) /*!< Read: Enabled */
#define SIMIF_INTENCLR_RX_DATA_READY_Clear (1UL) /*!< Disable */

/* Bit 14 : Write '1' to disable interrupt for event READY_TX */
#define SIMIF_INTENCLR_READY_TX_Pos (14UL) /*!< Position of READY_TX field. */
#define SIMIF_INTENCLR_READY_TX_Msk (0x1UL << SIMIF_INTENCLR_READY_TX_Pos) /*!< Bit mask of READY_TX field. */
#define SIMIF_INTENCLR_READY_TX_Disabled (0UL) /*!< Read: Disabled */
#define SIMIF_INTENCLR_READY_TX_Enabled (1UL) /*!< Read: Enabled */
#define SIMIF_INTENCLR_READY_TX_Clear (1UL) /*!< Disable */

/* Bit 13 : Write '1' to disable interrupt for event ERROR */
#define SIMIF_INTENCLR_ERROR_Pos (13UL) /*!< Position of ERROR field. */
#define SIMIF_INTENCLR_ERROR_Msk (0x1UL << SIMIF_INTENCLR_ERROR_Pos) /*!< Bit mask of ERROR field. */
#define SIMIF_INTENCLR_ERROR_Disabled (0UL) /*!< Read: Disabled */
#define SIMIF_INTENCLR_ERROR_Enabled (1UL) /*!< Read: Enabled */
#define SIMIF_INTENCLR_ERROR_Clear (1UL) /*!< Disable */

/* Bit 12 : Write '1' to disable interrupt for event NINS */
#define SIMIF_INTENCLR_NINS_Pos (12UL) /*!< Position of NINS field. */
#define SIMIF_INTENCLR_NINS_Msk (0x1UL << SIMIF_INTENCLR_NINS_Pos) /*!< Bit mask of NINS field. */
#define SIMIF_INTENCLR_NINS_Disabled (0UL) /*!< Read: Disabled */
#define SIMIF_INTENCLR_NINS_Enabled (1UL) /*!< Read: Enabled */
#define SIMIF_INTENCLR_NINS_Clear (1UL) /*!< Disable */

/* Bit 11 : Write '1' to disable interrupt for event INS */
#define SIMIF_INTENCLR_INS_Pos (11UL) /*!< Position of INS field. */
#define SIMIF_INTENCLR_INS_Msk (0x1UL << SIMIF_INTENCLR_INS_Pos) /*!< Bit mask of INS field. */
#define SIMIF_INTENCLR_INS_Disabled (0UL) /*!< Read: Disabled */
#define SIMIF_INTENCLR_INS_Enabled (1UL) /*!< Read: Enabled */
#define SIMIF_INTENCLR_INS_Clear (1UL) /*!< Disable */

/* Bit 10 : Write '1' to disable interrupt for event RESET */
#define SIMIF_INTENCLR_RESET_Pos (10UL) /*!< Position of RESET field. */
#define SIMIF_INTENCLR_RESET_Msk (0x1UL << SIMIF_INTENCLR_RESET_Pos) /*!< Bit mask of RESET field. */
#define SIMIF_INTENCLR_RESET_Disabled (0UL) /*!< Read: Disabled */
#define SIMIF_INTENCLR_RESET_Enabled (1UL) /*!< Read: Enabled */
#define SIMIF_INTENCLR_RESET_Clear (1UL) /*!< Disable */

/* Bit 9 : Write '1' to disable interrupt for event SW1SW2 */
#define SIMIF_INTENCLR_SW1SW2_Pos (9UL) /*!< Position of SW1SW2 field. */
#define SIMIF_INTENCLR_SW1SW2_Msk (0x1UL << SIMIF_INTENCLR_SW1SW2_Pos) /*!< Bit mask of SW1SW2 field. */
#define SIMIF_INTENCLR_SW1SW2_Disabled (0UL) /*!< Read: Disabled */
#define SIMIF_INTENCLR_SW1SW2_Enabled (1UL) /*!< Read: Enabled */
#define SIMIF_INTENCLR_SW1SW2_Clear (1UL) /*!< Disable */

/* Bit 8 : Write '1' to disable interrupt for event BW_TIMEOUT */
#define SIMIF_INTENCLR_BW_TIMEOUT_Pos (8UL) /*!< Position of BW_TIMEOUT field. */
#define SIMIF_INTENCLR_BW_TIMEOUT_Msk (0x1UL << SIMIF_INTENCLR_BW_TIMEOUT_Pos) /*!< Bit mask of BW_TIMEOUT field. */
#define SIMIF_INTENCLR_BW_TIMEOUT_Disabled (0UL) /*!< Read: Disabled */
#define SIMIF_INTENCLR_BW_TIMEOUT_Enabled (1UL) /*!< Read: Enabled */
#define SIMIF_INTENCLR_BW_TIMEOUT_Clear (1UL) /*!< Disable */

/* Bit 7 : Write '1' to disable interrupt for event CW_TIMEOUT */
#define SIMIF_INTENCLR_CW_TIMEOUT_Pos (7UL) /*!< Position of CW_TIMEOUT field. */
#define SIMIF_INTENCLR_CW_TIMEOUT_Msk (0x1UL << SIMIF_INTENCLR_CW_TIMEOUT_Pos) /*!< Bit mask of CW_TIMEOUT field. */
#define SIMIF_INTENCLR_CW_TIMEOUT_Disabled (0UL) /*!< Read: Disabled */
#define SIMIF_INTENCLR_CW_TIMEOUT_Enabled (1UL) /*!< Read: Enabled */
#define SIMIF_INTENCLR_CW_TIMEOUT_Clear (1UL) /*!< Disable */

/* Bit 6 : Write '1' to disable interrupt for event ATR_TIMEOUT */
#define SIMIF_INTENCLR_ATR_TIMEOUT_Pos (6UL) /*!< Position of ATR_TIMEOUT field. */
#define SIMIF_INTENCLR_ATR_TIMEOUT_Msk (0x1UL << SIMIF_INTENCLR_ATR_TIMEOUT_Pos) /*!< Bit mask of ATR_TIMEOUT field. */
#define SIMIF_INTENCLR_ATR_TIMEOUT_Disabled (0UL) /*!< Read: Disabled */
#define SIMIF_INTENCLR_ATR_TIMEOUT_Enabled (1UL) /*!< Read: Enabled */
#define SIMIF_INTENCLR_ATR_TIMEOUT_Clear (1UL) /*!< Disable */

/* Bit 5 : Write '1' to disable interrupt for event PARITY_ERROR */
#define SIMIF_INTENCLR_PARITY_ERROR_Pos (5UL) /*!< Position of PARITY_ERROR field. */
#define SIMIF_INTENCLR_PARITY_ERROR_Msk (0x1UL << SIMIF_INTENCLR_PARITY_ERROR_Pos) /*!< Bit mask of PARITY_ERROR field. */
#define SIMIF_INTENCLR_PARITY_ERROR_Disabled (0UL) /*!< Read: Disabled */
#define SIMIF_INTENCLR_PARITY_ERROR_Enabled (1UL) /*!< Read: Enabled */
#define SIMIF_INTENCLR_PARITY_ERROR_Clear (1UL) /*!< Disable */

/* Bit 4 : Write '1' to disable interrupt for event INVALID_CONVENTION */
#define SIMIF_INTENCLR_INVALID_CONVENTION_Pos (4UL) /*!< Position of INVALID_CONVENTION field. */
#define SIMIF_INTENCLR_INVALID_CONVENTION_Msk (0x1UL << SIMIF_INTENCLR_INVALID_CONVENTION_Pos) /*!< Bit mask of INVALID_CONVENTION field. */
#define SIMIF_INTENCLR_INVALID_CONVENTION_Disabled (0UL) /*!< Read: Disabled */
#define SIMIF_INTENCLR_INVALID_CONVENTION_Enabled (1UL) /*!< Read: Enabled */
#define SIMIF_INTENCLR_INVALID_CONVENTION_Clear (1UL) /*!< Disable */

/* Bit 3 : Write '1' to disable interrupt for event DMA_TX_DONE */
#define SIMIF_INTENCLR_DMA_TX_DONE_Pos (3UL) /*!< Position of DMA_TX_DONE field. */
#define SIMIF_INTENCLR_DMA_TX_DONE_Msk (0x1UL << SIMIF_INTENCLR_DMA_TX_DONE_Pos) /*!< Bit mask of DMA_TX_DONE field. */
#define SIMIF_INTENCLR_DMA_TX_DONE_Disabled (0UL) /*!< Read: Disabled */
#define SIMIF_INTENCLR_DMA_TX_DONE_Enabled (1UL) /*!< Read: Enabled */
#define SIMIF_INTENCLR_DMA_TX_DONE_Clear (1UL) /*!< Disable */

/* Bit 2 : Write '1' to disable interrupt for event DMA_TX_STARTED */
#define SIMIF_INTENCLR_DMA_TX_STARTED_Pos (2UL) /*!< Position of DMA_TX_STARTED field. */
#define SIMIF_INTENCLR_DMA_TX_STARTED_Msk (0x1UL << SIMIF_INTENCLR_DMA_TX_STARTED_Pos) /*!< Bit mask of DMA_TX_STARTED field. */
#define SIMIF_INTENCLR_DMA_TX_STARTED_Disabled (0UL) /*!< Read: Disabled */
#define SIMIF_INTENCLR_DMA_TX_STARTED_Enabled (1UL) /*!< Read: Enabled */
#define SIMIF_INTENCLR_DMA_TX_STARTED_Clear (1UL) /*!< Disable */

/* Bit 1 : Write '1' to disable interrupt for event DMA_RX_DONE */
#define SIMIF_INTENCLR_DMA_RX_DONE_Pos (1UL) /*!< Position of DMA_RX_DONE field. */
#define SIMIF_INTENCLR_DMA_RX_DONE_Msk (0x1UL << SIMIF_INTENCLR_DMA_RX_DONE_Pos) /*!< Bit mask of DMA_RX_DONE field. */
#define SIMIF_INTENCLR_DMA_RX_DONE_Disabled (0UL) /*!< Read: Disabled */
#define SIMIF_INTENCLR_DMA_RX_DONE_Enabled (1UL) /*!< Read: Enabled */
#define SIMIF_INTENCLR_DMA_RX_DONE_Clear (1UL) /*!< Disable */

/* Bit 0 : Write '1' to disable interrupt for event DMA_RX_STARTED */
#define SIMIF_INTENCLR_DMA_RX_STARTED_Pos (0UL) /*!< Position of DMA_RX_STARTED field. */
#define SIMIF_INTENCLR_DMA_RX_STARTED_Msk (0x1UL << SIMIF_INTENCLR_DMA_RX_STARTED_Pos) /*!< Bit mask of DMA_RX_STARTED field. */
#define SIMIF_INTENCLR_DMA_RX_STARTED_Disabled (0UL) /*!< Read: Disabled */
#define SIMIF_INTENCLR_DMA_RX_STARTED_Enabled (1UL) /*!< Read: Enabled */
#define SIMIF_INTENCLR_DMA_RX_STARTED_Clear (1UL) /*!< Disable */

/* Register: SIMIF_INTPEND */
/* Description: Pending interrupts */

/* Bit 23 : Read pending status of interrupt for event T1_RX_MORE */
#define SIMIF_INTPEND_T1_RX_MORE_Pos (23UL) /*!< Position of T1_RX_MORE field. */
#define SIMIF_INTPEND_T1_RX_MORE_Msk (0x1UL << SIMIF_INTPEND_T1_RX_MORE_Pos) /*!< Bit mask of T1_RX_MORE field. */
#define SIMIF_INTPEND_T1_RX_MORE_NotPending (0UL) /*!< Read: Not pending */
#define SIMIF_INTPEND_T1_RX_MORE_Pending (1UL) /*!< Read: Pending */

/* Bit 22 : Read pending status of interrupt for event ERROR_COUNT_MAX */
#define SIMIF_INTPEND_ERROR_COUNT_MAX_Pos (22UL) /*!< Position of ERROR_COUNT_MAX field. */
#define SIMIF_INTPEND_ERROR_COUNT_MAX_Msk (0x1UL << SIMIF_INTPEND_ERROR_COUNT_MAX_Pos) /*!< Bit mask of ERROR_COUNT_MAX field. */
#define SIMIF_INTPEND_ERROR_COUNT_MAX_NotPending (0UL) /*!< Read: Not pending */
#define SIMIF_INTPEND_ERROR_COUNT_MAX_Pending (1UL) /*!< Read: Pending */

/* Bit 21 : Read pending status of interrupt for event NAD_ERROR */
#define SIMIF_INTPEND_NAD_ERROR_Pos (21UL) /*!< Position of NAD_ERROR field. */
#define SIMIF_INTPEND_NAD_ERROR_Msk (0x1UL << SIMIF_INTPEND_NAD_ERROR_Pos) /*!< Bit mask of NAD_ERROR field. */
#define SIMIF_INTPEND_NAD_ERROR_NotPending (0UL) /*!< Read: Not pending */
#define SIMIF_INTPEND_NAD_ERROR_Pending (1UL) /*!< Read: Pending */

/* Bit 20 : Read pending status of interrupt for event EDC_ERROR */
#define SIMIF_INTPEND_EDC_ERROR_Pos (20UL) /*!< Position of EDC_ERROR field. */
#define SIMIF_INTPEND_EDC_ERROR_Msk (0x1UL << SIMIF_INTPEND_EDC_ERROR_Pos) /*!< Bit mask of EDC_ERROR field. */
#define SIMIF_INTPEND_EDC_ERROR_NotPending (0UL) /*!< Read: Not pending */
#define SIMIF_INTPEND_EDC_ERROR_Pending (1UL) /*!< Read: Pending */

/* Bit 19 : Read pending status of interrupt for event T1_LEN_ERROR */
#define SIMIF_INTPEND_T1_LEN_ERROR_Pos (19UL) /*!< Position of T1_LEN_ERROR field. */
#define SIMIF_INTPEND_T1_LEN_ERROR_Msk (0x1UL << SIMIF_INTPEND_T1_LEN_ERROR_Pos) /*!< Bit mask of T1_LEN_ERROR field. */
#define SIMIF_INTPEND_T1_LEN_ERROR_NotPending (0UL) /*!< Read: Not pending */
#define SIMIF_INTPEND_T1_LEN_ERROR_Pending (1UL) /*!< Read: Pending */

/* Bit 18 : Read pending status of interrupt for event T1_NON_I_BLOCK */
#define SIMIF_INTPEND_T1_NON_I_BLOCK_Pos (18UL) /*!< Position of T1_NON_I_BLOCK field. */
#define SIMIF_INTPEND_T1_NON_I_BLOCK_Msk (0x1UL << SIMIF_INTPEND_T1_NON_I_BLOCK_Pos) /*!< Bit mask of T1_NON_I_BLOCK field. */
#define SIMIF_INTPEND_T1_NON_I_BLOCK_NotPending (0UL) /*!< Read: Not pending */
#define SIMIF_INTPEND_T1_NON_I_BLOCK_Pending (1UL) /*!< Read: Pending */

/* Bit 17 : Read pending status of interrupt for event T1_TX_ABORTED */
#define SIMIF_INTPEND_T1_TX_ABORTED_Pos (17UL) /*!< Position of T1_TX_ABORTED field. */
#define SIMIF_INTPEND_T1_TX_ABORTED_Msk (0x1UL << SIMIF_INTPEND_T1_TX_ABORTED_Pos) /*!< Bit mask of T1_TX_ABORTED field. */
#define SIMIF_INTPEND_T1_TX_ABORTED_NotPending (0UL) /*!< Read: Not pending */
#define SIMIF_INTPEND_T1_TX_ABORTED_Pending (1UL) /*!< Read: Pending */

/* Bit 16 : Read pending status of interrupt for event T1_RX_OVERRUN */
#define SIMIF_INTPEND_T1_RX_OVERRUN_Pos (16UL) /*!< Position of T1_RX_OVERRUN field. */
#define SIMIF_INTPEND_T1_RX_OVERRUN_Msk (0x1UL << SIMIF_INTPEND_T1_RX_OVERRUN_Pos) /*!< Bit mask of T1_RX_OVERRUN field. */
#define SIMIF_INTPEND_T1_RX_OVERRUN_NotPending (0UL) /*!< Read: Not pending */
#define SIMIF_INTPEND_T1_RX_OVERRUN_Pending (1UL) /*!< Read: Pending */

/* Bit 15 : Read pending status of interrupt for event RX_DATA_READY */
#define SIMIF_INTPEND_RX_DATA_READY_Pos (15UL) /*!< Position of RX_DATA_READY field. */
#define SIMIF_INTPEND_RX_DATA_READY_Msk (0x1UL << SIMIF_INTPEND_RX_DATA_READY_Pos) /*!< Bit mask of RX_DATA_READY field. */
#define SIMIF_INTPEND_RX_DATA_READY_NotPending (0UL) /*!< Read: Not pending */
#define SIMIF_INTPEND_RX_DATA_READY_Pending (1UL) /*!< Read: Pending */

/* Bit 14 : Read pending status of interrupt for event READY_TX */
#define SIMIF_INTPEND_READY_TX_Pos (14UL) /*!< Position of READY_TX field. */
#define SIMIF_INTPEND_READY_TX_Msk (0x1UL << SIMIF_INTPEND_READY_TX_Pos) /*!< Bit mask of READY_TX field. */
#define SIMIF_INTPEND_READY_TX_NotPending (0UL) /*!< Read: Not pending */
#define SIMIF_INTPEND_READY_TX_Pending (1UL) /*!< Read: Pending */

/* Bit 13 : Read pending status of interrupt for event ERROR */
#define SIMIF_INTPEND_ERROR_Pos (13UL) /*!< Position of ERROR field. */
#define SIMIF_INTPEND_ERROR_Msk (0x1UL << SIMIF_INTPEND_ERROR_Pos) /*!< Bit mask of ERROR field. */
#define SIMIF_INTPEND_ERROR_NotPending (0UL) /*!< Read: Not pending */
#define SIMIF_INTPEND_ERROR_Pending (1UL) /*!< Read: Pending */

/* Bit 12 : Read pending status of interrupt for event NINS */
#define SIMIF_INTPEND_NINS_Pos (12UL) /*!< Position of NINS field. */
#define SIMIF_INTPEND_NINS_Msk (0x1UL << SIMIF_INTPEND_NINS_Pos) /*!< Bit mask of NINS field. */
#define SIMIF_INTPEND_NINS_NotPending (0UL) /*!< Read: Not pending */
#define SIMIF_INTPEND_NINS_Pending (1UL) /*!< Read: Pending */

/* Bit 11 : Read pending status of interrupt for event INS */
#define SIMIF_INTPEND_INS_Pos (11UL) /*!< Position of INS field. */
#define SIMIF_INTPEND_INS_Msk (0x1UL << SIMIF_INTPEND_INS_Pos) /*!< Bit mask of INS field. */
#define SIMIF_INTPEND_INS_NotPending (0UL) /*!< Read: Not pending */
#define SIMIF_INTPEND_INS_Pending (1UL) /*!< Read: Pending */

/* Bit 10 : Read pending status of interrupt for event RESET */
#define SIMIF_INTPEND_RESET_Pos (10UL) /*!< Position of RESET field. */
#define SIMIF_INTPEND_RESET_Msk (0x1UL << SIMIF_INTPEND_RESET_Pos) /*!< Bit mask of RESET field. */
#define SIMIF_INTPEND_RESET_NotPending (0UL) /*!< Read: Not pending */
#define SIMIF_INTPEND_RESET_Pending (1UL) /*!< Read: Pending */

/* Bit 9 : Read pending status of interrupt for event SW1SW2 */
#define SIMIF_INTPEND_SW1SW2_Pos (9UL) /*!< Position of SW1SW2 field. */
#define SIMIF_INTPEND_SW1SW2_Msk (0x1UL << SIMIF_INTPEND_SW1SW2_Pos) /*!< Bit mask of SW1SW2 field. */
#define SIMIF_INTPEND_SW1SW2_NotPending (0UL) /*!< Read: Not pending */
#define SIMIF_INTPEND_SW1SW2_Pending (1UL) /*!< Read: Pending */

/* Bit 8 : Read pending status of interrupt for event BW_TIMEOUT */
#define SIMIF_INTPEND_BW_TIMEOUT_Pos (8UL) /*!< Position of BW_TIMEOUT field. */
#define SIMIF_INTPEND_BW_TIMEOUT_Msk (0x1UL << SIMIF_INTPEND_BW_TIMEOUT_Pos) /*!< Bit mask of BW_TIMEOUT field. */
#define SIMIF_INTPEND_BW_TIMEOUT_NotPending (0UL) /*!< Read: Not pending */
#define SIMIF_INTPEND_BW_TIMEOUT_Pending (1UL) /*!< Read: Pending */

/* Bit 7 : Read pending status of interrupt for event CW_TIMEOUT */
#define SIMIF_INTPEND_CW_TIMEOUT_Pos (7UL) /*!< Position of CW_TIMEOUT field. */
#define SIMIF_INTPEND_CW_TIMEOUT_Msk (0x1UL << SIMIF_INTPEND_CW_TIMEOUT_Pos) /*!< Bit mask of CW_TIMEOUT field. */
#define SIMIF_INTPEND_CW_TIMEOUT_NotPending (0UL) /*!< Read: Not pending */
#define SIMIF_INTPEND_CW_TIMEOUT_Pending (1UL) /*!< Read: Pending */

/* Bit 6 : Read pending status of interrupt for event ATR_TIMEOUT */
#define SIMIF_INTPEND_ATR_TIMEOUT_Pos (6UL) /*!< Position of ATR_TIMEOUT field. */
#define SIMIF_INTPEND_ATR_TIMEOUT_Msk (0x1UL << SIMIF_INTPEND_ATR_TIMEOUT_Pos) /*!< Bit mask of ATR_TIMEOUT field. */
#define SIMIF_INTPEND_ATR_TIMEOUT_NotPending (0UL) /*!< Read: Not pending */
#define SIMIF_INTPEND_ATR_TIMEOUT_Pending (1UL) /*!< Read: Pending */

/* Bit 5 : Read pending status of interrupt for event PARITY_ERROR */
#define SIMIF_INTPEND_PARITY_ERROR_Pos (5UL) /*!< Position of PARITY_ERROR field. */
#define SIMIF_INTPEND_PARITY_ERROR_Msk (0x1UL << SIMIF_INTPEND_PARITY_ERROR_Pos) /*!< Bit mask of PARITY_ERROR field. */
#define SIMIF_INTPEND_PARITY_ERROR_NotPending (0UL) /*!< Read: Not pending */
#define SIMIF_INTPEND_PARITY_ERROR_Pending (1UL) /*!< Read: Pending */

/* Bit 4 : Read pending status of interrupt for event INVALID_CONVENTION */
#define SIMIF_INTPEND_INVALID_CONVENTION_Pos (4UL) /*!< Position of INVALID_CONVENTION field. */
#define SIMIF_INTPEND_INVALID_CONVENTION_Msk (0x1UL << SIMIF_INTPEND_INVALID_CONVENTION_Pos) /*!< Bit mask of INVALID_CONVENTION field. */
#define SIMIF_INTPEND_INVALID_CONVENTION_NotPending (0UL) /*!< Read: Not pending */
#define SIMIF_INTPEND_INVALID_CONVENTION_Pending (1UL) /*!< Read: Pending */

/* Bit 3 : Read pending status of interrupt for event DMA_TX_DONE */
#define SIMIF_INTPEND_DMA_TX_DONE_Pos (3UL) /*!< Position of DMA_TX_DONE field. */
#define SIMIF_INTPEND_DMA_TX_DONE_Msk (0x1UL << SIMIF_INTPEND_DMA_TX_DONE_Pos) /*!< Bit mask of DMA_TX_DONE field. */
#define SIMIF_INTPEND_DMA_TX_DONE_NotPending (0UL) /*!< Read: Not pending */
#define SIMIF_INTPEND_DMA_TX_DONE_Pending (1UL) /*!< Read: Pending */

/* Bit 2 : Read pending status of interrupt for event DMA_TX_STARTED */
#define SIMIF_INTPEND_DMA_TX_STARTED_Pos (2UL) /*!< Position of DMA_TX_STARTED field. */
#define SIMIF_INTPEND_DMA_TX_STARTED_Msk (0x1UL << SIMIF_INTPEND_DMA_TX_STARTED_Pos) /*!< Bit mask of DMA_TX_STARTED field. */
#define SIMIF_INTPEND_DMA_TX_STARTED_NotPending (0UL) /*!< Read: Not pending */
#define SIMIF_INTPEND_DMA_TX_STARTED_Pending (1UL) /*!< Read: Pending */

/* Bit 1 : Read pending status of interrupt for event DMA_RX_DONE */
#define SIMIF_INTPEND_DMA_RX_DONE_Pos (1UL) /*!< Position of DMA_RX_DONE field. */
#define SIMIF_INTPEND_DMA_RX_DONE_Msk (0x1UL << SIMIF_INTPEND_DMA_RX_DONE_Pos) /*!< Bit mask of DMA_RX_DONE field. */
#define SIMIF_INTPEND_DMA_RX_DONE_NotPending (0UL) /*!< Read: Not pending */
#define SIMIF_INTPEND_DMA_RX_DONE_Pending (1UL) /*!< Read: Pending */

/* Bit 0 : Read pending status of interrupt for event DMA_RX_STARTED */
#define SIMIF_INTPEND_DMA_RX_STARTED_Pos (0UL) /*!< Position of DMA_RX_STARTED field. */
#define SIMIF_INTPEND_DMA_RX_STARTED_Msk (0x1UL << SIMIF_INTPEND_DMA_RX_STARTED_Pos) /*!< Bit mask of DMA_RX_STARTED field. */
#define SIMIF_INTPEND_DMA_RX_STARTED_NotPending (0UL) /*!< Read: Not pending */
#define SIMIF_INTPEND_DMA_RX_STARTED_Pending (1UL) /*!< Read: Pending */

/* Register: SIMIF_SW1SW2 */
/* Description: Sw1 and Sw2 bytes received from Sim card in T=1 mode */

/* Bits 15..8 : Sw2 data byte received */
#define SIMIF_SW1SW2_SW2_Pos (8UL) /*!< Position of SW2 field. */
#define SIMIF_SW1SW2_SW2_Msk (0xFFUL << SIMIF_SW1SW2_SW2_Pos) /*!< Bit mask of SW2 field. */

/* Bits 7..0 : Sw1 data byte received */
#define SIMIF_SW1SW2_SW1_Pos (0UL) /*!< Position of SW1 field. */
#define SIMIF_SW1SW2_SW1_Msk (0xFFUL << SIMIF_SW1SW2_SW1_Pos) /*!< Bit mask of SW1 field. */

/* Register: SIMIF_CONVENTION */
/* Description: Data convention used in traffic between controller and SIM card */

/* Bit 0 : Data convention between controller and SIM card */
#define SIMIF_CONVENTION_DATACONVENTION_Pos (0UL) /*!< Position of DATACONVENTION field. */
#define SIMIF_CONVENTION_DATACONVENTION_Msk (0x1UL << SIMIF_CONVENTION_DATACONVENTION_Pos) /*!< Bit mask of DATACONVENTION field. */
#define SIMIF_CONVENTION_DATACONVENTION_Direct (0UL) /*!< Direct convention: 1 = High, LSB first */
#define SIMIF_CONVENTION_DATACONVENTION_Inverse (1UL) /*!< Inverse convention: 1 = Low, MSB first */

/* Register: SIMIF_LRCOUT */
/* Description: Latest generated LRC value */

/* Bits 7..0 : Latest generated LRC value */
#define SIMIF_LRCOUT_LRCOUT_Pos (0UL) /*!< Position of LRCOUT field. */
#define SIMIF_LRCOUT_LRCOUT_Msk (0xFFUL << SIMIF_LRCOUT_LRCOUT_Pos) /*!< Bit mask of LRCOUT field. */

/* Register: SIMIF_RXDATA */
/* Description: NonDMA received data */

/* Bits 7..0 : NonDMA received data or Rx data of T=1 S block if RxBufferLength = 3 */
#define SIMIF_RXDATA_RXDATA_Pos (0UL) /*!< Position of RXDATA field. */
#define SIMIF_RXDATA_RXDATA_Msk (0xFFUL << SIMIF_RXDATA_RXDATA_Pos) /*!< Bit mask of RXDATA field. */

/* Register: SIMIF_T0SWXCOUNT */
/* Description: Number of SWx bytes received after T=0 Rx DMA finished */

/* Bits 1..0 : Number of SWx bytes received after T=0 Rx DMA finished */
#define SIMIF_T0SWXCOUNT_T0SWXCOUNT_Pos (0UL) /*!< Position of T0SWXCOUNT field. */
#define SIMIF_T0SWXCOUNT_T0SWXCOUNT_Msk (0x3UL << SIMIF_T0SWXCOUNT_T0SWXCOUNT_Pos) /*!< Bit mask of T0SWXCOUNT field. */

/* Register: SIMIF_CLKRATE */
/* Description: Divider value for setting the clock rate to the SIM card. */

/* Bits 9..0 : Divider for setting the clock frequency to the SIM card clock (clock  = input clock / ClockRate */
#define SIMIF_CLKRATE_CLOCKRATE_Pos (0UL) /*!< Position of CLOCKRATE field. */
#define SIMIF_CLKRATE_CLOCKRATE_Msk (0x3FFUL << SIMIF_CLKRATE_CLOCKRATE_Pos) /*!< Bit mask of CLOCKRATE field. */

/* Register: SIMIF_BAUDRATE */
/* Description: Divider value for setting the baud rate to the SIM card. */

/* Bits 9..0 : Divider for setting the baud rate to the SIM card.(Baud rate  = Sim card clock/BaudRate). */
#define SIMIF_BAUDRATE_BAUDRATE_Pos (0UL) /*!< Position of BAUDRATE field. */
#define SIMIF_BAUDRATE_BAUDRATE_Msk (0x3FFUL << SIMIF_BAUDRATE_BAUDRATE_Pos) /*!< Bit mask of BAUDRATE field. */

/* Register: SIMIF_CHARACTERGUARDTIME */
/* Description: Character Guard time */

/* Bits 7..0 : Guard time from leading edge of the character to the leading edge of the next character in ETU */
#define SIMIF_CHARACTERGUARDTIME_CHARACTERGUARDTIME_Pos (0UL) /*!< Position of CHARACTERGUARDTIME field. */
#define SIMIF_CHARACTERGUARDTIME_CHARACTERGUARDTIME_Msk (0xFFUL << SIMIF_CHARACTERGUARDTIME_CHARACTERGUARDTIME_Pos) /*!< Bit mask of CHARACTERGUARDTIME field. */

/* Register: SIMIF_CHARACTERWAITTIME */
/* Description: Character Wait time */

/* Bits 7..0 : T=1 character Rx wait time in ETU */
#define SIMIF_CHARACTERWAITTIME_CHARACTERWAITTIME_Pos (0UL) /*!< Position of CHARACTERWAITTIME field. */
#define SIMIF_CHARACTERWAITTIME_CHARACTERWAITTIME_Msk (0xFFUL << SIMIF_CHARACTERWAITTIME_CHARACTERWAITTIME_Pos) /*!< Bit mask of CHARACTERWAITTIME field. */

/* Register: SIMIF_BLOCKWAITTIME */
/* Description: Block Wait time */

/* Bits 15..0 : Block wait time in ETU, default 9600 */
#define SIMIF_BLOCKWAITTIME_BLOCKWAITTIME_Pos (0UL) /*!< Position of BLOCKWAITTIME field. */
#define SIMIF_BLOCKWAITTIME_BLOCKWAITTIME_Msk (0xFFFFUL << SIMIF_BLOCKWAITTIME_BLOCKWAITTIME_Pos) /*!< Bit mask of BLOCKWAITTIME field. */

/* Register: SIMIF_PROTOCOL */
/* Description: Protocol selection */

/* Bit 0 : Protocol selection 0: T=0, 1: T=1 */
#define SIMIF_PROTOCOL_PROTOCOL_Pos (0UL) /*!< Position of PROTOCOL field. */
#define SIMIF_PROTOCOL_PROTOCOL_Msk (0x1UL << SIMIF_PROTOCOL_PROTOCOL_Pos) /*!< Bit mask of PROTOCOL field. */
#define SIMIF_PROTOCOL_PROTOCOL_T0 (0UL) /*!< T=0 */
#define SIMIF_PROTOCOL_PROTOCOL_T1 (1UL) /*!< T=1 */

/* Register: SIMIF_LOWIMPEDANCE */
/* Description: Low impedance driver use */

/* Bit 0 : Low impedance driver use */
#define SIMIF_LOWIMPEDANCE_LOWIMPEDANCE_Pos (0UL) /*!< Position of LOWIMPEDANCE field. */
#define SIMIF_LOWIMPEDANCE_LOWIMPEDANCE_Msk (0x1UL << SIMIF_LOWIMPEDANCE_LOWIMPEDANCE_Pos) /*!< Bit mask of LOWIMPEDANCE field. */
#define SIMIF_LOWIMPEDANCE_LOWIMPEDANCE_OpenDrain (0UL) /*!< open drain */
#define SIMIF_LOWIMPEDANCE_LOWIMPEDANCE_LowImpedance (1UL) /*!< use 		low impedance drivers */

/* Register: SIMIF_T1PCBCONTROL */
/* Description: T=1 Tx PCB bits 5:6 */

/* Bit 1 : Send Sequence number, PCB[6] */
#define SIMIF_T1PCBCONTROL_SENDSEQUENCENUMBER_Pos (1UL) /*!< Position of SENDSEQUENCENUMBER field. */
#define SIMIF_T1PCBCONTROL_SENDSEQUENCENUMBER_Msk (0x1UL << SIMIF_T1PCBCONTROL_SENDSEQUENCENUMBER_Pos) /*!< Bit mask of SENDSEQUENCENUMBER field. */

/* Bit 0 : More data (chaining) bit, PCB[5] */
#define SIMIF_T1PCBCONTROL_MOREDATABIT_Pos (0UL) /*!< Position of MOREDATABIT field. */
#define SIMIF_T1PCBCONTROL_MOREDATABIT_Msk (0x1UL << SIMIF_T1PCBCONTROL_MOREDATABIT_Pos) /*!< Bit mask of MOREDATABIT field. */

/* Register: SIMIF_CLOCKCONTROL */
/* Description: Clock Control */

/* Bits 2..1 : Clock stop state */
#define SIMIF_CLOCKCONTROL_CLOCKSTOP_Pos (1UL) /*!< Position of CLOCKSTOP field. */
#define SIMIF_CLOCKCONTROL_CLOCKSTOP_Msk (0x3UL << SIMIF_CLOCKCONTROL_CLOCKSTOP_Pos) /*!< Bit mask of CLOCKSTOP field. */
#define SIMIF_CLOCKCONTROL_CLOCKSTOP_Illegal (00UL) /*!< Not allowed */
#define SIMIF_CLOCKCONTROL_CLOCKSTOP_High (0x1UL) /*!< Clock stops low */
#define SIMIF_CLOCKCONTROL_CLOCKSTOP_Low (0x2UL) /*!< Clock stops high */

/* Bit 0 : Enable clock */
#define SIMIF_CLOCKCONTROL_ENABLE_Pos (0UL) /*!< Position of ENABLE field. */
#define SIMIF_CLOCKCONTROL_ENABLE_Msk (0x1UL << SIMIF_CLOCKCONTROL_ENABLE_Pos) /*!< Bit mask of ENABLE field. */
#define SIMIF_CLOCKCONTROL_ENABLE_ClockOff (0UL) /*!< Clock is off */
#define SIMIF_CLOCKCONTROL_ENABLE_ClockOn (1UL) /*!< Clock is on */

/* Register: SIMIF_VOLTAGE */
/* Description: Sim card operating voltage */

/* Bits 1..0 : Sim card operating voltage */
#define SIMIF_VOLTAGE_VOLTAGE_Pos (0UL) /*!< Position of VOLTAGE field. */
#define SIMIF_VOLTAGE_VOLTAGE_Msk (0x3UL << SIMIF_VOLTAGE_VOLTAGE_Pos) /*!< Bit mask of VOLTAGE field. */
#define SIMIF_VOLTAGE_VOLTAGE_0V (0x0UL) /*!< Card voltage off */
#define SIMIF_VOLTAGE_VOLTAGE_1800mV (0x1UL) /*!< Card operating voltage 1.8V */
#define SIMIF_VOLTAGE_VOLTAGE_3000mV (0x2UL) /*!< Card operating voltage 3V */

/* Register: SIMIF_LRCENABLE */
/* Description: LRC Calculation enable */

/* Bit 0 : LRC Calculation enable for T=1 */
#define SIMIF_LRCENABLE_LRCENABLE_Pos (0UL) /*!< Position of LRCENABLE field. */
#define SIMIF_LRCENABLE_LRCENABLE_Msk (0x1UL << SIMIF_LRCENABLE_LRCENABLE_Pos) /*!< Bit mask of LRCENABLE field. */
#define SIMIF_LRCENABLE_LRCENABLE_Disable (0UL) /*!< LRC calculation disabled */
#define SIMIF_LRCENABLE_LRCENABLE_Enable (1UL) /*!< LRC 			calculation enabled */

/* Register: SIMIF_TXDATA */
/* Description: NonDMA data to be sent to the SIM card */

/* Bits 7..0 : NonDMA data to be sent to the SIM card */
#define SIMIF_TXDATA_TXDATA_Pos (0UL) /*!< Position of TXDATA field. */
#define SIMIF_TXDATA_TXDATA_Msk (0xFFUL << SIMIF_TXDATA_TXDATA_Pos) /*!< Bit mask of TXDATA field. */

/* Register: SIMIF_UARTCONFIG */
/* Description: Uart configuration */

/* Bits 2..0 : Uart configuration, for details see Uart spec */
#define SIMIF_UARTCONFIG_UARTCONFIG_Pos (0UL) /*!< Position of UARTCONFIG field. */
#define SIMIF_UARTCONFIG_UARTCONFIG_Msk (0x7UL << SIMIF_UARTCONFIG_UARTCONFIG_Pos) /*!< Bit mask of UARTCONFIG field. */

/* Register: SIMIF_WRITEMAXATT */
/* Description: Number of write attempts before error interrupt */

/* Bits 7..0 : Number of write attempts before error interrupt */
#define SIMIF_WRITEMAXATT_WRITEMAXATT_Pos (0UL) /*!< Position of WRITEMAXATT field. */
#define SIMIF_WRITEMAXATT_WRITEMAXATT_Msk (0xFFUL << SIMIF_WRITEMAXATT_WRITEMAXATT_Pos) /*!< Bit mask of WRITEMAXATT field. */

/* Register: SIMIF_READMAXATT */
/* Description: Number of read attempts before error interrupt */

/* Bits 7..0 : Number of read attempts before error interrupt */
#define SIMIF_READMAXATT_READMAXATT_Pos (0UL) /*!< Position of READMAXATT field. */
#define SIMIF_READMAXATT_READMAXATT_Msk (0xFFUL << SIMIF_READMAXATT_READMAXATT_Pos) /*!< Bit mask of READMAXATT field. */

/* Register: SIMIF_UartEnable */
/* Description: UART Enable */

/* Bit 0 : UART master enable */
#define SIMIF_UartEnable_UartEnable_Pos (0UL) /*!< Position of UartEnable field. */
#define SIMIF_UartEnable_UartEnable_Msk (0x1UL << SIMIF_UartEnable_UartEnable_Pos) /*!< Bit mask of UartEnable field. */

/* Register: SIMIF_UartRxEnable */
/* Description: UART Rx Enable */

/* Bit 0 : UART Rx enable */
#define SIMIF_UartRxEnable_UartRxEnable_Pos (0UL) /*!< Position of UartRxEnable field. */
#define SIMIF_UartRxEnable_UartRxEnable_Msk (0x1UL << SIMIF_UartRxEnable_UartRxEnable_Pos) /*!< Bit mask of UartRxEnable field. */

/* Register: SIMIF_UartTxEnable */
/* Description: UART Tx Enable */

/* Bit 0 : UART Tx enable */
#define SIMIF_UartTxEnable_UartTxEnable_Pos (0UL) /*!< Position of UartTxEnable field. */
#define SIMIF_UartTxEnable_UartTxEnable_Msk (0x1UL << SIMIF_UartTxEnable_UartTxEnable_Pos) /*!< Bit mask of UartTxEnable field. */

/* Register: SIMIF_DMARXADDR */
/* Description: DMA access  buffer RAM start address */

/* Bits 31..0 : DMA access  buffer RAM start address */
#define SIMIF_DMARXADDR_DMARXSTARTADDRESS_Pos (0UL) /*!< Position of DMARXSTARTADDRESS field. */
#define SIMIF_DMARXADDR_DMARXSTARTADDRESS_Msk (0xFFFFFFFFUL << SIMIF_DMARXADDR_DMARXSTARTADDRESS_Pos) /*!< Bit mask of DMARXSTARTADDRESS field. */

/* Register: SIMIF_DMARXBUFFERSIZE */
/* Description: Byte count to receive in Dma Rx operation */

/* Bits 8..0 : Byte count to receive in Dma Rx operation */
#define SIMIF_DMARXBUFFERSIZE_DMARXBUFFERSIZE_Pos (0UL) /*!< Position of DMARXBUFFERSIZE field. */
#define SIMIF_DMARXBUFFERSIZE_DMARXBUFFERSIZE_Msk (0x1FFUL << SIMIF_DMARXBUFFERSIZE_DMARXBUFFERSIZE_Pos) /*!< Bit mask of DMARXBUFFERSIZE field. */

/* Register: SIMIF_DMARXBYTECOUNT */
/* Description: Byte count received in latest Dma Rx operation */

/* Bits 8..0 : Byte count received in latest Dma Rx operation */
#define SIMIF_DMARXBYTECOUNT_DMARXBYTECOUNT_Pos (0UL) /*!< Position of DMARXBYTECOUNT field. */
#define SIMIF_DMARXBYTECOUNT_DMARXBYTECOUNT_Msk (0x1FFUL << SIMIF_DMARXBYTECOUNT_DMARXBYTECOUNT_Pos) /*!< Bit mask of DMARXBYTECOUNT field. */

/* Register: SIMIF_DMARXENABLE */
/* Description: Enable for rx dma */

/* Bit 0 : Enable for rx dma */
#define SIMIF_DMARXENABLE_DMARXENABLE_Pos (0UL) /*!< Position of DMARXENABLE field. */
#define SIMIF_DMARXENABLE_DMARXENABLE_Msk (0x1UL << SIMIF_DMARXENABLE_DMARXENABLE_Pos) /*!< Bit mask of DMARXENABLE field. */

/* Register: SIMIF_DMARXSELECTLIST */
/* Description: Rx select address from list */

/* Bits 1..0 : Select address from list */
#define SIMIF_DMARXSELECTLIST_DMARXSELECTLIST_Pos (0UL) /*!< Position of DMARXSELECTLIST field. */
#define SIMIF_DMARXSELECTLIST_DMARXSELECTLIST_Msk (0x3UL << SIMIF_DMARXSELECTLIST_DMARXSELECTLIST_Pos) /*!< Bit mask of DMARXSELECTLIST field. */

/* Register: SIMIF_DMATXADDR */
/* Description: Start address for DMA access in buffer RAM */

/* Bits 31..0 : Start address for DMA access in buffer RAM */
#define SIMIF_DMATXADDR_DMATXSTARTADDRESS_Pos (0UL) /*!< Position of DMATXSTARTADDRESS field. */
#define SIMIF_DMATXADDR_DMATXSTARTADDRESS_Msk (0xFFFFFFFFUL << SIMIF_DMATXADDR_DMATXSTARTADDRESS_Pos) /*!< Bit mask of DMATXSTARTADDRESS field. */

/* Register: SIMIF_DMATXBUFFERSIZE */
/* Description: Byte count to transmit in Dma Rx operation */

/* Bits 8..0 : Byte count to transmit in Dma Tx operation */
#define SIMIF_DMATXBUFFERSIZE_DMATXBUFFERSIZE_Pos (0UL) /*!< Position of DMATXBUFFERSIZE field. */
#define SIMIF_DMATXBUFFERSIZE_DMATXBUFFERSIZE_Msk (0x1FFUL << SIMIF_DMATXBUFFERSIZE_DMATXBUFFERSIZE_Pos) /*!< Bit mask of DMATXBUFFERSIZE field. */

/* Register: SIMIF_DMATXBYTECOUNT */
/* Description: Byte count transmitted in latest Dma Tx operation */

/* Bits 8..0 : Byte count transmitted in latest Dma Tx operation */
#define SIMIF_DMATXBYTECOUNT_DMATXBYTECOUNT_Pos (0UL) /*!< Position of DMATXBYTECOUNT field. */
#define SIMIF_DMATXBYTECOUNT_DMATXBYTECOUNT_Msk (0x1FFUL << SIMIF_DMATXBYTECOUNT_DMATXBYTECOUNT_Pos) /*!< Bit mask of DMATXBYTECOUNT field. */

/* Register: SIMIF_DMATXENABLE */
/* Description: Enable for rx dma */

/* Bit 0 : Enable for rx dma */
#define SIMIF_DMATXENABLE_DMATXENABLE_Pos (0UL) /*!< Position of DMATXENABLE field. */
#define SIMIF_DMATXENABLE_DMATXENABLE_Msk (0x1UL << SIMIF_DMATXENABLE_DMATXENABLE_Pos) /*!< Bit mask of DMATXENABLE field. */

/* Register: SIMIF_DMATXSELECTLIST */
/* Description: Tx select address from list */

/* Bits 1..0 : Select address from list */
#define SIMIF_DMATXSELECTLIST_DMATXSELECTLIST_Pos (0UL) /*!< Position of DMATXSELECTLIST field. */
#define SIMIF_DMATXSELECTLIST_DMATXSELECTLIST_Msk (0x3UL << SIMIF_DMATXSELECTLIST_DMATXSELECTLIST_Pos) /*!< Bit mask of DMATXSELECTLIST field. */


/* Peripheral: SNOW */
/* Description: Snow 3G Security IP */

/* Register: SNOW_TASKS_STARTGATHER */
/* Description: Start input DMA */

/* Bit 0 : Start input DMA */
#define SNOW_TASKS_STARTGATHER_TASKS_STARTGATHER_Pos (0UL) /*!< Position of TASKS_STARTGATHER field. */
#define SNOW_TASKS_STARTGATHER_TASKS_STARTGATHER_Msk (0x1UL << SNOW_TASKS_STARTGATHER_TASKS_STARTGATHER_Pos) /*!< Bit mask of TASKS_STARTGATHER field. */
#define SNOW_TASKS_STARTGATHER_TASKS_STARTGATHER_Trigger (1UL) /*!< Trigger task */

/* Register: SNOW_TASKS_STOPGATHER */
/* Description: Stop  input DMA */

/* Bit 0 : Stop  input DMA */
#define SNOW_TASKS_STOPGATHER_TASKS_STOPGATHER_Pos (0UL) /*!< Position of TASKS_STOPGATHER field. */
#define SNOW_TASKS_STOPGATHER_TASKS_STOPGATHER_Msk (0x1UL << SNOW_TASKS_STOPGATHER_TASKS_STOPGATHER_Pos) /*!< Bit mask of TASKS_STOPGATHER field. */
#define SNOW_TASKS_STOPGATHER_TASKS_STOPGATHER_Trigger (1UL) /*!< Trigger task */

/* Register: SNOW_TASKS_STARTSCATTER */
/* Description: Start output DMA */

/* Bit 0 : Start output DMA */
#define SNOW_TASKS_STARTSCATTER_TASKS_STARTSCATTER_Pos (0UL) /*!< Position of TASKS_STARTSCATTER field. */
#define SNOW_TASKS_STARTSCATTER_TASKS_STARTSCATTER_Msk (0x1UL << SNOW_TASKS_STARTSCATTER_TASKS_STARTSCATTER_Pos) /*!< Bit mask of TASKS_STARTSCATTER field. */
#define SNOW_TASKS_STARTSCATTER_TASKS_STARTSCATTER_Trigger (1UL) /*!< Trigger task */

/* Register: SNOW_TASKS_STOPSCATTER */
/* Description: Stop  output DMA */

/* Bit 0 : Stop  output DMA */
#define SNOW_TASKS_STOPSCATTER_TASKS_STOPSCATTER_Pos (0UL) /*!< Position of TASKS_STOPSCATTER field. */
#define SNOW_TASKS_STOPSCATTER_TASKS_STOPSCATTER_Msk (0x1UL << SNOW_TASKS_STOPSCATTER_TASKS_STOPSCATTER_Pos) /*!< Bit mask of TASKS_STOPSCATTER field. */
#define SNOW_TASKS_STOPSCATTER_TASKS_STOPSCATTER_Trigger (1UL) /*!< Trigger task */

/* Register: SNOW_TASKS_INITIALIZESNOW3G */
/* Description: New keys (and IV) ready to be used, reset keybytes, ivbytes */

/* Bit 0 : New keys (and IV) ready to be used, reset keybytes, ivbytes */
#define SNOW_TASKS_INITIALIZESNOW3G_TASKS_INITIALIZESNOW3G_Pos (0UL) /*!< Position of TASKS_INITIALIZESNOW3G field. */
#define SNOW_TASKS_INITIALIZESNOW3G_TASKS_INITIALIZESNOW3G_Msk (0x1UL << SNOW_TASKS_INITIALIZESNOW3G_TASKS_INITIALIZESNOW3G_Pos) /*!< Bit mask of TASKS_INITIALIZESNOW3G field. */
#define SNOW_TASKS_INITIALIZESNOW3G_TASKS_INITIALIZESNOW3G_Trigger (1UL) /*!< Trigger task */

/* Register: SNOW_TASKS_STARTOPERATION */
/* Description: Start cipher / MAC calculation depending on MODE */

/* Bit 0 : Start cipher / MAC calculation depending on MODE */
#define SNOW_TASKS_STARTOPERATION_TASKS_STARTOPERATION_Pos (0UL) /*!< Position of TASKS_STARTOPERATION field. */
#define SNOW_TASKS_STARTOPERATION_TASKS_STARTOPERATION_Msk (0x1UL << SNOW_TASKS_STARTOPERATION_TASKS_STARTOPERATION_Pos) /*!< Bit mask of TASKS_STARTOPERATION field. */
#define SNOW_TASKS_STARTOPERATION_TASKS_STARTOPERATION_Trigger (1UL) /*!< Trigger task */

/* Register: SNOW_TASKS_FINALIZEMAC */
/* Description: Finalize MAC calculation */

/* Bit 0 : Finalize MAC calculation */
#define SNOW_TASKS_FINALIZEMAC_TASKS_FINALIZEMAC_Pos (0UL) /*!< Position of TASKS_FINALIZEMAC field. */
#define SNOW_TASKS_FINALIZEMAC_TASKS_FINALIZEMAC_Msk (0x1UL << SNOW_TASKS_FINALIZEMAC_TASKS_FINALIZEMAC_Pos) /*!< Bit mask of TASKS_FINALIZEMAC field. */
#define SNOW_TASKS_FINALIZEMAC_TASKS_FINALIZEMAC_Trigger (1UL) /*!< Trigger task */

/* Register: SNOW_TASKS_RESET */
/* Description: Stop all transfers and crypto operations (initialize) */

/* Bit 0 : Stop all transfers and crypto operations (initialize) */
#define SNOW_TASKS_RESET_TASKS_RESET_Pos (0UL) /*!< Position of TASKS_RESET field. */
#define SNOW_TASKS_RESET_TASKS_RESET_Msk (0x1UL << SNOW_TASKS_RESET_TASKS_RESET_Pos) /*!< Bit mask of TASKS_RESET field. */
#define SNOW_TASKS_RESET_TASKS_RESET_Trigger (1UL) /*!< Trigger task */

/* Register: SNOW_TaskZeroPenalty_PCP_1 */
/* Description: TaskZeroPenalty register for PCP 1 */

/* Bit 0 :   */
#define SNOW_TaskZeroPenalty_PCP_1_ZeroTask_Pos (0UL) /*!< Position of ZeroTask field. */
#define SNOW_TaskZeroPenalty_PCP_1_ZeroTask_Msk (0x1UL << SNOW_TaskZeroPenalty_PCP_1_ZeroTask_Pos) /*!< Bit mask of ZeroTask field. */
#define SNOW_TaskZeroPenalty_PCP_1_ZeroTask_ZeroTask (1UL) /*!< Set Zero Penalty */

/* Register: SNOW_TaskFullPenalty_PCP_1 */
/* Description: TaskFullPenalty register for PCP 1 */

/* Bit 0 :   */
#define SNOW_TaskFullPenalty_PCP_1_FullTask_Pos (0UL) /*!< Position of FullTask field. */
#define SNOW_TaskFullPenalty_PCP_1_FullTask_Msk (0x1UL << SNOW_TaskFullPenalty_PCP_1_FullTask_Pos) /*!< Bit mask of FullTask field. */
#define SNOW_TaskFullPenalty_PCP_1_FullTask_FullTask (1UL) /*!< Set Full Penalty */

/* Register: SNOW_TaskZeroPenalty_PCP_0 */
/* Description: TaskZeroPenalty register for PCP 0 */

/* Bit 0 :   */
#define SNOW_TaskZeroPenalty_PCP_0_ZeroTask_Pos (0UL) /*!< Position of ZeroTask field. */
#define SNOW_TaskZeroPenalty_PCP_0_ZeroTask_Msk (0x1UL << SNOW_TaskZeroPenalty_PCP_0_ZeroTask_Pos) /*!< Bit mask of ZeroTask field. */
#define SNOW_TaskZeroPenalty_PCP_0_ZeroTask_ZeroTask (1UL) /*!< Set Zero Penalty */

/* Register: SNOW_TaskFullPenalty_PCP_0 */
/* Description: TaskFullPenalty register for PCP 0 */

/* Bit 0 :   */
#define SNOW_TaskFullPenalty_PCP_0_FullTask_Pos (0UL) /*!< Position of FullTask field. */
#define SNOW_TaskFullPenalty_PCP_0_FullTask_Msk (0x1UL << SNOW_TaskFullPenalty_PCP_0_FullTask_Pos) /*!< Bit mask of FullTask field. */
#define SNOW_TaskFullPenalty_PCP_0_FullTask_FullTask (1UL) /*!< Set Full Penalty */

/* Register: SNOW_EVENTS_GATHERSTARTED */
/* Description: Input DMA started */

/* Bit 0 : Input DMA started */
#define SNOW_EVENTS_GATHERSTARTED_EVENTS_GATHERSTARTED_Pos (0UL) /*!< Position of EVENTS_GATHERSTARTED field. */
#define SNOW_EVENTS_GATHERSTARTED_EVENTS_GATHERSTARTED_Msk (0x1UL << SNOW_EVENTS_GATHERSTARTED_EVENTS_GATHERSTARTED_Pos) /*!< Bit mask of EVENTS_GATHERSTARTED field. */
#define SNOW_EVENTS_GATHERSTARTED_EVENTS_GATHERSTARTED_NotGenerated (0UL) /*!< Event not generated */
#define SNOW_EVENTS_GATHERSTARTED_EVENTS_GATHERSTARTED_Generated (1UL) /*!< Event generated */

/* Register: SNOW_EVENTS_GATHERDONE */
/* Description: Input DMA done */

/* Bit 0 : Input DMA done */
#define SNOW_EVENTS_GATHERDONE_EVENTS_GATHERDONE_Pos (0UL) /*!< Position of EVENTS_GATHERDONE field. */
#define SNOW_EVENTS_GATHERDONE_EVENTS_GATHERDONE_Msk (0x1UL << SNOW_EVENTS_GATHERDONE_EVENTS_GATHERDONE_Pos) /*!< Bit mask of EVENTS_GATHERDONE field. */
#define SNOW_EVENTS_GATHERDONE_EVENTS_GATHERDONE_NotGenerated (0UL) /*!< Event not generated */
#define SNOW_EVENTS_GATHERDONE_EVENTS_GATHERDONE_Generated (1UL) /*!< Event generated */

/* Register: SNOW_EVENTS_SCATTERSTARTED */
/* Description: Output DMA started */

/* Bit 0 : Output DMA started */
#define SNOW_EVENTS_SCATTERSTARTED_EVENTS_SCATTERSTARTED_Pos (0UL) /*!< Position of EVENTS_SCATTERSTARTED field. */
#define SNOW_EVENTS_SCATTERSTARTED_EVENTS_SCATTERSTARTED_Msk (0x1UL << SNOW_EVENTS_SCATTERSTARTED_EVENTS_SCATTERSTARTED_Pos) /*!< Bit mask of EVENTS_SCATTERSTARTED field. */
#define SNOW_EVENTS_SCATTERSTARTED_EVENTS_SCATTERSTARTED_NotGenerated (0UL) /*!< Event not generated */
#define SNOW_EVENTS_SCATTERSTARTED_EVENTS_SCATTERSTARTED_Generated (1UL) /*!< Event generated */

/* Register: SNOW_EVENTS_SCATTERDONE */
/* Description: Output DMA done */

/* Bit 0 : Output DMA done */
#define SNOW_EVENTS_SCATTERDONE_EVENTS_SCATTERDONE_Pos (0UL) /*!< Position of EVENTS_SCATTERDONE field. */
#define SNOW_EVENTS_SCATTERDONE_EVENTS_SCATTERDONE_Msk (0x1UL << SNOW_EVENTS_SCATTERDONE_EVENTS_SCATTERDONE_Pos) /*!< Bit mask of EVENTS_SCATTERDONE field. */
#define SNOW_EVENTS_SCATTERDONE_EVENTS_SCATTERDONE_NotGenerated (0UL) /*!< Event not generated */
#define SNOW_EVENTS_SCATTERDONE_EVENTS_SCATTERDONE_Generated (1UL) /*!< Event generated */

/* Register: SNOW_EVENTS_IVREADY */
/* Description: IV received (ivbytes == 16) */

/* Bit 0 : IV received (ivbytes == 16) */
#define SNOW_EVENTS_IVREADY_EVENTS_IVREADY_Pos (0UL) /*!< Position of EVENTS_IVREADY field. */
#define SNOW_EVENTS_IVREADY_EVENTS_IVREADY_Msk (0x1UL << SNOW_EVENTS_IVREADY_EVENTS_IVREADY_Pos) /*!< Bit mask of EVENTS_IVREADY field. */
#define SNOW_EVENTS_IVREADY_EVENTS_IVREADY_NotGenerated (0UL) /*!< Event not generated */
#define SNOW_EVENTS_IVREADY_EVENTS_IVREADY_Generated (1UL) /*!< Event generated */

/* Register: SNOW_EVENTS_SNOW3GINITIALIZED */
/* Description: New keys and IV taken into use */

/* Bit 0 : New keys and IV taken into use */
#define SNOW_EVENTS_SNOW3GINITIALIZED_EVENTS_SNOW3GINITIALIZED_Pos (0UL) /*!< Position of EVENTS_SNOW3GINITIALIZED field. */
#define SNOW_EVENTS_SNOW3GINITIALIZED_EVENTS_SNOW3GINITIALIZED_Msk (0x1UL << SNOW_EVENTS_SNOW3GINITIALIZED_EVENTS_SNOW3GINITIALIZED_Pos) /*!< Bit mask of EVENTS_SNOW3GINITIALIZED field. */
#define SNOW_EVENTS_SNOW3GINITIALIZED_EVENTS_SNOW3GINITIALIZED_NotGenerated (0UL) /*!< Event not generated */
#define SNOW_EVENTS_SNOW3GINITIALIZED_EVENTS_SNOW3GINITIALIZED_Generated (1UL) /*!< Event generated */

/* Register: SNOW_EVENTS_MESSAGEREADY */
/* Description: LENGTH == 0 */

/* Bit 0 : LENGTH == 0 */
#define SNOW_EVENTS_MESSAGEREADY_EVENTS_MESSAGEREADY_Pos (0UL) /*!< Position of EVENTS_MESSAGEREADY field. */
#define SNOW_EVENTS_MESSAGEREADY_EVENTS_MESSAGEREADY_Msk (0x1UL << SNOW_EVENTS_MESSAGEREADY_EVENTS_MESSAGEREADY_Pos) /*!< Bit mask of EVENTS_MESSAGEREADY field. */
#define SNOW_EVENTS_MESSAGEREADY_EVENTS_MESSAGEREADY_NotGenerated (0UL) /*!< Event not generated */
#define SNOW_EVENTS_MESSAGEREADY_EVENTS_MESSAGEREADY_Generated (1UL) /*!< Event generated */

/* Register: SNOW_EVENTS_MACREADY */
/* Description: MAC calculated */

/* Bit 0 : MAC calculated */
#define SNOW_EVENTS_MACREADY_EVENTS_MACREADY_Pos (0UL) /*!< Position of EVENTS_MACREADY field. */
#define SNOW_EVENTS_MACREADY_EVENTS_MACREADY_Msk (0x1UL << SNOW_EVENTS_MACREADY_EVENTS_MACREADY_Pos) /*!< Bit mask of EVENTS_MACREADY field. */
#define SNOW_EVENTS_MACREADY_EVENTS_MACREADY_NotGenerated (0UL) /*!< Event not generated */
#define SNOW_EVENTS_MACREADY_EVENTS_MACREADY_Generated (1UL) /*!< Event generated */

/* Register: SNOW_EVENTS_RESETTED */
/* Description: Resetted (all transfers and crypto operations stopped) */

/* Bit 0 : Resetted (all transfers and crypto operations stopped) */
#define SNOW_EVENTS_RESETTED_EVENTS_RESETTED_Pos (0UL) /*!< Position of EVENTS_RESETTED field. */
#define SNOW_EVENTS_RESETTED_EVENTS_RESETTED_Msk (0x1UL << SNOW_EVENTS_RESETTED_EVENTS_RESETTED_Pos) /*!< Bit mask of EVENTS_RESETTED field. */
#define SNOW_EVENTS_RESETTED_EVENTS_RESETTED_NotGenerated (0UL) /*!< Event not generated */
#define SNOW_EVENTS_RESETTED_EVENTS_RESETTED_Generated (1UL) /*!< Event generated */

/* Register: SNOW_SHORTS */
/* Description: Shortcuts between local events and tasks */

/* Bit 6 : Shortcut between event MACREADY and task RESET */
#define SNOW_SHORTS_MACREADY_RESET_Pos (6UL) /*!< Position of MACREADY_RESET field. */
#define SNOW_SHORTS_MACREADY_RESET_Msk (0x1UL << SNOW_SHORTS_MACREADY_RESET_Pos) /*!< Bit mask of MACREADY_RESET field. */
#define SNOW_SHORTS_MACREADY_RESET_Disabled (0UL) /*!< Disable shortcut */
#define SNOW_SHORTS_MACREADY_RESET_Enabled (1UL) /*!< Enable shortcut */

/* Bit 5 : Shortcut between event SCATTERDONE and task RESET */
#define SNOW_SHORTS_SCATTERDONE_RESET_Pos (5UL) /*!< Position of SCATTERDONE_RESET field. */
#define SNOW_SHORTS_SCATTERDONE_RESET_Msk (0x1UL << SNOW_SHORTS_SCATTERDONE_RESET_Pos) /*!< Bit mask of SCATTERDONE_RESET field. */
#define SNOW_SHORTS_SCATTERDONE_RESET_Disabled (0UL) /*!< Disable shortcut */
#define SNOW_SHORTS_SCATTERDONE_RESET_Enabled (1UL) /*!< Enable shortcut */

/* Bit 4 : Shortcut between event SNOW3GINITIALIZED and task STARTGATHER */
#define SNOW_SHORTS_SNOW3GINITIALIZED_STARTGATHER_Pos (4UL) /*!< Position of SNOW3GINITIALIZED_STARTGATHER field. */
#define SNOW_SHORTS_SNOW3GINITIALIZED_STARTGATHER_Msk (0x1UL << SNOW_SHORTS_SNOW3GINITIALIZED_STARTGATHER_Pos) /*!< Bit mask of SNOW3GINITIALIZED_STARTGATHER field. */
#define SNOW_SHORTS_SNOW3GINITIALIZED_STARTGATHER_Disabled (0UL) /*!< Disable shortcut */
#define SNOW_SHORTS_SNOW3GINITIALIZED_STARTGATHER_Enabled (1UL) /*!< Enable shortcut */

/* Bit 3 : Shortcut between event MESSAGEREADY and task FINALIZEMAC */
#define SNOW_SHORTS_MESSAGEREADY_FINALIZEMAC_Pos (3UL) /*!< Position of MESSAGEREADY_FINALIZEMAC field. */
#define SNOW_SHORTS_MESSAGEREADY_FINALIZEMAC_Msk (0x1UL << SNOW_SHORTS_MESSAGEREADY_FINALIZEMAC_Pos) /*!< Bit mask of MESSAGEREADY_FINALIZEMAC field. */
#define SNOW_SHORTS_MESSAGEREADY_FINALIZEMAC_Disabled (0UL) /*!< Disable shortcut */
#define SNOW_SHORTS_MESSAGEREADY_FINALIZEMAC_Enabled (1UL) /*!< Enable shortcut */

/* Bit 2 : Shortcut between event SNOW3GINITIALIZED and task STARTOPERATION */
#define SNOW_SHORTS_SNOW3GINITIALIZED_STARTOPERATION_Pos (2UL) /*!< Position of SNOW3GINITIALIZED_STARTOPERATION field. */
#define SNOW_SHORTS_SNOW3GINITIALIZED_STARTOPERATION_Msk (0x1UL << SNOW_SHORTS_SNOW3GINITIALIZED_STARTOPERATION_Pos) /*!< Bit mask of SNOW3GINITIALIZED_STARTOPERATION field. */
#define SNOW_SHORTS_SNOW3GINITIALIZED_STARTOPERATION_Disabled (0UL) /*!< Disable shortcut */
#define SNOW_SHORTS_SNOW3GINITIALIZED_STARTOPERATION_Enabled (1UL) /*!< Enable shortcut */

/* Bit 1 : Shortcut between event IVREADY and task INITIALIZESNOW3G */
#define SNOW_SHORTS_IVREADY_INITIALIZESNOW3G_Pos (1UL) /*!< Position of IVREADY_INITIALIZESNOW3G field. */
#define SNOW_SHORTS_IVREADY_INITIALIZESNOW3G_Msk (0x1UL << SNOW_SHORTS_IVREADY_INITIALIZESNOW3G_Pos) /*!< Bit mask of IVREADY_INITIALIZESNOW3G field. */
#define SNOW_SHORTS_IVREADY_INITIALIZESNOW3G_Disabled (0UL) /*!< Disable shortcut */
#define SNOW_SHORTS_IVREADY_INITIALIZESNOW3G_Enabled (1UL) /*!< Enable shortcut */

/* Bit 0 : Shortcut between event GATHERSTARTED and task STARTSCATTER */
#define SNOW_SHORTS_GATHERSTARTED_STARTSCATTER_Pos (0UL) /*!< Position of GATHERSTARTED_STARTSCATTER field. */
#define SNOW_SHORTS_GATHERSTARTED_STARTSCATTER_Msk (0x1UL << SNOW_SHORTS_GATHERSTARTED_STARTSCATTER_Pos) /*!< Bit mask of GATHERSTARTED_STARTSCATTER field. */
#define SNOW_SHORTS_GATHERSTARTED_STARTSCATTER_Disabled (0UL) /*!< Disable shortcut */
#define SNOW_SHORTS_GATHERSTARTED_STARTSCATTER_Enabled (1UL) /*!< Enable shortcut */

/* Register: SNOW_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 8 : Enable or disable interrupt for event RESETTED */
#define SNOW_INTEN_RESETTED_Pos (8UL) /*!< Position of RESETTED field. */
#define SNOW_INTEN_RESETTED_Msk (0x1UL << SNOW_INTEN_RESETTED_Pos) /*!< Bit mask of RESETTED field. */
#define SNOW_INTEN_RESETTED_Disabled (0UL) /*!< Disable */
#define SNOW_INTEN_RESETTED_Enabled (1UL) /*!< Enable */

/* Bit 7 : Enable or disable interrupt for event MACREADY */
#define SNOW_INTEN_MACREADY_Pos (7UL) /*!< Position of MACREADY field. */
#define SNOW_INTEN_MACREADY_Msk (0x1UL << SNOW_INTEN_MACREADY_Pos) /*!< Bit mask of MACREADY field. */
#define SNOW_INTEN_MACREADY_Disabled (0UL) /*!< Disable */
#define SNOW_INTEN_MACREADY_Enabled (1UL) /*!< Enable */

/* Bit 6 : Enable or disable interrupt for event MESSAGEREADY */
#define SNOW_INTEN_MESSAGEREADY_Pos (6UL) /*!< Position of MESSAGEREADY field. */
#define SNOW_INTEN_MESSAGEREADY_Msk (0x1UL << SNOW_INTEN_MESSAGEREADY_Pos) /*!< Bit mask of MESSAGEREADY field. */
#define SNOW_INTEN_MESSAGEREADY_Disabled (0UL) /*!< Disable */
#define SNOW_INTEN_MESSAGEREADY_Enabled (1UL) /*!< Enable */

/* Bit 5 : Enable or disable interrupt for event SNOW3GINITIALIZED */
#define SNOW_INTEN_SNOW3GINITIALIZED_Pos (5UL) /*!< Position of SNOW3GINITIALIZED field. */
#define SNOW_INTEN_SNOW3GINITIALIZED_Msk (0x1UL << SNOW_INTEN_SNOW3GINITIALIZED_Pos) /*!< Bit mask of SNOW3GINITIALIZED field. */
#define SNOW_INTEN_SNOW3GINITIALIZED_Disabled (0UL) /*!< Disable */
#define SNOW_INTEN_SNOW3GINITIALIZED_Enabled (1UL) /*!< Enable */

/* Bit 4 : Enable or disable interrupt for event IVREADY */
#define SNOW_INTEN_IVREADY_Pos (4UL) /*!< Position of IVREADY field. */
#define SNOW_INTEN_IVREADY_Msk (0x1UL << SNOW_INTEN_IVREADY_Pos) /*!< Bit mask of IVREADY field. */
#define SNOW_INTEN_IVREADY_Disabled (0UL) /*!< Disable */
#define SNOW_INTEN_IVREADY_Enabled (1UL) /*!< Enable */

/* Bit 3 : Enable or disable interrupt for event SCATTERDONE */
#define SNOW_INTEN_SCATTERDONE_Pos (3UL) /*!< Position of SCATTERDONE field. */
#define SNOW_INTEN_SCATTERDONE_Msk (0x1UL << SNOW_INTEN_SCATTERDONE_Pos) /*!< Bit mask of SCATTERDONE field. */
#define SNOW_INTEN_SCATTERDONE_Disabled (0UL) /*!< Disable */
#define SNOW_INTEN_SCATTERDONE_Enabled (1UL) /*!< Enable */

/* Bit 2 : Enable or disable interrupt for event SCATTERSTARTED */
#define SNOW_INTEN_SCATTERSTARTED_Pos (2UL) /*!< Position of SCATTERSTARTED field. */
#define SNOW_INTEN_SCATTERSTARTED_Msk (0x1UL << SNOW_INTEN_SCATTERSTARTED_Pos) /*!< Bit mask of SCATTERSTARTED field. */
#define SNOW_INTEN_SCATTERSTARTED_Disabled (0UL) /*!< Disable */
#define SNOW_INTEN_SCATTERSTARTED_Enabled (1UL) /*!< Enable */

/* Bit 1 : Enable or disable interrupt for event GATHERDONE */
#define SNOW_INTEN_GATHERDONE_Pos (1UL) /*!< Position of GATHERDONE field. */
#define SNOW_INTEN_GATHERDONE_Msk (0x1UL << SNOW_INTEN_GATHERDONE_Pos) /*!< Bit mask of GATHERDONE field. */
#define SNOW_INTEN_GATHERDONE_Disabled (0UL) /*!< Disable */
#define SNOW_INTEN_GATHERDONE_Enabled (1UL) /*!< Enable */

/* Bit 0 : Enable or disable interrupt for event GATHERSTARTED */
#define SNOW_INTEN_GATHERSTARTED_Pos (0UL) /*!< Position of GATHERSTARTED field. */
#define SNOW_INTEN_GATHERSTARTED_Msk (0x1UL << SNOW_INTEN_GATHERSTARTED_Pos) /*!< Bit mask of GATHERSTARTED field. */
#define SNOW_INTEN_GATHERSTARTED_Disabled (0UL) /*!< Disable */
#define SNOW_INTEN_GATHERSTARTED_Enabled (1UL) /*!< Enable */

/* Register: SNOW_INTENSET */
/* Description: Enable interrupt */

/* Bit 8 : Write '1' to enable interrupt for event RESETTED */
#define SNOW_INTENSET_RESETTED_Pos (8UL) /*!< Position of RESETTED field. */
#define SNOW_INTENSET_RESETTED_Msk (0x1UL << SNOW_INTENSET_RESETTED_Pos) /*!< Bit mask of RESETTED field. */
#define SNOW_INTENSET_RESETTED_Disabled (0UL) /*!< Read: Disabled */
#define SNOW_INTENSET_RESETTED_Enabled (1UL) /*!< Read: Enabled */
#define SNOW_INTENSET_RESETTED_Set (1UL) /*!< Enable */

/* Bit 7 : Write '1' to enable interrupt for event MACREADY */
#define SNOW_INTENSET_MACREADY_Pos (7UL) /*!< Position of MACREADY field. */
#define SNOW_INTENSET_MACREADY_Msk (0x1UL << SNOW_INTENSET_MACREADY_Pos) /*!< Bit mask of MACREADY field. */
#define SNOW_INTENSET_MACREADY_Disabled (0UL) /*!< Read: Disabled */
#define SNOW_INTENSET_MACREADY_Enabled (1UL) /*!< Read: Enabled */
#define SNOW_INTENSET_MACREADY_Set (1UL) /*!< Enable */

/* Bit 6 : Write '1' to enable interrupt for event MESSAGEREADY */
#define SNOW_INTENSET_MESSAGEREADY_Pos (6UL) /*!< Position of MESSAGEREADY field. */
#define SNOW_INTENSET_MESSAGEREADY_Msk (0x1UL << SNOW_INTENSET_MESSAGEREADY_Pos) /*!< Bit mask of MESSAGEREADY field. */
#define SNOW_INTENSET_MESSAGEREADY_Disabled (0UL) /*!< Read: Disabled */
#define SNOW_INTENSET_MESSAGEREADY_Enabled (1UL) /*!< Read: Enabled */
#define SNOW_INTENSET_MESSAGEREADY_Set (1UL) /*!< Enable */

/* Bit 5 : Write '1' to enable interrupt for event SNOW3GINITIALIZED */
#define SNOW_INTENSET_SNOW3GINITIALIZED_Pos (5UL) /*!< Position of SNOW3GINITIALIZED field. */
#define SNOW_INTENSET_SNOW3GINITIALIZED_Msk (0x1UL << SNOW_INTENSET_SNOW3GINITIALIZED_Pos) /*!< Bit mask of SNOW3GINITIALIZED field. */
#define SNOW_INTENSET_SNOW3GINITIALIZED_Disabled (0UL) /*!< Read: Disabled */
#define SNOW_INTENSET_SNOW3GINITIALIZED_Enabled (1UL) /*!< Read: Enabled */
#define SNOW_INTENSET_SNOW3GINITIALIZED_Set (1UL) /*!< Enable */

/* Bit 4 : Write '1' to enable interrupt for event IVREADY */
#define SNOW_INTENSET_IVREADY_Pos (4UL) /*!< Position of IVREADY field. */
#define SNOW_INTENSET_IVREADY_Msk (0x1UL << SNOW_INTENSET_IVREADY_Pos) /*!< Bit mask of IVREADY field. */
#define SNOW_INTENSET_IVREADY_Disabled (0UL) /*!< Read: Disabled */
#define SNOW_INTENSET_IVREADY_Enabled (1UL) /*!< Read: Enabled */
#define SNOW_INTENSET_IVREADY_Set (1UL) /*!< Enable */

/* Bit 3 : Write '1' to enable interrupt for event SCATTERDONE */
#define SNOW_INTENSET_SCATTERDONE_Pos (3UL) /*!< Position of SCATTERDONE field. */
#define SNOW_INTENSET_SCATTERDONE_Msk (0x1UL << SNOW_INTENSET_SCATTERDONE_Pos) /*!< Bit mask of SCATTERDONE field. */
#define SNOW_INTENSET_SCATTERDONE_Disabled (0UL) /*!< Read: Disabled */
#define SNOW_INTENSET_SCATTERDONE_Enabled (1UL) /*!< Read: Enabled */
#define SNOW_INTENSET_SCATTERDONE_Set (1UL) /*!< Enable */

/* Bit 2 : Write '1' to enable interrupt for event SCATTERSTARTED */
#define SNOW_INTENSET_SCATTERSTARTED_Pos (2UL) /*!< Position of SCATTERSTARTED field. */
#define SNOW_INTENSET_SCATTERSTARTED_Msk (0x1UL << SNOW_INTENSET_SCATTERSTARTED_Pos) /*!< Bit mask of SCATTERSTARTED field. */
#define SNOW_INTENSET_SCATTERSTARTED_Disabled (0UL) /*!< Read: Disabled */
#define SNOW_INTENSET_SCATTERSTARTED_Enabled (1UL) /*!< Read: Enabled */
#define SNOW_INTENSET_SCATTERSTARTED_Set (1UL) /*!< Enable */

/* Bit 1 : Write '1' to enable interrupt for event GATHERDONE */
#define SNOW_INTENSET_GATHERDONE_Pos (1UL) /*!< Position of GATHERDONE field. */
#define SNOW_INTENSET_GATHERDONE_Msk (0x1UL << SNOW_INTENSET_GATHERDONE_Pos) /*!< Bit mask of GATHERDONE field. */
#define SNOW_INTENSET_GATHERDONE_Disabled (0UL) /*!< Read: Disabled */
#define SNOW_INTENSET_GATHERDONE_Enabled (1UL) /*!< Read: Enabled */
#define SNOW_INTENSET_GATHERDONE_Set (1UL) /*!< Enable */

/* Bit 0 : Write '1' to enable interrupt for event GATHERSTARTED */
#define SNOW_INTENSET_GATHERSTARTED_Pos (0UL) /*!< Position of GATHERSTARTED field. */
#define SNOW_INTENSET_GATHERSTARTED_Msk (0x1UL << SNOW_INTENSET_GATHERSTARTED_Pos) /*!< Bit mask of GATHERSTARTED field. */
#define SNOW_INTENSET_GATHERSTARTED_Disabled (0UL) /*!< Read: Disabled */
#define SNOW_INTENSET_GATHERSTARTED_Enabled (1UL) /*!< Read: Enabled */
#define SNOW_INTENSET_GATHERSTARTED_Set (1UL) /*!< Enable */

/* Register: SNOW_INTENCLR */
/* Description: Disable interrupt */

/* Bit 8 : Write '1' to disable interrupt for event RESETTED */
#define SNOW_INTENCLR_RESETTED_Pos (8UL) /*!< Position of RESETTED field. */
#define SNOW_INTENCLR_RESETTED_Msk (0x1UL << SNOW_INTENCLR_RESETTED_Pos) /*!< Bit mask of RESETTED field. */
#define SNOW_INTENCLR_RESETTED_Disabled (0UL) /*!< Read: Disabled */
#define SNOW_INTENCLR_RESETTED_Enabled (1UL) /*!< Read: Enabled */
#define SNOW_INTENCLR_RESETTED_Clear (1UL) /*!< Disable */

/* Bit 7 : Write '1' to disable interrupt for event MACREADY */
#define SNOW_INTENCLR_MACREADY_Pos (7UL) /*!< Position of MACREADY field. */
#define SNOW_INTENCLR_MACREADY_Msk (0x1UL << SNOW_INTENCLR_MACREADY_Pos) /*!< Bit mask of MACREADY field. */
#define SNOW_INTENCLR_MACREADY_Disabled (0UL) /*!< Read: Disabled */
#define SNOW_INTENCLR_MACREADY_Enabled (1UL) /*!< Read: Enabled */
#define SNOW_INTENCLR_MACREADY_Clear (1UL) /*!< Disable */

/* Bit 6 : Write '1' to disable interrupt for event MESSAGEREADY */
#define SNOW_INTENCLR_MESSAGEREADY_Pos (6UL) /*!< Position of MESSAGEREADY field. */
#define SNOW_INTENCLR_MESSAGEREADY_Msk (0x1UL << SNOW_INTENCLR_MESSAGEREADY_Pos) /*!< Bit mask of MESSAGEREADY field. */
#define SNOW_INTENCLR_MESSAGEREADY_Disabled (0UL) /*!< Read: Disabled */
#define SNOW_INTENCLR_MESSAGEREADY_Enabled (1UL) /*!< Read: Enabled */
#define SNOW_INTENCLR_MESSAGEREADY_Clear (1UL) /*!< Disable */

/* Bit 5 : Write '1' to disable interrupt for event SNOW3GINITIALIZED */
#define SNOW_INTENCLR_SNOW3GINITIALIZED_Pos (5UL) /*!< Position of SNOW3GINITIALIZED field. */
#define SNOW_INTENCLR_SNOW3GINITIALIZED_Msk (0x1UL << SNOW_INTENCLR_SNOW3GINITIALIZED_Pos) /*!< Bit mask of SNOW3GINITIALIZED field. */
#define SNOW_INTENCLR_SNOW3GINITIALIZED_Disabled (0UL) /*!< Read: Disabled */
#define SNOW_INTENCLR_SNOW3GINITIALIZED_Enabled (1UL) /*!< Read: Enabled */
#define SNOW_INTENCLR_SNOW3GINITIALIZED_Clear (1UL) /*!< Disable */

/* Bit 4 : Write '1' to disable interrupt for event IVREADY */
#define SNOW_INTENCLR_IVREADY_Pos (4UL) /*!< Position of IVREADY field. */
#define SNOW_INTENCLR_IVREADY_Msk (0x1UL << SNOW_INTENCLR_IVREADY_Pos) /*!< Bit mask of IVREADY field. */
#define SNOW_INTENCLR_IVREADY_Disabled (0UL) /*!< Read: Disabled */
#define SNOW_INTENCLR_IVREADY_Enabled (1UL) /*!< Read: Enabled */
#define SNOW_INTENCLR_IVREADY_Clear (1UL) /*!< Disable */

/* Bit 3 : Write '1' to disable interrupt for event SCATTERDONE */
#define SNOW_INTENCLR_SCATTERDONE_Pos (3UL) /*!< Position of SCATTERDONE field. */
#define SNOW_INTENCLR_SCATTERDONE_Msk (0x1UL << SNOW_INTENCLR_SCATTERDONE_Pos) /*!< Bit mask of SCATTERDONE field. */
#define SNOW_INTENCLR_SCATTERDONE_Disabled (0UL) /*!< Read: Disabled */
#define SNOW_INTENCLR_SCATTERDONE_Enabled (1UL) /*!< Read: Enabled */
#define SNOW_INTENCLR_SCATTERDONE_Clear (1UL) /*!< Disable */

/* Bit 2 : Write '1' to disable interrupt for event SCATTERSTARTED */
#define SNOW_INTENCLR_SCATTERSTARTED_Pos (2UL) /*!< Position of SCATTERSTARTED field. */
#define SNOW_INTENCLR_SCATTERSTARTED_Msk (0x1UL << SNOW_INTENCLR_SCATTERSTARTED_Pos) /*!< Bit mask of SCATTERSTARTED field. */
#define SNOW_INTENCLR_SCATTERSTARTED_Disabled (0UL) /*!< Read: Disabled */
#define SNOW_INTENCLR_SCATTERSTARTED_Enabled (1UL) /*!< Read: Enabled */
#define SNOW_INTENCLR_SCATTERSTARTED_Clear (1UL) /*!< Disable */

/* Bit 1 : Write '1' to disable interrupt for event GATHERDONE */
#define SNOW_INTENCLR_GATHERDONE_Pos (1UL) /*!< Position of GATHERDONE field. */
#define SNOW_INTENCLR_GATHERDONE_Msk (0x1UL << SNOW_INTENCLR_GATHERDONE_Pos) /*!< Bit mask of GATHERDONE field. */
#define SNOW_INTENCLR_GATHERDONE_Disabled (0UL) /*!< Read: Disabled */
#define SNOW_INTENCLR_GATHERDONE_Enabled (1UL) /*!< Read: Enabled */
#define SNOW_INTENCLR_GATHERDONE_Clear (1UL) /*!< Disable */

/* Bit 0 : Write '1' to disable interrupt for event GATHERSTARTED */
#define SNOW_INTENCLR_GATHERSTARTED_Pos (0UL) /*!< Position of GATHERSTARTED field. */
#define SNOW_INTENCLR_GATHERSTARTED_Msk (0x1UL << SNOW_INTENCLR_GATHERSTARTED_Pos) /*!< Bit mask of GATHERSTARTED field. */
#define SNOW_INTENCLR_GATHERSTARTED_Disabled (0UL) /*!< Read: Disabled */
#define SNOW_INTENCLR_GATHERSTARTED_Enabled (1UL) /*!< Read: Enabled */
#define SNOW_INTENCLR_GATHERSTARTED_Clear (1UL) /*!< Disable */

/* Register: SNOW_INTPEND */
/* Description: Pending interrupts */

/* Bit 8 : Read pending status of interrupt for event RESETTED */
#define SNOW_INTPEND_RESETTED_Pos (8UL) /*!< Position of RESETTED field. */
#define SNOW_INTPEND_RESETTED_Msk (0x1UL << SNOW_INTPEND_RESETTED_Pos) /*!< Bit mask of RESETTED field. */
#define SNOW_INTPEND_RESETTED_NotPending (0UL) /*!< Read: Not pending */
#define SNOW_INTPEND_RESETTED_Pending (1UL) /*!< Read: Pending */

/* Bit 7 : Read pending status of interrupt for event MACREADY */
#define SNOW_INTPEND_MACREADY_Pos (7UL) /*!< Position of MACREADY field. */
#define SNOW_INTPEND_MACREADY_Msk (0x1UL << SNOW_INTPEND_MACREADY_Pos) /*!< Bit mask of MACREADY field. */
#define SNOW_INTPEND_MACREADY_NotPending (0UL) /*!< Read: Not pending */
#define SNOW_INTPEND_MACREADY_Pending (1UL) /*!< Read: Pending */

/* Bit 6 : Read pending status of interrupt for event MESSAGEREADY */
#define SNOW_INTPEND_MESSAGEREADY_Pos (6UL) /*!< Position of MESSAGEREADY field. */
#define SNOW_INTPEND_MESSAGEREADY_Msk (0x1UL << SNOW_INTPEND_MESSAGEREADY_Pos) /*!< Bit mask of MESSAGEREADY field. */
#define SNOW_INTPEND_MESSAGEREADY_NotPending (0UL) /*!< Read: Not pending */
#define SNOW_INTPEND_MESSAGEREADY_Pending (1UL) /*!< Read: Pending */

/* Bit 5 : Read pending status of interrupt for event SNOW3GINITIALIZED */
#define SNOW_INTPEND_SNOW3GINITIALIZED_Pos (5UL) /*!< Position of SNOW3GINITIALIZED field. */
#define SNOW_INTPEND_SNOW3GINITIALIZED_Msk (0x1UL << SNOW_INTPEND_SNOW3GINITIALIZED_Pos) /*!< Bit mask of SNOW3GINITIALIZED field. */
#define SNOW_INTPEND_SNOW3GINITIALIZED_NotPending (0UL) /*!< Read: Not pending */
#define SNOW_INTPEND_SNOW3GINITIALIZED_Pending (1UL) /*!< Read: Pending */

/* Bit 4 : Read pending status of interrupt for event IVREADY */
#define SNOW_INTPEND_IVREADY_Pos (4UL) /*!< Position of IVREADY field. */
#define SNOW_INTPEND_IVREADY_Msk (0x1UL << SNOW_INTPEND_IVREADY_Pos) /*!< Bit mask of IVREADY field. */
#define SNOW_INTPEND_IVREADY_NotPending (0UL) /*!< Read: Not pending */
#define SNOW_INTPEND_IVREADY_Pending (1UL) /*!< Read: Pending */

/* Bit 3 : Read pending status of interrupt for event SCATTERDONE */
#define SNOW_INTPEND_SCATTERDONE_Pos (3UL) /*!< Position of SCATTERDONE field. */
#define SNOW_INTPEND_SCATTERDONE_Msk (0x1UL << SNOW_INTPEND_SCATTERDONE_Pos) /*!< Bit mask of SCATTERDONE field. */
#define SNOW_INTPEND_SCATTERDONE_NotPending (0UL) /*!< Read: Not pending */
#define SNOW_INTPEND_SCATTERDONE_Pending (1UL) /*!< Read: Pending */

/* Bit 2 : Read pending status of interrupt for event SCATTERSTARTED */
#define SNOW_INTPEND_SCATTERSTARTED_Pos (2UL) /*!< Position of SCATTERSTARTED field. */
#define SNOW_INTPEND_SCATTERSTARTED_Msk (0x1UL << SNOW_INTPEND_SCATTERSTARTED_Pos) /*!< Bit mask of SCATTERSTARTED field. */
#define SNOW_INTPEND_SCATTERSTARTED_NotPending (0UL) /*!< Read: Not pending */
#define SNOW_INTPEND_SCATTERSTARTED_Pending (1UL) /*!< Read: Pending */

/* Bit 1 : Read pending status of interrupt for event GATHERDONE */
#define SNOW_INTPEND_GATHERDONE_Pos (1UL) /*!< Position of GATHERDONE field. */
#define SNOW_INTPEND_GATHERDONE_Msk (0x1UL << SNOW_INTPEND_GATHERDONE_Pos) /*!< Bit mask of GATHERDONE field. */
#define SNOW_INTPEND_GATHERDONE_NotPending (0UL) /*!< Read: Not pending */
#define SNOW_INTPEND_GATHERDONE_Pending (1UL) /*!< Read: Pending */

/* Bit 0 : Read pending status of interrupt for event GATHERSTARTED */
#define SNOW_INTPEND_GATHERSTARTED_Pos (0UL) /*!< Position of GATHERSTARTED field. */
#define SNOW_INTPEND_GATHERSTARTED_Msk (0x1UL << SNOW_INTPEND_GATHERSTARTED_Pos) /*!< Bit mask of GATHERSTARTED field. */
#define SNOW_INTPEND_GATHERSTARTED_NotPending (0UL) /*!< Read: Not pending */
#define SNOW_INTPEND_GATHERSTARTED_Pending (1UL) /*!< Read: Pending */

/* Register: SNOW_LENGTH */
/* Description: Keystream length in bits (Cipher), message length in bits (MAC) */

/* Bits 31..0 : Stream/message length */
#define SNOW_LENGTH_LENGTH_Pos (0UL) /*!< Position of LENGTH field. */
#define SNOW_LENGTH_LENGTH_Msk (0xFFFFFFFFUL << SNOW_LENGTH_LENGTH_Pos) /*!< Bit mask of LENGTH field. */

/* Register: SNOW_MODE */
/* Description: Mode select */

/* Bit 0 : Mode select. */
#define SNOW_MODE_MODE_Pos (0UL) /*!< Position of MODE field. */
#define SNOW_MODE_MODE_Msk (0x1UL << SNOW_MODE_MODE_Pos) /*!< Bit mask of MODE field. */
#define SNOW_MODE_MODE_CIPHER (0UL) /*!< Data cipher mode */
#define SNOW_MODE_MODE_MAC (1UL) /*!< MAC mode. */

/* Register: SNOW_MAC */
/* Description: Message Authentication Code. */

/* Bits 31..0 : Calculated MAC. */
#define SNOW_MAC_MAC_Pos (0UL) /*!< Position of MAC field. */
#define SNOW_MAC_MAC_Msk (0xFFFFFFFFUL << SNOW_MAC_MAC_Pos) /*!< Bit mask of MAC field. */

/* Register: SNOW_INJOBPTR */
/* Description: Input job pointer */

/* Bits 31..0 : Input job pointer */
#define SNOW_INJOBPTR_INJOBPTR_Pos (0UL) /*!< Position of INJOBPTR field. */
#define SNOW_INJOBPTR_INJOBPTR_Msk (0xFFFFFFFFUL << SNOW_INJOBPTR_INJOBPTR_Pos) /*!< Bit mask of INJOBPTR field. */

/* Register: SNOW_OUTJOBPTR */
/* Description: Output job pointer */

/* Bits 31..0 : Output job pointer */
#define SNOW_OUTJOBPTR_OUTJOBPTR_Pos (0UL) /*!< Position of OUTJOBPTR field. */
#define SNOW_OUTJOBPTR_OUTJOBPTR_Msk (0xFFFFFFFFUL << SNOW_OUTJOBPTR_OUTJOBPTR_Pos) /*!< Bit mask of OUTJOBPTR field. */

/* Register: SNOW_PENALTY_REG */
/* Description: Description collection: Penalty register for PCP n */

/* Bits 1..0 : Penalty Level */
#define SNOW_PENALTY_REG_Auto_Pos (0UL) /*!< Position of Auto field. */
#define SNOW_PENALTY_REG_Auto_Msk (0x3UL << SNOW_PENALTY_REG_Auto_Pos) /*!< Bit mask of Auto field. */
#define SNOW_PENALTY_REG_Auto_Full (0UL) /*!< (Auto 0) Full penalty) */
#define SNOW_PENALTY_REG_Auto_Semi0 (1UL) /*!< (Auto 1)  Semi (power on, clock off) */
#define SNOW_PENALTY_REG_Auto_Semi1 (2UL) /*!< (Auto 2) Semi (power on, clock core on, clock buffer off) */
#define SNOW_PENALTY_REG_Auto_Zero (3UL) /*!< (Auto 3)  Zero penalty */

/* Register: SNOW_FORCE_OVERRIDE */
/* Description: Description collection: Force override register for PCP n */

/* Bit 15 :   */
#define SNOW_FORCE_OVERRIDE_ForceCtrl_Pos (15UL) /*!< Position of ForceCtrl field. */
#define SNOW_FORCE_OVERRIDE_ForceCtrl_Msk (0x1UL << SNOW_FORCE_OVERRIDE_ForceCtrl_Pos) /*!< Bit mask of ForceCtrl field. */
#define SNOW_FORCE_OVERRIDE_ForceCtrl_Disable (0UL) /*!< all forcing disabled */
#define SNOW_FORCE_OVERRIDE_ForceCtrl_Enable (1UL) /*!< all forcing enabled */

/* Bit 9 :   */
#define SNOW_FORCE_OVERRIDE_PowerRequestCore_Pos (9UL) /*!< Position of PowerRequestCore field. */
#define SNOW_FORCE_OVERRIDE_PowerRequestCore_Msk (0x1UL << SNOW_FORCE_OVERRIDE_PowerRequestCore_Pos) /*!< Bit mask of PowerRequestCore field. */
#define SNOW_FORCE_OVERRIDE_PowerRequestCore_zero (0UL) /*!< powerRequest.core = 0 */
#define SNOW_FORCE_OVERRIDE_PowerRequestCore_one (1UL) /*!< powerRequest.core = 1 */

/* Bit 8 :   */
#define SNOW_FORCE_OVERRIDE_PowerRequestSwitch_Pos (8UL) /*!< Position of PowerRequestSwitch field. */
#define SNOW_FORCE_OVERRIDE_PowerRequestSwitch_Msk (0x1UL << SNOW_FORCE_OVERRIDE_PowerRequestSwitch_Pos) /*!< Bit mask of PowerRequestSwitch field. */
#define SNOW_FORCE_OVERRIDE_PowerRequestSwitch_zero (0UL) /*!< powerRequest.switch = 0 */
#define SNOW_FORCE_OVERRIDE_PowerRequestSwitch_one (1UL) /*!< powerRequest.switch = 1 */

/* Bit 7 :   */
#define SNOW_FORCE_OVERRIDE_ClockForcing_Pos (7UL) /*!< Position of ClockForcing field. */
#define SNOW_FORCE_OVERRIDE_ClockForcing_Msk (0x1UL << SNOW_FORCE_OVERRIDE_ClockForcing_Pos) /*!< Bit mask of ClockForcing field. */
#define SNOW_FORCE_OVERRIDE_ClockForcing_disable (0UL) /*!< All clock forcing  disabled */
#define SNOW_FORCE_OVERRIDE_ClockForcing_enable (1UL) /*!< All clock forcing  enabled */

/* Bit 3 :   */
#define SNOW_FORCE_OVERRIDE_ClockRequestCore_Pos (3UL) /*!< Position of ClockRequestCore field. */
#define SNOW_FORCE_OVERRIDE_ClockRequestCore_Msk (0x1UL << SNOW_FORCE_OVERRIDE_ClockRequestCore_Pos) /*!< Bit mask of ClockRequestCore field. */
#define SNOW_FORCE_OVERRIDE_ClockRequestCore_zero (0UL) /*!< clockRequest.core = 0 */
#define SNOW_FORCE_OVERRIDE_ClockRequestCore_one (1UL) /*!< clockRequest.core = 1 */

/* Bit 2 :   */
#define SNOW_FORCE_OVERRIDE_ClockRequestBuff_Pos (2UL) /*!< Position of ClockRequestBuff field. */
#define SNOW_FORCE_OVERRIDE_ClockRequestBuff_Msk (0x1UL << SNOW_FORCE_OVERRIDE_ClockRequestBuff_Pos) /*!< Bit mask of ClockRequestBuff field. */
#define SNOW_FORCE_OVERRIDE_ClockRequestBuff_zero (0UL) /*!< clockRequest.buff = 0 */
#define SNOW_FORCE_OVERRIDE_ClockRequestBuff_one (1UL) /*!< clockRequest.buff = 1 */

/* Bit 1 :   */
#define SNOW_FORCE_OVERRIDE_ClockRequestSwitch_Pos (1UL) /*!< Position of ClockRequestSwitch field. */
#define SNOW_FORCE_OVERRIDE_ClockRequestSwitch_Msk (0x1UL << SNOW_FORCE_OVERRIDE_ClockRequestSwitch_Pos) /*!< Bit mask of ClockRequestSwitch field. */
#define SNOW_FORCE_OVERRIDE_ClockRequestSwitch_zero (0UL) /*!< clockRequest.switch = 0 */
#define SNOW_FORCE_OVERRIDE_ClockRequestSwitch_one (1UL) /*!< clockRequest.switch = 1 */

/* Bit 0 :   */
#define SNOW_FORCE_OVERRIDE_ClockRequestSwitchA_Pos (0UL) /*!< Position of ClockRequestSwitchA field. */
#define SNOW_FORCE_OVERRIDE_ClockRequestSwitchA_Msk (0x1UL << SNOW_FORCE_OVERRIDE_ClockRequestSwitchA_Pos) /*!< Bit mask of ClockRequestSwitchA field. */
#define SNOW_FORCE_OVERRIDE_ClockRequestSwitchA_zero (0UL) /*!< clockRequest.switch_a = 0 */
#define SNOW_FORCE_OVERRIDE_ClockRequestSwitchA_one (1UL) /*!< clockRequest.switch_a = 1 */

/* Register: SNOW_TURN_OFF_AUTO_CLOCKSOURCE_REQ */
/* Description: Turn of the automatic clock request. */

/* Bit 1 :   */
#define SNOW_TURN_OFF_AUTO_CLOCKSOURCE_REQ_ClockStartPcp1_Pos (1UL) /*!< Position of ClockStartPcp1 field. */
#define SNOW_TURN_OFF_AUTO_CLOCKSOURCE_REQ_ClockStartPcp1_Msk (0x1UL << SNOW_TURN_OFF_AUTO_CLOCKSOURCE_REQ_ClockStartPcp1_Pos) /*!< Bit mask of ClockStartPcp1 field. */
#define SNOW_TURN_OFF_AUTO_CLOCKSOURCE_REQ_ClockStartPcp1_normal_on (0UL) /*!< normal clock start for PCP 1 */
#define SNOW_TURN_OFF_AUTO_CLOCKSOURCE_REQ_ClockStartPcp1_normal_off (1UL) /*!< turn off normal clock start for PCP 1 */

/* Bit 0 :   */
#define SNOW_TURN_OFF_AUTO_CLOCKSOURCE_REQ_ClockStartPcp0_Pos (0UL) /*!< Position of ClockStartPcp0 field. */
#define SNOW_TURN_OFF_AUTO_CLOCKSOURCE_REQ_ClockStartPcp0_Msk (0x1UL << SNOW_TURN_OFF_AUTO_CLOCKSOURCE_REQ_ClockStartPcp0_Pos) /*!< Bit mask of ClockStartPcp0 field. */
#define SNOW_TURN_OFF_AUTO_CLOCKSOURCE_REQ_ClockStartPcp0_normal_on (0UL) /*!< normal clock start for PCP 0 */
#define SNOW_TURN_OFF_AUTO_CLOCKSOURCE_REQ_ClockStartPcp0_normal_off (1UL) /*!< turn off normal clock start for PCP 0 */


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

/* Register: TEMP_EVENTS_DATARDY */
/* Description: Temperature measurement complete, data ready */

/* Bit 0 : Temperature measurement complete, data ready */
#define TEMP_EVENTS_DATARDY_EVENTS_DATARDY_Pos (0UL) /*!< Position of EVENTS_DATARDY field. */
#define TEMP_EVENTS_DATARDY_EVENTS_DATARDY_Msk (0x1UL << TEMP_EVENTS_DATARDY_EVENTS_DATARDY_Pos) /*!< Bit mask of EVENTS_DATARDY field. */
#define TEMP_EVENTS_DATARDY_EVENTS_DATARDY_NotGenerated (0UL) /*!< Event not generated */
#define TEMP_EVENTS_DATARDY_EVENTS_DATARDY_Generated (1UL) /*!< Event generated */

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


/* Peripheral: TIMEMARKMUX */
/* Description: Timemark multiplexer for LTE System Timer */

/* Register: TIMEMARKMUX_ENABLE */
/* Description: Enable Timemark Mux */

/* Bits 31..2 : Unused */
#define TIMEMARKMUX_ENABLE_Unused_Pos (2UL) /*!< Position of Unused field. */
#define TIMEMARKMUX_ENABLE_Unused_Msk (0x3FFFFFFFUL << TIMEMARKMUX_ENABLE_Unused_Pos) /*!< Bit mask of Unused field. */

/* Bit 1 : Enable */
#define TIMEMARKMUX_ENABLE_ENABLE_TMGNSS_Pos (1UL) /*!< Position of ENABLE_TMGNSS field. */
#define TIMEMARKMUX_ENABLE_ENABLE_TMGNSS_Msk (0x1UL << TIMEMARKMUX_ENABLE_ENABLE_TMGNSS_Pos) /*!< Bit mask of ENABLE_TMGNSS field. */
#define TIMEMARKMUX_ENABLE_ENABLE_TMGNSS_Disable (0UL) /*!< Disable GNSS timemark output */
#define TIMEMARKMUX_ENABLE_ENABLE_TMGNSS_Enable (1UL) /*!< Enable GNSS timemark output */

/* Bit 0 : Enable */
#define TIMEMARKMUX_ENABLE_ENABLE_TMRF_Pos (0UL) /*!< Position of ENABLE_TMRF field. */
#define TIMEMARKMUX_ENABLE_ENABLE_TMRF_Msk (0x1UL << TIMEMARKMUX_ENABLE_ENABLE_TMRF_Pos) /*!< Bit mask of ENABLE_TMRF field. */
#define TIMEMARKMUX_ENABLE_ENABLE_TMRF_Disable (0UL) /*!< Disable RF timemark output */
#define TIMEMARKMUX_ENABLE_ENABLE_TMRF_Enable (1UL) /*!< Enable RF timemark output */

/* Register: TIMEMARKMUX_TIMEMARK_INPUT_SELECT */
/* Description: Timemark input select register */

/* Bits 31..16 : Unused */
#define TIMEMARKMUX_TIMEMARK_INPUT_SELECT_Unused_Pos (16UL) /*!< Position of Unused field. */
#define TIMEMARKMUX_TIMEMARK_INPUT_SELECT_Unused_Msk (0xFFFFUL << TIMEMARKMUX_TIMEMARK_INPUT_SELECT_Unused_Pos) /*!< Bit mask of Unused field. */

/* Bits 15..8 : GNSS timemark input select */
#define TIMEMARKMUX_TIMEMARK_INPUT_SELECT_GNSS_TIMEMARK_SELECT_Pos (8UL) /*!< Position of GNSS_TIMEMARK_SELECT field. */
#define TIMEMARKMUX_TIMEMARK_INPUT_SELECT_GNSS_TIMEMARK_SELECT_Msk (0xFFUL << TIMEMARKMUX_TIMEMARK_INPUT_SELECT_GNSS_TIMEMARK_SELECT_Pos) /*!< Bit mask of GNSS_TIMEMARK_SELECT field. */
#define TIMEMARKMUX_TIMEMARK_INPUT_SELECT_GNSS_TIMEMARK_SELECT_Event0 (0x01UL) /*!< Enable events[0] as timemark input */
#define TIMEMARKMUX_TIMEMARK_INPUT_SELECT_GNSS_TIMEMARK_SELECT_Event1 (0x02UL) /*!< Enable events[1] as timemark input */
#define TIMEMARKMUX_TIMEMARK_INPUT_SELECT_GNSS_TIMEMARK_SELECT_Event2 (0x04UL) /*!< Enable events[2] as timemark input */
#define TIMEMARKMUX_TIMEMARK_INPUT_SELECT_GNSS_TIMEMARK_SELECT_Event3 (0x08UL) /*!< Enable events[3] as timemark input */
#define TIMEMARKMUX_TIMEMARK_INPUT_SELECT_GNSS_TIMEMARK_SELECT_Event4 (0x10UL) /*!< Enable events[4] as timemark input */
#define TIMEMARKMUX_TIMEMARK_INPUT_SELECT_GNSS_TIMEMARK_SELECT_Event5 (0x20UL) /*!< Enable events[5] as timemark input */
#define TIMEMARKMUX_TIMEMARK_INPUT_SELECT_GNSS_TIMEMARK_SELECT_Event6 (0x40UL) /*!< Enable events[6] as timemark input */
#define TIMEMARKMUX_TIMEMARK_INPUT_SELECT_GNSS_TIMEMARK_SELECT_Event7 (0x80UL) /*!< Enable events[7] as timemark input */

/* Bits 7..0 : RF timemark input select */
#define TIMEMARKMUX_TIMEMARK_INPUT_SELECT_RF_TIMEMARK_SELECT_Pos (0UL) /*!< Position of RF_TIMEMARK_SELECT field. */
#define TIMEMARKMUX_TIMEMARK_INPUT_SELECT_RF_TIMEMARK_SELECT_Msk (0xFFUL << TIMEMARKMUX_TIMEMARK_INPUT_SELECT_RF_TIMEMARK_SELECT_Pos) /*!< Bit mask of RF_TIMEMARK_SELECT field. */
#define TIMEMARKMUX_TIMEMARK_INPUT_SELECT_RF_TIMEMARK_SELECT_Event0 (0x01UL) /*!< Enable events[0] as timemark input */
#define TIMEMARKMUX_TIMEMARK_INPUT_SELECT_RF_TIMEMARK_SELECT_Event1 (0x02UL) /*!< Enable events[1] as timemark input */
#define TIMEMARKMUX_TIMEMARK_INPUT_SELECT_RF_TIMEMARK_SELECT_Event2 (0x04UL) /*!< Enable events[2] as timemark input */
#define TIMEMARKMUX_TIMEMARK_INPUT_SELECT_RF_TIMEMARK_SELECT_Event3 (0x08UL) /*!< Enable events[3] as timemark input */
#define TIMEMARKMUX_TIMEMARK_INPUT_SELECT_RF_TIMEMARK_SELECT_Event4 (0x10UL) /*!< Enable events[4] as timemark input */
#define TIMEMARKMUX_TIMEMARK_INPUT_SELECT_RF_TIMEMARK_SELECT_Event5 (0x20UL) /*!< Enable events[5] as timemark input */
#define TIMEMARKMUX_TIMEMARK_INPUT_SELECT_RF_TIMEMARK_SELECT_Event6 (0x40UL) /*!< Enable events[6] as timemark input */
#define TIMEMARKMUX_TIMEMARK_INPUT_SELECT_RF_TIMEMARK_SELECT_Event7 (0x80UL) /*!< Enable events[7] as timemark input */


/* Peripheral: TIMEREVENTSYNC */
/* Description: Timer event synchronizer */

/* Register: TIMEREVENTSYNC_CLOCKENABLE */
/* Description: Enable synchronizer clock. */

/* Bit 0 : Enable. */
#define TIMEREVENTSYNC_CLOCKENABLE_CLOCKENABLE_Pos (0UL) /*!< Position of CLOCKENABLE field. */
#define TIMEREVENTSYNC_CLOCKENABLE_CLOCKENABLE_Msk (0x1UL << TIMEREVENTSYNC_CLOCKENABLE_CLOCKENABLE_Pos) /*!< Bit mask of CLOCKENABLE field. */
#define TIMEREVENTSYNC_CLOCKENABLE_CLOCKENABLE_Disable (0UL) /*!< Disable clock. */
#define TIMEREVENTSYNC_CLOCKENABLE_CLOCKENABLE_Enable (1UL) /*!< Enable clock. */


/* Peripheral: TRACEANDDEBUGALTA */
/* Description: Trace And Debug */

/* Register: TRACEANDDEBUGALTA_STARTCLOCKS */
/* Description: Start all Trace and Debug clocks. */

/* Bit 0 :   */
#define TRACEANDDEBUGALTA_STARTCLOCKS_STARTCLOCKS_Pos (0UL) /*!< Position of STARTCLOCKS field. */
#define TRACEANDDEBUGALTA_STARTCLOCKS_STARTCLOCKS_Msk (0x1UL << TRACEANDDEBUGALTA_STARTCLOCKS_STARTCLOCKS_Pos) /*!< Bit mask of STARTCLOCKS field. */
#define TRACEANDDEBUGALTA_STARTCLOCKS_STARTCLOCKS_STARTCLOCKS (1UL) /*!< Start all Trace and Debug clocks. */

/* Register: TRACEANDDEBUGALTA_STOPCLOCKS */
/* Description: Stop all Trace and Debug clocks. */

/* Bit 0 :   */
#define TRACEANDDEBUGALTA_STOPCLOCKS_STOPCLOCKS_Pos (0UL) /*!< Position of STOPCLOCKS field. */
#define TRACEANDDEBUGALTA_STOPCLOCKS_STOPCLOCKS_Msk (0x1UL << TRACEANDDEBUGALTA_STOPCLOCKS_STOPCLOCKS_Pos) /*!< Bit mask of STOPCLOCKS field. */
#define TRACEANDDEBUGALTA_STOPCLOCKS_STOPCLOCKS_STOPCLOCKS (1UL) /*!< Stop all Trace and Debug clocks. */

/* Register: TRACEANDDEBUGALTA_TASKZEROPENALTY_PCP_3 */
/* Description: TaskZeroPenalty register for PCP 3 */

/* Bit 0 :   */
#define TRACEANDDEBUGALTA_TASKZEROPENALTY_PCP_3_ZERO_PENALTY_Pos (0UL) /*!< Position of ZERO_PENALTY field. */
#define TRACEANDDEBUGALTA_TASKZEROPENALTY_PCP_3_ZERO_PENALTY_Msk (0x1UL << TRACEANDDEBUGALTA_TASKZEROPENALTY_PCP_3_ZERO_PENALTY_Pos) /*!< Bit mask of ZERO_PENALTY field. */
#define TRACEANDDEBUGALTA_TASKZEROPENALTY_PCP_3_ZERO_PENALTY_Set_Zero_Penalty (1UL) /*!< Set Zero Penalty */

/* Register: TRACEANDDEBUGALTA_TASKFULLPENALTY_PCP_3 */
/* Description: TaskFullPenalty register for PCP 3 */

/* Bit 0 :   */
#define TRACEANDDEBUGALTA_TASKFULLPENALTY_PCP_3_FULL_PENALTY_Pos (0UL) /*!< Position of FULL_PENALTY field. */
#define TRACEANDDEBUGALTA_TASKFULLPENALTY_PCP_3_FULL_PENALTY_Msk (0x1UL << TRACEANDDEBUGALTA_TASKFULLPENALTY_PCP_3_FULL_PENALTY_Pos) /*!< Bit mask of FULL_PENALTY field. */
#define TRACEANDDEBUGALTA_TASKFULLPENALTY_PCP_3_FULL_PENALTY_Set_Full_Penalty (1UL) /*!< Set Full Penalty */

/* Register: TRACEANDDEBUGALTA_TASKZEROPENALTY_PCP_2 */
/* Description: TaskZeroPenalty register for PCP 2 */

/* Bit 0 :   */
#define TRACEANDDEBUGALTA_TASKZEROPENALTY_PCP_2_ZERO_PENALTY_Pos (0UL) /*!< Position of ZERO_PENALTY field. */
#define TRACEANDDEBUGALTA_TASKZEROPENALTY_PCP_2_ZERO_PENALTY_Msk (0x1UL << TRACEANDDEBUGALTA_TASKZEROPENALTY_PCP_2_ZERO_PENALTY_Pos) /*!< Bit mask of ZERO_PENALTY field. */
#define TRACEANDDEBUGALTA_TASKZEROPENALTY_PCP_2_ZERO_PENALTY_Set_Zero_Penalty (1UL) /*!< Set Zero Penalty */

/* Register: TRACEANDDEBUGALTA_TASKFULLPENALTY_PCP_2 */
/* Description: TaskFullPenalty register for PCP 2 */

/* Bit 0 :   */
#define TRACEANDDEBUGALTA_TASKFULLPENALTY_PCP_2_FULL_PENALTY_Pos (0UL) /*!< Position of FULL_PENALTY field. */
#define TRACEANDDEBUGALTA_TASKFULLPENALTY_PCP_2_FULL_PENALTY_Msk (0x1UL << TRACEANDDEBUGALTA_TASKFULLPENALTY_PCP_2_FULL_PENALTY_Pos) /*!< Bit mask of FULL_PENALTY field. */
#define TRACEANDDEBUGALTA_TASKFULLPENALTY_PCP_2_FULL_PENALTY_Set_Full_Penalty (1UL) /*!< Set Full Penalty */

/* Register: TRACEANDDEBUGALTA_TASKZEROPENALTY_PCP_1 */
/* Description: TaskZeroPenalty register for PCP 1 */

/* Bit 0 :   */
#define TRACEANDDEBUGALTA_TASKZEROPENALTY_PCP_1_ZERO_PENALTY_Pos (0UL) /*!< Position of ZERO_PENALTY field. */
#define TRACEANDDEBUGALTA_TASKZEROPENALTY_PCP_1_ZERO_PENALTY_Msk (0x1UL << TRACEANDDEBUGALTA_TASKZEROPENALTY_PCP_1_ZERO_PENALTY_Pos) /*!< Bit mask of ZERO_PENALTY field. */
#define TRACEANDDEBUGALTA_TASKZEROPENALTY_PCP_1_ZERO_PENALTY_Set_Zero_Penalty (1UL) /*!< Set Zero Penalty */

/* Register: TRACEANDDEBUGALTA_TASKFULLPENALTY_PCP_1 */
/* Description: TaskFullPenalty register for PCP 1 */

/* Bit 0 :   */
#define TRACEANDDEBUGALTA_TASKFULLPENALTY_PCP_1_FULL_PENALTY_Pos (0UL) /*!< Position of FULL_PENALTY field. */
#define TRACEANDDEBUGALTA_TASKFULLPENALTY_PCP_1_FULL_PENALTY_Msk (0x1UL << TRACEANDDEBUGALTA_TASKFULLPENALTY_PCP_1_FULL_PENALTY_Pos) /*!< Bit mask of FULL_PENALTY field. */
#define TRACEANDDEBUGALTA_TASKFULLPENALTY_PCP_1_FULL_PENALTY_Set_Full_Penalty (1UL) /*!< Set Full Penalty */

/* Register: TRACEANDDEBUGALTA_TASKZEROPENALTY_PCP_0 */
/* Description: TaskZeroPenalty register for PCP 0 */

/* Bit 0 :   */
#define TRACEANDDEBUGALTA_TASKZEROPENALTY_PCP_0_ZERO_PENALTY_Pos (0UL) /*!< Position of ZERO_PENALTY field. */
#define TRACEANDDEBUGALTA_TASKZEROPENALTY_PCP_0_ZERO_PENALTY_Msk (0x1UL << TRACEANDDEBUGALTA_TASKZEROPENALTY_PCP_0_ZERO_PENALTY_Pos) /*!< Bit mask of ZERO_PENALTY field. */
#define TRACEANDDEBUGALTA_TASKZEROPENALTY_PCP_0_ZERO_PENALTY_Set_Zero_Penalty (1UL) /*!< Set Zero Penalty */

/* Register: TRACEANDDEBUGALTA_TASKFULLPENALTY_PCP_0 */
/* Description: TaskFullPenalty register for PCP 0 */

/* Bit 0 :   */
#define TRACEANDDEBUGALTA_TASKFULLPENALTY_PCP_0_FULL_PENALTY_Pos (0UL) /*!< Position of FULL_PENALTY field. */
#define TRACEANDDEBUGALTA_TASKFULLPENALTY_PCP_0_FULL_PENALTY_Msk (0x1UL << TRACEANDDEBUGALTA_TASKFULLPENALTY_PCP_0_FULL_PENALTY_Pos) /*!< Bit mask of FULL_PENALTY field. */
#define TRACEANDDEBUGALTA_TASKFULLPENALTY_PCP_0_FULL_PENALTY_Set_Full_Penalty (1UL) /*!< Set Full Penalty */

/* Register: TRACEANDDEBUGALTA_ENABLEDEBUG */
/* Description: Master enable for PSEL.TraceData[3:0] and PSEL.TraceClk signals */

/* Bit 0 :   */
#define TRACEANDDEBUGALTA_ENABLEDEBUG_ENABLEDEBUG_Pos (0UL) /*!< Position of ENABLEDEBUG field. */
#define TRACEANDDEBUGALTA_ENABLEDEBUG_ENABLEDEBUG_Msk (0x1UL << TRACEANDDEBUGALTA_ENABLEDEBUG_ENABLEDEBUG_Pos) /*!< Bit mask of ENABLEDEBUG field. */
#define TRACEANDDEBUGALTA_ENABLEDEBUG_ENABLEDEBUG_ENABLEDEBUG (1UL) /*!< Master enable for PSEL.TraceData[3:0] and PSEL.TraceClk signals */

/* Register: TRACEANDDEBUGALTA_PSEL_TRACECLK */
/* Description: Pin number configuration for TraceClk signal */

/* Bit 31 : Connection */
#define TRACEANDDEBUGALTA_PSEL_TRACECLK_CONNECT_Pos (31UL) /*!< Position of CONNECT field. */
#define TRACEANDDEBUGALTA_PSEL_TRACECLK_CONNECT_Msk (0x1UL << TRACEANDDEBUGALTA_PSEL_TRACECLK_CONNECT_Pos) /*!< Bit mask of CONNECT field. */
#define TRACEANDDEBUGALTA_PSEL_TRACECLK_CONNECT_Connected (0UL) /*!< Connect */
#define TRACEANDDEBUGALTA_PSEL_TRACECLK_CONNECT_Disconnected (1UL) /*!< Disconnect */

/* Bits 4..0 : Pin number */
#define TRACEANDDEBUGALTA_PSEL_TRACECLK_PIN_Pos (0UL) /*!< Position of PIN field. */
#define TRACEANDDEBUGALTA_PSEL_TRACECLK_PIN_Msk (0x1FUL << TRACEANDDEBUGALTA_PSEL_TRACECLK_PIN_Pos) /*!< Bit mask of PIN field. */

/* Register: TRACEANDDEBUGALTA_PSEL_TRACEDATA0 */
/* Description: Pin number configuration for TraceData0 signal */

/* Bit 31 : Connection */
#define TRACEANDDEBUGALTA_PSEL_TRACEDATA0_CONNECT_Pos (31UL) /*!< Position of CONNECT field. */
#define TRACEANDDEBUGALTA_PSEL_TRACEDATA0_CONNECT_Msk (0x1UL << TRACEANDDEBUGALTA_PSEL_TRACEDATA0_CONNECT_Pos) /*!< Bit mask of CONNECT field. */
#define TRACEANDDEBUGALTA_PSEL_TRACEDATA0_CONNECT_Connected (0UL) /*!< Connect */
#define TRACEANDDEBUGALTA_PSEL_TRACEDATA0_CONNECT_Disconnected (1UL) /*!< Disconnect */

/* Bits 4..0 : Pin number */
#define TRACEANDDEBUGALTA_PSEL_TRACEDATA0_PIN_Pos (0UL) /*!< Position of PIN field. */
#define TRACEANDDEBUGALTA_PSEL_TRACEDATA0_PIN_Msk (0x1FUL << TRACEANDDEBUGALTA_PSEL_TRACEDATA0_PIN_Pos) /*!< Bit mask of PIN field. */

/* Register: TRACEANDDEBUGALTA_PSEL_TRACEDATA1 */
/* Description: Pin number configuration for TraceData1 signal */

/* Bit 31 : Connection */
#define TRACEANDDEBUGALTA_PSEL_TRACEDATA1_CONNECT_Pos (31UL) /*!< Position of CONNECT field. */
#define TRACEANDDEBUGALTA_PSEL_TRACEDATA1_CONNECT_Msk (0x1UL << TRACEANDDEBUGALTA_PSEL_TRACEDATA1_CONNECT_Pos) /*!< Bit mask of CONNECT field. */
#define TRACEANDDEBUGALTA_PSEL_TRACEDATA1_CONNECT_Connected (0UL) /*!< Connect */
#define TRACEANDDEBUGALTA_PSEL_TRACEDATA1_CONNECT_Disconnected (1UL) /*!< Disconnect */

/* Bits 4..0 : Pin number */
#define TRACEANDDEBUGALTA_PSEL_TRACEDATA1_PIN_Pos (0UL) /*!< Position of PIN field. */
#define TRACEANDDEBUGALTA_PSEL_TRACEDATA1_PIN_Msk (0x1FUL << TRACEANDDEBUGALTA_PSEL_TRACEDATA1_PIN_Pos) /*!< Bit mask of PIN field. */

/* Register: TRACEANDDEBUGALTA_PSEL_TRACEDATA2 */
/* Description: Pin number configuration for TraceData2 signal */

/* Bit 31 : Connection */
#define TRACEANDDEBUGALTA_PSEL_TRACEDATA2_CONNECT_Pos (31UL) /*!< Position of CONNECT field. */
#define TRACEANDDEBUGALTA_PSEL_TRACEDATA2_CONNECT_Msk (0x1UL << TRACEANDDEBUGALTA_PSEL_TRACEDATA2_CONNECT_Pos) /*!< Bit mask of CONNECT field. */
#define TRACEANDDEBUGALTA_PSEL_TRACEDATA2_CONNECT_Connected (0UL) /*!< Connect */
#define TRACEANDDEBUGALTA_PSEL_TRACEDATA2_CONNECT_Disconnected (1UL) /*!< Disconnect */

/* Bits 4..0 : Pin number */
#define TRACEANDDEBUGALTA_PSEL_TRACEDATA2_PIN_Pos (0UL) /*!< Position of PIN field. */
#define TRACEANDDEBUGALTA_PSEL_TRACEDATA2_PIN_Msk (0x1FUL << TRACEANDDEBUGALTA_PSEL_TRACEDATA2_PIN_Pos) /*!< Bit mask of PIN field. */

/* Register: TRACEANDDEBUGALTA_PSEL_TRACEDATA3 */
/* Description: Pin number configuration for TraceData3 signal */

/* Bit 31 : Connection */
#define TRACEANDDEBUGALTA_PSEL_TRACEDATA3_CONNECT_Pos (31UL) /*!< Position of CONNECT field. */
#define TRACEANDDEBUGALTA_PSEL_TRACEDATA3_CONNECT_Msk (0x1UL << TRACEANDDEBUGALTA_PSEL_TRACEDATA3_CONNECT_Pos) /*!< Bit mask of CONNECT field. */
#define TRACEANDDEBUGALTA_PSEL_TRACEDATA3_CONNECT_Connected (0UL) /*!< Connect */
#define TRACEANDDEBUGALTA_PSEL_TRACEDATA3_CONNECT_Disconnected (1UL) /*!< Disconnect */

/* Bits 4..0 : Pin number */
#define TRACEANDDEBUGALTA_PSEL_TRACEDATA3_PIN_Pos (0UL) /*!< Position of PIN field. */
#define TRACEANDDEBUGALTA_PSEL_TRACEDATA3_PIN_Msk (0x1FUL << TRACEANDDEBUGALTA_PSEL_TRACEDATA3_PIN_Pos) /*!< Bit mask of PIN field. */

/* Register: TRACEANDDEBUGALTA_TRACEPORTSPEED */
/* Description: Trace port speed selection */

/* Bits 1..0 : Speed of Trace Port clock. Note that the TRACECLK pin will output this clock divided by two. */
#define TRACEANDDEBUGALTA_TRACEPORTSPEED_TRACEPORTSPEED_Pos (0UL) /*!< Position of TRACEPORTSPEED field. */
#define TRACEANDDEBUGALTA_TRACEPORTSPEED_TRACEPORTSPEED_Msk (0x3UL << TRACEANDDEBUGALTA_TRACEPORTSPEED_TRACEPORTSPEED_Pos) /*!< Bit mask of TRACEPORTSPEED field. */
#define TRACEANDDEBUGALTA_TRACEPORTSPEED_TRACEPORTSPEED_32MHz (0UL) /*!< 32 MHz Trace Port clock (TRACECLK = 16 MHz) */
#define TRACEANDDEBUGALTA_TRACEPORTSPEED_TRACEPORTSPEED_16MHz (1UL) /*!< 16 MHz Trace Port clock (TRACECLK = 8 MHz) */
#define TRACEANDDEBUGALTA_TRACEPORTSPEED_TRACEPORTSPEED_8MHz (2UL) /*!< 8 MHz Trace Port clock (TRACECLK = 4 MHz) */
#define TRACEANDDEBUGALTA_TRACEPORTSPEED_TRACEPORTSPEED_4MHz (3UL) /*!< 4 MHz Trace Port clock (TRACECLK = 2 MHz) */

/* Register: TRACEANDDEBUGALTA_SWOSEL */
/* Description: Connect the SWO to the TPIU TRACEDATA[0] */

/* Bit 0 :   */
#define TRACEANDDEBUGALTA_SWOSEL_SWOSEL_Pos (0UL) /*!< Position of SWOSEL field. */
#define TRACEANDDEBUGALTA_SWOSEL_SWOSEL_Msk (0x1UL << TRACEANDDEBUGALTA_SWOSEL_SWOSEL_Pos) /*!< Bit mask of SWOSEL field. */
#define TRACEANDDEBUGALTA_SWOSEL_SWOSEL_TRACEDATA0SEL (0UL) /*!< Connect the TRACEDATA[0] to the TPIU TRACEDATA[0] */
#define TRACEANDDEBUGALTA_SWOSEL_SWOSEL_SWOSEL (1UL) /*!< Connect the SWO to the TPIU TRACEDATA[0] */

/* Register: TRACEANDDEBUGALTA_SRAMTSEL */
/* Description: Timing control values for TSMC RAMs */

/* Bits 4..2 : Write cycle timing selection */
#define TRACEANDDEBUGALTA_SRAMTSEL_WTSEL_Pos (2UL) /*!< Position of WTSEL field. */
#define TRACEANDDEBUGALTA_SRAMTSEL_WTSEL_Msk (0x7UL << TRACEANDDEBUGALTA_SRAMTSEL_WTSEL_Pos) /*!< Bit mask of WTSEL field. */

/* Bits 1..0 : Read cycle timing selection */
#define TRACEANDDEBUGALTA_SRAMTSEL_RTSEL_Pos (0UL) /*!< Position of RTSEL field. */
#define TRACEANDDEBUGALTA_SRAMTSEL_RTSEL_Msk (0x3UL << TRACEANDDEBUGALTA_SRAMTSEL_RTSEL_Pos) /*!< Bit mask of RTSEL field. */

/* Register: TRACEANDDEBUGALTA_PENALTY_REG */
/* Description: Description collection: Penalty register for PCP n */

/* Bits 1..0 : Penalty Level */
#define TRACEANDDEBUGALTA_PENALTY_REG_PENALTY_Pos (0UL) /*!< Position of PENALTY field. */
#define TRACEANDDEBUGALTA_PENALTY_REG_PENALTY_Msk (0x3UL << TRACEANDDEBUGALTA_PENALTY_REG_PENALTY_Pos) /*!< Bit mask of PENALTY field. */
#define TRACEANDDEBUGALTA_PENALTY_REG_PENALTY_Full (0UL) /*!< (Auto 0) Full penalty) */
#define TRACEANDDEBUGALTA_PENALTY_REG_PENALTY_Semi1 (1UL) /*!< (Auto 1) Semi (power on, clock off) */
#define TRACEANDDEBUGALTA_PENALTY_REG_PENALTY_Semi0 (2UL) /*!< (Auto 2) Semi (power on, clock core on, clock buffer off) */
#define TRACEANDDEBUGALTA_PENALTY_REG_PENALTY_Zero (3UL) /*!< (Auto 3) Zero penalty */

/* Register: TRACEANDDEBUGALTA_FORCE_OVERRIDE */
/* Description: Description collection: Force override register for PCP n */

/* Bit 15 :   */
#define TRACEANDDEBUGALTA_FORCE_OVERRIDE_DISABLE_Pos (15UL) /*!< Position of DISABLE field. */
#define TRACEANDDEBUGALTA_FORCE_OVERRIDE_DISABLE_Msk (0x1UL << TRACEANDDEBUGALTA_FORCE_OVERRIDE_DISABLE_Pos) /*!< Bit mask of DISABLE field. */
#define TRACEANDDEBUGALTA_FORCE_OVERRIDE_DISABLE_Disable (0UL) /*!< all forcing disabled */
#define TRACEANDDEBUGALTA_FORCE_OVERRIDE_DISABLE_Enable (1UL) /*!< all forcing enabled */

/* Bit 9 :   */
#define TRACEANDDEBUGALTA_FORCE_OVERRIDE_CORE_POWER_REQUEST_Pos (9UL) /*!< Position of CORE_POWER_REQUEST field. */
#define TRACEANDDEBUGALTA_FORCE_OVERRIDE_CORE_POWER_REQUEST_Msk (0x1UL << TRACEANDDEBUGALTA_FORCE_OVERRIDE_CORE_POWER_REQUEST_Pos) /*!< Bit mask of CORE_POWER_REQUEST field. */
#define TRACEANDDEBUGALTA_FORCE_OVERRIDE_CORE_POWER_REQUEST_REQ0 (0UL) /*!< powerRequest.core = 0 */
#define TRACEANDDEBUGALTA_FORCE_OVERRIDE_CORE_POWER_REQUEST_REQ1 (1UL) /*!< powerRequest.core = 1 */

/* Bit 8 :   */
#define TRACEANDDEBUGALTA_FORCE_OVERRIDE_POWER_SWITCH_REQUEST_Pos (8UL) /*!< Position of POWER_SWITCH_REQUEST field. */
#define TRACEANDDEBUGALTA_FORCE_OVERRIDE_POWER_SWITCH_REQUEST_Msk (0x1UL << TRACEANDDEBUGALTA_FORCE_OVERRIDE_POWER_SWITCH_REQUEST_Pos) /*!< Bit mask of POWER_SWITCH_REQUEST field. */
#define TRACEANDDEBUGALTA_FORCE_OVERRIDE_POWER_SWITCH_REQUEST_REQ0 (0UL) /*!< powerRequest.switch = 0 */
#define TRACEANDDEBUGALTA_FORCE_OVERRIDE_POWER_SWITCH_REQUEST_REQ1 (1UL) /*!< powerRequest.switch = 1 */

/* Bit 7 :   */
#define TRACEANDDEBUGALTA_FORCE_OVERRIDE_CLOCK_FORCING_Pos (7UL) /*!< Position of CLOCK_FORCING field. */
#define TRACEANDDEBUGALTA_FORCE_OVERRIDE_CLOCK_FORCING_Msk (0x1UL << TRACEANDDEBUGALTA_FORCE_OVERRIDE_CLOCK_FORCING_Pos) /*!< Bit mask of CLOCK_FORCING field. */
#define TRACEANDDEBUGALTA_FORCE_OVERRIDE_CLOCK_FORCING_FORCE0 (0UL) /*!< All clock forcing  disabled */
#define TRACEANDDEBUGALTA_FORCE_OVERRIDE_CLOCK_FORCING_FORCE1 (1UL) /*!< All clock forcing  enabled */

/* Bit 3 :   */
#define TRACEANDDEBUGALTA_FORCE_OVERRIDE_CORE_CLOCK_REQUEST_Pos (3UL) /*!< Position of CORE_CLOCK_REQUEST field. */
#define TRACEANDDEBUGALTA_FORCE_OVERRIDE_CORE_CLOCK_REQUEST_Msk (0x1UL << TRACEANDDEBUGALTA_FORCE_OVERRIDE_CORE_CLOCK_REQUEST_Pos) /*!< Bit mask of CORE_CLOCK_REQUEST field. */
#define TRACEANDDEBUGALTA_FORCE_OVERRIDE_CORE_CLOCK_REQUEST_REQ0 (0UL) /*!< clockRequest.core = 0 */
#define TRACEANDDEBUGALTA_FORCE_OVERRIDE_CORE_CLOCK_REQUEST_REQ1 (1UL) /*!< clockRequest.core = 1 */

/* Bit 2 :   */
#define TRACEANDDEBUGALTA_FORCE_OVERRIDE_CLOCK_BUFFER_REQUEST_Pos (2UL) /*!< Position of CLOCK_BUFFER_REQUEST field. */
#define TRACEANDDEBUGALTA_FORCE_OVERRIDE_CLOCK_BUFFER_REQUEST_Msk (0x1UL << TRACEANDDEBUGALTA_FORCE_OVERRIDE_CLOCK_BUFFER_REQUEST_Pos) /*!< Bit mask of CLOCK_BUFFER_REQUEST field. */
#define TRACEANDDEBUGALTA_FORCE_OVERRIDE_CLOCK_BUFFER_REQUEST_REQ0 (0UL) /*!< clockRequest.buff = 0 */
#define TRACEANDDEBUGALTA_FORCE_OVERRIDE_CLOCK_BUFFER_REQUEST_REQ1 (1UL) /*!< clockRequest.buff = 1 */

/* Bit 1 :   */
#define TRACEANDDEBUGALTA_FORCE_OVERRIDE_CLOCK_SWITCH_REQUEST_Pos (1UL) /*!< Position of CLOCK_SWITCH_REQUEST field. */
#define TRACEANDDEBUGALTA_FORCE_OVERRIDE_CLOCK_SWITCH_REQUEST_Msk (0x1UL << TRACEANDDEBUGALTA_FORCE_OVERRIDE_CLOCK_SWITCH_REQUEST_Pos) /*!< Bit mask of CLOCK_SWITCH_REQUEST field. */
#define TRACEANDDEBUGALTA_FORCE_OVERRIDE_CLOCK_SWITCH_REQUEST_REQ0 (0UL) /*!< clockRequest.switch = 0 */
#define TRACEANDDEBUGALTA_FORCE_OVERRIDE_CLOCK_SWITCH_REQUEST_REQ1 (1UL) /*!< clockRequest.switch = 1 */

/* Bit 0 :   */
#define TRACEANDDEBUGALTA_FORCE_OVERRIDE_CLOCK_SWITCH_REQUEST_A_Pos (0UL) /*!< Position of CLOCK_SWITCH_REQUEST_A field. */
#define TRACEANDDEBUGALTA_FORCE_OVERRIDE_CLOCK_SWITCH_REQUEST_A_Msk (0x1UL << TRACEANDDEBUGALTA_FORCE_OVERRIDE_CLOCK_SWITCH_REQUEST_A_Pos) /*!< Bit mask of CLOCK_SWITCH_REQUEST_A field. */
#define TRACEANDDEBUGALTA_FORCE_OVERRIDE_CLOCK_SWITCH_REQUEST_A_REQ0 (0UL) /*!< clockRequest.switch_a = 0 */
#define TRACEANDDEBUGALTA_FORCE_OVERRIDE_CLOCK_SWITCH_REQUEST_A_REQ1 (1UL) /*!< clockRequest.switch_a = 1 */

/* Register: TRACEANDDEBUGALTA_TURN_OFF_AUTO_CLOCKSOURCE_REQ */
/* Description: Turn of the automatic clock request. */

/* Bit 3 :   */
#define TRACEANDDEBUGALTA_TURN_OFF_AUTO_CLOCKSOURCE_REQ_CLOCK_START_PCP_3_Pos (3UL) /*!< Position of CLOCK_START_PCP_3 field. */
#define TRACEANDDEBUGALTA_TURN_OFF_AUTO_CLOCKSOURCE_REQ_CLOCK_START_PCP_3_Msk (0x1UL << TRACEANDDEBUGALTA_TURN_OFF_AUTO_CLOCKSOURCE_REQ_CLOCK_START_PCP_3_Pos) /*!< Bit mask of CLOCK_START_PCP_3 field. */
#define TRACEANDDEBUGALTA_TURN_OFF_AUTO_CLOCKSOURCE_REQ_CLOCK_START_PCP_3_NORMAL_PCP_3 (0UL) /*!< normal clock start for PCP 3 */
#define TRACEANDDEBUGALTA_TURN_OFF_AUTO_CLOCKSOURCE_REQ_CLOCK_START_PCP_3_OFF_PCP_3 (1UL) /*!< turn off normal clock start for PCP 3 */

/* Bit 2 :   */
#define TRACEANDDEBUGALTA_TURN_OFF_AUTO_CLOCKSOURCE_REQ_CLOCK_START_PCP_2_Pos (2UL) /*!< Position of CLOCK_START_PCP_2 field. */
#define TRACEANDDEBUGALTA_TURN_OFF_AUTO_CLOCKSOURCE_REQ_CLOCK_START_PCP_2_Msk (0x1UL << TRACEANDDEBUGALTA_TURN_OFF_AUTO_CLOCKSOURCE_REQ_CLOCK_START_PCP_2_Pos) /*!< Bit mask of CLOCK_START_PCP_2 field. */
#define TRACEANDDEBUGALTA_TURN_OFF_AUTO_CLOCKSOURCE_REQ_CLOCK_START_PCP_2_NORMAL_PCP_2 (0UL) /*!< normal clock start for PCP 2 */
#define TRACEANDDEBUGALTA_TURN_OFF_AUTO_CLOCKSOURCE_REQ_CLOCK_START_PCP_2_OFF_PCP_2 (1UL) /*!< turn off normal clock start for PCP 2 */

/* Bit 1 :   */
#define TRACEANDDEBUGALTA_TURN_OFF_AUTO_CLOCKSOURCE_REQ_CLOCK_START_PCP_1_Pos (1UL) /*!< Position of CLOCK_START_PCP_1 field. */
#define TRACEANDDEBUGALTA_TURN_OFF_AUTO_CLOCKSOURCE_REQ_CLOCK_START_PCP_1_Msk (0x1UL << TRACEANDDEBUGALTA_TURN_OFF_AUTO_CLOCKSOURCE_REQ_CLOCK_START_PCP_1_Pos) /*!< Bit mask of CLOCK_START_PCP_1 field. */
#define TRACEANDDEBUGALTA_TURN_OFF_AUTO_CLOCKSOURCE_REQ_CLOCK_START_PCP_1_NORMAL_PCP_1 (0UL) /*!< normal clock start for PCP 1 */
#define TRACEANDDEBUGALTA_TURN_OFF_AUTO_CLOCKSOURCE_REQ_CLOCK_START_PCP_1_OFF_PCP_1 (1UL) /*!< turn off normal clock start for PCP 1 */

/* Bit 0 :   */
#define TRACEANDDEBUGALTA_TURN_OFF_AUTO_CLOCKSOURCE_REQ_CLOCK_START_PCP_0_Pos (0UL) /*!< Position of CLOCK_START_PCP_0 field. */
#define TRACEANDDEBUGALTA_TURN_OFF_AUTO_CLOCKSOURCE_REQ_CLOCK_START_PCP_0_Msk (0x1UL << TRACEANDDEBUGALTA_TURN_OFF_AUTO_CLOCKSOURCE_REQ_CLOCK_START_PCP_0_Pos) /*!< Bit mask of CLOCK_START_PCP_0 field. */
#define TRACEANDDEBUGALTA_TURN_OFF_AUTO_CLOCKSOURCE_REQ_CLOCK_START_PCP_0_NORMAL_PCP_0 (0UL) /*!< normal clock start for PCP 0 */
#define TRACEANDDEBUGALTA_TURN_OFF_AUTO_CLOCKSOURCE_REQ_CLOCK_START_PCP_0_OFF_PCP_0 (1UL) /*!< turn off normal clock start for PCP 0 */


/* Peripheral: UARTE */
/* Description: UART with EasyDMA */

/* Register: UARTE_TASKS_STARTRX */
/* Description: Start UART receiver */

/* Bit 0 : Start UART receiver */
#define UARTE_TASKS_STARTRX_TASKS_STARTRX_Pos (0UL) /*!< Position of TASKS_STARTRX field. */
#define UARTE_TASKS_STARTRX_TASKS_STARTRX_Msk (0x1UL << UARTE_TASKS_STARTRX_TASKS_STARTRX_Pos) /*!< Bit mask of TASKS_STARTRX field. */
#define UARTE_TASKS_STARTRX_TASKS_STARTRX_Trigger (1UL) /*!< Trigger task */

/* Register: UARTE_TASKS_STOPRX */
/* Description: Stop UART receiver */

/* Bit 0 : Stop UART receiver */
#define UARTE_TASKS_STOPRX_TASKS_STOPRX_Pos (0UL) /*!< Position of TASKS_STOPRX field. */
#define UARTE_TASKS_STOPRX_TASKS_STOPRX_Msk (0x1UL << UARTE_TASKS_STOPRX_TASKS_STOPRX_Pos) /*!< Bit mask of TASKS_STOPRX field. */
#define UARTE_TASKS_STOPRX_TASKS_STOPRX_Trigger (1UL) /*!< Trigger task */

/* Register: UARTE_TASKS_STARTTX */
/* Description: Start UART transmitter */

/* Bit 0 : Start UART transmitter */
#define UARTE_TASKS_STARTTX_TASKS_STARTTX_Pos (0UL) /*!< Position of TASKS_STARTTX field. */
#define UARTE_TASKS_STARTTX_TASKS_STARTTX_Msk (0x1UL << UARTE_TASKS_STARTTX_TASKS_STARTTX_Pos) /*!< Bit mask of TASKS_STARTTX field. */
#define UARTE_TASKS_STARTTX_TASKS_STARTTX_Trigger (1UL) /*!< Trigger task */

/* Register: UARTE_TASKS_STOPTX */
/* Description: Stop UART transmitter */

/* Bit 0 : Stop UART transmitter */
#define UARTE_TASKS_STOPTX_TASKS_STOPTX_Pos (0UL) /*!< Position of TASKS_STOPTX field. */
#define UARTE_TASKS_STOPTX_TASKS_STOPTX_Msk (0x1UL << UARTE_TASKS_STOPTX_TASKS_STOPTX_Pos) /*!< Bit mask of TASKS_STOPTX field. */
#define UARTE_TASKS_STOPTX_TASKS_STOPTX_Trigger (1UL) /*!< Trigger task */

/* Register: UARTE_TASKS_SUSPEND */
/* Description: Suspend UART transaction */

/* Bit 0 : Suspend UART transaction */
#define UARTE_TASKS_SUSPEND_TASKS_SUSPEND_Pos (0UL) /*!< Position of TASKS_SUSPEND field. */
#define UARTE_TASKS_SUSPEND_TASKS_SUSPEND_Msk (0x1UL << UARTE_TASKS_SUSPEND_TASKS_SUSPEND_Pos) /*!< Bit mask of TASKS_SUSPEND field. */
#define UARTE_TASKS_SUSPEND_TASKS_SUSPEND_Trigger (1UL) /*!< Trigger task */

/* Register: UARTE_TASKS_RESUME */
/* Description: Resume UART transaction */

/* Bit 0 : Resume UART transaction */
#define UARTE_TASKS_RESUME_TASKS_RESUME_Pos (0UL) /*!< Position of TASKS_RESUME field. */
#define UARTE_TASKS_RESUME_TASKS_RESUME_Msk (0x1UL << UARTE_TASKS_RESUME_TASKS_RESUME_Pos) /*!< Bit mask of TASKS_RESUME field. */
#define UARTE_TASKS_RESUME_TASKS_RESUME_Trigger (1UL) /*!< Trigger task */

/* Register: UARTE_TASKS_FLUSHRX */
/* Description: Flush RX FIFO into RX buffer */

/* Bit 0 : Flush RX FIFO into RX buffer */
#define UARTE_TASKS_FLUSHRX_TASKS_FLUSHRX_Pos (0UL) /*!< Position of TASKS_FLUSHRX field. */
#define UARTE_TASKS_FLUSHRX_TASKS_FLUSHRX_Msk (0x1UL << UARTE_TASKS_FLUSHRX_TASKS_FLUSHRX_Pos) /*!< Bit mask of TASKS_FLUSHRX field. */
#define UARTE_TASKS_FLUSHRX_TASKS_FLUSHRX_Trigger (1UL) /*!< Trigger task */

/* Register: UARTE_EVENTS_CTS */
/* Description: CTS is activated (set low). Clear To Send. */

/* Bit 0 : CTS is activated (set low). Clear To Send. */
#define UARTE_EVENTS_CTS_EVENTS_CTS_Pos (0UL) /*!< Position of EVENTS_CTS field. */
#define UARTE_EVENTS_CTS_EVENTS_CTS_Msk (0x1UL << UARTE_EVENTS_CTS_EVENTS_CTS_Pos) /*!< Bit mask of EVENTS_CTS field. */
#define UARTE_EVENTS_CTS_EVENTS_CTS_NotGenerated (0UL) /*!< Event not generated */
#define UARTE_EVENTS_CTS_EVENTS_CTS_Generated (1UL) /*!< Event generated */

/* Register: UARTE_EVENTS_NCTS */
/* Description: CTS is deactivated (set high). Not Clear To Send. */

/* Bit 0 : CTS is deactivated (set high). Not Clear To Send. */
#define UARTE_EVENTS_NCTS_EVENTS_NCTS_Pos (0UL) /*!< Position of EVENTS_NCTS field. */
#define UARTE_EVENTS_NCTS_EVENTS_NCTS_Msk (0x1UL << UARTE_EVENTS_NCTS_EVENTS_NCTS_Pos) /*!< Bit mask of EVENTS_NCTS field. */
#define UARTE_EVENTS_NCTS_EVENTS_NCTS_NotGenerated (0UL) /*!< Event not generated */
#define UARTE_EVENTS_NCTS_EVENTS_NCTS_Generated (1UL) /*!< Event generated */

/* Register: UARTE_EVENTS_RXDRDY */
/* Description: Data received in RXD (but potentially not yet transferred to Data RAM) */

/* Bit 0 : Data received in RXD (but potentially not yet transferred to Data RAM) */
#define UARTE_EVENTS_RXDRDY_EVENTS_RXDRDY_Pos (0UL) /*!< Position of EVENTS_RXDRDY field. */
#define UARTE_EVENTS_RXDRDY_EVENTS_RXDRDY_Msk (0x1UL << UARTE_EVENTS_RXDRDY_EVENTS_RXDRDY_Pos) /*!< Bit mask of EVENTS_RXDRDY field. */
#define UARTE_EVENTS_RXDRDY_EVENTS_RXDRDY_NotGenerated (0UL) /*!< Event not generated */
#define UARTE_EVENTS_RXDRDY_EVENTS_RXDRDY_Generated (1UL) /*!< Event generated */

/* Register: UARTE_EVENTS_ENDRX */
/* Description: Receive buffer is filled up */

/* Bit 0 : Receive buffer is filled up */
#define UARTE_EVENTS_ENDRX_EVENTS_ENDRX_Pos (0UL) /*!< Position of EVENTS_ENDRX field. */
#define UARTE_EVENTS_ENDRX_EVENTS_ENDRX_Msk (0x1UL << UARTE_EVENTS_ENDRX_EVENTS_ENDRX_Pos) /*!< Bit mask of EVENTS_ENDRX field. */
#define UARTE_EVENTS_ENDRX_EVENTS_ENDRX_NotGenerated (0UL) /*!< Event not generated */
#define UARTE_EVENTS_ENDRX_EVENTS_ENDRX_Generated (1UL) /*!< Event generated */

/* Register: UARTE_EVENTS_TXDRDY */
/* Description: Data sent from TXD */

/* Bit 0 : Data sent from TXD */
#define UARTE_EVENTS_TXDRDY_EVENTS_TXDRDY_Pos (0UL) /*!< Position of EVENTS_TXDRDY field. */
#define UARTE_EVENTS_TXDRDY_EVENTS_TXDRDY_Msk (0x1UL << UARTE_EVENTS_TXDRDY_EVENTS_TXDRDY_Pos) /*!< Bit mask of EVENTS_TXDRDY field. */
#define UARTE_EVENTS_TXDRDY_EVENTS_TXDRDY_NotGenerated (0UL) /*!< Event not generated */
#define UARTE_EVENTS_TXDRDY_EVENTS_TXDRDY_Generated (1UL) /*!< Event generated */

/* Register: UARTE_EVENTS_ENDTX */
/* Description: Last TX byte transmitted */

/* Bit 0 : Last TX byte transmitted */
#define UARTE_EVENTS_ENDTX_EVENTS_ENDTX_Pos (0UL) /*!< Position of EVENTS_ENDTX field. */
#define UARTE_EVENTS_ENDTX_EVENTS_ENDTX_Msk (0x1UL << UARTE_EVENTS_ENDTX_EVENTS_ENDTX_Pos) /*!< Bit mask of EVENTS_ENDTX field. */
#define UARTE_EVENTS_ENDTX_EVENTS_ENDTX_NotGenerated (0UL) /*!< Event not generated */
#define UARTE_EVENTS_ENDTX_EVENTS_ENDTX_Generated (1UL) /*!< Event generated */

/* Register: UARTE_EVENTS_ERROR */
/* Description: Error detected */

/* Bit 0 : Error detected */
#define UARTE_EVENTS_ERROR_EVENTS_ERROR_Pos (0UL) /*!< Position of EVENTS_ERROR field. */
#define UARTE_EVENTS_ERROR_EVENTS_ERROR_Msk (0x1UL << UARTE_EVENTS_ERROR_EVENTS_ERROR_Pos) /*!< Bit mask of EVENTS_ERROR field. */
#define UARTE_EVENTS_ERROR_EVENTS_ERROR_NotGenerated (0UL) /*!< Event not generated */
#define UARTE_EVENTS_ERROR_EVENTS_ERROR_Generated (1UL) /*!< Event generated */

/* Register: UARTE_EVENTS_RXTO */
/* Description: Receiver timeout */

/* Bit 0 : Receiver timeout */
#define UARTE_EVENTS_RXTO_EVENTS_RXTO_Pos (0UL) /*!< Position of EVENTS_RXTO field. */
#define UARTE_EVENTS_RXTO_EVENTS_RXTO_Msk (0x1UL << UARTE_EVENTS_RXTO_EVENTS_RXTO_Pos) /*!< Bit mask of EVENTS_RXTO field. */
#define UARTE_EVENTS_RXTO_EVENTS_RXTO_NotGenerated (0UL) /*!< Event not generated */
#define UARTE_EVENTS_RXTO_EVENTS_RXTO_Generated (1UL) /*!< Event generated */

/* Register: UARTE_EVENTS_RXSTARTED */
/* Description: UART receiver has started */

/* Bit 0 : UART receiver has started */
#define UARTE_EVENTS_RXSTARTED_EVENTS_RXSTARTED_Pos (0UL) /*!< Position of EVENTS_RXSTARTED field. */
#define UARTE_EVENTS_RXSTARTED_EVENTS_RXSTARTED_Msk (0x1UL << UARTE_EVENTS_RXSTARTED_EVENTS_RXSTARTED_Pos) /*!< Bit mask of EVENTS_RXSTARTED field. */
#define UARTE_EVENTS_RXSTARTED_EVENTS_RXSTARTED_NotGenerated (0UL) /*!< Event not generated */
#define UARTE_EVENTS_RXSTARTED_EVENTS_RXSTARTED_Generated (1UL) /*!< Event generated */

/* Register: UARTE_EVENTS_TXSTARTED */
/* Description: UART transmitter has started */

/* Bit 0 : UART transmitter has started */
#define UARTE_EVENTS_TXSTARTED_EVENTS_TXSTARTED_Pos (0UL) /*!< Position of EVENTS_TXSTARTED field. */
#define UARTE_EVENTS_TXSTARTED_EVENTS_TXSTARTED_Msk (0x1UL << UARTE_EVENTS_TXSTARTED_EVENTS_TXSTARTED_Pos) /*!< Bit mask of EVENTS_TXSTARTED field. */
#define UARTE_EVENTS_TXSTARTED_EVENTS_TXSTARTED_NotGenerated (0UL) /*!< Event not generated */
#define UARTE_EVENTS_TXSTARTED_EVENTS_TXSTARTED_Generated (1UL) /*!< Event generated */

/* Register: UARTE_EVENTS_RTS */
/* Description: RX FIFO has only room for four more bytes before it overflows */

/* Bit 0 : RX FIFO has only room for four more bytes before it overflows */
#define UARTE_EVENTS_RTS_EVENTS_RTS_Pos (0UL) /*!< Position of EVENTS_RTS field. */
#define UARTE_EVENTS_RTS_EVENTS_RTS_Msk (0x1UL << UARTE_EVENTS_RTS_EVENTS_RTS_Pos) /*!< Bit mask of EVENTS_RTS field. */
#define UARTE_EVENTS_RTS_EVENTS_RTS_NotGenerated (0UL) /*!< Event not generated */
#define UARTE_EVENTS_RTS_EVENTS_RTS_Generated (1UL) /*!< Event generated */

/* Register: UARTE_EVENTS_TXSTOPPED */
/* Description: Transmitter stopped */

/* Bit 0 : Transmitter stopped */
#define UARTE_EVENTS_TXSTOPPED_EVENTS_TXSTOPPED_Pos (0UL) /*!< Position of EVENTS_TXSTOPPED field. */
#define UARTE_EVENTS_TXSTOPPED_EVENTS_TXSTOPPED_Msk (0x1UL << UARTE_EVENTS_TXSTOPPED_EVENTS_TXSTOPPED_Pos) /*!< Bit mask of EVENTS_TXSTOPPED field. */
#define UARTE_EVENTS_TXSTOPPED_EVENTS_TXSTOPPED_NotGenerated (0UL) /*!< Event not generated */
#define UARTE_EVENTS_TXSTOPPED_EVENTS_TXSTOPPED_Generated (1UL) /*!< Event generated */

/* Register: UARTE_SHORTS */
/* Description: Shortcuts between local events and tasks */

/* Bit 6 : Shortcut between event ENDRX and task STOPRX */
#define UARTE_SHORTS_ENDRX_STOPRX_Pos (6UL) /*!< Position of ENDRX_STOPRX field. */
#define UARTE_SHORTS_ENDRX_STOPRX_Msk (0x1UL << UARTE_SHORTS_ENDRX_STOPRX_Pos) /*!< Bit mask of ENDRX_STOPRX field. */
#define UARTE_SHORTS_ENDRX_STOPRX_Disabled (0UL) /*!< Disable shortcut */
#define UARTE_SHORTS_ENDRX_STOPRX_Enabled (1UL) /*!< Enable shortcut */

/* Bit 5 : Shortcut between event ENDRX and task STARTRX */
#define UARTE_SHORTS_ENDRX_STARTRX_Pos (5UL) /*!< Position of ENDRX_STARTRX field. */
#define UARTE_SHORTS_ENDRX_STARTRX_Msk (0x1UL << UARTE_SHORTS_ENDRX_STARTRX_Pos) /*!< Bit mask of ENDRX_STARTRX field. */
#define UARTE_SHORTS_ENDRX_STARTRX_Disabled (0UL) /*!< Disable shortcut */
#define UARTE_SHORTS_ENDRX_STARTRX_Enabled (1UL) /*!< Enable shortcut */

/* Bit 4 : Shortcut between event NCTS and task STOPRX */
#define UARTE_SHORTS_NCTS_STOPRX_Pos (4UL) /*!< Position of NCTS_STOPRX field. */
#define UARTE_SHORTS_NCTS_STOPRX_Msk (0x1UL << UARTE_SHORTS_NCTS_STOPRX_Pos) /*!< Bit mask of NCTS_STOPRX field. */
#define UARTE_SHORTS_NCTS_STOPRX_Disabled (0UL) /*!< Disable shortcut */
#define UARTE_SHORTS_NCTS_STOPRX_Enabled (1UL) /*!< Enable shortcut */

/* Bit 3 : Shortcut between event CTS and task STARTRX */
#define UARTE_SHORTS_CTS_STARTRX_Pos (3UL) /*!< Position of CTS_STARTRX field. */
#define UARTE_SHORTS_CTS_STARTRX_Msk (0x1UL << UARTE_SHORTS_CTS_STARTRX_Pos) /*!< Bit mask of CTS_STARTRX field. */
#define UARTE_SHORTS_CTS_STARTRX_Disabled (0UL) /*!< Disable shortcut */
#define UARTE_SHORTS_CTS_STARTRX_Enabled (1UL) /*!< Enable shortcut */

/* Register: UARTE_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 22 : Enable or disable interrupt for event TXSTOPPED */
#define UARTE_INTEN_TXSTOPPED_Pos (22UL) /*!< Position of TXSTOPPED field. */
#define UARTE_INTEN_TXSTOPPED_Msk (0x1UL << UARTE_INTEN_TXSTOPPED_Pos) /*!< Bit mask of TXSTOPPED field. */
#define UARTE_INTEN_TXSTOPPED_Disabled (0UL) /*!< Disable */
#define UARTE_INTEN_TXSTOPPED_Enabled (1UL) /*!< Enable */

/* Bit 21 : Enable or disable interrupt for event RTS */
#define UARTE_INTEN_RTS_Pos (21UL) /*!< Position of RTS field. */
#define UARTE_INTEN_RTS_Msk (0x1UL << UARTE_INTEN_RTS_Pos) /*!< Bit mask of RTS field. */
#define UARTE_INTEN_RTS_Disabled (0UL) /*!< Disable */
#define UARTE_INTEN_RTS_Enabled (1UL) /*!< Enable */

/* Bit 20 : Enable or disable interrupt for event TXSTARTED */
#define UARTE_INTEN_TXSTARTED_Pos (20UL) /*!< Position of TXSTARTED field. */
#define UARTE_INTEN_TXSTARTED_Msk (0x1UL << UARTE_INTEN_TXSTARTED_Pos) /*!< Bit mask of TXSTARTED field. */
#define UARTE_INTEN_TXSTARTED_Disabled (0UL) /*!< Disable */
#define UARTE_INTEN_TXSTARTED_Enabled (1UL) /*!< Enable */

/* Bit 19 : Enable or disable interrupt for event RXSTARTED */
#define UARTE_INTEN_RXSTARTED_Pos (19UL) /*!< Position of RXSTARTED field. */
#define UARTE_INTEN_RXSTARTED_Msk (0x1UL << UARTE_INTEN_RXSTARTED_Pos) /*!< Bit mask of RXSTARTED field. */
#define UARTE_INTEN_RXSTARTED_Disabled (0UL) /*!< Disable */
#define UARTE_INTEN_RXSTARTED_Enabled (1UL) /*!< Enable */

/* Bit 17 : Enable or disable interrupt for event RXTO */
#define UARTE_INTEN_RXTO_Pos (17UL) /*!< Position of RXTO field. */
#define UARTE_INTEN_RXTO_Msk (0x1UL << UARTE_INTEN_RXTO_Pos) /*!< Bit mask of RXTO field. */
#define UARTE_INTEN_RXTO_Disabled (0UL) /*!< Disable */
#define UARTE_INTEN_RXTO_Enabled (1UL) /*!< Enable */

/* Bit 9 : Enable or disable interrupt for event ERROR */
#define UARTE_INTEN_ERROR_Pos (9UL) /*!< Position of ERROR field. */
#define UARTE_INTEN_ERROR_Msk (0x1UL << UARTE_INTEN_ERROR_Pos) /*!< Bit mask of ERROR field. */
#define UARTE_INTEN_ERROR_Disabled (0UL) /*!< Disable */
#define UARTE_INTEN_ERROR_Enabled (1UL) /*!< Enable */

/* Bit 8 : Enable or disable interrupt for event ENDTX */
#define UARTE_INTEN_ENDTX_Pos (8UL) /*!< Position of ENDTX field. */
#define UARTE_INTEN_ENDTX_Msk (0x1UL << UARTE_INTEN_ENDTX_Pos) /*!< Bit mask of ENDTX field. */
#define UARTE_INTEN_ENDTX_Disabled (0UL) /*!< Disable */
#define UARTE_INTEN_ENDTX_Enabled (1UL) /*!< Enable */

/* Bit 7 : Enable or disable interrupt for event TXDRDY */
#define UARTE_INTEN_TXDRDY_Pos (7UL) /*!< Position of TXDRDY field. */
#define UARTE_INTEN_TXDRDY_Msk (0x1UL << UARTE_INTEN_TXDRDY_Pos) /*!< Bit mask of TXDRDY field. */
#define UARTE_INTEN_TXDRDY_Disabled (0UL) /*!< Disable */
#define UARTE_INTEN_TXDRDY_Enabled (1UL) /*!< Enable */

/* Bit 4 : Enable or disable interrupt for event ENDRX */
#define UARTE_INTEN_ENDRX_Pos (4UL) /*!< Position of ENDRX field. */
#define UARTE_INTEN_ENDRX_Msk (0x1UL << UARTE_INTEN_ENDRX_Pos) /*!< Bit mask of ENDRX field. */
#define UARTE_INTEN_ENDRX_Disabled (0UL) /*!< Disable */
#define UARTE_INTEN_ENDRX_Enabled (1UL) /*!< Enable */

/* Bit 2 : Enable or disable interrupt for event RXDRDY */
#define UARTE_INTEN_RXDRDY_Pos (2UL) /*!< Position of RXDRDY field. */
#define UARTE_INTEN_RXDRDY_Msk (0x1UL << UARTE_INTEN_RXDRDY_Pos) /*!< Bit mask of RXDRDY field. */
#define UARTE_INTEN_RXDRDY_Disabled (0UL) /*!< Disable */
#define UARTE_INTEN_RXDRDY_Enabled (1UL) /*!< Enable */

/* Bit 1 : Enable or disable interrupt for event NCTS */
#define UARTE_INTEN_NCTS_Pos (1UL) /*!< Position of NCTS field. */
#define UARTE_INTEN_NCTS_Msk (0x1UL << UARTE_INTEN_NCTS_Pos) /*!< Bit mask of NCTS field. */
#define UARTE_INTEN_NCTS_Disabled (0UL) /*!< Disable */
#define UARTE_INTEN_NCTS_Enabled (1UL) /*!< Enable */

/* Bit 0 : Enable or disable interrupt for event CTS */
#define UARTE_INTEN_CTS_Pos (0UL) /*!< Position of CTS field. */
#define UARTE_INTEN_CTS_Msk (0x1UL << UARTE_INTEN_CTS_Pos) /*!< Bit mask of CTS field. */
#define UARTE_INTEN_CTS_Disabled (0UL) /*!< Disable */
#define UARTE_INTEN_CTS_Enabled (1UL) /*!< Enable */

/* Register: UARTE_INTENSET */
/* Description: Enable interrupt */

/* Bit 22 : Write '1' to enable interrupt for event TXSTOPPED */
#define UARTE_INTENSET_TXSTOPPED_Pos (22UL) /*!< Position of TXSTOPPED field. */
#define UARTE_INTENSET_TXSTOPPED_Msk (0x1UL << UARTE_INTENSET_TXSTOPPED_Pos) /*!< Bit mask of TXSTOPPED field. */
#define UARTE_INTENSET_TXSTOPPED_Disabled (0UL) /*!< Read: Disabled */
#define UARTE_INTENSET_TXSTOPPED_Enabled (1UL) /*!< Read: Enabled */
#define UARTE_INTENSET_TXSTOPPED_Set (1UL) /*!< Enable */

/* Bit 21 : Write '1' to enable interrupt for event RTS */
#define UARTE_INTENSET_RTS_Pos (21UL) /*!< Position of RTS field. */
#define UARTE_INTENSET_RTS_Msk (0x1UL << UARTE_INTENSET_RTS_Pos) /*!< Bit mask of RTS field. */
#define UARTE_INTENSET_RTS_Disabled (0UL) /*!< Read: Disabled */
#define UARTE_INTENSET_RTS_Enabled (1UL) /*!< Read: Enabled */
#define UARTE_INTENSET_RTS_Set (1UL) /*!< Enable */

/* Bit 20 : Write '1' to enable interrupt for event TXSTARTED */
#define UARTE_INTENSET_TXSTARTED_Pos (20UL) /*!< Position of TXSTARTED field. */
#define UARTE_INTENSET_TXSTARTED_Msk (0x1UL << UARTE_INTENSET_TXSTARTED_Pos) /*!< Bit mask of TXSTARTED field. */
#define UARTE_INTENSET_TXSTARTED_Disabled (0UL) /*!< Read: Disabled */
#define UARTE_INTENSET_TXSTARTED_Enabled (1UL) /*!< Read: Enabled */
#define UARTE_INTENSET_TXSTARTED_Set (1UL) /*!< Enable */

/* Bit 19 : Write '1' to enable interrupt for event RXSTARTED */
#define UARTE_INTENSET_RXSTARTED_Pos (19UL) /*!< Position of RXSTARTED field. */
#define UARTE_INTENSET_RXSTARTED_Msk (0x1UL << UARTE_INTENSET_RXSTARTED_Pos) /*!< Bit mask of RXSTARTED field. */
#define UARTE_INTENSET_RXSTARTED_Disabled (0UL) /*!< Read: Disabled */
#define UARTE_INTENSET_RXSTARTED_Enabled (1UL) /*!< Read: Enabled */
#define UARTE_INTENSET_RXSTARTED_Set (1UL) /*!< Enable */

/* Bit 17 : Write '1' to enable interrupt for event RXTO */
#define UARTE_INTENSET_RXTO_Pos (17UL) /*!< Position of RXTO field. */
#define UARTE_INTENSET_RXTO_Msk (0x1UL << UARTE_INTENSET_RXTO_Pos) /*!< Bit mask of RXTO field. */
#define UARTE_INTENSET_RXTO_Disabled (0UL) /*!< Read: Disabled */
#define UARTE_INTENSET_RXTO_Enabled (1UL) /*!< Read: Enabled */
#define UARTE_INTENSET_RXTO_Set (1UL) /*!< Enable */

/* Bit 9 : Write '1' to enable interrupt for event ERROR */
#define UARTE_INTENSET_ERROR_Pos (9UL) /*!< Position of ERROR field. */
#define UARTE_INTENSET_ERROR_Msk (0x1UL << UARTE_INTENSET_ERROR_Pos) /*!< Bit mask of ERROR field. */
#define UARTE_INTENSET_ERROR_Disabled (0UL) /*!< Read: Disabled */
#define UARTE_INTENSET_ERROR_Enabled (1UL) /*!< Read: Enabled */
#define UARTE_INTENSET_ERROR_Set (1UL) /*!< Enable */

/* Bit 8 : Write '1' to enable interrupt for event ENDTX */
#define UARTE_INTENSET_ENDTX_Pos (8UL) /*!< Position of ENDTX field. */
#define UARTE_INTENSET_ENDTX_Msk (0x1UL << UARTE_INTENSET_ENDTX_Pos) /*!< Bit mask of ENDTX field. */
#define UARTE_INTENSET_ENDTX_Disabled (0UL) /*!< Read: Disabled */
#define UARTE_INTENSET_ENDTX_Enabled (1UL) /*!< Read: Enabled */
#define UARTE_INTENSET_ENDTX_Set (1UL) /*!< Enable */

/* Bit 7 : Write '1' to enable interrupt for event TXDRDY */
#define UARTE_INTENSET_TXDRDY_Pos (7UL) /*!< Position of TXDRDY field. */
#define UARTE_INTENSET_TXDRDY_Msk (0x1UL << UARTE_INTENSET_TXDRDY_Pos) /*!< Bit mask of TXDRDY field. */
#define UARTE_INTENSET_TXDRDY_Disabled (0UL) /*!< Read: Disabled */
#define UARTE_INTENSET_TXDRDY_Enabled (1UL) /*!< Read: Enabled */
#define UARTE_INTENSET_TXDRDY_Set (1UL) /*!< Enable */

/* Bit 4 : Write '1' to enable interrupt for event ENDRX */
#define UARTE_INTENSET_ENDRX_Pos (4UL) /*!< Position of ENDRX field. */
#define UARTE_INTENSET_ENDRX_Msk (0x1UL << UARTE_INTENSET_ENDRX_Pos) /*!< Bit mask of ENDRX field. */
#define UARTE_INTENSET_ENDRX_Disabled (0UL) /*!< Read: Disabled */
#define UARTE_INTENSET_ENDRX_Enabled (1UL) /*!< Read: Enabled */
#define UARTE_INTENSET_ENDRX_Set (1UL) /*!< Enable */

/* Bit 2 : Write '1' to enable interrupt for event RXDRDY */
#define UARTE_INTENSET_RXDRDY_Pos (2UL) /*!< Position of RXDRDY field. */
#define UARTE_INTENSET_RXDRDY_Msk (0x1UL << UARTE_INTENSET_RXDRDY_Pos) /*!< Bit mask of RXDRDY field. */
#define UARTE_INTENSET_RXDRDY_Disabled (0UL) /*!< Read: Disabled */
#define UARTE_INTENSET_RXDRDY_Enabled (1UL) /*!< Read: Enabled */
#define UARTE_INTENSET_RXDRDY_Set (1UL) /*!< Enable */

/* Bit 1 : Write '1' to enable interrupt for event NCTS */
#define UARTE_INTENSET_NCTS_Pos (1UL) /*!< Position of NCTS field. */
#define UARTE_INTENSET_NCTS_Msk (0x1UL << UARTE_INTENSET_NCTS_Pos) /*!< Bit mask of NCTS field. */
#define UARTE_INTENSET_NCTS_Disabled (0UL) /*!< Read: Disabled */
#define UARTE_INTENSET_NCTS_Enabled (1UL) /*!< Read: Enabled */
#define UARTE_INTENSET_NCTS_Set (1UL) /*!< Enable */

/* Bit 0 : Write '1' to enable interrupt for event CTS */
#define UARTE_INTENSET_CTS_Pos (0UL) /*!< Position of CTS field. */
#define UARTE_INTENSET_CTS_Msk (0x1UL << UARTE_INTENSET_CTS_Pos) /*!< Bit mask of CTS field. */
#define UARTE_INTENSET_CTS_Disabled (0UL) /*!< Read: Disabled */
#define UARTE_INTENSET_CTS_Enabled (1UL) /*!< Read: Enabled */
#define UARTE_INTENSET_CTS_Set (1UL) /*!< Enable */

/* Register: UARTE_INTENCLR */
/* Description: Disable interrupt */

/* Bit 22 : Write '1' to disable interrupt for event TXSTOPPED */
#define UARTE_INTENCLR_TXSTOPPED_Pos (22UL) /*!< Position of TXSTOPPED field. */
#define UARTE_INTENCLR_TXSTOPPED_Msk (0x1UL << UARTE_INTENCLR_TXSTOPPED_Pos) /*!< Bit mask of TXSTOPPED field. */
#define UARTE_INTENCLR_TXSTOPPED_Disabled (0UL) /*!< Read: Disabled */
#define UARTE_INTENCLR_TXSTOPPED_Enabled (1UL) /*!< Read: Enabled */
#define UARTE_INTENCLR_TXSTOPPED_Clear (1UL) /*!< Disable */

/* Bit 21 : Write '1' to disable interrupt for event RTS */
#define UARTE_INTENCLR_RTS_Pos (21UL) /*!< Position of RTS field. */
#define UARTE_INTENCLR_RTS_Msk (0x1UL << UARTE_INTENCLR_RTS_Pos) /*!< Bit mask of RTS field. */
#define UARTE_INTENCLR_RTS_Disabled (0UL) /*!< Read: Disabled */
#define UARTE_INTENCLR_RTS_Enabled (1UL) /*!< Read: Enabled */
#define UARTE_INTENCLR_RTS_Clear (1UL) /*!< Disable */

/* Bit 20 : Write '1' to disable interrupt for event TXSTARTED */
#define UARTE_INTENCLR_TXSTARTED_Pos (20UL) /*!< Position of TXSTARTED field. */
#define UARTE_INTENCLR_TXSTARTED_Msk (0x1UL << UARTE_INTENCLR_TXSTARTED_Pos) /*!< Bit mask of TXSTARTED field. */
#define UARTE_INTENCLR_TXSTARTED_Disabled (0UL) /*!< Read: Disabled */
#define UARTE_INTENCLR_TXSTARTED_Enabled (1UL) /*!< Read: Enabled */
#define UARTE_INTENCLR_TXSTARTED_Clear (1UL) /*!< Disable */

/* Bit 19 : Write '1' to disable interrupt for event RXSTARTED */
#define UARTE_INTENCLR_RXSTARTED_Pos (19UL) /*!< Position of RXSTARTED field. */
#define UARTE_INTENCLR_RXSTARTED_Msk (0x1UL << UARTE_INTENCLR_RXSTARTED_Pos) /*!< Bit mask of RXSTARTED field. */
#define UARTE_INTENCLR_RXSTARTED_Disabled (0UL) /*!< Read: Disabled */
#define UARTE_INTENCLR_RXSTARTED_Enabled (1UL) /*!< Read: Enabled */
#define UARTE_INTENCLR_RXSTARTED_Clear (1UL) /*!< Disable */

/* Bit 17 : Write '1' to disable interrupt for event RXTO */
#define UARTE_INTENCLR_RXTO_Pos (17UL) /*!< Position of RXTO field. */
#define UARTE_INTENCLR_RXTO_Msk (0x1UL << UARTE_INTENCLR_RXTO_Pos) /*!< Bit mask of RXTO field. */
#define UARTE_INTENCLR_RXTO_Disabled (0UL) /*!< Read: Disabled */
#define UARTE_INTENCLR_RXTO_Enabled (1UL) /*!< Read: Enabled */
#define UARTE_INTENCLR_RXTO_Clear (1UL) /*!< Disable */

/* Bit 9 : Write '1' to disable interrupt for event ERROR */
#define UARTE_INTENCLR_ERROR_Pos (9UL) /*!< Position of ERROR field. */
#define UARTE_INTENCLR_ERROR_Msk (0x1UL << UARTE_INTENCLR_ERROR_Pos) /*!< Bit mask of ERROR field. */
#define UARTE_INTENCLR_ERROR_Disabled (0UL) /*!< Read: Disabled */
#define UARTE_INTENCLR_ERROR_Enabled (1UL) /*!< Read: Enabled */
#define UARTE_INTENCLR_ERROR_Clear (1UL) /*!< Disable */

/* Bit 8 : Write '1' to disable interrupt for event ENDTX */
#define UARTE_INTENCLR_ENDTX_Pos (8UL) /*!< Position of ENDTX field. */
#define UARTE_INTENCLR_ENDTX_Msk (0x1UL << UARTE_INTENCLR_ENDTX_Pos) /*!< Bit mask of ENDTX field. */
#define UARTE_INTENCLR_ENDTX_Disabled (0UL) /*!< Read: Disabled */
#define UARTE_INTENCLR_ENDTX_Enabled (1UL) /*!< Read: Enabled */
#define UARTE_INTENCLR_ENDTX_Clear (1UL) /*!< Disable */

/* Bit 7 : Write '1' to disable interrupt for event TXDRDY */
#define UARTE_INTENCLR_TXDRDY_Pos (7UL) /*!< Position of TXDRDY field. */
#define UARTE_INTENCLR_TXDRDY_Msk (0x1UL << UARTE_INTENCLR_TXDRDY_Pos) /*!< Bit mask of TXDRDY field. */
#define UARTE_INTENCLR_TXDRDY_Disabled (0UL) /*!< Read: Disabled */
#define UARTE_INTENCLR_TXDRDY_Enabled (1UL) /*!< Read: Enabled */
#define UARTE_INTENCLR_TXDRDY_Clear (1UL) /*!< Disable */

/* Bit 4 : Write '1' to disable interrupt for event ENDRX */
#define UARTE_INTENCLR_ENDRX_Pos (4UL) /*!< Position of ENDRX field. */
#define UARTE_INTENCLR_ENDRX_Msk (0x1UL << UARTE_INTENCLR_ENDRX_Pos) /*!< Bit mask of ENDRX field. */
#define UARTE_INTENCLR_ENDRX_Disabled (0UL) /*!< Read: Disabled */
#define UARTE_INTENCLR_ENDRX_Enabled (1UL) /*!< Read: Enabled */
#define UARTE_INTENCLR_ENDRX_Clear (1UL) /*!< Disable */

/* Bit 2 : Write '1' to disable interrupt for event RXDRDY */
#define UARTE_INTENCLR_RXDRDY_Pos (2UL) /*!< Position of RXDRDY field. */
#define UARTE_INTENCLR_RXDRDY_Msk (0x1UL << UARTE_INTENCLR_RXDRDY_Pos) /*!< Bit mask of RXDRDY field. */
#define UARTE_INTENCLR_RXDRDY_Disabled (0UL) /*!< Read: Disabled */
#define UARTE_INTENCLR_RXDRDY_Enabled (1UL) /*!< Read: Enabled */
#define UARTE_INTENCLR_RXDRDY_Clear (1UL) /*!< Disable */

/* Bit 1 : Write '1' to disable interrupt for event NCTS */
#define UARTE_INTENCLR_NCTS_Pos (1UL) /*!< Position of NCTS field. */
#define UARTE_INTENCLR_NCTS_Msk (0x1UL << UARTE_INTENCLR_NCTS_Pos) /*!< Bit mask of NCTS field. */
#define UARTE_INTENCLR_NCTS_Disabled (0UL) /*!< Read: Disabled */
#define UARTE_INTENCLR_NCTS_Enabled (1UL) /*!< Read: Enabled */
#define UARTE_INTENCLR_NCTS_Clear (1UL) /*!< Disable */

/* Bit 0 : Write '1' to disable interrupt for event CTS */
#define UARTE_INTENCLR_CTS_Pos (0UL) /*!< Position of CTS field. */
#define UARTE_INTENCLR_CTS_Msk (0x1UL << UARTE_INTENCLR_CTS_Pos) /*!< Bit mask of CTS field. */
#define UARTE_INTENCLR_CTS_Disabled (0UL) /*!< Read: Disabled */
#define UARTE_INTENCLR_CTS_Enabled (1UL) /*!< Read: Enabled */
#define UARTE_INTENCLR_CTS_Clear (1UL) /*!< Disable */

/* Register: UARTE_ERRORSRC */
/* Description: Error source */

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

/* Bits 6..5 : Port number */
#define UARTE_PSEL_RTS_PORT_Pos (5UL) /*!< Position of PORT field. */
#define UARTE_PSEL_RTS_PORT_Msk (0x3UL << UARTE_PSEL_RTS_PORT_Pos) /*!< Bit mask of PORT field. */

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

/* Bits 6..5 : Port number */
#define UARTE_PSEL_TXD_PORT_Pos (5UL) /*!< Position of PORT field. */
#define UARTE_PSEL_TXD_PORT_Msk (0x3UL << UARTE_PSEL_TXD_PORT_Pos) /*!< Bit mask of PORT field. */

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

/* Bits 6..5 : Port number */
#define UARTE_PSEL_CTS_PORT_Pos (5UL) /*!< Position of PORT field. */
#define UARTE_PSEL_CTS_PORT_Msk (0x3UL << UARTE_PSEL_CTS_PORT_Pos) /*!< Bit mask of PORT field. */

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

/* Bits 6..5 : Port number */
#define UARTE_PSEL_RXD_PORT_Pos (5UL) /*!< Position of PORT field. */
#define UARTE_PSEL_RXD_PORT_Msk (0x3UL << UARTE_PSEL_RXD_PORT_Pos) /*!< Bit mask of PORT field. */

/* Bits 4..0 : Pin number */
#define UARTE_PSEL_RXD_PIN_Pos (0UL) /*!< Position of PIN field. */
#define UARTE_PSEL_RXD_PIN_Msk (0x1FUL << UARTE_PSEL_RXD_PIN_Pos) /*!< Bit mask of PIN field. */

/* Register: UARTE_BAUDRATE */
/* Description: Baud rate */

/* Bits 31..0 : Baud-rate */
#define UARTE_BAUDRATE_BAUDRATE_Pos (0UL) /*!< Position of BAUDRATE field. */
#define UARTE_BAUDRATE_BAUDRATE_Msk (0xFFFFFFFFUL << UARTE_BAUDRATE_BAUDRATE_Pos) /*!< Bit mask of BAUDRATE field. */
#define UARTE_BAUDRATE_BAUDRATE_Baud1200 (0x0003F000UL) /*!< 1200 baud (actual rate: 1202) */
#define UARTE_BAUDRATE_BAUDRATE_Baud2400 (0x0007E000UL) /*!< 2400 baud (actual rate: 2403) */
#define UARTE_BAUDRATE_BAUDRATE_Baud4800 (0x000FC000UL) /*!< 4800 baud (actual rate: 4807) */
#define UARTE_BAUDRATE_BAUDRATE_Baud9600 (0x001F7000UL) /*!< 9600 baud (actual rate: 9597) */
#define UARTE_BAUDRATE_BAUDRATE_Baud14400 (0x002F3000UL) /*!< 14400 baud (actual rate: 14409) */
#define UARTE_BAUDRATE_BAUDRATE_Baud19200 (0x003EE000UL) /*!< 19200 baud (actual rate: 19194) */
#define UARTE_BAUDRATE_BAUDRATE_Baud28800 (0x005E6000UL) /*!< 28800 baud (actual rate: 28818) */
#define UARTE_BAUDRATE_BAUDRATE_Baud38400 (0x007DC000UL) /*!< 38400 baud (actual rate: 38388) */
#define UARTE_BAUDRATE_BAUDRATE_Baud57600 (0x00BC8000UL) /*!< 57600 baud (actual rate: 57637) */
#define UARTE_BAUDRATE_BAUDRATE_Baud76800 (0x00FC0000UL) /*!< 76800 baud (actual rate: 76923) */
#define UARTE_BAUDRATE_BAUDRATE_Baud115200 (0x01780000UL) /*!< 115200 baud (actual rate: 114943) */
#define UARTE_BAUDRATE_BAUDRATE_Baud230400 (0x02F00000UL) /*!< 230400 baud (actual rate: 229885) */
#define UARTE_BAUDRATE_BAUDRATE_Baud250000 (0x03300000UL) /*!< 250000 baud */
#define UARTE_BAUDRATE_BAUDRATE_Baud460800 (0x05E00000UL) /*!< 460800 baud (actual rate: 465116) */
#define UARTE_BAUDRATE_BAUDRATE_Baud921600 (0x0B800000UL) /*!< 921600 baud (actual rate: 909091) */
#define UARTE_BAUDRATE_BAUDRATE_Baud1M (0x0C800000UL) /*!< 1Mega baud */

/* Register: UARTE_RXD_PTR */
/* Description: Data pointer */

/* Bits 31..0 : Data pointer */
#define UARTE_RXD_PTR_PTR_Pos (0UL) /*!< Position of PTR field. */
#define UARTE_RXD_PTR_PTR_Msk (0xFFFFFFFFUL << UARTE_RXD_PTR_PTR_Pos) /*!< Bit mask of PTR field. */

/* Register: UARTE_RXD_MAXCNT */
/* Description: Maximum number of bytes in receive buffer */

/* Bits 7..0 : Maximum number of bytes in receive buffer */
#define UARTE_RXD_MAXCNT_MAXCNT_Pos (0UL) /*!< Position of MAXCNT field. */
#define UARTE_RXD_MAXCNT_MAXCNT_Msk (0xFFUL << UARTE_RXD_MAXCNT_MAXCNT_Pos) /*!< Bit mask of MAXCNT field. */

/* Register: UARTE_RXD_AMOUNT */
/* Description: Number of bytes transferred in the last transaction */

/* Bits 7..0 : Number of bytes transferred in the last transaction */
#define UARTE_RXD_AMOUNT_AMOUNT_Pos (0UL) /*!< Position of AMOUNT field. */
#define UARTE_RXD_AMOUNT_AMOUNT_Msk (0xFFUL << UARTE_RXD_AMOUNT_AMOUNT_Pos) /*!< Bit mask of AMOUNT field. */

/* Register: UARTE_TXD_PTR */
/* Description: Data pointer */

/* Bits 31..0 : Data pointer */
#define UARTE_TXD_PTR_PTR_Pos (0UL) /*!< Position of PTR field. */
#define UARTE_TXD_PTR_PTR_Msk (0xFFFFFFFFUL << UARTE_TXD_PTR_PTR_Pos) /*!< Bit mask of PTR field. */

/* Register: UARTE_TXD_MAXCNT */
/* Description: Maximum number of bytes in transmit buffer */

/* Bits 7..0 : Maximum number of bytes in transmit buffer */
#define UARTE_TXD_MAXCNT_MAXCNT_Pos (0UL) /*!< Position of MAXCNT field. */
#define UARTE_TXD_MAXCNT_MAXCNT_Msk (0xFFUL << UARTE_TXD_MAXCNT_MAXCNT_Pos) /*!< Bit mask of MAXCNT field. */

/* Register: UARTE_TXD_AMOUNT */
/* Description: Number of bytes transferred in the last transaction */

/* Bits 7..0 : Number of bytes transferred in the last transaction */
#define UARTE_TXD_AMOUNT_AMOUNT_Pos (0UL) /*!< Position of AMOUNT field. */
#define UARTE_TXD_AMOUNT_AMOUNT_Msk (0xFFUL << UARTE_TXD_AMOUNT_AMOUNT_Pos) /*!< Bit mask of AMOUNT field. */

/* Register: UARTE_CONFIG */
/* Description: Configuration of parity and hardware flow control */

/* Bits 3..1 : Parity */
#define UARTE_CONFIG_PARITY_Pos (1UL) /*!< Position of PARITY field. */
#define UARTE_CONFIG_PARITY_Msk (0x7UL << UARTE_CONFIG_PARITY_Pos) /*!< Bit mask of PARITY field. */
#define UARTE_CONFIG_PARITY_Excluded (0x0UL) /*!< Exclude parity bit */
#define UARTE_CONFIG_PARITY_Included (0x7UL) /*!< Include parity bit */

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
/* Description: User Information Configuration Registers */

/* Register: UICR_NCKLOCK */
/* Description: Description collection: Encrypted unlock code data for network lock n */

/* Bits 31..0 : Encrypted unlock code data, word n */
#define UICR_NCKLOCK_NCKLOCK_Pos (0UL) /*!< Position of NCKLOCK field. */
#define UICR_NCKLOCK_NCKLOCK_Msk (0xFFFFFFFFUL << UICR_NCKLOCK_NCKLOCK_Pos) /*!< Bit mask of NCKLOCK field. */

/* Register: UICR_NSCKLOCK */
/* Description: Description collection: Encrypted unlock code data for network subset lock n */

/* Bits 31..0 : Encrypted unlock code data, word n */
#define UICR_NSCKLOCK_NSCKLOCK_Pos (0UL) /*!< Position of NSCKLOCK field. */
#define UICR_NSCKLOCK_NSCKLOCK_Msk (0xFFFFFFFFUL << UICR_NSCKLOCK_NSCKLOCK_Pos) /*!< Bit mask of NSCKLOCK field. */

/* Register: UICR_SPCKLOCK */
/* Description: Description collection: Encrypted unlock code data for service provider lock n */

/* Bits 31..0 : Encrypted unlock code data, word n */
#define UICR_SPCKLOCK_SPCKLOCK_Pos (0UL) /*!< Position of SPCKLOCK field. */
#define UICR_SPCKLOCK_SPCKLOCK_Msk (0xFFFFFFFFUL << UICR_SPCKLOCK_SPCKLOCK_Pos) /*!< Bit mask of SPCKLOCK field. */

/* Register: UICR_CCKLOCK */
/* Description: Description collection: Encrypted unlock code data for corporate lock n */

/* Bits 31..0 : Encrypted unlock code data, word n */
#define UICR_CCKLOCK_CCKLOCK_Pos (0UL) /*!< Position of CCKLOCK field. */
#define UICR_CCKLOCK_CCKLOCK_Msk (0xFFFFFFFFUL << UICR_CCKLOCK_CCKLOCK_Pos) /*!< Bit mask of CCKLOCK field. */

/* Register: UICR_PCKLOCK */
/* Description: Description collection: Encrypted unlock code data for SIM/USIM lock n */

/* Bits 31..0 : Encrypted unlock code data, word n */
#define UICR_PCKLOCK_PCKLOCK_Pos (0UL) /*!< Position of PCKLOCK field. */
#define UICR_PCKLOCK_PCKLOCK_Msk (0xFFFFFFFFUL << UICR_PCKLOCK_PCKLOCK_Pos) /*!< Bit mask of PCKLOCK field. */

/* Register: UICR_MASTERLOCK */
/* Description: Description collection: Space reservation for encrypted master unlock code data n */

/* Bits 31..0 : Encrypted unlock code data, word n */
#define UICR_MASTERLOCK_MASTERLOCK_Pos (0UL) /*!< Position of MASTERLOCK field. */
#define UICR_MASTERLOCK_MASTERLOCK_Msk (0xFFFFFFFFUL << UICR_MASTERLOCK_MASTERLOCK_Pos) /*!< Bit mask of MASTERLOCK field. */

/* Register: UICR_PROVIS */
/* Description: Description collection: Provisioning data n */

/* Bits 31..0 : Customer provisioning data, word n */
#define UICR_PROVIS_PROVIS_Pos (0UL) /*!< Position of PROVIS field. */
#define UICR_PROVIS_PROVIS_Msk (0xFFFFFFFFUL << UICR_PROVIS_PROVIS_Pos) /*!< Bit mask of PROVIS field. */

/* Register: UICR_CUSTIMEI */
/* Description: Description collection: Customer IMEI n, used if FICR-&gt;IMEI 
                is not programmed */

/* Bits 31..0 : Customer IMEI in BCD decoded nibbles */
#define UICR_CUSTIMEI_CIMEI_Pos (0UL) /*!< Position of CIMEI field. */
#define UICR_CUSTIMEI_CIMEI_Msk (0xFFFFFFFFUL << UICR_CUSTIMEI_CIMEI_Pos) /*!< Bit mask of CIMEI field. */

/* Register: UICR_CUSTMAC0 */
/* Description: Description collection: Customer MAC0 n, used if FICR-&gt;MAC0 
                is not programmed */

/* Bits 31..0 : Customer MAC0 value */
#define UICR_CUSTMAC0_CUSTMAC0_Pos (0UL) /*!< Position of CUSTMAC0 field. */
#define UICR_CUSTMAC0_CUSTMAC0_Msk (0xFFFFFFFFUL << UICR_CUSTMAC0_CUSTMAC0_Pos) /*!< Bit mask of CUSTMAC0 field. */

/* Register: UICR_CUSTMAC1 */
/* Description: Description collection: Customer MAC1 n, used if FICR-&gt;MAC1 
                is not programmed */

/* Bits 31..0 : Customer MAC1 value */
#define UICR_CUSTMAC1_CUSTMAC1_Pos (0UL) /*!< Position of CUSTMAC1 field. */
#define UICR_CUSTMAC1_CUSTMAC1_Msk (0xFFFFFFFFUL << UICR_CUSTMAC1_CUSTMAC1_Pos) /*!< Bit mask of CUSTMAC1 field. */

/* Register: UICR_CUSTMAC2 */
/* Description: Description collection: Customer MAC2 n, used if FICR-&gt;MAC2 
                is not programmed */

/* Bits 31..0 : Customer MAC2 value */
#define UICR_CUSTMAC2_CUSTMAC2_Pos (0UL) /*!< Position of CUSTMAC2 field. */
#define UICR_CUSTMAC2_CUSTMAC2_Msk (0xFFFFFFFFUL << UICR_CUSTMAC2_CUSTMAC2_Pos) /*!< Bit mask of CUSTMAC2 field. */

/* Register: UICR_CUSTMAC3 */
/* Description: Description collection: Customer MAC3 n, used if FICR-&gt;MAC3 
                  is not programmed */

/* Bits 31..0 : Customer MAC3 value */
#define UICR_CUSTMAC3_CUSTMAC3_Pos (0UL) /*!< Position of CUSTMAC3 field. */
#define UICR_CUSTMAC3_CUSTMAC3_Msk (0xFFFFFFFFUL << UICR_CUSTMAC3_CUSTMAC3_Pos) /*!< Bit mask of CUSTMAC3 field. */

/* Register: UICR_CUSTDEVCONF */
/* Description: Description collection: Customer device configuration n, may be used to further 
                  limit configuration done by FICR-&gt;DEVCONF */

/* Bits 31..0 : Customer device configuration data word n,
                  contents defined in SW */
#define UICR_CUSTDEVCONF_CUSTDEVCONF_Pos (0UL) /*!< Position of CUSTDEVCONF field. */
#define UICR_CUSTDEVCONF_CUSTDEVCONF_Msk (0xFFFFFFFFUL << UICR_CUSTDEVCONF_CUSTDEVCONF_Pos) /*!< Bit mask of CUSTDEVCONF field. */


/* Peripheral: VMC */
/* Description: Volatile Memory controller */

/* Register: VMC_RAM_POWER */
/* Description: Description cluster: RAMn power control register */

/* Bit 17 : Unused retention control bit */
#define VMC_RAM_POWER_UNUSED_RETENTION1_Pos (17UL) /*!< Position of UNUSED_RETENTION1 field. */
#define VMC_RAM_POWER_UNUSED_RETENTION1_Msk (0x1UL << VMC_RAM_POWER_UNUSED_RETENTION1_Pos) /*!< Bit mask of UNUSED_RETENTION1 field. */

/* Bit 16 : Unused retention control bit */
#define VMC_RAM_POWER_S01RETENTION_Pos (16UL) /*!< Position of S01RETENTION field. */
#define VMC_RAM_POWER_S01RETENTION_Msk (0x1UL << VMC_RAM_POWER_S01RETENTION_Pos) /*!< Bit mask of S01RETENTION field. */

/* Bit 1 : Unused power control bit */
#define VMC_RAM_POWER_UNUSED_POWER1_Pos (1UL) /*!< Position of UNUSED_POWER1 field. */
#define VMC_RAM_POWER_UNUSED_POWER1_Msk (0x1UL << VMC_RAM_POWER_UNUSED_POWER1_Pos) /*!< Bit mask of UNUSED_POWER1 field. */

/* Bit 0 : Unused power control bit */
#define VMC_RAM_POWER_S01POWER_Pos (0UL) /*!< Position of S01POWER field. */
#define VMC_RAM_POWER_S01POWER_Msk (0x1UL << VMC_RAM_POWER_S01POWER_Pos) /*!< Bit mask of S01POWER field. */

/* Register: VMC_RAM_POWERSET */
/* Description: Description cluster: RAMn power control set register */

/* Bit 17 : Unused retention set control bit */
#define VMC_RAM_POWERSET_UNUSED_RETENTION1_Pos (17UL) /*!< Position of UNUSED_RETENTION1 field. */
#define VMC_RAM_POWERSET_UNUSED_RETENTION1_Msk (0x1UL << VMC_RAM_POWERSET_UNUSED_RETENTION1_Pos) /*!< Bit mask of UNUSED_RETENTION1 field. */

/* Bit 16 : Unused power control bit */
#define VMC_RAM_POWERSET_S01RETENTION_Pos (16UL) /*!< Position of S01RETENTION field. */
#define VMC_RAM_POWERSET_S01RETENTION_Msk (0x1UL << VMC_RAM_POWERSET_S01RETENTION_Pos) /*!< Bit mask of S01RETENTION field. */

/* Bit 1 : Unused power set control bit */
#define VMC_RAM_POWERSET_UNUSED_POWER1_Pos (1UL) /*!< Position of UNUSED_POWER1 field. */
#define VMC_RAM_POWERSET_UNUSED_POWER1_Msk (0x1UL << VMC_RAM_POWERSET_UNUSED_POWER1_Pos) /*!< Bit mask of UNUSED_POWER1 field. */

/* Bit 0 : Unused power control bit */
#define VMC_RAM_POWERSET_S01POWER_Pos (0UL) /*!< Position of S01POWER field. */
#define VMC_RAM_POWERSET_S01POWER_Msk (0x1UL << VMC_RAM_POWERSET_S01POWER_Pos) /*!< Bit mask of S01POWER field. */

/* Register: VMC_RAM_POWERCLR */
/* Description: Description cluster: RAMn power control clear register */

/* Bit 17 : Unused retention clear control bit */
#define VMC_RAM_POWERCLR_UNUSED_RETENTION1_Pos (17UL) /*!< Position of UNUSED_RETENTION1 field. */
#define VMC_RAM_POWERCLR_UNUSED_RETENTION1_Msk (0x1UL << VMC_RAM_POWERCLR_UNUSED_RETENTION1_Pos) /*!< Bit mask of UNUSED_RETENTION1 field. */

/* Bit 16 : Unused power control bit */
#define VMC_RAM_POWERCLR_S01RETENTION_Pos (16UL) /*!< Position of S01RETENTION field. */
#define VMC_RAM_POWERCLR_S01RETENTION_Msk (0x1UL << VMC_RAM_POWERCLR_S01RETENTION_Pos) /*!< Bit mask of S01RETENTION field. */

/* Bit 1 : Unused power clear control bit */
#define VMC_RAM_POWERCLR_UNUSED_POWER1_Pos (1UL) /*!< Position of UNUSED_POWER1 field. */
#define VMC_RAM_POWERCLR_UNUSED_POWER1_Msk (0x1UL << VMC_RAM_POWERCLR_UNUSED_POWER1_Pos) /*!< Bit mask of UNUSED_POWER1 field. */

/* Bit 0 : Unused power control bit */
#define VMC_RAM_POWERCLR_S01POWER_Pos (0UL) /*!< Position of S01POWER field. */
#define VMC_RAM_POWERCLR_S01POWER_Msk (0x1UL << VMC_RAM_POWERCLR_S01POWER_Pos) /*!< Bit mask of S01POWER field. */

/* Register: VMC_RAMA_POWER */
/* Description: RAM B{n} power control register */

/* Bit 31 : Unused retention bit 14 */
#define VMC_RAMA_POWER_UNUSED_RETENTION14_Pos (31UL) /*!< Position of UNUSED_RETENTION14 field. */
#define VMC_RAMA_POWER_UNUSED_RETENTION14_Msk (0x1UL << VMC_RAMA_POWER_UNUSED_RETENTION14_Pos) /*!< Bit mask of UNUSED_RETENTION14 field. */

/* Bit 30 : Unused retention bit 13 */
#define VMC_RAMA_POWER_UNUSED_RETENTION13_Pos (30UL) /*!< Position of UNUSED_RETENTION13 field. */
#define VMC_RAMA_POWER_UNUSED_RETENTION13_Msk (0x1UL << VMC_RAMA_POWER_UNUSED_RETENTION13_Pos) /*!< Bit mask of UNUSED_RETENTION13 field. */

/* Bit 29 : Unused retention bit 12 */
#define VMC_RAMA_POWER_UNUSED_RETENTION12_Pos (29UL) /*!< Position of UNUSED_RETENTION12 field. */
#define VMC_RAMA_POWER_UNUSED_RETENTION12_Msk (0x1UL << VMC_RAMA_POWER_UNUSED_RETENTION12_Pos) /*!< Bit mask of UNUSED_RETENTION12 field. */

/* Bit 28 : Unused retention bit 11 */
#define VMC_RAMA_POWER_UNUSED_RETENTION11_Pos (28UL) /*!< Position of UNUSED_RETENTION11 field. */
#define VMC_RAMA_POWER_UNUSED_RETENTION11_Msk (0x1UL << VMC_RAMA_POWER_UNUSED_RETENTION11_Pos) /*!< Bit mask of UNUSED_RETENTION11 field. */

/* Bit 27 : Unused retention bit 10 */
#define VMC_RAMA_POWER_UNUSED_RETENTION10_Pos (27UL) /*!< Position of UNUSED_RETENTION10 field. */
#define VMC_RAMA_POWER_UNUSED_RETENTION10_Msk (0x1UL << VMC_RAMA_POWER_UNUSED_RETENTION10_Pos) /*!< Bit mask of UNUSED_RETENTION10 field. */

/* Bit 26 : Unused retention bit 9 */
#define VMC_RAMA_POWER_UNUSED_RETENTION9_Pos (26UL) /*!< Position of UNUSED_RETENTION9 field. */
#define VMC_RAMA_POWER_UNUSED_RETENTION9_Msk (0x1UL << VMC_RAMA_POWER_UNUSED_RETENTION9_Pos) /*!< Bit mask of UNUSED_RETENTION9 field. */

/* Bit 25 : Unused retention bit 8 */
#define VMC_RAMA_POWER_UNUSED_RETENTION8_Pos (25UL) /*!< Position of UNUSED_RETENTION8 field. */
#define VMC_RAMA_POWER_UNUSED_RETENTION8_Msk (0x1UL << VMC_RAMA_POWER_UNUSED_RETENTION8_Pos) /*!< Bit mask of UNUSED_RETENTION8 field. */

/* Bit 24 : Unused retention bit 7 */
#define VMC_RAMA_POWER_UNUSED_RETENTION7_Pos (24UL) /*!< Position of UNUSED_RETENTION7 field. */
#define VMC_RAMA_POWER_UNUSED_RETENTION7_Msk (0x1UL << VMC_RAMA_POWER_UNUSED_RETENTION7_Pos) /*!< Bit mask of UNUSED_RETENTION7 field. */

/* Bit 23 : Unused retention bit 6 */
#define VMC_RAMA_POWER_UNUSED_RETENTION6_Pos (23UL) /*!< Position of UNUSED_RETENTION6 field. */
#define VMC_RAMA_POWER_UNUSED_RETENTION6_Msk (0x1UL << VMC_RAMA_POWER_UNUSED_RETENTION6_Pos) /*!< Bit mask of UNUSED_RETENTION6 field. */

/* Bit 22 : Unused retention bit 5 */
#define VMC_RAMA_POWER_UNUSED_RETENTION5_Pos (22UL) /*!< Position of UNUSED_RETENTION5 field. */
#define VMC_RAMA_POWER_UNUSED_RETENTION5_Msk (0x1UL << VMC_RAMA_POWER_UNUSED_RETENTION5_Pos) /*!< Bit mask of UNUSED_RETENTION5 field. */

/* Bit 21 : Unused retention bit 4 */
#define VMC_RAMA_POWER_UNUSED_RETENTION4_Pos (21UL) /*!< Position of UNUSED_RETENTION4 field. */
#define VMC_RAMA_POWER_UNUSED_RETENTION4_Msk (0x1UL << VMC_RAMA_POWER_UNUSED_RETENTION4_Pos) /*!< Bit mask of UNUSED_RETENTION4 field. */

/* Bit 20 : Unused retention bit 3 */
#define VMC_RAMA_POWER_UNUSED_RETENTION3_Pos (20UL) /*!< Position of UNUSED_RETENTION3 field. */
#define VMC_RAMA_POWER_UNUSED_RETENTION3_Msk (0x1UL << VMC_RAMA_POWER_UNUSED_RETENTION3_Pos) /*!< Bit mask of UNUSED_RETENTION3 field. */

/* Bit 19 : Unused retention bit 2 */
#define VMC_RAMA_POWER_UNUSED_RETENTION2_Pos (19UL) /*!< Position of UNUSED_RETENTION2 field. */
#define VMC_RAMA_POWER_UNUSED_RETENTION2_Msk (0x1UL << VMC_RAMA_POWER_UNUSED_RETENTION2_Pos) /*!< Bit mask of UNUSED_RETENTION2 field. */

/* Bit 18 : Unused retention bit 1 */
#define VMC_RAMA_POWER_UNUSED_RETENTION1_Pos (18UL) /*!< Position of UNUSED_RETENTION1 field. */
#define VMC_RAMA_POWER_UNUSED_RETENTION1_Msk (0x1UL << VMC_RAMA_POWER_UNUSED_RETENTION1_Pos) /*!< Bit mask of UNUSED_RETENTION1 field. */

/* Bit 17 : Unused retention bit 0 */
#define VMC_RAMA_POWER_UNUSED_RETENTION0_Pos (17UL) /*!< Position of UNUSED_RETENTION0 field. */
#define VMC_RAMA_POWER_UNUSED_RETENTION0_Msk (0x1UL << VMC_RAMA_POWER_UNUSED_RETENTION0_Pos) /*!< Bit mask of UNUSED_RETENTION0 field. */

/* Bit 16 : Keep retention on RAM section S0-S15 of RAM B{n} when RAM section is switched off */
#define VMC_RAMA_POWER_S015RETENTION_Pos (16UL) /*!< Position of S015RETENTION field. */
#define VMC_RAMA_POWER_S015RETENTION_Msk (0x1UL << VMC_RAMA_POWER_S015RETENTION_Pos) /*!< Bit mask of S015RETENTION field. */
#define VMC_RAMA_POWER_S015RETENTION_Off (0UL) /*!< Off */
#define VMC_RAMA_POWER_S015RETENTION_On (1UL) /*!< On */

/* Bit 15 : Unused power bit 14 */
#define VMC_RAMA_POWER_UNUSED_POWER14_Pos (15UL) /*!< Position of UNUSED_POWER14 field. */
#define VMC_RAMA_POWER_UNUSED_POWER14_Msk (0x1UL << VMC_RAMA_POWER_UNUSED_POWER14_Pos) /*!< Bit mask of UNUSED_POWER14 field. */

/* Bit 14 : Unused power bit 13 */
#define VMC_RAMA_POWER_UNUSED_POWER13_Pos (14UL) /*!< Position of UNUSED_POWER13 field. */
#define VMC_RAMA_POWER_UNUSED_POWER13_Msk (0x1UL << VMC_RAMA_POWER_UNUSED_POWER13_Pos) /*!< Bit mask of UNUSED_POWER13 field. */

/* Bit 13 : Unused power bit 12 */
#define VMC_RAMA_POWER_UNUSED_POWER12_Pos (13UL) /*!< Position of UNUSED_POWER12 field. */
#define VMC_RAMA_POWER_UNUSED_POWER12_Msk (0x1UL << VMC_RAMA_POWER_UNUSED_POWER12_Pos) /*!< Bit mask of UNUSED_POWER12 field. */

/* Bit 12 : Unused power bit 11 */
#define VMC_RAMA_POWER_UNUSED_POWER11_Pos (12UL) /*!< Position of UNUSED_POWER11 field. */
#define VMC_RAMA_POWER_UNUSED_POWER11_Msk (0x1UL << VMC_RAMA_POWER_UNUSED_POWER11_Pos) /*!< Bit mask of UNUSED_POWER11 field. */

/* Bit 11 : Unused power bit 10 */
#define VMC_RAMA_POWER_UNUSED_POWER10_Pos (11UL) /*!< Position of UNUSED_POWER10 field. */
#define VMC_RAMA_POWER_UNUSED_POWER10_Msk (0x1UL << VMC_RAMA_POWER_UNUSED_POWER10_Pos) /*!< Bit mask of UNUSED_POWER10 field. */

/* Bit 10 : Unused power bit 9 */
#define VMC_RAMA_POWER_UNUSED_POWER9_Pos (10UL) /*!< Position of UNUSED_POWER9 field. */
#define VMC_RAMA_POWER_UNUSED_POWER9_Msk (0x1UL << VMC_RAMA_POWER_UNUSED_POWER9_Pos) /*!< Bit mask of UNUSED_POWER9 field. */

/* Bit 9 : Unused power bit 8 */
#define VMC_RAMA_POWER_UNUSED_POWER8_Pos (9UL) /*!< Position of UNUSED_POWER8 field. */
#define VMC_RAMA_POWER_UNUSED_POWER8_Msk (0x1UL << VMC_RAMA_POWER_UNUSED_POWER8_Pos) /*!< Bit mask of UNUSED_POWER8 field. */

/* Bit 8 : Unused power bit 7 */
#define VMC_RAMA_POWER_UNUSED_POWER7_Pos (8UL) /*!< Position of UNUSED_POWER7 field. */
#define VMC_RAMA_POWER_UNUSED_POWER7_Msk (0x1UL << VMC_RAMA_POWER_UNUSED_POWER7_Pos) /*!< Bit mask of UNUSED_POWER7 field. */

/* Bit 7 : Unused power bit 6 */
#define VMC_RAMA_POWER_UNUSED_POWER6_Pos (7UL) /*!< Position of UNUSED_POWER6 field. */
#define VMC_RAMA_POWER_UNUSED_POWER6_Msk (0x1UL << VMC_RAMA_POWER_UNUSED_POWER6_Pos) /*!< Bit mask of UNUSED_POWER6 field. */

/* Bit 6 : Unused power bit 5 */
#define VMC_RAMA_POWER_UNUSED_POWER5_Pos (6UL) /*!< Position of UNUSED_POWER5 field. */
#define VMC_RAMA_POWER_UNUSED_POWER5_Msk (0x1UL << VMC_RAMA_POWER_UNUSED_POWER5_Pos) /*!< Bit mask of UNUSED_POWER5 field. */

/* Bit 5 : Unused power bit 4 */
#define VMC_RAMA_POWER_UNUSED_POWER4_Pos (5UL) /*!< Position of UNUSED_POWER4 field. */
#define VMC_RAMA_POWER_UNUSED_POWER4_Msk (0x1UL << VMC_RAMA_POWER_UNUSED_POWER4_Pos) /*!< Bit mask of UNUSED_POWER4 field. */

/* Bit 4 : Unused power bit 3 */
#define VMC_RAMA_POWER_UNUSED_POWER3_Pos (4UL) /*!< Position of UNUSED_POWER3 field. */
#define VMC_RAMA_POWER_UNUSED_POWER3_Msk (0x1UL << VMC_RAMA_POWER_UNUSED_POWER3_Pos) /*!< Bit mask of UNUSED_POWER3 field. */

/* Bit 3 : Unused power bit 2 */
#define VMC_RAMA_POWER_UNUSED_POWER2_Pos (3UL) /*!< Position of UNUSED_POWER2 field. */
#define VMC_RAMA_POWER_UNUSED_POWER2_Msk (0x1UL << VMC_RAMA_POWER_UNUSED_POWER2_Pos) /*!< Bit mask of UNUSED_POWER2 field. */

/* Bit 2 : Unused power bit 1 */
#define VMC_RAMA_POWER_UNUSED_POWER1_Pos (2UL) /*!< Position of UNUSED_POWER1 field. */
#define VMC_RAMA_POWER_UNUSED_POWER1_Msk (0x1UL << VMC_RAMA_POWER_UNUSED_POWER1_Pos) /*!< Bit mask of UNUSED_POWER1 field. */

/* Bit 1 : Unused power bit 0 */
#define VMC_RAMA_POWER_UNUSED_POWER0_Pos (1UL) /*!< Position of UNUSED_POWER0 field. */
#define VMC_RAMA_POWER_UNUSED_POWER0_Msk (0x1UL << VMC_RAMA_POWER_UNUSED_POWER0_Pos) /*!< Bit mask of UNUSED_POWER0 field. */

/* Bit 0 : Keep RAM sections S0-S15 of RAM B{n} on or off in System ON mode */
#define VMC_RAMA_POWER_S015POWER_Pos (0UL) /*!< Position of S015POWER field. */
#define VMC_RAMA_POWER_S015POWER_Msk (0x1UL << VMC_RAMA_POWER_S015POWER_Pos) /*!< Bit mask of S015POWER field. */
#define VMC_RAMA_POWER_S015POWER_Off (0UL) /*!< Off */
#define VMC_RAMA_POWER_S015POWER_On (1UL) /*!< On */

/* Register: VMC_RAMA_POWERSET */
/* Description: RAM B{n} power control set register */

/* Bit 31 : Unused retention set bit 14 */
#define VMC_RAMA_POWERSET_UNUSED_RETENTION14_Pos (31UL) /*!< Position of UNUSED_RETENTION14 field. */
#define VMC_RAMA_POWERSET_UNUSED_RETENTION14_Msk (0x1UL << VMC_RAMA_POWERSET_UNUSED_RETENTION14_Pos) /*!< Bit mask of UNUSED_RETENTION14 field. */

/* Bit 30 : Unused retention set bit 13 */
#define VMC_RAMA_POWERSET_UNUSED_RETENTION13_Pos (30UL) /*!< Position of UNUSED_RETENTION13 field. */
#define VMC_RAMA_POWERSET_UNUSED_RETENTION13_Msk (0x1UL << VMC_RAMA_POWERSET_UNUSED_RETENTION13_Pos) /*!< Bit mask of UNUSED_RETENTION13 field. */

/* Bit 29 : Unused retention set bit 12 */
#define VMC_RAMA_POWERSET_UNUSED_RETENTION12_Pos (29UL) /*!< Position of UNUSED_RETENTION12 field. */
#define VMC_RAMA_POWERSET_UNUSED_RETENTION12_Msk (0x1UL << VMC_RAMA_POWERSET_UNUSED_RETENTION12_Pos) /*!< Bit mask of UNUSED_RETENTION12 field. */

/* Bit 28 : Unused retention set bit 11 */
#define VMC_RAMA_POWERSET_UNUSED_RETENTION11_Pos (28UL) /*!< Position of UNUSED_RETENTION11 field. */
#define VMC_RAMA_POWERSET_UNUSED_RETENTION11_Msk (0x1UL << VMC_RAMA_POWERSET_UNUSED_RETENTION11_Pos) /*!< Bit mask of UNUSED_RETENTION11 field. */

/* Bit 27 : Unused retention set bit 10 */
#define VMC_RAMA_POWERSET_UNUSED_RETENTION10_Pos (27UL) /*!< Position of UNUSED_RETENTION10 field. */
#define VMC_RAMA_POWERSET_UNUSED_RETENTION10_Msk (0x1UL << VMC_RAMA_POWERSET_UNUSED_RETENTION10_Pos) /*!< Bit mask of UNUSED_RETENTION10 field. */

/* Bit 26 : Unused retention set bit 9 */
#define VMC_RAMA_POWERSET_UNUSED_RETENTION9_Pos (26UL) /*!< Position of UNUSED_RETENTION9 field. */
#define VMC_RAMA_POWERSET_UNUSED_RETENTION9_Msk (0x1UL << VMC_RAMA_POWERSET_UNUSED_RETENTION9_Pos) /*!< Bit mask of UNUSED_RETENTION9 field. */

/* Bit 25 : Unused retention set bit 8 */
#define VMC_RAMA_POWERSET_UNUSED_RETENTION8_Pos (25UL) /*!< Position of UNUSED_RETENTION8 field. */
#define VMC_RAMA_POWERSET_UNUSED_RETENTION8_Msk (0x1UL << VMC_RAMA_POWERSET_UNUSED_RETENTION8_Pos) /*!< Bit mask of UNUSED_RETENTION8 field. */

/* Bit 24 : Unused retention set bit 7 */
#define VMC_RAMA_POWERSET_UNUSED_RETENTION7_Pos (24UL) /*!< Position of UNUSED_RETENTION7 field. */
#define VMC_RAMA_POWERSET_UNUSED_RETENTION7_Msk (0x1UL << VMC_RAMA_POWERSET_UNUSED_RETENTION7_Pos) /*!< Bit mask of UNUSED_RETENTION7 field. */

/* Bit 23 : Unused retention set bit 6 */
#define VMC_RAMA_POWERSET_UNUSED_RETENTION6_Pos (23UL) /*!< Position of UNUSED_RETENTION6 field. */
#define VMC_RAMA_POWERSET_UNUSED_RETENTION6_Msk (0x1UL << VMC_RAMA_POWERSET_UNUSED_RETENTION6_Pos) /*!< Bit mask of UNUSED_RETENTION6 field. */

/* Bit 22 : Unused retention set bit 5 */
#define VMC_RAMA_POWERSET_UNUSED_RETENTION5_Pos (22UL) /*!< Position of UNUSED_RETENTION5 field. */
#define VMC_RAMA_POWERSET_UNUSED_RETENTION5_Msk (0x1UL << VMC_RAMA_POWERSET_UNUSED_RETENTION5_Pos) /*!< Bit mask of UNUSED_RETENTION5 field. */

/* Bit 21 : Unused retention set bit 4 */
#define VMC_RAMA_POWERSET_UNUSED_RETENTION4_Pos (21UL) /*!< Position of UNUSED_RETENTION4 field. */
#define VMC_RAMA_POWERSET_UNUSED_RETENTION4_Msk (0x1UL << VMC_RAMA_POWERSET_UNUSED_RETENTION4_Pos) /*!< Bit mask of UNUSED_RETENTION4 field. */

/* Bit 20 : Unused retention set bit 3 */
#define VMC_RAMA_POWERSET_UNUSED_RETENTION3_Pos (20UL) /*!< Position of UNUSED_RETENTION3 field. */
#define VMC_RAMA_POWERSET_UNUSED_RETENTION3_Msk (0x1UL << VMC_RAMA_POWERSET_UNUSED_RETENTION3_Pos) /*!< Bit mask of UNUSED_RETENTION3 field. */

/* Bit 19 : Unused retention set bit 2 */
#define VMC_RAMA_POWERSET_UNUSED_RETENTION2_Pos (19UL) /*!< Position of UNUSED_RETENTION2 field. */
#define VMC_RAMA_POWERSET_UNUSED_RETENTION2_Msk (0x1UL << VMC_RAMA_POWERSET_UNUSED_RETENTION2_Pos) /*!< Bit mask of UNUSED_RETENTION2 field. */

/* Bit 18 : Unused retention set bit 1 */
#define VMC_RAMA_POWERSET_UNUSED_RETENTION1_Pos (18UL) /*!< Position of UNUSED_RETENTION1 field. */
#define VMC_RAMA_POWERSET_UNUSED_RETENTION1_Msk (0x1UL << VMC_RAMA_POWERSET_UNUSED_RETENTION1_Pos) /*!< Bit mask of UNUSED_RETENTION1 field. */

/* Bit 17 : Unused retention set bit 0 */
#define VMC_RAMA_POWERSET_UNUSED_RETENTION0_Pos (17UL) /*!< Position of UNUSED_RETENTION0 field. */
#define VMC_RAMA_POWERSET_UNUSED_RETENTION0_Msk (0x1UL << VMC_RAMA_POWERSET_UNUSED_RETENTION0_Pos) /*!< Bit mask of UNUSED_RETENTION0 field. */

/* Bit 16 : Keep retention on RAM section S0-S15 of RAM B{n} when RAM section is switched off */
#define VMC_RAMA_POWERSET_S015RETENTION_Pos (16UL) /*!< Position of S015RETENTION field. */
#define VMC_RAMA_POWERSET_S015RETENTION_Msk (0x1UL << VMC_RAMA_POWERSET_S015RETENTION_Pos) /*!< Bit mask of S015RETENTION field. */
#define VMC_RAMA_POWERSET_S015RETENTION_On (1UL) /*!< On */

/* Bit 15 : Unused power set bit 14 */
#define VMC_RAMA_POWERSET_UNUSED_POWER14_Pos (15UL) /*!< Position of UNUSED_POWER14 field. */
#define VMC_RAMA_POWERSET_UNUSED_POWER14_Msk (0x1UL << VMC_RAMA_POWERSET_UNUSED_POWER14_Pos) /*!< Bit mask of UNUSED_POWER14 field. */

/* Bit 14 : Unused power set bit 13 */
#define VMC_RAMA_POWERSET_UNUSED_POWER13_Pos (14UL) /*!< Position of UNUSED_POWER13 field. */
#define VMC_RAMA_POWERSET_UNUSED_POWER13_Msk (0x1UL << VMC_RAMA_POWERSET_UNUSED_POWER13_Pos) /*!< Bit mask of UNUSED_POWER13 field. */

/* Bit 13 : Unused power set bit 12 */
#define VMC_RAMA_POWERSET_UNUSED_POWER12_Pos (13UL) /*!< Position of UNUSED_POWER12 field. */
#define VMC_RAMA_POWERSET_UNUSED_POWER12_Msk (0x1UL << VMC_RAMA_POWERSET_UNUSED_POWER12_Pos) /*!< Bit mask of UNUSED_POWER12 field. */

/* Bit 12 : Unused power set bit 11 */
#define VMC_RAMA_POWERSET_UNUSED_POWER11_Pos (12UL) /*!< Position of UNUSED_POWER11 field. */
#define VMC_RAMA_POWERSET_UNUSED_POWER11_Msk (0x1UL << VMC_RAMA_POWERSET_UNUSED_POWER11_Pos) /*!< Bit mask of UNUSED_POWER11 field. */

/* Bit 11 : Unused power set bit 10 */
#define VMC_RAMA_POWERSET_UNUSED_POWER10_Pos (11UL) /*!< Position of UNUSED_POWER10 field. */
#define VMC_RAMA_POWERSET_UNUSED_POWER10_Msk (0x1UL << VMC_RAMA_POWERSET_UNUSED_POWER10_Pos) /*!< Bit mask of UNUSED_POWER10 field. */

/* Bit 10 : Unused power set bit 9 */
#define VMC_RAMA_POWERSET_UNUSED_POWER9_Pos (10UL) /*!< Position of UNUSED_POWER9 field. */
#define VMC_RAMA_POWERSET_UNUSED_POWER9_Msk (0x1UL << VMC_RAMA_POWERSET_UNUSED_POWER9_Pos) /*!< Bit mask of UNUSED_POWER9 field. */

/* Bit 9 : Unused power set bit 8 */
#define VMC_RAMA_POWERSET_UNUSED_POWER8_Pos (9UL) /*!< Position of UNUSED_POWER8 field. */
#define VMC_RAMA_POWERSET_UNUSED_POWER8_Msk (0x1UL << VMC_RAMA_POWERSET_UNUSED_POWER8_Pos) /*!< Bit mask of UNUSED_POWER8 field. */

/* Bit 8 : Unused power set bit 7 */
#define VMC_RAMA_POWERSET_UNUSED_POWER7_Pos (8UL) /*!< Position of UNUSED_POWER7 field. */
#define VMC_RAMA_POWERSET_UNUSED_POWER7_Msk (0x1UL << VMC_RAMA_POWERSET_UNUSED_POWER7_Pos) /*!< Bit mask of UNUSED_POWER7 field. */

/* Bit 7 : Unused power set bit 6 */
#define VMC_RAMA_POWERSET_UNUSED_POWER6_Pos (7UL) /*!< Position of UNUSED_POWER6 field. */
#define VMC_RAMA_POWERSET_UNUSED_POWER6_Msk (0x1UL << VMC_RAMA_POWERSET_UNUSED_POWER6_Pos) /*!< Bit mask of UNUSED_POWER6 field. */

/* Bit 6 : Unused power set bit 5 */
#define VMC_RAMA_POWERSET_UNUSED_POWER5_Pos (6UL) /*!< Position of UNUSED_POWER5 field. */
#define VMC_RAMA_POWERSET_UNUSED_POWER5_Msk (0x1UL << VMC_RAMA_POWERSET_UNUSED_POWER5_Pos) /*!< Bit mask of UNUSED_POWER5 field. */

/* Bit 5 : Unused power set bit 4 */
#define VMC_RAMA_POWERSET_UNUSED_POWER4_Pos (5UL) /*!< Position of UNUSED_POWER4 field. */
#define VMC_RAMA_POWERSET_UNUSED_POWER4_Msk (0x1UL << VMC_RAMA_POWERSET_UNUSED_POWER4_Pos) /*!< Bit mask of UNUSED_POWER4 field. */

/* Bit 4 : Unused power set bit 3 */
#define VMC_RAMA_POWERSET_UNUSED_POWER3_Pos (4UL) /*!< Position of UNUSED_POWER3 field. */
#define VMC_RAMA_POWERSET_UNUSED_POWER3_Msk (0x1UL << VMC_RAMA_POWERSET_UNUSED_POWER3_Pos) /*!< Bit mask of UNUSED_POWER3 field. */

/* Bit 3 : Unused power set bit 2 */
#define VMC_RAMA_POWERSET_UNUSED_POWER2_Pos (3UL) /*!< Position of UNUSED_POWER2 field. */
#define VMC_RAMA_POWERSET_UNUSED_POWER2_Msk (0x1UL << VMC_RAMA_POWERSET_UNUSED_POWER2_Pos) /*!< Bit mask of UNUSED_POWER2 field. */

/* Bit 2 : Unused power set bit 1 */
#define VMC_RAMA_POWERSET_UNUSED_POWER1_Pos (2UL) /*!< Position of UNUSED_POWER1 field. */
#define VMC_RAMA_POWERSET_UNUSED_POWER1_Msk (0x1UL << VMC_RAMA_POWERSET_UNUSED_POWER1_Pos) /*!< Bit mask of UNUSED_POWER1 field. */

/* Bit 1 : Unused power set bit 0 */
#define VMC_RAMA_POWERSET_UNUSED_POWER0_Pos (1UL) /*!< Position of UNUSED_POWER0 field. */
#define VMC_RAMA_POWERSET_UNUSED_POWER0_Msk (0x1UL << VMC_RAMA_POWERSET_UNUSED_POWER0_Pos) /*!< Bit mask of UNUSED_POWER0 field. */

/* Bit 0 : Keep RAM section S0-S15 of RAM B{n} on or off in System ON mode */
#define VMC_RAMA_POWERSET_S015POWER_Pos (0UL) /*!< Position of S015POWER field. */
#define VMC_RAMA_POWERSET_S015POWER_Msk (0x1UL << VMC_RAMA_POWERSET_S015POWER_Pos) /*!< Bit mask of S015POWER field. */
#define VMC_RAMA_POWERSET_S015POWER_On (1UL) /*!< On */

/* Register: VMC_RAMA_POWERCLR */
/* Description: RAM  B{n} power control clear register */

/* Bit 31 : Unused retention set bit 14 */
#define VMC_RAMA_POWERCLR_UNUSED_RETENTION14_Pos (31UL) /*!< Position of UNUSED_RETENTION14 field. */
#define VMC_RAMA_POWERCLR_UNUSED_RETENTION14_Msk (0x1UL << VMC_RAMA_POWERCLR_UNUSED_RETENTION14_Pos) /*!< Bit mask of UNUSED_RETENTION14 field. */

/* Bit 30 : Unused retention set bit 13 */
#define VMC_RAMA_POWERCLR_UNUSED_RETENTION13_Pos (30UL) /*!< Position of UNUSED_RETENTION13 field. */
#define VMC_RAMA_POWERCLR_UNUSED_RETENTION13_Msk (0x1UL << VMC_RAMA_POWERCLR_UNUSED_RETENTION13_Pos) /*!< Bit mask of UNUSED_RETENTION13 field. */

/* Bit 29 : Unused retention set bit 12 */
#define VMC_RAMA_POWERCLR_UNUSED_RETENTION12_Pos (29UL) /*!< Position of UNUSED_RETENTION12 field. */
#define VMC_RAMA_POWERCLR_UNUSED_RETENTION12_Msk (0x1UL << VMC_RAMA_POWERCLR_UNUSED_RETENTION12_Pos) /*!< Bit mask of UNUSED_RETENTION12 field. */

/* Bit 28 : Unused retention set bit 11 */
#define VMC_RAMA_POWERCLR_UNUSED_RETENTION11_Pos (28UL) /*!< Position of UNUSED_RETENTION11 field. */
#define VMC_RAMA_POWERCLR_UNUSED_RETENTION11_Msk (0x1UL << VMC_RAMA_POWERCLR_UNUSED_RETENTION11_Pos) /*!< Bit mask of UNUSED_RETENTION11 field. */

/* Bit 27 : Unused retention set bit 10 */
#define VMC_RAMA_POWERCLR_UNUSED_RETENTION10_Pos (27UL) /*!< Position of UNUSED_RETENTION10 field. */
#define VMC_RAMA_POWERCLR_UNUSED_RETENTION10_Msk (0x1UL << VMC_RAMA_POWERCLR_UNUSED_RETENTION10_Pos) /*!< Bit mask of UNUSED_RETENTION10 field. */

/* Bit 26 : Unused retention set bit 9 */
#define VMC_RAMA_POWERCLR_UNUSED_RETENTION9_Pos (26UL) /*!< Position of UNUSED_RETENTION9 field. */
#define VMC_RAMA_POWERCLR_UNUSED_RETENTION9_Msk (0x1UL << VMC_RAMA_POWERCLR_UNUSED_RETENTION9_Pos) /*!< Bit mask of UNUSED_RETENTION9 field. */

/* Bit 25 : Unused retention set bit 8 */
#define VMC_RAMA_POWERCLR_UNUSED_RETENTION8_Pos (25UL) /*!< Position of UNUSED_RETENTION8 field. */
#define VMC_RAMA_POWERCLR_UNUSED_RETENTION8_Msk (0x1UL << VMC_RAMA_POWERCLR_UNUSED_RETENTION8_Pos) /*!< Bit mask of UNUSED_RETENTION8 field. */

/* Bit 24 : Unused retention set bit 7 */
#define VMC_RAMA_POWERCLR_UNUSED_RETENTION7_Pos (24UL) /*!< Position of UNUSED_RETENTION7 field. */
#define VMC_RAMA_POWERCLR_UNUSED_RETENTION7_Msk (0x1UL << VMC_RAMA_POWERCLR_UNUSED_RETENTION7_Pos) /*!< Bit mask of UNUSED_RETENTION7 field. */

/* Bit 23 : Unused retention set bit 6 */
#define VMC_RAMA_POWERCLR_UNUSED_RETENTION6_Pos (23UL) /*!< Position of UNUSED_RETENTION6 field. */
#define VMC_RAMA_POWERCLR_UNUSED_RETENTION6_Msk (0x1UL << VMC_RAMA_POWERCLR_UNUSED_RETENTION6_Pos) /*!< Bit mask of UNUSED_RETENTION6 field. */

/* Bit 22 : Unused retention set bit 5 */
#define VMC_RAMA_POWERCLR_UNUSED_RETENTION5_Pos (22UL) /*!< Position of UNUSED_RETENTION5 field. */
#define VMC_RAMA_POWERCLR_UNUSED_RETENTION5_Msk (0x1UL << VMC_RAMA_POWERCLR_UNUSED_RETENTION5_Pos) /*!< Bit mask of UNUSED_RETENTION5 field. */

/* Bit 21 : Unused retention set bit 4 */
#define VMC_RAMA_POWERCLR_UNUSED_RETENTION4_Pos (21UL) /*!< Position of UNUSED_RETENTION4 field. */
#define VMC_RAMA_POWERCLR_UNUSED_RETENTION4_Msk (0x1UL << VMC_RAMA_POWERCLR_UNUSED_RETENTION4_Pos) /*!< Bit mask of UNUSED_RETENTION4 field. */

/* Bit 20 : Unused retention set bit 3 */
#define VMC_RAMA_POWERCLR_UNUSED_RETENTION3_Pos (20UL) /*!< Position of UNUSED_RETENTION3 field. */
#define VMC_RAMA_POWERCLR_UNUSED_RETENTION3_Msk (0x1UL << VMC_RAMA_POWERCLR_UNUSED_RETENTION3_Pos) /*!< Bit mask of UNUSED_RETENTION3 field. */

/* Bit 19 : Unused retention set bit 2 */
#define VMC_RAMA_POWERCLR_UNUSED_RETENTION2_Pos (19UL) /*!< Position of UNUSED_RETENTION2 field. */
#define VMC_RAMA_POWERCLR_UNUSED_RETENTION2_Msk (0x1UL << VMC_RAMA_POWERCLR_UNUSED_RETENTION2_Pos) /*!< Bit mask of UNUSED_RETENTION2 field. */

/* Bit 18 : Unused retention set bit 1 */
#define VMC_RAMA_POWERCLR_UNUSED_RETENTION1_Pos (18UL) /*!< Position of UNUSED_RETENTION1 field. */
#define VMC_RAMA_POWERCLR_UNUSED_RETENTION1_Msk (0x1UL << VMC_RAMA_POWERCLR_UNUSED_RETENTION1_Pos) /*!< Bit mask of UNUSED_RETENTION1 field. */

/* Bit 17 : Unused retention set bit 0 */
#define VMC_RAMA_POWERCLR_UNUSED_RETENTION0_Pos (17UL) /*!< Position of UNUSED_RETENTION0 field. */
#define VMC_RAMA_POWERCLR_UNUSED_RETENTION0_Msk (0x1UL << VMC_RAMA_POWERCLR_UNUSED_RETENTION0_Pos) /*!< Bit mask of UNUSED_RETENTION0 field. */

/* Bit 16 : Keep retention on RAM section S0-S15 of RAM B{n} when RAM section is switched off */
#define VMC_RAMA_POWERCLR_S015RETENTION_Pos (16UL) /*!< Position of S015RETENTION field. */
#define VMC_RAMA_POWERCLR_S015RETENTION_Msk (0x1UL << VMC_RAMA_POWERCLR_S015RETENTION_Pos) /*!< Bit mask of S015RETENTION field. */
#define VMC_RAMA_POWERCLR_S015RETENTION_Off (1UL) /*!< Off */

/* Bit 15 : Unused power set bit 14 */
#define VMC_RAMA_POWERCLR_UNUSED_POWER14_Pos (15UL) /*!< Position of UNUSED_POWER14 field. */
#define VMC_RAMA_POWERCLR_UNUSED_POWER14_Msk (0x1UL << VMC_RAMA_POWERCLR_UNUSED_POWER14_Pos) /*!< Bit mask of UNUSED_POWER14 field. */

/* Bit 14 : Unused power set bit 13 */
#define VMC_RAMA_POWERCLR_UNUSED_POWER13_Pos (14UL) /*!< Position of UNUSED_POWER13 field. */
#define VMC_RAMA_POWERCLR_UNUSED_POWER13_Msk (0x1UL << VMC_RAMA_POWERCLR_UNUSED_POWER13_Pos) /*!< Bit mask of UNUSED_POWER13 field. */

/* Bit 13 : Unused power set bit 12 */
#define VMC_RAMA_POWERCLR_UNUSED_POWER12_Pos (13UL) /*!< Position of UNUSED_POWER12 field. */
#define VMC_RAMA_POWERCLR_UNUSED_POWER12_Msk (0x1UL << VMC_RAMA_POWERCLR_UNUSED_POWER12_Pos) /*!< Bit mask of UNUSED_POWER12 field. */

/* Bit 12 : Unused power set bit 11 */
#define VMC_RAMA_POWERCLR_UNUSED_POWER11_Pos (12UL) /*!< Position of UNUSED_POWER11 field. */
#define VMC_RAMA_POWERCLR_UNUSED_POWER11_Msk (0x1UL << VMC_RAMA_POWERCLR_UNUSED_POWER11_Pos) /*!< Bit mask of UNUSED_POWER11 field. */

/* Bit 11 : Unused power set bit 10 */
#define VMC_RAMA_POWERCLR_UNUSED_POWER10_Pos (11UL) /*!< Position of UNUSED_POWER10 field. */
#define VMC_RAMA_POWERCLR_UNUSED_POWER10_Msk (0x1UL << VMC_RAMA_POWERCLR_UNUSED_POWER10_Pos) /*!< Bit mask of UNUSED_POWER10 field. */

/* Bit 10 : Unused power set bit 9 */
#define VMC_RAMA_POWERCLR_UNUSED_POWER9_Pos (10UL) /*!< Position of UNUSED_POWER9 field. */
#define VMC_RAMA_POWERCLR_UNUSED_POWER9_Msk (0x1UL << VMC_RAMA_POWERCLR_UNUSED_POWER9_Pos) /*!< Bit mask of UNUSED_POWER9 field. */

/* Bit 9 : Unused power set bit 8 */
#define VMC_RAMA_POWERCLR_UNUSED_POWER8_Pos (9UL) /*!< Position of UNUSED_POWER8 field. */
#define VMC_RAMA_POWERCLR_UNUSED_POWER8_Msk (0x1UL << VMC_RAMA_POWERCLR_UNUSED_POWER8_Pos) /*!< Bit mask of UNUSED_POWER8 field. */

/* Bit 8 : Unused power set bit 7 */
#define VMC_RAMA_POWERCLR_UNUSED_POWER7_Pos (8UL) /*!< Position of UNUSED_POWER7 field. */
#define VMC_RAMA_POWERCLR_UNUSED_POWER7_Msk (0x1UL << VMC_RAMA_POWERCLR_UNUSED_POWER7_Pos) /*!< Bit mask of UNUSED_POWER7 field. */

/* Bit 7 : Unused power set bit 6 */
#define VMC_RAMA_POWERCLR_UNUSED_POWER6_Pos (7UL) /*!< Position of UNUSED_POWER6 field. */
#define VMC_RAMA_POWERCLR_UNUSED_POWER6_Msk (0x1UL << VMC_RAMA_POWERCLR_UNUSED_POWER6_Pos) /*!< Bit mask of UNUSED_POWER6 field. */

/* Bit 6 : Unused power set bit 5 */
#define VMC_RAMA_POWERCLR_UNUSED_POWER5_Pos (6UL) /*!< Position of UNUSED_POWER5 field. */
#define VMC_RAMA_POWERCLR_UNUSED_POWER5_Msk (0x1UL << VMC_RAMA_POWERCLR_UNUSED_POWER5_Pos) /*!< Bit mask of UNUSED_POWER5 field. */

/* Bit 5 : Unused power set bit 4 */
#define VMC_RAMA_POWERCLR_UNUSED_POWER4_Pos (5UL) /*!< Position of UNUSED_POWER4 field. */
#define VMC_RAMA_POWERCLR_UNUSED_POWER4_Msk (0x1UL << VMC_RAMA_POWERCLR_UNUSED_POWER4_Pos) /*!< Bit mask of UNUSED_POWER4 field. */

/* Bit 4 : Unused power set bit 3 */
#define VMC_RAMA_POWERCLR_UNUSED_POWER3_Pos (4UL) /*!< Position of UNUSED_POWER3 field. */
#define VMC_RAMA_POWERCLR_UNUSED_POWER3_Msk (0x1UL << VMC_RAMA_POWERCLR_UNUSED_POWER3_Pos) /*!< Bit mask of UNUSED_POWER3 field. */

/* Bit 3 : Unused power set bit 2 */
#define VMC_RAMA_POWERCLR_UNUSED_POWER2_Pos (3UL) /*!< Position of UNUSED_POWER2 field. */
#define VMC_RAMA_POWERCLR_UNUSED_POWER2_Msk (0x1UL << VMC_RAMA_POWERCLR_UNUSED_POWER2_Pos) /*!< Bit mask of UNUSED_POWER2 field. */

/* Bit 2 : Unused power set bit 1 */
#define VMC_RAMA_POWERCLR_UNUSED_POWER1_Pos (2UL) /*!< Position of UNUSED_POWER1 field. */
#define VMC_RAMA_POWERCLR_UNUSED_POWER1_Msk (0x1UL << VMC_RAMA_POWERCLR_UNUSED_POWER1_Pos) /*!< Bit mask of UNUSED_POWER1 field. */

/* Bit 1 : Unused power set bit 0 */
#define VMC_RAMA_POWERCLR_UNUSED_POWER0_Pos (1UL) /*!< Position of UNUSED_POWER0 field. */
#define VMC_RAMA_POWERCLR_UNUSED_POWER0_Msk (0x1UL << VMC_RAMA_POWERCLR_UNUSED_POWER0_Pos) /*!< Bit mask of UNUSED_POWER0 field. */

/* Bit 0 : Keep RAM section S0-S15 of RAM B{n} on or off in System ON mode */
#define VMC_RAMA_POWERCLR_S015POWER_Pos (0UL) /*!< Position of S015POWER field. */
#define VMC_RAMA_POWERCLR_S015POWER_Msk (0x1UL << VMC_RAMA_POWERCLR_S015POWER_Pos) /*!< Bit mask of S015POWER field. */
#define VMC_RAMA_POWERCLR_S015POWER_Off (1UL) /*!< Off */

/* Register: VMC_RAMB_POWER */
/* Description: Description cluster: RAM Bn power control register */

/* Bit 27 : Unused retention bit 10 */
#define VMC_RAMB_POWER_UNUSED_RETENTION10_Pos (27UL) /*!< Position of UNUSED_RETENTION10 field. */
#define VMC_RAMB_POWER_UNUSED_RETENTION10_Msk (0x1UL << VMC_RAMB_POWER_UNUSED_RETENTION10_Pos) /*!< Bit mask of UNUSED_RETENTION10 field. */

/* Bit 26 : Unused retention bit 9 */
#define VMC_RAMB_POWER_UNUSED_RETENTION9_Pos (26UL) /*!< Position of UNUSED_RETENTION9 field. */
#define VMC_RAMB_POWER_UNUSED_RETENTION9_Msk (0x1UL << VMC_RAMB_POWER_UNUSED_RETENTION9_Pos) /*!< Bit mask of UNUSED_RETENTION9 field. */

/* Bit 25 : Unused retention bit 8 */
#define VMC_RAMB_POWER_UNUSED_RETENTION8_Pos (25UL) /*!< Position of UNUSED_RETENTION8 field. */
#define VMC_RAMB_POWER_UNUSED_RETENTION8_Msk (0x1UL << VMC_RAMB_POWER_UNUSED_RETENTION8_Pos) /*!< Bit mask of UNUSED_RETENTION8 field. */

/* Bit 24 : Unused retention bit 7 */
#define VMC_RAMB_POWER_UNUSED_RETENTION7_Pos (24UL) /*!< Position of UNUSED_RETENTION7 field. */
#define VMC_RAMB_POWER_UNUSED_RETENTION7_Msk (0x1UL << VMC_RAMB_POWER_UNUSED_RETENTION7_Pos) /*!< Bit mask of UNUSED_RETENTION7 field. */

/* Bit 23 : Unused retention bit 6 */
#define VMC_RAMB_POWER_UNUSED_RETENTION6_Pos (23UL) /*!< Position of UNUSED_RETENTION6 field. */
#define VMC_RAMB_POWER_UNUSED_RETENTION6_Msk (0x1UL << VMC_RAMB_POWER_UNUSED_RETENTION6_Pos) /*!< Bit mask of UNUSED_RETENTION6 field. */

/* Bit 22 : Unused retention bit 5 */
#define VMC_RAMB_POWER_UNUSED_RETENTION5_Pos (22UL) /*!< Position of UNUSED_RETENTION5 field. */
#define VMC_RAMB_POWER_UNUSED_RETENTION5_Msk (0x1UL << VMC_RAMB_POWER_UNUSED_RETENTION5_Pos) /*!< Bit mask of UNUSED_RETENTION5 field. */

/* Bit 21 : Unused retention bit 4 */
#define VMC_RAMB_POWER_UNUSED_RETENTION4_Pos (21UL) /*!< Position of UNUSED_RETENTION4 field. */
#define VMC_RAMB_POWER_UNUSED_RETENTION4_Msk (0x1UL << VMC_RAMB_POWER_UNUSED_RETENTION4_Pos) /*!< Bit mask of UNUSED_RETENTION4 field. */

/* Bit 20 : Unused retention bit 3 */
#define VMC_RAMB_POWER_UNUSED_RETENTION3_Pos (20UL) /*!< Position of UNUSED_RETENTION3 field. */
#define VMC_RAMB_POWER_UNUSED_RETENTION3_Msk (0x1UL << VMC_RAMB_POWER_UNUSED_RETENTION3_Pos) /*!< Bit mask of UNUSED_RETENTION3 field. */

/* Bit 19 : Unused retention bit 2 */
#define VMC_RAMB_POWER_UNUSED_RETENTION2_Pos (19UL) /*!< Position of UNUSED_RETENTION2 field. */
#define VMC_RAMB_POWER_UNUSED_RETENTION2_Msk (0x1UL << VMC_RAMB_POWER_UNUSED_RETENTION2_Pos) /*!< Bit mask of UNUSED_RETENTION2 field. */

/* Bit 18 : Unused retention bit 1 */
#define VMC_RAMB_POWER_UNUSED_RETENTION1_Pos (18UL) /*!< Position of UNUSED_RETENTION1 field. */
#define VMC_RAMB_POWER_UNUSED_RETENTION1_Msk (0x1UL << VMC_RAMB_POWER_UNUSED_RETENTION1_Pos) /*!< Bit mask of UNUSED_RETENTION1 field. */

/* Bit 17 : Unused retention bit 0 */
#define VMC_RAMB_POWER_UNUSED_RETENTION0_Pos (17UL) /*!< Position of UNUSED_RETENTION0 field. */
#define VMC_RAMB_POWER_UNUSED_RETENTION0_Msk (0x1UL << VMC_RAMB_POWER_UNUSED_RETENTION0_Pos) /*!< Bit mask of UNUSED_RETENTION0 field. */

/* Bit 16 : Keep retention on RAM section S0-S15 of RAM Bn when RAM section is switched off */
#define VMC_RAMB_POWER_S015RETENTION_Pos (16UL) /*!< Position of S015RETENTION field. */
#define VMC_RAMB_POWER_S015RETENTION_Msk (0x1UL << VMC_RAMB_POWER_S015RETENTION_Pos) /*!< Bit mask of S015RETENTION field. */
#define VMC_RAMB_POWER_S015RETENTION_Off (0UL) /*!< Off */
#define VMC_RAMB_POWER_S015RETENTION_On (1UL) /*!< On */

/* Bit 11 : Unused power bit 10 */
#define VMC_RAMB_POWER_UNUSED_POWER10_Pos (11UL) /*!< Position of UNUSED_POWER10 field. */
#define VMC_RAMB_POWER_UNUSED_POWER10_Msk (0x1UL << VMC_RAMB_POWER_UNUSED_POWER10_Pos) /*!< Bit mask of UNUSED_POWER10 field. */

/* Bit 10 : Unused power bit 9 */
#define VMC_RAMB_POWER_UNUSED_POWER9_Pos (10UL) /*!< Position of UNUSED_POWER9 field. */
#define VMC_RAMB_POWER_UNUSED_POWER9_Msk (0x1UL << VMC_RAMB_POWER_UNUSED_POWER9_Pos) /*!< Bit mask of UNUSED_POWER9 field. */

/* Bit 9 : Unused power bit 8 */
#define VMC_RAMB_POWER_UNUSED_POWER8_Pos (9UL) /*!< Position of UNUSED_POWER8 field. */
#define VMC_RAMB_POWER_UNUSED_POWER8_Msk (0x1UL << VMC_RAMB_POWER_UNUSED_POWER8_Pos) /*!< Bit mask of UNUSED_POWER8 field. */

/* Bit 8 : Unused power bit 7 */
#define VMC_RAMB_POWER_UNUSED_POWER7_Pos (8UL) /*!< Position of UNUSED_POWER7 field. */
#define VMC_RAMB_POWER_UNUSED_POWER7_Msk (0x1UL << VMC_RAMB_POWER_UNUSED_POWER7_Pos) /*!< Bit mask of UNUSED_POWER7 field. */

/* Bit 7 : Unused power bit 6 */
#define VMC_RAMB_POWER_UNUSED_POWER6_Pos (7UL) /*!< Position of UNUSED_POWER6 field. */
#define VMC_RAMB_POWER_UNUSED_POWER6_Msk (0x1UL << VMC_RAMB_POWER_UNUSED_POWER6_Pos) /*!< Bit mask of UNUSED_POWER6 field. */

/* Bit 6 : Unused power bit 5 */
#define VMC_RAMB_POWER_UNUSED_POWER5_Pos (6UL) /*!< Position of UNUSED_POWER5 field. */
#define VMC_RAMB_POWER_UNUSED_POWER5_Msk (0x1UL << VMC_RAMB_POWER_UNUSED_POWER5_Pos) /*!< Bit mask of UNUSED_POWER5 field. */

/* Bit 5 : Unused power bit 4 */
#define VMC_RAMB_POWER_UNUSED_POWER4_Pos (5UL) /*!< Position of UNUSED_POWER4 field. */
#define VMC_RAMB_POWER_UNUSED_POWER4_Msk (0x1UL << VMC_RAMB_POWER_UNUSED_POWER4_Pos) /*!< Bit mask of UNUSED_POWER4 field. */

/* Bit 4 : Unused power bit 3 */
#define VMC_RAMB_POWER_UNUSED_POWER3_Pos (4UL) /*!< Position of UNUSED_POWER3 field. */
#define VMC_RAMB_POWER_UNUSED_POWER3_Msk (0x1UL << VMC_RAMB_POWER_UNUSED_POWER3_Pos) /*!< Bit mask of UNUSED_POWER3 field. */

/* Bit 3 : Unused power bit 2 */
#define VMC_RAMB_POWER_UNUSED_POWER2_Pos (3UL) /*!< Position of UNUSED_POWER2 field. */
#define VMC_RAMB_POWER_UNUSED_POWER2_Msk (0x1UL << VMC_RAMB_POWER_UNUSED_POWER2_Pos) /*!< Bit mask of UNUSED_POWER2 field. */

/* Bit 2 : Unused power bit 1 */
#define VMC_RAMB_POWER_UNUSED_POWER1_Pos (2UL) /*!< Position of UNUSED_POWER1 field. */
#define VMC_RAMB_POWER_UNUSED_POWER1_Msk (0x1UL << VMC_RAMB_POWER_UNUSED_POWER1_Pos) /*!< Bit mask of UNUSED_POWER1 field. */

/* Bit 1 : Unused power bit 0 */
#define VMC_RAMB_POWER_UNUSED_POWER0_Pos (1UL) /*!< Position of UNUSED_POWER0 field. */
#define VMC_RAMB_POWER_UNUSED_POWER0_Msk (0x1UL << VMC_RAMB_POWER_UNUSED_POWER0_Pos) /*!< Bit mask of UNUSED_POWER0 field. */

/* Bit 0 : Keep RAM sections S0-S15 of RAM Bn on or off in System ON mode */
#define VMC_RAMB_POWER_S015POWER_Pos (0UL) /*!< Position of S015POWER field. */
#define VMC_RAMB_POWER_S015POWER_Msk (0x1UL << VMC_RAMB_POWER_S015POWER_Pos) /*!< Bit mask of S015POWER field. */
#define VMC_RAMB_POWER_S015POWER_Off (0UL) /*!< Off */
#define VMC_RAMB_POWER_S015POWER_On (1UL) /*!< On */

/* Register: VMC_RAMB_POWERSET */
/* Description: Description cluster: RAM Bn power control set register */

/* Bit 27 : Unused retention set bit 10 */
#define VMC_RAMB_POWERSET_UNUSED_RETENTION10_Pos (27UL) /*!< Position of UNUSED_RETENTION10 field. */
#define VMC_RAMB_POWERSET_UNUSED_RETENTION10_Msk (0x1UL << VMC_RAMB_POWERSET_UNUSED_RETENTION10_Pos) /*!< Bit mask of UNUSED_RETENTION10 field. */

/* Bit 26 : Unused retention set bit 9 */
#define VMC_RAMB_POWERSET_UNUSED_RETENTION9_Pos (26UL) /*!< Position of UNUSED_RETENTION9 field. */
#define VMC_RAMB_POWERSET_UNUSED_RETENTION9_Msk (0x1UL << VMC_RAMB_POWERSET_UNUSED_RETENTION9_Pos) /*!< Bit mask of UNUSED_RETENTION9 field. */

/* Bit 25 : Unused retention set bit 8 */
#define VMC_RAMB_POWERSET_UNUSED_RETENTION8_Pos (25UL) /*!< Position of UNUSED_RETENTION8 field. */
#define VMC_RAMB_POWERSET_UNUSED_RETENTION8_Msk (0x1UL << VMC_RAMB_POWERSET_UNUSED_RETENTION8_Pos) /*!< Bit mask of UNUSED_RETENTION8 field. */

/* Bit 24 : Unused retention set bit 7 */
#define VMC_RAMB_POWERSET_UNUSED_RETENTION7_Pos (24UL) /*!< Position of UNUSED_RETENTION7 field. */
#define VMC_RAMB_POWERSET_UNUSED_RETENTION7_Msk (0x1UL << VMC_RAMB_POWERSET_UNUSED_RETENTION7_Pos) /*!< Bit mask of UNUSED_RETENTION7 field. */

/* Bit 23 : Unused retention set bit 6 */
#define VMC_RAMB_POWERSET_UNUSED_RETENTION6_Pos (23UL) /*!< Position of UNUSED_RETENTION6 field. */
#define VMC_RAMB_POWERSET_UNUSED_RETENTION6_Msk (0x1UL << VMC_RAMB_POWERSET_UNUSED_RETENTION6_Pos) /*!< Bit mask of UNUSED_RETENTION6 field. */

/* Bit 22 : Unused retention set bit 5 */
#define VMC_RAMB_POWERSET_UNUSED_RETENTION5_Pos (22UL) /*!< Position of UNUSED_RETENTION5 field. */
#define VMC_RAMB_POWERSET_UNUSED_RETENTION5_Msk (0x1UL << VMC_RAMB_POWERSET_UNUSED_RETENTION5_Pos) /*!< Bit mask of UNUSED_RETENTION5 field. */

/* Bit 21 : Unused retention set bit 4 */
#define VMC_RAMB_POWERSET_UNUSED_RETENTION4_Pos (21UL) /*!< Position of UNUSED_RETENTION4 field. */
#define VMC_RAMB_POWERSET_UNUSED_RETENTION4_Msk (0x1UL << VMC_RAMB_POWERSET_UNUSED_RETENTION4_Pos) /*!< Bit mask of UNUSED_RETENTION4 field. */

/* Bit 20 : Unused retention set bit 3 */
#define VMC_RAMB_POWERSET_UNUSED_RETENTION3_Pos (20UL) /*!< Position of UNUSED_RETENTION3 field. */
#define VMC_RAMB_POWERSET_UNUSED_RETENTION3_Msk (0x1UL << VMC_RAMB_POWERSET_UNUSED_RETENTION3_Pos) /*!< Bit mask of UNUSED_RETENTION3 field. */

/* Bit 19 : Unused retention set bit 2 */
#define VMC_RAMB_POWERSET_UNUSED_RETENTION2_Pos (19UL) /*!< Position of UNUSED_RETENTION2 field. */
#define VMC_RAMB_POWERSET_UNUSED_RETENTION2_Msk (0x1UL << VMC_RAMB_POWERSET_UNUSED_RETENTION2_Pos) /*!< Bit mask of UNUSED_RETENTION2 field. */

/* Bit 18 : Unused retention set bit 1 */
#define VMC_RAMB_POWERSET_UNUSED_RETENTION1_Pos (18UL) /*!< Position of UNUSED_RETENTION1 field. */
#define VMC_RAMB_POWERSET_UNUSED_RETENTION1_Msk (0x1UL << VMC_RAMB_POWERSET_UNUSED_RETENTION1_Pos) /*!< Bit mask of UNUSED_RETENTION1 field. */

/* Bit 17 : Unused retention set bit 0 */
#define VMC_RAMB_POWERSET_UNUSED_RETENTION0_Pos (17UL) /*!< Position of UNUSED_RETENTION0 field. */
#define VMC_RAMB_POWERSET_UNUSED_RETENTION0_Msk (0x1UL << VMC_RAMB_POWERSET_UNUSED_RETENTION0_Pos) /*!< Bit mask of UNUSED_RETENTION0 field. */

/* Bit 16 : Keep retention on RAM section S0-S15 of RAM Bn when RAM section is switched off */
#define VMC_RAMB_POWERSET_S015RETENTION_Pos (16UL) /*!< Position of S015RETENTION field. */
#define VMC_RAMB_POWERSET_S015RETENTION_Msk (0x1UL << VMC_RAMB_POWERSET_S015RETENTION_Pos) /*!< Bit mask of S015RETENTION field. */
#define VMC_RAMB_POWERSET_S015RETENTION_On (1UL) /*!< On */

/* Bit 11 : Unused power set bit 10 */
#define VMC_RAMB_POWERSET_UNUSED_POWER10_Pos (11UL) /*!< Position of UNUSED_POWER10 field. */
#define VMC_RAMB_POWERSET_UNUSED_POWER10_Msk (0x1UL << VMC_RAMB_POWERSET_UNUSED_POWER10_Pos) /*!< Bit mask of UNUSED_POWER10 field. */

/* Bit 10 : Unused power set bit 9 */
#define VMC_RAMB_POWERSET_UNUSED_POWER9_Pos (10UL) /*!< Position of UNUSED_POWER9 field. */
#define VMC_RAMB_POWERSET_UNUSED_POWER9_Msk (0x1UL << VMC_RAMB_POWERSET_UNUSED_POWER9_Pos) /*!< Bit mask of UNUSED_POWER9 field. */

/* Bit 9 : Unused power set bit 8 */
#define VMC_RAMB_POWERSET_UNUSED_POWER8_Pos (9UL) /*!< Position of UNUSED_POWER8 field. */
#define VMC_RAMB_POWERSET_UNUSED_POWER8_Msk (0x1UL << VMC_RAMB_POWERSET_UNUSED_POWER8_Pos) /*!< Bit mask of UNUSED_POWER8 field. */

/* Bit 8 : Unused power set bit 7 */
#define VMC_RAMB_POWERSET_UNUSED_POWER7_Pos (8UL) /*!< Position of UNUSED_POWER7 field. */
#define VMC_RAMB_POWERSET_UNUSED_POWER7_Msk (0x1UL << VMC_RAMB_POWERSET_UNUSED_POWER7_Pos) /*!< Bit mask of UNUSED_POWER7 field. */

/* Bit 7 : Unused power set bit 6 */
#define VMC_RAMB_POWERSET_UNUSED_POWER6_Pos (7UL) /*!< Position of UNUSED_POWER6 field. */
#define VMC_RAMB_POWERSET_UNUSED_POWER6_Msk (0x1UL << VMC_RAMB_POWERSET_UNUSED_POWER6_Pos) /*!< Bit mask of UNUSED_POWER6 field. */

/* Bit 6 : Unused power set bit 5 */
#define VMC_RAMB_POWERSET_UNUSED_POWER5_Pos (6UL) /*!< Position of UNUSED_POWER5 field. */
#define VMC_RAMB_POWERSET_UNUSED_POWER5_Msk (0x1UL << VMC_RAMB_POWERSET_UNUSED_POWER5_Pos) /*!< Bit mask of UNUSED_POWER5 field. */

/* Bit 5 : Unused power set bit 4 */
#define VMC_RAMB_POWERSET_UNUSED_POWER4_Pos (5UL) /*!< Position of UNUSED_POWER4 field. */
#define VMC_RAMB_POWERSET_UNUSED_POWER4_Msk (0x1UL << VMC_RAMB_POWERSET_UNUSED_POWER4_Pos) /*!< Bit mask of UNUSED_POWER4 field. */

/* Bit 4 : Unused power set bit 3 */
#define VMC_RAMB_POWERSET_UNUSED_POWER3_Pos (4UL) /*!< Position of UNUSED_POWER3 field. */
#define VMC_RAMB_POWERSET_UNUSED_POWER3_Msk (0x1UL << VMC_RAMB_POWERSET_UNUSED_POWER3_Pos) /*!< Bit mask of UNUSED_POWER3 field. */

/* Bit 3 : Unused power set bit 2 */
#define VMC_RAMB_POWERSET_UNUSED_POWER2_Pos (3UL) /*!< Position of UNUSED_POWER2 field. */
#define VMC_RAMB_POWERSET_UNUSED_POWER2_Msk (0x1UL << VMC_RAMB_POWERSET_UNUSED_POWER2_Pos) /*!< Bit mask of UNUSED_POWER2 field. */

/* Bit 2 : Unused power set bit 1 */
#define VMC_RAMB_POWERSET_UNUSED_POWER1_Pos (2UL) /*!< Position of UNUSED_POWER1 field. */
#define VMC_RAMB_POWERSET_UNUSED_POWER1_Msk (0x1UL << VMC_RAMB_POWERSET_UNUSED_POWER1_Pos) /*!< Bit mask of UNUSED_POWER1 field. */

/* Bit 1 : Unused power set bit 0 */
#define VMC_RAMB_POWERSET_UNUSED_POWER0_Pos (1UL) /*!< Position of UNUSED_POWER0 field. */
#define VMC_RAMB_POWERSET_UNUSED_POWER0_Msk (0x1UL << VMC_RAMB_POWERSET_UNUSED_POWER0_Pos) /*!< Bit mask of UNUSED_POWER0 field. */

/* Bit 0 : Keep RAM section S0-S15 of RAM Bn on or off in System ON mode */
#define VMC_RAMB_POWERSET_S015POWER_Pos (0UL) /*!< Position of S015POWER field. */
#define VMC_RAMB_POWERSET_S015POWER_Msk (0x1UL << VMC_RAMB_POWERSET_S015POWER_Pos) /*!< Bit mask of S015POWER field. */
#define VMC_RAMB_POWERSET_S015POWER_On (1UL) /*!< On */

/* Register: VMC_RAMB_POWERCLR */
/* Description: Description cluster: RAM  Bn power control clear register */

/* Bit 27 : Unused retention set bit 10 */
#define VMC_RAMB_POWERCLR_UNUSED_RETENTION10_Pos (27UL) /*!< Position of UNUSED_RETENTION10 field. */
#define VMC_RAMB_POWERCLR_UNUSED_RETENTION10_Msk (0x1UL << VMC_RAMB_POWERCLR_UNUSED_RETENTION10_Pos) /*!< Bit mask of UNUSED_RETENTION10 field. */

/* Bit 26 : Unused retention set bit 9 */
#define VMC_RAMB_POWERCLR_UNUSED_RETENTION9_Pos (26UL) /*!< Position of UNUSED_RETENTION9 field. */
#define VMC_RAMB_POWERCLR_UNUSED_RETENTION9_Msk (0x1UL << VMC_RAMB_POWERCLR_UNUSED_RETENTION9_Pos) /*!< Bit mask of UNUSED_RETENTION9 field. */

/* Bit 25 : Unused retention set bit 8 */
#define VMC_RAMB_POWERCLR_UNUSED_RETENTION8_Pos (25UL) /*!< Position of UNUSED_RETENTION8 field. */
#define VMC_RAMB_POWERCLR_UNUSED_RETENTION8_Msk (0x1UL << VMC_RAMB_POWERCLR_UNUSED_RETENTION8_Pos) /*!< Bit mask of UNUSED_RETENTION8 field. */

/* Bit 24 : Unused retention set bit 7 */
#define VMC_RAMB_POWERCLR_UNUSED_RETENTION7_Pos (24UL) /*!< Position of UNUSED_RETENTION7 field. */
#define VMC_RAMB_POWERCLR_UNUSED_RETENTION7_Msk (0x1UL << VMC_RAMB_POWERCLR_UNUSED_RETENTION7_Pos) /*!< Bit mask of UNUSED_RETENTION7 field. */

/* Bit 23 : Unused retention set bit 6 */
#define VMC_RAMB_POWERCLR_UNUSED_RETENTION6_Pos (23UL) /*!< Position of UNUSED_RETENTION6 field. */
#define VMC_RAMB_POWERCLR_UNUSED_RETENTION6_Msk (0x1UL << VMC_RAMB_POWERCLR_UNUSED_RETENTION6_Pos) /*!< Bit mask of UNUSED_RETENTION6 field. */

/* Bit 22 : Unused retention set bit 5 */
#define VMC_RAMB_POWERCLR_UNUSED_RETENTION5_Pos (22UL) /*!< Position of UNUSED_RETENTION5 field. */
#define VMC_RAMB_POWERCLR_UNUSED_RETENTION5_Msk (0x1UL << VMC_RAMB_POWERCLR_UNUSED_RETENTION5_Pos) /*!< Bit mask of UNUSED_RETENTION5 field. */

/* Bit 21 : Unused retention set bit 4 */
#define VMC_RAMB_POWERCLR_UNUSED_RETENTION4_Pos (21UL) /*!< Position of UNUSED_RETENTION4 field. */
#define VMC_RAMB_POWERCLR_UNUSED_RETENTION4_Msk (0x1UL << VMC_RAMB_POWERCLR_UNUSED_RETENTION4_Pos) /*!< Bit mask of UNUSED_RETENTION4 field. */

/* Bit 20 : Unused retention set bit 3 */
#define VMC_RAMB_POWERCLR_UNUSED_RETENTION3_Pos (20UL) /*!< Position of UNUSED_RETENTION3 field. */
#define VMC_RAMB_POWERCLR_UNUSED_RETENTION3_Msk (0x1UL << VMC_RAMB_POWERCLR_UNUSED_RETENTION3_Pos) /*!< Bit mask of UNUSED_RETENTION3 field. */

/* Bit 19 : Unused retention set bit 2 */
#define VMC_RAMB_POWERCLR_UNUSED_RETENTION2_Pos (19UL) /*!< Position of UNUSED_RETENTION2 field. */
#define VMC_RAMB_POWERCLR_UNUSED_RETENTION2_Msk (0x1UL << VMC_RAMB_POWERCLR_UNUSED_RETENTION2_Pos) /*!< Bit mask of UNUSED_RETENTION2 field. */

/* Bit 18 : Unused retention set bit 1 */
#define VMC_RAMB_POWERCLR_UNUSED_RETENTION1_Pos (18UL) /*!< Position of UNUSED_RETENTION1 field. */
#define VMC_RAMB_POWERCLR_UNUSED_RETENTION1_Msk (0x1UL << VMC_RAMB_POWERCLR_UNUSED_RETENTION1_Pos) /*!< Bit mask of UNUSED_RETENTION1 field. */

/* Bit 17 : Unused retention set bit 0 */
#define VMC_RAMB_POWERCLR_UNUSED_RETENTION0_Pos (17UL) /*!< Position of UNUSED_RETENTION0 field. */
#define VMC_RAMB_POWERCLR_UNUSED_RETENTION0_Msk (0x1UL << VMC_RAMB_POWERCLR_UNUSED_RETENTION0_Pos) /*!< Bit mask of UNUSED_RETENTION0 field. */

/* Bit 16 : Keep retention on RAM section S0-S15 of RAM Bn when RAM section is switched off */
#define VMC_RAMB_POWERCLR_S015RETENTION_Pos (16UL) /*!< Position of S015RETENTION field. */
#define VMC_RAMB_POWERCLR_S015RETENTION_Msk (0x1UL << VMC_RAMB_POWERCLR_S015RETENTION_Pos) /*!< Bit mask of S015RETENTION field. */
#define VMC_RAMB_POWERCLR_S015RETENTION_Off (1UL) /*!< Off */

/* Bit 11 : Unused power set bit 10 */
#define VMC_RAMB_POWERCLR_UNUSED_POWER10_Pos (11UL) /*!< Position of UNUSED_POWER10 field. */
#define VMC_RAMB_POWERCLR_UNUSED_POWER10_Msk (0x1UL << VMC_RAMB_POWERCLR_UNUSED_POWER10_Pos) /*!< Bit mask of UNUSED_POWER10 field. */

/* Bit 10 : Unused power set bit 9 */
#define VMC_RAMB_POWERCLR_UNUSED_POWER9_Pos (10UL) /*!< Position of UNUSED_POWER9 field. */
#define VMC_RAMB_POWERCLR_UNUSED_POWER9_Msk (0x1UL << VMC_RAMB_POWERCLR_UNUSED_POWER9_Pos) /*!< Bit mask of UNUSED_POWER9 field. */

/* Bit 9 : Unused power set bit 8 */
#define VMC_RAMB_POWERCLR_UNUSED_POWER8_Pos (9UL) /*!< Position of UNUSED_POWER8 field. */
#define VMC_RAMB_POWERCLR_UNUSED_POWER8_Msk (0x1UL << VMC_RAMB_POWERCLR_UNUSED_POWER8_Pos) /*!< Bit mask of UNUSED_POWER8 field. */

/* Bit 8 : Unused power set bit 7 */
#define VMC_RAMB_POWERCLR_UNUSED_POWER7_Pos (8UL) /*!< Position of UNUSED_POWER7 field. */
#define VMC_RAMB_POWERCLR_UNUSED_POWER7_Msk (0x1UL << VMC_RAMB_POWERCLR_UNUSED_POWER7_Pos) /*!< Bit mask of UNUSED_POWER7 field. */

/* Bit 7 : Unused power set bit 6 */
#define VMC_RAMB_POWERCLR_UNUSED_POWER6_Pos (7UL) /*!< Position of UNUSED_POWER6 field. */
#define VMC_RAMB_POWERCLR_UNUSED_POWER6_Msk (0x1UL << VMC_RAMB_POWERCLR_UNUSED_POWER6_Pos) /*!< Bit mask of UNUSED_POWER6 field. */

/* Bit 6 : Unused power set bit 5 */
#define VMC_RAMB_POWERCLR_UNUSED_POWER5_Pos (6UL) /*!< Position of UNUSED_POWER5 field. */
#define VMC_RAMB_POWERCLR_UNUSED_POWER5_Msk (0x1UL << VMC_RAMB_POWERCLR_UNUSED_POWER5_Pos) /*!< Bit mask of UNUSED_POWER5 field. */

/* Bit 5 : Unused power set bit 4 */
#define VMC_RAMB_POWERCLR_UNUSED_POWER4_Pos (5UL) /*!< Position of UNUSED_POWER4 field. */
#define VMC_RAMB_POWERCLR_UNUSED_POWER4_Msk (0x1UL << VMC_RAMB_POWERCLR_UNUSED_POWER4_Pos) /*!< Bit mask of UNUSED_POWER4 field. */

/* Bit 4 : Unused power set bit 3 */
#define VMC_RAMB_POWERCLR_UNUSED_POWER3_Pos (4UL) /*!< Position of UNUSED_POWER3 field. */
#define VMC_RAMB_POWERCLR_UNUSED_POWER3_Msk (0x1UL << VMC_RAMB_POWERCLR_UNUSED_POWER3_Pos) /*!< Bit mask of UNUSED_POWER3 field. */

/* Bit 3 : Unused power set bit 2 */
#define VMC_RAMB_POWERCLR_UNUSED_POWER2_Pos (3UL) /*!< Position of UNUSED_POWER2 field. */
#define VMC_RAMB_POWERCLR_UNUSED_POWER2_Msk (0x1UL << VMC_RAMB_POWERCLR_UNUSED_POWER2_Pos) /*!< Bit mask of UNUSED_POWER2 field. */

/* Bit 2 : Unused power set bit 1 */
#define VMC_RAMB_POWERCLR_UNUSED_POWER1_Pos (2UL) /*!< Position of UNUSED_POWER1 field. */
#define VMC_RAMB_POWERCLR_UNUSED_POWER1_Msk (0x1UL << VMC_RAMB_POWERCLR_UNUSED_POWER1_Pos) /*!< Bit mask of UNUSED_POWER1 field. */

/* Bit 1 : Unused power set bit 0 */
#define VMC_RAMB_POWERCLR_UNUSED_POWER0_Pos (1UL) /*!< Position of UNUSED_POWER0 field. */
#define VMC_RAMB_POWERCLR_UNUSED_POWER0_Msk (0x1UL << VMC_RAMB_POWERCLR_UNUSED_POWER0_Pos) /*!< Bit mask of UNUSED_POWER0 field. */

/* Bit 0 : Keep RAM section S0-S15 of RAM Bn on or off in System ON mode */
#define VMC_RAMB_POWERCLR_S015POWER_Pos (0UL) /*!< Position of S015POWER field. */
#define VMC_RAMB_POWERCLR_S015POWER_Msk (0x1UL << VMC_RAMB_POWERCLR_S015POWER_Pos) /*!< Bit mask of S015POWER field. */
#define VMC_RAMB_POWERCLR_S015POWER_Off (1UL) /*!< Off */

/* Register: VMC_RAMC_POWER */
/* Description: Description cluster: RAM Cn power control register */

/* Bit 17 : Unused retention bit */
#define VMC_RAMC_POWER_UNUSED_RETENTION1_Pos (17UL) /*!< Position of UNUSED_RETENTION1 field. */
#define VMC_RAMC_POWER_UNUSED_RETENTION1_Msk (0x1UL << VMC_RAMC_POWER_UNUSED_RETENTION1_Pos) /*!< Bit mask of UNUSED_RETENTION1 field. */

/* Bit 16 : Keep retention on RAM sections S0 and S1 of RAM Cn when RAM section is switched off */
#define VMC_RAMC_POWER_S01RETENTION_Pos (16UL) /*!< Position of S01RETENTION field. */
#define VMC_RAMC_POWER_S01RETENTION_Msk (0x1UL << VMC_RAMC_POWER_S01RETENTION_Pos) /*!< Bit mask of S01RETENTION field. */
#define VMC_RAMC_POWER_S01RETENTION_Off (0UL) /*!< Off */
#define VMC_RAMC_POWER_S01RETENTION_On (1UL) /*!< On */

/* Bit 1 : Unused power bit */
#define VMC_RAMC_POWER_UNUSED_POWER1_Pos (1UL) /*!< Position of UNUSED_POWER1 field. */
#define VMC_RAMC_POWER_UNUSED_POWER1_Msk (0x1UL << VMC_RAMC_POWER_UNUSED_POWER1_Pos) /*!< Bit mask of UNUSED_POWER1 field. */

/* Bit 0 : Keep RAM sections S0 and S1 of RAM Cn on or off in System ON mode */
#define VMC_RAMC_POWER_S01POWER_Pos (0UL) /*!< Position of S01POWER field. */
#define VMC_RAMC_POWER_S01POWER_Msk (0x1UL << VMC_RAMC_POWER_S01POWER_Pos) /*!< Bit mask of S01POWER field. */
#define VMC_RAMC_POWER_S01POWER_Off (0UL) /*!< Off */
#define VMC_RAMC_POWER_S01POWER_On (1UL) /*!< On */

/* Register: VMC_RAMC_POWERSET */
/* Description: Description cluster: RAM Cn power control set register */

/* Bit 17 : Unused retention set bit */
#define VMC_RAMC_POWERSET_UNUSED_RETENTION1_Pos (17UL) /*!< Position of UNUSED_RETENTION1 field. */
#define VMC_RAMC_POWERSET_UNUSED_RETENTION1_Msk (0x1UL << VMC_RAMC_POWERSET_UNUSED_RETENTION1_Pos) /*!< Bit mask of UNUSED_RETENTION1 field. */

/* Bit 16 : Keep retention on sections S0 and S1 of RAM of RAM Cn when RAM section is switched off */
#define VMC_RAMC_POWERSET_S01RETENTION_Pos (16UL) /*!< Position of S01RETENTION field. */
#define VMC_RAMC_POWERSET_S01RETENTION_Msk (0x1UL << VMC_RAMC_POWERSET_S01RETENTION_Pos) /*!< Bit mask of S01RETENTION field. */
#define VMC_RAMC_POWERSET_S01RETENTION_On (1UL) /*!< On */

/* Bit 1 : Unused power set bit */
#define VMC_RAMC_POWERSET_UNUSED_POWER1_Pos (1UL) /*!< Position of UNUSED_POWER1 field. */
#define VMC_RAMC_POWERSET_UNUSED_POWER1_Msk (0x1UL << VMC_RAMC_POWERSET_UNUSED_POWER1_Pos) /*!< Bit mask of UNUSED_POWER1 field. */

/* Bit 0 : Keep RAM sections S0 and S1 of RAM Cn on or off in System ON mode */
#define VMC_RAMC_POWERSET_S01POWER_Pos (0UL) /*!< Position of S01POWER field. */
#define VMC_RAMC_POWERSET_S01POWER_Msk (0x1UL << VMC_RAMC_POWERSET_S01POWER_Pos) /*!< Bit mask of S01POWER field. */
#define VMC_RAMC_POWERSET_S01POWER_On (1UL) /*!< On */

/* Register: VMC_RAMC_POWERCLR */
/* Description: Description cluster: RAM  Cn power control clear register */

/* Bit 17 : Unused retention clear bit */
#define VMC_RAMC_POWERCLR_UNUSED_RETENTION1_Pos (17UL) /*!< Position of UNUSED_RETENTION1 field. */
#define VMC_RAMC_POWERCLR_UNUSED_RETENTION1_Msk (0x1UL << VMC_RAMC_POWERCLR_UNUSED_RETENTION1_Pos) /*!< Bit mask of UNUSED_RETENTION1 field. */

/* Bit 16 : Keep retention on RAM sections S0 and S1 of RAM Cn when RAM section is switched off */
#define VMC_RAMC_POWERCLR_S01RETENTION_Pos (16UL) /*!< Position of S01RETENTION field. */
#define VMC_RAMC_POWERCLR_S01RETENTION_Msk (0x1UL << VMC_RAMC_POWERCLR_S01RETENTION_Pos) /*!< Bit mask of S01RETENTION field. */
#define VMC_RAMC_POWERCLR_S01RETENTION_Off (1UL) /*!< Off */

/* Bit 1 : Unused power clear bit */
#define VMC_RAMC_POWERCLR_UNUSED_POWER1_Pos (1UL) /*!< Position of UNUSED_POWER1 field. */
#define VMC_RAMC_POWERCLR_UNUSED_POWER1_Msk (0x1UL << VMC_RAMC_POWERCLR_UNUSED_POWER1_Pos) /*!< Bit mask of UNUSED_POWER1 field. */

/* Bit 0 : Keep RAM sections S0 and S1 of RAM Cn on or off in System ON mode */
#define VMC_RAMC_POWERCLR_S01POWER_Pos (0UL) /*!< Position of S01POWER field. */
#define VMC_RAMC_POWERCLR_S01POWER_Msk (0x1UL << VMC_RAMC_POWERCLR_S01POWER_Pos) /*!< Bit mask of S01POWER field. */
#define VMC_RAMC_POWERCLR_S01POWER_Off (1UL) /*!< Off */

/* Register: VMC_RAMD_POWER */
/* Description: RAM D{n} power control register */

/* Bit 17 : Unused retention bit */
#define VMC_RAMD_POWER_UNUSED_RETENTION1_Pos (17UL) /*!< Position of UNUSED_RETENTION1 field. */
#define VMC_RAMD_POWER_UNUSED_RETENTION1_Msk (0x1UL << VMC_RAMD_POWER_UNUSED_RETENTION1_Pos) /*!< Bit mask of UNUSED_RETENTION1 field. */

/* Bit 16 : Keep retention on RAM sections S0 and S1 of RAM D{n} when RAM section is switched off */
#define VMC_RAMD_POWER_S01RETENTION_Pos (16UL) /*!< Position of S01RETENTION field. */
#define VMC_RAMD_POWER_S01RETENTION_Msk (0x1UL << VMC_RAMD_POWER_S01RETENTION_Pos) /*!< Bit mask of S01RETENTION field. */
#define VMC_RAMD_POWER_S01RETENTION_Off (0UL) /*!< Off */
#define VMC_RAMD_POWER_S01RETENTION_On (1UL) /*!< On */

/* Bit 1 : Unused power bit */
#define VMC_RAMD_POWER_UNUSED_POWER1_Pos (1UL) /*!< Position of UNUSED_POWER1 field. */
#define VMC_RAMD_POWER_UNUSED_POWER1_Msk (0x1UL << VMC_RAMD_POWER_UNUSED_POWER1_Pos) /*!< Bit mask of UNUSED_POWER1 field. */

/* Bit 0 : Keep RAM sections S0 and S1 of RAM D{n} on or off in System ON mode */
#define VMC_RAMD_POWER_S01POWER_Pos (0UL) /*!< Position of S01POWER field. */
#define VMC_RAMD_POWER_S01POWER_Msk (0x1UL << VMC_RAMD_POWER_S01POWER_Pos) /*!< Bit mask of S01POWER field. */
#define VMC_RAMD_POWER_S01POWER_Off (0UL) /*!< Off */
#define VMC_RAMD_POWER_S01POWER_On (1UL) /*!< On */

/* Register: VMC_RAMD_POWERSET */
/* Description: RAM D{n} power control set register */

/* Bit 17 : Unused retention set bit */
#define VMC_RAMD_POWERSET_UNUSED_RETENTION1_Pos (17UL) /*!< Position of UNUSED_RETENTION1 field. */
#define VMC_RAMD_POWERSET_UNUSED_RETENTION1_Msk (0x1UL << VMC_RAMD_POWERSET_UNUSED_RETENTION1_Pos) /*!< Bit mask of UNUSED_RETENTION1 field. */

/* Bit 16 : Keep retention on sections S0 and S1 of RAM of RAM D{n} when RAM section is switched off */
#define VMC_RAMD_POWERSET_S01RETENTION_Pos (16UL) /*!< Position of S01RETENTION field. */
#define VMC_RAMD_POWERSET_S01RETENTION_Msk (0x1UL << VMC_RAMD_POWERSET_S01RETENTION_Pos) /*!< Bit mask of S01RETENTION field. */
#define VMC_RAMD_POWERSET_S01RETENTION_On (1UL) /*!< On */

/* Bit 1 : Unused power set bit */
#define VMC_RAMD_POWERSET_UNUSED_POWER1_Pos (1UL) /*!< Position of UNUSED_POWER1 field. */
#define VMC_RAMD_POWERSET_UNUSED_POWER1_Msk (0x1UL << VMC_RAMD_POWERSET_UNUSED_POWER1_Pos) /*!< Bit mask of UNUSED_POWER1 field. */

/* Bit 0 : Keep RAM sections S0 and S1 of RAM D{n} on or off in System ON mode */
#define VMC_RAMD_POWERSET_S01POWER_Pos (0UL) /*!< Position of S01POWER field. */
#define VMC_RAMD_POWERSET_S01POWER_Msk (0x1UL << VMC_RAMD_POWERSET_S01POWER_Pos) /*!< Bit mask of S01POWER field. */
#define VMC_RAMD_POWERSET_S01POWER_On (1UL) /*!< On */

/* Register: VMC_RAMD_POWERCLR */
/* Description: RAM  D{n} power control clear register */

/* Bit 17 : Unused retention clear bit */
#define VMC_RAMD_POWERCLR_UNUSED_RETENTION1_Pos (17UL) /*!< Position of UNUSED_RETENTION1 field. */
#define VMC_RAMD_POWERCLR_UNUSED_RETENTION1_Msk (0x1UL << VMC_RAMD_POWERCLR_UNUSED_RETENTION1_Pos) /*!< Bit mask of UNUSED_RETENTION1 field. */

/* Bit 16 : Keep retention on RAM sections S0 and S1 of RAM D{n} when RAM section is switched off */
#define VMC_RAMD_POWERCLR_S01RETENTION_Pos (16UL) /*!< Position of S01RETENTION field. */
#define VMC_RAMD_POWERCLR_S01RETENTION_Msk (0x1UL << VMC_RAMD_POWERCLR_S01RETENTION_Pos) /*!< Bit mask of S01RETENTION field. */
#define VMC_RAMD_POWERCLR_S01RETENTION_Off (1UL) /*!< Off */

/* Bit 1 : Unused power clear bit */
#define VMC_RAMD_POWERCLR_UNUSED_POWER1_Pos (1UL) /*!< Position of UNUSED_POWER1 field. */
#define VMC_RAMD_POWERCLR_UNUSED_POWER1_Msk (0x1UL << VMC_RAMD_POWERCLR_UNUSED_POWER1_Pos) /*!< Bit mask of UNUSED_POWER1 field. */

/* Bit 0 : Keep RAM sections S0 and S1 of RAM D{n} on or off in System ON mode */
#define VMC_RAMD_POWERCLR_S01POWER_Pos (0UL) /*!< Position of S01POWER field. */
#define VMC_RAMD_POWERCLR_S01POWER_Msk (0x1UL << VMC_RAMD_POWERCLR_S01POWER_Pos) /*!< Bit mask of S01POWER field. */
#define VMC_RAMD_POWERCLR_S01POWER_Off (1UL) /*!< Off */

/* Register: VMC_SRAMTRIM */
/* Description: Backdoor trim values for SRAM */

/* Bit 6 : Read/Write Margin Adjustment */
#define VMC_SRAMTRIM_RWM_Pos (6UL) /*!< Position of RWM field. */
#define VMC_SRAMTRIM_RWM_Msk (0x1UL << VMC_SRAMTRIM_RWM_Pos) /*!< Bit mask of RWM field. */
#define VMC_SRAMTRIM_RWM_Disabled (0UL) /*!< Disable */
#define VMC_SRAMTRIM_RWM_Enabled (1UL) /*!< Enable */

/* Bit 5 : Read Margin Adjustment */
#define VMC_SRAMTRIM_RM_Pos (5UL) /*!< Position of RM field. */
#define VMC_SRAMTRIM_RM_Msk (0x1UL << VMC_SRAMTRIM_RM_Pos) /*!< Bit mask of RM field. */
#define VMC_SRAMTRIM_RM_Disabled (0UL) /*!< Disable */
#define VMC_SRAMTRIM_RM_Enabled (1UL) /*!< Enable */

/* Bit 4 : Write Margin Adjustment */
#define VMC_SRAMTRIM_WM_Pos (4UL) /*!< Position of WM field. */
#define VMC_SRAMTRIM_WM_Msk (0x1UL << VMC_SRAMTRIM_WM_Pos) /*!< Bit mask of WM field. */
#define VMC_SRAMTRIM_WM_Disabled (0UL) /*!< Disable */
#define VMC_SRAMTRIM_WM_Enabled (1UL) /*!< Enable */

/* Bits 3..0 : Source Bias Trim Adjustment for retention */
#define VMC_SRAMTRIM_BTRIM_Pos (0UL) /*!< Position of BTRIM field. */
#define VMC_SRAMTRIM_BTRIM_Msk (0xFUL << VMC_SRAMTRIM_BTRIM_Pos) /*!< Bit mask of BTRIM field. */

/* Register: VMC_RamSSNonRetTSel */
/* Description: Timing control values for TSMC RAMs */

/* Bits 4..2 : Write cycle timing selection */
#define VMC_RamSSNonRetTSel_WTSEL_Pos (2UL) /*!< Position of WTSEL field. */
#define VMC_RamSSNonRetTSel_WTSEL_Msk (0x7UL << VMC_RamSSNonRetTSel_WTSEL_Pos) /*!< Bit mask of WTSEL field. */

/* Bits 1..0 : Read cycle timing selection */
#define VMC_RamSSNonRetTSel_RTSEL_Pos (0UL) /*!< Position of RTSEL field. */
#define VMC_RamSSNonRetTSel_RTSEL_Msk (0x3UL << VMC_RamSSNonRetTSel_RTSEL_Pos) /*!< Bit mask of RTSEL field. */


/* Peripheral: ZUC */
/* Description: ZUC LTE L2 security IP */

/* Register: ZUC_TASKS_STARTGATHER */
/* Description: Start input DMA */

/* Bit 0 : Start input DMA */
#define ZUC_TASKS_STARTGATHER_TASKS_STARTGATHER_Pos (0UL) /*!< Position of TASKS_STARTGATHER field. */
#define ZUC_TASKS_STARTGATHER_TASKS_STARTGATHER_Msk (0x1UL << ZUC_TASKS_STARTGATHER_TASKS_STARTGATHER_Pos) /*!< Bit mask of TASKS_STARTGATHER field. */
#define ZUC_TASKS_STARTGATHER_TASKS_STARTGATHER_Trigger (1UL) /*!< Trigger task */

/* Register: ZUC_TASKS_STOPGATHER */
/* Description: Stop  input DMA */

/* Bit 0 : Stop  input DMA */
#define ZUC_TASKS_STOPGATHER_TASKS_STOPGATHER_Pos (0UL) /*!< Position of TASKS_STOPGATHER field. */
#define ZUC_TASKS_STOPGATHER_TASKS_STOPGATHER_Msk (0x1UL << ZUC_TASKS_STOPGATHER_TASKS_STOPGATHER_Pos) /*!< Bit mask of TASKS_STOPGATHER field. */
#define ZUC_TASKS_STOPGATHER_TASKS_STOPGATHER_Trigger (1UL) /*!< Trigger task */

/* Register: ZUC_TASKS_STARTSCATTER */
/* Description: Start output DMA */

/* Bit 0 : Start output DMA */
#define ZUC_TASKS_STARTSCATTER_TASKS_STARTSCATTER_Pos (0UL) /*!< Position of TASKS_STARTSCATTER field. */
#define ZUC_TASKS_STARTSCATTER_TASKS_STARTSCATTER_Msk (0x1UL << ZUC_TASKS_STARTSCATTER_TASKS_STARTSCATTER_Pos) /*!< Bit mask of TASKS_STARTSCATTER field. */
#define ZUC_TASKS_STARTSCATTER_TASKS_STARTSCATTER_Trigger (1UL) /*!< Trigger task */

/* Register: ZUC_TASKS_STOPSCATTER */
/* Description: Stop  output DMA */

/* Bit 0 : Stop  output DMA */
#define ZUC_TASKS_STOPSCATTER_TASKS_STOPSCATTER_Pos (0UL) /*!< Position of TASKS_STOPSCATTER field. */
#define ZUC_TASKS_STOPSCATTER_TASKS_STOPSCATTER_Msk (0x1UL << ZUC_TASKS_STOPSCATTER_TASKS_STOPSCATTER_Pos) /*!< Bit mask of TASKS_STOPSCATTER field. */
#define ZUC_TASKS_STOPSCATTER_TASKS_STOPSCATTER_Trigger (1UL) /*!< Trigger task */

/* Register: ZUC_TASKS_INITIALIZEZUC */
/* Description: New keys (and IV) ready to be used, reset keybytes, ivbytes */

/* Bit 0 : New keys (and IV) ready to be used, reset keybytes, ivbytes */
#define ZUC_TASKS_INITIALIZEZUC_TASKS_INITIALIZEZUC_Pos (0UL) /*!< Position of TASKS_INITIALIZEZUC field. */
#define ZUC_TASKS_INITIALIZEZUC_TASKS_INITIALIZEZUC_Msk (0x1UL << ZUC_TASKS_INITIALIZEZUC_TASKS_INITIALIZEZUC_Pos) /*!< Bit mask of TASKS_INITIALIZEZUC field. */
#define ZUC_TASKS_INITIALIZEZUC_TASKS_INITIALIZEZUC_Trigger (1UL) /*!< Trigger task */

/* Register: ZUC_TASKS_STARTOPERATION */
/* Description: Start cipher / MAC calculation depending on MODE */

/* Bit 0 : Start cipher / MAC calculation depending on MODE */
#define ZUC_TASKS_STARTOPERATION_TASKS_STARTOPERATION_Pos (0UL) /*!< Position of TASKS_STARTOPERATION field. */
#define ZUC_TASKS_STARTOPERATION_TASKS_STARTOPERATION_Msk (0x1UL << ZUC_TASKS_STARTOPERATION_TASKS_STARTOPERATION_Pos) /*!< Bit mask of TASKS_STARTOPERATION field. */
#define ZUC_TASKS_STARTOPERATION_TASKS_STARTOPERATION_Trigger (1UL) /*!< Trigger task */

/* Register: ZUC_TASKS_FINALIZEMAC */
/* Description: Finalize MAC calculation */

/* Bit 0 : Finalize MAC calculation */
#define ZUC_TASKS_FINALIZEMAC_TASKS_FINALIZEMAC_Pos (0UL) /*!< Position of TASKS_FINALIZEMAC field. */
#define ZUC_TASKS_FINALIZEMAC_TASKS_FINALIZEMAC_Msk (0x1UL << ZUC_TASKS_FINALIZEMAC_TASKS_FINALIZEMAC_Pos) /*!< Bit mask of TASKS_FINALIZEMAC field. */
#define ZUC_TASKS_FINALIZEMAC_TASKS_FINALIZEMAC_Trigger (1UL) /*!< Trigger task */

/* Register: ZUC_TASKS_RESET */
/* Description: Stop all transfers and crypto operations (initialize) */

/* Bit 0 : Stop all transfers and crypto operations (initialize) */
#define ZUC_TASKS_RESET_TASKS_RESET_Pos (0UL) /*!< Position of TASKS_RESET field. */
#define ZUC_TASKS_RESET_TASKS_RESET_Msk (0x1UL << ZUC_TASKS_RESET_TASKS_RESET_Pos) /*!< Bit mask of TASKS_RESET field. */
#define ZUC_TASKS_RESET_TASKS_RESET_Trigger (1UL) /*!< Trigger task */

/* Register: ZUC_TASKZEROPENALTY_PCP_1 */
/* Description: TaskZeroPenalty register for PCP 1 */

/* Bit 0 : Penalty Level */
#define ZUC_TASKZEROPENALTY_PCP_1_PENALTY_Pos (0UL) /*!< Position of PENALTY field. */
#define ZUC_TASKZEROPENALTY_PCP_1_PENALTY_Msk (0x1UL << ZUC_TASKZEROPENALTY_PCP_1_PENALTY_Pos) /*!< Bit mask of PENALTY field. */
#define ZUC_TASKZEROPENALTY_PCP_1_PENALTY_ZERO (1UL) /*!< Set Zero Penalty */

/* Register: ZUC_TASKFULLPENALTY_PCP_1 */
/* Description: TaskFullPenalty register for PCP 1 */

/* Bit 0 : Penalty Level */
#define ZUC_TASKFULLPENALTY_PCP_1_PENALTY_Pos (0UL) /*!< Position of PENALTY field. */
#define ZUC_TASKFULLPENALTY_PCP_1_PENALTY_Msk (0x1UL << ZUC_TASKFULLPENALTY_PCP_1_PENALTY_Pos) /*!< Bit mask of PENALTY field. */
#define ZUC_TASKFULLPENALTY_PCP_1_PENALTY_FULL (1UL) /*!< Set Full Penalty */

/* Register: ZUC_TASKZEROPENALTY_PCP_0 */
/* Description: TaskZeroPenalty register for PCP 0 */

/* Bit 0 : Penalty Level */
#define ZUC_TASKZEROPENALTY_PCP_0_PENALTY_Pos (0UL) /*!< Position of PENALTY field. */
#define ZUC_TASKZEROPENALTY_PCP_0_PENALTY_Msk (0x1UL << ZUC_TASKZEROPENALTY_PCP_0_PENALTY_Pos) /*!< Bit mask of PENALTY field. */
#define ZUC_TASKZEROPENALTY_PCP_0_PENALTY_ZERO (1UL) /*!< Set Zero Penalty */

/* Register: ZUC_TASKFULLPENALTY_PCP_0 */
/* Description: TaskFullPenalty register for PCP 0 */

/* Bit 0 : Penalty Level */
#define ZUC_TASKFULLPENALTY_PCP_0_PENALTY_Pos (0UL) /*!< Position of PENALTY field. */
#define ZUC_TASKFULLPENALTY_PCP_0_PENALTY_Msk (0x1UL << ZUC_TASKFULLPENALTY_PCP_0_PENALTY_Pos) /*!< Bit mask of PENALTY field. */
#define ZUC_TASKFULLPENALTY_PCP_0_PENALTY_FULL (1UL) /*!< Set Full Penalty */

/* Register: ZUC_EVENTS_GATHERSTARTED */
/* Description: Input DMA started */

/* Bit 0 : Input DMA started */
#define ZUC_EVENTS_GATHERSTARTED_EVENTS_GATHERSTARTED_Pos (0UL) /*!< Position of EVENTS_GATHERSTARTED field. */
#define ZUC_EVENTS_GATHERSTARTED_EVENTS_GATHERSTARTED_Msk (0x1UL << ZUC_EVENTS_GATHERSTARTED_EVENTS_GATHERSTARTED_Pos) /*!< Bit mask of EVENTS_GATHERSTARTED field. */
#define ZUC_EVENTS_GATHERSTARTED_EVENTS_GATHERSTARTED_NotGenerated (0UL) /*!< Event not generated */
#define ZUC_EVENTS_GATHERSTARTED_EVENTS_GATHERSTARTED_Generated (1UL) /*!< Event generated */

/* Register: ZUC_EVENTS_GATHERDONE */
/* Description: Input DMA done */

/* Bit 0 : Input DMA done */
#define ZUC_EVENTS_GATHERDONE_EVENTS_GATHERDONE_Pos (0UL) /*!< Position of EVENTS_GATHERDONE field. */
#define ZUC_EVENTS_GATHERDONE_EVENTS_GATHERDONE_Msk (0x1UL << ZUC_EVENTS_GATHERDONE_EVENTS_GATHERDONE_Pos) /*!< Bit mask of EVENTS_GATHERDONE field. */
#define ZUC_EVENTS_GATHERDONE_EVENTS_GATHERDONE_NotGenerated (0UL) /*!< Event not generated */
#define ZUC_EVENTS_GATHERDONE_EVENTS_GATHERDONE_Generated (1UL) /*!< Event generated */

/* Register: ZUC_EVENTS_SCATTERSTARTED */
/* Description: Output DMA started */

/* Bit 0 : Output DMA started */
#define ZUC_EVENTS_SCATTERSTARTED_EVENTS_SCATTERSTARTED_Pos (0UL) /*!< Position of EVENTS_SCATTERSTARTED field. */
#define ZUC_EVENTS_SCATTERSTARTED_EVENTS_SCATTERSTARTED_Msk (0x1UL << ZUC_EVENTS_SCATTERSTARTED_EVENTS_SCATTERSTARTED_Pos) /*!< Bit mask of EVENTS_SCATTERSTARTED field. */
#define ZUC_EVENTS_SCATTERSTARTED_EVENTS_SCATTERSTARTED_NotGenerated (0UL) /*!< Event not generated */
#define ZUC_EVENTS_SCATTERSTARTED_EVENTS_SCATTERSTARTED_Generated (1UL) /*!< Event generated */

/* Register: ZUC_EVENTS_SCATTERDONE */
/* Description: Output DMA done */

/* Bit 0 : Output DMA done */
#define ZUC_EVENTS_SCATTERDONE_EVENTS_SCATTERDONE_Pos (0UL) /*!< Position of EVENTS_SCATTERDONE field. */
#define ZUC_EVENTS_SCATTERDONE_EVENTS_SCATTERDONE_Msk (0x1UL << ZUC_EVENTS_SCATTERDONE_EVENTS_SCATTERDONE_Pos) /*!< Bit mask of EVENTS_SCATTERDONE field. */
#define ZUC_EVENTS_SCATTERDONE_EVENTS_SCATTERDONE_NotGenerated (0UL) /*!< Event not generated */
#define ZUC_EVENTS_SCATTERDONE_EVENTS_SCATTERDONE_Generated (1UL) /*!< Event generated */

/* Register: ZUC_EVENTS_IVREADY */
/* Description: IV received (ivbytes == 16) */

/* Bit 0 : IV received (ivbytes == 16) */
#define ZUC_EVENTS_IVREADY_EVENTS_IVREADY_Pos (0UL) /*!< Position of EVENTS_IVREADY field. */
#define ZUC_EVENTS_IVREADY_EVENTS_IVREADY_Msk (0x1UL << ZUC_EVENTS_IVREADY_EVENTS_IVREADY_Pos) /*!< Bit mask of EVENTS_IVREADY field. */
#define ZUC_EVENTS_IVREADY_EVENTS_IVREADY_NotGenerated (0UL) /*!< Event not generated */
#define ZUC_EVENTS_IVREADY_EVENTS_IVREADY_Generated (1UL) /*!< Event generated */

/* Register: ZUC_EVENTS_ZUCINITIALIZED */
/* Description: New keys and IV taken into use */

/* Bit 0 : New keys and IV taken into use */
#define ZUC_EVENTS_ZUCINITIALIZED_EVENTS_ZUCINITIALIZED_Pos (0UL) /*!< Position of EVENTS_ZUCINITIALIZED field. */
#define ZUC_EVENTS_ZUCINITIALIZED_EVENTS_ZUCINITIALIZED_Msk (0x1UL << ZUC_EVENTS_ZUCINITIALIZED_EVENTS_ZUCINITIALIZED_Pos) /*!< Bit mask of EVENTS_ZUCINITIALIZED field. */
#define ZUC_EVENTS_ZUCINITIALIZED_EVENTS_ZUCINITIALIZED_NotGenerated (0UL) /*!< Event not generated */
#define ZUC_EVENTS_ZUCINITIALIZED_EVENTS_ZUCINITIALIZED_Generated (1UL) /*!< Event generated */

/* Register: ZUC_EVENTS_MESSAGEREADY */
/* Description: LENGTH == 0 */

/* Bit 0 : LENGTH == 0 */
#define ZUC_EVENTS_MESSAGEREADY_EVENTS_MESSAGEREADY_Pos (0UL) /*!< Position of EVENTS_MESSAGEREADY field. */
#define ZUC_EVENTS_MESSAGEREADY_EVENTS_MESSAGEREADY_Msk (0x1UL << ZUC_EVENTS_MESSAGEREADY_EVENTS_MESSAGEREADY_Pos) /*!< Bit mask of EVENTS_MESSAGEREADY field. */
#define ZUC_EVENTS_MESSAGEREADY_EVENTS_MESSAGEREADY_NotGenerated (0UL) /*!< Event not generated */
#define ZUC_EVENTS_MESSAGEREADY_EVENTS_MESSAGEREADY_Generated (1UL) /*!< Event generated */

/* Register: ZUC_EVENTS_MACREADY */
/* Description: MAC calculated */

/* Bit 0 : MAC calculated */
#define ZUC_EVENTS_MACREADY_EVENTS_MACREADY_Pos (0UL) /*!< Position of EVENTS_MACREADY field. */
#define ZUC_EVENTS_MACREADY_EVENTS_MACREADY_Msk (0x1UL << ZUC_EVENTS_MACREADY_EVENTS_MACREADY_Pos) /*!< Bit mask of EVENTS_MACREADY field. */
#define ZUC_EVENTS_MACREADY_EVENTS_MACREADY_NotGenerated (0UL) /*!< Event not generated */
#define ZUC_EVENTS_MACREADY_EVENTS_MACREADY_Generated (1UL) /*!< Event generated */

/* Register: ZUC_EVENTS_RESETTED */
/* Description: Resetted (all transfers and crypto operations stopped) */

/* Bit 0 : Resetted (all transfers and crypto operations stopped) */
#define ZUC_EVENTS_RESETTED_EVENTS_RESETTED_Pos (0UL) /*!< Position of EVENTS_RESETTED field. */
#define ZUC_EVENTS_RESETTED_EVENTS_RESETTED_Msk (0x1UL << ZUC_EVENTS_RESETTED_EVENTS_RESETTED_Pos) /*!< Bit mask of EVENTS_RESETTED field. */
#define ZUC_EVENTS_RESETTED_EVENTS_RESETTED_NotGenerated (0UL) /*!< Event not generated */
#define ZUC_EVENTS_RESETTED_EVENTS_RESETTED_Generated (1UL) /*!< Event generated */

/* Register: ZUC_SHORTS */
/* Description: Shortcuts between local events and tasks */

/* Bit 6 : Shortcut between event MACREADY and task RESET */
#define ZUC_SHORTS_MACREADY_RESET_Pos (6UL) /*!< Position of MACREADY_RESET field. */
#define ZUC_SHORTS_MACREADY_RESET_Msk (0x1UL << ZUC_SHORTS_MACREADY_RESET_Pos) /*!< Bit mask of MACREADY_RESET field. */
#define ZUC_SHORTS_MACREADY_RESET_Disabled (0UL) /*!< Disable shortcut */
#define ZUC_SHORTS_MACREADY_RESET_Enabled (1UL) /*!< Enable shortcut */

/* Bit 5 : Shortcut between event SCATTERDONE and task RESET */
#define ZUC_SHORTS_SCATTERDONE_RESET_Pos (5UL) /*!< Position of SCATTERDONE_RESET field. */
#define ZUC_SHORTS_SCATTERDONE_RESET_Msk (0x1UL << ZUC_SHORTS_SCATTERDONE_RESET_Pos) /*!< Bit mask of SCATTERDONE_RESET field. */
#define ZUC_SHORTS_SCATTERDONE_RESET_Disabled (0UL) /*!< Disable shortcut */
#define ZUC_SHORTS_SCATTERDONE_RESET_Enabled (1UL) /*!< Enable shortcut */

/* Bit 4 : Shortcut between event ZUCINITIALIZED and task STARTGATHER */
#define ZUC_SHORTS_ZUCINITIALIZED_STARTGATHER_Pos (4UL) /*!< Position of ZUCINITIALIZED_STARTGATHER field. */
#define ZUC_SHORTS_ZUCINITIALIZED_STARTGATHER_Msk (0x1UL << ZUC_SHORTS_ZUCINITIALIZED_STARTGATHER_Pos) /*!< Bit mask of ZUCINITIALIZED_STARTGATHER field. */
#define ZUC_SHORTS_ZUCINITIALIZED_STARTGATHER_Disabled (0UL) /*!< Disable shortcut */
#define ZUC_SHORTS_ZUCINITIALIZED_STARTGATHER_Enabled (1UL) /*!< Enable shortcut */

/* Bit 3 : Shortcut between event MESSAGEREADY and task FINALIZEMAC */
#define ZUC_SHORTS_MESSAGEREADY_FINALIZEMAC_Pos (3UL) /*!< Position of MESSAGEREADY_FINALIZEMAC field. */
#define ZUC_SHORTS_MESSAGEREADY_FINALIZEMAC_Msk (0x1UL << ZUC_SHORTS_MESSAGEREADY_FINALIZEMAC_Pos) /*!< Bit mask of MESSAGEREADY_FINALIZEMAC field. */
#define ZUC_SHORTS_MESSAGEREADY_FINALIZEMAC_Disabled (0UL) /*!< Disable shortcut */
#define ZUC_SHORTS_MESSAGEREADY_FINALIZEMAC_Enabled (1UL) /*!< Enable shortcut */

/* Bit 2 : Shortcut between event ZUCINITIALIZED and task STARTOPERATION */
#define ZUC_SHORTS_ZUCINITIALIZED_STARTOPERATION_Pos (2UL) /*!< Position of ZUCINITIALIZED_STARTOPERATION field. */
#define ZUC_SHORTS_ZUCINITIALIZED_STARTOPERATION_Msk (0x1UL << ZUC_SHORTS_ZUCINITIALIZED_STARTOPERATION_Pos) /*!< Bit mask of ZUCINITIALIZED_STARTOPERATION field. */
#define ZUC_SHORTS_ZUCINITIALIZED_STARTOPERATION_Disabled (0UL) /*!< Disable shortcut */
#define ZUC_SHORTS_ZUCINITIALIZED_STARTOPERATION_Enabled (1UL) /*!< Enable shortcut */

/* Bit 1 : Shortcut between event IVREADY and task INITIALIZEZUC */
#define ZUC_SHORTS_IVREADY_INITIALIZEZUC_Pos (1UL) /*!< Position of IVREADY_INITIALIZEZUC field. */
#define ZUC_SHORTS_IVREADY_INITIALIZEZUC_Msk (0x1UL << ZUC_SHORTS_IVREADY_INITIALIZEZUC_Pos) /*!< Bit mask of IVREADY_INITIALIZEZUC field. */
#define ZUC_SHORTS_IVREADY_INITIALIZEZUC_Disabled (0UL) /*!< Disable shortcut */
#define ZUC_SHORTS_IVREADY_INITIALIZEZUC_Enabled (1UL) /*!< Enable shortcut */

/* Bit 0 : Shortcut between event GATHERSTARTED and task STARTSCATTER */
#define ZUC_SHORTS_GATHERSTARTED_STARTSCATTER_Pos (0UL) /*!< Position of GATHERSTARTED_STARTSCATTER field. */
#define ZUC_SHORTS_GATHERSTARTED_STARTSCATTER_Msk (0x1UL << ZUC_SHORTS_GATHERSTARTED_STARTSCATTER_Pos) /*!< Bit mask of GATHERSTARTED_STARTSCATTER field. */
#define ZUC_SHORTS_GATHERSTARTED_STARTSCATTER_Disabled (0UL) /*!< Disable shortcut */
#define ZUC_SHORTS_GATHERSTARTED_STARTSCATTER_Enabled (1UL) /*!< Enable shortcut */

/* Register: ZUC_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 8 : Enable or disable interrupt for event RESETTED */
#define ZUC_INTEN_RESETTED_Pos (8UL) /*!< Position of RESETTED field. */
#define ZUC_INTEN_RESETTED_Msk (0x1UL << ZUC_INTEN_RESETTED_Pos) /*!< Bit mask of RESETTED field. */
#define ZUC_INTEN_RESETTED_Disabled (0UL) /*!< Disable */
#define ZUC_INTEN_RESETTED_Enabled (1UL) /*!< Enable */

/* Bit 7 : Enable or disable interrupt for event MACREADY */
#define ZUC_INTEN_MACREADY_Pos (7UL) /*!< Position of MACREADY field. */
#define ZUC_INTEN_MACREADY_Msk (0x1UL << ZUC_INTEN_MACREADY_Pos) /*!< Bit mask of MACREADY field. */
#define ZUC_INTEN_MACREADY_Disabled (0UL) /*!< Disable */
#define ZUC_INTEN_MACREADY_Enabled (1UL) /*!< Enable */

/* Bit 6 : Enable or disable interrupt for event MESSAGEREADY */
#define ZUC_INTEN_MESSAGEREADY_Pos (6UL) /*!< Position of MESSAGEREADY field. */
#define ZUC_INTEN_MESSAGEREADY_Msk (0x1UL << ZUC_INTEN_MESSAGEREADY_Pos) /*!< Bit mask of MESSAGEREADY field. */
#define ZUC_INTEN_MESSAGEREADY_Disabled (0UL) /*!< Disable */
#define ZUC_INTEN_MESSAGEREADY_Enabled (1UL) /*!< Enable */

/* Bit 5 : Enable or disable interrupt for event ZUCINITIALIZED */
#define ZUC_INTEN_ZUCINITIALIZED_Pos (5UL) /*!< Position of ZUCINITIALIZED field. */
#define ZUC_INTEN_ZUCINITIALIZED_Msk (0x1UL << ZUC_INTEN_ZUCINITIALIZED_Pos) /*!< Bit mask of ZUCINITIALIZED field. */
#define ZUC_INTEN_ZUCINITIALIZED_Disabled (0UL) /*!< Disable */
#define ZUC_INTEN_ZUCINITIALIZED_Enabled (1UL) /*!< Enable */

/* Bit 4 : Enable or disable interrupt for event IVREADY */
#define ZUC_INTEN_IVREADY_Pos (4UL) /*!< Position of IVREADY field. */
#define ZUC_INTEN_IVREADY_Msk (0x1UL << ZUC_INTEN_IVREADY_Pos) /*!< Bit mask of IVREADY field. */
#define ZUC_INTEN_IVREADY_Disabled (0UL) /*!< Disable */
#define ZUC_INTEN_IVREADY_Enabled (1UL) /*!< Enable */

/* Bit 3 : Enable or disable interrupt for event SCATTERDONE */
#define ZUC_INTEN_SCATTERDONE_Pos (3UL) /*!< Position of SCATTERDONE field. */
#define ZUC_INTEN_SCATTERDONE_Msk (0x1UL << ZUC_INTEN_SCATTERDONE_Pos) /*!< Bit mask of SCATTERDONE field. */
#define ZUC_INTEN_SCATTERDONE_Disabled (0UL) /*!< Disable */
#define ZUC_INTEN_SCATTERDONE_Enabled (1UL) /*!< Enable */

/* Bit 2 : Enable or disable interrupt for event SCATTERSTARTED */
#define ZUC_INTEN_SCATTERSTARTED_Pos (2UL) /*!< Position of SCATTERSTARTED field. */
#define ZUC_INTEN_SCATTERSTARTED_Msk (0x1UL << ZUC_INTEN_SCATTERSTARTED_Pos) /*!< Bit mask of SCATTERSTARTED field. */
#define ZUC_INTEN_SCATTERSTARTED_Disabled (0UL) /*!< Disable */
#define ZUC_INTEN_SCATTERSTARTED_Enabled (1UL) /*!< Enable */

/* Bit 1 : Enable or disable interrupt for event GATHERDONE */
#define ZUC_INTEN_GATHERDONE_Pos (1UL) /*!< Position of GATHERDONE field. */
#define ZUC_INTEN_GATHERDONE_Msk (0x1UL << ZUC_INTEN_GATHERDONE_Pos) /*!< Bit mask of GATHERDONE field. */
#define ZUC_INTEN_GATHERDONE_Disabled (0UL) /*!< Disable */
#define ZUC_INTEN_GATHERDONE_Enabled (1UL) /*!< Enable */

/* Bit 0 : Enable or disable interrupt for event GATHERSTARTED */
#define ZUC_INTEN_GATHERSTARTED_Pos (0UL) /*!< Position of GATHERSTARTED field. */
#define ZUC_INTEN_GATHERSTARTED_Msk (0x1UL << ZUC_INTEN_GATHERSTARTED_Pos) /*!< Bit mask of GATHERSTARTED field. */
#define ZUC_INTEN_GATHERSTARTED_Disabled (0UL) /*!< Disable */
#define ZUC_INTEN_GATHERSTARTED_Enabled (1UL) /*!< Enable */

/* Register: ZUC_INTENSET */
/* Description: Enable interrupt */

/* Bit 8 : Write '1' to enable interrupt for event RESETTED */
#define ZUC_INTENSET_RESETTED_Pos (8UL) /*!< Position of RESETTED field. */
#define ZUC_INTENSET_RESETTED_Msk (0x1UL << ZUC_INTENSET_RESETTED_Pos) /*!< Bit mask of RESETTED field. */
#define ZUC_INTENSET_RESETTED_Disabled (0UL) /*!< Read: Disabled */
#define ZUC_INTENSET_RESETTED_Enabled (1UL) /*!< Read: Enabled */
#define ZUC_INTENSET_RESETTED_Set (1UL) /*!< Enable */

/* Bit 7 : Write '1' to enable interrupt for event MACREADY */
#define ZUC_INTENSET_MACREADY_Pos (7UL) /*!< Position of MACREADY field. */
#define ZUC_INTENSET_MACREADY_Msk (0x1UL << ZUC_INTENSET_MACREADY_Pos) /*!< Bit mask of MACREADY field. */
#define ZUC_INTENSET_MACREADY_Disabled (0UL) /*!< Read: Disabled */
#define ZUC_INTENSET_MACREADY_Enabled (1UL) /*!< Read: Enabled */
#define ZUC_INTENSET_MACREADY_Set (1UL) /*!< Enable */

/* Bit 6 : Write '1' to enable interrupt for event MESSAGEREADY */
#define ZUC_INTENSET_MESSAGEREADY_Pos (6UL) /*!< Position of MESSAGEREADY field. */
#define ZUC_INTENSET_MESSAGEREADY_Msk (0x1UL << ZUC_INTENSET_MESSAGEREADY_Pos) /*!< Bit mask of MESSAGEREADY field. */
#define ZUC_INTENSET_MESSAGEREADY_Disabled (0UL) /*!< Read: Disabled */
#define ZUC_INTENSET_MESSAGEREADY_Enabled (1UL) /*!< Read: Enabled */
#define ZUC_INTENSET_MESSAGEREADY_Set (1UL) /*!< Enable */

/* Bit 5 : Write '1' to enable interrupt for event ZUCINITIALIZED */
#define ZUC_INTENSET_ZUCINITIALIZED_Pos (5UL) /*!< Position of ZUCINITIALIZED field. */
#define ZUC_INTENSET_ZUCINITIALIZED_Msk (0x1UL << ZUC_INTENSET_ZUCINITIALIZED_Pos) /*!< Bit mask of ZUCINITIALIZED field. */
#define ZUC_INTENSET_ZUCINITIALIZED_Disabled (0UL) /*!< Read: Disabled */
#define ZUC_INTENSET_ZUCINITIALIZED_Enabled (1UL) /*!< Read: Enabled */
#define ZUC_INTENSET_ZUCINITIALIZED_Set (1UL) /*!< Enable */

/* Bit 4 : Write '1' to enable interrupt for event IVREADY */
#define ZUC_INTENSET_IVREADY_Pos (4UL) /*!< Position of IVREADY field. */
#define ZUC_INTENSET_IVREADY_Msk (0x1UL << ZUC_INTENSET_IVREADY_Pos) /*!< Bit mask of IVREADY field. */
#define ZUC_INTENSET_IVREADY_Disabled (0UL) /*!< Read: Disabled */
#define ZUC_INTENSET_IVREADY_Enabled (1UL) /*!< Read: Enabled */
#define ZUC_INTENSET_IVREADY_Set (1UL) /*!< Enable */

/* Bit 3 : Write '1' to enable interrupt for event SCATTERDONE */
#define ZUC_INTENSET_SCATTERDONE_Pos (3UL) /*!< Position of SCATTERDONE field. */
#define ZUC_INTENSET_SCATTERDONE_Msk (0x1UL << ZUC_INTENSET_SCATTERDONE_Pos) /*!< Bit mask of SCATTERDONE field. */
#define ZUC_INTENSET_SCATTERDONE_Disabled (0UL) /*!< Read: Disabled */
#define ZUC_INTENSET_SCATTERDONE_Enabled (1UL) /*!< Read: Enabled */
#define ZUC_INTENSET_SCATTERDONE_Set (1UL) /*!< Enable */

/* Bit 2 : Write '1' to enable interrupt for event SCATTERSTARTED */
#define ZUC_INTENSET_SCATTERSTARTED_Pos (2UL) /*!< Position of SCATTERSTARTED field. */
#define ZUC_INTENSET_SCATTERSTARTED_Msk (0x1UL << ZUC_INTENSET_SCATTERSTARTED_Pos) /*!< Bit mask of SCATTERSTARTED field. */
#define ZUC_INTENSET_SCATTERSTARTED_Disabled (0UL) /*!< Read: Disabled */
#define ZUC_INTENSET_SCATTERSTARTED_Enabled (1UL) /*!< Read: Enabled */
#define ZUC_INTENSET_SCATTERSTARTED_Set (1UL) /*!< Enable */

/* Bit 1 : Write '1' to enable interrupt for event GATHERDONE */
#define ZUC_INTENSET_GATHERDONE_Pos (1UL) /*!< Position of GATHERDONE field. */
#define ZUC_INTENSET_GATHERDONE_Msk (0x1UL << ZUC_INTENSET_GATHERDONE_Pos) /*!< Bit mask of GATHERDONE field. */
#define ZUC_INTENSET_GATHERDONE_Disabled (0UL) /*!< Read: Disabled */
#define ZUC_INTENSET_GATHERDONE_Enabled (1UL) /*!< Read: Enabled */
#define ZUC_INTENSET_GATHERDONE_Set (1UL) /*!< Enable */

/* Bit 0 : Write '1' to enable interrupt for event GATHERSTARTED */
#define ZUC_INTENSET_GATHERSTARTED_Pos (0UL) /*!< Position of GATHERSTARTED field. */
#define ZUC_INTENSET_GATHERSTARTED_Msk (0x1UL << ZUC_INTENSET_GATHERSTARTED_Pos) /*!< Bit mask of GATHERSTARTED field. */
#define ZUC_INTENSET_GATHERSTARTED_Disabled (0UL) /*!< Read: Disabled */
#define ZUC_INTENSET_GATHERSTARTED_Enabled (1UL) /*!< Read: Enabled */
#define ZUC_INTENSET_GATHERSTARTED_Set (1UL) /*!< Enable */

/* Register: ZUC_INTENCLR */
/* Description: Disable interrupt */

/* Bit 8 : Write '1' to disable interrupt for event RESETTED */
#define ZUC_INTENCLR_RESETTED_Pos (8UL) /*!< Position of RESETTED field. */
#define ZUC_INTENCLR_RESETTED_Msk (0x1UL << ZUC_INTENCLR_RESETTED_Pos) /*!< Bit mask of RESETTED field. */
#define ZUC_INTENCLR_RESETTED_Disabled (0UL) /*!< Read: Disabled */
#define ZUC_INTENCLR_RESETTED_Enabled (1UL) /*!< Read: Enabled */
#define ZUC_INTENCLR_RESETTED_Clear (1UL) /*!< Disable */

/* Bit 7 : Write '1' to disable interrupt for event MACREADY */
#define ZUC_INTENCLR_MACREADY_Pos (7UL) /*!< Position of MACREADY field. */
#define ZUC_INTENCLR_MACREADY_Msk (0x1UL << ZUC_INTENCLR_MACREADY_Pos) /*!< Bit mask of MACREADY field. */
#define ZUC_INTENCLR_MACREADY_Disabled (0UL) /*!< Read: Disabled */
#define ZUC_INTENCLR_MACREADY_Enabled (1UL) /*!< Read: Enabled */
#define ZUC_INTENCLR_MACREADY_Clear (1UL) /*!< Disable */

/* Bit 6 : Write '1' to disable interrupt for event MESSAGEREADY */
#define ZUC_INTENCLR_MESSAGEREADY_Pos (6UL) /*!< Position of MESSAGEREADY field. */
#define ZUC_INTENCLR_MESSAGEREADY_Msk (0x1UL << ZUC_INTENCLR_MESSAGEREADY_Pos) /*!< Bit mask of MESSAGEREADY field. */
#define ZUC_INTENCLR_MESSAGEREADY_Disabled (0UL) /*!< Read: Disabled */
#define ZUC_INTENCLR_MESSAGEREADY_Enabled (1UL) /*!< Read: Enabled */
#define ZUC_INTENCLR_MESSAGEREADY_Clear (1UL) /*!< Disable */

/* Bit 5 : Write '1' to disable interrupt for event ZUCINITIALIZED */
#define ZUC_INTENCLR_ZUCINITIALIZED_Pos (5UL) /*!< Position of ZUCINITIALIZED field. */
#define ZUC_INTENCLR_ZUCINITIALIZED_Msk (0x1UL << ZUC_INTENCLR_ZUCINITIALIZED_Pos) /*!< Bit mask of ZUCINITIALIZED field. */
#define ZUC_INTENCLR_ZUCINITIALIZED_Disabled (0UL) /*!< Read: Disabled */
#define ZUC_INTENCLR_ZUCINITIALIZED_Enabled (1UL) /*!< Read: Enabled */
#define ZUC_INTENCLR_ZUCINITIALIZED_Clear (1UL) /*!< Disable */

/* Bit 4 : Write '1' to disable interrupt for event IVREADY */
#define ZUC_INTENCLR_IVREADY_Pos (4UL) /*!< Position of IVREADY field. */
#define ZUC_INTENCLR_IVREADY_Msk (0x1UL << ZUC_INTENCLR_IVREADY_Pos) /*!< Bit mask of IVREADY field. */
#define ZUC_INTENCLR_IVREADY_Disabled (0UL) /*!< Read: Disabled */
#define ZUC_INTENCLR_IVREADY_Enabled (1UL) /*!< Read: Enabled */
#define ZUC_INTENCLR_IVREADY_Clear (1UL) /*!< Disable */

/* Bit 3 : Write '1' to disable interrupt for event SCATTERDONE */
#define ZUC_INTENCLR_SCATTERDONE_Pos (3UL) /*!< Position of SCATTERDONE field. */
#define ZUC_INTENCLR_SCATTERDONE_Msk (0x1UL << ZUC_INTENCLR_SCATTERDONE_Pos) /*!< Bit mask of SCATTERDONE field. */
#define ZUC_INTENCLR_SCATTERDONE_Disabled (0UL) /*!< Read: Disabled */
#define ZUC_INTENCLR_SCATTERDONE_Enabled (1UL) /*!< Read: Enabled */
#define ZUC_INTENCLR_SCATTERDONE_Clear (1UL) /*!< Disable */

/* Bit 2 : Write '1' to disable interrupt for event SCATTERSTARTED */
#define ZUC_INTENCLR_SCATTERSTARTED_Pos (2UL) /*!< Position of SCATTERSTARTED field. */
#define ZUC_INTENCLR_SCATTERSTARTED_Msk (0x1UL << ZUC_INTENCLR_SCATTERSTARTED_Pos) /*!< Bit mask of SCATTERSTARTED field. */
#define ZUC_INTENCLR_SCATTERSTARTED_Disabled (0UL) /*!< Read: Disabled */
#define ZUC_INTENCLR_SCATTERSTARTED_Enabled (1UL) /*!< Read: Enabled */
#define ZUC_INTENCLR_SCATTERSTARTED_Clear (1UL) /*!< Disable */

/* Bit 1 : Write '1' to disable interrupt for event GATHERDONE */
#define ZUC_INTENCLR_GATHERDONE_Pos (1UL) /*!< Position of GATHERDONE field. */
#define ZUC_INTENCLR_GATHERDONE_Msk (0x1UL << ZUC_INTENCLR_GATHERDONE_Pos) /*!< Bit mask of GATHERDONE field. */
#define ZUC_INTENCLR_GATHERDONE_Disabled (0UL) /*!< Read: Disabled */
#define ZUC_INTENCLR_GATHERDONE_Enabled (1UL) /*!< Read: Enabled */
#define ZUC_INTENCLR_GATHERDONE_Clear (1UL) /*!< Disable */

/* Bit 0 : Write '1' to disable interrupt for event GATHERSTARTED */
#define ZUC_INTENCLR_GATHERSTARTED_Pos (0UL) /*!< Position of GATHERSTARTED field. */
#define ZUC_INTENCLR_GATHERSTARTED_Msk (0x1UL << ZUC_INTENCLR_GATHERSTARTED_Pos) /*!< Bit mask of GATHERSTARTED field. */
#define ZUC_INTENCLR_GATHERSTARTED_Disabled (0UL) /*!< Read: Disabled */
#define ZUC_INTENCLR_GATHERSTARTED_Enabled (1UL) /*!< Read: Enabled */
#define ZUC_INTENCLR_GATHERSTARTED_Clear (1UL) /*!< Disable */

/* Register: ZUC_INTPEND */
/* Description: Pending interrupts */

/* Bit 8 : Read pending status of interrupt for event RESETTED */
#define ZUC_INTPEND_RESETTED_Pos (8UL) /*!< Position of RESETTED field. */
#define ZUC_INTPEND_RESETTED_Msk (0x1UL << ZUC_INTPEND_RESETTED_Pos) /*!< Bit mask of RESETTED field. */
#define ZUC_INTPEND_RESETTED_NotPending (0UL) /*!< Read: Not pending */
#define ZUC_INTPEND_RESETTED_Pending (1UL) /*!< Read: Pending */

/* Bit 7 : Read pending status of interrupt for event MACREADY */
#define ZUC_INTPEND_MACREADY_Pos (7UL) /*!< Position of MACREADY field. */
#define ZUC_INTPEND_MACREADY_Msk (0x1UL << ZUC_INTPEND_MACREADY_Pos) /*!< Bit mask of MACREADY field. */
#define ZUC_INTPEND_MACREADY_NotPending (0UL) /*!< Read: Not pending */
#define ZUC_INTPEND_MACREADY_Pending (1UL) /*!< Read: Pending */

/* Bit 6 : Read pending status of interrupt for event MESSAGEREADY */
#define ZUC_INTPEND_MESSAGEREADY_Pos (6UL) /*!< Position of MESSAGEREADY field. */
#define ZUC_INTPEND_MESSAGEREADY_Msk (0x1UL << ZUC_INTPEND_MESSAGEREADY_Pos) /*!< Bit mask of MESSAGEREADY field. */
#define ZUC_INTPEND_MESSAGEREADY_NotPending (0UL) /*!< Read: Not pending */
#define ZUC_INTPEND_MESSAGEREADY_Pending (1UL) /*!< Read: Pending */

/* Bit 5 : Read pending status of interrupt for event ZUCINITIALIZED */
#define ZUC_INTPEND_ZUCINITIALIZED_Pos (5UL) /*!< Position of ZUCINITIALIZED field. */
#define ZUC_INTPEND_ZUCINITIALIZED_Msk (0x1UL << ZUC_INTPEND_ZUCINITIALIZED_Pos) /*!< Bit mask of ZUCINITIALIZED field. */
#define ZUC_INTPEND_ZUCINITIALIZED_NotPending (0UL) /*!< Read: Not pending */
#define ZUC_INTPEND_ZUCINITIALIZED_Pending (1UL) /*!< Read: Pending */

/* Bit 4 : Read pending status of interrupt for event IVREADY */
#define ZUC_INTPEND_IVREADY_Pos (4UL) /*!< Position of IVREADY field. */
#define ZUC_INTPEND_IVREADY_Msk (0x1UL << ZUC_INTPEND_IVREADY_Pos) /*!< Bit mask of IVREADY field. */
#define ZUC_INTPEND_IVREADY_NotPending (0UL) /*!< Read: Not pending */
#define ZUC_INTPEND_IVREADY_Pending (1UL) /*!< Read: Pending */

/* Bit 3 : Read pending status of interrupt for event SCATTERDONE */
#define ZUC_INTPEND_SCATTERDONE_Pos (3UL) /*!< Position of SCATTERDONE field. */
#define ZUC_INTPEND_SCATTERDONE_Msk (0x1UL << ZUC_INTPEND_SCATTERDONE_Pos) /*!< Bit mask of SCATTERDONE field. */
#define ZUC_INTPEND_SCATTERDONE_NotPending (0UL) /*!< Read: Not pending */
#define ZUC_INTPEND_SCATTERDONE_Pending (1UL) /*!< Read: Pending */

/* Bit 2 : Read pending status of interrupt for event SCATTERSTARTED */
#define ZUC_INTPEND_SCATTERSTARTED_Pos (2UL) /*!< Position of SCATTERSTARTED field. */
#define ZUC_INTPEND_SCATTERSTARTED_Msk (0x1UL << ZUC_INTPEND_SCATTERSTARTED_Pos) /*!< Bit mask of SCATTERSTARTED field. */
#define ZUC_INTPEND_SCATTERSTARTED_NotPending (0UL) /*!< Read: Not pending */
#define ZUC_INTPEND_SCATTERSTARTED_Pending (1UL) /*!< Read: Pending */

/* Bit 1 : Read pending status of interrupt for event GATHERDONE */
#define ZUC_INTPEND_GATHERDONE_Pos (1UL) /*!< Position of GATHERDONE field. */
#define ZUC_INTPEND_GATHERDONE_Msk (0x1UL << ZUC_INTPEND_GATHERDONE_Pos) /*!< Bit mask of GATHERDONE field. */
#define ZUC_INTPEND_GATHERDONE_NotPending (0UL) /*!< Read: Not pending */
#define ZUC_INTPEND_GATHERDONE_Pending (1UL) /*!< Read: Pending */

/* Bit 0 : Read pending status of interrupt for event GATHERSTARTED */
#define ZUC_INTPEND_GATHERSTARTED_Pos (0UL) /*!< Position of GATHERSTARTED field. */
#define ZUC_INTPEND_GATHERSTARTED_Msk (0x1UL << ZUC_INTPEND_GATHERSTARTED_Pos) /*!< Bit mask of GATHERSTARTED field. */
#define ZUC_INTPEND_GATHERSTARTED_NotPending (0UL) /*!< Read: Not pending */
#define ZUC_INTPEND_GATHERSTARTED_Pending (1UL) /*!< Read: Pending */

/* Register: ZUC_LENGTH */
/* Description: Keystream length in bits (Cipher), message length in bits (MAC) */

/* Bits 31..0 : Stream/message length */
#define ZUC_LENGTH_LENGTH_Pos (0UL) /*!< Position of LENGTH field. */
#define ZUC_LENGTH_LENGTH_Msk (0xFFFFFFFFUL << ZUC_LENGTH_LENGTH_Pos) /*!< Bit mask of LENGTH field. */

/* Register: ZUC_MODE */
/* Description: Mode select */

/* Bit 0 : Mode select. */
#define ZUC_MODE_MODE_Pos (0UL) /*!< Position of MODE field. */
#define ZUC_MODE_MODE_Msk (0x1UL << ZUC_MODE_MODE_Pos) /*!< Bit mask of MODE field. */
#define ZUC_MODE_MODE_CIPHER (0UL) /*!< Data cipher mode */
#define ZUC_MODE_MODE_MAC (1UL) /*!< MAC mode. */

/* Register: ZUC_MAC */
/* Description: Message Authentication Code. */

/* Bits 31..0 : Calculated MAC. */
#define ZUC_MAC_MAC_Pos (0UL) /*!< Position of MAC field. */
#define ZUC_MAC_MAC_Msk (0xFFFFFFFFUL << ZUC_MAC_MAC_Pos) /*!< Bit mask of MAC field. */

/* Register: ZUC_INDCP_MEMORY_ADDR */
/* Description: Pointer to input DMA scatter and gather job list (Write) / current output job address (Read) */

/* Bits 31..0 : Scatter and gather input job pointer / current input job address. */
#define ZUC_INDCP_MEMORY_ADDR_MEMORY_ADDR_Pos (0UL) /*!< Position of MEMORY_ADDR field. */
#define ZUC_INDCP_MEMORY_ADDR_MEMORY_ADDR_Msk (0xFFFFFFFFUL << ZUC_INDCP_MEMORY_ADDR_MEMORY_ADDR_Pos) /*!< Bit mask of MEMORY_ADDR field. */

/* Register: ZUC_OUTDCP_MEMORY_ADDR */
/* Description: Pointer to output DMA scatter and gather job list (Write) / current output job address (Read) */

/* Bits 31..0 : Scatter and gather output job pointer / current output job address. */
#define ZUC_OUTDCP_MEMORY_ADDR_MEMORY_ADDR_Pos (0UL) /*!< Position of MEMORY_ADDR field. */
#define ZUC_OUTDCP_MEMORY_ADDR_MEMORY_ADDR_Msk (0xFFFFFFFFUL << ZUC_OUTDCP_MEMORY_ADDR_MEMORY_ADDR_Pos) /*!< Bit mask of MEMORY_ADDR field. */

/* Register: ZUC_PENALTY_REG */
/* Description: Description collection: Penalty register for PCP n */

/* Bits 1..0 : Penalty Level */
#define ZUC_PENALTY_REG_Penalty_Pos (0UL) /*!< Position of Penalty field. */
#define ZUC_PENALTY_REG_Penalty_Msk (0x3UL << ZUC_PENALTY_REG_Penalty_Pos) /*!< Bit mask of Penalty field. */
#define ZUC_PENALTY_REG_Penalty_Full (0UL) /*!< Auto 0) Full penalty) */
#define ZUC_PENALTY_REG_Penalty_Semi1 (1UL) /*!< (Auto 1)  Semi (power on, clock off) */
#define ZUC_PENALTY_REG_Penalty_Semi2 (2UL) /*!< (Auto 2) Semi (power on, clock core on, clock buffer off) */
#define ZUC_PENALTY_REG_Penalty_Zero (3UL) /*!< (Auto 3)  Zero penalty */

/* Register: ZUC_FORCE_OVERRIDE */
/* Description: Description collection: Force override register for PCP n */

/* Bit 15 :   */
#define ZUC_FORCE_OVERRIDE_DISABLE_Pos (15UL) /*!< Position of DISABLE field. */
#define ZUC_FORCE_OVERRIDE_DISABLE_Msk (0x1UL << ZUC_FORCE_OVERRIDE_DISABLE_Pos) /*!< Bit mask of DISABLE field. */
#define ZUC_FORCE_OVERRIDE_DISABLE_DISABLE (0UL) /*!< all forcing disabled */
#define ZUC_FORCE_OVERRIDE_DISABLE_ENABLE (1UL) /*!< all forcing enabled */

/* Bit 9 :   */
#define ZUC_FORCE_OVERRIDE_CORE_POWER_REQUEST_Pos (9UL) /*!< Position of CORE_POWER_REQUEST field. */
#define ZUC_FORCE_OVERRIDE_CORE_POWER_REQUEST_Msk (0x1UL << ZUC_FORCE_OVERRIDE_CORE_POWER_REQUEST_Pos) /*!< Bit mask of CORE_POWER_REQUEST field. */
#define ZUC_FORCE_OVERRIDE_CORE_POWER_REQUEST_REQ0 (0UL) /*!< powerRequest.core = 0 */
#define ZUC_FORCE_OVERRIDE_CORE_POWER_REQUEST_REQ1 (1UL) /*!< powerRequest.core = 1 */

/* Bit 8 :   */
#define ZUC_FORCE_OVERRIDE_SWITCH_POWER_REQUEST_Pos (8UL) /*!< Position of SWITCH_POWER_REQUEST field. */
#define ZUC_FORCE_OVERRIDE_SWITCH_POWER_REQUEST_Msk (0x1UL << ZUC_FORCE_OVERRIDE_SWITCH_POWER_REQUEST_Pos) /*!< Bit mask of SWITCH_POWER_REQUEST field. */
#define ZUC_FORCE_OVERRIDE_SWITCH_POWER_REQUEST_REQ0 (0UL) /*!< powerRequest.switch = 0 */
#define ZUC_FORCE_OVERRIDE_SWITCH_POWER_REQUEST_REQ1 (1UL) /*!< powerRequest.switch = 1 */

/* Bit 7 :   */
#define ZUC_FORCE_OVERRIDE_CLOCK_FORCING_Pos (7UL) /*!< Position of CLOCK_FORCING field. */
#define ZUC_FORCE_OVERRIDE_CLOCK_FORCING_Msk (0x1UL << ZUC_FORCE_OVERRIDE_CLOCK_FORCING_Pos) /*!< Bit mask of CLOCK_FORCING field. */
#define ZUC_FORCE_OVERRIDE_CLOCK_FORCING_FORCE0 (0UL) /*!< All clock forcing  disabled */
#define ZUC_FORCE_OVERRIDE_CLOCK_FORCING_FORCE1 (1UL) /*!< All clock forcing  enabled */

/* Bit 3 :   */
#define ZUC_FORCE_OVERRIDE_CORE_CLOCK_REQUEST_Pos (3UL) /*!< Position of CORE_CLOCK_REQUEST field. */
#define ZUC_FORCE_OVERRIDE_CORE_CLOCK_REQUEST_Msk (0x1UL << ZUC_FORCE_OVERRIDE_CORE_CLOCK_REQUEST_Pos) /*!< Bit mask of CORE_CLOCK_REQUEST field. */
#define ZUC_FORCE_OVERRIDE_CORE_CLOCK_REQUEST_REQ0 (0UL) /*!< clockRequest.core = 0 */
#define ZUC_FORCE_OVERRIDE_CORE_CLOCK_REQUEST_REQ1 (1UL) /*!< clockRequest.core = 1 */

/* Bit 2 :   */
#define ZUC_FORCE_OVERRIDE_CLOCK_BUFFER_REQUEST_Pos (2UL) /*!< Position of CLOCK_BUFFER_REQUEST field. */
#define ZUC_FORCE_OVERRIDE_CLOCK_BUFFER_REQUEST_Msk (0x1UL << ZUC_FORCE_OVERRIDE_CLOCK_BUFFER_REQUEST_Pos) /*!< Bit mask of CLOCK_BUFFER_REQUEST field. */
#define ZUC_FORCE_OVERRIDE_CLOCK_BUFFER_REQUEST_REQ0 (0UL) /*!< clockRequest.buff = 0 */
#define ZUC_FORCE_OVERRIDE_CLOCK_BUFFER_REQUEST_REQ1 (1UL) /*!< clockRequest.buff = 1 */

/* Bit 1 :   */
#define ZUC_FORCE_OVERRIDE_CLOCK_SWITCH_REQUEST_Pos (1UL) /*!< Position of CLOCK_SWITCH_REQUEST field. */
#define ZUC_FORCE_OVERRIDE_CLOCK_SWITCH_REQUEST_Msk (0x1UL << ZUC_FORCE_OVERRIDE_CLOCK_SWITCH_REQUEST_Pos) /*!< Bit mask of CLOCK_SWITCH_REQUEST field. */
#define ZUC_FORCE_OVERRIDE_CLOCK_SWITCH_REQUEST_REQ0 (0UL) /*!< clockRequest.switch = 0 */
#define ZUC_FORCE_OVERRIDE_CLOCK_SWITCH_REQUEST_REQ1 (1UL) /*!< clockRequest.switch = 1 */

/* Bit 0 :   */
#define ZUC_FORCE_OVERRIDE_CLOCK_SWITCH_REQUEST_A_Pos (0UL) /*!< Position of CLOCK_SWITCH_REQUEST_A field. */
#define ZUC_FORCE_OVERRIDE_CLOCK_SWITCH_REQUEST_A_Msk (0x1UL << ZUC_FORCE_OVERRIDE_CLOCK_SWITCH_REQUEST_A_Pos) /*!< Bit mask of CLOCK_SWITCH_REQUEST_A field. */
#define ZUC_FORCE_OVERRIDE_CLOCK_SWITCH_REQUEST_A_REQ0 (0UL) /*!< clockRequest.switch_a = 0 */
#define ZUC_FORCE_OVERRIDE_CLOCK_SWITCH_REQUEST_A_REQ1 (1UL) /*!< clockRequest.switch_a = 1 */

/* Register: ZUC_TURN_OFF_AUTO_CLOCKSOURCE_REQ */
/* Description: Turn of the automatic clock request. */

/* Bit 1 :   */
#define ZUC_TURN_OFF_AUTO_CLOCKSOURCE_REQ_CLOCK_START_PCP_1_Pos (1UL) /*!< Position of CLOCK_START_PCP_1 field. */
#define ZUC_TURN_OFF_AUTO_CLOCKSOURCE_REQ_CLOCK_START_PCP_1_Msk (0x1UL << ZUC_TURN_OFF_AUTO_CLOCKSOURCE_REQ_CLOCK_START_PCP_1_Pos) /*!< Bit mask of CLOCK_START_PCP_1 field. */
#define ZUC_TURN_OFF_AUTO_CLOCKSOURCE_REQ_CLOCK_START_PCP_1_NORMAL_1 (0UL) /*!< normal clock start for PCP 1 */
#define ZUC_TURN_OFF_AUTO_CLOCKSOURCE_REQ_CLOCK_START_PCP_1_OFF_1 (1UL) /*!< turn off normal clock start for PCP 1 */

/* Bit 0 :   */
#define ZUC_TURN_OFF_AUTO_CLOCKSOURCE_REQ_CLOCK_START_PCP_0_Pos (0UL) /*!< Position of CLOCK_START_PCP_0 field. */
#define ZUC_TURN_OFF_AUTO_CLOCKSOURCE_REQ_CLOCK_START_PCP_0_Msk (0x1UL << ZUC_TURN_OFF_AUTO_CLOCKSOURCE_REQ_CLOCK_START_PCP_0_Pos) /*!< Bit mask of CLOCK_START_PCP_0 field. */
#define ZUC_TURN_OFF_AUTO_CLOCKSOURCE_REQ_CLOCK_START_PCP_0_NORMAL_0 (0UL) /*!< normal clock start for PCP 0 */
#define ZUC_TURN_OFF_AUTO_CLOCKSOURCE_REQ_CLOCK_START_PCP_0_OFF_0 (1UL) /*!< turn off normal clock start for PCP 0 */


/*lint --flb "Leave library region" */
#endif
