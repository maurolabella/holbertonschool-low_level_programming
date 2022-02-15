#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copies a string
 * @dest : string defining destination
 * @src : string sourcing data
 * @n : defines the number of character
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (src[i])
		{
			dest[i] = src[i];
		}
		else
		{
			dest[i] = '\0';
		}
	}
	return (dest);
}
