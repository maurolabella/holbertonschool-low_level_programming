#include <stdio.h>

/**
 * _strchr - locates a character in a string
 * @s : string where the character is looked for
 * @c : the character looked for
 * Return: a pointer to the position of interest.
 */
char *_strchr(char *s, char c)
{
	char *tmp;
	char flag = '0';

	while (*s != '\0')
	{
		if (*s == c)
		{
			tmp = s;
			flag = 'f';
			return (tmp);
		}
		s++;
	}

	if (flag == '0')
		return (NULL);
}
