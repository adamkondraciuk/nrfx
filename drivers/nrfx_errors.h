/*$$$LICENCE_NORDIC_STANDARD<2017>$$$*/

#ifndef NRFX_ERRORS_H__
#define NRFX_ERRORS_H__

#if !defined(NRFX_ERRORS_DEFINED_EXTERNALLY)

/**
 * @defgroup nrfx_error_codes Global Error Codes
 * @{
 * @ingroup nrfx
 *
 * @brief Global error codes definitions.
 */

#define NRFX_ERROR_BASE_NUM                 0xBAD00000
#define NRFX_ERROR_SDK_COMMON_ERROR_BASE    (NRFX_ERROR_BASE_NUM +  0x0080)
#define NRFX_ERROR_PERIPH_DRIVERS_ERR_BASE  (NRFX_ERROR_BASE_NUM + 0x10000)

typedef enum {
    NRFX_SUCCESS                = (NRFX_ERROR_BASE_NUM + 0),                             ///< Successful command
    NRFX_ERROR_INTERNAL         = (NRFX_ERROR_BASE_NUM + 3),                             ///< Internal Error
    NRFX_ERROR_NO_MEM           = (NRFX_ERROR_BASE_NUM + 4),                             ///< No Memory for operation
    NRFX_ERROR_NOT_SUPPORTED    = (NRFX_ERROR_BASE_NUM + 6),                             ///< Not supported
    NRFX_ERROR_INVALID_PARAM    = (NRFX_ERROR_BASE_NUM + 7),                             ///< Invalid Parameter
    NRFX_ERROR_INVALID_STATE    = (NRFX_ERROR_BASE_NUM + 8),                             ///< Invalid state, operation disallowed in this state
    NRFX_ERROR_INVALID_LENGTH   = (NRFX_ERROR_BASE_NUM + 9),                             ///< Invalid Length
    NRFX_ERROR_TIMEOUT          = (NRFX_ERROR_BASE_NUM + 13),                            ///< Operation timed out
    NRFX_ERROR_FORBIDDEN        = (NRFX_ERROR_BASE_NUM + 15),                            ///< Forbidden Operation
    NRFX_ERROR_NULL             = (NRFX_ERROR_BASE_NUM + 14),                            ///< Null Pointer
    NRFX_ERROR_INVALID_ADDR     = (NRFX_ERROR_BASE_NUM + 16),                            ///< Bad Memory Address
    NRFX_ERROR_BUSY             = (NRFX_ERROR_BASE_NUM + 17),                            ///< Busy

    NRFX_ERROR_MODULE_ALREADY_INITIALIZED = (NRFX_ERROR_SDK_COMMON_ERROR_BASE + 0x0005), ///< Module already initialized

    NRFX_ERROR_DRV_TWI_ERR_OVERRUN  = (NRFX_ERROR_PERIPH_DRIVERS_ERR_BASE + 0x0000), ///< TWI code: Overrun
    NRFX_ERROR_DRV_TWI_ERR_ANACK    = (NRFX_ERROR_PERIPH_DRIVERS_ERR_BASE + 0x0001), ///< TWI code: Address No Acknowledgment
    NRFX_ERROR_DRV_TWI_ERR_DNACK    = (NRFX_ERROR_PERIPH_DRIVERS_ERR_BASE + 0x0002)  ///< TWI code: Data No Acknowledgment
} ret_code_t;

/**
@}
*/

#endif // NRFX_ERRORS_DEFINED_EXTERNALLY

#endif // NRFX_ERRORS_H__
