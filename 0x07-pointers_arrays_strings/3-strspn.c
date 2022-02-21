#include "main.h"
#include <stdio.h>

/**
 * _strspn - look for coincidences
 * @s : string where character included in accept are looked for
 * @accept : string comprising characters looked for
 * Return: number of times s'characters were present in accept string
 */
unsigned int _strspn(char *s, char *accept)
{
	char *tmp;
	unsigned int i = 0;

	while (*s != '\0' && *s != 44 && *s != 20 && *s != 46)
	{
		printf(" s is %c\n", *s);
		tmp = accept;
		while (*tmp != '\0')
		{
			if (*s == *tmp)
				i++;
			tmp++;
		}
		s++;
	}
	return (i);
}
