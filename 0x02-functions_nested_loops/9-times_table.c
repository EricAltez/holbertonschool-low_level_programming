#include "main.h"

/**
 *times_table - prints 9 times table
 *
 *
 */

void times_table(void)
{
	int i;
	int a;
	int b;

	for (a = 0; a < 9; a++)
	{
		_putchar(48);
			for (b = 1; b < 9; b++)
			{
				_putchar(44);
				_putchar(32);
				i = b * a;
				if (i < 10)
				{
					_putchar(32);
				}
				else
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			}
		_putchar(10);
	}
}
