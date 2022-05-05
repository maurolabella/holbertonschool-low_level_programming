#include "lists.h"

/**
 * print_dlistint - print all the elements of a double list
 *
 * @h: list header received
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (n);
}
