#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - liberates memory given an array
 * @grid : receives a pointer to an array
 * @height : array's height
 * Return: Always 0.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
