#include "hash_tables.h"
/**
 * key_index - function to get index at which key-value pair should
 * be stored in the array of the hash table
 * @key: key
 * @size: the size of the array of the hash table
 * Return: index at which key-value should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int val = 0;

	val = hash_djb2(key);

	val = val % size;

	return (val);
}
