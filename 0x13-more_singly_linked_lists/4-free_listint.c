#include "lists.h"
/**
 * free_listint - function to free a list_t type of list
 * @head: - the list to be freed
 */
void free_listint(listint_t *head)
{
listint_t *node;
while (head != NULL)
{
node = head;
head = head->next;
free(node);
}
}
