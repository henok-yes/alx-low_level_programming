#include "lists.h"
/**
* insert_nodeint_at_index - inserts a new node in a linked list,
* at a given position
* @head: pointer to the first node in the list
* @idx: index where the new node is added
* @n: data to insert in the new node
*
* Return: pointer to the new node, or NULL
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int x;
listint_t *new_nod;
listint_t *tmp = *head;
new_nod = malloc(sizeof(listint_t));
if (!new_nod || !head)
return (NULL);
new_nod->n = n;
new_nod->next = NULL;
if (idx == 0)
{
new_nod->next = *head;
*head = new_nod;
return (new_nod);
}
for (x = 0; tmp && x < idx; x++)
{
if (x == idx - 1)
{
new_nod->next = tmp->next;
tmp->next = new_nod;
return (new_nod);
}
else
tmp = tmp->next;
}
return (NULL);
}
