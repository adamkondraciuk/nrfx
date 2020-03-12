/*$$$LICENCE_NORDIC_STANDARD<2020>$$$*/

#if !defined(__NRFX_DOXYGEN__)

typedef struct
{
#define NRF_RTN_REG_ITEM(a, b) uint32_t addr##a[b];
#define NRF_RTN_REG_FINISH
#include REGS_LIST_FILE
#undef NRF_RTN_REG_FINISH
#undef NRF_RTN_REG_ITEM
} REGS_ITEMS_SPACE_TYPE_NAME;

const nrfx_rtn_ctrl_list_t REGS_ITEMS_CTRL_ARR_NAME[] = {
#define NRF_RTN_REG_ITEM(a, b) {.offset = (a), .number = (b)},
#define NRF_RTN_REG_FINISH {.offset = 0, .number = 0},
#include REGS_LIST_FILE
#undef NRF_RTN_REG_ITEM
#undef NRF_RTN_REG_FINISH
};

#undef REGS_ITEMS_CTRL_ARR_NAME
#undef REGS_ITEMS_SPACE_TYPE_NAME
#undef REGS_LIST_FILE

#endif // !defined(__NRFX_DOXYGEN__)
