#include "main.h"
/**
 * set_bit - set the bit in the register.
 * @n: number of bits in the register.
 * @index: index of the register.
 * Return: 0 if successful.
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int)) * 8)
	{
		return (-1);
	}
	else
	{
		*n = ((1 << index) | *n);
	}
	return (1);
}
