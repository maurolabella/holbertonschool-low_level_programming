#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/**
 *str_concat - creates an spaced string in heap
 *@s1 : defines the string 1
 *@s2 : defines the string 2
 *Return: a pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *p = NULL;
	int i, j = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	p = malloc(strlen(s1) + strlen(s2) + 1);
	if (p != NULL)
	{
		for (i = 0; s1[i]; i++)
		{
			p[i] = s1[i];
		}

		for (j = 0; s2[j]; j++)
		{
			p[i] = s2[j];
			i++;
		}
	}
	return (p);
}
