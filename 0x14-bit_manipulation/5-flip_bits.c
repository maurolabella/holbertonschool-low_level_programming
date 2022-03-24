#include"main.h"

/**
 * flip_bits - get from one number to another
 * @m: decimal
 * @n: decimal
 * Return: count
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bed = 0;
	int count = 0;

	bed = m ^ n;

	while (bed)
	{
		bed = bed & (bed - 1);
		count++;
	}
	return (count);
}
