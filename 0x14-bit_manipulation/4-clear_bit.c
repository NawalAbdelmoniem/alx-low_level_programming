#include <stdio.h>
#include "main.h"
/**
 * clear_bit - sets the value of a given bit to 0
 * @n: a pointer to the number need to change
 * @index: an index of the bit will be clear
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
while (index > 63)
return (-1);
*n = (~(1L << index) & *n);
return (1);
}
