/*$$$LICENCE_NORDIC_STANDARD<2021>$$$*/

#ifndef NRFX_GRTC_H__
#define NRFX_GRTC_H__

#include <nrfx.h>
#include <haly/nrfy_grtc.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrfx_grtc GRTC driver
 * @{
 * @ingroup nrf_grtc
 * @brief   Global Real Timer Counter (GRTC) peripheral driver.
 */

/**
 * @brief GRTC driver instance compare handler type.
 *
 * @param[in] id        Channel ID.
 * @param[in] cc_value  Compare value.
 * @param[in] p_context User context.
 */
typedef void (*nrfx_grtc_cc_handler_t)(int32_t id, uint64_t cc_value, void * p_context);

/**
 * @brief GRTC driver instance SYSCOUNTER valid handler type.
 *
 * @param[in] p_context User context.
 */
typedef void (*nrfx_grtc_syscountervalid_handler_t)(void * p_context);

/** @brief GRTC capture/compare channel description structure. */
typedef struct
{
    nrfx_grtc_cc_handler_t handler;   /**< User handler. */
    void *                 p_context; /**< User context. */
    uint8_t                channel;   /**< Capture/compare channel number. */
} nrfx_grtc_channel_t;

/** @brief GRTC RTCOUNTER handler data structure. */
typedef struct
{
    nrfx_grtc_cc_handler_t handler;   /**< User handler. */
    void *                 p_context; /**< User context. */
} nrfx_grtc_rtcounter_handler_data_t;

/** @brief GRTC action types. */
typedef enum
{
    NRFX_GRTC_RTCOUNTER_ACTION_START = NRF_GRTC_TASK_START, /**< Start the RTCOUNTER. */
    NRFX_GRTC_RTCOUNTER_ACTION_STOP  = NRF_GRTC_TASK_STOP,  /**< Stop the RTCOUNTER. */
    NRFX_GRTC_RTCOUNTER_ACTION_CLEAR = NRF_GRTC_TASK_CLEAR, /**< Clear the RTCOUNTER. */
} nrfx_grtc_rtcounter_action_t;

/** @brief GRTC compare event relative references. */
typedef enum
{
    NRFX_GRTC_CC_RELATIVE_SYSCOUNTER = NRF_GRTC_CC_ADD_REFERENCE_SYSCOUNTER, /**< The SYSCOUNTER content will be used as the reference. */
    NRFX_GRTC_CC_RELATIVE_COMPARE    = NRF_GRTC_CC_ADD_REFERENCE_CC,         /**< The corresponding compare register content will be used as the reference. */
} nrfx_grtc_cc_relative_reference_t;

/**
 * @brief Function for allocating the GRTC capture/compare channel.
 *
 * @note Function is thread safe as it uses @ref nrfx_flag32_alloc.
 * @note Routines that allocate and free the GRTC channels are independent
 *       from the rest of the driver. In particular, the driver does not need
 *       to be initialized when this function is called.
 *
 * @param[out] p_channel Pointer to the capture/compare channel.
 *
 * @retval NRFX_SUCCESS      Allocation was successful.
 * @retval NRFX_ERROR_NO_MEM No resource available.
 */
nrfx_err_t nrfx_grtc_channel_alloc(uint8_t * p_channel);

/**
 * @brief Function for freeing the GRTC capture/compare channel.
 *
 * @note Function is thread safe as it uses @ref nrfx_flag32_free.
 * @note Routines that allocate and free the GRTC channels are independent
 *       from the rest of the driver. In particular, the driver does not need
 *       to be initialized when this function is called.
 * @note This function also mark specified channel as unused by the driver.
 *
 * @param[in] channel Allocated channel to be freed.
 *
 * @retval NRFX_SUCCESS             Allocation was successful.
 * @retval NRFX_ERROR_FORBIDDEN     The domain is not allowed to use specified @p channel.
 * @retval NRFX_ERROR_INVALID_PARAM Channel is not allocated.
 */
nrfx_err_t nrfx_grtc_channel_free(uint8_t channel);

/**
 * @brief Function for checking whether the specified channel is used by the driver.
 *
 * @note Channels marked as used cannot be utilized by external API.
 *
 * @param[in] channel Channel to be checked.
 *
 * @retval true  Channel is used by the driver.
 * @retval false Channel is not used by the driver.
 */
bool nrfx_grtc_is_channel_used(uint8_t channel);

/**
 * @brief Function for initializing the GRTC.
 *
 * @param[in] interrupt_priority Interrupt priority.
 *
 * @retval NRFX_SUCCESS             Initialization was successful.
 * @retval NRFX_ERROR_INVALID_STATE The GRTC is already initialized.
 * @retval NRFX_ERROR_INTERNAL      No valid channel configuration provided.
 */
nrfx_err_t nrfx_grtc_init(uint8_t interrupt_priority);

#if defined(NRF_SYSCTRL) || defined(__NRFX_DOXYGEN__)
/**
 * @brief Function for starting the 32 kHz RTCOUNTER.
 *
 * @param[in] busy_wait True if wait for synchronization operation is to be performed,
 *                      false otherwise.
 *
 * @retval NRFX_SUCCESS        Starting was successful.
 * @retval NRFX_ERROR_INTERNAL The SYSCOUNTER (1 MHz) is running and the operation is not allowed.
 */
nrfx_err_t nrfx_grtc_rtcounter_start(bool busy_wait);

/**
 * @brief Function for starting the 1 MHz SYSCOUNTER.
 *
 * @note This function automatically alocates and marks as used the special-purpose main
 *       capture/compare channel. It should be owned only by the SysCtrl.
 *
 * @note Use auxiliary structure of type @ref nrfx_grtc_channel_t when working with SYSCOUNTER.
 *
 * @param[in]  busy_wait         True if wait for synchronization operation is to be performed,
 *                               false otherwise.
 * @param[out] p_main_cc_channel Pointer to the main capture/compare channel.
 *
 * @retval NRFX_SUCCESS                   Starting was successful.
 * @retval NRFX_ERROR_INVALID_STATE       The GRTC driver is uninitialized.
 * @retval NRFX_ERROR_NO_MEM              No resource available to allocate main channel.
 * @retval NRFX_ERROR_ALREADY_INITIALIZED The GRTC is already running.
 */
nrfx_err_t nrfx_grtc_syscounter_start(bool busy_wait, uint8_t * p_main_cc_channel);

/**
 * @brief Function for performing an action for RTCOUNTER (32 kHz counter).
 *
 * @param[in] action Action to be performed.
 *
 * @retval NRFX_SUCCESS             Starting was successful.
 * @retval NRFX_ERROR_INVALID_STATE The GRTC driver is uninitialized.
 * @retval NRFX_ERROR_INTERNAL      The SYSCOUNTER (1 MHz) is running and the operation is
 *                                  not allowed.
 */
nrfx_err_t nrfx_grtc_rtcounter_action_perform(nrfx_grtc_rtcounter_action_t action);

/**
 * @brief Function for disabling the RTCOUNTER CC channel.
 *
 * @retval NRFX_SUCCESS        The procedure was successful.
 * @retval NRFX_ERROR_INTERNAL The SYSCOUNTER (1 MHz) is running and the operation is not allowed.
 * @retval NRFX_ERROR_TIMEOUT  RTCOUNTER compare interrupt is pending.
 */
nrfx_err_t nrfx_grtc_rtcounter_cc_disable(void);

/**
 * @brief Function for setting the absolute compare value for the RTCOUNTER.
 *
 * @note Currently it is not posiible to use RTCOMPARE/RTCOMPARESYNC interrupts due to issue
 *       in SPU unit (HM-15400).
 *
 * @param[in] handler_data Pointer to the handler data instance structure.
 * @param[in] val          Absolute value to be set in the compare register.
 * @param[in] enable_irq   True if interrupt is to be enabled, false otherwise.
 * @param[in] sync         True if the internal synchronization mechanism shall be used,
 *                         false otherwise.
 *
 * @retval NRFX_SUCCESS        The procedure was successful.
 * @retval NRFX_ERROR_INTERNAL The SYSCOUNTER (1 MHz) is running and the operation is not allowed.
 */
nrfx_err_t nrfx_grtc_rtcounter_cc_absolute_set(nrfx_grtc_rtcounter_handler_data_t * handler_data,
                                               uint64_t                             val,
                                               bool                                 enable_irq,
                                               bool                                 sync);
#endif // defined(NRF_SYSCTRL) || defined(__NRFX_DOXYGEN__)

/**
 * @brief Function for uninitializing the GRTC.
 *
 * @note This function automatically frees all channels used by the driver.
 *       It also marks these channels as unused
*/
void nrfx_grtc_uninit(void);

/**
 * @brief Function for enabling the RTCOUNTER compare interrupt.
 *
 * @param[in] sync True if the internal synchronization mechanism shall be used,
 *                 false otherwise.
 */
void nrfx_grtc_rtcounter_cc_int_enable(bool sync);

/** @brief Function for disabling the RTCOUNTER compare interrupt. */
void nrfx_grtc_rtcounter_cc_int_disable(void);

/**
 * @brief Function for enabling the SYSCOUNTER valid interrupt.
 *
 * @note Currently it is not posiible to use SYSCOUNTERVALID interrupts due to issue
 *       in SPU unit (HM-15400).
 *
 * @param[in] handler   Handler provided by the user. May be NULL.
 * @param[in] p_context User context.
 */
void nrfx_grtc_syscountervalid_int_enable(nrfx_grtc_syscountervalid_handler_t handler,
                                          void *                              p_context);

/** @brief Function for disabling the SYSCOUNTER valid interrupt. */
void nrfx_grtc_syscountervalid_int_disable(void);

/**
 * @brief Function for disabling the SYSCOUNTER CC channel.
 *
 * @note This function marks the specified @p channel as unused.
 *
 * @param[in] channel Channel to be disabled.
 *
 * @retval NRFX_SUCCESS             The procedure was successful.
 * @retval NRFX_ERROR_FORBIDDEN     The domain is not allowed to use specified @p channel.
 * @retval NRFX_ERROR_INVALID_PARAM The specified @p channel is either not allocated or
 *                                  marked as unused.
 * @retval NRFX_ERROR_INTERNAL      The SYSCOUNTER (1 MHz) is not running.
 * @retval NRFX_ERROR_TIMEOUT       SYSCOUNTER compare interrupt is pending on the requested
 *                                  channel.
 */
nrfx_err_t nrfx_grtc_syscounter_cc_disable(uint8_t channel);

/**
 * @brief Function for setting the absolute compare value for the SYSCOUNTER.
 *
 * @note This function marks the specified @p channel as used.
 *
 * @param[in] p_chan_data Pointer to the channel data instance structure.
 * @param[in] val         Absolute value to be set in the compare register.
 * @param[in] enable_irq  True if interrupt is to be enabled, false otherwise.
 *
 * @retval NRFX_SUCCESS             The procedure was successful.
 * @retval NRFX_ERROR_FORBIDDEN     The domain is not allowed to use specified @p channel.
 * @retval NRFX_ERROR_INVALID_PARAM Channel is not allocated.
 * @retval NRFX_ERROR_INTERNAL      The SYSCOUNTER (1 MHz) is not running.
 */
nrfx_err_t nrfx_grtc_syscounter_cc_absolute_set(nrfx_grtc_channel_t * p_chan_data,
                                                uint64_t              val,
                                                bool                  enable_irq);

/**
 * @brief Function for setting the relative compare value for the SYSCOUNTER.
 *
 * @note This function marks the specified @p channel as used.
 *
 * @param[in] p_chan_data Pointer to the channel data instance structure.
 * @param[in] val         Relative value to be set in the compare register.
 * @param[in] enable_irq  True if interrupt is to be enabled, false otherwise.
 * @param[in] reference   Reference type to be used.
 *
 * @retval NRFX_SUCCESS             The procedure was successful.
 * @retval NRFX_ERROR_FORBIDDEN     The domain is not allowed to use specified @p channel.
 * @retval NRFX_ERROR_INVALID_PARAM Channel is not allocated.
 * @retval NRFX_ERROR_INTERNAL      The SYSCOUNTER (1 MHz) is not running.
 */
nrfx_err_t nrfx_grtc_syscounter_cc_relative_set(nrfx_grtc_channel_t *             p_chan_data,
                                                uint32_t                          val,
                                                bool                              enable_irq,
                                                nrfx_grtc_cc_relative_reference_t reference);

/**
 * @brief Function for disabling the SYSCOUNTER compare interrupt.
 *
 * @param[in] channel Compare channel number.
 *
 * @retval NRFX_SUCCESS             The procedure was successful.
 * @retval NRFX_ERROR_FORBIDDEN     The domain is not allowed to use specified @p channel.
 * @retval NRFX_ERROR_INVALID_PARAM The specified @p channel is either not allocated or
 *                                  marked as unused.
 * @retval NRFX_ERROR_INTERNAL      The SYSCOUNTER (1 MHz) is not running.
 */
nrfx_err_t nrfx_grtc_syscounter_cc_int_disable(uint8_t channel);

/**
 * @brief Function for enabling the SYSCOUNTER compare interrupt.
 *
 * @note This function marks the specified @p channel as used.
 *
 * @param[in] channel Compare channel number.
 *
 * @retval NRFX_SUCCESS             The procedure was successful.
 * @retval NRFX_ERROR_FORBIDDEN     The domain is not allowed to use specified @p channel.
 * @retval NRFX_ERROR_INVALID_PARAM Channel is not allocated.
 * @retval NRFX_ERROR_INTERNAL      The SYSCOUNTER (1 MHz) is not running.
 */
nrfx_err_t nrfx_grtc_syscounter_cc_int_enable(uint8_t channel);

/**
 * @brief Function for triggering the SYSCOUNTER capture task
 *
 * @note This function marks the specified @p channel as used.
 *
 * @param[in] channel Capture channel number.
 *
 * @retval NRFX_SUCCESS             The procedure was successful.
 * @retval NRFX_ERROR_FORBIDDEN     The domain is not allowed to use specified @p channel.
 * @retval NRFX_ERROR_INVALID_PARAM Channel is not allocated.
 * @retval NRFX_ERROR_INTERNAL      The SYSCOUNTER (1 MHz) is not running.
 */
nrfx_err_t nrfx_grtc_syscounter_capture(uint8_t channel);

/**
 * @brief Function for reading the GRTC capture/compare register for the specified @p channel.
 *
 * @param[in]  channel Capture channel number.
 * @param[out] p_val   Pointer to the variable where the result is to be stored.
 *
 * @retval NRFX_SUCCESS             The procedure was successful.
 * @retval NRFX_ERROR_FORBIDDEN     The domain is not allowed to use specified @p channel.
 * @retval NRFX_ERROR_INVALID_PARAM The specified @p channel is either not allocated or
 *                                  marked as unused.
 * @retval NRFX_ERROR_INTERNAL      The SYSCOUNTER (1 MHz) is not running.
 */
nrfx_err_t nrfx_grtc_syscounter_cc_value_read(uint8_t channel, uint64_t * p_val);

/**
 * @brief Function for reading the GRTC SYSCOUNTER value.
 *
 * @return SYSCOUNTER (1 MHz) value.
 */
NRFX_STATIC_INLINE uint64_t nrfx_grtc_syscounter_get(void);

/**
 * @brief Function for retrieving the address of the specified GRTC task.
 *
 * @param[in] task GRTC task.
 *
 * @return Task address.
 */
NRFX_STATIC_INLINE uint32_t nrfx_grtc_task_address_get(nrf_grtc_task_t task);

/**
 * @brief Function for retrieving the address of the specified GRTC event.
 *
 * @param[in] event GRTC event.
 *
 * @return Event address.
 */
NRFX_STATIC_INLINE uint32_t nrfx_grtc_event_address_get(nrf_grtc_event_t event);

#if defined(NRF_SYSCTRL)  || defined(__NRFX_DOXYGEN__)
/**
 * @brief Function for reading the GRTC RTCOUNTER value.
 *
 * @return RTCOUNTER (32 kHz) value.
 */
NRFX_STATIC_INLINE uint64_t nrfx_grtc_rtcounter_get(void);
#endif

#ifndef NRFX_DECLARE_ONLY
NRFX_STATIC_INLINE uint64_t nrfx_grtc_syscounter_get(void)
{
    return nrfy_grtc_sys_counter_get(NRF_GRTC);
}

NRFX_STATIC_INLINE uint32_t nrfx_grtc_task_address_get(nrf_grtc_task_t task)
{
    return nrfy_grtc_task_address_get(NRF_GRTC, task);
}

NRFX_STATIC_INLINE uint32_t nrfx_grtc_event_address_get(nrf_grtc_event_t event)
{
    return nrfy_grtc_event_address_get(NRF_GRTC, event);
}

#if defined(NRF_SYSCTRL)
NRFX_STATIC_INLINE uint64_t nrfx_grtc_rtcounter_get(void)
{
    return nrfy_grtc_rt_counter_get(NRF_GRTC);
}
#endif

#endif // NRFX_DECLARE_ONLY

/** @} */

void nrfx_grtc_irq_handler(void);

#ifdef __cplusplus
}
#endif

#endif // NRFX_GRTC_H__
