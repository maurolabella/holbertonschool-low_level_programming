#include<stdio.h>
#include<string.h>
#include<stddef.h>
#include<stdlib.h>
#include"3-calc.h"

/**
 * main - check the code
 * @argc: number of arguments
 * @argv: addition elements surrounding operator
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int a, b;
	int (*fp)(int, int);

	fp = get_op_func(argv[2]);
	if (strlen(argv[2]) != 1 || fp == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	else
	{
		a = atoi(argv[1]), b = atoi(argv[3]);
	}

	if ((argv[2][0] == 47 || argv[2][0] == 37) && (b == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", fp(a, b));
	return (0);
}
