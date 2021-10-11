#include "lists.h"
/**
 * listint_len - function that return the number of elements in a linked list
 * @h: container of new address
 * Return: number of elements in a linked list
 */


size_t listint_len(const listint_t *h)
{
int i = 0;
while (h != NULL)
{
i++;
h = h->next;
}
return (i);
}
