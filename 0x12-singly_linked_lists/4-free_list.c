#include "lists.h"
#include <stdlib.h>
/**
 * free_list - function that frees a list list_t
 * @head: pointer to the head element of a list
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *temp;

	temp = head;
	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
