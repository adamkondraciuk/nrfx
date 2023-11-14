/*$$$LICENCE_NORDIC_STANDARD<2023>$$$*/

#ifndef NRFX_INTERCONNECT_DPPIC_PPIB_LUMOS_H__
#define NRFX_INTERCONNECT_DPPIC_PPIB_LUMOS_H__

#include <nrfx.h>

#ifdef __cplusplus
extern "C" {
#endif  

#define NRFX_INTERCONNECT_PPIB_MAP                         \
{                                                          \
    {                                                      \
        .p_ppib1 = NRF_PPIB00_S,                           \
        .p_ppib2 = NRF_PPIB10_S,                           \
        .channels_mask = NRF_PPIB00_TO_PPIB10_CHANNEL_MASK \
    },                                                     \
    {                                                      \
        .p_ppib1 = NRF_PPIB11_S,                           \
        .p_ppib2 = NRF_PPIB21_S,                           \
        .channels_mask = NRF_PPIB11_TO_PPIB21_CHANNEL_MASK \
    },                                                     \
    {                                                      \
        .p_ppib1 = NRF_PPIB22_S,                           \
        .p_ppib2 = NRF_PPIB30_S,                           \
        .channels_mask = NRF_PPIB22_TO_PPIB30_CHANNEL_MASK \
    },                                                     \
    {                                                      \
        .p_ppib1 = NRF_PPIB20_S,                           \
        .p_ppib2 = NRF_PPIB01_S,                           \
        .channels_mask = NRF_PPIB20_TO_PPIB01_CHANNEL_MASK \
    },                                                     \
}

#define NRFX_INTERCONNECT_DPPIC_PPIB_MAP \
{                                        \
    {                                    \
        .dppic = NRF_DPPIC00,            \
        .ppib  = NRF_PPIB00_S,           \
    },                                   \
    {                                    \
        .dppic = NRF_DPPIC00,            \
        .ppib  = NRF_PPIB01_S,           \
    },                                   \
    {                                    \
        .dppic = NRF_DPPIC10,            \
        .ppib  = NRF_PPIB10_S,           \
    },                                   \
    {                                    \
        .dppic = NRF_DPPIC10,            \
        .ppib  = NRF_PPIB11_S,           \
    },                                   \
    {                                    \
        .dppic = NRF_DPPIC20,            \
        .ppib  = NRF_PPIB20_S,           \
    },                                   \
    {                                    \
        .dppic = NRF_DPPIC20,            \
        .ppib  = NRF_PPIB21_S,           \
    },                                   \
    {                                    \
        .dppic = NRF_DPPIC20,            \
        .ppib  = NRF_PPIB22_S,           \
    },                                   \
    {                                    \
        .dppic = NRF_DPPIC30,            \
        .ppib  = NRF_PPIB30_S,           \
    },                                   \
}

#define NRFX_INTERCONNECT_DPPIC_MAP                     \
{                                                       \
    {                                                   \
        .apb_index     = NRF_APB_INDEX_MCU,             \
        .dppic         = NRF_DPPIC00,                   \
        .channels_mask = NRFX_BIT_MASK(DPPIC00_CH_NUM), \
        .apb_size      = 0x40000                        \
    },                                                  \
    {                                                   \
        .apb_index     = NRF_APB_INDEX_RADIO,           \
        .dppic         = NRF_DPPIC10,                   \
        .channels_mask = NRFX_BIT_MASK(DPPIC10_CH_NUM), \
        .apb_size      = 0x40000                        \
    },                                                  \
    {                                                   \
        .apb_index     = NRF_APB_INDEX_PERI,            \
        .dppic         = NRF_DPPIC20,                   \
        .channels_mask = NRFX_BIT_MASK(DPPIC20_CH_NUM), \
        .apb_size      = 0x40000                        \
    },                                                  \
    {                                                   \
        .apb_index     = NRF_APB_INDEX_LP,              \
        .dppic         = NRF_DPPIC30,                   \
        .channels_mask = NRFX_BIT_MASK(DPPIC30_CH_NUM), \
        .apb_size      = 0x40000                        \
    },                                                  \
}

#define NRFX_INTERCONNECT_DPPIC_COUNT      DPPIC_COUNT
#define NRFX_INTERCONNECT_DPPIC_PPIB_COUNT PPIB_COUNT
#define NRFX_INTERCONNECT_PPIB_COUNT       (NRFX_INTERCONNECT_DPPIC_PPIB_COUNT/2)

#ifdef __cplusplus
}
#endif

#endif // NRFX_INTERCONNECT_DPPIC_PPIB_LUMOS_H__
