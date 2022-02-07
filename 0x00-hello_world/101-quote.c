#include <stdio.h>
#include <string.h>
#include <unistd.h>


/**
 * main - main
 * Return: algo
 */
int main(void)
{
char mystr[60] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

write(2, mystr, 60);

return (1);
}
