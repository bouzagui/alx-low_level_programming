#include "main.h"

/**
 * times_table - Function to be printed times table from 0 to 9.
 *
 * Return: Nothing.
*/
void times_table(void)
{
	int num, mult, result;

	for (num = 0; num < 10; num++)
	{
		for (mult = 0; mult <= 9; mult++)
		{
			result = num * mult;

			if (result <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((result / 10) + '0');
			}
			_putchar((result % 10) + '0');

			if (mult != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
