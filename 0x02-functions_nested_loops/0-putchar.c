#include <stdio.h>
#include "main.h"

/**
 * main - main
 * Return: algo
 */
int main(void)
{
char buf0[9] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
int i;

for (i = 0; i < 8; i++)
{
_putchar(buf0[i]);
}

_putchar('\n');

return (0);
}
