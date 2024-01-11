#include "main.h"

/**
 * actual_prime - Recursively checks if a number is prime.
 * @n: The number to evaluate.
 * @index: An iterator.
 *
 * Return: 1 if 'n' is prime, otherwise 0.
 */
int actual_prime(int n, int index)
{
	if (index * index > n)
		return (1);

	if (n % index == 0)
		return (0);

	return (actual_prime(n, index + 1));
}

/**
 * is_prime_number - Checks if an integer is prime
 * @index: integer
 * @n: The number to evaluate
 * Return: 1 if 'n' is a prime number, otherwise 0
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	{
		return (actual_prime(n, 2));
	}
}
