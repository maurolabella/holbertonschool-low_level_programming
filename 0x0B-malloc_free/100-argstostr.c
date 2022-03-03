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
	char *p = NULL;
	int i = 0, j = 0, t = 0, pi = 0;

	if (ac == 0 || av == NULL)
		return (p);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			t++;
		}
	}
	t = t + ac;

	p = malloc(sizeof(char) * t + 1);

	if (p == NULL)
	{
		return (p);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			p[pi] = av[i][j];
			pi++;
		}
		p[pi++] = '\n';
	}
	p[pi] = '\0';
	return (p);
}
