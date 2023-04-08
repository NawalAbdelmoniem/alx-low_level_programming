#include "main.h"
/**
 *main - check the code
 *_puts_recursion: print string followed by new line.
 * @s : print string
 *return : always to 0
*/
void _puts_recursion(char *s);
int main(void)
{
char  *s;
if (*s == '\0')
{
_putchar (*s);
_puts_recursion(*s + 1);
}
else
_putchar('\n');
return (0);
}
