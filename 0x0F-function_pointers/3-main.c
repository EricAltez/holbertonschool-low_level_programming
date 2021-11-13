#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main - recives and manage input data
 *@argc: number of arguments
 *@argv: array of arguments
 *Return: operation result
 */
int main(int argc, char *argv[])
{
	int result = 0;
	int arg1 = 0;
	int arg2 = 0;
	char *operator = NULL;

	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);
	operator = argv[2];

	if (argc != 4)
	{
		printf("Error\n");
			exit(98);
	}
	result = get_op_func(operator)(arg1, arg2);
	if (result == '0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*operator == '/' || *operator == '%') && (argv[3] == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%i\n", result);
	return (0);
}
