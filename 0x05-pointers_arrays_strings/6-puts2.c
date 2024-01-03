#include "main.h"
#include <string.h>

/**
 * puts2 - check the code
 * @str: variable
 * Return: void.
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		if (str[i + 1] == '\0')
		{
			break;
		}
		i += 2;
	}
	_putchar('\n');
}
