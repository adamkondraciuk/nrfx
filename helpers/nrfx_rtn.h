/*$$$LICENCE_NORDIC_STANDARD<2020>$$$*/

#ifndef NRF_RTN_H
#define NRF_RTN_H

#include <stddef.h>
#include <soc/nrfx_rtn_type.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrf_rtn Register Retention API
 * @{
 * @ingroup nrfx
 * @brief   Helper that allows preserving important data from peripheral's registers.
 *
 * Register retention solution consists of:
 * - Register retention API
 * - Description of the registers to be preserved/restored
 *
 * @section rtn_registers_list Building register description list
 *
 * Register description list consist of two symbols:
 * - NRF_RTN_REG_ITEM - that have two arguments: offset in the peripheral's space
 * and number of 32bit registers
 * - NRF_RTN_REG_FINISH - that finishes creation of the list
 *
 * Main descriptions are stored in the `soc/retention` directory.
 *
 *
 * @code{.c}
 * NRF_RTN_REG_ITEM(0x200, 1)
 * NRF_RTN_REG_ITEM(0x304, 1)
 * NRF_RTN_REG_ITEM(0x504, 1)
 * NRF_RTN_REG_FINISH
 * @endcode
 *
 * @section rtn_registers_connection Creating register retention types and structures
 *
 * In order to use the register retention list, the developer must first create types
 * and structures in the header file, using the following scheme:
 *
 * @code{.c}
 * #ifndef HEADER_GUARD_H__
 * #define HEADER_GUARD_H__
 *
 * #include <soc/nrfx_rtn_type.h>
 *
 * #ifdef __cplusplus
 * extern "C" {
 * #endif
 *
 * // Filename of the list that contains all described registers
 * #define REGS_LIST_FILE             "retention/nrfx_rtn_PERIPH.regdef"
 *
 * // Name of the type that creates space to store all registers
 * #define REGS_ITEMS_SPACE_TYPE_NAME nrfx_rtn_PERIPH_t
 *
 * // Name of the control list that contains offsets and number of 32bit words to operate on
 * #define REGS_ITEMS_CTRL_ARR_NAME   nrfx_rtn_PERIPH_ctrl_list
 *
 * #include "nrfx_rtn_template.h"
 *
 * #ifdef __cplusplus
 * }
 * #endif
 *
 * #endif // HEADER_GUARD_H__
 * @endcode
 *
 * @section rtn_registers_usage API usage
 *
 * After creating of the structures and types developer can easily use them to reserve place
 * to register backup statically:
 *
 * @code{.c}
 * nrfx_rtn_PERIPH_t rtn_registers __attribute__((section("RETAINED_SECTION")));
 * @endcode
 *
 * or dynamically using some allocator:
 *
 * @code{.c}
 * nrfx_rtn_PERIPH_t * rtn_registers = allocator(sizeof(nrfx_rtn_PERIPH_t));
 * @endcode
 *
 * Registers can be preserved using @c nrfx_rtn_backup() function:
 *
 * @code{.c}
 * nrfx_rtn_backup((void *)NRF_PERIPH,
 *                 nrfx_rtn_PERIPH_ctrl_list,
 *                 (void *)&rtn_registers);
 * @endcode
 *
 * To restore registers use @c nrfx_rtn_restore() function:
 *
 * @code{.c}
 * nrfx_rtn_restore((void *)NRF_PERIPH,
 *                 nrfx_rtn_PERIPH_ctrl_list,
 *                 (void *)&rtn_registers);
 * @endcode
 */

/**
 * @brief Function for creating backup of the registers of a given peripheral.
 *
 * @param[in]  p_reg       Pointer to the structure of registers of the peripheral.
 * @param[in]  p_ctrl_list Pointer to the control list structure.
 * @param[out] p_dest      Pointer to the destination memory.
 */
void nrfx_rtn_backup(void const *                 p_reg,
                     nrfx_rtn_ctrl_list_t const * p_ctrl_list,
                     void *                       p_dest);

/**
 * @brief Function for restoring values of the registers of a given peripheral.
 *
 * @param[out] p_reg       Pointer to the structure of registers of the peripheral.
 * @param[in]  p_ctrl_list Pointer to the control list structure.
 * @param[in]  p_src       Pointer to the source memory.
 */
void nrfx_rtn_restore(void *                       p_reg,
                      nrfx_rtn_ctrl_list_t const * p_ctrl_list,
                      void const *                 p_src);

/** @} */

#ifdef __cplusplus
}
#endif

#endif // NRF_RTN_H
