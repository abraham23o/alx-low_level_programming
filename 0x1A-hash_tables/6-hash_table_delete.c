#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table to be deleted
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *tmp = ht;
	hash_node_t *node, *current;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			node = ht->array[i];
			while (node != NULL)
			{
				current = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = current;
			}
		}
	}
	free(tmp->array);
	free(tmp);

}
