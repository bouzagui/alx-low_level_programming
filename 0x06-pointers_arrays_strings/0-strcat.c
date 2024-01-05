#include "main.h"

/**
 * _strcat - Function to be printed string interconnection
 * @dest: destination.
 * @src: source string.
 * Return: destination string.
*/
char *_strcat(char *dest, char *src)
{
	int o;
	int i;

	o = 0;
	while (dest[o] != '\0')
	{
		o++;
	}

	i = 0;
	while (src[i] != '\0')
	{
		*(dest + i) = *(src + i);
		o++;
		i++;
	}
	dest[o] = '\0';
	return (dest);
}
