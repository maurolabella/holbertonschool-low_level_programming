#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: the size of each array element
 * Return: Nothing.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *nil;

	unsigned int i = 0;

	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	nil = malloc(nmemb * size);
	if (nil == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		nil[i] = 0;

	p = nil;

	free(nil);
	return (p);
}
