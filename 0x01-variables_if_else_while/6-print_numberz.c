#include<stdio.h>
#include<time.h>
#include<stdlib.h>

/**
 * main - main
 * Return: algo
 */
int main(void)

{

int i;

for (i = 0; i < 10; i++)
{
putchar(i % 10 + '0');
}

putchar('\n');

return (0);
}
