#include "lists.h"

/**
 * sum_dlistint - sum of all the data(n)
 *
 * @head: the header received
 * Return: int representing sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current)
	{
		sum = sum + current->n;
		current = current->next;
	}
	return (sum);
}
