#include "main.h"
/**
 * _strncpy - Copies a string
 * @dest: First input
 * @src: Second input
 * @n: Maximum number of characters to copy from src
 * Return: Pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
