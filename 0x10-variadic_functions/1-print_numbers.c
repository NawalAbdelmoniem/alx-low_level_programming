#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
* print_numbers - Prints numbers, followed by a new line.
* @separator: The string to be printed between numbers.
* @n: The number of integers passed to the function.
* @ A variable number of numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list numbers;
unsigned int ex;
va_start(numbers, n);
for (ex = 0; ex < n; ex++)
{
printf("%d", va_arg(numbers, int));
if (ex != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(numbers);
}
