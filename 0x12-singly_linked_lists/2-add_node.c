#include "lists.h"

/**
 * add_node - adds node to a list
 * @head: receives a pointer to the list's head
 * @str: receives a pointer to the new node's string
 * Return: a pointer to the new element (list_t*).
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	char *s = strdup(str);

	if (head && s)
	{
		new = malloc(sizeof(list_t));
		new->str = s;
		new->len = strlen(new->str);
		if ((*head) == NULL)
		{
			new->next = NULL;
			*head = new;
		}
		else
		{
			new->next = *head;
			*head = new;
		}
		return (new);
	}
	else
	{
		return (NULL);
	}
}
