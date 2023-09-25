/*$$$LICENCE_NORDIC_STANDARD<2023>$$$*/

#ifndef NRF_USBHS_H__
#define NRF_USBHS_H__

#include <nrfx.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrf_usbhs_hal USBHS HAL
 * @{
 * @ingroup nrf_usbhs
 * @brief   Hardware access layer for managing the Universal Serial Bus High Speed (USBHS) peripheral.
 */

/** @brief USBHS tasks. */
typedef enum
{
    NRF_USBHS_TASK_START = offsetof(NRF_USBHS_Type, TASKS_START), ///< Start the USB peripheral.
    NRF_USBHS_TASK_STOP  = offsetof(NRF_USBHS_Type, TASKS_STOP),  ///< Stop the USB peripheral.
} nrf_usbhs_task_t;

/** @brief USBHS events. */
typedef enum
{
    NRF_USBHS_EVENT_CORE = offsetof(NRF_USBHS_Type, EVENTS_CORE), ///< Signal that the USB reset condition is detected on the USB lines.
} nrf_usbhs_event_t;

/** @brief USBHS interrupts. */
typedef enum
{
    NRF_USBHS_INT_USBCORE_MASK = USBHS_INTENSET_CORE_Msk, ///< Interrupt on the USBCORE event.
} nrf_usbhs_int_mask_t;

/**
 * @brief A function for activating the specified USBHS task.
 *
 * @param[in] p_reg A pointer to the structure of registers of the peripheral.
 * @param[in] task  A task to be activated.
 */
NRF_STATIC_INLINE void nrf_usbhs_task_trigger(NRF_USBHS_Type * p_reg, nrf_usbhs_task_t task);

/**
 * @brief A function for returning the address of the specified USBHS task register.
 *
 * @param[in] p_reg A pointer to the structure of registers of the peripheral.
 * @param[in] task  The specified task.
 *
 * @return A task address.
 */
NRF_STATIC_INLINE uint32_t nrf_usbhs_task_address_get(NRF_USBHS_Type const * p_reg,
                                                      nrf_usbhs_task_t       task);

/**
 * @brief A function for clearing the specified event.
 *
 * @param[in] p_reg A pointer to the structure of registers of the peripheral.
 * @param[in] event An event to be cleared.
 */
NRF_STATIC_INLINE void nrf_usbhs_event_clear(NRF_USBHS_Type * p_reg, nrf_usbhs_event_t event);

/**
 * @brief A function for retrieving the state of the USBHS event.
 *
 * @param[in] p_reg A pointer to the structure of registers of the peripheral.
 * @param[in] event An event to be checked.
 *
 * @retval true  The event has been generated.
 * @retval false The event has not been generated.
 */
NRF_STATIC_INLINE bool nrf_usbhs_event_check(NRF_USBHS_Type const * p_reg, nrf_usbhs_event_t event);

/**
 * @brief A function for getting and clearing the state of the specified event.
 *
 * @param[in] p_reg A pointer to the structure of registers of the peripheral.
 * @param[in] event An event to be cleared.
 *
 * @retval true  The event was set.
 * @retval false The event was not set.
 */
NRF_STATIC_INLINE bool nrf_usbhs_event_get_and_clear(NRF_USBHS_Type * p_reg, nrf_usbhs_event_t event);

/**
 * @brief A function for returning the address of the specified USBHS event register.
 *
 * @param[in] p_reg A pointer to the structure of registers of the peripheral.
 * @param[in] event The specified event.
 *
 * @return An address of the event specified as a function parameter.
 */
NRF_STATIC_INLINE uint32_t nrf_usbhs_event_address_get(NRF_USBHS_Type const * p_reg,
                                                       nrf_usbhs_event_t      event);
/**
 * @brief A function for enabling the selected interrupts.
 *
 * @param[in] p_reg A pointer to the structure of registers of the peripheral.
 * @param[in] mask  A mask of interrupts to be enabled.
 */
NRF_STATIC_INLINE void nrf_usbhs_int_enable(NRF_USBHS_Type * p_reg, uint32_t mask);

/**
 * @brief A function for checking if the specified interrupts are enabled.
 *
 * @param[in] p_reg A pointer to the structure of registers of the peripheral.
 * @param[in] mask  A mask of interrupts to be checked.
 *
 * @return A mask of enabled interrupts.
 */
NRF_STATIC_INLINE uint32_t nrf_usbhs_int_enable_check(NRF_USBHS_Type const * p_reg, uint32_t mask);

/**
 * @brief A function for retrieving the information about the enabled interrupts.
 *
 * @param[in] p_reg A pointer to the structure of registers of the peripheral.
 *
 * @return The flags of the enabled interrupts.
 */
NRF_STATIC_INLINE uint32_t nrf_usbhs_int_enable_get(NRF_USBHS_Type const * p_reg);

/**
 * @brief A function for disabling the selected interrupts.
 *
 * @param[in] p_reg A pointer to the structure of registers of the peripheral.
 * @param[in] mask  A mask of interrupts to be disabled.
 */
NRF_STATIC_INLINE void nrf_usbhs_int_disable(NRF_USBHS_Type * p_reg, uint32_t mask);

/**
 * @brief A function for enabling the USBHS.
 *
 * @param[in] p_reg A pointer to the structure of registers of the peripheral.
 */
NRF_STATIC_INLINE void nrf_usbhs_enable(NRF_USBHS_Type * p_reg);

/**
 * @brief A function for disabling the USBHS.
 *
 * @param[in] p_reg A pointer to the structure of registers of the peripheral.
 */
NRF_STATIC_INLINE void nrf_usbhs_disable(NRF_USBHS_Type * p_reg);

#ifndef NRF_DECLARE_ONLY

NRF_STATIC_INLINE void nrf_usbhs_task_trigger(NRF_USBHS_Type * p_reg, nrf_usbhs_task_t task)
{
    *((volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)task)) = 0x1UL;
}

NRF_STATIC_INLINE uint32_t nrf_usbhs_task_address_get(NRF_USBHS_Type const * p_reg,
                                                      nrf_usbhs_task_t       task)
{
    return ((uint32_t)p_reg + (uint32_t)task);
}

NRF_STATIC_INLINE void nrf_usbhs_event_clear(NRF_USBHS_Type * p_reg, nrf_usbhs_event_t event)
{
    *((volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)event)) = 0x0UL;
    nrf_event_readback((uint8_t *)p_reg + (uint32_t)event);
}

NRF_STATIC_INLINE bool nrf_usbhs_event_check(NRF_USBHS_Type const * p_reg, nrf_usbhs_event_t event)
{
    return nrf_event_check(p_reg, event);
}

NRF_STATIC_INLINE bool nrf_usbhs_event_get_and_clear(NRF_USBHS_Type * p_reg, nrf_usbhs_event_t event)
{
    bool ret = nrf_usbhs_event_check(p_reg, event);
    if (ret)
    {
        nrf_usbhs_event_clear(p_reg, event);
    }
    return ret;
}

NRF_STATIC_INLINE uint32_t nrf_usbhs_event_address_get(NRF_USBHS_Type const * p_reg,
                                                       nrf_usbhs_event_t      event)
{
    return ((uint32_t)p_reg + (uint32_t)event);
}

NRF_STATIC_INLINE void nrf_usbhs_int_enable(NRF_USBHS_Type * p_reg, uint32_t mask)
{
    p_reg->INTENSET = mask;
}

NRF_STATIC_INLINE uint32_t nrf_usbhs_int_enable_check(NRF_USBHS_Type const * p_reg, uint32_t mask)
{
    return p_reg->INTENSET & mask;
}

NRF_STATIC_INLINE uint32_t nrf_usbhs_int_enable_get(NRF_USBHS_Type const * p_reg)
{
    return p_reg->INTENSET;
}

NRF_STATIC_INLINE void nrf_usbhs_int_disable(NRF_USBHS_Type * p_reg, uint32_t mask)
{
    p_reg->INTENCLR = mask;
}

NRF_STATIC_INLINE void nrf_usbhs_enable(NRF_USBHS_Type * p_reg)
{
    p_reg->ENABLE = USBHS_ENABLE_PHY_Enabled << USBHS_ENABLE_PHY_Pos;
}

NRF_STATIC_INLINE void nrf_usbhs_disable(NRF_USBHS_Type * p_reg)
{
    p_reg->ENABLE = USBHS_ENABLE_CORE_Disabled << USBHS_ENABLE_PHY_Pos;
}

#endif /* NRF_DECLARE_ONLY */

/** @} */

#ifdef __cplusplus
}
#endif

#endif /* NRF_USBHS_H__ */
