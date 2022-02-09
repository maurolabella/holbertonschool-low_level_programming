#include"main.h"
#include<ctype.h>


/**
 * _isdigit - returns 1 if c is a digit
 * @c : receives an integer
 * Return: 0 otherwise
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
