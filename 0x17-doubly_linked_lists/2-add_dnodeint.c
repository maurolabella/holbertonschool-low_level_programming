#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginnint
 *
 * @head: header received
 * @n: value to be incorporated with the node
 * Return: dlistint_t*
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	if (head)
	{
		new = malloc(sizeof(dlistint_t));
	}
	if (new)
	{
		new->n = n;
		new->prev = NULL;
		new->next = *head;
		if (*head)
			(*head)->prev = new;
		*head = new;
	}
	return (new);
}
