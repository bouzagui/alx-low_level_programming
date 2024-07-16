#include "search_algos.h"

int binary_search(int *array, size_t size, int value)
{
	int start = array[0];
	size_t end = size - 1;
	int mid;

	if (array == NULL)
	{
		return (-1);
	}
	while (start <= end)
	{
		printf("Searching in array: ");
		mid = (start + end) / 2;
		for (i = start; i <= end; i++)
		{
			
		}
	}
}