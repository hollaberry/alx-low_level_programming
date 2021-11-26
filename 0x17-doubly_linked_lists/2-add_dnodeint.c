#include "lists.h"
/**
 * add_dnodeint - function that adds a node at the begining of a list
 * @head: pointer to the first element of a node
 * @n: int pointer
 * Return: new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{

dlistint_t *new;

if (!head)
return (NULL);
new = malloc(sizeof(dlistint_t));

if (new == NULL)
return (NULL);

new->n = n;

new->next = *head;
new->prev = NULL;

if (*head)
(*head)->prev = new;

*head = new;

return (new);
}
