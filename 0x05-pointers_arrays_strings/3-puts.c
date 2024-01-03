#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _puts - puts a string.
 * @str: the string to put
 * Return: nothing.
*/
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
