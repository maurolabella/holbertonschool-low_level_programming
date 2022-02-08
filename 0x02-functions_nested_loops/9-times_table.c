#include"main.h"
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<limits.h>

/**
 * times_table - print time table
  * Return: void
**/
void times_table(void)
{
int i;
int j;
int r;

for (i = 0; i < 10; i++)
{
j = 0;

for (j = 0; j < 10; j++)
{
r = i * j;

_putchar((r / 10) + '0');
_putchar((r % 10) + '0');

if (j != 9)
{
_putchar(',');
_putchar(' ');

}
else
{
_putchar('\n');
}
}
}
_putchar('\n');

}
