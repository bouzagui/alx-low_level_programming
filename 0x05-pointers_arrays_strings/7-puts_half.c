#include "main.h"
#include <string.h>

/**
 * puts_half - Function to be printed half string.
 * @str: String to print
 * Return: Nothing
*/
void puts_half(char *str)
{
	int my_string = strlen(str);
	int i, index;

	index = my_string / 2;

	for (i = index; i < my_string; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
