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

	while (i-- > 0 && current->next)
		current = current->next;
	if (i > 0)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (!current->next)
	{
		current->next = new;
		new->prev = current;
	}
	else
	{
		new->next = current->next;
		new->prev = current;
		new->next->prev = new;
	}
	return (new);
}
