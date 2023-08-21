#include <stdlib.h>
#include "main.h"
/**
* *string_nconcat - concatenates bytes of string to  string
* @s1: string to append to
* @s2: string to concatenate from
* @n:  bytes from s2 to be concatenatinated to s1
*
* Return: pointer to the concatenated string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *strng;
unsigned int i = 0;
unsigned int  j = 0;
unsigned int  leng1 = 0, leng2 = 0;
while (s1 && s1[leng1])
leng1++;
while (s2 && s2[leng2])
leng2++;
if (n < leng2)
strng = malloc(sizeof(char) * (leng1 + n + 1));
else
strng = malloc(sizeof(char) * (leng1 + leng2 + 1));
if (!strng)
return (NULL);
while (i < leng1)
{
strng[i] = s1[i];
i++;
}
while (n < leng2 && i < (leng1 + n))
strng[i++] = s2[j++];
while (n >= leng2 && i < (leng1 + leng2))
strng[i++] = s2[j++];
strng[i] = '\0';
return (strng);
}
