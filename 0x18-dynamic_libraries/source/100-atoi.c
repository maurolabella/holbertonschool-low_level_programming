#include "main.h"
#include <stdio.h>

/**
 * _atoi - search for numbers in a string in whimsical fashion
 * @s : receives string
 * Return: an integer.
 */
int _atoi(char *s)
{
	int i, flag, sign;
	unsigned int nmbr;

	i = 0;
	flag = 1;
	nmbr = 0;
	sign = 1;

	for (; s[i]; i++)
	{
		if (flag == 1)
		{
			if (s[i] == '-')
			{
				sign = sign * -1;
			}
			if (s[i] >= '0' && s[i] <= '9')
			{
				nmbr = 10 * nmbr + (s[i] - 48);
				if (s[i + 1] < '0' || s[i + 1] > '9')
				{
					flag = 0;
				}
			}
		}
		else
		{
			break;
		}
	}
	return (nmbr * sign);
}
