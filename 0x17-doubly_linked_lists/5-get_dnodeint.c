#include "lists.h"

/**
 * get_dnodeint_at_index - Get the dnodeint at index
 * @head: header received
 * @index: index position of the node to recover
 * Return: dlistint_t*
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;
	size_t i = 0;

	if (!node)
		return (NULL);

	while (node && i < index)
	{
		node = node->next;
		i++;
	}
	if (node && i == index)
		return (node);
	else
		return (NULL);
}
