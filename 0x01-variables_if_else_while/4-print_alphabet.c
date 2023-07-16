#include <stdio.h>
/**
*main -  prints the alphabet in lowercase exept 'e' and 'q'.
*description:   prints the alphabet in lowercase.
*Return: Always 0 (Success)
*/
int main(void)
{
char smallAlphabt[26] = "abcdfghijklmnoprstuvwxyz";
int x;
for (x = 0; x <= 23; x++)
{
putchar(smallAlphabt[x]);
}
putchar('\n');
return (0);
}

