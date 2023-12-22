#include "main.h"

/**
 * print_diagonal - function to be printed diagonal.
 * @n: number of diagonals
 *
 * Return: nothing.
*/
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < n; i++)
	{
		j = 0;
		while (j < i)
		{
			_putchar(' ');
			j++;
		}
			_putchar('\\');
			_putchar('\n');
	}
}
