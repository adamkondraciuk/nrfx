/*$$$LICENCE_NORDIC_STANDARD<2022>$$$*/

#ifndef NRFX_SR_VDMA_H__
#define NRFX_SR_VDMA_H__

#include <nrfx.h>
#include <nrfx_mvdma.h>
#include <helpers/nrf_vdma.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrfx_sr_dma Utility macros and functions for saving and restoring peripherals
 * @{
 * @ingroup nrfx
 * @brief Utility macros and functions for saving and restoring peripherals.
 */

/**
 * @brief Macro for returning an address of a register in the instance.
 *
 * @param[in] _inst  Instance, e.g. SPU010.
 * @param[in] _reg   Register name.
 * @param[in] _array Indication whether provided structure is an array or not. Set to 1 to
 *                   indicate that it is an array. It is needed to determine if an ampersand
 *                   must be added.
 *
 * @return Address of a register in the instance.
 */
#define NRFX_SR_VDMA_REG_ADDR(_inst, _reg, _array) \
    NRFX_COND_CODE_1(_array, (), (&))NRFX_CONCAT(NRF_, _inst)->_reg

/**
 * @brief Macro for creating a VDMA job for transfering data from a register set.
 *
 * @param[in] _inst  Instance, e.g. SPU010.
 * @param[in] _regs  Name of a starting register.
 * @param[in] _len   Length of the transfer.
 * @param[in] _array Indication whether provided structure is an array or not. Set to 1 to
 *                   indicate that it is an array.
 *
 * @return A comma terminated MVDMA job descriptor.
 */
#define NRFX_SR_VDMA_INST_REG_JOB(_inst, _regs, _len, _array) \
        NRFX_VDMA_PERIPH_JOB(NRFX_SR_VDMA_REG_ADDR(_inst, _regs, _array), _len),

/**
 * @brief Macro for creating a VDMA job for transfering data from a register structure.
 *
 * @param[in] _inst  Instance, e.g. SPU010.
 * @param[in] _regs  Name of a feature register set name.
 * @param[in] _array Indication whether provided structure is an array or not. Set to 1 to
 *                   indicate that it is an array.
 *
 * @return A comma terminated MVDMA job descriptor.
 */
#define NRFX_SR_VDMA_INST_SET_JOB(_inst, _regs, _array) \
    NRFX_SR_VDMA_INST_REG_JOB(_inst, _regs, sizeof(NRFX_CONCAT(NRF_, _inst)->_regs), _array)

/**
 * @brief Macro for conditionally creating a VDMA job for transfering data from a register set.
 *
 * Job is created only if there is a define formed of concatenation of an instance name
 * and a feature name (e.g. SPU010_BELLS where SPU010 is @p _inst and BELLS is a @p _feature) set
 * to 1.
 *
 * @param[in] _inst    Instance, e.g. SPU010.
 * @param[in] _feature Feature name as used in _peripherals.h.
 * @param[in] _regs    Name of a starting register.
 * @param[in] _len     Length of the transfer.
 * @param[in] _array   Indication whether provided structure is an array or not. Set to 1 to
 *                     indicate that it is an array.
 *
 * @return A comma terminated MVDMA job descriptor if condition is met or nothing.
 */
#define NRFX_SR_VDMA_INST_COND_REG_JOB(_inst, _feature, _regs, _len, _array)     \
        NRFX_COND_CODE_1(NRFX_CONCAT(_inst, _, _feature),                        \
                        (NRFX_SR_VDMA_INST_REG_JOB(_inst, _regs, _len, _array)), \
                        ())
/**
 * @brief Macro for conditionally creating a VDMA job for transfering data from a register structure.
 *
 * Job is created only if there is a define formed of concatenation of an instance name
 * and a feature name (e.g. SPU010_BELLS where SPU010 is @p _inst and BELLS is a @p _feature) set
 * to 1.
 *
 * @param[in] _inst    Instance, e.g. SPU010.
 * @param[in] _feature Feature name as used in _peripherals.h.
 * @param[in] _regs    Name of a feature register set name.
 * @param[in] _array   Indication whether provided structure is an array or not. Set to 1 to
 *                     indicate that it is an array.
 *
 * @return A comma terminated MVDMA job descriptor if condition is met or nothing.
 */
#define NRFX_SR_VDMA_INST_COND_SET_JOB(_inst, _feature, _regs, _array)              \
    NRFX_SR_VDMA_INST_COND_REG_JOB(_inst, _feature, _regs,                          \
                                  sizeof(NRFX_CONCAT(NRF_, _inst)->_regs), _array)

/**
 * @brief Macro for conditionally returning a length.
 *
 * Macro returns input @p _len if there is a define formed of concatenation of an instance name
 * and a feature name (e.g. SPU010_BELLS where SPU010 is @p _inst and BELLS is a @p _feature) set
 * to 1.
 *
 * @param[in] _inst    Instance name, e.g. SPU100.
 * @param[in] _feature Feature name as used in peripherals.h file.
 * @param[in] _len     Name of a register set associated with the given feature.
 *
 * @return @p _len or 0 is feature define is not set or does not exist.
 */
#define NRFX_SR_VDMA_INST_COND_LEN(_inst, _feature, _len) \
        NRFX_COND_CODE_1(NRFX_CONCAT(_inst, _, _feature), (_len), (0))

/**
 * @brief Macro for conditionally calculating length of a structure in a register set.
 *
 * Macro returns size of a struct if there is a define formed of concatenation of an instance name
 * and a feature name (e.g. SPU010_BELLS where SPU010 is @p _inst and BELLS is a @p _feature) set
 * to 1.
 *
 * @param[in] _inst    Instance name, e.g. SPU100.
 * @param[in] _feature Feature name as used in peripherals.h file.
 * @param[in] _regs    Name of a register set associated with the given feature.
 *
 * @return Size of a structure or 0 is feature define is not set or does not exist.
 */
#define NRFX_SR_VDMA_INST_COND_SET_LEN(_inst, _feature, _regs) \
        NRFX_SR_VDMA_INST_COND_LEN(_inst, _feature, sizeof(NRFX_CONCAT(NRF_, _inst)->_regs))

/**
 * @brief Macro for calculating length of a structure in a register set.
 *
 * @param[in] _inst Instance name, e.g. SPU100.
 * @param[in] _regs Name of a register set associated with the given feature.
 *
 * @return Size of a structure.
 */
#define NRFX_SR_VDMA_INST_SET_LEN(_inst, _regs) \
        sizeof(NRFX_CONCAT(NRF_, _inst)->_regs)

/**
 * @brief Macro for generating a VDMA job descriptor for storing or restoring state of all instances of
 *        a given peripheral.
 *
 * Sum of length of all transfers must equal length calculated by @ref NRFX_SR_VDMA_LEN.
 *
 * Macro attempts to call NRFX_SR_VDMA_\<periph_name\>_JOB macro with empty list of arguments.
 * Such macro must exist or compilation will fail.
 *
 * Return value can be used to initialize an array of jobs.
 *
 * @param[in] periph Peripheral name, e.g. SPU.
 *
 * @return List of all job descriptor ending with a comma without null termination.
 */
#define NRFX_SR_VDMA_JOB(periph) NRFX_CONCAT(NRFX_SR_VDMA_, periph, _JOB)()

/**
 * @brief Macro for calculating size of the buffer needed to store state of all instances of
 *        a given peripheral.
 *
 * Macro attempts to call NRFX_SR_VDMA_\<periph_name\>_LEN macro with empty list of arguments.
 * Such macro must exist or compilation will fail.
 *
 * @param[in] periph Peripheral name, e.g. SPU.
 *
 * @return Number of bytes needed for storing state of all instances.
 */
#define NRFX_SR_VDMA_LEN(periph) NRFX_CONCAT(NRFX_SR_VDMA_, periph, _LEN)()

/** @} */

#ifdef __cplusplus
}
#endif

#endif //NRFX_SR_VDMA_H__
