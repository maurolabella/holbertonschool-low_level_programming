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

	(void) argc;

	if (!argv[1] || !argv[2])
	{
		printf("Error\n");
	}
	else
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
	}

	return (0);
}
