#include "main.h"
#include <unistd.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int _putchar(char c)
{
    return (write(1, &c, 1));
}

void print_alphabet(void)
{
    int i, x;
    for (i = 0; i <= 9; i++)
    {
        for (x = 'a'; x <= 'z'; x++)
            _putchar(x);
        _putchar('\n');
    }
}

int main(void)
{
    print_alphabet();
    return (0);
}
