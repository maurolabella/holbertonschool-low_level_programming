#include"main.h"
#include<ctype.h>


/**
 * print_sign - check for number signs
 * @n : receives a number to be controlled
 * Return: 0
**/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
