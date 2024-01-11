#include "main.h"
/**
 * factorial - function to be calculated numbers by factorial.
 * @n: number of elements.
 * Return: foctorial numbers.
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
	return (0);
}
