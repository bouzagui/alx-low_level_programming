#include "main.h"
#include <stdio.h>

void print_number(int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        _putchar(i);
    }
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_number(98);
    _putchar('\n');
    print_number(402);
    _putchar('\n');
    print_number(1024);
    _putchar('\n');
    print_number(0);
    _putchar('\n');
    print_number(-98);
    _putchar('\n');
    return (0);
}