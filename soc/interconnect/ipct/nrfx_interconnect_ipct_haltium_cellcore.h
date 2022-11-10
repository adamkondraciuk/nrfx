/*$$$LICENCE_NORDIC_STANDARD<2022>$$$*/

#ifndef NRFX_INTERCONNECT_IPCT_HALTIUM_CELLCORE_H__
#define NRFX_INTERCONNECT_IPCT_HALTIUM_CELLCORE_H__

#ifdef __cplusplus
extern "C" {
#endif

#define NRFX_IPC_LOCAL_DEFINE               \
static nrfx_atomic_t m_ipct_channels = 0xFF;

#define NRFX_IPC_LOCAL_INTERCONNECT                                           \
{                                                                             \
    { /* IPCT */                                                              \
        .p_ipct = NRF_IPCT,                                                   \
        .p_ipct_channels = &m_ipct_channels,                                  \
        .ipct_pub_channels_mask = NRFX_IPCT_PUB_CONFIG_ALLOWED_CHANNELS_MASK, \
        .ipct_sub_channels_mask = NRFX_IPCT_SUB_CONFIG_ALLOWED_CHANNELS_MASK, \
    },                                                                        \
}

#ifdef __cplusplus
}
#endif

#endif // NRFX_INTERCONNECT_IPCT_HALTIUM_CELLCORE_H__
