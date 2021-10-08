#include "main.h"

/**
 *print_square - prints an square
 *@size: size of the square
 */
void print_square(int size)
{

int a;
int b;

	for (a = 0; a < size; a++)
	{
		for (b = 0; b < size; b++)
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
