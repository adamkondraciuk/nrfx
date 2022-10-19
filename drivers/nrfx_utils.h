/*$$$LICENCE_NORDIC_STANDARD<2022>$$$*/

#ifndef NRFX_UTILS_H__
#define NRFX_UTILS_H__

#include <nrfx_utils_internal.h>
/**
 * @defgroup nrfx_utils Preprocessor utils
 * @{
 * @ingroup nrfx
 * @brief Preprocessor utils.
 */

/**
 * @brief Insert code depending on whether @p _flag expands to 1 or not.
 *
 * To prevent the preprocessor from treating commas as argument
 * separators, the @p _if_1_code and @p _else_code expressions must be
 * inside brackets/parentheses: <tt>()</tt>. These are stripped away
 * during macro expansion.
 *
 * Example:
 *
 *     NRFX_COND_CODE_1(CONFIG_FLAG, (uint32_t x;), (there_is_no_flag();))
 *
 * If @p CONFIG_FLAG is defined to 1, this expands to:
 *
 *     uint32_t x;
 *
 * It expands to <tt>there_is_no_flag();</tt> otherwise.
 *
 * This could be used as an alternative to:
 *
 *     #if defined(CONFIG_FLAG) && (CONFIG_FLAG == 1)
 *     #define MAYBE_DECLARE(x) uint32_t x
 *     #else
 *     #define MAYBE_DECLARE(x) there_is_no_flag()
 *     #endif
 *
 *     MAYBE_DECLARE(x);
 *
 * However, the advantage of COND_CODE_1() is that code is resolved in
 * place where it is used, while the @p \#if method defines @p
 * MAYBE_DECLARE on two lines and requires it to be invoked again on a
 * separate line. This makes COND_CODE_1() more concise and also
 * sometimes more useful when used within another macro's expansion.
 *
 * @note @p _flag can be the result of preprocessor expansion,
 *	 however, @p _if_1_code is only expanded if @p _flag expands
 *	 to the integer literal 1. Integer expressions that evaluate
 *	 to 1, e.g. after doing some arithmetic, will not work.
 *
 * @param _flag evaluated flag
 * @param _if_1_code result if @p _flag expands to 1; must be in parentheses
 * @param _else_code result otherwise; must be in parentheses
 */
#define NRFX_COND_CODE_1(_flag, _if_1_code, _else_code) \
	_NRFX_COND_CODE_1(_flag, _if_1_code, _else_code)

/**
 * @brief Like @ref NRFX_COND_CODE_1() except tests if @p _flag is 0.
 *
 * This is like @ref NRFX_COND_CODE_1(), except that it tests whether @p _flag
 * expands to the integer literal 0. It expands to @p _if_0_code if
 * so, and @p _else_code otherwise; both of these must be enclosed in
 * parentheses.
 *
 * @param _flag evaluated flag
 * @param _if_0_code result if @p _flag expands to 0; must be in parentheses
 * @param _else_code result otherwise; must be in parentheses
 */
#define NRFX_COND_CODE_0(_flag, _if_0_code, _else_code) \
	_NRFX_COND_CODE_0(_flag, _if_0_code, _else_code)

/**
 * @brief Check for macro definition in compiler-visible expressions
 *
 * It has the effect of taking a macro value that may be defined to "1"
 * or may not be defined at all and turning it into a literal
 * expression that can be handled by the C compiler instead of just
 * the preprocessor.
 *
 * That is, it works similarly to <tt>\#if defined(CONFIG_FOO)</tt>
 * except that its expansion is a C expression. Thus, much <tt>\#ifdef</tt>
 * usage can be replaced with equivalents like:
 *
 *     if (IS_ENABLED(CONFIG_FOO)) {
 *             do_something_with_foo
 *     }
 *
 * This is cleaner since the compiler can generate errors and warnings
 * for @p do_something_with_foo even when @p CONFIG_FOO is undefined.
 *
 * @param config_macro Macro to check
 * @return 1 if @p config_macro is defined to 1, 0 otherwise (including
 *         if @p config_macro is not defined)
 */
#define NRFX_IS_ENABLED(config_macro) _NRFX_IS_ENABLED1(config_macro)

/**
 * @brief Generates a sequence of code with configurable separator.
 *
 * Example:
 *
 *     #define FOO(i, _) MY_PWM ## i
 *     { NRFX_LISTIFY(PWM_COUNT, FOO, (,)) }
 *
 * The above two lines expand to:
 *
 *    { MY_PWM0 , MY_PWM1 }
 *
 * @param LEN The length of the sequence. Must be an integer literal less
 *            than 255.
 * @param F A macro function that accepts at least two arguments:
 *          <tt>F(i, ...)</tt>. @p F is called repeatedly in the expansion.
 *          Its first argument @p i is the index in the sequence, and
 *          the variable list of arguments passed to LISTIFY are passed
 *          through to @p F.
 *
 * @param sep Separator (e.g. comma or semicolon). Must be in parentheses;
 *            this is required to enable providing a comma as separator.
 *
 * @note Calling NRFX_LISTIFY with undefined arguments has undefined
 * behavior.
 */
#define NRFX_LISTIFY(LEN, F, sep, ...) \
    NRFX_CONCAT_2(_NRFX_LISTIFY_, LEN)(F, sep, __VA_ARGS__)

/** @} */

#endif /* NRFX_UTILS_H__ */
