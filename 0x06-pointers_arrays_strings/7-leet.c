#include "main.h"

/**
 * leet - change some letters for numbers
 * @str : receives a string
 * Return: a char
 */
char *leet(char *str)
{
	int i, j;
	char a[] = "4433007711";
	char b[] = "aAeEoOtTlL";

	for (i = 0; str[i]; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == b[j])
			{
				str[i] = a[j];
				break;
			}
		}
	}
	return (str);
}
