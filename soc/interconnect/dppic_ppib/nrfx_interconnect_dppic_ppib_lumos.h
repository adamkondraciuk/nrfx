/*$$$LICENCE_NORDIC_STANDARD<2023>$$$*/

#ifndef NRFX_INTERCONNECT_DPPIC_PPIB_LUMOS_H__
#define NRFX_INTERCONNECT_DPPIC_PPIB_LUMOS_H__

#include <nrfx.h>

#ifdef __cplusplus
extern "C" {
#endif

#define NRFX_INTERCONNECT_PPIB_TASKS_GET(PPIB_INDEX) \
    (NRFX_CONCAT(PPIB, PPIB_INDEX, _NTASKSEVENTS_MAX) + 1UL)

#define NRFX_INTERCONNECT_PPIB(FIRST_PPIB_INDEX, SECOND_PPIB_INDEX)                                \
{                                                                                                  \
    .p_ppib1 = NRFX_CONCAT(NRF_PPIB, FIRST_PPIB_INDEX),                                            \
    .p_ppib2 = NRFX_CONCAT(NRF_PPIB, SECOND_PPIB_INDEX),                                           \
    .channels_mask = NRFX_BIT_MASK(NRFX_MIN(NRFX_INTERCONNECT_PPIB_TASKS_GET(FIRST_PPIB_INDEX),    \
                                            NRFX_INTERCONNECT_PPIB_TASKS_GET(SECOND_PPIB_INDEX))), \
}

#if (defined (NRF54L15_XXAA) || defined (NRF54L15_ENGA_XXAA))

#define NRFX_INTERCONNECT_PPIB_MAP  \
{                                   \
    NRFX_INTERCONNECT_PPIB(00, 10), \
    NRFX_INTERCONNECT_PPIB(11, 21), \
    NRFX_INTERCONNECT_PPIB(22, 30), \
    NRFX_INTERCONNECT_PPIB(20, 01), \
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

#elif defined (NRF54L20_ENGA_XXAA)

#define NRFX_INTERCONNECT_PPIB_MAP  \
{                                   \
    NRFX_INTERCONNECT_PPIB(00, 10), \
    NRFX_INTERCONNECT_PPIB(03, 02), \
    NRFX_INTERCONNECT_PPIB(04, 12), \
    NRFX_INTERCONNECT_PPIB(11, 21), \
    NRFX_INTERCONNECT_PPIB(22, 30), \
    NRFX_INTERCONNECT_PPIB(20, 01), \
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
        .dppic = NRF_DPPIC00,            \
        .ppib  = NRF_PPIB02_S,           \
    },                                   \
    {                                    \
        .dppic = NRF_DPPIC01,            \
        .ppib  = NRF_PPIB03_S,           \
    },                                   \
    {                                    \
        .dppic = NRF_DPPIC01,            \
        .ppib  = NRF_PPIB04_S,           \
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
        .dppic = NRF_DPPIC10,            \
        .ppib  = NRF_PPIB12_S,           \
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
        .apb_index     = 0,                             \
        .dppic         = NRF_DPPIC01,                   \
        .channels_mask = NRFX_BIT_MASK(DPPIC01_CH_NUM), \
        .apb_size      = 0x40000                        \
    },                                                  \
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

#endif

#define NRFX_INTERCONNECT_DPPIC_COUNT      DPPIC_COUNT
#define NRFX_INTERCONNECT_DPPIC_PPIB_COUNT PPIB_COUNT
#define NRFX_INTERCONNECT_PPIB_COUNT       (NRFX_INTERCONNECT_DPPIC_PPIB_COUNT/2)

#ifdef __cplusplus
}
#endif

#endif // NRFX_INTERCONNECT_DPPIC_PPIB_LUMOS_H__
