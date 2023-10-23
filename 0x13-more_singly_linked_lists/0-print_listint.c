#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint -  function that prints all the elements of a listint_t list
 * @h: pointer to the beginning of listint_t list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
