#include "main.h"

/**
* *_memcpy copies a meomry
* @n : number of bytes to copy
* @src : memory area to copy from
* @dest : memory area to copy to
* return : to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n);

{
int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest)
}
