#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"


/**
 *  print_numbers - variadic print
 * @separator: separator
 * @n: n arguments
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
		if (i != (n - 1))
			printf("%d%s", va_arg(ptr, int), separator);
		else
			printf("%d\n", va_arg(ptr, int));

	va_end(ptr);
}
