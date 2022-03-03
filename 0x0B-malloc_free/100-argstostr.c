#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 *  argstostr- concatenates arguments
 * @ac : receives number of parameters
 * @av : receives pointer to arguments
 * Return: a char pointer or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	int i, ip, j, k, n, length = 0;
	char *p = NULL;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (ip = 0; av[i][ip]; ip++)
			length++;
		length++;
	}
	p = malloc(length + 1);
	if (p != NULL)
	{
		for (j = 0; j < ac; j++)
		{
			for (k = 0; av[j][k]; k++)
				p[n++] = av[j][k];
			p[n++] = '\n';
		}
		p[n] = '\0';
		return (p);
	}
	return (p);
}
