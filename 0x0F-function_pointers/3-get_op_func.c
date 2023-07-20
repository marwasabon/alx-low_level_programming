#include "calc.h"
#include <stdio.h>
#include <unistd.h>
/**
 * get_op_func - entry point
 * the given operator.
 * @s:  character
 *
 * Return: -1 or null (on Sucess)
 */

int (*get_op_func(char *s))(int, int)
{

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op != NULL && s[1] == '\0')
	{
		if (ops[i].op[0] == *s)
			return ((ops[i].f));
		i++;
	}

	return (NULL);

}
