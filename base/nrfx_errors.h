/*$$$LICENCE_NORDIC_STANDARD<2017>$$$*/

#ifndef NRFX_ERRORS_H__
#define NRFX_ERRORS_H__

typedef uint32_t ret_code_t;

#ifndef NRFX_ERROR_BASE_NUM
    #define NRFX_ERROR_BASE_NUM 0xBAD00000
#endif
#define NRFX_SUCCESS                (NRFX_ERROR_BASE_NUM + 0)  ///< Successful command
#define NRFX_ERROR_INTERNAL         (NRFX_ERROR_BASE_NUM + 3)  ///< Internal Error
//#define NRF_ERROR_NO_MEM            (NRF_ERROR_BASE_NUM + 4)  ///< No Memory for operation
//#define NRF_ERROR_NOT_FOUND         (NRF_ERROR_BASE_NUM + 5)  ///< Not found
//#define NRF_ERROR_NOT_SUPPORTED     (NRF_ERROR_BASE_NUM + 6)  ///< Not supported
#define NRFX_ERROR_INVALID_PARAM    (NRFX_ERROR_BASE_NUM + 7)  ///< Invalid Parameter
#define NRFX_ERROR_INVALID_STATE    (NRFX_ERROR_BASE_NUM + 8)  ///< Invalid state, operation disallowed in this state
//#define NRF_ERROR_INVALID_LENGTH    (NRF_ERROR_BASE_NUM + 9)  ///< Invalid Length
//#define NRF_ERROR_INVALID_FLAGS     (NRF_ERROR_BASE_NUM + 10) ///< Invalid Flags
//#define NRF_ERROR_INVALID_DATA      (NRF_ERROR_BASE_NUM + 11) ///< Invalid Data
//#define NRF_ERROR_DATA_SIZE         (NRF_ERROR_BASE_NUM + 12) ///< Data size exceeds limit
#define NRFX_ERROR_TIMEOUT          (NRFX_ERROR_BASE_NUM + 13) ///< Operation timed out
//#define NRF_ERROR_NULL              (NRF_ERROR_BASE_NUM + 14) ///< Null Pointer
#define NRFX_ERROR_FORBIDDEN        (NRFX_ERROR_BASE_NUM + 15) ///< Forbidden Operation
#define NRFX_ERROR_INVALID_ADDR     (NRFX_ERROR_BASE_NUM + 16) ///< Bad Memory Address
#define NRFX_ERROR_BUSY             (NRFX_ERROR_BASE_NUM + 17) ///< Busy

#endif // NRFX_ERRORS_H__
