#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
 *linear_search - searches a value in an array using the Linear search.
 *@array: array to search
 *@size: number of elements in the array
 *@value: value to search for
 *Return: first index of value or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
return (-1);
}
