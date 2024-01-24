#include "function_pointers.h"
/**
 * array_iterator - iterator function for array elements.
 * @array: the array to iterate over for the iterator.
 * @size: the number of elements to iterate over.
 * @action: the action to perform on the iterator.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		i = 0;
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
