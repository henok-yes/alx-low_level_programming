#include <unistd.h>
#include "main.h"

/**
* _putchar – this function writes the character c to stdout
* @c: character to be printed
*
* Return: On success 1. And on error -1
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
