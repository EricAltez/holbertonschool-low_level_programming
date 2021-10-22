#include "main.h"
/**
*_aux - auxiliar function for recursion
*@n: base
*@i: auxiliar int to calculate square root
*Return: natural square root or -1
*/
int _aux(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_aux(n, i + 1));
}
/**
 *_sqrt_recursion - natural square root
 *@n: base
 *Return: natural square root or -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

return (_aux(n, 0));
}
