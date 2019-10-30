/*$$$LICENCE_NORDIC_STANDARD<2019>$$$*/

#ifndef NRFX_EGU_H__
#define NRFX_EGU_H__

#include <nrfx.h>
#include <hal/nrf_egu.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrfx_egu EGU driver
 * @{
 * @ingroup  nrf_egu
 *
 * @brief    Event Generator Unit (EGU) peripheral driver.
 */

/** @brief Structure for the EGU driver instance. */
typedef struct
{
    NRF_EGU_Type * p_reg;        ///< Pointer to a structure with EGU registers.
    uint8_t        drv_inst_idx; ///< Index of the driver instance. For internal use only.
} nrfx_egu_t;

#ifndef __NRFX_DOXYGEN__
enum {
#if NRFX_CHECK(NRFX_EGU0_ENABLED)
    NRFX_EGU0_INST_IDX,
#endif
#if NRFX_CHECK(NRFX_EGU1_ENABLED)
    NRFX_EGU1_INST_IDX,
#endif
#if NRFX_CHECK(NRFX_EGU2_ENABLED)
    NRFX_EGU2_INST_IDX,
#endif
#if NRFX_CHECK(NRFX_EGU3_ENABLED)
    NRFX_EGU3_INST_IDX,
#endif
#if NRFX_CHECK(NRFX_EGU4_ENABLED)
    NRFX_EGU4_INST_IDX,
#endif
#if NRFX_CHECK(NRFX_EGU5_ENABLED)
    NRFX_EGU5_INST_IDX,
#endif
    NRFX_EGU_ENABLED_COUNT
};
#endif

/** @brief Macro for creating an EGU driver instance. */
#define NRFX_EGU_INSTANCE(id)                                 \
{                                                             \
    .p_reg        = NRFX_CONCAT_2(NRF_EGU, id),               \
    .drv_inst_idx = NRFX_CONCAT_3(NRFX_EGU, id, _INST_IDX),   \
}

/**
 * @brief EGU driver event handler.
 *
 * @param[in] event_idx Index of the event that generated the interrupt.
 * @param[in] p_context Context passed to the event handler. Set on initialization.
 */
typedef void (*nrfx_egu_event_handler_t)(uint8_t event_idx, void * p_context);

/**
 * @brief Function for initializing the EGU driver instance.
 *
 * @param[in] p_instance         Pointer to the driver instance structure.
 * @param[in] interrupt_priority Interrupt priority.
 * @param[in] event_handler      Event handler provided by the user. In case of providing NULL,
 *                               event notifications are not done and EGU interrupts are disabled.
 * @param[in] p_context          Context passed to the event handler.
 *
 * @retval NRFX_SUCCESS             Initialization was successful.
 * @retval NRFX_ERROR_INVALID_STATE Driver is already initialized.
 */
nrfx_err_t nrfx_egu_init(nrfx_egu_t const *       p_instance,
                         uint8_t                  interrupt_priority,
                         nrfx_egu_event_handler_t event_handler,
                         void *                   p_context);

/**
 * @brief Function for enabling interrupts on specified events of a given EGU driver instance.
 *
 * @param[in] p_instance Pointer to the driver instance structure.
 * @param[in] mask       Mask of events with interrupts to be enabled.
 */
void nrfx_egu_int_enable(nrfx_egu_t const * p_instance, uint32_t mask);

/**
 * @brief Function for disabling interrupts on specified events of a given EGU driver instance.
 *
 * @param[in] p_instance Pointer to the driver instance structure.
 * @param[in] mask       Mask of events with interrupts to be disabled.
 */
void nrfx_egu_int_disable(nrfx_egu_t const * p_instance, uint32_t mask);

/**
 * @brief Function for triggering an event specified by @c event_idx of a given EGU driver instance.
 *
 * @param[in] p_instance Pointer to the driver instance structure.
 * @param[in] event_idx  Index of the event to be triggered.
 */
void nrfx_egu_trigger(nrfx_egu_t const * p_instance, uint8_t event_idx);

/**
 * @brief Function for uninitializing the EGU driver instance.
 *
 * @param[in] p_instance Pointer to the driver instance structure.
 */
void nrfx_egu_uninit(nrfx_egu_t const * p_instance);

/** @} */

void nrfx_egu_0_irq_handler(void);
void nrfx_egu_1_irq_handler(void);
void nrfx_egu_2_irq_handler(void);
void nrfx_egu_3_irq_handler(void);
void nrfx_egu_4_irq_handler(void);
void nrfx_egu_5_irq_handler(void);

#ifdef __cplusplus
}
#endif

#endif // NRFX_EGU_H__
