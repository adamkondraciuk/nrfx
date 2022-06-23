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

#if defined(LILIUMSOC1_XXAA) || defined(__NRFX_DOXYGEN__)
/** @brief Write key. */
/* @todo Assert all KEY values and offsets are equal. */
#define NRF_TAMPC_KEY_MASK 0
#else
#define NRF_TAMPC_KEY_MASK (TAMPC_PROTECT_DOMAIN_DBGEN_CTRL_KEY_KEY \
                            << TAMPC_PROTECT_DOMAIN_DBGEN_CTRL_KEY_Pos)
#endif

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
 * @brief Function for setting lock value of the domain control register for 
 *        given debug type and domain.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] type   Debug type that will be modified.
 * @param[in] domain Domain for which the value will be modified.
 * @param[in] enable True if register is to be locked, false otherwise.
 */
NRF_STATIC_INLINE void nrf_tampc_domain_ctrl_lock_set(NRF_TAMPC_Type *       p_reg,
                                                      nrf_tampc_debug_type_t type,
                                                      nrf_domain_t           domain,
                                                      bool                   enable);

/**
 * @brief Function for getting the lock value of the domain control register for
 *        given debug type and domain.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] type   Debug type that will be retrieved.
 * @param[in] domain Domain for which the value will be retrieved.
 *
 * @retval true  Register is locked.
 * @retval false Register is unlocked.
 */
NRF_STATIC_INLINE bool nrf_tampc_domain_ctrl_lock_get(NRF_TAMPC_Type const * p_reg,
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

/**
 * @brief Function for setting lock value of the access port control register for 
 *        given debug type and domain.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] type   Debug type that will be modified.
 * @param[in] domain Domain for which the value will be modified.
 * @param[in] enable True if register is to be locked, false otherwise.
 */
NRF_STATIC_INLINE void nrf_tampc_ap_ctrl_lock_set(NRF_TAMPC_Type *       p_reg,
                                                  nrf_tampc_debug_type_t type,
                                                  nrf_domain_t           domain,
                                                  bool                   enable);

/**
 * @brief Function for getting the lock value of the access port control register for
 *        given debug type and domain.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] type   Debug type that will be retrieved.
 * @param[in] domain Domain for which the value will be retrieved.
 *
 * @retval true  Register is locked.
 * @retval false Register is unlocked.
 */
NRF_STATIC_INLINE bool nrf_tampc_ap_ctrl_lock_get(NRF_TAMPC_Type const * p_reg,
                                                  nrf_tampc_debug_type_t type,
                                                  nrf_domain_t           domain);

/**
 * @brief Function for setting signal value of the Coresight register for given debug type.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] type   Debug type that will be modified.
 * @param[in] enable True if signal is to be logic 1, false if logic 0.
 */
NRF_STATIC_INLINE void nrf_tampc_coresight_ctrl_value_set(NRF_TAMPC_Type *       p_reg,
                                                          nrf_tampc_debug_type_t type,
                                                          bool                   enable);

/**
 * @brief Function for getting the signal value of the Coresight register for given debug type.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] type  Debug type that will be retrieved.
 *
 * @retval true  Signal is logic 1.
 * @retval false Signal is logic 0.
 */
NRF_STATIC_INLINE bool nrf_tampc_coresight_ctrl_value_get(NRF_TAMPC_Type const * p_reg,
                                                          nrf_tampc_debug_type_t type);

/**
 * @brief Function for setting lock value of the Coresight register for given debug type.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] type   Debug type that will be modified.
 * @param[in] enable True if register is to be locked, false otherwise.
 */
NRF_STATIC_INLINE void nrf_tampc_coresight_ctrl_lock_set(NRF_TAMPC_Type *       p_reg,
                                                         nrf_tampc_debug_type_t type,
                                                         bool                   enable);

/**
 * @brief Function for getting the lock value of the Coresight register for given debug type.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] type  Debug type that will be retrieved.
 *
 * @retval true  Register is locked.
 * @retval false Register is unlocked.
 */
NRF_STATIC_INLINE bool nrf_tampc_coresight_ctrl_lock_get(NRF_TAMPC_Type const * p_reg,
                                                         nrf_tampc_debug_type_t type);

/**
 * @brief Function for setting fault injection of the Coresight register for given debug type.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] type   Debug type that will be modified.
 * @param[in] enable True if fault is to be injected, false otherwise.
 */
NRF_STATIC_INLINE void nrf_tampc_coresight_ctrl_fault_set(NRF_TAMPC_Type *       p_reg,
                                                          nrf_tampc_debug_type_t type,
                                                          bool                   enable);

/**
 * @brief Function for getting the fault injection of the Coresight register for given debug type.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] type  Debug type that will be retrieved.
 *
 * @retval true  Fault is to be injected.
 * @retval false No operation.
 */
NRF_STATIC_INLINE bool nrf_tampc_coresight_ctrl_fault_get(NRF_TAMPC_Type const * p_reg,
                                                          nrf_tampc_debug_type_t type);

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
#if !defined(LILIUMSOC1_XXAA)
            p_reg->PROTECT.DOMAIN[domain].DBGEN.CTRL =
                (TAMPC_PROTECT_DOMAIN_DBGEN_CTRL_WRITEPROTECTION_Clear
                 << TAMPC_PROTECT_DOMAIN_DBGEN_CTRL_WRITEPROTECTION_Pos) | NRF_TAMPC_KEY_MASK;
#endif
            p_reg->PROTECT.DOMAIN[domain].DBGEN.CTRL = ((p_reg->PROTECT.DOMAIN[domain].DBGEN.CTRL &
                                                    ~TAMPC_PROTECT_DOMAIN_DBGEN_CTRL_VALUE_Msk) |
                                                   ((enable ? TAMPC_PROTECT_DOMAIN_DBGEN_CTRL_VALUE_High
                                                     : TAMPC_PROTECT_DOMAIN_DBGEN_CTRL_VALUE_Low)
                                                    << TAMPC_PROTECT_DOMAIN_DBGEN_CTRL_VALUE_Pos))
                                                   | NRF_TAMPC_KEY_MASK;
            break;
        case NRF_TAMPC_CTRL_NIDEN:
#if !defined(LILIUMSOC1_XXAA)
            p_reg->PROTECT.DOMAIN[domain].NIDEN.CTRL =
                (TAMPC_PROTECT_DOMAIN_NIDEN_CTRL_WRITEPROTECTION_Clear
                 << TAMPC_PROTECT_DOMAIN_NIDEN_CTRL_WRITEPROTECTION_Pos) | NRF_TAMPC_KEY_MASK;
#endif
            p_reg->PROTECT.DOMAIN[domain].NIDEN.CTRL = ((p_reg->PROTECT.DOMAIN[domain].NIDEN.CTRL &
                                                    ~TAMPC_PROTECT_DOMAIN_NIDEN_CTRL_VALUE_Msk) |
                                                   ((enable ? TAMPC_PROTECT_DOMAIN_NIDEN_CTRL_VALUE_High
                                                     : TAMPC_PROTECT_DOMAIN_NIDEN_CTRL_VALUE_Low)
                                                    << TAMPC_PROTECT_DOMAIN_NIDEN_CTRL_VALUE_Pos))
                                                   | NRF_TAMPC_KEY_MASK;
            break;
        case NRF_TAMPC_CTRL_SPIDEN:
#if !defined(LILIUMSOC1_XXAA)
            p_reg->PROTECT.DOMAIN[domain].SPIDEN.CTRL =
                (TAMPC_PROTECT_DOMAIN_SPIDEN_CTRL_WRITEPROTECTION_Clear
                 << TAMPC_PROTECT_DOMAIN_SPIDEN_CTRL_WRITEPROTECTION_Pos) | NRF_TAMPC_KEY_MASK;
#endif
            p_reg->PROTECT.DOMAIN[domain].SPIDEN.CTRL = ((p_reg->PROTECT.DOMAIN[domain].SPIDEN.CTRL &
                                                     ~TAMPC_PROTECT_DOMAIN_SPIDEN_CTRL_VALUE_Msk) |
                                                    ((enable ? TAMPC_PROTECT_DOMAIN_SPIDEN_CTRL_VALUE_High
                                                      : TAMPC_PROTECT_DOMAIN_SPIDEN_CTRL_VALUE_Low)
                                                     << TAMPC_PROTECT_DOMAIN_SPIDEN_CTRL_VALUE_Pos))
                                                    | NRF_TAMPC_KEY_MASK;
            break;
        case NRF_TAMPC_CTRL_SPNIDEN:
#if !defined(LILIUMSOC1_XXAA)
            p_reg->PROTECT.DOMAIN[domain].SPNIDEN.CTRL =
                (TAMPC_PROTECT_DOMAIN_SPNIDEN_CTRL_WRITEPROTECTION_Clear
                 << TAMPC_PROTECT_DOMAIN_SPNIDEN_CTRL_WRITEPROTECTION_Pos) | NRF_TAMPC_KEY_MASK;
#endif
            p_reg->PROTECT.DOMAIN[domain].SPNIDEN.CTRL = ((p_reg->PROTECT.DOMAIN[domain].SPNIDEN.CTRL &
                                                      ~TAMPC_PROTECT_DOMAIN_SPNIDEN_CTRL_VALUE_Msk) |
                                                     ((enable ? TAMPC_PROTECT_DOMAIN_SPNIDEN_CTRL_VALUE_High
                                                       : TAMPC_PROTECT_DOMAIN_SPNIDEN_CTRL_VALUE_Low)
                                                      << TAMPC_PROTECT_DOMAIN_SPNIDEN_CTRL_VALUE_Pos))
                                                     | NRF_TAMPC_KEY_MASK;
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
            return ((p_reg->PROTECT.DOMAIN[domain].DBGEN.CTRL & TAMPC_PROTECT_DOMAIN_DBGEN_CTRL_VALUE_Msk)
                    >> TAMPC_PROTECT_DOMAIN_DBGEN_CTRL_VALUE_Pos);
        case NRF_TAMPC_CTRL_NIDEN:
            return ((p_reg->PROTECT.DOMAIN[domain].NIDEN.CTRL & TAMPC_PROTECT_DOMAIN_NIDEN_CTRL_VALUE_Msk)
                    >> TAMPC_PROTECT_DOMAIN_NIDEN_CTRL_VALUE_Pos);
        case NRF_TAMPC_CTRL_SPIDEN:
            return ((p_reg->PROTECT.DOMAIN[domain].SPIDEN.CTRL & TAMPC_PROTECT_DOMAIN_SPIDEN_CTRL_VALUE_Msk)
                    >> TAMPC_PROTECT_DOMAIN_SPIDEN_CTRL_VALUE_Pos);
        case NRF_TAMPC_CTRL_SPNIDEN:
            return ((p_reg->PROTECT.DOMAIN[domain].SPNIDEN.CTRL & TAMPC_PROTECT_DOMAIN_SPNIDEN_CTRL_VALUE_Msk)
                    >> TAMPC_PROTECT_DOMAIN_SPNIDEN_CTRL_VALUE_Pos);
        default:
            NRFX_ASSERT(0);
            return false;
    }
}

NRF_STATIC_INLINE void nrf_tampc_domain_ctrl_lock_set(NRF_TAMPC_Type *       p_reg,
                                                      nrf_tampc_debug_type_t type,
                                                      nrf_domain_t           domain,
                                                      bool                   enable)
{
    NRFX_ASSERT(domain > 0);
    NRFX_ASSERT(domain < NRF_DOMAIN_COUNT);

    switch (type)
    {
        case NRF_TAMPC_CTRL_DBGEN:
#if !defined(LILIUMSOC1_XXAA)
            p_reg->PROTECT.DOMAIN[domain].DBGEN.CTRL =
                (TAMPC_PROTECT_DOMAIN_DBGEN_CTRL_WRITEPROTECTION_Clear
                 << TAMPC_PROTECT_DOMAIN_DBGEN_CTRL_WRITEPROTECTION_Pos) | NRF_TAMPC_KEY_MASK;
#endif
            p_reg->PROTECT.DOMAIN[domain].DBGEN.CTRL = ((p_reg->PROTECT.DOMAIN[domain].DBGEN.CTRL &
                                                    ~TAMPC_PROTECT_DOMAIN_DBGEN_CTRL_LOCK_Msk) |
                                                   ((enable ? TAMPC_PROTECT_DOMAIN_DBGEN_CTRL_LOCK_Enabled
                                                     : TAMPC_PROTECT_DOMAIN_DBGEN_CTRL_LOCK_Disabled)
                                                    << TAMPC_PROTECT_DOMAIN_DBGEN_CTRL_LOCK_Pos))
                                                   | NRF_TAMPC_KEY_MASK;
            break;
        case NRF_TAMPC_CTRL_NIDEN:
#if !defined(LILIUMSOC1_XXAA)
            p_reg->PROTECT.DOMAIN[domain].NIDEN.CTRL =
                (TAMPC_PROTECT_DOMAIN_NIDEN_CTRL_WRITEPROTECTION_Clear
                 << TAMPC_PROTECT_DOMAIN_NIDEN_CTRL_WRITEPROTECTION_Pos) | NRF_TAMPC_KEY_MASK;
#endif
            p_reg->PROTECT.DOMAIN[domain].NIDEN.CTRL = ((p_reg->PROTECT.DOMAIN[domain].NIDEN.CTRL &
                                                    ~TAMPC_PROTECT_DOMAIN_NIDEN_CTRL_LOCK_Msk) |
                                                   ((enable ? TAMPC_PROTECT_DOMAIN_NIDEN_CTRL_LOCK_Enabled
                                                     : TAMPC_PROTECT_DOMAIN_NIDEN_CTRL_LOCK_Disabled)
                                                    << TAMPC_PROTECT_DOMAIN_NIDEN_CTRL_LOCK_Pos))
                                                   | NRF_TAMPC_KEY_MASK;
            break;
        case NRF_TAMPC_CTRL_SPIDEN:
#if !defined(LILIUMSOC1_XXAA)
            p_reg->PROTECT.DOMAIN[domain].SPIDEN.CTRL =
                (TAMPC_PROTECT_DOMAIN_SPIDEN_CTRL_WRITEPROTECTION_Clear
                 << TAMPC_PROTECT_DOMAIN_SPIDEN_CTRL_WRITEPROTECTION_Pos) | NRF_TAMPC_KEY_MASK;
#endif
            p_reg->PROTECT.DOMAIN[domain].SPIDEN.CTRL = ((p_reg->PROTECT.DOMAIN[domain].SPIDEN.CTRL &
                                                     ~TAMPC_PROTECT_DOMAIN_SPIDEN_CTRL_LOCK_Msk) |
                                                    ((enable ? TAMPC_PROTECT_DOMAIN_SPIDEN_CTRL_LOCK_Enabled
                                                      : TAMPC_PROTECT_DOMAIN_SPIDEN_CTRL_LOCK_Disabled)
                                                     << TAMPC_PROTECT_DOMAIN_SPIDEN_CTRL_LOCK_Pos))
                                                    | NRF_TAMPC_KEY_MASK;
            break;
        case NRF_TAMPC_CTRL_SPNIDEN:
#if !defined(LILIUMSOC1_XXAA)
            p_reg->PROTECT.DOMAIN[domain].SPNIDEN.CTRL =
                (TAMPC_PROTECT_DOMAIN_SPNIDEN_CTRL_WRITEPROTECTION_Clear
                 << TAMPC_PROTECT_DOMAIN_SPNIDEN_CTRL_WRITEPROTECTION_Pos) | NRF_TAMPC_KEY_MASK;
#endif
            p_reg->PROTECT.DOMAIN[domain].SPNIDEN.CTRL = ((p_reg->PROTECT.DOMAIN[domain].SPNIDEN.CTRL &
                                                      ~TAMPC_PROTECT_DOMAIN_SPNIDEN_CTRL_LOCK_Msk) |
                                                     ((enable ? TAMPC_PROTECT_DOMAIN_SPNIDEN_CTRL_LOCK_Enabled
                                                       : TAMPC_PROTECT_DOMAIN_SPNIDEN_CTRL_LOCK_Disabled)
                                                      << TAMPC_PROTECT_DOMAIN_SPNIDEN_CTRL_LOCK_Pos))
                                                     | NRF_TAMPC_KEY_MASK;
            break;
        default:
            NRFX_ASSERT(0);
    }
}

NRF_STATIC_INLINE bool nrf_tampc_domain_ctrl_lock_get(NRF_TAMPC_Type const * p_reg,
                                                      nrf_tampc_debug_type_t type,
                                                      nrf_domain_t           domain)
{
    NRFX_ASSERT(domain > 0);
    NRFX_ASSERT(domain < NRF_DOMAIN_COUNT);

    switch (type)
    {
        case NRF_TAMPC_CTRL_DBGEN:
            return ((p_reg->PROTECT.DOMAIN[domain].DBGEN.CTRL & TAMPC_PROTECT_DOMAIN_DBGEN_CTRL_LOCK_Msk)
                    >> TAMPC_PROTECT_DOMAIN_DBGEN_CTRL_LOCK_Pos);
        case NRF_TAMPC_CTRL_NIDEN:
            return ((p_reg->PROTECT.DOMAIN[domain].NIDEN.CTRL & TAMPC_PROTECT_DOMAIN_NIDEN_CTRL_LOCK_Msk)
                    >> TAMPC_PROTECT_DOMAIN_NIDEN_CTRL_LOCK_Pos);
        case NRF_TAMPC_CTRL_SPIDEN:
            return ((p_reg->PROTECT.DOMAIN[domain].SPIDEN.CTRL & TAMPC_PROTECT_DOMAIN_SPIDEN_CTRL_LOCK_Msk)
                    >> TAMPC_PROTECT_DOMAIN_SPIDEN_CTRL_LOCK_Pos);
        case NRF_TAMPC_CTRL_SPNIDEN:
            return ((p_reg->PROTECT.DOMAIN[domain].SPNIDEN.CTRL & TAMPC_PROTECT_DOMAIN_SPNIDEN_CTRL_LOCK_Msk)
                    >> TAMPC_PROTECT_DOMAIN_SPNIDEN_CTRL_LOCK_Pos);
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
#if !defined(LILIUMSOC1_XXAA)
            p_reg->PROTECT.AP[domain].DBGEN.CTRL =
                (TAMPC_PROTECT_AP_DBGEN_CTRL_WRITEPROTECTION_Clear
                 << TAMPC_PROTECT_AP_DBGEN_CTRL_WRITEPROTECTION_Pos) | NRF_TAMPC_KEY_MASK;
#endif
            p_reg->PROTECT.AP[domain].DBGEN.CTRL = ((p_reg->PROTECT.AP[domain].DBGEN.CTRL &
                                                ~TAMPC_PROTECT_AP_DBGEN_CTRL_VALUE_Msk) |
                                               ((enable ? TAMPC_PROTECT_AP_DBGEN_CTRL_VALUE_High :
                                                 TAMPC_PROTECT_AP_DBGEN_CTRL_VALUE_Low)
                                                << TAMPC_PROTECT_AP_DBGEN_CTRL_VALUE_Pos))
                                               | NRF_TAMPC_KEY_MASK;
            break;
        case NRF_TAMPC_CTRL_SPIDEN:
#if !defined(LILIUMSOC1_XXAA)
            p_reg->PROTECT.AP[domain].SPIDEN.CTRL =
                (TAMPC_PROTECT_AP_SPIDEN_CTRL_WRITEPROTECTION_Clear
                 << TAMPC_PROTECT_AP_SPIDEN_CTRL_WRITEPROTECTION_Pos) | NRF_TAMPC_KEY_MASK;
#endif
            p_reg->PROTECT.AP[domain].SPIDEN.CTRL = ((p_reg->PROTECT.AP[domain].SPIDEN.CTRL &
                                                 ~TAMPC_PROTECT_AP_SPIDEN_CTRL_VALUE_Msk) |
                                                ((enable ? TAMPC_PROTECT_AP_SPIDEN_CTRL_VALUE_High :
                                                  TAMPC_PROTECT_AP_SPIDEN_CTRL_VALUE_Low)
                                                 << TAMPC_PROTECT_AP_SPIDEN_CTRL_VALUE_Pos))
                                                | NRF_TAMPC_KEY_MASK;
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
            return ((p_reg->PROTECT.AP[domain].DBGEN.CTRL & TAMPC_PROTECT_AP_DBGEN_CTRL_VALUE_Msk)
                    >> TAMPC_PROTECT_AP_DBGEN_CTRL_VALUE_Pos);
        case NRF_TAMPC_CTRL_SPIDEN:
            return ((p_reg->PROTECT.AP[domain].SPIDEN.CTRL & TAMPC_PROTECT_AP_SPIDEN_CTRL_VALUE_Msk)
                    >> TAMPC_PROTECT_AP_SPIDEN_CTRL_VALUE_Pos);
        default:
            NRFX_ASSERT(0);
            return false;
    }
}

NRF_STATIC_INLINE void nrf_tampc_ap_ctrl_lock_set(NRF_TAMPC_Type *       p_reg,
                                                  nrf_tampc_debug_type_t type,
                                                  nrf_domain_t           domain,
                                                  bool                   enable)
{
    NRFX_ASSERT(domain > 0);
    NRFX_ASSERT(domain < NRF_DOMAIN_COUNT);

    switch (type)
    {
        case NRF_TAMPC_CTRL_DBGEN:
#if !defined(LILIUMSOC1_XXAA)
            p_reg->PROTECT.AP[domain].DBGEN.CTRL =
                (TAMPC_PROTECT_AP_DBGEN_CTRL_WRITEPROTECTION_Clear
                 << TAMPC_PROTECT_AP_DBGEN_CTRL_WRITEPROTECTION_Pos) | NRF_TAMPC_KEY_MASK;
#endif
            p_reg->PROTECT.AP[domain].DBGEN.CTRL = ((p_reg->PROTECT.AP[domain].DBGEN.CTRL &
                                                ~TAMPC_PROTECT_AP_DBGEN_CTRL_LOCK_Msk) |
                                               ((enable ? TAMPC_PROTECT_AP_DBGEN_CTRL_LOCK_Enabled :
                                                 TAMPC_PROTECT_AP_DBGEN_CTRL_LOCK_Disabled)
                                                << TAMPC_PROTECT_AP_DBGEN_CTRL_LOCK_Pos))
                                               | NRF_TAMPC_KEY_MASK;
            break;
        case NRF_TAMPC_CTRL_SPIDEN:
#if !defined(LILIUMSOC1_XXAA)
            p_reg->PROTECT.AP[domain].SPIDEN.CTRL =
                (TAMPC_PROTECT_AP_SPIDEN_CTRL_WRITEPROTECTION_Clear
                 << TAMPC_PROTECT_AP_SPIDEN_CTRL_WRITEPROTECTION_Pos) | NRF_TAMPC_KEY_MASK;
#endif
            p_reg->PROTECT.AP[domain].SPIDEN.CTRL = ((p_reg->PROTECT.AP[domain].SPIDEN.CTRL &
                                                 ~TAMPC_PROTECT_AP_SPIDEN_CTRL_LOCK_Msk) |
                                                ((enable ? TAMPC_PROTECT_AP_SPIDEN_CTRL_LOCK_Enabled :
                                                  TAMPC_PROTECT_AP_SPIDEN_CTRL_LOCK_Disabled)
                                                 << TAMPC_PROTECT_AP_SPIDEN_CTRL_LOCK_Pos))
                                                | NRF_TAMPC_KEY_MASK;
            break;
        default:
            NRFX_ASSERT(0);
    }
}

NRF_STATIC_INLINE bool nrf_tampc_ap_ctrl_lock_get(NRF_TAMPC_Type const * p_reg,
                                                  nrf_tampc_debug_type_t type,
                                                  nrf_domain_t           domain)
{
    NRFX_ASSERT(domain > 0);
    NRFX_ASSERT(domain < NRF_DOMAIN_COUNT);

    switch (type)
    {
        case NRF_TAMPC_CTRL_DBGEN:
            return ((p_reg->PROTECT.AP[domain].DBGEN.CTRL & TAMPC_PROTECT_AP_DBGEN_CTRL_LOCK_Msk)
                    >> TAMPC_PROTECT_AP_DBGEN_CTRL_LOCK_Pos);
        case NRF_TAMPC_CTRL_SPIDEN:
            return ((p_reg->PROTECT.AP[domain].SPIDEN.CTRL & TAMPC_PROTECT_AP_SPIDEN_CTRL_LOCK_Msk)
                    >> TAMPC_PROTECT_AP_SPIDEN_CTRL_LOCK_Pos);
        default:
            NRFX_ASSERT(0);
            return false;
    }
}

NRF_STATIC_INLINE void nrf_tampc_coresight_ctrl_value_set(NRF_TAMPC_Type *       p_reg,
                                                          nrf_tampc_debug_type_t type,
                                                          bool                   enable)
{
    switch (type)
    {
        case NRF_TAMPC_CTRL_DEVICEEN:
#if !defined(LILIUMSOC1_XXAA)
            p_reg->PROTECT.CORESIGHT.DEVICEEN.CTRL =
                (TAMPC_PROTECT_CORESIGHT_DEVICEEN_CTRL_WRITEPROTECTION_Clear
                 << TAMPC_PROTECT_CORESIGHT_DEVICEEN_CTRL_WRITEPROTECTION_Pos) | NRF_TAMPC_KEY_MASK;
#endif
            p_reg->PROTECT.CORESIGHT.DEVICEEN.CTRL =
                ((p_reg->PROTECT.CORESIGHT.DEVICEEN.CTRL &
                  ~TAMPC_PROTECT_CORESIGHT_DEVICEEN_CTRL_VALUE_Msk) |
                 ((enable ? TAMPC_PROTECT_CORESIGHT_DEVICEEN_CTRL_VALUE_High :
                   TAMPC_PROTECT_CORESIGHT_DEVICEEN_CTRL_VALUE_Low)
                  << TAMPC_PROTECT_CORESIGHT_DEVICEEN_CTRL_VALUE_Pos))
                | NRF_TAMPC_KEY_MASK;
            break;
        case NRF_TAMPC_CTRL_DBGEN:
#if !defined(LILIUMSOC1_XXAA)
            p_reg->PROTECT.CORESIGHT.DBGEN.CTRL =
                (TAMPC_PROTECT_CORESIGHT_DBGEN_CTRL_WRITEPROTECTION_Clear
                 << TAMPC_PROTECT_CORESIGHT_DBGEN_CTRL_WRITEPROTECTION_Pos) | NRF_TAMPC_KEY_MASK;
#endif
            p_reg->PROTECT.CORESIGHT.DBGEN.CTRL =
                ((p_reg->PROTECT.CORESIGHT.DBGEN.CTRL &
                  ~TAMPC_PROTECT_CORESIGHT_DBGEN_CTRL_VALUE_Msk) |
                 ((enable ? TAMPC_PROTECT_CORESIGHT_DBGEN_CTRL_VALUE_High :
                   TAMPC_PROTECT_CORESIGHT_DBGEN_CTRL_VALUE_Low)
                  << TAMPC_PROTECT_CORESIGHT_DBGEN_CTRL_VALUE_Pos))
                | NRF_TAMPC_KEY_MASK;
            break;
        case NRF_TAMPC_CTRL_NIDEN:
#if !defined(LILIUMSOC1_XXAA)
            p_reg->PROTECT.CORESIGHT.NIDEN.CTRL =
                (TAMPC_PROTECT_CORESIGHT_NIDEN_CTRL_WRITEPROTECTION_Clear
                 << TAMPC_PROTECT_CORESIGHT_NIDEN_CTRL_WRITEPROTECTION_Pos) | NRF_TAMPC_KEY_MASK;
#endif
            p_reg->PROTECT.CORESIGHT.NIDEN.CTRL =
                ((p_reg->PROTECT.CORESIGHT.NIDEN.CTRL &
                  ~TAMPC_PROTECT_CORESIGHT_NIDEN_CTRL_VALUE_Msk) |
                 ((enable ? TAMPC_PROTECT_CORESIGHT_NIDEN_CTRL_VALUE_High :
                   TAMPC_PROTECT_CORESIGHT_NIDEN_CTRL_VALUE_Low)
                  << TAMPC_PROTECT_CORESIGHT_NIDEN_CTRL_VALUE_Pos))
                | NRF_TAMPC_KEY_MASK;
            break;
        case NRF_TAMPC_CTRL_SPIDEN:
#if !defined(LILIUMSOC1_XXAA)
            p_reg->PROTECT.CORESIGHT.SPIDEN.CTRL =
                (TAMPC_PROTECT_CORESIGHT_SPIDEN_CTRL_WRITEPROTECTION_Clear
                 << TAMPC_PROTECT_CORESIGHT_SPIDEN_CTRL_WRITEPROTECTION_Pos) | NRF_TAMPC_KEY_MASK;
#endif
            p_reg->PROTECT.CORESIGHT.SPIDEN.CTRL =
                ((p_reg->PROTECT.CORESIGHT.SPIDEN.CTRL &
                  ~TAMPC_PROTECT_CORESIGHT_SPIDEN_CTRL_VALUE_Msk) |
                 ((enable ? TAMPC_PROTECT_CORESIGHT_SPIDEN_CTRL_VALUE_High :
                   TAMPC_PROTECT_CORESIGHT_SPIDEN_CTRL_VALUE_Low)
                  << TAMPC_PROTECT_CORESIGHT_SPIDEN_CTRL_VALUE_Pos))
                | NRF_TAMPC_KEY_MASK;
            break;
        case NRF_TAMPC_CTRL_SPNIDEN:
#if !defined(LILIUMSOC1_XXAA)
            p_reg->PROTECT.CORESIGHT.SPNIDEN.CTRL =
                (TAMPC_PROTECT_CORESIGHT_SPNIDEN_CTRL_WRITEPROTECTION_Clear
                 << TAMPC_PROTECT_CORESIGHT_SPNIDEN_CTRL_WRITEPROTECTION_Pos) | NRF_TAMPC_KEY_MASK;
#endif
            p_reg->PROTECT.CORESIGHT.SPNIDEN.CTRL =
                ((p_reg->PROTECT.CORESIGHT.SPNIDEN.CTRL &
                  ~TAMPC_PROTECT_CORESIGHT_SPNIDEN_CTRL_VALUE_Msk) |
                 ((enable ? TAMPC_PROTECT_CORESIGHT_SPNIDEN_CTRL_VALUE_High :
                   TAMPC_PROTECT_CORESIGHT_SPNIDEN_CTRL_VALUE_Low)
                  << TAMPC_PROTECT_CORESIGHT_SPNIDEN_CTRL_VALUE_Pos))
                | NRF_TAMPC_KEY_MASK;
            break;
        default:
            NRFX_ASSERT(0);
    }
}

NRF_STATIC_INLINE bool nrf_tampc_coresight_ctrl_value_get(NRF_TAMPC_Type const * p_reg,
                                                          nrf_tampc_debug_type_t type)
{
    switch (type)
    {
        case NRF_TAMPC_CTRL_DEVICEEN:
            return ((p_reg->PROTECT.CORESIGHT.DEVICEEN.CTRL &
                     TAMPC_PROTECT_CORESIGHT_DEVICEEN_CTRL_VALUE_Msk)
                    >> TAMPC_PROTECT_CORESIGHT_DEVICEEN_CTRL_VALUE_Pos);
        case NRF_TAMPC_CTRL_DBGEN:
            return ((p_reg->PROTECT.CORESIGHT.DBGEN.CTRL &
                     TAMPC_PROTECT_CORESIGHT_DBGEN_CTRL_VALUE_Msk)
                    >> TAMPC_PROTECT_CORESIGHT_DBGEN_CTRL_VALUE_Pos);
        case NRF_TAMPC_CTRL_NIDEN:
            return ((p_reg->PROTECT.CORESIGHT.NIDEN.CTRL &
                     TAMPC_PROTECT_CORESIGHT_NIDEN_CTRL_VALUE_Msk)
                    >> TAMPC_PROTECT_CORESIGHT_NIDEN_CTRL_VALUE_Pos);
        case NRF_TAMPC_CTRL_SPIDEN:
            return ((p_reg->PROTECT.CORESIGHT.SPIDEN.CTRL &
                     TAMPC_PROTECT_CORESIGHT_SPIDEN_CTRL_VALUE_Msk)
                    >> TAMPC_PROTECT_CORESIGHT_SPIDEN_CTRL_VALUE_Pos);
        case NRF_TAMPC_CTRL_SPNIDEN:
            return ((p_reg->PROTECT.CORESIGHT.SPNIDEN.CTRL &
                     TAMPC_PROTECT_CORESIGHT_SPNIDEN_CTRL_VALUE_Msk)
                    >> TAMPC_PROTECT_CORESIGHT_SPNIDEN_CTRL_VALUE_Pos);
        default:
            NRFX_ASSERT(0);
            return false;
    }
}

NRF_STATIC_INLINE void nrf_tampc_coresight_ctrl_lock_set(NRF_TAMPC_Type *       p_reg,
                                                         nrf_tampc_debug_type_t type,
                                                         bool                   enable)
{
    switch (type)
    {
        case NRF_TAMPC_CTRL_DEVICEEN:
#if !defined(LILIUMSOC1_XXAA)
            p_reg->PROTECT.CORESIGHT.DEVICEEN.CTRL =
                (TAMPC_PROTECT_CORESIGHT_DEVICEEN_CTRL_WRITEPROTECTION_Clear
                 << TAMPC_PROTECT_CORESIGHT_DEVICEEN_CTRL_WRITEPROTECTION_Pos) | NRF_TAMPC_KEY_MASK;
#endif
            p_reg->PROTECT.CORESIGHT.DEVICEEN.CTRL =
                ((p_reg->PROTECT.CORESIGHT.DEVICEEN.CTRL &
                  ~TAMPC_PROTECT_CORESIGHT_DEVICEEN_CTRL_LOCK_Msk) |
                 ((enable ? TAMPC_PROTECT_CORESIGHT_DEVICEEN_CTRL_LOCK_Enabled :
                   TAMPC_PROTECT_CORESIGHT_DEVICEEN_CTRL_LOCK_Disabled)
                  << TAMPC_PROTECT_CORESIGHT_DEVICEEN_CTRL_LOCK_Pos))
                | NRF_TAMPC_KEY_MASK;
            break;
        case NRF_TAMPC_CTRL_DBGEN:
#if !defined(LILIUMSOC1_XXAA)
            p_reg->PROTECT.CORESIGHT.DBGEN.CTRL =
                (TAMPC_PROTECT_CORESIGHT_DBGEN_CTRL_WRITEPROTECTION_Clear
                 << TAMPC_PROTECT_CORESIGHT_DBGEN_CTRL_WRITEPROTECTION_Pos) | NRF_TAMPC_KEY_MASK;
#endif
            p_reg->PROTECT.CORESIGHT.DBGEN.CTRL =
                ((p_reg->PROTECT.CORESIGHT.DBGEN.CTRL &
                  ~TAMPC_PROTECT_CORESIGHT_DBGEN_CTRL_LOCK_Msk) |
                 ((enable ? TAMPC_PROTECT_CORESIGHT_DBGEN_CTRL_LOCK_Enabled :
                   TAMPC_PROTECT_CORESIGHT_DBGEN_CTRL_LOCK_Disabled)
                  << TAMPC_PROTECT_CORESIGHT_DBGEN_CTRL_LOCK_Pos))
                | NRF_TAMPC_KEY_MASK;
            break;
        case NRF_TAMPC_CTRL_NIDEN:
#if !defined(LILIUMSOC1_XXAA)
            p_reg->PROTECT.CORESIGHT.NIDEN.CTRL =
                (TAMPC_PROTECT_CORESIGHT_NIDEN_CTRL_WRITEPROTECTION_Clear
                 << TAMPC_PROTECT_CORESIGHT_NIDEN_CTRL_WRITEPROTECTION_Pos) | NRF_TAMPC_KEY_MASK;
#endif
            p_reg->PROTECT.CORESIGHT.NIDEN.CTRL =
                ((p_reg->PROTECT.CORESIGHT.NIDEN.CTRL &
                  ~TAMPC_PROTECT_CORESIGHT_NIDEN_CTRL_LOCK_Msk) |
                 ((enable ? TAMPC_PROTECT_CORESIGHT_NIDEN_CTRL_LOCK_Enabled :
                   TAMPC_PROTECT_CORESIGHT_NIDEN_CTRL_LOCK_Disabled)
                  << TAMPC_PROTECT_CORESIGHT_NIDEN_CTRL_LOCK_Pos))
                | NRF_TAMPC_KEY_MASK;
            break;
        case NRF_TAMPC_CTRL_SPIDEN:
#if !defined(LILIUMSOC1_XXAA)
            p_reg->PROTECT.CORESIGHT.SPIDEN.CTRL =
                (TAMPC_PROTECT_CORESIGHT_SPIDEN_CTRL_WRITEPROTECTION_Clear
                 << TAMPC_PROTECT_CORESIGHT_SPIDEN_CTRL_WRITEPROTECTION_Pos) | NRF_TAMPC_KEY_MASK;
#endif
            p_reg->PROTECT.CORESIGHT.SPIDEN.CTRL =
                ((p_reg->PROTECT.CORESIGHT.SPIDEN.CTRL &
                  ~TAMPC_PROTECT_CORESIGHT_SPIDEN_CTRL_LOCK_Msk) |
                 ((enable ? TAMPC_PROTECT_CORESIGHT_SPIDEN_CTRL_LOCK_Enabled :
                   TAMPC_PROTECT_CORESIGHT_SPIDEN_CTRL_LOCK_Disabled)
                  << TAMPC_PROTECT_CORESIGHT_SPIDEN_CTRL_LOCK_Pos))
                | NRF_TAMPC_KEY_MASK;
            break;
        case NRF_TAMPC_CTRL_SPNIDEN:
#if !defined(LILIUMSOC1_XXAA)
            p_reg->PROTECT.CORESIGHT.SPNIDEN.CTRL =
                (TAMPC_PROTECT_CORESIGHT_SPNIDEN_CTRL_WRITEPROTECTION_Clear
                 << TAMPC_PROTECT_CORESIGHT_SPNIDEN_CTRL_WRITEPROTECTION_Pos) | NRF_TAMPC_KEY_MASK;
#endif
            p_reg->PROTECT.CORESIGHT.SPNIDEN.CTRL =
                ((p_reg->PROTECT.CORESIGHT.SPNIDEN.CTRL &
                  ~TAMPC_PROTECT_CORESIGHT_SPNIDEN_CTRL_LOCK_Msk) |
                 ((enable ? TAMPC_PROTECT_CORESIGHT_SPNIDEN_CTRL_LOCK_Enabled :
                   TAMPC_PROTECT_CORESIGHT_SPNIDEN_CTRL_LOCK_Disabled)
                  << TAMPC_PROTECT_CORESIGHT_SPNIDEN_CTRL_LOCK_Pos))
                | NRF_TAMPC_KEY_MASK;
            break;
        default:
            NRFX_ASSERT(0);
    }
}

NRF_STATIC_INLINE bool nrf_tampc_coresight_ctrl_lock_get(NRF_TAMPC_Type const * p_reg,
                                                         nrf_tampc_debug_type_t type)
{
    switch (type)
    {
        case NRF_TAMPC_CTRL_DEVICEEN:
            return ((p_reg->PROTECT.CORESIGHT.DEVICEEN.CTRL &
                     TAMPC_PROTECT_CORESIGHT_DEVICEEN_CTRL_LOCK_Msk)
                    >> TAMPC_PROTECT_CORESIGHT_DEVICEEN_CTRL_LOCK_Pos);
        case NRF_TAMPC_CTRL_DBGEN:
            return ((p_reg->PROTECT.CORESIGHT.DBGEN.CTRL &
                     TAMPC_PROTECT_CORESIGHT_DBGEN_CTRL_LOCK_Msk)
                    >> TAMPC_PROTECT_CORESIGHT_DBGEN_CTRL_LOCK_Pos);
        case NRF_TAMPC_CTRL_NIDEN:
            return ((p_reg->PROTECT.CORESIGHT.NIDEN.CTRL &
                     TAMPC_PROTECT_CORESIGHT_NIDEN_CTRL_LOCK_Msk)
                    >> TAMPC_PROTECT_CORESIGHT_NIDEN_CTRL_LOCK_Pos);
        case NRF_TAMPC_CTRL_SPIDEN:
            return ((p_reg->PROTECT.CORESIGHT.SPIDEN.CTRL &
                     TAMPC_PROTECT_CORESIGHT_SPIDEN_CTRL_LOCK_Msk)
                    >> TAMPC_PROTECT_CORESIGHT_SPIDEN_CTRL_LOCK_Pos);
        case NRF_TAMPC_CTRL_SPNIDEN:
            return ((p_reg->PROTECT.CORESIGHT.SPNIDEN.CTRL &
                     TAMPC_PROTECT_CORESIGHT_SPNIDEN_CTRL_LOCK_Msk)
                    >> TAMPC_PROTECT_CORESIGHT_SPNIDEN_CTRL_LOCK_Pos);
        default:
            NRFX_ASSERT(0);
            return false;
    }
}

NRF_STATIC_INLINE void nrf_tampc_coresight_ctrl_fault_set(NRF_TAMPC_Type *       p_reg,
                                                          nrf_tampc_debug_type_t type,
                                                          bool                   enable)
{
    switch (type)
    {
        case NRF_TAMPC_CTRL_DEVICEEN:
#if !defined(LILIUMSOC1_XXAA)
            p_reg->PROTECT.CORESIGHT.DEVICEEN.CTRL =
                (TAMPC_PROTECT_CORESIGHT_DEVICEEN_CTRL_WRITEPROTECTION_Clear
                 << TAMPC_PROTECT_CORESIGHT_DEVICEEN_CTRL_WRITEPROTECTION_Pos) | NRF_TAMPC_KEY_MASK;
#endif
            p_reg->PROTECT.CORESIGHT.DEVICEEN.CTRL =
                ((p_reg->PROTECT.CORESIGHT.DEVICEEN.CTRL &
                  ~TAMPC_PROTECT_CORESIGHT_DEVICEEN_CTRL_FAULTTEST_Msk) |
                 ((enable ? TAMPC_PROTECT_CORESIGHT_DEVICEEN_CTRL_FAULTTEST_Trigger :
                   TAMPC_PROTECT_CORESIGHT_DEVICEEN_CTRL_FAULTTEST_NoOperation)
                  << TAMPC_PROTECT_CORESIGHT_DEVICEEN_CTRL_FAULTTEST_Pos))
                | NRF_TAMPC_KEY_MASK;
            break;
        case NRF_TAMPC_CTRL_DBGEN:
#if !defined(LILIUMSOC1_XXAA)
            p_reg->PROTECT.CORESIGHT.DBGEN.CTRL =
                (TAMPC_PROTECT_CORESIGHT_DBGEN_CTRL_WRITEPROTECTION_Clear
                 << TAMPC_PROTECT_CORESIGHT_DBGEN_CTRL_WRITEPROTECTION_Pos) | NRF_TAMPC_KEY_MASK;
#endif
            p_reg->PROTECT.CORESIGHT.DBGEN.CTRL =
                ((p_reg->PROTECT.CORESIGHT.DBGEN.CTRL &
                  ~TAMPC_PROTECT_CORESIGHT_DBGEN_CTRL_FAULTTEST_Msk) |
                 ((enable ? TAMPC_PROTECT_CORESIGHT_DBGEN_CTRL_FAULTTEST_Trigger :
                   TAMPC_PROTECT_CORESIGHT_DBGEN_CTRL_FAULTTEST_NoOperation)
                  << TAMPC_PROTECT_CORESIGHT_DBGEN_CTRL_FAULTTEST_Pos))
                | NRF_TAMPC_KEY_MASK;
            break;
        case NRF_TAMPC_CTRL_NIDEN:
#if !defined(LILIUMSOC1_XXAA)
            p_reg->PROTECT.CORESIGHT.NIDEN.CTRL =
                (TAMPC_PROTECT_CORESIGHT_NIDEN_CTRL_WRITEPROTECTION_Clear
                 << TAMPC_PROTECT_CORESIGHT_NIDEN_CTRL_WRITEPROTECTION_Pos) | NRF_TAMPC_KEY_MASK;
#endif
            p_reg->PROTECT.CORESIGHT.NIDEN.CTRL =
                ((p_reg->PROTECT.CORESIGHT.NIDEN.CTRL &
                  ~TAMPC_PROTECT_CORESIGHT_NIDEN_CTRL_FAULTTEST_Msk) |
                 ((enable ? TAMPC_PROTECT_CORESIGHT_NIDEN_CTRL_FAULTTEST_Trigger :
                   TAMPC_PROTECT_CORESIGHT_NIDEN_CTRL_FAULTTEST_NoOperation)
                  << TAMPC_PROTECT_CORESIGHT_NIDEN_CTRL_FAULTTEST_Pos))
                | NRF_TAMPC_KEY_MASK;
            break;
        case NRF_TAMPC_CTRL_SPIDEN:
#if !defined(LILIUMSOC1_XXAA)
            p_reg->PROTECT.CORESIGHT.SPIDEN.CTRL =
                (TAMPC_PROTECT_CORESIGHT_SPIDEN_CTRL_WRITEPROTECTION_Clear
                 << TAMPC_PROTECT_CORESIGHT_SPIDEN_CTRL_WRITEPROTECTION_Pos) | NRF_TAMPC_KEY_MASK;
#endif
            p_reg->PROTECT.CORESIGHT.SPIDEN.CTRL =
                ((p_reg->PROTECT.CORESIGHT.SPIDEN.CTRL &
                  ~TAMPC_PROTECT_CORESIGHT_SPIDEN_CTRL_FAULTTEST_Msk) |
                 ((enable ? TAMPC_PROTECT_CORESIGHT_SPIDEN_CTRL_FAULTTEST_Trigger :
                   TAMPC_PROTECT_CORESIGHT_SPIDEN_CTRL_FAULTTEST_NoOperation)
                  << TAMPC_PROTECT_CORESIGHT_SPIDEN_CTRL_FAULTTEST_Pos))
                | NRF_TAMPC_KEY_MASK;
            break;
        case NRF_TAMPC_CTRL_SPNIDEN:
#if !defined(LILIUMSOC1_XXAA)
            p_reg->PROTECT.CORESIGHT.SPNIDEN.CTRL =
                (TAMPC_PROTECT_CORESIGHT_SPNIDEN_CTRL_WRITEPROTECTION_Clear
                 << TAMPC_PROTECT_CORESIGHT_SPNIDEN_CTRL_WRITEPROTECTION_Pos) | NRF_TAMPC_KEY_MASK;
#endif
            p_reg->PROTECT.CORESIGHT.SPNIDEN.CTRL =
                ((p_reg->PROTECT.CORESIGHT.SPNIDEN.CTRL &
                  ~TAMPC_PROTECT_CORESIGHT_SPNIDEN_CTRL_FAULTTEST_Msk) |
                 ((enable ? TAMPC_PROTECT_CORESIGHT_SPNIDEN_CTRL_FAULTTEST_Trigger :
                   TAMPC_PROTECT_CORESIGHT_SPNIDEN_CTRL_FAULTTEST_NoOperation)
                  << TAMPC_PROTECT_CORESIGHT_SPNIDEN_CTRL_FAULTTEST_Pos))
                | NRF_TAMPC_KEY_MASK;
            break;
        default:
            NRFX_ASSERT(0);
    }
}

NRF_STATIC_INLINE bool nrf_tampc_coresight_ctrl_fault_get(NRF_TAMPC_Type const * p_reg,
                                                          nrf_tampc_debug_type_t type)
{
    switch (type)
    {
        case NRF_TAMPC_CTRL_DEVICEEN:
            return ((p_reg->PROTECT.CORESIGHT.DEVICEEN.CTRL &
                     TAMPC_PROTECT_CORESIGHT_DEVICEEN_CTRL_FAULTTEST_Msk)
                    >> TAMPC_PROTECT_CORESIGHT_DEVICEEN_CTRL_FAULTTEST_Pos);
        case NRF_TAMPC_CTRL_DBGEN:
            return ((p_reg->PROTECT.CORESIGHT.DBGEN.CTRL &
                     TAMPC_PROTECT_CORESIGHT_DBGEN_CTRL_FAULTTEST_Msk)
                    >> TAMPC_PROTECT_CORESIGHT_DBGEN_CTRL_FAULTTEST_Pos);
        case NRF_TAMPC_CTRL_NIDEN:
            return ((p_reg->PROTECT.CORESIGHT.NIDEN.CTRL &
                     TAMPC_PROTECT_CORESIGHT_NIDEN_CTRL_FAULTTEST_Msk)
                    >> TAMPC_PROTECT_CORESIGHT_NIDEN_CTRL_FAULTTEST_Pos);
        case NRF_TAMPC_CTRL_SPIDEN:
            return ((p_reg->PROTECT.CORESIGHT.SPIDEN.CTRL &
                     TAMPC_PROTECT_CORESIGHT_SPIDEN_CTRL_FAULTTEST_Msk)
                    >> TAMPC_PROTECT_CORESIGHT_SPIDEN_CTRL_FAULTTEST_Pos);
        case NRF_TAMPC_CTRL_SPNIDEN:
            return ((p_reg->PROTECT.CORESIGHT.SPNIDEN.CTRL &
                     TAMPC_PROTECT_CORESIGHT_SPNIDEN_CTRL_FAULTTEST_Msk)
                    >> TAMPC_PROTECT_CORESIGHT_SPNIDEN_CTRL_FAULTTEST_Pos);
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
