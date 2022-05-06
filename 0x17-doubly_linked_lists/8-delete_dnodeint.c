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
	dlistint_t *_h, *node;

	if (!*head)
		return (-1);
	_h = *head;
	node = *head;
	if (!index)
	{
		/* set the copy */
		_h = _h->next;
		if (_h)
			_h->prev = NULL;
		/* Clear the original */
		free(*head);
		/* Reassign */
		*head = _h;
		return (1);
	}
	while (index)
	{
		if (!_h)
			return (-1);
		/* set the copy */
		_h = _h->next;
		index--;
	}
	node = _h->next;
	_h->prev->next = node;
	if (node)
		node->prev = _h->prev;
	free(_h);
	return (1);
}
