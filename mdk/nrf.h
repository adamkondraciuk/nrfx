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

#ifndef NRF_H
#define NRF_H

/* MDK version */
#define MDK_MAJOR_VERSION   8
#define MDK_MINOR_VERSION   17
#define MDK_MICRO_VERSION   0

/* Redefine "old" too-generic name NRF52 to NRF52832_XXAA to keep backwards compatibility. */
#if defined (NRF52)
    #ifndef NRF52832_XXAA
        #define NRF52832_XXAA
    #endif
#endif

/* Define NRF52_SERIES for common use in nRF52 series devices. Only if not previously defined. */
#if defined (NRF52810_XXAA) || defined (NRF52811_XXAA) || defined (NRF52832_XXAA) || defined (NRF52832_XXAB) || defined (NRF52840_XXAA) 
    #ifndef NRF52_SERIES
        #define NRF52_SERIES
    #endif
#endif

/* Define NRF53_SERIES for common use in nRF53 series devices. */
#if defined (NRF5340_XXAA) || defined (NRF5340_XXAA_NETWORK)
    #ifndef NRF53_SERIES
        #define NRF53_SERIES
    #endif
#endif

/* Define NRF91_SERIES for common use in nRF91 series devices. */
#if defined (NRF9120_XXAA) || defined (NRF9120_XXAA_MODEM) || defined (NRF9120_XXAA_MLM1) || defined (NRF9120_XXAA_MLM1_MODEM)
    #ifndef NRF91_SERIES
        #define NRF91_SERIES
    #endif
#endif


#if defined(_WIN32)
    /* Do not include nrf specific files when building for PC host */
#elif defined(__unix)
    /* Do not include nrf specific files when building for PC host */
#elif defined(__APPLE__)
    /* Do not include nrf specific files when building for PC host */
#else

    /* Device selection for device includes. */
    #if defined (NRF51)
        #if !defined(EXCLUDE_HEADER)
            #include "nrf51.h"
        #endif
        #if !defined(EXCLUDE_BITFIELDS)
            #include "nrf51_bitfields.h"
        #endif
        #if !defined(EXCLUDE_PORTABILITY)
            #include "nrf51_deprecated.h"
        #endif
        
    #elif defined (NRF52810_XXAA)
        #if !defined(EXCLUDE_HEADER)
            #include "nrf52810.h"
        #endif
        #if !defined(EXCLUDE_BITFIELDS)
            #include "nrf52810_bitfields.h"
        #endif
        #if !defined(EXCLUDE_PORTABILITY)
            #include "nrf51_to_nrf52810.h"
            #include "nrf52_to_nrf52810.h"
        #endif
        
    #elif defined (NRF52811_XXAA)
        #if !defined(EXCLUDE_HEADER)
            #include "nrf52811.h"
        #endif
        #if !defined(EXCLUDE_BITFIELDS)
            #include "nrf52811_bitfields.h"
        #endif
        
        #if !defined(EXCLUDE_PORTABILITY)
            #include "nrf51_to_nrf52810.h"
            #include "nrf52_to_nrf52810.h"
            #include "nrf52810_to_nrf52811.h"
        #endif
        
    #elif defined (NRF52832_XXAA) || defined (NRF52832_XXAB)
        #if !defined(EXCLUDE_HEADER)
            #include "nrf52.h"
        #endif
        #if !defined(EXCLUDE_BITFIELDS)
            #include "nrf52_bitfields.h"
        #endif
        #if !defined(EXCLUDE_PORTABILITY)
            #include "nrf51_to_nrf52.h"
            #include "nrf52_name_change.h"
        #endif
        
    #elif defined (NRF52840_XXAA)
        #if !defined(EXCLUDE_HEADER)
            #include "nrf52840.h"
        #endif
        #if !defined(EXCLUDE_BITFIELDS)
            #include "nrf52840_bitfields.h"
        #endif
        #if !defined(EXCLUDE_PORTABILITY)
            #include "nrf51_to_nrf52840.h"
            #include "nrf52_to_nrf52840.h"
        #endif
    
    #elif defined (NRF5340_XXAA)
        #if !defined(EXCLUDE_HEADER)
            #include "nrf5340.h"
        #endif
        #if !defined(EXCLUDE_BITFIELDS)
            #include "nrf5340_bitfields.h"
        #endif
        
    #elif defined (NRF5340_XXAA_NETWORK)
        #if !defined(EXCLUDE_HEADER)
            #include "nrf5340_network.h"
        #endif
        #if !defined(EXCLUDE_BITFIELDS)
            #include "nrf5340_network_bitfields.h"
        #endif
        
    #elif defined (NRF9120_XXAA_MLM1)
        #if !defined(EXCLUDE_HEADER)
            #include "nrf9120_mlm1.h"
        #endif
        #if !defined(EXCLUDE_BITFIELDS)
            #include "nrf9120_mlm1_bitfields.h"
        #endif
        #if !defined(EXCLUDE_PORTABILITY)
            #include "nrf52_to_nrf9120.h"
        #endif
        
    #elif defined (NRF9120_XXAA_MLM1_MODEM)
        #if !defined(EXCLUDE_HEADER)
            #include "nrf9120_mlm1_modem.h"
        #endif
        #if !defined(EXCLUDE_BITFIELDS)
            #include "nrf9120_mlm1_modem_bitfields.h"
        #endif
    
    #elif defined (NRF9120_XXAA)
        #if !defined(EXCLUDE_HEADER)
            #include "nrf9120.h"
        #endif
        #if !defined(EXCLUDE_BITFIELDS)
            #include "nrf9120_bitfields.h"
        #endif
        #if !defined(EXCLUDE_PORTABILITY)
            #include "nrf52_to_nrf9120.h"
        #endif
        
    #elif defined (NRF9120_XXAA_MODEM)
        #if !defined(EXCLUDE_HEADER)
            #include "nrf9120_modem.h"
        #endif
        #if !defined(EXCLUDE_BITFIELDS)
            #include "nrf9120_modem_bitfields.h"
        #endif
        
    #else
        #error "Device must be defined. See nrf.h."
    #endif /* NRF51, NRF52810_XXAA, NRF52811_XXAA, NRF52832_XXAA, NRF52832_XXAB, NRF52840_XXAA, NRF5340_XXAA, NRF5340_XXAA_NETWORK, NRF9120_XXAA, NRF9120_XXAA_MODEM, NRF9120_XXAA_MLM1, NRF9120_XXAA_MLM1_MODEM*/

    #include "compiler_abstraction.h"

#endif /* _WIN32 || __unix || __APPLE__ */

#endif /* NRF_H */

