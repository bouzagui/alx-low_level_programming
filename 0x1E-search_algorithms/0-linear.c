#include "search_algos.h"

/**
* linear_search - function uses linear search to find a value.
* @array: is array.
* @size: size of function.
* @value: value to be find.
* Return: index if find value or -1 somethink else.
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
	{
		return (-1);
	}

	while (i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
