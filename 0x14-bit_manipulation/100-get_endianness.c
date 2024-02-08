#include "main.h"

/**
 * get_endianness - function to get endianness.
 * Return: 0 if is big, and 1 if is little.
*/
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;
	return (*c);
}
