#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *str_concat - creates an spaced string in heap
 *@s1 : defines the string 1
 *@s2 : defines the string 2
 *Return: a pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *newstring;
	int size, i, j, k;

	size = i = j = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	if ((i + j) > 0)
		size = i + j;
	else
	{
		newstring = (char *)malloc(sizeof(char) * (size + 1));
		newstring[0] = '\0';
		return (newstring);
	}
	newstring = (char *)malloc(sizeof(char) * (size + 1));
	if (newstring == NULL)
		return (NULL);
	if (i > 0)
	{
		for (k = 0; k < i; k++)
		{
			newstring[k] = s1[k];
		}
	}
	if (j > 0)
	{
		for (k = i; k < (i + j); k++)
		{
			newstring[k] = s2[k - i];
		}
	}
	newstring[i + j] = '\0';
	return (newstring);
}
