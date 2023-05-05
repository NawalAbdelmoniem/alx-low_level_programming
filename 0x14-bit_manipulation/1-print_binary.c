#include "main.h"
#include <stdio.h>
/**
 * print_binary - prints binary num equivalent to a decimal number
 * @n: a number require to be printed
 * in a binary
 */
void print_binary(unsigned long int n)
{
int a, num = 0;
unsigned long int cal;
for (a = 63; a >= 0; a--)
{
cal = n >> a;
if (cal & 1)
{
_putchar('1');
num++;
}
else if (num)
_putchar('0');
}
if (!num)
_putchar('0');
}
