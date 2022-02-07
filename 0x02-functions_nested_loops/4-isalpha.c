#include"main.h"
#include<ctype.h>

/**
 * _isalpha : check for alpha characters
 * Return : algo
 * @c : receives a character to be controlled
 */
int _isalpha(int c)
{
if (isalpha(c) == 0)
{
return (0);
}
else
{
return (1);
}
}
