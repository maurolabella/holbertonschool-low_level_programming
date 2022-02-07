#include <stdio.h>
#include <string.h>
#include <unistd.h>


/**
 * main - main
 * Return: algo
 */
int main(void)
{
char my[60] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

write(2, my, 59);

return (1);
}
