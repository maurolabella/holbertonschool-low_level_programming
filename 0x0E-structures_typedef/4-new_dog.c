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
	char *new_name = strdup(name);
	char *new_owner = strdup(owner);
	dog_t *new_dog;

	if (new_name == NULL)
	{
		free(new_owner);
		return (NULL);
	}
	if (new_owner == NULL)
	{
		free(new_name);
		return (NULL);
	}

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;
	return (new_dog);
}
