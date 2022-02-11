#include<stdio.h>
#include"main.h"
/**#include<math.h>*/

/**
 * sasa - calculates a power of ten
 * @n : receives an integer
 * Return: long
 */
long int sasa(int n)
{
long int value = 1;

while (n != 0)
{
	value *= 10;
	--n;
}
return (value);
}

/**
 * print_number - print a number using _putchar
 * @n : receives an integer
 * Return: void
 */
void print_number(long int n)
{
	int q;
	long int control, tmp;

	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}

	q = 0;
	control = n;

	while (control > 0)
	{
		control = control / 10;
		q++;
	}
	printf("%li\n", n);

	tmp = n;

	while (q > 1)
	{
		_putchar((tmp / sasa(q - 1)) + '0');
		tmp = tmp - (tmp / sasa(q - 1)) * sasa(q - 1);
		q--;
	}
	_putchar((n % 10) + '0');
}
