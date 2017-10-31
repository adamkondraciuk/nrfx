/*$$$LICENCE_NORDIC_STANDARD<2014>$$$*/

#ifndef NRFX_WDT_H__
#define NRFX_WDT_H__

#include <nrfx.h>
#include <hal/nrf_wdt.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrfx_wdt WDT driver
 * @{
 * @ingroup nrf_wdt
 * @brief   Watchdog Timer (WDT) peripheral driver.
 */

/**@brief Struct for WDT initialization. */
typedef struct
{
    nrf_wdt_behaviour_t    behaviour;          /**< WDT behaviour when CPU in sleep/halt mode. */
    uint32_t               reload_value;       /**< WDT reload value in ms. */
    uint8_t                interrupt_priority; /**< WDT interrupt priority */
} nrfx_wdt_config_t;

/**@brief WDT event handler function type. */
typedef void (*nrfx_wdt_event_handler_t)(void);

/**@brief WDT channel id type. */
typedef nrf_wdt_rr_register_t nrfx_wdt_channel_id;

#define NRFX_WDT_DEAFULT_CONFIG                                               \
    {                                                                         \
        .behaviour          = (nrf_wdt_behaviour_t)NRFX_WDT_CONFIG_BEHAVIOUR, \
        .reload_value       = NRFX_WDT_CONFIG_RELOAD_VALUE,                   \
        .interrupt_priority = NRFX_WDT_CONFIG_IRQ_PRIORITY,                   \
    }
/**
 * @brief This function initializes watchdog.
 *
 * @param[in] p_config          Pointer to the structure with initial configuration.
 * @param[in] wdt_event_handler specifies event handler provided by user.
 *
 * @note Function asserts if wdt_event_handler is NULL.
 *
 * @return    NRFX_SUCCESS on success, otherwise an error code.
 */
nrfx_err_t nrfx_wdt_init(nrfx_wdt_config_t const * p_config,
                         nrfx_wdt_event_handler_t  wdt_event_handler);

/**
 * @brief This function allocate watchdog channel.
 *
 * @note This function can not be called after nrfx_wdt_start(void).
 *
 * @param[out] p_channel_id      ID of granted channel.
 *
 * @return    NRFX_SUCCESS on success, otherwise an error code.
 */
nrfx_err_t nrfx_wdt_channel_alloc(nrfx_wdt_channel_id * p_channel_id);

/**
 * @brief This function starts watchdog.
 *
 * @note After calling this function the watchdog is started, so the user needs to feed all allocated
 *       watchdog channels to avoid reset. At least one watchdog channel has to be allocated.
 */
void nrfx_wdt_enable(void);

/**
 * @brief This function feeds the watchdog.
 *
 * @details Function feeds all allocated watchdog channels.
 */
void nrfx_wdt_feed(void);

/**
 * @brief This function feeds the invidual watchdog channel.
 *
 * @param[in] channel_id      ID of watchdog channel.
 */
void nrfx_wdt_channel_feed(nrfx_wdt_channel_id channel_id);

/**@brief Function for returning a requested task address for the wdt driver module.
 *
 * @param[in]  task                One of the peripheral tasks.
 *
 * @retval     Task address.
 */
__STATIC_INLINE uint32_t nrfx_wdt_ppi_task_addr(nrf_wdt_task_t task)
{
    return nrf_wdt_task_address_get(task);
}

/**@brief Function for returning a requested event address for the wdt driver module.
 *
 * @param[in]  event               One of the peripheral events.
 *
 * @retval     Event address
 */
__STATIC_INLINE uint32_t nrfx_wdt_ppi_event_addr(nrf_wdt_event_t event)
{
    return nrf_wdt_event_address_get(event);
}


void nrfx_wdt_irq_handler(void);


/** @} */

#ifdef __cplusplus
}
#endif

#endif

