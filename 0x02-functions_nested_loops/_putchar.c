#include "main.h"
#include <unistd.h>
/**
 * _putchr - it print the character c to stdout 
 * @c: t is the character to be printed
 *
 * return: on success 1.on error, -1
 * /
int _putchar (char c)
{
	return (write(1, &c, 1));
}
