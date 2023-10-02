/*$$$LICENCE_NORDIC_STANDARD<2022>$$$*/

#ifndef NRFX_INTERCONNECT_APB_HALTIUM_GLOBAL_H__
#define NRFX_INTERCONNECT_APB_HALTIUM_GLOBAL_H__

#ifdef __cplusplus
extern "C" {
#endif

/* Instance of the DPPI peripheral which belongs to the main APB bus. */
#define NRFX_INTERCONNECT_MAIN_DPPI_INSTANCE 130

#define NRFX_DPPI_CHANNELS_VAR(inst_num) \
        NRFX_CONCAT(m_dppi, inst_num, _channels)

#ifndef NRFX_INTERCONNECT_APB_GLOBAL_DPPI_DEFINE
/* Default DPPI static variables generation in case of bare-metal application. */
#ifndef NRFX_DPPI_CHANNELS_SINGLE_VAR_NAME_BY_INST_NUM
#define NRFX_DPPI_CHANNELS_SINGLE_VAR_NAME_BY_INST_NUM(inst_num) \
        NRFX_CONCAT(m_dppi, inst_num, _channels)
#else
#error Invalid set of configuration for DPPIC.
#endif

#ifndef NRFX_DPPI_CONFIG_OWNED_CHANNELS_MASK_BY_INST_NUM
#define NRFX_DPPI_CONFIG_OWNED_CHANNELS_MASK_BY_INST_NUM(inst_num) \
        NRFX_CONCAT(NRFX_DPPI, inst_num, _CONFIG_OWNED_CHANNELS_MASK)
#else
#error Invalid set of configuration for DPPIC.
#endif

#ifndef NRFX_DPPI_PUB_CONFIG_ALLOWED_CHANNELS_MASK_BY_INST_NUM
#define NRFX_DPPI_PUB_CONFIG_ALLOWED_CHANNELS_MASK_BY_INST_NUM(inst_num) \
        NRFX_CONCAT(NRFX_DPPI, inst_num, _PUB_CONFIG_ALLOWED_CHANNELS_MASK)
#else
#error Invalid set of configuration for DPPIC.
#endif

#ifndef NRFX_DPPI_SUB_CONFIG_ALLOWED_CHANNELS_MASK_BY_INST_NUM
#define NRFX_DPPI_SUB_CONFIG_ALLOWED_CHANNELS_MASK_BY_INST_NUM(inst_num) \
        NRFX_CONCAT(NRFX_DPPI, inst_num, _SUB_CONFIG_ALLOWED_CHANNELS_MASK)
#else
#error "Invalid set of configuration for DPPIC."
#endif

/* Macro checks if owned inst_num mask is not zero and then returns 1, else 0 */
#ifdef NRF_SECURE
#define NRFX_DPPI_OWNED_MASK(inst_num) 1
#else
#define NRFX_DPPI_OWNED_MASK(inst_num) \
    NRFX_COND_CODE_0(NRFX_DPPI_CONFIG_OWNED_CHANNELS_MASK_BY_INST_NUM(inst_num), (0), (1))
#endif

#define NRFX_DPPI_CHANNELS_ENTRY(inst_num)                                                \
    NRFX_COND_CODE_1(NRFX_DPPI_OWNED_MASK(inst_num),                                      \
        (                                                                                 \
            static nrfx_atomic_t NRFX_DPPI_CHANNELS_VAR(inst_num) __attribute__((used)) = \
            NRFX_DPPI_CONFIG_OWNED_CHANNELS_MASK_BY_INST_NUM(inst_num);                   \
        ), ())

#define _NRFX_DPPI_CHANNELS_ENTRY(periph_name, prefix, inst_num, _)                               \
    /* Since this is used only for global instances macro shall skip instances starting with 0 */ \
    NRFX_COND_CODE_0(prefix, (), (NRFX_DPPI_CHANNELS_ENTRY(inst_num)))

#define NRFX_INTERCONNECT_APB_GLOBAL_DPPI_DEFINE \
        NRFX_FOREACH_PRESENT(DPPIC, _NRFX_DPPI_CHANNELS_ENTRY, (), ())

#endif // NRFX_INTERCONNECT_APB_GLOBAL_DPPI_DEFINE

#define NRFX_INTERCONNECT_APB_PROP_ENTRY(inst_num, ppib, apb_size)                                  \
NRFX_COND_CODE_1(NRFX_DPPI_OWNED_MASK(inst_num),                                                \
(                                                                                               \
{                                                                                               \
    .p_dppi = NRFX_CONCAT(NRF_DPPIC, inst_num),                                                 \
    .p_dppi_channels = &NRFX_DPPI_CHANNELS_SINGLE_VAR_NAME_BY_INST_NUM(inst_num),               \
    .dppi_pub_channels_mask = NRFX_DPPI_PUB_CONFIG_ALLOWED_CHANNELS_MASK_BY_INST_NUM(inst_num), \
    .dppi_sub_channels_mask = NRFX_DPPI_SUB_CONFIG_ALLOWED_CHANNELS_MASK_BY_INST_NUM(inst_num), \
    .p_ppib = ppib,                                                                             \
    .size = apb_size,                                                                           \
}, \
), ())

/* TODO: Use `NRFX_FOREACH_ENABLED` macro here as well when it will be possible to
         retrieve `size` parameter by instance number. There is also need to use `p_ppib` field
         only by local domains and SecDom thus we can eventualy move it out from here.
         However we would still need such parameter then. Ticket: NRFX-3226. */
#define NRFX_INTERCONNECT_APB_GLOBAL_BUSES_PROP                                     \
{                                                                                   \
    NRFX_INTERCONNECT_APB_PROP_ENTRY(120, NRF_SYSCTRL_PPIB121, 0x10000) /* APB22 */ \
    NRFX_INTERCONNECT_APB_PROP_ENTRY(130, NULL, 0x20000)                /* APB32 */ \
    NRFX_INTERCONNECT_APB_PROP_ENTRY(131, NRF_SYSCTRL_PPIB132, 0x10000) /* APB38 */ \
    NRFX_INTERCONNECT_APB_PROP_ENTRY(132, NRF_SYSCTRL_PPIB133, 0x10000) /* APB39 */ \
    NRFX_INTERCONNECT_APB_PROP_ENTRY(133, NRF_SYSCTRL_PPIB134, 0x10000) /* APB3A */ \
    NRFX_INTERCONNECT_APB_PROP_ENTRY(134, NRF_SYSCTRL_PPIB135, 0x10000) /* APB3B */ \
    NRFX_INTERCONNECT_APB_PROP_ENTRY(135, NRF_SYSCTRL_PPIB136, 0x10000) /* APB3C */ \
    NRFX_INTERCONNECT_APB_PROP_ENTRY(136, NRF_SYSCTRL_PPIB137, 0x10000) /* APB3D */ \
}

#ifdef __cplusplus
}
#endif

#endif // NRFX_INTERCONNECT_APB_HALTIUM_GLOBAL_H__
