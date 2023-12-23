#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int num, mult, result;

	for (num = 0; num < 10; num++)
	{
		for (mult = 0; mult < 10; mult++)
		{
			result = num * mult;

			if (result < 10)
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
