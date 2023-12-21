#include "main.h"
#include <ctype.h>

/**
 * isdigit - Checks for a digit
 * @c: The character to be checked
 * Return: 1 for digit character or 0 for anything else
*/
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
