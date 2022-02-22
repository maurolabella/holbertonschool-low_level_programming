#include "main.h"
#include <stdio.h>


/**
 * print_diagsums - sum of the two diagonals of a square matrix of integers
 * @a : receives a matrix
 * @size : explicit matrix's dimensions
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int d1, d2, i, j;

	d1 = d2 = 0;

	for (i = 0; i < size; i++)
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				d1 = d1 + *((a + i * size) + j);
			}

			if ((i + j) == (size - 1))
			{
				d2 = d2 + *((a + i * size) + j);
			}
		}
	printf("%d, %d\n", d1, d2);
}
