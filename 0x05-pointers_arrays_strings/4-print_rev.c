#include "main.h"

/**
 *print_rev - prints a string reversed
 *@s: string to be reversed
 */
void print_rev(char *s)
{
	int i;
	int a = 0;

	for (i = 0; s[i] != 0; i++)
	{
		a++;
	}
	for (i = a - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
_putchar(10);
}
