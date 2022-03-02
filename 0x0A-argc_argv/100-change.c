#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - receives amount of change to reduce
 * @argv : determinies the ammount to reduce
 */
int main(int argc, char *argv[])
{
	int Numb, Coins;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	Numb = atoi(argv[1]);
	if (Numb < 0)
	{
		printf("0\n");
		return (0);
	}

	Coins = (Numb / 25);
	Numb = Numb - ((Numb / 25) * 25);
	Coins = Coins + (Numb / 10);
	Numb = Numb - ((Numb / 10) * 10);
	Coins = Coins + (Numb / 5);
	Numb = Numb - ((Numb / 5) * 5);
	Coins = Coins + (Numb / 2);
	Numb = Numb - ((Numb / 2) * 2);
	Coins = Coins + Numb;

	printf("%d\n", Coins);
	return (Coins);
}
