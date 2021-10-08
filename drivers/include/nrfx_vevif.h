/*$$$LICENCE_NORDIC_STANDARD<2021>$$$*/

#ifndef NRFX_VEVIF_H__
#define NRFX_VEVIF_H__

#include <nrfx.h>
#include <haly/nrfy_vpr.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrfx_vevif VEVIF driver
 * @{
 * @ingroup nrf_vpr
 * @brief   VEVIF mechanism driver.
 */

/** @brief VEVIF domains. */
typedef enum
{
    NRFX_VEVIF_DOMAIN_SYSCTRL, /**< System Controller domain. */
    NRFX_VEVIF_DOMAIN_FLPR,    /**< Fast Lightweight Processor domain. */
} nrfx_vevif_domain_t;

/**
 * @brief VEVIF event handler callback.
 *
 * @param[in] event_idx VEVIF event index.
 * @param[in] p_context Context passed to the event handler. Set on initialization.
 */
typedef void (*nrfx_vevif_event_handler_t)(uint8_t event_idx, void * p_context);

/**
 * @brief Function for initializing the VEVIF driver.
 *
 * @param[in] interrupt_priority Interrupt priority.
 * @param[in] event_handler      Function to be called on interrupt.
 * @param[in] p_context          Context passed to the event handler.
 *
 * @retval NRFX_SUCCESS                   Driver successfully initialized.
 * @retval NRFX_ERROR_ALREADY_INITIALIZED Driver already initialized.
 */
nrfx_err_t nrfx_vevif_init(uint8_t                    interrupt_priority,
                           nrfx_vevif_event_handler_t event_handler,
                           void *                     p_context);

/** @brief Function for uninitializing the VEVIF driver. */
void nrfx_vevif_uninit(void);

/**
 * @brief Function for enabling interrupts on specified VEVIF events.
 *
 * @param[in] mask Mask of interrupts to be enabled.
 */
void nrfx_vevif_int_enable(uint32_t mask);

/**
 * @brief Function for disabling interrupts on specified VEVIF events.
 *
 * @param[in] mask Mask of interrupts to be disabled.
 */
void nrfx_vevif_int_disable(uint32_t mask);

/** @} */

void nrfx_vevif_irq_handler(void);

#ifdef __cplusplus
}
#endif

#endif // NRFX_VEVIF_H__
