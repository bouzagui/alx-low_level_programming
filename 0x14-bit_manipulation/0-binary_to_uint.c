#include "main.h"

/**
 * binary_to_uint - Convert binary to unsigned int.
 * @b: The binary to convert.
 * Return: The unsigned int.
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int count = 0;
	int i;

	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] > '1' || b[i] < '0')
		{
			return (0);
		}
		else
		{
			count = 2 * count + (b[i] - '0');
		}
	}
	return (count);
}
