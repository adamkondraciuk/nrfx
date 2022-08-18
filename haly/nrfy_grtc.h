/*$$$LICENCE_NORDIC_STANDARD<2021>$$$*/

#ifndef NRFY_GRTC_H__
#define NRFY_GRTC_H__

#include <nrfx.h>
#include <hal/nrf_grtc.h>

#ifdef __cplusplus
extern "C" {
#endif

/* TODO: Remove and replace definition when NRFX-2209 is merged. */
#define nrfy_grtc_sys_counter_capture_task_get nrfy_grtc_capture_task_get

NRFY_STATIC_INLINE void __nrfy_internal_grtc_event_enabled_clear(NRF_GRTC_Type *  p_reg,
                                                                 uint32_t         mask,
                                                                 nrf_grtc_event_t event);

NRFY_STATIC_INLINE bool __nrfy_internal_grtc_event_handle(NRF_GRTC_Type *  p_reg,
                                                          uint32_t         mask,
                                                          nrf_grtc_event_t event,
                                                          uint32_t *       p_evt_mask);

NRFY_STATIC_INLINE uint32_t __nrfy_internal_grtc_events_process(NRF_GRTC_Type * p_reg,
                                                                uint32_t        mask);

#if defined(NRF_SYSCTRL) || defined(NRF_SECURE)
NRFY_STATIC_INLINE uint64_t __nrfy_internal_grtc_rt_counter_read(NRF_GRTC_Type const * p_reg);
#endif
/**
 * @defgroup nrfy_grtc GRTC HALY
 * @{
 * @ingroup nrf_grtc
 * @brief   Hardware access layer with cache and barrier support for managing the GRTC peripheral.
 */

/**
 * @brief Function for initializing the specified GRTC interrupts.
 *
 * @param[in] p_reg        Pointer to the structure of registers of the peripheral.
 * @param[in] mask         Mask of interrupts to be initialized.
 * @param[in] irq_priority Interrupt priority.
 * @param[in] enable       True if the interrupts are to be enabled, false otherwise.
 */
NRFY_STATIC_INLINE void nrfy_grtc_int_init(NRF_GRTC_Type * p_reg,
                                           uint32_t        mask,
                                           uint8_t         irq_priority,
                                           bool            enable)
{
    for (uint8_t cc_channel = 0; cc_channel < NRF_GRTC_SYSCOUNTER_CC_COUNT; cc_channel ++)
    {
        nrf_grtc_event_t event = nrf_grtc_sys_counter_compare_event_get(cc_channel);
        __nrfy_internal_grtc_event_enabled_clear(p_reg, mask, event);
    }
#if defined(NRF_SYSCTRL) || defined(NRF_SECURE)
    __nrfy_internal_grtc_event_enabled_clear(p_reg, mask, NRF_GRTC_EVENT_RTCOMPARE);
    __nrfy_internal_grtc_event_enabled_clear(p_reg, mask, NRF_GRTC_EVENT_RTCOMPARESYNC);
    __nrfy_internal_grtc_event_enabled_clear(p_reg, mask, NRF_GRTC_EVENT_SYSCOUNTERVALID);
#endif
    nrf_barrier_w();

#if defined(BOARD_PALLADIUM)
    // TODO: Remove later
    NRFY_IRQ_PENDING_CLEAR(GRTC_IRQn);
#endif

    NRFX_IRQ_PRIORITY_SET(GRTC_IRQn, irq_priority);
    NRFX_IRQ_ENABLE(GRTC_IRQn);
    if (enable)
    {
        nrf_grtc_int_enable(p_reg, mask);
    }
    nrf_barrier_w();
}

/**
 * @brief Function for uninitializing the GRTC interrupts.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 */
 NRFY_STATIC_INLINE void nrfy_grtc_int_uninit(NRF_GRTC_Type * p_reg)
 {
    (void)p_reg;
    NRFX_IRQ_DISABLE(GRTC_IRQn);
    nrf_barrier_w();
 }

/**
 * @brief Function for processing the specified GRTC events.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of events to be processed, created by @ref NRFY_EVENT_TO_INT_BITMASK().
 *
 * @return Mask of events that were generated and processed.
 *         To be checked against the result of @ref NRFY_EVENT_TO_INT_BITMASK().
 */
NRFY_STATIC_INLINE uint32_t nrfy_grtc_events_process(NRF_GRTC_Type * p_reg,
                                                     uint32_t        mask)
{
    uint32_t evt_mask = __nrfy_internal_grtc_events_process(p_reg, mask);
    nrf_barrier_w();
    return evt_mask;
}

#if defined(NRF_SYSCTRL) || defined(NRF_SECURE) || defined(__NRFX_DOXYGEN__)
/**
 * @brief Function for starting the RTCOUNTER.
 *
 * @note This function clears all shorts, interrupts and RTCOUNTER value then enables the 32 kHz
 *       counter.
 *
 * @param[in] p_reg     Pointer to the structure of registers of the peripheral.
 * @param[in] busy_wait True if wait for synchronization operation is to be performed,
 *                      false otherwise.
 */
NRFY_STATIC_INLINE void nrfy_grtc_rt_counter_start(NRF_GRTC_Type * p_reg, bool busy_wait)
{
    nrf_grtc_sys_counter_set(p_reg, false);
    nrf_barrier_w();
    nrf_grtc_shorts_disable(p_reg, NRF_GRTC_SHORT_RTCOMPARE_CLEAR_MASK);
    nrf_grtc_int_disable(p_reg, NRF_GRTC_INTEN_MASK);
    for (uint8_t cc_channel = 0; cc_channel < NRF_GRTC_SYSCOUNTER_CC_COUNT; cc_channel ++)
    {
        nrf_grtc_publish_clear(p_reg, nrf_grtc_sys_counter_compare_event_get(cc_channel));
        nrf_grtc_subscribe_clear(p_reg, nrf_grtc_sys_counter_capture_task_get(cc_channel));
    }
    nrf_grtc_publish_clear(p_reg, NRF_GRTC_EVENT_RTCOMPARE);
    nrf_grtc_task_trigger(p_reg, NRF_GRTC_TASK_CLEAR);
    nrf_barrier_w();
    nrf_grtc_task_trigger(p_reg, NRF_GRTC_TASK_START);
    nrf_barrier_w();
    if (busy_wait)
    {
        uint64_t t = __nrfy_internal_grtc_rt_counter_read(p_reg);
        if (t != 0)
        {
            while (__nrfy_internal_grtc_rt_counter_read(p_reg) >= t)
            {}
        }
        else
        {
            while (__nrfy_internal_grtc_rt_counter_read(p_reg) == t)
            {}
        }
    }
}

/**
 * @brief Function for starting the SYSCOUNTER.
 *
 * @note This function enables the 1 MHz counter and set it as always active.
 *
 * @param[in] p_reg     Pointer to the structure of registers of the peripheral.
 * @param[in] busy_wait True if wait for synchronization operation is to be performed,
 *                      false otherwise.
 */
NRFY_STATIC_INLINE void nrfy_grtc_sys_counter_start(NRF_GRTC_Type * p_reg, bool busy_wait)
{
    nrf_grtc_sys_counter_auto_mode_set(p_reg, true);
    nrf_grtc_sys_counter_set(p_reg, true);
    nrf_barrier_w();
    if (busy_wait)
    {
        uint32_t evt_mask = NRFY_EVENT_TO_INT_BITMASK(NRF_GRTC_EVENT_SYSCOUNTERVALID);
        while (!__nrfy_internal_grtc_events_process(p_reg, evt_mask))
        {}
    }
}
#endif// defined(NRF_SYSCTRL) || defined(NRF_SECURE) || defined(__NRFX_DOXYGEN__)

/**
 * @brief Function for returning the SYSCOUNTER 1 MHz value.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return SYSCOUNTER value.
 */
NRFY_STATIC_INLINE uint64_t nrfy_grtc_sys_counter_get(NRF_GRTC_Type const * p_reg)
{
    uint32_t counter_l, counter_h;
    do
    {
        counter_l = nrf_grtc_sys_counter_low_get(p_reg);
        counter_h = nrf_grtc_sys_counter_high_get(p_reg);
        nrf_barrier_r();
    } while(counter_h & GRTC_SYSCOUNTERH_OVERFLOW_Msk);
    return (uint64_t)counter_l | ((uint64_t)counter_h << 32);
}

#if defined(NRF_SYSCTRL) || defined(NRF_SECURE) || defined(__NRFX_DOXYGEN__)
/**
 * @brief Function for returning the RTCOUNTER 32 kHz value.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return RTCOUNTER value.
 */
NRFY_STATIC_INLINE uint64_t nrfy_grtc_rt_counter_get(NRF_GRTC_Type const * p_reg)
{
    return __nrfy_internal_grtc_rt_counter_read(p_reg);
}
#endif // defined(NRF_SYSCTRL) || defined(NRF_SECURE) || defined(__NRFX_DOXYGEN__)

/**
 * @brief Function for enabling the GRTC compare event and optionally associated interrupt.
 *
 * @note Event is implicitly cleared before enabling the associated interrupt.
 *
 * @param[in] p_reg   Pointer to the structure of registers of the peripheral.
 * @param[in] channel Channel representing the GRTC compare event.
 * @param[in] enable  True if associated interrupt is to be enabled, false otherwise.
 */
NRFY_STATIC_INLINE
void nrfy_grtc_sys_counter_compare_event_int_clear_enable(NRF_GRTC_Type * p_reg,
                                                          uint8_t         channel,
                                                          bool            enable)
{
    nrf_grtc_event_t event = nrf_grtc_sys_counter_compare_event_get(channel);
    if (enable)
    {
        nrf_grtc_event_clear(p_reg, event);
        nrf_barrier_w();
        nrf_grtc_int_enable(p_reg, NRFY_EVENT_TO_INT_BITMASK(event));
    }
    nrf_grtc_sys_counter_compare_event_enable(p_reg, channel);
    nrf_barrier_w();
}

/**
 * @brief Function for retrieving the state of the compare GRTC event.
 *
 * @param[in] p_reg      Pointer to the structure of registers of the peripheral.
 * @param[in] cc_channel Compare channel of the corresponding event to be checked.
 *
 * @retval true  The event has been generated.
 * @retval false The event has not been generated.
 */
NRFY_STATIC_INLINE bool nrfy_grtc_sys_counter_compare_event_check(NRF_GRTC_Type const * p_reg,
                                                                  uint8_t               cc_channel)
{
    nrf_barrier_r();
    bool check = nrf_grtc_event_check(p_reg, nrf_grtc_sys_counter_compare_event_get(cc_channel));
    nrf_barrier_r();
    return check;
}

/**
 * @brief Function for clearing a compare GRTC event.
 *
 * @param[in] p_reg      Pointer to the structure of registers of the peripheral.
 * @param[in] cc_channel Compare channel of the corresponding event to be cleared.
 */
NRFY_STATIC_INLINE void nrfy_grtc_sys_counter_compare_event_clear(NRF_GRTC_Type * p_reg,
                                                                  uint8_t         cc_channel)
{
    nrf_grtc_event_clear(p_reg, nrf_grtc_sys_counter_compare_event_get(cc_channel));
    nrf_barrier_w();
}

/**
 * @brief Function for setting the subscribe configuration for a given
 *        GRTC capture channel.
 *
 * @param[in] p_reg      Pointer to the structure of registers of the peripheral.
 * @param[in] cc_channel Compare channel for which to set the configuration.
 * @param[in] channel    Channel through which to subscribe events.
 */
NRFY_STATIC_INLINE void nrfy_grtc_sys_counter_capture_subscribe_set(NRF_GRTC_Type * p_reg,
                                                                    uint8_t         cc_channel,
                                                                    uint8_t         channel)
{
    nrf_grtc_subscribe_set(p_reg, nrf_grtc_sys_counter_capture_task_get(cc_channel), channel);
    nrf_barrier_w();
}

/**
 * @brief Function for clearing the subscribe configuration for a given
 *        GRTC capture channel.
 *
 * @param[in] p_reg      Pointer to the structure of registers of the peripheral.
 * @param[in] cc_channel Compare channel for which to clear the configuration.
 */
NRFY_STATIC_INLINE void nrfy_grtc_sys_counter_capture_subscribe_clear(NRF_GRTC_Type * p_reg,
                                                                      uint8_t         cc_channel)
{
    nrf_grtc_subscribe_clear(p_reg, nrf_grtc_sys_counter_capture_task_get(cc_channel));
    nrf_barrier_w();
}

/**
 * @brief Function for setting the publish configuration for a given
 *        GRTC compare channel.
 *
 * @param[in] p_reg      Pointer to the structure of registers of the peripheral.
 * @param[in] cc_channel Compare channel for which to set the configuration.
 * @param[in] channel    Channel through which to publish the event.
 */
NRFY_STATIC_INLINE void nrfy_grtc_sys_counter_compare_publish_set(NRF_GRTC_Type * p_reg,
                                                                  uint8_t         cc_channel,
                                                                  uint8_t         channel)
{
    nrf_grtc_publish_set(p_reg, nrf_grtc_sys_counter_compare_event_get(cc_channel), channel);
    nrf_barrier_w();
}

/**
 * @brief Function for clearing the publish configuration for a given
 *        GRTC compare channel.
 *
 * @param[in] p_reg      Pointer to the structure of registers of the peripheral.
 * @param[in] cc_channel Compare channel for which to clear the configuration.
 */
NRFY_STATIC_INLINE void nrfy_grtc_sys_counter_compare_publish_clear(NRF_GRTC_Type * p_reg,
                                                                    uint8_t         cc_channel)
{
    nrf_grtc_publish_clear(p_reg, nrf_grtc_sys_counter_compare_event_get(cc_channel));
    nrf_barrier_w();
}

/** @refhal{nrf_grtc_sys_counter_cc_set} */
NRFY_STATIC_INLINE void nrfy_grtc_sys_counter_cc_set(NRF_GRTC_Type * p_reg,
                                                     uint8_t         cc_channel,
                                                     uint64_t        cc_value)
{
    nrf_grtc_sys_counter_cc_set(p_reg, cc_channel, cc_value);
    nrf_barrier_w();
}

/** @refhal{nrf_grtc_sys_counter_cc_get} */
NRFY_STATIC_INLINE uint64_t nrfy_grtc_sys_counter_cc_get(NRF_GRTC_Type const * p_reg,
                                                         uint8_t               cc_channel)
{
    nrf_barrier_rw();
    uint64_t cc = nrf_grtc_sys_counter_cc_get(p_reg, cc_channel);
    nrf_barrier_r();
    return cc;
}

/** @refhal{nrf_grtc_sys_counter_cc_add_set} */
NRFY_STATIC_INLINE void nrfy_grtc_sys_counter_cc_add_set(NRF_GRTC_Type *             p_reg,
                                                         uint8_t                     cc_channel,
                                                         uint32_t                    value,
                                                         nrf_grtc_cc_add_reference_t reference)
{
    nrf_grtc_sys_counter_cc_add_set(p_reg, cc_channel, value, reference);
    nrf_barrier_w();
}

#if defined(NRF_SYSCTRL) || defined(NRF_SECURE) || defined(__NRFX_DOXYGEN__)
/** @refhal{nrf_grtc_rt_counter_cc_set} */
NRFY_STATIC_INLINE void nrfy_grtc_rt_counter_cc_set(NRF_GRTC_Type * p_reg,
                                                    uint64_t        cc_value,
                                                    bool            sync)
{
    nrf_grtc_rt_counter_cc_set(p_reg, cc_value, sync);
    nrf_barrier_w();
}

/** @refhal{nrf_grtc_rt_counter_cc_get} */
NRFY_STATIC_INLINE uint64_t nrfy_grtc_rt_counter_cc_get(NRF_GRTC_Type const * p_reg)
{
    nrf_barrier_rw();
    uint64_t cc = nrf_grtc_rt_counter_cc_get(p_reg);
    nrf_barrier_r();
    return cc;
}
#endif // defined(NRF_SYSCTRL) || defined(NRF_SECURE) || defined(__NRFX_DOXYGEN__)

/** @refhal{nrf_grtc_int_enable} */
NRFY_STATIC_INLINE void nrfy_grtc_int_enable(NRF_GRTC_Type * p_reg, uint32_t mask)
{
    nrf_grtc_int_enable(p_reg, mask);
    nrf_barrier_w();
}

/** @refhal{nrf_grtc_int_disable} */
NRFY_STATIC_INLINE void nrfy_grtc_int_disable(NRF_GRTC_Type * p_reg, uint32_t mask)
{
    nrf_grtc_int_disable(p_reg, mask);
    nrf_barrier_w();
}

/** @refhal{nrf_grtc_int_enable_check} */
NRFY_STATIC_INLINE uint32_t nrfy_grtc_int_enable_check(NRF_GRTC_Type const * p_reg, uint32_t mask)
{
    nrf_barrier_rw();
    uint32_t check = nrf_grtc_int_enable_check(p_reg, mask);
    nrf_barrier_r();
    return check;
}

/** @refhal{nrf_grtc_int_pending_get} */
NRFY_STATIC_INLINE uint32_t nrfy_grtc_int_pending_get(NRF_GRTC_Type const * p_reg)
{
    nrf_barrier_r();
    uint32_t pending = nrf_grtc_int_pending_get(p_reg);
    nrf_barrier_r();
    return pending;
}

#if defined(NRF_SYSCTRL) || defined(NRF_SECURE) || defined(__NRFX_DOXYGEN__)
/** @refhal{nrf_grtc_shorts_enable} */
NRFY_STATIC_INLINE void nrfy_grtc_shorts_enable(NRF_GRTC_Type * p_reg, uint32_t mask)
{
    nrf_grtc_shorts_enable(p_reg, mask);
    nrf_barrier_w();
}

/** @refhal{nrf_grtc_shorts_disable} */
NRFY_STATIC_INLINE void nrfy_grtc_shorts_disable(NRF_GRTC_Type * p_reg, uint32_t mask)
{
    nrf_grtc_shorts_disable(p_reg, mask);
    nrf_barrier_w();
}

/** @refhal{nrf_grtc_shorts_set} */
NRFY_STATIC_INLINE void nrfy_grtc_shorts_set(NRF_GRTC_Type * p_reg, uint32_t mask)
{
    nrf_grtc_shorts_set(p_reg, mask);
    nrf_barrier_w();
}
#endif // defined(NRF_SYSCTRL) || defined(NRF_SECURE) || defined(__NRFX_DOXYGEN__)

/** @refhal{nrf_grtc_subscribe_set} */
NRFY_STATIC_INLINE void nrfy_grtc_subscribe_set(NRF_GRTC_Type * p_reg,
                                                nrf_grtc_task_t task,
                                                uint8_t         channel)
{
    nrf_grtc_subscribe_set(p_reg, task, channel);
    nrf_barrier_w();
}

/** @refhal{nrf_grtc_subscribe_clear} */
NRFY_STATIC_INLINE void nrfy_grtc_subscribe_clear(NRF_GRTC_Type * p_reg, nrf_grtc_task_t task)
{
    nrf_grtc_subscribe_clear(p_reg, task);
    nrf_barrier_w();
}

/** @refhal{nrf_grtc_publish_set} */
NRFY_STATIC_INLINE void nrfy_grtc_publish_set(NRF_GRTC_Type *  p_reg,
                                              nrf_grtc_event_t event,
                                              uint8_t          channel)
{
    nrf_grtc_publish_set(p_reg, event, channel);
    nrf_barrier_w();
}

/** @refhal{nrf_grtc_publish_clear} */
NRFY_STATIC_INLINE void nrfy_grtc_publish_clear(NRF_GRTC_Type * p_reg, nrf_grtc_event_t event)
{
    nrf_grtc_publish_clear(p_reg, event);
    nrf_barrier_w();
}

/** @refhal{nrf_grtc_event_check} */
NRFY_STATIC_INLINE bool nrfy_grtc_event_check(NRF_GRTC_Type const * p_reg, nrf_grtc_event_t event)
{
    nrf_barrier_r();
    bool check = nrf_grtc_event_check(p_reg, event);
    nrf_barrier_r();
    return check;
}

/** @refhal{nrf_grtc_event_clear} */
NRFY_STATIC_INLINE void nrfy_grtc_event_clear(NRF_GRTC_Type * p_reg, nrf_grtc_event_t event)
{
    nrf_grtc_event_clear(p_reg, event);
    nrf_barrier_w();
}

/** @refhal{nrf_grtc_sys_counter_overflow_check} */
NRFY_STATIC_INLINE bool nrfy_grtc_sys_counter_overflow_check(NRF_GRTC_Type const * p_reg)
{
    nrf_barrier_r();
    bool check = nrf_grtc_sys_counter_overflow_check(p_reg);
    nrf_barrier_r();
    return check;
}

/** @refhal{nrf_grtc_event_address_get} */
NRFY_STATIC_INLINE uint32_t nrfy_grtc_event_address_get(NRF_GRTC_Type const * p_reg,
                                                        nrf_grtc_event_t      event)
{
    return nrf_grtc_event_address_get(p_reg, event);
}

/** @refhal{nrf_grtc_task_address_get} */
NRFY_STATIC_INLINE uint32_t nrfy_grtc_task_address_get(NRF_GRTC_Type const * p_reg,
                                                       nrf_grtc_task_t       task)
{
    return nrf_grtc_task_address_get(p_reg, task);
}

/** @refhal{nrf_grtc_task_trigger} */
NRFY_STATIC_INLINE void nrfy_grtc_task_trigger(NRF_GRTC_Type * p_reg, nrf_grtc_task_t task)
{
    nrf_grtc_task_trigger(p_reg, task);
    nrf_barrier_w();
}

/** @refhal{nrf_grtc_capture_task_get} */
NRFY_STATIC_INLINE nrf_grtc_task_t nrfy_grtc_capture_task_get(uint8_t cc_channel)
{
    return nrf_grtc_sys_counter_capture_task_get(cc_channel);
}

/** @refhal{nrf_grtc_sys_counter_compare_event_enable} */
NRFY_STATIC_INLINE void nrfy_grtc_sys_counter_compare_event_enable(NRF_GRTC_Type * p_reg,
                                                                   uint8_t         cc_channel)
{
    nrf_grtc_sys_counter_compare_event_enable(p_reg, cc_channel);
    nrf_barrier_w();
}

/** @refhal{nrf_grtc_sys_counter_compare_event_disable} */
NRFY_STATIC_INLINE void nrfy_grtc_sys_counter_compare_event_disable(NRF_GRTC_Type * p_reg,
                                                                    uint8_t         cc_channel)
{
    nrf_grtc_sys_counter_compare_event_disable(p_reg, cc_channel);
    nrf_barrier_w();
}

/** @refhal{nrf_grtc_sys_counter_compare_event_get} */
NRFY_STATIC_INLINE nrf_grtc_event_t nrfy_grtc_sys_counter_compare_event_get(uint8_t cc_channel)
{
    return nrf_grtc_sys_counter_compare_event_get(cc_channel);
}

#if defined(NRF_SYSCTRL) || defined(NRF_SECURE) || defined(__NRFX_DOXYGEN__)
/** @refhal{nrf_grtc_sys_counter_set} */
NRFY_STATIC_INLINE void nrfy_grtc_sys_counter_set(NRF_GRTC_Type * p_reg, bool enable)
{
    nrf_grtc_sys_counter_set(p_reg, enable);
    nrf_barrier_w();
}

/** @refhal{nrf_grtc_sys_counter_auto_mode_set} */
NRFY_STATIC_INLINE void nrfy_grtc_sys_counter_auto_mode_set(NRF_GRTC_Type * p_reg, bool enable)
{
    nrf_grtc_sys_counter_auto_mode_set(p_reg, enable);
    nrf_barrier_w();
}
#endif // defined(NRF_SYSCTRL) || defined(NRF_SECURE) || defined(__NRFX_DOXYGEN__)

/** @refhal{nrf_grtc_sys_counter_check} */
NRFY_STATIC_INLINE bool nrfy_grtc_sys_counter_check(NRF_GRTC_Type * p_reg)
{
    return nrf_grtc_sys_counter_check(p_reg);
}

/** @refhal{nrf_grtc_sys_counter_active_state_request_set} */
NRFY_STATIC_INLINE void nrfy_grtc_sys_counter_active_state_request_set(NRF_GRTC_Type * p_reg,
                                                                       nrf_domain_t    domain,
                                                                       bool            enable)
{
    nrf_grtc_sys_counter_active_state_request_set(p_reg, domain, enable);
    nrf_barrier_w();
}

/** @refhal{nrf_grtc_sys_counter_active_state_request_check} */
NRFY_STATIC_INLINE
bool nrfy_grtc_sys_counter_active_state_request_check(NRF_GRTC_Type const * p_reg,
                                                      nrf_domain_t          domain)
{
    nrf_barrier_rw();
    bool check = nrf_grtc_sys_counter_active_state_request_check(p_reg, domain);
    nrf_barrier_r();
    return check;
}

/** @refhal{nrf_grtc_sys_counter_active_state_request_get} */
NRFY_STATIC_INLINE
uint32_t nrfy_grtc_sys_counter_active_state_request_get(NRF_GRTC_Type const * p_reg,
                                                        uint32_t              mask)
{
    nrf_barrier_rw();
    uint32_t request = nrf_grtc_sys_counter_active_state_request_get(p_reg, mask);
    nrf_barrier_r();
    return request;
}

#if defined(NRF_SYSCTRL) || defined(NRF_SECURE) || defined(__NRFX_DOXYGEN__)
/** @refhal{nrf_grtc_sys_counter_interval_set} */
NRFY_STATIC_INLINE void nrfy_grtc_sys_counter_interval_set(NRF_GRTC_Type * p_reg, uint32_t value)
{
    nrf_grtc_sys_counter_interval_set(p_reg, value);
    nrf_barrier_w();
}

/** @refhal{nrf_grtc_sys_counter_interval_get} */
NRFY_STATIC_INLINE uint32_t nrfy_grtc_sys_counter_interval_get(NRF_GRTC_Type const * p_reg)
{
    nrf_barrier_rw();
    uint32_t interval = nrf_grtc_sys_counter_interval_get(p_reg);
    nrf_barrier_r();
    return interval;
}

/** @refhal{nrf_grtc_timeout_set} */
NRFY_STATIC_INLINE void nrfy_grtc_timeout_set(NRF_GRTC_Type * p_reg, uint32_t value)
{
    nrf_grtc_timeout_set(p_reg, value);
    nrf_barrier_w();
}

/** @refhal{nrf_grtc_timeout_get} */
NRFY_STATIC_INLINE uint32_t nrfy_grtc_timeout_get(NRF_GRTC_Type const * p_reg)
{
    nrf_barrier_rw();
    uint32_t timeout = nrf_grtc_timeout_get(p_reg);
    nrf_barrier_r();
    return timeout;
}

/** @refhal{nrf_grtc_waketime_set} */
NRFY_STATIC_INLINE void nrfy_grtc_waketime_set(NRF_GRTC_Type * p_reg, uint32_t value)
{
    nrf_grtc_waketime_set(p_reg, value);
    nrf_barrier_w();
}

/** @refhal{nrf_grtc_waketime_get} */
NRFY_STATIC_INLINE uint32_t nrfy_grtc_waketime_get(NRF_GRTC_Type const * p_reg)
{
    nrf_barrier_rw();
    uint32_t waketime = nrf_grtc_waketime_get(p_reg);
    nrf_barrier_r();
    return waketime;
}
#endif // defined(NRF_SYSCTRL) || defined(NRF_SECURE) || defined(__NRFX_DOXYGEN__)

/** @} */

NRFY_STATIC_INLINE void __nrfy_internal_grtc_event_enabled_clear(NRF_GRTC_Type *  p_reg,
                                                                 uint32_t         mask,
                                                                 nrf_grtc_event_t event)
{
    if (mask & NRFY_EVENT_TO_INT_BITMASK(event))
    {
        nrf_grtc_event_clear(p_reg, event);
    }
}

NRFY_STATIC_INLINE bool __nrfy_internal_grtc_event_handle(NRF_GRTC_Type *  p_reg,
                                                          uint32_t         mask,
                                                          nrf_grtc_event_t event,
                                                          uint32_t *       p_evt_mask)
{
    if ((mask & NRFY_EVENT_TO_INT_BITMASK(event)) && nrf_grtc_event_check(p_reg, event))
    {
        nrf_grtc_event_clear(p_reg, event);
        if (p_evt_mask)
        {
            *p_evt_mask |= NRFY_EVENT_TO_INT_BITMASK(event);
        }
        return true;
    }
    return false;
}

NRFY_STATIC_INLINE uint32_t __nrfy_internal_grtc_events_process(NRF_GRTC_Type * p_reg,
                                                                uint32_t        mask)
{
    uint32_t event_mask = 0;

    nrf_barrier_r();
    for (uint8_t cc_channel = 0; cc_channel < NRF_GRTC_SYSCOUNTER_CC_COUNT; cc_channel++)
    {
        nrf_grtc_event_t event = nrf_grtc_sys_counter_compare_event_get(cc_channel);
        (void)__nrfy_internal_grtc_event_handle(p_reg, mask, event, &event_mask);
    }
#if defined(NRF_SYSCTRL) || defined(NRF_SECURE)
    (void)__nrfy_internal_grtc_event_handle(p_reg,
                                            mask,
                                            NRF_GRTC_EVENT_RTCOMPARE,
                                            &event_mask);
    (void)__nrfy_internal_grtc_event_handle(p_reg,
                                            mask,
                                            NRF_GRTC_EVENT_RTCOMPARESYNC,
                                            &event_mask);
    (void)__nrfy_internal_grtc_event_handle(p_reg,
                                            mask,
                                            NRF_GRTC_EVENT_SYSCOUNTERVALID,
                                            &event_mask);
#endif
    return event_mask;
}

#if defined(NRF_SYSCTRL) || defined(NRF_SECURE)
NRFY_STATIC_INLINE uint64_t __nrfy_internal_grtc_rt_counter_read(NRF_GRTC_Type const * p_reg)
{
    uint32_t counter_l = nrf_grtc_rt_counter_low_get(p_reg);
    uint32_t counter_h = nrf_grtc_rt_counter_high_get(p_reg);
    nrf_barrier_r();
    return (uint64_t)counter_l | ((uint64_t)counter_h << 32);
}
#endif

#ifdef __cplusplus
}
#endif

#endif // NRFY_GRTC_H__
