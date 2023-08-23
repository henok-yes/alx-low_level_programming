#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* main - prints multiplies two numbers.
* @argc: number of arguments
* @argv: array of arguments
* Return: Always 0 (Success)
*on error return 1(error)
*/
int main(int argc, char **argv)
{
int num1, num2, mult;
if (argc < 3 || argc > 3)
{
printf("error\n");
return (1);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
mult = num1 * num2;
printf("%d\n", mult);
return (0);
}
