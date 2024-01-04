#include <stdio.h>
#include "main.h"

/**
 * _strcat - Function to be printed string interconnection
 * @dest: destination.
 * @src: source string.
 * Return: destination string.
*/

char *_strcat(char *dest, char *src)
{
	int i, count = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	while (src[count] != '\0')
	{
		count++;
	}
	dest[i] = '\0';
	return (dest);
}
