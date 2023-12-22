#include "hash_tables.h"

/**
 * hash_table_get - retrieve value in a hash table using a key
 * @ht: hash table to insert key:value
 * @key: key to insert to the hash table
 * Return: value of a key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int slot = 0;
	hash_node_t *entry = NULL;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	slot = key_index((const unsigned char *)key, ht->size);
	if (slot >= ht->size)
		return (NULL);

	entry = ht->array[slot];

	if (entry == NULL)
		return (NULL);

	while (entry != NULL)
	{
		if (strcmp(entry->key, key) == 0)
			return (entry->value);

		entry = entry->next;
	}
	return (NULL);
}
