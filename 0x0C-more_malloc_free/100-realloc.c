#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates memory when new_size is greater than old_size
 * @ptr: Pointer to the previously allocated memory
 * @old_size: The size of the old memory block
 * @new_size: The size of the new memory block
 *
 * Return: A pointer to the reallocated memory block, or NULL on failure.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *index, *p;
	unsigned int a;

	if (ptr == NULL)
	{
		index = malloc(new_size);
		if (index == NULL)
		{
			return (NULL);
		}
		return (index);
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	p = ptr;
	index = malloc(sizeof(*p) * new_size);

	if (index == NULL)
	{
		return (NULL);
	}
	a = 0;
	while (a < old_size)
	{
		index[a] = p[a];
		a++;
	}

	free(ptr);
	return (index);
}

/**
 * realloc_expand - Reallocates memory when new_size is less than old_size
 * @ptr: Pointer to the previously allocated memory
 * @size: The size of the new memory block
 *
 * Return: A pointer to the reallocated memory block, or NULL on failure.
 */
void *realloc_expand(void *ptr, unsigned int size)
{
	char *index, *p;
	unsigned int b;

	if (size == 0)
	{
		free(ptr);
		return (NULL);
	}

	p = ptr;
	index = malloc(sizeof(*p) * size);

	if (index == NULL)
	{
		return (NULL);
	}
	b = 0;
	while (b < size)
	{
		index[b] = p[b];
		b++;
	}

	free(ptr);
	return (index);
}
