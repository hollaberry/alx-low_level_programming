#include "lists.h"
/**
 * add_nodeint - function that adds a node at the begining of a list
 * @head: pointer to the first element of a node
 * @n: integer pointer
 * Return: new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{

listint_t *new;


new = malloc(sizeof(listint_t));

if (new == NULL)
return (NULL);

new->n = n
new->next = *head;
*head = new;
return (new);
}
