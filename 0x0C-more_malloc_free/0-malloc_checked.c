#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocate a checked.
 * @b: the buffer to be checked.
 * Return: the buffer to be checked.
*/
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
