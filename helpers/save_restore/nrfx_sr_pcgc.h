/*$$$LICENCE_NORDIC_STANDARD<2022>$$$*/

#ifndef NRFX_SR_PCGC_H__
#define NRFX_SR_PCGC_H__

#include <nrfx.h>
#include <nrfx_mvdma.h>
#include <helpers/save_restore/nrfx_sr_vdma.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrfx_sr_pcgc Utility macros for saving and restoring PCGCM & PCGCS peripherals
 * @{
 * @ingroup nrfx
 * @brief Utility macros for saving and restoring PCGCM & PCGCS peripherals.
 */

/**
 * @brief Macro for calculating length of a save & restore transfer for the given PCGCM instance.
 *
 * Macro generates a sum of bytes transferred by jobs for a PCGCM instance.
 *
 * @param[in] _inst Instance, e.g. PCGCM010.
 * @param[in] _     Dummy argument required by @ref NRFX_LISTIFY.
 */
#define _NRFX_SR_PCGCM_VDMA_LEN(_inst, _)                                                   \
    NRFX_SR_VDMA_INST_COND_SET_LEN(_inst, SETPWRCONTHRESHOLDBASE, SETPWRCONTHRESHOLDBASE) + \
    NRFX_SR_VDMA_INST_COND_SET_LEN(_inst, CLOCKFORCEREG, CLOCKFORCEREG) +                   \
    NRFX_SR_VDMA_INST_COND_SET_LEN(_inst, MASTERFORCEREG, MASTERFORCEREG) +                 \
    NRFX_SR_VDMA_INST_SET_LEN(_inst, SETPOWERCONSUMPTIONBASE) +                             \
    NRFX_SR_VDMA_INST_SET_LEN(_inst, ENABLEPOWERREGFORCE) +                                 \
    NRFX_SR_VDMA_INST_SET_LEN(_inst, POWERREGFORCE)

/**
 * @brief Macro for calculating length of a save & restore transfer for the given PCGCS instance.
 *
 * Macro generates a sum of bytes transferred by jobs for a PCGCS instance.
 *
 * @param[in] _inst Instance, e.g. PCGCS010.
 * @param[in] _     Dummy argument required by @ref NRFX_LISTIFY.
 */
#define _NRFX_SR_PCGCS_VDMA_LEN(_inst, _)          \
    NRFX_SR_VDMA_INST_SET_LEN(_inst, PENALTY) +    \
    NRFX_SR_VDMA_INST_SET_LEN(_inst, FORCEOVERRIDE)

/**
 * @brief Macro for generating a set of jobs for a PCGCM peripheral.
 *
 * Macro attempts to generate jobs for features which are supported by the given instance.
 *
 * @param[in] _inst Instance, e.g. PCGCM010.
 * @param[in] _     Dummy argument required by @ref NRFX_LISTIFY.
 *
 * @return Job descriptors.
 */
#define _NRFX_SR_PCGCM_VDMA_JOB(_inst, _)                                                    \
    NRFX_SR_VDMA_INST_COND_SET_JOB(_inst, SETPWRCONTHRESHOLDBASE, SETPWRCONTHRESHOLDBASE, 1) \
    NRFX_SR_VDMA_INST_SET_JOB(_inst, SETPOWERCONSUMPTIONBASE, 1)                             \
    /* POWERREGFORCE follows ENABLEPOWERREGFORCE */                                          \
    NRFX_SR_VDMA_INST_REG_JOB(_inst, ENABLEPOWERREGFORCE, 2 * sizeof(uint32_t), 0)           \
    NRFX_SR_VDMA_INST_COND_SET_JOB(_inst, MASTERFORCEREG, MASTERFORCEREG, 1)                 \
    NRFX_SR_VDMA_INST_COND_SET_JOB(_inst, CLOCKFORCEREG, CLOCKFORCEREG, 1)

/**
 * @brief Macro for generating a set of jobs for a PCGCS peripheral.
 *
 * Macro attempts to generate jobs for features which are supported by the given instance.
 *
 * @param[in] _inst Instance, e.g. PCGCS010.
 * @param[in] _     Dummy argument required by @ref NRFX_LISTIFY.
 *
 * @return Job descriptors.
 */
#define _NRFX_SR_PCGCS_VDMA_JOB(_inst, _)             \
    NRFX_SR_VDMA_INST_SET_JOB(_inst, PENALTY, 1)      \
    NRFX_SR_VDMA_INST_SET_JOB(_inst, FORCEOVERRIDE, 1)

/**
 * @brief Macro for generating a set of VDMA jobs for transfer engaging all PCGCM instances.
 *
 * @return Job descriptors.
 */
#define NRFX_SR_VDMA_PCGCM_JOB() NRFX_FOREACH_PRESENT(PCGCM, _NRFX_SR_PCGCM_VDMA_JOB, (), (), _)

/**
 * @brief Macro for calculating length of a save & restore transfer for all PCGCM instances.
 *
 * @param _ Dummy argument required by @ref NRFX_LISTIFY.
 *
 * @return Number of bytes to transfer for performing save and restore.
 */
#define NRFX_SR_VDMA_PCGCM_LEN() (NRFX_FOREACH_PRESENT(PCGCM, _NRFX_SR_PCGCM_VDMA_LEN, (+), (0), _))

/**
 * @brief Macro for generating a set of VDMA jobs for transfer engaging all PCGCS instances.
 *
 * @return Job descriptors.
 */
#define NRFX_SR_VDMA_PCGCS_JOB() NRFX_FOREACH_PRESENT(PCGCS, _NRFX_SR_PCGCS_VDMA_JOB, (), (), _)

/**
 * @brief Macro for calculating length of a save & restore transfer for all PCGCS instances.
 *
 * @return Number of bytes to transfer for performing save and restore.
 */
#define NRFX_SR_VDMA_PCGCS_LEN() (NRFX_FOREACH_PRESENT(PCGCS, _NRFX_SR_PCGCS_VDMA_LEN, (+), (0), _))

/** @} */

#ifdef __cplusplus
}
#endif

#endif //NRFX_SR_PCGC_H__
