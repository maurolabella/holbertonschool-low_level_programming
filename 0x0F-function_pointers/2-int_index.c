#include <stdio.h>
#include <stddef.h>


/**
 *  int_index - finds element
 * @array: receives array
 * @size: array's size
 *@cmp: function used to compare
 * Return: index number, -1 if no matches or size <=0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || cmp == NULL)
		return (-1);
	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
		return (-1);
	}
	return (1);
}
