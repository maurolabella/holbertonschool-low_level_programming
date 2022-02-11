#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts2 - print every other character
 * @str: pointer
 * Return: void
 */
void puts2(char *str)
{
int i;
int len;

len = strlen(str);

	for (i = 0; i < len - 1; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
