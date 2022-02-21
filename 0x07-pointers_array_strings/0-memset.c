#include "main.h"
#include <stdio.h>

/**
 * _memset - fill mem space with a predefined value
 * @s: sets the memory address to print
 * @b: sets the character to be printed
 * @n : determines the first n bytes to be printed
 * Return: a pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
char *tmp = s;

while (tmp < s + n)
{
	*tmp = b;
	tmp++;
}
return (s);
}
