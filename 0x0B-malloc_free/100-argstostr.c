#include "main.h"
#include <stdlib.h>
/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: always 0
 */
char *argstostr(int ac, char **av)
{
int w, x, y = 0, z = 0;
char *str;
if (ac == 0 || av == NULL)
return (NULL);
for (w = 0; w < ac; w++)
{
for (w = 0; av[w][x]; x++)
w++;
}
z += ac;
str = malloc(sizeof(char) * z + 1);
if (str == NULL)
return (NULL);
for (w = 0; w < ac; w++)
{
for (w = 0; av[w][x]; x++)
{
str[y] = av[w][x];
y++;
}
if (str[y] == '\0')
{
str[y++] = '\n';
}
}
return (str);
}
