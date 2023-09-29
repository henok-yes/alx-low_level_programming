

#include "main.h"
/**
* print_binary – this function Prints the binary representation or
* binary equivalence of  decimal number.
* @n: decimal number to be printed in binary form.
*/

void print_binary(unsigned long int n)
{
int n, counter = 0;
unsigned long int equvalent;

for (n = 63; i >= 0; n--)
{
equvalent= = n >> i;

if (equvalent & 1)
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
