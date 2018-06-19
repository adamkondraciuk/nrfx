/* Linker script to configure memory regions. */

SEARCH_DIR(.)
GROUP(-lgcc -lc -lnosys)

MEMORY
{
  FLASH (rx) : ORIGIN = 0x00000000, LENGTH = 0x200000
  RAM (rwx) :  ORIGIN = 0x21000000, LENGTH = 0x4BC00
}


INCLUDE "nrf_common.ld"