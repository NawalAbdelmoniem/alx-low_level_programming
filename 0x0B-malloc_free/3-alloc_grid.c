#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
int **me;
int w, z;
if (width <= 0 || height <= 0)
return (NULL);
me = malloc(sizeof(int *) * height);
if (me == NULL)
return (NULL);
for (w = 0; w < height; w++)
{
me[w] = malloc(sizeof(int) * width);
if (me[w] == NULL)
{
for (; w >= 0; w--)
free(me[w]);
free(me);
return (NULL);
}
}
for (w = 0; w < height; w++)
{
for (z = 0; z < width; z++)
me[w][z] = 0;
}
return (me);
}
