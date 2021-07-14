/*$$$LICENCE_NORDIC_STANDARD<2021>$$$*/

#ifndef NRF_TAMPC_H_
#define NRF_TAMPC_H_

#include <nrfx.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrf_tampc_hal TAMPC HAL
 * @{
 * @ingroup nrf_tampc
 * @brief   Hardware access layer for managing the Tamper Controller (TAMPC)
 *          peripheral.
 */

/** @brief Control register debug types. */
typedef enum
{
    NRF_TAMPC_CTRL_DBGEN,    /**< Invasive (halting) debug. */
    NRF_TAMPC_CTRL_NIDEN,    /**< Non-invasive debug. */
    NRF_TAMPC_CTRL_SPIDEN,   /**< Secure privileged invasive (halting) debug. */
    NRF_TAMPC_CTRL_SPNIDEN,  /**< Secure privileged non-invasive debug. */
    NRF_TAMPC_CTRL_DEVICEEN, /**< Domain circuitry. */
} nrf_tampc_debug_type_t;

/**
 * @brief Function for setting signal value of the domain control register for 
 *        given debug type and domain.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] type   Debug type that will be modified.
 * @param[in] domain Domain for which the value will be modified.
 * @param[in] enable True if signal is to be logic 1, false if logic 0.
 */
NRF_STATIC_INLINE void nrf_tampc_domain_ctrl_value_set(NRF_TAMPC_Type *       p_reg,
                                                       nrf_tampc_debug_type_t type,
                                                       nrf_domain_t           domain,
                                                       bool                   enable);

/**
 * @brief Function for getting the signal value of the domain control register for
 *        given debug type and domain.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] type   Debug type that will be retrieved.
 * @param[in] domain Domain for which the value will be retrieved.
 *
 * @retval true  Signal is logic 1.
 * @retval false Signal is logic 0.
 */
NRF_STATIC_INLINE bool nrf_tampc_domain_ctrl_value_get(NRF_TAMPC_Type const * p_reg,
                                                       nrf_tampc_debug_type_t type,
                                                       nrf_domain_t           domain);

/**
 * @brief Function for setting signal value of the access port control register for 
 *        given debug type and domain.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] type   Debug type that will be modified.
 * @param[in] domain Domain for which the value will be modified.
 * @param[in] enable True if signal is to be logic 1, false if logic 0.
 */
NRF_STATIC_INLINE void nrf_tampc_ap_ctrl_value_set(NRF_TAMPC_Type *       p_reg,
                                                   nrf_tampc_debug_type_t type,
                                                   nrf_domain_t           domain,
                                                   bool                   enable);

/**
 * @brief Function for getting the signal value of the access port control register for
 *        given debug type and domain.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] type   Debug type that will be retrieved.
 * @param[in] domain Domain for which the value will be retrieved.
 *
 * @retval true  Signal is logic 1.
 * @retval false Signal is logic 0.
 */
NRF_STATIC_INLINE bool nrf_tampc_ap_ctrl_value_get(NRF_TAMPC_Type const * p_reg,
                                                   nrf_tampc_debug_type_t type,
                                                   nrf_domain_t           domain);


#ifndef NRF_DECLARE_ONLY

NRF_STATIC_INLINE void nrf_tampc_domain_ctrl_value_set(NRF_TAMPC_Type *       p_reg,
                                                       nrf_tampc_debug_type_t type,
                                                       nrf_domain_t           domain,
                                                       bool                   enable)
{
    NRFX_ASSERT(domain > 0);
    NRFX_ASSERT(domain < NRF_DOMAIN_COUNT);

    switch (type)
    {
        case NRF_TAMPC_CTRL_DBGEN:
#if defined(RTL_DOMINOZ) || defined(RTL_DANNY)
            p_reg->PROTECT.DOMAIN[domain].DBGEN = ((p_reg->PROTECT.DOMAIN[domain].DBGEN &
                                                    ~TAMPC_PROTECT_DOMAIN_DBGEN_VALUE_Msk) |
                                                   ((enable ? TAMPC_PROTECT_DOMAIN_DBGEN_VALUE_High
                                                     : TAMPC_PROTECT_DOMAIN_DBGEN_VALUE_Low)
                                                    << TAMPC_PROTECT_DOMAIN_DBGEN_VALUE_Pos));
#else
            p_reg->PROTECT.DOMAIN[domain].DBGEN.CTRL = ((p_reg->PROTECT.DOMAIN[domain].DBGEN.CTRL &
                                                    ~TAMPC_PROTECT_DOMAIN_DBGEN_CTRL_VALUE_Msk) |
                                                   ((enable ? TAMPC_PROTECT_DOMAIN_DBGEN_CTRL_VALUE_High
                                                     : TAMPC_PROTECT_DOMAIN_DBGEN_CTRL_VALUE_Low)
                                                    << TAMPC_PROTECT_DOMAIN_DBGEN_CTRL_VALUE_Pos));
#endif
            break;
        case NRF_TAMPC_CTRL_NIDEN:
#if defined(RTL_DOMINOZ) || defined(RTL_DANNY)
            p_reg->PROTECT.DOMAIN[domain].NIDEN = ((p_reg->PROTECT.DOMAIN[domain].NIDEN &
                                                    ~TAMPC_PROTECT_DOMAIN_NIDEN_VALUE_Msk) |
                                                   ((enable ? TAMPC_PROTECT_DOMAIN_NIDEN_VALUE_High
                                                     : TAMPC_PROTECT_DOMAIN_NIDEN_VALUE_Low)
                                                    << TAMPC_PROTECT_DOMAIN_NIDEN_VALUE_Pos));
#else
            p_reg->PROTECT.DOMAIN[domain].NIDEN.CTRL = ((p_reg->PROTECT.DOMAIN[domain].NIDEN.CTRL &
                                                    ~TAMPC_PROTECT_DOMAIN_NIDEN_CTRL_VALUE_Msk) |
                                                   ((enable ? TAMPC_PROTECT_DOMAIN_NIDEN_CTRL_VALUE_High
                                                     : TAMPC_PROTECT_DOMAIN_NIDEN_CTRL_VALUE_Low)
                                                    << TAMPC_PROTECT_DOMAIN_NIDEN_CTRL_VALUE_Pos));
#endif
            break;
        case NRF_TAMPC_CTRL_SPIDEN:
#if defined(RTL_DOMINOZ) || defined(RTL_DANNY)
            p_reg->PROTECT.DOMAIN[domain].SPIDEN = ((p_reg->PROTECT.DOMAIN[domain].SPIDEN &
                                                     ~TAMPC_PROTECT_DOMAIN_SPIDEN_VALUE_Msk) |
                                                    ((enable ? TAMPC_PROTECT_DOMAIN_SPIDEN_VALUE_High
                                                      : TAMPC_PROTECT_DOMAIN_SPIDEN_VALUE_Low)
                                                     << TAMPC_PROTECT_DOMAIN_SPIDEN_VALUE_Pos));
#else
            p_reg->PROTECT.DOMAIN[domain].SPIDEN.CTRL = ((p_reg->PROTECT.DOMAIN[domain].SPIDEN.CTRL &
                                                     ~TAMPC_PROTECT_DOMAIN_SPIDEN_CTRL_VALUE_Msk) |
                                                    ((enable ? TAMPC_PROTECT_DOMAIN_SPIDEN_CTRL_VALUE_High
                                                      : TAMPC_PROTECT_DOMAIN_SPIDEN_CTRL_VALUE_Low)
                                                     << TAMPC_PROTECT_DOMAIN_SPIDEN_CTRL_VALUE_Pos));
#endif
            break;
        case NRF_TAMPC_CTRL_SPNIDEN:
#if defined(RTL_DOMINOZ) || defined(RTL_DANNY)
            p_reg->PROTECT.DOMAIN[domain].SPNIDEN = ((p_reg->PROTECT.DOMAIN[domain].SPNIDEN &
                                                      ~TAMPC_PROTECT_DOMAIN_SPNIDEN_VALUE_Msk) |
                                                     ((enable ? TAMPC_PROTECT_DOMAIN_SPNIDEN_VALUE_High
                                                       : TAMPC_PROTECT_DOMAIN_SPNIDEN_VALUE_Low)
                                                      << TAMPC_PROTECT_DOMAIN_SPNIDEN_VALUE_Pos));
#else
            p_reg->PROTECT.DOMAIN[domain].SPNIDEN.CTRL = ((p_reg->PROTECT.DOMAIN[domain].SPNIDEN.CTRL &
                                                      ~TAMPC_PROTECT_DOMAIN_SPNIDEN_CTRL_VALUE_Msk) |
                                                     ((enable ? TAMPC_PROTECT_DOMAIN_SPNIDEN_CTRL_VALUE_High
                                                       : TAMPC_PROTECT_DOMAIN_SPNIDEN_CTRL_VALUE_Low)
                                                      << TAMPC_PROTECT_DOMAIN_SPNIDEN_CTRL_VALUE_Pos));
#endif
            break;
        default:
            NRFX_ASSERT(0);
    }
}

NRF_STATIC_INLINE bool nrf_tampc_domain_ctrl_value_get(NRF_TAMPC_Type const * p_reg,
                                                       nrf_tampc_debug_type_t type,
                                                       nrf_domain_t           domain)
{
    NRFX_ASSERT(domain > 0);
    NRFX_ASSERT(domain < NRF_DOMAIN_COUNT);

    switch (type)
    {
        case NRF_TAMPC_CTRL_DBGEN:
#if defined(RTL_DOMINOZ) || defined(RTL_DANNY)
            return ((p_reg->PROTECT.DOMAIN[domain].DBGEN & TAMPC_PROTECT_DOMAIN_DBGEN_VALUE_Msk)
                    >> TAMPC_PROTECT_DOMAIN_DBGEN_VALUE_Pos);
#else
            return ((p_reg->PROTECT.DOMAIN[domain].DBGEN.CTRL & TAMPC_PROTECT_DOMAIN_DBGEN_CTRL_VALUE_Msk)
                    >> TAMPC_PROTECT_DOMAIN_DBGEN_CTRL_VALUE_Pos);
#endif
        case NRF_TAMPC_CTRL_NIDEN:
#if defined(RTL_DOMINOZ) || defined(RTL_DANNY)
            return ((p_reg->PROTECT.DOMAIN[domain].NIDEN & TAMPC_PROTECT_DOMAIN_NIDEN_VALUE_Msk)
                    >> TAMPC_PROTECT_DOMAIN_NIDEN_VALUE_Pos);
#else
            return ((p_reg->PROTECT.DOMAIN[domain].NIDEN.CTRL & TAMPC_PROTECT_DOMAIN_NIDEN_CTRL_VALUE_Msk)
                    >> TAMPC_PROTECT_DOMAIN_NIDEN_CTRL_VALUE_Pos);
#endif
        case NRF_TAMPC_CTRL_SPIDEN:
#if defined(RTL_DOMINOZ) || defined(RTL_DANNY)
            return ((p_reg->PROTECT.DOMAIN[domain].SPIDEN & TAMPC_PROTECT_DOMAIN_SPIDEN_VALUE_Msk)
                    >> TAMPC_PROTECT_DOMAIN_SPIDEN_VALUE_Pos);
#else
            return ((p_reg->PROTECT.DOMAIN[domain].SPIDEN.CTRL & TAMPC_PROTECT_DOMAIN_SPIDEN_CTRL_VALUE_Msk)
                    >> TAMPC_PROTECT_DOMAIN_SPIDEN_CTRL_VALUE_Pos);
#endif
        case NRF_TAMPC_CTRL_SPNIDEN:
#if defined(RTL_DOMINOZ) || defined(RTL_DANNY)
            return ((p_reg->PROTECT.DOMAIN[domain].SPNIDEN & TAMPC_PROTECT_DOMAIN_SPNIDEN_VALUE_Msk)
                    >> TAMPC_PROTECT_DOMAIN_SPNIDEN_VALUE_Pos);
#else
            return ((p_reg->PROTECT.DOMAIN[domain].SPNIDEN.CTRL & TAMPC_PROTECT_DOMAIN_SPNIDEN_CTRL_VALUE_Msk)
                    >> TAMPC_PROTECT_DOMAIN_SPNIDEN_CTRL_VALUE_Pos);
#endif
        default:
            NRFX_ASSERT(0);
            return false;
    }
}

NRF_STATIC_INLINE void nrf_tampc_ap_ctrl_value_set(NRF_TAMPC_Type *       p_reg,
                                                   nrf_tampc_debug_type_t type,
                                                   nrf_domain_t           domain,
                                                   bool                   enable)
{
    NRFX_ASSERT(domain > 0);
    NRFX_ASSERT(domain < NRF_DOMAIN_COUNT);

    switch (type)
    {
        case NRF_TAMPC_CTRL_DBGEN:
#if defined(RTL_DOMINOZ) || defined(RTL_DANNY)
            p_reg->PROTECT.AP[domain].DBGEN = ((p_reg->PROTECT.AP[domain].DBGEN &
                                                ~TAMPC_PROTECT_AP_DBGEN_VALUE_Msk) |
                                               ((enable ? TAMPC_PROTECT_AP_DBGEN_VALUE_High :
                                                 TAMPC_PROTECT_AP_DBGEN_VALUE_Low)
                                                << TAMPC_PROTECT_AP_DBGEN_VALUE_Pos));
#else
            p_reg->PROTECT.AP[domain].DBGEN.CTRL = ((p_reg->PROTECT.AP[domain].DBGEN.CTRL &
                                                ~TAMPC_PROTECT_AP_DBGEN_CTRL_VALUE_Msk) |
                                               ((enable ? TAMPC_PROTECT_AP_DBGEN_CTRL_VALUE_High :
                                                 TAMPC_PROTECT_AP_DBGEN_CTRL_VALUE_Low)
                                                << TAMPC_PROTECT_AP_DBGEN_CTRL_VALUE_Pos));
#endif
            break;
        case NRF_TAMPC_CTRL_SPIDEN:
#if defined(RTL_DOMINOZ) || defined(RTL_DANNY)
            p_reg->PROTECT.AP[domain].SPIDEN = ((p_reg->PROTECT.AP[domain].SPIDEN &
                                                 ~TAMPC_PROTECT_AP_SPIDEN_VALUE_Msk) |
                                                ((enable ? TAMPC_PROTECT_AP_SPIDEN_VALUE_High :
                                                  TAMPC_PROTECT_AP_SPIDEN_VALUE_Low)
                                                 << TAMPC_PROTECT_AP_SPIDEN_VALUE_Pos));
#else
            p_reg->PROTECT.AP[domain].SPIDEN.CTRL = ((p_reg->PROTECT.AP[domain].SPIDEN.CTRL &
                                                 ~TAMPC_PROTECT_AP_SPIDEN_CTRL_VALUE_Msk) |
                                                ((enable ? TAMPC_PROTECT_AP_SPIDEN_CTRL_VALUE_High :
                                                  TAMPC_PROTECT_AP_SPIDEN_CTRL_VALUE_Low)
                                                 << TAMPC_PROTECT_AP_SPIDEN_CTRL_VALUE_Pos));
#endif
            break;
        default:
            NRFX_ASSERT(0);
    }
}

NRF_STATIC_INLINE bool nrf_tampc_ap_ctrl_value_get(NRF_TAMPC_Type const * p_reg,
                                                   nrf_tampc_debug_type_t type,
                                                   nrf_domain_t           domain)
{
    NRFX_ASSERT(domain > 0);
    NRFX_ASSERT(domain < NRF_DOMAIN_COUNT);

    switch (type)
    {
        case NRF_TAMPC_CTRL_DBGEN:
#if defined(RTL_DOMINOZ) || defined(RTL_DANNY)
            return ((p_reg->PROTECT.AP[domain].DBGEN & TAMPC_PROTECT_AP_DBGEN_VALUE_Msk)
                    >> TAMPC_PROTECT_AP_DBGEN_VALUE_Pos);
#else
            return ((p_reg->PROTECT.AP[domain].DBGEN.CTRL & TAMPC_PROTECT_AP_DBGEN_CTRL_VALUE_Msk)
                    >> TAMPC_PROTECT_AP_DBGEN_CTRL_VALUE_Pos);
#endif
        case NRF_TAMPC_CTRL_SPIDEN:
#if defined(RTL_DOMINOZ) || defined(RTL_DANNY)
            return ((p_reg->PROTECT.AP[domain].SPIDEN & TAMPC_PROTECT_AP_SPIDEN_VALUE_Msk)
                    >> TAMPC_PROTECT_AP_SPIDEN_VALUE_Pos);
#else
            return ((p_reg->PROTECT.AP[domain].SPIDEN.CTRL & TAMPC_PROTECT_AP_SPIDEN_CTRL_VALUE_Msk)
                    >> TAMPC_PROTECT_AP_SPIDEN_CTRL_VALUE_Pos);
#endif
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

#endif /* NRF_TAMPC_H_ */
