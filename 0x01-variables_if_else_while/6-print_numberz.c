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
char sl = '\n';

for (i = 0; i < 10; i++)
{
putchar(i % 10 + '0');
}

putchar(sl);

return (0);
}
