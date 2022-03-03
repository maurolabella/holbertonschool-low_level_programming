#include "stddef.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 *  malloc_checked- allocates memory using malloc
 * @b : amount of memory to be allocated
 * Return: Always 0.
 */
void *malloc_checked(unsigned int b)
{
	void *result = malloc(b);

	if (malloc(b) == 0)
	{
		exit(98);
	}
	else
	{
		return (result);
	}
}
