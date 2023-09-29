#include "main.h"
/**
* print_binary – this function Prints the binary representation or
* binary equivalence of  decimal number.
* @n: decimal number to be printed in binary form.
*/

void print_binary(unsigned long int n)
{
int x, counter = 0;
unsigned long int now;

for (x = 63; x >= 0; x--)
{
now = n >> x;

if (now & 1)
{
_putchar('1');
counter++;
}
else if (counter)
_putchar('0');
}
if (!counter)
_putchar('0');
}
