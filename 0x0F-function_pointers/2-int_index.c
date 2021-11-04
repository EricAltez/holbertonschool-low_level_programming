#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *int_index - searches for an integer
 *@array: array to search in
 *@size: number of elements in the array
 *@cmp: pointer to comparation function
 *Return: index of first cmp non 0 or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (!array)
		return (-1);
	if (!size)
		return (-1);
	if (!cmp)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]) != 0)
			return (i);
	}

return (-1);
}
