#include <stdio.h>
/**
*main -  prints number
*description:  prints zero to nine.
*Return: Always 0 (Success)
*/
int main(void)
{
int x;
for (x = 0; x < 10; x++)
{
putchar(x + '0');
}
putchar('\n');
return (0);
}
