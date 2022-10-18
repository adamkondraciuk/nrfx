/*$$$LICENCE_NORDIC_STANDARD<2022>$$$*/

#ifndef NRFX_CONFIG_COMMON_H__
#define NRFX_CONFIG_COMMON_H__

#ifndef NRFX_CONFIG_H__
#error "This file should not be included directly. Include nrfx_config.h instead."
#endif


// <i> NRFX API version 2.9 flag. When the flag is set NRFX API is compatible with the previous NRFX release.
#define NRFX_CONFIG_API_VER_2_9 1

// <i> NRFX API version 2.10 flag.
/* When this flag is set the following changes to the nrfx API will be introduced:
 *
 * 1. IPC driver:
 *  - Change input parameters for @ref nrfx_ipc_handler_t
 *  - Rename function **nrfx_ipc_mem_get** to **nrfx_ipc_gpmem_get**.
 */
#define NRFX_CONFIG_API_VER_2_10 0

#endif /* NRFX_CONFIG_COMMON_H__ */
