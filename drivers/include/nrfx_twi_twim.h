/*$$$LICENCE_NORDIC_STANDARD<2019>$$$*/

#ifndef NRFX_TWI_TWIM_H
#define NRFX_TWI_TWIM_H

#include <nrfx.h>

#ifdef __cplusplus
extern "C" {
#endif

nrfx_err_t nrfx_twi_twim_bus_recover(uint32_t scl_pin, uint32_t sda_pin);

#ifdef __cplusplus
}
#endif

#endif // NRFX_TWI_TWIM_H
