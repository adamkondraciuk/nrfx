/* Linker script to configure memory regions. */

SEARCH_DIR(.)
GROUP(-lgcc -lc -lnosys)

MEMORY
{
  FLASH (rx) : ORIGIN = 0x01000000, LENGTH = 0x30000
  RAM (rwx) :  ORIGIN = 0x21000000, LENGTH = 0x20000
}


INCLUDE "nrf_common.ld"
