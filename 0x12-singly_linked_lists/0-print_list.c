#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 *
 * @h: a pointer to the list(list_t)
 * Return:the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i;

	if (h != NULL)
	{
		for (i = 0; h != NULL; i++)
		{
			if (h->str == NULL)
			{
				printf("[0] (nil)\n");
				h = h->next;
			}
			else
			{
				printf("[%d] %s\n", h->len, h->str);
				h = h->next;
			}
		}
		return (i);
	}
	else
		return (0);
}
