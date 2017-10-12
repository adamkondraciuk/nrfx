/*$$$LICENCE_NORDIC_STANDARD<2012>$$$*/
#ifndef NRF_TEMP_H__
#define NRF_TEMP_H__

#include <nrfx.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
* @defgroup nrf_temperature TEMP (temperature) abstraction
* @{
* @ingroup nrf_temp temperature_example
* @brief Temperature module init and read functions.
*
*/

#define MASK_SIGN           (0x00000200UL)
#define MASK_SIGN_EXTENSION (0xFFFFFC00UL)

/**
 * @brief Function for preparing the temp module for temperature measurement.
 *
 * This function initializes the TEMP module and writes to the hidden configuration register.
 */
static __INLINE void nrf_temp_init(void)
{
    /**@note Workaround for PAN_028 rev2.0A anomaly 31 - TEMP: Temperature offset value has to be manually loaded to the TEMP module */
    *(uint32_t *) 0x4000C504 = 0;
}

/**
 * @brief Function for reading temperature measurement.
 *
 * The function reads the 10 bit 2's complement value and transforms it to a 32 bit 2's complement value.
 */
static __INLINE int32_t nrf_temp_read(void)
{
    /**@note Workaround for PAN_028 rev2.0A anomaly 28 - TEMP: Negative measured values are not represented correctly */
    return ((NRF_TEMP->TEMP & MASK_SIGN) != 0) ? (NRF_TEMP->TEMP | MASK_SIGN_EXTENSION) : (NRF_TEMP->TEMP);
}

/** @} */


#ifdef __cplusplus
}
#endif

#endif
