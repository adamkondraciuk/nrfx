/*$$$LICENCE_NORDIC_STANDARD<2022>$$$*/

#ifndef NRFX_APB_HALTIUM_RADIOCORE_H__
#define NRFX_APB_HALTIUM_RADIOCORE_H__

#ifdef __cplusplus
extern "C" {
#endif

#define NRFX_DPPI_LOCAL_DEFINE                  \
static nrfx_atomic_t m_dppi020_channels = 0xFF; \
static nrfx_atomic_t m_dppi030_channels = 0xFF;

#define NRFX_APB_LOCAL_INTERCONNECT             \
{                                               \
    { /* APB2 */                                \
        .p_dppi = NRF_DPPIC020,                 \
        .p_dppi_channels = &m_dppi020_channels, \
        .p_ppib = NRF_PPIB020,                  \
        .dppi_pub_channels_mask = 0xFF,         \
        .dppi_sub_channels_mask = 0xFF,         \
    },                                          \
    { /* APB3 */                                \
        .p_dppi = NRF_DPPIC030,                 \
        .p_dppi_channels = &m_dppi030_channels, \
        .p_ppib = NRF_PPIB030,                  \
        .dppi_pub_channels_mask = 0xFF,         \
        .dppi_sub_channels_mask = 0xFF,         \
    },                                          \
}

#ifdef __cplusplus
}
#endif

#endif // NRFX_APB_HALTIUM_RADIOCORE_H__
