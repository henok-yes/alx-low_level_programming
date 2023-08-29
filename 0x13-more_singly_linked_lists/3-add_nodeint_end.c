#include "lists.h"
/**
* add_nodeint_end -  adds a new node at the end of a listint_t list.
* @head: pointer to the first element in the list
* @n: data to insert in the new nod
* Return: pointer to the new node if success
* or NULL if it fails
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_nod;
listint_t *temp = *head;
new_nod = malloc(sizeof(listint_t));
if (!new_nod)
return (NULL);
new_nod->n = n;
new_nod->next = NULL;
if (*head == NULL)
{
*head = new_nod;
return (new_nod);
}
while (temp->next)
temp = temp->next;
temp->next = new_nod;
return (new_nod);
}
