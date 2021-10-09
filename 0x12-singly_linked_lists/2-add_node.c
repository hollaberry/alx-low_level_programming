#include "lists.h"
/**
 * add_node - function that adds a node at the begining of a list
 * @head: pointer to the first element of a node
 * @str: string pointer
 * Return: new node
 */

list_t *add_node(list_t **head, const char *str)
{
int i = 0;
list_t *new;
new = malloc(sizeof(list_t));
if (head == NULL && str == NULL)
return (NULL);
for (i = 0; str[i] != '\0'; i++)
{
;
}
new->len = i;
new->str = strdup(str);
if (new->str == NULL)
{

free(new);
return (NULL);

}

new->next = *head;
*head = new;

return (new);
}
