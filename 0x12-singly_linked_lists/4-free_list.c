#include <stdlib.h>
#include "lists.h"
/**
 * free_list - Frees a list_t list.
 * @head: Pointer to the list to be freed.
 *
 * Description: Frees all nodes in a list_t linked list,
 */
void free_list(list_t *head)
{
list_t *new_nod;
while (head)
{
new_nod = head->next;
free(head->str);
free(head);
head = new_nod;
}
}
