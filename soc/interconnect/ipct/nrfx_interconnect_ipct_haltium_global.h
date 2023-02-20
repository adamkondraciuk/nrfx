/*$$$LICENCE_NORDIC_STANDARD<2022>$$$*/

#ifndef NRFX_INTERCONNECT_IPCT_HALTIUM_GLOBAL_H__
#define NRFX_INTERCONNECT_IPCT_HALTIUM_GLOBAL_H__

#ifdef __cplusplus
extern "C" {
#endif

#define MAIN_IPCT_INTERCONNECT_IDX 1

#ifndef NRFX_INTERCONNECT_IPCT_GLOBAL_DEFINE
/* Default IPCT static variables generation in case of bare-metal application. */
#ifndef NRFX_IPCTx_CHANNELS_SINGLE_VAR_NAME_BY_INST_NUM
#define NRFX_IPCTx_CHANNELS_SINGLE_VAR_NAME_BY_INST_NUM(inst_num) \
        NRFX_CONCAT(m_ipct, inst_num, _channels)
#else
#error "Invalid set of configuration for IPCT."
#endif

#ifndef NRFX_IPCTx_PUB_CONFIG_ALLOWED_CHANNELS_MASK_BY_INST_NUM
#define NRFX_IPCTx_PUB_CONFIG_ALLOWED_CHANNELS_MASK_BY_INST_NUM(inst_num) \
        NRFX_CONCAT(NRFX_IPCT, inst_num, _PUB_CONFIG_ALLOWED_CHANNELS_MASK)
#else
#error "Invalid set of configuration for IPCT."
#endif

#ifndef NRFX_IPCTx_SUB_CONFIG_ALLOWED_CHANNELS_MASK_BY_INST_NUM
#define NRFX_IPCTx_SUB_CONFIG_ALLOWED_CHANNELS_MASK_BY_INST_NUM(inst_num) \
        NRFX_CONCAT(NRFX_IPCT, inst_num, _SUB_CONFIG_ALLOWED_CHANNELS_MASK)
#else
#error "Invalid set of configuration for IPCT."
#endif

#define NRFX_IPCT_CHANNELS_ENTRY(inst_num)                                               \
    NRFX_CONCAT(static nrfx_atomic_t m_ipct, inst_num, _channels __attribute__((used)) = \
                NRFX_IPCTx_PUB_CONFIG_ALLOWED_CHANNELS_MASK_BY_INST_NUM(inst_num) |      \
                NRFX_IPCTx_SUB_CONFIG_ALLOWED_CHANNELS_MASK_BY_INST_NUM(inst_num));

#define _NRFX_IPCT_CHANNELS_ENTRY(periph_name, prefix, inst_num, _) \
        NRFX_IPCT_CHANNELS_ENTRY(inst_num)

#define NRFX_INTERCONNECT_IPCT_GLOBAL_DEFINE \
        NRFX_FOREACH_ENABLED(IPCT, _NRFX_IPCT_CHANNELS_ENTRY, (), ())

#endif // NRFX_INTERCONNECT_IPCT_GLOBAL_DEFINE

#define _NRFX_IPCT_INSTANCE(inst_num) NRFX_CONCAT(NRF, _NRFX_IPCT_PREFIX(inst_num))
#define _NRFX_IPCT_PREFIX(inst_num) NRFX_CONCAT(_IPCT, inst_num)

#define NRFX_INTERCONNECT_IPCT_PROP_ENTRY(inst_num)                                                  \
{                                                                                                    \
        .p_ipct                 = _NRFX_IPCT_INSTANCE(inst_num),                                     \
        .p_ipct_channels        = &NRFX_IPCTx_CHANNELS_SINGLE_VAR_NAME_BY_INST_NUM(inst_num),        \
        .ipct_pub_channels_mask = NRFX_IPCTx_PUB_CONFIG_ALLOWED_CHANNELS_MASK_BY_INST_NUM(inst_num), \
        .ipct_sub_channels_mask = NRFX_IPCTx_SUB_CONFIG_ALLOWED_CHANNELS_MASK_BY_INST_NUM(inst_num), \
},

#define _NRFX_INTERCONNECT_IPCT_GLOBAL_IPCT_PROP_ENTRY(periph_name, prefix, inst_num, _) \
        NRFX_INTERCONNECT_IPCT_PROP_ENTRY(inst_num)

#define NRFX_INTERCONNECT_IPCT_GLOBAL_IPCT_PROP                                           \
{                                                                                         \
        NRFX_FOREACH_ENABLED(IPCT, _NRFX_INTERCONNECT_IPCT_GLOBAL_IPCT_PROP_ENTRY, (), ()) \
}

#ifdef __cplusplus
}
#endif

#endif // NRFX_INTERCONNECT_IPCT_HALTIUM_GLOBAL_H__
