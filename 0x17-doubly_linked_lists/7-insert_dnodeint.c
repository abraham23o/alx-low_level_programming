#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the beginning of list
 * @idx: position to add node
 * @n: value of the new node
 * Return: address of the new node or NULL if it fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = NULL, *tmp = *h;
	unsigned int i = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (h == NULL)
	{
		if (new_node != NULL)
			free (new_node);
		return (NULL);
	}

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = 0;
	new_node->prev = 0;

	if (idx == 0)
	{
		new_node = *h;
		if (*h != 0)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	for (; i < idx - 1 && tmp != NULL; i++)
		tmp = tmp->next;

	if (tmp == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = tmp->next;
	if (tmp->next != NULL)
		tmp->next->prev = new_node;
	tmp->next = new_node;
	new_node->prev = tmp;

	return (new_node);
}
