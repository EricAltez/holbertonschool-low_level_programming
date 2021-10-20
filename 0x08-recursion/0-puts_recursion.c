#include "main.h"
/**
 *_puts_recursion - prints string usin recursion
 *@s: string to print
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		_putchar(s[i]);
		_puts_recursion(s + 1);
	}
	else
	{
	_putchar(10);
	}
}
