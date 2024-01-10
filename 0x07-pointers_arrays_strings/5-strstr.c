#include "main.h"

/**
 * _strstr - String representation of a string value.
 * @haystack: The stack of stack elements.
 * @needle: The string representation
 * Return: pointer to the string representation.
*/
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;

	while (haystack[i] != '\0')
	{
		while (needle[j] != '\0')
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
			j++;
		}
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
		i++;
	}
	return (NULL);
}
