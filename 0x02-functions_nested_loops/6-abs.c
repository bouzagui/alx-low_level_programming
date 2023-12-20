#include "main.h"
#include <stdlib.h>

/**
 * _abs - computes the absolute value of an integer.
 * @ing: The integer to be computed.
 *
 * Return: The absolute value of an integer.
*/
int _abs(int ing)
{
	if (ing >= 0)
	{
		return (ing);
	}
	else
	{
		return (-ing);
	}
}
