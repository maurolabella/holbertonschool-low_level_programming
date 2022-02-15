#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcmp - compares two strings
 * @s1 : first string
 * @s2 : second string
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	int i, j, k, mayor, control;

	j = strlen(s1);
	k = strlen(s2);
	if (j >= k)
	{
		mayor = j;
	}
	else
		{
		mayor = k;
	}

	for (i = 0; i < mayor ; i++)
	{
		if (s1[i] == s2[i])
		{
			control = 0;
		}
		else
		{
			control = s1[i] - s2[i];
		}
		if (control != 0)
			break;
	}
	return (control);
}
