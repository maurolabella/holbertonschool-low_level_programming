#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * palindrome_check - returns 1 if a string is a palindrome
 * @s : receives a string
 * @start : initial control
 * @end : final control
 * Return: 1 if n is palindrome, 0 otherwise.
 */
int palindrome_check(char *s, int start, int end)
{
	if ((end - start == 1 && start == 0) || start == end || end < start)
	{
		return (1);
	}
	else
	{
		if (s[start] == s[end])
		{
			return (palindrome_check(s, (start + 1), (end - 1)));
		}
		else
		{
			return (0);
		}
	}
}

/**
 * is_palindrome - returns 1 if a string is a palindrome
 * @s : receives a string
 * Return: 1 if n is palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int l;

	l = strlen(s) - 1;
	return (palindrome_check(s, 0, l));
}
