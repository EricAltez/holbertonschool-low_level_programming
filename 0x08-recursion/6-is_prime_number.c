#include "main.h"
/**
*_aux - auxiliar function
*@n: int 1
*@i: int 2
*Return: aux
*/
int _aux(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (i > 0 && n % i == 0)
	{
		return (0);
	}
	return (_aux(n, n - 1));
}

/**
 *is_prime_number - checks if prime number
 *@n: number to check
 *Return: 1 if prime number or 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
	return (0);
	}
	return (_aux(n, n - 1));
}
