#include"main.h"


/**
 * more_numbers - print series
 * Return: void
 */
void more_numbers(void)
{
int i,j;
for (j = 0; j < 11; j ++)
{
for (i = 0; i < 15; i++)
{
int d;
d = i / 10;
if (!(d == 0))
_putchar(d + '0');

_putchar((i % 10) + '0');
}
_putchar('\n');
}
}
