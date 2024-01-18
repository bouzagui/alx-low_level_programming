#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * string_nconcat - Concatenate a string with another string.
 * @s1: the first string to concatenate
 * @s2: the second string to concatenate.
 * @n: the number of characters to concatenate.
 * Return: the concaten sequence of the string.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = strlen(s1);
	len2 = strlen(s2);

	if (len2 > n)
	{
		len2 = n;
	}
	ptr = malloc((len1 + len2 + 1) * sizeof(char));

	if (ptr == NULL)
	{
		exit(0);
	}
	i = 0;
	while (i < len1)
	{
		ptr[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < len2)
	{
		ptr[i + j] = s2[j];
		j++;
	}
	ptr[i + j] = '\0';
	return (ptr);
}
