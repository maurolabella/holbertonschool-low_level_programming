#include"main.h"
#include<stdio.h>
#include<string.h>

/**
 * print_rev - print to stdout in reverse
 * @s : receives string
 * Return: void
 */
void print_rev(char *s)
{
	int i;
	int len;

	len = strlen(s);

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}

