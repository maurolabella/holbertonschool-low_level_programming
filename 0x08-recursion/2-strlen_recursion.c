#include<stdio.h>
#include"main.h"


/**
 * _strlen_recursion - calculate the length of a string
 * @s : receives a string
 * Return: an int as the length looked for.
 */
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s)
	{
		n = 1 + _strlen_recursion(s + 1);
	}
	else
	{
		return (n);
	}
	return (n);
}

