#include "lists.h"
/**
 * reverse_listint - Reverses a linked list.
 * @head: Pointer to the initial node of the list.
 *
 * Return: A pointer to the first node in the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *prvs = NULL;
listint_t *next = NULL;
while (*head)
{
next = (*head)->next;
(*head)->next = prvs;
prvs = *head;
*head = next;
}
*head = prvs;
return (*head);
}
