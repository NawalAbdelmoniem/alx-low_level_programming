#include "main.h"
#include <stdio.h>
/**
 *main - entry point
 *description : the program prints the multiplication of two numbers
 *@argc: number of arguments
 *@argv: array of arguments
 *Return: always 0
 */
int main(int argc, char *argv[])
{
int c;
for (c = 0; c < argc; c++)
{
printf("%s\n", argv[c]);
}
return (0);
}
