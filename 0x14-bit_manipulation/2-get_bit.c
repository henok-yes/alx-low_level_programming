#include "main.h"
/**
 * get_bit - this function Retrieves value of  bit at a specified index.
 * @n: decimal number to retrieve the bit value.
 * @index:  index of the bit to be retrived.
 * Return:  value of the bit
 */


int get_bit(unsigned long int n, unsigned int index)
{
int value;

if (index > 63)
return (-1);

value = (n >> index) & 1;

return (value);
}
