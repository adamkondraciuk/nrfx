/*$$$LICENCE_NORDIC_STANDARD<2020>$$$*/

#ifndef NRF_IPCMAP_H__
#define NRF_IPCMAP_H__

#include <nrfx.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrf_ipcmap_hal IPCMAP HAL
 * @{
 * @ingroup nrf_ipcmap
 * @brief   Hardware access layer for managing the Inter-Processor Map (IPCMAP) peripheral.
 */

/**
 * @brief Function for setting the configuration of channel source.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] index  Index of the IPCMAP channel.
 * @param[in] source Source identification for IPC mapping.
 * @param[in] domain Domain identifier.
 */
NRF_STATIC_INLINE void nrf_ipcmap_source_config_set(NRF_IPCMAP_Type * p_reg,
                                                    uint16_t          index,
                                                    uint8_t           source,
                                                    uint8_t           domain);

/**
 * @brief Function for setting the configuration of channel sink.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] index  Index of the IPCMAP channel.
 * @param[in] sink   Sink identification for IPC mapping.
 * @param[in] domain Domain identifier.
 */
NRF_STATIC_INLINE void nrf_ipcmap_sink_config_set(NRF_IPCMAP_Type * p_reg,
                                                  uint16_t          index,
                                                  uint8_t           sink,
                                                  uint8_t           domain);

/**
 * @brief Function for enabling the channel source.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] index  Index of the IPCMAP channel.
 * @param[in] enable True if channel source is to be enabled, false otherwise.
 */
NRF_STATIC_INLINE void nrf_ipcmap_source_enable_set(NRF_IPCMAP_Type * p_reg,
                                                    uint16_t          index,
                                                    bool              enable);

#ifndef NRF_DECLARE_ONLY

NRF_STATIC_INLINE void nrf_ipcmap_source_config_set(NRF_IPCMAP_Type * p_reg,
                                                    uint16_t          index,
                                                    uint8_t           source,
                                                    uint8_t           domain)
{
    NRFX_ASSERT(domain <= 0xF);
    /* TODO: When MDK adds a define for number of channels, replace magic number below
     *       and in other functions. */
    NRFX_ASSERT(index < 16);

    p_reg->CHANNEL[index].SOURCE =
        ((source << IPCMAP_CHANNEL_SOURCE_SOURCE_Pos) & IPCMAP_CHANNEL_SOURCE_SOURCE_Msk)
       |((domain << IPCMAP_CHANNEL_SOURCE_DOMAIN_Pos) & IPCMAP_CHANNEL_SOURCE_DOMAIN_Msk);
}

NRF_STATIC_INLINE void nrf_ipcmap_sink_config_set(NRF_IPCMAP_Type * p_reg,
                                                  uint16_t          index,
                                                  uint8_t           sink,
                                                  uint8_t           domain)
{
    NRFX_ASSERT(domain <= 0xF);
    NRFX_ASSERT(index < 16);

    p_reg->CHANNEL[index].SINK =
        ((sink   << IPCMAP_CHANNEL_SINK_SINK_Pos)   & IPCMAP_CHANNEL_SINK_SINK_Msk)
       |((domain << IPCMAP_CHANNEL_SINK_DOMAIN_Pos) & IPCMAP_CHANNEL_SINK_DOMAIN_Msk);
}

NRF_STATIC_INLINE void nrf_ipcmap_source_enable_set(NRF_IPCMAP_Type * p_reg,
                                                    uint16_t          index,
                                                    bool              enable)
{
    NRFX_ASSERT(index < 16);
    p_reg->CHANNEL[index].SOURCE = (p_reg->CHANNEL[index].SOURCE & 
            (~IPCMAP_CHANNEL_SOURCE_ENABLE_Msk)) | (enable << IPCMAP_CHANNEL_SOURCE_ENABLE_Pos);
}

#endif // NRF_DECLARE_ONLY

/** @} */

#ifdef __cplusplus
}
#endif

#endif // NRF_IPCMAP_H__
