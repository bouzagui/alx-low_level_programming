#include "main.h"

/**
 * _memset - Set the memory location of the memory.
 * @s: The memory location.
 * @b: The value to be set.
 * @n: The number of bytes to be set to the value.
 * Return: 0 if successful.
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		s[index] = b;
	}
	return (s);
}
