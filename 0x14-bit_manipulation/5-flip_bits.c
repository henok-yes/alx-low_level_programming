
#include "main.h"
/**
 * clear_bit - Resets the value of a particular bit to 0.
 * @n: Pointer to the number to be modified.
 * @index: Index of the bit to reset.
 *
 * Return: 1 for success, -1 for failure.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);

*n = (~(1UL << index) & *n);
return (1);
}
