#include "lists.h"
/**
 * free_dlistint - function to free a list_t type of list
 * @head: - the list to be freed
 */
void free_dlistint(dlistint_t *head)
{
while (head != NULL)
{
if (head->n)
{
free(head->n);
}
free(head);
head = head->next;
}
}
