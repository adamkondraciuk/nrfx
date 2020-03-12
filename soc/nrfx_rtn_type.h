/*$$$LICENCE_NORDIC_STANDARD<2020>$$$*/

#ifndef NRFX_RTN_TYPE_H
#define NRFX_RTN_TYPE_H

/**
 * @{
 * @ingroup nrf_rtn
 * @brief   Type that handles information about registers to be preserved.
 */
typedef struct
{
    uint32_t offset; ///< Memory offset from which data will be processed.
    uint32_t number; ///< Number of 4-byte words to be processed.
} nrfx_rtn_ctrl_list_t;

/** @} */

#endif // NRFX_RTN_TYPE_H
