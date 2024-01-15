#include "main.h"
/**
 * create_array - create an array from a list of integers.
 * @size: size of the array
 * @c: character array.
 * Return: the new array.
*/
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = malloc(size * sizeof(char));
	if (ptr == NULL)
	{
		exit(0);
	}
	while (i < size)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);
}
