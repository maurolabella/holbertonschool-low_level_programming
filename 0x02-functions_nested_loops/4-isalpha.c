#include"main.h"
#include<ctype.h>

/**
 * _isalpha : check for alpha characters
 * @c > receives a characther to be controlled
 * Return : algo
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
