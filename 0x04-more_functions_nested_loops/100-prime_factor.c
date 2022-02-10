#include<stdio.h>
#include<math.h>

/**
 * getMaxPrimeFactor - return the max prime factor of an entire imput
 * @n : receives the entire for which to look for a maximum prime factor
 * Return: the max prime factor
 */
long getMaxPrimeFactor(long n)
{
	int i;
	long max = -1;

	while (n % 2 == 0)
	{
		max = 2;
		n = n / 2;
	}
	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			max = i;
			n = n / i;
		}
	}
	if (n > 2)
	{
		max = n;
	}
	return (max);
}
/**
 * main - prints the Max prime factor
 * Return: void
 */
int main(void)
{
	long n = 612852475143;

	printf("%ld\n", getMaxPrimeFactor(n));
	return (0);
}
