#include "main.h"
/**
 *_print_rev_recursion - prints a reversed string using recursion
 *@s: string to print
 */
void _print_rev_recursion(char *s)
{
int i = 0;

	if (*s)
	{
		_puts_recursion(s + 1);
		_putchar(s[i]);
	}
	else
	{
	_putchar(10);
	}

}
