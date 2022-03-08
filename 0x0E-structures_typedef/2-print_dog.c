#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Short description
 * @d: pointer
 *Return: void
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name == NULL)
			printf("(nil)");
		else
			printf("Name: %s\n", (*d).name);

		printf("Age: %f\n", (*d).age);

		if (d->owner == NULL)
			printf("(nil)");
		else
			printf("Owner: %s\n", (*d).owner);
	}
}
