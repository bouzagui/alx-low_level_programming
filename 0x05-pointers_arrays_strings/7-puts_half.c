#include "main.h"
#include <string.h>

/**
 * puts_half - Function to be printed half string.
 * @str: String to print
 * Return: Nothing
*/
void puts_half(char *str)
{
	int length = strlen(str);
	int i, index;

	index = length / 2;

	for (i = index; i < length; i++)
	{
		_putchar(str[i]);
	}
}
