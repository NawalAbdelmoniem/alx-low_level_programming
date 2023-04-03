#include "main.h"

/**
* *_memset - fills memory with constant byte
* @n : bytes of the memory area
* @s : a pointer to the memory area
* @b : the constant byte
* Return : pointer to memory area s
*/
char *_memset(char *s, char b, unsigned int n);
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
Return(s);
}
