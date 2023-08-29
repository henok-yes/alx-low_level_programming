#include "lists.h"
/**
 * find_listint_loop - Locates the starting node of a loop in a linked list.
 * @head: Linked list to be searched.
 *
 * Return: Address of the node where the loop begins, or NULL if no loop is found.
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *slow = head;
listint_t *har = head;
if (!head)
return (NULL);
while (slow && har && har->next)
{
har = har->next->next;
slow = slow->next;
if (har == slow)
{
slow = head;
while (slow != har)
{
slow = slow->next;
har = har->next;
}
return (har);
}
}
return (NULL);
}
