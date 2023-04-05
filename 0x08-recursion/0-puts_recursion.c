#include "main.h"
/**
 *main - check the code
 *_puts_recursion: print string followed by new line.
 * @s : print string
 */
void _puts_recursion(char *s);
int main(void)
{
if (*s == '\0')
{
printf('\n');
return;
}
printf(*s);
_puts_recursion(s + 1);
}
