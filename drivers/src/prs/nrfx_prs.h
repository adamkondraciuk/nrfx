/*$$$LICENCE_NORDIC_STANDARD<2017>$$$*/

#ifndef NRFX_PRS_H__
#define NRFX_PRS_H__

#include <nrfx.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrfx_prs Peripheral Resource Sharing (PRS)
 * @{
 * @ingroup nrfx
 *
 * @brief Peripheral Resource Sharing interface (PRS).
 */

#if defined(NRF51)
    // SPI0, TWI0
    #define NRFX_PRS_BOX_0_ADDR     NRF_SPI0
    // SPI1, SPIS1, TWI1
    #define NRFX_PRS_BOX_1_ADDR     NRF_SPI1
#elif defined(NRF52805_XXAA) || defined(NRF52810_XXAA)
    // TWIM0, TWIS0, TWI0
    #define NRFX_PRS_BOX_0_ADDR     NRF_TWIM0
    // SPIM0, SPIS0, SPI0
    #define NRFX_PRS_BOX_1_ADDR     NRF_SPIM0
    // UARTE0, UART0
    #define NRFX_PRS_BOX_2_ADDR     NRF_UARTE0
#elif defined(NRF52811_XXAA)
    // TWIM0, TWIS0, TWI0, SPIM1, SPIS1, SPI1
    #define NRFX_PRS_BOX_0_ADDR     NRF_TWIM0
    // SPIM0, SPIS0, SPI0
    #define NRFX_PRS_BOX_1_ADDR     NRF_SPIM0
    // UART0, UARTE0
    #define NRFX_PRS_BOX_2_ADDR     NRF_UART0
#elif defined(NRF52820_XXAA)
    // SPIM0, SPIS0, TWIM0, TWIS0, SPI0, TWI0
    #define NRFX_PRS_BOX_0_ADDR     NRF_SPIM0
    // SPIM1, SPIS1, TWIM1, TWIS1, SPI1, TWI1
    #define NRFX_PRS_BOX_1_ADDR     NRF_SPIM1
    // UARTE0, UART0
    #define NRFX_PRS_BOX_2_ADDR     NRF_UARTE0
#elif defined(NRF52832_XXAA) || defined(NRF52832_XXAB) || \
      defined(NRF52833_XXAA) || defined(NRF52840_XXAA)
    // SPIM0, SPIS0, TWIM0, TWIS0, SPI0, TWI0
    #define NRFX_PRS_BOX_0_ADDR     NRF_SPIM0
    // SPIM1, SPIS1, TWIM1, TWIS1, SPI1, TWI1
    #define NRFX_PRS_BOX_1_ADDR     NRF_SPIM1
    // SPIM2, SPIS2, SPI2
    #define NRFX_PRS_BOX_2_ADDR     NRF_SPIM2
    // COMP, LPCOMP
    #define NRFX_PRS_BOX_3_ADDR     NRF_COMP
    // UARTE0, UART0
    #define NRFX_PRS_BOX_4_ADDR     NRF_UARTE0
#elif defined(NRF5340_XXAA_APPLICATION)
    // SPIM0, SPIS0, TWIM0, TWIS0, UARTE0
    #define NRFX_PRS_BOX_0_ADDR     NRF_UARTE0
    // SPIM1, SPIS1, TWIM1, TWIS1, UARTE1
    #define NRFX_PRS_BOX_1_ADDR     NRF_UARTE1
    // SPIM2, SPIS2, TWIM2, TWIS2, UARTE2
    #define NRFX_PRS_BOX_2_ADDR     NRF_UARTE2
    // SPIM3, SPIS3, TWIM3, TWIS3, UARTE3
    #define NRFX_PRS_BOX_3_ADDR     NRF_UARTE3
    // COMP, LPCOMP
    #define NRFX_PRS_BOX_4_ADDR     NRF_COMP
#elif defined(NRF5340_XXAA_NETWORK)
    // SPIM0, SPIS0, TWIM0, TWIS0, UARTE0
    #define NRFX_PRS_BOX_0_ADDR     NRF_UARTE0
#elif defined(NRF91_SERIES)
    // UARTE0, SPIM0, SPIS0, TWIM0, TWIS0
    #define NRFX_PRS_BOX_0_ADDR     NRF_UARTE0
    // UARTE1, SPIM1, SPIS1, TWIM1, TWIS1
    #define NRFX_PRS_BOX_1_ADDR     NRF_UARTE1
    // UARTE2, SPIM2, SPIS2, TWIM2, TWIS2
    #define NRFX_PRS_BOX_2_ADDR     NRF_UARTE2
    // UARTE3, SPIM3, SPIS3, TWIM3, TWIS3
    #define NRFX_PRS_BOX_3_ADDR     NRF_UARTE3
#elif !defined(NRF_PRS_BOX_EXT)
    #error "Unknown device."
#endif

/**
 * @brief Function for acquiring shared peripheral resources associated with
 *        the specified peripheral.
 *
 * Certain resources and registers are shared among peripherals that have
 * the same ID (for example: SPI0, SPIM0, SPIS0, TWI0, TWIM0, and TWIS0 in
 * nRF52832). Only one of them can be utilized at a given time. This function
 * reserves proper resources to be used by the specified peripheral.
 * If NRFX_PRS_ENABLED is set to a non-zero value, IRQ handlers for peripherals
 * that are sharing resources with others are implemented by the @ref nrfx_prs
 * module instead of individual drivers. The drivers must then specify their
 * interrupt handling routines and register them by using this function.
 *
 * @param[in] p_base_addr Requested peripheral base pointer.
 * @param[in] irq_handler Interrupt handler to register.
 *
 * @retval NRFX_SUCCESS    If resources were acquired successfully or the
 *                         specified peripheral is not handled by the PRS
 *                         subsystem and there is no need to acquire resources
 *                         for it.
 * @retval NRFX_ERROR_BUSY If resources were already acquired.
 */
nrfx_err_t nrfx_prs_acquire(void       const * p_base_addr,
                            nrfx_irq_handler_t irq_handler);

/**
 * @brief Function for releasing shared resources reserved previously by
 *        @ref nrfx_prs_acquire() for the specified peripheral.
 *
 * @param[in] p_base_addr Released peripheral base pointer.
 */
void nrfx_prs_release(void const * p_base_addr);

/** @} */

/*
 * Declare interrupt handlers for all enabled driver instances in the following format:
 * nrfx_\<periph_name\>_\<idx\>_irq_handler (for example, nrfx_prs_box_0_irq_handler).
 *
 * A specific interrupt handler for the driver instance can be retrieved by using
 * the NRFX_PRS_BOX_INST_HANDLER_GET macro.
 *
 * Here is a sample of using the NRFX_PRS_BOX_INST_HANDLER_GET macro to directly map
 * an interrupt handler in a Zephyr application:
 *
 * IRQ_DIRECT_CONNECT(NRFX_IRQ_NUMBER_GET(NRF_PRS_BOX_INST_GET(\<instance_index\>)), \<priority\>,
 *                    NRFX_PRS_BOX_INST_HANDLER_GET(\<instance_index\>), 0);
 */
NRFX_INSTANCE_IRQ_HANDLERS_DECLARE(PRS_BOX_, prs_box)

#ifdef __cplusplus
}
#endif

#endif // NRFX_PRS_H__
