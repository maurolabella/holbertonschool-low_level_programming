#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 *
 * @head: list's head
 * @idx: position for the new node
 * @n: value of the new node
 * Return: listint_t*
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	size_t i = 0;
	listint_t *tmp = *head, *new = NULL;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = tmp;
		*head = new;
		return (new);
	}

	while (tmp)
	{
		if ((i++) < (idx - 1))
			tmp = tmp->next;
		else
			break;
	}
	if (tmp == NULL || ((i + 1) != idx))
		return (NULL);
	new->next = tmp->next;
	tmp->next = new;
	return (new);
}
