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
int c;
for (c = 0; c < n; c++)
{
dest[c] = src[c];
}
return (dest)
}
