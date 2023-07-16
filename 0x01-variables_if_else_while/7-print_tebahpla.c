#include <stdio.h>
/**
*main -  prints reverse alphabet
*description: from z to a
*Return: Always 0 (Success)
*/
int main(void)
{
char r;
for (r = 'z'; r >= 'a'; r--)
{
putchar(r);
}
putchar('\n');
return (0);
}
