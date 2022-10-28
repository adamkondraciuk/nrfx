/*$$$LICENCE_NORDIC_STANDARD<2022>$$$*/

#ifndef NRFX_APB_HALTIUM_RADIOCORE_H__
#define NRFX_APB_HALTIUM_RADIOCORE_H__

#ifdef __cplusplus
extern "C" {
#endif

#define NRFX_DPPI_LOCAL_DEFINE                                           \
static nrfx_atomic_t m_dppi020_channels = NRFX_BIT_MASK(DPPI020_CH_NUM); \
static nrfx_atomic_t m_dppi030_channels = NRFX_BIT_MASK(DPPI030_CH_NUM);

#define NRFX_APB_LOCAL_INTERCONNECT                                               \
{                                                                                 \
    { /* APB2 */                                                                  \
        .p_dppi = NRF_DPPIC020,                                                   \
        .p_dppi_channels = &m_dppi020_channels,                                   \
        .dppi_pub_channels_mask = NRFX_DPPIC020_PUB_CONFIG_ALLOWED_CHANNELS_MASK, \
        .dppi_sub_channels_mask = NRFX_DPPIC020_SUB_CONFIG_ALLOWED_CHANNELS_MASK, \
        .p_ppib = NRF_PPIB020,                                                    \
    },                                                                            \
    { /* APB3 */                                                                  \
        .p_dppi = NRF_DPPIC030,                                                   \
        .p_dppi_channels = &m_dppi030_channels,                                   \
        .dppi_pub_channels_mask = NRFX_DPPIC020_PUB_CONFIG_ALLOWED_CHANNELS_MASK, \
        .dppi_sub_channels_mask = NRFX_DPPIC020_SUB_CONFIG_ALLOWED_CHANNELS_MASK, \
        .p_ppib = NRF_PPIB030,                                                    \
    },                                                                            \
}



#ifdef __cplusplus
}
#endif

#endif // NRFX_APB_HALTIUM_RADIOCORE_H__
