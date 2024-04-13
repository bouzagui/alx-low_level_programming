#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 * Return: void
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int size, index;
	hash_node_t *curr, *tmp;

	if (ht == NULL)
	{
		return;
	}
	size = ht->size;

	for (index = 0; index < size; index++)
	{
		curr = ht->array[index];
		while (curr != NULL)
		{
			tmp = curr;
			curr = curr->next;
			free(tmp->value);
			free(tmp);
		}
	}
	free(ht->array);
	free(ht);
}
