#include<stdio.h>
#include"main.h"

/**
 * _puts_recursion - print a string followed by a new line
 * @s : receives a string
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
