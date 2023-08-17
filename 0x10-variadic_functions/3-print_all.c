#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
* print_all - prints anything it takes as argument
* @format: arguments passed to be evaluated
*/
void print_all(const char * const format, ...)
{
int i = 0;
char *strng, *spt = "";
va_list list;
va_start(list, format);
if (format)
{
while (format[i])
{
switch (format[i])
{
case 'c':
printf("%s%c", spt, va_arg(list, int));
break;
case 'i':
printf("%s%d", spt, va_arg(list, int));
break;
case 'f':
printf("%s%f", spt, va_arg(list, double));
break;
case 's':
strng = va_arg(list, char *);
if (!strng)
strng = "(nil)";
printf("%s%s", spt, strng);
break;
default:
i++;
continue;
}
spt = ", ";
i++;
}
}
printf("\n");
va_end(list);
}
