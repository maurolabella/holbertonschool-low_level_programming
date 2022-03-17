#include "lists.h"

/**
 * add_node_end-  adds a new node at the end
 * @head: receives a pointer to the list's head
 * @str: receives a pointer to the new node's string
 * Return: a pointer to the new element (list_t*).
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *tmp;
	char *s = strdup(str);

	if (head && s)
	{
		new = malloc(sizeof(list_t));
		new->str = s;
		new->len = strlen(new->str);
		new->next = NULL;
		if ((*head) == NULL)
		{
			*head = new;
		}
		else
		{
			tmp = (*head);
			while (tmp->next != NULL)
				tmp = tmp->next;
			if (tmp->next == NULL)
				tmp->next = new;
		}
		return (new);
	}
	else
	{
		return (NULL);
	}
}
