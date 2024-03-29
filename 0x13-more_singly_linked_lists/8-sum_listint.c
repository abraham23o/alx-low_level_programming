#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: pointer to the beginning of linked list, listint_t
 * Return: sum of all data(n) of a linked list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current;

	if (head == NULL)
		return (0);

	current = head;
	while (current)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
