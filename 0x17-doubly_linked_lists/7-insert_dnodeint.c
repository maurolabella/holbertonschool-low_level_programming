#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a new node at a given position idx
 *
 * @h: header received
 * @idx: position to locate new node
 * @n: node value
 * Return: dlistint_t new address on NULL if failing
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	size_t i = idx;
	dlistint_t *current = *h, *new = NULL;

	while (i > 1)
	{
		if (!current)
			return (NULL);
		current = current->next;
		i--;
	}
	if (idx >= 1 && !current)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->prev = NULL;
		new->next = current;
		if (current)
			current->prev = new;
		*h = new;
		return (new);
	}
	new->prev = current;
	new->next = current->next;
	if (new->next)
		new->next->prev = new;
	current->next = new;
	return (new);
}
