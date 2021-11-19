#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*flip_bits - count the number of bits fliped
*@n: first number
*@m: secondnumber
*Return: 1 or 0
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, aux_n, aux_m, res = 0;

	for (j = 63; j >= 0; j--)
	{
		aux_n = n >> j;
		aux_m = m >> j;
		res += 1 & (aux_n ^ aux_m);
	}
return (res);
}
