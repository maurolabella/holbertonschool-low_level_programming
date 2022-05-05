#include "lists.h"

/**
 * add_dnodeint_end - add a node at the end
 *
 * @head: header
 * @n: value of the new node
 * Return: dlistint_t*
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL, *current = *head;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	if (!current)
	{
		*head = new;
		new->next = NULL;
		return (new);
	}
	while (current->next)
		current = current->next;

	new->prev = current;
	new->next = NULL;
	current->next = new;

	return (new);
}
