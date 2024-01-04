#include <stdio.h>
#include "main.h"

/**
 * print_array - Print array values
 * @a: The string to print.
 * @n: Number of elements.
 * Return: Nothing.
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%i", a[i]);

		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
