#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *print_name - prints a name
 *@name: the name to be printed
 *@f: pointer to function
 *Return: f(name)
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}