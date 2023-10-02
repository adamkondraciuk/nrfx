/*$$$LICENCE_NORDIC_STANDARD<2023>$$$*/

#ifndef NRFX_INTERCONNECT_APB_LOCAL_H__
#define NRFX_INTERCONNECT_APB_LOCAL_H__

#ifdef __cplusplus
extern "C" {
#endif

#define NRFX_DPPI_LOCAL_CONFIG_OWNED_CHANNELS_MASK_BY_INST_NUM(inst_num) \
        NRFX_CONCAT(NRFX_DPPI, inst_num, _CONFIG_OWNED_CHANNELS_MASK)

#define NRFX_DPPI_LOCAL_CHANNELS_ENTRY(inst_num)                                      \
        static nrfx_atomic_t NRFX_DPPI_CHANNELS_VAR(inst_num) __attribute__((used)) = \
        NRFX_DPPI_LOCAL_CONFIG_OWNED_CHANNELS_MASK_BY_INST_NUM(inst_num);

#define NRFX_INTERCONNECT_APB_LOCAL_PROP_ENTRY(inst_num, ppib, apb_size)                        \
{                                                                                               \
    .p_dppi = NRFX_CONCAT(NRF_DPPIC, inst_num),                                                 \
    .p_dppi_channels = &NRFX_DPPI_CHANNELS_VAR(inst_num),                                       \
    .dppi_pub_channels_mask = NRFX_DPPI_PUB_CONFIG_ALLOWED_CHANNELS_MASK_BY_INST_NUM(inst_num), \
    .dppi_sub_channels_mask = NRFX_DPPI_SUB_CONFIG_ALLOWED_CHANNELS_MASK_BY_INST_NUM(inst_num), \
    .p_ppib = ppib,                                                                             \
    .size = apb_size,                                                                           \
},

#ifdef __cplusplus
}
#endif

#endif // NRFX_INTERCONNECT_APB_LOCAL_H__
