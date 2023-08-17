#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
* print_strings - Prints string  followed by a new line.
* @separator: char to be printed between strings .
* @n: The number of strings passed to the function.
* @...: A variable number of strng to be printed.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list strng;
char *s;
unsigned int i;
va_start(strng, n);
for (i = 0; i < n; i++)
{
s = va_arg(strng, char *);
if (s == NULL)
printf("(nil)");
else
printf("%s", s);
if (i != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(strng);
}
