#ifndef NRF54L_ERRATAS_H
#define NRF54L_ERRATAS_H

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

static bool nrf54l_errata_1(void) __UNUSED;
static bool nrf54l_errata_2(void) __UNUSED;
static bool nrf54l_errata_3(void) __UNUSED;
static bool nrf54l_errata_4(void) __UNUSED;
static bool nrf54l_errata_6(void) __UNUSED;
static bool nrf54l_errata_7(void) __UNUSED;
static bool nrf54l_errata_8(void) __UNUSED;
static bool nrf54l_errata_9(void) __UNUSED;
static bool nrf54l_errata_10(void) __UNUSED;
static bool nrf54l_errata_13(void) __UNUSED;
static bool nrf54l_errata_16(void) __UNUSED;
static bool nrf54l_errata_17(void) __UNUSED;
static bool nrf54l_errata_18(void) __UNUSED;
static bool nrf54l_errata_19(void) __UNUSED;
static bool nrf54l_errata_20(void) __UNUSED;

/* ========= Errata 1 ========= */
#if    defined (NRF54L15_XXAA) || defined (DEVELOP_IN_NRF54L15) \
    || defined (NRF54L15_ENGA_XXAA) || defined (DEVELOP_IN_NRF54L15_ENGA)
    #define NRF54L_ERRATA_1_PRESENT 1
#else
    #define NRF54L_ERRATA_1_PRESENT 0
#endif

#ifndef NRF54L_ERRATA_1_ENABLE_WORKAROUND
    #define NRF54L_ERRATA_1_ENABLE_WORKAROUND NRF54L_ERRATA_1_PRESENT
#endif

static bool nrf54l_errata_1(void)
{
    #if defined (DISABLE_WORKAROUND_1)
        return false;
    #elif !defined(NRF54L_SERIES)
        return false;
    #else
        #if defined (NRF54L15_XXAA) || defined (DEVELOP_IN_NRF54L15)\
         || defined (NRF54L15_ENGA_XXAA) || defined (DEVELOP_IN_NRF54L15_ENGA)
            uint32_t var1 = *(uint32_t *)0x00FFC340ul;
            uint32_t var2 = *(uint32_t *)0x00FFC344ul;
        #endif
        #if defined (NRF54L15_XXAA) || defined (DEVELOP_IN_NRF54L15)
            if (var1 == 0x1C)
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
        #if defined (NRF54L15_ENGA_XXAA) || defined (DEVELOP_IN_NRF54L15_ENGA)
            if (var1 == 0x1C)
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

/* ========= Errata 2 ========= */
#define NRF54L_ERRATA_2_PRESENT 0

#ifndef NRF54L_ERRATA_2_ENABLE_WORKAROUND
    #define NRF54L_ERRATA_2_ENABLE_WORKAROUND NRF54L_ERRATA_2_PRESENT
#endif

static bool nrf54l_errata_2(void)
{
    #if defined (DISABLE_WORKAROUND_2)
        return false;
    #elif !defined(NRF54L_SERIES)
        return false;
    #else
        return false;
    #endif
}

/* ========= Errata 3 ========= */
#define NRF54L_ERRATA_3_PRESENT 0

#ifndef NRF54L_ERRATA_3_ENABLE_WORKAROUND
    #define NRF54L_ERRATA_3_ENABLE_WORKAROUND NRF54L_ERRATA_3_PRESENT
#endif

static bool nrf54l_errata_3(void)
{
    #if defined (DISABLE_WORKAROUND_3)
        return false;
    #elif !defined(NRF54L_SERIES)
        return false;
    #else
        return false;
    #endif
}

/* ========= Errata 4 ========= */
#define NRF54L_ERRATA_4_PRESENT 0

#ifndef NRF54L_ERRATA_4_ENABLE_WORKAROUND
    #define NRF54L_ERRATA_4_ENABLE_WORKAROUND NRF54L_ERRATA_4_PRESENT
#endif

static bool nrf54l_errata_4(void)
{
    #if defined (DISABLE_WORKAROUND_4)
        return false;
    #elif !defined(NRF54L_SERIES)
        return false;
    #else
        return false;
    #endif
}

/* ========= Errata 6 ========= */
#define NRF54L_ERRATA_6_PRESENT 0

#ifndef NRF54L_ERRATA_6_ENABLE_WORKAROUND
    #define NRF54L_ERRATA_6_ENABLE_WORKAROUND NRF54L_ERRATA_6_PRESENT
#endif

static bool nrf54l_errata_6(void)
{
    #if defined (DISABLE_WORKAROUND_6)
        return false;
    #elif !defined(NRF54L_SERIES)
        return false;
    #else
        return false;
    #endif
}

/* ========= Errata 7 ========= */
#if    defined (NRF54L15_XXAA) || defined (DEVELOP_IN_NRF54L15) \
    || defined (NRF54L15_ENGA_XXAA) || defined (DEVELOP_IN_NRF54L15_ENGA)
    #define NRF54L_ERRATA_7_PRESENT 1
#else
    #define NRF54L_ERRATA_7_PRESENT 0
#endif

#ifndef NRF54L_ERRATA_7_ENABLE_WORKAROUND
    #define NRF54L_ERRATA_7_ENABLE_WORKAROUND NRF54L_ERRATA_7_PRESENT
#endif

static bool nrf54l_errata_7(void)
{
    #if defined (DISABLE_WORKAROUND_7)
        return false;
    #elif !defined(NRF54L_SERIES)
        return false;
    #else
        #if defined (NRF54L15_XXAA) || defined (DEVELOP_IN_NRF54L15)\
         || defined (NRF54L15_ENGA_XXAA) || defined (DEVELOP_IN_NRF54L15_ENGA)
            uint32_t var1 = *(uint32_t *)0x00FFC340ul;
            uint32_t var2 = *(uint32_t *)0x00FFC344ul;
        #endif
        #if defined (NRF54L15_XXAA) || defined (DEVELOP_IN_NRF54L15)
            if (var1 == 0x1C)
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
        #if defined (NRF54L15_ENGA_XXAA) || defined (DEVELOP_IN_NRF54L15_ENGA)
            if (var1 == 0x1C)
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

/* ========= Errata 8 ========= */
#if    defined (NRF54L15_XXAA) || defined (DEVELOP_IN_NRF54L15) \
    || defined (NRF54L15_ENGA_XXAA) || defined (DEVELOP_IN_NRF54L15_ENGA)
    #define NRF54L_ERRATA_8_PRESENT 1
#else
    #define NRF54L_ERRATA_8_PRESENT 0
#endif

#ifndef NRF54L_ERRATA_8_ENABLE_WORKAROUND
    #define NRF54L_ERRATA_8_ENABLE_WORKAROUND NRF54L_ERRATA_8_PRESENT
#endif

static bool nrf54l_errata_8(void)
{
    #if defined (DISABLE_WORKAROUND_8)
        return false;
    #elif !defined(NRF54L_SERIES)
        return false;
    #else
        #if defined (NRF54L15_XXAA) || defined (DEVELOP_IN_NRF54L15)\
         || defined (NRF54L15_ENGA_XXAA) || defined (DEVELOP_IN_NRF54L15_ENGA)
            uint32_t var1 = *(uint32_t *)0x00FFC340ul;
            uint32_t var2 = *(uint32_t *)0x00FFC344ul;
        #endif
        #if defined (NRF54L15_XXAA) || defined (DEVELOP_IN_NRF54L15)
            if (var1 == 0x1C)
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
        #if defined (NRF54L15_ENGA_XXAA) || defined (DEVELOP_IN_NRF54L15_ENGA)
            if (var1 == 0x1C)
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

/* ========= Errata 9 ========= */
#if    defined (NRF54L15_XXAA) || defined (DEVELOP_IN_NRF54L15) \
    || defined (NRF54L15_ENGA_XXAA) || defined (DEVELOP_IN_NRF54L15_ENGA)
    #define NRF54L_ERRATA_9_PRESENT 1
#else
    #define NRF54L_ERRATA_9_PRESENT 0
#endif

#ifndef NRF54L_ERRATA_9_ENABLE_WORKAROUND
    #define NRF54L_ERRATA_9_ENABLE_WORKAROUND NRF54L_ERRATA_9_PRESENT
#endif

static bool nrf54l_errata_9(void)
{
    #if defined (DISABLE_WORKAROUND_9)
        return false;
    #elif !defined(NRF54L_SERIES)
        return false;
    #else
        #if defined (NRF54L15_XXAA) || defined (DEVELOP_IN_NRF54L15)\
         || defined (NRF54L15_ENGA_XXAA) || defined (DEVELOP_IN_NRF54L15_ENGA)
            uint32_t var1 = *(uint32_t *)0x00FFC340ul;
            uint32_t var2 = *(uint32_t *)0x00FFC344ul;
        #endif
        #if defined (NRF54L15_XXAA) || defined (DEVELOP_IN_NRF54L15)
            if (var1 == 0x1C)
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
        #if defined (NRF54L15_ENGA_XXAA) || defined (DEVELOP_IN_NRF54L15_ENGA)
            if (var1 == 0x1C)
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

/* ========= Errata 10 ========= */
#if    defined (NRF54L15_XXAA) || defined (DEVELOP_IN_NRF54L15) \
    || defined (NRF54L15_ENGA_XXAA) || defined (DEVELOP_IN_NRF54L15_ENGA)
    #define NRF54L_ERRATA_10_PRESENT 1
#else
    #define NRF54L_ERRATA_10_PRESENT 0
#endif

#ifndef NRF54L_ERRATA_10_ENABLE_WORKAROUND
    #define NRF54L_ERRATA_10_ENABLE_WORKAROUND NRF54L_ERRATA_10_PRESENT
#endif

static bool nrf54l_errata_10(void)
{
    #if defined (DISABLE_WORKAROUND_10)
        return false;
    #elif !defined(NRF54L_SERIES)
        return false;
    #else
        #if defined (NRF54L15_XXAA) || defined (DEVELOP_IN_NRF54L15)\
         || defined (NRF54L15_ENGA_XXAA) || defined (DEVELOP_IN_NRF54L15_ENGA)
            uint32_t var1 = *(uint32_t *)0x00FFC340ul;
            uint32_t var2 = *(uint32_t *)0x00FFC344ul;
        #endif
        #if defined (NRF54L15_XXAA) || defined (DEVELOP_IN_NRF54L15)
            if (var1 == 0x1C)
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
        #if defined (NRF54L15_ENGA_XXAA) || defined (DEVELOP_IN_NRF54L15_ENGA)
            if (var1 == 0x1C)
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

/* ========= Errata 13 ========= */
#if    defined (NRF54L15_XXAA) || defined (DEVELOP_IN_NRF54L15) \
    || defined (NRF54L15_ENGA_XXAA) || defined (DEVELOP_IN_NRF54L15_ENGA)
    #define NRF54L_ERRATA_13_PRESENT 1
#else
    #define NRF54L_ERRATA_13_PRESENT 0
#endif

#ifndef NRF54L_ERRATA_13_ENABLE_WORKAROUND
    #define NRF54L_ERRATA_13_ENABLE_WORKAROUND NRF54L_ERRATA_13_PRESENT
#endif

static bool nrf54l_errata_13(void)
{
    #if defined (DISABLE_WORKAROUND_13)
        return false;
    #elif !defined(NRF54L_SERIES)
        return false;
    #else
        #if defined (NRF54L15_XXAA) || defined (DEVELOP_IN_NRF54L15)\
         || defined (NRF54L15_ENGA_XXAA) || defined (DEVELOP_IN_NRF54L15_ENGA)
            uint32_t var1 = *(uint32_t *)0x00FFC340ul;
            uint32_t var2 = *(uint32_t *)0x00FFC344ul;
        #endif
        #if defined (NRF54L15_XXAA) || defined (DEVELOP_IN_NRF54L15)
            if (var1 == 0x1C)
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
        #if defined (NRF54L15_ENGA_XXAA) || defined (DEVELOP_IN_NRF54L15_ENGA)
            if (var1 == 0x1C)
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

/* ========= Errata 16 ========= */
#if    defined (NRF54L15_XXAA) || defined (DEVELOP_IN_NRF54L15) \
    || defined (NRF54L15_ENGA_XXAA) || defined (DEVELOP_IN_NRF54L15_ENGA)
    #define NRF54L_ERRATA_16_PRESENT 1
#else
    #define NRF54L_ERRATA_16_PRESENT 0
#endif

#ifndef NRF54L_ERRATA_16_ENABLE_WORKAROUND
    #define NRF54L_ERRATA_16_ENABLE_WORKAROUND NRF54L_ERRATA_16_PRESENT
#endif

static bool nrf54l_errata_16(void)
{
    #if defined (DISABLE_WORKAROUND_16)
        return false;
    #elif !defined(NRF54L_SERIES)
        return false;
    #else
        #if defined (NRF54L15_XXAA) || defined (DEVELOP_IN_NRF54L15)\
         || defined (NRF54L15_ENGA_XXAA) || defined (DEVELOP_IN_NRF54L15_ENGA)
            uint32_t var1 = *(uint32_t *)0x00FFC340ul;
            uint32_t var2 = *(uint32_t *)0x00FFC344ul;
        #endif
        #if defined (NRF54L15_XXAA) || defined (DEVELOP_IN_NRF54L15)
            if (var1 == 0x1C)
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
        #if defined (NRF54L15_ENGA_XXAA) || defined (DEVELOP_IN_NRF54L15_ENGA)
            if (var1 == 0x1C)
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

/* ========= Errata 17 ========= */
#if    defined (NRF54L15_XXAA) || defined (DEVELOP_IN_NRF54L15) \
    || defined (NRF54L15_ENGA_XXAA) || defined (DEVELOP_IN_NRF54L15_ENGA)
    #define NRF54L_ERRATA_17_PRESENT 1
#else
    #define NRF54L_ERRATA_17_PRESENT 0
#endif

#ifndef NRF54L_ERRATA_17_ENABLE_WORKAROUND
    #define NRF54L_ERRATA_17_ENABLE_WORKAROUND NRF54L_ERRATA_17_PRESENT
#endif

static bool nrf54l_errata_17(void)
{
    #if defined (DISABLE_WORKAROUND_17)
        return false;
    #elif !defined(NRF54L_SERIES)
        return false;
    #else
        #if defined (NRF54L15_XXAA) || defined (DEVELOP_IN_NRF54L15)\
         || defined (NRF54L15_ENGA_XXAA) || defined (DEVELOP_IN_NRF54L15_ENGA)
            uint32_t var1 = *(uint32_t *)0x00FFC340ul;
            uint32_t var2 = *(uint32_t *)0x00FFC344ul;
        #endif
        #if defined (NRF54L15_XXAA) || defined (DEVELOP_IN_NRF54L15)
            if (var1 == 0x1C)
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
        #if defined (NRF54L15_ENGA_XXAA) || defined (DEVELOP_IN_NRF54L15_ENGA)
            if (var1 == 0x1C)
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

/* ========= Errata 18 ========= */
#if    defined (NRF54L15_XXAA) || defined (DEVELOP_IN_NRF54L15) \
    || defined (NRF54L15_ENGA_XXAA) || defined (DEVELOP_IN_NRF54L15_ENGA)
    #define NRF54L_ERRATA_18_PRESENT 1
#else
    #define NRF54L_ERRATA_18_PRESENT 0
#endif

#ifndef NRF54L_ERRATA_18_ENABLE_WORKAROUND
    #define NRF54L_ERRATA_18_ENABLE_WORKAROUND NRF54L_ERRATA_18_PRESENT
#endif

static bool nrf54l_errata_18(void)
{
    #if defined (DISABLE_WORKAROUND_18)
        return false;
    #elif !defined(NRF54L_SERIES)
        return false;
    #else
        #if defined (NRF54L15_XXAA) || defined (DEVELOP_IN_NRF54L15)\
         || defined (NRF54L15_ENGA_XXAA) || defined (DEVELOP_IN_NRF54L15_ENGA)
            uint32_t var1 = *(uint32_t *)0x00FFC340ul;
            uint32_t var2 = *(uint32_t *)0x00FFC344ul;
        #endif
        #if defined (NRF54L15_XXAA) || defined (DEVELOP_IN_NRF54L15)
            if (var1 == 0x1C)
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
        #if defined (NRF54L15_ENGA_XXAA) || defined (DEVELOP_IN_NRF54L15_ENGA)
            if (var1 == 0x1C)
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

/* ========= Errata 19 ========= */
#if    defined (NRF54L15_XXAA) || defined (DEVELOP_IN_NRF54L15) \
    || defined (NRF54L15_ENGA_XXAA) || defined (DEVELOP_IN_NRF54L15_ENGA)
    #define NRF54L_ERRATA_19_PRESENT 1
#else
    #define NRF54L_ERRATA_19_PRESENT 0
#endif

#ifndef NRF54L_ERRATA_19_ENABLE_WORKAROUND
    #define NRF54L_ERRATA_19_ENABLE_WORKAROUND NRF54L_ERRATA_19_PRESENT
#endif

static bool nrf54l_errata_19(void)
{
    #if defined (DISABLE_WORKAROUND_19)
        return false;
    #elif !defined(NRF54L_SERIES)
        return false;
    #else
        #if defined (NRF54L15_XXAA) || defined (DEVELOP_IN_NRF54L15)\
         || defined (NRF54L15_ENGA_XXAA) || defined (DEVELOP_IN_NRF54L15_ENGA)
            uint32_t var1 = *(uint32_t *)0x00FFC340ul;
            uint32_t var2 = *(uint32_t *)0x00FFC344ul;
        #endif
        #if defined (NRF54L15_XXAA) || defined (DEVELOP_IN_NRF54L15)
            if (var1 == 0x1C)
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
        #if defined (NRF54L15_ENGA_XXAA) || defined (DEVELOP_IN_NRF54L15_ENGA)
            if (var1 == 0x1C)
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

/* ========= Errata 20 ========= */
#if    defined (NRF54L15_XXAA) || defined (DEVELOP_IN_NRF54L15) \
    || defined (NRF54L15_ENGA_XXAA) || defined (DEVELOP_IN_NRF54L15_ENGA)
    #define NRF54L_ERRATA_20_PRESENT 1
#else
    #define NRF54L_ERRATA_20_PRESENT 0
#endif

#ifndef NRF54L_ERRATA_20_ENABLE_WORKAROUND
    #define NRF54L_ERRATA_20_ENABLE_WORKAROUND NRF54L_ERRATA_20_PRESENT
#endif

static bool nrf54l_errata_20(void)
{
    #if defined (DISABLE_WORKAROUND_20)
        return false;
    #elif !defined(NRF54L_SERIES)
        return false;
    #else
        #if defined (NRF54L15_XXAA) || defined (DEVELOP_IN_NRF54L15)\
         || defined (NRF54L15_ENGA_XXAA) || defined (DEVELOP_IN_NRF54L15_ENGA)
            uint32_t var1 = *(uint32_t *)0x00FFC340ul;
            uint32_t var2 = *(uint32_t *)0x00FFC344ul;
        #endif
        #if defined (NRF54L15_XXAA) || defined (DEVELOP_IN_NRF54L15)
            if (var1 == 0x1C)
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
        #if defined (NRF54L15_ENGA_XXAA) || defined (DEVELOP_IN_NRF54L15_ENGA)
            if (var1 == 0x1C)
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

#endif /* NRF54L_ERRATAS_H */
