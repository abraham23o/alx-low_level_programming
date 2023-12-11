#include "lists.h"
/**
 * get_dnodeint_at_index - return the node at a given index
 * @index: index of node
 * @head: pointer to the beginning of the list
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = head;
	unsigned int i = 0;

	while (tmp != NULL && i < index)
	{
		tmp = tmp->next;
		i++;
	}
	return (tmp);
}
