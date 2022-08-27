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
	/*
	 * Finding the block where element is
	 * present (if it is present)
	 */
	unsigned int prev = 0;

  printf("Value checked array[%i] = [%i]\n", prev, array[prev]);

	while (array[min(step, size) - 1] < value)
	{
		printf("Value checked array[%i] = [%i]\n", min(step, size) - 1, array[min(step, size) - 1]);
		prev = step;
		step += sqrt(size);
		if (prev >= size)
			return (-1);
	}

	/*
	 * Doing a linear search for x in block
	 * beginning with prev.
	 */
	printf("Value found between indexes [%i] and [%i]\n", prev, min(step, size) - 1);

	while (array[prev] < value)
	{
		printf("Value checked array[%i] = [%i]\n", prev, array[prev]);
		prev++;

		/*
		 *If we reached next block or end of
		 * array, element is not present.
		 */
		if (prev == min(step, size))
			return (-1);
	}
	/* If element is found */
	if (array[prev] == value)
		return (prev);

	return (-1);
}
