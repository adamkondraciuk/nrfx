/*$$$LICENCE_NORDIC_STANDARD<2021>$$$*/

#ifndef NRFY_GPIOTE_H__
#define NRFY_GPIOTE_H__

#include <nrfx.h>
#include <hal/nrf_gpiote.h>

#ifdef __cplusplus
extern "C" {
#endif

NRFY_STATIC_INLINE void __nrfy_internal_gpiote_event_enabled_clear(NRF_GPIOTE_Type *  p_reg,
                                                                   uint32_t           mask,
                                                                   nrf_gpiote_event_t event);

NRFY_STATIC_INLINE bool __nrfy_internal_gpiote_event_handle(NRF_GPIOTE_Type *  p_reg,
                                                            uint32_t           mask,
                                                            nrf_gpiote_event_t event,
                                                            uint32_t *         p_evt_mask);

NRFY_STATIC_INLINE uint32_t __nrfy_internal_gpiote_events_process(NRF_GPIOTE_Type * p_reg,
                                                                  uint32_t          mask);

/**
 * @defgroup nrfy_gpiote GPIOTE HALY
 * @{
 * @ingroup nrf_gpiote
 * @brief   Hardware access layer with cache and barrier support for managing the GPIOTE peripheral.
 */

#if NRF_GPIOTE_HAS_LATENCY || defined(__NRFX_DOXYGEN__)
/** @refhal{NRF_GPIOTE_HAS_LATENCY} */
#define NRFY_GPIOTE_HAS_LATENCY 1
#else
#define NRFY_GPIOTE_HAS_LATENCY 0
#endif

#if NRF_GPIOTE_HAS_MULTIPLE_INT || defined(__NRFX_DOXYGEN__)
/** @refhal{NRF_GPIOTE_HAS_MULTIPLE_INT} */
#define NRFY_GPIOTE_HAS_MULTIPLE_INT 1
#else
#define NRFY_GPIOTE_HAS_MULTIPLE_INT 0
#endif

/**
 * @brief Function for initializing the specified GPIOTE interrupts.
 *
 * @param[in] p_reg        Pointer to the structure of registers of the peripheral.
 * @param[in] mask         Mask of interrupts to be initialized.
 * @param[in] irq_priority Interrupt priority.
 * @param[in] enable       True if the interrupts are to be enabled, false otherwise.
 */
NRFY_STATIC_INLINE void nrfy_gpiote_int_init(NRF_GPIOTE_Type * p_reg,
                                             uint32_t          mask,
                                             uint8_t           irq_priority,
                                             bool              enable)
{
    for (uint8_t i = 0; i < GPIOTE_CH_NUM; i++)
    {
        __nrfy_internal_gpiote_event_enabled_clear(p_reg, mask, nrf_gpiote_in_event_get(i));
    }

#if defined(NRFY_GPIOTE_HAS_MULTIPLE_INT)
#if defined(GPIOTE_GPIOTE_NCHANNELS)
    uint8_t max_index = GPIOTE_GPIOTE_NCHANNELS;
#else
    uint8_t max_index = GPIO_COUNT;
#endif
#else
    uint8_t max_index = 1;
#endif // NRFY_GPIOTE_HAS_MULTIPLE_INT

    for (uint8_t i = 0; i < max_index; i++)
    {
        __nrfy_internal_gpiote_event_enabled_clear(p_reg,
                                                   mask,
                                                   nrf_gpiote_port_event_get(i));
    }

#if defined(NRF_GPIOTE130)
    IRQn_Type irqn = NRF_GPIOTE130_IRQn;
#elif defined(NRF_GPIOTE20)
    IRQn_Type irqn = NRF_GPIOTE20_IRQn;
#else
    IRQn_Type irqn = nrfx_get_irq_number(p_reg);
#endif
    NRFX_IRQ_PRIORITY_SET(irqn, irq_priority);
    NRFX_IRQ_ENABLE(irqn);
    if (enable)
    {
        nrf_gpiote_int_enable(p_reg, mask);
    }
    nrf_barrier_w();
}

/**
 * @brief Function for processing the specified GPIOTE events.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of events to be processed, created by @ref NRFY_EVENT_TO_INT_BITMASK().
 *
 * @return Mask of events that were generated and processed.
 *         To be checked against the result of @ref NRFY_EVENT_TO_INT_BITMASK().
 */
NRFY_STATIC_INLINE uint32_t nrfy_gpiote_events_process(NRF_GPIOTE_Type * p_reg,
                                                       uint32_t          mask)
{
    uint32_t evt_mask = __nrfy_internal_gpiote_events_process(p_reg, mask);
    nrf_barrier_w();
    return evt_mask;
}

/** @refhal{nrf_gpiote_task_trigger} */
NRFY_STATIC_INLINE void nrfy_gpiote_task_trigger(NRF_GPIOTE_Type * p_reg, nrf_gpiote_task_t task)
{
    nrf_gpiote_task_trigger(p_reg, task);
    nrf_barrier_w();
}

/** @refhal{nrf_gpiote_task_address_get} */
NRFY_STATIC_INLINE uint32_t nrfy_gpiote_task_address_get(NRF_GPIOTE_Type const * p_reg,
                                                         nrf_gpiote_task_t       task)
{
    return nrf_gpiote_task_address_get(p_reg, task);
}

/** @refhal{nrf_gpiote_event_check} */
NRFY_STATIC_INLINE bool nrfy_gpiote_event_check(NRF_GPIOTE_Type const * p_reg,
                                                nrf_gpiote_event_t      event)
{
    nrf_barrier_r();
    bool evt = nrf_gpiote_event_check(p_reg, event);
    nrf_barrier_r();
    return evt;
}

/** @refhal{nrf_gpiote_event_clear} */
NRFY_STATIC_INLINE void nrfy_gpiote_event_clear(NRF_GPIOTE_Type * p_reg, nrf_gpiote_event_t event)
{
    nrf_gpiote_event_clear(p_reg, event);
    nrf_barrier_w();
}

/** @refhal{nrf_gpiote_event_address_get} */
NRFY_STATIC_INLINE uint32_t nrfy_gpiote_event_address_get(NRF_GPIOTE_Type const * p_reg,
                                                          nrf_gpiote_event_t      event)
{
    return nrf_gpiote_event_address_get(p_reg, event);
}

/** @refhal{nrf_gpiote_int_enable} */
NRFY_STATIC_INLINE void nrfy_gpiote_int_enable(NRF_GPIOTE_Type * p_reg, uint32_t mask)
{
    nrf_gpiote_int_enable(p_reg, mask);
    nrf_barrier_w();
}

/** @refhal{nrf_gpiote_int_disable} */
NRFY_STATIC_INLINE void nrfy_gpiote_int_disable(NRF_GPIOTE_Type * p_reg, uint32_t mask)
{
    nrf_gpiote_int_disable(p_reg, mask);
    nrf_barrier_w();
}

/** @refhal{nrf_gpiote_int_enable_check} */
NRFY_STATIC_INLINE uint32_t nrfy_gpiote_int_enable_check(NRF_GPIOTE_Type const * p_reg,
                                                         uint32_t                mask)
{
    nrf_barrier_rw();
    uint32_t enable = nrf_gpiote_int_enable_check(p_reg, mask);
    nrf_barrier_r();
    return enable;
}

#if defined(DPPI_PRESENT) || defined(__NRFX_DOXYGEN__)
/** @refhal{nrf_gpiote_subscribe_set} */
NRFY_STATIC_INLINE void nrfy_gpiote_subscribe_set(NRF_GPIOTE_Type * p_reg,
                                                  nrf_gpiote_task_t task,
                                                  uint8_t           channel)
{
    nrf_gpiote_subscribe_set(p_reg, task, channel);
    nrf_barrier_w();
}

/** @refhal{nrf_gpiote_subscribe_clear} */
NRFY_STATIC_INLINE void nrfy_gpiote_subscribe_clear(NRF_GPIOTE_Type * p_reg,
                                                    nrf_gpiote_task_t task)
{
    nrf_gpiote_subscribe_clear(p_reg, task);
    nrf_barrier_w();
}

/** @refhal{nrf_gpiote_publish_set} */
NRFY_STATIC_INLINE void nrfy_gpiote_publish_set(NRF_GPIOTE_Type *  p_reg,
                                                nrf_gpiote_event_t event,
                                                uint8_t            channel)
{
    nrf_gpiote_publish_set(p_reg, event, channel);
    nrf_barrier_w();
}

/** @refhal{nrf_gpiote_publish_clear} */
NRFY_STATIC_INLINE void nrfy_gpiote_publish_clear(NRF_GPIOTE_Type *  p_reg,
                                                  nrf_gpiote_event_t event)
{
    nrf_gpiote_publish_clear(p_reg, event);
    nrf_barrier_w();
}
#endif

/** @refhal{nrf_gpiote_event_enable} */
NRFY_STATIC_INLINE void nrfy_gpiote_event_enable(NRF_GPIOTE_Type * p_reg, uint32_t idx)
{
    nrf_gpiote_event_enable(p_reg, idx);
    nrf_barrier_w();
}

/** @refhal{nrf_gpiote_event_disable} */
NRFY_STATIC_INLINE void nrfy_gpiote_event_disable(NRF_GPIOTE_Type * p_reg, uint32_t idx)
{
    nrf_gpiote_event_disable(p_reg, idx);
    nrf_barrier_w();
}

/** @refhal{nrf_gpiote_event_configure} */
NRFY_STATIC_INLINE void nrfy_gpiote_event_configure(NRF_GPIOTE_Type *     p_reg,
                                                    uint32_t              idx,
                                                    uint32_t              pin,
                                                    nrf_gpiote_polarity_t polarity)
{
    nrf_gpiote_event_configure(p_reg, idx, pin, polarity);
    nrf_barrier_w();
}

/** @refhal{nrf_gpiote_event_pin_get} */
NRFY_STATIC_INLINE uint32_t nrfy_gpiote_event_pin_get(NRF_GPIOTE_Type const * p_reg, uint32_t idx)
{
    nrf_barrier_rw();
    uint32_t pin = nrf_gpiote_event_pin_get(p_reg, idx);
    nrf_barrier_r();
    return pin;
}

/** @refhal{nrf_gpiote_event_polarity_get} */
NRFY_STATIC_INLINE
nrf_gpiote_polarity_t nrfy_gpiote_event_polarity_get(NRF_GPIOTE_Type const * p_reg,
                                                     uint32_t                idx)
{
    nrf_barrier_rw();
    nrf_gpiote_polarity_t polarity = nrf_gpiote_event_polarity_get(p_reg, idx);
    nrf_barrier_r();
    return polarity;
}

/** @refhal{nrf_gpiote_task_enable} */
NRFY_STATIC_INLINE void nrfy_gpiote_task_enable(NRF_GPIOTE_Type * p_reg, uint32_t idx)
{
    nrf_gpiote_task_enable(p_reg, idx);
    nrf_barrier_w();
}

/** @refhal{nrf_gpiote_task_disable} */
NRFY_STATIC_INLINE void nrfy_gpiote_task_disable(NRF_GPIOTE_Type * p_reg, uint32_t idx)
{
    nrf_gpiote_task_disable(p_reg, idx);
    nrf_barrier_w();
}

/** @refhal{nrf_gpiote_task_configure} */
NRFY_STATIC_INLINE void nrfy_gpiote_task_configure(NRF_GPIOTE_Type *     p_reg,
                                                   uint32_t              idx,
                                                   uint32_t              pin,
                                                   nrf_gpiote_polarity_t polarity,
                                                   nrf_gpiote_outinit_t  init_val)
{
    nrf_gpiote_task_configure(p_reg, idx, pin, polarity, init_val);
    nrf_barrier_w();
}

/** @refhal{nrf_gpiote_task_force} */
NRFY_STATIC_INLINE void nrfy_gpiote_task_force(NRF_GPIOTE_Type *    p_reg,
                                               uint32_t             idx,
                                               nrf_gpiote_outinit_t init_val)
{
    nrf_gpiote_task_force(p_reg, idx, init_val);
    nrf_barrier_w();
}

/** @refhal{nrf_gpiote_te_default} */
NRFY_STATIC_INLINE void nrfy_gpiote_te_default(NRF_GPIOTE_Type * p_reg, uint32_t idx)
{
    nrf_gpiote_te_default(p_reg, idx);
    nrf_barrier_w();
}

/** @refhal{nrf_gpiote_te_is_enabled} */
NRFY_STATIC_INLINE bool nrfy_gpiote_te_is_enabled(NRF_GPIOTE_Type const * p_reg, uint32_t idx)
{
    nrf_barrier_rw();
    bool enabled = nrf_gpiote_te_is_enabled(p_reg, idx);
    nrf_barrier_r();
    return enabled;
}

/** @refhal{nrf_gpiote_out_task_get} */
NRFY_STATIC_INLINE nrf_gpiote_task_t nrfy_gpiote_out_task_get(uint8_t index)
{
    return nrf_gpiote_out_task_get(index);
}

#if defined(GPIOTE_FEATURE_SET_PRESENT) || defined(__NRFX_DOXYGEN__)
/** @refhal{nrf_gpiote_set_task_get} */
NRFY_STATIC_INLINE nrf_gpiote_task_t nrfy_gpiote_set_task_get(uint8_t index)
{
    return nrf_gpiote_set_task_get(index);
}
#endif

#if defined(GPIOTE_FEATURE_CLR_PRESENT) || defined(__NRFX_DOXYGEN__)
/** @refhal{nrf_gpiote_clr_task_get} */
NRFY_STATIC_INLINE nrf_gpiote_task_t nrfy_gpiote_clr_task_get(uint8_t index)
{
    return nrf_gpiote_clr_task_get(index);
}
#endif

/** @refhal{nrf_gpiote_in_event_get} */
NRFY_STATIC_INLINE nrf_gpiote_event_t nrfy_gpiote_in_event_get(uint8_t index)
{
    return nrf_gpiote_in_event_get(index);
}

/** @refhal{nrf_gpiote_port_event_get} */
NRFY_STATIC_INLINE nrf_gpiote_event_t nrfy_gpiote_port_event_get(uint8_t index)
{
    return nrf_gpiote_port_event_get(index);
}

#if NRFY_GPIOTE_HAS_LATENCY
/** @refhal{nrf_gpiote_latency_set} */
NRFY_STATIC_INLINE void nrfy_gpiote_latency_set(NRF_GPIOTE_Type *    p_reg,
                                                nrf_gpiote_latency_t latency)
{
    nrf_gpiote_latency_set(p_reg, latency);
    nrf_barrier_w();
}

/** @refhal{nrf_gpiote_latency_get} */
NRFY_STATIC_INLINE nrf_gpiote_latency_t nrfy_gpiote_latency_get(NRF_GPIOTE_Type const * p_reg)
{
    nrf_barrier_rw();
    nrf_gpiote_latency_t latency = nrf_gpiote_latency_get(p_reg);
    nrf_barrier_r();
    return latency;
}
#endif

/** @} */

NRFY_STATIC_INLINE void __nrfy_internal_gpiote_event_enabled_clear(NRF_GPIOTE_Type *  p_reg,
                                                                   uint32_t           mask,
                                                                   nrf_gpiote_event_t event)
{
    if (mask & NRFY_EVENT_TO_INT_BITMASK(event))
    {
        nrf_gpiote_event_clear(p_reg, event);
    }
}

NRFY_STATIC_INLINE bool __nrfy_internal_gpiote_event_handle(NRF_GPIOTE_Type *  p_reg,
                                                            uint32_t           mask,
                                                            nrf_gpiote_event_t event,
                                                            uint32_t *         p_evt_mask)
{
    if ((mask & NRFY_EVENT_TO_INT_BITMASK(event)) && nrf_gpiote_event_check(p_reg, event))
    {
        nrf_gpiote_event_clear(p_reg, event);
        if (p_evt_mask)
        {
            *p_evt_mask |= NRFY_EVENT_TO_INT_BITMASK(event);
        }
        return true;
    }
    return false;
}

NRFY_STATIC_INLINE uint32_t __nrfy_internal_gpiote_events_process(NRF_GPIOTE_Type * p_reg,
                                                                  uint32_t          mask)
{
    uint32_t event_mask = 0;

    nrf_barrier_r();
    for (uint8_t i = 0; i < GPIOTE_CH_NUM; i++)
    {
        (void)__nrfy_internal_gpiote_event_handle(p_reg,
                                                  mask,
                                                  nrf_gpiote_in_event_get(i),
                                                  &event_mask);
    }

#if NRFY_GPIOTE_HAS_MULTIPLE_INT
#if defined(GPIOTE_GPIOTE_NCHANNELS)
    uint8_t max_index = GPIOTE_GPIOTE_NCHANNELS;
#else
    uint8_t max_index = GPIO_COUNT;
#endif 
#else
    uint8_t max_index = 1;
#endif// NRFY_GPIOTE_HAS_MULTIPLE_INT

    for (uint8_t i = 0; i < max_index; i++)
    {
        (void)__nrfy_internal_gpiote_event_handle(p_reg,
                                                  mask,
                                                  nrf_gpiote_port_event_get(i),
                                                  &event_mask);
    }

    return event_mask;
}

#ifdef __cplusplus
}
#endif

#endif // NRFY_GPIOTE_H__
