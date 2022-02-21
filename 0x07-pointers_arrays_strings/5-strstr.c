#include "main.h"
#include <stdio.h>

/**
 * _strstr - find location of first total match of a set substring
 * @haystack : the mayor string to look for in
 * @needle : string defines to string with which compare
 * Return: a pointer towards the beginning of the matched coincidence
 */
char *_strstr(char *haystack, char *needle)
{
	char *tmp = needle;
	int needle_length = 0;
	int count = 0;

	while (*tmp != '\0')
	{
		needle_length++;
		tmp++;
	}

	if (needle_length == 0)
		return (0);

	tmp = needle;

	while (*haystack != '\0')
	{
		if (*haystack == *tmp)
		{
			count++;
			tmp++;
		}
		else
		{
			count = 0;
			tmp = needle;
		}
		if (count == needle_length)
		{
			return (haystack - needle_length + 1);
		}
		haystack++;
	}
	return (0);
}
