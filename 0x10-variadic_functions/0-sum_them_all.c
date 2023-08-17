#include "variadic_functions.h"
#include <stdarg.h>
/**
* sum_them_all - Returns the sum of all given number.
* @n: The number of paramters passed to the function.
* @...: A variable number of paramters.
*
* Return: If n == 0 -  0.
* else  return the sum of all parameters.
*/
int sum_them_all(const unsigned int n, ...)
{
va_list arg;
unsigned int i, sum = 0;
va_start(arg, n);
for (i = 0; i < n; i++)
sum += va_arg(arg, int);
va_end(arg);
return (sum);
}

