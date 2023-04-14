#include <stdlib.h>
#include <stdio.h>
#define ERR_MSG "Error"
/**
 * is_digit - checks if a string contains a non-digit char
 * @s: string to be evaluated
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int is_digit(char *s)
{
int k = 0;
while (s[k])
{
if (s[k] < '0' || s[k] > '9')
return (0);
k++;
}
return (1);
}
/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 * Return: the length of the string
 */
int _strlen(char *s)
{
int m = 0;
while (s[m] != '\0')
{
m++;
}
return (m);
}
/**
 * errors - handles errors for main
 */
void errors(void)
{
printf("Error\n");
exit(98);
}
/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
char *s1, *s2;
int le1, le2, le, u, carry, digit1, digit2, *result, a = 0;
s1 = argv[1], s2 = argv[2];
if (argc != 3 || !is_digit(s1) || !is_digit(s2))
errors();
le1 = _strlen(s1);
le2 = _strlen(s2);
le = le1 + le2 + 1;
result = malloc(sizeof(int) * le);
if (!result)
return (1);
for (u = 0; u <= le1 + le2; u++)
result[u] = 0;
for (le1 = le1 - 1; le1 >= 0; le1--)
{
digit1 = s1[le1] - '0';
carry = 0;
for (le2 = _strlen(s2) - 1; le2 >= 0; le2--)
{
digit2 = s2[le2] - '0';
carry += result[le1 + le2 + 1] + (digit1 *digit2);
result[le1 + le2 + 1] = carry % 10;
carry /= 10;
}
if (carry > 0)
result[le1 + le2 + 1] += carry;
}
for (u = 0; u < le - 1; u++)
{
if (result[u])
a = 1;
if (a)
putchar(result[u] + '0');
}
if (!a)
putchar('0');
putchar('\n');
free(result);
return (0);
}
