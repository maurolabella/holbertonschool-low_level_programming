#include "main.h"




/**
 * factorial - calculates factorial
 * @n : receives an integer
 * Return: an int as the factorial looked for.
 */
int factorial(int n)
{
	int f;

	if (n < 0)
	{
		return (-1);
	}
	else
	{
		if (n == 0)
		{
			return (1);
		}
		else
		{
			f = n * factorial(n - 1);
		}
	}
	return (f);
}
