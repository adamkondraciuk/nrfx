/*$$$LICENCE_NORDIC_STANDARD<2021>$$$*/

#ifndef NRF_RESETHUB_H__
#define NRF_RESETHUB_H__

#include <nrfx.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrf_resethub_hal RESETHUB HAL
 * @{
 * @ingroup nrf_resethub
 * @brief   Hardware access layer (HAL) for managing the reset hub (RESETHUB) peripheral.
 */

/** @brief RESETHUB domains. */
typedef enum
{
    NRF_RESETHUB_DOMAIN_DEBUG       = 0, /**< Debug domain. */
    NRF_RESETHUB_DOMAIN_GLOBAL      = 1, /**< Global domain. */
    NRF_RESETHUB_DOMAIN_APPLICATION = 2, /**< Application domain. */
    NRF_RESETHUB_DOMAIN_SECURE      = 3, /**< Secure domain. */
    NRF_RESETHUB_DOMAIN_RADIO       = 4, /**< Radio domain. */
} nrf_resethub_domain_t;

/** @brief Tasks. */
typedef enum
{
    NRF_RESETHUB_TASK_RESET_DOMAIN_0  = offsetof(NRF_RESETHUB_Type, TASKS_RESETDOMAIN[0]),  /**< Reset domain 0. */
    NRF_RESETHUB_TASK_RESET_DOMAIN_1  = offsetof(NRF_RESETHUB_Type, TASKS_RESETDOMAIN[1]),  /**< Reset domain 1. */
    NRF_RESETHUB_TASK_RESET_DOMAIN_2  = offsetof(NRF_RESETHUB_Type, TASKS_RESETDOMAIN[2]),  /**< Reset domain 2. */
    NRF_RESETHUB_TASK_RESET_DOMAIN_3  = offsetof(NRF_RESETHUB_Type, TASKS_RESETDOMAIN[3]),  /**< Reset domain 3. */
    NRF_RESETHUB_TASK_RESET_DOMAIN_4  = offsetof(NRF_RESETHUB_Type, TASKS_RESETDOMAIN[4]),  /**< Reset domain 4. */
    NRF_RESETHUB_TASK_RESET_DOMAIN_5  = offsetof(NRF_RESETHUB_Type, TASKS_RESETDOMAIN[5]),  /**< Reset domain 5. */
    NRF_RESETHUB_TASK_RESET_DOMAIN_6  = offsetof(NRF_RESETHUB_Type, TASKS_RESETDOMAIN[6]),  /**< Reset domain 6. */
    NRF_RESETHUB_TASK_RESET_DOMAIN_7  = offsetof(NRF_RESETHUB_Type, TASKS_RESETDOMAIN[7]),  /**< Reset domain 7. */
    NRF_RESETHUB_TASK_RESET_DOMAIN_8  = offsetof(NRF_RESETHUB_Type, TASKS_RESETDOMAIN[8]),  /**< Reset domain 8. */
    NRF_RESETHUB_TASK_RESET_DOMAIN_9  = offsetof(NRF_RESETHUB_Type, TASKS_RESETDOMAIN[9]),  /**< Reset domain 9. */
    NRF_RESETHUB_TASK_RESET_DOMAIN_10 = offsetof(NRF_RESETHUB_Type, TASKS_RESETDOMAIN[10]), /**< Reset domain 10. */
    NRF_RESETHUB_TASK_RESET_DOMAIN_11 = offsetof(NRF_RESETHUB_Type, TASKS_RESETDOMAIN[11]), /**< Reset domain 11. */
    NRF_RESETHUB_TASK_RESET_DOMAIN_12 = offsetof(NRF_RESETHUB_Type, TASKS_RESETDOMAIN[12]), /**< Reset domain 12. */
    NRF_RESETHUB_TASK_RESET_DOMAIN_13 = offsetof(NRF_RESETHUB_Type, TASKS_RESETDOMAIN[13]), /**< Reset domain 13. */
    NRF_RESETHUB_TASK_RESET_DOMAIN_14 = offsetof(NRF_RESETHUB_Type, TASKS_RESETDOMAIN[14]), /**< Reset domain 14. */
    NRF_RESETHUB_TASK_RESET_DOMAIN_15 = offsetof(NRF_RESETHUB_Type, TASKS_RESETDOMAIN[15]), /**< Reset domain 15. */

    NRF_RESETHUB_TASK_RESET_DOMAIN_DEBUG =
        offsetof(NRF_RESETHUB_Type, TASKS_RESETDOMAIN[NRF_RESETHUB_DOMAIN_DEBUG]),          /**< Reset debug domain. */
    NRF_RESETHUB_TASK_RESET_DOMAIN_GLOBAL =
        offsetof(NRF_RESETHUB_Type, TASKS_RESETDOMAIN[NRF_RESETHUB_DOMAIN_GLOBAL]),         /**< Reset global domain. */
    NRF_RESETHUB_TASK_RESET_DOMAIN_APPLICATION =
        offsetof(NRF_RESETHUB_Type, TASKS_RESETDOMAIN[NRF_RESETHUB_DOMAIN_APPLICATION]),    /**< Reset application domain. */
    NRF_RESETHUB_TASK_RESET_DOMAIN_SECURE =
        offsetof(NRF_RESETHUB_Type, TASKS_RESETDOMAIN[NRF_RESETHUB_DOMAIN_SECURE]),         /**< Reset secure domain. */
    NRF_RESETHUB_TASK_RESET_DOMAIN_RADIO =
        offsetof(NRF_RESETHUB_Type, TASKS_RESETDOMAIN[NRF_RESETHUB_DOMAIN_RADIO]),          /**< Reset radio domain. */
} nrf_resethub_task_t;

/** @brief Events. */
typedef enum
{
    NRF_RESETHUB_EVENT_DOMAIN_RESET_0  = offsetof(NRF_RESETHUB_Type, EVENTS_DOMAINRESET[0]),  /**< Domain 0 was reset. */
    NRF_RESETHUB_EVENT_DOMAIN_RESET_1  = offsetof(NRF_RESETHUB_Type, EVENTS_DOMAINRESET[1]),  /**< Domain 1 was reset. */
    NRF_RESETHUB_EVENT_DOMAIN_RESET_2  = offsetof(NRF_RESETHUB_Type, EVENTS_DOMAINRESET[2]),  /**< Domain 2 was reset. */
    NRF_RESETHUB_EVENT_DOMAIN_RESET_3  = offsetof(NRF_RESETHUB_Type, EVENTS_DOMAINRESET[3]),  /**< Domain 3 was reset. */
    NRF_RESETHUB_EVENT_DOMAIN_RESET_4  = offsetof(NRF_RESETHUB_Type, EVENTS_DOMAINRESET[4]),  /**< Domain 4 was reset. */
    NRF_RESETHUB_EVENT_DOMAIN_RESET_5  = offsetof(NRF_RESETHUB_Type, EVENTS_DOMAINRESET[5]),  /**< Domain 5 was reset. */
    NRF_RESETHUB_EVENT_DOMAIN_RESET_6  = offsetof(NRF_RESETHUB_Type, EVENTS_DOMAINRESET[6]),  /**< Domain 6 was reset. */
    NRF_RESETHUB_EVENT_DOMAIN_RESET_7  = offsetof(NRF_RESETHUB_Type, EVENTS_DOMAINRESET[7]),  /**< Domain 7 was reset. */
    NRF_RESETHUB_EVENT_DOMAIN_RESET_8  = offsetof(NRF_RESETHUB_Type, EVENTS_DOMAINRESET[8]),  /**< Domain 8 was reset. */
    NRF_RESETHUB_EVENT_DOMAIN_RESET_9  = offsetof(NRF_RESETHUB_Type, EVENTS_DOMAINRESET[9]),  /**< Domain 9 was reset. */
    NRF_RESETHUB_EVENT_DOMAIN_RESET_10 = offsetof(NRF_RESETHUB_Type, EVENTS_DOMAINRESET[10]), /**< Domain 10 was reset. */
    NRF_RESETHUB_EVENT_DOMAIN_RESET_11 = offsetof(NRF_RESETHUB_Type, EVENTS_DOMAINRESET[11]), /**< Domain 11 was reset. */
    NRF_RESETHUB_EVENT_DOMAIN_RESET_12 = offsetof(NRF_RESETHUB_Type, EVENTS_DOMAINRESET[12]), /**< Domain 12 was reset. */
    NRF_RESETHUB_EVENT_DOMAIN_RESET_13 = offsetof(NRF_RESETHUB_Type, EVENTS_DOMAINRESET[13]), /**< Domain 13 was reset. */
    NRF_RESETHUB_EVENT_DOMAIN_RESET_14 = offsetof(NRF_RESETHUB_Type, EVENTS_DOMAINRESET[14]), /**< Domain 14 was reset. */
    NRF_RESETHUB_EVENT_DOMAIN_RESET_15 = offsetof(NRF_RESETHUB_Type, EVENTS_DOMAINRESET[15]), /**< Domain 15 was reset. */

    NRF_RESETHUB_EVENT_DOMAIN_RESET_DEBUG =
        offsetof(NRF_RESETHUB_Type, EVENTS_DOMAINRESET[NRF_RESETHUB_DOMAIN_DEBUG]),           /**< Debug domain was reset. */
    NRF_RESETHUB_EVENT_DOMAIN_RESET_GLOBAL =
        offsetof(NRF_RESETHUB_Type, EVENTS_DOMAINRESET[NRF_RESETHUB_DOMAIN_GLOBAL]),          /**< Global domain was reset. */
    NRF_RESETHUB_EVENT_DOMAIN_RESET_APPLICATION =
        offsetof(NRF_RESETHUB_Type, EVENTS_DOMAINRESET[NRF_RESETHUB_DOMAIN_APPLICATION]),     /**< Application domain was reset. */
    NRF_RESETHUB_EVENT_DOMAIN_RESET_SECURE =
        offsetof(NRF_RESETHUB_Type, EVENTS_DOMAINRESET[NRF_RESETHUB_DOMAIN_SECURE]),          /**< Secure domain was reset. */
    NRF_RESETHUB_EVENT_DOMAIN_RESET_RADIO =
        offsetof(NRF_RESETHUB_Type, EVENTS_DOMAINRESET[NRF_RESETHUB_DOMAIN_RADIO]),           /**< Radio domain was reset. */
} nrf_resethub_event_t;

/** @brief Domain reset reason bit masks. */
typedef enum
{
    NRF_RESETHUB_DOMAIN_RESETREAS_DOG_MASK    = RESETHUB_RESETREAS_DOMAIN_DOG_Msk,         /**< Bit mask of DOG field. */
    NRF_RESETHUB_DOMAIN_RESETREAS_DOGNS_MASK  = RESETHUB_RESETREAS_DOMAIN_DOGNS_Msk,       /**< Bit mask of DOGNS field. */
    NRF_RESETHUB_DOMAIN_RESETREAS_SREQ_MASK   = RESETHUB_RESETREAS_DOMAIN_SREQ_Msk,        /**< Bit mask of SREQ field. */
    NRF_RESETHUB_DOMAIN_RESETREAS_LOCKUP_MASK = RESETHUB_RESETREAS_DOMAIN_LOCKUP_Msk,      /**< Bit mask of LOCKUP field. */
    NRF_RESETHUB_DOMAIN_RESETREAS_CROSS_MASK  = RESETHUB_RESETREAS_DOMAIN_CROSSDOMAIN_Msk, /**< Bit mask of CROSSDOMAIN field. */
} nrf_resethub_domain_resetreas_t;

/**
 * @brief Function for activating the specified RESETHUB task.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] task  Task to be activated.
 */
NRF_STATIC_INLINE void nrf_resethub_task_trigger(NRF_RESETHUB_Type * p_reg,
                                                 nrf_resethub_task_t task);

/**
 * @brief Function for clearing the specified event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event Event to clear.
 */
NRF_STATIC_INLINE void nrf_resethub_event_clear(NRF_RESETHUB_Type *  p_reg,
                                                nrf_resethub_event_t event);

/**
 * @brief Function for retrieving the state of the specified event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event Event to be checked.
 *
 * @retval true  The event has been generated.
 * @retval false The event has not been generated.
 */
NRF_STATIC_INLINE bool nrf_resethub_event_check(NRF_RESETHUB_Type const * p_reg,
                                                nrf_resethub_event_t      event);

/**
 * @brief Function for getting the reset reason bitmask associated with specified domain.
 *
 * @note Unless cleared, the RESETREAS register is cumulative.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] domain Domain to have reset reason returned.
 *
 * @return The mask of reset reasons constructed with @ref nrf_resethub_domain_resetreas_t.
 */
NRF_STATIC_INLINE uint32_t nrf_resethub_domain_resetreas_get(NRF_RESETHUB_Type const * p_reg,
                                                             nrf_resethub_domain_t     domain);

/**
 * @brief Function for clearing the selected reset reason field associated with specified domain.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] domain Domain to have reset reason cleared.
 * @param[in] mask   The mask constructed from @ref nrf_resethub_domain_resetreas_t enumerator values.
 */
NRF_STATIC_INLINE void nrf_resethub_domain_resetreas_clear(NRF_RESETHUB_Type *   p_reg,
                                                           nrf_resethub_domain_t domain,
                                                           uint32_t              mask);


#ifndef NRF_DECLARE_ONLY

NRF_STATIC_INLINE void nrf_resethub_task_trigger(NRF_RESETHUB_Type * p_reg,
                                                 nrf_resethub_task_t task)
{
    *((volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)task)) = 0x1UL;
}

NRF_STATIC_INLINE void nrf_resethub_event_clear(NRF_RESETHUB_Type *  p_reg,
                                                nrf_resethub_event_t event)
{
    *((volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)event)) = 0x0UL;
    nrf_event_readback((uint8_t *)p_reg + (uint32_t)event);
}

NRF_STATIC_INLINE bool nrf_resethub_event_check(NRF_RESETHUB_Type const * p_reg,
                                                nrf_resethub_event_t      event)
{
    return (bool)*((volatile uint32_t *)((uint8_t *)p_reg + event));
}

NRF_STATIC_INLINE uint32_t nrf_resethub_domain_resetreas_get(NRF_RESETHUB_Type const * p_reg,
                                                             nrf_resethub_domain_t     domain)
{
    return p_reg->RESETREAS.DOMAIN[domain];
}

NRF_STATIC_INLINE void nrf_resethub_domain_resetreas_clear(NRF_RESETHUB_Type *   p_reg,
                                                           nrf_resethub_domain_t domain,
                                                           uint32_t              mask)
{
    p_reg->RESETREAS.DOMAIN[domain] = mask;
}

#endif

/** @} */

#ifdef __cplusplus
}
#endif

#endif // NRF_RESETHUB_H__
