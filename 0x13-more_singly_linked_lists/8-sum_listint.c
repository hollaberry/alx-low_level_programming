#include "lists.h"
/**
 * sum_listint - function that returns the nth node of a linked list
 * @head: holder of new data
 * Return: sum of values or 0 if head == null
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
