#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at index index of list, dlistint_t
 * @head: pointer to the beginning of dlistint_t
 * @index: position to delete at
 * Return: 1 success, -1 if fails
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *tmp = *head;

	if (*head == NULL)
		return (-1);


	while (tmp && i < index)
	{
		tmp = tmp->next;
		i++;
	}

	if (tmp == NULL)
		return (-1);

	if (tmp->prev != 0)
		tmp->prev->next = tmp->next;
	*head = tmp->next;

	if (tmp->next != 0)
		tmp->next->prev = tmp->prev;

	free(tmp);

	return (1);
}
