/**
 *Author: Nawal
 *task : 1-print_rev_recursion.c
 */
#include "main.h"
/**
 *main - check the code
 *_print_rev_recursion: print a string in reverse
 * @s: print string
 *return : no return
 */
void _print_rev_recursion(char *s)
{
if (*s)
{
_puthcar(*s)
_rev_recursion(s + 1)
}
}
