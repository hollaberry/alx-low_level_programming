#include "list.h"
/**
 * size_t print_dlistint - function to print all the elements of a doubly list
 * @h: list to be printed pointer
 * Return: Number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
size_t i = 0;

if (!h)
{
return (0);
}

while (h->next != NULL)
{
printf("%d\n", h->n);
h = h->next;
i++;
}
return (i);
}
