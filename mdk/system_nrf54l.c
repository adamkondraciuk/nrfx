/*

Copyright (c) 2009-2023 ARM Limited. All rights reserved.

    SPDX-License-Identifier: Apache-2.0

Licensed under the Apache License, Version 2.0 (the License); you may
not use this file except in compliance with the License.
You may obtain a copy of the License at

    www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an AS IS BASIS, WITHOUT
WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.

NOTICE: This file has been modified by Nordic Semiconductor ASA.

*/

/* NOTE: Template files (including this one) are application specific and therefore expected to
   be copied into the application project folder prior to its use! */

#include <stdint.h>
#include <stdbool.h>
#include "nrf.h"
#include "system_nrf54l.h"
#include "system_nrf54l_approtect.h"
#include "system_config_sau.h"

/*lint ++flb "Enter library region" */

#define __SYSTEM_CLOCK_DEFAULT      (64000000ul)

#if defined ( __CC_ARM ) || defined ( __GNUC__ )
    uint32_t SystemCoreClock __attribute__((used)) = __SYSTEM_CLOCK_DEFAULT;
#elif defined ( __ICCARM__ )
    __root uint32_t SystemCoreClock = __SYSTEM_CLOCK_DEFAULT;
#endif    

void SystemCoreClockUpdate(void)
{
    switch(NRF_OSCILLATORS->PLL.CURRENTFREQ)
    {
        case OSCILLATORS_PLL_CURRENTFREQ_CURRENTFREQ_CK64M:
            SystemCoreClock = 64000000ul;
            break;
        case OSCILLATORS_PLL_CURRENTFREQ_CURRENTFREQ_CK128M:
            SystemCoreClock = 128000000ul;
            break;
    }
}

void SystemInit(void)
{

    #ifdef __CORTEX_M
        #if !defined(NRF_TRUSTZONE_NONSECURE) && defined(__ARM_FEATURE_CMSE)
            #ifndef NRF_SKIP_TAMPC_CONFIGURATION
                nrf54l_handle_approtect();
            #endif
            #if defined(__FPU_PRESENT) && __FPU_PRESENT
                /* Allow Non-Secure code to run FPU instructions.
                * If only the secure code should control FPU power state these registers should be configured accordingly in the secure application code. */
                SCB->NSACR |= (3UL << 10);
            #endif

            #ifndef NRF_SKIP_SAU_CONFIGURATION   
                configure_default_sau();
            #endif          
        #endif

        /* Enable the FPU if the compiler used floating point unit instructions. __FPU_USED is a MACRO defined by the
        * compiler. Since the FPU consumes energy, remember to disable FPU use in the compiler if floating point unit
        * operations are not used in your code. */
        #if (__FPU_USED == 1)
            SCB->CPACR |= (3UL << 20) | (3UL << 22);
            __DSB();
            __ISB();
        #endif
    #endif

    /* Configure new vector table offset register if defined. */
#ifdef NRF_VTOR_CONFIG
    SCB->VTOR = NRF_VTOR_CONFIG;
#endif
}

/*lint --flb "Leave library region" */
