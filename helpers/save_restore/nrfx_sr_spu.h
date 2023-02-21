/*$$$LICENCE_NORDIC_STANDARD<2022>$$$*/

#ifndef NRFX_SR_SPU_H__
#define NRFX_SR_SPU_H__

#include <nrfx.h>
#include <nrfx_mvdma.h>
#include <helpers/nrf_vdma.h>
#include <helpers/save_restore/nrfx_sr_vdma.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrfx_sr_spu Utility macros and functions for saving and restoring SPU peripheral
 * @{
 * @ingroup nrfx
 * @brief Utility macros and functions for saving and restoring SPU peripheral.
 */

/**
 * @brief Macro for calculating length of a save & restore transfer for the given SPU instance.
 *
 * Macro generates a sum of bytes transfered by jobs for a SPU instance. It skips an instance
 * if there is a define forcing skipping set to 1 (e.g. SPU010_SR_VDMA_SKIP to skip VDMA jobs
 * for SPU010 instance).
 *
 * Macro attempts to sum transfer lengths for jobs for features which are supported by the
 * given instance.
 *
 * @param[in] _inst        Instance, e.g. SPU010.
 * @param[in] _with_periph Set to 1 if PERIPH section should be included.
 */
#define _NRFX_SPU_VDMA_LEN(_inst, _with_periph)                            \
    NRFX_COND_CODE_1(NRFX_CONCAT(_inst, _SR_VDMA_SKIP),                    \
          (0),                                                             \
          ((NRFX_SR_VDMA_INST_SET_LEN(_inst, INTEN) +                      \
           NRFX_COND_CODE_1(_with_periph,                                  \
                            ((NRFX_CONCAT(_inst, _PERIPH_COUNT) *          \
                              sizeof(NRF_SPU_PERIPH_Type))),               \
                            (0)) +                                         \
           NRFX_SR_VDMA_INST_COND_SET_LEN(_inst, IPCT, FEATURE.IPCT) +     \
           NRFX_SR_VDMA_INST_COND_SET_LEN(_inst, DPPIC, FEATURE.DPPIC) +   \
           NRFX_SR_VDMA_INST_COND_SET_LEN(_inst, GPIOTE, FEATURE.GPIOTE) + \
           NRFX_SR_VDMA_INST_COND_SET_LEN(_inst, GPIO, FEATURE.GPIO) +     \
           NRFX_SR_VDMA_INST_COND_SET_LEN(_inst, GRTC, FEATURE.GRTC) +     \
           NRFX_SR_VDMA_INST_COND_SET_LEN(_inst, BELLS, FEATURE.BELLS))))

/**
 * @brief Macro for generating a set of jobs for a SPU peripheral.
 *
 * It skips an instance if there is a define forcing skipping set to 1 (e.g. SPU010_SR_VDMA_SKIP
 * to skip VDMA jobs for SPU010 instance).
 *
 * Macro attempts to generate jobs for features which are supported by the given instance.
 *
 * @param[in] _inst        Instance, e.g. SPU010.
 * @param[in] _with_periph Set to 1 if PERIPH section shall also be included.
 *
 * @return Job descriptors.
 */
#define _NRFX_SPU_VDMA_JOB(_inst, _with_periph)                                          \
    NRFX_COND_CODE_1(NRFX_CONCAT(_inst, _SR_VDMA_SKIP),                                  \
        (),                                                                              \
        (                                                                                \
          NRFX_SR_VDMA_INST_SET_JOB(_inst, INTEN, 0)                                     \
          NRFX_COND_CODE_1(_with_periph,                                                 \
                           (NRFX_SR_VDMA_INST_REG_JOB(_inst, PERIPH,                     \
                                                     NRFX_CONCAT(_inst, _PERIPH_COUNT) * \
                                                     sizeof(NRF_SPU_PERIPH_Type),        \
                                                     1)                                  \
                           ),                                                            \
                           ())                                                           \
          NRFX_SR_VDMA_INST_COND_SET_JOB(_inst, IPCT, FEATURE.IPCT, 0)                   \
          NRFX_SR_VDMA_INST_COND_SET_JOB(_inst, DPPIC, FEATURE.DPPI, 0)                  \
          NRFX_SR_VDMA_INST_COND_SET_JOB(_inst, GPIOTE, FEATURE.GPIOTE, 1)               \
          NRFX_SR_VDMA_INST_COND_SET_JOB(_inst, GPIO, FEATURE.GPIO, 1)                   \
          NRFX_SR_VDMA_INST_COND_SET_JOB(_inst, GRTC, FEATURE.GRTC, 0)                   \
          NRFX_SR_VDMA_INST_COND_SET_JOB(_inst, BELLS, FEATURE.BELLS, 0)                 \
        )                                                                                \
    )

/**
 * @brief Macro for generating a set of VDMA jobs for transfer engaging all SPU instances.
 *
 * Instances may be ommited by defining \<instance\>_SR_VDMA_SKIP to 1.
 *
 * @return Job descriptors.
 */
#define NRFX_SR_VDMA_SPU_JOB() \
    NRFX_FOREACH_PRESENT(SPU, NRFX_INSTANCE_CONCAT, (), (), _NRFX_SPU_VDMA_JOB, 1)

/**
 * @brief Macro for calculating length of a save & restore transfer for all SPU instances.
 *
 * Instances may be ommited by defining \<instance\>_SR_VDMA_SKIP to 1.
 *
 * @return Number of bytes to transfer for perform save and restore.
 */
#define NRFX_SR_VDMA_SPU_LEN() \
    (NRFX_FOREACH_PRESENT(SPU, NRFX_INSTANCE_CONCAT, (+), (0), _NRFX_SPU_VDMA_LEN, 1))

/** @} */

#ifdef __cplusplus
}
#endif

#endif //NRFX_SR_SPU_H__
