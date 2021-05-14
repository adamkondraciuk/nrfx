/*$$$LICENCE_NORDIC_STANDARD<2020>$$$*/

#ifndef NRF_CPUCONF_H__
#define NRF_CPUCONF_H__

#include <nrfx.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrf_cpuconf_hal CPUCONF HAL
 * @{
 * @ingroup nrf_cpuconf
 * @brief   Hardware access layer (HAL) for managing the CPU configuration (CPUCONF) peripheral.
 */

/** @brief CPU configuration tasks. */
typedef enum
{
    NRF_CPUCONF_TASK_ERASECACHE = offsetof(NRF_CPUCONF_Type, TASKS_ERASECACHE) /**< Erase the caches used by the CPU. */
} nrf_cpuconf_task_t;

/**
 * @brief Function for activating the specified CPUCONF task.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] task  Task to be activated.
 */
NRF_STATIC_INLINE void nrf_cpuconf_task_trigger(NRF_CPUCONF_Type * p_reg, nrf_cpuconf_task_t task);

/**
 * @brief Function for setting the CPU start enable.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] enable True if CPU should be started, false if it should be stopped.
 */
NRF_STATIC_INLINE void nrf_cpuconf_cpu_start_set(NRF_CPUCONF_Type * p_reg, bool enable);

/**
 * @brief Function for checking whether the CPU start is enabled.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @retval true  CPU is started.
 * @retval false CPU is stopped.
 */
NRF_STATIC_INLINE bool nrf_cpuconf_cpu_start_check(NRF_CPUCONF_Type const * p_reg);

/**
 * @brief Function for setting the CPU wait state.
 *
 * When the CPU wait state is enabled, the CPU will be stopped even if the CPU clock signal is present.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] wait  True if CPU should wait, false otherwise.
 */
NRF_STATIC_INLINE void nrf_cpuconf_cpu_wait_set(NRF_CPUCONF_Type * p_reg, bool wait);

/**
 * @brief Function for checking whether the CPU wait is enabled.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @retval true  CPU is waiting.
 * @retval false CPU is not waiting.
 */
NRF_STATIC_INLINE bool nrf_cpuconf_cpu_wait_check(NRF_CPUCONF_Type const * p_reg);

/**
 * @brief Function for setting the initial value of the secure Vector Table Offset Register after CPU reset.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] vtor  Value of the secure Vector Table Offset Register to be set.
 */
NRF_STATIC_INLINE void nrf_cpuconf_secure_vtor_set(NRF_CPUCONF_Type * p_reg, uint32_t vtor);

/**
 * @brief Function for getting the initial value of the secure Vector Table Offset Register after CPU reset.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Initial value of the secure VTOR.
 */
NRF_STATIC_INLINE uint32_t nrf_cpuconf_secure_vtor_get(NRF_CPUCONF_Type const * p_reg);

/**
 * @brief Function for setting the initial value of the non-secure Vector Table Offset Register after CPU reset.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] vtor  Value of the non-secure Vector Table Offset Register to be set.
 */
NRF_STATIC_INLINE void nrf_cpuconf_nonsecure_vtor_set(NRF_CPUCONF_Type * p_reg, uint32_t vtor);

/**
 * @brief Function for getting the initial value of the non-secure Vector Table Offset Register after CPU reset.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Initial value of the non-secure VTOR.
 */
NRF_STATIC_INLINE uint32_t nrf_cpuconf_nonsecure_vtor_get(NRF_CPUCONF_Type const * p_reg);

#ifndef NRF_DECLARE_ONLY

NRF_STATIC_INLINE void nrf_cpuconf_task_trigger(NRF_CPUCONF_Type * p_reg, nrf_cpuconf_task_t task)
{
    *((volatile uint32_t *)((uint8_t *)p_reg + (uint32_t)task)) = 0x1UL;
}

NRF_STATIC_INLINE void nrf_cpuconf_cpu_start_set(NRF_CPUCONF_Type * p_reg, bool enable)
{
    p_reg->CPUSTART = (enable ? CPUCONF_CPUSTART_EN_Started : CPUCONF_CPUSTART_EN_Stopped)
                      << CPUCONF_CPUSTART_EN_Pos;
}

NRF_STATIC_INLINE bool nrf_cpuconf_cpu_start_check(NRF_CPUCONF_Type const * p_reg)
{
    return ((p_reg->CPUSTART & CPUCONF_CPUSTART_EN_Msk) >> CPUCONF_CPUSTART_EN_Pos)
           == CPUCONF_CPUSTART_EN_Started;
}

NRF_STATIC_INLINE void nrf_cpuconf_cpu_wait_set(NRF_CPUCONF_Type * p_reg, bool wait)
{
    p_reg->CPUWAIT = (wait ? CPUCONF_CPUWAIT_EN_Enabled : CPUCONF_CPUWAIT_EN_Disabled)
                     << CPUCONF_CPUWAIT_EN_Pos;
}

NRF_STATIC_INLINE bool nrf_cpuconf_cpu_wait_check(NRF_CPUCONF_Type const * p_reg)
{
    return ((p_reg->CPUWAIT & CPUCONF_CPUWAIT_EN_Msk) >> CPUCONF_CPUWAIT_EN_Pos)
           == CPUCONF_CPUWAIT_EN_Enabled;
}

NRF_STATIC_INLINE void nrf_cpuconf_secure_vtor_set(NRF_CPUCONF_Type * p_reg, uint32_t vtor)
{
    p_reg->INITSVTOR = vtor;
}

NRF_STATIC_INLINE uint32_t nrf_cpuconf_secure_vtor_get(NRF_CPUCONF_Type const * p_reg)
{
    return p_reg->INITSVTOR;
}

NRF_STATIC_INLINE void nrf_cpuconf_nonsecure_vtor_set(NRF_CPUCONF_Type * p_reg, uint32_t vtor)
{
    p_reg->INITNSVTOR = vtor;
}

NRF_STATIC_INLINE uint32_t nrf_cpuconf_nonsecure_vtor_get(NRF_CPUCONF_Type const * p_reg)
{
    return p_reg->INITNSVTOR;
}
#endif

/** @} */

#ifdef __cplusplus
}
#endif

#endif // NRF_CPUCONF_H__
