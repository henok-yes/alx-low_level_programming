#include <stdio.h>
#include <ctype.h>
/**
*main -  prints the alphabet in lowercase.
*description:   prints the alphabet in lowercase.
*Return: Always 0 (Success)
*/
int main(void)
{
for (int x = 'a'; x <= 'z'; x++)
{
char new_x = tolower(x);
putchar(new_x);
}
return (0);
}
