#include "main.h"

/**
 * _calloc - allocate memory for a new object.
 * @nmemb: the array to allocate memory.
 * @size: the size of the array to allocate memory.
 * Return: the allocated memory.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		exit(0);
	}

	i = 0;
	while (i < (nmemb * size))
	{
		ptr[i] = 0;
		i++;
	}

	return (ptr);
}
