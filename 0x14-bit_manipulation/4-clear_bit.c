#include "main.h"

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int)) * 8)
	{
		return (-1);
	}
	else
	{
		*n = (1 << index) | *n;
	}
	return (1);
}
