#include "lists.h"
/**
 * pop_listint - delete the head node of a listint_t linked list
 * @head: pointer to the address to be deleted
 * Return: head node's data or 0 if linked list is empty
 */
int pop_listint(listint_t **head)
{
listint_t *temp;
int data;
if (*head == NULL)
return (0);

temp = *head;
data = temp->n;
*head = temp->next;
free(temp);
return (data);
}
  
