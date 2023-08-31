
#include "main.h"
/**
 * flip_bits - Counts the number of bits that need to be changed
 * to convert one number to another.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits that need to be changed.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int x, cnt = 0;
unsigned long int current;
unsigned long int exclusive = n ^ m;

for (x = 63; x >= 0; x--)
{
current = exclusive >> x;
if (current & 1)
cnt++;
}

return (cnt);
}
