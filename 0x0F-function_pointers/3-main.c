#include<stdio.h>
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

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	else
	{
		a = atoi(argv[1]), b = atoi(argv[3]);
	}
	if ((argv[2][0] != '+') && (argv[2][0] != '-') && (argv[2][0] != '*')
	 && (argv[2][0] != '/') && (argv[2][0] != '%'))
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && (b == 0))
	{
		printf("Error\n");
		exit(100);
	}
	fp = get_op_func(argv[2]);
	printf("%d\n", fp(a, b));
	return (0);
}
