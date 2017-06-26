/*$$$LICENCE_NORDIC_STANDARD<2017>$$$*/

#ifndef NRFX_COMMON_H__
#define NRFX_COMMON_H__

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrfx_common nrfx common module
 * @{
 * @ingroup nrfx
 */

#define NRFX_CHECK(module_enabled)  (module_enabled)

#define NRFX_CONCAT_2(p1, p2)       NRFX_CONCAT_2_(p1, p2)
#define NRFX_CONCAT_2_(p1, p2)      p1 ## p2

#define NRFX_CONCAT_3(p1, p2, p3)   NRFX_CONCAT_3_(p1, p2, p3)
#define NRFX_CONCAT_3_(p1, p2, p3)  p1 ## p2 ## p3

#define NRFX_ROUNDED_DIV(a, b)  (((a) + ((b) / 2)) / (b))


/**
 * @brief IRQ handler type.
 */
typedef void (* nrfx_irq_handler_t)(void);

/**
 * @brief Driver state.
 */
typedef enum
{
    NRFX_DRV_STATE_UNINITIALIZED, ///< Uninitialized.
    NRFX_DRV_STATE_INITIALIZED,   ///< Initialized but powered off.
    NRFX_DRV_STATE_POWERED_ON,    ///< Initialized and powered on.
} nrfx_drv_state_t;


__STATIC_INLINE bool nrfx_is_in_ram(void const * p_object);

__STATIC_INLINE IRQn_Type nrfx_get_irq_number(void const * p_reg);

__STATIC_INLINE uint32_t nrfx_bitpos_to_event(uint32_t bit);

__STATIC_INLINE uint32_t nrfx_event_to_bitpos(uint32_t event);

#ifndef SUPPRESS_INLINE_IMPLEMENTATION

__STATIC_INLINE bool nrfx_is_in_ram(void const * p_object)
{
    return ((((uint32_t)p_object) & 0xE0000000u) == 0x20000000u);
}

__STATIC_INLINE IRQn_Type nrfx_get_irq_number(void const * p_reg)
{
    uint8_t irq_number = (uint8_t)(((uint32_t)p_reg) >> 12u);
    return (IRQn_Type)irq_number;
}

__STATIC_INLINE uint32_t nrfx_bitpos_to_event(uint32_t bit)
{
    static const uint32_t event_reg_offset = 0x100u;
    return event_reg_offset + (bit * sizeof(uint32_t));
}

__STATIC_INLINE uint32_t nrfx_event_to_bitpos(uint32_t event)
{
    static const uint32_t event_reg_offset = 0x100u;
    return (event - event_reg_offset) / sizeof(uint32_t);
}

#endif

/** @} */

#ifdef __cplusplus
}
#endif

#endif // NRFX_COMMON_H__
