#include "main.h"

/**
 *print_diagonal - prints a diagonal line
 *@n: long of the line
 */

void print_diagonal(int n)
{
int a;
int b;

	for (a = 0; a < n; a++)
	{
		for (b = 0; b <= a; b++)
		{
			_putchar(32);
		}
		_putchar(92);
		_putchar(10);
	}
	if (n <= 0)
	{
		_putchar(10);
	}
}
