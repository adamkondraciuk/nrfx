/*$$$LICENCE_NORDIC_STANDARD<2019>$$$*/

#include <nrfx_twi_twim.h>

#if NRFX_CHECK(NRFX_TWI_ENABLED) || NRFX_CHECK(NRFX_TWIM_ENABLED)

#include <hal/nrf_gpio.h>

#define TWI_TWIM_PIN_CONFIGURE(_pin) nrf_gpio_cfg((_pin),                     \
                                                  NRF_GPIO_PIN_DIR_OUTPUT,    \
                                                  NRF_GPIO_PIN_INPUT_CONNECT, \
                                                  NRF_GPIO_PIN_PULLUP,        \
                                                  NRF_GPIO_PIN_S0D1,          \
                                                  NRF_GPIO_PIN_NOSENSE)

nrfx_err_t nrfx_twi_twim_bus_recover(uint32_t scl_pin, uint32_t sda_pin)
{
    nrf_gpio_pin_set(scl_pin);
    nrf_gpio_pin_set(sda_pin);

    TWI_TWIM_PIN_CONFIGURE(scl_pin);
    TWI_TWIM_PIN_CONFIGURE(sda_pin);
    NRFX_DELAY_US(4);

    for (uint8_t i = 0; i < 9; i++)
    {
        if (nrf_gpio_pin_read(sda_pin))
        {
            break;
        }
        else
        {
            // Pulse CLOCK signal
            nrf_gpio_pin_clear(scl_pin);
            NRFX_DELAY_US(4);
            nrf_gpio_pin_set(scl_pin);
            NRFX_DELAY_US(4);
        }
    }

    // Generate a STOP condition on the bus
    nrf_gpio_pin_clear(sda_pin);
    NRFX_DELAY_US(4);
    nrf_gpio_pin_set(sda_pin);
    NRFX_DELAY_US(4);

    if (nrf_gpio_pin_read(sda_pin))
    {
        return NRFX_SUCCESS;
    }
    else
    {
        return NRFX_ERROR_INTERNAL;
    }
}

#endif // NRFX_CHECK(NRFX_TWI_ENABLED) || NRFX_CHECK(NRFX_TWIM_ENABLED)
