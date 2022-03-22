#include "lists.h"

/**
 * delete_nodeint_at_index - delete indexed node
 *
 * @head: list's head
 * @index: node to be deleted
 * Return: int 1 if succeded, -1 in case of failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	size_t i = 0;
	listint_t *tmp = *head;
	listint_t *target = NULL;

	if (tmp == NULL)
		return (-1);
	if (index == 0)
	{
		target = *head;
		*head = target->next;
		free(target);
		return (1);
	}

	while (tmp)
	{
		if (i++ < (index - 1))
			tmp = tmp->next;
		else
			break;
	}
	if (tmp->next == NULL)
		return (-1);
	target = tmp->next;
	tmp->next = target->next;
	free(target);
	return (1);
}
