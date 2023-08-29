#include "lists.h"
/**
 * free_listint_safe - Releases memory occupied by a linked list.
 * @h: Pointer to the initial node of the linked list.
 *
 * Return: The count of elements in the freed list.
 */
size_t free_listint_safe(listint_t **h)
{
size_t num_elmt = 0;
int diff;
listint_t *tmp;
if (!h || !*h)
return (0);
while (*h)
{
diff = *h - (*h)->next;
if (diff > 0)
{
tmp = (*h)->next;
free(*h);
*h = tmp;
num_elmt ++;
}
else
{
free(*h);
*h = NULL;
num_elmt ++;
break;
}
}
*h = NULL;
return (num_elmt);
}
