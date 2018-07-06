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

/** @brief Power failure comparator thresholds. */
typedef enum
{
    NRF_REGULATORS_POFTHR_V19 = REGULATORS_POFCON_THRESHOLD_V19, /**< Set threshold to 1.9&nbsp;V */
    NRF_REGULATORS_POFTHR_V20 = REGULATORS_POFCON_THRESHOLD_V20, /**< Set threshold to 2.0&nbsp;V */
    NRF_REGULATORS_POFTHR_V21 = REGULATORS_POFCON_THRESHOLD_V21, /**< Set threshold to 2.1&nbsp;V */
    NRF_REGULATORS_POFTHR_V22 = REGULATORS_POFCON_THRESHOLD_V22, /**< Set threshold to 2.2&nbsp;V */
    NRF_REGULATORS_POFTHR_V23 = REGULATORS_POFCON_THRESHOLD_V23, /**< Set threshold to 2.3&nbsp;V */
    NRF_REGULATORS_POFTHR_V24 = REGULATORS_POFCON_THRESHOLD_V24, /**< Set threshold to 2.4&nbsp;V */
    NRF_REGULATORS_POFTHR_V25 = REGULATORS_POFCON_THRESHOLD_V25, /**< Set threshold to 2.5&nbsp;V */
    NRF_REGULATORS_POFTHR_V26 = REGULATORS_POFCON_THRESHOLD_V26, /**< Set threshold to 2.6&nbsp;V */
    NRF_REGULATORS_POFTHR_V27 = REGULATORS_POFCON_THRESHOLD_V27, /**< Set threshold to 2.7&nbsp;V */
    NRF_REGULATORS_POFTHR_V28 = REGULATORS_POFCON_THRESHOLD_V28, /**< Set threshold to 2.8&nbsp;V */
} nrf_regulators_pof_thr_t;

/**
 * @brief Function for enabling power failure comparator.
 *
 * Sets power failure comparator threshold and enable flag.
 *
 * @param[in] p_reg Pointer to the peripheral registers structure.
 * @param[in] thr   The power failure voltage threshold value.
 */
__STATIC_INLINE void nrf_regulators_pofcon_enable(NRF_REGULATORS_Type *    p_reg,
                                                  nrf_regulators_pof_thr_t thr);

/**
 * @brief Function for disabling power failure comparator.
 *
 * @param[in] p_reg Pointer to the peripheral registers structure.
 */
__STATIC_INLINE void nrf_regulators_pofcon_disable(NRF_REGULATORS_Type * p_reg);

/**
 * @brief Function for enabling or disabling DCDC converter.
 *
 * @param[in] p_reg  Pointer to the peripheral registers structure.
 * @param[in] enable Set true to enable or false to disable DCDC converter.
 */
__STATIC_INLINE void nrf_regulators_dcdcen_set(NRF_REGULATORS_Type * p_reg, bool enable);

/**
 * @brief Function for putting CPU in system OFF mode.
 *
 * This function puts the CPU into system off mode.
 * The only way to wake up the CPU is by reset.
 *
 * @note This function never returns.
 *
 * @param[in] p_reg Pointer to the peripheral registers structure.
 */
__STATIC_INLINE void nrf_regulators_systemoff(NRF_REGULATORS_Type * p_reg);

#ifndef SUPPRESS_INLINE_IMPLEMENTATION

__STATIC_INLINE void nrf_regulators_pofcon_enable(NRF_REGULATORS_Type *    p_reg,
                                                  nrf_regulators_pof_thr_t thr)
{
    p_reg->POFCON =(((uint32_t)thr)               << REGULATORS_POFCON_THRESHOLD_Pos) |
                   (REGULATORS_POFCON_POF_Enabled << REGULATORS_POFCON_POF_Pos);
}

__STATIC_INLINE void nrf_regulators_pofcon_disable(NRF_REGULATORS_Type * p_reg)
{
    p_reg->POFCON = REGULATORS_POFCON_POF_Disabled << REGULATORS_POFCON_POF_Pos;
}

__STATIC_INLINE void nrf_regulators_dcdcen_set(NRF_REGULATORS_Type * p_reg, bool enable)
{
    p_reg->DCDCEN = (enable ? REGULATORS_DCDCEN_DCDCEN_Enabled :
                    (REGULATORS_DCDCEN_DCDCEN_Disabled) << REGULATORS_DCDCEN_DCDCEN_Pos);
}

__STATIC_INLINE void nrf_regulators_systemoff(NRF_REGULATORS_Type * p_reg)
{
    p_reg->SYSTEMOFF = REGULATORS_SYSTEMOFF_SYSTEMOFF_Msk;
    __DSB();

    /* Solution for simulated System OFF in debug mode */
    while (true)
    {
        __WFE();
    }
}

#endif // SUPPRESS_INLINE_IMPLEMENTATION

/** @} */

#ifdef __cplusplus
}
#endif

#endif // NRF_REGULATORS_H__
