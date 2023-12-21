#include "hash_tables.h"
/**
 * hash_table_create - function that creates a hash table
 * @size: the size of the array
 * Return: pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *hash_table = NULL;

	if (size < 1)
		return (NULL);

	hash_table = malloc(sizeof(hash_table_t));

	if (hash_table == NULL)
		return (NULL);

	hash_table->size = size;
	hash_table->array = malloc(sizeof(hash_node_t) * size);

	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}

	for (; i < size; ++i)
		hash_table->array[i] = NULL;

	return (hash_table);
}
