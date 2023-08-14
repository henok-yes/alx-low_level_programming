#include "main.h"
/**
* print_rev - imprime en reversa
* @s: string
* return: 0
*/
void print_rev(char *s)
{
int newrev = 0;
int o;
while (*s != '\0')
{
newrev++;
s++;
}
s--;
for (o = newrev; o > 0; o--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
