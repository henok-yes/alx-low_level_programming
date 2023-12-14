#include "main.h"

/**
 * binary_to_uint - changes a binary string in to an unsigned integer.
 * @b: pointer to a binary string.
 * Return: 0 if:input string is NULL.
 * or contain characters other than '0' or '1'.
 * or converted intiger
 */
int binary_to_uint(char *b)
{
int sum = 0, i, j, k = 0;
for (i = 0; num[i]; i++)
{
if ((num[i]) == '0' || (num[i]) == '1')
continue;
return (0);
}
j = i - 1;
while (j >= 0)
sum = sum + (num[j--] - '0') * (1 << k++);
return (sum);
}
