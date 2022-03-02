#include <stdlib.h>

/**
 * _strdup - creates an spaced string in heap
 * @str : defines the string
 * Return: a pointer
 */
char *_strdup(char *str)
{
	char *newstring;
	int size, i;

	if (str == NULL)
	{
		return (NULL);
	}
	size = 0;
	while (str[size] != '\0')
	{
		size++;
	}
	newstring = (char *)malloc(sizeof(char) * (size + 1));

	if (newstring == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (size + 1); i++)
	{
		newstring[i] = str[i];
	}
	return (newstring);
}
