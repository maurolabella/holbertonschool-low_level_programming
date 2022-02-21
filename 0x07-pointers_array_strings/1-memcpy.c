#include "main.h"
#include <string.h>

/**
 * _memcpy - copies memory area
 * @dest: memory area targeted to print
 * @src: memory area sourced to copy
 * @n : bytes from memory area src to copy
 * Return: a pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *tmp_s = src;
	char *tmp_d = dest;

	while (tmp_s < src + n)
	{
		*tmp_d = *tmp_s;
		tmp_s++;
		tmp_d++;
	}
	return (dest);
}
