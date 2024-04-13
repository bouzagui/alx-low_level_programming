#include "hash_tables.h"

/**
* shash_table_create - Creates a sorted hash table
* @size: The size of the array
*
* Return: A pointer to the created sorted hash table, or NULL on failure
*/
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *shash_table = malloc(sizeof(shash_table_t));
	unsigned long int i;

	if (shash_table == NULL)
		return (NULL);
	shash_table->size = size;
	shash_table->array = malloc(sizeof(shash_node_t *) * size);
	shash_table->shead = NULL;
	shash_table->stail = NULL;

	if (shash_table->array == NULL)
	{
		free(shash_table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		shash_table->array[i] = NULL;

	return (shash_table);
}
/**
* shash_table_set - Adds an element to the sorted hash table
* @ht: The sorted hash table
* @key: The key to add
* @value: The value to add
*
* Return: 1 on success, 0 on failure
*/
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;

	shash_node_t *new_node, *current, *prev;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	current = ht->shead;
	prev = NULL;

	while (current != NULL && strcmp(current->key, key) < 0)
	{
		prev = current;
		current = current->snext;
	}
	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	if (prev == NULL)
	{
		new_node->sprev = NULL;
		new_node->snext = ht->shead;
		ht->shead = new_node;
	}
	else
	{
		new_node->sprev = prev;
		new_node->snext = prev->snext;
		prev->snext = new_node;
	}
	if (new_node->snext == NULL)
		ht->stail = new_node;
	else
		new_node->snext->sprev = new_node;
	return (1);
}

/**
* shash_table_get - Retrieves the value associated with a key
* @ht: The sorted hash table
* @key: The key to search for
*
* Return: The value associated with the key, or NULL if the key is not found
*/
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;

	shash_node_t *current;

	if (ht == NULL || key == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);

		current = current->next;
	}
	return (NULL);
}

/**
* shash_table_print - Prints the sorted hash table
* @ht: The sorted hash table
*/
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current;

	if (ht == NULL)
		return;
	printf("{");
	for (current = ht->shead; current != NULL; current = current->snext)
	{
		printf("'%s': '%s'", current->key, current->value);
		if (current->snext != NULL)
			printf(", ");
	}
	printf("}\n");
}
/**
* shash_table_print_rev - Prints the sorted hash table in reverse
* @ht: The sorted hash table
*/
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current;

	if (ht == NULL)
		return;
	printf("{");
	for (current = ht->stail; current != NULL; current = current->sprev)
	{
		printf("'%s': '%s'", current->key, current->value);
		if (current->sprev != NULL)
			printf(", ");
	}
	printf("}\n");
}
/**
* shash_table_delete - Deletes a sorted hash table
* @ht: The sorted hash table
*/
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;

	shash_node_t *current, *next;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			next = current->next;
			free(current->key);
			free(current->value);
			free(current);
			current = next;
		}
	}
	free(ht->array);
	free(ht);
}