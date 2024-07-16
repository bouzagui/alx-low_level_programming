#include <stdio.h>
#include <stdlib.h>

/**
 * binary_search - function to be searching of array.
 * @array: array of function.
 * @size: size of array.
 * @value: value to be find.
 * Return: -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t start = array[0];
	size_t end = size - 1;
	size_t mid;
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}
	while (start <= end)
	{
		mid = (start + end) / 2;
		printf("Searching in array: ");
		for (i = start; i <= end; i++)
		{
			if (i == end)
			{
				printf("%d", array[i]);
			}
			else
			{
				printf("%d, ", array[i]);
			}
		}
		printf("\n");
		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			start = mid + 1;
		}
		else
		{
			end = mid - 1;
		}
	}
	return (-1);
}
