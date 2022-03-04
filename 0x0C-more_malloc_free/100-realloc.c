#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - reallocate memory blocks
 * @ptr: previously allocated memory (with malloc)
 * @old_size: the size of the memory previously allocated to ptr
 * @new_size: the new size
 * Return: Nothing.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *s;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (0);
	}
	if (ptr == NULL)
	{
		s = malloc(new_size);
		free(ptr);
		return (s);
	}
	if (new_size > old_size)
	{
		s = malloc(new_size);
		free(ptr);
		return (s);
	}
	if (old_size == new_size)
		return (ptr);
	return (0);
}
