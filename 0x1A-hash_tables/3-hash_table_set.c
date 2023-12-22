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
	unsigned int slot = key_index((unsigned char *)key, ht->size);
	hash_node_t *prev;

	hash_node_t *entry = ht->array[slot];

	if (entry == NULL)
	{
		ht->array[slot] = ht_kvp(key, value);
		return (1);
	}

	while (entry != NULL)
	{
		if (strcmp(entry->key, key) == 0)
		{
			free(entry->value);
			entry->value = malloc(strlen(value) + 1);
			strcpy(entry->value, value);
			return (1);
		}
		prev = entry;
		entry = prev->next;
	}
	prev->next = ht_kvp(key, value);
	return (1);
}

/**
 * ht_kvp - inserts the key-value pair data to the hash table
 * @key: key data
 * @value: value data
 * Return: key-value pair, success
 */
hash_node_t *ht_kvp(const char *key, const char *value)
{
	hash_node_t *entry = malloc(sizeof(hash_node_t));

	if (entry == NULL)
		return (NULL);

	entry->key = malloc(strlen(key) + 1);
	entry->value = malloc(strlen(value) + 1);

	strcpy(entry->key, key);
	strcpy(entry->value, value);

	entry->next = NULL;
	return (entry);
}
