#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
int length_s = 0;
while (*s != '\0')
{
length_s++;
s++;
}
return (length_s);
}
