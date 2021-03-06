#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns the nth node of a linked list
 * @head: holder of new data
 * @index: index of value to be printed
 * Return: value at index or null if node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

unsigned int i = 0;

while (i != index)
{
if (head == NULL)
{
return (NULL);
}

head = head->next;
i++;
}
return (head);
}
