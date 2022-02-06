#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int printLine(int i, int j, int k, int l)
{
putchar(i % 10 + '0');
putchar(j % 10 + '0');
putchar(' ');
putchar(k % 10 + '0');
putchar(l % 10 + '0');
if (!(i == 9 && j == 8 && k == 9 && l == 9))
{
putchar(',');
putchar(' ');
}
}

/**
 * main - main
 * Return: algo
 */
int main(void)
{

int i = 0;
int j = 0;
int k = 0;
int l = 0;

while (i < 10)
{
while (j < 10)
{
while (k < 10)
{
while (l < 10)
{
if ((i == k && l > j) || (k > i))
{
printLine(i, j, k, l);
}
l++;
}
k++;
l = 0;
}
j++;
k = i;
}
i++;
j = 0;
}
putchar('\n');
return (0);
}
