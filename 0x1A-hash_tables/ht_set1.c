#include "main.h"
/**
 * ht_set - insert key:value pair to hash table
 * @hash_table: hash table to insert key:value
 * @key: key to insert to the hash table
 * @val: value to insert to the hash table
 */
void ht_set(hsh_t *hash_table, const char *key, const char *val)
{
	entry_t *prev;
	unsigned int slot = hash(key);

	/* Look up entry in slot */
	entry_t *entry = hash_table->entries[slot];

	if (entry == NULL)
	{
		hash_table->entries[slot] = ht_pair(key, val);
		return;
	}

	/* Traverse the entries until a match is found or eof */
	while (entry != NULL)
	{
		/* Check key */
		if (strcmp(entry->key, key) == 0)
		{
			free(entry->value);
			entry->value = malloc(strlen(val) + 1);
			strcpy(entry->value, val);
			return;
		}

		/* Walk to next */
		prev = entry;
		entry = prev->next;
	}

	/* End of chain reached without a match, add new */
	prev->next = ht_pair(key, val);
}
