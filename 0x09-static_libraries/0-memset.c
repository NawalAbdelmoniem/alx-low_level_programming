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
  while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
