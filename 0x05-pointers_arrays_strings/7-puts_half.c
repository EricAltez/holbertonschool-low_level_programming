#include "main.h"

/**
 *puts_half - prints last half of string
 *@str: string to be used
 */
void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
	{
	}
	if ((i % 2) != 0)
	{
	i = i - 1;
	i = i / 2;
	i = i + 1;
	}
	else
	{
	i = i / 2;
	}
	while (str[i] != 0)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar(10);
}
