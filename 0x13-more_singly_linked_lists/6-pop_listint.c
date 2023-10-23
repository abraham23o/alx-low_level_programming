#include "lists.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * pop_listint - deletes the head node of a linked list, listint_t
 * @head: pointer to the beginning of the linked list, listint_t
 * Return: head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int i;

	if (*head == NULL)
		return (0);

	current = (*head);
	i = current->n;
	(*head) = current->next;
	free(current);

	return (i);
}
