#include "main.h"

/**
 * get_bit - to return the value of a bit at a given index
 *
 * @n: given number
 * @index: starting from 0 to the bit you want to get
 * Return: int a the value of the bit at index, -1 in case of error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int t;

	if (index > 33)
		return (-1);
	t = (n & (1 << index));

	if (t == 0)
		return (0);
	else
		return (1);
}
