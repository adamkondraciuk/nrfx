/*$$$LICENCE_NORDIC_STANDARD<2015>$$$*/

#ifndef NRFX_SWI_H__
#define NRFX_SWI_H__

#include <nrfx.h>

#if NRFX_CHECK(NRFX_EGU_ENABLED)
#include <hal/nrf_egu.h>
#endif

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrfx_swi SWI driver
 * @{
 * @ingroup  nrf_swi
 *
 * @brief    Driver for managing software interrupts (SWI).
 */

/** @brief SWI instance. */
typedef uint8_t nrfx_swi_t;

/**
 * @brief SWI user flags.
 *
 * User flags are set during the SWI trigger and passed to the callback function as an argument.
 */
typedef uint16_t nrfx_swi_flags_t;

/** @brief Unallocated instance value. */
#define NRFX_SWI_UNALLOCATED  ((nrfx_swi_t)0xFFuL)

/** @brief Default SWI priority. */
#define NRFX_SWI_DEFAULT_PRIORITY  APP_IRQ_PRIORITY_LOWEST

/**
 * @brief SWI handler function.
 *
 * @param swi   SWI instance.
 * @param flags User flags.
 */
typedef void (*nrfx_swi_handler_t)(nrfx_swi_t swi, nrfx_swi_flags_t flags);


/**@brief Function for allocating a first unused SWI instance and setting a handler.
 *
 * @param[out] p_swi          Points to a place where the allocated SWI instance
 *                            number is to be stored.
 * @param[in]  event_handler  Event handler function.
 *                            If NULL, no interrupt will be enabled.
 *                            It can be NULL only if the EGU driver is enabled.
 *                            For classic SWI, it must be a valid handler pointer.
 * @param[in]  irq_priority   Interrupt priority.
 *
 * @retval NRFX_SUCCESS       If the SWI was successfully allocated.
 * @retval NRFX_ERROR_NO_MEM  If there is no available SWI to be used.
 */
ret_code_t nrfx_swi_alloc(nrfx_swi_t *       p_swi,
                          nrfx_swi_handler_t event_handler,
                          uint32_t           irq_priority);

/**@brief Function for freeing a previously allocated SWI.
 *
 * @param[in,out] p_swi  SWI instance to free. The value is changed to
 *                       @ref NRFX_SWI_UNALLOCATED on success.
 */
void nrfx_swi_free(nrfx_swi_t * p_swi);

/**
 * @brief Function for freeing all allocated SWIs.
 */
void nrfx_swi_all_free(void);

/**@brief Function for triggering the SWI.
 *
 * @param[in] swi          SWI to trigger.
 * @param[in] flag_number  Number of user flag to trigger.
 */
void nrfx_swi_trigger(nrfx_swi_t swi,
                      uint8_t    flag_number);


#if NRFX_CHECK(NRFX_EGU_ENABLED) || defined(__SDK_DOXYGEN__)

/**@brief Function for returning the base address of the EGU peripheral
 *        associated with the specified SWI instance.
 *
 * @param[in] swi  SWI instance.
 *
 * @returns EGU base address or NULL if the specified SWI instance number
 *          is too high.
 */
__STATIC_INLINE NRF_EGU_Type * nrfx_swi_egu_instance_get(nrfx_swi_t swi)
{
#if (EGU_COUNT < SWI_COUNT)
    if (swi >= EGU_COUNT)
    {
        return NULL;
    }
#endif
    uint32_t offset = ((uint32_t)swi) * (NRF_EGU1_BASE - NRF_EGU0_BASE);
    return (NRF_EGU_Type *)(NRF_EGU0_BASE + offset);
}

/**@brief Function for returning the EGU trigger task address.
 *
 * @param[in] swi      SWI instance.
 * @param[in] channel  Number of the EGU channel.
 *
 * @returns EGU trigger task address.
 */
__STATIC_INLINE uint32_t nrfx_swi_task_trigger_address_get(nrfx_swi_t swi,
                                                           uint8_t    channel)
{
    NRF_EGU_Type * p_egu = nrfx_swi_egu_instance_get(swi);
#if (EGU_COUNT < SWI_COUNT)
    if (p_egu == NULL)
    {
        return 0;
    }
#endif

    return (uint32_t)nrf_egu_task_trigger_address_get(p_egu, channel);
}

/**@brief Function for returning the EGU triggered event address.
 *
 * @param[in] swi      SWI instance.
 * @param[in] channel  Number of the EGU channel.
 *
 * @returns EGU triggered event address.
 */
__STATIC_INLINE uint32_t nrfx_swi_event_triggered_address_get(nrfx_swi_t swi,
                                                              uint8_t    channel)
{
    NRF_EGU_Type * p_egu = nrfx_swi_egu_instance_get(swi);
#if (EGU_COUNT < SWI_COUNT)
    if (p_egu == NULL)
    {
        return 0;
    }
#endif

    return (uint32_t)nrf_egu_event_triggered_address_get(p_egu, channel);
}

#endif // NRFX_CHECK(NRFX_EGU_ENABLED) || defined(__SDK_DOXYGEN__)


void nrfx_swi_0_irq_handler(void);
void nrfx_swi_1_irq_handler(void);
void nrfx_swi_2_irq_handler(void);
void nrfx_swi_3_irq_handler(void);
void nrfx_swi_4_irq_handler(void);
void nrfx_swi_5_irq_handler(void);

/** @} */

#ifdef __cplusplus
}
#endif

#endif // NRFX_SWI_H__
