#include "main.h"

/**
 *print_rev - prints a string reversed
 *@s: string to be reversed
 */
void print_rev(char *s)
{
int i;

	for (i = _strlen(s); s[i] >= 0; i--)
	{
		_putchar(s[i]);
	}
_putchar(10);
}
