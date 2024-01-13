#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The first string to search.
 * @accept: The second string to search.
 * Return: The string to search for bytes.
*/
char *_strpbrk(char *s, char *accept)
{
	int i, v;

	for (i = 0; s[i] != '\0'; i++)
	{
		v = 0;
		while (accept[v] != '\0')
		{
			if (accept[v] == s[i])
			{
				return (&s[i]);
			}
			v++;
		}
	}
	return (0);
}
