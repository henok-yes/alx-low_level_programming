#include <stdio.h>
/**
*main -  prints the alphabet in lowercase.
*description:   prints the alphabet in lowercase.
*Return: Always 0 (Success)
*/
int main(void)
{
char smallAlphabt[52] = "abcdefghijklmnopqrstuvwxyz";
int x;
for (x = 0; x <= 51; x++)
{
putchar(smallAlphabt[x]);
}
putchar("\n");
return (0);
}
