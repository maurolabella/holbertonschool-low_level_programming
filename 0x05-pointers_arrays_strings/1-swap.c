#include"main.h"

/**
 * swap_int - swap values asociated to memory allocations received
 * @a : first memory allocation
 * @b : second memory allocation
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
