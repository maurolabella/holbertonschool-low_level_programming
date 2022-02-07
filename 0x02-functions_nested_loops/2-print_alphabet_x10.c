#include "main.h"

/**
 * print_alphabet - print_alphabet
 * Return: algo
 */
void print_alphabet(void)
{
char a;

for (a = 'a'; a <= 'z'; a++)
{
_putchar(a);
}
_putchar('\n');
}

/**
 * print_alphabet_x10 - print_alphabet
 * Return: algo
 */
void print_alphabet_x10(void)
{
int i;

for (i = 0; i < 10; i++)
{
print_alphabet();
}
return;
}
