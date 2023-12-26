#include <stdio.h>

/**
 * main - Finds and prints the largest prime factor of the number 612852475143
 *
 * Return: Always 0.
 */
int main(void)
{
	long i, result;
	long n = 612852475143;

	for (i = 3; i < 782890; i += 2)
	{
		while (n % i == 0)
		{
			n /= i;
			result = n;
		}
	}
	printf("%ld\n", result);
	return (0);
}
