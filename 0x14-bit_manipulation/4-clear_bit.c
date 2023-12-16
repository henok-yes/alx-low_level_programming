#include "main.h"
/**
 * clear_bit - This function sets the value of specified  bit to 0.
 * @n:  pointer to the number to modify.
 * @index: The index of the bit to clear.
 *
 * Return: 1 for success, -1 on failure.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);
*n = (~(1UL << index) & *n);
return (1);
}
