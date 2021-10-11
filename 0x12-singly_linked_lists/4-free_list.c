#include "lists.h"
/**
 * free_list - function to free a list_t type of list
 * @head: - the list to be freed
 */
void free_list(list_t *head)
{
while (head != NULL)
{
if (head->str)
{
free(head->str);
}
free(head);
head = head->next;
}
}
