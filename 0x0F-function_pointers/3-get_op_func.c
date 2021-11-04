#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *get_op_func - select function to operation selected
 *@s: operator selected
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

while (ops[i] != s)
{
	i++;
	if (ops[i] == NULL)
	{
		return (NULL);
	}
}

return (ops[i]);
}
