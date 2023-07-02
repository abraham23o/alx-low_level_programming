#include <stdio.h>
#include "lists.h"
/**
 * list_len - function that return the numner of elements
 * in a linked list
 * @h: pointer to linked list
 * Return: number of elements in a linked list
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
