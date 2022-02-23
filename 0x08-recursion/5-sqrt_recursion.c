#include "main.h"
#include <stdio.h>


/**
 * root1 - find a root from an initial guess
 * @n : integer to be root squared
 * @i : initial guess
 * Return: an integer.
 */
int root1(int n, int i)
{
	if (n - i * i == 0)
	{
		return (i);
	}
	else
	{
		if (n - i * i > 0)
		{
			return (root1(n, i + 1));
		}
		else
		{
			return (-1);
		}
	}
}


/**
 * _sqrt_recursion - cites a recursion function to find the root square
 * @n : receives the number to be root squared
 * Return: the result as an integer.
 */
int _sqrt_recursion(int n)
{
	return (root1(n, 1));
}
