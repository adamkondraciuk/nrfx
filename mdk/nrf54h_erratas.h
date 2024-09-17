#ifndef NRF54H_ERRATAS_H
#define NRF54H_ERRATAS_H

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

#include <stdint.h>
#include <stdbool.h>
#include "compiler_abstraction.h"

static bool nrf54h_errata_77(void) __UNUSED;

/* ========= Errata 77 ========= */
#if    defined (NRF54H20_ENGA_XXAA) || defined (DEVELOP_IN_NRF54H20_ENGA) \
    || defined (NRF54H20_ENGB_XXAA) || defined (DEVELOP_IN_NRF54H20_ENGB)
    #define NRF54H_ERRATA_77_PRESENT 1
#else
    #define NRF54H_ERRATA_77_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_77_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_77_ENABLE_WORKAROUND NRF54H_ERRATA_77_PRESENT
#endif

static bool nrf54h_errata_77(void)
{
    #if defined (DISABLE_WORKAROUND_77)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_ENGA_XXAA) || defined (DEVELOP_IN_NRF54H20_ENGA)\
         || defined (NRF54H20_ENGB_XXAA) || defined (DEVELOP_IN_NRF54H20_ENGB)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_ENGA_XXAA) || defined (DEVELOP_IN_NRF54H20_ENGA)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return false;
                    case 0x01ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        #if defined (NRF54H20_ENGB_XXAA) || defined (DEVELOP_IN_NRF54H20_ENGB)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x00ul:
                        return false;
                    case 0x01ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

#endif /* NRF54H_ERRATAS_H */
