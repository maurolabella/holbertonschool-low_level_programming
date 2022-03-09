#include <stdlib.h>
#include "dog.h"
#include <string.h>

/**
 * free_dog - Short description
 * @d: dog_t struct to be freed
 *Return: void
 */
void free_dog(dog_t *d)
{
	free(d);
	free(d->name);
	free(d->owner);
}
