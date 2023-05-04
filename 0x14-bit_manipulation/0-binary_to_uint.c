#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - It is a function that
 * converts a binary number to unsigned int
 * @b: a string that contains the binary number
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
int n;
unsigned int w = 0;
if (!b)
return (0);
for (n = 0; b[n]; n++)
{
if (b[n] < '0' || b[n] > '1')
return (0);
w = 2 * w + (b[n] - '0');
}
return (w);
}
