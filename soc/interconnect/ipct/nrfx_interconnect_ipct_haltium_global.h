/*$$$LICENCE_NORDIC_STANDARD<2022>$$$*/

#ifndef NRFX_INTERCONNECT_IPCT_HALTIUM_GLOBAL_H__
#define NRFX_INTERCONNECT_IPCT_HALTIUM_GLOBAL_H__

#ifdef __cplusplus
extern "C" {
#endif

#define MAIN_IPCT_INTERCONNECT_IDX 1

#define NRFX_INTERCONNECT_IPCT_GLOBAL_DEFINE                                              \
static nrfx_atomic_t m_ipct120_channels = NRFX_IPCT120_PUB_CONFIG_ALLOWED_CHANNELS_MASK | \
                                          NRFX_IPCT120_SUB_CONFIG_ALLOWED_CHANNELS_MASK;  \
static nrfx_atomic_t m_ipct130_channels = NRFX_IPCT130_PUB_CONFIG_ALLOWED_CHANNELS_MASK | \
                                          NRFX_IPCT130_SUB_CONFIG_ALLOWED_CHANNELS_MASK;

#define NRFX_INTERCONNECT_IPCT_GLOBAL_IPCT_PROP                                              \
{                                                                                 \
    { /* IPCT120 */                                                               \
        .p_ipct = NRF_IPCT120,                                                    \
        .p_ipct_channels = &m_ipct120_channels,                                   \
        .ipct_pub_channels_mask = NRFX_IPCT120_PUB_CONFIG_ALLOWED_CHANNELS_MASK,  \
        .ipct_sub_channels_mask = NRFX_IPCT120_SUB_CONFIG_ALLOWED_CHANNELS_MASK,  \
    },                                                                            \
    { /* IPCT130 */                                                               \
        .p_ipct = NRF_IPCT130,                                                    \
        .p_ipct_channels = &m_ipct130_channels,                                   \
        .ipct_pub_channels_mask = NRFX_IPCT130_PUB_CONFIG_ALLOWED_CHANNELS_MASK,  \
        .ipct_sub_channels_mask = NRFX_IPCT130_SUB_CONFIG_ALLOWED_CHANNELS_MASK,  \
    }                                                                             \
}

#ifdef __cplusplus
}
#endif

#endif // NRFX_INTERCONNECT_IPCT_HALTIUM_GLOBAL_H__
