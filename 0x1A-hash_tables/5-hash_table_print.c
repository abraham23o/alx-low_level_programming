#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: hash table to be printed
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *entry;
	unsigned long int i;
	unsigned char comma = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (comma == 1)
				printf(", ");

			entry = ht->array[i];
			while (entry != NULL)
			{
				printf("'%s': '%s'", entry->key, entry->value);
				entry = entry->next;
				if (entry != NULL)
					printf(", ");
			}
			comma = 1;
		}
	}
	printf("}\n");
}
