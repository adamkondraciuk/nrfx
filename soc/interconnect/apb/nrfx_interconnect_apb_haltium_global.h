/*$$$LICENCE_NORDIC_STANDARD<2022>$$$*/

#ifndef NRFX_INTERCONNECT_APB_HALTIUM_GLOBAL_H__
#define NRFX_INTERCONNECT_APB_HALTIUM_GLOBAL_H__

#ifdef __cplusplus
extern "C" {
#endif

#define NRFX_INTERCONNECT_APB_MAIN_IDX 0

#define NRFX_INTERCONNECT_APB_GLOBAL_DPPI_DEFINE                                           \
static nrfx_atomic_t m_dppi120_channels = NRFX_DPPIC120_PUB_CONFIG_ALLOWED_CHANNELS_MASK | \
                                          NRFX_DPPIC120_SUB_CONFIG_ALLOWED_CHANNELS_MASK;  \
static nrfx_atomic_t m_dppi130_channels = NRFX_DPPIC130_PUB_CONFIG_ALLOWED_CHANNELS_MASK | \
                                          NRFX_DPPIC130_SUB_CONFIG_ALLOWED_CHANNELS_MASK;  \
static nrfx_atomic_t m_dppi131_channels = NRFX_DPPIC131_PUB_CONFIG_ALLOWED_CHANNELS_MASK | \
                                          NRFX_DPPIC131_SUB_CONFIG_ALLOWED_CHANNELS_MASK;  \
static nrfx_atomic_t m_dppi132_channels = NRFX_DPPIC132_PUB_CONFIG_ALLOWED_CHANNELS_MASK | \
                                          NRFX_DPPIC132_SUB_CONFIG_ALLOWED_CHANNELS_MASK;  \
static nrfx_atomic_t m_dppi133_channels = NRFX_DPPIC133_PUB_CONFIG_ALLOWED_CHANNELS_MASK | \
                                          NRFX_DPPIC133_SUB_CONFIG_ALLOWED_CHANNELS_MASK;  \
static nrfx_atomic_t m_dppi134_channels = NRFX_DPPIC134_PUB_CONFIG_ALLOWED_CHANNELS_MASK | \
                                          NRFX_DPPIC134_SUB_CONFIG_ALLOWED_CHANNELS_MASK;  \
static nrfx_atomic_t m_dppi135_channels = NRFX_DPPIC135_PUB_CONFIG_ALLOWED_CHANNELS_MASK | \
                                          NRFX_DPPIC135_SUB_CONFIG_ALLOWED_CHANNELS_MASK;  \
static nrfx_atomic_t m_dppi136_channels = NRFX_DPPIC136_PUB_CONFIG_ALLOWED_CHANNELS_MASK | \
                                          NRFX_DPPIC136_SUB_CONFIG_ALLOWED_CHANNELS_MASK;

#define NRFX_INTERCONNECT_APB_GLOBAL_BUSES_PROP                                   \
{                                                                                 \
    { /* APB32 */                                                                 \
        .p_dppi = NRF_DPPIC130,                                                   \
        .p_dppi_channels = &m_dppi130_channels,                                   \
        .dppi_pub_channels_mask = NRFX_DPPIC130_PUB_CONFIG_ALLOWED_CHANNELS_MASK, \
        .dppi_sub_channels_mask = NRFX_DPPIC130_SUB_CONFIG_ALLOWED_CHANNELS_MASK, \
        .p_ppib = NULL,                                                           \
        .size = 0x20000,                                                          \
    },                                                                            \
    { /* APB22 */                                                                 \
        .p_dppi = NRF_DPPIC120,                                                   \
        .p_dppi_channels = &m_dppi120_channels,                                   \
        .dppi_pub_channels_mask = NRFX_DPPIC120_PUB_CONFIG_ALLOWED_CHANNELS_MASK, \
        .dppi_sub_channels_mask = NRFX_DPPIC120_SUB_CONFIG_ALLOWED_CHANNELS_MASK, \
        .p_ppib = NRF_SYSCTRL_PPIB121,                                            \
        .size = 0x10000,                                                          \
    },                                                                            \
    { /* APB38 */                                                                 \
        .p_dppi = NRF_DPPIC131,                                                   \
        .p_dppi_channels = &m_dppi131_channels,                                   \
        .dppi_pub_channels_mask = NRFX_DPPIC131_PUB_CONFIG_ALLOWED_CHANNELS_MASK, \
        .dppi_sub_channels_mask = NRFX_DPPIC131_SUB_CONFIG_ALLOWED_CHANNELS_MASK, \
        .p_ppib = NRF_SYSCTRL_PPIB132,                                            \
        .size = 0x10000,                                                          \
    },                                                                            \
    { /* APB39 */                                                                 \
        .p_dppi = NRF_DPPIC132,                                                   \
        .p_dppi_channels = &m_dppi132_channels,                                   \
        .dppi_pub_channels_mask = NRFX_DPPIC132_PUB_CONFIG_ALLOWED_CHANNELS_MASK, \
        .dppi_sub_channels_mask = NRFX_DPPIC132_SUB_CONFIG_ALLOWED_CHANNELS_MASK, \
        .p_ppib = NRF_SYSCTRL_PPIB133,                                            \
        .size = 0x10000,                                                          \
    },                                                                            \
    { /* APB3A */                                                                 \
        .p_dppi = NRF_DPPIC133,                                                   \
        .p_dppi_channels = &m_dppi133_channels,                                   \
        .dppi_pub_channels_mask = NRFX_DPPIC133_PUB_CONFIG_ALLOWED_CHANNELS_MASK, \
        .dppi_sub_channels_mask = NRFX_DPPIC133_SUB_CONFIG_ALLOWED_CHANNELS_MASK, \
        .p_ppib = NRF_SYSCTRL_PPIB134,                                            \
        .size = 0x10000,                                                          \
    },                                                                            \
    { /* APB3B */                                                                 \
        .p_dppi = NRF_DPPIC134,                                                   \
        .p_dppi_channels = &m_dppi134_channels,                                   \
        .dppi_pub_channels_mask = NRFX_DPPIC134_PUB_CONFIG_ALLOWED_CHANNELS_MASK, \
        .dppi_sub_channels_mask = NRFX_DPPIC134_SUB_CONFIG_ALLOWED_CHANNELS_MASK, \
        .p_ppib = NRF_SYSCTRL_PPIB135,                                            \
        .size = 0x10000,                                                          \
    },                                                                            \
    { /* APB3C */                                                                 \
        .p_dppi = NRF_DPPIC135,                                                   \
        .p_dppi_channels = &m_dppi135_channels,                                   \
        .dppi_pub_channels_mask = NRFX_DPPIC135_PUB_CONFIG_ALLOWED_CHANNELS_MASK, \
        .dppi_sub_channels_mask = NRFX_DPPIC135_SUB_CONFIG_ALLOWED_CHANNELS_MASK, \
        .p_ppib = NRF_SYSCTRL_PPIB136,                                            \
        .size = 0x10000,                                                          \
    },                                                                            \
    { /* APB3D */                                                                 \
        .p_dppi = NRF_DPPIC136,                                                   \
        .p_dppi_channels = &m_dppi136_channels,                                   \
        .dppi_pub_channels_mask = NRFX_DPPIC136_PUB_CONFIG_ALLOWED_CHANNELS_MASK, \
        .dppi_sub_channels_mask = NRFX_DPPIC136_SUB_CONFIG_ALLOWED_CHANNELS_MASK, \
        .p_ppib = NRF_SYSCTRL_PPIB137,                                            \
        .size = 0x10000,                                                          \
    }                                                                             \
}

#ifdef __cplusplus
}
#endif

#endif // NRFX_INTERCONNECT_APB_HALTIUM_GLOBAL_H__
