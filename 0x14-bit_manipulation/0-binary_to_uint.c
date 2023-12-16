#include "main.h"

/**
 * binary_to_uint - changes a binary string in to an unsigned integer.
 * @b: pointer to a binary string.
 * Return: 0 if:input string is NULL.
 * or contain characters other than '0' or '1'.
 * or converted intiger
 */
unsigned int binary_to_uint(const char *b)
{
int i = 0, sum = 0;

while (*b != '\0')
{
if ((*b == '0') || (*b == '1'))
b++;
else
return (0);
}
while (*(b - 1))
{
sum = sum + (*(b - 1) - '0') * (1 << i);
b = b - 1;
i++;
}
return (sum);
}
