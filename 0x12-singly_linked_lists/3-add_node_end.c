#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - function that adds a new node at the
 * beginning of a list_t list
 * @head: head pointer
 * @str: string to be added at the head
 * Return: address of the new element, or NULL if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp = *head;
	list_t *new_node;
	size_t i = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	while (str[i])
		i++;

	new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new_node;
	return (new_node);
}
