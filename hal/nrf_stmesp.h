/*$$$LICENCE_NORDIC_STANDARD<2022>$$$*/

#ifndef NRF_STMESP_H__
#define NRF_STMESP_H__

#include <nrfx.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrf_stmesp_hal STMESP HAL
 * @{
 * @ingroup nrf_stmesp
 * @brief   Hardware access layer for managing the System Trace Macrocell Extended Stimulus Port (STMESP) peripheral.
 */

/**
 * @brief Function for getting the specified guaranteed data address.
 *
 * @param[in] p_reg     Pointer to the structure of registers of the peripheral.
 * @param[in] timestamp True if timestamped data is to be used, false otherwise.
 * @param[in] marked    True if marked data is to be used, false otherwise.
 *
 * @return Address of the requested guaranteed data.
 */
NRF_STATIC_INLINE
volatile void * nrf_stmesp_guaranteed_data_addr_get(NRF_STMESP_Type * p_reg,
                                                    bool              timestamp,
                                                    bool              marked);

/**
 * @brief Function for getting the specified guaranteed flag address.
 *
 * @param[in] p_reg     Pointer to the structure of registers of the peripheral.
 * @param[in] timestamp True if timestamped flag is to be used, false otherwise.
 *
 * @return Address of the requested guaranteed flag.
 */
NRF_STATIC_INLINE
volatile void * nrf_stmesp_guaranteed_flag_addr_get(NRF_STMESP_Type * p_reg,
                                                    bool              timestamp);

/**
 * @brief Function for getting the specified guaranteed trigger address.
 *
 * @param[in] p_reg     Pointer to the structure of registers of the peripheral.
 * @param[in] timestamp True if timestamped trigger is to be used, false otherwise.
 *
 * @return Address of the requested guaranteed trigger.
 */
NRF_STATIC_INLINE
volatile void * nrf_stmesp_guaranteed_trigger_addr_get(NRF_STMESP_Type * p_reg,
                                                       bool              timestamp);

/**
 * @brief Function for getting the specified invariant timing data address.
 *
 * @param[in] p_reg     Pointer to the structure of registers of the peripheral.
 * @param[in] timestamp True if timestamped data is to be used, false otherwise.
 * @param[in] marked    True if marked data is to be used, false otherwise.
 *
 * @return Address of the requested invariant timing data.
 */
NRF_STATIC_INLINE
volatile void * nrf_stmesp_invariant_data_addr_get(NRF_STMESP_Type * p_reg,
                                                   bool              timestamp,
                                                   bool              marked);

/**
 * @brief Function for getting the specified invariant timing flag address.
 *
 * @param[in] p_reg     Pointer to the structure of registers of the peripheral.
 * @param[in] timestamp True if timestamped flag is to be used, false otherwise.
 *
 * @return Address of the requested invariant timing flag.
 */
NRF_STATIC_INLINE
volatile void * nrf_stmesp_invariant_flag_addr_get(NRF_STMESP_Type * p_reg,
                                                   bool              timestamp);

/**
 * @brief Function for getting the specified invariant timing trigger address.
 *
 * @param[in] p_reg     Pointer to the structure of registers of the peripheral.
 * @param[in] timestamp True if timestamped trigger is to be used, false otherwise.
 *
 * @return Address of the requested invariant timing trigger.
 */
NRF_STATIC_INLINE
volatile void * nrf_stmesp_invariant_trigger_addr_get(NRF_STMESP_Type * p_reg,
                                                      bool              timestamp);

/**
 * @brief Function for setting the guaranteed data with 8-bit value.
 *
 * @param[in] p_reg     Pointer to the structure of registers of the peripheral.
 * @param[in] data      Value to be set.
 * @param[in] timestamp True if timestamped data is to be used, false otherwise.
 * @param[in] marked    True if marked data is to be used, false otherwise.
 */
NRF_STATIC_INLINE void nrf_stmesp_guaranteed_data_8_set(NRF_STMESP_Type * p_reg,
                                                        uint8_t           data,
                                                        bool              timestamp,
                                                        bool              marked);

/**
 * @brief Function for setting the guaranteed data with 16-bit value.
 *
 * @param[in] p_reg     Pointer to the structure of registers of the peripheral.
 * @param[in] data      Value to be set.
 * @param[in] timestamp True if timestamped data is to be used, false otherwise.
 * @param[in] marked    True if marked data is to be used, false otherwise.
 */
NRF_STATIC_INLINE void nrf_stmesp_guaranteed_data_16_set(NRF_STMESP_Type * p_reg,
                                                         uint16_t          data,
                                                         bool              timestamp,
                                                         bool              marked);

/**
 * @brief Function for setting the guaranteed data with 32-bit value.
 *
 * @param[in] p_reg     Pointer to the structure of registers of the peripheral.
 * @param[in] data      Value to be set.
 * @param[in] timestamp True if timestamped data is to be used, false otherwise.
 * @param[in] marked    True if marked data is to be used, false otherwise.
 */
NRF_STATIC_INLINE void nrf_stmesp_guaranteed_data_32_set(NRF_STMESP_Type * p_reg,
                                                         uint32_t          data,
                                                         bool              timestamp,
                                                         bool              marked);

/**
 * @brief Function for setting the guaranteed data with 64-bit value.
 *
 * @param[in] p_reg     Pointer to the structure of registers of the peripheral.
 * @param[in] data      Value to be set.
 * @param[in] timestamp True if timestamped data is to be used, false otherwise.
 * @param[in] marked    True if marked data is to be used, false otherwise.
 */
NRF_STATIC_INLINE void nrf_stmesp_guaranteed_data_64_set(NRF_STMESP_Type * p_reg,
                                                         uint64_t          data,
                                                         bool              timestamp,
                                                         bool              marked);

/**
 * @brief Function for setting the guaranteed flag with 8-bit value.
 *
 * @param[in] p_reg     Pointer to the structure of registers of the peripheral.
 * @param[in] flag      Value to be set.
 * @param[in] timestamp True if timestamped flag is to be used, false otherwise.
 */
NRF_STATIC_INLINE void nrf_stmesp_guaranteed_flag_8_set(NRF_STMESP_Type * p_reg,
                                                        uint8_t           flag,
                                                        bool              timestamp);

/**
 * @brief Function for setting the guaranteed flag with 16-bit value.
 *
 * @param[in] p_reg     Pointer to the structure of registers of the peripheral.
 * @param[in] flag      Value to be set.
 * @param[in] timestamp True if timestamped flag is to be used, false otherwise.
 */
NRF_STATIC_INLINE void nrf_stmesp_guaranteed_flag_16_set(NRF_STMESP_Type * p_reg,
                                                         uint16_t          flag,
                                                         bool              timestamp);

/**
 * @brief Function for setting the guaranteed flag with 32-bit value.
 *
 * @param[in] p_reg     Pointer to the structure of registers of the peripheral.
 * @param[in] flag      Value to be set.
 * @param[in] timestamp True if timestamped flag is to be used, false otherwise.
 */
NRF_STATIC_INLINE void nrf_stmesp_guaranteed_flag_32_set(NRF_STMESP_Type * p_reg,
                                                         uint32_t          flag,
                                                         bool              timestamp);

/**
 * @brief Function for setting the guaranteed flag with 64-bit value.
 *
 * @param[in] p_reg     Pointer to the structure of registers of the peripheral.
 * @param[in] flag      Value to be set.
 * @param[in] timestamp True if timestamped flag is to be used, false otherwise.
 */
NRF_STATIC_INLINE void nrf_stmesp_guaranteed_flag_64_set(NRF_STMESP_Type * p_reg,
                                                         uint64_t          flag,
                                                         bool              timestamp);

/**
 * @brief Function for setting the guaranteed trigger with 8-bit value.
 *
 * @param[in] p_reg     Pointer to the structure of registers of the peripheral.
 * @param[in] trigger   Value to be set.
 * @param[in] timestamp True if timestamped trigger is to be used, false otherwise.
 */
NRF_STATIC_INLINE void nrf_stmesp_guaranteed_trigger_8_set(NRF_STMESP_Type * p_reg,
                                                           uint8_t           trigger,
                                                           bool              timestamp);

/**
 * @brief Function for setting the guaranteed trigger with 16-bit value.
 *
 * @param[in] p_reg     Pointer to the structure of registers of the peripheral.
 * @param[in] trigger   Value to be set.
 * @param[in] timestamp True if timestamped trigger is to be used, false otherwise.
 */
NRF_STATIC_INLINE void nrf_stmesp_guaranteed_trigger_16_set(NRF_STMESP_Type * p_reg,
                                                            uint16_t          trigger,
                                                            bool              timestamp);

/**
 * @brief Function for setting the guaranteed trigger with 32-bit value.
 *
 * @param[in] p_reg     Pointer to the structure of registers of the peripheral.
 * @param[in] trigger   Value to be set.
 * @param[in] timestamp True if timestamped trigger is to be used, false otherwise.
 */
NRF_STATIC_INLINE void nrf_stmesp_guaranteed_trigger_32_set(NRF_STMESP_Type * p_reg,
                                                            uint32_t          trigger,
                                                            bool              timestamp);

/**
 * @brief Function for setting the guaranteed trigger with 64-bit value.
 *
 * @param[in] p_reg     Pointer to the structure of registers of the peripheral.
 * @param[in] trigger   Value to be set.
 * @param[in] timestamp True if timestamped trigger is to be used, false otherwise.
 */
NRF_STATIC_INLINE void nrf_stmesp_guaranteed_trigger_64_set(NRF_STMESP_Type * p_reg,
                                                            uint64_t          trigger,
                                                            bool              timestamp);

/**
 * @brief Function for setting the invariant timing data with 8-bit value.
 *
 * @param[in] p_reg     Pointer to the structure of registers of the peripheral.
 * @param[in] data      Value to be set.
 * @param[in] timestamp True if timestamped data is to be used, false otherwise.
 * @param[in] marked    True if marked data is to be used, false otherwise.
 */
NRF_STATIC_INLINE void nrf_stmesp_invariant_data_8_set(NRF_STMESP_Type * p_reg,
                                                       uint8_t           data,
                                                       bool              timestamp,
                                                       bool              marked);

/**
 * @brief Function for setting the invariant timing data with 16-bit value.
 *
 * @param[in] p_reg     Pointer to the structure of registers of the peripheral.
 * @param[in] data      Value to be set.
 * @param[in] timestamp True if timestamped data is to be used, false otherwise.
 * @param[in] marked    True if marked data is to be used, false otherwise.
 */
NRF_STATIC_INLINE void nrf_stmesp_invariant_data_16_set(NRF_STMESP_Type * p_reg,
                                                        uint16_t          data,
                                                        bool              timestamp,
                                                        bool              marked);

/**
 * @brief Function for setting the invariant timing data with 32-bit value.
 *
 * @param[in] p_reg     Pointer to the structure of registers of the peripheral.
 * @param[in] data      Value to be set.
 * @param[in] timestamp True if timestamped data is to be used, false otherwise.
 * @param[in] marked    True if marked data is to be used, false otherwise.
 */
NRF_STATIC_INLINE void nrf_stmesp_invariant_data_32_set(NRF_STMESP_Type * p_reg,
                                                        uint32_t          data,
                                                        bool              timestamp,
                                                        bool              marked);

/**
 * @brief Function for setting the invariant timing data with 64-bit value.
 *
 * @param[in] p_reg     Pointer to the structure of registers of the peripheral.
 * @param[in] data      Value to be set.
 * @param[in] timestamp True if timestamped data is to be used, false otherwise.
 * @param[in] marked    True if marked data is to be used, false otherwise.
 */
NRF_STATIC_INLINE void nrf_stmesp_invariant_data_64_set(NRF_STMESP_Type * p_reg,
                                                        uint64_t          data,
                                                        bool              timestamp,
                                                        bool              marked);

/**
 * @brief Function for setting the invariant timing flag with 8-bit value.
 *
 * @param[in] p_reg     Pointer to the structure of registers of the peripheral.
 * @param[in] flag      Value to be set.
 * @param[in] timestamp True if timestamped flag is to be used, false otherwise.
 */
NRF_STATIC_INLINE void nrf_stmesp_invariant_flag_8_set(NRF_STMESP_Type * p_reg,
                                                       uint8_t           flag,
                                                       bool              timestamp);

/**
 * @brief Function for setting the invariant timing flag with 16-bit value.
 *
 * @param[in] p_reg     Pointer to the structure of registers of the peripheral.
 * @param[in] flag      Value to be set.
 * @param[in] timestamp True if timestamped flag is to be used, false otherwise.
 */
NRF_STATIC_INLINE void nrf_stmesp_invariant_flag_16_set(NRF_STMESP_Type * p_reg,
                                                        uint16_t          flag,
                                                        bool              timestamp);

/**
 * @brief Function for setting the invariant timing flag with 32-bit value.
 *
 * @param[in] p_reg     Pointer to the structure of registers of the peripheral.
 * @param[in] flag      Value to be set.
 * @param[in] timestamp True if timestamped flag is to be used, false otherwise.
 */
NRF_STATIC_INLINE void nrf_stmesp_invariant_flag_32_set(NRF_STMESP_Type * p_reg,
                                                        uint32_t          flag,
                                                        bool              timestamp);

/**
 * @brief Function for setting the invariant timing flag with 64-bit value.
 *
 * @param[in] p_reg     Pointer to the structure of registers of the peripheral.
 * @param[in] flag      Value to be set.
 * @param[in] timestamp True if timestamped flag is to be used, false otherwise.
 */
NRF_STATIC_INLINE void nrf_stmesp_invariant_flag_64_set(NRF_STMESP_Type * p_reg,
                                                        uint64_t          flag,
                                                        bool              timestamp);

/**
 * @brief Function for setting the invariant timing trigger with 8-bit value.
 *
 * @param[in] p_reg     Pointer to the structure of registers of the peripheral.
 * @param[in] trigger   Value to be set.
 * @param[in] timestamp True if timestamped trigger is to be used, false otherwise.
 */
NRF_STATIC_INLINE void nrf_stmesp_invariant_trigger_8_set(NRF_STMESP_Type * p_reg,
                                                          uint8_t           trigger,
                                                          bool              timestamp);

/**
 * @brief Function for setting the invariant timing trigger with 16-bit value.
 *
 * @param[in] p_reg     Pointer to the structure of registers of the peripheral.
 * @param[in] trigger   Value to be set.
 * @param[in] timestamp True if timestamped trigger is to be used, false otherwise.
 */
NRF_STATIC_INLINE void nrf_stmesp_invariant_trigger_16_set(NRF_STMESP_Type * p_reg,
                                                           uint16_t          trigger,
                                                           bool              timestamp);

/**
 * @brief Function for setting the invariant timing trigger with 32-bit value.
 *
 * @param[in] p_reg     Pointer to the structure of registers of the peripheral.
 * @param[in] trigger   Value to be set.
 * @param[in] timestamp True if timestamped trigger is to be used, false otherwise.
 */
NRF_STATIC_INLINE void nrf_stmesp_invariant_trigger_32_set(NRF_STMESP_Type * p_reg,
                                                           uint32_t          trigger,
                                                           bool              timestamp);

/**
 * @brief Function for setting the invariant timing trigger with 64-bit value.
 *
 * @param[in] p_reg     Pointer to the structure of registers of the peripheral.
 * @param[in] trigger   Value to be set.
 * @param[in] timestamp True if timestamped trigger is to be used, false otherwise.
 */
NRF_STATIC_INLINE void nrf_stmesp_invariant_trigger_64_set(NRF_STMESP_Type * p_reg,
                                                           uint64_t          trigger,
                                                           bool              timestamp);

#ifndef NRF_DECLARE_ONLY
NRF_STATIC_INLINE
volatile void * nrf_stmesp_guaranteed_data_addr_get(NRF_STMESP_Type * p_reg,
                                                    bool              timestamp,
                                                    bool              marked)
{
    if (timestamp)
    {
        if (marked)
        {
            return &p_reg->G_DMTS;
        }
        else
        {
            return &p_reg->G_DTS;
        }
    }
    else
    {
        if (marked)
        {
            return &p_reg->G_DM;
        }
        else
        {
            return &p_reg->G_D;
        }
    }
}

NRF_STATIC_INLINE
volatile void * nrf_stmesp_guaranteed_flag_addr_get(NRF_STMESP_Type * p_reg,
                                                    bool              timestamp)
{
    if (timestamp)
    {
        return &p_reg->G_FLAGTS;
    }
    else
    {
        return &p_reg->G_FLAG;
    }
}

NRF_STATIC_INLINE
volatile void * nrf_stmesp_guaranteed_trigger_addr_get(NRF_STMESP_Type * p_reg,
                                                       bool              timestamp)
{
    if (timestamp)
    {
        return &p_reg->G_TRIGTS;
    }
    else
    {
        return &p_reg->G_TRIG;
    }
}

NRF_STATIC_INLINE
volatile void * nrf_stmesp_invariant_data_addr_get(NRF_STMESP_Type * p_reg,
                                                   bool              timestamp,
                                                   bool              marked)
{
    if (timestamp)
    {
        if (marked)
        {
            return &p_reg->I_DMTS;
        }
        else
        {
            return &p_reg->I_DTS;
        }
    }
    else
    {
        if (marked)
        {
            return &p_reg->I_DM;
        }
        else
        {
            return &p_reg->I_D;
        }
    }
}

NRF_STATIC_INLINE
volatile void * nrf_stmesp_invariant_flag_addr_get(NRF_STMESP_Type * p_reg,
                                                   bool              timestamp)
{
    if (timestamp)
    {
        return &p_reg->I_FLAGTS;
    }
    else
    {
        return &p_reg->I_FLAG;
    }
}

NRF_STATIC_INLINE
volatile void * nrf_stmesp_invariant_trigger_addr_get(NRF_STMESP_Type * p_reg,
                                                      bool              timestamp)
{
    if (timestamp)
    {
        return &p_reg->I_TRIGTS;
    }
    else
    {
        return &p_reg->I_TRIG;
    }
}

NRF_STATIC_INLINE void nrf_stmesp_guaranteed_data_8_set(NRF_STMESP_Type * p_reg,
                                                        uint8_t           data,
                                                        bool              timestamp,
                                                        bool              marked)
{
    *(volatile uint8_t *)nrf_stmesp_guaranteed_data_addr_get(p_reg, timestamp, marked) = data;
}

NRF_STATIC_INLINE void nrf_stmesp_guaranteed_data_16_set(NRF_STMESP_Type * p_reg,
                                                         uint16_t          data,
                                                         bool              timestamp,
                                                         bool              marked)
{
    *(volatile uint16_t *)nrf_stmesp_guaranteed_data_addr_get(p_reg, timestamp, marked) = data;
}

NRF_STATIC_INLINE void nrf_stmesp_guaranteed_data_32_set(NRF_STMESP_Type * p_reg,
                                                         uint32_t          data,
                                                         bool              timestamp,
                                                         bool              marked)
{
    *(volatile uint32_t *)nrf_stmesp_guaranteed_data_addr_get(p_reg, timestamp, marked) = data;
}

NRF_STATIC_INLINE void nrf_stmesp_guaranteed_data_64_set(NRF_STMESP_Type * p_reg,
                                                         uint64_t          data,
                                                         bool              timestamp,
                                                         bool              marked)
{
    *(volatile uint64_t *)nrf_stmesp_guaranteed_data_addr_get(p_reg, timestamp, marked) = data;
}

NRF_STATIC_INLINE void nrf_stmesp_guaranteed_flag_8_set(NRF_STMESP_Type * p_reg,
                                                        uint8_t           flag,
                                                        bool              timestamp)
{
    *(volatile uint8_t *)nrf_stmesp_guaranteed_flag_addr_get(p_reg, timestamp) = flag;
}

NRF_STATIC_INLINE void nrf_stmesp_guaranteed_flag_16_set(NRF_STMESP_Type * p_reg,
                                                         uint16_t          flag,
                                                         bool              timestamp)
{
    *(volatile uint16_t *)nrf_stmesp_guaranteed_flag_addr_get(p_reg, timestamp) = flag;
}

NRF_STATIC_INLINE void nrf_stmesp_guaranteed_flag_32_set(NRF_STMESP_Type * p_reg,
                                                         uint32_t          flag,
                                                         bool              timestamp)
{
    *(volatile uint32_t *)nrf_stmesp_guaranteed_flag_addr_get(p_reg, timestamp) = flag;
}

NRF_STATIC_INLINE void nrf_stmesp_guaranteed_flag_64_set(NRF_STMESP_Type * p_reg,
                                                         uint64_t          flag,
                                                         bool              timestamp)
{
    *(volatile uint64_t *)nrf_stmesp_guaranteed_flag_addr_get(p_reg, timestamp) = flag;
}

NRF_STATIC_INLINE void nrf_stmesp_guaranteed_trigger_8_set(NRF_STMESP_Type * p_reg,
                                                           uint8_t           trigger,
                                                           bool              timestamp)
{
    *(volatile uint8_t *)nrf_stmesp_guaranteed_trigger_addr_get(p_reg, timestamp) = trigger;
}

NRF_STATIC_INLINE void nrf_stmesp_guaranteed_trigger_16_set(NRF_STMESP_Type * p_reg,
                                                            uint16_t          trigger,
                                                            bool              timestamp)
{
    *(volatile uint16_t *)nrf_stmesp_guaranteed_trigger_addr_get(p_reg, timestamp) = trigger;
}

NRF_STATIC_INLINE void nrf_stmesp_guaranteed_trigger_32_set(NRF_STMESP_Type * p_reg,
                                                            uint32_t          trigger,
                                                            bool              timestamp)
{
    *(volatile uint32_t *)nrf_stmesp_guaranteed_trigger_addr_get(p_reg, timestamp) = trigger;
}

NRF_STATIC_INLINE void nrf_stmesp_guaranteed_trigger_64_set(NRF_STMESP_Type * p_reg,
                                                            uint64_t          trigger,
                                                            bool              timestamp)
{
    *(volatile uint64_t *)nrf_stmesp_guaranteed_trigger_addr_get(p_reg, timestamp) = trigger;
}

NRF_STATIC_INLINE void nrf_stmesp_invariant_data_8_set(NRF_STMESP_Type * p_reg,
                                                       uint8_t           data,
                                                       bool              timestamp,
                                                       bool              marked)
{
    *(volatile uint8_t *)nrf_stmesp_invariant_data_addr_get(p_reg, timestamp, marked) = data;
}

NRF_STATIC_INLINE void nrf_stmesp_invariant_data_16_set(NRF_STMESP_Type * p_reg,
                                                        uint16_t          data,
                                                        bool              timestamp,
                                                        bool              marked)
{
    *(volatile uint16_t *)nrf_stmesp_invariant_data_addr_get(p_reg, timestamp, marked) = data;
}

NRF_STATIC_INLINE void nrf_stmesp_invariant_data_32_set(NRF_STMESP_Type * p_reg,
                                                        uint32_t          data,
                                                        bool              timestamp,
                                                        bool              marked)
{
    *(volatile uint32_t *)nrf_stmesp_invariant_data_addr_get(p_reg, timestamp, marked) = data;
}

NRF_STATIC_INLINE void nrf_stmesp_invariant_data_64_set(NRF_STMESP_Type * p_reg,
                                                        uint64_t          data,
                                                        bool              timestamp,
                                                        bool              marked)
{
    *(volatile uint64_t *)nrf_stmesp_invariant_data_addr_get(p_reg, timestamp, marked) = data;
}

NRF_STATIC_INLINE void nrf_stmesp_invariant_flag_8_set(NRF_STMESP_Type * p_reg,
                                                       uint8_t           flag,
                                                       bool              timestamp)
{
    *(volatile uint8_t *)nrf_stmesp_invariant_flag_addr_get(p_reg, timestamp) = flag;
}

NRF_STATIC_INLINE void nrf_stmesp_invariant_flag_16_set(NRF_STMESP_Type * p_reg,
                                                        uint16_t          flag,
                                                        bool              timestamp)
{
    *(volatile uint16_t *)nrf_stmesp_invariant_flag_addr_get(p_reg, timestamp) = flag;
}

NRF_STATIC_INLINE void nrf_stmesp_invariant_flag_32_set(NRF_STMESP_Type * p_reg,
                                                        uint32_t          flag,
                                                        bool              timestamp)
{
    *(volatile uint32_t *)nrf_stmesp_invariant_flag_addr_get(p_reg, timestamp) = flag;
}

NRF_STATIC_INLINE void nrf_stmesp_invariant_flag_64_set(NRF_STMESP_Type * p_reg,
                                                        uint64_t          flag,
                                                        bool              timestamp)
{
    *(volatile uint64_t *)nrf_stmesp_invariant_flag_addr_get(p_reg, timestamp) = flag;
}

NRF_STATIC_INLINE void nrf_stmesp_invariant_trigger_8_set(NRF_STMESP_Type * p_reg,
                                                          uint8_t           trigger,
                                                          bool              timestamp)
{
    *(volatile uint8_t *)nrf_stmesp_invariant_trigger_addr_get(p_reg, timestamp) = trigger;
}

NRF_STATIC_INLINE void nrf_stmesp_invariant_trigger_16_set(NRF_STMESP_Type * p_reg,
                                                           uint16_t          trigger,
                                                           bool              timestamp)
{
    *(volatile uint16_t *)nrf_stmesp_invariant_trigger_addr_get(p_reg, timestamp) = trigger;
}

NRF_STATIC_INLINE void nrf_stmesp_invariant_trigger_32_set(NRF_STMESP_Type * p_reg,
                                                           uint32_t          trigger,
                                                           bool              timestamp)
{
    *(volatile uint32_t *)nrf_stmesp_invariant_trigger_addr_get(p_reg, timestamp) = trigger;
}

NRF_STATIC_INLINE void nrf_stmesp_invariant_trigger_64_set(NRF_STMESP_Type * p_reg,
                                                           uint64_t          trigger,
                                                           bool              timestamp)
{
    *(volatile uint64_t *)nrf_stmesp_invariant_trigger_addr_get(p_reg, timestamp) = trigger;
}

#endif // NRF_DECLARE_ONLY

/** @} */

#ifdef __cplusplus
}
#endif

#endif // NRF_STMESP_H__
