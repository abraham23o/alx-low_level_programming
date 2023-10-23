#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * listint_len - function that returns the number of elements in a
 * linked listint_t list
 * @h: pointer to the beginning of the linked list - listint_t
 * Return: number of elements in a linked listint_t list
 */
size_t listint_len(const listint_t *h)
{
	unsigned int nodes = 0;

	while (h)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
