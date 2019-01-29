/*$$$LICENCE_NORDIC_STANDARD<2018>$$$*/

#ifndef NRFX_DPPI_H__
#define NRFX_DPPI_H__

#include <nrfx.h>
#include <hal/nrf_dppi.h>

/**
 * @defgroup nrfx_dppi DPPI allocator
 * @{
 * @ingroup nrf_dppi
 * @brief   Distributed Programmable Peripheral Interconnect (DPPI) allocator.
 */

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Function for freeing all allocated channels and groups. */
void nrfx_dppi_free(void);

/**
 * @brief Function for allocating a DPPI channel.
 * @details This function allocates the first unused DPPI channel.
 *
 * @param[out] p_channel Pointer to the DPPI channel number that has been allocated.
 *
 * @retval NRFX_SUCCESS      The channel was successfully allocated.
 * @retval NRFX_ERROR_NO_MEM There is no available channel to be used.
 */
nrfx_err_t nrfx_dppi_channel_alloc(uint8_t * p_channel);

/**
 * @brief Function for freeing a DPPI channel.
 * @details This function also disables the chosen channel.
 *
 * @param[in] channel DPPI channel to be freed.
 *
 * @retval NRFX_SUCCESS             The channel was successfully freed.
 * @retval NRFX_ERROR_INVALID_PARAM The specified channel is not allocated.
 */
nrfx_err_t nrfx_dppi_channel_free(uint8_t channel);

/**
 * @brief Function for enabling a DPPI channel.
 *
 * @param[in] channel DPPI channel to be enabled.
 *
 * @retval NRFX_SUCCESS             The channel was successfully enabled.
 * @retval NRFX_ERROR_INVALID_PARAM The specified channel is not allocated.
 */
nrfx_err_t nrfx_dppi_channel_enable(uint8_t channel);

/**
 * @brief Function for disabling a DPPI channel.
 *
 * @param[in] channel DPPI channel to be disabled.
 *
 * @retval NRFX_SUCCESS             The channel was successfully disabled.
 * @retval NRFX_ERROR_INVALID_PARAM The specified channel is not allocated.
 */
nrfx_err_t nrfx_dppi_channel_disable(uint8_t channel);

/**
 * @brief Function for allocating a DPPI channel group.
 * @details This function allocates the first unused DPPI group.
 *
 * @param[out] p_group Pointer to the DPPI channel group that has been allocated.
 *
 * @retval NRFX_SUCCESS      The channel group was successfully allocated.
 * @retval NRFX_ERROR_NO_MEM There is no available channel group to be used.
 */
nrfx_err_t nrfx_dppi_group_alloc(nrf_dppi_channel_group_t * p_group);

/**
 * @brief Function for freeing a DPPI channel group.
 * @details This function also disables the chosen group.
 *
 * @param[in] group DPPI channel group to be freed.
 *
 * @retval NRFX_SUCCESS             The channel group was successfully freed.
 * @retval NRFX_ERROR_INVALID_PARAM The specified group is not allocated.
 */
nrfx_err_t nrfx_dppi_group_free(nrf_dppi_channel_group_t group);

/**
 * @brief Function for including a DPPI channel in a channel group.
 *
 * @param[in] channel DPPI channel to be added.
 * @param[in] group   Channel group in which to include the channel.
 *
 * @retval NRFX_SUCCESS             The channel was successfully included.
 * @retval NRFX_ERROR_INVALID_PARAM The specified group or channel is not allocated.
 */
nrfx_err_t nrfx_dppi_channel_include_in_group(uint8_t                  channel,
                                              nrf_dppi_channel_group_t group);

/**
 * @brief Function for removing a DPPI channel from a channel group.
 *
 * @param[in] channel DPPI channel to be removed.
 * @param[in] group   Channel group from which to remove the channel.
 *
 * @retval NRFX_SUCCESS             The channel was successfully removed.
 * @retval NRFX_ERROR_INVALID_PARAM The specified group or channel is not allocated.
 */
nrfx_err_t nrfx_dppi_channel_remove_from_group(uint8_t                  channel,
                                               nrf_dppi_channel_group_t group);

/**
 * @brief Function for clearing a DPPI channel group.
 *
 * @param[in] group Channel group to be cleared.
 *
 * @retval NRFX_SUCCESS             The group was successfully cleared.
 * @retval NRFX_ERROR_INVALID_PARAM The specified group is not allocated.
 */
nrfx_err_t nrfx_dppi_group_clear(nrf_dppi_channel_group_t group);

/**
 * @brief Function for enabling a DPPI channel group.
 *
 * @param[in] group Channel group to be enabled.
 *
 * @retval NRFX_SUCCESS             The group was successfully enabled.
 * @retval NRFX_ERROR_INVALID_PARAM The specified group is not allocated.
 */
nrfx_err_t nrfx_dppi_group_enable(nrf_dppi_channel_group_t group);

/**
 * @brief Function for disabling a DPPI channel group.
 *
 * @param[in] group Channel group to be disabled.
 *
 * @retval NRFX_SUCCESS             The group was successfully disabled.
 * @retval NRFX_ERROR_INVALID_PARAM The specified group is not allocated.
 */
nrfx_err_t nrfx_dppi_group_disable(nrf_dppi_channel_group_t group);

/** @} */

#ifdef __cplusplus
}
#endif

#endif // NRFX_DPPI_H__
