#include "lists.h"

/**
 * pop_listint - delete the head node of a listint_t
 * @head: list's head
 * Return: int
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp = 0;
	int n = 0;

	if (head == NULL || *head == NULL)
		return (0);
	if ((*head)->next == NULL)
	{
		n = (*head)->n;
		*head = NULL;
		return (n);
	}
	else
	{
		tmp = (*head)->next;
		n = (*head)->n;
		free(*head);
		*head = tmp;
		return (n);
	}
}
