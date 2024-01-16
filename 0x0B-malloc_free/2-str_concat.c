#include "main.h"
#include <string.h>

/**
 * _str_concat - Concatenate a string with another string.
 * @s1: the first string to concatenate.
 * @s2: the second string to concatenate.
 * Return: the concatenated string.
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int len1 = 0, len2 = 0;
	int index = 0;

	if (s1 != NULL)
	{
		while (s1[len1] != '\0')
		{
			len1++;
		}
	}
	if (s2 != NULL)
	{
		while (s2[len2] != '\0')
		{
			len2++;
		}
	}

	ptr = malloc(sizeof(char) * (len1 + len2 + 1));
	if (ptr == NULL)
	{
		exit(0);
	}
	while (index < len1)
	{
		ptr[index] = s1[index];
		index++;
	}
	index = 0;
	while (index < len2)
	{
		ptr[len1 + index] = s2[index];
		index++;
	}
	ptr[len1 + len2] = '\0';
	return (ptr);
}
