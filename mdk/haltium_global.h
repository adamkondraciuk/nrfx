/*

Copyright (c) 2010 - 2020, Nordic Semiconductor ASA

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

#ifndef HALTIUM_GLOBAL_H
#define HALTIUM_GLOBAL_H

#ifdef __cplusplus
    extern "C" {
#endif


/* ========================================= Start of section using anonymous unions ========================================= */

#if defined (__CC_ARM)
  #pragma anon_unions
#elif defined (__ICCARM__)
  #pragma language=extended
#elif defined(__ARMCC_VERSION) && (__ARMCC_VERSION >= 6010050)
  #pragma clang diagnostic push
  #pragma clang diagnostic ignored "-Wc11-extensions"
  #pragma clang diagnostic ignored "-Wreserved-id-macro"
  #pragma clang diagnostic ignored "-Wgnu-anonymous-struct"
  #pragma clang diagnostic ignored "-Wnested-anon-types"
#elif defined (__GNUC__)
  /* anonymous unions are enabled by default */
#elif defined (__TMS470__)
  /* anonymous unions are enabled by default */
#elif defined (__TASKING__)
  #pragma warning 586
#elif defined (__CSMC__)
  /* anonymous unions are enabled by default */
#elif defined (_CEVA)
  /* anonymous unions are enabled by default */
#else
  #warning Unsupported compiler type
#endif

/* =========================================================================================================================== */
/* ================                                  Peripheral Address Map                                  ================ */
/* =========================================================================================================================== */

#define NRF_USBHSCORE0_NS_BASE            0x2F700000UL
#define NRF_I3CCORE0_NS_BASE              0x2FBE0000UL
#define NRF_I3CCORE1_NS_BASE              0x2FBE1000UL
#define NRF_EASYVDMA_NS_BASE              0x5F9E0000UL
#define NRF_TDDCONF_S_BASE                0xBF001000UL
#define NRF_TBM_NS_BASE                   0xBF003000UL
#define NRF_TBM_S_BASE                    0xBF003000UL
#define NRF_TSGEN_NS_BASE                 0xBF041000UL
#define NRF_STM_NS_BASE                   0xBF042000UL
#define NRF_TPIU_NS_BASE                  0xBF043000UL
#define NRF_ETB_NS_BASE                   0xBF044000UL
#define NRF_ETR_NS_BASE                   0xBF045000UL
#define NRF_CTI0_NS_BASE                  0xBF046000UL
#define NRF_CTI1_NS_BASE                  0xBF047000UL
#define NRF_ATBREPLICATOR0_NS_BASE        0xBF048000UL
#define NRF_ATBREPLICATOR1_NS_BASE        0xBF049000UL
#define NRF_ATBREPLICATOR2_NS_BASE        0xBF04A000UL
#define NRF_ATBREPLICATOR3_NS_BASE        0xBF04B000UL
#define NRF_ATBFUNNEL0_NS_BASE            0xBF04C000UL
#define NRF_ATBFUNNEL1_NS_BASE            0xBF04D000UL
#define NRF_ATBFUNNEL2_NS_BASE            0xBF04E000UL
#define NRF_ATBFUNNEL3_NS_BASE            0xBF04F000UL
#define NRF_GPIOTE0_NS_BASE               0x4F934000UL
#define NRF_GPIOTE0_S_BASE                0x5F934000UL
#define NRF_GPIOTE1_NS_BASE               0x4F935000UL
#define NRF_GPIOTE1_S_BASE                0x5F935000UL
#define NRF_USBHS_NS_BASE                 0x4F086000UL
#define NRF_USBHS_S_BASE                  0x5F086000UL
#define NRF_GIPCT0_NS_BASE                0x4F8D1000UL
#define NRF_GIPCT0_S_BASE                 0x5F8D1000UL
#define NRF_MUTEX0_NS_BASE                0x4F8D2000UL
#define NRF_I3C0_NS_BASE                  0x4F8D3000UL
#define NRF_I3C0_S_BASE                   0x5F8D3000UL
#define NRF_I3C1_NS_BASE                  0x4F8D4000UL
#define NRF_I3C1_S_BASE                   0x5F8D4000UL
#define NRF_GDPPIC0_NS_BASE               0x4F8E1000UL
#define NRF_GDPPIC0_S_BASE                0x5F8E1000UL
#define NRF_GTIMER0_NS_BASE               0x4F8E2000UL
#define NRF_GTIMER0_S_BASE                0x5F8E2000UL
#define NRF_GTIMER1_NS_BASE               0x4F8E3000UL
#define NRF_GTIMER1_S_BASE                0x5F8E3000UL
#define NRF_PWM0_NS_BASE                  0x4F8E4000UL
#define NRF_PWM0_S_BASE                   0x5F8E4000UL
#define NRF_SERIOBOX0_NS_BASE             0x4F8E5000UL
#define NRF_SERIOBOX0_S_BASE              0x5F8E5000UL
#define NRF_HSSPIM0_NS_BASE               0x4F8E6000UL
#define NRF_HSSPIM0_S_BASE                0x5F8E6000UL
#define NRF_HSSPIM1_NS_BASE               0x4F8E7000UL
#define NRF_HSSPIM1_S_BASE                0x5F8E7000UL
#define NRF_SERIOBOX1_NS_BASE             0x4F8E8000UL
#define NRF_SERIOBOX1_S_BASE              0x5F8E8000UL
#define NRF_GIPCT1_NS_BASE                0x4F921000UL
#define NRF_GIPCT1_S_BASE                 0x5F921000UL
#define NRF_GDPPIC1_NS_BASE               0x4F922000UL
#define NRF_GDPPIC1_S_BASE                0x5F922000UL
#define NRF_MUTEX1_NS_BASE                0x4F927000UL
#define NRF_GRTC0_NS_BASE                 0x4F928000UL
#define NRF_GRTC0_S_BASE                  0x5F928000UL
#define NRF_GRTC1_NS_BASE                 0x4F929000UL
#define NRF_GRTC1_S_BASE                  0x5F929000UL
#define NRF_GWDT1_NS_BASE                 0x4F92B000UL
#define NRF_GWDT1_S_BASE                  0x5F92B000UL
#define NRF_GWDT2_NS_BASE                 0x4F92C000UL
#define NRF_GWDT2_S_BASE                  0x5F92C000UL
#define NRF_P0_NS_BASE                    0x4F938000UL
#define NRF_P1_NS_BASE                    0x4F938200UL
#define NRF_P2_NS_BASE                    0x4F938400UL
#define NRF_P3_NS_BASE                    0x4F938600UL
#define NRF_P4_NS_BASE                    0x4F938800UL
#define NRF_P5_NS_BASE                    0x4F938A00UL
#define NRF_P6_NS_BASE                    0x4F938C00UL
#define NRF_P7_NS_BASE                    0x4F938E00UL
#define NRF_P0_S_BASE                     0x5F938000UL
#define NRF_P1_S_BASE                     0x5F938200UL
#define NRF_P2_S_BASE                     0x5F938400UL
#define NRF_P3_S_BASE                     0x5F938600UL
#define NRF_P4_S_BASE                     0x5F938800UL
#define NRF_P5_S_BASE                     0x5F938A00UL
#define NRF_P6_S_BASE                     0x5F938C00UL
#define NRF_P7_S_BASE                     0x5F938E00UL
#define NRF_P8_NS_BASE                    0x4F939000UL
#define NRF_P9_NS_BASE                    0x4F939200UL
#define NRF_P10_NS_BASE                   0x4F939400UL
#define NRF_P11_NS_BASE                   0x4F939600UL
#define NRF_P12_NS_BASE                   0x4F939800UL
#define NRF_P13_NS_BASE                   0x4F939A00UL
#define NRF_P14_NS_BASE                   0x4F939C00UL
#define NRF_GGPIOINTERNAL_NS_BASE         0x4F939E00UL
#define NRF_P15_NS_BASE                   0x4F939E00UL
#define NRF_P8_S_BASE                     0x5F939000UL
#define NRF_P9_S_BASE                     0x5F939200UL
#define NRF_P10_S_BASE                    0x5F939400UL
#define NRF_P11_S_BASE                    0x5F939600UL
#define NRF_P12_S_BASE                    0x5F939800UL
#define NRF_P13_S_BASE                    0x5F939A00UL
#define NRF_P14_S_BASE                    0x5F939C00UL
#define NRF_GGPIOINTERNAL_S_BASE          0x5F939E00UL
#define NRF_P15_S_BASE                    0x5F939E00UL
#define NRF_GDPPIC2_NS_BASE               0x4F981000UL
#define NRF_GDPPIC2_S_BASE                0x5F981000UL
#define NRF_SAADC_NS_BASE                 0x4F982000UL
#define NRF_SAADC_S_BASE                  0x5F982000UL
#define NRF_COMP_NS_BASE                  0x4F983000UL
#define NRF_LPCOMP_NS_BASE                0x4F983000UL
#define NRF_COMP_S_BASE                   0x5F983000UL
#define NRF_LPCOMP_S_BASE                 0x5F983000UL
#define NRF_TEMP_NS_BASE                  0x4F984000UL
#define NRF_TEMP_S_BASE                   0x5F984000UL
#define NRF_NFCT_NS_BASE                  0x4F985000UL
#define NRF_NFCT_S_BASE                   0x5F985000UL
#define NRF_GDPPIC3_NS_BASE               0x4F991000UL
#define NRF_GDPPIC3_S_BASE                0x5F991000UL
#define NRF_I2S_NS_BASE                   0x4F992000UL
#define NRF_I2S_S_BASE                    0x5F992000UL
#define NRF_PDM_NS_BASE                   0x4F993000UL
#define NRF_PDM_S_BASE                    0x5F993000UL
#define NRF_QDEC0_NS_BASE                 0x4F994000UL
#define NRF_QDEC0_S_BASE                  0x5F994000UL
#define NRF_QDEC1_NS_BASE                 0x4F995000UL
#define NRF_QDEC1_S_BASE                  0x5F995000UL
#define NRF_SIMIF_NS_BASE                 0x4F996000UL
#define NRF_SIMIF_S_BASE                  0x5F996000UL
#define NRF_GMIPIRFFE_NS_BASE             0x4F997000UL
#define NRF_GMIPIRFFE_S_BASE              0x5F997000UL
#define NRF_TWIM8_NS_BASE                 0x4F998000UL
#define NRF_TWIM8_S_BASE                  0x5F998000UL
#define NRF_GDPPIC4_NS_BASE               0x4F9A1000UL
#define NRF_GDPPIC4_S_BASE                0x5F9A1000UL
#define NRF_GTIMER2_NS_BASE               0x4F9A2000UL
#define NRF_GTIMER2_S_BASE                0x5F9A2000UL
#define NRF_GTIMER3_NS_BASE               0x4F9A3000UL
#define NRF_GTIMER3_S_BASE                0x5F9A3000UL
#define NRF_PWM1_NS_BASE                  0x4F9A4000UL
#define NRF_PWM1_S_BASE                   0x5F9A4000UL
#define NRF_SPIM0_NS_BASE                 0x4F9A5000UL
#define NRF_SPIS0_NS_BASE                 0x4F9A5000UL
#define NRF_TWIM0_NS_BASE                 0x4F9A5000UL
#define NRF_TWIS0_NS_BASE                 0x4F9A5000UL
#define NRF_UARTE0_NS_BASE                0x4F9A5000UL
#define NRF_SPIM0_S_BASE                  0x5F9A5000UL
#define NRF_SPIS0_S_BASE                  0x5F9A5000UL
#define NRF_TWIM0_S_BASE                  0x5F9A5000UL
#define NRF_TWIS0_S_BASE                  0x5F9A5000UL
#define NRF_UARTE0_S_BASE                 0x5F9A5000UL
#define NRF_SPIM1_NS_BASE                 0x4F9A6000UL
#define NRF_SPIS1_NS_BASE                 0x4F9A6000UL
#define NRF_TWIM1_NS_BASE                 0x4F9A6000UL
#define NRF_TWIS1_NS_BASE                 0x4F9A6000UL
#define NRF_UARTE1_NS_BASE                0x4F9A6000UL
#define NRF_SPIM1_S_BASE                  0x5F9A6000UL
#define NRF_SPIS1_S_BASE                  0x5F9A6000UL
#define NRF_TWIM1_S_BASE                  0x5F9A6000UL
#define NRF_TWIS1_S_BASE                  0x5F9A6000UL
#define NRF_UARTE1_S_BASE                 0x5F9A6000UL
#define NRF_GDPPIC5_NS_BASE               0x4F9B1000UL
#define NRF_GDPPIC5_S_BASE                0x5F9B1000UL
#define NRF_GTIMER4_NS_BASE               0x4F9B2000UL
#define NRF_GTIMER4_S_BASE                0x5F9B2000UL
#define NRF_GTIMER5_NS_BASE               0x4F9B3000UL
#define NRF_GTIMER5_S_BASE                0x5F9B3000UL
#define NRF_PWM2_NS_BASE                  0x4F9B4000UL
#define NRF_PWM2_S_BASE                   0x5F9B4000UL
#define NRF_SPIM2_NS_BASE                 0x4F9B5000UL
#define NRF_SPIS2_NS_BASE                 0x4F9B5000UL
#define NRF_TWIM2_NS_BASE                 0x4F9B5000UL
#define NRF_TWIS2_NS_BASE                 0x4F9B5000UL
#define NRF_UARTE2_NS_BASE                0x4F9B5000UL
#define NRF_SPIM2_S_BASE                  0x5F9B5000UL
#define NRF_SPIS2_S_BASE                  0x5F9B5000UL
#define NRF_TWIM2_S_BASE                  0x5F9B5000UL
#define NRF_TWIS2_S_BASE                  0x5F9B5000UL
#define NRF_UARTE2_S_BASE                 0x5F9B5000UL
#define NRF_SPIM3_NS_BASE                 0x4F9B6000UL
#define NRF_SPIS3_NS_BASE                 0x4F9B6000UL
#define NRF_TWIM3_NS_BASE                 0x4F9B6000UL
#define NRF_TWIS3_NS_BASE                 0x4F9B6000UL
#define NRF_UARTE3_NS_BASE                0x4F9B6000UL
#define NRF_SPIM3_S_BASE                  0x5F9B6000UL
#define NRF_SPIS3_S_BASE                  0x5F9B6000UL
#define NRF_TWIM3_S_BASE                  0x5F9B6000UL
#define NRF_TWIS3_S_BASE                  0x5F9B6000UL
#define NRF_UARTE3_S_BASE                 0x5F9B6000UL
#define NRF_GDPPIC6_NS_BASE               0x4F9C1000UL
#define NRF_GDPPIC6_S_BASE                0x5F9C1000UL
#define NRF_GTIMER6_NS_BASE               0x4F9C2000UL
#define NRF_GTIMER6_S_BASE                0x5F9C2000UL
#define NRF_GTIMER7_NS_BASE               0x4F9C3000UL
#define NRF_GTIMER7_S_BASE                0x5F9C3000UL
#define NRF_PWM3_NS_BASE                  0x4F9C4000UL
#define NRF_PWM3_S_BASE                   0x5F9C4000UL
#define NRF_SPIM4_NS_BASE                 0x4F9C5000UL
#define NRF_SPIS4_NS_BASE                 0x4F9C5000UL
#define NRF_TWIM4_NS_BASE                 0x4F9C5000UL
#define NRF_TWIS4_NS_BASE                 0x4F9C5000UL
#define NRF_UARTE4_NS_BASE                0x4F9C5000UL
#define NRF_SPIM4_S_BASE                  0x5F9C5000UL
#define NRF_SPIS4_S_BASE                  0x5F9C5000UL
#define NRF_TWIM4_S_BASE                  0x5F9C5000UL
#define NRF_TWIS4_S_BASE                  0x5F9C5000UL
#define NRF_UARTE4_S_BASE                 0x5F9C5000UL
#define NRF_SPIM5_NS_BASE                 0x4F9C6000UL
#define NRF_SPIS5_NS_BASE                 0x4F9C6000UL
#define NRF_TWIM5_NS_BASE                 0x4F9C6000UL
#define NRF_TWIS5_NS_BASE                 0x4F9C6000UL
#define NRF_UARTE5_NS_BASE                0x4F9C6000UL
#define NRF_SPIM5_S_BASE                  0x5F9C6000UL
#define NRF_SPIS5_S_BASE                  0x5F9C6000UL
#define NRF_TWIM5_S_BASE                  0x5F9C6000UL
#define NRF_TWIS5_S_BASE                  0x5F9C6000UL
#define NRF_UARTE5_S_BASE                 0x5F9C6000UL
#define NRF_GDPPIC7_NS_BASE               0x4F9D1000UL
#define NRF_GDPPIC7_S_BASE                0x5F9D1000UL
#define NRF_GTIMER8_NS_BASE               0x4F9D2000UL
#define NRF_GTIMER8_S_BASE                0x5F9D2000UL
#define NRF_GTIMER9_NS_BASE               0x4F9D3000UL
#define NRF_GTIMER9_S_BASE                0x5F9D3000UL
#define NRF_PWM4_NS_BASE                  0x4F9D4000UL
#define NRF_PWM4_S_BASE                   0x5F9D4000UL
#define NRF_SPIM6_NS_BASE                 0x4F9D5000UL
#define NRF_SPIS6_NS_BASE                 0x4F9D5000UL
#define NRF_TWIM6_NS_BASE                 0x4F9D5000UL
#define NRF_TWIS6_NS_BASE                 0x4F9D5000UL
#define NRF_UARTE6_NS_BASE                0x4F9D5000UL
#define NRF_SPIM6_S_BASE                  0x5F9D5000UL
#define NRF_SPIS6_S_BASE                  0x5F9D5000UL
#define NRF_TWIM6_S_BASE                  0x5F9D5000UL
#define NRF_TWIS6_S_BASE                  0x5F9D5000UL
#define NRF_UARTE6_S_BASE                 0x5F9D5000UL
#define NRF_SPIM7_NS_BASE                 0x4F9D6000UL
#define NRF_SPIS7_NS_BASE                 0x4F9D6000UL
#define NRF_TWIM7_NS_BASE                 0x4F9D6000UL
#define NRF_TWIS7_NS_BASE                 0x4F9D6000UL
#define NRF_UARTE7_NS_BASE                0x4F9D6000UL
#define NRF_SPIM7_S_BASE                  0x5F9D6000UL
#define NRF_SPIS7_S_BASE                  0x5F9D6000UL
#define NRF_TWIM7_S_BASE                  0x5F9D6000UL
#define NRF_TWIS7_S_BASE                  0x5F9D6000UL
#define NRF_UARTE7_S_BASE                 0x5F9D6000UL

/* =========================================================================================================================== */
/* ================                                  Peripheral Declaration                                  ================ */
/* =========================================================================================================================== */

#define NRF_USBHSCORE0_NS                 ((NRF_USBHSCORE_Type*)                NRF_USBHSCORE0_NS_BASE)
#define NRF_I3CCORE0_NS                   ((NRF_I3CCORE_Type*)                  NRF_I3CCORE0_NS_BASE)
#define NRF_I3CCORE1_NS                   ((NRF_I3CCORE_Type*)                  NRF_I3CCORE1_NS_BASE)
#define NRF_EASYVDMA_NS                   ((NRF_EASYVDMA_Type*)                 NRF_EASYVDMA_NS_BASE)
#define NRF_TDDCONF_S                     ((NRF_TDDCONF_Type*)                  NRF_TDDCONF_S_BASE)
#define NRF_TBM_NS                        ((NRF_TBM_Type*)                      NRF_TBM_NS_BASE)
#define NRF_TBM_S                         ((NRF_TBM_Type*)                      NRF_TBM_S_BASE)
#define NRF_TSGEN_NS                      ((NRF_GENERIC_Type*)                  NRF_TSGEN_NS_BASE)
#define NRF_STM_NS                        ((NRF_STM_Type*)                      NRF_STM_NS_BASE)
#define NRF_TPIU_NS                       ((NRF_TPIU_Type*)                     NRF_TPIU_NS_BASE)
#define NRF_ETB_NS                        ((NRF_GENERIC_Type*)                  NRF_ETB_NS_BASE)
#define NRF_ETR_NS                        ((NRF_GENERIC_Type*)                  NRF_ETR_NS_BASE)
#define NRF_CTI0_NS                       ((NRF_CTI_Type*)                      NRF_CTI0_NS_BASE)
#define NRF_CTI1_NS                       ((NRF_CTI_Type*)                      NRF_CTI1_NS_BASE)
#define NRF_ATBREPLICATOR0_NS             ((NRF_ATBREPLICATOR_Type*)            NRF_ATBREPLICATOR0_NS_BASE)
#define NRF_ATBREPLICATOR1_NS             ((NRF_ATBREPLICATOR_Type*)            NRF_ATBREPLICATOR1_NS_BASE)
#define NRF_ATBREPLICATOR2_NS             ((NRF_ATBREPLICATOR_Type*)            NRF_ATBREPLICATOR2_NS_BASE)
#define NRF_ATBREPLICATOR3_NS             ((NRF_ATBREPLICATOR_Type*)            NRF_ATBREPLICATOR3_NS_BASE)
#define NRF_ATBFUNNEL0_NS                 ((NRF_ATBFUNNEL_Type*)                NRF_ATBFUNNEL0_NS_BASE)
#define NRF_ATBFUNNEL1_NS                 ((NRF_ATBFUNNEL_Type*)                NRF_ATBFUNNEL1_NS_BASE)
#define NRF_ATBFUNNEL2_NS                 ((NRF_ATBFUNNEL_Type*)                NRF_ATBFUNNEL2_NS_BASE)
#define NRF_ATBFUNNEL3_NS                 ((NRF_ATBFUNNEL_Type*)                NRF_ATBFUNNEL3_NS_BASE)
#define NRF_GPIOTE0_NS                    ((NRF_GPIOTE_Type*)                   NRF_GPIOTE0_NS_BASE)
#define NRF_GPIOTE0_S                     ((NRF_GPIOTE_Type*)                   NRF_GPIOTE0_S_BASE)
#define NRF_GPIOTE1_NS                    ((NRF_GPIOTE_Type*)                   NRF_GPIOTE1_NS_BASE)
#define NRF_GPIOTE1_S                     ((NRF_GPIOTE_Type*)                   NRF_GPIOTE1_S_BASE)
#define NRF_USBHS_NS                      ((NRF_USBHS_Type*)                    NRF_USBHS_NS_BASE)
#define NRF_USBHS_S                       ((NRF_USBHS_Type*)                    NRF_USBHS_S_BASE)
#define NRF_GIPCT0_NS                     ((NRF_IPCT_Type*)                     NRF_GIPCT0_NS_BASE)
#define NRF_GIPCT0_S                      ((NRF_IPCT_Type*)                     NRF_GIPCT0_S_BASE)
#define NRF_MUTEX0_NS                     ((NRF_MUTEX_Type*)                    NRF_MUTEX0_NS_BASE)
#define NRF_I3C0_NS                       ((NRF_I3C_Type*)                      NRF_I3C0_NS_BASE)
#define NRF_I3C0_S                        ((NRF_I3C_Type*)                      NRF_I3C0_S_BASE)
#define NRF_I3C1_NS                       ((NRF_I3C_Type*)                      NRF_I3C1_NS_BASE)
#define NRF_I3C1_S                        ((NRF_I3C_Type*)                      NRF_I3C1_S_BASE)
#define NRF_GDPPIC0_NS                    ((NRF_DPPIC_Type*)                    NRF_GDPPIC0_NS_BASE)
#define NRF_GDPPIC0_S                     ((NRF_DPPIC_Type*)                    NRF_GDPPIC0_S_BASE)
#define NRF_GTIMER0_NS                    ((NRF_TIMER_Type*)                    NRF_GTIMER0_NS_BASE)
#define NRF_GTIMER0_S                     ((NRF_TIMER_Type*)                    NRF_GTIMER0_S_BASE)
#define NRF_GTIMER1_NS                    ((NRF_TIMER_Type*)                    NRF_GTIMER1_NS_BASE)
#define NRF_GTIMER1_S                     ((NRF_TIMER_Type*)                    NRF_GTIMER1_S_BASE)
#define NRF_PWM0_NS                       ((NRF_PWM_Type*)                      NRF_PWM0_NS_BASE)
#define NRF_PWM0_S                        ((NRF_PWM_Type*)                      NRF_PWM0_S_BASE)
#define NRF_SERIOBOX0_NS                  ((NRF_SERIOBOX_Type*)                 NRF_SERIOBOX0_NS_BASE)
#define NRF_SERIOBOX0_S                   ((NRF_SERIOBOX_Type*)                 NRF_SERIOBOX0_S_BASE)
#define NRF_HSSPIM0_NS                    ((NRF_SPIM_Type*)                     NRF_HSSPIM0_NS_BASE)
#define NRF_HSSPIM0_S                     ((NRF_SPIM_Type*)                     NRF_HSSPIM0_S_BASE)
#define NRF_HSSPIM1_NS                    ((NRF_SPIM_Type*)                     NRF_HSSPIM1_NS_BASE)
#define NRF_HSSPIM1_S                     ((NRF_SPIM_Type*)                     NRF_HSSPIM1_S_BASE)
#define NRF_SERIOBOX1_NS                  ((NRF_SERIOBOX_Type*)                 NRF_SERIOBOX1_NS_BASE)
#define NRF_SERIOBOX1_S                   ((NRF_SERIOBOX_Type*)                 NRF_SERIOBOX1_S_BASE)
#define NRF_GIPCT1_NS                     ((NRF_IPCT_Type*)                     NRF_GIPCT1_NS_BASE)
#define NRF_GIPCT1_S                      ((NRF_IPCT_Type*)                     NRF_GIPCT1_S_BASE)
#define NRF_GDPPIC1_NS                    ((NRF_DPPIC_Type*)                    NRF_GDPPIC1_NS_BASE)
#define NRF_GDPPIC1_S                     ((NRF_DPPIC_Type*)                    NRF_GDPPIC1_S_BASE)
#define NRF_MUTEX1_NS                     ((NRF_MUTEX_Type*)                    NRF_MUTEX1_NS_BASE)
#define NRF_GRTC0_NS                      ((NRF_RTC_Type*)                      NRF_GRTC0_NS_BASE)
#define NRF_GRTC0_S                       ((NRF_RTC_Type*)                      NRF_GRTC0_S_BASE)
#define NRF_GRTC1_NS                      ((NRF_RTC_Type*)                      NRF_GRTC1_NS_BASE)
#define NRF_GRTC1_S                       ((NRF_RTC_Type*)                      NRF_GRTC1_S_BASE)
#define NRF_GWDT1_NS                      ((NRF_WDT_Type*)                      NRF_GWDT1_NS_BASE)
#define NRF_GWDT1_S                       ((NRF_WDT_Type*)                      NRF_GWDT1_S_BASE)
#define NRF_GWDT2_NS                      ((NRF_WDT_Type*)                      NRF_GWDT2_NS_BASE)
#define NRF_GWDT2_S                       ((NRF_WDT_Type*)                      NRF_GWDT2_S_BASE)
#define NRF_P0_NS                         ((NRF_GPIO_Type*)                     NRF_P0_NS_BASE)
#define NRF_P1_NS                         ((NRF_GPIO_Type*)                     NRF_P1_NS_BASE)
#define NRF_P2_NS                         ((NRF_GPIO_Type*)                     NRF_P2_NS_BASE)
#define NRF_P3_NS                         ((NRF_GPIO_Type*)                     NRF_P3_NS_BASE)
#define NRF_P4_NS                         ((NRF_GPIO_Type*)                     NRF_P4_NS_BASE)
#define NRF_P5_NS                         ((NRF_GPIO_Type*)                     NRF_P5_NS_BASE)
#define NRF_P6_NS                         ((NRF_GPIO_Type*)                     NRF_P6_NS_BASE)
#define NRF_P7_NS                         ((NRF_GPIO_Type*)                     NRF_P7_NS_BASE)
#define NRF_P0_S                          ((NRF_GPIO_Type*)                     NRF_P0_S_BASE)
#define NRF_P1_S                          ((NRF_GPIO_Type*)                     NRF_P1_S_BASE)
#define NRF_P2_S                          ((NRF_GPIO_Type*)                     NRF_P2_S_BASE)
#define NRF_P3_S                          ((NRF_GPIO_Type*)                     NRF_P3_S_BASE)
#define NRF_P4_S                          ((NRF_GPIO_Type*)                     NRF_P4_S_BASE)
#define NRF_P5_S                          ((NRF_GPIO_Type*)                     NRF_P5_S_BASE)
#define NRF_P6_S                          ((NRF_GPIO_Type*)                     NRF_P6_S_BASE)
#define NRF_P7_S                          ((NRF_GPIO_Type*)                     NRF_P7_S_BASE)
#define NRF_P8_NS                         ((NRF_GPIO_Type*)                     NRF_P8_NS_BASE)
#define NRF_P9_NS                         ((NRF_GPIO_Type*)                     NRF_P9_NS_BASE)
#define NRF_P10_NS                        ((NRF_GPIO_Type*)                     NRF_P10_NS_BASE)
#define NRF_P11_NS                        ((NRF_GPIO_Type*)                     NRF_P11_NS_BASE)
#define NRF_P12_NS                        ((NRF_GPIO_Type*)                     NRF_P12_NS_BASE)
#define NRF_P13_NS                        ((NRF_GPIO_Type*)                     NRF_P13_NS_BASE)
#define NRF_P14_NS                        ((NRF_GPIO_Type*)                     NRF_P14_NS_BASE)
#define NRF_GGPIOINTERNAL_NS              ((NRF_GPIOINTERNAL_Type*)             NRF_GGPIOINTERNAL_NS_BASE)
#define NRF_P15_NS                        ((NRF_GPIO_Type*)                     NRF_P15_NS_BASE)
#define NRF_P8_S                          ((NRF_GPIO_Type*)                     NRF_P8_S_BASE)
#define NRF_P9_S                          ((NRF_GPIO_Type*)                     NRF_P9_S_BASE)
#define NRF_P10_S                         ((NRF_GPIO_Type*)                     NRF_P10_S_BASE)
#define NRF_P11_S                         ((NRF_GPIO_Type*)                     NRF_P11_S_BASE)
#define NRF_P12_S                         ((NRF_GPIO_Type*)                     NRF_P12_S_BASE)
#define NRF_P13_S                         ((NRF_GPIO_Type*)                     NRF_P13_S_BASE)
#define NRF_P14_S                         ((NRF_GPIO_Type*)                     NRF_P14_S_BASE)
#define NRF_GGPIOINTERNAL_S               ((NRF_GPIOINTERNAL_Type*)             NRF_GGPIOINTERNAL_S_BASE)
#define NRF_P15_S                         ((NRF_GPIO_Type*)                     NRF_P15_S_BASE)
#define NRF_GDPPIC2_NS                    ((NRF_DPPIC_Type*)                    NRF_GDPPIC2_NS_BASE)
#define NRF_GDPPIC2_S                     ((NRF_DPPIC_Type*)                    NRF_GDPPIC2_S_BASE)
#define NRF_SAADC_NS                      ((NRF_SAADC_Type*)                    NRF_SAADC_NS_BASE)
#define NRF_SAADC_S                       ((NRF_SAADC_Type*)                    NRF_SAADC_S_BASE)
#define NRF_COMP_NS                       ((NRF_COMP_Type*)                     NRF_COMP_NS_BASE)
#define NRF_LPCOMP_NS                     ((NRF_LPCOMP_Type*)                   NRF_LPCOMP_NS_BASE)
#define NRF_COMP_S                        ((NRF_COMP_Type*)                     NRF_COMP_S_BASE)
#define NRF_LPCOMP_S                      ((NRF_LPCOMP_Type*)                   NRF_LPCOMP_S_BASE)
#define NRF_TEMP_NS                       ((NRF_TEMP_Type*)                     NRF_TEMP_NS_BASE)
#define NRF_TEMP_S                        ((NRF_TEMP_Type*)                     NRF_TEMP_S_BASE)
#define NRF_NFCT_NS                       ((NRF_NFCT_Type*)                     NRF_NFCT_NS_BASE)
#define NRF_NFCT_S                        ((NRF_NFCT_Type*)                     NRF_NFCT_S_BASE)
#define NRF_GDPPIC3_NS                    ((NRF_DPPIC_Type*)                    NRF_GDPPIC3_NS_BASE)
#define NRF_GDPPIC3_S                     ((NRF_DPPIC_Type*)                    NRF_GDPPIC3_S_BASE)
#define NRF_I2S_NS                        ((NRF_I2S_Type*)                      NRF_I2S_NS_BASE)
#define NRF_I2S_S                         ((NRF_I2S_Type*)                      NRF_I2S_S_BASE)
#define NRF_PDM_NS                        ((NRF_PDM_Type*)                      NRF_PDM_NS_BASE)
#define NRF_PDM_S                         ((NRF_PDM_Type*)                      NRF_PDM_S_BASE)
#define NRF_QDEC0_NS                      ((NRF_QDEC_Type*)                     NRF_QDEC0_NS_BASE)
#define NRF_QDEC0_S                       ((NRF_QDEC_Type*)                     NRF_QDEC0_S_BASE)
#define NRF_QDEC1_NS                      ((NRF_QDEC_Type*)                     NRF_QDEC1_NS_BASE)
#define NRF_QDEC1_S                       ((NRF_QDEC_Type*)                     NRF_QDEC1_S_BASE)
#define NRF_SIMIF_NS                      ((NRF_SIMIF_Type*)                    NRF_SIMIF_NS_BASE)
#define NRF_SIMIF_S                       ((NRF_SIMIF_Type*)                    NRF_SIMIF_S_BASE)
#define NRF_GMIPIRFFE_NS                  ((NRF_MIPIRFFE_Type*)                 NRF_GMIPIRFFE_NS_BASE)
#define NRF_GMIPIRFFE_S                   ((NRF_MIPIRFFE_Type*)                 NRF_GMIPIRFFE_S_BASE)
#define NRF_TWIM8_NS                      ((NRF_TWIM_Type*)                     NRF_TWIM8_NS_BASE)
#define NRF_TWIM8_S                       ((NRF_TWIM_Type*)                     NRF_TWIM8_S_BASE)
#define NRF_GDPPIC4_NS                    ((NRF_DPPIC_Type*)                    NRF_GDPPIC4_NS_BASE)
#define NRF_GDPPIC4_S                     ((NRF_DPPIC_Type*)                    NRF_GDPPIC4_S_BASE)
#define NRF_GTIMER2_NS                    ((NRF_TIMER_Type*)                    NRF_GTIMER2_NS_BASE)
#define NRF_GTIMER2_S                     ((NRF_TIMER_Type*)                    NRF_GTIMER2_S_BASE)
#define NRF_GTIMER3_NS                    ((NRF_TIMER_Type*)                    NRF_GTIMER3_NS_BASE)
#define NRF_GTIMER3_S                     ((NRF_TIMER_Type*)                    NRF_GTIMER3_S_BASE)
#define NRF_PWM1_NS                       ((NRF_PWM_Type*)                      NRF_PWM1_NS_BASE)
#define NRF_PWM1_S                        ((NRF_PWM_Type*)                      NRF_PWM1_S_BASE)
#define NRF_SPIM0_NS                      ((NRF_SPIM_Type*)                     NRF_SPIM0_NS_BASE)
#define NRF_SPIS0_NS                      ((NRF_SPIS_Type*)                     NRF_SPIS0_NS_BASE)
#define NRF_TWIM0_NS                      ((NRF_TWIM_Type*)                     NRF_TWIM0_NS_BASE)
#define NRF_TWIS0_NS                      ((NRF_TWIS_Type*)                     NRF_TWIS0_NS_BASE)
#define NRF_UARTE0_NS                     ((NRF_UARTE_Type*)                    NRF_UARTE0_NS_BASE)
#define NRF_SPIM0_S                       ((NRF_SPIM_Type*)                     NRF_SPIM0_S_BASE)
#define NRF_SPIS0_S                       ((NRF_SPIS_Type*)                     NRF_SPIS0_S_BASE)
#define NRF_TWIM0_S                       ((NRF_TWIM_Type*)                     NRF_TWIM0_S_BASE)
#define NRF_TWIS0_S                       ((NRF_TWIS_Type*)                     NRF_TWIS0_S_BASE)
#define NRF_UARTE0_S                      ((NRF_UARTE_Type*)                    NRF_UARTE0_S_BASE)
#define NRF_SPIM1_NS                      ((NRF_SPIM_Type*)                     NRF_SPIM1_NS_BASE)
#define NRF_SPIS1_NS                      ((NRF_SPIS_Type*)                     NRF_SPIS1_NS_BASE)
#define NRF_TWIM1_NS                      ((NRF_TWIM_Type*)                     NRF_TWIM1_NS_BASE)
#define NRF_TWIS1_NS                      ((NRF_TWIS_Type*)                     NRF_TWIS1_NS_BASE)
#define NRF_UARTE1_NS                     ((NRF_UARTE_Type*)                    NRF_UARTE1_NS_BASE)
#define NRF_SPIM1_S                       ((NRF_SPIM_Type*)                     NRF_SPIM1_S_BASE)
#define NRF_SPIS1_S                       ((NRF_SPIS_Type*)                     NRF_SPIS1_S_BASE)
#define NRF_TWIM1_S                       ((NRF_TWIM_Type*)                     NRF_TWIM1_S_BASE)
#define NRF_TWIS1_S                       ((NRF_TWIS_Type*)                     NRF_TWIS1_S_BASE)
#define NRF_UARTE1_S                      ((NRF_UARTE_Type*)                    NRF_UARTE1_S_BASE)
#define NRF_GDPPIC5_NS                    ((NRF_DPPIC_Type*)                    NRF_GDPPIC5_NS_BASE)
#define NRF_GDPPIC5_S                     ((NRF_DPPIC_Type*)                    NRF_GDPPIC5_S_BASE)
#define NRF_GTIMER4_NS                    ((NRF_TIMER_Type*)                    NRF_GTIMER4_NS_BASE)
#define NRF_GTIMER4_S                     ((NRF_TIMER_Type*)                    NRF_GTIMER4_S_BASE)
#define NRF_GTIMER5_NS                    ((NRF_TIMER_Type*)                    NRF_GTIMER5_NS_BASE)
#define NRF_GTIMER5_S                     ((NRF_TIMER_Type*)                    NRF_GTIMER5_S_BASE)
#define NRF_PWM2_NS                       ((NRF_PWM_Type*)                      NRF_PWM2_NS_BASE)
#define NRF_PWM2_S                        ((NRF_PWM_Type*)                      NRF_PWM2_S_BASE)
#define NRF_SPIM2_NS                      ((NRF_SPIM_Type*)                     NRF_SPIM2_NS_BASE)
#define NRF_SPIS2_NS                      ((NRF_SPIS_Type*)                     NRF_SPIS2_NS_BASE)
#define NRF_TWIM2_NS                      ((NRF_TWIM_Type*)                     NRF_TWIM2_NS_BASE)
#define NRF_TWIS2_NS                      ((NRF_TWIS_Type*)                     NRF_TWIS2_NS_BASE)
#define NRF_UARTE2_NS                     ((NRF_UARTE_Type*)                    NRF_UARTE2_NS_BASE)
#define NRF_SPIM2_S                       ((NRF_SPIM_Type*)                     NRF_SPIM2_S_BASE)
#define NRF_SPIS2_S                       ((NRF_SPIS_Type*)                     NRF_SPIS2_S_BASE)
#define NRF_TWIM2_S                       ((NRF_TWIM_Type*)                     NRF_TWIM2_S_BASE)
#define NRF_TWIS2_S                       ((NRF_TWIS_Type*)                     NRF_TWIS2_S_BASE)
#define NRF_UARTE2_S                      ((NRF_UARTE_Type*)                    NRF_UARTE2_S_BASE)
#define NRF_SPIM3_NS                      ((NRF_SPIM_Type*)                     NRF_SPIM3_NS_BASE)
#define NRF_SPIS3_NS                      ((NRF_SPIS_Type*)                     NRF_SPIS3_NS_BASE)
#define NRF_TWIM3_NS                      ((NRF_TWIM_Type*)                     NRF_TWIM3_NS_BASE)
#define NRF_TWIS3_NS                      ((NRF_TWIS_Type*)                     NRF_TWIS3_NS_BASE)
#define NRF_UARTE3_NS                     ((NRF_UARTE_Type*)                    NRF_UARTE3_NS_BASE)
#define NRF_SPIM3_S                       ((NRF_SPIM_Type*)                     NRF_SPIM3_S_BASE)
#define NRF_SPIS3_S                       ((NRF_SPIS_Type*)                     NRF_SPIS3_S_BASE)
#define NRF_TWIM3_S                       ((NRF_TWIM_Type*)                     NRF_TWIM3_S_BASE)
#define NRF_TWIS3_S                       ((NRF_TWIS_Type*)                     NRF_TWIS3_S_BASE)
#define NRF_UARTE3_S                      ((NRF_UARTE_Type*)                    NRF_UARTE3_S_BASE)
#define NRF_GDPPIC6_NS                    ((NRF_DPPIC_Type*)                    NRF_GDPPIC6_NS_BASE)
#define NRF_GDPPIC6_S                     ((NRF_DPPIC_Type*)                    NRF_GDPPIC6_S_BASE)
#define NRF_GTIMER6_NS                    ((NRF_TIMER_Type*)                    NRF_GTIMER6_NS_BASE)
#define NRF_GTIMER6_S                     ((NRF_TIMER_Type*)                    NRF_GTIMER6_S_BASE)
#define NRF_GTIMER7_NS                    ((NRF_TIMER_Type*)                    NRF_GTIMER7_NS_BASE)
#define NRF_GTIMER7_S                     ((NRF_TIMER_Type*)                    NRF_GTIMER7_S_BASE)
#define NRF_PWM3_NS                       ((NRF_PWM_Type*)                      NRF_PWM3_NS_BASE)
#define NRF_PWM3_S                        ((NRF_PWM_Type*)                      NRF_PWM3_S_BASE)
#define NRF_SPIM4_NS                      ((NRF_SPIM_Type*)                     NRF_SPIM4_NS_BASE)
#define NRF_SPIS4_NS                      ((NRF_SPIS_Type*)                     NRF_SPIS4_NS_BASE)
#define NRF_TWIM4_NS                      ((NRF_TWIM_Type*)                     NRF_TWIM4_NS_BASE)
#define NRF_TWIS4_NS                      ((NRF_TWIS_Type*)                     NRF_TWIS4_NS_BASE)
#define NRF_UARTE4_NS                     ((NRF_UARTE_Type*)                    NRF_UARTE4_NS_BASE)
#define NRF_SPIM4_S                       ((NRF_SPIM_Type*)                     NRF_SPIM4_S_BASE)
#define NRF_SPIS4_S                       ((NRF_SPIS_Type*)                     NRF_SPIS4_S_BASE)
#define NRF_TWIM4_S                       ((NRF_TWIM_Type*)                     NRF_TWIM4_S_BASE)
#define NRF_TWIS4_S                       ((NRF_TWIS_Type*)                     NRF_TWIS4_S_BASE)
#define NRF_UARTE4_S                      ((NRF_UARTE_Type*)                    NRF_UARTE4_S_BASE)
#define NRF_SPIM5_NS                      ((NRF_SPIM_Type*)                     NRF_SPIM5_NS_BASE)
#define NRF_SPIS5_NS                      ((NRF_SPIS_Type*)                     NRF_SPIS5_NS_BASE)
#define NRF_TWIM5_NS                      ((NRF_TWIM_Type*)                     NRF_TWIM5_NS_BASE)
#define NRF_TWIS5_NS                      ((NRF_TWIS_Type*)                     NRF_TWIS5_NS_BASE)
#define NRF_UARTE5_NS                     ((NRF_UARTE_Type*)                    NRF_UARTE5_NS_BASE)
#define NRF_SPIM5_S                       ((NRF_SPIM_Type*)                     NRF_SPIM5_S_BASE)
#define NRF_SPIS5_S                       ((NRF_SPIS_Type*)                     NRF_SPIS5_S_BASE)
#define NRF_TWIM5_S                       ((NRF_TWIM_Type*)                     NRF_TWIM5_S_BASE)
#define NRF_TWIS5_S                       ((NRF_TWIS_Type*)                     NRF_TWIS5_S_BASE)
#define NRF_UARTE5_S                      ((NRF_UARTE_Type*)                    NRF_UARTE5_S_BASE)
#define NRF_GDPPIC7_NS                    ((NRF_DPPIC_Type*)                    NRF_GDPPIC7_NS_BASE)
#define NRF_GDPPIC7_S                     ((NRF_DPPIC_Type*)                    NRF_GDPPIC7_S_BASE)
#define NRF_GTIMER8_NS                    ((NRF_TIMER_Type*)                    NRF_GTIMER8_NS_BASE)
#define NRF_GTIMER8_S                     ((NRF_TIMER_Type*)                    NRF_GTIMER8_S_BASE)
#define NRF_GTIMER9_NS                    ((NRF_TIMER_Type*)                    NRF_GTIMER9_NS_BASE)
#define NRF_GTIMER9_S                     ((NRF_TIMER_Type*)                    NRF_GTIMER9_S_BASE)
#define NRF_PWM4_NS                       ((NRF_PWM_Type*)                      NRF_PWM4_NS_BASE)
#define NRF_PWM4_S                        ((NRF_PWM_Type*)                      NRF_PWM4_S_BASE)
#define NRF_SPIM6_NS                      ((NRF_SPIM_Type*)                     NRF_SPIM6_NS_BASE)
#define NRF_SPIS6_NS                      ((NRF_SPIS_Type*)                     NRF_SPIS6_NS_BASE)
#define NRF_TWIM6_NS                      ((NRF_TWIM_Type*)                     NRF_TWIM6_NS_BASE)
#define NRF_TWIS6_NS                      ((NRF_TWIS_Type*)                     NRF_TWIS6_NS_BASE)
#define NRF_UARTE6_NS                     ((NRF_UARTE_Type*)                    NRF_UARTE6_NS_BASE)
#define NRF_SPIM6_S                       ((NRF_SPIM_Type*)                     NRF_SPIM6_S_BASE)
#define NRF_SPIS6_S                       ((NRF_SPIS_Type*)                     NRF_SPIS6_S_BASE)
#define NRF_TWIM6_S                       ((NRF_TWIM_Type*)                     NRF_TWIM6_S_BASE)
#define NRF_TWIS6_S                       ((NRF_TWIS_Type*)                     NRF_TWIS6_S_BASE)
#define NRF_UARTE6_S                      ((NRF_UARTE_Type*)                    NRF_UARTE6_S_BASE)
#define NRF_SPIM7_NS                      ((NRF_SPIM_Type*)                     NRF_SPIM7_NS_BASE)
#define NRF_SPIS7_NS                      ((NRF_SPIS_Type*)                     NRF_SPIS7_NS_BASE)
#define NRF_TWIM7_NS                      ((NRF_TWIM_Type*)                     NRF_TWIM7_NS_BASE)
#define NRF_TWIS7_NS                      ((NRF_TWIS_Type*)                     NRF_TWIS7_NS_BASE)
#define NRF_UARTE7_NS                     ((NRF_UARTE_Type*)                    NRF_UARTE7_NS_BASE)
#define NRF_SPIM7_S                       ((NRF_SPIM_Type*)                     NRF_SPIM7_S_BASE)
#define NRF_SPIS7_S                       ((NRF_SPIS_Type*)                     NRF_SPIS7_S_BASE)
#define NRF_TWIM7_S                       ((NRF_TWIM_Type*)                     NRF_TWIM7_S_BASE)
#define NRF_TWIS7_S                       ((NRF_TWIS_Type*)                     NRF_TWIS7_S_BASE)
#define NRF_UARTE7_S                      ((NRF_UARTE_Type*)                    NRF_UARTE7_S_BASE)

/* =========================================================================================================================== */
/* ================                                    TrustZone Remapping                                    ================ */
/* =========================================================================================================================== */

#ifdef NRF_NONSECURE                                 /*!< Remap NRF_X_NS instances to NRF_X symbol for ease of use.            */
  #define NRF_USBHSCORE0                          NRF_USBHSCORE0_NS
  #define NRF_I3CCORE0                            NRF_I3CCORE0_NS
  #define NRF_I3CCORE1                            NRF_I3CCORE1_NS
  #define NRF_EASYVDMA                            NRF_EASYVDMA_NS
  #define NRF_TBM                                 NRF_TBM_NS
  #define NRF_TSGEN                               NRF_TSGEN_NS
  #define NRF_STM                                 NRF_STM_NS
  #define NRF_TPIU                                NRF_TPIU_NS
  #define NRF_ETB                                 NRF_ETB_NS
  #define NRF_ETR                                 NRF_ETR_NS
  #define NRF_CTI0                                NRF_CTI0_NS
  #define NRF_CTI1                                NRF_CTI1_NS
  #define NRF_ATBREPLICATOR0                      NRF_ATBREPLICATOR0_NS
  #define NRF_ATBREPLICATOR1                      NRF_ATBREPLICATOR1_NS
  #define NRF_ATBREPLICATOR2                      NRF_ATBREPLICATOR2_NS
  #define NRF_ATBREPLICATOR3                      NRF_ATBREPLICATOR3_NS
  #define NRF_ATBFUNNEL0                          NRF_ATBFUNNEL0_NS
  #define NRF_ATBFUNNEL1                          NRF_ATBFUNNEL1_NS
  #define NRF_ATBFUNNEL2                          NRF_ATBFUNNEL2_NS
  #define NRF_ATBFUNNEL3                          NRF_ATBFUNNEL3_NS
  #define NRF_GPIOTE0                             NRF_GPIOTE0_NS
  #define NRF_GPIOTE1                             NRF_GPIOTE1_NS
  #define NRF_USBHS                               NRF_USBHS_NS
  #define NRF_GIPCT0                              NRF_GIPCT0_NS
  #define NRF_MUTEX0                              NRF_MUTEX0_NS
  #define NRF_I3C0                                NRF_I3C0_NS
  #define NRF_I3C1                                NRF_I3C1_NS
  #define NRF_GDPPIC0                             NRF_GDPPIC0_NS
  #define NRF_GTIMER0                             NRF_GTIMER0_NS
  #define NRF_GTIMER1                             NRF_GTIMER1_NS
  #define NRF_PWM0                                NRF_PWM0_NS
  #define NRF_SERIOBOX0                           NRF_SERIOBOX0_NS
  #define NRF_HSSPIM0                             NRF_HSSPIM0_NS
  #define NRF_HSSPIM1                             NRF_HSSPIM1_NS
  #define NRF_SERIOBOX1                           NRF_SERIOBOX1_NS
  #define NRF_GIPCT1                              NRF_GIPCT1_NS
  #define NRF_GDPPIC1                             NRF_GDPPIC1_NS
  #define NRF_MUTEX1                              NRF_MUTEX1_NS
  #define NRF_GRTC0                               NRF_GRTC0_NS
  #define NRF_GRTC1                               NRF_GRTC1_NS
  #define NRF_GWDT1                               NRF_GWDT1_NS
  #define NRF_GWDT2                               NRF_GWDT2_NS
  #define NRF_P0                                  NRF_P0_NS
  #define NRF_P1                                  NRF_P1_NS
  #define NRF_P2                                  NRF_P2_NS
  #define NRF_P3                                  NRF_P3_NS
  #define NRF_P4                                  NRF_P4_NS
  #define NRF_P5                                  NRF_P5_NS
  #define NRF_P6                                  NRF_P6_NS
  #define NRF_P7                                  NRF_P7_NS
  #define NRF_P8                                  NRF_P8_NS
  #define NRF_P9                                  NRF_P9_NS
  #define NRF_P10                                 NRF_P10_NS
  #define NRF_P11                                 NRF_P11_NS
  #define NRF_P12                                 NRF_P12_NS
  #define NRF_P13                                 NRF_P13_NS
  #define NRF_P14                                 NRF_P14_NS
  #define NRF_GGPIOINTERNAL                       NRF_GGPIOINTERNAL_NS
  #define NRF_P15                                 NRF_P15_NS
  #define NRF_GDPPIC2                             NRF_GDPPIC2_NS
  #define NRF_SAADC                               NRF_SAADC_NS
  #define NRF_COMP                                NRF_COMP_NS
  #define NRF_LPCOMP                              NRF_LPCOMP_NS
  #define NRF_TEMP                                NRF_TEMP_NS
  #define NRF_NFCT                                NRF_NFCT_NS
  #define NRF_GDPPIC3                             NRF_GDPPIC3_NS
  #define NRF_I2S                                 NRF_I2S_NS
  #define NRF_PDM                                 NRF_PDM_NS
  #define NRF_QDEC0                               NRF_QDEC0_NS
  #define NRF_QDEC1                               NRF_QDEC1_NS
  #define NRF_SIMIF                               NRF_SIMIF_NS
  #define NRF_GMIPIRFFE                           NRF_GMIPIRFFE_NS
  #define NRF_TWIM8                               NRF_TWIM8_NS
  #define NRF_GDPPIC4                             NRF_GDPPIC4_NS
  #define NRF_GTIMER2                             NRF_GTIMER2_NS
  #define NRF_GTIMER3                             NRF_GTIMER3_NS
  #define NRF_PWM1                                NRF_PWM1_NS
  #define NRF_SPIM0                               NRF_SPIM0_NS
  #define NRF_SPIS0                               NRF_SPIS0_NS
  #define NRF_TWIM0                               NRF_TWIM0_NS
  #define NRF_TWIS0                               NRF_TWIS0_NS
  #define NRF_UARTE0                              NRF_UARTE0_NS
  #define NRF_SPIM1                               NRF_SPIM1_NS
  #define NRF_SPIS1                               NRF_SPIS1_NS
  #define NRF_TWIM1                               NRF_TWIM1_NS
  #define NRF_TWIS1                               NRF_TWIS1_NS
  #define NRF_UARTE1                              NRF_UARTE1_NS
  #define NRF_GDPPIC5                             NRF_GDPPIC5_NS
  #define NRF_GTIMER4                             NRF_GTIMER4_NS
  #define NRF_GTIMER5                             NRF_GTIMER5_NS
  #define NRF_PWM2                                NRF_PWM2_NS
  #define NRF_SPIM2                               NRF_SPIM2_NS
  #define NRF_SPIS2                               NRF_SPIS2_NS
  #define NRF_TWIM2                               NRF_TWIM2_NS
  #define NRF_TWIS2                               NRF_TWIS2_NS
  #define NRF_UARTE2                              NRF_UARTE2_NS
  #define NRF_SPIM3                               NRF_SPIM3_NS
  #define NRF_SPIS3                               NRF_SPIS3_NS
  #define NRF_TWIM3                               NRF_TWIM3_NS
  #define NRF_TWIS3                               NRF_TWIS3_NS
  #define NRF_UARTE3                              NRF_UARTE3_NS
  #define NRF_GDPPIC6                             NRF_GDPPIC6_NS
  #define NRF_GTIMER6                             NRF_GTIMER6_NS
  #define NRF_GTIMER7                             NRF_GTIMER7_NS
  #define NRF_PWM3                                NRF_PWM3_NS
  #define NRF_SPIM4                               NRF_SPIM4_NS
  #define NRF_SPIS4                               NRF_SPIS4_NS
  #define NRF_TWIM4                               NRF_TWIM4_NS
  #define NRF_TWIS4                               NRF_TWIS4_NS
  #define NRF_UARTE4                              NRF_UARTE4_NS
  #define NRF_SPIM5                               NRF_SPIM5_NS
  #define NRF_SPIS5                               NRF_SPIS5_NS
  #define NRF_TWIM5                               NRF_TWIM5_NS
  #define NRF_TWIS5                               NRF_TWIS5_NS
  #define NRF_UARTE5                              NRF_UARTE5_NS
  #define NRF_GDPPIC7                             NRF_GDPPIC7_NS
  #define NRF_GTIMER8                             NRF_GTIMER8_NS
  #define NRF_GTIMER9                             NRF_GTIMER9_NS
  #define NRF_PWM4                                NRF_PWM4_NS
  #define NRF_SPIM6                               NRF_SPIM6_NS
  #define NRF_SPIS6                               NRF_SPIS6_NS
  #define NRF_TWIM6                               NRF_TWIM6_NS
  #define NRF_TWIS6                               NRF_TWIS6_NS
  #define NRF_UARTE6                              NRF_UARTE6_NS
  #define NRF_SPIM7                               NRF_SPIM7_NS
  #define NRF_SPIS7                               NRF_SPIS7_NS
  #define NRF_TWIM7                               NRF_TWIM7_NS
  #define NRF_TWIS7                               NRF_TWIS7_NS
  #define NRF_UARTE7                              NRF_UARTE7_NS
#else                                                /*!< Remap NRF_X_S instances to NRF_X symbol for ease of use.             */
  #define NRF_USBHSCORE0                          NRF_USBHSCORE0_NS
  #define NRF_I3CCORE0                            NRF_I3CCORE0_NS
  #define NRF_I3CCORE1                            NRF_I3CCORE1_NS
  #define NRF_EASYVDMA                            NRF_EASYVDMA_NS
  #define NRF_TDDCONF                             NRF_TDDCONF_S
  #define NRF_TBM                                 NRF_TBM_S
  #define NRF_TSGEN                               NRF_TSGEN_NS
  #define NRF_STM                                 NRF_STM_NS
  #define NRF_TPIU                                NRF_TPIU_NS
  #define NRF_ETB                                 NRF_ETB_NS
  #define NRF_ETR                                 NRF_ETR_NS
  #define NRF_CTI0                                NRF_CTI0_NS
  #define NRF_CTI1                                NRF_CTI1_NS
  #define NRF_ATBREPLICATOR0                      NRF_ATBREPLICATOR0_NS
  #define NRF_ATBREPLICATOR1                      NRF_ATBREPLICATOR1_NS
  #define NRF_ATBREPLICATOR2                      NRF_ATBREPLICATOR2_NS
  #define NRF_ATBREPLICATOR3                      NRF_ATBREPLICATOR3_NS
  #define NRF_ATBFUNNEL0                          NRF_ATBFUNNEL0_NS
  #define NRF_ATBFUNNEL1                          NRF_ATBFUNNEL1_NS
  #define NRF_ATBFUNNEL2                          NRF_ATBFUNNEL2_NS
  #define NRF_ATBFUNNEL3                          NRF_ATBFUNNEL3_NS
  #define NRF_GPIOTE0                             NRF_GPIOTE0_S
  #define NRF_GPIOTE1                             NRF_GPIOTE1_S
  #define NRF_USBHS                               NRF_USBHS_S
  #define NRF_GIPCT0                              NRF_GIPCT0_S
  #define NRF_MUTEX0                              NRF_MUTEX0_NS
  #define NRF_I3C0                                NRF_I3C0_S
  #define NRF_I3C1                                NRF_I3C1_S
  #define NRF_GDPPIC0                             NRF_GDPPIC0_S
  #define NRF_GTIMER0                             NRF_GTIMER0_S
  #define NRF_GTIMER1                             NRF_GTIMER1_S
  #define NRF_PWM0                                NRF_PWM0_S
  #define NRF_SERIOBOX0                           NRF_SERIOBOX0_S
  #define NRF_HSSPIM0                             NRF_HSSPIM0_S
  #define NRF_HSSPIM1                             NRF_HSSPIM1_S
  #define NRF_SERIOBOX1                           NRF_SERIOBOX1_S
  #define NRF_GIPCT1                              NRF_GIPCT1_S
  #define NRF_GDPPIC1                             NRF_GDPPIC1_S
  #define NRF_MUTEX1                              NRF_MUTEX1_NS
  #define NRF_GRTC0                               NRF_GRTC0_S
  #define NRF_GRTC1                               NRF_GRTC1_S
  #define NRF_GWDT1                               NRF_GWDT1_S
  #define NRF_GWDT2                               NRF_GWDT2_S
  #define NRF_P0                                  NRF_P0_S
  #define NRF_P1                                  NRF_P1_S
  #define NRF_P2                                  NRF_P2_S
  #define NRF_P3                                  NRF_P3_S
  #define NRF_P4                                  NRF_P4_S
  #define NRF_P5                                  NRF_P5_S
  #define NRF_P6                                  NRF_P6_S
  #define NRF_P7                                  NRF_P7_S
  #define NRF_P8                                  NRF_P8_S
  #define NRF_P9                                  NRF_P9_S
  #define NRF_P10                                 NRF_P10_S
  #define NRF_P11                                 NRF_P11_S
  #define NRF_P12                                 NRF_P12_S
  #define NRF_P13                                 NRF_P13_S
  #define NRF_P14                                 NRF_P14_S
  #define NRF_GGPIOINTERNAL                       NRF_GGPIOINTERNAL_S
  #define NRF_P15                                 NRF_P15_S
  #define NRF_GDPPIC2                             NRF_GDPPIC2_S
  #define NRF_SAADC                               NRF_SAADC_S
  #define NRF_COMP                                NRF_COMP_S
  #define NRF_LPCOMP                              NRF_LPCOMP_S
  #define NRF_TEMP                                NRF_TEMP_S
  #define NRF_NFCT                                NRF_NFCT_S
  #define NRF_GDPPIC3                             NRF_GDPPIC3_S
  #define NRF_I2S                                 NRF_I2S_S
  #define NRF_PDM                                 NRF_PDM_S
  #define NRF_QDEC0                               NRF_QDEC0_S
  #define NRF_QDEC1                               NRF_QDEC1_S
  #define NRF_SIMIF                               NRF_SIMIF_S
  #define NRF_GMIPIRFFE                           NRF_GMIPIRFFE_S
  #define NRF_TWIM8                               NRF_TWIM8_S
  #define NRF_GDPPIC4                             NRF_GDPPIC4_S
  #define NRF_GTIMER2                             NRF_GTIMER2_S
  #define NRF_GTIMER3                             NRF_GTIMER3_S
  #define NRF_PWM1                                NRF_PWM1_S
  #define NRF_SPIM0                               NRF_SPIM0_S
  #define NRF_SPIS0                               NRF_SPIS0_S
  #define NRF_TWIM0                               NRF_TWIM0_S
  #define NRF_TWIS0                               NRF_TWIS0_S
  #define NRF_UARTE0                              NRF_UARTE0_S
  #define NRF_SPIM1                               NRF_SPIM1_S
  #define NRF_SPIS1                               NRF_SPIS1_S
  #define NRF_TWIM1                               NRF_TWIM1_S
  #define NRF_TWIS1                               NRF_TWIS1_S
  #define NRF_UARTE1                              NRF_UARTE1_S
  #define NRF_GDPPIC5                             NRF_GDPPIC5_S
  #define NRF_GTIMER4                             NRF_GTIMER4_S
  #define NRF_GTIMER5                             NRF_GTIMER5_S
  #define NRF_PWM2                                NRF_PWM2_S
  #define NRF_SPIM2                               NRF_SPIM2_S
  #define NRF_SPIS2                               NRF_SPIS2_S
  #define NRF_TWIM2                               NRF_TWIM2_S
  #define NRF_TWIS2                               NRF_TWIS2_S
  #define NRF_UARTE2                              NRF_UARTE2_S
  #define NRF_SPIM3                               NRF_SPIM3_S
  #define NRF_SPIS3                               NRF_SPIS3_S
  #define NRF_TWIM3                               NRF_TWIM3_S
  #define NRF_TWIS3                               NRF_TWIS3_S
  #define NRF_UARTE3                              NRF_UARTE3_S
  #define NRF_GDPPIC6                             NRF_GDPPIC6_S
  #define NRF_GTIMER6                             NRF_GTIMER6_S
  #define NRF_GTIMER7                             NRF_GTIMER7_S
  #define NRF_PWM3                                NRF_PWM3_S
  #define NRF_SPIM4                               NRF_SPIM4_S
  #define NRF_SPIS4                               NRF_SPIS4_S
  #define NRF_TWIM4                               NRF_TWIM4_S
  #define NRF_TWIS4                               NRF_TWIS4_S
  #define NRF_UARTE4                              NRF_UARTE4_S
  #define NRF_SPIM5                               NRF_SPIM5_S
  #define NRF_SPIS5                               NRF_SPIS5_S
  #define NRF_TWIM5                               NRF_TWIM5_S
  #define NRF_TWIS5                               NRF_TWIS5_S
  #define NRF_UARTE5                              NRF_UARTE5_S
  #define NRF_GDPPIC7                             NRF_GDPPIC7_S
  #define NRF_GTIMER8                             NRF_GTIMER8_S
  #define NRF_GTIMER9                             NRF_GTIMER9_S
  #define NRF_PWM4                                NRF_PWM4_S
  #define NRF_SPIM6                               NRF_SPIM6_S
  #define NRF_SPIS6                               NRF_SPIS6_S
  #define NRF_TWIM6                               NRF_TWIM6_S
  #define NRF_TWIS6                               NRF_TWIS6_S
  #define NRF_UARTE6                              NRF_UARTE6_S
  #define NRF_SPIM7                               NRF_SPIM7_S
  #define NRF_SPIS7                               NRF_SPIS7_S
  #define NRF_TWIM7                               NRF_TWIM7_S
  #define NRF_TWIS7                               NRF_TWIS7_S
  #define NRF_UARTE7                              NRF_UARTE7_S
#endif                                               /*!<  NRF_NONSECURE                                                       */

/* ========================================== End of section using anonymous unions ========================================== */

#if defined (__CC_ARM)
  #pragma pop
#elif defined (__ICCARM__)
  /* leave anonymous unions enabled */
#elif (__ARMCC_VERSION >= 6010050)
  #pragma clang diagnostic pop
#elif defined (__GNUC__)
  /* anonymous unions are enabled by default */
#elif defined (__TMS470__)
  /* anonymous unions are enabled by default */
#elif defined (__TASKING__)
  #pragma warning restore
#elif defined (__CSMC__)
  /* anonymous unions are enabled by default */
#elif defined (_CEVA)
  /* anonymous unions are enabled by default */
#endif


#ifdef __cplusplus
}
#endif
#endif /* HALTIUM_GLOBAL_H */

