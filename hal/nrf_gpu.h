/*$$$LICENCE_NORDIC_STANDARD<2022>$$$*/

#ifndef NRF_GPU_H__
#define NRF_GPU_H__

#include <nrfx.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrf_gpu_hal GPU HAL
 * @{
 * @ingroup nrf_gpu
 * @brief   Hardware access layer for managing the Graphics Processing Unit (GPU).
 */

/** @brief GPU events. */
typedef enum
{
    NRF_GPU_EVENT_CORE      = offsetof(NRF_GPU_Type, EVENTS_CORE),     /**< Event indicating that interrupt triggered at GPU core. */
    NRF_GPU_EVENT_SYS_ERROR = offsetof(NRF_GPU_Type, EVENTS_SYSERROR), /**< Event indicating system error */
    NRF_GPU_EVENT_STARTED   = offsetof(NRF_GPU_Type, EVENTS_STARTED),  /**< Event indicating that the display controller has been enabled. */
    NRF_GPU_EVENT_FREEZE    = offsetof(NRF_GPU_Type, EVENTS_FREEZE),   /**< Event indicating that the GPU has hit a breakpoint and all bus transactions are complete. */
} nrf_gpu_event_t;

/** @brief GPU interrupts. */
typedef enum
{
    NRF_GPU_INT_CORE_MASK      = GPU_INTEN_CORE_Msk,     /**< GPU interrupt for CORE event. */
    NRF_GPU_INT_SYS_ERROR_MASK = GPU_INTEN_SYSERROR_Msk, /**< GPU interrupt for SYSERROR event. */
    NRF_GPU_INT_STARTED_MASK   = GPU_INTEN_STARTED_Msk,  /**< GPU interrupt for STARTED event. */
    NRF_GPU_INT_FREEZE_MASK    = GPU_INTEN_FREEZE_Msk,   /**< GPU interrupt for FREEZE event. */
} nrf_gpu_int_mask_t;

/** @brief STATUS register bit masks. */
typedef enum
{
    NRF_GPU_STATUS_ACTIVE_MASK = GPU_STATUS_ACTIVE_Msk, /**< GPU active indication. 1 - is busy, 0 - idle. */
    NRF_GPU_STATUS_DVFS_MASK   = GPU_STATUS_DVFS_Msk    /**< Frequency reduction request for GPU core clock. */
} nrf_gpu_status_mask_t;

/**
 * @brief Function for clearing the specified GPU event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event Event to be cleared.
 */
NRF_STATIC_INLINE void nrf_gpu_event_clear(NRF_GPU_Type * p_reg, nrf_gpu_event_t event);

/**
 * @brief Function for retrieving the state of the GPU event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event Event to be checked.
 *
 * @retval true  The event has been generated.
 * @retval false The event has not been generated.
 */
NRF_STATIC_INLINE bool nrf_gpu_event_check(NRF_GPU_Type const * p_reg,
                                           nrf_gpu_event_t      event);

/**
 * @brief Function for getting the address of the specified GPU event register.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] event The specified event.
 *
 * @return Address of the specified event register.
 */
NRF_STATIC_INLINE uint32_t nrf_gpu_event_address_get(NRF_GPU_Type const * p_reg,
                                                     nrf_gpu_event_t      event);

/**
 * @brief Function for enabling specified interrupts.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of interrupts to be enabled.
 */
NRF_STATIC_INLINE void nrf_gpu_int_enable(NRF_GPU_Type * p_reg, uint32_t mask);

/**
 * @brief Function for disabling specified interrupts.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of interrupts to be disabled.
 */
NRF_STATIC_INLINE void nrf_gpu_int_disable(NRF_GPU_Type * p_reg, uint32_t mask);

/**
 * @brief Function for checking if the specified interrupts are enabled.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Mask of interrupts to be checked.
 *
 * @return true  requested interrupts are enabled.
 * @return false requested interrupts are disabled.
 */
NRF_STATIC_INLINE bool nrf_gpu_int_enable_check(NRF_GPU_Type const * p_reg,
                                                uint32_t             mask);

/**
 * @brief Function for enabling the GPU.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 */
NRF_STATIC_INLINE void nrf_gpu_enable(NRF_GPU_Type * p_reg);

/**
 * @brief Function for disabling the GPU.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 */
NRF_STATIC_INLINE void nrf_gpu_disable(NRF_GPU_Type * p_reg);

/**
 * @brief Function for checking if the GPU peripheral is enabled.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @retval true  The GPU peripheral is enabled.
 * @retval false The GPU peripheral is not enabled.
 */
NRF_STATIC_INLINE bool nrf_gpu_enable_check(NRF_GPU_Type const * p_reg);

/**
 * @brief Function for setting the GPU breakpoint flag to assert FREEZE event.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 */
NRF_STATIC_INLINE void nrf_gpu_breakpoint_set(NRF_GPU_Type * p_reg);

/**
 * @brief Function for resume the GPU breakpoint.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 */
NRF_STATIC_INLINE void nrf_gpu_breakpoint_resume(NRF_GPU_Type * p_reg);

/**
 * @brief Function for checking if the the GPU breakpoint active.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @retval true  The GPU breakpoint flag is enabled.
 * @retval false The GPU breakpoint flag is not enabled.
 */
NRF_STATIC_INLINE bool nrf_gpu_breakpoint_check(NRF_GPU_Type const * p_reg);

/**
 * @brief Function for getting the GPU current status information.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return The GPU current status bitmask.
 *         Use @ref nrf_gpu_status_mask_t values for bit masking.
 */
NRF_STATIC_INLINE uint32_t nrf_gpu_status_get(NRF_GPU_Type const * p_reg);

#ifndef NRF_DECLARE_ONLY

NRF_STATIC_INLINE void nrf_gpu_event_clear(NRF_GPU_Type * p_reg, nrf_gpu_event_t event)
{
    *((volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)event)) = 0x0UL;
    nrf_event_readback((uint8_t *)p_reg + (uint32_t)event);
}

NRF_STATIC_INLINE bool nrf_gpu_event_check(NRF_GPU_Type const * p_reg,
                                           nrf_gpu_event_t      event)
{
    return (bool)*(volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)event);
}

NRF_STATIC_INLINE uint32_t nrf_gpu_event_address_get(NRF_GPU_Type const * p_reg,
                                                     nrf_gpu_event_t      event)
{
    return (uint32_t)((uint8_t *)p_reg + (uint32_t)event);
}

NRF_STATIC_INLINE void nrf_gpu_int_enable(NRF_GPU_Type * p_reg, uint32_t mask)
{
    p_reg->INTENSET = mask;
}

NRF_STATIC_INLINE void nrf_gpu_int_disable(NRF_GPU_Type * p_reg, uint32_t mask)
{
    p_reg->INTENCLR = mask;
}

NRF_STATIC_INLINE bool nrf_gpu_int_enable_check(NRF_GPU_Type const * p_reg,
                                                uint32_t             mask)
{
    return p_reg->INTENSET & mask;
}

NRF_STATIC_INLINE void nrf_gpu_enable(NRF_GPU_Type * p_reg)
{
    p_reg->ENABLE = (GPU_ENABLE_EN_Enabled << GPU_ENABLE_EN_Pos);
}

NRF_STATIC_INLINE void nrf_gpu_disable(NRF_GPU_Type * p_reg)
{
    p_reg->ENABLE = (GPU_ENABLE_EN_Disabled << GPU_ENABLE_EN_Pos);
}

NRF_STATIC_INLINE bool nrf_gpu_enable_check(NRF_GPU_Type const * p_reg)
{
    return ((p_reg->ENABLE) & GPU_ENABLE_EN_Enabled);
}

NRF_STATIC_INLINE void nrf_gpu_breakpoint_set(NRF_GPU_Type * p_reg)
{
	p_reg->FLAG = 1;
}

NRF_STATIC_INLINE void nrf_gpu_breakpoint_resume(NRF_GPU_Type * p_reg)
{
	p_reg->FLAG &= ~(GPU_FLAG_FLAG_Msk);
}

NRF_STATIC_INLINE bool nrf_gpu_breakpoint_check(NRF_GPU_Type const * p_reg)
{
	return p_reg->FLAG;
}

NRF_STATIC_INLINE uint32_t nrf_gpu_status_get(NRF_GPU_Type const * p_reg)
{
	return p_reg->STATUS;
}

#endif // NRF_DECLARE_ONLY

/** @} */

#ifdef __cplusplus
}
#endif

#endif // NRF_GPU_H__
