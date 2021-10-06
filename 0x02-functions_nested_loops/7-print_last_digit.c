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
		_putchar (last + '0');
		return (last);
		}
		else
		{
			last = ((n % 10) + '0');
			_putchar (last);
		return (last);
		}
	}
