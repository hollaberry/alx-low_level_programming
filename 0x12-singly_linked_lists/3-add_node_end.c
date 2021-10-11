#include "lists.h"
/**
 * add_node_end - function that adds a node at the begining of a list
 * @head: pointer to the first element of a node
 * @str: string pointer
 * Return: new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
int i = 0;
list_t *new, *temp;
*temp = *head;

if (head == NULL)
return (NULL);

new = malloc(sizeof(list_t));
if (new == NULL)
{
return (NULL);
}

new->str = strdup(str);


for (i = 0; str[i] != '\0'; i++)
{
;
}
new->len = i;
if (*head == NULL)
{
*head = new;
return (new);
}
else
{
while (temp->next != NULL)
{
new->next = temp;
}

temp->next = new;

return (new);
}
