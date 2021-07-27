/*$$$LICENCE_NORDIC_STANDARD<2021>$$$*/

#ifndef NRFY_GPIO_H__
#define NRFY_GPIO_H__

#include <nrfx.h>
#include <hal/nrf_gpio.h>

#ifdef __cplusplus
extern "C" {
#endif

NRFY_STATIC_INLINE void nrfy_gpio_cfg(
    uint32_t             pin_number,
    nrf_gpio_pin_dir_t   dir,
    nrf_gpio_pin_input_t input,
    nrf_gpio_pin_pull_t  pull,
    nrf_gpio_pin_drive_t drive,
    nrf_gpio_pin_sense_t sense)
{
    nrf_gpio_cfg(pin_number, dir, input, pull, drive, sense);
    nrf_barrier_w();
}

NRFY_STATIC_INLINE void nrfy_gpio_cfg_output(uint32_t pin_number)
{
    nrf_gpio_cfg_output(pin_number);
    nrf_barrier_w();
}

NRFY_STATIC_INLINE void nrfy_gpio_cfg_input(uint32_t pin_number, nrf_gpio_pin_pull_t pull_config)
{
    nrf_gpio_cfg_input(pin_number, pull_config);
    nrf_barrier_w();
}

NRFY_STATIC_INLINE void nrfy_gpio_pin_set(uint32_t pin_number)
{
    nrf_gpio_pin_set(pin_number);
    nrf_barrier_w();
}

NRFY_STATIC_INLINE void nrfy_gpio_pin_clear(uint32_t pin_number)
{
    nrf_gpio_pin_clear(pin_number);
    nrf_barrier_w();
}

NRFY_STATIC_INLINE void nrfy_gpio_cfg_default(uint32_t pin_number)
{
    nrf_gpio_cfg_default(pin_number);
    nrf_barrier_w();
}
#ifdef __cplusplus
}
#endif

#endif // NRFY_GPIO_H__
