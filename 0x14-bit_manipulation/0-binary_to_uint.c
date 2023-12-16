#include  "main.h"
/**
 * binary_to_uint - this function Converts a binary string to  integer.
 * @b: pointer to a constant string
 * Return: The converted unsigned integer.
 */
 unsigned int binary_to_uint(const char *b) 
{
int i = 0,sum = 0;
while(*b != '\0')
{
if((*b == '0') || (*b == '1'))
b++;
else
return (0);
}
while(*(b-1))
{
sum = sum + (*(b - 1) - '0') * (1 << i);
b = b - 1;
i++;
}
return (sum);
}