/*$$$LICENCE_NORDIC_STANDARD<2018>$$$*/

#ifndef NRF_DPPI_H__
#define NRF_DPPI_H__

#include <nrfx.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrf_dppi_hal DPPI Controller HAL
 * @{
 * @ingroup nrf_dppi
 * @brief   Hardware access layer for managing the Distributed Programmable Peripheral
 *          Interconnect Controller (DPPIC).
 */

/** @brief DPPI channel groups. */
typedef enum
{
    NRF_DPPI_CHANNEL_GROUP0 = 0, /**< Channel group 0. */
    NRF_DPPI_CHANNEL_GROUP1 = 1, /**< Channel group 1. */
    NRF_DPPI_CHANNEL_GROUP2 = 2, /**< Channel group 2. */
    NRF_DPPI_CHANNEL_GROUP3 = 3, /**< Channel group 3. */
    NRF_DPPI_CHANNEL_GROUP4 = 4, /**< Channel group 4. */
    NRF_DPPI_CHANNEL_GROUP5 = 5  /**< Channel group 5. */
} nrf_dppi_channel_group_t;

/** @brief DPPI tasks. */
typedef enum
{
    NRF_DPPI_TASK_CHG0_EN  = offsetof(NRF_DPPIC_Type, TASKS_CHG[0].EN),  /**< Enable channel group 0. */
    NRF_DPPI_TASK_CHG0_DIS = offsetof(NRF_DPPIC_Type, TASKS_CHG[0].DIS), /**< Disable channel group 0. */
    NRF_DPPI_TASK_CHG1_EN  = offsetof(NRF_DPPIC_Type, TASKS_CHG[1].EN),  /**< Enable channel group 1. */
    NRF_DPPI_TASK_CHG1_DIS = offsetof(NRF_DPPIC_Type, TASKS_CHG[1].DIS), /**< Disable channel group 1. */
    NRF_DPPI_TASK_CHG2_EN  = offsetof(NRF_DPPIC_Type, TASKS_CHG[2].EN),  /**< Enable channel group 2. */
    NRF_DPPI_TASK_CHG2_DIS = offsetof(NRF_DPPIC_Type, TASKS_CHG[2].DIS), /**< Disable channel group 2. */
    NRF_DPPI_TASK_CHG3_EN  = offsetof(NRF_DPPIC_Type, TASKS_CHG[3].EN),  /**< Enable channel group 3. */
    NRF_DPPI_TASK_CHG3_DIS = offsetof(NRF_DPPIC_Type, TASKS_CHG[3].DIS), /**< Disable channel group 3. */
    NRF_DPPI_TASK_CHG4_EN  = offsetof(NRF_DPPIC_Type, TASKS_CHG[4].EN),  /**< Enable channel group 4. */
    NRF_DPPI_TASK_CHG4_DIS = offsetof(NRF_DPPIC_Type, TASKS_CHG[4].DIS), /**< Disable channel group 4. */
    NRF_DPPI_TASK_CHG5_EN  = offsetof(NRF_DPPIC_Type, TASKS_CHG[5].EN),  /**< Enable channel group 5. */
    NRF_DPPI_TASK_CHG5_DIS = offsetof(NRF_DPPIC_Type, TASKS_CHG[5].DIS)  /**< Disable channel group 5. */
} nrf_dppi_task_t;

/**
 * @brief Function for activating a DPPI task.
 *
 * @param[in] p_reg     Pointer to the structure of registers of the peripheral.
 * @param[in] dppi_task Task to activate.
 */
__STATIC_INLINE void nrf_dppi_task_trigger(NRF_DPPIC_Type * p_reg, nrf_dppi_task_t dppi_task);

/**
 * @brief Function for enabling a given DPPI channel.
 *
 * @details This function enables only one channel.
 *
 * @param[in] p_reg   Pointer to the structure of registers of the peripheral.
 * @param[in] channel Channel to enable.
 */
__STATIC_INLINE void nrf_dppi_channel_enable(NRF_DPPIC_Type * p_reg, uint8_t channel);

/**
 * @brief Function for disabling a given DPPI channel.
 *
 * @details This function disables only one channel.
 *
 * @param[in] p_reg   Pointer to the structure of registers of the peripheral.
 * @param[in] channel Channel to disable.
 */
__STATIC_INLINE void nrf_dppi_channel_disable(NRF_DPPIC_Type * p_reg, uint8_t channel);

/**
 * @brief Function for checking the state of a specific DPPI channel.
 *
 * @param[in] p_reg   Pointer to the structure of registers of the peripheral.
 * @param[in] channel Channel to check.
 *
 * @retval true  If the channel is enabled.
 * @retval false If the channel is not enabled.
 */
__STATIC_INLINE bool nrf_dppi_channel_check(NRF_DPPIC_Type const * p_reg, uint8_t channel);

/**
 * @brief Function for disabling all DPPI channels.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 */
__STATIC_INLINE void nrf_dppi_channels_disable_all(NRF_DPPIC_Type * p_reg);

/**
 * @brief Function for enabling multiple DPPI channels.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Channel mask.
 */
__STATIC_INLINE void nrf_dppi_channels_enable(NRF_DPPIC_Type * p_reg, uint32_t mask);

/**
 * @brief Function for disabling multiple DPPI channels.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] mask  Channel mask.
 */
__STATIC_INLINE void nrf_dppi_channels_disable(NRF_DPPIC_Type * p_reg, uint32_t mask);

/**
 * @brief Function for setting the subscribe configuration for a given
 *        DPPI task.
 *
 * @param[in] p_reg   Pointer to the structure of registers of the peripheral.
 * @param[in] task    Task for which to set the configuration.
 * @param[in] channel Channel through which to subscribe events.
 */
__STATIC_INLINE void nrf_dppi_subscribe_set(NRF_DPPIC_Type * p_reg,
                                            nrf_dppi_task_t  task,
                                            uint8_t          channel);

/**
 * @brief Function for clearing the subscribe configuration for a given
 *        DPPI task.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] task  Task for which to clear the configuration.
 */
__STATIC_INLINE void nrf_dppi_subscribe_clear(NRF_DPPIC_Type * p_reg, nrf_dppi_task_t task);

/**
 * @brief Function for including a DPPI channel in a channel group.
 *
 * @details This function adds only one channel to the group.
 *
 * @param[in] p_reg         Pointer to the structure of registers of the peripheral.
 * @param[in] channel       Channel to be included in the group.
 * @param[in] channel_group Channel group.
 */
__STATIC_INLINE void nrf_dppi_channel_include_in_group(NRF_DPPIC_Type *         p_reg,
                                                       uint8_t                  channel,
                                                       nrf_dppi_channel_group_t channel_group);

/**
 * @brief Function for including multiple DPPI channels in a channel group.
 *
 * @details This function adds all specified channels to the group.
 *
 * @param[in] p_reg         Pointer to the structure of registers of the peripheral.
 * @param[in] channel_mask  Channels to be included in the group.
 * @param[in] channel_group Channel group.
 */
__STATIC_INLINE void nrf_dppi_channels_include_in_group(NRF_DPPIC_Type *         p_reg,
                                                        uint32_t                 channel_mask,
                                                        nrf_dppi_channel_group_t channel_group);

/**
 * @brief Function for removing a DPPI channel from a channel group.
 *
 * @details This function removes only one channel from the group.
 *
 * @param[in] p_reg         Pointer to the structure of registers of the peripheral.
 * @param[in] channel       Channel to be removed from the group.
 * @param[in] channel_group Channel group.
 */
__STATIC_INLINE void nrf_dppi_channel_remove_from_group(NRF_DPPIC_Type *         p_reg,
                                                        uint8_t                  channel,
                                                        nrf_dppi_channel_group_t channel_group);

/**
 * @brief Function for removing multiple DPPI channels from a channel group.
 *
 * @details This function removes all specified channels from the group.
 *
 * @param[in] p_reg         Pointer to the structure of registers of the peripheral.
 * @param[in] channel_mask  Channels to be removed from the group.
 * @param[in] channel_group Channel group.
 */
__STATIC_INLINE void nrf_dppi_channels_remove_from_group(NRF_DPPIC_Type *         p_reg,
                                                         uint32_t                 channel_mask,
                                                         nrf_dppi_channel_group_t channel_group);

/**
 * @brief Function for removing all DPPI channels from a channel group.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] group Channel group.
 */
__STATIC_INLINE void nrf_dppi_group_clear(NRF_DPPIC_Type *         p_reg,
                                          nrf_dppi_channel_group_t group);

/**
 * @brief Function for enabling a channel group.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] group Channel group.
 */
__STATIC_INLINE void nrf_dppi_group_enable(NRF_DPPIC_Type *         p_reg,
                                           nrf_dppi_channel_group_t group);

/**
 * @brief Function for disabling a channel group.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] group Channel group.
 */
__STATIC_INLINE void nrf_dppi_group_disable(NRF_DPPIC_Type *         p_reg,
                                            nrf_dppi_channel_group_t group);


#ifndef SUPPRESS_INLINE_IMPLEMENTATION

__STATIC_INLINE void nrf_dppi_task_trigger(NRF_DPPIC_Type * p_reg, nrf_dppi_task_t dppi_task)
{
    *((volatile uint32_t *) ((uint8_t *) p_reg + (uint32_t) dppi_task)) = 1;
}

__STATIC_INLINE void nrf_dppi_channel_enable(NRF_DPPIC_Type * p_reg, uint8_t channel)
{
    p_reg->CHENSET |= (DPPIC_CHENSET_CH0_Set << (DPPIC_CHEN_CH0_Pos + channel));
}

__STATIC_INLINE void nrf_dppi_channel_disable(NRF_DPPIC_Type * p_reg, uint8_t channel)
{
    p_reg->CHENCLR |= (DPPIC_CHENCLR_CH0_Clear << (DPPIC_CHEN_CH0_Pos + channel));
}

__STATIC_INLINE bool nrf_dppi_channel_check(NRF_DPPIC_Type const * p_reg, uint8_t channel)
{
    return ((p_reg->CHEN & (DPPIC_CHEN_CH0_Enabled << (DPPIC_CHEN_CH0_Pos + channel))) != 0);
}

__STATIC_INLINE void nrf_dppi_channels_disable_all(NRF_DPPIC_Type * p_reg)
{
    p_reg->CHENCLR = 0xFFFFFFFFuL;
}

__STATIC_INLINE void nrf_dppi_channels_enable(NRF_DPPIC_Type * p_reg, uint32_t mask)
{
    p_reg->CHENSET = mask;
}

__STATIC_INLINE void nrf_dppi_channels_disable(NRF_DPPIC_Type * p_reg, uint32_t mask)
{
    p_reg->CHENCLR = mask;
}

__STATIC_INLINE void nrf_dppi_subscribe_set(NRF_DPPIC_Type * p_reg,
                                            nrf_dppi_task_t  task,
                                            uint8_t          channel)
{
    *((volatile uint32_t *) ((uint8_t *) p_reg + (uint32_t) task + 0x80uL)) =
            ((uint32_t)channel | DPPIC_SUBSCRIBE_CHG_EN_EN_Msk);
}

__STATIC_INLINE void nrf_dppi_subscribe_clear(NRF_DPPIC_Type * p_reg, nrf_dppi_task_t task)
{
    *((volatile uint32_t *) ((uint8_t *) p_reg + (uint32_t) task + 0x80uL)) = 0;
}

__STATIC_INLINE void nrf_dppi_channel_include_in_group(NRF_DPPIC_Type *         p_reg,
                                                       uint8_t                  channel,
                                                       nrf_dppi_channel_group_t channel_group)
{
    p_reg->CHG[(uint32_t) channel_group] =
        p_reg->CHG[(uint32_t) channel_group] |
            (DPPIC_CHG_CH0_Included << (DPPIC_CHEN_CH0_Pos + channel));
}

__STATIC_INLINE void nrf_dppi_channels_include_in_group(NRF_DPPIC_Type *         p_reg,
                                                        uint32_t                 channel_mask,
                                                        nrf_dppi_channel_group_t channel_group)
{
    p_reg->CHG[(uint32_t) channel_group] =
        p_reg->CHG[(uint32_t) channel_group] | (channel_mask);
}

__STATIC_INLINE void nrf_dppi_channel_remove_from_group(NRF_DPPIC_Type *         p_reg,
                                                        uint8_t                  channel,
                                                        nrf_dppi_channel_group_t channel_group)
{
    p_reg->CHG[(uint32_t) channel_group] =
        p_reg->CHG[(uint32_t) channel_group] &
            ~(DPPIC_CHG_CH0_Included << (DPPIC_CHEN_CH0_Pos + channel));
}

__STATIC_INLINE void nrf_dppi_channels_remove_from_group(NRF_DPPIC_Type *         p_reg,
                                                         uint32_t                 channel_mask,
                                                         nrf_dppi_channel_group_t channel_group)
{
    p_reg->CHG[(uint32_t) channel_group] =
        p_reg->CHG[(uint32_t) channel_group] & ~(channel_mask);
}

__STATIC_INLINE void nrf_dppi_group_clear(NRF_DPPIC_Type *         p_reg,
                                                  nrf_dppi_channel_group_t group)
{
    p_reg->CHG[(uint32_t) group] = 0;
}

__STATIC_INLINE void nrf_dppi_group_enable(NRF_DPPIC_Type * p_reg, nrf_dppi_channel_group_t group)
{
    p_reg->TASKS_CHG[(uint32_t) group].EN = 1;
}

__STATIC_INLINE void nrf_dppi_group_disable(NRF_DPPIC_Type *         p_reg,
                                            nrf_dppi_channel_group_t group)
{
    p_reg->TASKS_CHG[(uint32_t) group].DIS = 1;
}

#endif // SUPPRESS_INLINE_IMPLEMENTATION

/** @} */

#ifdef __cplusplus
}
#endif

#endif // NRF_DPPIC_H__
