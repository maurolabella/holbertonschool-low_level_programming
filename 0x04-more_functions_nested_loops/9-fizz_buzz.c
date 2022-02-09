#include<stdio.h>
#include"main.h"


/**
 * main - print from 1 to 100 with Fizz(3), Buzz(5), FizzBuzz(15)
 * Return: void
 */
int main(void)
{
int size = 100;
int i;

	for (i = 1; i <= size; i++)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}

		if (i != 100)
		{
			printf(" ");
		}
		else
		{
			printf("\n");
		}
	}
	return (0);
}
