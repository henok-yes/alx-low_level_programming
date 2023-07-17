#include <stdio.h>
/**
 *main -prints all possible different combinations of two digits.
 *description: Print only the smallest combination of two digits
 *Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 48; i <= 56; i++)
	{
		for (j = 49; j <= 57; j++)
		{
			if (i < j)
			{
				putchar(i);
					putchar(j);
					if (j > i)
					{
						putchar(',');
							putchar(' ');
					}
			}
		}
	}
	putchar('\n');
		return (0);
}
