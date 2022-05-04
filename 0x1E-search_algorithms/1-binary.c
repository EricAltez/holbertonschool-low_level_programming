#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
 *binary_search - searches a value in an array using binary search.
 *@array: array to search
 *@size: number of elements in the array
 *@value: value to search for
 *Return: first index of value or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t mid;
	size_t i;

	if (array == NULL)
		return (-1);
	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (i == right)
				printf("%d\n", array[i]);
			else
				printf("%d, ", array[i]);
		}
		mid = (left + right) / 2;
		if (array[mid] < value)
			left = mid + 1;
		else
		{
			if (array[mid] > value)
				right = mid - 1;
			else
				return (mid);
		}
	}
return (-1);
}
