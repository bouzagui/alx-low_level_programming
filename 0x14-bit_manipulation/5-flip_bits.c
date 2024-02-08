#include "main.h"
/**
 * flip_bits - flip bits from current.
 * @n: the first number of bits to flip.
 * @m: the second number of bits to flip.
 * Return: the number of bits.
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int shift;
	unsigned long int count = 0;

	shift = n ^ m;
	while (shift != 0)
	{
		count += shift & 1;
		shift >>= 1;
	}
	return (count);
}
