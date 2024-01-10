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

	while (s[i])
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return (s);
			}
			j++;
		}
		s += 2;
		i++;
	}
	return (NULL);
}
