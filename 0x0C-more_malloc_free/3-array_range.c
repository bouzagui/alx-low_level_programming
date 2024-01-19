#include "main.h"

/**
 * array_range - function to be created an array of integers.
 * @min: the minimum value.
 * @max: the maximum value.
 * Return: the array of integers
*/
int *array_range(int min, int max)
{
	int *start;
	int i, size;

	if (max < min)
	{
		return (NULL);
	}

	size = max - min + 1;
	start = malloc(size * sizeof(int));

	if (start == NULL)
	{
		exit(0);
	}

	i = 0;
	while (i < size)
	{
		start[i] = min + i;
		i++;
	}

	return (start);
}
