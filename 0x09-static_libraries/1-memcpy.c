#include "main.h"

/**
* *_memcpy copies a meomry
* @n : number of bytes to copy
* @src : memory area to copy from
* @dest : memory area to copy to
* return : to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
