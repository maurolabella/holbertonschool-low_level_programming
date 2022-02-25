#include <stdio.h>

/**
 * _strpbrk - search a string for any of a set of bytes
 * @s : string where character included in accept are looked for
 * @accept : string comprising characters looked for
 * Return: a pointer to the byte in s that matches one of the bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
	char *tmp;

	while (*s != '\0')
	{
		tmp = accept;
		while (*tmp != '\0')
		{
			if (*s == *tmp)
				return (s);
			tmp++;
		}
		s++;
	}
	return (0);
}
