#include "lists.h"
/**
* pop_listint - Deletes the head node of a linked list
* @head: pointer to the first element in the linked list
* Return: data that was delated inside the elements
* or  if the list is empty it return 0
*/
int pop_listint(listint_t **head)
{
listint_t *tmp;
int nmbr;
if (!head || !*head)
return (0);
nmbr = (*head)->n;
tmp = (*head)->next;
free(*head);
*head = tmp;
return (nmbr);
}
