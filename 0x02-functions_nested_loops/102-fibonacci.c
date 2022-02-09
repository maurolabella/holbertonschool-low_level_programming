#include<stdio.h>

/**
 * main - function to print Fibonacci
 * Return: 0
 * no parameter included
 */
int main(void)
{
unsigned long long n1 = 1, n2 = 2, n3, number = 50;
int i;
printf("\n%llu, %llu,", n1, n2);
for (i = 3; i <= number; ++i)
{
n3 = n1 + n2;
if (i == number)
{
printf(" %llu\n", n3);
}
else
{
printf(" %llu,", n3);
}
n1 = n2;
n2 = n3;
}
return (0);
}
