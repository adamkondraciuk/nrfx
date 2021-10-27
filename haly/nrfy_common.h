/*$$$LICENCE_NORDIC_STANDARD<2021>$$$*/

#ifndef NRFY_COMMON_H__
#define NRFY_COMMON_H__

#ifdef __cplusplus
extern "C" {
#endif

NRFY_STATIC_INLINE bool __nrfy_internal_irq_is_enabled(IRQn_Type irq_number);

NRFY_STATIC_INLINE bool __nrfy_internal_irq_is_pending(IRQn_Type irq_number);

/**
 * @defgroup nrfy_common Common module
 * @{
 * @ingroup nrfy
 * @brief Common module.
 */

/**
 * @brief Macro for calculating interrupt bit position associated with the specified event.
 *
 * @param[in] event Event.
 *
 * @return Interrupt bit position.
 */
#define NRFY_EVENT_TO_INT_BITPOS(event) ((((uint32_t)event) - 0x100) >> 2)

/**
 * @brief Macro for calculating interrupt bitmask associated with the specified event.
 *
 * @param[in] event Event.
 *
 * @return Interrupt bitmask.
 */
#define NRFY_EVENT_TO_INT_BITMASK(event) (1 << NRFY_EVENT_TO_INT_BITPOS(event))

/** @sa NRFX_IRQ_PRIORITY_SET */
#define NRFY_IRQ_PRIORITY_SET(irq_number, priority)  \
    do {                                             \
        NRFX_IRQ_PRIORITY_SET(irq_number, priority); \
        nrf_barrier_w();                             \
    } while (0)

/** @sa NRFX_IRQ_ENABLE */
#define NRFY_IRQ_ENABLE(irq_number)  \
    do {                             \
        NRFX_IRQ_ENABLE(irq_number); \
        nrf_barrier_w();             \
    } while (0)

/** @sa NRFX_IRQ_IS_ENABLED */
#define NRFY_IRQ_IS_ENABLED(irq_number) __nrfy_internal_irq_is_enabled(irq_number)

/** @sa NRFX_IRQ_DISABLE */
#define NRFY_IRQ_DISABLE(irq_number)  \
    do {                              \
        NRFX_IRQ_DISABLE(irq_number); \
        nrf_barrier_w();              \
    } while (0)

/** @sa NRFX_IRQ_PENDING_SET */
#define NRFY_IRQ_PENDING_SET(irq_number)  \
    do {                                  \
        NRFX_IRQ_PENDING_SET(irq_number); \
        nrf_barrier_w();                  \
    } while (0)

/** @sa NRFX_IRQ_PENDING_CLEAR */
#define NRFY_IRQ_PENDING_CLEAR(irq_number)  \
    do {                                    \
        NRFX_IRQ_PENDING_CLEAR(irq_number); \
        nrf_barrier_w();                    \
    } while (0)

/** @sa NRFX_IRQ_IS_PENDING */
#define NRFY_IRQ_IS_PENDING(irq_number) __nrfy_internal_irq_is_pending(irq_number)

/** @sa NRFX_CRITICAL_SECTION_ENTER */
#define NRFY_CRITICAL_SECTION_ENTER() NRFX_CRITICAL_SECTION_ENTER()

/** @sa NRFX_CRITICAL_SECTION_EXIT */
#define NRFY_CRITICAL_SECTION_EXIT() NRFX_CRITICAL_SECTION_EXIT()

/** @} */

NRFY_STATIC_INLINE bool __nrfy_internal_irq_is_enabled(IRQn_Type irq_number)
{
    nrf_barrier_rw();
    bool is_enabled = NRFX_IRQ_IS_ENABLED(irq_number);
    nrf_barrier_r();
    return is_enabled;
}

NRFY_STATIC_INLINE bool __nrfy_internal_irq_is_pending(IRQn_Type irq_number)
{
    nrf_barrier_rw();
    bool is_pending = NRFX_IRQ_IS_PENDING(irq_number);
    nrf_barrier_r();
    return is_pending;
}

#ifdef __cplusplus
}
#endif

#endif // NRFY_COMMON_H__
