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
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
