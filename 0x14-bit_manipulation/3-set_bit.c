
#include "main.h"
/**
 * set_bit - This function Sets a bit at a given  index to 1.
 * @n: pointer to number to modify.
 * @index: index of bit to set to 1.
 *
 * Return: 1 on  success, -1 on failure.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);

*n = ((1UL << index) | *n);
return (1);
}
