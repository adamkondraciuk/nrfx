#ifndef NRF54H_ERRATAS_H
#define NRF54H_ERRATAS_H

/*

Copyright (c) 2010 - 2025, Nordic Semiconductor ASA

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

static bool nrf54h_errata_6(void) __UNUSED;
static bool nrf54h_errata_8(void) __UNUSED;
static bool nrf54h_errata_12(void) __UNUSED;
static bool nrf54h_errata_13(void) __UNUSED;
static bool nrf54h_errata_14(void) __UNUSED;
static bool nrf54h_errata_19(void) __UNUSED;
static bool nrf54h_errata_20(void) __UNUSED;
static bool nrf54h_errata_21(void) __UNUSED;
static bool nrf54h_errata_23(void) __UNUSED;
static bool nrf54h_errata_25(void) __UNUSED;
static bool nrf54h_errata_26(void) __UNUSED;
static bool nrf54h_errata_27(void) __UNUSED;
static bool nrf54h_errata_31(void) __UNUSED;
static bool nrf54h_errata_32(void) __UNUSED;
static bool nrf54h_errata_34(void) __UNUSED;
static bool nrf54h_errata_35(void) __UNUSED;
static bool nrf54h_errata_36(void) __UNUSED;
static bool nrf54h_errata_37(void) __UNUSED;
static bool nrf54h_errata_39(void) __UNUSED;
static bool nrf54h_errata_40(void) __UNUSED;
static bool nrf54h_errata_41(void) __UNUSED;
static bool nrf54h_errata_42(void) __UNUSED;
static bool nrf54h_errata_43(void) __UNUSED;
static bool nrf54h_errata_44(void) __UNUSED;
static bool nrf54h_errata_45(void) __UNUSED;
static bool nrf54h_errata_46(void) __UNUSED;
static bool nrf54h_errata_47(void) __UNUSED;
static bool nrf54h_errata_50(void) __UNUSED;
static bool nrf54h_errata_51(void) __UNUSED;
static bool nrf54h_errata_53(void) __UNUSED;
static bool nrf54h_errata_55(void) __UNUSED;
static bool nrf54h_errata_56(void) __UNUSED;
static bool nrf54h_errata_57(void) __UNUSED;
static bool nrf54h_errata_58(void) __UNUSED;
static bool nrf54h_errata_62(void) __UNUSED;
static bool nrf54h_errata_63(void) __UNUSED;
static bool nrf54h_errata_64(void) __UNUSED;
static bool nrf54h_errata_65(void) __UNUSED;
static bool nrf54h_errata_66(void) __UNUSED;
static bool nrf54h_errata_67(void) __UNUSED;
static bool nrf54h_errata_69(void) __UNUSED;
static bool nrf54h_errata_70(void) __UNUSED;
static bool nrf54h_errata_71(void) __UNUSED;
static bool nrf54h_errata_72(void) __UNUSED;
static bool nrf54h_errata_73(void) __UNUSED;
static bool nrf54h_errata_74(void) __UNUSED;
static bool nrf54h_errata_75(void) __UNUSED;
static bool nrf54h_errata_76(void) __UNUSED;
static bool nrf54h_errata_77(void) __UNUSED;
static bool nrf54h_errata_78(void) __UNUSED;
static bool nrf54h_errata_84(void) __UNUSED;
static bool nrf54h_errata_92(void) __UNUSED;
static bool nrf54h_errata_93(void) __UNUSED;
static bool nrf54h_errata_98(void) __UNUSED;
static bool nrf54h_errata_102(void) __UNUSED;
static bool nrf54h_errata_103(void) __UNUSED;
static bool nrf54h_errata_104(void) __UNUSED;
static bool nrf54h_errata_105(void) __UNUSED;
static bool nrf54h_errata_106(void) __UNUSED;
static bool nrf54h_errata_107(void) __UNUSED;
static bool nrf54h_errata_109(void) __UNUSED;
static bool nrf54h_errata_110(void) __UNUSED;
static bool nrf54h_errata_111(void) __UNUSED;
static bool nrf54h_errata_112(void) __UNUSED;
static bool nrf54h_errata_115(void) __UNUSED;
static bool nrf54h_errata_116(void) __UNUSED;
static bool nrf54h_errata_117(void) __UNUSED;
static bool nrf54h_errata_118(void) __UNUSED;
static bool nrf54h_errata_119(void) __UNUSED;
static bool nrf54h_errata_120(void) __UNUSED;
static bool nrf54h_errata_121(void) __UNUSED;
static bool nrf54h_errata_122(void) __UNUSED;
static bool nrf54h_errata_123(void) __UNUSED;
static bool nrf54h_errata_124(void) __UNUSED;
static bool nrf54h_errata_125(void) __UNUSED;
static bool nrf54h_errata_126(void) __UNUSED;
static bool nrf54h_errata_127(void) __UNUSED;
static bool nrf54h_errata_128(void) __UNUSED;
static bool nrf54h_errata_129(void) __UNUSED;
static bool nrf54h_errata_130(void) __UNUSED;
static bool nrf54h_errata_131(void) __UNUSED;
static bool nrf54h_errata_132(void) __UNUSED;
static bool nrf54h_errata_133(void) __UNUSED;
static bool nrf54h_errata_134(void) __UNUSED;
static bool nrf54h_errata_135(void) __UNUSED;
static bool nrf54h_errata_136(void) __UNUSED;
static bool nrf54h_errata_137(void) __UNUSED;
static bool nrf54h_errata_138(void) __UNUSED;
static bool nrf54h_errata_139(void) __UNUSED;
static bool nrf54h_errata_140(void) __UNUSED;
static bool nrf54h_errata_141(void) __UNUSED;
static bool nrf54h_errata_142(void) __UNUSED;
static bool nrf54h_errata_143(void) __UNUSED;
static bool nrf54h_errata_145(void) __UNUSED;
static bool nrf54h_errata_146(void) __UNUSED;
static bool nrf54h_errata_148(void) __UNUSED;
static bool nrf54h_errata_149(void) __UNUSED;
static bool nrf54h_errata_151(void) __UNUSED;
static bool nrf54h_errata_152(void) __UNUSED;
static bool nrf54h_errata_153(void) __UNUSED;
static bool nrf54h_errata_155(void) __UNUSED;
static bool nrf54h_errata_156(void) __UNUSED;
static bool nrf54h_errata_157(void) __UNUSED;
static bool nrf54h_errata_158(void) __UNUSED;
static bool nrf54h_errata_159(void) __UNUSED;
static bool nrf54h_errata_160(void) __UNUSED;
static bool nrf54h_errata_161(void) __UNUSED;
static bool nrf54h_errata_162(void) __UNUSED;
static bool nrf54h_errata_163(void) __UNUSED;
static bool nrf54h_errata_164(void) __UNUSED;
static bool nrf54h_errata_165(void) __UNUSED;
static bool nrf54h_errata_166(void) __UNUSED;
static bool nrf54h_errata_169(void) __UNUSED;
static bool nrf54h_errata_171(void) __UNUSED;
static bool nrf54h_errata_172(void) __UNUSED;
static bool nrf54h_errata_173(void) __UNUSED;
static bool nrf54h_errata_175(void) __UNUSED;
static bool nrf54h_errata_177(void) __UNUSED;
static bool nrf54h_errata_178(void) __UNUSED;
static bool nrf54h_errata_179(void) __UNUSED;
static bool nrf54h_errata_182(void) __UNUSED;
static bool nrf54h_errata_183(void) __UNUSED;
static bool nrf54h_errata_184(void) __UNUSED;
static bool nrf54h_errata_185(void) __UNUSED;
static bool nrf54h_errata_186(void) __UNUSED;
static bool nrf54h_errata_187(void) __UNUSED;
static bool nrf54h_errata_189(void) __UNUSED;
static bool nrf54h_errata_190(void) __UNUSED;
static bool nrf54h_errata_191(void) __UNUSED;
static bool nrf54h_errata_192(void) __UNUSED;
static bool nrf54h_errata_193(void) __UNUSED;
static bool nrf54h_errata_194(void) __UNUSED;
static bool nrf54h_errata_195(void) __UNUSED;
static bool nrf54h_errata_196(void) __UNUSED;
static bool nrf54h_errata_198(void) __UNUSED;
static bool nrf54h_errata_200(void) __UNUSED;
static bool nrf54h_errata_201(void) __UNUSED;
static bool nrf54h_errata_202(void) __UNUSED;
static bool nrf54h_errata_205(void) __UNUSED;
static bool nrf54h_errata_206(void) __UNUSED;
static bool nrf54h_errata_207(void) __UNUSED;
static bool nrf54h_errata_208(void) __UNUSED;
static bool nrf54h_errata_209(void) __UNUSED;
static bool nrf54h_errata_210(void) __UNUSED;
static bool nrf54h_errata_211(void) __UNUSED;
static bool nrf54h_errata_212(void) __UNUSED;
static bool nrf54h_errata_213(void) __UNUSED;

/* ========= Errata 6 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_6_PRESENT 1
#else
    #define NRF54H_ERRATA_6_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_6_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_6_ENABLE_WORKAROUND NRF54H_ERRATA_6_PRESENT
#endif

static bool nrf54h_errata_6(void)
{
    #if defined (DISABLE_WORKAROUND_6)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
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
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_8_PRESENT 1
#else
    #define NRF54H_ERRATA_8_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_8_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_8_ENABLE_WORKAROUND NRF54H_ERRATA_8_PRESENT
#endif

static bool nrf54h_errata_8(void)
{
    #if defined (DISABLE_WORKAROUND_8)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 12 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_12_PRESENT 1
#else
    #define NRF54H_ERRATA_12_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_12_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_12_ENABLE_WORKAROUND NRF54H_ERRATA_12_PRESENT
#endif

static bool nrf54h_errata_12(void)
{
    #if defined (DISABLE_WORKAROUND_12)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
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
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_13_PRESENT 1
#else
    #define NRF54H_ERRATA_13_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_13_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_13_ENABLE_WORKAROUND NRF54H_ERRATA_13_PRESENT
#endif

static bool nrf54h_errata_13(void)
{
    #if defined (DISABLE_WORKAROUND_13)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 14 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_14_PRESENT 1
#else
    #define NRF54H_ERRATA_14_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_14_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_14_ENABLE_WORKAROUND NRF54H_ERRATA_14_PRESENT
#endif

static bool nrf54h_errata_14(void)
{
    #if defined (DISABLE_WORKAROUND_14)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
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
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_19_PRESENT 1
#else
    #define NRF54H_ERRATA_19_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_19_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_19_ENABLE_WORKAROUND NRF54H_ERRATA_19_PRESENT
#endif

static bool nrf54h_errata_19(void)
{
    #if defined (DISABLE_WORKAROUND_19)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
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
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_20_PRESENT 1
#else
    #define NRF54H_ERRATA_20_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_20_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_20_ENABLE_WORKAROUND NRF54H_ERRATA_20_PRESENT
#endif

static bool nrf54h_errata_20(void)
{
    #if defined (DISABLE_WORKAROUND_20)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 21 ========= */
#define NRF54H_ERRATA_21_PRESENT 0

#ifndef NRF54H_ERRATA_21_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_21_ENABLE_WORKAROUND NRF54H_ERRATA_21_PRESENT
#endif

static bool nrf54h_errata_21(void)
{
    #if defined (DISABLE_WORKAROUND_21)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        return false;
    #endif
}

/* ========= Errata 23 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_23_PRESENT 1
#else
    #define NRF54H_ERRATA_23_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_23_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_23_ENABLE_WORKAROUND NRF54H_ERRATA_23_PRESENT
#endif

static bool nrf54h_errata_23(void)
{
    #if defined (DISABLE_WORKAROUND_23)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 25 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_25_PRESENT 1
#else
    #define NRF54H_ERRATA_25_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_25_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_25_ENABLE_WORKAROUND NRF54H_ERRATA_25_PRESENT
#endif

static bool nrf54h_errata_25(void)
{
    #if defined (DISABLE_WORKAROUND_25)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 26 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_26_PRESENT 1
#else
    #define NRF54H_ERRATA_26_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_26_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_26_ENABLE_WORKAROUND NRF54H_ERRATA_26_PRESENT
#endif

static bool nrf54h_errata_26(void)
{
    #if defined (DISABLE_WORKAROUND_26)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 27 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_27_PRESENT 1
#else
    #define NRF54H_ERRATA_27_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_27_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_27_ENABLE_WORKAROUND NRF54H_ERRATA_27_PRESENT
#endif

static bool nrf54h_errata_27(void)
{
    #if defined (DISABLE_WORKAROUND_27)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 31 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_31_PRESENT 1
#else
    #define NRF54H_ERRATA_31_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_31_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_31_ENABLE_WORKAROUND NRF54H_ERRATA_31_PRESENT
#endif

static bool nrf54h_errata_31(void)
{
    #if defined (DISABLE_WORKAROUND_31)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 32 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_32_PRESENT 1
#else
    #define NRF54H_ERRATA_32_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_32_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_32_ENABLE_WORKAROUND NRF54H_ERRATA_32_PRESENT
#endif

static bool nrf54h_errata_32(void)
{
    #if defined (DISABLE_WORKAROUND_32)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 34 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_34_PRESENT 1
#else
    #define NRF54H_ERRATA_34_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_34_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_34_ENABLE_WORKAROUND NRF54H_ERRATA_34_PRESENT
#endif

static bool nrf54h_errata_34(void)
{
    #if defined (DISABLE_WORKAROUND_34)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 35 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_35_PRESENT 1
#else
    #define NRF54H_ERRATA_35_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_35_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_35_ENABLE_WORKAROUND NRF54H_ERRATA_35_PRESENT
#endif

static bool nrf54h_errata_35(void)
{
    #if defined (DISABLE_WORKAROUND_35)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 36 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_36_PRESENT 1
#else
    #define NRF54H_ERRATA_36_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_36_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_36_ENABLE_WORKAROUND NRF54H_ERRATA_36_PRESENT
#endif

static bool nrf54h_errata_36(void)
{
    #if defined (DISABLE_WORKAROUND_36)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 37 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_37_PRESENT 1
#else
    #define NRF54H_ERRATA_37_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_37_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_37_ENABLE_WORKAROUND NRF54H_ERRATA_37_PRESENT
#endif

static bool nrf54h_errata_37(void)
{
    #if defined (DISABLE_WORKAROUND_37)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 39 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_39_PRESENT 1
#else
    #define NRF54H_ERRATA_39_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_39_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_39_ENABLE_WORKAROUND NRF54H_ERRATA_39_PRESENT
#endif

static bool nrf54h_errata_39(void)
{
    #if defined (DISABLE_WORKAROUND_39)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 40 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_40_PRESENT 1
#else
    #define NRF54H_ERRATA_40_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_40_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_40_ENABLE_WORKAROUND NRF54H_ERRATA_40_PRESENT
#endif

static bool nrf54h_errata_40(void)
{
    #if defined (DISABLE_WORKAROUND_40)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 41 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_41_PRESENT 1
#else
    #define NRF54H_ERRATA_41_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_41_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_41_ENABLE_WORKAROUND NRF54H_ERRATA_41_PRESENT
#endif

static bool nrf54h_errata_41(void)
{
    #if defined (DISABLE_WORKAROUND_41)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 42 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_42_PRESENT 1
#else
    #define NRF54H_ERRATA_42_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_42_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_42_ENABLE_WORKAROUND NRF54H_ERRATA_42_PRESENT
#endif

static bool nrf54h_errata_42(void)
{
    #if defined (DISABLE_WORKAROUND_42)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 43 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_43_PRESENT 1
#else
    #define NRF54H_ERRATA_43_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_43_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_43_ENABLE_WORKAROUND NRF54H_ERRATA_43_PRESENT
#endif

static bool nrf54h_errata_43(void)
{
    #if defined (DISABLE_WORKAROUND_43)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 44 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_44_PRESENT 1
#else
    #define NRF54H_ERRATA_44_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_44_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_44_ENABLE_WORKAROUND NRF54H_ERRATA_44_PRESENT
#endif

static bool nrf54h_errata_44(void)
{
    #if defined (DISABLE_WORKAROUND_44)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 45 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_45_PRESENT 1
#else
    #define NRF54H_ERRATA_45_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_45_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_45_ENABLE_WORKAROUND NRF54H_ERRATA_45_PRESENT
#endif

static bool nrf54h_errata_45(void)
{
    #if defined (DISABLE_WORKAROUND_45)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 46 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_46_PRESENT 1
#else
    #define NRF54H_ERRATA_46_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_46_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_46_ENABLE_WORKAROUND NRF54H_ERRATA_46_PRESENT
#endif

static bool nrf54h_errata_46(void)
{
    #if defined (DISABLE_WORKAROUND_46)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 47 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_47_PRESENT 1
#else
    #define NRF54H_ERRATA_47_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_47_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_47_ENABLE_WORKAROUND NRF54H_ERRATA_47_PRESENT
#endif

static bool nrf54h_errata_47(void)
{
    #if defined (DISABLE_WORKAROUND_47)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 50 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_50_PRESENT 1
#else
    #define NRF54H_ERRATA_50_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_50_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_50_ENABLE_WORKAROUND NRF54H_ERRATA_50_PRESENT
#endif

static bool nrf54h_errata_50(void)
{
    #if defined (DISABLE_WORKAROUND_50)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 51 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_51_PRESENT 1
#else
    #define NRF54H_ERRATA_51_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_51_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_51_ENABLE_WORKAROUND NRF54H_ERRATA_51_PRESENT
#endif

static bool nrf54h_errata_51(void)
{
    #if defined (DISABLE_WORKAROUND_51)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 53 ========= */
#define NRF54H_ERRATA_53_PRESENT 0

#ifndef NRF54H_ERRATA_53_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_53_ENABLE_WORKAROUND NRF54H_ERRATA_53_PRESENT
#endif

static bool nrf54h_errata_53(void)
{
    #if defined (DISABLE_WORKAROUND_53)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        return false;
    #endif
}

/* ========= Errata 55 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_55_PRESENT 1
#else
    #define NRF54H_ERRATA_55_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_55_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_55_ENABLE_WORKAROUND NRF54H_ERRATA_55_PRESENT
#endif

static bool nrf54h_errata_55(void)
{
    #if defined (DISABLE_WORKAROUND_55)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 56 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_56_PRESENT 1
#else
    #define NRF54H_ERRATA_56_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_56_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_56_ENABLE_WORKAROUND NRF54H_ERRATA_56_PRESENT
#endif

static bool nrf54h_errata_56(void)
{
    #if defined (DISABLE_WORKAROUND_56)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 57 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_57_PRESENT 1
#else
    #define NRF54H_ERRATA_57_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_57_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_57_ENABLE_WORKAROUND NRF54H_ERRATA_57_PRESENT
#endif

static bool nrf54h_errata_57(void)
{
    #if defined (DISABLE_WORKAROUND_57)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 58 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_58_PRESENT 1
#else
    #define NRF54H_ERRATA_58_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_58_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_58_ENABLE_WORKAROUND NRF54H_ERRATA_58_PRESENT
#endif

static bool nrf54h_errata_58(void)
{
    #if defined (DISABLE_WORKAROUND_58)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 62 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_62_PRESENT 1
#else
    #define NRF54H_ERRATA_62_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_62_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_62_ENABLE_WORKAROUND NRF54H_ERRATA_62_PRESENT
#endif

static bool nrf54h_errata_62(void)
{
    #if defined (DISABLE_WORKAROUND_62)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 63 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_63_PRESENT 1
#else
    #define NRF54H_ERRATA_63_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_63_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_63_ENABLE_WORKAROUND NRF54H_ERRATA_63_PRESENT
#endif

static bool nrf54h_errata_63(void)
{
    #if defined (DISABLE_WORKAROUND_63)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 64 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_64_PRESENT 1
#else
    #define NRF54H_ERRATA_64_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_64_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_64_ENABLE_WORKAROUND NRF54H_ERRATA_64_PRESENT
#endif

static bool nrf54h_errata_64(void)
{
    #if defined (DISABLE_WORKAROUND_64)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 65 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_65_PRESENT 1
#else
    #define NRF54H_ERRATA_65_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_65_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_65_ENABLE_WORKAROUND NRF54H_ERRATA_65_PRESENT
#endif

static bool nrf54h_errata_65(void)
{
    #if defined (DISABLE_WORKAROUND_65)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 66 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_66_PRESENT 1
#else
    #define NRF54H_ERRATA_66_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_66_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_66_ENABLE_WORKAROUND NRF54H_ERRATA_66_PRESENT
#endif

static bool nrf54h_errata_66(void)
{
    #if defined (DISABLE_WORKAROUND_66)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 67 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_67_PRESENT 1
#else
    #define NRF54H_ERRATA_67_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_67_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_67_ENABLE_WORKAROUND NRF54H_ERRATA_67_PRESENT
#endif

static bool nrf54h_errata_67(void)
{
    #if defined (DISABLE_WORKAROUND_67)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 69 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_69_PRESENT 1
#else
    #define NRF54H_ERRATA_69_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_69_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_69_ENABLE_WORKAROUND NRF54H_ERRATA_69_PRESENT
#endif

static bool nrf54h_errata_69(void)
{
    #if defined (DISABLE_WORKAROUND_69)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 70 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_70_PRESENT 1
#else
    #define NRF54H_ERRATA_70_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_70_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_70_ENABLE_WORKAROUND NRF54H_ERRATA_70_PRESENT
#endif

static bool nrf54h_errata_70(void)
{
    #if defined (DISABLE_WORKAROUND_70)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 71 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_71_PRESENT 1
#else
    #define NRF54H_ERRATA_71_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_71_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_71_ENABLE_WORKAROUND NRF54H_ERRATA_71_PRESENT
#endif

static bool nrf54h_errata_71(void)
{
    #if defined (DISABLE_WORKAROUND_71)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 72 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_72_PRESENT 1
#else
    #define NRF54H_ERRATA_72_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_72_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_72_ENABLE_WORKAROUND NRF54H_ERRATA_72_PRESENT
#endif

static bool nrf54h_errata_72(void)
{
    #if defined (DISABLE_WORKAROUND_72)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 73 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_73_PRESENT 1
#else
    #define NRF54H_ERRATA_73_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_73_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_73_ENABLE_WORKAROUND NRF54H_ERRATA_73_PRESENT
#endif

static bool nrf54h_errata_73(void)
{
    #if defined (DISABLE_WORKAROUND_73)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 74 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_74_PRESENT 1
#else
    #define NRF54H_ERRATA_74_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_74_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_74_ENABLE_WORKAROUND NRF54H_ERRATA_74_PRESENT
#endif

static bool nrf54h_errata_74(void)
{
    #if defined (DISABLE_WORKAROUND_74)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 75 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_75_PRESENT 1
#else
    #define NRF54H_ERRATA_75_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_75_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_75_ENABLE_WORKAROUND NRF54H_ERRATA_75_PRESENT
#endif

static bool nrf54h_errata_75(void)
{
    #if defined (DISABLE_WORKAROUND_75)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 76 ========= */
#define NRF54H_ERRATA_76_PRESENT 0

#ifndef NRF54H_ERRATA_76_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_76_ENABLE_WORKAROUND NRF54H_ERRATA_76_PRESENT
#endif

static bool nrf54h_errata_76(void)
{
    #if defined (DISABLE_WORKAROUND_76)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        return false;
    #endif
}

/* ========= Errata 77 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
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
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 78 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_78_PRESENT 1
#else
    #define NRF54H_ERRATA_78_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_78_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_78_ENABLE_WORKAROUND NRF54H_ERRATA_78_PRESENT
#endif

static bool nrf54h_errata_78(void)
{
    #if defined (DISABLE_WORKAROUND_78)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 84 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_84_PRESENT 1
#else
    #define NRF54H_ERRATA_84_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_84_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_84_ENABLE_WORKAROUND NRF54H_ERRATA_84_PRESENT
#endif

static bool nrf54h_errata_84(void)
{
    #if defined (DISABLE_WORKAROUND_84)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 92 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_92_PRESENT 1
#else
    #define NRF54H_ERRATA_92_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_92_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_92_ENABLE_WORKAROUND NRF54H_ERRATA_92_PRESENT
#endif

static bool nrf54h_errata_92(void)
{
    #if defined (DISABLE_WORKAROUND_92)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 93 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_93_PRESENT 1
#else
    #define NRF54H_ERRATA_93_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_93_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_93_ENABLE_WORKAROUND NRF54H_ERRATA_93_PRESENT
#endif

static bool nrf54h_errata_93(void)
{
    #if defined (DISABLE_WORKAROUND_93)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 98 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_98_PRESENT 1
#else
    #define NRF54H_ERRATA_98_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_98_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_98_ENABLE_WORKAROUND NRF54H_ERRATA_98_PRESENT
#endif

static bool nrf54h_errata_98(void)
{
    #if defined (DISABLE_WORKAROUND_98)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 102 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_102_PRESENT 1
#else
    #define NRF54H_ERRATA_102_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_102_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_102_ENABLE_WORKAROUND NRF54H_ERRATA_102_PRESENT
#endif

static bool nrf54h_errata_102(void)
{
    #if defined (DISABLE_WORKAROUND_102)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 103 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_103_PRESENT 1
#else
    #define NRF54H_ERRATA_103_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_103_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_103_ENABLE_WORKAROUND NRF54H_ERRATA_103_PRESENT
#endif

static bool nrf54h_errata_103(void)
{
    #if defined (DISABLE_WORKAROUND_103)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 104 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_104_PRESENT 1
#else
    #define NRF54H_ERRATA_104_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_104_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_104_ENABLE_WORKAROUND NRF54H_ERRATA_104_PRESENT
#endif

static bool nrf54h_errata_104(void)
{
    #if defined (DISABLE_WORKAROUND_104)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 105 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_105_PRESENT 1
#else
    #define NRF54H_ERRATA_105_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_105_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_105_ENABLE_WORKAROUND NRF54H_ERRATA_105_PRESENT
#endif

static bool nrf54h_errata_105(void)
{
    #if defined (DISABLE_WORKAROUND_105)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 106 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_106_PRESENT 1
#else
    #define NRF54H_ERRATA_106_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_106_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_106_ENABLE_WORKAROUND NRF54H_ERRATA_106_PRESENT
#endif

static bool nrf54h_errata_106(void)
{
    #if defined (DISABLE_WORKAROUND_106)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 107 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_107_PRESENT 1
#else
    #define NRF54H_ERRATA_107_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_107_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_107_ENABLE_WORKAROUND NRF54H_ERRATA_107_PRESENT
#endif

static bool nrf54h_errata_107(void)
{
    #if defined (DISABLE_WORKAROUND_107)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 109 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_109_PRESENT 1
#else
    #define NRF54H_ERRATA_109_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_109_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_109_ENABLE_WORKAROUND NRF54H_ERRATA_109_PRESENT
#endif

static bool nrf54h_errata_109(void)
{
    #if defined (DISABLE_WORKAROUND_109)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 110 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_110_PRESENT 1
#else
    #define NRF54H_ERRATA_110_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_110_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_110_ENABLE_WORKAROUND NRF54H_ERRATA_110_PRESENT
#endif

static bool nrf54h_errata_110(void)
{
    #if defined (DISABLE_WORKAROUND_110)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 111 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_111_PRESENT 1
#else
    #define NRF54H_ERRATA_111_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_111_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_111_ENABLE_WORKAROUND NRF54H_ERRATA_111_PRESENT
#endif

static bool nrf54h_errata_111(void)
{
    #if defined (DISABLE_WORKAROUND_111)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 112 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_112_PRESENT 1
#else
    #define NRF54H_ERRATA_112_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_112_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_112_ENABLE_WORKAROUND NRF54H_ERRATA_112_PRESENT
#endif

static bool nrf54h_errata_112(void)
{
    #if defined (DISABLE_WORKAROUND_112)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 115 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_115_PRESENT 1
#else
    #define NRF54H_ERRATA_115_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_115_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_115_ENABLE_WORKAROUND NRF54H_ERRATA_115_PRESENT
#endif

static bool nrf54h_errata_115(void)
{
    #if defined (DISABLE_WORKAROUND_115)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 116 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_116_PRESENT 1
#else
    #define NRF54H_ERRATA_116_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_116_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_116_ENABLE_WORKAROUND NRF54H_ERRATA_116_PRESENT
#endif

static bool nrf54h_errata_116(void)
{
    #if defined (DISABLE_WORKAROUND_116)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 117 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_117_PRESENT 1
#else
    #define NRF54H_ERRATA_117_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_117_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_117_ENABLE_WORKAROUND NRF54H_ERRATA_117_PRESENT
#endif

static bool nrf54h_errata_117(void)
{
    #if defined (DISABLE_WORKAROUND_117)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 118 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_118_PRESENT 1
#else
    #define NRF54H_ERRATA_118_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_118_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_118_ENABLE_WORKAROUND NRF54H_ERRATA_118_PRESENT
#endif

static bool nrf54h_errata_118(void)
{
    #if defined (DISABLE_WORKAROUND_118)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 119 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_119_PRESENT 1
#else
    #define NRF54H_ERRATA_119_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_119_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_119_ENABLE_WORKAROUND NRF54H_ERRATA_119_PRESENT
#endif

static bool nrf54h_errata_119(void)
{
    #if defined (DISABLE_WORKAROUND_119)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 120 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_120_PRESENT 1
#else
    #define NRF54H_ERRATA_120_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_120_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_120_ENABLE_WORKAROUND NRF54H_ERRATA_120_PRESENT
#endif

static bool nrf54h_errata_120(void)
{
    #if defined (DISABLE_WORKAROUND_120)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 121 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_121_PRESENT 1
#else
    #define NRF54H_ERRATA_121_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_121_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_121_ENABLE_WORKAROUND NRF54H_ERRATA_121_PRESENT
#endif

static bool nrf54h_errata_121(void)
{
    #if defined (DISABLE_WORKAROUND_121)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 122 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_122_PRESENT 1
#else
    #define NRF54H_ERRATA_122_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_122_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_122_ENABLE_WORKAROUND NRF54H_ERRATA_122_PRESENT
#endif

static bool nrf54h_errata_122(void)
{
    #if defined (DISABLE_WORKAROUND_122)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 123 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_123_PRESENT 1
#else
    #define NRF54H_ERRATA_123_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_123_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_123_ENABLE_WORKAROUND NRF54H_ERRATA_123_PRESENT
#endif

static bool nrf54h_errata_123(void)
{
    #if defined (DISABLE_WORKAROUND_123)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 124 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_124_PRESENT 1
#else
    #define NRF54H_ERRATA_124_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_124_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_124_ENABLE_WORKAROUND NRF54H_ERRATA_124_PRESENT
#endif

static bool nrf54h_errata_124(void)
{
    #if defined (DISABLE_WORKAROUND_124)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 125 ========= */
#define NRF54H_ERRATA_125_PRESENT 0

#ifndef NRF54H_ERRATA_125_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_125_ENABLE_WORKAROUND NRF54H_ERRATA_125_PRESENT
#endif

static bool nrf54h_errata_125(void)
{
    #if defined (DISABLE_WORKAROUND_125)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        return false;
    #endif
}

/* ========= Errata 126 ========= */
#define NRF54H_ERRATA_126_PRESENT 0

#ifndef NRF54H_ERRATA_126_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_126_ENABLE_WORKAROUND NRF54H_ERRATA_126_PRESENT
#endif

static bool nrf54h_errata_126(void)
{
    #if defined (DISABLE_WORKAROUND_126)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        return false;
    #endif
}

/* ========= Errata 127 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_127_PRESENT 1
#else
    #define NRF54H_ERRATA_127_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_127_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_127_ENABLE_WORKAROUND NRF54H_ERRATA_127_PRESENT
#endif

static bool nrf54h_errata_127(void)
{
    #if defined (DISABLE_WORKAROUND_127)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 128 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_128_PRESENT 1
#else
    #define NRF54H_ERRATA_128_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_128_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_128_ENABLE_WORKAROUND NRF54H_ERRATA_128_PRESENT
#endif

static bool nrf54h_errata_128(void)
{
    #if defined (DISABLE_WORKAROUND_128)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 129 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_129_PRESENT 1
#else
    #define NRF54H_ERRATA_129_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_129_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_129_ENABLE_WORKAROUND NRF54H_ERRATA_129_PRESENT
#endif

static bool nrf54h_errata_129(void)
{
    #if defined (DISABLE_WORKAROUND_129)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 130 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_130_PRESENT 1
#else
    #define NRF54H_ERRATA_130_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_130_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_130_ENABLE_WORKAROUND NRF54H_ERRATA_130_PRESENT
#endif

static bool nrf54h_errata_130(void)
{
    #if defined (DISABLE_WORKAROUND_130)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 131 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_131_PRESENT 1
#else
    #define NRF54H_ERRATA_131_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_131_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_131_ENABLE_WORKAROUND NRF54H_ERRATA_131_PRESENT
#endif

static bool nrf54h_errata_131(void)
{
    #if defined (DISABLE_WORKAROUND_131)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 132 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_132_PRESENT 1
#else
    #define NRF54H_ERRATA_132_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_132_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_132_ENABLE_WORKAROUND NRF54H_ERRATA_132_PRESENT
#endif

static bool nrf54h_errata_132(void)
{
    #if defined (DISABLE_WORKAROUND_132)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 133 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_133_PRESENT 1
#else
    #define NRF54H_ERRATA_133_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_133_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_133_ENABLE_WORKAROUND NRF54H_ERRATA_133_PRESENT
#endif

static bool nrf54h_errata_133(void)
{
    #if defined (DISABLE_WORKAROUND_133)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 134 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_134_PRESENT 1
#else
    #define NRF54H_ERRATA_134_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_134_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_134_ENABLE_WORKAROUND NRF54H_ERRATA_134_PRESENT
#endif

static bool nrf54h_errata_134(void)
{
    #if defined (DISABLE_WORKAROUND_134)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 135 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_135_PRESENT 1
#else
    #define NRF54H_ERRATA_135_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_135_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_135_ENABLE_WORKAROUND NRF54H_ERRATA_135_PRESENT
#endif

static bool nrf54h_errata_135(void)
{
    #if defined (DISABLE_WORKAROUND_135)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 136 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_136_PRESENT 1
#else
    #define NRF54H_ERRATA_136_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_136_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_136_ENABLE_WORKAROUND NRF54H_ERRATA_136_PRESENT
#endif

static bool nrf54h_errata_136(void)
{
    #if defined (DISABLE_WORKAROUND_136)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 137 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_137_PRESENT 1
#else
    #define NRF54H_ERRATA_137_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_137_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_137_ENABLE_WORKAROUND NRF54H_ERRATA_137_PRESENT
#endif

static bool nrf54h_errata_137(void)
{
    #if defined (DISABLE_WORKAROUND_137)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 138 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_138_PRESENT 1
#else
    #define NRF54H_ERRATA_138_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_138_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_138_ENABLE_WORKAROUND NRF54H_ERRATA_138_PRESENT
#endif

static bool nrf54h_errata_138(void)
{
    #if defined (DISABLE_WORKAROUND_138)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 139 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_139_PRESENT 1
#else
    #define NRF54H_ERRATA_139_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_139_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_139_ENABLE_WORKAROUND NRF54H_ERRATA_139_PRESENT
#endif

static bool nrf54h_errata_139(void)
{
    #if defined (DISABLE_WORKAROUND_139)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 140 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_140_PRESENT 1
#else
    #define NRF54H_ERRATA_140_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_140_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_140_ENABLE_WORKAROUND NRF54H_ERRATA_140_PRESENT
#endif

static bool nrf54h_errata_140(void)
{
    #if defined (DISABLE_WORKAROUND_140)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 141 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_141_PRESENT 1
#else
    #define NRF54H_ERRATA_141_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_141_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_141_ENABLE_WORKAROUND NRF54H_ERRATA_141_PRESENT
#endif

static bool nrf54h_errata_141(void)
{
    #if defined (DISABLE_WORKAROUND_141)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 142 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_142_PRESENT 1
#else
    #define NRF54H_ERRATA_142_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_142_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_142_ENABLE_WORKAROUND NRF54H_ERRATA_142_PRESENT
#endif

static bool nrf54h_errata_142(void)
{
    #if defined (DISABLE_WORKAROUND_142)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 143 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_143_PRESENT 1
#else
    #define NRF54H_ERRATA_143_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_143_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_143_ENABLE_WORKAROUND NRF54H_ERRATA_143_PRESENT
#endif

static bool nrf54h_errata_143(void)
{
    #if defined (DISABLE_WORKAROUND_143)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 145 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_145_PRESENT 1
#else
    #define NRF54H_ERRATA_145_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_145_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_145_ENABLE_WORKAROUND NRF54H_ERRATA_145_PRESENT
#endif

static bool nrf54h_errata_145(void)
{
    #if defined (DISABLE_WORKAROUND_145)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 146 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_146_PRESENT 1
#else
    #define NRF54H_ERRATA_146_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_146_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_146_ENABLE_WORKAROUND NRF54H_ERRATA_146_PRESENT
#endif

static bool nrf54h_errata_146(void)
{
    #if defined (DISABLE_WORKAROUND_146)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 148 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_148_PRESENT 1
#else
    #define NRF54H_ERRATA_148_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_148_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_148_ENABLE_WORKAROUND NRF54H_ERRATA_148_PRESENT
#endif

static bool nrf54h_errata_148(void)
{
    #if defined (DISABLE_WORKAROUND_148)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 149 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_149_PRESENT 1
#else
    #define NRF54H_ERRATA_149_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_149_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_149_ENABLE_WORKAROUND NRF54H_ERRATA_149_PRESENT
#endif

static bool nrf54h_errata_149(void)
{
    #if defined (DISABLE_WORKAROUND_149)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 151 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_151_PRESENT 1
#else
    #define NRF54H_ERRATA_151_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_151_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_151_ENABLE_WORKAROUND NRF54H_ERRATA_151_PRESENT
#endif

static bool nrf54h_errata_151(void)
{
    #if defined (DISABLE_WORKAROUND_151)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 152 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_152_PRESENT 1
#else
    #define NRF54H_ERRATA_152_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_152_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_152_ENABLE_WORKAROUND NRF54H_ERRATA_152_PRESENT
#endif

static bool nrf54h_errata_152(void)
{
    #if defined (DISABLE_WORKAROUND_152)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 153 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_153_PRESENT 1
#else
    #define NRF54H_ERRATA_153_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_153_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_153_ENABLE_WORKAROUND NRF54H_ERRATA_153_PRESENT
#endif

static bool nrf54h_errata_153(void)
{
    #if defined (DISABLE_WORKAROUND_153)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 155 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_155_PRESENT 1
#else
    #define NRF54H_ERRATA_155_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_155_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_155_ENABLE_WORKAROUND NRF54H_ERRATA_155_PRESENT
#endif

static bool nrf54h_errata_155(void)
{
    #if defined (DISABLE_WORKAROUND_155)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 156 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_156_PRESENT 1
#else
    #define NRF54H_ERRATA_156_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_156_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_156_ENABLE_WORKAROUND NRF54H_ERRATA_156_PRESENT
#endif

static bool nrf54h_errata_156(void)
{
    #if defined (DISABLE_WORKAROUND_156)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 157 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_157_PRESENT 1
#else
    #define NRF54H_ERRATA_157_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_157_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_157_ENABLE_WORKAROUND NRF54H_ERRATA_157_PRESENT
#endif

static bool nrf54h_errata_157(void)
{
    #if defined (DISABLE_WORKAROUND_157)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 158 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_158_PRESENT 1
#else
    #define NRF54H_ERRATA_158_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_158_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_158_ENABLE_WORKAROUND NRF54H_ERRATA_158_PRESENT
#endif

static bool nrf54h_errata_158(void)
{
    #if defined (DISABLE_WORKAROUND_158)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 159 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_159_PRESENT 1
#else
    #define NRF54H_ERRATA_159_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_159_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_159_ENABLE_WORKAROUND NRF54H_ERRATA_159_PRESENT
#endif

static bool nrf54h_errata_159(void)
{
    #if defined (DISABLE_WORKAROUND_159)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 160 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_160_PRESENT 1
#else
    #define NRF54H_ERRATA_160_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_160_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_160_ENABLE_WORKAROUND NRF54H_ERRATA_160_PRESENT
#endif

static bool nrf54h_errata_160(void)
{
    #if defined (DISABLE_WORKAROUND_160)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 161 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_161_PRESENT 1
#else
    #define NRF54H_ERRATA_161_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_161_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_161_ENABLE_WORKAROUND NRF54H_ERRATA_161_PRESENT
#endif

static bool nrf54h_errata_161(void)
{
    #if defined (DISABLE_WORKAROUND_161)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 162 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_162_PRESENT 1
#else
    #define NRF54H_ERRATA_162_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_162_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_162_ENABLE_WORKAROUND NRF54H_ERRATA_162_PRESENT
#endif

static bool nrf54h_errata_162(void)
{
    #if defined (DISABLE_WORKAROUND_162)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 163 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_163_PRESENT 1
#else
    #define NRF54H_ERRATA_163_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_163_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_163_ENABLE_WORKAROUND NRF54H_ERRATA_163_PRESENT
#endif

static bool nrf54h_errata_163(void)
{
    #if defined (DISABLE_WORKAROUND_163)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 164 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_164_PRESENT 1
#else
    #define NRF54H_ERRATA_164_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_164_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_164_ENABLE_WORKAROUND NRF54H_ERRATA_164_PRESENT
#endif

static bool nrf54h_errata_164(void)
{
    #if defined (DISABLE_WORKAROUND_164)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 165 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_165_PRESENT 1
#else
    #define NRF54H_ERRATA_165_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_165_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_165_ENABLE_WORKAROUND NRF54H_ERRATA_165_PRESENT
#endif

static bool nrf54h_errata_165(void)
{
    #if defined (DISABLE_WORKAROUND_165)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 166 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_166_PRESENT 1
#else
    #define NRF54H_ERRATA_166_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_166_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_166_ENABLE_WORKAROUND NRF54H_ERRATA_166_PRESENT
#endif

static bool nrf54h_errata_166(void)
{
    #if defined (DISABLE_WORKAROUND_166)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 169 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_169_PRESENT 1
#else
    #define NRF54H_ERRATA_169_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_169_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_169_ENABLE_WORKAROUND NRF54H_ERRATA_169_PRESENT
#endif

static bool nrf54h_errata_169(void)
{
    #if defined (DISABLE_WORKAROUND_169)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 171 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_171_PRESENT 1
#else
    #define NRF54H_ERRATA_171_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_171_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_171_ENABLE_WORKAROUND NRF54H_ERRATA_171_PRESENT
#endif

static bool nrf54h_errata_171(void)
{
    #if defined (DISABLE_WORKAROUND_171)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 172 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_172_PRESENT 1
#else
    #define NRF54H_ERRATA_172_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_172_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_172_ENABLE_WORKAROUND NRF54H_ERRATA_172_PRESENT
#endif

static bool nrf54h_errata_172(void)
{
    #if defined (DISABLE_WORKAROUND_172)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 173 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_173_PRESENT 1
#else
    #define NRF54H_ERRATA_173_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_173_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_173_ENABLE_WORKAROUND NRF54H_ERRATA_173_PRESENT
#endif

static bool nrf54h_errata_173(void)
{
    #if defined (DISABLE_WORKAROUND_173)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 175 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_175_PRESENT 1
#else
    #define NRF54H_ERRATA_175_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_175_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_175_ENABLE_WORKAROUND NRF54H_ERRATA_175_PRESENT
#endif

static bool nrf54h_errata_175(void)
{
    #if defined (DISABLE_WORKAROUND_175)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 177 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_177_PRESENT 1
#else
    #define NRF54H_ERRATA_177_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_177_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_177_ENABLE_WORKAROUND NRF54H_ERRATA_177_PRESENT
#endif

static bool nrf54h_errata_177(void)
{
    #if defined (DISABLE_WORKAROUND_177)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 178 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_178_PRESENT 1
#else
    #define NRF54H_ERRATA_178_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_178_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_178_ENABLE_WORKAROUND NRF54H_ERRATA_178_PRESENT
#endif

static bool nrf54h_errata_178(void)
{
    #if defined (DISABLE_WORKAROUND_178)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 179 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_179_PRESENT 1
#else
    #define NRF54H_ERRATA_179_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_179_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_179_ENABLE_WORKAROUND NRF54H_ERRATA_179_PRESENT
#endif

static bool nrf54h_errata_179(void)
{
    #if defined (DISABLE_WORKAROUND_179)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 182 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_182_PRESENT 1
#else
    #define NRF54H_ERRATA_182_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_182_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_182_ENABLE_WORKAROUND NRF54H_ERRATA_182_PRESENT
#endif

static bool nrf54h_errata_182(void)
{
    #if defined (DISABLE_WORKAROUND_182)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 183 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_183_PRESENT 1
#else
    #define NRF54H_ERRATA_183_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_183_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_183_ENABLE_WORKAROUND NRF54H_ERRATA_183_PRESENT
#endif

static bool nrf54h_errata_183(void)
{
    #if defined (DISABLE_WORKAROUND_183)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 184 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_184_PRESENT 1
#else
    #define NRF54H_ERRATA_184_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_184_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_184_ENABLE_WORKAROUND NRF54H_ERRATA_184_PRESENT
#endif

static bool nrf54h_errata_184(void)
{
    #if defined (DISABLE_WORKAROUND_184)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 185 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_185_PRESENT 1
#else
    #define NRF54H_ERRATA_185_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_185_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_185_ENABLE_WORKAROUND NRF54H_ERRATA_185_PRESENT
#endif

static bool nrf54h_errata_185(void)
{
    #if defined (DISABLE_WORKAROUND_185)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 186 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_186_PRESENT 1
#else
    #define NRF54H_ERRATA_186_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_186_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_186_ENABLE_WORKAROUND NRF54H_ERRATA_186_PRESENT
#endif

static bool nrf54h_errata_186(void)
{
    #if defined (DISABLE_WORKAROUND_186)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 187 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_187_PRESENT 1
#else
    #define NRF54H_ERRATA_187_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_187_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_187_ENABLE_WORKAROUND NRF54H_ERRATA_187_PRESENT
#endif

static bool nrf54h_errata_187(void)
{
    #if defined (DISABLE_WORKAROUND_187)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 189 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_189_PRESENT 1
#else
    #define NRF54H_ERRATA_189_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_189_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_189_ENABLE_WORKAROUND NRF54H_ERRATA_189_PRESENT
#endif

static bool nrf54h_errata_189(void)
{
    #if defined (DISABLE_WORKAROUND_189)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 190 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_190_PRESENT 1
#else
    #define NRF54H_ERRATA_190_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_190_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_190_ENABLE_WORKAROUND NRF54H_ERRATA_190_PRESENT
#endif

static bool nrf54h_errata_190(void)
{
    #if defined (DISABLE_WORKAROUND_190)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 191 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_191_PRESENT 1
#else
    #define NRF54H_ERRATA_191_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_191_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_191_ENABLE_WORKAROUND NRF54H_ERRATA_191_PRESENT
#endif

static bool nrf54h_errata_191(void)
{
    #if defined (DISABLE_WORKAROUND_191)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 192 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_192_PRESENT 1
#else
    #define NRF54H_ERRATA_192_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_192_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_192_ENABLE_WORKAROUND NRF54H_ERRATA_192_PRESENT
#endif

static bool nrf54h_errata_192(void)
{
    #if defined (DISABLE_WORKAROUND_192)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 193 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_193_PRESENT 1
#else
    #define NRF54H_ERRATA_193_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_193_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_193_ENABLE_WORKAROUND NRF54H_ERRATA_193_PRESENT
#endif

static bool nrf54h_errata_193(void)
{
    #if defined (DISABLE_WORKAROUND_193)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 194 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_194_PRESENT 1
#else
    #define NRF54H_ERRATA_194_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_194_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_194_ENABLE_WORKAROUND NRF54H_ERRATA_194_PRESENT
#endif

static bool nrf54h_errata_194(void)
{
    #if defined (DISABLE_WORKAROUND_194)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 195 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_195_PRESENT 1
#else
    #define NRF54H_ERRATA_195_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_195_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_195_ENABLE_WORKAROUND NRF54H_ERRATA_195_PRESENT
#endif

static bool nrf54h_errata_195(void)
{
    #if defined (DISABLE_WORKAROUND_195)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 196 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_196_PRESENT 1
#else
    #define NRF54H_ERRATA_196_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_196_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_196_ENABLE_WORKAROUND NRF54H_ERRATA_196_PRESENT
#endif

static bool nrf54h_errata_196(void)
{
    #if defined (DISABLE_WORKAROUND_196)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 198 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_198_PRESENT 1
#else
    #define NRF54H_ERRATA_198_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_198_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_198_ENABLE_WORKAROUND NRF54H_ERRATA_198_PRESENT
#endif

static bool nrf54h_errata_198(void)
{
    #if defined (DISABLE_WORKAROUND_198)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 200 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_200_PRESENT 1
#else
    #define NRF54H_ERRATA_200_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_200_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_200_ENABLE_WORKAROUND NRF54H_ERRATA_200_PRESENT
#endif

static bool nrf54h_errata_200(void)
{
    #if defined (DISABLE_WORKAROUND_200)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 201 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_201_PRESENT 1
#else
    #define NRF54H_ERRATA_201_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_201_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_201_ENABLE_WORKAROUND NRF54H_ERRATA_201_PRESENT
#endif

static bool nrf54h_errata_201(void)
{
    #if defined (DISABLE_WORKAROUND_201)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 202 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_202_PRESENT 1
#else
    #define NRF54H_ERRATA_202_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_202_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_202_ENABLE_WORKAROUND NRF54H_ERRATA_202_PRESENT
#endif

static bool nrf54h_errata_202(void)
{
    #if defined (DISABLE_WORKAROUND_202)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 205 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_205_PRESENT 1
#else
    #define NRF54H_ERRATA_205_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_205_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_205_ENABLE_WORKAROUND NRF54H_ERRATA_205_PRESENT
#endif

static bool nrf54h_errata_205(void)
{
    #if defined (DISABLE_WORKAROUND_205)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 206 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_206_PRESENT 1
#else
    #define NRF54H_ERRATA_206_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_206_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_206_ENABLE_WORKAROUND NRF54H_ERRATA_206_PRESENT
#endif

static bool nrf54h_errata_206(void)
{
    #if defined (DISABLE_WORKAROUND_206)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 207 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_207_PRESENT 1
#else
    #define NRF54H_ERRATA_207_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_207_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_207_ENABLE_WORKAROUND NRF54H_ERRATA_207_PRESENT
#endif

static bool nrf54h_errata_207(void)
{
    #if defined (DISABLE_WORKAROUND_207)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 208 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_208_PRESENT 1
#else
    #define NRF54H_ERRATA_208_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_208_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_208_ENABLE_WORKAROUND NRF54H_ERRATA_208_PRESENT
#endif

static bool nrf54h_errata_208(void)
{
    #if defined (DISABLE_WORKAROUND_208)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 209 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_209_PRESENT 1
#else
    #define NRF54H_ERRATA_209_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_209_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_209_ENABLE_WORKAROUND NRF54H_ERRATA_209_PRESENT
#endif

static bool nrf54h_errata_209(void)
{
    #if defined (DISABLE_WORKAROUND_209)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 210 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_210_PRESENT 1
#else
    #define NRF54H_ERRATA_210_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_210_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_210_ENABLE_WORKAROUND NRF54H_ERRATA_210_PRESENT
#endif

static bool nrf54h_errata_210(void)
{
    #if defined (DISABLE_WORKAROUND_210)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 211 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_211_PRESENT 1
#else
    #define NRF54H_ERRATA_211_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_211_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_211_ENABLE_WORKAROUND NRF54H_ERRATA_211_PRESENT
#endif

static bool nrf54h_errata_211(void)
{
    #if defined (DISABLE_WORKAROUND_211)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 212 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_212_PRESENT 1
#else
    #define NRF54H_ERRATA_212_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_212_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_212_ENABLE_WORKAROUND NRF54H_ERRATA_212_PRESENT
#endif

static bool nrf54h_errata_212(void)
{
    #if defined (DISABLE_WORKAROUND_212)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
                        return true;
                    default:
                        return true;
                }
            }
        #endif
        return false;
    #endif
}

/* ========= Errata 213 ========= */
#if    defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
    #define NRF54H_ERRATA_213_PRESENT 1
#else
    #define NRF54H_ERRATA_213_PRESENT 0
#endif

#ifndef NRF54H_ERRATA_213_ENABLE_WORKAROUND
    #define NRF54H_ERRATA_213_ENABLE_WORKAROUND NRF54H_ERRATA_213_PRESENT
#endif

static bool nrf54h_errata_213(void)
{
    #if defined (DISABLE_WORKAROUND_213)
        return false;
    #elif !defined(NRF54H_SERIES)
        return false;
    #else
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            uint32_t var1 = *(uint32_t *)0x0FFFE000ul;
            uint32_t var2 = *(uint32_t *)0x0FFFE004ul;
        #endif
        #if defined (NRF54H20_XXAA) || defined (DEVELOP_IN_NRF54H20)
            if (var1 == 0x16)
            {
                switch(var2)
                {
                    case 0x02ul:
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
