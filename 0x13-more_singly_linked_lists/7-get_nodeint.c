#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node of a linked list
 * @head: holder of new data
 * @index: index of value to be printed
 * Return: value at index or null if node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *temp;
unsigned int i = 0;
if (head == NULL)
{
return (NULL);
}

temp = head;
while (temp->next != NULL)
{
i++;
if (index == i)
{
return (temp);
}
}
 
 
