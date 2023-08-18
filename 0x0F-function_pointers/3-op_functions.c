#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
* op_add - Returns sum of two numbers.
* @a:  FIrst number.
* @b: Second number.
*
* Return: Sum of a and b.
*/
int op_add(int a, int b)
{
return (a + b);
}
/**
* op_sub - Returns the difference of two integer numbers.
* @a: First number.
* @b: Second number.
*
* Return: The difference of a and b.
*/
int op_sub(int a, int b)
{
return (a - b);
}
/**
* op_mul - Returns the product of two integer numbers.
* @a: First number.
* @b: Second number.
*
* Return: Product of int a and int b.
*/
int op_mul(int a, int b)
{
return (a * b);
}
/**
* op_div - Returns the division of two integer numbers.
* @a: First number.
* @b: Second number.
*
* Return: The division of  of a and b.
*/
int op_div(int a, int b)
{
return (a / b);
}
/**
* op_mod - Returns the remainder of  division of two integer numbers.
* @a: First number.
* @b: Second number.
*
* Return: Remainder of the division of a by b.
*/
int op_mod(int a, int b)
{
return (a % b);
}
