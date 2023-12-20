/*$$$LICENCE_NORDIC_STANDARD<2023>$$$*/

#ifndef NRFX_INTERCONNECT_APB_HALTIUM_RADIOCORE_H__
#define NRFX_INTERCONNECT_APB_HALTIUM_RADIOCORE_H__

#ifdef __cplusplus
extern "C" {
#endif

#if ((NRFX_DPPI_PUB_CONFIG_ALLOWED_CHANNELS_MASK_BY_INST_NUM(020) | \
     NRFX_DPPI_SUB_CONFIG_ALLOWED_CHANNELS_MASK_BY_INST_NUM(020)) > \
     NRFX_BIT_MASK(DPPI020_CH_NUM))
#error "Invalid mask for DPPIC020 subscibe/publish defined."
#endif

#if ((NRFX_DPPI_PUB_CONFIG_ALLOWED_CHANNELS_MASK_BY_INST_NUM(030) | \
     NRFX_DPPI_SUB_CONFIG_ALLOWED_CHANNELS_MASK_BY_INST_NUM(030)) > \
     NRFX_BIT_MASK(DPPI030_CH_NUM))
#error "Invalid mask for DPPIC030 subscibe/publish defined."
#endif

#ifndef NRFX_INTERCONNECT_APB_LOCAL_DPPI_DEFINE
#define NRFX_INTERCONNECT_APB_LOCAL_DPPI_DEFINE \
NRFX_DPPI_CHANNELS_ENTRY(020);                  \
NRFX_DPPI_CHANNELS_ENTRY(030);
#endif // NRFX_INTERCONNECT_APB_LOCAL_DPPI_DEFINE

#define NRFX_INTERCONNECT_APB_LOCAL_BUSES_PROP                                                     \
{                                                                                                  \
    NRFX_COND_CODE_1(NRFX_INSTANCE_PRESENT(DPPIC020),                                              \
                     (NRFX_INTERCONNECT_APB_PROP_ENTRY(020, NRF_PPIB020, 0x10000)), ()) /* APB2 */ \
    NRFX_COND_CODE_1(NRFX_INSTANCE_PRESENT(DPPIC030),                                              \
                     (NRFX_INTERCONNECT_APB_PROP_ENTRY(030, NRF_PPIB030, 0x10000)), ()) /* APB3 */ \
}

#ifdef __cplusplus
}
#endif

#endif // NRFX_INTERCONNECT_APB_HALTIUM_RADIOCORE_H__
