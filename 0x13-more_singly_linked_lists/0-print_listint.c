#include "lists.h"
/**
* print_listint - prints all linked list elements
* @h: linked list of type listint_t to print
* Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
size_t num_nod = 0;
while (h)
{
printf("%d\n", h->n);
num_nod++;
h = h->next;
}
return (num_nod);
}
