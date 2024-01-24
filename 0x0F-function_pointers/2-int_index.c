#include "function_pointers.h"
/**
 * int_index - entry point
 * @array: size of triangle
 * @size: size of triangle
 * @cmp: size of triangle
 * Description: --
 * Return: --
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}
	i = 0;
	while (i < size)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
