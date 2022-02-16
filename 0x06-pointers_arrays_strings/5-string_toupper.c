#include "main.h"
#include <stdio.h>

/**
 * string_toupper - convert to uppercase
 * @str : string received
 * Return: a string.
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (str[i] && str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
