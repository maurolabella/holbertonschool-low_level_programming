#include<stdio.h>
#include<time.h>
#include<stdlib.h>

/**
 * main - main
 * Return: algo
 */
int main(void)

{

char ch;
char sl = '\n';

for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
for (ch = 'A'; ch <= 'Z'; ch++)
{
putchar(ch);
}
putchar(sl);

return (0);
}
