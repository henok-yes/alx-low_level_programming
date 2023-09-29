#include "main.h"
/**
 * flip_bits - count the number of bits to be changed to
 * get from one number to another number
 * @n: The First number
 * @m: The Second number
 * Return: The number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int x, cnt = 0;
unsigned long int changed;
unsigned long int left = n ^ m;

for (x = 63; x >= 0; x--)
{
changed = left >> x;
if (changed & 1)
cnt++;
}

return (cnt);
}
