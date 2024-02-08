#include "main.h"
/**
 * get_bit - get the current state of the function.
 * @n: the number of arguments.
 * @index: the index of the function.
 * Return: the current state of the function.
*/
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index >= (sizeof(unsigned long int)) * 8)
	{
		return (-1);
	}
	bit = (n >> index) & 1;

	return (bit);
}
