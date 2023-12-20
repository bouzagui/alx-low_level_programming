#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number.
 * @num: The number in question.
 *
 * Return: Value of the last digit.
 */
int print_last_digit(int num)
{
	int i;

	if (num < 0)
	{
		num = -num;
	}
	i = (num % 10);

	_putchar(i + '0');
	return (i);
}
