/*$$$LICENCE_NORDIC_STANDARD<2022>$$$*/

#ifndef NRF_DISPC_H__
#define NRF_DISPC_H__

#include <nrfx.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrf_dispc_hal DISPC HAL
 * @{
 * @ingroup nrf_dispc
 * @brief   Hardware access layer for managing the Display Controller (DISPC) peripheral.
 */

/** @brief DISPC events. */
typedef enum
{
    NRF_DISPC_EVENT_CORE       = offsetof(NRF_DISPC_Type, EVENTS_CORE),      /**< Event indicating that interrupt triggered at DISPC core. */
    NRF_DISPC_EVENT_UNDERRUN   = offsetof(NRF_DISPC_Type, EVENTS_UNDERRUN),  /**< Event indicating that underrun triggered in the DISPC core FIFO */
    NRF_DISPC_EVENT_LOW_BUFFER = offsetof(NRF_DISPC_Type, EVENTS_LOWBUFFER), /**< Event indicating a low level condition in the DISPC core FIFO */
    NRF_DISPC_EVENT_STARTED    = offsetof(NRF_DISPC_Type, EVENTS_STARTED),   /**< Event indicating that the display controller has been enabled. */
} nrf_dispc_event_t;

/** @brief DISPC interrupts. */
typedef enum
{
    NRF_DISPC_INT_CORE_MASK       = DISPC_INTEN_CORE_Msk,      /**< DISPC interrupt for CORE event. */
    NRF_DISPC_INT_UNDERRUN_MASK   = DISPC_INTEN_UNDERRUN_Msk,  /**< DISPC interrupt for UNDERRUN event. */
    NRF_DISPC_INT_LOW_BUFFER_MASK = DISPC_INTEN_LOWBUFFER_Msk, /**< DISPC interrupt for LOWBUFFER event. */
    NRF_DISPC_INT_STARTED_MASK    = DISPC_INTEN_STARTED_Msk,   /**< DISPC interrupt for STARTED event. */
} nrf_dispc_int_mask_t;

/**
 * @brief Function for clearing the specified DISPC event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event Event to be cleared.
 */
NRF_STATIC_INLINE void nrf_dispc_event_clear(NRF_DISPC_Type * p_reg, nrf_dispc_event_t event);

/**
 * @brief Function for retrieving the state of the DISPC event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event Event to be checked.
 *
 * @retval true  The event has been generated.
 * @retval false The event has not been generated.
 */
NRF_STATIC_INLINE bool nrf_dispc_event_check(NRF_DISPC_Type const * p_reg,
                                             nrf_dispc_event_t      event);

/**
 * @brief Function for getting the address of the specified DISPC event register.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event The specified event.
 *
 * @return Address of the specified event register.
 */
NRF_STATIC_INLINE uint32_t nrf_dispc_event_address_get(NRF_DISPC_Type const * p_reg,
                                                       nrf_dispc_event_t      event);

/**
 * @brief Function for enabling specified interrupts.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of interrupts to be enabled.
 *                  Use @ref nrf_dispc_int_mask_t values for bit masking.
 */
NRF_STATIC_INLINE void nrf_dispc_int_enable(NRF_DISPC_Type * p_reg, uint32_t mask);

/**
 * @brief Function for disabling specified interrupts.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of interrupts to be disabled.
 *                  Use @ref nrf_dispc_int_mask_t values for bit masking.
 */
NRF_STATIC_INLINE void nrf_dispc_int_disable(NRF_DISPC_Type * p_reg, uint32_t mask);

/**
 * @brief Function for checking if the specified interrupts are enabled.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of interrupts to be checked.
 *                  Use @ref nrf_dispc_int_mask_t values for bit masking.
 *
 * @return true  requested interrupts are enabled.
 * @return false requested interrupts are disabled.
 */
NRF_STATIC_INLINE bool nrf_dispc_int_enable_check(NRF_DISPC_Type const * p_reg,
                                                  uint32_t               mask);

/**
 * @brief Function for enabling the DISPC.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 */
NRF_STATIC_INLINE void nrf_dispc_enable(NRF_DISPC_Type * p_reg);

/**
 * @brief Function for disabling the DISPC.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 */
NRF_STATIC_INLINE void nrf_dispc_disable(NRF_DISPC_Type * p_reg);

/**
 * @brief Function for checking if the DISPC peripheral is enabled.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @retval true  The DISPC peripheral is enabled.
 * @retval false The DISPC peripheral is not enabled.
 */
NRF_STATIC_INLINE bool nrf_dispc_enable_check(NRF_DISPC_Type const * p_reg);

#ifndef NRF_DECLARE_ONLY

NRF_STATIC_INLINE void nrf_dispc_event_clear(NRF_DISPC_Type *  p_reg,
                                             nrf_dispc_event_t event)
{
    *((volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)event)) = 0x0UL;
    nrf_event_readback((uint8_t *)p_reg + (uint32_t)event);
}

NRF_STATIC_INLINE bool nrf_dispc_event_check(NRF_DISPC_Type const * p_reg,
                                             nrf_dispc_event_t      event)
{
    return nrf_event_check(p_reg, event);
}

NRF_STATIC_INLINE uint32_t nrf_dispc_event_address_get(NRF_DISPC_Type const * p_reg,
                                                       nrf_dispc_event_t      event)
{
    return nrf_task_event_address_get(p_reg, event);
}

NRF_STATIC_INLINE void nrf_dispc_int_enable(NRF_DISPC_Type * p_reg, uint32_t mask)
{
    p_reg->INTENSET = mask;
}

NRF_STATIC_INLINE void nrf_dispc_int_disable(NRF_DISPC_Type * p_reg, uint32_t mask)
{
    p_reg->INTENCLR = mask;
}

NRF_STATIC_INLINE bool nrf_dispc_int_enable_check(NRF_DISPC_Type const * p_reg,
                                                  uint32_t               mask)
{
    return p_reg->INTENSET & mask;
}

NRF_STATIC_INLINE void nrf_dispc_enable(NRF_DISPC_Type * p_reg)
{
    p_reg->ENABLE = (DISPC_ENABLE_EN_Enabled << DISPC_ENABLE_EN_Pos);
}

NRF_STATIC_INLINE void nrf_dispc_disable(NRF_DISPC_Type * p_reg)
{
    p_reg->ENABLE = (DISPC_ENABLE_EN_Disabled << DISPC_ENABLE_EN_Pos);
}

NRF_STATIC_INLINE bool nrf_dispc_enable_check(NRF_DISPC_Type const * p_reg)
{
    return ((p_reg->ENABLE) & DISPC_ENABLE_EN_Enabled);
}

#endif // NRF_DECLARE_ONLY

/** @} */

#ifdef __cplusplus
}
#endif

#endif  // NRF_DISPC_H__
