#include "main.h"

/**
 * print_alphabet_x10 - function to be printed alphabet ten more.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int alp;
	int more;

	for (more = 0; more < 10; more++)
	{
		for (alp = 97; alp <= 122; alp++)
		{
			_putchar(alp);
		}
		_putchar('\n');
	}
}
