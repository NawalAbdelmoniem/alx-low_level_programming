#include <stdio.h>
#include "main.h"
/**
 * set_bit –function sets a value of bit to 1 at given index
 * @n: a pointer refers to the number to change
 * @index: an index of the bit to set to 1
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
while (index > 63)
return (-1);
*n = ((1L << index) | *n);
return (1);
}
