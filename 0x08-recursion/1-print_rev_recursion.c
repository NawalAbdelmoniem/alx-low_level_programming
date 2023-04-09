#include "main.h"
/**
 *main - check the code
 *_print_rev_recursion:function that prints a string in reverse
 * @s: print string
 *return : no return
 */
void _print_rev_recursion(char *s)
{
if (*s)
{
_putchar(*s);
_print_rev_recursion(s + 1);
}
}
