/*$$$LICENCE_NORDIC_STANDARD<2021>$$$*/

#ifndef NRFY_DPPI_H__
#define NRFY_DPPI_H__

#include <nrfx.h>
#include <hal/nrf_dppi.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrfy_dppi DPPI HALY
 * @{
 * @ingroup nrf_dppi
 * @brief   Hardware access layer with cache and barrier support for managing the DPPI peripheral.
 */

/**
 * @brief Function for enabling or disabling multiple DPPI channels.
 *
 * The bits in @c mask value correspond to particular channels. It means that
 * writing 1 to bit 0 enables or disables channel 0,
 * writing 1 to bit 1 enables or disables channel 1 etc.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] mask   Channel mask.
 * @param[in] enable True if specified channels are to be enabled, false otherwise.
 */
NRFY_STATIC_INLINE void nrfy_dppi_channels_set(NRF_DPPIC_Type * p_reg, uint32_t mask, bool enable)
{
    if (enable == true)
    {
        nrf_dppi_channels_enable(p_reg, mask);
    }
    else
    {
        nrf_dppi_channels_disable(p_reg, mask);
    }
    nrf_barrier_w();
}

/** @refhal{nrf_dppi_channel_number_get} */
NRFY_STATIC_INLINE uint8_t nrfy_dppi_channel_number_get(NRF_DPPIC_Type const * p_reg)
{
    return nrf_dppi_channel_number_get(p_reg);
}

/** @refhal{nrf_dppi_group_number_get} */
NRFY_STATIC_INLINE uint8_t nrfy_dppi_group_number_get(NRF_DPPIC_Type const * p_reg)
{
    return nrf_dppi_group_number_get(p_reg);
}

/** @refhal{nrf_dppi_task_trigger} */
NRFY_STATIC_INLINE void nrfy_dppi_task_trigger(NRF_DPPIC_Type * p_reg, nrf_dppi_task_t dppi_task)
{
    nrf_dppi_task_trigger(p_reg, dppi_task);
    nrf_barrier_w();
}

/** @refhal{nrf_dppi_task_address_get} */
NRFY_STATIC_INLINE uint32_t nrfy_dppi_task_address_get(NRF_DPPIC_Type const * p_reg,
                                                       nrf_dppi_task_t        task)
{
    return nrf_dppi_task_address_get(p_reg, task);
}

/** @refhal{nrf_dppi_channel_check} */
NRFY_STATIC_INLINE bool nrfy_dppi_channel_check(NRF_DPPIC_Type const * p_reg, uint8_t channel)
{
    nrf_barrier_rw();
    bool check = nrf_dppi_channel_check(p_reg, channel);
    nrf_barrier_r();
    return check;
}

/** @refhal{nrf_dppi_channels_enable} */
NRFY_STATIC_INLINE void nrfy_dppi_channels_enable(NRF_DPPIC_Type * p_reg, uint32_t mask)
{
    nrf_dppi_channels_enable(p_reg, mask);
    nrf_barrier_w();
}

/** @refhal{nrf_dppi_channels_disable} */
NRFY_STATIC_INLINE void nrfy_dppi_channels_disable(NRF_DPPIC_Type * p_reg, uint32_t mask)
{
    nrf_dppi_channels_disable(p_reg, mask);
    nrf_barrier_w();
}

/** @refhal{nrf_dppi_channels_disable_all} */
NRFY_STATIC_INLINE void nrfy_dppi_channels_disable_all(NRF_DPPIC_Type * p_reg)
{
    nrf_dppi_channels_disable_all(p_reg);
    nrf_barrier_w();
}

/** @refhal{nrf_dppi_subscribe_set} */
NRFY_STATIC_INLINE void nrfy_dppi_subscribe_set(NRF_DPPIC_Type * p_reg,
                                                nrf_dppi_task_t  task,
                                                uint8_t          channel)
{
    nrf_dppi_subscribe_set(p_reg, task, channel);
    nrf_barrier_w();
}

/** @refhal{nrf_dppi_subscribe_clear} */
NRFY_STATIC_INLINE void nrfy_dppi_subscribe_clear(NRF_DPPIC_Type * p_reg, nrf_dppi_task_t task)
{
    nrf_dppi_subscribe_clear(p_reg, task);
    nrf_barrier_w();
}

/** @refhal{nrf_dppi_channels_include_in_group} */
NRFY_STATIC_INLINE void nrfy_dppi_channels_include_in_group(NRF_DPPIC_Type *         p_reg,
                                                            uint32_t                 channel_mask,
                                                            nrf_dppi_channel_group_t channel_group)
{
    nrf_dppi_channels_include_in_group(p_reg, channel_mask, channel_group);
    nrf_barrier_w();
}

/** @refhal{nrf_dppi_channels_remove_from_group} */
NRFY_STATIC_INLINE
void nrfy_dppi_channels_remove_from_group(NRF_DPPIC_Type *         p_reg,
                                          uint32_t                 channel_mask,
                                          nrf_dppi_channel_group_t channel_group)
{
    nrf_dppi_channels_remove_from_group(p_reg, channel_mask, channel_group);
    nrf_barrier_w();
}

/** @refhal{nrf_dppi_group_clear} */
NRFY_STATIC_INLINE void nrfy_dppi_group_clear(NRF_DPPIC_Type *         p_reg,
                                              nrf_dppi_channel_group_t group)
{
    nrf_dppi_group_clear(p_reg, group);
    nrf_barrier_w();
}

/** @refhal{nrf_dppi_group_enable} */
NRFY_STATIC_INLINE void nrfy_dppi_group_enable(NRF_DPPIC_Type *         p_reg,
                                               nrf_dppi_channel_group_t group)
{
    nrf_dppi_group_enable(p_reg, group);
    nrf_barrier_w();
}

/** @refhal{nrf_dppi_group_disable} */
NRFY_STATIC_INLINE void nrfy_dppi_group_disable(NRF_DPPIC_Type *         p_reg,
                                                nrf_dppi_channel_group_t group)
{
    nrf_dppi_group_disable(p_reg, group);
    nrf_barrier_w();
}

/** @refhal{nrf_dppi_group_enable_task_get} */
NRFY_STATIC_INLINE nrf_dppi_task_t nrfy_dppi_group_enable_task_get(uint8_t index)
{
    return nrf_dppi_group_enable_task_get(index);
}

/** @refhal{nrf_dppi_group_disable_task_get} */
NRFY_STATIC_INLINE nrf_dppi_task_t nrfy_dppi_group_disable_task_get(uint8_t index)
{
    return nrf_dppi_group_disable_task_get(index);
}

/** @} */

#ifdef __cplusplus
}
#endif

#endif // NRFY_DPPI_H__
