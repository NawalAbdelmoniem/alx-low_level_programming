#include "main.h"
#include <stdio.h>
/**
* _memset - fills memory with a constant byte
* @s : pointer to memory
* @b : the desired constant byte Char copy
* @n : number of times
* Return : pointer to memory area (s)
*/

char *_memset(char *s, char b, unsigned int n)
{
unsinged int i;
for (i = 0; i < n; i++)
{
S[i] = b;
}
return (s);
}
