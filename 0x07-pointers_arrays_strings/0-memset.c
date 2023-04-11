#include "main.h"
#include <stdio.h>
/**
* *_memset - fills memory with a constant byte
* @s : pointer to memory
* @b : the desired constant byte Char copy
* @n : number of times
*
* Return : pointer to memory area (s)
*/
char *_memset(char *s, char b, unsigned int n)
{
int a = 0;
for (; n > 0; a++)
{
s[a] = b;
n--;
}
return (s);
}
