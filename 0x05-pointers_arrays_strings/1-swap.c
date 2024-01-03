#include <stdio.h>
#include "main.h"
/**
 * swap_int - Function to be printed swaps the values
 * @a: First value.
 * @b: Second value.
*/
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
