#include "main.h"
/**
 *main - check the code
 *_puts_recursion: print string followed by new line.
 * @s : print string
 *return : void
*/
void _puts_recursion(char *s)
{
if (*s)
{
_putchar (*s);
_puts_recursion(s + 1);
}
else
_putchar('\n');
}
