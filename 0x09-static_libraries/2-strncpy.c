#include "main.h"
/**
*_strncpy - C function that copies a string.
*@dest: buffer storing the string copy
*@src:the source string
*@n:max nummber of byte copied
*Return: returns
*/
char *_strncpy(char *dest, char *src, int n)
{
int a;
for (a = 0; a < n && src[a] != '\0'; a++)
dest[a] = src[a];
for ( ; a < n; a++)
dest[a] = '\0';
return (dest);
}
