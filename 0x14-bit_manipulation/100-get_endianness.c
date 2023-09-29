
#include "main.h"

/**
* get_endianness –  checks the endianness of a machine
* whether a machine is little or big endian
* Return: 0 if it is big, 1 if it  little
*/
int get_endianness(void)
{
unsigned int x = 1;
char *a = (char *) &x;
return (*a);
}
