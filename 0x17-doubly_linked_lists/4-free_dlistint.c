#include "lists.h"
/**
 * free_dlistint - frees dlistint_t
 * @head: pointer to the beginning of the node
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp, *current = head;

	while (current != NULL)
	{
		temp = current->next;
		free(current);
		current = temp;
	}
}
