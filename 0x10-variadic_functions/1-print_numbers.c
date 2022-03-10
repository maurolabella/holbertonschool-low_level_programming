#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
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
	{
		printf("%d", va_arg(ptr, int));
		if (i == (n - 1))
			break;
		if (separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ptr);
}
