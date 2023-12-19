#include "main.h"

/**
 * islower - function to be checks for lowercase character.
 * @c: character to be checked.
 *
 * Return: Always 0.
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
