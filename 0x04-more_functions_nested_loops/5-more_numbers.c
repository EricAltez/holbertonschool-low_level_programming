#include "main.h"

/**
 *more_numbers - prints 10 times the numbers 0 to 14, new line.
 */
void more_numbers(void)
{
int i;
int a;

	for (i = 0; i < 10; i++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a >= 10)
			{
			_putchar(49);
			}
			_putchar((a % 10) + '0');
		}
	_putchar(10);
	}
}
