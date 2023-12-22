#include "hash_tables.h"

/**
 * hash_table_set - insert key:value pair to hash table
 * @ht: hash table to insert key:value
 * @key: key to insert to the hash table
 * @value: value to insert to the hash table
 * Return: 1, success else 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int slot = 0, i;
	char *dup_value = NULL;
	hash_node_t *entry = NULL;

	if (ht == NULL || key == NULL || value == NULL || *key == '\0')
		return (0);

	dup_value = strdup(value);
	if (dup_value == NULL)
		return (0);
	slot = key_index((const unsigned char *)key, ht->size);
	for (i = slot; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = dup_value;
			return (1);
		}
	}

	entry = malloc(sizeof(hash_node_t));
	if (entry == NULL)
	{
		free(dup_value);
		return (0);
	}

	entry->key = strdup(key);
	if (entry->key == NULL)
	{
		free(entry);
		return (0);
	}
	entry->value = dup_value;
	entry->next = ht->array[slot];
	ht->array[slot] = entry;

	return (1);
}
