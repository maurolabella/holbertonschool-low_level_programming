#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * print_in_for - print small positive number (<1000) in 4 columns
 * Return: void
 * @nmbr : receives a natural number
 */
void print_in_for(int nmbr)
{
int d, c;
c = nmbr / 100;
d = (nmbr - (c * 100)) / 10;
_putchar(' ');
if (c == 0)
{
_putchar(' ');
}
else
{
_putchar(c + '0');
}
if (d == 0)
{
_putchar(' ');
}
else
{
_putchar(d + '0');
}
_putchar((nmbr % 10) + '0');
}


/**
 * print_times_table - function to print a natural times table
 * Return: void
 * @n : receives a natural number
 */
void print_times_table(int n)
{
int i = 0;
int j;
long k;

if (n < 0 || n > 15)
return;

while (i < (n + 1))
{
j = 0;
while (j < (n + 1))
{
k = i * j;

if (j == 0)
{
_putchar((k % 10) + '0');
}
else
{
print_in_for(k);
}
if (j != n)
{
_putchar(',');
}
j++;
}
_putchar('\n');
i++;
}
}
