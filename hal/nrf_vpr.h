/*$$$LICENCE_NORDIC_STANDARD<2021>$$$*/

#ifndef NRF_VPR_H_
#define NRF_VPR_H_

#include <nrfx.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrf_vpr_hal VPR HAL
 * @{
 * @ingroup nrf_vpr
 * @brief   Hardware access layer for managing the VPR RISC-V CPU unit (VPR).
 */

/** @brief Debug Mode Control signals. */
typedef enum
{
    NRF_VPR_DMCONTROL_DMACTIVE, /** Debug module active. */
    NRF_VPR_DMCONTROL_NDMRESET, /** Negative system reset signal. */
    /* TODO: other values */
} nrf_vpr_dmcontrol_t;

/**
 * @brief Function for setting the state of the CPU after core reset.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] enable True if CPU is to be running, false if stopped.
 */
NRF_STATIC_INLINE void nrf_vpr_cpurun_set(NRF_VPR_Type * p_reg,
                                          bool           enable);

/**
 * @brief Function for getting the state of the CPU after core reset.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @retval true  CPU is to be running after core reset.
 * @retval false CPU is to be stopped after core reset.
 */
NRF_STATIC_INLINE bool nrf_vpr_cpurun_get(NRF_VPR_Type const * p_reg);

/**
 * @brief Function for setting the initial value of the program counter after CPU reset.
 *
 * @note This address value must be 64-bit aligned.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 * @param[in] pc    Initial value of the program counter to be set.
 */
NRF_STATIC_INLINE void nrf_vpr_initpc_set(NRF_VPR_Type * p_reg,
                                          uint32_t       pc);

/**
 * @brief Function for getting the initial value of the program counter after CPU reset.
 *
 * @param[in] p_reg Pointer to the structure of registers of the peripheral.
 *
 * @return Initial value of the program counter.
 */
NRF_STATIC_INLINE uint32_t nrf_vpr_initpc_get(NRF_VPR_Type const * p_reg);

/**
 * @brief Function for setting the debug mode control signals.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] signal Signal to be set.
 * @param[in] enable True if signal is to be 1, false if 0.
 */
NRF_STATIC_INLINE void nrf_vpr_debugif_dmcontrol_set(NRF_VPR_Type *      p_reg,
                                                     nrf_vpr_dmcontrol_t signal,
                                                     bool                enable);

/**
 * @brief Function for getting the debug mode control signals.
 *
 * @param[in] p_reg  Pointer to the structure of registers of the peripheral.
 * @param[in] signal Signal to be retrieved.
 *
 * @retval true  Signal is logical 1.
 * @retval false Signal is logical 0.
 */
NRF_STATIC_INLINE bool nrf_vpr_debugif_dmcontrol_get(NRF_VPR_Type const * p_reg,
                                                     nrf_vpr_dmcontrol_t  signal);

#ifndef NRF_DECLARE_ONLY
NRF_STATIC_INLINE void nrf_vpr_cpurun_set(NRF_VPR_Type * p_reg,
                                          bool           enable)
{
    p_reg->CPURUN = (enable ? VPR_CPURUN_EN_Running : VPR_CPURUN_EN_Stopped) << VPR_CPURUN_EN_Pos;
}

NRF_STATIC_INLINE bool nrf_vpr_cpurun_get(NRF_VPR_Type const * p_reg)
{
    return (p_reg->CPURUN & VPR_CPURUN_EN_Msk) >> VPR_CPURUN_EN_Pos;
}

NRF_STATIC_INLINE void nrf_vpr_initpc_set(NRF_VPR_Type * p_reg,
                                          uint32_t       pc)
{
    NRFX_ASSERT((pc & 0x7FUL) == 0);
    p_reg->INITPC = pc;
}

NRF_STATIC_INLINE uint32_t nrf_vpr_initpc_get(NRF_VPR_Type const * p_reg)
{
    return p_reg->INITPC;
}

NRF_STATIC_INLINE void nrf_vpr_debugif_dmcontrol_set(NRF_VPR_Type *      p_reg,
                                                     nrf_vpr_dmcontrol_t signal,
                                                     bool                enable)
{
    switch (signal)
    {
        case NRF_VPR_DMCONTROL_DMACTIVE:
            p_reg->DEBUGIF.DMCONTROL = ((p_reg->DEBUGIF.DMCONTROL &
                                         ~VPR_DEBUGIF_DMCONTROL_DMACTIVE_Msk) |
                                        ((enable ? VPR_DEBUGIF_DMCONTROL_DMACTIVE_Enabled :
                                          VPR_DEBUGIF_DMCONTROL_DMACTIVE_Disabled)
                                         << VPR_DEBUGIF_DMCONTROL_DMACTIVE_Pos));
            break;
        case NRF_VPR_DMCONTROL_NDMRESET:
            p_reg->DEBUGIF.DMCONTROL = ((p_reg->DEBUGIF.DMCONTROL &
                                         ~VPR_DEBUGIF_DMCONTROL_NDMRESET_Msk) |
                                        ((enable ? VPR_DEBUGIF_DMCONTROL_NDMRESET_Inactive :
                                          VPR_DEBUGIF_DMCONTROL_NDMRESET_Active)
                                         << VPR_DEBUGIF_DMCONTROL_NDMRESET_Pos));
            break;
        default:
            NRFX_ASSERT(0);
    }
}

NRF_STATIC_INLINE bool nrf_vpr_debugif_dmcontrol_get(NRF_VPR_Type const * p_reg,
                                                     nrf_vpr_dmcontrol_t  signal)
{
    switch (signal)
    {
        case NRF_VPR_DMCONTROL_DMACTIVE:
            return ((p_reg->DEBUGIF.DMCONTROL & VPR_DEBUGIF_DMCONTROL_DMACTIVE_Msk)
                    >> VPR_DEBUGIF_DMCONTROL_DMACTIVE_Pos);
        case NRF_VPR_DMCONTROL_NDMRESET:
            return ((p_reg->DEBUGIF.DMCONTROL & VPR_DEBUGIF_DMCONTROL_NDMRESET_Msk)
                    >> VPR_DEBUGIF_DMCONTROL_NDMRESET_Pos);
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

#endif /* NRF_VPR_H_ */
