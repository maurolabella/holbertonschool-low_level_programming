#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * intialize - initialize a pointer
 * @array: pointer to a double array
 * @height: number of rows
 * @width: number of columns
 * Return: void
 */
void initialize(int **array, int width, int height)
{
	int w, h = 0;

	while (h < height)
	{
		w = 0;
		while (w < width)
		{
			array[h][w] = 0;
			w++;
		}
		h++;
	}
}

/**
 * int **alloc_grid - returns a pointer to a two dimensional array
 * @width: witdth of  the two dimensional grid
 * @height: height of the grid
 * Return: integer
 */
int **alloc_grid(int width, int height)
{
	int **array = NULL;
	int i, j = 0;

	if (width < 1 || height < 1)
		return (NULL);
	array = (int **)malloc(height * sizeof(int *));
	if (array != NULL)
	{
		for (i = 0; i < height; i++)
		{
			array[i] = (int *)malloc(width * sizeof(int));
			if (array[i] == NULL)
			{
				for (j = 0; array[j]; j++)
				{
					free(array[j]);
				}
				free(array);
			}
		}
		initialize(array, width, height);
	}
	return (array);
}
