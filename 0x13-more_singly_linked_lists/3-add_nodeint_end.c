#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end - add node at the end of a linked list, listint_t
 * @head: pointer to the beginning of a linked list
 * @n: element of linked list
 * Return: the address of the new element, else NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *current = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		(*head) = new;
		return (new);
	}

	while (current->next != NULL)
		current = current->next;

	current->next = new;

	return (*head);

}
