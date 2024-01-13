#include "main.h"

/**
 * _isalpha - function to be checked alphabetic characters
 * @c: the character to be checked
 *
 * Return: 1 is checked alphabetic characters, 0 is not
*/
int _isalpha(int c)
{
	if (c >= 65 || c >= 97)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
