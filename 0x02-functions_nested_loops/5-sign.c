#include "main.h"

/**
 *print_sign - checks the sign and prints it
 *@n: The value to be checked
 *Return: 1 if positive, -1 if negative, 0 if 0
 */

int print_sign(int n)
{
	if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(43);
		return (1);
	}


}
