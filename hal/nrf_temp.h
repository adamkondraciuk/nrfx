/*$$$LICENCE_NORDIC_STANDARD<2012>$$$*/

#ifndef NRF_TEMP_H__
#define NRF_TEMP_H__

#include <nrfx.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
* @defgroup nrf_temp_hal TEMP HAL
* @{
* @ingroup nrf_temp
* @brief   Hardware access layer for managing the Temperature sensor (TEMP).
*/

/** @brief TEMP tasks. */
typedef enum
{
    NRF_TEMP_TASK_START = offsetof(NRF_TEMP_Type, TASKS_START), /**< Start temperature measurement. */
    NRF_TEMP_TASK_STOP  = offsetof(NRF_TEMP_Type, TASKS_STOP)   /**< Stop temperature measurement. */
} nrf_temp_task_t;

/** @brief TEMP events. */
typedef enum
{
    NRF_TEMP_EVENT_DATARDY = offsetof(NRF_TEMP_Type, EVENTS_DATARDY) /**< Temperature measurement complete, data ready. */
} nrf_temp_event_t;

/** @brief TEMP interrupts. */
typedef enum
{
    NRF_TEMP_INT_DATARDY_MASK = TEMP_INTENSET_DATARDY_Msk /**< Interrupt on DATARDY event.  */
} nrf_temp_int_mask_t;

/**
 * @brief Function for enabling specified interrupts.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of interrupts to be enabled.
 */
NRF_STATIC_INLINE void nrf_temp_int_enable(NRF_TEMP_Type * p_reg, uint32_t mask);

/**
 * @brief Function for disabling specified interrupts.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of interrupts to be disabled.
 */
NRF_STATIC_INLINE void nrf_temp_int_disable(NRF_TEMP_Type * p_reg, uint32_t mask);

/**
 * @brief Function for checking if the specified interrupts are enabled.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of interrupts to be checked.
 *
 * @return Mask of enabled interrupts.
 */
NRF_STATIC_INLINE uint32_t nrf_temp_int_enable_check(NRF_TEMP_Type const * p_reg, uint32_t mask);

/**
 * @brief Function for getting the address of the specified TEMP task register.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] task  Requested task.
 *
 * @return Address of the requested task register.
 */
NRF_STATIC_INLINE uint32_t nrf_temp_task_address_get(NRF_TEMP_Type const * p_reg,
                                                     nrf_temp_task_t       task);

/**
 * @brief Function for activating the specified TEMP task.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] task  Task to be activated.
 */
NRF_STATIC_INLINE void nrf_temp_task_trigger(NRF_TEMP_Type * p_reg, nrf_temp_task_t task);

/**
 * @brief Function for getting the address of the specified TEMP event register.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event Requested event.
 *
 * @return Address of the requested event register.
 */
NRF_STATIC_INLINE uint32_t nrf_temp_event_address_get(NRF_TEMP_Type const * p_reg,
                                                      nrf_temp_event_t      event);

/**
 * @brief Function for clearing the specified TEMP event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event Event to clear.
 */
NRF_STATIC_INLINE void nrf_temp_event_clear(NRF_TEMP_Type *  p_reg, nrf_temp_event_t event);

/**
 * @brief Function for getting the state of a specific event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event Event to be checked.
 *
 * @retval true  The event has been generated.
 * @retval false The event has not been generated.
 */
NRF_STATIC_INLINE bool nrf_temp_event_check(NRF_TEMP_Type const * p_reg, nrf_temp_event_t event);

/**
 * @brief Function for getting the result of temperature measurement.
 *
 * @note Returned value is in 2's complement format, 0.25 °C steps
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Temperature value register contents.
 */
NRF_STATIC_INLINE int32_t nrf_temp_result_get(NRF_TEMP_Type const * p_reg);

#ifndef NRF_DECLARE_ONLY

NRF_STATIC_INLINE void nrf_temp_int_enable(NRF_TEMP_Type * p_reg, uint32_t mask)
{
    p_reg->INTENSET = mask;
}

NRF_STATIC_INLINE void nrf_temp_int_disable(NRF_TEMP_Type * p_reg, uint32_t mask)
{
    p_reg->INTENCLR = mask;
}

NRF_STATIC_INLINE uint32_t nrf_temp_int_enable_check(NRF_TEMP_Type const * p_reg, uint32_t mask)
{
    return p_reg->INTENSET & mask;
}

NRF_STATIC_INLINE uint32_t nrf_temp_task_address_get(NRF_TEMP_Type const * p_reg,
                                                     nrf_temp_task_t       task)
{
    return (uint32_t)((uint8_t *)p_reg + (uint32_t)task);
}

NRF_STATIC_INLINE void nrf_temp_task_trigger(NRF_TEMP_Type * p_reg, nrf_temp_task_t task)
{
    *(volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)task) = 1;
}

NRF_STATIC_INLINE uint32_t nrf_temp_event_address_get(NRF_TEMP_Type const * p_reg,
                                                      nrf_temp_event_t      event)
{
    return (uint32_t)((uint8_t *)p_reg + (uint32_t)event);
}

NRF_STATIC_INLINE void nrf_temp_event_clear(NRF_TEMP_Type * p_reg, nrf_temp_event_t event)
{
    *((volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)event)) = 0;
#if __CORTEX_M == 0x04
    volatile uint32_t dummy = *((volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)event));
    (void)dummy;
#endif
}

NRF_STATIC_INLINE bool nrf_temp_event_check(NRF_TEMP_Type const * p_reg, nrf_temp_event_t event)
{
    return (bool)*((volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)event));
}

NRF_STATIC_INLINE int32_t nrf_temp_result_get(NRF_TEMP_Type const * p_reg)
{
    int32_t raw_measurement = p_reg->TEMP;

#if defined(NRF51)
    /* Apply workaround for the nRF51 series anomaly 28 - TEMP: Negative measured values are not represented correctly. */
    if ((raw_measurement & 0x00000200) != 0)
    {
        raw_measurement |= 0xFFFFFC00UL;
    }
#endif

    return raw_measurement;
}

#endif // NRF_DECLARE_ONLY

/** @} */

#ifdef __cplusplus
}
#endif

#endif // NRF_TEMP_H__
