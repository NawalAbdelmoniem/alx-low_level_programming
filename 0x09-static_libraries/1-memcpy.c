#include "main.h"

/**
* *_memcpy copies a meomry
* _memcpy : function copies count bytes of src to dest.
* @n : number of bytes to copy
* @src : memory area to copy from
* @dest : memory area to copy to
* return : to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int i = n;

	for (; a < i; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
