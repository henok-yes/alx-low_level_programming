#include <stdio.h>
/**
*main -  prints the alphabet in lowercase.
*description:   prints the alphabet in lowercase.
*Return: Always 0 (Success)
*/
int main(void)
{
for (int x = 'A'; x <= 'Z'; x++)
{
char new_x = tolower(x);
putchar(new_x);
}
return (0);
}
