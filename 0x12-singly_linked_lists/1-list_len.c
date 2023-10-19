#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - function to return the number of elements in a linked list
 * @h: pointer to a linked list
 * Return: number of elements in a linked list
 */
size_t list_len(const list_t *h)
{
	unsigned int count = 0;

	while (h)
	{
		count++; 
		h = h->next;
	}
	return (count);
}
