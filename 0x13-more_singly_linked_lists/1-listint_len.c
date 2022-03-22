#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 *
 * @h: head of the list (received)
 * Return: size_t  elements
 */
size_t listint_len(const listint_t *h)
{
  size_t n = 0;

  if (h == NULL)
    return (0);
  while (h != NULL)
  {
    h = h->next;
    n++;
  }
  return (n);
}
