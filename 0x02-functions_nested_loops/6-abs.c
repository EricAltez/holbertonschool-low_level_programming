#include <main.h>

/**
*_abs - retur absolute value
*@n: value to print
*Return: on success 1.
*On error, -1 is returned, and error is set appropriately.
*/

	int _abs(int n)
	{
		if (n >=  0)
		{
		return (n);
		}
		else
		{
		return (n * -1);
		}
	}
