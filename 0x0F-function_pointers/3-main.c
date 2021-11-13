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
	char o;
	int (*func)(int, int);

	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);
	o = *argv[2];

	if (argc != 4)
	{
		printf("Error\n");
			exit(98);
	}
	func = get_op_func(argv[2]);
	if (!func)
	{
		printf("Error\n");
		exit(99);
	}
	if ((o == '/' || o == '%') && (arg2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	result = func(arg1, arg2);
	printf("%i\n", result);
	return (0);
}
