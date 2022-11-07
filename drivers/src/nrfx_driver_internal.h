/*$$$LICENCE_NORDIC_STANDARD<2022>$$$*/

#ifndef NRFX_DRIVER_INSTERNAL_H__
#define NRFX_DRIVER_INSTERNAL_H__

#include <nrfx_utils.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup nrfx_driver_internal Driver utility macros
 * @{
 * @ingroup nrfx
 * @brief Driver utility macros.
 */

/**
 * @brief Macro for resolving provided user macro for enabled instances of a driver.
 *
 * Macro checks if driver instances are enabled for all potential instaces of a
 * peripheral. It takes peripheral name and checks whether NRFX_\<peripheral\>\<id\>_ENABLED
 * is set to 1 and if yes then provided macro is evaluated for given instance.
 *
 * Macro supports check on instances with following names:
 * - \<periph_name\>0 - \<periph_name\>255 - e.g. SPIM0, SPIM255
 * - \<periph_name\>00 - \<periph_name\>099 - e.g. SPIM00, SPIM099
 * - \<periph_name\>000 - \<periph_name\>009 - e.g. SPIM000, SPIM009
 *
 * @param[in] periph_name Peripheral name, e.g. SPIM.
 * @param[in] macro       Macro which is resolved if driver instance is enabled. Macro has following
 *                        arguments: macro(periph_name, prefix, i, ...).
 * @param[in] sep         Separator added between all evaluations, in parentheses.
 * @param[in] off_code    Code injected for disabled instances, in parentheses.
 */
#define NRFX_FOREACH_ENABLED(periph_name, macro, sep, off_code, ...) \
        NRFX_LISTIFY(256, _NRFX_EVAL_IF_ENABLED, sep, \
                     off_code, periph_name, , macro, __VA_ARGS__) NRFX_DEBRACKET sep \
        NRFX_LISTIFY(100, _NRFX_EVAL_IF_ENABLED, sep, \
                     off_code, periph_name, 0, macro, __VA_ARGS__) NRFX_DEBRACKET sep \
        NRFX_LISTIFY(10, _NRFX_EVAL_IF_ENABLED, sep, \
                     off_code, periph_name, 00, macro, __VA_ARGS__)

/**
 * @brief Macro for creating a content for enum which is listing enabled driver instances.
 *
 * It creates comma separated list of entries like NRFX_\<instance_name\>_INST_IDX,
 * e.g. (NRFX_SPIM0_INST_IDX) for all enabled instances (NRFX_\<instance_name\>_ENABLED
 * is set to 1). It should be called within enum declaration. Created enum is used
 * by the driver to index all enabled instances of the driver.
 *
 * @param[in] periph_name Peripheral name (e.g. SPIM).
 */
#define NRFX_INSTANCE_ENUM_LIST(periph_name) \
        NRFX_FOREACH_ENABLED(periph_name, _NRFX_INST_ENUM, (), ())

/**
 * @brief Macro for creating an interrupt handler for all enabled driver instances.
 *
 * Macro creates set of function which calls irq_handler function with two parameters:
 * - peripheral instance register pointer
 * - pointer to a control block structure associated with the given instance
 *
 * Generic interrupt handler function with above mentioned parameters named irq_handler
 * must be implemented in the driver.
 *
 * @note Handlers are using enum which should be generated using @ref NRFX_INSTANCE_ENUM_LIST.
 *
 * @param[in] periph_name       Peripheral name, e.g. SPIM.
 * @param[in] periph_name_small Peripheral name written with small letters, e.g. spim.
 */
#define NRFX_INSTANCE_IRQ_HANDLERS(periph_name, periph_name_small) \
    NRFX_FOREACH_ENABLED(periph_name, _NRFX_IRQ_HANDLER, (), (), periph_name_small)

/**
 * @brief Macro for declaring an interrupt handler for all enabled driver instances.
 *
 * Macro creates set of function declarations. It is intended to be used in the driver header.
 *
 * @param[in] periph_name       Peripheral name, e.g. SPIM.
 * @param[in] periph_name_small Peripheral name written with small letters, e.g. spim.
 */
#define NRFX_INSTANCE_IRQ_HANDLERS_DECLARE(periph_name, periph_name_small) \
    NRFX_FOREACH_ENABLED(periph_name, _NRFX_IRQ_HANDLER_DECLARE, (), (), periph_name_small)

/**
 * @brief Macro for generating comma-separated list of interrupt handlers for all
 *        enabled driver instances.
 *
 * Interrupt handlers are generated using @ref NRFX_INSTANCE_IRQ_HANDLERS.
 * It is intended to be used to create a list which is used for passing an interrupt
 * handler function to the PRS driver.
 *
 * @param[in] periph_name       Peripheral name, e.g. SPIM.
 * @param[in] periph_name_small Peripheral name written with small letters, e.g. spim.
 */
#define NRFX_INSTANCE_IRQ_HANDLERS_LIST(periph_name, periph_name_small) \
    NRFX_FOREACH_ENABLED(periph_name, _NRFX_IRQ_HANDLER_LIST, (), (), periph_name_small)

/** @} */

#ifdef __cplusplus
}
#endif

#endif // NRFX_DRIVER_INSTERNAL_H__
