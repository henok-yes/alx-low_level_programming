#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
* add_node_end - adds a new node at the end of a list_t list.
* @head: double pointer to the list_t list
* @str: string to put in new node
*
* Return: address of the new element or NULL if it fail
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_nod;
list_t *temp = *head;
unsigned int len = 0;
while (str[len])
len++;
new_nod = malloc(sizeof(list_t));
if (!new_nod)
return (NULL);
new_nod->str = strdup(str);
new_nod->len = len;
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
