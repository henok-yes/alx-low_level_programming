#include <stdio.h>
/**
*main -  prints all base 16 number in lowecase
*description: prints base sixteen num
*Return: Always 0 (Success)
*/
int main(void)
{
int r;
for (r = 48; r < 58; r++)
{
putchar(r);
}
for (r = 97; r < 103; r++)
{
putchar(r);
}
putchar('\n');
return (0);
}
