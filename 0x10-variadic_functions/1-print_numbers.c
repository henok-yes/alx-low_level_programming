#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
* print_numbers - Prints numbers that it take as argument.
* @separator: a character  to be printed between numbers.
* @n: The number of integers passed to the function.
* @...: A variable number of argument to be printed.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list  agt;
unsigned int i;
va_start(agt, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(agt, int));
if (i != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(agt);
}
