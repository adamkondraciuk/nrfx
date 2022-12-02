/*

Copyright (c) 2009-2022 ARM Limited. All rights reserved.

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
#include "system_nrf54h.h"
#if defined(__CORTEX_M) && !defined(NRF_TRUSTZONE_NONSECURE) && \
    (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE == 0x3))
#include "system_config_sau.h"
#endif

/*lint ++flb "Enter library region" */

#define __SYSTEM_CLOCK_MHZ      (1000000UL)

#if defined(NRF_APPLICATION) || defined(NRF_SECURE) || defined(NRF_FLPR) || \
    defined(NRF_SYSCTRL) || defined(NRF_BBPR)
#define __SYSTEM_CLOCK_DEFAULT  (320ul * __SYSTEM_CLOCK_MHZ)
#elif defined(NRF_RADIOCORE)
#define __SYSTEM_CLOCK_DEFAULT  (256ul * __SYSTEM_CLOCK_MHZ)
#elif defined(NRF_PPR)
#define __SYSTEM_CLOCK_DEFAULT  (16ul * __SYSTEM_CLOCK_MHZ)
#else
#error "Undefined domain"
#endif

#if defined ( __CC_ARM )
    uint32_t SystemCoreClock __attribute__((used)) = __SYSTEM_CLOCK_DEFAULT;
#elif defined ( __ICCARM__ )
    __root uint32_t SystemCoreClock = __SYSTEM_CLOCK_DEFAULT;
#elif defined   ( __GNUC__ )
    uint32_t SystemCoreClock __attribute__((used)) = __SYSTEM_CLOCK_DEFAULT;
#endif

void SystemCoreClockUpdate(void)
{
    #ifndef NRF_TRUSTZONE_NONSECURE
        #if defined(NRF_PPR)
            /* PPR clock is always 16MHz */
            SystemCoreClock = 16 * __SYSTEM_CLOCK_MHZ;
        #elif defined(NRF_FLPR)
            /* FLPR does not have access to its HSFLL, assume default speed. */
            SystemCoreClock = __SYSTEM_CLOCK_DEFAULT;
        #else
            #ifndef NRF_HSFLL
                #if defined(NRF_SYSCTRL)
                    #define NRF_HSFLL NRF_HSFLL120
                #elif defined(NRF_BBPR)
                    #define NRF_HSFLL NRF_RADIOCORE_HSFLL
                #else
                    #error "Could not find CPU HSFLL"
                #endif
            #endif

            /* CPU should have access to its local HSFLL, measure CPU frequency. */
            /* If HSFLL is in closed loop mode it's always measuring, and we can just pick the result.*/
            /* Otherwise, start a frequncy measurement.*/
            if ((NRF_HSFLL->CLOCKSTATUS & HSFLL_CLOCKSTATUS_MODE_Msk) != HSFLL_CLOCKSTATUS_MODE_ClosedLoop)
            {
                /* Start HSFLL frequency measurement */
                NRF_HSFLL->EVENTS_FREQMDONE = 0;
                NRF_HSFLL->TASKS_FREQMEAS = 1;
                for (volatile int i = 0; i < 200 && NRF_HSFLL->EVENTS_FREQMDONE != 1; i++)
                {
                    /* Wait until frequency measurement is done */
                }

                if (NRF_HSFLL->EVENTS_FREQMDONE != 1)
                {
                    /* Clock measurement never completed, return default CPU clock speed */
                    SystemCoreClock = __SYSTEM_CLOCK_DEFAULT;
                    return;
                }
            }
            
            /* Frequency measurement result is a multiple of 16MHz */
            SystemCoreClock = NRF_HSFLL->FREQM.MEAS * 16 * __SYSTEM_CLOCK_MHZ;
        #endif
    #endif
}

void SystemInit(void)
{
    #ifdef __CORTEX_M
        #if !defined(NRF_TRUSTZONE_NONSECURE) && \
            (defined(__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE == 0x3))
            /* Allow Non-Secure code to run FPU instructions.
            * If only the secure code should control FPU power state these registers should be configured accordingly in the secure application code. */
            SCB->NSACR |= (3UL << 10);

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
    
    SystemCoreClockUpdate();
}

/*lint --flb "Leave library region" */
