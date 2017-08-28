/*$$$LICENCE_NORDIC_STANDARD<2015>$$$*/
/**
 * @addtogroup nrf_pdm PDM HAL and driver
 * @ingroup    nrf_drivers
 * @brief      @tagAPI52 Pulse density modulation (PDM) interface APIs.
 *
 * The PDM HAL provides basic APIs for accessing the registers of the PDM interface peripheral.
 * The PDM driver provides APIs on a higher level.
 *
 * @defgroup nrf_drv_pdm PDM driver
 * @{
 * @ingroup  nrf_pdm
 *
 * @brief    @tagAPI52 Pulse density modulation (PDM) interface driver.
 */


#ifndef NRF_DRV_PDM_H__
#define NRF_DRV_PDM_H__

#include <nrfx.h>
#include <hal/nrf_pdm.h>

#ifdef __cplusplus
extern "C" {
#endif


#define NRF_PDM_MAX_BUFFER_SIZE 32767


/**
 * @brief PDM error type.
 */
typedef enum
{
    PDM_NO_ERROR = 0,
    PDM_ERROR_OVERFLOW = 1
} nrf_drv_pdm_error_t;

/**
 * @brief PDM event structure.
 */
typedef struct
{
    bool                buffer_requested;  ///< Buffer request flag.
    int16_t *           buffer_released;   ///< Pointer to the released buffer. Can be NULL.
    nrf_drv_pdm_error_t error;             ///< Error type.
} nrf_drv_pdm_evt_t;

/**
 * @brief PDM interface driver configuration structure.
 */
typedef struct
{
    nrf_pdm_mode_t mode;               ///< Interface operation mode.
    nrf_pdm_edge_t edge;               ///< Sampling mode.
    uint8_t        pin_clk;            ///< CLK pin.
    uint8_t        pin_din;            ///< DIN pin.
    nrf_pdm_freq_t clock_freq;         ///< Clock frequency.
    nrf_pdm_gain_t gain_l;             ///< Left channel gain.
    nrf_pdm_gain_t gain_r;             ///< Right channel gain.
    uint8_t        interrupt_priority; ///< Interrupt priority.
} nrf_drv_pdm_config_t;


/**
 * @brief Macro for setting @ref nrf_drv_pdm_config_t to default settings
 *        in single ended mode.
 *
 * @param PIN_CLK  CLK output pin.
 * @param PIN_DIN  DIN input pin.
 */
#define NRF_DRV_PDM_DEFAULT_CONFIG(PIN_CLK, PIN_DIN) \
{                                                                              \
    .mode               = (nrf_pdm_mode_t)PDM_CONFIG_MODE,                     \
    .edge               = (nrf_pdm_edge_t)PDM_CONFIG_EDGE,                     \
    .pin_clk            = PIN_CLK,                                             \
    .pin_din            = PIN_DIN,                                             \
    .clock_freq         = (nrf_pdm_freq_t)PDM_CONFIG_CLOCK_FREQ,               \
    .gain_l             = NRF_PDM_GAIN_DEFAULT,                                \
    .gain_r             = NRF_PDM_GAIN_DEFAULT,                                \
    .interrupt_priority = PDM_CONFIG_IRQ_PRIORITY                              \
}


/**
 * @brief   Handler for PDM interface ready events.
 *
 * This event handler is called on buffer request, error or when a buffer is full
 * and ready to be processed.
 *
 * @param[in] evt    Pointer to the PDM event structure.
 */
typedef void (*nrf_drv_pdm_event_handler_t)(nrf_drv_pdm_evt_t const * const evt);


/**
 * @brief Function for initializing the PDM interface.
 *
 * @param[in] p_config      Pointer to a configuration structure. Cannot be NULL.
 * @param[in] event_handler Event handler provided by the user. Cannot be NULL.
 *
 * @retval    NRFX_SUCCESS If initialization was successful.
 * @retval    NRFX_ERROR_INVALID_STATE If the driver is already initialized.
 * @retval    NRFX_ERROR_INVALID_PARAM If invalid parameters were specified.
 */
ret_code_t nrf_drv_pdm_init(nrf_drv_pdm_config_t const * p_config,
                            nrf_drv_pdm_event_handler_t  event_handler);


/**
 * @brief Function for uninitializing the PDM interface.
 *
 * This function stops PDM sampling, if it is in progress.
 */
void nrf_drv_pdm_uninit(void);


/**
 * @brief Function for getting the address of a PDM interface task.
 *
 * @param[in]  task Task.
 *
 * @return     Task address.
 */
__STATIC_INLINE uint32_t nrf_drv_pdm_task_address_get(nrf_pdm_task_t task)
{
    return nrf_pdm_task_address_get(task);
}


/**
 * @brief Function for getting the state of the PDM interface.
 *
 * @retval TRUE  If the PDM interface is enabled.
 * @retval FALSE If the PDM interface is disabled.
 */
__STATIC_INLINE bool nrf_drv_pdm_enable_check()
{
    return nrf_pdm_enable_check();
}


/**
 * @brief Function for starting PDM sampling.
 *
 * @retval NRFX_SUCCESS    If sampling was started successfully or was already in progress.
 * @retval NRFX_ERROR_BUSY If a previous start/stop operation is in progress.
 */
ret_code_t nrf_drv_pdm_start(void);


/**
 * @brief   Function for stopping PDM sampling.
 *
 * When this function is called, the PDM interface is stopped after finishing
 * the current frame.
 * The event handler function might be called once more after calling this function.
 *
 * @retval NRFX_SUCCESS    If sampling was stopped successfully or was already stopped before.
 * @retval NRFX_ERROR_BUSY If a previous start/stop operation is in progress.
 */
ret_code_t nrf_drv_pdm_stop(void);

/**
 * @brief   Function for supplying the sample buffer.
 *
 * Call this function after every buffer request event.
 *
 * @param[in]  buffer        Pointer to the receive buffer. Cannot be NULL.
 * @param[in]  buffer_length Length of the receive buffer in 16-bit words.
 *
 * @retval NRFX_SUCCESS             If the buffer was applied successfully.
 * @retval NRFX_ERROR_BUSY          If the buffer was already supplied or the peripheral is currently being stopped.
 * @retval NRFX_ERROR_INVALID_STATE If the driver was not initialized.
 * @retval NRFX_ERROR_INVALID_PARAM If invalid parameters were provided.
 */
ret_code_t nrf_drv_pdm_buffer_set(int16_t * buffer, uint16_t buffer_length);


void nrfx_pdm_irq_handler(void);


#ifdef __cplusplus
}
#endif

#endif // NRF_DRV_PDM_H__

/** @} */
