#include <stdlib.h>
#include "main.h"
/**
 *count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 *Return: number of words
 */
int count_word(char *s)
{
int a, f, w;
a = 0;
w = 0;
for (f = 0; s[f] != '\0'; f++)
{
if (s[f] == ' ')
a = 0;
else
if (a == 0)
{
a = 1;
w++;
}
}
return (w);
}
/**
 **strtow - splits a string into words
* @str: string to split
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
char **matrix, *tmp;
int t, n = 0, len = 0, words, c = 0, start, end;
while (*(str + len))
len++;
words = count_word(str);
if (words == 0)
return (NULL);
matrix = (char **) malloc(sizeof(char *) * (words + 1));
if (matrix == NULL)
return (NULL);
for (t = 0; t <= len; t++)
{
if (str[t] == ' ' || str[t] == '\0')
{
if (c)
{
end = t;
tmp = (char *) malloc(sizeof(char) * (c + 1));
if (tmp == NULL)
return (NULL);
while (start < end)
*tmp++ = str[start++];
*tmp = '\0';
matrix[n] = tmp - c;
n++;
c = 0;
}
}
else if (c++ == 0)
start = t;
}
matrix[n] = NULL;
return (matrix);
}
