#include<stdio.h>
#include"main.h"

/**
 * _print_rev_recursion - print a string in reverse followed by a new line
 * @s : receives a string
 * Return: Always 0.
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	else
	{
		_putchar('\n');
	}
}
