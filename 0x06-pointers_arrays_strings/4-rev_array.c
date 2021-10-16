#include "main.h"
/**
 *reverse_array - reverses the content of an array of integers.
 *@a: array
 *@n: number of elements on the array
 */
void reverse_array(int *a, int n)
{
	int i;
	int b = 0;
	int aux = 0;

	for (i = n - 1; i >= n / 2; i--)
	{
		aux = a[i];
		a[i] = a[b];
		a[b] = aux;
		b++;
	}
}
