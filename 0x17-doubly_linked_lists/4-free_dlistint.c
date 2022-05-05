#include "lists.h"

/**
 * free_dlistint - frees node list
 *
 * @head: head received
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = NULL;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
