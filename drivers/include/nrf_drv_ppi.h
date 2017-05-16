/*$$$LICENCE_NORDIC_STANDARD<2015>$$$*/
#ifndef NRF_DRV_PPI_H
#define NRF_DRV_PPI_H

/*lint ++flb "Enter library region" */
#include <nrfx.h>
#include <hal/nrf_ppi.h>

/** @file
 *
 * @addtogroup nrf_ppi PPI HAL and driver
 * @ingroup nrf_drivers
 * @brief Programmable Peripheral Interconnect (PPI) APIs.
 *
 * @details The PPI HAL provides basic APIs for accessing the registers of the PPI.
 * The PPI driver provides APIs on a higher level.
 *
 * @defgroup nrf_drv_ppi PPI driver
 * @{
 * @ingroup  nrf_ppi
 *
 * @brief Programmable Peripheral Interconnect (PPI) driver.
 */


#ifdef SOFTDEVICE_PRESENT
    #include <nrf_sd_def.h>
#else
    #define SD_PPI_RESTRICTED         0uL /**< 1 if PPI peripheral is restricted, 0 otherwise. */
    #define SD_PPI_CHANNELS_USED      0uL /**< PPI channels utilized by SotfDevice (not available to th spplication). */
    #define SD_PPI_GROUPS_USED        0uL /**< PPI groups utilized by SotfDevice (not available to th spplication). */
    #define SD_TIMERS_USED            0uL /**< Timers used by SoftDevice. */
    #define SD_SWI_USED               0uL /**< Software interrupts used by SoftDevice. */
#endif

#ifdef GAZELL_PRESENT
    #include <nrf_gzll_resources.h>
#else
    #define GZLL_PPI_CHANNELS_USED    0uL /**< PPI channels utilized by Gazell (not available to th spplication). */
    #define GZLL_TIMERS_USED          0uL /**< Timers used by Gazell. */
    #define GZLL_SWI_USED             0uL /**< Software interrupts used by Gazell */
#endif

#ifdef ESB_PRESENT
    #include <nrf_esb_resources.h>
#else
    #define ESB_PPI_CHANNELS_USED    0uL /**< PPI channels utilized by ESB (not available to th spplication). */
    #define ESB_TIMERS_USED          0uL /**< Timers used by ESB. */
    #define ESB_SWI_USED             0uL /**< Software interrupts used by ESB */
#endif

#define NRF_PPI_CHANNELS_USED (SD_PPI_CHANNELS_USED | GZLL_PPI_CHANNELS_USED | ESB_PPI_CHANNELS_USED)
#define NRF_PPI_GROUPS_USED   (SD_PPI_GROUPS_USED)
#define NRF_SWI_USED          (SD_SWI_USED | GZLL_SWI_USED | ESB_SWI_USED)
#define NRF_TIMERS_USED       (SD_TIMERS_USED | GZLL_TIMERS_USED | ESB_TIMERS_USED)


#ifdef __cplusplus
extern "C" {
#endif

#if PPI_CH_NUM > 16
#define NRF_PPI_ALL_APP_CHANNELS_MASK   ((uint32_t)0xFFFFFFFFuL & ~(NRF_PPI_CHANNELS_USED))  /**< All PPI channels available to the application. */
#define NRF_PPI_PROG_APP_CHANNELS_MASK  ((uint32_t)0x000FFFFFuL & ~(NRF_PPI_CHANNELS_USED))  /**< Programmable PPI channels available to the application. */
#else
#define NRF_PPI_ALL_APP_CHANNELS_MASK   ((uint32_t)0xFFF0FFFFuL & ~(NRF_PPI_CHANNELS_USED))  /**< All PPI channels available to the application. */
#define NRF_PPI_PROG_APP_CHANNELS_MASK  ((uint32_t)0x0000FFFFuL & ~(NRF_PPI_CHANNELS_USED))  /**< Programmable PPI channels available to the application. */
#endif

#define NRF_PPI_ALL_APP_GROUPS_MASK     (((1uL << PPI_GROUP_NUM) - 1) & ~(NRF_PPI_GROUPS_USED))    /**< All PPI groups available to the application. */


/**@brief Function for initializing PPI module.
 *
 * @retval     NRFX_SUCCESS                           If the module was successfully initialized.
 * @retval     NRFX_ERROR_MODULE_ALREADY_INITIALIZED  If the module has already been initialized.
 */
uint32_t nrf_drv_ppi_init(void);

/**@brief Function for uninitializing the PPI module.
 *
 * This function also disables all channels and clears the channel groups.
 *
 * @retval     NRFX_SUCCESS             If the module was successfully uninitialized.
 * @retval     NRFX_ERROR_INVALID_STATE If the module has not been initialized yet.
 * @retval     NRFX_ERROR_INTERNAL      If the channels or groups could not be disabled.
 */
uint32_t nrf_drv_ppi_uninit(void);

/**@brief Function for allocating a PPI channel.
 * @details This function allocates the first unused PPI channel.
 *
 * @param[out] p_channel               Pointer to the PPI channel that has been allocated.
 *
 * @retval     NRFX_SUCCESS             If the channel was successfully allocated.
 * @retval     NRFX_ERROR_NO_MEM        If there is no available channel to be used.
 */
uint32_t nrf_drv_ppi_channel_alloc(nrf_ppi_channel_t * p_channel);

/**@brief Function for freeing a PPI channel.
 * @details This function also disables the chosen channel.
 *
 * @param[in]  channel                 PPI channel to be freed.
 *
 * @retval     NRFX_SUCCESS             If the channel was successfully freed.
 * @retval     NRFX_ERROR_INVALID_PARAM If the channel is not user-configurable.
 */
uint32_t nrf_drv_ppi_channel_free(nrf_ppi_channel_t channel);

/**@brief Function for assigning task and event endpoints to the PPI channel.
 *
 * @param[in]  channel                 PPI channel to be assigned endpoints.
 *
 * @param[in]  eep                     Event endpoint address.
 *
 * @param[in]  tep                     Task endpoint address.
 *
 * @retval     NRFX_SUCCESS             If the channel was successfully assigned.
 * @retval     NRFX_ERROR_INVALID_STATE If the channel is not allocated for the user.
 * @retval     NRFX_ERROR_INVALID_PARAM If the channel is not user-configurable.
 */
uint32_t nrf_drv_ppi_channel_assign(nrf_ppi_channel_t channel, uint32_t eep, uint32_t tep);

/**@brief Function for assigning or clearing fork endpoint to the PPI channel.
 *
 * @param[in]  channel                 PPI channel to be assigned endpoints.
 *
 * @param[in]  fork_tep                Fork task endpoint address or 0 to clear.
 *
 * @retval     NRFX_SUCCESS             If the channel was successfully assigned.
 * @retval     NRFX_ERROR_INVALID_STATE If the channel is not allocated for the user.
 * @retval     NRFX_ERROR_INVALID_PARAM If the channel is not user-configurable.
 * @retval     NRFX_ERROR_NOT_SUPPORTED If function is not supported.
 */
uint32_t nrf_drv_ppi_channel_fork_assign(nrf_ppi_channel_t channel, uint32_t fork_tep);

/**@brief Function for enabling a PPI channel.
 *
 * @param[in]  channel                 PPI channel to be enabled.
 *
 * @retval     NRFX_SUCCESS             If the channel was successfully enabled.
 * @retval     NRFX_ERROR_INVALID_STATE If the user-configurable channel is not allocated.
 * @retval     NRFX_ERROR_INVALID_PARAM If the channel cannot be enabled by the user.
 */
uint32_t nrf_drv_ppi_channel_enable(nrf_ppi_channel_t channel);

/**@brief Function for disabling a PPI channel.
 *
 * @param[in]  channel                 PPI channel to be disabled.
 *
 * @retval     NRFX_SUCCESS             If the channel was successfully disabled.
 * @retval     NRFX_ERROR_INVALID_STATE If the user-configurable channel is not allocated.
 * @retval     NRFX_ERROR_INVALID_PARAM If the channel cannot be disabled by the user.
 */
uint32_t nrf_drv_ppi_channel_disable(nrf_ppi_channel_t channel);

/**@brief Function for allocating a PPI channel group.
 * @details This function allocates the first unused PPI group.
 *
 * @param[out] p_group                 Pointer to the PPI channel group that has been allocated.
 *
 * @retval     NRFX_SUCCESS             If the channel group was successfully allocated.
 * @retval     NRFX_ERROR_NO_MEM        If there is no available channel group to be used.
 */
uint32_t nrf_drv_ppi_group_alloc(nrf_ppi_channel_group_t * p_group);

/**@brief Function for freeing a PPI channel group.
 * @details This function also disables the chosen group.
 *
 * @param[in]  group                   PPI channel group to be freed.
 *
 * @retval     NRFX_SUCCESS             If the channel group was successfully freed.
 * @retval     NRFX_ERROR_INVALID_PARAM If the channel group is not user-configurable.
 */
uint32_t nrf_drv_ppi_group_free(nrf_ppi_channel_group_t group);

/**@brief  Compute a channel mask for NRF_PPI registers.
 *
 * @param[in]  channel  Channel number to transform to a mask.
 *
 * @retval     Channel mask.
 */
__STATIC_INLINE uint32_t nrf_drv_ppi_channel_to_mask(nrf_ppi_channel_t channel)
{
    return (1uL << (uint32_t) channel);
}

/**@brief Function for including multiple PPI channels in a channel group.
 *
 * @param[in]  channel_mask            PPI channels to be added.
 * @param[in]  group                   Channel group in which to include the channels.
 *
 * @retval     NRFX_SUCCESS             If the channels was successfully included.
 */
uint32_t nrf_drv_ppi_channels_include_in_group(uint32_t channel_mask,
                                               nrf_ppi_channel_group_t group);

/**@brief Function for including a PPI channel in a channel group.
 *
 * @param[in]  channel                 PPI channel to be added.
 * @param[in]  group                   Channel group in which to include the channel.
 *
 * @retval     NRFX_SUCCESS             If the channel was successfully included.
 */
__STATIC_INLINE uint32_t nrf_drv_ppi_channel_include_in_group(nrf_ppi_channel_t       channel,
                                                              nrf_ppi_channel_group_t group)
{
    return nrf_drv_ppi_channels_include_in_group(nrf_drv_ppi_channel_to_mask(channel), group);
}

/**@brief Function for removing multiple PPI channels from a channel group.
 *
 * @param[in]  channel_mask            PPI channels to be removed.
 * @param[in]  group                   Channel group from which to remove the channels.
 *
 * @retval     NRFX_SUCCESS             If the channel was successfully removed.
 */
uint32_t nrf_drv_ppi_channels_remove_from_group(uint32_t channel_mask,
                                                nrf_ppi_channel_group_t group);

/**@brief Function for removing a PPI channel from a channel group.
 *
 * @param[in]  channel                 PPI channel to be removed.
 * @param[in]  group                   Channel group from which to remove the channel.
 *
 * @retval     NRFX_SUCCESS             If the channel was successfully removed.
 */
__STATIC_INLINE uint32_t nrf_drv_ppi_channel_remove_from_group(nrf_ppi_channel_t       channel,
                                                               nrf_ppi_channel_group_t group)
{
    return nrf_drv_ppi_channels_remove_from_group(nrf_drv_ppi_channel_to_mask(channel), group);
}

/**@brief Function for clearing a PPI channel group.
 *
 * @param[in]  group                   Channel group to be cleared.
 *
 * @retval     NRFX_SUCCESS             If the group was successfully cleared.
 */
__STATIC_INLINE uint32_t nrf_drv_ppi_group_clear(nrf_ppi_channel_group_t group)
{
    return nrf_drv_ppi_channels_remove_from_group(NRF_PPI_ALL_APP_CHANNELS_MASK, group);
}

/**@brief Function for enabling a PPI channel group.
 *
 * @param[in]  group                   Channel group to be enabled.
 *
 * @retval     NRFX_SUCCESS             If the group was successfully enabled.
 */
uint32_t nrf_drv_ppi_group_enable(nrf_ppi_channel_group_t group);

/**@brief Function for disabling a PPI channel group.
 *
 * @param[in]  group                   Channel group to be disabled.
 *
 * @retval     NRFX_SUCCESS             If the group was successfully disabled.
 */
uint32_t nrf_drv_ppi_group_disable(nrf_ppi_channel_group_t group);

/**
 * @brief Function for getting the address of a PPI task.
 *
 * @param[in]  task                      Task.
 *
 * @retval     Task address.
 */
__STATIC_INLINE uint32_t nrf_drv_ppi_task_addr_get(nrf_ppi_task_t task)
{
    return (uint32_t) nrf_ppi_task_address_get(task);
}

/**
 * @brief Function for getting the address of a PPI group enable task.
 *
 * @param[in]  group                     PPI channel group
 *
 * @retval     Task address.
 */
__STATIC_INLINE uint32_t nrf_drv_ppi_task_addr_group_enable_get(nrf_ppi_channel_group_t group)
{
    return (uint32_t) nrf_ppi_task_group_enable_address_get(group);
}

/**
 * @brief Function for getting the address of a PPI group enable task.
 *
 * @param[in]  group                     PPI channel group
 *
 * @retval     Task address.
 */
__STATIC_INLINE uint32_t nrf_drv_ppi_task_addr_group_disable_get(nrf_ppi_channel_group_t group)
{
    return (uint32_t) nrf_ppi_task_group_disable_address_get(group);
}

/**
 *@}
 **/

/*lint --flb "Leave library region" */

#ifdef __cplusplus
}
#endif

#endif // NRF_DRV_PPI_H
