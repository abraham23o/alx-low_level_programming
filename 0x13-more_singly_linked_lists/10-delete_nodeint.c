#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index
 * of a listint_t linked list
 *@head: pointer to the beginning of linked list, listint_t
 * @index: position we are to delete
 * Return: 1, success, else -1, failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head, *to_delete;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}

	while (i < index - 1)
	{
		if (!current || !current->next)
			return (-1);

		current = current->next;
		i++;
	}

	to_delete = current->next;
	current->next = to_delete->next;
	free(to_delete);

	return (1);
}
