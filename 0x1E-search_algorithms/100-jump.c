#include "search_algos.h"
#include <math.h>

/**
 * min - calculates min
 *
 * @a: a
 * @b: b
 * Return: int min(a,b)
 */
unsigned int min(unsigned int a, unsigned int b)
{
	if (b > a)
		return (a);
	else
		return (b);
}

/**
 * jump_search - searches for a value in a sorted array using
 * Jump search algorithm
 *
 * @array: the array
 * @size: array's size
 * @value: value searched for
 * Return:  int representing the searched position
 */
int jump_search(int *array, size_t size, int value)
{
	unsigned int step = sqrt(size);
	unsigned int prev = 0;

	printf("Value checked array[%i] = [%i]\n", prev, array[prev]);

	while (array[min(step, (size - 1))] <= value)
	{
		printf("Value checked array[%i] = [%i]\n", (min(step, (size - 1))),
					 array[min(step, size - 1)]);
		prev = step;
		step += sqrt(size);
		if (prev > (size - 1))
			return (-1);
	}

	printf("Value found between indexes [%i] and [%i]\n", prev,
				 (min(step, (size - 1))));

	while (array[prev] < value)
	{
		prev++;
		printf("Value checked array[%i] = [%i]\n", prev, array[prev]);

		if (prev == min(step, size))
			return (-1);
	}
	if (array[prev] == value)
		return (prev);

	return (-1);
}
