#include "lists.h"
/**
 * print_listint - prints linked list
 * @h: linked list of type listint_t to print
 * Return: number_of_nodes
 */
size_t print_listint(const listint_t *h)
{
size_t number_of_nodes = 0;
while (h)
{
printf("%d\n", h->n);
number_of_nodes++;
h = h->next;
}
return (number_of_nodes);
}
