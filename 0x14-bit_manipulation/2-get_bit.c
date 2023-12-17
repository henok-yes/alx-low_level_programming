#include "stdio.h"
/**
* get_bit - function that returns the value of a bit at a given index.
* @n: decimal number to be printed in binary form.
* @index:index of a bit
* Return: 1 or 0 if the bit is 1 or 0 respectively
*/
int get_bit(unsigned long int n, unsigned int index)
{
while (n > 0)
{
if ((n & 1 << index) != 0)
return (1);
else
return (0);
n >> 1;
}
return (0);
}
