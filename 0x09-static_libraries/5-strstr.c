#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: the longer string to search
 * @needle: the first occurrence of the substring
 * Return: a pointer beg of substring or @Null if it not foound.
 */
char *_strstr(char *haystack, char *needle)
{
unsigned int l = 0, n = 0;
while (haystack[l])
{
while (needle[n] && (haystack[l] == needle[0]))
{
if (haystack[l + n] == needle[n])
n++;
else
break;
}
if (needle[n])
{
l++;
n = 0;
}
else
return (haystack + l);
}
return (0);
}
