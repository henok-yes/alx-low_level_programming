#include "function_pointers.h"
#include <stdio.h>
/**
* print_name - print name
* @name: string to be added to the function
* @f: pointer to function
* Return: nothing
**/
void print_name(char *name, void (*f)(char *))
{
if (f == NULL || name == NULL)
return;
f(name);
}
