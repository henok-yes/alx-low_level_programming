# include "main.h"
/**
* jack_bauer - Print all minutes of a day in HH:MM format.
*/
void jack_bauer(void)
{
int a, b, x, y;
int hour, minutes;

for (hour = 0; hour < 24; hour++)
{
for (minutes = 0; minutes < 60; minutes++)
{
x = hour / 10;
y = hour % 10;
_putchar('0' + x);
_putchar('0' + y);
_putchar(':');

a = minutes / 10;
b = minutes % 10;
_putchar('0' + a);
_putchar('0' + b);
_putchar('\n');
}
}
}
