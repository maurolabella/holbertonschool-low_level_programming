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
	unsigned char *dest_p = NULL;
	unsigned char *src_p = (unsigned char *)ptr;
	unsigned int min_length = 0;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		dest_p = malloc(new_size);
		if (dest_p != NULL)
			return (dest_p);
		else
			return (NULL);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
		else
		{
			dest_p = malloc(new_size);
			if (dest_p != NULL)
			{
				(new_size > old_size) ? (min_length = old_size) : (min_length = new_size);
				while (min_length--)
					*dest_p++ = *src_p++;
				free(ptr);
				return (dest_p);
			}
			else
				return (NULL);
		}
	}
}

