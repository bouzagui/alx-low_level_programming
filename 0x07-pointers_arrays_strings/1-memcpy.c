#include "main.h"
/**
 * *_memset - That fills memory with a constant byte
 * @s: Pointer to the memory area to be filled
 * @b: The byte to fill the memory with
 * @n: Number of bytes to be filled
 * Return: Pointer to the memory area s
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
