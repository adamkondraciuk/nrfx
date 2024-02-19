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

#ifndef HALTIUM_NAME_CHANGE_H
#define HALTIUM_NAME_CHANGE_H

/*lint ++flb "Enter library region */

/* This file is given to prevent your SW from not compiling with the updates made to haltium.h and 
 * haltium_bitfields.h. The macros defined in this file were available previously. Do not use these
 * macros on purpose. Use the ones defined in the corresponding device header file instead.
 * This header file will not be part of the MDK of the final product, user-facing code will need to update.
 */
 
 /* POWER */ 
 #define POWER_ULPENABLE_ResetValue         POWER_BLOCKULPMODE_ResetValue 
 #define POWER_ULPENABLE_ENABLE_Pos         POWER_BLOCKULPMODE_ENABLE_Pos 
 #define POWER_ULPENABLE_ENABLE_Msk         POWER_BLOCKULPMODE_ENABLE_Msk 
 #define POWER_ULPENABLE_ENABLE_Min         POWER_BLOCKULPMODE_ENABLE_Min 
 #define POWER_ULPENABLE_ENABLE_Max         POWER_BLOCKULPMODE_ENABLE_Max 
 #define POWER_ULPENABLE_ENABLE_Disabled    POWER_BLOCKULPMODE_ENABLE_Disabled
 #define POWER_ULPENABLE_ENABLE_Enabled     POWER_BLOCKULPMODE_ENABLE_Enabled 
                                            
 #define POWER_ULVENABLE_ResetValue         POWER_BLOCKULVMODE_ResetValue 
 #define POWER_ULVENABLE_ENABLE_Pos         POWER_BLOCKULVMODE_ENABLE_Pos 
 #define POWER_ULVENABLE_ENABLE_Msk         POWER_BLOCKULVMODE_ENABLE_Msk 
 #define POWER_ULVENABLE_ENABLE_Min         POWER_BLOCKULVMODE_ENABLE_Min 
 #define POWER_ULVENABLE_ENABLE_Max         POWER_BLOCKULVMODE_ENABLE_Max 
 #define POWER_ULVENABLE_ENABLE_Disabled    POWER_BLOCKULVMODE_ENABLE_Disabled
 #define POWER_ULVENABLE_ENABLE_Enabled     POWER_BLOCKULVMODE_ENABLE_Enabled 
 
 /* MRAMC */
 #define MRAMC_CONFIGNVR_PAGE_Lock_Pos           MRAMC_CONFIGNVR_PAGE_LOCK_Pos           
 #define MRAMC_CONFIGNVR_PAGE_Lock_Msk           MRAMC_CONFIGNVR_PAGE_LOCK_Msk 
 #define MRAMC_CONFIGNVR_PAGE_Lock_Min           MRAMC_CONFIGNVR_PAGE_LOCK_Min
 #define MRAMC_CONFIGNVR_PAGE_Lock_Max           MRAMC_CONFIGNVR_PAGE_LOCK_Max 
 #define MRAMC_CONFIGNVR_PAGE_Lock_LockDisabled  MRAMC_CONFIGNVR_PAGE_LOCK_LockDisabled
 #define MRAMC_CONFIGNVR_PAGE_Lock_LockEnabled   MRAMC_CONFIGNVR_PAGE_LOCK_LockEnabled
 #define MRAMC_CONFIGNVR_PAGE_Lock_EnableLock    MRAMC_CONFIGNVR_PAGE_LOCK_EnableLock

/* CACHE */
#ifndef CACHE_STATUS_READY_Pos
    #define CACHE_STATUS_READY_Pos    CACHE_STATUS_BUSY_Pos 
    #define CACHE_STATUS_READY_Msk    CACHE_STATUS_BUSY_Msk 
    #define CACHE_STATUS_READY_Min    CACHE_STATUS_BUSY_Min 
    #define CACHE_STATUS_READY_Max    CACHE_STATUS_BUSY_Max 
    #define CACHE_STATUS_READY_Ready  CACHE_STATUS_BUSY_Ready     
    #define CACHE_STATUS_READY_Busy   CACHE_STATUS_BUSY_Busy     
#endif

 /* Extra symbols: */


 #define NRF_DOMAINS_t NRF_DOMAINID_Type

 
 /*lint --flb "Leave library region" */

#endif /* HALTIUM_NAME_CHANGE_H */
