#include <stdio.h>
#include "main.h"
/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: the first number
 * @m: the second number
 * Return: the number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int e, num = 0;
unsigned long int value;
unsigned long int exclusive = n ^ m;
for (e = 63; e >= 0; e--)
{
value = exclusive >> e;
if (value & 1)
num++;
}
return (num);
}
