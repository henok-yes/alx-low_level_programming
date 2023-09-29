#include  "main.h"
/**
 * binary_to_uint - this function Converts a binary string to  integer.
 * @b: pointer to a constant string
 * Return: The converted unsigned integer.
 */

unsigned int binary_to_uint(const char *b)
{

unsigned int  con_num = 0;
int n;

if (b == NULL)
return (0);

for (n = 0; b[n] != '\0'; n++)
{
if (b[n] < '0' || b[n] > '1')
return (0);
else
con_num = 2 * con_num + (b[n] - '0');
}

return (con_num);
}
