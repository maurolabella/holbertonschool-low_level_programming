#include "dog.h"

/**
 * init_dog - Short description
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
