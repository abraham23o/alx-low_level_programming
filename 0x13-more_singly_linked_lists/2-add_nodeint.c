#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - function that adds a node at the beginning of
 * a linked listint_t list
 * @head: pointer to the beginning of the linked list, listint_t
 * @n: element of listint_t
 * Return: address of the new element, else NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
