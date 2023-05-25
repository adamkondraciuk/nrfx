/* Linker script to configure memory regions. */

SEARCH_DIR(.)
GROUP(-lgcc -lc -lnosys)

MEMORY
{
  FLASH (rx) : ORIGIN = 0x00000000, LENGTH = 0x100000 /* Inside global RRAM0 */
  EXTFLASH (rx) : ORIGIN = 0x70000000, LENGTH = 0x20000000
  RAM (rwx) : ORIGIN = 0x20000000, LENGTH = 0x40000
  RAM1 (rwx) : ORIGIN = 0x20000000, LENGTH = 0x400000 /* GRAM00 */
}


INCLUDE "nrf_common.ld"
