#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
* add_node -  adds a new node at the end of a list_t list.
* @head: double pointer to the list_t list
* @str: New string to add 
*
* Return: Address of the new element or NULL if it fail
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *new_nod;
unsigned int len = 0;
while (str[len])
len++;
new_nod = malloc(sizeof(list_t));
if (!new_nod)
return (NULL);
new_nod->str = strdup(str);
new_nod->len = len;
new_nod->next = (*head);
(*head) = new_nod;
return (*head);
}
