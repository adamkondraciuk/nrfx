/*$$$LICENCE_NORDIC_STANDARD<2017>$$$*/

#ifndef NRFX_ERRORS_H__
#define NRFX_ERRORS_H__

typedef uint32_t ret_code_t;

/**
@defgroup nrfx_error nrfx Global Error Codes
@{

@brief Global Error definitions
*/

#ifndef NRFX_ERRORS_DEFINED_EXTERNALLY

#ifndef NRFX_ERROR_BASE_NUM
#define NRFX_ERROR_BASE_NUM         0xBAD00000
#endif

#define NRFX_SUCCESS                (NRFX_ERROR_BASE_NUM + 0)  ///< Successful command
#define NRFX_ERROR_INTERNAL         (NRFX_ERROR_BASE_NUM + 3)  ///< Internal Error
#define NRFX_ERROR_NOT_SUPPORTED    (NRFX_ERROR_BASE_NUM + 6)  ///< Not supported
#define NRFX_ERROR_INVALID_PARAM    (NRFX_ERROR_BASE_NUM + 7)  ///< Invalid Parameter
#define NRFX_ERROR_INVALID_STATE    (NRFX_ERROR_BASE_NUM + 8)  ///< Invalid state, operation disallowed in this state
#define NRFX_ERROR_TIMEOUT          (NRFX_ERROR_BASE_NUM + 13) ///< Operation timed out
#define NRFX_ERROR_FORBIDDEN        (NRFX_ERROR_BASE_NUM + 15) ///< Forbidden Operation
#define NRFX_ERROR_INVALID_ADDR     (NRFX_ERROR_BASE_NUM + 16) ///< Bad Memory Address
#define NRFX_ERROR_BUSY             (NRFX_ERROR_BASE_NUM + 17) ///< Busy

#ifndef NRFX_ERROR_PERIPH_DRIVERS_ERR_BASE
#define NRFX_ERROR_PERIPH_DRIVERS_ERR_BASE  (NRFX_ERROR_BASE_NUM + 0x10000)
#endif

#define NRFX_ERROR_DRV_TWI_ERR_OVERRUN      (NRFX_ERROR_PERIPH_DRIVERS_ERR_BASE + 0x0000)
#define NRFX_ERROR_DRV_TWI_ERR_ANACK        (NRFX_ERROR_PERIPH_DRIVERS_ERR_BASE + 0x0001)
#define NRFX_ERROR_DRV_TWI_ERR_DNACK        (NRFX_ERROR_PERIPH_DRIVERS_ERR_BASE + 0x0002)

#endif // NRFX_ERRORS_DEFINED_EXTERNALLY

/**
@}
*/

#endif // NRFX_ERRORS_H__
