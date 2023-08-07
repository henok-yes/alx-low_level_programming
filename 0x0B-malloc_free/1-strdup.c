#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* _strdup - return a pointer to a newly allocated space in memory
* @str: char
* Return: 0
*/
char *_strdup(char *str)
{
char *pointr;
int i, j = 0;
if (str == NULL)
return (NULL);
i = 0;
while (str[i] != '\0')
i++;
pointr = malloc(sizeof(char) * (i + 1));
if (pointr == NULL)
return (NULL);
for (j = 0; str[j]; j++)
pointr[j] = str[j];
return (pointr);
}
