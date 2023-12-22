#include <stdio.h>

/**
 * main - Finds and prints the largest prime factor of the number 612852475143
 *
 * Return: Always 0.
 */
int main(void)
{
	long i;
	long n = 612852475143;

	for (i = 3; i < 250; i += 2)
	{
		if (n % i == 0)
		{
			n /= i;
		}
	}
	printf("%lu\n", n);
	return (0);
}
