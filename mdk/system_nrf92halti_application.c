/*

Copyright (c) 2009-2020 ARM Limited. All rights reserved.

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
#include "nrf_erratas.h"
#include "system_nrf92halti_application.h"

/*lint ++flb "Enter library region" */


/* NRF5340 application core uses a variable System Clock Frequency that starts at 64MHz */
#define __SYSTEM_CLOCK_MAX      (128000000UL)
#define __SYSTEM_CLOCK_INITIAL  ( 64000000UL)

#if defined ( __CC_ARM )
    uint32_t SystemCoreClock __attribute__((used)) = __SYSTEM_CLOCK_INITIAL;  
#elif defined ( __ICCARM__ )
    __root uint32_t SystemCoreClock = __SYSTEM_CLOCK_INITIAL;
#elif defined   ( __GNUC__ )
    uint32_t SystemCoreClock __attribute__((used)) = __SYSTEM_CLOCK_INITIAL;
#endif

void SystemCoreClockUpdate(void)
{
#if defined(NRF_TRUSTZONE_NONSECURE)
    SystemCoreClock = __SYSTEM_CLOCK_MAX >> (NRF_CLOCK_NS->HFCLKCTRL & (CLOCK_HFCLKCTRL_HCLK_Msk));
#else
    SystemCoreClock = __SYSTEM_CLOCK_MAX >> (NRF_CLOCK_S->HFCLKCTRL & (CLOCK_HFCLKCTRL_HCLK_Msk));
#endif
}

void SystemInit(void)
{
    SystemCoreClockUpdate();
}

/*lint --flb "Leave library region" */
