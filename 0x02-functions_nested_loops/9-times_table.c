#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * times_table - function to print 9 times table
 * Return: void
 *
 * Description:
 * Author: Alex Senges
 * Date: Feb 7, 2022
 */

void times_table(void)
{

int i, j, k;

i = 0;
while (i < 10)
{
j = 0;
while (j < 10)
{
k = i *j;

if ((k / 10) + '0' != '0')
{
_putchar((k / 10) + '0');
}
else
{
if (j != 0)
{
_putchar(' ');
}
}
_putchar((k % 10) + '0');

if (j != 9)
{
_putchar(',');
_putchar(' ');
}
j++;
}
_putchar('\n');
i++;

}
}
