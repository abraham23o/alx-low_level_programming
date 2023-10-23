#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees the linked list, listint_t
 * @head: pointer to the beginning of the linked list
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;

	while (*head)
	{
		current = (*head)->next;
		free(*head);
		*head = current;
	}
	*head = NULL;
}
