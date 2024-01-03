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
	int i, index = 0;

    if (length + 1 % 2 != '0')
    {
        index = (length - 1) / 2;
    }
    else
    {
        index = (length / 2);
    }
    index++;
	for (i = index; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
