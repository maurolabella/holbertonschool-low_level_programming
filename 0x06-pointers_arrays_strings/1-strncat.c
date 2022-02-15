#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncat - check the code
 * @dest : receives string
 * @src : receives string
 * @n : recevies n for length second string
 * Return: a pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	j = strlen(dest);

	for (i = 0; i < n && src[i] != '\0' ; i++)
{
	dest[j + i] = src[i];
}
dest[j + i] = '\0';
return (dest);
}
