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

#ifndef __NRF9120_MODEM_BITS_H
#define __NRF9120_MODEM_BITS_H

/*lint ++flb "Enter library region" */

/* Peripheral: ACL */
/* Description: Access control lists */

/* Register: ACL_ACL_ADDR */
/* Description: Description cluster: Configure the word-aligned start address of region n to protect */

/* Bits 31..0 : Valid word-aligned start address of region n to protect. Address must point to a flash page boundary. */
#define ACL_ACL_ADDR_ADDR_Pos (0UL) /*!< Position of ADDR field. */
#define ACL_ACL_ADDR_ADDR_Msk (0xFFFFFFFFUL << ACL_ACL_ADDR_ADDR_Pos) /*!< Bit mask of ADDR field. */

/* Register: ACL_ACL_SIZE */
/* Description: Description cluster: Size of region to protect counting from address ACL[n].ADDR. Write '0' as no effect. */

/* Bits 31..0 : Size of flash region n in bytes. Must be a multiple of the flash page size, and the maximum region size is limited to 512kB. */
#define ACL_ACL_SIZE_SIZE_Pos (0UL) /*!< Position of SIZE field. */
#define ACL_ACL_SIZE_SIZE_Msk (0xFFFFFFFFUL << ACL_ACL_SIZE_SIZE_Pos) /*!< Bit mask of SIZE field. */

/* Register: ACL_ACL_PERM */
/* Description: Description cluster: Access permissions for region n as defined by start address ACL[n].ADDR and size ACL[n].SIZE */

/* Bit 2 : Configure read permissions for region n. Write '0' has no effect. */
#define ACL_ACL_PERM_READ_Pos (2UL) /*!< Position of READ field. */
#define ACL_ACL_PERM_READ_Msk (0x1UL << ACL_ACL_PERM_READ_Pos) /*!< Bit mask of READ field. */
#define ACL_ACL_PERM_READ_Enable (0UL) /*!< Allow read instructions to region n */
#define ACL_ACL_PERM_READ_Disable (1UL) /*!< Block read instructions to region n */

/* Bit 1 : Configure write and erase permissions for region n. Write '0' has no effect. */
#define ACL_ACL_PERM_WRITE_Pos (1UL) /*!< Position of WRITE field. */
#define ACL_ACL_PERM_WRITE_Msk (0x1UL << ACL_ACL_PERM_WRITE_Pos) /*!< Bit mask of WRITE field. */
#define ACL_ACL_PERM_WRITE_Enable (0UL) /*!< Allow write and erase instructions to region n */
#define ACL_ACL_PERM_WRITE_Disable (1UL) /*!< Block write and erase instructions to region n */


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


/* Peripheral: AMLI */
/* Description: AHB Multi-Layer Interface */

/* Register: AMLI_RAMPRI_CPU */
/* Description: AHB bus master priority register for CPU */

/* Bit 0 : Priority register for RAM AHB slaves */
#define AMLI_RAMPRI_CPU_RAM_0_Pos (0UL) /*!< Position of RAM_0 field. */
#define AMLI_RAMPRI_CPU_RAM_0_Msk (0x1UL << AMLI_RAMPRI_CPU_RAM_0_Pos) /*!< Bit mask of RAM_0 field. */
#define AMLI_RAMPRI_CPU_RAM_0_Pri0 (0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_CPU_RAM_0_Pri1 (1UL) /*!< Priority 1 */

/* Register: AMLI_RAMPRI_EXTRAM */
/* Description: Description collection: AHB bus master priority register for external RAM slave port (EXTRAMs) */

/* Bit 0 : Priority register for RAM AHB slaves */
#define AMLI_RAMPRI_EXTRAM_RAM_0_Pos (0UL) /*!< Position of RAM_0 field. */
#define AMLI_RAMPRI_EXTRAM_RAM_0_Msk (0x1UL << AMLI_RAMPRI_EXTRAM_RAM_0_Pos) /*!< Bit mask of RAM_0 field. */
#define AMLI_RAMPRI_EXTRAM_RAM_0_Pri0 (0UL) /*!< Priority 0 */
#define AMLI_RAMPRI_EXTRAM_RAM_0_Pri1 (1UL) /*!< Priority 1 */


/* Peripheral: BBPLL */
/* Description: Base Band  PLL */

/* Register: BBPLL_FREQ */
/* Description: Frequency selection */

/* Bits 2..0 : Frequency selection */
#define BBPLL_FREQ_FREQ_Pos (0UL) /*!< Position of FREQ field. */
#define BBPLL_FREQ_FREQ_Msk (0x7UL << BBPLL_FREQ_FREQ_Pos) /*!< Bit mask of FREQ field. */
#define BBPLL_FREQ_FREQ_128 (0UL) /*!< 128 MHz */
#define BBPLL_FREQ_FREQ_144 (1UL) /*!< 144 MHz */
#define BBPLL_FREQ_FREQ_160 (2UL) /*!< 160 MHz (default) */
#define BBPLL_FREQ_FREQ_176 (3UL) /*!< 176 MHz */
#define BBPLL_FREQ_FREQ_192 (4UL) /*!< 192 MHz */


/* Peripheral: CLOCK */
/* Description: Clock Management */

/* Register: CLOCK_TASKS_HFCLKSTART */
/* Description: Start HFCLK crystal oscillator */

/* Bit 0 : Start HFCLK crystal oscillator */
#define CLOCK_TASKS_HFCLKSTART_TASKS_HFCLKSTART_Pos (0UL) /*!< Position of TASKS_HFCLKSTART field. */
#define CLOCK_TASKS_HFCLKSTART_TASKS_HFCLKSTART_Msk (0x1UL << CLOCK_TASKS_HFCLKSTART_TASKS_HFCLKSTART_Pos) /*!< Bit mask of TASKS_HFCLKSTART field. */
#define CLOCK_TASKS_HFCLKSTART_TASKS_HFCLKSTART_Trigger (1UL) /*!< Trigger task */

/* Register: CLOCK_TASKS_HFCLKSTOP */
/* Description: Stop HFCLK crystal oscillator */

/* Bit 0 : Stop HFCLK crystal oscillator */
#define CLOCK_TASKS_HFCLKSTOP_TASKS_HFCLKSTOP_Pos (0UL) /*!< Position of TASKS_HFCLKSTOP field. */
#define CLOCK_TASKS_HFCLKSTOP_TASKS_HFCLKSTOP_Msk (0x1UL << CLOCK_TASKS_HFCLKSTOP_TASKS_HFCLKSTOP_Pos) /*!< Bit mask of TASKS_HFCLKSTOP field. */
#define CLOCK_TASKS_HFCLKSTOP_TASKS_HFCLKSTOP_Trigger (1UL) /*!< Trigger task */

/* Register: CLOCK_TASKS_LFCLKSTART */
/* Description: Start LFCLK source */

/* Bit 0 : Start LFCLK source */
#define CLOCK_TASKS_LFCLKSTART_TASKS_LFCLKSTART_Pos (0UL) /*!< Position of TASKS_LFCLKSTART field. */
#define CLOCK_TASKS_LFCLKSTART_TASKS_LFCLKSTART_Msk (0x1UL << CLOCK_TASKS_LFCLKSTART_TASKS_LFCLKSTART_Pos) /*!< Bit mask of TASKS_LFCLKSTART field. */
#define CLOCK_TASKS_LFCLKSTART_TASKS_LFCLKSTART_Trigger (1UL) /*!< Trigger task */

/* Register: CLOCK_TASKS_LFCLKSTOP */
/* Description: Stop LFCLK source */

/* Bit 0 : Stop LFCLK source */
#define CLOCK_TASKS_LFCLKSTOP_TASKS_LFCLKSTOP_Pos (0UL) /*!< Position of TASKS_LFCLKSTOP field. */
#define CLOCK_TASKS_LFCLKSTOP_TASKS_LFCLKSTOP_Msk (0x1UL << CLOCK_TASKS_LFCLKSTOP_TASKS_LFCLKSTOP_Pos) /*!< Bit mask of TASKS_LFCLKSTOP field. */
#define CLOCK_TASKS_LFCLKSTOP_TASKS_LFCLKSTOP_Trigger (1UL) /*!< Trigger task */

/* Register: CLOCK_TASKS_CAL */
/* Description: Start RCOSC32k calibration */

/* Bit 0 : Start RCOSC32k calibration */
#define CLOCK_TASKS_CAL_TASKS_CAL_Pos (0UL) /*!< Position of TASKS_CAL field. */
#define CLOCK_TASKS_CAL_TASKS_CAL_Msk (0x1UL << CLOCK_TASKS_CAL_TASKS_CAL_Pos) /*!< Bit mask of TASKS_CAL field. */
#define CLOCK_TASKS_CAL_TASKS_CAL_Trigger (1UL) /*!< Trigger task */

/* Register: CLOCK_EVENTS_HFCLKSTARTED */
/* Description: HFCLK oscillator started */

/* Bit 0 : HFCLK oscillator started */
#define CLOCK_EVENTS_HFCLKSTARTED_EVENTS_HFCLKSTARTED_Pos (0UL) /*!< Position of EVENTS_HFCLKSTARTED field. */
#define CLOCK_EVENTS_HFCLKSTARTED_EVENTS_HFCLKSTARTED_Msk (0x1UL << CLOCK_EVENTS_HFCLKSTARTED_EVENTS_HFCLKSTARTED_Pos) /*!< Bit mask of EVENTS_HFCLKSTARTED field. */
#define CLOCK_EVENTS_HFCLKSTARTED_EVENTS_HFCLKSTARTED_NotGenerated (0UL) /*!< Event not generated */
#define CLOCK_EVENTS_HFCLKSTARTED_EVENTS_HFCLKSTARTED_Generated (1UL) /*!< Event generated */

/* Register: CLOCK_EVENTS_LFCLKSTARTED */
/* Description: LFCLK started */

/* Bit 0 : LFCLK started */
#define CLOCK_EVENTS_LFCLKSTARTED_EVENTS_LFCLKSTARTED_Pos (0UL) /*!< Position of EVENTS_LFCLKSTARTED field. */
#define CLOCK_EVENTS_LFCLKSTARTED_EVENTS_LFCLKSTARTED_Msk (0x1UL << CLOCK_EVENTS_LFCLKSTARTED_EVENTS_LFCLKSTARTED_Pos) /*!< Bit mask of EVENTS_LFCLKSTARTED field. */
#define CLOCK_EVENTS_LFCLKSTARTED_EVENTS_LFCLKSTARTED_NotGenerated (0UL) /*!< Event not generated */
#define CLOCK_EVENTS_LFCLKSTARTED_EVENTS_LFCLKSTARTED_Generated (1UL) /*!< Event generated */

/* Register: CLOCK_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 1 : Enable or disable interrupt for event LFCLKSTARTED */
#define CLOCK_INTEN_LFCLKSTARTED_Pos (1UL) /*!< Position of LFCLKSTARTED field. */
#define CLOCK_INTEN_LFCLKSTARTED_Msk (0x1UL << CLOCK_INTEN_LFCLKSTARTED_Pos) /*!< Bit mask of LFCLKSTARTED field. */
#define CLOCK_INTEN_LFCLKSTARTED_Disabled (0UL) /*!< Disable */
#define CLOCK_INTEN_LFCLKSTARTED_Enabled (1UL) /*!< Enable */

/* Bit 0 : Enable or disable interrupt for event HFCLKSTARTED */
#define CLOCK_INTEN_HFCLKSTARTED_Pos (0UL) /*!< Position of HFCLKSTARTED field. */
#define CLOCK_INTEN_HFCLKSTARTED_Msk (0x1UL << CLOCK_INTEN_HFCLKSTARTED_Pos) /*!< Bit mask of HFCLKSTARTED field. */
#define CLOCK_INTEN_HFCLKSTARTED_Disabled (0UL) /*!< Disable */
#define CLOCK_INTEN_HFCLKSTARTED_Enabled (1UL) /*!< Enable */

/* Register: CLOCK_INTENSET */
/* Description: Enable interrupt */

/* Bit 1 : Write '1' to enable interrupt for event LFCLKSTARTED */
#define CLOCK_INTENSET_LFCLKSTARTED_Pos (1UL) /*!< Position of LFCLKSTARTED field. */
#define CLOCK_INTENSET_LFCLKSTARTED_Msk (0x1UL << CLOCK_INTENSET_LFCLKSTARTED_Pos) /*!< Bit mask of LFCLKSTARTED field. */
#define CLOCK_INTENSET_LFCLKSTARTED_Disabled (0UL) /*!< Read: Disabled */
#define CLOCK_INTENSET_LFCLKSTARTED_Enabled (1UL) /*!< Read: Enabled */
#define CLOCK_INTENSET_LFCLKSTARTED_Set (1UL) /*!< Enable */

/* Bit 0 : Write '1' to enable interrupt for event HFCLKSTARTED */
#define CLOCK_INTENSET_HFCLKSTARTED_Pos (0UL) /*!< Position of HFCLKSTARTED field. */
#define CLOCK_INTENSET_HFCLKSTARTED_Msk (0x1UL << CLOCK_INTENSET_HFCLKSTARTED_Pos) /*!< Bit mask of HFCLKSTARTED field. */
#define CLOCK_INTENSET_HFCLKSTARTED_Disabled (0UL) /*!< Read: Disabled */
#define CLOCK_INTENSET_HFCLKSTARTED_Enabled (1UL) /*!< Read: Enabled */
#define CLOCK_INTENSET_HFCLKSTARTED_Set (1UL) /*!< Enable */

/* Register: CLOCK_INTENCLR */
/* Description: Disable interrupt */

/* Bit 1 : Write '1' to disable interrupt for event LFCLKSTARTED */
#define CLOCK_INTENCLR_LFCLKSTARTED_Pos (1UL) /*!< Position of LFCLKSTARTED field. */
#define CLOCK_INTENCLR_LFCLKSTARTED_Msk (0x1UL << CLOCK_INTENCLR_LFCLKSTARTED_Pos) /*!< Bit mask of LFCLKSTARTED field. */
#define CLOCK_INTENCLR_LFCLKSTARTED_Disabled (0UL) /*!< Read: Disabled */
#define CLOCK_INTENCLR_LFCLKSTARTED_Enabled (1UL) /*!< Read: Enabled */
#define CLOCK_INTENCLR_LFCLKSTARTED_Clear (1UL) /*!< Disable */

/* Bit 0 : Write '1' to disable interrupt for event HFCLKSTARTED */
#define CLOCK_INTENCLR_HFCLKSTARTED_Pos (0UL) /*!< Position of HFCLKSTARTED field. */
#define CLOCK_INTENCLR_HFCLKSTARTED_Msk (0x1UL << CLOCK_INTENCLR_HFCLKSTARTED_Pos) /*!< Bit mask of HFCLKSTARTED field. */
#define CLOCK_INTENCLR_HFCLKSTARTED_Disabled (0UL) /*!< Read: Disabled */
#define CLOCK_INTENCLR_HFCLKSTARTED_Enabled (1UL) /*!< Read: Enabled */
#define CLOCK_INTENCLR_HFCLKSTARTED_Clear (1UL) /*!< Disable */

/* Register: CLOCK_INTPEND */
/* Description: Pending interrupts */

/* Bit 1 : Read pending status of interrupt for event LFCLKSTARTED */
#define CLOCK_INTPEND_LFCLKSTARTED_Pos (1UL) /*!< Position of LFCLKSTARTED field. */
#define CLOCK_INTPEND_LFCLKSTARTED_Msk (0x1UL << CLOCK_INTPEND_LFCLKSTARTED_Pos) /*!< Bit mask of LFCLKSTARTED field. */
#define CLOCK_INTPEND_LFCLKSTARTED_NotPending (0UL) /*!< Read: Not pending */
#define CLOCK_INTPEND_LFCLKSTARTED_Pending (1UL) /*!< Read: Pending */

/* Bit 0 : Read pending status of interrupt for event HFCLKSTARTED */
#define CLOCK_INTPEND_HFCLKSTARTED_Pos (0UL) /*!< Position of HFCLKSTARTED field. */
#define CLOCK_INTPEND_HFCLKSTARTED_Msk (0x1UL << CLOCK_INTPEND_HFCLKSTARTED_Pos) /*!< Bit mask of HFCLKSTARTED field. */
#define CLOCK_INTPEND_HFCLKSTARTED_NotPending (0UL) /*!< Read: Not pending */
#define CLOCK_INTPEND_HFCLKSTARTED_Pending (1UL) /*!< Read: Pending */

/* Register: CLOCK_HFCLKRUN */
/* Description: Status indicating that HFCLKSTART task has been triggered */

/* Bit 0 : HFCLKSTART task triggered or not */
#define CLOCK_HFCLKRUN_STATUS_Pos (0UL) /*!< Position of STATUS field. */
#define CLOCK_HFCLKRUN_STATUS_Msk (0x1UL << CLOCK_HFCLKRUN_STATUS_Pos) /*!< Bit mask of STATUS field. */
#define CLOCK_HFCLKRUN_STATUS_NotTriggered (0UL) /*!< Task not triggered */
#define CLOCK_HFCLKRUN_STATUS_Triggered (1UL) /*!< Task triggered */

/* Register: CLOCK_HFCLKSTAT */
/* Description: Which HFCLK source is running */

/* Bit 16 : HFCLK state */
#define CLOCK_HFCLKSTAT_STATE_Pos (16UL) /*!< Position of STATE field. */
#define CLOCK_HFCLKSTAT_STATE_Msk (0x1UL << CLOCK_HFCLKSTAT_STATE_Pos) /*!< Bit mask of STATE field. */
#define CLOCK_HFCLKSTAT_STATE_NotRunning (0UL) /*!< HFCLK not running */
#define CLOCK_HFCLKSTAT_STATE_Running (1UL) /*!< HFCLK running */

/* Bit 0 : Active clock source */
#define CLOCK_HFCLKSTAT_SRC_Pos (0UL) /*!< Position of SRC field. */
#define CLOCK_HFCLKSTAT_SRC_Msk (0x1UL << CLOCK_HFCLKSTAT_SRC_Pos) /*!< Bit mask of SRC field. */
#define CLOCK_HFCLKSTAT_SRC_HFINT (0UL) /*!< HFCLK clock source: HFINT - 64 MHz on-chip oscillator */
#define CLOCK_HFCLKSTAT_SRC_HFXO (1UL) /*!< HFCLK clock source: HFXO - 64 MHz clock derived from external 32 MHz crystal oscillator */

/* Register: CLOCK_LFCLKRUN */
/* Description: Status indicating that LFCLKSTART task has been triggered */

/* Bit 0 : LFCLKSTART task triggered or not */
#define CLOCK_LFCLKRUN_STATUS_Pos (0UL) /*!< Position of STATUS field. */
#define CLOCK_LFCLKRUN_STATUS_Msk (0x1UL << CLOCK_LFCLKRUN_STATUS_Pos) /*!< Bit mask of STATUS field. */
#define CLOCK_LFCLKRUN_STATUS_NotTriggered (0UL) /*!< Task not triggered */
#define CLOCK_LFCLKRUN_STATUS_Triggered (1UL) /*!< Task triggered */

/* Register: CLOCK_LFCLKSTAT */
/* Description: Which LFCLK source is running */

/* Bit 16 : LFCLK state */
#define CLOCK_LFCLKSTAT_STATE_Pos (16UL) /*!< Position of STATE field. */
#define CLOCK_LFCLKSTAT_STATE_Msk (0x1UL << CLOCK_LFCLKSTAT_STATE_Pos) /*!< Bit mask of STATE field. */
#define CLOCK_LFCLKSTAT_STATE_NotRunning (0UL) /*!< LFCLK not running */
#define CLOCK_LFCLKSTAT_STATE_Running (1UL) /*!< LFCLK running */

/* Bits 1..0 : Active clock source */
#define CLOCK_LFCLKSTAT_SRC_Pos (0UL) /*!< Position of SRC field. */
#define CLOCK_LFCLKSTAT_SRC_Msk (0x3UL << CLOCK_LFCLKSTAT_SRC_Pos) /*!< Bit mask of SRC field. */
#define CLOCK_LFCLKSTAT_SRC_NOTUSED (0UL) /*!< Reserved, not used. Will default to 32.768 kHz RC oscillator */
#define CLOCK_LFCLKSTAT_SRC_LFRC (1UL) /*!< 32.768 kHz RC oscillator */
#define CLOCK_LFCLKSTAT_SRC_LFXO (2UL) /*!< 32.768 kHz crystal oscillator */
#define CLOCK_LFCLKSTAT_SRC_LFSYNT (3UL) /*!< 32.768 kHz synthesized from HFCLK */

/* Register: CLOCK_LFCLKSRCCOPY */
/* Description: Copy of LFCLKSRC register, set when LFCLKSTART task was triggered LFULP is not treat as a separate clock source on Alta MLM1, where default clock source (0) is LFRC. */

/* Bits 1..0 : Clock source */
#define CLOCK_LFCLKSRCCOPY_SRC_Pos (0UL) /*!< Position of SRC field. */
#define CLOCK_LFCLKSRCCOPY_SRC_Msk (0x3UL << CLOCK_LFCLKSRCCOPY_SRC_Pos) /*!< Bit mask of SRC field. */
#define CLOCK_LFCLKSRCCOPY_SRC_NOTUSED (0UL) /*!< Reserved, not used. Will default to 32.768 kHz RC oscillator */
#define CLOCK_LFCLKSRCCOPY_SRC_LFRC (1UL) /*!< 32.768 kHz RC oscillator */
#define CLOCK_LFCLKSRCCOPY_SRC_LFXO (2UL) /*!< 32.768 kHz crystal oscillator */
#define CLOCK_LFCLKSRCCOPY_SRC_LFSYNT (3UL) /*!< 32.768 kHz synthesized from HFCLK */

/* Register: CLOCK_HFCLKSRC */
/* Description: Clock source for the HFCLK oscillator, and configuration of XTAL oscillator. This register shall only be written while no oscillation is present on XC1. Failing to do so may cause unexpected behaviour. */

/* Bit 0 : Select which HFCLK source is started by the START task */
#define CLOCK_HFCLKSRC_SRC_Pos (0UL) /*!< Position of SRC field. */
#define CLOCK_HFCLKSRC_SRC_Msk (0x1UL << CLOCK_HFCLKSRC_SRC_Pos) /*!< Bit mask of SRC field. */
#define CLOCK_HFCLKSRC_SRC_HFINT (0UL) /*!< HFCLKSTART task starts HFINT oscillator */
#define CLOCK_HFCLKSRC_SRC_HFXO (1UL) /*!< HFCLKSTART task starts HFXO oscillator */

/* Register: CLOCK_LFCLKSRC */
/* Description: Clock source for the LFCLK. LFCLKSTART task starts starts a clock source selected with this register. LFULP is not treat as a separate clock source on Alta MLM1, where default clock source (0) is LFRC. */

/* Bits 1..0 : Clock source */
#define CLOCK_LFCLKSRC_SRC_Pos (0UL) /*!< Position of SRC field. */
#define CLOCK_LFCLKSRC_SRC_Msk (0x3UL << CLOCK_LFCLKSRC_SRC_Pos) /*!< Bit mask of SRC field. */
#define CLOCK_LFCLKSRC_SRC_NOTUSED (0UL) /*!< Reserved, not used. Will default to 32.768 kHz RC oscillator */
#define CLOCK_LFCLKSRC_SRC_LFRC (1UL) /*!< 32.768 kHz RC oscillator */
#define CLOCK_LFCLKSRC_SRC_LFXO (2UL) /*!< 32.768 kHz crystal oscillator */
#define CLOCK_LFCLKSRC_SRC_LFSYNT (3UL) /*!< 32.768 kHz synthesized from HFCLK */


/* Peripheral: CTRLAPPERI */
/* Description: Control access port */

/* Register: CTRLAPPERI_CTRLDAP2COREDATA */
/* Description: Data sent from the Debugger to the Core */

/* Bits 31..0 : General Data */
#define CTRLAPPERI_CTRLDAP2COREDATA_DATA_Pos (0UL) /*!< Position of DATA field. */
#define CTRLAPPERI_CTRLDAP2COREDATA_DATA_Msk (0xFFFFFFFFUL << CTRLAPPERI_CTRLDAP2COREDATA_DATA_Pos) /*!< Bit mask of DATA field. */

/* Register: CTRLAPPERI_CTRLDAP2CORESTATUS */
/* Description: Status to indicate if Data sent from the Debugger to the Core has been read */

/* Bit 0 : Status of data in CTRLDAP2COREDATA register */
#define CTRLAPPERI_CTRLDAP2CORESTATUS_STATUS_Pos (0UL) /*!< Position of STATUS field. */
#define CTRLAPPERI_CTRLDAP2CORESTATUS_STATUS_Msk (0x1UL << CTRLAPPERI_CTRLDAP2CORESTATUS_STATUS_Pos) /*!< Bit mask of STATUS field. */
#define CTRLAPPERI_CTRLDAP2CORESTATUS_STATUS_NoDataPending (0UL) /*!< No data pending in CTRLDAP2COREDATA */
#define CTRLAPPERI_CTRLDAP2CORESTATUS_STATUS_DataPending (1UL) /*!< Data pending in CTRLDAP2COREDATA */

/* Register: CTRLAPPERI_CORE2CTRLDAPDATA */
/* Description: Data sent from the Core to the Debugger */

/* Bits 31..0 : General Data */
#define CTRLAPPERI_CORE2CTRLDAPDATA_DATA_Pos (0UL) /*!< Position of DATA field. */
#define CTRLAPPERI_CORE2CTRLDAPDATA_DATA_Msk (0xFFFFFFFFUL << CTRLAPPERI_CORE2CTRLDAPDATA_DATA_Pos) /*!< Bit mask of DATA field. */

/* Register: CTRLAPPERI_CORE2CTRLDAPSTATUS */
/* Description: Status to indicate if Data sent from the Core to the Debugger status has been read */

/* Bit 0 : Status of data in CORE2CTRLDAPDATA register */
#define CTRLAPPERI_CORE2CTRLDAPSTATUS_STATUS_Pos (0UL) /*!< Position of STATUS field. */
#define CTRLAPPERI_CORE2CTRLDAPSTATUS_STATUS_Msk (0x1UL << CTRLAPPERI_CORE2CTRLDAPSTATUS_STATUS_Pos) /*!< Bit mask of STATUS field. */
#define CTRLAPPERI_CORE2CTRLDAPSTATUS_STATUS_NoDataPending (0UL) /*!< No data pending in CTRLDAP2COREDATA */
#define CTRLAPPERI_CORE2CTRLDAPSTATUS_STATUS_DataPending (1UL) /*!< Data pending in CTRLDAP2COREDATA */

/* Register: CTRLAPPERI_CPURETURNFIELD_LOCK */
/* Description: Lock Mail Box erase all mechanism */

/* Bit 0 : Enable or disable the erase all mechanism for return field case. A write once register. */
#define CTRLAPPERI_CPURETURNFIELD_LOCK_LOCK_Pos (0UL) /*!< Position of LOCK field. */
#define CTRLAPPERI_CPURETURNFIELD_LOCK_LOCK_Msk (0x1UL << CTRLAPPERI_CPURETURNFIELD_LOCK_LOCK_Pos) /*!< Bit mask of LOCK field. */
#define CTRLAPPERI_CPURETURNFIELD_LOCK_LOCK_Enabled (0UL) /*!< Eraseall for return field can be issued */
#define CTRLAPPERI_CPURETURNFIELD_LOCK_LOCK_Disabled (1UL) /*!< Eraseall for return field is locked */

/* Register: CTRLAPPERI_CPURETURNFIELD */
/* Description: Mail box erase all control register. A write once register. */

/* Bits 31..0 : Random value to generate a eraseall for return field case. */
#define CTRLAPPERI_CPURETURNFIELD_STATUS_Pos (0UL) /*!< Position of STATUS field. */
#define CTRLAPPERI_CPURETURNFIELD_STATUS_Msk (0xFFFFFFFFUL << CTRLAPPERI_CPURETURNFIELD_STATUS_Pos) /*!< Bit mask of STATUS field. */


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

/* Register: DCNF_CSTNUMPRETICKS */
/* Description: ClockStatusTracker pretick count setting */

/* Bits 5..0 : Pretick count setting. */
#define DCNF_CSTNUMPRETICKS_NUMPRETICKS_Pos (0UL) /*!< Position of NUMPRETICKS field. */
#define DCNF_CSTNUMPRETICKS_NUMPRETICKS_Msk (0x3FUL << DCNF_CSTNUMPRETICKS_NUMPRETICKS_Pos) /*!< Bit mask of NUMPRETICKS field. */

/* Register: DCNF_CSTNUMPOSTTICKS */
/* Description: ClockStatusTracker posttick count setting */

/* Bits 5..0 : Posttick count setting. */
#define DCNF_CSTNUMPOSTTICKS_NUMPOSTTICKS_Pos (0UL) /*!< Position of NUMPOSTTICKS field. */
#define DCNF_CSTNUMPOSTTICKS_NUMPOSTTICKS_Msk (0x3FUL << DCNF_CSTNUMPOSTTICKS_NUMPOSTTICKS_Pos) /*!< Bit mask of NUMPOSTTICKS field. */


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

/* Bit 13 : Enable or disable interrupt for event RESETTED */
#define DES_INTEN_RESETTED_Pos (13UL) /*!< Position of RESETTED field. */
#define DES_INTEN_RESETTED_Msk (0x1UL << DES_INTEN_RESETTED_Pos) /*!< Bit mask of RESETTED field. */
#define DES_INTEN_RESETTED_Disabled (0UL) /*!< Disable */
#define DES_INTEN_RESETTED_Enabled (1UL) /*!< Enable */

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

/* Bit 13 : Write '1' to enable interrupt for event RESETTED */
#define DES_INTENSET_RESETTED_Pos (13UL) /*!< Position of RESETTED field. */
#define DES_INTENSET_RESETTED_Msk (0x1UL << DES_INTENSET_RESETTED_Pos) /*!< Bit mask of RESETTED field. */
#define DES_INTENSET_RESETTED_Disabled (0UL) /*!< Read: Disabled */
#define DES_INTENSET_RESETTED_Enabled (1UL) /*!< Read: Enabled */
#define DES_INTENSET_RESETTED_Set (1UL) /*!< Enable */

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

/* Bit 13 : Write '1' to disable interrupt for event RESETTED */
#define DES_INTENCLR_RESETTED_Pos (13UL) /*!< Position of RESETTED field. */
#define DES_INTENCLR_RESETTED_Msk (0x1UL << DES_INTENCLR_RESETTED_Pos) /*!< Bit mask of RESETTED field. */
#define DES_INTENCLR_RESETTED_Disabled (0UL) /*!< Read: Disabled */
#define DES_INTENCLR_RESETTED_Enabled (1UL) /*!< Read: Enabled */
#define DES_INTENCLR_RESETTED_Clear (1UL) /*!< Disable */

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

/* Bit 13 : Read pending status of interrupt for event RESETTED */
#define DES_INTPEND_RESETTED_Pos (13UL) /*!< Position of RESETTED field. */
#define DES_INTPEND_RESETTED_Msk (0x1UL << DES_INTPEND_RESETTED_Pos) /*!< Bit mask of RESETTED field. */
#define DES_INTPEND_RESETTED_NotPending (0UL) /*!< Read: Not pending */
#define DES_INTPEND_RESETTED_Pending (1UL) /*!< Read: Pending */

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

/* Register: DES_MODE */
/* Description: Mode: 0 == ECB, 1 == CBC */

/* Bit 0 : Selects ECB or CBC block cipher mode */
#define DES_MODE_MODE_Pos (0UL) /*!< Position of MODE field. */
#define DES_MODE_MODE_Msk (0x1UL << DES_MODE_MODE_Pos) /*!< Bit mask of MODE field. */
#define DES_MODE_MODE_ECB (0UL) /*!< Electronic Codebook mode */
#define DES_MODE_MODE_CBC (1UL) /*!< Cipher Block Chaining mode */

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
/* Description: Miscellaneous modem HW configuration. Will be set during production test. */

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

/* Register: FICR_CHIPCONF03 */
/* Description: Miscellaneous modem HW configuration. */

/* Bits 3..0 : Modem M4 RAM wait state configuration, into a modem secure control register. */
#define FICR_CHIPCONF03_RAMWAITSTATE_Pos (0UL) /*!< Position of RAMWAITSTATE field. */
#define FICR_CHIPCONF03_RAMWAITSTATE_Msk (0xFUL << FICR_CHIPCONF03_RAMWAITSTATE_Pos) /*!< Bit mask of RAMWAITSTATE field. */

/* Register: FICR_CHIPCONF04 */
/* Description: MODEM M4 VMC SRAMTRIM values */

/* Bit 6 : Read/Write Margin Adjustment */
#define FICR_CHIPCONF04_RWM_Pos (6UL) /*!< Position of RWM field. */
#define FICR_CHIPCONF04_RWM_Msk (0x1UL << FICR_CHIPCONF04_RWM_Pos) /*!< Bit mask of RWM field. */
#define FICR_CHIPCONF04_RWM_Disabled (0UL) /*!< Disable */
#define FICR_CHIPCONF04_RWM_Enabled (1UL) /*!< Enable */

/* Bit 5 : Read Margin Adjustment */
#define FICR_CHIPCONF04_RM_Pos (5UL) /*!< Position of RM field. */
#define FICR_CHIPCONF04_RM_Msk (0x1UL << FICR_CHIPCONF04_RM_Pos) /*!< Bit mask of RM field. */
#define FICR_CHIPCONF04_RM_Disabled (0UL) /*!< Disable */
#define FICR_CHIPCONF04_RM_Enabled (1UL) /*!< Enable */

/* Bit 4 : Write Margin Adjustment */
#define FICR_CHIPCONF04_WM_Pos (4UL) /*!< Position of WM field. */
#define FICR_CHIPCONF04_WM_Msk (0x1UL << FICR_CHIPCONF04_WM_Pos) /*!< Bit mask of WM field. */
#define FICR_CHIPCONF04_WM_Disabled (0UL) /*!< Disable */
#define FICR_CHIPCONF04_WM_Enabled (1UL) /*!< Enable */

/* Bits 3..0 : Source Bias Trim Adjustment for retention */
#define FICR_CHIPCONF04_BTRIM_Pos (0UL) /*!< Position of BTRIM field. */
#define FICR_CHIPCONF04_BTRIM_Msk (0xFUL << FICR_CHIPCONF04_BTRIM_Pos) /*!< Bit mask of BTRIM field. */

/* Register: FICR_CHIPCONF05 */
/* Description: MODEM M4 VMC RamSSNonRetTSel timing control values for TSMC RAMs */

/* Bits 4..2 : Write cycle timing selection */
#define FICR_CHIPCONF05_WTSEL_Pos (2UL) /*!< Position of WTSEL field. */
#define FICR_CHIPCONF05_WTSEL_Msk (0x7UL << FICR_CHIPCONF05_WTSEL_Pos) /*!< Bit mask of WTSEL field. */

/* Bits 1..0 : Read cycle timing selection */
#define FICR_CHIPCONF05_RTSEL_Pos (0UL) /*!< Position of RTSEL field. */
#define FICR_CHIPCONF05_RTSEL_Msk (0x3UL << FICR_CHIPCONF05_RTSEL_Pos) /*!< Bit mask of RTSEL field. */

/* Register: FICR_CHIPCONF06 */
/* Description: MODEM DSP SRAMTRIM values */

/* Bit 6 : Read/Write Margin Adjustment */
#define FICR_CHIPCONF06_RWM_Pos (6UL) /*!< Position of RWM field. */
#define FICR_CHIPCONF06_RWM_Msk (0x1UL << FICR_CHIPCONF06_RWM_Pos) /*!< Bit mask of RWM field. */
#define FICR_CHIPCONF06_RWM_Disabled (0UL) /*!< Disable */
#define FICR_CHIPCONF06_RWM_Enabled (1UL) /*!< Enable */

/* Bit 5 : Read Margin Adjustment */
#define FICR_CHIPCONF06_RM_Pos (5UL) /*!< Position of RM field. */
#define FICR_CHIPCONF06_RM_Msk (0x1UL << FICR_CHIPCONF06_RM_Pos) /*!< Bit mask of RM field. */
#define FICR_CHIPCONF06_RM_Disabled (0UL) /*!< Disable */
#define FICR_CHIPCONF06_RM_Enabled (1UL) /*!< Enable */

/* Bit 4 : Write Margin Adjustment */
#define FICR_CHIPCONF06_WM_Pos (4UL) /*!< Position of WM field. */
#define FICR_CHIPCONF06_WM_Msk (0x1UL << FICR_CHIPCONF06_WM_Pos) /*!< Bit mask of WM field. */
#define FICR_CHIPCONF06_WM_Disabled (0UL) /*!< Disable */
#define FICR_CHIPCONF06_WM_Enabled (1UL) /*!< Enable */

/* Bits 3..0 : Source Bias Trim Adjustment for retention */
#define FICR_CHIPCONF06_BTRIM_Pos (0UL) /*!< Position of BTRIM field. */
#define FICR_CHIPCONF06_BTRIM_Msk (0xFUL << FICR_CHIPCONF06_BTRIM_Pos) /*!< Bit mask of BTRIM field. */

/* Register: FICR_CHIPCONF07 */
/* Description: MODEM RF VMC SRAMTRIM values */

/* Bit 6 : Read/Write Margin Adjustment */
#define FICR_CHIPCONF07_RWM_Pos (6UL) /*!< Position of RWM field. */
#define FICR_CHIPCONF07_RWM_Msk (0x1UL << FICR_CHIPCONF07_RWM_Pos) /*!< Bit mask of RWM field. */
#define FICR_CHIPCONF07_RWM_Disabled (0UL) /*!< Disable */
#define FICR_CHIPCONF07_RWM_Enabled (1UL) /*!< Enable */

/* Bit 5 : Read Margin Adjustment */
#define FICR_CHIPCONF07_RM_Pos (5UL) /*!< Position of RM field. */
#define FICR_CHIPCONF07_RM_Msk (0x1UL << FICR_CHIPCONF07_RM_Pos) /*!< Bit mask of RM field. */
#define FICR_CHIPCONF07_RM_Disabled (0UL) /*!< Disable */
#define FICR_CHIPCONF07_RM_Enabled (1UL) /*!< Enable */

/* Bit 4 : Write Margin Adjustment */
#define FICR_CHIPCONF07_WM_Pos (4UL) /*!< Position of WM field. */
#define FICR_CHIPCONF07_WM_Msk (0x1UL << FICR_CHIPCONF07_WM_Pos) /*!< Bit mask of WM field. */
#define FICR_CHIPCONF07_WM_Disabled (0UL) /*!< Disable */
#define FICR_CHIPCONF07_WM_Enabled (1UL) /*!< Enable */

/* Bits 3..0 : Source Bias Trim Adjustment for retention */
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

/* Register: FICR_PRODTEST */
/* Description: Description collection: Production test control n */

/* Bits 31..0 : Production test control (majority vote done for each bit over all three fields to get the used value) */
#define FICR_PRODTEST_PRODTEST_Pos (0UL) /*!< Position of PRODTEST field. */
#define FICR_PRODTEST_PRODTEST_Msk (0xFFFFFFFFUL << FICR_PRODTEST_PRODTEST_Pos) /*!< Bit mask of PRODTEST field. */
#define FICR_PRODTEST_PRODTEST_Done (0xBB42319FUL) /*!< Production tests done */
#define FICR_PRODTEST_PRODTEST_NotDone (0xFFFFFFFFUL) /*!< Production tests not done, SoC is in Virgin mode (with any other value than 0xBB42319F) */


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

/* Bit 7 : Enable or disable interrupt for event RECEIVE[7] */
#define IPC_INTEN0_RECEIVE7_Pos (7UL) /*!< Position of RECEIVE7 field. */
#define IPC_INTEN0_RECEIVE7_Msk (0x1UL << IPC_INTEN0_RECEIVE7_Pos) /*!< Bit mask of RECEIVE7 field. */
#define IPC_INTEN0_RECEIVE7_Disabled (0UL) /*!< Disable */
#define IPC_INTEN0_RECEIVE7_Enabled (1UL) /*!< Enable */

/* Bit 6 : Enable or disable interrupt for event RECEIVE[6] */
#define IPC_INTEN0_RECEIVE6_Pos (6UL) /*!< Position of RECEIVE6 field. */
#define IPC_INTEN0_RECEIVE6_Msk (0x1UL << IPC_INTEN0_RECEIVE6_Pos) /*!< Bit mask of RECEIVE6 field. */
#define IPC_INTEN0_RECEIVE6_Disabled (0UL) /*!< Disable */
#define IPC_INTEN0_RECEIVE6_Enabled (1UL) /*!< Enable */

/* Bit 5 : Enable or disable interrupt for event RECEIVE[5] */
#define IPC_INTEN0_RECEIVE5_Pos (5UL) /*!< Position of RECEIVE5 field. */
#define IPC_INTEN0_RECEIVE5_Msk (0x1UL << IPC_INTEN0_RECEIVE5_Pos) /*!< Bit mask of RECEIVE5 field. */
#define IPC_INTEN0_RECEIVE5_Disabled (0UL) /*!< Disable */
#define IPC_INTEN0_RECEIVE5_Enabled (1UL) /*!< Enable */

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

/* Bit 7 : Write '1' to enable interrupt for event RECEIVE[7] */
#define IPC_INTENSET0_RECEIVE7_Pos (7UL) /*!< Position of RECEIVE7 field. */
#define IPC_INTENSET0_RECEIVE7_Msk (0x1UL << IPC_INTENSET0_RECEIVE7_Pos) /*!< Bit mask of RECEIVE7 field. */
#define IPC_INTENSET0_RECEIVE7_Disabled (0UL) /*!< Read: Disabled */
#define IPC_INTENSET0_RECEIVE7_Enabled (1UL) /*!< Read: Enabled */
#define IPC_INTENSET0_RECEIVE7_Set (1UL) /*!< Enable */

/* Bit 6 : Write '1' to enable interrupt for event RECEIVE[6] */
#define IPC_INTENSET0_RECEIVE6_Pos (6UL) /*!< Position of RECEIVE6 field. */
#define IPC_INTENSET0_RECEIVE6_Msk (0x1UL << IPC_INTENSET0_RECEIVE6_Pos) /*!< Bit mask of RECEIVE6 field. */
#define IPC_INTENSET0_RECEIVE6_Disabled (0UL) /*!< Read: Disabled */
#define IPC_INTENSET0_RECEIVE6_Enabled (1UL) /*!< Read: Enabled */
#define IPC_INTENSET0_RECEIVE6_Set (1UL) /*!< Enable */

/* Bit 5 : Write '1' to enable interrupt for event RECEIVE[5] */
#define IPC_INTENSET0_RECEIVE5_Pos (5UL) /*!< Position of RECEIVE5 field. */
#define IPC_INTENSET0_RECEIVE5_Msk (0x1UL << IPC_INTENSET0_RECEIVE5_Pos) /*!< Bit mask of RECEIVE5 field. */
#define IPC_INTENSET0_RECEIVE5_Disabled (0UL) /*!< Read: Disabled */
#define IPC_INTENSET0_RECEIVE5_Enabled (1UL) /*!< Read: Enabled */
#define IPC_INTENSET0_RECEIVE5_Set (1UL) /*!< Enable */

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

/* Bit 7 : Write '1' to disable interrupt for event RECEIVE[7] */
#define IPC_INTENCLR0_RECEIVE7_Pos (7UL) /*!< Position of RECEIVE7 field. */
#define IPC_INTENCLR0_RECEIVE7_Msk (0x1UL << IPC_INTENCLR0_RECEIVE7_Pos) /*!< Bit mask of RECEIVE7 field. */
#define IPC_INTENCLR0_RECEIVE7_Disabled (0UL) /*!< Read: Disabled */
#define IPC_INTENCLR0_RECEIVE7_Enabled (1UL) /*!< Read: Enabled */
#define IPC_INTENCLR0_RECEIVE7_Clear (1UL) /*!< Disable */

/* Bit 6 : Write '1' to disable interrupt for event RECEIVE[6] */
#define IPC_INTENCLR0_RECEIVE6_Pos (6UL) /*!< Position of RECEIVE6 field. */
#define IPC_INTENCLR0_RECEIVE6_Msk (0x1UL << IPC_INTENCLR0_RECEIVE6_Pos) /*!< Bit mask of RECEIVE6 field. */
#define IPC_INTENCLR0_RECEIVE6_Disabled (0UL) /*!< Read: Disabled */
#define IPC_INTENCLR0_RECEIVE6_Enabled (1UL) /*!< Read: Enabled */
#define IPC_INTENCLR0_RECEIVE6_Clear (1UL) /*!< Disable */

/* Bit 5 : Write '1' to disable interrupt for event RECEIVE[5] */
#define IPC_INTENCLR0_RECEIVE5_Pos (5UL) /*!< Position of RECEIVE5 field. */
#define IPC_INTENCLR0_RECEIVE5_Msk (0x1UL << IPC_INTENCLR0_RECEIVE5_Pos) /*!< Bit mask of RECEIVE5 field. */
#define IPC_INTENCLR0_RECEIVE5_Disabled (0UL) /*!< Read: Disabled */
#define IPC_INTENCLR0_RECEIVE5_Enabled (1UL) /*!< Read: Enabled */
#define IPC_INTENCLR0_RECEIVE5_Clear (1UL) /*!< Disable */

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

/* Bit 7 : Read pending status of interrupt for event RECEIVE[7] */
#define IPC_INTPEND0_RECEIVE7_Pos (7UL) /*!< Position of RECEIVE7 field. */
#define IPC_INTPEND0_RECEIVE7_Msk (0x1UL << IPC_INTPEND0_RECEIVE7_Pos) /*!< Bit mask of RECEIVE7 field. */
#define IPC_INTPEND0_RECEIVE7_NotPending (0UL) /*!< Read: Not pending */
#define IPC_INTPEND0_RECEIVE7_Pending (1UL) /*!< Read: Pending */

/* Bit 6 : Read pending status of interrupt for event RECEIVE[6] */
#define IPC_INTPEND0_RECEIVE6_Pos (6UL) /*!< Position of RECEIVE6 field. */
#define IPC_INTPEND0_RECEIVE6_Msk (0x1UL << IPC_INTPEND0_RECEIVE6_Pos) /*!< Bit mask of RECEIVE6 field. */
#define IPC_INTPEND0_RECEIVE6_NotPending (0UL) /*!< Read: Not pending */
#define IPC_INTPEND0_RECEIVE6_Pending (1UL) /*!< Read: Pending */

/* Bit 5 : Read pending status of interrupt for event RECEIVE[5] */
#define IPC_INTPEND0_RECEIVE5_Pos (5UL) /*!< Position of RECEIVE5 field. */
#define IPC_INTPEND0_RECEIVE5_Msk (0x1UL << IPC_INTPEND0_RECEIVE5_Pos) /*!< Bit mask of RECEIVE5 field. */
#define IPC_INTPEND0_RECEIVE5_NotPending (0UL) /*!< Read: Not pending */
#define IPC_INTPEND0_RECEIVE5_Pending (1UL) /*!< Read: Pending */

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

/* Bit 7 : Enable or disable interrupt for event RECEIVE[7] */
#define IPC_INTEN1_RECEIVE7_Pos (7UL) /*!< Position of RECEIVE7 field. */
#define IPC_INTEN1_RECEIVE7_Msk (0x1UL << IPC_INTEN1_RECEIVE7_Pos) /*!< Bit mask of RECEIVE7 field. */
#define IPC_INTEN1_RECEIVE7_Disabled (0UL) /*!< Disable */
#define IPC_INTEN1_RECEIVE7_Enabled (1UL) /*!< Enable */

/* Bit 6 : Enable or disable interrupt for event RECEIVE[6] */
#define IPC_INTEN1_RECEIVE6_Pos (6UL) /*!< Position of RECEIVE6 field. */
#define IPC_INTEN1_RECEIVE6_Msk (0x1UL << IPC_INTEN1_RECEIVE6_Pos) /*!< Bit mask of RECEIVE6 field. */
#define IPC_INTEN1_RECEIVE6_Disabled (0UL) /*!< Disable */
#define IPC_INTEN1_RECEIVE6_Enabled (1UL) /*!< Enable */

/* Bit 5 : Enable or disable interrupt for event RECEIVE[5] */
#define IPC_INTEN1_RECEIVE5_Pos (5UL) /*!< Position of RECEIVE5 field. */
#define IPC_INTEN1_RECEIVE5_Msk (0x1UL << IPC_INTEN1_RECEIVE5_Pos) /*!< Bit mask of RECEIVE5 field. */
#define IPC_INTEN1_RECEIVE5_Disabled (0UL) /*!< Disable */
#define IPC_INTEN1_RECEIVE5_Enabled (1UL) /*!< Enable */

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

/* Bit 7 : Write '1' to enable interrupt for event RECEIVE[7] */
#define IPC_INTENSET1_RECEIVE7_Pos (7UL) /*!< Position of RECEIVE7 field. */
#define IPC_INTENSET1_RECEIVE7_Msk (0x1UL << IPC_INTENSET1_RECEIVE7_Pos) /*!< Bit mask of RECEIVE7 field. */
#define IPC_INTENSET1_RECEIVE7_Disabled (0UL) /*!< Read: Disabled */
#define IPC_INTENSET1_RECEIVE7_Enabled (1UL) /*!< Read: Enabled */
#define IPC_INTENSET1_RECEIVE7_Set (1UL) /*!< Enable */

/* Bit 6 : Write '1' to enable interrupt for event RECEIVE[6] */
#define IPC_INTENSET1_RECEIVE6_Pos (6UL) /*!< Position of RECEIVE6 field. */
#define IPC_INTENSET1_RECEIVE6_Msk (0x1UL << IPC_INTENSET1_RECEIVE6_Pos) /*!< Bit mask of RECEIVE6 field. */
#define IPC_INTENSET1_RECEIVE6_Disabled (0UL) /*!< Read: Disabled */
#define IPC_INTENSET1_RECEIVE6_Enabled (1UL) /*!< Read: Enabled */
#define IPC_INTENSET1_RECEIVE6_Set (1UL) /*!< Enable */

/* Bit 5 : Write '1' to enable interrupt for event RECEIVE[5] */
#define IPC_INTENSET1_RECEIVE5_Pos (5UL) /*!< Position of RECEIVE5 field. */
#define IPC_INTENSET1_RECEIVE5_Msk (0x1UL << IPC_INTENSET1_RECEIVE5_Pos) /*!< Bit mask of RECEIVE5 field. */
#define IPC_INTENSET1_RECEIVE5_Disabled (0UL) /*!< Read: Disabled */
#define IPC_INTENSET1_RECEIVE5_Enabled (1UL) /*!< Read: Enabled */
#define IPC_INTENSET1_RECEIVE5_Set (1UL) /*!< Enable */

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

/* Bit 7 : Write '1' to disable interrupt for event RECEIVE[7] */
#define IPC_INTENCLR1_RECEIVE7_Pos (7UL) /*!< Position of RECEIVE7 field. */
#define IPC_INTENCLR1_RECEIVE7_Msk (0x1UL << IPC_INTENCLR1_RECEIVE7_Pos) /*!< Bit mask of RECEIVE7 field. */
#define IPC_INTENCLR1_RECEIVE7_Disabled (0UL) /*!< Read: Disabled */
#define IPC_INTENCLR1_RECEIVE7_Enabled (1UL) /*!< Read: Enabled */
#define IPC_INTENCLR1_RECEIVE7_Clear (1UL) /*!< Disable */

/* Bit 6 : Write '1' to disable interrupt for event RECEIVE[6] */
#define IPC_INTENCLR1_RECEIVE6_Pos (6UL) /*!< Position of RECEIVE6 field. */
#define IPC_INTENCLR1_RECEIVE6_Msk (0x1UL << IPC_INTENCLR1_RECEIVE6_Pos) /*!< Bit mask of RECEIVE6 field. */
#define IPC_INTENCLR1_RECEIVE6_Disabled (0UL) /*!< Read: Disabled */
#define IPC_INTENCLR1_RECEIVE6_Enabled (1UL) /*!< Read: Enabled */
#define IPC_INTENCLR1_RECEIVE6_Clear (1UL) /*!< Disable */

/* Bit 5 : Write '1' to disable interrupt for event RECEIVE[5] */
#define IPC_INTENCLR1_RECEIVE5_Pos (5UL) /*!< Position of RECEIVE5 field. */
#define IPC_INTENCLR1_RECEIVE5_Msk (0x1UL << IPC_INTENCLR1_RECEIVE5_Pos) /*!< Bit mask of RECEIVE5 field. */
#define IPC_INTENCLR1_RECEIVE5_Disabled (0UL) /*!< Read: Disabled */
#define IPC_INTENCLR1_RECEIVE5_Enabled (1UL) /*!< Read: Enabled */
#define IPC_INTENCLR1_RECEIVE5_Clear (1UL) /*!< Disable */

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

/* Bit 7 : Read pending status of interrupt for event RECEIVE[7] */
#define IPC_INTPEND1_RECEIVE7_Pos (7UL) /*!< Position of RECEIVE7 field. */
#define IPC_INTPEND1_RECEIVE7_Msk (0x1UL << IPC_INTPEND1_RECEIVE7_Pos) /*!< Bit mask of RECEIVE7 field. */
#define IPC_INTPEND1_RECEIVE7_NotPending (0UL) /*!< Read: Not pending */
#define IPC_INTPEND1_RECEIVE7_Pending (1UL) /*!< Read: Pending */

/* Bit 6 : Read pending status of interrupt for event RECEIVE[6] */
#define IPC_INTPEND1_RECEIVE6_Pos (6UL) /*!< Position of RECEIVE6 field. */
#define IPC_INTPEND1_RECEIVE6_Msk (0x1UL << IPC_INTPEND1_RECEIVE6_Pos) /*!< Bit mask of RECEIVE6 field. */
#define IPC_INTPEND1_RECEIVE6_NotPending (0UL) /*!< Read: Not pending */
#define IPC_INTPEND1_RECEIVE6_Pending (1UL) /*!< Read: Pending */

/* Bit 5 : Read pending status of interrupt for event RECEIVE[5] */
#define IPC_INTPEND1_RECEIVE5_Pos (5UL) /*!< Position of RECEIVE5 field. */
#define IPC_INTPEND1_RECEIVE5_Msk (0x1UL << IPC_INTPEND1_RECEIVE5_Pos) /*!< Bit mask of RECEIVE5 field. */
#define IPC_INTPEND1_RECEIVE5_NotPending (0UL) /*!< Read: Not pending */
#define IPC_INTPEND1_RECEIVE5_Pending (1UL) /*!< Read: Pending */

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

/* Bit 7 : Enable or disable interrupt for event RECEIVE[7] */
#define IPC_INTEN2_RECEIVE7_Pos (7UL) /*!< Position of RECEIVE7 field. */
#define IPC_INTEN2_RECEIVE7_Msk (0x1UL << IPC_INTEN2_RECEIVE7_Pos) /*!< Bit mask of RECEIVE7 field. */
#define IPC_INTEN2_RECEIVE7_Disabled (0UL) /*!< Disable */
#define IPC_INTEN2_RECEIVE7_Enabled (1UL) /*!< Enable */

/* Bit 6 : Enable or disable interrupt for event RECEIVE[6] */
#define IPC_INTEN2_RECEIVE6_Pos (6UL) /*!< Position of RECEIVE6 field. */
#define IPC_INTEN2_RECEIVE6_Msk (0x1UL << IPC_INTEN2_RECEIVE6_Pos) /*!< Bit mask of RECEIVE6 field. */
#define IPC_INTEN2_RECEIVE6_Disabled (0UL) /*!< Disable */
#define IPC_INTEN2_RECEIVE6_Enabled (1UL) /*!< Enable */

/* Bit 5 : Enable or disable interrupt for event RECEIVE[5] */
#define IPC_INTEN2_RECEIVE5_Pos (5UL) /*!< Position of RECEIVE5 field. */
#define IPC_INTEN2_RECEIVE5_Msk (0x1UL << IPC_INTEN2_RECEIVE5_Pos) /*!< Bit mask of RECEIVE5 field. */
#define IPC_INTEN2_RECEIVE5_Disabled (0UL) /*!< Disable */
#define IPC_INTEN2_RECEIVE5_Enabled (1UL) /*!< Enable */

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

/* Bit 7 : Write '1' to enable interrupt for event RECEIVE[7] */
#define IPC_INTENSET2_RECEIVE7_Pos (7UL) /*!< Position of RECEIVE7 field. */
#define IPC_INTENSET2_RECEIVE7_Msk (0x1UL << IPC_INTENSET2_RECEIVE7_Pos) /*!< Bit mask of RECEIVE7 field. */
#define IPC_INTENSET2_RECEIVE7_Disabled (0UL) /*!< Read: Disabled */
#define IPC_INTENSET2_RECEIVE7_Enabled (1UL) /*!< Read: Enabled */
#define IPC_INTENSET2_RECEIVE7_Set (1UL) /*!< Enable */

/* Bit 6 : Write '1' to enable interrupt for event RECEIVE[6] */
#define IPC_INTENSET2_RECEIVE6_Pos (6UL) /*!< Position of RECEIVE6 field. */
#define IPC_INTENSET2_RECEIVE6_Msk (0x1UL << IPC_INTENSET2_RECEIVE6_Pos) /*!< Bit mask of RECEIVE6 field. */
#define IPC_INTENSET2_RECEIVE6_Disabled (0UL) /*!< Read: Disabled */
#define IPC_INTENSET2_RECEIVE6_Enabled (1UL) /*!< Read: Enabled */
#define IPC_INTENSET2_RECEIVE6_Set (1UL) /*!< Enable */

/* Bit 5 : Write '1' to enable interrupt for event RECEIVE[5] */
#define IPC_INTENSET2_RECEIVE5_Pos (5UL) /*!< Position of RECEIVE5 field. */
#define IPC_INTENSET2_RECEIVE5_Msk (0x1UL << IPC_INTENSET2_RECEIVE5_Pos) /*!< Bit mask of RECEIVE5 field. */
#define IPC_INTENSET2_RECEIVE5_Disabled (0UL) /*!< Read: Disabled */
#define IPC_INTENSET2_RECEIVE5_Enabled (1UL) /*!< Read: Enabled */
#define IPC_INTENSET2_RECEIVE5_Set (1UL) /*!< Enable */

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

/* Bit 7 : Write '1' to disable interrupt for event RECEIVE[7] */
#define IPC_INTENCLR2_RECEIVE7_Pos (7UL) /*!< Position of RECEIVE7 field. */
#define IPC_INTENCLR2_RECEIVE7_Msk (0x1UL << IPC_INTENCLR2_RECEIVE7_Pos) /*!< Bit mask of RECEIVE7 field. */
#define IPC_INTENCLR2_RECEIVE7_Disabled (0UL) /*!< Read: Disabled */
#define IPC_INTENCLR2_RECEIVE7_Enabled (1UL) /*!< Read: Enabled */
#define IPC_INTENCLR2_RECEIVE7_Clear (1UL) /*!< Disable */

/* Bit 6 : Write '1' to disable interrupt for event RECEIVE[6] */
#define IPC_INTENCLR2_RECEIVE6_Pos (6UL) /*!< Position of RECEIVE6 field. */
#define IPC_INTENCLR2_RECEIVE6_Msk (0x1UL << IPC_INTENCLR2_RECEIVE6_Pos) /*!< Bit mask of RECEIVE6 field. */
#define IPC_INTENCLR2_RECEIVE6_Disabled (0UL) /*!< Read: Disabled */
#define IPC_INTENCLR2_RECEIVE6_Enabled (1UL) /*!< Read: Enabled */
#define IPC_INTENCLR2_RECEIVE6_Clear (1UL) /*!< Disable */

/* Bit 5 : Write '1' to disable interrupt for event RECEIVE[5] */
#define IPC_INTENCLR2_RECEIVE5_Pos (5UL) /*!< Position of RECEIVE5 field. */
#define IPC_INTENCLR2_RECEIVE5_Msk (0x1UL << IPC_INTENCLR2_RECEIVE5_Pos) /*!< Bit mask of RECEIVE5 field. */
#define IPC_INTENCLR2_RECEIVE5_Disabled (0UL) /*!< Read: Disabled */
#define IPC_INTENCLR2_RECEIVE5_Enabled (1UL) /*!< Read: Enabled */
#define IPC_INTENCLR2_RECEIVE5_Clear (1UL) /*!< Disable */

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

/* Bit 7 : Read pending status of interrupt for event RECEIVE[7] */
#define IPC_INTPEND2_RECEIVE7_Pos (7UL) /*!< Position of RECEIVE7 field. */
#define IPC_INTPEND2_RECEIVE7_Msk (0x1UL << IPC_INTPEND2_RECEIVE7_Pos) /*!< Bit mask of RECEIVE7 field. */
#define IPC_INTPEND2_RECEIVE7_NotPending (0UL) /*!< Read: Not pending */
#define IPC_INTPEND2_RECEIVE7_Pending (1UL) /*!< Read: Pending */

/* Bit 6 : Read pending status of interrupt for event RECEIVE[6] */
#define IPC_INTPEND2_RECEIVE6_Pos (6UL) /*!< Position of RECEIVE6 field. */
#define IPC_INTPEND2_RECEIVE6_Msk (0x1UL << IPC_INTPEND2_RECEIVE6_Pos) /*!< Bit mask of RECEIVE6 field. */
#define IPC_INTPEND2_RECEIVE6_NotPending (0UL) /*!< Read: Not pending */
#define IPC_INTPEND2_RECEIVE6_Pending (1UL) /*!< Read: Pending */

/* Bit 5 : Read pending status of interrupt for event RECEIVE[5] */
#define IPC_INTPEND2_RECEIVE5_Pos (5UL) /*!< Position of RECEIVE5 field. */
#define IPC_INTPEND2_RECEIVE5_Msk (0x1UL << IPC_INTPEND2_RECEIVE5_Pos) /*!< Bit mask of RECEIVE5 field. */
#define IPC_INTPEND2_RECEIVE5_NotPending (0UL) /*!< Read: Not pending */
#define IPC_INTPEND2_RECEIVE5_Pending (1UL) /*!< Read: Pending */

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

/* Bit 18 : Enable broadcasting on channel 18. */
#define IPC_SEND_CNF_CHEN18_Pos (18UL) /*!< Position of CHEN18 field. */
#define IPC_SEND_CNF_CHEN18_Msk (0x1UL << IPC_SEND_CNF_CHEN18_Pos) /*!< Bit mask of CHEN18 field. */
#define IPC_SEND_CNF_CHEN18_Disable (0UL) /*!< Disable broadcast. */
#define IPC_SEND_CNF_CHEN18_Enable (1UL) /*!< Enable broadcast. */

/* Bit 17 : Enable broadcasting on channel 17. */
#define IPC_SEND_CNF_CHEN17_Pos (17UL) /*!< Position of CHEN17 field. */
#define IPC_SEND_CNF_CHEN17_Msk (0x1UL << IPC_SEND_CNF_CHEN17_Pos) /*!< Bit mask of CHEN17 field. */
#define IPC_SEND_CNF_CHEN17_Disable (0UL) /*!< Disable broadcast. */
#define IPC_SEND_CNF_CHEN17_Enable (1UL) /*!< Enable broadcast. */

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

/* Bit 18 : Enable subscription to channel 18. */
#define IPC_RECEIVE_CNF_CHEN18_Pos (18UL) /*!< Position of CHEN18 field. */
#define IPC_RECEIVE_CNF_CHEN18_Msk (0x1UL << IPC_RECEIVE_CNF_CHEN18_Pos) /*!< Bit mask of CHEN18 field. */
#define IPC_RECEIVE_CNF_CHEN18_Disable (0UL) /*!< Disable events. */
#define IPC_RECEIVE_CNF_CHEN18_Enable (1UL) /*!< Enable events. */

/* Bit 17 : Enable subscription to channel 17. */
#define IPC_RECEIVE_CNF_CHEN17_Pos (17UL) /*!< Position of CHEN17 field. */
#define IPC_RECEIVE_CNF_CHEN17_Msk (0x1UL << IPC_RECEIVE_CNF_CHEN17_Pos) /*!< Bit mask of CHEN17 field. */
#define IPC_RECEIVE_CNF_CHEN17_Disable (0UL) /*!< Disable events. */
#define IPC_RECEIVE_CNF_CHEN17_Enable (1UL) /*!< Enable events. */

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


/* Peripheral: KMU */
/* Description: Key Management Unit */

/* Register: KMU_TASKS_PUSH_KEYSLOT */
/* Description: Push a key slot over secure APB. */

/* Bit 0 : Push a key slot over secure APB. */
#define KMU_TASKS_PUSH_KEYSLOT_TASKS_PUSH_KEYSLOT_Pos (0UL) /*!< Position of TASKS_PUSH_KEYSLOT field. */
#define KMU_TASKS_PUSH_KEYSLOT_TASKS_PUSH_KEYSLOT_Msk (0x1UL << KMU_TASKS_PUSH_KEYSLOT_TASKS_PUSH_KEYSLOT_Pos) /*!< Bit mask of TASKS_PUSH_KEYSLOT field. */
#define KMU_TASKS_PUSH_KEYSLOT_TASKS_PUSH_KEYSLOT_Trigger (1UL) /*!< Trigger task */

/* Register: KMU_EVENTS_KEYSLOT_PUSHED */
/* Description: Key successfully pushed over secure APB. */

/* Bit 0 : Key successfully pushed over secure APB. */
#define KMU_EVENTS_KEYSLOT_PUSHED_EVENTS_KEYSLOT_PUSHED_Pos (0UL) /*!< Position of EVENTS_KEYSLOT_PUSHED field. */
#define KMU_EVENTS_KEYSLOT_PUSHED_EVENTS_KEYSLOT_PUSHED_Msk (0x1UL << KMU_EVENTS_KEYSLOT_PUSHED_EVENTS_KEYSLOT_PUSHED_Pos) /*!< Bit mask of EVENTS_KEYSLOT_PUSHED field. */
#define KMU_EVENTS_KEYSLOT_PUSHED_EVENTS_KEYSLOT_PUSHED_NotGenerated (0UL) /*!< Event not generated */
#define KMU_EVENTS_KEYSLOT_PUSHED_EVENTS_KEYSLOT_PUSHED_Generated (1UL) /*!< Event generated */

/* Register: KMU_EVENTS_KEYSLOT_REVOKED */
/* Description: Key has been revoked and cannot be tasked for selection. */

/* Bit 0 : Key has been revoked and cannot be tasked for selection. */
#define KMU_EVENTS_KEYSLOT_REVOKED_EVENTS_KEYSLOT_REVOKED_Pos (0UL) /*!< Position of EVENTS_KEYSLOT_REVOKED field. */
#define KMU_EVENTS_KEYSLOT_REVOKED_EVENTS_KEYSLOT_REVOKED_Msk (0x1UL << KMU_EVENTS_KEYSLOT_REVOKED_EVENTS_KEYSLOT_REVOKED_Pos) /*!< Bit mask of EVENTS_KEYSLOT_REVOKED field. */
#define KMU_EVENTS_KEYSLOT_REVOKED_EVENTS_KEYSLOT_REVOKED_NotGenerated (0UL) /*!< Event not generated */
#define KMU_EVENTS_KEYSLOT_REVOKED_EVENTS_KEYSLOT_REVOKED_Generated (1UL) /*!< Event generated */

/* Register: KMU_EVENTS_KEYSLOT_ERROR */
/* Description: No key slot selected or no destination address defined or error during push mechanism. */

/* Bit 0 : No key slot selected or no destination address defined or error during push mechanism. */
#define KMU_EVENTS_KEYSLOT_ERROR_EVENTS_KEYSLOT_ERROR_Pos (0UL) /*!< Position of EVENTS_KEYSLOT_ERROR field. */
#define KMU_EVENTS_KEYSLOT_ERROR_EVENTS_KEYSLOT_ERROR_Msk (0x1UL << KMU_EVENTS_KEYSLOT_ERROR_EVENTS_KEYSLOT_ERROR_Pos) /*!< Bit mask of EVENTS_KEYSLOT_ERROR field. */
#define KMU_EVENTS_KEYSLOT_ERROR_EVENTS_KEYSLOT_ERROR_NotGenerated (0UL) /*!< Event not generated */
#define KMU_EVENTS_KEYSLOT_ERROR_EVENTS_KEYSLOT_ERROR_Generated (1UL) /*!< Event generated */

/* Register: KMU_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 2 : Enable or disable interrupt for event KEYSLOT_ERROR */
#define KMU_INTEN_KEYSLOT_ERROR_Pos (2UL) /*!< Position of KEYSLOT_ERROR field. */
#define KMU_INTEN_KEYSLOT_ERROR_Msk (0x1UL << KMU_INTEN_KEYSLOT_ERROR_Pos) /*!< Bit mask of KEYSLOT_ERROR field. */
#define KMU_INTEN_KEYSLOT_ERROR_Disabled (0UL) /*!< Disable */
#define KMU_INTEN_KEYSLOT_ERROR_Enabled (1UL) /*!< Enable */

/* Bit 1 : Enable or disable interrupt for event KEYSLOT_REVOKED */
#define KMU_INTEN_KEYSLOT_REVOKED_Pos (1UL) /*!< Position of KEYSLOT_REVOKED field. */
#define KMU_INTEN_KEYSLOT_REVOKED_Msk (0x1UL << KMU_INTEN_KEYSLOT_REVOKED_Pos) /*!< Bit mask of KEYSLOT_REVOKED field. */
#define KMU_INTEN_KEYSLOT_REVOKED_Disabled (0UL) /*!< Disable */
#define KMU_INTEN_KEYSLOT_REVOKED_Enabled (1UL) /*!< Enable */

/* Bit 0 : Enable or disable interrupt for event KEYSLOT_PUSHED */
#define KMU_INTEN_KEYSLOT_PUSHED_Pos (0UL) /*!< Position of KEYSLOT_PUSHED field. */
#define KMU_INTEN_KEYSLOT_PUSHED_Msk (0x1UL << KMU_INTEN_KEYSLOT_PUSHED_Pos) /*!< Bit mask of KEYSLOT_PUSHED field. */
#define KMU_INTEN_KEYSLOT_PUSHED_Disabled (0UL) /*!< Disable */
#define KMU_INTEN_KEYSLOT_PUSHED_Enabled (1UL) /*!< Enable */

/* Register: KMU_INTENSET */
/* Description: Enable interrupt */

/* Bit 2 : Write '1' to enable interrupt for event KEYSLOT_ERROR */
#define KMU_INTENSET_KEYSLOT_ERROR_Pos (2UL) /*!< Position of KEYSLOT_ERROR field. */
#define KMU_INTENSET_KEYSLOT_ERROR_Msk (0x1UL << KMU_INTENSET_KEYSLOT_ERROR_Pos) /*!< Bit mask of KEYSLOT_ERROR field. */
#define KMU_INTENSET_KEYSLOT_ERROR_Disabled (0UL) /*!< Read: Disabled */
#define KMU_INTENSET_KEYSLOT_ERROR_Enabled (1UL) /*!< Read: Enabled */
#define KMU_INTENSET_KEYSLOT_ERROR_Set (1UL) /*!< Enable */

/* Bit 1 : Write '1' to enable interrupt for event KEYSLOT_REVOKED */
#define KMU_INTENSET_KEYSLOT_REVOKED_Pos (1UL) /*!< Position of KEYSLOT_REVOKED field. */
#define KMU_INTENSET_KEYSLOT_REVOKED_Msk (0x1UL << KMU_INTENSET_KEYSLOT_REVOKED_Pos) /*!< Bit mask of KEYSLOT_REVOKED field. */
#define KMU_INTENSET_KEYSLOT_REVOKED_Disabled (0UL) /*!< Read: Disabled */
#define KMU_INTENSET_KEYSLOT_REVOKED_Enabled (1UL) /*!< Read: Enabled */
#define KMU_INTENSET_KEYSLOT_REVOKED_Set (1UL) /*!< Enable */

/* Bit 0 : Write '1' to enable interrupt for event KEYSLOT_PUSHED */
#define KMU_INTENSET_KEYSLOT_PUSHED_Pos (0UL) /*!< Position of KEYSLOT_PUSHED field. */
#define KMU_INTENSET_KEYSLOT_PUSHED_Msk (0x1UL << KMU_INTENSET_KEYSLOT_PUSHED_Pos) /*!< Bit mask of KEYSLOT_PUSHED field. */
#define KMU_INTENSET_KEYSLOT_PUSHED_Disabled (0UL) /*!< Read: Disabled */
#define KMU_INTENSET_KEYSLOT_PUSHED_Enabled (1UL) /*!< Read: Enabled */
#define KMU_INTENSET_KEYSLOT_PUSHED_Set (1UL) /*!< Enable */

/* Register: KMU_INTENCLR */
/* Description: Disable interrupt */

/* Bit 2 : Write '1' to disable interrupt for event KEYSLOT_ERROR */
#define KMU_INTENCLR_KEYSLOT_ERROR_Pos (2UL) /*!< Position of KEYSLOT_ERROR field. */
#define KMU_INTENCLR_KEYSLOT_ERROR_Msk (0x1UL << KMU_INTENCLR_KEYSLOT_ERROR_Pos) /*!< Bit mask of KEYSLOT_ERROR field. */
#define KMU_INTENCLR_KEYSLOT_ERROR_Disabled (0UL) /*!< Read: Disabled */
#define KMU_INTENCLR_KEYSLOT_ERROR_Enabled (1UL) /*!< Read: Enabled */
#define KMU_INTENCLR_KEYSLOT_ERROR_Clear (1UL) /*!< Disable */

/* Bit 1 : Write '1' to disable interrupt for event KEYSLOT_REVOKED */
#define KMU_INTENCLR_KEYSLOT_REVOKED_Pos (1UL) /*!< Position of KEYSLOT_REVOKED field. */
#define KMU_INTENCLR_KEYSLOT_REVOKED_Msk (0x1UL << KMU_INTENCLR_KEYSLOT_REVOKED_Pos) /*!< Bit mask of KEYSLOT_REVOKED field. */
#define KMU_INTENCLR_KEYSLOT_REVOKED_Disabled (0UL) /*!< Read: Disabled */
#define KMU_INTENCLR_KEYSLOT_REVOKED_Enabled (1UL) /*!< Read: Enabled */
#define KMU_INTENCLR_KEYSLOT_REVOKED_Clear (1UL) /*!< Disable */

/* Bit 0 : Write '1' to disable interrupt for event KEYSLOT_PUSHED */
#define KMU_INTENCLR_KEYSLOT_PUSHED_Pos (0UL) /*!< Position of KEYSLOT_PUSHED field. */
#define KMU_INTENCLR_KEYSLOT_PUSHED_Msk (0x1UL << KMU_INTENCLR_KEYSLOT_PUSHED_Pos) /*!< Bit mask of KEYSLOT_PUSHED field. */
#define KMU_INTENCLR_KEYSLOT_PUSHED_Disabled (0UL) /*!< Read: Disabled */
#define KMU_INTENCLR_KEYSLOT_PUSHED_Enabled (1UL) /*!< Read: Enabled */
#define KMU_INTENCLR_KEYSLOT_PUSHED_Clear (1UL) /*!< Disable */

/* Register: KMU_INTPEND */
/* Description: Pending interrupts */

/* Bit 2 : Read pending status of interrupt for event KEYSLOT_ERROR */
#define KMU_INTPEND_KEYSLOT_ERROR_Pos (2UL) /*!< Position of KEYSLOT_ERROR field. */
#define KMU_INTPEND_KEYSLOT_ERROR_Msk (0x1UL << KMU_INTPEND_KEYSLOT_ERROR_Pos) /*!< Bit mask of KEYSLOT_ERROR field. */
#define KMU_INTPEND_KEYSLOT_ERROR_NotPending (0UL) /*!< Read: Not pending */
#define KMU_INTPEND_KEYSLOT_ERROR_Pending (1UL) /*!< Read: Pending */

/* Bit 1 : Read pending status of interrupt for event KEYSLOT_REVOKED */
#define KMU_INTPEND_KEYSLOT_REVOKED_Pos (1UL) /*!< Position of KEYSLOT_REVOKED field. */
#define KMU_INTPEND_KEYSLOT_REVOKED_Msk (0x1UL << KMU_INTPEND_KEYSLOT_REVOKED_Pos) /*!< Bit mask of KEYSLOT_REVOKED field. */
#define KMU_INTPEND_KEYSLOT_REVOKED_NotPending (0UL) /*!< Read: Not pending */
#define KMU_INTPEND_KEYSLOT_REVOKED_Pending (1UL) /*!< Read: Pending */

/* Bit 0 : Read pending status of interrupt for event KEYSLOT_PUSHED */
#define KMU_INTPEND_KEYSLOT_PUSHED_Pos (0UL) /*!< Position of KEYSLOT_PUSHED field. */
#define KMU_INTPEND_KEYSLOT_PUSHED_Msk (0x1UL << KMU_INTPEND_KEYSLOT_PUSHED_Pos) /*!< Bit mask of KEYSLOT_PUSHED field. */
#define KMU_INTPEND_KEYSLOT_PUSHED_NotPending (0UL) /*!< Read: Not pending */
#define KMU_INTPEND_KEYSLOT_PUSHED_Pending (1UL) /*!< Read: Pending */

/* Register: KMU_STATUS */
/* Description: Status bits for KMU operation. */

/* Bit 1 : Violation status */
#define KMU_STATUS_BLOCKED_Pos (1UL) /*!< Position of BLOCKED field. */
#define KMU_STATUS_BLOCKED_Msk (0x1UL << KMU_STATUS_BLOCKED_Pos) /*!< Bit mask of BLOCKED field. */
#define KMU_STATUS_BLOCKED_Disabled (0UL) /*!< No access violation detected. */
#define KMU_STATUS_BLOCKED_Enabled (1UL) /*!< Access violation detected and blocked. */

/* Bit 0 : Key slot ID successfully selected by the KMU. */
#define KMU_STATUS_SELECTED_Pos (0UL) /*!< Position of SELECTED field. */
#define KMU_STATUS_SELECTED_Msk (0x1UL << KMU_STATUS_SELECTED_Pos) /*!< Bit mask of SELECTED field. */
#define KMU_STATUS_SELECTED_Disabled (0UL) /*!< No key slot ID selected by KMU */
#define KMU_STATUS_SELECTED_Enabled (1UL) /*!< Key slot ID successfully selected by KMU */

/* Register: KMU_SELECTKEYSLOT */
/* Description: Select key slot ID to be read over AHB or pushed over secure APB when TASKS_PUSH_KEYSLOT is started. */

/* Bits 7..0 : Select key slot ID to be read over AHB or pushed over secure APB when TASKS_PUSH_KEYSLOT is started. */
#define KMU_SELECTKEYSLOT_ID_Pos (0UL) /*!< Position of ID field. */
#define KMU_SELECTKEYSLOT_ID_Msk (0xFFUL << KMU_SELECTKEYSLOT_ID_Pos) /*!< Bit mask of ID field. */


/* Peripheral: LFCLKCALIBMEAS */
/* Description: LfClk Calibration Measurement */

/* Register: LFCLKCALIBMEAS_TASKS_START */
/* Description: Start Measuring */

/* Bit 0 : Start Measuring */
#define LFCLKCALIBMEAS_TASKS_START_TASKS_START_Pos (0UL) /*!< Position of TASKS_START field. */
#define LFCLKCALIBMEAS_TASKS_START_TASKS_START_Msk (0x1UL << LFCLKCALIBMEAS_TASKS_START_TASKS_START_Pos) /*!< Bit mask of TASKS_START field. */
#define LFCLKCALIBMEAS_TASKS_START_TASKS_START_Trigger (1UL) /*!< Trigger task */

/* Register: LFCLKCALIBMEAS_TASKS_STOP */
/* Description: Switch LfClkCalibMeas to STOPPED state. Brings LfClkCalibMeas from SHUTDOWN state to a configurable state before a measurement is launched. */

/* Bit 0 : Switch LfClkCalibMeas to STOPPED state. Brings LfClkCalibMeas from SHUTDOWN state to a configurable state before a measurement is launched. */
#define LFCLKCALIBMEAS_TASKS_STOP_TASKS_STOP_Pos (0UL) /*!< Position of TASKS_STOP field. */
#define LFCLKCALIBMEAS_TASKS_STOP_TASKS_STOP_Msk (0x1UL << LFCLKCALIBMEAS_TASKS_STOP_TASKS_STOP_Pos) /*!< Bit mask of TASKS_STOP field. */
#define LFCLKCALIBMEAS_TASKS_STOP_TASKS_STOP_Trigger (1UL) /*!< Trigger task */

/* Register: LFCLKCALIBMEAS_TASKS_SHUTDOWN */
/* Description: Shut down LfClkCalibMeas */

/* Bit 0 : Shut down LfClkCalibMeas */
#define LFCLKCALIBMEAS_TASKS_SHUTDOWN_TASKS_SHUTDOWN_Pos (0UL) /*!< Position of TASKS_SHUTDOWN field. */
#define LFCLKCALIBMEAS_TASKS_SHUTDOWN_TASKS_SHUTDOWN_Msk (0x1UL << LFCLKCALIBMEAS_TASKS_SHUTDOWN_TASKS_SHUTDOWN_Pos) /*!< Bit mask of TASKS_SHUTDOWN field. */
#define LFCLKCALIBMEAS_TASKS_SHUTDOWN_TASKS_SHUTDOWN_Trigger (1UL) /*!< Trigger task */

/* Register: LFCLKCALIBMEAS_EVENTS_COMPLETE */
/* Description: Measurement completed. */

/* Bit 0 : Measurement completed. */
#define LFCLKCALIBMEAS_EVENTS_COMPLETE_EVENTS_COMPLETE_Pos (0UL) /*!< Position of EVENTS_COMPLETE field. */
#define LFCLKCALIBMEAS_EVENTS_COMPLETE_EVENTS_COMPLETE_Msk (0x1UL << LFCLKCALIBMEAS_EVENTS_COMPLETE_EVENTS_COMPLETE_Pos) /*!< Bit mask of EVENTS_COMPLETE field. */
#define LFCLKCALIBMEAS_EVENTS_COMPLETE_EVENTS_COMPLETE_NotGenerated (0UL) /*!< Event not generated */
#define LFCLKCALIBMEAS_EVENTS_COMPLETE_EVENTS_COMPLETE_Generated (1UL) /*!< Event generated */

/* Register: LFCLKCALIBMEAS_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 0 : Enable or disable interrupt for event COMPLETE */
#define LFCLKCALIBMEAS_INTEN_COMPLETE_Pos (0UL) /*!< Position of COMPLETE field. */
#define LFCLKCALIBMEAS_INTEN_COMPLETE_Msk (0x1UL << LFCLKCALIBMEAS_INTEN_COMPLETE_Pos) /*!< Bit mask of COMPLETE field. */
#define LFCLKCALIBMEAS_INTEN_COMPLETE_Disabled (0UL) /*!< Disable */
#define LFCLKCALIBMEAS_INTEN_COMPLETE_Enabled (1UL) /*!< Enable */

/* Register: LFCLKCALIBMEAS_INTENSET */
/* Description: Enable interrupt */

/* Bit 0 : Write '1' to enable interrupt for event COMPLETE */
#define LFCLKCALIBMEAS_INTENSET_COMPLETE_Pos (0UL) /*!< Position of COMPLETE field. */
#define LFCLKCALIBMEAS_INTENSET_COMPLETE_Msk (0x1UL << LFCLKCALIBMEAS_INTENSET_COMPLETE_Pos) /*!< Bit mask of COMPLETE field. */
#define LFCLKCALIBMEAS_INTENSET_COMPLETE_Disabled (0UL) /*!< Read: Disabled */
#define LFCLKCALIBMEAS_INTENSET_COMPLETE_Enabled (1UL) /*!< Read: Enabled */
#define LFCLKCALIBMEAS_INTENSET_COMPLETE_Set (1UL) /*!< Enable */

/* Register: LFCLKCALIBMEAS_INTENCLR */
/* Description: Disable interrupt */

/* Bit 0 : Write '1' to disable interrupt for event COMPLETE */
#define LFCLKCALIBMEAS_INTENCLR_COMPLETE_Pos (0UL) /*!< Position of COMPLETE field. */
#define LFCLKCALIBMEAS_INTENCLR_COMPLETE_Msk (0x1UL << LFCLKCALIBMEAS_INTENCLR_COMPLETE_Pos) /*!< Bit mask of COMPLETE field. */
#define LFCLKCALIBMEAS_INTENCLR_COMPLETE_Disabled (0UL) /*!< Read: Disabled */
#define LFCLKCALIBMEAS_INTENCLR_COMPLETE_Enabled (1UL) /*!< Read: Enabled */
#define LFCLKCALIBMEAS_INTENCLR_COMPLETE_Clear (1UL) /*!< Disable */

/* Register: LFCLKCALIBMEAS_INTPEND */
/* Description: Pending interrupts */

/* Bit 0 : Read pending status of interrupt for event COMPLETE */
#define LFCLKCALIBMEAS_INTPEND_COMPLETE_Pos (0UL) /*!< Position of COMPLETE field. */
#define LFCLKCALIBMEAS_INTPEND_COMPLETE_Msk (0x1UL << LFCLKCALIBMEAS_INTPEND_COMPLETE_Pos) /*!< Bit mask of COMPLETE field. */
#define LFCLKCALIBMEAS_INTPEND_COMPLETE_NotPending (0UL) /*!< Read: Not pending */
#define LFCLKCALIBMEAS_INTPEND_COMPLETE_Pending (1UL) /*!< Read: Pending */

/* Register: LFCLKCALIBMEAS_RUNTIME */
/* Description: Runtime status of the measurement. */

/* Bits 28..8 : lastMeasuredLfCycle */
#define LFCLKCALIBMEAS_RUNTIME_LMLC_Pos (8UL) /*!< Position of LMLC field. */
#define LFCLKCALIBMEAS_RUNTIME_LMLC_Msk (0x1FFFFFUL << LFCLKCALIBMEAS_RUNTIME_LMLC_Pos) /*!< Bit mask of LMLC field. */

/* Bits 3..0 : LastRingBufferIndex */
#define LFCLKCALIBMEAS_RUNTIME_LRBI_Pos (0UL) /*!< Position of LRBI field. */
#define LFCLKCALIBMEAS_RUNTIME_LRBI_Msk (0xFUL << LFCLKCALIBMEAS_RUNTIME_LRBI_Pos) /*!< Bit mask of LRBI field. */

/* Register: LFCLKCALIBMEAS_LCMEAS0 */
/* Description: Results of the measurement. */

/* Bits 31..0 : LfClk Measurement result for the series0. */
#define LFCLKCALIBMEAS_LCMEAS0_LCMEAS_Pos (0UL) /*!< Position of LCMEAS field. */
#define LFCLKCALIBMEAS_LCMEAS0_LCMEAS_Msk (0xFFFFFFFFUL << LFCLKCALIBMEAS_LCMEAS0_LCMEAS_Pos) /*!< Bit mask of LCMEAS field. */

/* Register: LFCLKCALIBMEAS_LCMEAS1 */
/* Description: Results of the measurement. */

/* Bits 31..0 : LfClk Measurement result for the series1. */
#define LFCLKCALIBMEAS_LCMEAS1_LCMEAS_Pos (0UL) /*!< Position of LCMEAS field. */
#define LFCLKCALIBMEAS_LCMEAS1_LCMEAS_Msk (0xFFFFFFFFUL << LFCLKCALIBMEAS_LCMEAS1_LCMEAS_Pos) /*!< Bit mask of LCMEAS field. */

/* Register: LFCLKCALIBMEAS_LCMEAS2 */
/* Description: Results of the measurement. */

/* Bits 31..0 : LfClk Measurement results for the series2. */
#define LFCLKCALIBMEAS_LCMEAS2_LCMEAS_Pos (0UL) /*!< Position of LCMEAS field. */
#define LFCLKCALIBMEAS_LCMEAS2_LCMEAS_Msk (0xFFFFFFFFUL << LFCLKCALIBMEAS_LCMEAS2_LCMEAS_Pos) /*!< Bit mask of LCMEAS field. */

/* Register: LFCLKCALIBMEAS_LCMEAS3 */
/* Description: Results of the measurement. */

/* Bits 31..0 : LfClk Measurement results for the series3. */
#define LFCLKCALIBMEAS_LCMEAS3_LCMEAS_Pos (0UL) /*!< Position of LCMEAS field. */
#define LFCLKCALIBMEAS_LCMEAS3_LCMEAS_Msk (0xFFFFFFFFUL << LFCLKCALIBMEAS_LCMEAS3_LCMEAS_Pos) /*!< Bit mask of LCMEAS field. */

/* Register: LFCLKCALIBMEAS_LCMEAS4 */
/* Description: Results of the measurement. */

/* Bits 31..0 : LfClk Measurement results for the series4. */
#define LFCLKCALIBMEAS_LCMEAS4_LCMEAS_Pos (0UL) /*!< Position of LCMEAS field. */
#define LFCLKCALIBMEAS_LCMEAS4_LCMEAS_Msk (0xFFFFFFFFUL << LFCLKCALIBMEAS_LCMEAS4_LCMEAS_Pos) /*!< Bit mask of LCMEAS field. */

/* Register: LFCLKCALIBMEAS_LCMEAS5 */
/* Description: Results of the measurement. */

/* Bits 31..0 : LfClk Measurement results for the series5. Only available, if HW parameter NUM_MEASUREMENTS set to larger than five. */
#define LFCLKCALIBMEAS_LCMEAS5_LCMEAS_Pos (0UL) /*!< Position of LCMEAS field. */
#define LFCLKCALIBMEAS_LCMEAS5_LCMEAS_Msk (0xFFFFFFFFUL << LFCLKCALIBMEAS_LCMEAS5_LCMEAS_Pos) /*!< Bit mask of LCMEAS field. */

/* Register: LFCLKCALIBMEAS_LCMEAS6 */
/* Description: Results of the measurement. */

/* Bits 31..0 : LfClk Measurement results for the series6. Only available, if HW parameter NUM_MEASUREMENTS set to larger than six. */
#define LFCLKCALIBMEAS_LCMEAS6_LCMEAS_Pos (0UL) /*!< Position of LCMEAS field. */
#define LFCLKCALIBMEAS_LCMEAS6_LCMEAS_Msk (0xFFFFFFFFUL << LFCLKCALIBMEAS_LCMEAS6_LCMEAS_Pos) /*!< Bit mask of LCMEAS field. */

/* Register: LFCLKCALIBMEAS_LCMEAS7 */
/* Description: Results of the measurement. */

/* Bits 31..0 : LfClk Measurement results for the series7. Only available, if HW parameter NUM_MEASUREMENTS set to larger than seven. */
#define LFCLKCALIBMEAS_LCMEAS7_LCMEAS_Pos (0UL) /*!< Position of LCMEAS field. */
#define LFCLKCALIBMEAS_LCMEAS7_LCMEAS_Msk (0xFFFFFFFFUL << LFCLKCALIBMEAS_LCMEAS7_LCMEAS_Pos) /*!< Bit mask of LCMEAS field. */

/* Register: LFCLKCALIBMEAS_LCMEAS8 */
/* Description: Results of the measurement. */

/* Bits 31..0 : LfClk Measurement results for the series8. Only available, if HW parameter NUM_MEASUREMENTS set to larger than eight. */
#define LFCLKCALIBMEAS_LCMEAS8_LCMEAS_Pos (0UL) /*!< Position of LCMEAS field. */
#define LFCLKCALIBMEAS_LCMEAS8_LCMEAS_Msk (0xFFFFFFFFUL << LFCLKCALIBMEAS_LCMEAS8_LCMEAS_Pos) /*!< Bit mask of LCMEAS field. */

/* Register: LFCLKCALIBMEAS_LCMEAS9 */
/* Description: Results of the measurement. */

/* Bits 31..0 : LfClk Measurement results for the series9. Only available, if HW parameter NUM_MEASUREMENTS set to larger than nine. */
#define LFCLKCALIBMEAS_LCMEAS9_LCMEAS_Pos (0UL) /*!< Position of LCMEAS field. */
#define LFCLKCALIBMEAS_LCMEAS9_LCMEAS_Msk (0xFFFFFFFFUL << LFCLKCALIBMEAS_LCMEAS9_LCMEAS_Pos) /*!< Bit mask of LCMEAS field. */

/* Register: LFCLKCALIBMEAS_STATE */
/* Description: Current running state of the IP. */

/* Bits 1..0 :   */
#define LFCLKCALIBMEAS_STATE_STATE_Pos (0UL) /*!< Position of STATE field. */
#define LFCLKCALIBMEAS_STATE_STATE_Msk (0x3UL << LFCLKCALIBMEAS_STATE_STATE_Pos) /*!< Bit mask of STATE field. */
#define LFCLKCALIBMEAS_STATE_STATE_SHUTDOWN (0UL) /*!< In SHUTDOWN. */
#define LFCLKCALIBMEAS_STATE_STATE_STOPPED (1UL) /*!< In STOPPED. */
#define LFCLKCALIBMEAS_STATE_STATE_RUNNING (2UL) /*!< In RUNNING. */
#define LFCLKCALIBMEAS_STATE_STATE_NA (3UL) /*!< NA. */

/* Register: LFCLKCALIBMEAS_MEASLEN */
/* Description: Length of the measurement. */

/* Bits 20..0 : Length of the measurement. */
#define LFCLKCALIBMEAS_MEASLEN_MEASLEN_Pos (0UL) /*!< Position of MEASLEN field. */
#define LFCLKCALIBMEAS_MEASLEN_MEASLEN_Msk (0x1FFFFFUL << LFCLKCALIBMEAS_MEASLEN_MEASLEN_Pos) /*!< Bit mask of MEASLEN field. */


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

/* Register: MCPLL_EVENTS_LOCKERROR */
/* Description: Error event, MCPLL no longer in lock */

/* Bit 0 : Error event, MCPLL no longer in lock */
#define MCPLL_EVENTS_LOCKERROR_EVENTS_LOCKERROR_Pos (0UL) /*!< Position of EVENTS_LOCKERROR field. */
#define MCPLL_EVENTS_LOCKERROR_EVENTS_LOCKERROR_Msk (0x1UL << MCPLL_EVENTS_LOCKERROR_EVENTS_LOCKERROR_Pos) /*!< Bit mask of EVENTS_LOCKERROR field. */
#define MCPLL_EVENTS_LOCKERROR_EVENTS_LOCKERROR_NotGenerated (0UL) /*!< Event not generated */
#define MCPLL_EVENTS_LOCKERROR_EVENTS_LOCKERROR_Generated (1UL) /*!< Event generated */

/* Register: MCPLL_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 0 : Enable or disable interrupt for event LOCKERROR */
#define MCPLL_INTEN_LOCKERROR_Pos (0UL) /*!< Position of LOCKERROR field. */
#define MCPLL_INTEN_LOCKERROR_Msk (0x1UL << MCPLL_INTEN_LOCKERROR_Pos) /*!< Bit mask of LOCKERROR field. */
#define MCPLL_INTEN_LOCKERROR_Disabled (0UL) /*!< Disable */
#define MCPLL_INTEN_LOCKERROR_Enabled (1UL) /*!< Enable */

/* Register: MCPLL_INTENSET */
/* Description: Enable interrupt */

/* Bit 0 : Write '1' to enable interrupt for event LOCKERROR */
#define MCPLL_INTENSET_LOCKERROR_Pos (0UL) /*!< Position of LOCKERROR field. */
#define MCPLL_INTENSET_LOCKERROR_Msk (0x1UL << MCPLL_INTENSET_LOCKERROR_Pos) /*!< Bit mask of LOCKERROR field. */
#define MCPLL_INTENSET_LOCKERROR_Disabled (0UL) /*!< Read: Disabled */
#define MCPLL_INTENSET_LOCKERROR_Enabled (1UL) /*!< Read: Enabled */
#define MCPLL_INTENSET_LOCKERROR_Set (1UL) /*!< Enable */

/* Register: MCPLL_INTENCLR */
/* Description: Disable interrupt */

/* Bit 0 : Write '1' to disable interrupt for event LOCKERROR */
#define MCPLL_INTENCLR_LOCKERROR_Pos (0UL) /*!< Position of LOCKERROR field. */
#define MCPLL_INTENCLR_LOCKERROR_Msk (0x1UL << MCPLL_INTENCLR_LOCKERROR_Pos) /*!< Bit mask of LOCKERROR field. */
#define MCPLL_INTENCLR_LOCKERROR_Disabled (0UL) /*!< Read: Disabled */
#define MCPLL_INTENCLR_LOCKERROR_Enabled (1UL) /*!< Read: Enabled */
#define MCPLL_INTENCLR_LOCKERROR_Clear (1UL) /*!< Disable */

/* Register: MCPLL_INTPEND */
/* Description: Pending interrupts */

/* Bit 0 : Read pending status of interrupt for event LOCKERROR */
#define MCPLL_INTPEND_LOCKERROR_Pos (0UL) /*!< Position of LOCKERROR field. */
#define MCPLL_INTPEND_LOCKERROR_Msk (0x1UL << MCPLL_INTPEND_LOCKERROR_Pos) /*!< Bit mask of LOCKERROR field. */
#define MCPLL_INTPEND_LOCKERROR_NotPending (0UL) /*!< Read: Not pending */
#define MCPLL_INTPEND_LOCKERROR_Pending (1UL) /*!< Read: Pending */

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
#define MCPLL_MA_MA_BYPASS (0UL) /*!< Bypass */
#define MCPLL_MA_MA_CLK614M4 (1UL) /*!< 614.4 MHz */
#define MCPLL_MA_MA_CLK307M2 (2UL) /*!< 307.2 MHz */
#define MCPLL_MA_MA_CLK153M6 (3UL) /*!< 153.6 MHz */
#define MCPLL_MA_MA_CLK76M8 (4UL) /*!< 76.8 MHz */
#define MCPLL_MA_MA_CLK163M84 (5UL) /*!< 163.84 MHz */
#define MCPLL_MA_MA_REFIN (6UL) /*!< 32 MHz */
#define MCPLL_MA_MA_GND (7UL) /*!< Nothing */

/* Register: MCPLL_MB */
/* Description: Post division ratio for OUTB */

/* Bits 2..0 : Post division ratio for OUTB */
#define MCPLL_MB_MB_Pos (0UL) /*!< Position of MB field. */
#define MCPLL_MB_MB_Msk (0x7UL << MCPLL_MB_MB_Pos) /*!< Bit mask of MB field. */
#define MCPLL_MB_MB_BYPASS (0UL) /*!< Bypass */
#define MCPLL_MB_MB_CLK614M4 (1UL) /*!< 614.4 MHz */
#define MCPLL_MB_MB_CLK307M2 (2UL) /*!< 307.2 MHz */
#define MCPLL_MB_MB_CLK153M6 (3UL) /*!< 153.6 MHz */
#define MCPLL_MB_MB_CLK76M8 (4UL) /*!< 76.8 MHz */
#define MCPLL_MB_MB_CLK38M4 (5UL) /*!< 38.4 MHz */
#define MCPLL_MB_MB_REFIN (6UL) /*!< 32 MHz */
#define MCPLL_MB_MB_GND (7UL) /*!< Nothing */

/* Register: MCPLL_MC */
/* Description: Post division ratio for OUTC */

/* Bits 2..0 : Post division ratio for OUTC */
#define MCPLL_MC_MC_Pos (0UL) /*!< Position of MC field. */
#define MCPLL_MC_MC_Msk (0x7UL << MCPLL_MC_MC_Pos) /*!< Bit mask of MC field. */
#define MCPLL_MC_MC_BYPASS (0UL) /*!< Bypass */
#define MCPLL_MC_MC_CLK614M4 (1UL) /*!< 614.4 MHz */
#define MCPLL_MC_MC_CLK307M2 (2UL) /*!< 307.2 MHz */
#define MCPLL_MC_MC_CLK153M6 (3UL) /*!< 153.6 MHz */
#define MCPLL_MC_MC_CLK76M8 (4UL) /*!< 76.8 MHz */
#define MCPLL_MC_MC_CLK163M84 (5UL) /*!< 163.84 MHz */
#define MCPLL_MC_MC_REFIN (6UL) /*!< 32 MHz */
#define MCPLL_MC_MC_GND (7UL) /*!< Nothing */

/* Register: MCPLL_MD */
/* Description: Post division ratio for OUTD */

/* Bits 2..0 : Post division ratio for OUTD */
#define MCPLL_MD_MD_Pos (0UL) /*!< Position of MD field. */
#define MCPLL_MD_MD_Msk (0x7UL << MCPLL_MD_MD_Pos) /*!< Bit mask of MD field. */
#define MCPLL_MD_MD_BYPASS (0UL) /*!< Bypass */
#define MCPLL_MD_MD_CLK614M4 (1UL) /*!< 614.4 MHz */
#define MCPLL_MD_MD_CLK307M2 (2UL) /*!< 307.2 MHz */
#define MCPLL_MD_MD_CLK153M6 (3UL) /*!< 153.6 MHz */
#define MCPLL_MD_MD_CLK76M8 (4UL) /*!< 76.8 MHz */
#define MCPLL_MD_MD_CLK38M4 (5UL) /*!< 38.4 MHz */
#define MCPLL_MD_MD_REFIN (6UL) /*!< 32 MHz */
#define MCPLL_MD_MD_GND (7UL) /*!< Nothing */

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

/* Register: MCPLL_OUTA_DRV */
/* Description: Drive strength for OUTA */

/* Bits 1..0 : Drive strength for OUTA */
#define MCPLL_OUTA_DRV_OUTA_DRV_Pos (0UL) /*!< Position of OUTA_DRV field. */
#define MCPLL_OUTA_DRV_OUTA_DRV_Msk (0x3UL << MCPLL_OUTA_DRV_OUTA_DRV_Pos) /*!< Bit mask of OUTA_DRV field. */

/* Register: MCPLL_OUTB_DRV */
/* Description: Drive strength for OUTB */

/* Bits 1..0 : Drive strength for OUTB */
#define MCPLL_OUTB_DRV_OUTB_DRV_Pos (0UL) /*!< Position of OUTB_DRV field. */
#define MCPLL_OUTB_DRV_OUTB_DRV_Msk (0x3UL << MCPLL_OUTB_DRV_OUTB_DRV_Pos) /*!< Bit mask of OUTB_DRV field. */

/* Register: MCPLL_OUTC_DRV */
/* Description: Drive strength for OUTC */

/* Bits 1..0 : Drive strength for OUTC */
#define MCPLL_OUTC_DRV_OUTC_DRV_Pos (0UL) /*!< Position of OUTC_DRV field. */
#define MCPLL_OUTC_DRV_OUTC_DRV_Msk (0x3UL << MCPLL_OUTC_DRV_OUTC_DRV_Pos) /*!< Bit mask of OUTC_DRV field. */

/* Register: MCPLL_OUTD_DRV */
/* Description: Drive strength for OUTD */

/* Bits 1..0 : Drive strength for OUTD */
#define MCPLL_OUTD_DRV_OUTD_DRV_Pos (0UL) /*!< Position of OUTD_DRV field. */
#define MCPLL_OUTD_DRV_OUTD_DRV_Msk (0x3UL << MCPLL_OUTD_DRV_OUTD_DRV_Pos) /*!< Bit mask of OUTD_DRV field. */

/* Register: MCPLL_INTMODE */
/* Description: Integer mode */

/* Bit 0 : Integer mode */
#define MCPLL_INTMODE_INTMODE_Pos (0UL) /*!< Position of INTMODE field. */
#define MCPLL_INTMODE_INTMODE_Msk (0x1UL << MCPLL_INTMODE_INTMODE_Pos) /*!< Bit mask of INTMODE field. */
#define MCPLL_INTMODE_INTMODE_Fractional (0UL) /*!< Fractional mode */
#define MCPLL_INTMODE_INTMODE_Integer (1UL) /*!< Integer mode */

/* Register: MCPLL_TEST */
/* Description: ATE test bus control */

/* Bits 3..0 : ATE test bus control */
#define MCPLL_TEST_ATE_Pos (0UL) /*!< Position of ATE field. */
#define MCPLL_TEST_ATE_Msk (0xFUL << MCPLL_TEST_ATE_Pos) /*!< Bit mask of ATE field. */

/* Register: MCPLL_ATB_ENABLE */
/* Description: Analog switch control for connecting ATB to GPIOs.
        Note that when the analog switch is enabled, digital driver of the GPIO must be in hiZ.	  
   	    Note also that the analog switch can be enabled also from elsewhere for testing other analog IPs. */

/* Bits 3..2 :   */
#define MCPLL_ATB_ENABLE_AE1_Pos (2UL) /*!< Position of AE1 field. */
#define MCPLL_ATB_ENABLE_AE1_Msk (0x3UL << MCPLL_ATB_ENABLE_AE1_Pos) /*!< Bit mask of AE1 field. */
#define MCPLL_ATB_ENABLE_AE1_Disconnected (0UL) /*!< No analog test signal connected (Alta: GPIO29). */
#define MCPLL_ATB_ENABLE_AE1_ATB1 (1UL) /*!< ATB1 connected. This controls only the GPIO analog switch. In order to get the test signal to GPIO. */
#define MCPLL_ATB_ENABLE_AE1_BYPASSCLK (2UL) /*!< MCPLL input connected. Can be used as reference or bypass clock. */
#define MCPLL_ATB_ENABLE_AE1_NOTALLOWED (3UL) /*!< Not allowed (both slices enabled). */

/* Bits 1..0 :   */
#define MCPLL_ATB_ENABLE_AE0_Pos (0UL) /*!< Position of AE0 field. */
#define MCPLL_ATB_ENABLE_AE0_Msk (0x3UL << MCPLL_ATB_ENABLE_AE0_Pos) /*!< Bit mask of AE0 field. */
#define MCPLL_ATB_ENABLE_AE0_Disconnected (0UL) /*!< No analog test signal connected (Alta: GPIO28). */
#define MCPLL_ATB_ENABLE_AE0_ATB0 (1UL) /*!< ATB0 connected. This controls only the GPIO analog switch. In order to get the test signal to GPIO. */
#define MCPLL_ATB_ENABLE_AE0_OUTD (2UL) /*!< MCPLL OUTD output connected. */
#define MCPLL_ATB_ENABLE_AE0_NOTALLOWED (3UL) /*!< Not allowed (both slices enabled). */


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

/* Register: MWU_INTEN */
/* Description: Enable or disable interrupt */

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


/* Peripheral: NVMC */
/* Description: Non Volatile Memory Controller */

/* Register: NVMC_READY */
/* Description: Ready flag */

/* Bit 0 : NVMC is ready or busy */
#define NVMC_READY_READY_Pos (0UL) /*!< Position of READY field. */
#define NVMC_READY_READY_Msk (0x1UL << NVMC_READY_READY_Pos) /*!< Bit mask of READY field. */
#define NVMC_READY_READY_Busy (0UL) /*!< NVMC is busy (on-going write or erase operation) */
#define NVMC_READY_READY_Ready (1UL) /*!< NVMC is ready */

/* Register: NVMC_READYNEXT */
/* Description: Ready flag */

/* Bit 0 : NVMC can accept a new write operation */
#define NVMC_READYNEXT_READYNEXT_Pos (0UL) /*!< Position of READYNEXT field. */
#define NVMC_READYNEXT_READYNEXT_Msk (0x1UL << NVMC_READYNEXT_READYNEXT_Pos) /*!< Bit mask of READYNEXT field. */
#define NVMC_READYNEXT_READYNEXT_Busy (0UL) /*!< NVMC cannot accept any write operation */
#define NVMC_READYNEXT_READYNEXT_Ready (1UL) /*!< NVMC is ready */

/* Register: NVMC_CONFIG */
/* Description: Configuration register */

/* Bits 2..0 : Program memory access mode. It is strongly recommended to only activate erase and write modes when they are actively used. Enabling write or erase will invalidate the cache and keep it invalidated. */
#define NVMC_CONFIG_WEN_Pos (0UL) /*!< Position of WEN field. */
#define NVMC_CONFIG_WEN_Msk (0x7UL << NVMC_CONFIG_WEN_Pos) /*!< Bit mask of WEN field. */
#define NVMC_CONFIG_WEN_Ren (0UL) /*!< Read only access */
#define NVMC_CONFIG_WEN_Wen (1UL) /*!< Write enabled */
#define NVMC_CONFIG_WEN_Een (2UL) /*!< Erase enabled */
#define NVMC_CONFIG_WEN_PEen (4UL) /*!< Partial Erase enabled */

/* Register: NVMC_ERASEALL */
/* Description: Register for erasing all non-volatile user memory */

/* Bit 0 : Erase all non-volatile memory including UICR registers. Note that the erase must be enabled using CONFIG.WEN before the non-volatile memory can be erased. */
#define NVMC_ERASEALL_ERASEALL_Pos (0UL) /*!< Position of ERASEALL field. */
#define NVMC_ERASEALL_ERASEALL_Msk (0x1UL << NVMC_ERASEALL_ERASEALL_Pos) /*!< Bit mask of ERASEALL field. */
#define NVMC_ERASEALL_ERASEALL_NoOperation (0UL) /*!< No operation */
#define NVMC_ERASEALL_ERASEALL_Erase (1UL) /*!< Start chip erase */

/* Register: NVMC_ERASEPAGEPARTIALCFG */
/* Description: Register for partial erase configuration */

/* Bits 6..0 : Duration of the partial erase in milliseconds */
#define NVMC_ERASEPAGEPARTIALCFG_DURATION_Pos (0UL) /*!< Position of DURATION field. */
#define NVMC_ERASEPAGEPARTIALCFG_DURATION_Msk (0x7FUL << NVMC_ERASEPAGEPARTIALCFG_DURATION_Pos) /*!< Bit mask of DURATION field. */

/* Register: NVMC_WAITSTATENUM */
/* Description: Register to set the number of waitstate for flash access To update the WAITSTATENUM field, the ACCESSCODE must be correct. */

/* Bits 31..16 : Access code for modifying this register */
#define NVMC_WAITSTATENUM_ACCESSCODE_Pos (16UL) /*!< Position of ACCESSCODE field. */
#define NVMC_WAITSTATENUM_ACCESSCODE_Msk (0xFFFFUL << NVMC_WAITSTATENUM_ACCESSCODE_Pos) /*!< Bit mask of ACCESSCODE field. */

/* Bits 3..0 : Flash wait states */
#define NVMC_WAITSTATENUM_WAITSTATENUM_Pos (0UL) /*!< Position of WAITSTATENUM field. */
#define NVMC_WAITSTATENUM_WAITSTATENUM_Msk (0xFUL << NVMC_WAITSTATENUM_WAITSTATENUM_Pos) /*!< Bit mask of WAITSTATENUM field. */

/* Register: NVMC_ICACHECNF */
/* Description: I-code cache configuration register. */

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
/* Description: I-code cache hit counter. */

/* Bits 31..0 : Number of cache hits */
#define NVMC_IHIT_HITS_Pos (0UL) /*!< Position of HITS field. */
#define NVMC_IHIT_HITS_Msk (0xFFFFFFFFUL << NVMC_IHIT_HITS_Pos) /*!< Bit mask of HITS field. */

/* Register: NVMC_IMISS */
/* Description: I-code cache miss counter. */

/* Bits 31..0 : Number of cache misses */
#define NVMC_IMISS_MISSES_Pos (0UL) /*!< Position of MISSES field. */
#define NVMC_IMISS_MISSES_Msk (0xFFFFFFFFUL << NVMC_IMISS_MISSES_Pos) /*!< Bit mask of MISSES field. */

/* Register: NVMC_CONFIGNS */
/* Description: Non SecureConfiguration register */

/* Bits 1..0 : Program memory access mode. It is strongly recommended to only activate erase and write modes when they are actively used. Enabling write or erase will invalidate the cache and keep it invalidated. */
#define NVMC_CONFIGNS_WEN_Pos (0UL) /*!< Position of WEN field. */
#define NVMC_CONFIGNS_WEN_Msk (0x3UL << NVMC_CONFIGNS_WEN_Pos) /*!< Bit mask of WEN field. */
#define NVMC_CONFIGNS_WEN_Ren (0UL) /*!< Read only access */
#define NVMC_CONFIGNS_WEN_Wen (1UL) /*!< Write enabled */
#define NVMC_CONFIGNS_WEN_Een (2UL) /*!< Erase enabled */

/* Register: NVMC_WRITEUICRNS */
/* Description: Non Secure APPROTECT enable register */

/* Bits 31..4 : Key to write in order to valid the write operation */
#define NVMC_WRITEUICRNS_KEY_Pos (4UL) /*!< Position of KEY field. */
#define NVMC_WRITEUICRNS_KEY_Msk (0xFFFFFFFUL << NVMC_WRITEUICRNS_KEY_Pos) /*!< Bit mask of KEY field. */
#define NVMC_WRITEUICRNS_KEY_Keyvalid (0xAFBE5A7UL) /*!< Key value */

/* Bit 0 : Allow non secure to set APPROTECT */
#define NVMC_WRITEUICRNS_SET_Pos (0UL) /*!< Position of SET field. */
#define NVMC_WRITEUICRNS_SET_Msk (0x1UL << NVMC_WRITEUICRNS_SET_Pos) /*!< Bit mask of SET field. */
#define NVMC_WRITEUICRNS_SET_Set (1UL) /*!< Set value */

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

/* Bits 19..18 : Control the REDEN(1:0) signal */
#define NVMC_TESTCONTROLLINES_REDEN10_Pos (18UL) /*!< Position of REDEN10 field. */
#define NVMC_TESTCONTROLLINES_REDEN10_Msk (0x3UL << NVMC_TESTCONTROLLINES_REDEN10_Pos) /*!< Bit mask of REDEN10 field. */

/* Bit 17 : Control the PDM25 signal */
#define NVMC_TESTCONTROLLINES_PDM25_Pos (17UL) /*!< Position of PDM25 field. */
#define NVMC_TESTCONTROLLINES_PDM25_Msk (0x1UL << NVMC_TESTCONTROLLINES_PDM25_Pos) /*!< Bit mask of PDM25 field. */

/* Bit 16 : Control the LVEN signal */
#define NVMC_TESTCONTROLLINES_LVEN_Pos (16UL) /*!< Position of LVEN field. */
#define NVMC_TESTCONTROLLINES_LVEN_Msk (0x1UL << NVMC_TESTCONTROLLINES_LVEN_Pos) /*!< Bit mask of LVEN field. */

/* Bits 15..14 : Control the REDEN(3:2) signal */
#define NVMC_TESTCONTROLLINES_REDEN32_Pos (14UL) /*!< Position of REDEN32 field. */
#define NVMC_TESTCONTROLLINES_REDEN32_Msk (0x3UL << NVMC_TESTCONTROLLINES_REDEN32_Pos) /*!< Bit mask of REDEN32 field. */

/* Register: NVMC_TESTCONTROLADDR */
/* Description: Direct flash test control, address lines */

/* Bits 17..6 : Control the XADDR signal */
#define NVMC_TESTCONTROLADDR_XADDR_Pos (6UL) /*!< Position of XADDR field. */
#define NVMC_TESTCONTROLADDR_XADDR_Msk (0xFFFUL << NVMC_TESTCONTROLADDR_XADDR_Pos) /*!< Bit mask of XADDR field. */

/* Bits 5..0 : Control the YADDR signal */
#define NVMC_TESTCONTROLADDR_YADDR_Pos (0UL) /*!< Position of YADDR field. */
#define NVMC_TESTCONTROLADDR_YADDR_Msk (0x3FUL << NVMC_TESTCONTROLADDR_YADDR_Pos) /*!< Bit mask of YADDR field. */

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

/* Bit 9 : P0.9 pin */
#define GPIO_OUT_PIN9_Pos (9UL) /*!< Position of PIN9 field. */
#define GPIO_OUT_PIN9_Msk (0x1UL << GPIO_OUT_PIN9_Pos) /*!< Bit mask of PIN9 field. */
#define GPIO_OUT_PIN9_Low (0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN9_High (1UL) /*!< Pin driver is high */

/* Bit 8 : P0.8 pin */
#define GPIO_OUT_PIN8_Pos (8UL) /*!< Position of PIN8 field. */
#define GPIO_OUT_PIN8_Msk (0x1UL << GPIO_OUT_PIN8_Pos) /*!< Bit mask of PIN8 field. */
#define GPIO_OUT_PIN8_Low (0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN8_High (1UL) /*!< Pin driver is high */

/* Bit 7 : P0.7 pin */
#define GPIO_OUT_PIN7_Pos (7UL) /*!< Position of PIN7 field. */
#define GPIO_OUT_PIN7_Msk (0x1UL << GPIO_OUT_PIN7_Pos) /*!< Bit mask of PIN7 field. */
#define GPIO_OUT_PIN7_Low (0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN7_High (1UL) /*!< Pin driver is high */

/* Bit 6 : P0.6 pin */
#define GPIO_OUT_PIN6_Pos (6UL) /*!< Position of PIN6 field. */
#define GPIO_OUT_PIN6_Msk (0x1UL << GPIO_OUT_PIN6_Pos) /*!< Bit mask of PIN6 field. */
#define GPIO_OUT_PIN6_Low (0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN6_High (1UL) /*!< Pin driver is high */

/* Bit 5 : P0.5 pin */
#define GPIO_OUT_PIN5_Pos (5UL) /*!< Position of PIN5 field. */
#define GPIO_OUT_PIN5_Msk (0x1UL << GPIO_OUT_PIN5_Pos) /*!< Bit mask of PIN5 field. */
#define GPIO_OUT_PIN5_Low (0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN5_High (1UL) /*!< Pin driver is high */

/* Bit 4 : P0.4 pin */
#define GPIO_OUT_PIN4_Pos (4UL) /*!< Position of PIN4 field. */
#define GPIO_OUT_PIN4_Msk (0x1UL << GPIO_OUT_PIN4_Pos) /*!< Bit mask of PIN4 field. */
#define GPIO_OUT_PIN4_Low (0UL) /*!< Pin driver is low */
#define GPIO_OUT_PIN4_High (1UL) /*!< Pin driver is high */

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

/* Bit 9 : P0.9 pin */
#define GPIO_OUTSET_PIN9_Pos (9UL) /*!< Position of PIN9 field. */
#define GPIO_OUTSET_PIN9_Msk (0x1UL << GPIO_OUTSET_PIN9_Pos) /*!< Bit mask of PIN9 field. */
#define GPIO_OUTSET_PIN9_Low (0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN9_High (1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN9_Set (1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 8 : P0.8 pin */
#define GPIO_OUTSET_PIN8_Pos (8UL) /*!< Position of PIN8 field. */
#define GPIO_OUTSET_PIN8_Msk (0x1UL << GPIO_OUTSET_PIN8_Pos) /*!< Bit mask of PIN8 field. */
#define GPIO_OUTSET_PIN8_Low (0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN8_High (1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN8_Set (1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 7 : P0.7 pin */
#define GPIO_OUTSET_PIN7_Pos (7UL) /*!< Position of PIN7 field. */
#define GPIO_OUTSET_PIN7_Msk (0x1UL << GPIO_OUTSET_PIN7_Pos) /*!< Bit mask of PIN7 field. */
#define GPIO_OUTSET_PIN7_Low (0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN7_High (1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN7_Set (1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 6 : P0.6 pin */
#define GPIO_OUTSET_PIN6_Pos (6UL) /*!< Position of PIN6 field. */
#define GPIO_OUTSET_PIN6_Msk (0x1UL << GPIO_OUTSET_PIN6_Pos) /*!< Bit mask of PIN6 field. */
#define GPIO_OUTSET_PIN6_Low (0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN6_High (1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN6_Set (1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 5 : P0.5 pin */
#define GPIO_OUTSET_PIN5_Pos (5UL) /*!< Position of PIN5 field. */
#define GPIO_OUTSET_PIN5_Msk (0x1UL << GPIO_OUTSET_PIN5_Pos) /*!< Bit mask of PIN5 field. */
#define GPIO_OUTSET_PIN5_Low (0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN5_High (1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN5_Set (1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

/* Bit 4 : P0.4 pin */
#define GPIO_OUTSET_PIN4_Pos (4UL) /*!< Position of PIN4 field. */
#define GPIO_OUTSET_PIN4_Msk (0x1UL << GPIO_OUTSET_PIN4_Pos) /*!< Bit mask of PIN4 field. */
#define GPIO_OUTSET_PIN4_Low (0UL) /*!< Read: pin driver is low */
#define GPIO_OUTSET_PIN4_High (1UL) /*!< Read: pin driver is high */
#define GPIO_OUTSET_PIN4_Set (1UL) /*!< Write: writing a '1' sets the pin high; writing a '0' has no effect */

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

/* Bit 9 : P0.9 pin */
#define GPIO_OUTCLR_PIN9_Pos (9UL) /*!< Position of PIN9 field. */
#define GPIO_OUTCLR_PIN9_Msk (0x1UL << GPIO_OUTCLR_PIN9_Pos) /*!< Bit mask of PIN9 field. */
#define GPIO_OUTCLR_PIN9_Low (0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN9_High (1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN9_Clear (1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 8 : P0.8 pin */
#define GPIO_OUTCLR_PIN8_Pos (8UL) /*!< Position of PIN8 field. */
#define GPIO_OUTCLR_PIN8_Msk (0x1UL << GPIO_OUTCLR_PIN8_Pos) /*!< Bit mask of PIN8 field. */
#define GPIO_OUTCLR_PIN8_Low (0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN8_High (1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN8_Clear (1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 7 : P0.7 pin */
#define GPIO_OUTCLR_PIN7_Pos (7UL) /*!< Position of PIN7 field. */
#define GPIO_OUTCLR_PIN7_Msk (0x1UL << GPIO_OUTCLR_PIN7_Pos) /*!< Bit mask of PIN7 field. */
#define GPIO_OUTCLR_PIN7_Low (0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN7_High (1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN7_Clear (1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 6 : P0.6 pin */
#define GPIO_OUTCLR_PIN6_Pos (6UL) /*!< Position of PIN6 field. */
#define GPIO_OUTCLR_PIN6_Msk (0x1UL << GPIO_OUTCLR_PIN6_Pos) /*!< Bit mask of PIN6 field. */
#define GPIO_OUTCLR_PIN6_Low (0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN6_High (1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN6_Clear (1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 5 : P0.5 pin */
#define GPIO_OUTCLR_PIN5_Pos (5UL) /*!< Position of PIN5 field. */
#define GPIO_OUTCLR_PIN5_Msk (0x1UL << GPIO_OUTCLR_PIN5_Pos) /*!< Bit mask of PIN5 field. */
#define GPIO_OUTCLR_PIN5_Low (0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN5_High (1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN5_Clear (1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

/* Bit 4 : P0.4 pin */
#define GPIO_OUTCLR_PIN4_Pos (4UL) /*!< Position of PIN4 field. */
#define GPIO_OUTCLR_PIN4_Msk (0x1UL << GPIO_OUTCLR_PIN4_Pos) /*!< Bit mask of PIN4 field. */
#define GPIO_OUTCLR_PIN4_Low (0UL) /*!< Read: pin driver is low */
#define GPIO_OUTCLR_PIN4_High (1UL) /*!< Read: pin driver is high */
#define GPIO_OUTCLR_PIN4_Clear (1UL) /*!< Write: writing a '1' sets the pin low; writing a '0' has no effect */

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

/* Bit 9 : P0.9 pin */
#define GPIO_IN_PIN9_Pos (9UL) /*!< Position of PIN9 field. */
#define GPIO_IN_PIN9_Msk (0x1UL << GPIO_IN_PIN9_Pos) /*!< Bit mask of PIN9 field. */
#define GPIO_IN_PIN9_Low (0UL) /*!< Pin input is low */
#define GPIO_IN_PIN9_High (1UL) /*!< Pin input is high */

/* Bit 8 : P0.8 pin */
#define GPIO_IN_PIN8_Pos (8UL) /*!< Position of PIN8 field. */
#define GPIO_IN_PIN8_Msk (0x1UL << GPIO_IN_PIN8_Pos) /*!< Bit mask of PIN8 field. */
#define GPIO_IN_PIN8_Low (0UL) /*!< Pin input is low */
#define GPIO_IN_PIN8_High (1UL) /*!< Pin input is high */

/* Bit 7 : P0.7 pin */
#define GPIO_IN_PIN7_Pos (7UL) /*!< Position of PIN7 field. */
#define GPIO_IN_PIN7_Msk (0x1UL << GPIO_IN_PIN7_Pos) /*!< Bit mask of PIN7 field. */
#define GPIO_IN_PIN7_Low (0UL) /*!< Pin input is low */
#define GPIO_IN_PIN7_High (1UL) /*!< Pin input is high */

/* Bit 6 : P0.6 pin */
#define GPIO_IN_PIN6_Pos (6UL) /*!< Position of PIN6 field. */
#define GPIO_IN_PIN6_Msk (0x1UL << GPIO_IN_PIN6_Pos) /*!< Bit mask of PIN6 field. */
#define GPIO_IN_PIN6_Low (0UL) /*!< Pin input is low */
#define GPIO_IN_PIN6_High (1UL) /*!< Pin input is high */

/* Bit 5 : P0.5 pin */
#define GPIO_IN_PIN5_Pos (5UL) /*!< Position of PIN5 field. */
#define GPIO_IN_PIN5_Msk (0x1UL << GPIO_IN_PIN5_Pos) /*!< Bit mask of PIN5 field. */
#define GPIO_IN_PIN5_Low (0UL) /*!< Pin input is low */
#define GPIO_IN_PIN5_High (1UL) /*!< Pin input is high */

/* Bit 4 : P0.4 pin */
#define GPIO_IN_PIN4_Pos (4UL) /*!< Position of PIN4 field. */
#define GPIO_IN_PIN4_Msk (0x1UL << GPIO_IN_PIN4_Pos) /*!< Bit mask of PIN4 field. */
#define GPIO_IN_PIN4_Low (0UL) /*!< Pin input is low */
#define GPIO_IN_PIN4_High (1UL) /*!< Pin input is high */

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

/* Bit 9 : P0.9 pin */
#define GPIO_DIR_PIN9_Pos (9UL) /*!< Position of PIN9 field. */
#define GPIO_DIR_PIN9_Msk (0x1UL << GPIO_DIR_PIN9_Pos) /*!< Bit mask of PIN9 field. */
#define GPIO_DIR_PIN9_Input (0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN9_Output (1UL) /*!< Pin set as output */

/* Bit 8 : P0.8 pin */
#define GPIO_DIR_PIN8_Pos (8UL) /*!< Position of PIN8 field. */
#define GPIO_DIR_PIN8_Msk (0x1UL << GPIO_DIR_PIN8_Pos) /*!< Bit mask of PIN8 field. */
#define GPIO_DIR_PIN8_Input (0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN8_Output (1UL) /*!< Pin set as output */

/* Bit 7 : P0.7 pin */
#define GPIO_DIR_PIN7_Pos (7UL) /*!< Position of PIN7 field. */
#define GPIO_DIR_PIN7_Msk (0x1UL << GPIO_DIR_PIN7_Pos) /*!< Bit mask of PIN7 field. */
#define GPIO_DIR_PIN7_Input (0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN7_Output (1UL) /*!< Pin set as output */

/* Bit 6 : P0.6 pin */
#define GPIO_DIR_PIN6_Pos (6UL) /*!< Position of PIN6 field. */
#define GPIO_DIR_PIN6_Msk (0x1UL << GPIO_DIR_PIN6_Pos) /*!< Bit mask of PIN6 field. */
#define GPIO_DIR_PIN6_Input (0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN6_Output (1UL) /*!< Pin set as output */

/* Bit 5 : P0.5 pin */
#define GPIO_DIR_PIN5_Pos (5UL) /*!< Position of PIN5 field. */
#define GPIO_DIR_PIN5_Msk (0x1UL << GPIO_DIR_PIN5_Pos) /*!< Bit mask of PIN5 field. */
#define GPIO_DIR_PIN5_Input (0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN5_Output (1UL) /*!< Pin set as output */

/* Bit 4 : P0.4 pin */
#define GPIO_DIR_PIN4_Pos (4UL) /*!< Position of PIN4 field. */
#define GPIO_DIR_PIN4_Msk (0x1UL << GPIO_DIR_PIN4_Pos) /*!< Bit mask of PIN4 field. */
#define GPIO_DIR_PIN4_Input (0UL) /*!< Pin set as input */
#define GPIO_DIR_PIN4_Output (1UL) /*!< Pin set as output */

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

/* Bit 9 : Status on whether PIN9 has met criteria set in PIN_CNF9.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN9_Pos (9UL) /*!< Position of PIN9 field. */
#define GPIO_LATCH_PIN9_Msk (0x1UL << GPIO_LATCH_PIN9_Pos) /*!< Bit mask of PIN9 field. */
#define GPIO_LATCH_PIN9_NotLatched (0UL) /*!< Read: Criteria has not been met */
#define GPIO_LATCH_PIN9_Latched (1UL) /*!< Read: Criteria has been met */
#define GPIO_LATCH_PIN9_Clear (1UL) /*!< Write: writing a '1' clears the reg; writing a '0' has no effect */

/* Bit 8 : Status on whether PIN8 has met criteria set in PIN_CNF8.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN8_Pos (8UL) /*!< Position of PIN8 field. */
#define GPIO_LATCH_PIN8_Msk (0x1UL << GPIO_LATCH_PIN8_Pos) /*!< Bit mask of PIN8 field. */
#define GPIO_LATCH_PIN8_NotLatched (0UL) /*!< Read: Criteria has not been met */
#define GPIO_LATCH_PIN8_Latched (1UL) /*!< Read: Criteria has been met */
#define GPIO_LATCH_PIN8_Clear (1UL) /*!< Write: writing a '1' clears the reg; writing a '0' has no effect */

/* Bit 7 : Status on whether PIN7 has met criteria set in PIN_CNF7.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN7_Pos (7UL) /*!< Position of PIN7 field. */
#define GPIO_LATCH_PIN7_Msk (0x1UL << GPIO_LATCH_PIN7_Pos) /*!< Bit mask of PIN7 field. */
#define GPIO_LATCH_PIN7_NotLatched (0UL) /*!< Read: Criteria has not been met */
#define GPIO_LATCH_PIN7_Latched (1UL) /*!< Read: Criteria has been met */
#define GPIO_LATCH_PIN7_Clear (1UL) /*!< Write: writing a '1' clears the reg; writing a '0' has no effect */

/* Bit 6 : Status on whether PIN6 has met criteria set in PIN_CNF6.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN6_Pos (6UL) /*!< Position of PIN6 field. */
#define GPIO_LATCH_PIN6_Msk (0x1UL << GPIO_LATCH_PIN6_Pos) /*!< Bit mask of PIN6 field. */
#define GPIO_LATCH_PIN6_NotLatched (0UL) /*!< Read: Criteria has not been met */
#define GPIO_LATCH_PIN6_Latched (1UL) /*!< Read: Criteria has been met */
#define GPIO_LATCH_PIN6_Clear (1UL) /*!< Write: writing a '1' clears the reg; writing a '0' has no effect */

/* Bit 5 : Status on whether PIN5 has met criteria set in PIN_CNF5.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN5_Pos (5UL) /*!< Position of PIN5 field. */
#define GPIO_LATCH_PIN5_Msk (0x1UL << GPIO_LATCH_PIN5_Pos) /*!< Bit mask of PIN5 field. */
#define GPIO_LATCH_PIN5_NotLatched (0UL) /*!< Read: Criteria has not been met */
#define GPIO_LATCH_PIN5_Latched (1UL) /*!< Read: Criteria has been met */
#define GPIO_LATCH_PIN5_Clear (1UL) /*!< Write: writing a '1' clears the reg; writing a '0' has no effect */

/* Bit 4 : Status on whether PIN4 has met criteria set in PIN_CNF4.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN4_Pos (4UL) /*!< Position of PIN4 field. */
#define GPIO_LATCH_PIN4_Msk (0x1UL << GPIO_LATCH_PIN4_Pos) /*!< Bit mask of PIN4 field. */
#define GPIO_LATCH_PIN4_NotLatched (0UL) /*!< Read: Criteria has not been met */
#define GPIO_LATCH_PIN4_Latched (1UL) /*!< Read: Criteria has been met */
#define GPIO_LATCH_PIN4_Clear (1UL) /*!< Write: writing a '1' clears the reg; writing a '0' has no effect */

/* Bit 3 : Status on whether PIN3 has met criteria set in PIN_CNF3.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN3_Pos (3UL) /*!< Position of PIN3 field. */
#define GPIO_LATCH_PIN3_Msk (0x1UL << GPIO_LATCH_PIN3_Pos) /*!< Bit mask of PIN3 field. */
#define GPIO_LATCH_PIN3_NotLatched (0UL) /*!< Read: Criteria has not been met */
#define GPIO_LATCH_PIN3_Latched (1UL) /*!< Read: Criteria has been met */
#define GPIO_LATCH_PIN3_Clear (1UL) /*!< Write: writing a '1' clears the reg; writing a '0' has no effect */

/* Bit 2 : Status on whether PIN2 has met criteria set in PIN_CNF2.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN2_Pos (2UL) /*!< Position of PIN2 field. */
#define GPIO_LATCH_PIN2_Msk (0x1UL << GPIO_LATCH_PIN2_Pos) /*!< Bit mask of PIN2 field. */
#define GPIO_LATCH_PIN2_NotLatched (0UL) /*!< Read: Criteria has not been met */
#define GPIO_LATCH_PIN2_Latched (1UL) /*!< Read: Criteria has been met */
#define GPIO_LATCH_PIN2_Clear (1UL) /*!< Write: writing a '1' clears the reg; writing a '0' has no effect */

/* Bit 1 : Status on whether PIN1 has met criteria set in PIN_CNF1.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN1_Pos (1UL) /*!< Position of PIN1 field. */
#define GPIO_LATCH_PIN1_Msk (0x1UL << GPIO_LATCH_PIN1_Pos) /*!< Bit mask of PIN1 field. */
#define GPIO_LATCH_PIN1_NotLatched (0UL) /*!< Read: Criteria has not been met */
#define GPIO_LATCH_PIN1_Latched (1UL) /*!< Read: Criteria has been met */
#define GPIO_LATCH_PIN1_Clear (1UL) /*!< Write: writing a '1' clears the reg; writing a '0' has no effect */

/* Bit 0 : Status on whether PIN0 has met criteria set in PIN_CNF0.SENSE register. Write '1' to clear. */
#define GPIO_LATCH_PIN0_Pos (0UL) /*!< Position of PIN0 field. */
#define GPIO_LATCH_PIN0_Msk (0x1UL << GPIO_LATCH_PIN0_Pos) /*!< Bit mask of PIN0 field. */
#define GPIO_LATCH_PIN0_NotLatched (0UL) /*!< Read: Criteria has not been met */
#define GPIO_LATCH_PIN0_Latched (1UL) /*!< Read: Criteria has been met */
#define GPIO_LATCH_PIN0_Clear (1UL) /*!< Write: writing a '1' clears the reg; writing a '0' has no effect */

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


/* Peripheral: POWER */
/* Description: Power Control */

/* Register: POWER_TASKS_RFFELDOREQSTART */
/* Description: Start requesting RF Front-End 1V8 LDO (RFFELDO) */

/* Bit 0 : Start requesting RF Front-End 1V8 LDO (RFFELDO) */
#define POWER_TASKS_RFFELDOREQSTART_TASKS_RFFELDOREQSTART_Pos (0UL) /*!< Position of TASKS_RFFELDOREQSTART field. */
#define POWER_TASKS_RFFELDOREQSTART_TASKS_RFFELDOREQSTART_Msk (0x1UL << POWER_TASKS_RFFELDOREQSTART_TASKS_RFFELDOREQSTART_Pos) /*!< Bit mask of TASKS_RFFELDOREQSTART field. */
#define POWER_TASKS_RFFELDOREQSTART_TASKS_RFFELDOREQSTART_Trigger (1UL) /*!< Trigger task */

/* Register: POWER_TASKS_RFFELDOREQSTOP */
/* Description: Stop requesting RF Front-End 1V8 LDO (RFFELDO) */

/* Bit 0 : Stop requesting RF Front-End 1V8 LDO (RFFELDO) */
#define POWER_TASKS_RFFELDOREQSTOP_TASKS_RFFELDOREQSTOP_Pos (0UL) /*!< Position of TASKS_RFFELDOREQSTOP field. */
#define POWER_TASKS_RFFELDOREQSTOP_TASKS_RFFELDOREQSTOP_Msk (0x1UL << POWER_TASKS_RFFELDOREQSTOP_TASKS_RFFELDOREQSTOP_Pos) /*!< Bit mask of TASKS_RFFELDOREQSTOP field. */
#define POWER_TASKS_RFFELDOREQSTOP_TASKS_RFFELDOREQSTOP_Trigger (1UL) /*!< Trigger task */

/* Register: POWER_TASKS_IOIFLDOREQSTART */
/* Description: Start requesting IO interface 1V8 LDO (RFFELDO) */

/* Bit 0 : Start requesting IO interface 1V8 LDO (RFFELDO) */
#define POWER_TASKS_IOIFLDOREQSTART_TASKS_IOIFLDOREQSTART_Pos (0UL) /*!< Position of TASKS_IOIFLDOREQSTART field. */
#define POWER_TASKS_IOIFLDOREQSTART_TASKS_IOIFLDOREQSTART_Msk (0x1UL << POWER_TASKS_IOIFLDOREQSTART_TASKS_IOIFLDOREQSTART_Pos) /*!< Bit mask of TASKS_IOIFLDOREQSTART field. */
#define POWER_TASKS_IOIFLDOREQSTART_TASKS_IOIFLDOREQSTART_Trigger (1UL) /*!< Trigger task */

/* Register: POWER_TASKS_IOIFLDOREQSTOP */
/* Description: Stop requesting IO interface 1V8 LDO (RFFELDO) */

/* Bit 0 : Stop requesting IO interface 1V8 LDO (RFFELDO) */
#define POWER_TASKS_IOIFLDOREQSTOP_TASKS_IOIFLDOREQSTOP_Pos (0UL) /*!< Position of TASKS_IOIFLDOREQSTOP field. */
#define POWER_TASKS_IOIFLDOREQSTOP_TASKS_IOIFLDOREQSTOP_Msk (0x1UL << POWER_TASKS_IOIFLDOREQSTOP_TASKS_IOIFLDOREQSTOP_Pos) /*!< Bit mask of TASKS_IOIFLDOREQSTOP field. */
#define POWER_TASKS_IOIFLDOREQSTOP_TASKS_IOIFLDOREQSTOP_Trigger (1UL) /*!< Trigger task */

/* Register: POWER_TASKS_PWMREQSTART */
/* Description: Request forcing PWM mode in external DCDC voltage regulator */

/* Bit 0 : Request forcing PWM mode in external DCDC voltage regulator */
#define POWER_TASKS_PWMREQSTART_TASKS_PWMREQSTART_Pos (0UL) /*!< Position of TASKS_PWMREQSTART field. */
#define POWER_TASKS_PWMREQSTART_TASKS_PWMREQSTART_Msk (0x1UL << POWER_TASKS_PWMREQSTART_TASKS_PWMREQSTART_Pos) /*!< Bit mask of TASKS_PWMREQSTART field. */
#define POWER_TASKS_PWMREQSTART_TASKS_PWMREQSTART_Trigger (1UL) /*!< Trigger task */

/* Register: POWER_TASKS_PWMREQSTOP */
/* Description: Stop requesting forcing PWM mode in external DCDC voltage regulator */

/* Bit 0 : Stop requesting forcing PWM mode in external DCDC voltage regulator */
#define POWER_TASKS_PWMREQSTOP_TASKS_PWMREQSTOP_Pos (0UL) /*!< Position of TASKS_PWMREQSTOP field. */
#define POWER_TASKS_PWMREQSTOP_TASKS_PWMREQSTOP_Msk (0x1UL << POWER_TASKS_PWMREQSTOP_TASKS_PWMREQSTOP_Pos) /*!< Bit mask of TASKS_PWMREQSTOP field. */
#define POWER_TASKS_PWMREQSTOP_TASKS_PWMREQSTOP_Trigger (1UL) /*!< Trigger task */

/* Register: POWER_TASKS_CONSTLAT */
/* Description: Enable constant latency mode. When going to sleep: CPU is clock gated, but regulators, oscillators and clock tree is kept on. */

/* Bit 0 : Enable constant latency mode. When going to sleep: CPU is clock gated, but regulators, oscillators and clock tree is kept on. */
#define POWER_TASKS_CONSTLAT_TASKS_CONSTLAT_Pos (0UL) /*!< Position of TASKS_CONSTLAT field. */
#define POWER_TASKS_CONSTLAT_TASKS_CONSTLAT_Msk (0x1UL << POWER_TASKS_CONSTLAT_TASKS_CONSTLAT_Pos) /*!< Bit mask of TASKS_CONSTLAT field. */
#define POWER_TASKS_CONSTLAT_TASKS_CONSTLAT_Trigger (1UL) /*!< Trigger task */

/* Register: POWER_TASKS_LOWPWR */
/* Description: Enable low power mode (variable latency) When going to sleep: Oscillators are switched off (if nothing else is requesting clocks). Regulators are switched off (if nothing else is requesting power). */

/* Bit 0 : Enable low power mode (variable latency) When going to sleep: Oscillators are switched off (if nothing else is requesting clocks). Regulators are switched off (if nothing else is requesting power). */
#define POWER_TASKS_LOWPWR_TASKS_LOWPWR_Pos (0UL) /*!< Position of TASKS_LOWPWR field. */
#define POWER_TASKS_LOWPWR_TASKS_LOWPWR_Msk (0x1UL << POWER_TASKS_LOWPWR_TASKS_LOWPWR_Pos) /*!< Bit mask of TASKS_LOWPWR field. */
#define POWER_TASKS_LOWPWR_TASKS_LOWPWR_Trigger (1UL) /*!< Trigger task */

/* Register: POWER_EVENTS_POFWARN */
/* Description: Power failure warning */

/* Bit 0 : Power failure warning */
#define POWER_EVENTS_POFWARN_EVENTS_POFWARN_Pos (0UL) /*!< Position of EVENTS_POFWARN field. */
#define POWER_EVENTS_POFWARN_EVENTS_POFWARN_Msk (0x1UL << POWER_EVENTS_POFWARN_EVENTS_POFWARN_Pos) /*!< Bit mask of EVENTS_POFWARN field. */
#define POWER_EVENTS_POFWARN_EVENTS_POFWARN_NotGenerated (0UL) /*!< Event not generated */
#define POWER_EVENTS_POFWARN_EVENTS_POFWARN_Generated (1UL) /*!< Event generated */

/* Register: POWER_EVENTS_RFFELDOSTARTED */
/* Description: RF Front-End 1V8 LDO (RFFELDO) has become ready */

/* Bit 0 : RF Front-End 1V8 LDO (RFFELDO) has become ready */
#define POWER_EVENTS_RFFELDOSTARTED_EVENTS_RFFELDOSTARTED_Pos (0UL) /*!< Position of EVENTS_RFFELDOSTARTED field. */
#define POWER_EVENTS_RFFELDOSTARTED_EVENTS_RFFELDOSTARTED_Msk (0x1UL << POWER_EVENTS_RFFELDOSTARTED_EVENTS_RFFELDOSTARTED_Pos) /*!< Bit mask of EVENTS_RFFELDOSTARTED field. */
#define POWER_EVENTS_RFFELDOSTARTED_EVENTS_RFFELDOSTARTED_NotGenerated (0UL) /*!< Event not generated */
#define POWER_EVENTS_RFFELDOSTARTED_EVENTS_RFFELDOSTARTED_Generated (1UL) /*!< Event generated */

/* Register: POWER_EVENTS_IOIFLDOSTARED */
/* Description: IO interface 1V8 LDO (IOIFLDO) has become ready */

/* Bit 0 : IO interface 1V8 LDO (IOIFLDO) has become ready */
#define POWER_EVENTS_IOIFLDOSTARED_EVENTS_IOIFLDOSTARED_Pos (0UL) /*!< Position of EVENTS_IOIFLDOSTARED field. */
#define POWER_EVENTS_IOIFLDOSTARED_EVENTS_IOIFLDOSTARED_Msk (0x1UL << POWER_EVENTS_IOIFLDOSTARED_EVENTS_IOIFLDOSTARED_Pos) /*!< Bit mask of EVENTS_IOIFLDOSTARED field. */
#define POWER_EVENTS_IOIFLDOSTARED_EVENTS_IOIFLDOSTARED_NotGenerated (0UL) /*!< Event not generated */
#define POWER_EVENTS_IOIFLDOSTARED_EVENTS_IOIFLDOSTARED_Generated (1UL) /*!< Event generated */

/* Register: POWER_EVENTS_SLEEPENTER */
/* Description: CPU entered WFI/WFE sleep */

/* Bit 0 : CPU entered WFI/WFE sleep */
#define POWER_EVENTS_SLEEPENTER_EVENTS_SLEEPENTER_Pos (0UL) /*!< Position of EVENTS_SLEEPENTER field. */
#define POWER_EVENTS_SLEEPENTER_EVENTS_SLEEPENTER_Msk (0x1UL << POWER_EVENTS_SLEEPENTER_EVENTS_SLEEPENTER_Pos) /*!< Bit mask of EVENTS_SLEEPENTER field. */
#define POWER_EVENTS_SLEEPENTER_EVENTS_SLEEPENTER_NotGenerated (0UL) /*!< Event not generated */
#define POWER_EVENTS_SLEEPENTER_EVENTS_SLEEPENTER_Generated (1UL) /*!< Event generated */

/* Register: POWER_EVENTS_SLEEPEXIT */
/* Description: CPU exited WFI/WFE sleep */

/* Bit 0 : CPU exited WFI/WFE sleep */
#define POWER_EVENTS_SLEEPEXIT_EVENTS_SLEEPEXIT_Pos (0UL) /*!< Position of EVENTS_SLEEPEXIT field. */
#define POWER_EVENTS_SLEEPEXIT_EVENTS_SLEEPEXIT_Msk (0x1UL << POWER_EVENTS_SLEEPEXIT_EVENTS_SLEEPEXIT_Pos) /*!< Bit mask of EVENTS_SLEEPEXIT field. */
#define POWER_EVENTS_SLEEPEXIT_EVENTS_SLEEPEXIT_NotGenerated (0UL) /*!< Event not generated */
#define POWER_EVENTS_SLEEPEXIT_EVENTS_SLEEPEXIT_Generated (1UL) /*!< Event generated */

/* Register: POWER_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 6 : Enable or disable interrupt for event SLEEPEXIT */
#define POWER_INTEN_SLEEPEXIT_Pos (6UL) /*!< Position of SLEEPEXIT field. */
#define POWER_INTEN_SLEEPEXIT_Msk (0x1UL << POWER_INTEN_SLEEPEXIT_Pos) /*!< Bit mask of SLEEPEXIT field. */
#define POWER_INTEN_SLEEPEXIT_Disabled (0UL) /*!< Disable */
#define POWER_INTEN_SLEEPEXIT_Enabled (1UL) /*!< Enable */

/* Bit 5 : Enable or disable interrupt for event SLEEPENTER */
#define POWER_INTEN_SLEEPENTER_Pos (5UL) /*!< Position of SLEEPENTER field. */
#define POWER_INTEN_SLEEPENTER_Msk (0x1UL << POWER_INTEN_SLEEPENTER_Pos) /*!< Bit mask of SLEEPENTER field. */
#define POWER_INTEN_SLEEPENTER_Disabled (0UL) /*!< Disable */
#define POWER_INTEN_SLEEPENTER_Enabled (1UL) /*!< Enable */

/* Bit 4 : Enable or disable interrupt for event IOIFLDOSTARED */
#define POWER_INTEN_IOIFLDOSTARED_Pos (4UL) /*!< Position of IOIFLDOSTARED field. */
#define POWER_INTEN_IOIFLDOSTARED_Msk (0x1UL << POWER_INTEN_IOIFLDOSTARED_Pos) /*!< Bit mask of IOIFLDOSTARED field. */
#define POWER_INTEN_IOIFLDOSTARED_Disabled (0UL) /*!< Disable */
#define POWER_INTEN_IOIFLDOSTARED_Enabled (1UL) /*!< Enable */

/* Bit 3 : Enable or disable interrupt for event RFFELDOSTARTED */
#define POWER_INTEN_RFFELDOSTARTED_Pos (3UL) /*!< Position of RFFELDOSTARTED field. */
#define POWER_INTEN_RFFELDOSTARTED_Msk (0x1UL << POWER_INTEN_RFFELDOSTARTED_Pos) /*!< Bit mask of RFFELDOSTARTED field. */
#define POWER_INTEN_RFFELDOSTARTED_Disabled (0UL) /*!< Disable */
#define POWER_INTEN_RFFELDOSTARTED_Enabled (1UL) /*!< Enable */

/* Bit 2 : Enable or disable interrupt for event POFWARN */
#define POWER_INTEN_POFWARN_Pos (2UL) /*!< Position of POFWARN field. */
#define POWER_INTEN_POFWARN_Msk (0x1UL << POWER_INTEN_POFWARN_Pos) /*!< Bit mask of POFWARN field. */
#define POWER_INTEN_POFWARN_Disabled (0UL) /*!< Disable */
#define POWER_INTEN_POFWARN_Enabled (1UL) /*!< Enable */

/* Register: POWER_INTENSET */
/* Description: Enable interrupt */

/* Bit 6 : Write '1' to enable interrupt for event SLEEPEXIT */
#define POWER_INTENSET_SLEEPEXIT_Pos (6UL) /*!< Position of SLEEPEXIT field. */
#define POWER_INTENSET_SLEEPEXIT_Msk (0x1UL << POWER_INTENSET_SLEEPEXIT_Pos) /*!< Bit mask of SLEEPEXIT field. */
#define POWER_INTENSET_SLEEPEXIT_Disabled (0UL) /*!< Read: Disabled */
#define POWER_INTENSET_SLEEPEXIT_Enabled (1UL) /*!< Read: Enabled */
#define POWER_INTENSET_SLEEPEXIT_Set (1UL) /*!< Enable */

/* Bit 5 : Write '1' to enable interrupt for event SLEEPENTER */
#define POWER_INTENSET_SLEEPENTER_Pos (5UL) /*!< Position of SLEEPENTER field. */
#define POWER_INTENSET_SLEEPENTER_Msk (0x1UL << POWER_INTENSET_SLEEPENTER_Pos) /*!< Bit mask of SLEEPENTER field. */
#define POWER_INTENSET_SLEEPENTER_Disabled (0UL) /*!< Read: Disabled */
#define POWER_INTENSET_SLEEPENTER_Enabled (1UL) /*!< Read: Enabled */
#define POWER_INTENSET_SLEEPENTER_Set (1UL) /*!< Enable */

/* Bit 4 : Write '1' to enable interrupt for event IOIFLDOSTARED */
#define POWER_INTENSET_IOIFLDOSTARED_Pos (4UL) /*!< Position of IOIFLDOSTARED field. */
#define POWER_INTENSET_IOIFLDOSTARED_Msk (0x1UL << POWER_INTENSET_IOIFLDOSTARED_Pos) /*!< Bit mask of IOIFLDOSTARED field. */
#define POWER_INTENSET_IOIFLDOSTARED_Disabled (0UL) /*!< Read: Disabled */
#define POWER_INTENSET_IOIFLDOSTARED_Enabled (1UL) /*!< Read: Enabled */
#define POWER_INTENSET_IOIFLDOSTARED_Set (1UL) /*!< Enable */

/* Bit 3 : Write '1' to enable interrupt for event RFFELDOSTARTED */
#define POWER_INTENSET_RFFELDOSTARTED_Pos (3UL) /*!< Position of RFFELDOSTARTED field. */
#define POWER_INTENSET_RFFELDOSTARTED_Msk (0x1UL << POWER_INTENSET_RFFELDOSTARTED_Pos) /*!< Bit mask of RFFELDOSTARTED field. */
#define POWER_INTENSET_RFFELDOSTARTED_Disabled (0UL) /*!< Read: Disabled */
#define POWER_INTENSET_RFFELDOSTARTED_Enabled (1UL) /*!< Read: Enabled */
#define POWER_INTENSET_RFFELDOSTARTED_Set (1UL) /*!< Enable */

/* Bit 2 : Write '1' to enable interrupt for event POFWARN */
#define POWER_INTENSET_POFWARN_Pos (2UL) /*!< Position of POFWARN field. */
#define POWER_INTENSET_POFWARN_Msk (0x1UL << POWER_INTENSET_POFWARN_Pos) /*!< Bit mask of POFWARN field. */
#define POWER_INTENSET_POFWARN_Disabled (0UL) /*!< Read: Disabled */
#define POWER_INTENSET_POFWARN_Enabled (1UL) /*!< Read: Enabled */
#define POWER_INTENSET_POFWARN_Set (1UL) /*!< Enable */

/* Register: POWER_INTENCLR */
/* Description: Disable interrupt */

/* Bit 6 : Write '1' to disable interrupt for event SLEEPEXIT */
#define POWER_INTENCLR_SLEEPEXIT_Pos (6UL) /*!< Position of SLEEPEXIT field. */
#define POWER_INTENCLR_SLEEPEXIT_Msk (0x1UL << POWER_INTENCLR_SLEEPEXIT_Pos) /*!< Bit mask of SLEEPEXIT field. */
#define POWER_INTENCLR_SLEEPEXIT_Disabled (0UL) /*!< Read: Disabled */
#define POWER_INTENCLR_SLEEPEXIT_Enabled (1UL) /*!< Read: Enabled */
#define POWER_INTENCLR_SLEEPEXIT_Clear (1UL) /*!< Disable */

/* Bit 5 : Write '1' to disable interrupt for event SLEEPENTER */
#define POWER_INTENCLR_SLEEPENTER_Pos (5UL) /*!< Position of SLEEPENTER field. */
#define POWER_INTENCLR_SLEEPENTER_Msk (0x1UL << POWER_INTENCLR_SLEEPENTER_Pos) /*!< Bit mask of SLEEPENTER field. */
#define POWER_INTENCLR_SLEEPENTER_Disabled (0UL) /*!< Read: Disabled */
#define POWER_INTENCLR_SLEEPENTER_Enabled (1UL) /*!< Read: Enabled */
#define POWER_INTENCLR_SLEEPENTER_Clear (1UL) /*!< Disable */

/* Bit 4 : Write '1' to disable interrupt for event IOIFLDOSTARED */
#define POWER_INTENCLR_IOIFLDOSTARED_Pos (4UL) /*!< Position of IOIFLDOSTARED field. */
#define POWER_INTENCLR_IOIFLDOSTARED_Msk (0x1UL << POWER_INTENCLR_IOIFLDOSTARED_Pos) /*!< Bit mask of IOIFLDOSTARED field. */
#define POWER_INTENCLR_IOIFLDOSTARED_Disabled (0UL) /*!< Read: Disabled */
#define POWER_INTENCLR_IOIFLDOSTARED_Enabled (1UL) /*!< Read: Enabled */
#define POWER_INTENCLR_IOIFLDOSTARED_Clear (1UL) /*!< Disable */

/* Bit 3 : Write '1' to disable interrupt for event RFFELDOSTARTED */
#define POWER_INTENCLR_RFFELDOSTARTED_Pos (3UL) /*!< Position of RFFELDOSTARTED field. */
#define POWER_INTENCLR_RFFELDOSTARTED_Msk (0x1UL << POWER_INTENCLR_RFFELDOSTARTED_Pos) /*!< Bit mask of RFFELDOSTARTED field. */
#define POWER_INTENCLR_RFFELDOSTARTED_Disabled (0UL) /*!< Read: Disabled */
#define POWER_INTENCLR_RFFELDOSTARTED_Enabled (1UL) /*!< Read: Enabled */
#define POWER_INTENCLR_RFFELDOSTARTED_Clear (1UL) /*!< Disable */

/* Bit 2 : Write '1' to disable interrupt for event POFWARN */
#define POWER_INTENCLR_POFWARN_Pos (2UL) /*!< Position of POFWARN field. */
#define POWER_INTENCLR_POFWARN_Msk (0x1UL << POWER_INTENCLR_POFWARN_Pos) /*!< Bit mask of POFWARN field. */
#define POWER_INTENCLR_POFWARN_Disabled (0UL) /*!< Read: Disabled */
#define POWER_INTENCLR_POFWARN_Enabled (1UL) /*!< Read: Enabled */
#define POWER_INTENCLR_POFWARN_Clear (1UL) /*!< Disable */

/* Register: POWER_RESETREAS */
/* Description: Reset reason */

/* Bit 23 : Force off reset from MCUMASTER detected */
#define POWER_RESETREAS_FORCEOFF_Pos (23UL) /*!< Position of FORCEOFF field. */
#define POWER_RESETREAS_FORCEOFF_Msk (0x1UL << POWER_RESETREAS_FORCEOFF_Pos) /*!< Bit mask of FORCEOFF field. */
#define POWER_RESETREAS_FORCEOFF_NotDetected (0UL) /*!< Not detected */
#define POWER_RESETREAS_FORCEOFF_Detected (1UL) /*!< Detected */

/* Bit 22 : CPU reset from MCUMASTER detected */
#define POWER_RESETREAS_MRST_Pos (22UL) /*!< Position of MRST field. */
#define POWER_RESETREAS_MRST_Msk (0x1UL << POWER_RESETREAS_MRST_Pos) /*!< Bit mask of MRST field. */
#define POWER_RESETREAS_MRST_NotDetected (0UL) /*!< Not detected */
#define POWER_RESETREAS_MRST_Detected (1UL) /*!< Detected */

/* Bit 21 : SW reset from modem CTRL-AP detected */
#define POWER_RESETREAS_LCTRLAP_Pos (21UL) /*!< Position of LCTRLAP field. */
#define POWER_RESETREAS_LCTRLAP_Msk (0x1UL << POWER_RESETREAS_LCTRLAP_Pos) /*!< Bit mask of LCTRLAP field. */
#define POWER_RESETREAS_LCTRLAP_NotDetected (0UL) /*!< Not detected */
#define POWER_RESETREAS_LCTRLAP_Detected (1UL) /*!< Detected */

/* Bit 20 : Reset from secure control detected */
#define POWER_RESETREAS_SCTRL_Pos (20UL) /*!< Position of SCTRL field. */
#define POWER_RESETREAS_SCTRL_Msk (0x1UL << POWER_RESETREAS_SCTRL_Pos) /*!< Bit mask of SCTRL field. */
#define POWER_RESETREAS_SCTRL_NotDetected (0UL) /*!< Not detected */
#define POWER_RESETREAS_SCTRL_Detected (1UL) /*!< Detected */

/* Bit 19 : Reset from secure watchdog detected */
#define POWER_RESETREAS_SDOG_Pos (19UL) /*!< Position of SDOG field. */
#define POWER_RESETREAS_SDOG_Msk (0x1UL << POWER_RESETREAS_SDOG_Pos) /*!< Bit mask of SDOG field. */
#define POWER_RESETREAS_SDOG_NotDetected (0UL) /*!< Not detected */
#define POWER_RESETREAS_SDOG_Detected (1UL) /*!< Detected */

/* Bit 18 : Reset from local watchdog detected */
#define POWER_RESETREAS_LDOG_Pos (18UL) /*!< Position of LDOG field. */
#define POWER_RESETREAS_LDOG_Msk (0x1UL << POWER_RESETREAS_LDOG_Pos) /*!< Bit mask of LDOG field. */
#define POWER_RESETREAS_LDOG_NotDetected (0UL) /*!< Not detected */
#define POWER_RESETREAS_LDOG_Detected (1UL) /*!< Detected */

/* Bit 17 : Reset from local CPU lock-up detected */
#define POWER_RESETREAS_LOCKUP_Pos (17UL) /*!< Position of LOCKUP field. */
#define POWER_RESETREAS_LOCKUP_Msk (0x1UL << POWER_RESETREAS_LOCKUP_Pos) /*!< Bit mask of LOCKUP field. */
#define POWER_RESETREAS_LOCKUP_NotDetected (0UL) /*!< Not detected */
#define POWER_RESETREAS_LOCKUP_Detected (1UL) /*!< Detected */

/* Bit 16 : Reset from local AIRCR.SYSRESETREQ detected */
#define POWER_RESETREAS_SREQ_Pos (16UL) /*!< Position of SREQ field. */
#define POWER_RESETREAS_SREQ_Msk (0x1UL << POWER_RESETREAS_SREQ_Pos) /*!< Bit mask of SREQ field. */
#define POWER_RESETREAS_SREQ_NotDetected (0UL) /*!< Not detected */
#define POWER_RESETREAS_SREQ_Detected (1UL) /*!< Detected */

/* Bit 7 : Reset due to wake up from System OFF mode when wakeup is triggered from entering into debug interface mode */
#define POWER_RESETREAS_DIF_Pos (7UL) /*!< Position of DIF field. */
#define POWER_RESETREAS_DIF_Msk (0x1UL << POWER_RESETREAS_DIF_Pos) /*!< Bit mask of DIF field. */
#define POWER_RESETREAS_DIF_NotDetected (0UL) /*!< Not detected */
#define POWER_RESETREAS_DIF_Detected (1UL) /*!< Detected */

/* Bit 5 : Reset due to wake up from System OFF mode when wakeup is triggered from DETECT signal from GPIO */
#define POWER_RESETREAS_OFF_Pos (5UL) /*!< Position of OFF field. */
#define POWER_RESETREAS_OFF_Msk (0x1UL << POWER_RESETREAS_OFF_Pos) /*!< Bit mask of OFF field. */
#define POWER_RESETREAS_OFF_NotDetected (0UL) /*!< Not detected */
#define POWER_RESETREAS_OFF_Detected (1UL) /*!< Detected */

/* Bit 4 : Reset from global application CPU lock-up detected */
#define POWER_RESETREAS_GLOCKUP_Pos (4UL) /*!< Position of GLOCKUP field. */
#define POWER_RESETREAS_GLOCKUP_Msk (0x1UL << POWER_RESETREAS_GLOCKUP_Pos) /*!< Bit mask of GLOCKUP field. */
#define POWER_RESETREAS_GLOCKUP_NotDetected (0UL) /*!< Not detected */
#define POWER_RESETREAS_GLOCKUP_Detected (1UL) /*!< Detected */

/* Bit 3 : Reset from global application AIRCR.SYSRESETREQ detected */
#define POWER_RESETREAS_GSREQ_Pos (3UL) /*!< Position of GSREQ field. */
#define POWER_RESETREAS_GSREQ_Msk (0x1UL << POWER_RESETREAS_GSREQ_Pos) /*!< Bit mask of GSREQ field. */
#define POWER_RESETREAS_GSREQ_NotDetected (0UL) /*!< Not detected */
#define POWER_RESETREAS_GSREQ_Detected (1UL) /*!< Detected */

/* Bit 2 : Reset from global application CTRL-AP detected */
#define POWER_RESETREAS_CTRLAP_Pos (2UL) /*!< Position of CTRLAP field. */
#define POWER_RESETREAS_CTRLAP_Msk (0x1UL << POWER_RESETREAS_CTRLAP_Pos) /*!< Bit mask of CTRLAP field. */
#define POWER_RESETREAS_CTRLAP_NotDetected (0UL) /*!< Not detected */
#define POWER_RESETREAS_CTRLAP_Detected (1UL) /*!< Detected */

/* Bit 1 : Reset from global application watchdog detected */
#define POWER_RESETREAS_DOG_Pos (1UL) /*!< Position of DOG field. */
#define POWER_RESETREAS_DOG_Msk (0x1UL << POWER_RESETREAS_DOG_Pos) /*!< Bit mask of DOG field. */
#define POWER_RESETREAS_DOG_NotDetected (0UL) /*!< Not detected */
#define POWER_RESETREAS_DOG_Detected (1UL) /*!< Detected */

/* Bit 0 : Reset from pin-reset detected */
#define POWER_RESETREAS_RESETPIN_Pos (0UL) /*!< Position of RESETPIN field. */
#define POWER_RESETREAS_RESETPIN_Msk (0x1UL << POWER_RESETREAS_RESETPIN_Pos) /*!< Bit mask of RESETPIN field. */
#define POWER_RESETREAS_RESETPIN_NotDetected (0UL) /*!< Not detected */
#define POWER_RESETREAS_RESETPIN_Detected (1UL) /*!< Detected */

/* Register: POWER_DSPPOWERSTATUS */
/* Description: Slave power status: DSP power domain power state. */

/* Bit 0 : Modem DSP power state */
#define POWER_DSPPOWERSTATUS_DSPPOWERSTATUS_Pos (0UL) /*!< Position of DSPPOWERSTATUS field. */
#define POWER_DSPPOWERSTATUS_DSPPOWERSTATUS_Msk (0x1UL << POWER_DSPPOWERSTATUS_DSPPOWERSTATUS_Pos) /*!< Bit mask of DSPPOWERSTATUS field. */
#define POWER_DSPPOWERSTATUS_DSPPOWERSTATUS_ON (0UL) /*!< DSP domain powered on */
#define POWER_DSPPOWERSTATUS_DSPPOWERSTATUS_OFF (1UL) /*!< DSP domain powered off */

/* Register: POWER_M0POWERSTATUS */
/* Description: Slave power status: RF M0 power domain power state. */

/* Bit 0 : Modem RF M0 power state */
#define POWER_M0POWERSTATUS_M0POWERSTATUS_Pos (0UL) /*!< Position of M0POWERSTATUS field. */
#define POWER_M0POWERSTATUS_M0POWERSTATUS_Msk (0x1UL << POWER_M0POWERSTATUS_M0POWERSTATUS_Pos) /*!< Bit mask of M0POWERSTATUS field. */
#define POWER_M0POWERSTATUS_M0POWERSTATUS_ON (0UL) /*!< RF domain powered on */
#define POWER_M0POWERSTATUS_M0POWERSTATUS_OFF (1UL) /*!< RF domain powered off */

/* Register: POWER_SLEEPCNF */
/* Description: Sleep configuration */

/* Bit 0 : Sleep mode */
#define POWER_SLEEPCNF_SLEEPMODE_Pos (0UL) /*!< Position of SLEEPMODE field. */
#define POWER_SLEEPCNF_SLEEPMODE_Msk (0x1UL << POWER_SLEEPCNF_SLEEPMODE_Pos) /*!< Bit mask of SLEEPMODE field. */
#define POWER_SLEEPCNF_SLEEPMODE_LIGHTSLEEP (0UL) /*!< Light sleep FF retention mode will be used if available. Otherwise FFs are kept powered. */
#define POWER_SLEEPCNF_SLEEPMODE_DEEPSLEEP (1UL) /*!< Deep sleep (wake from reset) No FF retention (needs wake from reset). */

/* Register: POWER_GPREGRET */
/* Description: Description collection: General purpose retention register */

/* Bits 7..0 : General purpose retention register */
#define POWER_GPREGRET_GPREGRET_Pos (0UL) /*!< Position of GPREGRET field. */
#define POWER_GPREGRET_GPREGRET_Msk (0xFFUL << POWER_GPREGRET_GPREGRET_Pos) /*!< Bit mask of GPREGRET field. */

/* Register: POWER_DSP_RESET */
/* Description: Reset DSP subsystem */

/* Bit 0 : RESET */
#define POWER_DSP_RESET_RESET_Pos (0UL) /*!< Position of RESET field. */
#define POWER_DSP_RESET_RESET_Msk (0x1UL << POWER_DSP_RESET_RESET_Pos) /*!< Bit mask of RESET field. */
#define POWER_DSP_RESET_RESET_Release (0UL) /*!< Release CPU reset signal. */
#define POWER_DSP_RESET_RESET_Hold (1UL) /*!< Hold CPU reset signal. */

/* Register: POWER_DSP_FORCEON */
/* Description: Force on power and clock in DSP subsystem */

/* Bit 0 : Forces on power and clock in DSP subsystem */
#define POWER_DSP_FORCEON_FORCEON_Pos (0UL) /*!< Position of FORCEON field. */
#define POWER_DSP_FORCEON_FORCEON_Msk (0x1UL << POWER_DSP_FORCEON_FORCEON_Pos) /*!< Bit mask of FORCEON field. */
#define POWER_DSP_FORCEON_FORCEON_Release (0UL) /*!< Release force on signal. */
#define POWER_DSP_FORCEON_FORCEON_Hold (1UL) /*!< Hold force on signal. */

/* Register: POWER_DSP_HALT */
/* Description: Halt DSP subsystem */

/* Bit 0 : Halt DSP subsystem */
#define POWER_DSP_HALT_HALT_Pos (0UL) /*!< Position of HALT field. */
#define POWER_DSP_HALT_HALT_Msk (0x1UL << POWER_DSP_HALT_HALT_Pos) /*!< Bit mask of HALT field. */
#define POWER_DSP_HALT_HALT_Release (0UL) /*!< Release halt signal. */
#define POWER_DSP_HALT_HALT_Hold (1UL) /*!< Hold halt signal. */

/* Register: POWER_LYNX_RESET */
/* Description: Reset Lynx RF subsystem */

/* Bit 0 : CPU soft reset */
#define POWER_LYNX_RESET_RESET_Pos (0UL) /*!< Position of RESET field. */
#define POWER_LYNX_RESET_RESET_Msk (0x1UL << POWER_LYNX_RESET_RESET_Pos) /*!< Bit mask of RESET field. */
#define POWER_LYNX_RESET_RESET_Release (0UL) /*!< Release CPU reset signal. */
#define POWER_LYNX_RESET_RESET_Hold (1UL) /*!< Hold CPU reset signal. */

/* Register: POWER_LYNX_FORCEON */
/* Description: Force on Lynx RF subsystem */

/* Bit 0 : Forces an power and clock DSP subsystem */
#define POWER_LYNX_FORCEON_FORCEON_Pos (0UL) /*!< Position of FORCEON field. */
#define POWER_LYNX_FORCEON_FORCEON_Msk (0x1UL << POWER_LYNX_FORCEON_FORCEON_Pos) /*!< Bit mask of FORCEON field. */
#define POWER_LYNX_FORCEON_FORCEON_Release (0UL) /*!< Release force on signal. */
#define POWER_LYNX_FORCEON_FORCEON_Hold (1UL) /*!< Hold force on signal. */


/* Peripheral: RAMBISTHUB */
/* Description: RAM BIST Hub */

/* Register: RAMBISTHUB_RUN */
/* Description: RUN BIST */

/* Bit 0 : RUN BIST */
#define RAMBISTHUB_RUN_RUN_Pos (0UL) /*!< Position of RUN field. */
#define RAMBISTHUB_RUN_RUN_Msk (0x1UL << RAMBISTHUB_RUN_RUN_Pos) /*!< Bit mask of RUN field. */
#define RAMBISTHUB_RUN_RUN_Clear (0UL) /*!< Clear the task */
#define RAMBISTHUB_RUN_RUN_Set (1UL) /*!< Run the task */

/* Register: RAMBISTHUB_SLEEP */
/* Description: BIST SLEEP EVENT */

/* Bit 0 : BIST SLEEP EVENT */
#define RAMBISTHUB_SLEEP_SLEEP_Pos (0UL) /*!< Position of SLEEP field. */
#define RAMBISTHUB_SLEEP_SLEEP_Msk (0x1UL << RAMBISTHUB_SLEEP_SLEEP_Pos) /*!< Bit mask of SLEEP field. */
#define RAMBISTHUB_SLEEP_SLEEP_NoEventDetected (0UL) /*!< No event detected. Write zero to clear the event. */
#define RAMBISTHUB_SLEEP_SLEEP_EventDetected (1UL) /*!< Event detected */

/* Register: RAMBISTHUB_FINISHED */
/* Description: BIST FINISHED EVENT */

/* Bit 0 : BIST FINISHED EVENT */
#define RAMBISTHUB_FINISHED_FINISHED_Pos (0UL) /*!< Position of FINISHED field. */
#define RAMBISTHUB_FINISHED_FINISHED_Msk (0x1UL << RAMBISTHUB_FINISHED_FINISHED_Pos) /*!< Bit mask of FINISHED field. */
#define RAMBISTHUB_FINISHED_FINISHED_NoEventDetected (0UL) /*!< No event detected. Write zero to clear the event. */
#define RAMBISTHUB_FINISHED_FINISHED_EventDetected (1UL) /*!< Event detected */

/* Register: RAMBISTHUB_HUBENABLE */
/* Description: RAM BIST Hub enable */

/* Bit 0 : RAM BIST Hub enable */
#define RAMBISTHUB_HUBENABLE_HUBENABLE_Pos (0UL) /*!< Position of HUBENABLE field. */
#define RAMBISTHUB_HUBENABLE_HUBENABLE_Msk (0x1UL << RAMBISTHUB_HUBENABLE_HUBENABLE_Pos) /*!< Bit mask of HUBENABLE field. */
#define RAMBISTHUB_HUBENABLE_HUBENABLE_Disabled (0UL) /*!< RAM BIST Hub disabled */
#define RAMBISTHUB_HUBENABLE_HUBENABLE_Enabled (1UL) /*!< RAM BIST Hub enabled */

/* Register: RAMBISTHUB_SELECTBIST */
/* Description: Select bits for the individual BISTs to run */

/* Bit 2 : Select and enable BIST2 */
#define RAMBISTHUB_SELECTBIST_SELECTBIST2_Pos (2UL) /*!< Position of SELECTBIST2 field. */
#define RAMBISTHUB_SELECTBIST_SELECTBIST2_Msk (0x1UL << RAMBISTHUB_SELECTBIST_SELECTBIST2_Pos) /*!< Bit mask of SELECTBIST2 field. */
#define RAMBISTHUB_SELECTBIST_SELECTBIST2_Disabled (0UL) /*!< BIST2 disabled */
#define RAMBISTHUB_SELECTBIST_SELECTBIST2_Enabled (1UL) /*!< BIST2 enabled */

/* Bit 1 : Select and enable BIST1 */
#define RAMBISTHUB_SELECTBIST_SELECTBIST1_Pos (1UL) /*!< Position of SELECTBIST1 field. */
#define RAMBISTHUB_SELECTBIST_SELECTBIST1_Msk (0x1UL << RAMBISTHUB_SELECTBIST_SELECTBIST1_Pos) /*!< Bit mask of SELECTBIST1 field. */
#define RAMBISTHUB_SELECTBIST_SELECTBIST1_Disabled (0UL) /*!< BIST1 disabled */
#define RAMBISTHUB_SELECTBIST_SELECTBIST1_Enabled (1UL) /*!< BIST1 enabled */

/* Bit 0 : Select and enable BIST0 */
#define RAMBISTHUB_SELECTBIST_SELECTBIST0_Pos (0UL) /*!< Position of SELECTBIST0 field. */
#define RAMBISTHUB_SELECTBIST_SELECTBIST0_Msk (0x1UL << RAMBISTHUB_SELECTBIST_SELECTBIST0_Pos) /*!< Bit mask of SELECTBIST0 field. */
#define RAMBISTHUB_SELECTBIST_SELECTBIST0_Disabled (0UL) /*!< BIST0 disabled */
#define RAMBISTHUB_SELECTBIST_SELECTBIST0_Enabled (1UL) /*!< BIST0 enabled */

/* Register: RAMBISTHUB_BISTSTATUS */
/* Description: BIST status */

/* Bit 2 : Status of BIST2. Write to clear. */
#define RAMBISTHUB_BISTSTATUS_BISTSTATUS2_Pos (2UL) /*!< Position of BISTSTATUS2 field. */
#define RAMBISTHUB_BISTSTATUS_BISTSTATUS2_Msk (0x1UL << RAMBISTHUB_BISTSTATUS_BISTSTATUS2_Pos) /*!< Bit mask of BISTSTATUS2 field. */
#define RAMBISTHUB_BISTSTATUS_BISTSTATUS2_NotPassed (0UL) /*!< Read: BIST2 not passed */
#define RAMBISTHUB_BISTSTATUS_BISTSTATUS2_Passed (1UL) /*!< Read: BIST2 passed. Write zero to clear. */

/* Bit 1 : Status of BIST1. Write to clear. */
#define RAMBISTHUB_BISTSTATUS_BISTSTATUS1_Pos (1UL) /*!< Position of BISTSTATUS1 field. */
#define RAMBISTHUB_BISTSTATUS_BISTSTATUS1_Msk (0x1UL << RAMBISTHUB_BISTSTATUS_BISTSTATUS1_Pos) /*!< Bit mask of BISTSTATUS1 field. */
#define RAMBISTHUB_BISTSTATUS_BISTSTATUS1_NotPassed (0UL) /*!< Read: BIST1 not passed */
#define RAMBISTHUB_BISTSTATUS_BISTSTATUS1_Passed (1UL) /*!< Read: BIST1 passed. Write zero to clear. */

/* Bit 0 : Status of BIST0. Write to clear. */
#define RAMBISTHUB_BISTSTATUS_BISTSTATUS0_Pos (0UL) /*!< Position of BISTSTATUS0 field. */
#define RAMBISTHUB_BISTSTATUS_BISTSTATUS0_Msk (0x1UL << RAMBISTHUB_BISTSTATUS_BISTSTATUS0_Pos) /*!< Bit mask of BISTSTATUS0 field. */
#define RAMBISTHUB_BISTSTATUS_BISTSTATUS0_NotPassed (0UL) /*!< Read: BIST0 not passed */
#define RAMBISTHUB_BISTSTATUS_BISTSTATUS0_Passed (1UL) /*!< Read: BIST0 passed. Write zero to clear. */

/* Register: RAMBISTHUB_TESTTYPE */
/* Description: RAM BIST test type */

/* Bit 0 : RAM BIST Hub enable */
#define RAMBISTHUB_TESTTYPE_TESTTYPE_Pos (0UL) /*!< Position of TESTTYPE field. */
#define RAMBISTHUB_TESTTYPE_TESTTYPE_Msk (0x1UL << RAMBISTHUB_TESTTYPE_TESTTYPE_Pos) /*!< Bit mask of TESTTYPE field. */
#define RAMBISTHUB_TESTTYPE_TESTTYPE_BIST (0UL) /*!< Non-retention BIST */
#define RAMBISTHUB_TESTTYPE_TESTTYPE_RetentionBIST (1UL) /*!< Retention BIST */

/* Register: RAMBISTHUB_FORCEONRETENTION */
/* Description: Power request override to force RAM retention on */

/* Bit 0 : Power request override to force RAM retention on */
#define RAMBISTHUB_FORCEONRETENTION_FORCEONRETENTION_Pos (0UL) /*!< Position of FORCEONRETENTION field. */
#define RAMBISTHUB_FORCEONRETENTION_FORCEONRETENTION_Msk (0x1UL << RAMBISTHUB_FORCEONRETENTION_FORCEONRETENTION_Pos) /*!< Bit mask of FORCEONRETENTION field. */
#define RAMBISTHUB_FORCEONRETENTION_FORCEONRETENTION_Disabled (0UL) /*!< Power request override disabled */
#define RAMBISTHUB_FORCEONRETENTION_FORCEONRETENTION_Enabled (1UL) /*!< Power request override enabled */


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

/* Register: RCOSC32K_EVENTS_CTTO */
/* Description: Calibration timer timeout */

/* Bit 0 : Calibration timer timeout */
#define RCOSC32K_EVENTS_CTTO_EVENTS_CTTO_Pos (0UL) /*!< Position of EVENTS_CTTO field. */
#define RCOSC32K_EVENTS_CTTO_EVENTS_CTTO_Msk (0x1UL << RCOSC32K_EVENTS_CTTO_EVENTS_CTTO_Pos) /*!< Bit mask of EVENTS_CTTO field. */
#define RCOSC32K_EVENTS_CTTO_EVENTS_CTTO_NotGenerated (0UL) /*!< Event not generated */
#define RCOSC32K_EVENTS_CTTO_EVENTS_CTTO_Generated (1UL) /*!< Event generated */

/* Register: RCOSC32K_EVENTS_DONE */
/* Description: Calibration of LFCLK RC oscillator complete event */

/* Bit 0 : Calibration of LFCLK RC oscillator complete event */
#define RCOSC32K_EVENTS_DONE_EVENTS_DONE_Pos (0UL) /*!< Position of EVENTS_DONE field. */
#define RCOSC32K_EVENTS_DONE_EVENTS_DONE_Msk (0x1UL << RCOSC32K_EVENTS_DONE_EVENTS_DONE_Pos) /*!< Bit mask of EVENTS_DONE field. */
#define RCOSC32K_EVENTS_DONE_EVENTS_DONE_NotGenerated (0UL) /*!< Event not generated */
#define RCOSC32K_EVENTS_DONE_EVENTS_DONE_Generated (1UL) /*!< Event generated */

/* Register: RCOSC32K_EVENTS_CTSTARTED */
/* Description: Calibration timer started */

/* Bit 0 : Calibration timer started */
#define RCOSC32K_EVENTS_CTSTARTED_EVENTS_CTSTARTED_Pos (0UL) /*!< Position of EVENTS_CTSTARTED field. */
#define RCOSC32K_EVENTS_CTSTARTED_EVENTS_CTSTARTED_Msk (0x1UL << RCOSC32K_EVENTS_CTSTARTED_EVENTS_CTSTARTED_Pos) /*!< Bit mask of EVENTS_CTSTARTED field. */
#define RCOSC32K_EVENTS_CTSTARTED_EVENTS_CTSTARTED_NotGenerated (0UL) /*!< Event not generated */
#define RCOSC32K_EVENTS_CTSTARTED_EVENTS_CTSTARTED_Generated (1UL) /*!< Event generated */

/* Register: RCOSC32K_EVENTS_CTSTOPPED */
/* Description: Calibration timer stopped */

/* Bit 0 : Calibration timer stopped */
#define RCOSC32K_EVENTS_CTSTOPPED_EVENTS_CTSTOPPED_Pos (0UL) /*!< Position of EVENTS_CTSTOPPED field. */
#define RCOSC32K_EVENTS_CTSTOPPED_EVENTS_CTSTOPPED_Msk (0x1UL << RCOSC32K_EVENTS_CTSTOPPED_EVENTS_CTSTOPPED_Pos) /*!< Bit mask of EVENTS_CTSTOPPED field. */
#define RCOSC32K_EVENTS_CTSTOPPED_EVENTS_CTSTOPPED_NotGenerated (0UL) /*!< Event not generated */
#define RCOSC32K_EVENTS_CTSTOPPED_EVENTS_CTSTOPPED_Generated (1UL) /*!< Event generated */

/* Register: RCOSC32K_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 3 : Enable or disable interrupt for event CTSTOPPED */
#define RCOSC32K_INTEN_CTSTOPPED_Pos (3UL) /*!< Position of CTSTOPPED field. */
#define RCOSC32K_INTEN_CTSTOPPED_Msk (0x1UL << RCOSC32K_INTEN_CTSTOPPED_Pos) /*!< Bit mask of CTSTOPPED field. */
#define RCOSC32K_INTEN_CTSTOPPED_Disabled (0UL) /*!< Disable */
#define RCOSC32K_INTEN_CTSTOPPED_Enabled (1UL) /*!< Enable */

/* Bit 2 : Enable or disable interrupt for event CTSTARTED */
#define RCOSC32K_INTEN_CTSTARTED_Pos (2UL) /*!< Position of CTSTARTED field. */
#define RCOSC32K_INTEN_CTSTARTED_Msk (0x1UL << RCOSC32K_INTEN_CTSTARTED_Pos) /*!< Bit mask of CTSTARTED field. */
#define RCOSC32K_INTEN_CTSTARTED_Disabled (0UL) /*!< Disable */
#define RCOSC32K_INTEN_CTSTARTED_Enabled (1UL) /*!< Enable */

/* Bit 1 : Enable or disable interrupt for event DONE */
#define RCOSC32K_INTEN_DONE_Pos (1UL) /*!< Position of DONE field. */
#define RCOSC32K_INTEN_DONE_Msk (0x1UL << RCOSC32K_INTEN_DONE_Pos) /*!< Bit mask of DONE field. */
#define RCOSC32K_INTEN_DONE_Disabled (0UL) /*!< Disable */
#define RCOSC32K_INTEN_DONE_Enabled (1UL) /*!< Enable */

/* Bit 0 : Enable or disable interrupt for event CTTO */
#define RCOSC32K_INTEN_CTTO_Pos (0UL) /*!< Position of CTTO field. */
#define RCOSC32K_INTEN_CTTO_Msk (0x1UL << RCOSC32K_INTEN_CTTO_Pos) /*!< Bit mask of CTTO field. */
#define RCOSC32K_INTEN_CTTO_Disabled (0UL) /*!< Disable */
#define RCOSC32K_INTEN_CTTO_Enabled (1UL) /*!< Enable */

/* Register: RCOSC32K_INTENSET */
/* Description: Enable interrupt */

/* Bit 3 : Write '1' to enable interrupt for event CTSTOPPED */
#define RCOSC32K_INTENSET_CTSTOPPED_Pos (3UL) /*!< Position of CTSTOPPED field. */
#define RCOSC32K_INTENSET_CTSTOPPED_Msk (0x1UL << RCOSC32K_INTENSET_CTSTOPPED_Pos) /*!< Bit mask of CTSTOPPED field. */
#define RCOSC32K_INTENSET_CTSTOPPED_Disabled (0UL) /*!< Read: Disabled */
#define RCOSC32K_INTENSET_CTSTOPPED_Enabled (1UL) /*!< Read: Enabled */
#define RCOSC32K_INTENSET_CTSTOPPED_Set (1UL) /*!< Enable */

/* Bit 2 : Write '1' to enable interrupt for event CTSTARTED */
#define RCOSC32K_INTENSET_CTSTARTED_Pos (2UL) /*!< Position of CTSTARTED field. */
#define RCOSC32K_INTENSET_CTSTARTED_Msk (0x1UL << RCOSC32K_INTENSET_CTSTARTED_Pos) /*!< Bit mask of CTSTARTED field. */
#define RCOSC32K_INTENSET_CTSTARTED_Disabled (0UL) /*!< Read: Disabled */
#define RCOSC32K_INTENSET_CTSTARTED_Enabled (1UL) /*!< Read: Enabled */
#define RCOSC32K_INTENSET_CTSTARTED_Set (1UL) /*!< Enable */

/* Bit 1 : Write '1' to enable interrupt for event DONE */
#define RCOSC32K_INTENSET_DONE_Pos (1UL) /*!< Position of DONE field. */
#define RCOSC32K_INTENSET_DONE_Msk (0x1UL << RCOSC32K_INTENSET_DONE_Pos) /*!< Bit mask of DONE field. */
#define RCOSC32K_INTENSET_DONE_Disabled (0UL) /*!< Read: Disabled */
#define RCOSC32K_INTENSET_DONE_Enabled (1UL) /*!< Read: Enabled */
#define RCOSC32K_INTENSET_DONE_Set (1UL) /*!< Enable */

/* Bit 0 : Write '1' to enable interrupt for event CTTO */
#define RCOSC32K_INTENSET_CTTO_Pos (0UL) /*!< Position of CTTO field. */
#define RCOSC32K_INTENSET_CTTO_Msk (0x1UL << RCOSC32K_INTENSET_CTTO_Pos) /*!< Bit mask of CTTO field. */
#define RCOSC32K_INTENSET_CTTO_Disabled (0UL) /*!< Read: Disabled */
#define RCOSC32K_INTENSET_CTTO_Enabled (1UL) /*!< Read: Enabled */
#define RCOSC32K_INTENSET_CTTO_Set (1UL) /*!< Enable */

/* Register: RCOSC32K_INTENCLR */
/* Description: Disable interrupt */

/* Bit 3 : Write '1' to disable interrupt for event CTSTOPPED */
#define RCOSC32K_INTENCLR_CTSTOPPED_Pos (3UL) /*!< Position of CTSTOPPED field. */
#define RCOSC32K_INTENCLR_CTSTOPPED_Msk (0x1UL << RCOSC32K_INTENCLR_CTSTOPPED_Pos) /*!< Bit mask of CTSTOPPED field. */
#define RCOSC32K_INTENCLR_CTSTOPPED_Disabled (0UL) /*!< Read: Disabled */
#define RCOSC32K_INTENCLR_CTSTOPPED_Enabled (1UL) /*!< Read: Enabled */
#define RCOSC32K_INTENCLR_CTSTOPPED_Clear (1UL) /*!< Disable */

/* Bit 2 : Write '1' to disable interrupt for event CTSTARTED */
#define RCOSC32K_INTENCLR_CTSTARTED_Pos (2UL) /*!< Position of CTSTARTED field. */
#define RCOSC32K_INTENCLR_CTSTARTED_Msk (0x1UL << RCOSC32K_INTENCLR_CTSTARTED_Pos) /*!< Bit mask of CTSTARTED field. */
#define RCOSC32K_INTENCLR_CTSTARTED_Disabled (0UL) /*!< Read: Disabled */
#define RCOSC32K_INTENCLR_CTSTARTED_Enabled (1UL) /*!< Read: Enabled */
#define RCOSC32K_INTENCLR_CTSTARTED_Clear (1UL) /*!< Disable */

/* Bit 1 : Write '1' to disable interrupt for event DONE */
#define RCOSC32K_INTENCLR_DONE_Pos (1UL) /*!< Position of DONE field. */
#define RCOSC32K_INTENCLR_DONE_Msk (0x1UL << RCOSC32K_INTENCLR_DONE_Pos) /*!< Bit mask of DONE field. */
#define RCOSC32K_INTENCLR_DONE_Disabled (0UL) /*!< Read: Disabled */
#define RCOSC32K_INTENCLR_DONE_Enabled (1UL) /*!< Read: Enabled */
#define RCOSC32K_INTENCLR_DONE_Clear (1UL) /*!< Disable */

/* Bit 0 : Write '1' to disable interrupt for event CTTO */
#define RCOSC32K_INTENCLR_CTTO_Pos (0UL) /*!< Position of CTTO field. */
#define RCOSC32K_INTENCLR_CTTO_Msk (0x1UL << RCOSC32K_INTENCLR_CTTO_Pos) /*!< Bit mask of CTTO field. */
#define RCOSC32K_INTENCLR_CTTO_Disabled (0UL) /*!< Read: Disabled */
#define RCOSC32K_INTENCLR_CTTO_Enabled (1UL) /*!< Read: Enabled */
#define RCOSC32K_INTENCLR_CTTO_Clear (1UL) /*!< Disable */

/* Register: RCOSC32K_RCOSC32KIFINE */
/* Description: Fine calibration read value for 32.768 kHz RC oscillator */

/* Bits 9..0 : Fine calibration read value for 32.768 kHz RC oscillator */
#define RCOSC32K_RCOSC32KIFINE_RCOSC32KIFINE_Pos (0UL) /*!< Position of RCOSC32KIFINE field. */
#define RCOSC32K_RCOSC32KIFINE_RCOSC32KIFINE_Msk (0x3FFUL << RCOSC32K_RCOSC32KIFINE_RCOSC32KIFINE_Pos) /*!< Bit mask of RCOSC32KIFINE field. */

/* Register: RCOSC32K_RCOSC32KICOARSE */
/* Description: Coarse calibration read value for 32.768 kHz RC oscillator */

/* Bits 5..0 : Coarse calibration read value for 32.768 kHz RC oscillator */
#define RCOSC32K_RCOSC32KICOARSE_RCOSC32KICOARSE_Pos (0UL) /*!< Position of RCOSC32KICOARSE field. */
#define RCOSC32K_RCOSC32KICOARSE_RCOSC32KICOARSE_Msk (0x3FUL << RCOSC32K_RCOSC32KICOARSE_RCOSC32KICOARSE_Pos) /*!< Bit mask of RCOSC32KICOARSE field. */

/* Register: RCOSC32K_RCOSC32KICALTEST */
/* Description: 32.768 kHz RC oscillator calibration debug register NOTE: This register should not be written to while the RCOSC source is running. */

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
/* Description: Calibration timer interval NOTE: This register should not be written to while the RCOSC source is running. */

/* Bits 6..0 : Calibration timer interval in multiple of 0.25 seconds. Range: 0.25 seconds to 31.75 seconds. */
#define RCOSC32K_CTIV_CTIV_Pos (0UL) /*!< Position of CTIV field. */
#define RCOSC32K_CTIV_CTIV_Msk (0x7FUL << RCOSC32K_CTIV_CTIV_Pos) /*!< Bit mask of CTIV field. */

/* Register: RCOSC32K_RCOSC32KICALLENGTH */
/* Description: 32kHz RC oscillator calibration length This value is read from FICR */

/* Bits 2..0 : 32kHz RC oscillator calibration length in number of cycles */
#define RCOSC32K_RCOSC32KICALLENGTH_RCOSC32KICALLENGTH_Pos (0UL) /*!< Position of RCOSC32KICALLENGTH field. */
#define RCOSC32K_RCOSC32KICALLENGTH_RCOSC32KICALLENGTH_Msk (0x7UL << RCOSC32K_RCOSC32KICALLENGTH_RCOSC32KICALLENGTH_Pos) /*!< Bit mask of RCOSC32KICALLENGTH field. */
#define RCOSC32K_RCOSC32KICALLENGTH_RCOSC32KICALLENGTH_N64 (0UL) /*!< 64 cycles */
#define RCOSC32K_RCOSC32KICALLENGTH_RCOSC32KICALLENGTH_N128 (1UL) /*!< 128 cycles */
#define RCOSC32K_RCOSC32KICALLENGTH_RCOSC32KICALLENGTH_N256 (2UL) /*!< 256 cycles */
#define RCOSC32K_RCOSC32KICALLENGTH_RCOSC32KICALLENGTH_N512 (3UL) /*!< 512 cycles */

/* Register: RCOSC32K_RCOSC32KICOARSEIN */
/* Description: RCOSC coarse calibration input This value is read from FICR */

/* Bits 5..0 : RCOSC coarse calibration input */
#define RCOSC32K_RCOSC32KICOARSEIN_RCOSC32KICOARSEIN_Pos (0UL) /*!< Position of RCOSC32KICOARSEIN field. */
#define RCOSC32K_RCOSC32KICOARSEIN_RCOSC32KICOARSEIN_Msk (0x3FUL << RCOSC32K_RCOSC32KICOARSEIN_RCOSC32KICOARSEIN_Pos) /*!< Bit mask of RCOSC32KICOARSEIN field. */

/* Register: RCOSC32K_RCOSC32KICIRC */
/* Description: Rotating current source for for 32.768 kHz RC oscillator */

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

/* Register: RCOSC32K_LFRCMODE */
/* Description: LFRC mode configuration */

/* Bit 0 : Set LFRC mode */
#define RCOSC32K_LFRCMODE_MODE_Pos (0UL) /*!< Position of MODE field. */
#define RCOSC32K_LFRCMODE_MODE_Msk (0x1UL << RCOSC32K_LFRCMODE_MODE_Pos) /*!< Bit mask of MODE field. */
#define RCOSC32K_LFRCMODE_MODE_Normal (0UL) /*!< Normal mode */
#define RCOSC32K_LFRCMODE_MODE_ULP (1UL) /*!< Ultra-low power mode (ULP) */

/* Register: RCOSC32K_LFULP32KICOARSEIN */
/* Description: LFULP coarse calibration input This value is read from FICR */

/* Bits 5..0 : LFULP coarse calibration input */
#define RCOSC32K_LFULP32KICOARSEIN_LFULP32KICOARSE_Pos (0UL) /*!< Position of LFULP32KICOARSE field. */
#define RCOSC32K_LFULP32KICOARSEIN_LFULP32KICOARSE_Msk (0x3FUL << RCOSC32K_LFULP32KICOARSEIN_LFULP32KICOARSE_Pos) /*!< Bit mask of LFULP32KICOARSE field. */

/* Register: RCOSC32K_LFULP32KICALLENGTH */
/* Description: 32kHz LFULP RC oscillator calibration length This value is read from FICR */

/* Bits 2..0 : 32kHz ULP RC oscillator calibration length in number of cycles */
#define RCOSC32K_LFULP32KICALLENGTH_LFULP32KICALLENGTH_Pos (0UL) /*!< Position of LFULP32KICALLENGTH field. */
#define RCOSC32K_LFULP32KICALLENGTH_LFULP32KICALLENGTH_Msk (0x7UL << RCOSC32K_LFULP32KICALLENGTH_LFULP32KICALLENGTH_Pos) /*!< Bit mask of LFULP32KICALLENGTH field. */
#define RCOSC32K_LFULP32KICALLENGTH_LFULP32KICALLENGTH_N64 (0UL) /*!< 64 cycles */
#define RCOSC32K_LFULP32KICALLENGTH_LFULP32KICALLENGTH_N128 (1UL) /*!< 128 cycles */
#define RCOSC32K_LFULP32KICALLENGTH_LFULP32KICALLENGTH_N256 (2UL) /*!< 256 cycles */
#define RCOSC32K_LFULP32KICALLENGTH_LFULP32KICALLENGTH_N512 (3UL) /*!< 512 cycles */

/* Register: RCOSC32K_DISBALERCOSC32KIPOWERUPCONTROL */
/* Description: Backdoor for disabling Rcosc32KiPowerUpControl module in Rcosc32KiGenerator. */

/* Bit 0 : Disable Rcosc32KiPowerUpControl. */
#define RCOSC32K_DISBALERCOSC32KIPOWERUPCONTROL_Disable_Pos (0UL) /*!< Position of Disable field. */
#define RCOSC32K_DISBALERCOSC32KIPOWERUPCONTROL_Disable_Msk (0x1UL << RCOSC32K_DISBALERCOSC32KIPOWERUPCONTROL_Disable_Pos) /*!< Bit mask of Disable field. */
#define RCOSC32K_DISBALERCOSC32KIPOWERUPCONTROL_Disable_Enabled (0UL) /*!< Rcosc32KiPowerUpControl is enabled. */
#define RCOSC32K_DISBALERCOSC32KIPOWERUPCONTROL_Disable_Disabled (1UL) /*!< Rcosc32KiPowerUpControl is disabled. */


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

/* Register: SECURECONTROL_KMUENA */
/* Description: SICR erase protection. */

/* Bit 0 : SICR erase protection. */
#define SECURECONTROL_KMUENA_KMUENA_Pos (0UL) /*!< Position of KMUENA field. */
#define SECURECONTROL_KMUENA_KMUENA_Msk (0x1UL << SECURECONTROL_KMUENA_KMUENA_Pos) /*!< Bit mask of KMUENA field. */
#define SECURECONTROL_KMUENA_KMUENA_Unprotected (0UL) /*!< SICR erase protection off. */
#define SECURECONTROL_KMUENA_KMUENA_Protected (1UL) /*!< SICR erase protection on. */

/* Register: SECURECONTROL_RAMWAITSTATE */
/* Description: Modem M4 RAM wait state configuration. */

/* Bit 3 : Wait state for RAM bank D. */
#define SECURECONTROL_RAMWAITSTATE_RAMDWAITSTATE_Pos (3UL) /*!< Position of RAMDWAITSTATE field. */
#define SECURECONTROL_RAMWAITSTATE_RAMDWAITSTATE_Msk (0x1UL << SECURECONTROL_RAMWAITSTATE_RAMDWAITSTATE_Pos) /*!< Bit mask of RAMDWAITSTATE field. */
#define SECURECONTROL_RAMWAITSTATE_RAMDWAITSTATE_WaitState0 (0UL) /*!< Wait state of 0. */
#define SECURECONTROL_RAMWAITSTATE_RAMDWAITSTATE_WaitState1 (1UL) /*!< Wait state of 1. */

/* Bit 2 : Wait state for RAM bank C. */
#define SECURECONTROL_RAMWAITSTATE_RAMCWAITSTATE_Pos (2UL) /*!< Position of RAMCWAITSTATE field. */
#define SECURECONTROL_RAMWAITSTATE_RAMCWAITSTATE_Msk (0x1UL << SECURECONTROL_RAMWAITSTATE_RAMCWAITSTATE_Pos) /*!< Bit mask of RAMCWAITSTATE field. */
#define SECURECONTROL_RAMWAITSTATE_RAMCWAITSTATE_WaitState0 (0UL) /*!< Wait state of 0. */
#define SECURECONTROL_RAMWAITSTATE_RAMCWAITSTATE_WaitState1 (1UL) /*!< Wait state of 1. */

/* Bit 1 : Wait state for RAM bank B. */
#define SECURECONTROL_RAMWAITSTATE_RAMBWAITSTATE_Pos (1UL) /*!< Position of RAMBWAITSTATE field. */
#define SECURECONTROL_RAMWAITSTATE_RAMBWAITSTATE_Msk (0x1UL << SECURECONTROL_RAMWAITSTATE_RAMBWAITSTATE_Pos) /*!< Bit mask of RAMBWAITSTATE field. */
#define SECURECONTROL_RAMWAITSTATE_RAMBWAITSTATE_WaitState0 (0UL) /*!< Wait state of 0. */
#define SECURECONTROL_RAMWAITSTATE_RAMBWAITSTATE_WaitState1 (1UL) /*!< Wait state of 1. */

/* Bit 0 : Wait state for RAM bank A. */
#define SECURECONTROL_RAMWAITSTATE_RAMAWAITSTATE_Pos (0UL) /*!< Position of RAMAWAITSTATE field. */
#define SECURECONTROL_RAMWAITSTATE_RAMAWAITSTATE_Msk (0x1UL << SECURECONTROL_RAMWAITSTATE_RAMAWAITSTATE_Pos) /*!< Bit mask of RAMAWAITSTATE field. */
#define SECURECONTROL_RAMWAITSTATE_RAMAWAITSTATE_WaitState0 (0UL) /*!< Wait state of 0. */
#define SECURECONTROL_RAMWAITSTATE_RAMAWAITSTATE_WaitState1 (1UL) /*!< Wait state of 1. */


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

/* Register: SHA_EVENTS_SHA_READY */
/* Description: SHA calculated. */

/* Bit 0 : SHA calculated. */
#define SHA_EVENTS_SHA_READY_EVENTS_SHA_READY_Pos (0UL) /*!< Position of EVENTS_SHA_READY field. */
#define SHA_EVENTS_SHA_READY_EVENTS_SHA_READY_Msk (0x1UL << SHA_EVENTS_SHA_READY_EVENTS_SHA_READY_Pos) /*!< Bit mask of EVENTS_SHA_READY field. */
#define SHA_EVENTS_SHA_READY_EVENTS_SHA_READY_NotGenerated (0UL) /*!< Event not generated */
#define SHA_EVENTS_SHA_READY_EVENTS_SHA_READY_Generated (1UL) /*!< Event generated */

/* Register: SHA_EVENTS_MESSAGE_READY */
/* Description: LENGTH == 0. */

/* Bit 0 : LENGTH == 0. */
#define SHA_EVENTS_MESSAGE_READY_EVENTS_MESSAGE_READY_Pos (0UL) /*!< Position of EVENTS_MESSAGE_READY field. */
#define SHA_EVENTS_MESSAGE_READY_EVENTS_MESSAGE_READY_Msk (0x1UL << SHA_EVENTS_MESSAGE_READY_EVENTS_MESSAGE_READY_Pos) /*!< Bit mask of EVENTS_MESSAGE_READY field. */
#define SHA_EVENTS_MESSAGE_READY_EVENTS_MESSAGE_READY_NotGenerated (0UL) /*!< Event not generated */
#define SHA_EVENTS_MESSAGE_READY_EVENTS_MESSAGE_READY_Generated (1UL) /*!< Event generated */

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

/* Bit 4 : Enable or disable interrupt for event MESSAGE_READY */
#define SHA_INTEN_MESSAGE_READY_Pos (4UL) /*!< Position of MESSAGE_READY field. */
#define SHA_INTEN_MESSAGE_READY_Msk (0x1UL << SHA_INTEN_MESSAGE_READY_Pos) /*!< Bit mask of MESSAGE_READY field. */
#define SHA_INTEN_MESSAGE_READY_Disabled (0UL) /*!< Disable */
#define SHA_INTEN_MESSAGE_READY_Enabled (1UL) /*!< Enable */

/* Bit 3 : Enable or disable interrupt for event SHA_READY */
#define SHA_INTEN_SHA_READY_Pos (3UL) /*!< Position of SHA_READY field. */
#define SHA_INTEN_SHA_READY_Msk (0x1UL << SHA_INTEN_SHA_READY_Pos) /*!< Bit mask of SHA_READY field. */
#define SHA_INTEN_SHA_READY_Disabled (0UL) /*!< Disable */
#define SHA_INTEN_SHA_READY_Enabled (1UL) /*!< Enable */

/* Bit 2 : Enable or disable interrupt for event UNUSED */
#define SHA_INTEN_UNUSED_Pos (2UL) /*!< Position of UNUSED field. */
#define SHA_INTEN_UNUSED_Msk (0x1UL << SHA_INTEN_UNUSED_Pos) /*!< Bit mask of UNUSED field. */
#define SHA_INTEN_UNUSED_Disabled (0UL) /*!< Disable */
#define SHA_INTEN_UNUSED_Enabled (1UL) /*!< Enable */

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

/* Bit 4 : Write '1' to enable interrupt for event MESSAGE_READY */
#define SHA_INTENSET_MESSAGE_READY_Pos (4UL) /*!< Position of MESSAGE_READY field. */
#define SHA_INTENSET_MESSAGE_READY_Msk (0x1UL << SHA_INTENSET_MESSAGE_READY_Pos) /*!< Bit mask of MESSAGE_READY field. */
#define SHA_INTENSET_MESSAGE_READY_Disabled (0UL) /*!< Read: Disabled */
#define SHA_INTENSET_MESSAGE_READY_Enabled (1UL) /*!< Read: Enabled */
#define SHA_INTENSET_MESSAGE_READY_Set (1UL) /*!< Enable */

/* Bit 3 : Write '1' to enable interrupt for event SHA_READY */
#define SHA_INTENSET_SHA_READY_Pos (3UL) /*!< Position of SHA_READY field. */
#define SHA_INTENSET_SHA_READY_Msk (0x1UL << SHA_INTENSET_SHA_READY_Pos) /*!< Bit mask of SHA_READY field. */
#define SHA_INTENSET_SHA_READY_Disabled (0UL) /*!< Read: Disabled */
#define SHA_INTENSET_SHA_READY_Enabled (1UL) /*!< Read: Enabled */
#define SHA_INTENSET_SHA_READY_Set (1UL) /*!< Enable */

/* Bit 2 : Write '1' to enable interrupt for event UNUSED */
#define SHA_INTENSET_UNUSED_Pos (2UL) /*!< Position of UNUSED field. */
#define SHA_INTENSET_UNUSED_Msk (0x1UL << SHA_INTENSET_UNUSED_Pos) /*!< Bit mask of UNUSED field. */
#define SHA_INTENSET_UNUSED_Disabled (0UL) /*!< Read: Disabled */
#define SHA_INTENSET_UNUSED_Enabled (1UL) /*!< Read: Enabled */
#define SHA_INTENSET_UNUSED_Set (1UL) /*!< Enable */

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

/* Bit 4 : Write '1' to disable interrupt for event MESSAGE_READY */
#define SHA_INTENCLR_MESSAGE_READY_Pos (4UL) /*!< Position of MESSAGE_READY field. */
#define SHA_INTENCLR_MESSAGE_READY_Msk (0x1UL << SHA_INTENCLR_MESSAGE_READY_Pos) /*!< Bit mask of MESSAGE_READY field. */
#define SHA_INTENCLR_MESSAGE_READY_Disabled (0UL) /*!< Read: Disabled */
#define SHA_INTENCLR_MESSAGE_READY_Enabled (1UL) /*!< Read: Enabled */
#define SHA_INTENCLR_MESSAGE_READY_Clear (1UL) /*!< Disable */

/* Bit 3 : Write '1' to disable interrupt for event SHA_READY */
#define SHA_INTENCLR_SHA_READY_Pos (3UL) /*!< Position of SHA_READY field. */
#define SHA_INTENCLR_SHA_READY_Msk (0x1UL << SHA_INTENCLR_SHA_READY_Pos) /*!< Bit mask of SHA_READY field. */
#define SHA_INTENCLR_SHA_READY_Disabled (0UL) /*!< Read: Disabled */
#define SHA_INTENCLR_SHA_READY_Enabled (1UL) /*!< Read: Enabled */
#define SHA_INTENCLR_SHA_READY_Clear (1UL) /*!< Disable */

/* Bit 2 : Write '1' to disable interrupt for event UNUSED */
#define SHA_INTENCLR_UNUSED_Pos (2UL) /*!< Position of UNUSED field. */
#define SHA_INTENCLR_UNUSED_Msk (0x1UL << SHA_INTENCLR_UNUSED_Pos) /*!< Bit mask of UNUSED field. */
#define SHA_INTENCLR_UNUSED_Disabled (0UL) /*!< Read: Disabled */
#define SHA_INTENCLR_UNUSED_Enabled (1UL) /*!< Read: Enabled */
#define SHA_INTENCLR_UNUSED_Clear (1UL) /*!< Disable */

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

/* Register: SHA_INBYTECOUNT */
/* Description: Bytes transferred in current job. */

/* Bits 31..0 : Bytes transferred in current job. */
#define SHA_INBYTECOUNT_INBYTECOUNT_Pos (0UL) /*!< Position of INBYTECOUNT field. */
#define SHA_INBYTECOUNT_INBYTECOUNT_Msk (0xFFFFFFFFUL << SHA_INBYTECOUNT_INBYTECOUNT_Pos) /*!< Bit mask of INBYTECOUNT field. */

/* Register: SHA_INJOBPTR */
/* Description: Input job pointer. */

/* Bits 31..0 : Input job pointer. */
#define SHA_INJOBPTR_INJOBPTR_Pos (0UL) /*!< Position of INJOBPTR field. */
#define SHA_INJOBPTR_INJOBPTR_Msk (0xFFFFFFFFUL << SHA_INJOBPTR_INJOBPTR_Pos) /*!< Bit mask of INJOBPTR field. */


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
/* Description: Write test data from Ahb test reg to Ahb Rx bus */

/* Bit 0 : Write test data from Ahb test reg to Ahb Rx bus */
#define SIMIF_TASKS_STARTWRITEFROMREG_TASKS_STARTWRITEFROMREG_Pos (0UL) /*!< Position of TASKS_STARTWRITEFROMREG field. */
#define SIMIF_TASKS_STARTWRITEFROMREG_TASKS_STARTWRITEFROMREG_Msk (0x1UL << SIMIF_TASKS_STARTWRITEFROMREG_TASKS_STARTWRITEFROMREG_Pos) /*!< Bit mask of TASKS_STARTWRITEFROMREG field. */
#define SIMIF_TASKS_STARTWRITEFROMREG_TASKS_STARTWRITEFROMREG_Trigger (1UL) /*!< Trigger task */

/* Register: SIMIF_TASKS_STARTREADTOREG */
/* Description: Read data from Ahb Tx bus to Ahb test reg */

/* Bit 0 : Read data from Ahb Tx bus to Ahb test reg */
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

/* Register: SIMIF_TASKS_TIMECOUNTCLEAR */
/* Description: Stop and clear time out counter */

/* Bit 0 : Stop and clear time out counter */
#define SIMIF_TASKS_TIMECOUNTCLEAR_TASKS_TIMECOUNTCLEAR_Pos (0UL) /*!< Position of TASKS_TIMECOUNTCLEAR field. */
#define SIMIF_TASKS_TIMECOUNTCLEAR_TASKS_TIMECOUNTCLEAR_Msk (0x1UL << SIMIF_TASKS_TIMECOUNTCLEAR_TASKS_TIMECOUNTCLEAR_Pos) /*!< Bit mask of TASKS_TIMECOUNTCLEAR field. */
#define SIMIF_TASKS_TIMECOUNTCLEAR_TASKS_TIMECOUNTCLEAR_Trigger (1UL) /*!< Trigger task */

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

/* Register: SIMIF_EVENTS_EVENTS_T1_RX_FRAME_END */
/* Description: Len byte + 1 bytes of T1 Rx data received */

/* Bit 0 : Len byte + 1 bytes of T1 Rx data received */
#define SIMIF_EVENTS_EVENTS_T1_RX_FRAME_END_EVENTS_EVENTS_T1_RX_FRAME_END_Pos (0UL) /*!< Position of EVENTS_EVENTS_T1_RX_FRAME_END field. */
#define SIMIF_EVENTS_EVENTS_T1_RX_FRAME_END_EVENTS_EVENTS_T1_RX_FRAME_END_Msk (0x1UL << SIMIF_EVENTS_EVENTS_T1_RX_FRAME_END_EVENTS_EVENTS_T1_RX_FRAME_END_Pos) /*!< Bit mask of EVENTS_EVENTS_T1_RX_FRAME_END field. */
#define SIMIF_EVENTS_EVENTS_T1_RX_FRAME_END_EVENTS_EVENTS_T1_RX_FRAME_END_NotGenerated (0UL) /*!< Event not generated */
#define SIMIF_EVENTS_EVENTS_T1_RX_FRAME_END_EVENTS_EVENTS_T1_RX_FRAME_END_Generated (1UL) /*!< Event generated */

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

/* Register: SIMIF_INTPEND */
/* Description: Pending interrupts */

/* Bit 24 : Read pending status of interrupt for event T1_RX_FRAME_END */
#define SIMIF_INTPEND_T1_RX_FRAME_END_Pos (24UL) /*!< Position of T1_RX_FRAME_END field. */
#define SIMIF_INTPEND_T1_RX_FRAME_END_Msk (0x1UL << SIMIF_INTPEND_T1_RX_FRAME_END_Pos) /*!< Bit mask of T1_RX_FRAME_END field. */
#define SIMIF_INTPEND_T1_RX_FRAME_END_NotPending (0UL) /*!< Read: Not pending */
#define SIMIF_INTPEND_T1_RX_FRAME_END_Pending (1UL) /*!< Read: Pending */

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

/* Bits 31..0 : Guard time from leading edge of the character to the leading edge of the next character in ETU */
#define SIMIF_CHARACTERGUARDTIME_CHARACTERGUARDTIME_Pos (0UL) /*!< Position of CHARACTERGUARDTIME field. */
#define SIMIF_CHARACTERGUARDTIME_CHARACTERGUARDTIME_Msk (0xFFFFFFFFUL << SIMIF_CHARACTERGUARDTIME_CHARACTERGUARDTIME_Pos) /*!< Bit mask of CHARACTERGUARDTIME field. */

/* Register: SIMIF_CHARACTERWAITTIME */
/* Description: Character Wait time */

/* Bits 31..0 : T=1 character Rx wait time in ETU */
#define SIMIF_CHARACTERWAITTIME_CHARACTERWAITTIME_Pos (0UL) /*!< Position of CHARACTERWAITTIME field. */
#define SIMIF_CHARACTERWAITTIME_CHARACTERWAITTIME_Msk (0xFFFFFFFFUL << SIMIF_CHARACTERWAITTIME_CHARACTERWAITTIME_Pos) /*!< Bit mask of CHARACTERWAITTIME field. */

/* Register: SIMIF_BLOCKWAITTIME */
/* Description: Block Wait time */

/* Bits 31..0 : Block wait time in ETU, default 9600 */
#define SIMIF_BLOCKWAITTIME_BLOCKWAITTIME_Pos (0UL) /*!< Position of BLOCKWAITTIME field. */
#define SIMIF_BLOCKWAITTIME_BLOCKWAITTIME_Msk (0xFFFFFFFFUL << SIMIF_BLOCKWAITTIME_BLOCKWAITTIME_Pos) /*!< Bit mask of BLOCKWAITTIME field. */

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

/* Bit 2 : Rx Send Sequence number in T1 I Block */
#define SIMIF_T1PCBCONTROL_RECEIVEDSEQUENCENUMBER_Pos (2UL) /*!< Position of RECEIVEDSEQUENCENUMBER field. */
#define SIMIF_T1PCBCONTROL_RECEIVEDSEQUENCENUMBER_Msk (0x1UL << SIMIF_T1PCBCONTROL_RECEIVEDSEQUENCENUMBER_Pos) /*!< Bit mask of RECEIVEDSEQUENCENUMBER field. */

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

/* Register: SIMIF_AHBTESTWRITE */
/* Description: Test data to write through AHB RX bus */

/* Bit 8 : Enable bit for Ahb testing, both read and write */
#define SIMIF_AHBTESTWRITE_AHBTESTENABLE_Pos (8UL) /*!< Position of AHBTESTENABLE field. */
#define SIMIF_AHBTESTWRITE_AHBTESTENABLE_Msk (0x1UL << SIMIF_AHBTESTWRITE_AHBTESTENABLE_Pos) /*!< Bit mask of AHBTESTENABLE field. */

/* Bits 7..0 : Test data for Ahb write access for Ahb Rx bus */
#define SIMIF_AHBTESTWRITE_WRITETESTDATA_Pos (0UL) /*!< Position of WRITETESTDATA field. */
#define SIMIF_AHBTESTWRITE_WRITETESTDATA_Msk (0xFFUL << SIMIF_AHBTESTWRITE_WRITETESTDATA_Pos) /*!< Bit mask of WRITETESTDATA field. */

/* Register: SIMIF_AHBTESTREAD */
/* Description: Test data to read through AHB TX bus */

/* Bits 7..0 : Test data read through Ahb Tx bus */
#define SIMIF_AHBTESTREAD_READTESTDATA_Pos (0UL) /*!< Position of READTESTDATA field. */
#define SIMIF_AHBTESTREAD_READTESTDATA_Msk (0xFFUL << SIMIF_AHBTESTREAD_READTESTDATA_Pos) /*!< Bit mask of READTESTDATA field. */

/* Register: SIMIF_RXPROLOGUEDATA */
/* Description: Four first Rx data bytes from card */

/* Bits 31..24 : Fourth Rx byte from card */
#define SIMIF_RXPROLOGUEDATA_RXBYTE3_Pos (24UL) /*!< Position of RXBYTE3 field. */
#define SIMIF_RXPROLOGUEDATA_RXBYTE3_Msk (0xFFUL << SIMIF_RXPROLOGUEDATA_RXBYTE3_Pos) /*!< Bit mask of RXBYTE3 field. */

/* Bits 23..16 : Third Rx byte from card */
#define SIMIF_RXPROLOGUEDATA_RXBYTE2_Pos (16UL) /*!< Position of RXBYTE2 field. */
#define SIMIF_RXPROLOGUEDATA_RXBYTE2_Msk (0xFFUL << SIMIF_RXPROLOGUEDATA_RXBYTE2_Pos) /*!< Bit mask of RXBYTE2 field. */

/* Bits 15..8 : Second Rx byte from card */
#define SIMIF_RXPROLOGUEDATA_RXBYTE1_Pos (8UL) /*!< Position of RXBYTE1 field. */
#define SIMIF_RXPROLOGUEDATA_RXBYTE1_Msk (0xFFUL << SIMIF_RXPROLOGUEDATA_RXBYTE1_Pos) /*!< Bit mask of RXBYTE1 field. */

/* Bits 7..0 : First Rx byte from card */
#define SIMIF_RXPROLOGUEDATA_RXBYTE0_Pos (0UL) /*!< Position of RXBYTE0 field. */
#define SIMIF_RXPROLOGUEDATA_RXBYTE0_Msk (0xFFUL << SIMIF_RXPROLOGUEDATA_RXBYTE0_Pos) /*!< Bit mask of RXBYTE0 field. */

/* Register: SIMIF_UARTENABLE */
/* Description: UART Enable */

/* Bit 0 : UART master enable */
#define SIMIF_UARTENABLE_ENABLE_Pos (0UL) /*!< Position of ENABLE field. */
#define SIMIF_UARTENABLE_ENABLE_Msk (0x1UL << SIMIF_UARTENABLE_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Register: SIMIF_UARTRXENABLE */
/* Description: UART Rx Enable */

/* Bit 0 : UART Rx enable */
#define SIMIF_UARTRXENABLE_ENABLE_Pos (0UL) /*!< Position of ENABLE field. */
#define SIMIF_UARTRXENABLE_ENABLE_Msk (0x1UL << SIMIF_UARTRXENABLE_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Register: SIMIF_UARTTXENABLE */
/* Description: UART Tx Enable */

/* Bit 0 : UART Tx enable */
#define SIMIF_UARTTXENABLE_ENABLE_Pos (0UL) /*!< Position of ENABLE field. */
#define SIMIF_UARTTXENABLE_ENABLE_Msk (0x1UL << SIMIF_UARTTXENABLE_ENABLE_Pos) /*!< Bit mask of ENABLE field. */

/* Register: SIMIF_DMARXADDR */
/* Description: DMA access  buffer RAM start address */

/* Bits 31..0 : DMA access  buffer RAM start address */
#define SIMIF_DMARXADDR_DMARXSTARTADDRESS_Pos (0UL) /*!< Position of DMARXSTARTADDRESS field. */
#define SIMIF_DMARXADDR_DMARXSTARTADDRESS_Msk (0xFFFFFFFFUL << SIMIF_DMARXADDR_DMARXSTARTADDRESS_Pos) /*!< Bit mask of DMARXSTARTADDRESS field. */

/* Register: SIMIF_DMARXBUFFERSIZE */
/* Description: Byte count to receive in Dma Rx operation */

/* Bits 15..0 : Byte count to receive in Dma Rx operation */
#define SIMIF_DMARXBUFFERSIZE_DMARXBUFFERSIZE_Pos (0UL) /*!< Position of DMARXBUFFERSIZE field. */
#define SIMIF_DMARXBUFFERSIZE_DMARXBUFFERSIZE_Msk (0xFFFFUL << SIMIF_DMARXBUFFERSIZE_DMARXBUFFERSIZE_Pos) /*!< Bit mask of DMARXBUFFERSIZE field. */

/* Register: SIMIF_DMARXBYTECOUNT */
/* Description: Byte count received in latest Dma Rx operation */

/* Bits 15..0 : Byte count received in latest Dma Rx operation */
#define SIMIF_DMARXBYTECOUNT_DMARXBYTECOUNT_Pos (0UL) /*!< Position of DMARXBYTECOUNT field. */
#define SIMIF_DMARXBYTECOUNT_DMARXBYTECOUNT_Msk (0xFFFFUL << SIMIF_DMARXBYTECOUNT_DMARXBYTECOUNT_Pos) /*!< Bit mask of DMARXBYTECOUNT field. */

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

/* Bits 15..0 : Byte count to transmit in Dma Tx operation */
#define SIMIF_DMATXBUFFERSIZE_DMATXBUFFERSIZE_Pos (0UL) /*!< Position of DMATXBUFFERSIZE field. */
#define SIMIF_DMATXBUFFERSIZE_DMATXBUFFERSIZE_Msk (0xFFFFUL << SIMIF_DMATXBUFFERSIZE_DMATXBUFFERSIZE_Pos) /*!< Bit mask of DMATXBUFFERSIZE field. */

/* Register: SIMIF_DMATXBYTECOUNT */
/* Description: Byte count transmitted in latest Dma Tx operation */

/* Bits 15..0 : Byte count transmitted in latest Dma Tx operation */
#define SIMIF_DMATXBYTECOUNT_DMATXBYTECOUNT_Pos (0UL) /*!< Position of DMATXBYTECOUNT field. */
#define SIMIF_DMATXBYTECOUNT_DMATXBYTECOUNT_Msk (0xFFFFUL << SIMIF_DMATXBYTECOUNT_DMATXBYTECOUNT_Pos) /*!< Bit mask of DMATXBYTECOUNT field. */

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

/* Register: TEMP_ENABLE */
/* Description: Enable temperature sensor bias current */

/* Bit 0 : Enable temperature sensor bias current */
#define TEMP_ENABLE_ENABLE_Pos (0UL) /*!< Position of ENABLE field. */
#define TEMP_ENABLE_ENABLE_Msk (0x1UL << TEMP_ENABLE_ENABLE_Pos) /*!< Bit mask of ENABLE field. */
#define TEMP_ENABLE_ENABLE_Disabled (0UL) /*!< Bias is disabled */
#define TEMP_ENABLE_ENABLE_Enabled (1UL) /*!< Bias is enabled */

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

/* Register: TEMP_A1 */
/* Description: Slope of 1st piece wise linear function */

/* Bits 11..0 : Slope of 1st piece wise linear function */
#define TEMP_A1_A0_Pos (0UL) /*!< Position of A0 field. */
#define TEMP_A1_A0_Msk (0xFFFUL << TEMP_A1_A0_Pos) /*!< Bit mask of A0 field. */

/* Register: TEMP_A2 */
/* Description: Slope of 2nd piece wise linear function */

/* Bits 11..0 : Slope of 2nd piece wise linear function */
#define TEMP_A2_A1_Pos (0UL) /*!< Position of A1 field. */
#define TEMP_A2_A1_Msk (0xFFFUL << TEMP_A2_A1_Pos) /*!< Bit mask of A1 field. */

/* Register: TEMP_A3 */
/* Description: Slope of 3rd piece wise linear function */

/* Bits 11..0 : Slope of 3rd piece wise linear function */
#define TEMP_A3_A2_Pos (0UL) /*!< Position of A2 field. */
#define TEMP_A3_A2_Msk (0xFFFUL << TEMP_A3_A2_Pos) /*!< Bit mask of A2 field. */

/* Register: TEMP_A4 */
/* Description: Slope of 4th piece wise linear function */

/* Bits 11..0 : Slope of 4th piece wise linear function */
#define TEMP_A4_A3_Pos (0UL) /*!< Position of A3 field. */
#define TEMP_A4_A3_Msk (0xFFFUL << TEMP_A4_A3_Pos) /*!< Bit mask of A3 field. */

/* Register: TEMP_A5 */
/* Description: Slope of 5th piece wise linear function */

/* Bits 11..0 : Slope of 5th piece wise linear function */
#define TEMP_A5_A4_Pos (0UL) /*!< Position of A4 field. */
#define TEMP_A5_A4_Msk (0xFFFUL << TEMP_A5_A4_Pos) /*!< Bit mask of A4 field. */

/* Register: TEMP_A6 */
/* Description: Slope of 6th piece wise linear function */

/* Bits 11..0 : Slope of 6th piece wise linear function */
#define TEMP_A6_A5_Pos (0UL) /*!< Position of A5 field. */
#define TEMP_A6_A5_Msk (0xFFFUL << TEMP_A6_A5_Pos) /*!< Bit mask of A5 field. */

/* Register: TEMP_B1 */
/* Description: y-intercept of 1st piece wise linear function */

/* Bits 13..0 : y-intercept of 1st piece wise linear function */
#define TEMP_B1_B0_Pos (0UL) /*!< Position of B0 field. */
#define TEMP_B1_B0_Msk (0x3FFFUL << TEMP_B1_B0_Pos) /*!< Bit mask of B0 field. */

/* Register: TEMP_B2 */
/* Description: y-intercept of 2nd piece wise linear function */

/* Bits 13..0 : y-intercept of 2nd piece wise linear function */
#define TEMP_B2_B1_Pos (0UL) /*!< Position of B1 field. */
#define TEMP_B2_B1_Msk (0x3FFFUL << TEMP_B2_B1_Pos) /*!< Bit mask of B1 field. */

/* Register: TEMP_B3 */
/* Description: y-intercept of 3rd piece wise linear function */

/* Bits 13..0 : y-intercept of 3rd piece wise linear function */
#define TEMP_B3_B2_Pos (0UL) /*!< Position of B2 field. */
#define TEMP_B3_B2_Msk (0x3FFFUL << TEMP_B3_B2_Pos) /*!< Bit mask of B2 field. */

/* Register: TEMP_B4 */
/* Description: y-intercept of 4th piece wise linear function */

/* Bits 13..0 : y-intercept of 4th piece wise linear function */
#define TEMP_B4_B3_Pos (0UL) /*!< Position of B3 field. */
#define TEMP_B4_B3_Msk (0x3FFFUL << TEMP_B4_B3_Pos) /*!< Bit mask of B3 field. */

/* Register: TEMP_B5 */
/* Description: y-intercept of 5th piece wise linear function */

/* Bits 13..0 : y-intercept of 5th piece wise linear function */
#define TEMP_B5_B4_Pos (0UL) /*!< Position of B4 field. */
#define TEMP_B5_B4_Msk (0x3FFFUL << TEMP_B5_B4_Pos) /*!< Bit mask of B4 field. */

/* Register: TEMP_B6 */
/* Description: y-intercept of 6th piece wise linear function */

/* Bits 13..0 : y-intercept of 6th piece wise linear function */
#define TEMP_B6_B5_Pos (0UL) /*!< Position of B5 field. */
#define TEMP_B6_B5_Msk (0x3FFFUL << TEMP_B6_B5_Pos) /*!< Bit mask of B5 field. */

/* Register: TEMP_T1 */
/* Description: End point of 1st piece wise linear function */

/* Bits 7..0 : End point of 1st piece wise linear function */
#define TEMP_T1_T0_Pos (0UL) /*!< Position of T0 field. */
#define TEMP_T1_T0_Msk (0xFFUL << TEMP_T1_T0_Pos) /*!< Bit mask of T0 field. */

/* Register: TEMP_T2 */
/* Description: End point of 2nd piece wise linear function */

/* Bits 7..0 : End point of 2nd piece wise linear function */
#define TEMP_T2_T1_Pos (0UL) /*!< Position of T1 field. */
#define TEMP_T2_T1_Msk (0xFFUL << TEMP_T2_T1_Pos) /*!< Bit mask of T1 field. */

/* Register: TEMP_T3 */
/* Description: End point of 3rd piece wise linear function */

/* Bits 7..0 : End point of 3rd piece wise linear function */
#define TEMP_T3_T2_Pos (0UL) /*!< Position of T2 field. */
#define TEMP_T3_T2_Msk (0xFFUL << TEMP_T3_T2_Pos) /*!< Bit mask of T2 field. */

/* Register: TEMP_T4 */
/* Description: End point of 4th piece wise linear function */

/* Bits 7..0 : End point of 4th piece wise linear function */
#define TEMP_T4_T3_Pos (0UL) /*!< Position of T3 field. */
#define TEMP_T4_T3_Msk (0xFFUL << TEMP_T4_T3_Pos) /*!< Bit mask of T3 field. */

/* Register: TEMP_T5 */
/* Description: End point of 5th piece wise linear function */

/* Bits 7..0 : End point of 5th piece wise linear function */
#define TEMP_T5_T4_Pos (0UL) /*!< Position of T4 field. */
#define TEMP_T5_T4_Msk (0xFFUL << TEMP_T5_T4_Pos) /*!< Bit mask of T4 field. */


/* Peripheral: TIMEMARKMUX */
/* Description: Timemark multiplexer for LTE System Timer */

/* Register: TIMEMARKMUX_ENABLE */
/* Description: Enable Timemark Mux */

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

/* Register: MODEMTIMER_TASKS_STANDBY */
/* Description: Timer from shutdown to stopped state */

/* Bit 0 : Timer from shutdown to stopped state */
#define MODEMTIMER_TASKS_STANDBY_TASKS_STANDBY_Pos (0UL) /*!< Position of TASKS_STANDBY field. */
#define MODEMTIMER_TASKS_STANDBY_TASKS_STANDBY_Msk (0x1UL << MODEMTIMER_TASKS_STANDBY_TASKS_STANDBY_Pos) /*!< Bit mask of TASKS_STANDBY field. */
#define MODEMTIMER_TASKS_STANDBY_TASKS_STANDBY_Trigger (1UL) /*!< Trigger task */

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

/* Register: MODEMTIMER_INTEN0 */
/* Description: Enable or disable interrupt */

/* Bit 7 : Enable or disable interrupt for event COMPARE[7] */
#define MODEMTIMER_INTEN0_COMPARE7_Pos (7UL) /*!< Position of COMPARE7 field. */
#define MODEMTIMER_INTEN0_COMPARE7_Msk (0x1UL << MODEMTIMER_INTEN0_COMPARE7_Pos) /*!< Bit mask of COMPARE7 field. */
#define MODEMTIMER_INTEN0_COMPARE7_Disabled (0UL) /*!< Disable */
#define MODEMTIMER_INTEN0_COMPARE7_Enabled (1UL) /*!< Enable */

/* Bit 6 : Enable or disable interrupt for event COMPARE[6] */
#define MODEMTIMER_INTEN0_COMPARE6_Pos (6UL) /*!< Position of COMPARE6 field. */
#define MODEMTIMER_INTEN0_COMPARE6_Msk (0x1UL << MODEMTIMER_INTEN0_COMPARE6_Pos) /*!< Bit mask of COMPARE6 field. */
#define MODEMTIMER_INTEN0_COMPARE6_Disabled (0UL) /*!< Disable */
#define MODEMTIMER_INTEN0_COMPARE6_Enabled (1UL) /*!< Enable */

/* Bit 5 : Enable or disable interrupt for event COMPARE[5] */
#define MODEMTIMER_INTEN0_COMPARE5_Pos (5UL) /*!< Position of COMPARE5 field. */
#define MODEMTIMER_INTEN0_COMPARE5_Msk (0x1UL << MODEMTIMER_INTEN0_COMPARE5_Pos) /*!< Bit mask of COMPARE5 field. */
#define MODEMTIMER_INTEN0_COMPARE5_Disabled (0UL) /*!< Disable */
#define MODEMTIMER_INTEN0_COMPARE5_Enabled (1UL) /*!< Enable */

/* Bit 4 : Enable or disable interrupt for event COMPARE[4] */
#define MODEMTIMER_INTEN0_COMPARE4_Pos (4UL) /*!< Position of COMPARE4 field. */
#define MODEMTIMER_INTEN0_COMPARE4_Msk (0x1UL << MODEMTIMER_INTEN0_COMPARE4_Pos) /*!< Bit mask of COMPARE4 field. */
#define MODEMTIMER_INTEN0_COMPARE4_Disabled (0UL) /*!< Disable */
#define MODEMTIMER_INTEN0_COMPARE4_Enabled (1UL) /*!< Enable */

/* Bit 3 : Enable or disable interrupt for event COMPARE[3] */
#define MODEMTIMER_INTEN0_COMPARE3_Pos (3UL) /*!< Position of COMPARE3 field. */
#define MODEMTIMER_INTEN0_COMPARE3_Msk (0x1UL << MODEMTIMER_INTEN0_COMPARE3_Pos) /*!< Bit mask of COMPARE3 field. */
#define MODEMTIMER_INTEN0_COMPARE3_Disabled (0UL) /*!< Disable */
#define MODEMTIMER_INTEN0_COMPARE3_Enabled (1UL) /*!< Enable */

/* Bit 2 : Enable or disable interrupt for event COMPARE[2] */
#define MODEMTIMER_INTEN0_COMPARE2_Pos (2UL) /*!< Position of COMPARE2 field. */
#define MODEMTIMER_INTEN0_COMPARE2_Msk (0x1UL << MODEMTIMER_INTEN0_COMPARE2_Pos) /*!< Bit mask of COMPARE2 field. */
#define MODEMTIMER_INTEN0_COMPARE2_Disabled (0UL) /*!< Disable */
#define MODEMTIMER_INTEN0_COMPARE2_Enabled (1UL) /*!< Enable */

/* Bit 1 : Enable or disable interrupt for event COMPARE[1] */
#define MODEMTIMER_INTEN0_COMPARE1_Pos (1UL) /*!< Position of COMPARE1 field. */
#define MODEMTIMER_INTEN0_COMPARE1_Msk (0x1UL << MODEMTIMER_INTEN0_COMPARE1_Pos) /*!< Bit mask of COMPARE1 field. */
#define MODEMTIMER_INTEN0_COMPARE1_Disabled (0UL) /*!< Disable */
#define MODEMTIMER_INTEN0_COMPARE1_Enabled (1UL) /*!< Enable */

/* Bit 0 : Enable or disable interrupt for event COMPARE[0] */
#define MODEMTIMER_INTEN0_COMPARE0_Pos (0UL) /*!< Position of COMPARE0 field. */
#define MODEMTIMER_INTEN0_COMPARE0_Msk (0x1UL << MODEMTIMER_INTEN0_COMPARE0_Pos) /*!< Bit mask of COMPARE0 field. */
#define MODEMTIMER_INTEN0_COMPARE0_Disabled (0UL) /*!< Disable */
#define MODEMTIMER_INTEN0_COMPARE0_Enabled (1UL) /*!< Enable */

/* Register: MODEMTIMER_INTENSET0 */
/* Description: Enable interrupt */

/* Bit 7 : Write '1' to enable interrupt for event COMPARE[7] */
#define MODEMTIMER_INTENSET0_COMPARE7_Pos (7UL) /*!< Position of COMPARE7 field. */
#define MODEMTIMER_INTENSET0_COMPARE7_Msk (0x1UL << MODEMTIMER_INTENSET0_COMPARE7_Pos) /*!< Bit mask of COMPARE7 field. */
#define MODEMTIMER_INTENSET0_COMPARE7_Disabled (0UL) /*!< Read: Disabled */
#define MODEMTIMER_INTENSET0_COMPARE7_Enabled (1UL) /*!< Read: Enabled */
#define MODEMTIMER_INTENSET0_COMPARE7_Set (1UL) /*!< Enable */

/* Bit 6 : Write '1' to enable interrupt for event COMPARE[6] */
#define MODEMTIMER_INTENSET0_COMPARE6_Pos (6UL) /*!< Position of COMPARE6 field. */
#define MODEMTIMER_INTENSET0_COMPARE6_Msk (0x1UL << MODEMTIMER_INTENSET0_COMPARE6_Pos) /*!< Bit mask of COMPARE6 field. */
#define MODEMTIMER_INTENSET0_COMPARE6_Disabled (0UL) /*!< Read: Disabled */
#define MODEMTIMER_INTENSET0_COMPARE6_Enabled (1UL) /*!< Read: Enabled */
#define MODEMTIMER_INTENSET0_COMPARE6_Set (1UL) /*!< Enable */

/* Bit 5 : Write '1' to enable interrupt for event COMPARE[5] */
#define MODEMTIMER_INTENSET0_COMPARE5_Pos (5UL) /*!< Position of COMPARE5 field. */
#define MODEMTIMER_INTENSET0_COMPARE5_Msk (0x1UL << MODEMTIMER_INTENSET0_COMPARE5_Pos) /*!< Bit mask of COMPARE5 field. */
#define MODEMTIMER_INTENSET0_COMPARE5_Disabled (0UL) /*!< Read: Disabled */
#define MODEMTIMER_INTENSET0_COMPARE5_Enabled (1UL) /*!< Read: Enabled */
#define MODEMTIMER_INTENSET0_COMPARE5_Set (1UL) /*!< Enable */

/* Bit 4 : Write '1' to enable interrupt for event COMPARE[4] */
#define MODEMTIMER_INTENSET0_COMPARE4_Pos (4UL) /*!< Position of COMPARE4 field. */
#define MODEMTIMER_INTENSET0_COMPARE4_Msk (0x1UL << MODEMTIMER_INTENSET0_COMPARE4_Pos) /*!< Bit mask of COMPARE4 field. */
#define MODEMTIMER_INTENSET0_COMPARE4_Disabled (0UL) /*!< Read: Disabled */
#define MODEMTIMER_INTENSET0_COMPARE4_Enabled (1UL) /*!< Read: Enabled */
#define MODEMTIMER_INTENSET0_COMPARE4_Set (1UL) /*!< Enable */

/* Bit 3 : Write '1' to enable interrupt for event COMPARE[3] */
#define MODEMTIMER_INTENSET0_COMPARE3_Pos (3UL) /*!< Position of COMPARE3 field. */
#define MODEMTIMER_INTENSET0_COMPARE3_Msk (0x1UL << MODEMTIMER_INTENSET0_COMPARE3_Pos) /*!< Bit mask of COMPARE3 field. */
#define MODEMTIMER_INTENSET0_COMPARE3_Disabled (0UL) /*!< Read: Disabled */
#define MODEMTIMER_INTENSET0_COMPARE3_Enabled (1UL) /*!< Read: Enabled */
#define MODEMTIMER_INTENSET0_COMPARE3_Set (1UL) /*!< Enable */

/* Bit 2 : Write '1' to enable interrupt for event COMPARE[2] */
#define MODEMTIMER_INTENSET0_COMPARE2_Pos (2UL) /*!< Position of COMPARE2 field. */
#define MODEMTIMER_INTENSET0_COMPARE2_Msk (0x1UL << MODEMTIMER_INTENSET0_COMPARE2_Pos) /*!< Bit mask of COMPARE2 field. */
#define MODEMTIMER_INTENSET0_COMPARE2_Disabled (0UL) /*!< Read: Disabled */
#define MODEMTIMER_INTENSET0_COMPARE2_Enabled (1UL) /*!< Read: Enabled */
#define MODEMTIMER_INTENSET0_COMPARE2_Set (1UL) /*!< Enable */

/* Bit 1 : Write '1' to enable interrupt for event COMPARE[1] */
#define MODEMTIMER_INTENSET0_COMPARE1_Pos (1UL) /*!< Position of COMPARE1 field. */
#define MODEMTIMER_INTENSET0_COMPARE1_Msk (0x1UL << MODEMTIMER_INTENSET0_COMPARE1_Pos) /*!< Bit mask of COMPARE1 field. */
#define MODEMTIMER_INTENSET0_COMPARE1_Disabled (0UL) /*!< Read: Disabled */
#define MODEMTIMER_INTENSET0_COMPARE1_Enabled (1UL) /*!< Read: Enabled */
#define MODEMTIMER_INTENSET0_COMPARE1_Set (1UL) /*!< Enable */

/* Bit 0 : Write '1' to enable interrupt for event COMPARE[0] */
#define MODEMTIMER_INTENSET0_COMPARE0_Pos (0UL) /*!< Position of COMPARE0 field. */
#define MODEMTIMER_INTENSET0_COMPARE0_Msk (0x1UL << MODEMTIMER_INTENSET0_COMPARE0_Pos) /*!< Bit mask of COMPARE0 field. */
#define MODEMTIMER_INTENSET0_COMPARE0_Disabled (0UL) /*!< Read: Disabled */
#define MODEMTIMER_INTENSET0_COMPARE0_Enabled (1UL) /*!< Read: Enabled */
#define MODEMTIMER_INTENSET0_COMPARE0_Set (1UL) /*!< Enable */

/* Register: MODEMTIMER_INTENCLR0 */
/* Description: Disable interrupt */

/* Bit 7 : Write '1' to disable interrupt for event COMPARE[7] */
#define MODEMTIMER_INTENCLR0_COMPARE7_Pos (7UL) /*!< Position of COMPARE7 field. */
#define MODEMTIMER_INTENCLR0_COMPARE7_Msk (0x1UL << MODEMTIMER_INTENCLR0_COMPARE7_Pos) /*!< Bit mask of COMPARE7 field. */
#define MODEMTIMER_INTENCLR0_COMPARE7_Disabled (0UL) /*!< Read: Disabled */
#define MODEMTIMER_INTENCLR0_COMPARE7_Enabled (1UL) /*!< Read: Enabled */
#define MODEMTIMER_INTENCLR0_COMPARE7_Clear (1UL) /*!< Disable */

/* Bit 6 : Write '1' to disable interrupt for event COMPARE[6] */
#define MODEMTIMER_INTENCLR0_COMPARE6_Pos (6UL) /*!< Position of COMPARE6 field. */
#define MODEMTIMER_INTENCLR0_COMPARE6_Msk (0x1UL << MODEMTIMER_INTENCLR0_COMPARE6_Pos) /*!< Bit mask of COMPARE6 field. */
#define MODEMTIMER_INTENCLR0_COMPARE6_Disabled (0UL) /*!< Read: Disabled */
#define MODEMTIMER_INTENCLR0_COMPARE6_Enabled (1UL) /*!< Read: Enabled */
#define MODEMTIMER_INTENCLR0_COMPARE6_Clear (1UL) /*!< Disable */

/* Bit 5 : Write '1' to disable interrupt for event COMPARE[5] */
#define MODEMTIMER_INTENCLR0_COMPARE5_Pos (5UL) /*!< Position of COMPARE5 field. */
#define MODEMTIMER_INTENCLR0_COMPARE5_Msk (0x1UL << MODEMTIMER_INTENCLR0_COMPARE5_Pos) /*!< Bit mask of COMPARE5 field. */
#define MODEMTIMER_INTENCLR0_COMPARE5_Disabled (0UL) /*!< Read: Disabled */
#define MODEMTIMER_INTENCLR0_COMPARE5_Enabled (1UL) /*!< Read: Enabled */
#define MODEMTIMER_INTENCLR0_COMPARE5_Clear (1UL) /*!< Disable */

/* Bit 4 : Write '1' to disable interrupt for event COMPARE[4] */
#define MODEMTIMER_INTENCLR0_COMPARE4_Pos (4UL) /*!< Position of COMPARE4 field. */
#define MODEMTIMER_INTENCLR0_COMPARE4_Msk (0x1UL << MODEMTIMER_INTENCLR0_COMPARE4_Pos) /*!< Bit mask of COMPARE4 field. */
#define MODEMTIMER_INTENCLR0_COMPARE4_Disabled (0UL) /*!< Read: Disabled */
#define MODEMTIMER_INTENCLR0_COMPARE4_Enabled (1UL) /*!< Read: Enabled */
#define MODEMTIMER_INTENCLR0_COMPARE4_Clear (1UL) /*!< Disable */

/* Bit 3 : Write '1' to disable interrupt for event COMPARE[3] */
#define MODEMTIMER_INTENCLR0_COMPARE3_Pos (3UL) /*!< Position of COMPARE3 field. */
#define MODEMTIMER_INTENCLR0_COMPARE3_Msk (0x1UL << MODEMTIMER_INTENCLR0_COMPARE3_Pos) /*!< Bit mask of COMPARE3 field. */
#define MODEMTIMER_INTENCLR0_COMPARE3_Disabled (0UL) /*!< Read: Disabled */
#define MODEMTIMER_INTENCLR0_COMPARE3_Enabled (1UL) /*!< Read: Enabled */
#define MODEMTIMER_INTENCLR0_COMPARE3_Clear (1UL) /*!< Disable */

/* Bit 2 : Write '1' to disable interrupt for event COMPARE[2] */
#define MODEMTIMER_INTENCLR0_COMPARE2_Pos (2UL) /*!< Position of COMPARE2 field. */
#define MODEMTIMER_INTENCLR0_COMPARE2_Msk (0x1UL << MODEMTIMER_INTENCLR0_COMPARE2_Pos) /*!< Bit mask of COMPARE2 field. */
#define MODEMTIMER_INTENCLR0_COMPARE2_Disabled (0UL) /*!< Read: Disabled */
#define MODEMTIMER_INTENCLR0_COMPARE2_Enabled (1UL) /*!< Read: Enabled */
#define MODEMTIMER_INTENCLR0_COMPARE2_Clear (1UL) /*!< Disable */

/* Bit 1 : Write '1' to disable interrupt for event COMPARE[1] */
#define MODEMTIMER_INTENCLR0_COMPARE1_Pos (1UL) /*!< Position of COMPARE1 field. */
#define MODEMTIMER_INTENCLR0_COMPARE1_Msk (0x1UL << MODEMTIMER_INTENCLR0_COMPARE1_Pos) /*!< Bit mask of COMPARE1 field. */
#define MODEMTIMER_INTENCLR0_COMPARE1_Disabled (0UL) /*!< Read: Disabled */
#define MODEMTIMER_INTENCLR0_COMPARE1_Enabled (1UL) /*!< Read: Enabled */
#define MODEMTIMER_INTENCLR0_COMPARE1_Clear (1UL) /*!< Disable */

/* Bit 0 : Write '1' to disable interrupt for event COMPARE[0] */
#define MODEMTIMER_INTENCLR0_COMPARE0_Pos (0UL) /*!< Position of COMPARE0 field. */
#define MODEMTIMER_INTENCLR0_COMPARE0_Msk (0x1UL << MODEMTIMER_INTENCLR0_COMPARE0_Pos) /*!< Bit mask of COMPARE0 field. */
#define MODEMTIMER_INTENCLR0_COMPARE0_Disabled (0UL) /*!< Read: Disabled */
#define MODEMTIMER_INTENCLR0_COMPARE0_Enabled (1UL) /*!< Read: Enabled */
#define MODEMTIMER_INTENCLR0_COMPARE0_Clear (1UL) /*!< Disable */

/* Register: MODEMTIMER_INTPEND0 */
/* Description: Pending interrupts */

/* Bit 7 : Read pending status of interrupt for event COMPARE[7] */
#define MODEMTIMER_INTPEND0_COMPARE7_Pos (7UL) /*!< Position of COMPARE7 field. */
#define MODEMTIMER_INTPEND0_COMPARE7_Msk (0x1UL << MODEMTIMER_INTPEND0_COMPARE7_Pos) /*!< Bit mask of COMPARE7 field. */
#define MODEMTIMER_INTPEND0_COMPARE7_NotPending (0UL) /*!< Read: Not pending */
#define MODEMTIMER_INTPEND0_COMPARE7_Pending (1UL) /*!< Read: Pending */

/* Bit 6 : Read pending status of interrupt for event COMPARE[6] */
#define MODEMTIMER_INTPEND0_COMPARE6_Pos (6UL) /*!< Position of COMPARE6 field. */
#define MODEMTIMER_INTPEND0_COMPARE6_Msk (0x1UL << MODEMTIMER_INTPEND0_COMPARE6_Pos) /*!< Bit mask of COMPARE6 field. */
#define MODEMTIMER_INTPEND0_COMPARE6_NotPending (0UL) /*!< Read: Not pending */
#define MODEMTIMER_INTPEND0_COMPARE6_Pending (1UL) /*!< Read: Pending */

/* Bit 5 : Read pending status of interrupt for event COMPARE[5] */
#define MODEMTIMER_INTPEND0_COMPARE5_Pos (5UL) /*!< Position of COMPARE5 field. */
#define MODEMTIMER_INTPEND0_COMPARE5_Msk (0x1UL << MODEMTIMER_INTPEND0_COMPARE5_Pos) /*!< Bit mask of COMPARE5 field. */
#define MODEMTIMER_INTPEND0_COMPARE5_NotPending (0UL) /*!< Read: Not pending */
#define MODEMTIMER_INTPEND0_COMPARE5_Pending (1UL) /*!< Read: Pending */

/* Bit 4 : Read pending status of interrupt for event COMPARE[4] */
#define MODEMTIMER_INTPEND0_COMPARE4_Pos (4UL) /*!< Position of COMPARE4 field. */
#define MODEMTIMER_INTPEND0_COMPARE4_Msk (0x1UL << MODEMTIMER_INTPEND0_COMPARE4_Pos) /*!< Bit mask of COMPARE4 field. */
#define MODEMTIMER_INTPEND0_COMPARE4_NotPending (0UL) /*!< Read: Not pending */
#define MODEMTIMER_INTPEND0_COMPARE4_Pending (1UL) /*!< Read: Pending */

/* Bit 3 : Read pending status of interrupt for event COMPARE[3] */
#define MODEMTIMER_INTPEND0_COMPARE3_Pos (3UL) /*!< Position of COMPARE3 field. */
#define MODEMTIMER_INTPEND0_COMPARE3_Msk (0x1UL << MODEMTIMER_INTPEND0_COMPARE3_Pos) /*!< Bit mask of COMPARE3 field. */
#define MODEMTIMER_INTPEND0_COMPARE3_NotPending (0UL) /*!< Read: Not pending */
#define MODEMTIMER_INTPEND0_COMPARE3_Pending (1UL) /*!< Read: Pending */

/* Bit 2 : Read pending status of interrupt for event COMPARE[2] */
#define MODEMTIMER_INTPEND0_COMPARE2_Pos (2UL) /*!< Position of COMPARE2 field. */
#define MODEMTIMER_INTPEND0_COMPARE2_Msk (0x1UL << MODEMTIMER_INTPEND0_COMPARE2_Pos) /*!< Bit mask of COMPARE2 field. */
#define MODEMTIMER_INTPEND0_COMPARE2_NotPending (0UL) /*!< Read: Not pending */
#define MODEMTIMER_INTPEND0_COMPARE2_Pending (1UL) /*!< Read: Pending */

/* Bit 1 : Read pending status of interrupt for event COMPARE[1] */
#define MODEMTIMER_INTPEND0_COMPARE1_Pos (1UL) /*!< Position of COMPARE1 field. */
#define MODEMTIMER_INTPEND0_COMPARE1_Msk (0x1UL << MODEMTIMER_INTPEND0_COMPARE1_Pos) /*!< Bit mask of COMPARE1 field. */
#define MODEMTIMER_INTPEND0_COMPARE1_NotPending (0UL) /*!< Read: Not pending */
#define MODEMTIMER_INTPEND0_COMPARE1_Pending (1UL) /*!< Read: Pending */

/* Bit 0 : Read pending status of interrupt for event COMPARE[0] */
#define MODEMTIMER_INTPEND0_COMPARE0_Pos (0UL) /*!< Position of COMPARE0 field. */
#define MODEMTIMER_INTPEND0_COMPARE0_Msk (0x1UL << MODEMTIMER_INTPEND0_COMPARE0_Pos) /*!< Bit mask of COMPARE0 field. */
#define MODEMTIMER_INTPEND0_COMPARE0_NotPending (0UL) /*!< Read: Not pending */
#define MODEMTIMER_INTPEND0_COMPARE0_Pending (1UL) /*!< Read: Pending */

/* Register: MODEMTIMER_INTEN1 */
/* Description: Enable or disable interrupt */

/* Bit 7 : Enable or disable interrupt for event COMPARE[7] */
#define MODEMTIMER_INTEN1_COMPARE7_Pos (7UL) /*!< Position of COMPARE7 field. */
#define MODEMTIMER_INTEN1_COMPARE7_Msk (0x1UL << MODEMTIMER_INTEN1_COMPARE7_Pos) /*!< Bit mask of COMPARE7 field. */
#define MODEMTIMER_INTEN1_COMPARE7_Disabled (0UL) /*!< Disable */
#define MODEMTIMER_INTEN1_COMPARE7_Enabled (1UL) /*!< Enable */

/* Bit 6 : Enable or disable interrupt for event COMPARE[6] */
#define MODEMTIMER_INTEN1_COMPARE6_Pos (6UL) /*!< Position of COMPARE6 field. */
#define MODEMTIMER_INTEN1_COMPARE6_Msk (0x1UL << MODEMTIMER_INTEN1_COMPARE6_Pos) /*!< Bit mask of COMPARE6 field. */
#define MODEMTIMER_INTEN1_COMPARE6_Disabled (0UL) /*!< Disable */
#define MODEMTIMER_INTEN1_COMPARE6_Enabled (1UL) /*!< Enable */

/* Bit 5 : Enable or disable interrupt for event COMPARE[5] */
#define MODEMTIMER_INTEN1_COMPARE5_Pos (5UL) /*!< Position of COMPARE5 field. */
#define MODEMTIMER_INTEN1_COMPARE5_Msk (0x1UL << MODEMTIMER_INTEN1_COMPARE5_Pos) /*!< Bit mask of COMPARE5 field. */
#define MODEMTIMER_INTEN1_COMPARE5_Disabled (0UL) /*!< Disable */
#define MODEMTIMER_INTEN1_COMPARE5_Enabled (1UL) /*!< Enable */

/* Bit 4 : Enable or disable interrupt for event COMPARE[4] */
#define MODEMTIMER_INTEN1_COMPARE4_Pos (4UL) /*!< Position of COMPARE4 field. */
#define MODEMTIMER_INTEN1_COMPARE4_Msk (0x1UL << MODEMTIMER_INTEN1_COMPARE4_Pos) /*!< Bit mask of COMPARE4 field. */
#define MODEMTIMER_INTEN1_COMPARE4_Disabled (0UL) /*!< Disable */
#define MODEMTIMER_INTEN1_COMPARE4_Enabled (1UL) /*!< Enable */

/* Bit 3 : Enable or disable interrupt for event COMPARE[3] */
#define MODEMTIMER_INTEN1_COMPARE3_Pos (3UL) /*!< Position of COMPARE3 field. */
#define MODEMTIMER_INTEN1_COMPARE3_Msk (0x1UL << MODEMTIMER_INTEN1_COMPARE3_Pos) /*!< Bit mask of COMPARE3 field. */
#define MODEMTIMER_INTEN1_COMPARE3_Disabled (0UL) /*!< Disable */
#define MODEMTIMER_INTEN1_COMPARE3_Enabled (1UL) /*!< Enable */

/* Bit 2 : Enable or disable interrupt for event COMPARE[2] */
#define MODEMTIMER_INTEN1_COMPARE2_Pos (2UL) /*!< Position of COMPARE2 field. */
#define MODEMTIMER_INTEN1_COMPARE2_Msk (0x1UL << MODEMTIMER_INTEN1_COMPARE2_Pos) /*!< Bit mask of COMPARE2 field. */
#define MODEMTIMER_INTEN1_COMPARE2_Disabled (0UL) /*!< Disable */
#define MODEMTIMER_INTEN1_COMPARE2_Enabled (1UL) /*!< Enable */

/* Bit 1 : Enable or disable interrupt for event COMPARE[1] */
#define MODEMTIMER_INTEN1_COMPARE1_Pos (1UL) /*!< Position of COMPARE1 field. */
#define MODEMTIMER_INTEN1_COMPARE1_Msk (0x1UL << MODEMTIMER_INTEN1_COMPARE1_Pos) /*!< Bit mask of COMPARE1 field. */
#define MODEMTIMER_INTEN1_COMPARE1_Disabled (0UL) /*!< Disable */
#define MODEMTIMER_INTEN1_COMPARE1_Enabled (1UL) /*!< Enable */

/* Bit 0 : Enable or disable interrupt for event COMPARE[0] */
#define MODEMTIMER_INTEN1_COMPARE0_Pos (0UL) /*!< Position of COMPARE0 field. */
#define MODEMTIMER_INTEN1_COMPARE0_Msk (0x1UL << MODEMTIMER_INTEN1_COMPARE0_Pos) /*!< Bit mask of COMPARE0 field. */
#define MODEMTIMER_INTEN1_COMPARE0_Disabled (0UL) /*!< Disable */
#define MODEMTIMER_INTEN1_COMPARE0_Enabled (1UL) /*!< Enable */

/* Register: MODEMTIMER_INTENSET1 */
/* Description: Enable interrupt */

/* Bit 7 : Write '1' to enable interrupt for event COMPARE[7] */
#define MODEMTIMER_INTENSET1_COMPARE7_Pos (7UL) /*!< Position of COMPARE7 field. */
#define MODEMTIMER_INTENSET1_COMPARE7_Msk (0x1UL << MODEMTIMER_INTENSET1_COMPARE7_Pos) /*!< Bit mask of COMPARE7 field. */
#define MODEMTIMER_INTENSET1_COMPARE7_Disabled (0UL) /*!< Read: Disabled */
#define MODEMTIMER_INTENSET1_COMPARE7_Enabled (1UL) /*!< Read: Enabled */
#define MODEMTIMER_INTENSET1_COMPARE7_Set (1UL) /*!< Enable */

/* Bit 6 : Write '1' to enable interrupt for event COMPARE[6] */
#define MODEMTIMER_INTENSET1_COMPARE6_Pos (6UL) /*!< Position of COMPARE6 field. */
#define MODEMTIMER_INTENSET1_COMPARE6_Msk (0x1UL << MODEMTIMER_INTENSET1_COMPARE6_Pos) /*!< Bit mask of COMPARE6 field. */
#define MODEMTIMER_INTENSET1_COMPARE6_Disabled (0UL) /*!< Read: Disabled */
#define MODEMTIMER_INTENSET1_COMPARE6_Enabled (1UL) /*!< Read: Enabled */
#define MODEMTIMER_INTENSET1_COMPARE6_Set (1UL) /*!< Enable */

/* Bit 5 : Write '1' to enable interrupt for event COMPARE[5] */
#define MODEMTIMER_INTENSET1_COMPARE5_Pos (5UL) /*!< Position of COMPARE5 field. */
#define MODEMTIMER_INTENSET1_COMPARE5_Msk (0x1UL << MODEMTIMER_INTENSET1_COMPARE5_Pos) /*!< Bit mask of COMPARE5 field. */
#define MODEMTIMER_INTENSET1_COMPARE5_Disabled (0UL) /*!< Read: Disabled */
#define MODEMTIMER_INTENSET1_COMPARE5_Enabled (1UL) /*!< Read: Enabled */
#define MODEMTIMER_INTENSET1_COMPARE5_Set (1UL) /*!< Enable */

/* Bit 4 : Write '1' to enable interrupt for event COMPARE[4] */
#define MODEMTIMER_INTENSET1_COMPARE4_Pos (4UL) /*!< Position of COMPARE4 field. */
#define MODEMTIMER_INTENSET1_COMPARE4_Msk (0x1UL << MODEMTIMER_INTENSET1_COMPARE4_Pos) /*!< Bit mask of COMPARE4 field. */
#define MODEMTIMER_INTENSET1_COMPARE4_Disabled (0UL) /*!< Read: Disabled */
#define MODEMTIMER_INTENSET1_COMPARE4_Enabled (1UL) /*!< Read: Enabled */
#define MODEMTIMER_INTENSET1_COMPARE4_Set (1UL) /*!< Enable */

/* Bit 3 : Write '1' to enable interrupt for event COMPARE[3] */
#define MODEMTIMER_INTENSET1_COMPARE3_Pos (3UL) /*!< Position of COMPARE3 field. */
#define MODEMTIMER_INTENSET1_COMPARE3_Msk (0x1UL << MODEMTIMER_INTENSET1_COMPARE3_Pos) /*!< Bit mask of COMPARE3 field. */
#define MODEMTIMER_INTENSET1_COMPARE3_Disabled (0UL) /*!< Read: Disabled */
#define MODEMTIMER_INTENSET1_COMPARE3_Enabled (1UL) /*!< Read: Enabled */
#define MODEMTIMER_INTENSET1_COMPARE3_Set (1UL) /*!< Enable */

/* Bit 2 : Write '1' to enable interrupt for event COMPARE[2] */
#define MODEMTIMER_INTENSET1_COMPARE2_Pos (2UL) /*!< Position of COMPARE2 field. */
#define MODEMTIMER_INTENSET1_COMPARE2_Msk (0x1UL << MODEMTIMER_INTENSET1_COMPARE2_Pos) /*!< Bit mask of COMPARE2 field. */
#define MODEMTIMER_INTENSET1_COMPARE2_Disabled (0UL) /*!< Read: Disabled */
#define MODEMTIMER_INTENSET1_COMPARE2_Enabled (1UL) /*!< Read: Enabled */
#define MODEMTIMER_INTENSET1_COMPARE2_Set (1UL) /*!< Enable */

/* Bit 1 : Write '1' to enable interrupt for event COMPARE[1] */
#define MODEMTIMER_INTENSET1_COMPARE1_Pos (1UL) /*!< Position of COMPARE1 field. */
#define MODEMTIMER_INTENSET1_COMPARE1_Msk (0x1UL << MODEMTIMER_INTENSET1_COMPARE1_Pos) /*!< Bit mask of COMPARE1 field. */
#define MODEMTIMER_INTENSET1_COMPARE1_Disabled (0UL) /*!< Read: Disabled */
#define MODEMTIMER_INTENSET1_COMPARE1_Enabled (1UL) /*!< Read: Enabled */
#define MODEMTIMER_INTENSET1_COMPARE1_Set (1UL) /*!< Enable */

/* Bit 0 : Write '1' to enable interrupt for event COMPARE[0] */
#define MODEMTIMER_INTENSET1_COMPARE0_Pos (0UL) /*!< Position of COMPARE0 field. */
#define MODEMTIMER_INTENSET1_COMPARE0_Msk (0x1UL << MODEMTIMER_INTENSET1_COMPARE0_Pos) /*!< Bit mask of COMPARE0 field. */
#define MODEMTIMER_INTENSET1_COMPARE0_Disabled (0UL) /*!< Read: Disabled */
#define MODEMTIMER_INTENSET1_COMPARE0_Enabled (1UL) /*!< Read: Enabled */
#define MODEMTIMER_INTENSET1_COMPARE0_Set (1UL) /*!< Enable */

/* Register: MODEMTIMER_INTENCLR1 */
/* Description: Disable interrupt */

/* Bit 7 : Write '1' to disable interrupt for event COMPARE[7] */
#define MODEMTIMER_INTENCLR1_COMPARE7_Pos (7UL) /*!< Position of COMPARE7 field. */
#define MODEMTIMER_INTENCLR1_COMPARE7_Msk (0x1UL << MODEMTIMER_INTENCLR1_COMPARE7_Pos) /*!< Bit mask of COMPARE7 field. */
#define MODEMTIMER_INTENCLR1_COMPARE7_Disabled (0UL) /*!< Read: Disabled */
#define MODEMTIMER_INTENCLR1_COMPARE7_Enabled (1UL) /*!< Read: Enabled */
#define MODEMTIMER_INTENCLR1_COMPARE7_Clear (1UL) /*!< Disable */

/* Bit 6 : Write '1' to disable interrupt for event COMPARE[6] */
#define MODEMTIMER_INTENCLR1_COMPARE6_Pos (6UL) /*!< Position of COMPARE6 field. */
#define MODEMTIMER_INTENCLR1_COMPARE6_Msk (0x1UL << MODEMTIMER_INTENCLR1_COMPARE6_Pos) /*!< Bit mask of COMPARE6 field. */
#define MODEMTIMER_INTENCLR1_COMPARE6_Disabled (0UL) /*!< Read: Disabled */
#define MODEMTIMER_INTENCLR1_COMPARE6_Enabled (1UL) /*!< Read: Enabled */
#define MODEMTIMER_INTENCLR1_COMPARE6_Clear (1UL) /*!< Disable */

/* Bit 5 : Write '1' to disable interrupt for event COMPARE[5] */
#define MODEMTIMER_INTENCLR1_COMPARE5_Pos (5UL) /*!< Position of COMPARE5 field. */
#define MODEMTIMER_INTENCLR1_COMPARE5_Msk (0x1UL << MODEMTIMER_INTENCLR1_COMPARE5_Pos) /*!< Bit mask of COMPARE5 field. */
#define MODEMTIMER_INTENCLR1_COMPARE5_Disabled (0UL) /*!< Read: Disabled */
#define MODEMTIMER_INTENCLR1_COMPARE5_Enabled (1UL) /*!< Read: Enabled */
#define MODEMTIMER_INTENCLR1_COMPARE5_Clear (1UL) /*!< Disable */

/* Bit 4 : Write '1' to disable interrupt for event COMPARE[4] */
#define MODEMTIMER_INTENCLR1_COMPARE4_Pos (4UL) /*!< Position of COMPARE4 field. */
#define MODEMTIMER_INTENCLR1_COMPARE4_Msk (0x1UL << MODEMTIMER_INTENCLR1_COMPARE4_Pos) /*!< Bit mask of COMPARE4 field. */
#define MODEMTIMER_INTENCLR1_COMPARE4_Disabled (0UL) /*!< Read: Disabled */
#define MODEMTIMER_INTENCLR1_COMPARE4_Enabled (1UL) /*!< Read: Enabled */
#define MODEMTIMER_INTENCLR1_COMPARE4_Clear (1UL) /*!< Disable */

/* Bit 3 : Write '1' to disable interrupt for event COMPARE[3] */
#define MODEMTIMER_INTENCLR1_COMPARE3_Pos (3UL) /*!< Position of COMPARE3 field. */
#define MODEMTIMER_INTENCLR1_COMPARE3_Msk (0x1UL << MODEMTIMER_INTENCLR1_COMPARE3_Pos) /*!< Bit mask of COMPARE3 field. */
#define MODEMTIMER_INTENCLR1_COMPARE3_Disabled (0UL) /*!< Read: Disabled */
#define MODEMTIMER_INTENCLR1_COMPARE3_Enabled (1UL) /*!< Read: Enabled */
#define MODEMTIMER_INTENCLR1_COMPARE3_Clear (1UL) /*!< Disable */

/* Bit 2 : Write '1' to disable interrupt for event COMPARE[2] */
#define MODEMTIMER_INTENCLR1_COMPARE2_Pos (2UL) /*!< Position of COMPARE2 field. */
#define MODEMTIMER_INTENCLR1_COMPARE2_Msk (0x1UL << MODEMTIMER_INTENCLR1_COMPARE2_Pos) /*!< Bit mask of COMPARE2 field. */
#define MODEMTIMER_INTENCLR1_COMPARE2_Disabled (0UL) /*!< Read: Disabled */
#define MODEMTIMER_INTENCLR1_COMPARE2_Enabled (1UL) /*!< Read: Enabled */
#define MODEMTIMER_INTENCLR1_COMPARE2_Clear (1UL) /*!< Disable */

/* Bit 1 : Write '1' to disable interrupt for event COMPARE[1] */
#define MODEMTIMER_INTENCLR1_COMPARE1_Pos (1UL) /*!< Position of COMPARE1 field. */
#define MODEMTIMER_INTENCLR1_COMPARE1_Msk (0x1UL << MODEMTIMER_INTENCLR1_COMPARE1_Pos) /*!< Bit mask of COMPARE1 field. */
#define MODEMTIMER_INTENCLR1_COMPARE1_Disabled (0UL) /*!< Read: Disabled */
#define MODEMTIMER_INTENCLR1_COMPARE1_Enabled (1UL) /*!< Read: Enabled */
#define MODEMTIMER_INTENCLR1_COMPARE1_Clear (1UL) /*!< Disable */

/* Bit 0 : Write '1' to disable interrupt for event COMPARE[0] */
#define MODEMTIMER_INTENCLR1_COMPARE0_Pos (0UL) /*!< Position of COMPARE0 field. */
#define MODEMTIMER_INTENCLR1_COMPARE0_Msk (0x1UL << MODEMTIMER_INTENCLR1_COMPARE0_Pos) /*!< Bit mask of COMPARE0 field. */
#define MODEMTIMER_INTENCLR1_COMPARE0_Disabled (0UL) /*!< Read: Disabled */
#define MODEMTIMER_INTENCLR1_COMPARE0_Enabled (1UL) /*!< Read: Enabled */
#define MODEMTIMER_INTENCLR1_COMPARE0_Clear (1UL) /*!< Disable */

/* Register: MODEMTIMER_INTPEND1 */
/* Description: Pending interrupts */

/* Bit 7 : Read pending status of interrupt for event COMPARE[7] */
#define MODEMTIMER_INTPEND1_COMPARE7_Pos (7UL) /*!< Position of COMPARE7 field. */
#define MODEMTIMER_INTPEND1_COMPARE7_Msk (0x1UL << MODEMTIMER_INTPEND1_COMPARE7_Pos) /*!< Bit mask of COMPARE7 field. */
#define MODEMTIMER_INTPEND1_COMPARE7_NotPending (0UL) /*!< Read: Not pending */
#define MODEMTIMER_INTPEND1_COMPARE7_Pending (1UL) /*!< Read: Pending */

/* Bit 6 : Read pending status of interrupt for event COMPARE[6] */
#define MODEMTIMER_INTPEND1_COMPARE6_Pos (6UL) /*!< Position of COMPARE6 field. */
#define MODEMTIMER_INTPEND1_COMPARE6_Msk (0x1UL << MODEMTIMER_INTPEND1_COMPARE6_Pos) /*!< Bit mask of COMPARE6 field. */
#define MODEMTIMER_INTPEND1_COMPARE6_NotPending (0UL) /*!< Read: Not pending */
#define MODEMTIMER_INTPEND1_COMPARE6_Pending (1UL) /*!< Read: Pending */

/* Bit 5 : Read pending status of interrupt for event COMPARE[5] */
#define MODEMTIMER_INTPEND1_COMPARE5_Pos (5UL) /*!< Position of COMPARE5 field. */
#define MODEMTIMER_INTPEND1_COMPARE5_Msk (0x1UL << MODEMTIMER_INTPEND1_COMPARE5_Pos) /*!< Bit mask of COMPARE5 field. */
#define MODEMTIMER_INTPEND1_COMPARE5_NotPending (0UL) /*!< Read: Not pending */
#define MODEMTIMER_INTPEND1_COMPARE5_Pending (1UL) /*!< Read: Pending */

/* Bit 4 : Read pending status of interrupt for event COMPARE[4] */
#define MODEMTIMER_INTPEND1_COMPARE4_Pos (4UL) /*!< Position of COMPARE4 field. */
#define MODEMTIMER_INTPEND1_COMPARE4_Msk (0x1UL << MODEMTIMER_INTPEND1_COMPARE4_Pos) /*!< Bit mask of COMPARE4 field. */
#define MODEMTIMER_INTPEND1_COMPARE4_NotPending (0UL) /*!< Read: Not pending */
#define MODEMTIMER_INTPEND1_COMPARE4_Pending (1UL) /*!< Read: Pending */

/* Bit 3 : Read pending status of interrupt for event COMPARE[3] */
#define MODEMTIMER_INTPEND1_COMPARE3_Pos (3UL) /*!< Position of COMPARE3 field. */
#define MODEMTIMER_INTPEND1_COMPARE3_Msk (0x1UL << MODEMTIMER_INTPEND1_COMPARE3_Pos) /*!< Bit mask of COMPARE3 field. */
#define MODEMTIMER_INTPEND1_COMPARE3_NotPending (0UL) /*!< Read: Not pending */
#define MODEMTIMER_INTPEND1_COMPARE3_Pending (1UL) /*!< Read: Pending */

/* Bit 2 : Read pending status of interrupt for event COMPARE[2] */
#define MODEMTIMER_INTPEND1_COMPARE2_Pos (2UL) /*!< Position of COMPARE2 field. */
#define MODEMTIMER_INTPEND1_COMPARE2_Msk (0x1UL << MODEMTIMER_INTPEND1_COMPARE2_Pos) /*!< Bit mask of COMPARE2 field. */
#define MODEMTIMER_INTPEND1_COMPARE2_NotPending (0UL) /*!< Read: Not pending */
#define MODEMTIMER_INTPEND1_COMPARE2_Pending (1UL) /*!< Read: Pending */

/* Bit 1 : Read pending status of interrupt for event COMPARE[1] */
#define MODEMTIMER_INTPEND1_COMPARE1_Pos (1UL) /*!< Position of COMPARE1 field. */
#define MODEMTIMER_INTPEND1_COMPARE1_Msk (0x1UL << MODEMTIMER_INTPEND1_COMPARE1_Pos) /*!< Bit mask of COMPARE1 field. */
#define MODEMTIMER_INTPEND1_COMPARE1_NotPending (0UL) /*!< Read: Not pending */
#define MODEMTIMER_INTPEND1_COMPARE1_Pending (1UL) /*!< Read: Pending */

/* Bit 0 : Read pending status of interrupt for event COMPARE[0] */
#define MODEMTIMER_INTPEND1_COMPARE0_Pos (0UL) /*!< Position of COMPARE0 field. */
#define MODEMTIMER_INTPEND1_COMPARE0_Msk (0x1UL << MODEMTIMER_INTPEND1_COMPARE0_Pos) /*!< Bit mask of COMPARE0 field. */
#define MODEMTIMER_INTPEND1_COMPARE0_NotPending (0UL) /*!< Read: Not pending */
#define MODEMTIMER_INTPEND1_COMPARE0_Pending (1UL) /*!< Read: Pending */

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


/* Peripheral: TIMEREVENTSYNC */
/* Description: Timer event synchronizer */

/* Register: TIMEREVENTSYNC_CLOCKENABLE */
/* Description: Enable synchronizer clock. */

/* Bit 0 : Enable. */
#define TIMEREVENTSYNC_CLOCKENABLE_CLOCKENABLE_Pos (0UL) /*!< Position of CLOCKENABLE field. */
#define TIMEREVENTSYNC_CLOCKENABLE_CLOCKENABLE_Msk (0x1UL << TIMEREVENTSYNC_CLOCKENABLE_CLOCKENABLE_Pos) /*!< Bit mask of CLOCKENABLE field. */
#define TIMEREVENTSYNC_CLOCKENABLE_CLOCKENABLE_Disable (0UL) /*!< Disable clock. */
#define TIMEREVENTSYNC_CLOCKENABLE_CLOCKENABLE_Enable (1UL) /*!< Enable clock. */


/* Peripheral: AES */
/* Description: AES cipher with ECB, CBC, CBC-MAC and CTR */

/* Register: AES_TASKS_START_GATHER */
/* Description: Start input DMA */

/* Bit 0 : Start input DMA */
#define AES_TASKS_START_GATHER_TASKS_START_GATHER_Pos (0UL) /*!< Position of TASKS_START_GATHER field. */
#define AES_TASKS_START_GATHER_TASKS_START_GATHER_Msk (0x1UL << AES_TASKS_START_GATHER_TASKS_START_GATHER_Pos) /*!< Bit mask of TASKS_START_GATHER field. */
#define AES_TASKS_START_GATHER_TASKS_START_GATHER_Trigger (1UL) /*!< Trigger task */

/* Register: AES_TASKS_STOP_GATHER */
/* Description: Stop  input DMA */

/* Bit 0 : Stop  input DMA */
#define AES_TASKS_STOP_GATHER_TASKS_STOP_GATHER_Pos (0UL) /*!< Position of TASKS_STOP_GATHER field. */
#define AES_TASKS_STOP_GATHER_TASKS_STOP_GATHER_Msk (0x1UL << AES_TASKS_STOP_GATHER_TASKS_STOP_GATHER_Pos) /*!< Bit mask of TASKS_STOP_GATHER field. */
#define AES_TASKS_STOP_GATHER_TASKS_STOP_GATHER_Trigger (1UL) /*!< Trigger task */

/* Register: AES_TASKS_START_SCATTER */
/* Description: Start output DMA */

/* Bit 0 : Start output DMA */
#define AES_TASKS_START_SCATTER_TASKS_START_SCATTER_Pos (0UL) /*!< Position of TASKS_START_SCATTER field. */
#define AES_TASKS_START_SCATTER_TASKS_START_SCATTER_Msk (0x1UL << AES_TASKS_START_SCATTER_TASKS_START_SCATTER_Pos) /*!< Bit mask of TASKS_START_SCATTER field. */
#define AES_TASKS_START_SCATTER_TASKS_START_SCATTER_Trigger (1UL) /*!< Trigger task */

/* Register: AES_TASKS_STOP_SCATTER */
/* Description: Stop output DMA */

/* Bit 0 : Stop output DMA */
#define AES_TASKS_STOP_SCATTER_TASKS_STOP_SCATTER_Pos (0UL) /*!< Position of TASKS_STOP_SCATTER field. */
#define AES_TASKS_STOP_SCATTER_TASKS_STOP_SCATTER_Msk (0x1UL << AES_TASKS_STOP_SCATTER_TASKS_STOP_SCATTER_Pos) /*!< Bit mask of TASKS_STOP_SCATTER field. */
#define AES_TASKS_STOP_SCATTER_TASKS_STOP_SCATTER_Trigger (1UL) /*!< Trigger task */

/* Register: AES_TASKS_INITIALIZE_AES */
/* Description: New keys (and IV) ready to be used, reset keybytes, ivbytes */

/* Bit 0 : New keys (and IV) ready to be used, reset keybytes, ivbytes */
#define AES_TASKS_INITIALIZE_AES_TASKS_INITIALIZE_AES_Pos (0UL) /*!< Position of TASKS_INITIALIZE_AES field. */
#define AES_TASKS_INITIALIZE_AES_TASKS_INITIALIZE_AES_Msk (0x1UL << AES_TASKS_INITIALIZE_AES_TASKS_INITIALIZE_AES_Pos) /*!< Bit mask of TASKS_INITIALIZE_AES field. */
#define AES_TASKS_INITIALIZE_AES_TASKS_INITIALIZE_AES_Trigger (1UL) /*!< Trigger task */

/* Register: AES_TASKS_FILL_AES_INPUT */
/* Description: Transfer 8 bytes of input from DMA to AES core */

/* Bit 0 : Transfer 8 bytes of input from DMA to AES core */
#define AES_TASKS_FILL_AES_INPUT_TASKS_FILL_AES_INPUT_Pos (0UL) /*!< Position of TASKS_FILL_AES_INPUT field. */
#define AES_TASKS_FILL_AES_INPUT_TASKS_FILL_AES_INPUT_Msk (0x1UL << AES_TASKS_FILL_AES_INPUT_TASKS_FILL_AES_INPUT_Pos) /*!< Bit mask of TASKS_FILL_AES_INPUT field. */
#define AES_TASKS_FILL_AES_INPUT_TASKS_FILL_AES_INPUT_Trigger (1UL) /*!< Trigger task */

/* Register: AES_TASKS_AES_ENCRYPT */
/* Description: Encrypt */

/* Bit 0 : Encrypt */
#define AES_TASKS_AES_ENCRYPT_TASKS_AES_ENCRYPT_Pos (0UL) /*!< Position of TASKS_AES_ENCRYPT field. */
#define AES_TASKS_AES_ENCRYPT_TASKS_AES_ENCRYPT_Msk (0x1UL << AES_TASKS_AES_ENCRYPT_TASKS_AES_ENCRYPT_Pos) /*!< Bit mask of TASKS_AES_ENCRYPT field. */
#define AES_TASKS_AES_ENCRYPT_TASKS_AES_ENCRYPT_Trigger (1UL) /*!< Trigger task */

/* Register: AES_TASKS_AES_DECRYPT */
/* Description: Decrypt */

/* Bit 0 : Decrypt */
#define AES_TASKS_AES_DECRYPT_TASKS_AES_DECRYPT_Pos (0UL) /*!< Position of TASKS_AES_DECRYPT field. */
#define AES_TASKS_AES_DECRYPT_TASKS_AES_DECRYPT_Msk (0x1UL << AES_TASKS_AES_DECRYPT_TASKS_AES_DECRYPT_Pos) /*!< Bit mask of TASKS_AES_DECRYPT field. */
#define AES_TASKS_AES_DECRYPT_TASKS_AES_DECRYPT_Trigger (1UL) /*!< Trigger task */

/* Register: AES_TASKS_DRAIN_AES_OUTPUT */
/* Description: Transfer 8 bytes of output from AES core to DMA */

/* Bit 0 : Transfer 8 bytes of output from AES core to DMA */
#define AES_TASKS_DRAIN_AES_OUTPUT_TASKS_DRAIN_AES_OUTPUT_Pos (0UL) /*!< Position of TASKS_DRAIN_AES_OUTPUT field. */
#define AES_TASKS_DRAIN_AES_OUTPUT_TASKS_DRAIN_AES_OUTPUT_Msk (0x1UL << AES_TASKS_DRAIN_AES_OUTPUT_TASKS_DRAIN_AES_OUTPUT_Pos) /*!< Bit mask of TASKS_DRAIN_AES_OUTPUT field. */
#define AES_TASKS_DRAIN_AES_OUTPUT_TASKS_DRAIN_AES_OUTPUT_Trigger (1UL) /*!< Trigger task */

/* Register: AES_TASKS_RESET */
/* Description: Stop all transfers and crypto operations (software reset) */

/* Bit 0 : Stop all transfers and crypto operations (software reset) */
#define AES_TASKS_RESET_TASKS_RESET_Pos (0UL) /*!< Position of TASKS_RESET field. */
#define AES_TASKS_RESET_TASKS_RESET_Msk (0x1UL << AES_TASKS_RESET_TASKS_RESET_Pos) /*!< Bit mask of TASKS_RESET field. */
#define AES_TASKS_RESET_TASKS_RESET_Trigger (1UL) /*!< Trigger task */

/* Register: AES_EVENTS_GATHER_STARTED */
/* Description: Input DMA started */

/* Bit 0 : Input DMA started */
#define AES_EVENTS_GATHER_STARTED_EVENTS_GATHER_STARTED_Pos (0UL) /*!< Position of EVENTS_GATHER_STARTED field. */
#define AES_EVENTS_GATHER_STARTED_EVENTS_GATHER_STARTED_Msk (0x1UL << AES_EVENTS_GATHER_STARTED_EVENTS_GATHER_STARTED_Pos) /*!< Bit mask of EVENTS_GATHER_STARTED field. */
#define AES_EVENTS_GATHER_STARTED_EVENTS_GATHER_STARTED_NotGenerated (0UL) /*!< Event not generated */
#define AES_EVENTS_GATHER_STARTED_EVENTS_GATHER_STARTED_Generated (1UL) /*!< Event generated */

/* Register: AES_EVENTS_GATHER_DONE */
/* Description: Input DMA done */

/* Bit 0 : Input DMA done */
#define AES_EVENTS_GATHER_DONE_EVENTS_GATHER_DONE_Pos (0UL) /*!< Position of EVENTS_GATHER_DONE field. */
#define AES_EVENTS_GATHER_DONE_EVENTS_GATHER_DONE_Msk (0x1UL << AES_EVENTS_GATHER_DONE_EVENTS_GATHER_DONE_Pos) /*!< Bit mask of EVENTS_GATHER_DONE field. */
#define AES_EVENTS_GATHER_DONE_EVENTS_GATHER_DONE_NotGenerated (0UL) /*!< Event not generated */
#define AES_EVENTS_GATHER_DONE_EVENTS_GATHER_DONE_Generated (1UL) /*!< Event generated */

/* Register: AES_EVENTS_SCATTER_STARTED */
/* Description: Output DMA started */

/* Bit 0 : Output DMA started */
#define AES_EVENTS_SCATTER_STARTED_EVENTS_SCATTER_STARTED_Pos (0UL) /*!< Position of EVENTS_SCATTER_STARTED field. */
#define AES_EVENTS_SCATTER_STARTED_EVENTS_SCATTER_STARTED_Msk (0x1UL << AES_EVENTS_SCATTER_STARTED_EVENTS_SCATTER_STARTED_Pos) /*!< Bit mask of EVENTS_SCATTER_STARTED field. */
#define AES_EVENTS_SCATTER_STARTED_EVENTS_SCATTER_STARTED_NotGenerated (0UL) /*!< Event not generated */
#define AES_EVENTS_SCATTER_STARTED_EVENTS_SCATTER_STARTED_Generated (1UL) /*!< Event generated */

/* Register: AES_EVENTS_SCATTER_DONE */
/* Description: Output DMA done */

/* Bit 0 : Output DMA done */
#define AES_EVENTS_SCATTER_DONE_EVENTS_SCATTER_DONE_Pos (0UL) /*!< Position of EVENTS_SCATTER_DONE field. */
#define AES_EVENTS_SCATTER_DONE_EVENTS_SCATTER_DONE_Msk (0x1UL << AES_EVENTS_SCATTER_DONE_EVENTS_SCATTER_DONE_Pos) /*!< Bit mask of EVENTS_SCATTER_DONE field. */
#define AES_EVENTS_SCATTER_DONE_EVENTS_SCATTER_DONE_NotGenerated (0UL) /*!< Event not generated */
#define AES_EVENTS_SCATTER_DONE_EVENTS_SCATTER_DONE_Generated (1UL) /*!< Event generated */

/* Register: AES_EVENTS_KEY_READY */
/* Description: Key received (keybytes == 16) */

/* Bit 0 : Key received (keybytes == 16) */
#define AES_EVENTS_KEY_READY_EVENTS_KEY_READY_Pos (0UL) /*!< Position of EVENTS_KEY_READY field. */
#define AES_EVENTS_KEY_READY_EVENTS_KEY_READY_Msk (0x1UL << AES_EVENTS_KEY_READY_EVENTS_KEY_READY_Pos) /*!< Bit mask of EVENTS_KEY_READY field. */
#define AES_EVENTS_KEY_READY_EVENTS_KEY_READY_NotGenerated (0UL) /*!< Event not generated */
#define AES_EVENTS_KEY_READY_EVENTS_KEY_READY_Generated (1UL) /*!< Event generated */

/* Register: AES_EVENTS_IV_READY */
/* Description: IV received (ivbytes == 16) */

/* Bit 0 : IV received (ivbytes == 16) */
#define AES_EVENTS_IV_READY_EVENTS_IV_READY_Pos (0UL) /*!< Position of EVENTS_IV_READY field. */
#define AES_EVENTS_IV_READY_EVENTS_IV_READY_Msk (0x1UL << AES_EVENTS_IV_READY_EVENTS_IV_READY_Pos) /*!< Bit mask of EVENTS_IV_READY field. */
#define AES_EVENTS_IV_READY_EVENTS_IV_READY_NotGenerated (0UL) /*!< Event not generated */
#define AES_EVENTS_IV_READY_EVENTS_IV_READY_Generated (1UL) /*!< Event generated */

/* Register: AES_EVENTS_AES_INITIALIZED */
/* Description: New keys (and IV) taken into use */

/* Bit 0 : New keys (and IV) taken into use */
#define AES_EVENTS_AES_INITIALIZED_EVENTS_AES_INITIALIZED_Pos (0UL) /*!< Position of EVENTS_AES_INITIALIZED field. */
#define AES_EVENTS_AES_INITIALIZED_EVENTS_AES_INITIALIZED_Msk (0x1UL << AES_EVENTS_AES_INITIALIZED_EVENTS_AES_INITIALIZED_Pos) /*!< Bit mask of EVENTS_AES_INITIALIZED field. */
#define AES_EVENTS_AES_INITIALIZED_EVENTS_AES_INITIALIZED_NotGenerated (0UL) /*!< Event not generated */
#define AES_EVENTS_AES_INITIALIZED_EVENTS_AES_INITIALIZED_Generated (1UL) /*!< Event generated */

/* Register: AES_EVENTS_AES_INPUT_FULL */
/* Description: 8 bytes of input stored to AES core */

/* Bit 0 : 8 bytes of input stored to AES core */
#define AES_EVENTS_AES_INPUT_FULL_EVENTS_AES_INPUT_FULL_Pos (0UL) /*!< Position of EVENTS_AES_INPUT_FULL field. */
#define AES_EVENTS_AES_INPUT_FULL_EVENTS_AES_INPUT_FULL_Msk (0x1UL << AES_EVENTS_AES_INPUT_FULL_EVENTS_AES_INPUT_FULL_Pos) /*!< Bit mask of EVENTS_AES_INPUT_FULL field. */
#define AES_EVENTS_AES_INPUT_FULL_EVENTS_AES_INPUT_FULL_NotGenerated (0UL) /*!< Event not generated */
#define AES_EVENTS_AES_INPUT_FULL_EVENTS_AES_INPUT_FULL_Generated (1UL) /*!< Event generated */

/* Register: AES_EVENTS_AES_DONE */
/* Description: Encrypt/decrypt action ready */

/* Bit 0 : Encrypt/decrypt action ready */
#define AES_EVENTS_AES_DONE_EVENTS_AES_DONE_Pos (0UL) /*!< Position of EVENTS_AES_DONE field. */
#define AES_EVENTS_AES_DONE_EVENTS_AES_DONE_Msk (0x1UL << AES_EVENTS_AES_DONE_EVENTS_AES_DONE_Pos) /*!< Bit mask of EVENTS_AES_DONE field. */
#define AES_EVENTS_AES_DONE_EVENTS_AES_DONE_NotGenerated (0UL) /*!< Event not generated */
#define AES_EVENTS_AES_DONE_EVENTS_AES_DONE_Generated (1UL) /*!< Event generated */

/* Register: AES_EVENTS_AES_OUTPUT_EMPTY */
/* Description: 8 bytes of output read from AES core */

/* Bit 0 : 8 bytes of output read from AES core */
#define AES_EVENTS_AES_OUTPUT_EMPTY_EVENTS_AES_OUTPUT_EMPTY_Pos (0UL) /*!< Position of EVENTS_AES_OUTPUT_EMPTY field. */
#define AES_EVENTS_AES_OUTPUT_EMPTY_EVENTS_AES_OUTPUT_EMPTY_Msk (0x1UL << AES_EVENTS_AES_OUTPUT_EMPTY_EVENTS_AES_OUTPUT_EMPTY_Pos) /*!< Bit mask of EVENTS_AES_OUTPUT_EMPTY field. */
#define AES_EVENTS_AES_OUTPUT_EMPTY_EVENTS_AES_OUTPUT_EMPTY_NotGenerated (0UL) /*!< Event not generated */
#define AES_EVENTS_AES_OUTPUT_EMPTY_EVENTS_AES_OUTPUT_EMPTY_Generated (1UL) /*!< Event generated */

/* Register: AES_EVENTS_MAC_READY */
/* Description: CBC-MAC calculated */

/* Bit 0 : CBC-MAC calculated */
#define AES_EVENTS_MAC_READY_EVENTS_MAC_READY_Pos (0UL) /*!< Position of EVENTS_MAC_READY field. */
#define AES_EVENTS_MAC_READY_EVENTS_MAC_READY_Msk (0x1UL << AES_EVENTS_MAC_READY_EVENTS_MAC_READY_Pos) /*!< Bit mask of EVENTS_MAC_READY field. */
#define AES_EVENTS_MAC_READY_EVENTS_MAC_READY_NotGenerated (0UL) /*!< Event not generated */
#define AES_EVENTS_MAC_READY_EVENTS_MAC_READY_Generated (1UL) /*!< Event generated */

/* Register: AES_EVENTS_RESETTED */
/* Description: Resetted (all transfers and crypto operations stopped) */

/* Bit 0 : Resetted (all transfers and crypto operations stopped) */
#define AES_EVENTS_RESETTED_EVENTS_RESETTED_Pos (0UL) /*!< Position of EVENTS_RESETTED field. */
#define AES_EVENTS_RESETTED_EVENTS_RESETTED_Msk (0x1UL << AES_EVENTS_RESETTED_EVENTS_RESETTED_Pos) /*!< Bit mask of EVENTS_RESETTED field. */
#define AES_EVENTS_RESETTED_EVENTS_RESETTED_NotGenerated (0UL) /*!< Event not generated */
#define AES_EVENTS_RESETTED_EVENTS_RESETTED_Generated (1UL) /*!< Event generated */

/* Register: AES_SHORTS */
/* Description: Shortcuts between local events and tasks */

/* Bit 7 : Shortcut between event AES_INITIALIZED and task FILL_AES_INPUT */
#define AES_SHORTS_AES_INITIALIZED_FILL_AES_INPUT_Pos (7UL) /*!< Position of AES_INITIALIZED_FILL_AES_INPUT field. */
#define AES_SHORTS_AES_INITIALIZED_FILL_AES_INPUT_Msk (0x1UL << AES_SHORTS_AES_INITIALIZED_FILL_AES_INPUT_Pos) /*!< Bit mask of AES_INITIALIZED_FILL_AES_INPUT field. */
#define AES_SHORTS_AES_INITIALIZED_FILL_AES_INPUT_Disabled (0UL) /*!< Disable shortcut */
#define AES_SHORTS_AES_INITIALIZED_FILL_AES_INPUT_Enabled (1UL) /*!< Enable shortcut */

/* Bit 6 : Shortcut between event KEY_READY and task INITIALIZE_AES */
#define AES_SHORTS_KEY_READY_INITIALIZE_AES_Pos (6UL) /*!< Position of KEY_READY_INITIALIZE_AES field. */
#define AES_SHORTS_KEY_READY_INITIALIZE_AES_Msk (0x1UL << AES_SHORTS_KEY_READY_INITIALIZE_AES_Pos) /*!< Bit mask of KEY_READY_INITIALIZE_AES field. */
#define AES_SHORTS_KEY_READY_INITIALIZE_AES_Disabled (0UL) /*!< Disable shortcut */
#define AES_SHORTS_KEY_READY_INITIALIZE_AES_Enabled (1UL) /*!< Enable shortcut */

/* Bit 5 : Shortcut between event IV_READY and task INITIALIZE_AES */
#define AES_SHORTS_IV_READY_INITIALIZE_AES_Pos (5UL) /*!< Position of IV_READY_INITIALIZE_AES field. */
#define AES_SHORTS_IV_READY_INITIALIZE_AES_Msk (0x1UL << AES_SHORTS_IV_READY_INITIALIZE_AES_Pos) /*!< Bit mask of IV_READY_INITIALIZE_AES field. */
#define AES_SHORTS_IV_READY_INITIALIZE_AES_Disabled (0UL) /*!< Disable shortcut */
#define AES_SHORTS_IV_READY_INITIALIZE_AES_Enabled (1UL) /*!< Enable shortcut */

/* Bit 4 : Shortcut between event GATHER_STARTED and task START_SCATTER */
#define AES_SHORTS_GATHER_STARTED_START_SCATTER_Pos (4UL) /*!< Position of GATHER_STARTED_START_SCATTER field. */
#define AES_SHORTS_GATHER_STARTED_START_SCATTER_Msk (0x1UL << AES_SHORTS_GATHER_STARTED_START_SCATTER_Pos) /*!< Bit mask of GATHER_STARTED_START_SCATTER field. */
#define AES_SHORTS_GATHER_STARTED_START_SCATTER_Disabled (0UL) /*!< Disable shortcut */
#define AES_SHORTS_GATHER_STARTED_START_SCATTER_Enabled (1UL) /*!< Enable shortcut */

/* Bit 3 : Shortcut between event AES_OUTPUT_EMPTY and task FILL_AES_INPUT */
#define AES_SHORTS_AES_OUTPUT_EMPTY_FILL_AES_INPUT_Pos (3UL) /*!< Position of AES_OUTPUT_EMPTY_FILL_AES_INPUT field. */
#define AES_SHORTS_AES_OUTPUT_EMPTY_FILL_AES_INPUT_Msk (0x1UL << AES_SHORTS_AES_OUTPUT_EMPTY_FILL_AES_INPUT_Pos) /*!< Bit mask of AES_OUTPUT_EMPTY_FILL_AES_INPUT field. */
#define AES_SHORTS_AES_OUTPUT_EMPTY_FILL_AES_INPUT_Disabled (0UL) /*!< Disable shortcut */
#define AES_SHORTS_AES_OUTPUT_EMPTY_FILL_AES_INPUT_Enabled (1UL) /*!< Enable shortcut */

/* Bit 2 : Shortcut between event AES_DONE and task DRAIN_AES_OUTPUT */
#define AES_SHORTS_AES_DONE_DRAIN_AES_OUTPUT_Pos (2UL) /*!< Position of AES_DONE_DRAIN_AES_OUTPUT field. */
#define AES_SHORTS_AES_DONE_DRAIN_AES_OUTPUT_Msk (0x1UL << AES_SHORTS_AES_DONE_DRAIN_AES_OUTPUT_Pos) /*!< Bit mask of AES_DONE_DRAIN_AES_OUTPUT field. */
#define AES_SHORTS_AES_DONE_DRAIN_AES_OUTPUT_Disabled (0UL) /*!< Disable shortcut */
#define AES_SHORTS_AES_DONE_DRAIN_AES_OUTPUT_Enabled (1UL) /*!< Enable shortcut */

/* Bit 1 : Shortcut between event AES_INPUT_FULL and task AES_DECRYPT */
#define AES_SHORTS_AES_INPUT_FULL_AES_DECRYPT_Pos (1UL) /*!< Position of AES_INPUT_FULL_AES_DECRYPT field. */
#define AES_SHORTS_AES_INPUT_FULL_AES_DECRYPT_Msk (0x1UL << AES_SHORTS_AES_INPUT_FULL_AES_DECRYPT_Pos) /*!< Bit mask of AES_INPUT_FULL_AES_DECRYPT field. */
#define AES_SHORTS_AES_INPUT_FULL_AES_DECRYPT_Disabled (0UL) /*!< Disable shortcut */
#define AES_SHORTS_AES_INPUT_FULL_AES_DECRYPT_Enabled (1UL) /*!< Enable shortcut */

/* Bit 0 : Shortcut between event AES_INPUT_FULL and task AES_ENCRYPT */
#define AES_SHORTS_AES_INPUT_FULL_AES_ENCRYPT_Pos (0UL) /*!< Position of AES_INPUT_FULL_AES_ENCRYPT field. */
#define AES_SHORTS_AES_INPUT_FULL_AES_ENCRYPT_Msk (0x1UL << AES_SHORTS_AES_INPUT_FULL_AES_ENCRYPT_Pos) /*!< Bit mask of AES_INPUT_FULL_AES_ENCRYPT field. */
#define AES_SHORTS_AES_INPUT_FULL_AES_ENCRYPT_Disabled (0UL) /*!< Disable shortcut */
#define AES_SHORTS_AES_INPUT_FULL_AES_ENCRYPT_Enabled (1UL) /*!< Enable shortcut */

/* Register: AES_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 11 : Enable or disable interrupt for event RESETTED */
#define AES_INTEN_RESETTED_Pos (11UL) /*!< Position of RESETTED field. */
#define AES_INTEN_RESETTED_Msk (0x1UL << AES_INTEN_RESETTED_Pos) /*!< Bit mask of RESETTED field. */
#define AES_INTEN_RESETTED_Disabled (0UL) /*!< Disable */
#define AES_INTEN_RESETTED_Enabled (1UL) /*!< Enable */

/* Bit 10 : Enable or disable interrupt for event MAC_READY */
#define AES_INTEN_MAC_READY_Pos (10UL) /*!< Position of MAC_READY field. */
#define AES_INTEN_MAC_READY_Msk (0x1UL << AES_INTEN_MAC_READY_Pos) /*!< Bit mask of MAC_READY field. */
#define AES_INTEN_MAC_READY_Disabled (0UL) /*!< Disable */
#define AES_INTEN_MAC_READY_Enabled (1UL) /*!< Enable */

/* Bit 9 : Enable or disable interrupt for event AES_OUTPUT_EMPTY */
#define AES_INTEN_AES_OUTPUT_EMPTY_Pos (9UL) /*!< Position of AES_OUTPUT_EMPTY field. */
#define AES_INTEN_AES_OUTPUT_EMPTY_Msk (0x1UL << AES_INTEN_AES_OUTPUT_EMPTY_Pos) /*!< Bit mask of AES_OUTPUT_EMPTY field. */
#define AES_INTEN_AES_OUTPUT_EMPTY_Disabled (0UL) /*!< Disable */
#define AES_INTEN_AES_OUTPUT_EMPTY_Enabled (1UL) /*!< Enable */

/* Bit 8 : Enable or disable interrupt for event AES_DONE */
#define AES_INTEN_AES_DONE_Pos (8UL) /*!< Position of AES_DONE field. */
#define AES_INTEN_AES_DONE_Msk (0x1UL << AES_INTEN_AES_DONE_Pos) /*!< Bit mask of AES_DONE field. */
#define AES_INTEN_AES_DONE_Disabled (0UL) /*!< Disable */
#define AES_INTEN_AES_DONE_Enabled (1UL) /*!< Enable */

/* Bit 7 : Enable or disable interrupt for event AES_INPUT_FULL */
#define AES_INTEN_AES_INPUT_FULL_Pos (7UL) /*!< Position of AES_INPUT_FULL field. */
#define AES_INTEN_AES_INPUT_FULL_Msk (0x1UL << AES_INTEN_AES_INPUT_FULL_Pos) /*!< Bit mask of AES_INPUT_FULL field. */
#define AES_INTEN_AES_INPUT_FULL_Disabled (0UL) /*!< Disable */
#define AES_INTEN_AES_INPUT_FULL_Enabled (1UL) /*!< Enable */

/* Bit 6 : Enable or disable interrupt for event AES_INITIALIZED */
#define AES_INTEN_AES_INITIALIZED_Pos (6UL) /*!< Position of AES_INITIALIZED field. */
#define AES_INTEN_AES_INITIALIZED_Msk (0x1UL << AES_INTEN_AES_INITIALIZED_Pos) /*!< Bit mask of AES_INITIALIZED field. */
#define AES_INTEN_AES_INITIALIZED_Disabled (0UL) /*!< Disable */
#define AES_INTEN_AES_INITIALIZED_Enabled (1UL) /*!< Enable */

/* Bit 5 : Enable or disable interrupt for event IV_READY */
#define AES_INTEN_IV_READY_Pos (5UL) /*!< Position of IV_READY field. */
#define AES_INTEN_IV_READY_Msk (0x1UL << AES_INTEN_IV_READY_Pos) /*!< Bit mask of IV_READY field. */
#define AES_INTEN_IV_READY_Disabled (0UL) /*!< Disable */
#define AES_INTEN_IV_READY_Enabled (1UL) /*!< Enable */

/* Bit 4 : Enable or disable interrupt for event KEY_READY */
#define AES_INTEN_KEY_READY_Pos (4UL) /*!< Position of KEY_READY field. */
#define AES_INTEN_KEY_READY_Msk (0x1UL << AES_INTEN_KEY_READY_Pos) /*!< Bit mask of KEY_READY field. */
#define AES_INTEN_KEY_READY_Disabled (0UL) /*!< Disable */
#define AES_INTEN_KEY_READY_Enabled (1UL) /*!< Enable */

/* Bit 3 : Enable or disable interrupt for event SCATTER_DONE */
#define AES_INTEN_SCATTER_DONE_Pos (3UL) /*!< Position of SCATTER_DONE field. */
#define AES_INTEN_SCATTER_DONE_Msk (0x1UL << AES_INTEN_SCATTER_DONE_Pos) /*!< Bit mask of SCATTER_DONE field. */
#define AES_INTEN_SCATTER_DONE_Disabled (0UL) /*!< Disable */
#define AES_INTEN_SCATTER_DONE_Enabled (1UL) /*!< Enable */

/* Bit 2 : Enable or disable interrupt for event SCATTER_STARTED */
#define AES_INTEN_SCATTER_STARTED_Pos (2UL) /*!< Position of SCATTER_STARTED field. */
#define AES_INTEN_SCATTER_STARTED_Msk (0x1UL << AES_INTEN_SCATTER_STARTED_Pos) /*!< Bit mask of SCATTER_STARTED field. */
#define AES_INTEN_SCATTER_STARTED_Disabled (0UL) /*!< Disable */
#define AES_INTEN_SCATTER_STARTED_Enabled (1UL) /*!< Enable */

/* Bit 1 : Enable or disable interrupt for event GATHER_DONE */
#define AES_INTEN_GATHER_DONE_Pos (1UL) /*!< Position of GATHER_DONE field. */
#define AES_INTEN_GATHER_DONE_Msk (0x1UL << AES_INTEN_GATHER_DONE_Pos) /*!< Bit mask of GATHER_DONE field. */
#define AES_INTEN_GATHER_DONE_Disabled (0UL) /*!< Disable */
#define AES_INTEN_GATHER_DONE_Enabled (1UL) /*!< Enable */

/* Bit 0 : Enable or disable interrupt for event GATHER_STARTED */
#define AES_INTEN_GATHER_STARTED_Pos (0UL) /*!< Position of GATHER_STARTED field. */
#define AES_INTEN_GATHER_STARTED_Msk (0x1UL << AES_INTEN_GATHER_STARTED_Pos) /*!< Bit mask of GATHER_STARTED field. */
#define AES_INTEN_GATHER_STARTED_Disabled (0UL) /*!< Disable */
#define AES_INTEN_GATHER_STARTED_Enabled (1UL) /*!< Enable */

/* Register: AES_INTENSET */
/* Description: Enable interrupt */

/* Bit 11 : Write '1' to enable interrupt for event RESETTED */
#define AES_INTENSET_RESETTED_Pos (11UL) /*!< Position of RESETTED field. */
#define AES_INTENSET_RESETTED_Msk (0x1UL << AES_INTENSET_RESETTED_Pos) /*!< Bit mask of RESETTED field. */
#define AES_INTENSET_RESETTED_Disabled (0UL) /*!< Read: Disabled */
#define AES_INTENSET_RESETTED_Enabled (1UL) /*!< Read: Enabled */
#define AES_INTENSET_RESETTED_Set (1UL) /*!< Enable */

/* Bit 10 : Write '1' to enable interrupt for event MAC_READY */
#define AES_INTENSET_MAC_READY_Pos (10UL) /*!< Position of MAC_READY field. */
#define AES_INTENSET_MAC_READY_Msk (0x1UL << AES_INTENSET_MAC_READY_Pos) /*!< Bit mask of MAC_READY field. */
#define AES_INTENSET_MAC_READY_Disabled (0UL) /*!< Read: Disabled */
#define AES_INTENSET_MAC_READY_Enabled (1UL) /*!< Read: Enabled */
#define AES_INTENSET_MAC_READY_Set (1UL) /*!< Enable */

/* Bit 9 : Write '1' to enable interrupt for event AES_OUTPUT_EMPTY */
#define AES_INTENSET_AES_OUTPUT_EMPTY_Pos (9UL) /*!< Position of AES_OUTPUT_EMPTY field. */
#define AES_INTENSET_AES_OUTPUT_EMPTY_Msk (0x1UL << AES_INTENSET_AES_OUTPUT_EMPTY_Pos) /*!< Bit mask of AES_OUTPUT_EMPTY field. */
#define AES_INTENSET_AES_OUTPUT_EMPTY_Disabled (0UL) /*!< Read: Disabled */
#define AES_INTENSET_AES_OUTPUT_EMPTY_Enabled (1UL) /*!< Read: Enabled */
#define AES_INTENSET_AES_OUTPUT_EMPTY_Set (1UL) /*!< Enable */

/* Bit 8 : Write '1' to enable interrupt for event AES_DONE */
#define AES_INTENSET_AES_DONE_Pos (8UL) /*!< Position of AES_DONE field. */
#define AES_INTENSET_AES_DONE_Msk (0x1UL << AES_INTENSET_AES_DONE_Pos) /*!< Bit mask of AES_DONE field. */
#define AES_INTENSET_AES_DONE_Disabled (0UL) /*!< Read: Disabled */
#define AES_INTENSET_AES_DONE_Enabled (1UL) /*!< Read: Enabled */
#define AES_INTENSET_AES_DONE_Set (1UL) /*!< Enable */

/* Bit 7 : Write '1' to enable interrupt for event AES_INPUT_FULL */
#define AES_INTENSET_AES_INPUT_FULL_Pos (7UL) /*!< Position of AES_INPUT_FULL field. */
#define AES_INTENSET_AES_INPUT_FULL_Msk (0x1UL << AES_INTENSET_AES_INPUT_FULL_Pos) /*!< Bit mask of AES_INPUT_FULL field. */
#define AES_INTENSET_AES_INPUT_FULL_Disabled (0UL) /*!< Read: Disabled */
#define AES_INTENSET_AES_INPUT_FULL_Enabled (1UL) /*!< Read: Enabled */
#define AES_INTENSET_AES_INPUT_FULL_Set (1UL) /*!< Enable */

/* Bit 6 : Write '1' to enable interrupt for event AES_INITIALIZED */
#define AES_INTENSET_AES_INITIALIZED_Pos (6UL) /*!< Position of AES_INITIALIZED field. */
#define AES_INTENSET_AES_INITIALIZED_Msk (0x1UL << AES_INTENSET_AES_INITIALIZED_Pos) /*!< Bit mask of AES_INITIALIZED field. */
#define AES_INTENSET_AES_INITIALIZED_Disabled (0UL) /*!< Read: Disabled */
#define AES_INTENSET_AES_INITIALIZED_Enabled (1UL) /*!< Read: Enabled */
#define AES_INTENSET_AES_INITIALIZED_Set (1UL) /*!< Enable */

/* Bit 5 : Write '1' to enable interrupt for event IV_READY */
#define AES_INTENSET_IV_READY_Pos (5UL) /*!< Position of IV_READY field. */
#define AES_INTENSET_IV_READY_Msk (0x1UL << AES_INTENSET_IV_READY_Pos) /*!< Bit mask of IV_READY field. */
#define AES_INTENSET_IV_READY_Disabled (0UL) /*!< Read: Disabled */
#define AES_INTENSET_IV_READY_Enabled (1UL) /*!< Read: Enabled */
#define AES_INTENSET_IV_READY_Set (1UL) /*!< Enable */

/* Bit 4 : Write '1' to enable interrupt for event KEY_READY */
#define AES_INTENSET_KEY_READY_Pos (4UL) /*!< Position of KEY_READY field. */
#define AES_INTENSET_KEY_READY_Msk (0x1UL << AES_INTENSET_KEY_READY_Pos) /*!< Bit mask of KEY_READY field. */
#define AES_INTENSET_KEY_READY_Disabled (0UL) /*!< Read: Disabled */
#define AES_INTENSET_KEY_READY_Enabled (1UL) /*!< Read: Enabled */
#define AES_INTENSET_KEY_READY_Set (1UL) /*!< Enable */

/* Bit 3 : Write '1' to enable interrupt for event SCATTER_DONE */
#define AES_INTENSET_SCATTER_DONE_Pos (3UL) /*!< Position of SCATTER_DONE field. */
#define AES_INTENSET_SCATTER_DONE_Msk (0x1UL << AES_INTENSET_SCATTER_DONE_Pos) /*!< Bit mask of SCATTER_DONE field. */
#define AES_INTENSET_SCATTER_DONE_Disabled (0UL) /*!< Read: Disabled */
#define AES_INTENSET_SCATTER_DONE_Enabled (1UL) /*!< Read: Enabled */
#define AES_INTENSET_SCATTER_DONE_Set (1UL) /*!< Enable */

/* Bit 2 : Write '1' to enable interrupt for event SCATTER_STARTED */
#define AES_INTENSET_SCATTER_STARTED_Pos (2UL) /*!< Position of SCATTER_STARTED field. */
#define AES_INTENSET_SCATTER_STARTED_Msk (0x1UL << AES_INTENSET_SCATTER_STARTED_Pos) /*!< Bit mask of SCATTER_STARTED field. */
#define AES_INTENSET_SCATTER_STARTED_Disabled (0UL) /*!< Read: Disabled */
#define AES_INTENSET_SCATTER_STARTED_Enabled (1UL) /*!< Read: Enabled */
#define AES_INTENSET_SCATTER_STARTED_Set (1UL) /*!< Enable */

/* Bit 1 : Write '1' to enable interrupt for event GATHER_DONE */
#define AES_INTENSET_GATHER_DONE_Pos (1UL) /*!< Position of GATHER_DONE field. */
#define AES_INTENSET_GATHER_DONE_Msk (0x1UL << AES_INTENSET_GATHER_DONE_Pos) /*!< Bit mask of GATHER_DONE field. */
#define AES_INTENSET_GATHER_DONE_Disabled (0UL) /*!< Read: Disabled */
#define AES_INTENSET_GATHER_DONE_Enabled (1UL) /*!< Read: Enabled */
#define AES_INTENSET_GATHER_DONE_Set (1UL) /*!< Enable */

/* Bit 0 : Write '1' to enable interrupt for event GATHER_STARTED */
#define AES_INTENSET_GATHER_STARTED_Pos (0UL) /*!< Position of GATHER_STARTED field. */
#define AES_INTENSET_GATHER_STARTED_Msk (0x1UL << AES_INTENSET_GATHER_STARTED_Pos) /*!< Bit mask of GATHER_STARTED field. */
#define AES_INTENSET_GATHER_STARTED_Disabled (0UL) /*!< Read: Disabled */
#define AES_INTENSET_GATHER_STARTED_Enabled (1UL) /*!< Read: Enabled */
#define AES_INTENSET_GATHER_STARTED_Set (1UL) /*!< Enable */

/* Register: AES_INTENCLR */
/* Description: Disable interrupt */

/* Bit 11 : Write '1' to disable interrupt for event RESETTED */
#define AES_INTENCLR_RESETTED_Pos (11UL) /*!< Position of RESETTED field. */
#define AES_INTENCLR_RESETTED_Msk (0x1UL << AES_INTENCLR_RESETTED_Pos) /*!< Bit mask of RESETTED field. */
#define AES_INTENCLR_RESETTED_Disabled (0UL) /*!< Read: Disabled */
#define AES_INTENCLR_RESETTED_Enabled (1UL) /*!< Read: Enabled */
#define AES_INTENCLR_RESETTED_Clear (1UL) /*!< Disable */

/* Bit 10 : Write '1' to disable interrupt for event MAC_READY */
#define AES_INTENCLR_MAC_READY_Pos (10UL) /*!< Position of MAC_READY field. */
#define AES_INTENCLR_MAC_READY_Msk (0x1UL << AES_INTENCLR_MAC_READY_Pos) /*!< Bit mask of MAC_READY field. */
#define AES_INTENCLR_MAC_READY_Disabled (0UL) /*!< Read: Disabled */
#define AES_INTENCLR_MAC_READY_Enabled (1UL) /*!< Read: Enabled */
#define AES_INTENCLR_MAC_READY_Clear (1UL) /*!< Disable */

/* Bit 9 : Write '1' to disable interrupt for event AES_OUTPUT_EMPTY */
#define AES_INTENCLR_AES_OUTPUT_EMPTY_Pos (9UL) /*!< Position of AES_OUTPUT_EMPTY field. */
#define AES_INTENCLR_AES_OUTPUT_EMPTY_Msk (0x1UL << AES_INTENCLR_AES_OUTPUT_EMPTY_Pos) /*!< Bit mask of AES_OUTPUT_EMPTY field. */
#define AES_INTENCLR_AES_OUTPUT_EMPTY_Disabled (0UL) /*!< Read: Disabled */
#define AES_INTENCLR_AES_OUTPUT_EMPTY_Enabled (1UL) /*!< Read: Enabled */
#define AES_INTENCLR_AES_OUTPUT_EMPTY_Clear (1UL) /*!< Disable */

/* Bit 8 : Write '1' to disable interrupt for event AES_DONE */
#define AES_INTENCLR_AES_DONE_Pos (8UL) /*!< Position of AES_DONE field. */
#define AES_INTENCLR_AES_DONE_Msk (0x1UL << AES_INTENCLR_AES_DONE_Pos) /*!< Bit mask of AES_DONE field. */
#define AES_INTENCLR_AES_DONE_Disabled (0UL) /*!< Read: Disabled */
#define AES_INTENCLR_AES_DONE_Enabled (1UL) /*!< Read: Enabled */
#define AES_INTENCLR_AES_DONE_Clear (1UL) /*!< Disable */

/* Bit 7 : Write '1' to disable interrupt for event AES_INPUT_FULL */
#define AES_INTENCLR_AES_INPUT_FULL_Pos (7UL) /*!< Position of AES_INPUT_FULL field. */
#define AES_INTENCLR_AES_INPUT_FULL_Msk (0x1UL << AES_INTENCLR_AES_INPUT_FULL_Pos) /*!< Bit mask of AES_INPUT_FULL field. */
#define AES_INTENCLR_AES_INPUT_FULL_Disabled (0UL) /*!< Read: Disabled */
#define AES_INTENCLR_AES_INPUT_FULL_Enabled (1UL) /*!< Read: Enabled */
#define AES_INTENCLR_AES_INPUT_FULL_Clear (1UL) /*!< Disable */

/* Bit 6 : Write '1' to disable interrupt for event AES_INITIALIZED */
#define AES_INTENCLR_AES_INITIALIZED_Pos (6UL) /*!< Position of AES_INITIALIZED field. */
#define AES_INTENCLR_AES_INITIALIZED_Msk (0x1UL << AES_INTENCLR_AES_INITIALIZED_Pos) /*!< Bit mask of AES_INITIALIZED field. */
#define AES_INTENCLR_AES_INITIALIZED_Disabled (0UL) /*!< Read: Disabled */
#define AES_INTENCLR_AES_INITIALIZED_Enabled (1UL) /*!< Read: Enabled */
#define AES_INTENCLR_AES_INITIALIZED_Clear (1UL) /*!< Disable */

/* Bit 5 : Write '1' to disable interrupt for event IV_READY */
#define AES_INTENCLR_IV_READY_Pos (5UL) /*!< Position of IV_READY field. */
#define AES_INTENCLR_IV_READY_Msk (0x1UL << AES_INTENCLR_IV_READY_Pos) /*!< Bit mask of IV_READY field. */
#define AES_INTENCLR_IV_READY_Disabled (0UL) /*!< Read: Disabled */
#define AES_INTENCLR_IV_READY_Enabled (1UL) /*!< Read: Enabled */
#define AES_INTENCLR_IV_READY_Clear (1UL) /*!< Disable */

/* Bit 4 : Write '1' to disable interrupt for event KEY_READY */
#define AES_INTENCLR_KEY_READY_Pos (4UL) /*!< Position of KEY_READY field. */
#define AES_INTENCLR_KEY_READY_Msk (0x1UL << AES_INTENCLR_KEY_READY_Pos) /*!< Bit mask of KEY_READY field. */
#define AES_INTENCLR_KEY_READY_Disabled (0UL) /*!< Read: Disabled */
#define AES_INTENCLR_KEY_READY_Enabled (1UL) /*!< Read: Enabled */
#define AES_INTENCLR_KEY_READY_Clear (1UL) /*!< Disable */

/* Bit 3 : Write '1' to disable interrupt for event SCATTER_DONE */
#define AES_INTENCLR_SCATTER_DONE_Pos (3UL) /*!< Position of SCATTER_DONE field. */
#define AES_INTENCLR_SCATTER_DONE_Msk (0x1UL << AES_INTENCLR_SCATTER_DONE_Pos) /*!< Bit mask of SCATTER_DONE field. */
#define AES_INTENCLR_SCATTER_DONE_Disabled (0UL) /*!< Read: Disabled */
#define AES_INTENCLR_SCATTER_DONE_Enabled (1UL) /*!< Read: Enabled */
#define AES_INTENCLR_SCATTER_DONE_Clear (1UL) /*!< Disable */

/* Bit 2 : Write '1' to disable interrupt for event SCATTER_STARTED */
#define AES_INTENCLR_SCATTER_STARTED_Pos (2UL) /*!< Position of SCATTER_STARTED field. */
#define AES_INTENCLR_SCATTER_STARTED_Msk (0x1UL << AES_INTENCLR_SCATTER_STARTED_Pos) /*!< Bit mask of SCATTER_STARTED field. */
#define AES_INTENCLR_SCATTER_STARTED_Disabled (0UL) /*!< Read: Disabled */
#define AES_INTENCLR_SCATTER_STARTED_Enabled (1UL) /*!< Read: Enabled */
#define AES_INTENCLR_SCATTER_STARTED_Clear (1UL) /*!< Disable */

/* Bit 1 : Write '1' to disable interrupt for event GATHER_DONE */
#define AES_INTENCLR_GATHER_DONE_Pos (1UL) /*!< Position of GATHER_DONE field. */
#define AES_INTENCLR_GATHER_DONE_Msk (0x1UL << AES_INTENCLR_GATHER_DONE_Pos) /*!< Bit mask of GATHER_DONE field. */
#define AES_INTENCLR_GATHER_DONE_Disabled (0UL) /*!< Read: Disabled */
#define AES_INTENCLR_GATHER_DONE_Enabled (1UL) /*!< Read: Enabled */
#define AES_INTENCLR_GATHER_DONE_Clear (1UL) /*!< Disable */

/* Bit 0 : Write '1' to disable interrupt for event GATHER_STARTED */
#define AES_INTENCLR_GATHER_STARTED_Pos (0UL) /*!< Position of GATHER_STARTED field. */
#define AES_INTENCLR_GATHER_STARTED_Msk (0x1UL << AES_INTENCLR_GATHER_STARTED_Pos) /*!< Bit mask of GATHER_STARTED field. */
#define AES_INTENCLR_GATHER_STARTED_Disabled (0UL) /*!< Read: Disabled */
#define AES_INTENCLR_GATHER_STARTED_Enabled (1UL) /*!< Read: Enabled */
#define AES_INTENCLR_GATHER_STARTED_Clear (1UL) /*!< Disable */

/* Register: AES_INTPEND */
/* Description: Pending interrupts */

/* Bit 11 : Read pending status of interrupt for event RESETTED */
#define AES_INTPEND_RESETTED_Pos (11UL) /*!< Position of RESETTED field. */
#define AES_INTPEND_RESETTED_Msk (0x1UL << AES_INTPEND_RESETTED_Pos) /*!< Bit mask of RESETTED field. */
#define AES_INTPEND_RESETTED_NotPending (0UL) /*!< Read: Not pending */
#define AES_INTPEND_RESETTED_Pending (1UL) /*!< Read: Pending */

/* Bit 10 : Read pending status of interrupt for event MAC_READY */
#define AES_INTPEND_MAC_READY_Pos (10UL) /*!< Position of MAC_READY field. */
#define AES_INTPEND_MAC_READY_Msk (0x1UL << AES_INTPEND_MAC_READY_Pos) /*!< Bit mask of MAC_READY field. */
#define AES_INTPEND_MAC_READY_NotPending (0UL) /*!< Read: Not pending */
#define AES_INTPEND_MAC_READY_Pending (1UL) /*!< Read: Pending */

/* Bit 9 : Read pending status of interrupt for event AES_OUTPUT_EMPTY */
#define AES_INTPEND_AES_OUTPUT_EMPTY_Pos (9UL) /*!< Position of AES_OUTPUT_EMPTY field. */
#define AES_INTPEND_AES_OUTPUT_EMPTY_Msk (0x1UL << AES_INTPEND_AES_OUTPUT_EMPTY_Pos) /*!< Bit mask of AES_OUTPUT_EMPTY field. */
#define AES_INTPEND_AES_OUTPUT_EMPTY_NotPending (0UL) /*!< Read: Not pending */
#define AES_INTPEND_AES_OUTPUT_EMPTY_Pending (1UL) /*!< Read: Pending */

/* Bit 8 : Read pending status of interrupt for event AES_DONE */
#define AES_INTPEND_AES_DONE_Pos (8UL) /*!< Position of AES_DONE field. */
#define AES_INTPEND_AES_DONE_Msk (0x1UL << AES_INTPEND_AES_DONE_Pos) /*!< Bit mask of AES_DONE field. */
#define AES_INTPEND_AES_DONE_NotPending (0UL) /*!< Read: Not pending */
#define AES_INTPEND_AES_DONE_Pending (1UL) /*!< Read: Pending */

/* Bit 7 : Read pending status of interrupt for event AES_INPUT_FULL */
#define AES_INTPEND_AES_INPUT_FULL_Pos (7UL) /*!< Position of AES_INPUT_FULL field. */
#define AES_INTPEND_AES_INPUT_FULL_Msk (0x1UL << AES_INTPEND_AES_INPUT_FULL_Pos) /*!< Bit mask of AES_INPUT_FULL field. */
#define AES_INTPEND_AES_INPUT_FULL_NotPending (0UL) /*!< Read: Not pending */
#define AES_INTPEND_AES_INPUT_FULL_Pending (1UL) /*!< Read: Pending */

/* Bit 6 : Read pending status of interrupt for event AES_INITIALIZED */
#define AES_INTPEND_AES_INITIALIZED_Pos (6UL) /*!< Position of AES_INITIALIZED field. */
#define AES_INTPEND_AES_INITIALIZED_Msk (0x1UL << AES_INTPEND_AES_INITIALIZED_Pos) /*!< Bit mask of AES_INITIALIZED field. */
#define AES_INTPEND_AES_INITIALIZED_NotPending (0UL) /*!< Read: Not pending */
#define AES_INTPEND_AES_INITIALIZED_Pending (1UL) /*!< Read: Pending */

/* Bit 5 : Read pending status of interrupt for event IV_READY */
#define AES_INTPEND_IV_READY_Pos (5UL) /*!< Position of IV_READY field. */
#define AES_INTPEND_IV_READY_Msk (0x1UL << AES_INTPEND_IV_READY_Pos) /*!< Bit mask of IV_READY field. */
#define AES_INTPEND_IV_READY_NotPending (0UL) /*!< Read: Not pending */
#define AES_INTPEND_IV_READY_Pending (1UL) /*!< Read: Pending */

/* Bit 4 : Read pending status of interrupt for event KEY_READY */
#define AES_INTPEND_KEY_READY_Pos (4UL) /*!< Position of KEY_READY field. */
#define AES_INTPEND_KEY_READY_Msk (0x1UL << AES_INTPEND_KEY_READY_Pos) /*!< Bit mask of KEY_READY field. */
#define AES_INTPEND_KEY_READY_NotPending (0UL) /*!< Read: Not pending */
#define AES_INTPEND_KEY_READY_Pending (1UL) /*!< Read: Pending */

/* Bit 3 : Read pending status of interrupt for event SCATTER_DONE */
#define AES_INTPEND_SCATTER_DONE_Pos (3UL) /*!< Position of SCATTER_DONE field. */
#define AES_INTPEND_SCATTER_DONE_Msk (0x1UL << AES_INTPEND_SCATTER_DONE_Pos) /*!< Bit mask of SCATTER_DONE field. */
#define AES_INTPEND_SCATTER_DONE_NotPending (0UL) /*!< Read: Not pending */
#define AES_INTPEND_SCATTER_DONE_Pending (1UL) /*!< Read: Pending */

/* Bit 2 : Read pending status of interrupt for event SCATTER_STARTED */
#define AES_INTPEND_SCATTER_STARTED_Pos (2UL) /*!< Position of SCATTER_STARTED field. */
#define AES_INTPEND_SCATTER_STARTED_Msk (0x1UL << AES_INTPEND_SCATTER_STARTED_Pos) /*!< Bit mask of SCATTER_STARTED field. */
#define AES_INTPEND_SCATTER_STARTED_NotPending (0UL) /*!< Read: Not pending */
#define AES_INTPEND_SCATTER_STARTED_Pending (1UL) /*!< Read: Pending */

/* Bit 1 : Read pending status of interrupt for event GATHER_DONE */
#define AES_INTPEND_GATHER_DONE_Pos (1UL) /*!< Position of GATHER_DONE field. */
#define AES_INTPEND_GATHER_DONE_Msk (0x1UL << AES_INTPEND_GATHER_DONE_Pos) /*!< Bit mask of GATHER_DONE field. */
#define AES_INTPEND_GATHER_DONE_NotPending (0UL) /*!< Read: Not pending */
#define AES_INTPEND_GATHER_DONE_Pending (1UL) /*!< Read: Pending */

/* Bit 0 : Read pending status of interrupt for event GATHER_STARTED */
#define AES_INTPEND_GATHER_STARTED_Pos (0UL) /*!< Position of GATHER_STARTED field. */
#define AES_INTPEND_GATHER_STARTED_Msk (0x1UL << AES_INTPEND_GATHER_STARTED_Pos) /*!< Bit mask of GATHER_STARTED field. */
#define AES_INTPEND_GATHER_STARTED_NotPending (0UL) /*!< Read: Not pending */
#define AES_INTPEND_GATHER_STARTED_Pending (1UL) /*!< Read: Pending */

/* Register: AES_MODE */
/* Description: Operation mode */

/* Bits 1..0 : Selects ECB, CBC, CBC-MAC or CTR mode */
#define AES_MODE_MODE_Pos (0UL) /*!< Position of MODE field. */
#define AES_MODE_MODE_Msk (0x3UL << AES_MODE_MODE_Pos) /*!< Bit mask of MODE field. */
#define AES_MODE_MODE_ECB (0UL) /*!< Electronic Codebook mode */
#define AES_MODE_MODE_CBC (1UL) /*!< Cipher Block Chaining mode */
#define AES_MODE_MODE_CBCMAC (2UL) /*!< Cipher Block Chaining Message Authentication Code mode */
#define AES_MODE_MODE_CTR (3UL) /*!< Counter mode */

/* Register: AES_CTRBITS */
/* Description: Amount of counter bits used in the CTR mode */

/* Bits 6..0 : Amount of counter bits used in the CTR mode */
#define AES_CTRBITS_CTRBITS_Pos (0UL) /*!< Position of CTRBITS field. */
#define AES_CTRBITS_CTRBITS_Msk (0x7FUL << AES_CTRBITS_CTRBITS_Pos) /*!< Bit mask of CTRBITS field. */

/* Register: AES_KEYMODE */
/* Description: Selects which key is utilized in ciphering operations */

/* Bits 1..0 : Keying mode */
#define AES_KEYMODE_KEYMODE_Pos (0UL) /*!< Position of KEYMODE field. */
#define AES_KEYMODE_KEYMODE_Msk (0x3UL << AES_KEYMODE_KEYMODE_Pos) /*!< Bit mask of KEYMODE field. */
#define AES_KEYMODE_KEYMODE_Nonsecure (0UL) /*!< Use a non-secure key received via DMA */
#define AES_KEYMODE_KEYMODE_Secure (1UL) /*!< Use a secure key from the specific secure key register */
#define AES_KEYMODE_KEYMODE_KPRTL (2UL) /*!< Use the K-PRTL key */

/* Register: AES_LENGTH */
/* Description: Length of the CBC-MAC data to be authenticated */

/* Bits 23..0 : Length of the CBC-MAC data to be authenticated */
#define AES_LENGTH_LENGTH_Pos (0UL) /*!< Position of LENGTH field. */
#define AES_LENGTH_LENGTH_Msk (0xFFFFFFUL << AES_LENGTH_LENGTH_Pos) /*!< Bit mask of LENGTH field. */

/* Register: AES_ENABLE */
/* Description: Enable/disable block */

/* Bit 0 : Enable or disable AES module */
#define AES_ENABLE_ENABLE_Pos (0UL) /*!< Position of ENABLE field. */
#define AES_ENABLE_ENABLE_Msk (0x1UL << AES_ENABLE_ENABLE_Pos) /*!< Bit mask of ENABLE field. */
#define AES_ENABLE_ENABLE_Disabled (0UL) /*!< Disabled */
#define AES_ENABLE_ENABLE_Enabled (1UL) /*!< Enabled */

/* Register: AES_INJOBPTR */
/* Description: Pointer to the memory address containing the input job list */

/* Bits 31..0 : Input job pointer */
#define AES_INJOBPTR_INJOBPTR_Pos (0UL) /*!< Position of INJOBPTR field. */
#define AES_INJOBPTR_INJOBPTR_Msk (0xFFFFFFFFUL << AES_INJOBPTR_INJOBPTR_Pos) /*!< Bit mask of INJOBPTR field. */

/* Register: AES_OUTJOBPTR */
/* Description: Pointer to the memory address containing the output job list */

/* Bits 31..0 : Output job pointer */
#define AES_OUTJOBPTR_OUTJOBPTR_Pos (0UL) /*!< Position of OUTJOBPTR field. */
#define AES_OUTJOBPTR_OUTJOBPTR_Msk (0xFFFFFFFFUL << AES_OUTJOBPTR_OUTJOBPTR_Pos) /*!< Bit mask of OUTJOBPTR field. */


/* Peripheral: TRACEANDDEBUG */
/* Description: Trace And Debug */

/* Register: TRACEANDDEBUG_STARTCLOCKS */
/* Description: Start all Trace and Debug clocks. */

/* Bit 0 :   */
#define TRACEANDDEBUG_STARTCLOCKS_STARTCLOCKS_Pos (0UL) /*!< Position of STARTCLOCKS field. */
#define TRACEANDDEBUG_STARTCLOCKS_STARTCLOCKS_Msk (0x1UL << TRACEANDDEBUG_STARTCLOCKS_STARTCLOCKS_Pos) /*!< Bit mask of STARTCLOCKS field. */
#define TRACEANDDEBUG_STARTCLOCKS_STARTCLOCKS_STARTCLOCKS (1UL) /*!< Start all Trace and Debug clocks. */

/* Register: TRACEANDDEBUG_STOPCLOCKS */
/* Description: Stop all Trace and Debug clocks. */

/* Bit 0 :   */
#define TRACEANDDEBUG_STOPCLOCKS_STOPCLOCKS_Pos (0UL) /*!< Position of STOPCLOCKS field. */
#define TRACEANDDEBUG_STOPCLOCKS_STOPCLOCKS_Msk (0x1UL << TRACEANDDEBUG_STOPCLOCKS_STOPCLOCKS_Pos) /*!< Bit mask of STOPCLOCKS field. */
#define TRACEANDDEBUG_STOPCLOCKS_STOPCLOCKS_STOPCLOCKS (1UL) /*!< Stop all Trace and Debug clocks. */

/* Register: TRACEANDDEBUG_ENABLEDEBUG */
/* Description: Master enable for PSEL.TraceData[3:0] and PSEL.TraceClk signals */

/* Bit 0 :   */
#define TRACEANDDEBUG_ENABLEDEBUG_ENABLEDEBUG_Pos (0UL) /*!< Position of ENABLEDEBUG field. */
#define TRACEANDDEBUG_ENABLEDEBUG_ENABLEDEBUG_Msk (0x1UL << TRACEANDDEBUG_ENABLEDEBUG_ENABLEDEBUG_Pos) /*!< Bit mask of ENABLEDEBUG field. */
#define TRACEANDDEBUG_ENABLEDEBUG_ENABLEDEBUG_ENABLEDEBUG (1UL) /*!< Master enable for PSEL.TraceData[3:0] and PSEL.TraceClk signals */

/* Register: TRACEANDDEBUG_PSEL_TRACECLK */
/* Description: Pin number configuration for TraceClk signal */

/* Bit 31 : Connection */
#define TRACEANDDEBUG_PSEL_TRACECLK_CONNECT_Pos (31UL) /*!< Position of CONNECT field. */
#define TRACEANDDEBUG_PSEL_TRACECLK_CONNECT_Msk (0x1UL << TRACEANDDEBUG_PSEL_TRACECLK_CONNECT_Pos) /*!< Bit mask of CONNECT field. */
#define TRACEANDDEBUG_PSEL_TRACECLK_CONNECT_Connected (0UL) /*!< Connect */
#define TRACEANDDEBUG_PSEL_TRACECLK_CONNECT_Disconnected (1UL) /*!< Disconnect */

/* Bits 4..0 : Pin number */
#define TRACEANDDEBUG_PSEL_TRACECLK_PIN_Pos (0UL) /*!< Position of PIN field. */
#define TRACEANDDEBUG_PSEL_TRACECLK_PIN_Msk (0x1FUL << TRACEANDDEBUG_PSEL_TRACECLK_PIN_Pos) /*!< Bit mask of PIN field. */

/* Register: TRACEANDDEBUG_PSEL_TRACEDATA0 */
/* Description: Pin number configuration for TraceData0 signal */

/* Bit 31 : Connection */
#define TRACEANDDEBUG_PSEL_TRACEDATA0_CONNECT_Pos (31UL) /*!< Position of CONNECT field. */
#define TRACEANDDEBUG_PSEL_TRACEDATA0_CONNECT_Msk (0x1UL << TRACEANDDEBUG_PSEL_TRACEDATA0_CONNECT_Pos) /*!< Bit mask of CONNECT field. */
#define TRACEANDDEBUG_PSEL_TRACEDATA0_CONNECT_Connected (0UL) /*!< Connect */
#define TRACEANDDEBUG_PSEL_TRACEDATA0_CONNECT_Disconnected (1UL) /*!< Disconnect */

/* Bits 4..0 : Pin number */
#define TRACEANDDEBUG_PSEL_TRACEDATA0_PIN_Pos (0UL) /*!< Position of PIN field. */
#define TRACEANDDEBUG_PSEL_TRACEDATA0_PIN_Msk (0x1FUL << TRACEANDDEBUG_PSEL_TRACEDATA0_PIN_Pos) /*!< Bit mask of PIN field. */

/* Register: TRACEANDDEBUG_PSEL_TRACEDATA1 */
/* Description: Pin number configuration for TraceData1 signal */

/* Bit 31 : Connection */
#define TRACEANDDEBUG_PSEL_TRACEDATA1_CONNECT_Pos (31UL) /*!< Position of CONNECT field. */
#define TRACEANDDEBUG_PSEL_TRACEDATA1_CONNECT_Msk (0x1UL << TRACEANDDEBUG_PSEL_TRACEDATA1_CONNECT_Pos) /*!< Bit mask of CONNECT field. */
#define TRACEANDDEBUG_PSEL_TRACEDATA1_CONNECT_Connected (0UL) /*!< Connect */
#define TRACEANDDEBUG_PSEL_TRACEDATA1_CONNECT_Disconnected (1UL) /*!< Disconnect */

/* Bits 4..0 : Pin number */
#define TRACEANDDEBUG_PSEL_TRACEDATA1_PIN_Pos (0UL) /*!< Position of PIN field. */
#define TRACEANDDEBUG_PSEL_TRACEDATA1_PIN_Msk (0x1FUL << TRACEANDDEBUG_PSEL_TRACEDATA1_PIN_Pos) /*!< Bit mask of PIN field. */

/* Register: TRACEANDDEBUG_PSEL_TRACEDATA2 */
/* Description: Pin number configuration for TraceData2 signal */

/* Bit 31 : Connection */
#define TRACEANDDEBUG_PSEL_TRACEDATA2_CONNECT_Pos (31UL) /*!< Position of CONNECT field. */
#define TRACEANDDEBUG_PSEL_TRACEDATA2_CONNECT_Msk (0x1UL << TRACEANDDEBUG_PSEL_TRACEDATA2_CONNECT_Pos) /*!< Bit mask of CONNECT field. */
#define TRACEANDDEBUG_PSEL_TRACEDATA2_CONNECT_Connected (0UL) /*!< Connect */
#define TRACEANDDEBUG_PSEL_TRACEDATA2_CONNECT_Disconnected (1UL) /*!< Disconnect */

/* Bits 4..0 : Pin number */
#define TRACEANDDEBUG_PSEL_TRACEDATA2_PIN_Pos (0UL) /*!< Position of PIN field. */
#define TRACEANDDEBUG_PSEL_TRACEDATA2_PIN_Msk (0x1FUL << TRACEANDDEBUG_PSEL_TRACEDATA2_PIN_Pos) /*!< Bit mask of PIN field. */

/* Register: TRACEANDDEBUG_PSEL_TRACEDATA3 */
/* Description: Pin number configuration for TraceData3 signal */

/* Bit 31 : Connection */
#define TRACEANDDEBUG_PSEL_TRACEDATA3_CONNECT_Pos (31UL) /*!< Position of CONNECT field. */
#define TRACEANDDEBUG_PSEL_TRACEDATA3_CONNECT_Msk (0x1UL << TRACEANDDEBUG_PSEL_TRACEDATA3_CONNECT_Pos) /*!< Bit mask of CONNECT field. */
#define TRACEANDDEBUG_PSEL_TRACEDATA3_CONNECT_Connected (0UL) /*!< Connect */
#define TRACEANDDEBUG_PSEL_TRACEDATA3_CONNECT_Disconnected (1UL) /*!< Disconnect */

/* Bits 4..0 : Pin number */
#define TRACEANDDEBUG_PSEL_TRACEDATA3_PIN_Pos (0UL) /*!< Position of PIN field. */
#define TRACEANDDEBUG_PSEL_TRACEDATA3_PIN_Msk (0x1FUL << TRACEANDDEBUG_PSEL_TRACEDATA3_PIN_Pos) /*!< Bit mask of PIN field. */

/* Register: TRACEANDDEBUG_TRACEPORTSPEED */
/* Description: Trace port speed selection */

/* Bits 1..0 : Speed of Trace Port clock. Note that the TRACECLK pin will output this clock divided by two. */
#define TRACEANDDEBUG_TRACEPORTSPEED_TRACEPORTSPEED_Pos (0UL) /*!< Position of TRACEPORTSPEED field. */
#define TRACEANDDEBUG_TRACEPORTSPEED_TRACEPORTSPEED_Msk (0x3UL << TRACEANDDEBUG_TRACEPORTSPEED_TRACEPORTSPEED_Pos) /*!< Bit mask of TRACEPORTSPEED field. */
#define TRACEANDDEBUG_TRACEPORTSPEED_TRACEPORTSPEED_32MHz (0UL) /*!< 32 MHz Trace Port clock (TRACECLK = 16 MHz) */
#define TRACEANDDEBUG_TRACEPORTSPEED_TRACEPORTSPEED_16MHz (1UL) /*!< 16 MHz Trace Port clock (TRACECLK = 8 MHz) */
#define TRACEANDDEBUG_TRACEPORTSPEED_TRACEPORTSPEED_8MHz (2UL) /*!< 8 MHz Trace Port clock (TRACECLK = 4 MHz) */
#define TRACEANDDEBUG_TRACEPORTSPEED_TRACEPORTSPEED_4MHz (3UL) /*!< 4 MHz Trace Port clock (TRACECLK = 2 MHz) */

/* Register: TRACEANDDEBUG_SWOSEL */
/* Description: Connect the SWO to the TPIU TRACEDATA[0] */

/* Bit 0 :   */
#define TRACEANDDEBUG_SWOSEL_SWOSEL_Pos (0UL) /*!< Position of SWOSEL field. */
#define TRACEANDDEBUG_SWOSEL_SWOSEL_Msk (0x1UL << TRACEANDDEBUG_SWOSEL_SWOSEL_Pos) /*!< Bit mask of SWOSEL field. */
#define TRACEANDDEBUG_SWOSEL_SWOSEL_TRACEDATA0SEL (0UL) /*!< Connect the TRACEDATA[0] to the TPIU TRACEDATA[0] */
#define TRACEANDDEBUG_SWOSEL_SWOSEL_SWOSEL (1UL) /*!< Connect the SWO to the TPIU TRACEDATA[0] */


/* Peripheral: TRACEDELAYREG */
/* Description: Trace delay register */

/* Register: TRACEDELAYREG_DELAY_REG_CONFIG */
/* Description: Configuration register for DELAY_REG delay */

/* Bits 4..0 : Register write delay, configurable between 0 and 31 clock cycles. Delay between apbPEnable and
		apbPReady is adjusted to the configured value, except for the small values, when minimum interconnect
		delay exist. */
#define TRACEDELAYREG_DELAY_REG_CONFIG_DELAY_REG_CONFIG_Pos (0UL) /*!< Position of DELAY_REG_CONFIG field. */
#define TRACEDELAYREG_DELAY_REG_CONFIG_DELAY_REG_CONFIG_Msk (0x1FUL << TRACEDELAYREG_DELAY_REG_CONFIG_DELAY_REG_CONFIG_Pos) /*!< Bit mask of DELAY_REG_CONFIG field. */

/* Register: TRACEDELAYREG_DELAY_REG */
/* Description: Dummy register with adjustable write delay. Occupies 0x100 address range i.e. 256bytes */

/* Bits 31..0 : Dummy register with adjustable write delay */
#define TRACEDELAYREG_DELAY_REG_DELAY_REG_Pos (0UL) /*!< Position of DELAY_REG field. */
#define TRACEDELAYREG_DELAY_REG_DELAY_REG_Msk (0xFFFFFFFFUL << TRACEDELAYREG_DELAY_REG_DELAY_REG_Pos) /*!< Bit mask of DELAY_REG field. */


/* Peripheral: TWIM */
/* Description: I2C compatible Two-Wire Master Interface with EasyDMA */

/* Register: TWIM_TASKS_STARTRX */
/* Description: Start TWI receive sequence */

/* Bit 0 : Start TWI receive sequence */
#define TWIM_TASKS_STARTRX_TASKS_STARTRX_Pos (0UL) /*!< Position of TASKS_STARTRX field. */
#define TWIM_TASKS_STARTRX_TASKS_STARTRX_Msk (0x1UL << TWIM_TASKS_STARTRX_TASKS_STARTRX_Pos) /*!< Bit mask of TASKS_STARTRX field. */
#define TWIM_TASKS_STARTRX_TASKS_STARTRX_Trigger (1UL) /*!< Trigger task */

/* Register: TWIM_TASKS_STARTTX */
/* Description: Start TWI transmit sequence */

/* Bit 0 : Start TWI transmit sequence */
#define TWIM_TASKS_STARTTX_TASKS_STARTTX_Pos (0UL) /*!< Position of TASKS_STARTTX field. */
#define TWIM_TASKS_STARTTX_TASKS_STARTTX_Msk (0x1UL << TWIM_TASKS_STARTTX_TASKS_STARTTX_Pos) /*!< Bit mask of TASKS_STARTTX field. */
#define TWIM_TASKS_STARTTX_TASKS_STARTTX_Trigger (1UL) /*!< Trigger task */

/* Register: TWIM_TASKS_STOP */
/* Description: Stop TWI transaction. Must be issued while the TWI master is not suspended. */

/* Bit 0 : Stop TWI transaction. Must be issued while the TWI master is not suspended. */
#define TWIM_TASKS_STOP_TASKS_STOP_Pos (0UL) /*!< Position of TASKS_STOP field. */
#define TWIM_TASKS_STOP_TASKS_STOP_Msk (0x1UL << TWIM_TASKS_STOP_TASKS_STOP_Pos) /*!< Bit mask of TASKS_STOP field. */
#define TWIM_TASKS_STOP_TASKS_STOP_Trigger (1UL) /*!< Trigger task */

/* Register: TWIM_TASKS_SUSPEND */
/* Description: Suspend TWI transaction */

/* Bit 0 : Suspend TWI transaction */
#define TWIM_TASKS_SUSPEND_TASKS_SUSPEND_Pos (0UL) /*!< Position of TASKS_SUSPEND field. */
#define TWIM_TASKS_SUSPEND_TASKS_SUSPEND_Msk (0x1UL << TWIM_TASKS_SUSPEND_TASKS_SUSPEND_Pos) /*!< Bit mask of TASKS_SUSPEND field. */
#define TWIM_TASKS_SUSPEND_TASKS_SUSPEND_Trigger (1UL) /*!< Trigger task */

/* Register: TWIM_TASKS_RESUME */
/* Description: Resume TWI transaction */

/* Bit 0 : Resume TWI transaction */
#define TWIM_TASKS_RESUME_TASKS_RESUME_Pos (0UL) /*!< Position of TASKS_RESUME field. */
#define TWIM_TASKS_RESUME_TASKS_RESUME_Msk (0x1UL << TWIM_TASKS_RESUME_TASKS_RESUME_Pos) /*!< Bit mask of TASKS_RESUME field. */
#define TWIM_TASKS_RESUME_TASKS_RESUME_Trigger (1UL) /*!< Trigger task */

/* Register: TWIM_EVENTS_STOPPED */
/* Description: TWI stopped */

/* Bit 0 : TWI stopped */
#define TWIM_EVENTS_STOPPED_EVENTS_STOPPED_Pos (0UL) /*!< Position of EVENTS_STOPPED field. */
#define TWIM_EVENTS_STOPPED_EVENTS_STOPPED_Msk (0x1UL << TWIM_EVENTS_STOPPED_EVENTS_STOPPED_Pos) /*!< Bit mask of EVENTS_STOPPED field. */
#define TWIM_EVENTS_STOPPED_EVENTS_STOPPED_NotGenerated (0UL) /*!< Event not generated */
#define TWIM_EVENTS_STOPPED_EVENTS_STOPPED_Generated (1UL) /*!< Event generated */

/* Register: TWIM_EVENTS_ENDRX */
/* Description: End of RXD buffer access by EasyDMA */

/* Bit 0 : End of RXD buffer access by EasyDMA */
#define TWIM_EVENTS_ENDRX_EVENTS_ENDRX_Pos (0UL) /*!< Position of EVENTS_ENDRX field. */
#define TWIM_EVENTS_ENDRX_EVENTS_ENDRX_Msk (0x1UL << TWIM_EVENTS_ENDRX_EVENTS_ENDRX_Pos) /*!< Bit mask of EVENTS_ENDRX field. */
#define TWIM_EVENTS_ENDRX_EVENTS_ENDRX_NotGenerated (0UL) /*!< Event not generated */
#define TWIM_EVENTS_ENDRX_EVENTS_ENDRX_Generated (1UL) /*!< Event generated */

/* Register: TWIM_EVENTS_ENDTX */
/* Description: END of TXD buffer access by EasyDMA */

/* Bit 0 : END of TXD buffer access by EasyDMA */
#define TWIM_EVENTS_ENDTX_EVENTS_ENDTX_Pos (0UL) /*!< Position of EVENTS_ENDTX field. */
#define TWIM_EVENTS_ENDTX_EVENTS_ENDTX_Msk (0x1UL << TWIM_EVENTS_ENDTX_EVENTS_ENDTX_Pos) /*!< Bit mask of EVENTS_ENDTX field. */
#define TWIM_EVENTS_ENDTX_EVENTS_ENDTX_NotGenerated (0UL) /*!< Event not generated */
#define TWIM_EVENTS_ENDTX_EVENTS_ENDTX_Generated (1UL) /*!< Event generated */

/* Register: TWIM_EVENTS_ERROR */
/* Description: TWI error */

/* Bit 0 : TWI error */
#define TWIM_EVENTS_ERROR_EVENTS_ERROR_Pos (0UL) /*!< Position of EVENTS_ERROR field. */
#define TWIM_EVENTS_ERROR_EVENTS_ERROR_Msk (0x1UL << TWIM_EVENTS_ERROR_EVENTS_ERROR_Pos) /*!< Bit mask of EVENTS_ERROR field. */
#define TWIM_EVENTS_ERROR_EVENTS_ERROR_NotGenerated (0UL) /*!< Event not generated */
#define TWIM_EVENTS_ERROR_EVENTS_ERROR_Generated (1UL) /*!< Event generated */

/* Register: TWIM_EVENTS_BB */
/* Description: TWI byte boundary, generated before each byte that is sent or received */

/* Bit 0 : TWI byte boundary, generated before each byte that is sent or received */
#define TWIM_EVENTS_BB_EVENTS_BB_Pos (0UL) /*!< Position of EVENTS_BB field. */
#define TWIM_EVENTS_BB_EVENTS_BB_Msk (0x1UL << TWIM_EVENTS_BB_EVENTS_BB_Pos) /*!< Bit mask of EVENTS_BB field. */
#define TWIM_EVENTS_BB_EVENTS_BB_NotGenerated (0UL) /*!< Event not generated */
#define TWIM_EVENTS_BB_EVENTS_BB_Generated (1UL) /*!< Event generated */

/* Register: TWIM_EVENTS_SUSPENDED */
/* Description: Last byte has been sent out after the SUSPEND task has been issued, TWI traffic is now suspended. */

/* Bit 0 : Last byte has been sent out after the SUSPEND task has been issued, TWI traffic is now suspended. */
#define TWIM_EVENTS_SUSPENDED_EVENTS_SUSPENDED_Pos (0UL) /*!< Position of EVENTS_SUSPENDED field. */
#define TWIM_EVENTS_SUSPENDED_EVENTS_SUSPENDED_Msk (0x1UL << TWIM_EVENTS_SUSPENDED_EVENTS_SUSPENDED_Pos) /*!< Bit mask of EVENTS_SUSPENDED field. */
#define TWIM_EVENTS_SUSPENDED_EVENTS_SUSPENDED_NotGenerated (0UL) /*!< Event not generated */
#define TWIM_EVENTS_SUSPENDED_EVENTS_SUSPENDED_Generated (1UL) /*!< Event generated */

/* Register: TWIM_EVENTS_RXSTARTED */
/* Description: Receive sequence started */

/* Bit 0 : Receive sequence started */
#define TWIM_EVENTS_RXSTARTED_EVENTS_RXSTARTED_Pos (0UL) /*!< Position of EVENTS_RXSTARTED field. */
#define TWIM_EVENTS_RXSTARTED_EVENTS_RXSTARTED_Msk (0x1UL << TWIM_EVENTS_RXSTARTED_EVENTS_RXSTARTED_Pos) /*!< Bit mask of EVENTS_RXSTARTED field. */
#define TWIM_EVENTS_RXSTARTED_EVENTS_RXSTARTED_NotGenerated (0UL) /*!< Event not generated */
#define TWIM_EVENTS_RXSTARTED_EVENTS_RXSTARTED_Generated (1UL) /*!< Event generated */

/* Register: TWIM_EVENTS_TXSTARTED */
/* Description: Transmit sequence started */

/* Bit 0 : Transmit sequence started */
#define TWIM_EVENTS_TXSTARTED_EVENTS_TXSTARTED_Pos (0UL) /*!< Position of EVENTS_TXSTARTED field. */
#define TWIM_EVENTS_TXSTARTED_EVENTS_TXSTARTED_Msk (0x1UL << TWIM_EVENTS_TXSTARTED_EVENTS_TXSTARTED_Pos) /*!< Bit mask of EVENTS_TXSTARTED field. */
#define TWIM_EVENTS_TXSTARTED_EVENTS_TXSTARTED_NotGenerated (0UL) /*!< Event not generated */
#define TWIM_EVENTS_TXSTARTED_EVENTS_TXSTARTED_Generated (1UL) /*!< Event generated */

/* Register: TWIM_EVENTS_LASTRX */
/* Description: Byte boundary, starting to receive the last byte */

/* Bit 0 : Byte boundary, starting to receive the last byte */
#define TWIM_EVENTS_LASTRX_EVENTS_LASTRX_Pos (0UL) /*!< Position of EVENTS_LASTRX field. */
#define TWIM_EVENTS_LASTRX_EVENTS_LASTRX_Msk (0x1UL << TWIM_EVENTS_LASTRX_EVENTS_LASTRX_Pos) /*!< Bit mask of EVENTS_LASTRX field. */
#define TWIM_EVENTS_LASTRX_EVENTS_LASTRX_NotGenerated (0UL) /*!< Event not generated */
#define TWIM_EVENTS_LASTRX_EVENTS_LASTRX_Generated (1UL) /*!< Event generated */

/* Register: TWIM_EVENTS_LASTTX */
/* Description: Byte boundary, starting to transmit the last byte */

/* Bit 0 : Byte boundary, starting to transmit the last byte */
#define TWIM_EVENTS_LASTTX_EVENTS_LASTTX_Pos (0UL) /*!< Position of EVENTS_LASTTX field. */
#define TWIM_EVENTS_LASTTX_EVENTS_LASTTX_Msk (0x1UL << TWIM_EVENTS_LASTTX_EVENTS_LASTTX_Pos) /*!< Bit mask of EVENTS_LASTTX field. */
#define TWIM_EVENTS_LASTTX_EVENTS_LASTTX_NotGenerated (0UL) /*!< Event not generated */
#define TWIM_EVENTS_LASTTX_EVENTS_LASTTX_Generated (1UL) /*!< Event generated */

/* Register: TWIM_SHORTS */
/* Description: Shortcuts between local events and tasks */

/* Bit 12 : Shortcut between event LASTRX and task STOP */
#define TWIM_SHORTS_LASTRX_STOP_Pos (12UL) /*!< Position of LASTRX_STOP field. */
#define TWIM_SHORTS_LASTRX_STOP_Msk (0x1UL << TWIM_SHORTS_LASTRX_STOP_Pos) /*!< Bit mask of LASTRX_STOP field. */
#define TWIM_SHORTS_LASTRX_STOP_Disabled (0UL) /*!< Disable shortcut */
#define TWIM_SHORTS_LASTRX_STOP_Enabled (1UL) /*!< Enable shortcut */

/* Bit 11 : Shortcut between event LASTRX and task SUSPEND */
#define TWIM_SHORTS_LASTRX_SUSPEND_Pos (11UL) /*!< Position of LASTRX_SUSPEND field. */
#define TWIM_SHORTS_LASTRX_SUSPEND_Msk (0x1UL << TWIM_SHORTS_LASTRX_SUSPEND_Pos) /*!< Bit mask of LASTRX_SUSPEND field. */
#define TWIM_SHORTS_LASTRX_SUSPEND_Disabled (0UL) /*!< Disable shortcut */
#define TWIM_SHORTS_LASTRX_SUSPEND_Enabled (1UL) /*!< Enable shortcut */

/* Bit 10 : Shortcut between event LASTRX and task STARTTX */
#define TWIM_SHORTS_LASTRX_STARTTX_Pos (10UL) /*!< Position of LASTRX_STARTTX field. */
#define TWIM_SHORTS_LASTRX_STARTTX_Msk (0x1UL << TWIM_SHORTS_LASTRX_STARTTX_Pos) /*!< Bit mask of LASTRX_STARTTX field. */
#define TWIM_SHORTS_LASTRX_STARTTX_Disabled (0UL) /*!< Disable shortcut */
#define TWIM_SHORTS_LASTRX_STARTTX_Enabled (1UL) /*!< Enable shortcut */

/* Bit 9 : Shortcut between event LASTTX and task STOP */
#define TWIM_SHORTS_LASTTX_STOP_Pos (9UL) /*!< Position of LASTTX_STOP field. */
#define TWIM_SHORTS_LASTTX_STOP_Msk (0x1UL << TWIM_SHORTS_LASTTX_STOP_Pos) /*!< Bit mask of LASTTX_STOP field. */
#define TWIM_SHORTS_LASTTX_STOP_Disabled (0UL) /*!< Disable shortcut */
#define TWIM_SHORTS_LASTTX_STOP_Enabled (1UL) /*!< Enable shortcut */

/* Bit 8 : Shortcut between event LASTTX and task SUSPEND */
#define TWIM_SHORTS_LASTTX_SUSPEND_Pos (8UL) /*!< Position of LASTTX_SUSPEND field. */
#define TWIM_SHORTS_LASTTX_SUSPEND_Msk (0x1UL << TWIM_SHORTS_LASTTX_SUSPEND_Pos) /*!< Bit mask of LASTTX_SUSPEND field. */
#define TWIM_SHORTS_LASTTX_SUSPEND_Disabled (0UL) /*!< Disable shortcut */
#define TWIM_SHORTS_LASTTX_SUSPEND_Enabled (1UL) /*!< Enable shortcut */

/* Bit 7 : Shortcut between event LASTTX and task STARTRX */
#define TWIM_SHORTS_LASTTX_STARTRX_Pos (7UL) /*!< Position of LASTTX_STARTRX field. */
#define TWIM_SHORTS_LASTTX_STARTRX_Msk (0x1UL << TWIM_SHORTS_LASTTX_STARTRX_Pos) /*!< Bit mask of LASTTX_STARTRX field. */
#define TWIM_SHORTS_LASTTX_STARTRX_Disabled (0UL) /*!< Disable shortcut */
#define TWIM_SHORTS_LASTTX_STARTRX_Enabled (1UL) /*!< Enable shortcut */

/* Register: TWIM_INTEN */
/* Description: Enable or disable interrupt */

/* Bit 24 : Enable or disable interrupt for event LASTTX */
#define TWIM_INTEN_LASTTX_Pos (24UL) /*!< Position of LASTTX field. */
#define TWIM_INTEN_LASTTX_Msk (0x1UL << TWIM_INTEN_LASTTX_Pos) /*!< Bit mask of LASTTX field. */
#define TWIM_INTEN_LASTTX_Disabled (0UL) /*!< Disable */
#define TWIM_INTEN_LASTTX_Enabled (1UL) /*!< Enable */

/* Bit 23 : Enable or disable interrupt for event LASTRX */
#define TWIM_INTEN_LASTRX_Pos (23UL) /*!< Position of LASTRX field. */
#define TWIM_INTEN_LASTRX_Msk (0x1UL << TWIM_INTEN_LASTRX_Pos) /*!< Bit mask of LASTRX field. */
#define TWIM_INTEN_LASTRX_Disabled (0UL) /*!< Disable */
#define TWIM_INTEN_LASTRX_Enabled (1UL) /*!< Enable */

/* Bit 20 : Enable or disable interrupt for event TXSTARTED */
#define TWIM_INTEN_TXSTARTED_Pos (20UL) /*!< Position of TXSTARTED field. */
#define TWIM_INTEN_TXSTARTED_Msk (0x1UL << TWIM_INTEN_TXSTARTED_Pos) /*!< Bit mask of TXSTARTED field. */
#define TWIM_INTEN_TXSTARTED_Disabled (0UL) /*!< Disable */
#define TWIM_INTEN_TXSTARTED_Enabled (1UL) /*!< Enable */

/* Bit 19 : Enable or disable interrupt for event RXSTARTED */
#define TWIM_INTEN_RXSTARTED_Pos (19UL) /*!< Position of RXSTARTED field. */
#define TWIM_INTEN_RXSTARTED_Msk (0x1UL << TWIM_INTEN_RXSTARTED_Pos) /*!< Bit mask of RXSTARTED field. */
#define TWIM_INTEN_RXSTARTED_Disabled (0UL) /*!< Disable */
#define TWIM_INTEN_RXSTARTED_Enabled (1UL) /*!< Enable */

/* Bit 18 : Enable or disable interrupt for event SUSPENDED */
#define TWIM_INTEN_SUSPENDED_Pos (18UL) /*!< Position of SUSPENDED field. */
#define TWIM_INTEN_SUSPENDED_Msk (0x1UL << TWIM_INTEN_SUSPENDED_Pos) /*!< Bit mask of SUSPENDED field. */
#define TWIM_INTEN_SUSPENDED_Disabled (0UL) /*!< Disable */
#define TWIM_INTEN_SUSPENDED_Enabled (1UL) /*!< Enable */

/* Bit 14 : Enable or disable interrupt for event BB */
#define TWIM_INTEN_BB_Pos (14UL) /*!< Position of BB field. */
#define TWIM_INTEN_BB_Msk (0x1UL << TWIM_INTEN_BB_Pos) /*!< Bit mask of BB field. */
#define TWIM_INTEN_BB_Disabled (0UL) /*!< Disable */
#define TWIM_INTEN_BB_Enabled (1UL) /*!< Enable */

/* Bit 9 : Enable or disable interrupt for event ERROR */
#define TWIM_INTEN_ERROR_Pos (9UL) /*!< Position of ERROR field. */
#define TWIM_INTEN_ERROR_Msk (0x1UL << TWIM_INTEN_ERROR_Pos) /*!< Bit mask of ERROR field. */
#define TWIM_INTEN_ERROR_Disabled (0UL) /*!< Disable */
#define TWIM_INTEN_ERROR_Enabled (1UL) /*!< Enable */

/* Bit 8 : Enable or disable interrupt for event ENDTX */
#define TWIM_INTEN_ENDTX_Pos (8UL) /*!< Position of ENDTX field. */
#define TWIM_INTEN_ENDTX_Msk (0x1UL << TWIM_INTEN_ENDTX_Pos) /*!< Bit mask of ENDTX field. */
#define TWIM_INTEN_ENDTX_Disabled (0UL) /*!< Disable */
#define TWIM_INTEN_ENDTX_Enabled (1UL) /*!< Enable */

/* Bit 4 : Enable or disable interrupt for event ENDRX */
#define TWIM_INTEN_ENDRX_Pos (4UL) /*!< Position of ENDRX field. */
#define TWIM_INTEN_ENDRX_Msk (0x1UL << TWIM_INTEN_ENDRX_Pos) /*!< Bit mask of ENDRX field. */
#define TWIM_INTEN_ENDRX_Disabled (0UL) /*!< Disable */
#define TWIM_INTEN_ENDRX_Enabled (1UL) /*!< Enable */

/* Bit 1 : Enable or disable interrupt for event STOPPED */
#define TWIM_INTEN_STOPPED_Pos (1UL) /*!< Position of STOPPED field. */
#define TWIM_INTEN_STOPPED_Msk (0x1UL << TWIM_INTEN_STOPPED_Pos) /*!< Bit mask of STOPPED field. */
#define TWIM_INTEN_STOPPED_Disabled (0UL) /*!< Disable */
#define TWIM_INTEN_STOPPED_Enabled (1UL) /*!< Enable */

/* Register: TWIM_INTENSET */
/* Description: Enable interrupt */

/* Bit 24 : Write '1' to enable interrupt for event LASTTX */
#define TWIM_INTENSET_LASTTX_Pos (24UL) /*!< Position of LASTTX field. */
#define TWIM_INTENSET_LASTTX_Msk (0x1UL << TWIM_INTENSET_LASTTX_Pos) /*!< Bit mask of LASTTX field. */
#define TWIM_INTENSET_LASTTX_Disabled (0UL) /*!< Read: Disabled */
#define TWIM_INTENSET_LASTTX_Enabled (1UL) /*!< Read: Enabled */
#define TWIM_INTENSET_LASTTX_Set (1UL) /*!< Enable */

/* Bit 23 : Write '1' to enable interrupt for event LASTRX */
#define TWIM_INTENSET_LASTRX_Pos (23UL) /*!< Position of LASTRX field. */
#define TWIM_INTENSET_LASTRX_Msk (0x1UL << TWIM_INTENSET_LASTRX_Pos) /*!< Bit mask of LASTRX field. */
#define TWIM_INTENSET_LASTRX_Disabled (0UL) /*!< Read: Disabled */
#define TWIM_INTENSET_LASTRX_Enabled (1UL) /*!< Read: Enabled */
#define TWIM_INTENSET_LASTRX_Set (1UL) /*!< Enable */

/* Bit 20 : Write '1' to enable interrupt for event TXSTARTED */
#define TWIM_INTENSET_TXSTARTED_Pos (20UL) /*!< Position of TXSTARTED field. */
#define TWIM_INTENSET_TXSTARTED_Msk (0x1UL << TWIM_INTENSET_TXSTARTED_Pos) /*!< Bit mask of TXSTARTED field. */
#define TWIM_INTENSET_TXSTARTED_Disabled (0UL) /*!< Read: Disabled */
#define TWIM_INTENSET_TXSTARTED_Enabled (1UL) /*!< Read: Enabled */
#define TWIM_INTENSET_TXSTARTED_Set (1UL) /*!< Enable */

/* Bit 19 : Write '1' to enable interrupt for event RXSTARTED */
#define TWIM_INTENSET_RXSTARTED_Pos (19UL) /*!< Position of RXSTARTED field. */
#define TWIM_INTENSET_RXSTARTED_Msk (0x1UL << TWIM_INTENSET_RXSTARTED_Pos) /*!< Bit mask of RXSTARTED field. */
#define TWIM_INTENSET_RXSTARTED_Disabled (0UL) /*!< Read: Disabled */
#define TWIM_INTENSET_RXSTARTED_Enabled (1UL) /*!< Read: Enabled */
#define TWIM_INTENSET_RXSTARTED_Set (1UL) /*!< Enable */

/* Bit 18 : Write '1' to enable interrupt for event SUSPENDED */
#define TWIM_INTENSET_SUSPENDED_Pos (18UL) /*!< Position of SUSPENDED field. */
#define TWIM_INTENSET_SUSPENDED_Msk (0x1UL << TWIM_INTENSET_SUSPENDED_Pos) /*!< Bit mask of SUSPENDED field. */
#define TWIM_INTENSET_SUSPENDED_Disabled (0UL) /*!< Read: Disabled */
#define TWIM_INTENSET_SUSPENDED_Enabled (1UL) /*!< Read: Enabled */
#define TWIM_INTENSET_SUSPENDED_Set (1UL) /*!< Enable */

/* Bit 14 : Write '1' to enable interrupt for event BB */
#define TWIM_INTENSET_BB_Pos (14UL) /*!< Position of BB field. */
#define TWIM_INTENSET_BB_Msk (0x1UL << TWIM_INTENSET_BB_Pos) /*!< Bit mask of BB field. */
#define TWIM_INTENSET_BB_Disabled (0UL) /*!< Read: Disabled */
#define TWIM_INTENSET_BB_Enabled (1UL) /*!< Read: Enabled */
#define TWIM_INTENSET_BB_Set (1UL) /*!< Enable */

/* Bit 9 : Write '1' to enable interrupt for event ERROR */
#define TWIM_INTENSET_ERROR_Pos (9UL) /*!< Position of ERROR field. */
#define TWIM_INTENSET_ERROR_Msk (0x1UL << TWIM_INTENSET_ERROR_Pos) /*!< Bit mask of ERROR field. */
#define TWIM_INTENSET_ERROR_Disabled (0UL) /*!< Read: Disabled */
#define TWIM_INTENSET_ERROR_Enabled (1UL) /*!< Read: Enabled */
#define TWIM_INTENSET_ERROR_Set (1UL) /*!< Enable */

/* Bit 8 : Write '1' to enable interrupt for event ENDTX */
#define TWIM_INTENSET_ENDTX_Pos (8UL) /*!< Position of ENDTX field. */
#define TWIM_INTENSET_ENDTX_Msk (0x1UL << TWIM_INTENSET_ENDTX_Pos) /*!< Bit mask of ENDTX field. */
#define TWIM_INTENSET_ENDTX_Disabled (0UL) /*!< Read: Disabled */
#define TWIM_INTENSET_ENDTX_Enabled (1UL) /*!< Read: Enabled */
#define TWIM_INTENSET_ENDTX_Set (1UL) /*!< Enable */

/* Bit 4 : Write '1' to enable interrupt for event ENDRX */
#define TWIM_INTENSET_ENDRX_Pos (4UL) /*!< Position of ENDRX field. */
#define TWIM_INTENSET_ENDRX_Msk (0x1UL << TWIM_INTENSET_ENDRX_Pos) /*!< Bit mask of ENDRX field. */
#define TWIM_INTENSET_ENDRX_Disabled (0UL) /*!< Read: Disabled */
#define TWIM_INTENSET_ENDRX_Enabled (1UL) /*!< Read: Enabled */
#define TWIM_INTENSET_ENDRX_Set (1UL) /*!< Enable */

/* Bit 1 : Write '1' to enable interrupt for event STOPPED */
#define TWIM_INTENSET_STOPPED_Pos (1UL) /*!< Position of STOPPED field. */
#define TWIM_INTENSET_STOPPED_Msk (0x1UL << TWIM_INTENSET_STOPPED_Pos) /*!< Bit mask of STOPPED field. */
#define TWIM_INTENSET_STOPPED_Disabled (0UL) /*!< Read: Disabled */
#define TWIM_INTENSET_STOPPED_Enabled (1UL) /*!< Read: Enabled */
#define TWIM_INTENSET_STOPPED_Set (1UL) /*!< Enable */

/* Register: TWIM_INTENCLR */
/* Description: Disable interrupt */

/* Bit 24 : Write '1' to disable interrupt for event LASTTX */
#define TWIM_INTENCLR_LASTTX_Pos (24UL) /*!< Position of LASTTX field. */
#define TWIM_INTENCLR_LASTTX_Msk (0x1UL << TWIM_INTENCLR_LASTTX_Pos) /*!< Bit mask of LASTTX field. */
#define TWIM_INTENCLR_LASTTX_Disabled (0UL) /*!< Read: Disabled */
#define TWIM_INTENCLR_LASTTX_Enabled (1UL) /*!< Read: Enabled */
#define TWIM_INTENCLR_LASTTX_Clear (1UL) /*!< Disable */

/* Bit 23 : Write '1' to disable interrupt for event LASTRX */
#define TWIM_INTENCLR_LASTRX_Pos (23UL) /*!< Position of LASTRX field. */
#define TWIM_INTENCLR_LASTRX_Msk (0x1UL << TWIM_INTENCLR_LASTRX_Pos) /*!< Bit mask of LASTRX field. */
#define TWIM_INTENCLR_LASTRX_Disabled (0UL) /*!< Read: Disabled */
#define TWIM_INTENCLR_LASTRX_Enabled (1UL) /*!< Read: Enabled */
#define TWIM_INTENCLR_LASTRX_Clear (1UL) /*!< Disable */

/* Bit 20 : Write '1' to disable interrupt for event TXSTARTED */
#define TWIM_INTENCLR_TXSTARTED_Pos (20UL) /*!< Position of TXSTARTED field. */
#define TWIM_INTENCLR_TXSTARTED_Msk (0x1UL << TWIM_INTENCLR_TXSTARTED_Pos) /*!< Bit mask of TXSTARTED field. */
#define TWIM_INTENCLR_TXSTARTED_Disabled (0UL) /*!< Read: Disabled */
#define TWIM_INTENCLR_TXSTARTED_Enabled (1UL) /*!< Read: Enabled */
#define TWIM_INTENCLR_TXSTARTED_Clear (1UL) /*!< Disable */

/* Bit 19 : Write '1' to disable interrupt for event RXSTARTED */
#define TWIM_INTENCLR_RXSTARTED_Pos (19UL) /*!< Position of RXSTARTED field. */
#define TWIM_INTENCLR_RXSTARTED_Msk (0x1UL << TWIM_INTENCLR_RXSTARTED_Pos) /*!< Bit mask of RXSTARTED field. */
#define TWIM_INTENCLR_RXSTARTED_Disabled (0UL) /*!< Read: Disabled */
#define TWIM_INTENCLR_RXSTARTED_Enabled (1UL) /*!< Read: Enabled */
#define TWIM_INTENCLR_RXSTARTED_Clear (1UL) /*!< Disable */

/* Bit 18 : Write '1' to disable interrupt for event SUSPENDED */
#define TWIM_INTENCLR_SUSPENDED_Pos (18UL) /*!< Position of SUSPENDED field. */
#define TWIM_INTENCLR_SUSPENDED_Msk (0x1UL << TWIM_INTENCLR_SUSPENDED_Pos) /*!< Bit mask of SUSPENDED field. */
#define TWIM_INTENCLR_SUSPENDED_Disabled (0UL) /*!< Read: Disabled */
#define TWIM_INTENCLR_SUSPENDED_Enabled (1UL) /*!< Read: Enabled */
#define TWIM_INTENCLR_SUSPENDED_Clear (1UL) /*!< Disable */

/* Bit 14 : Write '1' to disable interrupt for event BB */
#define TWIM_INTENCLR_BB_Pos (14UL) /*!< Position of BB field. */
#define TWIM_INTENCLR_BB_Msk (0x1UL << TWIM_INTENCLR_BB_Pos) /*!< Bit mask of BB field. */
#define TWIM_INTENCLR_BB_Disabled (0UL) /*!< Read: Disabled */
#define TWIM_INTENCLR_BB_Enabled (1UL) /*!< Read: Enabled */
#define TWIM_INTENCLR_BB_Clear (1UL) /*!< Disable */

/* Bit 9 : Write '1' to disable interrupt for event ERROR */
#define TWIM_INTENCLR_ERROR_Pos (9UL) /*!< Position of ERROR field. */
#define TWIM_INTENCLR_ERROR_Msk (0x1UL << TWIM_INTENCLR_ERROR_Pos) /*!< Bit mask of ERROR field. */
#define TWIM_INTENCLR_ERROR_Disabled (0UL) /*!< Read: Disabled */
#define TWIM_INTENCLR_ERROR_Enabled (1UL) /*!< Read: Enabled */
#define TWIM_INTENCLR_ERROR_Clear (1UL) /*!< Disable */

/* Bit 8 : Write '1' to disable interrupt for event ENDTX */
#define TWIM_INTENCLR_ENDTX_Pos (8UL) /*!< Position of ENDTX field. */
#define TWIM_INTENCLR_ENDTX_Msk (0x1UL << TWIM_INTENCLR_ENDTX_Pos) /*!< Bit mask of ENDTX field. */
#define TWIM_INTENCLR_ENDTX_Disabled (0UL) /*!< Read: Disabled */
#define TWIM_INTENCLR_ENDTX_Enabled (1UL) /*!< Read: Enabled */
#define TWIM_INTENCLR_ENDTX_Clear (1UL) /*!< Disable */

/* Bit 4 : Write '1' to disable interrupt for event ENDRX */
#define TWIM_INTENCLR_ENDRX_Pos (4UL) /*!< Position of ENDRX field. */
#define TWIM_INTENCLR_ENDRX_Msk (0x1UL << TWIM_INTENCLR_ENDRX_Pos) /*!< Bit mask of ENDRX field. */
#define TWIM_INTENCLR_ENDRX_Disabled (0UL) /*!< Read: Disabled */
#define TWIM_INTENCLR_ENDRX_Enabled (1UL) /*!< Read: Enabled */
#define TWIM_INTENCLR_ENDRX_Clear (1UL) /*!< Disable */

/* Bit 1 : Write '1' to disable interrupt for event STOPPED */
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
#define TWIM_FREQUENCY_FREQUENCY_K100 (0x00500000UL) /*!< 100 kbps */
#define TWIM_FREQUENCY_FREQUENCY_K250 (0x00C80000UL) /*!< 250 kbps */
#define TWIM_FREQUENCY_FREQUENCY_K400 (0x01400000UL) /*!< 400 kbps */

/* Register: TWIM_RXD_PTR */
/* Description: Data pointer */

/* Bits 31..0 : Data pointer */
#define TWIM_RXD_PTR_PTR_Pos (0UL) /*!< Position of PTR field. */
#define TWIM_RXD_PTR_PTR_Msk (0xFFFFFFFFUL << TWIM_RXD_PTR_PTR_Pos) /*!< Bit mask of PTR field. */

/* Register: TWIM_RXD_MAXCNT */
/* Description: Maximum number of bytes in receive buffer */

/* Bits 15..0 : Maximum number of bytes in receive buffer */
#define TWIM_RXD_MAXCNT_MAXCNT_Pos (0UL) /*!< Position of MAXCNT field. */
#define TWIM_RXD_MAXCNT_MAXCNT_Msk (0xFFFFUL << TWIM_RXD_MAXCNT_MAXCNT_Pos) /*!< Bit mask of MAXCNT field. */

/* Register: TWIM_RXD_AMOUNT */
/* Description: Number of bytes transferred in the last transaction */

/* Bits 15..0 : Number of bytes transferred in the last transaction. In case of NACK error, includes the NACK'ed byte. */
#define TWIM_RXD_AMOUNT_AMOUNT_Pos (0UL) /*!< Position of AMOUNT field. */
#define TWIM_RXD_AMOUNT_AMOUNT_Msk (0xFFFFUL << TWIM_RXD_AMOUNT_AMOUNT_Pos) /*!< Bit mask of AMOUNT field. */

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

/* Bits 15..0 : Maximum number of bytes in transmit buffer */
#define TWIM_TXD_MAXCNT_MAXCNT_Pos (0UL) /*!< Position of MAXCNT field. */
#define TWIM_TXD_MAXCNT_MAXCNT_Msk (0xFFFFUL << TWIM_TXD_MAXCNT_MAXCNT_Pos) /*!< Bit mask of MAXCNT field. */

/* Register: TWIM_TXD_AMOUNT */
/* Description: Number of bytes transferred in the last transaction */

/* Bits 15..0 : Number of bytes transferred in the last transaction. In case of NACK error, includes the NACK'ed byte. */
#define TWIM_TXD_AMOUNT_AMOUNT_Pos (0UL) /*!< Position of AMOUNT field. */
#define TWIM_TXD_AMOUNT_AMOUNT_Msk (0xFFFFUL << TWIM_TXD_AMOUNT_AMOUNT_Pos) /*!< Bit mask of AMOUNT field. */

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
/* Description: Baud rate */

/* Bits 31..0 : Baud-rate */
#define UARTE_BAUDRATE_BAUDRATE_Pos (0UL) /*!< Position of BAUDRATE field. */
#define UARTE_BAUDRATE_BAUDRATE_Msk (0xFFFFFFFFUL << UARTE_BAUDRATE_BAUDRATE_Pos) /*!< Bit mask of BAUDRATE field. */
#define UARTE_BAUDRATE_BAUDRATE_Baud1200 (0x00010000UL) /*!< 1200 baud (actual rate: 1221) */
#define UARTE_BAUDRATE_BAUDRATE_Baud2400 (0x0001F000UL) /*!< 2400 baud (actual rate: 2365) */
#define UARTE_BAUDRATE_BAUDRATE_Baud4800 (0x0003F000UL) /*!< 4800 baud (actual rate: 4807) */
#define UARTE_BAUDRATE_BAUDRATE_Baud9600 (0x0007E000UL) /*!< 9600 baud (actual rate: 9613) */
#define UARTE_BAUDRATE_BAUDRATE_Baud14400 (0x000BD000UL) /*!< 14400 baud (actual rate: 14420) */
#define UARTE_BAUDRATE_BAUDRATE_Baud19200 (0x000FC000UL) /*!< 19200 baud (actual rate: 19226) */
#define UARTE_BAUDRATE_BAUDRATE_Baud28800 (0x00179000UL) /*!< 28800 baud (actual rate: 28767) */
#define UARTE_BAUDRATE_BAUDRATE_Baud38400 (0x001F7000UL) /*!< 38400 baud (actual rate: 38388) */
#define UARTE_BAUDRATE_BAUDRATE_Baud57600 (0x002F3000UL) /*!< 57600 baud (actual rate: 57637) */
#define UARTE_BAUDRATE_BAUDRATE_Baud76800 (0x003EE000UL) /*!< 76800 baud (actual rate: 76775) */
#define UARTE_BAUDRATE_BAUDRATE_Baud115200 (0x005E6000UL) /*!< 115200 baud (actual rate: 115274) */
#define UARTE_BAUDRATE_BAUDRATE_Baud230400 (0x00BC0000UL) /*!< 230400 baud (actual rate: 229885) */
#define UARTE_BAUDRATE_BAUDRATE_Baud250000 (0x00CC8000UL) /*!< 250000 baud */
#define UARTE_BAUDRATE_BAUDRATE_Baud460800 (0x017A0000UL) /*!< 460800 baud (actual rate: 462428) */
#define UARTE_BAUDRATE_BAUDRATE_Baud921600 (0x02F00000UL) /*!< 921600 baud (actual rate: 919540) */
#define UARTE_BAUDRATE_BAUDRATE_Baud1M (0x03300000UL) /*!< 1Mega baud */

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

/* Register: UICR_APPROTECT */
/* Description: Access Port protection */

/* Bits 31..0 : Enable or disable Access Port protection */
#define UICR_APPROTECT_APPROTECT_Pos (0UL) /*!< Position of APPROTECT field. */
#define UICR_APPROTECT_APPROTECT_Msk (0xFFFFFFFFUL << UICR_APPROTECT_APPROTECT_Pos) /*!< Bit mask of APPROTECT field. */
#define UICR_APPROTECT_APPROTECT_Enabled (0x00000000UL) /*!< Any value diferent to 0xFFFFFFFF will make debugger access
		              blocking enabled */
#define UICR_APPROTECT_APPROTECT_Disabled (0xFFFFFFFFUL) /*!< Debugger access blocking disabled */

/* Register: UICR_ERASEPROTECT */
/* Description: Flash erase protection */

/* Bits 31..0 : Protect against erase all and erase UICR */
#define UICR_ERASEPROTECT_ERASEPROTECT_Pos (0UL) /*!< Position of ERASEPROTECT field. */
#define UICR_ERASEPROTECT_ERASEPROTECT_Msk (0xFFFFFFFFUL << UICR_ERASEPROTECT_ERASEPROTECT_Pos) /*!< Bit mask of ERASEPROTECT field. */
#define UICR_ERASEPROTECT_ERASEPROTECT_Enabled (0x00000000UL) /*!< Any value diferent to 0xFFFFFFFF will make flash protected
		              against erase all and erase UICR */
#define UICR_ERASEPROTECT_ERASEPROTECT_Disabled (0xFFFFFFFFUL) /*!< Flash not protected against erase all and erase UICR */

/* Register: UICR_ACLREGION0ADDR */
/* Description: ACL region0 address. Value will get inverted in the readout process before writing the value to ACL. */

/* Bits 31..0 : ACL region0 address */
#define UICR_ACLREGION0ADDR_ADDR_Pos (0UL) /*!< Position of ADDR field. */
#define UICR_ACLREGION0ADDR_ADDR_Msk (0xFFFFFFFFUL << UICR_ACLREGION0ADDR_ADDR_Pos) /*!< Bit mask of ADDR field. */

/* Register: UICR_ACLREGION0SIZE */
/* Description: ACL region0 size. Value will get inverted in the readout process before writing the value to ACL. */

/* Bits 31..0 : ACL region0 size */
#define UICR_ACLREGION0SIZE_SIZE_Pos (0UL) /*!< Position of SIZE field. */
#define UICR_ACLREGION0SIZE_SIZE_Msk (0xFFFFFFFFUL << UICR_ACLREGION0SIZE_SIZE_Pos) /*!< Bit mask of SIZE field. */

/* Register: UICR_ACLREGION0PERM */
/* Description: ACL region0 permissions. Value will get inverted in the readout process before writing the value to ACL. */

/* Bits 2..0 : ACL region0 permissions */
#define UICR_ACLREGION0PERM_PERM_Pos (0UL) /*!< Position of PERM field. */
#define UICR_ACLREGION0PERM_PERM_Msk (0x7UL << UICR_ACLREGION0PERM_PERM_Pos) /*!< Bit mask of PERM field. */

/* Register: UICR_ACLREGION1ADDR */
/* Description: ACL region1 address. Value will get inverted in the readout process before writing the value to ACL. */

/* Bits 31..0 : ACL region1 address */
#define UICR_ACLREGION1ADDR_ADDR_Pos (0UL) /*!< Position of ADDR field. */
#define UICR_ACLREGION1ADDR_ADDR_Msk (0xFFFFFFFFUL << UICR_ACLREGION1ADDR_ADDR_Pos) /*!< Bit mask of ADDR field. */

/* Register: UICR_ACLREGION1SIZE */
/* Description: ACL region1 size. Value will get inverted in the readout process before writing the value to ACL. */

/* Bits 31..0 : ACL region1 size */
#define UICR_ACLREGION1SIZE_SIZE_Pos (0UL) /*!< Position of SIZE field. */
#define UICR_ACLREGION1SIZE_SIZE_Msk (0xFFFFFFFFUL << UICR_ACLREGION1SIZE_SIZE_Pos) /*!< Bit mask of SIZE field. */

/* Register: UICR_ACLREGION1PERM */
/* Description: ACL region1 permissions. Value will get inverted in the readout process before writing the value to ACL. */

/* Bits 2..0 : ACL region1 permissions */
#define UICR_ACLREGION1PERM_PERM_Pos (0UL) /*!< Position of PERM field. */
#define UICR_ACLREGION1PERM_PERM_Msk (0x7UL << UICR_ACLREGION1PERM_PERM_Pos) /*!< Bit mask of PERM field. */

/* Register: UICR_MDMNVMCPOFGUARD */
/* Description: Enable blocking NVM WRITE and aborting NVM ERASE for LTE-Modem NVM in POFWARN condition. */

/* Bit 0 : Enable blocking NVM WRITE and aborting NVM ERASE in POFWARN condition. */
#define UICR_MDMNVMCPOFGUARD_NVMCPOFGUARDEN_Pos (0UL) /*!< Position of NVMCPOFGUARDEN field. */
#define UICR_MDMNVMCPOFGUARD_NVMCPOFGUARDEN_Msk (0x1UL << UICR_MDMNVMCPOFGUARD_NVMCPOFGUARDEN_Pos) /*!< Bit mask of NVMCPOFGUARDEN field. */
#define UICR_MDMNVMCPOFGUARD_NVMCPOFGUARDEN_Disabled (0UL) /*!< NVM WRITE and NVM ERASE are not blocked in POFWARN condition. */
#define UICR_MDMNVMCPOFGUARD_NVMCPOFGUARDEN_Enabled (1UL) /*!< NVM WRITE and NVM ERASE are blocked in POFWARN condition. */

/* Register: UICR_PKEYREVOKED */
/* Description: Private key revoked status. */

/* Bit 0 : Private key revoked status. */
#define UICR_PKEYREVOKED_REVOKED_Pos (0UL) /*!< Position of REVOKED field. */
#define UICR_PKEYREVOKED_REVOKED_Msk (0x1UL << UICR_PKEYREVOKED_REVOKED_Pos) /*!< Bit mask of REVOKED field. */
#define UICR_PKEYREVOKED_REVOKED_Revoked (0UL) /*!< Private key revoked and not usable anymore. */
#define UICR_PKEYREVOKED_REVOKED_Valid (1UL) /*!< Private key valid and usable. */

/* Register: UICR_UARTBLOCK */
/* Description: Modem UART RXD TXD blocking. */

/* Bit 1 : TXD output blocking setting */
#define UICR_UARTBLOCK_TXDBLOCKING_Pos (1UL) /*!< Position of TXDBLOCKING field. */
#define UICR_UARTBLOCK_TXDBLOCKING_Msk (0x1UL << UICR_UARTBLOCK_TXDBLOCKING_Pos) /*!< Bit mask of TXDBLOCKING field. */
#define UICR_UARTBLOCK_TXDBLOCKING_Blocked (0UL) /*!< TXD blocked, tied low. */
#define UICR_UARTBLOCK_TXDBLOCKING_NotBlocked (1UL) /*!< TXD not blocked. */

/* Bit 0 : RXD input blocking setting */
#define UICR_UARTBLOCK_RXDBLOCKING_Pos (0UL) /*!< Position of RXDBLOCKING field. */
#define UICR_UARTBLOCK_RXDBLOCKING_Msk (0x1UL << UICR_UARTBLOCK_RXDBLOCKING_Pos) /*!< Bit mask of RXDBLOCKING field. */
#define UICR_UARTBLOCK_RXDBLOCKING_Blocked (0UL) /*!< RXD blocked, tied low. */
#define UICR_UARTBLOCK_RXDBLOCKING_NotBlocked (1UL) /*!< RXD not blocked. */

/* Register: UICR_KEYSLOT1DEST */
/* Description: KEYSLOT1 destination address */

/* Bits 31..0 : KEYSLOT1 destination address */
#define UICR_KEYSLOT1DEST_DEST_Pos (0UL) /*!< Position of DEST field. */
#define UICR_KEYSLOT1DEST_DEST_Msk (0xFFFFFFFFUL << UICR_KEYSLOT1DEST_DEST_Pos) /*!< Bit mask of DEST field. */

/* Register: UICR_KEYSLOT1CONFIG */
/* Description: KEYSLOT1 configuration */

/* Bit 16 : Key status */
#define UICR_KEYSLOT1CONFIG_STATUS_Pos (16UL) /*!< Position of STATUS field. */
#define UICR_KEYSLOT1CONFIG_STATUS_Msk (0x1UL << UICR_KEYSLOT1CONFIG_STATUS_Pos) /*!< Bit mask of STATUS field. */
#define UICR_KEYSLOT1CONFIG_STATUS_Revoked (0UL) /*!< Key revoked */
#define UICR_KEYSLOT1CONFIG_STATUS_Active (1UL) /*!< Key active */

/* Bit 2 : Push permission for key slot {i} */
#define UICR_KEYSLOT1CONFIG_PUSH_Pos (2UL) /*!< Position of PUSH field. */
#define UICR_KEYSLOT1CONFIG_PUSH_Msk (0x1UL << UICR_KEYSLOT1CONFIG_PUSH_Pos) /*!< Bit mask of PUSH field. */
#define UICR_KEYSLOT1CONFIG_PUSH_Disabled (0UL) /*!< Content of registers KEYSLOT{i}.VALUE[0-3] can not be pushed, but can be read if field READ is 'Enabled' */
#define UICR_KEYSLOT1CONFIG_PUSH_Enabled (1UL) /*!< Content of registers KEYSLOT{i}.VALUE[0-3] can be pushed over secure APB. Register KEYSLOT{i}.DEST must contain a valid destination address! */

/* Bit 1 : Read permission for key slot {i}. */
#define UICR_KEYSLOT1CONFIG_READ_Pos (1UL) /*!< Position of READ field. */
#define UICR_KEYSLOT1CONFIG_READ_Msk (0x1UL << UICR_KEYSLOT1CONFIG_READ_Pos) /*!< Bit mask of READ field. */
#define UICR_KEYSLOT1CONFIG_READ_Disabled (0UL) /*!< Disable read from registers KEYSLOT{i}.VALUE[0-3] */
#define UICR_KEYSLOT1CONFIG_READ_Enabled (1UL) /*!< Registers KEYSLOT{i}.VALUE[0-3] can be read */

/* Bit 0 : Write permission for key slot {i} */
#define UICR_KEYSLOT1CONFIG_WRITE_Pos (0UL) /*!< Position of WRITE field. */
#define UICR_KEYSLOT1CONFIG_WRITE_Msk (0x1UL << UICR_KEYSLOT1CONFIG_WRITE_Pos) /*!< Bit mask of WRITE field. */
#define UICR_KEYSLOT1CONFIG_WRITE_Disabled (0UL) /*!< Disable write to registers KEYSLOT{i}.VALUE[0-3] */
#define UICR_KEYSLOT1CONFIG_WRITE_Enabled (1UL) /*!< Registers KEYSLOT{i}.VALUE[0-3] can be written */

/* Register: UICR_KEYSLOT1KEYVALUE0 */
/* Description: KEYSLOT1 key bits [31:0] */

/* Bits 31..0 : KEYSLOT1 key bits [31:0] */
#define UICR_KEYSLOT1KEYVALUE0_VALUE_Pos (0UL) /*!< Position of VALUE field. */
#define UICR_KEYSLOT1KEYVALUE0_VALUE_Msk (0xFFFFFFFFUL << UICR_KEYSLOT1KEYVALUE0_VALUE_Pos) /*!< Bit mask of VALUE field. */

/* Register: UICR_KEYSLOT1KEYVALUE1 */
/* Description: KEYSLOT1 key bits [63:32] */

/* Bits 31..0 : KEYSLOT1 key bits [63:32] */
#define UICR_KEYSLOT1KEYVALUE1_VALUE_Pos (0UL) /*!< Position of VALUE field. */
#define UICR_KEYSLOT1KEYVALUE1_VALUE_Msk (0xFFFFFFFFUL << UICR_KEYSLOT1KEYVALUE1_VALUE_Pos) /*!< Bit mask of VALUE field. */

/* Register: UICR_KEYSLOT1KEYVALUE2 */
/* Description: KEYSLOT1 key bits [95:64] */

/* Bits 31..0 : KEYSLOT1 key bits [95:64] */
#define UICR_KEYSLOT1KEYVALUE2_VALUE_Pos (0UL) /*!< Position of VALUE field. */
#define UICR_KEYSLOT1KEYVALUE2_VALUE_Msk (0xFFFFFFFFUL << UICR_KEYSLOT1KEYVALUE2_VALUE_Pos) /*!< Bit mask of VALUE field. */

/* Register: UICR_KEYSLOT1KEYVALUE3 */
/* Description: KEYSLOT1 key bits [127:96] */

/* Bits 31..0 : KEYSLOT1 key bits [127:96] */
#define UICR_KEYSLOT1KEYVALUE3_VALUE_Pos (0UL) /*!< Position of VALUE field. */
#define UICR_KEYSLOT1KEYVALUE3_VALUE_Msk (0xFFFFFFFFUL << UICR_KEYSLOT1KEYVALUE3_VALUE_Pos) /*!< Bit mask of VALUE field. */


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

/* Register: VMC_RAMB_POWER */
/* Description: Description cluster: RAM Bn power control register */

/* Bit 31 : Unused retention bit 14 */
#define VMC_RAMB_POWER_UNUSED_RETENTION14_Pos (31UL) /*!< Position of UNUSED_RETENTION14 field. */
#define VMC_RAMB_POWER_UNUSED_RETENTION14_Msk (0x1UL << VMC_RAMB_POWER_UNUSED_RETENTION14_Pos) /*!< Bit mask of UNUSED_RETENTION14 field. */

/* Bit 30 : Unused retention bit 13 */
#define VMC_RAMB_POWER_UNUSED_RETENTION13_Pos (30UL) /*!< Position of UNUSED_RETENTION13 field. */
#define VMC_RAMB_POWER_UNUSED_RETENTION13_Msk (0x1UL << VMC_RAMB_POWER_UNUSED_RETENTION13_Pos) /*!< Bit mask of UNUSED_RETENTION13 field. */

/* Bit 29 : Unused retention bit 12 */
#define VMC_RAMB_POWER_UNUSED_RETENTION12_Pos (29UL) /*!< Position of UNUSED_RETENTION12 field. */
#define VMC_RAMB_POWER_UNUSED_RETENTION12_Msk (0x1UL << VMC_RAMB_POWER_UNUSED_RETENTION12_Pos) /*!< Bit mask of UNUSED_RETENTION12 field. */

/* Bit 28 : Unused retention bit 11 */
#define VMC_RAMB_POWER_UNUSED_RETENTION11_Pos (28UL) /*!< Position of UNUSED_RETENTION11 field. */
#define VMC_RAMB_POWER_UNUSED_RETENTION11_Msk (0x1UL << VMC_RAMB_POWER_UNUSED_RETENTION11_Pos) /*!< Bit mask of UNUSED_RETENTION11 field. */

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

/* Bit 15 : Unused power bit 14 */
#define VMC_RAMB_POWER_UNUSED_POWER14_Pos (15UL) /*!< Position of UNUSED_POWER14 field. */
#define VMC_RAMB_POWER_UNUSED_POWER14_Msk (0x1UL << VMC_RAMB_POWER_UNUSED_POWER14_Pos) /*!< Bit mask of UNUSED_POWER14 field. */

/* Bit 14 : Unused power bit 13 */
#define VMC_RAMB_POWER_UNUSED_POWER13_Pos (14UL) /*!< Position of UNUSED_POWER13 field. */
#define VMC_RAMB_POWER_UNUSED_POWER13_Msk (0x1UL << VMC_RAMB_POWER_UNUSED_POWER13_Pos) /*!< Bit mask of UNUSED_POWER13 field. */

/* Bit 13 : Unused power bit 12 */
#define VMC_RAMB_POWER_UNUSED_POWER12_Pos (13UL) /*!< Position of UNUSED_POWER12 field. */
#define VMC_RAMB_POWER_UNUSED_POWER12_Msk (0x1UL << VMC_RAMB_POWER_UNUSED_POWER12_Pos) /*!< Bit mask of UNUSED_POWER12 field. */

/* Bit 12 : Unused power bit 11 */
#define VMC_RAMB_POWER_UNUSED_POWER11_Pos (12UL) /*!< Position of UNUSED_POWER11 field. */
#define VMC_RAMB_POWER_UNUSED_POWER11_Msk (0x1UL << VMC_RAMB_POWER_UNUSED_POWER11_Pos) /*!< Bit mask of UNUSED_POWER11 field. */

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

/* Bit 31 : Unused retention set bit 14 */
#define VMC_RAMB_POWERSET_UNUSED_RETENTION14_Pos (31UL) /*!< Position of UNUSED_RETENTION14 field. */
#define VMC_RAMB_POWERSET_UNUSED_RETENTION14_Msk (0x1UL << VMC_RAMB_POWERSET_UNUSED_RETENTION14_Pos) /*!< Bit mask of UNUSED_RETENTION14 field. */

/* Bit 30 : Unused retention set bit 13 */
#define VMC_RAMB_POWERSET_UNUSED_RETENTION13_Pos (30UL) /*!< Position of UNUSED_RETENTION13 field. */
#define VMC_RAMB_POWERSET_UNUSED_RETENTION13_Msk (0x1UL << VMC_RAMB_POWERSET_UNUSED_RETENTION13_Pos) /*!< Bit mask of UNUSED_RETENTION13 field. */

/* Bit 29 : Unused retention set bit 12 */
#define VMC_RAMB_POWERSET_UNUSED_RETENTION12_Pos (29UL) /*!< Position of UNUSED_RETENTION12 field. */
#define VMC_RAMB_POWERSET_UNUSED_RETENTION12_Msk (0x1UL << VMC_RAMB_POWERSET_UNUSED_RETENTION12_Pos) /*!< Bit mask of UNUSED_RETENTION12 field. */

/* Bit 28 : Unused retention set bit 11 */
#define VMC_RAMB_POWERSET_UNUSED_RETENTION11_Pos (28UL) /*!< Position of UNUSED_RETENTION11 field. */
#define VMC_RAMB_POWERSET_UNUSED_RETENTION11_Msk (0x1UL << VMC_RAMB_POWERSET_UNUSED_RETENTION11_Pos) /*!< Bit mask of UNUSED_RETENTION11 field. */

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

/* Bit 15 : Unused power set bit 14 */
#define VMC_RAMB_POWERSET_UNUSED_POWER14_Pos (15UL) /*!< Position of UNUSED_POWER14 field. */
#define VMC_RAMB_POWERSET_UNUSED_POWER14_Msk (0x1UL << VMC_RAMB_POWERSET_UNUSED_POWER14_Pos) /*!< Bit mask of UNUSED_POWER14 field. */

/* Bit 14 : Unused power set bit 13 */
#define VMC_RAMB_POWERSET_UNUSED_POWER13_Pos (14UL) /*!< Position of UNUSED_POWER13 field. */
#define VMC_RAMB_POWERSET_UNUSED_POWER13_Msk (0x1UL << VMC_RAMB_POWERSET_UNUSED_POWER13_Pos) /*!< Bit mask of UNUSED_POWER13 field. */

/* Bit 13 : Unused power set bit 12 */
#define VMC_RAMB_POWERSET_UNUSED_POWER12_Pos (13UL) /*!< Position of UNUSED_POWER12 field. */
#define VMC_RAMB_POWERSET_UNUSED_POWER12_Msk (0x1UL << VMC_RAMB_POWERSET_UNUSED_POWER12_Pos) /*!< Bit mask of UNUSED_POWER12 field. */

/* Bit 12 : Unused power set bit 11 */
#define VMC_RAMB_POWERSET_UNUSED_POWER11_Pos (12UL) /*!< Position of UNUSED_POWER11 field. */
#define VMC_RAMB_POWERSET_UNUSED_POWER11_Msk (0x1UL << VMC_RAMB_POWERSET_UNUSED_POWER11_Pos) /*!< Bit mask of UNUSED_POWER11 field. */

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

/* Bit 31 : Unused retention set bit 14 */
#define VMC_RAMB_POWERCLR_UNUSED_RETENTION14_Pos (31UL) /*!< Position of UNUSED_RETENTION14 field. */
#define VMC_RAMB_POWERCLR_UNUSED_RETENTION14_Msk (0x1UL << VMC_RAMB_POWERCLR_UNUSED_RETENTION14_Pos) /*!< Bit mask of UNUSED_RETENTION14 field. */

/* Bit 30 : Unused retention set bit 13 */
#define VMC_RAMB_POWERCLR_UNUSED_RETENTION13_Pos (30UL) /*!< Position of UNUSED_RETENTION13 field. */
#define VMC_RAMB_POWERCLR_UNUSED_RETENTION13_Msk (0x1UL << VMC_RAMB_POWERCLR_UNUSED_RETENTION13_Pos) /*!< Bit mask of UNUSED_RETENTION13 field. */

/* Bit 29 : Unused retention set bit 12 */
#define VMC_RAMB_POWERCLR_UNUSED_RETENTION12_Pos (29UL) /*!< Position of UNUSED_RETENTION12 field. */
#define VMC_RAMB_POWERCLR_UNUSED_RETENTION12_Msk (0x1UL << VMC_RAMB_POWERCLR_UNUSED_RETENTION12_Pos) /*!< Bit mask of UNUSED_RETENTION12 field. */

/* Bit 28 : Unused retention set bit 11 */
#define VMC_RAMB_POWERCLR_UNUSED_RETENTION11_Pos (28UL) /*!< Position of UNUSED_RETENTION11 field. */
#define VMC_RAMB_POWERCLR_UNUSED_RETENTION11_Msk (0x1UL << VMC_RAMB_POWERCLR_UNUSED_RETENTION11_Pos) /*!< Bit mask of UNUSED_RETENTION11 field. */

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

/* Bit 15 : Unused power set bit 14 */
#define VMC_RAMB_POWERCLR_UNUSED_POWER14_Pos (15UL) /*!< Position of UNUSED_POWER14 field. */
#define VMC_RAMB_POWERCLR_UNUSED_POWER14_Msk (0x1UL << VMC_RAMB_POWERCLR_UNUSED_POWER14_Pos) /*!< Bit mask of UNUSED_POWER14 field. */

/* Bit 14 : Unused power set bit 13 */
#define VMC_RAMB_POWERCLR_UNUSED_POWER13_Pos (14UL) /*!< Position of UNUSED_POWER13 field. */
#define VMC_RAMB_POWERCLR_UNUSED_POWER13_Msk (0x1UL << VMC_RAMB_POWERCLR_UNUSED_POWER13_Pos) /*!< Bit mask of UNUSED_POWER13 field. */

/* Bit 13 : Unused power set bit 12 */
#define VMC_RAMB_POWERCLR_UNUSED_POWER12_Pos (13UL) /*!< Position of UNUSED_POWER12 field. */
#define VMC_RAMB_POWERCLR_UNUSED_POWER12_Msk (0x1UL << VMC_RAMB_POWERCLR_UNUSED_POWER12_Pos) /*!< Bit mask of UNUSED_POWER12 field. */

/* Bit 12 : Unused power set bit 11 */
#define VMC_RAMB_POWERCLR_UNUSED_POWER11_Pos (12UL) /*!< Position of UNUSED_POWER11 field. */
#define VMC_RAMB_POWERCLR_UNUSED_POWER11_Msk (0x1UL << VMC_RAMB_POWERCLR_UNUSED_POWER11_Pos) /*!< Bit mask of UNUSED_POWER11 field. */

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
/* Description: Description cluster: RAM Dn power control register */

/* Bit 17 : Unused retention bit */
#define VMC_RAMD_POWER_UNUSED_RETENTION1_Pos (17UL) /*!< Position of UNUSED_RETENTION1 field. */
#define VMC_RAMD_POWER_UNUSED_RETENTION1_Msk (0x1UL << VMC_RAMD_POWER_UNUSED_RETENTION1_Pos) /*!< Bit mask of UNUSED_RETENTION1 field. */

/* Bit 16 : Keep retention on RAM sections S0 and S1 of RAM Dn when RAM section is switched off */
#define VMC_RAMD_POWER_S01RETENTION_Pos (16UL) /*!< Position of S01RETENTION field. */
#define VMC_RAMD_POWER_S01RETENTION_Msk (0x1UL << VMC_RAMD_POWER_S01RETENTION_Pos) /*!< Bit mask of S01RETENTION field. */
#define VMC_RAMD_POWER_S01RETENTION_Off (0UL) /*!< Off */
#define VMC_RAMD_POWER_S01RETENTION_On (1UL) /*!< On */

/* Bit 1 : Unused power bit */
#define VMC_RAMD_POWER_UNUSED_POWER1_Pos (1UL) /*!< Position of UNUSED_POWER1 field. */
#define VMC_RAMD_POWER_UNUSED_POWER1_Msk (0x1UL << VMC_RAMD_POWER_UNUSED_POWER1_Pos) /*!< Bit mask of UNUSED_POWER1 field. */

/* Bit 0 : Keep RAM sections S0 and S1 of RAM Dn on or off in System ON mode */
#define VMC_RAMD_POWER_S01POWER_Pos (0UL) /*!< Position of S01POWER field. */
#define VMC_RAMD_POWER_S01POWER_Msk (0x1UL << VMC_RAMD_POWER_S01POWER_Pos) /*!< Bit mask of S01POWER field. */
#define VMC_RAMD_POWER_S01POWER_Off (0UL) /*!< Off */
#define VMC_RAMD_POWER_S01POWER_On (1UL) /*!< On */

/* Register: VMC_RAMD_POWERSET */
/* Description: Description cluster: RAM Dn power control set register */

/* Bit 17 : Unused retention set bit */
#define VMC_RAMD_POWERSET_UNUSED_RETENTION1_Pos (17UL) /*!< Position of UNUSED_RETENTION1 field. */
#define VMC_RAMD_POWERSET_UNUSED_RETENTION1_Msk (0x1UL << VMC_RAMD_POWERSET_UNUSED_RETENTION1_Pos) /*!< Bit mask of UNUSED_RETENTION1 field. */

/* Bit 16 : Keep retention on sections S0 and S1 of RAM of RAM Dn when RAM section is switched off */
#define VMC_RAMD_POWERSET_S01RETENTION_Pos (16UL) /*!< Position of S01RETENTION field. */
#define VMC_RAMD_POWERSET_S01RETENTION_Msk (0x1UL << VMC_RAMD_POWERSET_S01RETENTION_Pos) /*!< Bit mask of S01RETENTION field. */
#define VMC_RAMD_POWERSET_S01RETENTION_On (1UL) /*!< On */

/* Bit 1 : Unused power set bit */
#define VMC_RAMD_POWERSET_UNUSED_POWER1_Pos (1UL) /*!< Position of UNUSED_POWER1 field. */
#define VMC_RAMD_POWERSET_UNUSED_POWER1_Msk (0x1UL << VMC_RAMD_POWERSET_UNUSED_POWER1_Pos) /*!< Bit mask of UNUSED_POWER1 field. */

/* Bit 0 : Keep RAM sections S0 and S1 of RAM Dn on or off in System ON mode */
#define VMC_RAMD_POWERSET_S01POWER_Pos (0UL) /*!< Position of S01POWER field. */
#define VMC_RAMD_POWERSET_S01POWER_Msk (0x1UL << VMC_RAMD_POWERSET_S01POWER_Pos) /*!< Bit mask of S01POWER field. */
#define VMC_RAMD_POWERSET_S01POWER_On (1UL) /*!< On */

/* Register: VMC_RAMD_POWERCLR */
/* Description: Description cluster: RAM  Dn power control clear register */

/* Bit 17 : Unused retention clear bit */
#define VMC_RAMD_POWERCLR_UNUSED_RETENTION1_Pos (17UL) /*!< Position of UNUSED_RETENTION1 field. */
#define VMC_RAMD_POWERCLR_UNUSED_RETENTION1_Msk (0x1UL << VMC_RAMD_POWERCLR_UNUSED_RETENTION1_Pos) /*!< Bit mask of UNUSED_RETENTION1 field. */

/* Bit 16 : Keep retention on RAM sections S0 and S1 of RAM Dn when RAM section is switched off */
#define VMC_RAMD_POWERCLR_S01RETENTION_Pos (16UL) /*!< Position of S01RETENTION field. */
#define VMC_RAMD_POWERCLR_S01RETENTION_Msk (0x1UL << VMC_RAMD_POWERCLR_S01RETENTION_Pos) /*!< Bit mask of S01RETENTION field. */
#define VMC_RAMD_POWERCLR_S01RETENTION_Off (1UL) /*!< Off */

/* Bit 1 : Unused power clear bit */
#define VMC_RAMD_POWERCLR_UNUSED_POWER1_Pos (1UL) /*!< Position of UNUSED_POWER1 field. */
#define VMC_RAMD_POWERCLR_UNUSED_POWER1_Msk (0x1UL << VMC_RAMD_POWERCLR_UNUSED_POWER1_Pos) /*!< Bit mask of UNUSED_POWER1 field. */

/* Bit 0 : Keep RAM sections S0 and S1 of RAM Dn on or off in System ON mode */
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


/*lint --flb "Leave library region" */
#endif
