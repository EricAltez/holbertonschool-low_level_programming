#include "main.h"

/**
 *_isdigit - chacks for digits
 *@c: is the value to be checked
 *Return: 1 if digit
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}
