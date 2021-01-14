/*$$$LICENCE_NORDIC_STANDARD<2020>$$$*/

#include <nrfx.h>

#if NRFX_CHECK(NRFX_RTN_ENABLED)
#include <helpers/include/nrfx_rtn.h>

#define NRFX_LOG_MODULE NRFX_RTN
#include <nrfx_log.h>

void nrfx_rtn_backup(void const *                 p_reg,
                     nrfx_rtn_ctrl_list_t const * p_ctrl_list,
                     void *                       p_dest)
{
    uint32_t   p_regs_addr;
    uint32_t * p_dest_u32 = (uint32_t *)p_dest;
    uint32_t   i = 0, elem_in_off, dest_off = 0;

    /* How the algorithm works:
     *
     * The `p_ctrl_list` array contains pairs: offset and number of the bytes to be processed.
     * `While` loop iterates over each element in the `p_ctrl_list array` (variable `i`) until value
     * of the `number` variable is zero.
     * It means that algorithm found end condition of the array.
     *
     * Inside while loop there is `for` loop to iterate over each 32-bit element that start
     * from given offset. For example:
     *
     *               |    32bit word    |    32bit word    |    32bit word    |    32bit word    |
     * offset 0x500: | elem_in_off == 0 | elem_in_off == 1 | elem_in_off == 2 | elem_in_off == 3 |
     *
     * Data is stored in memory that is allocted under `p_dest` address with offset specified
     * by the `dest_off` variable.
     * Algorithm works like optimized 32-bit, memcpy function with the array of the source addresses.
     */

    while (p_ctrl_list[i].number != 0)
    {
        p_regs_addr = (uint32_t)p_reg + p_ctrl_list[i].offset;
        for (elem_in_off = 0; elem_in_off < p_ctrl_list[i].number; ++elem_in_off)
        {
            NRFX_LOG_DEBUG("Backup 0x%08x at address %p",
                           *(volatile uint32_t *)(p_regs_addr + (elem_in_off * sizeof(uint32_t))),
                           &p_dest_u32[dest_off]);
            p_dest_u32[dest_off++] =
                *(volatile uint32_t *)(p_regs_addr + (elem_in_off * sizeof(uint32_t)));
        }
        i++;
    }
}

void nrfx_rtn_restore(void *                       p_reg,
                      nrfx_rtn_ctrl_list_t const * p_ctrl_list,
                      void const *                 p_src)
{
    uint32_t   p_regs_addr;
    uint32_t * p_src_u32 = (uint32_t *)p_src;
    uint32_t   i = 0, elem_in_off, dest_off = 0;

    while (p_ctrl_list[i].number != 0)
    {
        p_regs_addr = (uint32_t)p_reg + p_ctrl_list[i].offset;
        for (elem_in_off = 0; elem_in_off < p_ctrl_list[i].number; ++elem_in_off)
        {
            NRFX_LOG_DEBUG("Restore 0x%08x at address %p",
                           p_src_u32[dest_off],
                           (volatile uint32_t *)(p_regs_addr + (elem_in_off * sizeof(uint32_t))));
            *(volatile uint32_t *)(p_regs_addr + (elem_in_off * sizeof(uint32_t))) =
                p_src_u32[dest_off++];
        }
        i++;
    }
}

#endif // NRFX_CHECK(NRFX_RTN_ENABLED)
