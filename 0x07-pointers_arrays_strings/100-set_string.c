#include "main.h"
#include <stdio.h>

/**
 * set_string - sets the value of a pointer to a char
 * @s : receives a pointer's pointer
 * @to : receives a pointer
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
