#include <stdio.h>
#include <stdlib.h>
/**
* main - prints its own opcodes
* @argc: number of arguments
* @argv: array of arguments
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
int by, w;
char *tarr;
if (argc != 2)
{
printf("Error\n");
exit(1);
}
by = atoi(argv[1]);
if (by < 0)
{
printf("Error\n");
exit(2);
}
tarr = (char *)main;
for (w = 0; w < by; w++)
{
if (w == by - 1)
{
printf("%02hhx\n", tarr[w]);
break;
}
printf("%02hhx ", tarr[w]);
}
return (0);
}
