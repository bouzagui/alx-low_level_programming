#include "main.h"

/**
 * print_line - function to be printed character '_'.
 * @n: number of characters to print
 *
 * Return: number of characters printed.
*/
void print_line(int n)
{
	int i = 0;

	if (n >= 0)
	{
		while (n > i)
		{
			_putchar('_');
			i++;
		}
	}
	_putchar('\n');
}