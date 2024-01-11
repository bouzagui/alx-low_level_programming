#include "main.h"

int actual_sqrt_recursion(int n, int index);

/**
 * _sqrt_recursion - Recursive helper function to calculate
 * @n: The number for which the square root is calculated
 *
 * Return: The resulting square root, or -1 if n is negative
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}
/**
 * actual_sqrt_recursion - Recursively finds the square root of a number
 * @n: The number to calculate the square root of
 * @index: An iterator for guesses
 *
 * Return: the square root of 'n' if it exists, or -1 if 'n' is negative
 * or has no exact square root
 */
int actual_sqrt_recursion(int n, int index)
{
	if (index * index == n)
	{
		return (index);
	}
	if (index * index > n)
	{
		return (-1);
	}
	return (actual_sqrt_recursion(n, index + 1));
}