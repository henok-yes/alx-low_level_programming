#include <stdlib.h>
#include "main.h"
/**
* *malloc_checked - allocates memory for an array by using malloc
* @b:  bytes to allocate
*
* Return: a pointer to the allocated memory by malloc
*/
void *malloc_checked(unsigned int b)
{
void *p;
p = malloc(b);
if (p == NULL)
exit(98);
return (p);
}
