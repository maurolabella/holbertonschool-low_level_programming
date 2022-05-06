#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes at index required
 *
 * @head: head received
 * @index: index required
 * Return: int 1 if succeeded -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	size_t i = index;
	dlistint_t *current = *head;

	while (i > 0)
	{
		if (!current)
			return (-1);
		current = current->next;
		i--;
	}
	if (!current)
		return (-1);
	if (index == 0)
	{
		if ((*head)->next)
		{	
			*head = (*head)->next;
			(*head)->prev = NULL;
		}
		else
			*head=NULL;
		free(current);
		return (1);
	}
	current->prev->next = current->next;
	if (current->next)
		current->next->prev = current;
	free(current);
	return (1);
}
