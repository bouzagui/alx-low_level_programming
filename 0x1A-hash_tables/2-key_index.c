#include "hash_tables.h"
/**
 * key_index - index of a key in the table
 * @key: key
 * @size: size of the array
 * Return: index of the key
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = hash_djb2(key) % size;

	return (index);
}
