#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s;
unsigned int h = 0, m = 0, en1 = 0, en2 = 0;
while (s1 && s1[en1])
en1++;
while (s2 && s2[en2])
en2++;
if (n < en2)
s = malloc(sizeof(char) * (en1 + n + 1));
else
s = malloc(sizeof(char) * (en1 + en2 + 1));
if (!s)
return (NULL);
while (h < en1)
{
s[h] = s1[h];
h++;
}
while (n < en2 && h < (en1 + n))
s[h++] = s2[m++];
while (n >= en2 && h < (en1 + en2))
s[h++] = s2[m++];
s[h] = '\0';
return (s);
}
