#include "lists.h"
/**
 * dlistint_len - function to print all the elements of a doubly list
 * @h: list to be printed pointer
 * Return: Number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t i = 0;

if (!h)
{
return (0);
}

while (h)
{
i++;
h = h->next;

return (i);
}
