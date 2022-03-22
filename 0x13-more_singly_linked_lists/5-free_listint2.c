#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 *
 * @head: receives a pointer to the list's head
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	while (*head)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}
}
