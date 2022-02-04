#include<stdio.h>
#include<time.h>
#include<stdlib.h>

/**
 * main - main
 * Return: algo
 */
int main(void)

{

	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;

	if (lastDigit > 5)
	{
	printf("Last digit of %d", n, " is %d", lastDigit, "and is greater than 5\n");
	}
	else if (lastDigit == 0)
	{
	printf("Last digit of %d is %d", n, lastDigit, "and is 0\n");
	}
	else
	{
	printf("Last digit of %d", n, " is %d", lastDigit, "and is less than 6 _
	and not 0\n");
	}

	return (0);
}
