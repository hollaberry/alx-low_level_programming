#include "lists.h"
/**
 * insert_nodeint_at_index - funct that insert a new node at a ggiven position
 * @head: container of node
 * @idx: index where node is to be added
 * @n: value to be added
 * Return: address of new node or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *temp, *new;
unsigned int i = 1;
if (head == NULL)
return (NULL);

if (idx == 0)
{
temp = add_nodeint(head, n); /* call function to add node at the beginning */
return (temp);
}
temp = *head; /* assign address of new value to temp */
while (i < idx)
{
temp = temp->next; /* tranverse through linked list until condition is false */
if (temp == NULL)
return (NULL);

i++;
}
new = malloc(sizeof(listint_t)); /* allocate memory to new */
if (new == NULL)
return (NULL);

new->n = n; /* assign the value pass to function to new */
new->next = temp->next; /* new next will now store past temp stored address */
temp->next = new; /* temp next will now keep the address of new */
return (new);
}
	  
      
      
      
