/*$$$LICENCE_NORDIC_STANDARD<2017>$$$*/

#ifndef NRFX_ERRORS_H__
#define NRFX_ERRORS_H__

typedef uint32_t ret_code_t;

#ifndef NRFX_ERROR_BASE_NUM
#define NRFX_ERROR_BASE_NUM         0xBAD00000
#endif

#ifndef NRFX_SUCCESS
#define NRFX_SUCCESS                (NRFX_ERROR_BASE_NUM + 0)  ///< Successful command
#endif
#ifndef NRFX_ERROR_INTERNAL
#define NRFX_ERROR_INTERNAL         (NRFX_ERROR_BASE_NUM + 3)  ///< Internal Error
#endif
#ifndef NRFX_ERROR_NOT_SUPPORTED
#define NRFX_ERROR_NOT_SUPPORTED    (NRFX_ERROR_BASE_NUM + 6)  ///< Not supported
#endif
#ifndef NRFX_ERROR_INVALID_PARAM
#define NRFX_ERROR_INVALID_PARAM    (NRFX_ERROR_BASE_NUM + 7)  ///< Invalid Parameter
#endif
#ifndef NRFX_ERROR_INVALID_STATE
#define NRFX_ERROR_INVALID_STATE    (NRFX_ERROR_BASE_NUM + 8)  ///< Invalid state, operation disallowed in this state
#endif
#ifndef NRFX_ERROR_TIMEOUT
#define NRFX_ERROR_TIMEOUT          (NRFX_ERROR_BASE_NUM + 13) ///< Operation timed out
#endif
#ifndef NRFX_ERROR_FORBIDDEN
#define NRFX_ERROR_FORBIDDEN        (NRFX_ERROR_BASE_NUM + 15) ///< Forbidden Operation
#endif
#ifndef NRFX_ERROR_INVALID_ADDR
#define NRFX_ERROR_INVALID_ADDR     (NRFX_ERROR_BASE_NUM + 16) ///< Bad Memory Address
#endif
#ifndef NRFX_ERROR_BUSY
#define NRFX_ERROR_BUSY             (NRFX_ERROR_BASE_NUM + 17) ///< Busy
#endif

#ifndef NRFX_ERROR_PERIPH_DRIVERS_ERR_BASE
#define NRFX_ERROR_PERIPH_DRIVERS_ERR_BASE  (NRFX_ERROR_BASE_NUM + 0x10000)
#endif

#ifndef NRFX_ERROR_DRV_TWI_ERR_OVERRUN
#define NRFX_ERROR_DRV_TWI_ERR_OVERRUN      (NRFX_ERROR_PERIPH_DRIVERS_ERR_BASE + 0x0000)
#endif
#ifndef NRFX_ERROR_DRV_TWI_ERR_ANACK
#define NRFX_ERROR_DRV_TWI_ERR_ANACK        (NRFX_ERROR_PERIPH_DRIVERS_ERR_BASE + 0x0001)
#endif
#ifndef NRFX_ERROR_DRV_TWI_ERR_DNACK
#define NRFX_ERROR_DRV_TWI_ERR_DNACK        (NRFX_ERROR_PERIPH_DRIVERS_ERR_BASE + 0x0002)
#endif

#endif // NRFX_ERRORS_H__
