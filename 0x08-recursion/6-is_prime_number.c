#include "main.h"
#include <stdio.h>


/**
 * root_aprox - aproximates the root square of an unsigned int
 * @n : number to be rooted
 * @i : first guess
 * Return: aproximate root.
 */
int root_aprox(int n, int i)
{
	if ((n * 100) - (i * i) <= 0)
	{
		return (i / 10);
	}
	else
	{
		return (root_aprox(n, i + 1));
	}
}

/**
 * primemo - check if prime based on the square root
 * @n : number to be rooted
 * @i : approximate root square
 * Return: 1 if it is prime, 0 otherwise
 */
int primemo(int n, int i)
{
	if (n == 1)
		return (0);

	if (i == 1)
	{
		return (1);
	}
	else
	{
		if (n % i == 0)
		{
			return (0);
		}
		else
		{
			return (primemo(n, i - 1));
		}
	}
}

/**
 * is_prime_number - check if a number is prime through divisibility
 * @n : number to be checked
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	int s;

	if (n < 0)
		return (0);

	s = root_aprox(n, 1);

	return (primemo(n, s));
}
