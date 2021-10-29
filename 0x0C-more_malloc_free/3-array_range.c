#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *array_range - creates an array of integers.
 *@min: min range
 *@max: max range
 *Return: pointer or NULL
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i = 0;
	int a = 0;

	if (min > max)
	{
		return (NULL);
	}
	a = max - min;
	a += 1;
	ptr = malloc(sizeof(int) * a);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++)
	{
		ptr[i] = min;
		min++;
	}
return (ptr);
}
