#include"main.h"
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<limits.h>

/**
 * print_last_digit - return the last digit of a number
 * @n : receives a number to be processed
 * Return: last digit
**/
int print_last_digit(long int n)
{
if (n > 0)
{
_putchar((n % 10) + '0');
return (n % 10);
}
else
{
_putchar(((n * -1) % 10) + '0');
return ((n * -1) % 10);
}
return (0);
}
