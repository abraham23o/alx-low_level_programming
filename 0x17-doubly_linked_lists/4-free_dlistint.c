#include "lists.h"
/**
 * free_dlistint - frees dlistint_t
 * @head: pointer to the beginning of the node
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = NULL;

	while (head != NULL)
	{
		current = head->next;
		if (current != NULL)
			current->prev = NULL;
		free(head);
		head = current;
	}
}
