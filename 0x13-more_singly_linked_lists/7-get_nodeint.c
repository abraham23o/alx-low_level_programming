#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_nodeint_at_index - function that returns the nth
 * node of a listint_t linked list
 * @head: pointer to the beginning of a linked list, listint_t
 * @index: index of node starting at 0
 * Return: node at given index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current = head;

	while (current && i < index)
	{
		current = current->next;
		i++;
	}

	return (current);
}
