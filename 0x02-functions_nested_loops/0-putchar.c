#include "main.h"
#include <string.h>

/**
 * main - Entry point.
 * description: function to be printed _putchar.
 *
 * Return: Always 0
*/
int main(void)
{
	size_t i;
	char str[] = "_putchar";

	for (i = 0; i < strlen(str); i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
	return (0);
}
