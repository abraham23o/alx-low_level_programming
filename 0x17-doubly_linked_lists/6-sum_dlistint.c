#include "lists.h"
/**
 * sum_dlistint - finds the sum of all the data (n) of a dlistint_t linked list
 * @head: pointer to the first node
 * Return: sum of all data of the list
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;
	int res = 0;

	while (tmp)
	{
		res += tmp->n;
		tmp = tmp->next;
	}
	return (res);
}
