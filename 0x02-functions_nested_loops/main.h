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
 * print_alphabet - print_alphabet
 * Return: algo
 */
void print_alphabet_x10(void)
{
for (int i = 0; i < 10; i++)
{
for (char a = 'a'; a <= 'z'; a++)
{
print_alphabet();
}
_putchar('\n');
}
return;
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
