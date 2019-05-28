/*$$$LICENCE_NORDIC_STANDARD<2018>$$$*/

#ifndef NRF_REGULATORS_H__
#define NRF_REGULATORS_H__

#include <nrfx.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrf_regulators_hal REGULATORS HAL
 * @{
 * @ingroup nrf_power
 * @brief   Hardware access layer for managing the REGULATORS peripheral.
 */

/**
 * @brief Function for enabling or disabling DCDC converter.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] enable Set true to enable or false to disable DCDC converter.
 */
NRF_STATIC_INLINE void nrf_regulators_dcdcen_set(NRF_REGULATORS_Type * p_reg, bool enable);

/**
 * @brief Function for putting CPU in system OFF mode.
 *
 * This function puts the CPU into system off mode.
 * The only way to wake up the CPU is by reset.
 *
 * @note This function never returns.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 */
NRF_STATIC_INLINE void nrf_regulators_system_off(NRF_REGULATORS_Type * p_reg);

#ifndef NRF_DECLARE_ONLY

NRF_STATIC_INLINE void nrf_regulators_dcdcen_set(NRF_REGULATORS_Type * p_reg, bool enable)
{
    p_reg->DCDCEN = (enable ? REGULATORS_DCDCEN_DCDCEN_Msk : 0);
}

NRF_STATIC_INLINE void nrf_regulators_system_off(NRF_REGULATORS_Type * p_reg)
{
    p_reg->SYSTEMOFF = REGULATORS_SYSTEMOFF_SYSTEMOFF_Msk;
    __DSB();

    /* Solution for simulated System OFF in debug mode */
    while (true)
    {
        __WFE();
    }
}

#endif // NRF_DECLARE_ONLY

/** @} */

#ifdef __cplusplus
}
#endif

#endif // NRF_REGULATORS_H__
