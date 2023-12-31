#include "3-calc.h"
#include <stdlib.h>
/**
* get_op_func - selects the correct function to perform the operation
* @s: The operator passed as argument.
* Return: a pointer to the function that corresponds to
* the operator given as a parameter
**/
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL},
};
int x = 0;
while (*(ops[x].op) != *s && ops[x].op != NULL)
x++;
return (ops[x].f);
}

