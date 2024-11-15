/*$$$LICENCE_NORDIC_STANDARD<2023>$$$*/

#ifndef NRFX_INTERCONNECT_DPPIC_PPIB_LUMOS_H__
#define NRFX_INTERCONNECT_DPPIC_PPIB_LUMOS_H__

#include <nrfx.h>
#include <nrfx_ppib.h>

#ifdef __cplusplus
extern "C" {
#endif

#define NRFX_INTERCONNECT_PPIB_TASKS_GET(PPIB_INDEX) \
    (NRFX_CONCAT(PPIB, PPIB_INDEX, _NTASKSEVENTS_MAX) + 1UL)

#define NRFX_INTERCONNECT_PPIB(FIRST_PPIB_INDEX, SECOND_PPIB_INDEX)                                \
{                                                                                                  \
    .ppib = NRFX_PPIB_INTERCONNECT_INSTANCE(FIRST_PPIB_INDEX, SECOND_PPIB_INDEX),                  \
}

#if NRFX_API_VER_AT_LEAST(3, 8, 0) && !defined(NRF54L15_ENGA_XXAA)
#define DPPI_INSTANCE(idx) .dppic = NRFX_DPPI_INSTANCE(idx)
#else
#define DPPI_INSTANCE(idx)                                          \
    .dppic         = NRFX_CONCAT(NRF_DPPIC, idx),                   \
    .channels_mask = NRFX_BIT_MASK(NRFX_CONCAT(DPPIC, idx, _CH_NUM))
#endif

#if defined(NRF54L05_XXAA) || defined(NRF54L09_ENGA_XXAA) || defined(NRF54L10_XXAA) || \
    defined(NRF54L15_XXAA) || defined(NRF54L15_ENGA_XXAA)

#define NRFX_INTERCONNECT_PPIB_MAP  \
{                                   \
    NRFX_INTERCONNECT_PPIB(00, 10), \
    NRFX_INTERCONNECT_PPIB(11, 21), \
    NRFX_INTERCONNECT_PPIB(22, 30), \
    NRFX_INTERCONNECT_PPIB(01, 20), \
}

#define NRFX_INTERCONNECT_DPPIC_PPIB_MAP \
{                                        \
    {                                    \
        .dppic = NRF_DPPIC00,            \
        .ppib  = NRF_PPIB00,             \
    },                                   \
    {                                    \
        .dppic = NRF_DPPIC00,            \
        .ppib  = NRF_PPIB01,             \
    },                                   \
    {                                    \
        .dppic = NRF_DPPIC10,            \
        .ppib  = NRF_PPIB10,             \
    },                                   \
    {                                    \
        .dppic = NRF_DPPIC10,            \
        .ppib  = NRF_PPIB11,             \
    },                                   \
    {                                    \
        .dppic = NRF_DPPIC20,            \
        .ppib  = NRF_PPIB20,             \
    },                                   \
    {                                    \
        .dppic = NRF_DPPIC20,            \
        .ppib  = NRF_PPIB21,             \
    },                                   \
    {                                    \
        .dppic = NRF_DPPIC20,            \
        .ppib  = NRF_PPIB22,             \
    },                                   \
    {                                    \
        .dppic = NRF_DPPIC30,            \
        .ppib  = NRF_PPIB30,             \
    },                                   \
}

#define NRFX_INTERCONNECT_DPPIC_MAP                        \
{                                                          \
    {                                                      \
        .apb_index     = NRF_APB_INDEX_MCU,                \
        DPPI_INSTANCE(00),                                 \
        .apb_size      = 0x40000                           \
    },                                                     \
    {                                                      \
        .apb_index     = NRF_APB_INDEX_RADIO,              \
        DPPI_INSTANCE(10),                                 \
        .apb_size      = 0x40000                           \
    },                                                     \
    {                                                      \
        .apb_index     = NRF_APB_INDEX_PERI,               \
        DPPI_INSTANCE(20),                                 \
        .apb_size      = 0x40000                           \
    },                                                     \
    {                                                      \
        .apb_index     = NRF_APB_INDEX_LP,                 \
        DPPI_INSTANCE(30),                                 \
        .apb_size      = 0x40000                           \
    },                                                     \
}

#elif defined (NRF54L20_ENGA_XXAA)

#define NRFX_INTERCONNECT_PPIB_MAP  \
{                                   \
    NRFX_INTERCONNECT_PPIB(00, 10), \
    NRFX_INTERCONNECT_PPIB(02, 03), \
    NRFX_INTERCONNECT_PPIB(04, 12), \
    NRFX_INTERCONNECT_PPIB(11, 21), \
    NRFX_INTERCONNECT_PPIB(22, 30), \
    NRFX_INTERCONNECT_PPIB(01, 20), \
}

#define NRFX_INTERCONNECT_DPPIC_PPIB_MAP \
{                                        \
    {                                    \
        .dppic = NRF_DPPIC00,            \
        .ppib  = NRF_PPIB00,             \
    },                                   \
    {                                    \
        .dppic = NRF_DPPIC00,            \
        .ppib  = NRF_PPIB01,             \
    },                                   \
    {                                    \
        .dppic = NRF_DPPIC00,            \
        .ppib  = NRF_PPIB02,             \
    },                                   \
    {                                    \
        .dppic = NRF_DPPIC01,            \
        .ppib  = NRF_PPIB03,             \
    },                                   \
    {                                    \
        .dppic = NRF_DPPIC01,            \
        .ppib  = NRF_PPIB04,             \
    },                                   \
    {                                    \
        .dppic = NRF_DPPIC10,            \
        .ppib  = NRF_PPIB10,             \
    },                                   \
    {                                    \
        .dppic = NRF_DPPIC10,            \
        .ppib  = NRF_PPIB11,             \
    },                                   \
    {                                    \
        .dppic = NRF_DPPIC10,            \
        .ppib  = NRF_PPIB12,             \
    },                                   \
    {                                    \
        .dppic = NRF_DPPIC20,            \
        .ppib  = NRF_PPIB20,             \
    },                                   \
    {                                    \
        .dppic = NRF_DPPIC20,            \
        .ppib  = NRF_PPIB21,             \
    },                                   \
    {                                    \
        .dppic = NRF_DPPIC20,            \
        .ppib  = NRF_PPIB22,             \
    },                                   \
    {                                    \
        .dppic = NRF_DPPIC30,            \
        .ppib  = NRF_PPIB30,             \
    },                                   \
}

#define NRFX_INTERCONNECT_DPPIC_MAP                        \
{                                                          \
    {                                                      \
        .apb_index     = 0,                                \
        DPPI_INSTANCE(01),                                 \
        .apb_size      = 0x40000                           \
    },                                                     \
    {                                                      \
        .apb_index     = NRF_APB_INDEX_MCU,                \
        DPPI_INSTANCE(00),                                 \
        .apb_size      = 0x40000                           \
    },                                                     \
    {                                                      \
        .apb_index     = NRF_APB_INDEX_RADIO,              \
        DPPI_INSTANCE(10),                                 \
        .apb_size      = 0x40000                           \
    },                                                     \
    {                                                      \
        .apb_index     = NRF_APB_INDEX_PERI,               \
        DPPI_INSTANCE(20),                                 \
        .apb_size      = 0x40000                           \
    },                                                     \
    {                                                      \
        .apb_index     = NRF_APB_INDEX_LP,                 \
        DPPI_INSTANCE(30),                                 \
        .apb_size      = 0x40000                           \
    },                                                     \
}

#endif

#define NRFX_INTERCONNECT_DPPIC_COUNT      DPPIC_COUNT
#define NRFX_INTERCONNECT_DPPIC_PPIB_COUNT PPIB_COUNT
#define NRFX_INTERCONNECT_PPIB_COUNT       (NRFX_INTERCONNECT_DPPIC_PPIB_COUNT/2)

#ifdef __cplusplus
}
#endif

#endif // NRFX_INTERCONNECT_DPPIC_PPIB_LUMOS_H__
