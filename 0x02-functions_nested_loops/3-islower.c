#include <stdio.h>
#include <ctype.h>
#include "_putchar.c"

/**
 * print_alphabet - print_alphabet
 * Return: algo
 *
*/
void print_alphabet(void)
{
for (char a = 'a'; a <= 'z'; a++)
{
_putchar(a);
}
}
/**
 * _islower - detect lowercases
 * Return: algo
 * @c : receives a character to be controlled
*/
int _islower(int c)
{
if (islower(c))
{
return (1);
}
else
{
return (0);
}
}

/**
 * main - main
 * Return: algo
 */
int main(void)
{
int r;

r = _islower('H');
_putchar(r + '0');
r = _islower('o');
_putchar(r + '0');
r = _islower(108);
_putchar(r + '0');
_putchar('\n');

return (0);
}
