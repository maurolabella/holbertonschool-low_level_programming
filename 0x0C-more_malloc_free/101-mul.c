#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * control_digits_in_string - permits only numeric digits in a stream
 * @str: receives a string
 * Return: On success 1.
 * On error, 0 is returned, and errno is set appropriately.
 */
int control_digits_in_string(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else
			return (0);
	}
	return (1);
}


/**
 * print_from_string - reverts and prints an inverted int array
 * @result: inverted array
 * @n: last position in the array
 * Return: Nothing.
 */
void print_from_string(int *result, int n)
{

	/**ignore '0's from the right*/
	while (n >= 0 && result[n] == 0)
		n--;
	/** If all were '0's - means either both or one of num1 or num2 were '0'*/
	if (n == -1)
	{
		_putchar('0');
	}
	/** genercharAte the result String or print it*/
	while (n >= 0)
	{
		_putchar((result[n--] + 48));
	}
	_putchar('\n');
}

/**
 * multiply - multiplies two strings as numbers
 * @num1: first string
 * @num2: second string
 * Return: Nothing.
 */
void multiply(char *num1, char *num2)
{
	int len1 = strlen(num1);
	int len2 = strlen(num2);
	int tmp = len1 + len2;
	int *result;
	int i_n1, i_n2;
	int i, j, n1, n2, carry, sum;

	if (len1 == 0 || len2 == 0)
	{
		_putchar('0');
	}
	result = malloc(tmp * sizeof(int));
	if (result == NULL)
		exit(98);
	while ((tmp - 1) >= 0)
		result[(tmp--) - 1] = 0;
	i_n1 = i_n2 = 0;
	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		n1 = num1[i] - '0';
		i_n2 = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			n2 = num2[j] - '0';
			sum = n1 * n2 + result[i_n1 + i_n2] + carry;
			carry = sum / 10;
			result[i_n1 + i_n2] = sum % 10;
			i_n2++;
		}
		if (carry > 0)
			result[i_n1 + i_n2] += carry;
		i_n1++;
	}
	i = len1 + len2 - 1;
	print_from_string(result, i);
	free(result);
}

/**
 * main - check the code
 * @argc: as always
 * @argv: as always
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	char *str1;
	char *str2;
	int minus;

	minus = 0;
	str1 = argv[1];
	str2 = argv[2];
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if ((str1[0] == '-' || str2[0] == '-') &&
		(str1[0] != '-' || str2[0] != '-'))
		minus = 1;
	if (str1[0] == '-' && str2[0] != '-')
		str1++;
	else if (str1[0] != '-' && str2[0] == '-')
		str2++;
	else if (str1[0] == '-' && str2[0] == '-')
	{
		str1++;
		str2++;
	}
	if (control_digits_in_string(str1) && control_digits_in_string(str2))
	{
		if (minus)
			_putchar('-');
		multiply(str1, str2);
		return (0);
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
}
