#include<stdio.h>

/**
 * main - function to print Fibonacci
 * Return: 0
 * no parameter included
 */
int main(void)
{
unsigned long n1 = 1, n2 = 2, n3;
int i, number = 50;
printf("\n%lu, %lu,", n1, n2);
for (i = 3; i <= number; ++i)
{
n3 = n1 + n2;
if (i == number)
{
printf(" %lu\n", n3);
}
else
{
printf(" %lu,", n3);
}
n1 = n2;
n2 = n3;
}
return (0);
}
