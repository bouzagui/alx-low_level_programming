#include "main.h"
/**
 * print_rev - print a revision string.
 * @s: the string to print.
 * Return: nothing.
*/
void print_rev(char *s)
{
	int i = 0, j;

	while (s[i] != '\0')
	{
		i++;
	}
	j = i - 1;
	while (j >= 0)
	{
		_putchar(s[j]);
		j--;
	}
	_putchar('\n');
}
