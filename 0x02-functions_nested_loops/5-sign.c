#include "main.h"

/**
 * print_sign - function to be printed the sign of number.
 * @n: The number to be checked
 *
 * Return: A for positive num -1 for negative num or zero for anything else
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
	_putchar('\n');
}
