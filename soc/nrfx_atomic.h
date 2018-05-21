/*$$$LICENCE_NORDIC_STANDARD<2016>$$$*/

#ifndef NRFX_ATOMIC_H__
#define NRFX_ATOMIC_H__

#include <nrfx.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrfx_atomic Atomic operations API
 * @ingroup nrfx
 * @{
 *
 * @brief This module implements C11 stdatomic.h simplified API.
 *
 * At this point only Cortex-M3/M4 cores are supported (LDREX/STREX instructions).
 * Atomic types are limited to @ref nrfx_atomic_u32_t and @ref nrfx_atomic_flag_t.
 */


/**
 * @brief Atomic 32 bit unsigned type.
 */
typedef volatile uint32_t nrfx_atomic_u32_t;

/**
 * @brief Atomic 1 bit flag type (technically 32 bit).
 */
typedef volatile uint32_t nrfx_atomic_flag_t;

/**
 * @brief Stores a value to an atomic object and returns its previous value.
 *
 * @param[in] p_data    Atomic memory pointer.
 * @param[in] value     Value to store.
 *
 * @return Old value stored in the atomic object.
 */
uint32_t nrfx_atomic_u32_fetch_store(nrfx_atomic_u32_t * p_data, uint32_t value);

/**
 * @brief Stores a value to an atomic object and returns its new value.
 *
 * @param[in] p_data    Atomic memory pointer.
 * @param[in] value     Value to store.
 *
 * @return New value stored in the atomic object.
 */
uint32_t nrfx_atomic_u32_store(nrfx_atomic_u32_t * p_data, uint32_t value);

/**
 * @brief Performs a logical OR operation on an atomic object and returns its previous value.
 *
 * @param[in] p_data    Atomic memory pointer.
 * @param[in] value     Value of second operand OR operation.
 *
 * @return Old value stored in the atomic object.
 */
uint32_t nrfx_atomic_u32_fetch_or(nrfx_atomic_u32_t * p_data, uint32_t value);

/**
 * @brief Performs a logical OR operation on an atomic object and returns its new value.
 *
 * @param[in] p_data    Atomic memory pointer.
 * @param[in] value     Value of second operand OR operation.
 *
 * @return New value stored in the atomic object.
 */
uint32_t nrfx_atomic_u32_or(nrfx_atomic_u32_t * p_data, uint32_t value);

/**
 * @brief Performs a logical AND operation on an atomic object and returns its previous value.
 *
 * @param[in] p_data    Atomic memory pointer.
 * @param[in] value     Value of second operand AND operation.
 *
 * @return Old value stored in the atomic object.
 */
uint32_t nrfx_atomic_u32_fetch_and(nrfx_atomic_u32_t * p_data, uint32_t value);

/**
 * @brief Performs a logical AND operation on an atomic object and returns its new value.
 *
 * @param[in] p_data    Atomic memory pointer.
 * @param[in] value     Value of second operand AND operation.
 *
 * @return New value stored in the atomic object.
 */
uint32_t nrfx_atomic_u32_and(nrfx_atomic_u32_t * p_data, uint32_t value);

/**
 * @brief Performs a logical XOR operation on an atomic object and returns its previous value.
 *
 * @param[in] p_data    Atomic memory pointer.
 * @param[in] value     Value of second operand XOR operation.
 *
 * @return Old value stored in the atomic object.
 */
uint32_t nrfx_atomic_u32_fetch_xor(nrfx_atomic_u32_t * p_data, uint32_t value);

/**
 * @brief Performs a logical XOR operation on an atomic object and returns its new value.
 *
 * @param[in] p_data    Atomic memory pointer.
 * @param[in] value     Value of second operand XOR operation.
 *
 * @return New value stored in the atomic object.
 */
uint32_t nrfx_atomic_u32_xor(nrfx_atomic_u32_t * p_data, uint32_t value);

/**
 * @brief Performs an arithmetic ADD operation on an atomic object and returns its previous value.
 *
 * @param[in] p_data    Atomic memory pointer.
 * @param[in] value     Value of second operand ADD operation.
 *
 * @return Old value stored in the atomic object.
 */
uint32_t nrfx_atomic_u32_fetch_add(nrfx_atomic_u32_t * p_data, uint32_t value);

/**
 * @brief Performs an arithmetic ADD operation on an atomic object and returns its new value.
 *
 * @param[in] p_data    Atomic memory pointer.
 * @param[in] value     Value of second operand ADD operation.
 *
 * @return New value stored in the atomic object.
 */
uint32_t nrfx_atomic_u32_add(nrfx_atomic_u32_t * p_data, uint32_t value);

/**
 * @brief Performs an arithmetic SUB operation on an atomic object and returns its previous value.
 *
 * @param[in] p_data    Atomic memory pointer.
 * @param[in] value     Value of second operand SUB operation.
 *
 * @return Old value stored in the atomic object.
 */
uint32_t nrfx_atomic_u32_fetch_sub(nrfx_atomic_u32_t * p_data, uint32_t value);

/**
 * @brief Performs an arithmetic SUB operation on an atomic object and returns its new value.
 *
 * @param[in] p_data    Atomic memory pointer.
 * @param[in] value     Value of second operand SUB operation.
 *
 * @return New value stored in the atomic object.
 */
uint32_t nrfx_atomic_u32_sub(nrfx_atomic_u32_t * p_data, uint32_t value);

/**
 * @brief Function for atomic conditional value replacement.
 *
 * Atomically compares the value pointed to by p_data with the value pointed to by p_expected,
 * and if those are equal, replaces the former with desired. Otherwise, loads the actual value
 * pointed to by p_data into *p_expected.
 *
 * @param p_data     Atomic memory pointer to test and modify.
 * @param p_expected Pointer to test value.
 * @param desired    Value to be stored to atomic memory.
 *
 * @retval true  *p_data was equal to *p_expected.
 * @retval false *p_data was not equal to *p_expected.
 */
bool nrfx_atomic_u32_cmp_exch(nrfx_atomic_u32_t * p_data,
                              uint32_t *         p_expected,
                              uint32_t           desired);

/**
 * @brief Performs an arithmetic SUB operation on an atomic object performed if object >= value
 *        and returns its previous value.
 *
 * @param[in] p_data    Atomic memory pointer.
 * @param[in] value     Value of second operand SUB operation.
 *
 * @return Old value stored in the atomic object.
 */
uint32_t nrfx_atomic_u32_fetch_sub_hs(nrfx_atomic_u32_t * p_data, uint32_t value);

/**
 * @brief Performs an arithmetic SUB operation on an atomic object performed if object >= value
 *        and returns its new value.
 *
 * @param[in] p_data    Atomic memory pointer.
 * @param[in] value     Value of second operand SUB operation.
 *
 * @return New value stored in the atomic object.
 */
uint32_t nrfx_atomic_u32_sub_hs(nrfx_atomic_u32_t * p_data, uint32_t value);

/**
 * @brief Performs a logic one bit flag set operation on an atomic object
 *        and returns its previous value.
 *
 * @param[in] p_data    Atomic flag memory pointer.
 *
 * @return Old flag value.
 */
uint32_t nrfx_atomic_flag_set_fetch(nrfx_atomic_flag_t * p_data);

/**
 * @brief Performs a logic one bit flag set operation on an atomic object
 *        and returns its new value.
 *
 * @param[in] p_data    Atomic flag memory pointer.
 *
 * @return New flag value.
 */
uint32_t nrfx_atomic_flag_set(nrfx_atomic_flag_t * p_data);

/**
 * @brief Performs a logic one bit flag clear operation on an atomic object
 *        and returns its previous value.
 *
 * @param[in] p_data    Atomic flag memory pointer.
 *
 * @return Old flag value.
 */
uint32_t nrfx_atomic_flag_clear_fetch(nrfx_atomic_flag_t * p_data);

/**
 * @brief Performs a logic one bit flag clear operation on an atomic object
 *        and returns its new value.
 *
 * @param[in] p_data    Atomic flag memory pointer.
 *
 * @return New flag value.
 */
uint32_t nrfx_atomic_flag_clear(nrfx_atomic_flag_t * p_data);

/** @} */

#ifdef __cplusplus
}
#endif

#endif // NRFX_ATOMIC_H__
