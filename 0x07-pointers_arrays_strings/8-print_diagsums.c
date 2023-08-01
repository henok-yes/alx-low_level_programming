#include "main.h"
#include <stdio.h>
/**
* print_diagsums - prints the sum of the two diagonals
* of a square matrix of integers.
* @a: input
* @size: input
* Return: Always 0 (Success)
*/
void print_diagsums(int *a, int size)
{
int diagonal1, diagonal2, x;
diagonal1 = 0;
diagonal2 = 0;
for (x = 0; x < size; x++)
{
diagonal1 = diagonal1 + a[x * size + x];
}
for (x = size - 1; x >= 0; x--)
{
diagonal2 += a[x * size + (size - x - 1)];
}
printf("%d, %d\n", diagonal1, diagonal2);
}
