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

if (head == NULL && str == NULL)
return (NULL);
new = malloc(sizeof(list_t));

if (new == NULL)
return (NULL);
new->str = strdup(str);
if (new->str == NULL)
{

free(new);
return (NULL);

}
for (i = 0; str[i] != '\0'; i++)
{
;
}
new->len = i;
*head = new;
new->next = temp;
temp = new; 

return (temp);
}
