#include <stdio.h>

/**
 * print_to_98 - Print all solutions numbers to 98 if less or than.
 * @n: Number of solutions.
 *
 * Return: Numbers of solutions
*/
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n < 98)
		{
			printf("%d, ", n++);
		}
		printf("%d\n", n);
	}
	else
	{
		while (n > 98)
		{
			printf("%d, ", n--);
		}
		printf("%d\n", n);
	}
}
