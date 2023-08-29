#include "lists.h"
/**
* get_nodeint_at_index - returns the node at a certain index in a linked list
* @head: The initial node of the linked list.
* @index: The desired index of the targeted node.
* Return: A pointer to the sought-after node, or NULL if not found.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int x = 0;
listint_t *tmp = head;
while (tmp && x < index)
{
tmp = tmp->next;
x++;
}
return (tmp ? tmp : NULL);
}
