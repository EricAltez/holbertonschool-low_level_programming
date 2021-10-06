#include "main.h"

/**
 *print_last_digit - print s the last digit
 *Return: 0 success
 *@n: value to be checked
 */
	int print_last_digit(int n)
	{
		int last = n % 10;

		if (last < 0)
		{
		last = last * -1;
		_putchar (last + '0');
		return (last);
		}
		else
		_putchar (last + '0');
		return (last);
	}
