#include <stdlib.h>
#include "dog.h"
#include <string.h>

/**
 * new_dog - Short description
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *Return: void
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i;
	dog_t *perro_new;

	perro_new = malloc(sizeof(dog_t));
	if (perro_new)
	{
		perro_new->name = malloc(strlen(name) + 1);
		if (perro_new->name)
		{
			for (i = 0; name[i]; i++)
				perro_new->name[i] = name[i];
			perro_new->name[i] = '\0';
		}
		else
		{
			free(perro_new);
			return (NULL);
		}
		perro_new->age = age;

		perro_new->owner = malloc(strlen(owner) + 1);
		if (perro_new->owner)
		{
			for (i = 0; owner[i]; i++)
				perro_new->owner[i] = owner[i];
			perro_new->owner[i] = '\0';
		}
		else
		{
			free(perro_new->name);
			free(perro_new);
			return (NULL);
		}
	}
	return (perro_new);
}
