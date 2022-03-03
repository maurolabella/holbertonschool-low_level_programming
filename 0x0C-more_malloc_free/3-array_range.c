#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - sucessin in an array
 * @min: the address of memory to print
 * @max: the size of the memory to print
 * Return: a int * pointer
 */
int *array_range(int min, int max)
{

	int *array;
	int i = 0;

	if (max < min)
		return (NULL);

	array = malloc(sizeof(int) * (max - min + 1));
	if (array == NULL)
		return (NULL);
	for (i = 0; i < (max - min + 1); i++)
	{
		array[i] = min + i;
	}
	return (array);
}
