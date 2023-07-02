#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - function that adds a new node at the
 * beginning of a list_t list
 * @head: head pointer
 * @str: string to be added at the head
 * Return: address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	size_t i = 0;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	while (str[i])
		i++;

	temp->str = strdup(str);
	temp->len = i;
	temp->next = *head;
	*head = temp;

	return (temp);
}
