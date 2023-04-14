#include <stdlib.h>
#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
int *mr;
int k, ze;
if (min > max)
return (NULL);
ze = max - min + 1;
mr = malloc(sizeof(int) * ze);
if (mr == NULL)
return (NULL);
for (k = 0; min <= max; k++)
mr[k] = min++;
return (mr);
}
