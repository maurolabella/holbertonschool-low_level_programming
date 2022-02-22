#include "main.h"


/**
 * print_chessboard - check the code
 * @a : receives an two-dimension array
 * Return: nothing.
 */
void print_chessboard(char (*a)[8])
{
	int dimension, i, j;

	dimension = sizeof(a[0]);

	for (i = 0; i < dimension; i++)
		for (j = 0; j < dimension; j++)
		{
			if (!(j % (dimension - 1)) && j)
			{
				_putchar(a[i][j]);
				_putchar('\n');
			}
			else
			{
				_putchar(a[i][j]);
			}
		}
}
