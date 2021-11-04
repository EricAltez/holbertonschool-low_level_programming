#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *op_add - adds 2 integers
 *@a: first int
 *@b: second int
 *Return: a+b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 *op_sub - subtract 2 integers
 *@a: int 1
 *@b: int 2
 *Return: a-b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 *op_mul - multiply 2 integers
 *@a: int 1
 *@b: int 2
 *Return: a*b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 *op_div - divide 2 integers
 *@a: int 1
 *@b: int 2
 *Return: a/b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 *op_mod - gets the remainder of the division of 2 integers
 *@a: int 1
 *@b: int 2
 *Return: a%b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
