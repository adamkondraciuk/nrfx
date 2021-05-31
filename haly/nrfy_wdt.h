/*$$$LICENCE_NORDIC_STANDARD<2021>$$$*/

#ifndef NRFY_WDT_H__
#define NRFY_WDT_H__

#include <nrfx.h>
#include <hal/nrf_wdt.h>

#ifdef __cplusplus
extern "C" {
#endif

NRFY_STATIC_INLINE bool __nrfy_internal_wdt_event_handle(NRF_WDT_Type *  p_reg,
                                                         uint32_t        mask,
                                                         nrf_wdt_event_t event,
                                                         uint32_t *      p_evt_mask);

NRFY_STATIC_INLINE uint32_t __nrfy_internal_wdt_events_process(NRF_WDT_Type * p_reg, uint32_t mask);

NRFY_STATIC_INLINE void __nrfy_internal_wdt_event_enabled_clear(NRF_WDT_Type *  p_reg,
                                                                uint32_t        mask,
                                                                nrf_wdt_event_t event);

/**
 * @defgroup nrfy_wdt WDT HALY
 * @{
 * @ingroup nrf_wdt
 * @brief   Hardware access layer with cache and barrier support for managing the WDT peripheral.
 */

/** @brief WDT configuration structure. */ 
typedef struct
{
    nrf_wdt_behaviour_t behaviour;    ///< Watchdog behavior when CPU is in SLEEP or HALT mode.
    uint32_t            reload_value; ///< Watchdog counter initial value.
} nrfy_wdt_config_t;

/**
 * @brief Function for configuring the WDT.
 *
 * @param[in] p_reg    Pointer to the structure of registers of the peripheral.
 * @param[in] p_config Pointer to the peripheral configuration structure.
 */
NRFY_STATIC_INLINE void nrfy_wdt_periph_configure(NRF_WDT_Type *            p_reg,
                                                  nrfy_wdt_config_t const * p_config)
{
    nrf_wdt_behaviour_set(p_reg, p_config->behaviour);
    nrf_wdt_reload_value_set(p_reg, p_config->reload_value);
    nrf_barrier_w();
}

/**
 * @brief Function for initializing the specified WDT interrupts.
 *
 * @param[in] p_reg        Pointer to the structure of registers of the peripheral.
 * @param[in] mask         Mask of interrupts to be initialized.
 * @param[in] irq_priority Interrupt priority.
 * @param[in] enable       True if interrupts are to be enabled, false otherwise.
 */
NRFY_STATIC_INLINE void nrfy_wdt_int_init(NRF_WDT_Type * p_reg,
                                          uint32_t       mask,
                                          uint8_t        irq_priority,
                                          bool           enable)
{
    __nrfy_internal_wdt_event_enabled_clear(p_reg, mask, NRF_WDT_EVENT_TIMEOUT);
    nrf_barrier_w();

    NRFX_IRQ_PRIORITY_SET(nrfx_get_irq_number(p_reg), irq_priority);
    NRFX_IRQ_ENABLE(nrfx_get_irq_number(p_reg));

    if (enable)
    {
        nrf_wdt_int_enable(p_reg, mask);
    }
    nrf_barrier_w();
}

/**
 * @brief Function for uninitializing the WDT interrupts.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 */
NRFY_STATIC_INLINE void nrfy_wdt_int_uninit(NRF_WDT_Type * p_reg)
{
    NRFX_IRQ_DISABLE(nrfx_get_irq_number(p_reg));
    nrf_barrier_w();
}

/**
 * @brief Function for processing the specified WDT events.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of events to be processed, created by @ref NRFY_EVENT_TO_INT_BITMASK.
 *
 * @return Mask of events that were generated and processed.
 *         To be checked against the result of @ref NRFY_EVENT_TO_INT_BITMASK().
 */
NRFY_STATIC_INLINE uint32_t nrfy_wdt_events_process(NRF_WDT_Type * p_reg, uint32_t mask)
{
    nrf_barrier_r();
    uint32_t evt_mask = __nrfy_internal_wdt_events_process(p_reg, mask);
    nrf_barrier_w();
    return evt_mask;
}

/** @refhal{nrf_wdt_task_trigger} */
NRFY_STATIC_INLINE void nrfy_wdt_task_trigger(NRF_WDT_Type * p_reg, nrf_wdt_task_t task)
{
    nrf_wdt_task_trigger(p_reg, task);
    nrf_barrier_w();
}

/** @refhal{nrf_wdt_task_address_get} */
NRFY_STATIC_INLINE uint32_t nrfy_wdt_task_address_get(NRF_WDT_Type const * p_reg,
                                                      nrf_wdt_task_t       task)
{
    return nrf_wdt_task_address_get(p_reg, task);
}

/** @refhal{nrf_wdt_event_clear} */
NRFY_STATIC_INLINE void nrfy_wdt_event_clear(NRF_WDT_Type * p_reg, nrf_wdt_event_t event)
{
    nrf_wdt_event_clear(p_reg, event);
    nrf_barrier_w();
}

/** @refhal{nrf_wdt_event_check} */
NRFY_STATIC_INLINE bool nrfy_wdt_event_check(NRF_WDT_Type const * p_reg, nrf_wdt_event_t event)
{
    nrf_barrier_r();
    bool check = nrf_wdt_event_check(p_reg, event);
    nrf_barrier_r();
    return check;
}

/** @refhal{nrf_wdt_event_address_get} */
NRFY_STATIC_INLINE uint32_t nrfy_wdt_event_address_get(NRF_WDT_Type const * p_reg,
                                                       nrf_wdt_event_t      event)
{
    return nrf_wdt_event_address_get(p_reg, event);
}

/** @refhal{nrf_wdt_int_enable} */
NRFY_STATIC_INLINE void nrfy_wdt_int_enable(NRF_WDT_Type * p_reg, uint32_t mask)
{
    nrf_wdt_int_enable(p_reg, mask);
    nrf_barrier_w();
}

/** @refhal{nrf_wdt_int_enable_check} */
NRFY_STATIC_INLINE uint32_t nrfy_wdt_int_enable_check(NRF_WDT_Type const * p_reg, uint32_t mask)
{
    nrf_barrier_rw();
    uint32_t check = nrf_wdt_int_enable_check(p_reg, mask);
    nrf_barrier_r();
    return check;
}

/** @refhal{nrf_wdt_int_disable} */
NRFY_STATIC_INLINE void nrfy_wdt_int_disable(NRF_WDT_Type * p_reg, uint32_t mask)
{
    nrf_wdt_int_disable(p_reg, mask);
    nrf_barrier_w();
}

#if defined(DPPI_PRESENT) || defined(__NRFX_DOXYGEN__)
/** @refhal{nrf_wdt_subscribe_set} */
NRFY_STATIC_INLINE void nrfy_wdt_subscribe_set(NRF_WDT_Type * p_reg,
                                               nrf_wdt_task_t task,
                                               uint8_t        channel)
{
    nrf_wdt_subscribe_set(p_reg, task, channel);
    nrf_barrier_w();
}

/** @refhal{nrf_wdt_subscribe_clear} */
NRFY_STATIC_INLINE void nrfy_wdt_subscribe_clear(NRF_WDT_Type * p_reg, nrf_wdt_task_t task)
{
    nrf_wdt_subscribe_clear(p_reg, task);
    nrf_barrier_w();
}

/** @refhal{nrf_wdt_publish_set} */
NRFY_STATIC_INLINE void nrfy_wdt_publish_set(NRF_WDT_Type *  p_reg,
                                             nrf_wdt_event_t event,
                                             uint8_t         channel)
{
    nrf_wdt_publish_set(p_reg, event, channel);
    nrf_barrier_w();
}

/** @refhal{nrf_wdt_publish_clear} */
NRFY_STATIC_INLINE void nrfy_wdt_publish_clear(NRF_WDT_Type * p_reg, nrf_wdt_event_t event)
{
    nrf_wdt_publish_clear(p_reg, event);
    nrf_barrier_w();
}
#endif // defined(DPPI_PRESENT) || defined(__NRFX_DOXYGEN__)

/** @refhal{nrf_wdt_behaviour_set} */
NRFY_STATIC_INLINE void nrfy_wdt_behaviour_set(NRF_WDT_Type * p_reg, nrf_wdt_behaviour_t behaviour)
{
    nrf_wdt_behaviour_set(p_reg, behaviour);
    nrf_barrier_w();
}

/** @refhal{nrf_wdt_started_check} */
NRFY_STATIC_INLINE bool nrfy_wdt_started_check(NRF_WDT_Type const * p_reg)
{
    nrf_barrier_r();
    bool check = nrf_wdt_started_check(p_reg);
    nrf_barrier_r();
    return check;
}

/** @refhal{nrf_wdt_request_status_check} */
NRFY_STATIC_INLINE bool nrfy_wdt_request_status_check(NRF_WDT_Type const *  p_reg,
                                                      nrf_wdt_rr_register_t rr_register)
{
    nrf_barrier_r();
    bool check = nrf_wdt_request_status_check(p_reg, rr_register);
    nrf_barrier_r();
    return check;
}

/** @refhal{nrf_wdt_request_status_get} */
NRFY_STATIC_INLINE uint32_t nrfy_wdt_request_status_get(NRF_WDT_Type const * p_reg)
{
    nrf_barrier_r();
    uint32_t ret = nrf_wdt_request_status_get(p_reg);
    nrf_barrier_r();
    return ret;
}

/** @refhal{nrf_wdt_reload_value_set} */
NRFY_STATIC_INLINE void nrfy_wdt_reload_value_set(NRF_WDT_Type * p_reg, uint32_t reload_value)
{
    nrf_wdt_reload_value_set(p_reg, reload_value);
    nrf_barrier_w();
}

/** @refhal{nrf_wdt_reload_value_get} */
NRFY_STATIC_INLINE uint32_t nrfy_wdt_reload_value_get(NRF_WDT_Type const * p_reg)
{
    nrf_barrier_rw();
    uint32_t ret = nrf_wdt_reload_value_get(p_reg);
    nrf_barrier_r();
    return ret;
}

/** @refhal{nrf_wdt_reload_request_enable} */
NRFY_STATIC_INLINE void nrfy_wdt_reload_request_enable(NRF_WDT_Type *       p_reg,
                                                       nrf_wdt_rr_register_t rr_register)
{
    nrf_wdt_reload_request_enable(p_reg, rr_register);
    nrf_barrier_w();
}

/** @refhal{nrf_wdt_reload_request_disable} */
NRFY_STATIC_INLINE void nrfy_wdt_reload_request_disable(NRF_WDT_Type *       p_reg,
                                                        nrf_wdt_rr_register_t rr_register)
{
    nrf_wdt_reload_request_disable(p_reg, rr_register);
    nrf_barrier_w();
}

/** @refhal{nrf_wdt_reload_request_enable_check} */
NRFY_STATIC_INLINE bool nrfy_wdt_reload_request_enable_check(NRF_WDT_Type const *  p_reg,
                                                             nrf_wdt_rr_register_t rr_register)
{
    nrf_barrier_rw();
    bool check = nrf_wdt_reload_request_enable_check(p_reg, rr_register);
    nrf_barrier_r();
    return check;
}

/** @refhal{nrf_wdt_reload_request_set} */
NRFY_STATIC_INLINE void nrfy_wdt_reload_request_set(NRF_WDT_Type *        p_reg,
                                                    nrf_wdt_rr_register_t rr_register)
{
    nrf_wdt_reload_request_set(p_reg, rr_register);
    nrf_barrier_w();
}

/** @} */

NRFY_STATIC_INLINE bool __nrfy_internal_wdt_event_handle(NRF_WDT_Type *  p_reg,
                                                         uint32_t        mask,
                                                         nrf_wdt_event_t event,
                                                         uint32_t *      p_evt_mask)
{
    if ((mask & NRFY_EVENT_TO_INT_BITMASK(event)) && nrf_wdt_event_check(p_reg, event))
    {
        nrf_barrier_r();
        nrf_wdt_event_clear(p_reg, event);
        if (p_evt_mask)
        {
            *p_evt_mask |= NRFY_EVENT_TO_INT_BITMASK(event);
        }
        return true;
    }
    return false;
}

NRFY_STATIC_INLINE uint32_t __nrfy_internal_wdt_events_process(NRF_WDT_Type * p_reg, uint32_t mask)
{
    uint32_t evt_mask = 0;

    (void)__nrfy_internal_wdt_event_handle(p_reg, mask, NRF_WDT_EVENT_TIMEOUT, &evt_mask);

    return evt_mask;
}

NRFY_STATIC_INLINE void __nrfy_internal_wdt_event_enabled_clear(NRF_WDT_Type *  p_reg,
                                                                uint32_t        mask,
                                                                nrf_wdt_event_t event)
{
    if (mask & NRFY_EVENT_TO_INT_BITMASK(event))
    {
        nrf_wdt_event_clear(p_reg, event);
    }
}

#ifdef __cplusplus
}
#endif

#endif // NRFY_WDT_H__
