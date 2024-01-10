#include "main.h"

/**
 * _strlen_recursion - the length of a string.
 *
 * @s: string to be printed
 *
 * Return: string of length.
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s > '\0')
	{
		len = _strlen_recursion(s + 1);
		len++;
	}
    return (len);
}
