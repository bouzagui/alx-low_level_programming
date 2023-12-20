#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number.
 * @num: The number in question.
 *
 * Return: Value of the last digit.
 */
int print_last_digit(int n)
{
	int i;

	if (n < 0)
	{
		n *= -1;
	}
	i = n % 10;

	_putchar(i + '0');
	return (i);
}
