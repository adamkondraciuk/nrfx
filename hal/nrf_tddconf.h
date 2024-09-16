/*$$$LICENCE_NORDIC_STANDARD<2024>$$$*/

#ifndef NRF_TDDCONF_H__
#define NRF_TDDCONF_H__

#include <nrfx.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrf_tddconf_hal TDDCONF HAL
 * @{
 * @ingroup nrf_tddconf
 * @brief   Hardware access layer for managing the Tracedata and Debug Configuration (TDDCONF).
 */

/** @brief TDDCONF trace port clock speed. */
typedef enum
{
#if defined(TDDCONF_TRACEPORTSPEED_SPEED_Speed3125KHz)
    NRF_TDDCONF_SPEED_3_125MHZ  = TDDCONF_TRACEPORTSPEED_SPEED_Speed3125KHz,  /*!< Speed 3.125MHz. */
#endif
#if defined(TDDCONF_TRACEPORTSPEED_SPEED_Speed6250KH)
    NRF_TDDCONF_SPEED_6_25MHZ   = TDDCONF_TRACEPORTSPEED_SPEED_Speed6250KHz,  /*!< Speed 6.25MHz. */
#endif
#if defined(TDDCONF_TRACEPORTSPEED_SPEED_Speed10MHz)
    NRF_TDDCONF_SPEED_10MHZ     = TDDCONF_TRACEPORTSPEED_SPEED_Speed10MHz,    /*!< Speed 10MHz. */
#endif
#if defined(TDDCONF_TRACEPORTSPEED_SPEED_Speed12500KHz)
    NRF_TDDCONF_SPEED_12_5MHZ   = TDDCONF_TRACEPORTSPEED_SPEED_Speed12500KHz, /*!< Speed 12.5MHz. */
#endif
#if defined(TDDCONF_TRACEPORTSPEED_SPEED_Speed20MHz)
    NRF_TDDCONF_SPEED_20MHZ     = TDDCONF_TRACEPORTSPEED_SPEED_Speed20MHz,    /*!< Speed 20MHz. */
#endif
#if defined(TDDCONF_TRACEPORTSPEED_SPEED_Speed25MHz)
    NRF_TDDCONF_SPEED_25MHZ     = TDDCONF_TRACEPORTSPEED_SPEED_Speed25MHz,    /*!< Speed 25MHz. */
#endif
#if defined(TDDCONF_TRACEPORTSPEED_SPEED_Speed40MHz)
    NRF_TDDCONF_SPEED_40MHZ     = TDDCONF_TRACEPORTSPEED_SPEED_Speed40MHz,    /*!< Speed 40MHz. */
#endif
#if defined(TDDCONF_TRACEPORTSPEED_SPEED_Speed50MHz)
    NRF_TDDCONF_SPEED_50MHZ     = TDDCONF_TRACEPORTSPEED_SPEED_Speed50MHz,    /*!< Speed 50MHz. */
#endif
#if defined(TDDCONF_TRACEPORTSPEED_SPEED_Speed80MHz)
    NRF_TDDCONF_SPEED_80MHZ     = TDDCONF_TRACEPORTSPEED_SPEED_Speed80MHz,    /*!< Speed 80MHz. */
#endif
#if defined(TDDCONF_TRACEPORTSPEED_SPEED_Speed100MHz)
    NRF_TDDCONF_SPEED_100MHZ    = TDDCONF_TRACEPORTSPEED_SPEED_Speed100MHz,   /*!< Speed 100MHz. */
#endif
} nrf_tddconf_speed_t;

/** @brief TDDCONF domain. */
typedef enum
{
    NRF_TDDCONF_DOMAIN_SYSTEM, /*!< TDDCONF system domain. */
    NRF_TDDCONF_DOMAIN_DEBUG   /*!< TDDCONF debug domain. */
} nrf_tddconf_domain_t;

/**
 * @brief Function for setting request in specified domain.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] domain TDDCONF domain.
 * @param[in] active True if request is to be activated, false if otherwise.
 */
NRF_STATIC_INLINE void nrf_tddconf_power_up_request_set(NRF_TDDCONF_Type *   p_reg,
                                                        nrf_tddconf_domain_t domain,
                                                        bool                 active);

/**
 * @brief Function for setting trace port trace clock speed.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] speed TDDCONF clock speed.
 */
NRF_STATIC_INLINE void nrf_tddconf_clock_speed_set(NRF_TDDCONF_Type *  p_reg,
                                                   nrf_tddconf_speed_t speed);

/**
 * @brief Function for getting trace port trace clock speed.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return TDDCONF clock speed.
 */
NRF_STATIC_INLINE nrf_tddconf_speed_t nrf_tddconf_clock_speed_get(NRF_TDDCONF_Type const * p_reg);

/**
 * @brief Function for checking power-up request status in specified domain.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] domain TDDCONF domain.
 *
 * @retval true  Power-up requested.
 * @retval false Power-up not requested.
 */
NRF_STATIC_INLINE bool nrf_tddconf_power_up_request_status_check(NRF_TDDCONF_Type const * p_reg,
                                                                 nrf_tddconf_domain_t     domain);

#ifndef NRF_DECLARE_ONLY

NRF_STATIC_INLINE void nrf_tddconf_power_up_request_set(NRF_TDDCONF_Type *   p_reg,
                                                        nrf_tddconf_domain_t domain,
                                                        bool                 active)
{
    switch (domain)
    {
        case NRF_TDDCONF_DOMAIN_SYSTEM:
            p_reg->SYSPWRUPREQ = active ? TDDCONF_SYSPWRUPREQ_ACTIVE_Active :
                                          TDDCONF_SYSPWRUPREQ_ACTIVE_NotActive;
            break;
        case NRF_TDDCONF_DOMAIN_DEBUG:
            p_reg->DBGPWRUPREQ = active ? TDDCONF_DBGPWRUPREQ_ACTIVE_Active :
                                          TDDCONF_DBGPWRUPREQ_ACTIVE_NotActive;
            break;
        default:
            NRFX_ASSERT(0);
            break;
    }
}

NRF_STATIC_INLINE void nrf_tddconf_clock_speed_set(NRF_TDDCONF_Type *  p_reg,
                                                   nrf_tddconf_speed_t speed)
{
    p_reg->TRACEPORTSPEED = (uint32_t)(speed);
}

NRF_STATIC_INLINE nrf_tddconf_speed_t nrf_tddconf_clock_speed_get(NRF_TDDCONF_Type const * p_reg)
{
    return (nrf_tddconf_speed_t)(p_reg->TRACEPORTSPEED);
}

NRF_STATIC_INLINE bool nrf_tddconf_power_up_request_status_check(NRF_TDDCONF_Type const * p_reg,
                                                                 nrf_tddconf_domain_t     domain)
{
    switch (domain)
    {
        case NRF_TDDCONF_DOMAIN_SYSTEM:
            return ((p_reg->DEBUGPOWERREQSTATUS
                          & TDDCONF_DEBUGPOWERREQSTATUS_SYSPWRUPREQUESTED_Msk)
                         >> TDDCONF_DEBUGPOWERREQSTATUS_SYSPWRUPREQUESTED_Pos)
                         == TDDCONF_DEBUGPOWERREQSTATUS_SYSPWRUPREQUESTED_PowerReq;
        case NRF_TDDCONF_DOMAIN_DEBUG:
            return ((p_reg->DEBUGPOWERREQSTATUS
                          & TDDCONF_DEBUGPOWERREQSTATUS_DBGPWRUPREQUESTED_Msk)
                         >> TDDCONF_DEBUGPOWERREQSTATUS_DBGPWRUPREQUESTED_Pos)
                         == TDDCONF_DEBUGPOWERREQSTATUS_DBGPWRUPREQUESTED_PowerReq;
        default:
            NRFX_ASSERT(0);
            return false;
    }
}

#endif // NRF_DECLARE_ONLY

/** @} */

#ifdef __cplusplus
}
#endif

#endif // NRF_TDDCONF_H__
