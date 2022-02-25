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
	while (argc--)
	{
		printf("%s\n", *argv++);
	}

	return (0);
}
