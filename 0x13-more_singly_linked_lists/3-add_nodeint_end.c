#include "lists.h"
/**
 * add_nodeint_end - function to add a new node at the end of a linked list
 * @n: integer pointer
 * @head: pointer to the start of the linked list
 * Return: Always return the new node or Null
 */


listint_t *add_nodeint_end(listint_t **head, const int *n)
{
listint_t *new, *temp;
temp = *head;

new = malloc(sizeof(listint_t));
if (new == NULL)
{

return (NULL);
}

new->n = n;
new->next = NULL;

if (*head == NULL)
{
*head = new;
}
else
{
temp = *head;
while (temp->next != NULL)
temp = temp->next;

temp->next = new;
}
return (new);
}
