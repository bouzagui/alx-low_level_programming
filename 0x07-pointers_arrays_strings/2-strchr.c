#include "main.h"

/**
 * _strchr - fills memory with a constant byte.
 * @s: first bytes of the memory
 * @c: constant byte b
 * Return: Null when not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] != c)
		{
			s++;
		}
		else
		{
			return (s + i);
		}
	}
	return (NULL);
}
