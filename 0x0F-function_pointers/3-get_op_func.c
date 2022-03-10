#include<stdio.h>
#include<stddef.h>
#include<stdlib.h>
#include"3-calc.h"


/**
 * get_op_func - function operator
 * @s: operator passed as arguments
 * Return: a pointer to a function
 */
int (*get_op_func(char *s))(int, int)
{
	int i;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	i = 0;

	while (ops[i].op)
	{
		if (ops[i].op[0] == s[0])
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
