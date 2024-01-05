#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: Pointer to the integer array to be reversed
 * @n: Number of elements in the array
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i, res;

    i = 0;
	while (i < n / 2)
	{
		res = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = res;
        i++;
	}
}
