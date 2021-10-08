#include "main.h"

/**
 *print_triangle - print triangle
 *@size: size of the triangle
 */
void print_triangle(int size)
{
int a, b, c;

	for (a = 1; a <= size; a++)
	{
		for (b = 1; b <= size - a; b++)
		{
			_putchar(32);
		}
		for (c = 1; c <= a; c++)
		{
		_putchar(35);
		}
		_putchar(10);
	}
	if (size <= 0)
	{
	_putchar(10);
	}
}
