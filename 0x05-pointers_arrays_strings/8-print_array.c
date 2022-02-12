#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_array - print n elements of an array
 * @a : receives the array
 * @n : receives the n of the n elements
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;
	int len;

	len = sizeof(a);

	if (len >= n)
	{
		for (i = 0; i < (n - 1); i++)
		{
			printf("%d, ", a[i]);
		}
		printf("%d\n", a[n - 1]);

	}
}

