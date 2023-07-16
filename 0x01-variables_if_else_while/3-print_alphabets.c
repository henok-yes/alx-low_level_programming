#include <stdio.h>
/**
*main -  prints alphabet in lowercase and uppercase
*description: prints the alphabet in lower and uppercase.
*Return: Always 0 (Success)
*/
int main(void)
{
char smallCapital[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int x;
for (x = 0; x <= 51; x++)
{
putchar(smallCapital[x]);
}
putchar('\n');
return (0);
}

