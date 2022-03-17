#include "lists.h"
/**
 * list_len - counts list's elements
 * @h: the list pointer
 * Return: size_t number
*/
size_t list_len(const list_t *h)
{
	size_t i;

	if (h != NULL)
	{
		for (i = 0; h != NULL; i++)
		{
			h = h->next;
		}
		return (i);
	}
	else
		return (0);
}
