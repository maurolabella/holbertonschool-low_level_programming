#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t
 *
 * @head: list's head
 * @index: node's index
 * Return: listint_t*
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t i;
	listint_t *tmp = NULL;

	if (head == NULL)
		return (NULL);
	tmp = head;
	for (i = 0; i <= index; i++)
	{
	}
}