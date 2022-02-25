#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include"main.h"

/**
 * main - do
 * @argc : integer
 * @argv : array of pointer to arguments
 * Return: an integer.
 */
int main(int argc, char *argv[])
{
	int result;
	int i, j;

	result = 0;

	i = 1;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		while (argv[i])
		{
			for (j = 0; argv[i][j]; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			i++;
		}

		for (i = 1; i < argc; i++)
		{
			result = result + atoi(argv[i]);
		}
		printf("%d\n", result);
	}
	return (0);
}
