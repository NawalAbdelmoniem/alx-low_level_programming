#include "main.h"
#include <stdio.h>
/**                                                                                                            
 *_puts - prints a string                                                                                                  
 * @str: string to print                                                                                                   
 * Description: prints a string                                                                                            
 * On success: return the number of characters printed                                                                     
 */
void _puts(char *str)
{
while (*str)
_putchar(*str++);
_putchar('\n');
}
/**                                                                                                                        
 * main - Entry point                                                                                                      
 *                                                                                                                         
 * Return: Always 0 (Success)                                                                 
 */
int main(void)
{
        puts("\"Programming is like building a multilingual puzzle");
        return (0);
}
