#include "main.h"
#include <stdio.h>
/**
* *_memset - fills memory with a constant byte
* @s : pointer to memory
* @b : the desired constant byte Char copy
* @n : number of time
* Return: changed array with new value for n bytes
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
