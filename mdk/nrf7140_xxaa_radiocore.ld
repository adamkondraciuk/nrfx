/* Linker script to configure memory regions. */

SEARCH_DIR(.)
GROUP(-lgcc -lc)

MEMORY
{
  FLASH (rx) : ORIGIN = 0xE120000, LENGTH = 0x80000 /* Inside global MRAM0 */
  FLASH1 (rx) : ORIGIN = 0x2F840000, LENGTH = 0x2000 /* OTP0 */
  EXTFLASH (rx) : ORIGIN = 0x70000000, LENGTH = 0x20000000
  RAM (rwx) : ORIGIN = 0x23000000, LENGTH = 0x30000 /* Inside network RAM0 */
  RAM1 (rwx) : ORIGIN = 0x23040000, LENGTH = 0x8000 /* Inside network RAM0 */
  RAM2 (rwx) : ORIGIN = 0x2F000000, LENGTH = 0x80000 /* GRAM00 */
  RAM3 (rwx) : ORIGIN = 0x2F080000, LENGTH = 0x80000 /* GRAM01 */
  RAM4 (rwx) : ORIGIN = 0x2F100000, LENGTH = 0x80000 /* GRAM02 */
  RAM5 (rwx) : ORIGIN = 0x2F180000, LENGTH = 0x60000 /* GRAM03 */
  RAM6 (rwx) : ORIGIN = 0x2F880000, LENGTH = 0x10000 /* GRAM20 */
  RAM7 (rwx) : ORIGIN = 0x2F890000, LENGTH = 0x10000 /* GRAM21 */
  RAM8 (rwx) : ORIGIN = 0x2FC00000, LENGTH = 0x10000 /* GRAM30 (low-speed) */
  RAM9 (rwx) : ORIGIN = 0x2FC10000, LENGTH = 0x4000 /* GRAM31 (low-speed) */
}


INCLUDE "nrf_common.ld"
