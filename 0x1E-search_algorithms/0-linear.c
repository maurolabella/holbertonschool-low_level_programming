#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers using
 * the Linear search algorithm
 *
 * @array: array to be searched
 * @size: array's size
 * @value: value searched for
 * Return: int representing the array's position of value
 */
int linear_search(int *array, size_t size, int value)
{

	unsigned int i = 0;

	if (!array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%i] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
