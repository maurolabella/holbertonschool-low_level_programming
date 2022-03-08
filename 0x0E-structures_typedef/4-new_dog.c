#include <stdlib.h>
#include "dog.h"
#include <string.h>

/**
 * new_dog - Short description
 * @d: pointer
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *Return: void
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_perro;

	if (name == NULL)
	{
		free(owner);
		return (NULL);
	}

	if (owner == NULL)
	{
		free(name);
		return (NULL);
	}

	new_perro = malloc(sizeof(dog_t));
	if (new_perro == NULL)
		return (NULL);
	new_perro->name = name;
	new_perro->age = age;
	new_perro->owner = owner;
	free(name);
	free(owner);
	return (new_perro);
}
