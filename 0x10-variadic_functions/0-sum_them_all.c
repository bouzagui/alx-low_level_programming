#include "variadic_functions.h"
/**
 * sum_them_all - sum them all numbers from one.
 * @n: numbers to sum together.
 * Return: sum of all numbers.
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list ap;

	va_start(ap, n);
	if (n == 0)
	{
		return (0);
	}

	for (i = 1; i <= n; i++)
	{
		sum = sum + va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
