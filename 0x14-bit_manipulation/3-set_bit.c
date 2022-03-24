#include"main.h"

/**
 * set_bit - bit to 1 at a given index
 * @n: decimal
 * @index: index
 * Return: -1 error or 1 success
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x = 1;

	if (index > 33)
		return (-1);

	x = 1 << index;

	*n = (*n) | x;
	return (1);
}
