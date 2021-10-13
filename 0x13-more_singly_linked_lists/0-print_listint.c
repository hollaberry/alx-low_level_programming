#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list
 * @h: linked_list
 *
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{
int i = 0;
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
i++;
}
return (i);
}
