#include <stdlib.h>

/**
 * _strdup - creates an spaced string in heap
 * @str : defines the string
 * Return: a pointer
 */
char *_strdup(char *str)
{
	char *newstring;
	unsigned int i;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	newstring = (char *)malloc(sizeof(char) * (i + 1));

	if (newstring == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < sizeof(newstring); i++)
	{
		newstring[i] = str[i];
	}
	return (newstring);
}
