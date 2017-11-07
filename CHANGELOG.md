# Changelog
All notable changes to this project will be documented in this file.

The format is based on [Keep a Changelog](http://keepachangelog.com/en/1.0.0/)
and this project adheres to [Semantic Versioning](http://semver.org/spec/v2.0.0.html).

## [Unreleased]
### Added
- XIP support in QSPI driver.
- Errata 132 implementation in CLOCK driver.

### Changed
- Update MDK to 8.15.0. Introduce Segger Embedded Studio startup files.
- Update drivers: COMP, PWM, QDEC, SAADC, SPIS, TIMER, TWI, TWIS.
- Update HALs: COMP, NVMC, USBD.

## [0.7.0] - 2017-10-20
### Added
- This CHANGELOG.md file.
- README.md file with simple description and explanations.
- HAL for: ADC, CLOCK, COMP, ECB, EGU, GPIO, GPIOTE, I2S, LPCOMP, NVMC, PDM, POWER, PPI, PWM, QDEC, QSPI, RNG, RTC, SAADC, SPI, SPIM, SPIS, ARM(R) SysTick, TEMP, TIMER, TWI, TWIM, TWIS, UART, UARTE, USBD, WDT.
- Drivers for: ADC, CLOCK, COMP, GPIOTE, I2S, LPCOMP, PDM, POWER, PWM, QDEC, QSPI, RNG, RTC, SAADC, SPI, SPIM, SPIS, ARM(R) SysTick, TIMER, TWI, TWIM, TWIS, UART, UARTE, WDT.
- Allocators for: PPI, SWI/EGU.
- MDK in version 8.14.0.
- Offline documentation for every added driver and simple integration description.
- Template integration files.
