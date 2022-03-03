#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: receives first string
 * @s2: receives second string
 * @n: the first n bytes of s2 to be selected
 * Return: A character pointer.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p = NULL;
	int i, t = 0;
	unsigned int j = 0;

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
			p[t++] = s1[i];
		}

		for (j = 0; (s2[j] && (j < n)); j++)
		{
			p[t++] = s2[j];
			i++;
		}
		p[t] = '\0';
	}
	return (p);
}
