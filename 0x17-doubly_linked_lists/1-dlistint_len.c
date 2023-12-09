#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * dlistint_len - get the number of elements in a linked list
 * @h: pointer to the first node
 * Return: number of elements in a linked list, dlistint_t
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;
	unsigned int count = 0;

	temp = h;
	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
