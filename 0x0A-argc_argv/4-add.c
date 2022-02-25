#include<stdio.h>
#include<stdlib.h>
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
	int i;

	result = 0;

	i = 1;

	while (argv[i])
	{
		if (*argv[i] != '0' && atoi(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			result = result + atoi(argv[i]);
		}
		printf("%d\n", result);
	}
	return (0);
}
