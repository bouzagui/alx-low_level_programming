#include "main.h"

/**
 * _islower - check if char is lower
 * @c: character to be checked
 * Return: 1 if char is lower, 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 97)
	{
		return (0);
	}
}
