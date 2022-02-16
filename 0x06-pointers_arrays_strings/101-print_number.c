#include "main.h"

/**
 * print_number - print a number
 * @n : receives a number
 * Return: nothing
 */
void print_number(int n)
{
	unsigned int aux = n;

	if (n < 0)
	{
		_putchar('-');
		aux *= -1;
	}
	if (aux / 10)
	{
		print_number(aux / 10);
	}
	_putchar (aux % 10 + 48);
}
