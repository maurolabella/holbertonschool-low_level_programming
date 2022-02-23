#include "main.h"


/**
 * _pow_recursion - potenciea
 * @x : receives an integer
 * @y : receives an integer
 * Return: an int as the value looked for.
 */
int _pow_recursion(int x, int y)
{
	int res;

	if (y < 0)
		return (-1);

	if (y == 0)
	{
		return (1);
	}
	else
	{
		res = x * _pow_recursion(x, (y - 1));
	}
	return (res);
}
