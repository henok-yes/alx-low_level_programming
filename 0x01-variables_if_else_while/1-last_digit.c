#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - check random number and its last number
*description:if last number greater than 5 it says
*the last number is greater than 5 ,if it is 0 it says is 0
*if the last number is less than 6 it says
*the last number is less than six and not 0.
*Return: Always 0 (Success)
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n % 10 > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
}
else if (n % 10 == 0)
{
printf("Last digit of %d is %d and is 0\n", n, n % 10);
}
else  if (n % 10 < 6)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
}
return (0);
}
