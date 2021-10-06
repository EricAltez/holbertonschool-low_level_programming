#include "main.h"

/**
 *print_last_digit - print s the last digit
 *Return: 0 success
 *@n: value to be checked
 */
	int print_last_digit(int n)
	{
		int last;

		if (n < 0)
		{
		last = ((n % 10) * -1);
		_putchar (last);
		}
		else
			_putchar(n % 10);
		return (0);
	}
