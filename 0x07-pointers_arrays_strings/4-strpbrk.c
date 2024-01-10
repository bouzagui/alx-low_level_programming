#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The first string to search.
 * @accept: The second string to search.
 * Return: The string to search for bytes.
*/
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s);
			}
		}
		s += 2;
		i++;
	}
	return (NULL);
}
