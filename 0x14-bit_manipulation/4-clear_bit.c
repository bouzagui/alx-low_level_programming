#include "main.h"
/**
 * clear_bit - clear the bit field.
 * @n: number of bits to clear.
 * @index: index of the bit field to clear.
 * Return: number of bits cleared.
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int)) * 8)
	{
		return (-1);
	}
	else
	{
		*n = (~(1 << index) & *n);
	}
	return (1);
}
