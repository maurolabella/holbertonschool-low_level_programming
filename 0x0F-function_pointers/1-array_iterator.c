#include <stddef.h>

/**
 *  array_iterator - prints a name as is
 * @array: name of the person
 * @size: name of the person
 * @action: pointer to a function
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
