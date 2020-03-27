/*$$$LICENCE_NORDIC_STANDARD<2020>$$$*/

#ifndef NRF_EXMIF_H__
#define NRF_EXMIF_H__

#include <nrfx.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrf_exmif_hal EXMIF HAL
 * @{
 * @ingroup nrf_exmif
 * @brief   Hardware access layer for managing the External Memory Interface (EXMIF) peripheral.
 */

/** @brief Maximum EXMIF memory size. */
#define NRF_EXMIF_MAX_MEMORY_DEVICE_SIZE 0x10000000UL

/** @brief Maximum number of EXMIF memory devices. */
#define NRF_EXMIF_MAX_NUMBER_OF_DEVICES 2

/** @brief EXMIF tasks. */
typedef enum
{
    NRF_EXMIF_TASK_START = offsetof(NRF_EXMIF_Type, TASKS_START), ///< Start EXMIF peripheral power and clocks.
    NRF_EXMIF_TASK_STOP  = offsetof(NRF_EXMIF_Type, TASKS_STOP)   ///< Stop EXMIF peripheral power and clocks.
} nrf_exmif_task_t;

/** @brief EXMIF incoming data strobe delay settings. */
typedef enum
{
    NRF_EXMIF_DELAY_NONE   = EXMIF_PROGDELAY_DELAY_NoDelay,     ///< No delay.
    NRF_EXMIF_DELAY_250PS  = EXMIF_PROGDELAY_DELAY_Delay250ps,  ///< Delay is 250 ps.
    NRF_EXMIF_DELAY_500PS  = EXMIF_PROGDELAY_DELAY_Delay500ps,  ///< Delay is 500 ps.
    NRF_EXMIF_DELAY_750PS  = EXMIF_PROGDELAY_DELAY_Delay750ps,  ///< Delay is 750 ps.
    NRF_EXMIF_DELAY_1000PS = EXMIF_PROGDELAY_DELAY_Delay1000ps, ///< Delay is 1 ns.
    NRF_EXMIF_DELAY_1250PS = EXMIF_PROGDELAY_DELAY_Delay1250ps, ///< Delay is 1.25 ns.
    NRF_EXMIF_DELAY_1500PS = EXMIF_PROGDELAY_DELAY_Delay1500ps, ///< Delay is 1.50 ns.
    NRF_EXMIF_DELAY_1750PS = EXMIF_PROGDELAY_DELAY_Delay1750ps, ///< Delay is 1.75 ns.
    NRF_EXMIF_DELAY_2000PS = EXMIF_PROGDELAY_DELAY_Delay2000ps, ///< Delay is 2 ns.
    NRF_EXMIF_DELAY_2250PS = EXMIF_PROGDELAY_DELAY_Delay2250ps, ///< Delay is 2.25 ns.
    NRF_EXMIF_DELAY_2500PS = EXMIF_PROGDELAY_DELAY_Delay2500ps, ///< Delay is 2.50 ns.
    NRF_EXMIF_DELAY_2750PS = EXMIF_PROGDELAY_DELAY_Delay2750ps, ///< Delay is 2.75 ns.
    NRF_EXMIF_DELAY_3000PS = EXMIF_PROGDELAY_DELAY_Delay3000ps  ///< Delay is 3 ns.
} nrf_exmif_delay_t;

/**
 * @brief Structure for configuration of mapping of the memory device to the EXMIF peripheral.
 *
 * @note @p offset is subtracted from incoming address to produce an address used for an external
 *       memory device. It can be calculated using following equation:
 *       offset = incoming AXI address - expected base address of the memory device
 */
typedef struct
{
    uint32_t offset; ///< EXMIF address mapping offset.
    uint32_t size;   ///< EXMIF address mapping memory size.
} nrf_exmif_config_t;

/**
 * @brief Function for activating the specified EXMIF task.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] task  Task to be activated.
 */
NRF_STATIC_INLINE void nrf_exmif_task_trigger(NRF_EXMIF_Type * p_reg,
                                              nrf_exmif_task_t task);

/**
 * @brief Function for getting the address of the specified EXMIF task register.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] task  The specified task.
 *
 * @return Address of the specified task register.
 */
NRF_STATIC_INLINE uint32_t nrf_exmif_task_address_get(NRF_EXMIF_Type const * p_reg,
                                                      nrf_exmif_task_t       task);

/**
 * @brief Function for enabling or disabling EXMIF reset state.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] enable True if reset state is to be enabled, false otherwise.
 */
NRF_STATIC_INLINE void nrf_exmif_reset_set(NRF_EXMIF_Type * p_reg,
                                           bool             enable);

/**
 * @brief Function for enabling or disabling locked APB access to serial memory controller.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] enable True if locked APB access is to be enabled, false otherwise.
 */
NRF_STATIC_INLINE void nrf_exmif_locked_access_set(NRF_EXMIF_Type * p_reg,
                                                   bool             enable);

/**
 * @brief Function for configuring EXMIF delay for incoming strobe.
 *
 * @param[in] p_reg        Pointer to the structure of registers of the peripheral.
 * @param[in] strobe_delay Incoming strobe delay value.
 */
NRF_STATIC_INLINE void nrf_exmif_strobe_delay_set(NRF_EXMIF_Type *  p_reg,
                                                  nrf_exmif_delay_t strobe_delay);

/**
 * @brief Function for configuring mapping of the memory device to EXMIF peripheral.
 *
 * @param[in] p_reg      Pointer to the structure of registers of the peripheral.
 * @param[in] device_idx Device number to configure.
 * @param[in] device     p_device Pointer to the configuration structure of the memory device.
 */
NRF_STATIC_INLINE void nrf_exmif_device_config(NRF_EXMIF_Type *           p_reg,
                                               uint8_t                    device_idx,
                                               nrf_exmif_config_t const * p_device);

/**
 * @brief Function for enabling the EXMIF memory device.
 *
 * @param[in] p_reg      Pointer to the structure of registers of the peripheral.
 * @param[in] device_idx Device number to enable.
 */
NRF_STATIC_INLINE void nrf_exmif_device_enable(NRF_EXMIF_Type * p_reg,
                                               uint8_t          device_idx);

/**
 * @brief Function for disabling the EXMIF memory device.
 *
 * @param[in] p_reg      Pointer to the structure of registers of the peripheral.
 * @param[in] device_idx Device number to disable.
 */
NRF_STATIC_INLINE void nrf_exmif_device_disable(NRF_EXMIF_Type * p_reg,
                                                uint8_t          device_idx);

#ifndef NRF_DECLARE_ONLY

NRF_STATIC_INLINE void nrf_exmif_task_trigger(NRF_EXMIF_Type * p_reg,
                                              nrf_exmif_task_t task)
{
    *((volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)task)) = 0x1UL;
}

NRF_STATIC_INLINE uint32_t nrf_exmif_task_address_get(NRF_EXMIF_Type const * p_reg,
                                                      nrf_exmif_task_t       task)
{
    return (uint32_t)((uint8_t *)p_reg + (uint32_t)task);
}

NRF_STATIC_INLINE void nrf_exmif_reset_set(NRF_EXMIF_Type * p_reg,
                                           bool             enable)
{
    p_reg->RESET = (enable ? (EXMIF_RESET_RESET_Set << EXMIF_RESET_RESET_Pos) :
                             (EXMIF_RESET_RESET_Clear << EXMIF_RESET_RESET_Pos));
}

NRF_STATIC_INLINE void nrf_exmif_locked_access_set(NRF_EXMIF_Type * p_reg,
                                                   bool             enable)
{
    p_reg->LOCKEDACCESS =
        (enable ? (EXMIF_LOCKEDACCESS_ENABLE_Enabled << EXMIF_LOCKEDACCESS_ENABLE_Pos) :
                  (EXMIF_LOCKEDACCESS_ENABLE_Disabled << EXMIF_LOCKEDACCESS_ENABLE_Pos));
}

NRF_STATIC_INLINE void nrf_exmif_strobe_delay_set(NRF_EXMIF_Type *  p_reg,
                                                  nrf_exmif_delay_t strobe_delay)
{
    p_reg->PROGDELAY = ((uint32_t)strobe_delay << EXMIF_PROGDELAY_DELAY_Pos);
}

NRF_STATIC_INLINE void nrf_exmif_device_config(NRF_EXMIF_Type *           p_reg,
                                               uint8_t                    device_idx,
                                               nrf_exmif_config_t const * p_device)
{
    NRFX_ASSERT(p_device->size <= NRF_EXMIF_MAX_MEMORY_DEVICE_SIZE);
    NRFX_ASSERT(device_idx < NRF_EXMIF_MAX_NUMBER_OF_DEVICES);
    switch (device_idx)
    {
        case 0:
            p_reg->ADDRESS1LO = p_device->offset;
            p_reg->ADDRESS1HI = p_device->size;
            break;
        case 1:
            p_reg->ADDRESS2LO = p_device->offset;
            p_reg->ADDRESS2HI = p_device->size;
            break;
        default:
            NRFX_ASSERT(false);
            break;
    }
}

NRF_STATIC_INLINE void nrf_exmif_device_enable(NRF_EXMIF_Type * p_reg,
                                               uint8_t          device_idx)
{
    NRFX_ASSERT(device_idx < NRF_EXMIF_MAX_NUMBER_OF_DEVICES);
    switch (device_idx)
    {
        case 0:
            p_reg->EXTMEMEN = (EXMIF_EXTMEMEN_ENABLE_Enabled << EXMIF_EXTMEMEN_ENABLE_Pos);
            break;
        case 1:
            p_reg->EXTMEM2 = (EXMIF_EXTMEM2_ENABLE_Enabled << EXMIF_EXTMEM2_ENABLE_Pos);
            break;
        default:
            NRFX_ASSERT(false);
            break;
    }
}

NRF_STATIC_INLINE void nrf_exmif_device_disable(NRF_EXMIF_Type * p_reg,
                                                uint8_t          device_idx)
{
    NRFX_ASSERT(device_idx < NRF_EXMIF_MAX_NUMBER_OF_DEVICES);
    switch (device_idx)
    {
        case 0:
            p_reg->EXTMEMEN = (EXMIF_EXTMEMEN_ENABLE_Disabled << EXMIF_EXTMEMEN_ENABLE_Pos);
            break;
        case 1:
            p_reg->EXTMEM2 = (EXMIF_EXTMEM2_ENABLE_Disabled << EXMIF_EXTMEM2_ENABLE_Pos);
            break;
        default:
            NRFX_ASSERT(false);
            break;
    }
}

#endif // NRF_DECLARE_ONLY

/** @} */

#ifdef __cplusplus
}
#endif

#endif // NRF_EXMIF_H__
