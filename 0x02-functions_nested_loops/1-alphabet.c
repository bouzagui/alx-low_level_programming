#include "main.h"

/**
 * print_alphabet - function to be printed alphabet
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
