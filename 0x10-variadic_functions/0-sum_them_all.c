#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *  sum_them_all - variadic sum
 * @count: total arguments passed
 * Return: an integer
 */
int sum_them_all(const unsigned int count, ...)
{
	unsigned int i, sum;

	va_list ptr;

	va_start(ptr, count);

	sum = 0;
	for (i = 0; i < count; i++)
		sum += va_arg(ptr, int);

	va_end(ptr);
	return (sum);
}
