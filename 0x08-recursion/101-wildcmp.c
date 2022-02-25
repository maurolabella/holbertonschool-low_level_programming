#include "main.h"
#include <stdio.h>
#include <string.h>


/**
 * true_compare - compares string with wildcards
 * @s1 : string1
 * @s2 : string2
 * @type : char
 * @mem : retains position when comparing wildcard
 * Return: an integer.
 */

int true_compare(char *s1, char *s2, char type, char *mem)
{
	if (*s2 == '\0' && *s1 == '\0')
		return (1);
	else if (*s1 == '\0' && *s2 != '*')
		return (0);
	else if (*s1 != '\0' && *s1 == '\0')
		return (0);

	if (*s1 == *s2)
	{
		if (type == 'c')
			return (true_compare((++s1), (++s2), 'c', mem));
		else
			return (true_compare((++s1), (++s2), 'o', mem));
	}
	else if (*s2 == '*')
	{
		if (*s1 == '\0' && strlen(s2) == 1)
			return (1);
		s2++;
		mem = s2;
		return (true_compare(s1, s2, 'c', mem));
	}
	else
	{
		if (type == 'c')
		{
			(s2 != mem) ? (s2 = mem) : (s1++);
			return (true_compare(s1, s2, 'c', mem));
		}
		else
			return (0);
	}
}


/**
 * wildcmp - compares string with wildcards
 * @s1 : string1
 * @s2 : string2
 * Return: an integer.
 */
int wildcmp(char *s1, char *s2)
{
	char *mem;

	mem = s2;
	return (true_compare(s1, s2, 'o', mem));
}
