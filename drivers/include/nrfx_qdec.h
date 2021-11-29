/*$$$LICENCE_NORDIC_STANDARD<2015>$$$*/

#ifndef NRFX_QDEC_H__
#define NRFX_QDEC_H__

#include <nrfx.h>
#include <haly/nrfy_qdec.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrfx_qdec QDEC driver
 * @{
 * @ingroup nrf_qdec
 * @brief   Quadrature Decoder (QDEC) peripheral driver.
 */

/** @brief Data structure of the Quadrature Decoder (QDEC) driver instance. */
typedef struct
{
    NRF_QDEC_Type * p_reg;        ///< Pointer to a structure with QDEC registers.
    uint8_t         drv_inst_idx; ///< Index of the driver instance. For internal use only.
} nrfx_qdec_t;

/** @brief QDEC driver instance configuration structure. */
typedef struct
{
    nrfy_qdec_config_t nrfy_config;        /**< QDEC configuration structure. */
    uint8_t            interrupt_priority; /**< QDEC interrupt priority. */
    bool               sample_inten;       /**< Enabling sample ready interrupt. */
    bool               reportper_inten;    /**< Enabling report ready interrupt. */
    bool               skip_gpio_cfg;      /**< Skip GPIO configuration of pins.
                                                When set to true, the driver does not modify
                                                any GPIO parameters of the used pins. Those
                                                parameters are supposed to be configured
                                                externally before the driver is initialized. */
} nrfx_qdec_config_t;

#ifndef __NRFX_DOXYGEN__
enum {
#if NRFX_CHECK(NRFX_QDEC0_ENABLED)
    NRFX_QDEC0_INST_IDX,
#endif
#if NRFX_CHECK(NRFX_QDEC1_ENABLED)
    NRFX_QDEC1_INST_IDX,
#endif
#if NRFX_CHECK(NRFX_QDEC130_ENABLED)
    NRFX_QDEC130_INST_IDX,
#endif
#if NRFX_CHECK(NRFX_QDEC131_ENABLED)
    NRFX_QDEC131_INST_IDX,
#endif
    NRFX_QDEC_ENABLED_COUNT
};
#endif

/** @brief Macro for creating an instance of the QDEC driver. */
#define NRFX_QDEC_INSTANCE(id)                               \
{                                                            \
    .p_reg        = NRF_QDEC##id,                            \
    .drv_inst_idx = NRFX_CONCAT_3(NRFX_QDEC, id, _INST_IDX), \
}

/**
 * @brief QDEC driver default configuration.
 *
 * This configuration sets up QDEC with the following options:
 * - report period: 10 samples
 * - sampling period: 16384 us
 * - LED enabled for 500 us before sampling
 * - LED polarity: active high
 * - debouncing filter disabled
 * - sample ready interrupt disabled
 *
 * @param[in] _pin_a   Pin for A encoder channel input.
 * @param[in] _pin_b   Pin for B encoder channel input.
 * @param[in] _pin_led Pin for LED output.
 */
#define NRFX_QDEC_DEFAULT_CONFIG(_pin_a, _pin_b, _pin_led)          \
{                                                                   \
    .nrfy_config =                                                  \
    {                                                               \
        .reportper = NRF_QDEC_REPORTPER_10,                         \
        .sampleper = NRF_QDEC_SAMPLEPER_16384us,                    \
        .pins =                                                     \
        {                                                           \
            .a_pin   = _pin_a,                                      \
            .b_pin   = _pin_b,                                      \
            .led_pin = _pin_led                                     \
        },                                                          \
        .ledpre    = 500,                                           \
        .ledpol    = NRF_QDEC_LEPOL_ACTIVE_HIGH,                    \
        .dbfen     = NRF_QDEC_DBFEN_DISABLE,                        \
    },                                                              \
    .interrupt_priority    = NRFX_QDEC_DEFAULT_CONFIG_IRQ_PRIORITY, \
    .sample_inten          = false,                                 \
    .reportper_inten       = true                                   \
}

/** @brief QDEC sample event data. */
typedef struct
{
    int8_t value; /**< Sample value. */
} nrfx_qdec_sample_data_evt_t;

/** @brief QDEC report event data. */
typedef struct
{
    int16_t acc;     /**< Accumulated transitions. */
    uint8_t accdbl;  /**< Accumulated double transitions. */
} nrfx_qdec_report_data_evt_t;

/** @brief QDEC event handler structure. */
typedef struct
{
    nrf_qdec_event_t  type; /**< Event type. */
    union
    {
        nrfx_qdec_sample_data_evt_t sample; /**< Sample event data. */
        nrfx_qdec_report_data_evt_t report; /**< Report event data. */
    } data;                                 /**< Union to store event data. */
} nrfx_qdec_event_t;

/**
 * @brief QDEC event handler.
 *
 * @param[in] event     QDEC event structure.
 * @param[in] p_context Context passed to event handler.
 */
typedef void (*nrfx_qdec_event_handler_t)(nrfx_qdec_event_t event, void * p_context);

/**
 * @brief Function for initializing QDEC.
 *
 * @param[in] p_instance Pointer to the driver instance structure.
 * @param[in] p_config   Pointer to the structure with the initial configuration.
 * @param[in] handler    Event handler provided by the user. Must not be NULL.
 * @param[in] p_context  Context passed to event handler.
 *
 * @retval NRFX_SUCCESS             Initialization was successful.
 * @retval NRFX_ERROR_INVALID_STATE The QDEC was already initialized.
 */
nrfx_err_t nrfx_qdec_init(nrfx_qdec_t const *        p_instance,
                          nrfx_qdec_config_t const * p_config,
                          nrfx_qdec_event_handler_t  handler,
                          void *                     p_context);

/**
 * @brief Function for reconfiguring QDEC.
 *
 * @param[in] p_instance Pointer to the driver instance structure.
 * @param[in] p_config   Pointer to the structure with the configuration.
 *
 * @retval NRFX_SUCCESS             Reconfiguration was successful.
 * @retval NRFX_ERROR_BUSY          The driver is enabled and cannot be reconfigured.
 * @retval NRFX_ERROR_INVALID_STATE The driver is uninitialized.
 */
nrfx_err_t nrfx_qdec_reconfigure(nrfx_qdec_t const *        p_instance,
                                 nrfx_qdec_config_t const * p_config);

/**
 * @brief Function for uninitializing QDEC.
 *
 * @note Function asserts if module is uninitialized.
 *
 * @param[in]  p_instance Pointer to the driver instance structure.
 */
void nrfx_qdec_uninit(nrfx_qdec_t const * p_instance);

/**
 * @brief Function for enabling QDEC.
 *
 * @note Function asserts if module is uninitialized or enabled.
 *
 * @param[in] p_instance Pointer to the driver instance structure.
 */
void nrfx_qdec_enable(nrfx_qdec_t const * p_instance);

/**
 * @brief Function for disabling QDEC.
 *
 * @note Function asserts if module is uninitialized or disabled.
 *
 * @param[in] p_instance Pointer to the driver instance structure.
 */
void nrfx_qdec_disable(nrfx_qdec_t const * p_instance);

/**
 * @brief Function for reading accumulated transitions from the QDEC peripheral.
 *
 * @note Function asserts if module is not enabled.
 * @note Accumulators are cleared after reading.
 *
 * @param[in]  p_instance Pointer to the driver instance structure.
 * @param[out] p_acc      Pointer to store the accumulated transitions.
 * @param[out] p_accdbl   Pointer to store the accumulated double transitions.
 */
void nrfx_qdec_accumulators_read(nrfx_qdec_t const * p_instance,
                                 int16_t *           p_acc,
                                 uint8_t *           p_accdbl);

/**
 * @brief Function for returning the address of the specified QDEC task.
 *
 * @param[in] p_instance Pointer to the driver instance structure.
 * @param[in] task       QDEC task.
 *
 * @return Task address.
 */
NRFX_STATIC_INLINE uint32_t nrfx_qdec_task_address_get(nrfx_qdec_t const * p_instance,
                                                       nrf_qdec_task_t     task);

/**
 * @brief Function for returning the address of the specified QDEC event.
 *
 * @param[in] p_instance Pointer to the driver instance structure.
 * @param[in] event      QDEC event.
 *
 * @return Event address.
 */
NRFX_STATIC_INLINE uint32_t nrfx_qdec_event_address_get(nrfx_qdec_t const * p_instance,
                                                        nrf_qdec_event_t    event);

#ifndef NRFX_DECLARE_ONLY
NRFX_STATIC_INLINE uint32_t nrfx_qdec_task_address_get(nrfx_qdec_t const * p_instance,
                                                       nrf_qdec_task_t     task)
{
    return nrfy_qdec_task_address_get(p_instance->p_reg, task);
}

NRFX_STATIC_INLINE uint32_t nrfx_qdec_event_address_get(nrfx_qdec_t const * p_instance,
                                                        nrf_qdec_event_t    event)
{
    return nrfy_qdec_event_address_get(p_instance->p_reg, event);
}
#endif // NRFX_DECLARE_ONLY

/** @} */

void nrfx_qdec_0_irq_handler(void);
void nrfx_qdec_1_irq_handler(void);
void nrfx_qdec_130_irq_handler(void);
void nrfx_qdec_131_irq_handler(void);

#ifdef __cplusplus
}
#endif

#endif // NRFX_QDEC_H__
