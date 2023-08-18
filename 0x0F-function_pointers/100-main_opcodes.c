#include <stdio.h>
#include <stdlib.h>
/**
* main - prints the opcodes of its own main function.
* @argc: number of arguments
* @argv: array of arguments
*
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
char *arry;
int bytes, x;
if (argc != 2)
{
printf("Error\n");
exit(1);
}
bytes = atoi(argv[1]);
if (bytes < 0)
{
printf("Error\n");
exit(2);
}
arry = (char *)main;
for (x = 0; x < bytes; x++)
{
if (x == bytes - 1)
{
printf("%02hhx\n", arry[x]);
break;
}
printf("%02hhx ", arry[x]);
}
return (0);
}
