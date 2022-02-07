#include <stdio.h>
#include "_putchar.c"

/**
 * print_alphabet - print_alphabet
 * Return: algo
 */
void print_alphabet(void)
{
for (char a = 'a'; a <= 'z'; a++)
{
_putchar(a);
}
}

/**
 * main - main
 * Return: algo
 */
int main(void)
{

for (int i = 0; i < 10; i++)
{

print_alphabet();
_putchar('\n');

}
return (0);
}
