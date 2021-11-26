#include "lists.h"
/**
 * add_dnodeint_end - function that adds a node at the begining of a list
 * @head: pointer to the first element of a node
 * @n: string pointer
 * Return: address of new element or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{

dlistint_t *new, *temp;
temp = *head;

if (head == NULL)
return (NULL);

new = malloc(sizeof(list_t));
if (new == NULL)
{
return (NULL);
}

new->n = n;

new->next = NULL;
if (*head == NULL)
{
*head = new;
new->prev = NULL;
return (new);
}

while (temp->next != NULL)
{
temp = temp->next;
}

if (temp->next == NULL)
{
temp->next  = new;
new->prev = temp;
new->next = NULL;
}
return (new);
}
