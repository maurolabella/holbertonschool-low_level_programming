#include <stdio.h>
#include "_putchar.c"

/**
 * main - main
 * Return: algo
 */
int main(void)
{
char buf0[9] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};

for (size_t i = 0; i < 8; i++)
{
_putchar(buf0[i]);
}

_putchar('\n');

return (0);
}
