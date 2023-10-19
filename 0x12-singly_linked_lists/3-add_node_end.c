#include <stdlib.h>
#include "lists.h"
#include <stddef.h>
#include <string.h>

/**
 * add_node_end - function to add a new node at the end of
 * the linked list
 * @head: beginning of a linked list
 * @str: string to be added in the new node
 * Return: address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current = *head, *new_node;
	unsigned int len = 0;

	while (str[len])
		len++;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (current->next != NULL)
		current = current->next;

	current->next = new_node;

	return (*head);
}
