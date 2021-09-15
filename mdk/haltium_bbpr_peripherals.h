/*
Copyright (c) 2010 - 2023, Nordic Semiconductor ASA

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

#ifndef HALTIUM_BBPR_PERIPHERALS_H
#define HALTIUM_BBPR_PERIPHERALS_H

#ifdef __cplusplus
    extern "C" {
#endif

/*VPR CSR registers*/
#define VPRCSR_PRESENT
#define VPRCSR_COUNT 1

#define VPRCSR_MCLICBASERESET 4096
#define VPRCSR_MULDIV 0
#define VPRCSR_POWEROFFSLEEP 0
#define VPRCSR_DBG 0
#define VPRCSR_REMAP 0
#define VPRCSR_BUSWIDTH 0
#define VPRCSR_BKPT 0
#define VPRCSR_HARTNUM 0
#define VPRCSR_BEXT 0
#define VPRCSR_RTVIOPINS 0
#define VPRCSR_RTSPLITSEC 0

/*VPR APB registers*/
#define VPR_PRESENT
#define VPR_COUNT 1

#define VPR_INITPCRESETVALUE 0
#define VPR_MCLICBASE 4096
#define VPR_IRQNUM 480
#define VPR_VEVIF_NUMCHANNELS 32


#ifdef __cplusplus
}
#endif
#endif /* HALTIUM_BBPR_PERIPHERALS_H */
