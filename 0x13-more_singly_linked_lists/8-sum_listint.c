#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node of a linked list
 * @head: holder of new data
 * @index: index of value to be printed
 * Return: value at index or null if node does not exist
 */
int sum_listint(listint_t *head)
{
int p = 0;
if (head == NULL)
{
return (0);
}
while (head != NULL)
{

p += head->n;
head = head->next;
}
return (p);
}
