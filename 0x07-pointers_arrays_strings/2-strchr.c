#include "main.h"


/**
 * _strchr - locates a character in a string
 * @s : string where the character is looked for
 * @c : the character looked for
 * Return: a pointer to the position of interest.
 */
char *_strchr(char *s, char c)
{
	char flag = '0';

	if (c == '\0')
	{
		while (*s != '\0')
		{
			s++;
		}
		return (s);
	}
	else
	{
		while (*s != '\0')
		{
			if (*s == c)
			{
				return (s);
			}
			s++;
		}

		if (flag == '0')
		return (0);

	}
	return (0);

}
