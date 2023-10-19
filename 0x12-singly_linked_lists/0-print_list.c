#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: list whose elements are to be printed
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int nodes = 0;

	while (h)
	{
		if (h->str != NULL)
			printf("[%u] %s\n", h->len, h->str);

		else
			printf("[0] (nil)\n");

		h = h->next;
		nodes++;
	}
	return (nodes);
}
