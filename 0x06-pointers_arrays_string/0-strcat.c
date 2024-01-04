#include "main.h"

/**
 * _strcat - Function to be printed string interconnection
 * @dest: destination.
 * @src: source string.
 * Return: destination string.
*/

char *_strcat(char *dest, char *src)
{
	int i = 0, count;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (count = 0; src[count] != '\0'; count++)
	{
		dest[i] = src[count];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
