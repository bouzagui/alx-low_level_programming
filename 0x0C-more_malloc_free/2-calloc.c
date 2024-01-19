#include "main.h"

/**
 * _calloc - allocate memory for a new object.
 * @nmemb: the array to allocate memory.
 * @size: the size of the array to allocate memory.
 * Return: the allocated memory.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *ptr;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
	{
		exit(0);
	}

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		exit(0);
	}

	while (i < (nmemb * size))
	{
		ptr[i] = 0;
		i++;
	}
	ptr[nmemb] = '\0';

	return (ptr);
}
